// Type: Gisketch.Aottg2UI.Search.GisketchSearchIndex
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Search/GisketchSearchIndex.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Search.GisketchSearchIndex.<>c__DisplayClass5_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Search_GisketchSearchIndex___c__DisplayClass5_0___ctor (Gisketch_Aottg2UI_Search_GisketchSearchIndex___c__DisplayClass5_0_o* __this, const MethodInfo* method);
// 0x18054c890

void
Gisketch_Aottg2UI_Search_GisketchSearchIndex___c__DisplayClass5_0___ctor(Gisketch_Aottg2UI_Search_GisketchSearchIndex___c__DisplayClass5_0_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Search.GisketchSearchIndex.<>c__DisplayClass5_0$$<WithoutDuplicateMainMenuScreenButtons>b__0
// il2cpp: bool Gisketch_Aottg2UI_Search_GisketchSearchIndex___c__DisplayClass5_0___WithoutDuplicateMainMenuScreenButtons_b__0 (Gisketch_Aottg2UI_Search_GisketchSearchIndex___c__DisplayClass5_0_o* __this, Gisketch_Aottg2UI_Search_GisketchSearchEntry_o* entry, const MethodInfo* method);
// 0x1818bfe40

bool Gisketch_Aottg2UI_Search_GisketchSearchIndex___c__DisplayClass5_0___WithoutDuplicateMainMenuScreenButtons_b__0
               (Gisketch_Aottg2UI_Search_GisketchSearchIndex___c__DisplayClass5_0_o *__this,
               Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *entry,MethodInfo *method)

{
  System_String_o *__this_00;
  System_Collections_Generic_HashSet_object__o *__this_01;
  bool bVar1;
  
  if (Il2CppMethodInitialized_184341f70 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Contains)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&"screen");
    il2cpp_codegen_initialize_runtime_metadata(&"section");
    il2cpp_codegen_initialize_runtime_metadata(&"main-menu");
    il2cpp_codegen_initialize_runtime_metadata(&"main-menu-option-");
    Il2CppMethodInitialized_184341f70 = '\x01';
  }
  if ((((entry == (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *)0x0) ||
       (bVar1 = System_String__Equals_196c550
                          ((entry->fields)._ScreenId_k__BackingField,"main-menu",5,(MethodInfo *)0x0
                          ), !bVar1)) ||
      (bVar1 = System_String__Equals_196c550
                         ((entry->fields)._Kind_k__BackingField,"screen",5,(MethodInfo *)0x0),
      bVar1)) ||
     ((bVar1 = System_String__Equals_196c550
                         ((entry->fields)._Kind_k__BackingField,"section",5,(MethodInfo *)0x0),
      bVar1 || (bVar1 = System_String__IsNullOrEmpty
                                  ((entry->fields)._TargetId_k__BackingField,(MethodInfo *)0x0), bVar1)))) {
    return false;
  }
  __this_00 = (entry->fields)._TargetId_k__BackingField;
  if (__this_00 != (System_String_o *)0x0) {
    bVar1 = System_String__StartsWith_19722c0(__this_00,"main-menu-option-",5,(MethodInfo *)0x0);
    if (!bVar1) {
      return false;
    }
    __this_01 = (System_Collections_Generic_HashSet_object__o *)(__this->fields).screenTitles;
    if (__this_01 != (System_Collections_Generic_HashSet_object__o *)0x0) {
      bVar1 = System_Collections_Generic_HashSet_object___Contains
                        (__this_01,(Il2CppObject *)(entry->fields)._Title_k__BackingField,
                         (MethodInfo_1759E40 *)MethodInfo_System_Collections_Generic_HashSet_string_Contains);
      return bVar1;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Search.GisketchSearchIndex.<EmptyScreenIds>d__4$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Search_GisketchSearchIndex__EmptyScreenIds_d__4___ctor (Gisketch_Aottg2UI_Search_GisketchSearchIndex__EmptyScreenIds_d__4_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x1808e2870

void
Gisketch_Aottg2UI_Search_GisketchSearchIndex__EmptyScreenIds_d__4___ctor(Gisketch_Aottg2UI_Search_GisketchSearchIndex__EmptyScreenIds_d__4_o* __this, int32_t __1__state, MethodInfo* method)

{
  int32_t iVar1;
  
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  iVar1 = System_Diagnostics_TraceEventCache__GetThreadId((MethodInfo *)0x0);
  (__this->fields).__l__initialThreadId = iVar1;
  return;
}


// Gisketch.Aottg2UI.Search.GisketchSearchIndex.<EmptyScreenIds>d__4$$System.IDisposable.Dispose
// il2cpp: void Gisketch_Aottg2UI_Search_GisketchSearchIndex__EmptyScreenIds_d__4__System_IDisposable_Dispose (Gisketch_Aottg2UI_Search_GisketchSearchIndex__EmptyScreenIds_d__4_o* __this, const MethodInfo* method);
// 0x180547020

void
Gisketch_Aottg2UI_Search_GisketchSearchIndex__EmptyScreenIds_d__4__System_IDisposable_Dispose(Gisketch_Aottg2UI_Search_GisketchSearchIndex__EmptyScreenIds_d__4_o* __this, MethodInfo* method)

{
  return;
}


// Gisketch.Aottg2UI.Search.GisketchSearchIndex.<EmptyScreenIds>d__4$$MoveNext
// il2cpp: bool Gisketch_Aottg2UI_Search_GisketchSearchIndex__EmptyScreenIds_d__4__MoveNext (Gisketch_Aottg2UI_Search_GisketchSearchIndex__EmptyScreenIds_d__4_o* __this, const MethodInfo* method);
// 0x1818be990

bool
Gisketch_Aottg2UI_Search_GisketchSearchIndex__EmptyScreenIds_d__4__MoveNext(Gisketch_Aottg2UI_Search_GisketchSearchIndex__EmptyScreenIds_d__4_o* __this, MethodInfo* method)

{
  if ((__this->fields).__1__state == 0) {
    (__this->fields).__1__state = -1;
  }
  return false;
}


// Gisketch.Aottg2UI.Search.GisketchSearchIndex.<EmptyScreenIds>d__4$$System.Collections.Generic.IEnumerator<System.String>.get_Current
// il2cpp: System_String_o* Gisketch_Aottg2UI_Search_GisketchSearchIndex__EmptyScreenIds_d__4__System_Collections_Generic_IEnumerator_System_String__get_Current (Gisketch_Aottg2UI_Search_GisketchSearchIndex__EmptyScreenIds_d__4_o* __this, const MethodInfo* method);
// 0x180573e90

System_String_o*
Gisketch_Aottg2UI_Search_GisketchSearchIndex__EmptyScreenIds_d__4__System_Collections_Generic_IEnumerator_System_String__get_Current(Gisketch_Aottg2UI_Search_GisketchSearchIndex__EmptyScreenIds_d__4_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// Gisketch.Aottg2UI.Search.GisketchSearchIndex.<EmptyScreenIds>d__4$$System.Collections.IEnumerator.Reset
// il2cpp: void Gisketch_Aottg2UI_Search_GisketchSearchIndex__EmptyScreenIds_d__4__System_Collections_IEnumerator_Reset (Gisketch_Aottg2UI_Search_GisketchSearchIndex__EmptyScreenIds_d__4_o* __this, const MethodInfo* method);
// 0x1818bea30

void Gisketch_Aottg2UI_Search_GisketchSearchIndex__EmptyScreenIds_d__4__System_Collections_IEnumerator_Reset
               (Gisketch_Aottg2UI_Search_GisketchSearchIndex__EmptyScreenIds_d__4_o *__this,MethodInfo *method
               )

{
  Il2CppClass *klass;
  System_NotSupportedException_o *__this_00;
  MethodInfo *lastManagedFrame;
  
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_NotSupportedException);
  __this_00 = (System_NotSupportedException_o *)il2cpp_codegen_object_new(klass);
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  lastManagedFrame =
       il2cpp_codegen_get_runtime_metadata
                 (&
                  MethodInfo_Gisketch_Aottg2UI_Search_GisketchSearchIndex_EmptyScreenIds_d__4_System_Collections_IEnumerator
                 );
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
}


// Gisketch.Aottg2UI.Search.GisketchSearchIndex.<EmptyScreenIds>d__4$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* Gisketch_Aottg2UI_Search_GisketchSearchIndex__EmptyScreenIds_d__4__System_Collections_IEnumerator_get_Current (Gisketch_Aottg2UI_Search_GisketchSearchIndex__EmptyScreenIds_d__4_o* __this, const MethodInfo* method);
// 0x180573e90

Il2CppObject*
Gisketch_Aottg2UI_Search_GisketchSearchIndex__EmptyScreenIds_d__4__System_Collections_IEnumerator_get_Current(Gisketch_Aottg2UI_Search_GisketchSearchIndex__EmptyScreenIds_d__4_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// Gisketch.Aottg2UI.Search.GisketchSearchIndex.<EmptyScreenIds>d__4$$System.Collections.Generic.IEnumerable<System.String>.GetEnumerator
// il2cpp: System_Collections_Generic_IEnumerator_string__o* Gisketch_Aottg2UI_Search_GisketchSearchIndex__EmptyScreenIds_d__4__System_Collections_Generic_IEnumerable_System_String__GetEnumerator (Gisketch_Aottg2UI_Search_GisketchSearchIndex__EmptyScreenIds_d__4_o* __this, const MethodInfo* method);
// 0x1818be9a0

System_Collections_Generic_IEnumerator_string__o*
Gisketch_Aottg2UI_Search_GisketchSearchIndex__EmptyScreenIds_d__4__System_Collections_Generic_IEnumerable_System_String__GetEnumerator(Gisketch_Aottg2UI_Search_GisketchSearchIndex__EmptyScreenIds_d__4_o* __this, MethodInfo* method)

{
  int iVar1;
  int32_t iVar2;
  Gisketch_Aottg2UI_Search_GisketchSearchIndex__EmptyScreenIds_d__4_o *__this_00;
  
  if (Il2CppMethodInitialized_184341f71 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Search_GisketchSearchIndex_EmptyScreenIds_d__4);
    Il2CppMethodInitialized_184341f71 = '\x01';
  }
  if ((__this->fields).__1__state == -2) {
    iVar1 = (__this->fields).__l__initialThreadId;
    iVar2 = System_Diagnostics_TraceEventCache__GetThreadId((MethodInfo *)0x0);
    if (iVar1 == iVar2) {
      (__this->fields).__1__state = 0;
      return (System_Collections_IEnumerator_o *)__this;
    }
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_Gisketch_Aottg2UI_Search_GisketchSearchIndex_EmptyScreenIds_d__4);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).__1__state = 0;
  iVar2 = System_Diagnostics_TraceEventCache__GetThreadId((MethodInfo *)0x0);
  (__this_00->fields).__l__initialThreadId = iVar2;
  return (System_Collections_IEnumerator_o *)__this_00;
}


// Gisketch.Aottg2UI.Search.GisketchSearchIndex.<EmptyScreenIds>d__4$$System.Collections.IEnumerable.GetEnumerator
// il2cpp: System_Collections_IEnumerator_o* Gisketch_Aottg2UI_Search_GisketchSearchIndex__EmptyScreenIds_d__4__System_Collections_IEnumerable_GetEnumerator (Gisketch_Aottg2UI_Search_GisketchSearchIndex__EmptyScreenIds_d__4_o* __this, const MethodInfo* method);
// 0x1818be9a0

System_Collections_IEnumerator_o *
Gisketch_Aottg2UI_Search_GisketchSearchIndex__EmptyScreenIds_d__4__System_Collections_IEnumerable_GetEnumerator
          (Gisketch_Aottg2UI_Search_GisketchSearchIndex__EmptyScreenIds_d__4_o *__this,MethodInfo *method)

{
  int iVar1;
  int32_t iVar2;
  Gisketch_Aottg2UI_Search_GisketchSearchIndex__EmptyScreenIds_d__4_o *__this_00;
  
  if (Il2CppMethodInitialized_184341f71 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Search_GisketchSearchIndex_EmptyScreenIds_d__4);
    Il2CppMethodInitialized_184341f71 = '\x01';
  }
  if ((__this->fields).__1__state == -2) {
    iVar1 = (__this->fields).__l__initialThreadId;
    iVar2 = System_Diagnostics_TraceEventCache__GetThreadId((MethodInfo *)0x0);
    if (iVar1 == iVar2) {
      (__this->fields).__1__state = 0;
      return (System_Collections_IEnumerator_o *)__this;
    }
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_Gisketch_Aottg2UI_Search_GisketchSearchIndex_EmptyScreenIds_d__4);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).__1__state = 0;
  iVar2 = System_Diagnostics_TraceEventCache__GetThreadId((MethodInfo *)0x0);
  (__this_00->fields).__l__initialThreadId = iVar2;
  return (System_Collections_IEnumerator_o *)__this_00;
}


// Gisketch.Aottg2UI.Search.GisketchSearchIndex$$EntriesFor
// il2cpp: System_Collections_Generic_List_GisketchSearchEntry__o* Gisketch_Aottg2UI_Search_GisketchSearchIndex__EntriesFor (Gisketch_Aottg2UI_Data_GisketchManifestDefinition_o* manifest, System_String_o* activeScreenId, const MethodInfo* method);
// 0x1818b0df0
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1818b0ec8: mov r13, rbx
// asm:   0x1818b0fa9: mov rdi, rbp

System_Collections_Generic_List_GisketchSearchEntry__o *
Gisketch_Aottg2UI_Search_GisketchSearchIndex__EntriesFor
          (Gisketch_Aottg2UI_Data_GisketchManifestDefinition_o *manifest,System_String_o *activeScreenId,
          MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchScreenDefinition_array *pGVar1;
  bool bVar2;
  System_Collections_Generic_List_GisketchSearchEntry__o *entries;
  Gisketch_Aottg2UI_Data_GisketchScreenDefinition_o *pGVar3;
  System_Collections_Generic_IEqualityComparer_T__o *comparer;
  System_Collections_Generic_HashSet_string__o *__this;
  System_String_o *pSVar4;
  Gisketch_Aottg2UI_Search_GisketchSearchIndex___c__DisplayClass5_0_o *object;
  System_Predicate_T__o *match;
  uint uVar5;
  System_String_o *value;
  System_String_o *value_00;
  
  if (Il2CppMethodInitialized_184341f63 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_string_ctor_40e3a10);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_string);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GisketchSearchEntry_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_GisketchSearchEntry);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_StringComparer);
    Il2CppMethodInitialized_184341f63 = '\x01';
  }
  entries = il2cpp_codegen_object_new
                      ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_GisketchSearchEntry);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)entries,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_GisketchSearchEntry_ctor);
  if ((manifest == (Gisketch_Aottg2UI_Data_GisketchManifestDefinition_o *)0x0) ||
     (pGVar3 = Gisketch_Aottg2UI_Data_GisketchManifestDefinition__FindScreen
                         (manifest,activeScreenId,(MethodInfo *)0x0),
     pGVar3 == (Gisketch_Aottg2UI_Data_GisketchScreenDefinition_o *)0x0)) {
    value = (System_String_o *)0x0;
    pSVar4 = (System_String_o *)0x0;
  }
  else {
    value = (pGVar3->fields).searchGroup;
    pSVar4 = (pGVar3->fields).id;
  }
  bVar2 = System_String__IsNullOrEmpty(value,(MethodInfo *)0x0);
  if ((bVar2) && (value = pSVar4, pSVar4 == (System_String_o *)0x0)) {
    value = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
  }
  if (((manifest == (Gisketch_Aottg2UI_Data_GisketchManifestDefinition_o *)0x0) ||
      ((manifest->fields).screens == (Gisketch_Aottg2UI_Data_GisketchScreenDefinition_array *)0x0)) ||
     (bVar2 = System_String__IsNullOrEmpty(value,(MethodInfo *)0x0), bVar2)) {
    return entries;
  }
  if ((TypeInfo_System_StringComparer->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_StringComparer);
  }
  comparer = (System_Collections_Generic_IEqualityComparer_T__o *)il2cpp_runtime_helper_181882cf0(0);
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor_176d450
            ((System_Collections_Generic_HashSet_object__o *)__this,comparer,
             (MethodInfo_176D450 *)MethodInfo_System_Collections_Generic_HashSet_string_ctor_40e3a10);
  pGVar1 = (manifest->fields).screens;
  if (pGVar1 != (Gisketch_Aottg2UI_Data_GisketchScreenDefinition_array *)0x0) {
    for (uVar5 = 0; (int)uVar5 < (int)pGVar1->max_length; uVar5 = uVar5 + 1) {
      if ((uint)pGVar1->max_length <= uVar5) {
        ThrowIndexOutOfRangeException();
      }
      pGVar3 = pGVar1->m_Items[(int)uVar5];
      if (pGVar3 != (Gisketch_Aottg2UI_Data_GisketchScreenDefinition_o *)0x0) {
        value_00 = (pGVar3->fields).searchGroup;
        pSVar4 = (pGVar3->fields).id;
        bVar2 = System_String__IsNullOrEmpty(value_00,(MethodInfo *)0x0);
        if ((bVar2) && (value_00 = pSVar4, pSVar4 == (System_String_o *)0x0)) {
          value_00 = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
        }
        bVar2 = System_String__Equals_196c550(value_00,value,5,(MethodInfo *)0x0);
        if (bVar2) {
          pSVar4 = Gisketch_Aottg2UI_Search_GisketchSearchIndex__ScreenTitle(pGVar3,(MethodInfo *)0x0);
          bVar2 = System_String__IsNullOrEmpty(pSVar4,(MethodInfo *)0x0);
          if (!bVar2) {
            if (__this == (System_Collections_Generic_HashSet_string__o *)0x0) goto label_1818b112f;
            System_Collections_Generic_HashSet_object___Add
                      ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)pSVar4,
                       (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
          }
          Gisketch_Aottg2UI_Search_GisketchSearchIndex__AddScreenEntries
                    (entries,pGVar3,true,(MethodInfo *)0x0);
        }
      }
    }
    if (Il2CppMethodInitialized_184341f68 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_System_Collections_Generic_HashSet_string_get_Count);
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_System_Collections_Generic_List_GisketchSearchEntry_RemoveAll);
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_System_Collections_Generic_List_GisketchSearchEntry_get_Count);
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Predicate_GisketchSearchEntry);
      il2cpp_codegen_initialize_runtime_metadata
                (&
                 MethodInfo_Gisketch_Aottg2UI_Search_GisketchSearchIndex_c__DisplayClass5_0_WithoutDuplicateMainMenuScreenBu
                );
      il2cpp_codegen_initialize_runtime_metadata
                (&TypeInfo_Gisketch_Aottg2UI_Search_GisketchSearchIndex_c__DisplayClass5_0);
      Il2CppMethodInitialized_184341f68 = '\x01';
    }
    object = il2cpp_codegen_object_new
                       ((Il2CppClass *)
                        TypeInfo_Gisketch_Aottg2UI_Search_GisketchSearchIndex_c__DisplayClass5_0);
    System_Object___ctor
              ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)object,(MethodInfo *)0x0);
    if (object != (Gisketch_Aottg2UI_Search_GisketchSearchIndex___c__DisplayClass5_0_o *)0x0) {
      (object->fields).screenTitles = __this;
      Il2CppCodeGenWriteBarrier(&(object->fields).screenTitles,__this);
      if (((entries != (System_Collections_Generic_List_GisketchSearchEntry__o *)0x0) &&
          ((entries->fields)._size != 0)) &&
         (((object->fields).screenTitles != (System_Collections_Generic_HashSet_string__o *)0x0 &&
          ((((object->fields).screenTitles)->fields)._count != 0)))) {
        match = (System_Predicate_T__o *)
                il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Predicate_GisketchSearchEntry);
        System_Predicate_object____ctor
                  ((System_Predicate_object__o *)match,(Il2CppObject *)object,
                   (intptr_t)
                   MethodInfo_Gisketch_Aottg2UI_Search_GisketchSearchIndex_c__DisplayClass5_0_WithoutDuplicateMainMenuScreenBu
                   ,(MethodInfo_B61EB0 *)0x0);
        System_Collections_Generic_List_object___RemoveAll
                  ((System_Collections_Generic_List_object__o *)entries,match,
                   (MethodInfo_946210 *)
                   MethodInfo_System_Collections_Generic_List_GisketchSearchEntry_RemoveAll);
      }
      return entries;
    }
  }
label_1818b112f:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Search.GisketchSearchIndex$$EntriesForScreen
// il2cpp: System_Collections_Generic_List_GisketchSearchEntry__o* Gisketch_Aottg2UI_Search_GisketchSearchIndex__EntriesForScreen (Gisketch_Aottg2UI_Data_GisketchManifestDefinition_o* manifest, System_String_o* screenId, bool includeScreenEntry, const MethodInfo* method);
// 0x1818b0780

System_Collections_Generic_List_GisketchSearchEntry__o *
Gisketch_Aottg2UI_Search_GisketchSearchIndex__EntriesForScreen
          (Gisketch_Aottg2UI_Data_GisketchManifestDefinition_o *manifest,System_String_o *screenId,
          bool includeScreenEntry,MethodInfo *method)

{
  System_Collections_Generic_List_GisketchSearchEntry__o *entries;
  Gisketch_Aottg2UI_Data_GisketchScreenDefinition_o *screen;
  
  if (Il2CppMethodInitialized_184341f64 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GisketchSearchEntry_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_GisketchSearchEntry);
    Il2CppMethodInitialized_184341f64 = '\x01';
  }
  entries = il2cpp_codegen_object_new
                      ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_GisketchSearchEntry);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)entries,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_GisketchSearchEntry_ctor);
  if (manifest != (Gisketch_Aottg2UI_Data_GisketchManifestDefinition_o *)0x0) {
    screen = Gisketch_Aottg2UI_Data_GisketchManifestDefinition__FindScreen
                       (manifest,screenId,(MethodInfo *)0x0);
    if (screen != (Gisketch_Aottg2UI_Data_GisketchScreenDefinition_o *)0x0) {
      Gisketch_Aottg2UI_Search_GisketchSearchIndex__AddScreenEntries
                (entries,screen,includeScreenEntry,(MethodInfo *)0x0);
    }
  }
  return entries;
}


// Gisketch.Aottg2UI.Search.GisketchSearchIndex$$EntriesForScreens
// il2cpp: System_Collections_Generic_List_GisketchSearchEntry__o* Gisketch_Aottg2UI_Search_GisketchSearchIndex__EntriesForScreens (Gisketch_Aottg2UI_Data_GisketchManifestDefinition_o* manifest, System_Collections_Generic_IEnumerable_string__o* screenIds, bool includeScreenEntry, const MethodInfo* method);
// 0x1818b0810
// eh: try 0x1818b0a50..0x1818b0bee -> pad 0x183331810 (+1 call sites) catch Il2CppExceptionWrapper
// eh: try 0x1818b0bee..0x1818b0c19 -> pad 0x180014200 cleanup
// eh: try 0x1818b0c19..0x1818b0ddb -> pad 0x183320720 (+3 call sites) catch Il2CppExceptionWrapper
// asm: 55 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1818b0a4c: nop dword ptr [rax]
// asm:   0x1818b0b9c: nop dword ptr [rax]
// asm:   0x1818b0c0d: mov rdx, qword ptr [r14 + 0x20]
// asm:   0x1818b0c11: mov qword ptr [rax + 0x20], rdx
// asm:   0x1818b0c15: lea rcx, [rax + 0x20]
// asm:   0x1818b0c19: call 0x180416180  ; Il2CppCodeGenWriteBarrier()
// asm:   0x1818b0c1e: cmp dword ptr [rsi + 0x18], 1
// asm:   0x1818b0c22: jbe 0x1818b0d9d
// asm:   0x1818b0cf9: mov rdx, qword ptr [rip + 0x27cfd28]  ; MethodInfo_System_Collections_Generic_List_Enumerator_GisketchSearchEntry_Dispose
// asm:   0x1818b0d00: mov rcx, qword ptr [rsp + 0x40]
// asm:   0x1818b0d05: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x1818b0d0a: mov rcx, qword ptr [rsp + 0x38]
// asm:   0x1818b0d0f: test rcx, rcx
// asm:   0x1818b0d12: jne 0x1818b0dc6
// asm:   0x1818b0d18: xor r13d, r13d
// asm:   0x1818b0d1b: mov r15, qword ptr [rsp + 0x20]
// asm:   0x1818b0d20: mov r12, qword ptr [rsp + 0x60]
// asm:   0x1818b0d25: mov rdi, qword ptr [rsp + 0x30]
// asm:   0x1818b0d2a: mov r14, qword ptr [rsp + 0xd0]
// asm:   0x1818b0d32: jmp 0x1818b0a50
// asm:   0x1818b0d50: mov r8, qword ptr [rsp + 0x30]
// asm:   0x1818b0d55: cmp qword ptr [r8], 0
// asm:   0x1818b0d59: je 0x1818b0d6c
// asm:   0x1818b0d5b: xor ecx, ecx
// asm:   0x1818b0d5d: mov r8, qword ptr [r8]
// asm:   0x1818b0d60: mov rdx, qword ptr [rip + 0x27e8599]  ; TypeInfo_System_IDisposable
// asm:   0x1818b0d67: call 0x180014840  ; InterfaceInvoker0_Invoke()
// asm:   0x1818b0d6c: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x1818b0d71: test rcx, rcx
// asm:   0x1818b0d74: jne 0x1818b0ddb
// asm:   0x1818b0d76: mov r15, qword ptr [rsp + 0x20]
// asm:   0x1818b0dc6: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x1818b0ddb: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183320720: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183320725: push rbp
// asm:   0x183320726: sub rsp, 0x20
// asm:   0x18332072a: mov rbp, rdx
// asm:   0x18332072d: mov rax, qword ptr [rbp + 0x68]
// asm:   0x183320731: mov rcx, qword ptr [rax]
// asm:   0x183320734: mov qword ptr [rbp + 0x38], rcx
// asm:   0x183320738: movabs rax, 0
// asm:   0x183320742: add rsp, 0x20
// asm:   0x183320746: pop rbp
// asm:   0x183320747: ret 
// asm:   0x183331810: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183331815: push rbp
// asm:   0x183331816: sub rsp, 0x20
// asm:   0x18333181a: mov rbp, rdx
// asm:   0x18333181d: mov rax, qword ptr [rbp + 0x70]
// asm:   0x183331821: mov rcx, qword ptr [rax]
// asm:   0x183331824: mov qword ptr [rbp + 0x28], rcx
// asm:   0x183331828: movabs rax, 0
// asm:   0x183331832: add rsp, 0x20
// asm:   0x183331836: pop rbp
// asm:   0x183331837: ret 

System_Collections_Generic_List_GisketchSearchEntry__o *
Gisketch_Aottg2UI_Search_GisketchSearchIndex__EntriesForScreens
          (Gisketch_Aottg2UI_Data_GisketchManifestDefinition_o *manifest,
          System_Collections_Generic_IEnumerable_string__o *screenIds,bool includeScreenEntry,
          MethodInfo *method)

{
  ushort uVar1;
  System_OrdinalIgnoreCaseComparer_o *comparer;
  Il2CppClass *pIVar2;
  Il2CppRuntimeInterfaceOffsetPair *pIVar3;
  Il2CppObject *pIVar4;
  bool bVar5;
  int32_t iVar6;
  System_Collections_Generic_List_GisketchSearchEntry__o *__this;
  System_Collections_Generic_HashSet_string__o *__this_00;
  Il2CppObject *obj;
  void *pvVar7;
  VirtualInvokeData *pVVar8;
  System_String_o *pSVar9;
  System_Collections_Generic_List_GisketchSearchEntry__o *entries;
  Gisketch_Aottg2UI_Data_GisketchScreenDefinition_o *screen;
  System_String_array *values;
  ushort uVar10;
  System_Collections_Generic_List_Enumerator_object__o local_80;
  System_Collections_Generic_HashSet_string__o *local_68;
  System_Collections_Generic_List_Enumerator_T__o local_50;
  
  if (Il2CppMethodInitialized_184341f65 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_GisketchSearchEntry_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_GisketchSearchEntry_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_GisketchSearchEntry_get_Current);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_string_ctor_40e3a10);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IDisposable);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_IEnumerable_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_IEnumerator_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_IEnumerator);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GisketchSearchEntry_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GisketchSearchEntry_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GisketchSearchEntry_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_GisketchSearchEntry);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_StringComparer);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    il2cpp_codegen_initialize_runtime_metadata(&"|");
    Il2CppMethodInitialized_184341f65 = '\x01';
  }
  local_80.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_80.fields._index = 0;
  local_80.fields._version = 0;
  local_80.fields._current = (Il2CppObject *)0x0;
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_GisketchSearchEntry);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)__this,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_GisketchSearchEntry_ctor);
  if ((TypeInfo_System_StringComparer->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_StringComparer);
  }
  if (Il2CppMethodInitialized_184341f37 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_StringComparer);
    Il2CppMethodInitialized_184341f37 = '\x01';
  }
  if ((TypeInfo_System_StringComparer->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_StringComparer);
  }
  comparer = TypeInfo_System_StringComparer->static_fields->s_ordinalIgnoreCase;
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor_176d450
            ((System_Collections_Generic_HashSet_object__o *)__this_00,
             (System_Collections_Generic_IEqualityComparer_T__o *)comparer,
             (MethodInfo_176D450 *)MethodInfo_System_Collections_Generic_HashSet_string_ctor_40e3a10);
  if (screenIds == (System_Collections_Generic_IEnumerable_string__o *)0x0) {
    if (Il2CppMethodInitialized_184341f67 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&TypeInfo_Gisketch_Aottg2UI_Search_GisketchSearchIndex_EmptyScreenIds_d__4);
      Il2CppMethodInitialized_184341f67 = '\x01';
    }
    screenIds = (System_Collections_Generic_IEnumerable_string__o *)
                il2cpp_codegen_object_new
                          ((Il2CppClass *)
                           TypeInfo_Gisketch_Aottg2UI_Search_GisketchSearchIndex_EmptyScreenIds_d__4);
    System_Object___ctor
              ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)screenIds,(MethodInfo *)0x0);
    (((Gisketch_Aottg2UI_Search_GisketchSearchIndex__EmptyScreenIds_d__4_o *)screenIds)->fields).__1__state =
         -2;
    iVar6 = System_Diagnostics_TraceEventCache__GetThreadId((MethodInfo *)0x0);
    (((Gisketch_Aottg2UI_Search_GisketchSearchIndex__EmptyScreenIds_d__4_o *)screenIds)->fields).
    __l__initialThreadId = iVar6;
    if ((Gisketch_Aottg2UI_Search_GisketchSearchIndex__EmptyScreenIds_d__4_o *)screenIds ==
        (Gisketch_Aottg2UI_Search_GisketchSearchIndex__EmptyScreenIds_d__4_o *)0x0) {
      ThrowNullReferenceException();
    }
  }
  local_68 = __this_00;
  obj = InterfaceInvoker0_Invoke
                  (0,(Il2CppClass *)TypeInfo_System_Collections_Generic_IEnumerable_string,
                   (Il2CppObject *)screenIds);
  do {
    if (obj == (Il2CppObject *)0x0) {
      ThrowNullReferenceException();
    }
    pvVar7 = InterfaceInvoker0_Invoke(0,(Il2CppClass *)TypeInfo_System_Collections_IEnumerator,obj);
    if ((char)pvVar7 == '\0') {
      if (obj != (Il2CppObject *)0x0) {
        InterfaceInvoker0_Invoke(0,(Il2CppClass *)TypeInfo_System_IDisposable,obj);
      }
      return __this;
    }
    if (obj == (Il2CppObject *)0x0) {
      ThrowNullReferenceException();
    }
    pIVar2 = obj->klass;
    uVar1 = (pIVar2->_2).interface_offsets_count;
    uVar10 = 0;
    if (uVar1 != 0) {
      pIVar3 = (pIVar2->_1).interfaceOffsets;
      do {
        if (pIVar3[uVar10].interfaceType ==
            (Il2CppClass *)TypeInfo_System_Collections_Generic_IEnumerator_string) {
          pVVar8 = pIVar2->vtable + pIVar3[uVar10].offset;
          goto label_1818b0ad6;
        }
        uVar10 = uVar10 + 1;
      } while (uVar10 < uVar1);
    }
    pVVar8 = GetInterfaceInvokeDataFromVTableSlowPath
                       (obj,(Il2CppClass *)TypeInfo_System_Collections_Generic_IEnumerator_string,0);
label_1818b0ad6:
    pSVar9 = (*pVVar8->methodPtr)(obj,pVVar8->method);
    if (Il2CppMethodInitialized_184341f64 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_System_Collections_Generic_List_GisketchSearchEntry_ctor);
      il2cpp_codegen_initialize_runtime_metadata
                (&TypeInfo_System_Collections_Generic_List_GisketchSearchEntry);
      Il2CppMethodInitialized_184341f64 = '\x01';
    }
    entries = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_GisketchSearchEntry);
    System_Collections_Generic_List_object____ctor
              ((System_Collections_Generic_LowLevelList_T__o *)entries,
               (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_GisketchSearchEntry_ctor);
    if (manifest != (Gisketch_Aottg2UI_Data_GisketchManifestDefinition_o *)0x0) {
      screen = Gisketch_Aottg2UI_Data_GisketchManifestDefinition__FindScreen
                         (manifest,pSVar9,(MethodInfo *)0x0);
      if (screen != (Gisketch_Aottg2UI_Data_GisketchScreenDefinition_o *)0x0) {
        Gisketch_Aottg2UI_Search_GisketchSearchIndex__AddScreenEntries
                  (entries,screen,includeScreenEntry,(MethodInfo *)0x0);
      }
    }
    if (entries == (System_Collections_Generic_List_GisketchSearchEntry__o *)0x0) {
      ThrowNullReferenceException();
    }
    System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
              (&local_50,(System_Collections_Generic_List_T__o *)entries,
               (MethodInfo_91F180 *)
               MethodInfo_System_Collections_Generic_List_GisketchSearchEntry_GetEnumerator);
    local_80.fields._list = local_50.fields._list;
    local_80.fields._index = local_50.fields._index;
    local_80.fields._version = local_50.fields._version;
    local_80.fields._current = local_50.fields._current;
    while( true ) {
      bVar5 = System_Collections_Generic_List_Enumerator_object___MoveNext
                        (&local_80,
                         (MethodInfo_153A2A0 *)
                         MethodInfo_System_Collections_Generic_List_Enumerator_GisketchSearchEntry_MoveNext);
      pIVar4 = local_80.fields._current;
      if (!bVar5) break;
      values = (System_String_array *)SZArrayNew(TypeInfo_string_array,5);
      if (pIVar4 == (Il2CppObject *)0x0) {
        ThrowNullReferenceException();
      }
      if (values == (System_String_array *)0x0) {
        ThrowNullReferenceException();
      }
      if ((int)values->max_length == 0) {
        ThrowIndexOutOfRangeException();
      }
      pIVar2 = pIVar4[2].klass;
      values->m_Items[0] = (System_String_o *)pIVar2;
      Il2CppCodeGenWriteBarrier(values->m_Items,pIVar2);
      pSVar9 = "|";
      if ((uint)values->max_length < 2) {
        ThrowIndexOutOfRangeException();
      }
      values->m_Items[1] = "|";
      Il2CppCodeGenWriteBarrier(values->m_Items + 1,pSVar9);
      if ((uint)values->max_length < 3) {
        ThrowIndexOutOfRangeException();
      }
      pSVar9 = pIVar4[4].monitor;
      values->m_Items[2] = pSVar9;
      Il2CppCodeGenWriteBarrier(values->m_Items + 2,pSVar9);
      pSVar9 = "|";
      if ((uint)values->max_length < 4) {
        ThrowIndexOutOfRangeException();
      }
      values->m_Items[3] = "|";
      Il2CppCodeGenWriteBarrier(values->m_Items + 3,pSVar9);
      if ((uint)values->max_length < 5) {
        ThrowIndexOutOfRangeException();
      }
      pIVar2 = pIVar4[7].klass;
      values->m_Items[4] = (System_String_o *)pIVar2;
      Il2CppCodeGenWriteBarrier(values->m_Items + 4,pIVar2);
      pSVar9 = System_String__Concat_1969830(values,(MethodInfo *)0x0);
      if (__this_00 == (System_Collections_Generic_HashSet_string__o *)0x0) {
        ThrowNullReferenceException();
      }
      bVar5 = System_Collections_Generic_HashSet_object___Add
                        ((System_Collections_Generic_HashSet_object__o *)__this_00,(Il2CppObject *)pSVar9,
                         (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
      if (bVar5) {
        if (__this == (System_Collections_Generic_List_GisketchSearchEntry__o *)0x0) {
          ThrowNullReferenceException();
        }
        il2cpp_runtime_helper_180012890(__this,pIVar4,MethodInfo_System_Collections_Generic_List_GisketchSearchEntry_Add);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose
              ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_80,
               MethodInfo_System_Collections_Generic_List_Enumerator_GisketchSearchEntry_Dispose);
  } while( true );
}


// Gisketch.Aottg2UI.Search.GisketchSearchIndex$$AddScreenEntries
// il2cpp: void Gisketch_Aottg2UI_Search_GisketchSearchIndex__AddScreenEntries (System_Collections_Generic_List_GisketchSearchEntry__o* entries, Gisketch_Aottg2UI_Data_GisketchScreenDefinition_o* screen, bool includeScreenEntry, const MethodInfo* method);
// 0x1818b01a0
// asm: 6 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1818b024b: mov rdi, rbx
// asm:   0x1818b0274: mov rdi, rbp
// asm:   0x1818b02c3: mov rbp, rbx
// asm:   0x1818b035b: mov rdx, rdi
// asm:   0x1818b035e: jmp 0x1818b0371
// asm:   0x1818b051a: mov rbx, qword ptr [rsp + 0x80]

void Gisketch_Aottg2UI_Search_GisketchSearchIndex__AddScreenEntries
               (System_Collections_Generic_List_GisketchSearchEntry__o *entries,
               Gisketch_Aottg2UI_Data_GisketchScreenDefinition_o *screen,bool includeScreenEntry,
               MethodInfo *method)

{
  bool bVar1;
  Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *__this;
  System_String_o *value;
  System_String_o *value_00;
  System_String_o *value_01;
  System_String_o *pSVar2;
  longlong lVar3;
  System_String_o *pSVar4;
  System_String_o *value_02;
  System_String_o *value_03;
  System_String_o *kind;
  
  if (Il2CppMethodInitialized_184341f66 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Search_GisketchSearchEntry);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GisketchSearchEntry_Add);
    il2cpp_codegen_initialize_runtime_metadata(&"screen");
    il2cpp_codegen_initialize_runtime_metadata(&"menuList");
    Il2CppMethodInitialized_184341f66 = '\x01';
  }
  if ((entries != (System_Collections_Generic_List_GisketchSearchEntry__o *)0x0) &&
     (screen != (Gisketch_Aottg2UI_Data_GisketchScreenDefinition_o *)0x0)) {
    value_02 = (screen->fields).searchTitle;
    pSVar4 = (screen->fields).title;
    pSVar2 = (screen->fields).id;
    bVar1 = System_String__IsNullOrEmpty(pSVar4,(MethodInfo *)0x0);
    if ((bVar1) && (pSVar4 = pSVar2, pSVar2 == (System_String_o *)0x0)) {
      pSVar4 = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
    }
    bVar1 = System_String__IsNullOrEmpty(value_02,(MethodInfo *)0x0);
    if ((bVar1) && (value_02 = pSVar4, pSVar4 == (System_String_o *)0x0)) {
      value_02 = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
    }
    if (includeScreenEntry) {
      pSVar2 = (screen->fields).id;
      pSVar4 = (screen->fields).searchGroup;
      bVar1 = System_String__IsNullOrEmpty(pSVar4,(MethodInfo *)0x0);
      if ((bVar1) && (pSVar4 = pSVar2, pSVar2 == (System_String_o *)0x0)) {
        pSVar4 = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
      }
      value = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
      value_00 = (screen->fields).id;
      value_03 = (System_String_o *)**(longlong **)(g_data_184354e50 + 0xb8);
      __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Search_GisketchSearchEntry)
      ;
      kind = "screen";
      value_01 = "menuList";
      System_Configuration_ConfigurationCollectionAttribute___ctor
                ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
      (__this->fields)._Target_k__BackingField = (UnityEngine_GameObject_o *)0x0;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._Target_k__BackingField,(void *)0x0);
      if (pSVar2 == (System_String_o *)0x0) {
        pSVar2 = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
      }
      if (__this == (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *)0x0) {
        ThrowNullReferenceException();
      }
      (__this->fields)._ScreenId_k__BackingField = pSVar2;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._ScreenId_k__BackingField,pSVar2);
      pSVar2 = value_02;
      if (value_02 == (System_String_o *)0x0) {
        pSVar2 = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
      }
      (__this->fields)._ScreenTitle_k__BackingField = pSVar2;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._ScreenTitle_k__BackingField,pSVar2);
      if (pSVar4 == (System_String_o *)0x0) {
        pSVar4 = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
      }
      (__this->fields)._SearchGroup_k__BackingField = pSVar4;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._SearchGroup_k__BackingField,pSVar4);
      if (value == (System_String_o *)0x0) {
        pSVar2 = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
        (__this->fields)._SectionId_k__BackingField = pSVar2;
        Il2CppCodeGenWriteBarrier(&(__this->fields)._SectionId_k__BackingField,pSVar2);
        value = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
      }
      else {
        (__this->fields)._SectionId_k__BackingField = value;
        Il2CppCodeGenWriteBarrier(&(__this->fields)._SectionId_k__BackingField,value);
      }
      (__this->fields)._SectionTitle_k__BackingField = value;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._SectionTitle_k__BackingField,value);
      if (value_00 == (System_String_o *)0x0) {
        value_00 = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
      }
      (__this->fields)._TargetId_k__BackingField = value_00;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._TargetId_k__BackingField,value_00);
      bVar1 = System_String__IsNullOrEmpty((__this->fields)._TargetId_k__BackingField,(MethodInfo *)0x0);
      lVar3 = 0x48;
      if (bVar1) {
        lVar3 = 0x20;
      }
      pSVar2 = *(System_String_o **)((longlong)&__this->klass + lVar3);
      (__this->fields)._Id_k__BackingField = pSVar2;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._Id_k__BackingField,pSVar2);
      if (value_02 == (System_String_o *)0x0) {
        value_02 = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
      }
      (__this->fields)._Title_k__BackingField = value_02;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._Title_k__BackingField,value_02);
      if (value_03 == (System_String_o *)0x0) {
        value_03 = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
      }
      (__this->fields)._Keywords_k__BackingField = value_03;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._Keywords_k__BackingField,value_03);
      bVar1 = System_String__IsNullOrEmpty(value_01,(MethodInfo *)0x0);
      if (bVar1) {
        value_01 = Gisketch_Aottg2UI_Search_GisketchSearchEntry__IconForKind(kind,(MethodInfo *)0x0);
      }
      (__this->fields)._Icon_k__BackingField = value_01;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._Icon_k__BackingField,value_01);
      if (kind == (System_String_o *)0x0) {
        kind = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
      }
      (__this->fields)._Kind_k__BackingField = kind;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._Kind_k__BackingField,kind);
      il2cpp_runtime_helper_180012890(entries,__this,MethodInfo_System_Collections_Generic_List_GisketchSearchEntry_Add);
    }
    Gisketch_Aottg2UI_Search_GisketchSearchIndex__AddNodeEntries
              (entries,screen,(screen->fields).root,(System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8)
               ,(System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8),(MethodInfo *)0x0);
  }
  return;
}


// Gisketch.Aottg2UI.Search.GisketchSearchIndex$$EmptyScreenIds
// il2cpp: System_Collections_Generic_IEnumerable_string__o* Gisketch_Aottg2UI_Search_GisketchSearchIndex__EmptyScreenIds (const MethodInfo* method);
// 0x1818b0720

System_Collections_Generic_IEnumerable_string__o *
Gisketch_Aottg2UI_Search_GisketchSearchIndex__EmptyScreenIds(MethodInfo *method)

{
  int32_t iVar1;
  Gisketch_Aottg2UI_Search_GisketchSearchIndex__EmptyScreenIds_d__4_o *__this;
  
  if (Il2CppMethodInitialized_184341f67 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Search_GisketchSearchIndex_EmptyScreenIds_d__4);
    Il2CppMethodInitialized_184341f67 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Search_GisketchSearchIndex_EmptyScreenIds_d__4
                     );
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = -2;
  iVar1 = System_Diagnostics_TraceEventCache__GetThreadId((MethodInfo *)0x0);
  (__this->fields).__l__initialThreadId = iVar1;
  return (System_Collections_Generic_IEnumerable_string__o *)__this;
}


// Gisketch.Aottg2UI.Search.GisketchSearchIndex$$WithoutDuplicateMainMenuScreenButtons
// il2cpp: System_Collections_Generic_List_GisketchSearchEntry__o* Gisketch_Aottg2UI_Search_GisketchSearchIndex__WithoutDuplicateMainMenuScreenButtons (System_Collections_Generic_List_GisketchSearchEntry__o* entries, System_Collections_Generic_HashSet_string__o* screenTitles, const MethodInfo* method);
// 0x1818b1da0

System_Collections_Generic_List_GisketchSearchEntry__o *
Gisketch_Aottg2UI_Search_GisketchSearchIndex__WithoutDuplicateMainMenuScreenButtons
          (System_Collections_Generic_List_GisketchSearchEntry__o *entries,
          System_Collections_Generic_HashSet_string__o *screenTitles,MethodInfo *method)

{
  Gisketch_Aottg2UI_Search_GisketchSearchIndex___c__DisplayClass5_0_o *object;
  System_Predicate_T__o *match;
  
  if (Il2CppMethodInitialized_184341f68 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_string_get_Count);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GisketchSearchEntry_RemoveAll);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GisketchSearchEntry_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Predicate_GisketchSearchEntry);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_Search_GisketchSearchIndex_c__DisplayClass5_0_WithoutDuplicateMainMenuScreenBu
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Search_GisketchSearchIndex_c__DisplayClass5_0);
    Il2CppMethodInitialized_184341f68 = '\x01';
  }
  object = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Search_GisketchSearchIndex_c__DisplayClass5_0)
  ;
  System_Configuration_ConfigurationCollectionAttribute___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)object,(MethodInfo *)0x0);
  if (object != (Gisketch_Aottg2UI_Search_GisketchSearchIndex___c__DisplayClass5_0_o *)0x0) {
    (object->fields).screenTitles = screenTitles;
    Il2CppCodeGenWriteBarrier(&(object->fields).screenTitles,screenTitles);
    if ((((entries != (System_Collections_Generic_List_GisketchSearchEntry__o *)0x0) &&
         ((entries->fields)._size != 0)) &&
        ((object->fields).screenTitles != (System_Collections_Generic_HashSet_string__o *)0x0)) &&
       ((((object->fields).screenTitles)->fields)._count != 0)) {
      match = (System_Predicate_T__o *)
              il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Predicate_GisketchSearchEntry);
      System_Predicate_object____ctor
                ((System_Predicate_object__o *)match,(Il2CppObject *)object,
                 (intptr_t)
                 MethodInfo_Gisketch_Aottg2UI_Search_GisketchSearchIndex_c__DisplayClass5_0_WithoutDuplicateMainMenuScreenBu
                 ,(MethodInfo_B61EB0 *)0x0);
      System_Collections_Generic_List_object___RemoveAll
                ((System_Collections_Generic_List_object__o *)entries,match,
                 (MethodInfo_946210 *)MethodInfo_System_Collections_Generic_List_GisketchSearchEntry_RemoveAll
                );
    }
    return entries;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Search.GisketchSearchIndex$$AddNodeEntries
// il2cpp: void Gisketch_Aottg2UI_Search_GisketchSearchIndex__AddNodeEntries (System_Collections_Generic_List_GisketchSearchEntry__o* entries, Gisketch_Aottg2UI_Data_GisketchScreenDefinition_o* screen, Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* node, System_String_o* sectionId, System_String_o* sectionTitle, const MethodInfo* method);
// 0x1818af5e0
// asm: 28 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1818af70f: mov qword ptr [rsp + 0xa8], rdi
// asm:   0x1818af759: mov rsi, rdi
// asm:   0x1818af782: mov rsi, rbp
// asm:   0x1818af810: mov rbp, rdi
// asm:   0x1818af8e5: mov rdx, rax
// asm:   0x1818af8e8: jmp 0x1818af8fb
// asm:   0x1818af90d: mov rdx, rsi
// asm:   0x1818af910: jmp 0x1818af923
// asm:   0x1818af98e: mov rdx, rsi
// asm:   0x1818af991: jmp 0x1818af9a4
// asm:   0x1818afcee: mov rsi, rdi
// asm:   0x1818afd69: mov r14, rdi
// asm:   0x1818afd92: mov r14, rbp
// asm:   0x1818afe58: mov rbp, rdi
// asm:   0x1818afe5b: jmp 0x1818afe75
// asm:   0x1818aff56: mov rdx, r13
// asm:   0x1818aff59: jmp 0x1818aff6c
// asm:   0x1818aff86: mov rdx, rsi
// asm:   0x1818aff89: jmp 0x1818aff9c
// asm:   0x1818b00cc: mov rsi, qword ptr [rsp + 0xb0]
// asm:   0x1818b00e0: mov edi, r12d
// asm:   0x1818b00e3: mov ecx, r12d
// asm:   0x1818b0130: mov ebx, r12d
// asm:   0x1818b0133: mov ecx, r12d
// asm:   0x1818b0170: mov rdi, qword ptr [rsp + 0x50]
// asm:   0x1818b0175: mov rsi, qword ptr [rsp + 0x58]
// asm:   0x1818b017a: mov rbp, qword ptr [rsp + 0x60]
// asm:   0x1818b017f: mov r12, qword ptr [rsp + 0x48]

void Gisketch_Aottg2UI_Search_GisketchSearchIndex__AddNodeEntries
               (System_Collections_Generic_List_GisketchSearchEntry__o *entries,
               Gisketch_Aottg2UI_Data_GisketchScreenDefinition_o *screen,
               Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *node,System_String_o *sectionId,
               System_String_o *sectionTitle,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *pGVar1;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *pGVar2;
  bool bVar3;
  System_String_o *pSVar4;
  System_String_o *pSVar5;
  System_String_o *pSVar6;
  Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *pGVar7;
  System_String_o *pSVar8;
  System_String_o *pSVar9;
  System_String_o **ppSVar10;
  System_String_o *pSVar11;
  longlong lVar12;
  uint uVar13;
  System_String_o *pSVar14;
  uint uVar15;
  System_String_o *value;
  System_String_o *local_res20;
  
  if (Il2CppMethodInitialized_184341f69 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Search_GisketchSearchEntry);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GisketchSearchEntry_Add);
    il2cpp_codegen_initialize_runtime_metadata(&"section");
    Il2CppMethodInitialized_184341f69 = '\x01';
  }
  if (node == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    return;
  }
  if (((node->fields).search != (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)0x0) &&
     ((((node->fields).search)->fields).hidden != false)) {
    return;
  }
  if (Il2CppMethodInitialized_184341f6b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"section");
    Il2CppMethodInitialized_184341f6b = '\x01';
  }
  if (((node->fields).search != (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)0x0) &&
     (bVar3 = System_String__Equals_196c550
                        ((((node->fields).search)->fields).kind,"section",5,(MethodInfo *)0x0),
     bVar3)) {
    pGVar1 = (node->fields).search;
    if (pGVar1 != (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)0x0) {
      local_res20 = (pGVar1->fields).sectionId;
      pSVar5 = (node->fields).id;
      bVar3 = System_String__IsNullOrEmpty(local_res20,(MethodInfo *)0x0);
      if ((bVar3) && (local_res20 = pSVar5, pSVar5 == (System_String_o *)0x0)) {
        local_res20 = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
      }
      pGVar1 = (node->fields).search;
      if (pGVar1 != (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)0x0) {
        pSVar4 = (pGVar1->fields).title;
        sectionTitle = (pGVar1->fields).sectionTitle;
        pSVar5 = (node->fields).text;
        bVar3 = System_String__IsNullOrEmpty(pSVar4,(MethodInfo *)0x0);
        if ((bVar3) && (pSVar4 = pSVar5, pSVar5 == (System_String_o *)0x0)) {
          pSVar4 = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
        }
        bVar3 = System_String__IsNullOrEmpty(sectionTitle,(MethodInfo *)0x0);
        if ((bVar3) && (sectionTitle = pSVar4, pSVar4 == (System_String_o *)0x0)) {
          sectionTitle = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
        }
        pGVar1 = (node->fields).search;
        if (pGVar1 != (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)0x0) {
          pSVar5 = (pGVar1->fields).keywords;
          if ((pGVar1->fields).autoAddKeywords == false) {
            pSVar4 = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
          }
          else {
            pSVar4 = Gisketch_Aottg2UI_Search_GisketchSearchIndex__HarvestKeywords(node,(MethodInfo *)0x0);
          }
          pSVar5 = Gisketch_Aottg2UI_Search_GisketchSearchIndex__Join(pSVar5,pSVar4,(MethodInfo *)0x0);
          if (screen != (Gisketch_Aottg2UI_Data_GisketchScreenDefinition_o *)0x0) {
            pSVar4 = (screen->fields).id;
            pSVar6 = Gisketch_Aottg2UI_Search_GisketchSearchIndex__ScreenTitle(screen,(MethodInfo *)0x0);
            pSVar11 = (screen->fields).id;
            pSVar14 = (screen->fields).searchGroup;
            bVar3 = System_String__IsNullOrEmpty(pSVar14,(MethodInfo *)0x0);
            if ((bVar3) && (pSVar14 = pSVar11, pSVar11 == (System_String_o *)0x0)) {
              pSVar14 = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
            }
            pGVar1 = (node->fields).search;
            if (pGVar1 != (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)0x0) {
              pSVar11 = (node->fields).id;
              pSVar8 = (pGVar1->fields).icon;
              pGVar7 = il2cpp_codegen_object_new
                                 ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Search_GisketchSearchEntry);
              pSVar9 = "section";
              System_Object___ctor
                        ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)pGVar7,
                         (MethodInfo *)0x0);
              (pGVar7->fields)._Target_k__BackingField = (UnityEngine_GameObject_o *)0x0;
              Il2CppCodeGenWriteBarrier(&(pGVar7->fields)._Target_k__BackingField,(void *)0x0);
              if (pSVar4 == (System_String_o *)0x0) {
                pSVar4 = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
              }
              (pGVar7->fields)._ScreenId_k__BackingField = pSVar4;
              Il2CppCodeGenWriteBarrier(&(pGVar7->fields)._ScreenId_k__BackingField,pSVar4);
              if (pSVar6 == (System_String_o *)0x0) {
                pSVar6 = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
              }
              (pGVar7->fields)._ScreenTitle_k__BackingField = pSVar6;
              Il2CppCodeGenWriteBarrier(&(pGVar7->fields)._ScreenTitle_k__BackingField,pSVar6);
              if (pSVar14 == (System_String_o *)0x0) {
                pSVar14 = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
              }
              (pGVar7->fields)._SearchGroup_k__BackingField = pSVar14;
              Il2CppCodeGenWriteBarrier(&(pGVar7->fields)._SearchGroup_k__BackingField,pSVar14);
              pSVar4 = local_res20;
              if (local_res20 == (System_String_o *)0x0) {
                pSVar4 = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
              }
              (pGVar7->fields)._SectionId_k__BackingField = pSVar4;
              Il2CppCodeGenWriteBarrier(&(pGVar7->fields)._SectionId_k__BackingField,pSVar4);
              pSVar4 = sectionTitle;
              if (sectionTitle == (System_String_o *)0x0) {
                pSVar4 = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
              }
              (pGVar7->fields)._SectionTitle_k__BackingField = pSVar4;
              Il2CppCodeGenWriteBarrier(&(pGVar7->fields)._SectionTitle_k__BackingField,pSVar4);
              if (pSVar11 == (System_String_o *)0x0) {
                pSVar11 = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
              }
              (pGVar7->fields)._TargetId_k__BackingField = pSVar11;
              Il2CppCodeGenWriteBarrier(&(pGVar7->fields)._TargetId_k__BackingField,pSVar11);
              bVar3 = System_String__IsNullOrEmpty
                                ((pGVar7->fields)._TargetId_k__BackingField,(MethodInfo *)0x0);
              lVar12 = 0x48;
              if (bVar3) {
                lVar12 = 0x20;
              }
              pSVar4 = *(System_String_o **)((longlong)&pGVar7->klass + lVar12);
              (pGVar7->fields)._Id_k__BackingField = pSVar4;
              Il2CppCodeGenWriteBarrier(&(pGVar7->fields)._Id_k__BackingField,pSVar4);
              pSVar4 = sectionTitle;
              if (sectionTitle == (System_String_o *)0x0) {
                pSVar4 = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
              }
              (pGVar7->fields)._Title_k__BackingField = pSVar4;
              Il2CppCodeGenWriteBarrier(&(pGVar7->fields)._Title_k__BackingField,pSVar4);
              if (pSVar5 == (System_String_o *)0x0) {
                pSVar5 = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
              }
              (pGVar7->fields)._Keywords_k__BackingField = pSVar5;
              Il2CppCodeGenWriteBarrier(&(pGVar7->fields)._Keywords_k__BackingField,pSVar5);
              bVar3 = System_String__IsNullOrEmpty(pSVar8,(MethodInfo *)0x0);
              if (bVar3) {
                pSVar8 = Gisketch_Aottg2UI_Search_GisketchSearchEntry__IconForKind(pSVar9,(MethodInfo *)0x0);
              }
              (pGVar7->fields)._Icon_k__BackingField = pSVar8;
              Il2CppCodeGenWriteBarrier(&(pGVar7->fields)._Icon_k__BackingField,pSVar8);
              if (pSVar9 == (System_String_o *)0x0) {
                pSVar9 = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
              }
              (pGVar7->fields)._Kind_k__BackingField = pSVar9;
              Il2CppCodeGenWriteBarrier(&(pGVar7->fields)._Kind_k__BackingField,pSVar9);
              if (entries != (System_Collections_Generic_List_GisketchSearchEntry__o *)0x0) {
                il2cpp_runtime_helper_180012890(entries,pGVar7,
                              MethodInfo_System_Collections_Generic_List_GisketchSearchEntry_Add);
                goto label_1818b00d4;
              }
            }
          }
        }
      }
    }
    goto label_1818b0190;
  }
  if (Il2CppMethodInitialized_184341f6d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"setting");
    Il2CppMethodInitialized_184341f6d = '\x01';
  }
  if (Il2CppMethodInitialized_184341f6c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"TextArea");
    il2cpp_codegen_initialize_runtime_metadata(&"Select");
    il2cpp_codegen_initialize_runtime_metadata(&"InputField");
    il2cpp_codegen_initialize_runtime_metadata(&"Button");
    il2cpp_codegen_initialize_runtime_metadata(&"Dropdown");
    il2cpp_codegen_initialize_runtime_metadata(&"SpriteButton");
    Il2CppMethodInitialized_184341f6c = '\x01';
  }
  bVar3 = System_String__op_Equality((node->fields).type,"Button",(MethodInfo *)0x0);
  local_res20 = sectionId;
  if (((((!bVar3) &&
        (bVar3 = System_String__op_Equality((node->fields).type,"SpriteButton",(MethodInfo *)0x0),
        !bVar3)) &&
       (bVar3 = System_String__op_Equality((node->fields).type,"InputField",(MethodInfo *)0x0),
       !bVar3)) &&
      ((bVar3 = System_String__op_Equality((node->fields).type,"TextArea",(MethodInfo *)0x0),
       !bVar3 && (bVar3 = System_String__op_Equality
                                    ((node->fields).type,"Dropdown",(MethodInfo *)0x0), !bVar3))))
     && (bVar3 = System_String__op_Equality((node->fields).type,"Select",(MethodInfo *)0x0),
        !bVar3)) {
    if (((node->fields).search == (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)0x0) ||
       (bVar3 = System_String__IsNullOrEmpty((((node->fields).search)->fields).kind,(MethodInfo *)0x0), bVar3)
       ) {
      pSVar5 = (node->fields).type;
    }
    else {
      pGVar1 = (node->fields).search;
      if (pGVar1 == (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)0x0) goto label_1818b0190;
      pSVar5 = (pGVar1->fields).kind;
    }
    bVar3 = System_String__Equals_196c550(pSVar5,"setting",5,(MethodInfo *)0x0);
    if (!bVar3) goto label_1818b00d4;
  }
  if ((node->fields).search == (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)0x0) {
label_1818b00d4:
    uVar13 = 0;
    pGVar2 = (node->fields).children;
    uVar15 = uVar13;
    if (pGVar2 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)0x0) {
      for (; (int)uVar15 < (int)pGVar2->max_length; uVar15 = uVar15 + 1) {
        if ((uint)pGVar2->max_length <= uVar15) goto label_1818b0196;
        Gisketch_Aottg2UI_Search_GisketchSearchIndex__AddNodeEntries
                  (entries,screen,pGVar2->m_Items[(int)uVar15],local_res20,sectionTitle,(MethodInfo *)0x0);
      }
    }
    pGVar2 = (node->fields).deferredChildren;
    if (pGVar2 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)0x0) {
      for (; (int)uVar13 < (int)pGVar2->max_length; uVar13 = uVar13 + 1) {
        if ((uint)pGVar2->max_length <= uVar13) {
label_1818b0196:
          ThrowIndexOutOfRangeException();
        }
        Gisketch_Aottg2UI_Search_GisketchSearchIndex__AddNodeEntries
                  (entries,screen,pGVar2->m_Items[(int)uVar13],local_res20,sectionTitle,(MethodInfo *)0x0);
      }
    }
    return;
  }
  bVar3 = System_String__IsNullOrEmpty((((node->fields).search)->fields).title,(MethodInfo *)0x0);
  if (bVar3) {
    pGVar1 = (node->fields).search;
    if (pGVar1 == (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)0x0) goto label_1818b0190;
    bVar3 = System_String__IsNullOrEmpty((pGVar1->fields).keywords,(MethodInfo *)0x0);
    if (bVar3) {
      pGVar1 = (node->fields).search;
      if (pGVar1 == (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)0x0) goto label_1818b0190;
      bVar3 = System_String__IsNullOrEmpty((pGVar1->fields).kind,(MethodInfo *)0x0);
      if (bVar3) {
        pGVar1 = (node->fields).search;
        if (pGVar1 == (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)0x0) goto label_1818b0190;
        bVar3 = System_String__IsNullOrEmpty((pGVar1->fields).icon,(MethodInfo *)0x0);
        if (bVar3) goto label_1818b00d4;
      }
    }
  }
  bVar3 = System_String__IsNullOrEmpty((node->fields).id,(MethodInfo *)0x0);
  if (bVar3) goto label_1818b00d4;
  if (((node->fields).search == (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)0x0) ||
     (bVar3 = System_String__IsNullOrEmpty((((node->fields).search)->fields).kind,(MethodInfo *)0x0), bVar3))
  {
    pSVar5 = (node->fields).type;
  }
  else {
    pGVar1 = (node->fields).search;
    if (pGVar1 == (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)0x0) goto label_1818b0190;
    pSVar5 = (pGVar1->fields).kind;
  }
  if (screen != (Gisketch_Aottg2UI_Data_GisketchScreenDefinition_o *)0x0) {
    pSVar4 = (screen->fields).id;
    pSVar6 = Gisketch_Aottg2UI_Search_GisketchSearchIndex__ScreenTitle(screen,(MethodInfo *)0x0);
    pSVar11 = (screen->fields).id;
    pSVar14 = (screen->fields).searchGroup;
    bVar3 = System_String__IsNullOrEmpty(pSVar14,(MethodInfo *)0x0);
    if ((bVar3) && (pSVar14 = pSVar11, pSVar11 == (System_String_o *)0x0)) {
      pSVar14 = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
    }
    pSVar11 = (node->fields).id;
    if (((node->fields).search == (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)0x0) ||
       (bVar3 = System_String__IsNullOrEmpty((((node->fields).search)->fields).title,(MethodInfo *)0x0), bVar3
       )) {
      pSVar9 = (node->fields).placeholder;
      value = (node->fields).text;
      pSVar8 = (node->fields).id;
      bVar3 = System_String__IsNullOrEmpty(pSVar9,(MethodInfo *)0x0);
      if ((bVar3) && (pSVar9 = pSVar8, pSVar8 == (System_String_o *)0x0)) {
        pSVar9 = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
      }
      bVar3 = System_String__IsNullOrEmpty(value,(MethodInfo *)0x0);
      if ((bVar3) && (value = pSVar9, pSVar9 == (System_String_o *)0x0)) {
        value = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
      }
    }
    else {
      pGVar1 = (node->fields).search;
      if (pGVar1 == (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)0x0) goto label_1818b0190;
      value = (pGVar1->fields).title;
    }
    if (Il2CppMethodInitialized_184341f6e == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&" ");
      Il2CppMethodInitialized_184341f6e = '\x01';
    }
    if ((node->fields).search == (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)0x0) {
      ppSVar10 = *(System_String_o ***)(g_data_184354e50 + 0xb8);
    }
    else {
      ppSVar10 = &(((node->fields).search)->fields).keywords;
    }
    pSVar8 = *ppSVar10;
    if ((node->fields).options == (System_String_array *)0x0) {
      pSVar9 = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
    }
    else {
      pSVar9 = System_String__Join(" ",(node->fields).options,(MethodInfo *)0x0);
    }
    if (Il2CppMethodInitialized_184341f6f == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&" ");
      Il2CppMethodInitialized_184341f6f = '\x01';
    }
    bVar3 = System_String__IsNullOrEmpty(pSVar8,(MethodInfo *)0x0);
    if (bVar3) {
      pSVar8 = pSVar9;
      if (pSVar9 == (System_String_o *)0x0) {
        pSVar8 = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
      }
    }
    else {
      bVar3 = System_String__IsNullOrEmpty(pSVar9,(MethodInfo *)0x0);
      if (!bVar3) {
        pSVar8 = System_String__Concat_1969b70(pSVar8," ",pSVar9,(MethodInfo *)0x0);
      }
    }
    if ((node->fields).search == (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)0x0) {
      ppSVar10 = *(System_String_o ***)(g_data_184354e50 + 0xb8);
    }
    else {
      ppSVar10 = &(((node->fields).search)->fields).icon;
    }
    pSVar9 = *ppSVar10;
    pGVar7 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Search_GisketchSearchEntry);
    System_Object___ctor
              ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)pGVar7,(MethodInfo *)0x0);
    (pGVar7->fields)._Target_k__BackingField = (UnityEngine_GameObject_o *)0x0;
    Il2CppCodeGenWriteBarrier(&(pGVar7->fields)._Target_k__BackingField,(void *)0x0);
    if (pSVar4 == (System_String_o *)0x0) {
      pSVar4 = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
    }
    if (pGVar7 != (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *)0x0) {
      (pGVar7->fields)._ScreenId_k__BackingField = pSVar4;
      Il2CppCodeGenWriteBarrier(&(pGVar7->fields)._ScreenId_k__BackingField,pSVar4);
      if (pSVar6 == (System_String_o *)0x0) {
        pSVar6 = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
      }
      (pGVar7->fields)._ScreenTitle_k__BackingField = pSVar6;
      Il2CppCodeGenWriteBarrier(&(pGVar7->fields)._ScreenTitle_k__BackingField,pSVar6);
      if (pSVar14 == (System_String_o *)0x0) {
        pSVar14 = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
      }
      (pGVar7->fields)._SearchGroup_k__BackingField = pSVar14;
      Il2CppCodeGenWriteBarrier(&(pGVar7->fields)._SearchGroup_k__BackingField,pSVar14);
      pSVar4 = sectionId;
      if (sectionId == (System_String_o *)0x0) {
        pSVar4 = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
      }
      (pGVar7->fields)._SectionId_k__BackingField = pSVar4;
      Il2CppCodeGenWriteBarrier(&(pGVar7->fields)._SectionId_k__BackingField,pSVar4);
      pSVar4 = sectionTitle;
      if (sectionTitle == (System_String_o *)0x0) {
        pSVar4 = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
      }
      (pGVar7->fields)._SectionTitle_k__BackingField = pSVar4;
      Il2CppCodeGenWriteBarrier(&(pGVar7->fields)._SectionTitle_k__BackingField,pSVar4);
      if (pSVar11 == (System_String_o *)0x0) {
        pSVar11 = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
      }
      (pGVar7->fields)._TargetId_k__BackingField = pSVar11;
      Il2CppCodeGenWriteBarrier(&(pGVar7->fields)._TargetId_k__BackingField,pSVar11);
      bVar3 = System_String__IsNullOrEmpty((pGVar7->fields)._TargetId_k__BackingField,(MethodInfo *)0x0);
      lVar12 = 0x48;
      if (bVar3) {
        lVar12 = 0x20;
      }
      pSVar4 = *(System_String_o **)((longlong)&pGVar7->klass + lVar12);
      (pGVar7->fields)._Id_k__BackingField = pSVar4;
      Il2CppCodeGenWriteBarrier(&(pGVar7->fields)._Id_k__BackingField,pSVar4);
      if (value == (System_String_o *)0x0) {
        value = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
      }
      (pGVar7->fields)._Title_k__BackingField = value;
      Il2CppCodeGenWriteBarrier(&(pGVar7->fields)._Title_k__BackingField,value);
      if (pSVar8 == (System_String_o *)0x0) {
        pSVar8 = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
      }
      (pGVar7->fields)._Keywords_k__BackingField = pSVar8;
      Il2CppCodeGenWriteBarrier(&(pGVar7->fields)._Keywords_k__BackingField,pSVar8);
      bVar3 = System_String__IsNullOrEmpty(pSVar9,(MethodInfo *)0x0);
      if (bVar3) {
        pSVar9 = Gisketch_Aottg2UI_Search_GisketchSearchEntry__IconForKind(pSVar5,(MethodInfo *)0x0);
      }
      (pGVar7->fields)._Icon_k__BackingField = pSVar9;
      Il2CppCodeGenWriteBarrier(&(pGVar7->fields)._Icon_k__BackingField,pSVar9);
      if (pSVar5 == (System_String_o *)0x0) {
        pSVar5 = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
      }
      (pGVar7->fields)._Kind_k__BackingField = pSVar5;
      Il2CppCodeGenWriteBarrier(&(pGVar7->fields)._Kind_k__BackingField,pSVar5);
      if (entries != (System_Collections_Generic_List_GisketchSearchEntry__o *)0x0) {
        il2cpp_runtime_helper_180012890(entries,pGVar7,MethodInfo_System_Collections_Generic_List_GisketchSearchEntry_Add);
        goto label_1818b00d4;
      }
    }
  }
label_1818b0190:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Search.GisketchSearchIndex$$AddChildEntries
// il2cpp: void Gisketch_Aottg2UI_Search_GisketchSearchIndex__AddChildEntries (System_Collections_Generic_List_GisketchSearchEntry__o* entries, Gisketch_Aottg2UI_Data_GisketchScreenDefinition_o* screen, Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array* children, System_String_o* sectionId, System_String_o* sectionTitle, const MethodInfo* method);
// 0x1818af540
// asm: 9 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1818af57f: nop 
// asm:   0x1818af5b0: mov r12, qword ptr [rsp + 0x58]
// asm:   0x1818af5b5: mov rdi, qword ptr [rsp + 0x50]
// asm:   0x1818af5ba: mov r15, qword ptr [rsp + 0x60]
// asm:   0x1818af5bf: mov rbx, qword ptr [rsp + 0x68]
// asm:   0x1818af5c4: add rsp, 0x30
// asm:   0x1818af5c8: pop r14
// asm:   0x1818af5ca: pop rsi
// asm:   0x1818af5cb: pop rbp

void Gisketch_Aottg2UI_Search_GisketchSearchIndex__AddChildEntries
               (System_Collections_Generic_List_GisketchSearchEntry__o *entries,
               Gisketch_Aottg2UI_Data_GisketchScreenDefinition_o *screen,
               Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *children,System_String_o *sectionId,
               System_String_o *sectionTitle,MethodInfo *method)

{
  uint uVar1;
  
  if (children != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)0x0) {
    for (uVar1 = 0; (int)uVar1 < (int)children->max_length; uVar1 = uVar1 + 1) {
      if ((uint)children->max_length <= uVar1) {
        ThrowIndexOutOfRangeException();
      }
      Gisketch_Aottg2UI_Search_GisketchSearchIndex__AddNodeEntries
                (entries,screen,children->m_Items[(int)uVar1],sectionId,sectionTitle,(MethodInfo *)0x0);
    }
  }
  return;
}


// Gisketch.Aottg2UI.Search.GisketchSearchIndex$$HarvestKeywords
// il2cpp: System_String_o* Gisketch_Aottg2UI_Search_GisketchSearchIndex__HarvestKeywords (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* node, const MethodInfo* method);
// 0x1818b12a0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1818b142d: nop dword ptr [rax]

System_String_o *
Gisketch_Aottg2UI_Search_GisketchSearchIndex__HarvestKeywords
          (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *node,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *pGVar1;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar2;
  bool bVar3;
  System_Text_StringBuilder_o *__this;
  System_Text_StringBuilder_o *pSVar4;
  System_String_o *pSVar5;
  uint uVar6;
  
  if (Il2CppMethodInitialized_184341f6a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Text_StringBuilder);
    Il2CppMethodInitialized_184341f6a = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Text_StringBuilder);
  System_Text_StringBuilder___ctor(__this,(MethodInfo *)0x0);
  if (node == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) goto label_1818b15d6;
  pSVar5 = (node->fields).text;
  bVar3 = System_String__IsNullOrEmpty(pSVar5,(MethodInfo *)0x0);
  if (!bVar3) {
    if (__this == (System_Text_StringBuilder_o *)0x0) goto label_1818b15d6;
    pSVar4 = System_Text_StringBuilder__Append_197e090(__this,0x20,(MethodInfo *)0x0);
    if (pSVar4 == (System_Text_StringBuilder_o *)0x0) goto label_1818b15d6;
    System_Text_StringBuilder__Append_197dca0(pSVar4,pSVar5,(MethodInfo *)0x0);
  }
  pSVar5 = (node->fields).placeholder;
  bVar3 = System_String__IsNullOrEmpty(pSVar5,(MethodInfo *)0x0);
  if (!bVar3) {
    if (__this == (System_Text_StringBuilder_o *)0x0) goto label_1818b15d6;
    pSVar4 = System_Text_StringBuilder__Append_197e090(__this,0x20,(MethodInfo *)0x0);
    if (pSVar4 == (System_Text_StringBuilder_o *)0x0) goto label_1818b15d6;
    System_Text_StringBuilder__Append_197dca0(pSVar4,pSVar5,(MethodInfo *)0x0);
  }
  pSVar5 = (node->fields).tooltip;
  bVar3 = System_String__IsNullOrEmpty(pSVar5,(MethodInfo *)0x0);
  if (!bVar3) {
    if (__this == (System_Text_StringBuilder_o *)0x0) goto label_1818b15d6;
    pSVar4 = System_Text_StringBuilder__Append_197e090(__this,0x20,(MethodInfo *)0x0);
    if (pSVar4 == (System_Text_StringBuilder_o *)0x0) goto label_1818b15d6;
    System_Text_StringBuilder__Append_197dca0(pSVar4,pSVar5,(MethodInfo *)0x0);
  }
  if ((node->fields).search != (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)0x0) {
    pSVar5 = (((node->fields).search)->fields).keywords;
    bVar3 = System_String__IsNullOrEmpty(pSVar5,(MethodInfo *)0x0);
    if (!bVar3) {
      if (__this == (System_Text_StringBuilder_o *)0x0) goto label_1818b15d6;
      pSVar4 = System_Text_StringBuilder__Append_197e090(__this,0x20,(MethodInfo *)0x0);
      if (pSVar4 == (System_Text_StringBuilder_o *)0x0) goto label_1818b15d6;
      System_Text_StringBuilder__Append_197dca0(pSVar4,pSVar5,(MethodInfo *)0x0);
    }
  }
  pGVar1 = (node->fields).children;
  if (pGVar1 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)0x0) {
    for (uVar6 = 0; (int)uVar6 < (int)pGVar1->max_length; uVar6 = uVar6 + 1) {
      if ((uint)pGVar1->max_length <= uVar6) goto label_1818b15dc;
      pGVar2 = pGVar1->m_Items[(int)uVar6];
      if (Il2CppMethodInitialized_184341f6b == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&"section");
        Il2CppMethodInitialized_184341f6b = '\x01';
      }
      if (pGVar2 == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) goto label_1818b15d6;
      if ((pGVar2->fields).search == (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)0x0) {
label_1818b149d:
        if (__this == (System_Text_StringBuilder_o *)0x0) goto label_1818b15d6;
        pSVar4 = System_Text_StringBuilder__Append_197e090(__this,0x20,(MethodInfo *)0x0);
        pSVar5 = Gisketch_Aottg2UI_Search_GisketchSearchIndex__HarvestKeywords(pGVar2,(MethodInfo *)0x0);
        if (pSVar4 == (System_Text_StringBuilder_o *)0x0) goto label_1818b15d6;
        System_Text_StringBuilder__Append_197dca0(pSVar4,pSVar5,(MethodInfo *)0x0);
      }
      else {
        bVar3 = System_String__Equals_196c550
                          ((((pGVar2->fields).search)->fields).kind,"section",5,(MethodInfo *)0x0)
        ;
        if (!bVar3) goto label_1818b149d;
      }
    }
  }
  pGVar1 = (node->fields).deferredChildren;
  if (pGVar1 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)0x0) {
    for (uVar6 = 0; (int)uVar6 < (int)pGVar1->max_length; uVar6 = uVar6 + 1) {
      if ((uint)pGVar1->max_length <= uVar6) {
label_1818b15dc:
        ThrowIndexOutOfRangeException();
      }
      pGVar2 = pGVar1->m_Items[(int)uVar6];
      if (Il2CppMethodInitialized_184341f6b == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&"section");
        Il2CppMethodInitialized_184341f6b = '\x01';
      }
      if (pGVar2 == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) goto label_1818b15d6;
      if ((pGVar2->fields).search == (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)0x0) {
label_1818b1564:
        if (__this == (System_Text_StringBuilder_o *)0x0) goto label_1818b15d6;
        pSVar4 = System_Text_StringBuilder__Append_197e090(__this,0x20,(MethodInfo *)0x0);
        pSVar5 = Gisketch_Aottg2UI_Search_GisketchSearchIndex__HarvestKeywords(pGVar2,(MethodInfo *)0x0);
        if (pSVar4 == (System_Text_StringBuilder_o *)0x0) goto label_1818b15d6;
        System_Text_StringBuilder__Append_197dca0(pSVar4,pSVar5,(MethodInfo *)0x0);
      }
      else {
        bVar3 = System_String__Equals_196c550
                          ((((pGVar2->fields).search)->fields).kind,"section",5,(MethodInfo *)0x0)
        ;
        if (!bVar3) goto label_1818b1564;
      }
    }
  }
  if (__this != (System_Text_StringBuilder_o *)0x0) {
    pSVar5 = (*(__this->klass->vtable)._3_ToString.methodPtr)
                       (__this,(__this->klass->vtable)._3_ToString.method);
    return pSVar5;
  }
label_1818b15d6:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Search.GisketchSearchIndex$$HarvestChildKeywords
// il2cpp: void Gisketch_Aottg2UI_Search_GisketchSearchIndex__HarvestChildKeywords (System_Text_StringBuilder_o* builder, Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array* children, const MethodInfo* method);
// 0x1818b1190
// asm: 7 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1818b11bd: nop dword ptr [rax]
// asm:   0x1818b126b: mov rbp, qword ptr [rsp + 0x38]
// asm:   0x1818b1270: mov rdi, qword ptr [rsp + 0x40]
// asm:   0x1818b1275: mov rbx, qword ptr [rsp + 0x30]
// asm:   0x1818b127a: mov rsi, qword ptr [rsp + 0x48]
// asm:   0x1818b127f: add rsp, 0x20
// asm:   0x1818b1283: pop r14

void Gisketch_Aottg2UI_Search_GisketchSearchIndex__HarvestChildKeywords
               (System_Text_StringBuilder_o *builder,
               Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *children,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *node;
  bool bVar1;
  System_Text_StringBuilder_o *__this;
  System_String_o *value;
  uint uVar2;
  
  if (children != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)0x0) {
    for (uVar2 = 0; (int)uVar2 < (int)children->max_length; uVar2 = uVar2 + 1) {
      if ((uint)children->max_length <= uVar2) {
        ThrowIndexOutOfRangeException();
      }
      node = children->m_Items[(int)uVar2];
      if (Il2CppMethodInitialized_184341f6b == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&"section");
        Il2CppMethodInitialized_184341f6b = '\x01';
      }
      if (node == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) goto label_1818b1286;
      if (((node->fields).search == (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)0x0) ||
         (bVar1 = System_String__Equals_196c550
                            ((((node->fields).search)->fields).kind,"section",5,(MethodInfo *)0x0)
         , !bVar1)) {
        if (builder == (System_Text_StringBuilder_o *)0x0) {
label_1818b1286:
          ThrowNullReferenceException();
        }
        __this = System_Text_StringBuilder__Append_197e090(builder,0x20,(MethodInfo *)0x0);
        value = Gisketch_Aottg2UI_Search_GisketchSearchIndex__HarvestKeywords(node,(MethodInfo *)0x0);
        if (__this == (System_Text_StringBuilder_o *)0x0) goto label_1818b1286;
        System_Text_StringBuilder__Append_197dca0(__this,value,(MethodInfo *)0x0);
      }
    }
  }
  return;
}


// Gisketch.Aottg2UI.Search.GisketchSearchIndex$$AppendText
// il2cpp: void Gisketch_Aottg2UI_Search_GisketchSearchIndex__AppendText (System_Text_StringBuilder_o* builder, Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* node, const MethodInfo* method);
// 0x1818b0580
// asm: 4 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1818b06aa: mov rsi, qword ptr [rsp + 0x30]
// asm:   0x1818b06af: mov rbx, qword ptr [rsp + 0x38]
// asm:   0x1818b06b4: add rsp, 0x20
// asm:   0x1818b06b8: pop rdi

void Gisketch_Aottg2UI_Search_GisketchSearchIndex__AppendText
               (System_Text_StringBuilder_o *builder,Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *node,
               MethodInfo *method)

{
  System_String_o *pSVar1;
  bool bVar2;
  System_Text_StringBuilder_o *pSVar3;
  
  if (node != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    pSVar1 = (node->fields).text;
    bVar2 = System_String__IsNullOrEmpty(pSVar1,(MethodInfo *)0x0);
    if (!bVar2) {
      if ((builder == (System_Text_StringBuilder_o *)0x0) ||
         (pSVar3 = System_Text_StringBuilder__Append_197e090(builder,0x20,(MethodInfo *)0x0),
         pSVar3 == (System_Text_StringBuilder_o *)0x0)) goto label_1818b06ba;
      System_Text_StringBuilder__Append_197dca0(pSVar3,pSVar1,(MethodInfo *)0x0);
    }
    pSVar1 = (node->fields).placeholder;
    bVar2 = System_String__IsNullOrEmpty(pSVar1,(MethodInfo *)0x0);
    if (!bVar2) {
      if ((builder == (System_Text_StringBuilder_o *)0x0) ||
         (pSVar3 = System_Text_StringBuilder__Append_197e090(builder,0x20,(MethodInfo *)0x0),
         pSVar3 == (System_Text_StringBuilder_o *)0x0)) goto label_1818b06ba;
      System_Text_StringBuilder__Append_197dca0(pSVar3,pSVar1,(MethodInfo *)0x0);
    }
    pSVar1 = (node->fields).tooltip;
    bVar2 = System_String__IsNullOrEmpty(pSVar1,(MethodInfo *)0x0);
    if (!bVar2) {
      if ((builder == (System_Text_StringBuilder_o *)0x0) ||
         (pSVar3 = System_Text_StringBuilder__Append_197e090(builder,0x20,(MethodInfo *)0x0),
         pSVar3 == (System_Text_StringBuilder_o *)0x0)) goto label_1818b06ba;
      System_Text_StringBuilder__Append_197dca0(pSVar3,pSVar1,(MethodInfo *)0x0);
    }
    if ((node->fields).search != (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)0x0) {
      pSVar1 = (((node->fields).search)->fields).keywords;
      bVar2 = System_String__IsNullOrEmpty(pSVar1,(MethodInfo *)0x0);
      if (!bVar2) {
        if ((builder == (System_Text_StringBuilder_o *)0x0) ||
           (pSVar3 = System_Text_StringBuilder__Append_197e090(builder,0x20,(MethodInfo *)0x0),
           pSVar3 == (System_Text_StringBuilder_o *)0x0)) {
label_1818b06ba:
          ThrowNullReferenceException();
        }
        System_Text_StringBuilder__Append_197dca0(pSVar3,pSVar1,(MethodInfo *)0x0);
      }
    }
  }
  return;
}


// Gisketch.Aottg2UI.Search.GisketchSearchIndex$$IsSection
// il2cpp: bool Gisketch_Aottg2UI_Search_GisketchSearchIndex__IsSection (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* node, const MethodInfo* method);
// 0x1818b1920

bool Gisketch_Aottg2UI_Search_GisketchSearchIndex__IsSection
               (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *node,MethodInfo *method)

{
  bool bVar1;
  
  if (Il2CppMethodInitialized_184341f6b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"section");
    Il2CppMethodInitialized_184341f6b = '\x01';
  }
  if (node != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    if ((node->fields).search == (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)0x0) {
      return false;
    }
    bVar1 = System_String__Equals_196c550
                      ((((node->fields).search)->fields).kind,"section",5,(MethodInfo *)0x0);
    return bVar1;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Search.GisketchSearchIndex$$IsControl
// il2cpp: bool Gisketch_Aottg2UI_Search_GisketchSearchIndex__IsControl (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* node, const MethodInfo* method);
// 0x1818b15f0

bool Gisketch_Aottg2UI_Search_GisketchSearchIndex__IsControl
               (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *node,MethodInfo *method)

{
  bool bVar1;
  
  if (Il2CppMethodInitialized_184341f6c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"TextArea");
    il2cpp_codegen_initialize_runtime_metadata(&"Select");
    il2cpp_codegen_initialize_runtime_metadata(&"InputField");
    il2cpp_codegen_initialize_runtime_metadata(&"Button");
    il2cpp_codegen_initialize_runtime_metadata(&"Dropdown");
    il2cpp_codegen_initialize_runtime_metadata(&"SpriteButton");
    Il2CppMethodInitialized_184341f6c = '\x01';
  }
  if (node != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    bVar1 = System_String__op_Equality((node->fields).type,"Button",(MethodInfo *)0x0);
    if (!bVar1) {
      bVar1 = System_String__op_Equality((node->fields).type,"SpriteButton",(MethodInfo *)0x0);
      if (!bVar1) {
        bVar1 = System_String__op_Equality((node->fields).type,"InputField",(MethodInfo *)0x0);
        if (!bVar1) {
          bVar1 = System_String__op_Equality((node->fields).type,"TextArea",(MethodInfo *)0x0);
          if (!bVar1) {
            bVar1 = System_String__op_Equality((node->fields).type,"Dropdown",(MethodInfo *)0x0);
            if (!bVar1) {
              bVar1 = System_String__op_Equality((node->fields).type,"Select",(MethodInfo *)0x0);
              return bVar1;
            }
          }
        }
      }
    }
    return true;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Search.GisketchSearchIndex$$IsSearchTarget
// il2cpp: bool Gisketch_Aottg2UI_Search_GisketchSearchIndex__IsSearchTarget (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* node, const MethodInfo* method);
// 0x1818b17a0

bool Gisketch_Aottg2UI_Search_GisketchSearchIndex__IsSearchTarget
               (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *node,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *pGVar1;
  bool bVar2;
  System_String_o *a;
  
  if (Il2CppMethodInitialized_184341f6d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"setting");
    Il2CppMethodInitialized_184341f6d = '\x01';
  }
  if (Il2CppMethodInitialized_184341f6c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"TextArea");
    il2cpp_codegen_initialize_runtime_metadata(&"Select");
    il2cpp_codegen_initialize_runtime_metadata(&"InputField");
    il2cpp_codegen_initialize_runtime_metadata(&"Button");
    il2cpp_codegen_initialize_runtime_metadata(&"Dropdown");
    il2cpp_codegen_initialize_runtime_metadata(&"SpriteButton");
    Il2CppMethodInitialized_184341f6c = '\x01';
  }
  if (node != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    bVar2 = System_String__op_Equality((node->fields).type,"Button",(MethodInfo *)0x0);
    if (bVar2) {
      return true;
    }
    bVar2 = System_String__op_Equality((node->fields).type,"SpriteButton",(MethodInfo *)0x0);
    if (bVar2) {
      return true;
    }
    bVar2 = System_String__op_Equality((node->fields).type,"InputField",(MethodInfo *)0x0);
    if (bVar2) {
      return true;
    }
    bVar2 = System_String__op_Equality((node->fields).type,"TextArea",(MethodInfo *)0x0);
    if (bVar2) {
      return true;
    }
    bVar2 = System_String__op_Equality((node->fields).type,"Dropdown",(MethodInfo *)0x0);
    if (bVar2) {
      return true;
    }
    bVar2 = System_String__op_Equality((node->fields).type,"Select",(MethodInfo *)0x0);
    if (bVar2) {
      return true;
    }
    if (((node->fields).search == (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)0x0) ||
       (bVar2 = System_String__IsNullOrEmpty((((node->fields).search)->fields).kind,(MethodInfo *)0x0), bVar2)
       ) {
      a = (node->fields).type;
    }
    else {
      pGVar1 = (node->fields).search;
      if (pGVar1 == (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)0x0) goto label_1818b1914;
      a = (pGVar1->fields).kind;
    }
    bVar2 = System_String__Equals_196c550(a,"setting",5,(MethodInfo *)0x0);
    return bVar2;
  }
label_1818b1914:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Search.GisketchSearchIndex$$IsExplicitSearch
// il2cpp: bool Gisketch_Aottg2UI_Search_GisketchSearchIndex__IsExplicitSearch (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* node, const MethodInfo* method);
// 0x1818b1700

bool Gisketch_Aottg2UI_Search_GisketchSearchIndex__IsExplicitSearch
               (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *node,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *pGVar1;
  bool bVar2;
  
  if (node != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    if ((node->fields).search == (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)0x0) {
      return false;
    }
    bVar2 = System_String__IsNullOrEmpty((((node->fields).search)->fields).title,(MethodInfo *)0x0);
    if (!bVar2) {
      return true;
    }
    pGVar1 = (node->fields).search;
    if (pGVar1 != (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)0x0) {
      bVar2 = System_String__IsNullOrEmpty((pGVar1->fields).keywords,(MethodInfo *)0x0);
      if (!bVar2) {
        return true;
      }
      pGVar1 = (node->fields).search;
      if (pGVar1 != (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)0x0) {
        bVar2 = System_String__IsNullOrEmpty((pGVar1->fields).kind,(MethodInfo *)0x0);
        if (!bVar2) {
          return true;
        }
        pGVar1 = (node->fields).search;
        if (pGVar1 != (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)0x0) {
          bVar2 = System_String__IsNullOrEmpty((pGVar1->fields).icon,(MethodInfo *)0x0);
          return !bVar2;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Search.GisketchSearchIndex$$Kind
// il2cpp: System_String_o* Gisketch_Aottg2UI_Search_GisketchSearchIndex__Kind (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* node, const MethodInfo* method);
// 0x1818b1b60

System_String_o *
Gisketch_Aottg2UI_Search_GisketchSearchIndex__Kind
          (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *node,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *pGVar1;
  bool bVar2;
  
  if (node == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
label_1818b1bae:
    ThrowNullReferenceException();
  }
  if ((node->fields).search != (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)0x0) {
    bVar2 = System_String__IsNullOrEmpty((((node->fields).search)->fields).kind,(MethodInfo *)0x0);
    if (!bVar2) {
      pGVar1 = (node->fields).search;
      if (pGVar1 != (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)0x0) {
        return (pGVar1->fields).kind;
      }
      goto label_1818b1bae;
    }
  }
  return (node->fields).type;
}


// Gisketch.Aottg2UI.Search.GisketchSearchIndex$$Title
// il2cpp: System_String_o* Gisketch_Aottg2UI_Search_GisketchSearchIndex__Title (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* node, const MethodInfo* method);
// 0x1818b1cc0
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1818b1d48: mov rbx, rsi
// asm:   0x1818b1d82: mov rbx, rdi

System_String_o *
Gisketch_Aottg2UI_Search_GisketchSearchIndex__Title
          (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *node,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *pGVar1;
  System_String_o *pSVar2;
  bool bVar3;
  System_String_o *value;
  System_String_o *value_00;
  
  if (node != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    if (((node->fields).search == (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)0x0) ||
       (bVar3 = System_String__IsNullOrEmpty((((node->fields).search)->fields).title,(MethodInfo *)0x0), bVar3
       )) {
      value = (node->fields).placeholder;
      value_00 = (node->fields).text;
      pSVar2 = (node->fields).id;
      bVar3 = System_String__IsNullOrEmpty(value,(MethodInfo *)0x0);
      if ((bVar3) && (value = pSVar2, pSVar2 == (System_String_o *)0x0)) {
        value = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
      }
      bVar3 = System_String__IsNullOrEmpty(value_00,(MethodInfo *)0x0);
      if ((bVar3) && (value_00 = value, value == (System_String_o *)0x0)) {
        return (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
      }
      return value_00;
    }
    pGVar1 = (node->fields).search;
    if (pGVar1 != (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)0x0) {
      return (pGVar1->fields).title;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Search.GisketchSearchIndex$$Keywords
// il2cpp: System_String_o* Gisketch_Aottg2UI_Search_GisketchSearchIndex__Keywords (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* node, const MethodInfo* method);
// 0x1818b1a30

System_String_o *
Gisketch_Aottg2UI_Search_GisketchSearchIndex__Keywords
          (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *node,MethodInfo *method)

{
  System_String_o *value;
  bool bVar1;
  System_String_o **ppSVar2;
  System_String_o *value_00;
  
  if (Il2CppMethodInitialized_184341f6e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&" ");
    Il2CppMethodInitialized_184341f6e = '\x01';
  }
  if (node != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    if ((node->fields).search == (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)0x0) {
      ppSVar2 = *(System_String_o ***)(g_data_184354e50 + 0xb8);
    }
    else {
      ppSVar2 = &(((node->fields).search)->fields).keywords;
    }
    value = *ppSVar2;
    if ((node->fields).options == (System_String_array *)0x0) {
      value_00 = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
    }
    else {
      value_00 = System_String__Join(" ",(node->fields).options,(MethodInfo *)0x0);
    }
    if (Il2CppMethodInitialized_184341f6f == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&" ");
      Il2CppMethodInitialized_184341f6f = '\x01';
    }
    bVar1 = System_String__IsNullOrEmpty(value,(MethodInfo *)0x0);
    if (bVar1) {
      if (value_00 == (System_String_o *)0x0) {
        return (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
      }
    }
    else {
      bVar1 = System_String__IsNullOrEmpty(value_00,(MethodInfo *)0x0);
      if (bVar1) {
        return value;
      }
      value_00 = System_String__Concat_1969b70(value," ",value_00,(MethodInfo *)0x0);
    }
    return value_00;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Search.GisketchSearchIndex$$ScreenTitle
// il2cpp: System_String_o* Gisketch_Aottg2UI_Search_GisketchSearchIndex__ScreenTitle (Gisketch_Aottg2UI_Data_GisketchScreenDefinition_o* screen, const MethodInfo* method);
// 0x1818b1bc0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1818b1c0e: mov rbx, rdi

System_String_o *
Gisketch_Aottg2UI_Search_GisketchSearchIndex__ScreenTitle
          (Gisketch_Aottg2UI_Data_GisketchScreenDefinition_o *screen,MethodInfo *method)

{
  bool bVar1;
  System_String_o *pSVar2;
  System_String_o *value;
  System_String_o *value_00;
  
  if (screen == (Gisketch_Aottg2UI_Data_GisketchScreenDefinition_o *)0x0) {
    value_00 = (System_String_o *)0x0;
    value = (System_String_o *)0x0;
    pSVar2 = (System_String_o *)0x0;
  }
  else {
    value_00 = (screen->fields).searchTitle;
    value = (screen->fields).title;
    pSVar2 = (screen->fields).id;
  }
  bVar1 = System_String__IsNullOrEmpty(value,(MethodInfo *)0x0);
  if ((bVar1) && (value = pSVar2, pSVar2 == (System_String_o *)0x0)) {
    value = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
  }
  bVar1 = System_String__IsNullOrEmpty(value_00,(MethodInfo *)0x0);
  if (!bVar1) {
    return value_00;
  }
  if (value == (System_String_o *)0x0) {
    value = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
  }
  return value;
}


// Gisketch.Aottg2UI.Search.GisketchSearchIndex$$SearchGroup
// il2cpp: System_String_o* Gisketch_Aottg2UI_Search_GisketchSearchIndex__SearchGroup (Gisketch_Aottg2UI_Data_GisketchScreenDefinition_o* screen, const MethodInfo* method);
// 0x1818b1c60

System_String_o *
Gisketch_Aottg2UI_Search_GisketchSearchIndex__SearchGroup
          (Gisketch_Aottg2UI_Data_GisketchScreenDefinition_o *screen,MethodInfo *method)

{
  bool bVar1;
  System_String_o *pSVar2;
  System_String_o *value;
  
  if (screen == (Gisketch_Aottg2UI_Data_GisketchScreenDefinition_o *)0x0) {
    value = (System_String_o *)0x0;
    pSVar2 = (System_String_o *)0x0;
  }
  else {
    value = (screen->fields).searchGroup;
    pSVar2 = (screen->fields).id;
  }
  bVar1 = System_String__IsNullOrEmpty(value,(MethodInfo *)0x0);
  if (bVar1) {
    if (pSVar2 == (System_String_o *)0x0) {
      pSVar2 = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
    }
    return pSVar2;
  }
  return value;
}


// Gisketch.Aottg2UI.Search.GisketchSearchIndex$$Join
// il2cpp: System_String_o* Gisketch_Aottg2UI_Search_GisketchSearchIndex__Join (System_String_o* a, System_String_o* b, const MethodInfo* method);
// 0x1818b1990

System_String_o *
Gisketch_Aottg2UI_Search_GisketchSearchIndex__Join(System_String_o *a,System_String_o *b,MethodInfo *method)

{
  bool bVar1;
  System_String_o *pSVar2;
  
  if (Il2CppMethodInitialized_184341f6f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&" ");
    Il2CppMethodInitialized_184341f6f = '\x01';
  }
  bVar1 = System_String__IsNullOrEmpty(a,(MethodInfo *)0x0);
  if (bVar1) {
    if (b == (System_String_o *)0x0) {
      b = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
    }
    return b;
  }
  bVar1 = System_String__IsNullOrEmpty(b,(MethodInfo *)0x0);
  if (bVar1) {
    return a;
  }
  pSVar2 = System_String__Concat_1969b70(a," ",b,(MethodInfo *)0x0);
  return pSVar2;
}


// Gisketch.Aottg2UI.Search.GisketchSearchIndex$$First
// il2cpp: System_String_o* Gisketch_Aottg2UI_Search_GisketchSearchIndex__First (System_String_o* a, System_String_o* b, const MethodInfo* method);
// 0x1818b1140

System_String_o *
Gisketch_Aottg2UI_Search_GisketchSearchIndex__First(System_String_o *a,System_String_o *b,MethodInfo *method)

{
  bool bVar1;
  
  bVar1 = System_String__IsNullOrEmpty(a,(MethodInfo *)0x0);
  if (bVar1) {
    if (b == (System_String_o *)0x0) {
      b = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
    }
    return b;
  }
  return a;
}


// Gisketch.Aottg2UI.Search.GisketchSearchIndex$$Append
// il2cpp: void Gisketch_Aottg2UI_Search_GisketchSearchIndex__Append (System_Text_StringBuilder_o* builder, System_String_o* value, const MethodInfo* method);
// 0x1818b06c0

void Gisketch_Aottg2UI_Search_GisketchSearchIndex__Append
               (System_Text_StringBuilder_o *builder,System_String_o *value,MethodInfo *method)

{
  bool bVar1;
  System_Text_StringBuilder_o *__this;
  
  bVar1 = System_String__IsNullOrEmpty(value,(MethodInfo *)0x0);
  if (bVar1) {
    return;
  }
  if ((builder != (System_Text_StringBuilder_o *)0x0) &&
     (__this = System_Text_StringBuilder__Append_197e090(builder,0x20,(MethodInfo *)0x0),
     __this != (System_Text_StringBuilder_o *)0x0)) {
    System_Text_StringBuilder__Append_197dca0(__this,value,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


