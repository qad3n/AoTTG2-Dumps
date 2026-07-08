// Type: UI.MapEditorHierarchyPanel
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/UI/MapEditorHierarchyPanel.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/UI/MapEditorMenu/MapEditorHierarchyPanel.cs  [CHANGED since prior version]
// --------------------------------

// UI.MapEditorHierarchyPanel.<>c__DisplayClass35_0$$.ctor
// il2cpp: void UI_MapEditorHierarchyPanel___c__DisplayClass35_0___ctor (UI_MapEditorHierarchyPanel___c__DisplayClass35_0_o* __this, const MethodInfo* method);
// 0x41140c0

void UI_MapEditorHierarchyPanel_<>c__DisplayClass35_0___ctor
               (UI_MapEditorHierarchyPanel___c__DisplayClass35_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// UI.MapEditorHierarchyPanel.<>c__DisplayClass35_0$$<CreateMapItem>b__0
// il2cpp: void UI_MapEditorHierarchyPanel___c__DisplayClass35_0___CreateMapItem_b__0 (UI_MapEditorHierarchyPanel___c__DisplayClass35_0_o* __this, const MethodInfo* method);
// 0x4114810

void UI_MapEditorHierarchyPanel_<>c__DisplayClass35_0__<CreateMapItem>b__0
               (UI_MapEditorHierarchyPanel___c__DisplayClass35_0_o *__this,MethodInfo *method)

{
  Map_MapObject_o *pMVar1;
  Map_MapScriptBaseObject_o *pMVar2;
  UI_MapEditorHierarchyPanel_o *__this_00;
  MethodInfo *in_RDX;
  
  pMVar1 = (__this->fields).obj;
  if (((pMVar1 != (Map_MapObject_o *)0x0) &&
      (pMVar2 = (pMVar1->fields).ScriptObject, pMVar2 != (Map_MapScriptBaseObject_o *)0x0)) &&
     (__this_00 = (__this->fields).__4__this, __this_00 != (UI_MapEditorHierarchyPanel_o *)0x0)) {
    UI_MapEditorHierarchyPanel__OnButtonClick(__this_00,(pMVar2->fields).Id,in_RDX);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.MapEditorHierarchyPanel.<>c__DisplayClass35_0$$<CreateMapItem>b__1
// il2cpp: void UI_MapEditorHierarchyPanel___c__DisplayClass35_0___CreateMapItem_b__1 (UI_MapEditorHierarchyPanel___c__DisplayClass35_0_o* __this, const MethodInfo* method);
// 0x4114840

void UI_MapEditorHierarchyPanel_<>c__DisplayClass35_0__<CreateMapItem>b__1
               (UI_MapEditorHierarchyPanel___c__DisplayClass35_0_o *__this,MethodInfo *method)

{
  Map_MapObject_o *pMVar1;
  
  pMVar1 = (__this->fields).obj;
  if (((pMVar1 != (Map_MapObject_o *)0x0) &&
      ((pMVar1->fields).ScriptObject != (Map_MapScriptBaseObject_o *)0x0)) &&
     ((__this->fields).__4__this != (UI_MapEditorHierarchyPanel_o *)0x0)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.MapEditorHierarchyPanel$$get_Width
// il2cpp: float UI_MapEditorHierarchyPanel__get_Width (UI_MapEditorHierarchyPanel_o* __this, const MethodInfo* method);
// 0x4112210

float UI_MapEditorHierarchyPanel__get_Width(UI_MapEditorHierarchyPanel_o *__this,MethodInfo *method)

{
  return 260.0;
}


// UI.MapEditorHierarchyPanel$$get_Height
// il2cpp: float UI_MapEditorHierarchyPanel__get_Height (UI_MapEditorHierarchyPanel_o* __this, const MethodInfo* method);
// 0x4112220

float UI_MapEditorHierarchyPanel__get_Height
                (UI_MapEditorHierarchyPanel_o *__this,MethodInfo *method)

{
  return 1005.0;
}


// UI.MapEditorHierarchyPanel$$get_TopBarHeight
// il2cpp: float UI_MapEditorHierarchyPanel__get_TopBarHeight (UI_MapEditorHierarchyPanel_o* __this, const MethodInfo* method);
// 0x4112230

float UI_MapEditorHierarchyPanel__get_TopBarHeight
                (UI_MapEditorHierarchyPanel_o *__this,MethodInfo *method)

{
  return 0.0;
}


// UI.MapEditorHierarchyPanel$$get_BottomBarHeight
// il2cpp: float UI_MapEditorHierarchyPanel__get_BottomBarHeight (UI_MapEditorHierarchyPanel_o* __this, const MethodInfo* method);
// 0x4112240

float UI_MapEditorHierarchyPanel__get_BottomBarHeight
                (UI_MapEditorHierarchyPanel_o *__this,MethodInfo *method)

{
  return 0.0;
}


// UI.MapEditorHierarchyPanel$$get_VerticalSpacing
// il2cpp: float UI_MapEditorHierarchyPanel__get_VerticalSpacing (UI_MapEditorHierarchyPanel_o* __this, const MethodInfo* method);
// 0x4112250

float UI_MapEditorHierarchyPanel__get_VerticalSpacing
                (UI_MapEditorHierarchyPanel_o *__this,MethodInfo *method)

{
  return 10.0;
}


// UI.MapEditorHierarchyPanel$$get_HorizontalPadding
// il2cpp: int32_t UI_MapEditorHierarchyPanel__get_HorizontalPadding (UI_MapEditorHierarchyPanel_o* __this, const MethodInfo* method);
// 0x4112260

int32_t UI_MapEditorHierarchyPanel__get_HorizontalPadding
                  (UI_MapEditorHierarchyPanel_o *__this,MethodInfo *method)

{
  return 0x14;
}


// UI.MapEditorHierarchyPanel$$get_VerticalPadding
// il2cpp: int32_t UI_MapEditorHierarchyPanel__get_VerticalPadding (UI_MapEditorHierarchyPanel_o* __this, const MethodInfo* method);
// 0x4112270

int32_t UI_MapEditorHierarchyPanel__get_VerticalPadding
                  (UI_MapEditorHierarchyPanel_o *__this,MethodInfo *method)

{
  return 10;
}


// UI.MapEditorHierarchyPanel$$Setup
// il2cpp: void UI_MapEditorHierarchyPanel__Setup (UI_MapEditorHierarchyPanel_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x4112280

void UI_MapEditorHierarchyPanel__Setup
               (UI_MapEditorHierarchyPanel_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  byte bVar1;
  Settings_StringSetting_o *setting;
  UI_ElementStyle_o *pUVar2;
  System_String_o *pSVar3;
  UI_ElementStyle_o *pUVar4;
  UnityEngine_GameObject_o *pUVar5;
  UnityEngine_Transform_o *pUVar6;
  UnityEngine_Events_UnityAction_o *pUVar7;
  UI_InputSettingElement_o *pUVar8;
  UnityEngine_UI_Text_o *method_00;
  Il2CppClass *pIVar9;
  UI_MapEditorMenu_o *pUVar10;
  
  if (DAT_057048cd == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ElementStyle);
    il2cpp_init_method_metadata(&MethodInfo_InputSettingElement_GetComponent_InputSettingEle);
    il2cpp_init_method_metadata(&MethodInfo_Text_GetComponent_Text);
    il2cpp_init_method_metadata(&TypeInfo_MapEditorGameManager);
    il2cpp_init_method_metadata(&MethodInfo_Void__Setup_b__32_0);
    il2cpp_init_method_metadata(&MethodInfo_Void__Setup_b__32_1);
    il2cpp_init_method_metadata(&MethodInfo_Void__Setup_b__32_2);
    il2cpp_init_method_metadata(&TypeInfo_MapEditorMenu);
    il2cpp_init_method_metadata(&TypeInfo_SceneLoader);
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    il2cpp_init_method_metadata(&TypeInfo_UnityAction);
    il2cpp_init_method_metadata(&"0/0");
    il2cpp_init_method_metadata(&"Icons/Navigation/ArrowRightIcon");
    il2cpp_init_method_metadata(&"");
    il2cpp_init_method_metadata(&"Icons/Navigation/ArrowLeftIcon");
    DAT_057048cd = '\x01';
  }
  UI_HeadedPanel__Setup((UI_HeadedPanel_o *)__this,parent,(MethodInfo *)0x0);
  pIVar9 = TypeInfo_MapEditorGameManager;
  pUVar10 = *(UI_MapEditorMenu_o **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x10);
  if (pUVar10 == (UI_MapEditorMenu_o *)0x0) {
    (__this->fields)._gameManager = (GameManagers_MapEditorGameManager_o *)0x0;
  }
  else {
    bVar1 = (TypeInfo_MapEditorGameManager->_2).naturalAligment;
    if (((((GameManagers_MapEditorGameManager_c *)pUVar10->klass)->_2).naturalAligment < bVar1) ||
       ((((GameManagers_MapEditorGameManager_c *)pUVar10->klass)->_2).typeHierarchy
        [(ulong)bVar1 - 1] != TypeInfo_MapEditorGameManager)) goto LAB_0411276b;
    (__this->fields)._gameManager = (GameManagers_MapEditorGameManager_o *)pUVar10;
    if (((((GameManagers_MapEditorGameManager_c *)pUVar10->klass)->_2).naturalAligment < bVar1) ||
       ((((GameManagers_MapEditorGameManager_c *)pUVar10->klass)->_2).typeHierarchy
        [(ulong)bVar1 - 1] != pIVar9)) goto LAB_0411276b;
  }
  il2cpp_runtime_glue(&(__this->fields)._gameManager);
  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
    il2cpp_init_class();
    pUVar10 = *(UI_MapEditorMenu_o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
    pIVar9 = TypeInfo_MapEditorMenu;
  }
  else {
    pUVar10 = *(UI_MapEditorMenu_o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
    pIVar9 = TypeInfo_MapEditorMenu;
  }
  TypeInfo_MapEditorMenu = pIVar9;
  if (pUVar10 == (UI_MapEditorMenu_o *)0x0) {
    (__this->fields)._menu = (UI_MapEditorMenu_o *)0x0;
LAB_041124ad:
    il2cpp_runtime_glue(&(__this->fields)._menu);
    pSVar3 = (System_String_o *)
             (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                       (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
    pUVar4 = (UI_ElementStyle_o *)il2cpp_runtime_glue(TypeInfo_ElementStyle);
    UI_ElementStyle___ctor(pUVar4,0x12,0.0,20.0,pSVar3,(MethodInfo *)0x0);
    (__this->fields)._style = pUVar4;
    il2cpp_runtime_glue(&(__this->fields)._style,pUVar4);
    pSVar3 = (System_String_o *)
             (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                       (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
    pUVar4 = (UI_ElementStyle_o *)il2cpp_runtime_glue(TypeInfo_ElementStyle);
    UI_ElementStyle___ctor(pUVar4,0x12,0.0,20.0,pSVar3,(MethodInfo *)0x0);
    pUVar5 = UI_ElementFactory__CreateHorizontalGroup
                       ((__this->fields).SinglePanel,10.0,3,(MethodInfo *)0x0);
    if (pUVar5 != (UnityEngine_GameObject_o *)0x0) {
      pUVar6 = UnityEngine_GameObject__get_transform(pUVar5,(MethodInfo *)0x0);
      (__this->fields)._topGroup = pUVar6;
      il2cpp_runtime_glue(&(__this->fields)._topGroup,pUVar6);
      setting = (__this->fields)._searchSetting;
      pUVar6 = (__this->fields)._topGroup;
      pUVar7 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_glue(TypeInfo_UnityAction);
      UnityEngine_Events_UnityAction___ctor();
      pUVar5 = UI_ElementFactory__CreateInputSetting
                         (pUVar6,pUVar4,(Settings_BaseSetting_o *)setting,"","",
                          100.0,32.0,0,(UnityEngine_Events_UnityAction_o *)0x0,pUVar7,
                          (System_Func_string__bool__o *)0x0,(System_Func_string__string__o *)0x0,
                          (MethodInfo *)0x0);
      if (pUVar5 != (UnityEngine_GameObject_o *)0x0) {
        pUVar8 = (UI_InputSettingElement_o *)
                 UnityEngine_GameObject__GetComponent<object>(pUVar5,MethodInfo_InputSettingElement_GetComponent_InputSettingEle);
        (__this->fields)._searchInput = pUVar8;
        il2cpp_runtime_glue(&(__this->fields)._searchInput,pUVar8);
        pUVar2 = (__this->fields)._style;
        pUVar6 = (__this->fields)._topGroup;
        pUVar7 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_glue(TypeInfo_UnityAction);
        UnityEngine_Events_UnityAction___ctor();
        UI_ElementFactory__CreateIconButton
                  (pUVar6,pUVar2,"Icons/Navigation/ArrowLeftIcon",18.0,18.0,pUVar7,(MethodInfo *)0x0);
        pUVar2 = (__this->fields)._style;
        pUVar6 = (__this->fields)._topGroup;
        pUVar7 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_glue(TypeInfo_UnityAction);
        UnityEngine_Events_UnityAction___ctor();
        UI_ElementFactory__CreateIconButton
                  (pUVar6,pUVar2,"Icons/Navigation/ArrowRightIcon",18.0,18.0,pUVar7,(MethodInfo *)0x0);
        UI_BasePanel__CreateHorizontalDivider
                  ((UI_BasePanel_o *)__this,(__this->fields).SinglePanel,1.0,(MethodInfo *)0x0);
        pUVar5 = UI_ElementFactory__CreateDefaultLabel
                           ((__this->fields)._topGroup,pUVar4,"0/0",0,4,(MethodInfo *)0x0);
        if (pUVar5 != (UnityEngine_GameObject_o *)0x0) {
          method_00 = (UnityEngine_UI_Text_o *)
                      UnityEngine_GameObject__GetComponent<object>(pUVar5,MethodInfo_Text_GetComponent_Text);
          (__this->fields)._pageLabel = method_00;
          il2cpp_runtime_glue(&(__this->fields)._pageLabel);
          UI_MapEditorHierarchyPanel__Sync(__this,(MethodInfo *)method_00);
          return;
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  bVar1 = (pIVar9->_2).naturalAligment;
  if ((bVar1 <= (((GameManagers_MapEditorGameManager_c *)pUVar10->klass)->_2).naturalAligment) &&
     ((((GameManagers_MapEditorGameManager_c *)pUVar10->klass)->_2).typeHierarchy[(ulong)bVar1 - 1]
      == pIVar9)) {
    (__this->fields)._menu = pUVar10;
    if ((bVar1 <= (((GameManagers_MapEditorGameManager_c *)pUVar10->klass)->_2).naturalAligment) &&
       ((((GameManagers_MapEditorGameManager_c *)pUVar10->klass)->_2).typeHierarchy
        [(ulong)bVar1 - 1] == pIVar9)) goto LAB_041124ad;
  }
LAB_0411276b:
                    /* WARNING: Subroutine does not return */
  il2cpp_unwind_resume(pUVar10,pIVar9);
}


// UI.MapEditorHierarchyPanel$$Show
// il2cpp: void UI_MapEditorHierarchyPanel__Show (UI_MapEditorHierarchyPanel_o* __this, const MethodInfo* method);
// 0x4113110

void UI_MapEditorHierarchyPanel__Show(UI_MapEditorHierarchyPanel_o *__this,MethodInfo *method)

{
  UI_BasePanel__Show((UI_BasePanel_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.MapEditorHierarchyPanel$$Sync
// il2cpp: void UI_MapEditorHierarchyPanel__Sync (UI_MapEditorHierarchyPanel_o* __this, const MethodInfo* method);
// 0x4112780

void UI_MapEditorHierarchyPanel__Sync(UI_MapEditorHierarchyPanel_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  int iVar3;
  System_Collections_Generic_List_GameObject__o *pSVar4;
  System_Collections_Generic_Dictionary_int__object__o *__this_00;
  System_Collections_Generic_Dictionary_int__int__o *pSVar5;
  System_Collections_Generic_HashSet_int__o *__this_01;
  Settings_StringSetting_o *pSVar6;
  System_Object_array *pSVar7;
  UnityEngine_UI_Text_o *pUVar8;
  UnityEngine_Transform_o *__this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o __this_05;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o __this_06;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o __this_07;
  long lVar9;
  UnityEngine_Object_o *obj;
  bool_conflict bVar10;
  int iVar11;
  int iVar12;
  System_Collections_Generic_List_object__o *__this_08;
  System_String_o *pSVar13;
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *__this_09;
  System_String_o *pSVar14;
  MethodInfo *method_00;
  UnityEngine_UI_LayoutGroup_o *__this_10;
  UnityEngine_RectOffset_o *__this_11;
  int iVar15;
  UnityEngine_UI_Text_c *method_01;
  int32_t iVar16;
  void *in_R8;
  undefined4 in_stack_ffffffffffffff68;
  undefined4 uVar17;
  UI_MapEditorHierarchyPanel_o *__this_12;
  Il2CppObject *pIVar18;
  _union_234436 _Var19;
  _union_234436 local_68;
  Il2CppType *pIStack_60;
  UnityEngine_Object_o *local_58;
  _union_234436 local_48;
  Il2CppType *pIStack_40;
  UnityEngine_Object_o *local_38;
  
  if (DAT_057048ce == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_HorizontalLayoutGroup_GetComponent_HorizontalLay);
    il2cpp_init_method_metadata(&MethodInfo_Void_Clear);
    il2cpp_init_method_metadata(&MethodInfo_Void_Clear);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_TKey_TValue__ValueCollection_System);
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_GameObject_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_MapObject_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_Void_Clear);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_Void_Clear);
    il2cpp_init_method_metadata(&MethodInfo_List_1_T__Enumerator_UnityEngine_GameObject__Get);
    il2cpp_init_method_metadata(&MethodInfo_List_1_Map_MapObject);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    il2cpp_init_method_metadata(&MethodInfo_MapObject_get_Item);
    il2cpp_init_method_metadata(&TypeInfo_List_MapObject);
    il2cpp_init_method_metadata(&TypeInfo_MapLoader);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeInfo_RectOffset);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Value);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_TKey_TValue__ValueCollection_TKey_T);
    il2cpp_init_method_metadata(&"/");
    il2cpp_init_method_metadata(&"");
    DAT_057048ce = '\x01';
  }
  uVar17 = 0;
  local_68.genericMethod = (Il2CppObject *)0x0;
  pIStack_60 = (Il2CppType *)0x0;
  local_58 = (UnityEngine_Object_o *)0x0;
  pIVar18 = (Il2CppObject *)0x0;
  pSVar4 = (__this->fields)._items;
  if (pSVar4 != (System_Collections_Generic_List_GameObject__o *)0x0) {
    System_Collections_Generic_List<object>__GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)&local_48,
               (System_Collections_Generic_List_object__o *)pSVar4,MethodInfo_List_1_T__Enumerator_UnityEngine_GameObject__Get);
    local_58 = local_38;
    local_68 = local_48;
    pIStack_60 = pIStack_40;
    __this_12 = __this;
    while (__this_03.fields._list._4_4_ = uVar17,
          __this_03.fields._list._0_4_ = in_stack_ffffffffffffff68,
          __this_03.fields._8_8_ = __this_12, __this_03.fields._current = pIVar18,
          bVar10 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                             (__this_03,(MethodInfo_3185E20 *)&local_68), obj = local_58,
          (char)bVar10 != '\0') {
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_init_class();
      }
      UnityEngine_Object__Destroy(obj,(MethodInfo *)0x0);
    }
    __this_04.fields._list._4_4_ = uVar17;
    __this_04.fields._list._0_4_ = in_stack_ffffffffffffff68;
    __this_04.fields._8_8_ = __this_12;
    __this_04.fields._current = pIVar18;
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (__this_04,(MethodInfo_3185E10 *)&local_68);
    pSVar4 = (__this->fields)._items;
    if (pSVar4 != (System_Collections_Generic_List_GameObject__o *)0x0) {
      piVar1 = &(pSVar4->fields)._version;
      *piVar1 = *piVar1 + 1;
      iVar16 = (pSVar4->fields)._size;
      (pSVar4->fields)._size = 0;
      if (0 < iVar16) {
        System_Array__Clear((System_Array_o *)(pSVar4->fields)._items,0,iVar16,(MethodInfo *)0x0);
      }
      __this_00 = (System_Collections_Generic_Dictionary_int__object__o *)(__this->fields)._idToItem
      ;
      if (__this_00 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
        System_Collections_Generic_Dictionary<int__object>__Clear(__this_00,MethodInfo_Void_Clear);
        pSVar5 = (__this->fields)._idToIndex;
        if (pSVar5 != (System_Collections_Generic_Dictionary_int__int__o *)0x0) {
          System_Collections_Generic_Dictionary<int__int>__Clear(pSVar5,MethodInfo_Void_Clear);
          pSVar5 = (__this->fields)._indexToId;
          if (pSVar5 != (System_Collections_Generic_Dictionary_int__int__o *)0x0) {
            System_Collections_Generic_Dictionary<int__int>__Clear(pSVar5,MethodInfo_Void_Clear);
            __this_01 = (__this->fields)._selected;
            if (__this_01 != (System_Collections_Generic_HashSet_int__o *)0x0) {
              System_Collections_Generic_HashSet<int>__Clear(__this_01,MethodInfo_Void_Clear);
              __this_08 = (System_Collections_Generic_List_object__o *)
                          il2cpp_runtime_glue(TypeInfo_List_MapObject);
              System_Collections_Generic_List<object>___ctor(__this_08,MethodInfo_List_1_Map_MapObject);
              pSVar6 = (__this->fields)._searchSetting;
              if ((pSVar6 != (Settings_StringSetting_o *)0x0) &&
                 (pSVar13 = (pSVar6->fields)._value, pSVar13 != (System_String_o *)0x0)) {
                pSVar13 = System_String__ToLower(pSVar13,(MethodInfo *)0x0);
                if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
                  il2cpp_init_class();
                }
                if (((System_Collections_Generic_Dictionary_int__object__o *)
                     **(undefined8 **)(TypeInfo_MapLoader + 0xb8) !=
                     (System_Collections_Generic_Dictionary_int__object__o *)0x0) &&
                   (__this_09 = System_Collections_Generic_Dictionary<int__object>__get_Values
                                          ((System_Collections_Generic_Dictionary_int__object__o *)
                                           **(undefined8 **)(TypeInfo_MapLoader + 0xb8),MethodInfo_Dictionary_2_TKey_TValue__ValueCollection_System),
                   __this_09 !=
                   (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)0x0)) {
                  System_Collections_Generic_Dictionary_ValueCollection<int__object>__GetEnumerator
                            ((System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o
                              *)&local_48,__this_09,MethodInfo_Dictionary_2_TKey_TValue__ValueCollection_TKey_T);
                  _Var19 = local_48;
                  if (__this_08 == (System_Collections_Generic_List_object__o *)0x0) {
                    do {
                      __this_06.fields._dictionary._4_4_ = uVar17;
                      __this_06.fields._dictionary._0_4_ = in_stack_ffffffffffffff68;
                      __this_06.fields._8_8_ = __this_12;
                      __this_06.fields._currentValue = _Var19.genericMethod;
                      bVar10 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator<int__object>__MoveNext
                                         (__this_06,(MethodInfo_31C3100 *)&stack0xffffffffffffff78);
                      if ((char)bVar10 == '\0') goto LAB_04112ce0;
                      bVar10 = System_String__op_Equality(pSVar13,"",(MethodInfo *)0x0);
                      if ((char)bVar10 != '\0') break;
                      if (local_38 == (UnityEngine_Object_o *)0x0) goto LAB_04112e94;
                      if (local_38[1].monitor == (void *)0x0) goto LAB_04112e99;
                      pSVar14 = *(System_String_o **)((long)local_38[1].monitor + 0x30);
                      if (pSVar14 == (System_String_o *)0x0) goto LAB_04112e9e;
                      pSVar14 = System_String__ToLower(pSVar14,(MethodInfo *)0x0);
                      if (pSVar14 == (System_String_o *)0x0) goto LAB_04112ea3;
                      bVar10 = System_String__Contains(pSVar14,pSVar13,(MethodInfo *)0x0);
                      if ((char)bVar10 != '\0') break;
                      if (local_38[1].monitor == (void *)0x0) goto LAB_04112ead;
                      pSVar14 = System_Int32__ToString
                                          ((int)local_38[1].monitor + 0x20,(MethodInfo *)0x0);
                      bVar10 = System_String__op_Equality(pSVar14,pSVar13,(MethodInfo *)0x0);
                    } while ((char)bVar10 == '\0');
                    /* WARNING: Subroutine does not return */
                    il2cpp_raise_exception();
                  }
                  while (__this_05.fields._dictionary._4_4_ = uVar17,
                        __this_05.fields._dictionary._0_4_ = in_stack_ffffffffffffff68,
                        __this_05.fields._8_8_ = __this_12,
                        __this_05.fields._currentValue = _Var19.genericMethod,
                        bVar10 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator<int__object>__MoveNext
                                           (__this_05,(MethodInfo_31C3100 *)&stack0xffffffffffffff78
                                           ), (char)bVar10 != '\0') {
                    bVar10 = System_String__op_Equality(pSVar13,"",(MethodInfo *)0x0);
                    if ((char)bVar10 != '\0') goto LAB_04112be0;
                    if (local_38 == (UnityEngine_Object_o *)0x0) {
LAB_04112e94:
                    /* WARNING: Subroutine does not return */
                      il2cpp_raise_exception();
                    }
                    if (local_38[1].monitor == (void *)0x0) {
LAB_04112e99:
                    /* WARNING: Subroutine does not return */
                      il2cpp_raise_exception();
                    }
                    pSVar14 = *(System_String_o **)((long)local_38[1].monitor + 0x30);
                    if (pSVar14 == (System_String_o *)0x0) {
LAB_04112e9e:
                    /* WARNING: Subroutine does not return */
                      il2cpp_raise_exception();
                    }
                    pSVar14 = System_String__ToLower(pSVar14,(MethodInfo *)0x0);
                    if (pSVar14 == (System_String_o *)0x0) {
LAB_04112ea3:
                    /* WARNING: Subroutine does not return */
                      il2cpp_raise_exception();
                    }
                    bVar10 = System_String__Contains(pSVar14,pSVar13,(MethodInfo *)0x0);
                    if ((char)bVar10 != '\0') goto LAB_04112be0;
                    if (local_38[1].monitor == (void *)0x0) {
LAB_04112ead:
                    /* WARNING: Subroutine does not return */
                      il2cpp_raise_exception();
                    }
                    pSVar14 = System_Int32__ToString
                                        ((int)local_38[1].monitor + 0x20,(MethodInfo *)0x0);
                    bVar10 = System_String__op_Equality(pSVar14,pSVar13,(MethodInfo *)0x0);
                    if ((char)bVar10 != '\0') {
LAB_04112be0:
                      lVar9 = MethodInfo_Void_Add;
                      piVar1 = &(__this_08->fields)._version;
                      *piVar1 = *piVar1 + 1;
                      pSVar7 = (__this_08->fields)._items;
                      if (pSVar7 == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
                        il2cpp_raise_exception();
                      }
                      uVar2 = (__this_08->fields)._size;
                      if (uVar2 < (uint)pSVar7->max_length) {
                        (__this_08->fields)._size = uVar2 + 1;
                        pSVar7->m_Items[(int)uVar2] = (Il2CppObject *)local_38;
                        il2cpp_runtime_glue(pSVar7->m_Items + (int)uVar2,local_38);
                      }
                      else {
                        System_Collections_Generic_List<object>__AddWithResize
                                  (__this_08,(Il2CppObject *)local_38,
                                   *(MethodInfo_35A7350 **)
                                    (*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
                      }
                    }
                  }
LAB_04112ce0:
                  __this_07.fields._dictionary._4_4_ = uVar17;
                  __this_07.fields._dictionary._0_4_ = in_stack_ffffffffffffff68;
                  __this_07.fields._8_8_ = __this_12;
                  __this_07.fields._currentValue = _Var19.genericMethod;
                  System_Collections_Generic_Dictionary_ValueCollection_Enumerator<int__object>__Dispose
                            (__this_07,(MethodInfo_31C30F0 *)&stack0xffffffffffffff78);
                  if (__this_08 != (System_Collections_Generic_List_object__o *)0x0) {
                    iVar3 = (__this_08->fields)._size;
                    iVar11 = (int)((ulong)((long)(iVar3 + -1) * -0x77777777) >> 0x20) + iVar3 + -1;
                    iVar12 = ((iVar11 >> 4) - (iVar11 >> 0x1f)) + 1;
                    piVar1 = &(__this_12->fields)._currentPage;
                    iVar11 = (__this_12->fields)._currentPage;
                    if (iVar11 <= iVar12) {
                      iVar12 = iVar11;
                    }
                    iVar15 = 1;
                    if (0 < iVar11) {
                      iVar15 = iVar12;
                    }
                    (__this_12->fields)._currentPage = iVar15;
                    pUVar8 = (__this_12->fields)._pageLabel;
                    pSVar13 = System_Int32__ToString((int32_t)piVar1,(MethodInfo *)0x0);
                    pSVar14 = System_Int32__ToString
                                        ((int32_t)&stack0xffffffffffffff6c,(MethodInfo *)0x0);
                    method_00 = (MethodInfo *)
                                System_String__Concat
                                          (pSVar13,"/",pSVar14,(MethodInfo *)0x0);
                    if (pUVar8 != (UnityEngine_UI_Text_o *)0x0) {
                      method_01 = pUVar8->klass;
                      (*(method_01->vtable)._75_set_text.methodPtr)
                                ((Il2CppMethodPointer)pUVar8,method_00,
                                 (method_01->vtable)._75_set_text.method,(void **)method_01,in_R8);
                      iVar11 = *piVar1;
                      if (-0x7fffffe3 < iVar11 * 0x1e) {
                        iVar12 = iVar11 * 0x1e + -0x1e;
                        do {
                          if (iVar12 < iVar3) {
                            method_00 = (MethodInfo *)
                                        System_Collections_Generic_List<object>__get_Item
                                                  (__this_08,iVar12,MethodInfo_MapObject_get_Item);
                            UI_MapEditorHierarchyPanel__CreateMapItem
                                      (__this_12,(Map_MapObject_o *)method_00,0,
                                       (MethodInfo *)method_01);
                            iVar11 = (__this_12->fields)._currentPage;
                          }
                          iVar12 = iVar12 + 1;
                          method_01 = (UnityEngine_UI_Text_c *)(ulong)(uint)(iVar11 * 0x1e);
                        } while (iVar12 < iVar11 * 0x1e);
                      }
                      UI_MapEditorHierarchyPanel__SyncSelectedItems(__this_12,method_00);
                      __this_02 = (__this_12->fields)._topGroup;
                      if (__this_02 != (UnityEngine_Transform_o *)0x0) {
                        __this_10 = (UnityEngine_UI_LayoutGroup_o *)
                                    UnityEngine_Component__GetComponent<object>
                                              ((UnityEngine_Component_o *)__this_02,MethodInfo_HorizontalLayoutGroup_GetComponent_HorizontalLay);
                        __this_11 = (UnityEngine_RectOffset_o *)il2cpp_runtime_glue(TypeInfo_RectOffset);
                        if (iVar3 < 1) {
                          iVar16 = 0;
                        }
                        else {
                          iVar16 = 10;
                        }
                        UnityEngine_RectOffset___ctor(__this_11,iVar16,0,0,0,(MethodInfo *)0x0);
                        if (__this_10 != (UnityEngine_UI_LayoutGroup_o *)0x0) {
                          UnityEngine_UI_LayoutGroup__set_padding
                                    (__this_10,__this_11,(MethodInfo *)0x0);
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
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.MapEditorHierarchyPanel$$CreateMapItem
// il2cpp: UnityEngine_GameObject_o* UI_MapEditorHierarchyPanel__CreateMapItem (UI_MapEditorHierarchyPanel_o* __this, Map_MapObject_o* obj, int32_t level, const MethodInfo* method);
// 0x4113120

UnityEngine_GameObject_o *
UI_MapEditorHierarchyPanel__CreateMapItem
          (UI_MapEditorHierarchyPanel_o *__this,Map_MapObject_o *obj,int32_t level,
          MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  long lVar3;
  System_Collections_Generic_List_GameObject__o *pSVar4;
  UnityEngine_GameObject_array *pUVar5;
  void *pvVar6;
  System_Collections_Generic_Dictionary_int__object__o *__this_00;
  System_Collections_Generic_Dictionary_int__int__o *pSVar7;
  UnityEngine_Events_UnityEvent_o *__this_01;
  Il2CppObject *pIVar8;
  UnityEngine_GameObject_o *__this_02;
  UnityEngine_Transform_o *pUVar9;
  UnityEngine_GameObject_o *pUVar10;
  UnityEngine_UI_Text_o *__this_03;
  UnityEngine_UI_LayoutGroup_o *__this_04;
  UnityEngine_RectOffset_o *__this_05;
  UnityEngine_UI_Selectable_o *__this_06;
  UnityEngine_Events_UnityAction_o *call;
  UnityEngine_UI_Selectable_c *pUVar11;
  void **ppvVar12;
  undefined8 uVar13;
  UnityEngine_Color_o UVar14;
  
  if (DAT_057048cf == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_LayoutElement_GetComponent_LayoutElement);
    il2cpp_init_method_metadata(&MethodInfo_Text_GetComponent_Text);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_MapEditorHirarchyButton_AddComponent_MapEditorHi);
    il2cpp_init_method_metadata(&MethodInfo_RectMask2D_AddComponent_RectMask2D);
    il2cpp_init_method_metadata(&MethodInfo_HorizontalLayoutGroup_GetComponent_HorizontalLay);
    il2cpp_init_method_metadata(&MethodInfo_LayoutElement_GetComponent_LayoutElement);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    il2cpp_init_method_metadata(&TypeInfo_RectOffset);
    il2cpp_init_method_metadata(&MethodInfo_Void__CreateMapItem_b__0);
    il2cpp_init_method_metadata(&MethodInfo_Void__CreateMapItem_b__1);
    il2cpp_init_method_metadata(&TypeInfo_c__DisplayClass35_0);
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    il2cpp_init_method_metadata(&TypeInfo_UnityAction);
    il2cpp_init_method_metadata(&"TextColor");
    il2cpp_init_method_metadata(&"DefaultPanel");
    il2cpp_init_method_metadata(&"Text");
    il2cpp_init_method_metadata(&"ArrowDownButton");
    il2cpp_init_method_metadata(&"Prefabs/Misc/MapEditorHierarchyButton");
    il2cpp_init_method_metadata(&"Highlight");
    il2cpp_init_method_metadata(&"DefaultLabel");
    il2cpp_init_method_metadata(&"ArrowRightButton");
    DAT_057048cf = '\x01';
  }
  pIVar8 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_c__DisplayClass35_0);
  System_Object___ctor(pIVar8,(MethodInfo *)0x0);
  if (pIVar8 != (Il2CppObject *)0x0) {
    pIVar8[1].klass = (Il2CppClass *)__this;
    il2cpp_runtime_glue(pIVar8 + 1,__this);
    ppvVar12 = &pIVar8[1].monitor;
    pIVar8[1].monitor = obj;
    il2cpp_runtime_glue(ppvVar12,obj);
    if ((pIVar8[1].monitor != (void *)0x0) &&
       (lVar3 = *(long *)((long)pIVar8[1].monitor + 0x20), lVar3 != 0)) {
      uVar13 = *(undefined8 *)(lVar3 + 0x30);
      __this_02 = UI_ElementFactory__InstantiateAndBind
                            ((__this->fields).SinglePanel,"Prefabs/Misc/MapEditorHierarchyButton",(MethodInfo *)0x0);
      lVar3 = MethodInfo_Void_Add;
      pSVar4 = (__this->fields)._items;
      if (pSVar4 != (System_Collections_Generic_List_GameObject__o *)0x0) {
        piVar1 = &(pSVar4->fields)._version;
        *piVar1 = *piVar1 + 1;
        pUVar5 = (pSVar4->fields)._items;
        if (pUVar5 != (UnityEngine_GameObject_array *)0x0) {
          uVar2 = (pSVar4->fields)._size;
          if (uVar2 < (uint)pUVar5->max_length) {
            (pSVar4->fields)._size = uVar2 + 1;
            pUVar5->m_Items[(int)uVar2] = __this_02;
            il2cpp_runtime_glue(pUVar5->m_Items + (int)uVar2,__this_02);
            pvVar6 = *ppvVar12;
          }
          else {
            System_Collections_Generic_List<object>__AddWithResize
                      ((System_Collections_Generic_List_object__o *)pSVar4,(Il2CppObject *)__this_02
                       ,*(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70));
            pvVar6 = *ppvVar12;
          }
          if (((pvVar6 != (void *)0x0) && (*(long *)((long)pvVar6 + 0x20) != 0)) &&
             (__this_00 = (System_Collections_Generic_Dictionary_int__object__o *)
                          (__this->fields)._idToItem,
             __this_00 != (System_Collections_Generic_Dictionary_int__object__o *)0x0)) {
            System_Collections_Generic_Dictionary<int__object>__Add
                      (__this_00,*(int32_t *)(*(long *)((long)pvVar6 + 0x20) + 0x20),
                       (Il2CppObject *)__this_02,MethodInfo_Void_Add);
            if (((*ppvVar12 != (void *)0x0) &&
                (lVar3 = *(long *)((long)*ppvVar12 + 0x20), lVar3 != 0)) &&
               ((pSVar4 = (__this->fields)._items,
                pSVar4 != (System_Collections_Generic_List_GameObject__o *)0x0 &&
                (pSVar7 = (__this->fields)._idToIndex,
                pSVar7 != (System_Collections_Generic_Dictionary_int__int__o *)0x0)))) {
              System_Collections_Generic_Dictionary<int__int>__Add
                        (pSVar7,*(int32_t *)(lVar3 + 0x20),(pSVar4->fields)._size + -1,MethodInfo_Void_Add)
              ;
              pSVar4 = (__this->fields)._items;
              if (((pSVar4 != (System_Collections_Generic_List_GameObject__o *)0x0) &&
                  (*ppvVar12 != (void *)0x0)) &&
                 ((lVar3 = *(long *)((long)*ppvVar12 + 0x20), lVar3 != 0 &&
                  ((((pSVar7 = (__this->fields)._indexToId,
                     pSVar7 != (System_Collections_Generic_Dictionary_int__int__o *)0x0 &&
                     (System_Collections_Generic_Dictionary<int__int>__Add
                                (pSVar7,(pSVar4->fields)._size + -1,*(int32_t *)(lVar3 + 0x20),
                                 MethodInfo_Void_Add), __this_02 != (UnityEngine_GameObject_o *)0x0)) &&
                    (pUVar9 = UnityEngine_GameObject__get_transform(__this_02,(MethodInfo *)0x0),
                    pUVar9 != (UnityEngine_Transform_o *)0x0)) &&
                   ((pUVar9 = UnityEngine_Transform__Find(pUVar9,"Highlight",(MethodInfo *)0x0),
                    pUVar9 != (UnityEngine_Transform_o *)0x0 &&
                    (pUVar10 = UnityEngine_Component__get_gameObject
                                         ((UnityEngine_Component_o *)pUVar9,(MethodInfo *)0x0),
                    pUVar10 != (UnityEngine_GameObject_o *)0x0)))))))) {
                UnityEngine_GameObject__SetActive(pUVar10,0,(MethodInfo *)0x0);
                pUVar9 = UnityEngine_GameObject__get_transform(__this_02,(MethodInfo *)0x0);
                if ((pUVar9 != (UnityEngine_Transform_o *)0x0) &&
                   ((pUVar9 = UnityEngine_Transform__Find(pUVar9,"Text",(MethodInfo *)0x0),
                    pUVar9 != (UnityEngine_Transform_o *)0x0 &&
                    (__this_03 = (UnityEngine_UI_Text_o *)
                                 UnityEngine_Component__GetComponent<object>
                                           ((UnityEngine_Component_o *)pUVar9,MethodInfo_Text_GetComponent_Text),
                    __this_03 != (UnityEngine_UI_Text_o *)0x0)))) {
                  (*(__this_03->klass->vtable)._75_set_text.methodPtr)
                            (__this_03,uVar13,(__this_03->klass->vtable)._75_set_text.method);
                  UnityEngine_UI_Text__set_horizontalOverflow(__this_03,1,(MethodInfo *)0x0);
                  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
                    il2cpp_init_class();
                  }
                  UVar14 = UI_UIManager__GetThemeColor
                                     ("DefaultPanel","DefaultLabel","TextColor","DefaultPanel",
                                      (MethodInfo *)0x0);
                  (*(__this_03->klass->vtable)._23_set_color.methodPtr)
                            (UVar14.fields._0_8_,UVar14.fields._8_8_,__this_03);
                  pUVar9 = UnityEngine_GameObject__get_transform(__this_02,(MethodInfo *)0x0);
                  if ((pUVar9 != (UnityEngine_Transform_o *)0x0) &&
                     (pUVar9 = UnityEngine_Transform__Find(pUVar9,"Text",(MethodInfo *)0x0),
                     pUVar9 != (UnityEngine_Transform_o *)0x0)) {
                    pIVar8 = UnityEngine_Component__GetComponent<object>
                                       ((UnityEngine_Component_o *)pUVar9,MethodInfo_LayoutElement_GetComponent_LayoutElement);
                    uVar13 = (*(__this->klass->vtable)._5_get_Width.methodPtr)
                                       (__this,(__this->klass->vtable)._5_get_Width.method);
                    if (pIVar8 != (Il2CppObject *)0x0) {
                      (*pIVar8->klass->vtable[0x24].methodPtr)
                                (CONCAT44((int)((ulong)uVar13 >> 0x20),(float)uVar13 + -40.0),pIVar8
                                 ,pIVar8->klass->vtable[0x24].method);
                      __this_04 = (UnityEngine_UI_LayoutGroup_o *)
                                  UnityEngine_GameObject__GetComponent<object>
                                            (__this_02,MethodInfo_HorizontalLayoutGroup_GetComponent_HorizontalLay);
                      __this_05 = (UnityEngine_RectOffset_o *)il2cpp_runtime_glue(TypeInfo_RectOffset);
                      UnityEngine_RectOffset___ctor
                                (__this_05,level * 10 + 10,0,0,0,(MethodInfo *)0x0);
                      if (__this_04 != (UnityEngine_UI_LayoutGroup_o *)0x0) {
                        UnityEngine_UI_LayoutGroup__set_padding
                                  (__this_04,__this_05,(MethodInfo *)0x0);
                        pIVar8 = UnityEngine_GameObject__GetComponent<object>
                                           (__this_02,MethodInfo_LayoutElement_GetComponent_LayoutElement);
                        (*(__this->klass->vtable)._5_get_Width.methodPtr)
                                  (__this,(__this->klass->vtable)._5_get_Width.method);
                        if (pIVar8 != (Il2CppObject *)0x0) {
                          (*pIVar8->klass->vtable[0x20].methodPtr)
                                    (pIVar8,pIVar8->klass->vtable[0x20].method);
                          pIVar8 = UnityEngine_GameObject__GetComponent<object>
                                             (__this_02,MethodInfo_LayoutElement_GetComponent_LayoutElement);
                          (*(__this->klass->vtable)._5_get_Width.methodPtr)
                                    (__this,(__this->klass->vtable)._5_get_Width.method);
                          if (pIVar8 != (Il2CppObject *)0x0) {
                            (*pIVar8->klass->vtable[0x24].methodPtr)
                                      (pIVar8,pIVar8->klass->vtable[0x24].method);
                            UnityEngine_GameObject__AddComponent<object>(__this_02,MethodInfo_RectMask2D_AddComponent_RectMask2D);
                            __this_06 = (UnityEngine_UI_Selectable_o *)
                                        UnityEngine_GameObject__AddComponent<object>
                                                  (__this_02,MethodInfo_MapEditorHirarchyButton_AddComponent_MapEditorHi);
                            call = (UnityEngine_Events_UnityAction_o *)
                                   il2cpp_runtime_glue(TypeInfo_UnityAction);
                            UnityEngine_Events_UnityAction___ctor();
                            pUVar11 = (UnityEngine_UI_Selectable_c *)
                                      il2cpp_runtime_glue(TypeInfo_UnityAction);
                            UnityEngine_Events_UnityAction___ctor();
                            if ((__this_06 != (UnityEngine_UI_Selectable_o *)0x0) &&
                               (__this_01 = (UnityEngine_Events_UnityEvent_o *)
                                            (__this_06->fields).m_CanvasGroupCache,
                               __this_01 != (UnityEngine_Events_UnityEvent_o *)0x0)) {
                              UnityEngine_Events_UnityEvent__AddListener
                                        (__this_01,call,(MethodInfo *)0x0);
                              __this_06[1].klass = pUVar11;
                              il2cpp_runtime_glue(__this_06 + 1);
                              UnityEngine_UI_Selectable__set_transition
                                        (__this_06,0,(MethodInfo *)0x0);
                              pUVar9 = UnityEngine_GameObject__get_transform
                                                 (__this_02,(MethodInfo *)0x0);
                              if ((pUVar9 != (UnityEngine_Transform_o *)0x0) &&
                                 ((pUVar9 = UnityEngine_Transform__Find
                                                      (pUVar9,"ArrowRightButton",(MethodInfo *)0x0),
                                  pUVar9 != (UnityEngine_Transform_o *)0x0 &&
                                  (pUVar10 = UnityEngine_Component__get_gameObject
                                                       ((UnityEngine_Component_o *)pUVar9,
                                                        (MethodInfo *)0x0),
                                  pUVar10 != (UnityEngine_GameObject_o *)0x0)))) {
                                UnityEngine_GameObject__SetActive(pUVar10,0,(MethodInfo *)0x0);
                                pUVar9 = UnityEngine_GameObject__get_transform
                                                   (__this_02,(MethodInfo *)0x0);
                                if ((pUVar9 != (UnityEngine_Transform_o *)0x0) &&
                                   ((pUVar9 = UnityEngine_Transform__Find
                                                        (pUVar9,"ArrowDownButton",(MethodInfo *)0x0),
                                    pUVar9 != (UnityEngine_Transform_o *)0x0 &&
                                    (pUVar10 = UnityEngine_Component__get_gameObject
                                                         ((UnityEngine_Component_o *)pUVar9,
                                                          (MethodInfo *)0x0),
                                    pUVar10 != (UnityEngine_GameObject_o *)0x0)))) {
                                  UnityEngine_GameObject__SetActive(pUVar10,0,(MethodInfo *)0x0);
                                  return __this_02;
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
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.MapEditorHierarchyPanel$$OnPageClick
// il2cpp: void UI_MapEditorHierarchyPanel__OnPageClick (UI_MapEditorHierarchyPanel_o* __this, bool left, const MethodInfo* method);
// 0x41140d0

void UI_MapEditorHierarchyPanel__OnPageClick
               (UI_MapEditorHierarchyPanel_o *__this,bool_conflict left,MethodInfo *method)

{
  undefined4 in_register_00000034;
  
  (__this->fields)._currentPage = (__this->fields)._currentPage + ((left ^ 1U) & 0xff) * 2 + -1;
  UI_MapEditorHierarchyPanel__Sync(__this,(MethodInfo *)(CONCAT44(in_register_00000034,left) ^ 1));
  return;
}


// UI.MapEditorHierarchyPanel$$OnButtonRelease
// il2cpp: void UI_MapEditorHierarchyPanel__OnButtonRelease (UI_MapEditorHierarchyPanel_o* __this, int32_t id, const MethodInfo* method);
// 0x41140f0

void UI_MapEditorHierarchyPanel__OnButtonRelease
               (UI_MapEditorHierarchyPanel_o *__this,int32_t id,MethodInfo *method)

{
  return;
}


// UI.MapEditorHierarchyPanel$$OnButtonClick
// il2cpp: void UI_MapEditorHierarchyPanel__OnButtonClick (UI_MapEditorHierarchyPanel_o* __this, int32_t id, const MethodInfo* method);
// 0x4114100

void UI_MapEditorHierarchyPanel__OnButtonClick
               (UI_MapEditorHierarchyPanel_o *__this,int32_t id,MethodInfo *method)

{
  int iVar1;
  UI_MapEditorMenu_o *__this_00;
  long lVar2;
  Settings_KeybindSetting_o *__this_01;
  System_Collections_Generic_HashSet_int__o *pSVar3;
  System_Collections_Generic_HashSet_MapObject__o *pSVar4;
  UnityEngine_Transform_o *__this_02;
  bool_conflict bVar5;
  bool_conflict bVar6;
  Map_MapObject_o *pMVar7;
  Il2CppObject *pIVar8;
  UnityEngine_Transform_o *__this_03;
  undefined4 in_register_00000034;
  MethodInfo *method_00;
  GameManagers_MapEditorGameManager_o *pGVar9;
  float fVar10;
  UnityEngine_Vector3_o UVar11;
  UnityEngine_Vector3_o UVar12;
  UnityEngine_Vector3_o value;
  float local_38;
  float fStack_34;
  
  method_00 = (MethodInfo *)CONCAT44(in_register_00000034,id);
  if (DAT_057048d0 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_MapObject_get_Item);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Contains);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    il2cpp_init_method_metadata(&TypeInfo_MapLoader);
    il2cpp_init_method_metadata(&TypeInfo_SceneLoader);
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    DAT_057048d0 = '\x01';
  }
  __this_00 = (__this->fields)._menu;
  if (__this_00 == (UI_MapEditorMenu_o *)0x0) goto LAB_0411445b;
  bVar5 = UI_MapEditorMenu__IsPopupActive(__this_00,method_00);
  if ((char)bVar5 != '\0') {
    return;
  }
  lVar2 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x38);
  if (((lVar2 == 0) || (lVar2 = *(long *)(lVar2 + 0x50), lVar2 == 0)) ||
     (__this_01 = *(Settings_KeybindSetting_o **)(lVar2 + 0x80),
     __this_01 == (Settings_KeybindSetting_o *)0x0)) goto LAB_0411445b;
  bVar5 = Settings_KeybindSetting__GetKey(__this_01,0,(MethodInfo *)0x0);
  pSVar3 = (__this->fields)._selected;
  if (pSVar3 == (System_Collections_Generic_HashSet_int__o *)0x0) goto LAB_0411445b;
  bVar6 = System_Collections_Generic_HashSet<int>__Contains(pSVar3,id,MethodInfo_Boolean_Contains);
  if ((char)bVar6 == '\0') {
    pSVar3 = (__this->fields)._selected;
    if (pSVar3 == (System_Collections_Generic_HashSet_int__o *)0x0) goto LAB_0411445b;
    iVar1 = (pSVar3->fields)._count;
    if ((~(byte)bVar5 & iVar1 != 0) != 0) {
      if (iVar1 < 1) goto LAB_04114435;
      pGVar9 = (__this->fields)._gameManager;
      if (pGVar9 == (GameManagers_MapEditorGameManager_o *)0x0) goto LAB_0411445b;
      goto LAB_041143c4;
    }
LAB_041143cb:
    pGVar9 = (__this->fields)._gameManager;
    if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
      il2cpp_init_class();
    }
    if (((System_Collections_Generic_Dictionary_int__object__o *)
         **(undefined8 **)(TypeInfo_MapLoader + 0xb8) ==
         (System_Collections_Generic_Dictionary_int__object__o *)0x0) ||
       (pMVar7 = (Map_MapObject_o *)
                 System_Collections_Generic_Dictionary<int__object>__get_Item
                           ((System_Collections_Generic_Dictionary_int__object__o *)
                            **(undefined8 **)(TypeInfo_MapLoader + 0xb8),id,MethodInfo_MapObject_get_Item),
       pGVar9 == (GameManagers_MapEditorGameManager_o *)0x0)) goto LAB_0411445b;
    GameManagers_MapEditorGameManager__SelectObject(pGVar9,pMVar7,(MethodInfo *)0x0);
    pGVar9 = (__this->fields)._gameManager;
  }
  else {
    pGVar9 = (__this->fields)._gameManager;
    if ((byte)bVar5 == 0) {
      if ((pGVar9 == (GameManagers_MapEditorGameManager_o *)0x0) ||
         (pSVar4 = (pGVar9->fields).SelectedObjects,
         pSVar4 == (System_Collections_Generic_HashSet_MapObject__o *)0x0)) goto LAB_0411445b;
      if ((pSVar4->fields)._count < 2) {
        lVar2 = *(long *)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
        if ((lVar2 != 0) && (lVar2 = *(long *)(lVar2 + 0x28), lVar2 != 0)) {
          __this_02 = *(UnityEngine_Transform_o **)(lVar2 + 0x10);
          if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (((((System_Collections_Generic_Dictionary_int__object__o *)
                 **(undefined8 **)(TypeInfo_MapLoader + 0xb8) !=
                 (System_Collections_Generic_Dictionary_int__object__o *)0x0) &&
               (pIVar8 = System_Collections_Generic_Dictionary<int__object>__get_Item
                                   ((System_Collections_Generic_Dictionary_int__object__o *)
                                    **(undefined8 **)(TypeInfo_MapLoader + 0xb8),id,MethodInfo_MapObject_get_Item),
               pIVar8 != (Il2CppObject *)0x0)) &&
              (pIVar8[1].monitor != (UnityEngine_GameObject_o *)0x0)) &&
             (__this_03 = UnityEngine_GameObject__get_transform(pIVar8[1].monitor,(MethodInfo *)0x0)
             , __this_03 != (UnityEngine_Transform_o *)0x0)) {
            UVar11 = UnityEngine_Transform__get_position(__this_03,(MethodInfo *)0x0);
            if (__this_02 != (UnityEngine_Transform_o *)0x0) {
              UVar12 = UnityEngine_Transform__get_forward(__this_02,(MethodInfo *)0x0);
              local_38 = UVar11.fields.x;
              fStack_34 = UVar11.fields.y;
              value.fields.x = UVar12.fields.x * -50.0 + local_38;
              value.fields.y = UVar12.fields.y * -50.0 + fStack_34;
              value.fields.z = UVar12.fields.z * -50.0 + UVar11.fields.z;
              UnityEngine_Transform__set_position(__this_02,value,(MethodInfo *)0x0);
              goto LAB_04114435;
            }
          }
        }
        goto LAB_0411445b;
      }
LAB_041143c4:
      GameManagers_MapEditorGameManager__DeselectAll(pGVar9,(MethodInfo *)0x0);
      goto LAB_041143cb;
    }
    if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
      il2cpp_init_class();
    }
    if (((System_Collections_Generic_Dictionary_int__object__o *)
         **(undefined8 **)(TypeInfo_MapLoader + 0xb8) ==
         (System_Collections_Generic_Dictionary_int__object__o *)0x0) ||
       (pMVar7 = (Map_MapObject_o *)
                 System_Collections_Generic_Dictionary<int__object>__get_Item
                           ((System_Collections_Generic_Dictionary_int__object__o *)
                            **(undefined8 **)(TypeInfo_MapLoader + 0xb8),id,MethodInfo_MapObject_get_Item),
       pGVar9 == (GameManagers_MapEditorGameManager_o *)0x0)) goto LAB_0411445b;
    GameManagers_MapEditorGameManager__DeselectObject(pGVar9,pMVar7,(MethodInfo *)0x0);
    pGVar9 = (__this->fields)._gameManager;
  }
  if (pGVar9 != (GameManagers_MapEditorGameManager_o *)0x0) {
    GameManagers_MapEditorGameManager__OnSelectionChange(pGVar9,(MethodInfo *)0x0);
LAB_04114435:
    (__this->fields)._lastClickedItem = id;
    fVar10 = UnityEngine_Time__get_time((MethodInfo *)0x0);
    (__this->fields)._lastclickedTime = fVar10;
    return;
  }
LAB_0411445b:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.MapEditorHierarchyPanel$$SyncSelectedItems
// il2cpp: void UI_MapEditorHierarchyPanel__SyncSelectedItems (UI_MapEditorHierarchyPanel_o* __this, const MethodInfo* method);
// 0x4113820

void UI_MapEditorHierarchyPanel__SyncSelectedItems
               (UI_MapEditorHierarchyPanel_o *__this,MethodInfo *method)

{
  GameManagers_MapEditorGameManager_o *pGVar1;
  System_Collections_Generic_HashSet_object__o *pSVar2;
  System_Collections_Generic_HashSet_int__o *pSVar3;
  System_Collections_Generic_Dictionary_int__object__o *pSVar4;
  System_Collections_Generic_List_Enumerator_int__o __this_00;
  System_Collections_Generic_List_Enumerator_int__o __this_01;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_02;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_03;
  int32_t key;
  bool_conflict bVar5;
  System_Collections_Generic_List_TSource__o *__this_04;
  UnityEngine_GameObject_o *pUVar6;
  UnityEngine_Transform_o *pUVar7;
  undefined8 in_stack_ffffffffffffff68;
  Il2CppObject *item;
  Il2CppMethodPointer pIVar8;
  _union_329995 _Var9;
  _union_329995 local_68;
  Il2CppType *pIStack_60;
  Il2CppType **local_58;
  _union_329995 local_48;
  Il2CppType *pIStack_40;
  Il2CppType **local_38;
  
  if (DAT_057048d1 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ContainsKey);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_TryGetValue);
    il2cpp_init_method_metadata(&MethodInfo_GameObject_get_Item);
    il2cpp_init_method_metadata(&MethodInfo_List_1_System_Int32__ToList_Int32);
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_MapObject_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Add);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Contains);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Contains);
    il2cpp_init_method_metadata(&MethodInfo_HashSet_1_T__Enumerator_Map_MapObject__GetEnumer);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Remove);
    il2cpp_init_method_metadata(&MethodInfo_List_1_T__Enumerator_System_Int32__GetEnumerator);
    il2cpp_init_method_metadata(&TypeInfo_MapLoader);
    il2cpp_init_method_metadata(&"Highlight");
    DAT_057048d1 = '\x01';
  }
  local_68.genericMethod = (Il2CppObject *)0x0;
  pIStack_60 = (Il2CppType *)0x0;
  local_58 = (Il2CppType **)0x0;
  item = (Il2CppObject *)0x0;
  pIVar8 = (Il2CppMethodPointer)0x0;
  __this_04 = System_Linq_Enumerable__ToList<int>
                        ((System_Collections_Generic_IEnumerable_TSource__o *)
                         (__this->fields)._selected,MethodInfo_List_1_System_Int32__ToList_Int32);
  if (__this_04 != (System_Collections_Generic_List_TSource__o *)0x0) {
    System_Collections_Generic_List<int>__GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)&local_48,
               (System_Collections_Generic_List_int__o *)__this_04,MethodInfo_List_1_T__Enumerator_System_Int32__GetEnumerator);
    local_58 = local_38;
    local_68 = local_48;
    pIStack_60 = pIStack_40;
    while( true ) {
      __this_00.fields._8_8_ = item;
      __this_00.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff68;
      __this_00.fields._16_8_ = pIVar8;
      bVar5 = System_Collections_Generic_List_Enumerator<int>__MoveNext
                        (__this_00,(MethodInfo_3181160 *)&local_68);
      if ((char)bVar5 == '\0') break;
      key = (int32_t)local_58;
      item = (Il2CppObject *)0x0;
      if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if ((System_Collections_Generic_Dictionary_int__object__o *)
          **(undefined8 **)(TypeInfo_MapLoader + 0xb8) ==
          (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      System_Collections_Generic_Dictionary<int__object>__TryGetValue
                ((System_Collections_Generic_Dictionary_int__object__o *)
                 **(undefined8 **)(TypeInfo_MapLoader + 0xb8),key,
                 (Il2CppObject **)&stack0xffffffffffffff70,MethodInfo_Boolean_TryGetValue);
      pGVar1 = (__this->fields)._gameManager;
      if (pGVar1 == (GameManagers_MapEditorGameManager_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      pSVar2 = (System_Collections_Generic_HashSet_object__o *)(pGVar1->fields).SelectedObjects;
      if (pSVar2 == (System_Collections_Generic_HashSet_object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      bVar5 = System_Collections_Generic_HashSet<object>__Contains(pSVar2,item,MethodInfo_Boolean_Contains);
      if ((char)bVar5 == '\0') {
        pSVar3 = (__this->fields)._selected;
        if (pSVar3 == (System_Collections_Generic_HashSet_int__o *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        System_Collections_Generic_HashSet<int>__Remove(pSVar3,key,MethodInfo_Boolean_Remove);
        pSVar4 = (System_Collections_Generic_Dictionary_int__object__o *)(__this->fields)._idToItem;
        if (pSVar4 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        bVar5 = System_Collections_Generic_Dictionary<int__object>__ContainsKey
                          (pSVar4,key,MethodInfo_Boolean_ContainsKey);
        if ((char)bVar5 != '\0') {
          pSVar4 = (System_Collections_Generic_Dictionary_int__object__o *)
                   (__this->fields)._idToItem;
          if (pSVar4 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          pUVar6 = (UnityEngine_GameObject_o *)
                   System_Collections_Generic_Dictionary<int__object>__get_Item
                             (pSVar4,key,MethodInfo_GameObject_get_Item);
          if (pUVar6 == (UnityEngine_GameObject_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          pUVar7 = UnityEngine_GameObject__get_transform(pUVar6,(MethodInfo *)0x0);
          if (pUVar7 == (UnityEngine_Transform_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          pUVar7 = UnityEngine_Transform__Find(pUVar7,"Highlight",(MethodInfo *)0x0);
          if (pUVar7 == (UnityEngine_Transform_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          pUVar6 = UnityEngine_Component__get_gameObject
                             ((UnityEngine_Component_o *)pUVar7,(MethodInfo *)0x0);
          if (pUVar6 == (UnityEngine_GameObject_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          UnityEngine_GameObject__SetActive(pUVar6,0,(MethodInfo *)0x0);
        }
      }
    }
    __this_01.fields._8_8_ = item;
    __this_01.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff68;
    __this_01.fields._16_8_ = pIVar8;
    System_Collections_Generic_List_Enumerator<int>__Dispose
              (__this_01,(MethodInfo_3181150 *)&local_68);
    pGVar1 = (__this->fields)._gameManager;
    if ((pGVar1 != (GameManagers_MapEditorGameManager_o *)0x0) &&
       (pSVar2 = (System_Collections_Generic_HashSet_object__o *)(pGVar1->fields).SelectedObjects,
       pSVar2 != (System_Collections_Generic_HashSet_object__o *)0x0)) {
      System_Collections_Generic_HashSet<object>__GetEnumerator
                ((System_Collections_Generic_HashSet_Enumerator_T__o *)&local_48,pSVar2,MethodInfo_HashSet_1_T__Enumerator_Map_MapObject__GetEnumer
                );
      _Var9 = local_48;
      while( true ) {
        do {
          __this_02.fields._8_8_ = item;
          __this_02.fields._set =
               (System_Collections_Generic_HashSet_T__o *)in_stack_ffffffffffffff68;
          __this_02.fields._current = _Var9.genericMethod;
          bVar5 = System_Collections_Generic_HashSet_Enumerator<object>__MoveNext
                            (__this_02,(MethodInfo_3185890 *)&stack0xffffffffffffff78);
          if ((char)bVar5 == '\0') {
            __this_03.fields._8_8_ = item;
            __this_03.fields._set =
                 (System_Collections_Generic_HashSet_T__o *)in_stack_ffffffffffffff68;
            __this_03.fields._current = _Var9.genericMethod;
            System_Collections_Generic_HashSet_Enumerator<object>__Dispose
                      (__this_03,(MethodInfo_3185880 *)&stack0xffffffffffffff78);
            return;
          }
          if (local_38 == (Il2CppType **)0x0) {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          if (local_38[4] == (Il2CppType *)0x0) {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          pSVar3 = (__this->fields)._selected;
          if (pSVar3 == (System_Collections_Generic_HashSet_int__o *)0x0) {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          bVar5 = System_Collections_Generic_HashSet<int>__Contains
                            (pSVar3,*(int32_t *)&local_38[4][2].data,MethodInfo_Boolean_Contains);
        } while ((char)bVar5 != '\0');
        if (local_38[4] == (Il2CppType *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        pSVar3 = (__this->fields)._selected;
        if (pSVar3 == (System_Collections_Generic_HashSet_int__o *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        System_Collections_Generic_HashSet<int>__Add
                  (pSVar3,*(int32_t *)&local_38[4][2].data,MethodInfo_Boolean_Add);
        if (local_38[4] == (Il2CppType *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        pSVar4 = (System_Collections_Generic_Dictionary_int__object__o *)(__this->fields)._idToItem;
        if (pSVar4 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) break;
        bVar5 = System_Collections_Generic_Dictionary<int__object>__ContainsKey
                          (pSVar4,*(int32_t *)&local_38[4][2].data,MethodInfo_Boolean_ContainsKey);
        if ((char)bVar5 != '\0') {
          if (local_38[4] == (Il2CppType *)0x0) {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          pSVar4 = (System_Collections_Generic_Dictionary_int__object__o *)
                   (__this->fields)._idToItem;
          if (pSVar4 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          pUVar6 = (UnityEngine_GameObject_o *)
                   System_Collections_Generic_Dictionary<int__object>__get_Item
                             (pSVar4,*(int32_t *)&local_38[4][2].data,MethodInfo_GameObject_get_Item);
          if (pUVar6 == (UnityEngine_GameObject_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          pUVar7 = UnityEngine_GameObject__get_transform(pUVar6,(MethodInfo *)0x0);
          if (pUVar7 == (UnityEngine_Transform_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          pUVar7 = UnityEngine_Transform__Find(pUVar7,"Highlight",(MethodInfo *)0x0);
          if (pUVar7 == (UnityEngine_Transform_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          pUVar6 = UnityEngine_Component__get_gameObject
                             ((UnityEngine_Component_o *)pUVar7,(MethodInfo *)0x0);
          if (pUVar6 == (UnityEngine_GameObject_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          UnityEngine_GameObject__SetActive(pUVar6,1,(MethodInfo *)0x0);
        }
      }
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.MapEditorHierarchyPanel$$Update
// il2cpp: void UI_MapEditorHierarchyPanel__Update (UI_MapEditorHierarchyPanel_o* __this, const MethodInfo* method);
// 0x41145c0

void UI_MapEditorHierarchyPanel__Update(UI_MapEditorHierarchyPanel_o *__this,MethodInfo *method)

{
  return;
}


// UI.MapEditorHierarchyPanel$$.ctor
// il2cpp: void UI_MapEditorHierarchyPanel___ctor (UI_MapEditorHierarchyPanel_o* __this, const MethodInfo* method);
// 0x41145d0

void UI_MapEditorHierarchyPanel___ctor(UI_MapEditorHierarchyPanel_o *__this,MethodInfo *method)

{
  System_String_o *defaultValue;
  System_Collections_Generic_List_GameObject__o *__this_00;
  System_Collections_Generic_Dictionary_int__object__o *__this_01;
  System_Collections_Generic_Dictionary_int__int__o *pSVar1;
  System_Collections_Generic_HashSet_int__o *__this_02;
  Settings_StringSetting_o *__this_03;
  
  if (DAT_057048d2 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_System_Int32_System_Int32);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_System_Int32_UnityEngine_GameObject);
    il2cpp_init_method_metadata(&TypeInfo_Dictionary_int__GameObject);
    il2cpp_init_method_metadata(&TypeInfo_Dictionary_int__int);
    il2cpp_init_method_metadata(&MethodInfo_HashSet_1_System_Int32);
    il2cpp_init_method_metadata(&TypeInfo_HashSet_int);
    il2cpp_init_method_metadata(&MethodInfo_List_1_UnityEngine_GameObject);
    il2cpp_init_method_metadata(&TypeInfo_List_GameObject);
    il2cpp_init_method_metadata(&TypeInfo_StringSetting);
    DAT_057048d2 = '\x01';
  }
  __this_00 = (System_Collections_Generic_List_GameObject__o *)il2cpp_runtime_glue(TypeInfo_List_GameObject);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,MethodInfo_List_1_UnityEngine_GameObject);
  (__this->fields)._items = __this_00;
  il2cpp_runtime_glue(&(__this->fields)._items,__this_00);
  __this_01 = (System_Collections_Generic_Dictionary_int__object__o *)
              il2cpp_runtime_glue(TypeInfo_Dictionary_int__GameObject);
  System_Collections_Generic_Dictionary<int__object>___ctor(__this_01,MethodInfo_Dictionary_2_System_Int32_UnityEngine_GameObject);
  (__this->fields)._idToItem = (System_Collections_Generic_Dictionary_int__GameObject__o *)__this_01
  ;
  il2cpp_runtime_glue(&(__this->fields)._idToItem,__this_01);
  pSVar1 = (System_Collections_Generic_Dictionary_int__int__o *)il2cpp_runtime_glue(TypeInfo_Dictionary_int__int);
  System_Collections_Generic_Dictionary<int__int>___ctor(pSVar1,MethodInfo_Dictionary_2_System_Int32_System_Int32);
  (__this->fields)._idToIndex = pSVar1;
  il2cpp_runtime_glue(&(__this->fields)._idToIndex,pSVar1);
  pSVar1 = (System_Collections_Generic_Dictionary_int__int__o *)il2cpp_runtime_glue(TypeInfo_Dictionary_int__int);
  System_Collections_Generic_Dictionary<int__int>___ctor(pSVar1,MethodInfo_Dictionary_2_System_Int32_System_Int32);
  (__this->fields)._indexToId = pSVar1;
  il2cpp_runtime_glue(&(__this->fields)._indexToId,pSVar1);
  __this_02 = (System_Collections_Generic_HashSet_int__o *)il2cpp_runtime_glue(TypeInfo_HashSet_int);
  System_Collections_Generic_HashSet<int>___ctor(__this_02,MethodInfo_HashSet_1_System_Int32);
  (__this->fields)._selected = __this_02;
  il2cpp_runtime_glue(&(__this->fields)._selected,__this_02);
  (__this->fields)._lastClickedItem = -1;
  defaultValue = (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
  __this_03 = (Settings_StringSetting_o *)il2cpp_runtime_glue(TypeInfo_StringSetting);
  Settings_StringSetting___ctor(__this_03,defaultValue,0x7fffffff,(MethodInfo *)0x0);
  (__this->fields)._searchSetting = __this_03;
  il2cpp_runtime_glue(&(__this->fields)._searchSetting);
  UI_HeadedPanel___ctor((UI_HeadedPanel_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.MapEditorHierarchyPanel$$<Setup>b__32_0
// il2cpp: void UI_MapEditorHierarchyPanel___Setup_b__32_0 (UI_MapEditorHierarchyPanel_o* __this, const MethodInfo* method);
// 0x41147e0

void UI_MapEditorHierarchyPanel__<Setup>b__32_0
               (UI_MapEditorHierarchyPanel_o *__this,MethodInfo *method)

{
  UI_MapEditorHierarchyPanel__Sync(__this,method);
  return;
}


// UI.MapEditorHierarchyPanel$$<Setup>b__32_1
// il2cpp: void UI_MapEditorHierarchyPanel___Setup_b__32_1 (UI_MapEditorHierarchyPanel_o* __this, const MethodInfo* method);
// 0x41147f0

void UI_MapEditorHierarchyPanel__<Setup>b__32_1
               (UI_MapEditorHierarchyPanel_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  
  piVar1 = &(__this->fields)._currentPage;
  *piVar1 = *piVar1 + -1;
  UI_MapEditorHierarchyPanel__Sync(__this,method);
  return;
}


// UI.MapEditorHierarchyPanel$$<Setup>b__32_2
// il2cpp: void UI_MapEditorHierarchyPanel___Setup_b__32_2 (UI_MapEditorHierarchyPanel_o* __this, const MethodInfo* method);
// 0x4114800

void UI_MapEditorHierarchyPanel__<Setup>b__32_2
               (UI_MapEditorHierarchyPanel_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  
  piVar1 = &(__this->fields)._currentPage;
  *piVar1 = *piVar1 + 1;
  UI_MapEditorHierarchyPanel__Sync(__this,method);
  return;
}


