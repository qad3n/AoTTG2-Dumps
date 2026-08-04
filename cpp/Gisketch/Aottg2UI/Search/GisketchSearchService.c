// Type: Gisketch.Aottg2UI.Search.GisketchSearchService
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Search/GisketchSearchService.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Search.GisketchSearchService.ScoredEntry$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Search_GisketchSearchService_ScoredEntry___ctor (Gisketch_Aottg2UI_Search_GisketchSearchService_ScoredEntry_o __this, Gisketch_Aottg2UI_Search_GisketchSearchEntry_o* entry, int32_t score, const MethodInfo* method);
// 0x3b4b4e0

void Gisketch_Aottg2UI_Search_GisketchSearchService_ScoredEntry___ctor
               (Gisketch_Aottg2UI_Search_GisketchSearchService_ScoredEntry_o __this,
               Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *entry,int32_t score,MethodInfo *method)

{
  (__this.fields.Entry)->klass = __this.fields._8_8_;
  il2cpp_runtime_helper_022b4080();
  *(int *)&(__this.fields.Entry)->monitor = (int)entry;
  return;
}


// Gisketch.Aottg2UI.Search.GisketchSearchService.<>c$$.cctor
// il2cpp: void Gisketch_Aottg2UI_Search_GisketchSearchService___c___cctor (const MethodInfo* method);
// 0x3b4d0a0

void Gisketch_Aottg2UI_Search_GisketchSearchService___c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (g_data_057a9cc9 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057a9cc9 = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = __this;
  il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_c + 0xb8),__this);
  return;
}


// Gisketch.Aottg2UI.Search.GisketchSearchService.<>c$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Search_GisketchSearchService___c___ctor (Gisketch_Aottg2UI_Search_GisketchSearchService___c_o* __this, const MethodInfo* method);
// 0x3b4d110

void Gisketch_Aottg2UI_Search_GisketchSearchService___c___ctor
               (Gisketch_Aottg2UI_Search_GisketchSearchService___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Search.GisketchSearchService.<>c$$<Query>b__0_0
// il2cpp: int32_t Gisketch_Aottg2UI_Search_GisketchSearchService___c___Query_b__0_0 (Gisketch_Aottg2UI_Search_GisketchSearchService___c_o* __this, Gisketch_Aottg2UI_Search_GisketchSearchService_ScoredEntry_o a, Gisketch_Aottg2UI_Search_GisketchSearchService_ScoredEntry_o b, const MethodInfo* method);
// 0x3b4d120

int32_t Gisketch_Aottg2UI_Search_GisketchSearchService___c___Query_b__0_0
                  (Gisketch_Aottg2UI_Search_GisketchSearchService___c_o *__this,
                  Gisketch_Aottg2UI_Search_GisketchSearchService_ScoredEntry_o a,
                  Gisketch_Aottg2UI_Search_GisketchSearchService_ScoredEntry_o b,MethodInfo *method)

{
  int32_t iVar1;
  int local_8 [2];
  
  local_8[0] = b.fields.Score;
  if (local_8[0] != a.fields.Score) {
    iVar1 = System_Int32__CompareTo_3cb42c0((int32_t)local_8,a.fields.Score,(MethodInfo *)0x0);
    return iVar1;
  }
  if ((a.fields.Entry != (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *)0x0) &&
     (b.fields.Entry != (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *)0x0)) {
    iVar1 = System_String__CompareOrdinal
                      (((a.fields.Entry)->fields)._Title_k__BackingField,
                       ((b.fields.Entry)->fields)._Title_k__BackingField,(MethodInfo *)0x0);
    return iVar1;
  }
  iVar1 = il2cpp_runtime_helper_022b2c90();
  return iVar1;
}


// Gisketch.Aottg2UI.Search.GisketchSearchService.<Empty>d__5$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Search_GisketchSearchService__Empty_d__5___ctor (Gisketch_Aottg2UI_Search_GisketchSearchService__Empty_d__5_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x3b4cb60

void Gisketch_Aottg2UI_Search_GisketchSearchService__Empty_d__5___ctor
               (Gisketch_Aottg2UI_Search_GisketchSearchService__Empty_d__5_o *__this,int32_t __1__state,
               MethodInfo *method)

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
// 0x3b4d170

void Gisketch_Aottg2UI_Search_GisketchSearchService__Empty_d__5__System_IDisposable_Dispose
               (Gisketch_Aottg2UI_Search_GisketchSearchService__Empty_d__5_o *__this,MethodInfo *method)

{
  return;
}


// Gisketch.Aottg2UI.Search.GisketchSearchService.<Empty>d__5$$MoveNext
// il2cpp: bool Gisketch_Aottg2UI_Search_GisketchSearchService__Empty_d__5__MoveNext (Gisketch_Aottg2UI_Search_GisketchSearchService__Empty_d__5_o* __this, const MethodInfo* method);
// 0x3b4d180

bool_conflict
Gisketch_Aottg2UI_Search_GisketchSearchService__Empty_d__5__MoveNext
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
// 0x3b4d1a0

Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *
Gisketch_Aottg2UI_Search_GisketchSearchService__Empty_d__5__System_Collections_Generic_IEnumerator_Gisketch_Aottg2UI_Search_GisketchSearchEntry__get_Current
          (Gisketch_Aottg2UI_Search_GisketchSearchService__Empty_d__5_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// Gisketch.Aottg2UI.Search.GisketchSearchService.<Empty>d__5$$System.Collections.IEnumerator.Reset
// il2cpp: void Gisketch_Aottg2UI_Search_GisketchSearchService__Empty_d__5__System_Collections_IEnumerator_Reset (Gisketch_Aottg2UI_Search_GisketchSearchService__Empty_d__5_o* __this, const MethodInfo* method);
// 0x3b4d1b0

void Gisketch_Aottg2UI_Search_GisketchSearchService__Empty_d__5__System_Collections_IEnumerator_Reset
               (Gisketch_Aottg2UI_Search_GisketchSearchService__Empty_d__5_o *__this,MethodInfo *method)

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


// Gisketch.Aottg2UI.Search.GisketchSearchService.<Empty>d__5$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* Gisketch_Aottg2UI_Search_GisketchSearchService__Empty_d__5__System_Collections_IEnumerator_get_Current (Gisketch_Aottg2UI_Search_GisketchSearchService__Empty_d__5_o* __this, const MethodInfo* method);
// 0x3b4d1f0

Il2CppObject *
Gisketch_Aottg2UI_Search_GisketchSearchService__Empty_d__5__System_Collections_IEnumerator_get_Current
          (Gisketch_Aottg2UI_Search_GisketchSearchService__Empty_d__5_o *__this,MethodInfo *method)

{
  return (Il2CppObject *)(__this->fields).__2__current;
}


// Gisketch.Aottg2UI.Search.GisketchSearchService.<Empty>d__5$$System.Collections.Generic.IEnumerable<Gisketch.Aottg2UI.Search.GisketchSearchEntry>.GetEnumerator
// il2cpp: System_Collections_Generic_IEnumerator_GisketchSearchEntry__o* Gisketch_Aottg2UI_Search_GisketchSearchService__Empty_d__5__System_Collections_Generic_IEnumerable_Gisketch_Aottg2UI_Search_GisketchSearchEntry__GetEnumerator (Gisketch_Aottg2UI_Search_GisketchSearchService__Empty_d__5_o* __this, const MethodInfo* method);
// 0x3b4d200

System_Collections_Generic_IEnumerator_GisketchSearchEntry__o *
Gisketch_Aottg2UI_Search_GisketchSearchService__Empty_d__5__System_Collections_Generic_IEnumerable_Gisketch_Aottg2UI_Search_GisketchSearchEntry__GetEnumerator
          (Gisketch_Aottg2UI_Search_GisketchSearchService__Empty_d__5_o *__this,MethodInfo *method)

{
  int iVar1;
  int32_t iVar2;
  Il2CppObject *__this_00;
  
  if (g_data_057a9cca == '\0') {
    il2cpp_runtime_helper_023445d0();
    g_data_057a9cca = '\x01';
  }
  if (((__this->fields).__1__state == -2) &&
     (iVar1 = (__this->fields).__l__initialThreadId,
     iVar2 = System_Environment__get_CurrentManagedThreadId((MethodInfo *)0x0), iVar1 == iVar2)) {
    (__this->fields).__1__state = 0;
    return (System_Collections_Generic_IEnumerator_GisketchSearchEntry__o *)__this;
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_Empty_d__5);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  *(undefined4 *)&__this_00[1].klass = 0;
  iVar2 = System_Environment__get_CurrentManagedThreadId((MethodInfo *)0x0);
  *(int32_t *)&__this_00[2].klass = iVar2;
  return (System_Collections_Generic_IEnumerator_GisketchSearchEntry__o *)__this_00;
}


// Gisketch.Aottg2UI.Search.GisketchSearchService.<Empty>d__5$$System.Collections.IEnumerable.GetEnumerator
// il2cpp: System_Collections_IEnumerator_o* Gisketch_Aottg2UI_Search_GisketchSearchService__Empty_d__5__System_Collections_IEnumerable_GetEnumerator (Gisketch_Aottg2UI_Search_GisketchSearchService__Empty_d__5_o* __this, const MethodInfo* method);
// 0x3b4d280

System_Collections_IEnumerator_o *
Gisketch_Aottg2UI_Search_GisketchSearchService__Empty_d__5__System_Collections_IEnumerable_GetEnumerator
          (Gisketch_Aottg2UI_Search_GisketchSearchService__Empty_d__5_o *__this,MethodInfo *method)

{
  int iVar1;
  int32_t iVar2;
  Il2CppObject *__this_00;
  
  if (g_data_057a9cca == '\0') {
    il2cpp_runtime_helper_023445d0();
    g_data_057a9cca = '\x01';
  }
  if (((__this->fields).__1__state == -2) &&
     (iVar1 = (__this->fields).__l__initialThreadId,
     iVar2 = System_Environment__get_CurrentManagedThreadId((MethodInfo *)0x0), iVar1 == iVar2)) {
    (__this->fields).__1__state = 0;
    return (System_Collections_IEnumerator_o *)__this;
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_Empty_d__5);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  *(undefined4 *)&__this_00[1].klass = 0;
  iVar2 = System_Environment__get_CurrentManagedThreadId((MethodInfo *)0x0);
  *(int32_t *)&__this_00[2].klass = iVar2;
  return (System_Collections_IEnumerator_o *)__this_00;
}


// Gisketch.Aottg2UI.Search.GisketchSearchService$$Query
// il2cpp: System_Collections_Generic_List_GisketchSearchEntry__o* Gisketch_Aottg2UI_Search_GisketchSearchService__Query (System_Collections_Generic_IEnumerable_GisketchSearchEntry__o* entries, System_String_o* query, const MethodInfo* method);
// 0x3b4ac60

System_Collections_Generic_List_GisketchSearchEntry__o *
Gisketch_Aottg2UI_Search_GisketchSearchService__Query
          (System_Collections_Generic_IEnumerable_GisketchSearchEntry__o *entries,System_String_o *query,
          MethodInfo *method)

{
  int32_t *piVar1;
  int *piVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  ushort uVar6;
  uint uVar7;
  Il2CppClass *pIVar8;
  Il2CppRuntimeInterfaceOffsetPair *pIVar9;
  System_Comparison_T__c *pSVar10;
  Gisketch_Aottg2UI_Search_GisketchSearchService_ScoredEntry_array *pGVar11;
  long lVar12;
  System_Collections_Generic_List_Enumerator_T__o __this;
  System_Collections_Generic_List_Enumerator_T__o __this_00;
  System_Collections_Generic_List_Enumerator_T__o __this_01;
  System_Collections_Generic_List_Enumerator_T__o __this_02;
  System_Collections_Generic_List_Enumerator_T__o __this_03;
  int iVar13;
  char cVar14;
  int32_t iVar15;
  bool_conflict bVar16;
  System_Collections_Generic_List_GisketchSearchService_ScoredEntry__o *__this_04;
  Il2CppMethodPointer *ppIVar17;
  System_Comparison_T__o *comparison;
  Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *__this_05;
  System_String_o *displayTitle;
  long *plVar18;
  long lVar19;
  MethodInfo *in_R8;
  undefined1 auVar20 [16];
  undefined1 auVar21 [12];
  Gisketch_Aottg2UI_Search_GisketchSearchService_ScoredEntry_o item;
  System_Collections_Generic_List_T__o *pSVar22;
  Il2CppMethodPointer pIVar23;
  Il2CppObject *item_00;
  Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *local_70;
  Il2CppType **local_68;
  undefined1 local_50 [16];
  Il2CppObject *local_40;
  
  if (g_data_057a9cc2 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Comparison_ScoredEntry);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchSearchService_ScoredEntry_get_Current);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IDisposable);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerable_GisketchSearchEntry);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerator_GisketchSearchEntry);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerator);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_Gisketch_Aottg2UI_Search_GisketchSea);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Sort);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_Gisketch_Aottg2UI_Search_GisketchSearchEntry);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_Gisketch_Aottg2UI_Search_GisketchSearchService_Sc);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_ScoredEntry);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_GisketchSearchEntry);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_Query_b__0_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057a9cc2 = '\x01';
  }
  item_00 = (Il2CppObject *)0x0;
  pSVar22 = (System_Collections_Generic_List_T__o *)0x0;
  pIVar23 = (Il2CppMethodPointer)0x0;
  __this_04 = (System_Collections_Generic_List_GisketchSearchService_ScoredEntry__o *)
              il2cpp_runtime_helper_023052d0(TypeInfo_List_ScoredEntry);
  System_Collections_Generic_List_GisketchSearchService_ScoredEntry____ctor(__this_04,MethodInfo_List_1_Gisketch_Aottg2UI_Search_GisketchSearchService_Sc);
  if (entries == (System_Collections_Generic_IEnumerable_GisketchSearchEntry__o *)0x0) {
    if (g_data_057a9cc3 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Empty_d__5);
      g_data_057a9cc3 = '\x01';
    }
    entries = (System_Collections_Generic_IEnumerable_GisketchSearchEntry__o *)
              il2cpp_runtime_helper_023052d0(TypeInfo_Empty_d__5);
    System_Object___ctor((Il2CppObject *)entries,(MethodInfo *)0x0);
    *(undefined4 *)&((Il2CppObject *)(entries + 1))->klass = 0xfffffffe;
    iVar15 = System_Environment__get_CurrentManagedThreadId((MethodInfo *)0x0);
    *(int32_t *)&((Il2CppObject *)(entries + 2))->klass = iVar15;
    comparison = (System_Comparison_T__o *)0x0;
    if ((Il2CppObject *)entries == (Il2CppObject *)0x0) goto label_03b4b26a;
  }
  pIVar8 = ((Il2CppObject *)entries)->klass;
  uVar3._0_1_ = (pIVar8->_2).rank;
  uVar3._1_1_ = (pIVar8->_2).minimumAlignment;
  if ((ulong)uVar3 != 0) {
    pIVar9 = (pIVar8->_1).interfaceOffsets;
    lVar19 = 0;
    do {
      if (*(long *)((long)&pIVar9->interfaceType + lVar19) == TypeInfo_IEnumerable_GisketchSearchEntry) {
        ppIVar17 = &pIVar8->vtable[*(int *)((long)&pIVar9->offset + lVar19)].methodPtr;
        goto label_03b4ae51;
      }
      lVar19 = lVar19 + 0x10;
    } while ((ulong)uVar3 << 4 != lVar19);
  }
  ppIVar17 = (Il2CppMethodPointer *)il2cpp_runtime_helper_02300d20(entries,TypeInfo_IEnumerable_GisketchSearchEntry,0);
label_03b4ae51:
  comparison = (System_Comparison_T__o *)(**ppIVar17)(entries,(MethodInfo *)ppIVar17[1]);
  if (comparison != (System_Comparison_T__o *)0x0) {
label_03b4ae89:
    do {
      pSVar10 = comparison->klass;
      uVar4._0_1_ = (pSVar10->_2).rank;
      uVar4._1_1_ = (pSVar10->_2).minimumAlignment;
      if ((ulong)uVar4 != 0) {
        pIVar9 = (pSVar10->_1).interfaceOffsets;
        lVar19 = 0;
        do {
          if (*(long *)((long)&pIVar9->interfaceType + lVar19) == TypeInfo_IEnumerator) {
            ppIVar17 = &(&(pSVar10->vtable)._0_Equals)[*(int *)((long)&pIVar9->offset + lVar19)].methodPtr;
            goto label_03b4aee3;
          }
          lVar19 = lVar19 + 0x10;
        } while ((ulong)uVar4 << 4 != lVar19);
      }
      ppIVar17 = (Il2CppMethodPointer *)il2cpp_runtime_helper_02300d20(comparison,TypeInfo_IEnumerator,0);
label_03b4aee3:
      cVar14 = (**ppIVar17)(comparison,(MethodInfo *)ppIVar17[1]);
      if (cVar14 == '\0') {
        if (comparison == (System_Comparison_T__o *)0x0) goto label_03b4b0a6;
        pSVar10 = comparison->klass;
        uVar6._0_1_ = (pSVar10->_2).rank;
        uVar6._1_1_ = (pSVar10->_2).minimumAlignment;
        if ((ulong)uVar6 == 0) goto label_03b4b07f;
        pIVar9 = (pSVar10->_1).interfaceOffsets;
        lVar19 = 0;
        goto label_03b4b070;
      }
      pSVar10 = comparison->klass;
      uVar5._0_1_ = (pSVar10->_2).rank;
      uVar5._1_1_ = (pSVar10->_2).minimumAlignment;
      if ((ulong)uVar5 != 0) {
        pIVar9 = (pSVar10->_1).interfaceOffsets;
        lVar19 = 0;
        do {
          if (*(long *)((long)&pIVar9->interfaceType + lVar19) == TypeInfo_IEnumerator_GisketchSearchEntry) {
            ppIVar17 = &(&(pSVar10->vtable)._0_Equals)[*(int *)((long)&pIVar9->offset + lVar19)].methodPtr;
            goto label_03b4af53;
          }
          lVar19 = lVar19 + 0x10;
        } while ((ulong)uVar5 << 4 != lVar19);
      }
      ppIVar17 = (Il2CppMethodPointer *)il2cpp_runtime_helper_02300d20(comparison,TypeInfo_IEnumerator_GisketchSearchEntry,0);
label_03b4af53:
      auVar20 = (**ppIVar17)(comparison,(MethodInfo *)ppIVar17[1]);
      __this_05 = auVar20._0_8_;
      if (__this_05 == (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *)0x0) {
        displayTitle = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
      }
      else {
        displayTitle = Gisketch_Aottg2UI_Search_GisketchSearchEntry__PathTitle_3a47560
                                 (__this_05,1,auVar20._8_8_);
      }
      Gisketch_Aottg2UI_Search_GisketchSearchService__Match_3a4b500
                ((Gisketch_Aottg2UI_Search_GisketchSearchMatch_o *)&local_70,__this_05,query,displayTitle,
                 in_R8);
      iVar13 = (int)local_70;
    } while ((int)local_70 < 1);
    local_68 = (Il2CppType **)0x0;
    local_70 = __this_05;
    il2cpp_runtime_helper_022b4080((Gisketch_Aottg2UI_Search_GisketchSearchMatch_o *)&local_70,__this_05);
    lVar19 = MethodInfo_Void_Add;
    local_68 = (Il2CppType **)CONCAT44(local_68._4_4_,iVar13);
    if (__this_04 != (System_Collections_Generic_List_GisketchSearchService_ScoredEntry__o *)0x0) {
      piVar1 = &(__this_04->fields)._version;
      *piVar1 = *piVar1 + 1;
      pGVar11 = (__this_04->fields)._items;
      if (pGVar11 == (Gisketch_Aottg2UI_Search_GisketchSearchService_ScoredEntry_array *)0x0)
      goto label_03b4b2ae;
      uVar7 = (__this_04->fields)._size;
      if (uVar7 < (uint)pGVar11->max_length) {
        (__this_04->fields)._size = uVar7 + 1;
        pGVar11->m_Items[(int)uVar7].fields.Entry = local_70;
        pGVar11->m_Items[(int)uVar7].fields.Score = iVar13;
        il2cpp_runtime_helper_022b4080(pGVar11->m_Items + (int)uVar7,0);
      }
      else {
        item.fields.Score = iVar13;
        item.fields.Entry = local_70;
        item.fields._12_4_ = 0;
        System_Collections_Generic_List_GisketchSearchService_ScoredEntry___AddWithResize
                  (__this_04,item,*(MethodInfo_36D84F0 **)(*(long *)(*(long *)(lVar19 + 0x20) + 0xc0) + 0x70))
        ;
      }
      goto label_03b4ae89;
    }
    il2cpp_runtime_helper_022b2c90();
label_03b4b2ae:
    il2cpp_runtime_helper_022b2c90();
label_03b4b2b3:
    il2cpp_runtime_helper_022b2c90();
  }
  il2cpp_runtime_helper_022b2c90();
  il2cpp_runtime_helper_022fefe0(query);
  goto label_03b4b2c5;
  while (lVar19 = lVar19 + 0x10, (ulong)uVar6 << 4 != lVar19) {
label_03b4b070:
    if (*(long *)((long)&pIVar9->interfaceType + lVar19) == TypeInfo_IDisposable) {
      ppIVar17 = &(&(pSVar10->vtable)._0_Equals)[*(int *)((long)&pIVar9->offset + lVar19)].methodPtr;
      goto label_03b4b09d;
    }
  }
label_03b4b07f:
  ppIVar17 = (Il2CppMethodPointer *)il2cpp_runtime_helper_02300d20(comparison,TypeInfo_IDisposable,0);
label_03b4b09d:
  (**ppIVar17)(comparison,(MethodInfo *)ppIVar17[1]);
label_03b4b0a6:
  if (*(int *)(TypeInfo_c + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    comparison = *(System_Comparison_T__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
  }
  else {
    comparison = *(System_Comparison_T__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
  }
  if (comparison == (System_Comparison_T__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    comparison = (System_Comparison_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Comparison_ScoredEntry);
    System_Comparison_GisketchSearchService_ScoredEntry____ctor();
    lVar19 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Comparison_T__o **)(lVar19 + 8) = comparison;
    il2cpp_runtime_helper_022b4080(lVar19 + 8,comparison);
  }
  if (__this_04 == (System_Collections_Generic_List_GisketchSearchService_ScoredEntry__o *)0x0) {
label_03b4b26a:
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    System_Collections_Generic_List_GisketchSearchService_ScoredEntry___Sort_36da6a0
              (__this_04,comparison,MethodInfo_Void_Sort);
    iVar15 = (__this_04->fields)._size;
    comparison = (System_Comparison_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_GisketchSearchEntry);
    System_Collections_Generic_List_object____ctor_362b930
              ((System_Collections_Generic_List_object__o *)comparison,iVar15,MethodInfo_List_1_Gisketch_Aottg2UI_Search_GisketchSearchEntry);
    System_Collections_Generic_List_GisketchSearchService_ScoredEntry___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)local_50,__this_04,MethodInfo_List_1_T_Enumerator_Gisketch_Aottg2UI_Search_GisketchSea);
    pSVar22 = (System_Collections_Generic_List_T__o *)local_50._0_8_;
    pIVar23 = (Il2CppMethodPointer)local_50._8_8_;
    item_00 = local_40;
    if (comparison != (System_Comparison_T__o *)0x0) {
      while (__this.fields._8_8_ = pIVar23, __this.fields._list = pSVar22, __this.fields._current = item_00,
            bVar16 = System_Collections_Generic_List_Enumerator_GisketchSearchService_ScoredEntry___MoveNext
                               (__this,(MethodInfo_322F2B0 *)&stack0xffffffffffffff68), lVar19 = MethodInfo_Void_Add,
            (char)bVar16 != '\0') {
        piVar2 = (int *)((long)&(comparison->fields).invoke_impl + 4);
        *piVar2 = *piVar2 + 1;
        lVar12 = (comparison->fields).method_ptr;
        query = (System_String_o *)&MethodInfo_Void_Add;
        if (lVar12 == 0) goto label_03b4b2b3;
        uVar7 = (uint)(comparison->fields).invoke_impl;
        if (uVar7 < *(uint *)(lVar12 + 0x18)) {
          *(uint *)&(comparison->fields).invoke_impl = uVar7 + 1;
          *(Il2CppObject **)(lVar12 + 0x20 + (long)(int)uVar7 * 8) = item_00;
          il2cpp_runtime_helper_022b4080(lVar12 + (long)(int)uVar7 * 8 + 0x20);
        }
        else {
          System_Collections_Generic_List_object___AddWithResize
                    ((System_Collections_Generic_List_object__o *)comparison,item_00,
                     *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar19 + 0x20) + 0xc0) + 0x70));
        }
      }
      goto label_03b4b285;
    }
  }
  __this_00.fields._8_8_ = pIVar23;
  __this_00.fields._list = pSVar22;
  __this_00.fields._current = item_00;
  bVar16 = System_Collections_Generic_List_Enumerator_GisketchSearchService_ScoredEntry___MoveNext
                     (__this_00,(MethodInfo_322F2B0 *)&stack0xffffffffffffff68);
  if ((char)bVar16 == '\0') {
label_03b4b285:
    __this_01.fields._8_8_ = pIVar23;
    __this_01.fields._list = pSVar22;
    __this_01.fields._current = item_00;
    System_Collections_Generic_List_Enumerator_GisketchSearchService_ScoredEntry___Dispose
              (__this_01,(MethodInfo_322F2A0 *)&stack0xffffffffffffff68);
    return (System_Collections_Generic_List_GisketchSearchEntry__o *)comparison;
  }
label_03b4b2c5:
  auVar21 = il2cpp_runtime_helper_022b2c90();
  if (auVar21._8_4_ == 1) {
    plVar18 = (long *)__cxa_begin_catch(auVar21._0_8_);
    lVar19 = *plVar18;
    __cxa_end_catch();
    __this_02.fields._8_8_ = pIVar23;
    __this_02.fields._list = pSVar22;
    __this_02.fields._current = item_00;
    System_Collections_Generic_List_Enumerator_GisketchSearchService_ScoredEntry___Dispose
              (__this_02,(MethodInfo_322F2A0 *)&stack0xffffffffffffff68);
    if (lVar19 == 0) {
      return (System_Collections_Generic_List_GisketchSearchEntry__o *)comparison;
    }
    il2cpp_runtime_helper_022fefe0(lVar19);
  }
  __this_03.fields._8_8_ = pIVar23;
  __this_03.fields._list = pSVar22;
  __this_03.fields._current = item_00;
  System_Collections_Generic_List_Enumerator_GisketchSearchService_ScoredEntry___Dispose
            (__this_03,(MethodInfo_322F2A0 *)&stack0xffffffffffffff68);
  _Unwind_Resume(auVar21._0_8_);
}


// Gisketch.Aottg2UI.Search.GisketchSearchService$$Match
// il2cpp: Gisketch_Aottg2UI_Search_GisketchSearchMatch_o Gisketch_Aottg2UI_Search_GisketchSearchService__Match (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o* entry, System_String_o* query, const MethodInfo* method);
// 0x3b4b470

Gisketch_Aottg2UI_Search_GisketchSearchMatch_o *
Gisketch_Aottg2UI_Search_GisketchSearchService__Match
          (Gisketch_Aottg2UI_Search_GisketchSearchMatch_o *__return_storage_ptr__,
          Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *entry,System_String_o *query,MethodInfo *method)

{
  System_String_o *displayTitle;
  MethodInfo *in_R8;
  Gisketch_Aottg2UI_Search_GisketchSearchMatch_Fields local_38;
  
  if (entry == (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *)0x0) {
    displayTitle = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  }
  else {
    displayTitle = Gisketch_Aottg2UI_Search_GisketchSearchEntry__PathTitle_3a47560
                             (entry,1,(MethodInfo *)query);
  }
  Gisketch_Aottg2UI_Search_GisketchSearchService__Match_3a4b500
            ((Gisketch_Aottg2UI_Search_GisketchSearchMatch_o *)&local_38,entry,query,displayTitle,in_R8);
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
// 0x3b4b500

Gisketch_Aottg2UI_Search_GisketchSearchMatch_o *
Gisketch_Aottg2UI_Search_GisketchSearchService__Match_3a4b500
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
  Gisketch_Aottg2UI_Search_GisketchSearchMatch_o *pGVar8;
  undefined4 uVar9;
  int32_t *piVar10;
  undefined4 extraout_EDX;
  int32_t iVar11;
  undefined4 uVar12;
  System_Int32_array *pSVar13;
  System_String_o *pSVar14;
  System_String_c *in_R9;
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
  undefined8 local_38;
  
  local_7c = 0;
  local_80 = 0;
  local_48 = (System_Int32_array *)0x0;
  local_38 = 0;
  if (entry == (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *)0x0) {
label_03b4bd8f:
    local_78 = 0;
    iStack_74 = 0;
    iStack_70 = 0;
    uStack_6c = 0;
    (__return_storage_ptr__->fields).HiddenText = (System_String_o *)0x0;
    (__return_storage_ptr__->fields).DisplayIndices = (System_Int32_array *)0x0;
    goto label_03b4bd97;
  }
  pSVar7 = displayTitle;
  pSVar14 = query;
  bVar4 = System_String__IsNullOrEmpty(query,(MethodInfo *)0x0);
  uVar9 = SUB84(pSVar7,0);
  if ((char)bVar4 == '\0') {
    if (query == (System_String_o *)0x0) goto label_03b4bdad;
    pSVar7 = System_String__ToLowerInvariant(query,(MethodInfo *)0x0);
  }
  else {
    pSVar7 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  }
  bVar4 = System_String__IsNullOrEmpty(pSVar7,(MethodInfo *)0x0);
  lVar2 = g_data_057b9c00;
  if ((char)bVar4 != '\0') {
    query = (System_String_o *)**(long **)(g_data_057b9c00 + 0xb8);
    (__return_storage_ptr__->fields).Score = 0;
    (__return_storage_ptr__->fields).DisplayStart = 0;
    *(undefined8 *)&(__return_storage_ptr__->fields).DisplayLength = 0;
    (__return_storage_ptr__->fields).HiddenText = (System_String_o *)0x0;
    (__return_storage_ptr__->fields).DisplayIndices = (System_Int32_array *)0x0;
    (__return_storage_ptr__->fields).Score = 1;
    (__return_storage_ptr__->fields).DisplayStart = -1;
    (__return_storage_ptr__->fields).DisplayLength = 0;
    goto joined_r0x03b4bcb5;
  }
  pSVar5 = (entry->fields)._Title_k__BackingField;
  pSVar14 = pSVar5;
  bVar4 = System_String__IsNullOrEmpty(pSVar5,(MethodInfo *)0x0);
  if ((char)bVar4 == '\0') {
    if (pSVar5 == (System_String_o *)0x0) goto label_03b4bdad;
    local_58 = System_String__ToLowerInvariant(pSVar5,(MethodInfo *)0x0);
  }
  else {
    local_58 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  }
  pSVar14 = displayTitle;
  bVar4 = System_String__IsNullOrEmpty(displayTitle,(MethodInfo *)0x0);
  if ((char)bVar4 == '\0') {
    if (displayTitle == (System_String_o *)0x0) goto label_03b4bdad;
    pSVar5 = System_String__ToLowerInvariant(displayTitle,(MethodInfo *)0x0);
  }
  else {
    pSVar5 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  }
  pSVar6 = (entry->fields)._Keywords_k__BackingField;
  pSVar14 = pSVar6;
  bVar4 = System_String__IsNullOrEmpty(pSVar6,(MethodInfo *)0x0);
  if ((char)bVar4 == '\0') {
    if (pSVar6 == (System_String_o *)0x0) goto label_03b4bdad;
    local_50 = System_String__ToLowerInvariant(pSVar6,(MethodInfo *)0x0);
  }
  else {
    local_50 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  }
  pSVar6 = (entry->fields)._Id_k__BackingField;
  pSVar14 = pSVar6;
  bVar4 = System_String__IsNullOrEmpty(pSVar6,(MethodInfo *)0x0);
  if ((char)bVar4 == '\0') {
    if (pSVar6 == (System_String_o *)0x0) goto label_03b4bdad;
    pSVar6 = System_String__ToLowerInvariant(pSVar6,(MethodInfo *)0x0);
  }
  else {
    pSVar6 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  }
  pSVar14 = pSVar5;
  bVar4 = System_String__op_Equality(pSVar5,pSVar7,(MethodInfo *)0x0);
  if (((char)bVar4 != '\0') ||
     (pSVar14 = local_58, bVar4 = System_String__op_Equality(local_58,pSVar7,(MethodInfo *)0x0),
     (char)bVar4 != '\0')) {
    if (pSVar5 == (System_String_o *)0x0) goto label_03b4bdad;
    iVar11 = 0;
    iStack_74 = System_String__IndexOf_3afc440(pSVar5,pSVar7,(MethodInfo *)0x0);
    if (-1 < iStack_74) {
      pSVar14 = pSVar5;
      if (pSVar7 == (System_String_o *)0x0) goto label_03b4bdad;
      iVar11 = (pSVar7->fields)._stringLength;
    }
    plVar1 = *(long **)(g_data_057b9c00 + 0xb8);
    local_68 = (System_String_o *)*plVar1;
    local_78 = 100;
    iStack_70 = iVar11;
joined_r0x03b4b861:
    if (local_68 == (System_String_o *)0x0) {
      local_68 = (System_String_o *)*plVar1;
    }
    uStack_6c = 0;
    pSStack_60 = (System_Int32_array *)0x0;
    il2cpp_runtime_helper_022b4080(&local_68);
    pSStack_60 = (System_Int32_array *)0x0;
    il2cpp_runtime_helper_022b4080(&pSStack_60,0);
    (__return_storage_ptr__->fields).HiddenText = local_68;
    (__return_storage_ptr__->fields).DisplayIndices = pSStack_60;
label_03b4bd97:
    (__return_storage_ptr__->fields).Score = local_78;
    (__return_storage_ptr__->fields).DisplayStart = iStack_74;
    (__return_storage_ptr__->fields).DisplayLength = iStack_70;
    *(undefined4 *)&(__return_storage_ptr__->fields).field_0xc = uStack_6c;
    return __return_storage_ptr__;
  }
  local_40 = pSVar6;
  if (pSVar5 == (System_String_o *)0x0) goto label_03b4bdad;
  iVar11 = 0;
  bVar4 = System_String__StartsWith(pSVar5,pSVar7,(MethodInfo *)0x0);
  if ((char)bVar4 != '\0') {
label_03b4b80a:
    iStack_74 = System_String__IndexOf_3afc440(pSVar5,pSVar7,(MethodInfo *)0x0);
    if (-1 < iStack_74) {
      pSVar14 = pSVar5;
      if (pSVar7 == (System_String_o *)0x0) {
label_03b4bdad:
        il2cpp_runtime_helper_022b2c90();
        uVar12 = 0;
        pSVar7 = pSVar14;
        bVar4 = System_String__IsNullOrEmpty(pSVar14,(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          return (Gisketch_Aottg2UI_Search_GisketchSearchMatch_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
        }
        if (pSVar14 == (System_String_o *)0x0) {
          il2cpp_runtime_helper_022b2c90();
          *(undefined4 *)&pSVar7->klass = uVar12;
          *(undefined4 *)((long)&pSVar7->klass + 4) = extraout_EDX;
          *(undefined4 *)&pSVar7->monitor = uVar9;
          if ((System_String_Fields)method == (System_String_Fields)0x0) {
            method = *(MethodInfo **)*(System_String_Fields **)(g_data_057b9c00 + 0xb8);
          }
          pSVar7->fields = (System_String_Fields)method;
          il2cpp_runtime_helper_022b4080(&pSVar7->fields,method);
          pSVar7[1].klass = in_R9;
          pGVar8 = (Gisketch_Aottg2UI_Search_GisketchSearchMatch_o *)il2cpp_runtime_helper_022b4080(pSVar7 + 1,in_R9);
          return pGVar8;
        }
        pSVar7 = System_String__ToLowerInvariant(pSVar14,(MethodInfo *)0x0);
        return (Gisketch_Aottg2UI_Search_GisketchSearchMatch_o *)pSVar7;
      }
      iVar11 = (pSVar7->fields)._stringLength;
    }
    plVar1 = *(long **)(g_data_057b9c00 + 0xb8);
    local_68 = (System_String_o *)*plVar1;
    local_78 = 0x50;
    iStack_70 = iVar11;
    goto joined_r0x03b4b861;
  }
  pSVar14 = local_58;
  if (local_58 == (System_String_o *)0x0) goto label_03b4bdad;
  bVar4 = System_String__StartsWith(local_58,pSVar7,(MethodInfo *)0x0);
  if ((char)bVar4 != '\0') goto label_03b4b80a;
  bVar4 = Gisketch_Aottg2UI_Search_GisketchSearchService__FindToken(pSVar5,pSVar7,&local_7c,&local_80,method);
  if (((char)bVar4 == '\0') &&
     (bVar4 = Gisketch_Aottg2UI_Search_GisketchSearchService__FindToken
                        (local_58,pSVar7,&local_7c,&local_80,method), pSVar14 = local_50, (char)bVar4 == '\0')
     ) {
    piVar10 = &local_80;
    bVar4 = Gisketch_Aottg2UI_Search_GisketchSearchService__FindToken
                      (local_50,pSVar7,&local_7c,piVar10,method);
    iVar3 = local_7c;
    iVar11 = local_80;
    uVar9 = SUB84(piVar10,0);
    if ((char)bVar4 != '\0') {
      pSVar7 = (entry->fields)._Keywords_k__BackingField;
      pSVar14 = pSVar7;
      bVar4 = System_String__IsNullOrEmpty(pSVar7,(MethodInfo *)0x0);
      if ((iVar3 < 0) || ((char)bVar4 != '\0')) {
label_03b4b93c:
        query = (System_String_o *)**(long **)(g_data_057b9c00 + 0xb8);
      }
      else {
        if (pSVar7 == (System_String_o *)0x0) goto label_03b4bdad;
        if ((pSVar7->fields)._stringLength < iVar11 + iVar3) goto label_03b4b93c;
        query = System_String__Substring_3af8da0(pSVar7,iVar3,iVar11,(MethodInfo *)0x0);
      }
      (__return_storage_ptr__->fields).Score = 0;
      (__return_storage_ptr__->fields).DisplayStart = 0;
      *(undefined8 *)&(__return_storage_ptr__->fields).DisplayLength = 0;
      (__return_storage_ptr__->fields).HiddenText = (System_String_o *)0x0;
      (__return_storage_ptr__->fields).DisplayIndices = (System_Int32_array *)0x0;
      (__return_storage_ptr__->fields).Score = 0x3c;
      (__return_storage_ptr__->fields).DisplayStart = -1;
      (__return_storage_ptr__->fields).DisplayLength = 0;
      lVar2 = g_data_057b9c00;
      goto joined_r0x03b4bcb5;
    }
    bVar4 = Gisketch_Aottg2UI_Search_GisketchSearchService__FindInitials
                      (pSVar5,pSVar7,&local_7c,&local_80,method);
    if (((char)bVar4 != '\0') ||
       (bVar4 = Gisketch_Aottg2UI_Search_GisketchSearchService__FindInitials
                          (local_58,pSVar7,&local_7c,&local_80,method), (char)bVar4 != '\0')) {
      lVar2 = g_data_057b9c00;
      query = (System_String_o *)**(long **)(g_data_057b9c00 + 0xb8);
      (__return_storage_ptr__->fields).Score = 0;
      (__return_storage_ptr__->fields).DisplayStart = 0;
      *(undefined8 *)&(__return_storage_ptr__->fields).DisplayLength = 0;
      (__return_storage_ptr__->fields).HiddenText = (System_String_o *)0x0;
      (__return_storage_ptr__->fields).DisplayIndices = (System_Int32_array *)0x0;
      (__return_storage_ptr__->fields).Score = 0x32;
      (__return_storage_ptr__->fields).DisplayStart = local_7c;
      (__return_storage_ptr__->fields).DisplayLength = local_80;
      goto joined_r0x03b4bcb5;
    }
    piVar10 = &local_80;
    bVar4 = Gisketch_Aottg2UI_Search_GisketchSearchService__FindInitials
                      (pSVar14,pSVar7,&local_7c,piVar10,method);
    iVar3 = local_7c;
    iVar11 = local_80;
    uVar9 = SUB84(piVar10,0);
    if ((char)bVar4 != '\0') {
      pSVar7 = (entry->fields)._Keywords_k__BackingField;
      pSVar14 = pSVar7;
      bVar4 = System_String__IsNullOrEmpty(pSVar7,(MethodInfo *)0x0);
      if ((iVar3 < 0) || ((char)bVar4 != '\0')) {
label_03b4ba77:
        query = (System_String_o *)**(long **)(g_data_057b9c00 + 0xb8);
      }
      else {
        if (pSVar7 == (System_String_o *)0x0) goto label_03b4bdad;
        if ((pSVar7->fields)._stringLength < iVar11 + iVar3) goto label_03b4ba77;
        query = System_String__Substring_3af8da0(pSVar7,iVar3,iVar11,(MethodInfo *)0x0);
      }
      (__return_storage_ptr__->fields).Score = 0;
      (__return_storage_ptr__->fields).DisplayStart = 0;
      *(undefined8 *)&(__return_storage_ptr__->fields).DisplayLength = 0;
      (__return_storage_ptr__->fields).HiddenText = (System_String_o *)0x0;
      (__return_storage_ptr__->fields).DisplayIndices = (System_Int32_array *)0x0;
      (__return_storage_ptr__->fields).Score = 0x32;
      (__return_storage_ptr__->fields).DisplayStart = -1;
      (__return_storage_ptr__->fields).DisplayLength = 0;
      lVar2 = g_data_057b9c00;
      goto joined_r0x03b4bcb5;
    }
    bVar4 = Gisketch_Aottg2UI_Search_GisketchSearchService__FindCompact
                      (pSVar5,pSVar7,&local_7c,&local_80,&local_48,(MethodInfo *)in_R9);
    if (((char)bVar4 != '\0') ||
       (bVar4 = Gisketch_Aottg2UI_Search_GisketchSearchService__FindCompact
                          (local_58,pSVar7,&local_7c,&local_80,&local_48,(MethodInfo *)in_R9),
       (char)bVar4 != '\0')) {
      pSVar13 = local_48;
      lVar2 = g_data_057b9c00;
      pSVar7 = (System_String_o *)**(long **)(g_data_057b9c00 + 0xb8);
      (__return_storage_ptr__->fields).Score = 0;
      (__return_storage_ptr__->fields).DisplayStart = 0;
      *(undefined8 *)&(__return_storage_ptr__->fields).DisplayLength = 0;
      (__return_storage_ptr__->fields).HiddenText = (System_String_o *)0x0;
      (__return_storage_ptr__->fields).DisplayIndices = (System_Int32_array *)0x0;
      (__return_storage_ptr__->fields).Score = 0x2d;
      (__return_storage_ptr__->fields).DisplayStart = local_7c;
      (__return_storage_ptr__->fields).DisplayLength = local_80;
      if (pSVar7 == (System_String_o *)0x0) {
        pSVar7 = (System_String_o *)**(long **)(lVar2 + 0xb8);
      }
      (__return_storage_ptr__->fields).HiddenText = pSVar7;
      il2cpp_runtime_helper_022b4080(&(__return_storage_ptr__->fields).HiddenText);
      (__return_storage_ptr__->fields).DisplayIndices = pSVar13;
      goto label_03b4b5f4;
    }
    piVar10 = &local_80;
    method = (MethodInfo *)&local_38;
    bVar4 = Gisketch_Aottg2UI_Search_GisketchSearchService__FindCompact
                      (pSVar14,pSVar7,&local_7c,piVar10,(System_Int32_array **)method,(MethodInfo *)in_R9);
    iVar3 = local_7c;
    iVar11 = local_80;
    uVar9 = SUB84(piVar10,0);
    if ((char)bVar4 != '\0') {
      pSVar7 = (entry->fields)._Keywords_k__BackingField;
      pSVar14 = pSVar7;
      bVar4 = System_String__IsNullOrEmpty(pSVar7,(MethodInfo *)0x0);
      if ((iVar3 < 0) || ((char)bVar4 != '\0')) {
label_03b4bbd6:
        query = (System_String_o *)**(long **)(g_data_057b9c00 + 0xb8);
      }
      else {
        if (pSVar7 == (System_String_o *)0x0) goto label_03b4bdad;
        if ((pSVar7->fields)._stringLength < iVar11 + iVar3) goto label_03b4bbd6;
        query = System_String__Substring_3af8da0(pSVar7,iVar3,iVar11,(MethodInfo *)0x0);
      }
      (__return_storage_ptr__->fields).Score = 0;
      (__return_storage_ptr__->fields).DisplayStart = 0;
      *(undefined8 *)&(__return_storage_ptr__->fields).DisplayLength = 0;
      (__return_storage_ptr__->fields).HiddenText = (System_String_o *)0x0;
      (__return_storage_ptr__->fields).DisplayIndices = (System_Int32_array *)0x0;
      (__return_storage_ptr__->fields).Score = 0x2d;
      (__return_storage_ptr__->fields).DisplayStart = -1;
      (__return_storage_ptr__->fields).DisplayLength = 0;
      lVar2 = g_data_057b9c00;
      goto joined_r0x03b4bcb5;
    }
    iVar11 = 0;
    bVar4 = System_String__Contains(pSVar5,pSVar7,(MethodInfo *)0x0);
    if (((char)bVar4 != '\0') ||
       (pSVar14 = local_58, bVar4 = System_String__Contains(local_58,pSVar7,(MethodInfo *)0x0),
       (char)bVar4 != '\0')) {
      iStack_74 = System_String__IndexOf_3afc440(pSVar5,pSVar7,(MethodInfo *)0x0);
      if (-1 < iStack_74) {
        pSVar14 = pSVar5;
        if (pSVar7 == (System_String_o *)0x0) goto label_03b4bdad;
        iVar11 = (pSVar7->fields)._stringLength;
      }
      plVar1 = *(long **)(g_data_057b9c00 + 0xb8);
      local_68 = (System_String_o *)*plVar1;
      local_78 = 0x28;
      iStack_70 = iVar11;
      goto joined_r0x03b4b861;
    }
    if (local_50 == (System_String_o *)0x0) goto label_03b4bdad;
    pSVar14 = local_50;
    bVar4 = System_String__Contains(local_50,pSVar7,(MethodInfo *)0x0);
    if ((char)bVar4 == '\0') {
      if (local_40 == (System_String_o *)0x0) goto label_03b4bdad;
      bVar4 = System_String__Contains(local_40,pSVar7,(MethodInfo *)0x0);
      lVar2 = g_data_057b9c00;
      if ((char)bVar4 == '\0') goto label_03b4bd8f;
      query = (System_String_o *)**(long **)(g_data_057b9c00 + 0xb8);
      (__return_storage_ptr__->fields).Score = 0;
      (__return_storage_ptr__->fields).DisplayStart = 0;
      *(undefined8 *)&(__return_storage_ptr__->fields).DisplayLength = 0;
      (__return_storage_ptr__->fields).HiddenText = (System_String_o *)0x0;
      (__return_storage_ptr__->fields).DisplayIndices = (System_Int32_array *)0x0;
      (__return_storage_ptr__->fields).Score = 0x19;
      (__return_storage_ptr__->fields).DisplayStart = -1;
      (__return_storage_ptr__->fields).DisplayLength = 0;
      goto joined_r0x03b4bcb5;
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
      query = (System_String_o *)**(long **)(g_data_057b9c00 + 0xb8);
    }
    (__return_storage_ptr__->fields).HiddenText = query;
  }
  else {
    lVar2 = g_data_057b9c00;
    query = (System_String_o *)**(long **)(g_data_057b9c00 + 0xb8);
    (__return_storage_ptr__->fields).Score = 0;
    (__return_storage_ptr__->fields).DisplayStart = 0;
    *(undefined8 *)&(__return_storage_ptr__->fields).DisplayLength = 0;
    (__return_storage_ptr__->fields).HiddenText = (System_String_o *)0x0;
    (__return_storage_ptr__->fields).DisplayIndices = (System_Int32_array *)0x0;
    (__return_storage_ptr__->fields).Score = 0x3c;
    (__return_storage_ptr__->fields).DisplayStart = local_7c;
    (__return_storage_ptr__->fields).DisplayLength = local_80;
joined_r0x03b4bcb5:
    if (query == (System_String_o *)0x0) {
      query = (System_String_o *)**(long **)(lVar2 + 0xb8);
    }
    (__return_storage_ptr__->fields).HiddenText = query;
  }
  il2cpp_runtime_helper_022b4080(&(__return_storage_ptr__->fields).HiddenText,query);
  (__return_storage_ptr__->fields).DisplayIndices = (System_Int32_array *)0x0;
  pSVar13 = (System_Int32_array *)0x0;
label_03b4b5f4:
  il2cpp_runtime_helper_022b4080(&(__return_storage_ptr__->fields).DisplayIndices,pSVar13);
  return __return_storage_ptr__;
}


// Gisketch.Aottg2UI.Search.GisketchSearchService$$Markup
// il2cpp: System_String_o* Gisketch_Aottg2UI_Search_GisketchSearchService__Markup (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o* entry, System_String_o* query, bool active, System_String_o* matchHex, const MethodInfo* method);
// 0x3b4c500

System_String_o *
Gisketch_Aottg2UI_Search_GisketchSearchService__Markup
          (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *entry,System_String_o *query,bool_conflict active,
          System_String_o *matchHex,MethodInfo *method)

{
  MethodInfo *in_RAX;
  System_String_o *pSVar1;
  undefined4 in_register_00000014;
  
  if (entry == (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *)0x0) {
    pSVar1 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  }
  else {
    pSVar1 = Gisketch_Aottg2UI_Search_GisketchSearchEntry__PathTitle_3a47560
                       (entry,1,(MethodInfo *)CONCAT44(in_register_00000014,active));
  }
  pSVar1 = Gisketch_Aottg2UI_Search_GisketchSearchService__Markup_3a4c570
                     (entry,query,active & 0xff,matchHex,pSVar1,(System_String_o *)0x0,in_RAX);
  return pSVar1;
}


// Gisketch.Aottg2UI.Search.GisketchSearchService$$Markup
// il2cpp: System_String_o* Gisketch_Aottg2UI_Search_GisketchSearchService__Markup (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o* entry, System_String_o* query, bool active, System_String_o* matchHex, System_String_o* displayTitle, System_String_o* normalHex, const MethodInfo* method);
// 0x3b4c570

System_String_o *
Gisketch_Aottg2UI_Search_GisketchSearchService__Markup_3a4c570
          (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *entry,System_String_o *query,bool_conflict active,
          System_String_o *matchHex,System_String_o *displayTitle,System_String_o *normalHex,
          MethodInfo *method)

{
  char cVar1;
  byte bVar2;
  Gisketch_Aottg2UI_Search_GisketchSearchMatch_o match;
  bool_conflict bVar3;
  int32_t iVar4;
  System_String_o *pSVar5;
  System_String_array *pSVar6;
  System_String_o *pSVar7;
  System_String_o *pSVar8;
  undefined4 extraout_var;
  long lVar9;
  System_Text_StringBuilder_o *__this;
  System_String_o *pSVar10;
  undefined4 extraout_var_00;
  Il2CppObject *__this_00;
  uint uVar11;
  int32_t startIndex;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  System_String_o *matchHex_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
  MethodInfo *extraout_RDX_03;
  MethodInfo *extraout_RDX_04;
  MethodInfo *extraout_RDX_05;
  MethodInfo *extraout_RDX_06;
  MethodInfo *extraout_RDX_07;
  MethodInfo *extraout_RDX_08;
  ulong uVar12;
  MethodInfo *extraout_RDX_09;
  MethodInfo *extraout_RDX_10;
  ulong uVar13;
  MethodInfo *extraout_RDX_11;
  MethodInfo *pMVar14;
  MethodInfo *extraout_RDX_12;
  System_Text_StringBuilder_o *pSVar15;
  long lVar16;
  int iVar17;
  System_Text_StringBuilder_o *pSVar18;
  System_String_o *pSVar19;
  uint uVar20;
  int32_t iStackY_ac;
  int iStackY_a8;
  System_Text_StringBuilder_o *in_stack_ffffffffffffff68;
  undefined8 local_78;
  undefined8 uStack_70;
  Gisketch_Aottg2UI_Search_GisketchSearchMatch_o local_38;
  
  pSVar15 = (System_Text_StringBuilder_o *)displayTitle;
  if (displayTitle == (System_String_o *)0x0) {
    pSVar15 = (System_Text_StringBuilder_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  }
  Gisketch_Aottg2UI_Search_GisketchSearchService__Match_3a4b500
            (&local_38,entry,query,(System_String_o *)pSVar15,(MethodInfo *)displayTitle);
  pSVar5 = (System_String_o *)(ulong)(uint)local_38.fields.DisplayStart;
  local_78 = CONCAT44(local_38.fields._12_4_,local_38.fields.DisplayLength);
  uStack_70 = CONCAT44(local_38.fields.HiddenText._4_4_,local_38.fields.HiddenText._0_4_);
  if ((1 < local_38.fields.Score) && (-1 < local_38.fields.DisplayStart)) {
    match.fields.DisplayStart = local_38.fields.DisplayStart;
    match.fields.Score = local_38.fields.Score;
    match.fields._8_8_ = local_78;
    match.fields.HiddenText = (System_String_o *)uStack_70;
    match.fields.DisplayIndices = local_38.fields.DisplayIndices;
    pSVar5 = Gisketch_Aottg2UI_Search_GisketchSearchService__MarkRange
                       ((System_String_o *)pSVar15,match,0,matchHex,normalHex,(MethodInfo *)displayTitle);
    return pSVar5;
  }
  if (g_data_057a9cc7 == '\0') {
    il2cpp_runtime_helper_023445d0(&"\xe2\x80\xb9");
    il2cpp_runtime_helper_023445d0(&"<");
    g_data_057a9cc7 = '\x01';
  }
  pSVar18 = pSVar15;
  bVar3 = System_String__IsNullOrEmpty((System_String_o *)pSVar15,(MethodInfo *)0x0);
  if ((char)bVar3 != '\0') {
    pSVar5 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
    pMVar14 = extraout_RDX;
label_03b4c6a2:
    pSVar5 = Gisketch_Aottg2UI_Search_GisketchSearchService__WrapNormal(pSVar5,normalHex,pMVar14);
    return pSVar5;
  }
  if (pSVar15 != (System_Text_StringBuilder_o *)0x0) {
    pSVar5 = System_String__Replace_3af9030
                       ((System_String_o *)pSVar15,"<","\xe2\x80\xb9",(MethodInfo *)0x0);
    pMVar14 = extraout_RDX_00;
    goto label_03b4c6a2;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057a9cc7 == '\0') {
    il2cpp_runtime_helper_023445d0(&"\xe2\x80\xb9");
    il2cpp_runtime_helper_023445d0(&"<");
    g_data_057a9cc7 = '\x01';
  }
  pSVar10 = (System_String_o *)0x0;
  pSVar15 = pSVar18;
  bVar3 = System_String__IsNullOrEmpty((System_String_o *)pSVar18,(MethodInfo *)0x0);
  if ((char)bVar3 != '\0') {
    return (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  }
  if (pSVar18 != (System_Text_StringBuilder_o *)0x0) {
    pSVar5 = System_String__Replace_3af9030
                       ((System_String_o *)pSVar18,"<","\xe2\x80\xb9",(MethodInfo *)0x0);
    return pSVar5;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057a9cc6 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    il2cpp_runtime_helper_023445d0(&"<color=#");
    il2cpp_runtime_helper_023445d0(&"</color>");
    il2cpp_runtime_helper_023445d0(&">");
    g_data_057a9cc6 = '\x01';
  }
  bVar3 = System_String__IsNullOrEmpty(pSVar10,(MethodInfo *)0x0);
  if (((char)bVar3 != '\0') ||
     (bVar3 = System_String__IsNullOrEmpty((System_String_o *)pSVar15,(MethodInfo *)0x0), (char)bVar3 != '\0')
     ) {
    return (System_String_o *)pSVar15;
  }
  pSVar8 = TypeInfo_string;
  pSVar6 = (System_String_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_string,5);
  if (pSVar6 != (System_String_array *)0x0) {
    if ((int)pSVar6->max_length != 0) {
      pSVar8 = (System_String_o *)pSVar6->m_Items;
      pSVar6->m_Items[0] = "<color=#";
      il2cpp_runtime_helper_022b4080();
      if (1 < (uint)pSVar6->max_length) {
        pSVar8 = (System_String_o *)(pSVar6->m_Items + 1);
        pSVar6->m_Items[1] = pSVar10;
        il2cpp_runtime_helper_022b4080(pSVar8,pSVar10);
        if (2 < (uint)pSVar6->max_length) {
          pSVar8 = (System_String_o *)(pSVar6->m_Items + 2);
          pSVar6->m_Items[2] = ">";
          il2cpp_runtime_helper_022b4080();
          if (3 < (uint)pSVar6->max_length) {
            pSVar8 = (System_String_o *)(pSVar6->m_Items + 3);
            pSVar6->m_Items[3] = (System_String_o *)pSVar15;
            il2cpp_runtime_helper_022b4080(pSVar8,pSVar15);
            if (4 < (uint)pSVar6->max_length) {
              pSVar6->m_Items[4] = "</color>";
              il2cpp_runtime_helper_022b4080(pSVar6->m_Items + 4);
              pSVar5 = System_String__Concat_3af7570(pSVar6,(MethodInfo *)0x0);
              return pSVar5;
            }
          }
        }
      }
    }
    il2cpp_runtime_helper_022b2ca0();
  }
  il2cpp_runtime_helper_022b2c90();
  if ((in_stack_ffffffffffffff68 == (System_Text_StringBuilder_o *)0x0) ||
     ((in_stack_ffffffffffffff68->fields).m_ChunkPrevious == (System_Text_StringBuilder_o *)0x0)) {
    iStackY_ac = (int32_t)((ulong)normalHex >> 0x20);
    pSVar10 = pSVar8;
    if ((-1 < (long)normalHex) && (iStackY_a8 = (int)matchHex, 0 < iStackY_a8)) {
      if (pSVar8 == (System_String_o *)0x0) goto label_03b4cb5a;
      if (iStackY_a8 + iStackY_ac <= (pSVar8->fields)._stringLength) {
        pSVar7 = System_String__Substring_3af8da0(pSVar8,0,iStackY_ac,(MethodInfo *)0x0);
        if (g_data_057a9cc7 == '\0') {
          il2cpp_runtime_helper_023445d0(&"\xe2\x80\xb9");
          il2cpp_runtime_helper_023445d0(&"<");
          g_data_057a9cc7 = '\x01';
        }
        in_stack_ffffffffffffff68 = (System_Text_StringBuilder_o *)0x0;
        pSVar10 = pSVar7;
        bVar3 = System_String__IsNullOrEmpty(pSVar7,(MethodInfo *)0x0);
        if ((char)bVar3 == '\0') {
          if (pSVar7 == (System_String_o *)0x0) goto label_03b4cb5a;
          pSVar10 = System_String__Replace_3af9030(pSVar7,"<","\xe2\x80\xb9",(MethodInfo *)0x0);
          pMVar14 = extraout_RDX_04;
        }
        else {
          pSVar10 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
          pMVar14 = extraout_RDX_03;
        }
        pSVar7 = Gisketch_Aottg2UI_Search_GisketchSearchService__WrapNormal(pSVar10,pSVar5,pMVar14);
        pSVar19 = System_String__Substring_3af8da0(pSVar8,iStackY_ac,iStackY_a8,(MethodInfo *)0x0);
        if (g_data_057a9cc7 == '\0') {
          il2cpp_runtime_helper_023445d0(&"\xe2\x80\xb9");
          il2cpp_runtime_helper_023445d0(&"<");
          g_data_057a9cc7 = '\x01';
        }
        in_stack_ffffffffffffff68 = (System_Text_StringBuilder_o *)0x0;
        pSVar10 = pSVar19;
        bVar3 = System_String__IsNullOrEmpty(pSVar19,(MethodInfo *)0x0);
        if ((char)bVar3 == '\0') {
          if (pSVar19 == (System_String_o *)0x0) goto label_03b4cb5a;
          pSVar10 = System_String__Replace_3af9030(pSVar19,"<","\xe2\x80\xb9",(MethodInfo *)0x0);
          pMVar14 = extraout_RDX_06;
        }
        else {
          pSVar10 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
          pMVar14 = extraout_RDX_05;
        }
        pSVar19 = Gisketch_Aottg2UI_Search_GisketchSearchService__Wrap(pSVar10,matchHex_00,pMVar14);
        pSVar8 = System_String__Substring(pSVar8,iStackY_a8 + iStackY_ac,(MethodInfo *)0x0);
        if (g_data_057a9cc7 == '\0') {
          il2cpp_runtime_helper_023445d0(&"\xe2\x80\xb9");
          il2cpp_runtime_helper_023445d0(&"<");
          g_data_057a9cc7 = '\x01';
        }
        in_stack_ffffffffffffff68 = (System_Text_StringBuilder_o *)0x0;
        pSVar10 = pSVar8;
        bVar3 = System_String__IsNullOrEmpty(pSVar8,(MethodInfo *)0x0);
        if ((char)bVar3 == '\0') {
          if (pSVar8 == (System_String_o *)0x0) goto label_03b4cb5a;
          pSVar10 = System_String__Replace_3af9030(pSVar8,"<","\xe2\x80\xb9",(MethodInfo *)0x0);
          pMVar14 = extraout_RDX_08;
        }
        else {
          pSVar10 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
          pMVar14 = extraout_RDX_07;
        }
        pSVar5 = Gisketch_Aottg2UI_Search_GisketchSearchService__WrapNormal(pSVar10,pSVar5,pMVar14);
        pSVar5 = System_String__Concat_3af7150(pSVar7,pSVar19,pSVar5,(MethodInfo *)0x0);
        return pSVar5;
      }
    }
    if (g_data_057a9cc7 == '\0') {
      il2cpp_runtime_helper_023445d0(&"\xe2\x80\xb9");
      il2cpp_runtime_helper_023445d0(&"<");
      g_data_057a9cc7 = '\x01';
    }
    in_stack_ffffffffffffff68 = (System_Text_StringBuilder_o *)0x0;
    bVar3 = System_String__IsNullOrEmpty(pSVar8,(MethodInfo *)0x0);
    if ((char)bVar3 == '\0') {
      if (pSVar8 == (System_String_o *)0x0) {
label_03b4cb5a:
        iVar4 = (int32_t)in_stack_ffffffffffffff68;
        il2cpp_runtime_helper_022b2c90();
        System_Object___ctor((Il2CppObject *)pSVar10,(MethodInfo *)0x0);
        (pSVar10->fields)._stringLength = iVar4;
        iVar4 = System_Environment__get_CurrentManagedThreadId((MethodInfo *)0x0);
        *(int32_t *)&pSVar10[1].monitor = iVar4;
        return (System_String_o *)CONCAT44(extraout_var,iVar4);
      }
      pSVar10 = System_String__Replace_3af9030(pSVar8,"<","\xe2\x80\xb9",(MethodInfo *)0x0);
      pMVar14 = extraout_RDX_02;
    }
    else {
      pSVar10 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
      pMVar14 = extraout_RDX_01;
    }
    pSVar5 = Gisketch_Aottg2UI_Search_GisketchSearchService__WrapNormal(pSVar10,pSVar5,pMVar14);
    return pSVar5;
  }
  if (g_data_057a9cc4 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_bool);
    il2cpp_runtime_helper_023445d0(&TypeInfo_StringBuilder);
    g_data_057a9cc4 = '\x01';
  }
  if (pSVar8 == (System_String_o *)0x0) goto label_03b4cf10;
  lVar9 = il2cpp_runtime_helper_022b2a40(TypeInfo_bool);
  if (in_stack_ffffffffffffff68 == (System_Text_StringBuilder_o *)0x0) goto label_03b4cf10;
  pSVar18 = (in_stack_ffffffffffffff68->fields).m_ChunkPrevious;
  iVar17 = (int)pSVar18;
  if (lVar9 == 0) {
    if (0 < iVar17) {
      lVar16 = 0;
      do {
        if (-1 < (&(in_stack_ffffffffffffff68->fields).m_ChunkLength)[lVar16]) goto label_03b4cf10;
        lVar16 = lVar16 + 1;
      } while ((int)lVar16 < iVar17);
    }
label_03b4cc83:
    __this = (System_Text_StringBuilder_o *)il2cpp_runtime_helper_023052d0(TypeInfo_StringBuilder);
    System_Text_StringBuilder___ctor(__this,(MethodInfo *)0x0);
    uVar11 = (pSVar8->fields)._stringLength;
    uVar12 = (ulong)uVar11;
    pSVar18 = pSVar15;
    in_stack_ffffffffffffff68 = __this;
    if ((int)uVar11 < 1) {
label_03b4ce24:
      in_stack_ffffffffffffff68 = __this;
      pSVar15 = pSVar18;
      if (__this == (System_Text_StringBuilder_o *)0x0) goto label_03b4cf10;
      pSVar5 = (System_String_o *)
               (*(__this->klass->vtable)._3_ToString.methodPtr)
                         (__this,(__this->klass->vtable)._3_ToString.method);
      return pSVar5;
    }
    if (lVar9 == 0) goto label_03b4cf10;
    if (__this == (System_Text_StringBuilder_o *)0x0) {
      if ((int)*(ulong *)(lVar9 + 0x18) != 0) {
        bVar2 = *(byte *)(lVar9 + 0x20);
        pSVar15 = (System_Text_StringBuilder_o *)(ulong)bVar2;
        uVar13 = 0;
        do {
          if ((*(ulong *)(lVar9 + 0x18) & 0xffffffff) == uVar13) goto label_03b4cf06;
        } while (((*(char *)(lVar9 + 0x20 + uVar13) != '\0') == (bVar2 != 0)) &&
                (uVar13 = uVar13 + 1, uVar12 != uVar13));
        in_stack_ffffffffffffff68 =
             (System_Text_StringBuilder_o *)
             System_String__Substring_3af8da0(pSVar8,0,(int32_t)uVar13,(MethodInfo *)0x0);
        if (g_data_057a9cc7 == '\0') {
          il2cpp_runtime_helper_023445d0(&"\xe2\x80\xb9");
          il2cpp_runtime_helper_023445d0(&"<");
          g_data_057a9cc7 = '\x01';
        }
        bVar3 = System_String__IsNullOrEmpty((System_String_o *)in_stack_ffffffffffffff68,(MethodInfo *)0x0);
        if ((char)bVar3 == '\0') goto label_03b4cf0b;
        pSVar10 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
        pMVar14 = extraout_RDX_11;
        if (bVar2 != 0) goto label_03b4cef7;
        goto label_03b4cf3b;
      }
    }
    else {
      pSVar18 = (System_Text_StringBuilder_o *)0x0;
      uVar11 = *(uint *)(lVar9 + 0x18);
      if (uVar11 != 0) {
        do {
          iVar17 = (int)pSVar18;
          lVar16 = (long)iVar17;
          cVar1 = *(char *)(lVar9 + 0x20 + lVar16);
          if (iVar17 < (int)uVar12) {
            pSVar15 = (System_Text_StringBuilder_o *)0x0;
            do {
              in_stack_ffffffffffffff68 = pSVar18;
              if (uVar11 <= (uint)((int)pSVar15 + iVar17)) goto label_03b4cf06;
            } while (((cVar1 != '\0') ==
                      (*(char *)((long)&(pSVar15->fields).m_ChunkLength + lVar9 + lVar16) != '\0')) &&
                    (pSVar15 = (System_Text_StringBuilder_o *)((long)&pSVar15->klass + 1),
                    (System_Text_StringBuilder_o *)((int)uVar12 - lVar16) != pSVar15));
            pSVar18 = (System_Text_StringBuilder_o *)(ulong)(uint)((int)pSVar15 + iVar17);
          }
          uVar20 = (uint)pSVar18;
          pSVar10 = System_String__Substring_3af8da0(pSVar8,iVar17,uVar20 - iVar17,(MethodInfo *)0x0);
          if (g_data_057a9cc7 == '\0') {
            il2cpp_runtime_helper_023445d0(&"\xe2\x80\xb9");
            il2cpp_runtime_helper_023445d0(&"<");
            g_data_057a9cc7 = '\x01';
          }
          bVar3 = System_String__IsNullOrEmpty(pSVar10,(MethodInfo *)0x0);
          pSVar15 = pSVar18;
          if ((char)bVar3 == '\0') {
            in_stack_ffffffffffffff68 = __this;
            if (pSVar10 == (System_String_o *)0x0) goto label_03b4cf10;
            pSVar10 = System_String__Replace_3af9030(pSVar10,"<","\xe2\x80\xb9",(MethodInfo *)0x0);
            pMVar14 = extraout_RDX_10;
            if (cVar1 != '\0') goto label_03b4cce0;
label_03b4ce16:
            pSVar10 = Gisketch_Aottg2UI_Search_GisketchSearchService__WrapNormal(pSVar10,pSVar5,pMVar14);
          }
          else {
            pSVar10 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
            pMVar14 = extraout_RDX_09;
            if (cVar1 == '\0') goto label_03b4ce16;
label_03b4cce0:
            pSVar10 = Gisketch_Aottg2UI_Search_GisketchSearchService__Wrap(pSVar10,matchHex_00,pMVar14);
          }
          System_Text_StringBuilder__Append_3b03f90(__this,pSVar10,(MethodInfo *)0x0);
          uVar11 = (pSVar8->fields)._stringLength;
          uVar12 = (ulong)uVar11;
          if ((int)uVar11 <= (int)uVar20) goto label_03b4ce24;
          uVar11 = *(uint *)(lVar9 + 0x18);
          in_stack_ffffffffffffff68 = __this;
        } while (uVar20 < uVar11);
      }
    }
  }
  else {
    if ((long)pSVar18 << 0x20 < 1) goto label_03b4cc83;
    uVar12 = 0;
    if (((ulong)pSVar18 & 0xffffffff) != 0) {
      do {
        uVar11 = (&(in_stack_ffffffffffffff68->fields).m_ChunkLength)[uVar12];
        if ((-1 < (long)(int)uVar11) && ((int)uVar11 < (int)*(uint *)(lVar9 + 0x18))) {
          if (*(uint *)(lVar9 + 0x18) <= uVar11) break;
          *(undefined1 *)(lVar9 + 0x20 + (long)(int)uVar11) = 1;
        }
        uVar12 = uVar12 + 1;
        if ((long)iVar17 <= (long)uVar12) goto label_03b4cc83;
      } while (((ulong)pSVar18 & 0xffffffff) != uVar12);
    }
  }
label_03b4cf06:
  while( true ) {
    il2cpp_runtime_helper_022b2ca0();
label_03b4cf0b:
    if (in_stack_ffffffffffffff68 == (System_Text_StringBuilder_o *)0x0) {
label_03b4cf10:
      il2cpp_runtime_helper_022b2c90();
    }
    pSVar10 = System_String__Replace_3af9030
                        ((System_String_o *)in_stack_ffffffffffffff68,"<","\xe2\x80\xb9",
                         (MethodInfo *)0x0);
    pMVar14 = extraout_RDX_12;
    if ((char)pSVar15 == '\0') break;
label_03b4cef7:
    Gisketch_Aottg2UI_Search_GisketchSearchService__Wrap(pSVar10,matchHex_00,pMVar14);
    il2cpp_runtime_helper_022b2c90();
  }
label_03b4cf3b:
  Gisketch_Aottg2UI_Search_GisketchSearchService__WrapNormal(pSVar10,pSVar5,pMVar14);
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057a9cc5 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    il2cpp_runtime_helper_023445d0(&"<color=#");
    il2cpp_runtime_helper_023445d0(&"</color>");
    il2cpp_runtime_helper_023445d0(&">");
    g_data_057a9cc5 = '\x01';
  }
  pSVar19 = (System_String_o *)&g_data_00000005;
  pSVar8 = TypeInfo_string;
  pSVar6 = (System_String_array *)il2cpp_runtime_helper_022b2a40();
  pSVar7 = "<color=#";
  if (pSVar6 != (System_String_array *)0x0) {
    if ((int)pSVar6->max_length != 0) {
      pSVar8 = (System_String_o *)pSVar6->m_Items;
      pSVar6->m_Items[0] = "<color=#";
      il2cpp_runtime_helper_022b4080();
      pSVar19 = pSVar7;
      if (1 < (uint)pSVar6->max_length) {
        pSVar8 = (System_String_o *)(pSVar6->m_Items + 1);
        pSVar6->m_Items[1] = pSVar5;
        il2cpp_runtime_helper_022b4080();
        pSVar7 = ">";
        pSVar19 = pSVar5;
        if (2 < (uint)pSVar6->max_length) {
          pSVar8 = (System_String_o *)(pSVar6->m_Items + 2);
          pSVar6->m_Items[2] = ">";
          il2cpp_runtime_helper_022b4080();
          pSVar19 = pSVar7;
          if (3 < (uint)pSVar6->max_length) {
            pSVar8 = (System_String_o *)(pSVar6->m_Items + 3);
            pSVar6->m_Items[3] = pSVar10;
            il2cpp_runtime_helper_022b4080();
            pSVar19 = pSVar10;
            if (4 < (uint)pSVar6->max_length) {
              pSVar6->m_Items[4] = "</color>";
              il2cpp_runtime_helper_022b4080(pSVar6->m_Items + 4);
              pSVar5 = System_String__Concat_3af7570(pSVar6,(MethodInfo *)0x0);
              return pSVar5;
            }
          }
        }
      }
    }
    il2cpp_runtime_helper_022b2ca0();
  }
  il2cpp_runtime_helper_022b2c90();
  if ((pSVar19 != (System_String_o *)0x0) && (pSVar8 != (System_String_o *)0x0)) {
    iVar17 = (pSVar19->fields)._stringLength;
    if ((pSVar8->fields)._stringLength < iVar17 + startIndex) {
      return (System_String_o *)0x0;
    }
    pSVar5 = System_String__Substring_3af8da0(pSVar8,startIndex,iVar17,(MethodInfo *)0x0);
    bVar3 = System_String__op_Equality(pSVar5,pSVar19,(MethodInfo *)0x0);
    return (System_String_o *)CONCAT44(extraout_var_00,bVar3);
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057a9cc9 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057a9cc9 = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = __this_00;
  pSVar5 = (System_String_o *)il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_c + 0xb8),__this_00);
  return pSVar5;
}


// Gisketch.Aottg2UI.Search.GisketchSearchService$$Empty
// il2cpp: System_Collections_Generic_IEnumerable_GisketchSearchEntry__o* Gisketch_Aottg2UI_Search_GisketchSearchService__Empty (const MethodInfo* method);
// 0x3b4b420

System_Collections_Generic_IEnumerable_GisketchSearchEntry__o *
Gisketch_Aottg2UI_Search_GisketchSearchService__Empty(MethodInfo *method)

{
  int32_t iVar1;
  Il2CppObject *__this;
  
  if (g_data_057a9cc3 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Empty_d__5);
    g_data_057a9cc3 = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_Empty_d__5);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  *(undefined4 *)&__this[1].klass = 0xfffffffe;
  iVar1 = System_Environment__get_CurrentManagedThreadId((MethodInfo *)0x0);
  *(int32_t *)&__this[2].klass = iVar1;
  return (System_Collections_Generic_IEnumerable_GisketchSearchEntry__o *)__this;
}


// Gisketch.Aottg2UI.Search.GisketchSearchService$$Visible
// il2cpp: Gisketch_Aottg2UI_Search_GisketchSearchMatch_o Gisketch_Aottg2UI_Search_GisketchSearchService__Visible (System_String_o* display, System_String_o* needle, int32_t score, const MethodInfo* method);
// 0x3b4be60

Gisketch_Aottg2UI_Search_GisketchSearchMatch_o *
Gisketch_Aottg2UI_Search_GisketchSearchService__Visible
          (Gisketch_Aottg2UI_Search_GisketchSearchMatch_o *__return_storage_ptr__,System_String_o *display,
          System_String_o *needle,int32_t score,MethodInfo *method)

{
  int length;
  long lVar1;
  byte bVar2;
  uint16_t uVar3;
  int32_t iVar4;
  bool_conflict bVar5;
  System_String_o *a;
  undefined4 in_register_0000000c;
  int32_t *piVar6;
  int *extraout_RDX;
  int iVar7;
  uint uVar8;
  ulong uVar9;
  byte bVar10;
  System_String_o *pSVar11;
  System_String_o *value;
  int32_t iVar12;
  
  piVar6 = (int32_t *)CONCAT44(in_register_0000000c,score);
  pSVar11 = (System_String_o *)0x0;
  value = (System_String_o *)__return_storage_ptr__;
  if (display == (System_String_o *)0x0) {
label_03b4bf02:
    il2cpp_runtime_helper_022b2c90();
    *extraout_RDX = -1;
    *piVar6 = 0;
    bVar5 = System_String__IsNullOrEmpty(value,(MethodInfo *)0x0);
    if ((char)bVar5 != '\0') {
      return (Gisketch_Aottg2UI_Search_GisketchSearchMatch_o *)0x0;
    }
    if (value == (System_String_o *)0x0) {
label_03b4c075:
      il2cpp_runtime_helper_022b2c90();
    }
    else {
      iVar7 = (value->fields)._stringLength;
      uVar9 = 0;
      if (pSVar11 == (System_String_o *)0x0) {
        if (iVar7 < 1) {
          return (Gisketch_Aottg2UI_Search_GisketchSearchMatch_o *)0x0;
        }
        bVar2 = 1;
        do {
          uVar3 = System_String__get_Chars(value,(int)uVar9,(MethodInfo *)0x0);
          if (*(int *)(g_data_057b9bf8 + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          bVar5 = System_Char__IsLetterOrDigit(uVar3,(MethodInfo *)0x0);
          bVar10 = (byte)bVar5 ^ 1;
          if (((bVar2 & 1) != 0) && (bVar10 == 0)) goto label_03b4c075;
          uVar8 = (int)uVar9 + 1;
          uVar9 = (ulong)uVar8;
          bVar2 = bVar10;
        } while ((int)uVar8 < (value->fields)._stringLength);
      }
      else {
        if (iVar7 < 1) {
          return (Gisketch_Aottg2UI_Search_GisketchSearchMatch_o *)0x0;
        }
        bVar2 = 1;
        do {
          iVar7 = (int)uVar9;
          uVar3 = System_String__get_Chars(value,iVar7,(MethodInfo *)0x0);
          if (*(int *)(g_data_057b9bf8 + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          bVar5 = System_Char__IsLetterOrDigit(uVar3,(MethodInfo *)0x0);
          bVar10 = (byte)bVar5 ^ 1;
          if (((bVar2 & 1) != 0) && (bVar10 == 0)) {
            length = (pSVar11->fields)._stringLength;
            if ((value->fields)._stringLength < iVar7 + length) {
              bVar10 = 0;
            }
            else {
              bVar10 = 0;
              a = System_String__Substring_3af8da0(value,iVar7,length,(MethodInfo *)0x0);
              bVar5 = System_String__op_Equality(a,pSVar11,(MethodInfo *)0x0);
              if ((char)bVar5 != '\0') {
                *extraout_RDX = iVar7;
                *piVar6 = (pSVar11->fields)._stringLength;
                return (Gisketch_Aottg2UI_Search_GisketchSearchMatch_o *)CONCAT71((int7)(uVar9 >> 8),1);
              }
            }
          }
          uVar9 = (ulong)(iVar7 + 1U);
          bVar2 = bVar10;
        } while ((int)(iVar7 + 1U) < (value->fields)._stringLength);
      }
    }
    return (Gisketch_Aottg2UI_Search_GisketchSearchMatch_o *)0x0;
  }
  iVar12 = 0;
  pSVar11 = needle;
  iVar4 = System_String__IndexOf_3afc440(display,needle,(MethodInfo *)0x0);
  lVar1 = g_data_057b9c00;
  if (-1 < iVar4) {
    value = display;
    if (needle == (System_String_o *)0x0) goto label_03b4bf02;
    iVar12 = (needle->fields)._stringLength;
  }
  pSVar11 = (System_String_o *)**(long **)(g_data_057b9c00 + 0xb8);
  (__return_storage_ptr__->fields).Score = 0;
  (__return_storage_ptr__->fields).DisplayStart = 0;
  *(undefined8 *)&(__return_storage_ptr__->fields).DisplayLength = 0;
  (__return_storage_ptr__->fields).HiddenText = (System_String_o *)0x0;
  (__return_storage_ptr__->fields).DisplayIndices = (System_Int32_array *)0x0;
  (__return_storage_ptr__->fields).Score = score;
  (__return_storage_ptr__->fields).DisplayStart = iVar4;
  (__return_storage_ptr__->fields).DisplayLength = iVar12;
  if (pSVar11 == (System_String_o *)0x0) {
    pSVar11 = (System_String_o *)**(long **)(lVar1 + 0xb8);
  }
  (__return_storage_ptr__->fields).HiddenText = pSVar11;
  il2cpp_runtime_helper_022b4080(&(__return_storage_ptr__->fields).HiddenText);
  (__return_storage_ptr__->fields).DisplayIndices = (System_Int32_array *)0x0;
  il2cpp_runtime_helper_022b4080(&(__return_storage_ptr__->fields).DisplayIndices,0);
  return __return_storage_ptr__;
}


// Gisketch.Aottg2UI.Search.GisketchSearchService$$MarkRange
// il2cpp: System_String_o* Gisketch_Aottg2UI_Search_GisketchSearchService__MarkRange (System_String_o* text, Gisketch_Aottg2UI_Search_GisketchSearchMatch_o match, bool active, System_String_o* matchHex, System_String_o* normalHex, const MethodInfo* method);
// 0x3b4c880

System_String_o *
Gisketch_Aottg2UI_Search_GisketchSearchService__MarkRange
          (System_String_o *text,Gisketch_Aottg2UI_Search_GisketchSearchMatch_o match,bool_conflict active,
          System_String_o *matchHex,System_String_o *normalHex,MethodInfo *method)

{
  char cVar1;
  byte bVar2;
  Il2CppClass *pIVar3;
  int32_t iVar4;
  bool_conflict bVar5;
  System_String_o *pSVar6;
  System_String_o *pSVar7;
  undefined4 extraout_var;
  long lVar8;
  System_Int32_array *__this;
  System_String_o *pSVar9;
  System_String_array *values;
  undefined4 extraout_var_00;
  Il2CppObject *__this_00;
  uint uVar10;
  int32_t startIndex;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
  MethodInfo *extraout_RDX_03;
  MethodInfo *extraout_RDX_04;
  MethodInfo *extraout_RDX_05;
  MethodInfo *extraout_RDX_06;
  ulong uVar11;
  MethodInfo *extraout_RDX_07;
  MethodInfo *extraout_RDX_08;
  MethodInfo *extraout_RDX_09;
  MethodInfo *pMVar12;
  MethodInfo *extraout_RDX_10;
  long lVar13;
  int iVar14;
  System_Int32_array *pSVar15;
  System_String_o *pSVar16;
  ulong uVar17;
  uint uVar18;
  System_Int32_array *unaff_R14;
  
  if ((match.fields.DisplayIndices == (System_Int32_array *)0x0) ||
     ((match.fields.DisplayIndices)->max_length == 0)) {
    pSVar9 = text;
    if ((-1 < match.fields.DisplayStart) && (0 < match.fields.DisplayLength)) {
      if (text == (System_String_o *)0x0) goto label_03b4cb5a;
      if (match.fields.DisplayLength + match.fields.DisplayStart <= (text->fields)._stringLength) {
        pSVar6 = System_String__Substring_3af8da0(text,0,match.fields.DisplayStart,(MethodInfo *)0x0);
        if (g_data_057a9cc7 == '\0') {
          il2cpp_runtime_helper_023445d0(&"\xe2\x80\xb9");
          il2cpp_runtime_helper_023445d0(&"<");
          g_data_057a9cc7 = '\x01';
        }
        match.fields.DisplayIndices = (System_Int32_array *)0x0;
        pSVar9 = pSVar6;
        bVar5 = System_String__IsNullOrEmpty(pSVar6,(MethodInfo *)0x0);
        if ((char)bVar5 == '\0') {
          if (pSVar6 == (System_String_o *)0x0) goto label_03b4cb5a;
          pSVar9 = System_String__Replace_3af9030(pSVar6,"<","\xe2\x80\xb9",(MethodInfo *)0x0);
          pMVar12 = extraout_RDX_02;
        }
        else {
          pSVar9 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
          pMVar12 = extraout_RDX_01;
        }
        pSVar6 = Gisketch_Aottg2UI_Search_GisketchSearchService__WrapNormal(pSVar9,normalHex,pMVar12);
        pSVar7 = System_String__Substring_3af8da0
                           (text,match.fields.DisplayStart,match.fields.DisplayLength,(MethodInfo *)0x0);
        if (g_data_057a9cc7 == '\0') {
          il2cpp_runtime_helper_023445d0(&"\xe2\x80\xb9");
          il2cpp_runtime_helper_023445d0(&"<");
          g_data_057a9cc7 = '\x01';
        }
        match.fields.DisplayIndices = (System_Int32_array *)0x0;
        pSVar9 = pSVar7;
        bVar5 = System_String__IsNullOrEmpty(pSVar7,(MethodInfo *)0x0);
        if ((char)bVar5 == '\0') {
          if (pSVar7 == (System_String_o *)0x0) goto label_03b4cb5a;
          pSVar9 = System_String__Replace_3af9030(pSVar7,"<","\xe2\x80\xb9",(MethodInfo *)0x0);
          pMVar12 = extraout_RDX_04;
        }
        else {
          pSVar9 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
          pMVar12 = extraout_RDX_03;
        }
        pSVar7 = Gisketch_Aottg2UI_Search_GisketchSearchService__Wrap(pSVar9,matchHex,pMVar12);
        pSVar16 = System_String__Substring
                            (text,match.fields.DisplayLength + match.fields.DisplayStart,(MethodInfo *)0x0);
        if (g_data_057a9cc7 == '\0') {
          il2cpp_runtime_helper_023445d0(&"\xe2\x80\xb9");
          il2cpp_runtime_helper_023445d0(&"<");
          g_data_057a9cc7 = '\x01';
        }
        match.fields.DisplayIndices = (System_Int32_array *)0x0;
        pSVar9 = pSVar16;
        bVar5 = System_String__IsNullOrEmpty(pSVar16,(MethodInfo *)0x0);
        if ((char)bVar5 == '\0') {
          if (pSVar16 == (System_String_o *)0x0) goto label_03b4cb5a;
          pSVar9 = System_String__Replace_3af9030(pSVar16,"<","\xe2\x80\xb9",(MethodInfo *)0x0);
          pMVar12 = extraout_RDX_06;
        }
        else {
          pSVar9 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
          pMVar12 = extraout_RDX_05;
        }
        pSVar9 = Gisketch_Aottg2UI_Search_GisketchSearchService__WrapNormal(pSVar9,normalHex,pMVar12);
        pSVar9 = System_String__Concat_3af7150(pSVar6,pSVar7,pSVar9,(MethodInfo *)0x0);
        return pSVar9;
      }
    }
    if (g_data_057a9cc7 == '\0') {
      il2cpp_runtime_helper_023445d0(&"\xe2\x80\xb9");
      il2cpp_runtime_helper_023445d0(&"<");
      g_data_057a9cc7 = '\x01';
    }
    match.fields.DisplayIndices = (System_Int32_array *)0x0;
    bVar5 = System_String__IsNullOrEmpty(text,(MethodInfo *)0x0);
    if ((char)bVar5 == '\0') {
      if (text == (System_String_o *)0x0) {
label_03b4cb5a:
        iVar4 = (int32_t)match.fields.DisplayIndices;
        il2cpp_runtime_helper_022b2c90();
        System_Object___ctor((Il2CppObject *)pSVar9,(MethodInfo *)0x0);
        (pSVar9->fields)._stringLength = iVar4;
        iVar4 = System_Environment__get_CurrentManagedThreadId((MethodInfo *)0x0);
        *(int32_t *)&pSVar9[1].monitor = iVar4;
        return (System_String_o *)CONCAT44(extraout_var,iVar4);
      }
      pSVar9 = System_String__Replace_3af9030(text,"<","\xe2\x80\xb9",(MethodInfo *)0x0);
      pMVar12 = extraout_RDX_00;
    }
    else {
      pSVar9 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
      pMVar12 = extraout_RDX;
    }
    pSVar9 = Gisketch_Aottg2UI_Search_GisketchSearchService__WrapNormal(pSVar9,normalHex,pMVar12);
    return pSVar9;
  }
  if (g_data_057a9cc4 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_bool);
    il2cpp_runtime_helper_023445d0(&TypeInfo_StringBuilder);
    g_data_057a9cc4 = '\x01';
  }
  if (text == (System_String_o *)0x0) goto label_03b4cf10;
  lVar8 = il2cpp_runtime_helper_022b2a40(TypeInfo_bool);
  if (match.fields.DisplayIndices == (System_Int32_array *)0x0) goto label_03b4cf10;
  uVar17 = (match.fields.DisplayIndices)->max_length;
  iVar14 = (int)uVar17;
  if (lVar8 == 0) {
    if (0 < iVar14) {
      lVar13 = 0;
      do {
        if (-1 < (match.fields.DisplayIndices)->m_Items[lVar13]) goto label_03b4cf10;
        lVar13 = lVar13 + 1;
      } while ((int)lVar13 < iVar14);
    }
label_03b4cc83:
    __this = (System_Int32_array *)il2cpp_runtime_helper_023052d0(TypeInfo_StringBuilder);
    System_Text_StringBuilder___ctor((System_Text_StringBuilder_o *)__this,(MethodInfo *)0x0);
    uVar10 = (text->fields)._stringLength;
    uVar17 = (ulong)uVar10;
    pSVar15 = unaff_R14;
    match.fields.DisplayIndices = __this;
    if ((int)uVar10 < 1) {
label_03b4ce24:
      match.fields.DisplayIndices = __this;
      unaff_R14 = pSVar15;
      if (__this == (System_Int32_array *)0x0) goto label_03b4cf10;
      pIVar3 = (__this->obj).klass;
      pSVar9 = (System_String_o *)
               (*(((System_Text_StringBuilder_VTable *)pIVar3->vtable)->_3_ToString).methodPtr)
                         (__this,(((System_Text_StringBuilder_VTable *)pIVar3->vtable)->_3_ToString).method);
      return pSVar9;
    }
    if (lVar8 == 0) goto label_03b4cf10;
    if (__this == (System_Int32_array *)0x0) {
      if ((int)*(ulong *)(lVar8 + 0x18) != 0) {
        bVar2 = *(byte *)(lVar8 + 0x20);
        unaff_R14 = (System_Int32_array *)(ulong)bVar2;
        uVar11 = 0;
        do {
          if ((*(ulong *)(lVar8 + 0x18) & 0xffffffff) == uVar11) goto label_03b4cf06;
        } while (((*(char *)(lVar8 + 0x20 + uVar11) != '\0') == (bVar2 != 0)) &&
                (uVar11 = uVar11 + 1, uVar17 != uVar11));
        match.fields.DisplayIndices =
             (System_Int32_array *)System_String__Substring_3af8da0(text,0,(int32_t)uVar11,(MethodInfo *)0x0);
        if (g_data_057a9cc7 == '\0') {
          il2cpp_runtime_helper_023445d0(&"\xe2\x80\xb9");
          il2cpp_runtime_helper_023445d0(&"<");
          g_data_057a9cc7 = '\x01';
        }
        bVar5 = System_String__IsNullOrEmpty((System_String_o *)match.fields.DisplayIndices,(MethodInfo *)0x0)
        ;
        if ((char)bVar5 == '\0') goto label_03b4cf0b;
        pSVar9 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
        pMVar12 = extraout_RDX_09;
        if (bVar2 != 0) goto label_03b4cef7;
        goto label_03b4cf3b;
      }
    }
    else {
      pSVar15 = (System_Int32_array *)0x0;
      uVar10 = *(uint *)(lVar8 + 0x18);
      if (uVar10 != 0) {
        do {
          iVar14 = (int)pSVar15;
          lVar13 = (long)iVar14;
          cVar1 = *(char *)(lVar8 + 0x20 + lVar13);
          if (iVar14 < (int)uVar17) {
            unaff_R14 = (System_Int32_array *)0x0;
            do {
              match.fields.DisplayIndices = pSVar15;
              if (uVar10 <= (uint)((int)unaff_R14 + iVar14)) goto label_03b4cf06;
            } while (((cVar1 != '\0') == (*(char *)((long)unaff_R14->m_Items + lVar8 + lVar13) != '\0')) &&
                    (unaff_R14 = (System_Int32_array *)((long)&(unaff_R14->obj).klass + 1),
                    (System_Int32_array *)((int)uVar17 - lVar13) != unaff_R14));
            pSVar15 = (System_Int32_array *)(ulong)(uint)((int)unaff_R14 + iVar14);
          }
          uVar18 = (uint)pSVar15;
          pSVar9 = System_String__Substring_3af8da0(text,iVar14,uVar18 - iVar14,(MethodInfo *)0x0);
          if (g_data_057a9cc7 == '\0') {
            il2cpp_runtime_helper_023445d0(&"\xe2\x80\xb9");
            il2cpp_runtime_helper_023445d0(&"<");
            g_data_057a9cc7 = '\x01';
          }
          bVar5 = System_String__IsNullOrEmpty(pSVar9,(MethodInfo *)0x0);
          unaff_R14 = pSVar15;
          if ((char)bVar5 == '\0') {
            match.fields.DisplayIndices = __this;
            if (pSVar9 == (System_String_o *)0x0) goto label_03b4cf10;
            pSVar9 = System_String__Replace_3af9030(pSVar9,"<","\xe2\x80\xb9",(MethodInfo *)0x0);
            pMVar12 = extraout_RDX_08;
            if (cVar1 == '\0') goto label_03b4ce16;
label_03b4cce0:
            pSVar9 = Gisketch_Aottg2UI_Search_GisketchSearchService__Wrap(pSVar9,matchHex,pMVar12);
          }
          else {
            pSVar9 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
            pMVar12 = extraout_RDX_07;
            if (cVar1 != '\0') goto label_03b4cce0;
label_03b4ce16:
            pSVar9 = Gisketch_Aottg2UI_Search_GisketchSearchService__WrapNormal(pSVar9,normalHex,pMVar12);
          }
          System_Text_StringBuilder__Append_3b03f90
                    ((System_Text_StringBuilder_o *)__this,pSVar9,(MethodInfo *)0x0);
          uVar10 = (text->fields)._stringLength;
          uVar17 = (ulong)uVar10;
          if ((int)uVar10 <= (int)uVar18) goto label_03b4ce24;
          uVar10 = *(uint *)(lVar8 + 0x18);
          match.fields.DisplayIndices = __this;
        } while (uVar18 < uVar10);
      }
    }
  }
  else {
    if ((long)(uVar17 << 0x20) < 1) goto label_03b4cc83;
    uVar11 = 0;
    if ((uVar17 & 0xffffffff) != 0) {
      do {
        uVar10 = (match.fields.DisplayIndices)->m_Items[uVar11];
        if ((-1 < (long)(int)uVar10) && ((int)uVar10 < (int)*(uint *)(lVar8 + 0x18))) {
          if (*(uint *)(lVar8 + 0x18) <= uVar10) break;
          *(undefined1 *)(lVar8 + 0x20 + (long)(int)uVar10) = 1;
        }
        uVar11 = uVar11 + 1;
        if ((long)iVar14 <= (long)uVar11) goto label_03b4cc83;
      } while ((uVar17 & 0xffffffff) != uVar11);
    }
  }
label_03b4cf06:
  while( true ) {
    il2cpp_runtime_helper_022b2ca0();
label_03b4cf0b:
    if (match.fields.DisplayIndices == (System_Int32_array *)0x0) {
label_03b4cf10:
      il2cpp_runtime_helper_022b2c90();
    }
    pSVar9 = System_String__Replace_3af9030
                       ((System_String_o *)match.fields.DisplayIndices,"<","\xe2\x80\xb9",
                        (MethodInfo *)0x0);
    pMVar12 = extraout_RDX_10;
    if ((char)unaff_R14 == '\0') break;
label_03b4cef7:
    Gisketch_Aottg2UI_Search_GisketchSearchService__Wrap(pSVar9,matchHex,pMVar12);
    il2cpp_runtime_helper_022b2c90();
  }
label_03b4cf3b:
  Gisketch_Aottg2UI_Search_GisketchSearchService__WrapNormal(pSVar9,normalHex,pMVar12);
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057a9cc5 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    il2cpp_runtime_helper_023445d0(&"<color=#");
    il2cpp_runtime_helper_023445d0(&"</color>");
    il2cpp_runtime_helper_023445d0(&">");
    g_data_057a9cc5 = '\x01';
  }
  pSVar16 = (System_String_o *)&g_data_00000005;
  pSVar6 = TypeInfo_string;
  values = (System_String_array *)il2cpp_runtime_helper_022b2a40();
  pSVar7 = "<color=#";
  if (values != (System_String_array *)0x0) {
    if ((int)values->max_length != 0) {
      pSVar6 = (System_String_o *)values->m_Items;
      values->m_Items[0] = "<color=#";
      il2cpp_runtime_helper_022b4080();
      pSVar16 = pSVar7;
      if (1 < (uint)values->max_length) {
        pSVar6 = (System_String_o *)(values->m_Items + 1);
        values->m_Items[1] = normalHex;
        il2cpp_runtime_helper_022b4080();
        pSVar7 = ">";
        pSVar16 = normalHex;
        if (2 < (uint)values->max_length) {
          pSVar6 = (System_String_o *)(values->m_Items + 2);
          values->m_Items[2] = ">";
          il2cpp_runtime_helper_022b4080();
          pSVar16 = pSVar7;
          if (3 < (uint)values->max_length) {
            pSVar6 = (System_String_o *)(values->m_Items + 3);
            values->m_Items[3] = pSVar9;
            il2cpp_runtime_helper_022b4080();
            pSVar16 = pSVar9;
            if (4 < (uint)values->max_length) {
              values->m_Items[4] = "</color>";
              il2cpp_runtime_helper_022b4080(values->m_Items + 4);
              pSVar9 = System_String__Concat_3af7570(values,(MethodInfo *)0x0);
              return pSVar9;
            }
          }
        }
      }
    }
    il2cpp_runtime_helper_022b2ca0();
  }
  il2cpp_runtime_helper_022b2c90();
  if ((pSVar16 != (System_String_o *)0x0) && (pSVar6 != (System_String_o *)0x0)) {
    iVar14 = (pSVar16->fields)._stringLength;
    if (iVar14 + startIndex <= (pSVar6->fields)._stringLength) {
      pSVar9 = System_String__Substring_3af8da0(pSVar6,startIndex,iVar14,(MethodInfo *)0x0);
      bVar5 = System_String__op_Equality(pSVar9,pSVar16,(MethodInfo *)0x0);
      return (System_String_o *)CONCAT44(extraout_var_00,bVar5);
    }
    return (System_String_o *)0x0;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057a9cc9 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057a9cc9 = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = __this_00;
  pSVar9 = (System_String_o *)il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_c + 0xb8),__this_00);
  return pSVar9;
}


// Gisketch.Aottg2UI.Search.GisketchSearchService$$MarkIndices
// il2cpp: System_String_o* Gisketch_Aottg2UI_Search_GisketchSearchService__MarkIndices (System_String_o* text, System_Int32_array* indices, System_String_o* matchHex, System_String_o* normalHex, const MethodInfo* method);
// 0x3b4cb90

System_String_o *
Gisketch_Aottg2UI_Search_GisketchSearchService__MarkIndices
          (System_String_o *text,System_Int32_array *indices,System_String_o *matchHex,
          System_String_o *normalHex,MethodInfo *method)

{
  char cVar1;
  byte bVar2;
  Il2CppClass *pIVar3;
  bool_conflict bVar4;
  long lVar5;
  System_Int32_array *__this;
  System_String_o *pSVar6;
  System_String_array *values;
  undefined4 extraout_var;
  Il2CppObject *__this_00;
  uint uVar7;
  int32_t startIndex;
  ulong uVar8;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *pMVar9;
  MethodInfo *extraout_RDX_02;
  long lVar10;
  int iVar11;
  System_Int32_array *pSVar12;
  System_String_o *b;
  System_String_o *pSVar13;
  ulong uVar14;
  System_String_o *__this_01;
  uint uVar15;
  System_Int32_array *unaff_R14;
  
  if (g_data_057a9cc4 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_bool);
    il2cpp_runtime_helper_023445d0(&TypeInfo_StringBuilder);
    g_data_057a9cc4 = '\x01';
  }
  if (text == (System_String_o *)0x0) goto label_03b4cf10;
  lVar5 = il2cpp_runtime_helper_022b2a40(TypeInfo_bool);
  if (indices == (System_Int32_array *)0x0) goto label_03b4cf10;
  uVar14 = indices->max_length;
  iVar11 = (int)uVar14;
  if (lVar5 == 0) {
    if (0 < iVar11) {
      lVar10 = 0;
      do {
        if (-1 < indices->m_Items[lVar10]) goto label_03b4cf10;
        lVar10 = lVar10 + 1;
      } while ((int)lVar10 < iVar11);
    }
label_03b4cc83:
    __this = (System_Int32_array *)il2cpp_runtime_helper_023052d0(TypeInfo_StringBuilder);
    System_Text_StringBuilder___ctor((System_Text_StringBuilder_o *)__this,(MethodInfo *)0x0);
    uVar7 = (text->fields)._stringLength;
    uVar14 = (ulong)uVar7;
    pSVar12 = unaff_R14;
    indices = __this;
    if ((int)uVar7 < 1) {
label_03b4ce24:
      indices = __this;
      unaff_R14 = pSVar12;
      if (__this == (System_Int32_array *)0x0) goto label_03b4cf10;
      pIVar3 = (__this->obj).klass;
      pSVar6 = (System_String_o *)
               (*(((System_Text_StringBuilder_VTable *)pIVar3->vtable)->_3_ToString).methodPtr)
                         (__this,(((System_Text_StringBuilder_VTable *)pIVar3->vtable)->_3_ToString).method);
      return pSVar6;
    }
    if (lVar5 == 0) goto label_03b4cf10;
    if (__this == (System_Int32_array *)0x0) {
      if ((int)*(ulong *)(lVar5 + 0x18) != 0) {
        bVar2 = *(byte *)(lVar5 + 0x20);
        unaff_R14 = (System_Int32_array *)(ulong)bVar2;
        uVar8 = 0;
        do {
          if ((*(ulong *)(lVar5 + 0x18) & 0xffffffff) == uVar8) goto label_03b4cf06;
        } while (((*(char *)(lVar5 + 0x20 + uVar8) != '\0') == (bVar2 != 0)) &&
                (uVar8 = uVar8 + 1, uVar14 != uVar8));
        indices = (System_Int32_array *)
                  System_String__Substring_3af8da0(text,0,(int32_t)uVar8,(MethodInfo *)0x0);
        if (g_data_057a9cc7 == '\0') {
          il2cpp_runtime_helper_023445d0(&"\xe2\x80\xb9");
          il2cpp_runtime_helper_023445d0(&"<");
          g_data_057a9cc7 = '\x01';
        }
        bVar4 = System_String__IsNullOrEmpty((System_String_o *)indices,(MethodInfo *)0x0);
        if ((char)bVar4 == '\0') goto label_03b4cf0b;
        pSVar6 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
        pMVar9 = extraout_RDX_01;
        if (bVar2 != 0) goto label_03b4cef7;
        goto label_03b4cf3b;
      }
    }
    else {
      pSVar12 = (System_Int32_array *)0x0;
      uVar7 = *(uint *)(lVar5 + 0x18);
      if (uVar7 != 0) {
        do {
          iVar11 = (int)pSVar12;
          lVar10 = (long)iVar11;
          cVar1 = *(char *)(lVar5 + 0x20 + lVar10);
          if (iVar11 < (int)uVar14) {
            unaff_R14 = (System_Int32_array *)0x0;
            do {
              indices = pSVar12;
              if (uVar7 <= (uint)((int)unaff_R14 + iVar11)) goto label_03b4cf06;
            } while (((cVar1 != '\0') == (*(char *)((long)unaff_R14->m_Items + lVar5 + lVar10) != '\0')) &&
                    (unaff_R14 = (System_Int32_array *)((long)&(unaff_R14->obj).klass + 1),
                    (System_Int32_array *)((int)uVar14 - lVar10) != unaff_R14));
            pSVar12 = (System_Int32_array *)(ulong)(uint)((int)unaff_R14 + iVar11);
          }
          uVar15 = (uint)pSVar12;
          pSVar6 = System_String__Substring_3af8da0(text,iVar11,uVar15 - iVar11,(MethodInfo *)0x0);
          if (g_data_057a9cc7 == '\0') {
            il2cpp_runtime_helper_023445d0(&"\xe2\x80\xb9");
            il2cpp_runtime_helper_023445d0(&"<");
            g_data_057a9cc7 = '\x01';
          }
          bVar4 = System_String__IsNullOrEmpty(pSVar6,(MethodInfo *)0x0);
          unaff_R14 = pSVar12;
          if ((char)bVar4 == '\0') {
            indices = __this;
            if (pSVar6 == (System_String_o *)0x0) goto label_03b4cf10;
            pSVar6 = System_String__Replace_3af9030(pSVar6,"<","\xe2\x80\xb9",(MethodInfo *)0x0);
            pMVar9 = extraout_RDX_00;
            if (cVar1 == '\0') goto label_03b4ce16;
label_03b4cce0:
            pSVar6 = Gisketch_Aottg2UI_Search_GisketchSearchService__Wrap(pSVar6,matchHex,pMVar9);
          }
          else {
            pSVar6 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
            pMVar9 = extraout_RDX;
            if (cVar1 != '\0') goto label_03b4cce0;
label_03b4ce16:
            pSVar6 = Gisketch_Aottg2UI_Search_GisketchSearchService__WrapNormal(pSVar6,normalHex,pMVar9);
          }
          System_Text_StringBuilder__Append_3b03f90
                    ((System_Text_StringBuilder_o *)__this,pSVar6,(MethodInfo *)0x0);
          uVar7 = (text->fields)._stringLength;
          uVar14 = (ulong)uVar7;
          if ((int)uVar7 <= (int)uVar15) goto label_03b4ce24;
          uVar7 = *(uint *)(lVar5 + 0x18);
          indices = __this;
        } while (uVar15 < uVar7);
      }
    }
  }
  else {
    if ((long)(uVar14 << 0x20) < 1) goto label_03b4cc83;
    uVar8 = 0;
    if ((uVar14 & 0xffffffff) != 0) {
      do {
        uVar7 = indices->m_Items[uVar8];
        if ((-1 < (long)(int)uVar7) && ((int)uVar7 < (int)*(uint *)(lVar5 + 0x18))) {
          if (*(uint *)(lVar5 + 0x18) <= uVar7) break;
          *(undefined1 *)(lVar5 + 0x20 + (long)(int)uVar7) = 1;
        }
        uVar8 = uVar8 + 1;
        if ((long)iVar11 <= (long)uVar8) goto label_03b4cc83;
      } while ((uVar14 & 0xffffffff) != uVar8);
    }
  }
label_03b4cf06:
  while( true ) {
    il2cpp_runtime_helper_022b2ca0();
label_03b4cf0b:
    if (indices == (System_Int32_array *)0x0) {
label_03b4cf10:
      il2cpp_runtime_helper_022b2c90();
    }
    pSVar6 = System_String__Replace_3af9030
                       ((System_String_o *)indices,"<","\xe2\x80\xb9",(MethodInfo *)0x0);
    pMVar9 = extraout_RDX_02;
    if ((char)unaff_R14 == '\0') break;
label_03b4cef7:
    Gisketch_Aottg2UI_Search_GisketchSearchService__Wrap(pSVar6,matchHex,pMVar9);
    il2cpp_runtime_helper_022b2c90();
  }
label_03b4cf3b:
  Gisketch_Aottg2UI_Search_GisketchSearchService__WrapNormal(pSVar6,normalHex,pMVar9);
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057a9cc5 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    il2cpp_runtime_helper_023445d0(&"<color=#");
    il2cpp_runtime_helper_023445d0(&"</color>");
    il2cpp_runtime_helper_023445d0(&">");
    g_data_057a9cc5 = '\x01';
  }
  b = (System_String_o *)&g_data_00000005;
  __this_01 = TypeInfo_string;
  values = (System_String_array *)il2cpp_runtime_helper_022b2a40();
  pSVar13 = "<color=#";
  if (values != (System_String_array *)0x0) {
    if ((int)values->max_length != 0) {
      __this_01 = (System_String_o *)values->m_Items;
      values->m_Items[0] = "<color=#";
      il2cpp_runtime_helper_022b4080();
      b = pSVar13;
      if (1 < (uint)values->max_length) {
        __this_01 = (System_String_o *)(values->m_Items + 1);
        values->m_Items[1] = normalHex;
        il2cpp_runtime_helper_022b4080();
        pSVar13 = ">";
        b = normalHex;
        if (2 < (uint)values->max_length) {
          __this_01 = (System_String_o *)(values->m_Items + 2);
          values->m_Items[2] = ">";
          il2cpp_runtime_helper_022b4080();
          b = pSVar13;
          if (3 < (uint)values->max_length) {
            __this_01 = (System_String_o *)(values->m_Items + 3);
            values->m_Items[3] = pSVar6;
            il2cpp_runtime_helper_022b4080();
            b = pSVar6;
            if (4 < (uint)values->max_length) {
              values->m_Items[4] = "</color>";
              il2cpp_runtime_helper_022b4080(values->m_Items + 4);
              pSVar6 = System_String__Concat_3af7570(values,(MethodInfo *)0x0);
              return pSVar6;
            }
          }
        }
      }
    }
    il2cpp_runtime_helper_022b2ca0();
  }
  il2cpp_runtime_helper_022b2c90();
  if ((b != (System_String_o *)0x0) && (__this_01 != (System_String_o *)0x0)) {
    iVar11 = (b->fields)._stringLength;
    if (iVar11 + startIndex <= (__this_01->fields)._stringLength) {
      pSVar6 = System_String__Substring_3af8da0(__this_01,startIndex,iVar11,(MethodInfo *)0x0);
      bVar4 = System_String__op_Equality(pSVar6,b,(MethodInfo *)0x0);
      return (System_String_o *)CONCAT44(extraout_var,bVar4);
    }
    return (System_String_o *)0x0;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057a9cc9 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057a9cc9 = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = __this_00;
  pSVar6 = (System_String_o *)il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_c + 0xb8),__this_00);
  return pSVar6;
}


// Gisketch.Aottg2UI.Search.GisketchSearchService$$Wrap
// il2cpp: System_String_o* Gisketch_Aottg2UI_Search_GisketchSearchService__Wrap (System_String_o* text, System_String_o* matchHex, const MethodInfo* method);
// 0x3b4cf50

System_String_o *
Gisketch_Aottg2UI_Search_GisketchSearchService__Wrap
          (System_String_o *text,System_String_o *matchHex,MethodInfo *method)

{
  int length;
  bool_conflict bVar1;
  System_String_array *values;
  System_String_o *pSVar2;
  undefined4 extraout_var;
  Il2CppObject *__this;
  int32_t startIndex;
  MethodInfo *extraout_RDX;
  System_String_o *b;
  System_String_o *pSVar3;
  
  if (g_data_057a9cc5 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    il2cpp_runtime_helper_023445d0(&"<color=#");
    il2cpp_runtime_helper_023445d0(&"</color>");
    il2cpp_runtime_helper_023445d0(&">");
    g_data_057a9cc5 = '\x01';
    method = extraout_RDX;
  }
  b = (System_String_o *)&g_data_00000005;
  pSVar2 = TypeInfo_string;
  values = (System_String_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_string,5,method);
  pSVar3 = "<color=#";
  if (values != (System_String_array *)0x0) {
    if ((int)values->max_length != 0) {
      pSVar2 = (System_String_o *)values->m_Items;
      values->m_Items[0] = "<color=#";
      il2cpp_runtime_helper_022b4080();
      b = pSVar3;
      if (1 < (uint)values->max_length) {
        pSVar2 = (System_String_o *)(values->m_Items + 1);
        values->m_Items[1] = matchHex;
        il2cpp_runtime_helper_022b4080();
        pSVar3 = ">";
        b = matchHex;
        if (2 < (uint)values->max_length) {
          pSVar2 = (System_String_o *)(values->m_Items + 2);
          values->m_Items[2] = ">";
          il2cpp_runtime_helper_022b4080();
          b = pSVar3;
          if (3 < (uint)values->max_length) {
            pSVar2 = (System_String_o *)(values->m_Items + 3);
            values->m_Items[3] = text;
            il2cpp_runtime_helper_022b4080();
            b = text;
            if (4 < (uint)values->max_length) {
              values->m_Items[4] = "</color>";
              il2cpp_runtime_helper_022b4080(values->m_Items + 4);
              pSVar2 = System_String__Concat_3af7570(values,(MethodInfo *)0x0);
              return pSVar2;
            }
          }
        }
      }
    }
    il2cpp_runtime_helper_022b2ca0();
  }
  il2cpp_runtime_helper_022b2c90();
  if ((b != (System_String_o *)0x0) && (pSVar2 != (System_String_o *)0x0)) {
    length = (b->fields)._stringLength;
    if ((pSVar2->fields)._stringLength < length + startIndex) {
      return (System_String_o *)0x0;
    }
    pSVar2 = System_String__Substring_3af8da0(pSVar2,startIndex,length,(MethodInfo *)0x0);
    bVar1 = System_String__op_Equality(pSVar2,b,(MethodInfo *)0x0);
    return (System_String_o *)CONCAT44(extraout_var,bVar1);
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057a9cc9 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057a9cc9 = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = __this;
  pSVar2 = (System_String_o *)il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_c + 0xb8),__this);
  return pSVar2;
}


// Gisketch.Aottg2UI.Search.GisketchSearchService$$WrapNormal
// il2cpp: System_String_o* Gisketch_Aottg2UI_Search_GisketchSearchService__WrapNormal (System_String_o* text, System_String_o* normalHex, const MethodInfo* method);
// 0x3b4c740

System_String_o *
Gisketch_Aottg2UI_Search_GisketchSearchService__WrapNormal
          (System_String_o *text,System_String_o *normalHex,MethodInfo *method)

{
  char cVar1;
  byte bVar2;
  bool_conflict bVar3;
  int32_t iVar4;
  System_String_array *pSVar5;
  System_String_o *pSVar6;
  System_String_o *pSVar7;
  undefined4 extraout_var;
  long lVar8;
  System_Text_StringBuilder_o *__this;
  System_String_o *pSVar9;
  undefined4 extraout_var_00;
  Il2CppObject *__this_00;
  uint uVar10;
  System_String_o *in_RCX;
  int32_t startIndex;
  System_String_o *matchHex;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
  MethodInfo *extraout_RDX_03;
  MethodInfo *extraout_RDX_04;
  MethodInfo *extraout_RDX_05;
  MethodInfo *extraout_RDX_06;
  ulong uVar11;
  MethodInfo *extraout_RDX_07;
  MethodInfo *extraout_RDX_08;
  ulong uVar12;
  MethodInfo *extraout_RDX_09;
  MethodInfo *pMVar13;
  MethodInfo *extraout_RDX_10;
  long lVar14;
  int iVar15;
  System_Text_StringBuilder_o *pSVar16;
  System_String_o *pSVar17;
  uint uVar18;
  long unaff_R14;
  int unaff_R15D;
  System_Text_StringBuilder_o *in_stack_00000008;
  
  if (g_data_057a9cc6 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    il2cpp_runtime_helper_023445d0(&"<color=#");
    il2cpp_runtime_helper_023445d0(&"</color>");
    il2cpp_runtime_helper_023445d0(&">");
    g_data_057a9cc6 = '\x01';
  }
  bVar3 = System_String__IsNullOrEmpty(normalHex,(MethodInfo *)0x0);
  if (((char)bVar3 != '\0') ||
     (bVar3 = System_String__IsNullOrEmpty(text,(MethodInfo *)0x0), (char)bVar3 != '\0')) {
    return text;
  }
  pSVar6 = TypeInfo_string;
  pSVar5 = (System_String_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_string,5);
  if (pSVar5 != (System_String_array *)0x0) {
    if ((int)pSVar5->max_length != 0) {
      pSVar6 = (System_String_o *)pSVar5->m_Items;
      pSVar5->m_Items[0] = "<color=#";
      il2cpp_runtime_helper_022b4080();
      if (1 < (uint)pSVar5->max_length) {
        pSVar6 = (System_String_o *)(pSVar5->m_Items + 1);
        pSVar5->m_Items[1] = normalHex;
        il2cpp_runtime_helper_022b4080(pSVar6,normalHex);
        if (2 < (uint)pSVar5->max_length) {
          pSVar6 = (System_String_o *)(pSVar5->m_Items + 2);
          pSVar5->m_Items[2] = ">";
          il2cpp_runtime_helper_022b4080();
          if (3 < (uint)pSVar5->max_length) {
            pSVar6 = (System_String_o *)(pSVar5->m_Items + 3);
            pSVar5->m_Items[3] = text;
            il2cpp_runtime_helper_022b4080(pSVar6,text);
            if (4 < (uint)pSVar5->max_length) {
              pSVar5->m_Items[4] = "</color>";
              il2cpp_runtime_helper_022b4080(pSVar5->m_Items + 4);
              pSVar6 = System_String__Concat_3af7570(pSVar5,(MethodInfo *)0x0);
              return pSVar6;
            }
          }
        }
      }
    }
    il2cpp_runtime_helper_022b2ca0();
  }
  il2cpp_runtime_helper_022b2c90();
  if ((in_stack_00000008 == (System_Text_StringBuilder_o *)0x0) ||
     ((in_stack_00000008->fields).m_ChunkPrevious == (System_Text_StringBuilder_o *)0x0)) {
    iVar4 = (int32_t)((ulong)unaff_R14 >> 0x20);
    pSVar9 = pSVar6;
    if ((-1 < unaff_R14) && (0 < unaff_R15D)) {
      if (pSVar6 == (System_String_o *)0x0) goto label_03b4cb5a;
      if (unaff_R15D + iVar4 <= (pSVar6->fields)._stringLength) {
        pSVar7 = System_String__Substring_3af8da0(pSVar6,0,iVar4,(MethodInfo *)0x0);
        if (g_data_057a9cc7 == '\0') {
          il2cpp_runtime_helper_023445d0(&"\xe2\x80\xb9");
          il2cpp_runtime_helper_023445d0(&"<");
          g_data_057a9cc7 = '\x01';
        }
        in_stack_00000008 = (System_Text_StringBuilder_o *)0x0;
        pSVar9 = pSVar7;
        bVar3 = System_String__IsNullOrEmpty(pSVar7,(MethodInfo *)0x0);
        if ((char)bVar3 == '\0') {
          if (pSVar7 == (System_String_o *)0x0) goto label_03b4cb5a;
          pSVar9 = System_String__Replace_3af9030(pSVar7,"<","\xe2\x80\xb9",(MethodInfo *)0x0);
          pMVar13 = extraout_RDX_02;
        }
        else {
          pSVar9 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
          pMVar13 = extraout_RDX_01;
        }
        pSVar7 = Gisketch_Aottg2UI_Search_GisketchSearchService__WrapNormal(pSVar9,in_RCX,pMVar13);
        pSVar17 = System_String__Substring_3af8da0(pSVar6,iVar4,unaff_R15D,(MethodInfo *)0x0);
        if (g_data_057a9cc7 == '\0') {
          il2cpp_runtime_helper_023445d0(&"\xe2\x80\xb9");
          il2cpp_runtime_helper_023445d0(&"<");
          g_data_057a9cc7 = '\x01';
        }
        in_stack_00000008 = (System_Text_StringBuilder_o *)0x0;
        pSVar9 = pSVar17;
        bVar3 = System_String__IsNullOrEmpty(pSVar17,(MethodInfo *)0x0);
        if ((char)bVar3 == '\0') {
          if (pSVar17 == (System_String_o *)0x0) goto label_03b4cb5a;
          pSVar9 = System_String__Replace_3af9030(pSVar17,"<","\xe2\x80\xb9",(MethodInfo *)0x0);
          pMVar13 = extraout_RDX_04;
        }
        else {
          pSVar9 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
          pMVar13 = extraout_RDX_03;
        }
        pSVar17 = Gisketch_Aottg2UI_Search_GisketchSearchService__Wrap(pSVar9,matchHex,pMVar13);
        pSVar6 = System_String__Substring(pSVar6,unaff_R15D + iVar4,(MethodInfo *)0x0);
        if (g_data_057a9cc7 == '\0') {
          il2cpp_runtime_helper_023445d0(&"\xe2\x80\xb9");
          il2cpp_runtime_helper_023445d0(&"<");
          g_data_057a9cc7 = '\x01';
        }
        in_stack_00000008 = (System_Text_StringBuilder_o *)0x0;
        pSVar9 = pSVar6;
        bVar3 = System_String__IsNullOrEmpty(pSVar6,(MethodInfo *)0x0);
        if ((char)bVar3 == '\0') {
          if (pSVar6 == (System_String_o *)0x0) goto label_03b4cb5a;
          pSVar6 = System_String__Replace_3af9030(pSVar6,"<","\xe2\x80\xb9",(MethodInfo *)0x0);
          pMVar13 = extraout_RDX_06;
        }
        else {
          pSVar6 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
          pMVar13 = extraout_RDX_05;
        }
        pSVar6 = Gisketch_Aottg2UI_Search_GisketchSearchService__WrapNormal(pSVar6,in_RCX,pMVar13);
        pSVar6 = System_String__Concat_3af7150(pSVar7,pSVar17,pSVar6,(MethodInfo *)0x0);
        return pSVar6;
      }
    }
    if (g_data_057a9cc7 == '\0') {
      il2cpp_runtime_helper_023445d0(&"\xe2\x80\xb9");
      il2cpp_runtime_helper_023445d0(&"<");
      g_data_057a9cc7 = '\x01';
    }
    in_stack_00000008 = (System_Text_StringBuilder_o *)0x0;
    bVar3 = System_String__IsNullOrEmpty(pSVar6,(MethodInfo *)0x0);
    if ((char)bVar3 == '\0') {
      if (pSVar6 == (System_String_o *)0x0) {
label_03b4cb5a:
        iVar4 = (int32_t)in_stack_00000008;
        il2cpp_runtime_helper_022b2c90();
        System_Object___ctor((Il2CppObject *)pSVar9,(MethodInfo *)0x0);
        (pSVar9->fields)._stringLength = iVar4;
        iVar4 = System_Environment__get_CurrentManagedThreadId((MethodInfo *)0x0);
        *(int32_t *)&pSVar9[1].monitor = iVar4;
        return (System_String_o *)CONCAT44(extraout_var,iVar4);
      }
      pSVar6 = System_String__Replace_3af9030(pSVar6,"<","\xe2\x80\xb9",(MethodInfo *)0x0);
      pMVar13 = extraout_RDX_00;
    }
    else {
      pSVar6 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
      pMVar13 = extraout_RDX;
    }
    pSVar6 = Gisketch_Aottg2UI_Search_GisketchSearchService__WrapNormal(pSVar6,in_RCX,pMVar13);
    return pSVar6;
  }
  if (g_data_057a9cc4 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_bool);
    il2cpp_runtime_helper_023445d0(&TypeInfo_StringBuilder);
    g_data_057a9cc4 = '\x01';
  }
  if (pSVar6 == (System_String_o *)0x0) goto label_03b4cf10;
  lVar8 = il2cpp_runtime_helper_022b2a40(TypeInfo_bool);
  if (in_stack_00000008 == (System_Text_StringBuilder_o *)0x0) goto label_03b4cf10;
  pSVar16 = (in_stack_00000008->fields).m_ChunkPrevious;
  iVar15 = (int)pSVar16;
  if (lVar8 == 0) {
    if (0 < iVar15) {
      lVar14 = 0;
      do {
        if (-1 < (&(in_stack_00000008->fields).m_ChunkLength)[lVar14]) goto label_03b4cf10;
        lVar14 = lVar14 + 1;
      } while ((int)lVar14 < iVar15);
    }
label_03b4cc83:
    __this = (System_Text_StringBuilder_o *)il2cpp_runtime_helper_023052d0(TypeInfo_StringBuilder);
    System_Text_StringBuilder___ctor(__this,(MethodInfo *)0x0);
    uVar10 = (pSVar6->fields)._stringLength;
    uVar11 = (ulong)uVar10;
    pSVar16 = (System_Text_StringBuilder_o *)text;
    in_stack_00000008 = __this;
    if ((int)uVar10 < 1) {
label_03b4ce24:
      in_stack_00000008 = __this;
      text = (System_String_o *)pSVar16;
      if (__this == (System_Text_StringBuilder_o *)0x0) goto label_03b4cf10;
      pSVar6 = (System_String_o *)
               (*(__this->klass->vtable)._3_ToString.methodPtr)
                         (__this,(__this->klass->vtable)._3_ToString.method);
      return pSVar6;
    }
    if (lVar8 == 0) goto label_03b4cf10;
    if (__this == (System_Text_StringBuilder_o *)0x0) {
      if ((int)*(ulong *)(lVar8 + 0x18) != 0) {
        bVar2 = *(byte *)(lVar8 + 0x20);
        text = (System_String_o *)(ulong)bVar2;
        uVar12 = 0;
        do {
          if ((*(ulong *)(lVar8 + 0x18) & 0xffffffff) == uVar12) goto label_03b4cf06;
        } while (((*(char *)(lVar8 + 0x20 + uVar12) != '\0') == (bVar2 != 0)) &&
                (uVar12 = uVar12 + 1, uVar11 != uVar12));
        in_stack_00000008 =
             (System_Text_StringBuilder_o *)
             System_String__Substring_3af8da0(pSVar6,0,(int32_t)uVar12,(MethodInfo *)0x0);
        if (g_data_057a9cc7 == '\0') {
          il2cpp_runtime_helper_023445d0(&"\xe2\x80\xb9");
          il2cpp_runtime_helper_023445d0(&"<");
          g_data_057a9cc7 = '\x01';
        }
        bVar3 = System_String__IsNullOrEmpty((System_String_o *)in_stack_00000008,(MethodInfo *)0x0);
        if ((char)bVar3 == '\0') goto label_03b4cf0b;
        pSVar6 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
        pMVar13 = extraout_RDX_09;
        if (bVar2 != 0) goto label_03b4cef7;
        goto label_03b4cf3b;
      }
    }
    else {
      pSVar16 = (System_Text_StringBuilder_o *)0x0;
      uVar10 = *(uint *)(lVar8 + 0x18);
      if (uVar10 != 0) {
        do {
          iVar15 = (int)pSVar16;
          lVar14 = (long)iVar15;
          cVar1 = *(char *)(lVar8 + 0x20 + lVar14);
          if (iVar15 < (int)uVar11) {
            text = (System_String_o *)0x0;
            do {
              in_stack_00000008 = pSVar16;
              if (uVar10 <= (uint)((int)text + iVar15)) goto label_03b4cf06;
            } while (((cVar1 != '\0') ==
                      (*(char *)((long)&(((System_Text_StringBuilder_o *)text)->fields).m_ChunkLength +
                                lVar8 + lVar14) != '\0')) &&
                    (text = (System_String_o *)((long)&((System_Text_StringBuilder_o *)text)->klass + 1),
                    (System_Text_StringBuilder_o *)((int)uVar11 - lVar14) !=
                    (System_Text_StringBuilder_o *)text));
            pSVar16 = (System_Text_StringBuilder_o *)(ulong)(uint)((int)text + iVar15);
          }
          uVar18 = (uint)pSVar16;
          pSVar9 = System_String__Substring_3af8da0(pSVar6,iVar15,uVar18 - iVar15,(MethodInfo *)0x0);
          if (g_data_057a9cc7 == '\0') {
            il2cpp_runtime_helper_023445d0(&"\xe2\x80\xb9");
            il2cpp_runtime_helper_023445d0(&"<");
            g_data_057a9cc7 = '\x01';
          }
          bVar3 = System_String__IsNullOrEmpty(pSVar9,(MethodInfo *)0x0);
          text = (System_String_o *)pSVar16;
          if ((char)bVar3 == '\0') {
            in_stack_00000008 = __this;
            if (pSVar9 == (System_String_o *)0x0) goto label_03b4cf10;
            pSVar9 = System_String__Replace_3af9030(pSVar9,"<","\xe2\x80\xb9",(MethodInfo *)0x0);
            pMVar13 = extraout_RDX_08;
            if (cVar1 == '\0') goto label_03b4ce16;
label_03b4cce0:
            pSVar9 = Gisketch_Aottg2UI_Search_GisketchSearchService__Wrap(pSVar9,matchHex,pMVar13);
          }
          else {
            pSVar9 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
            pMVar13 = extraout_RDX_07;
            if (cVar1 != '\0') goto label_03b4cce0;
label_03b4ce16:
            pSVar9 = Gisketch_Aottg2UI_Search_GisketchSearchService__WrapNormal(pSVar9,in_RCX,pMVar13);
          }
          System_Text_StringBuilder__Append_3b03f90(__this,pSVar9,(MethodInfo *)0x0);
          uVar10 = (pSVar6->fields)._stringLength;
          uVar11 = (ulong)uVar10;
          if ((int)uVar10 <= (int)uVar18) goto label_03b4ce24;
          uVar10 = *(uint *)(lVar8 + 0x18);
          in_stack_00000008 = __this;
        } while (uVar18 < uVar10);
      }
    }
  }
  else {
    if ((long)pSVar16 << 0x20 < 1) goto label_03b4cc83;
    uVar11 = 0;
    if (((ulong)pSVar16 & 0xffffffff) != 0) {
      do {
        uVar10 = (&(in_stack_00000008->fields).m_ChunkLength)[uVar11];
        if ((-1 < (long)(int)uVar10) && ((int)uVar10 < (int)*(uint *)(lVar8 + 0x18))) {
          if (*(uint *)(lVar8 + 0x18) <= uVar10) break;
          *(undefined1 *)(lVar8 + 0x20 + (long)(int)uVar10) = 1;
        }
        uVar11 = uVar11 + 1;
        if ((long)iVar15 <= (long)uVar11) goto label_03b4cc83;
      } while (((ulong)pSVar16 & 0xffffffff) != uVar11);
    }
  }
label_03b4cf06:
  while( true ) {
    il2cpp_runtime_helper_022b2ca0();
label_03b4cf0b:
    if (in_stack_00000008 == (System_Text_StringBuilder_o *)0x0) {
label_03b4cf10:
      il2cpp_runtime_helper_022b2c90();
    }
    pSVar6 = System_String__Replace_3af9030
                       ((System_String_o *)in_stack_00000008,"<","\xe2\x80\xb9",(MethodInfo *)0x0);
    pMVar13 = extraout_RDX_10;
    if ((char)text == '\0') break;
label_03b4cef7:
    Gisketch_Aottg2UI_Search_GisketchSearchService__Wrap(pSVar6,matchHex,pMVar13);
    il2cpp_runtime_helper_022b2c90();
  }
label_03b4cf3b:
  Gisketch_Aottg2UI_Search_GisketchSearchService__WrapNormal(pSVar6,in_RCX,pMVar13);
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057a9cc5 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    il2cpp_runtime_helper_023445d0(&"<color=#");
    il2cpp_runtime_helper_023445d0(&"</color>");
    il2cpp_runtime_helper_023445d0(&">");
    g_data_057a9cc5 = '\x01';
  }
  pSVar17 = (System_String_o *)&g_data_00000005;
  pSVar9 = TypeInfo_string;
  pSVar5 = (System_String_array *)il2cpp_runtime_helper_022b2a40();
  pSVar7 = "<color=#";
  if (pSVar5 != (System_String_array *)0x0) {
    if ((int)pSVar5->max_length != 0) {
      pSVar9 = (System_String_o *)pSVar5->m_Items;
      pSVar5->m_Items[0] = "<color=#";
      il2cpp_runtime_helper_022b4080();
      pSVar17 = pSVar7;
      if (1 < (uint)pSVar5->max_length) {
        pSVar9 = (System_String_o *)(pSVar5->m_Items + 1);
        pSVar5->m_Items[1] = in_RCX;
        il2cpp_runtime_helper_022b4080();
        pSVar7 = ">";
        pSVar17 = in_RCX;
        if (2 < (uint)pSVar5->max_length) {
          pSVar9 = (System_String_o *)(pSVar5->m_Items + 2);
          pSVar5->m_Items[2] = ">";
          il2cpp_runtime_helper_022b4080();
          pSVar17 = pSVar7;
          if (3 < (uint)pSVar5->max_length) {
            pSVar9 = (System_String_o *)(pSVar5->m_Items + 3);
            pSVar5->m_Items[3] = pSVar6;
            il2cpp_runtime_helper_022b4080();
            pSVar17 = pSVar6;
            if (4 < (uint)pSVar5->max_length) {
              pSVar5->m_Items[4] = "</color>";
              il2cpp_runtime_helper_022b4080(pSVar5->m_Items + 4);
              pSVar6 = System_String__Concat_3af7570(pSVar5,(MethodInfo *)0x0);
              return pSVar6;
            }
          }
        }
      }
    }
    il2cpp_runtime_helper_022b2ca0();
  }
  il2cpp_runtime_helper_022b2c90();
  if ((pSVar17 != (System_String_o *)0x0) && (pSVar9 != (System_String_o *)0x0)) {
    iVar15 = (pSVar17->fields)._stringLength;
    if (iVar15 + startIndex <= (pSVar9->fields)._stringLength) {
      pSVar6 = System_String__Substring_3af8da0(pSVar9,startIndex,iVar15,(MethodInfo *)0x0);
      bVar3 = System_String__op_Equality(pSVar6,pSVar17,(MethodInfo *)0x0);
      return (System_String_o *)CONCAT44(extraout_var_00,bVar3);
    }
    return (System_String_o *)0x0;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057a9cc9 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057a9cc9 = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = __this_00;
  pSVar6 = (System_String_o *)il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_c + 0xb8),__this_00);
  return pSVar6;
}


// Gisketch.Aottg2UI.Search.GisketchSearchService$$Escape
// il2cpp: System_String_o* Gisketch_Aottg2UI_Search_GisketchSearchService__Escape (System_String_o* text, const MethodInfo* method);
// 0x3b4c6c0

System_String_o *
Gisketch_Aottg2UI_Search_GisketchSearchService__Escape(System_String_o *text,MethodInfo *method)

{
  char cVar1;
  byte bVar2;
  bool_conflict bVar3;
  int32_t iVar4;
  System_String_o *pSVar5;
  System_String_array *pSVar6;
  System_String_o *pSVar7;
  System_String_o *pSVar8;
  undefined4 extraout_var;
  long lVar9;
  System_Text_StringBuilder_o *__this;
  undefined4 extraout_var_00;
  Il2CppObject *__this_00;
  uint uVar10;
  System_String_o *in_RCX;
  int32_t startIndex;
  System_String_o *matchHex;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
  MethodInfo *extraout_RDX_03;
  MethodInfo *extraout_RDX_04;
  MethodInfo *extraout_RDX_05;
  MethodInfo *extraout_RDX_06;
  ulong uVar11;
  MethodInfo *extraout_RDX_07;
  MethodInfo *extraout_RDX_08;
  ulong uVar12;
  MethodInfo *extraout_RDX_09;
  MethodInfo *pMVar13;
  MethodInfo *extraout_RDX_10;
  long lVar14;
  int iVar15;
  System_Text_StringBuilder_o *pSVar16;
  System_String_o *pSVar17;
  System_Text_StringBuilder_o *pSVar18;
  uint uVar19;
  long unaff_R14;
  int unaff_R15D;
  System_Text_StringBuilder_o *unaff_retaddr;
  
  if (g_data_057a9cc7 == '\0') {
    il2cpp_runtime_helper_023445d0(&"\xe2\x80\xb9");
    il2cpp_runtime_helper_023445d0(&"<");
    g_data_057a9cc7 = '\x01';
  }
  pSVar5 = (System_String_o *)0x0;
  pSVar18 = (System_Text_StringBuilder_o *)text;
  bVar3 = System_String__IsNullOrEmpty(text,(MethodInfo *)0x0);
  if ((char)bVar3 != '\0') {
    return (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  }
  if (text != (System_String_o *)0x0) {
    pSVar5 = System_String__Replace_3af9030(text,"<","\xe2\x80\xb9",(MethodInfo *)0x0);
    return pSVar5;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057a9cc6 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    il2cpp_runtime_helper_023445d0(&"<color=#");
    il2cpp_runtime_helper_023445d0(&"</color>");
    il2cpp_runtime_helper_023445d0(&">");
    g_data_057a9cc6 = '\x01';
  }
  bVar3 = System_String__IsNullOrEmpty(pSVar5,(MethodInfo *)0x0);
  if (((char)bVar3 != '\0') ||
     (bVar3 = System_String__IsNullOrEmpty((System_String_o *)pSVar18,(MethodInfo *)0x0), (char)bVar3 != '\0')
     ) {
    return (System_String_o *)pSVar18;
  }
  pSVar8 = TypeInfo_string;
  pSVar6 = (System_String_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_string,5);
  if (pSVar6 != (System_String_array *)0x0) {
    if ((int)pSVar6->max_length != 0) {
      pSVar8 = (System_String_o *)pSVar6->m_Items;
      pSVar6->m_Items[0] = "<color=#";
      il2cpp_runtime_helper_022b4080();
      if (1 < (uint)pSVar6->max_length) {
        pSVar8 = (System_String_o *)(pSVar6->m_Items + 1);
        pSVar6->m_Items[1] = pSVar5;
        il2cpp_runtime_helper_022b4080(pSVar8,pSVar5);
        if (2 < (uint)pSVar6->max_length) {
          pSVar8 = (System_String_o *)(pSVar6->m_Items + 2);
          pSVar6->m_Items[2] = ">";
          il2cpp_runtime_helper_022b4080();
          if (3 < (uint)pSVar6->max_length) {
            pSVar8 = (System_String_o *)(pSVar6->m_Items + 3);
            pSVar6->m_Items[3] = (System_String_o *)pSVar18;
            il2cpp_runtime_helper_022b4080(pSVar8,pSVar18);
            if (4 < (uint)pSVar6->max_length) {
              pSVar6->m_Items[4] = "</color>";
              il2cpp_runtime_helper_022b4080(pSVar6->m_Items + 4);
              pSVar5 = System_String__Concat_3af7570(pSVar6,(MethodInfo *)0x0);
              return pSVar5;
            }
          }
        }
      }
    }
    il2cpp_runtime_helper_022b2ca0();
  }
  il2cpp_runtime_helper_022b2c90();
  if ((unaff_retaddr == (System_Text_StringBuilder_o *)0x0) ||
     ((unaff_retaddr->fields).m_ChunkPrevious == (System_Text_StringBuilder_o *)0x0)) {
    iVar4 = (int32_t)((ulong)unaff_R14 >> 0x20);
    pSVar5 = pSVar8;
    if ((-1 < unaff_R14) && (0 < unaff_R15D)) {
      if (pSVar8 == (System_String_o *)0x0) goto label_03b4cb5a;
      if (unaff_R15D + iVar4 <= (pSVar8->fields)._stringLength) {
        pSVar7 = System_String__Substring_3af8da0(pSVar8,0,iVar4,(MethodInfo *)0x0);
        if (g_data_057a9cc7 == '\0') {
          il2cpp_runtime_helper_023445d0(&"\xe2\x80\xb9");
          il2cpp_runtime_helper_023445d0(&"<");
          g_data_057a9cc7 = '\x01';
        }
        unaff_retaddr = (System_Text_StringBuilder_o *)0x0;
        pSVar5 = pSVar7;
        bVar3 = System_String__IsNullOrEmpty(pSVar7,(MethodInfo *)0x0);
        if ((char)bVar3 == '\0') {
          if (pSVar7 == (System_String_o *)0x0) goto label_03b4cb5a;
          pSVar5 = System_String__Replace_3af9030(pSVar7,"<","\xe2\x80\xb9",(MethodInfo *)0x0);
          pMVar13 = extraout_RDX_02;
        }
        else {
          pSVar5 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
          pMVar13 = extraout_RDX_01;
        }
        pSVar7 = Gisketch_Aottg2UI_Search_GisketchSearchService__WrapNormal(pSVar5,in_RCX,pMVar13);
        pSVar17 = System_String__Substring_3af8da0(pSVar8,iVar4,unaff_R15D,(MethodInfo *)0x0);
        if (g_data_057a9cc7 == '\0') {
          il2cpp_runtime_helper_023445d0(&"\xe2\x80\xb9");
          il2cpp_runtime_helper_023445d0(&"<");
          g_data_057a9cc7 = '\x01';
        }
        unaff_retaddr = (System_Text_StringBuilder_o *)0x0;
        pSVar5 = pSVar17;
        bVar3 = System_String__IsNullOrEmpty(pSVar17,(MethodInfo *)0x0);
        if ((char)bVar3 == '\0') {
          if (pSVar17 == (System_String_o *)0x0) goto label_03b4cb5a;
          pSVar5 = System_String__Replace_3af9030(pSVar17,"<","\xe2\x80\xb9",(MethodInfo *)0x0);
          pMVar13 = extraout_RDX_04;
        }
        else {
          pSVar5 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
          pMVar13 = extraout_RDX_03;
        }
        pSVar17 = Gisketch_Aottg2UI_Search_GisketchSearchService__Wrap(pSVar5,matchHex,pMVar13);
        pSVar8 = System_String__Substring(pSVar8,unaff_R15D + iVar4,(MethodInfo *)0x0);
        if (g_data_057a9cc7 == '\0') {
          il2cpp_runtime_helper_023445d0(&"\xe2\x80\xb9");
          il2cpp_runtime_helper_023445d0(&"<");
          g_data_057a9cc7 = '\x01';
        }
        unaff_retaddr = (System_Text_StringBuilder_o *)0x0;
        pSVar5 = pSVar8;
        bVar3 = System_String__IsNullOrEmpty(pSVar8,(MethodInfo *)0x0);
        if ((char)bVar3 == '\0') {
          if (pSVar8 == (System_String_o *)0x0) goto label_03b4cb5a;
          pSVar5 = System_String__Replace_3af9030(pSVar8,"<","\xe2\x80\xb9",(MethodInfo *)0x0);
          pMVar13 = extraout_RDX_06;
        }
        else {
          pSVar5 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
          pMVar13 = extraout_RDX_05;
        }
        pSVar5 = Gisketch_Aottg2UI_Search_GisketchSearchService__WrapNormal(pSVar5,in_RCX,pMVar13);
        pSVar5 = System_String__Concat_3af7150(pSVar7,pSVar17,pSVar5,(MethodInfo *)0x0);
        return pSVar5;
      }
    }
    if (g_data_057a9cc7 == '\0') {
      il2cpp_runtime_helper_023445d0(&"\xe2\x80\xb9");
      il2cpp_runtime_helper_023445d0(&"<");
      g_data_057a9cc7 = '\x01';
    }
    unaff_retaddr = (System_Text_StringBuilder_o *)0x0;
    bVar3 = System_String__IsNullOrEmpty(pSVar8,(MethodInfo *)0x0);
    if ((char)bVar3 == '\0') {
      if (pSVar8 == (System_String_o *)0x0) {
label_03b4cb5a:
        iVar4 = (int32_t)unaff_retaddr;
        il2cpp_runtime_helper_022b2c90();
        System_Object___ctor((Il2CppObject *)pSVar5,(MethodInfo *)0x0);
        (pSVar5->fields)._stringLength = iVar4;
        iVar4 = System_Environment__get_CurrentManagedThreadId((MethodInfo *)0x0);
        *(int32_t *)&pSVar5[1].monitor = iVar4;
        return (System_String_o *)CONCAT44(extraout_var,iVar4);
      }
      pSVar5 = System_String__Replace_3af9030(pSVar8,"<","\xe2\x80\xb9",(MethodInfo *)0x0);
      pMVar13 = extraout_RDX_00;
    }
    else {
      pSVar5 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
      pMVar13 = extraout_RDX;
    }
    pSVar5 = Gisketch_Aottg2UI_Search_GisketchSearchService__WrapNormal(pSVar5,in_RCX,pMVar13);
    return pSVar5;
  }
  if (g_data_057a9cc4 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_bool);
    il2cpp_runtime_helper_023445d0(&TypeInfo_StringBuilder);
    g_data_057a9cc4 = '\x01';
  }
  if (pSVar8 == (System_String_o *)0x0) goto label_03b4cf10;
  lVar9 = il2cpp_runtime_helper_022b2a40(TypeInfo_bool);
  if (unaff_retaddr == (System_Text_StringBuilder_o *)0x0) goto label_03b4cf10;
  pSVar16 = (unaff_retaddr->fields).m_ChunkPrevious;
  iVar15 = (int)pSVar16;
  if (lVar9 == 0) {
    if (0 < iVar15) {
      lVar14 = 0;
      do {
        if (-1 < (&(unaff_retaddr->fields).m_ChunkLength)[lVar14]) goto label_03b4cf10;
        lVar14 = lVar14 + 1;
      } while ((int)lVar14 < iVar15);
    }
label_03b4cc83:
    __this = (System_Text_StringBuilder_o *)il2cpp_runtime_helper_023052d0(TypeInfo_StringBuilder);
    System_Text_StringBuilder___ctor(__this,(MethodInfo *)0x0);
    uVar10 = (pSVar8->fields)._stringLength;
    uVar11 = (ulong)uVar10;
    pSVar16 = pSVar18;
    unaff_retaddr = __this;
    if ((int)uVar10 < 1) {
label_03b4ce24:
      unaff_retaddr = __this;
      pSVar18 = pSVar16;
      if (__this == (System_Text_StringBuilder_o *)0x0) goto label_03b4cf10;
      pSVar5 = (System_String_o *)
               (*(__this->klass->vtable)._3_ToString.methodPtr)
                         (__this,(__this->klass->vtable)._3_ToString.method);
      return pSVar5;
    }
    if (lVar9 == 0) goto label_03b4cf10;
    if (__this == (System_Text_StringBuilder_o *)0x0) {
      if ((int)*(ulong *)(lVar9 + 0x18) != 0) {
        bVar2 = *(byte *)(lVar9 + 0x20);
        pSVar18 = (System_Text_StringBuilder_o *)(ulong)bVar2;
        uVar12 = 0;
        do {
          if ((*(ulong *)(lVar9 + 0x18) & 0xffffffff) == uVar12) goto label_03b4cf06;
        } while (((*(char *)(lVar9 + 0x20 + uVar12) != '\0') == (bVar2 != 0)) &&
                (uVar12 = uVar12 + 1, uVar11 != uVar12));
        unaff_retaddr =
             (System_Text_StringBuilder_o *)
             System_String__Substring_3af8da0(pSVar8,0,(int32_t)uVar12,(MethodInfo *)0x0);
        if (g_data_057a9cc7 == '\0') {
          il2cpp_runtime_helper_023445d0(&"\xe2\x80\xb9");
          il2cpp_runtime_helper_023445d0(&"<");
          g_data_057a9cc7 = '\x01';
        }
        bVar3 = System_String__IsNullOrEmpty((System_String_o *)unaff_retaddr,(MethodInfo *)0x0);
        if ((char)bVar3 == '\0') goto label_03b4cf0b;
        pSVar5 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
        pMVar13 = extraout_RDX_09;
        if (bVar2 != 0) goto label_03b4cef7;
        goto label_03b4cf3b;
      }
    }
    else {
      pSVar16 = (System_Text_StringBuilder_o *)0x0;
      uVar10 = *(uint *)(lVar9 + 0x18);
      if (uVar10 != 0) {
        do {
          iVar15 = (int)pSVar16;
          lVar14 = (long)iVar15;
          cVar1 = *(char *)(lVar9 + 0x20 + lVar14);
          if (iVar15 < (int)uVar11) {
            pSVar18 = (System_Text_StringBuilder_o *)0x0;
            do {
              unaff_retaddr = pSVar16;
              if (uVar10 <= (uint)((int)pSVar18 + iVar15)) goto label_03b4cf06;
            } while (((cVar1 != '\0') ==
                      (*(char *)((long)&(pSVar18->fields).m_ChunkLength + lVar9 + lVar14) != '\0')) &&
                    (pSVar18 = (System_Text_StringBuilder_o *)((long)&pSVar18->klass + 1),
                    (System_Text_StringBuilder_o *)((int)uVar11 - lVar14) != pSVar18));
            pSVar16 = (System_Text_StringBuilder_o *)(ulong)(uint)((int)pSVar18 + iVar15);
          }
          uVar19 = (uint)pSVar16;
          pSVar5 = System_String__Substring_3af8da0(pSVar8,iVar15,uVar19 - iVar15,(MethodInfo *)0x0);
          if (g_data_057a9cc7 == '\0') {
            il2cpp_runtime_helper_023445d0(&"\xe2\x80\xb9");
            il2cpp_runtime_helper_023445d0(&"<");
            g_data_057a9cc7 = '\x01';
          }
          bVar3 = System_String__IsNullOrEmpty(pSVar5,(MethodInfo *)0x0);
          pSVar18 = pSVar16;
          if ((char)bVar3 == '\0') {
            unaff_retaddr = __this;
            if (pSVar5 == (System_String_o *)0x0) goto label_03b4cf10;
            pSVar5 = System_String__Replace_3af9030(pSVar5,"<","\xe2\x80\xb9",(MethodInfo *)0x0);
            pMVar13 = extraout_RDX_08;
            if (cVar1 == '\0') goto label_03b4ce16;
label_03b4cce0:
            pSVar5 = Gisketch_Aottg2UI_Search_GisketchSearchService__Wrap(pSVar5,matchHex,pMVar13);
          }
          else {
            pSVar5 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
            pMVar13 = extraout_RDX_07;
            if (cVar1 != '\0') goto label_03b4cce0;
label_03b4ce16:
            pSVar5 = Gisketch_Aottg2UI_Search_GisketchSearchService__WrapNormal(pSVar5,in_RCX,pMVar13);
          }
          System_Text_StringBuilder__Append_3b03f90(__this,pSVar5,(MethodInfo *)0x0);
          uVar10 = (pSVar8->fields)._stringLength;
          uVar11 = (ulong)uVar10;
          if ((int)uVar10 <= (int)uVar19) goto label_03b4ce24;
          uVar10 = *(uint *)(lVar9 + 0x18);
          unaff_retaddr = __this;
        } while (uVar19 < uVar10);
      }
    }
  }
  else {
    if ((long)pSVar16 << 0x20 < 1) goto label_03b4cc83;
    uVar11 = 0;
    if (((ulong)pSVar16 & 0xffffffff) != 0) {
      do {
        uVar10 = (&(unaff_retaddr->fields).m_ChunkLength)[uVar11];
        if ((-1 < (long)(int)uVar10) && ((int)uVar10 < (int)*(uint *)(lVar9 + 0x18))) {
          if (*(uint *)(lVar9 + 0x18) <= uVar10) break;
          *(undefined1 *)(lVar9 + 0x20 + (long)(int)uVar10) = 1;
        }
        uVar11 = uVar11 + 1;
        if ((long)iVar15 <= (long)uVar11) goto label_03b4cc83;
      } while (((ulong)pSVar16 & 0xffffffff) != uVar11);
    }
  }
label_03b4cf06:
  while( true ) {
    il2cpp_runtime_helper_022b2ca0();
label_03b4cf0b:
    if (unaff_retaddr == (System_Text_StringBuilder_o *)0x0) {
label_03b4cf10:
      il2cpp_runtime_helper_022b2c90();
    }
    pSVar5 = System_String__Replace_3af9030
                       ((System_String_o *)unaff_retaddr,"<","\xe2\x80\xb9",(MethodInfo *)0x0);
    pMVar13 = extraout_RDX_10;
    if ((char)pSVar18 == '\0') break;
label_03b4cef7:
    Gisketch_Aottg2UI_Search_GisketchSearchService__Wrap(pSVar5,matchHex,pMVar13);
    il2cpp_runtime_helper_022b2c90();
  }
label_03b4cf3b:
  Gisketch_Aottg2UI_Search_GisketchSearchService__WrapNormal(pSVar5,in_RCX,pMVar13);
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057a9cc5 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    il2cpp_runtime_helper_023445d0(&"<color=#");
    il2cpp_runtime_helper_023445d0(&"</color>");
    il2cpp_runtime_helper_023445d0(&">");
    g_data_057a9cc5 = '\x01';
  }
  pSVar17 = (System_String_o *)&g_data_00000005;
  pSVar8 = TypeInfo_string;
  pSVar6 = (System_String_array *)il2cpp_runtime_helper_022b2a40();
  pSVar7 = "<color=#";
  if (pSVar6 != (System_String_array *)0x0) {
    if ((int)pSVar6->max_length != 0) {
      pSVar8 = (System_String_o *)pSVar6->m_Items;
      pSVar6->m_Items[0] = "<color=#";
      il2cpp_runtime_helper_022b4080();
      pSVar17 = pSVar7;
      if (1 < (uint)pSVar6->max_length) {
        pSVar8 = (System_String_o *)(pSVar6->m_Items + 1);
        pSVar6->m_Items[1] = in_RCX;
        il2cpp_runtime_helper_022b4080();
        pSVar7 = ">";
        pSVar17 = in_RCX;
        if (2 < (uint)pSVar6->max_length) {
          pSVar8 = (System_String_o *)(pSVar6->m_Items + 2);
          pSVar6->m_Items[2] = ">";
          il2cpp_runtime_helper_022b4080();
          pSVar17 = pSVar7;
          if (3 < (uint)pSVar6->max_length) {
            pSVar8 = (System_String_o *)(pSVar6->m_Items + 3);
            pSVar6->m_Items[3] = pSVar5;
            il2cpp_runtime_helper_022b4080();
            pSVar17 = pSVar5;
            if (4 < (uint)pSVar6->max_length) {
              pSVar6->m_Items[4] = "</color>";
              il2cpp_runtime_helper_022b4080(pSVar6->m_Items + 4);
              pSVar5 = System_String__Concat_3af7570(pSVar6,(MethodInfo *)0x0);
              return pSVar5;
            }
          }
        }
      }
    }
    il2cpp_runtime_helper_022b2ca0();
  }
  il2cpp_runtime_helper_022b2c90();
  if ((pSVar17 != (System_String_o *)0x0) && (pSVar8 != (System_String_o *)0x0)) {
    iVar15 = (pSVar17->fields)._stringLength;
    if (iVar15 + startIndex <= (pSVar8->fields)._stringLength) {
      pSVar5 = System_String__Substring_3af8da0(pSVar8,startIndex,iVar15,(MethodInfo *)0x0);
      bVar3 = System_String__op_Equality(pSVar5,pSVar17,(MethodInfo *)0x0);
      return (System_String_o *)CONCAT44(extraout_var_00,bVar3);
    }
    return (System_String_o *)0x0;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057a9cc9 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057a9cc9 = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = __this_00;
  pSVar5 = (System_String_o *)il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_c + 0xb8),__this_00);
  return pSVar5;
}


// Gisketch.Aottg2UI.Search.GisketchSearchService$$Lower
// il2cpp: System_String_o* Gisketch_Aottg2UI_Search_GisketchSearchService__Lower (System_String_o* value, const MethodInfo* method);
// 0x3b4bdc0

System_String_o *
Gisketch_Aottg2UI_Search_GisketchSearchService__Lower(System_String_o *value,MethodInfo *method)

{
  bool_conflict bVar1;
  System_String_o *pSVar2;
  undefined4 in_ECX;
  undefined4 extraout_EDX;
  undefined4 uVar3;
  System_String_Fields in_R8;
  System_String_c *in_R9;
  
  uVar3 = 0;
  pSVar2 = value;
  bVar1 = System_String__IsNullOrEmpty(value,(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    return (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  }
  if (value != (System_String_o *)0x0) {
    pSVar2 = System_String__ToLowerInvariant(value,(MethodInfo *)0x0);
    return pSVar2;
  }
  il2cpp_runtime_helper_022b2c90();
  *(undefined4 *)&pSVar2->klass = uVar3;
  *(undefined4 *)((long)&pSVar2->klass + 4) = extraout_EDX;
  *(undefined4 *)&pSVar2->monitor = in_ECX;
  if (in_R8 == (System_String_Fields)0x0) {
    in_R8 = **(System_String_Fields **)(g_data_057b9c00 + 0xb8);
  }
  pSVar2->fields = in_R8;
  il2cpp_runtime_helper_022b4080(&pSVar2->fields,in_R8);
  pSVar2[1].klass = in_R9;
  pSVar2 = (System_String_o *)il2cpp_runtime_helper_022b4080(pSVar2 + 1,in_R9);
  return pSVar2;
}


// Gisketch.Aottg2UI.Search.GisketchSearchService$$FindToken
// il2cpp: bool Gisketch_Aottg2UI_Search_GisketchSearchService__FindToken (System_String_o* haystack, System_String_o* needle, int32_t* start, int32_t* length, const MethodInfo* method);
// 0x3b4bf10

bool_conflict
Gisketch_Aottg2UI_Search_GisketchSearchService__FindToken
          (System_String_o *haystack,System_String_o *needle,int32_t *start,int32_t *length,MethodInfo *method
          )

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
  if ((char)bVar3 != '\0') {
    return 0;
  }
  if (haystack == (System_String_o *)0x0) {
label_03b4c075:
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    iVar4 = (haystack->fields)._stringLength;
    uVar6 = 0;
    if (needle == (System_String_o *)0x0) {
      if (iVar4 < 1) {
        return 0;
      }
      bVar1 = 1;
      do {
        uVar2 = System_String__get_Chars(haystack,(int)uVar6,(MethodInfo *)0x0);
        if (*(int *)(g_data_057b9bf8 + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        bVar3 = System_Char__IsLetterOrDigit(uVar2,(MethodInfo *)0x0);
        bVar7 = (byte)bVar3 ^ 1;
        if (((bVar1 & 1) != 0) && (bVar7 == 0)) goto label_03b4c075;
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
        if (*(int *)(g_data_057b9bf8 + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
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
            a = System_String__Substring_3af8da0(haystack,iVar4,length_00,(MethodInfo *)0x0);
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
// 0x3b4c100

bool_conflict
Gisketch_Aottg2UI_Search_GisketchSearchService__FindInitials
          (System_String_o *haystack,System_String_o *needle,int32_t *start,int32_t *length,MethodInfo *method
          )

{
  uint16_t uVar1;
  uint16_t uVar2;
  bool_conflict bVar3;
  int iVar4;
  Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *__this;
  System_String_o *pSVar5;
  uint uVar6;
  System_String_o *pSVar7;
  System_String_o *matchHex;
  int *extraout_RDX;
  int iVar8;
  int iVar9;
  ulong uVar10;
  int iVar11;
  int32_t index;
  Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *value;
  System_String_o *query;
  System_String_o *value_00;
  Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *pGVar12;
  byte bVar13;
  byte bVar14;
  uint index_00;
  System_String_o *pSVar15;
  undefined1 auVar16 [16];
  MethodInfo *method_00;
  uint uStack_b4;
  int local_4c;
  
  *start = -1;
  *length = 0;
  pSVar5 = (System_String_o *)length;
  bVar3 = System_String__IsNullOrEmpty(haystack,(MethodInfo *)0x0);
  if ((char)bVar3 != '\0') {
    return 0;
  }
  uVar10 = 0;
  value = (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *)0x0;
  value_00 = needle;
  bVar3 = System_String__IsNullOrEmpty(needle,(MethodInfo *)0x0);
  if ((char)bVar3 != '\0') {
    return 0;
  }
  if (needle != (System_String_o *)0x0) {
    if ((needle->fields)._stringLength < 2) {
      return 0;
    }
    if (haystack != (System_String_o *)0x0) {
      iVar4 = (haystack->fields)._stringLength;
      if (iVar4 < 1) {
        local_4c = 0;
      }
      else {
        uVar10 = 0;
        local_4c = 0;
        bVar13 = 1;
        do {
          iVar8 = (int)uVar10;
          uVar1 = System_String__get_Chars(haystack,iVar8,(MethodInfo *)0x0);
          if (*(int *)(g_data_057b9bf8 + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          bVar3 = System_Char__IsLetterOrDigit(uVar1,(MethodInfo *)0x0);
          bVar14 = (byte)bVar3 ^ 1;
          if (((bVar13 & 1) != 0) && (bVar14 == 0)) {
            if ((local_4c < (needle->fields)._stringLength) &&
               (uVar2 = System_String__get_Chars(needle,local_4c,(MethodInfo *)0x0), uVar1 == uVar2)) {
              iVar4 = *start;
              if (*start < 0) {
                *start = iVar8;
                iVar4 = iVar8;
              }
              local_4c = local_4c + 1;
              *length = (iVar8 - iVar4) + 1;
            }
            bVar14 = 0;
          }
          uVar10 = (ulong)(iVar8 + 1U);
          iVar4 = (haystack->fields)._stringLength;
          bVar13 = bVar14;
        } while ((int)(iVar8 + 1U) < iVar4);
      }
      if (local_4c != (needle->fields)._stringLength) {
        return 0;
      }
      *length = iVar4 - *start;
      return (bool_conflict)CONCAT71((int7)(uVar10 >> 8),1);
    }
  }
  il2cpp_runtime_helper_022b2c90();
  matchHex = pSVar5;
  if (g_data_057a9cc8 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_int);
    g_data_057a9cc8 = '\x01';
  }
  *extraout_RDX = -1;
  *(int32_t *)&pSVar5->klass = 0;
  method->methodPointer = (Il2CppMethodPointer)0x0;
  il2cpp_runtime_helper_022b4080(method);
  bVar3 = System_String__IsNullOrEmpty(value_00,(MethodInfo *)0x0);
  if ((char)bVar3 == '\0') {
    query = (System_String_o *)0x0;
    pGVar12 = value;
    bVar3 = System_String__IsNullOrEmpty((System_String_o *)value,(MethodInfo *)0x0);
    if ((char)bVar3 == '\0') {
      if (value == (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *)0x0) {
label_03b4c4ed:
        __this = pGVar12;
        il2cpp_runtime_helper_022b2c90();
label_03b4c4f2:
        auVar16 = il2cpp_runtime_helper_022b2ca0();
        method_00 = auVar16._0_8_;
        if (__this == (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *)0x0) {
          pSVar5 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
        }
        else {
          pSVar5 = Gisketch_Aottg2UI_Search_GisketchSearchEntry__PathTitle_3a47560(__this,1,auVar16._8_8_);
        }
        pSVar5 = Gisketch_Aottg2UI_Search_GisketchSearchService__Markup_3a4c570
                           (__this,query,auVar16._8_4_ & 0xff,matchHex,pSVar5,(System_String_o *)0x0,method_00
                           );
        return (bool_conflict)pSVar5;
      }
      uVar6 = *(uint *)&(value->fields)._Node_k__BackingField;
      query = (System_String_o *)(ulong)uVar6;
      if (2 < (int)uVar6) {
        if (value_00 == (System_String_o *)0x0) goto label_03b4c4ed;
        if (0 < (value_00->fields)._stringLength) {
          uStack_b4 = 1;
          matchHex = (System_String_o *)0x0;
          do {
            __this = (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *)il2cpp_runtime_helper_022b2a40(TypeInfo_int);
            iVar4 = (value_00->fields)._stringLength;
            pSVar15 = (System_String_o *)0x0;
            iVar8 = (int)matchHex;
            pSVar7 = matchHex;
            if (iVar8 < iVar4) {
              iVar11 = *(int *)&(value->fields)._Node_k__BackingField;
              if (__this != (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *)0x0) {
                if (0 < iVar11) {
                  pSVar15 = (System_String_o *)0x0;
                  uVar6 = uStack_b4;
                  do {
                    pSVar7 = (System_String_o *)(ulong)uVar6;
                    matchHex = pSVar7;
                    uVar1 = System_String__get_Chars(value_00,uVar6 - 1,(MethodInfo *)0x0);
                    index_00 = (uint)pSVar15;
                    query = pSVar15;
                    uVar2 = System_String__get_Chars((System_String_o *)value,index_00,(MethodInfo *)0x0);
                    if (uVar1 == uVar2) {
                      if (*(uint *)&(__this->fields)._Target_k__BackingField <= index_00) goto label_03b4c4f2;
                      *(uint *)((long)&(__this->fields)._ScreenId_k__BackingField + (long)(int)index_00 * 4) =
                           uVar6 - 1;
                      pSVar15 = (System_String_o *)(ulong)(index_00 + 1);
                      iVar4 = (value_00->fields)._stringLength;
                    }
                    else {
                      iVar4 = (value_00->fields)._stringLength;
                    }
                  } while (((int)uVar6 < iVar4) &&
                          (uVar6 = uVar6 + 1, (int)pSVar15 < *(int *)&(value->fields)._Node_k__BackingField));
                }
                goto label_03b4c430;
              }
              iVar9 = iVar8;
              if (0 < iVar11) {
                do {
                  index = (int32_t)matchHex;
                  uVar1 = System_String__get_Chars(value_00,index,(MethodInfo *)0x0);
                  query = (System_String_o *)0x0;
                  pGVar12 = value;
                  uVar2 = System_String__get_Chars((System_String_o *)value,0,(MethodInfo *)0x0);
                  if (uVar1 == uVar2) goto label_03b4c4ed;
                  matchHex = (System_String_o *)(ulong)(index + 1U);
                  iVar4 = (value_00->fields)._stringLength;
                } while (((int)(index + 1U) < iVar4) && (0 < *(int *)&(value->fields)._Node_k__BackingField));
                iVar9 = index + 1;
              }
              iVar11 = 0;
              if (*(int *)&(value->fields)._Node_k__BackingField == 0) goto label_03b4c443;
            }
            else {
label_03b4c430:
              iVar9 = (int)pSVar7;
              iVar11 = *(int *)&(value->fields)._Node_k__BackingField;
              if ((int)pSVar15 == iVar11) {
label_03b4c443:
                iVar9 = iVar9 - iVar8;
                if (iVar9 <= iVar11 * 2) {
                  *extraout_RDX = iVar8;
                  *(int *)&pSVar5->klass = iVar9;
                  method->methodPointer = (Il2CppMethodPointer)__this;
                  il2cpp_runtime_helper_022b4080();
                  return (bool_conflict)CONCAT71((uint7)(uint3)((uint)iVar9 >> 8),1);
                }
              }
            }
            matchHex = (System_String_o *)(ulong)(iVar8 + 1U);
            uStack_b4 = uStack_b4 + 1;
          } while ((int)(iVar8 + 1U) < iVar4);
        }
      }
    }
  }
  return 0;
}


// Gisketch.Aottg2UI.Search.GisketchSearchService$$FindCompact
// il2cpp: bool Gisketch_Aottg2UI_Search_GisketchSearchService__FindCompact (System_String_o* haystack, System_String_o* needle, int32_t* start, int32_t* length, System_Int32_array** indices, const MethodInfo* method);
// 0x3b4c290

bool_conflict
Gisketch_Aottg2UI_Search_GisketchSearchService__FindCompact
          (System_String_o *haystack,System_String_o *needle,int32_t *start,int32_t *length,
          System_Int32_array **indices,MethodInfo *method)

{
  uint16_t uVar1;
  uint16_t uVar2;
  bool_conflict bVar3;
  int iVar4;
  System_Int32_array *__this;
  System_String_o *pSVar5;
  System_String_o *pSVar6;
  uint uVar7;
  System_String_o *pSVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int32_t index;
  System_String_o *query;
  System_Int32_array *pSVar12;
  uint index_00;
  undefined1 auVar13 [16];
  MethodInfo *method_00;
  uint local_5c;
  
  pSVar6 = (System_String_o *)length;
  if (g_data_057a9cc8 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_int);
    g_data_057a9cc8 = '\x01';
  }
  *start = -1;
  *length = 0;
  *indices = (System_Int32_array *)0x0;
  il2cpp_runtime_helper_022b4080(indices);
  bVar3 = System_String__IsNullOrEmpty(haystack,(MethodInfo *)0x0);
  if ((char)bVar3 == '\0') {
    query = (System_String_o *)0x0;
    pSVar12 = (System_Int32_array *)needle;
    bVar3 = System_String__IsNullOrEmpty(needle,(MethodInfo *)0x0);
    if ((char)bVar3 == '\0') {
      if (needle == (System_String_o *)0x0) {
label_03b4c4ed:
        __this = pSVar12;
        il2cpp_runtime_helper_022b2c90();
label_03b4c4f2:
        auVar13 = il2cpp_runtime_helper_022b2ca0();
        method_00 = auVar13._0_8_;
        if (__this == (System_Int32_array *)0x0) {
          pSVar5 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
        }
        else {
          pSVar5 = Gisketch_Aottg2UI_Search_GisketchSearchEntry__PathTitle_3a47560
                             ((Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *)__this,1,auVar13._8_8_);
        }
        pSVar6 = Gisketch_Aottg2UI_Search_GisketchSearchService__Markup_3a4c570
                           ((Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *)__this,query,
                            auVar13._8_4_ & 0xff,pSVar6,pSVar5,(System_String_o *)0x0,method_00);
        return (bool_conflict)pSVar6;
      }
      uVar7 = (needle->fields)._stringLength;
      query = (System_String_o *)(ulong)uVar7;
      if (2 < (int)uVar7) {
        if (haystack == (System_String_o *)0x0) goto label_03b4c4ed;
        if (0 < (haystack->fields)._stringLength) {
          local_5c = 1;
          pSVar6 = (System_String_o *)0x0;
          do {
            __this = (System_Int32_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_int);
            iVar4 = (haystack->fields)._stringLength;
            pSVar5 = (System_String_o *)0x0;
            iVar9 = (int)pSVar6;
            pSVar8 = pSVar6;
            if (iVar9 < iVar4) {
              iVar11 = (needle->fields)._stringLength;
              if (__this != (System_Int32_array *)0x0) {
                if (0 < iVar11) {
                  pSVar5 = (System_String_o *)0x0;
                  uVar7 = local_5c;
                  do {
                    pSVar8 = (System_String_o *)(ulong)uVar7;
                    pSVar6 = pSVar8;
                    uVar1 = System_String__get_Chars(haystack,uVar7 - 1,(MethodInfo *)0x0);
                    index_00 = (uint)pSVar5;
                    query = pSVar5;
                    uVar2 = System_String__get_Chars(needle,index_00,(MethodInfo *)0x0);
                    if (uVar1 == uVar2) {
                      if (*(uint *)&__this->max_length <= index_00) goto label_03b4c4f2;
                      *(uint *)((long)__this->m_Items + (long)(int)index_00 * 4) = uVar7 - 1;
                      pSVar5 = (System_String_o *)(ulong)(index_00 + 1);
                      iVar4 = (haystack->fields)._stringLength;
                    }
                    else {
                      iVar4 = (haystack->fields)._stringLength;
                    }
                  } while (((int)uVar7 < iVar4) &&
                          (uVar7 = uVar7 + 1, (int)pSVar5 < (needle->fields)._stringLength));
                }
                goto label_03b4c430;
              }
              iVar10 = iVar9;
              if (0 < iVar11) {
                do {
                  index = (int32_t)pSVar6;
                  uVar1 = System_String__get_Chars(haystack,index,(MethodInfo *)0x0);
                  query = (System_String_o *)0x0;
                  pSVar12 = (System_Int32_array *)needle;
                  uVar2 = System_String__get_Chars(needle,0,(MethodInfo *)0x0);
                  if (uVar1 == uVar2) goto label_03b4c4ed;
                  pSVar6 = (System_String_o *)(ulong)(index + 1U);
                  iVar4 = (haystack->fields)._stringLength;
                } while (((int)(index + 1U) < iVar4) && (0 < (needle->fields)._stringLength));
                iVar10 = index + 1;
              }
              iVar11 = 0;
              if ((needle->fields)._stringLength == 0) goto label_03b4c443;
            }
            else {
label_03b4c430:
              iVar10 = (int)pSVar8;
              iVar11 = (needle->fields)._stringLength;
              if ((int)pSVar5 == iVar11) {
label_03b4c443:
                iVar10 = iVar10 - iVar9;
                if (iVar10 <= iVar11 * 2) {
                  *start = iVar9;
                  *length = iVar10;
                  *indices = __this;
                  il2cpp_runtime_helper_022b4080();
                  return (bool_conflict)CONCAT71((uint7)(uint3)((uint)iVar10 >> 8),1);
                }
              }
            }
            pSVar6 = (System_String_o *)(ulong)(iVar9 + 1U);
            local_5c = local_5c + 1;
          } while ((int)(iVar9 + 1U) < iVar4);
        }
      }
    }
  }
  return 0;
}


// Gisketch.Aottg2UI.Search.GisketchSearchService$$MatchesAt
// il2cpp: bool Gisketch_Aottg2UI_Search_GisketchSearchService__MatchesAt (System_String_o* haystack, System_String_o* needle, int32_t start, const MethodInfo* method);
// 0x3b4d060

bool_conflict
Gisketch_Aottg2UI_Search_GisketchSearchService__MatchesAt
          (System_String_o *haystack,System_String_o *needle,int32_t start,MethodInfo *method)

{
  int length;
  bool_conflict bVar1;
  System_String_o *a;
  Il2CppObject *__this;
  
  if ((needle != (System_String_o *)0x0) && (haystack != (System_String_o *)0x0)) {
    length = (needle->fields)._stringLength;
    if ((haystack->fields)._stringLength < length + start) {
      return 0;
    }
    a = System_String__Substring_3af8da0(haystack,start,length,(MethodInfo *)0x0);
    bVar1 = System_String__op_Equality(a,needle,(MethodInfo *)0x0);
    return bVar1;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057a9cc9 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057a9cc9 = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = __this;
  bVar1 = il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_c + 0xb8),__this);
  return bVar1;
}


// Gisketch.Aottg2UI.Search.GisketchSearchService$$Slice
// il2cpp: System_String_o* Gisketch_Aottg2UI_Search_GisketchSearchService__Slice (System_String_o* value, int32_t start, int32_t length, const MethodInfo* method);
// 0x3b4c090

System_String_o *
Gisketch_Aottg2UI_Search_GisketchSearchService__Slice
          (System_String_o *value,int32_t start,int32_t length,MethodInfo *method)

{
  uint16_t uVar1;
  uint16_t uVar2;
  bool_conflict bVar3;
  int iVar4;
  System_String_o *pSVar5;
  Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *__this;
  System_String_o *pSVar6;
  uint uVar7;
  MethodInfo *pMVar8;
  MethodInfo *pMVar9;
  MethodInfo *matchHex;
  int *extraout_RDX;
  int *extraout_RDX_00;
  int iVar10;
  int iVar11;
  ulong uVar12;
  int iVar13;
  int32_t index;
  Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *value_00;
  System_String_o *value_01;
  Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *pGVar14;
  long *in_R8;
  byte bVar15;
  byte bVar16;
  uint index_00;
  undefined1 auVar17 [16];
  uint uStack_cc;
  int iStack_64;
  
  pSVar6 = (System_String_o *)0x0;
  pSVar5 = value;
  bVar3 = System_String__IsNullOrEmpty(value,(MethodInfo *)0x0);
  if ((-1 < start) && ((char)bVar3 == '\0')) {
    if (value == (System_String_o *)0x0) {
      il2cpp_runtime_helper_022b2c90();
      *extraout_RDX = -1;
      *(undefined4 *)&method->methodPointer = 0;
      pMVar8 = method;
      bVar3 = System_String__IsNullOrEmpty(pSVar5,(MethodInfo *)0x0);
      if ((char)bVar3 != '\0') {
        return (System_String_o *)0x0;
      }
      uVar12 = 0;
      value_00 = (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *)0x0;
      value_01 = pSVar6;
      bVar3 = System_String__IsNullOrEmpty(pSVar6,(MethodInfo *)0x0);
      if ((char)bVar3 != '\0') {
        return (System_String_o *)0x0;
      }
      if (pSVar6 != (System_String_o *)0x0) {
        if ((pSVar6->fields)._stringLength < 2) {
          return (System_String_o *)0x0;
        }
        if (pSVar5 != (System_String_o *)0x0) {
          iVar4 = (pSVar5->fields)._stringLength;
          if (iVar4 < 1) {
            iStack_64 = 0;
          }
          else {
            uVar12 = 0;
            iStack_64 = 0;
            bVar15 = 1;
            do {
              iVar10 = (int)uVar12;
              uVar1 = System_String__get_Chars(pSVar5,iVar10,(MethodInfo *)0x0);
              if (*(int *)(g_data_057b9bf8 + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              bVar3 = System_Char__IsLetterOrDigit(uVar1,(MethodInfo *)0x0);
              bVar16 = (byte)bVar3 ^ 1;
              if (((bVar15 & 1) != 0) && (bVar16 == 0)) {
                if ((iStack_64 < (pSVar6->fields)._stringLength) &&
                   (uVar2 = System_String__get_Chars(pSVar6,iStack_64,(MethodInfo *)0x0), uVar1 == uVar2)) {
                  iVar4 = *extraout_RDX;
                  if (*extraout_RDX < 0) {
                    *extraout_RDX = iVar10;
                    iVar4 = iVar10;
                  }
                  iStack_64 = iStack_64 + 1;
                  *(int *)&method->methodPointer = (iVar10 - iVar4) + 1;
                }
                bVar16 = 0;
              }
              uVar12 = (ulong)(iVar10 + 1U);
              iVar4 = (pSVar5->fields)._stringLength;
              bVar15 = bVar16;
            } while ((int)(iVar10 + 1U) < iVar4);
          }
          if (iStack_64 != (pSVar6->fields)._stringLength) {
            return (System_String_o *)0x0;
          }
          *(int *)&method->methodPointer = iVar4 - *extraout_RDX;
          return (System_String_o *)CONCAT71((int7)(uVar12 >> 8),1);
        }
      }
      il2cpp_runtime_helper_022b2c90();
      matchHex = pMVar8;
      if (g_data_057a9cc8 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_int);
        g_data_057a9cc8 = '\x01';
      }
      *extraout_RDX_00 = -1;
      *(undefined4 *)&pMVar8->methodPointer = 0;
      *in_R8 = 0;
      il2cpp_runtime_helper_022b4080(in_R8);
      bVar3 = System_String__IsNullOrEmpty(value_01,(MethodInfo *)0x0);
      if ((char)bVar3 == '\0') {
        pSVar5 = (System_String_o *)0x0;
        pGVar14 = value_00;
        bVar3 = System_String__IsNullOrEmpty((System_String_o *)value_00,(MethodInfo *)0x0);
        if ((char)bVar3 == '\0') {
          if (value_00 == (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *)0x0) {
label_03b4c4ed:
            __this = pGVar14;
            il2cpp_runtime_helper_022b2c90();
label_03b4c4f2:
            auVar17 = il2cpp_runtime_helper_022b2ca0();
            pMVar8 = auVar17._0_8_;
            if (__this == (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *)0x0) {
              pSVar6 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
            }
            else {
              pSVar6 = Gisketch_Aottg2UI_Search_GisketchSearchEntry__PathTitle_3a47560(__this,1,auVar17._8_8_)
              ;
            }
            pSVar5 = Gisketch_Aottg2UI_Search_GisketchSearchService__Markup_3a4c570
                               (__this,pSVar5,auVar17._8_4_ & 0xff,(System_String_o *)matchHex,pSVar6,
                                (System_String_o *)0x0,pMVar8);
            return pSVar5;
          }
          uVar7 = *(uint *)&(value_00->fields)._Node_k__BackingField;
          pSVar5 = (System_String_o *)(ulong)uVar7;
          if (2 < (int)uVar7) {
            if (value_01 == (System_String_o *)0x0) goto label_03b4c4ed;
            if (0 < (value_01->fields)._stringLength) {
              uStack_cc = 1;
              matchHex = (MethodInfo *)0x0;
              do {
                __this = (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *)il2cpp_runtime_helper_022b2a40(TypeInfo_int);
                iVar4 = (value_01->fields)._stringLength;
                pSVar6 = (System_String_o *)0x0;
                iVar10 = (int)matchHex;
                pMVar9 = matchHex;
                if (iVar10 < iVar4) {
                  iVar13 = *(int *)&(value_00->fields)._Node_k__BackingField;
                  if (__this != (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *)0x0) {
                    if (0 < iVar13) {
                      pSVar6 = (System_String_o *)0x0;
                      uVar7 = uStack_cc;
                      do {
                        pMVar9 = (MethodInfo *)(ulong)uVar7;
                        matchHex = pMVar9;
                        uVar1 = System_String__get_Chars(value_01,uVar7 - 1,(MethodInfo *)0x0);
                        index_00 = (uint)pSVar6;
                        pSVar5 = pSVar6;
                        uVar2 = System_String__get_Chars
                                          ((System_String_o *)value_00,index_00,(MethodInfo *)0x0);
                        if (uVar1 == uVar2) {
                          if (*(uint *)&(__this->fields)._Target_k__BackingField <= index_00)
                          goto label_03b4c4f2;
                          *(uint *)((long)&(__this->fields)._ScreenId_k__BackingField +
                                   (long)(int)index_00 * 4) = uVar7 - 1;
                          pSVar6 = (System_String_o *)(ulong)(index_00 + 1);
                          iVar4 = (value_01->fields)._stringLength;
                        }
                        else {
                          iVar4 = (value_01->fields)._stringLength;
                        }
                      } while (((int)uVar7 < iVar4) &&
                              (uVar7 = uVar7 + 1,
                              (int)pSVar6 < *(int *)&(value_00->fields)._Node_k__BackingField));
                    }
                    goto label_03b4c430;
                  }
                  iVar11 = iVar10;
                  if (0 < iVar13) {
                    do {
                      index = (int32_t)matchHex;
                      uVar1 = System_String__get_Chars(value_01,index,(MethodInfo *)0x0);
                      pSVar5 = (System_String_o *)0x0;
                      pGVar14 = value_00;
                      uVar2 = System_String__get_Chars((System_String_o *)value_00,0,(MethodInfo *)0x0);
                      if (uVar1 == uVar2) goto label_03b4c4ed;
                      matchHex = (MethodInfo *)(ulong)(index + 1U);
                      iVar4 = (value_01->fields)._stringLength;
                    } while (((int)(index + 1U) < iVar4) &&
                            (0 < *(int *)&(value_00->fields)._Node_k__BackingField));
                    iVar11 = index + 1;
                  }
                  iVar13 = 0;
                  if (*(int *)&(value_00->fields)._Node_k__BackingField == 0) goto label_03b4c443;
                }
                else {
label_03b4c430:
                  iVar11 = (int)pMVar9;
                  iVar13 = *(int *)&(value_00->fields)._Node_k__BackingField;
                  if ((int)pSVar6 == iVar13) {
label_03b4c443:
                    iVar11 = iVar11 - iVar10;
                    if (iVar11 <= iVar13 * 2) {
                      *extraout_RDX_00 = iVar10;
                      *(int *)&pMVar8->methodPointer = iVar11;
                      *in_R8 = (long)__this;
                      il2cpp_runtime_helper_022b4080();
                      return (System_String_o *)CONCAT71((uint7)(uint3)((uint)iVar11 >> 8),1);
                    }
                  }
                }
                matchHex = (MethodInfo *)(ulong)(iVar10 + 1U);
                uStack_cc = uStack_cc + 1;
              } while ((int)(iVar10 + 1U) < iVar4);
            }
          }
        }
      }
      return (System_String_o *)0x0;
    }
    if (length + start <= (value->fields)._stringLength) {
      pSVar5 = System_String__Substring_3af8da0(value,start,length,(MethodInfo *)0x0);
      return pSVar5;
    }
  }
  return (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
}


