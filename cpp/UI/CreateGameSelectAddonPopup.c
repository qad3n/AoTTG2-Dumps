// Type: UI.CreateGameSelectAddonPopup
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/CreateGameSelectAddonPopup.cs
// Prior real C# source: none
// --------------------------------

// UI.CreateGameSelectAddonPopup$$SetupSelector
// il2cpp: void UI_CreateGameSelectAddonPopup__SetupSelector (UI_CreateGameSelectAddonPopup_o* __this, Settings_ListSetting_StringSetting__o* addons, UnityEngine_Events_UnityAction_o* onAddonSelected, const MethodInfo* method);
// 0x437c9a0

void UI_CreateGameSelectAddonPopup__SetupSelector
               (UI_CreateGameSelectAddonPopup_o *__this,Settings_ListSetting_StringSetting__o *addons,
               UnityEngine_Events_UnityAction_o *onAddonSelected,MethodInfo *method)

{
  (__this->fields)._addons = addons;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._addons);
  (__this->fields)._onAddonSelected = onAddonSelected;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._onAddonSelected,onAddonSelected);
  return;
}


// UI.CreateGameSelectAddonPopup$$Show
// il2cpp: void UI_CreateGameSelectAddonPopup__Show (UI_CreateGameSelectAddonPopup_o* __this, const MethodInfo* method);
// 0x437c9e0

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
  UI_MessagePopup_o *__this_01;
  long lVar8;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  System_Collections_Generic_List_Enumerator_object__o __this_05;
  System_Collections_Generic_List_Enumerator_object__o __this_06;
  bool_conflict bVar9;
  System_Collections_Generic_HashSet_object__o *__this_07;
  System_Collections_Generic_List_string__o *items;
  System_String_array *pSVar10;
  System_Collections_Generic_List_string__o *items_00;
  System_Collections_Generic_List_SelectListPopup_ItemCategory__o *categories;
  UI_SelectListPopup_ItemCategory_o *__this_08;
  UnityEngine_Events_UnityAction_o *onLoad;
  long *plVar11;
  ulong uVar12;
  ulong uVar13;
  undefined1 auVar14 [12];
  System_Collections_Generic_List_Enumerator_T__c *pSVar15;
  Il2CppType *pIVar16;
  Il2CppObject *pIVar17;
  UI_CreateGameSelectAddonPopup_o *pUStack_50;
  undefined1 auStack_48 [16];
  Il2CppObject *pIStack_38;
  
  if (g_data_057ae21c == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinLevels);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Show_b__3_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_StringSetting_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Contains);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_System_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HashSet_string);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ItemCategory);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_Settings_StringSetting_GetEnumerator);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_UI_SelectListPopup_ItemCategory);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_ItemCategory);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_Settings_StringSetting_get_Value);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction);
    il2cpp_runtime_helper_023445d0(&"Custom");
    il2cpp_runtime_helper_023445d0(&"Select Addon");
    il2cpp_runtime_helper_023445d0(&"No addons available to add.");
    il2cpp_runtime_helper_023445d0(&"Builtin");
    g_data_057ae21c = '\x01';
  }
  pSVar15 = (System_Collections_Generic_List_Enumerator_T__c *)0x0;
  pIVar16 = (Il2CppType *)0x0;
  pIVar17 = (Il2CppObject *)0x0;
  if ((__this->fields)._addons == (Settings_ListSetting_StringSetting__o *)0x0) {
    UI_BasePopup__Show((UI_BasePopup_o *)__this,(MethodInfo *)0x0);
    return;
  }
  __this_07 = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor(__this_07,MethodInfo_HashSet_1_System_String);
  pSVar4 = (__this->fields)._addons;
  if (pSVar4 == (Settings_ListSetting_StringSetting__o *)0x0) goto label_0437d16e;
  __this_00 = (System_Collections_Generic_List_object__o *)(pSVar4->fields)._value;
  if (__this_00 == (System_Collections_Generic_List_object__o *)0x0) goto label_0437d16e;
  System_Collections_Generic_List_object___GetEnumerator
            ((System_Collections_Generic_List_Enumerator_T__o *)auStack_48,__this_00,MethodInfo_List_1_T_Enumerator_Settings_StringSetting_GetEnumerator);
  pSVar15 = (System_Collections_Generic_List_Enumerator_T__c *)auStack_48._0_8_;
  pIVar16 = (Il2CppType *)auStack_48._8_8_;
  pIVar17 = pIStack_38;
  pUStack_50 = __this;
  if (__this_07 == (System_Collections_Generic_HashSet_object__o *)0x0) {
    __this_03.fields._index = auStack_48._8_4_;
    __this_03.fields._version = auStack_48._12_4_;
    __this_03.fields._list = (System_Collections_Generic_List_T__o *)auStack_48._0_8_;
    __this_03.fields._current = pIStack_38;
    bVar9 = System_Collections_Generic_List_Enumerator_object___MoveNext
                      (__this_03,(MethodInfo_321A1D0 *)&stack0xffffffffffffff98);
    pSVar15 = (System_Collections_Generic_List_Enumerator_T__c *)auStack_48._0_8_;
    pIVar16 = (Il2CppType *)auStack_48._8_8_;
    pIVar17 = pIStack_38;
    if ((char)bVar9 != '\0') goto label_0437d178;
  }
  else {
    while (__this_02.fields._8_8_ = pIVar16,
          __this_02.fields._list = (System_Collections_Generic_List_T__o *)pSVar15,
          __this_02.fields._current = pIVar17,
          bVar9 = System_Collections_Generic_List_Enumerator_object___MoveNext
                            (__this_02,(MethodInfo_321A1D0 *)&stack0xffffffffffffff98), (char)bVar9 != '\0') {
      if (pIVar17 == (Il2CppObject *)0x0) goto label_0437d180;
      System_Collections_Generic_HashSet_object___Add(__this_07,pIVar17[1].monitor,MethodInfo_Boolean_Add);
    }
  }
  __this_04.fields._8_8_ = pIVar16;
  __this_04.fields._list = (System_Collections_Generic_List_T__o *)pSVar15;
  __this_04.fields._current = pIVar17;
  System_Collections_Generic_List_Enumerator_object___Dispose
            (__this_04,(MethodInfo_321A1C0 *)&stack0xffffffffffffff98);
  do {
    items = (System_Collections_Generic_List_string__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
    System_Collections_Generic_List_object____ctor
              ((System_Collections_Generic_List_object__o *)items,MethodInfo_List_1_System_String);
    if (*(int *)(TypeInfo_BuiltinLevels + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar10 = Map_BuiltinLevels__GetBuiltinAddons((MethodInfo *)0x0);
    if (pSVar10 == (System_String_array *)0x0) {
label_0437d16e:
      il2cpp_runtime_helper_022b2c90();
    }
    else {
      if (__this_07 == (System_Collections_Generic_HashSet_object__o *)0x0) {
        if ((int)pSVar10->max_length < 1) goto label_0437cdc5;
        goto label_0437d16e;
      }
      uVar12 = pSVar10->max_length;
      uVar13 = uVar12 & 0xffffffff;
      if (items == (System_Collections_Generic_List_string__o *)0x0) {
        if (0 < (int)uVar12) {
          uVar12 = 0;
          do {
            if (uVar13 <= uVar12) goto label_0437d173;
            bVar9 = System_Collections_Generic_HashSet_object___Contains
                              (__this_07,(Il2CppObject *)pSVar10->m_Items[uVar12],MethodInfo_Boolean_Contains);
            if ((char)bVar9 == '\0') goto label_0437d16e;
            uVar12 = uVar12 + 1;
            uVar2 = (uint)pSVar10->max_length;
            uVar13 = (ulong)uVar2;
          } while ((long)uVar12 < (long)(int)uVar2);
        }
label_0437cdc5:
        items_00 = (System_Collections_Generic_List_string__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
        System_Collections_Generic_List_object____ctor
                  ((System_Collections_Generic_List_object__o *)items_00,MethodInfo_List_1_System_String);
        if (*(int *)(TypeInfo_BuiltinLevels + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar10 = Map_BuiltinLevels__GetCustomAddons((MethodInfo *)0x0);
        if (pSVar10 != (System_String_array *)0x0) {
          if (__this_07 == (System_Collections_Generic_HashSet_object__o *)0x0) {
            if (0 < (int)pSVar10->max_length) goto label_0437d16e;
          }
          else {
            uVar12 = pSVar10->max_length;
            uVar13 = uVar12 & 0xffffffff;
            if (items_00 == (System_Collections_Generic_List_string__o *)0x0) {
              if (0 < (int)uVar12) {
                uVar12 = 0;
                do {
                  if (uVar13 <= uVar12) goto label_0437d173;
                  bVar9 = System_Collections_Generic_HashSet_object___Contains
                                    (__this_07,(Il2CppObject *)pSVar10->m_Items[uVar12],MethodInfo_Boolean_Contains);
                  if ((char)bVar9 == '\0') goto label_0437d16e;
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
                  bVar9 = System_Collections_Generic_HashSet_object___Contains
                                    (__this_07,(Il2CppObject *)pSVar5,MethodInfo_Boolean_Contains);
                  lVar8 = MethodInfo_Void_Add;
                  if ((char)bVar9 == '\0') {
                    piVar1 = &(items_00->fields)._version;
                    *piVar1 = *piVar1 + 1;
                    pSVar6 = (items_00->fields)._items;
                    if (pSVar6 == (System_String_array *)0x0) goto label_0437d16e;
                    uVar2 = (items_00->fields)._size;
                    if (uVar2 < (uint)pSVar6->max_length) {
                      (items_00->fields)._size = uVar2 + 1;
                      pSVar6->m_Items[(int)uVar2] = pSVar5;
                      il2cpp_runtime_helper_022b4080(pSVar6->m_Items + (int)uVar2,pSVar5);
                    }
                    else {
                      System_Collections_Generic_List_object___AddWithResize
                                ((System_Collections_Generic_List_object__o *)items_00,(Il2CppObject *)pSVar5,
                                 *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
                    }
                  }
                  uVar13 = uVar13 + 1;
                  uVar2 = (uint)pSVar10->max_length;
                  if ((long)(int)uVar2 <= (long)uVar13) goto label_0437cf44;
                } while (uVar13 < uVar2);
              }
              goto label_0437d173;
            }
          }
label_0437cf44:
          categories = (System_Collections_Generic_List_SelectListPopup_ItemCategory__o *)
                       il2cpp_runtime_helper_023052d0(TypeInfo_List_ItemCategory);
          System_Collections_Generic_List_object____ctor
                    ((System_Collections_Generic_List_object__o *)categories,MethodInfo_List_1_UI_SelectListPopup_ItemCategory);
          if (items != (System_Collections_Generic_List_string__o *)0x0) {
            if ((items->fields)._size < 1) {
joined_r0x0437cff0:
              if (items_00 != (System_Collections_Generic_List_string__o *)0x0) {
                if ((items_00->fields)._size < 1) {
                  if (categories != (System_Collections_Generic_List_SelectListPopup_ItemCategory__o *)0x0) {
                    iVar3 = (categories->fields)._size;
joined_r0x0437d0a8:
                    if (iVar3 != 0) {
                      onLoad = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
                      UnityEngine_Events_UnityAction___ctor();
                      UI_SelectListPopup__ShowLoadCategorized
                                ((UI_SelectListPopup_o *)pUStack_50,categories,"Select Addon",onLoad,
                                 (MethodInfo *)0x0);
                      return;
                    }
                    if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
                      il2cpp_runtime_helper_02337ed0();
                    }
                    lVar8 = *(long *)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
                    if ((lVar8 != 0) &&
                       (__this_01 = *(UI_MessagePopup_o **)(lVar8 + 0x30),
                       __this_01 != (UI_MessagePopup_o *)0x0)) {
                      UI_MessagePopup__Show(__this_01,"No addons available to add.",1,(MethodInfo *)0x0);
                      return;
                    }
                  }
                }
                else {
                  __this_08 = (UI_SelectListPopup_ItemCategory_o *)il2cpp_runtime_helper_023052d0(TypeInfo_ItemCategory);
                  UI_SelectListPopup_ItemCategory___ctor(__this_08,"Custom",items_00,(MethodInfo *)0x0);
                  lVar8 = MethodInfo_Void_Add;
                  if (categories != (System_Collections_Generic_List_SelectListPopup_ItemCategory__o *)0x0) {
                    piVar1 = &(categories->fields)._version;
                    *piVar1 = *piVar1 + 1;
                    pUVar7 = (categories->fields)._items;
                    if (pUVar7 != (UI_SelectListPopup_ItemCategory_array *)0x0) {
                      uVar2 = (categories->fields)._size;
                      if (uVar2 < (uint)pUVar7->max_length) {
                        (categories->fields)._size = uVar2 + 1;
                        pUVar7->m_Items[(int)uVar2] = __this_08;
                        il2cpp_runtime_helper_022b4080(pUVar7->m_Items + (int)uVar2,__this_08);
                        iVar3 = (categories->fields)._size;
                      }
                      else {
                        System_Collections_Generic_List_object___AddWithResize
                                  ((System_Collections_Generic_List_object__o *)categories,
                                   (Il2CppObject *)__this_08,
                                   *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70))
                        ;
                        iVar3 = (categories->fields)._size;
                      }
                      goto joined_r0x0437d0a8;
                    }
                  }
                }
              }
            }
            else {
              __this_07 = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_ItemCategory);
              UI_SelectListPopup_ItemCategory___ctor
                        ((UI_SelectListPopup_ItemCategory_o *)__this_07,"Builtin",items,(MethodInfo *)0x0);
              lVar8 = MethodInfo_Void_Add;
              if (categories != (System_Collections_Generic_List_SelectListPopup_ItemCategory__o *)0x0) {
                piVar1 = &(categories->fields)._version;
                *piVar1 = *piVar1 + 1;
                pUVar7 = (categories->fields)._items;
                if (pUVar7 != (UI_SelectListPopup_ItemCategory_array *)0x0) {
                  uVar2 = (categories->fields)._size;
                  if (uVar2 < (uint)pUVar7->max_length) {
                    (categories->fields)._size = uVar2 + 1;
                    pUVar7->m_Items[(int)uVar2] = (UI_SelectListPopup_ItemCategory_o *)__this_07;
                    il2cpp_runtime_helper_022b4080(pUVar7->m_Items + (int)uVar2,__this_07);
                  }
                  else {
                    System_Collections_Generic_List_object___AddWithResize
                              ((System_Collections_Generic_List_object__o *)categories,
                               (Il2CppObject *)__this_07,
                               *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
                  }
                  goto joined_r0x0437cff0;
                }
              }
            }
          }
        }
        goto label_0437d16e;
      }
      if ((int)uVar12 < 1) goto label_0437cdc5;
      uVar13 = 0;
      if ((uVar12 & 0xffffffff) != 0) {
        do {
          pSVar5 = pSVar10->m_Items[uVar13];
          bVar9 = System_Collections_Generic_HashSet_object___Contains
                            (__this_07,(Il2CppObject *)pSVar5,MethodInfo_Boolean_Contains);
          lVar8 = MethodInfo_Void_Add;
          if ((char)bVar9 == '\0') {
            piVar1 = &(items->fields)._version;
            *piVar1 = *piVar1 + 1;
            pSVar6 = (items->fields)._items;
            if (pSVar6 == (System_String_array *)0x0) goto label_0437d16e;
            uVar2 = (items->fields)._size;
            if (uVar2 < (uint)pSVar6->max_length) {
              (items->fields)._size = uVar2 + 1;
              pSVar6->m_Items[(int)uVar2] = pSVar5;
              il2cpp_runtime_helper_022b4080(pSVar6->m_Items + (int)uVar2,pSVar5);
            }
            else {
              System_Collections_Generic_List_object___AddWithResize
                        ((System_Collections_Generic_List_object__o *)items,(Il2CppObject *)pSVar5,
                         *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
            }
          }
          uVar13 = uVar13 + 1;
          uVar2 = (uint)pSVar10->max_length;
          if ((long)(int)uVar2 <= (long)uVar13) goto label_0437cdc5;
        } while (uVar13 < uVar2);
      }
    }
label_0437d173:
    il2cpp_runtime_helper_022b2ca0();
label_0437d178:
    if (pIVar17 == (Il2CppObject *)0x0) {
label_0437d180:
      il2cpp_runtime_helper_022b2c90();
    }
    auVar14 = il2cpp_runtime_helper_022b2c90();
    if (auVar14._8_4_ != 1) goto label_0437d1ed;
    plVar11 = (long *)__cxa_begin_catch(auVar14._0_8_);
    lVar8 = *plVar11;
    __cxa_end_catch();
    __this_05.fields._8_8_ = pIVar16;
    __this_05.fields._list = (System_Collections_Generic_List_T__o *)pSVar15;
    __this_05.fields._current = pIVar17;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_05,(MethodInfo_321A1C0 *)&stack0xffffffffffffff98);
  } while (lVar8 == 0);
  il2cpp_runtime_helper_022fefe0(lVar8);
label_0437d1ed:
  __this_06.fields._8_8_ = pIVar16;
  __this_06.fields._list = (System_Collections_Generic_List_T__o *)pSVar15;
  __this_06.fields._current = pIVar17;
  System_Collections_Generic_List_Enumerator_object___Dispose
            (__this_06,(MethodInfo_321A1C0 *)&stack0xffffffffffffff98);
  _Unwind_Resume(auVar14._0_8_);
}


// UI.CreateGameSelectAddonPopup$$OnAddonLoaded
// il2cpp: void UI_CreateGameSelectAddonPopup__OnAddonLoaded (UI_CreateGameSelectAddonPopup_o* __this, const MethodInfo* method);
// 0x437d230

void UI_CreateGameSelectAddonPopup__OnAddonLoaded(UI_CreateGameSelectAddonPopup_o *__this,MethodInfo *method)

{
  Settings_ListSetting_StringSetting__o *pSVar1;
  System_Collections_Generic_List_object__o *__this_00;
  UnityEngine_Events_UnityAction_o *pUVar2;
  long lVar3;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  System_Collections_Generic_List_Enumerator_object__o __this_05;
  bool_conflict bVar4;
  Settings_StringSetting_o *pSVar5;
  long *plVar6;
  System_String_o *unaff_R13;
  undefined1 auVar7 [12];
  System_Collections_Generic_List_T__o *pSVar8;
  Il2CppMethodPointer pIVar9;
  Il2CppObject *pIVar10;
  
  if (g_data_057ae21d == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_StringSetting_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_AddItem);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_Settings_StringSetting_GetEnumerator);
    il2cpp_runtime_helper_023445d0(&TypeInfo_StringSetting);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_Settings_StringSetting_get_Value);
    g_data_057ae21d = '\x01';
  }
  pSVar8 = (System_Collections_Generic_List_T__o *)0x0;
  pIVar9 = (Il2CppMethodPointer)0x0;
  pIVar10 = (Il2CppObject *)0x0;
  pSVar5 = (__this->fields).FinishSetting;
  if (pSVar5 != (Settings_StringSetting_o *)0x0) {
    unaff_R13 = (pSVar5->fields)._value;
    bVar4 = System_String__IsNullOrEmpty(unaff_R13,(MethodInfo *)0x0);
    if ((char)bVar4 != '\0') {
      return;
    }
    pSVar1 = (__this->fields)._addons;
    if ((pSVar1 != (Settings_ListSetting_StringSetting__o *)0x0) &&
       (__this_00 = (System_Collections_Generic_List_object__o *)(pSVar1->fields)._value,
       __this_00 != (System_Collections_Generic_List_object__o *)0x0)) {
      System_Collections_Generic_List_object___GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)&stack0xffffffffffffffb8,__this_00,
                 MethodInfo_List_1_T_Enumerator_Settings_StringSetting_GetEnumerator);
      while( true ) {
        __this_01.fields._8_8_ = pIVar9;
        __this_01.fields._list = pSVar8;
        __this_01.fields._current = pIVar10;
        bVar4 = System_Collections_Generic_List_Enumerator_object___MoveNext
                          (__this_01,(MethodInfo_321A1D0 *)&stack0xffffffffffffffb8);
        if ((char)bVar4 == '\0') {
          __this_03.fields._8_8_ = pIVar9;
          __this_03.fields._list = pSVar8;
          __this_03.fields._current = pIVar10;
          System_Collections_Generic_List_Enumerator_object___Dispose
                    (__this_03,(MethodInfo_321A1C0 *)&stack0xffffffffffffffb8);
          goto label_0437d375;
        }
        if (pIVar10 == (Il2CppObject *)0x0) break;
        bVar4 = System_String__op_Equality(pIVar10[1].monitor,unaff_R13,(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          __this_02.fields._8_8_ = pIVar9;
          __this_02.fields._list = pSVar8;
          __this_02.fields._current = pIVar10;
          System_Collections_Generic_List_Enumerator_object___Dispose
                    (__this_02,(MethodInfo_321A1C0 *)&stack0xffffffffffffffb8);
          return;
        }
      }
      il2cpp_runtime_helper_022b2c90();
    }
  }
  do {
    auVar7 = il2cpp_runtime_helper_022b2c90();
    if (auVar7._8_4_ != 1) {
label_0437d438:
      __this_05.fields._8_8_ = pIVar9;
      __this_05.fields._list = pSVar8;
      __this_05.fields._current = pIVar10;
      System_Collections_Generic_List_Enumerator_object___Dispose
                (__this_05,(MethodInfo_321A1C0 *)&stack0xffffffffffffffb8);
      _Unwind_Resume(auVar7._0_8_);
    }
    plVar6 = (long *)__cxa_begin_catch(auVar7._0_8_);
    lVar3 = *plVar6;
    __cxa_end_catch();
    __this_04.fields._8_8_ = pIVar9;
    __this_04.fields._list = pSVar8;
    __this_04.fields._current = pIVar10;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_04,(MethodInfo_321A1C0 *)&stack0xffffffffffffffb8);
    if (lVar3 != 0) {
      il2cpp_runtime_helper_022fefe0(lVar3);
      goto label_0437d438;
    }
label_0437d375:
    pSVar1 = (__this->fields)._addons;
    pSVar5 = (Settings_StringSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_StringSetting);
    Settings_StringSetting___ctor_40f74f0(pSVar5,unaff_R13,0x7fffffff,(MethodInfo *)0x0);
    if (pSVar1 != (Settings_ListSetting_StringSetting__o *)0x0) {
      Settings_ListSetting_object___AddItem
                ((Settings_ListSetting_T__o *)pSVar1,(Settings_BaseSetting_o *)pSVar5,MethodInfo_Void_AddItem);
      pUVar2 = (__this->fields)._onAddonSelected;
      if (pUVar2 != (UnityEngine_Events_UnityAction_o *)0x0) {
        (*(code *)(pUVar2->fields).invoke_impl)((pUVar2->fields).method_code,(pUVar2->fields).method);
      }
      return;
    }
  } while( true );
}


// UI.CreateGameSelectAddonPopup$$.ctor
// il2cpp: void UI_CreateGameSelectAddonPopup___ctor (UI_CreateGameSelectAddonPopup_o* __this, const MethodInfo* method);
// 0x437d470

void UI_CreateGameSelectAddonPopup___ctor(UI_CreateGameSelectAddonPopup_o *__this,MethodInfo *method)

{
  System_String_o *defaultValue;
  System_Collections_Generic_List_GameObject__o *pSVar1;
  System_Collections_Generic_List_string__o *__this_00;
  MethodInfo *method_00;
  
  if (g_data_057ae153 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_UnityEngine_GameObject,0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_GameObject);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
    il2cpp_runtime_helper_023445d0(&TypeInfo_StringSetting);
    g_data_057ae153 = '\x01';
  }
  pSVar1 = (System_Collections_Generic_List_GameObject__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_GameObject);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)pSVar1,MethodInfo_List_1_UnityEngine_GameObject);
  (__this->fields)._itemButtons = pSVar1;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._itemButtons,pSVar1);
  pSVar1 = (System_Collections_Generic_List_GameObject__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_GameObject);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)pSVar1,MethodInfo_List_1_UnityEngine_GameObject);
  (__this->fields)._categoryButtons = pSVar1;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._categoryButtons,pSVar1);
  pSVar1 = (System_Collections_Generic_List_GameObject__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_GameObject);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)pSVar1,MethodInfo_List_1_UnityEngine_GameObject);
  (__this->fields)._saveElements = pSVar1;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._saveElements,pSVar1);
  __this_00 = (System_Collections_Generic_List_string__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_00,MethodInfo_List_1_System_String);
  (__this->fields)._items = __this_00;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._items,__this_00);
  (__this->fields)._activeCategoryName = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  il2cpp_runtime_helper_022b4080(&(__this->fields)._activeCategoryName);
  defaultValue = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  method_00 = (MethodInfo *)il2cpp_runtime_helper_023052d0(TypeInfo_StringSetting);
  Settings_StringSetting___ctor_40f74f0
            ((Settings_StringSetting_o *)method_00,defaultValue,0x7fffffff,(MethodInfo *)0x0);
  (__this->fields).FinishSetting = (Settings_StringSetting_o *)method_00;
  il2cpp_runtime_helper_022b4080(&(__this->fields).FinishSetting);
  UI_BasePopup___ctor((UI_TooltipPopup_o *)__this,method_00);
  return;
}


// UI.CreateGameSelectAddonPopup$$<Show>b__3_0
// il2cpp: void UI_CreateGameSelectAddonPopup___Show_b__3_0 (UI_CreateGameSelectAddonPopup_o* __this, const MethodInfo* method);
// 0x437d480

void UI_CreateGameSelectAddonPopup___Show_b__3_0(UI_CreateGameSelectAddonPopup_o *__this,MethodInfo *method)

{
  UI_CreateGameSelectAddonPopup__OnAddonLoaded(__this,method);
  return;
}


