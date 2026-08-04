// Type: Gisketch.Aottg2UI.Search.GisketchSearchIndex
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Search/GisketchSearchIndex.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Search.GisketchSearchIndex.<>c__DisplayClass1_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Search_GisketchSearchIndex___c__DisplayClass1_0___ctor (Gisketch_Aottg2UI_Search_GisketchSearchIndex___c__DisplayClass1_0_o* __this, const MethodInfo* method);
// 0x3b487a0

void Gisketch_Aottg2UI_Search_GisketchSearchIndex___c__DisplayClass1_0___ctor
               (Gisketch_Aottg2UI_Search_GisketchSearchIndex___c__DisplayClass1_0_o *__this,MethodInfo *method
               )

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Search.GisketchSearchIndex.<>c__DisplayClass1_0$$<WithoutDuplicateMainMenuScreenButtons>b__0
// il2cpp: bool Gisketch_Aottg2UI_Search_GisketchSearchIndex___c__DisplayClass1_0___WithoutDuplicateMainMenuScreenButtons_b__0 (Gisketch_Aottg2UI_Search_GisketchSearchIndex___c__DisplayClass1_0_o* __this, Gisketch_Aottg2UI_Search_GisketchSearchEntry_o* entry, const MethodInfo* method);
// 0x3b49100

bool_conflict
Gisketch_Aottg2UI_Search_GisketchSearchIndex___c__DisplayClass1_0___WithoutDuplicateMainMenuScreenButtons_b__0
          (Gisketch_Aottg2UI_Search_GisketchSearchIndex___c__DisplayClass1_0_o *__this,
          Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *entry,MethodInfo *method)

{
  int32_t *piVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  ushort uVar6;
  ushort uVar7;
  uint uVar8;
  System_String_o *__this_00;
  System_String_c *pSVar9;
  Il2CppRuntimeInterfaceOffsetPair *pIVar10;
  System_Object_array *pSVar11;
  Il2CppClass *pIVar12;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  long lVar13;
  char cVar14;
  bool_conflict bVar15;
  int32_t iVar16;
  System_Collections_Generic_List_object__o *__this_05;
  System_Collections_Generic_HashSet_object__o *pSVar17;
  System_Collections_Generic_HashSet_string__o *screenTitles;
  System_Collections_Generic_List_object__o *__this_06;
  System_Collections_Generic_HashSet_object__o *__this_07;
  System_String_o *__this_08;
  VirtualInvokeData *pVVar18;
  long *plVar19;
  undefined8 *puVar20;
  MethodInfo *pMVar21;
  Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *pGVar22;
  Il2CppObject *__this_09;
  System_String_o *activeScreenId;
  long *item;
  MethodInfo *method_00;
  long lVar23;
  long lVar24;
  int iVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [12];
  long in_stack_ffffffffffffff50;
  _union_249689 _Var28;
  _union_249689 a_Stack_60 [2];
  Il2CppObject *pIStack_50;
  Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *pGStack_48;
  
  if (g_data_057a9cba == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Contains);
    il2cpp_runtime_helper_023445d0(&"screen");
    il2cpp_runtime_helper_023445d0(&"section");
    il2cpp_runtime_helper_023445d0(&"main-menu");
    il2cpp_runtime_helper_023445d0(&"main-menu-option-");
    g_data_057a9cba = '\x01';
  }
  if ((((entry != (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *)0x0) &&
       (bVar15 = System_String__Equals_3af50f0
                           ((entry->fields)._ScreenId_k__BackingField,"main-menu",5,(MethodInfo *)0x0),
       (char)bVar15 != '\0')) &&
      (bVar15 = System_String__Equals_3af50f0
                          ((entry->fields)._Kind_k__BackingField,"screen",5,(MethodInfo *)0x0),
      (char)bVar15 == '\0')) &&
     (bVar15 = System_String__Equals_3af50f0
                         ((entry->fields)._Kind_k__BackingField,"section",5,(MethodInfo *)0x0),
     (char)bVar15 == '\0')) {
    __this_08 = (System_String_o *)0x0;
    bVar15 = System_String__IsNullOrEmpty((entry->fields)._TargetId_k__BackingField,(MethodInfo *)0x0);
    if ((char)bVar15 == '\0') {
      __this_00 = (entry->fields)._TargetId_k__BackingField;
      if (__this_00 != (System_String_o *)0x0) {
        __this_08 = "main-menu-option-";
        bVar15 = System_String__StartsWith_3af5570(__this_00,"main-menu-option-",5,(MethodInfo *)0x0);
        if ((char)bVar15 == '\0') {
          return 0;
        }
        pSVar17 = (System_Collections_Generic_HashSet_object__o *)(__this->fields).screenTitles;
        if (pSVar17 != (System_Collections_Generic_HashSet_object__o *)0x0) {
          bVar15 = System_Collections_Generic_HashSet_object___Contains
                             (pSVar17,(Il2CppObject *)(entry->fields)._Title_k__BackingField,MethodInfo_Boolean_Contains);
          return bVar15;
        }
      }
      __this_09 = (Il2CppObject *)0x0;
      il2cpp_runtime_helper_022b2c90();
      pGStack_48 = entry;
      if (g_data_057a9cbb == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
        il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchSearchEntry_get_Current);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Add);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Contains);
        il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_System_String);
        il2cpp_runtime_helper_023445d0(&TypeInfo_HashSet_string);
        il2cpp_runtime_helper_023445d0(&TypeInfo_IDisposable);
        il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerable_GisketchSearchEntry);
        il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerator_GisketchSearchEntry);
        il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerator);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
        il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_Gisketch_Aottg2UI_Search_GisketchSea);
        il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_Gisketch_Aottg2UI_Search_GisketchSearchEntry);
        il2cpp_runtime_helper_023445d0(&TypeInfo_List_GisketchSearchEntry);
        il2cpp_runtime_helper_023445d0(&TypeInfo_StringComparer);
        g_data_057a9cbb = '\x01';
      }
      __this_05 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_GisketchSearchEntry);
      System_Collections_Generic_List_object____ctor(__this_05,MethodInfo_List_1_Gisketch_Aottg2UI_Search_GisketchSearchEntry);
      if (*(int *)(TypeInfo_StringComparer + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057a9c88 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_StringComparer);
        g_data_057a9c88 = '\x01';
        iVar25 = *(int *)(TypeInfo_StringComparer + 0xe4);
      }
      else {
        iVar25 = *(int *)(TypeInfo_StringComparer + 0xe4);
      }
      if (iVar25 == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pMVar21 = *(MethodInfo **)(*(long *)(TypeInfo_StringComparer + 0xb8) + 0x18);
      pSVar17 = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_HashSet_string);
      System_Collections_Generic_HashSet_object____ctor_33e0600
                (pSVar17,(System_Collections_Generic_IEqualityComparer_T__o *)pMVar21,MethodInfo_HashSet_1_System_String);
      screenTitles = Gisketch_Aottg2UI_Search_GisketchSearchResults__ScreenTitles
                               ((System_Collections_Generic_IEnumerable_GisketchSearchEntry__o *)__this_09,
                                pMVar21);
      __this_06 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_GisketchSearchEntry);
      System_Collections_Generic_List_object____ctor(__this_06,MethodInfo_List_1_Gisketch_Aottg2UI_Search_GisketchSearchEntry);
      if (g_data_057a9c88 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_StringComparer);
        g_data_057a9c88 = '\x01';
        iVar25 = *(int *)(TypeInfo_StringComparer + 0xe4);
      }
      else {
        iVar25 = *(int *)(TypeInfo_StringComparer + 0xe4);
      }
      if (iVar25 == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      item = *(long **)(*(long *)(TypeInfo_StringComparer + 0xb8) + 0x18);
      __this_07 = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_HashSet_string);
      System_Collections_Generic_HashSet_object____ctor_33e0600
                (__this_07,(System_Collections_Generic_IEqualityComparer_T__o *)item,MethodInfo_HashSet_1_System_String);
      if (__this_08 == (System_String_o *)0x0) {
        if (g_data_057a9cc0 == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_Empty_d__6);
          g_data_057a9cc0 = '\x01';
        }
        __this_08 = (System_String_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Empty_d__6);
        System_Object___ctor((Il2CppObject *)__this_08,(MethodInfo *)0x0);
        (__this_08->fields)._stringLength = -2;
        iVar16 = System_Environment__get_CurrentManagedThreadId((MethodInfo *)0x0);
        *(int32_t *)&__this_08[1].monitor = iVar16;
        if (__this_08 == (System_String_o *)0x0) goto label_03b49dcf;
      }
      pSVar9 = __this_08->klass;
      uVar2._0_1_ = (pSVar9->_2).rank;
      uVar2._1_1_ = (pSVar9->_2).minimumAlignment;
      if ((ulong)uVar2 != 0) {
        pIVar10 = (pSVar9->_1).interfaceOffsets;
        lVar23 = 0;
        do {
          if (*(long *)((long)&pIVar10->interfaceType + lVar23) == TypeInfo_IEnumerable_GisketchSearchEntry) {
            pVVar18 = &(pSVar9->vtable)._0_Equals + *(int *)((long)&pIVar10->offset + lVar23);
            goto label_03b4956f;
          }
          lVar23 = lVar23 + 0x10;
        } while ((ulong)uVar2 << 4 != lVar23);
      }
      pVVar18 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(__this_08,TypeInfo_IEnumerable_GisketchSearchEntry,0);
label_03b4956f:
      plVar19 = (long *)(*pVVar18->methodPtr)(__this_08,pVVar18->method);
      if (plVar19 == (long *)0x0) goto label_03b49dd4;
      item = &TypeInfo_IEnumerator;
      in_stack_ffffffffffffff50 = 0;
      do {
        lVar23 = *plVar19;
        if ((ulong)*(ushort *)(lVar23 + 0x12e) != 0) {
          lVar24 = 0;
          do {
            if (*(long *)(*(long *)(lVar23 + 0xb0) + lVar24) == TypeInfo_IEnumerator) {
              puVar20 = (undefined8 *)
                        ((long)*(int *)(*(long *)(lVar23 + 0xb0) + 8 + lVar24) * 0x10 + lVar23 + 0x138);
              goto label_03b495f3;
            }
            lVar24 = lVar24 + 0x10;
          } while ((ulong)*(ushort *)(lVar23 + 0x12e) << 4 != lVar24);
        }
        puVar20 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar19,TypeInfo_IEnumerator,0);
label_03b495f3:
        cVar14 = (*(code *)*puVar20)();
        if (cVar14 == '\0') {
          item = (long *)&g_data_00000005;
          if (plVar19 == (long *)0x0) goto label_03b497a6;
          lVar23 = *plVar19;
          if ((ulong)*(ushort *)(lVar23 + 0x12e) == 0) goto label_03b4977f;
          lVar24 = 0;
          goto label_03b49770;
        }
        lVar23 = *plVar19;
        if ((ulong)*(ushort *)(lVar23 + 0x12e) != 0) {
          lVar24 = 0;
          do {
            if (*(long *)(*(long *)(lVar23 + 0xb0) + lVar24) == TypeInfo_IEnumerator_GisketchSearchEntry) {
              pMVar21 = (MethodInfo *)
                        ((long)*(int *)(*(long *)(lVar23 + 0xb0) + 8 + lVar24) * 0x10 + lVar23 + 0x138);
              goto label_03b49663;
            }
            lVar24 = lVar24 + 0x10;
          } while ((ulong)*(ushort *)(lVar23 + 0x12e) << 4 != lVar24);
        }
        pMVar21 = (MethodInfo *)il2cpp_runtime_helper_02300d20(plVar19,TypeInfo_IEnumerator_GisketchSearchEntry,0);
label_03b49663:
        method_00 = (MethodInfo *)pMVar21->virtualMethodPointer;
        pGVar22 = (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *)(*pMVar21->methodPointer)();
        if (((pGVar22 != (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *)0x0) &&
            (bVar15 = Gisketch_Aottg2UI_Search_GisketchSearchResults__IsLiveUsable(pGVar22,method_00),
            (char)bVar15 != '\0')) &&
           (bVar15 = Gisketch_Aottg2UI_Search_GisketchSearchResults__IsDuplicateMainMenuScreenButton
                               (pGVar22,activeScreenId,screenTitles,pMVar21), lVar23 = MethodInfo_Void_Add,
           (char)bVar15 == '\0')) {
          if (__this_06 == (System_Collections_Generic_List_object__o *)0x0) goto label_03b49dbb;
          piVar1 = &(__this_06->fields)._version;
          *piVar1 = *piVar1 + 1;
          pSVar11 = (__this_06->fields)._items;
          if (pSVar11 == (System_Object_array *)0x0) goto label_03b49dc0;
          uVar8 = (__this_06->fields)._size;
          if (uVar8 < (uint)pSVar11->max_length) {
            (__this_06->fields)._size = uVar8 + 1;
            pSVar11->m_Items[(int)uVar8] = (Il2CppObject *)pGVar22;
            il2cpp_runtime_helper_022b4080(pSVar11->m_Items + (int)uVar8);
          }
          else {
            System_Collections_Generic_List_object___AddWithResize
                      (__this_06,(Il2CppObject *)pGVar22,
                       *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar23 + 0x20) + 0xc0) + 0x70));
          }
          bVar15 = System_String__IsNullOrEmpty((pGVar22->fields)._TargetId_k__BackingField,(MethodInfo *)0x0)
          ;
          if ((char)bVar15 == '\0') {
            if (__this_07 == (System_Collections_Generic_HashSet_object__o *)0x0) {
              do {
                il2cpp_runtime_helper_022b2c90();
label_03b49dca:
                il2cpp_runtime_helper_022b2c90();
label_03b49dcf:
                do {
                  il2cpp_runtime_helper_022b2c90();
label_03b49dd4:
                  il2cpp_runtime_helper_022b2c90();
label_03b49dd9:
                  il2cpp_runtime_helper_022fefe0();
label_03b49dde:
                  il2cpp_runtime_helper_022b2c90();
                  do {
                    auVar27 = il2cpp_runtime_helper_022fefe0();
                    iVar25 = 0;
                    if (auVar27._8_4_ != 1) {
                      lVar24 = auVar27._0_8_;
                      lVar23 = 0;
                      goto joined_r0x03b4a097;
                    }
                    plVar19 = (long *)__cxa_begin_catch();
                    lVar23 = *plVar19;
                    __cxa_end_catch();
label_03b49ac8:
                    if ((Il2CppObject *)item != (Il2CppObject *)0x0) {
                      pIVar12 = ((Il2CppObject *)item)->klass;
                      uVar6._0_1_ = (pIVar12->_2).rank;
                      uVar6._1_1_ = (pIVar12->_2).minimumAlignment;
                      if ((ulong)uVar6 != 0) {
                        pIVar10 = (pIVar12->_1).interfaceOffsets;
                        lVar24 = 0;
                        do {
                          if (*(long *)((long)&pIVar10->interfaceType + lVar24) == TypeInfo_IDisposable) {
                            pVVar18 = pIVar12->vtable + *(int *)((long)&pIVar10->offset + lVar24);
                            goto label_03b49b2d;
                          }
                          lVar24 = lVar24 + 0x10;
                        } while ((ulong)uVar6 << 4 != lVar24);
                      }
                      pVVar18 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(item,TypeInfo_IDisposable,0);
label_03b49b2d:
                      (*pVVar18->methodPtr)(item,pVVar18->method);
                    }
                  } while (lVar23 != 0);
                  if ((iVar25 != 10) && (iVar25 != 0)) goto label_03b49d86;
                } while (__this_06 == (System_Collections_Generic_List_object__o *)0x0);
                System_Collections_Generic_List_object___GetEnumerator
                          ((System_Collections_Generic_List_Enumerator_T__o *)a_Stack_60,__this_06,
                           MethodInfo_List_1_T_Enumerator_Gisketch_Aottg2UI_Search_GisketchSea);
                item = (long *)pIStack_50;
                _Var28 = a_Stack_60[0];
                if (pSVar17 == (System_Collections_Generic_HashSet_object__o *)0x0) {
                  while( true ) {
                    __this_02.fields._8_8_ = pSVar17;
                    __this_02.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff50
                    ;
                    __this_02.fields._current = _Var28.genericMethod;
                    bVar15 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                       (__this_02,(MethodInfo_321A1D0 *)&stack0xffffffffffffff60);
                    if ((char)bVar15 == '\0') goto label_03b49d72;
                    if ((Il2CppObject *)item == (Il2CppObject *)0x0) goto label_03b49da2;
                    bVar15 = System_String__IsNullOrEmpty
                                       (((Il2CppObject *)((long)item + 0x40))->monitor,(MethodInfo *)0x0);
                    lVar23 = MethodInfo_Void_Add;
                    if ((char)bVar15 == '\0') goto label_03b49db6;
                    if (__this_05 == (System_Collections_Generic_List_object__o *)0x0) goto label_03b49d6d;
                    piVar1 = &(__this_05->fields)._version;
                    *piVar1 = *piVar1 + 1;
                    pSVar11 = (__this_05->fields)._items;
                    if (pSVar11 == (System_Object_array *)0x0) break;
                    uVar8 = (__this_05->fields)._size;
                    if (uVar8 < (uint)pSVar11->max_length) {
                      (__this_05->fields)._size = uVar8 + 1;
                      pSVar11->m_Items[(int)uVar8] = (Il2CppObject *)item;
                      il2cpp_runtime_helper_022b4080(pSVar11->m_Items + (int)uVar8,item);
                    }
                    else {
                      System_Collections_Generic_List_object___AddWithResize
                                (__this_05,(Il2CppObject *)item,
                                 *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar23 + 0x20) + 0xc0) + 0x70));
                    }
                  }
                }
                else {
                  if (__this_05 == (System_Collections_Generic_List_object__o *)0x0) {
                    while( true ) {
                      __this_03.fields._8_8_ = pSVar17;
                      __this_03.fields._list =
                           (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff50;
                      __this_03.fields._current = _Var28.genericMethod;
                      bVar15 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                         (__this_03,(MethodInfo_321A1D0 *)&stack0xffffffffffffff60);
                      if ((char)bVar15 == '\0') goto label_03b49d72;
                      if ((Il2CppObject *)item == (Il2CppObject *)0x0) break;
                      bVar15 = System_String__IsNullOrEmpty
                                         (((Il2CppObject *)((long)item + 0x40))->monitor,(MethodInfo *)0x0);
                      if (((char)bVar15 != '\0') ||
                         (bVar15 = System_Collections_Generic_HashSet_object___Contains
                                             (pSVar17,((Il2CppObject *)((long)item + 0x40))->monitor,
                                              MethodInfo_Boolean_Contains), (char)bVar15 == '\0')) goto label_03b49d6d;
                    }
                  }
                  else {
                    while( true ) {
                      __this_01.fields._8_8_ = pSVar17;
                      __this_01.fields._list =
                           (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff50;
                      __this_01.fields._current = _Var28.genericMethod;
                      bVar15 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                         (__this_01,(MethodInfo_321A1D0 *)&stack0xffffffffffffff60);
                      if ((char)bVar15 == '\0') goto label_03b49d72;
                      if ((Il2CppObject *)item == (Il2CppObject *)0x0) break;
                      bVar15 = System_String__IsNullOrEmpty
                                         (((Il2CppObject *)((long)item + 0x40))->monitor,(MethodInfo *)0x0);
                      if (((char)bVar15 != '\0') ||
                         (bVar15 = System_Collections_Generic_HashSet_object___Contains
                                             (pSVar17,((Il2CppObject *)((long)item + 0x40))->monitor,
                                              MethodInfo_Boolean_Contains), (char)bVar15 == '\0')) {
                        lVar23 = MethodInfo_Void_Add;
                        piVar1 = &(__this_05->fields)._version;
                        *piVar1 = *piVar1 + 1;
                        pSVar11 = (__this_05->fields)._items;
                        if (pSVar11 == (System_Object_array *)0x0) goto label_03b49dac;
                        uVar8 = (__this_05->fields)._size;
                        if (uVar8 < (uint)pSVar11->max_length) {
                          (__this_05->fields)._size = uVar8 + 1;
                          pSVar11->m_Items[(int)uVar8] = (Il2CppObject *)item;
                          il2cpp_runtime_helper_022b4080(pSVar11->m_Items + (int)uVar8,item);
                        }
                        else {
                          System_Collections_Generic_List_object___AddWithResize
                                    (__this_05,(Il2CppObject *)item,
                                     *(MethodInfo_362C220 **)
                                      (*(long *)(*(long *)(lVar23 + 0x20) + 0xc0) + 0x70));
                        }
                      }
                    }
                  }
label_03b49da2:
                  il2cpp_runtime_helper_022b2c90();
label_03b49da7:
                  il2cpp_runtime_helper_022b2c90();
                }
label_03b49dac:
                il2cpp_runtime_helper_022b2c90();
label_03b49db1:
                il2cpp_runtime_helper_022b2c90();
label_03b49db6:
                il2cpp_runtime_helper_022b2c90();
label_03b49dbb:
                il2cpp_runtime_helper_022b2c90();
label_03b49dc0:
                il2cpp_runtime_helper_022b2c90();
              } while( true );
            }
            System_Collections_Generic_HashSet_object___Add
                      (__this_07,(Il2CppObject *)(pGVar22->fields)._TargetId_k__BackingField,MethodInfo_Boolean_Add);
          }
        }
      } while( true );
    }
  }
  return 0;
  while (lVar24 = lVar24 + 0x10, (ulong)*(ushort *)(lVar23 + 0x12e) << 4 != lVar24) {
label_03b49770:
    if (*(long *)(*(long *)(lVar23 + 0xb0) + lVar24) == TypeInfo_IDisposable) {
      puVar20 = (undefined8 *)(lVar23 + (long)*(int *)(*(long *)(lVar23 + 0xb0) + 8 + lVar24) * 0x10 + 0x138);
      goto label_03b4979d;
    }
  }
label_03b4977f:
  puVar20 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar19,TypeInfo_IDisposable,0);
label_03b4979d:
  (*(code *)*puVar20)(plVar19);
label_03b497a6:
  if (in_stack_ffffffffffffff50 != 0) goto label_03b49dd9;
  if (__this_09 == (Il2CppObject *)0x0) {
    if (g_data_057a9cc0 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Empty_d__6);
      g_data_057a9cc0 = '\x01';
    }
    __this_09 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_Empty_d__6);
    System_Object___ctor(__this_09,(MethodInfo *)0x0);
    *(undefined4 *)&__this_09[1].klass = 0xfffffffe;
    iVar16 = System_Environment__get_CurrentManagedThreadId((MethodInfo *)0x0);
    *(int32_t *)&__this_09[2].klass = iVar16;
    item = (long *)0x0;
    if (__this_09 == (Il2CppObject *)0x0) goto label_03b49dcf;
  }
  pIVar12 = __this_09->klass;
  uVar3._0_1_ = (pIVar12->_2).rank;
  uVar3._1_1_ = (pIVar12->_2).minimumAlignment;
  if ((ulong)uVar3 != 0) {
    pIVar10 = (pIVar12->_1).interfaceOffsets;
    lVar23 = 0;
    do {
      if (*(long *)((long)&pIVar10->interfaceType + lVar23) == TypeInfo_IEnumerable_GisketchSearchEntry) {
        pVVar18 = pIVar12->vtable + *(int *)((long)&pIVar10->offset + lVar23);
        goto label_03b49881;
      }
      lVar23 = lVar23 + 0x10;
    } while ((ulong)uVar3 << 4 != lVar23);
  }
  pVVar18 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(__this_09,TypeInfo_IEnumerable_GisketchSearchEntry,0);
label_03b49881:
  item = (long *)(*pVVar18->methodPtr)(__this_09,pVVar18->method);
  if ((Il2CppObject *)item == (Il2CppObject *)0x0) goto label_03b49dde;
  do {
    do {
      pIVar12 = ((Il2CppObject *)item)->klass;
      uVar4._0_1_ = (pIVar12->_2).rank;
      uVar4._1_1_ = (pIVar12->_2).minimumAlignment;
      if ((ulong)uVar4 != 0) {
        pIVar10 = (pIVar12->_1).interfaceOffsets;
        lVar23 = 0;
        do {
          if (*(long *)((long)&pIVar10->interfaceType + lVar23) == TypeInfo_IEnumerator) {
            pVVar18 = pIVar12->vtable + *(int *)((long)&pIVar10->offset + lVar23);
            goto label_03b49903;
          }
          lVar23 = lVar23 + 0x10;
        } while ((ulong)uVar4 << 4 != lVar23);
      }
      pVVar18 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(item,TypeInfo_IEnumerator,0);
label_03b49903:
      cVar14 = (*pVVar18->methodPtr)(item,pVVar18->method);
      if (cVar14 == '\0') {
        iVar25 = 10;
        lVar23 = 0;
        goto label_03b49ac8;
      }
      pIVar12 = ((Il2CppObject *)item)->klass;
      uVar5._0_1_ = (pIVar12->_2).rank;
      uVar5._1_1_ = (pIVar12->_2).minimumAlignment;
      if ((ulong)uVar5 != 0) {
        pIVar10 = (pIVar12->_1).interfaceOffsets;
        lVar23 = 0;
        do {
          if (*(long *)((long)&pIVar10->interfaceType + lVar23) == TypeInfo_IEnumerator_GisketchSearchEntry) {
            pVVar18 = pIVar12->vtable + *(int *)((long)&pIVar10->offset + lVar23);
            goto label_03b49973;
          }
          lVar23 = lVar23 + 0x10;
        } while ((ulong)uVar5 << 4 != lVar23);
      }
      pVVar18 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(item,TypeInfo_IEnumerator_GisketchSearchEntry,0);
label_03b49973:
      auVar26 = (*pVVar18->methodPtr)(item,pVVar18->method);
      pGVar22 = auVar26._0_8_;
      bVar15 = Gisketch_Aottg2UI_Search_GisketchSearchResults__IsActiveControl
                         (pGVar22,activeScreenId,auVar26._8_8_);
      if ((char)bVar15 == '\0') break;
      if (pGVar22 == (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *)0x0) goto label_03b49da7;
      bVar15 = System_String__IsNullOrEmpty((pGVar22->fields)._TargetId_k__BackingField,(MethodInfo *)0x0);
      if ((char)bVar15 != '\0') break;
      if (__this_07 == (System_Collections_Generic_HashSet_object__o *)0x0) goto label_03b49db1;
      bVar15 = System_Collections_Generic_HashSet_object___Contains
                         (__this_07,(Il2CppObject *)(pGVar22->fields)._TargetId_k__BackingField,MethodInfo_Boolean_Contains);
    } while ((char)bVar15 == '\0');
    lVar23 = MethodInfo_Void_Add;
    if (__this_05 == (System_Collections_Generic_List_object__o *)0x0) {
      il2cpp_runtime_helper_022b2c90();
label_03b49d9d:
      il2cpp_runtime_helper_022b2c90();
      goto label_03b49da2;
    }
    piVar1 = &(__this_05->fields)._version;
    *piVar1 = *piVar1 + 1;
    pSVar11 = (__this_05->fields)._items;
    if (pSVar11 == (System_Object_array *)0x0) goto label_03b49d9d;
    uVar8 = (__this_05->fields)._size;
    if (uVar8 < (uint)pSVar11->max_length) {
      (__this_05->fields)._size = uVar8 + 1;
      pSVar11->m_Items[(int)uVar8] = (Il2CppObject *)pGVar22;
      il2cpp_runtime_helper_022b4080();
    }
    else {
      System_Collections_Generic_List_object___AddWithResize
                (__this_05,(Il2CppObject *)pGVar22,
                 *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar23 + 0x20) + 0xc0) + 0x70));
    }
    if (((pGVar22 != (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *)0x0) &&
        (bVar15 = System_String__IsNullOrEmpty((pGVar22->fields)._ScreenId_k__BackingField,(MethodInfo *)0x0),
        (char)bVar15 == '\0')) &&
       ((bVar15 = System_String__IsNullOrEmpty(activeScreenId,(MethodInfo *)0x0), (char)bVar15 == '\0' &&
        ((bVar15 = System_String__Equals_3af50f0
                             ((pGVar22->fields)._ScreenId_k__BackingField,activeScreenId,5,(MethodInfo *)0x0),
         (char)bVar15 != '\0' &&
         (bVar15 = System_String__IsNullOrEmpty((pGVar22->fields)._TargetId_k__BackingField,(MethodInfo *)0x0)
         , (char)bVar15 == '\0')))))) {
      if (pSVar17 == (System_Collections_Generic_HashSet_object__o *)0x0) goto label_03b49dca;
      System_Collections_Generic_HashSet_object___Add
                (pSVar17,(Il2CppObject *)(pGVar22->fields)._TargetId_k__BackingField,MethodInfo_Boolean_Add);
    }
  } while( true );
joined_r0x03b4a097:
  lVar13 = lVar24;
  if ((Il2CppObject *)item != (Il2CppObject *)0x0) {
    pIVar12 = ((Il2CppObject *)item)->klass;
    uVar7._0_1_ = (pIVar12->_2).rank;
    uVar7._1_1_ = (pIVar12->_2).minimumAlignment;
    if ((ulong)uVar7 != 0) {
      pIVar10 = (pIVar12->_1).interfaceOffsets;
      lVar24 = 0;
      do {
        if (*(long *)((long)&pIVar10->interfaceType + lVar24) == TypeInfo_IDisposable) {
          pVVar18 = pIVar12->vtable + *(int *)((long)&pIVar10->offset + lVar24);
          goto label_03b4a0ed;
        }
        lVar24 = lVar24 + 0x10;
      } while ((ulong)uVar7 << 4 != lVar24);
    }
    pVVar18 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(item,TypeInfo_IDisposable,0);
label_03b4a0ed:
    (*pVVar18->methodPtr)(item,pVVar18->method);
  }
  if (lVar23 == 0) {
    _Unwind_Resume(lVar13);
  }
  lVar24 = il2cpp_runtime_helper_022fefe0();
  lVar23 = lVar13;
  goto joined_r0x03b4a097;
label_03b49d6d:
  il2cpp_runtime_helper_022b2c90();
label_03b49d72:
  __this_04.fields._8_8_ = pSVar17;
  __this_04.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff50;
  __this_04.fields._current = _Var28.genericMethod;
  System_Collections_Generic_List_Enumerator_object___Dispose
            (__this_04,(MethodInfo_321A1C0 *)&stack0xffffffffffffff60);
label_03b49d86:
  return (bool_conflict)__this_05;
}


// Gisketch.Aottg2UI.Search.GisketchSearchIndex$$EntriesFor
// il2cpp: System_Collections_Generic_List_GisketchSearchEntry__o* Gisketch_Aottg2UI_Search_GisketchSearchIndex__EntriesFor (Gisketch_Aottg2UI_Data_GisketchManifestDefinition_o* manifest, System_String_o* activeScreenId, const MethodInfo* method);
// 0x3b47880

System_Collections_Generic_List_GisketchSearchEntry__o *
Gisketch_Aottg2UI_Search_GisketchSearchIndex__EntriesFor
          (Gisketch_Aottg2UI_Data_GisketchManifestDefinition_o *manifest,System_String_o *activeScreenId,
          MethodInfo *method)

{
  int32_t *piVar1;
  int iVar2;
  uint uVar3;
  Gisketch_Aottg2UI_Data_GisketchScreenDefinition_array *method_00;
  System_String_o *pSVar4;
  Gisketch_Aottg2UI_Search_GisketchSearchEntry_array *pGVar5;
  System_Object_array *items;
  long lVar6;
  bool_conflict bVar7;
  Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *entries;
  Gisketch_Aottg2UI_Data_GisketchScreenDefinition_o *pGVar8;
  Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *__this;
  Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *pGVar9;
  System_Func_T__string__o *getId;
  System_Collections_Generic_List_GisketchSearchEntry__o *pSVar10;
  MethodInfo *method_01;
  Il2CppClass *pIVar11;
  System_String_o *value;
  Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *value_00;
  System_String_o *value_01;
  Il2CppClass *screen;
  MethodInfo *method_02;
  ulong uVar12;
  Il2CppClass *value_02;
  MethodInfo *in_stack_ffffffffffffff98;
  
  if (g_data_057a9cb2 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchSearchEntry);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_System_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HashSet_string);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_Gisketch_Aottg2UI_Search_GisketchSearchEntry);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_GisketchSearchEntry);
    il2cpp_runtime_helper_023445d0(&TypeInfo_StringComparer);
    il2cpp_runtime_helper_023445d0(&"screen");
    il2cpp_runtime_helper_023445d0(&"menuList");
    g_data_057a9cb2 = '\x01';
  }
  entries = (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_GisketchSearchEntry);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)entries,MethodInfo_List_1_Gisketch_Aottg2UI_Search_GisketchSearchEntry);
  if ((manifest == (Gisketch_Aottg2UI_Data_GisketchManifestDefinition_o *)0x0) ||
     (pGVar8 = Gisketch_Aottg2UI_Data_GisketchManifestDefinition__FindScreen
                         (manifest,activeScreenId,method_01),
     pGVar8 == (Gisketch_Aottg2UI_Data_GisketchScreenDefinition_o *)0x0)) {
    value_02 = (Il2CppClass *)0x0;
    pIVar11 = (Il2CppClass *)0x0;
  }
  else {
    pIVar11 = (Il2CppClass *)(pGVar8->fields).id;
    value_02 = (Il2CppClass *)(pGVar8->fields).searchGroup;
  }
  bVar7 = System_String__IsNullOrEmpty((System_String_o *)value_02,(MethodInfo *)0x0);
  if (((char)bVar7 != '\0') && (value_02 = pIVar11, pIVar11 == (Il2CppClass *)0x0)) {
    value_02 = (Il2CppClass *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  }
  if (manifest == (Gisketch_Aottg2UI_Data_GisketchManifestDefinition_o *)0x0) {
    return (System_Collections_Generic_List_GisketchSearchEntry__o *)entries;
  }
  if ((manifest->fields).screens == (Gisketch_Aottg2UI_Data_GisketchScreenDefinition_array *)0x0) {
    return (System_Collections_Generic_List_GisketchSearchEntry__o *)entries;
  }
  bVar7 = System_String__IsNullOrEmpty((System_String_o *)value_02,(MethodInfo *)0x0);
  if ((char)bVar7 != '\0') {
    return (System_Collections_Generic_List_GisketchSearchEntry__o *)entries;
  }
  if (*(int *)(TypeInfo_StringComparer + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (g_data_057a9c88 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_StringComparer);
    g_data_057a9c88 = '\x01';
    iVar2 = *(int *)(TypeInfo_StringComparer + 0xe4);
  }
  else {
    iVar2 = *(int *)(TypeInfo_StringComparer + 0xe4);
  }
  if (iVar2 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pIVar11 = *(Il2CppClass **)(*(long *)(TypeInfo_StringComparer + 0xb8) + 0x18);
  __this = (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *)il2cpp_runtime_helper_023052d0(TypeInfo_HashSet_string);
  value_00 = __this;
  System_Collections_Generic_HashSet_object____ctor_33e0600
            ((System_Collections_Generic_HashSet_object__o *)__this,
             (System_Collections_Generic_IEqualityComparer_T__o *)pIVar11,MethodInfo_HashSet_1_System_String);
  method_00 = (manifest->fields).screens;
  if (method_00 != (Gisketch_Aottg2UI_Data_GisketchScreenDefinition_array *)0x0) {
    if ((int)(char *)method_00->max_length < 1) {
label_03b47c84:
      pSVar10 = Gisketch_Aottg2UI_Search_GisketchSearchIndex__WithoutDuplicateMainMenuScreenButtons
                          ((System_Collections_Generic_List_GisketchSearchEntry__o *)entries,
                           (System_Collections_Generic_HashSet_string__o *)__this,(MethodInfo *)method_00);
      return pSVar10;
    }
    uVar12 = 0;
    if (((ulong)method_00->max_length & 0xffffffff) != 0) {
      do {
        screen = (Il2CppClass *)method_00->m_Items[uVar12];
        if (screen != (Il2CppClass *)0x0) {
          pGVar9 = (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *)(screen->_1).name;
          value_00 = *(Gisketch_Aottg2UI_Search_GisketchSearchEntry_o **)&(screen->_1).byval_arg.bits;
          bVar7 = System_String__IsNullOrEmpty((System_String_o *)value_00,(MethodInfo *)0x0);
          if (((char)bVar7 != '\0') &&
             (value_00 = pGVar9, pGVar9 == (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *)0x0)) {
            value_00 = (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *)
                       **(undefined8 **)(g_data_057b9c00 + 0xb8);
          }
          pIVar11 = value_02;
          bVar7 = System_String__Equals_3af50f0
                            ((System_String_o *)value_00,(System_String_o *)value_02,5,(MethodInfo *)0x0);
          if ((char)bVar7 != '\0') {
            value = (screen->_1).byval_arg.data;
            pSVar4 = (System_String_o *)(screen->_1).name;
            value_01 = (System_String_o *)(screen->_1).namespaze;
            bVar7 = System_String__IsNullOrEmpty(value_01,(MethodInfo *)0x0);
            if (((char)bVar7 != '\0') && (value_01 = pSVar4, pSVar4 == (System_String_o *)0x0)) {
              value_01 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
            }
            bVar7 = System_String__IsNullOrEmpty(value,(MethodInfo *)0x0);
            if (((char)bVar7 != '\0') && (value = value_01, value_01 == (System_String_o *)0x0)) {
              value = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
            }
            pIVar11 = (Il2CppClass *)0x0;
            bVar7 = System_String__IsNullOrEmpty(value,(MethodInfo *)0x0);
            if ((char)bVar7 == '\0') {
              value_00 = __this;
              if (__this == (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *)0x0) goto label_03b47d10;
              System_Collections_Generic_HashSet_object___Add
                        ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)value,
                         MethodInfo_Boolean_Add);
            }
            pIVar11 = (Il2CppClass *)(screen->_1).name;
            method_02 = (MethodInfo *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
            pGVar9 = (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchSearchEntry);
            value_00 = pGVar9;
            Gisketch_Aottg2UI_Search_GisketchSearchEntry___ctor_3a46f80
                      (pGVar9,(System_String_o *)pIVar11,value,(System_String_o *)value_02,
                       (System_String_o *)method_02,(System_String_o *)method_02,(System_String_o *)pIVar11,
                       value,(System_String_o *)method_02,"menuList","screen",
                       (UnityEngine_GameObject_o *)0x0,in_stack_ffffffffffffff98);
            lVar6 = MethodInfo_Void_Add;
            if (entries == (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *)0x0) goto label_03b47d10;
            piVar1 = (int32_t *)((long)&(entries->fields)._Target_k__BackingField + 4);
            *piVar1 = *piVar1 + 1;
            pGVar5 = (Gisketch_Aottg2UI_Search_GisketchSearchEntry_array *)
                     (entries->fields)._Node_k__BackingField;
            if (pGVar5 == (Gisketch_Aottg2UI_Search_GisketchSearchEntry_array *)0x0) goto label_03b47d10;
            uVar3 = *(uint *)&(entries->fields)._Target_k__BackingField;
            if (uVar3 < (uint)pGVar5->max_length) {
              *(uint *)&(entries->fields)._Target_k__BackingField = uVar3 + 1;
              pGVar5->m_Items[(int)uVar3] = pGVar9;
              il2cpp_runtime_helper_022b4080(pGVar5->m_Items + (int)uVar3,pGVar9);
            }
            else {
              System_Collections_Generic_List_object___AddWithResize
                        ((System_Collections_Generic_List_object__o *)entries,(Il2CppObject *)pGVar9,
                         *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
            }
            value_00 = entries;
            Gisketch_Aottg2UI_Search_GisketchSearchIndex__AddNodeEntries
                      ((System_Collections_Generic_List_GisketchSearchEntry__o *)entries,
                       (Gisketch_Aottg2UI_Data_GisketchScreenDefinition_o *)screen,
                       (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)(screen->_1).declaringType,
                       (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8),
                       (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8),method_02);
            pIVar11 = screen;
          }
        }
        uVar12 = uVar12 + 1;
        if ((long)(int)*(uint *)&method_00->max_length <= (long)uVar12) goto label_03b47c84;
      } while (uVar12 < *(uint *)&method_00->max_length);
    }
    il2cpp_runtime_helper_022b2ca0();
  }
label_03b47d10:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057a9d3e == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_GisketchScreenDefinition_string);
    il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchScreenDefinition_FindById_GisketchScreenDefiniti);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_FindScreen_b__8_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057a9d3e = '\x01';
  }
  items = (System_Object_array *)(value_00->fields)._ScreenTitle_k__BackingField;
  if (*(int *)(TypeInfo_c + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    getId = *(System_Func_T__string__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
  }
  else {
    getId = *(System_Func_T__string__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
  }
  if (getId == (System_Func_T__string__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    getId = (System_Func_T__string__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_GisketchScreenDefinition_string);
    System_Func_object__object____ctor();
    lVar6 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__string__o **)(lVar6 + 8) = getId;
    il2cpp_runtime_helper_022b4080(lVar6 + 8,getId);
  }
  pSVar10 = (System_Collections_Generic_List_GisketchSearchEntry__o *)
            Gisketch_Aottg2UI_Data_GisketchManifestDefinition__FindById_object_
                      (items,(System_String_o *)pIVar11,getId,MethodInfo_GisketchScreenDefinition_FindById_GisketchScreenDefiniti);
  return pSVar10;
}


// Gisketch.Aottg2UI.Search.GisketchSearchIndex$$WithoutDuplicateMainMenuScreenButtons
// il2cpp: System_Collections_Generic_List_GisketchSearchEntry__o* Gisketch_Aottg2UI_Search_GisketchSearchIndex__WithoutDuplicateMainMenuScreenButtons (System_Collections_Generic_List_GisketchSearchEntry__o* entries, System_Collections_Generic_HashSet_string__o* screenTitles, const MethodInfo* method);
// 0x3b48690

System_Collections_Generic_List_GisketchSearchEntry__o *
Gisketch_Aottg2UI_Search_GisketchSearchIndex__WithoutDuplicateMainMenuScreenButtons
          (System_Collections_Generic_List_GisketchSearchEntry__o *entries,
          System_Collections_Generic_HashSet_string__o *screenTitles,MethodInfo *method)

{
  Il2CppClass *pIVar1;
  Il2CppObject *__this;
  System_Predicate_T__o *match;
  System_Collections_Generic_List_GisketchSearchEntry__o *extraout_RAX;
  Il2CppObject *__this_00;
  
  if (g_data_057a9cb3 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_RemoveAll);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Predicate_GisketchSearchEntry);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_WithoutDuplicateMainMenuScreenButtons_b__0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass1_0);
    g_data_057a9cb3 = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass1_0);
  __this_00 = __this;
  System_Object___ctor(__this,(MethodInfo *)0x0);
  if (__this != (Il2CppObject *)0x0) {
    __this[1].klass = (Il2CppClass *)screenTitles;
    il2cpp_runtime_helper_022b4080(__this + 1,screenTitles);
    if ((((entries != (System_Collections_Generic_List_GisketchSearchEntry__o *)0x0) &&
         ((entries->fields)._size != 0)) && (pIVar1 = __this[1].klass, pIVar1 != (Il2CppClass *)0x0)) &&
       (*(int *)&(pIVar1->_1).byval_arg.data != 0)) {
      match = (System_Predicate_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Predicate_GisketchSearchEntry);
      System_Predicate_object____ctor();
      System_Collections_Generic_List_object___RemoveAll
                ((System_Collections_Generic_List_object__o *)entries,match,MethodInfo_Int32_RemoveAll);
    }
    return entries;
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  return extraout_RAX;
}


// Gisketch.Aottg2UI.Search.GisketchSearchIndex$$AddNodeEntries
// il2cpp: void Gisketch_Aottg2UI_Search_GisketchSearchIndex__AddNodeEntries (System_Collections_Generic_List_GisketchSearchEntry__o* entries, Gisketch_Aottg2UI_Data_GisketchScreenDefinition_o* screen, Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* node, System_String_o* sectionId, System_String_o* sectionTitle, const MethodInfo* method);
// 0x3b47f30

void Gisketch_Aottg2UI_Search_GisketchSearchIndex__AddNodeEntries
               (System_Collections_Generic_List_GisketchSearchEntry__o *entries,
               Gisketch_Aottg2UI_Data_GisketchScreenDefinition_o *screen,
               Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *node,System_String_o *sectionId,
               System_String_o *sectionTitle,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_String_o *pSVar3;
  Gisketch_Aottg2UI_Search_GisketchSearchEntry_array *pGVar4;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *pGVar5;
  Gisketch_Aottg2UI_Data_GisketchStepperStepDefinition_array *pGVar6;
  System_String_o *pSVar7;
  Il2CppClass *pIVar8;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar9;
  long lVar10;
  bool_conflict bVar11;
  System_String_o *pSVar12;
  System_String_Fields SVar13;
  System_String_Fields keywords;
  System_String_Fields SVar14;
  ulong uVar15;
  System_String_o *title;
  System_String_o *keywords_00;
  Il2CppObject *__this;
  System_Predicate_T__o *match;
  void **ppvVar16;
  System_String_Fields value;
  System_String_Fields method_00;
  MethodInfo *method_01;
  System_String_Fields __this_00;
  Il2CppObject *__this_01;
  ulong uVar17;
  MethodInfo *in_stack_ffffffffffffff78;
  System_String_Fields local_70;
  System_String_o *local_60;
  
  SVar14 = (System_String_Fields)screen;
  if (g_data_057a9cb4 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchSearchEntry);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&"section");
    g_data_057a9cb4 = '\x01';
  }
  if (node == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    return;
  }
  pSVar12 = (node->fields).popover;
  if ((pSVar12 != (System_String_o *)0x0) && (*(char *)((long)&pSVar12[2].fields._stringLength + 1) != '\0'))
  {
    return;
  }
  if (g_data_057a9cb6 == '\0') {
    il2cpp_runtime_helper_023445d0(&"section");
    g_data_057a9cb6 = '\x01';
    pSVar12 = (node->fields).popover;
  }
  if (pSVar12 == (System_String_o *)0x0) {
label_03b48141:
    __this_00 = (System_String_Fields)node;
    bVar11 = Gisketch_Aottg2UI_Search_GisketchSearchIndex__IsControl(node,(MethodInfo *)SVar14);
    if (((char)bVar11 != '\0') &&
       (__this_00 = (System_String_Fields)node,
       bVar11 = Gisketch_Aottg2UI_Search_GisketchSearchIndex__IsExplicitSearch(node,(MethodInfo *)SVar14),
       (char)bVar11 != '\0')) {
      __this_00 = (System_String_Fields)(node->fields).id;
      SVar14._stringLength = 0;
      SVar14._firstChar = 0;
      SVar14._6_2_ = 0;
      bVar11 = System_String__IsNullOrEmpty((System_String_o *)__this_00,(MethodInfo *)0x0);
      if ((char)bVar11 == '\0') {
        pSVar12 = (node->fields).popover;
        method_00 = SVar14;
        pGVar9 = node;
        if (pSVar12 != (System_String_o *)0x0) {
          __this_00 = pSVar12[1].fields;
          method_00._stringLength = 0;
          method_00._firstChar = 0;
          method_00._6_2_ = 0;
          bVar11 = System_String__IsNullOrEmpty((System_String_o *)__this_00,(MethodInfo *)0x0);
          if ((char)bVar11 == '\0') {
            pSVar12 = (node->fields).popover;
            if (pSVar12 == (System_String_o *)0x0) goto label_03b48689;
            pGVar9 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)(pSVar12 + 1);
          }
        }
        if (screen == (Gisketch_Aottg2UI_Data_GisketchScreenDefinition_o *)0x0) {
label_03b48689:
          il2cpp_runtime_helper_022b2c90();
          if (g_data_057a9cb3 == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
            il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_RemoveAll);
            il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Predicate_GisketchSearchEntry);
            il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_WithoutDuplicateMainMenuScreenButtons_b__0);
            il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass1_0);
            g_data_057a9cb3 = '\x01';
          }
          __this = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass1_0);
          __this_01 = __this;
          System_Object___ctor(__this,(MethodInfo *)0x0);
          if (__this == (Il2CppObject *)0x0) {
            il2cpp_runtime_helper_022b2c90();
            System_Object___ctor(__this_01,(MethodInfo *)0x0);
            return;
          }
          __this[1].klass = (Il2CppClass *)method_00;
          il2cpp_runtime_helper_022b4080(__this + 1,method_00);
          if ((((__this_00 != (System_String_Fields)0x0) && (*(int *)((long)__this_00 + 0x18) != 0)) &&
              (pIVar8 = __this[1].klass, pIVar8 != (Il2CppClass *)0x0)) &&
             (*(int *)&(pIVar8->_1).byval_arg.data != 0)) {
            match = (System_Predicate_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Predicate_GisketchSearchEntry);
            System_Predicate_object____ctor();
            System_Collections_Generic_List_object___RemoveAll
                      ((System_Collections_Generic_List_object__o *)__this_00,match,MethodInfo_Int32_RemoveAll);
          }
          return;
        }
        pSVar12 = (pGVar9->fields).type;
        method_00 = (System_String_Fields)(screen->fields).id;
        SVar14 = (System_String_Fields)(screen->fields).title;
        local_70 = (System_String_Fields)(screen->fields).searchTitle;
        bVar11 = System_String__IsNullOrEmpty((System_String_o *)SVar14,(MethodInfo *)0x0);
        if (((char)bVar11 != '\0') && (SVar14 = method_00, method_00 == (System_String_Fields)0x0)) {
          SVar14 = **(System_String_Fields **)(g_data_057b9c00 + 0xb8);
        }
        bVar11 = System_String__IsNullOrEmpty((System_String_o *)local_70,(MethodInfo *)0x0);
        if (((char)bVar11 != '\0') && (local_70 = SVar14, SVar14 == (System_String_Fields)0x0)) {
          local_70 = **(System_String_Fields **)(g_data_057b9c00 + 0xb8);
        }
        pSVar3 = (screen->fields).id;
        local_60 = (screen->fields).searchGroup;
        method_01 = (MethodInfo *)0x0;
        bVar11 = System_String__IsNullOrEmpty(local_60,(MethodInfo *)0x0);
        if (((char)bVar11 != '\0') && (local_60 = pSVar3, pSVar3 == (System_String_o *)0x0)) {
          local_60 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
        }
        pSVar3 = (node->fields).id;
        title = Gisketch_Aottg2UI_Search_GisketchSearchIndex__Title(node,method_01);
        keywords_00 = Gisketch_Aottg2UI_Search_GisketchSearchIndex__Keywords(node,method_01);
        pSVar7 = (node->fields).popover;
        if (pSVar7 == (System_String_o *)0x0) {
          ppvVar16 = *(void ***)(g_data_057b9c00 + 0xb8);
        }
        else {
          ppvVar16 = &pSVar7[1].monitor;
        }
        pSVar7 = *ppvVar16;
        SVar14 = (System_String_Fields)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchSearchEntry);
        __this_00 = SVar14;
        method = (MethodInfo *)sectionTitle;
        Gisketch_Aottg2UI_Search_GisketchSearchEntry___ctor_3a46f80
                  ((Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *)SVar14,(System_String_o *)method_00,
                   (System_String_o *)local_70,local_60,sectionId,sectionTitle,pSVar3,title,keywords_00,pSVar7
                   ,pSVar12,(UnityEngine_GameObject_o *)0x0,in_stack_ffffffffffffff78);
        lVar10 = MethodInfo_Void_Add;
        if (entries == (System_Collections_Generic_List_GisketchSearchEntry__o *)0x0) goto label_03b48689;
        piVar1 = &(entries->fields)._version;
        *piVar1 = *piVar1 + 1;
        pGVar4 = (entries->fields)._items;
        if (pGVar4 == (Gisketch_Aottg2UI_Search_GisketchSearchEntry_array *)0x0) goto label_03b48689;
        uVar2 = (entries->fields)._size;
        if (uVar2 < (uint)pGVar4->max_length) {
          (entries->fields)._size = uVar2 + 1;
          __this_00 = (System_String_Fields)(pGVar4->m_Items + (int)uVar2);
          *(System_String_Fields *)(pGVar4->m_Items + (int)uVar2) = SVar14;
          il2cpp_runtime_helper_022b4080();
          pGVar5 = (node->fields).deferredChildren;
          method_00 = SVar14;
        }
        else {
          __this_00 = (System_String_Fields)entries;
          System_Collections_Generic_List_object___AddWithResize
                    ((System_Collections_Generic_List_object__o *)entries,(Il2CppObject *)SVar14,
                     *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
          pGVar5 = (node->fields).deferredChildren;
          method_00 = SVar14;
        }
        goto joined_r0x03b48679;
      }
    }
  }
  else {
    __this_00 = pSVar12[1].fields;
    SVar14 = "section";
    bVar11 = System_String__Equals_3af50f0
                       ((System_String_o *)__this_00,(System_String_o *)"section",5,(MethodInfo *)0x0);
    if ((char)bVar11 == '\0') goto label_03b48141;
    pSVar12 = (node->fields).popover;
    method_00 = SVar14;
    if (pSVar12 == (System_String_o *)0x0) goto label_03b48689;
    sectionId = (System_String_o *)pSVar12[2].klass;
    SVar14 = (System_String_Fields)(node->fields).id;
    method_00._stringLength = 0;
    method_00._firstChar = 0;
    method_00._6_2_ = 0;
    __this_00 = (System_String_Fields)sectionId;
    bVar11 = System_String__IsNullOrEmpty(sectionId,(MethodInfo *)0x0);
    if (((char)bVar11 != '\0') && (sectionId = (System_String_o *)SVar14, SVar14 == (System_String_Fields)0x0)
       ) {
      sectionId = *(System_String_o **)*(System_String_Fields **)(g_data_057b9c00 + 0xb8);
    }
    pSVar12 = (node->fields).popover;
    if (pSVar12 == (System_String_o *)0x0) goto label_03b48689;
    SVar13 = pSVar12->fields;
    sectionTitle = pSVar12[2].monitor;
    SVar14 = (System_String_Fields)(node->fields).text;
    bVar11 = System_String__IsNullOrEmpty((System_String_o *)SVar13,(MethodInfo *)0x0);
    if (((char)bVar11 != '\0') && (SVar13 = SVar14, SVar14 == (System_String_Fields)0x0)) {
      SVar13 = **(System_String_Fields **)(g_data_057b9c00 + 0xb8);
    }
    method_00._stringLength = 0;
    method_00._firstChar = 0;
    method_00._6_2_ = 0;
    __this_00 = (System_String_Fields)sectionTitle;
    bVar11 = System_String__IsNullOrEmpty(sectionTitle,(MethodInfo *)0x0);
    if (((char)bVar11 != '\0') &&
       (sectionTitle = (System_String_o *)SVar13, SVar13 == (System_String_Fields)0x0)) {
      sectionTitle = *(System_String_o **)*(System_String_Fields **)(g_data_057b9c00 + 0xb8);
    }
    pSVar12 = (node->fields).popover;
    if (pSVar12 == (System_String_o *)0x0) goto label_03b48689;
    SVar14 = (System_String_Fields)pSVar12[1].klass;
    if ((char)pSVar12[2].fields._stringLength == '\0') {
      SVar13 = **(System_String_Fields **)(g_data_057b9c00 + 0xb8);
    }
    else {
      SVar13 = (System_String_Fields)
               Gisketch_Aottg2UI_Search_GisketchSearchIndex__HarvestKeywords(node,(MethodInfo *)method_00);
    }
    if (g_data_057a9cb9 == '\0') {
      il2cpp_runtime_helper_023445d0(&" ");
      g_data_057a9cb9 = '\x01';
    }
    method_00._stringLength = 0;
    method_00._firstChar = 0;
    method_00._6_2_ = 0;
    __this_00 = SVar14;
    bVar11 = System_String__IsNullOrEmpty((System_String_o *)SVar14,(MethodInfo *)0x0);
    if ((char)bVar11 == '\0') {
      method_00._stringLength = 0;
      method_00._firstChar = 0;
      method_00._6_2_ = 0;
      __this_00 = SVar13;
      bVar11 = System_String__IsNullOrEmpty((System_String_o *)SVar13,(MethodInfo *)0x0);
      keywords = SVar14;
      if ((char)bVar11 == '\0') {
        method_00 = " ";
        keywords = (System_String_Fields)
                   System_String__Concat_3af7150
                             ((System_String_o *)SVar14,(System_String_o *)" ",
                              (System_String_o *)SVar13,(MethodInfo *)0x0);
        __this_00 = SVar14;
      }
    }
    else {
      keywords = SVar13;
      if (SVar13 == (System_String_Fields)0x0) {
        keywords = **(System_String_Fields **)(g_data_057b9c00 + 0xb8);
      }
    }
    if (screen == (Gisketch_Aottg2UI_Data_GisketchScreenDefinition_o *)0x0) goto label_03b48689;
    SVar13 = (System_String_Fields)(screen->fields).id;
    SVar14 = (System_String_Fields)(screen->fields).title;
    local_70 = (System_String_Fields)(screen->fields).searchTitle;
    bVar11 = System_String__IsNullOrEmpty((System_String_o *)SVar14,(MethodInfo *)0x0);
    if (((char)bVar11 != '\0') && (SVar14 = SVar13, SVar13 == (System_String_Fields)0x0)) {
      SVar14 = **(System_String_Fields **)(g_data_057b9c00 + 0xb8);
    }
    bVar11 = System_String__IsNullOrEmpty((System_String_o *)local_70,(MethodInfo *)0x0);
    if (((char)bVar11 != '\0') && (local_70 = SVar14, SVar14 == (System_String_Fields)0x0)) {
      local_70 = **(System_String_Fields **)(g_data_057b9c00 + 0xb8);
    }
    SVar14 = (System_String_Fields)(screen->fields).id;
    value = (System_String_Fields)(screen->fields).searchGroup;
    method_00._stringLength = 0;
    method_00._firstChar = 0;
    method_00._6_2_ = 0;
    __this_00 = value;
    bVar11 = System_String__IsNullOrEmpty((System_String_o *)value,(MethodInfo *)0x0);
    if (((char)bVar11 != '\0') && (value = SVar14, SVar14 == (System_String_Fields)0x0)) {
      value = **(System_String_Fields **)(g_data_057b9c00 + 0xb8);
    }
    pSVar12 = (node->fields).popover;
    if (pSVar12 == (System_String_o *)0x0) goto label_03b48689;
    pSVar3 = (node->fields).id;
    pSVar12 = pSVar12[1].monitor;
    SVar14 = (System_String_Fields)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchSearchEntry);
    __this_00 = SVar14;
    method = (MethodInfo *)sectionTitle;
    Gisketch_Aottg2UI_Search_GisketchSearchEntry___ctor_3a46f80
              ((Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *)SVar14,(System_String_o *)SVar13,
               (System_String_o *)local_70,(System_String_o *)value,sectionId,sectionTitle,pSVar3,sectionTitle
               ,(System_String_o *)keywords,pSVar12,(System_String_o *)"section",
               (UnityEngine_GameObject_o *)0x0,in_stack_ffffffffffffff78);
    lVar10 = MethodInfo_Void_Add;
    method_00 = SVar13;
    if (entries == (System_Collections_Generic_List_GisketchSearchEntry__o *)0x0) goto label_03b48689;
    piVar1 = &(entries->fields)._version;
    *piVar1 = *piVar1 + 1;
    pGVar4 = (entries->fields)._items;
    if (pGVar4 == (Gisketch_Aottg2UI_Search_GisketchSearchEntry_array *)0x0) goto label_03b48689;
    uVar2 = (entries->fields)._size;
    if ((uint)pGVar4->max_length <= uVar2) {
      __this_00 = (System_String_Fields)entries;
      System_Collections_Generic_List_object___AddWithResize
                ((System_Collections_Generic_List_object__o *)entries,(Il2CppObject *)SVar14,
                 *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
      pGVar5 = (node->fields).deferredChildren;
      method_00 = SVar14;
      goto joined_r0x03b48679;
    }
    (entries->fields)._size = uVar2 + 1;
    __this_00 = (System_String_Fields)(pGVar4->m_Items + (int)uVar2);
    *(System_String_Fields *)(pGVar4->m_Items + (int)uVar2) = SVar14;
    il2cpp_runtime_helper_022b4080();
  }
  pGVar5 = (node->fields).deferredChildren;
  method_00 = SVar14;
joined_r0x03b48679:
  if ((pGVar5 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)0x0) && (0 < (int)pGVar5->max_length))
  {
    uVar15 = pGVar5->max_length & 0xffffffff;
    uVar17 = 0;
    do {
      if (uVar15 <= uVar17) goto label_03b48684;
      method_00 = (System_String_Fields)screen;
      __this_00 = (System_String_Fields)entries;
      Gisketch_Aottg2UI_Search_GisketchSearchIndex__AddNodeEntries
                (entries,screen,pGVar5->m_Items[uVar17],sectionId,sectionTitle,method);
      uVar17 = uVar17 + 1;
      uVar2 = (uint)pGVar5->max_length;
      uVar15 = (ulong)uVar2;
    } while ((long)uVar17 < (long)(int)uVar2);
  }
  pGVar6 = (node->fields).steps;
  if ((pGVar6 != (Gisketch_Aottg2UI_Data_GisketchStepperStepDefinition_array *)0x0) &&
     (0 < (int)pGVar6->max_length)) {
    uVar15 = pGVar6->max_length & 0xffffffff;
    uVar17 = 0;
    do {
      if (uVar15 <= uVar17) goto label_03b48684;
      method_00 = (System_String_Fields)screen;
      __this_00 = (System_String_Fields)entries;
      Gisketch_Aottg2UI_Search_GisketchSearchIndex__AddNodeEntries
                (entries,screen,(Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)pGVar6->m_Items[uVar17],
                 sectionId,sectionTitle,method);
      uVar17 = uVar17 + 1;
      uVar2 = (uint)pGVar6->max_length;
      uVar15 = (ulong)uVar2;
    } while ((long)uVar17 < (long)(int)uVar2);
  }
  return;
label_03b48684:
  il2cpp_runtime_helper_022b2ca0();
  goto label_03b48689;
}


// Gisketch.Aottg2UI.Search.GisketchSearchIndex$$AddChildEntries
// il2cpp: void Gisketch_Aottg2UI_Search_GisketchSearchIndex__AddChildEntries (System_Collections_Generic_List_GisketchSearchEntry__o* entries, Gisketch_Aottg2UI_Data_GisketchScreenDefinition_o* screen, Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array* children, System_String_o* sectionId, System_String_o* sectionTitle, const MethodInfo* method);
// 0x3b48d90

void Gisketch_Aottg2UI_Search_GisketchSearchIndex__AddChildEntries
               (System_Collections_Generic_List_GisketchSearchEntry__o *entries,
               Gisketch_Aottg2UI_Data_GisketchScreenDefinition_o *screen,
               Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *children,System_String_o *sectionId,
               System_String_o *sectionTitle,MethodInfo *method)

{
  int32_t *piVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  ushort uVar6;
  ushort uVar7;
  System_String_c *pSVar8;
  Il2CppRuntimeInterfaceOffsetPair *pIVar9;
  System_Object_array *pSVar10;
  Il2CppClass *pIVar11;
  System_Collections_Generic_List_Enumerator_object__o __this;
  System_Collections_Generic_List_Enumerator_object__o __this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  long lVar12;
  char cVar13;
  bool_conflict bVar14;
  uint uVar15;
  int32_t iVar16;
  void *pvVar17;
  System_Text_StringBuilder_o *pSVar18;
  System_String_Fields SVar19;
  System_String_Fields SVar20;
  System_Collections_Generic_List_object__o *__this_03;
  System_Collections_Generic_HashSet_object__o *__this_04;
  System_Collections_Generic_HashSet_string__o *screenTitles;
  System_Collections_Generic_List_object__o *__this_05;
  System_Collections_Generic_HashSet_object__o *__this_06;
  System_String_o *__this_07;
  VirtualInvokeData *pVVar21;
  long *plVar22;
  undefined8 *puVar23;
  MethodInfo *pMVar24;
  Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *pGVar25;
  Il2CppObject *__this_08;
  System_String_o *activeScreenId;
  uint uVar26;
  void *pvVar27;
  long *item;
  System_String_Fields SVar28;
  System_String_Fields SVar29;
  long lVar30;
  MethodInfo *method_00;
  System_String_Fields __this_09;
  System_String_Fields *pSVar31;
  long lVar32;
  int iVar33;
  System_String_Fields *pSVar34;
  System_String_Fields *pSVar35;
  System_String_Fields value;
  undefined1 auVar36 [16];
  undefined1 auVar37 [12];
  long in_stack_fffffffffffffeb0;
  _union_249689 _Var38;
  _union_249689 a_Stack_100 [2];
  Il2CppObject *pIStack_f0;
  long lStack_e8;
  System_String_Fields SStack_e0;
  System_String_Fields SStack_d8;
  System_String_Fields SStack_d0;
  System_String_Fields SStack_c8;
  void *pvStack_c0;
  undefined8 uStack_b8;
  System_String_Fields SStack_b0;
  System_String_Fields SStack_a8;
  undefined8 uStack_a0;
  System_String_Fields SStack_98;
  System_String_Fields SStack_90;
  undefined8 uStack_88;
  System_String_Fields SStack_80;
  Gisketch_Aottg2UI_Data_GisketchScreenDefinition_o *pGStack_78;
  System_Collections_Generic_List_GisketchSearchEntry__o *pSStack_70;
  System_String_Fields SStack_68;
  System_String_Fields SStack_60;
  void *pvStack_58;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *pGStack_50;
  System_String_o *pSStack_48;
  System_String_o *pSStack_40;
  
  if ((children != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)0x0) &&
     (0 < (int)children->max_length)) {
    pvVar17 = (void *)(children->max_length & 0xffffffff);
    pvVar27 = (void *)0x0;
    SVar19 = (System_String_Fields)screen;
    SVar20 = (System_String_Fields)entries;
    do {
      if (pvVar17 <= pvVar27) {
        pSStack_40 = (System_String_o *)Gisketch_Aottg2UI_Search_GisketchSearchIndex__AppendText;
        il2cpp_runtime_helper_022b2ca0();
        if (SVar19 == (System_String_Fields)0x0) {
          return;
        }
        value = *(System_String_Fields *)((long)SVar19 + 0x20);
        SVar28._stringLength = 0;
        SVar28._firstChar = 0;
        SVar28._6_2_ = 0;
        pvStack_58 = (void *)0x3b48e22;
        __this_09 = value;
        pGStack_50 = children;
        pSStack_48 = sectionTitle;
        pSStack_40 = sectionId;
        bVar14 = System_String__IsNullOrEmpty((System_String_o *)value,(MethodInfo *)0x0);
        if ((char)bVar14 == '\0') {
          if (SVar20 != (System_String_Fields)0x0) {
            SVar28._stringLength = 0x20;
            SVar28._firstChar = 0;
            SVar28._6_2_ = 0;
            pvStack_58 = (void *)0x3b48e3e;
            __this_09 = SVar20;
            pSVar18 = System_Text_StringBuilder__Append_3b048f0
                                ((System_Text_StringBuilder_o *)SVar20,0x20,(MethodInfo *)0x0);
            if (pSVar18 != (System_Text_StringBuilder_o *)0x0) {
              pvStack_58 = (void *)0x3b48e54;
              System_Text_StringBuilder__Append_3b03f90(pSVar18,(System_String_o *)value,(MethodInfo *)0x0);
              goto label_03b48e54;
            }
          }
        }
        else {
label_03b48e54:
          value = (System_String_Fields)((System_String_o *)((long)SVar19 + 0x30))->klass;
          SVar28._stringLength = 0;
          SVar28._firstChar = 0;
          SVar28._6_2_ = 0;
          pvStack_58 = (void *)0x3b48e62;
          __this_09 = value;
          bVar14 = System_String__IsNullOrEmpty((System_String_o *)value,(MethodInfo *)0x0);
          if ((char)bVar14 == '\0') {
            if (SVar20 != (System_String_Fields)0x0) {
              SVar28._stringLength = 0x20;
              SVar28._firstChar = 0;
              SVar28._6_2_ = 0;
              pvStack_58 = (void *)0x3b48e7e;
              __this_09 = SVar20;
              pSVar18 = System_Text_StringBuilder__Append_3b048f0
                                  ((System_Text_StringBuilder_o *)SVar20,0x20,(MethodInfo *)0x0);
              if (pSVar18 != (System_Text_StringBuilder_o *)0x0) {
                pvStack_58 = (void *)0x3b48e94;
                System_Text_StringBuilder__Append_3b03f90(pSVar18,(System_String_o *)value,(MethodInfo *)0x0);
                goto label_03b48e94;
              }
            }
          }
          else {
label_03b48e94:
            value = *(System_String_Fields *)((long)SVar19 + 0xb8);
            SVar28._stringLength = 0;
            SVar28._firstChar = 0;
            SVar28._6_2_ = 0;
            pvStack_58 = (void *)0x3b48ea5;
            __this_09 = value;
            bVar14 = System_String__IsNullOrEmpty((System_String_o *)value,(MethodInfo *)0x0);
            if ((char)bVar14 == '\0') {
              if (SVar20 != (System_String_Fields)0x0) {
                SVar28._stringLength = 0x20;
                SVar28._firstChar = 0;
                SVar28._6_2_ = 0;
                pvStack_58 = (void *)0x3b48ebd;
                __this_09 = SVar20;
                pSVar18 = System_Text_StringBuilder__Append_3b048f0
                                    ((System_Text_StringBuilder_o *)SVar20,0x20,(MethodInfo *)0x0);
                if (pSVar18 != (System_Text_StringBuilder_o *)0x0) {
                  pvStack_58 = (void *)0x3b48ecf;
                  System_Text_StringBuilder__Append_3b03f90
                            (pSVar18,(System_String_o *)value,(MethodInfo *)0x0);
                  goto label_03b48ecf;
                }
              }
            }
            else {
label_03b48ecf:
              if (*(System_String_Fields *)((long)SVar19 + 0xd0) == (System_String_Fields)0x0) {
                return;
              }
              SVar19 = *(System_String_Fields *)((long)*(System_String_Fields *)((long)SVar19 + 0xd0) + 0x18);
              SVar28._stringLength = 0;
              SVar28._firstChar = 0;
              SVar28._6_2_ = 0;
              pvStack_58 = (void *)0x3b48ee9;
              __this_09 = SVar19;
              bVar14 = System_String__IsNullOrEmpty((System_String_o *)SVar19,(MethodInfo *)0x0);
              if ((char)bVar14 != '\0') {
                return;
              }
              if (SVar20 != (System_String_Fields)0x0) {
                SVar28._stringLength = 0x20;
                SVar28._firstChar = 0;
                SVar28._6_2_ = 0;
                pvStack_58 = (void *)0x3b48f07;
                __this_09 = SVar20;
                pSVar18 = System_Text_StringBuilder__Append_3b048f0
                                    ((System_Text_StringBuilder_o *)SVar20,0x20,(MethodInfo *)0x0);
                if (pSVar18 != (System_Text_StringBuilder_o *)0x0) {
                  System_Text_StringBuilder__Append_3b03f90
                            (pSVar18,(System_String_o *)SVar19,(MethodInfo *)0x0);
                  return;
                }
              }
            }
          }
        }
        pvStack_58 = (void *)0x3b48f23;
        uStack_88 = il2cpp_runtime_helper_022b2c90();
        if (SVar28 == (System_String_Fields)0x0) {
          return;
        }
        uVar15 = *(uint *)((long)SVar28 + 0x18);
        if ((int)uVar15 < 1) {
          return;
        }
        SVar29 = SVar28;
        pSVar31 = (System_String_Fields *)__this_09;
        SStack_80 = SVar19;
        pGStack_78 = screen;
        pSStack_70 = entries;
        SStack_68 = SVar20;
        SStack_60 = value;
        pvStack_58 = pvVar27;
        if (__this_09 != (System_String_Fields)0x0) {
          pvVar27 = (void *)0x0;
          pSVar35 = &"section";
          SVar20 = SVar28;
          if (uVar15 == 0) goto label_03b4908c;
          goto label_03b48fb9;
        }
        SVar19._stringLength = 0;
        SVar19._firstChar = 0;
        SVar19._6_2_ = 0;
        pSVar34 = &"section";
        goto label_03b49020;
      }
      pSStack_40 = (System_String_o *)0x3b48ddd;
      SVar19 = (System_String_Fields)screen;
      SVar20 = (System_String_Fields)entries;
      Gisketch_Aottg2UI_Search_GisketchSearchIndex__AddNodeEntries
                (entries,screen,children->m_Items[(long)pvVar27],sectionId,sectionTitle,method);
      pvVar27 = (void *)((long)pvVar27 + 1);
      uVar15 = (uint)children->max_length;
      pvVar17 = (void *)(ulong)uVar15;
    } while ((long)pvVar27 < (long)(int)uVar15);
  }
  return;
label_03b49020:
  uVar26 = SVar19._stringLength;
  __this_09 = (System_String_Fields)pSVar34;
  pSVar35 = (System_String_Fields *)value;
  if (uVar15 <= uVar26) goto label_03b4908c;
  pvVar27 = (&((Il2CppType *)((long)SVar28 + 0x20))->data)[(int)uVar26];
  if (g_data_057a9cb6 == '\0') {
    pSVar31 = &"section";
    SStack_90._stringLength = 0x3b4903d;
    SStack_90._firstChar = 0;
    SStack_90._6_2_ = 0;
    il2cpp_runtime_helper_023445d0();
    g_data_057a9cb6 = '\x01';
  }
  if ((pvVar27 == (void *)0x0) || (*(long *)((long)pvVar27 + 0xd0) == 0)) goto label_03b49087;
  pSVar31 = *(System_String_Fields **)(*(long *)((long)pvVar27 + 0xd0) + 0x28);
  SStack_90._stringLength = 0x3b49068;
  SStack_90._firstChar = 0;
  SStack_90._6_2_ = 0;
  SVar29 = "section";
  bVar14 = System_String__Equals_3af50f0
                     ((System_String_o *)pSVar31,(System_String_o *)"section",5,(MethodInfo *)0x0);
  if ((char)bVar14 == '\0') goto label_03b49087;
  SVar19._stringLength = uVar26 + 1;
  SVar19._4_4_ = 0;
  uVar15 = *(uint *)((long)SVar28 + 0x18);
  if ((int)uVar15 <= (int)SVar19._stringLength) {
    return;
  }
  goto label_03b49020;
label_03b49087:
  SStack_90._stringLength = 0x3b4908c;
  SStack_90._firstChar = 0;
  SStack_90._6_2_ = 0;
  il2cpp_runtime_helper_022b2c90();
  __this_09 = (System_String_Fields)pSVar34;
  pSVar35 = (System_String_Fields *)value;
  goto label_03b4908c;
  while (lVar32 = lVar32 + 0x10, (ulong)*(ushort *)(lVar30 + 0x12e) << 4 != lVar32) {
label_03b49770:
    if (*(long *)(*(long *)(lVar30 + 0xb0) + lVar32) == TypeInfo_IDisposable) {
      puVar23 = (undefined8 *)(lVar30 + (long)*(int *)(*(long *)(lVar30 + 0xb0) + 8 + lVar32) * 0x10 + 0x138);
      goto label_03b4979d;
    }
  }
label_03b4977f:
  puVar23 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar22,TypeInfo_IDisposable,0);
label_03b4979d:
  (*(code *)*puVar23)(plVar22);
label_03b497a6:
  if (in_stack_fffffffffffffeb0 != 0) goto label_03b49dd9;
  if (__this_08 == (Il2CppObject *)0x0) {
    if (g_data_057a9cc0 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Empty_d__6);
      g_data_057a9cc0 = '\x01';
    }
    __this_08 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_Empty_d__6);
    System_Object___ctor(__this_08,(MethodInfo *)0x0);
    *(undefined4 *)&__this_08[1].klass = 0xfffffffe;
    iVar16 = System_Environment__get_CurrentManagedThreadId((MethodInfo *)0x0);
    *(int32_t *)&__this_08[2].klass = iVar16;
    item = (long *)0x0;
    if (__this_08 == (Il2CppObject *)0x0) goto label_03b49dcf;
  }
  pIVar11 = __this_08->klass;
  uVar3._0_1_ = (pIVar11->_2).rank;
  uVar3._1_1_ = (pIVar11->_2).minimumAlignment;
  if ((ulong)uVar3 != 0) {
    pIVar9 = (pIVar11->_1).interfaceOffsets;
    lVar30 = 0;
    do {
      if (*(long *)((long)&pIVar9->interfaceType + lVar30) == TypeInfo_IEnumerable_GisketchSearchEntry) {
        pVVar21 = pIVar11->vtable + *(int *)((long)&pIVar9->offset + lVar30);
        goto label_03b49881;
      }
      lVar30 = lVar30 + 0x10;
    } while ((ulong)uVar3 << 4 != lVar30);
  }
  pVVar21 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(__this_08,TypeInfo_IEnumerable_GisketchSearchEntry,0);
label_03b49881:
  item = (long *)(*pVVar21->methodPtr)(__this_08,pVVar21->method);
  if ((Il2CppObject *)item == (Il2CppObject *)0x0) goto label_03b49dde;
  do {
    do {
      pIVar11 = ((Il2CppObject *)item)->klass;
      uVar4._0_1_ = (pIVar11->_2).rank;
      uVar4._1_1_ = (pIVar11->_2).minimumAlignment;
      if ((ulong)uVar4 != 0) {
        pIVar9 = (pIVar11->_1).interfaceOffsets;
        lVar30 = 0;
        do {
          if (*(long *)((long)&pIVar9->interfaceType + lVar30) == TypeInfo_IEnumerator) {
            pVVar21 = pIVar11->vtable + *(int *)((long)&pIVar9->offset + lVar30);
            goto label_03b49903;
          }
          lVar30 = lVar30 + 0x10;
        } while ((ulong)uVar4 << 4 != lVar30);
      }
      pVVar21 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(item,TypeInfo_IEnumerator,0);
label_03b49903:
      cVar13 = (*pVVar21->methodPtr)(item,pVVar21->method);
      if (cVar13 == '\0') {
        iVar33 = 10;
        lVar30 = 0;
        goto label_03b49ac8;
      }
      pIVar11 = ((Il2CppObject *)item)->klass;
      uVar5._0_1_ = (pIVar11->_2).rank;
      uVar5._1_1_ = (pIVar11->_2).minimumAlignment;
      if ((ulong)uVar5 != 0) {
        pIVar9 = (pIVar11->_1).interfaceOffsets;
        lVar30 = 0;
        do {
          if (*(long *)((long)&pIVar9->interfaceType + lVar30) == TypeInfo_IEnumerator_GisketchSearchEntry) {
            pVVar21 = pIVar11->vtable + *(int *)((long)&pIVar9->offset + lVar30);
            goto label_03b49973;
          }
          lVar30 = lVar30 + 0x10;
        } while ((ulong)uVar5 << 4 != lVar30);
      }
      pVVar21 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(item,TypeInfo_IEnumerator_GisketchSearchEntry,0);
label_03b49973:
      auVar36 = (*pVVar21->methodPtr)(item,pVVar21->method);
      pGVar25 = auVar36._0_8_;
      bVar14 = Gisketch_Aottg2UI_Search_GisketchSearchResults__IsActiveControl
                         (pGVar25,activeScreenId,auVar36._8_8_);
      if ((char)bVar14 == '\0') break;
      if (pGVar25 == (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *)0x0) goto label_03b49da7;
      bVar14 = System_String__IsNullOrEmpty((pGVar25->fields)._TargetId_k__BackingField,(MethodInfo *)0x0);
      if ((char)bVar14 != '\0') break;
      if (__this_06 == (System_Collections_Generic_HashSet_object__o *)0x0) goto label_03b49db1;
      bVar14 = System_Collections_Generic_HashSet_object___Contains
                         (__this_06,(Il2CppObject *)(pGVar25->fields)._TargetId_k__BackingField,MethodInfo_Boolean_Contains);
    } while ((char)bVar14 == '\0');
    lVar30 = MethodInfo_Void_Add;
    if (__this_03 == (System_Collections_Generic_List_object__o *)0x0) {
      il2cpp_runtime_helper_022b2c90();
label_03b49d9d:
      il2cpp_runtime_helper_022b2c90();
      goto label_03b49da2;
    }
    piVar1 = &(__this_03->fields)._version;
    *piVar1 = *piVar1 + 1;
    pSVar10 = (__this_03->fields)._items;
    if (pSVar10 == (System_Object_array *)0x0) goto label_03b49d9d;
    uVar15 = (__this_03->fields)._size;
    if (uVar15 < (uint)pSVar10->max_length) {
      (__this_03->fields)._size = uVar15 + 1;
      pSVar10->m_Items[(int)uVar15] = (Il2CppObject *)pGVar25;
      il2cpp_runtime_helper_022b4080();
    }
    else {
      System_Collections_Generic_List_object___AddWithResize
                (__this_03,(Il2CppObject *)pGVar25,
                 *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar30 + 0x20) + 0xc0) + 0x70));
    }
    if ((((pGVar25 != (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *)0x0) &&
         (bVar14 = System_String__IsNullOrEmpty((pGVar25->fields)._ScreenId_k__BackingField,(MethodInfo *)0x0)
         , (char)bVar14 == '\0')) &&
        (bVar14 = System_String__IsNullOrEmpty(activeScreenId,(MethodInfo *)0x0), (char)bVar14 == '\0')) &&
       ((bVar14 = System_String__Equals_3af50f0
                            ((pGVar25->fields)._ScreenId_k__BackingField,activeScreenId,5,(MethodInfo *)0x0),
        (char)bVar14 != '\0' &&
        (bVar14 = System_String__IsNullOrEmpty((pGVar25->fields)._TargetId_k__BackingField,(MethodInfo *)0x0),
        (char)bVar14 == '\0')))) {
      if (__this_04 == (System_Collections_Generic_HashSet_object__o *)0x0) goto label_03b49dca;
      System_Collections_Generic_HashSet_object___Add
                (__this_04,(Il2CppObject *)(pGVar25->fields)._TargetId_k__BackingField,MethodInfo_Boolean_Add);
    }
  } while( true );
joined_r0x03b4a097:
  lVar12 = lVar32;
  if ((Il2CppObject *)item != (Il2CppObject *)0x0) {
    pIVar11 = ((Il2CppObject *)item)->klass;
    uVar7._0_1_ = (pIVar11->_2).rank;
    uVar7._1_1_ = (pIVar11->_2).minimumAlignment;
    if ((ulong)uVar7 != 0) {
      pIVar9 = (pIVar11->_1).interfaceOffsets;
      lVar32 = 0;
      do {
        if (*(long *)((long)&pIVar9->interfaceType + lVar32) == TypeInfo_IDisposable) {
          pVVar21 = pIVar11->vtable + *(int *)((long)&pIVar9->offset + lVar32);
          goto label_03b4a0ed;
        }
        lVar32 = lVar32 + 0x10;
      } while ((ulong)uVar7 << 4 != lVar32);
    }
    pVVar21 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(item,TypeInfo_IDisposable,0);
label_03b4a0ed:
    (*pVVar21->methodPtr)(item,pVVar21->method);
  }
  if (lVar30 == 0) {
    _Unwind_Resume(lVar12);
  }
  lVar32 = il2cpp_runtime_helper_022fefe0();
  lVar30 = lVar12;
  goto joined_r0x03b4a097;
label_03b49d6d:
  il2cpp_runtime_helper_022b2c90();
label_03b49d72:
  __this_02.fields._8_8_ = __this_04;
  __this_02.fields._list = (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffeb0;
  __this_02.fields._current = _Var38.genericMethod;
  System_Collections_Generic_List_Enumerator_object___Dispose
            (__this_02,(MethodInfo_321A1C0 *)&stack0xfffffffffffffec0);
  return;
label_03b48fb9:
  do {
    entries = *(System_Collections_Generic_List_GisketchSearchEntry__o **)
               (&((Il2CppType *)((long)SVar28 + 0x20))->data + (long)pvVar27);
    SVar29 = SVar20;
    if (g_data_057a9cb6 == '\0') {
      pSVar31 = &"section";
      SStack_90._stringLength = 0x3b48fcf;
      SStack_90._firstChar = 0;
      SStack_90._6_2_ = 0;
      il2cpp_runtime_helper_023445d0();
      g_data_057a9cb6 = '\x01';
      SVar29 = SVar20;
    }
    pSVar34 = (System_String_Fields *)__this_09;
    value = (System_String_Fields)pSVar35;
    if ((System_String_Fields)entries == (System_String_Fields)0x0) goto label_03b49087;
    if (*(void **)((long)entries + 0xd0) == (void *)0x0) {
label_03b48f70:
      SVar29._stringLength = 0x20;
      SVar29._firstChar = 0;
      SVar29._6_2_ = 0;
      SStack_90._stringLength = 0x3b48f7f;
      SStack_90._firstChar = 0;
      SStack_90._6_2_ = 0;
      SVar19 = (System_String_Fields)
               System_Text_StringBuilder__Append_3b048f0
                         ((System_Text_StringBuilder_o *)__this_09,0x20,(MethodInfo *)0x0);
      SStack_90._stringLength = 0x3b48f8a;
      SStack_90._firstChar = 0;
      SStack_90._6_2_ = 0;
      pSVar31 = (System_String_Fields *)entries;
      SVar20 = (System_String_Fields)
               Gisketch_Aottg2UI_Search_GisketchSearchIndex__HarvestKeywords
                         ((Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)entries,(MethodInfo *)SVar29);
      if (SVar19 == (System_String_Fields)0x0) goto label_03b49087;
      SStack_90._stringLength = 0x3b48fa0;
      SStack_90._firstChar = 0;
      SStack_90._6_2_ = 0;
      pSVar31 = (System_String_Fields *)SVar19;
      System_Text_StringBuilder__Append_3b03f90
                ((System_Text_StringBuilder_o *)SVar19,(System_String_o *)SVar20,(MethodInfo *)0x0);
    }
    else {
      pSVar31 = *(System_String_Fields **)((long)*(void **)((long)entries + 0xd0) + 0x28);
      SStack_90._stringLength = 0x3b48ffe;
      SStack_90._firstChar = 0;
      SStack_90._6_2_ = 0;
      SVar20 = "section";
      bVar14 = System_String__Equals_3af50f0
                         ((System_String_o *)pSVar31,(System_String_o *)"section",5,(MethodInfo *)0x0);
      if ((char)bVar14 == '\0') goto label_03b48f70;
    }
    pvVar27 = (void *)((long)pvVar27 + 1);
    if ((int)*(uint *)((long)SVar28 + 0x18) <= (int)(uint)pvVar27) {
      return;
    }
    SVar29 = SVar20;
  } while ((uint)pvVar27 < *(uint *)((long)SVar28 + 0x18));
label_03b4908c:
  SStack_90._stringLength = 0x3b49091;
  SStack_90._firstChar = 0;
  SStack_90._6_2_ = 0;
  uStack_a0 = il2cpp_runtime_helper_022b2ca0();
  lVar30 = 0;
  SStack_a8._stringLength = 0x3b490b4;
  SStack_a8._firstChar = 0;
  SStack_a8._6_2_ = 0;
  SVar20 = SVar29;
  SStack_98 = SVar19;
  SStack_90 = __this_09;
  bVar14 = System_String__IsNullOrEmpty((System_String_o *)SVar29,(MethodInfo *)0x0);
  if ((char)bVar14 != '\0') {
    return;
  }
  if ((System_String_Fields)pSVar31 != (System_String_Fields)0x0) {
    lVar30 = 0x20;
    SStack_a8._stringLength = 0x3b490d4;
    SStack_a8._firstChar = 0;
    SStack_a8._6_2_ = 0;
    SVar20 = (System_String_Fields)pSVar31;
    pSVar18 = System_Text_StringBuilder__Append_3b048f0
                        ((System_Text_StringBuilder_o *)pSVar31,0x20,(MethodInfo *)0x0);
    if (pSVar18 != (System_Text_StringBuilder_o *)0x0) {
      System_Text_StringBuilder__Append_3b03f90(pSVar18,(System_String_o *)SVar29,(MethodInfo *)0x0);
      return;
    }
  }
  SStack_a8._stringLength = 0x3b490f2;
  SStack_a8._firstChar = 0;
  SStack_a8._6_2_ = 0;
  uStack_b8 = il2cpp_runtime_helper_022b2c90();
  SStack_b0 = (System_String_Fields)pSVar31;
  SStack_a8 = SVar29;
  if (g_data_057a9cba == '\0') {
    pvStack_c0 = (void *)0x3b4911f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Contains);
    pvStack_c0 = (void *)0x3b4912b;
    il2cpp_runtime_helper_023445d0(&"screen");
    pvStack_c0 = (void *)0x3b49137;
    il2cpp_runtime_helper_023445d0(&"section");
    pvStack_c0 = (void *)0x3b49143;
    il2cpp_runtime_helper_023445d0(&"main-menu");
    pvStack_c0 = (void *)0x3b4914f;
    il2cpp_runtime_helper_023445d0(&"main-menu-option-");
    g_data_057a9cba = '\x01';
  }
  if (lVar30 != 0) {
    pvStack_c0 = (void *)0x3b49179;
    bVar14 = System_String__Equals_3af50f0
                       (*(System_String_o **)(lVar30 + 0x20),"main-menu",5,(MethodInfo *)0x0);
    if ((char)bVar14 != '\0') {
      pvStack_c0 = (void *)0x3b4919b;
      bVar14 = System_String__Equals_3af50f0
                         (*(System_String_o **)(lVar30 + 0x70),"screen",5,(MethodInfo *)0x0);
      if ((char)bVar14 == '\0') {
        pvStack_c0 = (void *)0x3b491b9;
        bVar14 = System_String__Equals_3af50f0
                           (*(System_String_o **)(lVar30 + 0x70),(System_String_o *)"section",5,
                            (MethodInfo *)0x0);
        if ((char)bVar14 == '\0') {
          __this_07 = (System_String_o *)0x0;
          pvStack_c0 = (void *)0x3b491c8;
          bVar14 = System_String__IsNullOrEmpty(*(System_String_o **)(lVar30 + 0x48),(MethodInfo *)0x0);
          if ((char)bVar14 == '\0') {
            if (*(System_String_o **)(lVar30 + 0x48) != (System_String_o *)0x0) {
              pvStack_c0 = (void *)0x3b491eb;
              __this_07 = "main-menu-option-";
              bVar14 = System_String__StartsWith_3af5570
                                 (*(System_String_o **)(lVar30 + 0x48),"main-menu-option-",5,(MethodInfo *)0x0);
              if ((char)bVar14 == '\0') {
                return;
              }
              if (*(System_Collections_Generic_HashSet_object__o **)((long)SVar20 + 0x10) !=
                  (System_Collections_Generic_HashSet_object__o *)0x0) {
                System_Collections_Generic_HashSet_object___Contains
                          (*(System_Collections_Generic_HashSet_object__o **)((long)SVar20 + 0x10),
                           *(Il2CppObject **)(lVar30 + 0x58),MethodInfo_Boolean_Contains);
                return;
              }
            }
            __this_08 = (Il2CppObject *)0x0;
            pvStack_c0 = (void *)0x3b49221;
            il2cpp_runtime_helper_022b2c90();
            lStack_e8 = lVar30;
            SStack_e0 = SVar28;
            SStack_d8 = (System_String_Fields)entries;
            SStack_d0 = SVar20;
            SStack_c8 = (System_String_Fields)pSVar35;
            pvStack_c0 = pvVar27;
            if (g_data_057a9cbb == '\0') {
              il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
              il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
              il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchSearchEntry_get_Current);
              il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Add);
              il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Contains);
              il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_System_String);
              il2cpp_runtime_helper_023445d0(&TypeInfo_HashSet_string);
              il2cpp_runtime_helper_023445d0(&TypeInfo_IDisposable);
              il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerable_GisketchSearchEntry);
              il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerator_GisketchSearchEntry);
              il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerator);
              il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
              il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_Gisketch_Aottg2UI_Search_GisketchSea);
              il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_Gisketch_Aottg2UI_Search_GisketchSearchEntry);
              il2cpp_runtime_helper_023445d0(&TypeInfo_List_GisketchSearchEntry);
              il2cpp_runtime_helper_023445d0(&TypeInfo_StringComparer);
              g_data_057a9cbb = '\x01';
            }
            __this_03 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_GisketchSearchEntry);
            System_Collections_Generic_List_object____ctor(__this_03,MethodInfo_List_1_Gisketch_Aottg2UI_Search_GisketchSearchEntry);
            if (*(int *)(TypeInfo_StringComparer + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            if (g_data_057a9c88 == '\0') {
              il2cpp_runtime_helper_023445d0(&TypeInfo_StringComparer);
              g_data_057a9c88 = '\x01';
              iVar33 = *(int *)(TypeInfo_StringComparer + 0xe4);
            }
            else {
              iVar33 = *(int *)(TypeInfo_StringComparer + 0xe4);
            }
            if (iVar33 == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            pMVar24 = *(MethodInfo **)(*(long *)(TypeInfo_StringComparer + 0xb8) + 0x18);
            __this_04 = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_HashSet_string);
            System_Collections_Generic_HashSet_object____ctor_33e0600
                      (__this_04,(System_Collections_Generic_IEqualityComparer_T__o *)pMVar24,MethodInfo_HashSet_1_System_String);
            screenTitles = Gisketch_Aottg2UI_Search_GisketchSearchResults__ScreenTitles
                                     ((System_Collections_Generic_IEnumerable_GisketchSearchEntry__o *)
                                      __this_08,pMVar24);
            __this_05 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_GisketchSearchEntry);
            System_Collections_Generic_List_object____ctor(__this_05,MethodInfo_List_1_Gisketch_Aottg2UI_Search_GisketchSearchEntry);
            if (g_data_057a9c88 == '\0') {
              il2cpp_runtime_helper_023445d0(&TypeInfo_StringComparer);
              g_data_057a9c88 = '\x01';
              iVar33 = *(int *)(TypeInfo_StringComparer + 0xe4);
            }
            else {
              iVar33 = *(int *)(TypeInfo_StringComparer + 0xe4);
            }
            if (iVar33 == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            item = *(long **)(*(long *)(TypeInfo_StringComparer + 0xb8) + 0x18);
            __this_06 = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_HashSet_string);
            System_Collections_Generic_HashSet_object____ctor_33e0600
                      (__this_06,(System_Collections_Generic_IEqualityComparer_T__o *)item,MethodInfo_HashSet_1_System_String);
            if (__this_07 == (System_String_o *)0x0) {
              if (g_data_057a9cc0 == '\0') {
                il2cpp_runtime_helper_023445d0(&TypeInfo_Empty_d__6);
                g_data_057a9cc0 = '\x01';
              }
              __this_07 = (System_String_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Empty_d__6);
              System_Object___ctor((Il2CppObject *)__this_07,(MethodInfo *)0x0);
              (__this_07->fields)._stringLength = -2;
              iVar16 = System_Environment__get_CurrentManagedThreadId((MethodInfo *)0x0);
              *(int32_t *)&__this_07[1].monitor = iVar16;
              if (__this_07 == (System_String_o *)0x0) goto label_03b49dcf;
            }
            pSVar8 = __this_07->klass;
            uVar2._0_1_ = (pSVar8->_2).rank;
            uVar2._1_1_ = (pSVar8->_2).minimumAlignment;
            if ((ulong)uVar2 != 0) {
              pIVar9 = (pSVar8->_1).interfaceOffsets;
              lVar30 = 0;
              do {
                if (*(long *)((long)&pIVar9->interfaceType + lVar30) == TypeInfo_IEnumerable_GisketchSearchEntry) {
                  pVVar21 = &(pSVar8->vtable)._0_Equals + *(int *)((long)&pIVar9->offset + lVar30);
                  goto label_03b4956f;
                }
                lVar30 = lVar30 + 0x10;
              } while ((ulong)uVar2 << 4 != lVar30);
            }
            pVVar21 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(__this_07,TypeInfo_IEnumerable_GisketchSearchEntry,0);
label_03b4956f:
            plVar22 = (long *)(*pVVar21->methodPtr)(__this_07,pVVar21->method);
            if (plVar22 == (long *)0x0) goto label_03b49dd4;
            item = &TypeInfo_IEnumerator;
            in_stack_fffffffffffffeb0 = 0;
            do {
              lVar30 = *plVar22;
              if ((ulong)*(ushort *)(lVar30 + 0x12e) != 0) {
                lVar32 = 0;
                do {
                  if (*(long *)(*(long *)(lVar30 + 0xb0) + lVar32) == TypeInfo_IEnumerator) {
                    puVar23 = (undefined8 *)
                              ((long)*(int *)(*(long *)(lVar30 + 0xb0) + 8 + lVar32) * 0x10 + lVar30 + 0x138);
                    goto label_03b495f3;
                  }
                  lVar32 = lVar32 + 0x10;
                } while ((ulong)*(ushort *)(lVar30 + 0x12e) << 4 != lVar32);
              }
              puVar23 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar22,TypeInfo_IEnumerator,0);
label_03b495f3:
              cVar13 = (*(code *)*puVar23)();
              if (cVar13 == '\0') {
                item = (long *)&g_data_00000005;
                if (plVar22 == (long *)0x0) goto label_03b497a6;
                lVar30 = *plVar22;
                if ((ulong)*(ushort *)(lVar30 + 0x12e) == 0) goto label_03b4977f;
                lVar32 = 0;
                goto label_03b49770;
              }
              lVar30 = *plVar22;
              if ((ulong)*(ushort *)(lVar30 + 0x12e) != 0) {
                lVar32 = 0;
                do {
                  if (*(long *)(*(long *)(lVar30 + 0xb0) + lVar32) == TypeInfo_IEnumerator_GisketchSearchEntry) {
                    pMVar24 = (MethodInfo *)
                              ((long)*(int *)(*(long *)(lVar30 + 0xb0) + 8 + lVar32) * 0x10 + lVar30 + 0x138);
                    goto label_03b49663;
                  }
                  lVar32 = lVar32 + 0x10;
                } while ((ulong)*(ushort *)(lVar30 + 0x12e) << 4 != lVar32);
              }
              pMVar24 = (MethodInfo *)il2cpp_runtime_helper_02300d20(plVar22,TypeInfo_IEnumerator_GisketchSearchEntry,0);
label_03b49663:
              method_00 = (MethodInfo *)pMVar24->virtualMethodPointer;
              pGVar25 = (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *)(*pMVar24->methodPointer)();
              if (((pGVar25 != (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *)0x0) &&
                  (bVar14 = Gisketch_Aottg2UI_Search_GisketchSearchResults__IsLiveUsable(pGVar25,method_00),
                  (char)bVar14 != '\0')) &&
                 (bVar14 = Gisketch_Aottg2UI_Search_GisketchSearchResults__IsDuplicateMainMenuScreenButton
                                     (pGVar25,activeScreenId,screenTitles,pMVar24), lVar30 = MethodInfo_Void_Add,
                 (char)bVar14 == '\0')) {
                if (__this_05 == (System_Collections_Generic_List_object__o *)0x0) goto label_03b49dbb;
                piVar1 = &(__this_05->fields)._version;
                *piVar1 = *piVar1 + 1;
                pSVar10 = (__this_05->fields)._items;
                if (pSVar10 == (System_Object_array *)0x0) goto label_03b49dc0;
                uVar15 = (__this_05->fields)._size;
                if (uVar15 < (uint)pSVar10->max_length) {
                  (__this_05->fields)._size = uVar15 + 1;
                  pSVar10->m_Items[(int)uVar15] = (Il2CppObject *)pGVar25;
                  il2cpp_runtime_helper_022b4080(pSVar10->m_Items + (int)uVar15);
                }
                else {
                  System_Collections_Generic_List_object___AddWithResize
                            (__this_05,(Il2CppObject *)pGVar25,
                             *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar30 + 0x20) + 0xc0) + 0x70));
                }
                bVar14 = System_String__IsNullOrEmpty
                                   ((pGVar25->fields)._TargetId_k__BackingField,(MethodInfo *)0x0);
                if ((char)bVar14 == '\0') {
                  if (__this_06 == (System_Collections_Generic_HashSet_object__o *)0x0) {
                    do {
                      il2cpp_runtime_helper_022b2c90();
label_03b49dca:
                      il2cpp_runtime_helper_022b2c90();
label_03b49dcf:
                      do {
                        il2cpp_runtime_helper_022b2c90();
label_03b49dd4:
                        il2cpp_runtime_helper_022b2c90();
label_03b49dd9:
                        il2cpp_runtime_helper_022fefe0();
label_03b49dde:
                        il2cpp_runtime_helper_022b2c90();
                        do {
                          auVar37 = il2cpp_runtime_helper_022fefe0();
                          iVar33 = 0;
                          if (auVar37._8_4_ != 1) {
                            lVar32 = auVar37._0_8_;
                            lVar30 = 0;
                            goto joined_r0x03b4a097;
                          }
                          plVar22 = (long *)__cxa_begin_catch();
                          lVar30 = *plVar22;
                          __cxa_end_catch();
label_03b49ac8:
                          if ((Il2CppObject *)item != (Il2CppObject *)0x0) {
                            pIVar11 = ((Il2CppObject *)item)->klass;
                            uVar6._0_1_ = (pIVar11->_2).rank;
                            uVar6._1_1_ = (pIVar11->_2).minimumAlignment;
                            if ((ulong)uVar6 != 0) {
                              pIVar9 = (pIVar11->_1).interfaceOffsets;
                              lVar32 = 0;
                              do {
                                if (*(long *)((long)&pIVar9->interfaceType + lVar32) == TypeInfo_IDisposable) {
                                  pVVar21 = pIVar11->vtable + *(int *)((long)&pIVar9->offset + lVar32);
                                  goto label_03b49b2d;
                                }
                                lVar32 = lVar32 + 0x10;
                              } while ((ulong)uVar6 << 4 != lVar32);
                            }
                            pVVar21 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(item,TypeInfo_IDisposable,0);
label_03b49b2d:
                            (*pVVar21->methodPtr)(item,pVVar21->method);
                          }
                        } while (lVar30 != 0);
                        if ((iVar33 != 10) && (iVar33 != 0)) {
                          return;
                        }
                      } while (__this_05 == (System_Collections_Generic_List_object__o *)0x0);
                      System_Collections_Generic_List_object___GetEnumerator
                                ((System_Collections_Generic_List_Enumerator_T__o *)a_Stack_100,__this_05,
                                 MethodInfo_List_1_T_Enumerator_Gisketch_Aottg2UI_Search_GisketchSea);
                      item = (long *)pIStack_f0;
                      _Var38 = a_Stack_100[0];
                      if (__this_04 == (System_Collections_Generic_HashSet_object__o *)0x0) {
                        while( true ) {
                          __this_00.fields._8_8_ = __this_04;
                          __this_00.fields._list =
                               (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffeb0;
                          __this_00.fields._current = _Var38.genericMethod;
                          bVar14 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                             (__this_00,(MethodInfo_321A1D0 *)&stack0xfffffffffffffec0);
                          if ((char)bVar14 == '\0') goto label_03b49d72;
                          if ((Il2CppObject *)item == (Il2CppObject *)0x0) goto label_03b49da2;
                          bVar14 = System_String__IsNullOrEmpty
                                             (((Il2CppObject *)((long)item + 0x40))->monitor,(MethodInfo *)0x0
                                             );
                          lVar30 = MethodInfo_Void_Add;
                          if ((char)bVar14 == '\0') goto label_03b49db6;
                          if (__this_03 == (System_Collections_Generic_List_object__o *)0x0)
                          goto label_03b49d6d;
                          piVar1 = &(__this_03->fields)._version;
                          *piVar1 = *piVar1 + 1;
                          pSVar10 = (__this_03->fields)._items;
                          if (pSVar10 == (System_Object_array *)0x0) break;
                          uVar15 = (__this_03->fields)._size;
                          if (uVar15 < (uint)pSVar10->max_length) {
                            (__this_03->fields)._size = uVar15 + 1;
                            pSVar10->m_Items[(int)uVar15] = (Il2CppObject *)item;
                            il2cpp_runtime_helper_022b4080(pSVar10->m_Items + (int)uVar15,item);
                          }
                          else {
                            System_Collections_Generic_List_object___AddWithResize
                                      (__this_03,(Il2CppObject *)item,
                                       *(MethodInfo_362C220 **)
                                        (*(long *)(*(long *)(lVar30 + 0x20) + 0xc0) + 0x70));
                          }
                        }
                      }
                      else {
                        if (__this_03 == (System_Collections_Generic_List_object__o *)0x0) {
                          while( true ) {
                            __this_01.fields._8_8_ = __this_04;
                            __this_01.fields._list =
                                 (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffeb0;
                            __this_01.fields._current = _Var38.genericMethod;
                            bVar14 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                               (__this_01,(MethodInfo_321A1D0 *)&stack0xfffffffffffffec0);
                            if ((char)bVar14 == '\0') goto label_03b49d72;
                            if ((Il2CppObject *)item == (Il2CppObject *)0x0) break;
                            bVar14 = System_String__IsNullOrEmpty
                                               (((Il2CppObject *)((long)item + 0x40))->monitor,
                                                (MethodInfo *)0x0);
                            if (((char)bVar14 != '\0') ||
                               (bVar14 = System_Collections_Generic_HashSet_object___Contains
                                                   (__this_04,((Il2CppObject *)((long)item + 0x40))->monitor,
                                                    MethodInfo_Boolean_Contains), (char)bVar14 == '\0')) goto label_03b49d6d;
                          }
                        }
                        else {
                          while( true ) {
                            __this.fields._8_8_ = __this_04;
                            __this.fields._list =
                                 (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffeb0;
                            __this.fields._current = _Var38.genericMethod;
                            bVar14 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                               (__this,(MethodInfo_321A1D0 *)&stack0xfffffffffffffec0);
                            if ((char)bVar14 == '\0') goto label_03b49d72;
                            if ((Il2CppObject *)item == (Il2CppObject *)0x0) break;
                            bVar14 = System_String__IsNullOrEmpty
                                               (((Il2CppObject *)((long)item + 0x40))->monitor,
                                                (MethodInfo *)0x0);
                            if (((char)bVar14 != '\0') ||
                               (bVar14 = System_Collections_Generic_HashSet_object___Contains
                                                   (__this_04,((Il2CppObject *)((long)item + 0x40))->monitor,
                                                    MethodInfo_Boolean_Contains), (char)bVar14 == '\0')) {
                              lVar30 = MethodInfo_Void_Add;
                              piVar1 = &(__this_03->fields)._version;
                              *piVar1 = *piVar1 + 1;
                              pSVar10 = (__this_03->fields)._items;
                              if (pSVar10 == (System_Object_array *)0x0) goto label_03b49dac;
                              uVar15 = (__this_03->fields)._size;
                              if (uVar15 < (uint)pSVar10->max_length) {
                                (__this_03->fields)._size = uVar15 + 1;
                                pSVar10->m_Items[(int)uVar15] = (Il2CppObject *)item;
                                il2cpp_runtime_helper_022b4080(pSVar10->m_Items + (int)uVar15,item);
                              }
                              else {
                                System_Collections_Generic_List_object___AddWithResize
                                          (__this_03,(Il2CppObject *)item,
                                           *(MethodInfo_362C220 **)
                                            (*(long *)(*(long *)(lVar30 + 0x20) + 0xc0) + 0x70));
                              }
                            }
                          }
                        }
label_03b49da2:
                        il2cpp_runtime_helper_022b2c90();
label_03b49da7:
                        il2cpp_runtime_helper_022b2c90();
                      }
label_03b49dac:
                      il2cpp_runtime_helper_022b2c90();
label_03b49db1:
                      il2cpp_runtime_helper_022b2c90();
label_03b49db6:
                      il2cpp_runtime_helper_022b2c90();
label_03b49dbb:
                      il2cpp_runtime_helper_022b2c90();
label_03b49dc0:
                      il2cpp_runtime_helper_022b2c90();
                    } while( true );
                  }
                  System_Collections_Generic_HashSet_object___Add
                            (__this_06,(Il2CppObject *)(pGVar25->fields)._TargetId_k__BackingField,
                             MethodInfo_Boolean_Add);
                }
              }
            } while( true );
          }
        }
      }
    }
  }
  return;
}


// Gisketch.Aottg2UI.Search.GisketchSearchIndex$$HarvestKeywords
// il2cpp: System_String_o* Gisketch_Aottg2UI_Search_GisketchSearchIndex__HarvestKeywords (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* node, const MethodInfo* method);
// 0x3b48850

System_String_o *
Gisketch_Aottg2UI_Search_GisketchSearchIndex__HarvestKeywords
          (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *node,MethodInfo *method)

{
  Il2CppClass *pIVar1;
  bool_conflict bVar2;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *__this;
  System_String_o *pSVar3;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *value;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *children;
  
  if (g_data_057a9cb5 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_StringBuilder);
    g_data_057a9cb5 = '\x01';
  }
  __this = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)il2cpp_runtime_helper_023052d0(TypeInfo_StringBuilder);
  System_Text_StringBuilder___ctor((System_Text_StringBuilder_o *)__this,(MethodInfo *)0x0);
  children = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)node;
  value = __this;
  Gisketch_Aottg2UI_Search_GisketchSearchIndex__AppendText
            ((System_Text_StringBuilder_o *)__this,node,method_00);
  if (node != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    Gisketch_Aottg2UI_Search_GisketchSearchIndex__HarvestChildKeywords
              ((System_Text_StringBuilder_o *)__this,(node->fields).deferredChildren,method_01);
    children = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)(node->fields).steps;
    value = __this;
    Gisketch_Aottg2UI_Search_GisketchSearchIndex__HarvestChildKeywords
              ((System_Text_StringBuilder_o *)__this,children,method_02);
    if (__this != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)0x0) {
      pIVar1 = (__this->obj).klass;
      pSVar3 = (System_String_o *)(*pIVar1->vtable[3].methodPtr)(__this,pIVar1->vtable[3].method);
      return pSVar3;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057a9cb9 == '\0') {
    il2cpp_runtime_helper_023445d0(&" ");
    g_data_057a9cb9 = '\x01';
  }
  bVar2 = System_String__IsNullOrEmpty((System_String_o *)value,(MethodInfo *)0x0);
  if ((char)bVar2 == '\0') {
    bVar2 = System_String__IsNullOrEmpty((System_String_o *)children,(MethodInfo *)0x0);
    if ((char)bVar2 == '\0') {
      pSVar3 = System_String__Concat_3af7150
                         ((System_String_o *)value," ",(System_String_o *)children,(MethodInfo *)0x0)
      ;
      return pSVar3;
    }
  }
  else {
    value = children;
    if (children == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)0x0) {
      value = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
    }
  }
  return (System_String_o *)value;
}


// Gisketch.Aottg2UI.Search.GisketchSearchIndex$$HarvestChildKeywords
// il2cpp: void Gisketch_Aottg2UI_Search_GisketchSearchIndex__HarvestChildKeywords (System_Text_StringBuilder_o* builder, Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array* children, const MethodInfo* method);
// 0x3b48f30

void Gisketch_Aottg2UI_Search_GisketchSearchIndex__HarvestChildKeywords
               (System_Text_StringBuilder_o *builder,
               Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *children,MethodInfo *method)

{
  int32_t *piVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  ushort uVar6;
  ushort uVar7;
  System_String_c *pSVar8;
  Il2CppRuntimeInterfaceOffsetPair *pIVar9;
  System_Object_array *pSVar10;
  Il2CppClass *pIVar11;
  System_Collections_Generic_List_Enumerator_object__o __this;
  System_Collections_Generic_List_Enumerator_object__o __this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  long lVar12;
  char cVar13;
  uint uVar14;
  bool_conflict bVar15;
  int32_t iVar16;
  System_String_Fields SVar17;
  System_Text_StringBuilder_o *__this_03;
  System_Collections_Generic_List_object__o *__this_04;
  System_Collections_Generic_HashSet_object__o *pSVar18;
  System_Collections_Generic_HashSet_string__o *screenTitles;
  System_Collections_Generic_List_object__o *__this_05;
  System_Collections_Generic_HashSet_object__o *__this_06;
  System_String_o *pSVar19;
  VirtualInvokeData *pVVar20;
  long *plVar21;
  undefined8 *puVar22;
  MethodInfo *pMVar23;
  Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *pGVar24;
  Il2CppObject *__this_07;
  System_String_o *activeScreenId;
  uint uVar25;
  System_String_Fields unaff_RBX;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *unaff_RBP;
  long *item;
  System_String_Fields SVar26;
  long lVar27;
  MethodInfo *method_00;
  System_String_Fields *pSVar28;
  long lVar29;
  System_String_Fields unaff_R13;
  int iVar30;
  System_String_Fields *unaff_R15;
  undefined1 auVar31 [16];
  undefined1 auVar32 [12];
  long in_stack_ffffffffffffff00;
  _union_249689 _Var33;
  _union_249689 local_b0 [2];
  Il2CppObject *local_a0;
  long lStack_98;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *pGStack_90;
  System_String_Fields SStack_88;
  System_String_Fields SStack_80;
  System_String_Fields *pSStack_78;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGStack_70;
  undefined8 uStack_68;
  System_String_Fields SStack_60;
  System_String_Fields SStack_58;
  undefined8 uStack_50;
  System_String_Fields SStack_48;
  System_Text_StringBuilder_o *pSStack_40;
  
  if ((children == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)0x0) ||
     (uVar14 = (uint)children->max_length, (int)uVar14 < 1)) {
    return;
  }
  SVar26 = (System_String_Fields)children;
  pSVar28 = (System_String_Fields *)builder;
  if (builder == (System_Text_StringBuilder_o *)0x0) {
    unaff_RBX._stringLength = 0;
    unaff_RBX._firstChar = 0;
    unaff_RBX._6_2_ = 0;
    while (uVar25 = unaff_RBX._stringLength, builder = (System_Text_StringBuilder_o *)&"section",
          uVar25 < uVar14) {
      unaff_RBP = children->m_Items[(int)uVar25];
      if (g_data_057a9cb6 == '\0') {
        pSVar28 = &"section";
        pSStack_40 = (System_Text_StringBuilder_o *)0x3b4903d;
        il2cpp_runtime_helper_023445d0();
        g_data_057a9cb6 = '\x01';
      }
      if ((unaff_RBP == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) ||
         (pSVar19 = (unaff_RBP->fields).popover, pSVar19 == (System_String_o *)0x0)) goto label_03b49087;
      pSVar28 = *(System_String_Fields **)&pSVar19[1].fields;
      pSStack_40 = (System_Text_StringBuilder_o *)0x3b49068;
      SVar26 = "section";
      bVar15 = System_String__Equals_3af50f0
                         ((System_String_o *)pSVar28,(System_String_o *)"section",5,(MethodInfo *)0x0);
      if ((char)bVar15 == '\0') goto label_03b49087;
      unaff_RBX._stringLength = uVar25 + 1;
      unaff_RBX._4_4_ = 0;
      uVar14 = (uint)children->max_length;
      if ((int)uVar14 <= (int)unaff_RBX._stringLength) {
        return;
      }
    }
  }
  else {
    unaff_RBP = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0;
    unaff_R15 = &"section";
    SVar17 = (System_String_Fields)children;
    if (uVar14 != 0) {
      do {
        unaff_R13 = *(System_String_Fields *)(children->m_Items + (long)unaff_RBP);
        SVar26 = SVar17;
        if (g_data_057a9cb6 == '\0') {
          pSVar28 = &"section";
          pSStack_40 = (System_Text_StringBuilder_o *)0x3b48fcf;
          il2cpp_runtime_helper_023445d0();
          g_data_057a9cb6 = '\x01';
          SVar26 = SVar17;
        }
        if (unaff_R13 == (System_String_Fields)0x0) goto label_03b49087;
        if (*(System_String_o **)((long)unaff_R13 + 0xd0) == (System_String_o *)0x0) {
label_03b48f70:
          SVar26._stringLength = 0x20;
          SVar26._firstChar = 0;
          SVar26._6_2_ = 0;
          pSStack_40 = (System_Text_StringBuilder_o *)0x3b48f7f;
          unaff_RBX = (System_String_Fields)
                      System_Text_StringBuilder__Append_3b048f0(builder,0x20,(MethodInfo *)0x0);
          pSStack_40 = (System_Text_StringBuilder_o *)0x3b48f8a;
          pSVar28 = (System_String_Fields *)unaff_R13;
          SVar17 = (System_String_Fields)
                   Gisketch_Aottg2UI_Search_GisketchSearchIndex__HarvestKeywords
                             ((Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)unaff_R13,
                              (MethodInfo *)SVar26);
          if (unaff_RBX == (System_String_Fields)0x0) goto label_03b49087;
          pSStack_40 = (System_Text_StringBuilder_o *)0x3b48fa0;
          pSVar28 = (System_String_Fields *)unaff_RBX;
          System_Text_StringBuilder__Append_3b03f90
                    ((System_Text_StringBuilder_o *)unaff_RBX,(System_String_o *)SVar17,(MethodInfo *)0x0);
        }
        else {
          pSVar28 = *(System_String_Fields **)&(*(System_String_o **)((long)unaff_R13 + 0xd0))[1].fields;
          pSStack_40 = (System_Text_StringBuilder_o *)0x3b48ffe;
          SVar17 = "section";
          bVar15 = System_String__Equals_3af50f0
                             ((System_String_o *)pSVar28,(System_String_o *)"section",5,(MethodInfo *)0x0);
          if ((char)bVar15 == '\0') goto label_03b48f70;
        }
        uVar14 = (uint)children->max_length;
        unaff_RBP = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)((long)&unaff_RBP->klass + 1);
        if ((int)uVar14 <= (int)(uint)unaff_RBP) {
          return;
        }
        SVar26 = SVar17;
      } while ((uint)unaff_RBP < uVar14);
    }
  }
label_03b4908c:
  pSStack_40 = (System_Text_StringBuilder_o *)0x3b49091;
  uStack_50 = il2cpp_runtime_helper_022b2ca0();
  lVar27 = 0;
  SStack_58._stringLength = 0x3b490b4;
  SStack_58._firstChar = 0;
  SStack_58._6_2_ = 0;
  SVar17 = SVar26;
  SStack_48 = unaff_RBX;
  pSStack_40 = builder;
  bVar15 = System_String__IsNullOrEmpty((System_String_o *)SVar26,(MethodInfo *)0x0);
  if ((char)bVar15 != '\0') {
    return;
  }
  if ((System_String_Fields)pSVar28 != (System_String_Fields)0x0) {
    lVar27 = 0x20;
    SStack_58._stringLength = 0x3b490d4;
    SStack_58._firstChar = 0;
    SStack_58._6_2_ = 0;
    SVar17 = (System_String_Fields)pSVar28;
    __this_03 = System_Text_StringBuilder__Append_3b048f0
                          ((System_Text_StringBuilder_o *)pSVar28,0x20,(MethodInfo *)0x0);
    if (__this_03 != (System_Text_StringBuilder_o *)0x0) {
      System_Text_StringBuilder__Append_3b03f90(__this_03,(System_String_o *)SVar26,(MethodInfo *)0x0);
      return;
    }
  }
  SStack_58._stringLength = 0x3b490f2;
  SStack_58._firstChar = 0;
  SStack_58._6_2_ = 0;
  uStack_68 = il2cpp_runtime_helper_022b2c90();
  SStack_60 = (System_String_Fields)pSVar28;
  SStack_58 = SVar26;
  if (g_data_057a9cba == '\0') {
    pGStack_70 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x3b4911f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Contains);
    pGStack_70 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x3b4912b;
    il2cpp_runtime_helper_023445d0(&"screen");
    pGStack_70 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x3b49137;
    il2cpp_runtime_helper_023445d0(&"section");
    pGStack_70 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x3b49143;
    il2cpp_runtime_helper_023445d0(&"main-menu");
    pGStack_70 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x3b4914f;
    il2cpp_runtime_helper_023445d0(&"main-menu-option-");
    g_data_057a9cba = '\x01';
  }
  if (lVar27 != 0) {
    pGStack_70 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x3b49179;
    bVar15 = System_String__Equals_3af50f0
                       (*(System_String_o **)(lVar27 + 0x20),"main-menu",5,(MethodInfo *)0x0);
    if ((char)bVar15 != '\0') {
      pGStack_70 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x3b4919b;
      bVar15 = System_String__Equals_3af50f0
                         (*(System_String_o **)(lVar27 + 0x70),"screen",5,(MethodInfo *)0x0);
      if ((char)bVar15 == '\0') {
        pGStack_70 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x3b491b9;
        bVar15 = System_String__Equals_3af50f0
                           (*(System_String_o **)(lVar27 + 0x70),(System_String_o *)"section",5,
                            (MethodInfo *)0x0);
        if ((char)bVar15 == '\0') {
          pSVar19 = (System_String_o *)0x0;
          pGStack_70 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x3b491c8;
          bVar15 = System_String__IsNullOrEmpty(*(System_String_o **)(lVar27 + 0x48),(MethodInfo *)0x0);
          if ((char)bVar15 == '\0') {
            if (*(System_String_o **)(lVar27 + 0x48) != (System_String_o *)0x0) {
              pGStack_70 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x3b491eb;
              pSVar19 = "main-menu-option-";
              bVar15 = System_String__StartsWith_3af5570
                                 (*(System_String_o **)(lVar27 + 0x48),"main-menu-option-",5,(MethodInfo *)0x0);
              if ((char)bVar15 == '\0') {
                return;
              }
              pSVar18 = (System_Collections_Generic_HashSet_object__o *)
                        ((Gisketch_Aottg2UI_Data_GisketchNodeDefinition_Fields *)((long)SVar17 + 0x10))->type;
              if (pSVar18 != (System_Collections_Generic_HashSet_object__o *)0x0) {
                System_Collections_Generic_HashSet_object___Contains
                          (pSVar18,*(Il2CppObject **)(lVar27 + 0x58),MethodInfo_Boolean_Contains);
                return;
              }
            }
            __this_07 = (Il2CppObject *)0x0;
            pGStack_70 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x3b49221;
            il2cpp_runtime_helper_022b2c90();
            lStack_98 = lVar27;
            pGStack_90 = children;
            SStack_88 = unaff_R13;
            SStack_80 = SVar17;
            pSStack_78 = unaff_R15;
            pGStack_70 = unaff_RBP;
            if (g_data_057a9cbb == '\0') {
              il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
              il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
              il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchSearchEntry_get_Current);
              il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Add);
              il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Contains);
              il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_System_String);
              il2cpp_runtime_helper_023445d0(&TypeInfo_HashSet_string);
              il2cpp_runtime_helper_023445d0(&TypeInfo_IDisposable);
              il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerable_GisketchSearchEntry);
              il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerator_GisketchSearchEntry);
              il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerator);
              il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
              il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_Gisketch_Aottg2UI_Search_GisketchSea);
              il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_Gisketch_Aottg2UI_Search_GisketchSearchEntry);
              il2cpp_runtime_helper_023445d0(&TypeInfo_List_GisketchSearchEntry);
              il2cpp_runtime_helper_023445d0(&TypeInfo_StringComparer);
              g_data_057a9cbb = '\x01';
            }
            __this_04 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_GisketchSearchEntry);
            System_Collections_Generic_List_object____ctor(__this_04,MethodInfo_List_1_Gisketch_Aottg2UI_Search_GisketchSearchEntry);
            if (*(int *)(TypeInfo_StringComparer + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            if (g_data_057a9c88 == '\0') {
              il2cpp_runtime_helper_023445d0(&TypeInfo_StringComparer);
              g_data_057a9c88 = '\x01';
              iVar30 = *(int *)(TypeInfo_StringComparer + 0xe4);
            }
            else {
              iVar30 = *(int *)(TypeInfo_StringComparer + 0xe4);
            }
            if (iVar30 == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            pMVar23 = *(MethodInfo **)(*(long *)(TypeInfo_StringComparer + 0xb8) + 0x18);
            pSVar18 = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_HashSet_string);
            System_Collections_Generic_HashSet_object____ctor_33e0600
                      (pSVar18,(System_Collections_Generic_IEqualityComparer_T__o *)pMVar23,MethodInfo_HashSet_1_System_String);
            screenTitles = Gisketch_Aottg2UI_Search_GisketchSearchResults__ScreenTitles
                                     ((System_Collections_Generic_IEnumerable_GisketchSearchEntry__o *)
                                      __this_07,pMVar23);
            __this_05 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_GisketchSearchEntry);
            System_Collections_Generic_List_object____ctor(__this_05,MethodInfo_List_1_Gisketch_Aottg2UI_Search_GisketchSearchEntry);
            if (g_data_057a9c88 == '\0') {
              il2cpp_runtime_helper_023445d0(&TypeInfo_StringComparer);
              g_data_057a9c88 = '\x01';
              iVar30 = *(int *)(TypeInfo_StringComparer + 0xe4);
            }
            else {
              iVar30 = *(int *)(TypeInfo_StringComparer + 0xe4);
            }
            if (iVar30 == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            item = *(long **)(*(long *)(TypeInfo_StringComparer + 0xb8) + 0x18);
            __this_06 = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_HashSet_string);
            System_Collections_Generic_HashSet_object____ctor_33e0600
                      (__this_06,(System_Collections_Generic_IEqualityComparer_T__o *)item,MethodInfo_HashSet_1_System_String);
            if (pSVar19 == (System_String_o *)0x0) {
              if (g_data_057a9cc0 == '\0') {
                il2cpp_runtime_helper_023445d0(&TypeInfo_Empty_d__6);
                g_data_057a9cc0 = '\x01';
              }
              pSVar19 = (System_String_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Empty_d__6);
              System_Object___ctor((Il2CppObject *)pSVar19,(MethodInfo *)0x0);
              (pSVar19->fields)._stringLength = -2;
              iVar16 = System_Environment__get_CurrentManagedThreadId((MethodInfo *)0x0);
              *(int32_t *)&pSVar19[1].monitor = iVar16;
              if (pSVar19 == (System_String_o *)0x0) goto label_03b49dcf;
            }
            pSVar8 = pSVar19->klass;
            uVar2._0_1_ = (pSVar8->_2).rank;
            uVar2._1_1_ = (pSVar8->_2).minimumAlignment;
            if ((ulong)uVar2 != 0) {
              pIVar9 = (pSVar8->_1).interfaceOffsets;
              lVar27 = 0;
              do {
                if (*(long *)((long)&pIVar9->interfaceType + lVar27) == TypeInfo_IEnumerable_GisketchSearchEntry) {
                  pVVar20 = &(pSVar8->vtable)._0_Equals + *(int *)((long)&pIVar9->offset + lVar27);
                  goto label_03b4956f;
                }
                lVar27 = lVar27 + 0x10;
              } while ((ulong)uVar2 << 4 != lVar27);
            }
            pVVar20 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(pSVar19,TypeInfo_IEnumerable_GisketchSearchEntry,0);
label_03b4956f:
            plVar21 = (long *)(*pVVar20->methodPtr)(pSVar19,pVVar20->method);
            if (plVar21 == (long *)0x0) goto label_03b49dd4;
            item = &TypeInfo_IEnumerator;
            in_stack_ffffffffffffff00 = 0;
            do {
              lVar27 = *plVar21;
              if ((ulong)*(ushort *)(lVar27 + 0x12e) != 0) {
                lVar29 = 0;
                do {
                  if (*(long *)(*(long *)(lVar27 + 0xb0) + lVar29) == TypeInfo_IEnumerator) {
                    puVar22 = (undefined8 *)
                              ((long)*(int *)(*(long *)(lVar27 + 0xb0) + 8 + lVar29) * 0x10 + lVar27 + 0x138);
                    goto label_03b495f3;
                  }
                  lVar29 = lVar29 + 0x10;
                } while ((ulong)*(ushort *)(lVar27 + 0x12e) << 4 != lVar29);
              }
              puVar22 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar21,TypeInfo_IEnumerator,0);
label_03b495f3:
              cVar13 = (*(code *)*puVar22)();
              if (cVar13 == '\0') {
                item = (long *)&g_data_00000005;
                if (plVar21 == (long *)0x0) goto label_03b497a6;
                lVar27 = *plVar21;
                if ((ulong)*(ushort *)(lVar27 + 0x12e) == 0) goto label_03b4977f;
                lVar29 = 0;
                goto label_03b49770;
              }
              lVar27 = *plVar21;
              if ((ulong)*(ushort *)(lVar27 + 0x12e) != 0) {
                lVar29 = 0;
                do {
                  if (*(long *)(*(long *)(lVar27 + 0xb0) + lVar29) == TypeInfo_IEnumerator_GisketchSearchEntry) {
                    pMVar23 = (MethodInfo *)
                              ((long)*(int *)(*(long *)(lVar27 + 0xb0) + 8 + lVar29) * 0x10 + lVar27 + 0x138);
                    goto label_03b49663;
                  }
                  lVar29 = lVar29 + 0x10;
                } while ((ulong)*(ushort *)(lVar27 + 0x12e) << 4 != lVar29);
              }
              pMVar23 = (MethodInfo *)il2cpp_runtime_helper_02300d20(plVar21,TypeInfo_IEnumerator_GisketchSearchEntry,0);
label_03b49663:
              method_00 = (MethodInfo *)pMVar23->virtualMethodPointer;
              pGVar24 = (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *)(*pMVar23->methodPointer)();
              if (((pGVar24 != (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *)0x0) &&
                  (bVar15 = Gisketch_Aottg2UI_Search_GisketchSearchResults__IsLiveUsable(pGVar24,method_00),
                  (char)bVar15 != '\0')) &&
                 (bVar15 = Gisketch_Aottg2UI_Search_GisketchSearchResults__IsDuplicateMainMenuScreenButton
                                     (pGVar24,activeScreenId,screenTitles,pMVar23), lVar27 = MethodInfo_Void_Add,
                 (char)bVar15 == '\0')) {
                if (__this_05 == (System_Collections_Generic_List_object__o *)0x0) goto label_03b49dbb;
                piVar1 = &(__this_05->fields)._version;
                *piVar1 = *piVar1 + 1;
                pSVar10 = (__this_05->fields)._items;
                if (pSVar10 == (System_Object_array *)0x0) goto label_03b49dc0;
                uVar14 = (__this_05->fields)._size;
                if (uVar14 < (uint)pSVar10->max_length) {
                  (__this_05->fields)._size = uVar14 + 1;
                  pSVar10->m_Items[(int)uVar14] = (Il2CppObject *)pGVar24;
                  il2cpp_runtime_helper_022b4080(pSVar10->m_Items + (int)uVar14);
                }
                else {
                  System_Collections_Generic_List_object___AddWithResize
                            (__this_05,(Il2CppObject *)pGVar24,
                             *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar27 + 0x20) + 0xc0) + 0x70));
                }
                bVar15 = System_String__IsNullOrEmpty
                                   ((pGVar24->fields)._TargetId_k__BackingField,(MethodInfo *)0x0);
                if ((char)bVar15 == '\0') {
                  if (__this_06 == (System_Collections_Generic_HashSet_object__o *)0x0) {
                    do {
                      il2cpp_runtime_helper_022b2c90();
label_03b49dca:
                      il2cpp_runtime_helper_022b2c90();
label_03b49dcf:
                      do {
                        il2cpp_runtime_helper_022b2c90();
label_03b49dd4:
                        il2cpp_runtime_helper_022b2c90();
label_03b49dd9:
                        il2cpp_runtime_helper_022fefe0();
label_03b49dde:
                        il2cpp_runtime_helper_022b2c90();
                        do {
                          auVar32 = il2cpp_runtime_helper_022fefe0();
                          iVar30 = 0;
                          if (auVar32._8_4_ != 1) {
                            lVar29 = auVar32._0_8_;
                            lVar27 = 0;
                            goto joined_r0x03b4a097;
                          }
                          plVar21 = (long *)__cxa_begin_catch();
                          lVar27 = *plVar21;
                          __cxa_end_catch();
label_03b49ac8:
                          if ((Il2CppObject *)item != (Il2CppObject *)0x0) {
                            pIVar11 = ((Il2CppObject *)item)->klass;
                            uVar6._0_1_ = (pIVar11->_2).rank;
                            uVar6._1_1_ = (pIVar11->_2).minimumAlignment;
                            if ((ulong)uVar6 != 0) {
                              pIVar9 = (pIVar11->_1).interfaceOffsets;
                              lVar29 = 0;
                              do {
                                if (*(long *)((long)&pIVar9->interfaceType + lVar29) == TypeInfo_IDisposable) {
                                  pVVar20 = pIVar11->vtable + *(int *)((long)&pIVar9->offset + lVar29);
                                  goto label_03b49b2d;
                                }
                                lVar29 = lVar29 + 0x10;
                              } while ((ulong)uVar6 << 4 != lVar29);
                            }
                            pVVar20 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(item,TypeInfo_IDisposable,0);
label_03b49b2d:
                            (*pVVar20->methodPtr)(item,pVVar20->method);
                          }
                        } while (lVar27 != 0);
                        if ((iVar30 != 10) && (iVar30 != 0)) {
                          return;
                        }
                      } while (__this_05 == (System_Collections_Generic_List_object__o *)0x0);
                      System_Collections_Generic_List_object___GetEnumerator
                                ((System_Collections_Generic_List_Enumerator_T__o *)local_b0,__this_05,
                                 MethodInfo_List_1_T_Enumerator_Gisketch_Aottg2UI_Search_GisketchSea);
                      item = (long *)local_a0;
                      _Var33 = local_b0[0];
                      if (pSVar18 == (System_Collections_Generic_HashSet_object__o *)0x0) {
                        while( true ) {
                          __this_00.fields._8_8_ = pSVar18;
                          __this_00.fields._list =
                               (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff00;
                          __this_00.fields._current = _Var33.genericMethod;
                          bVar15 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                             (__this_00,(MethodInfo_321A1D0 *)&stack0xffffffffffffff10);
                          if ((char)bVar15 == '\0') goto label_03b49d72;
                          if ((Il2CppObject *)item == (Il2CppObject *)0x0) goto label_03b49da2;
                          bVar15 = System_String__IsNullOrEmpty
                                             (((Il2CppObject *)((long)item + 0x40))->monitor,(MethodInfo *)0x0
                                             );
                          lVar27 = MethodInfo_Void_Add;
                          if ((char)bVar15 == '\0') goto label_03b49db6;
                          if (__this_04 == (System_Collections_Generic_List_object__o *)0x0)
                          goto label_03b49d6d;
                          piVar1 = &(__this_04->fields)._version;
                          *piVar1 = *piVar1 + 1;
                          pSVar10 = (__this_04->fields)._items;
                          if (pSVar10 == (System_Object_array *)0x0) break;
                          uVar14 = (__this_04->fields)._size;
                          if (uVar14 < (uint)pSVar10->max_length) {
                            (__this_04->fields)._size = uVar14 + 1;
                            pSVar10->m_Items[(int)uVar14] = (Il2CppObject *)item;
                            il2cpp_runtime_helper_022b4080(pSVar10->m_Items + (int)uVar14,item);
                          }
                          else {
                            System_Collections_Generic_List_object___AddWithResize
                                      (__this_04,(Il2CppObject *)item,
                                       *(MethodInfo_362C220 **)
                                        (*(long *)(*(long *)(lVar27 + 0x20) + 0xc0) + 0x70));
                          }
                        }
                      }
                      else {
                        if (__this_04 == (System_Collections_Generic_List_object__o *)0x0) {
                          while( true ) {
                            __this_01.fields._8_8_ = pSVar18;
                            __this_01.fields._list =
                                 (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff00;
                            __this_01.fields._current = _Var33.genericMethod;
                            bVar15 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                               (__this_01,(MethodInfo_321A1D0 *)&stack0xffffffffffffff10);
                            if ((char)bVar15 == '\0') goto label_03b49d72;
                            if ((Il2CppObject *)item == (Il2CppObject *)0x0) break;
                            bVar15 = System_String__IsNullOrEmpty
                                               (((Il2CppObject *)((long)item + 0x40))->monitor,
                                                (MethodInfo *)0x0);
                            if (((char)bVar15 != '\0') ||
                               (bVar15 = System_Collections_Generic_HashSet_object___Contains
                                                   (pSVar18,((Il2CppObject *)((long)item + 0x40))->monitor,
                                                    MethodInfo_Boolean_Contains), (char)bVar15 == '\0')) goto label_03b49d6d;
                          }
                        }
                        else {
                          while( true ) {
                            __this.fields._8_8_ = pSVar18;
                            __this.fields._list =
                                 (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff00;
                            __this.fields._current = _Var33.genericMethod;
                            bVar15 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                               (__this,(MethodInfo_321A1D0 *)&stack0xffffffffffffff10);
                            if ((char)bVar15 == '\0') goto label_03b49d72;
                            if ((Il2CppObject *)item == (Il2CppObject *)0x0) break;
                            bVar15 = System_String__IsNullOrEmpty
                                               (((Il2CppObject *)((long)item + 0x40))->monitor,
                                                (MethodInfo *)0x0);
                            if (((char)bVar15 != '\0') ||
                               (bVar15 = System_Collections_Generic_HashSet_object___Contains
                                                   (pSVar18,((Il2CppObject *)((long)item + 0x40))->monitor,
                                                    MethodInfo_Boolean_Contains), (char)bVar15 == '\0')) {
                              lVar27 = MethodInfo_Void_Add;
                              piVar1 = &(__this_04->fields)._version;
                              *piVar1 = *piVar1 + 1;
                              pSVar10 = (__this_04->fields)._items;
                              if (pSVar10 == (System_Object_array *)0x0) goto label_03b49dac;
                              uVar14 = (__this_04->fields)._size;
                              if (uVar14 < (uint)pSVar10->max_length) {
                                (__this_04->fields)._size = uVar14 + 1;
                                pSVar10->m_Items[(int)uVar14] = (Il2CppObject *)item;
                                il2cpp_runtime_helper_022b4080(pSVar10->m_Items + (int)uVar14,item);
                              }
                              else {
                                System_Collections_Generic_List_object___AddWithResize
                                          (__this_04,(Il2CppObject *)item,
                                           *(MethodInfo_362C220 **)
                                            (*(long *)(*(long *)(lVar27 + 0x20) + 0xc0) + 0x70));
                              }
                            }
                          }
                        }
label_03b49da2:
                        il2cpp_runtime_helper_022b2c90();
label_03b49da7:
                        il2cpp_runtime_helper_022b2c90();
                      }
label_03b49dac:
                      il2cpp_runtime_helper_022b2c90();
label_03b49db1:
                      il2cpp_runtime_helper_022b2c90();
label_03b49db6:
                      il2cpp_runtime_helper_022b2c90();
label_03b49dbb:
                      il2cpp_runtime_helper_022b2c90();
label_03b49dc0:
                      il2cpp_runtime_helper_022b2c90();
                    } while( true );
                  }
                  System_Collections_Generic_HashSet_object___Add
                            (__this_06,(Il2CppObject *)(pGVar24->fields)._TargetId_k__BackingField,
                             MethodInfo_Boolean_Add);
                }
              }
            } while( true );
          }
        }
      }
    }
  }
  return;
label_03b49087:
  pSStack_40 = (System_Text_StringBuilder_o *)0x3b4908c;
  il2cpp_runtime_helper_022b2c90();
  goto label_03b4908c;
  while (lVar29 = lVar29 + 0x10, (ulong)*(ushort *)(lVar27 + 0x12e) << 4 != lVar29) {
label_03b49770:
    if (*(long *)(*(long *)(lVar27 + 0xb0) + lVar29) == TypeInfo_IDisposable) {
      puVar22 = (undefined8 *)(lVar27 + (long)*(int *)(*(long *)(lVar27 + 0xb0) + 8 + lVar29) * 0x10 + 0x138);
      goto label_03b4979d;
    }
  }
label_03b4977f:
  puVar22 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar21,TypeInfo_IDisposable,0);
label_03b4979d:
  (*(code *)*puVar22)(plVar21);
label_03b497a6:
  if (in_stack_ffffffffffffff00 != 0) goto label_03b49dd9;
  if (__this_07 == (Il2CppObject *)0x0) {
    if (g_data_057a9cc0 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Empty_d__6);
      g_data_057a9cc0 = '\x01';
    }
    __this_07 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_Empty_d__6);
    System_Object___ctor(__this_07,(MethodInfo *)0x0);
    *(undefined4 *)&__this_07[1].klass = 0xfffffffe;
    iVar16 = System_Environment__get_CurrentManagedThreadId((MethodInfo *)0x0);
    *(int32_t *)&__this_07[2].klass = iVar16;
    item = (long *)0x0;
    if (__this_07 == (Il2CppObject *)0x0) goto label_03b49dcf;
  }
  pIVar11 = __this_07->klass;
  uVar3._0_1_ = (pIVar11->_2).rank;
  uVar3._1_1_ = (pIVar11->_2).minimumAlignment;
  if ((ulong)uVar3 != 0) {
    pIVar9 = (pIVar11->_1).interfaceOffsets;
    lVar27 = 0;
    do {
      if (*(long *)((long)&pIVar9->interfaceType + lVar27) == TypeInfo_IEnumerable_GisketchSearchEntry) {
        pVVar20 = pIVar11->vtable + *(int *)((long)&pIVar9->offset + lVar27);
        goto label_03b49881;
      }
      lVar27 = lVar27 + 0x10;
    } while ((ulong)uVar3 << 4 != lVar27);
  }
  pVVar20 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(__this_07,TypeInfo_IEnumerable_GisketchSearchEntry,0);
label_03b49881:
  item = (long *)(*pVVar20->methodPtr)(__this_07,pVVar20->method);
  if ((Il2CppObject *)item == (Il2CppObject *)0x0) goto label_03b49dde;
  do {
    do {
      pIVar11 = ((Il2CppObject *)item)->klass;
      uVar4._0_1_ = (pIVar11->_2).rank;
      uVar4._1_1_ = (pIVar11->_2).minimumAlignment;
      if ((ulong)uVar4 != 0) {
        pIVar9 = (pIVar11->_1).interfaceOffsets;
        lVar27 = 0;
        do {
          if (*(long *)((long)&pIVar9->interfaceType + lVar27) == TypeInfo_IEnumerator) {
            pVVar20 = pIVar11->vtable + *(int *)((long)&pIVar9->offset + lVar27);
            goto label_03b49903;
          }
          lVar27 = lVar27 + 0x10;
        } while ((ulong)uVar4 << 4 != lVar27);
      }
      pVVar20 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(item,TypeInfo_IEnumerator,0);
label_03b49903:
      cVar13 = (*pVVar20->methodPtr)(item,pVVar20->method);
      if (cVar13 == '\0') {
        iVar30 = 10;
        lVar27 = 0;
        goto label_03b49ac8;
      }
      pIVar11 = ((Il2CppObject *)item)->klass;
      uVar5._0_1_ = (pIVar11->_2).rank;
      uVar5._1_1_ = (pIVar11->_2).minimumAlignment;
      if ((ulong)uVar5 != 0) {
        pIVar9 = (pIVar11->_1).interfaceOffsets;
        lVar27 = 0;
        do {
          if (*(long *)((long)&pIVar9->interfaceType + lVar27) == TypeInfo_IEnumerator_GisketchSearchEntry) {
            pVVar20 = pIVar11->vtable + *(int *)((long)&pIVar9->offset + lVar27);
            goto label_03b49973;
          }
          lVar27 = lVar27 + 0x10;
        } while ((ulong)uVar5 << 4 != lVar27);
      }
      pVVar20 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(item,TypeInfo_IEnumerator_GisketchSearchEntry,0);
label_03b49973:
      auVar31 = (*pVVar20->methodPtr)(item,pVVar20->method);
      pGVar24 = auVar31._0_8_;
      bVar15 = Gisketch_Aottg2UI_Search_GisketchSearchResults__IsActiveControl
                         (pGVar24,activeScreenId,auVar31._8_8_);
      if ((char)bVar15 == '\0') break;
      if (pGVar24 == (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *)0x0) goto label_03b49da7;
      bVar15 = System_String__IsNullOrEmpty((pGVar24->fields)._TargetId_k__BackingField,(MethodInfo *)0x0);
      if ((char)bVar15 != '\0') break;
      if (__this_06 == (System_Collections_Generic_HashSet_object__o *)0x0) goto label_03b49db1;
      bVar15 = System_Collections_Generic_HashSet_object___Contains
                         (__this_06,(Il2CppObject *)(pGVar24->fields)._TargetId_k__BackingField,MethodInfo_Boolean_Contains);
    } while ((char)bVar15 == '\0');
    lVar27 = MethodInfo_Void_Add;
    if (__this_04 == (System_Collections_Generic_List_object__o *)0x0) {
      il2cpp_runtime_helper_022b2c90();
label_03b49d9d:
      il2cpp_runtime_helper_022b2c90();
      goto label_03b49da2;
    }
    piVar1 = &(__this_04->fields)._version;
    *piVar1 = *piVar1 + 1;
    pSVar10 = (__this_04->fields)._items;
    if (pSVar10 == (System_Object_array *)0x0) goto label_03b49d9d;
    uVar14 = (__this_04->fields)._size;
    if (uVar14 < (uint)pSVar10->max_length) {
      (__this_04->fields)._size = uVar14 + 1;
      pSVar10->m_Items[(int)uVar14] = (Il2CppObject *)pGVar24;
      il2cpp_runtime_helper_022b4080();
    }
    else {
      System_Collections_Generic_List_object___AddWithResize
                (__this_04,(Il2CppObject *)pGVar24,
                 *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar27 + 0x20) + 0xc0) + 0x70));
    }
    if ((((pGVar24 != (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *)0x0) &&
         (bVar15 = System_String__IsNullOrEmpty((pGVar24->fields)._ScreenId_k__BackingField,(MethodInfo *)0x0)
         , (char)bVar15 == '\0')) &&
        (bVar15 = System_String__IsNullOrEmpty(activeScreenId,(MethodInfo *)0x0), (char)bVar15 == '\0')) &&
       ((bVar15 = System_String__Equals_3af50f0
                            ((pGVar24->fields)._ScreenId_k__BackingField,activeScreenId,5,(MethodInfo *)0x0),
        (char)bVar15 != '\0' &&
        (bVar15 = System_String__IsNullOrEmpty((pGVar24->fields)._TargetId_k__BackingField,(MethodInfo *)0x0),
        (char)bVar15 == '\0')))) {
      if (pSVar18 == (System_Collections_Generic_HashSet_object__o *)0x0) goto label_03b49dca;
      System_Collections_Generic_HashSet_object___Add
                (pSVar18,(Il2CppObject *)(pGVar24->fields)._TargetId_k__BackingField,MethodInfo_Boolean_Add);
    }
  } while( true );
joined_r0x03b4a097:
  lVar12 = lVar29;
  if ((Il2CppObject *)item != (Il2CppObject *)0x0) {
    pIVar11 = ((Il2CppObject *)item)->klass;
    uVar7._0_1_ = (pIVar11->_2).rank;
    uVar7._1_1_ = (pIVar11->_2).minimumAlignment;
    if ((ulong)uVar7 != 0) {
      pIVar9 = (pIVar11->_1).interfaceOffsets;
      lVar29 = 0;
      do {
        if (*(long *)((long)&pIVar9->interfaceType + lVar29) == TypeInfo_IDisposable) {
          pVVar20 = pIVar11->vtable + *(int *)((long)&pIVar9->offset + lVar29);
          goto label_03b4a0ed;
        }
        lVar29 = lVar29 + 0x10;
      } while ((ulong)uVar7 << 4 != lVar29);
    }
    pVVar20 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(item,TypeInfo_IDisposable,0);
label_03b4a0ed:
    (*pVVar20->methodPtr)(item,pVVar20->method);
  }
  if (lVar27 == 0) {
    _Unwind_Resume(lVar12);
  }
  lVar29 = il2cpp_runtime_helper_022fefe0();
  lVar27 = lVar12;
  goto joined_r0x03b4a097;
label_03b49d6d:
  il2cpp_runtime_helper_022b2c90();
label_03b49d72:
  __this_02.fields._8_8_ = pSVar18;
  __this_02.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff00;
  __this_02.fields._current = _Var33.genericMethod;
  System_Collections_Generic_List_Enumerator_object___Dispose
            (__this_02,(MethodInfo_321A1C0 *)&stack0xffffffffffffff10);
  return;
}


// Gisketch.Aottg2UI.Search.GisketchSearchIndex$$AppendText
// il2cpp: void Gisketch_Aottg2UI_Search_GisketchSearchIndex__AppendText (System_Text_StringBuilder_o* builder, Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* node, const MethodInfo* method);
// 0x3b48e00

void Gisketch_Aottg2UI_Search_GisketchSearchIndex__AppendText
               (System_Text_StringBuilder_o *builder,Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *node,
               MethodInfo *method)

{
  int32_t *piVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  ushort uVar6;
  ushort uVar7;
  System_String_c *pSVar8;
  Il2CppRuntimeInterfaceOffsetPair *pIVar9;
  System_Object_array *pSVar10;
  Il2CppClass *pIVar11;
  System_Collections_Generic_List_Enumerator_object__o __this;
  System_Collections_Generic_List_Enumerator_object__o __this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  long lVar12;
  char cVar13;
  bool_conflict bVar14;
  uint uVar15;
  int32_t iVar16;
  System_Text_StringBuilder_o *pSVar17;
  System_String_Fields SVar18;
  System_String_Fields value;
  System_Collections_Generic_List_object__o *__this_03;
  System_Collections_Generic_HashSet_object__o *pSVar19;
  System_Collections_Generic_HashSet_string__o *screenTitles;
  System_Collections_Generic_List_object__o *__this_04;
  System_Collections_Generic_HashSet_object__o *__this_05;
  System_String_o *pSVar20;
  VirtualInvokeData *pVVar21;
  long *plVar22;
  undefined8 *puVar23;
  MethodInfo *pMVar24;
  Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *pGVar25;
  Il2CppObject *__this_06;
  System_String_o *activeScreenId;
  uint uVar26;
  System_String_o *unaff_RBP;
  long *item;
  System_String_Fields SVar27;
  System_String_Fields SVar28;
  long lVar29;
  MethodInfo *method_00;
  System_String_Fields __this_07;
  System_String_Fields *pSVar30;
  long lVar31;
  System_String_Fields unaff_R13;
  int iVar32;
  System_String_Fields *pSVar33;
  System_String_Fields *value_00;
  undefined1 auVar34 [16];
  undefined1 auVar35 [12];
  long in_stack_fffffffffffffee8;
  _union_249689 _Var36;
  _union_249689 a_Stack_c8 [2];
  Il2CppObject *pIStack_b8;
  long lStack_b0;
  System_String_Fields SStack_a8;
  System_String_Fields SStack_a0;
  System_String_Fields SStack_98;
  System_String_Fields SStack_90;
  System_String_o *pSStack_88;
  undefined8 uStack_80;
  System_String_Fields SStack_78;
  System_String_Fields SStack_70;
  undefined8 uStack_68;
  System_String_Fields SStack_60;
  System_String_Fields SStack_58;
  undefined8 uStack_50;
  System_String_Fields SStack_48;
  
  if (node == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    return;
  }
  value_00 = (System_String_Fields *)(node->fields).text;
  SVar27._stringLength = 0;
  SVar27._firstChar = 0;
  SVar27._6_2_ = 0;
  __this_07 = (System_String_Fields)value_00;
  bVar14 = System_String__IsNullOrEmpty((System_String_o *)value_00,(MethodInfo *)0x0);
  if ((char)bVar14 == '\0') {
    if (builder != (System_Text_StringBuilder_o *)0x0) {
      SVar27._stringLength = 0x20;
      SVar27._firstChar = 0;
      SVar27._6_2_ = 0;
      __this_07 = (System_String_Fields)builder;
      pSVar17 = System_Text_StringBuilder__Append_3b048f0(builder,0x20,(MethodInfo *)0x0);
      if (pSVar17 != (System_Text_StringBuilder_o *)0x0) {
        System_Text_StringBuilder__Append_3b03f90(pSVar17,(System_String_o *)value_00,(MethodInfo *)0x0);
        goto label_03b48e54;
      }
    }
  }
  else {
label_03b48e54:
    value_00 = (System_String_Fields *)(node->fields).placeholder;
    SVar27._stringLength = 0;
    SVar27._firstChar = 0;
    SVar27._6_2_ = 0;
    __this_07 = (System_String_Fields)value_00;
    bVar14 = System_String__IsNullOrEmpty((System_String_o *)value_00,(MethodInfo *)0x0);
    if ((char)bVar14 == '\0') {
      if (builder != (System_Text_StringBuilder_o *)0x0) {
        SVar27._stringLength = 0x20;
        SVar27._firstChar = 0;
        SVar27._6_2_ = 0;
        __this_07 = (System_String_Fields)builder;
        pSVar17 = System_Text_StringBuilder__Append_3b048f0(builder,0x20,(MethodInfo *)0x0);
        if (pSVar17 != (System_Text_StringBuilder_o *)0x0) {
          System_Text_StringBuilder__Append_3b03f90(pSVar17,(System_String_o *)value_00,(MethodInfo *)0x0);
          goto label_03b48e94;
        }
      }
    }
    else {
label_03b48e94:
      value_00 = (System_String_Fields *)(node->fields).choiceOptionRenderer;
      SVar27._stringLength = 0;
      SVar27._firstChar = 0;
      SVar27._6_2_ = 0;
      __this_07 = (System_String_Fields)value_00;
      bVar14 = System_String__IsNullOrEmpty((System_String_o *)value_00,(MethodInfo *)0x0);
      if ((char)bVar14 == '\0') {
        if (builder != (System_Text_StringBuilder_o *)0x0) {
          SVar27._stringLength = 0x20;
          SVar27._firstChar = 0;
          SVar27._6_2_ = 0;
          __this_07 = (System_String_Fields)builder;
          pSVar17 = System_Text_StringBuilder__Append_3b048f0(builder,0x20,(MethodInfo *)0x0);
          if (pSVar17 != (System_Text_StringBuilder_o *)0x0) {
            System_Text_StringBuilder__Append_3b03f90(pSVar17,(System_String_o *)value_00,(MethodInfo *)0x0);
            goto label_03b48ecf;
          }
        }
      }
      else {
label_03b48ecf:
        pSVar20 = (node->fields).popover;
        if (pSVar20 == (System_String_o *)0x0) {
          return;
        }
        node = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)pSVar20[1].klass;
        SVar27._stringLength = 0;
        SVar27._firstChar = 0;
        SVar27._6_2_ = 0;
        __this_07 = (System_String_Fields)node;
        bVar14 = System_String__IsNullOrEmpty((System_String_o *)node,(MethodInfo *)0x0);
        if ((char)bVar14 != '\0') {
          return;
        }
        if (builder != (System_Text_StringBuilder_o *)0x0) {
          SVar27._stringLength = 0x20;
          SVar27._firstChar = 0;
          SVar27._6_2_ = 0;
          pSVar17 = System_Text_StringBuilder__Append_3b048f0(builder,0x20,(MethodInfo *)0x0);
          __this_07 = (System_String_Fields)builder;
          if (pSVar17 != (System_Text_StringBuilder_o *)0x0) {
            System_Text_StringBuilder__Append_3b03f90(pSVar17,(System_String_o *)node,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
  uStack_50 = il2cpp_runtime_helper_022b2c90();
  if ((SVar27 == (System_String_Fields)0x0) || (uVar15 = *(uint *)((long)SVar27 + 0x18), (int)uVar15 < 1)) {
    return;
  }
  SVar28 = SVar27;
  pSVar30 = (System_String_Fields *)__this_07;
  SStack_48 = (System_String_Fields)node;
  if (__this_07 == (System_String_Fields)0x0) {
    SVar18._stringLength = 0;
    SVar18._firstChar = 0;
    SVar18._6_2_ = 0;
    pSVar33 = &"section";
    while (uVar26 = SVar18._stringLength, node = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)SVar18,
          __this_07 = (System_String_Fields)pSVar33, uVar26 < uVar15) {
      unaff_RBP = ((System_String_o **)((long)SVar27 + 0x20))[(int)uVar26];
      if (g_data_057a9cb6 == '\0') {
        pSVar30 = &"section";
        SStack_58._stringLength = 0x3b4903d;
        SStack_58._firstChar = 0;
        SStack_58._6_2_ = 0;
        il2cpp_runtime_helper_023445d0();
        g_data_057a9cb6 = '\x01';
      }
      if ((unaff_RBP == (System_String_o *)0x0) || (unaff_RBP[8].fields == (System_String_Fields)0x0))
      goto label_03b49087;
      pSVar30 = *(System_String_Fields **)((long)unaff_RBP[8].fields + 0x28);
      SStack_58._stringLength = 0x3b49068;
      SStack_58._firstChar = 0;
      SStack_58._6_2_ = 0;
      SVar28 = "section";
      bVar14 = System_String__Equals_3af50f0
                         ((System_String_o *)pSVar30,(System_String_o *)"section",5,(MethodInfo *)0x0);
      if ((char)bVar14 == '\0') goto label_03b49087;
      SVar18._stringLength = uVar26 + 1;
      SVar18._4_4_ = 0;
      uVar15 = *(uint *)((long)SVar27 + 0x18);
      if ((int)uVar15 <= (int)SVar18._stringLength) {
        return;
      }
    }
  }
  else {
    unaff_RBP = (System_String_o *)0x0;
    value_00 = &"section";
    SVar18 = (System_String_Fields)node;
    value = SVar27;
    if (uVar15 != 0) {
      do {
        unaff_R13 = *(System_String_Fields *)((System_String_o **)((long)SVar27 + 0x20) + (long)unaff_RBP);
        SVar28 = value;
        if (g_data_057a9cb6 == '\0') {
          pSVar30 = &"section";
          SStack_58._stringLength = 0x3b48fcf;
          SStack_58._firstChar = 0;
          SStack_58._6_2_ = 0;
          il2cpp_runtime_helper_023445d0();
          g_data_057a9cb6 = '\x01';
          SVar28 = value;
        }
        pSVar33 = (System_String_Fields *)__this_07;
        if (unaff_R13 == (System_String_Fields)0x0) goto label_03b49087;
        if (*(System_String_o **)((long)unaff_R13 + 0xd0) == (System_String_o *)0x0) {
label_03b48f70:
          SVar28._stringLength = 0x20;
          SVar28._firstChar = 0;
          SVar28._6_2_ = 0;
          SStack_58._stringLength = 0x3b48f7f;
          SStack_58._firstChar = 0;
          SStack_58._6_2_ = 0;
          SVar18 = (System_String_Fields)
                   System_Text_StringBuilder__Append_3b048f0
                             ((System_Text_StringBuilder_o *)__this_07,0x20,(MethodInfo *)0x0);
          SStack_58._stringLength = 0x3b48f8a;
          SStack_58._firstChar = 0;
          SStack_58._6_2_ = 0;
          pSVar30 = (System_String_Fields *)unaff_R13;
          value = (System_String_Fields)
                  Gisketch_Aottg2UI_Search_GisketchSearchIndex__HarvestKeywords
                            ((Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)unaff_R13,(MethodInfo *)SVar28
                            );
          if (SVar18 == (System_String_Fields)0x0) goto label_03b49087;
          SStack_58._stringLength = 0x3b48fa0;
          SStack_58._firstChar = 0;
          SStack_58._6_2_ = 0;
          pSVar30 = (System_String_Fields *)SVar18;
          System_Text_StringBuilder__Append_3b03f90
                    ((System_Text_StringBuilder_o *)SVar18,(System_String_o *)value,(MethodInfo *)0x0);
        }
        else {
          pSVar30 = *(System_String_Fields **)&(*(System_String_o **)((long)unaff_R13 + 0xd0))[1].fields;
          SStack_58._stringLength = 0x3b48ffe;
          SStack_58._firstChar = 0;
          SStack_58._6_2_ = 0;
          value = "section";
          bVar14 = System_String__Equals_3af50f0
                             ((System_String_o *)pSVar30,(System_String_o *)"section",5,(MethodInfo *)0x0);
          if ((char)bVar14 == '\0') goto label_03b48f70;
        }
        unaff_RBP = (System_String_o *)((long)&unaff_RBP->klass + 1);
        if ((int)*(uint *)((long)SVar27 + 0x18) <= (int)(uint)unaff_RBP) {
          return;
        }
        node = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)SVar18;
        SVar28 = value;
      } while ((uint)unaff_RBP < *(uint *)((long)SVar27 + 0x18));
    }
  }
label_03b4908c:
  SStack_58._stringLength = 0x3b49091;
  SStack_58._firstChar = 0;
  SStack_58._6_2_ = 0;
  uStack_68 = il2cpp_runtime_helper_022b2ca0();
  lVar29 = 0;
  SStack_70._stringLength = 0x3b490b4;
  SStack_70._firstChar = 0;
  SStack_70._6_2_ = 0;
  SVar18 = SVar28;
  SStack_60 = (System_String_Fields)node;
  SStack_58 = __this_07;
  bVar14 = System_String__IsNullOrEmpty((System_String_o *)SVar28,(MethodInfo *)0x0);
  if ((char)bVar14 != '\0') {
    return;
  }
  if ((System_String_Fields)pSVar30 != (System_String_Fields)0x0) {
    lVar29 = 0x20;
    SStack_70._stringLength = 0x3b490d4;
    SStack_70._firstChar = 0;
    SStack_70._6_2_ = 0;
    SVar18 = (System_String_Fields)pSVar30;
    pSVar17 = System_Text_StringBuilder__Append_3b048f0
                        ((System_Text_StringBuilder_o *)pSVar30,0x20,(MethodInfo *)0x0);
    if (pSVar17 != (System_Text_StringBuilder_o *)0x0) {
      System_Text_StringBuilder__Append_3b03f90(pSVar17,(System_String_o *)SVar28,(MethodInfo *)0x0);
      return;
    }
  }
  SStack_70._stringLength = 0x3b490f2;
  SStack_70._firstChar = 0;
  SStack_70._6_2_ = 0;
  uStack_80 = il2cpp_runtime_helper_022b2c90();
  SStack_78 = (System_String_Fields)pSVar30;
  SStack_70 = SVar28;
  if (g_data_057a9cba == '\0') {
    pSStack_88 = (System_String_o *)0x3b4911f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Contains);
    pSStack_88 = (System_String_o *)0x3b4912b;
    il2cpp_runtime_helper_023445d0(&"screen");
    pSStack_88 = (System_String_o *)0x3b49137;
    il2cpp_runtime_helper_023445d0(&"section");
    pSStack_88 = (System_String_o *)0x3b49143;
    il2cpp_runtime_helper_023445d0(&"main-menu");
    pSStack_88 = (System_String_o *)0x3b4914f;
    il2cpp_runtime_helper_023445d0(&"main-menu-option-");
    g_data_057a9cba = '\x01';
  }
  if (lVar29 != 0) {
    pSStack_88 = (System_String_o *)0x3b49179;
    bVar14 = System_String__Equals_3af50f0
                       (*(System_String_o **)(lVar29 + 0x20),"main-menu",5,(MethodInfo *)0x0);
    if ((char)bVar14 != '\0') {
      pSStack_88 = (System_String_o *)0x3b4919b;
      bVar14 = System_String__Equals_3af50f0
                         (*(System_String_o **)(lVar29 + 0x70),"screen",5,(MethodInfo *)0x0);
      if ((char)bVar14 == '\0') {
        pSStack_88 = (System_String_o *)0x3b491b9;
        bVar14 = System_String__Equals_3af50f0
                           (*(System_String_o **)(lVar29 + 0x70),(System_String_o *)"section",5,
                            (MethodInfo *)0x0);
        if ((char)bVar14 == '\0') {
          pSVar20 = (System_String_o *)0x0;
          pSStack_88 = (System_String_o *)0x3b491c8;
          bVar14 = System_String__IsNullOrEmpty(*(System_String_o **)(lVar29 + 0x48),(MethodInfo *)0x0);
          if ((char)bVar14 == '\0') {
            if (*(System_String_o **)(lVar29 + 0x48) != (System_String_o *)0x0) {
              pSStack_88 = (System_String_o *)0x3b491eb;
              pSVar20 = "main-menu-option-";
              bVar14 = System_String__StartsWith_3af5570
                                 (*(System_String_o **)(lVar29 + 0x48),"main-menu-option-",5,(MethodInfo *)0x0);
              if ((char)bVar14 == '\0') {
                return;
              }
              pSVar19 = (System_Collections_Generic_HashSet_object__o *)
                        ((Gisketch_Aottg2UI_Data_GisketchNodeDefinition_Fields *)((long)SVar18 + 0x10))->type;
              if (pSVar19 != (System_Collections_Generic_HashSet_object__o *)0x0) {
                System_Collections_Generic_HashSet_object___Contains
                          (pSVar19,*(Il2CppObject **)(lVar29 + 0x58),MethodInfo_Boolean_Contains);
                return;
              }
            }
            __this_06 = (Il2CppObject *)0x0;
            pSStack_88 = (System_String_o *)0x3b49221;
            il2cpp_runtime_helper_022b2c90();
            lStack_b0 = lVar29;
            SStack_a8 = SVar27;
            SStack_a0 = unaff_R13;
            SStack_98 = SVar18;
            SStack_90 = (System_String_Fields)value_00;
            pSStack_88 = unaff_RBP;
            if (g_data_057a9cbb == '\0') {
              il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
              il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
              il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchSearchEntry_get_Current);
              il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Add);
              il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Contains);
              il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_System_String);
              il2cpp_runtime_helper_023445d0(&TypeInfo_HashSet_string);
              il2cpp_runtime_helper_023445d0(&TypeInfo_IDisposable);
              il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerable_GisketchSearchEntry);
              il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerator_GisketchSearchEntry);
              il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerator);
              il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
              il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_Gisketch_Aottg2UI_Search_GisketchSea);
              il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_Gisketch_Aottg2UI_Search_GisketchSearchEntry);
              il2cpp_runtime_helper_023445d0(&TypeInfo_List_GisketchSearchEntry);
              il2cpp_runtime_helper_023445d0(&TypeInfo_StringComparer);
              g_data_057a9cbb = '\x01';
            }
            __this_03 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_GisketchSearchEntry);
            System_Collections_Generic_List_object____ctor(__this_03,MethodInfo_List_1_Gisketch_Aottg2UI_Search_GisketchSearchEntry);
            if (*(int *)(TypeInfo_StringComparer + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            if (g_data_057a9c88 == '\0') {
              il2cpp_runtime_helper_023445d0(&TypeInfo_StringComparer);
              g_data_057a9c88 = '\x01';
              iVar32 = *(int *)(TypeInfo_StringComparer + 0xe4);
            }
            else {
              iVar32 = *(int *)(TypeInfo_StringComparer + 0xe4);
            }
            if (iVar32 == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            pMVar24 = *(MethodInfo **)(*(long *)(TypeInfo_StringComparer + 0xb8) + 0x18);
            pSVar19 = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_HashSet_string);
            System_Collections_Generic_HashSet_object____ctor_33e0600
                      (pSVar19,(System_Collections_Generic_IEqualityComparer_T__o *)pMVar24,MethodInfo_HashSet_1_System_String);
            screenTitles = Gisketch_Aottg2UI_Search_GisketchSearchResults__ScreenTitles
                                     ((System_Collections_Generic_IEnumerable_GisketchSearchEntry__o *)
                                      __this_06,pMVar24);
            __this_04 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_GisketchSearchEntry);
            System_Collections_Generic_List_object____ctor(__this_04,MethodInfo_List_1_Gisketch_Aottg2UI_Search_GisketchSearchEntry);
            if (g_data_057a9c88 == '\0') {
              il2cpp_runtime_helper_023445d0(&TypeInfo_StringComparer);
              g_data_057a9c88 = '\x01';
              iVar32 = *(int *)(TypeInfo_StringComparer + 0xe4);
            }
            else {
              iVar32 = *(int *)(TypeInfo_StringComparer + 0xe4);
            }
            if (iVar32 == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            item = *(long **)(*(long *)(TypeInfo_StringComparer + 0xb8) + 0x18);
            __this_05 = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_HashSet_string);
            System_Collections_Generic_HashSet_object____ctor_33e0600
                      (__this_05,(System_Collections_Generic_IEqualityComparer_T__o *)item,MethodInfo_HashSet_1_System_String);
            if (pSVar20 == (System_String_o *)0x0) {
              if (g_data_057a9cc0 == '\0') {
                il2cpp_runtime_helper_023445d0(&TypeInfo_Empty_d__6);
                g_data_057a9cc0 = '\x01';
              }
              pSVar20 = (System_String_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Empty_d__6);
              System_Object___ctor((Il2CppObject *)pSVar20,(MethodInfo *)0x0);
              (pSVar20->fields)._stringLength = -2;
              iVar16 = System_Environment__get_CurrentManagedThreadId((MethodInfo *)0x0);
              *(int32_t *)&pSVar20[1].monitor = iVar16;
              if (pSVar20 == (System_String_o *)0x0) goto label_03b49dcf;
            }
            pSVar8 = pSVar20->klass;
            uVar2._0_1_ = (pSVar8->_2).rank;
            uVar2._1_1_ = (pSVar8->_2).minimumAlignment;
            if ((ulong)uVar2 != 0) {
              pIVar9 = (pSVar8->_1).interfaceOffsets;
              lVar29 = 0;
              do {
                if (*(long *)((long)&pIVar9->interfaceType + lVar29) == TypeInfo_IEnumerable_GisketchSearchEntry) {
                  pVVar21 = &(pSVar8->vtable)._0_Equals + *(int *)((long)&pIVar9->offset + lVar29);
                  goto label_03b4956f;
                }
                lVar29 = lVar29 + 0x10;
              } while ((ulong)uVar2 << 4 != lVar29);
            }
            pVVar21 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(pSVar20,TypeInfo_IEnumerable_GisketchSearchEntry,0);
label_03b4956f:
            plVar22 = (long *)(*pVVar21->methodPtr)(pSVar20,pVVar21->method);
            if (plVar22 == (long *)0x0) goto label_03b49dd4;
            item = &TypeInfo_IEnumerator;
            in_stack_fffffffffffffee8 = 0;
            do {
              lVar29 = *plVar22;
              if ((ulong)*(ushort *)(lVar29 + 0x12e) != 0) {
                lVar31 = 0;
                do {
                  if (*(long *)(*(long *)(lVar29 + 0xb0) + lVar31) == TypeInfo_IEnumerator) {
                    puVar23 = (undefined8 *)
                              ((long)*(int *)(*(long *)(lVar29 + 0xb0) + 8 + lVar31) * 0x10 + lVar29 + 0x138);
                    goto label_03b495f3;
                  }
                  lVar31 = lVar31 + 0x10;
                } while ((ulong)*(ushort *)(lVar29 + 0x12e) << 4 != lVar31);
              }
              puVar23 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar22,TypeInfo_IEnumerator,0);
label_03b495f3:
              cVar13 = (*(code *)*puVar23)();
              if (cVar13 == '\0') {
                item = (long *)&g_data_00000005;
                if (plVar22 == (long *)0x0) goto label_03b497a6;
                lVar29 = *plVar22;
                if ((ulong)*(ushort *)(lVar29 + 0x12e) == 0) goto label_03b4977f;
                lVar31 = 0;
                goto label_03b49770;
              }
              lVar29 = *plVar22;
              if ((ulong)*(ushort *)(lVar29 + 0x12e) != 0) {
                lVar31 = 0;
                do {
                  if (*(long *)(*(long *)(lVar29 + 0xb0) + lVar31) == TypeInfo_IEnumerator_GisketchSearchEntry) {
                    pMVar24 = (MethodInfo *)
                              ((long)*(int *)(*(long *)(lVar29 + 0xb0) + 8 + lVar31) * 0x10 + lVar29 + 0x138);
                    goto label_03b49663;
                  }
                  lVar31 = lVar31 + 0x10;
                } while ((ulong)*(ushort *)(lVar29 + 0x12e) << 4 != lVar31);
              }
              pMVar24 = (MethodInfo *)il2cpp_runtime_helper_02300d20(plVar22,TypeInfo_IEnumerator_GisketchSearchEntry,0);
label_03b49663:
              method_00 = (MethodInfo *)pMVar24->virtualMethodPointer;
              pGVar25 = (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *)(*pMVar24->methodPointer)();
              if (((pGVar25 != (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *)0x0) &&
                  (bVar14 = Gisketch_Aottg2UI_Search_GisketchSearchResults__IsLiveUsable(pGVar25,method_00),
                  (char)bVar14 != '\0')) &&
                 (bVar14 = Gisketch_Aottg2UI_Search_GisketchSearchResults__IsDuplicateMainMenuScreenButton
                                     (pGVar25,activeScreenId,screenTitles,pMVar24), lVar29 = MethodInfo_Void_Add,
                 (char)bVar14 == '\0')) {
                if (__this_04 == (System_Collections_Generic_List_object__o *)0x0) goto label_03b49dbb;
                piVar1 = &(__this_04->fields)._version;
                *piVar1 = *piVar1 + 1;
                pSVar10 = (__this_04->fields)._items;
                if (pSVar10 == (System_Object_array *)0x0) goto label_03b49dc0;
                uVar15 = (__this_04->fields)._size;
                if (uVar15 < (uint)pSVar10->max_length) {
                  (__this_04->fields)._size = uVar15 + 1;
                  pSVar10->m_Items[(int)uVar15] = (Il2CppObject *)pGVar25;
                  il2cpp_runtime_helper_022b4080(pSVar10->m_Items + (int)uVar15);
                }
                else {
                  System_Collections_Generic_List_object___AddWithResize
                            (__this_04,(Il2CppObject *)pGVar25,
                             *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar29 + 0x20) + 0xc0) + 0x70));
                }
                bVar14 = System_String__IsNullOrEmpty
                                   ((pGVar25->fields)._TargetId_k__BackingField,(MethodInfo *)0x0);
                if ((char)bVar14 == '\0') {
                  if (__this_05 == (System_Collections_Generic_HashSet_object__o *)0x0) {
                    do {
                      il2cpp_runtime_helper_022b2c90();
label_03b49dca:
                      il2cpp_runtime_helper_022b2c90();
label_03b49dcf:
                      do {
                        il2cpp_runtime_helper_022b2c90();
label_03b49dd4:
                        il2cpp_runtime_helper_022b2c90();
label_03b49dd9:
                        il2cpp_runtime_helper_022fefe0();
label_03b49dde:
                        il2cpp_runtime_helper_022b2c90();
                        do {
                          auVar35 = il2cpp_runtime_helper_022fefe0();
                          iVar32 = 0;
                          if (auVar35._8_4_ != 1) {
                            lVar31 = auVar35._0_8_;
                            lVar29 = 0;
                            goto joined_r0x03b4a097;
                          }
                          plVar22 = (long *)__cxa_begin_catch();
                          lVar29 = *plVar22;
                          __cxa_end_catch();
label_03b49ac8:
                          if ((Il2CppObject *)item != (Il2CppObject *)0x0) {
                            pIVar11 = ((Il2CppObject *)item)->klass;
                            uVar6._0_1_ = (pIVar11->_2).rank;
                            uVar6._1_1_ = (pIVar11->_2).minimumAlignment;
                            if ((ulong)uVar6 != 0) {
                              pIVar9 = (pIVar11->_1).interfaceOffsets;
                              lVar31 = 0;
                              do {
                                if (*(long *)((long)&pIVar9->interfaceType + lVar31) == TypeInfo_IDisposable) {
                                  pVVar21 = pIVar11->vtable + *(int *)((long)&pIVar9->offset + lVar31);
                                  goto label_03b49b2d;
                                }
                                lVar31 = lVar31 + 0x10;
                              } while ((ulong)uVar6 << 4 != lVar31);
                            }
                            pVVar21 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(item,TypeInfo_IDisposable,0);
label_03b49b2d:
                            (*pVVar21->methodPtr)(item,pVVar21->method);
                          }
                        } while (lVar29 != 0);
                        if ((iVar32 != 10) && (iVar32 != 0)) {
                          return;
                        }
                      } while (__this_04 == (System_Collections_Generic_List_object__o *)0x0);
                      System_Collections_Generic_List_object___GetEnumerator
                                ((System_Collections_Generic_List_Enumerator_T__o *)a_Stack_c8,__this_04,
                                 MethodInfo_List_1_T_Enumerator_Gisketch_Aottg2UI_Search_GisketchSea);
                      item = (long *)pIStack_b8;
                      _Var36 = a_Stack_c8[0];
                      if (pSVar19 == (System_Collections_Generic_HashSet_object__o *)0x0) {
                        while( true ) {
                          __this_00.fields._8_8_ = pSVar19;
                          __this_00.fields._list =
                               (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffee8;
                          __this_00.fields._current = _Var36.genericMethod;
                          bVar14 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                             (__this_00,(MethodInfo_321A1D0 *)&stack0xfffffffffffffef8);
                          if ((char)bVar14 == '\0') goto label_03b49d72;
                          if ((Il2CppObject *)item == (Il2CppObject *)0x0) goto label_03b49da2;
                          bVar14 = System_String__IsNullOrEmpty
                                             (((Il2CppObject *)((long)item + 0x40))->monitor,(MethodInfo *)0x0
                                             );
                          lVar29 = MethodInfo_Void_Add;
                          if ((char)bVar14 == '\0') goto label_03b49db6;
                          if (__this_03 == (System_Collections_Generic_List_object__o *)0x0)
                          goto label_03b49d6d;
                          piVar1 = &(__this_03->fields)._version;
                          *piVar1 = *piVar1 + 1;
                          pSVar10 = (__this_03->fields)._items;
                          if (pSVar10 == (System_Object_array *)0x0) break;
                          uVar15 = (__this_03->fields)._size;
                          if (uVar15 < (uint)pSVar10->max_length) {
                            (__this_03->fields)._size = uVar15 + 1;
                            pSVar10->m_Items[(int)uVar15] = (Il2CppObject *)item;
                            il2cpp_runtime_helper_022b4080(pSVar10->m_Items + (int)uVar15,item);
                          }
                          else {
                            System_Collections_Generic_List_object___AddWithResize
                                      (__this_03,(Il2CppObject *)item,
                                       *(MethodInfo_362C220 **)
                                        (*(long *)(*(long *)(lVar29 + 0x20) + 0xc0) + 0x70));
                          }
                        }
                      }
                      else {
                        if (__this_03 == (System_Collections_Generic_List_object__o *)0x0) {
                          while( true ) {
                            __this_01.fields._8_8_ = pSVar19;
                            __this_01.fields._list =
                                 (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffee8;
                            __this_01.fields._current = _Var36.genericMethod;
                            bVar14 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                               (__this_01,(MethodInfo_321A1D0 *)&stack0xfffffffffffffef8);
                            if ((char)bVar14 == '\0') goto label_03b49d72;
                            if ((Il2CppObject *)item == (Il2CppObject *)0x0) break;
                            bVar14 = System_String__IsNullOrEmpty
                                               (((Il2CppObject *)((long)item + 0x40))->monitor,
                                                (MethodInfo *)0x0);
                            if (((char)bVar14 != '\0') ||
                               (bVar14 = System_Collections_Generic_HashSet_object___Contains
                                                   (pSVar19,((Il2CppObject *)((long)item + 0x40))->monitor,
                                                    MethodInfo_Boolean_Contains), (char)bVar14 == '\0')) goto label_03b49d6d;
                          }
                        }
                        else {
                          while( true ) {
                            __this.fields._8_8_ = pSVar19;
                            __this.fields._list =
                                 (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffee8;
                            __this.fields._current = _Var36.genericMethod;
                            bVar14 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                               (__this,(MethodInfo_321A1D0 *)&stack0xfffffffffffffef8);
                            if ((char)bVar14 == '\0') goto label_03b49d72;
                            if ((Il2CppObject *)item == (Il2CppObject *)0x0) break;
                            bVar14 = System_String__IsNullOrEmpty
                                               (((Il2CppObject *)((long)item + 0x40))->monitor,
                                                (MethodInfo *)0x0);
                            if (((char)bVar14 != '\0') ||
                               (bVar14 = System_Collections_Generic_HashSet_object___Contains
                                                   (pSVar19,((Il2CppObject *)((long)item + 0x40))->monitor,
                                                    MethodInfo_Boolean_Contains), (char)bVar14 == '\0')) {
                              lVar29 = MethodInfo_Void_Add;
                              piVar1 = &(__this_03->fields)._version;
                              *piVar1 = *piVar1 + 1;
                              pSVar10 = (__this_03->fields)._items;
                              if (pSVar10 == (System_Object_array *)0x0) goto label_03b49dac;
                              uVar15 = (__this_03->fields)._size;
                              if (uVar15 < (uint)pSVar10->max_length) {
                                (__this_03->fields)._size = uVar15 + 1;
                                pSVar10->m_Items[(int)uVar15] = (Il2CppObject *)item;
                                il2cpp_runtime_helper_022b4080(pSVar10->m_Items + (int)uVar15,item);
                              }
                              else {
                                System_Collections_Generic_List_object___AddWithResize
                                          (__this_03,(Il2CppObject *)item,
                                           *(MethodInfo_362C220 **)
                                            (*(long *)(*(long *)(lVar29 + 0x20) + 0xc0) + 0x70));
                              }
                            }
                          }
                        }
label_03b49da2:
                        il2cpp_runtime_helper_022b2c90();
label_03b49da7:
                        il2cpp_runtime_helper_022b2c90();
                      }
label_03b49dac:
                      il2cpp_runtime_helper_022b2c90();
label_03b49db1:
                      il2cpp_runtime_helper_022b2c90();
label_03b49db6:
                      il2cpp_runtime_helper_022b2c90();
label_03b49dbb:
                      il2cpp_runtime_helper_022b2c90();
label_03b49dc0:
                      il2cpp_runtime_helper_022b2c90();
                    } while( true );
                  }
                  System_Collections_Generic_HashSet_object___Add
                            (__this_05,(Il2CppObject *)(pGVar25->fields)._TargetId_k__BackingField,
                             MethodInfo_Boolean_Add);
                }
              }
            } while( true );
          }
        }
      }
    }
  }
  return;
label_03b49087:
  SStack_58._stringLength = 0x3b4908c;
  SStack_58._firstChar = 0;
  SStack_58._6_2_ = 0;
  il2cpp_runtime_helper_022b2c90();
  node = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)SVar18;
  __this_07 = (System_String_Fields)pSVar33;
  goto label_03b4908c;
  while (lVar31 = lVar31 + 0x10, (ulong)*(ushort *)(lVar29 + 0x12e) << 4 != lVar31) {
label_03b49770:
    if (*(long *)(*(long *)(lVar29 + 0xb0) + lVar31) == TypeInfo_IDisposable) {
      puVar23 = (undefined8 *)(lVar29 + (long)*(int *)(*(long *)(lVar29 + 0xb0) + 8 + lVar31) * 0x10 + 0x138);
      goto label_03b4979d;
    }
  }
label_03b4977f:
  puVar23 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar22,TypeInfo_IDisposable,0);
label_03b4979d:
  (*(code *)*puVar23)(plVar22);
label_03b497a6:
  if (in_stack_fffffffffffffee8 != 0) goto label_03b49dd9;
  if (__this_06 == (Il2CppObject *)0x0) {
    if (g_data_057a9cc0 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Empty_d__6);
      g_data_057a9cc0 = '\x01';
    }
    __this_06 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_Empty_d__6);
    System_Object___ctor(__this_06,(MethodInfo *)0x0);
    *(undefined4 *)&__this_06[1].klass = 0xfffffffe;
    iVar16 = System_Environment__get_CurrentManagedThreadId((MethodInfo *)0x0);
    *(int32_t *)&__this_06[2].klass = iVar16;
    item = (long *)0x0;
    if (__this_06 == (Il2CppObject *)0x0) goto label_03b49dcf;
  }
  pIVar11 = __this_06->klass;
  uVar3._0_1_ = (pIVar11->_2).rank;
  uVar3._1_1_ = (pIVar11->_2).minimumAlignment;
  if ((ulong)uVar3 != 0) {
    pIVar9 = (pIVar11->_1).interfaceOffsets;
    lVar29 = 0;
    do {
      if (*(long *)((long)&pIVar9->interfaceType + lVar29) == TypeInfo_IEnumerable_GisketchSearchEntry) {
        pVVar21 = pIVar11->vtable + *(int *)((long)&pIVar9->offset + lVar29);
        goto label_03b49881;
      }
      lVar29 = lVar29 + 0x10;
    } while ((ulong)uVar3 << 4 != lVar29);
  }
  pVVar21 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(__this_06,TypeInfo_IEnumerable_GisketchSearchEntry,0);
label_03b49881:
  item = (long *)(*pVVar21->methodPtr)(__this_06,pVVar21->method);
  if ((Il2CppObject *)item == (Il2CppObject *)0x0) goto label_03b49dde;
  do {
    do {
      pIVar11 = ((Il2CppObject *)item)->klass;
      uVar4._0_1_ = (pIVar11->_2).rank;
      uVar4._1_1_ = (pIVar11->_2).minimumAlignment;
      if ((ulong)uVar4 != 0) {
        pIVar9 = (pIVar11->_1).interfaceOffsets;
        lVar29 = 0;
        do {
          if (*(long *)((long)&pIVar9->interfaceType + lVar29) == TypeInfo_IEnumerator) {
            pVVar21 = pIVar11->vtable + *(int *)((long)&pIVar9->offset + lVar29);
            goto label_03b49903;
          }
          lVar29 = lVar29 + 0x10;
        } while ((ulong)uVar4 << 4 != lVar29);
      }
      pVVar21 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(item,TypeInfo_IEnumerator,0);
label_03b49903:
      cVar13 = (*pVVar21->methodPtr)(item,pVVar21->method);
      if (cVar13 == '\0') {
        iVar32 = 10;
        lVar29 = 0;
        goto label_03b49ac8;
      }
      pIVar11 = ((Il2CppObject *)item)->klass;
      uVar5._0_1_ = (pIVar11->_2).rank;
      uVar5._1_1_ = (pIVar11->_2).minimumAlignment;
      if ((ulong)uVar5 != 0) {
        pIVar9 = (pIVar11->_1).interfaceOffsets;
        lVar29 = 0;
        do {
          if (*(long *)((long)&pIVar9->interfaceType + lVar29) == TypeInfo_IEnumerator_GisketchSearchEntry) {
            pVVar21 = pIVar11->vtable + *(int *)((long)&pIVar9->offset + lVar29);
            goto label_03b49973;
          }
          lVar29 = lVar29 + 0x10;
        } while ((ulong)uVar5 << 4 != lVar29);
      }
      pVVar21 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(item,TypeInfo_IEnumerator_GisketchSearchEntry,0);
label_03b49973:
      auVar34 = (*pVVar21->methodPtr)(item,pVVar21->method);
      pGVar25 = auVar34._0_8_;
      bVar14 = Gisketch_Aottg2UI_Search_GisketchSearchResults__IsActiveControl
                         (pGVar25,activeScreenId,auVar34._8_8_);
      if ((char)bVar14 == '\0') break;
      if (pGVar25 == (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *)0x0) goto label_03b49da7;
      bVar14 = System_String__IsNullOrEmpty((pGVar25->fields)._TargetId_k__BackingField,(MethodInfo *)0x0);
      if ((char)bVar14 != '\0') break;
      if (__this_05 == (System_Collections_Generic_HashSet_object__o *)0x0) goto label_03b49db1;
      bVar14 = System_Collections_Generic_HashSet_object___Contains
                         (__this_05,(Il2CppObject *)(pGVar25->fields)._TargetId_k__BackingField,MethodInfo_Boolean_Contains);
    } while ((char)bVar14 == '\0');
    lVar29 = MethodInfo_Void_Add;
    if (__this_03 == (System_Collections_Generic_List_object__o *)0x0) {
      il2cpp_runtime_helper_022b2c90();
label_03b49d9d:
      il2cpp_runtime_helper_022b2c90();
      goto label_03b49da2;
    }
    piVar1 = &(__this_03->fields)._version;
    *piVar1 = *piVar1 + 1;
    pSVar10 = (__this_03->fields)._items;
    if (pSVar10 == (System_Object_array *)0x0) goto label_03b49d9d;
    uVar15 = (__this_03->fields)._size;
    if (uVar15 < (uint)pSVar10->max_length) {
      (__this_03->fields)._size = uVar15 + 1;
      pSVar10->m_Items[(int)uVar15] = (Il2CppObject *)pGVar25;
      il2cpp_runtime_helper_022b4080();
    }
    else {
      System_Collections_Generic_List_object___AddWithResize
                (__this_03,(Il2CppObject *)pGVar25,
                 *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar29 + 0x20) + 0xc0) + 0x70));
    }
    if ((((pGVar25 != (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *)0x0) &&
         (bVar14 = System_String__IsNullOrEmpty((pGVar25->fields)._ScreenId_k__BackingField,(MethodInfo *)0x0)
         , (char)bVar14 == '\0')) &&
        (bVar14 = System_String__IsNullOrEmpty(activeScreenId,(MethodInfo *)0x0), (char)bVar14 == '\0')) &&
       ((bVar14 = System_String__Equals_3af50f0
                            ((pGVar25->fields)._ScreenId_k__BackingField,activeScreenId,5,(MethodInfo *)0x0),
        (char)bVar14 != '\0' &&
        (bVar14 = System_String__IsNullOrEmpty((pGVar25->fields)._TargetId_k__BackingField,(MethodInfo *)0x0),
        (char)bVar14 == '\0')))) {
      if (pSVar19 == (System_Collections_Generic_HashSet_object__o *)0x0) goto label_03b49dca;
      System_Collections_Generic_HashSet_object___Add
                (pSVar19,(Il2CppObject *)(pGVar25->fields)._TargetId_k__BackingField,MethodInfo_Boolean_Add);
    }
  } while( true );
joined_r0x03b4a097:
  lVar12 = lVar31;
  if ((Il2CppObject *)item != (Il2CppObject *)0x0) {
    pIVar11 = ((Il2CppObject *)item)->klass;
    uVar7._0_1_ = (pIVar11->_2).rank;
    uVar7._1_1_ = (pIVar11->_2).minimumAlignment;
    if ((ulong)uVar7 != 0) {
      pIVar9 = (pIVar11->_1).interfaceOffsets;
      lVar31 = 0;
      do {
        if (*(long *)((long)&pIVar9->interfaceType + lVar31) == TypeInfo_IDisposable) {
          pVVar21 = pIVar11->vtable + *(int *)((long)&pIVar9->offset + lVar31);
          goto label_03b4a0ed;
        }
        lVar31 = lVar31 + 0x10;
      } while ((ulong)uVar7 << 4 != lVar31);
    }
    pVVar21 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(item,TypeInfo_IDisposable,0);
label_03b4a0ed:
    (*pVVar21->methodPtr)(item,pVVar21->method);
  }
  if (lVar29 == 0) {
    _Unwind_Resume(lVar12);
  }
  lVar31 = il2cpp_runtime_helper_022fefe0();
  lVar29 = lVar12;
  goto joined_r0x03b4a097;
label_03b49d6d:
  il2cpp_runtime_helper_022b2c90();
label_03b49d72:
  __this_02.fields._8_8_ = pSVar19;
  __this_02.fields._list = (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffee8;
  __this_02.fields._current = _Var36.genericMethod;
  System_Collections_Generic_List_Enumerator_object___Dispose
            (__this_02,(MethodInfo_321A1C0 *)&stack0xfffffffffffffef8);
  return;
}


// Gisketch.Aottg2UI.Search.GisketchSearchIndex$$IsSection
// il2cpp: bool Gisketch_Aottg2UI_Search_GisketchSearchIndex__IsSection (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* node, const MethodInfo* method);
// 0x3b487b0

bool_conflict
Gisketch_Aottg2UI_Search_GisketchSearchIndex__IsSection
          (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *node,MethodInfo *method)

{
  System_String_o *pSVar1;
  bool_conflict bVar2;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *value;
  
  value = node;
  if (g_data_057a9cb6 == '\0') {
    value = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)&"section";
    il2cpp_runtime_helper_023445d0();
    g_data_057a9cb6 = '\x01';
  }
  if (node != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    pSVar1 = (node->fields).popover;
    if (pSVar1 != (System_String_o *)0x0) {
      bVar2 = System_String__Equals_3af50f0
                        ((System_String_o *)pSVar1[1].fields,"section",5,(MethodInfo *)0x0);
      return bVar2;
    }
    return 0;
  }
  il2cpp_runtime_helper_022b2c90();
  bVar2 = System_String__IsNullOrEmpty((System_String_o *)value,(MethodInfo *)0x0);
  if (((char)bVar2 != '\0') &&
     (value = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)method,
     (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)method ==
     (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0)) {
    value = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  }
  return (bool_conflict)value;
}


// Gisketch.Aottg2UI.Search.GisketchSearchIndex$$IsControl
// il2cpp: bool Gisketch_Aottg2UI_Search_GisketchSearchIndex__IsControl (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* node, const MethodInfo* method);
// 0x3b48980

bool_conflict
Gisketch_Aottg2UI_Search_GisketchSearchIndex__IsControl
          (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *node,MethodInfo *method)

{
  int32_t *piVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  ushort uVar6;
  ushort uVar7;
  System_String_c *pSVar8;
  Il2CppRuntimeInterfaceOffsetPair *pIVar9;
  System_Object_array *pSVar10;
  Il2CppClass *pIVar11;
  System_Collections_Generic_List_Enumerator_object__o __this;
  System_Collections_Generic_List_Enumerator_object__o __this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  long lVar12;
  char cVar13;
  uint uVar14;
  bool_conflict bVar15;
  int32_t iVar16;
  System_String_o *value;
  System_String_o *pSVar18;
  void *pvVar19;
  System_Text_StringBuilder_o *pSVar20;
  System_String_Fields SVar21;
  System_String_Fields SVar22;
  System_Collections_Generic_List_object__o *__this_03;
  System_Collections_Generic_HashSet_object__o *__this_04;
  System_Collections_Generic_HashSet_string__o *screenTitles;
  System_Collections_Generic_List_object__o *__this_05;
  System_Collections_Generic_HashSet_object__o *__this_06;
  VirtualInvokeData *pVVar23;
  long *plVar24;
  undefined8 *puVar25;
  MethodInfo *pMVar26;
  Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *pGVar27;
  Il2CppObject *__this_07;
  System_String_o *in_RCX;
  System_String_o *activeScreenId;
  bool_conflict bVar28;
  undefined8 unaff_RBP;
  void *pvVar29;
  long *item;
  System_String_Fields SVar30;
  System_String_Fields SVar31;
  long lVar32;
  MethodInfo *method_00;
  System_String_o **ppSVar33;
  System_String_Fields SVar34;
  System_String_Fields __this_08;
  System_String_Fields *pSVar35;
  long lVar36;
  System_String_o *in_R8;
  MethodInfo *in_R9;
  int iVar37;
  System_String_c *value_00;
  System_String_Fields *pSVar38;
  System_String_c *pSVar39;
  System_String_Fields *pSVar40;
  undefined1 auVar41 [16];
  undefined1 auVar42 [12];
  long in_stack_fffffffffffffe48;
  _union_249689 _Var43;
  _union_249689 a_Stack_168 [2];
  Il2CppObject *pIStack_158;
  long lStack_150;
  System_String_Fields SStack_148;
  System_String_Fields SStack_140;
  System_String_Fields SStack_138;
  System_String_Fields SStack_130;
  void *pvStack_128;
  undefined8 uStack_120;
  System_String_Fields SStack_118;
  System_String_Fields SStack_110;
  undefined8 uStack_108;
  System_String_Fields SStack_100;
  System_String_Fields SStack_f8;
  ulong uStack_f0;
  System_String_Fields SStack_e8;
  System_String_Fields SStack_e0;
  System_String_Fields SStack_d8;
  System_String_Fields SStack_d0;
  System_String_Fields SStack_c8;
  void *pvStack_c0;
  long lStack_b8;
  code *pcStack_a8;
  void *pvStack_a0;
  undefined8 uStack_98;
  ulong uVar17;
  
  ppSVar33 = (System_String_o **)node;
  if (g_data_057a9cb7 == '\0') {
    il2cpp_runtime_helper_023445d0(&"TextArea");
    il2cpp_runtime_helper_023445d0(&"Select");
    il2cpp_runtime_helper_023445d0(&"InputField");
    il2cpp_runtime_helper_023445d0(&"Button");
    il2cpp_runtime_helper_023445d0(&"Dropdown");
    ppSVar33 = &"SpriteButton";
    il2cpp_runtime_helper_023445d0();
    g_data_057a9cb7 = '\x01';
  }
  if (node != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    uVar14 = System_String__op_Equality((node->fields).type,"Button",(MethodInfo *)0x0);
    uVar17 = (ulong)uVar14;
    if ((char)uVar14 == '\0') {
      uVar14 = System_String__op_Equality((node->fields).type,"SpriteButton",(MethodInfo *)0x0);
      uVar17 = (ulong)uVar14;
      if ((char)uVar14 == '\0') {
        uVar14 = System_String__op_Equality((node->fields).type,"InputField",(MethodInfo *)0x0);
        uVar17 = (ulong)uVar14;
        if ((char)uVar14 == '\0') {
          uVar14 = System_String__op_Equality((node->fields).type,"TextArea",(MethodInfo *)0x0);
          uVar17 = (ulong)uVar14;
          if ((char)uVar14 == '\0') {
            uVar14 = System_String__op_Equality((node->fields).type,"Dropdown",(MethodInfo *)0x0);
            uVar17 = (ulong)uVar14;
            if ((char)uVar14 == '\0') {
              bVar15 = System_String__op_Equality((node->fields).type,"Select",(MethodInfo *)0x0);
              return bVar15;
            }
          }
        }
      }
    }
    return (bool_conflict)CONCAT71((int7)(uVar17 >> 8),1);
  }
  il2cpp_runtime_helper_022b2c90();
  SVar22._stringLength = 0;
  SVar22._firstChar = 0;
  SVar22._6_2_ = 0;
  if ((Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)ppSVar33 !=
      (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    pSVar18 = (((Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)ppSVar33)->fields).popover;
    if (pSVar18 == (System_String_o *)0x0) {
      return 0;
    }
    SVar22 = pSVar18->fields;
    method._0_4_ = 0;
    method._4_2_ = 0;
    method._6_2_ = 0;
    bVar15 = System_String__IsNullOrEmpty((System_String_o *)SVar22,(MethodInfo *)0x0);
    bVar28 = (bool_conflict)CONCAT71((int7)((ulong)unaff_RBP >> 8),1);
    if ((char)bVar15 == '\0') {
      return bVar28;
    }
    pSVar18 = (((Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)ppSVar33)->fields).popover;
    if (pSVar18 != (System_String_o *)0x0) {
      SVar22 = (System_String_Fields)pSVar18[1].klass;
      method._0_4_ = 0;
      method._4_2_ = 0;
      method._6_2_ = 0;
      bVar15 = System_String__IsNullOrEmpty((System_String_o *)SVar22,(MethodInfo *)0x0);
      if ((char)bVar15 == '\0') {
        return bVar28;
      }
      pSVar18 = (((Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)ppSVar33)->fields).popover;
      if (pSVar18 != (System_String_o *)0x0) {
        SVar22 = pSVar18[1].fields;
        method._0_4_ = 0;
        method._4_2_ = 0;
        method._6_2_ = 0;
        bVar15 = System_String__IsNullOrEmpty((System_String_o *)SVar22,(MethodInfo *)0x0);
        if ((char)bVar15 == '\0') {
          return bVar28;
        }
        pSVar18 = (((Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)ppSVar33)->fields).popover;
        if (pSVar18 != (System_String_o *)0x0) {
          uVar14 = System_String__IsNullOrEmpty(pSVar18[1].monitor,(MethodInfo *)0x0);
          return uVar14 ^ 1;
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pSVar18 = (System_String_o *)0x0;
  if (SVar22 != (System_String_Fields)0x0) {
    if (*(System_String_Fields *)((long)SVar22 + 0xd0) == (System_String_Fields)0x0) {
label_03b48b54:
      return (*(System_String_Fields *)((long)SVar22 + 0x10))._stringLength;
    }
    pSVar18 = *(System_String_o **)((long)*(System_String_Fields *)((long)SVar22 + 0xd0) + 0x28);
    method._0_4_ = 0;
    method._4_2_ = 0;
    method._6_2_ = 0;
    bVar15 = System_String__IsNullOrEmpty(pSVar18,(MethodInfo *)0x0);
    if ((char)bVar15 != '\0') goto label_03b48b54;
    if (*(System_String_Fields *)((long)SVar22 + 0xd0) != (System_String_Fields)0x0) {
      return (bool_conflict)*(undefined8 *)((long)*(System_String_Fields *)((long)SVar22 + 0xd0) + 0x28);
    }
  }
  il2cpp_runtime_helper_022b2c90();
  SVar34._stringLength = 0;
  SVar34._firstChar = 0;
  SVar34._6_2_ = 0;
  if (pSVar18 == (System_String_o *)0x0) {
label_03b48c38:
    il2cpp_runtime_helper_022b2c90();
    ppSVar33 = (System_String_o **)SVar34;
    if (g_data_057a9cb8 == '\0') {
      ppSVar33 = &" ";
      il2cpp_runtime_helper_023445d0();
      g_data_057a9cb8 = '\x01';
    }
    if (SVar34 != (System_String_Fields)0x0) {
      if (*(System_String_Fields *)((long)SVar34 + 0xd0) == (System_String_Fields)0x0) {
        pSVar18 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
        SVar22 = *(System_String_Fields *)((long)SVar34 + 0xa0);
      }
      else {
        pSVar18 = *(System_String_o **)((long)*(System_String_Fields *)((long)SVar34 + 0xd0) + 0x18);
        SVar22 = *(System_String_Fields *)((long)SVar34 + 0xa0);
      }
      if (SVar22 == (System_String_Fields)0x0) {
        value = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
      }
      else {
        value = System_String__Join(" ",(System_String_array *)SVar22,(MethodInfo *)0x0);
      }
      if (g_data_057a9cb9 == '\0') {
        il2cpp_runtime_helper_023445d0(&" ");
        g_data_057a9cb9 = '\x01';
      }
      bVar15 = System_String__IsNullOrEmpty(pSVar18,(MethodInfo *)0x0);
      if ((char)bVar15 == '\0') {
        bVar15 = System_String__IsNullOrEmpty(value,(MethodInfo *)0x0);
        if ((char)bVar15 == '\0') {
          pSVar18 = System_String__Concat_3af7150(pSVar18," ",value,(MethodInfo *)0x0);
          return (bool_conflict)pSVar18;
        }
      }
      else {
        pSVar18 = value;
        if (value == (System_String_o *)0x0) {
          pSVar18 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
        }
      }
      return (bool_conflict)pSVar18;
    }
    auVar41 = il2cpp_runtime_helper_022b2c90();
    lVar32 = auVar41._8_8_;
    pvStack_a0 = auVar41._0_8_;
    pvVar19 = pvStack_a0;
    if ((lVar32 != 0) && (pvVar19 = *(void **)(lVar32 + 0x18), 0 < (int)pvVar19)) {
      pvVar19 = (void *)((ulong)pvVar19 & 0xffffffff);
      pvVar29 = (void *)0x0;
      uStack_98 = 0;
      SVar21 = (System_String_Fields)method;
      SVar22 = (System_String_Fields)ppSVar33;
      do {
        if (pvVar19 <= pvVar29) {
          pcStack_a8 = Gisketch_Aottg2UI_Search_GisketchSearchIndex__AppendText;
          bVar15 = il2cpp_runtime_helper_022b2ca0();
          if (SVar21 == (System_String_Fields)0x0) {
            return bVar15;
          }
          SVar34 = *(System_String_Fields *)((long)SVar21 + 0x20);
          SVar30._stringLength = 0;
          SVar30._firstChar = 0;
          SVar30._6_2_ = 0;
          pvStack_c0 = (void *)0x3b48e22;
          __this_08 = SVar34;
          lStack_b8 = lVar32;
          bVar15 = System_String__IsNullOrEmpty((System_String_o *)SVar34,(MethodInfo *)0x0);
          if ((char)bVar15 == '\0') {
            if (SVar22 != (System_String_Fields)0x0) {
              SVar30._stringLength = 0x20;
              SVar30._firstChar = 0;
              SVar30._6_2_ = 0;
              pvStack_c0 = (void *)0x3b48e3e;
              __this_08 = SVar22;
              pSVar20 = System_Text_StringBuilder__Append_3b048f0
                                  ((System_Text_StringBuilder_o *)SVar22,0x20,(MethodInfo *)0x0);
              if (pSVar20 != (System_Text_StringBuilder_o *)0x0) {
                pvStack_c0 = (void *)0x3b48e54;
                System_Text_StringBuilder__Append_3b03f90(pSVar20,(System_String_o *)SVar34,(MethodInfo *)0x0)
                ;
                goto label_03b48e54;
              }
            }
          }
          else {
label_03b48e54:
            SVar34 = (System_String_Fields)((System_String_o *)((long)SVar21 + 0x30))->klass;
            SVar30._stringLength = 0;
            SVar30._firstChar = 0;
            SVar30._6_2_ = 0;
            pvStack_c0 = (void *)0x3b48e62;
            __this_08 = SVar34;
            bVar15 = System_String__IsNullOrEmpty((System_String_o *)SVar34,(MethodInfo *)0x0);
            if ((char)bVar15 == '\0') {
              if (SVar22 != (System_String_Fields)0x0) {
                SVar30._stringLength = 0x20;
                SVar30._firstChar = 0;
                SVar30._6_2_ = 0;
                pvStack_c0 = (void *)0x3b48e7e;
                __this_08 = SVar22;
                pSVar20 = System_Text_StringBuilder__Append_3b048f0
                                    ((System_Text_StringBuilder_o *)SVar22,0x20,(MethodInfo *)0x0);
                if (pSVar20 != (System_Text_StringBuilder_o *)0x0) {
                  pvStack_c0 = (void *)0x3b48e94;
                  System_Text_StringBuilder__Append_3b03f90
                            (pSVar20,(System_String_o *)SVar34,(MethodInfo *)0x0);
                  goto label_03b48e94;
                }
              }
            }
            else {
label_03b48e94:
              SVar34 = *(System_String_Fields *)((long)SVar21 + 0xb8);
              SVar30._stringLength = 0;
              SVar30._firstChar = 0;
              SVar30._6_2_ = 0;
              pvStack_c0 = (void *)0x3b48ea5;
              __this_08 = SVar34;
              bVar15 = System_String__IsNullOrEmpty((System_String_o *)SVar34,(MethodInfo *)0x0);
              if ((char)bVar15 == '\0') {
                if (SVar22 != (System_String_Fields)0x0) {
                  SVar30._stringLength = 0x20;
                  SVar30._firstChar = 0;
                  SVar30._6_2_ = 0;
                  pvStack_c0 = (void *)0x3b48ebd;
                  __this_08 = SVar22;
                  pSVar20 = System_Text_StringBuilder__Append_3b048f0
                                      ((System_Text_StringBuilder_o *)SVar22,0x20,(MethodInfo *)0x0);
                  if (pSVar20 != (System_Text_StringBuilder_o *)0x0) {
                    pvStack_c0 = (void *)0x3b48ecf;
                    System_Text_StringBuilder__Append_3b03f90
                              (pSVar20,(System_String_o *)SVar34,(MethodInfo *)0x0);
                    goto label_03b48ecf;
                  }
                }
              }
              else {
label_03b48ecf:
                if (*(System_String_Fields *)((long)SVar21 + 0xd0) == (System_String_Fields)0x0) {
                  return 0;
                }
                SVar21 = *(System_String_Fields *)
                          ((long)*(System_String_Fields *)((long)SVar21 + 0xd0) + 0x18);
                SVar30._stringLength = 0;
                SVar30._firstChar = 0;
                SVar30._6_2_ = 0;
                pvStack_c0 = (void *)0x3b48ee9;
                __this_08 = SVar21;
                bVar15 = System_String__IsNullOrEmpty((System_String_o *)SVar21,(MethodInfo *)0x0);
                if ((char)bVar15 != '\0') {
                  return bVar15;
                }
                if (SVar22 != (System_String_Fields)0x0) {
                  SVar30._stringLength = 0x20;
                  SVar30._firstChar = 0;
                  SVar30._6_2_ = 0;
                  pvStack_c0 = (void *)0x3b48f07;
                  __this_08 = SVar22;
                  pSVar20 = System_Text_StringBuilder__Append_3b048f0
                                      ((System_Text_StringBuilder_o *)SVar22,0x20,(MethodInfo *)0x0);
                  if (pSVar20 != (System_Text_StringBuilder_o *)0x0) {
                    pSVar20 = System_Text_StringBuilder__Append_3b03f90
                                        (pSVar20,(System_String_o *)SVar21,(MethodInfo *)0x0);
                    return (bool_conflict)pSVar20;
                  }
                }
              }
            }
          }
          pvStack_c0 = (void *)0x3b48f23;
          uStack_f0 = il2cpp_runtime_helper_022b2c90();
          uVar17 = uStack_f0;
          if (SVar30 == (System_String_Fields)0x0) goto label_03b49078;
          uVar14 = *(uint *)((long)SVar30 + 0x18);
          uVar17 = (ulong)uVar14;
          if ((int)uVar14 < 1) goto label_03b49078;
          SVar31 = SVar30;
          pSVar35 = (System_String_Fields *)__this_08;
          SStack_e8 = SVar21;
          SStack_e0 = (System_String_Fields)method;
          SStack_d8 = (System_String_Fields)ppSVar33;
          SStack_d0 = SVar22;
          SStack_c8 = SVar34;
          pvStack_c0 = pvVar29;
          if (__this_08 != (System_String_Fields)0x0) {
            pvVar29 = (void *)0x0;
            pSVar40 = &"section";
            SVar22 = SVar30;
            if (uVar14 == 0) goto label_03b4908c;
            goto label_03b48fb9;
          }
          SVar21._stringLength = 0;
          SVar21._firstChar = 0;
          SVar21._6_2_ = 0;
          pSVar38 = &"section";
          goto label_03b49020;
        }
        pcStack_a8 = (code *)0x3b48ddd;
        SVar21 = (System_String_Fields)method;
        SVar22 = (System_String_Fields)ppSVar33;
        Gisketch_Aottg2UI_Search_GisketchSearchIndex__AddNodeEntries
                  ((System_Collections_Generic_List_GisketchSearchEntry__o *)ppSVar33,
                   (Gisketch_Aottg2UI_Data_GisketchScreenDefinition_o *)method,
                   *(Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o **)(lVar32 + 0x20 + (long)pvVar29 * 8),
                   in_RCX,in_R8,in_R9);
        pvVar29 = (void *)((long)pvVar29 + 1);
        pvVar19 = (void *)(ulong)*(uint *)(lVar32 + 0x18);
      } while ((long)pvVar29 < (long)(int)*(uint *)(lVar32 + 0x18));
    }
    return (bool_conflict)pvVar19;
  }
  if (pSVar18[8].fields != (System_String_Fields)0x0) {
    SVar34 = *(System_String_Fields *)((long)pSVar18[8].fields + 0x10);
    method._0_4_ = 0;
    method._4_2_ = 0;
    method._6_2_ = 0;
    bVar15 = System_String__IsNullOrEmpty((System_String_o *)SVar34,(MethodInfo *)0x0);
    if ((char)bVar15 == '\0') {
      if (pSVar18[8].fields == (System_String_Fields)0x0) goto label_03b48c38;
      pSVar39 = *(System_String_c **)((long)pSVar18[8].fields + 0x10);
      goto label_03b48c29;
    }
  }
  pSVar8 = pSVar18[1].klass;
  pSVar39 = pSVar18[1].monitor;
  value_00 = pSVar18[2].klass;
  bVar15 = System_String__IsNullOrEmpty((System_String_o *)value_00,(MethodInfo *)0x0);
  if (((char)bVar15 != '\0') && (value_00 = pSVar8, pSVar8 == (System_String_c *)0x0)) {
    value_00 = (System_String_c *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  }
  bVar15 = System_String__IsNullOrEmpty((System_String_o *)pSVar39,(MethodInfo *)0x0);
  if (((char)bVar15 != '\0') && (pSVar39 = value_00, value_00 == (System_String_c *)0x0)) {
    pSVar39 = (System_String_c *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  }
label_03b48c29:
  return (bool_conflict)pSVar39;
label_03b49087:
  SStack_f8._stringLength = 0x3b4908c;
  SStack_f8._firstChar = 0;
  SStack_f8._6_2_ = 0;
  il2cpp_runtime_helper_022b2c90();
  __this_08 = (System_String_Fields)pSVar38;
  pSVar40 = (System_String_Fields *)SVar34;
  goto label_03b4908c;
  while (lVar36 = lVar36 + 0x10, (ulong)*(ushort *)(lVar32 + 0x12e) << 4 != lVar36) {
label_03b49770:
    if (*(long *)(*(long *)(lVar32 + 0xb0) + lVar36) == TypeInfo_IDisposable) {
      puVar25 = (undefined8 *)(lVar32 + (long)*(int *)(*(long *)(lVar32 + 0xb0) + 8 + lVar36) * 0x10 + 0x138);
      goto label_03b4979d;
    }
  }
label_03b4977f:
  puVar25 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar24,TypeInfo_IDisposable,0);
label_03b4979d:
  (*(code *)*puVar25)(plVar24);
label_03b497a6:
  if (in_stack_fffffffffffffe48 != 0) goto label_03b49dd9;
  if (__this_07 == (Il2CppObject *)0x0) {
    if (g_data_057a9cc0 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Empty_d__6);
      g_data_057a9cc0 = '\x01';
    }
    __this_07 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_Empty_d__6);
    System_Object___ctor(__this_07,(MethodInfo *)0x0);
    *(undefined4 *)&__this_07[1].klass = 0xfffffffe;
    iVar16 = System_Environment__get_CurrentManagedThreadId((MethodInfo *)0x0);
    *(int32_t *)&__this_07[2].klass = iVar16;
    item = (long *)0x0;
    if (__this_07 == (Il2CppObject *)0x0) goto label_03b49dcf;
  }
  pIVar11 = __this_07->klass;
  uVar3._0_1_ = (pIVar11->_2).rank;
  uVar3._1_1_ = (pIVar11->_2).minimumAlignment;
  if ((ulong)uVar3 != 0) {
    pIVar9 = (pIVar11->_1).interfaceOffsets;
    lVar32 = 0;
    do {
      if (*(long *)((long)&pIVar9->interfaceType + lVar32) == TypeInfo_IEnumerable_GisketchSearchEntry) {
        pVVar23 = pIVar11->vtable + *(int *)((long)&pIVar9->offset + lVar32);
        goto label_03b49881;
      }
      lVar32 = lVar32 + 0x10;
    } while ((ulong)uVar3 << 4 != lVar32);
  }
  pVVar23 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(__this_07,TypeInfo_IEnumerable_GisketchSearchEntry,0);
label_03b49881:
  item = (long *)(*pVVar23->methodPtr)(__this_07,pVVar23->method);
  if ((Il2CppObject *)item == (Il2CppObject *)0x0) goto label_03b49dde;
  do {
    do {
      pIVar11 = ((Il2CppObject *)item)->klass;
      uVar4._0_1_ = (pIVar11->_2).rank;
      uVar4._1_1_ = (pIVar11->_2).minimumAlignment;
      if ((ulong)uVar4 != 0) {
        pIVar9 = (pIVar11->_1).interfaceOffsets;
        lVar32 = 0;
        do {
          if (*(long *)((long)&pIVar9->interfaceType + lVar32) == TypeInfo_IEnumerator) {
            pVVar23 = pIVar11->vtable + *(int *)((long)&pIVar9->offset + lVar32);
            goto label_03b49903;
          }
          lVar32 = lVar32 + 0x10;
        } while ((ulong)uVar4 << 4 != lVar32);
      }
      pVVar23 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(item,TypeInfo_IEnumerator,0);
label_03b49903:
      cVar13 = (*pVVar23->methodPtr)(item,pVVar23->method);
      if (cVar13 == '\0') {
        iVar37 = 10;
        lVar32 = 0;
        goto label_03b49ac8;
      }
      pIVar11 = ((Il2CppObject *)item)->klass;
      uVar5._0_1_ = (pIVar11->_2).rank;
      uVar5._1_1_ = (pIVar11->_2).minimumAlignment;
      if ((ulong)uVar5 != 0) {
        pIVar9 = (pIVar11->_1).interfaceOffsets;
        lVar32 = 0;
        do {
          if (*(long *)((long)&pIVar9->interfaceType + lVar32) == TypeInfo_IEnumerator_GisketchSearchEntry) {
            pVVar23 = pIVar11->vtable + *(int *)((long)&pIVar9->offset + lVar32);
            goto label_03b49973;
          }
          lVar32 = lVar32 + 0x10;
        } while ((ulong)uVar5 << 4 != lVar32);
      }
      pVVar23 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(item,TypeInfo_IEnumerator_GisketchSearchEntry,0);
label_03b49973:
      auVar41 = (*pVVar23->methodPtr)(item,pVVar23->method);
      pGVar27 = auVar41._0_8_;
      bVar15 = Gisketch_Aottg2UI_Search_GisketchSearchResults__IsActiveControl
                         (pGVar27,activeScreenId,auVar41._8_8_);
      if ((char)bVar15 == '\0') break;
      if (pGVar27 == (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *)0x0) goto label_03b49da7;
      bVar15 = System_String__IsNullOrEmpty((pGVar27->fields)._TargetId_k__BackingField,(MethodInfo *)0x0);
      if ((char)bVar15 != '\0') break;
      if (__this_06 == (System_Collections_Generic_HashSet_object__o *)0x0) goto label_03b49db1;
      bVar15 = System_Collections_Generic_HashSet_object___Contains
                         (__this_06,(Il2CppObject *)(pGVar27->fields)._TargetId_k__BackingField,MethodInfo_Boolean_Contains);
    } while ((char)bVar15 == '\0');
    lVar32 = MethodInfo_Void_Add;
    if (__this_03 == (System_Collections_Generic_List_object__o *)0x0) {
      il2cpp_runtime_helper_022b2c90();
label_03b49d9d:
      il2cpp_runtime_helper_022b2c90();
      goto label_03b49da2;
    }
    piVar1 = &(__this_03->fields)._version;
    *piVar1 = *piVar1 + 1;
    pSVar10 = (__this_03->fields)._items;
    if (pSVar10 == (System_Object_array *)0x0) goto label_03b49d9d;
    uVar14 = (__this_03->fields)._size;
    if (uVar14 < (uint)pSVar10->max_length) {
      (__this_03->fields)._size = uVar14 + 1;
      pSVar10->m_Items[(int)uVar14] = (Il2CppObject *)pGVar27;
      il2cpp_runtime_helper_022b4080();
    }
    else {
      System_Collections_Generic_List_object___AddWithResize
                (__this_03,(Il2CppObject *)pGVar27,
                 *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar32 + 0x20) + 0xc0) + 0x70));
    }
    if ((((pGVar27 != (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *)0x0) &&
         (bVar15 = System_String__IsNullOrEmpty((pGVar27->fields)._ScreenId_k__BackingField,(MethodInfo *)0x0)
         , (char)bVar15 == '\0')) &&
        (bVar15 = System_String__IsNullOrEmpty(activeScreenId,(MethodInfo *)0x0), (char)bVar15 == '\0')) &&
       ((bVar15 = System_String__Equals_3af50f0
                            ((pGVar27->fields)._ScreenId_k__BackingField,activeScreenId,5,(MethodInfo *)0x0),
        (char)bVar15 != '\0' &&
        (bVar15 = System_String__IsNullOrEmpty((pGVar27->fields)._TargetId_k__BackingField,(MethodInfo *)0x0),
        (char)bVar15 == '\0')))) {
      if (__this_04 == (System_Collections_Generic_HashSet_object__o *)0x0) goto label_03b49dca;
      System_Collections_Generic_HashSet_object___Add
                (__this_04,(Il2CppObject *)(pGVar27->fields)._TargetId_k__BackingField,MethodInfo_Boolean_Add);
    }
  } while( true );
joined_r0x03b4a097:
  lVar12 = lVar36;
  if ((Il2CppObject *)item != (Il2CppObject *)0x0) {
    pIVar11 = ((Il2CppObject *)item)->klass;
    uVar7._0_1_ = (pIVar11->_2).rank;
    uVar7._1_1_ = (pIVar11->_2).minimumAlignment;
    if ((ulong)uVar7 != 0) {
      pIVar9 = (pIVar11->_1).interfaceOffsets;
      lVar36 = 0;
      do {
        if (*(long *)((long)&pIVar9->interfaceType + lVar36) == TypeInfo_IDisposable) {
          pVVar23 = pIVar11->vtable + *(int *)((long)&pIVar9->offset + lVar36);
          goto label_03b4a0ed;
        }
        lVar36 = lVar36 + 0x10;
      } while ((ulong)uVar7 << 4 != lVar36);
    }
    pVVar23 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(item,TypeInfo_IDisposable,0);
label_03b4a0ed:
    (*pVVar23->methodPtr)(item,pVVar23->method);
  }
  if (lVar32 == 0) {
    _Unwind_Resume(lVar12);
  }
  lVar36 = il2cpp_runtime_helper_022fefe0();
  lVar32 = lVar12;
  goto joined_r0x03b4a097;
label_03b49d6d:
  il2cpp_runtime_helper_022b2c90();
label_03b49d72:
  __this_02.fields._8_8_ = __this_04;
  __this_02.fields._list = (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffe48;
  __this_02.fields._current = _Var43.genericMethod;
  System_Collections_Generic_List_Enumerator_object___Dispose
            (__this_02,(MethodInfo_321A1C0 *)&stack0xfffffffffffffe58);
label_03b49d86:
  return (bool_conflict)__this_03;
  while( true ) {
    pvVar29 = (&((Il2CppType *)((long)SVar30 + 0x20))->data)[(int)uVar14];
    if (g_data_057a9cb6 == '\0') {
      pSVar35 = &"section";
      SStack_f8._stringLength = 0x3b4903d;
      SStack_f8._firstChar = 0;
      SStack_f8._6_2_ = 0;
      il2cpp_runtime_helper_023445d0();
      g_data_057a9cb6 = '\x01';
    }
    if ((pvVar29 == (void *)0x0) || (*(long *)((long)pvVar29 + 0xd0) == 0)) goto label_03b49087;
    pSVar35 = *(System_String_Fields **)(*(long *)((long)pvVar29 + 0xd0) + 0x28);
    SStack_f8._stringLength = 0x3b49068;
    SStack_f8._firstChar = 0;
    SStack_f8._6_2_ = 0;
    SVar31 = "section";
    bVar15 = System_String__Equals_3af50f0
                       ((System_String_o *)pSVar35,(System_String_o *)"section",5,(MethodInfo *)0x0);
    if ((char)bVar15 == '\0') goto label_03b49087;
    SVar21._stringLength = uVar14 + 1;
    SVar21._4_4_ = 0;
    uVar17 = (ulong)*(uint *)((long)SVar30 + 0x18);
    if ((int)*(uint *)((long)SVar30 + 0x18) <= (int)SVar21._stringLength) break;
label_03b49020:
    uVar14 = SVar21._stringLength;
    __this_08 = (System_String_Fields)pSVar38;
    pSVar40 = (System_String_Fields *)SVar34;
    if ((uint)uVar17 <= uVar14) goto label_03b4908c;
  }
label_03b49078:
  return (bool_conflict)uVar17;
label_03b48fb9:
  do {
    ppSVar33 = *(System_String_o ***)(&((Il2CppType *)((long)SVar30 + 0x20))->data + (long)pvVar29);
    SVar31 = SVar22;
    if (g_data_057a9cb6 == '\0') {
      pSVar35 = &"section";
      SStack_f8._stringLength = 0x3b48fcf;
      SStack_f8._firstChar = 0;
      SStack_f8._6_2_ = 0;
      il2cpp_runtime_helper_023445d0();
      g_data_057a9cb6 = '\x01';
      SVar31 = SVar22;
    }
    pSVar38 = (System_String_Fields *)__this_08;
    SVar34 = (System_String_Fields)pSVar40;
    if ((System_String_Fields)ppSVar33 == (System_String_Fields)0x0) goto label_03b49087;
    if (*(void **)((long)ppSVar33 + 0xd0) == (void *)0x0) {
label_03b48f70:
      SVar31._stringLength = 0x20;
      SVar31._firstChar = 0;
      SVar31._6_2_ = 0;
      SStack_f8._stringLength = 0x3b48f7f;
      SStack_f8._firstChar = 0;
      SStack_f8._6_2_ = 0;
      SVar21 = (System_String_Fields)
               System_Text_StringBuilder__Append_3b048f0
                         ((System_Text_StringBuilder_o *)__this_08,0x20,(MethodInfo *)0x0);
      SStack_f8._stringLength = 0x3b48f8a;
      SStack_f8._firstChar = 0;
      SStack_f8._6_2_ = 0;
      pSVar35 = (System_String_Fields *)ppSVar33;
      SVar22 = (System_String_Fields)
               Gisketch_Aottg2UI_Search_GisketchSearchIndex__HarvestKeywords
                         ((Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)ppSVar33,(MethodInfo *)SVar31);
      if (SVar21 == (System_String_Fields)0x0) goto label_03b49087;
      SStack_f8._stringLength = 0x3b48fa0;
      SStack_f8._firstChar = 0;
      SStack_f8._6_2_ = 0;
      pSVar35 = (System_String_Fields *)SVar21;
      System_Text_StringBuilder__Append_3b03f90
                ((System_Text_StringBuilder_o *)SVar21,(System_String_o *)SVar22,(MethodInfo *)0x0);
    }
    else {
      pSVar35 = *(System_String_Fields **)((long)*(void **)((long)ppSVar33 + 0xd0) + 0x28);
      SStack_f8._stringLength = 0x3b48ffe;
      SStack_f8._firstChar = 0;
      SStack_f8._6_2_ = 0;
      SVar22 = "section";
      bVar15 = System_String__Equals_3af50f0
                         ((System_String_o *)pSVar35,(System_String_o *)"section",5,(MethodInfo *)0x0);
      if ((char)bVar15 == '\0') goto label_03b48f70;
    }
    uVar14 = *(uint *)((long)SVar30 + 0x18);
    uVar17 = (ulong)uVar14;
    pvVar29 = (void *)((long)pvVar29 + 1);
    if ((int)uVar14 <= (int)(uint)pvVar29) goto label_03b49078;
    SVar31 = SVar22;
  } while ((uint)pvVar29 < uVar14);
label_03b4908c:
  SStack_f8._stringLength = 0x3b49091;
  SStack_f8._firstChar = 0;
  SStack_f8._6_2_ = 0;
  uStack_108 = il2cpp_runtime_helper_022b2ca0();
  lVar32 = 0;
  SStack_110._stringLength = 0x3b490b4;
  SStack_110._firstChar = 0;
  SStack_110._6_2_ = 0;
  SVar22 = SVar31;
  SStack_100 = SVar21;
  SStack_f8 = __this_08;
  bVar15 = System_String__IsNullOrEmpty((System_String_o *)SVar31,(MethodInfo *)0x0);
  if ((char)bVar15 != '\0') {
    return bVar15;
  }
  if ((System_String_Fields)pSVar35 != (System_String_Fields)0x0) {
    lVar32 = 0x20;
    SStack_110._stringLength = 0x3b490d4;
    SStack_110._firstChar = 0;
    SStack_110._6_2_ = 0;
    SVar22 = (System_String_Fields)pSVar35;
    pSVar20 = System_Text_StringBuilder__Append_3b048f0
                        ((System_Text_StringBuilder_o *)pSVar35,0x20,(MethodInfo *)0x0);
    if (pSVar20 != (System_Text_StringBuilder_o *)0x0) {
      pSVar20 = System_Text_StringBuilder__Append_3b03f90(pSVar20,(System_String_o *)SVar31,(MethodInfo *)0x0)
      ;
      return (bool_conflict)pSVar20;
    }
  }
  SStack_110._stringLength = 0x3b490f2;
  SStack_110._firstChar = 0;
  SStack_110._6_2_ = 0;
  uStack_120 = il2cpp_runtime_helper_022b2c90();
  SStack_118 = (System_String_Fields)pSVar35;
  SStack_110 = SVar31;
  if (g_data_057a9cba == '\0') {
    pvStack_128 = (void *)0x3b4911f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Contains);
    pvStack_128 = (void *)0x3b4912b;
    il2cpp_runtime_helper_023445d0(&"screen");
    pvStack_128 = (void *)0x3b49137;
    il2cpp_runtime_helper_023445d0(&"section");
    pvStack_128 = (void *)0x3b49143;
    il2cpp_runtime_helper_023445d0(&"main-menu");
    pvStack_128 = (void *)0x3b4914f;
    il2cpp_runtime_helper_023445d0(&"main-menu-option-");
    g_data_057a9cba = '\x01';
  }
  if (lVar32 != 0) {
    pvStack_128 = (void *)0x3b49179;
    bVar15 = System_String__Equals_3af50f0
                       (*(System_String_o **)(lVar32 + 0x20),"main-menu",5,(MethodInfo *)0x0);
    if ((char)bVar15 != '\0') {
      pvStack_128 = (void *)0x3b4919b;
      bVar15 = System_String__Equals_3af50f0
                         (*(System_String_o **)(lVar32 + 0x70),"screen",5,(MethodInfo *)0x0);
      if ((char)bVar15 == '\0') {
        pvStack_128 = (void *)0x3b491b9;
        bVar15 = System_String__Equals_3af50f0
                           (*(System_String_o **)(lVar32 + 0x70),(System_String_o *)"section",5,
                            (MethodInfo *)0x0);
        if ((char)bVar15 == '\0') {
          pSVar18 = (System_String_o *)0x0;
          pvStack_128 = (void *)0x3b491c8;
          bVar15 = System_String__IsNullOrEmpty(*(System_String_o **)(lVar32 + 0x48),(MethodInfo *)0x0);
          if ((char)bVar15 == '\0') {
            if (*(System_String_o **)(lVar32 + 0x48) != (System_String_o *)0x0) {
              pvStack_128 = (void *)0x3b491eb;
              pSVar18 = "main-menu-option-";
              bVar15 = System_String__StartsWith_3af5570
                                 (*(System_String_o **)(lVar32 + 0x48),"main-menu-option-",5,(MethodInfo *)0x0);
              if ((char)bVar15 == '\0') {
                return 0;
              }
              if (*(System_Collections_Generic_HashSet_object__o **)((long)SVar22 + 0x10) !=
                  (System_Collections_Generic_HashSet_object__o *)0x0) {
                bVar15 = System_Collections_Generic_HashSet_object___Contains
                                   (*(System_Collections_Generic_HashSet_object__o **)((long)SVar22 + 0x10),
                                    *(Il2CppObject **)(lVar32 + 0x58),MethodInfo_Boolean_Contains);
                return bVar15;
              }
            }
            __this_07 = (Il2CppObject *)0x0;
            pvStack_128 = (void *)0x3b49221;
            il2cpp_runtime_helper_022b2c90();
            lStack_150 = lVar32;
            SStack_148 = SVar30;
            SStack_140 = (System_String_Fields)ppSVar33;
            SStack_138 = SVar22;
            SStack_130 = (System_String_Fields)pSVar40;
            pvStack_128 = pvVar29;
            if (g_data_057a9cbb == '\0') {
              il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
              il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
              il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchSearchEntry_get_Current);
              il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Add);
              il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Contains);
              il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_System_String);
              il2cpp_runtime_helper_023445d0(&TypeInfo_HashSet_string);
              il2cpp_runtime_helper_023445d0(&TypeInfo_IDisposable);
              il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerable_GisketchSearchEntry);
              il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerator_GisketchSearchEntry);
              il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerator);
              il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
              il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_Gisketch_Aottg2UI_Search_GisketchSea);
              il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_Gisketch_Aottg2UI_Search_GisketchSearchEntry);
              il2cpp_runtime_helper_023445d0(&TypeInfo_List_GisketchSearchEntry);
              il2cpp_runtime_helper_023445d0(&TypeInfo_StringComparer);
              g_data_057a9cbb = '\x01';
            }
            __this_03 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_GisketchSearchEntry);
            System_Collections_Generic_List_object____ctor(__this_03,MethodInfo_List_1_Gisketch_Aottg2UI_Search_GisketchSearchEntry);
            if (*(int *)(TypeInfo_StringComparer + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            if (g_data_057a9c88 == '\0') {
              il2cpp_runtime_helper_023445d0(&TypeInfo_StringComparer);
              g_data_057a9c88 = '\x01';
              iVar37 = *(int *)(TypeInfo_StringComparer + 0xe4);
            }
            else {
              iVar37 = *(int *)(TypeInfo_StringComparer + 0xe4);
            }
            if (iVar37 == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            pMVar26 = *(MethodInfo **)(*(long *)(TypeInfo_StringComparer + 0xb8) + 0x18);
            __this_04 = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_HashSet_string);
            System_Collections_Generic_HashSet_object____ctor_33e0600
                      (__this_04,(System_Collections_Generic_IEqualityComparer_T__o *)pMVar26,MethodInfo_HashSet_1_System_String);
            screenTitles = Gisketch_Aottg2UI_Search_GisketchSearchResults__ScreenTitles
                                     ((System_Collections_Generic_IEnumerable_GisketchSearchEntry__o *)
                                      __this_07,pMVar26);
            __this_05 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_GisketchSearchEntry);
            System_Collections_Generic_List_object____ctor(__this_05,MethodInfo_List_1_Gisketch_Aottg2UI_Search_GisketchSearchEntry);
            if (g_data_057a9c88 == '\0') {
              il2cpp_runtime_helper_023445d0(&TypeInfo_StringComparer);
              g_data_057a9c88 = '\x01';
              iVar37 = *(int *)(TypeInfo_StringComparer + 0xe4);
            }
            else {
              iVar37 = *(int *)(TypeInfo_StringComparer + 0xe4);
            }
            if (iVar37 == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            item = *(long **)(*(long *)(TypeInfo_StringComparer + 0xb8) + 0x18);
            __this_06 = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_HashSet_string);
            System_Collections_Generic_HashSet_object____ctor_33e0600
                      (__this_06,(System_Collections_Generic_IEqualityComparer_T__o *)item,MethodInfo_HashSet_1_System_String);
            if (pSVar18 == (System_String_o *)0x0) {
              if (g_data_057a9cc0 == '\0') {
                il2cpp_runtime_helper_023445d0(&TypeInfo_Empty_d__6);
                g_data_057a9cc0 = '\x01';
              }
              pSVar18 = (System_String_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Empty_d__6);
              System_Object___ctor((Il2CppObject *)pSVar18,(MethodInfo *)0x0);
              (pSVar18->fields)._stringLength = -2;
              iVar16 = System_Environment__get_CurrentManagedThreadId((MethodInfo *)0x0);
              *(int32_t *)&pSVar18[1].monitor = iVar16;
              if (pSVar18 == (System_String_o *)0x0) goto label_03b49dcf;
            }
            pSVar39 = pSVar18->klass;
            uVar2._0_1_ = (pSVar39->_2).rank;
            uVar2._1_1_ = (pSVar39->_2).minimumAlignment;
            if ((ulong)uVar2 != 0) {
              pIVar9 = (pSVar39->_1).interfaceOffsets;
              lVar32 = 0;
              do {
                if (*(long *)((long)&pIVar9->interfaceType + lVar32) == TypeInfo_IEnumerable_GisketchSearchEntry) {
                  pVVar23 = &(pSVar39->vtable)._0_Equals + *(int *)((long)&pIVar9->offset + lVar32);
                  goto label_03b4956f;
                }
                lVar32 = lVar32 + 0x10;
              } while ((ulong)uVar2 << 4 != lVar32);
            }
            pVVar23 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(pSVar18,TypeInfo_IEnumerable_GisketchSearchEntry,0);
label_03b4956f:
            plVar24 = (long *)(*pVVar23->methodPtr)(pSVar18,pVVar23->method);
            if (plVar24 == (long *)0x0) goto label_03b49dd4;
            item = &TypeInfo_IEnumerator;
            in_stack_fffffffffffffe48 = 0;
            do {
              lVar32 = *plVar24;
              if ((ulong)*(ushort *)(lVar32 + 0x12e) != 0) {
                lVar36 = 0;
                do {
                  if (*(long *)(*(long *)(lVar32 + 0xb0) + lVar36) == TypeInfo_IEnumerator) {
                    puVar25 = (undefined8 *)
                              ((long)*(int *)(*(long *)(lVar32 + 0xb0) + 8 + lVar36) * 0x10 + lVar32 + 0x138);
                    goto label_03b495f3;
                  }
                  lVar36 = lVar36 + 0x10;
                } while ((ulong)*(ushort *)(lVar32 + 0x12e) << 4 != lVar36);
              }
              puVar25 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar24,TypeInfo_IEnumerator,0);
label_03b495f3:
              cVar13 = (*(code *)*puVar25)();
              if (cVar13 == '\0') {
                item = (long *)&g_data_00000005;
                if (plVar24 == (long *)0x0) goto label_03b497a6;
                lVar32 = *plVar24;
                if ((ulong)*(ushort *)(lVar32 + 0x12e) == 0) goto label_03b4977f;
                lVar36 = 0;
                goto label_03b49770;
              }
              lVar32 = *plVar24;
              if ((ulong)*(ushort *)(lVar32 + 0x12e) != 0) {
                lVar36 = 0;
                do {
                  if (*(long *)(*(long *)(lVar32 + 0xb0) + lVar36) == TypeInfo_IEnumerator_GisketchSearchEntry) {
                    pMVar26 = (MethodInfo *)
                              ((long)*(int *)(*(long *)(lVar32 + 0xb0) + 8 + lVar36) * 0x10 + lVar32 + 0x138);
                    goto label_03b49663;
                  }
                  lVar36 = lVar36 + 0x10;
                } while ((ulong)*(ushort *)(lVar32 + 0x12e) << 4 != lVar36);
              }
              pMVar26 = (MethodInfo *)il2cpp_runtime_helper_02300d20(plVar24,TypeInfo_IEnumerator_GisketchSearchEntry,0);
label_03b49663:
              method_00 = (MethodInfo *)pMVar26->virtualMethodPointer;
              pGVar27 = (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *)(*pMVar26->methodPointer)();
              if (((pGVar27 != (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *)0x0) &&
                  (bVar15 = Gisketch_Aottg2UI_Search_GisketchSearchResults__IsLiveUsable(pGVar27,method_00),
                  (char)bVar15 != '\0')) &&
                 (bVar15 = Gisketch_Aottg2UI_Search_GisketchSearchResults__IsDuplicateMainMenuScreenButton
                                     (pGVar27,activeScreenId,screenTitles,pMVar26), lVar32 = MethodInfo_Void_Add,
                 (char)bVar15 == '\0')) {
                if (__this_05 == (System_Collections_Generic_List_object__o *)0x0) goto label_03b49dbb;
                piVar1 = &(__this_05->fields)._version;
                *piVar1 = *piVar1 + 1;
                pSVar10 = (__this_05->fields)._items;
                if (pSVar10 == (System_Object_array *)0x0) goto label_03b49dc0;
                uVar14 = (__this_05->fields)._size;
                if (uVar14 < (uint)pSVar10->max_length) {
                  (__this_05->fields)._size = uVar14 + 1;
                  pSVar10->m_Items[(int)uVar14] = (Il2CppObject *)pGVar27;
                  il2cpp_runtime_helper_022b4080(pSVar10->m_Items + (int)uVar14);
                }
                else {
                  System_Collections_Generic_List_object___AddWithResize
                            (__this_05,(Il2CppObject *)pGVar27,
                             *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar32 + 0x20) + 0xc0) + 0x70));
                }
                bVar15 = System_String__IsNullOrEmpty
                                   ((pGVar27->fields)._TargetId_k__BackingField,(MethodInfo *)0x0);
                if ((char)bVar15 == '\0') {
                  if (__this_06 == (System_Collections_Generic_HashSet_object__o *)0x0) {
                    do {
                      il2cpp_runtime_helper_022b2c90();
label_03b49dca:
                      il2cpp_runtime_helper_022b2c90();
label_03b49dcf:
                      do {
                        il2cpp_runtime_helper_022b2c90();
label_03b49dd4:
                        il2cpp_runtime_helper_022b2c90();
label_03b49dd9:
                        il2cpp_runtime_helper_022fefe0();
label_03b49dde:
                        il2cpp_runtime_helper_022b2c90();
                        do {
                          auVar42 = il2cpp_runtime_helper_022fefe0();
                          iVar37 = 0;
                          if (auVar42._8_4_ != 1) {
                            lVar36 = auVar42._0_8_;
                            lVar32 = 0;
                            goto joined_r0x03b4a097;
                          }
                          plVar24 = (long *)__cxa_begin_catch();
                          lVar32 = *plVar24;
                          __cxa_end_catch();
label_03b49ac8:
                          if ((Il2CppObject *)item != (Il2CppObject *)0x0) {
                            pIVar11 = ((Il2CppObject *)item)->klass;
                            uVar6._0_1_ = (pIVar11->_2).rank;
                            uVar6._1_1_ = (pIVar11->_2).minimumAlignment;
                            if ((ulong)uVar6 != 0) {
                              pIVar9 = (pIVar11->_1).interfaceOffsets;
                              lVar36 = 0;
                              do {
                                if (*(long *)((long)&pIVar9->interfaceType + lVar36) == TypeInfo_IDisposable) {
                                  pVVar23 = pIVar11->vtable + *(int *)((long)&pIVar9->offset + lVar36);
                                  goto label_03b49b2d;
                                }
                                lVar36 = lVar36 + 0x10;
                              } while ((ulong)uVar6 << 4 != lVar36);
                            }
                            pVVar23 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(item,TypeInfo_IDisposable,0);
label_03b49b2d:
                            (*pVVar23->methodPtr)(item,pVVar23->method);
                          }
                        } while (lVar32 != 0);
                        if ((iVar37 != 10) && (iVar37 != 0)) goto label_03b49d86;
                      } while (__this_05 == (System_Collections_Generic_List_object__o *)0x0);
                      System_Collections_Generic_List_object___GetEnumerator
                                ((System_Collections_Generic_List_Enumerator_T__o *)a_Stack_168,__this_05,
                                 MethodInfo_List_1_T_Enumerator_Gisketch_Aottg2UI_Search_GisketchSea);
                      item = (long *)pIStack_158;
                      _Var43 = a_Stack_168[0];
                      if (__this_04 == (System_Collections_Generic_HashSet_object__o *)0x0) {
                        while( true ) {
                          __this_00.fields._8_8_ = __this_04;
                          __this_00.fields._list =
                               (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffe48;
                          __this_00.fields._current = _Var43.genericMethod;
                          bVar15 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                             (__this_00,(MethodInfo_321A1D0 *)&stack0xfffffffffffffe58);
                          if ((char)bVar15 == '\0') goto label_03b49d72;
                          if ((Il2CppObject *)item == (Il2CppObject *)0x0) goto label_03b49da2;
                          bVar15 = System_String__IsNullOrEmpty
                                             (((Il2CppObject *)((long)item + 0x40))->monitor,(MethodInfo *)0x0
                                             );
                          lVar32 = MethodInfo_Void_Add;
                          if ((char)bVar15 == '\0') goto label_03b49db6;
                          if (__this_03 == (System_Collections_Generic_List_object__o *)0x0)
                          goto label_03b49d6d;
                          piVar1 = &(__this_03->fields)._version;
                          *piVar1 = *piVar1 + 1;
                          pSVar10 = (__this_03->fields)._items;
                          if (pSVar10 == (System_Object_array *)0x0) break;
                          uVar14 = (__this_03->fields)._size;
                          if (uVar14 < (uint)pSVar10->max_length) {
                            (__this_03->fields)._size = uVar14 + 1;
                            pSVar10->m_Items[(int)uVar14] = (Il2CppObject *)item;
                            il2cpp_runtime_helper_022b4080(pSVar10->m_Items + (int)uVar14,item);
                          }
                          else {
                            System_Collections_Generic_List_object___AddWithResize
                                      (__this_03,(Il2CppObject *)item,
                                       *(MethodInfo_362C220 **)
                                        (*(long *)(*(long *)(lVar32 + 0x20) + 0xc0) + 0x70));
                          }
                        }
                      }
                      else {
                        if (__this_03 == (System_Collections_Generic_List_object__o *)0x0) {
                          while( true ) {
                            __this_01.fields._8_8_ = __this_04;
                            __this_01.fields._list =
                                 (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffe48;
                            __this_01.fields._current = _Var43.genericMethod;
                            bVar15 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                               (__this_01,(MethodInfo_321A1D0 *)&stack0xfffffffffffffe58);
                            if ((char)bVar15 == '\0') goto label_03b49d72;
                            if ((Il2CppObject *)item == (Il2CppObject *)0x0) break;
                            bVar15 = System_String__IsNullOrEmpty
                                               (((Il2CppObject *)((long)item + 0x40))->monitor,
                                                (MethodInfo *)0x0);
                            if (((char)bVar15 != '\0') ||
                               (bVar15 = System_Collections_Generic_HashSet_object___Contains
                                                   (__this_04,((Il2CppObject *)((long)item + 0x40))->monitor,
                                                    MethodInfo_Boolean_Contains), (char)bVar15 == '\0')) goto label_03b49d6d;
                          }
                        }
                        else {
                          while( true ) {
                            __this.fields._8_8_ = __this_04;
                            __this.fields._list =
                                 (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffe48;
                            __this.fields._current = _Var43.genericMethod;
                            bVar15 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                               (__this,(MethodInfo_321A1D0 *)&stack0xfffffffffffffe58);
                            if ((char)bVar15 == '\0') goto label_03b49d72;
                            if ((Il2CppObject *)item == (Il2CppObject *)0x0) break;
                            bVar15 = System_String__IsNullOrEmpty
                                               (((Il2CppObject *)((long)item + 0x40))->monitor,
                                                (MethodInfo *)0x0);
                            if (((char)bVar15 != '\0') ||
                               (bVar15 = System_Collections_Generic_HashSet_object___Contains
                                                   (__this_04,((Il2CppObject *)((long)item + 0x40))->monitor,
                                                    MethodInfo_Boolean_Contains), (char)bVar15 == '\0')) {
                              lVar32 = MethodInfo_Void_Add;
                              piVar1 = &(__this_03->fields)._version;
                              *piVar1 = *piVar1 + 1;
                              pSVar10 = (__this_03->fields)._items;
                              if (pSVar10 == (System_Object_array *)0x0) goto label_03b49dac;
                              uVar14 = (__this_03->fields)._size;
                              if (uVar14 < (uint)pSVar10->max_length) {
                                (__this_03->fields)._size = uVar14 + 1;
                                pSVar10->m_Items[(int)uVar14] = (Il2CppObject *)item;
                                il2cpp_runtime_helper_022b4080(pSVar10->m_Items + (int)uVar14,item);
                              }
                              else {
                                System_Collections_Generic_List_object___AddWithResize
                                          (__this_03,(Il2CppObject *)item,
                                           *(MethodInfo_362C220 **)
                                            (*(long *)(*(long *)(lVar32 + 0x20) + 0xc0) + 0x70));
                              }
                            }
                          }
                        }
label_03b49da2:
                        il2cpp_runtime_helper_022b2c90();
label_03b49da7:
                        il2cpp_runtime_helper_022b2c90();
                      }
label_03b49dac:
                      il2cpp_runtime_helper_022b2c90();
label_03b49db1:
                      il2cpp_runtime_helper_022b2c90();
label_03b49db6:
                      il2cpp_runtime_helper_022b2c90();
label_03b49dbb:
                      il2cpp_runtime_helper_022b2c90();
label_03b49dc0:
                      il2cpp_runtime_helper_022b2c90();
                    } while( true );
                  }
                  System_Collections_Generic_HashSet_object___Add
                            (__this_06,(Il2CppObject *)(pGVar27->fields)._TargetId_k__BackingField,
                             MethodInfo_Boolean_Add);
                }
              }
            } while( true );
          }
        }
      }
    }
  }
  return 0;
}


// Gisketch.Aottg2UI.Search.GisketchSearchIndex$$IsExplicitSearch
// il2cpp: bool Gisketch_Aottg2UI_Search_GisketchSearchIndex__IsExplicitSearch (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* node, const MethodInfo* method);
// 0x3b48a90

bool_conflict
Gisketch_Aottg2UI_Search_GisketchSearchIndex__IsExplicitSearch
          (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *node,MethodInfo *method)

{
  int32_t *piVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  ushort uVar6;
  ushort uVar7;
  System_String_c *pSVar8;
  Il2CppRuntimeInterfaceOffsetPair *pIVar9;
  System_Object_array *pSVar10;
  Il2CppClass *pIVar11;
  System_Collections_Generic_List_Enumerator_object__o __this;
  System_Collections_Generic_List_Enumerator_object__o __this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  long lVar12;
  char cVar13;
  bool_conflict bVar14;
  uint uVar15;
  int32_t iVar16;
  System_String_o *value;
  System_String_o *pSVar17;
  void *pvVar18;
  System_Text_StringBuilder_o *pSVar19;
  ulong uVar20;
  System_String_Fields SVar21;
  System_String_Fields SVar22;
  System_Collections_Generic_List_object__o *__this_03;
  System_Collections_Generic_HashSet_object__o *__this_04;
  System_Collections_Generic_HashSet_string__o *screenTitles;
  System_Collections_Generic_List_object__o *__this_05;
  System_Collections_Generic_HashSet_object__o *__this_06;
  VirtualInvokeData *pVVar23;
  long *plVar24;
  undefined8 *puVar25;
  MethodInfo *pMVar26;
  Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *pGVar27;
  Il2CppObject *__this_07;
  System_String_o *in_RCX;
  System_String_o *activeScreenId;
  bool_conflict bVar28;
  undefined8 unaff_RBP;
  void *pvVar29;
  long *item;
  System_String_Fields SVar30;
  System_String_Fields SVar31;
  long lVar32;
  MethodInfo *method_00;
  System_String_Fields SVar33;
  System_String_o **node_00;
  System_String_Fields __this_08;
  System_String_Fields *pSVar34;
  long lVar35;
  System_String_o *in_R8;
  MethodInfo *in_R9;
  int iVar36;
  System_String_c *value_00;
  System_String_Fields *pSVar37;
  System_String_c *pSVar38;
  System_String_Fields *pSVar39;
  undefined1 auVar40 [16];
  undefined1 auVar41 [12];
  long in_stack_fffffffffffffe50;
  _union_249689 _Var42;
  _union_249689 a_Stack_160 [2];
  Il2CppObject *pIStack_150;
  long lStack_148;
  System_String_Fields SStack_140;
  System_String_Fields SStack_138;
  System_String_Fields SStack_130;
  System_String_Fields SStack_128;
  void *pvStack_120;
  undefined8 uStack_118;
  System_String_Fields SStack_110;
  System_String_Fields SStack_108;
  undefined8 uStack_100;
  System_String_Fields SStack_f8;
  System_String_Fields SStack_f0;
  ulong uStack_e8;
  System_String_Fields SStack_e0;
  System_String_Fields SStack_d8;
  System_String_Fields SStack_d0;
  System_String_Fields SStack_c8;
  System_String_Fields SStack_c0;
  void *pvStack_b8;
  long lStack_b0;
  code *pcStack_a0;
  void *pvStack_98;
  undefined8 uStack_90;
  
  SVar22._stringLength = 0;
  SVar22._firstChar = 0;
  SVar22._6_2_ = 0;
  if (node != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    pSVar17 = (node->fields).popover;
    if (pSVar17 == (System_String_o *)0x0) {
      return 0;
    }
    SVar22 = pSVar17->fields;
    method._0_4_ = 0;
    method._4_2_ = 0;
    method._6_2_ = 0;
    bVar14 = System_String__IsNullOrEmpty((System_String_o *)SVar22,(MethodInfo *)0x0);
    bVar28 = (bool_conflict)CONCAT71((int7)((ulong)unaff_RBP >> 8),1);
    if ((char)bVar14 == '\0') {
      return bVar28;
    }
    pSVar17 = (node->fields).popover;
    if (pSVar17 != (System_String_o *)0x0) {
      SVar22 = (System_String_Fields)pSVar17[1].klass;
      method._0_4_ = 0;
      method._4_2_ = 0;
      method._6_2_ = 0;
      bVar14 = System_String__IsNullOrEmpty((System_String_o *)SVar22,(MethodInfo *)0x0);
      if ((char)bVar14 == '\0') {
        return bVar28;
      }
      pSVar17 = (node->fields).popover;
      if (pSVar17 != (System_String_o *)0x0) {
        SVar22 = pSVar17[1].fields;
        method._0_4_ = 0;
        method._4_2_ = 0;
        method._6_2_ = 0;
        bVar14 = System_String__IsNullOrEmpty((System_String_o *)SVar22,(MethodInfo *)0x0);
        if ((char)bVar14 == '\0') {
          return bVar28;
        }
        pSVar17 = (node->fields).popover;
        if (pSVar17 != (System_String_o *)0x0) {
          uVar15 = System_String__IsNullOrEmpty(pSVar17[1].monitor,(MethodInfo *)0x0);
          return uVar15 ^ 1;
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pSVar17 = (System_String_o *)0x0;
  if (SVar22 != (System_String_Fields)0x0) {
    if (*(System_String_Fields *)((long)SVar22 + 0xd0) == (System_String_Fields)0x0) {
label_03b48b54:
      return (*(System_String_Fields *)((long)SVar22 + 0x10))._stringLength;
    }
    pSVar17 = *(System_String_o **)((long)*(System_String_Fields *)((long)SVar22 + 0xd0) + 0x28);
    method._0_4_ = 0;
    method._4_2_ = 0;
    method._6_2_ = 0;
    bVar14 = System_String__IsNullOrEmpty(pSVar17,(MethodInfo *)0x0);
    if ((char)bVar14 != '\0') goto label_03b48b54;
    if (*(System_String_Fields *)((long)SVar22 + 0xd0) != (System_String_Fields)0x0) {
      return (bool_conflict)*(undefined8 *)((long)*(System_String_Fields *)((long)SVar22 + 0xd0) + 0x28);
    }
  }
  il2cpp_runtime_helper_022b2c90();
  SVar33._stringLength = 0;
  SVar33._firstChar = 0;
  SVar33._6_2_ = 0;
  if (pSVar17 == (System_String_o *)0x0) {
label_03b48c38:
    il2cpp_runtime_helper_022b2c90();
    node_00 = (System_String_o **)SVar33;
    if (g_data_057a9cb8 == '\0') {
      node_00 = &" ";
      il2cpp_runtime_helper_023445d0();
      g_data_057a9cb8 = '\x01';
    }
    if (SVar33 != (System_String_Fields)0x0) {
      if (*(System_String_Fields *)((long)SVar33 + 0xd0) == (System_String_Fields)0x0) {
        pSVar17 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
        SVar22 = *(System_String_Fields *)((long)SVar33 + 0xa0);
      }
      else {
        pSVar17 = *(System_String_o **)((long)*(System_String_Fields *)((long)SVar33 + 0xd0) + 0x18);
        SVar22 = *(System_String_Fields *)((long)SVar33 + 0xa0);
      }
      if (SVar22 == (System_String_Fields)0x0) {
        value = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
      }
      else {
        value = System_String__Join(" ",(System_String_array *)SVar22,(MethodInfo *)0x0);
      }
      if (g_data_057a9cb9 == '\0') {
        il2cpp_runtime_helper_023445d0(&" ");
        g_data_057a9cb9 = '\x01';
      }
      bVar14 = System_String__IsNullOrEmpty(pSVar17,(MethodInfo *)0x0);
      if ((char)bVar14 == '\0') {
        bVar14 = System_String__IsNullOrEmpty(value,(MethodInfo *)0x0);
        if ((char)bVar14 == '\0') {
          pSVar17 = System_String__Concat_3af7150(pSVar17," ",value,(MethodInfo *)0x0);
          return (bool_conflict)pSVar17;
        }
      }
      else {
        pSVar17 = value;
        if (value == (System_String_o *)0x0) {
          pSVar17 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
        }
      }
      return (bool_conflict)pSVar17;
    }
    auVar40 = il2cpp_runtime_helper_022b2c90();
    lVar32 = auVar40._8_8_;
    pvStack_98 = auVar40._0_8_;
    pvVar18 = pvStack_98;
    if ((lVar32 != 0) && (pvVar18 = *(void **)(lVar32 + 0x18), 0 < (int)pvVar18)) {
      pvVar18 = (void *)((ulong)pvVar18 & 0xffffffff);
      pvVar29 = (void *)0x0;
      uStack_90 = 0;
      SVar21 = (System_String_Fields)method;
      SVar22 = (System_String_Fields)node_00;
      do {
        if (pvVar18 <= pvVar29) {
          pcStack_a0 = Gisketch_Aottg2UI_Search_GisketchSearchIndex__AppendText;
          bVar14 = il2cpp_runtime_helper_022b2ca0();
          if (SVar21 == (System_String_Fields)0x0) {
            return bVar14;
          }
          SVar33 = *(System_String_Fields *)((long)SVar21 + 0x20);
          SVar30._stringLength = 0;
          SVar30._firstChar = 0;
          SVar30._6_2_ = 0;
          pvStack_b8 = (void *)0x3b48e22;
          __this_08 = SVar33;
          lStack_b0 = lVar32;
          bVar14 = System_String__IsNullOrEmpty((System_String_o *)SVar33,(MethodInfo *)0x0);
          if ((char)bVar14 == '\0') {
            if (SVar22 != (System_String_Fields)0x0) {
              SVar30._stringLength = 0x20;
              SVar30._firstChar = 0;
              SVar30._6_2_ = 0;
              pvStack_b8 = (void *)0x3b48e3e;
              __this_08 = SVar22;
              pSVar19 = System_Text_StringBuilder__Append_3b048f0
                                  ((System_Text_StringBuilder_o *)SVar22,0x20,(MethodInfo *)0x0);
              if (pSVar19 != (System_Text_StringBuilder_o *)0x0) {
                pvStack_b8 = (void *)0x3b48e54;
                System_Text_StringBuilder__Append_3b03f90(pSVar19,(System_String_o *)SVar33,(MethodInfo *)0x0)
                ;
                goto label_03b48e54;
              }
            }
          }
          else {
label_03b48e54:
            SVar33 = (System_String_Fields)((System_String_o *)((long)SVar21 + 0x30))->klass;
            SVar30._stringLength = 0;
            SVar30._firstChar = 0;
            SVar30._6_2_ = 0;
            pvStack_b8 = (void *)0x3b48e62;
            __this_08 = SVar33;
            bVar14 = System_String__IsNullOrEmpty((System_String_o *)SVar33,(MethodInfo *)0x0);
            if ((char)bVar14 == '\0') {
              if (SVar22 != (System_String_Fields)0x0) {
                SVar30._stringLength = 0x20;
                SVar30._firstChar = 0;
                SVar30._6_2_ = 0;
                pvStack_b8 = (void *)0x3b48e7e;
                __this_08 = SVar22;
                pSVar19 = System_Text_StringBuilder__Append_3b048f0
                                    ((System_Text_StringBuilder_o *)SVar22,0x20,(MethodInfo *)0x0);
                if (pSVar19 != (System_Text_StringBuilder_o *)0x0) {
                  pvStack_b8 = (void *)0x3b48e94;
                  System_Text_StringBuilder__Append_3b03f90
                            (pSVar19,(System_String_o *)SVar33,(MethodInfo *)0x0);
                  goto label_03b48e94;
                }
              }
            }
            else {
label_03b48e94:
              SVar33 = *(System_String_Fields *)((long)SVar21 + 0xb8);
              SVar30._stringLength = 0;
              SVar30._firstChar = 0;
              SVar30._6_2_ = 0;
              pvStack_b8 = (void *)0x3b48ea5;
              __this_08 = SVar33;
              bVar14 = System_String__IsNullOrEmpty((System_String_o *)SVar33,(MethodInfo *)0x0);
              if ((char)bVar14 == '\0') {
                if (SVar22 != (System_String_Fields)0x0) {
                  SVar30._stringLength = 0x20;
                  SVar30._firstChar = 0;
                  SVar30._6_2_ = 0;
                  pvStack_b8 = (void *)0x3b48ebd;
                  __this_08 = SVar22;
                  pSVar19 = System_Text_StringBuilder__Append_3b048f0
                                      ((System_Text_StringBuilder_o *)SVar22,0x20,(MethodInfo *)0x0);
                  if (pSVar19 != (System_Text_StringBuilder_o *)0x0) {
                    pvStack_b8 = (void *)0x3b48ecf;
                    System_Text_StringBuilder__Append_3b03f90
                              (pSVar19,(System_String_o *)SVar33,(MethodInfo *)0x0);
                    goto label_03b48ecf;
                  }
                }
              }
              else {
label_03b48ecf:
                if (*(System_String_Fields *)((long)SVar21 + 0xd0) == (System_String_Fields)0x0) {
                  return 0;
                }
                SVar21 = *(System_String_Fields *)
                          ((long)*(System_String_Fields *)((long)SVar21 + 0xd0) + 0x18);
                SVar30._stringLength = 0;
                SVar30._firstChar = 0;
                SVar30._6_2_ = 0;
                pvStack_b8 = (void *)0x3b48ee9;
                __this_08 = SVar21;
                bVar14 = System_String__IsNullOrEmpty((System_String_o *)SVar21,(MethodInfo *)0x0);
                if ((char)bVar14 != '\0') {
                  return bVar14;
                }
                if (SVar22 != (System_String_Fields)0x0) {
                  SVar30._stringLength = 0x20;
                  SVar30._firstChar = 0;
                  SVar30._6_2_ = 0;
                  pvStack_b8 = (void *)0x3b48f07;
                  __this_08 = SVar22;
                  pSVar19 = System_Text_StringBuilder__Append_3b048f0
                                      ((System_Text_StringBuilder_o *)SVar22,0x20,(MethodInfo *)0x0);
                  if (pSVar19 != (System_Text_StringBuilder_o *)0x0) {
                    pSVar19 = System_Text_StringBuilder__Append_3b03f90
                                        (pSVar19,(System_String_o *)SVar21,(MethodInfo *)0x0);
                    return (bool_conflict)pSVar19;
                  }
                }
              }
            }
          }
          pvStack_b8 = (void *)0x3b48f23;
          uStack_e8 = il2cpp_runtime_helper_022b2c90();
          uVar20 = uStack_e8;
          if (SVar30 == (System_String_Fields)0x0) goto label_03b49078;
          uVar15 = *(uint *)((long)SVar30 + 0x18);
          uVar20 = (ulong)uVar15;
          if ((int)uVar15 < 1) goto label_03b49078;
          SVar31 = SVar30;
          pSVar34 = (System_String_Fields *)__this_08;
          SStack_e0 = SVar21;
          SStack_d8 = (System_String_Fields)method;
          SStack_d0 = (System_String_Fields)node_00;
          SStack_c8 = SVar22;
          SStack_c0 = SVar33;
          pvStack_b8 = pvVar29;
          if (__this_08 != (System_String_Fields)0x0) {
            pvVar29 = (void *)0x0;
            pSVar39 = &"section";
            SVar22 = SVar30;
            if (uVar15 == 0) goto label_03b4908c;
            goto label_03b48fb9;
          }
          SVar21._stringLength = 0;
          SVar21._firstChar = 0;
          SVar21._6_2_ = 0;
          pSVar37 = &"section";
          goto label_03b49020;
        }
        pcStack_a0 = (code *)0x3b48ddd;
        SVar21 = (System_String_Fields)method;
        SVar22 = (System_String_Fields)node_00;
        Gisketch_Aottg2UI_Search_GisketchSearchIndex__AddNodeEntries
                  ((System_Collections_Generic_List_GisketchSearchEntry__o *)node_00,
                   (Gisketch_Aottg2UI_Data_GisketchScreenDefinition_o *)method,
                   *(Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o **)(lVar32 + 0x20 + (long)pvVar29 * 8),
                   in_RCX,in_R8,in_R9);
        pvVar29 = (void *)((long)pvVar29 + 1);
        pvVar18 = (void *)(ulong)*(uint *)(lVar32 + 0x18);
      } while ((long)pvVar29 < (long)(int)*(uint *)(lVar32 + 0x18));
    }
    return (bool_conflict)pvVar18;
  }
  if (pSVar17[8].fields != (System_String_Fields)0x0) {
    SVar33 = *(System_String_Fields *)((long)pSVar17[8].fields + 0x10);
    method._0_4_ = 0;
    method._4_2_ = 0;
    method._6_2_ = 0;
    bVar14 = System_String__IsNullOrEmpty((System_String_o *)SVar33,(MethodInfo *)0x0);
    if ((char)bVar14 == '\0') {
      if (pSVar17[8].fields == (System_String_Fields)0x0) goto label_03b48c38;
      pSVar38 = *(System_String_c **)((long)pSVar17[8].fields + 0x10);
      goto label_03b48c29;
    }
  }
  pSVar8 = pSVar17[1].klass;
  pSVar38 = pSVar17[1].monitor;
  value_00 = pSVar17[2].klass;
  bVar14 = System_String__IsNullOrEmpty((System_String_o *)value_00,(MethodInfo *)0x0);
  if (((char)bVar14 != '\0') && (value_00 = pSVar8, pSVar8 == (System_String_c *)0x0)) {
    value_00 = (System_String_c *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  }
  bVar14 = System_String__IsNullOrEmpty((System_String_o *)pSVar38,(MethodInfo *)0x0);
  if (((char)bVar14 != '\0') && (pSVar38 = value_00, value_00 == (System_String_c *)0x0)) {
    pSVar38 = (System_String_c *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  }
label_03b48c29:
  return (bool_conflict)pSVar38;
label_03b49087:
  SStack_f0._stringLength = 0x3b4908c;
  SStack_f0._firstChar = 0;
  SStack_f0._6_2_ = 0;
  il2cpp_runtime_helper_022b2c90();
  __this_08 = (System_String_Fields)pSVar37;
  pSVar39 = (System_String_Fields *)SVar33;
  goto label_03b4908c;
  while (lVar35 = lVar35 + 0x10, (ulong)*(ushort *)(lVar32 + 0x12e) << 4 != lVar35) {
label_03b49770:
    if (*(long *)(*(long *)(lVar32 + 0xb0) + lVar35) == TypeInfo_IDisposable) {
      puVar25 = (undefined8 *)(lVar32 + (long)*(int *)(*(long *)(lVar32 + 0xb0) + 8 + lVar35) * 0x10 + 0x138);
      goto label_03b4979d;
    }
  }
label_03b4977f:
  puVar25 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar24,TypeInfo_IDisposable,0);
label_03b4979d:
  (*(code *)*puVar25)(plVar24);
label_03b497a6:
  if (in_stack_fffffffffffffe50 != 0) goto label_03b49dd9;
  if (__this_07 == (Il2CppObject *)0x0) {
    if (g_data_057a9cc0 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Empty_d__6);
      g_data_057a9cc0 = '\x01';
    }
    __this_07 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_Empty_d__6);
    System_Object___ctor(__this_07,(MethodInfo *)0x0);
    *(undefined4 *)&__this_07[1].klass = 0xfffffffe;
    iVar16 = System_Environment__get_CurrentManagedThreadId((MethodInfo *)0x0);
    *(int32_t *)&__this_07[2].klass = iVar16;
    item = (long *)0x0;
    if (__this_07 == (Il2CppObject *)0x0) goto label_03b49dcf;
  }
  pIVar11 = __this_07->klass;
  uVar3._0_1_ = (pIVar11->_2).rank;
  uVar3._1_1_ = (pIVar11->_2).minimumAlignment;
  if ((ulong)uVar3 != 0) {
    pIVar9 = (pIVar11->_1).interfaceOffsets;
    lVar32 = 0;
    do {
      if (*(long *)((long)&pIVar9->interfaceType + lVar32) == TypeInfo_IEnumerable_GisketchSearchEntry) {
        pVVar23 = pIVar11->vtable + *(int *)((long)&pIVar9->offset + lVar32);
        goto label_03b49881;
      }
      lVar32 = lVar32 + 0x10;
    } while ((ulong)uVar3 << 4 != lVar32);
  }
  pVVar23 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(__this_07,TypeInfo_IEnumerable_GisketchSearchEntry,0);
label_03b49881:
  item = (long *)(*pVVar23->methodPtr)(__this_07,pVVar23->method);
  if ((Il2CppObject *)item == (Il2CppObject *)0x0) goto label_03b49dde;
  do {
    do {
      pIVar11 = ((Il2CppObject *)item)->klass;
      uVar4._0_1_ = (pIVar11->_2).rank;
      uVar4._1_1_ = (pIVar11->_2).minimumAlignment;
      if ((ulong)uVar4 != 0) {
        pIVar9 = (pIVar11->_1).interfaceOffsets;
        lVar32 = 0;
        do {
          if (*(long *)((long)&pIVar9->interfaceType + lVar32) == TypeInfo_IEnumerator) {
            pVVar23 = pIVar11->vtable + *(int *)((long)&pIVar9->offset + lVar32);
            goto label_03b49903;
          }
          lVar32 = lVar32 + 0x10;
        } while ((ulong)uVar4 << 4 != lVar32);
      }
      pVVar23 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(item,TypeInfo_IEnumerator,0);
label_03b49903:
      cVar13 = (*pVVar23->methodPtr)(item,pVVar23->method);
      if (cVar13 == '\0') {
        iVar36 = 10;
        lVar32 = 0;
        goto label_03b49ac8;
      }
      pIVar11 = ((Il2CppObject *)item)->klass;
      uVar5._0_1_ = (pIVar11->_2).rank;
      uVar5._1_1_ = (pIVar11->_2).minimumAlignment;
      if ((ulong)uVar5 != 0) {
        pIVar9 = (pIVar11->_1).interfaceOffsets;
        lVar32 = 0;
        do {
          if (*(long *)((long)&pIVar9->interfaceType + lVar32) == TypeInfo_IEnumerator_GisketchSearchEntry) {
            pVVar23 = pIVar11->vtable + *(int *)((long)&pIVar9->offset + lVar32);
            goto label_03b49973;
          }
          lVar32 = lVar32 + 0x10;
        } while ((ulong)uVar5 << 4 != lVar32);
      }
      pVVar23 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(item,TypeInfo_IEnumerator_GisketchSearchEntry,0);
label_03b49973:
      auVar40 = (*pVVar23->methodPtr)(item,pVVar23->method);
      pGVar27 = auVar40._0_8_;
      bVar14 = Gisketch_Aottg2UI_Search_GisketchSearchResults__IsActiveControl
                         (pGVar27,activeScreenId,auVar40._8_8_);
      if ((char)bVar14 == '\0') break;
      if (pGVar27 == (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *)0x0) goto label_03b49da7;
      bVar14 = System_String__IsNullOrEmpty((pGVar27->fields)._TargetId_k__BackingField,(MethodInfo *)0x0);
      if ((char)bVar14 != '\0') break;
      if (__this_06 == (System_Collections_Generic_HashSet_object__o *)0x0) goto label_03b49db1;
      bVar14 = System_Collections_Generic_HashSet_object___Contains
                         (__this_06,(Il2CppObject *)(pGVar27->fields)._TargetId_k__BackingField,MethodInfo_Boolean_Contains);
    } while ((char)bVar14 == '\0');
    lVar32 = MethodInfo_Void_Add;
    if (__this_03 == (System_Collections_Generic_List_object__o *)0x0) {
      il2cpp_runtime_helper_022b2c90();
label_03b49d9d:
      il2cpp_runtime_helper_022b2c90();
      goto label_03b49da2;
    }
    piVar1 = &(__this_03->fields)._version;
    *piVar1 = *piVar1 + 1;
    pSVar10 = (__this_03->fields)._items;
    if (pSVar10 == (System_Object_array *)0x0) goto label_03b49d9d;
    uVar15 = (__this_03->fields)._size;
    if (uVar15 < (uint)pSVar10->max_length) {
      (__this_03->fields)._size = uVar15 + 1;
      pSVar10->m_Items[(int)uVar15] = (Il2CppObject *)pGVar27;
      il2cpp_runtime_helper_022b4080();
    }
    else {
      System_Collections_Generic_List_object___AddWithResize
                (__this_03,(Il2CppObject *)pGVar27,
                 *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar32 + 0x20) + 0xc0) + 0x70));
    }
    if ((((pGVar27 != (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *)0x0) &&
         (bVar14 = System_String__IsNullOrEmpty((pGVar27->fields)._ScreenId_k__BackingField,(MethodInfo *)0x0)
         , (char)bVar14 == '\0')) &&
        (bVar14 = System_String__IsNullOrEmpty(activeScreenId,(MethodInfo *)0x0), (char)bVar14 == '\0')) &&
       ((bVar14 = System_String__Equals_3af50f0
                            ((pGVar27->fields)._ScreenId_k__BackingField,activeScreenId,5,(MethodInfo *)0x0),
        (char)bVar14 != '\0' &&
        (bVar14 = System_String__IsNullOrEmpty((pGVar27->fields)._TargetId_k__BackingField,(MethodInfo *)0x0),
        (char)bVar14 == '\0')))) {
      if (__this_04 == (System_Collections_Generic_HashSet_object__o *)0x0) goto label_03b49dca;
      System_Collections_Generic_HashSet_object___Add
                (__this_04,(Il2CppObject *)(pGVar27->fields)._TargetId_k__BackingField,MethodInfo_Boolean_Add);
    }
  } while( true );
joined_r0x03b4a097:
  lVar12 = lVar35;
  if ((Il2CppObject *)item != (Il2CppObject *)0x0) {
    pIVar11 = ((Il2CppObject *)item)->klass;
    uVar7._0_1_ = (pIVar11->_2).rank;
    uVar7._1_1_ = (pIVar11->_2).minimumAlignment;
    if ((ulong)uVar7 != 0) {
      pIVar9 = (pIVar11->_1).interfaceOffsets;
      lVar35 = 0;
      do {
        if (*(long *)((long)&pIVar9->interfaceType + lVar35) == TypeInfo_IDisposable) {
          pVVar23 = pIVar11->vtable + *(int *)((long)&pIVar9->offset + lVar35);
          goto label_03b4a0ed;
        }
        lVar35 = lVar35 + 0x10;
      } while ((ulong)uVar7 << 4 != lVar35);
    }
    pVVar23 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(item,TypeInfo_IDisposable,0);
label_03b4a0ed:
    (*pVVar23->methodPtr)(item,pVVar23->method);
  }
  if (lVar32 == 0) {
    _Unwind_Resume(lVar12);
  }
  lVar35 = il2cpp_runtime_helper_022fefe0();
  lVar32 = lVar12;
  goto joined_r0x03b4a097;
label_03b49d6d:
  il2cpp_runtime_helper_022b2c90();
label_03b49d72:
  __this_02.fields._8_8_ = __this_04;
  __this_02.fields._list = (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffe50;
  __this_02.fields._current = _Var42.genericMethod;
  System_Collections_Generic_List_Enumerator_object___Dispose
            (__this_02,(MethodInfo_321A1C0 *)&stack0xfffffffffffffe60);
label_03b49d86:
  return (bool_conflict)__this_03;
  while( true ) {
    pvVar29 = (&((Il2CppType *)((long)SVar30 + 0x20))->data)[(int)uVar15];
    if (g_data_057a9cb6 == '\0') {
      pSVar34 = &"section";
      SStack_f0._stringLength = 0x3b4903d;
      SStack_f0._firstChar = 0;
      SStack_f0._6_2_ = 0;
      il2cpp_runtime_helper_023445d0();
      g_data_057a9cb6 = '\x01';
    }
    if ((pvVar29 == (void *)0x0) || (*(long *)((long)pvVar29 + 0xd0) == 0)) goto label_03b49087;
    pSVar34 = *(System_String_Fields **)(*(long *)((long)pvVar29 + 0xd0) + 0x28);
    SStack_f0._stringLength = 0x3b49068;
    SStack_f0._firstChar = 0;
    SStack_f0._6_2_ = 0;
    SVar31 = "section";
    bVar14 = System_String__Equals_3af50f0
                       ((System_String_o *)pSVar34,(System_String_o *)"section",5,(MethodInfo *)0x0);
    if ((char)bVar14 == '\0') goto label_03b49087;
    SVar21._stringLength = uVar15 + 1;
    SVar21._4_4_ = 0;
    uVar20 = (ulong)*(uint *)((long)SVar30 + 0x18);
    if ((int)*(uint *)((long)SVar30 + 0x18) <= (int)SVar21._stringLength) break;
label_03b49020:
    uVar15 = SVar21._stringLength;
    __this_08 = (System_String_Fields)pSVar37;
    pSVar39 = (System_String_Fields *)SVar33;
    if ((uint)uVar20 <= uVar15) goto label_03b4908c;
  }
label_03b49078:
  return (bool_conflict)uVar20;
label_03b48fb9:
  do {
    node_00 = *(System_String_o ***)(&((Il2CppType *)((long)SVar30 + 0x20))->data + (long)pvVar29);
    SVar31 = SVar22;
    if (g_data_057a9cb6 == '\0') {
      pSVar34 = &"section";
      SStack_f0._stringLength = 0x3b48fcf;
      SStack_f0._firstChar = 0;
      SStack_f0._6_2_ = 0;
      il2cpp_runtime_helper_023445d0();
      g_data_057a9cb6 = '\x01';
      SVar31 = SVar22;
    }
    pSVar37 = (System_String_Fields *)__this_08;
    SVar33 = (System_String_Fields)pSVar39;
    if ((System_String_Fields)node_00 == (System_String_Fields)0x0) goto label_03b49087;
    if (*(void **)((long)node_00 + 0xd0) == (void *)0x0) {
label_03b48f70:
      SVar31._stringLength = 0x20;
      SVar31._firstChar = 0;
      SVar31._6_2_ = 0;
      SStack_f0._stringLength = 0x3b48f7f;
      SStack_f0._firstChar = 0;
      SStack_f0._6_2_ = 0;
      SVar21 = (System_String_Fields)
               System_Text_StringBuilder__Append_3b048f0
                         ((System_Text_StringBuilder_o *)__this_08,0x20,(MethodInfo *)0x0);
      SStack_f0._stringLength = 0x3b48f8a;
      SStack_f0._firstChar = 0;
      SStack_f0._6_2_ = 0;
      pSVar34 = (System_String_Fields *)node_00;
      SVar22 = (System_String_Fields)
               Gisketch_Aottg2UI_Search_GisketchSearchIndex__HarvestKeywords
                         ((Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)node_00,(MethodInfo *)SVar31);
      if (SVar21 == (System_String_Fields)0x0) goto label_03b49087;
      SStack_f0._stringLength = 0x3b48fa0;
      SStack_f0._firstChar = 0;
      SStack_f0._6_2_ = 0;
      pSVar34 = (System_String_Fields *)SVar21;
      System_Text_StringBuilder__Append_3b03f90
                ((System_Text_StringBuilder_o *)SVar21,(System_String_o *)SVar22,(MethodInfo *)0x0);
    }
    else {
      pSVar34 = *(System_String_Fields **)((long)*(void **)((long)node_00 + 0xd0) + 0x28);
      SStack_f0._stringLength = 0x3b48ffe;
      SStack_f0._firstChar = 0;
      SStack_f0._6_2_ = 0;
      SVar22 = "section";
      bVar14 = System_String__Equals_3af50f0
                         ((System_String_o *)pSVar34,(System_String_o *)"section",5,(MethodInfo *)0x0);
      if ((char)bVar14 == '\0') goto label_03b48f70;
    }
    uVar15 = *(uint *)((long)SVar30 + 0x18);
    uVar20 = (ulong)uVar15;
    pvVar29 = (void *)((long)pvVar29 + 1);
    if ((int)uVar15 <= (int)(uint)pvVar29) goto label_03b49078;
    SVar31 = SVar22;
  } while ((uint)pvVar29 < uVar15);
label_03b4908c:
  SStack_f0._stringLength = 0x3b49091;
  SStack_f0._firstChar = 0;
  SStack_f0._6_2_ = 0;
  uStack_100 = il2cpp_runtime_helper_022b2ca0();
  lVar32 = 0;
  SStack_108._stringLength = 0x3b490b4;
  SStack_108._firstChar = 0;
  SStack_108._6_2_ = 0;
  SVar22 = SVar31;
  SStack_f8 = SVar21;
  SStack_f0 = __this_08;
  bVar14 = System_String__IsNullOrEmpty((System_String_o *)SVar31,(MethodInfo *)0x0);
  if ((char)bVar14 != '\0') {
    return bVar14;
  }
  if ((System_String_Fields)pSVar34 != (System_String_Fields)0x0) {
    lVar32 = 0x20;
    SStack_108._stringLength = 0x3b490d4;
    SStack_108._firstChar = 0;
    SStack_108._6_2_ = 0;
    SVar22 = (System_String_Fields)pSVar34;
    pSVar19 = System_Text_StringBuilder__Append_3b048f0
                        ((System_Text_StringBuilder_o *)pSVar34,0x20,(MethodInfo *)0x0);
    if (pSVar19 != (System_Text_StringBuilder_o *)0x0) {
      pSVar19 = System_Text_StringBuilder__Append_3b03f90(pSVar19,(System_String_o *)SVar31,(MethodInfo *)0x0)
      ;
      return (bool_conflict)pSVar19;
    }
  }
  SStack_108._stringLength = 0x3b490f2;
  SStack_108._firstChar = 0;
  SStack_108._6_2_ = 0;
  uStack_118 = il2cpp_runtime_helper_022b2c90();
  SStack_110 = (System_String_Fields)pSVar34;
  SStack_108 = SVar31;
  if (g_data_057a9cba == '\0') {
    pvStack_120 = (void *)0x3b4911f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Contains);
    pvStack_120 = (void *)0x3b4912b;
    il2cpp_runtime_helper_023445d0(&"screen");
    pvStack_120 = (void *)0x3b49137;
    il2cpp_runtime_helper_023445d0(&"section");
    pvStack_120 = (void *)0x3b49143;
    il2cpp_runtime_helper_023445d0(&"main-menu");
    pvStack_120 = (void *)0x3b4914f;
    il2cpp_runtime_helper_023445d0(&"main-menu-option-");
    g_data_057a9cba = '\x01';
  }
  if (lVar32 != 0) {
    pvStack_120 = (void *)0x3b49179;
    bVar14 = System_String__Equals_3af50f0
                       (*(System_String_o **)(lVar32 + 0x20),"main-menu",5,(MethodInfo *)0x0);
    if ((char)bVar14 != '\0') {
      pvStack_120 = (void *)0x3b4919b;
      bVar14 = System_String__Equals_3af50f0
                         (*(System_String_o **)(lVar32 + 0x70),"screen",5,(MethodInfo *)0x0);
      if ((char)bVar14 == '\0') {
        pvStack_120 = (void *)0x3b491b9;
        bVar14 = System_String__Equals_3af50f0
                           (*(System_String_o **)(lVar32 + 0x70),(System_String_o *)"section",5,
                            (MethodInfo *)0x0);
        if ((char)bVar14 == '\0') {
          pSVar17 = (System_String_o *)0x0;
          pvStack_120 = (void *)0x3b491c8;
          bVar14 = System_String__IsNullOrEmpty(*(System_String_o **)(lVar32 + 0x48),(MethodInfo *)0x0);
          if ((char)bVar14 == '\0') {
            if (*(System_String_o **)(lVar32 + 0x48) != (System_String_o *)0x0) {
              pvStack_120 = (void *)0x3b491eb;
              pSVar17 = "main-menu-option-";
              bVar14 = System_String__StartsWith_3af5570
                                 (*(System_String_o **)(lVar32 + 0x48),"main-menu-option-",5,(MethodInfo *)0x0);
              if ((char)bVar14 == '\0') {
                return 0;
              }
              if (*(System_Collections_Generic_HashSet_object__o **)((long)SVar22 + 0x10) !=
                  (System_Collections_Generic_HashSet_object__o *)0x0) {
                bVar14 = System_Collections_Generic_HashSet_object___Contains
                                   (*(System_Collections_Generic_HashSet_object__o **)((long)SVar22 + 0x10),
                                    *(Il2CppObject **)(lVar32 + 0x58),MethodInfo_Boolean_Contains);
                return bVar14;
              }
            }
            __this_07 = (Il2CppObject *)0x0;
            pvStack_120 = (void *)0x3b49221;
            il2cpp_runtime_helper_022b2c90();
            lStack_148 = lVar32;
            SStack_140 = SVar30;
            SStack_138 = (System_String_Fields)node_00;
            SStack_130 = SVar22;
            SStack_128 = (System_String_Fields)pSVar39;
            pvStack_120 = pvVar29;
            if (g_data_057a9cbb == '\0') {
              il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
              il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
              il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchSearchEntry_get_Current);
              il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Add);
              il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Contains);
              il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_System_String);
              il2cpp_runtime_helper_023445d0(&TypeInfo_HashSet_string);
              il2cpp_runtime_helper_023445d0(&TypeInfo_IDisposable);
              il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerable_GisketchSearchEntry);
              il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerator_GisketchSearchEntry);
              il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerator);
              il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
              il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_Gisketch_Aottg2UI_Search_GisketchSea);
              il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_Gisketch_Aottg2UI_Search_GisketchSearchEntry);
              il2cpp_runtime_helper_023445d0(&TypeInfo_List_GisketchSearchEntry);
              il2cpp_runtime_helper_023445d0(&TypeInfo_StringComparer);
              g_data_057a9cbb = '\x01';
            }
            __this_03 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_GisketchSearchEntry);
            System_Collections_Generic_List_object____ctor(__this_03,MethodInfo_List_1_Gisketch_Aottg2UI_Search_GisketchSearchEntry);
            if (*(int *)(TypeInfo_StringComparer + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            if (g_data_057a9c88 == '\0') {
              il2cpp_runtime_helper_023445d0(&TypeInfo_StringComparer);
              g_data_057a9c88 = '\x01';
              iVar36 = *(int *)(TypeInfo_StringComparer + 0xe4);
            }
            else {
              iVar36 = *(int *)(TypeInfo_StringComparer + 0xe4);
            }
            if (iVar36 == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            pMVar26 = *(MethodInfo **)(*(long *)(TypeInfo_StringComparer + 0xb8) + 0x18);
            __this_04 = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_HashSet_string);
            System_Collections_Generic_HashSet_object____ctor_33e0600
                      (__this_04,(System_Collections_Generic_IEqualityComparer_T__o *)pMVar26,MethodInfo_HashSet_1_System_String);
            screenTitles = Gisketch_Aottg2UI_Search_GisketchSearchResults__ScreenTitles
                                     ((System_Collections_Generic_IEnumerable_GisketchSearchEntry__o *)
                                      __this_07,pMVar26);
            __this_05 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_GisketchSearchEntry);
            System_Collections_Generic_List_object____ctor(__this_05,MethodInfo_List_1_Gisketch_Aottg2UI_Search_GisketchSearchEntry);
            if (g_data_057a9c88 == '\0') {
              il2cpp_runtime_helper_023445d0(&TypeInfo_StringComparer);
              g_data_057a9c88 = '\x01';
              iVar36 = *(int *)(TypeInfo_StringComparer + 0xe4);
            }
            else {
              iVar36 = *(int *)(TypeInfo_StringComparer + 0xe4);
            }
            if (iVar36 == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            item = *(long **)(*(long *)(TypeInfo_StringComparer + 0xb8) + 0x18);
            __this_06 = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_HashSet_string);
            System_Collections_Generic_HashSet_object____ctor_33e0600
                      (__this_06,(System_Collections_Generic_IEqualityComparer_T__o *)item,MethodInfo_HashSet_1_System_String);
            if (pSVar17 == (System_String_o *)0x0) {
              if (g_data_057a9cc0 == '\0') {
                il2cpp_runtime_helper_023445d0(&TypeInfo_Empty_d__6);
                g_data_057a9cc0 = '\x01';
              }
              pSVar17 = (System_String_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Empty_d__6);
              System_Object___ctor((Il2CppObject *)pSVar17,(MethodInfo *)0x0);
              (pSVar17->fields)._stringLength = -2;
              iVar16 = System_Environment__get_CurrentManagedThreadId((MethodInfo *)0x0);
              *(int32_t *)&pSVar17[1].monitor = iVar16;
              if (pSVar17 == (System_String_o *)0x0) goto label_03b49dcf;
            }
            pSVar38 = pSVar17->klass;
            uVar2._0_1_ = (pSVar38->_2).rank;
            uVar2._1_1_ = (pSVar38->_2).minimumAlignment;
            if ((ulong)uVar2 != 0) {
              pIVar9 = (pSVar38->_1).interfaceOffsets;
              lVar32 = 0;
              do {
                if (*(long *)((long)&pIVar9->interfaceType + lVar32) == TypeInfo_IEnumerable_GisketchSearchEntry) {
                  pVVar23 = &(pSVar38->vtable)._0_Equals + *(int *)((long)&pIVar9->offset + lVar32);
                  goto label_03b4956f;
                }
                lVar32 = lVar32 + 0x10;
              } while ((ulong)uVar2 << 4 != lVar32);
            }
            pVVar23 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(pSVar17,TypeInfo_IEnumerable_GisketchSearchEntry,0);
label_03b4956f:
            plVar24 = (long *)(*pVVar23->methodPtr)(pSVar17,pVVar23->method);
            if (plVar24 == (long *)0x0) goto label_03b49dd4;
            item = &TypeInfo_IEnumerator;
            in_stack_fffffffffffffe50 = 0;
            do {
              lVar32 = *plVar24;
              if ((ulong)*(ushort *)(lVar32 + 0x12e) != 0) {
                lVar35 = 0;
                do {
                  if (*(long *)(*(long *)(lVar32 + 0xb0) + lVar35) == TypeInfo_IEnumerator) {
                    puVar25 = (undefined8 *)
                              ((long)*(int *)(*(long *)(lVar32 + 0xb0) + 8 + lVar35) * 0x10 + lVar32 + 0x138);
                    goto label_03b495f3;
                  }
                  lVar35 = lVar35 + 0x10;
                } while ((ulong)*(ushort *)(lVar32 + 0x12e) << 4 != lVar35);
              }
              puVar25 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar24,TypeInfo_IEnumerator,0);
label_03b495f3:
              cVar13 = (*(code *)*puVar25)();
              if (cVar13 == '\0') {
                item = (long *)&g_data_00000005;
                if (plVar24 == (long *)0x0) goto label_03b497a6;
                lVar32 = *plVar24;
                if ((ulong)*(ushort *)(lVar32 + 0x12e) == 0) goto label_03b4977f;
                lVar35 = 0;
                goto label_03b49770;
              }
              lVar32 = *plVar24;
              if ((ulong)*(ushort *)(lVar32 + 0x12e) != 0) {
                lVar35 = 0;
                do {
                  if (*(long *)(*(long *)(lVar32 + 0xb0) + lVar35) == TypeInfo_IEnumerator_GisketchSearchEntry) {
                    pMVar26 = (MethodInfo *)
                              ((long)*(int *)(*(long *)(lVar32 + 0xb0) + 8 + lVar35) * 0x10 + lVar32 + 0x138);
                    goto label_03b49663;
                  }
                  lVar35 = lVar35 + 0x10;
                } while ((ulong)*(ushort *)(lVar32 + 0x12e) << 4 != lVar35);
              }
              pMVar26 = (MethodInfo *)il2cpp_runtime_helper_02300d20(plVar24,TypeInfo_IEnumerator_GisketchSearchEntry,0);
label_03b49663:
              method_00 = (MethodInfo *)pMVar26->virtualMethodPointer;
              pGVar27 = (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *)(*pMVar26->methodPointer)();
              if (((pGVar27 != (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *)0x0) &&
                  (bVar14 = Gisketch_Aottg2UI_Search_GisketchSearchResults__IsLiveUsable(pGVar27,method_00),
                  (char)bVar14 != '\0')) &&
                 (bVar14 = Gisketch_Aottg2UI_Search_GisketchSearchResults__IsDuplicateMainMenuScreenButton
                                     (pGVar27,activeScreenId,screenTitles,pMVar26), lVar32 = MethodInfo_Void_Add,
                 (char)bVar14 == '\0')) {
                if (__this_05 == (System_Collections_Generic_List_object__o *)0x0) goto label_03b49dbb;
                piVar1 = &(__this_05->fields)._version;
                *piVar1 = *piVar1 + 1;
                pSVar10 = (__this_05->fields)._items;
                if (pSVar10 == (System_Object_array *)0x0) goto label_03b49dc0;
                uVar15 = (__this_05->fields)._size;
                if (uVar15 < (uint)pSVar10->max_length) {
                  (__this_05->fields)._size = uVar15 + 1;
                  pSVar10->m_Items[(int)uVar15] = (Il2CppObject *)pGVar27;
                  il2cpp_runtime_helper_022b4080(pSVar10->m_Items + (int)uVar15);
                }
                else {
                  System_Collections_Generic_List_object___AddWithResize
                            (__this_05,(Il2CppObject *)pGVar27,
                             *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar32 + 0x20) + 0xc0) + 0x70));
                }
                bVar14 = System_String__IsNullOrEmpty
                                   ((pGVar27->fields)._TargetId_k__BackingField,(MethodInfo *)0x0);
                if ((char)bVar14 == '\0') {
                  if (__this_06 == (System_Collections_Generic_HashSet_object__o *)0x0) {
                    do {
                      il2cpp_runtime_helper_022b2c90();
label_03b49dca:
                      il2cpp_runtime_helper_022b2c90();
label_03b49dcf:
                      do {
                        il2cpp_runtime_helper_022b2c90();
label_03b49dd4:
                        il2cpp_runtime_helper_022b2c90();
label_03b49dd9:
                        il2cpp_runtime_helper_022fefe0();
label_03b49dde:
                        il2cpp_runtime_helper_022b2c90();
                        do {
                          auVar41 = il2cpp_runtime_helper_022fefe0();
                          iVar36 = 0;
                          if (auVar41._8_4_ != 1) {
                            lVar35 = auVar41._0_8_;
                            lVar32 = 0;
                            goto joined_r0x03b4a097;
                          }
                          plVar24 = (long *)__cxa_begin_catch();
                          lVar32 = *plVar24;
                          __cxa_end_catch();
label_03b49ac8:
                          if ((Il2CppObject *)item != (Il2CppObject *)0x0) {
                            pIVar11 = ((Il2CppObject *)item)->klass;
                            uVar6._0_1_ = (pIVar11->_2).rank;
                            uVar6._1_1_ = (pIVar11->_2).minimumAlignment;
                            if ((ulong)uVar6 != 0) {
                              pIVar9 = (pIVar11->_1).interfaceOffsets;
                              lVar35 = 0;
                              do {
                                if (*(long *)((long)&pIVar9->interfaceType + lVar35) == TypeInfo_IDisposable) {
                                  pVVar23 = pIVar11->vtable + *(int *)((long)&pIVar9->offset + lVar35);
                                  goto label_03b49b2d;
                                }
                                lVar35 = lVar35 + 0x10;
                              } while ((ulong)uVar6 << 4 != lVar35);
                            }
                            pVVar23 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(item,TypeInfo_IDisposable,0);
label_03b49b2d:
                            (*pVVar23->methodPtr)(item,pVVar23->method);
                          }
                        } while (lVar32 != 0);
                        if ((iVar36 != 10) && (iVar36 != 0)) goto label_03b49d86;
                      } while (__this_05 == (System_Collections_Generic_List_object__o *)0x0);
                      System_Collections_Generic_List_object___GetEnumerator
                                ((System_Collections_Generic_List_Enumerator_T__o *)a_Stack_160,__this_05,
                                 MethodInfo_List_1_T_Enumerator_Gisketch_Aottg2UI_Search_GisketchSea);
                      item = (long *)pIStack_150;
                      _Var42 = a_Stack_160[0];
                      if (__this_04 == (System_Collections_Generic_HashSet_object__o *)0x0) {
                        while( true ) {
                          __this_00.fields._8_8_ = __this_04;
                          __this_00.fields._list =
                               (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffe50;
                          __this_00.fields._current = _Var42.genericMethod;
                          bVar14 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                             (__this_00,(MethodInfo_321A1D0 *)&stack0xfffffffffffffe60);
                          if ((char)bVar14 == '\0') goto label_03b49d72;
                          if ((Il2CppObject *)item == (Il2CppObject *)0x0) goto label_03b49da2;
                          bVar14 = System_String__IsNullOrEmpty
                                             (((Il2CppObject *)((long)item + 0x40))->monitor,(MethodInfo *)0x0
                                             );
                          lVar32 = MethodInfo_Void_Add;
                          if ((char)bVar14 == '\0') goto label_03b49db6;
                          if (__this_03 == (System_Collections_Generic_List_object__o *)0x0)
                          goto label_03b49d6d;
                          piVar1 = &(__this_03->fields)._version;
                          *piVar1 = *piVar1 + 1;
                          pSVar10 = (__this_03->fields)._items;
                          if (pSVar10 == (System_Object_array *)0x0) break;
                          uVar15 = (__this_03->fields)._size;
                          if (uVar15 < (uint)pSVar10->max_length) {
                            (__this_03->fields)._size = uVar15 + 1;
                            pSVar10->m_Items[(int)uVar15] = (Il2CppObject *)item;
                            il2cpp_runtime_helper_022b4080(pSVar10->m_Items + (int)uVar15,item);
                          }
                          else {
                            System_Collections_Generic_List_object___AddWithResize
                                      (__this_03,(Il2CppObject *)item,
                                       *(MethodInfo_362C220 **)
                                        (*(long *)(*(long *)(lVar32 + 0x20) + 0xc0) + 0x70));
                          }
                        }
                      }
                      else {
                        if (__this_03 == (System_Collections_Generic_List_object__o *)0x0) {
                          while( true ) {
                            __this_01.fields._8_8_ = __this_04;
                            __this_01.fields._list =
                                 (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffe50;
                            __this_01.fields._current = _Var42.genericMethod;
                            bVar14 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                               (__this_01,(MethodInfo_321A1D0 *)&stack0xfffffffffffffe60);
                            if ((char)bVar14 == '\0') goto label_03b49d72;
                            if ((Il2CppObject *)item == (Il2CppObject *)0x0) break;
                            bVar14 = System_String__IsNullOrEmpty
                                               (((Il2CppObject *)((long)item + 0x40))->monitor,
                                                (MethodInfo *)0x0);
                            if (((char)bVar14 != '\0') ||
                               (bVar14 = System_Collections_Generic_HashSet_object___Contains
                                                   (__this_04,((Il2CppObject *)((long)item + 0x40))->monitor,
                                                    MethodInfo_Boolean_Contains), (char)bVar14 == '\0')) goto label_03b49d6d;
                          }
                        }
                        else {
                          while( true ) {
                            __this.fields._8_8_ = __this_04;
                            __this.fields._list =
                                 (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffe50;
                            __this.fields._current = _Var42.genericMethod;
                            bVar14 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                               (__this,(MethodInfo_321A1D0 *)&stack0xfffffffffffffe60);
                            if ((char)bVar14 == '\0') goto label_03b49d72;
                            if ((Il2CppObject *)item == (Il2CppObject *)0x0) break;
                            bVar14 = System_String__IsNullOrEmpty
                                               (((Il2CppObject *)((long)item + 0x40))->monitor,
                                                (MethodInfo *)0x0);
                            if (((char)bVar14 != '\0') ||
                               (bVar14 = System_Collections_Generic_HashSet_object___Contains
                                                   (__this_04,((Il2CppObject *)((long)item + 0x40))->monitor,
                                                    MethodInfo_Boolean_Contains), (char)bVar14 == '\0')) {
                              lVar32 = MethodInfo_Void_Add;
                              piVar1 = &(__this_03->fields)._version;
                              *piVar1 = *piVar1 + 1;
                              pSVar10 = (__this_03->fields)._items;
                              if (pSVar10 == (System_Object_array *)0x0) goto label_03b49dac;
                              uVar15 = (__this_03->fields)._size;
                              if (uVar15 < (uint)pSVar10->max_length) {
                                (__this_03->fields)._size = uVar15 + 1;
                                pSVar10->m_Items[(int)uVar15] = (Il2CppObject *)item;
                                il2cpp_runtime_helper_022b4080(pSVar10->m_Items + (int)uVar15,item);
                              }
                              else {
                                System_Collections_Generic_List_object___AddWithResize
                                          (__this_03,(Il2CppObject *)item,
                                           *(MethodInfo_362C220 **)
                                            (*(long *)(*(long *)(lVar32 + 0x20) + 0xc0) + 0x70));
                              }
                            }
                          }
                        }
label_03b49da2:
                        il2cpp_runtime_helper_022b2c90();
label_03b49da7:
                        il2cpp_runtime_helper_022b2c90();
                      }
label_03b49dac:
                      il2cpp_runtime_helper_022b2c90();
label_03b49db1:
                      il2cpp_runtime_helper_022b2c90();
label_03b49db6:
                      il2cpp_runtime_helper_022b2c90();
label_03b49dbb:
                      il2cpp_runtime_helper_022b2c90();
label_03b49dc0:
                      il2cpp_runtime_helper_022b2c90();
                    } while( true );
                  }
                  System_Collections_Generic_HashSet_object___Add
                            (__this_06,(Il2CppObject *)(pGVar27->fields)._TargetId_k__BackingField,
                             MethodInfo_Boolean_Add);
                }
              }
            } while( true );
          }
        }
      }
    }
  }
  return 0;
}


// Gisketch.Aottg2UI.Search.GisketchSearchIndex$$Kind
// il2cpp: System_String_o* Gisketch_Aottg2UI_Search_GisketchSearchIndex__Kind (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* node, const MethodInfo* method);
// 0x3b48b30

System_String_o *
Gisketch_Aottg2UI_Search_GisketchSearchIndex__Kind
          (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *node,MethodInfo *method)

{
  int32_t *piVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  ushort uVar6;
  ushort uVar7;
  System_String_c *pSVar8;
  Il2CppRuntimeInterfaceOffsetPair *pIVar9;
  System_Object_array *pSVar10;
  Il2CppClass *pIVar11;
  System_Collections_Generic_List_Enumerator_object__o __this;
  System_Collections_Generic_List_Enumerator_object__o __this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  long lVar12;
  char cVar13;
  bool_conflict bVar14;
  int32_t iVar15;
  System_String_o *pSVar16;
  System_String_o *pSVar17;
  System_Text_StringBuilder_o *pSVar18;
  undefined4 extraout_var;
  System_String_Fields SVar19;
  System_String_Fields SVar20;
  undefined4 extraout_var_00;
  undefined4 extraout_var_01;
  System_Collections_Generic_List_object__o *__this_03;
  System_Collections_Generic_HashSet_object__o *__this_04;
  System_Collections_Generic_HashSet_string__o *screenTitles;
  System_Collections_Generic_List_object__o *__this_05;
  System_Collections_Generic_HashSet_object__o *__this_06;
  VirtualInvokeData *pVVar21;
  long *plVar22;
  undefined8 *puVar23;
  MethodInfo *pMVar24;
  Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *pGVar25;
  Il2CppObject *__this_07;
  System_String_o *in_RCX;
  System_String_o *activeScreenId;
  uint uVar26;
  long *item;
  System_String_Fields SVar27;
  System_String_Fields SVar28;
  long lVar29;
  MethodInfo *method_00;
  System_String_Fields SVar30;
  System_String_o **node_00;
  System_String_Fields __this_08;
  System_String_Fields *pSVar31;
  long lVar32;
  System_String_o *in_R8;
  MethodInfo *in_R9;
  int iVar33;
  System_String_c *value;
  System_String_Fields *pSVar34;
  System_String_c *value_00;
  System_String_Fields *pSVar35;
  undefined1 auVar36 [16];
  undefined1 auVar37 [12];
  long in_stack_fffffffffffffe68;
  _union_249689 _Var38;
  _union_249689 a_Stack_148 [2];
  Il2CppObject *pIStack_138;
  long lStack_130;
  System_String_Fields SStack_128;
  System_String_Fields SStack_120;
  System_String_Fields SStack_118;
  System_String_Fields SStack_110;
  System_String_o *pSStack_108;
  undefined8 uStack_100;
  System_String_Fields SStack_f8;
  System_String_Fields SStack_f0;
  undefined8 uStack_e8;
  System_String_Fields SStack_e0;
  System_String_Fields SStack_d8;
  System_String_o *pSStack_d0;
  System_String_Fields SStack_c8;
  System_String_Fields SStack_c0;
  System_String_Fields SStack_b8;
  System_String_Fields SStack_b0;
  System_String_Fields SStack_a8;
  System_String_o *pSStack_a0;
  long lStack_98;
  code *pcStack_88;
  System_String_o *pSStack_80;
  undefined8 uStack_78;
  
  SVar20._stringLength = 0;
  SVar20._firstChar = 0;
  SVar20._6_2_ = 0;
  if (node != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    pSVar17 = (node->fields).popover;
    if (pSVar17 == (System_String_o *)0x0) {
label_03b48b54:
      return (node->fields).type;
    }
    SVar20 = pSVar17[1].fields;
    method._0_4_ = 0;
    method._4_2_ = 0;
    method._6_2_ = 0;
    bVar14 = System_String__IsNullOrEmpty((System_String_o *)SVar20,(MethodInfo *)0x0);
    if ((char)bVar14 != '\0') goto label_03b48b54;
    pSVar17 = (node->fields).popover;
    if (pSVar17 != (System_String_o *)0x0) {
      return (System_String_o *)pSVar17[1].fields;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  SVar30._stringLength = 0;
  SVar30._firstChar = 0;
  SVar30._6_2_ = 0;
  if (SVar20 != (System_String_Fields)0x0) {
    if (*(System_String_Fields *)((long)SVar20 + 0xd0) != (System_String_Fields)0x0) {
      SVar30 = *(System_String_Fields *)((long)*(System_String_Fields *)((long)SVar20 + 0xd0) + 0x10);
      method._0_4_ = 0;
      method._4_2_ = 0;
      method._6_2_ = 0;
      bVar14 = System_String__IsNullOrEmpty((System_String_o *)SVar30,(MethodInfo *)0x0);
      if ((char)bVar14 == '\0') {
        if (*(System_String_Fields *)((long)SVar20 + 0xd0) != (System_String_Fields)0x0) {
          return *(System_String_o **)((long)*(System_String_Fields *)((long)SVar20 + 0xd0) + 0x10);
        }
        goto label_03b48c38;
      }
    }
    pSVar8 = ((System_String_o *)((long)SVar20 + 0x18))->klass;
    value_00 = *(void **)((long)SVar20 + 0x20);
    value = ((System_String_o *)((long)SVar20 + 0x30))->klass;
    bVar14 = System_String__IsNullOrEmpty((System_String_o *)value,(MethodInfo *)0x0);
    if (((char)bVar14 != '\0') && (value = pSVar8, pSVar8 == (System_String_c *)0x0)) {
      value = (System_String_c *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
    }
    bVar14 = System_String__IsNullOrEmpty((System_String_o *)value_00,(MethodInfo *)0x0);
    if (((char)bVar14 != '\0') && (value_00 = value, value == (System_String_c *)0x0)) {
      value_00 = (System_String_c *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
    }
    return (System_String_o *)value_00;
  }
label_03b48c38:
  il2cpp_runtime_helper_022b2c90();
  node_00 = (System_String_o **)SVar30;
  if (g_data_057a9cb8 == '\0') {
    node_00 = &" ";
    il2cpp_runtime_helper_023445d0();
    g_data_057a9cb8 = '\x01';
  }
  if (SVar30 != (System_String_Fields)0x0) {
    if (*(System_String_Fields *)((long)SVar30 + 0xd0) == (System_String_Fields)0x0) {
      pSVar17 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
      SVar20 = *(System_String_Fields *)((long)SVar30 + 0xa0);
    }
    else {
      pSVar17 = *(System_String_o **)((long)*(System_String_Fields *)((long)SVar30 + 0xd0) + 0x18);
      SVar20 = *(System_String_Fields *)((long)SVar30 + 0xa0);
    }
    if (SVar20 == (System_String_Fields)0x0) {
      pSVar16 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
    }
    else {
      pSVar16 = System_String__Join(" ",(System_String_array *)SVar20,(MethodInfo *)0x0);
    }
    if (g_data_057a9cb9 == '\0') {
      il2cpp_runtime_helper_023445d0(&" ");
      g_data_057a9cb9 = '\x01';
    }
    bVar14 = System_String__IsNullOrEmpty(pSVar17,(MethodInfo *)0x0);
    if ((char)bVar14 == '\0') {
      bVar14 = System_String__IsNullOrEmpty(pSVar16,(MethodInfo *)0x0);
      if ((char)bVar14 == '\0') {
        pSVar17 = System_String__Concat_3af7150(pSVar17," ",pSVar16,(MethodInfo *)0x0);
        return pSVar17;
      }
    }
    else {
      pSVar17 = pSVar16;
      if (pSVar16 == (System_String_o *)0x0) {
        pSVar17 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
      }
    }
    return pSVar17;
  }
  auVar36 = il2cpp_runtime_helper_022b2c90();
  lVar29 = auVar36._8_8_;
  pSStack_80 = auVar36._0_8_;
  pSVar17 = pSStack_80;
  if ((lVar29 != 0) && (pSVar17 = *(System_String_o **)(lVar29 + 0x18), 0 < (int)pSVar17)) {
    pSVar17 = (System_String_o *)((ulong)pSVar17 & 0xffffffff);
    pSVar16 = (System_String_o *)0x0;
    uStack_78 = 0;
    SVar19 = (System_String_Fields)method;
    SVar20 = (System_String_Fields)node_00;
    do {
      if (pSVar17 <= pSVar16) {
        pcStack_88 = Gisketch_Aottg2UI_Search_GisketchSearchIndex__AppendText;
        pSVar17 = (System_String_o *)il2cpp_runtime_helper_022b2ca0();
        if (SVar19 == (System_String_Fields)0x0) {
          return pSVar17;
        }
        SVar30 = *(System_String_Fields *)((long)SVar19 + 0x20);
        SVar27._stringLength = 0;
        SVar27._firstChar = 0;
        SVar27._6_2_ = 0;
        pSStack_a0 = (System_String_o *)0x3b48e22;
        __this_08 = SVar30;
        lStack_98 = lVar29;
        bVar14 = System_String__IsNullOrEmpty((System_String_o *)SVar30,(MethodInfo *)0x0);
        if ((char)bVar14 == '\0') {
          if (SVar20 != (System_String_Fields)0x0) {
            SVar27._stringLength = 0x20;
            SVar27._firstChar = 0;
            SVar27._6_2_ = 0;
            pSStack_a0 = (System_String_o *)0x3b48e3e;
            __this_08 = SVar20;
            pSVar18 = System_Text_StringBuilder__Append_3b048f0
                                ((System_Text_StringBuilder_o *)SVar20,0x20,(MethodInfo *)0x0);
            if (pSVar18 != (System_Text_StringBuilder_o *)0x0) {
              pSStack_a0 = (System_String_o *)0x3b48e54;
              System_Text_StringBuilder__Append_3b03f90(pSVar18,(System_String_o *)SVar30,(MethodInfo *)0x0);
              goto label_03b48e54;
            }
          }
        }
        else {
label_03b48e54:
          SVar30 = (System_String_Fields)((System_String_o *)((long)SVar19 + 0x30))->klass;
          SVar27._stringLength = 0;
          SVar27._firstChar = 0;
          SVar27._6_2_ = 0;
          pSStack_a0 = (System_String_o *)0x3b48e62;
          __this_08 = SVar30;
          bVar14 = System_String__IsNullOrEmpty((System_String_o *)SVar30,(MethodInfo *)0x0);
          if ((char)bVar14 == '\0') {
            if (SVar20 != (System_String_Fields)0x0) {
              SVar27._stringLength = 0x20;
              SVar27._firstChar = 0;
              SVar27._6_2_ = 0;
              pSStack_a0 = (System_String_o *)0x3b48e7e;
              __this_08 = SVar20;
              pSVar18 = System_Text_StringBuilder__Append_3b048f0
                                  ((System_Text_StringBuilder_o *)SVar20,0x20,(MethodInfo *)0x0);
              if (pSVar18 != (System_Text_StringBuilder_o *)0x0) {
                pSStack_a0 = (System_String_o *)0x3b48e94;
                System_Text_StringBuilder__Append_3b03f90(pSVar18,(System_String_o *)SVar30,(MethodInfo *)0x0)
                ;
                goto label_03b48e94;
              }
            }
          }
          else {
label_03b48e94:
            SVar30 = *(System_String_Fields *)((long)SVar19 + 0xb8);
            SVar27._stringLength = 0;
            SVar27._firstChar = 0;
            SVar27._6_2_ = 0;
            pSStack_a0 = (System_String_o *)0x3b48ea5;
            __this_08 = SVar30;
            bVar14 = System_String__IsNullOrEmpty((System_String_o *)SVar30,(MethodInfo *)0x0);
            if ((char)bVar14 == '\0') {
              if (SVar20 != (System_String_Fields)0x0) {
                SVar27._stringLength = 0x20;
                SVar27._firstChar = 0;
                SVar27._6_2_ = 0;
                pSStack_a0 = (System_String_o *)0x3b48ebd;
                __this_08 = SVar20;
                pSVar18 = System_Text_StringBuilder__Append_3b048f0
                                    ((System_Text_StringBuilder_o *)SVar20,0x20,(MethodInfo *)0x0);
                if (pSVar18 != (System_Text_StringBuilder_o *)0x0) {
                  pSStack_a0 = (System_String_o *)0x3b48ecf;
                  System_Text_StringBuilder__Append_3b03f90
                            (pSVar18,(System_String_o *)SVar30,(MethodInfo *)0x0);
                  goto label_03b48ecf;
                }
              }
            }
            else {
label_03b48ecf:
              if (*(System_String_Fields *)((long)SVar19 + 0xd0) == (System_String_Fields)0x0) {
                return (System_String_o *)0x0;
              }
              SVar19 = *(System_String_Fields *)((long)*(System_String_Fields *)((long)SVar19 + 0xd0) + 0x18);
              SVar27._stringLength = 0;
              SVar27._firstChar = 0;
              SVar27._6_2_ = 0;
              pSStack_a0 = (System_String_o *)0x3b48ee9;
              __this_08 = SVar19;
              bVar14 = System_String__IsNullOrEmpty((System_String_o *)SVar19,(MethodInfo *)0x0);
              if ((char)bVar14 != '\0') {
                return (System_String_o *)CONCAT44(extraout_var,bVar14);
              }
              if (SVar20 != (System_String_Fields)0x0) {
                SVar27._stringLength = 0x20;
                SVar27._firstChar = 0;
                SVar27._6_2_ = 0;
                pSStack_a0 = (System_String_o *)0x3b48f07;
                __this_08 = SVar20;
                pSVar18 = System_Text_StringBuilder__Append_3b048f0
                                    ((System_Text_StringBuilder_o *)SVar20,0x20,(MethodInfo *)0x0);
                if (pSVar18 != (System_Text_StringBuilder_o *)0x0) {
                  pSVar18 = System_Text_StringBuilder__Append_3b03f90
                                      (pSVar18,(System_String_o *)SVar19,(MethodInfo *)0x0);
                  return (System_String_o *)pSVar18;
                }
              }
            }
          }
        }
        pSStack_a0 = (System_String_o *)0x3b48f23;
        pSStack_d0 = (System_String_o *)il2cpp_runtime_helper_022b2c90();
        if (SVar27 == (System_String_Fields)0x0) {
          return pSStack_d0;
        }
        uVar26 = *(uint *)((long)SVar27 + 0x18);
        pSVar17 = (System_String_o *)(ulong)uVar26;
        if ((int)uVar26 < 1) {
          return pSVar17;
        }
        SVar28 = SVar27;
        pSVar31 = (System_String_Fields *)__this_08;
        SStack_c8 = SVar19;
        SStack_c0 = (System_String_Fields)method;
        SStack_b8 = (System_String_Fields)node_00;
        SStack_b0 = SVar20;
        SStack_a8 = SVar30;
        pSStack_a0 = pSVar16;
        if (__this_08 != (System_String_Fields)0x0) {
          pSVar16 = (System_String_o *)0x0;
          pSVar35 = &"section";
          SVar20 = SVar27;
          if (uVar26 == 0) goto label_03b4908c;
          goto label_03b48fb9;
        }
        SVar19._stringLength = 0;
        SVar19._firstChar = 0;
        SVar19._6_2_ = 0;
        pSVar34 = &"section";
        goto label_03b49020;
      }
      pcStack_88 = (code *)0x3b48ddd;
      SVar19 = (System_String_Fields)method;
      SVar20 = (System_String_Fields)node_00;
      Gisketch_Aottg2UI_Search_GisketchSearchIndex__AddNodeEntries
                ((System_Collections_Generic_List_GisketchSearchEntry__o *)node_00,
                 (Gisketch_Aottg2UI_Data_GisketchScreenDefinition_o *)method,
                 *(Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o **)(lVar29 + 0x20 + (long)pSVar16 * 8),
                 in_RCX,in_R8,in_R9);
      pSVar16 = (System_String_o *)((long)&pSVar16->klass + 1);
      pSVar17 = (System_String_o *)(ulong)*(uint *)(lVar29 + 0x18);
    } while ((long)pSVar16 < (long)(int)*(uint *)(lVar29 + 0x18));
  }
  return pSVar17;
label_03b49020:
  uVar26 = SVar19._stringLength;
  __this_08 = (System_String_Fields)pSVar34;
  pSVar35 = (System_String_Fields *)SVar30;
  if ((uint)pSVar17 <= uVar26) goto label_03b4908c;
  pSVar16 = (&((Il2CppType *)((long)SVar27 + 0x20))->data)[(int)uVar26];
  if (g_data_057a9cb6 == '\0') {
    pSVar31 = &"section";
    SStack_d8._stringLength = 0x3b4903d;
    SStack_d8._firstChar = 0;
    SStack_d8._6_2_ = 0;
    il2cpp_runtime_helper_023445d0();
    g_data_057a9cb6 = '\x01';
  }
  if ((pSVar16 == (System_String_o *)0x0) || (pSVar16[8].fields == (System_String_Fields)0x0))
  goto label_03b49087;
  pSVar31 = *(System_String_Fields **)((long)pSVar16[8].fields + 0x28);
  SStack_d8._stringLength = 0x3b49068;
  SStack_d8._firstChar = 0;
  SStack_d8._6_2_ = 0;
  SVar28 = "section";
  bVar14 = System_String__Equals_3af50f0
                     ((System_String_o *)pSVar31,(System_String_o *)"section",5,(MethodInfo *)0x0);
  if ((char)bVar14 == '\0') goto label_03b49087;
  SVar19._stringLength = uVar26 + 1;
  SVar19._4_4_ = 0;
  pSVar17 = (System_String_o *)(ulong)*(uint *)((long)SVar27 + 0x18);
  if ((int)*(uint *)((long)SVar27 + 0x18) <= (int)SVar19._stringLength) {
    return pSVar17;
  }
  goto label_03b49020;
label_03b49087:
  SStack_d8._stringLength = 0x3b4908c;
  SStack_d8._firstChar = 0;
  SStack_d8._6_2_ = 0;
  il2cpp_runtime_helper_022b2c90();
  __this_08 = (System_String_Fields)pSVar34;
  pSVar35 = (System_String_Fields *)SVar30;
  goto label_03b4908c;
  while (lVar32 = lVar32 + 0x10, (ulong)*(ushort *)(lVar29 + 0x12e) << 4 != lVar32) {
label_03b49770:
    if (*(long *)(*(long *)(lVar29 + 0xb0) + lVar32) == TypeInfo_IDisposable) {
      puVar23 = (undefined8 *)(lVar29 + (long)*(int *)(*(long *)(lVar29 + 0xb0) + 8 + lVar32) * 0x10 + 0x138);
      goto label_03b4979d;
    }
  }
label_03b4977f:
  puVar23 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar22,TypeInfo_IDisposable,0);
label_03b4979d:
  (*(code *)*puVar23)(plVar22);
label_03b497a6:
  if (in_stack_fffffffffffffe68 != 0) goto label_03b49dd9;
  if (__this_07 == (Il2CppObject *)0x0) {
    if (g_data_057a9cc0 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Empty_d__6);
      g_data_057a9cc0 = '\x01';
    }
    __this_07 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_Empty_d__6);
    System_Object___ctor(__this_07,(MethodInfo *)0x0);
    *(undefined4 *)&__this_07[1].klass = 0xfffffffe;
    iVar15 = System_Environment__get_CurrentManagedThreadId((MethodInfo *)0x0);
    *(int32_t *)&__this_07[2].klass = iVar15;
    item = (long *)0x0;
    if (__this_07 == (Il2CppObject *)0x0) goto label_03b49dcf;
  }
  pIVar11 = __this_07->klass;
  uVar3._0_1_ = (pIVar11->_2).rank;
  uVar3._1_1_ = (pIVar11->_2).minimumAlignment;
  if ((ulong)uVar3 != 0) {
    pIVar9 = (pIVar11->_1).interfaceOffsets;
    lVar29 = 0;
    do {
      if (*(long *)((long)&pIVar9->interfaceType + lVar29) == TypeInfo_IEnumerable_GisketchSearchEntry) {
        pVVar21 = pIVar11->vtable + *(int *)((long)&pIVar9->offset + lVar29);
        goto label_03b49881;
      }
      lVar29 = lVar29 + 0x10;
    } while ((ulong)uVar3 << 4 != lVar29);
  }
  pVVar21 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(__this_07,TypeInfo_IEnumerable_GisketchSearchEntry,0);
label_03b49881:
  item = (long *)(*pVVar21->methodPtr)(__this_07,pVVar21->method);
  if ((Il2CppObject *)item == (Il2CppObject *)0x0) goto label_03b49dde;
  do {
    do {
      pIVar11 = ((Il2CppObject *)item)->klass;
      uVar4._0_1_ = (pIVar11->_2).rank;
      uVar4._1_1_ = (pIVar11->_2).minimumAlignment;
      if ((ulong)uVar4 != 0) {
        pIVar9 = (pIVar11->_1).interfaceOffsets;
        lVar29 = 0;
        do {
          if (*(long *)((long)&pIVar9->interfaceType + lVar29) == TypeInfo_IEnumerator) {
            pVVar21 = pIVar11->vtable + *(int *)((long)&pIVar9->offset + lVar29);
            goto label_03b49903;
          }
          lVar29 = lVar29 + 0x10;
        } while ((ulong)uVar4 << 4 != lVar29);
      }
      pVVar21 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(item,TypeInfo_IEnumerator,0);
label_03b49903:
      cVar13 = (*pVVar21->methodPtr)(item,pVVar21->method);
      if (cVar13 == '\0') {
        iVar33 = 10;
        lVar29 = 0;
        goto label_03b49ac8;
      }
      pIVar11 = ((Il2CppObject *)item)->klass;
      uVar5._0_1_ = (pIVar11->_2).rank;
      uVar5._1_1_ = (pIVar11->_2).minimumAlignment;
      if ((ulong)uVar5 != 0) {
        pIVar9 = (pIVar11->_1).interfaceOffsets;
        lVar29 = 0;
        do {
          if (*(long *)((long)&pIVar9->interfaceType + lVar29) == TypeInfo_IEnumerator_GisketchSearchEntry) {
            pVVar21 = pIVar11->vtable + *(int *)((long)&pIVar9->offset + lVar29);
            goto label_03b49973;
          }
          lVar29 = lVar29 + 0x10;
        } while ((ulong)uVar5 << 4 != lVar29);
      }
      pVVar21 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(item,TypeInfo_IEnumerator_GisketchSearchEntry,0);
label_03b49973:
      auVar36 = (*pVVar21->methodPtr)(item,pVVar21->method);
      pGVar25 = auVar36._0_8_;
      bVar14 = Gisketch_Aottg2UI_Search_GisketchSearchResults__IsActiveControl
                         (pGVar25,activeScreenId,auVar36._8_8_);
      if ((char)bVar14 == '\0') break;
      if (pGVar25 == (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *)0x0) goto label_03b49da7;
      bVar14 = System_String__IsNullOrEmpty((pGVar25->fields)._TargetId_k__BackingField,(MethodInfo *)0x0);
      if ((char)bVar14 != '\0') break;
      if (__this_06 == (System_Collections_Generic_HashSet_object__o *)0x0) goto label_03b49db1;
      bVar14 = System_Collections_Generic_HashSet_object___Contains
                         (__this_06,(Il2CppObject *)(pGVar25->fields)._TargetId_k__BackingField,MethodInfo_Boolean_Contains);
    } while ((char)bVar14 == '\0');
    lVar29 = MethodInfo_Void_Add;
    if (__this_03 == (System_Collections_Generic_List_object__o *)0x0) {
      il2cpp_runtime_helper_022b2c90();
label_03b49d9d:
      il2cpp_runtime_helper_022b2c90();
      goto label_03b49da2;
    }
    piVar1 = &(__this_03->fields)._version;
    *piVar1 = *piVar1 + 1;
    pSVar10 = (__this_03->fields)._items;
    if (pSVar10 == (System_Object_array *)0x0) goto label_03b49d9d;
    uVar26 = (__this_03->fields)._size;
    if (uVar26 < (uint)pSVar10->max_length) {
      (__this_03->fields)._size = uVar26 + 1;
      pSVar10->m_Items[(int)uVar26] = (Il2CppObject *)pGVar25;
      il2cpp_runtime_helper_022b4080();
    }
    else {
      System_Collections_Generic_List_object___AddWithResize
                (__this_03,(Il2CppObject *)pGVar25,
                 *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar29 + 0x20) + 0xc0) + 0x70));
    }
    if ((((pGVar25 != (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *)0x0) &&
         (bVar14 = System_String__IsNullOrEmpty((pGVar25->fields)._ScreenId_k__BackingField,(MethodInfo *)0x0)
         , (char)bVar14 == '\0')) &&
        (bVar14 = System_String__IsNullOrEmpty(activeScreenId,(MethodInfo *)0x0), (char)bVar14 == '\0')) &&
       ((bVar14 = System_String__Equals_3af50f0
                            ((pGVar25->fields)._ScreenId_k__BackingField,activeScreenId,5,(MethodInfo *)0x0),
        (char)bVar14 != '\0' &&
        (bVar14 = System_String__IsNullOrEmpty((pGVar25->fields)._TargetId_k__BackingField,(MethodInfo *)0x0),
        (char)bVar14 == '\0')))) {
      if (__this_04 == (System_Collections_Generic_HashSet_object__o *)0x0) goto label_03b49dca;
      System_Collections_Generic_HashSet_object___Add
                (__this_04,(Il2CppObject *)(pGVar25->fields)._TargetId_k__BackingField,MethodInfo_Boolean_Add);
    }
  } while( true );
joined_r0x03b4a097:
  lVar12 = lVar32;
  if ((Il2CppObject *)item != (Il2CppObject *)0x0) {
    pIVar11 = ((Il2CppObject *)item)->klass;
    uVar7._0_1_ = (pIVar11->_2).rank;
    uVar7._1_1_ = (pIVar11->_2).minimumAlignment;
    if ((ulong)uVar7 != 0) {
      pIVar9 = (pIVar11->_1).interfaceOffsets;
      lVar32 = 0;
      do {
        if (*(long *)((long)&pIVar9->interfaceType + lVar32) == TypeInfo_IDisposable) {
          pVVar21 = pIVar11->vtable + *(int *)((long)&pIVar9->offset + lVar32);
          goto label_03b4a0ed;
        }
        lVar32 = lVar32 + 0x10;
      } while ((ulong)uVar7 << 4 != lVar32);
    }
    pVVar21 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(item,TypeInfo_IDisposable,0);
label_03b4a0ed:
    (*pVVar21->methodPtr)(item,pVVar21->method);
  }
  if (lVar29 == 0) {
    _Unwind_Resume(lVar12);
  }
  lVar32 = il2cpp_runtime_helper_022fefe0();
  lVar29 = lVar12;
  goto joined_r0x03b4a097;
label_03b49d6d:
  il2cpp_runtime_helper_022b2c90();
label_03b49d72:
  __this_02.fields._8_8_ = __this_04;
  __this_02.fields._list = (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffe68;
  __this_02.fields._current = _Var38.genericMethod;
  System_Collections_Generic_List_Enumerator_object___Dispose
            (__this_02,(MethodInfo_321A1C0 *)&stack0xfffffffffffffe78);
  return (System_String_o *)__this_03;
label_03b48fb9:
  do {
    node_00 = *(System_String_o ***)(&((Il2CppType *)((long)SVar27 + 0x20))->data + (long)pSVar16);
    SVar28 = SVar20;
    if (g_data_057a9cb6 == '\0') {
      pSVar31 = &"section";
      SStack_d8._stringLength = 0x3b48fcf;
      SStack_d8._firstChar = 0;
      SStack_d8._6_2_ = 0;
      il2cpp_runtime_helper_023445d0();
      g_data_057a9cb6 = '\x01';
      SVar28 = SVar20;
    }
    pSVar34 = (System_String_Fields *)__this_08;
    SVar30 = (System_String_Fields)pSVar35;
    if ((System_String_Fields)node_00 == (System_String_Fields)0x0) goto label_03b49087;
    if (*(void **)((long)node_00 + 0xd0) == (void *)0x0) {
label_03b48f70:
      SVar28._stringLength = 0x20;
      SVar28._firstChar = 0;
      SVar28._6_2_ = 0;
      SStack_d8._stringLength = 0x3b48f7f;
      SStack_d8._firstChar = 0;
      SStack_d8._6_2_ = 0;
      SVar19 = (System_String_Fields)
               System_Text_StringBuilder__Append_3b048f0
                         ((System_Text_StringBuilder_o *)__this_08,0x20,(MethodInfo *)0x0);
      SStack_d8._stringLength = 0x3b48f8a;
      SStack_d8._firstChar = 0;
      SStack_d8._6_2_ = 0;
      pSVar31 = (System_String_Fields *)node_00;
      SVar20 = (System_String_Fields)
               Gisketch_Aottg2UI_Search_GisketchSearchIndex__HarvestKeywords
                         ((Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)node_00,(MethodInfo *)SVar28);
      if (SVar19 == (System_String_Fields)0x0) goto label_03b49087;
      SStack_d8._stringLength = 0x3b48fa0;
      SStack_d8._firstChar = 0;
      SStack_d8._6_2_ = 0;
      pSVar31 = (System_String_Fields *)SVar19;
      System_Text_StringBuilder__Append_3b03f90
                ((System_Text_StringBuilder_o *)SVar19,(System_String_o *)SVar20,(MethodInfo *)0x0);
    }
    else {
      pSVar31 = *(System_String_Fields **)((long)*(void **)((long)node_00 + 0xd0) + 0x28);
      SStack_d8._stringLength = 0x3b48ffe;
      SStack_d8._firstChar = 0;
      SStack_d8._6_2_ = 0;
      SVar20 = "section";
      bVar14 = System_String__Equals_3af50f0
                         ((System_String_o *)pSVar31,(System_String_o *)"section",5,(MethodInfo *)0x0);
      if ((char)bVar14 == '\0') goto label_03b48f70;
    }
    uVar26 = *(uint *)((long)SVar27 + 0x18);
    pSVar16 = (System_String_o *)((long)&pSVar16->klass + 1);
    if ((int)uVar26 <= (int)(uint)pSVar16) {
      return (System_String_o *)(ulong)uVar26;
    }
    SVar28 = SVar20;
  } while ((uint)pSVar16 < uVar26);
label_03b4908c:
  SStack_d8._stringLength = 0x3b49091;
  SStack_d8._firstChar = 0;
  SStack_d8._6_2_ = 0;
  uStack_e8 = il2cpp_runtime_helper_022b2ca0();
  lVar29 = 0;
  SStack_f0._stringLength = 0x3b490b4;
  SStack_f0._firstChar = 0;
  SStack_f0._6_2_ = 0;
  SVar20 = SVar28;
  SStack_e0 = SVar19;
  SStack_d8 = __this_08;
  bVar14 = System_String__IsNullOrEmpty((System_String_o *)SVar28,(MethodInfo *)0x0);
  if ((char)bVar14 != '\0') {
    return (System_String_o *)CONCAT44(extraout_var_00,bVar14);
  }
  if ((System_String_Fields)pSVar31 != (System_String_Fields)0x0) {
    lVar29 = 0x20;
    SStack_f0._stringLength = 0x3b490d4;
    SStack_f0._firstChar = 0;
    SStack_f0._6_2_ = 0;
    SVar20 = (System_String_Fields)pSVar31;
    pSVar18 = System_Text_StringBuilder__Append_3b048f0
                        ((System_Text_StringBuilder_o *)pSVar31,0x20,(MethodInfo *)0x0);
    if (pSVar18 != (System_Text_StringBuilder_o *)0x0) {
      pSVar18 = System_Text_StringBuilder__Append_3b03f90(pSVar18,(System_String_o *)SVar28,(MethodInfo *)0x0)
      ;
      return (System_String_o *)pSVar18;
    }
  }
  SStack_f0._stringLength = 0x3b490f2;
  SStack_f0._firstChar = 0;
  SStack_f0._6_2_ = 0;
  uStack_100 = il2cpp_runtime_helper_022b2c90();
  SStack_f8 = (System_String_Fields)pSVar31;
  SStack_f0 = SVar28;
  if (g_data_057a9cba == '\0') {
    pSStack_108 = (System_String_o *)0x3b4911f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Contains);
    pSStack_108 = (System_String_o *)0x3b4912b;
    il2cpp_runtime_helper_023445d0(&"screen");
    pSStack_108 = (System_String_o *)0x3b49137;
    il2cpp_runtime_helper_023445d0(&"section");
    pSStack_108 = (System_String_o *)0x3b49143;
    il2cpp_runtime_helper_023445d0(&"main-menu");
    pSStack_108 = (System_String_o *)0x3b4914f;
    il2cpp_runtime_helper_023445d0(&"main-menu-option-");
    g_data_057a9cba = '\x01';
  }
  if (lVar29 != 0) {
    pSStack_108 = (System_String_o *)0x3b49179;
    bVar14 = System_String__Equals_3af50f0
                       (*(System_String_o **)(lVar29 + 0x20),"main-menu",5,(MethodInfo *)0x0);
    if ((char)bVar14 != '\0') {
      pSStack_108 = (System_String_o *)0x3b4919b;
      bVar14 = System_String__Equals_3af50f0
                         (*(System_String_o **)(lVar29 + 0x70),"screen",5,(MethodInfo *)0x0);
      if ((char)bVar14 == '\0') {
        pSStack_108 = (System_String_o *)0x3b491b9;
        bVar14 = System_String__Equals_3af50f0
                           (*(System_String_o **)(lVar29 + 0x70),(System_String_o *)"section",5,
                            (MethodInfo *)0x0);
        if ((char)bVar14 == '\0') {
          pSVar17 = (System_String_o *)0x0;
          pSStack_108 = (System_String_o *)0x3b491c8;
          bVar14 = System_String__IsNullOrEmpty(*(System_String_o **)(lVar29 + 0x48),(MethodInfo *)0x0);
          if ((char)bVar14 == '\0') {
            if (*(System_String_o **)(lVar29 + 0x48) != (System_String_o *)0x0) {
              pSStack_108 = (System_String_o *)0x3b491eb;
              pSVar17 = "main-menu-option-";
              bVar14 = System_String__StartsWith_3af5570
                                 (*(System_String_o **)(lVar29 + 0x48),"main-menu-option-",5,(MethodInfo *)0x0);
              if ((char)bVar14 == '\0') {
                return (System_String_o *)0x0;
              }
              if (*(System_Collections_Generic_HashSet_object__o **)((long)SVar20 + 0x10) !=
                  (System_Collections_Generic_HashSet_object__o *)0x0) {
                bVar14 = System_Collections_Generic_HashSet_object___Contains
                                   (*(System_Collections_Generic_HashSet_object__o **)((long)SVar20 + 0x10),
                                    *(Il2CppObject **)(lVar29 + 0x58),MethodInfo_Boolean_Contains);
                return (System_String_o *)CONCAT44(extraout_var_01,bVar14);
              }
            }
            __this_07 = (Il2CppObject *)0x0;
            pSStack_108 = (System_String_o *)0x3b49221;
            il2cpp_runtime_helper_022b2c90();
            lStack_130 = lVar29;
            SStack_128 = SVar27;
            SStack_120 = (System_String_Fields)node_00;
            SStack_118 = SVar20;
            SStack_110 = (System_String_Fields)pSVar35;
            pSStack_108 = pSVar16;
            if (g_data_057a9cbb == '\0') {
              il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
              il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
              il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchSearchEntry_get_Current);
              il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Add);
              il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Contains);
              il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_System_String);
              il2cpp_runtime_helper_023445d0(&TypeInfo_HashSet_string);
              il2cpp_runtime_helper_023445d0(&TypeInfo_IDisposable);
              il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerable_GisketchSearchEntry);
              il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerator_GisketchSearchEntry);
              il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerator);
              il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
              il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_Gisketch_Aottg2UI_Search_GisketchSea);
              il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_Gisketch_Aottg2UI_Search_GisketchSearchEntry);
              il2cpp_runtime_helper_023445d0(&TypeInfo_List_GisketchSearchEntry);
              il2cpp_runtime_helper_023445d0(&TypeInfo_StringComparer);
              g_data_057a9cbb = '\x01';
            }
            __this_03 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_GisketchSearchEntry);
            System_Collections_Generic_List_object____ctor(__this_03,MethodInfo_List_1_Gisketch_Aottg2UI_Search_GisketchSearchEntry);
            if (*(int *)(TypeInfo_StringComparer + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            if (g_data_057a9c88 == '\0') {
              il2cpp_runtime_helper_023445d0(&TypeInfo_StringComparer);
              g_data_057a9c88 = '\x01';
              iVar33 = *(int *)(TypeInfo_StringComparer + 0xe4);
            }
            else {
              iVar33 = *(int *)(TypeInfo_StringComparer + 0xe4);
            }
            if (iVar33 == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            pMVar24 = *(MethodInfo **)(*(long *)(TypeInfo_StringComparer + 0xb8) + 0x18);
            __this_04 = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_HashSet_string);
            System_Collections_Generic_HashSet_object____ctor_33e0600
                      (__this_04,(System_Collections_Generic_IEqualityComparer_T__o *)pMVar24,MethodInfo_HashSet_1_System_String);
            screenTitles = Gisketch_Aottg2UI_Search_GisketchSearchResults__ScreenTitles
                                     ((System_Collections_Generic_IEnumerable_GisketchSearchEntry__o *)
                                      __this_07,pMVar24);
            __this_05 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_GisketchSearchEntry);
            System_Collections_Generic_List_object____ctor(__this_05,MethodInfo_List_1_Gisketch_Aottg2UI_Search_GisketchSearchEntry);
            if (g_data_057a9c88 == '\0') {
              il2cpp_runtime_helper_023445d0(&TypeInfo_StringComparer);
              g_data_057a9c88 = '\x01';
              iVar33 = *(int *)(TypeInfo_StringComparer + 0xe4);
            }
            else {
              iVar33 = *(int *)(TypeInfo_StringComparer + 0xe4);
            }
            if (iVar33 == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            item = *(long **)(*(long *)(TypeInfo_StringComparer + 0xb8) + 0x18);
            __this_06 = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_HashSet_string);
            System_Collections_Generic_HashSet_object____ctor_33e0600
                      (__this_06,(System_Collections_Generic_IEqualityComparer_T__o *)item,MethodInfo_HashSet_1_System_String);
            if (pSVar17 == (System_String_o *)0x0) {
              if (g_data_057a9cc0 == '\0') {
                il2cpp_runtime_helper_023445d0(&TypeInfo_Empty_d__6);
                g_data_057a9cc0 = '\x01';
              }
              pSVar17 = (System_String_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Empty_d__6);
              System_Object___ctor((Il2CppObject *)pSVar17,(MethodInfo *)0x0);
              (pSVar17->fields)._stringLength = -2;
              iVar15 = System_Environment__get_CurrentManagedThreadId((MethodInfo *)0x0);
              *(int32_t *)&pSVar17[1].monitor = iVar15;
              if (pSVar17 == (System_String_o *)0x0) goto label_03b49dcf;
            }
            pSVar8 = pSVar17->klass;
            uVar2._0_1_ = (pSVar8->_2).rank;
            uVar2._1_1_ = (pSVar8->_2).minimumAlignment;
            if ((ulong)uVar2 != 0) {
              pIVar9 = (pSVar8->_1).interfaceOffsets;
              lVar29 = 0;
              do {
                if (*(long *)((long)&pIVar9->interfaceType + lVar29) == TypeInfo_IEnumerable_GisketchSearchEntry) {
                  pVVar21 = &(pSVar8->vtable)._0_Equals + *(int *)((long)&pIVar9->offset + lVar29);
                  goto label_03b4956f;
                }
                lVar29 = lVar29 + 0x10;
              } while ((ulong)uVar2 << 4 != lVar29);
            }
            pVVar21 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(pSVar17,TypeInfo_IEnumerable_GisketchSearchEntry,0);
label_03b4956f:
            plVar22 = (long *)(*pVVar21->methodPtr)(pSVar17,pVVar21->method);
            if (plVar22 == (long *)0x0) goto label_03b49dd4;
            item = &TypeInfo_IEnumerator;
            in_stack_fffffffffffffe68 = 0;
            do {
              lVar29 = *plVar22;
              if ((ulong)*(ushort *)(lVar29 + 0x12e) != 0) {
                lVar32 = 0;
                do {
                  if (*(long *)(*(long *)(lVar29 + 0xb0) + lVar32) == TypeInfo_IEnumerator) {
                    puVar23 = (undefined8 *)
                              ((long)*(int *)(*(long *)(lVar29 + 0xb0) + 8 + lVar32) * 0x10 + lVar29 + 0x138);
                    goto label_03b495f3;
                  }
                  lVar32 = lVar32 + 0x10;
                } while ((ulong)*(ushort *)(lVar29 + 0x12e) << 4 != lVar32);
              }
              puVar23 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar22,TypeInfo_IEnumerator,0);
label_03b495f3:
              cVar13 = (*(code *)*puVar23)();
              if (cVar13 == '\0') {
                item = (long *)&g_data_00000005;
                if (plVar22 == (long *)0x0) goto label_03b497a6;
                lVar29 = *plVar22;
                if ((ulong)*(ushort *)(lVar29 + 0x12e) == 0) goto label_03b4977f;
                lVar32 = 0;
                goto label_03b49770;
              }
              lVar29 = *plVar22;
              if ((ulong)*(ushort *)(lVar29 + 0x12e) != 0) {
                lVar32 = 0;
                do {
                  if (*(long *)(*(long *)(lVar29 + 0xb0) + lVar32) == TypeInfo_IEnumerator_GisketchSearchEntry) {
                    pMVar24 = (MethodInfo *)
                              ((long)*(int *)(*(long *)(lVar29 + 0xb0) + 8 + lVar32) * 0x10 + lVar29 + 0x138);
                    goto label_03b49663;
                  }
                  lVar32 = lVar32 + 0x10;
                } while ((ulong)*(ushort *)(lVar29 + 0x12e) << 4 != lVar32);
              }
              pMVar24 = (MethodInfo *)il2cpp_runtime_helper_02300d20(plVar22,TypeInfo_IEnumerator_GisketchSearchEntry,0);
label_03b49663:
              method_00 = (MethodInfo *)pMVar24->virtualMethodPointer;
              pGVar25 = (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *)(*pMVar24->methodPointer)();
              if (((pGVar25 != (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *)0x0) &&
                  (bVar14 = Gisketch_Aottg2UI_Search_GisketchSearchResults__IsLiveUsable(pGVar25,method_00),
                  (char)bVar14 != '\0')) &&
                 (bVar14 = Gisketch_Aottg2UI_Search_GisketchSearchResults__IsDuplicateMainMenuScreenButton
                                     (pGVar25,activeScreenId,screenTitles,pMVar24), lVar29 = MethodInfo_Void_Add,
                 (char)bVar14 == '\0')) {
                if (__this_05 == (System_Collections_Generic_List_object__o *)0x0) goto label_03b49dbb;
                piVar1 = &(__this_05->fields)._version;
                *piVar1 = *piVar1 + 1;
                pSVar10 = (__this_05->fields)._items;
                if (pSVar10 == (System_Object_array *)0x0) goto label_03b49dc0;
                uVar26 = (__this_05->fields)._size;
                if (uVar26 < (uint)pSVar10->max_length) {
                  (__this_05->fields)._size = uVar26 + 1;
                  pSVar10->m_Items[(int)uVar26] = (Il2CppObject *)pGVar25;
                  il2cpp_runtime_helper_022b4080(pSVar10->m_Items + (int)uVar26);
                }
                else {
                  System_Collections_Generic_List_object___AddWithResize
                            (__this_05,(Il2CppObject *)pGVar25,
                             *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar29 + 0x20) + 0xc0) + 0x70));
                }
                bVar14 = System_String__IsNullOrEmpty
                                   ((pGVar25->fields)._TargetId_k__BackingField,(MethodInfo *)0x0);
                if ((char)bVar14 == '\0') {
                  if (__this_06 == (System_Collections_Generic_HashSet_object__o *)0x0) {
                    do {
                      il2cpp_runtime_helper_022b2c90();
label_03b49dca:
                      il2cpp_runtime_helper_022b2c90();
label_03b49dcf:
                      do {
                        il2cpp_runtime_helper_022b2c90();
label_03b49dd4:
                        il2cpp_runtime_helper_022b2c90();
label_03b49dd9:
                        il2cpp_runtime_helper_022fefe0();
label_03b49dde:
                        il2cpp_runtime_helper_022b2c90();
                        do {
                          auVar37 = il2cpp_runtime_helper_022fefe0();
                          iVar33 = 0;
                          if (auVar37._8_4_ != 1) {
                            lVar32 = auVar37._0_8_;
                            lVar29 = 0;
                            goto joined_r0x03b4a097;
                          }
                          plVar22 = (long *)__cxa_begin_catch();
                          lVar29 = *plVar22;
                          __cxa_end_catch();
label_03b49ac8:
                          if ((Il2CppObject *)item != (Il2CppObject *)0x0) {
                            pIVar11 = ((Il2CppObject *)item)->klass;
                            uVar6._0_1_ = (pIVar11->_2).rank;
                            uVar6._1_1_ = (pIVar11->_2).minimumAlignment;
                            if ((ulong)uVar6 != 0) {
                              pIVar9 = (pIVar11->_1).interfaceOffsets;
                              lVar32 = 0;
                              do {
                                if (*(long *)((long)&pIVar9->interfaceType + lVar32) == TypeInfo_IDisposable) {
                                  pVVar21 = pIVar11->vtable + *(int *)((long)&pIVar9->offset + lVar32);
                                  goto label_03b49b2d;
                                }
                                lVar32 = lVar32 + 0x10;
                              } while ((ulong)uVar6 << 4 != lVar32);
                            }
                            pVVar21 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(item,TypeInfo_IDisposable,0);
label_03b49b2d:
                            (*pVVar21->methodPtr)(item,pVVar21->method);
                          }
                        } while (lVar29 != 0);
                        if ((iVar33 != 10) && (iVar33 != 0)) {
                          return (System_String_o *)__this_03;
                        }
                      } while (__this_05 == (System_Collections_Generic_List_object__o *)0x0);
                      System_Collections_Generic_List_object___GetEnumerator
                                ((System_Collections_Generic_List_Enumerator_T__o *)a_Stack_148,__this_05,
                                 MethodInfo_List_1_T_Enumerator_Gisketch_Aottg2UI_Search_GisketchSea);
                      item = (long *)pIStack_138;
                      _Var38 = a_Stack_148[0];
                      if (__this_04 == (System_Collections_Generic_HashSet_object__o *)0x0) {
                        while( true ) {
                          __this_00.fields._8_8_ = __this_04;
                          __this_00.fields._list =
                               (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffe68;
                          __this_00.fields._current = _Var38.genericMethod;
                          bVar14 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                             (__this_00,(MethodInfo_321A1D0 *)&stack0xfffffffffffffe78);
                          if ((char)bVar14 == '\0') goto label_03b49d72;
                          if ((Il2CppObject *)item == (Il2CppObject *)0x0) goto label_03b49da2;
                          bVar14 = System_String__IsNullOrEmpty
                                             (((Il2CppObject *)((long)item + 0x40))->monitor,(MethodInfo *)0x0
                                             );
                          lVar29 = MethodInfo_Void_Add;
                          if ((char)bVar14 == '\0') goto label_03b49db6;
                          if (__this_03 == (System_Collections_Generic_List_object__o *)0x0)
                          goto label_03b49d6d;
                          piVar1 = &(__this_03->fields)._version;
                          *piVar1 = *piVar1 + 1;
                          pSVar10 = (__this_03->fields)._items;
                          if (pSVar10 == (System_Object_array *)0x0) break;
                          uVar26 = (__this_03->fields)._size;
                          if (uVar26 < (uint)pSVar10->max_length) {
                            (__this_03->fields)._size = uVar26 + 1;
                            pSVar10->m_Items[(int)uVar26] = (Il2CppObject *)item;
                            il2cpp_runtime_helper_022b4080(pSVar10->m_Items + (int)uVar26,item);
                          }
                          else {
                            System_Collections_Generic_List_object___AddWithResize
                                      (__this_03,(Il2CppObject *)item,
                                       *(MethodInfo_362C220 **)
                                        (*(long *)(*(long *)(lVar29 + 0x20) + 0xc0) + 0x70));
                          }
                        }
                      }
                      else {
                        if (__this_03 == (System_Collections_Generic_List_object__o *)0x0) {
                          while( true ) {
                            __this_01.fields._8_8_ = __this_04;
                            __this_01.fields._list =
                                 (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffe68;
                            __this_01.fields._current = _Var38.genericMethod;
                            bVar14 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                               (__this_01,(MethodInfo_321A1D0 *)&stack0xfffffffffffffe78);
                            if ((char)bVar14 == '\0') goto label_03b49d72;
                            if ((Il2CppObject *)item == (Il2CppObject *)0x0) break;
                            bVar14 = System_String__IsNullOrEmpty
                                               (((Il2CppObject *)((long)item + 0x40))->monitor,
                                                (MethodInfo *)0x0);
                            if (((char)bVar14 != '\0') ||
                               (bVar14 = System_Collections_Generic_HashSet_object___Contains
                                                   (__this_04,((Il2CppObject *)((long)item + 0x40))->monitor,
                                                    MethodInfo_Boolean_Contains), (char)bVar14 == '\0')) goto label_03b49d6d;
                          }
                        }
                        else {
                          while( true ) {
                            __this.fields._8_8_ = __this_04;
                            __this.fields._list =
                                 (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffe68;
                            __this.fields._current = _Var38.genericMethod;
                            bVar14 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                               (__this,(MethodInfo_321A1D0 *)&stack0xfffffffffffffe78);
                            if ((char)bVar14 == '\0') goto label_03b49d72;
                            if ((Il2CppObject *)item == (Il2CppObject *)0x0) break;
                            bVar14 = System_String__IsNullOrEmpty
                                               (((Il2CppObject *)((long)item + 0x40))->monitor,
                                                (MethodInfo *)0x0);
                            if (((char)bVar14 != '\0') ||
                               (bVar14 = System_Collections_Generic_HashSet_object___Contains
                                                   (__this_04,((Il2CppObject *)((long)item + 0x40))->monitor,
                                                    MethodInfo_Boolean_Contains), (char)bVar14 == '\0')) {
                              lVar29 = MethodInfo_Void_Add;
                              piVar1 = &(__this_03->fields)._version;
                              *piVar1 = *piVar1 + 1;
                              pSVar10 = (__this_03->fields)._items;
                              if (pSVar10 == (System_Object_array *)0x0) goto label_03b49dac;
                              uVar26 = (__this_03->fields)._size;
                              if (uVar26 < (uint)pSVar10->max_length) {
                                (__this_03->fields)._size = uVar26 + 1;
                                pSVar10->m_Items[(int)uVar26] = (Il2CppObject *)item;
                                il2cpp_runtime_helper_022b4080(pSVar10->m_Items + (int)uVar26,item);
                              }
                              else {
                                System_Collections_Generic_List_object___AddWithResize
                                          (__this_03,(Il2CppObject *)item,
                                           *(MethodInfo_362C220 **)
                                            (*(long *)(*(long *)(lVar29 + 0x20) + 0xc0) + 0x70));
                              }
                            }
                          }
                        }
label_03b49da2:
                        il2cpp_runtime_helper_022b2c90();
label_03b49da7:
                        il2cpp_runtime_helper_022b2c90();
                      }
label_03b49dac:
                      il2cpp_runtime_helper_022b2c90();
label_03b49db1:
                      il2cpp_runtime_helper_022b2c90();
label_03b49db6:
                      il2cpp_runtime_helper_022b2c90();
label_03b49dbb:
                      il2cpp_runtime_helper_022b2c90();
label_03b49dc0:
                      il2cpp_runtime_helper_022b2c90();
                    } while( true );
                  }
                  System_Collections_Generic_HashSet_object___Add
                            (__this_06,(Il2CppObject *)(pGVar25->fields)._TargetId_k__BackingField,
                             MethodInfo_Boolean_Add);
                }
              }
            } while( true );
          }
        }
      }
    }
  }
  return (System_String_o *)0x0;
}


// Gisketch.Aottg2UI.Search.GisketchSearchIndex$$Title
// il2cpp: System_String_o* Gisketch_Aottg2UI_Search_GisketchSearchIndex__Title (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* node, const MethodInfo* method);
// 0x3b48b80

System_String_o *
Gisketch_Aottg2UI_Search_GisketchSearchIndex__Title
          (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *node,MethodInfo *method)

{
  int32_t *piVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  ushort uVar6;
  ushort uVar7;
  System_String_c *pSVar8;
  Il2CppRuntimeInterfaceOffsetPair *pIVar9;
  System_Object_array *pSVar10;
  Il2CppClass *pIVar11;
  System_Collections_Generic_List_Enumerator_object__o __this;
  System_Collections_Generic_List_Enumerator_object__o __this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  long lVar12;
  char cVar13;
  bool_conflict bVar14;
  int32_t iVar15;
  System_String_o *pSVar16;
  System_String_o *pSVar17;
  System_Text_StringBuilder_o *pSVar18;
  undefined4 extraout_var;
  System_String_Fields SVar19;
  System_String_Fields SVar20;
  undefined4 extraout_var_00;
  undefined4 extraout_var_01;
  System_Collections_Generic_List_object__o *__this_03;
  System_Collections_Generic_HashSet_object__o *__this_04;
  System_Collections_Generic_HashSet_string__o *screenTitles;
  System_Collections_Generic_List_object__o *__this_05;
  System_Collections_Generic_HashSet_object__o *__this_06;
  VirtualInvokeData *pVVar21;
  long *plVar22;
  undefined8 *puVar23;
  MethodInfo *pMVar24;
  Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *pGVar25;
  Il2CppObject *__this_07;
  System_String_o *in_RCX;
  System_String_o *activeScreenId;
  uint uVar26;
  long *item;
  System_String_Fields SVar27;
  System_String_Fields SVar28;
  long lVar29;
  MethodInfo *method_00;
  System_String_o **node_00;
  System_String_Fields __this_08;
  System_String_Fields *pSVar30;
  long lVar31;
  System_String_o *in_R8;
  MethodInfo *in_R9;
  int iVar32;
  System_String_Fields *pSVar33;
  System_String_o *value;
  System_String_Fields *pSVar34;
  System_String_Fields value_00;
  undefined1 auVar35 [16];
  undefined1 auVar36 [12];
  long in_stack_fffffffffffffe70;
  _union_249689 _Var37;
  _union_249689 a_Stack_140 [2];
  Il2CppObject *pIStack_130;
  long lStack_128;
  System_String_Fields SStack_120;
  System_String_Fields SStack_118;
  System_String_Fields SStack_110;
  System_String_Fields SStack_108;
  System_String_o *pSStack_100;
  undefined8 uStack_f8;
  System_String_Fields SStack_f0;
  System_String_Fields SStack_e8;
  undefined8 uStack_e0;
  System_String_Fields SStack_d8;
  System_String_Fields SStack_d0;
  System_String_o *pSStack_c8;
  System_String_Fields SStack_c0;
  System_String_Fields SStack_b8;
  System_String_Fields SStack_b0;
  System_String_Fields SStack_a8;
  System_String_Fields SStack_a0;
  System_String_o *pSStack_98;
  long lStack_90;
  code *pcStack_80;
  System_String_o *pSStack_78;
  undefined8 uStack_70;
  
  SVar20._stringLength = 0;
  SVar20._firstChar = 0;
  SVar20._6_2_ = 0;
  if (node == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
label_03b48c38:
    il2cpp_runtime_helper_022b2c90();
    node_00 = (System_String_o **)SVar20;
    if (g_data_057a9cb8 == '\0') {
      node_00 = &" ";
      il2cpp_runtime_helper_023445d0();
      g_data_057a9cb8 = '\x01';
    }
    if (SVar20 != (System_String_Fields)0x0) {
      if (*(System_String_Fields *)((long)SVar20 + 0xd0) == (System_String_Fields)0x0) {
        pSVar17 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
        SVar20 = *(System_String_Fields *)((long)SVar20 + 0xa0);
      }
      else {
        pSVar17 = *(System_String_o **)((long)*(System_String_Fields *)((long)SVar20 + 0xd0) + 0x18);
        SVar20 = *(System_String_Fields *)((long)SVar20 + 0xa0);
      }
      if (SVar20 == (System_String_Fields)0x0) {
        pSVar16 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
      }
      else {
        pSVar16 = System_String__Join(" ",(System_String_array *)SVar20,(MethodInfo *)0x0);
      }
      if (g_data_057a9cb9 == '\0') {
        il2cpp_runtime_helper_023445d0(&" ");
        g_data_057a9cb9 = '\x01';
      }
      bVar14 = System_String__IsNullOrEmpty(pSVar17,(MethodInfo *)0x0);
      if ((char)bVar14 == '\0') {
        bVar14 = System_String__IsNullOrEmpty(pSVar16,(MethodInfo *)0x0);
        if ((char)bVar14 == '\0') {
          pSVar17 = System_String__Concat_3af7150(pSVar17," ",pSVar16,(MethodInfo *)0x0);
          return pSVar17;
        }
      }
      else {
        pSVar17 = pSVar16;
        if (pSVar16 == (System_String_o *)0x0) {
          pSVar17 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
        }
      }
      return pSVar17;
    }
    auVar35 = il2cpp_runtime_helper_022b2c90();
    lVar29 = auVar35._8_8_;
    pSStack_78 = auVar35._0_8_;
    pSVar17 = pSStack_78;
    if ((lVar29 != 0) && (pSVar17 = *(System_String_o **)(lVar29 + 0x18), 0 < (int)pSVar17)) {
      pSVar17 = (System_String_o *)((ulong)pSVar17 & 0xffffffff);
      pSVar16 = (System_String_o *)0x0;
      uStack_70 = 0;
      SVar19 = (System_String_Fields)method;
      SVar20 = (System_String_Fields)node_00;
      do {
        if (pSVar17 <= pSVar16) {
          pcStack_80 = Gisketch_Aottg2UI_Search_GisketchSearchIndex__AppendText;
          pSVar17 = (System_String_o *)il2cpp_runtime_helper_022b2ca0();
          if (SVar19 == (System_String_Fields)0x0) {
            return pSVar17;
          }
          value_00 = *(System_String_Fields *)((long)SVar19 + 0x20);
          SVar27._stringLength = 0;
          SVar27._firstChar = 0;
          SVar27._6_2_ = 0;
          pSStack_98 = (System_String_o *)0x3b48e22;
          __this_08 = value_00;
          lStack_90 = lVar29;
          bVar14 = System_String__IsNullOrEmpty((System_String_o *)value_00,(MethodInfo *)0x0);
          if ((char)bVar14 == '\0') {
            if (SVar20 != (System_String_Fields)0x0) {
              SVar27._stringLength = 0x20;
              SVar27._firstChar = 0;
              SVar27._6_2_ = 0;
              pSStack_98 = (System_String_o *)0x3b48e3e;
              __this_08 = SVar20;
              pSVar18 = System_Text_StringBuilder__Append_3b048f0
                                  ((System_Text_StringBuilder_o *)SVar20,0x20,(MethodInfo *)0x0);
              if (pSVar18 != (System_Text_StringBuilder_o *)0x0) {
                pSStack_98 = (System_String_o *)0x3b48e54;
                System_Text_StringBuilder__Append_3b03f90
                          (pSVar18,(System_String_o *)value_00,(MethodInfo *)0x0);
                goto label_03b48e54;
              }
            }
          }
          else {
label_03b48e54:
            value_00 = (System_String_Fields)((System_String_o *)((long)SVar19 + 0x30))->klass;
            SVar27._stringLength = 0;
            SVar27._firstChar = 0;
            SVar27._6_2_ = 0;
            pSStack_98 = (System_String_o *)0x3b48e62;
            __this_08 = value_00;
            bVar14 = System_String__IsNullOrEmpty((System_String_o *)value_00,(MethodInfo *)0x0);
            if ((char)bVar14 == '\0') {
              if (SVar20 != (System_String_Fields)0x0) {
                SVar27._stringLength = 0x20;
                SVar27._firstChar = 0;
                SVar27._6_2_ = 0;
                pSStack_98 = (System_String_o *)0x3b48e7e;
                __this_08 = SVar20;
                pSVar18 = System_Text_StringBuilder__Append_3b048f0
                                    ((System_Text_StringBuilder_o *)SVar20,0x20,(MethodInfo *)0x0);
                if (pSVar18 != (System_Text_StringBuilder_o *)0x0) {
                  pSStack_98 = (System_String_o *)0x3b48e94;
                  System_Text_StringBuilder__Append_3b03f90
                            (pSVar18,(System_String_o *)value_00,(MethodInfo *)0x0);
                  goto label_03b48e94;
                }
              }
            }
            else {
label_03b48e94:
              value_00 = *(System_String_Fields *)((long)SVar19 + 0xb8);
              SVar27._stringLength = 0;
              SVar27._firstChar = 0;
              SVar27._6_2_ = 0;
              pSStack_98 = (System_String_o *)0x3b48ea5;
              __this_08 = value_00;
              bVar14 = System_String__IsNullOrEmpty((System_String_o *)value_00,(MethodInfo *)0x0);
              if ((char)bVar14 == '\0') {
                if (SVar20 != (System_String_Fields)0x0) {
                  SVar27._stringLength = 0x20;
                  SVar27._firstChar = 0;
                  SVar27._6_2_ = 0;
                  pSStack_98 = (System_String_o *)0x3b48ebd;
                  __this_08 = SVar20;
                  pSVar18 = System_Text_StringBuilder__Append_3b048f0
                                      ((System_Text_StringBuilder_o *)SVar20,0x20,(MethodInfo *)0x0);
                  if (pSVar18 != (System_Text_StringBuilder_o *)0x0) {
                    pSStack_98 = (System_String_o *)0x3b48ecf;
                    System_Text_StringBuilder__Append_3b03f90
                              (pSVar18,(System_String_o *)value_00,(MethodInfo *)0x0);
                    goto label_03b48ecf;
                  }
                }
              }
              else {
label_03b48ecf:
                if (*(System_String_Fields *)((long)SVar19 + 0xd0) == (System_String_Fields)0x0) {
                  return (System_String_o *)0x0;
                }
                SVar19 = *(System_String_Fields *)
                          ((long)*(System_String_Fields *)((long)SVar19 + 0xd0) + 0x18);
                SVar27._stringLength = 0;
                SVar27._firstChar = 0;
                SVar27._6_2_ = 0;
                pSStack_98 = (System_String_o *)0x3b48ee9;
                __this_08 = SVar19;
                bVar14 = System_String__IsNullOrEmpty((System_String_o *)SVar19,(MethodInfo *)0x0);
                if ((char)bVar14 != '\0') {
                  return (System_String_o *)CONCAT44(extraout_var,bVar14);
                }
                if (SVar20 != (System_String_Fields)0x0) {
                  SVar27._stringLength = 0x20;
                  SVar27._firstChar = 0;
                  SVar27._6_2_ = 0;
                  pSStack_98 = (System_String_o *)0x3b48f07;
                  __this_08 = SVar20;
                  pSVar18 = System_Text_StringBuilder__Append_3b048f0
                                      ((System_Text_StringBuilder_o *)SVar20,0x20,(MethodInfo *)0x0);
                  if (pSVar18 != (System_Text_StringBuilder_o *)0x0) {
                    pSVar18 = System_Text_StringBuilder__Append_3b03f90
                                        (pSVar18,(System_String_o *)SVar19,(MethodInfo *)0x0);
                    return (System_String_o *)pSVar18;
                  }
                }
              }
            }
          }
          pSStack_98 = (System_String_o *)0x3b48f23;
          pSStack_c8 = (System_String_o *)il2cpp_runtime_helper_022b2c90();
          if (SVar27 == (System_String_Fields)0x0) {
            return pSStack_c8;
          }
          uVar26 = *(uint *)((long)SVar27 + 0x18);
          pSVar17 = (System_String_o *)(ulong)uVar26;
          if ((int)uVar26 < 1) {
            return pSVar17;
          }
          SVar28 = SVar27;
          pSVar30 = (System_String_Fields *)__this_08;
          SStack_c0 = SVar19;
          SStack_b8 = (System_String_Fields)method;
          SStack_b0 = (System_String_Fields)node_00;
          SStack_a8 = SVar20;
          SStack_a0 = value_00;
          pSStack_98 = pSVar16;
          if (__this_08 != (System_String_Fields)0x0) {
            pSVar16 = (System_String_o *)0x0;
            pSVar34 = &"section";
            SVar20 = SVar27;
            if (uVar26 == 0) goto label_03b4908c;
            goto label_03b48fb9;
          }
          SVar19._stringLength = 0;
          SVar19._firstChar = 0;
          SVar19._6_2_ = 0;
          pSVar33 = &"section";
          goto label_03b49020;
        }
        pcStack_80 = (code *)0x3b48ddd;
        SVar19 = (System_String_Fields)method;
        SVar20 = (System_String_Fields)node_00;
        Gisketch_Aottg2UI_Search_GisketchSearchIndex__AddNodeEntries
                  ((System_Collections_Generic_List_GisketchSearchEntry__o *)node_00,
                   (Gisketch_Aottg2UI_Data_GisketchScreenDefinition_o *)method,
                   *(Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o **)(lVar29 + 0x20 + (long)pSVar16 * 8),
                   in_RCX,in_R8,in_R9);
        pSVar16 = (System_String_o *)((long)&pSVar16->klass + 1);
        pSVar17 = (System_String_o *)(ulong)*(uint *)(lVar29 + 0x18);
      } while ((long)pSVar16 < (long)(int)*(uint *)(lVar29 + 0x18));
    }
    return pSVar17;
  }
  pSVar17 = (node->fields).popover;
  if (pSVar17 != (System_String_o *)0x0) {
    SVar20 = pSVar17->fields;
    method._0_4_ = 0;
    method._4_2_ = 0;
    method._6_2_ = 0;
    bVar14 = System_String__IsNullOrEmpty((System_String_o *)SVar20,(MethodInfo *)0x0);
    if ((char)bVar14 == '\0') {
      pSVar17 = (node->fields).popover;
      if (pSVar17 != (System_String_o *)0x0) {
        return (System_String_o *)pSVar17->fields;
      }
      goto label_03b48c38;
    }
  }
  pSVar17 = (node->fields).id;
  value = (node->fields).text;
  pSVar16 = (node->fields).placeholder;
  bVar14 = System_String__IsNullOrEmpty(pSVar16,(MethodInfo *)0x0);
  if (((char)bVar14 != '\0') && (pSVar16 = pSVar17, pSVar17 == (System_String_o *)0x0)) {
    pSVar16 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  }
  bVar14 = System_String__IsNullOrEmpty(value,(MethodInfo *)0x0);
  if (((char)bVar14 != '\0') && (value = pSVar16, pSVar16 == (System_String_o *)0x0)) {
    value = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  }
  return value;
label_03b49020:
  uVar26 = SVar19._stringLength;
  __this_08 = (System_String_Fields)pSVar33;
  pSVar34 = (System_String_Fields *)value_00;
  if ((uint)pSVar17 <= uVar26) goto label_03b4908c;
  pSVar16 = (&((Il2CppType *)((long)SVar27 + 0x20))->data)[(int)uVar26];
  if (g_data_057a9cb6 == '\0') {
    pSVar30 = &"section";
    SStack_d0._stringLength = 0x3b4903d;
    SStack_d0._firstChar = 0;
    SStack_d0._6_2_ = 0;
    il2cpp_runtime_helper_023445d0();
    g_data_057a9cb6 = '\x01';
  }
  if ((pSVar16 == (System_String_o *)0x0) || (pSVar16[8].fields == (System_String_Fields)0x0))
  goto label_03b49087;
  pSVar30 = *(System_String_Fields **)((long)pSVar16[8].fields + 0x28);
  SStack_d0._stringLength = 0x3b49068;
  SStack_d0._firstChar = 0;
  SStack_d0._6_2_ = 0;
  SVar28 = "section";
  bVar14 = System_String__Equals_3af50f0
                     ((System_String_o *)pSVar30,(System_String_o *)"section",5,(MethodInfo *)0x0);
  if ((char)bVar14 == '\0') goto label_03b49087;
  SVar19._stringLength = uVar26 + 1;
  SVar19._4_4_ = 0;
  pSVar17 = (System_String_o *)(ulong)*(uint *)((long)SVar27 + 0x18);
  if ((int)*(uint *)((long)SVar27 + 0x18) <= (int)SVar19._stringLength) {
    return pSVar17;
  }
  goto label_03b49020;
label_03b49087:
  SStack_d0._stringLength = 0x3b4908c;
  SStack_d0._firstChar = 0;
  SStack_d0._6_2_ = 0;
  il2cpp_runtime_helper_022b2c90();
  __this_08 = (System_String_Fields)pSVar33;
  pSVar34 = (System_String_Fields *)value_00;
  goto label_03b4908c;
  while (lVar31 = lVar31 + 0x10, (ulong)*(ushort *)(lVar29 + 0x12e) << 4 != lVar31) {
label_03b49770:
    if (*(long *)(*(long *)(lVar29 + 0xb0) + lVar31) == TypeInfo_IDisposable) {
      puVar23 = (undefined8 *)(lVar29 + (long)*(int *)(*(long *)(lVar29 + 0xb0) + 8 + lVar31) * 0x10 + 0x138);
      goto label_03b4979d;
    }
  }
label_03b4977f:
  puVar23 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar22,TypeInfo_IDisposable,0);
label_03b4979d:
  (*(code *)*puVar23)(plVar22);
label_03b497a6:
  if (in_stack_fffffffffffffe70 != 0) goto label_03b49dd9;
  if (__this_07 == (Il2CppObject *)0x0) {
    if (g_data_057a9cc0 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Empty_d__6);
      g_data_057a9cc0 = '\x01';
    }
    __this_07 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_Empty_d__6);
    System_Object___ctor(__this_07,(MethodInfo *)0x0);
    *(undefined4 *)&__this_07[1].klass = 0xfffffffe;
    iVar15 = System_Environment__get_CurrentManagedThreadId((MethodInfo *)0x0);
    *(int32_t *)&__this_07[2].klass = iVar15;
    item = (long *)0x0;
    if (__this_07 == (Il2CppObject *)0x0) goto label_03b49dcf;
  }
  pIVar11 = __this_07->klass;
  uVar3._0_1_ = (pIVar11->_2).rank;
  uVar3._1_1_ = (pIVar11->_2).minimumAlignment;
  if ((ulong)uVar3 != 0) {
    pIVar9 = (pIVar11->_1).interfaceOffsets;
    lVar29 = 0;
    do {
      if (*(long *)((long)&pIVar9->interfaceType + lVar29) == TypeInfo_IEnumerable_GisketchSearchEntry) {
        pVVar21 = pIVar11->vtable + *(int *)((long)&pIVar9->offset + lVar29);
        goto label_03b49881;
      }
      lVar29 = lVar29 + 0x10;
    } while ((ulong)uVar3 << 4 != lVar29);
  }
  pVVar21 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(__this_07,TypeInfo_IEnumerable_GisketchSearchEntry,0);
label_03b49881:
  item = (long *)(*pVVar21->methodPtr)(__this_07,pVVar21->method);
  if ((Il2CppObject *)item == (Il2CppObject *)0x0) goto label_03b49dde;
  do {
    do {
      pIVar11 = ((Il2CppObject *)item)->klass;
      uVar4._0_1_ = (pIVar11->_2).rank;
      uVar4._1_1_ = (pIVar11->_2).minimumAlignment;
      if ((ulong)uVar4 != 0) {
        pIVar9 = (pIVar11->_1).interfaceOffsets;
        lVar29 = 0;
        do {
          if (*(long *)((long)&pIVar9->interfaceType + lVar29) == TypeInfo_IEnumerator) {
            pVVar21 = pIVar11->vtable + *(int *)((long)&pIVar9->offset + lVar29);
            goto label_03b49903;
          }
          lVar29 = lVar29 + 0x10;
        } while ((ulong)uVar4 << 4 != lVar29);
      }
      pVVar21 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(item,TypeInfo_IEnumerator,0);
label_03b49903:
      cVar13 = (*pVVar21->methodPtr)(item,pVVar21->method);
      if (cVar13 == '\0') {
        iVar32 = 10;
        lVar29 = 0;
        goto label_03b49ac8;
      }
      pIVar11 = ((Il2CppObject *)item)->klass;
      uVar5._0_1_ = (pIVar11->_2).rank;
      uVar5._1_1_ = (pIVar11->_2).minimumAlignment;
      if ((ulong)uVar5 != 0) {
        pIVar9 = (pIVar11->_1).interfaceOffsets;
        lVar29 = 0;
        do {
          if (*(long *)((long)&pIVar9->interfaceType + lVar29) == TypeInfo_IEnumerator_GisketchSearchEntry) {
            pVVar21 = pIVar11->vtable + *(int *)((long)&pIVar9->offset + lVar29);
            goto label_03b49973;
          }
          lVar29 = lVar29 + 0x10;
        } while ((ulong)uVar5 << 4 != lVar29);
      }
      pVVar21 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(item,TypeInfo_IEnumerator_GisketchSearchEntry,0);
label_03b49973:
      auVar35 = (*pVVar21->methodPtr)(item,pVVar21->method);
      pGVar25 = auVar35._0_8_;
      bVar14 = Gisketch_Aottg2UI_Search_GisketchSearchResults__IsActiveControl
                         (pGVar25,activeScreenId,auVar35._8_8_);
      if ((char)bVar14 == '\0') break;
      if (pGVar25 == (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *)0x0) goto label_03b49da7;
      bVar14 = System_String__IsNullOrEmpty((pGVar25->fields)._TargetId_k__BackingField,(MethodInfo *)0x0);
      if ((char)bVar14 != '\0') break;
      if (__this_06 == (System_Collections_Generic_HashSet_object__o *)0x0) goto label_03b49db1;
      bVar14 = System_Collections_Generic_HashSet_object___Contains
                         (__this_06,(Il2CppObject *)(pGVar25->fields)._TargetId_k__BackingField,MethodInfo_Boolean_Contains);
    } while ((char)bVar14 == '\0');
    lVar29 = MethodInfo_Void_Add;
    if (__this_03 == (System_Collections_Generic_List_object__o *)0x0) {
      il2cpp_runtime_helper_022b2c90();
label_03b49d9d:
      il2cpp_runtime_helper_022b2c90();
      goto label_03b49da2;
    }
    piVar1 = &(__this_03->fields)._version;
    *piVar1 = *piVar1 + 1;
    pSVar10 = (__this_03->fields)._items;
    if (pSVar10 == (System_Object_array *)0x0) goto label_03b49d9d;
    uVar26 = (__this_03->fields)._size;
    if (uVar26 < (uint)pSVar10->max_length) {
      (__this_03->fields)._size = uVar26 + 1;
      pSVar10->m_Items[(int)uVar26] = (Il2CppObject *)pGVar25;
      il2cpp_runtime_helper_022b4080();
    }
    else {
      System_Collections_Generic_List_object___AddWithResize
                (__this_03,(Il2CppObject *)pGVar25,
                 *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar29 + 0x20) + 0xc0) + 0x70));
    }
    if ((((pGVar25 != (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *)0x0) &&
         (bVar14 = System_String__IsNullOrEmpty((pGVar25->fields)._ScreenId_k__BackingField,(MethodInfo *)0x0)
         , (char)bVar14 == '\0')) &&
        (bVar14 = System_String__IsNullOrEmpty(activeScreenId,(MethodInfo *)0x0), (char)bVar14 == '\0')) &&
       ((bVar14 = System_String__Equals_3af50f0
                            ((pGVar25->fields)._ScreenId_k__BackingField,activeScreenId,5,(MethodInfo *)0x0),
        (char)bVar14 != '\0' &&
        (bVar14 = System_String__IsNullOrEmpty((pGVar25->fields)._TargetId_k__BackingField,(MethodInfo *)0x0),
        (char)bVar14 == '\0')))) {
      if (__this_04 == (System_Collections_Generic_HashSet_object__o *)0x0) goto label_03b49dca;
      System_Collections_Generic_HashSet_object___Add
                (__this_04,(Il2CppObject *)(pGVar25->fields)._TargetId_k__BackingField,MethodInfo_Boolean_Add);
    }
  } while( true );
joined_r0x03b4a097:
  lVar12 = lVar31;
  if ((Il2CppObject *)item != (Il2CppObject *)0x0) {
    pIVar11 = ((Il2CppObject *)item)->klass;
    uVar7._0_1_ = (pIVar11->_2).rank;
    uVar7._1_1_ = (pIVar11->_2).minimumAlignment;
    if ((ulong)uVar7 != 0) {
      pIVar9 = (pIVar11->_1).interfaceOffsets;
      lVar31 = 0;
      do {
        if (*(long *)((long)&pIVar9->interfaceType + lVar31) == TypeInfo_IDisposable) {
          pVVar21 = pIVar11->vtable + *(int *)((long)&pIVar9->offset + lVar31);
          goto label_03b4a0ed;
        }
        lVar31 = lVar31 + 0x10;
      } while ((ulong)uVar7 << 4 != lVar31);
    }
    pVVar21 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(item,TypeInfo_IDisposable,0);
label_03b4a0ed:
    (*pVVar21->methodPtr)(item,pVVar21->method);
  }
  if (lVar29 == 0) {
    _Unwind_Resume(lVar12);
  }
  lVar31 = il2cpp_runtime_helper_022fefe0();
  lVar29 = lVar12;
  goto joined_r0x03b4a097;
label_03b49d6d:
  il2cpp_runtime_helper_022b2c90();
label_03b49d72:
  __this_02.fields._8_8_ = __this_04;
  __this_02.fields._list = (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffe70;
  __this_02.fields._current = _Var37.genericMethod;
  System_Collections_Generic_List_Enumerator_object___Dispose
            (__this_02,(MethodInfo_321A1C0 *)&stack0xfffffffffffffe80);
  return (System_String_o *)__this_03;
label_03b48fb9:
  do {
    node_00 = *(System_String_o ***)(&((Il2CppType *)((long)SVar27 + 0x20))->data + (long)pSVar16);
    SVar28 = SVar20;
    if (g_data_057a9cb6 == '\0') {
      pSVar30 = &"section";
      SStack_d0._stringLength = 0x3b48fcf;
      SStack_d0._firstChar = 0;
      SStack_d0._6_2_ = 0;
      il2cpp_runtime_helper_023445d0();
      g_data_057a9cb6 = '\x01';
      SVar28 = SVar20;
    }
    pSVar33 = (System_String_Fields *)__this_08;
    value_00 = (System_String_Fields)pSVar34;
    if ((System_String_Fields)node_00 == (System_String_Fields)0x0) goto label_03b49087;
    if (*(void **)((long)node_00 + 0xd0) == (void *)0x0) {
label_03b48f70:
      SVar28._stringLength = 0x20;
      SVar28._firstChar = 0;
      SVar28._6_2_ = 0;
      SStack_d0._stringLength = 0x3b48f7f;
      SStack_d0._firstChar = 0;
      SStack_d0._6_2_ = 0;
      SVar19 = (System_String_Fields)
               System_Text_StringBuilder__Append_3b048f0
                         ((System_Text_StringBuilder_o *)__this_08,0x20,(MethodInfo *)0x0);
      SStack_d0._stringLength = 0x3b48f8a;
      SStack_d0._firstChar = 0;
      SStack_d0._6_2_ = 0;
      pSVar30 = (System_String_Fields *)node_00;
      SVar20 = (System_String_Fields)
               Gisketch_Aottg2UI_Search_GisketchSearchIndex__HarvestKeywords
                         ((Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)node_00,(MethodInfo *)SVar28);
      if (SVar19 == (System_String_Fields)0x0) goto label_03b49087;
      SStack_d0._stringLength = 0x3b48fa0;
      SStack_d0._firstChar = 0;
      SStack_d0._6_2_ = 0;
      pSVar30 = (System_String_Fields *)SVar19;
      System_Text_StringBuilder__Append_3b03f90
                ((System_Text_StringBuilder_o *)SVar19,(System_String_o *)SVar20,(MethodInfo *)0x0);
    }
    else {
      pSVar30 = *(System_String_Fields **)((long)*(void **)((long)node_00 + 0xd0) + 0x28);
      SStack_d0._stringLength = 0x3b48ffe;
      SStack_d0._firstChar = 0;
      SStack_d0._6_2_ = 0;
      SVar20 = "section";
      bVar14 = System_String__Equals_3af50f0
                         ((System_String_o *)pSVar30,(System_String_o *)"section",5,(MethodInfo *)0x0);
      if ((char)bVar14 == '\0') goto label_03b48f70;
    }
    uVar26 = *(uint *)((long)SVar27 + 0x18);
    pSVar16 = (System_String_o *)((long)&pSVar16->klass + 1);
    if ((int)uVar26 <= (int)(uint)pSVar16) {
      return (System_String_o *)(ulong)uVar26;
    }
    SVar28 = SVar20;
  } while ((uint)pSVar16 < uVar26);
label_03b4908c:
  SStack_d0._stringLength = 0x3b49091;
  SStack_d0._firstChar = 0;
  SStack_d0._6_2_ = 0;
  uStack_e0 = il2cpp_runtime_helper_022b2ca0();
  lVar29 = 0;
  SStack_e8._stringLength = 0x3b490b4;
  SStack_e8._firstChar = 0;
  SStack_e8._6_2_ = 0;
  SVar20 = SVar28;
  SStack_d8 = SVar19;
  SStack_d0 = __this_08;
  bVar14 = System_String__IsNullOrEmpty((System_String_o *)SVar28,(MethodInfo *)0x0);
  if ((char)bVar14 != '\0') {
    return (System_String_o *)CONCAT44(extraout_var_00,bVar14);
  }
  if ((System_String_Fields)pSVar30 != (System_String_Fields)0x0) {
    lVar29 = 0x20;
    SStack_e8._stringLength = 0x3b490d4;
    SStack_e8._firstChar = 0;
    SStack_e8._6_2_ = 0;
    SVar20 = (System_String_Fields)pSVar30;
    pSVar18 = System_Text_StringBuilder__Append_3b048f0
                        ((System_Text_StringBuilder_o *)pSVar30,0x20,(MethodInfo *)0x0);
    if (pSVar18 != (System_Text_StringBuilder_o *)0x0) {
      pSVar18 = System_Text_StringBuilder__Append_3b03f90(pSVar18,(System_String_o *)SVar28,(MethodInfo *)0x0)
      ;
      return (System_String_o *)pSVar18;
    }
  }
  SStack_e8._stringLength = 0x3b490f2;
  SStack_e8._firstChar = 0;
  SStack_e8._6_2_ = 0;
  uStack_f8 = il2cpp_runtime_helper_022b2c90();
  SStack_f0 = (System_String_Fields)pSVar30;
  SStack_e8 = SVar28;
  if (g_data_057a9cba == '\0') {
    pSStack_100 = (System_String_o *)0x3b4911f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Contains);
    pSStack_100 = (System_String_o *)0x3b4912b;
    il2cpp_runtime_helper_023445d0(&"screen");
    pSStack_100 = (System_String_o *)0x3b49137;
    il2cpp_runtime_helper_023445d0(&"section");
    pSStack_100 = (System_String_o *)0x3b49143;
    il2cpp_runtime_helper_023445d0(&"main-menu");
    pSStack_100 = (System_String_o *)0x3b4914f;
    il2cpp_runtime_helper_023445d0(&"main-menu-option-");
    g_data_057a9cba = '\x01';
  }
  if (lVar29 != 0) {
    pSStack_100 = (System_String_o *)0x3b49179;
    bVar14 = System_String__Equals_3af50f0
                       (*(System_String_o **)(lVar29 + 0x20),"main-menu",5,(MethodInfo *)0x0);
    if ((char)bVar14 != '\0') {
      pSStack_100 = (System_String_o *)0x3b4919b;
      bVar14 = System_String__Equals_3af50f0
                         (*(System_String_o **)(lVar29 + 0x70),"screen",5,(MethodInfo *)0x0);
      if ((char)bVar14 == '\0') {
        pSStack_100 = (System_String_o *)0x3b491b9;
        bVar14 = System_String__Equals_3af50f0
                           (*(System_String_o **)(lVar29 + 0x70),(System_String_o *)"section",5,
                            (MethodInfo *)0x0);
        if ((char)bVar14 == '\0') {
          pSVar17 = (System_String_o *)0x0;
          pSStack_100 = (System_String_o *)0x3b491c8;
          bVar14 = System_String__IsNullOrEmpty(*(System_String_o **)(lVar29 + 0x48),(MethodInfo *)0x0);
          if ((char)bVar14 == '\0') {
            if (*(System_String_o **)(lVar29 + 0x48) != (System_String_o *)0x0) {
              pSStack_100 = (System_String_o *)0x3b491eb;
              pSVar17 = "main-menu-option-";
              bVar14 = System_String__StartsWith_3af5570
                                 (*(System_String_o **)(lVar29 + 0x48),"main-menu-option-",5,(MethodInfo *)0x0);
              if ((char)bVar14 == '\0') {
                return (System_String_o *)0x0;
              }
              if (*(System_Collections_Generic_HashSet_object__o **)((long)SVar20 + 0x10) !=
                  (System_Collections_Generic_HashSet_object__o *)0x0) {
                bVar14 = System_Collections_Generic_HashSet_object___Contains
                                   (*(System_Collections_Generic_HashSet_object__o **)((long)SVar20 + 0x10),
                                    *(Il2CppObject **)(lVar29 + 0x58),MethodInfo_Boolean_Contains);
                return (System_String_o *)CONCAT44(extraout_var_01,bVar14);
              }
            }
            __this_07 = (Il2CppObject *)0x0;
            pSStack_100 = (System_String_o *)0x3b49221;
            il2cpp_runtime_helper_022b2c90();
            lStack_128 = lVar29;
            SStack_120 = SVar27;
            SStack_118 = (System_String_Fields)node_00;
            SStack_110 = SVar20;
            SStack_108 = (System_String_Fields)pSVar34;
            pSStack_100 = pSVar16;
            if (g_data_057a9cbb == '\0') {
              il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
              il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
              il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchSearchEntry_get_Current);
              il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Add);
              il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Contains);
              il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_System_String);
              il2cpp_runtime_helper_023445d0(&TypeInfo_HashSet_string);
              il2cpp_runtime_helper_023445d0(&TypeInfo_IDisposable);
              il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerable_GisketchSearchEntry);
              il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerator_GisketchSearchEntry);
              il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerator);
              il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
              il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_Gisketch_Aottg2UI_Search_GisketchSea);
              il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_Gisketch_Aottg2UI_Search_GisketchSearchEntry);
              il2cpp_runtime_helper_023445d0(&TypeInfo_List_GisketchSearchEntry);
              il2cpp_runtime_helper_023445d0(&TypeInfo_StringComparer);
              g_data_057a9cbb = '\x01';
            }
            __this_03 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_GisketchSearchEntry);
            System_Collections_Generic_List_object____ctor(__this_03,MethodInfo_List_1_Gisketch_Aottg2UI_Search_GisketchSearchEntry);
            if (*(int *)(TypeInfo_StringComparer + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            if (g_data_057a9c88 == '\0') {
              il2cpp_runtime_helper_023445d0(&TypeInfo_StringComparer);
              g_data_057a9c88 = '\x01';
              iVar32 = *(int *)(TypeInfo_StringComparer + 0xe4);
            }
            else {
              iVar32 = *(int *)(TypeInfo_StringComparer + 0xe4);
            }
            if (iVar32 == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            pMVar24 = *(MethodInfo **)(*(long *)(TypeInfo_StringComparer + 0xb8) + 0x18);
            __this_04 = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_HashSet_string);
            System_Collections_Generic_HashSet_object____ctor_33e0600
                      (__this_04,(System_Collections_Generic_IEqualityComparer_T__o *)pMVar24,MethodInfo_HashSet_1_System_String);
            screenTitles = Gisketch_Aottg2UI_Search_GisketchSearchResults__ScreenTitles
                                     ((System_Collections_Generic_IEnumerable_GisketchSearchEntry__o *)
                                      __this_07,pMVar24);
            __this_05 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_GisketchSearchEntry);
            System_Collections_Generic_List_object____ctor(__this_05,MethodInfo_List_1_Gisketch_Aottg2UI_Search_GisketchSearchEntry);
            if (g_data_057a9c88 == '\0') {
              il2cpp_runtime_helper_023445d0(&TypeInfo_StringComparer);
              g_data_057a9c88 = '\x01';
              iVar32 = *(int *)(TypeInfo_StringComparer + 0xe4);
            }
            else {
              iVar32 = *(int *)(TypeInfo_StringComparer + 0xe4);
            }
            if (iVar32 == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            item = *(long **)(*(long *)(TypeInfo_StringComparer + 0xb8) + 0x18);
            __this_06 = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_HashSet_string);
            System_Collections_Generic_HashSet_object____ctor_33e0600
                      (__this_06,(System_Collections_Generic_IEqualityComparer_T__o *)item,MethodInfo_HashSet_1_System_String);
            if (pSVar17 == (System_String_o *)0x0) {
              if (g_data_057a9cc0 == '\0') {
                il2cpp_runtime_helper_023445d0(&TypeInfo_Empty_d__6);
                g_data_057a9cc0 = '\x01';
              }
              pSVar17 = (System_String_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Empty_d__6);
              System_Object___ctor((Il2CppObject *)pSVar17,(MethodInfo *)0x0);
              (pSVar17->fields)._stringLength = -2;
              iVar15 = System_Environment__get_CurrentManagedThreadId((MethodInfo *)0x0);
              *(int32_t *)&pSVar17[1].monitor = iVar15;
              if (pSVar17 == (System_String_o *)0x0) goto label_03b49dcf;
            }
            pSVar8 = pSVar17->klass;
            uVar2._0_1_ = (pSVar8->_2).rank;
            uVar2._1_1_ = (pSVar8->_2).minimumAlignment;
            if ((ulong)uVar2 != 0) {
              pIVar9 = (pSVar8->_1).interfaceOffsets;
              lVar29 = 0;
              do {
                if (*(long *)((long)&pIVar9->interfaceType + lVar29) == TypeInfo_IEnumerable_GisketchSearchEntry) {
                  pVVar21 = &(pSVar8->vtable)._0_Equals + *(int *)((long)&pIVar9->offset + lVar29);
                  goto label_03b4956f;
                }
                lVar29 = lVar29 + 0x10;
              } while ((ulong)uVar2 << 4 != lVar29);
            }
            pVVar21 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(pSVar17,TypeInfo_IEnumerable_GisketchSearchEntry,0);
label_03b4956f:
            plVar22 = (long *)(*pVVar21->methodPtr)(pSVar17,pVVar21->method);
            if (plVar22 == (long *)0x0) goto label_03b49dd4;
            item = &TypeInfo_IEnumerator;
            in_stack_fffffffffffffe70 = 0;
            do {
              lVar29 = *plVar22;
              if ((ulong)*(ushort *)(lVar29 + 0x12e) != 0) {
                lVar31 = 0;
                do {
                  if (*(long *)(*(long *)(lVar29 + 0xb0) + lVar31) == TypeInfo_IEnumerator) {
                    puVar23 = (undefined8 *)
                              ((long)*(int *)(*(long *)(lVar29 + 0xb0) + 8 + lVar31) * 0x10 + lVar29 + 0x138);
                    goto label_03b495f3;
                  }
                  lVar31 = lVar31 + 0x10;
                } while ((ulong)*(ushort *)(lVar29 + 0x12e) << 4 != lVar31);
              }
              puVar23 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar22,TypeInfo_IEnumerator,0);
label_03b495f3:
              cVar13 = (*(code *)*puVar23)();
              if (cVar13 == '\0') {
                item = (long *)&g_data_00000005;
                if (plVar22 == (long *)0x0) goto label_03b497a6;
                lVar29 = *plVar22;
                if ((ulong)*(ushort *)(lVar29 + 0x12e) == 0) goto label_03b4977f;
                lVar31 = 0;
                goto label_03b49770;
              }
              lVar29 = *plVar22;
              if ((ulong)*(ushort *)(lVar29 + 0x12e) != 0) {
                lVar31 = 0;
                do {
                  if (*(long *)(*(long *)(lVar29 + 0xb0) + lVar31) == TypeInfo_IEnumerator_GisketchSearchEntry) {
                    pMVar24 = (MethodInfo *)
                              ((long)*(int *)(*(long *)(lVar29 + 0xb0) + 8 + lVar31) * 0x10 + lVar29 + 0x138);
                    goto label_03b49663;
                  }
                  lVar31 = lVar31 + 0x10;
                } while ((ulong)*(ushort *)(lVar29 + 0x12e) << 4 != lVar31);
              }
              pMVar24 = (MethodInfo *)il2cpp_runtime_helper_02300d20(plVar22,TypeInfo_IEnumerator_GisketchSearchEntry,0);
label_03b49663:
              method_00 = (MethodInfo *)pMVar24->virtualMethodPointer;
              pGVar25 = (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *)(*pMVar24->methodPointer)();
              if (((pGVar25 != (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *)0x0) &&
                  (bVar14 = Gisketch_Aottg2UI_Search_GisketchSearchResults__IsLiveUsable(pGVar25,method_00),
                  (char)bVar14 != '\0')) &&
                 (bVar14 = Gisketch_Aottg2UI_Search_GisketchSearchResults__IsDuplicateMainMenuScreenButton
                                     (pGVar25,activeScreenId,screenTitles,pMVar24), lVar29 = MethodInfo_Void_Add,
                 (char)bVar14 == '\0')) {
                if (__this_05 == (System_Collections_Generic_List_object__o *)0x0) goto label_03b49dbb;
                piVar1 = &(__this_05->fields)._version;
                *piVar1 = *piVar1 + 1;
                pSVar10 = (__this_05->fields)._items;
                if (pSVar10 == (System_Object_array *)0x0) goto label_03b49dc0;
                uVar26 = (__this_05->fields)._size;
                if (uVar26 < (uint)pSVar10->max_length) {
                  (__this_05->fields)._size = uVar26 + 1;
                  pSVar10->m_Items[(int)uVar26] = (Il2CppObject *)pGVar25;
                  il2cpp_runtime_helper_022b4080(pSVar10->m_Items + (int)uVar26);
                }
                else {
                  System_Collections_Generic_List_object___AddWithResize
                            (__this_05,(Il2CppObject *)pGVar25,
                             *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar29 + 0x20) + 0xc0) + 0x70));
                }
                bVar14 = System_String__IsNullOrEmpty
                                   ((pGVar25->fields)._TargetId_k__BackingField,(MethodInfo *)0x0);
                if ((char)bVar14 == '\0') {
                  if (__this_06 == (System_Collections_Generic_HashSet_object__o *)0x0) {
                    do {
                      il2cpp_runtime_helper_022b2c90();
label_03b49dca:
                      il2cpp_runtime_helper_022b2c90();
label_03b49dcf:
                      do {
                        il2cpp_runtime_helper_022b2c90();
label_03b49dd4:
                        il2cpp_runtime_helper_022b2c90();
label_03b49dd9:
                        il2cpp_runtime_helper_022fefe0();
label_03b49dde:
                        il2cpp_runtime_helper_022b2c90();
                        do {
                          auVar36 = il2cpp_runtime_helper_022fefe0();
                          iVar32 = 0;
                          if (auVar36._8_4_ != 1) {
                            lVar31 = auVar36._0_8_;
                            lVar29 = 0;
                            goto joined_r0x03b4a097;
                          }
                          plVar22 = (long *)__cxa_begin_catch();
                          lVar29 = *plVar22;
                          __cxa_end_catch();
label_03b49ac8:
                          if ((Il2CppObject *)item != (Il2CppObject *)0x0) {
                            pIVar11 = ((Il2CppObject *)item)->klass;
                            uVar6._0_1_ = (pIVar11->_2).rank;
                            uVar6._1_1_ = (pIVar11->_2).minimumAlignment;
                            if ((ulong)uVar6 != 0) {
                              pIVar9 = (pIVar11->_1).interfaceOffsets;
                              lVar31 = 0;
                              do {
                                if (*(long *)((long)&pIVar9->interfaceType + lVar31) == TypeInfo_IDisposable) {
                                  pVVar21 = pIVar11->vtable + *(int *)((long)&pIVar9->offset + lVar31);
                                  goto label_03b49b2d;
                                }
                                lVar31 = lVar31 + 0x10;
                              } while ((ulong)uVar6 << 4 != lVar31);
                            }
                            pVVar21 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(item,TypeInfo_IDisposable,0);
label_03b49b2d:
                            (*pVVar21->methodPtr)(item,pVVar21->method);
                          }
                        } while (lVar29 != 0);
                        if ((iVar32 != 10) && (iVar32 != 0)) {
                          return (System_String_o *)__this_03;
                        }
                      } while (__this_05 == (System_Collections_Generic_List_object__o *)0x0);
                      System_Collections_Generic_List_object___GetEnumerator
                                ((System_Collections_Generic_List_Enumerator_T__o *)a_Stack_140,__this_05,
                                 MethodInfo_List_1_T_Enumerator_Gisketch_Aottg2UI_Search_GisketchSea);
                      item = (long *)pIStack_130;
                      _Var37 = a_Stack_140[0];
                      if (__this_04 == (System_Collections_Generic_HashSet_object__o *)0x0) {
                        while( true ) {
                          __this_00.fields._8_8_ = __this_04;
                          __this_00.fields._list =
                               (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffe70;
                          __this_00.fields._current = _Var37.genericMethod;
                          bVar14 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                             (__this_00,(MethodInfo_321A1D0 *)&stack0xfffffffffffffe80);
                          if ((char)bVar14 == '\0') goto label_03b49d72;
                          if ((Il2CppObject *)item == (Il2CppObject *)0x0) goto label_03b49da2;
                          bVar14 = System_String__IsNullOrEmpty
                                             (((Il2CppObject *)((long)item + 0x40))->monitor,(MethodInfo *)0x0
                                             );
                          lVar29 = MethodInfo_Void_Add;
                          if ((char)bVar14 == '\0') goto label_03b49db6;
                          if (__this_03 == (System_Collections_Generic_List_object__o *)0x0)
                          goto label_03b49d6d;
                          piVar1 = &(__this_03->fields)._version;
                          *piVar1 = *piVar1 + 1;
                          pSVar10 = (__this_03->fields)._items;
                          if (pSVar10 == (System_Object_array *)0x0) break;
                          uVar26 = (__this_03->fields)._size;
                          if (uVar26 < (uint)pSVar10->max_length) {
                            (__this_03->fields)._size = uVar26 + 1;
                            pSVar10->m_Items[(int)uVar26] = (Il2CppObject *)item;
                            il2cpp_runtime_helper_022b4080(pSVar10->m_Items + (int)uVar26,item);
                          }
                          else {
                            System_Collections_Generic_List_object___AddWithResize
                                      (__this_03,(Il2CppObject *)item,
                                       *(MethodInfo_362C220 **)
                                        (*(long *)(*(long *)(lVar29 + 0x20) + 0xc0) + 0x70));
                          }
                        }
                      }
                      else {
                        if (__this_03 == (System_Collections_Generic_List_object__o *)0x0) {
                          while( true ) {
                            __this_01.fields._8_8_ = __this_04;
                            __this_01.fields._list =
                                 (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffe70;
                            __this_01.fields._current = _Var37.genericMethod;
                            bVar14 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                               (__this_01,(MethodInfo_321A1D0 *)&stack0xfffffffffffffe80);
                            if ((char)bVar14 == '\0') goto label_03b49d72;
                            if ((Il2CppObject *)item == (Il2CppObject *)0x0) break;
                            bVar14 = System_String__IsNullOrEmpty
                                               (((Il2CppObject *)((long)item + 0x40))->monitor,
                                                (MethodInfo *)0x0);
                            if (((char)bVar14 != '\0') ||
                               (bVar14 = System_Collections_Generic_HashSet_object___Contains
                                                   (__this_04,((Il2CppObject *)((long)item + 0x40))->monitor,
                                                    MethodInfo_Boolean_Contains), (char)bVar14 == '\0')) goto label_03b49d6d;
                          }
                        }
                        else {
                          while( true ) {
                            __this.fields._8_8_ = __this_04;
                            __this.fields._list =
                                 (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffe70;
                            __this.fields._current = _Var37.genericMethod;
                            bVar14 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                               (__this,(MethodInfo_321A1D0 *)&stack0xfffffffffffffe80);
                            if ((char)bVar14 == '\0') goto label_03b49d72;
                            if ((Il2CppObject *)item == (Il2CppObject *)0x0) break;
                            bVar14 = System_String__IsNullOrEmpty
                                               (((Il2CppObject *)((long)item + 0x40))->monitor,
                                                (MethodInfo *)0x0);
                            if (((char)bVar14 != '\0') ||
                               (bVar14 = System_Collections_Generic_HashSet_object___Contains
                                                   (__this_04,((Il2CppObject *)((long)item + 0x40))->monitor,
                                                    MethodInfo_Boolean_Contains), (char)bVar14 == '\0')) {
                              lVar29 = MethodInfo_Void_Add;
                              piVar1 = &(__this_03->fields)._version;
                              *piVar1 = *piVar1 + 1;
                              pSVar10 = (__this_03->fields)._items;
                              if (pSVar10 == (System_Object_array *)0x0) goto label_03b49dac;
                              uVar26 = (__this_03->fields)._size;
                              if (uVar26 < (uint)pSVar10->max_length) {
                                (__this_03->fields)._size = uVar26 + 1;
                                pSVar10->m_Items[(int)uVar26] = (Il2CppObject *)item;
                                il2cpp_runtime_helper_022b4080(pSVar10->m_Items + (int)uVar26,item);
                              }
                              else {
                                System_Collections_Generic_List_object___AddWithResize
                                          (__this_03,(Il2CppObject *)item,
                                           *(MethodInfo_362C220 **)
                                            (*(long *)(*(long *)(lVar29 + 0x20) + 0xc0) + 0x70));
                              }
                            }
                          }
                        }
label_03b49da2:
                        il2cpp_runtime_helper_022b2c90();
label_03b49da7:
                        il2cpp_runtime_helper_022b2c90();
                      }
label_03b49dac:
                      il2cpp_runtime_helper_022b2c90();
label_03b49db1:
                      il2cpp_runtime_helper_022b2c90();
label_03b49db6:
                      il2cpp_runtime_helper_022b2c90();
label_03b49dbb:
                      il2cpp_runtime_helper_022b2c90();
label_03b49dc0:
                      il2cpp_runtime_helper_022b2c90();
                    } while( true );
                  }
                  System_Collections_Generic_HashSet_object___Add
                            (__this_06,(Il2CppObject *)(pGVar25->fields)._TargetId_k__BackingField,
                             MethodInfo_Boolean_Add);
                }
              }
            } while( true );
          }
        }
      }
    }
  }
  return (System_String_o *)0x0;
}


// Gisketch.Aottg2UI.Search.GisketchSearchIndex$$Keywords
// il2cpp: System_String_o* Gisketch_Aottg2UI_Search_GisketchSearchIndex__Keywords (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* node, const MethodInfo* method);
// 0x3b48c40

System_String_o *
Gisketch_Aottg2UI_Search_GisketchSearchIndex__Keywords
          (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *node,MethodInfo *method)

{
  int32_t *piVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  ushort uVar6;
  ushort uVar7;
  System_String_array *value;
  Il2CppRuntimeInterfaceOffsetPair *pIVar8;
  System_Object_array *pSVar9;
  Il2CppClass *pIVar10;
  System_Collections_Generic_List_Enumerator_object__o __this;
  System_Collections_Generic_List_Enumerator_object__o __this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  long lVar11;
  char cVar12;
  bool_conflict bVar13;
  int32_t iVar14;
  System_String_c *value_00;
  System_String_o *pSVar15;
  System_Text_StringBuilder_o *pSVar16;
  undefined4 extraout_var;
  System_String_Fields SVar17;
  System_String_Fields SVar18;
  undefined4 extraout_var_00;
  undefined4 extraout_var_01;
  System_Collections_Generic_List_object__o *__this_03;
  System_Collections_Generic_HashSet_object__o *__this_04;
  System_Collections_Generic_HashSet_string__o *screenTitles;
  System_Collections_Generic_List_object__o *__this_05;
  System_Collections_Generic_HashSet_object__o *__this_06;
  VirtualInvokeData *pVVar19;
  long *plVar20;
  undefined8 *puVar21;
  MethodInfo *pMVar22;
  Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *pGVar23;
  Il2CppObject *__this_07;
  System_String_o *in_RCX;
  System_String_o *activeScreenId;
  uint uVar24;
  System_String_c *pSVar25;
  System_String_o *pSVar26;
  long *item;
  System_String_Fields SVar27;
  System_String_Fields SVar28;
  long lVar29;
  MethodInfo *method_00;
  System_String_o **node_00;
  System_String_Fields __this_08;
  System_String_Fields *pSVar30;
  long lVar31;
  System_String_o *in_R8;
  MethodInfo *in_R9;
  int iVar32;
  System_String_Fields *pSVar33;
  System_String_Fields *pSVar34;
  System_String_Fields value_01;
  undefined1 auVar35 [16];
  undefined1 auVar36 [12];
  long in_stack_fffffffffffffe98;
  _union_249689 _Var37;
  _union_249689 a_Stack_118 [2];
  Il2CppObject *pIStack_108;
  long lStack_100;
  System_String_Fields SStack_f8;
  System_String_Fields SStack_f0;
  System_String_Fields SStack_e8;
  System_String_Fields SStack_e0;
  System_String_o *pSStack_d8;
  undefined8 uStack_d0;
  System_String_Fields SStack_c8;
  System_String_Fields SStack_c0;
  undefined8 uStack_b8;
  System_String_Fields SStack_b0;
  System_String_Fields SStack_a8;
  System_String_o *pSStack_a0;
  System_String_Fields SStack_98;
  System_String_Fields SStack_90;
  System_String_Fields SStack_88;
  System_String_Fields SStack_80;
  System_String_Fields SStack_78;
  System_String_o *pSStack_70;
  long lStack_68;
  code *pcStack_58;
  System_String_o *pSStack_50;
  undefined8 uStack_48;
  
  node_00 = (System_String_o **)node;
  if (g_data_057a9cb8 == '\0') {
    node_00 = &" ";
    il2cpp_runtime_helper_023445d0();
    g_data_057a9cb8 = '\x01';
  }
  if (node != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    pSVar15 = (node->fields).popover;
    if (pSVar15 == (System_String_o *)0x0) {
      pSVar25 = (System_String_c *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
      value = *(System_String_array **)&(node->fields).maxVisibleItems;
    }
    else {
      pSVar25 = pSVar15[1].klass;
      value = *(System_String_array **)&(node->fields).maxVisibleItems;
    }
    if (value == (System_String_array *)0x0) {
      value_00 = (System_String_c *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
    }
    else {
      value_00 = (System_String_c *)System_String__Join(" ",value,(MethodInfo *)0x0);
    }
    if (g_data_057a9cb9 == '\0') {
      il2cpp_runtime_helper_023445d0(&" ");
      g_data_057a9cb9 = '\x01';
    }
    bVar13 = System_String__IsNullOrEmpty((System_String_o *)pSVar25,(MethodInfo *)0x0);
    if ((char)bVar13 == '\0') {
      bVar13 = System_String__IsNullOrEmpty((System_String_o *)value_00,(MethodInfo *)0x0);
      if ((char)bVar13 == '\0') {
        pSVar15 = System_String__Concat_3af7150
                            ((System_String_o *)pSVar25," ",(System_String_o *)value_00,
                             (MethodInfo *)0x0);
        return pSVar15;
      }
    }
    else {
      pSVar25 = value_00;
      if (value_00 == (System_String_c *)0x0) {
        pSVar25 = (System_String_c *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
      }
    }
    return (System_String_o *)pSVar25;
  }
  auVar35 = il2cpp_runtime_helper_022b2c90();
  lVar29 = auVar35._8_8_;
  pSStack_50 = auVar35._0_8_;
  pSVar15 = pSStack_50;
  if ((lVar29 != 0) && (pSVar15 = *(System_String_o **)(lVar29 + 0x18), 0 < (int)pSVar15)) {
    pSVar15 = (System_String_o *)((ulong)pSVar15 & 0xffffffff);
    pSVar26 = (System_String_o *)0x0;
    uStack_48 = 0;
    SVar17 = (System_String_Fields)method;
    SVar18 = (System_String_Fields)node_00;
    do {
      if (pSVar15 <= pSVar26) {
        pcStack_58 = Gisketch_Aottg2UI_Search_GisketchSearchIndex__AppendText;
        pSVar15 = (System_String_o *)il2cpp_runtime_helper_022b2ca0();
        if (SVar17 == (System_String_Fields)0x0) {
          return pSVar15;
        }
        value_01 = *(System_String_Fields *)((long)SVar17 + 0x20);
        SVar27._stringLength = 0;
        SVar27._firstChar = 0;
        SVar27._6_2_ = 0;
        pSStack_70 = (System_String_o *)0x3b48e22;
        __this_08 = value_01;
        lStack_68 = lVar29;
        bVar13 = System_String__IsNullOrEmpty((System_String_o *)value_01,(MethodInfo *)0x0);
        if ((char)bVar13 == '\0') {
          if (SVar18 != (System_String_Fields)0x0) {
            SVar27._stringLength = 0x20;
            SVar27._firstChar = 0;
            SVar27._6_2_ = 0;
            pSStack_70 = (System_String_o *)0x3b48e3e;
            __this_08 = SVar18;
            pSVar16 = System_Text_StringBuilder__Append_3b048f0
                                ((System_Text_StringBuilder_o *)SVar18,0x20,(MethodInfo *)0x0);
            if (pSVar16 != (System_Text_StringBuilder_o *)0x0) {
              pSStack_70 = (System_String_o *)0x3b48e54;
              System_Text_StringBuilder__Append_3b03f90(pSVar16,(System_String_o *)value_01,(MethodInfo *)0x0)
              ;
              goto label_03b48e54;
            }
          }
        }
        else {
label_03b48e54:
          value_01 = (System_String_Fields)((System_String_o *)((long)SVar17 + 0x30))->klass;
          SVar27._stringLength = 0;
          SVar27._firstChar = 0;
          SVar27._6_2_ = 0;
          pSStack_70 = (System_String_o *)0x3b48e62;
          __this_08 = value_01;
          bVar13 = System_String__IsNullOrEmpty((System_String_o *)value_01,(MethodInfo *)0x0);
          if ((char)bVar13 == '\0') {
            if (SVar18 != (System_String_Fields)0x0) {
              SVar27._stringLength = 0x20;
              SVar27._firstChar = 0;
              SVar27._6_2_ = 0;
              pSStack_70 = (System_String_o *)0x3b48e7e;
              __this_08 = SVar18;
              pSVar16 = System_Text_StringBuilder__Append_3b048f0
                                  ((System_Text_StringBuilder_o *)SVar18,0x20,(MethodInfo *)0x0);
              if (pSVar16 != (System_Text_StringBuilder_o *)0x0) {
                pSStack_70 = (System_String_o *)0x3b48e94;
                System_Text_StringBuilder__Append_3b03f90
                          (pSVar16,(System_String_o *)value_01,(MethodInfo *)0x0);
                goto label_03b48e94;
              }
            }
          }
          else {
label_03b48e94:
            value_01 = *(System_String_Fields *)((long)SVar17 + 0xb8);
            SVar27._stringLength = 0;
            SVar27._firstChar = 0;
            SVar27._6_2_ = 0;
            pSStack_70 = (System_String_o *)0x3b48ea5;
            __this_08 = value_01;
            bVar13 = System_String__IsNullOrEmpty((System_String_o *)value_01,(MethodInfo *)0x0);
            if ((char)bVar13 == '\0') {
              if (SVar18 != (System_String_Fields)0x0) {
                SVar27._stringLength = 0x20;
                SVar27._firstChar = 0;
                SVar27._6_2_ = 0;
                pSStack_70 = (System_String_o *)0x3b48ebd;
                __this_08 = SVar18;
                pSVar16 = System_Text_StringBuilder__Append_3b048f0
                                    ((System_Text_StringBuilder_o *)SVar18,0x20,(MethodInfo *)0x0);
                if (pSVar16 != (System_Text_StringBuilder_o *)0x0) {
                  pSStack_70 = (System_String_o *)0x3b48ecf;
                  System_Text_StringBuilder__Append_3b03f90
                            (pSVar16,(System_String_o *)value_01,(MethodInfo *)0x0);
                  goto label_03b48ecf;
                }
              }
            }
            else {
label_03b48ecf:
              if (*(System_String_Fields *)((long)SVar17 + 0xd0) == (System_String_Fields)0x0) {
                return (System_String_o *)0x0;
              }
              SVar17 = *(System_String_Fields *)((long)*(System_String_Fields *)((long)SVar17 + 0xd0) + 0x18);
              SVar27._stringLength = 0;
              SVar27._firstChar = 0;
              SVar27._6_2_ = 0;
              pSStack_70 = (System_String_o *)0x3b48ee9;
              __this_08 = SVar17;
              bVar13 = System_String__IsNullOrEmpty((System_String_o *)SVar17,(MethodInfo *)0x0);
              if ((char)bVar13 != '\0') {
                return (System_String_o *)CONCAT44(extraout_var,bVar13);
              }
              if (SVar18 != (System_String_Fields)0x0) {
                SVar27._stringLength = 0x20;
                SVar27._firstChar = 0;
                SVar27._6_2_ = 0;
                pSStack_70 = (System_String_o *)0x3b48f07;
                __this_08 = SVar18;
                pSVar16 = System_Text_StringBuilder__Append_3b048f0
                                    ((System_Text_StringBuilder_o *)SVar18,0x20,(MethodInfo *)0x0);
                if (pSVar16 != (System_Text_StringBuilder_o *)0x0) {
                  pSVar16 = System_Text_StringBuilder__Append_3b03f90
                                      (pSVar16,(System_String_o *)SVar17,(MethodInfo *)0x0);
                  return (System_String_o *)pSVar16;
                }
              }
            }
          }
        }
        pSStack_70 = (System_String_o *)0x3b48f23;
        pSStack_a0 = (System_String_o *)il2cpp_runtime_helper_022b2c90();
        if (SVar27 == (System_String_Fields)0x0) {
          return pSStack_a0;
        }
        uVar24 = *(uint *)((long)SVar27 + 0x18);
        pSVar15 = (System_String_o *)(ulong)uVar24;
        if ((int)uVar24 < 1) {
          return pSVar15;
        }
        SVar28 = SVar27;
        pSVar30 = (System_String_Fields *)__this_08;
        SStack_98 = SVar17;
        SStack_90 = (System_String_Fields)method;
        SStack_88 = (System_String_Fields)node_00;
        SStack_80 = SVar18;
        SStack_78 = value_01;
        pSStack_70 = pSVar26;
        if (__this_08 != (System_String_Fields)0x0) {
          pSVar26 = (System_String_o *)0x0;
          pSVar34 = &"section";
          SVar18 = SVar27;
          if (uVar24 == 0) goto label_03b4908c;
          goto label_03b48fb9;
        }
        SVar17._stringLength = 0;
        SVar17._firstChar = 0;
        SVar17._6_2_ = 0;
        pSVar33 = &"section";
        goto label_03b49020;
      }
      pcStack_58 = (code *)0x3b48ddd;
      SVar17 = (System_String_Fields)method;
      SVar18 = (System_String_Fields)node_00;
      Gisketch_Aottg2UI_Search_GisketchSearchIndex__AddNodeEntries
                ((System_Collections_Generic_List_GisketchSearchEntry__o *)node_00,
                 (Gisketch_Aottg2UI_Data_GisketchScreenDefinition_o *)method,
                 *(Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o **)(lVar29 + 0x20 + (long)pSVar26 * 8),
                 in_RCX,in_R8,in_R9);
      pSVar26 = (System_String_o *)((long)&pSVar26->klass + 1);
      pSVar15 = (System_String_o *)(ulong)*(uint *)(lVar29 + 0x18);
    } while ((long)pSVar26 < (long)(int)*(uint *)(lVar29 + 0x18));
  }
  return pSVar15;
label_03b49020:
  uVar24 = SVar17._stringLength;
  __this_08 = (System_String_Fields)pSVar33;
  pSVar34 = (System_String_Fields *)value_01;
  if ((uint)pSVar15 <= uVar24) goto label_03b4908c;
  pSVar26 = (&((Il2CppType *)((long)SVar27 + 0x20))->data)[(int)uVar24];
  if (g_data_057a9cb6 == '\0') {
    pSVar30 = &"section";
    SStack_a8._stringLength = 0x3b4903d;
    SStack_a8._firstChar = 0;
    SStack_a8._6_2_ = 0;
    il2cpp_runtime_helper_023445d0();
    g_data_057a9cb6 = '\x01';
  }
  if ((pSVar26 == (System_String_o *)0x0) || (pSVar26[8].fields == (System_String_Fields)0x0))
  goto label_03b49087;
  pSVar30 = *(System_String_Fields **)((long)pSVar26[8].fields + 0x28);
  SStack_a8._stringLength = 0x3b49068;
  SStack_a8._firstChar = 0;
  SStack_a8._6_2_ = 0;
  SVar28 = "section";
  bVar13 = System_String__Equals_3af50f0
                     ((System_String_o *)pSVar30,(System_String_o *)"section",5,(MethodInfo *)0x0);
  if ((char)bVar13 == '\0') goto label_03b49087;
  SVar17._stringLength = uVar24 + 1;
  SVar17._4_4_ = 0;
  pSVar15 = (System_String_o *)(ulong)*(uint *)((long)SVar27 + 0x18);
  if ((int)*(uint *)((long)SVar27 + 0x18) <= (int)SVar17._stringLength) {
    return pSVar15;
  }
  goto label_03b49020;
label_03b49087:
  SStack_a8._stringLength = 0x3b4908c;
  SStack_a8._firstChar = 0;
  SStack_a8._6_2_ = 0;
  il2cpp_runtime_helper_022b2c90();
  __this_08 = (System_String_Fields)pSVar33;
  pSVar34 = (System_String_Fields *)value_01;
  goto label_03b4908c;
  while (lVar31 = lVar31 + 0x10, (ulong)*(ushort *)(lVar29 + 0x12e) << 4 != lVar31) {
label_03b49770:
    if (*(long *)(*(long *)(lVar29 + 0xb0) + lVar31) == TypeInfo_IDisposable) {
      puVar21 = (undefined8 *)(lVar29 + (long)*(int *)(*(long *)(lVar29 + 0xb0) + 8 + lVar31) * 0x10 + 0x138);
      goto label_03b4979d;
    }
  }
label_03b4977f:
  puVar21 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar20,TypeInfo_IDisposable,0);
label_03b4979d:
  (*(code *)*puVar21)(plVar20);
label_03b497a6:
  if (in_stack_fffffffffffffe98 != 0) goto label_03b49dd9;
  if (__this_07 == (Il2CppObject *)0x0) {
    if (g_data_057a9cc0 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Empty_d__6);
      g_data_057a9cc0 = '\x01';
    }
    __this_07 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_Empty_d__6);
    System_Object___ctor(__this_07,(MethodInfo *)0x0);
    *(undefined4 *)&__this_07[1].klass = 0xfffffffe;
    iVar14 = System_Environment__get_CurrentManagedThreadId((MethodInfo *)0x0);
    *(int32_t *)&__this_07[2].klass = iVar14;
    item = (long *)0x0;
    if (__this_07 == (Il2CppObject *)0x0) goto label_03b49dcf;
  }
  pIVar10 = __this_07->klass;
  uVar3._0_1_ = (pIVar10->_2).rank;
  uVar3._1_1_ = (pIVar10->_2).minimumAlignment;
  if ((ulong)uVar3 != 0) {
    pIVar8 = (pIVar10->_1).interfaceOffsets;
    lVar29 = 0;
    do {
      if (*(long *)((long)&pIVar8->interfaceType + lVar29) == TypeInfo_IEnumerable_GisketchSearchEntry) {
        pVVar19 = pIVar10->vtable + *(int *)((long)&pIVar8->offset + lVar29);
        goto label_03b49881;
      }
      lVar29 = lVar29 + 0x10;
    } while ((ulong)uVar3 << 4 != lVar29);
  }
  pVVar19 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(__this_07,TypeInfo_IEnumerable_GisketchSearchEntry,0);
label_03b49881:
  item = (long *)(*pVVar19->methodPtr)(__this_07,pVVar19->method);
  if ((Il2CppObject *)item == (Il2CppObject *)0x0) goto label_03b49dde;
  do {
    do {
      pIVar10 = ((Il2CppObject *)item)->klass;
      uVar4._0_1_ = (pIVar10->_2).rank;
      uVar4._1_1_ = (pIVar10->_2).minimumAlignment;
      if ((ulong)uVar4 != 0) {
        pIVar8 = (pIVar10->_1).interfaceOffsets;
        lVar29 = 0;
        do {
          if (*(long *)((long)&pIVar8->interfaceType + lVar29) == TypeInfo_IEnumerator) {
            pVVar19 = pIVar10->vtable + *(int *)((long)&pIVar8->offset + lVar29);
            goto label_03b49903;
          }
          lVar29 = lVar29 + 0x10;
        } while ((ulong)uVar4 << 4 != lVar29);
      }
      pVVar19 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(item,TypeInfo_IEnumerator,0);
label_03b49903:
      cVar12 = (*pVVar19->methodPtr)(item,pVVar19->method);
      if (cVar12 == '\0') {
        iVar32 = 10;
        lVar29 = 0;
        goto label_03b49ac8;
      }
      pIVar10 = ((Il2CppObject *)item)->klass;
      uVar5._0_1_ = (pIVar10->_2).rank;
      uVar5._1_1_ = (pIVar10->_2).minimumAlignment;
      if ((ulong)uVar5 != 0) {
        pIVar8 = (pIVar10->_1).interfaceOffsets;
        lVar29 = 0;
        do {
          if (*(long *)((long)&pIVar8->interfaceType + lVar29) == TypeInfo_IEnumerator_GisketchSearchEntry) {
            pVVar19 = pIVar10->vtable + *(int *)((long)&pIVar8->offset + lVar29);
            goto label_03b49973;
          }
          lVar29 = lVar29 + 0x10;
        } while ((ulong)uVar5 << 4 != lVar29);
      }
      pVVar19 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(item,TypeInfo_IEnumerator_GisketchSearchEntry,0);
label_03b49973:
      auVar35 = (*pVVar19->methodPtr)(item,pVVar19->method);
      pGVar23 = auVar35._0_8_;
      bVar13 = Gisketch_Aottg2UI_Search_GisketchSearchResults__IsActiveControl
                         (pGVar23,activeScreenId,auVar35._8_8_);
      if ((char)bVar13 == '\0') break;
      if (pGVar23 == (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *)0x0) goto label_03b49da7;
      bVar13 = System_String__IsNullOrEmpty((pGVar23->fields)._TargetId_k__BackingField,(MethodInfo *)0x0);
      if ((char)bVar13 != '\0') break;
      if (__this_06 == (System_Collections_Generic_HashSet_object__o *)0x0) goto label_03b49db1;
      bVar13 = System_Collections_Generic_HashSet_object___Contains
                         (__this_06,(Il2CppObject *)(pGVar23->fields)._TargetId_k__BackingField,MethodInfo_Boolean_Contains);
    } while ((char)bVar13 == '\0');
    lVar29 = MethodInfo_Void_Add;
    if (__this_03 == (System_Collections_Generic_List_object__o *)0x0) {
      il2cpp_runtime_helper_022b2c90();
label_03b49d9d:
      il2cpp_runtime_helper_022b2c90();
      goto label_03b49da2;
    }
    piVar1 = &(__this_03->fields)._version;
    *piVar1 = *piVar1 + 1;
    pSVar9 = (__this_03->fields)._items;
    if (pSVar9 == (System_Object_array *)0x0) goto label_03b49d9d;
    uVar24 = (__this_03->fields)._size;
    if (uVar24 < (uint)pSVar9->max_length) {
      (__this_03->fields)._size = uVar24 + 1;
      pSVar9->m_Items[(int)uVar24] = (Il2CppObject *)pGVar23;
      il2cpp_runtime_helper_022b4080();
    }
    else {
      System_Collections_Generic_List_object___AddWithResize
                (__this_03,(Il2CppObject *)pGVar23,
                 *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar29 + 0x20) + 0xc0) + 0x70));
    }
    if ((((pGVar23 != (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *)0x0) &&
         (bVar13 = System_String__IsNullOrEmpty((pGVar23->fields)._ScreenId_k__BackingField,(MethodInfo *)0x0)
         , (char)bVar13 == '\0')) &&
        (bVar13 = System_String__IsNullOrEmpty(activeScreenId,(MethodInfo *)0x0), (char)bVar13 == '\0')) &&
       ((bVar13 = System_String__Equals_3af50f0
                            ((pGVar23->fields)._ScreenId_k__BackingField,activeScreenId,5,(MethodInfo *)0x0),
        (char)bVar13 != '\0' &&
        (bVar13 = System_String__IsNullOrEmpty((pGVar23->fields)._TargetId_k__BackingField,(MethodInfo *)0x0),
        (char)bVar13 == '\0')))) {
      if (__this_04 == (System_Collections_Generic_HashSet_object__o *)0x0) goto label_03b49dca;
      System_Collections_Generic_HashSet_object___Add
                (__this_04,(Il2CppObject *)(pGVar23->fields)._TargetId_k__BackingField,MethodInfo_Boolean_Add);
    }
  } while( true );
joined_r0x03b4a097:
  lVar11 = lVar31;
  if ((Il2CppObject *)item != (Il2CppObject *)0x0) {
    pIVar10 = ((Il2CppObject *)item)->klass;
    uVar7._0_1_ = (pIVar10->_2).rank;
    uVar7._1_1_ = (pIVar10->_2).minimumAlignment;
    if ((ulong)uVar7 != 0) {
      pIVar8 = (pIVar10->_1).interfaceOffsets;
      lVar31 = 0;
      do {
        if (*(long *)((long)&pIVar8->interfaceType + lVar31) == TypeInfo_IDisposable) {
          pVVar19 = pIVar10->vtable + *(int *)((long)&pIVar8->offset + lVar31);
          goto label_03b4a0ed;
        }
        lVar31 = lVar31 + 0x10;
      } while ((ulong)uVar7 << 4 != lVar31);
    }
    pVVar19 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(item,TypeInfo_IDisposable,0);
label_03b4a0ed:
    (*pVVar19->methodPtr)(item,pVVar19->method);
  }
  if (lVar29 == 0) {
    _Unwind_Resume(lVar11);
  }
  lVar31 = il2cpp_runtime_helper_022fefe0();
  lVar29 = lVar11;
  goto joined_r0x03b4a097;
label_03b49d6d:
  il2cpp_runtime_helper_022b2c90();
label_03b49d72:
  __this_02.fields._8_8_ = __this_04;
  __this_02.fields._list = (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffe98;
  __this_02.fields._current = _Var37.genericMethod;
  System_Collections_Generic_List_Enumerator_object___Dispose
            (__this_02,(MethodInfo_321A1C0 *)&stack0xfffffffffffffea8);
  return (System_String_o *)__this_03;
label_03b48fb9:
  do {
    node_00 = *(System_String_o ***)(&((Il2CppType *)((long)SVar27 + 0x20))->data + (long)pSVar26);
    SVar28 = SVar18;
    if (g_data_057a9cb6 == '\0') {
      pSVar30 = &"section";
      SStack_a8._stringLength = 0x3b48fcf;
      SStack_a8._firstChar = 0;
      SStack_a8._6_2_ = 0;
      il2cpp_runtime_helper_023445d0();
      g_data_057a9cb6 = '\x01';
      SVar28 = SVar18;
    }
    pSVar33 = (System_String_Fields *)__this_08;
    value_01 = (System_String_Fields)pSVar34;
    if ((System_String_Fields)node_00 == (System_String_Fields)0x0) goto label_03b49087;
    if (*(void **)((long)node_00 + 0xd0) == (void *)0x0) {
label_03b48f70:
      SVar28._stringLength = 0x20;
      SVar28._firstChar = 0;
      SVar28._6_2_ = 0;
      SStack_a8._stringLength = 0x3b48f7f;
      SStack_a8._firstChar = 0;
      SStack_a8._6_2_ = 0;
      SVar17 = (System_String_Fields)
               System_Text_StringBuilder__Append_3b048f0
                         ((System_Text_StringBuilder_o *)__this_08,0x20,(MethodInfo *)0x0);
      SStack_a8._stringLength = 0x3b48f8a;
      SStack_a8._firstChar = 0;
      SStack_a8._6_2_ = 0;
      pSVar30 = (System_String_Fields *)node_00;
      SVar18 = (System_String_Fields)
               Gisketch_Aottg2UI_Search_GisketchSearchIndex__HarvestKeywords
                         ((Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)node_00,(MethodInfo *)SVar28);
      if (SVar17 == (System_String_Fields)0x0) goto label_03b49087;
      SStack_a8._stringLength = 0x3b48fa0;
      SStack_a8._firstChar = 0;
      SStack_a8._6_2_ = 0;
      pSVar30 = (System_String_Fields *)SVar17;
      System_Text_StringBuilder__Append_3b03f90
                ((System_Text_StringBuilder_o *)SVar17,(System_String_o *)SVar18,(MethodInfo *)0x0);
    }
    else {
      pSVar30 = *(System_String_Fields **)((long)*(void **)((long)node_00 + 0xd0) + 0x28);
      SStack_a8._stringLength = 0x3b48ffe;
      SStack_a8._firstChar = 0;
      SStack_a8._6_2_ = 0;
      SVar18 = "section";
      bVar13 = System_String__Equals_3af50f0
                         ((System_String_o *)pSVar30,(System_String_o *)"section",5,(MethodInfo *)0x0);
      if ((char)bVar13 == '\0') goto label_03b48f70;
    }
    uVar24 = *(uint *)((long)SVar27 + 0x18);
    pSVar26 = (System_String_o *)((long)&pSVar26->klass + 1);
    if ((int)uVar24 <= (int)(uint)pSVar26) {
      return (System_String_o *)(ulong)uVar24;
    }
    SVar28 = SVar18;
  } while ((uint)pSVar26 < uVar24);
label_03b4908c:
  SStack_a8._stringLength = 0x3b49091;
  SStack_a8._firstChar = 0;
  SStack_a8._6_2_ = 0;
  uStack_b8 = il2cpp_runtime_helper_022b2ca0();
  lVar29 = 0;
  SStack_c0._stringLength = 0x3b490b4;
  SStack_c0._firstChar = 0;
  SStack_c0._6_2_ = 0;
  SVar18 = SVar28;
  SStack_b0 = SVar17;
  SStack_a8 = __this_08;
  bVar13 = System_String__IsNullOrEmpty((System_String_o *)SVar28,(MethodInfo *)0x0);
  if ((char)bVar13 != '\0') {
    return (System_String_o *)CONCAT44(extraout_var_00,bVar13);
  }
  if ((System_String_Fields)pSVar30 != (System_String_Fields)0x0) {
    lVar29 = 0x20;
    SStack_c0._stringLength = 0x3b490d4;
    SStack_c0._firstChar = 0;
    SStack_c0._6_2_ = 0;
    SVar18 = (System_String_Fields)pSVar30;
    pSVar16 = System_Text_StringBuilder__Append_3b048f0
                        ((System_Text_StringBuilder_o *)pSVar30,0x20,(MethodInfo *)0x0);
    if (pSVar16 != (System_Text_StringBuilder_o *)0x0) {
      pSVar16 = System_Text_StringBuilder__Append_3b03f90(pSVar16,(System_String_o *)SVar28,(MethodInfo *)0x0)
      ;
      return (System_String_o *)pSVar16;
    }
  }
  SStack_c0._stringLength = 0x3b490f2;
  SStack_c0._firstChar = 0;
  SStack_c0._6_2_ = 0;
  uStack_d0 = il2cpp_runtime_helper_022b2c90();
  SStack_c8 = (System_String_Fields)pSVar30;
  SStack_c0 = SVar28;
  if (g_data_057a9cba == '\0') {
    pSStack_d8 = (System_String_o *)0x3b4911f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Contains);
    pSStack_d8 = (System_String_o *)0x3b4912b;
    il2cpp_runtime_helper_023445d0(&"screen");
    pSStack_d8 = (System_String_o *)0x3b49137;
    il2cpp_runtime_helper_023445d0(&"section");
    pSStack_d8 = (System_String_o *)0x3b49143;
    il2cpp_runtime_helper_023445d0(&"main-menu");
    pSStack_d8 = (System_String_o *)0x3b4914f;
    il2cpp_runtime_helper_023445d0(&"main-menu-option-");
    g_data_057a9cba = '\x01';
  }
  if (lVar29 != 0) {
    pSStack_d8 = (System_String_o *)0x3b49179;
    bVar13 = System_String__Equals_3af50f0
                       (*(System_String_o **)(lVar29 + 0x20),"main-menu",5,(MethodInfo *)0x0);
    if ((char)bVar13 != '\0') {
      pSStack_d8 = (System_String_o *)0x3b4919b;
      bVar13 = System_String__Equals_3af50f0
                         (*(System_String_o **)(lVar29 + 0x70),"screen",5,(MethodInfo *)0x0);
      if ((char)bVar13 == '\0') {
        pSStack_d8 = (System_String_o *)0x3b491b9;
        bVar13 = System_String__Equals_3af50f0
                           (*(System_String_o **)(lVar29 + 0x70),(System_String_o *)"section",5,
                            (MethodInfo *)0x0);
        if ((char)bVar13 == '\0') {
          pSVar15 = (System_String_o *)0x0;
          pSStack_d8 = (System_String_o *)0x3b491c8;
          bVar13 = System_String__IsNullOrEmpty(*(System_String_o **)(lVar29 + 0x48),(MethodInfo *)0x0);
          if ((char)bVar13 == '\0') {
            if (*(System_String_o **)(lVar29 + 0x48) != (System_String_o *)0x0) {
              pSStack_d8 = (System_String_o *)0x3b491eb;
              pSVar15 = "main-menu-option-";
              bVar13 = System_String__StartsWith_3af5570
                                 (*(System_String_o **)(lVar29 + 0x48),"main-menu-option-",5,(MethodInfo *)0x0);
              if ((char)bVar13 == '\0') {
                return (System_String_o *)0x0;
              }
              if (*(System_Collections_Generic_HashSet_object__o **)((long)SVar18 + 0x10) !=
                  (System_Collections_Generic_HashSet_object__o *)0x0) {
                bVar13 = System_Collections_Generic_HashSet_object___Contains
                                   (*(System_Collections_Generic_HashSet_object__o **)((long)SVar18 + 0x10),
                                    *(Il2CppObject **)(lVar29 + 0x58),MethodInfo_Boolean_Contains);
                return (System_String_o *)CONCAT44(extraout_var_01,bVar13);
              }
            }
            __this_07 = (Il2CppObject *)0x0;
            pSStack_d8 = (System_String_o *)0x3b49221;
            il2cpp_runtime_helper_022b2c90();
            lStack_100 = lVar29;
            SStack_f8 = SVar27;
            SStack_f0 = (System_String_Fields)node_00;
            SStack_e8 = SVar18;
            SStack_e0 = (System_String_Fields)pSVar34;
            pSStack_d8 = pSVar26;
            if (g_data_057a9cbb == '\0') {
              il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
              il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
              il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchSearchEntry_get_Current);
              il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Add);
              il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Contains);
              il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_System_String);
              il2cpp_runtime_helper_023445d0(&TypeInfo_HashSet_string);
              il2cpp_runtime_helper_023445d0(&TypeInfo_IDisposable);
              il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerable_GisketchSearchEntry);
              il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerator_GisketchSearchEntry);
              il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerator);
              il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
              il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_Gisketch_Aottg2UI_Search_GisketchSea);
              il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_Gisketch_Aottg2UI_Search_GisketchSearchEntry);
              il2cpp_runtime_helper_023445d0(&TypeInfo_List_GisketchSearchEntry);
              il2cpp_runtime_helper_023445d0(&TypeInfo_StringComparer);
              g_data_057a9cbb = '\x01';
            }
            __this_03 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_GisketchSearchEntry);
            System_Collections_Generic_List_object____ctor(__this_03,MethodInfo_List_1_Gisketch_Aottg2UI_Search_GisketchSearchEntry);
            if (*(int *)(TypeInfo_StringComparer + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            if (g_data_057a9c88 == '\0') {
              il2cpp_runtime_helper_023445d0(&TypeInfo_StringComparer);
              g_data_057a9c88 = '\x01';
              iVar32 = *(int *)(TypeInfo_StringComparer + 0xe4);
            }
            else {
              iVar32 = *(int *)(TypeInfo_StringComparer + 0xe4);
            }
            if (iVar32 == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            pMVar22 = *(MethodInfo **)(*(long *)(TypeInfo_StringComparer + 0xb8) + 0x18);
            __this_04 = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_HashSet_string);
            System_Collections_Generic_HashSet_object____ctor_33e0600
                      (__this_04,(System_Collections_Generic_IEqualityComparer_T__o *)pMVar22,MethodInfo_HashSet_1_System_String);
            screenTitles = Gisketch_Aottg2UI_Search_GisketchSearchResults__ScreenTitles
                                     ((System_Collections_Generic_IEnumerable_GisketchSearchEntry__o *)
                                      __this_07,pMVar22);
            __this_05 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_GisketchSearchEntry);
            System_Collections_Generic_List_object____ctor(__this_05,MethodInfo_List_1_Gisketch_Aottg2UI_Search_GisketchSearchEntry);
            if (g_data_057a9c88 == '\0') {
              il2cpp_runtime_helper_023445d0(&TypeInfo_StringComparer);
              g_data_057a9c88 = '\x01';
              iVar32 = *(int *)(TypeInfo_StringComparer + 0xe4);
            }
            else {
              iVar32 = *(int *)(TypeInfo_StringComparer + 0xe4);
            }
            if (iVar32 == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            item = *(long **)(*(long *)(TypeInfo_StringComparer + 0xb8) + 0x18);
            __this_06 = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_HashSet_string);
            System_Collections_Generic_HashSet_object____ctor_33e0600
                      (__this_06,(System_Collections_Generic_IEqualityComparer_T__o *)item,MethodInfo_HashSet_1_System_String);
            if (pSVar15 == (System_String_o *)0x0) {
              if (g_data_057a9cc0 == '\0') {
                il2cpp_runtime_helper_023445d0(&TypeInfo_Empty_d__6);
                g_data_057a9cc0 = '\x01';
              }
              pSVar15 = (System_String_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Empty_d__6);
              System_Object___ctor((Il2CppObject *)pSVar15,(MethodInfo *)0x0);
              (pSVar15->fields)._stringLength = -2;
              iVar14 = System_Environment__get_CurrentManagedThreadId((MethodInfo *)0x0);
              *(int32_t *)&pSVar15[1].monitor = iVar14;
              if (pSVar15 == (System_String_o *)0x0) goto label_03b49dcf;
            }
            pSVar25 = pSVar15->klass;
            uVar2._0_1_ = (pSVar25->_2).rank;
            uVar2._1_1_ = (pSVar25->_2).minimumAlignment;
            if ((ulong)uVar2 != 0) {
              pIVar8 = (pSVar25->_1).interfaceOffsets;
              lVar29 = 0;
              do {
                if (*(long *)((long)&pIVar8->interfaceType + lVar29) == TypeInfo_IEnumerable_GisketchSearchEntry) {
                  pVVar19 = &(pSVar25->vtable)._0_Equals + *(int *)((long)&pIVar8->offset + lVar29);
                  goto label_03b4956f;
                }
                lVar29 = lVar29 + 0x10;
              } while ((ulong)uVar2 << 4 != lVar29);
            }
            pVVar19 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(pSVar15,TypeInfo_IEnumerable_GisketchSearchEntry,0);
label_03b4956f:
            plVar20 = (long *)(*pVVar19->methodPtr)(pSVar15,pVVar19->method);
            if (plVar20 == (long *)0x0) goto label_03b49dd4;
            item = &TypeInfo_IEnumerator;
            in_stack_fffffffffffffe98 = 0;
            do {
              lVar29 = *plVar20;
              if ((ulong)*(ushort *)(lVar29 + 0x12e) != 0) {
                lVar31 = 0;
                do {
                  if (*(long *)(*(long *)(lVar29 + 0xb0) + lVar31) == TypeInfo_IEnumerator) {
                    puVar21 = (undefined8 *)
                              ((long)*(int *)(*(long *)(lVar29 + 0xb0) + 8 + lVar31) * 0x10 + lVar29 + 0x138);
                    goto label_03b495f3;
                  }
                  lVar31 = lVar31 + 0x10;
                } while ((ulong)*(ushort *)(lVar29 + 0x12e) << 4 != lVar31);
              }
              puVar21 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar20,TypeInfo_IEnumerator,0);
label_03b495f3:
              cVar12 = (*(code *)*puVar21)();
              if (cVar12 == '\0') {
                item = (long *)&g_data_00000005;
                if (plVar20 == (long *)0x0) goto label_03b497a6;
                lVar29 = *plVar20;
                if ((ulong)*(ushort *)(lVar29 + 0x12e) == 0) goto label_03b4977f;
                lVar31 = 0;
                goto label_03b49770;
              }
              lVar29 = *plVar20;
              if ((ulong)*(ushort *)(lVar29 + 0x12e) != 0) {
                lVar31 = 0;
                do {
                  if (*(long *)(*(long *)(lVar29 + 0xb0) + lVar31) == TypeInfo_IEnumerator_GisketchSearchEntry) {
                    pMVar22 = (MethodInfo *)
                              ((long)*(int *)(*(long *)(lVar29 + 0xb0) + 8 + lVar31) * 0x10 + lVar29 + 0x138);
                    goto label_03b49663;
                  }
                  lVar31 = lVar31 + 0x10;
                } while ((ulong)*(ushort *)(lVar29 + 0x12e) << 4 != lVar31);
              }
              pMVar22 = (MethodInfo *)il2cpp_runtime_helper_02300d20(plVar20,TypeInfo_IEnumerator_GisketchSearchEntry,0);
label_03b49663:
              method_00 = (MethodInfo *)pMVar22->virtualMethodPointer;
              pGVar23 = (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *)(*pMVar22->methodPointer)();
              if (((pGVar23 != (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *)0x0) &&
                  (bVar13 = Gisketch_Aottg2UI_Search_GisketchSearchResults__IsLiveUsable(pGVar23,method_00),
                  (char)bVar13 != '\0')) &&
                 (bVar13 = Gisketch_Aottg2UI_Search_GisketchSearchResults__IsDuplicateMainMenuScreenButton
                                     (pGVar23,activeScreenId,screenTitles,pMVar22), lVar29 = MethodInfo_Void_Add,
                 (char)bVar13 == '\0')) {
                if (__this_05 == (System_Collections_Generic_List_object__o *)0x0) goto label_03b49dbb;
                piVar1 = &(__this_05->fields)._version;
                *piVar1 = *piVar1 + 1;
                pSVar9 = (__this_05->fields)._items;
                if (pSVar9 == (System_Object_array *)0x0) goto label_03b49dc0;
                uVar24 = (__this_05->fields)._size;
                if (uVar24 < (uint)pSVar9->max_length) {
                  (__this_05->fields)._size = uVar24 + 1;
                  pSVar9->m_Items[(int)uVar24] = (Il2CppObject *)pGVar23;
                  il2cpp_runtime_helper_022b4080(pSVar9->m_Items + (int)uVar24);
                }
                else {
                  System_Collections_Generic_List_object___AddWithResize
                            (__this_05,(Il2CppObject *)pGVar23,
                             *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar29 + 0x20) + 0xc0) + 0x70));
                }
                bVar13 = System_String__IsNullOrEmpty
                                   ((pGVar23->fields)._TargetId_k__BackingField,(MethodInfo *)0x0);
                if ((char)bVar13 == '\0') {
                  if (__this_06 == (System_Collections_Generic_HashSet_object__o *)0x0) {
                    do {
                      il2cpp_runtime_helper_022b2c90();
label_03b49dca:
                      il2cpp_runtime_helper_022b2c90();
label_03b49dcf:
                      do {
                        il2cpp_runtime_helper_022b2c90();
label_03b49dd4:
                        il2cpp_runtime_helper_022b2c90();
label_03b49dd9:
                        il2cpp_runtime_helper_022fefe0();
label_03b49dde:
                        il2cpp_runtime_helper_022b2c90();
                        do {
                          auVar36 = il2cpp_runtime_helper_022fefe0();
                          iVar32 = 0;
                          if (auVar36._8_4_ != 1) {
                            lVar31 = auVar36._0_8_;
                            lVar29 = 0;
                            goto joined_r0x03b4a097;
                          }
                          plVar20 = (long *)__cxa_begin_catch();
                          lVar29 = *plVar20;
                          __cxa_end_catch();
label_03b49ac8:
                          if ((Il2CppObject *)item != (Il2CppObject *)0x0) {
                            pIVar10 = ((Il2CppObject *)item)->klass;
                            uVar6._0_1_ = (pIVar10->_2).rank;
                            uVar6._1_1_ = (pIVar10->_2).minimumAlignment;
                            if ((ulong)uVar6 != 0) {
                              pIVar8 = (pIVar10->_1).interfaceOffsets;
                              lVar31 = 0;
                              do {
                                if (*(long *)((long)&pIVar8->interfaceType + lVar31) == TypeInfo_IDisposable) {
                                  pVVar19 = pIVar10->vtable + *(int *)((long)&pIVar8->offset + lVar31);
                                  goto label_03b49b2d;
                                }
                                lVar31 = lVar31 + 0x10;
                              } while ((ulong)uVar6 << 4 != lVar31);
                            }
                            pVVar19 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(item,TypeInfo_IDisposable,0);
label_03b49b2d:
                            (*pVVar19->methodPtr)(item,pVVar19->method);
                          }
                        } while (lVar29 != 0);
                        if ((iVar32 != 10) && (iVar32 != 0)) {
                          return (System_String_o *)__this_03;
                        }
                      } while (__this_05 == (System_Collections_Generic_List_object__o *)0x0);
                      System_Collections_Generic_List_object___GetEnumerator
                                ((System_Collections_Generic_List_Enumerator_T__o *)a_Stack_118,__this_05,
                                 MethodInfo_List_1_T_Enumerator_Gisketch_Aottg2UI_Search_GisketchSea);
                      item = (long *)pIStack_108;
                      _Var37 = a_Stack_118[0];
                      if (__this_04 == (System_Collections_Generic_HashSet_object__o *)0x0) {
                        while( true ) {
                          __this_00.fields._8_8_ = __this_04;
                          __this_00.fields._list =
                               (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffe98;
                          __this_00.fields._current = _Var37.genericMethod;
                          bVar13 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                             (__this_00,(MethodInfo_321A1D0 *)&stack0xfffffffffffffea8);
                          if ((char)bVar13 == '\0') goto label_03b49d72;
                          if ((Il2CppObject *)item == (Il2CppObject *)0x0) goto label_03b49da2;
                          bVar13 = System_String__IsNullOrEmpty
                                             (((Il2CppObject *)((long)item + 0x40))->monitor,(MethodInfo *)0x0
                                             );
                          lVar29 = MethodInfo_Void_Add;
                          if ((char)bVar13 == '\0') goto label_03b49db6;
                          if (__this_03 == (System_Collections_Generic_List_object__o *)0x0)
                          goto label_03b49d6d;
                          piVar1 = &(__this_03->fields)._version;
                          *piVar1 = *piVar1 + 1;
                          pSVar9 = (__this_03->fields)._items;
                          if (pSVar9 == (System_Object_array *)0x0) break;
                          uVar24 = (__this_03->fields)._size;
                          if (uVar24 < (uint)pSVar9->max_length) {
                            (__this_03->fields)._size = uVar24 + 1;
                            pSVar9->m_Items[(int)uVar24] = (Il2CppObject *)item;
                            il2cpp_runtime_helper_022b4080(pSVar9->m_Items + (int)uVar24,item);
                          }
                          else {
                            System_Collections_Generic_List_object___AddWithResize
                                      (__this_03,(Il2CppObject *)item,
                                       *(MethodInfo_362C220 **)
                                        (*(long *)(*(long *)(lVar29 + 0x20) + 0xc0) + 0x70));
                          }
                        }
                      }
                      else {
                        if (__this_03 == (System_Collections_Generic_List_object__o *)0x0) {
                          while( true ) {
                            __this_01.fields._8_8_ = __this_04;
                            __this_01.fields._list =
                                 (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffe98;
                            __this_01.fields._current = _Var37.genericMethod;
                            bVar13 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                               (__this_01,(MethodInfo_321A1D0 *)&stack0xfffffffffffffea8);
                            if ((char)bVar13 == '\0') goto label_03b49d72;
                            if ((Il2CppObject *)item == (Il2CppObject *)0x0) break;
                            bVar13 = System_String__IsNullOrEmpty
                                               (((Il2CppObject *)((long)item + 0x40))->monitor,
                                                (MethodInfo *)0x0);
                            if (((char)bVar13 != '\0') ||
                               (bVar13 = System_Collections_Generic_HashSet_object___Contains
                                                   (__this_04,((Il2CppObject *)((long)item + 0x40))->monitor,
                                                    MethodInfo_Boolean_Contains), (char)bVar13 == '\0')) goto label_03b49d6d;
                          }
                        }
                        else {
                          while( true ) {
                            __this.fields._8_8_ = __this_04;
                            __this.fields._list =
                                 (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffe98;
                            __this.fields._current = _Var37.genericMethod;
                            bVar13 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                               (__this,(MethodInfo_321A1D0 *)&stack0xfffffffffffffea8);
                            if ((char)bVar13 == '\0') goto label_03b49d72;
                            if ((Il2CppObject *)item == (Il2CppObject *)0x0) break;
                            bVar13 = System_String__IsNullOrEmpty
                                               (((Il2CppObject *)((long)item + 0x40))->monitor,
                                                (MethodInfo *)0x0);
                            if (((char)bVar13 != '\0') ||
                               (bVar13 = System_Collections_Generic_HashSet_object___Contains
                                                   (__this_04,((Il2CppObject *)((long)item + 0x40))->monitor,
                                                    MethodInfo_Boolean_Contains), (char)bVar13 == '\0')) {
                              lVar29 = MethodInfo_Void_Add;
                              piVar1 = &(__this_03->fields)._version;
                              *piVar1 = *piVar1 + 1;
                              pSVar9 = (__this_03->fields)._items;
                              if (pSVar9 == (System_Object_array *)0x0) goto label_03b49dac;
                              uVar24 = (__this_03->fields)._size;
                              if (uVar24 < (uint)pSVar9->max_length) {
                                (__this_03->fields)._size = uVar24 + 1;
                                pSVar9->m_Items[(int)uVar24] = (Il2CppObject *)item;
                                il2cpp_runtime_helper_022b4080(pSVar9->m_Items + (int)uVar24,item);
                              }
                              else {
                                System_Collections_Generic_List_object___AddWithResize
                                          (__this_03,(Il2CppObject *)item,
                                           *(MethodInfo_362C220 **)
                                            (*(long *)(*(long *)(lVar29 + 0x20) + 0xc0) + 0x70));
                              }
                            }
                          }
                        }
label_03b49da2:
                        il2cpp_runtime_helper_022b2c90();
label_03b49da7:
                        il2cpp_runtime_helper_022b2c90();
                      }
label_03b49dac:
                      il2cpp_runtime_helper_022b2c90();
label_03b49db1:
                      il2cpp_runtime_helper_022b2c90();
label_03b49db6:
                      il2cpp_runtime_helper_022b2c90();
label_03b49dbb:
                      il2cpp_runtime_helper_022b2c90();
label_03b49dc0:
                      il2cpp_runtime_helper_022b2c90();
                    } while( true );
                  }
                  System_Collections_Generic_HashSet_object___Add
                            (__this_06,(Il2CppObject *)(pGVar23->fields)._TargetId_k__BackingField,
                             MethodInfo_Boolean_Add);
                }
              }
            } while( true );
          }
        }
      }
    }
  }
  return (System_String_o *)0x0;
}


// Gisketch.Aottg2UI.Search.GisketchSearchIndex$$ScreenTitle
// il2cpp: System_String_o* Gisketch_Aottg2UI_Search_GisketchSearchIndex__ScreenTitle (Gisketch_Aottg2UI_Data_GisketchScreenDefinition_o* screen, const MethodInfo* method);
// 0x3b47ea0

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
    value = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  }
  bVar1 = System_String__IsNullOrEmpty(value_00,(MethodInfo *)0x0);
  if (((char)bVar1 != '\0') && (value_00 = value, value == (System_String_o *)0x0)) {
    value_00 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  }
  return value_00;
}


// Gisketch.Aottg2UI.Search.GisketchSearchIndex$$SearchGroup
// il2cpp: System_String_o* Gisketch_Aottg2UI_Search_GisketchSearchIndex__SearchGroup (Gisketch_Aottg2UI_Data_GisketchScreenDefinition_o* screen, const MethodInfo* method);
// 0x3b47e40

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
    value = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  }
  return value;
}


// Gisketch.Aottg2UI.Search.GisketchSearchIndex$$Join
// il2cpp: System_String_o* Gisketch_Aottg2UI_Search_GisketchSearchIndex__Join (System_String_o* a, System_String_o* b, const MethodInfo* method);
// 0x3b488f0

System_String_o *
Gisketch_Aottg2UI_Search_GisketchSearchIndex__Join(System_String_o *a,System_String_o *b,MethodInfo *method)

{
  bool_conflict bVar1;
  System_String_o *pSVar2;
  
  if (g_data_057a9cb9 == '\0') {
    il2cpp_runtime_helper_023445d0(&" ");
    g_data_057a9cb9 = '\x01';
  }
  bVar1 = System_String__IsNullOrEmpty(a,(MethodInfo *)0x0);
  if ((char)bVar1 == '\0') {
    bVar1 = System_String__IsNullOrEmpty(b,(MethodInfo *)0x0);
    if ((char)bVar1 == '\0') {
      pSVar2 = System_String__Concat_3af7150(a," ",b,(MethodInfo *)0x0);
      return pSVar2;
    }
  }
  else {
    a = b;
    if (b == (System_String_o *)0x0) {
      a = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
    }
  }
  return a;
}


// Gisketch.Aottg2UI.Search.GisketchSearchIndex$$First
// il2cpp: System_String_o* Gisketch_Aottg2UI_Search_GisketchSearchIndex__First (System_String_o* a, System_String_o* b, const MethodInfo* method);
// 0x3b48810

System_String_o *
Gisketch_Aottg2UI_Search_GisketchSearchIndex__First(System_String_o *a,System_String_o *b,MethodInfo *method)

{
  bool_conflict bVar1;
  
  bVar1 = System_String__IsNullOrEmpty(a,(MethodInfo *)0x0);
  if (((char)bVar1 != '\0') && (a = b, b == (System_String_o *)0x0)) {
    a = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  }
  return a;
}


// Gisketch.Aottg2UI.Search.GisketchSearchIndex$$Append
// il2cpp: void Gisketch_Aottg2UI_Search_GisketchSearchIndex__Append (System_Text_StringBuilder_o* builder, System_String_o* value, const MethodInfo* method);
// 0x3b490a0

void Gisketch_Aottg2UI_Search_GisketchSearchIndex__Append
               (System_Text_StringBuilder_o *builder,System_String_o *value,MethodInfo *method)

{
  int32_t *piVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  ushort uVar6;
  ushort uVar7;
  uint uVar8;
  System_Char_array *__this;
  System_String_c *pSVar9;
  Il2CppRuntimeInterfaceOffsetPair *pIVar10;
  System_Object_array *pSVar11;
  Il2CppClass *pIVar12;
  System_Collections_Generic_List_Enumerator_object__o __this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  long lVar13;
  char cVar14;
  bool_conflict bVar15;
  int32_t iVar16;
  System_Text_StringBuilder_o *__this_04;
  System_Collections_Generic_List_object__o *__this_05;
  System_Collections_Generic_HashSet_object__o *__this_06;
  System_Collections_Generic_HashSet_string__o *screenTitles;
  System_Collections_Generic_List_object__o *__this_07;
  System_Collections_Generic_HashSet_object__o *__this_08;
  System_String_o *__this_09;
  VirtualInvokeData *pVVar17;
  long *plVar18;
  undefined8 *puVar19;
  MethodInfo *pMVar20;
  Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *pGVar21;
  Il2CppObject *__this_10;
  System_String_o *activeScreenId;
  long *item;
  long lVar22;
  MethodInfo *method_00;
  System_Text_StringBuilder_o *pSVar23;
  long lVar24;
  int iVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [12];
  long in_stack_ffffffffffffff38;
  _union_249689 _Var28;
  _union_249689 a_Stack_78 [2];
  Il2CppObject *pIStack_68;
  long lStack_60;
  
  lVar22 = 0;
  pSVar23 = (System_Text_StringBuilder_o *)value;
  bVar15 = System_String__IsNullOrEmpty(value,(MethodInfo *)0x0);
  if ((char)bVar15 != '\0') {
    return;
  }
  if (builder != (System_Text_StringBuilder_o *)0x0) {
    lVar22 = 0x20;
    __this_04 = System_Text_StringBuilder__Append_3b048f0(builder,0x20,(MethodInfo *)0x0);
    pSVar23 = builder;
    if (__this_04 != (System_Text_StringBuilder_o *)0x0) {
      System_Text_StringBuilder__Append_3b03f90(__this_04,value,(MethodInfo *)0x0);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057a9cba == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Contains);
    il2cpp_runtime_helper_023445d0(&"screen");
    il2cpp_runtime_helper_023445d0(&"section");
    il2cpp_runtime_helper_023445d0(&"main-menu");
    il2cpp_runtime_helper_023445d0(&"main-menu-option-");
    g_data_057a9cba = '\x01';
  }
  if ((((lVar22 != 0) &&
       (bVar15 = System_String__Equals_3af50f0
                           (*(System_String_o **)(lVar22 + 0x20),"main-menu",5,(MethodInfo *)0x0),
       (char)bVar15 != '\0')) &&
      (bVar15 = System_String__Equals_3af50f0
                          (*(System_String_o **)(lVar22 + 0x70),"screen",5,(MethodInfo *)0x0),
      (char)bVar15 == '\0')) &&
     (bVar15 = System_String__Equals_3af50f0
                         (*(System_String_o **)(lVar22 + 0x70),"section",5,(MethodInfo *)0x0),
     (char)bVar15 == '\0')) {
    __this_09 = (System_String_o *)0x0;
    bVar15 = System_String__IsNullOrEmpty(*(System_String_o **)(lVar22 + 0x48),(MethodInfo *)0x0);
    if ((char)bVar15 == '\0') {
      if (*(System_String_o **)(lVar22 + 0x48) != (System_String_o *)0x0) {
        __this_09 = "main-menu-option-";
        bVar15 = System_String__StartsWith_3af5570
                           (*(System_String_o **)(lVar22 + 0x48),"main-menu-option-",5,(MethodInfo *)0x0);
        if ((char)bVar15 == '\0') {
          return;
        }
        __this = (pSVar23->fields).m_ChunkChars;
        if (__this != (System_Char_array *)0x0) {
          System_Collections_Generic_HashSet_object___Contains
                    ((System_Collections_Generic_HashSet_object__o *)__this,*(Il2CppObject **)(lVar22 + 0x58),
                     MethodInfo_Boolean_Contains);
          return;
        }
      }
      __this_10 = (Il2CppObject *)0x0;
      il2cpp_runtime_helper_022b2c90();
      lStack_60 = lVar22;
      if (g_data_057a9cbb == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
        il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchSearchEntry_get_Current);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Add);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Contains);
        il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_System_String);
        il2cpp_runtime_helper_023445d0(&TypeInfo_HashSet_string);
        il2cpp_runtime_helper_023445d0(&TypeInfo_IDisposable);
        il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerable_GisketchSearchEntry);
        il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerator_GisketchSearchEntry);
        il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerator);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
        il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_Gisketch_Aottg2UI_Search_GisketchSea);
        il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_Gisketch_Aottg2UI_Search_GisketchSearchEntry);
        il2cpp_runtime_helper_023445d0(&TypeInfo_List_GisketchSearchEntry);
        il2cpp_runtime_helper_023445d0(&TypeInfo_StringComparer);
        g_data_057a9cbb = '\x01';
      }
      __this_05 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_GisketchSearchEntry);
      System_Collections_Generic_List_object____ctor(__this_05,MethodInfo_List_1_Gisketch_Aottg2UI_Search_GisketchSearchEntry);
      if (*(int *)(TypeInfo_StringComparer + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057a9c88 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_StringComparer);
        g_data_057a9c88 = '\x01';
        iVar25 = *(int *)(TypeInfo_StringComparer + 0xe4);
      }
      else {
        iVar25 = *(int *)(TypeInfo_StringComparer + 0xe4);
      }
      if (iVar25 == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pMVar20 = *(MethodInfo **)(*(long *)(TypeInfo_StringComparer + 0xb8) + 0x18);
      __this_06 = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_HashSet_string);
      System_Collections_Generic_HashSet_object____ctor_33e0600
                (__this_06,(System_Collections_Generic_IEqualityComparer_T__o *)pMVar20,MethodInfo_HashSet_1_System_String);
      screenTitles = Gisketch_Aottg2UI_Search_GisketchSearchResults__ScreenTitles
                               ((System_Collections_Generic_IEnumerable_GisketchSearchEntry__o *)__this_10,
                                pMVar20);
      __this_07 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_GisketchSearchEntry);
      System_Collections_Generic_List_object____ctor(__this_07,MethodInfo_List_1_Gisketch_Aottg2UI_Search_GisketchSearchEntry);
      if (g_data_057a9c88 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_StringComparer);
        g_data_057a9c88 = '\x01';
        iVar25 = *(int *)(TypeInfo_StringComparer + 0xe4);
      }
      else {
        iVar25 = *(int *)(TypeInfo_StringComparer + 0xe4);
      }
      if (iVar25 == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      item = *(long **)(*(long *)(TypeInfo_StringComparer + 0xb8) + 0x18);
      __this_08 = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_HashSet_string);
      System_Collections_Generic_HashSet_object____ctor_33e0600
                (__this_08,(System_Collections_Generic_IEqualityComparer_T__o *)item,MethodInfo_HashSet_1_System_String);
      if (__this_09 == (System_String_o *)0x0) {
        if (g_data_057a9cc0 == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_Empty_d__6);
          g_data_057a9cc0 = '\x01';
        }
        __this_09 = (System_String_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Empty_d__6);
        System_Object___ctor((Il2CppObject *)__this_09,(MethodInfo *)0x0);
        (__this_09->fields)._stringLength = -2;
        iVar16 = System_Environment__get_CurrentManagedThreadId((MethodInfo *)0x0);
        *(int32_t *)&__this_09[1].monitor = iVar16;
        if (__this_09 == (System_String_o *)0x0) goto label_03b49dcf;
      }
      pSVar9 = __this_09->klass;
      uVar2._0_1_ = (pSVar9->_2).rank;
      uVar2._1_1_ = (pSVar9->_2).minimumAlignment;
      if ((ulong)uVar2 != 0) {
        pIVar10 = (pSVar9->_1).interfaceOffsets;
        lVar22 = 0;
        do {
          if (*(long *)((long)&pIVar10->interfaceType + lVar22) == TypeInfo_IEnumerable_GisketchSearchEntry) {
            pVVar17 = &(pSVar9->vtable)._0_Equals + *(int *)((long)&pIVar10->offset + lVar22);
            goto label_03b4956f;
          }
          lVar22 = lVar22 + 0x10;
        } while ((ulong)uVar2 << 4 != lVar22);
      }
      pVVar17 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(__this_09,TypeInfo_IEnumerable_GisketchSearchEntry,0);
label_03b4956f:
      plVar18 = (long *)(*pVVar17->methodPtr)(__this_09,pVVar17->method);
      if (plVar18 == (long *)0x0) goto label_03b49dd4;
      item = &TypeInfo_IEnumerator;
      in_stack_ffffffffffffff38 = 0;
      do {
        lVar22 = *plVar18;
        if ((ulong)*(ushort *)(lVar22 + 0x12e) != 0) {
          lVar24 = 0;
          do {
            if (*(long *)(*(long *)(lVar22 + 0xb0) + lVar24) == TypeInfo_IEnumerator) {
              puVar19 = (undefined8 *)
                        ((long)*(int *)(*(long *)(lVar22 + 0xb0) + 8 + lVar24) * 0x10 + lVar22 + 0x138);
              goto label_03b495f3;
            }
            lVar24 = lVar24 + 0x10;
          } while ((ulong)*(ushort *)(lVar22 + 0x12e) << 4 != lVar24);
        }
        puVar19 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar18,TypeInfo_IEnumerator,0);
label_03b495f3:
        cVar14 = (*(code *)*puVar19)();
        if (cVar14 == '\0') {
          item = (long *)&g_data_00000005;
          if (plVar18 == (long *)0x0) goto label_03b497a6;
          lVar22 = *plVar18;
          if ((ulong)*(ushort *)(lVar22 + 0x12e) == 0) goto label_03b4977f;
          lVar24 = 0;
          goto label_03b49770;
        }
        lVar22 = *plVar18;
        if ((ulong)*(ushort *)(lVar22 + 0x12e) != 0) {
          lVar24 = 0;
          do {
            if (*(long *)(*(long *)(lVar22 + 0xb0) + lVar24) == TypeInfo_IEnumerator_GisketchSearchEntry) {
              pMVar20 = (MethodInfo *)
                        ((long)*(int *)(*(long *)(lVar22 + 0xb0) + 8 + lVar24) * 0x10 + lVar22 + 0x138);
              goto label_03b49663;
            }
            lVar24 = lVar24 + 0x10;
          } while ((ulong)*(ushort *)(lVar22 + 0x12e) << 4 != lVar24);
        }
        pMVar20 = (MethodInfo *)il2cpp_runtime_helper_02300d20(plVar18,TypeInfo_IEnumerator_GisketchSearchEntry,0);
label_03b49663:
        method_00 = (MethodInfo *)pMVar20->virtualMethodPointer;
        pGVar21 = (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *)(*pMVar20->methodPointer)();
        if (((pGVar21 != (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *)0x0) &&
            (bVar15 = Gisketch_Aottg2UI_Search_GisketchSearchResults__IsLiveUsable(pGVar21,method_00),
            (char)bVar15 != '\0')) &&
           (bVar15 = Gisketch_Aottg2UI_Search_GisketchSearchResults__IsDuplicateMainMenuScreenButton
                               (pGVar21,activeScreenId,screenTitles,pMVar20), lVar22 = MethodInfo_Void_Add,
           (char)bVar15 == '\0')) {
          if (__this_07 == (System_Collections_Generic_List_object__o *)0x0) goto label_03b49dbb;
          piVar1 = &(__this_07->fields)._version;
          *piVar1 = *piVar1 + 1;
          pSVar11 = (__this_07->fields)._items;
          if (pSVar11 == (System_Object_array *)0x0) goto label_03b49dc0;
          uVar8 = (__this_07->fields)._size;
          if (uVar8 < (uint)pSVar11->max_length) {
            (__this_07->fields)._size = uVar8 + 1;
            pSVar11->m_Items[(int)uVar8] = (Il2CppObject *)pGVar21;
            il2cpp_runtime_helper_022b4080(pSVar11->m_Items + (int)uVar8);
          }
          else {
            System_Collections_Generic_List_object___AddWithResize
                      (__this_07,(Il2CppObject *)pGVar21,
                       *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar22 + 0x20) + 0xc0) + 0x70));
          }
          bVar15 = System_String__IsNullOrEmpty((pGVar21->fields)._TargetId_k__BackingField,(MethodInfo *)0x0)
          ;
          if ((char)bVar15 == '\0') {
            if (__this_08 == (System_Collections_Generic_HashSet_object__o *)0x0) {
              do {
                il2cpp_runtime_helper_022b2c90();
label_03b49dca:
                il2cpp_runtime_helper_022b2c90();
label_03b49dcf:
                do {
                  il2cpp_runtime_helper_022b2c90();
label_03b49dd4:
                  il2cpp_runtime_helper_022b2c90();
label_03b49dd9:
                  il2cpp_runtime_helper_022fefe0();
label_03b49dde:
                  il2cpp_runtime_helper_022b2c90();
                  do {
                    auVar27 = il2cpp_runtime_helper_022fefe0();
                    iVar25 = 0;
                    if (auVar27._8_4_ != 1) {
                      lVar24 = auVar27._0_8_;
                      lVar22 = 0;
                      goto joined_r0x03b4a097;
                    }
                    plVar18 = (long *)__cxa_begin_catch();
                    lVar22 = *plVar18;
                    __cxa_end_catch();
label_03b49ac8:
                    if ((Il2CppObject *)item != (Il2CppObject *)0x0) {
                      pIVar12 = ((Il2CppObject *)item)->klass;
                      uVar6._0_1_ = (pIVar12->_2).rank;
                      uVar6._1_1_ = (pIVar12->_2).minimumAlignment;
                      if ((ulong)uVar6 != 0) {
                        pIVar10 = (pIVar12->_1).interfaceOffsets;
                        lVar24 = 0;
                        do {
                          if (*(long *)((long)&pIVar10->interfaceType + lVar24) == TypeInfo_IDisposable) {
                            pVVar17 = pIVar12->vtable + *(int *)((long)&pIVar10->offset + lVar24);
                            goto label_03b49b2d;
                          }
                          lVar24 = lVar24 + 0x10;
                        } while ((ulong)uVar6 << 4 != lVar24);
                      }
                      pVVar17 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(item,TypeInfo_IDisposable,0);
label_03b49b2d:
                      (*pVVar17->methodPtr)(item,pVVar17->method);
                    }
                  } while (lVar22 != 0);
                  if ((iVar25 != 10) && (iVar25 != 0)) {
                    return;
                  }
                } while (__this_07 == (System_Collections_Generic_List_object__o *)0x0);
                System_Collections_Generic_List_object___GetEnumerator
                          ((System_Collections_Generic_List_Enumerator_T__o *)a_Stack_78,__this_07,
                           MethodInfo_List_1_T_Enumerator_Gisketch_Aottg2UI_Search_GisketchSea);
                item = (long *)pIStack_68;
                _Var28 = a_Stack_78[0];
                if (__this_06 == (System_Collections_Generic_HashSet_object__o *)0x0) {
                  while( true ) {
                    __this_01.fields._8_8_ = __this_06;
                    __this_01.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff38
                    ;
                    __this_01.fields._current = _Var28.genericMethod;
                    bVar15 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                       (__this_01,(MethodInfo_321A1D0 *)&stack0xffffffffffffff48);
                    if ((char)bVar15 == '\0') goto label_03b49d72;
                    if ((Il2CppObject *)item == (Il2CppObject *)0x0) goto label_03b49da2;
                    bVar15 = System_String__IsNullOrEmpty
                                       (((Il2CppObject *)((long)item + 0x40))->monitor,(MethodInfo *)0x0);
                    lVar22 = MethodInfo_Void_Add;
                    if ((char)bVar15 == '\0') goto label_03b49db6;
                    if (__this_05 == (System_Collections_Generic_List_object__o *)0x0) goto label_03b49d6d;
                    piVar1 = &(__this_05->fields)._version;
                    *piVar1 = *piVar1 + 1;
                    pSVar11 = (__this_05->fields)._items;
                    if (pSVar11 == (System_Object_array *)0x0) break;
                    uVar8 = (__this_05->fields)._size;
                    if (uVar8 < (uint)pSVar11->max_length) {
                      (__this_05->fields)._size = uVar8 + 1;
                      pSVar11->m_Items[(int)uVar8] = (Il2CppObject *)item;
                      il2cpp_runtime_helper_022b4080(pSVar11->m_Items + (int)uVar8,item);
                    }
                    else {
                      System_Collections_Generic_List_object___AddWithResize
                                (__this_05,(Il2CppObject *)item,
                                 *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar22 + 0x20) + 0xc0) + 0x70));
                    }
                  }
                }
                else {
                  if (__this_05 == (System_Collections_Generic_List_object__o *)0x0) {
                    while( true ) {
                      __this_02.fields._8_8_ = __this_06;
                      __this_02.fields._list =
                           (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff38;
                      __this_02.fields._current = _Var28.genericMethod;
                      bVar15 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                         (__this_02,(MethodInfo_321A1D0 *)&stack0xffffffffffffff48);
                      if ((char)bVar15 == '\0') goto label_03b49d72;
                      if ((Il2CppObject *)item == (Il2CppObject *)0x0) break;
                      bVar15 = System_String__IsNullOrEmpty
                                         (((Il2CppObject *)((long)item + 0x40))->monitor,(MethodInfo *)0x0);
                      if (((char)bVar15 != '\0') ||
                         (bVar15 = System_Collections_Generic_HashSet_object___Contains
                                             (__this_06,((Il2CppObject *)((long)item + 0x40))->monitor,
                                              MethodInfo_Boolean_Contains), (char)bVar15 == '\0')) goto label_03b49d6d;
                    }
                  }
                  else {
                    while( true ) {
                      __this_00.fields._8_8_ = __this_06;
                      __this_00.fields._list =
                           (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff38;
                      __this_00.fields._current = _Var28.genericMethod;
                      bVar15 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                         (__this_00,(MethodInfo_321A1D0 *)&stack0xffffffffffffff48);
                      if ((char)bVar15 == '\0') goto label_03b49d72;
                      if ((Il2CppObject *)item == (Il2CppObject *)0x0) break;
                      bVar15 = System_String__IsNullOrEmpty
                                         (((Il2CppObject *)((long)item + 0x40))->monitor,(MethodInfo *)0x0);
                      if (((char)bVar15 != '\0') ||
                         (bVar15 = System_Collections_Generic_HashSet_object___Contains
                                             (__this_06,((Il2CppObject *)((long)item + 0x40))->monitor,
                                              MethodInfo_Boolean_Contains), (char)bVar15 == '\0')) {
                        lVar22 = MethodInfo_Void_Add;
                        piVar1 = &(__this_05->fields)._version;
                        *piVar1 = *piVar1 + 1;
                        pSVar11 = (__this_05->fields)._items;
                        if (pSVar11 == (System_Object_array *)0x0) goto label_03b49dac;
                        uVar8 = (__this_05->fields)._size;
                        if (uVar8 < (uint)pSVar11->max_length) {
                          (__this_05->fields)._size = uVar8 + 1;
                          pSVar11->m_Items[(int)uVar8] = (Il2CppObject *)item;
                          il2cpp_runtime_helper_022b4080(pSVar11->m_Items + (int)uVar8,item);
                        }
                        else {
                          System_Collections_Generic_List_object___AddWithResize
                                    (__this_05,(Il2CppObject *)item,
                                     *(MethodInfo_362C220 **)
                                      (*(long *)(*(long *)(lVar22 + 0x20) + 0xc0) + 0x70));
                        }
                      }
                    }
                  }
label_03b49da2:
                  il2cpp_runtime_helper_022b2c90();
label_03b49da7:
                  il2cpp_runtime_helper_022b2c90();
                }
label_03b49dac:
                il2cpp_runtime_helper_022b2c90();
label_03b49db1:
                il2cpp_runtime_helper_022b2c90();
label_03b49db6:
                il2cpp_runtime_helper_022b2c90();
label_03b49dbb:
                il2cpp_runtime_helper_022b2c90();
label_03b49dc0:
                il2cpp_runtime_helper_022b2c90();
              } while( true );
            }
            System_Collections_Generic_HashSet_object___Add
                      (__this_08,(Il2CppObject *)(pGVar21->fields)._TargetId_k__BackingField,MethodInfo_Boolean_Add);
          }
        }
      } while( true );
    }
  }
  return;
  while (lVar24 = lVar24 + 0x10, (ulong)*(ushort *)(lVar22 + 0x12e) << 4 != lVar24) {
label_03b49770:
    if (*(long *)(*(long *)(lVar22 + 0xb0) + lVar24) == TypeInfo_IDisposable) {
      puVar19 = (undefined8 *)(lVar22 + (long)*(int *)(*(long *)(lVar22 + 0xb0) + 8 + lVar24) * 0x10 + 0x138);
      goto label_03b4979d;
    }
  }
label_03b4977f:
  puVar19 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar18,TypeInfo_IDisposable,0);
label_03b4979d:
  (*(code *)*puVar19)(plVar18);
label_03b497a6:
  if (in_stack_ffffffffffffff38 != 0) goto label_03b49dd9;
  if (__this_10 == (Il2CppObject *)0x0) {
    if (g_data_057a9cc0 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Empty_d__6);
      g_data_057a9cc0 = '\x01';
    }
    __this_10 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_Empty_d__6);
    System_Object___ctor(__this_10,(MethodInfo *)0x0);
    *(undefined4 *)&__this_10[1].klass = 0xfffffffe;
    iVar16 = System_Environment__get_CurrentManagedThreadId((MethodInfo *)0x0);
    *(int32_t *)&__this_10[2].klass = iVar16;
    item = (long *)0x0;
    if (__this_10 == (Il2CppObject *)0x0) goto label_03b49dcf;
  }
  pIVar12 = __this_10->klass;
  uVar3._0_1_ = (pIVar12->_2).rank;
  uVar3._1_1_ = (pIVar12->_2).minimumAlignment;
  if ((ulong)uVar3 != 0) {
    pIVar10 = (pIVar12->_1).interfaceOffsets;
    lVar22 = 0;
    do {
      if (*(long *)((long)&pIVar10->interfaceType + lVar22) == TypeInfo_IEnumerable_GisketchSearchEntry) {
        pVVar17 = pIVar12->vtable + *(int *)((long)&pIVar10->offset + lVar22);
        goto label_03b49881;
      }
      lVar22 = lVar22 + 0x10;
    } while ((ulong)uVar3 << 4 != lVar22);
  }
  pVVar17 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(__this_10,TypeInfo_IEnumerable_GisketchSearchEntry,0);
label_03b49881:
  item = (long *)(*pVVar17->methodPtr)(__this_10,pVVar17->method);
  if ((Il2CppObject *)item == (Il2CppObject *)0x0) goto label_03b49dde;
  do {
    do {
      pIVar12 = ((Il2CppObject *)item)->klass;
      uVar4._0_1_ = (pIVar12->_2).rank;
      uVar4._1_1_ = (pIVar12->_2).minimumAlignment;
      if ((ulong)uVar4 != 0) {
        pIVar10 = (pIVar12->_1).interfaceOffsets;
        lVar22 = 0;
        do {
          if (*(long *)((long)&pIVar10->interfaceType + lVar22) == TypeInfo_IEnumerator) {
            pVVar17 = pIVar12->vtable + *(int *)((long)&pIVar10->offset + lVar22);
            goto label_03b49903;
          }
          lVar22 = lVar22 + 0x10;
        } while ((ulong)uVar4 << 4 != lVar22);
      }
      pVVar17 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(item,TypeInfo_IEnumerator,0);
label_03b49903:
      cVar14 = (*pVVar17->methodPtr)(item,pVVar17->method);
      if (cVar14 == '\0') {
        iVar25 = 10;
        lVar22 = 0;
        goto label_03b49ac8;
      }
      pIVar12 = ((Il2CppObject *)item)->klass;
      uVar5._0_1_ = (pIVar12->_2).rank;
      uVar5._1_1_ = (pIVar12->_2).minimumAlignment;
      if ((ulong)uVar5 != 0) {
        pIVar10 = (pIVar12->_1).interfaceOffsets;
        lVar22 = 0;
        do {
          if (*(long *)((long)&pIVar10->interfaceType + lVar22) == TypeInfo_IEnumerator_GisketchSearchEntry) {
            pVVar17 = pIVar12->vtable + *(int *)((long)&pIVar10->offset + lVar22);
            goto label_03b49973;
          }
          lVar22 = lVar22 + 0x10;
        } while ((ulong)uVar5 << 4 != lVar22);
      }
      pVVar17 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(item,TypeInfo_IEnumerator_GisketchSearchEntry,0);
label_03b49973:
      auVar26 = (*pVVar17->methodPtr)(item,pVVar17->method);
      pGVar21 = auVar26._0_8_;
      bVar15 = Gisketch_Aottg2UI_Search_GisketchSearchResults__IsActiveControl
                         (pGVar21,activeScreenId,auVar26._8_8_);
      if ((char)bVar15 == '\0') break;
      if (pGVar21 == (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *)0x0) goto label_03b49da7;
      bVar15 = System_String__IsNullOrEmpty((pGVar21->fields)._TargetId_k__BackingField,(MethodInfo *)0x0);
      if ((char)bVar15 != '\0') break;
      if (__this_08 == (System_Collections_Generic_HashSet_object__o *)0x0) goto label_03b49db1;
      bVar15 = System_Collections_Generic_HashSet_object___Contains
                         (__this_08,(Il2CppObject *)(pGVar21->fields)._TargetId_k__BackingField,MethodInfo_Boolean_Contains);
    } while ((char)bVar15 == '\0');
    lVar22 = MethodInfo_Void_Add;
    if (__this_05 == (System_Collections_Generic_List_object__o *)0x0) {
      il2cpp_runtime_helper_022b2c90();
label_03b49d9d:
      il2cpp_runtime_helper_022b2c90();
      goto label_03b49da2;
    }
    piVar1 = &(__this_05->fields)._version;
    *piVar1 = *piVar1 + 1;
    pSVar11 = (__this_05->fields)._items;
    if (pSVar11 == (System_Object_array *)0x0) goto label_03b49d9d;
    uVar8 = (__this_05->fields)._size;
    if (uVar8 < (uint)pSVar11->max_length) {
      (__this_05->fields)._size = uVar8 + 1;
      pSVar11->m_Items[(int)uVar8] = (Il2CppObject *)pGVar21;
      il2cpp_runtime_helper_022b4080();
    }
    else {
      System_Collections_Generic_List_object___AddWithResize
                (__this_05,(Il2CppObject *)pGVar21,
                 *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar22 + 0x20) + 0xc0) + 0x70));
    }
    if (((pGVar21 != (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *)0x0) &&
        (bVar15 = System_String__IsNullOrEmpty((pGVar21->fields)._ScreenId_k__BackingField,(MethodInfo *)0x0),
        (char)bVar15 == '\0')) &&
       ((bVar15 = System_String__IsNullOrEmpty(activeScreenId,(MethodInfo *)0x0), (char)bVar15 == '\0' &&
        ((bVar15 = System_String__Equals_3af50f0
                             ((pGVar21->fields)._ScreenId_k__BackingField,activeScreenId,5,(MethodInfo *)0x0),
         (char)bVar15 != '\0' &&
         (bVar15 = System_String__IsNullOrEmpty((pGVar21->fields)._TargetId_k__BackingField,(MethodInfo *)0x0)
         , (char)bVar15 == '\0')))))) {
      if (__this_06 == (System_Collections_Generic_HashSet_object__o *)0x0) goto label_03b49dca;
      System_Collections_Generic_HashSet_object___Add
                (__this_06,(Il2CppObject *)(pGVar21->fields)._TargetId_k__BackingField,MethodInfo_Boolean_Add);
    }
  } while( true );
joined_r0x03b4a097:
  lVar13 = lVar24;
  if ((Il2CppObject *)item != (Il2CppObject *)0x0) {
    pIVar12 = ((Il2CppObject *)item)->klass;
    uVar7._0_1_ = (pIVar12->_2).rank;
    uVar7._1_1_ = (pIVar12->_2).minimumAlignment;
    if ((ulong)uVar7 != 0) {
      pIVar10 = (pIVar12->_1).interfaceOffsets;
      lVar24 = 0;
      do {
        if (*(long *)((long)&pIVar10->interfaceType + lVar24) == TypeInfo_IDisposable) {
          pVVar17 = pIVar12->vtable + *(int *)((long)&pIVar10->offset + lVar24);
          goto label_03b4a0ed;
        }
        lVar24 = lVar24 + 0x10;
      } while ((ulong)uVar7 << 4 != lVar24);
    }
    pVVar17 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(item,TypeInfo_IDisposable,0);
label_03b4a0ed:
    (*pVVar17->methodPtr)(item,pVVar17->method);
  }
  if (lVar22 == 0) {
    _Unwind_Resume(lVar13);
  }
  lVar24 = il2cpp_runtime_helper_022fefe0();
  lVar22 = lVar13;
  goto joined_r0x03b4a097;
label_03b49d6d:
  il2cpp_runtime_helper_022b2c90();
label_03b49d72:
  __this_03.fields._8_8_ = __this_06;
  __this_03.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff38;
  __this_03.fields._current = _Var28.genericMethod;
  System_Collections_Generic_List_Enumerator_object___Dispose
            (__this_03,(MethodInfo_321A1C0 *)&stack0xffffffffffffff48);
  return;
}


