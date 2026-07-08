// Type: Gisketch.Aottg2UI.Search.GisketchSearchResults
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Search/GisketchSearchResults.cs
// Prior source: NEW in this update
// --------------------------------

// Gisketch.Aottg2UI.Search.GisketchSearchResults.<Empty>d__6$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Search_GisketchSearchResults__Empty_d__6___ctor (Gisketch_Aottg2UI_Search_GisketchSearchResults__Empty_d__6_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x3ae0420

void Gisketch_Aottg2UI_Search_GisketchSearchResults_<Empty>d__6___ctor
               (Gisketch_Aottg2UI_Search_GisketchSearchResults__Empty_d__6_o *__this,
               int32_t __1__state,MethodInfo *method)

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
// 0x3ae0450

void Gisketch_Aottg2UI_Search_GisketchSearchResults_<Empty>d__6__System_IDisposable_Dispose
               (Gisketch_Aottg2UI_Search_GisketchSearchResults__Empty_d__6_o *__this,
               MethodInfo *method)

{
  return;
}


// Gisketch.Aottg2UI.Search.GisketchSearchResults.<Empty>d__6$$MoveNext
// il2cpp: bool Gisketch_Aottg2UI_Search_GisketchSearchResults__Empty_d__6__MoveNext (Gisketch_Aottg2UI_Search_GisketchSearchResults__Empty_d__6_o* __this, const MethodInfo* method);
// 0x3ae0460

bool_conflict
Gisketch_Aottg2UI_Search_GisketchSearchResults_<Empty>d__6__MoveNext
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
// 0x3ae0480

Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *
Gisketch_Aottg2UI_Search_GisketchSearchResults_<Empty>d__6__System_Collections_Generic_IEnumerator<Gisketch_Aottg2UI_Search_GisketchSearchEntry>_get_Current
          (Gisketch_Aottg2UI_Search_GisketchSearchResults__Empty_d__6_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// Gisketch.Aottg2UI.Search.GisketchSearchResults.<Empty>d__6$$System.Collections.IEnumerator.Reset
// il2cpp: void Gisketch_Aottg2UI_Search_GisketchSearchResults__Empty_d__6__System_Collections_IEnumerator_Reset (Gisketch_Aottg2UI_Search_GisketchSearchResults__Empty_d__6_o* __this, const MethodInfo* method);
// 0x3ae0490

void Gisketch_Aottg2UI_Search_GisketchSearchResults_<Empty>d__6__System_Collections_IEnumerator_Reset
               (Gisketch_Aottg2UI_Search_GisketchSearchResults__Empty_d__6_o *__this,
               MethodInfo *method)

{
  undefined8 uVar1;
  System_NotSupportedException_o *__this_00;
  
  uVar1 = il2cpp_init_method_metadata(&TypeInfo_NotSupportedException);
  __this_00 = (System_NotSupportedException_o *)il2cpp_runtime_glue(uVar1);
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  uVar1 = il2cpp_init_method_metadata(&MethodInfo_Void_System_Collections_IEnumerator_Reset);
                    /* WARNING: Subroutine does not return */
  il2cpp_glue_02274a00(__this_00,uVar1);
}


// Gisketch.Aottg2UI.Search.GisketchSearchResults.<Empty>d__6$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* Gisketch_Aottg2UI_Search_GisketchSearchResults__Empty_d__6__System_Collections_IEnumerator_get_Current (Gisketch_Aottg2UI_Search_GisketchSearchResults__Empty_d__6_o* __this, const MethodInfo* method);
// 0x3ae04d0

Il2CppObject *
Gisketch_Aottg2UI_Search_GisketchSearchResults_<Empty>d__6__System_Collections_IEnumerator_get_Current
          (Gisketch_Aottg2UI_Search_GisketchSearchResults__Empty_d__6_o *__this,MethodInfo *method)

{
  return (Il2CppObject *)(__this->fields).__2__current;
}


// Gisketch.Aottg2UI.Search.GisketchSearchResults.<Empty>d__6$$System.Collections.Generic.IEnumerable<Gisketch.Aottg2UI.Search.GisketchSearchEntry>.GetEnumerator
// il2cpp: System_Collections_Generic_IEnumerator_GisketchSearchEntry__o* Gisketch_Aottg2UI_Search_GisketchSearchResults__Empty_d__6__System_Collections_Generic_IEnumerable_Gisketch_Aottg2UI_Search_GisketchSearchEntry__GetEnumerator (Gisketch_Aottg2UI_Search_GisketchSearchResults__Empty_d__6_o* __this, const MethodInfo* method);
// 0x3ae04e0

System_Collections_Generic_IEnumerator_GisketchSearchEntry__o *
Gisketch_Aottg2UI_Search_GisketchSearchResults_<Empty>d__6__System_Collections_Generic_IEnumerable<Gisketch_Aottg2UI_Search_GisketchSearchEntry>_GetEnumerator
          (Gisketch_Aottg2UI_Search_GisketchSearchResults__Empty_d__6_o *__this,MethodInfo *method)

{
  int iVar1;
  int32_t iVar2;
  Il2CppObject *__this_00;
  
  if (DAT_057013a1 == '\0') {
    il2cpp_init_method_metadata();
    DAT_057013a1 = '\x01';
  }
  if (((__this->fields).__1__state == -2) &&
     (iVar1 = (__this->fields).__l__initialThreadId,
     iVar2 = System_Environment__get_CurrentManagedThreadId((MethodInfo *)0x0), iVar1 == iVar2)) {
    (__this->fields).__1__state = 0;
    return (System_Collections_Generic_IEnumerator_GisketchSearchEntry__o *)__this;
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_Empty_d__6);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  *(undefined4 *)&__this_00[1].klass = 0;
  iVar2 = System_Environment__get_CurrentManagedThreadId((MethodInfo *)0x0);
  *(int32_t *)&__this_00[2].klass = iVar2;
  return (System_Collections_Generic_IEnumerator_GisketchSearchEntry__o *)__this_00;
}


// Gisketch.Aottg2UI.Search.GisketchSearchResults.<Empty>d__6$$System.Collections.IEnumerable.GetEnumerator
// il2cpp: System_Collections_IEnumerator_o* Gisketch_Aottg2UI_Search_GisketchSearchResults__Empty_d__6__System_Collections_IEnumerable_GetEnumerator (Gisketch_Aottg2UI_Search_GisketchSearchResults__Empty_d__6_o* __this, const MethodInfo* method);
// 0x3ae0560

System_Collections_IEnumerator_o *
Gisketch_Aottg2UI_Search_GisketchSearchResults_<Empty>d__6__System_Collections_IEnumerable_GetEnumerator
          (Gisketch_Aottg2UI_Search_GisketchSearchResults__Empty_d__6_o *__this,MethodInfo *method)

{
  int iVar1;
  int32_t iVar2;
  Il2CppObject *__this_00;
  
  if (DAT_057013a1 == '\0') {
    il2cpp_init_method_metadata();
    DAT_057013a1 = '\x01';
  }
  if (((__this->fields).__1__state == -2) &&
     (iVar1 = (__this->fields).__l__initialThreadId,
     iVar2 = System_Environment__get_CurrentManagedThreadId((MethodInfo *)0x0), iVar1 == iVar2)) {
    (__this->fields).__1__state = 0;
    return (System_Collections_IEnumerator_o *)__this;
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_Empty_d__6);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  *(undefined4 *)&__this_00[1].klass = 0;
  iVar2 = System_Environment__get_CurrentManagedThreadId((MethodInfo *)0x0);
  *(int32_t *)&__this_00[2].klass = iVar2;
  return (System_Collections_IEnumerator_o *)__this_00;
}


// Gisketch.Aottg2UI.Search.GisketchSearchResults$$Merge
// il2cpp: System_Collections_Generic_List_GisketchSearchEntry__o* Gisketch_Aottg2UI_Search_GisketchSearchResults__Merge (System_Collections_Generic_IEnumerable_GisketchSearchEntry__o* manifest, System_Collections_Generic_IEnumerable_GisketchSearchEntry__o* live, System_String_o* activeScreenId, const MethodInfo* method);
// 0x3adebb0

/* WARNING: Removing unreachable block (ram,0x03adf4c5) */
/* WARNING: Removing unreachable block (ram,0x03adf763) */
/* WARNING: Removing unreachable block (ram,0x03adf138) */

System_Collections_Generic_List_GisketchSearchEntry__o *
Gisketch_Aottg2UI_Search_GisketchSearchResults__Merge
          (System_Collections_Generic_IEnumerable_GisketchSearchEntry__o *manifest,
          System_Collections_Generic_IEnumerable_GisketchSearchEntry__o *live,
          System_String_o *activeScreenId,MethodInfo *method)

{
  int32_t *piVar1;
  ushort uVar2;
  ushort uVar3;
  int iVar4;
  uint uVar5;
  System_Collections_Generic_IEqualityComparer_T__o *comparer;
  Il2CppClass *pIVar6;
  Il2CppRuntimeInterfaceOffsetPair *pIVar7;
  System_Object_array *pSVar8;
  Gisketch_Aottg2UI_Search_GisketchSearchEntry_array *pGVar9;
  System_Collections_Generic_List_Enumerator_object__o __this;
  System_Collections_Generic_List_Enumerator_object__o __this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  char cVar10;
  int32_t iVar11;
  bool_conflict bVar12;
  System_Collections_Generic_List_GisketchSearchEntry__o *__this_03;
  System_Collections_Generic_HashSet_object__o *__this_04;
  System_Collections_Generic_HashSet_string__o *screenTitles;
  System_Collections_Generic_List_object__o *__this_05;
  System_Collections_Generic_HashSet_object__o *__this_06;
  VirtualInvokeData *pVVar13;
  long *plVar14;
  undefined8 *puVar15;
  MethodInfo *pMVar16;
  Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *pGVar17;
  MethodInfo *method_00;
  long lVar18;
  long lVar19;
  long lVar20;
  undefined1 auVar21 [16];
  _union_247328 _Var22;
  _union_247328 local_48 [2];
  Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *local_38;
  
  if (DAT_0570139b == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_GisketchSearchEntry_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Add);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Contains);
    il2cpp_init_method_metadata(&MethodInfo_HashSet_1_System_String);
    il2cpp_init_method_metadata(&TypeInfo_HashSet_string);
    il2cpp_init_method_metadata(&TypeInfo_IDisposable);
    il2cpp_init_method_metadata(&TypeInfo_IEnumerable_GisketchSearchEntry);
    il2cpp_init_method_metadata(&TypeInfo_IEnumerator_GisketchSearchEntry);
    il2cpp_init_method_metadata(&TypeInfo_IEnumerator);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_List_1_T__Enumerator_Gisketch_Aottg2UI_Search_Gi);
    il2cpp_init_method_metadata(&MethodInfo_List_1_Gisketch_Aottg2UI_Search_GisketchSearchEn);
    il2cpp_init_method_metadata(&TypeInfo_List_GisketchSearchEntry);
    il2cpp_init_method_metadata(&TypeInfo_StringComparer);
    DAT_0570139b = '\x01';
  }
  __this_03 = (System_Collections_Generic_List_GisketchSearchEntry__o *)
              il2cpp_runtime_glue(TypeInfo_List_GisketchSearchEntry);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_03,MethodInfo_List_1_Gisketch_Aottg2UI_Search_GisketchSearchEn);
  if (*(int *)(TypeInfo_StringComparer + 0xe4) == 0) {
    il2cpp_init_class();
    if (DAT_0570136f != '\0') goto LAB_03adecf7;
LAB_03adee77:
    il2cpp_init_method_metadata(&TypeInfo_StringComparer);
    DAT_0570136f = '\x01';
    iVar4 = *(int *)(TypeInfo_StringComparer + 0xe4);
  }
  else {
    if (DAT_0570136f == '\0') goto LAB_03adee77;
LAB_03adecf7:
    iVar4 = *(int *)(TypeInfo_StringComparer + 0xe4);
  }
  if (iVar4 == 0) {
    il2cpp_init_class();
  }
  pMVar16 = *(MethodInfo **)(*(long *)(TypeInfo_StringComparer + 0xb8) + 0x18);
  __this_04 = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_glue(TypeInfo_HashSet_string);
  System_Collections_Generic_HashSet<object>___ctor
            (__this_04,(System_Collections_Generic_IEqualityComparer_T__o *)pMVar16,MethodInfo_HashSet_1_System_String);
  screenTitles = Gisketch_Aottg2UI_Search_GisketchSearchResults__ScreenTitles(manifest,pMVar16);
  __this_05 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_glue(TypeInfo_List_GisketchSearchEntry);
  System_Collections_Generic_List<object>___ctor(__this_05,MethodInfo_List_1_Gisketch_Aottg2UI_Search_GisketchSearchEn);
  if (DAT_0570136f == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_StringComparer);
    DAT_0570136f = '\x01';
    iVar4 = *(int *)(TypeInfo_StringComparer + 0xe4);
  }
  else {
    iVar4 = *(int *)(TypeInfo_StringComparer + 0xe4);
  }
  if (iVar4 == 0) {
    il2cpp_init_class();
  }
  comparer = *(System_Collections_Generic_IEqualityComparer_T__o **)
              (*(long *)(TypeInfo_StringComparer + 0xb8) + 0x18);
  __this_06 = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_glue(TypeInfo_HashSet_string);
  System_Collections_Generic_HashSet<object>___ctor(__this_06,comparer,MethodInfo_HashSet_1_System_String);
  if (live == (System_Collections_Generic_IEnumerable_GisketchSearchEntry__o *)0x0) {
    if (DAT_057013a0 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_Empty_d__6);
      DAT_057013a0 = '\x01';
    }
    live = (System_Collections_Generic_IEnumerable_GisketchSearchEntry__o *)
           il2cpp_runtime_glue(TypeInfo_Empty_d__6);
    System_Object___ctor((Il2CppObject *)live,(MethodInfo *)0x0);
    *(undefined4 *)&((Il2CppObject *)(live + 1))->klass = 0xfffffffe;
    iVar11 = System_Environment__get_CurrentManagedThreadId((MethodInfo *)0x0);
    *(int32_t *)&((Il2CppObject *)(live + 2))->klass = iVar11;
    if ((Il2CppObject *)live == (Il2CppObject *)0x0) {
LAB_03adf74f:
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
  }
  pIVar6 = ((Il2CppObject *)live)->klass;
  uVar2._0_1_ = (pIVar6->_2).rank;
  uVar2._1_1_ = (pIVar6->_2).minimumAlignment;
  if ((ulong)uVar2 != 0) {
    pIVar7 = (pIVar6->_1).interfaceOffsets;
    lVar18 = 0;
    do {
      if (*(long *)((long)&pIVar7->interfaceType + lVar18) == TypeInfo_IEnumerable_GisketchSearchEntry) {
        pVVar13 = pIVar6->vtable + *(int *)((long)&pIVar7->offset + lVar18);
        goto LAB_03adeeef;
      }
      lVar18 = lVar18 + 0x10;
    } while ((ulong)uVar2 << 4 != lVar18);
  }
  pVVar13 = (VirtualInvokeData *)il2cpp_runtime_glue(live,TypeInfo_IEnumerable_GisketchSearchEntry,0);
LAB_03adeeef:
  plVar14 = (long *)(*pVVar13->methodPtr)(live,pVVar13->method);
  if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  lVar18 = 0;
  do {
    lVar20 = *plVar14;
    if ((ulong)*(ushort *)(lVar20 + 0x12e) != 0) {
      lVar19 = 0;
      do {
        if (*(long *)(*(long *)(lVar20 + 0xb0) + lVar19) == TypeInfo_IEnumerator) {
          puVar15 = (undefined8 *)
                    ((long)*(int *)(*(long *)(lVar20 + 0xb0) + 8 + lVar19) * 0x10 + lVar20 + 0x138);
          goto LAB_03adef73;
        }
        lVar19 = lVar19 + 0x10;
      } while ((ulong)*(ushort *)(lVar20 + 0x12e) << 4 != lVar19);
    }
    puVar15 = (undefined8 *)il2cpp_runtime_glue(plVar14,TypeInfo_IEnumerator,0);
LAB_03adef73:
    cVar10 = (*(code *)*puVar15)();
    if (cVar10 == '\0') {
      if (plVar14 == (long *)0x0) goto LAB_03adf126;
      lVar20 = *plVar14;
      if ((ulong)*(ushort *)(lVar20 + 0x12e) == 0) goto LAB_03adf0ff;
      lVar19 = 0;
      break;
    }
    lVar20 = *plVar14;
    if ((ulong)*(ushort *)(lVar20 + 0x12e) != 0) {
      lVar19 = 0;
      do {
        if (*(long *)(*(long *)(lVar20 + 0xb0) + lVar19) == TypeInfo_IEnumerator_GisketchSearchEntry) {
          pMVar16 = (MethodInfo *)
                    ((long)*(int *)(*(long *)(lVar20 + 0xb0) + 8 + lVar19) * 0x10 + lVar20 + 0x138);
          goto LAB_03adefe3;
        }
        lVar19 = lVar19 + 0x10;
      } while ((ulong)*(ushort *)(lVar20 + 0x12e) << 4 != lVar19);
    }
    pMVar16 = (MethodInfo *)il2cpp_runtime_glue(plVar14,TypeInfo_IEnumerator_GisketchSearchEntry,0);
LAB_03adefe3:
    method_00 = (MethodInfo *)pMVar16->virtualMethodPointer;
    pGVar17 = (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *)(*pMVar16->methodPointer)();
    if (((pGVar17 != (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *)0x0) &&
        (bVar12 = Gisketch_Aottg2UI_Search_GisketchSearchResults__IsLiveUsable(pGVar17,method_00),
        (char)bVar12 != '\0')) &&
       (bVar12 = Gisketch_Aottg2UI_Search_GisketchSearchResults__IsDuplicateMainMenuScreenButton
                           (pGVar17,activeScreenId,screenTitles,pMVar16), lVar20 = MethodInfo_Void_Add,
       (char)bVar12 == '\0')) {
      if (__this_05 == (System_Collections_Generic_List_object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      piVar1 = &(__this_05->fields)._version;
      *piVar1 = *piVar1 + 1;
      pSVar8 = (__this_05->fields)._items;
      if (pSVar8 == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      uVar5 = (__this_05->fields)._size;
      if (uVar5 < (uint)pSVar8->max_length) {
        (__this_05->fields)._size = uVar5 + 1;
        pSVar8->m_Items[(int)uVar5] = (Il2CppObject *)pGVar17;
        il2cpp_runtime_glue(pSVar8->m_Items + (int)uVar5);
      }
      else {
        System_Collections_Generic_List<object>__AddWithResize
                  (__this_05,(Il2CppObject *)pGVar17,
                   *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar20 + 0x20) + 0xc0) + 0x70));
      }
      bVar12 = System_String__IsNullOrEmpty
                         ((pGVar17->fields)._TargetId_k__BackingField,(MethodInfo *)0x0);
      if ((char)bVar12 == '\0') {
        if (__this_06 == (System_Collections_Generic_HashSet_object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        System_Collections_Generic_HashSet<object>__Add
                  (__this_06,(Il2CppObject *)(pGVar17->fields)._TargetId_k__BackingField,
                   MethodInfo_Boolean_Add);
      }
    }
  } while( true );
  while (lVar19 = lVar19 + 0x10, (ulong)*(ushort *)(lVar20 + 0x12e) << 4 != lVar19) {
    if (*(long *)(*(long *)(lVar20 + 0xb0) + lVar19) == TypeInfo_IDisposable) {
      puVar15 = (undefined8 *)
                (lVar20 + (long)*(int *)(*(long *)(lVar20 + 0xb0) + 8 + lVar19) * 0x10 + 0x138);
      goto LAB_03adf11d;
    }
  }
LAB_03adf0ff:
  puVar15 = (undefined8 *)il2cpp_runtime_glue(plVar14,TypeInfo_IDisposable,0);
LAB_03adf11d:
  (*(code *)*puVar15)(plVar14);
LAB_03adf126:
  if (lVar18 != 0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_glue_022c0ed0();
  }
  if (manifest == (System_Collections_Generic_IEnumerable_GisketchSearchEntry__o *)0x0) {
    if (DAT_057013a0 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_Empty_d__6);
      DAT_057013a0 = '\x01';
    }
    manifest = (System_Collections_Generic_IEnumerable_GisketchSearchEntry__o *)
               il2cpp_runtime_glue(TypeInfo_Empty_d__6);
    System_Object___ctor((Il2CppObject *)manifest,(MethodInfo *)0x0);
    *(undefined4 *)&((Il2CppObject *)(manifest + 1))->klass = 0xfffffffe;
    iVar11 = System_Environment__get_CurrentManagedThreadId((MethodInfo *)0x0);
    *(int32_t *)&((Il2CppObject *)(manifest + 2))->klass = iVar11;
    if ((Il2CppObject *)manifest == (Il2CppObject *)0x0) goto LAB_03adf74f;
  }
  pIVar6 = ((Il2CppObject *)manifest)->klass;
  uVar3._0_1_ = (pIVar6->_2).rank;
  uVar3._1_1_ = (pIVar6->_2).minimumAlignment;
  if ((ulong)uVar3 != 0) {
    pIVar7 = (pIVar6->_1).interfaceOffsets;
    lVar20 = 0;
    do {
      if (*(long *)((long)&pIVar7->interfaceType + lVar20) == TypeInfo_IEnumerable_GisketchSearchEntry) {
        pVVar13 = pIVar6->vtable + *(int *)((long)&pIVar7->offset + lVar20);
        goto LAB_03adf201;
      }
      lVar20 = lVar20 + 0x10;
    } while ((ulong)uVar3 << 4 != lVar20);
  }
  pVVar13 = (VirtualInvokeData *)il2cpp_runtime_glue(manifest,TypeInfo_IEnumerable_GisketchSearchEntry,0);
LAB_03adf201:
  plVar14 = (long *)(*pVVar13->methodPtr)(manifest,pVVar13->method);
  if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  do {
    lVar20 = *plVar14;
    if ((ulong)*(ushort *)(lVar20 + 0x12e) != 0) {
      lVar19 = 0;
      do {
        if (*(long *)(*(long *)(lVar20 + 0xb0) + lVar19) == TypeInfo_IEnumerator) {
          puVar15 = (undefined8 *)
                    ((long)*(int *)(*(long *)(lVar20 + 0xb0) + 8 + lVar19) * 0x10 + lVar20 + 0x138);
          goto LAB_03adf283;
        }
        lVar19 = lVar19 + 0x10;
      } while ((ulong)*(ushort *)(lVar20 + 0x12e) << 4 != lVar19);
    }
    puVar15 = (undefined8 *)il2cpp_runtime_glue(plVar14,TypeInfo_IEnumerator,0);
LAB_03adf283:
    cVar10 = (*(code *)*puVar15)(plVar14,puVar15[1]);
    if (cVar10 == '\0') {
      if (plVar14 == (long *)0x0) goto LAB_03adf4b6;
      lVar20 = *plVar14;
      if ((ulong)*(ushort *)(lVar20 + 0x12e) == 0) goto LAB_03adf48f;
      lVar19 = 0;
      break;
    }
    lVar20 = *plVar14;
    if ((ulong)*(ushort *)(lVar20 + 0x12e) != 0) {
      lVar19 = 0;
      do {
        if (*(long *)(*(long *)(lVar20 + 0xb0) + lVar19) == TypeInfo_IEnumerator_GisketchSearchEntry) {
          puVar15 = (undefined8 *)
                    ((long)*(int *)(*(long *)(lVar20 + 0xb0) + 8 + lVar19) * 0x10 + lVar20 + 0x138);
          goto LAB_03adf2f3;
        }
        lVar19 = lVar19 + 0x10;
      } while ((ulong)*(ushort *)(lVar20 + 0x12e) << 4 != lVar19);
    }
    puVar15 = (undefined8 *)il2cpp_runtime_glue(plVar14,TypeInfo_IEnumerator_GisketchSearchEntry,0);
LAB_03adf2f3:
    auVar21 = (*(code *)*puVar15)(plVar14,puVar15[1]);
    pGVar17 = auVar21._0_8_;
    bVar12 = Gisketch_Aottg2UI_Search_GisketchSearchResults__IsActiveControl
                       (pGVar17,activeScreenId,auVar21._8_8_);
    if ((char)bVar12 == '\0') goto LAB_03adf350;
    if (pGVar17 == (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    bVar12 = System_String__IsNullOrEmpty
                       ((pGVar17->fields)._TargetId_k__BackingField,(MethodInfo *)0x0);
    if ((char)bVar12 != '\0') goto LAB_03adf350;
    if (__this_06 == (System_Collections_Generic_HashSet_object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    bVar12 = System_Collections_Generic_HashSet<object>__Contains
                       (__this_06,(Il2CppObject *)(pGVar17->fields)._TargetId_k__BackingField,
                        MethodInfo_Boolean_Contains);
    if ((char)bVar12 != '\0') {
LAB_03adf350:
      lVar20 = MethodInfo_Void_Add;
      if (__this_03 == (System_Collections_Generic_List_GisketchSearchEntry__o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      piVar1 = &(__this_03->fields)._version;
      *piVar1 = *piVar1 + 1;
      pGVar9 = (__this_03->fields)._items;
      if (pGVar9 == (Gisketch_Aottg2UI_Search_GisketchSearchEntry_array *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      uVar5 = (__this_03->fields)._size;
      if (uVar5 < (uint)pGVar9->max_length) {
        (__this_03->fields)._size = uVar5 + 1;
        pGVar9->m_Items[(int)uVar5] = pGVar17;
        il2cpp_runtime_glue();
      }
      else {
        System_Collections_Generic_List<object>__AddWithResize
                  ((System_Collections_Generic_List_object__o *)__this_03,(Il2CppObject *)pGVar17,
                   *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar20 + 0x20) + 0xc0) + 0x70));
      }
      if ((((pGVar17 != (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *)0x0) &&
           (bVar12 = System_String__IsNullOrEmpty
                               ((pGVar17->fields)._ScreenId_k__BackingField,(MethodInfo *)0x0),
           (char)bVar12 == '\0')) &&
          (bVar12 = System_String__IsNullOrEmpty(activeScreenId,(MethodInfo *)0x0),
          (char)bVar12 == '\0')) &&
         ((bVar12 = System_String__Equals
                              ((pGVar17->fields)._ScreenId_k__BackingField,activeScreenId,5,
                               (MethodInfo *)0x0), (char)bVar12 != '\0' &&
          (bVar12 = System_String__IsNullOrEmpty
                              ((pGVar17->fields)._TargetId_k__BackingField,(MethodInfo *)0x0),
          (char)bVar12 == '\0')))) {
        if (__this_04 == (System_Collections_Generic_HashSet_object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        System_Collections_Generic_HashSet<object>__Add
                  (__this_04,(Il2CppObject *)(pGVar17->fields)._TargetId_k__BackingField,
                   MethodInfo_Boolean_Add);
      }
    }
  } while( true );
  while (lVar19 = lVar19 + 0x10, (ulong)*(ushort *)(lVar20 + 0x12e) << 4 != lVar19) {
    if (*(long *)(*(long *)(lVar20 + 0xb0) + lVar19) == TypeInfo_IDisposable) {
      puVar15 = (undefined8 *)
                (lVar20 + (long)*(int *)(*(long *)(lVar20 + 0xb0) + 8 + lVar19) * 0x10 + 0x138);
      goto LAB_03adf4ad;
    }
  }
LAB_03adf48f:
  puVar15 = (undefined8 *)il2cpp_runtime_glue(plVar14,TypeInfo_IDisposable,0);
LAB_03adf4ad:
  (*(code *)*puVar15)(plVar14,puVar15[1]);
LAB_03adf4b6:
  if (__this_05 != (System_Collections_Generic_List_object__o *)0x0) {
    System_Collections_Generic_List<object>__GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)local_48,__this_05,MethodInfo_List_1_T__Enumerator_Gisketch_Aottg2UI_Search_Gi);
    _Var22 = local_48[0];
    if (__this_04 == (System_Collections_Generic_HashSet_object__o *)0x0) {
      while (__this_00.fields._8_8_ = __this_04,
            __this_00.fields._list = (System_Collections_Generic_List_T__o *)lVar18,
            __this_00.fields._current = _Var22.genericMethod,
            bVar12 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                               (__this_00,(MethodInfo_3185E20 *)&stack0xffffffffffffff78),
            (char)bVar12 != '\0') {
        if (local_38 == (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *)0x0) goto LAB_03adf722;
        bVar12 = System_String__IsNullOrEmpty
                           ((local_38->fields)._TargetId_k__BackingField,(MethodInfo *)0x0);
        lVar20 = MethodInfo_Void_Add;
        if ((char)bVar12 == '\0') {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        if (__this_03 == (System_Collections_Generic_List_GisketchSearchEntry__o *)0x0)
        goto LAB_03adf6ed;
        piVar1 = &(__this_03->fields)._version;
        *piVar1 = *piVar1 + 1;
        pGVar9 = (__this_03->fields)._items;
        if (pGVar9 == (Gisketch_Aottg2UI_Search_GisketchSearchEntry_array *)0x0) goto LAB_03adf72c;
        uVar5 = (__this_03->fields)._size;
        if (uVar5 < (uint)pGVar9->max_length) {
          (__this_03->fields)._size = uVar5 + 1;
          pGVar9->m_Items[(int)uVar5] = local_38;
          il2cpp_runtime_glue(pGVar9->m_Items + (int)uVar5,local_38);
        }
        else {
          System_Collections_Generic_List<object>__AddWithResize
                    ((System_Collections_Generic_List_object__o *)__this_03,(Il2CppObject *)local_38
                     ,*(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar20 + 0x20) + 0xc0) + 0x70));
        }
      }
    }
    else if (__this_03 == (System_Collections_Generic_List_GisketchSearchEntry__o *)0x0) {
      while (__this_01.fields._8_8_ = __this_04,
            __this_01.fields._list = (System_Collections_Generic_List_T__o *)lVar18,
            __this_01.fields._current = _Var22.genericMethod,
            bVar12 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                               (__this_01,(MethodInfo_3185E20 *)&stack0xffffffffffffff78),
            (char)bVar12 != '\0') {
        if (local_38 == (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *)0x0) goto LAB_03adf722;
        bVar12 = System_String__IsNullOrEmpty
                           ((local_38->fields)._TargetId_k__BackingField,(MethodInfo *)0x0);
        if (((char)bVar12 != '\0') ||
           (bVar12 = System_Collections_Generic_HashSet<object>__Contains
                               (__this_04,
                                (Il2CppObject *)(local_38->fields)._TargetId_k__BackingField,
                                MethodInfo_Boolean_Contains), (char)bVar12 == '\0')) {
LAB_03adf6ed:
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
      }
    }
    else {
      while (__this.fields._8_8_ = __this_04,
            __this.fields._list = (System_Collections_Generic_List_T__o *)lVar18,
            __this.fields._current = _Var22.genericMethod,
            bVar12 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                               (__this,(MethodInfo_3185E20 *)&stack0xffffffffffffff78),
            (char)bVar12 != '\0') {
        if (local_38 == (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *)0x0) {
LAB_03adf722:
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        bVar12 = System_String__IsNullOrEmpty
                           ((local_38->fields)._TargetId_k__BackingField,(MethodInfo *)0x0);
        if (((char)bVar12 != '\0') ||
           (bVar12 = System_Collections_Generic_HashSet<object>__Contains
                               (__this_04,
                                (Il2CppObject *)(local_38->fields)._TargetId_k__BackingField,
                                MethodInfo_Boolean_Contains), (char)bVar12 == '\0')) {
          lVar20 = MethodInfo_Void_Add;
          piVar1 = &(__this_03->fields)._version;
          *piVar1 = *piVar1 + 1;
          pGVar9 = (__this_03->fields)._items;
          if (pGVar9 == (Gisketch_Aottg2UI_Search_GisketchSearchEntry_array *)0x0) {
LAB_03adf72c:
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          uVar5 = (__this_03->fields)._size;
          if (uVar5 < (uint)pGVar9->max_length) {
            (__this_03->fields)._size = uVar5 + 1;
            pGVar9->m_Items[(int)uVar5] = local_38;
            il2cpp_runtime_glue(pGVar9->m_Items + (int)uVar5,local_38);
          }
          else {
            System_Collections_Generic_List<object>__AddWithResize
                      ((System_Collections_Generic_List_object__o *)__this_03,
                       (Il2CppObject *)local_38,
                       *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar20 + 0x20) + 0xc0) + 0x70));
          }
        }
      }
    }
    __this_02.fields._8_8_ = __this_04;
    __this_02.fields._list = (System_Collections_Generic_List_T__o *)lVar18;
    __this_02.fields._current = _Var22.genericMethod;
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (__this_02,(MethodInfo_3185E10 *)&stack0xffffffffffffff78);
    return __this_03;
  }
  goto LAB_03adf74f;
}


// Gisketch.Aottg2UI.Search.GisketchSearchResults$$ScreenTitles
// il2cpp: System_Collections_Generic_HashSet_string__o* Gisketch_Aottg2UI_Search_GisketchSearchResults__ScreenTitles (System_Collections_Generic_IEnumerable_GisketchSearchEntry__o* entries, const MethodInfo* method);
// 0x3adfb70

/* WARNING: Removing unreachable block (ram,0x03adff67) */

System_Collections_Generic_HashSet_string__o *
Gisketch_Aottg2UI_Search_GisketchSearchResults__ScreenTitles
          (System_Collections_Generic_IEnumerable_GisketchSearchEntry__o *entries,MethodInfo *method
          )

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
  long *plVar9;
  undefined8 *puVar10;
  long lVar11;
  long lVar12;
  
  if (DAT_0570139c == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Add);
    il2cpp_init_method_metadata(&MethodInfo_HashSet_1_System_String);
    il2cpp_init_method_metadata(&TypeInfo_HashSet_string);
    il2cpp_init_method_metadata(&TypeInfo_IDisposable);
    il2cpp_init_method_metadata(&TypeInfo_IEnumerable_GisketchSearchEntry);
    il2cpp_init_method_metadata(&TypeInfo_IEnumerator_GisketchSearchEntry);
    il2cpp_init_method_metadata(&TypeInfo_IEnumerator);
    il2cpp_init_method_metadata(&TypeInfo_StringComparer);
    il2cpp_init_method_metadata(&"screen");
    DAT_0570139c = '\x01';
    iVar2 = *(int *)(TypeInfo_StringComparer + 0xe4);
  }
  else {
    iVar2 = *(int *)(TypeInfo_StringComparer + 0xe4);
  }
  if (iVar2 == 0) {
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
  if (entries == (System_Collections_Generic_IEnumerable_GisketchSearchEntry__o *)0x0) {
    if (DAT_057013a0 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_Empty_d__6);
      DAT_057013a0 = '\x01';
    }
    entries = (System_Collections_Generic_IEnumerable_GisketchSearchEntry__o *)
              il2cpp_runtime_glue(TypeInfo_Empty_d__6);
    System_Object___ctor((Il2CppObject *)entries,(MethodInfo *)0x0);
    *(undefined4 *)&((Il2CppObject *)(entries + 1))->klass = 0xfffffffe;
    iVar6 = System_Environment__get_CurrentManagedThreadId((MethodInfo *)0x0);
    *(int32_t *)&((Il2CppObject *)(entries + 2))->klass = iVar6;
    if ((Il2CppObject *)entries == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
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
        goto LAB_03adfd74;
      }
      lVar11 = lVar11 + 0x10;
    } while ((ulong)uVar1 << 4 != lVar11);
  }
  pVVar8 = (VirtualInvokeData *)il2cpp_runtime_glue(entries,TypeInfo_IEnumerable_GisketchSearchEntry,0);
LAB_03adfd74:
  plVar9 = (long *)(*pVVar8->methodPtr)(entries,pVVar8->method);
  if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  do {
    lVar11 = *plVar9;
    if ((ulong)*(ushort *)(lVar11 + 0x12e) != 0) {
      lVar12 = 0;
      do {
        if (*(long *)(*(long *)(lVar11 + 0xb0) + lVar12) == TypeInfo_IEnumerator) {
          puVar10 = (undefined8 *)
                    ((long)*(int *)(*(long *)(lVar11 + 0xb0) + 8 + lVar12) * 0x10 + lVar11 + 0x138);
          goto LAB_03adfe03;
        }
        lVar12 = lVar12 + 0x10;
      } while ((ulong)*(ushort *)(lVar11 + 0x12e) << 4 != lVar12);
    }
    puVar10 = (undefined8 *)il2cpp_runtime_glue(plVar9,TypeInfo_IEnumerator,0);
LAB_03adfe03:
    cVar5 = (*(code *)*puVar10)(plVar9,puVar10[1]);
    if (cVar5 == '\0') {
      if (plVar9 == (long *)0x0) {
        return (System_Collections_Generic_HashSet_string__o *)__this;
      }
      lVar11 = *plVar9;
      if ((ulong)*(ushort *)(lVar11 + 0x12e) == 0) goto LAB_03adff1f;
      lVar12 = 0;
      break;
    }
    lVar11 = *plVar9;
    if ((ulong)*(ushort *)(lVar11 + 0x12e) != 0) {
      lVar12 = 0;
      do {
        if (*(long *)(*(long *)(lVar11 + 0xb0) + lVar12) == TypeInfo_IEnumerator_GisketchSearchEntry) {
          puVar10 = (undefined8 *)
                    ((long)*(int *)(*(long *)(lVar11 + 0xb0) + 8 + lVar12) * 0x10 + lVar11 + 0x138);
          goto LAB_03adfe73;
        }
        lVar12 = lVar12 + 0x10;
      } while ((ulong)*(ushort *)(lVar11 + 0x12e) << 4 != lVar12);
    }
    puVar10 = (undefined8 *)il2cpp_runtime_glue(plVar9,TypeInfo_IEnumerator_GisketchSearchEntry,0);
LAB_03adfe73:
    lVar11 = (*(code *)*puVar10)(plVar9,puVar10[1]);
    if (((lVar11 != 0) &&
        (bVar7 = System_String__Equals
                           (*(System_String_o **)(lVar11 + 0x70),"screen",5,(MethodInfo *)0x0),
        (char)bVar7 != '\0')) &&
       (bVar7 = System_String__IsNullOrEmpty(*(System_String_o **)(lVar11 + 0x58),(MethodInfo *)0x0)
       , (char)bVar7 == '\0')) {
      if (__this == (System_Collections_Generic_HashSet_object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      System_Collections_Generic_HashSet<object>__Add
                (__this,*(Il2CppObject **)(lVar11 + 0x58),MethodInfo_Boolean_Add);
    }
  } while( true );
  while (lVar12 = lVar12 + 0x10, (ulong)*(ushort *)(lVar11 + 0x12e) << 4 != lVar12) {
    if (*(long *)(*(long *)(lVar11 + 0xb0) + lVar12) == TypeInfo_IDisposable) {
      puVar10 = (undefined8 *)
                (lVar11 + (long)*(int *)(*(long *)(lVar11 + 0xb0) + 8 + lVar12) * 0x10 + 0x138);
      goto LAB_03adff3d;
    }
  }
LAB_03adff1f:
  puVar10 = (undefined8 *)il2cpp_runtime_glue(plVar9,TypeInfo_IDisposable,0);
LAB_03adff3d:
  (*(code *)*puVar10)(plVar9,puVar10[1]);
  return (System_Collections_Generic_HashSet_string__o *)__this;
}


// Gisketch.Aottg2UI.Search.GisketchSearchResults$$IsDuplicateMainMenuScreenButton
// il2cpp: bool Gisketch_Aottg2UI_Search_GisketchSearchResults__IsDuplicateMainMenuScreenButton (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o* entry, System_String_o* activeScreenId, System_Collections_Generic_HashSet_string__o* screenTitles, const MethodInfo* method);
// 0x3ae0240

bool_conflict
Gisketch_Aottg2UI_Search_GisketchSearchResults__IsDuplicateMainMenuScreenButton
          (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *entry,System_String_o *activeScreenId,
          System_Collections_Generic_HashSet_string__o *screenTitles,MethodInfo *method)

{
  System_String_o *__this;
  bool_conflict bVar1;
  
  if (DAT_0570139d == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Contains);
    il2cpp_init_method_metadata(&"main-menu");
    il2cpp_init_method_metadata(&"main-menu-option-");
    DAT_0570139d = '\x01';
  }
  bVar1 = System_String__Equals(activeScreenId,"main-menu",5,(MethodInfo *)0x0);
  if ((entry != (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *)0x0) && ((char)bVar1 != '\0')) {
    bVar1 = System_String__IsNullOrEmpty
                      ((entry->fields)._TargetId_k__BackingField,(MethodInfo *)0x0);
    if ((char)bVar1 == '\0') {
      __this = (entry->fields)._TargetId_k__BackingField;
      if (__this == (System_String_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      bVar1 = System_String__StartsWith(__this,"main-menu-option-",5,(MethodInfo *)0x0);
      if ((screenTitles != (System_Collections_Generic_HashSet_string__o *)0x0) &&
         ((char)bVar1 != '\0')) {
        bVar1 = System_Collections_Generic_HashSet<object>__Contains
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
// 0x3ae03d0

bool_conflict
Gisketch_Aottg2UI_Search_GisketchSearchResults__IsActive
          (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *entry,System_String_o *activeScreenId,
          MethodInfo *method)

{
  bool_conflict bVar1;
  
  if (entry != (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *)0x0) {
    bVar1 = System_String__IsNullOrEmpty
                      ((entry->fields)._ScreenId_k__BackingField,(MethodInfo *)0x0);
    if ((char)bVar1 == '\0') {
      bVar1 = System_String__IsNullOrEmpty(activeScreenId,(MethodInfo *)0x0);
      if ((char)bVar1 == '\0') {
        bVar1 = System_String__Equals
                          ((entry->fields)._ScreenId_k__BackingField,activeScreenId,5,
                           (MethodInfo *)0x0);
        return bVar1;
      }
    }
  }
  return 0;
}


// Gisketch.Aottg2UI.Search.GisketchSearchResults$$IsActiveControl
// il2cpp: bool Gisketch_Aottg2UI_Search_GisketchSearchResults__IsActiveControl (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o* entry, System_String_o* activeScreenId, const MethodInfo* method);
// 0x3ae0310

bool_conflict
Gisketch_Aottg2UI_Search_GisketchSearchResults__IsActiveControl
          (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *entry,System_String_o *activeScreenId,
          MethodInfo *method)

{
  bool_conflict bVar1;
  uint uVar2;
  
  if (DAT_0570139e == '\0') {
    il2cpp_init_method_metadata(&"screen");
    il2cpp_init_method_metadata(&"section");
    DAT_0570139e = '\x01';
  }
  if (entry == (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = 0;
    bVar1 = System_String__IsNullOrEmpty
                      ((entry->fields)._ScreenId_k__BackingField,(MethodInfo *)0x0);
    if ((char)bVar1 == '\0') {
      uVar2 = 0;
      bVar1 = System_String__IsNullOrEmpty(activeScreenId,(MethodInfo *)0x0);
      if ((char)bVar1 == '\0') {
        uVar2 = 0;
        bVar1 = System_String__Equals
                          ((entry->fields)._ScreenId_k__BackingField,activeScreenId,5,
                           (MethodInfo *)0x0);
        if ((char)bVar1 != '\0') {
          uVar2 = 0;
          bVar1 = System_String__Equals
                            ((entry->fields)._Kind_k__BackingField,"screen",5,(MethodInfo *)0x0)
          ;
          if ((char)bVar1 == '\0') {
            uVar2 = System_String__Equals
                              ((entry->fields)._Kind_k__BackingField,"section",5,
                               (MethodInfo *)0x0);
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
// 0x3ae00c0

bool_conflict
Gisketch_Aottg2UI_Search_GisketchSearchResults__IsLiveUsable
          (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *entry,MethodInfo *method)

{
  UnityEngine_GameObject_o *pUVar1;
  char cVar2;
  bool_conflict bVar3;
  UnityEngine_Object_o *pUVar4;
  
  if (DAT_0570139f == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_GisketchFocusRing_GetComponent_GisketchFocusRing);
    il2cpp_init_method_metadata(&MethodInfo_Selectable_GetComponent_Selectable);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_0570139f = '\x01';
  }
  if (entry != (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *)0x0) {
    pUVar4 = (UnityEngine_Object_o *)(entry->fields)._Target_k__BackingField;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar3 = UnityEngine_Object__op_Equality(pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar3 != '\0') {
      return (bool_conflict)CONCAT71((int7)((ulong)pUVar4 >> 8),1);
    }
    pUVar1 = (entry->fields)._Target_k__BackingField;
    if (pUVar1 != (UnityEngine_GameObject_o *)0x0) {
      pUVar4 = (UnityEngine_Object_o *)
               UnityEngine_GameObject__GetComponent<object>(pUVar1,MethodInfo_Selectable_GetComponent_Selectable);
      pUVar1 = (entry->fields)._Target_k__BackingField;
      if (pUVar1 != (UnityEngine_GameObject_o *)0x0) {
        bVar3 = UnityEngine_GameObject__get_activeInHierarchy(pUVar1,(MethodInfo *)0x0);
        if ((char)bVar3 != '\0') {
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_init_class();
          }
          bVar3 = UnityEngine_Object__op_Inequality
                            (pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if ((char)bVar3 != '\0') {
            if (pUVar4 != (UnityEngine_Object_o *)0x0) {
              cVar2 = (*(code *)pUVar4->klass[1]._1.declaringType)
                                (pUVar4,pUVar4->klass[1]._1.parent);
              if (cVar2 == '\0') {
                return 0;
              }
              cVar2 = (*(code *)pUVar4->klass[1].vtable._0_Equals.method)
                                (pUVar4,pUVar4->klass[1].vtable._1_Finalize.methodPtr);
              if (cVar2 == '\0') {
                return 0;
              }
              if ((int)pUVar4[1].fields.m_CachedPtr == 0) {
                return 0;
              }
              pUVar1 = (entry->fields)._Target_k__BackingField;
              if (pUVar1 != (UnityEngine_GameObject_o *)0x0) {
                pUVar4 = (UnityEngine_Object_o *)
                         UnityEngine_GameObject__GetComponent<object>(pUVar1,MethodInfo_GisketchFocusRing_GetComponent_GisketchFocusRing);
                if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                  il2cpp_init_class();
                }
                bVar3 = UnityEngine_Object__op_Inequality
                                  (pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
                return bVar3;
              }
            }
            goto LAB_03ae0232;
          }
        }
        return 0;
      }
    }
  }
LAB_03ae0232:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Search.GisketchSearchResults$$Empty
// il2cpp: System_Collections_Generic_IEnumerable_GisketchSearchEntry__o* Gisketch_Aottg2UI_Search_GisketchSearchResults__Empty (const MethodInfo* method);
// 0x3ae0070

System_Collections_Generic_IEnumerable_GisketchSearchEntry__o *
Gisketch_Aottg2UI_Search_GisketchSearchResults__Empty(MethodInfo *method)

{
  int32_t iVar1;
  Il2CppObject *__this;
  
  if (DAT_057013a0 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Empty_d__6);
    DAT_057013a0 = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_Empty_d__6);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  *(undefined4 *)&__this[1].klass = 0xfffffffe;
  iVar1 = System_Environment__get_CurrentManagedThreadId((MethodInfo *)0x0);
  *(int32_t *)&__this[2].klass = iVar1;
  return (System_Collections_Generic_IEnumerable_GisketchSearchEntry__o *)__this;
}


