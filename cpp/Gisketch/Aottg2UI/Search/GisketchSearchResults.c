// Type: Gisketch.Aottg2UI.Search.GisketchSearchResults
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Search/GisketchSearchResults.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Search.GisketchSearchResults.<Empty>d__6$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Search_GisketchSearchResults__Empty_d__6___ctor (Gisketch_Aottg2UI_Search_GisketchSearchResults__Empty_d__6_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x3b4aaa0

void Gisketch_Aottg2UI_Search_GisketchSearchResults__Empty_d__6___ctor
               (Gisketch_Aottg2UI_Search_GisketchSearchResults__Empty_d__6_o *__this,int32_t __1__state,
               MethodInfo *method)

{
  int32_t iVar1;
  
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  iVar1 = System_Environment__get_CurrentManagedThreadId((MethodInfo *)0x0);
  (__this->fields).__l__initialThreadId = iVar1;
  return;
}


// Gisketch.Aottg2UI.Search.GisketchSearchResults.<Empty>d__6$$System.IDisposable.Dispose
// il2cpp: void Gisketch_Aottg2UI_Search_GisketchSearchResults__Empty_d__6__System_IDisposable_Dispose (Gisketch_Aottg2UI_Search_GisketchSearchResults__Empty_d__6_o* __this, const MethodInfo* method);
// 0x3b4aad0

void Gisketch_Aottg2UI_Search_GisketchSearchResults__Empty_d__6__System_IDisposable_Dispose
               (Gisketch_Aottg2UI_Search_GisketchSearchResults__Empty_d__6_o *__this,MethodInfo *method)

{
  return;
}


// Gisketch.Aottg2UI.Search.GisketchSearchResults.<Empty>d__6$$MoveNext
// il2cpp: bool Gisketch_Aottg2UI_Search_GisketchSearchResults__Empty_d__6__MoveNext (Gisketch_Aottg2UI_Search_GisketchSearchResults__Empty_d__6_o* __this, const MethodInfo* method);
// 0x3b4aae0

bool_conflict
Gisketch_Aottg2UI_Search_GisketchSearchResults__Empty_d__6__MoveNext
          (Gisketch_Aottg2UI_Search_GisketchSearchResults__Empty_d__6_o *__this,MethodInfo *method)

{
  if ((__this->fields).__1__state != 0) {
    return 0;
  }
  (__this->fields).__1__state = -1;
  return 0;
}


// Gisketch.Aottg2UI.Search.GisketchSearchResults.<Empty>d__6$$System.Collections.Generic.IEnumerator<Gisketch.Aottg2UI.Search.GisketchSearchEntry>.get_Current
// il2cpp: Gisketch_Aottg2UI_Search_GisketchSearchEntry_o* Gisketch_Aottg2UI_Search_GisketchSearchResults__Empty_d__6__System_Collections_Generic_IEnumerator_Gisketch_Aottg2UI_Search_GisketchSearchEntry__get_Current (Gisketch_Aottg2UI_Search_GisketchSearchResults__Empty_d__6_o* __this, const MethodInfo* method);
// 0x3b4ab00

Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *
Gisketch_Aottg2UI_Search_GisketchSearchResults__Empty_d__6__System_Collections_Generic_IEnumerator_Gisketch_Aottg2UI_Search_GisketchSearchEntry__get_Current
          (Gisketch_Aottg2UI_Search_GisketchSearchResults__Empty_d__6_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// Gisketch.Aottg2UI.Search.GisketchSearchResults.<Empty>d__6$$System.Collections.IEnumerator.Reset
// il2cpp: void Gisketch_Aottg2UI_Search_GisketchSearchResults__Empty_d__6__System_Collections_IEnumerator_Reset (Gisketch_Aottg2UI_Search_GisketchSearchResults__Empty_d__6_o* __this, const MethodInfo* method);
// 0x3b4ab10

void Gisketch_Aottg2UI_Search_GisketchSearchResults__Empty_d__6__System_Collections_IEnumerator_Reset
               (Gisketch_Aottg2UI_Search_GisketchSearchResults__Empty_d__6_o *__this,MethodInfo *method)

{
  undefined8 uVar1;
  System_NotSupportedException_o *__this_00;
  
  uVar1 = il2cpp_runtime_helper_023445d0(&TypeInfo_NotSupportedException);
  __this_00 = (System_NotSupportedException_o *)il2cpp_runtime_helper_023052d0(uVar1);
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  uVar1 = il2cpp_runtime_helper_023445d0(&MethodInfo_Void_System_Collections_IEnumerator_Reset);
  il2cpp_runtime_helper_022b2b10(__this_00,uVar1);
  return;
}


// Gisketch.Aottg2UI.Search.GisketchSearchResults.<Empty>d__6$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* Gisketch_Aottg2UI_Search_GisketchSearchResults__Empty_d__6__System_Collections_IEnumerator_get_Current (Gisketch_Aottg2UI_Search_GisketchSearchResults__Empty_d__6_o* __this, const MethodInfo* method);
// 0x3b4ab50

Il2CppObject *
Gisketch_Aottg2UI_Search_GisketchSearchResults__Empty_d__6__System_Collections_IEnumerator_get_Current
          (Gisketch_Aottg2UI_Search_GisketchSearchResults__Empty_d__6_o *__this,MethodInfo *method)

{
  return (Il2CppObject *)(__this->fields).__2__current;
}


// Gisketch.Aottg2UI.Search.GisketchSearchResults.<Empty>d__6$$System.Collections.Generic.IEnumerable<Gisketch.Aottg2UI.Search.GisketchSearchEntry>.GetEnumerator
// il2cpp: System_Collections_Generic_IEnumerator_GisketchSearchEntry__o* Gisketch_Aottg2UI_Search_GisketchSearchResults__Empty_d__6__System_Collections_Generic_IEnumerable_Gisketch_Aottg2UI_Search_GisketchSearchEntry__GetEnumerator (Gisketch_Aottg2UI_Search_GisketchSearchResults__Empty_d__6_o* __this, const MethodInfo* method);
// 0x3b4ab60

System_Collections_Generic_IEnumerator_GisketchSearchEntry__o *
Gisketch_Aottg2UI_Search_GisketchSearchResults__Empty_d__6__System_Collections_Generic_IEnumerable_Gisketch_Aottg2UI_Search_GisketchSearchEntry__GetEnumerator
          (Gisketch_Aottg2UI_Search_GisketchSearchResults__Empty_d__6_o *__this,MethodInfo *method)

{
  int iVar1;
  int32_t iVar2;
  Il2CppObject *__this_00;
  
  if (g_data_057a9cc1 == '\0') {
    il2cpp_runtime_helper_023445d0();
    g_data_057a9cc1 = '\x01';
  }
  if (((__this->fields).__1__state == -2) &&
     (iVar1 = (__this->fields).__l__initialThreadId,
     iVar2 = System_Environment__get_CurrentManagedThreadId((MethodInfo *)0x0), iVar1 == iVar2)) {
    (__this->fields).__1__state = 0;
    return (System_Collections_Generic_IEnumerator_GisketchSearchEntry__o *)__this;
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_Empty_d__6);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  *(undefined4 *)&__this_00[1].klass = 0;
  iVar2 = System_Environment__get_CurrentManagedThreadId((MethodInfo *)0x0);
  *(int32_t *)&__this_00[2].klass = iVar2;
  return (System_Collections_Generic_IEnumerator_GisketchSearchEntry__o *)__this_00;
}


// Gisketch.Aottg2UI.Search.GisketchSearchResults.<Empty>d__6$$System.Collections.IEnumerable.GetEnumerator
// il2cpp: System_Collections_IEnumerator_o* Gisketch_Aottg2UI_Search_GisketchSearchResults__Empty_d__6__System_Collections_IEnumerable_GetEnumerator (Gisketch_Aottg2UI_Search_GisketchSearchResults__Empty_d__6_o* __this, const MethodInfo* method);
// 0x3b4abe0

System_Collections_IEnumerator_o *
Gisketch_Aottg2UI_Search_GisketchSearchResults__Empty_d__6__System_Collections_IEnumerable_GetEnumerator
          (Gisketch_Aottg2UI_Search_GisketchSearchResults__Empty_d__6_o *__this,MethodInfo *method)

{
  int iVar1;
  int32_t iVar2;
  Il2CppObject *__this_00;
  
  if (g_data_057a9cc1 == '\0') {
    il2cpp_runtime_helper_023445d0();
    g_data_057a9cc1 = '\x01';
  }
  if (((__this->fields).__1__state == -2) &&
     (iVar1 = (__this->fields).__l__initialThreadId,
     iVar2 = System_Environment__get_CurrentManagedThreadId((MethodInfo *)0x0), iVar1 == iVar2)) {
    (__this->fields).__1__state = 0;
    return (System_Collections_IEnumerator_o *)__this;
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_Empty_d__6);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  *(undefined4 *)&__this_00[1].klass = 0;
  iVar2 = System_Environment__get_CurrentManagedThreadId((MethodInfo *)0x0);
  *(int32_t *)&__this_00[2].klass = iVar2;
  return (System_Collections_IEnumerator_o *)__this_00;
}


// Gisketch.Aottg2UI.Search.GisketchSearchResults$$Merge
// il2cpp: System_Collections_Generic_List_GisketchSearchEntry__o* Gisketch_Aottg2UI_Search_GisketchSearchResults__Merge (System_Collections_Generic_IEnumerable_GisketchSearchEntry__o* manifest, System_Collections_Generic_IEnumerable_GisketchSearchEntry__o* live, System_String_o* activeScreenId, const MethodInfo* method);
// 0x3b49230

System_Collections_Generic_List_GisketchSearchEntry__o *
Gisketch_Aottg2UI_Search_GisketchSearchResults__Merge
          (System_Collections_Generic_IEnumerable_GisketchSearchEntry__o *manifest,
          System_Collections_Generic_IEnumerable_GisketchSearchEntry__o *live,System_String_o *activeScreenId,
          MethodInfo *method)

{
  int32_t *piVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  ushort uVar6;
  ushort uVar7;
  uint uVar8;
  Il2CppClass *pIVar9;
  Il2CppRuntimeInterfaceOffsetPair *pIVar10;
  System_Object_array *pSVar11;
  Gisketch_Aottg2UI_Search_GisketchSearchEntry_array *pGVar12;
  System_Collections_Generic_IEqualityComparer_T__c *pSVar13;
  System_Collections_Generic_List_Enumerator_object__o __this;
  System_Collections_Generic_List_Enumerator_object__o __this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  long lVar14;
  char cVar15;
  int32_t iVar16;
  bool_conflict bVar17;
  System_Collections_Generic_List_GisketchSearchEntry__o *__this_03;
  System_Collections_Generic_HashSet_object__o *__this_04;
  System_Collections_Generic_HashSet_string__o *screenTitles;
  System_Collections_Generic_List_object__o *__this_05;
  System_Collections_Generic_HashSet_object__o *__this_06;
  Il2CppMethodPointer *ppIVar18;
  long *plVar19;
  undefined8 *puVar20;
  MethodInfo *pMVar21;
  Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *pGVar22;
  long *item;
  MethodInfo *method_00;
  long lVar23;
  long lVar24;
  int iVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [12];
  long in_stack_ffffffffffffff68;
  _union_249689 _Var28;
  _union_249689 a_Stack_48 [2];
  Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *pGStack_38;
  
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
  __this_03 = (System_Collections_Generic_List_GisketchSearchEntry__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_GisketchSearchEntry);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_03,MethodInfo_List_1_Gisketch_Aottg2UI_Search_GisketchSearchEntry);
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
  __this_04 = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor_33e0600
            (__this_04,(System_Collections_Generic_IEqualityComparer_T__o *)pMVar21,MethodInfo_HashSet_1_System_String);
  screenTitles = Gisketch_Aottg2UI_Search_GisketchSearchResults__ScreenTitles(manifest,pMVar21);
  __this_05 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_GisketchSearchEntry);
  System_Collections_Generic_List_object____ctor(__this_05,MethodInfo_List_1_Gisketch_Aottg2UI_Search_GisketchSearchEntry);
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
  __this_06 = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor_33e0600
            (__this_06,(System_Collections_Generic_IEqualityComparer_T__o *)item,MethodInfo_HashSet_1_System_String);
  if (live == (System_Collections_Generic_IEnumerable_GisketchSearchEntry__o *)0x0) {
    if (g_data_057a9cc0 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Empty_d__6);
      g_data_057a9cc0 = '\x01';
    }
    live = (System_Collections_Generic_IEnumerable_GisketchSearchEntry__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Empty_d__6);
    System_Object___ctor((Il2CppObject *)live,(MethodInfo *)0x0);
    *(undefined4 *)&((Il2CppObject *)(live + 1))->klass = 0xfffffffe;
    iVar16 = System_Environment__get_CurrentManagedThreadId((MethodInfo *)0x0);
    *(int32_t *)&((Il2CppObject *)(live + 2))->klass = iVar16;
    if ((Il2CppObject *)live == (Il2CppObject *)0x0) goto label_03b49dcf;
  }
  pIVar9 = ((Il2CppObject *)live)->klass;
  uVar2._0_1_ = (pIVar9->_2).rank;
  uVar2._1_1_ = (pIVar9->_2).minimumAlignment;
  if ((ulong)uVar2 != 0) {
    pIVar10 = (pIVar9->_1).interfaceOffsets;
    lVar23 = 0;
    do {
      if (*(long *)((long)&pIVar10->interfaceType + lVar23) == TypeInfo_IEnumerable_GisketchSearchEntry) {
        ppIVar18 = &pIVar9->vtable[*(int *)((long)&pIVar10->offset + lVar23)].methodPtr;
        goto label_03b4956f;
      }
      lVar23 = lVar23 + 0x10;
    } while ((ulong)uVar2 << 4 != lVar23);
  }
  ppIVar18 = (Il2CppMethodPointer *)il2cpp_runtime_helper_02300d20(live,TypeInfo_IEnumerable_GisketchSearchEntry,0);
label_03b4956f:
  plVar19 = (long *)(**ppIVar18)(live,(MethodInfo *)ppIVar18[1]);
  if (plVar19 == (long *)0x0) goto label_03b49dd4;
  item = &TypeInfo_IEnumerator;
  in_stack_ffffffffffffff68 = 0;
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
    cVar15 = (*(code *)*puVar20)();
    if (cVar15 == '\0') {
      item = (long *)&g_data_00000005;
      if (plVar19 == (long *)0x0) goto label_03b497a6;
      lVar23 = *plVar19;
      if ((ulong)*(ushort *)(lVar23 + 0x12e) == 0) goto label_03b4977f;
      lVar24 = 0;
      break;
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
        (bVar17 = Gisketch_Aottg2UI_Search_GisketchSearchResults__IsLiveUsable(pGVar22,method_00),
        (char)bVar17 != '\0')) &&
       (bVar17 = Gisketch_Aottg2UI_Search_GisketchSearchResults__IsDuplicateMainMenuScreenButton
                           (pGVar22,activeScreenId,screenTitles,pMVar21), lVar23 = MethodInfo_Void_Add,
       (char)bVar17 == '\0')) {
      if (__this_05 == (System_Collections_Generic_List_object__o *)0x0) goto label_03b49dbb;
      piVar1 = &(__this_05->fields)._version;
      *piVar1 = *piVar1 + 1;
      pSVar11 = (__this_05->fields)._items;
      if (pSVar11 == (System_Object_array *)0x0) goto label_03b49dc0;
      uVar8 = (__this_05->fields)._size;
      if (uVar8 < (uint)pSVar11->max_length) {
        (__this_05->fields)._size = uVar8 + 1;
        pSVar11->m_Items[(int)uVar8] = (Il2CppObject *)pGVar22;
        il2cpp_runtime_helper_022b4080(pSVar11->m_Items + (int)uVar8);
      }
      else {
        System_Collections_Generic_List_object___AddWithResize
                  (__this_05,(Il2CppObject *)pGVar22,
                   *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar23 + 0x20) + 0xc0) + 0x70));
      }
      bVar17 = System_String__IsNullOrEmpty((pGVar22->fields)._TargetId_k__BackingField,(MethodInfo *)0x0);
      if ((char)bVar17 == '\0') {
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
                if ((Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *)item !=
                    (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *)0x0) {
                  pSVar13 = (System_Collections_Generic_IEqualityComparer_T__c *)
                            ((Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *)item)->klass;
                  uVar6._0_1_ = (pSVar13->_2).rank;
                  uVar6._1_1_ = (pSVar13->_2).minimumAlignment;
                  if ((ulong)uVar6 != 0) {
                    pIVar10 = (pSVar13->_1).interfaceOffsets;
                    lVar24 = 0;
                    do {
                      if (*(long *)((long)&pIVar10->interfaceType + lVar24) == TypeInfo_IDisposable) {
                        ppIVar18 = &pSVar13->vtable[*(int *)((long)&pIVar10->offset + lVar24)].methodPtr;
                        goto label_03b49b2d;
                      }
                      lVar24 = lVar24 + 0x10;
                    } while ((ulong)uVar6 << 4 != lVar24);
                  }
                  ppIVar18 = (Il2CppMethodPointer *)il2cpp_runtime_helper_02300d20(item,TypeInfo_IDisposable,0);
label_03b49b2d:
                  (**ppIVar18)(item,(MethodInfo *)ppIVar18[1]);
                }
              } while (lVar23 != 0);
              if ((iVar25 != 10) && (iVar25 != 0)) {
                return __this_03;
              }
            } while (__this_05 == (System_Collections_Generic_List_object__o *)0x0);
            System_Collections_Generic_List_object___GetEnumerator
                      ((System_Collections_Generic_List_Enumerator_T__o *)a_Stack_48,__this_05,MethodInfo_List_1_T_Enumerator_Gisketch_Aottg2UI_Search_GisketchSea);
            item = (long *)pGStack_38;
            _Var28 = a_Stack_48[0];
            if (__this_04 == (System_Collections_Generic_HashSet_object__o *)0x0) {
              while( true ) {
                __this_00.fields._8_8_ = __this_04;
                __this_00.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff68;
                __this_00.fields._current = _Var28.genericMethod;
                bVar17 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                   (__this_00,(MethodInfo_321A1D0 *)&stack0xffffffffffffff78);
                if ((char)bVar17 == '\0') goto label_03b49d72;
                if ((Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *)item ==
                    (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *)0x0) goto label_03b49da2;
                bVar17 = System_String__IsNullOrEmpty
                                   ((((Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *)item)->fields).
                                    _TargetId_k__BackingField,(MethodInfo *)0x0);
                lVar23 = MethodInfo_Void_Add;
                if ((char)bVar17 == '\0') goto label_03b49db6;
                if (__this_03 == (System_Collections_Generic_List_GisketchSearchEntry__o *)0x0)
                goto label_03b49d6d;
                piVar1 = &(__this_03->fields)._version;
                *piVar1 = *piVar1 + 1;
                pGVar12 = (__this_03->fields)._items;
                if (pGVar12 == (Gisketch_Aottg2UI_Search_GisketchSearchEntry_array *)0x0) break;
                uVar8 = (__this_03->fields)._size;
                if (uVar8 < (uint)pGVar12->max_length) {
                  (__this_03->fields)._size = uVar8 + 1;
                  pGVar12->m_Items[(int)uVar8] = (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *)item;
                  il2cpp_runtime_helper_022b4080(pGVar12->m_Items + (int)uVar8,item);
                }
                else {
                  System_Collections_Generic_List_object___AddWithResize
                            ((System_Collections_Generic_List_object__o *)__this_03,(Il2CppObject *)item,
                             *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar23 + 0x20) + 0xc0) + 0x70));
                }
              }
            }
            else {
              if (__this_03 == (System_Collections_Generic_List_GisketchSearchEntry__o *)0x0) {
                while( true ) {
                  __this_01.fields._8_8_ = __this_04;
                  __this_01.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff68;
                  __this_01.fields._current = _Var28.genericMethod;
                  bVar17 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                     (__this_01,(MethodInfo_321A1D0 *)&stack0xffffffffffffff78);
                  if ((char)bVar17 == '\0') goto label_03b49d72;
                  if ((Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *)item ==
                      (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *)0x0) break;
                  bVar17 = System_String__IsNullOrEmpty
                                     ((((Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *)item)->fields).
                                      _TargetId_k__BackingField,(MethodInfo *)0x0);
                  if (((char)bVar17 != '\0') ||
                     (bVar17 = System_Collections_Generic_HashSet_object___Contains
                                         (__this_04,
                                          (Il2CppObject *)
                                          (((Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *)item)->fields).
                                          _TargetId_k__BackingField,MethodInfo_Boolean_Contains), (char)bVar17 == '\0'))
                  goto label_03b49d6d;
                }
              }
              else {
                while( true ) {
                  __this.fields._8_8_ = __this_04;
                  __this.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff68;
                  __this.fields._current = _Var28.genericMethod;
                  bVar17 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                     (__this,(MethodInfo_321A1D0 *)&stack0xffffffffffffff78);
                  if ((char)bVar17 == '\0') goto label_03b49d72;
                  if ((Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *)item ==
                      (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *)0x0) break;
                  bVar17 = System_String__IsNullOrEmpty
                                     ((((Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *)item)->fields).
                                      _TargetId_k__BackingField,(MethodInfo *)0x0);
                  if (((char)bVar17 != '\0') ||
                     (bVar17 = System_Collections_Generic_HashSet_object___Contains
                                         (__this_04,
                                          (Il2CppObject *)
                                          (((Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *)item)->fields).
                                          _TargetId_k__BackingField,MethodInfo_Boolean_Contains), (char)bVar17 == '\0')) {
                    lVar23 = MethodInfo_Void_Add;
                    piVar1 = &(__this_03->fields)._version;
                    *piVar1 = *piVar1 + 1;
                    pGVar12 = (__this_03->fields)._items;
                    if (pGVar12 == (Gisketch_Aottg2UI_Search_GisketchSearchEntry_array *)0x0)
                    goto label_03b49dac;
                    uVar8 = (__this_03->fields)._size;
                    if (uVar8 < (uint)pGVar12->max_length) {
                      (__this_03->fields)._size = uVar8 + 1;
                      pGVar12->m_Items[(int)uVar8] = (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *)item;
                      il2cpp_runtime_helper_022b4080(pGVar12->m_Items + (int)uVar8,item);
                    }
                    else {
                      System_Collections_Generic_List_object___AddWithResize
                                ((System_Collections_Generic_List_object__o *)__this_03,(Il2CppObject *)item,
                                 *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar23 + 0x20) + 0xc0) + 0x70));
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
                  (__this_06,(Il2CppObject *)(pGVar22->fields)._TargetId_k__BackingField,MethodInfo_Boolean_Add);
      }
    }
  } while( true );
  while (lVar24 = lVar24 + 0x10, (ulong)*(ushort *)(lVar23 + 0x12e) << 4 != lVar24) {
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
  if (in_stack_ffffffffffffff68 != 0) goto label_03b49dd9;
  if (manifest == (System_Collections_Generic_IEnumerable_GisketchSearchEntry__o *)0x0) {
    if (g_data_057a9cc0 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Empty_d__6);
      g_data_057a9cc0 = '\x01';
    }
    manifest = (System_Collections_Generic_IEnumerable_GisketchSearchEntry__o *)
               il2cpp_runtime_helper_023052d0(TypeInfo_Empty_d__6);
    System_Object___ctor((Il2CppObject *)manifest,(MethodInfo *)0x0);
    *(undefined4 *)&((Il2CppObject *)(manifest + 1))->klass = 0xfffffffe;
    iVar16 = System_Environment__get_CurrentManagedThreadId((MethodInfo *)0x0);
    *(int32_t *)&((Il2CppObject *)(manifest + 2))->klass = iVar16;
    item = (long *)0x0;
    if ((Il2CppObject *)manifest == (Il2CppObject *)0x0) goto label_03b49dcf;
  }
  pIVar9 = ((Il2CppObject *)manifest)->klass;
  uVar3._0_1_ = (pIVar9->_2).rank;
  uVar3._1_1_ = (pIVar9->_2).minimumAlignment;
  if ((ulong)uVar3 != 0) {
    pIVar10 = (pIVar9->_1).interfaceOffsets;
    lVar23 = 0;
    do {
      if (*(long *)((long)&pIVar10->interfaceType + lVar23) == TypeInfo_IEnumerable_GisketchSearchEntry) {
        ppIVar18 = &pIVar9->vtable[*(int *)((long)&pIVar10->offset + lVar23)].methodPtr;
        goto label_03b49881;
      }
      lVar23 = lVar23 + 0x10;
    } while ((ulong)uVar3 << 4 != lVar23);
  }
  ppIVar18 = (Il2CppMethodPointer *)il2cpp_runtime_helper_02300d20(manifest,TypeInfo_IEnumerable_GisketchSearchEntry,0);
label_03b49881:
  item = (long *)(**ppIVar18)(manifest,(MethodInfo *)ppIVar18[1]);
  if ((Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *)item ==
      (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *)0x0) goto label_03b49dde;
  do {
    do {
      pSVar13 = (System_Collections_Generic_IEqualityComparer_T__c *)
                ((Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *)item)->klass;
      uVar4._0_1_ = (pSVar13->_2).rank;
      uVar4._1_1_ = (pSVar13->_2).minimumAlignment;
      if ((ulong)uVar4 != 0) {
        pIVar10 = (pSVar13->_1).interfaceOffsets;
        lVar23 = 0;
        do {
          if (*(long *)((long)&pIVar10->interfaceType + lVar23) == TypeInfo_IEnumerator) {
            ppIVar18 = &pSVar13->vtable[*(int *)((long)&pIVar10->offset + lVar23)].methodPtr;
            goto label_03b49903;
          }
          lVar23 = lVar23 + 0x10;
        } while ((ulong)uVar4 << 4 != lVar23);
      }
      ppIVar18 = (Il2CppMethodPointer *)il2cpp_runtime_helper_02300d20(item,TypeInfo_IEnumerator,0);
label_03b49903:
      cVar15 = (**ppIVar18)(item,(MethodInfo *)ppIVar18[1]);
      if (cVar15 == '\0') {
        iVar25 = 10;
        lVar23 = 0;
        goto label_03b49ac8;
      }
      pSVar13 = (System_Collections_Generic_IEqualityComparer_T__c *)
                ((Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *)item)->klass;
      uVar5._0_1_ = (pSVar13->_2).rank;
      uVar5._1_1_ = (pSVar13->_2).minimumAlignment;
      if ((ulong)uVar5 != 0) {
        pIVar10 = (pSVar13->_1).interfaceOffsets;
        lVar23 = 0;
        do {
          if (*(long *)((long)&pIVar10->interfaceType + lVar23) == TypeInfo_IEnumerator_GisketchSearchEntry) {
            ppIVar18 = &pSVar13->vtable[*(int *)((long)&pIVar10->offset + lVar23)].methodPtr;
            goto label_03b49973;
          }
          lVar23 = lVar23 + 0x10;
        } while ((ulong)uVar5 << 4 != lVar23);
      }
      ppIVar18 = (Il2CppMethodPointer *)il2cpp_runtime_helper_02300d20(item,TypeInfo_IEnumerator_GisketchSearchEntry,0);
label_03b49973:
      auVar26 = (**ppIVar18)(item,(MethodInfo *)ppIVar18[1]);
      pGVar22 = auVar26._0_8_;
      bVar17 = Gisketch_Aottg2UI_Search_GisketchSearchResults__IsActiveControl
                         (pGVar22,activeScreenId,auVar26._8_8_);
      if ((char)bVar17 == '\0') break;
      if (pGVar22 == (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *)0x0) goto label_03b49da7;
      bVar17 = System_String__IsNullOrEmpty((pGVar22->fields)._TargetId_k__BackingField,(MethodInfo *)0x0);
      if ((char)bVar17 != '\0') break;
      if (__this_06 == (System_Collections_Generic_HashSet_object__o *)0x0) goto label_03b49db1;
      bVar17 = System_Collections_Generic_HashSet_object___Contains
                         (__this_06,(Il2CppObject *)(pGVar22->fields)._TargetId_k__BackingField,MethodInfo_Boolean_Contains);
    } while ((char)bVar17 == '\0');
    lVar23 = MethodInfo_Void_Add;
    if (__this_03 == (System_Collections_Generic_List_GisketchSearchEntry__o *)0x0) {
      il2cpp_runtime_helper_022b2c90();
label_03b49d9d:
      il2cpp_runtime_helper_022b2c90();
      goto label_03b49da2;
    }
    piVar1 = &(__this_03->fields)._version;
    *piVar1 = *piVar1 + 1;
    pGVar12 = (__this_03->fields)._items;
    if (pGVar12 == (Gisketch_Aottg2UI_Search_GisketchSearchEntry_array *)0x0) goto label_03b49d9d;
    uVar8 = (__this_03->fields)._size;
    if (uVar8 < (uint)pGVar12->max_length) {
      (__this_03->fields)._size = uVar8 + 1;
      pGVar12->m_Items[(int)uVar8] = pGVar22;
      il2cpp_runtime_helper_022b4080();
    }
    else {
      System_Collections_Generic_List_object___AddWithResize
                ((System_Collections_Generic_List_object__o *)__this_03,(Il2CppObject *)pGVar22,
                 *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar23 + 0x20) + 0xc0) + 0x70));
    }
    if ((((pGVar22 != (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *)0x0) &&
         (bVar17 = System_String__IsNullOrEmpty((pGVar22->fields)._ScreenId_k__BackingField,(MethodInfo *)0x0)
         , (char)bVar17 == '\0')) &&
        (bVar17 = System_String__IsNullOrEmpty(activeScreenId,(MethodInfo *)0x0), (char)bVar17 == '\0')) &&
       ((bVar17 = System_String__Equals_3af50f0
                            ((pGVar22->fields)._ScreenId_k__BackingField,activeScreenId,5,(MethodInfo *)0x0),
        (char)bVar17 != '\0' &&
        (bVar17 = System_String__IsNullOrEmpty((pGVar22->fields)._TargetId_k__BackingField,(MethodInfo *)0x0),
        (char)bVar17 == '\0')))) {
      if (__this_04 == (System_Collections_Generic_HashSet_object__o *)0x0) goto label_03b49dca;
      System_Collections_Generic_HashSet_object___Add
                (__this_04,(Il2CppObject *)(pGVar22->fields)._TargetId_k__BackingField,MethodInfo_Boolean_Add);
    }
  } while( true );
joined_r0x03b4a097:
  lVar14 = lVar24;
  if ((Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *)item !=
      (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *)0x0) {
    pSVar13 = (System_Collections_Generic_IEqualityComparer_T__c *)
              ((Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *)item)->klass;
    uVar7._0_1_ = (pSVar13->_2).rank;
    uVar7._1_1_ = (pSVar13->_2).minimumAlignment;
    if ((ulong)uVar7 != 0) {
      pIVar10 = (pSVar13->_1).interfaceOffsets;
      lVar24 = 0;
      do {
        if (*(long *)((long)&pIVar10->interfaceType + lVar24) == TypeInfo_IDisposable) {
          ppIVar18 = &pSVar13->vtable[*(int *)((long)&pIVar10->offset + lVar24)].methodPtr;
          goto label_03b4a0ed;
        }
        lVar24 = lVar24 + 0x10;
      } while ((ulong)uVar7 << 4 != lVar24);
    }
    ppIVar18 = (Il2CppMethodPointer *)il2cpp_runtime_helper_02300d20(item,TypeInfo_IDisposable,0);
label_03b4a0ed:
    (**ppIVar18)(item,(MethodInfo *)ppIVar18[1]);
  }
  if (lVar23 == 0) {
    _Unwind_Resume(lVar14);
  }
  lVar24 = il2cpp_runtime_helper_022fefe0();
  lVar23 = lVar14;
  goto joined_r0x03b4a097;
label_03b49d6d:
  il2cpp_runtime_helper_022b2c90();
label_03b49d72:
  __this_02.fields._8_8_ = __this_04;
  __this_02.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff68;
  __this_02.fields._current = _Var28.genericMethod;
  System_Collections_Generic_List_Enumerator_object___Dispose
            (__this_02,(MethodInfo_321A1C0 *)&stack0xffffffffffffff78);
  return __this_03;
}


// Gisketch.Aottg2UI.Search.GisketchSearchResults$$ScreenTitles
// il2cpp: System_Collections_Generic_HashSet_string__o* Gisketch_Aottg2UI_Search_GisketchSearchResults__ScreenTitles (System_Collections_Generic_IEnumerable_GisketchSearchEntry__o* entries, const MethodInfo* method);
// 0x3b4a1f0

System_Collections_Generic_HashSet_string__o *
Gisketch_Aottg2UI_Search_GisketchSearchResults__ScreenTitles
          (System_Collections_Generic_IEnumerable_GisketchSearchEntry__o *entries,MethodInfo *method)

{
  ushort uVar1;
  int iVar2;
  System_Collections_Generic_IEqualityComparer_T__o *comparer;
  Il2CppClass *pIVar3;
  Il2CppRuntimeInterfaceOffsetPair *pIVar4;
  char cVar5;
  int32_t iVar6;
  bool_conflict bVar7;
  System_Collections_Generic_HashSet_object__o *__this;
  VirtualInvokeData *pVVar8;
  undefined8 *puVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long *unaff_R13;
  undefined1 auVar14 [12];
  
  if (g_data_057a9cbc == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_System_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HashSet_string);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IDisposable);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerable_GisketchSearchEntry);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerator_GisketchSearchEntry);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerator);
    il2cpp_runtime_helper_023445d0(&TypeInfo_StringComparer);
    il2cpp_runtime_helper_023445d0(&"screen");
    g_data_057a9cbc = '\x01';
    iVar2 = *(int *)(TypeInfo_StringComparer + 0xe4);
  }
  else {
    iVar2 = *(int *)(TypeInfo_StringComparer + 0xe4);
  }
  if (iVar2 == 0) {
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
  comparer = *(System_Collections_Generic_IEqualityComparer_T__o **)(*(long *)(TypeInfo_StringComparer + 0xb8) + 0x18);
  __this = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor_33e0600(__this,comparer,MethodInfo_HashSet_1_System_String);
  if (entries == (System_Collections_Generic_IEnumerable_GisketchSearchEntry__o *)0x0) {
    if (g_data_057a9cc0 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Empty_d__6);
      g_data_057a9cc0 = '\x01';
    }
    entries = (System_Collections_Generic_IEnumerable_GisketchSearchEntry__o *)
              il2cpp_runtime_helper_023052d0(TypeInfo_Empty_d__6);
    System_Object___ctor((Il2CppObject *)entries,(MethodInfo *)0x0);
    *(undefined4 *)&((Il2CppObject *)(entries + 1))->klass = 0xfffffffe;
    iVar6 = System_Environment__get_CurrentManagedThreadId((MethodInfo *)0x0);
    *(int32_t *)&((Il2CppObject *)(entries + 2))->klass = iVar6;
    if ((Il2CppObject *)entries == (Il2CppObject *)0x0) goto label_03b4a5ef;
  }
  pIVar3 = ((Il2CppObject *)entries)->klass;
  uVar1._0_1_ = (pIVar3->_2).rank;
  uVar1._1_1_ = (pIVar3->_2).minimumAlignment;
  if ((ulong)uVar1 != 0) {
    pIVar4 = (pIVar3->_1).interfaceOffsets;
    lVar11 = 0;
    do {
      if (*(long *)((long)&pIVar4->interfaceType + lVar11) == TypeInfo_IEnumerable_GisketchSearchEntry) {
        pVVar8 = pIVar3->vtable + *(int *)((long)&pIVar4->offset + lVar11);
        goto label_03b4a3f4;
      }
      lVar11 = lVar11 + 0x10;
    } while ((ulong)uVar1 << 4 != lVar11);
  }
  pVVar8 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(entries,TypeInfo_IEnumerable_GisketchSearchEntry,0);
label_03b4a3f4:
  unaff_R13 = (long *)(*pVVar8->methodPtr)(entries,pVVar8->method);
  if (unaff_R13 != (long *)0x0) {
label_03b4a420:
    do {
      lVar11 = *unaff_R13;
      if ((ulong)*(ushort *)(lVar11 + 0x12e) != 0) {
        lVar12 = 0;
        do {
          if (*(long *)(*(long *)(lVar11 + 0xb0) + lVar12) == TypeInfo_IEnumerator) {
            puVar9 = (undefined8 *)
                     ((long)*(int *)(*(long *)(lVar11 + 0xb0) + 8 + lVar12) * 0x10 + lVar11 + 0x138);
            goto label_03b4a483;
          }
          lVar12 = lVar12 + 0x10;
        } while ((ulong)*(ushort *)(lVar11 + 0x12e) << 4 != lVar12);
      }
      puVar9 = (undefined8 *)il2cpp_runtime_helper_02300d20(unaff_R13,TypeInfo_IEnumerator,0);
label_03b4a483:
      cVar5 = (*(code *)*puVar9)(unaff_R13,puVar9[1]);
      if (cVar5 == '\0') {
        lVar11 = 0;
        goto label_03b4a55c;
      }
      lVar11 = *unaff_R13;
      if ((ulong)*(ushort *)(lVar11 + 0x12e) != 0) {
        lVar12 = 0;
        do {
          if (*(long *)(*(long *)(lVar11 + 0xb0) + lVar12) == TypeInfo_IEnumerator_GisketchSearchEntry) {
            puVar9 = (undefined8 *)
                     ((long)*(int *)(*(long *)(lVar11 + 0xb0) + 8 + lVar12) * 0x10 + lVar11 + 0x138);
            goto label_03b4a4f3;
          }
          lVar12 = lVar12 + 0x10;
        } while ((ulong)*(ushort *)(lVar11 + 0x12e) << 4 != lVar12);
      }
      puVar9 = (undefined8 *)il2cpp_runtime_helper_02300d20(unaff_R13,TypeInfo_IEnumerator_GisketchSearchEntry,0);
label_03b4a4f3:
      lVar11 = (*(code *)*puVar9)(unaff_R13,puVar9[1]);
    } while (((lVar11 == 0) ||
             (bVar7 = System_String__Equals_3af50f0
                                (*(System_String_o **)(lVar11 + 0x70),"screen",5,(MethodInfo *)0x0),
             (char)bVar7 == '\0')) ||
            (bVar7 = System_String__IsNullOrEmpty(*(System_String_o **)(lVar11 + 0x58),(MethodInfo *)0x0),
            (char)bVar7 != '\0'));
    if (__this != (System_Collections_Generic_HashSet_object__o *)0x0) {
      System_Collections_Generic_HashSet_object___Add(__this,*(Il2CppObject **)(lVar11 + 0x58),MethodInfo_Boolean_Add);
      goto label_03b4a420;
    }
    il2cpp_runtime_helper_022b2c90();
  }
  il2cpp_runtime_helper_022b2c90();
  while( true ) {
    il2cpp_runtime_helper_022fefe0();
label_03b4a5ef:
    auVar14 = il2cpp_runtime_helper_022b2c90();
    if (auVar14._8_4_ != 1) break;
    plVar10 = (long *)__cxa_begin_catch();
    lVar11 = *plVar10;
    __cxa_end_catch();
label_03b4a55c:
    if (unaff_R13 != (long *)0x0) {
      lVar12 = *unaff_R13;
      if ((ulong)*(ushort *)(lVar12 + 0x12e) != 0) {
        lVar13 = 0;
        do {
          if (*(long *)(*(long *)(lVar12 + 0xb0) + lVar13) == TypeInfo_IDisposable) {
            puVar9 = (undefined8 *)
                     (lVar12 + (long)*(int *)(*(long *)(lVar12 + 0xb0) + 8 + lVar13) * 0x10 + 0x138);
            goto label_03b4a5bd;
          }
          lVar13 = lVar13 + 0x10;
        } while ((ulong)*(ushort *)(lVar12 + 0x12e) << 4 != lVar13);
      }
      puVar9 = (undefined8 *)il2cpp_runtime_helper_02300d20(unaff_R13,TypeInfo_IDisposable,0);
label_03b4a5bd:
      (*(code *)*puVar9)(unaff_R13,puVar9[1]);
    }
    if (lVar11 == 0) {
      return (System_Collections_Generic_HashSet_string__o *)__this;
    }
  }
  if (unaff_R13 != (long *)0x0) {
    lVar11 = *unaff_R13;
    if ((ulong)*(ushort *)(lVar11 + 0x12e) != 0) {
      lVar12 = 0;
      do {
        if (*(long *)(*(long *)(lVar11 + 0xb0) + lVar12) == TypeInfo_IDisposable) {
          puVar9 = (undefined8 *)
                   (lVar11 + (long)*(int *)(*(long *)(lVar11 + 0xb0) + 8 + lVar12) * 0x10 + 0x138);
          goto label_03b4a6ad;
        }
        lVar12 = lVar12 + 0x10;
      } while ((ulong)*(ushort *)(lVar11 + 0x12e) << 4 != lVar12);
    }
    puVar9 = (undefined8 *)il2cpp_runtime_helper_02300d20(unaff_R13,TypeInfo_IDisposable,0);
label_03b4a6ad:
    (*(code *)*puVar9)(unaff_R13,puVar9[1]);
  }
  _Unwind_Resume(auVar14._0_8_);
}


// Gisketch.Aottg2UI.Search.GisketchSearchResults$$IsDuplicateMainMenuScreenButton
// il2cpp: bool Gisketch_Aottg2UI_Search_GisketchSearchResults__IsDuplicateMainMenuScreenButton (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o* entry, System_String_o* activeScreenId, System_Collections_Generic_HashSet_string__o* screenTitles, const MethodInfo* method);
// 0x3b4a8c0

bool_conflict
Gisketch_Aottg2UI_Search_GisketchSearchResults__IsDuplicateMainMenuScreenButton
          (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *entry,System_String_o *activeScreenId,
          System_Collections_Generic_HashSet_string__o *screenTitles,MethodInfo *method)

{
  bool_conflict bVar1;
  uint uVar2;
  System_String_o *value;
  System_String_o *__this;
  
  if (g_data_057a9cbd == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Contains);
    il2cpp_runtime_helper_023445d0(&"main-menu");
    il2cpp_runtime_helper_023445d0(&"main-menu-option-");
    g_data_057a9cbd = '\x01';
  }
  bVar1 = System_String__Equals_3af50f0(activeScreenId,"main-menu",5,(MethodInfo *)0x0);
  if ((entry != (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *)0x0) && ((char)bVar1 != '\0')) {
    value = (System_String_o *)0x0;
    bVar1 = System_String__IsNullOrEmpty((entry->fields)._TargetId_k__BackingField,(MethodInfo *)0x0);
    if ((char)bVar1 == '\0') {
      __this = (entry->fields)._TargetId_k__BackingField;
      if (__this == (System_String_o *)0x0) {
        il2cpp_runtime_helper_022b2c90();
        if (g_data_057a9cbe == '\0') {
          il2cpp_runtime_helper_023445d0(&"screen");
          il2cpp_runtime_helper_023445d0(&"section");
          g_data_057a9cbe = '\x01';
        }
        if (__this == (System_String_o *)0x0) {
          uVar2 = 0;
        }
        else {
          uVar2 = 0;
          bVar1 = System_String__IsNullOrEmpty(__this[1].monitor,(MethodInfo *)0x0);
          if ((char)bVar1 == '\0') {
            uVar2 = 0;
            bVar1 = System_String__IsNullOrEmpty(value,(MethodInfo *)0x0);
            if ((char)bVar1 == '\0') {
              uVar2 = 0;
              bVar1 = System_String__Equals_3af50f0(__this[1].monitor,value,5,(MethodInfo *)0x0);
              if ((char)bVar1 != '\0') {
                uVar2 = 0;
                bVar1 = System_String__Equals_3af50f0
                                  ((System_String_o *)__this[4].fields,"screen",5,(MethodInfo *)0x0);
                if ((char)bVar1 == '\0') {
                  uVar2 = System_String__Equals_3af50f0
                                    ((System_String_o *)__this[4].fields,"section",5,(MethodInfo *)0x0);
                  uVar2 = uVar2 ^ 1;
                }
              }
            }
          }
        }
        return uVar2;
      }
      bVar1 = System_String__StartsWith_3af5570(__this,"main-menu-option-",5,(MethodInfo *)0x0);
      if ((screenTitles != (System_Collections_Generic_HashSet_string__o *)0x0) && ((char)bVar1 != '\0')) {
        bVar1 = System_Collections_Generic_HashSet_object___Contains
                          ((System_Collections_Generic_HashSet_object__o *)screenTitles,
                           (Il2CppObject *)(entry->fields)._Title_k__BackingField,MethodInfo_Boolean_Contains);
        return bVar1;
      }
    }
  }
  return 0;
}


// Gisketch.Aottg2UI.Search.GisketchSearchResults$$IsActive
// il2cpp: bool Gisketch_Aottg2UI_Search_GisketchSearchResults__IsActive (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o* entry, System_String_o* activeScreenId, const MethodInfo* method);
// 0x3b4aa50

bool_conflict
Gisketch_Aottg2UI_Search_GisketchSearchResults__IsActive
          (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *entry,System_String_o *activeScreenId,
          MethodInfo *method)

{
  int lengthA;
  System_String_o *strA;
  bool_conflict bVar1;
  int32_t iVar2;
  undefined7 uVar3;
  
  if (((entry != (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *)0x0) &&
      (bVar1 = System_String__IsNullOrEmpty((entry->fields)._ScreenId_k__BackingField,(MethodInfo *)0x0),
      (char)bVar1 == '\0')) &&
     (bVar1 = System_String__IsNullOrEmpty(activeScreenId,(MethodInfo *)0x0), (char)bVar1 == '\0')) {
    strA = (entry->fields)._ScreenId_k__BackingField;
    if (g_data_057aa14b == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_CompareInfo);
      il2cpp_runtime_helper_023445d0(&TypeInfo_CultureInfo);
      g_data_057aa14b = '\x01';
    }
    uVar3 = (undefined7)((ulong)strA >> 8);
    if (strA == activeScreenId) {
      bVar1 = (bool_conflict)CONCAT71(uVar3,1);
    }
    else if ((strA == (System_String_o *)0x0) || (activeScreenId == (System_String_o *)0x0)) {
      bVar1 = 0;
    }
    else {
      lengthA = (strA->fields)._stringLength;
      if (lengthA == (activeScreenId->fields)._stringLength) {
        if (*(int *)(TypeInfo_CompareInfo + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        iVar2 = System_Globalization_CompareInfo__CompareOrdinalIgnoreCase
                          (strA,0,lengthA,activeScreenId,0,lengthA,(MethodInfo *)0x0);
        bVar1 = (bool_conflict)CONCAT71(uVar3,iVar2 == 0);
      }
      else {
        bVar1 = 0;
      }
    }
    return bVar1;
  }
  return 0;
}


// Gisketch.Aottg2UI.Search.GisketchSearchResults$$IsActiveControl
// il2cpp: bool Gisketch_Aottg2UI_Search_GisketchSearchResults__IsActiveControl (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o* entry, System_String_o* activeScreenId, const MethodInfo* method);
// 0x3b4a990

bool_conflict
Gisketch_Aottg2UI_Search_GisketchSearchResults__IsActiveControl
          (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *entry,System_String_o *activeScreenId,
          MethodInfo *method)

{
  bool_conflict bVar1;
  uint uVar2;
  
  if (g_data_057a9cbe == '\0') {
    il2cpp_runtime_helper_023445d0(&"screen");
    il2cpp_runtime_helper_023445d0(&"section");
    g_data_057a9cbe = '\x01';
  }
  if (entry == (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = 0;
    bVar1 = System_String__IsNullOrEmpty((entry->fields)._ScreenId_k__BackingField,(MethodInfo *)0x0);
    if ((char)bVar1 == '\0') {
      uVar2 = 0;
      bVar1 = System_String__IsNullOrEmpty(activeScreenId,(MethodInfo *)0x0);
      if ((char)bVar1 == '\0') {
        uVar2 = 0;
        bVar1 = System_String__Equals_3af50f0
                          ((entry->fields)._ScreenId_k__BackingField,activeScreenId,5,(MethodInfo *)0x0);
        if ((char)bVar1 != '\0') {
          uVar2 = 0;
          bVar1 = System_String__Equals_3af50f0
                            ((entry->fields)._Kind_k__BackingField,"screen",5,(MethodInfo *)0x0);
          if ((char)bVar1 == '\0') {
            uVar2 = System_String__Equals_3af50f0
                              ((entry->fields)._Kind_k__BackingField,"section",5,(MethodInfo *)0x0);
            uVar2 = uVar2 ^ 1;
          }
        }
      }
    }
  }
  return uVar2;
}


// Gisketch.Aottg2UI.Search.GisketchSearchResults$$IsLiveUsable
// il2cpp: bool Gisketch_Aottg2UI_Search_GisketchSearchResults__IsLiveUsable (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o* entry, const MethodInfo* method);
// 0x3b4a740

bool_conflict
Gisketch_Aottg2UI_Search_GisketchSearchResults__IsLiveUsable
          (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *entry,MethodInfo *method)

{
  UnityEngine_GameObject_o *pUVar1;
  char cVar2;
  bool_conflict bVar3;
  uint uVar4;
  Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *x;
  UnityEngine_Object_o *pUVar5;
  System_Collections_Generic_HashSet_object__o *__this;
  System_String_o *value;
  Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *pGVar6;
  System_String_o *__this_00;
  
  pGVar6 = entry;
  if (g_data_057a9cbf == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchFocusRing_GetComponent_GisketchFocusRing);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Selectable_GetComponent_Selectable);
    pGVar6 = (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *)&TypeInfo_Object;
    il2cpp_runtime_helper_023445d0();
    g_data_057a9cbf = '\x01';
  }
  if (entry != (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *)0x0) {
    pUVar5 = (UnityEngine_Object_o *)(entry->fields)._Target_k__BackingField;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    method = (MethodInfo *)0x0;
    bVar3 = UnityEngine_Object__op_Equality(pUVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar3 != '\0') {
      return (bool_conflict)CONCAT71((int7)((ulong)pUVar5 >> 8),1);
    }
    pUVar1 = (entry->fields)._Target_k__BackingField;
    pGVar6 = (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *)0x0;
    if (pUVar1 != (UnityEngine_GameObject_o *)0x0) {
      method = MethodInfo_Selectable_GetComponent_Selectable;
      x = (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *)
          UnityEngine_GameObject__GetComponent_object_(pUVar1,(MethodInfo_255A0F0 *)MethodInfo_Selectable_GetComponent_Selectable);
      pUVar1 = (entry->fields)._Target_k__BackingField;
      pGVar6 = (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *)0x0;
      if (pUVar1 != (UnityEngine_GameObject_o *)0x0) {
        bVar3 = UnityEngine_GameObject__get_activeInHierarchy(pUVar1,(MethodInfo *)0x0);
        if ((char)bVar3 != '\0') {
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          method = (MethodInfo *)0x0;
          pGVar6 = x;
          bVar3 = UnityEngine_Object__op_Inequality
                            ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if ((char)bVar3 != '\0') {
            if (x == (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *)0x0) goto label_03b4a8b2;
            cVar2 = (*(code *)((UnityEngine_Object_c *)x->klass)[1]._1.declaringType)
                              (x,((UnityEngine_Object_c *)x->klass)[1]._1.parent);
            if (cVar2 != '\0') {
              method = (MethodInfo *)((UnityEngine_Object_c *)x->klass)[1].vtable._1_Finalize.methodPtr;
              cVar2 = (*(code *)((UnityEngine_Object_c *)x->klass)[1].vtable._0_Equals.method)(x);
              if ((cVar2 != '\0') && (*(int *)&(x->fields)._ScreenTitle_k__BackingField != 0)) {
                pUVar1 = (entry->fields)._Target_k__BackingField;
                pGVar6 = (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *)0x0;
                if (pUVar1 != (UnityEngine_GameObject_o *)0x0) {
                  pUVar5 = (UnityEngine_Object_o *)
                           UnityEngine_GameObject__GetComponent_object_(pUVar1,MethodInfo_GisketchFocusRing_GetComponent_GisketchFocusRing);
                  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                    il2cpp_runtime_helper_02337ed0();
                  }
                  bVar3 = UnityEngine_Object__op_Inequality
                                    (pUVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
                  return bVar3;
                }
                goto label_03b4a8b2;
              }
            }
          }
        }
        return 0;
      }
    }
  }
label_03b4a8b2:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057a9cbd == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Contains);
    il2cpp_runtime_helper_023445d0(&"main-menu");
    il2cpp_runtime_helper_023445d0(&"main-menu-option-");
    g_data_057a9cbd = '\x01';
  }
  bVar3 = System_String__Equals_3af50f0((System_String_o *)method,"main-menu",5,(MethodInfo *)0x0);
  if ((pGVar6 != (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *)0x0) && ((char)bVar3 != '\0')) {
    value = (System_String_o *)0x0;
    bVar3 = System_String__IsNullOrEmpty((pGVar6->fields)._TargetId_k__BackingField,(MethodInfo *)0x0);
    if ((char)bVar3 == '\0') {
      __this_00 = (pGVar6->fields)._TargetId_k__BackingField;
      if (__this_00 == (System_String_o *)0x0) {
        il2cpp_runtime_helper_022b2c90();
        if (g_data_057a9cbe == '\0') {
          il2cpp_runtime_helper_023445d0(&"screen");
          il2cpp_runtime_helper_023445d0(&"section");
          g_data_057a9cbe = '\x01';
        }
        if (__this_00 == (System_String_o *)0x0) {
          uVar4 = 0;
        }
        else {
          uVar4 = 0;
          bVar3 = System_String__IsNullOrEmpty(__this_00[1].monitor,(MethodInfo *)0x0);
          if ((char)bVar3 == '\0') {
            uVar4 = 0;
            bVar3 = System_String__IsNullOrEmpty(value,(MethodInfo *)0x0);
            if ((char)bVar3 == '\0') {
              uVar4 = 0;
              bVar3 = System_String__Equals_3af50f0(__this_00[1].monitor,value,5,(MethodInfo *)0x0);
              if ((char)bVar3 != '\0') {
                uVar4 = 0;
                bVar3 = System_String__Equals_3af50f0
                                  ((System_String_o *)__this_00[4].fields,"screen",5,(MethodInfo *)0x0);
                if ((char)bVar3 == '\0') {
                  uVar4 = System_String__Equals_3af50f0
                                    ((System_String_o *)__this_00[4].fields,"section",5,(MethodInfo *)0x0);
                  uVar4 = uVar4 ^ 1;
                }
              }
            }
          }
        }
        return uVar4;
      }
      bVar3 = System_String__StartsWith_3af5570(__this_00,"main-menu-option-",5,(MethodInfo *)0x0);
      if ((__this != (System_Collections_Generic_HashSet_object__o *)0x0) && ((char)bVar3 != '\0')) {
        bVar3 = System_Collections_Generic_HashSet_object___Contains
                          (__this,(Il2CppObject *)(pGVar6->fields)._Title_k__BackingField,MethodInfo_Boolean_Contains);
        return bVar3;
      }
    }
  }
  return 0;
}


// Gisketch.Aottg2UI.Search.GisketchSearchResults$$Empty
// il2cpp: System_Collections_Generic_IEnumerable_GisketchSearchEntry__o* Gisketch_Aottg2UI_Search_GisketchSearchResults__Empty (const MethodInfo* method);
// 0x3b4a6f0

System_Collections_Generic_IEnumerable_GisketchSearchEntry__o *
Gisketch_Aottg2UI_Search_GisketchSearchResults__Empty(MethodInfo *method)

{
  int32_t iVar1;
  Il2CppObject *__this;
  
  if (g_data_057a9cc0 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Empty_d__6);
    g_data_057a9cc0 = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_Empty_d__6);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  *(undefined4 *)&__this[1].klass = 0xfffffffe;
  iVar1 = System_Environment__get_CurrentManagedThreadId((MethodInfo *)0x0);
  *(int32_t *)&__this[2].klass = iVar1;
  return (System_Collections_Generic_IEnumerable_GisketchSearchEntry__o *)__this;
}


