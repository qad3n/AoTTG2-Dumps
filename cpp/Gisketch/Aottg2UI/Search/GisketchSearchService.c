// Type: Gisketch.Aottg2UI.Search.GisketchSearchService
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Search/GisketchSearchService.cs
// Prior source: NEW in this update
// --------------------------------

// Gisketch.Aottg2UI.Search.GisketchSearchService.ScoredEntry$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Search_GisketchSearchService_ScoredEntry___ctor (Gisketch_Aottg2UI_Search_GisketchSearchService_ScoredEntry_o __this, Gisketch_Aottg2UI_Search_GisketchSearchEntry_o* entry, int32_t score, const MethodInfo* method);
// 0x3ae0e60

void Gisketch_Aottg2UI_Search_GisketchSearchService_ScoredEntry___ctor
               (Gisketch_Aottg2UI_Search_GisketchSearchService_ScoredEntry_o __this,
               Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *entry,int32_t score,
               MethodInfo *method)

{
  (__this.fields.Entry)->klass = __this.fields._8_8_;
  il2cpp_runtime_glue();
  *(int *)&(__this.fields.Entry)->monitor = (int)entry;
  return;
}


// Gisketch.Aottg2UI.Search.GisketchSearchService.<>c$$.cctor
// il2cpp: void Gisketch_Aottg2UI_Search_GisketchSearchService___c___cctor (const MethodInfo* method);
// 0x3ae2a20

void Gisketch_Aottg2UI_Search_GisketchSearchService_<>c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (DAT_057013a9 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_057013a9 = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = __this;
  il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_c + 0xb8),__this);
  return;
}


// Gisketch.Aottg2UI.Search.GisketchSearchService.<>c$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Search_GisketchSearchService___c___ctor (Gisketch_Aottg2UI_Search_GisketchSearchService___c_o* __this, const MethodInfo* method);
// 0x3ae2a90

void Gisketch_Aottg2UI_Search_GisketchSearchService_<>c___ctor
               (Gisketch_Aottg2UI_Search_GisketchSearchService___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Search.GisketchSearchService.<>c$$<Query>b__0_0
// il2cpp: int32_t Gisketch_Aottg2UI_Search_GisketchSearchService___c___Query_b__0_0 (Gisketch_Aottg2UI_Search_GisketchSearchService___c_o* __this, Gisketch_Aottg2UI_Search_GisketchSearchService_ScoredEntry_o a, Gisketch_Aottg2UI_Search_GisketchSearchService_ScoredEntry_o b, const MethodInfo* method);
// 0x3ae2aa0

int32_t Gisketch_Aottg2UI_Search_GisketchSearchService_<>c__<Query>b__0_0
                  (Gisketch_Aottg2UI_Search_GisketchSearchService___c_o *__this,
                  Gisketch_Aottg2UI_Search_GisketchSearchService_ScoredEntry_o a,
                  Gisketch_Aottg2UI_Search_GisketchSearchService_ScoredEntry_o b,MethodInfo *method)

{
  int32_t iVar1;
  int local_8 [2];
  
  local_8[0] = b.fields.Score;
  if (local_8[0] != a.fields.Score) {
    iVar1 = System_Int32__CompareTo((int32_t)local_8,a.fields.Score,(MethodInfo *)0x0);
    return iVar1;
  }
  if ((a.fields.Entry != (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *)0x0) &&
     (b.fields.Entry != (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *)0x0)) {
    iVar1 = System_String__CompareOrdinal
                      (((a.fields.Entry)->fields)._Title_k__BackingField,
                       ((b.fields.Entry)->fields)._Title_k__BackingField,(MethodInfo *)0x0);
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Search.GisketchSearchService.<Empty>d__5$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Search_GisketchSearchService__Empty_d__5___ctor (Gisketch_Aottg2UI_Search_GisketchSearchService__Empty_d__5_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x3ae24e0

void Gisketch_Aottg2UI_Search_GisketchSearchService_<Empty>d__5___ctor
               (Gisketch_Aottg2UI_Search_GisketchSearchService__Empty_d__5_o *__this,
               int32_t __1__state,MethodInfo *method)

{
  int32_t iVar1;
  
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  iVar1 = System_Environment__get_CurrentManagedThreadId((MethodInfo *)0x0);
  (__this->fields).__l__initialThreadId = iVar1;
  return;
}


// Gisketch.Aottg2UI.Search.GisketchSearchService.<Empty>d__5$$System.IDisposable.Dispose
// il2cpp: void Gisketch_Aottg2UI_Search_GisketchSearchService__Empty_d__5__System_IDisposable_Dispose (Gisketch_Aottg2UI_Search_GisketchSearchService__Empty_d__5_o* __this, const MethodInfo* method);
// 0x3ae2af0

void Gisketch_Aottg2UI_Search_GisketchSearchService_<Empty>d__5__System_IDisposable_Dispose
               (Gisketch_Aottg2UI_Search_GisketchSearchService__Empty_d__5_o *__this,
               MethodInfo *method)

{
  return;
}


// Gisketch.Aottg2UI.Search.GisketchSearchService.<Empty>d__5$$MoveNext
// il2cpp: bool Gisketch_Aottg2UI_Search_GisketchSearchService__Empty_d__5__MoveNext (Gisketch_Aottg2UI_Search_GisketchSearchService__Empty_d__5_o* __this, const MethodInfo* method);
// 0x3ae2b00

bool_conflict
Gisketch_Aottg2UI_Search_GisketchSearchService_<Empty>d__5__MoveNext
          (Gisketch_Aottg2UI_Search_GisketchSearchService__Empty_d__5_o *__this,MethodInfo *method)

{
  if ((__this->fields).__1__state != 0) {
    return 0;
  }
  (__this->fields).__1__state = -1;
  return 0;
}


// Gisketch.Aottg2UI.Search.GisketchSearchService.<Empty>d__5$$System.Collections.Generic.IEnumerator<Gisketch.Aottg2UI.Search.GisketchSearchEntry>.get_Current
// il2cpp: Gisketch_Aottg2UI_Search_GisketchSearchEntry_o* Gisketch_Aottg2UI_Search_GisketchSearchService__Empty_d__5__System_Collections_Generic_IEnumerator_Gisketch_Aottg2UI_Search_GisketchSearchEntry__get_Current (Gisketch_Aottg2UI_Search_GisketchSearchService__Empty_d__5_o* __this, const MethodInfo* method);
// 0x3ae2b20

Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *
Gisketch_Aottg2UI_Search_GisketchSearchService_<Empty>d__5__System_Collections_Generic_IEnumerator<Gisketch_Aottg2UI_Search_GisketchSearchEntry>_get_Current
          (Gisketch_Aottg2UI_Search_GisketchSearchService__Empty_d__5_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// Gisketch.Aottg2UI.Search.GisketchSearchService.<Empty>d__5$$System.Collections.IEnumerator.Reset
// il2cpp: void Gisketch_Aottg2UI_Search_GisketchSearchService__Empty_d__5__System_Collections_IEnumerator_Reset (Gisketch_Aottg2UI_Search_GisketchSearchService__Empty_d__5_o* __this, const MethodInfo* method);
// 0x3ae2b30

void Gisketch_Aottg2UI_Search_GisketchSearchService_<Empty>d__5__System_Collections_IEnumerator_Reset
               (Gisketch_Aottg2UI_Search_GisketchSearchService__Empty_d__5_o *__this,
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


// Gisketch.Aottg2UI.Search.GisketchSearchService.<Empty>d__5$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* Gisketch_Aottg2UI_Search_GisketchSearchService__Empty_d__5__System_Collections_IEnumerator_get_Current (Gisketch_Aottg2UI_Search_GisketchSearchService__Empty_d__5_o* __this, const MethodInfo* method);
// 0x3ae2b70

Il2CppObject *
Gisketch_Aottg2UI_Search_GisketchSearchService_<Empty>d__5__System_Collections_IEnumerator_get_Current
          (Gisketch_Aottg2UI_Search_GisketchSearchService__Empty_d__5_o *__this,MethodInfo *method)

{
  return (Il2CppObject *)(__this->fields).__2__current;
}


// Gisketch.Aottg2UI.Search.GisketchSearchService.<Empty>d__5$$System.Collections.Generic.IEnumerable<Gisketch.Aottg2UI.Search.GisketchSearchEntry>.GetEnumerator
// il2cpp: System_Collections_Generic_IEnumerator_GisketchSearchEntry__o* Gisketch_Aottg2UI_Search_GisketchSearchService__Empty_d__5__System_Collections_Generic_IEnumerable_Gisketch_Aottg2UI_Search_GisketchSearchEntry__GetEnumerator (Gisketch_Aottg2UI_Search_GisketchSearchService__Empty_d__5_o* __this, const MethodInfo* method);
// 0x3ae2b80

System_Collections_Generic_IEnumerator_GisketchSearchEntry__o *
Gisketch_Aottg2UI_Search_GisketchSearchService_<Empty>d__5__System_Collections_Generic_IEnumerable<Gisketch_Aottg2UI_Search_GisketchSearchEntry>_GetEnumerator
          (Gisketch_Aottg2UI_Search_GisketchSearchService__Empty_d__5_o *__this,MethodInfo *method)

{
  int iVar1;
  int32_t iVar2;
  Il2CppObject *__this_00;
  
  if (DAT_057013aa == '\0') {
    il2cpp_init_method_metadata();
    DAT_057013aa = '\x01';
  }
  if (((__this->fields).__1__state == -2) &&
     (iVar1 = (__this->fields).__l__initialThreadId,
     iVar2 = System_Environment__get_CurrentManagedThreadId((MethodInfo *)0x0), iVar1 == iVar2)) {
    (__this->fields).__1__state = 0;
    return (System_Collections_Generic_IEnumerator_GisketchSearchEntry__o *)__this;
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_Empty_d__5);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  *(undefined4 *)&__this_00[1].klass = 0;
  iVar2 = System_Environment__get_CurrentManagedThreadId((MethodInfo *)0x0);
  *(int32_t *)&__this_00[2].klass = iVar2;
  return (System_Collections_Generic_IEnumerator_GisketchSearchEntry__o *)__this_00;
}


// Gisketch.Aottg2UI.Search.GisketchSearchService.<Empty>d__5$$System.Collections.IEnumerable.GetEnumerator
// il2cpp: System_Collections_IEnumerator_o* Gisketch_Aottg2UI_Search_GisketchSearchService__Empty_d__5__System_Collections_IEnumerable_GetEnumerator (Gisketch_Aottg2UI_Search_GisketchSearchService__Empty_d__5_o* __this, const MethodInfo* method);
// 0x3ae2c00

System_Collections_IEnumerator_o *
Gisketch_Aottg2UI_Search_GisketchSearchService_<Empty>d__5__System_Collections_IEnumerable_GetEnumerator
          (Gisketch_Aottg2UI_Search_GisketchSearchService__Empty_d__5_o *__this,MethodInfo *method)

{
  int iVar1;
  int32_t iVar2;
  Il2CppObject *__this_00;
  
  if (DAT_057013aa == '\0') {
    il2cpp_init_method_metadata();
    DAT_057013aa = '\x01';
  }
  if (((__this->fields).__1__state == -2) &&
     (iVar1 = (__this->fields).__l__initialThreadId,
     iVar2 = System_Environment__get_CurrentManagedThreadId((MethodInfo *)0x0), iVar1 == iVar2)) {
    (__this->fields).__1__state = 0;
    return (System_Collections_IEnumerator_o *)__this;
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_Empty_d__5);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  *(undefined4 *)&__this_00[1].klass = 0;
  iVar2 = System_Environment__get_CurrentManagedThreadId((MethodInfo *)0x0);
  *(int32_t *)&__this_00[2].klass = iVar2;
  return (System_Collections_IEnumerator_o *)__this_00;
}


// Gisketch.Aottg2UI.Search.GisketchSearchService$$Query
// il2cpp: System_Collections_Generic_List_GisketchSearchEntry__o* Gisketch_Aottg2UI_Search_GisketchSearchService__Query (System_Collections_Generic_IEnumerable_GisketchSearchEntry__o* entries, System_String_o* query, const MethodInfo* method);
// 0x3ae05e0

/* WARNING: Removing unreachable block (ram,0x03ae0a34) */
/* WARNING: Removing unreachable block (ram,0x03ae0c3d) */

System_Collections_Generic_List_GisketchSearchEntry__o *
Gisketch_Aottg2UI_Search_GisketchSearchService__Query
          (System_Collections_Generic_IEnumerable_GisketchSearchEntry__o *entries,
          System_String_o *query,MethodInfo *method)

{
  int32_t *piVar1;
  ushort uVar2;
  uint uVar3;
  Il2CppClass *pIVar4;
  Il2CppRuntimeInterfaceOffsetPair *pIVar5;
  Gisketch_Aottg2UI_Search_GisketchSearchService_ScoredEntry_array *pGVar6;
  Gisketch_Aottg2UI_Search_GisketchSearchEntry_array *pGVar7;
  System_Collections_Generic_List_Enumerator_T__o __this;
  System_Collections_Generic_List_Enumerator_T__o __this_00;
  System_Collections_Generic_List_Enumerator_T__o __this_01;
  int iVar8;
  char cVar9;
  int32_t iVar10;
  bool_conflict bVar11;
  System_Collections_Generic_List_GisketchSearchService_ScoredEntry__o *__this_02;
  VirtualInvokeData *pVVar12;
  long *plVar13;
  undefined8 *puVar14;
  System_String_o *displayTitle;
  System_Collections_Generic_List_GisketchSearchEntry__o *__this_03;
  System_Comparison_T__o *comparison;
  long lVar15;
  long lVar16;
  MethodInfo *in_R8;
  undefined1 auVar17 [16];
  Gisketch_Aottg2UI_Search_GisketchSearchService_ScoredEntry_o item;
  System_Collections_Generic_List_T__o *pSVar18;
  Il2CppMethodPointer pIVar19;
  Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *pGVar20;
  Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *local_70;
  Il2CppType **local_68;
  undefined1 local_50 [16];
  Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *local_40;
  
  if (DAT_057013a2 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Comparison_ScoredEntry);
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_GisketchSearchService_ScoredEntry_get_Current);
    il2cpp_init_method_metadata(&TypeInfo_IDisposable);
    il2cpp_init_method_metadata(&TypeInfo_IEnumerable_GisketchSearchEntry);
    il2cpp_init_method_metadata(&TypeInfo_IEnumerator_GisketchSearchEntry);
    il2cpp_init_method_metadata(&TypeInfo_IEnumerator);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_List_1_T__Enumerator_Gisketch_Aottg2UI_Search_Gi);
    il2cpp_init_method_metadata(&MethodInfo_Void_Sort);
    il2cpp_init_method_metadata(&MethodInfo_List_1_Gisketch_Aottg2UI_Search_GisketchSearchEn);
    il2cpp_init_method_metadata(&MethodInfo_List_1_Gisketch_Aottg2UI_Search_GisketchSearchSe);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    il2cpp_init_method_metadata(&TypeInfo_List_ScoredEntry);
    il2cpp_init_method_metadata(&TypeInfo_List_GisketchSearchEntry);
    il2cpp_init_method_metadata(&MethodInfo_Int32__Query_b__0_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_057013a2 = '\x01';
  }
  __this_02 = (System_Collections_Generic_List_GisketchSearchService_ScoredEntry__o *)
              il2cpp_runtime_glue(TypeInfo_List_ScoredEntry);
  System_Collections_Generic_List<GisketchSearchService_ScoredEntry>___ctor(__this_02,MethodInfo_List_1_Gisketch_Aottg2UI_Search_GisketchSearchSe);
  if (entries == (System_Collections_Generic_IEnumerable_GisketchSearchEntry__o *)0x0) {
    if (DAT_057013a3 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_Empty_d__5);
      DAT_057013a3 = '\x01';
    }
    entries = (System_Collections_Generic_IEnumerable_GisketchSearchEntry__o *)
              il2cpp_runtime_glue(TypeInfo_Empty_d__5);
    System_Object___ctor((Il2CppObject *)entries,(MethodInfo *)0x0);
    *(undefined4 *)&((Il2CppObject *)(entries + 1))->klass = 0xfffffffe;
    iVar10 = System_Environment__get_CurrentManagedThreadId((MethodInfo *)0x0);
    *(int32_t *)&((Il2CppObject *)(entries + 2))->klass = iVar10;
    if ((Il2CppObject *)entries == (Il2CppObject *)0x0) goto LAB_03ae0bea;
  }
  pIVar4 = ((Il2CppObject *)entries)->klass;
  uVar2._0_1_ = (pIVar4->_2).rank;
  uVar2._1_1_ = (pIVar4->_2).minimumAlignment;
  if ((ulong)uVar2 != 0) {
    pIVar5 = (pIVar4->_1).interfaceOffsets;
    lVar15 = 0;
    do {
      if (*(long *)((long)&pIVar5->interfaceType + lVar15) == TypeInfo_IEnumerable_GisketchSearchEntry) {
        pVVar12 = pIVar4->vtable + *(int *)((long)&pIVar5->offset + lVar15);
        goto LAB_03ae07d1;
      }
      lVar15 = lVar15 + 0x10;
    } while ((ulong)uVar2 << 4 != lVar15);
  }
  pVVar12 = (VirtualInvokeData *)il2cpp_runtime_glue(entries,TypeInfo_IEnumerable_GisketchSearchEntry,0);
LAB_03ae07d1:
  plVar13 = (long *)(*pVVar12->methodPtr)(entries,pVVar12->method);
  if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  do {
    lVar15 = *plVar13;
    if ((ulong)*(ushort *)(lVar15 + 0x12e) != 0) {
      lVar16 = 0;
      do {
        if (*(long *)(*(long *)(lVar15 + 0xb0) + lVar16) == TypeInfo_IEnumerator) {
          puVar14 = (undefined8 *)
                    ((long)*(int *)(*(long *)(lVar15 + 0xb0) + 8 + lVar16) * 0x10 + lVar15 + 0x138);
          goto LAB_03ae0863;
        }
        lVar16 = lVar16 + 0x10;
      } while ((ulong)*(ushort *)(lVar15 + 0x12e) << 4 != lVar16);
    }
    puVar14 = (undefined8 *)il2cpp_runtime_glue(plVar13,TypeInfo_IEnumerator,0);
LAB_03ae0863:
    cVar9 = (*(code *)*puVar14)(plVar13,puVar14[1]);
    if (cVar9 == '\0') {
      if (plVar13 == (long *)0x0) goto LAB_03ae0a26;
      lVar15 = *plVar13;
      if ((ulong)*(ushort *)(lVar15 + 0x12e) == 0) goto LAB_03ae09ff;
      lVar16 = 0;
      break;
    }
    lVar15 = *plVar13;
    if ((ulong)*(ushort *)(lVar15 + 0x12e) != 0) {
      lVar16 = 0;
      do {
        if (*(long *)(*(long *)(lVar15 + 0xb0) + lVar16) == TypeInfo_IEnumerator_GisketchSearchEntry) {
          puVar14 = (undefined8 *)
                    ((long)*(int *)(*(long *)(lVar15 + 0xb0) + 8 + lVar16) * 0x10 + lVar15 + 0x138);
          goto LAB_03ae08d3;
        }
        lVar16 = lVar16 + 0x10;
      } while ((ulong)*(ushort *)(lVar15 + 0x12e) << 4 != lVar16);
    }
    puVar14 = (undefined8 *)il2cpp_runtime_glue(plVar13,TypeInfo_IEnumerator_GisketchSearchEntry,0);
LAB_03ae08d3:
    auVar17 = (*(code *)*puVar14)(plVar13,puVar14[1]);
    pGVar20 = auVar17._0_8_;
    if (pGVar20 == (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *)0x0) {
      displayTitle = (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
    }
    else {
      displayTitle = Gisketch_Aottg2UI_Search_GisketchSearchEntry__PathTitle
                               (pGVar20,1,auVar17._8_8_);
    }
    Gisketch_Aottg2UI_Search_GisketchSearchService__Match
              ((Gisketch_Aottg2UI_Search_GisketchSearchMatch_o *)&local_70,pGVar20,query,
               displayTitle,in_R8);
    iVar8 = (int)local_70;
    if (0 < (int)local_70) {
      local_68 = (Il2CppType **)0x0;
      local_70 = pGVar20;
      il2cpp_runtime_glue((Gisketch_Aottg2UI_Search_GisketchSearchMatch_o *)&local_70,pGVar20);
      lVar15 = MethodInfo_Void_Add;
      local_68 = (Il2CppType **)CONCAT44(local_68._4_4_,iVar8);
      if (__this_02 == (System_Collections_Generic_List_GisketchSearchService_ScoredEntry__o *)0x0)
      {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      piVar1 = &(__this_02->fields)._version;
      *piVar1 = *piVar1 + 1;
      pGVar6 = (__this_02->fields)._items;
      if (pGVar6 == (Gisketch_Aottg2UI_Search_GisketchSearchService_ScoredEntry_array *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      uVar3 = (__this_02->fields)._size;
      if (uVar3 < (uint)pGVar6->max_length) {
        (__this_02->fields)._size = uVar3 + 1;
        pGVar6->m_Items[(int)uVar3].fields.Entry = local_70;
        pGVar6->m_Items[(int)uVar3].fields.Score = iVar8;
        il2cpp_runtime_glue(pGVar6->m_Items + (int)uVar3,0);
      }
      else {
        item.fields.Score = iVar8;
        item.fields.Entry = local_70;
        item.fields._12_4_ = 0;
        System_Collections_Generic_List<GisketchSearchService_ScoredEntry>__AddWithResize
                  (__this_02,item,
                   *(MethodInfo_364C360 **)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
      }
    }
  } while( true );
  while (lVar16 = lVar16 + 0x10, (ulong)*(ushort *)(lVar15 + 0x12e) << 4 != lVar16) {
    if (*(long *)(*(long *)(lVar15 + 0xb0) + lVar16) == TypeInfo_IDisposable) {
      puVar14 = (undefined8 *)
                (lVar15 + (long)*(int *)(*(long *)(lVar15 + 0xb0) + 8 + lVar16) * 0x10 + 0x138);
      goto LAB_03ae0a1d;
    }
  }
LAB_03ae09ff:
  puVar14 = (undefined8 *)il2cpp_runtime_glue(plVar13,TypeInfo_IDisposable,0);
LAB_03ae0a1d:
  (*(code *)*puVar14)(plVar13,puVar14[1]);
LAB_03ae0a26:
  if (*(int *)(TypeInfo_c + 0xe4) == 0) {
    il2cpp_init_class();
    comparison = *(System_Comparison_T__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
  }
  else {
    comparison = *(System_Comparison_T__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
  }
  if (comparison == (System_Comparison_T__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    comparison = (System_Comparison_T__o *)il2cpp_runtime_glue(TypeInfo_Comparison_ScoredEntry);
    System_Comparison<GisketchSearchService_ScoredEntry>___ctor();
    lVar15 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Comparison_T__o **)(lVar15 + 8) = comparison;
    il2cpp_runtime_glue(lVar15 + 8,comparison);
  }
  if (__this_02 != (System_Collections_Generic_List_GisketchSearchService_ScoredEntry__o *)0x0) {
    System_Collections_Generic_List<GisketchSearchService_ScoredEntry>__Sort
              (__this_02,comparison,MethodInfo_Void_Sort);
    iVar10 = (__this_02->fields)._size;
    __this_03 = (System_Collections_Generic_List_GisketchSearchEntry__o *)
                il2cpp_runtime_glue(TypeInfo_List_GisketchSearchEntry);
    System_Collections_Generic_List<object>___ctor
              ((System_Collections_Generic_List_object__o *)__this_03,iVar10,MethodInfo_List_1_Gisketch_Aottg2UI_Search_GisketchSearchEn);
    System_Collections_Generic_List<GisketchSearchService_ScoredEntry>__GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)local_50,__this_02,MethodInfo_List_1_T__Enumerator_Gisketch_Aottg2UI_Search_Gi);
    pSVar18 = (System_Collections_Generic_List_T__o *)local_50._0_8_;
    pIVar19 = (Il2CppMethodPointer)local_50._8_8_;
    pGVar20 = local_40;
    if (__this_03 == (System_Collections_Generic_List_GisketchSearchEntry__o *)0x0) {
      __this_00.fields._index = local_50._8_4_;
      __this_00.fields._version = local_50._12_4_;
      __this_00.fields._list = (System_Collections_Generic_List_T__o *)local_50._0_8_;
      __this_00.fields._current = (Il2CppObject *)local_40;
      bVar11 = System_Collections_Generic_List_Enumerator<GisketchSearchService_ScoredEntry>__MoveNext
                         (__this_00,(MethodInfo_31ADFE0 *)&stack0xffffffffffffff68);
      if ((char)bVar11 != '\0') {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
    }
    else {
      while (__this.fields._8_8_ = pIVar19, __this.fields._list = pSVar18,
            __this.fields._current = (Il2CppObject *)pGVar20,
            bVar11 = System_Collections_Generic_List_Enumerator<GisketchSearchService_ScoredEntry>__MoveNext
                               (__this,(MethodInfo_31ADFE0 *)&stack0xffffffffffffff68),
            lVar15 = MethodInfo_Void_Add, local_50._0_8_ = pSVar18, local_50._8_8_ = pIVar19,
            local_40 = pGVar20, (char)bVar11 != '\0') {
        piVar1 = &(__this_03->fields)._version;
        *piVar1 = *piVar1 + 1;
        pGVar7 = (__this_03->fields)._items;
        if (pGVar7 == (Gisketch_Aottg2UI_Search_GisketchSearchEntry_array *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        uVar3 = (__this_03->fields)._size;
        if (uVar3 < (uint)pGVar7->max_length) {
          (__this_03->fields)._size = uVar3 + 1;
          pGVar7->m_Items[(int)uVar3] = pGVar20;
          il2cpp_runtime_glue(pGVar7->m_Items + (int)uVar3);
        }
        else {
          System_Collections_Generic_List<object>__AddWithResize
                    ((System_Collections_Generic_List_object__o *)__this_03,(Il2CppObject *)pGVar20,
                     *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
        }
      }
    }
    __this_01.fields._8_8_ = local_50._8_8_;
    __this_01.fields._list = (System_Collections_Generic_List_T__o *)local_50._0_8_;
    __this_01.fields._current = (Il2CppObject *)local_40;
    System_Collections_Generic_List_Enumerator<GisketchSearchService_ScoredEntry>__Dispose
              (__this_01,(MethodInfo_31ADFD0 *)&stack0xffffffffffffff68);
    return __this_03;
  }
LAB_03ae0bea:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Search.GisketchSearchService$$Match
// il2cpp: Gisketch_Aottg2UI_Search_GisketchSearchMatch_o Gisketch_Aottg2UI_Search_GisketchSearchService__Match (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o* entry, System_String_o* query, const MethodInfo* method);
// 0x3ae0df0

Gisketch_Aottg2UI_Search_GisketchSearchMatch_o *
Gisketch_Aottg2UI_Search_GisketchSearchService__Match
          (Gisketch_Aottg2UI_Search_GisketchSearchMatch_o *__return_storage_ptr__,
          Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *entry,System_String_o *query,
          MethodInfo *method)

{
  System_String_o *displayTitle;
  MethodInfo *in_R8;
  Gisketch_Aottg2UI_Search_GisketchSearchMatch_Fields local_38;
  
  if (entry == (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *)0x0) {
    displayTitle = (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
  }
  else {
    displayTitle = Gisketch_Aottg2UI_Search_GisketchSearchEntry__PathTitle
                             (entry,1,(MethodInfo *)query);
  }
  Gisketch_Aottg2UI_Search_GisketchSearchService__Match
            ((Gisketch_Aottg2UI_Search_GisketchSearchMatch_o *)&local_38,entry,query,displayTitle,
             in_R8);
  (__return_storage_ptr__->fields).HiddenText = local_38.HiddenText;
  (__return_storage_ptr__->fields).DisplayIndices = local_38.DisplayIndices;
  (__return_storage_ptr__->fields).Score = local_38.Score;
  (__return_storage_ptr__->fields).DisplayStart = local_38.DisplayStart;
  (__return_storage_ptr__->fields).DisplayLength = local_38.DisplayLength;
  *(undefined4 *)&(__return_storage_ptr__->fields).field_0xc = local_38._12_4_;
  return __return_storage_ptr__;
}


// Gisketch.Aottg2UI.Search.GisketchSearchService$$Match
// il2cpp: Gisketch_Aottg2UI_Search_GisketchSearchMatch_o Gisketch_Aottg2UI_Search_GisketchSearchService__Match (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o* entry, System_String_o* query, System_String_o* displayTitle, const MethodInfo* method);
// 0x3ae0e80

/* WARNING: Type propagation algorithm not settling */

Gisketch_Aottg2UI_Search_GisketchSearchMatch_o *
Gisketch_Aottg2UI_Search_GisketchSearchService__Match
          (Gisketch_Aottg2UI_Search_GisketchSearchMatch_o *__return_storage_ptr__,
          Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *entry,System_String_o *query,
          System_String_o *displayTitle,MethodInfo *method)

{
  long *plVar1;
  long lVar2;
  int32_t iVar3;
  bool_conflict bVar4;
  System_String_o *pSVar5;
  System_String_o *pSVar6;
  System_String_o *pSVar7;
  int32_t iVar8;
  System_Int32_array *pSVar9;
  MethodInfo *in_R9;
  int32_t local_80;
  int32_t local_7c;
  int32_t local_78;
  int32_t iStack_74;
  int32_t iStack_70;
  undefined4 uStack_6c;
  System_String_o *local_68;
  System_Int32_array *pSStack_60;
  System_String_o *local_58;
  System_String_o *local_50;
  System_Int32_array *local_48;
  System_String_o *local_40;
  System_Int32_array *local_38;
  
  local_7c = 0;
  local_80 = 0;
  local_48 = (System_Int32_array *)0x0;
  local_38 = (System_Int32_array *)0x0;
  if (entry == (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *)0x0) {
LAB_03ae170f:
    local_78 = 0;
    iStack_74 = 0;
    iStack_70 = 0;
    uStack_6c = 0;
    (__return_storage_ptr__->fields).HiddenText = (System_String_o *)0x0;
    (__return_storage_ptr__->fields).DisplayIndices = (System_Int32_array *)0x0;
    goto LAB_03ae1717;
  }
  bVar4 = System_String__IsNullOrEmpty(query,(MethodInfo *)0x0);
  if ((char)bVar4 == '\0') {
    if (query == (System_String_o *)0x0) goto LAB_03ae172d;
    pSVar5 = System_String__ToLowerInvariant(query,(MethodInfo *)0x0);
  }
  else {
    pSVar5 = (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
  }
  bVar4 = System_String__IsNullOrEmpty(pSVar5,(MethodInfo *)0x0);
  lVar2 = DAT_057110b0;
  if ((char)bVar4 != '\0') {
    query = (System_String_o *)**(long **)(DAT_057110b0 + 0xb8);
    (__return_storage_ptr__->fields).Score = 0;
    (__return_storage_ptr__->fields).DisplayStart = 0;
    *(undefined8 *)&(__return_storage_ptr__->fields).DisplayLength = 0;
    (__return_storage_ptr__->fields).HiddenText = (System_String_o *)0x0;
    (__return_storage_ptr__->fields).DisplayIndices = (System_Int32_array *)0x0;
    (__return_storage_ptr__->fields).Score = 1;
    (__return_storage_ptr__->fields).DisplayStart = -1;
    (__return_storage_ptr__->fields).DisplayLength = 0;
    goto joined_r0x03ae1635;
  }
  pSVar6 = (entry->fields)._Title_k__BackingField;
  bVar4 = System_String__IsNullOrEmpty(pSVar6,(MethodInfo *)0x0);
  if ((char)bVar4 == '\0') {
    if (pSVar6 == (System_String_o *)0x0) goto LAB_03ae172d;
    local_58 = System_String__ToLowerInvariant(pSVar6,(MethodInfo *)0x0);
  }
  else {
    local_58 = (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
  }
  bVar4 = System_String__IsNullOrEmpty(displayTitle,(MethodInfo *)0x0);
  if ((char)bVar4 == '\0') {
    if (displayTitle == (System_String_o *)0x0) goto LAB_03ae172d;
    pSVar6 = System_String__ToLowerInvariant(displayTitle,(MethodInfo *)0x0);
  }
  else {
    pSVar6 = (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
  }
  pSVar7 = (entry->fields)._Keywords_k__BackingField;
  bVar4 = System_String__IsNullOrEmpty(pSVar7,(MethodInfo *)0x0);
  if ((char)bVar4 == '\0') {
    if (pSVar7 == (System_String_o *)0x0) goto LAB_03ae172d;
    local_50 = System_String__ToLowerInvariant(pSVar7,(MethodInfo *)0x0);
  }
  else {
    local_50 = (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
  }
  pSVar7 = (entry->fields)._Id_k__BackingField;
  bVar4 = System_String__IsNullOrEmpty(pSVar7,(MethodInfo *)0x0);
  if ((char)bVar4 == '\0') {
    if (pSVar7 == (System_String_o *)0x0) goto LAB_03ae172d;
    pSVar7 = System_String__ToLowerInvariant(pSVar7,(MethodInfo *)0x0);
  }
  else {
    pSVar7 = (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
  }
  bVar4 = System_String__op_Equality(pSVar6,pSVar5,(MethodInfo *)0x0);
  if (((char)bVar4 != '\0') ||
     (bVar4 = System_String__op_Equality(local_58,pSVar5,(MethodInfo *)0x0), (char)bVar4 != '\0')) {
    if (pSVar6 == (System_String_o *)0x0) goto LAB_03ae172d;
    iVar8 = 0;
    iStack_74 = System_String__IndexOf(pSVar6,pSVar5,(MethodInfo *)0x0);
    if (-1 < iStack_74) {
      if (pSVar5 == (System_String_o *)0x0) goto LAB_03ae172d;
      iVar8 = (pSVar5->fields)._stringLength;
    }
    plVar1 = *(long **)(DAT_057110b0 + 0xb8);
    local_68 = (System_String_o *)*plVar1;
    local_78 = 100;
    iStack_70 = iVar8;
joined_r0x03ae11e1:
    if (local_68 == (System_String_o *)0x0) {
      local_68 = (System_String_o *)*plVar1;
    }
    uStack_6c = 0;
    pSStack_60 = (System_Int32_array *)0x0;
    il2cpp_runtime_glue(&local_68);
    pSStack_60 = (System_Int32_array *)0x0;
    il2cpp_runtime_glue(&pSStack_60,0);
    (__return_storage_ptr__->fields).HiddenText = local_68;
    (__return_storage_ptr__->fields).DisplayIndices = pSStack_60;
LAB_03ae1717:
    (__return_storage_ptr__->fields).Score = local_78;
    (__return_storage_ptr__->fields).DisplayStart = iStack_74;
    (__return_storage_ptr__->fields).DisplayLength = iStack_70;
    *(undefined4 *)&(__return_storage_ptr__->fields).field_0xc = uStack_6c;
    return __return_storage_ptr__;
  }
  local_40 = pSVar7;
  if (pSVar6 == (System_String_o *)0x0) goto LAB_03ae172d;
  iVar8 = 0;
  bVar4 = System_String__StartsWith(pSVar6,pSVar5,(MethodInfo *)0x0);
  if ((char)bVar4 != '\0') {
LAB_03ae118a:
    iStack_74 = System_String__IndexOf(pSVar6,pSVar5,(MethodInfo *)0x0);
    if (-1 < iStack_74) {
      if (pSVar5 == (System_String_o *)0x0) {
LAB_03ae172d:
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      iVar8 = (pSVar5->fields)._stringLength;
    }
    plVar1 = *(long **)(DAT_057110b0 + 0xb8);
    local_68 = (System_String_o *)*plVar1;
    local_78 = 0x50;
    iStack_70 = iVar8;
    goto joined_r0x03ae11e1;
  }
  if (local_58 == (System_String_o *)0x0) goto LAB_03ae172d;
  bVar4 = System_String__StartsWith(local_58,pSVar5,(MethodInfo *)0x0);
  if ((char)bVar4 != '\0') goto LAB_03ae118a;
  bVar4 = Gisketch_Aottg2UI_Search_GisketchSearchService__FindToken
                    (pSVar6,pSVar5,&local_7c,&local_80,method);
  if (((char)bVar4 == '\0') &&
     (bVar4 = Gisketch_Aottg2UI_Search_GisketchSearchService__FindToken
                        (local_58,pSVar5,&local_7c,&local_80,method), pSVar7 = local_50,
     (char)bVar4 == '\0')) {
    bVar4 = Gisketch_Aottg2UI_Search_GisketchSearchService__FindToken
                      (local_50,pSVar5,&local_7c,&local_80,method);
    iVar3 = local_7c;
    iVar8 = local_80;
    if ((char)bVar4 != '\0') {
      pSVar5 = (entry->fields)._Keywords_k__BackingField;
      bVar4 = System_String__IsNullOrEmpty(pSVar5,(MethodInfo *)0x0);
      if ((iVar3 < 0) || ((char)bVar4 != '\0')) {
LAB_03ae12bc:
        query = (System_String_o *)**(long **)(DAT_057110b0 + 0xb8);
      }
      else {
        if (pSVar5 == (System_String_o *)0x0) goto LAB_03ae172d;
        if ((pSVar5->fields)._stringLength < iVar8 + iVar3) goto LAB_03ae12bc;
        query = System_String__Substring(pSVar5,iVar3,iVar8,(MethodInfo *)0x0);
      }
      (__return_storage_ptr__->fields).Score = 0;
      (__return_storage_ptr__->fields).DisplayStart = 0;
      *(undefined8 *)&(__return_storage_ptr__->fields).DisplayLength = 0;
      (__return_storage_ptr__->fields).HiddenText = (System_String_o *)0x0;
      (__return_storage_ptr__->fields).DisplayIndices = (System_Int32_array *)0x0;
      (__return_storage_ptr__->fields).Score = 0x3c;
      (__return_storage_ptr__->fields).DisplayStart = -1;
      (__return_storage_ptr__->fields).DisplayLength = 0;
      lVar2 = DAT_057110b0;
      goto joined_r0x03ae1635;
    }
    bVar4 = Gisketch_Aottg2UI_Search_GisketchSearchService__FindInitials
                      (pSVar6,pSVar5,&local_7c,&local_80,method);
    if (((char)bVar4 != '\0') ||
       (bVar4 = Gisketch_Aottg2UI_Search_GisketchSearchService__FindInitials
                          (local_58,pSVar5,&local_7c,&local_80,method), (char)bVar4 != '\0')) {
      lVar2 = DAT_057110b0;
      query = (System_String_o *)**(long **)(DAT_057110b0 + 0xb8);
      (__return_storage_ptr__->fields).Score = 0;
      (__return_storage_ptr__->fields).DisplayStart = 0;
      *(undefined8 *)&(__return_storage_ptr__->fields).DisplayLength = 0;
      (__return_storage_ptr__->fields).HiddenText = (System_String_o *)0x0;
      (__return_storage_ptr__->fields).DisplayIndices = (System_Int32_array *)0x0;
      (__return_storage_ptr__->fields).Score = 0x32;
      (__return_storage_ptr__->fields).DisplayStart = local_7c;
      (__return_storage_ptr__->fields).DisplayLength = local_80;
      goto joined_r0x03ae1635;
    }
    bVar4 = Gisketch_Aottg2UI_Search_GisketchSearchService__FindInitials
                      (pSVar7,pSVar5,&local_7c,&local_80,method);
    iVar3 = local_7c;
    iVar8 = local_80;
    if ((char)bVar4 != '\0') {
      pSVar5 = (entry->fields)._Keywords_k__BackingField;
      bVar4 = System_String__IsNullOrEmpty(pSVar5,(MethodInfo *)0x0);
      if ((iVar3 < 0) || ((char)bVar4 != '\0')) {
LAB_03ae13f7:
        query = (System_String_o *)**(long **)(DAT_057110b0 + 0xb8);
      }
      else {
        if (pSVar5 == (System_String_o *)0x0) goto LAB_03ae172d;
        if ((pSVar5->fields)._stringLength < iVar8 + iVar3) goto LAB_03ae13f7;
        query = System_String__Substring(pSVar5,iVar3,iVar8,(MethodInfo *)0x0);
      }
      (__return_storage_ptr__->fields).Score = 0;
      (__return_storage_ptr__->fields).DisplayStart = 0;
      *(undefined8 *)&(__return_storage_ptr__->fields).DisplayLength = 0;
      (__return_storage_ptr__->fields).HiddenText = (System_String_o *)0x0;
      (__return_storage_ptr__->fields).DisplayIndices = (System_Int32_array *)0x0;
      (__return_storage_ptr__->fields).Score = 0x32;
      (__return_storage_ptr__->fields).DisplayStart = -1;
      (__return_storage_ptr__->fields).DisplayLength = 0;
      lVar2 = DAT_057110b0;
      goto joined_r0x03ae1635;
    }
    bVar4 = Gisketch_Aottg2UI_Search_GisketchSearchService__FindCompact
                      (pSVar6,pSVar5,&local_7c,&local_80,&local_48,in_R9);
    if (((char)bVar4 != '\0') ||
       (bVar4 = Gisketch_Aottg2UI_Search_GisketchSearchService__FindCompact
                          (local_58,pSVar5,&local_7c,&local_80,&local_48,in_R9), (char)bVar4 != '\0'
       )) {
      pSVar9 = local_48;
      lVar2 = DAT_057110b0;
      pSVar5 = (System_String_o *)**(long **)(DAT_057110b0 + 0xb8);
      (__return_storage_ptr__->fields).Score = 0;
      (__return_storage_ptr__->fields).DisplayStart = 0;
      *(undefined8 *)&(__return_storage_ptr__->fields).DisplayLength = 0;
      (__return_storage_ptr__->fields).HiddenText = (System_String_o *)0x0;
      (__return_storage_ptr__->fields).DisplayIndices = (System_Int32_array *)0x0;
      (__return_storage_ptr__->fields).Score = 0x2d;
      (__return_storage_ptr__->fields).DisplayStart = local_7c;
      (__return_storage_ptr__->fields).DisplayLength = local_80;
      if (pSVar5 == (System_String_o *)0x0) {
        pSVar5 = (System_String_o *)**(long **)(lVar2 + 0xb8);
      }
      (__return_storage_ptr__->fields).HiddenText = pSVar5;
      il2cpp_runtime_glue(&(__return_storage_ptr__->fields).HiddenText);
      (__return_storage_ptr__->fields).DisplayIndices = pSVar9;
      goto LAB_03ae0f74;
    }
    bVar4 = Gisketch_Aottg2UI_Search_GisketchSearchService__FindCompact
                      (pSVar7,pSVar5,&local_7c,&local_80,&local_38,in_R9);
    iVar3 = local_7c;
    iVar8 = local_80;
    if ((char)bVar4 != '\0') {
      pSVar5 = (entry->fields)._Keywords_k__BackingField;
      bVar4 = System_String__IsNullOrEmpty(pSVar5,(MethodInfo *)0x0);
      if ((iVar3 < 0) || ((char)bVar4 != '\0')) {
LAB_03ae1556:
        query = (System_String_o *)**(long **)(DAT_057110b0 + 0xb8);
      }
      else {
        if (pSVar5 == (System_String_o *)0x0) goto LAB_03ae172d;
        if ((pSVar5->fields)._stringLength < iVar8 + iVar3) goto LAB_03ae1556;
        query = System_String__Substring(pSVar5,iVar3,iVar8,(MethodInfo *)0x0);
      }
      (__return_storage_ptr__->fields).Score = 0;
      (__return_storage_ptr__->fields).DisplayStart = 0;
      *(undefined8 *)&(__return_storage_ptr__->fields).DisplayLength = 0;
      (__return_storage_ptr__->fields).HiddenText = (System_String_o *)0x0;
      (__return_storage_ptr__->fields).DisplayIndices = (System_Int32_array *)0x0;
      (__return_storage_ptr__->fields).Score = 0x2d;
      (__return_storage_ptr__->fields).DisplayStart = -1;
      (__return_storage_ptr__->fields).DisplayLength = 0;
      lVar2 = DAT_057110b0;
      goto joined_r0x03ae1635;
    }
    iVar8 = 0;
    bVar4 = System_String__Contains(pSVar6,pSVar5,(MethodInfo *)0x0);
    if (((char)bVar4 != '\0') ||
       (bVar4 = System_String__Contains(local_58,pSVar5,(MethodInfo *)0x0), (char)bVar4 != '\0')) {
      iStack_74 = System_String__IndexOf(pSVar6,pSVar5,(MethodInfo *)0x0);
      if (-1 < iStack_74) {
        if (pSVar5 == (System_String_o *)0x0) goto LAB_03ae172d;
        iVar8 = (pSVar5->fields)._stringLength;
      }
      plVar1 = *(long **)(DAT_057110b0 + 0xb8);
      local_68 = (System_String_o *)*plVar1;
      local_78 = 0x28;
      iStack_70 = iVar8;
      goto joined_r0x03ae11e1;
    }
    if (local_50 == (System_String_o *)0x0) goto LAB_03ae172d;
    bVar4 = System_String__Contains(local_50,pSVar5,(MethodInfo *)0x0);
    if ((char)bVar4 == '\0') {
      if (local_40 == (System_String_o *)0x0) goto LAB_03ae172d;
      bVar4 = System_String__Contains(local_40,pSVar5,(MethodInfo *)0x0);
      lVar2 = DAT_057110b0;
      if ((char)bVar4 == '\0') goto LAB_03ae170f;
      query = (System_String_o *)**(long **)(DAT_057110b0 + 0xb8);
      (__return_storage_ptr__->fields).Score = 0;
      (__return_storage_ptr__->fields).DisplayStart = 0;
      *(undefined8 *)&(__return_storage_ptr__->fields).DisplayLength = 0;
      (__return_storage_ptr__->fields).HiddenText = (System_String_o *)0x0;
      (__return_storage_ptr__->fields).DisplayIndices = (System_Int32_array *)0x0;
      (__return_storage_ptr__->fields).Score = 0x19;
      (__return_storage_ptr__->fields).DisplayStart = -1;
      (__return_storage_ptr__->fields).DisplayLength = 0;
      goto joined_r0x03ae1635;
    }
    (__return_storage_ptr__->fields).Score = 0;
    (__return_storage_ptr__->fields).DisplayStart = 0;
    *(undefined8 *)&(__return_storage_ptr__->fields).DisplayLength = 0;
    (__return_storage_ptr__->fields).HiddenText = (System_String_o *)0x0;
    (__return_storage_ptr__->fields).DisplayIndices = (System_Int32_array *)0x0;
    (__return_storage_ptr__->fields).Score = 0x28;
    (__return_storage_ptr__->fields).DisplayStart = -1;
    (__return_storage_ptr__->fields).DisplayLength = 0;
    if (query == (System_String_o *)0x0) {
      query = (System_String_o *)**(long **)(DAT_057110b0 + 0xb8);
    }
    (__return_storage_ptr__->fields).HiddenText = query;
  }
  else {
    lVar2 = DAT_057110b0;
    query = (System_String_o *)**(long **)(DAT_057110b0 + 0xb8);
    (__return_storage_ptr__->fields).Score = 0;
    (__return_storage_ptr__->fields).DisplayStart = 0;
    *(undefined8 *)&(__return_storage_ptr__->fields).DisplayLength = 0;
    (__return_storage_ptr__->fields).HiddenText = (System_String_o *)0x0;
    (__return_storage_ptr__->fields).DisplayIndices = (System_Int32_array *)0x0;
    (__return_storage_ptr__->fields).Score = 0x3c;
    (__return_storage_ptr__->fields).DisplayStart = local_7c;
    (__return_storage_ptr__->fields).DisplayLength = local_80;
joined_r0x03ae1635:
    if (query == (System_String_o *)0x0) {
      query = (System_String_o *)**(long **)(lVar2 + 0xb8);
    }
    (__return_storage_ptr__->fields).HiddenText = query;
  }
  il2cpp_runtime_glue(&(__return_storage_ptr__->fields).HiddenText,query);
  (__return_storage_ptr__->fields).DisplayIndices = (System_Int32_array *)0x0;
  pSVar9 = (System_Int32_array *)0x0;
LAB_03ae0f74:
  il2cpp_runtime_glue(&(__return_storage_ptr__->fields).DisplayIndices,pSVar9);
  return __return_storage_ptr__;
}


// Gisketch.Aottg2UI.Search.GisketchSearchService$$Markup
// il2cpp: System_String_o* Gisketch_Aottg2UI_Search_GisketchSearchService__Markup (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o* entry, System_String_o* query, bool active, System_String_o* matchHex, const MethodInfo* method);
// 0x3ae1e80

System_String_o *
Gisketch_Aottg2UI_Search_GisketchSearchService__Markup
          (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *entry,System_String_o *query,
          bool_conflict active,System_String_o *matchHex,MethodInfo *method)

{
  MethodInfo *in_RAX;
  System_String_o *pSVar1;
  undefined4 in_register_00000014;
  
  if (entry == (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *)0x0) {
    pSVar1 = (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
  }
  else {
    pSVar1 = Gisketch_Aottg2UI_Search_GisketchSearchEntry__PathTitle
                       (entry,1,(MethodInfo *)CONCAT44(in_register_00000014,active));
  }
  pSVar1 = Gisketch_Aottg2UI_Search_GisketchSearchService__Markup
                     (entry,query,active & 0xff,matchHex,pSVar1,(System_String_o *)0x0,in_RAX);
  return pSVar1;
}


// Gisketch.Aottg2UI.Search.GisketchSearchService$$Markup
// il2cpp: System_String_o* Gisketch_Aottg2UI_Search_GisketchSearchService__Markup (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o* entry, System_String_o* query, bool active, System_String_o* matchHex, System_String_o* displayTitle, System_String_o* normalHex, const MethodInfo* method);
// 0x3ae1ef0

System_String_o *
Gisketch_Aottg2UI_Search_GisketchSearchService__Markup
          (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *entry,System_String_o *query,
          bool_conflict active,System_String_o *matchHex,System_String_o *displayTitle,
          System_String_o *normalHex,MethodInfo *method)

{
  Gisketch_Aottg2UI_Search_GisketchSearchMatch_o match;
  bool_conflict bVar1;
  System_String_o *pSVar2;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_00;
  undefined8 local_78;
  undefined8 uStack_70;
  Gisketch_Aottg2UI_Search_GisketchSearchMatch_o local_38;
  
  pSVar2 = displayTitle;
  if (displayTitle == (System_String_o *)0x0) {
    pSVar2 = (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
  }
  Gisketch_Aottg2UI_Search_GisketchSearchService__Match
            (&local_38,entry,query,pSVar2,(MethodInfo *)displayTitle);
  local_78 = CONCAT44(local_38.fields._12_4_,local_38.fields.DisplayLength);
  uStack_70 = CONCAT44(local_38.fields.HiddenText._4_4_,local_38.fields.HiddenText._0_4_);
  if ((local_38.fields.Score < 2) || (local_38.fields.DisplayStart < 0)) {
    if (DAT_057013a7 == '\0') {
      il2cpp_init_method_metadata(&"\x2039");
      il2cpp_init_method_metadata(&"<");
      DAT_057013a7 = '\x01';
    }
    bVar1 = System_String__IsNullOrEmpty(pSVar2,(MethodInfo *)0x0);
    if ((char)bVar1 == '\0') {
      if (pSVar2 == (System_String_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      pSVar2 = System_String__Replace(pSVar2,"<","\x2039",(MethodInfo *)0x0);
      method_00 = extraout_RDX_00;
    }
    else {
      pSVar2 = (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
      method_00 = extraout_RDX;
    }
    pSVar2 = Gisketch_Aottg2UI_Search_GisketchSearchService__WrapNormal(pSVar2,normalHex,method_00);
  }
  else {
    match.fields.DisplayStart = local_38.fields.DisplayStart;
    match.fields.Score = local_38.fields.Score;
    match.fields._8_8_ = local_78;
    match.fields.HiddenText = (System_String_o *)uStack_70;
    match.fields.DisplayIndices = local_38.fields.DisplayIndices;
    pSVar2 = Gisketch_Aottg2UI_Search_GisketchSearchService__MarkRange
                       (pSVar2,match,0,matchHex,normalHex,(MethodInfo *)displayTitle);
  }
  return pSVar2;
}


// Gisketch.Aottg2UI.Search.GisketchSearchService$$Empty
// il2cpp: System_Collections_Generic_IEnumerable_GisketchSearchEntry__o* Gisketch_Aottg2UI_Search_GisketchSearchService__Empty (const MethodInfo* method);
// 0x3ae0da0

System_Collections_Generic_IEnumerable_GisketchSearchEntry__o *
Gisketch_Aottg2UI_Search_GisketchSearchService__Empty(MethodInfo *method)

{
  int32_t iVar1;
  Il2CppObject *__this;
  
  if (DAT_057013a3 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Empty_d__5);
    DAT_057013a3 = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_Empty_d__5);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  *(undefined4 *)&__this[1].klass = 0xfffffffe;
  iVar1 = System_Environment__get_CurrentManagedThreadId((MethodInfo *)0x0);
  *(int32_t *)&__this[2].klass = iVar1;
  return (System_Collections_Generic_IEnumerable_GisketchSearchEntry__o *)__this;
}


// Gisketch.Aottg2UI.Search.GisketchSearchService$$Visible
// il2cpp: Gisketch_Aottg2UI_Search_GisketchSearchMatch_o Gisketch_Aottg2UI_Search_GisketchSearchService__Visible (System_String_o* display, System_String_o* needle, int32_t score, const MethodInfo* method);
// 0x3ae17e0

Gisketch_Aottg2UI_Search_GisketchSearchMatch_o *
Gisketch_Aottg2UI_Search_GisketchSearchService__Visible
          (Gisketch_Aottg2UI_Search_GisketchSearchMatch_o *__return_storage_ptr__,
          System_String_o *display,System_String_o *needle,int32_t score,MethodInfo *method)

{
  long lVar1;
  int32_t iVar2;
  System_String_o *pSVar3;
  int32_t iVar4;
  
  if (display != (System_String_o *)0x0) {
    iVar4 = 0;
    iVar2 = System_String__IndexOf(display,needle,(MethodInfo *)0x0);
    lVar1 = DAT_057110b0;
    if (-1 < iVar2) {
      if (needle == (System_String_o *)0x0) goto LAB_03ae1882;
      iVar4 = (needle->fields)._stringLength;
    }
    pSVar3 = (System_String_o *)**(long **)(DAT_057110b0 + 0xb8);
    (__return_storage_ptr__->fields).Score = 0;
    (__return_storage_ptr__->fields).DisplayStart = 0;
    *(undefined8 *)&(__return_storage_ptr__->fields).DisplayLength = 0;
    (__return_storage_ptr__->fields).HiddenText = (System_String_o *)0x0;
    (__return_storage_ptr__->fields).DisplayIndices = (System_Int32_array *)0x0;
    (__return_storage_ptr__->fields).Score = score;
    (__return_storage_ptr__->fields).DisplayStart = iVar2;
    (__return_storage_ptr__->fields).DisplayLength = iVar4;
    if (pSVar3 == (System_String_o *)0x0) {
      pSVar3 = (System_String_o *)**(long **)(lVar1 + 0xb8);
    }
    (__return_storage_ptr__->fields).HiddenText = pSVar3;
    il2cpp_runtime_glue(&(__return_storage_ptr__->fields).HiddenText);
    (__return_storage_ptr__->fields).DisplayIndices = (System_Int32_array *)0x0;
    il2cpp_runtime_glue(&(__return_storage_ptr__->fields).DisplayIndices,0);
    return __return_storage_ptr__;
  }
LAB_03ae1882:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Search.GisketchSearchService$$MarkRange
// il2cpp: System_String_o* Gisketch_Aottg2UI_Search_GisketchSearchService__MarkRange (System_String_o* text, Gisketch_Aottg2UI_Search_GisketchSearchMatch_o match, bool active, System_String_o* matchHex, System_String_o* normalHex, const MethodInfo* method);
// 0x3ae2200

System_String_o *
Gisketch_Aottg2UI_Search_GisketchSearchService__MarkRange
          (System_String_o *text,Gisketch_Aottg2UI_Search_GisketchSearchMatch_o match,
          bool_conflict active,System_String_o *matchHex,System_String_o *normalHex,
          MethodInfo *method)

{
  char cVar1;
  int iVar2;
  bool_conflict bVar3;
  System_String_o *pSVar4;
  System_String_o *pSVar5;
  long lVar6;
  System_Text_StringBuilder_o *__this;
  System_String_o *pSVar7;
  uint uVar8;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
  MethodInfo *extraout_RDX_03;
  MethodInfo *extraout_RDX_04;
  MethodInfo *extraout_RDX_05;
  MethodInfo *extraout_RDX_06;
  ulong uVar9;
  MethodInfo *pMVar10;
  MethodInfo *extraout_RDX_07;
  MethodInfo *extraout_RDX_08;
  MethodInfo *extraout_RDX_09;
  MethodInfo *extraout_RDX_10;
  long lVar11;
  uint startIndex;
  ulong uVar12;
  uint uVar13;
  long lVar14;
  
  if ((match.fields.DisplayIndices != (System_Int32_array *)0x0) &&
     ((match.fields.DisplayIndices)->max_length != 0)) {
    if (DAT_057013a4 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_bool);
      il2cpp_init_method_metadata(&TypeInfo_StringBuilder);
      DAT_057013a4 = '\x01';
    }
    if ((text != (System_String_o *)0x0) &&
       (lVar6 = il2cpp_glue_02274930(TypeInfo_bool), match.fields.DisplayIndices != (System_Int32_array *)0x0
       )) {
      uVar12 = (match.fields.DisplayIndices)->max_length;
      iVar2 = (int)uVar12;
      if (lVar6 == 0) {
        if (0 < iVar2) {
          lVar11 = 0;
          do {
            if (-1 < (match.fields.DisplayIndices)->m_Items[lVar11]) goto LAB_03ae2890;
            lVar11 = lVar11 + 1;
          } while ((int)lVar11 < iVar2);
        }
      }
      else if (0 < (long)(uVar12 << 0x20)) {
        uVar9 = 0;
        if ((uVar12 & 0xffffffff) != 0) {
          do {
            uVar8 = (match.fields.DisplayIndices)->m_Items[uVar9];
            if ((-1 < (long)(int)uVar8) && ((int)uVar8 < (int)*(uint *)(lVar6 + 0x18))) {
              if (*(uint *)(lVar6 + 0x18) <= uVar8) break;
              *(undefined1 *)(lVar6 + 0x20 + (long)(int)uVar8) = 1;
            }
            uVar9 = uVar9 + 1;
            if ((long)iVar2 <= (long)uVar9) goto LAB_03ae2603;
          } while ((uVar12 & 0xffffffff) != uVar9);
        }
        goto LAB_03ae2886;
      }
LAB_03ae2603:
      __this = (System_Text_StringBuilder_o *)il2cpp_runtime_glue(TypeInfo_StringBuilder);
      System_Text_StringBuilder___ctor(__this,(MethodInfo *)0x0);
      uVar8 = (text->fields)._stringLength;
      uVar12 = (ulong)uVar8;
      if ((int)uVar8 < 1) {
LAB_03ae27a4:
        if (__this != (System_Text_StringBuilder_o *)0x0) {
          pSVar7 = (System_String_o *)
                   (*(__this->klass->vtable)._3_ToString.methodPtr)
                             (__this,(__this->klass->vtable)._3_ToString.method);
          return pSVar7;
        }
      }
      else if (lVar6 != 0) {
        if (__this == (System_Text_StringBuilder_o *)0x0) {
          if ((int)*(ulong *)(lVar6 + 0x18) != 0) {
            cVar1 = *(char *)(lVar6 + 0x20);
            uVar9 = 0;
            do {
              if ((*(ulong *)(lVar6 + 0x18) & 0xffffffff) == uVar9) goto LAB_03ae2886;
            } while (((*(char *)(lVar6 + 0x20 + uVar9) != '\0') == (cVar1 != '\0')) &&
                    (uVar9 = uVar9 + 1, uVar12 != uVar9));
            pSVar7 = System_String__Substring(text,0,(int32_t)uVar9,(MethodInfo *)0x0);
            if (DAT_057013a7 == '\0') {
              il2cpp_init_method_metadata(&"\x2039");
              il2cpp_init_method_metadata(&"<");
              DAT_057013a7 = '\x01';
            }
            bVar3 = System_String__IsNullOrEmpty(pSVar7,(MethodInfo *)0x0);
            if ((char)bVar3 == '\0') {
              if (pSVar7 == (System_String_o *)0x0) goto LAB_03ae2890;
              pSVar7 = System_String__Replace(pSVar7,"<","\x2039",(MethodInfo *)0x0);
              pMVar10 = extraout_RDX_10;
            }
            else {
              pSVar7 = (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
              pMVar10 = extraout_RDX_09;
            }
            if (cVar1 == '\0') {
              Gisketch_Aottg2UI_Search_GisketchSearchService__WrapNormal(pSVar7,normalHex,pMVar10);
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
            Gisketch_Aottg2UI_Search_GisketchSearchService__Wrap(pSVar7,matchHex,pMVar10);
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
        }
        else {
          uVar8 = *(uint *)(lVar6 + 0x18);
          startIndex = 0;
          if (uVar8 != 0) {
            do {
              lVar11 = (long)(int)startIndex;
              cVar1 = *(char *)(lVar6 + 0x20 + lVar11);
              uVar13 = startIndex;
              if ((int)startIndex < (int)uVar12) {
                lVar14 = 0;
                do {
                  if (uVar8 <= (int)lVar14 + startIndex) goto LAB_03ae2886;
                } while (((cVar1 != '\0') == (*(char *)(lVar6 + 0x20 + lVar11 + lVar14) != '\0')) &&
                        (lVar14 = lVar14 + 1, (int)uVar12 - lVar11 != lVar14));
                uVar13 = (int)lVar14 + startIndex;
              }
              pSVar7 = System_String__Substring
                                 (text,startIndex,uVar13 - startIndex,(MethodInfo *)0x0);
              if (DAT_057013a7 == '\0') {
                il2cpp_init_method_metadata(&"\x2039");
                il2cpp_init_method_metadata(&"<");
                DAT_057013a7 = '\x01';
              }
              bVar3 = System_String__IsNullOrEmpty(pSVar7,(MethodInfo *)0x0);
              if ((char)bVar3 == '\0') {
                if (pSVar7 == (System_String_o *)0x0) goto LAB_03ae2890;
                pSVar7 = System_String__Replace(pSVar7,"<","\x2039",(MethodInfo *)0x0);
                pMVar10 = extraout_RDX_08;
                if (cVar1 != '\0') goto LAB_03ae2660;
LAB_03ae2796:
                pSVar7 = Gisketch_Aottg2UI_Search_GisketchSearchService__WrapNormal
                                   (pSVar7,normalHex,pMVar10);
              }
              else {
                pSVar7 = (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
                pMVar10 = extraout_RDX_07;
                if (cVar1 == '\0') goto LAB_03ae2796;
LAB_03ae2660:
                pSVar7 = Gisketch_Aottg2UI_Search_GisketchSearchService__Wrap
                                   (pSVar7,matchHex,pMVar10);
              }
              System_Text_StringBuilder__Append(__this,pSVar7,(MethodInfo *)0x0);
              uVar8 = (text->fields)._stringLength;
              uVar12 = (ulong)uVar8;
              if ((int)uVar8 <= (int)uVar13) goto LAB_03ae27a4;
              uVar8 = *(uint *)(lVar6 + 0x18);
              startIndex = uVar13;
            } while (uVar13 < uVar8);
          }
        }
LAB_03ae2886:
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
    }
LAB_03ae2890:
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if ((-1 < match.fields.DisplayStart) && (0 < match.fields.DisplayLength)) {
    if (text == (System_String_o *)0x0) goto LAB_03ae24da;
    if (match.fields.DisplayLength + match.fields.DisplayStart <= (text->fields)._stringLength) {
      pSVar7 = System_String__Substring(text,0,match.fields.DisplayStart,(MethodInfo *)0x0);
      if (DAT_057013a7 == '\0') {
        il2cpp_init_method_metadata(&"\x2039");
        il2cpp_init_method_metadata(&"<");
        DAT_057013a7 = '\x01';
      }
      bVar3 = System_String__IsNullOrEmpty(pSVar7,(MethodInfo *)0x0);
      if ((char)bVar3 == '\0') {
        if (pSVar7 == (System_String_o *)0x0) goto LAB_03ae24da;
        pSVar7 = System_String__Replace(pSVar7,"<","\x2039",(MethodInfo *)0x0);
        pMVar10 = extraout_RDX_02;
      }
      else {
        pSVar7 = (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
        pMVar10 = extraout_RDX_01;
      }
      pSVar7 = Gisketch_Aottg2UI_Search_GisketchSearchService__WrapNormal(pSVar7,normalHex,pMVar10);
      pSVar4 = System_String__Substring
                         (text,match.fields.DisplayStart,match.fields.DisplayLength,
                          (MethodInfo *)0x0);
      if (DAT_057013a7 == '\0') {
        il2cpp_init_method_metadata(&"\x2039");
        il2cpp_init_method_metadata(&"<");
        DAT_057013a7 = '\x01';
      }
      bVar3 = System_String__IsNullOrEmpty(pSVar4,(MethodInfo *)0x0);
      if ((char)bVar3 == '\0') {
        if (pSVar4 == (System_String_o *)0x0) goto LAB_03ae24da;
        pSVar4 = System_String__Replace(pSVar4,"<","\x2039",(MethodInfo *)0x0);
        pMVar10 = extraout_RDX_04;
      }
      else {
        pSVar4 = (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
        pMVar10 = extraout_RDX_03;
      }
      pSVar4 = Gisketch_Aottg2UI_Search_GisketchSearchService__Wrap(pSVar4,matchHex,pMVar10);
      pSVar5 = System_String__Substring
                         (text,match.fields.DisplayLength + match.fields.DisplayStart,
                          (MethodInfo *)0x0);
      if (DAT_057013a7 == '\0') {
        il2cpp_init_method_metadata(&"\x2039");
        il2cpp_init_method_metadata(&"<");
        DAT_057013a7 = '\x01';
      }
      bVar3 = System_String__IsNullOrEmpty(pSVar5,(MethodInfo *)0x0);
      if ((char)bVar3 == '\0') {
        if (pSVar5 == (System_String_o *)0x0) goto LAB_03ae24da;
        pSVar5 = System_String__Replace(pSVar5,"<","\x2039",(MethodInfo *)0x0);
        pMVar10 = extraout_RDX_06;
      }
      else {
        pSVar5 = (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
        pMVar10 = extraout_RDX_05;
      }
      pSVar5 = Gisketch_Aottg2UI_Search_GisketchSearchService__WrapNormal(pSVar5,normalHex,pMVar10);
      pSVar7 = System_String__Concat(pSVar7,pSVar4,pSVar5,(MethodInfo *)0x0);
      return pSVar7;
    }
  }
  if (DAT_057013a7 == '\0') {
    il2cpp_init_method_metadata(&"\x2039");
    il2cpp_init_method_metadata(&"<");
    DAT_057013a7 = '\x01';
  }
  bVar3 = System_String__IsNullOrEmpty(text,(MethodInfo *)0x0);
  if ((char)bVar3 == '\0') {
    if (text == (System_String_o *)0x0) {
LAB_03ae24da:
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    pSVar7 = System_String__Replace(text,"<","\x2039",(MethodInfo *)0x0);
    pMVar10 = extraout_RDX_00;
  }
  else {
    pSVar7 = (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
    pMVar10 = extraout_RDX;
  }
  pSVar7 = Gisketch_Aottg2UI_Search_GisketchSearchService__WrapNormal(pSVar7,normalHex,pMVar10);
  return pSVar7;
}


// Gisketch.Aottg2UI.Search.GisketchSearchService$$MarkIndices
// il2cpp: System_String_o* Gisketch_Aottg2UI_Search_GisketchSearchService__MarkIndices (System_String_o* text, System_Int32_array* indices, System_String_o* matchHex, System_String_o* normalHex, const MethodInfo* method);
// 0x3ae2510

System_String_o *
Gisketch_Aottg2UI_Search_GisketchSearchService__MarkIndices
          (System_String_o *text,System_Int32_array *indices,System_String_o *matchHex,
          System_String_o *normalHex,MethodInfo *method)

{
  char cVar1;
  int iVar2;
  bool_conflict bVar3;
  long lVar4;
  System_Text_StringBuilder_o *__this;
  System_String_o *pSVar5;
  uint uVar6;
  ulong uVar7;
  MethodInfo *pMVar8;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
  long lVar9;
  uint startIndex;
  ulong uVar10;
  uint uVar11;
  long lVar12;
  
  if (DAT_057013a4 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_bool);
    il2cpp_init_method_metadata(&TypeInfo_StringBuilder);
    DAT_057013a4 = '\x01';
  }
  if ((text != (System_String_o *)0x0) &&
     (lVar4 = il2cpp_glue_02274930(TypeInfo_bool), indices != (System_Int32_array *)0x0)) {
    uVar10 = indices->max_length;
    iVar2 = (int)uVar10;
    if (lVar4 == 0) {
      if (0 < iVar2) {
        lVar9 = 0;
        do {
          if (-1 < indices->m_Items[lVar9]) goto LAB_03ae2890;
          lVar9 = lVar9 + 1;
        } while ((int)lVar9 < iVar2);
      }
    }
    else if (0 < (long)(uVar10 << 0x20)) {
      uVar7 = 0;
      if ((uVar10 & 0xffffffff) != 0) {
        do {
          uVar6 = indices->m_Items[uVar7];
          if ((-1 < (long)(int)uVar6) && ((int)uVar6 < (int)*(uint *)(lVar4 + 0x18))) {
            if (*(uint *)(lVar4 + 0x18) <= uVar6) break;
            *(undefined1 *)(lVar4 + 0x20 + (long)(int)uVar6) = 1;
          }
          uVar7 = uVar7 + 1;
          if ((long)iVar2 <= (long)uVar7) goto LAB_03ae2603;
        } while ((uVar10 & 0xffffffff) != uVar7);
      }
      goto LAB_03ae2886;
    }
LAB_03ae2603:
    __this = (System_Text_StringBuilder_o *)il2cpp_runtime_glue(TypeInfo_StringBuilder);
    System_Text_StringBuilder___ctor(__this,(MethodInfo *)0x0);
    uVar6 = (text->fields)._stringLength;
    uVar10 = (ulong)uVar6;
    if ((int)uVar6 < 1) {
LAB_03ae27a4:
      if (__this != (System_Text_StringBuilder_o *)0x0) {
        pSVar5 = (System_String_o *)
                 (*(__this->klass->vtable)._3_ToString.methodPtr)
                           (__this,(__this->klass->vtable)._3_ToString.method);
        return pSVar5;
      }
    }
    else if (lVar4 != 0) {
      if (__this == (System_Text_StringBuilder_o *)0x0) {
        if ((int)*(ulong *)(lVar4 + 0x18) != 0) {
          cVar1 = *(char *)(lVar4 + 0x20);
          uVar7 = 0;
          do {
            if ((*(ulong *)(lVar4 + 0x18) & 0xffffffff) == uVar7) goto LAB_03ae2886;
          } while (((*(char *)(lVar4 + 0x20 + uVar7) != '\0') == (cVar1 != '\0')) &&
                  (uVar7 = uVar7 + 1, uVar10 != uVar7));
          pSVar5 = System_String__Substring(text,0,(int32_t)uVar7,(MethodInfo *)0x0);
          if (DAT_057013a7 == '\0') {
            il2cpp_init_method_metadata(&"\x2039");
            il2cpp_init_method_metadata(&"<");
            DAT_057013a7 = '\x01';
          }
          bVar3 = System_String__IsNullOrEmpty(pSVar5,(MethodInfo *)0x0);
          if ((char)bVar3 == '\0') {
            if (pSVar5 == (System_String_o *)0x0) goto LAB_03ae2890;
            pSVar5 = System_String__Replace(pSVar5,"<","\x2039",(MethodInfo *)0x0);
            pMVar8 = extraout_RDX_02;
          }
          else {
            pSVar5 = (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
            pMVar8 = extraout_RDX_01;
          }
          if (cVar1 == '\0') {
            Gisketch_Aottg2UI_Search_GisketchSearchService__WrapNormal(pSVar5,normalHex,pMVar8);
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          Gisketch_Aottg2UI_Search_GisketchSearchService__Wrap(pSVar5,matchHex,pMVar8);
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
      }
      else {
        uVar6 = *(uint *)(lVar4 + 0x18);
        startIndex = 0;
        if (uVar6 != 0) {
          do {
            lVar9 = (long)(int)startIndex;
            cVar1 = *(char *)(lVar4 + 0x20 + lVar9);
            uVar11 = startIndex;
            if ((int)startIndex < (int)uVar10) {
              lVar12 = 0;
              do {
                if (uVar6 <= (int)lVar12 + startIndex) goto LAB_03ae2886;
              } while (((cVar1 != '\0') == (*(char *)(lVar4 + 0x20 + lVar9 + lVar12) != '\0')) &&
                      (lVar12 = lVar12 + 1, (int)uVar10 - lVar9 != lVar12));
              uVar11 = (int)lVar12 + startIndex;
            }
            pSVar5 = System_String__Substring(text,startIndex,uVar11 - startIndex,(MethodInfo *)0x0)
            ;
            if (DAT_057013a7 == '\0') {
              il2cpp_init_method_metadata(&"\x2039");
              il2cpp_init_method_metadata(&"<");
              DAT_057013a7 = '\x01';
            }
            bVar3 = System_String__IsNullOrEmpty(pSVar5,(MethodInfo *)0x0);
            if ((char)bVar3 == '\0') {
              if (pSVar5 == (System_String_o *)0x0) goto LAB_03ae2890;
              pSVar5 = System_String__Replace(pSVar5,"<","\x2039",(MethodInfo *)0x0);
              pMVar8 = extraout_RDX_00;
              if (cVar1 != '\0') goto LAB_03ae2660;
LAB_03ae2796:
              pSVar5 = Gisketch_Aottg2UI_Search_GisketchSearchService__WrapNormal
                                 (pSVar5,normalHex,pMVar8);
            }
            else {
              pSVar5 = (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
              pMVar8 = extraout_RDX;
              if (cVar1 == '\0') goto LAB_03ae2796;
LAB_03ae2660:
              pSVar5 = Gisketch_Aottg2UI_Search_GisketchSearchService__Wrap(pSVar5,matchHex,pMVar8);
            }
            System_Text_StringBuilder__Append(__this,pSVar5,(MethodInfo *)0x0);
            uVar6 = (text->fields)._stringLength;
            uVar10 = (ulong)uVar6;
            if ((int)uVar6 <= (int)uVar11) goto LAB_03ae27a4;
            uVar6 = *(uint *)(lVar4 + 0x18);
            startIndex = uVar11;
          } while (uVar11 < uVar6);
        }
      }
LAB_03ae2886:
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
  }
LAB_03ae2890:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Search.GisketchSearchService$$Wrap
// il2cpp: System_String_o* Gisketch_Aottg2UI_Search_GisketchSearchService__Wrap (System_String_o* text, System_String_o* matchHex, const MethodInfo* method);
// 0x3ae28d0

System_String_o *
Gisketch_Aottg2UI_Search_GisketchSearchService__Wrap
          (System_String_o *text,System_String_o *matchHex,MethodInfo *method)

{
  System_String_array *values;
  System_String_o *pSVar1;
  MethodInfo *extraout_RDX;
  
  if (DAT_057013a5 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_string);
    il2cpp_init_method_metadata(&"<color=#");
    il2cpp_init_method_metadata(&"</color>");
    il2cpp_init_method_metadata(&">");
    DAT_057013a5 = '\x01';
    method = extraout_RDX;
  }
  values = (System_String_array *)il2cpp_glue_02274930(TypeInfo_string,5,method);
  if (values != (System_String_array *)0x0) {
    if ((int)values->max_length != 0) {
      values->m_Items[0] = "<color=#";
      il2cpp_runtime_glue(values->m_Items);
      if (1 < (uint)values->max_length) {
        values->m_Items[1] = matchHex;
        il2cpp_runtime_glue(values->m_Items + 1,matchHex);
        if (2 < (uint)values->max_length) {
          values->m_Items[2] = ">";
          il2cpp_runtime_glue(values->m_Items + 2);
          if (3 < (uint)values->max_length) {
            values->m_Items[3] = text;
            il2cpp_runtime_glue(values->m_Items + 3,text);
            if (4 < (uint)values->max_length) {
              values->m_Items[4] = "</color>";
              il2cpp_runtime_glue(values->m_Items + 4);
              pSVar1 = System_String__Concat(values,(MethodInfo *)0x0);
              return pSVar1;
            }
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Search.GisketchSearchService$$WrapNormal
// il2cpp: System_String_o* Gisketch_Aottg2UI_Search_GisketchSearchService__WrapNormal (System_String_o* text, System_String_o* normalHex, const MethodInfo* method);
// 0x3ae20c0

System_String_o *
Gisketch_Aottg2UI_Search_GisketchSearchService__WrapNormal
          (System_String_o *text,System_String_o *normalHex,MethodInfo *method)

{
  bool_conflict bVar1;
  System_String_array *values;
  System_String_o *pSVar2;
  
  if (DAT_057013a6 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_string);
    il2cpp_init_method_metadata(&"<color=#");
    il2cpp_init_method_metadata(&"</color>");
    il2cpp_init_method_metadata(&">");
    DAT_057013a6 = '\x01';
  }
  bVar1 = System_String__IsNullOrEmpty(normalHex,(MethodInfo *)0x0);
  if ((char)bVar1 == '\0') {
    bVar1 = System_String__IsNullOrEmpty(text,(MethodInfo *)0x0);
    if ((char)bVar1 == '\0') {
      values = (System_String_array *)il2cpp_glue_02274930(TypeInfo_string,5);
      if (values == (System_String_array *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      if ((int)values->max_length != 0) {
        values->m_Items[0] = "<color=#";
        il2cpp_runtime_glue(values->m_Items);
        if (1 < (uint)values->max_length) {
          values->m_Items[1] = normalHex;
          il2cpp_runtime_glue(values->m_Items + 1,normalHex);
          if (2 < (uint)values->max_length) {
            values->m_Items[2] = ">";
            il2cpp_runtime_glue(values->m_Items + 2);
            if (3 < (uint)values->max_length) {
              values->m_Items[3] = text;
              il2cpp_runtime_glue(values->m_Items + 3,text);
              if (4 < (uint)values->max_length) {
                values->m_Items[4] = "</color>";
                il2cpp_runtime_glue(values->m_Items + 4);
                pSVar2 = System_String__Concat(values,(MethodInfo *)0x0);
                return pSVar2;
              }
            }
          }
        }
      }
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
  }
  return text;
}


// Gisketch.Aottg2UI.Search.GisketchSearchService$$Escape
// il2cpp: System_String_o* Gisketch_Aottg2UI_Search_GisketchSearchService__Escape (System_String_o* text, const MethodInfo* method);
// 0x3ae2040

System_String_o *
Gisketch_Aottg2UI_Search_GisketchSearchService__Escape(System_String_o *text,MethodInfo *method)

{
  bool_conflict bVar1;
  System_String_o *pSVar2;
  
  if (DAT_057013a7 == '\0') {
    il2cpp_init_method_metadata(&"\x2039");
    il2cpp_init_method_metadata(&"<");
    DAT_057013a7 = '\x01';
  }
  bVar1 = System_String__IsNullOrEmpty(text,(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    return (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
  }
  if (text != (System_String_o *)0x0) {
    pSVar2 = System_String__Replace(text,"<","\x2039",(MethodInfo *)0x0);
    return pSVar2;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Search.GisketchSearchService$$Lower
// il2cpp: System_String_o* Gisketch_Aottg2UI_Search_GisketchSearchService__Lower (System_String_o* value, const MethodInfo* method);
// 0x3ae1740

System_String_o *
Gisketch_Aottg2UI_Search_GisketchSearchService__Lower(System_String_o *value,MethodInfo *method)

{
  bool_conflict bVar1;
  System_String_o *pSVar2;
  
  bVar1 = System_String__IsNullOrEmpty(value,(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    return (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
  }
  if (value != (System_String_o *)0x0) {
    pSVar2 = System_String__ToLowerInvariant(value,(MethodInfo *)0x0);
    return pSVar2;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Search.GisketchSearchService$$FindToken
// il2cpp: bool Gisketch_Aottg2UI_Search_GisketchSearchService__FindToken (System_String_o* haystack, System_String_o* needle, int32_t* start, int32_t* length, const MethodInfo* method);
// 0x3ae1890

bool_conflict
Gisketch_Aottg2UI_Search_GisketchSearchService__FindToken
          (System_String_o *haystack,System_String_o *needle,int32_t *start,int32_t *length,
          MethodInfo *method)

{
  int length_00;
  byte bVar1;
  uint16_t uVar2;
  bool_conflict bVar3;
  System_String_o *a;
  int iVar4;
  uint uVar5;
  ulong uVar6;
  byte bVar7;
  
  *start = -1;
  *length = 0;
  bVar3 = System_String__IsNullOrEmpty(haystack,(MethodInfo *)0x0);
  if ((char)bVar3 == '\0') {
    if (haystack == (System_String_o *)0x0) {
LAB_03ae19f5:
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    iVar4 = (haystack->fields)._stringLength;
    uVar6 = 0;
    if (needle == (System_String_o *)0x0) {
      if (iVar4 < 1) {
        return 0;
      }
      bVar1 = 1;
      do {
        uVar2 = System_String__get_Chars(haystack,(int)uVar6,(MethodInfo *)0x0);
        if (*(int *)(DAT_057110a8 + 0xe4) == 0) {
          il2cpp_init_class();
        }
        bVar3 = System_Char__IsLetterOrDigit(uVar2,(MethodInfo *)0x0);
        bVar7 = (byte)bVar3 ^ 1;
        if (((bVar1 & 1) != 0) && (bVar7 == 0)) goto LAB_03ae19f5;
        uVar5 = (int)uVar6 + 1;
        uVar6 = (ulong)uVar5;
        bVar1 = bVar7;
      } while ((int)uVar5 < (haystack->fields)._stringLength);
    }
    else {
      if (iVar4 < 1) {
        return 0;
      }
      bVar1 = 1;
      do {
        iVar4 = (int)uVar6;
        uVar2 = System_String__get_Chars(haystack,iVar4,(MethodInfo *)0x0);
        if (*(int *)(DAT_057110a8 + 0xe4) == 0) {
          il2cpp_init_class();
        }
        bVar3 = System_Char__IsLetterOrDigit(uVar2,(MethodInfo *)0x0);
        bVar7 = (byte)bVar3 ^ 1;
        if (((bVar1 & 1) != 0) && (bVar7 == 0)) {
          length_00 = (needle->fields)._stringLength;
          if ((haystack->fields)._stringLength < iVar4 + length_00) {
            bVar7 = 0;
          }
          else {
            bVar7 = 0;
            a = System_String__Substring(haystack,iVar4,length_00,(MethodInfo *)0x0);
            bVar3 = System_String__op_Equality(a,needle,(MethodInfo *)0x0);
            if ((char)bVar3 != '\0') {
              *start = iVar4;
              *length = (needle->fields)._stringLength;
              return (bool_conflict)CONCAT71((int7)(uVar6 >> 8),1);
            }
          }
        }
        uVar6 = (ulong)(iVar4 + 1U);
        bVar1 = bVar7;
      } while ((int)(iVar4 + 1U) < (haystack->fields)._stringLength);
    }
  }
  return 0;
}


// Gisketch.Aottg2UI.Search.GisketchSearchService$$FindInitials
// il2cpp: bool Gisketch_Aottg2UI_Search_GisketchSearchService__FindInitials (System_String_o* haystack, System_String_o* needle, int32_t* start, int32_t* length, const MethodInfo* method);
// 0x3ae1a80

bool_conflict
Gisketch_Aottg2UI_Search_GisketchSearchService__FindInitials
          (System_String_o *haystack,System_String_o *needle,int32_t *start,int32_t *length,
          MethodInfo *method)

{
  uint16_t c;
  uint16_t uVar1;
  bool_conflict bVar2;
  int iVar3;
  int index;
  ulong uVar4;
  byte bVar5;
  byte bVar6;
  int local_4c;
  
  *start = -1;
  *length = 0;
  bVar2 = System_String__IsNullOrEmpty(haystack,(MethodInfo *)0x0);
  if ((char)bVar2 == '\0') {
    uVar4 = 0;
    bVar2 = System_String__IsNullOrEmpty(needle,(MethodInfo *)0x0);
    if ((char)bVar2 == '\0') {
      if (needle == (System_String_o *)0x0) {
LAB_03ae1c01:
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      if (1 < (needle->fields)._stringLength) {
        if (haystack == (System_String_o *)0x0) goto LAB_03ae1c01;
        iVar3 = (haystack->fields)._stringLength;
        if (iVar3 < 1) {
          local_4c = 0;
        }
        else {
          uVar4 = 0;
          local_4c = 0;
          bVar5 = 1;
          do {
            index = (int)uVar4;
            c = System_String__get_Chars(haystack,index,(MethodInfo *)0x0);
            if (*(int *)(DAT_057110a8 + 0xe4) == 0) {
              il2cpp_init_class();
            }
            bVar2 = System_Char__IsLetterOrDigit(c,(MethodInfo *)0x0);
            bVar6 = (byte)bVar2 ^ 1;
            if (((bVar5 & 1) != 0) && (bVar6 == 0)) {
              if ((local_4c < (needle->fields)._stringLength) &&
                 (uVar1 = System_String__get_Chars(needle,local_4c,(MethodInfo *)0x0), c == uVar1))
              {
                iVar3 = *start;
                if (*start < 0) {
                  *start = index;
                  iVar3 = index;
                }
                local_4c = local_4c + 1;
                *length = (index - iVar3) + 1;
              }
              bVar6 = 0;
            }
            uVar4 = (ulong)(index + 1U);
            iVar3 = (haystack->fields)._stringLength;
            bVar5 = bVar6;
          } while ((int)(index + 1U) < iVar3);
        }
        if (local_4c == (needle->fields)._stringLength) {
          *length = iVar3 - *start;
          return (bool_conflict)CONCAT71((int7)(uVar4 >> 8),1);
        }
      }
    }
  }
  return 0;
}


// Gisketch.Aottg2UI.Search.GisketchSearchService$$FindCompact
// il2cpp: bool Gisketch_Aottg2UI_Search_GisketchSearchService__FindCompact (System_String_o* haystack, System_String_o* needle, int32_t* start, int32_t* length, System_Int32_array** indices, const MethodInfo* method);
// 0x3ae1c10

bool_conflict
Gisketch_Aottg2UI_Search_GisketchSearchService__FindCompact
          (System_String_o *haystack,System_String_o *needle,int32_t *start,int32_t *length,
          System_Int32_array **indices,MethodInfo *method)

{
  int iVar1;
  uint16_t uVar2;
  uint16_t uVar3;
  bool_conflict bVar4;
  int iVar5;
  System_Int32_array *pSVar6;
  int32_t index;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint index_00;
  int local_5c;
  
  if (DAT_057013a8 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_int);
    DAT_057013a8 = '\x01';
  }
  *start = -1;
  *length = 0;
  *indices = (System_Int32_array *)0x0;
  il2cpp_runtime_glue(indices);
  bVar4 = System_String__IsNullOrEmpty(haystack,(MethodInfo *)0x0);
  if (((char)bVar4 == '\0') &&
     (bVar4 = System_String__IsNullOrEmpty(needle,(MethodInfo *)0x0), (char)bVar4 == '\0')) {
    if (needle == (System_String_o *)0x0) {
LAB_03ae1e6d:
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    if (2 < (needle->fields)._stringLength) {
      if (haystack == (System_String_o *)0x0) goto LAB_03ae1e6d;
      if (0 < (haystack->fields)._stringLength) {
        local_5c = 1;
        iVar7 = 0;
        do {
          pSVar6 = (System_Int32_array *)il2cpp_glue_02274930(TypeInfo_int);
          iVar5 = (haystack->fields)._stringLength;
          index_00 = 0;
          iVar8 = iVar7;
          if (iVar7 < iVar5) {
            iVar1 = (needle->fields)._stringLength;
            if (pSVar6 != (System_Int32_array *)0x0) {
              if (0 < iVar1) {
                index_00 = 0;
                iVar1 = local_5c;
                do {
                  iVar8 = iVar1;
                  uVar2 = System_String__get_Chars(haystack,iVar8 + -1,(MethodInfo *)0x0);
                  uVar3 = System_String__get_Chars(needle,index_00,(MethodInfo *)0x0);
                  if (uVar2 == uVar3) {
                    if ((uint)pSVar6->max_length <= index_00) {
                    /* WARNING: Subroutine does not return */
                      il2cpp_raise_exception();
                    }
                    pSVar6->m_Items[(int)index_00] = iVar8 + -1;
                    index_00 = index_00 + 1;
                    iVar5 = (haystack->fields)._stringLength;
                  }
                  else {
                    iVar5 = (haystack->fields)._stringLength;
                  }
                } while ((iVar8 < iVar5) &&
                        (iVar1 = iVar8 + 1, (int)index_00 < (needle->fields)._stringLength));
              }
              goto LAB_03ae1db0;
            }
            if (0 < iVar1) {
              do {
                index = iVar8;
                uVar2 = System_String__get_Chars(haystack,index,(MethodInfo *)0x0);
                uVar3 = System_String__get_Chars(needle,0,(MethodInfo *)0x0);
                if (uVar2 == uVar3) goto LAB_03ae1e6d;
                iVar5 = (haystack->fields)._stringLength;
              } while ((index + 1 < iVar5) &&
                      (iVar8 = index + 1, 0 < (needle->fields)._stringLength));
              iVar8 = index + 1;
            }
            uVar9 = 0;
            if ((needle->fields)._stringLength == 0) goto LAB_03ae1dc3;
          }
          else {
LAB_03ae1db0:
            uVar9 = (needle->fields)._stringLength;
            if (index_00 == uVar9) {
LAB_03ae1dc3:
              iVar8 = iVar8 - iVar7;
              if (iVar8 <= (int)(uVar9 * 2)) {
                *start = iVar7;
                *length = iVar8;
                *indices = pSVar6;
                il2cpp_runtime_glue();
                return (bool_conflict)CONCAT71((uint7)(uint3)((uint)iVar8 >> 8),1);
              }
            }
          }
          iVar7 = iVar7 + 1;
          local_5c = local_5c + 1;
        } while (iVar7 < iVar5);
      }
    }
  }
  return 0;
}


// Gisketch.Aottg2UI.Search.GisketchSearchService$$MatchesAt
// il2cpp: bool Gisketch_Aottg2UI_Search_GisketchSearchService__MatchesAt (System_String_o* haystack, System_String_o* needle, int32_t start, const MethodInfo* method);
// 0x3ae29e0

bool_conflict
Gisketch_Aottg2UI_Search_GisketchSearchService__MatchesAt
          (System_String_o *haystack,System_String_o *needle,int32_t start,MethodInfo *method)

{
  int length;
  bool_conflict bVar1;
  System_String_o *a;
  
  if ((needle != (System_String_o *)0x0) && (haystack != (System_String_o *)0x0)) {
    length = (needle->fields)._stringLength;
    if ((haystack->fields)._stringLength < length + start) {
      return 0;
    }
    a = System_String__Substring(haystack,start,length,(MethodInfo *)0x0);
    bVar1 = System_String__op_Equality(a,needle,(MethodInfo *)0x0);
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Search.GisketchSearchService$$Slice
// il2cpp: System_String_o* Gisketch_Aottg2UI_Search_GisketchSearchService__Slice (System_String_o* value, int32_t start, int32_t length, const MethodInfo* method);
// 0x3ae1a10

System_String_o *
Gisketch_Aottg2UI_Search_GisketchSearchService__Slice
          (System_String_o *value,int32_t start,int32_t length,MethodInfo *method)

{
  bool_conflict bVar1;
  System_String_o *pSVar2;
  
  bVar1 = System_String__IsNullOrEmpty(value,(MethodInfo *)0x0);
  if ((-1 < start) && ((char)bVar1 == '\0')) {
    if (value == (System_String_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    if (length + start <= (value->fields)._stringLength) {
      pSVar2 = System_String__Substring(value,start,length,(MethodInfo *)0x0);
      return pSVar2;
    }
  }
  return (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
}


