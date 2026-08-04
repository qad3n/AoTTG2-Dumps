// Type: UI.MapEditorAddObjectPanel
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/MapEditorAddObjectPanel.cs
// Prior real C# source (older reference): Assets/Scripts/UI/MapEditorMenu/MapEditorAddObjectPanel.cs
// --------------------------------

// UI.MapEditorAddObjectPanel.<>c$$.cctor
// il2cpp: void UI_MapEditorAddObjectPanel___c___cctor (const MethodInfo* method);
// 0x4419040

void UI_MapEditorAddObjectPanel___c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (g_data_057ae629 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ae629 = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = __this;
  il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_c + 0xb8),__this);
  return;
}


// UI.MapEditorAddObjectPanel.<>c$$.ctor
// il2cpp: void UI_MapEditorAddObjectPanel___c___ctor (UI_MapEditorAddObjectPanel___c_o* __this, const MethodInfo* method);
// 0x44190b0

void UI_MapEditorAddObjectPanel___c___ctor(UI_MapEditorAddObjectPanel___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// UI.MapEditorAddObjectPanel.<>c$$<GetItems>b__10_0
// il2cpp: System_String_o* UI_MapEditorAddObjectPanel___c___GetItems_b__10_0 (UI_MapEditorAddObjectPanel___c_o* __this, Map_MapScriptBaseObject_o* x, const MethodInfo* method);
// 0x44190c0

System_String_o *
UI_MapEditorAddObjectPanel___c___GetItems_b__10_0
          (UI_MapEditorAddObjectPanel___c_o *__this,Map_MapScriptBaseObject_o *x,MethodInfo *method)

{
  long *plVar1;
  code *vtableDispatch;
  System_String_o *pSVar2;
  
  if (x != (Map_MapScriptBaseObject_o *)0x0) {
    return *(System_String_o **)&(x->fields).Visible;
  }
  il2cpp_runtime_helper_022b2c90();
  plVar1 = __this[1].monitor;
  if (plVar1 != (long *)0x0) {
    vtableDispatch = *(code **)(*plVar1 + 0x388);
    pSVar2 = (System_String_o *)
             (*vtableDispatch)
                       (plVar1,__this[1].klass,*(undefined8 *)(*plVar1 + 0x390),vtableDispatch);
    return pSVar2;
  }
  il2cpp_runtime_helper_022b2c90();
  return (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
}


// UI.MapEditorAddObjectPanel.<>c__DisplayClass13_0$$.ctor
// il2cpp: void UI_MapEditorAddObjectPanel___c__DisplayClass13_0___ctor (UI_MapEditorAddObjectPanel___c__DisplayClass13_0_o* __this, const MethodInfo* method);
// 0x4418820

void UI_MapEditorAddObjectPanel___c__DisplayClass13_0___ctor
               (UI_MapEditorAddObjectPanel___c__DisplayClass13_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// UI.MapEditorAddObjectPanel.<>c__DisplayClass13_0$$<CreateRow>b__0
// il2cpp: void UI_MapEditorAddObjectPanel___c__DisplayClass13_0___CreateRow_b__0 (UI_MapEditorAddObjectPanel___c__DisplayClass13_0_o* __this, const MethodInfo* method);
// 0x44190e0

void UI_MapEditorAddObjectPanel___c__DisplayClass13_0___CreateRow_b__0
               (UI_MapEditorAddObjectPanel___c__DisplayClass13_0_o *__this,MethodInfo *method)

{
  UI_MapEditorAddObjectPanel_o *pUVar1;
  Il2CppMethodPointer vtableDispatch;
  
  pUVar1 = (__this->fields).__4__this;
  if (pUVar1 != (UI_MapEditorAddObjectPanel_o *)0x0) {
    vtableDispatch = (pUVar1->klass->vtable)._37_OnSelectObject.methodPtr;
    (*vtableDispatch)
              (pUVar1,(__this->fields).item,(pUVar1->klass->vtable)._37_OnSelectObject.method,
               vtableDispatch);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  return;
}


// UI.MapEditorAddObjectPanel$$get_ScrollBar
// il2cpp: bool UI_MapEditorAddObjectPanel__get_ScrollBar (UI_MapEditorAddObjectPanel_o* __this, const MethodInfo* method);
// 0x4417300

bool_conflict
UI_MapEditorAddObjectPanel__get_ScrollBar(UI_MapEditorAddObjectPanel_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// UI.MapEditorAddObjectPanel$$get_VerticalSpacing
// il2cpp: float UI_MapEditorAddObjectPanel__get_VerticalSpacing (UI_MapEditorAddObjectPanel_o* __this, const MethodInfo* method);
// 0x4417310

float UI_MapEditorAddObjectPanel__get_VerticalSpacing(UI_MapEditorAddObjectPanel_o *__this,MethodInfo *method)

{
  return 12.0;
}


// UI.MapEditorAddObjectPanel$$get_HorizontalPadding
// il2cpp: int32_t UI_MapEditorAddObjectPanel__get_HorizontalPadding (UI_MapEditorAddObjectPanel_o* __this, const MethodInfo* method);
// 0x4417320

int32_t UI_MapEditorAddObjectPanel__get_HorizontalPadding
                  (UI_MapEditorAddObjectPanel_o *__this,MethodInfo *method)

{
  return 0xf;
}


// UI.MapEditorAddObjectPanel$$get_VerticalPadding
// il2cpp: int32_t UI_MapEditorAddObjectPanel__get_VerticalPadding (UI_MapEditorAddObjectPanel_o* __this, const MethodInfo* method);
// 0x4417330

int32_t UI_MapEditorAddObjectPanel__get_VerticalPadding
                  (UI_MapEditorAddObjectPanel_o *__this,MethodInfo *method)

{
  return 10;
}


// UI.MapEditorAddObjectPanel$$Setup
// il2cpp: void UI_MapEditorAddObjectPanel__Setup (UI_MapEditorAddObjectPanel_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x4417340

void UI_MapEditorAddObjectPanel__Setup
               (UI_MapEditorAddObjectPanel_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  byte bVar1;
  UnityEngine_GameObject_o *pUVar2;
  UnityEngine_GameObject_c *a;
  long lVar3;
  System_Collections_Generic_List_Enumerator_object__o __this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  bool_conflict bVar4;
  System_String_o *pSVar5;
  System_Collections_Generic_List_List_T___o *__this_04;
  long *plVar6;
  UI_MapEditorAddObjectPanel_c *method_00;
  MethodInfo *method_01;
  UnityEngine_GameObject_c *__this_05;
  undefined1 auVar7 [12];
  System_Collections_Generic_List_T__o *pSVar8;
  Il2CppMethodPointer pIVar9;
  System_Collections_Generic_List_string__o *items;
  
  if (g_data_057ae622 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_List_1_System_String_GetEnumerator);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapEditorAddObjectPopup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_List_1_System_String_GroupItems_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Util);
    g_data_057ae622 = '\x01';
  }
  pSVar8 = (System_Collections_Generic_List_T__o *)0x0;
  pIVar9 = (Il2CppMethodPointer)0x0;
  items = (System_Collections_Generic_List_string__o *)0x0;
  UI_BasePanel__Setup((UI_BasePanel_o *)__this,parent,(MethodInfo *)0x0);
  if (parent != (UI_BasePanel_o *)0x0) {
    bVar1 = (TypeInfo_MapEditorAddObjectPopup->_2).naturalAligment;
    if (((parent->klass->_2).naturalAligment < bVar1) ||
       ((parent->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_MapEditorAddObjectPopup)) goto label_0441751f;
    pSVar5 = UI_BasePanel__GetCurrentCategoryName(parent,(MethodInfo *)0x0);
    pUVar2 = parent[1].fields._currentCategoryPanel;
    if (pUVar2 != (UnityEngine_GameObject_o *)0x0) {
      a = pUVar2[1].klass;
      method_00 = __this->klass;
      parent = (UI_BasePanel_o *)
               (*(method_00->vtable)._35_GetItems.methodPtr)
                         (__this,pSVar5,(method_00->vtable)._35_GetItems.method);
      __this_05 = a;
      bVar4 = System_String__op_Inequality
                        ((System_String_o *)a,(System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8),
                         (MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        parent = (UI_BasePanel_o *)
                 UI_MapEditorAddObjectPanel__Filter
                           ((UI_MapEditorAddObjectPanel_o *)__this_05,
                            (System_Collections_Generic_List_string__o *)parent,(System_String_o *)a,
                            (MethodInfo *)method_00);
      }
      if (*(int *)(TypeInfo_Util + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      __this_04 = Utility_Util__GroupItems_object_
                            ((System_Collections_Generic_List_T__o *)parent,8,MethodInfo_List_1_List_1_System_String_GroupItems_String);
      if (__this_04 != (System_Collections_Generic_List_List_T___o *)0x0) {
        System_Collections_Generic_List_object___GetEnumerator
                  ((System_Collections_Generic_List_Enumerator_T__o *)&stack0xffffffffffffffc8,
                   (System_Collections_Generic_List_object__o *)__this_04,MethodInfo_List_1_T_Enumerator_List_1_System_String_GetEnumerator);
        while (__this_00.fields._8_8_ = pIVar9, __this_00.fields._list = pSVar8,
              __this_00.fields._current = (Il2CppObject *)items,
              bVar4 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                (__this_00,(MethodInfo_321A1D0 *)&stack0xffffffffffffffc8),
              (char)bVar4 != '\0') {
          UI_MapEditorAddObjectPanel__CreateRow(__this,items,method_01);
        }
        __this_01.fields._8_8_ = pIVar9;
        __this_01.fields._list = pSVar8;
        __this_01.fields._current = (Il2CppObject *)items;
        System_Collections_Generic_List_Enumerator_object___Dispose
                  (__this_01,(MethodInfo_321A1C0 *)&stack0xffffffffffffffc8);
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
label_0441751f:
  auVar7 = il2cpp_runtime_helper_022b2fd0(parent);
  if (auVar7._8_4_ == 1) {
    plVar6 = (long *)__cxa_begin_catch(auVar7._0_8_);
    lVar3 = *plVar6;
    __cxa_end_catch();
    __this_02.fields._8_8_ = pIVar9;
    __this_02.fields._list = pSVar8;
    __this_02.fields._current = (Il2CppObject *)items;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_02,(MethodInfo_321A1C0 *)&stack0xffffffffffffffc8);
    if (lVar3 == 0) {
      return;
    }
    il2cpp_runtime_helper_022fefe0(lVar3);
  }
  __this_03.fields._8_8_ = pIVar9;
  __this_03.fields._list = pSVar8;
  __this_03.fields._current = (Il2CppObject *)items;
  System_Collections_Generic_List_Enumerator_object___Dispose
            (__this_03,(MethodInfo_321A1C0 *)&stack0xffffffffffffffc8);
  _Unwind_Resume(auVar7._0_8_);
}


// UI.MapEditorAddObjectPanel$$GetItems
// il2cpp: System_Collections_Generic_List_string__o* UI_MapEditorAddObjectPanel__GetItems (UI_MapEditorAddObjectPanel_o* __this, System_String_o* category, const MethodInfo* method);
// 0x4418200

System_Collections_Generic_List_string__o *
UI_MapEditorAddObjectPanel__GetItems
          (UI_MapEditorAddObjectPanel_o *__this,System_String_o *category,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Collections_Generic_Dictionary_object__object__o *pSVar3;
  System_String_array *pSVar4;
  long lVar5;
  System_Collections_Generic_List_Enumerator_object__o __this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  bool_conflict bVar6;
  UI_MapEditorAddObjectPanel_o *pUVar7;
  MethodInfo_2525430 *items;
  System_Collections_Generic_List_string__o *pSVar8;
  System_Collections_Generic_List_string__o *collection;
  long *plVar9;
  MethodInfo *method_00;
  MethodInfo *method_01;
  _union_249689 unaff_R12;
  undefined8 *unaff_R13;
  Il2CppObject *unaff_R15;
  undefined1 auVar10 [12];
  System_Collections_Generic_List_Enumerator_T__c *pSVar11;
  Il2CppType *pIVar12;
  System_String_o *pSVar13;
  System_String_o *pSVar14;
  undefined1 auStack_70 [16];
  System_String_o *pSStack_60;
  Il2CppRGCTXData *pIStack_58;
  _union_249689 _Stack_50;
  undefined8 *puStack_48;
  UI_MapEditorAddObjectPanel_o *pUStack_40;
  Il2CppObject *pIStack_38;
  
  if (g_data_057ae623 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AssetBundleManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinMapPrefabs);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_Map_MapScriptBaseObject_get_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_System_String_Map);
    il2cpp_runtime_helper_023445d0(&MethodInfo_IEnumerable_1_System_String_Select_MapScriptBaseObject_S);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String_ToList_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_MapScriptBaseObject_string);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_AddRange);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_GetItems_b__10_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    il2cpp_runtime_helper_023445d0(&"Custom");
    il2cpp_runtime_helper_023445d0(&"All");
    g_data_057ae623 = '\x01';
  }
  items = "All";
  bVar6 = System_String__op_Equality(category,(System_String_o *)"All",(MethodInfo *)0x0);
  if ((char)bVar6 == '\0') {
    items = "Custom";
    bVar6 = System_String__op_Equality(category,(System_String_o *)"Custom",(MethodInfo *)0x0);
    if ((char)bVar6 != '\0') {
      if (*(int *)(TypeInfo_AssetBundleManager + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar8 = ApplicationManagers_AssetBundleManager__GetAssetList((MethodInfo *)0x0);
      return pSVar8;
    }
    unaff_R15 = (Il2CppObject *)&TypeInfo_BuiltinMapPrefabs;
    if (*(int *)(TypeInfo_BuiltinMapPrefabs + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar3 = *(System_Collections_Generic_Dictionary_object__object__o **)
              (*(long *)(TypeInfo_BuiltinMapPrefabs + 0xb8) + 0x10);
    if (pSVar3 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      unaff_R15 = System_Collections_Generic_Dictionary_object__object___get_Item
                            (pSVar3,(Il2CppObject *)category,MethodInfo_List_1_Map_MapScriptBaseObject_get_Item);
      unaff_R13 = &TypeInfo_c;
      if (*(int *)(TypeInfo_c + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
        category = *(System_String_o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
      }
      else {
        category = *(System_String_o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
      }
      if ((Il2CppRGCTXData *)category == (Il2CppRGCTXData *)0x0) {
        if (*(int *)(TypeInfo_c + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        unaff_R12 = **(_union_249689 **)(TypeInfo_c + 0xb8);
        category = (System_String_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_MapScriptBaseObject_string);
        System_Func_object__object____ctor();
        lVar5 = *(long *)(TypeInfo_c + 0xb8);
        *(System_String_o **)(lVar5 + 8) = category;
        il2cpp_runtime_helper_022b4080(lVar5 + 8,category);
      }
      pUVar7 = (UI_MapEditorAddObjectPanel_o *)
               System_Linq_Enumerable__Select_object__object_
                         ((System_Collections_Generic_IEnumerable_TSource__o *)unaff_R15,
                          (System_Func_TSource__TResult__o *)category,MethodInfo_IEnumerable_1_System_String_Select_MapScriptBaseObject_S);
      items = MethodInfo_List_1_System_String_ToList_String;
      pSVar8 = (System_Collections_Generic_List_string__o *)
               System_Linq_Enumerable__ToList_object_
                         ((System_Collections_Generic_IEnumerable_TSource__o *)pUVar7,MethodInfo_List_1_System_String_ToList_String);
      if (__this != (UI_MapEditorAddObjectPanel_o *)0x0) {
        pSVar8 = UI_MapEditorAddObjectPanel__GetItemsNoVariants(pUVar7,pSVar8,method_01);
        return pSVar8;
      }
    }
  }
  else {
    category = (System_String_o *)&TypeInfo_BuiltinMapPrefabs;
    if (*(int *)(TypeInfo_BuiltinMapPrefabs + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar3 = *(System_Collections_Generic_Dictionary_object__object__o **)(*(long *)(TypeInfo_BuiltinMapPrefabs + 0xb8) + 8)
    ;
    if (pSVar3 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      pUVar7 = (UI_MapEditorAddObjectPanel_o *)
               System_Collections_Generic_Dictionary_object__object___get_Keys(pSVar3,MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_System_String_Map);
      items = (MethodInfo_2525430 *)
              System_Linq_Enumerable__ToList_object_
                        ((System_Collections_Generic_IEnumerable_TSource__o *)pUVar7,MethodInfo_List_1_System_String_ToList_String);
      pSVar8 = UI_MapEditorAddObjectPanel__GetItemsNoVariants
                         (pUVar7,(System_Collections_Generic_List_string__o *)items,method_00);
      if (*(int *)(TypeInfo_AssetBundleManager + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      collection = ApplicationManagers_AssetBundleManager__GetAssetList((MethodInfo *)0x0);
      category = (System_String_o *)0x0;
      if (pSVar8 != (System_Collections_Generic_List_string__o *)0x0) {
        System_Collections_Generic_List_object___AddRange
                  ((System_Collections_Generic_List_object__o *)pSVar8,
                   (System_Collections_Generic_IEnumerable_T__o *)collection,MethodInfo_Void_AddRange);
        return pSVar8;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pIStack_58 = (Il2CppRGCTXData *)category;
  _Stack_50 = unaff_R12;
  puStack_48 = unaff_R13;
  pUStack_40 = __this;
  pIStack_38 = unaff_R15;
  if (g_data_057ae624 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinMapPrefabs);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_System_String_GetEnumerator);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
    g_data_057ae624 = '\x01';
  }
  pSVar11 = (System_Collections_Generic_List_Enumerator_T__c *)0x0;
  pIVar12 = (Il2CppType *)0x0;
  pSVar13 = (System_String_o *)0x0;
  pSVar8 = (System_Collections_Generic_List_string__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)pSVar8,MethodInfo_List_1_System_String);
  if (items != (MethodInfo_2525430 *)0x0) {
    System_Collections_Generic_List_object___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)auStack_70,
               (System_Collections_Generic_List_object__o *)items,MethodInfo_List_1_T_Enumerator_System_String_GetEnumerator);
    pSVar11 = (System_Collections_Generic_List_Enumerator_T__c *)auStack_70._0_8_;
    pIVar12 = (Il2CppType *)auStack_70._8_8_;
    pSVar14 = pSStack_60;
    if (pSVar8 == (System_Collections_Generic_List_string__o *)0x0) {
      do {
        __this_01.fields._8_8_ = pIVar12;
        __this_01.fields._list = (System_Collections_Generic_List_T__o *)pSVar11;
        __this_01.fields._current = (Il2CppObject *)pSVar14;
        bVar6 = System_Collections_Generic_List_Enumerator_object___MoveNext
                          (__this_01,(MethodInfo_321A1D0 *)&stack0xffffffffffffff70);
        pSVar13 = pSVar14;
        if ((char)bVar6 == '\0') goto label_04418720;
        if (*(int *)(TypeInfo_BuiltinMapPrefabs + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar3 = *(System_Collections_Generic_Dictionary_object__object__o **)
                  (*(long *)(TypeInfo_BuiltinMapPrefabs + 0xb8) + 0x30);
        if (pSVar3 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_04418744;
        bVar6 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                          (pSVar3,(Il2CppObject *)pSVar14,MethodInfo_Boolean_ContainsKey);
        pSVar14 = pSVar13;
      } while ((char)bVar6 != '\0');
      il2cpp_runtime_helper_022b2c90();
    }
    else {
      while (pSVar14 = pSStack_60, __this_00.fields._8_8_ = pIVar12,
            __this_00.fields._list = (System_Collections_Generic_List_T__o *)pSVar11,
            __this_00.fields._current = (Il2CppObject *)pSVar14,
            bVar6 = System_Collections_Generic_List_Enumerator_object___MoveNext
                              (__this_00,(MethodInfo_321A1D0 *)&stack0xffffffffffffff70), pSVar13 = pSVar14,
            (char)bVar6 != '\0') {
        if (*(int *)(TypeInfo_BuiltinMapPrefabs + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar3 = *(System_Collections_Generic_Dictionary_object__object__o **)
                  (*(long *)(TypeInfo_BuiltinMapPrefabs + 0xb8) + 0x30);
        if (pSVar3 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_04418744;
        bVar6 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                          (pSVar3,(Il2CppObject *)pSVar14,MethodInfo_Boolean_ContainsKey);
        lVar5 = MethodInfo_Void_Add;
        pSStack_60 = pSVar13;
        if ((char)bVar6 == '\0') {
          piVar1 = &(pSVar8->fields)._version;
          *piVar1 = *piVar1 + 1;
          pSVar4 = (pSVar8->fields)._items;
          if (pSVar4 == (System_String_array *)0x0) goto label_04418749;
          uVar2 = (pSVar8->fields)._size;
          if (uVar2 < (uint)pSVar4->max_length) {
            (pSVar8->fields)._size = uVar2 + 1;
            pSVar4->m_Items[(int)uVar2] = pSVar14;
            il2cpp_runtime_helper_022b4080(pSVar4->m_Items + (int)uVar2,pSVar14);
            pSStack_60 = pSVar13;
          }
          else {
            System_Collections_Generic_List_object___AddWithResize
                      ((System_Collections_Generic_List_object__o *)pSVar8,(Il2CppObject *)pSVar14,
                       *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
            pSStack_60 = pSVar13;
          }
        }
      }
    }
label_04418720:
    __this_02.fields._8_8_ = pIVar12;
    __this_02.fields._list = (System_Collections_Generic_List_T__o *)pSVar11;
    __this_02.fields._current = (Il2CppObject *)pSVar13;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_02,(MethodInfo_321A1C0 *)&stack0xffffffffffffff70);
    return pSVar8;
  }
label_0441874e:
  auVar10 = il2cpp_runtime_helper_022b2c90();
  if (auVar10._8_4_ == 1) {
    plVar9 = (long *)__cxa_begin_catch(auVar10._0_8_);
    lVar5 = *plVar9;
    __cxa_end_catch();
    __this_03.fields._8_8_ = pIVar12;
    __this_03.fields._list = (System_Collections_Generic_List_T__o *)pSVar11;
    __this_03.fields._current = (Il2CppObject *)pSVar13;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_03,(MethodInfo_321A1C0 *)&stack0xffffffffffffff70);
    if (lVar5 == 0) {
      return pSVar8;
    }
    il2cpp_runtime_helper_022fefe0(lVar5);
  }
  __this_04.fields._8_8_ = pIVar12;
  __this_04.fields._list = (System_Collections_Generic_List_T__o *)pSVar11;
  __this_04.fields._current = (Il2CppObject *)pSVar13;
  System_Collections_Generic_List_Enumerator_object___Dispose
            (__this_04,(MethodInfo_321A1C0 *)&stack0xffffffffffffff70);
  _Unwind_Resume(auVar10._0_8_);
label_04418744:
  il2cpp_runtime_helper_022b2c90();
label_04418749:
  il2cpp_runtime_helper_022b2c90();
  goto label_0441874e;
}


// UI.MapEditorAddObjectPanel$$GetItemsNoVariants
// il2cpp: System_Collections_Generic_List_string__o* UI_MapEditorAddObjectPanel__GetItemsNoVariants (UI_MapEditorAddObjectPanel_o* __this, System_Collections_Generic_List_string__o* items, const MethodInfo* method);
// 0x44184e0

System_Collections_Generic_List_string__o *
UI_MapEditorAddObjectPanel__GetItemsNoVariants
          (UI_MapEditorAddObjectPanel_o *__this,System_Collections_Generic_List_string__o *items,
          MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Collections_Generic_Dictionary_object__object__o *pSVar3;
  System_String_array *pSVar4;
  long lVar5;
  System_Collections_Generic_List_Enumerator_object__o __this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  bool_conflict bVar6;
  System_Collections_Generic_List_string__o *__this_05;
  long *plVar7;
  undefined1 auVar8 [12];
  System_Collections_Generic_List_Enumerator_T__c *pSVar9;
  Il2CppType *pIVar10;
  System_String_o *pSVar11;
  System_String_o *pSVar12;
  undefined1 local_48 [16];
  System_String_o *local_38;
  
  if (g_data_057ae624 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinMapPrefabs);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_System_String_GetEnumerator);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
    g_data_057ae624 = '\x01';
  }
  pSVar9 = (System_Collections_Generic_List_Enumerator_T__c *)0x0;
  pIVar10 = (Il2CppType *)0x0;
  pSVar11 = (System_String_o *)0x0;
  __this_05 = (System_Collections_Generic_List_string__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_05,MethodInfo_List_1_System_String);
  if (items != (System_Collections_Generic_List_string__o *)0x0) {
    System_Collections_Generic_List_object___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)local_48,
               (System_Collections_Generic_List_object__o *)items,MethodInfo_List_1_T_Enumerator_System_String_GetEnumerator);
    pSVar9 = (System_Collections_Generic_List_Enumerator_T__c *)local_48._0_8_;
    pIVar10 = (Il2CppType *)local_48._8_8_;
    pSVar12 = local_38;
    if (__this_05 == (System_Collections_Generic_List_string__o *)0x0) {
      do {
        __this_01.fields._8_8_ = pIVar10;
        __this_01.fields._list = (System_Collections_Generic_List_T__o *)pSVar9;
        __this_01.fields._current = (Il2CppObject *)pSVar12;
        bVar6 = System_Collections_Generic_List_Enumerator_object___MoveNext
                          (__this_01,(MethodInfo_321A1D0 *)&stack0xffffffffffffff98);
        pSVar11 = pSVar12;
        if ((char)bVar6 == '\0') goto label_04418720;
        if (*(int *)(TypeInfo_BuiltinMapPrefabs + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar3 = *(System_Collections_Generic_Dictionary_object__object__o **)
                  (*(long *)(TypeInfo_BuiltinMapPrefabs + 0xb8) + 0x30);
        if (pSVar3 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_04418744;
        bVar6 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                          (pSVar3,(Il2CppObject *)pSVar12,MethodInfo_Boolean_ContainsKey);
        pSVar12 = pSVar11;
      } while ((char)bVar6 != '\0');
      il2cpp_runtime_helper_022b2c90();
    }
    else {
      while (pSVar12 = local_38, __this_00.fields._8_8_ = pIVar10,
            __this_00.fields._list = (System_Collections_Generic_List_T__o *)pSVar9,
            __this_00.fields._current = (Il2CppObject *)pSVar12,
            bVar6 = System_Collections_Generic_List_Enumerator_object___MoveNext
                              (__this_00,(MethodInfo_321A1D0 *)&stack0xffffffffffffff98), pSVar11 = pSVar12,
            (char)bVar6 != '\0') {
        if (*(int *)(TypeInfo_BuiltinMapPrefabs + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar3 = *(System_Collections_Generic_Dictionary_object__object__o **)
                  (*(long *)(TypeInfo_BuiltinMapPrefabs + 0xb8) + 0x30);
        if (pSVar3 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_04418744;
        bVar6 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                          (pSVar3,(Il2CppObject *)pSVar12,MethodInfo_Boolean_ContainsKey);
        lVar5 = MethodInfo_Void_Add;
        local_38 = pSVar11;
        if ((char)bVar6 == '\0') {
          piVar1 = &(__this_05->fields)._version;
          *piVar1 = *piVar1 + 1;
          pSVar4 = (__this_05->fields)._items;
          if (pSVar4 == (System_String_array *)0x0) goto label_04418749;
          uVar2 = (__this_05->fields)._size;
          if (uVar2 < (uint)pSVar4->max_length) {
            (__this_05->fields)._size = uVar2 + 1;
            pSVar4->m_Items[(int)uVar2] = pSVar12;
            il2cpp_runtime_helper_022b4080(pSVar4->m_Items + (int)uVar2,pSVar12);
            local_38 = pSVar11;
          }
          else {
            System_Collections_Generic_List_object___AddWithResize
                      ((System_Collections_Generic_List_object__o *)__this_05,(Il2CppObject *)pSVar12,
                       *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
            local_38 = pSVar11;
          }
        }
      }
    }
label_04418720:
    __this_02.fields._8_8_ = pIVar10;
    __this_02.fields._list = (System_Collections_Generic_List_T__o *)pSVar9;
    __this_02.fields._current = (Il2CppObject *)pSVar11;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_02,(MethodInfo_321A1C0 *)&stack0xffffffffffffff98);
    return __this_05;
  }
label_0441874e:
  auVar8 = il2cpp_runtime_helper_022b2c90();
  if (auVar8._8_4_ == 1) {
    plVar7 = (long *)__cxa_begin_catch(auVar8._0_8_);
    lVar5 = *plVar7;
    __cxa_end_catch();
    __this_03.fields._8_8_ = pIVar10;
    __this_03.fields._list = (System_Collections_Generic_List_T__o *)pSVar9;
    __this_03.fields._current = (Il2CppObject *)pSVar11;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_03,(MethodInfo_321A1C0 *)&stack0xffffffffffffff98);
    if (lVar5 == 0) {
      return __this_05;
    }
    il2cpp_runtime_helper_022fefe0(lVar5);
  }
  __this_04.fields._8_8_ = pIVar10;
  __this_04.fields._list = (System_Collections_Generic_List_T__o *)pSVar9;
  __this_04.fields._current = (Il2CppObject *)pSVar11;
  System_Collections_Generic_List_Enumerator_object___Dispose
            (__this_04,(MethodInfo_321A1C0 *)&stack0xffffffffffffff98);
  _Unwind_Resume(auVar8._0_8_);
label_04418744:
  il2cpp_runtime_helper_022b2c90();
label_04418749:
  il2cpp_runtime_helper_022b2c90();
  goto label_0441874e;
}


// UI.MapEditorAddObjectPanel$$Filter
// il2cpp: System_Collections_Generic_List_string__o* UI_MapEditorAddObjectPanel__Filter (UI_MapEditorAddObjectPanel_o* __this, System_Collections_Generic_List_string__o* original, System_String_o* search, const MethodInfo* method);
// 0x44175a0

System_Collections_Generic_List_string__o *
UI_MapEditorAddObjectPanel__Filter
          (UI_MapEditorAddObjectPanel_o *__this,System_Collections_Generic_List_string__o *original,
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
  undefined1 local_48 [16];
  System_String_o *local_38;
  
  if (g_data_057ae625 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_System_String_GetEnumerator);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
    g_data_057ae625 = '\x01';
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
              ((System_Collections_Generic_List_Enumerator_T__o *)local_48,
               (System_Collections_Generic_List_object__o *)original,MethodInfo_List_1_T_Enumerator_System_String_GetEnumerator);
    pSVar10 = (System_Collections_Generic_List_Enumerator_T__c *)local_48._0_8_;
    pIVar11 = (Il2CppType *)local_48._8_8_;
    __this_06 = local_38;
    if (__this_05 == (System_Collections_Generic_List_string__o *)0x0) {
      do {
        __this_01.fields._8_8_ = pIVar11;
        __this_01.fields._list = (System_Collections_Generic_List_T__o *)pSVar10;
        __this_01.fields._current = (Il2CppObject *)__this_06;
        bVar5 = System_Collections_Generic_List_Enumerator_object___MoveNext
                          (__this_01,(MethodInfo_321A1D0 *)&stack0xffffffffffffff98);
        if ((char)bVar5 == '\0') goto label_044177cc;
        if (__this_06 == (System_String_o *)0x0) goto label_044177f3;
        pSVar6 = System_String__ToLower(__this_06,(MethodInfo *)0x0);
        pSVar12 = __this_06;
        if (pSVar6 == (System_String_o *)0x0) goto label_044177f8;
        bVar5 = System_String__Contains(pSVar6,value,(MethodInfo *)0x0);
      } while ((char)bVar5 == '\0');
      il2cpp_runtime_helper_022b2c90();
    }
    else {
      while (__this_06 = local_38, __this_00.fields._8_8_ = pIVar11,
            __this_00.fields._list = (System_Collections_Generic_List_T__o *)pSVar10,
            __this_00.fields._current = (Il2CppObject *)__this_06,
            bVar5 = System_Collections_Generic_List_Enumerator_object___MoveNext
                              (__this_00,(MethodInfo_321A1D0 *)&stack0xffffffffffffff98), (char)bVar5 != '\0')
      {
        if (__this_06 == (System_String_o *)0x0) goto label_044177f3;
        pSVar12 = __this_06;
        pSVar6 = System_String__ToLower(__this_06,(MethodInfo *)0x0);
        if (pSVar6 == (System_String_o *)0x0) goto label_044177f8;
        bVar5 = System_String__Contains(pSVar6,value,(MethodInfo *)0x0);
        lVar4 = MethodInfo_Void_Add;
        local_38 = pSVar12;
        if ((char)bVar5 != '\0') {
          piVar1 = &(__this_05->fields)._version;
          *piVar1 = *piVar1 + 1;
          pSVar3 = (__this_05->fields)._items;
          if (pSVar3 == (System_String_array *)0x0) goto label_044177fd;
          uVar2 = (__this_05->fields)._size;
          if (uVar2 < (uint)pSVar3->max_length) {
            (__this_05->fields)._size = uVar2 + 1;
            pSVar3->m_Items[(int)uVar2] = __this_06;
            il2cpp_runtime_helper_022b4080(pSVar3->m_Items + (int)uVar2,__this_06);
            local_38 = pSVar12;
          }
          else {
            System_Collections_Generic_List_object___AddWithResize
                      ((System_Collections_Generic_List_object__o *)__this_05,(Il2CppObject *)__this_06,
                       *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
            local_38 = pSVar12;
          }
        }
      }
    }
label_044177cc:
    __this_02.fields._8_8_ = pIVar11;
    __this_02.fields._list = (System_Collections_Generic_List_T__o *)pSVar10;
    __this_02.fields._current = (Il2CppObject *)__this_06;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_02,(MethodInfo_321A1C0 *)&stack0xffffffffffffff98);
    return __this_05;
  }
label_04417802:
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
label_044177f3:
  il2cpp_runtime_helper_022b2c90();
  pSVar12 = __this_06;
label_044177f8:
  il2cpp_runtime_helper_022b2c90();
label_044177fd:
  il2cpp_runtime_helper_022b2c90();
  goto label_04417802;
}


// UI.MapEditorAddObjectPanel$$CreateRow
// il2cpp: void UI_MapEditorAddObjectPanel__CreateRow (UI_MapEditorAddObjectPanel_o* __this, System_Collections_Generic_List_string__o* items, const MethodInfo* method);
// 0x44178e0

void UI_MapEditorAddObjectPanel__CreateRow
               (UI_MapEditorAddObjectPanel_o *__this,System_Collections_Generic_List_string__o *items,
               MethodInfo *method)

{
  void *pvVar1;
  Il2CppClass *__this_00;
  System_String_o *path;
  long lVar2;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  bool_conflict bVar3;
  UnityEngine_GameObject_o *__this_05;
  UnityEngine_Texture_o *value;
  UnityEngine_Transform_o *pUVar4;
  UnityEngine_GameObject_o *__this_06;
  Il2CppObject *pIVar5;
  UnityEngine_Events_UnityAction_o *call;
  System_String_o *pSVar6;
  UnityEngine_UI_RawImage_o *__this_07;
  long *plVar7;
  MethodInfo *extraout_RDX;
  UnityEngine_Texture_Fields *pUVar8;
  float fVar9;
  UnityEngine_Color_o UVar10;
  undefined1 auVar11 [12];
  undefined8 in_stack_ffffffffffffff88;
  System_Collections_Generic_List_Enumerator_T__c *pSVar12;
  System_Collections_Generic_List_Enumerator_T__o local_48;
  
  if (g_data_057ae626 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_RawImage_GetComponent_RawImage);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Text_GetComponent_Text);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Button_GetComponent_Button);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_System_String_GetEnumerator);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourceManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourcePaths);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Texture2D);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_CreateRow_b__0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass13_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction);
    il2cpp_runtime_helper_023445d0(&"TextColor");
    il2cpp_runtime_helper_023445d0(&"DefaultPanel");
    il2cpp_runtime_helper_023445d0(&"Text");
    il2cpp_runtime_helper_023445d0(&"Prefabs/Misc/MapEditorObjectButton");
    il2cpp_runtime_helper_023445d0(&"Icon");
    il2cpp_runtime_helper_023445d0(&"DefaultLabel");
    il2cpp_runtime_helper_023445d0(&"Previews/");
    g_data_057ae626 = '\x01';
    method = extraout_RDX;
  }
  pSVar12 = (System_Collections_Generic_List_Enumerator_T__c *)0x0;
  pvVar1 = (((UnityEngine_Texture_c *)__this)->_1).image;
  pUVar4 = (((UnityEngine_Texture_c *)__this)->_1).byval_arg.data;
  fVar9 = (float)(**(code **)((long)pvVar1 + 0x1e8))(__this,*(undefined8 *)((long)pvVar1 + 0x1f0),method);
  __this_05 = UI_ElementFactory__CreateHorizontalGroup(pUVar4,fVar9,3,(MethodInfo *)0x0);
  if (items != (System_Collections_Generic_List_string__o *)0x0) {
    System_Collections_Generic_List_object___GetEnumerator
              (&local_48,(System_Collections_Generic_List_object__o *)items,MethodInfo_List_1_T_Enumerator_System_String_GetEnumerator);
    pSVar12 = (System_Collections_Generic_List_Enumerator_T__c *)local_48.fields._list;
    while( true ) {
      __this_01.fields._8_8_ = __this;
      __this_01.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff88;
      __this_01.fields._current = (Il2CppObject *)pSVar12;
      bVar3 = System_Collections_Generic_List_Enumerator_object___MoveNext
                        (__this_01,(MethodInfo_321A1D0 *)&stack0xffffffffffffff98);
      if ((char)bVar3 == '\0') {
        __this_02.fields._8_8_ = __this;
        __this_02.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff88;
        __this_02.fields._current = (Il2CppObject *)pSVar12;
        System_Collections_Generic_List_Enumerator_object___Dispose
                  (__this_02,(MethodInfo_321A1C0 *)&stack0xffffffffffffff98);
        return;
      }
      value = (UnityEngine_Texture_o *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass13_0);
      System_Object___ctor((Il2CppObject *)value,(MethodInfo *)0x0);
      if (value == (UnityEngine_Texture_o *)0x0) break;
      value[1].klass = (UnityEngine_Texture_c *)__this;
      il2cpp_runtime_helper_022b4080(value + 1);
      pUVar8 = &value->fields;
      (value->fields).m_CachedPtr = (intptr_t)local_48.fields._current;
      il2cpp_runtime_helper_022b4080();
      if (__this_05 == (UnityEngine_GameObject_o *)0x0) goto label_04417e55;
      pUVar4 = UnityEngine_GameObject__get_transform(__this_05,(MethodInfo *)0x0);
      __this_06 = UI_ElementFactory__InstantiateAndBind(pUVar4,"Prefabs/Misc/MapEditorObjectButton",(MethodInfo *)0x0);
      if (__this_06 == (UnityEngine_GameObject_o *)0x0) goto label_04417e5a;
      pIVar5 = UnityEngine_GameObject__GetComponent_object_(__this_06,MethodInfo_Button_GetComponent_Button);
      if (pIVar5 == (Il2CppObject *)0x0) goto label_04417e5f;
      __this_00 = pIVar5[0x10].klass;
      call = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
      UnityEngine_Events_UnityAction___ctor();
      if (__this_00 == (Il2CppClass *)0x0) goto label_04417e64;
      UnityEngine_Events_UnityEvent__AddListener
                ((UnityEngine_Events_UnityEvent_o *)__this_00,call,(MethodInfo *)0x0);
      pvVar1 = (((UnityEngine_Texture_c *)__this)->_1).image;
      pSVar6 = (System_String_o *)
               (**(code **)((long)pvVar1 + 0x378))
                         (__this,pUVar8->m_CachedPtr,*(undefined8 *)((long)pvVar1 + 0x380));
      if (*(int *)(TypeInfo_ResourcePaths + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      path = *(System_String_o **)(*(long *)(TypeInfo_ResourcePaths + 0xb8) + 0x38);
      pSVar6 = System_String__Concat_3ae5ba0("Previews/",pSVar6,(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      value = (UnityEngine_Texture_o *)
              ApplicationManagers_ResourceManager__LoadAsset(path,pSVar6,0,(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar3 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)value,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar3 != '\0') {
        pUVar4 = UnityEngine_GameObject__get_transform(__this_06,(MethodInfo *)0x0);
        if (pUVar4 == (UnityEngine_Transform_o *)0x0) goto label_04417e96;
        pUVar4 = UnityEngine_Transform__Find(pUVar4,"Icon",(MethodInfo *)0x0);
        if (pUVar4 == (UnityEngine_Transform_o *)0x0) goto label_04417e9b;
        __this_07 = (UnityEngine_UI_RawImage_o *)
                    UnityEngine_Component__GetComponent_object_
                              ((UnityEngine_Component_o *)pUVar4,MethodInfo_RawImage_GetComponent_RawImage);
        if (__this_07 == (UnityEngine_UI_RawImage_o *)0x0) goto label_04417ea0;
        if ((value == (UnityEngine_Texture_o *)0x0) || (value->klass == TypeInfo_Texture2D)) {
          UnityEngine_UI_RawImage__set_texture(__this_07,value,(MethodInfo *)0x0);
          goto label_04417d3c;
        }
        goto label_04417ea5;
      }
      pUVar4 = UnityEngine_GameObject__get_transform(__this_06,(MethodInfo *)0x0);
      if (pUVar4 == (UnityEngine_Transform_o *)0x0) goto label_04417e91;
      pUVar4 = UnityEngine_Transform__Find(pUVar4,"Icon",(MethodInfo *)0x0);
      if (pUVar4 == (UnityEngine_Transform_o *)0x0) goto label_04417e8c;
      pIVar5 = UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)pUVar4,MethodInfo_RawImage_GetComponent_RawImage);
      if (pIVar5 == (Il2CppObject *)0x0) goto label_04417e87;
      (*pIVar5->klass->vtable[0x17].methodPtr)(0x3ea3d70a,0x3f8000003ea3d70a,pIVar5);
label_04417d3c:
      pUVar4 = UnityEngine_GameObject__get_transform(__this_06,(MethodInfo *)0x0);
      if (pUVar4 == (UnityEngine_Transform_o *)0x0) goto label_04417e69;
      pUVar4 = UnityEngine_Transform__Find(pUVar4,"Text",(MethodInfo *)0x0);
      if (pUVar4 == (UnityEngine_Transform_o *)0x0) goto label_04417e6e;
      pIVar5 = UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)pUVar4,MethodInfo_Text_GetComponent_Text);
      if (pIVar5 == (Il2CppObject *)0x0) goto label_04417e73;
      (*pIVar5->klass->vtable[0x4b].methodPtr)(pIVar5,pUVar8->m_CachedPtr,pIVar5->klass->vtable[0x4b].method);
      pUVar4 = UnityEngine_GameObject__get_transform(__this_06,(MethodInfo *)0x0);
      if (pUVar4 == (UnityEngine_Transform_o *)0x0) goto label_04417e78;
      pUVar4 = UnityEngine_Transform__Find(pUVar4,"Text",(MethodInfo *)0x0);
      if (pUVar4 == (UnityEngine_Transform_o *)0x0) goto label_04417e7d;
      pIVar5 = UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)pUVar4,MethodInfo_Text_GetComponent_Text);
      if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      UVar10 = UI_UIManager__GetThemeColor
                         ("DefaultPanel","DefaultLabel","TextColor","DefaultPanel",(MethodInfo *)0x0);
      fVar9 = UVar10.fields.r;
      if (pIVar5 == (Il2CppObject *)0x0) goto label_04417e82;
      (*pIVar5->klass->vtable[0x17].methodPtr)
                (fVar9,UVar10.fields._8_8_,pIVar5,pIVar5->klass->vtable[0x17].method);
    }
    il2cpp_runtime_helper_022b2c90();
label_04417e55:
    il2cpp_runtime_helper_022b2c90();
label_04417e5a:
    il2cpp_runtime_helper_022b2c90();
label_04417e5f:
    il2cpp_runtime_helper_022b2c90();
label_04417e64:
    il2cpp_runtime_helper_022b2c90();
label_04417e69:
    il2cpp_runtime_helper_022b2c90();
label_04417e6e:
    il2cpp_runtime_helper_022b2c90();
label_04417e73:
    il2cpp_runtime_helper_022b2c90();
label_04417e78:
    il2cpp_runtime_helper_022b2c90();
label_04417e7d:
    fVar9 = (float)il2cpp_runtime_helper_022b2c90();
label_04417e82:
    il2cpp_runtime_helper_022b2c90(fVar9);
label_04417e87:
    il2cpp_runtime_helper_022b2c90();
label_04417e8c:
    il2cpp_runtime_helper_022b2c90();
label_04417e91:
    il2cpp_runtime_helper_022b2c90();
label_04417e96:
    il2cpp_runtime_helper_022b2c90();
label_04417e9b:
    il2cpp_runtime_helper_022b2c90();
label_04417ea0:
    il2cpp_runtime_helper_022b2c90();
label_04417ea5:
    il2cpp_runtime_helper_022b2fd0(value);
  }
  auVar11 = il2cpp_runtime_helper_022b2c90();
  if (auVar11._8_4_ == 1) {
    plVar7 = (long *)__cxa_begin_catch(auVar11._0_8_);
    lVar2 = *plVar7;
    __cxa_end_catch();
    __this_03.fields._8_8_ = __this;
    __this_03.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff88;
    __this_03.fields._current = (Il2CppObject *)pSVar12;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_03,(MethodInfo_321A1C0 *)&stack0xffffffffffffff98);
    if (lVar2 == 0) {
      return;
    }
    il2cpp_runtime_helper_022fefe0(lVar2);
  }
  __this_04.fields._8_8_ = __this;
  __this_04.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff88;
  __this_04.fields._current = (Il2CppObject *)pSVar12;
  System_Collections_Generic_List_Enumerator_object___Dispose
            (__this_04,(MethodInfo_321A1C0 *)&stack0xffffffffffffff98);
  _Unwind_Resume(auVar11._0_8_);
}


// UI.MapEditorAddObjectPanel$$GetPreviewName
// il2cpp: System_String_o* UI_MapEditorAddObjectPanel__GetPreviewName (UI_MapEditorAddObjectPanel_o* __this, System_String_o* item, const MethodInfo* method);
// 0x4418830

System_String_o *
UI_MapEditorAddObjectPanel__GetPreviewName
          (UI_MapEditorAddObjectPanel_o *__this,System_String_o *item,MethodInfo *method)

{
  int32_t *piVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  System_Collections_Generic_Dictionary_object__object__o *pSVar5;
  UI_MapEditorInspectPanel_o *__this_00;
  System_Object_array *pSVar6;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  System_Collections_Generic_List_Enumerator_object__o __this_05;
  System_Collections_Generic_List_Enumerator_object__o __this_06;
  bool_conflict bVar7;
  System_String_o *pSVar8;
  System_Collections_Generic_List_object__o *__this_07;
  Il2CppObject *collection;
  System_Collections_Generic_List_List_T___o *__this_08;
  System_String_o *extraout_RAX;
  long *plVar9;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_00;
  MethodInfo *method_01;
  Il2CppRGCTXData *__this_09;
  Il2CppClass *item_00;
  long lVar10;
  Il2CppRGCTXData *__this_10;
  _union_249689 unaff_R12;
  undefined1 auVar11 [12];
  _union_249689 _Var12;
  Il2CppType *pIVar13;
  UnityEngine_Object_o *obj;
  UnityEngine_Object_o *pUVar14;
  System_Collections_Generic_List_Enumerator_T__c *pSStack_a8;
  Il2CppType *pIStack_a0;
  System_Collections_Generic_List_string__o *pSStack_98;
  _union_249689 _Stack_88;
  Il2CppType *pIStack_80;
  UnityEngine_Object_o *pUStack_78;
  Il2CppRGCTXData *pIStack_70;
  _union_249689 _Stack_68;
  
  pSVar8 = item;
  if (g_data_057ae627 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinMapPrefabs);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Item);
    il2cpp_runtime_helper_023445d0(&"Preview");
    g_data_057ae627 = '\x01';
    if (*(int *)(TypeInfo_BuiltinMapPrefabs + 0xe4) != 0) goto label_04418853;
label_044188b2:
    il2cpp_runtime_helper_02337ed0();
    pSVar5 = *(System_Collections_Generic_Dictionary_object__object__o **)
              (*(long *)(TypeInfo_BuiltinMapPrefabs + 0xb8) + 0x20);
  }
  else {
    if (*(int *)(TypeInfo_BuiltinMapPrefabs + 0xe4) == 0) goto label_044188b2;
label_04418853:
    pSVar5 = *(System_Collections_Generic_Dictionary_object__object__o **)
              (*(long *)(TypeInfo_BuiltinMapPrefabs + 0xb8) + 0x20);
  }
  if (pSVar5 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    pSVar8 = item;
    bVar7 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                      (pSVar5,(Il2CppObject *)item,MethodInfo_Boolean_ContainsKey);
    if ((char)bVar7 == '\0') {
label_04418919:
      pSVar8 = System_String__Concat_3ae5ba0(item,"Preview",(MethodInfo *)0x0);
      return pSVar8;
    }
    if (*(int *)(TypeInfo_BuiltinMapPrefabs + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar5 = *(System_Collections_Generic_Dictionary_object__object__o **)
              (*(long *)(TypeInfo_BuiltinMapPrefabs + 0xb8) + 0x20);
    if (pSVar5 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      item = (System_String_o *)
             System_Collections_Generic_Dictionary_object__object___get_Item
                       (pSVar5,(Il2CppObject *)item,MethodInfo_String_get_Item);
      goto label_04418919;
    }
  }
  lVar10 = 0;
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae628 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinMapPrefabs);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapEditorGameManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapEditorMenu);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    g_data_057ae628 = '\x01';
  }
  __this_09 = *(Il2CppRGCTXData **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x10);
  if (__this_09 != (Il2CppRGCTXData *)0x0) {
    bVar2 = (TypeInfo_MapEditorGameManager->_2).naturalAligment;
    item_00 = TypeInfo_MapEditorGameManager;
    __this_10 = __this_09;
    if (((__this_09->klass->_2).naturalAligment < bVar2) ||
       ((__this_09->klass->_2).typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_MapEditorGameManager)) {
label_04418b9d:
      il2cpp_runtime_helper_022b2fd0();
      pIStack_70 = __this_09;
      _Stack_68 = unaff_R12;
      if (g_data_057ae635 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinMapPrefabs);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
        il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String_get_Item);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
        il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String_get_Current);
        il2cpp_runtime_helper_023445d0(&MethodInfo_GameObject_get_Current);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Void_AddRange);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
        il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_List_1_System_String_GetEnumerator);
        il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_UnityEngine_GameObject_GetEnumerator);
        il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
        il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
        il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_List_1_System_String_GroupItems_String);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Util);
        g_data_057ae635 = '\x01';
      }
      _Var12.genericMethod = (Il2CppMethodPointer)0x0;
      pIVar13 = (Il2CppType *)0x0;
      obj = (UnityEngine_Object_o *)0x0;
      pSStack_a8 = (System_Collections_Generic_List_Enumerator_T__c *)0x0;
      pIStack_a0 = (Il2CppType *)0x0;
      pSStack_98 = (System_Collections_Generic_List_string__o *)0x0;
      if ((UI_MapEditorHierarchyPanel_o *)__this_10[0x15].method != (UI_MapEditorHierarchyPanel_o *)0x0) {
        System_Collections_Generic_List_object___GetEnumerator
                  ((System_Collections_Generic_List_Enumerator_T__o *)&_Stack_88,
                   (System_Collections_Generic_List_object__o *)__this_10[0x15].method,MethodInfo_List_1_T_Enumerator_UnityEngine_GameObject_GetEnumerator);
        _Var12 = _Stack_88;
        pIVar13 = pIStack_80;
        obj = pUStack_78;
        while (__this_01.fields._8_8_ = pIVar13, __this_01.fields._list = _Var12.genericMethod,
              __this_01.fields._current = (Il2CppObject *)obj,
              bVar7 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                (__this_01,(MethodInfo_321A1D0 *)&stack0xffffffffffffff38),
              (char)bVar7 != '\0') {
          pUVar14 = obj;
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          UnityEngine_Object__Destroy_4e01c60(obj,(MethodInfo *)0x0);
          obj = pUVar14;
        }
        __this_02.fields._8_8_ = pIVar13;
        __this_02.fields._list = _Var12.genericMethod;
        __this_02.fields._current = (Il2CppObject *)obj;
        System_Collections_Generic_List_Enumerator_object___Dispose
                  (__this_02,(MethodInfo_321A1C0 *)&stack0xffffffffffffff38);
        __this_07 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
        System_Collections_Generic_List_object____ctor(__this_07,MethodInfo_List_1_System_String);
        lVar10 = MethodInfo_Void_Add;
        if (__this_07 != (System_Collections_Generic_List_object__o *)0x0) {
          piVar1 = &(__this_07->fields)._version;
          *piVar1 = *piVar1 + 1;
          pSVar6 = (__this_07->fields)._items;
          if (pSVar6 != (System_Object_array *)0x0) {
            uVar3 = (__this_07->fields)._size;
            if (uVar3 < (uint)pSVar6->max_length) {
              (__this_07->fields)._size = uVar3 + 1;
              pSVar6->m_Items[(int)uVar3] = (Il2CppObject *)item_00;
              il2cpp_runtime_helper_022b4080(pSVar6->m_Items + (int)uVar3,item_00);
              iVar4 = *(int *)(TypeInfo_BuiltinMapPrefabs + 0xe4);
            }
            else {
              System_Collections_Generic_List_object___AddWithResize
                        (__this_07,(Il2CppObject *)item_00,
                         *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
              iVar4 = *(int *)(TypeInfo_BuiltinMapPrefabs + 0xe4);
            }
            if (iVar4 == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            pSVar5 = *(System_Collections_Generic_Dictionary_object__object__o **)
                      (*(long *)(TypeInfo_BuiltinMapPrefabs + 0xb8) + 0x28);
            if (pSVar5 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
              bVar7 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                                (pSVar5,(Il2CppObject *)item_00,MethodInfo_Boolean_ContainsKey);
              if ((char)bVar7 != '\0') {
                if (*(int *)(TypeInfo_BuiltinMapPrefabs + 0xe4) == 0) {
                  il2cpp_runtime_helper_02337ed0();
                }
                pSVar5 = *(System_Collections_Generic_Dictionary_object__object__o **)
                          (*(long *)(TypeInfo_BuiltinMapPrefabs + 0xb8) + 0x28);
                if (pSVar5 == (System_Collections_Generic_Dictionary_object__object__o *)0x0)
                goto label_04418f3c;
                collection = System_Collections_Generic_Dictionary_object__object___get_Item
                                       (pSVar5,(Il2CppObject *)item_00,MethodInfo_List_1_System_String_get_Item);
                System_Collections_Generic_List_object___AddRange
                          (__this_07,(System_Collections_Generic_IEnumerable_T__o *)collection,MethodInfo_Void_AddRange);
              }
              if (*(int *)(TypeInfo_Util + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              __this_08 = Utility_Util__GroupItems_object_
                                    ((System_Collections_Generic_List_T__o *)__this_07,8,MethodInfo_List_1_List_1_System_String_GroupItems_String);
              if (__this_08 != (System_Collections_Generic_List_List_T___o *)0x0) {
                System_Collections_Generic_List_object___GetEnumerator
                          ((System_Collections_Generic_List_Enumerator_T__o *)&pSStack_a8,
                           (System_Collections_Generic_List_object__o *)__this_08,MethodInfo_List_1_T_Enumerator_List_1_System_String_GetEnumerator);
                while (__this_03.fields._8_8_ = pIVar13, __this_03.fields._list = _Var12.genericMethod,
                      __this_03.fields._current = (Il2CppObject *)obj,
                      bVar7 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                        (__this_03,(MethodInfo_321A1D0 *)&pSStack_a8), (char)bVar7 != '\0') {
                  UI_MapEditorAddVariantPopup__CreateRow
                            ((UI_MapEditorAddVariantPopup_o *)__this_10,pSStack_98,method_01);
                }
                __this_04.fields._8_8_ = pIVar13;
                __this_04.fields._list = _Var12.genericMethod;
                __this_04.fields._current = (Il2CppObject *)obj;
                System_Collections_Generic_List_Enumerator_object___Dispose
                          (__this_04,(MethodInfo_321A1C0 *)&pSStack_a8);
                goto label_04418f23;
              }
            }
          }
        }
      }
label_04418f3c:
      auVar11 = il2cpp_runtime_helper_022b2c90();
      if (auVar11._8_4_ == 1) {
        plVar9 = (long *)__cxa_begin_catch(auVar11._0_8_);
        lVar10 = *plVar9;
        __cxa_end_catch();
        __this_05.fields._8_8_ = pIVar13;
        __this_05.fields._list = _Var12.genericMethod;
        __this_05.fields._current = (Il2CppObject *)obj;
        System_Collections_Generic_List_Enumerator_object___Dispose
                  (__this_05,(MethodInfo_321A1C0 *)&pSStack_a8);
        if (lVar10 == 0) {
label_04418f23:
          UI_BasePopup__Show((UI_BasePopup_o *)__this_10,(MethodInfo *)0x0);
          return extraout_RAX;
        }
        il2cpp_runtime_helper_022fefe0(lVar10);
      }
      __this_06.fields._8_8_ = pIVar13;
      __this_06.fields._list = _Var12.genericMethod;
      __this_06.fields._current = (Il2CppObject *)obj;
      System_Collections_Generic_List_Enumerator_object___Dispose(__this_06,(MethodInfo_321A1C0 *)&pSStack_a8)
      ;
      _Unwind_Resume(auVar11._0_8_);
    }
    __this_00 = (UI_MapEditorInspectPanel_o *)__this_09[0x13].method;
    if ((__this_00 == (UI_MapEditorInspectPanel_o *)0x0) ||
       (*(char *)((long)&(__this_00->fields).m_CachedPtr + 1) == '\0')) {
      unaff_R12.genericMethod = &TypeInfo_BuiltinMapPrefabs;
      if (*(int *)(TypeInfo_BuiltinMapPrefabs + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar5 = *(System_Collections_Generic_Dictionary_object__object__o **)
                (*(long *)(TypeInfo_BuiltinMapPrefabs + 0xb8) + 0x28);
      if (pSVar5 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
        bVar7 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                          (pSVar5,(Il2CppObject *)pSVar8,MethodInfo_Boolean_ContainsKey);
        if ((char)bVar7 == '\0') goto label_04418b66;
        __this_09 = (Il2CppRGCTXData *)&TypeInfo_UIManager;
        method_00 = extraout_RDX;
        if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
          method_00 = extraout_RDX_00;
        }
        __this_10 = *(Il2CppRGCTXData **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
        if (__this_10 != (Il2CppRGCTXData *)0x0) {
          bVar2 = (TypeInfo_MapEditorMenu->_2).naturalAligment;
          item_00 = TypeInfo_MapEditorMenu;
          if (((__this_10->klass->_2).naturalAligment < bVar2) ||
             ((__this_10->klass->_2).typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_MapEditorMenu)) goto label_04418b9d;
          if ((UI_MapEditorAddVariantPopup_o *)__this_10[0x18].method != (UI_MapEditorAddVariantPopup_o *)0x0)
          {
            UI_MapEditorAddVariantPopup__Show
                      ((UI_MapEditorAddVariantPopup_o *)__this_10[0x18].method,pSVar8,method_00);
            plVar9 = *(long **)(lVar10 + 0x60);
            goto joined_r0x04418b5f;
          }
        }
      }
    }
    else {
      MapEditor_MapEditorBrush__AddEntry((MapEditor_MapEditorBrush_o *)__this_00,pSVar8,(MethodInfo *)0x0);
      if ((UI_MapEditorInspectPanel_o *)__this_09[0x13].method != (UI_MapEditorInspectPanel_o *)0x0) {
        *(undefined1 *)
         ((long)&(((UI_MapEditorInspectPanel_o *)__this_09[0x13].method)->fields).m_CachedPtr + 1) = 0;
        __this_09 = (Il2CppRGCTXData *)&TypeInfo_UIManager;
        if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        __this_10 = *(Il2CppRGCTXData **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
        if (__this_10 != (Il2CppRGCTXData *)0x0) {
          bVar2 = (TypeInfo_MapEditorMenu->_2).naturalAligment;
          item_00 = TypeInfo_MapEditorMenu;
          if (((__this_10->klass->_2).naturalAligment < bVar2) ||
             ((__this_10->klass->_2).typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_MapEditorMenu)) goto label_04418b9d;
          UI_MapEditorMenu__SyncBrushPanel((UI_MapEditorMenu_o *)__this_10,(MethodInfo *)0x0);
          plVar9 = *(long **)(lVar10 + 0x60);
joined_r0x04418b5f:
          __this_09 = (Il2CppRGCTXData *)&TypeInfo_UIManager;
          if (plVar9 != (long *)0x0) goto label_04418b7c;
        }
      }
    }
  }
  do {
    il2cpp_runtime_helper_022b2c90();
label_04418b66:
    GameManagers_MapEditorGameManager__AddObject
              ((GameManagers_MapEditorGameManager_o *)__this_09,pSVar8,(MethodInfo *)0x0);
    plVar9 = *(long **)(lVar10 + 0x60);
  } while (plVar9 == (long *)0x0);
label_04418b7c:
  pSVar8 = (System_String_o *)(**(code **)(*plVar9 + 0x298))(plVar9,*(undefined8 *)(*plVar9 + 0x2a0));
  return pSVar8;
}


// UI.MapEditorAddObjectPanel$$OnSelectObject
// il2cpp: void UI_MapEditorAddObjectPanel__OnSelectObject (UI_MapEditorAddObjectPanel_o* __this, System_String_o* name, const MethodInfo* method);
// 0x4418940

void UI_MapEditorAddObjectPanel__OnSelectObject
               (UI_MapEditorAddObjectPanel_o *__this,System_String_o *name,MethodInfo *method)

{
  int32_t *piVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  UI_MapEditorInspectPanel_o *__this_00;
  System_Object_array *pSVar5;
  System_Collections_Generic_Dictionary_object__object__o *pSVar6;
  long lVar7;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  System_Collections_Generic_List_Enumerator_object__o __this_05;
  System_Collections_Generic_List_Enumerator_object__o __this_06;
  bool_conflict bVar8;
  System_Collections_Generic_List_object__o *__this_07;
  Il2CppObject *collection;
  System_Collections_Generic_List_List_T___o *__this_08;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_00;
  MethodInfo *method_01;
  long *plVar9;
  Il2CppClass *item;
  UI_BasePanel_o *pUVar10;
  Il2CppRGCTXData *__this_09;
  long *unaff_R12;
  undefined1 auVar11 [12];
  _union_249689 _Var12;
  Il2CppType *pIVar13;
  UnityEngine_Object_o *obj;
  UnityEngine_Object_o *pUVar14;
  System_Collections_Generic_List_Enumerator_T__c *pSStack_90;
  Il2CppType *pIStack_88;
  System_Collections_Generic_List_string__o *pSStack_80;
  _union_249689 _Stack_70;
  Il2CppType *pIStack_68;
  UnityEngine_Object_o *pUStack_60;
  Il2CppRGCTXData *pIStack_58;
  _union_249689 _Stack_50;
  
  if (g_data_057ae628 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinMapPrefabs);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapEditorGameManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapEditorMenu);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    g_data_057ae628 = '\x01';
  }
  plVar9 = *(long **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x10);
  if ((Il2CppRGCTXData *)plVar9 != (Il2CppRGCTXData *)0x0) {
    bVar2 = (TypeInfo_MapEditorGameManager->_2).naturalAligment;
    item = TypeInfo_MapEditorGameManager;
    __this_09 = (Il2CppRGCTXData *)plVar9;
    if (((((Il2CppClass *)*plVar9)->_2).naturalAligment < bVar2) ||
       ((((Il2CppClass *)*plVar9)->_2).typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_MapEditorGameManager)) {
label_04418b9d:
      il2cpp_runtime_helper_022b2fd0();
      pIStack_58 = (Il2CppRGCTXData *)plVar9;
      _Stack_50 = (_union_249689)unaff_R12;
      if (g_data_057ae635 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinMapPrefabs);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
        il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String_get_Item);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
        il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String_get_Current);
        il2cpp_runtime_helper_023445d0(&MethodInfo_GameObject_get_Current);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Void_AddRange);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
        il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_List_1_System_String_GetEnumerator);
        il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_UnityEngine_GameObject_GetEnumerator);
        il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
        il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
        il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_List_1_System_String_GroupItems_String);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Util);
        g_data_057ae635 = '\x01';
      }
      _Var12.genericMethod = (Il2CppMethodPointer)0x0;
      pIVar13 = (Il2CppType *)0x0;
      obj = (UnityEngine_Object_o *)0x0;
      pSStack_90 = (System_Collections_Generic_List_Enumerator_T__c *)0x0;
      pIStack_88 = (Il2CppType *)0x0;
      pSStack_80 = (System_Collections_Generic_List_string__o *)0x0;
      if ((UI_MapEditorHierarchyPanel_o *)__this_09[0x15].method != (UI_MapEditorHierarchyPanel_o *)0x0) {
        System_Collections_Generic_List_object___GetEnumerator
                  ((System_Collections_Generic_List_Enumerator_T__o *)&_Stack_70,
                   (System_Collections_Generic_List_object__o *)__this_09[0x15].method,MethodInfo_List_1_T_Enumerator_UnityEngine_GameObject_GetEnumerator);
        _Var12 = _Stack_70;
        pIVar13 = pIStack_68;
        obj = pUStack_60;
        while (__this_01.fields._8_8_ = pIVar13, __this_01.fields._list = _Var12.genericMethod,
              __this_01.fields._current = (Il2CppObject *)obj,
              bVar8 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                (__this_01,(MethodInfo_321A1D0 *)&stack0xffffffffffffff50),
              (char)bVar8 != '\0') {
          pUVar14 = obj;
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          UnityEngine_Object__Destroy_4e01c60(obj,(MethodInfo *)0x0);
          obj = pUVar14;
        }
        __this_02.fields._8_8_ = pIVar13;
        __this_02.fields._list = _Var12.genericMethod;
        __this_02.fields._current = (Il2CppObject *)obj;
        System_Collections_Generic_List_Enumerator_object___Dispose
                  (__this_02,(MethodInfo_321A1C0 *)&stack0xffffffffffffff50);
        __this_07 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
        System_Collections_Generic_List_object____ctor(__this_07,MethodInfo_List_1_System_String);
        lVar7 = MethodInfo_Void_Add;
        if (__this_07 != (System_Collections_Generic_List_object__o *)0x0) {
          piVar1 = &(__this_07->fields)._version;
          *piVar1 = *piVar1 + 1;
          pSVar5 = (__this_07->fields)._items;
          if (pSVar5 != (System_Object_array *)0x0) {
            uVar3 = (__this_07->fields)._size;
            if (uVar3 < (uint)pSVar5->max_length) {
              (__this_07->fields)._size = uVar3 + 1;
              pSVar5->m_Items[(int)uVar3] = (Il2CppObject *)item;
              il2cpp_runtime_helper_022b4080(pSVar5->m_Items + (int)uVar3,item);
              iVar4 = *(int *)(TypeInfo_BuiltinMapPrefabs + 0xe4);
            }
            else {
              System_Collections_Generic_List_object___AddWithResize
                        (__this_07,(Il2CppObject *)item,
                         *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
              iVar4 = *(int *)(TypeInfo_BuiltinMapPrefabs + 0xe4);
            }
            if (iVar4 == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            pSVar6 = *(System_Collections_Generic_Dictionary_object__object__o **)
                      (*(long *)(TypeInfo_BuiltinMapPrefabs + 0xb8) + 0x28);
            if (pSVar6 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
              bVar8 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                                (pSVar6,(Il2CppObject *)item,MethodInfo_Boolean_ContainsKey);
              if ((char)bVar8 != '\0') {
                if (*(int *)(TypeInfo_BuiltinMapPrefabs + 0xe4) == 0) {
                  il2cpp_runtime_helper_02337ed0();
                }
                pSVar6 = *(System_Collections_Generic_Dictionary_object__object__o **)
                          (*(long *)(TypeInfo_BuiltinMapPrefabs + 0xb8) + 0x28);
                if (pSVar6 == (System_Collections_Generic_Dictionary_object__object__o *)0x0)
                goto label_04418f3c;
                collection = System_Collections_Generic_Dictionary_object__object___get_Item
                                       (pSVar6,(Il2CppObject *)item,MethodInfo_List_1_System_String_get_Item);
                System_Collections_Generic_List_object___AddRange
                          (__this_07,(System_Collections_Generic_IEnumerable_T__o *)collection,MethodInfo_Void_AddRange);
              }
              if (*(int *)(TypeInfo_Util + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              __this_08 = Utility_Util__GroupItems_object_
                                    ((System_Collections_Generic_List_T__o *)__this_07,8,MethodInfo_List_1_List_1_System_String_GroupItems_String);
              if (__this_08 != (System_Collections_Generic_List_List_T___o *)0x0) {
                System_Collections_Generic_List_object___GetEnumerator
                          ((System_Collections_Generic_List_Enumerator_T__o *)&pSStack_90,
                           (System_Collections_Generic_List_object__o *)__this_08,MethodInfo_List_1_T_Enumerator_List_1_System_String_GetEnumerator);
                while (__this_03.fields._8_8_ = pIVar13, __this_03.fields._list = _Var12.genericMethod,
                      __this_03.fields._current = (Il2CppObject *)obj,
                      bVar8 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                        (__this_03,(MethodInfo_321A1D0 *)&pSStack_90), (char)bVar8 != '\0') {
                  UI_MapEditorAddVariantPopup__CreateRow
                            ((UI_MapEditorAddVariantPopup_o *)__this_09,pSStack_80,method_01);
                }
                __this_04.fields._8_8_ = pIVar13;
                __this_04.fields._list = _Var12.genericMethod;
                __this_04.fields._current = (Il2CppObject *)obj;
                System_Collections_Generic_List_Enumerator_object___Dispose
                          (__this_04,(MethodInfo_321A1C0 *)&pSStack_90);
                goto label_04418f23;
              }
            }
          }
        }
      }
label_04418f3c:
      auVar11 = il2cpp_runtime_helper_022b2c90();
      if (auVar11._8_4_ == 1) {
        plVar9 = (long *)__cxa_begin_catch(auVar11._0_8_);
        lVar7 = *plVar9;
        __cxa_end_catch();
        __this_05.fields._8_8_ = pIVar13;
        __this_05.fields._list = _Var12.genericMethod;
        __this_05.fields._current = (Il2CppObject *)obj;
        System_Collections_Generic_List_Enumerator_object___Dispose
                  (__this_05,(MethodInfo_321A1C0 *)&pSStack_90);
        if (lVar7 == 0) {
label_04418f23:
          UI_BasePopup__Show((UI_BasePopup_o *)__this_09,(MethodInfo *)0x0);
          return;
        }
        il2cpp_runtime_helper_022fefe0(lVar7);
      }
      __this_06.fields._8_8_ = pIVar13;
      __this_06.fields._list = _Var12.genericMethod;
      __this_06.fields._current = (Il2CppObject *)obj;
      System_Collections_Generic_List_Enumerator_object___Dispose(__this_06,(MethodInfo_321A1C0 *)&pSStack_90)
      ;
      _Unwind_Resume(auVar11._0_8_);
    }
    __this_00 = (UI_MapEditorInspectPanel_o *)((Il2CppRGCTXData *)(plVar9 + 0x13))->method;
    if ((__this_00 == (UI_MapEditorInspectPanel_o *)0x0) ||
       (*(char *)((long)&(__this_00->fields).m_CachedPtr + 1) == '\0')) {
      unaff_R12 = &TypeInfo_BuiltinMapPrefabs;
      if (*(int *)(TypeInfo_BuiltinMapPrefabs + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar6 = *(System_Collections_Generic_Dictionary_object__object__o **)
                (*(long *)(TypeInfo_BuiltinMapPrefabs + 0xb8) + 0x28);
      if (pSVar6 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
        bVar8 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                          (pSVar6,(Il2CppObject *)name,MethodInfo_Boolean_ContainsKey);
        if ((char)bVar8 == '\0') goto label_04418b66;
        plVar9 = &TypeInfo_UIManager;
        method_00 = extraout_RDX;
        if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
          method_00 = extraout_RDX_00;
        }
        __this_09 = *(Il2CppRGCTXData **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
        if (__this_09 != (Il2CppRGCTXData *)0x0) {
          bVar2 = (TypeInfo_MapEditorMenu->_2).naturalAligment;
          item = TypeInfo_MapEditorMenu;
          if (((__this_09->klass->_2).naturalAligment < bVar2) ||
             ((__this_09->klass->_2).typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_MapEditorMenu)) goto label_04418b9d;
          if ((UI_MapEditorAddVariantPopup_o *)__this_09[0x18].method != (UI_MapEditorAddVariantPopup_o *)0x0)
          {
            UI_MapEditorAddVariantPopup__Show
                      ((UI_MapEditorAddVariantPopup_o *)__this_09[0x18].method,name,method_00);
            pUVar10 = (__this->fields).Parent;
            goto joined_r0x04418b5f;
          }
        }
      }
    }
    else {
      MapEditor_MapEditorBrush__AddEntry((MapEditor_MapEditorBrush_o *)__this_00,name,(MethodInfo *)0x0);
      if ((UI_MapEditorInspectPanel_o *)((Il2CppRGCTXData *)(plVar9 + 0x13))->method !=
          (UI_MapEditorInspectPanel_o *)0x0) {
        *(undefined1 *)
         ((long)&(((UI_MapEditorInspectPanel_o *)((Il2CppRGCTXData *)(plVar9 + 0x13))->method)->fields).
                 m_CachedPtr + 1) = 0;
        plVar9 = &TypeInfo_UIManager;
        if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        __this_09 = *(Il2CppRGCTXData **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
        if (__this_09 != (Il2CppRGCTXData *)0x0) {
          bVar2 = (TypeInfo_MapEditorMenu->_2).naturalAligment;
          item = TypeInfo_MapEditorMenu;
          if (((__this_09->klass->_2).naturalAligment < bVar2) ||
             ((__this_09->klass->_2).typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_MapEditorMenu)) goto label_04418b9d;
          UI_MapEditorMenu__SyncBrushPanel((UI_MapEditorMenu_o *)__this_09,(MethodInfo *)0x0);
          pUVar10 = (__this->fields).Parent;
joined_r0x04418b5f:
          plVar9 = &TypeInfo_UIManager;
          if (pUVar10 != (UI_BasePanel_o *)0x0) goto label_04418b7c;
        }
      }
    }
  }
  do {
    il2cpp_runtime_helper_022b2c90();
label_04418b66:
    GameManagers_MapEditorGameManager__AddObject
              ((GameManagers_MapEditorGameManager_o *)plVar9,name,(MethodInfo *)0x0);
    pUVar10 = (__this->fields).Parent;
  } while (pUVar10 == (UI_BasePanel_o *)0x0);
label_04418b7c:
  (*(pUVar10->klass->vtable)._22_Hide.methodPtr)(pUVar10,(pUVar10->klass->vtable)._22_Hide.method);
  return;
}


// UI.MapEditorAddObjectPanel$$.ctor
// il2cpp: void UI_MapEditorAddObjectPanel___ctor (UI_MapEditorAddObjectPanel_o* __this, const MethodInfo* method);
// 0x4419030

void UI_MapEditorAddObjectPanel___ctor(UI_MapEditorAddObjectPanel_o *__this,MethodInfo *method)

{
  UI_CategoryPanel___ctor((UI_CategoryPanel_o *)__this,(MethodInfo *)0x0);
  return;
}


