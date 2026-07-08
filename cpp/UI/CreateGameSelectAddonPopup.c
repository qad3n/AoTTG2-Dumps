// Type: UI.CreateGameSelectAddonPopup
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/UI/CreateGameSelectAddonPopup.cs
// Prior source: NEW in this update
// --------------------------------

// UI.CreateGameSelectAddonPopup$$SetupSelector
// il2cpp: void UI_CreateGameSelectAddonPopup__SetupSelector (UI_CreateGameSelectAddonPopup_o* __this, Settings_ListSetting_StringSetting__o* addons, UnityEngine_Events_UnityAction_o* onAddonSelected, const MethodInfo* method);
// 0x406ef90

void UI_CreateGameSelectAddonPopup__SetupSelector
               (UI_CreateGameSelectAddonPopup_o *__this,
               Settings_ListSetting_StringSetting__o *addons,
               UnityEngine_Events_UnityAction_o *onAddonSelected,MethodInfo *method)

{
  (__this->fields)._addons = addons;
  il2cpp_runtime_glue(&(__this->fields)._addons);
  (__this->fields)._onAddonSelected = onAddonSelected;
  il2cpp_runtime_glue(&(__this->fields)._onAddonSelected,onAddonSelected);
  return;
}


// UI.CreateGameSelectAddonPopup$$Show
// il2cpp: void UI_CreateGameSelectAddonPopup__Show (UI_CreateGameSelectAddonPopup_o* __this, const MethodInfo* method);
// 0x406efd0

void UI_CreateGameSelectAddonPopup__Show(UI_CreateGameSelectAddonPopup_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  int iVar3;
  Settings_ListSetting_StringSetting__o *pSVar4;
  System_Collections_Generic_List_object__o *__this_00;
  System_String_o *pSVar5;
  System_String_array *pSVar6;
  UI_SelectListPopup_ItemCategory_array *pUVar7;
  long lVar8;
  UI_MessagePopup_o *__this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  bool_conflict bVar9;
  System_Collections_Generic_HashSet_object__o *__this_05;
  System_Collections_Generic_List_string__o *items;
  System_String_array *pSVar10;
  System_Collections_Generic_List_string__o *items_00;
  System_Collections_Generic_List_SelectListPopup_ItemCategory__o *categories;
  UI_SelectListPopup_ItemCategory_o *pUVar11;
  UnityEngine_Events_UnityAction_o *onLoad;
  ulong uVar12;
  ulong uVar13;
  System_Collections_Generic_List_Enumerator_T__c *pSVar14;
  Il2CppType *pIVar15;
  Il2CppObject *pIVar16;
  undefined1 auStack_48 [16];
  Il2CppObject *pIStack_38;
  
  if (DAT_057044a2 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BuiltinLevels);
    il2cpp_init_method_metadata(&MethodInfo_Void__Show_b__3_0);
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_StringSetting_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Add);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Contains);
    il2cpp_init_method_metadata(&MethodInfo_HashSet_1_System_String);
    il2cpp_init_method_metadata(&TypeInfo_HashSet_string);
    il2cpp_init_method_metadata(&TypeInfo_ItemCategory);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_List_1_T__Enumerator_Settings_StringSetting__Get);
    il2cpp_init_method_metadata(&MethodInfo_List_1_UI_SelectListPopup_ItemCategory);
    il2cpp_init_method_metadata(&MethodInfo_List_1_System_String);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    il2cpp_init_method_metadata(&TypeInfo_List_ItemCategory);
    il2cpp_init_method_metadata(&TypeInfo_List_string);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Value);
    il2cpp_init_method_metadata(&MethodInfo_List_1_Settings_StringSetting__get_Value);
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    il2cpp_init_method_metadata(&TypeInfo_UnityAction);
    il2cpp_init_method_metadata(&"Custom");
    il2cpp_init_method_metadata(&"Select Addon");
    il2cpp_init_method_metadata(&"No addons available to add.");
    il2cpp_init_method_metadata(&"Builtin");
    DAT_057044a2 = '\x01';
  }
  if ((__this->fields)._addons == (Settings_ListSetting_StringSetting__o *)0x0) {
    UI_BasePopup__Show((UI_BasePopup_o *)__this,(MethodInfo *)0x0);
    return;
  }
  __this_05 = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_glue(TypeInfo_HashSet_string);
  System_Collections_Generic_HashSet<object>___ctor(__this_05,MethodInfo_HashSet_1_System_String);
  pSVar4 = (__this->fields)._addons;
  if ((pSVar4 != (Settings_ListSetting_StringSetting__o *)0x0) &&
     (__this_00 = (System_Collections_Generic_List_object__o *)(pSVar4->fields)._value,
     __this_00 != (System_Collections_Generic_List_object__o *)0x0)) {
    System_Collections_Generic_List<object>__GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)auStack_48,__this_00,MethodInfo_List_1_T__Enumerator_Settings_StringSetting__Get)
    ;
    pSVar14 = (System_Collections_Generic_List_Enumerator_T__c *)auStack_48._0_8_;
    pIVar15 = (Il2CppType *)auStack_48._8_8_;
    pIVar16 = pIStack_38;
    if (__this_05 == (System_Collections_Generic_HashSet_object__o *)0x0) {
      __this_03.fields._index = auStack_48._8_4_;
      __this_03.fields._version = auStack_48._12_4_;
      __this_03.fields._list = (System_Collections_Generic_List_T__o *)auStack_48._0_8_;
      __this_03.fields._current = pIStack_38;
      bVar9 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (__this_03,(MethodInfo_3185E20 *)&stack0xffffffffffffff98);
      if ((char)bVar9 != '\0') {
        if (pIStack_38 != (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
LAB_0406f770:
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
    }
    else {
      while (__this_02.fields._8_8_ = pIVar15,
            __this_02.fields._list = (System_Collections_Generic_List_T__o *)pSVar14,
            __this_02.fields._current = pIVar16,
            bVar9 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                              (__this_02,(MethodInfo_3185E20 *)&stack0xffffffffffffff98),
            auStack_48._0_8_ = pSVar14, auStack_48._8_8_ = pIVar15, pIStack_38 = pIVar16,
            (char)bVar9 != '\0') {
        if (pIVar16 == (Il2CppObject *)0x0) goto LAB_0406f770;
        System_Collections_Generic_HashSet<object>__Add(__this_05,pIVar16[1].monitor,MethodInfo_Boolean_Add);
      }
    }
    __this_04.fields._8_8_ = auStack_48._8_8_;
    __this_04.fields._list = (System_Collections_Generic_List_T__o *)auStack_48._0_8_;
    __this_04.fields._current = pIStack_38;
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (__this_04,(MethodInfo_3185E10 *)&stack0xffffffffffffff98);
    items = (System_Collections_Generic_List_string__o *)il2cpp_runtime_glue(TypeInfo_List_string);
    System_Collections_Generic_List<object>___ctor
              ((System_Collections_Generic_List_object__o *)items,MethodInfo_List_1_System_String);
    if (*(int *)(TypeInfo_BuiltinLevels + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pSVar10 = Map_BuiltinLevels__GetBuiltinAddons((MethodInfo *)0x0);
    if (pSVar10 == (System_String_array *)0x0) goto LAB_0406f75e;
    if (__this_05 == (System_Collections_Generic_HashSet_object__o *)0x0) {
      if (0 < (int)pSVar10->max_length) goto LAB_0406f75e;
    }
    else {
      uVar12 = pSVar10->max_length;
      uVar13 = uVar12 & 0xffffffff;
      if (items == (System_Collections_Generic_List_string__o *)0x0) {
        if (0 < (int)uVar12) {
          uVar12 = 0;
          do {
            if (uVar13 <= uVar12) goto LAB_0406f763;
            bVar9 = System_Collections_Generic_HashSet<object>__Contains
                              (__this_05,(Il2CppObject *)pSVar10->m_Items[uVar12],MethodInfo_Boolean_Contains);
            if ((char)bVar9 == '\0') goto LAB_0406f75e;
            uVar12 = uVar12 + 1;
            uVar2 = (uint)pSVar10->max_length;
            uVar13 = (ulong)uVar2;
          } while ((long)uVar12 < (long)(int)uVar2);
        }
      }
      else if (0 < (int)uVar12) {
        uVar13 = 0;
        if ((uVar12 & 0xffffffff) != 0) {
          do {
            pSVar5 = pSVar10->m_Items[uVar13];
            bVar9 = System_Collections_Generic_HashSet<object>__Contains
                              (__this_05,(Il2CppObject *)pSVar5,MethodInfo_Boolean_Contains);
            lVar8 = MethodInfo_Void_Add;
            if ((char)bVar9 == '\0') {
              piVar1 = &(items->fields)._version;
              *piVar1 = *piVar1 + 1;
              pSVar6 = (items->fields)._items;
              if (pSVar6 == (System_String_array *)0x0) goto LAB_0406f75e;
              uVar2 = (items->fields)._size;
              if (uVar2 < (uint)pSVar6->max_length) {
                (items->fields)._size = uVar2 + 1;
                pSVar6->m_Items[(int)uVar2] = pSVar5;
                il2cpp_runtime_glue(pSVar6->m_Items + (int)uVar2,pSVar5);
              }
              else {
                System_Collections_Generic_List<object>__AddWithResize
                          ((System_Collections_Generic_List_object__o *)items,(Il2CppObject *)pSVar5
                           ,*(MethodInfo_35A7350 **)
                             (*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
              }
            }
            uVar13 = uVar13 + 1;
            uVar2 = (uint)pSVar10->max_length;
            if ((long)(int)uVar2 <= (long)uVar13) goto LAB_0406f3b5;
          } while (uVar13 < uVar2);
        }
        goto LAB_0406f763;
      }
    }
LAB_0406f3b5:
    items_00 = (System_Collections_Generic_List_string__o *)il2cpp_runtime_glue(TypeInfo_List_string);
    System_Collections_Generic_List<object>___ctor
              ((System_Collections_Generic_List_object__o *)items_00,MethodInfo_List_1_System_String);
    if (*(int *)(TypeInfo_BuiltinLevels + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pSVar10 = Map_BuiltinLevels__GetCustomAddons((MethodInfo *)0x0);
    if (pSVar10 != (System_String_array *)0x0) {
      if (__this_05 == (System_Collections_Generic_HashSet_object__o *)0x0) {
        if (0 < (int)pSVar10->max_length) goto LAB_0406f75e;
      }
      else {
        uVar12 = pSVar10->max_length;
        uVar13 = uVar12 & 0xffffffff;
        if (items_00 == (System_Collections_Generic_List_string__o *)0x0) {
          if (0 < (int)uVar12) {
            uVar12 = 0;
            do {
              if (uVar13 <= uVar12) goto LAB_0406f763;
              bVar9 = System_Collections_Generic_HashSet<object>__Contains
                                (__this_05,(Il2CppObject *)pSVar10->m_Items[uVar12],MethodInfo_Boolean_Contains);
              if ((char)bVar9 == '\0') goto LAB_0406f75e;
              uVar12 = uVar12 + 1;
              uVar2 = (uint)pSVar10->max_length;
              uVar13 = (ulong)uVar2;
            } while ((long)uVar12 < (long)(int)uVar2);
          }
        }
        else if (0 < (int)uVar12) {
          uVar13 = 0;
          if ((uVar12 & 0xffffffff) != 0) {
            do {
              pSVar5 = pSVar10->m_Items[uVar13];
              bVar9 = System_Collections_Generic_HashSet<object>__Contains
                                (__this_05,(Il2CppObject *)pSVar5,MethodInfo_Boolean_Contains);
              lVar8 = MethodInfo_Void_Add;
              if ((char)bVar9 == '\0') {
                piVar1 = &(items_00->fields)._version;
                *piVar1 = *piVar1 + 1;
                pSVar6 = (items_00->fields)._items;
                if (pSVar6 == (System_String_array *)0x0) goto LAB_0406f75e;
                uVar2 = (items_00->fields)._size;
                if (uVar2 < (uint)pSVar6->max_length) {
                  (items_00->fields)._size = uVar2 + 1;
                  pSVar6->m_Items[(int)uVar2] = pSVar5;
                  il2cpp_runtime_glue(pSVar6->m_Items + (int)uVar2,pSVar5);
                }
                else {
                  System_Collections_Generic_List<object>__AddWithResize
                            ((System_Collections_Generic_List_object__o *)items_00,
                             (Il2CppObject *)pSVar5,
                             *(MethodInfo_35A7350 **)
                              (*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
                }
              }
              uVar13 = uVar13 + 1;
              uVar2 = (uint)pSVar10->max_length;
              if ((long)(int)uVar2 <= (long)uVar13) goto LAB_0406f534;
            } while (uVar13 < uVar2);
          }
LAB_0406f763:
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
      }
LAB_0406f534:
      categories = (System_Collections_Generic_List_SelectListPopup_ItemCategory__o *)
                   il2cpp_runtime_glue(TypeInfo_List_ItemCategory);
      System_Collections_Generic_List<object>___ctor
                ((System_Collections_Generic_List_object__o *)categories,MethodInfo_List_1_UI_SelectListPopup_ItemCategory);
      if (items != (System_Collections_Generic_List_string__o *)0x0) {
        if (0 < (items->fields)._size) {
          pUVar11 = (UI_SelectListPopup_ItemCategory_o *)il2cpp_runtime_glue(TypeInfo_ItemCategory);
          UI_SelectListPopup_ItemCategory___ctor(pUVar11,"Builtin",items,(MethodInfo *)0x0);
          lVar8 = MethodInfo_Void_Add;
          if (categories == (System_Collections_Generic_List_SelectListPopup_ItemCategory__o *)0x0)
          goto LAB_0406f75e;
          piVar1 = &(categories->fields)._version;
          *piVar1 = *piVar1 + 1;
          pUVar7 = (categories->fields)._items;
          if (pUVar7 == (UI_SelectListPopup_ItemCategory_array *)0x0) goto LAB_0406f75e;
          uVar2 = (categories->fields)._size;
          if (uVar2 < (uint)pUVar7->max_length) {
            (categories->fields)._size = uVar2 + 1;
            pUVar7->m_Items[(int)uVar2] = pUVar11;
            il2cpp_runtime_glue(pUVar7->m_Items + (int)uVar2,pUVar11);
          }
          else {
            System_Collections_Generic_List<object>__AddWithResize
                      ((System_Collections_Generic_List_object__o *)categories,
                       (Il2CppObject *)pUVar11,
                       *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
          }
        }
        if (items_00 != (System_Collections_Generic_List_string__o *)0x0) {
          if ((items_00->fields)._size < 1) {
            if (categories == (System_Collections_Generic_List_SelectListPopup_ItemCategory__o *)0x0
               ) goto LAB_0406f75e;
            iVar3 = (categories->fields)._size;
          }
          else {
            pUVar11 = (UI_SelectListPopup_ItemCategory_o *)il2cpp_runtime_glue(TypeInfo_ItemCategory);
            UI_SelectListPopup_ItemCategory___ctor(pUVar11,"Custom",items_00,(MethodInfo *)0x0);
            lVar8 = MethodInfo_Void_Add;
            if (categories == (System_Collections_Generic_List_SelectListPopup_ItemCategory__o *)0x0
               ) goto LAB_0406f75e;
            piVar1 = &(categories->fields)._version;
            *piVar1 = *piVar1 + 1;
            pUVar7 = (categories->fields)._items;
            if (pUVar7 == (UI_SelectListPopup_ItemCategory_array *)0x0) goto LAB_0406f75e;
            uVar2 = (categories->fields)._size;
            if (uVar2 < (uint)pUVar7->max_length) {
              (categories->fields)._size = uVar2 + 1;
              pUVar7->m_Items[(int)uVar2] = pUVar11;
              il2cpp_runtime_glue(pUVar7->m_Items + (int)uVar2,pUVar11);
              iVar3 = (categories->fields)._size;
            }
            else {
              System_Collections_Generic_List<object>__AddWithResize
                        ((System_Collections_Generic_List_object__o *)categories,
                         (Il2CppObject *)pUVar11,
                         *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70))
              ;
              iVar3 = (categories->fields)._size;
            }
          }
          if (iVar3 == 0) {
            if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
              il2cpp_init_class();
            }
            lVar8 = *(long *)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
            if ((lVar8 == 0) ||
               (__this_01 = *(UI_MessagePopup_o **)(lVar8 + 0x30),
               __this_01 == (UI_MessagePopup_o *)0x0)) goto LAB_0406f75e;
            UI_MessagePopup__Show(__this_01,"No addons available to add.",1,(MethodInfo *)0x0);
          }
          else {
            onLoad = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_glue(TypeInfo_UnityAction);
            UnityEngine_Events_UnityAction___ctor();
            UI_SelectListPopup__ShowLoadCategorized
                      ((UI_SelectListPopup_o *)__this,categories,"Select Addon",onLoad,
                       (MethodInfo *)0x0);
          }
          return;
        }
      }
    }
  }
LAB_0406f75e:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.CreateGameSelectAddonPopup$$OnAddonLoaded
// il2cpp: void UI_CreateGameSelectAddonPopup__OnAddonLoaded (UI_CreateGameSelectAddonPopup_o* __this, const MethodInfo* method);
// 0x406f820

void UI_CreateGameSelectAddonPopup__OnAddonLoaded
               (UI_CreateGameSelectAddonPopup_o *__this,MethodInfo *method)

{
  System_String_o *value;
  Settings_ListSetting_StringSetting__o *pSVar1;
  System_Collections_Generic_List_object__o *__this_00;
  UnityEngine_Events_UnityAction_o *pUVar2;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  bool_conflict bVar3;
  Settings_StringSetting_o *pSVar4;
  System_Collections_Generic_List_T__o *pSVar5;
  Il2CppMethodPointer pIVar6;
  Il2CppObject *pIVar7;
  
  if (DAT_057044a3 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_StringSetting_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_Void_AddItem);
    il2cpp_init_method_metadata(&MethodInfo_List_1_T__Enumerator_Settings_StringSetting__Get);
    il2cpp_init_method_metadata(&TypeInfo_StringSetting);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Value);
    il2cpp_init_method_metadata(&MethodInfo_List_1_Settings_StringSetting__get_Value);
    DAT_057044a3 = '\x01';
  }
  pSVar5 = (System_Collections_Generic_List_T__o *)0x0;
  pIVar6 = (Il2CppMethodPointer)0x0;
  pIVar7 = (Il2CppObject *)0x0;
  pSVar4 = (__this->fields).FinishSetting;
  if (pSVar4 == (Settings_StringSetting_o *)0x0) {
LAB_0406f9d4:
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  value = (pSVar4->fields)._value;
  bVar3 = System_String__IsNullOrEmpty(value,(MethodInfo *)0x0);
  if ((char)bVar3 == '\0') {
    pSVar1 = (__this->fields)._addons;
    if ((pSVar1 == (Settings_ListSetting_StringSetting__o *)0x0) ||
       (__this_00 = (System_Collections_Generic_List_object__o *)(pSVar1->fields)._value,
       __this_00 == (System_Collections_Generic_List_object__o *)0x0)) goto LAB_0406f9d4;
    System_Collections_Generic_List<object>__GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)&stack0xffffffffffffffb8,__this_00
               ,MethodInfo_List_1_T__Enumerator_Settings_StringSetting__Get);
    do {
      __this_01.fields._8_8_ = pIVar6;
      __this_01.fields._list = pSVar5;
      __this_01.fields._current = pIVar7;
      bVar3 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (__this_01,(MethodInfo_3185E20 *)&stack0xffffffffffffffb8);
      if ((char)bVar3 == '\0') {
        __this_03.fields._8_8_ = pIVar6;
        __this_03.fields._list = pSVar5;
        __this_03.fields._current = pIVar7;
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (__this_03,(MethodInfo_3185E10 *)&stack0xffffffffffffffb8);
        pSVar1 = (__this->fields)._addons;
        pSVar4 = (Settings_StringSetting_o *)il2cpp_runtime_glue(TypeInfo_StringSetting);
        Settings_StringSetting___ctor(pSVar4,value,0x7fffffff,(MethodInfo *)0x0);
        if (pSVar1 != (Settings_ListSetting_StringSetting__o *)0x0) {
          Settings_ListSetting<object>__AddItem
                    ((Settings_ListSetting_T__o *)pSVar1,(Settings_BaseSetting_o *)pSVar4,
                     MethodInfo_Void_AddItem);
          pUVar2 = (__this->fields)._onAddonSelected;
          if (pUVar2 == (UnityEngine_Events_UnityAction_o *)0x0) {
            return;
          }
          (*(code *)(pUVar2->fields).invoke_impl)
                    ((pUVar2->fields).method_code,(pUVar2->fields).method);
          return;
        }
        goto LAB_0406f9d4;
      }
      if (pIVar7 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      bVar3 = System_String__op_Equality(pIVar7[1].monitor,value,(MethodInfo *)0x0);
    } while ((char)bVar3 == '\0');
    __this_02.fields._8_8_ = pIVar6;
    __this_02.fields._list = pSVar5;
    __this_02.fields._current = pIVar7;
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (__this_02,(MethodInfo_3185E10 *)&stack0xffffffffffffffb8);
  }
  return;
}


// UI.CreateGameSelectAddonPopup$$.ctor
// il2cpp: void UI_CreateGameSelectAddonPopup___ctor (UI_CreateGameSelectAddonPopup_o* __this, const MethodInfo* method);
// 0x406fa60

void UI_CreateGameSelectAddonPopup___ctor
               (UI_CreateGameSelectAddonPopup_o *__this,MethodInfo *method)

{
  UI_SelectListPopup___ctor((UI_SelectListPopup_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.CreateGameSelectAddonPopup$$<Show>b__3_0
// il2cpp: void UI_CreateGameSelectAddonPopup___Show_b__3_0 (UI_CreateGameSelectAddonPopup_o* __this, const MethodInfo* method);
// 0x406fa70

void UI_CreateGameSelectAddonPopup__<Show>b__3_0
               (UI_CreateGameSelectAddonPopup_o *__this,MethodInfo *method)

{
  UI_CreateGameSelectAddonPopup__OnAddonLoaded(__this,method);
  return;
}


