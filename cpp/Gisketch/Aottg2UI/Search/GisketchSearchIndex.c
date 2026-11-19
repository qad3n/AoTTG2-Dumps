// Type: Gisketch.Aottg2UI.Search.GisketchSearchIndex
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Search/GisketchSearchIndex.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Search.GisketchSearchIndex.<>c__DisplayClass5_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Search_GisketchSearchIndex___c__DisplayClass5_0___ctor (Gisketch_Aottg2UI_Search_GisketchSearchIndex___c__DisplayClass5_0_o* __this, const MethodInfo* method);
// 0x5349050

void Gisketch_Aottg2UI_Search_GisketchSearchIndex___c__DisplayClass5_0___ctor
               (Gisketch_Aottg2UI_Search_GisketchSearchIndex___c__DisplayClass5_0_o *__this,MethodInfo *method
               )

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Search.GisketchSearchIndex.<>c__DisplayClass5_0$$<WithoutDuplicateMainMenuScreenButtons>b__0
// il2cpp: bool Gisketch_Aottg2UI_Search_GisketchSearchIndex___c__DisplayClass5_0___WithoutDuplicateMainMenuScreenButtons_b__0 (Gisketch_Aottg2UI_Search_GisketchSearchIndex___c__DisplayClass5_0_o* __this, Gisketch_Aottg2UI_Search_GisketchSearchEntry_o* entry, const MethodInfo* method);
// 0x5349a30

bool Gisketch_Aottg2UI_Search_GisketchSearchIndex___c__DisplayClass5_0___WithoutDuplicateMainMenuScreenButtons_b__0
               (Gisketch_Aottg2UI_Search_GisketchSearchIndex___c__DisplayClass5_0_o *__this,
               Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *entry,MethodInfo *method)

{
  System_String_o *__this_00;
  System_Collections_Generic_HashSet_object__o *__this_01;
  bool bVar1;
  
  if (Il2CppMethodInitialized_075428ec == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Contains)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&"screen");
    il2cpp_codegen_initialize_runtime_metadata(&"section");
    il2cpp_codegen_initialize_runtime_metadata(&"main-menu");
    il2cpp_codegen_initialize_runtime_metadata(&"main-menu-option-");
    Il2CppMethodInitialized_075428ec = '\x01';
  }
  if ((((entry == (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *)0x0) ||
       (bVar1 = System_String__Equals_52ffe30
                          ((entry->fields)._ScreenId_k__BackingField,"main-menu",5,(MethodInfo *)0x0
                          ), !bVar1)) ||
      (bVar1 = System_String__Equals_52ffe30
                         ((entry->fields)._Kind_k__BackingField,"screen",5,(MethodInfo *)0x0),
      bVar1)) ||
     ((bVar1 = System_String__Equals_52ffe30
                         ((entry->fields)._Kind_k__BackingField,"section",5,(MethodInfo *)0x0),
      bVar1 || (bVar1 = System_String__IsNullOrEmpty
                                  ((entry->fields)._TargetId_k__BackingField,(MethodInfo *)0x0), bVar1)))) {
    return false;
  }
  __this_00 = (entry->fields)._TargetId_k__BackingField;
  if (__this_00 != (System_String_o *)0x0) {
    bVar1 = System_String__StartsWith_53002b0(__this_00,"main-menu-option-",5,(MethodInfo *)0x0);
    if (!bVar1) {
      return false;
    }
    __this_01 = (System_Collections_Generic_HashSet_object__o *)(__this->fields).screenTitles;
    if (__this_01 != (System_Collections_Generic_HashSet_object__o *)0x0) {
      bVar1 = System_Collections_Generic_HashSet_object___Contains
                        (__this_01,(Il2CppObject *)(entry->fields)._Title_k__BackingField,
                         (MethodInfo_4FB3720 *)MethodInfo_System_Collections_Generic_HashSet_string_Contains);
      return bVar1;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Search.GisketchSearchIndex.<EmptyScreenIds>d__4$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Search_GisketchSearchIndex__EmptyScreenIds_d__4___ctor (Gisketch_Aottg2UI_Search_GisketchSearchIndex__EmptyScreenIds_d__4_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x5349020

void Gisketch_Aottg2UI_Search_GisketchSearchIndex__EmptyScreenIds_d__4___ctor
               (Gisketch_Aottg2UI_Search_GisketchSearchIndex__EmptyScreenIds_d__4_o *__this,int32_t __1__state
               ,MethodInfo *method)

{
  int32_t iVar1;
  
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  iVar1 = System_Environment__get_CurrentManagedThreadId((MethodInfo *)0x0);
  (__this->fields).__l__initialThreadId = iVar1;
  return;
}


// Gisketch.Aottg2UI.Search.GisketchSearchIndex.<EmptyScreenIds>d__4$$System.IDisposable.Dispose
// il2cpp: void Gisketch_Aottg2UI_Search_GisketchSearchIndex__EmptyScreenIds_d__4__System_IDisposable_Dispose (Gisketch_Aottg2UI_Search_GisketchSearchIndex__EmptyScreenIds_d__4_o* __this, const MethodInfo* method);
// 0x5349b60

void Gisketch_Aottg2UI_Search_GisketchSearchIndex__EmptyScreenIds_d__4__System_IDisposable_Dispose
               (Gisketch_Aottg2UI_Search_GisketchSearchIndex__EmptyScreenIds_d__4_o *__this,MethodInfo *method
               )

{
  return;
}


// Gisketch.Aottg2UI.Search.GisketchSearchIndex.<EmptyScreenIds>d__4$$MoveNext
// il2cpp: bool Gisketch_Aottg2UI_Search_GisketchSearchIndex__EmptyScreenIds_d__4__MoveNext (Gisketch_Aottg2UI_Search_GisketchSearchIndex__EmptyScreenIds_d__4_o* __this, const MethodInfo* method);
// 0x5349b70

bool Gisketch_Aottg2UI_Search_GisketchSearchIndex__EmptyScreenIds_d__4__MoveNext
               (Gisketch_Aottg2UI_Search_GisketchSearchIndex__EmptyScreenIds_d__4_o *__this,MethodInfo *method
               )

{
  if ((__this->fields).__1__state == 0) {
    (__this->fields).__1__state = -1;
    return false;
  }
  return false;
}


// Gisketch.Aottg2UI.Search.GisketchSearchIndex.<EmptyScreenIds>d__4$$System.Collections.Generic.IEnumerator<System.String>.get_Current
// il2cpp: System_String_o* Gisketch_Aottg2UI_Search_GisketchSearchIndex__EmptyScreenIds_d__4__System_Collections_Generic_IEnumerator_System_String__get_Current (Gisketch_Aottg2UI_Search_GisketchSearchIndex__EmptyScreenIds_d__4_o* __this, const MethodInfo* method);
// 0x5349b90

System_String_o *
Gisketch_Aottg2UI_Search_GisketchSearchIndex__EmptyScreenIds_d__4__System_Collections_Generic_IEnumerator_System_String__get_Current
          (Gisketch_Aottg2UI_Search_GisketchSearchIndex__EmptyScreenIds_d__4_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// Gisketch.Aottg2UI.Search.GisketchSearchIndex.<EmptyScreenIds>d__4$$System.Collections.IEnumerator.Reset
// il2cpp: void Gisketch_Aottg2UI_Search_GisketchSearchIndex__EmptyScreenIds_d__4__System_Collections_IEnumerator_Reset (Gisketch_Aottg2UI_Search_GisketchSearchIndex__EmptyScreenIds_d__4_o* __this, const MethodInfo* method);
// 0x5349ba0

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
// 0x5349be0

Il2CppObject *
Gisketch_Aottg2UI_Search_GisketchSearchIndex__EmptyScreenIds_d__4__System_Collections_IEnumerator_get_Current
          (Gisketch_Aottg2UI_Search_GisketchSearchIndex__EmptyScreenIds_d__4_o *__this,MethodInfo *method)

{
  return (Il2CppObject *)(__this->fields).__2__current;
}


// Gisketch.Aottg2UI.Search.GisketchSearchIndex.<EmptyScreenIds>d__4$$System.Collections.Generic.IEnumerable<System.String>.GetEnumerator
// il2cpp: System_Collections_Generic_IEnumerator_string__o* Gisketch_Aottg2UI_Search_GisketchSearchIndex__EmptyScreenIds_d__4__System_Collections_Generic_IEnumerable_System_String__GetEnumerator (Gisketch_Aottg2UI_Search_GisketchSearchIndex__EmptyScreenIds_d__4_o* __this, const MethodInfo* method);
// 0x5349bf0

System_Collections_Generic_IEnumerator_string__o *
Gisketch_Aottg2UI_Search_GisketchSearchIndex__EmptyScreenIds_d__4__System_Collections_Generic_IEnumerable_System_String__GetEnumerator
          (Gisketch_Aottg2UI_Search_GisketchSearchIndex__EmptyScreenIds_d__4_o *__this,MethodInfo *method)

{
  int iVar1;
  int32_t iVar2;
  Gisketch_Aottg2UI_Search_GisketchSearchIndex__EmptyScreenIds_d__4_o *__this_00;
  
  if (Il2CppMethodInitialized_075428ed == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Search_GisketchSearchIndex_EmptyScreenIds_d__4);
    Il2CppMethodInitialized_075428ed = '\x01';
  }
  if (((__this->fields).__1__state == -2) &&
     (iVar1 = (__this->fields).__l__initialThreadId,
     iVar2 = System_Environment__get_CurrentManagedThreadId((MethodInfo *)0x0), iVar1 == iVar2)) {
    (__this->fields).__1__state = 0;
    return (System_Collections_Generic_IEnumerator_string__o *)__this;
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_Gisketch_Aottg2UI_Search_GisketchSearchIndex_EmptyScreenIds_d__4);
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).__1__state = 0;
  iVar2 = System_Environment__get_CurrentManagedThreadId((MethodInfo *)0x0);
  (__this_00->fields).__l__initialThreadId = iVar2;
  return (System_Collections_Generic_IEnumerator_string__o *)__this_00;
}


// Gisketch.Aottg2UI.Search.GisketchSearchIndex.<EmptyScreenIds>d__4$$System.Collections.IEnumerable.GetEnumerator
// il2cpp: System_Collections_IEnumerator_o* Gisketch_Aottg2UI_Search_GisketchSearchIndex__EmptyScreenIds_d__4__System_Collections_IEnumerable_GetEnumerator (Gisketch_Aottg2UI_Search_GisketchSearchIndex__EmptyScreenIds_d__4_o* __this, const MethodInfo* method);
// 0x5349c70

System_Collections_IEnumerator_o *
Gisketch_Aottg2UI_Search_GisketchSearchIndex__EmptyScreenIds_d__4__System_Collections_IEnumerable_GetEnumerator
          (Gisketch_Aottg2UI_Search_GisketchSearchIndex__EmptyScreenIds_d__4_o *__this,MethodInfo *method)

{
  int iVar1;
  int32_t iVar2;
  Gisketch_Aottg2UI_Search_GisketchSearchIndex__EmptyScreenIds_d__4_o *__this_00;
  
  if (Il2CppMethodInitialized_075428ed == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Search_GisketchSearchIndex_EmptyScreenIds_d__4);
    Il2CppMethodInitialized_075428ed = '\x01';
  }
  if (((__this->fields).__1__state == -2) &&
     (iVar1 = (__this->fields).__l__initialThreadId,
     iVar2 = System_Environment__get_CurrentManagedThreadId((MethodInfo *)0x0), iVar1 == iVar2)) {
    (__this->fields).__1__state = 0;
    return (System_Collections_IEnumerator_o *)__this;
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_Gisketch_Aottg2UI_Search_GisketchSearchIndex_EmptyScreenIds_d__4);
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).__1__state = 0;
  iVar2 = System_Environment__get_CurrentManagedThreadId((MethodInfo *)0x0);
  (__this_00->fields).__l__initialThreadId = iVar2;
  return (System_Collections_IEnumerator_o *)__this_00;
}


// Gisketch.Aottg2UI.Search.GisketchSearchIndex$$EntriesFor
// il2cpp: System_Collections_Generic_List_GisketchSearchEntry__o* Gisketch_Aottg2UI_Search_GisketchSearchIndex__EntriesFor (Gisketch_Aottg2UI_Data_GisketchManifestDefinition_o* manifest, System_String_o* activeScreenId, const MethodInfo* method);
// 0x5347740
// asm: 4 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5347805: jmp 0x5347817
// asm:   0x534786c: cmp byte ptr [rip + 0x21fb013], 0
// asm:   0x5347873: je 0x5347a4e
// asm:   0x53479ee: nop 

System_Collections_Generic_List_GisketchSearchEntry__o *
Gisketch_Aottg2UI_Search_GisketchSearchIndex__EntriesFor
          (Gisketch_Aottg2UI_Data_GisketchManifestDefinition_o *manifest,System_String_o *activeScreenId,
          MethodInfo *method)

{
  uint32_t uVar1;
  uint uVar2;
  System_String_o *pSVar3;
  System_OrdinalIgnoreCaseComparer_o *comparer;
  Gisketch_Aottg2UI_Data_GisketchScreenDefinition_array *pGVar4;
  bool bVar5;
  System_Collections_Generic_List_GisketchSearchEntry__o *entries;
  Gisketch_Aottg2UI_Data_GisketchScreenDefinition_o *pGVar6;
  System_Collections_Generic_HashSet_string__o *__this;
  ulong uVar7;
  MethodInfo *method_00;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_01;
  MethodInfo *extraout_RDX_01;
  System_String_o *pSVar8;
  System_String_o *value;
  ulong uVar9;
  System_String_o *value_00;
  
  if (Il2CppMethodInitialized_075428df == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_string_ctor_7191708);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_string);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GisketchSearchEntry_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_GisketchSearchEntry);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_StringComparer);
    Il2CppMethodInitialized_075428df = '\x01';
  }
  entries = il2cpp_codegen_object_new
                      ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_GisketchSearchEntry);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)entries,
             (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_GisketchSearchEntry_ctor);
  if ((manifest == (Gisketch_Aottg2UI_Data_GisketchManifestDefinition_o *)0x0) ||
     (pGVar6 = Gisketch_Aottg2UI_Data_GisketchManifestDefinition__FindScreen
                         (manifest,activeScreenId,(MethodInfo *)0x0),
     pGVar6 == (Gisketch_Aottg2UI_Data_GisketchScreenDefinition_o *)0x0)) {
    value_00 = (System_String_o *)0x0;
    bVar5 = System_String__IsNullOrEmpty((System_String_o *)0x0,(MethodInfo *)0x0);
    if (bVar5) goto label_05347817;
  }
  else {
    pSVar3 = (pGVar6->fields).id;
    value_00 = (pGVar6->fields).searchGroup;
    bVar5 = System_String__IsNullOrEmpty(value_00,(MethodInfo *)0x0);
    if ((!bVar5) || (value_00 = pSVar3, pSVar3 != (System_String_o *)0x0)) goto label_05347838;
label_05347817:
    value_00 = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
  }
  if (manifest == (Gisketch_Aottg2UI_Data_GisketchManifestDefinition_o *)0x0) {
    return entries;
  }
label_05347838:
  if ((manifest->fields).screens == (Gisketch_Aottg2UI_Data_GisketchScreenDefinition_array *)0x0) {
    return entries;
  }
  bVar5 = System_String__IsNullOrEmpty(value_00,(MethodInfo *)0x0);
  if (bVar5) {
    return entries;
  }
  if ((TypeInfo_System_StringComparer->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_StringComparer);
  }
  if (Il2CppMethodInitialized_07542886 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_StringComparer);
    Il2CppMethodInitialized_07542886 = '\x01';
    uVar1 = (TypeInfo_System_StringComparer->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (((Il2CppClass *)TypeInfo_System_StringComparer)->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_StringComparer);
  }
  comparer = TypeInfo_System_StringComparer->static_fields->s_ordinalIgnoreCase;
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor_4fb2f30
            ((System_Collections_Generic_HashSet_object__o *)__this,
             (System_Collections_Generic_IEqualityComparer_T__o *)comparer,
             (MethodInfo_4FB2F30 *)MethodInfo_System_Collections_Generic_HashSet_string_ctor_7191708);
  pGVar4 = (manifest->fields).screens;
  if (pGVar4 == (Gisketch_Aottg2UI_Data_GisketchScreenDefinition_array *)0x0) {
label_05347a14:
    ThrowNullReferenceException();
  }
  method_01 = extraout_RDX;
  if (0 < (int)pGVar4->max_length) {
    uVar7 = pGVar4->max_length & 0xffffffff;
    uVar9 = 0;
    do {
      if (uVar7 <= uVar9) {
        ThrowIndexOutOfRangeException();
      }
      pGVar6 = pGVar4->m_Items[uVar9];
      if (pGVar6 != (Gisketch_Aottg2UI_Data_GisketchScreenDefinition_o *)0x0) {
        pSVar3 = (pGVar6->fields).id;
        pSVar8 = (pGVar6->fields).searchGroup;
        bVar5 = System_String__IsNullOrEmpty(pSVar8,(MethodInfo *)0x0);
        if ((bVar5) && (pSVar8 = pSVar3, pSVar3 == (System_String_o *)0x0)) {
          pSVar8 = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
        }
        method_00 = (MethodInfo *)0x0;
        bVar5 = System_String__Equals_52ffe30(pSVar8,value_00,5,(MethodInfo *)0x0);
        method_01 = extraout_RDX_01;
        if (bVar5) {
          value = (pGVar6->fields).searchTitle;
          pSVar3 = (pGVar6->fields).id;
          pSVar8 = (pGVar6->fields).title;
          bVar5 = System_String__IsNullOrEmpty(pSVar8,(MethodInfo *)0x0);
          if ((bVar5) && (pSVar8 = pSVar3, pSVar3 == (System_String_o *)0x0)) {
            pSVar8 = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
          }
          bVar5 = System_String__IsNullOrEmpty(value,(MethodInfo *)0x0);
          if ((bVar5) && (value = pSVar8, pSVar8 == (System_String_o *)0x0)) {
            value = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
          }
          bVar5 = System_String__IsNullOrEmpty(value,(MethodInfo *)0x0);
          if (!bVar5) {
            if (__this == (System_Collections_Generic_HashSet_string__o *)0x0) goto label_05347a14;
            System_Collections_Generic_HashSet_object___Add
                      ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)value,
                       (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
          }
          Gisketch_Aottg2UI_Search_GisketchSearchIndex__AddScreenEntries(entries,pGVar6,true,method_00);
          method_01 = extraout_RDX_00;
        }
      }
      uVar9 = uVar9 + 1;
      uVar2 = (uint)pGVar4->max_length;
      uVar7 = (ulong)uVar2;
    } while ((long)uVar9 < (long)(int)uVar2);
  }
  Gisketch_Aottg2UI_Search_GisketchSearchIndex__WithoutDuplicateMainMenuScreenButtons
            (entries,__this,method_01);
  return entries;
}


// Gisketch.Aottg2UI.Search.GisketchSearchIndex$$EntriesForScreen
// il2cpp: System_Collections_Generic_List_GisketchSearchEntry__o* Gisketch_Aottg2UI_Search_GisketchSearchIndex__EntriesForScreen (Gisketch_Aottg2UI_Data_GisketchManifestDefinition_o* manifest, System_String_o* screenId, bool includeScreenEntry, const MethodInfo* method);
// 0x5347ef0

System_Collections_Generic_List_GisketchSearchEntry__o *
Gisketch_Aottg2UI_Search_GisketchSearchIndex__EntriesForScreen
          (Gisketch_Aottg2UI_Data_GisketchManifestDefinition_o *manifest,System_String_o *screenId,
          bool includeScreenEntry,MethodInfo *method)

{
  System_Collections_Generic_List_GisketchSearchEntry__o *entries;
  Gisketch_Aottg2UI_Data_GisketchScreenDefinition_o *screen;
  
  if (Il2CppMethodInitialized_075428e0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GisketchSearchEntry_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_GisketchSearchEntry);
    Il2CppMethodInitialized_075428e0 = '\x01';
  }
  entries = il2cpp_codegen_object_new
                      ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_GisketchSearchEntry);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)entries,
             (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_GisketchSearchEntry_ctor);
  if (manifest != (Gisketch_Aottg2UI_Data_GisketchManifestDefinition_o *)0x0) {
    screen = Gisketch_Aottg2UI_Data_GisketchManifestDefinition__FindScreen
                       (manifest,screenId,(MethodInfo *)0x0);
    if (screen != (Gisketch_Aottg2UI_Data_GisketchScreenDefinition_o *)0x0) {
      Gisketch_Aottg2UI_Search_GisketchSearchIndex__AddScreenEntries(entries,screen,includeScreenEntry,method)
      ;
    }
  }
  return entries;
}


// Gisketch.Aottg2UI.Search.GisketchSearchIndex$$EntriesForScreens
// il2cpp: System_Collections_Generic_List_GisketchSearchEntry__o* Gisketch_Aottg2UI_Search_GisketchSearchIndex__EntriesForScreens (Gisketch_Aottg2UI_Data_GisketchManifestDefinition_o* manifest, System_Collections_Generic_IEnumerable_string__o* screenIds, bool includeScreenEntry, const MethodInfo* method);
// 0x5347f80
// eh: try 0x534829f..0x53483e7 -> pad 0x534874c (+3 call sites) catch Il2CppExceptionWrapper, cleanup [compiler noexcept guard]
// eh: try 0x534841f..0x5348590 -> pad 0x5348635 (+10 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x53485b2..0x53485bc -> pad 0x534873e catch Il2CppExceptionWrapper, cleanup [compiler noexcept guard]
// eh: try 0x53485db..0x5348630 -> pad 0x534864b (+8 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5348679..0x5348724 -> pad 0x534872c (+4 call sites) catch Il2CppExceptionWrapper, cleanup [compiler noexcept guard]
// eh: try 0x5348732..0x534873c -> pad 0x5348789 catch (...) [compiler noexcept guard]
// eh: try 0x534876a..0x534876f -> pad 0x5348774 cleanup
// eh: try 0x5348777..0x5348781 -> pad 0x5348789 catch (...) [compiler noexcept guard]
// asm: 79 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x53480cf: cmp byte ptr [rip + 0x21fa7b0], 0
// asm:   0x53480d6: je 0x53481d0
// asm:   0x5348240: lea r14, [rip + 0x1fb5e81]  ; "|"
// asm:   0x5348247: jmp 0x534825e
// asm:   0x53485a0: mov ebx, 3
// asm:   0x53485a5: xor r15d, r15d
// asm:   0x53485a8: lea rax, [rip + 0x1f457f9]  ; MethodInfo_System_Collections_Generic_List_Enumerator_GisketchSearchEntry_Dispose
// asm:   0x53485af: mov rsi, qword ptr [rax]
// asm:   0x53485b2: lea rdi, [rsp + 0x20]
// asm:   0x53485b7: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x53485bc: test r15, r15
// asm:   0x53485bf: jne 0x534871c
// asm:   0x53485c5: cmp ebx, 3
// asm:   0x53485c8: je 0x5348250
// asm:   0x53485ce: test ebx, ebx
// asm:   0x53485d0: je 0x5348250
// asm:   0x53485d6: jmp 0x5348683
// asm:   0x5348635: jmp 0x5348657
// asm:   0x5348637: jmp 0x5348657
// asm:   0x5348639: jmp 0x5348657
// asm:   0x534863b: jmp 0x5348657
// asm:   0x534863d: jmp 0x5348657
// asm:   0x534863f: jmp 0x5348657
// asm:   0x5348641: jmp 0x5348657
// asm:   0x5348643: jmp 0x5348657
// asm:   0x5348645: jmp 0x5348657
// asm:   0x5348647: jmp 0x5348657
// asm:   0x5348649: jmp 0x5348657
// asm:   0x534864b: jmp 0x5348657
// asm:   0x534864d: jmp 0x5348657
// asm:   0x534864f: jmp 0x5348657
// asm:   0x5348651: jmp 0x5348657
// asm:   0x5348653: jmp 0x5348657
// asm:   0x5348655: jmp 0x5348657
// asm:   0x5348657: mov r15, rdx
// asm:   0x534865a: mov rbx, rax
// asm:   0x534865d: cmp r15d, 1
// asm:   0x5348661: jne 0x5348732
// asm:   0x5348667: mov rdi, rbx
// asm:   0x534866a: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x534866f: mov r15, qword ptr [rax]
// asm:   0x5348672: mov qword ptr [rsp + 0x40], r15
// asm:   0x5348677: xor ebx, ebx
// asm:   0x5348679: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x534867e: jmp 0x53485a8
// asm:   0x534871c: mov rdi, r15
// asm:   0x534871f: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5348724: mov rdi, rbp
// asm:   0x5348727: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x534872c: mov r15, rdx
// asm:   0x534872f: mov rbx, rax
// asm:   0x5348732: lea rdi, [rsp + 0x40]
// asm:   0x5348737: call 0x2d4a3c0  ; il2cpp_runtime_helper_02d4a3c0()
// asm:   0x534873c: jmp 0x5348754
// asm:   0x534873e: jmp 0x534874e
// asm:   0x5348740: jmp 0x534874e
// asm:   0x5348742: jmp 0x534874e
// asm:   0x5348744: jmp 0x534874e
// asm:   0x5348746: jmp 0x534874e
// asm:   0x5348748: jmp 0x534874e
// asm:   0x534874a: jmp 0x534874e
// asm:   0x534874c: jmp 0x534874e
// asm:   0x534874e: mov r15, rdx
// asm:   0x5348751: mov rbx, rax
// asm:   0x5348754: cmp r15d, 1
// asm:   0x5348758: jne 0x5348777
// asm:   0x534875a: mov rdi, rbx
// asm:   0x534875d: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5348762: mov rbp, qword ptr [rax]
// asm:   0x5348765: mov qword ptr [rsp + 0x58], rbp
// asm:   0x534876a: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x534876f: jmp 0x5348685
// asm:   0x5348774: mov rbx, rax
// asm:   0x5348777: lea rdi, [rsp + 0x58]
// asm:   0x534877c: call 0x2d4a3f0  ; il2cpp_runtime_helper_02d4a3f0()
// asm:   0x5348781: mov rdi, rbx
// asm:   0x5348784: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5348789: mov rdi, rax
// asm:   0x534878c: call 0x2ab61e0  ; __clang_call_terminate()

System_Collections_Generic_List_GisketchSearchEntry__o *
Gisketch_Aottg2UI_Search_GisketchSearchIndex__EntriesForScreens
          (Gisketch_Aottg2UI_Data_GisketchManifestDefinition_o *manifest,
          System_Collections_Generic_IEnumerable_string__o *screenIds,bool includeScreenEntry,
          MethodInfo *method)

{
  int32_t *piVar1;
  uint32_t uVar2;
  uint uVar3;
  System_OrdinalIgnoreCaseComparer_o *comparer;
  Gisketch_Aottg2UI_Search_GisketchSearchIndex__EmptyScreenIds_d__4_c *pGVar4;
  Il2CppRuntimeInterfaceOffsetPair *pIVar5;
  Il2CppClass *pIVar6;
  Gisketch_Aottg2UI_Search_GisketchSearchEntry_array *pGVar7;
  Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *item;
  char cVar8;
  bool bVar9;
  int32_t iVar10;
  System_Collections_Generic_List_GisketchSearchEntry__o *__this;
  System_Collections_Generic_HashSet_string__o *__this_00;
  VirtualInvokeData *pVVar11;
  Il2CppObject *pIVar12;
  MethodInfo *pMVar13;
  System_String_o *pSVar14;
  System_Collections_Generic_List_GisketchSearchEntry__o *entries;
  Gisketch_Aottg2UI_Data_GisketchScreenDefinition_o *screen;
  System_String_array *values;
  ulong uVar15;
  undefined7 in_register_00000011;
  long lVar16;
  Il2CppObject *local_90;
  undefined4 local_84;
  Gisketch_Aottg2UI_Data_GisketchManifestDefinition_o *local_80;
  undefined1 local_78 [8];
  System_Collections_Generic_List_Enumerator_object__o *pSStack_70;
  Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *local_68;
  undefined1 local_58 [16];
  Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *local_48;
  undefined8 local_40;
  Il2CppObject **local_38;
  
  local_84 = (undefined4)CONCAT71(in_register_00000011,includeScreenEntry);
  local_80 = manifest;
  if (Il2CppMethodInitialized_075428e1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_GisketchSearchEntry_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_GisketchSearchEntry_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_GisketchSearchEntry_get_Current);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_string_ctor_7191708);
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
    Il2CppMethodInitialized_075428e1 = '\x01';
  }
  local_90 = (Il2CppObject *)0x0;
  local_78 = (undefined1  [8])0x0;
  pSStack_70 = (System_Collections_Generic_List_Enumerator_object__o *)0x0;
  local_68 = (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *)0x0;
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_GisketchSearchEntry);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this,
             (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_GisketchSearchEntry_ctor);
  if ((TypeInfo_System_StringComparer->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_StringComparer);
  }
  if (Il2CppMethodInitialized_07542886 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_StringComparer);
    Il2CppMethodInitialized_07542886 = '\x01';
    uVar2 = (TypeInfo_System_StringComparer->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar2 = (((Il2CppClass *)TypeInfo_System_StringComparer)->_2).cctor_finished_or_no_cctor;
  }
  if (uVar2 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_StringComparer);
  }
  comparer = TypeInfo_System_StringComparer->static_fields->s_ordinalIgnoreCase;
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor_4fb2f30
            ((System_Collections_Generic_HashSet_object__o *)__this_00,
             (System_Collections_Generic_IEqualityComparer_T__o *)comparer,
             (MethodInfo_4FB2F30 *)MethodInfo_System_Collections_Generic_HashSet_string_ctor_7191708);
  if (screenIds == (System_Collections_Generic_IEnumerable_string__o *)0x0) {
    if (Il2CppMethodInitialized_075428e3 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&TypeInfo_Gisketch_Aottg2UI_Search_GisketchSearchIndex_EmptyScreenIds_d__4);
      Il2CppMethodInitialized_075428e3 = '\x01';
    }
    screenIds = (System_Collections_Generic_IEnumerable_string__o *)
                il2cpp_codegen_object_new
                          ((Il2CppClass *)
                           TypeInfo_Gisketch_Aottg2UI_Search_GisketchSearchIndex_EmptyScreenIds_d__4);
    System_Object___ctor((Il2CppObject *)screenIds,(MethodInfo *)0x0);
    (((Gisketch_Aottg2UI_Search_GisketchSearchIndex__EmptyScreenIds_d__4_o *)screenIds)->fields).__1__state =
         -2;
    iVar10 = System_Environment__get_CurrentManagedThreadId((MethodInfo *)0x0);
    (((Gisketch_Aottg2UI_Search_GisketchSearchIndex__EmptyScreenIds_d__4_o *)screenIds)->fields).
    __l__initialThreadId = iVar10;
  }
  pGVar4 = ((Gisketch_Aottg2UI_Search_GisketchSearchIndex__EmptyScreenIds_d__4_o *)screenIds)->klass;
  uVar15 = (ulong)(pGVar4->_2).interface_offsets_count;
  if (uVar15 != 0) {
    pIVar5 = (pGVar4->_1).interfaceOffsets;
    lVar16 = 0;
    do {
      if (*(System_Collections_Generic_IEnumerable_string__c **)((long)&pIVar5->interfaceType + lVar16) ==
          TypeInfo_System_Collections_Generic_IEnumerable_string) {
        pVVar11 = (VirtualInvokeData *)
                  &(&(pGVar4->vtable)._0_Equals)[*(int *)((long)&pIVar5->offset + lVar16)].methodPtr;
        goto label_05348213;
      }
      lVar16 = lVar16 + 0x10;
    } while (uVar15 * 0x10 != lVar16);
  }
  pVVar11 = GetInterfaceInvokeDataFromVTableSlowPath
                      ((Il2CppObject *)screenIds,
                       (Il2CppClass *)TypeInfo_System_Collections_Generic_IEnumerable_string,0);
label_05348213:
  pIVar12 = (*pVVar11->methodPtr)((Il2CppObject *)screenIds,pVVar11->method);
  local_40 = 0;
  local_38 = &local_90;
  do {
    local_90 = pIVar12;
    if (pIVar12 == (Il2CppObject *)0x0) {
      ThrowNullReferenceException();
    }
    pIVar6 = pIVar12->klass;
    uVar15 = (ulong)(pIVar6->_2).interface_offsets_count;
    if (uVar15 != 0) {
      pIVar5 = (pIVar6->_1).interfaceOffsets;
      lVar16 = 0;
      do {
        if (*(Il2CppClass **)((long)&pIVar5->interfaceType + lVar16) ==
            (Il2CppClass *)TypeInfo_System_Collections_IEnumerator) {
          pVVar11 = (VirtualInvokeData *)&pIVar6->vtable[*(int *)((long)&pIVar5->offset + lVar16)].methodPtr;
          goto label_053482c3;
        }
        lVar16 = lVar16 + 0x10;
      } while (uVar15 * 0x10 != lVar16);
    }
    pVVar11 = GetInterfaceInvokeDataFromVTableSlowPath
                        (pIVar12,(Il2CppClass *)TypeInfo_System_Collections_IEnumerator,0);
label_053482c3:
    cVar8 = (*pVVar11->methodPtr)(pIVar12,pVVar11->method);
    pIVar12 = local_90;
    if (cVar8 == '\0') {
      if (local_90 == (Il2CppObject *)0x0) {
        return __this;
      }
      pIVar6 = local_90->klass;
      uVar15 = (ulong)(pIVar6->_2).interface_offsets_count;
      if (uVar15 == 0) goto label_053486cf;
      pIVar5 = (pIVar6->_1).interfaceOffsets;
      lVar16 = 0;
      break;
    }
    if (local_90 == (Il2CppObject *)0x0) {
      ThrowNullReferenceException();
    }
    pIVar6 = local_90->klass;
    uVar15 = (ulong)(pIVar6->_2).interface_offsets_count;
    if (uVar15 != 0) {
      pIVar5 = (pIVar6->_1).interfaceOffsets;
      lVar16 = 0;
      do {
        if (*(System_Collections_Generic_IEnumerator_string__c **)((long)&pIVar5->interfaceType + lVar16) ==
            TypeInfo_System_Collections_Generic_IEnumerator_string) {
          pMVar13 = (MethodInfo *)&pIVar6->vtable[*(int *)((long)&pIVar5->offset + lVar16)].methodPtr;
          goto label_05348343;
        }
        lVar16 = lVar16 + 0x10;
      } while (uVar15 * 0x10 != lVar16);
    }
    pMVar13 = (MethodInfo *)
              GetInterfaceInvokeDataFromVTableSlowPath
                        (local_90,(Il2CppClass *)TypeInfo_System_Collections_Generic_IEnumerator_string,0);
label_05348343:
    pSVar14 = (*pMVar13->methodPointer)(pIVar12,(MethodInfo *)pMVar13->virtualMethodPointer);
    if (Il2CppMethodInitialized_075428e0 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_System_Collections_Generic_List_GisketchSearchEntry_ctor);
      il2cpp_codegen_initialize_runtime_metadata
                (&TypeInfo_System_Collections_Generic_List_GisketchSearchEntry);
      Il2CppMethodInitialized_075428e0 = '\x01';
    }
    entries = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_GisketchSearchEntry);
    System_Collections_Generic_List_object____ctor
              ((System_Collections_Generic_List_object__o *)entries,
               (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_GisketchSearchEntry_ctor);
    if ((local_80 != (Gisketch_Aottg2UI_Data_GisketchManifestDefinition_o *)0x0) &&
       (screen = Gisketch_Aottg2UI_Data_GisketchManifestDefinition__FindScreen
                           (local_80,pSVar14,(MethodInfo *)0x0),
       screen != (Gisketch_Aottg2UI_Data_GisketchScreenDefinition_o *)0x0)) {
      Gisketch_Aottg2UI_Search_GisketchSearchIndex__AddScreenEntries(entries,screen,local_84._0_1_,pMVar13);
    }
    if (entries == (System_Collections_Generic_List_GisketchSearchEntry__o *)0x0) {
      ThrowNullReferenceException();
    }
    System_Collections_Generic_List_object___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)local_58,
               (System_Collections_Generic_List_object__o *)entries,
               (MethodInfo_395E050 *)
               MethodInfo_System_Collections_Generic_List_GisketchSearchEntry_GetEnumerator);
    local_68 = local_48;
    local_78 = (undefined1  [8])local_58._0_8_;
    pSStack_70 = (System_Collections_Generic_List_Enumerator_object__o *)local_58._8_8_;
    local_58._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
    local_58._8_8_ = (System_Collections_Generic_List_Enumerator_object__o *)local_78;
label_0534842a:
    bVar9 = System_Collections_Generic_List_Enumerator_object___MoveNext
                      ((System_Collections_Generic_List_Enumerator_object__o *)local_78,
                       (MethodInfo_4C45C50 *)
                       MethodInfo_System_Collections_Generic_List_Enumerator_GisketchSearchEntry_MoveNext);
    item = local_68;
    if (bVar9) {
      values = (System_String_array *)SZArrayNew(TypeInfo_string_array,5);
      if (item == (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *)0x0) {
        ThrowNullReferenceException();
      }
      if (values == (System_String_array *)0x0) {
        ThrowNullReferenceException();
      }
      if ((int)values->max_length == 0) {
        ThrowIndexOutOfRangeException();
      }
      values->m_Items[0] = (item->fields)._ScreenId_k__BackingField;
      Il2CppCodeGenWriteBarrier(values->m_Items);
      if ((values->max_length & 0xfffffffe) == 0) {
        ThrowIndexOutOfRangeException();
      }
      values->m_Items[1] = "|";
      Il2CppCodeGenWriteBarrier(values->m_Items + 1);
      if ((uint)values->max_length < 3) {
        ThrowIndexOutOfRangeException();
      }
      values->m_Items[2] = (item->fields)._TargetId_k__BackingField;
      Il2CppCodeGenWriteBarrier(values->m_Items + 2);
      if ((values->max_length & 0xfffffffc) == 0) {
        ThrowIndexOutOfRangeException();
      }
      values->m_Items[3] = "|";
      Il2CppCodeGenWriteBarrier(values->m_Items + 3);
      if ((uint)values->max_length < 5) {
        ThrowIndexOutOfRangeException();
      }
      values->m_Items[4] = (item->fields)._Kind_k__BackingField;
      Il2CppCodeGenWriteBarrier(values->m_Items + 4);
      pSVar14 = System_String__Concat_5302910(values,(MethodInfo *)0x0);
      if (__this_00 == (System_Collections_Generic_HashSet_string__o *)0x0) {
        ThrowNullReferenceException();
      }
      bVar9 = System_Collections_Generic_HashSet_object___Add
                        ((System_Collections_Generic_HashSet_object__o *)__this_00,(Il2CppObject *)pSVar14,
                         (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
      pMVar13 = MethodInfo_System_Collections_Generic_List_GisketchSearchEntry_Add;
      if (bVar9) {
        if (__this != (System_Collections_Generic_List_GisketchSearchEntry__o *)0x0) {
          piVar1 = &(__this->fields)._version;
          *piVar1 = *piVar1 + 1;
          pGVar7 = (__this->fields)._items;
          if (pGVar7 != (Gisketch_Aottg2UI_Search_GisketchSearchEntry_array *)0x0) {
            uVar3 = (__this->fields)._size;
            if (uVar3 < (uint)pGVar7->max_length) {
              (__this->fields)._size = uVar3 + 1;
              pGVar7->m_Items[(int)uVar3] = item;
              Il2CppCodeGenWriteBarrier(pGVar7->m_Items + (int)uVar3);
            }
            else {
              System_Collections_Generic_List_object___AddWithResize
                        ((System_Collections_Generic_List_object__o *)__this,(Il2CppObject *)item,
                         (MethodInfo_395D230 *)pMVar13->klass->rgctx_data[0xe].method);
            }
            goto label_0534842a;
          }
        }
        ThrowNullReferenceException();
      }
      goto label_0534842a;
    }
    System_Collections_Generic_List_Enumerator_object___Dispose
              ((System_Collections_Generic_List_Enumerator_object__o *)local_78,
               (MethodInfo_4C45C40 *)
               MethodInfo_System_Collections_Generic_List_Enumerator_GisketchSearchEntry_Dispose);
    pIVar12 = local_90;
  } while( true );
  while (lVar16 = lVar16 + 0x10, uVar15 * 0x10 != lVar16) {
    if (*(System_IDisposable_c **)((long)&pIVar5->interfaceType + lVar16) == TypeInfo_System_IDisposable) {
      pVVar11 = (VirtualInvokeData *)&pIVar6->vtable[*(int *)((long)&pIVar5->offset + lVar16)].methodPtr;
      goto label_053486ed;
    }
  }
label_053486cf:
  pVVar11 = GetInterfaceInvokeDataFromVTableSlowPath(local_90,(Il2CppClass *)TypeInfo_System_IDisposable,0);
label_053486ed:
  (*pVVar11->methodPtr)(pIVar12,pVVar11->method);
  return __this;
}


// Gisketch.Aottg2UI.Search.GisketchSearchIndex$$AddScreenEntries
// il2cpp: void Gisketch_Aottg2UI_Search_GisketchSearchIndex__AddScreenEntries (System_Collections_Generic_List_GisketchSearchEntry__o* entries, Gisketch_Aottg2UI_Data_GisketchScreenDefinition_o* screen, bool includeScreenEntry, const MethodInfo* method);
// 0x5347ba0
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5347c5a: test r12b, r12b
// asm:   0x5347c5d: je 0x5347d95

void Gisketch_Aottg2UI_Search_GisketchSearchIndex__AddScreenEntries
               (System_Collections_Generic_List_GisketchSearchEntry__o *entries,
               Gisketch_Aottg2UI_Data_GisketchScreenDefinition_o *screen,bool includeScreenEntry,
               MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_String_o *value;
  System_String_o *pSVar3;
  System_String_o *targetId;
  Gisketch_Aottg2UI_Search_GisketchSearchEntry_array *pGVar4;
  MethodInfo *pMVar5;
  bool bVar6;
  Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *__this;
  System_String_o *pSVar7;
  MethodInfo *in_R9;
  MethodInfo *in_stack_ffffffffffffffb8;
  
  if (Il2CppMethodInitialized_075428e2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Search_GisketchSearchEntry);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GisketchSearchEntry_Add);
    il2cpp_codegen_initialize_runtime_metadata(&"screen");
    il2cpp_codegen_initialize_runtime_metadata(&"menuList");
    Il2CppMethodInitialized_075428e2 = '\x01';
  }
  if ((entries == (System_Collections_Generic_List_GisketchSearchEntry__o *)0x0) ||
     (screen == (Gisketch_Aottg2UI_Data_GisketchScreenDefinition_o *)0x0)) {
    return;
  }
  value = (screen->fields).searchTitle;
  pSVar3 = (screen->fields).id;
  pSVar7 = (screen->fields).title;
  bVar6 = System_String__IsNullOrEmpty(pSVar7,(MethodInfo *)0x0);
  if ((bVar6) && (pSVar7 = pSVar3, pSVar3 == (System_String_o *)0x0)) {
    pSVar7 = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
  }
  bVar6 = System_String__IsNullOrEmpty(value,(MethodInfo *)0x0);
  if ((bVar6) && (value = pSVar7, pSVar7 == (System_String_o *)0x0)) {
    value = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
  }
  if (includeScreenEntry) {
    pSVar3 = (screen->fields).id;
    pSVar7 = (screen->fields).searchGroup;
    bVar6 = System_String__IsNullOrEmpty(pSVar7,(MethodInfo *)0x0);
    if ((bVar6) && (pSVar7 = pSVar3, pSVar3 == (System_String_o *)0x0)) {
      pSVar7 = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
    }
    in_R9 = (MethodInfo *)**(undefined8 **)(g_data_07556758 + 0xb8);
    targetId = (screen->fields).id;
    __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Search_GisketchSearchEntry);
    Gisketch_Aottg2UI_Search_GisketchSearchEntry___ctor_5246e10
              (__this,pSVar3,value,pSVar7,(System_String_o *)in_R9,(System_String_o *)in_R9,targetId,value,
               (System_String_o *)in_R9,"menuList","screen",
               (UnityEngine_GameObject_o *)0x0,in_stack_ffffffffffffffb8);
    pMVar5 = MethodInfo_System_Collections_Generic_List_GisketchSearchEntry_Add;
    piVar1 = &(entries->fields)._version;
    *piVar1 = *piVar1 + 1;
    pGVar4 = (entries->fields)._items;
    if (pGVar4 == (Gisketch_Aottg2UI_Search_GisketchSearchEntry_array *)0x0) {
      ThrowNullReferenceException();
    }
    uVar2 = (entries->fields)._size;
    if (uVar2 < (uint)pGVar4->max_length) {
      (entries->fields)._size = uVar2 + 1;
      pGVar4->m_Items[(int)uVar2] = __this;
      Il2CppCodeGenWriteBarrier(pGVar4->m_Items + (int)uVar2);
    }
    else {
      System_Collections_Generic_List_object___AddWithResize
                ((System_Collections_Generic_List_object__o *)entries,(Il2CppObject *)__this,
                 (MethodInfo_395D230 *)pMVar5->klass->rgctx_data[0xe].method);
    }
  }
  Gisketch_Aottg2UI_Search_GisketchSearchIndex__AddNodeEntries
            (entries,screen,(screen->fields).root,(System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8),
             (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8),in_R9);
  return;
}


// Gisketch.Aottg2UI.Search.GisketchSearchIndex$$EmptyScreenIds
// il2cpp: System_Collections_Generic_IEnumerable_string__o* Gisketch_Aottg2UI_Search_GisketchSearchIndex__EmptyScreenIds (const MethodInfo* method);
// 0x53487a0

System_Collections_Generic_IEnumerable_string__o *
Gisketch_Aottg2UI_Search_GisketchSearchIndex__EmptyScreenIds(MethodInfo *method)

{
  int32_t iVar1;
  Gisketch_Aottg2UI_Search_GisketchSearchIndex__EmptyScreenIds_d__4_o *__this;
  
  if (Il2CppMethodInitialized_075428e3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Search_GisketchSearchIndex_EmptyScreenIds_d__4);
    Il2CppMethodInitialized_075428e3 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Search_GisketchSearchIndex_EmptyScreenIds_d__4
                     );
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = -2;
  iVar1 = System_Environment__get_CurrentManagedThreadId((MethodInfo *)0x0);
  (__this->fields).__l__initialThreadId = iVar1;
  return (System_Collections_Generic_IEnumerable_string__o *)__this;
}


// Gisketch.Aottg2UI.Search.GisketchSearchIndex$$WithoutDuplicateMainMenuScreenButtons
// il2cpp: System_Collections_Generic_List_GisketchSearchEntry__o* Gisketch_Aottg2UI_Search_GisketchSearchIndex__WithoutDuplicateMainMenuScreenButtons (System_Collections_Generic_List_GisketchSearchEntry__o* entries, System_Collections_Generic_HashSet_string__o* screenTitles, const MethodInfo* method);
// 0x5347de0

System_Collections_Generic_List_GisketchSearchEntry__o *
Gisketch_Aottg2UI_Search_GisketchSearchIndex__WithoutDuplicateMainMenuScreenButtons
          (System_Collections_Generic_List_GisketchSearchEntry__o *entries,
          System_Collections_Generic_HashSet_string__o *screenTitles,MethodInfo *method)

{
  System_Collections_Generic_HashSet_string__o *pSVar1;
  Gisketch_Aottg2UI_Search_GisketchSearchIndex___c__DisplayClass5_0_o *__this;
  System_Predicate_T__o *match;
  
  if (Il2CppMethodInitialized_075428e4 == '\0') {
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
    Il2CppMethodInitialized_075428e4 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Search_GisketchSearchIndex_c__DisplayClass5_0)
  ;
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  if (__this == (Gisketch_Aottg2UI_Search_GisketchSearchIndex___c__DisplayClass5_0_o *)0x0) {
    ThrowNullReferenceException();
  }
  (__this->fields).screenTitles = screenTitles;
  Il2CppCodeGenWriteBarrier(&(__this->fields).screenTitles);
  if ((((entries != (System_Collections_Generic_List_GisketchSearchEntry__o *)0x0) &&
       ((entries->fields)._size != 0)) &&
      (pSVar1 = (__this->fields).screenTitles, pSVar1 != (System_Collections_Generic_HashSet_string__o *)0x0))
     && ((pSVar1->fields)._count != 0)) {
    match = (System_Predicate_T__o *)
            il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Predicate_GisketchSearchEntry);
    System_Predicate_object____ctor
              ((System_Predicate_object__o *)match,(Il2CppObject *)__this,
               (intptr_t)
               MethodInfo_Gisketch_Aottg2UI_Search_GisketchSearchIndex_c__DisplayClass5_0_WithoutDuplicateMainMenuScreenBu
               ,(MethodInfo_3DC95B0 *)0x0);
    System_Collections_Generic_List_object___RemoveAll
              ((System_Collections_Generic_List_object__o *)entries,match,
               (MethodInfo_395EF50 *)MethodInfo_System_Collections_Generic_List_GisketchSearchEntry_RemoveAll)
    ;
  }
  return entries;
}


// Gisketch.Aottg2UI.Search.GisketchSearchIndex$$AddNodeEntries
// il2cpp: void Gisketch_Aottg2UI_Search_GisketchSearchIndex__AddNodeEntries (System_Collections_Generic_List_GisketchSearchEntry__o* entries, Gisketch_Aottg2UI_Data_GisketchScreenDefinition_o* screen, Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* node, System_String_o* sectionId, System_String_o* sectionTitle, const MethodInfo* method);
// 0x53487f0
// asm: 4 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5348a53: mov rbx, rbp
// asm:   0x5348a56: jmp 0x5348b1f
// asm:   0x5348a80: jmp 0x53489c0
// asm:   0x5348fcf: nop 

void Gisketch_Aottg2UI_Search_GisketchSearchIndex__AddNodeEntries
               (System_Collections_Generic_List_GisketchSearchEntry__o *entries,
               Gisketch_Aottg2UI_Data_GisketchScreenDefinition_o *screen,
               Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *node,System_String_o *sectionId,
               System_String_o *sectionTitle,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  Gisketch_Aottg2UI_Search_GisketchSearchEntry_array *pGVar3;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *pGVar4;
  bool bVar5;
  Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *pGVar6;
  System_String_o *pSVar7;
  System_String_o *pSVar8;
  Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *__this;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_Fields *pGVar9;
  Gisketch_Aottg2UI_Data_GisketchSearchDefinition_Fields *pGVar10;
  System_String_o *pSVar11;
  ulong uVar12;
  System_String_o **ppSVar13;
  MethodInfo *pMVar14;
  MethodInfo *value;
  System_String_o *pSVar15;
  System_String_o *pSVar16;
  System_String_o *pSVar17;
  Gisketch_Aottg2UI_Data_GisketchScreenDefinition_o *method_00;
  ulong uVar18;
  MethodInfo *in_stack_ffffffffffffff78;
  System_String_o *local_78;
  System_String_o *local_68;
  
  method_00 = screen;
  if (Il2CppMethodInitialized_075428e5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Search_GisketchSearchEntry);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GisketchSearchEntry_Add);
    il2cpp_codegen_initialize_runtime_metadata(&"section");
    Il2CppMethodInitialized_075428e5 = '\x01';
  }
  if (node == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    return;
  }
  pGVar6 = (node->fields).search;
  if ((pGVar6 != (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)0x0) &&
     ((pGVar6->fields).hidden != false)) {
    return;
  }
  if (Il2CppMethodInitialized_075428e7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"section");
    Il2CppMethodInitialized_075428e7 = '\x01';
    pGVar6 = (node->fields).search;
  }
  if (pGVar6 == (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)0x0) {
label_053489f4:
    if (Il2CppMethodInitialized_075428e9 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&"setting");
      Il2CppMethodInitialized_075428e9 = '\x01';
    }
    bVar5 = Gisketch_Aottg2UI_Search_GisketchSearchIndex__IsControl(node,(MethodInfo *)method_00);
    if (!bVar5) {
      pGVar6 = (node->fields).search;
      if ((pGVar6 == (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)0x0) ||
         (bVar5 = System_String__IsNullOrEmpty((pGVar6->fields).kind,(MethodInfo *)0x0), bVar5)) {
        pGVar9 = &node->fields;
      }
      else {
        pGVar6 = (node->fields).search;
        if (pGVar6 == (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)0x0) goto label_0534900f;
        pGVar9 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_Fields *)&(pGVar6->fields).kind;
      }
      method_00 = (Gisketch_Aottg2UI_Data_GisketchScreenDefinition_o *)"setting";
      bVar5 = System_String__Equals_52ffe30(pGVar9->type,"setting",5,(MethodInfo *)0x0);
      if (!bVar5) goto label_05348f58;
    }
    bVar5 = Gisketch_Aottg2UI_Search_GisketchSearchIndex__IsExplicitSearch(node,(MethodInfo *)method_00);
    if ((!bVar5) || (bVar5 = System_String__IsNullOrEmpty((node->fields).id,(MethodInfo *)0x0), bVar5))
    goto label_05348f58;
    pGVar6 = (node->fields).search;
    if ((pGVar6 == (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)0x0) ||
       (bVar5 = System_String__IsNullOrEmpty((pGVar6->fields).kind,(MethodInfo *)0x0), bVar5)) {
      pGVar9 = &node->fields;
    }
    else {
      pGVar6 = (node->fields).search;
      if (pGVar6 == (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)0x0) goto label_0534900f;
      pGVar9 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_Fields *)&(pGVar6->fields).kind;
    }
    if (screen == (Gisketch_Aottg2UI_Data_GisketchScreenDefinition_o *)0x0) goto label_0534900f;
    pSVar8 = pGVar9->type;
    pSVar7 = (screen->fields).id;
    pSVar15 = (screen->fields).title;
    local_78 = (screen->fields).searchTitle;
    bVar5 = System_String__IsNullOrEmpty(pSVar15,(MethodInfo *)0x0);
    if ((bVar5) && (pSVar15 = pSVar7, pSVar7 == (System_String_o *)0x0)) {
      pSVar15 = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
    }
    bVar5 = System_String__IsNullOrEmpty(local_78,(MethodInfo *)0x0);
    if ((bVar5) && (local_78 = pSVar15, pSVar15 == (System_String_o *)0x0)) {
      local_78 = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
    }
    pSVar15 = (screen->fields).id;
    pSVar16 = (screen->fields).searchGroup;
    bVar5 = System_String__IsNullOrEmpty(pSVar16,(MethodInfo *)0x0);
    if ((bVar5) && (pSVar16 = pSVar15, pSVar15 == (System_String_o *)0x0)) {
      pSVar16 = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
    }
    pSVar15 = (node->fields).id;
    pGVar6 = (node->fields).search;
    pSVar11 = pSVar15;
    if (pGVar6 == (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)0x0) {
label_05348dde:
      local_68 = (node->fields).text;
      pSVar17 = (node->fields).placeholder;
      bVar5 = System_String__IsNullOrEmpty(pSVar17,(MethodInfo *)0x0);
      if ((bVar5) && (pSVar17 = pSVar11, pSVar11 == (System_String_o *)0x0)) {
        pSVar17 = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
      }
      pMVar14 = (MethodInfo *)0x0;
      bVar5 = System_String__IsNullOrEmpty(local_68,(MethodInfo *)0x0);
      if ((bVar5) && (local_68 = pSVar17, pSVar17 == (System_String_o *)0x0)) {
        pGVar10 = *(Gisketch_Aottg2UI_Data_GisketchSearchDefinition_Fields **)(g_data_07556758 + 0xb8);
        goto label_05348e5e;
      }
    }
    else {
      pMVar14 = (MethodInfo *)0x0;
      bVar5 = System_String__IsNullOrEmpty((pGVar6->fields).title,(MethodInfo *)0x0);
      if (bVar5) {
        pSVar11 = (node->fields).id;
        goto label_05348dde;
      }
      pGVar6 = (node->fields).search;
      if (pGVar6 == (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)0x0) goto label_0534900f;
      pGVar10 = &pGVar6->fields;
label_05348e5e:
      local_68 = pGVar10->title;
    }
    pSVar11 = Gisketch_Aottg2UI_Search_GisketchSearchIndex__Keywords(node,pMVar14);
    pGVar6 = (node->fields).search;
    if (pGVar6 == (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)0x0) {
      ppSVar13 = *(System_String_o ***)(g_data_07556758 + 0xb8);
    }
    else {
      ppSVar13 = &(pGVar6->fields).icon;
    }
    pSVar17 = *ppSVar13;
    __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Search_GisketchSearchEntry);
    method = (MethodInfo *)sectionTitle;
    Gisketch_Aottg2UI_Search_GisketchSearchEntry___ctor_5246e10
              (__this,pSVar7,local_78,pSVar16,sectionId,sectionTitle,pSVar15,local_68,pSVar11,pSVar17,pSVar8,
               (UnityEngine_GameObject_o *)0x0,in_stack_ffffffffffffff78);
    pMVar14 = MethodInfo_System_Collections_Generic_List_GisketchSearchEntry_Add;
    if (entries == (System_Collections_Generic_List_GisketchSearchEntry__o *)0x0) {
label_0534900f:
      ThrowNullReferenceException();
    }
    piVar1 = &(entries->fields)._version;
    *piVar1 = *piVar1 + 1;
    pGVar3 = (entries->fields)._items;
    if (pGVar3 == (Gisketch_Aottg2UI_Search_GisketchSearchEntry_array *)0x0) goto label_0534900f;
    uVar2 = (entries->fields)._size;
    if (uVar2 < (uint)pGVar3->max_length) {
      (entries->fields)._size = uVar2 + 1;
      pGVar3->m_Items[(int)uVar2] = __this;
      Il2CppCodeGenWriteBarrier(pGVar3->m_Items + (int)uVar2);
      goto label_05348f58;
    }
    pMVar14 = pMVar14->klass->rgctx_data[0xe].method;
  }
  else {
    method_00 = (Gisketch_Aottg2UI_Data_GisketchScreenDefinition_o *)"section";
    bVar5 = System_String__Equals_52ffe30((pGVar6->fields).kind,"section",5,(MethodInfo *)0x0);
    if (!bVar5) goto label_053489f4;
    pGVar6 = (node->fields).search;
    if (pGVar6 == (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)0x0) goto label_0534900f;
    sectionId = (pGVar6->fields).sectionId;
    pSVar8 = (node->fields).id;
    bVar5 = System_String__IsNullOrEmpty(sectionId,(MethodInfo *)0x0);
    if ((bVar5) && (sectionId = pSVar8, pSVar8 == (System_String_o *)0x0)) {
      sectionId = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
    }
    pGVar6 = (node->fields).search;
    if (pGVar6 == (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)0x0) goto label_0534900f;
    value = (MethodInfo *)(pGVar6->fields).title;
    sectionTitle = (pGVar6->fields).sectionTitle;
    pMVar14 = (MethodInfo *)(node->fields).text;
    bVar5 = System_String__IsNullOrEmpty((System_String_o *)value,(MethodInfo *)0x0);
    if ((bVar5) && (value = pMVar14, pMVar14 == (MethodInfo *)0x0)) {
      value = (MethodInfo *)**(undefined8 **)(g_data_07556758 + 0xb8);
    }
    pMVar14 = (MethodInfo *)0x0;
    bVar5 = System_String__IsNullOrEmpty(sectionTitle,(MethodInfo *)0x0);
    if ((bVar5) && (sectionTitle = (System_String_o *)value, value == (MethodInfo *)0x0)) {
      sectionTitle = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
    }
    pGVar6 = (node->fields).search;
    if (pGVar6 == (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)0x0) goto label_0534900f;
    pSVar8 = (pGVar6->fields).keywords;
    if ((pGVar6->fields).autoAddKeywords == false) {
      pSVar7 = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
    }
    else {
      pSVar7 = Gisketch_Aottg2UI_Search_GisketchSearchIndex__HarvestKeywords(node,pMVar14);
    }
    if (Il2CppMethodInitialized_075428eb == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&" ");
      Il2CppMethodInitialized_075428eb = '\x01';
    }
    bVar5 = System_String__IsNullOrEmpty(pSVar8,(MethodInfo *)0x0);
    if (bVar5) {
      pSVar8 = pSVar7;
      if (pSVar7 == (System_String_o *)0x0) {
        pSVar8 = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
      }
    }
    else {
      bVar5 = System_String__IsNullOrEmpty(pSVar7,(MethodInfo *)0x0);
      if (!bVar5) {
        pSVar8 = System_String__Concat_5301f10(pSVar8," ",pSVar7,(MethodInfo *)0x0);
      }
    }
    if (screen == (Gisketch_Aottg2UI_Data_GisketchScreenDefinition_o *)0x0) goto label_0534900f;
    pSVar7 = (screen->fields).id;
    pSVar15 = (screen->fields).title;
    local_78 = (screen->fields).searchTitle;
    bVar5 = System_String__IsNullOrEmpty(pSVar15,(MethodInfo *)0x0);
    if ((bVar5) && (pSVar15 = pSVar7, pSVar7 == (System_String_o *)0x0)) {
      pSVar15 = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
    }
    bVar5 = System_String__IsNullOrEmpty(local_78,(MethodInfo *)0x0);
    if ((bVar5) && (local_78 = pSVar15, pSVar15 == (System_String_o *)0x0)) {
      local_78 = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
    }
    pSVar15 = (screen->fields).id;
    pSVar16 = (screen->fields).searchGroup;
    bVar5 = System_String__IsNullOrEmpty(pSVar16,(MethodInfo *)0x0);
    if ((bVar5) && (pSVar16 = pSVar15, pSVar15 == (System_String_o *)0x0)) {
      pSVar16 = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
    }
    pGVar6 = (node->fields).search;
    if (pGVar6 == (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)0x0) goto label_0534900f;
    pSVar15 = (node->fields).id;
    pSVar11 = (pGVar6->fields).icon;
    __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Search_GisketchSearchEntry);
    method = (MethodInfo *)sectionTitle;
    Gisketch_Aottg2UI_Search_GisketchSearchEntry___ctor_5246e10
              (__this,pSVar7,local_78,pSVar16,sectionId,sectionTitle,pSVar15,sectionTitle,pSVar8,pSVar11,
               "section",(UnityEngine_GameObject_o *)0x0,in_stack_ffffffffffffff78);
    pMVar14 = MethodInfo_System_Collections_Generic_List_GisketchSearchEntry_Add;
    if (entries == (System_Collections_Generic_List_GisketchSearchEntry__o *)0x0) goto label_0534900f;
    piVar1 = &(entries->fields)._version;
    *piVar1 = *piVar1 + 1;
    pGVar3 = (entries->fields)._items;
    if (pGVar3 == (Gisketch_Aottg2UI_Search_GisketchSearchEntry_array *)0x0) goto label_0534900f;
    uVar2 = (entries->fields)._size;
    if (uVar2 < (uint)pGVar3->max_length) {
      (entries->fields)._size = uVar2 + 1;
      pGVar3->m_Items[(int)uVar2] = __this;
      Il2CppCodeGenWriteBarrier(pGVar3->m_Items + (int)uVar2);
      goto label_05348f58;
    }
    pMVar14 = pMVar14->klass->rgctx_data[0xe].method;
  }
  System_Collections_Generic_List_object___AddWithResize
            ((System_Collections_Generic_List_object__o *)entries,(Il2CppObject *)__this,
             (MethodInfo_395D230 *)pMVar14);
label_05348f58:
  pGVar4 = (node->fields).children;
  if ((pGVar4 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)0x0) && (0 < (int)pGVar4->max_length))
  {
    uVar12 = pGVar4->max_length & 0xffffffff;
    uVar18 = 0;
    do {
      if (uVar12 <= uVar18) goto label_0534900a;
      Gisketch_Aottg2UI_Search_GisketchSearchIndex__AddNodeEntries
                (entries,screen,pGVar4->m_Items[uVar18],sectionId,sectionTitle,method);
      uVar18 = uVar18 + 1;
      uVar2 = (uint)pGVar4->max_length;
      uVar12 = (ulong)uVar2;
    } while ((long)uVar18 < (long)(int)uVar2);
  }
  pGVar4 = (node->fields).deferredChildren;
  if ((pGVar4 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)0x0) && (0 < (int)pGVar4->max_length))
  {
    uVar12 = pGVar4->max_length & 0xffffffff;
    uVar18 = 0;
    do {
      if (uVar12 <= uVar18) {
label_0534900a:
        ThrowIndexOutOfRangeException();
      }
      Gisketch_Aottg2UI_Search_GisketchSearchIndex__AddNodeEntries
                (entries,screen,pGVar4->m_Items[uVar18],sectionId,sectionTitle,method);
      uVar18 = uVar18 + 1;
      uVar2 = (uint)pGVar4->max_length;
      uVar12 = (ulong)uVar2;
    } while ((long)uVar18 < (long)(int)uVar2);
  }
  return;
}


// Gisketch.Aottg2UI.Search.GisketchSearchIndex$$AddChildEntries
// il2cpp: void Gisketch_Aottg2UI_Search_GisketchSearchIndex__AddChildEntries (System_Collections_Generic_List_GisketchSearchEntry__o* entries, Gisketch_Aottg2UI_Data_GisketchScreenDefinition_o* screen, Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array* children, System_String_o* sectionId, System_String_o* sectionTitle, const MethodInfo* method);
// 0x53495c0

void Gisketch_Aottg2UI_Search_GisketchSearchIndex__AddChildEntries
               (System_Collections_Generic_List_GisketchSearchEntry__o *entries,
               Gisketch_Aottg2UI_Data_GisketchScreenDefinition_o *screen,
               Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *children,System_String_o *sectionId,
               System_String_o *sectionTitle,MethodInfo *method)

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
        ThrowIndexOutOfRangeException();
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
// 0x5349100

System_String_o *
Gisketch_Aottg2UI_Search_GisketchSearchIndex__HarvestKeywords
          (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *node,MethodInfo *method)

{
  System_Text_StringBuilder_o *__this;
  System_String_o *pSVar1;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  
  if (Il2CppMethodInitialized_075428e6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Text_StringBuilder);
    Il2CppMethodInitialized_075428e6 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Text_StringBuilder);
  System_Text_StringBuilder___ctor(__this,(MethodInfo *)0x0);
  Gisketch_Aottg2UI_Search_GisketchSearchIndex__AppendText(__this,node,method_00);
  if (node != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    Gisketch_Aottg2UI_Search_GisketchSearchIndex__HarvestChildKeywords
              (__this,(node->fields).children,method_01);
    Gisketch_Aottg2UI_Search_GisketchSearchIndex__HarvestChildKeywords
              (__this,(node->fields).deferredChildren,method_02);
    if (__this != (System_Text_StringBuilder_o *)0x0) {
      pSVar1 = (*(__this->klass->vtable)._3_ToString.methodPtr)
                         (__this,(__this->klass->vtable)._3_ToString.method);
      return pSVar1;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Search.GisketchSearchIndex$$HarvestChildKeywords
// il2cpp: void Gisketch_Aottg2UI_Search_GisketchSearchIndex__HarvestChildKeywords (System_Text_StringBuilder_o* builder, Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array* children, const MethodInfo* method);
// 0x5349760
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5349837: jmp 0x53497d0

void Gisketch_Aottg2UI_Search_GisketchSearchIndex__HarvestChildKeywords
               (System_Text_StringBuilder_o *builder,
               Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *children,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar1;
  Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *pGVar2;
  bool bVar3;
  uint uVar4;
  System_Text_StringBuilder_o *__this;
  System_String_o *value;
  long lVar5;
  uint uVar6;
  MethodInfo *method_00;
  
  if (children != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)0x0) {
    uVar4 = (uint)children->max_length;
    if (builder == (System_Text_StringBuilder_o *)0x0) {
      if (0 < (int)uVar4) {
        lVar5 = 0;
        do {
          if (uVar4 <= (uint)lVar5) goto label_053498b9;
          pGVar1 = children->m_Items[lVar5];
          if (Il2CppMethodInitialized_075428e7 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata(&"section");
            Il2CppMethodInitialized_075428e7 = '\x01';
          }
          if (((pGVar1 == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) ||
              (pGVar2 = (pGVar1->fields).search,
              pGVar2 == (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)0x0)) ||
             (bVar3 = System_String__Equals_52ffe30
                                ((pGVar2->fields).kind,"section",5,(MethodInfo *)0x0), !bVar3))
          goto label_053498b4;
          uVar4 = (uint)children->max_length;
          lVar5 = lVar5 + 1;
        } while ((int)lVar5 < (int)uVar4);
      }
    }
    else if (0 < (int)uVar4) {
      uVar6 = 0;
      do {
        if (uVar4 <= uVar6) {
label_053498b9:
          ThrowIndexOutOfRangeException();
        }
        pGVar1 = children->m_Items[(int)uVar6];
        if (Il2CppMethodInitialized_075428e7 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&"section");
          Il2CppMethodInitialized_075428e7 = '\x01';
        }
        if (pGVar1 == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
label_053498b4:
          ThrowNullReferenceException();
        }
        pGVar2 = (pGVar1->fields).search;
        if ((pGVar2 == (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)0x0) ||
           (bVar3 = System_String__Equals_52ffe30
                              ((pGVar2->fields).kind,"section",5,(MethodInfo *)0x0), !bVar3)) {
          method_00 = (MethodInfo *)&g_data_00000020;
          __this = System_Text_StringBuilder__Append_530f6a0(builder,0x20,(MethodInfo *)0x0);
          value = Gisketch_Aottg2UI_Search_GisketchSearchIndex__HarvestKeywords(pGVar1,method_00);
          if (__this == (System_Text_StringBuilder_o *)0x0) goto label_053498b4;
          System_Text_StringBuilder__Append_530ed80(__this,value,(MethodInfo *)0x0);
        }
        uVar6 = uVar6 + 1;
        uVar4 = (uint)children->max_length;
      } while ((int)uVar6 < (int)uVar4);
    }
  }
  return;
}


// Gisketch.Aottg2UI.Search.GisketchSearchIndex$$AppendText
// il2cpp: void Gisketch_Aottg2UI_Search_GisketchSearchIndex__AppendText (System_Text_StringBuilder_o* builder, Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* node, const MethodInfo* method);
// 0x5349630

void Gisketch_Aottg2UI_Search_GisketchSearchIndex__AppendText
               (System_Text_StringBuilder_o *builder,Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *node,
               MethodInfo *method)

{
  System_String_o *pSVar1;
  Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *pGVar2;
  bool bVar3;
  System_Text_StringBuilder_o *pSVar4;
  
  if (node != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    pSVar1 = (node->fields).text;
    bVar3 = System_String__IsNullOrEmpty(pSVar1,(MethodInfo *)0x0);
    if (!bVar3) {
      if (builder == (System_Text_StringBuilder_o *)0x0) goto label_0534974e;
      pSVar4 = System_Text_StringBuilder__Append_530f6a0(builder,0x20,(MethodInfo *)0x0);
      if (pSVar4 == (System_Text_StringBuilder_o *)0x0) goto label_0534974e;
      System_Text_StringBuilder__Append_530ed80(pSVar4,pSVar1,(MethodInfo *)0x0);
    }
    pSVar1 = (node->fields).placeholder;
    bVar3 = System_String__IsNullOrEmpty(pSVar1,(MethodInfo *)0x0);
    if (!bVar3) {
      if (builder == (System_Text_StringBuilder_o *)0x0) goto label_0534974e;
      pSVar4 = System_Text_StringBuilder__Append_530f6a0(builder,0x20,(MethodInfo *)0x0);
      if (pSVar4 == (System_Text_StringBuilder_o *)0x0) goto label_0534974e;
      System_Text_StringBuilder__Append_530ed80(pSVar4,pSVar1,(MethodInfo *)0x0);
    }
    pSVar1 = (node->fields).tooltip;
    bVar3 = System_String__IsNullOrEmpty(pSVar1,(MethodInfo *)0x0);
    if (!bVar3) {
      if (builder == (System_Text_StringBuilder_o *)0x0) goto label_0534974e;
      pSVar4 = System_Text_StringBuilder__Append_530f6a0(builder,0x20,(MethodInfo *)0x0);
      if (pSVar4 == (System_Text_StringBuilder_o *)0x0) goto label_0534974e;
      System_Text_StringBuilder__Append_530ed80(pSVar4,pSVar1,(MethodInfo *)0x0);
    }
    pGVar2 = (node->fields).search;
    if (pGVar2 != (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)0x0) {
      pSVar1 = (pGVar2->fields).keywords;
      bVar3 = System_String__IsNullOrEmpty(pSVar1,(MethodInfo *)0x0);
      if (!bVar3) {
        if (builder != (System_Text_StringBuilder_o *)0x0) {
          pSVar4 = System_Text_StringBuilder__Append_530f6a0(builder,0x20,(MethodInfo *)0x0);
          if (pSVar4 != (System_Text_StringBuilder_o *)0x0) {
            System_Text_StringBuilder__Append_530ed80(pSVar4,pSVar1,(MethodInfo *)0x0);
            return;
          }
        }
label_0534974e:
        ThrowNullReferenceException();
      }
    }
  }
  return;
}


// Gisketch.Aottg2UI.Search.GisketchSearchIndex$$IsSection
// il2cpp: bool Gisketch_Aottg2UI_Search_GisketchSearchIndex__IsSection (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* node, const MethodInfo* method);
// 0x5349060

bool Gisketch_Aottg2UI_Search_GisketchSearchIndex__IsSection
               (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *node,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *pGVar1;
  bool bVar2;
  
  if (Il2CppMethodInitialized_075428e7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"section");
    Il2CppMethodInitialized_075428e7 = '\x01';
  }
  if (node == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    ThrowNullReferenceException();
  }
  pGVar1 = (node->fields).search;
  if (pGVar1 == (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)0x0) {
    return false;
  }
  bVar2 = System_String__Equals_52ffe30((pGVar1->fields).kind,"section",5,(MethodInfo *)0x0);
  return bVar2;
}


// Gisketch.Aottg2UI.Search.GisketchSearchIndex$$IsControl
// il2cpp: bool Gisketch_Aottg2UI_Search_GisketchSearchIndex__IsControl (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* node, const MethodInfo* method);
// 0x5349920

bool Gisketch_Aottg2UI_Search_GisketchSearchIndex__IsControl
               (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *node,MethodInfo *method)

{
  bool bVar1;
  
  if (Il2CppMethodInitialized_075428e8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"TextArea");
    il2cpp_codegen_initialize_runtime_metadata(&"Select");
    il2cpp_codegen_initialize_runtime_metadata(&"InputField");
    il2cpp_codegen_initialize_runtime_metadata(&"Button");
    il2cpp_codegen_initialize_runtime_metadata(&"Dropdown");
    il2cpp_codegen_initialize_runtime_metadata(&"SpriteButton");
    Il2CppMethodInitialized_075428e8 = '\x01';
  }
  if (node == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    ThrowNullReferenceException();
  }
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


// Gisketch.Aottg2UI.Search.GisketchSearchIndex$$IsSearchTarget
// il2cpp: bool Gisketch_Aottg2UI_Search_GisketchSearchIndex__IsSearchTarget (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* node, const MethodInfo* method);
// 0x5349230

bool Gisketch_Aottg2UI_Search_GisketchSearchIndex__IsSearchTarget
               (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *node,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *pGVar1;
  bool bVar2;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_Fields *pGVar3;
  
  if (Il2CppMethodInitialized_075428e9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"setting");
    Il2CppMethodInitialized_075428e9 = '\x01';
  }
  bVar2 = Gisketch_Aottg2UI_Search_GisketchSearchIndex__IsControl(node,method);
  if (bVar2) {
    return true;
  }
  if (node == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
label_053492b0:
    ThrowNullReferenceException();
  }
  pGVar1 = (node->fields).search;
  if (pGVar1 != (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)0x0) {
    bVar2 = System_String__IsNullOrEmpty((pGVar1->fields).kind,(MethodInfo *)0x0);
    if (!bVar2) {
      pGVar1 = (node->fields).search;
      if (pGVar1 == (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)0x0) goto label_053492b0;
      pGVar3 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_Fields *)&(pGVar1->fields).kind;
      goto label_05349296;
    }
  }
  pGVar3 = &node->fields;
label_05349296:
  bVar2 = System_String__Equals_52ffe30(pGVar3->type,"setting",5,(MethodInfo *)0x0);
  return bVar2;
}


// Gisketch.Aottg2UI.Search.GisketchSearchIndex$$IsExplicitSearch
// il2cpp: bool Gisketch_Aottg2UI_Search_GisketchSearchIndex__IsExplicitSearch (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* node, const MethodInfo* method);
// 0x53492c0

bool Gisketch_Aottg2UI_Search_GisketchSearchIndex__IsExplicitSearch
               (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *node,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *pGVar1;
  bool bVar2;
  bool bVar3;
  
  if (node == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) goto label_0534934d;
  pGVar1 = (node->fields).search;
  if (pGVar1 == (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)0x0) {
    bVar3 = false;
  }
  else {
    bVar2 = System_String__IsNullOrEmpty((pGVar1->fields).title,(MethodInfo *)0x0);
    bVar3 = true;
    if (bVar2) {
      pGVar1 = (node->fields).search;
      if (pGVar1 == (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)0x0) {
label_0534934d:
        ThrowNullReferenceException();
      }
      bVar2 = System_String__IsNullOrEmpty((pGVar1->fields).keywords,(MethodInfo *)0x0);
      if (bVar2) {
        pGVar1 = (node->fields).search;
        if (pGVar1 == (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)0x0) goto label_0534934d;
        bVar2 = System_String__IsNullOrEmpty((pGVar1->fields).kind,(MethodInfo *)0x0);
        if (bVar2) {
          pGVar1 = (node->fields).search;
          if (pGVar1 == (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)0x0) goto label_0534934d;
          bVar3 = System_String__IsNullOrEmpty((pGVar1->fields).icon,(MethodInfo *)0x0);
          bVar3 = !bVar3;
        }
      }
    }
  }
  return bVar3;
}


// Gisketch.Aottg2UI.Search.GisketchSearchIndex$$Kind
// il2cpp: System_String_o* Gisketch_Aottg2UI_Search_GisketchSearchIndex__Kind (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* node, const MethodInfo* method);
// 0x5349360

System_String_o *
Gisketch_Aottg2UI_Search_GisketchSearchIndex__Kind
          (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *node,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *pGVar1;
  bool bVar2;
  
  if (node == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
label_053493a2:
    ThrowNullReferenceException();
  }
  pGVar1 = (node->fields).search;
  if (pGVar1 != (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)0x0) {
    bVar2 = System_String__IsNullOrEmpty((pGVar1->fields).kind,(MethodInfo *)0x0);
    if (!bVar2) {
      pGVar1 = (node->fields).search;
      if (pGVar1 != (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)0x0) {
        return (pGVar1->fields).kind;
      }
      goto label_053493a2;
    }
  }
  return (node->fields).type;
}


// Gisketch.Aottg2UI.Search.GisketchSearchIndex$$Title
// il2cpp: System_String_o* Gisketch_Aottg2UI_Search_GisketchSearchIndex__Title (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* node, const MethodInfo* method);
// 0x53493b0

System_String_o *
Gisketch_Aottg2UI_Search_GisketchSearchIndex__Title
          (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *node,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *pGVar1;
  System_String_o *pSVar2;
  System_String_o *value;
  bool bVar3;
  Gisketch_Aottg2UI_Data_GisketchSearchDefinition_Fields *pGVar4;
  System_String_o *value_00;
  
  if (node == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
label_05349468:
    ThrowNullReferenceException();
  }
  pGVar1 = (node->fields).search;
  if ((pGVar1 == (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)0x0) ||
     (bVar3 = System_String__IsNullOrEmpty((pGVar1->fields).title,(MethodInfo *)0x0), bVar3)) {
    pSVar2 = (node->fields).id;
    value = (node->fields).text;
    value_00 = (node->fields).placeholder;
    bVar3 = System_String__IsNullOrEmpty(value_00,(MethodInfo *)0x0);
    if ((bVar3) && (value_00 = pSVar2, pSVar2 == (System_String_o *)0x0)) {
      value_00 = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
    }
    bVar3 = System_String__IsNullOrEmpty(value,(MethodInfo *)0x0);
    if (!bVar3) {
      return value;
    }
    if (value_00 != (System_String_o *)0x0) {
      return value_00;
    }
    pGVar4 = *(Gisketch_Aottg2UI_Data_GisketchSearchDefinition_Fields **)(g_data_07556758 + 0xb8);
  }
  else {
    pGVar1 = (node->fields).search;
    if (pGVar1 == (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)0x0) goto label_05349468;
    pGVar4 = &pGVar1->fields;
  }
  return pGVar4->title;
}


// Gisketch.Aottg2UI.Search.GisketchSearchIndex$$Keywords
// il2cpp: System_String_o* Gisketch_Aottg2UI_Search_GisketchSearchIndex__Keywords (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* node, const MethodInfo* method);
// 0x5349470
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x534952e: mov rbx, r14
// asm:   0x5349589: jmp 0x53494f3

System_String_o *
Gisketch_Aottg2UI_Search_GisketchSearchIndex__Keywords
          (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *node,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *pGVar1;
  System_String_array *value;
  bool bVar2;
  System_String_o *value_00;
  System_String_o *pSVar3;
  
  if (Il2CppMethodInitialized_075428ea == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&" ");
    Il2CppMethodInitialized_075428ea = '\x01';
  }
  if (node == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    ThrowNullReferenceException();
  }
  pGVar1 = (node->fields).search;
  if (pGVar1 == (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)0x0) {
    pSVar3 = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
    value = (node->fields).options;
  }
  else {
    pSVar3 = (pGVar1->fields).keywords;
    value = (node->fields).options;
  }
  if (value == (System_String_array *)0x0) {
    value_00 = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
  }
  else {
    value_00 = System_String__Join(" ",value,(MethodInfo *)0x0);
  }
  if (Il2CppMethodInitialized_075428eb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&" ");
    Il2CppMethodInitialized_075428eb = '\x01';
  }
  bVar2 = System_String__IsNullOrEmpty(pSVar3,(MethodInfo *)0x0);
  if (bVar2) {
    pSVar3 = value_00;
    if (value_00 == (System_String_o *)0x0) {
      pSVar3 = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
    }
  }
  else {
    bVar2 = System_String__IsNullOrEmpty(value_00,(MethodInfo *)0x0);
    if (!bVar2) {
      pSVar3 = System_String__Concat_5301f10(pSVar3," ",value_00,(MethodInfo *)0x0);
      return pSVar3;
    }
  }
  return pSVar3;
}


// Gisketch.Aottg2UI.Search.GisketchSearchIndex$$ScreenTitle
// il2cpp: System_String_o* Gisketch_Aottg2UI_Search_GisketchSearchIndex__ScreenTitle (Gisketch_Aottg2UI_Data_GisketchScreenDefinition_o* screen, const MethodInfo* method);
// 0x5347af0
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5347b19: jmp 0x5347b2b
// asm:   0x5347b45: mov r15, rbx
// asm:   0x5347b8f: jmp 0x5347b76

System_String_o *
Gisketch_Aottg2UI_Search_GisketchSearchIndex__ScreenTitle
          (Gisketch_Aottg2UI_Data_GisketchScreenDefinition_o *screen,MethodInfo *method)

{
  System_String_o *pSVar1;
  bool bVar2;
  System_String_o *value;
  System_String_o *value_00;
  
  if (screen == (Gisketch_Aottg2UI_Data_GisketchScreenDefinition_o *)0x0) {
    value = (System_String_o *)0x0;
    bVar2 = System_String__IsNullOrEmpty((System_String_o *)0x0,(MethodInfo *)0x0);
    if (!bVar2) {
      bVar2 = System_String__IsNullOrEmpty((System_String_o *)0x0,(MethodInfo *)0x0);
      if (!bVar2) {
        return (System_String_o *)0x0;
      }
      goto label_05347b5e;
    }
label_05347b2b:
    value_00 = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
  }
  else {
    value = (screen->fields).searchTitle;
    pSVar1 = (screen->fields).id;
    value_00 = (screen->fields).title;
    bVar2 = System_String__IsNullOrEmpty(value_00,(MethodInfo *)0x0);
    if ((bVar2) && (value_00 = pSVar1, pSVar1 == (System_String_o *)0x0)) goto label_05347b2b;
  }
  bVar2 = System_String__IsNullOrEmpty(value,(MethodInfo *)0x0);
  if (!bVar2) {
    return value;
  }
  if (value_00 != (System_String_o *)0x0) {
    return value_00;
  }
label_05347b5e:
  return (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
}


// Gisketch.Aottg2UI.Search.GisketchSearchIndex$$SearchGroup
// il2cpp: System_String_o* Gisketch_Aottg2UI_Search_GisketchSearchIndex__SearchGroup (Gisketch_Aottg2UI_Data_GisketchScreenDefinition_o* screen, const MethodInfo* method);
// 0x5347a90
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5347ab7: jmp 0x5347ac8

System_String_o *
Gisketch_Aottg2UI_Search_GisketchSearchIndex__SearchGroup
          (Gisketch_Aottg2UI_Data_GisketchScreenDefinition_o *screen,MethodInfo *method)

{
  System_String_o *pSVar1;
  System_String_o *value;
  bool bVar2;
  
  if (screen == (Gisketch_Aottg2UI_Data_GisketchScreenDefinition_o *)0x0) {
    bVar2 = System_String__IsNullOrEmpty((System_String_o *)0x0,(MethodInfo *)0x0);
    if (!bVar2) {
      return (System_String_o *)0x0;
    }
  }
  else {
    pSVar1 = (screen->fields).id;
    value = (screen->fields).searchGroup;
    bVar2 = System_String__IsNullOrEmpty(value,(MethodInfo *)0x0);
    if (!bVar2) {
      return value;
    }
    if (pSVar1 != (System_String_o *)0x0) {
      return pSVar1;
    }
  }
  return (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
}


// Gisketch.Aottg2UI.Search.GisketchSearchIndex$$Join
// il2cpp: System_String_o* Gisketch_Aottg2UI_Search_GisketchSearchIndex__Join (System_String_o* a, System_String_o* b, const MethodInfo* method);
// 0x53491a0

System_String_o *
Gisketch_Aottg2UI_Search_GisketchSearchIndex__Join(System_String_o *a,System_String_o *b,MethodInfo *method)

{
  bool bVar1;
  System_String_o *pSVar2;
  
  if (Il2CppMethodInitialized_075428eb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&" ");
    Il2CppMethodInitialized_075428eb = '\x01';
  }
  bVar1 = System_String__IsNullOrEmpty(a,(MethodInfo *)0x0);
  if (bVar1) {
    if (b == (System_String_o *)0x0) {
      b = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
    }
  }
  else {
    bVar1 = System_String__IsNullOrEmpty(b,(MethodInfo *)0x0);
    if (!bVar1) {
      pSVar2 = System_String__Concat_5301f10(a," ",b,(MethodInfo *)0x0);
      return pSVar2;
    }
    b = a;
  }
  return b;
}


// Gisketch.Aottg2UI.Search.GisketchSearchIndex$$First
// il2cpp: System_String_o* Gisketch_Aottg2UI_Search_GisketchSearchIndex__First (System_String_o* a, System_String_o* b, const MethodInfo* method);
// 0x53490c0

System_String_o *
Gisketch_Aottg2UI_Search_GisketchSearchIndex__First(System_String_o *a,System_String_o *b,MethodInfo *method)

{
  bool bVar1;
  
  bVar1 = System_String__IsNullOrEmpty(a,(MethodInfo *)0x0);
  if ((bVar1) && (a = b, b == (System_String_o *)0x0)) {
    a = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
  }
  return a;
}


// Gisketch.Aottg2UI.Search.GisketchSearchIndex$$Append
// il2cpp: void Gisketch_Aottg2UI_Search_GisketchSearchIndex__Append (System_Text_StringBuilder_o* builder, System_String_o* value, const MethodInfo* method);
// 0x53498c0

void Gisketch_Aottg2UI_Search_GisketchSearchIndex__Append
               (System_Text_StringBuilder_o *builder,System_String_o *value,MethodInfo *method)

{
  bool bVar1;
  System_Text_StringBuilder_o *__this;
  
  bVar1 = System_String__IsNullOrEmpty(value,(MethodInfo *)0x0);
  if (bVar1) {
    return;
  }
  if (builder != (System_Text_StringBuilder_o *)0x0) {
    __this = System_Text_StringBuilder__Append_530f6a0(builder,0x20,(MethodInfo *)0x0);
    if (__this != (System_Text_StringBuilder_o *)0x0) {
      System_Text_StringBuilder__Append_530ed80(__this,value,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


