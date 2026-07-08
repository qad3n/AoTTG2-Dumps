// Type: Gisketch.Aottg2UI.Search.GisketchSearchIndex
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Search/GisketchSearchIndex.cs
// Prior source: NEW in this update
// --------------------------------

// Gisketch.Aottg2UI.Search.GisketchSearchIndex.<>c__DisplayClass1_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Search_GisketchSearchIndex___c__DisplayClass1_0___ctor (Gisketch_Aottg2UI_Search_GisketchSearchIndex___c__DisplayClass1_0_o* __this, const MethodInfo* method);
// 0x3ade120

void Gisketch_Aottg2UI_Search_GisketchSearchIndex_<>c__DisplayClass1_0___ctor
               (Gisketch_Aottg2UI_Search_GisketchSearchIndex___c__DisplayClass1_0_o *__this,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Search.GisketchSearchIndex.<>c__DisplayClass1_0$$<WithoutDuplicateMainMenuScreenButtons>b__0
// il2cpp: bool Gisketch_Aottg2UI_Search_GisketchSearchIndex___c__DisplayClass1_0___WithoutDuplicateMainMenuScreenButtons_b__0 (Gisketch_Aottg2UI_Search_GisketchSearchIndex___c__DisplayClass1_0_o* __this, Gisketch_Aottg2UI_Search_GisketchSearchEntry_o* entry, const MethodInfo* method);
// 0x3adea80

bool_conflict
Gisketch_Aottg2UI_Search_GisketchSearchIndex_<>c__DisplayClass1_0__<WithoutDuplicateMainMenuScreenButtons>b__0
          (Gisketch_Aottg2UI_Search_GisketchSearchIndex___c__DisplayClass1_0_o *__this,
          Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *entry,MethodInfo *method)

{
  System_String_o *__this_00;
  System_Collections_Generic_HashSet_object__o *__this_01;
  bool_conflict bVar1;
  
  if (DAT_0570139a == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Contains);
    il2cpp_init_method_metadata(&"screen");
    il2cpp_init_method_metadata(&"section");
    il2cpp_init_method_metadata(&"main-menu");
    il2cpp_init_method_metadata(&"main-menu-option-");
    DAT_0570139a = '\x01';
  }
  if ((((entry == (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *)0x0) ||
       (bVar1 = System_String__Equals
                          ((entry->fields)._ScreenId_k__BackingField,"main-menu",5,
                           (MethodInfo *)0x0), (char)bVar1 == '\0')) ||
      (bVar1 = System_String__Equals
                         ((entry->fields)._Kind_k__BackingField,"screen",5,(MethodInfo *)0x0),
      (char)bVar1 != '\0')) ||
     ((bVar1 = System_String__Equals
                         ((entry->fields)._Kind_k__BackingField,"section",5,(MethodInfo *)0x0),
      (char)bVar1 != '\0' ||
      (bVar1 = System_String__IsNullOrEmpty
                         ((entry->fields)._TargetId_k__BackingField,(MethodInfo *)0x0),
      (char)bVar1 != '\0')))) {
    return 0;
  }
  __this_00 = (entry->fields)._TargetId_k__BackingField;
  if (__this_00 != (System_String_o *)0x0) {
    bVar1 = System_String__StartsWith(__this_00,"main-menu-option-",5,(MethodInfo *)0x0);
    if ((char)bVar1 == '\0') {
      return 0;
    }
    __this_01 = (System_Collections_Generic_HashSet_object__o *)(__this->fields).screenTitles;
    if (__this_01 != (System_Collections_Generic_HashSet_object__o *)0x0) {
      bVar1 = System_Collections_Generic_HashSet<object>__Contains
                        (__this_01,(Il2CppObject *)(entry->fields)._Title_k__BackingField,
                         MethodInfo_Boolean_Contains);
      return bVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Search.GisketchSearchIndex$$EntriesFor
// il2cpp: System_Collections_Generic_List_GisketchSearchEntry__o* Gisketch_Aottg2UI_Search_GisketchSearchIndex__EntriesFor (Gisketch_Aottg2UI_Data_GisketchManifestDefinition_o* manifest, System_String_o* activeScreenId, const MethodInfo* method);
// 0x3add200

/* WARNING: Type propagation algorithm not settling */

System_Collections_Generic_List_GisketchSearchEntry__o *
Gisketch_Aottg2UI_Search_GisketchSearchIndex__EntriesFor
          (Gisketch_Aottg2UI_Data_GisketchManifestDefinition_o *manifest,
          System_String_o *activeScreenId,MethodInfo *method)

{
  int32_t *piVar1;
  int iVar2;
  uint uVar3;
  System_Collections_Generic_IEqualityComparer_T__o *comparer;
  Gisketch_Aottg2UI_Data_GisketchScreenDefinition_array *method_00;
  Il2CppClass *screen;
  Gisketch_Aottg2UI_Search_GisketchSearchEntry_array *pGVar4;
  long lVar5;
  bool_conflict bVar6;
  System_Collections_Generic_List_GisketchSearchEntry__o *pSVar7;
  Gisketch_Aottg2UI_Data_GisketchScreenDefinition_o *pGVar8;
  System_Collections_Generic_HashSet_object__o *__this;
  Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *__this_00;
  MethodInfo *method_01;
  System_String_o *pSVar9;
  System_String_o *value;
  System_String_o *pSVar10;
  MethodInfo *method_02;
  ulong uVar11;
  System_String_o *value_00;
  MethodInfo *in_stack_ffffffffffffff98;
  
  if (DAT_05701392 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_GisketchSearchEntry);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Add);
    il2cpp_init_method_metadata(&MethodInfo_HashSet_1_System_String);
    il2cpp_init_method_metadata(&TypeInfo_HashSet_string);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_List_1_Gisketch_Aottg2UI_Search_GisketchSearchEn);
    il2cpp_init_method_metadata(&TypeInfo_List_GisketchSearchEntry);
    il2cpp_init_method_metadata(&TypeInfo_StringComparer);
    il2cpp_init_method_metadata(&"screen");
    il2cpp_init_method_metadata(&"menuList");
    DAT_05701392 = '\x01';
  }
  pSVar7 = (System_Collections_Generic_List_GisketchSearchEntry__o *)
           il2cpp_runtime_glue(TypeInfo_List_GisketchSearchEntry);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)pSVar7,MethodInfo_List_1_Gisketch_Aottg2UI_Search_GisketchSearchEn);
  if ((manifest == (Gisketch_Aottg2UI_Data_GisketchManifestDefinition_o *)0x0) ||
     (pGVar8 = Gisketch_Aottg2UI_Data_GisketchManifestDefinition__FindScreen
                         (manifest,activeScreenId,method_01),
     pGVar8 == (Gisketch_Aottg2UI_Data_GisketchScreenDefinition_o *)0x0)) {
    value_00 = (System_String_o *)0x0;
    pSVar9 = (System_String_o *)0x0;
  }
  else {
    pSVar9 = (pGVar8->fields).id;
    value_00 = (pGVar8->fields).searchGroup;
  }
  bVar6 = System_String__IsNullOrEmpty(value_00,(MethodInfo *)0x0);
  if (((char)bVar6 != '\0') && (value_00 = pSVar9, pSVar9 == (System_String_o *)0x0)) {
    value_00 = (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
  }
  if (manifest == (Gisketch_Aottg2UI_Data_GisketchManifestDefinition_o *)0x0) {
    return pSVar7;
  }
  if ((manifest->fields).screens == (Gisketch_Aottg2UI_Data_GisketchScreenDefinition_array *)0x0) {
    return pSVar7;
  }
  bVar6 = System_String__IsNullOrEmpty(value_00,(MethodInfo *)0x0);
  if ((char)bVar6 != '\0') {
    return pSVar7;
  }
  if (*(int *)(TypeInfo_StringComparer + 0xe4) == 0) {
    il2cpp_init_class();
  }
  if (DAT_0570136f == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_StringComparer);
    DAT_0570136f = '\x01';
    iVar2 = *(int *)(TypeInfo_StringComparer + 0xe4);
  }
  else {
    iVar2 = *(int *)(TypeInfo_StringComparer + 0xe4);
  }
  if (iVar2 == 0) {
    il2cpp_init_class();
  }
  comparer = *(System_Collections_Generic_IEqualityComparer_T__o **)
              (*(long *)(TypeInfo_StringComparer + 0xb8) + 0x18);
  __this = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_glue(TypeInfo_HashSet_string);
  System_Collections_Generic_HashSet<object>___ctor(__this,comparer,MethodInfo_HashSet_1_System_String);
  method_00 = (manifest->fields).screens;
  if (method_00 != (Gisketch_Aottg2UI_Data_GisketchScreenDefinition_array *)0x0) {
    if ((int)(char *)method_00->max_length < 1) {
LAB_03add604:
      pSVar7 = Gisketch_Aottg2UI_Search_GisketchSearchIndex__WithoutDuplicateMainMenuScreenButtons
                         (pSVar7,(System_Collections_Generic_HashSet_string__o *)__this,
                          (MethodInfo *)method_00);
      return pSVar7;
    }
    uVar11 = 0;
    if (((ulong)method_00->max_length & 0xffffffff) != 0) {
      do {
        screen = (Il2CppClass *)method_00->m_Items[uVar11];
        if (screen != (Il2CppClass *)0x0) {
          pSVar9 = (System_String_o *)(screen->_1).name;
          pSVar10 = *(System_String_o **)&(screen->_1).byval_arg.bits;
          bVar6 = System_String__IsNullOrEmpty(pSVar10,(MethodInfo *)0x0);
          if (((char)bVar6 != '\0') && (pSVar10 = pSVar9, pSVar9 == (System_String_o *)0x0)) {
            pSVar10 = (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
          }
          bVar6 = System_String__Equals(pSVar10,value_00,5,(MethodInfo *)0x0);
          if ((char)bVar6 != '\0') {
            value = (screen->_1).byval_arg.data;
            pSVar9 = (System_String_o *)(screen->_1).name;
            pSVar10 = (System_String_o *)(screen->_1).namespaze;
            bVar6 = System_String__IsNullOrEmpty(pSVar10,(MethodInfo *)0x0);
            if (((char)bVar6 != '\0') && (pSVar10 = pSVar9, pSVar9 == (System_String_o *)0x0)) {
              pSVar10 = (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
            }
            bVar6 = System_String__IsNullOrEmpty(value,(MethodInfo *)0x0);
            if (((char)bVar6 != '\0') && (value = pSVar10, pSVar10 == (System_String_o *)0x0)) {
              value = (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
            }
            bVar6 = System_String__IsNullOrEmpty(value,(MethodInfo *)0x0);
            if ((char)bVar6 == '\0') {
              if (__this == (System_Collections_Generic_HashSet_object__o *)0x0) goto LAB_03add690;
              System_Collections_Generic_HashSet<object>__Add
                        (__this,(Il2CppObject *)value,MethodInfo_Boolean_Add);
            }
            pSVar9 = (System_String_o *)(screen->_1).name;
            method_02 = (MethodInfo *)**(undefined8 **)(DAT_057110b0 + 0xb8);
            __this_00 = (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *)
                        il2cpp_runtime_glue(TypeInfo_GisketchSearchEntry);
            Gisketch_Aottg2UI_Search_GisketchSearchEntry___ctor
                      (__this_00,pSVar9,value,value_00,(System_String_o *)method_02,
                       (System_String_o *)method_02,pSVar9,value,(System_String_o *)method_02,
                       "menuList","screen",(UnityEngine_GameObject_o *)0x0,
                       in_stack_ffffffffffffff98);
            lVar5 = MethodInfo_Void_Add;
            if (pSVar7 == (System_Collections_Generic_List_GisketchSearchEntry__o *)0x0)
            goto LAB_03add690;
            piVar1 = &(pSVar7->fields)._version;
            *piVar1 = *piVar1 + 1;
            pGVar4 = (pSVar7->fields)._items;
            if (pGVar4 == (Gisketch_Aottg2UI_Search_GisketchSearchEntry_array *)0x0)
            goto LAB_03add690;
            uVar3 = (pSVar7->fields)._size;
            if (uVar3 < (uint)pGVar4->max_length) {
              (pSVar7->fields)._size = uVar3 + 1;
              pGVar4->m_Items[(int)uVar3] = __this_00;
              il2cpp_runtime_glue(pGVar4->m_Items + (int)uVar3,__this_00);
            }
            else {
              System_Collections_Generic_List<object>__AddWithResize
                        ((System_Collections_Generic_List_object__o *)pSVar7,
                         (Il2CppObject *)__this_00,
                         *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70))
              ;
            }
            Gisketch_Aottg2UI_Search_GisketchSearchIndex__AddNodeEntries
                      (pSVar7,(Gisketch_Aottg2UI_Data_GisketchScreenDefinition_o *)screen,
                       (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)(screen->_1).declaringType
                       ,(System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8),
                       (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8),method_02);
          }
        }
        uVar11 = uVar11 + 1;
        if ((long)(int)*(uint *)&method_00->max_length <= (long)uVar11) goto LAB_03add604;
      } while (uVar11 < *(uint *)&method_00->max_length);
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
LAB_03add690:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Search.GisketchSearchIndex$$WithoutDuplicateMainMenuScreenButtons
// il2cpp: System_Collections_Generic_List_GisketchSearchEntry__o* Gisketch_Aottg2UI_Search_GisketchSearchIndex__WithoutDuplicateMainMenuScreenButtons (System_Collections_Generic_List_GisketchSearchEntry__o* entries, System_Collections_Generic_HashSet_string__o* screenTitles, const MethodInfo* method);
// 0x3ade010

System_Collections_Generic_List_GisketchSearchEntry__o *
Gisketch_Aottg2UI_Search_GisketchSearchIndex__WithoutDuplicateMainMenuScreenButtons
          (System_Collections_Generic_List_GisketchSearchEntry__o *entries,
          System_Collections_Generic_HashSet_string__o *screenTitles,MethodInfo *method)

{
  Il2CppClass *pIVar1;
  Il2CppObject *__this;
  System_Predicate_T__o *match;
  
  if (DAT_05701393 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    il2cpp_init_method_metadata(&MethodInfo_Int32_RemoveAll);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    il2cpp_init_method_metadata(&TypeInfo_Predicate_GisketchSearchEntry);
    il2cpp_init_method_metadata(&MethodInfo_Boolean__WithoutDuplicateMainMenuScreenButtons_b);
    il2cpp_init_method_metadata(&TypeInfo_c__DisplayClass1_0);
    DAT_05701393 = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_c__DisplayClass1_0);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  if (__this != (Il2CppObject *)0x0) {
    __this[1].klass = (Il2CppClass *)screenTitles;
    il2cpp_runtime_glue(__this + 1,screenTitles);
    if ((((entries != (System_Collections_Generic_List_GisketchSearchEntry__o *)0x0) &&
         ((entries->fields)._size != 0)) && (pIVar1 = __this[1].klass, pIVar1 != (Il2CppClass *)0x0)
        ) && (*(int *)&(pIVar1->_1).byval_arg.data != 0)) {
      match = (System_Predicate_T__o *)il2cpp_runtime_glue(TypeInfo_Predicate_GisketchSearchEntry);
      System_Predicate<object>___ctor();
      System_Collections_Generic_List<object>__RemoveAll
                ((System_Collections_Generic_List_object__o *)entries,match,MethodInfo_Int32_RemoveAll);
    }
    return entries;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Search.GisketchSearchIndex$$AddNodeEntries
// il2cpp: void Gisketch_Aottg2UI_Search_GisketchSearchIndex__AddNodeEntries (System_Collections_Generic_List_GisketchSearchEntry__o* entries, Gisketch_Aottg2UI_Data_GisketchScreenDefinition_o* screen, Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* node, System_String_o* sectionId, System_String_o* sectionTitle, const MethodInfo* method);
// 0x3add8b0

/* WARNING: Type propagation algorithm not settling */

void Gisketch_Aottg2UI_Search_GisketchSearchIndex__AddNodeEntries
               (System_Collections_Generic_List_GisketchSearchEntry__o *entries,
               Gisketch_Aottg2UI_Data_GisketchScreenDefinition_o *screen,
               Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *node,System_String_o *sectionId,
               System_String_o *sectionTitle,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_String_Fields SVar3;
  System_String_o *pSVar4;
  Gisketch_Aottg2UI_Search_GisketchSearchEntry_array *pGVar5;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *pGVar6;
  Gisketch_Aottg2UI_Data_GisketchStepperStepDefinition_array *pGVar7;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar8;
  long lVar9;
  bool_conflict bVar10;
  System_String_o *pSVar11;
  System_String_c *value;
  System_String_c *pSVar12;
  Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *pGVar13;
  ulong uVar14;
  System_String_o *title;
  System_String_o *keywords;
  void **ppvVar15;
  System_String_Fields value_00;
  System_String_o *pSVar16;
  System_String_o *pSVar17;
  MethodInfo *pMVar18;
  ulong uVar19;
  MethodInfo *in_stack_ffffffffffffff78;
  System_String_o *local_70;
  System_String_o *local_60;
  
  pMVar18 = (MethodInfo *)screen;
  if (DAT_05701394 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_GisketchSearchEntry);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&"section");
    DAT_05701394 = '\x01';
  }
  if (node == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    return;
  }
  pSVar11 = (node->fields).popover;
  if ((pSVar11 != (System_String_o *)0x0) &&
     (*(char *)((long)&pSVar11[2].fields._stringLength + 1) != '\0')) {
    return;
  }
  if (DAT_05701396 == '\0') {
    il2cpp_init_method_metadata(&"section");
    DAT_05701396 = '\x01';
    pSVar11 = (node->fields).popover;
  }
  if ((pSVar11 == (System_String_o *)0x0) ||
     (pMVar18 = "section",
     bVar10 = System_String__Equals
                        ((System_String_o *)pSVar11[1].fields,(System_String_o *)"section",5,
                         (MethodInfo *)0x0), (char)bVar10 == '\0')) {
    bVar10 = Gisketch_Aottg2UI_Search_GisketchSearchIndex__IsControl(node,pMVar18);
    if (((char)bVar10 != '\0') &&
       ((bVar10 = Gisketch_Aottg2UI_Search_GisketchSearchIndex__IsExplicitSearch(node,pMVar18),
        (char)bVar10 != '\0' &&
        (bVar10 = System_String__IsNullOrEmpty((node->fields).id,(MethodInfo *)0x0),
        (char)bVar10 == '\0')))) {
      pSVar11 = (node->fields).popover;
      pGVar8 = node;
      if ((pSVar11 != (System_String_o *)0x0) &&
         (bVar10 = System_String__IsNullOrEmpty
                             ((System_String_o *)pSVar11[1].fields,(MethodInfo *)0x0),
         (char)bVar10 == '\0')) {
        pSVar11 = (node->fields).popover;
        if (pSVar11 == (System_String_o *)0x0) goto LAB_03ade009;
        pGVar8 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)(pSVar11 + 1);
      }
      if (screen == (Gisketch_Aottg2UI_Data_GisketchScreenDefinition_o *)0x0) goto LAB_03ade009;
      pSVar11 = (pGVar8->fields).type;
      pSVar16 = (screen->fields).id;
      pSVar17 = (screen->fields).title;
      local_70 = (screen->fields).searchTitle;
      bVar10 = System_String__IsNullOrEmpty(pSVar17,(MethodInfo *)0x0);
      if (((char)bVar10 != '\0') && (pSVar17 = pSVar16, pSVar16 == (System_String_o *)0x0)) {
        pSVar17 = (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
      }
      bVar10 = System_String__IsNullOrEmpty(local_70,(MethodInfo *)0x0);
      if (((char)bVar10 != '\0') && (local_70 = pSVar17, pSVar17 == (System_String_o *)0x0)) {
        local_70 = (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
      }
      pSVar17 = (screen->fields).id;
      local_60 = (screen->fields).searchGroup;
      pMVar18 = (MethodInfo *)0x0;
      bVar10 = System_String__IsNullOrEmpty(local_60,(MethodInfo *)0x0);
      if (((char)bVar10 != '\0') && (local_60 = pSVar17, pSVar17 == (System_String_o *)0x0)) {
        local_60 = (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
      }
      pSVar17 = (node->fields).id;
      title = Gisketch_Aottg2UI_Search_GisketchSearchIndex__Title(node,pMVar18);
      keywords = Gisketch_Aottg2UI_Search_GisketchSearchIndex__Keywords(node,pMVar18);
      pSVar4 = (node->fields).popover;
      if (pSVar4 == (System_String_o *)0x0) {
        ppvVar15 = *(void ***)(DAT_057110b0 + 0xb8);
      }
      else {
        ppvVar15 = &pSVar4[1].monitor;
      }
      pSVar4 = *ppvVar15;
      pGVar13 = (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *)il2cpp_runtime_glue(TypeInfo_GisketchSearchEntry);
      method = (MethodInfo *)sectionTitle;
      Gisketch_Aottg2UI_Search_GisketchSearchEntry___ctor
                (pGVar13,pSVar16,local_70,local_60,sectionId,sectionTitle,pSVar17,title,keywords,
                 pSVar4,pSVar11,(UnityEngine_GameObject_o *)0x0,in_stack_ffffffffffffff78);
      lVar9 = MethodInfo_Void_Add;
      if (entries == (System_Collections_Generic_List_GisketchSearchEntry__o *)0x0)
      goto LAB_03ade009;
      piVar1 = &(entries->fields)._version;
      *piVar1 = *piVar1 + 1;
      pGVar5 = (entries->fields)._items;
      if (pGVar5 == (Gisketch_Aottg2UI_Search_GisketchSearchEntry_array *)0x0) goto LAB_03ade009;
      uVar2 = (entries->fields)._size;
      if (uVar2 < (uint)pGVar5->max_length) {
        (entries->fields)._size = uVar2 + 1;
        pGVar5->m_Items[(int)uVar2] = pGVar13;
        il2cpp_runtime_glue(pGVar5->m_Items + (int)uVar2,pGVar13);
        pGVar6 = (node->fields).deferredChildren;
      }
      else {
        System_Collections_Generic_List<object>__AddWithResize
                  ((System_Collections_Generic_List_object__o *)entries,(Il2CppObject *)pGVar13,
                   *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
        pGVar6 = (node->fields).deferredChildren;
      }
      goto joined_r0x03addff9;
    }
  }
  else {
    pSVar11 = (node->fields).popover;
    if (pSVar11 == (System_String_o *)0x0) {
LAB_03ade009:
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    sectionId = (System_String_o *)pSVar11[2].klass;
    pSVar12 = (System_String_c *)(node->fields).id;
    bVar10 = System_String__IsNullOrEmpty(sectionId,(MethodInfo *)0x0);
    if (((char)bVar10 != '\0') &&
       (sectionId = (System_String_o *)pSVar12, pSVar12 == (System_String_c *)0x0)) {
      sectionId = (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
    }
    pSVar11 = (node->fields).popover;
    if (pSVar11 == (System_String_o *)0x0) goto LAB_03ade009;
    value_00 = pSVar11->fields;
    sectionTitle = pSVar11[2].monitor;
    SVar3 = (System_String_Fields)(node->fields).text;
    bVar10 = System_String__IsNullOrEmpty((System_String_o *)value_00,(MethodInfo *)0x0);
    if (((char)bVar10 != '\0') && (value_00 = SVar3, SVar3 == (System_String_Fields)0x0)) {
      value_00 = **(System_String_Fields **)(DAT_057110b0 + 0xb8);
    }
    pMVar18 = (MethodInfo *)0x0;
    bVar10 = System_String__IsNullOrEmpty(sectionTitle,(MethodInfo *)0x0);
    if (((char)bVar10 != '\0') &&
       (sectionTitle = (System_String_o *)value_00, value_00 == (System_String_Fields)0x0)) {
      sectionTitle = *(System_String_o **)*(System_String_Fields **)(DAT_057110b0 + 0xb8);
    }
    pSVar11 = (node->fields).popover;
    if (pSVar11 == (System_String_o *)0x0) goto LAB_03ade009;
    pSVar12 = pSVar11[1].klass;
    if ((char)pSVar11[2].fields._stringLength == '\0') {
      value = (System_String_c *)**(undefined8 **)(DAT_057110b0 + 0xb8);
    }
    else {
      value = (System_String_c *)
              Gisketch_Aottg2UI_Search_GisketchSearchIndex__HarvestKeywords(node,pMVar18);
    }
    if (DAT_05701399 == '\0') {
      il2cpp_init_method_metadata(&" ");
      DAT_05701399 = '\x01';
    }
    bVar10 = System_String__IsNullOrEmpty((System_String_o *)pSVar12,(MethodInfo *)0x0);
    if ((char)bVar10 == '\0') {
      bVar10 = System_String__IsNullOrEmpty((System_String_o *)value,(MethodInfo *)0x0);
      if ((char)bVar10 == '\0') {
        pSVar12 = (System_String_c *)
                  System_String__Concat
                            ((System_String_o *)pSVar12," ",(System_String_o *)value,
                             (MethodInfo *)0x0);
      }
    }
    else {
      pSVar12 = value;
      if (value == (System_String_c *)0x0) {
        pSVar12 = (System_String_c *)**(undefined8 **)(DAT_057110b0 + 0xb8);
      }
    }
    if (screen == (Gisketch_Aottg2UI_Data_GisketchScreenDefinition_o *)0x0) goto LAB_03ade009;
    pSVar11 = (screen->fields).id;
    pSVar16 = (screen->fields).title;
    local_70 = (screen->fields).searchTitle;
    bVar10 = System_String__IsNullOrEmpty(pSVar16,(MethodInfo *)0x0);
    if (((char)bVar10 != '\0') && (pSVar16 = pSVar11, pSVar11 == (System_String_o *)0x0)) {
      pSVar16 = (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
    }
    bVar10 = System_String__IsNullOrEmpty(local_70,(MethodInfo *)0x0);
    if (((char)bVar10 != '\0') && (local_70 = pSVar16, pSVar16 == (System_String_o *)0x0)) {
      local_70 = (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
    }
    pSVar16 = (screen->fields).id;
    pSVar17 = (screen->fields).searchGroup;
    bVar10 = System_String__IsNullOrEmpty(pSVar17,(MethodInfo *)0x0);
    if (((char)bVar10 != '\0') && (pSVar17 = pSVar16, pSVar16 == (System_String_o *)0x0)) {
      pSVar17 = (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
    }
    pSVar16 = (node->fields).popover;
    if (pSVar16 == (System_String_o *)0x0) goto LAB_03ade009;
    pSVar4 = (node->fields).id;
    pSVar16 = pSVar16[1].monitor;
    pGVar13 = (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *)il2cpp_runtime_glue(TypeInfo_GisketchSearchEntry);
    method = (MethodInfo *)sectionTitle;
    Gisketch_Aottg2UI_Search_GisketchSearchEntry___ctor
              (pGVar13,pSVar11,local_70,pSVar17,sectionId,sectionTitle,pSVar4,sectionTitle,
               (System_String_o *)pSVar12,pSVar16,(System_String_o *)"section",
               (UnityEngine_GameObject_o *)0x0,in_stack_ffffffffffffff78);
    lVar9 = MethodInfo_Void_Add;
    if (entries == (System_Collections_Generic_List_GisketchSearchEntry__o *)0x0) goto LAB_03ade009;
    piVar1 = &(entries->fields)._version;
    *piVar1 = *piVar1 + 1;
    pGVar5 = (entries->fields)._items;
    if (pGVar5 == (Gisketch_Aottg2UI_Search_GisketchSearchEntry_array *)0x0) goto LAB_03ade009;
    uVar2 = (entries->fields)._size;
    if ((uint)pGVar5->max_length <= uVar2) {
      System_Collections_Generic_List<object>__AddWithResize
                ((System_Collections_Generic_List_object__o *)entries,(Il2CppObject *)pGVar13,
                 *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
      pGVar6 = (node->fields).deferredChildren;
      goto joined_r0x03addff9;
    }
    (entries->fields)._size = uVar2 + 1;
    pGVar5->m_Items[(int)uVar2] = pGVar13;
    il2cpp_runtime_glue(pGVar5->m_Items + (int)uVar2);
  }
  pGVar6 = (node->fields).deferredChildren;
joined_r0x03addff9:
  if ((pGVar6 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)0x0) &&
     (0 < (int)pGVar6->max_length)) {
    uVar14 = pGVar6->max_length & 0xffffffff;
    uVar19 = 0;
    do {
      if (uVar14 <= uVar19) goto LAB_03ade004;
      Gisketch_Aottg2UI_Search_GisketchSearchIndex__AddNodeEntries
                (entries,screen,pGVar6->m_Items[uVar19],sectionId,sectionTitle,method);
      uVar19 = uVar19 + 1;
      uVar2 = (uint)pGVar6->max_length;
      uVar14 = (ulong)uVar2;
    } while ((long)uVar19 < (long)(int)uVar2);
  }
  pGVar7 = (node->fields).steps;
  if ((pGVar7 != (Gisketch_Aottg2UI_Data_GisketchStepperStepDefinition_array *)0x0) &&
     (0 < (int)pGVar7->max_length)) {
    uVar14 = pGVar7->max_length & 0xffffffff;
    uVar19 = 0;
    do {
      if (uVar14 <= uVar19) {
LAB_03ade004:
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      Gisketch_Aottg2UI_Search_GisketchSearchIndex__AddNodeEntries
                (entries,screen,
                 (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)pGVar7->m_Items[uVar19],
                 sectionId,sectionTitle,method);
      uVar19 = uVar19 + 1;
      uVar2 = (uint)pGVar7->max_length;
      uVar14 = (ulong)uVar2;
    } while ((long)uVar19 < (long)(int)uVar2);
  }
  return;
}


// Gisketch.Aottg2UI.Search.GisketchSearchIndex$$AddChildEntries
// il2cpp: void Gisketch_Aottg2UI_Search_GisketchSearchIndex__AddChildEntries (System_Collections_Generic_List_GisketchSearchEntry__o* entries, Gisketch_Aottg2UI_Data_GisketchScreenDefinition_o* screen, Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array* children, System_String_o* sectionId, System_String_o* sectionTitle, const MethodInfo* method);
// 0x3ade710

void Gisketch_Aottg2UI_Search_GisketchSearchIndex__AddChildEntries
               (System_Collections_Generic_List_GisketchSearchEntry__o *entries,
               Gisketch_Aottg2UI_Data_GisketchScreenDefinition_o *screen,
               Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *children,
               System_String_o *sectionId,System_String_o *sectionTitle,MethodInfo *method)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  
  if ((children != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)0x0) &&
     (0 < (int)children->max_length)) {
    uVar2 = children->max_length & 0xffffffff;
    uVar3 = 0;
    do {
      if (uVar2 <= uVar3) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      Gisketch_Aottg2UI_Search_GisketchSearchIndex__AddNodeEntries
                (entries,screen,children->m_Items[uVar3],sectionId,sectionTitle,method);
      uVar3 = uVar3 + 1;
      uVar1 = (uint)children->max_length;
      uVar2 = (ulong)uVar1;
    } while ((long)uVar3 < (long)(int)uVar1);
  }
  return;
}


// Gisketch.Aottg2UI.Search.GisketchSearchIndex$$HarvestKeywords
// il2cpp: System_String_o* Gisketch_Aottg2UI_Search_GisketchSearchIndex__HarvestKeywords (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* node, const MethodInfo* method);
// 0x3ade1d0

System_String_o *
Gisketch_Aottg2UI_Search_GisketchSearchIndex__HarvestKeywords
          (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *node,MethodInfo *method)

{
  System_Text_StringBuilder_o *__this;
  System_String_o *pSVar1;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  
  if (DAT_05701395 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_StringBuilder);
    DAT_05701395 = '\x01';
  }
  __this = (System_Text_StringBuilder_o *)il2cpp_runtime_glue(TypeInfo_StringBuilder);
  System_Text_StringBuilder___ctor(__this,(MethodInfo *)0x0);
  Gisketch_Aottg2UI_Search_GisketchSearchIndex__AppendText(__this,node,method_00);
  if (node != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    Gisketch_Aottg2UI_Search_GisketchSearchIndex__HarvestChildKeywords
              (__this,(node->fields).deferredChildren,method_01);
    Gisketch_Aottg2UI_Search_GisketchSearchIndex__HarvestChildKeywords
              (__this,(Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)(node->fields).steps,
               method_02);
    if (__this != (System_Text_StringBuilder_o *)0x0) {
      pSVar1 = (System_String_o *)
               (*(__this->klass->vtable)._3_ToString.methodPtr)
                         (__this,(__this->klass->vtable)._3_ToString.method);
      return pSVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Search.GisketchSearchIndex$$HarvestChildKeywords
// il2cpp: void Gisketch_Aottg2UI_Search_GisketchSearchIndex__HarvestChildKeywords (System_Text_StringBuilder_o* builder, Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array* children, const MethodInfo* method);
// 0x3ade8b0

void Gisketch_Aottg2UI_Search_GisketchSearchIndex__HarvestChildKeywords
               (System_Text_StringBuilder_o *builder,
               Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *children,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar1;
  bool_conflict bVar2;
  uint uVar3;
  System_Text_StringBuilder_o *__this;
  System_String_o *pSVar4;
  uint uVar5;
  long lVar6;
  MethodInfo *method_00;
  
  if ((children != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)0x0) &&
     (uVar3 = (uint)children->max_length, 0 < (int)uVar3)) {
    if (builder != (System_Text_StringBuilder_o *)0x0) {
      lVar6 = 0;
      if (uVar3 != 0) {
        do {
          pGVar1 = children->m_Items[lVar6];
          if (DAT_05701396 == '\0') {
            il2cpp_init_method_metadata(&"section");
            DAT_05701396 = '\x01';
          }
          if (pGVar1 == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) goto LAB_03adea07;
          pSVar4 = (pGVar1->fields).popover;
          if ((pSVar4 == (System_String_o *)0x0) ||
             (bVar2 = System_String__Equals
                                ((System_String_o *)pSVar4[1].fields,"section",5,
                                 (MethodInfo *)0x0), (char)bVar2 == '\0')) {
            method_00 = (MethodInfo *)0x20;
            __this = System_Text_StringBuilder__Append(builder,0x20,(MethodInfo *)0x0);
            pSVar4 = Gisketch_Aottg2UI_Search_GisketchSearchIndex__HarvestKeywords(pGVar1,method_00)
            ;
            if (__this == (System_Text_StringBuilder_o *)0x0) goto LAB_03adea07;
            System_Text_StringBuilder__Append(__this,pSVar4,(MethodInfo *)0x0);
          }
          uVar3 = (uint)children->max_length;
          lVar6 = lVar6 + 1;
          if ((int)uVar3 <= (int)(uint)lVar6) {
            return;
          }
        } while ((uint)lVar6 < uVar3);
      }
LAB_03adea0c:
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    uVar5 = 0;
    do {
      if (uVar3 <= uVar5) goto LAB_03adea0c;
      pGVar1 = children->m_Items[(int)uVar5];
      if (DAT_05701396 == '\0') {
        il2cpp_init_method_metadata(&"section");
        DAT_05701396 = '\x01';
      }
      if (((pGVar1 == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) ||
          (pSVar4 = (pGVar1->fields).popover, pSVar4 == (System_String_o *)0x0)) ||
         (bVar2 = System_String__Equals
                            ((System_String_o *)pSVar4[1].fields,"section",5,(MethodInfo *)0x0),
         (char)bVar2 == '\0')) {
LAB_03adea07:
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      uVar5 = uVar5 + 1;
      uVar3 = (uint)children->max_length;
    } while ((int)uVar5 < (int)uVar3);
  }
  return;
}


// Gisketch.Aottg2UI.Search.GisketchSearchIndex$$AppendText
// il2cpp: void Gisketch_Aottg2UI_Search_GisketchSearchIndex__AppendText (System_Text_StringBuilder_o* builder, Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* node, const MethodInfo* method);
// 0x3ade780

void Gisketch_Aottg2UI_Search_GisketchSearchIndex__AppendText
               (System_Text_StringBuilder_o *builder,
               Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *node,MethodInfo *method)

{
  System_String_o *pSVar1;
  System_String_c *value;
  bool_conflict bVar2;
  System_Text_StringBuilder_o *pSVar3;
  
  if (node != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    pSVar1 = (node->fields).text;
    bVar2 = System_String__IsNullOrEmpty(pSVar1,(MethodInfo *)0x0);
    if ((char)bVar2 == '\0') {
      if (builder == (System_Text_StringBuilder_o *)0x0) goto LAB_03ade89e;
      pSVar3 = System_Text_StringBuilder__Append(builder,0x20,(MethodInfo *)0x0);
      if (pSVar3 == (System_Text_StringBuilder_o *)0x0) goto LAB_03ade89e;
      System_Text_StringBuilder__Append(pSVar3,pSVar1,(MethodInfo *)0x0);
    }
    pSVar1 = (node->fields).placeholder;
    bVar2 = System_String__IsNullOrEmpty(pSVar1,(MethodInfo *)0x0);
    if ((char)bVar2 == '\0') {
      if (builder == (System_Text_StringBuilder_o *)0x0) goto LAB_03ade89e;
      pSVar3 = System_Text_StringBuilder__Append(builder,0x20,(MethodInfo *)0x0);
      if (pSVar3 == (System_Text_StringBuilder_o *)0x0) goto LAB_03ade89e;
      System_Text_StringBuilder__Append(pSVar3,pSVar1,(MethodInfo *)0x0);
    }
    pSVar1 = (node->fields).choiceOptionRenderer;
    bVar2 = System_String__IsNullOrEmpty(pSVar1,(MethodInfo *)0x0);
    if ((char)bVar2 == '\0') {
      if (builder == (System_Text_StringBuilder_o *)0x0) goto LAB_03ade89e;
      pSVar3 = System_Text_StringBuilder__Append(builder,0x20,(MethodInfo *)0x0);
      if (pSVar3 == (System_Text_StringBuilder_o *)0x0) goto LAB_03ade89e;
      System_Text_StringBuilder__Append(pSVar3,pSVar1,(MethodInfo *)0x0);
    }
    pSVar1 = (node->fields).popover;
    if (pSVar1 != (System_String_o *)0x0) {
      value = pSVar1[1].klass;
      bVar2 = System_String__IsNullOrEmpty((System_String_o *)value,(MethodInfo *)0x0);
      if ((char)bVar2 == '\0') {
        if (builder != (System_Text_StringBuilder_o *)0x0) {
          pSVar3 = System_Text_StringBuilder__Append(builder,0x20,(MethodInfo *)0x0);
          if (pSVar3 != (System_Text_StringBuilder_o *)0x0) {
            System_Text_StringBuilder__Append(pSVar3,(System_String_o *)value,(MethodInfo *)0x0);
            return;
          }
        }
LAB_03ade89e:
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
    }
  }
  return;
}


// Gisketch.Aottg2UI.Search.GisketchSearchIndex$$IsSection
// il2cpp: bool Gisketch_Aottg2UI_Search_GisketchSearchIndex__IsSection (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* node, const MethodInfo* method);
// 0x3ade130

bool_conflict
Gisketch_Aottg2UI_Search_GisketchSearchIndex__IsSection
          (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *node,MethodInfo *method)

{
  System_String_o *pSVar1;
  bool_conflict bVar2;
  
  if (DAT_05701396 == '\0') {
    il2cpp_init_method_metadata(&"section");
    DAT_05701396 = '\x01';
  }
  if (node != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    pSVar1 = (node->fields).popover;
    if (pSVar1 != (System_String_o *)0x0) {
      bVar2 = System_String__Equals
                        ((System_String_o *)pSVar1[1].fields,"section",5,(MethodInfo *)0x0);
      return bVar2;
    }
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Search.GisketchSearchIndex$$IsControl
// il2cpp: bool Gisketch_Aottg2UI_Search_GisketchSearchIndex__IsControl (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* node, const MethodInfo* method);
// 0x3ade300

bool_conflict
Gisketch_Aottg2UI_Search_GisketchSearchIndex__IsControl
          (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *node,MethodInfo *method)

{
  uint uVar1;
  bool_conflict bVar2;
  ulong uVar3;
  
  if (DAT_05701397 == '\0') {
    il2cpp_init_method_metadata(&"TextArea");
    il2cpp_init_method_metadata(&"Select");
    il2cpp_init_method_metadata(&"InputField");
    il2cpp_init_method_metadata(&"Button");
    il2cpp_init_method_metadata(&"Dropdown");
    il2cpp_init_method_metadata(&"SpriteButton");
    DAT_05701397 = '\x01';
  }
  if (node != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    uVar1 = System_String__op_Equality((node->fields).type,"Button",(MethodInfo *)0x0);
    uVar3 = (ulong)uVar1;
    if ((char)uVar1 == '\0') {
      uVar1 = System_String__op_Equality((node->fields).type,"SpriteButton",(MethodInfo *)0x0);
      uVar3 = (ulong)uVar1;
      if ((char)uVar1 == '\0') {
        uVar1 = System_String__op_Equality((node->fields).type,"InputField",(MethodInfo *)0x0);
        uVar3 = (ulong)uVar1;
        if ((char)uVar1 == '\0') {
          uVar1 = System_String__op_Equality((node->fields).type,"TextArea",(MethodInfo *)0x0);
          uVar3 = (ulong)uVar1;
          if ((char)uVar1 == '\0') {
            uVar1 = System_String__op_Equality((node->fields).type,"Dropdown",(MethodInfo *)0x0);
            uVar3 = (ulong)uVar1;
            if ((char)uVar1 == '\0') {
              bVar2 = System_String__op_Equality((node->fields).type,"Select",(MethodInfo *)0x0)
              ;
              return bVar2;
            }
          }
        }
      }
    }
    return (bool_conflict)CONCAT71((int7)(uVar3 >> 8),1);
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Search.GisketchSearchIndex$$IsExplicitSearch
// il2cpp: bool Gisketch_Aottg2UI_Search_GisketchSearchIndex__IsExplicitSearch (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* node, const MethodInfo* method);
// 0x3ade410

bool_conflict
Gisketch_Aottg2UI_Search_GisketchSearchIndex__IsExplicitSearch
          (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *node,MethodInfo *method)

{
  System_String_o *pSVar1;
  bool_conflict bVar2;
  uint uVar3;
  undefined8 unaff_RBP;
  
  if (node == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) goto LAB_03ade49d;
  pSVar1 = (node->fields).popover;
  if (pSVar1 == (System_String_o *)0x0) {
    uVar3 = 0;
  }
  else {
    bVar2 = System_String__IsNullOrEmpty((System_String_o *)pSVar1->fields,(MethodInfo *)0x0);
    uVar3 = (uint)CONCAT71((int7)((ulong)unaff_RBP >> 8),1);
    if ((char)bVar2 != '\0') {
      pSVar1 = (node->fields).popover;
      if (pSVar1 == (System_String_o *)0x0) {
LAB_03ade49d:
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      bVar2 = System_String__IsNullOrEmpty((System_String_o *)pSVar1[1].klass,(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        pSVar1 = (node->fields).popover;
        if (pSVar1 == (System_String_o *)0x0) goto LAB_03ade49d;
        bVar2 = System_String__IsNullOrEmpty((System_String_o *)pSVar1[1].fields,(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          pSVar1 = (node->fields).popover;
          if (pSVar1 == (System_String_o *)0x0) goto LAB_03ade49d;
          uVar3 = System_String__IsNullOrEmpty(pSVar1[1].monitor,(MethodInfo *)0x0);
          uVar3 = uVar3 ^ 1;
        }
      }
    }
  }
  return uVar3;
}


// Gisketch.Aottg2UI.Search.GisketchSearchIndex$$Kind
// il2cpp: System_String_o* Gisketch_Aottg2UI_Search_GisketchSearchIndex__Kind (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* node, const MethodInfo* method);
// 0x3ade4b0

System_String_o *
Gisketch_Aottg2UI_Search_GisketchSearchIndex__Kind
          (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *node,MethodInfo *method)

{
  System_String_o *pSVar1;
  bool_conflict bVar2;
  
  if (node == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
LAB_03ade4f2:
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  pSVar1 = (node->fields).popover;
  if (pSVar1 != (System_String_o *)0x0) {
    bVar2 = System_String__IsNullOrEmpty((System_String_o *)pSVar1[1].fields,(MethodInfo *)0x0);
    if ((char)bVar2 == '\0') {
      pSVar1 = (node->fields).popover;
      if (pSVar1 != (System_String_o *)0x0) {
        return (System_String_o *)pSVar1[1].fields;
      }
      goto LAB_03ade4f2;
    }
  }
  return (node->fields).type;
}


// Gisketch.Aottg2UI.Search.GisketchSearchIndex$$Title
// il2cpp: System_String_o* Gisketch_Aottg2UI_Search_GisketchSearchIndex__Title (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* node, const MethodInfo* method);
// 0x3ade500

System_String_o *
Gisketch_Aottg2UI_Search_GisketchSearchIndex__Title
          (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *node,MethodInfo *method)

{
  System_String_o *pSVar1;
  bool_conflict bVar2;
  System_String_o *value;
  System_String_o *value_00;
  
  if (node != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    pSVar1 = (node->fields).popover;
    if ((pSVar1 == (System_String_o *)0x0) ||
       (bVar2 = System_String__IsNullOrEmpty((System_String_o *)pSVar1->fields,(MethodInfo *)0x0),
       (char)bVar2 != '\0')) {
      pSVar1 = (node->fields).id;
      value_00 = (node->fields).text;
      value = (node->fields).placeholder;
      bVar2 = System_String__IsNullOrEmpty(value,(MethodInfo *)0x0);
      if (((char)bVar2 != '\0') && (value = pSVar1, pSVar1 == (System_String_o *)0x0)) {
        value = (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
      }
      bVar2 = System_String__IsNullOrEmpty(value_00,(MethodInfo *)0x0);
      if (((char)bVar2 != '\0') && (value_00 = value, value == (System_String_o *)0x0)) {
        value_00 = (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
      }
      return value_00;
    }
    pSVar1 = (node->fields).popover;
    if (pSVar1 != (System_String_o *)0x0) {
      return (System_String_o *)pSVar1->fields;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Search.GisketchSearchIndex$$Keywords
// il2cpp: System_String_o* Gisketch_Aottg2UI_Search_GisketchSearchIndex__Keywords (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* node, const MethodInfo* method);
// 0x3ade5c0

System_String_o *
Gisketch_Aottg2UI_Search_GisketchSearchIndex__Keywords
          (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *node,MethodInfo *method)

{
  System_String_array *value;
  bool_conflict bVar1;
  System_String_c *value_00;
  System_String_o *pSVar2;
  System_String_c *value_01;
  
  if (DAT_05701398 == '\0') {
    il2cpp_init_method_metadata(&" ");
    DAT_05701398 = '\x01';
  }
  if (node != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    pSVar2 = (node->fields).popover;
    if (pSVar2 == (System_String_o *)0x0) {
      value_01 = (System_String_c *)**(undefined8 **)(DAT_057110b0 + 0xb8);
      value = *(System_String_array **)&(node->fields).maxVisibleItems;
    }
    else {
      value_01 = pSVar2[1].klass;
      value = *(System_String_array **)&(node->fields).maxVisibleItems;
    }
    if (value == (System_String_array *)0x0) {
      value_00 = (System_String_c *)**(undefined8 **)(DAT_057110b0 + 0xb8);
    }
    else {
      value_00 = (System_String_c *)System_String__Join(" ",value,(MethodInfo *)0x0);
    }
    if (DAT_05701399 == '\0') {
      il2cpp_init_method_metadata(&" ");
      DAT_05701399 = '\x01';
    }
    bVar1 = System_String__IsNullOrEmpty((System_String_o *)value_01,(MethodInfo *)0x0);
    if ((char)bVar1 == '\0') {
      bVar1 = System_String__IsNullOrEmpty((System_String_o *)value_00,(MethodInfo *)0x0);
      if ((char)bVar1 == '\0') {
        pSVar2 = System_String__Concat
                           ((System_String_o *)value_01," ",(System_String_o *)value_00,
                            (MethodInfo *)0x0);
        return pSVar2;
      }
    }
    else {
      value_01 = value_00;
      if (value_00 == (System_String_c *)0x0) {
        value_01 = (System_String_c *)**(undefined8 **)(DAT_057110b0 + 0xb8);
      }
    }
    return (System_String_o *)value_01;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Search.GisketchSearchIndex$$ScreenTitle
// il2cpp: System_String_o* Gisketch_Aottg2UI_Search_GisketchSearchIndex__ScreenTitle (Gisketch_Aottg2UI_Data_GisketchScreenDefinition_o* screen, const MethodInfo* method);
// 0x3add820

System_String_o *
Gisketch_Aottg2UI_Search_GisketchSearchIndex__ScreenTitle
          (Gisketch_Aottg2UI_Data_GisketchScreenDefinition_o *screen,MethodInfo *method)

{
  bool_conflict bVar1;
  System_String_o *value;
  System_String_o *value_00;
  System_String_o *pSVar2;
  
  if (screen == (Gisketch_Aottg2UI_Data_GisketchScreenDefinition_o *)0x0) {
    value = (System_String_o *)0x0;
    value_00 = (System_String_o *)0x0;
    pSVar2 = (System_String_o *)0x0;
  }
  else {
    value_00 = (screen->fields).searchTitle;
    pSVar2 = (screen->fields).id;
    value = (screen->fields).title;
  }
  bVar1 = System_String__IsNullOrEmpty(value,(MethodInfo *)0x0);
  if (((char)bVar1 != '\0') && (value = pSVar2, pSVar2 == (System_String_o *)0x0)) {
    value = (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
  }
  bVar1 = System_String__IsNullOrEmpty(value_00,(MethodInfo *)0x0);
  if (((char)bVar1 != '\0') && (value_00 = value, value == (System_String_o *)0x0)) {
    value_00 = (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
  }
  return value_00;
}


// Gisketch.Aottg2UI.Search.GisketchSearchIndex$$SearchGroup
// il2cpp: System_String_o* Gisketch_Aottg2UI_Search_GisketchSearchIndex__SearchGroup (Gisketch_Aottg2UI_Data_GisketchScreenDefinition_o* screen, const MethodInfo* method);
// 0x3add7c0

System_String_o *
Gisketch_Aottg2UI_Search_GisketchSearchIndex__SearchGroup
          (Gisketch_Aottg2UI_Data_GisketchScreenDefinition_o *screen,MethodInfo *method)

{
  bool_conflict bVar1;
  System_String_o *value;
  System_String_o *pSVar2;
  
  if (screen == (Gisketch_Aottg2UI_Data_GisketchScreenDefinition_o *)0x0) {
    value = (System_String_o *)0x0;
    pSVar2 = (System_String_o *)0x0;
  }
  else {
    pSVar2 = (screen->fields).id;
    value = (screen->fields).searchGroup;
  }
  bVar1 = System_String__IsNullOrEmpty(value,(MethodInfo *)0x0);
  if (((char)bVar1 != '\0') && (value = pSVar2, pSVar2 == (System_String_o *)0x0)) {
    value = (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
  }
  return value;
}


// Gisketch.Aottg2UI.Search.GisketchSearchIndex$$Join
// il2cpp: System_String_o* Gisketch_Aottg2UI_Search_GisketchSearchIndex__Join (System_String_o* a, System_String_o* b, const MethodInfo* method);
// 0x3ade270

System_String_o *
Gisketch_Aottg2UI_Search_GisketchSearchIndex__Join
          (System_String_o *a,System_String_o *b,MethodInfo *method)

{
  bool_conflict bVar1;
  System_String_o *pSVar2;
  
  if (DAT_05701399 == '\0') {
    il2cpp_init_method_metadata(&" ");
    DAT_05701399 = '\x01';
  }
  bVar1 = System_String__IsNullOrEmpty(a,(MethodInfo *)0x0);
  if ((char)bVar1 == '\0') {
    bVar1 = System_String__IsNullOrEmpty(b,(MethodInfo *)0x0);
    if ((char)bVar1 == '\0') {
      pSVar2 = System_String__Concat(a," ",b,(MethodInfo *)0x0);
      return pSVar2;
    }
  }
  else {
    a = b;
    if (b == (System_String_o *)0x0) {
      a = (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
    }
  }
  return a;
}


// Gisketch.Aottg2UI.Search.GisketchSearchIndex$$First
// il2cpp: System_String_o* Gisketch_Aottg2UI_Search_GisketchSearchIndex__First (System_String_o* a, System_String_o* b, const MethodInfo* method);
// 0x3ade190

System_String_o *
Gisketch_Aottg2UI_Search_GisketchSearchIndex__First
          (System_String_o *a,System_String_o *b,MethodInfo *method)

{
  bool_conflict bVar1;
  
  bVar1 = System_String__IsNullOrEmpty(a,(MethodInfo *)0x0);
  if (((char)bVar1 != '\0') && (a = b, b == (System_String_o *)0x0)) {
    a = (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
  }
  return a;
}


// Gisketch.Aottg2UI.Search.GisketchSearchIndex$$Append
// il2cpp: void Gisketch_Aottg2UI_Search_GisketchSearchIndex__Append (System_Text_StringBuilder_o* builder, System_String_o* value, const MethodInfo* method);
// 0x3adea20

void Gisketch_Aottg2UI_Search_GisketchSearchIndex__Append
               (System_Text_StringBuilder_o *builder,System_String_o *value,MethodInfo *method)

{
  bool_conflict bVar1;
  System_Text_StringBuilder_o *__this;
  
  bVar1 = System_String__IsNullOrEmpty(value,(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    return;
  }
  if (builder != (System_Text_StringBuilder_o *)0x0) {
    __this = System_Text_StringBuilder__Append(builder,0x20,(MethodInfo *)0x0);
    if (__this != (System_Text_StringBuilder_o *)0x0) {
      System_Text_StringBuilder__Append(__this,value,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


