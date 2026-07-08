// Type: UI.MapEditorAddObjectPanel
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/UI/MapEditorAddObjectPanel.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/UI/MapEditorMenu/MapEditorAddObjectPanel.cs  [CHANGED since prior version]
// --------------------------------

// UI.MapEditorAddObjectPanel.<>c$$.cctor
// il2cpp: void UI_MapEditorAddObjectPanel___c___cctor (const MethodInfo* method);
// 0x4104b70

void UI_MapEditorAddObjectPanel_<>c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (DAT_0570488d == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_0570488d = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = __this;
  il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_c + 0xb8),__this);
  return;
}


// UI.MapEditorAddObjectPanel.<>c$$.ctor
// il2cpp: void UI_MapEditorAddObjectPanel___c___ctor (UI_MapEditorAddObjectPanel___c_o* __this, const MethodInfo* method);
// 0x4104be0

void UI_MapEditorAddObjectPanel_<>c___ctor
               (UI_MapEditorAddObjectPanel___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// UI.MapEditorAddObjectPanel.<>c$$<GetItems>b__10_0
// il2cpp: System_String_o* UI_MapEditorAddObjectPanel___c___GetItems_b__10_0 (UI_MapEditorAddObjectPanel___c_o* __this, Map_MapScriptBaseObject_o* x, const MethodInfo* method);
// 0x4104bf0

System_String_o *
UI_MapEditorAddObjectPanel_<>c__<GetItems>b__10_0
          (UI_MapEditorAddObjectPanel___c_o *__this,Map_MapScriptBaseObject_o *x,MethodInfo *method)

{
  if (x != (Map_MapScriptBaseObject_o *)0x0) {
    return *(System_String_o **)&(x->fields).Visible;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.MapEditorAddObjectPanel.<>c__DisplayClass13_0$$.ctor
// il2cpp: void UI_MapEditorAddObjectPanel___c__DisplayClass13_0___ctor (UI_MapEditorAddObjectPanel___c__DisplayClass13_0_o* __this, const MethodInfo* method);
// 0x4104350

void UI_MapEditorAddObjectPanel_<>c__DisplayClass13_0___ctor
               (UI_MapEditorAddObjectPanel___c__DisplayClass13_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// UI.MapEditorAddObjectPanel.<>c__DisplayClass13_0$$<CreateRow>b__0
// il2cpp: void UI_MapEditorAddObjectPanel___c__DisplayClass13_0___CreateRow_b__0 (UI_MapEditorAddObjectPanel___c__DisplayClass13_0_o* __this, const MethodInfo* method);
// 0x4104c10

void UI_MapEditorAddObjectPanel_<>c__DisplayClass13_0__<CreateRow>b__0
               (UI_MapEditorAddObjectPanel___c__DisplayClass13_0_o *__this,MethodInfo *method)

{
  UI_MapEditorAddObjectPanel_o *pUVar1;
  Il2CppMethodPointer vtable_dispatch;
  
  pUVar1 = (__this->fields).__4__this;
  if (pUVar1 != (UI_MapEditorAddObjectPanel_o *)0x0) {
    vtable_dispatch = (pUVar1->klass->vtable)._37_OnSelectObject.methodPtr;
    (*vtable_dispatch)
              (pUVar1,(__this->fields).item,(pUVar1->klass->vtable)._37_OnSelectObject.method,
               vtable_dispatch);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.MapEditorAddObjectPanel$$get_ScrollBar
// il2cpp: bool UI_MapEditorAddObjectPanel__get_ScrollBar (UI_MapEditorAddObjectPanel_o* __this, const MethodInfo* method);
// 0x4102e30

bool_conflict
UI_MapEditorAddObjectPanel__get_ScrollBar(UI_MapEditorAddObjectPanel_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// UI.MapEditorAddObjectPanel$$get_VerticalSpacing
// il2cpp: float UI_MapEditorAddObjectPanel__get_VerticalSpacing (UI_MapEditorAddObjectPanel_o* __this, const MethodInfo* method);
// 0x4102e40

float UI_MapEditorAddObjectPanel__get_VerticalSpacing
                (UI_MapEditorAddObjectPanel_o *__this,MethodInfo *method)

{
  return 12.0;
}


// UI.MapEditorAddObjectPanel$$get_HorizontalPadding
// il2cpp: int32_t UI_MapEditorAddObjectPanel__get_HorizontalPadding (UI_MapEditorAddObjectPanel_o* __this, const MethodInfo* method);
// 0x4102e50

int32_t UI_MapEditorAddObjectPanel__get_HorizontalPadding
                  (UI_MapEditorAddObjectPanel_o *__this,MethodInfo *method)

{
  return 0xf;
}


// UI.MapEditorAddObjectPanel$$get_VerticalPadding
// il2cpp: int32_t UI_MapEditorAddObjectPanel__get_VerticalPadding (UI_MapEditorAddObjectPanel_o* __this, const MethodInfo* method);
// 0x4102e60

int32_t UI_MapEditorAddObjectPanel__get_VerticalPadding
                  (UI_MapEditorAddObjectPanel_o *__this,MethodInfo *method)

{
  return 10;
}


// UI.MapEditorAddObjectPanel$$Setup
// il2cpp: void UI_MapEditorAddObjectPanel__Setup (UI_MapEditorAddObjectPanel_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x4102e70

void UI_MapEditorAddObjectPanel__Setup
               (UI_MapEditorAddObjectPanel_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  byte bVar1;
  UnityEngine_GameObject_o *pUVar2;
  UnityEngine_GameObject_c *a;
  System_Collections_Generic_List_Enumerator_object__o __this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  bool_conflict bVar3;
  System_String_o *pSVar4;
  System_Collections_Generic_List_string__o *original;
  System_Collections_Generic_List_List_T___o *__this_02;
  UI_MapEditorAddObjectPanel_c *method_00;
  MethodInfo *method_01;
  UnityEngine_GameObject_c *__this_03;
  System_Collections_Generic_List_T__o *pSVar5;
  Il2CppMethodPointer pIVar6;
  System_Collections_Generic_List_string__o *items;
  
  if (DAT_05704886 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_List_1_System_String__get_Current);
    il2cpp_init_method_metadata(&MethodInfo_List_1_T__Enumerator_List_1_System_String___GetE);
    il2cpp_init_method_metadata(&TypeInfo_MapEditorAddObjectPopup);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Value);
    il2cpp_init_method_metadata(&MethodInfo_List_1_List_1_System_String___GroupItems_String);
    il2cpp_init_method_metadata(&TypeInfo_Util);
    DAT_05704886 = '\x01';
  }
  pSVar5 = (System_Collections_Generic_List_T__o *)0x0;
  pIVar6 = (Il2CppMethodPointer)0x0;
  items = (System_Collections_Generic_List_string__o *)0x0;
  UI_BasePanel__Setup((UI_BasePanel_o *)__this,parent,(MethodInfo *)0x0);
  if (parent != (UI_BasePanel_o *)0x0) {
    bVar1 = (TypeInfo_MapEditorAddObjectPopup->_2).naturalAligment;
    if (((parent->klass->_2).naturalAligment < bVar1) ||
       ((parent->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_MapEditorAddObjectPopup)) {
                    /* WARNING: Subroutine does not return */
      il2cpp_unwind_resume(parent);
    }
    pSVar4 = UI_BasePanel__GetCurrentCategoryName(parent,(MethodInfo *)0x0);
    pUVar2 = parent[1].fields._currentCategoryPanel;
    if (pUVar2 != (UnityEngine_GameObject_o *)0x0) {
      a = pUVar2[1].klass;
      method_00 = __this->klass;
      original = (System_Collections_Generic_List_string__o *)
                 (*(method_00->vtable)._35_GetItems.methodPtr)
                           (__this,pSVar4,(method_00->vtable)._35_GetItems.method);
      __this_03 = a;
      bVar3 = System_String__op_Inequality
                        ((System_String_o *)a,
                         (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8),(MethodInfo *)0x0
                        );
      if ((char)bVar3 != '\0') {
        original = UI_MapEditorAddObjectPanel__Filter
                             ((UI_MapEditorAddObjectPanel_o *)__this_03,original,
                              (System_String_o *)a,(MethodInfo *)method_00);
      }
      if (*(int *)(TypeInfo_Util + 0xe4) == 0) {
        il2cpp_init_class();
      }
      __this_02 = Utility_Util__GroupItems<object>
                            ((System_Collections_Generic_List_T__o *)original,8,MethodInfo_List_1_List_1_System_String___GroupItems_String);
      if (__this_02 != (System_Collections_Generic_List_List_T___o *)0x0) {
        System_Collections_Generic_List<object>__GetEnumerator
                  ((System_Collections_Generic_List_Enumerator_T__o *)&stack0xffffffffffffffc8,
                   (System_Collections_Generic_List_object__o *)__this_02,MethodInfo_List_1_T__Enumerator_List_1_System_String___GetE);
        while( true ) {
          __this_00.fields._8_8_ = pIVar6;
          __this_00.fields._list = pSVar5;
          __this_00.fields._current = (Il2CppObject *)items;
          bVar3 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                            (__this_00,(MethodInfo_3185E20 *)&stack0xffffffffffffffc8);
          if ((char)bVar3 == '\0') break;
          UI_MapEditorAddObjectPanel__CreateRow(__this,items,method_01);
        }
        __this_01.fields._8_8_ = pIVar6;
        __this_01.fields._list = pSVar5;
        __this_01.fields._current = (Il2CppObject *)items;
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (__this_01,(MethodInfo_3185E10 *)&stack0xffffffffffffffc8);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.MapEditorAddObjectPanel$$GetItems
// il2cpp: System_Collections_Generic_List_string__o* UI_MapEditorAddObjectPanel__GetItems (UI_MapEditorAddObjectPanel_o* __this, System_String_o* category, const MethodInfo* method);
// 0x4103d30

System_Collections_Generic_List_string__o *
UI_MapEditorAddObjectPanel__GetItems
          (UI_MapEditorAddObjectPanel_o *__this,System_String_o *category,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *pSVar1;
  long lVar2;
  bool_conflict bVar3;
  UI_MapEditorAddObjectPanel_o *pUVar4;
  System_Collections_Generic_List_string__o *pSVar5;
  System_Collections_Generic_List_string__o *collection;
  Il2CppObject *source;
  System_Func_TSource__TResult__o *selector;
  MethodInfo *method_00;
  MethodInfo *method_01;
  
  if (DAT_05704887 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AssetBundleManager);
    il2cpp_init_method_metadata(&TypeInfo_BuiltinMapPrefabs);
    il2cpp_init_method_metadata(&MethodInfo_List_1_Map_MapScriptBaseObject__get_Item);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_TKey_TValue__KeyCollection_System_S);
    il2cpp_init_method_metadata(&MethodInfo_IEnumerable_1_System_String__Select_MapScriptBas);
    il2cpp_init_method_metadata(&MethodInfo_List_1_System_String__ToList_String);
    il2cpp_init_method_metadata(&TypeInfo_Func_MapScriptBaseObject__string);
    il2cpp_init_method_metadata(&MethodInfo_Void_AddRange);
    il2cpp_init_method_metadata(&MethodInfo_String__GetItems_b__10_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    il2cpp_init_method_metadata(&"Custom");
    il2cpp_init_method_metadata(&"All");
    DAT_05704887 = '\x01';
  }
  bVar3 = System_String__op_Equality(category,"All",(MethodInfo *)0x0);
  if ((char)bVar3 == '\0') {
    bVar3 = System_String__op_Equality(category,"Custom",(MethodInfo *)0x0);
    if ((char)bVar3 != '\0') {
      if (*(int *)(TypeInfo_AssetBundleManager + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pSVar5 = ApplicationManagers_AssetBundleManager__GetAssetList((MethodInfo *)0x0);
      return pSVar5;
    }
    if (*(int *)(TypeInfo_BuiltinMapPrefabs + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pSVar1 = *(System_Collections_Generic_Dictionary_object__object__o **)
              (*(long *)(TypeInfo_BuiltinMapPrefabs + 0xb8) + 0x10);
    if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      source = System_Collections_Generic_Dictionary<object__object>__get_Item
                         (pSVar1,(Il2CppObject *)category,MethodInfo_List_1_Map_MapScriptBaseObject__get_Item);
      if (*(int *)(TypeInfo_c + 0xe4) == 0) {
        il2cpp_init_class();
        selector = *(System_Func_TSource__TResult__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
      }
      else {
        selector = *(System_Func_TSource__TResult__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
      }
      if (selector == (System_Func_TSource__TResult__o *)0x0) {
        if (*(int *)(TypeInfo_c + 0xe4) == 0) {
          il2cpp_init_class();
        }
        selector = (System_Func_TSource__TResult__o *)il2cpp_runtime_glue(TypeInfo_Func_MapScriptBaseObject__string);
        System_Func<object__object>___ctor();
        lVar2 = *(long *)(TypeInfo_c + 0xb8);
        *(System_Func_TSource__TResult__o **)(lVar2 + 8) = selector;
        il2cpp_runtime_glue(lVar2 + 8,selector);
      }
      pUVar4 = (UI_MapEditorAddObjectPanel_o *)
               System_Linq_Enumerable__Select<object__object>
                         ((System_Collections_Generic_IEnumerable_TSource__o *)source,selector,
                          MethodInfo_IEnumerable_1_System_String__Select_MapScriptBas);
      pSVar5 = (System_Collections_Generic_List_string__o *)
               System_Linq_Enumerable__ToList<object>
                         ((System_Collections_Generic_IEnumerable_TSource__o *)pUVar4,MethodInfo_List_1_System_String__ToList_String);
      if (__this != (UI_MapEditorAddObjectPanel_o *)0x0) {
        pSVar5 = UI_MapEditorAddObjectPanel__GetItemsNoVariants(pUVar4,pSVar5,method_01);
        return pSVar5;
      }
    }
  }
  else {
    if (*(int *)(TypeInfo_BuiltinMapPrefabs + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pSVar1 = *(System_Collections_Generic_Dictionary_object__object__o **)
              (*(long *)(TypeInfo_BuiltinMapPrefabs + 0xb8) + 8);
    if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      pUVar4 = (UI_MapEditorAddObjectPanel_o *)
               System_Collections_Generic_Dictionary<object__object>__get_Keys(pSVar1,MethodInfo_Dictionary_2_TKey_TValue__KeyCollection_System_S);
      pSVar5 = (System_Collections_Generic_List_string__o *)
               System_Linq_Enumerable__ToList<object>
                         ((System_Collections_Generic_IEnumerable_TSource__o *)pUVar4,MethodInfo_List_1_System_String__ToList_String);
      pSVar5 = UI_MapEditorAddObjectPanel__GetItemsNoVariants(pUVar4,pSVar5,method_00);
      if (*(int *)(TypeInfo_AssetBundleManager + 0xe4) == 0) {
        il2cpp_init_class();
      }
      collection = ApplicationManagers_AssetBundleManager__GetAssetList((MethodInfo *)0x0);
      if (pSVar5 != (System_Collections_Generic_List_string__o *)0x0) {
        System_Collections_Generic_List<object>__AddRange
                  ((System_Collections_Generic_List_object__o *)pSVar5,
                   (System_Collections_Generic_IEnumerable_T__o *)collection,MethodInfo_Void_AddRange);
        return pSVar5;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.MapEditorAddObjectPanel$$GetItemsNoVariants
// il2cpp: System_Collections_Generic_List_string__o* UI_MapEditorAddObjectPanel__GetItemsNoVariants (UI_MapEditorAddObjectPanel_o* __this, System_Collections_Generic_List_string__o* items, const MethodInfo* method);
// 0x4104010

System_Collections_Generic_List_string__o *
UI_MapEditorAddObjectPanel__GetItemsNoVariants
          (UI_MapEditorAddObjectPanel_o *__this,System_Collections_Generic_List_string__o *items,
          MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Collections_Generic_Dictionary_object__object__o *pSVar3;
  System_String_array *pSVar4;
  System_Collections_Generic_List_Enumerator_object__o __this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  long lVar5;
  bool_conflict bVar6;
  System_Collections_Generic_List_string__o *__this_03;
  System_Collections_Generic_List_Enumerator_T__c *pSVar7;
  Il2CppType *pIVar8;
  System_String_o *key;
  System_String_o *pSVar9;
  undefined1 local_48 [16];
  System_String_o *local_38;
  
  if (DAT_05704888 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BuiltinMapPrefabs);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ContainsKey);
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_List_1_T__Enumerator_System_String__GetEnumerato);
    il2cpp_init_method_metadata(&MethodInfo_List_1_System_String);
    il2cpp_init_method_metadata(&TypeInfo_List_string);
    DAT_05704888 = '\x01';
  }
  __this_03 = (System_Collections_Generic_List_string__o *)il2cpp_runtime_glue(TypeInfo_List_string);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_03,MethodInfo_List_1_System_String);
  if (items == (System_Collections_Generic_List_string__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  System_Collections_Generic_List<object>__GetEnumerator
            ((System_Collections_Generic_List_Enumerator_T__o *)local_48,
             (System_Collections_Generic_List_object__o *)items,MethodInfo_List_1_T__Enumerator_System_String__GetEnumerato);
  pSVar7 = (System_Collections_Generic_List_Enumerator_T__c *)local_48._0_8_;
  pIVar8 = (Il2CppType *)local_48._8_8_;
  key = local_38;
  if (__this_03 == (System_Collections_Generic_List_string__o *)0x0) {
    while (__this_01.fields._8_8_ = pIVar8,
          __this_01.fields._list = (System_Collections_Generic_List_T__o *)pSVar7,
          __this_01.fields._current = (Il2CppObject *)key,
          bVar6 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                            (__this_01,(MethodInfo_3185E20 *)&stack0xffffffffffffff98),
          (char)bVar6 != '\0') {
      pSVar9 = key;
      if (*(int *)(TypeInfo_BuiltinMapPrefabs + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pSVar3 = *(System_Collections_Generic_Dictionary_object__object__o **)
                (*(long *)(TypeInfo_BuiltinMapPrefabs + 0xb8) + 0x30);
      if (pSVar3 == (System_Collections_Generic_Dictionary_object__object__o *)0x0)
      goto LAB_04104274;
      bVar6 = System_Collections_Generic_Dictionary<object__object>__ContainsKey
                        (pSVar3,(Il2CppObject *)key,MethodInfo_Boolean_ContainsKey);
      key = pSVar9;
      if ((char)bVar6 == '\0') {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
    }
  }
  else {
    while (key = local_38, __this_00.fields._8_8_ = pIVar8,
          __this_00.fields._list = (System_Collections_Generic_List_T__o *)pSVar7,
          __this_00.fields._current = (Il2CppObject *)key,
          bVar6 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                            (__this_00,(MethodInfo_3185E20 *)&stack0xffffffffffffff98),
          (char)bVar6 != '\0') {
      pSVar9 = key;
      if (*(int *)(TypeInfo_BuiltinMapPrefabs + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pSVar3 = *(System_Collections_Generic_Dictionary_object__object__o **)
                (*(long *)(TypeInfo_BuiltinMapPrefabs + 0xb8) + 0x30);
      if (pSVar3 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
LAB_04104274:
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      bVar6 = System_Collections_Generic_Dictionary<object__object>__ContainsKey
                        (pSVar3,(Il2CppObject *)key,MethodInfo_Boolean_ContainsKey);
      lVar5 = MethodInfo_Void_Add;
      local_38 = pSVar9;
      if ((char)bVar6 == '\0') {
        piVar1 = &(__this_03->fields)._version;
        *piVar1 = *piVar1 + 1;
        pSVar4 = (__this_03->fields)._items;
        if (pSVar4 == (System_String_array *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        uVar2 = (__this_03->fields)._size;
        if (uVar2 < (uint)pSVar4->max_length) {
          (__this_03->fields)._size = uVar2 + 1;
          pSVar4->m_Items[(int)uVar2] = key;
          il2cpp_runtime_glue(pSVar4->m_Items + (int)uVar2,key);
          local_38 = pSVar9;
        }
        else {
          System_Collections_Generic_List<object>__AddWithResize
                    ((System_Collections_Generic_List_object__o *)__this_03,(Il2CppObject *)key,
                     *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
          local_38 = pSVar9;
        }
      }
    }
  }
  __this_02.fields._8_8_ = pIVar8;
  __this_02.fields._list = (System_Collections_Generic_List_T__o *)pSVar7;
  __this_02.fields._current = (Il2CppObject *)key;
  System_Collections_Generic_List_Enumerator<object>__Dispose
            (__this_02,(MethodInfo_3185E10 *)&stack0xffffffffffffff98);
  return __this_03;
}


// UI.MapEditorAddObjectPanel$$Filter
// il2cpp: System_Collections_Generic_List_string__o* UI_MapEditorAddObjectPanel__Filter (UI_MapEditorAddObjectPanel_o* __this, System_Collections_Generic_List_string__o* original, System_String_o* search, const MethodInfo* method);
// 0x41030d0

System_Collections_Generic_List_string__o *
UI_MapEditorAddObjectPanel__Filter
          (UI_MapEditorAddObjectPanel_o *__this,System_Collections_Generic_List_string__o *original,
          System_String_o *search,MethodInfo *method)

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
  
  if (DAT_05704889 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_List_1_T__Enumerator_System_String__GetEnumerato);
    il2cpp_init_method_metadata(&MethodInfo_List_1_System_String);
    il2cpp_init_method_metadata(&TypeInfo_List_string);
    DAT_05704889 = '\x01';
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
        if (__this_05 == (System_String_o *)0x0) goto LAB_04103323;
        pSVar6 = System_String__ToLower(__this_05,(MethodInfo *)0x0);
        if (pSVar6 == (System_String_o *)0x0) goto LAB_04103328;
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
LAB_04103323:
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        pSVar6 = __this_05;
        __this_04 = System_String__ToLower(__this_05,(MethodInfo *)0x0);
        if (__this_04 == (System_String_o *)0x0) {
LAB_04103328:
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


// UI.MapEditorAddObjectPanel$$CreateRow
// il2cpp: void UI_MapEditorAddObjectPanel__CreateRow (UI_MapEditorAddObjectPanel_o* __this, System_Collections_Generic_List_string__o* items, const MethodInfo* method);
// 0x4103410

void UI_MapEditorAddObjectPanel__CreateRow
               (UI_MapEditorAddObjectPanel_o *__this,
               System_Collections_Generic_List_string__o *items,MethodInfo *method)

{
  Il2CppClass *__this_00;
  System_String_o *path;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  bool_conflict bVar1;
  UnityEngine_GameObject_o *__this_03;
  Il2CppObject *pIVar2;
  UnityEngine_Transform_o *pUVar3;
  UnityEngine_GameObject_o *__this_04;
  Il2CppObject *pIVar4;
  UnityEngine_Events_UnityAction_o *call;
  System_String_o *pSVar5;
  UnityEngine_Texture_o *value;
  UnityEngine_UI_RawImage_o *__this_05;
  MethodInfo *extraout_RDX;
  float spacing;
  UnityEngine_Color_o UVar6;
  undefined8 in_stack_ffffffffffffff88;
  System_Collections_Generic_List_Enumerator_T__c *pSVar7;
  System_Collections_Generic_List_Enumerator_T__o local_48;
  
  if (DAT_0570488a == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_RawImage_GetComponent_RawImage);
    il2cpp_init_method_metadata(&MethodInfo_Text_GetComponent_Text);
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_Button_GetComponent_Button);
    il2cpp_init_method_metadata(&MethodInfo_List_1_T__Enumerator_System_String__GetEnumerato);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeInfo_ResourceManager);
    il2cpp_init_method_metadata(&TypeInfo_ResourcePaths);
    il2cpp_init_method_metadata(&TypeInfo_Texture2D);
    il2cpp_init_method_metadata(&MethodInfo_Void__CreateRow_b__0);
    il2cpp_init_method_metadata(&TypeInfo_c__DisplayClass13_0);
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    il2cpp_init_method_metadata(&TypeInfo_UnityAction);
    il2cpp_init_method_metadata(&"TextColor");
    il2cpp_init_method_metadata(&"DefaultPanel");
    il2cpp_init_method_metadata(&"Text");
    il2cpp_init_method_metadata(&"Prefabs/Misc/MapEditorObjectButton");
    il2cpp_init_method_metadata(&"Icon");
    il2cpp_init_method_metadata(&"DefaultLabel");
    il2cpp_init_method_metadata(&"Previews/");
    DAT_0570488a = '\x01';
    method = extraout_RDX;
  }
  pUVar3 = (__this->fields).SinglePanel;
  spacing = (float)(*(__this->klass->vtable)._11_get_VerticalSpacing.methodPtr)
                             (__this,(__this->klass->vtable)._11_get_VerticalSpacing.method,method);
  __this_03 = UI_ElementFactory__CreateHorizontalGroup(pUVar3,spacing,3,(MethodInfo *)0x0);
  if (items == (System_Collections_Generic_List_string__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  System_Collections_Generic_List<object>__GetEnumerator
            (&local_48,(System_Collections_Generic_List_object__o *)items,MethodInfo_List_1_T__Enumerator_System_String__GetEnumerato);
  pSVar7 = (System_Collections_Generic_List_Enumerator_T__c *)local_48.fields._list;
  while( true ) {
    __this_01.fields._8_8_ = __this;
    __this_01.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff88;
    __this_01.fields._current = (Il2CppObject *)pSVar7;
    bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                      (__this_01,(MethodInfo_3185E20 *)&stack0xffffffffffffff98);
    if ((char)bVar1 == '\0') {
      __this_02.fields._8_8_ = __this;
      __this_02.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff88;
      __this_02.fields._current = (Il2CppObject *)pSVar7;
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (__this_02,(MethodInfo_3185E10 *)&stack0xffffffffffffff98);
      return;
    }
    pIVar2 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_c__DisplayClass13_0);
    System_Object___ctor(pIVar2,(MethodInfo *)0x0);
    if (pIVar2 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    pIVar2[1].monitor = __this;
    il2cpp_runtime_glue(&pIVar2[1].monitor);
    pIVar2[1].klass = (Il2CppClass *)local_48.fields._current;
    il2cpp_runtime_glue();
    if (__this_03 == (UnityEngine_GameObject_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    pUVar3 = UnityEngine_GameObject__get_transform(__this_03,(MethodInfo *)0x0);
    __this_04 = UI_ElementFactory__InstantiateAndBind(pUVar3,"Prefabs/Misc/MapEditorObjectButton",(MethodInfo *)0x0);
    if (__this_04 == (UnityEngine_GameObject_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    pIVar4 = UnityEngine_GameObject__GetComponent<object>(__this_04,MethodInfo_Button_GetComponent_Button);
    if (pIVar4 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    __this_00 = pIVar4[0x10].klass;
    call = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_glue(TypeInfo_UnityAction);
    UnityEngine_Events_UnityAction___ctor();
    if (__this_00 == (Il2CppClass *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    UnityEngine_Events_UnityEvent__AddListener
              ((UnityEngine_Events_UnityEvent_o *)__this_00,call,(MethodInfo *)0x0);
    pSVar5 = (System_String_o *)
             (*(__this->klass->vtable)._36_GetPreviewName.methodPtr)
                       (__this,pIVar2[1].klass,(__this->klass->vtable)._36_GetPreviewName.method);
    if (*(int *)(TypeInfo_ResourcePaths + 0xe4) == 0) {
      il2cpp_init_class();
    }
    path = *(System_String_o **)(*(long *)(TypeInfo_ResourcePaths + 0xb8) + 0x38);
    pSVar5 = System_String__Concat("Previews/",pSVar5,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
      il2cpp_init_class();
    }
    value = (UnityEngine_Texture_o *)
            ApplicationManagers_ResourceManager__LoadAsset(path,pSVar5,0,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)value,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar1 == '\0') {
      pUVar3 = UnityEngine_GameObject__get_transform(__this_04,(MethodInfo *)0x0);
      if (pUVar3 == (UnityEngine_Transform_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      pUVar3 = UnityEngine_Transform__Find(pUVar3,"Icon",(MethodInfo *)0x0);
      if (pUVar3 == (UnityEngine_Transform_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      pIVar4 = UnityEngine_Component__GetComponent<object>
                         ((UnityEngine_Component_o *)pUVar3,MethodInfo_RawImage_GetComponent_RawImage);
      if (pIVar4 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      (*pIVar4->klass->vtable[0x17].methodPtr)(0x3ea3d70a,0x3f8000003ea3d70a,pIVar4);
    }
    else {
      pUVar3 = UnityEngine_GameObject__get_transform(__this_04,(MethodInfo *)0x0);
      if (pUVar3 == (UnityEngine_Transform_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      pUVar3 = UnityEngine_Transform__Find(pUVar3,"Icon",(MethodInfo *)0x0);
      if (pUVar3 == (UnityEngine_Transform_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      __this_05 = (UnityEngine_UI_RawImage_o *)
                  UnityEngine_Component__GetComponent<object>
                            ((UnityEngine_Component_o *)pUVar3,MethodInfo_RawImage_GetComponent_RawImage);
      if (__this_05 == (UnityEngine_UI_RawImage_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      if ((value != (UnityEngine_Texture_o *)0x0) && (value->klass != TypeInfo_Texture2D)) {
                    /* WARNING: Subroutine does not return */
        il2cpp_unwind_resume(value);
      }
      UnityEngine_UI_RawImage__set_texture(__this_05,value,(MethodInfo *)0x0);
    }
    pUVar3 = UnityEngine_GameObject__get_transform(__this_04,(MethodInfo *)0x0);
    if (pUVar3 == (UnityEngine_Transform_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    pUVar3 = UnityEngine_Transform__Find(pUVar3,"Text",(MethodInfo *)0x0);
    if (pUVar3 == (UnityEngine_Transform_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    pIVar4 = UnityEngine_Component__GetComponent<object>
                       ((UnityEngine_Component_o *)pUVar3,MethodInfo_Text_GetComponent_Text);
    if (pIVar4 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    (*pIVar4->klass->vtable[0x4b].methodPtr)
              (pIVar4,pIVar2[1].klass,pIVar4->klass->vtable[0x4b].method);
    pUVar3 = UnityEngine_GameObject__get_transform(__this_04,(MethodInfo *)0x0);
    if (pUVar3 == (UnityEngine_Transform_o *)0x0) break;
    pUVar3 = UnityEngine_Transform__Find(pUVar3,"Text",(MethodInfo *)0x0);
    if (pUVar3 == (UnityEngine_Transform_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    pIVar2 = UnityEngine_Component__GetComponent<object>
                       ((UnityEngine_Component_o *)pUVar3,MethodInfo_Text_GetComponent_Text);
    if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
      il2cpp_init_class();
    }
    UVar6 = UI_UIManager__GetThemeColor
                      ("DefaultPanel","DefaultLabel","TextColor","DefaultPanel",(MethodInfo *)0x0);
    if (pIVar2 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception(UVar6.fields.r,UVar6.fields._8_8_);
    }
    (*pIVar2->klass->vtable[0x17].methodPtr)(pIVar2,pIVar2->klass->vtable[0x17].method);
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.MapEditorAddObjectPanel$$GetPreviewName
// il2cpp: System_String_o* UI_MapEditorAddObjectPanel__GetPreviewName (UI_MapEditorAddObjectPanel_o* __this, System_String_o* item, const MethodInfo* method);
// 0x4104360

System_String_o *
UI_MapEditorAddObjectPanel__GetPreviewName
          (UI_MapEditorAddObjectPanel_o *__this,System_String_o *item,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *pSVar1;
  bool_conflict bVar2;
  System_String_o *pSVar3;
  
  if (DAT_0570488b == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BuiltinMapPrefabs);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ContainsKey);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Item);
    il2cpp_init_method_metadata(&"Preview");
    DAT_0570488b = '\x01';
    if (*(int *)(TypeInfo_BuiltinMapPrefabs + 0xe4) == 0) goto LAB_041043e2;
LAB_04104383:
    pSVar1 = *(System_Collections_Generic_Dictionary_object__object__o **)
              (*(long *)(TypeInfo_BuiltinMapPrefabs + 0xb8) + 0x20);
  }
  else {
    if (*(int *)(TypeInfo_BuiltinMapPrefabs + 0xe4) != 0) goto LAB_04104383;
LAB_041043e2:
    il2cpp_init_class();
    pSVar1 = *(System_Collections_Generic_Dictionary_object__object__o **)
              (*(long *)(TypeInfo_BuiltinMapPrefabs + 0xb8) + 0x20);
  }
  if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    bVar2 = System_Collections_Generic_Dictionary<object__object>__ContainsKey
                      (pSVar1,(Il2CppObject *)item,MethodInfo_Boolean_ContainsKey);
    if ((char)bVar2 != '\0') {
      if (*(int *)(TypeInfo_BuiltinMapPrefabs + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pSVar1 = *(System_Collections_Generic_Dictionary_object__object__o **)
                (*(long *)(TypeInfo_BuiltinMapPrefabs + 0xb8) + 0x20);
      if (pSVar1 == (System_Collections_Generic_Dictionary_object__object__o *)0x0)
      goto LAB_04104464;
      item = (System_String_o *)
             System_Collections_Generic_Dictionary<object__object>__get_Item
                       (pSVar1,(Il2CppObject *)item,MethodInfo_String_get_Item);
    }
    pSVar3 = System_String__Concat(item,"Preview",(MethodInfo *)0x0);
    return pSVar3;
  }
LAB_04104464:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.MapEditorAddObjectPanel$$OnSelectObject
// il2cpp: void UI_MapEditorAddObjectPanel__OnSelectObject (UI_MapEditorAddObjectPanel_o* __this, System_String_o* name, const MethodInfo* method);
// 0x4104470

void UI_MapEditorAddObjectPanel__OnSelectObject
               (UI_MapEditorAddObjectPanel_o *__this,System_String_o *name,MethodInfo *method)

{
  byte bVar1;
  UI_MapEditorInspectPanel_o *pUVar2;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  UI_MapEditorAddVariantPopup_o *__this_01;
  bool_conflict bVar3;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_00;
  UI_BasePanel_o *pUVar4;
  UI_MapEditorMenu_o *__this_02;
  
  if (DAT_0570488c == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BuiltinMapPrefabs);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ContainsKey);
    il2cpp_init_method_metadata(&TypeInfo_MapEditorGameManager);
    il2cpp_init_method_metadata(&TypeInfo_MapEditorMenu);
    il2cpp_init_method_metadata(&TypeInfo_SceneLoader);
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    DAT_0570488c = '\x01';
  }
  __this_02 = *(UI_MapEditorMenu_o **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x10);
  if (__this_02 == (UI_MapEditorMenu_o *)0x0) goto LAB_04104691;
  bVar1 = (TypeInfo_MapEditorGameManager->_2).naturalAligment;
  if (((((GameManagers_MapEditorGameManager_c *)__this_02->klass)->_2).naturalAligment < bVar1) ||
     ((((GameManagers_MapEditorGameManager_c *)__this_02->klass)->_2).typeHierarchy
      [(ulong)bVar1 - 1] != TypeInfo_MapEditorGameManager)) {
LAB_041046cd:
                    /* WARNING: Subroutine does not return */
    il2cpp_unwind_resume(__this_02);
  }
  pUVar2 = (__this_02->fields).InspectPanel;
  if ((pUVar2 == (UI_MapEditorInspectPanel_o *)0x0) ||
     (*(char *)((long)&(pUVar2->fields).m_CachedPtr + 1) == '\0')) {
    if (*(int *)(TypeInfo_BuiltinMapPrefabs + 0xe4) == 0) {
      il2cpp_init_class();
    }
    __this_00 = *(System_Collections_Generic_Dictionary_object__object__o **)
                 (*(long *)(TypeInfo_BuiltinMapPrefabs + 0xb8) + 0x28);
    if (__this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      bVar3 = System_Collections_Generic_Dictionary<object__object>__ContainsKey
                        (__this_00,(Il2CppObject *)name,MethodInfo_Boolean_ContainsKey);
      if ((char)bVar3 == '\0') {
        GameManagers_MapEditorGameManager__AddObject
                  ((GameManagers_MapEditorGameManager_o *)__this_02,name,(MethodInfo *)0x0);
        pUVar4 = (__this->fields).Parent;
      }
      else {
        method_00 = extraout_RDX;
        if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
          il2cpp_init_class();
          method_00 = extraout_RDX_00;
        }
        __this_02 = *(UI_MapEditorMenu_o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
        if (__this_02 == (UI_MapEditorMenu_o *)0x0) goto LAB_04104691;
        bVar1 = (TypeInfo_MapEditorMenu->_2).naturalAligment;
        if (((((GameManagers_MapEditorGameManager_c *)__this_02->klass)->_2).naturalAligment < bVar1
            ) || ((((GameManagers_MapEditorGameManager_c *)__this_02->klass)->_2).typeHierarchy
                  [(ulong)bVar1 - 1] != TypeInfo_MapEditorMenu)) goto LAB_041046cd;
        __this_01 = (__this_02->fields).AddVariantPopup;
        if (__this_01 == (UI_MapEditorAddVariantPopup_o *)0x0) goto LAB_04104691;
        UI_MapEditorAddVariantPopup__Show(__this_01,name,method_00);
        pUVar4 = (__this->fields).Parent;
      }
      if (pUVar4 != (UI_BasePanel_o *)0x0) goto LAB_041046ac;
    }
  }
  else {
    MapEditor_MapEditorBrush__AddEntry((MapEditor_MapEditorBrush_o *)pUVar2,name,(MethodInfo *)0x0);
    pUVar2 = (__this_02->fields).InspectPanel;
    if (pUVar2 != (UI_MapEditorInspectPanel_o *)0x0) {
      *(undefined1 *)((long)&(pUVar2->fields).m_CachedPtr + 1) = 0;
      if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
        il2cpp_init_class();
      }
      __this_02 = *(UI_MapEditorMenu_o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
      if (__this_02 != (UI_MapEditorMenu_o *)0x0) {
        bVar1 = (TypeInfo_MapEditorMenu->_2).naturalAligment;
        if (((__this_02->klass->_2).naturalAligment < bVar1) ||
           ((__this_02->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_MapEditorMenu))
        goto LAB_041046cd;
        UI_MapEditorMenu__SyncBrushPanel(__this_02,(MethodInfo *)0x0);
        pUVar4 = (__this->fields).Parent;
        if (pUVar4 == (UI_BasePanel_o *)0x0) goto LAB_04104691;
LAB_041046ac:
        (*(pUVar4->klass->vtable)._22_Hide.methodPtr)
                  (pUVar4,(pUVar4->klass->vtable)._22_Hide.method);
        return;
      }
    }
  }
LAB_04104691:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.MapEditorAddObjectPanel$$.ctor
// il2cpp: void UI_MapEditorAddObjectPanel___ctor (UI_MapEditorAddObjectPanel_o* __this, const MethodInfo* method);
// 0x4104b60

void UI_MapEditorAddObjectPanel___ctor(UI_MapEditorAddObjectPanel_o *__this,MethodInfo *method)

{
  UI_CategoryPanel___ctor((UI_CategoryPanel_o *)__this,(MethodInfo *)0x0);
  return;
}


