// Type: Gisketch.Aottg2UI.SettingsScreen.AottgKeybindConflictRegistry
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: NEW in this game update
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.SettingsScreen/AottgKeybindConflictRegistry.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.SettingsScreen.AottgKeybindConflictRegistry.Entry$$.ctor
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry_Entry___ctor (Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry_Entry_o* __this, System_String_o* rowId, int32_t order, const MethodInfo* method);
// 0x18231f4a0

void Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry_Entry___ctor
               (Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry_Entry_o *__this,
               System_String_o *rowId,int32_t order,MethodInfo *method)

{
  System_OrdinalIgnoreCaseComparer_o *comparer;
  System_Collections_Generic_HashSet_string__o *__this_00;
  
  if (Il2CppMethodInitialized_1843476e0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_string_ctor_40e3a10);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_StringComparer);
    Il2CppMethodInitialized_1843476e0 = '\x01';
  }
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
  (__this->fields).DefaultKeys = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields).DefaultKeys,__this_00);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  (__this->fields).RowId = rowId;
  Il2CppCodeGenWriteBarrier(&(__this->fields).RowId,rowId);
  (__this->fields).Order = order;
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgKeybindConflictRegistry.<>c$$.cctor
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry___c___cctor (const MethodInfo* method);
// 0x1823201c0

void Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry___c___cctor(MethodInfo *method)

{
  Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry___c_o *__this;
  
  if (Il2CppMethodInitialized_1843476e1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry_c);
    Il2CppMethodInitialized_1843476e1 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry_c)
  ;
  System_Configuration_ConfigurationCollectionAttribute___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry_c->static_fields->__9 = __this;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry_c->static_fields->__9,
             __this);
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgKeybindConflictRegistry.<>c$$.ctor
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry___c___ctor (Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry___c_o* __this, const MethodInfo* method);
// 0x18054c890

void
Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry___c___ctor(Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry___c_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgKeybindConflictRegistry.<>c$$<ConflictLabels>b__10_0
// il2cpp: int32_t Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry___c___ConflictLabels_b__10_0 (Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry___c_o* __this, Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry_Entry_o* a, Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry_Entry_o* b, const MethodInfo* method);
// 0x18231fa50

int32_t
Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry___c___ConflictLabels_b__10_0(Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry___c_o* __this, Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry_Entry_o* a, Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry_Entry_o* b, MethodInfo* method)

{
  int32_t iVar1;
  
  if ((a != (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry_Entry_o *)0x0) &&
     (b != (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry_Entry_o *)0x0)) {
    iVar1 = System_Int32__CompareTo_1b28ec0(&(a->fields).Order,(b->fields).Order,(MethodInfo *)0x0);
    return iVar1;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.SettingsScreen.AottgKeybindConflictRegistry.<Keys>d__13$$.ctor
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry__Keys_d__13___ctor (Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry__Keys_d__13_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x1808e2870

void
Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry__Keys_d__13___ctor(Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry__Keys_d__13_o* __this, int32_t __1__state, MethodInfo* method)

{
  int32_t iVar1;
  
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  iVar1 = System_Diagnostics_TraceEventCache__GetThreadId((MethodInfo *)0x0);
  (__this->fields).__l__initialThreadId = iVar1;
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgKeybindConflictRegistry.<Keys>d__13$$System.IDisposable.Dispose
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry__Keys_d__13__System_IDisposable_Dispose (Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry__Keys_d__13_o* __this, const MethodInfo* method);
// 0x18231f970
// asm: 6 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18231f9d4: lea rcx, [rsp + 0x30]
// asm:   0x18231f9d9: call 0x1823038d0  ; il2cpp_runtime_helper_1823038d0()
// asm:   0x18231f9de: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x18231f9e3: test rcx, rcx
// asm:   0x18231f9e6: jne 0x18231f9ee
// asm:   0x18231f9ee: call 0x1804171b0  ; il2cpp_codegen_rethrow()

void Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry__Keys_d__13__System_IDisposable_Dispose
               (Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry__Keys_d__13_o *__this,
               MethodInfo *method)

{
  int iVar1;
  
  iVar1 = (__this->fields).__1__state;
  if ((iVar1 == -3) || (iVar1 == 1)) {
    if (Il2CppMethodInitialized_1843476e3 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_System_Collections_Generic_List_Enumerator_InputKey_Dispose);
      Il2CppMethodInitialized_1843476e3 = '\x01';
    }
    (__this->fields).__1__state = -1;
    System_Collections_Generic_List_Enumerator_object___Dispose
              ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&(__this->fields).__7__wrap2,
               MethodInfo_System_Collections_Generic_List_Enumerator_InputKey_Dispose);
  }
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgKeybindConflictRegistry.<Keys>d__13$$MoveNext
// il2cpp: bool Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry__Keys_d__13__MoveNext (Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry__Keys_d__13_o* __this, const MethodInfo* method);
// 0x18231f5a0
// eh: try 0x18231f62b..0x18231f87c -> pad 0x183315930 (+3 call sites) catch Il2CppExceptionWrapper
// asm: 20 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18231f74e: nop 
// asm:   0x18231f84c: mov rbx, qword ptr [rsp + 0x28]
// asm:   0x18231f851: test rbx, rbx
// asm:   0x18231f854: jne 0x18231f87c
// asm:   0x18231f856: movzx eax, byte ptr [rsp + 0x70]
// asm:   0x18231f87c: lea rcx, [rsp + 0x30]
// asm:   0x18231f881: call 0x1823038c0  ; il2cpp_runtime_helper_1823038c0()
// asm:   0x18231f886: mov rcx, rbx
// asm:   0x18231f889: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183315930: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183315935: push rbp
// asm:   0x183315936: sub rsp, 0x20
// asm:   0x18331593a: mov rbp, rdx
// asm:   0x18331593d: mov rax, qword ptr [rbp + 0x20]
// asm:   0x183315941: mov rcx, qword ptr [rax]
// asm:   0x183315944: mov qword ptr [rbp + 0x28], rcx
// asm:   0x183315948: movabs rax, 0
// asm:   0x183315952: add rsp, 0x20
// asm:   0x183315956: pop rbp
// asm:   0x183315957: ret 

bool Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry__Keys_d__13__MoveNext
               (Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry__Keys_d__13_o *__this,
               MethodInfo *method)

{
  int iVar1;
  Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry_Entry_o *pGVar2;
  Settings_KeybindSetting_o *pSVar3;
  System_Collections_Generic_List_InputKey__o *__this_00;
  Settings_InputKey_o *__this_01;
  System_Collections_Generic_HashSet_object__o *__this_02;
  bool bVar4;
  System_Collections_Generic_IEqualityComparer_T__o *comparer;
  System_Collections_Generic_HashSet_string__o *__this_03;
  System_String_o *item;
  System_Collections_Generic_List_Enumerator_T__o local_20;
  
  if (Il2CppMethodInitialized_1843476e2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_InputKey_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_InputKey_get_Current);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_string_ctor_40e3a10);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_string);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_InputKey_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_StringComparer);
    Il2CppMethodInitialized_1843476e2 = '\x01';
  }
  iVar1 = (__this->fields).__1__state;
  if (iVar1 == 0) {
    (__this->fields).__1__state = -1;
    if (((__this->fields).entry ==
         (Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry_Entry_o *)0x0) ||
       (pGVar2 = (__this->fields).entry, (pGVar2->fields).Setting == (Settings_KeybindSetting_o *)0x0)) {
      return false;
    }
    Gisketch_Aottg2UI_SettingsScreen_AottgKeybindSettingRow__EnsureSlots
              ((pGVar2->fields).Setting,(MethodInfo *)0x0);
    if ((TypeInfo_System_StringComparer->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_StringComparer);
    }
    comparer = (System_Collections_Generic_IEqualityComparer_T__o *)il2cpp_runtime_helper_181882cf0(0);
    __this_03 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_string);
    System_Collections_Generic_HashSet_object____ctor_176d450
              ((System_Collections_Generic_HashSet_object__o *)__this_03,comparer,
               (MethodInfo_176D450 *)MethodInfo_System_Collections_Generic_HashSet_string_ctor_40e3a10);
    (__this->fields)._seen_5__2 = __this_03;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._seen_5__2,__this_03);
    pGVar2 = (__this->fields).entry;
    if (pGVar2 == (Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry_Entry_o *)0x0) {
      ThrowNullReferenceException();
    }
    pSVar3 = (pGVar2->fields).Setting;
    if (pSVar3 == (Settings_KeybindSetting_o *)0x0) {
      ThrowNullReferenceException();
    }
    __this_00 = (pSVar3->fields).InputKeys;
    if (__this_00 == (System_Collections_Generic_List_InputKey__o *)0x0) {
      ThrowNullReferenceException();
    }
    System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
              (&local_20,(System_Collections_Generic_List_T__o *)__this_00,
               (MethodInfo_91F180 *)MethodInfo_System_Collections_Generic_List_InputKey_GetEnumerator);
    (__this->fields).__7__wrap2.fields._list = local_20.fields._list;
    (__this->fields).__7__wrap2.fields._index = local_20.fields._index;
    (__this->fields).__7__wrap2.fields._version = local_20.fields._version;
    (__this->fields).__7__wrap2.fields._current = (Settings_InputKey_o *)local_20.fields._current;
    Il2CppCodeGenWriteBarrier((void **)&(__this->fields).__7__wrap2,(void *)0x0);
  }
  else if (iVar1 != 1) {
    return false;
  }
  (__this->fields).__1__state = -3;
  while( true ) {
    do {
      bVar4 = System_Collections_Generic_List_Enumerator_object___MoveNext
                        ((System_Collections_Generic_List_Enumerator_object__o *)&(__this->fields).__7__wrap2,
                         (MethodInfo_153A2A0 *)
                         MethodInfo_System_Collections_Generic_List_Enumerator_InputKey_MoveNext);
      if (!bVar4) {
        if (Il2CppMethodInitialized_1843476e3 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_System_Collections_Generic_List_Enumerator_InputKey_Dispose);
          Il2CppMethodInitialized_1843476e3 = '\x01';
        }
        (__this->fields).__1__state = -1;
        System_Collections_Generic_List_Enumerator_object___Dispose
                  ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&(__this->fields).__7__wrap2,
                   MethodInfo_System_Collections_Generic_List_Enumerator_InputKey_Dispose);
        (__this->fields).__7__wrap2.fields._list = (System_Collections_Generic_List_T__o *)0x0;
        (__this->fields).__7__wrap2.fields._index = 0;
        (__this->fields).__7__wrap2.fields._version = 0;
        (__this->fields).__7__wrap2.fields._current = (Settings_InputKey_o *)0x0;
        return false;
      }
      __this_01 = (__this->fields).__7__wrap2.fields._current;
    } while ((__this_01 == (Settings_InputKey_o *)0x0) ||
            (bVar4 = Settings_InputKey__IsNone(__this_01,(MethodInfo *)0x0), bVar4));
    item = (*(__this_01->klass->vtable)._3_ToString.methodPtr)
                     (__this_01,(__this_01->klass->vtable)._3_ToString.method);
    __this_02 = (System_Collections_Generic_HashSet_object__o *)(__this->fields)._seen_5__2;
    if (__this_02 == (System_Collections_Generic_HashSet_object__o *)0x0) break;
    bVar4 = System_Collections_Generic_HashSet_object___Add
                      (__this_02,(Il2CppObject *)item,
                       (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    if (bVar4) {
      (__this->fields).__2__current = item;
      Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current,item);
      (__this->fields).__1__state = 1;
      return true;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.SettingsScreen.AottgKeybindConflictRegistry.<Keys>d__13$$<>m__Finally1
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry__Keys_d__13____m__Finally1 (Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry__Keys_d__13_o* __this, const MethodInfo* method);
// 0x18231fa00

void Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry__Keys_d__13____m__Finally1
               (Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry__Keys_d__13_o *__this,
               MethodInfo *method)

{
  if (Il2CppMethodInitialized_1843476e3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_InputKey_Dispose);
    Il2CppMethodInitialized_1843476e3 = '\x01';
  }
  (__this->fields).__1__state = -1;
  System_Collections_Generic_List_Enumerator_object___Dispose
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&(__this->fields).__7__wrap2,
             MethodInfo_System_Collections_Generic_List_Enumerator_InputKey_Dispose);
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgKeybindConflictRegistry.<Keys>d__13$$System.Collections.Generic.IEnumerator<System.String>.get_Current
// il2cpp: System_String_o* Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry__Keys_d__13__System_Collections_Generic_IEnumerator_System_String__get_Current (Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry__Keys_d__13_o* __this, const MethodInfo* method);
// 0x180573e90

System_String_o*
Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry__Keys_d__13__System_Collections_Generic_IEnumerator_System_String__get_Current(Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry__Keys_d__13_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgKeybindConflictRegistry.<Keys>d__13$$System.Collections.IEnumerator.Reset
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry__Keys_d__13__System_Collections_IEnumerator_Reset (Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry__Keys_d__13_o* __this, const MethodInfo* method);
// 0x18231f930

void Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry__Keys_d__13__System_Collections_IEnumerator_Reset
               (Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry__Keys_d__13_o *__this,
               MethodInfo *method)

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
                  MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry_Keys_d__13_System_Collections_IEnu
                 );
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
}


// Gisketch.Aottg2UI.SettingsScreen.AottgKeybindConflictRegistry.<Keys>d__13$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry__Keys_d__13__System_Collections_IEnumerator_get_Current (Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry__Keys_d__13_o* __this, const MethodInfo* method);
// 0x180573e90

Il2CppObject*
Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry__Keys_d__13__System_Collections_IEnumerator_get_Current(Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry__Keys_d__13_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgKeybindConflictRegistry.<Keys>d__13$$System.Collections.Generic.IEnumerable<System.String>.GetEnumerator
// il2cpp: System_Collections_Generic_IEnumerator_string__o* Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry__Keys_d__13__System_Collections_Generic_IEnumerable_System_String__GetEnumerator (Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry__Keys_d__13_o* __this, const MethodInfo* method);
// 0x18231f890

System_Collections_Generic_IEnumerator_string__o*
Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry__Keys_d__13__System_Collections_Generic_IEnumerable_System_String__GetEnumerator(Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry__Keys_d__13_o* __this, MethodInfo* method)

{
  int iVar1;
  Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry_Entry_o *value;
  int32_t iVar2;
  Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry__Keys_d__13_o *__this_00;
  
  if (Il2CppMethodInitialized_1843476e4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry_Keys_d__13);
    Il2CppMethodInitialized_1843476e4 = '\x01';
  }
  if ((__this->fields).__1__state == -2) {
    iVar1 = (__this->fields).__l__initialThreadId;
    iVar2 = System_Diagnostics_TraceEventCache__GetThreadId((MethodInfo *)0x0);
    if (iVar1 == iVar2) {
      (__this->fields).__1__state = 0;
      __this_00 = __this;
      goto label_18231f903;
    }
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry_Keys_d__13);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).__1__state = 0;
  iVar2 = System_Diagnostics_TraceEventCache__GetThreadId((MethodInfo *)0x0);
  (__this_00->fields).__l__initialThreadId = iVar2;
label_18231f903:
  if (__this_00 != (Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry__Keys_d__13_o *)0x0) {
    value = (__this->fields).__3__entry;
    (__this_00->fields).entry = value;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).entry,value);
    return (System_Collections_IEnumerator_o *)__this_00;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.SettingsScreen.AottgKeybindConflictRegistry.<Keys>d__13$$System.Collections.IEnumerable.GetEnumerator
// il2cpp: System_Collections_IEnumerator_o* Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry__Keys_d__13__System_Collections_IEnumerable_GetEnumerator (Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry__Keys_d__13_o* __this, const MethodInfo* method);
// 0x18231f890

System_Collections_IEnumerator_o *
Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry__Keys_d__13__System_Collections_IEnumerable_GetEnumerator
          (Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry__Keys_d__13_o *__this,
          MethodInfo *method)

{
  int iVar1;
  Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry_Entry_o *value;
  int32_t iVar2;
  Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry__Keys_d__13_o *__this_00;
  
  if (Il2CppMethodInitialized_1843476e4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry_Keys_d__13);
    Il2CppMethodInitialized_1843476e4 = '\x01';
  }
  if ((__this->fields).__1__state == -2) {
    iVar1 = (__this->fields).__l__initialThreadId;
    iVar2 = System_Diagnostics_TraceEventCache__GetThreadId((MethodInfo *)0x0);
    if (iVar1 == iVar2) {
      (__this->fields).__1__state = 0;
      __this_00 = __this;
      goto label_18231f903;
    }
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry_Keys_d__13);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).__1__state = 0;
  iVar2 = System_Diagnostics_TraceEventCache__GetThreadId((MethodInfo *)0x0);
  (__this_00->fields).__l__initialThreadId = iVar2;
label_18231f903:
  if (__this_00 != (Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry__Keys_d__13_o *)0x0) {
    value = (__this->fields).__3__entry;
    (__this_00->fields).entry = value;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).entry,value);
    return (System_Collections_IEnumerator_o *)__this_00;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.SettingsScreen.AottgKeybindConflictRegistry$$Register
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry__Register (System_String_o* rowId, System_String_o* scopeId, System_String_o* label, Settings_KeybindSetting_o* setting, const MethodInfo* method);
// 0x182306e70

void Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry__Register
               (System_String_o *rowId,System_String_o *scopeId,System_String_o *label,
               Settings_KeybindSetting_o *setting,MethodInfo *method)

{
  int iVar1;
  System_Collections_Generic_Dictionary_object__object__o *pSVar2;
  System_OrdinalIgnoreCaseComparer_o *comparer;
  bool bVar3;
  Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry_Entry_o *pGVar4;
  System_Collections_Generic_HashSet_string__o *pSVar5;
  Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry_Entry_o *local_res8;
  
  if (Il2CppMethodInitialized_1843476d5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_string_AottgKeybindConflictRegistry_Entry_TryGetValue
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_string_AottgKeybindConflictRegistry_Entry_set_Item
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry_Entry);
    Il2CppMethodInitialized_1843476d5 = '\x01';
  }
  local_res8 = (Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry_Entry_o *)0x0;
  bVar3 = System_String__IsNullOrEmpty(rowId,(MethodInfo *)0x0);
  if ((bVar3) || (setting == (Settings_KeybindSetting_o *)0x0)) {
    return;
  }
  if ((TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry->_2).cctor_finished_or_no_cctor
      == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry);
  }
  pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
           TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry->static_fields->Entries;
  if (pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    bVar3 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                      (pSVar2,(Il2CppObject *)rowId,(Il2CppObject **)&local_res8,
                       (MethodInfo_14769C0 *)
                       MethodInfo_System_Collections_Generic_Dictionary_string_AottgKeybindConflictRegistry_Entry_TryGetValue
                      );
    if (!bVar3) {
      if ((TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry->_2).
          cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry);
      }
      iVar1 = TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry->static_fields->
              _nextOrder;
      TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry->static_fields->_nextOrder =
           iVar1 + 1;
      pGVar4 = il2cpp_codegen_object_new
                         ((Il2CppClass *)
                          TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry_Entry);
      if (Il2CppMethodInitialized_1843476e0 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_System_Collections_Generic_HashSet_string_ctor_40e3a10);
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_string);
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_StringComparer);
        Il2CppMethodInitialized_1843476e0 = '\x01';
      }
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
      pSVar5 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_string);
      System_Collections_Generic_HashSet_object____ctor_176d450
                ((System_Collections_Generic_HashSet_object__o *)pSVar5,
                 (System_Collections_Generic_IEqualityComparer_T__o *)comparer,
                 (MethodInfo_176D450 *)MethodInfo_System_Collections_Generic_HashSet_string_ctor_40e3a10);
      (pGVar4->fields).DefaultKeys = pSVar5;
      Il2CppCodeGenWriteBarrier(&(pGVar4->fields).DefaultKeys,pSVar5);
      System_Configuration_ConfigurationCollectionAttribute___ctor
                ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)pGVar4,(MethodInfo *)0x0);
      (pGVar4->fields).RowId = rowId;
      Il2CppCodeGenWriteBarrier(&(pGVar4->fields).RowId,rowId);
      (pGVar4->fields).Order = iVar1;
      pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
               TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry->static_fields->Entries;
      local_res8 = pGVar4;
      if (pSVar2 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_182307169;
      System_Collections_Generic_Dictionary_object__object___set_Item
                (pSVar2,(Il2CppObject *)rowId,(Il2CppObject *)pGVar4,
                 (MethodInfo_147A7F0 *)
                 MethodInfo_System_Collections_Generic_Dictionary_string_AottgKeybindConflictRegistry_Entry_set_Item
                );
    }
    if (scopeId == (System_String_o *)0x0) {
      scopeId = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
    }
    if (local_res8 != (Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry_Entry_o *)0x0) {
      (local_res8->fields).ScopeId = scopeId;
      Il2CppCodeGenWriteBarrier(&(local_res8->fields).ScopeId,scopeId);
      pGVar4 = local_res8;
      bVar3 = System_String__IsNullOrEmpty(label,(MethodInfo *)0x0);
      if (!bVar3) {
        rowId = label;
      }
      if (pGVar4 != (Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry_Entry_o *)0x0) {
        (pGVar4->fields).Label = rowId;
        Il2CppCodeGenWriteBarrier(&(pGVar4->fields).Label,rowId);
        if (local_res8 != (Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry_Entry_o *)0x0) {
          (local_res8->fields).Setting = setting;
          Il2CppCodeGenWriteBarrier(&(local_res8->fields).Setting,setting);
          pGVar4 = local_res8;
          if ((TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry->_2).
              cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry);
          }
          pSVar5 = Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry__BuildDefaultKeys
                             (setting,(MethodInfo *)0x0);
          if (pGVar4 != (Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry_Entry_o *)0x0) {
            (pGVar4->fields).DefaultKeys = pSVar5;
            Il2CppCodeGenWriteBarrier(&(pGVar4->fields).DefaultKeys,pSVar5);
            return;
          }
        }
      }
    }
  }
label_182307169:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.SettingsScreen.AottgKeybindConflictRegistry$$SyncAll
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry__SyncAll (Gisketch_Aottg2UI_GisketchUIRoot_o* root, const MethodInfo* method);
// 0x1823071e0
// eh: try 0x182307328..0x1823074e6 -> pad 0x183315930 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 20 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x182307330: mov r14, qword ptr [rsp + 0x90]
// asm:   0x182307338: mov rsi, qword ptr [rsp + 0xa0]
// asm:   0x1823074a0: mov rdx, qword ptr [rip + 0x1db8839]  ; MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string_AottgKeybindConflictRegi
// asm:   0x1823074a7: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x1823074ac: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x1823074b1: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x1823074b6: test rcx, rcx
// asm:   0x1823074b9: jne 0x1823074e6
// asm:   0x1823074e6: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183315930: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183315935: push rbp
// asm:   0x183315936: sub rsp, 0x20
// asm:   0x18331593a: mov rbp, rdx
// asm:   0x18331593d: mov rax, qword ptr [rbp + 0x20]
// asm:   0x183315941: mov rcx, qword ptr [rax]
// asm:   0x183315944: mov qword ptr [rbp + 0x28], rcx
// asm:   0x183315948: movabs rax, 0
// asm:   0x183315952: add rsp, 0x20
// asm:   0x183315956: pop rbp
// asm:   0x183315957: ret 

void Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry__SyncAll
               (Gisketch_Aottg2UI_GisketchUIRoot_o *root,MethodInfo *method)

{
  int iVar1;
  System_Collections_Generic_Dictionary_string__AottgKeybindConflictRegistry_Entry__o *__this;
  Gisketch_Aottg2UI_State_GisketchUIState_o *pGVar2;
  Il2CppObject *entry;
  bool bVar3;
  System_Collections_Generic_Dictionary_string__List_AottgKeybindConflictRegistry_Entry___o *keys;
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *__this_00;
  System_Collections_Generic_List_string__o *__this_01;
  System_String_o *pSVar4;
  UnityEngine_Rendering_RenderGraphModule_RenderGraph_DebugData_PassData_NRPInfo_NativeRenderPassInfo_PassCompatibilityInfo_array
  *value;
  System_String_o *pSVar5;
  undefined1 local_60 [16];
  Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry_Entry_o *local_50;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o local_48;
  
  if (Il2CppMethodInitialized_1843476d6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_string_AottgKeybindConflictRegistry_Entry_get_Values
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string_AottgKeybindConflictRegi
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string_AottgKeybindConflictRegi_40bfdc0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string_AottgKeybindConflictRegi_40bfea0
              );
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ToArray);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_get_Count);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_string_AottgKeybindConflictRegistry_Entry
              );
    il2cpp_codegen_initialize_runtime_metadata(&"This keybind is in conflict with: ");
    il2cpp_codegen_initialize_runtime_metadata(&", ");
    Il2CppMethodInitialized_1843476d6 = '\x01';
  }
  local_48.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._currentValue = (Il2CppObject *)0x0;
  if ((TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry->_2).cctor_finished_or_no_cctor
      == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry);
  }
  keys = Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry__KeyMap((MethodInfo *)0x0);
  __this = TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry->static_fields->Entries;
  if ((__this != (System_Collections_Generic_Dictionary_string__AottgKeybindConflictRegistry_Entry__o *)0x0)
     && (__this_00 = (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)
                     System_Collections_Generic_Dictionary_fsPortableReflection_AttributeQuery__object___System_Collections_Generic_IReadOnlyDictionary_TKey_TValue__get_Values
                               ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this,
                                (MethodInfo_13C65A0 *)
                                MethodInfo_System_Collections_Generic_Dictionary_string_AottgKeybindConflictRegistry_Entry_get_Values
                               ),
        __this_00 != (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)0x0)) {
    System_Collections_Generic_Dictionary_ValueCollection_fsPortableReflection_AttributeQuery__object___GetEnumerator
              ((System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)local_60,
               __this_00,
               (MethodInfo_F1E4D0 *)
               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_string_AottgKeybindConflictRegistry_Entry
              );
    local_48.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)local_60._0_8_;
    local_48.fields._index = local_60._8_4_;
    local_48.fields._version = local_60._12_4_;
    local_48.fields._currentValue = (Il2CppObject *)local_50;
    local_60._0_8_ = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
    local_60._8_8_ = &local_48;
    while( true ) {
      bVar3 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_PhotonNetwork_RaiseEventBatch__object___MoveNext
                        (&local_48,
                         (MethodInfo_155CFB0 *)
                         MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string_AottgKeybindConflictRegi_40bfdc0
                        );
      entry = local_48.fields._currentValue;
      if (!bVar3) {
        System_Configuration_ConfigurationCollectionAttribute___ctor
                  ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_48,
                   MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string_AottgKeybindConflictRegi
                  );
        return;
      }
      if ((TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry->_2).
          cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry);
      }
      __this_01 = Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry__ConflictLabels
                            ((Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry_Entry_o *)entry,
                             keys,(MethodInfo *)0x0);
      if (__this_01 == (System_Collections_Generic_List_string__o *)0x0) break;
      iVar1 = (__this_01->fields)._size;
      if (root != (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) {
        pGVar2 = (root->fields)._State_k__BackingField;
        if (pGVar2 != (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
          if ((Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry_Entry_o *)entry ==
              (Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry_Entry_o *)0x0) {
            ThrowNullReferenceException();
          }
          pSVar4 = ((Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry_Entry_Fields *)
                   ((longlong)entry + 0x10))->RowId;
          if ((TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry->_2).
              cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry);
          }
          pSVar4 = Gisketch_Aottg2UI_Game_AottgSettingsStateKeys__KeybindConflictRow(pSVar4,(MethodInfo *)0x0)
          ;
          Gisketch_Aottg2UI_State_GisketchUIState__SetBool(pGVar2,pSVar4,0 < iVar1,(MethodInfo *)0x0);
        }
        pGVar2 = (root->fields)._State_k__BackingField;
        if (pGVar2 != (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
          if ((Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry_Entry_o *)entry ==
              (Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry_Entry_o *)0x0) {
            ThrowNullReferenceException();
          }
          pSVar4 = ((Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry_Entry_Fields *)
                   ((longlong)entry + 0x10))->RowId;
          if ((TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry->_2).
              cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry);
          }
          pSVar4 = Gisketch_Aottg2UI_Game_AottgSettingsStateKeys__KeybindConflictTooltip
                             (pSVar4,(MethodInfo *)0x0);
          if (iVar1 < 1) {
            pSVar5 = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
          }
          else {
            value = System_Collections_Generic_List_RenderGraph_DebugData_PassData_NRPInfo_NativeRenderPassInfo_PassCompatibilityInfo___ToArray
                              ((System_Collections_Generic_List_T__o *)__this_01,
                               (MethodInfo_929FE0 *)MethodInfo_System_Collections_Generic_List_string_ToArray)
            ;
            pSVar5 = System_String__Join(", ",(System_String_array *)value,(MethodInfo *)0x0)
            ;
            pSVar5 = System_String__Concat_1969e50("This keybind is in conflict with: ",pSVar5,(MethodInfo *)0x0);
          }
          Gisketch_Aottg2UI_State_GisketchUIState__Set(pGVar2,pSVar4,pSVar5,(MethodInfo *)0x0);
        }
      }
    }
    ThrowNullReferenceException();
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.SettingsScreen.AottgKeybindConflictRegistry$$VisibleStateKey
// il2cpp: System_String_o* Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry__VisibleStateKey (System_String_o* rowId, const MethodInfo* method);
// 0x182307510

System_String_o *
Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry__VisibleStateKey
          (System_String_o *rowId,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  pSVar1 = Gisketch_Aottg2UI_Game_AottgSettingsStateKeys__KeybindConflictRow(rowId,(MethodInfo *)0x0);
  return pSVar1;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgKeybindConflictRegistry$$TooltipStateKey
// il2cpp: System_String_o* Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry__TooltipStateKey (System_String_o* rowId, const MethodInfo* method);
// 0x182307500

System_String_o *
Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry__TooltipStateKey
          (System_String_o *rowId,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  pSVar1 = Gisketch_Aottg2UI_Game_AottgSettingsStateKeys__KeybindConflictTooltip(rowId,(MethodInfo *)0x0);
  return pSVar1;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgKeybindConflictRegistry$$ConflictsForTests
// il2cpp: System_Collections_Generic_List_string__o* Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry__ConflictsForTests (System_String_o* rowId, const MethodInfo* method);
// 0x182306760

System_Collections_Generic_List_string__o *
Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry__ConflictsForTests
          (System_String_o *rowId,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this;
  Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry_Entry_o *entry;
  bool bVar1;
  System_Collections_Generic_Dictionary_string__List_AottgKeybindConflictRegistry_Entry___o *keys;
  System_Collections_Generic_List_string__o *pSVar2;
  Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry_Entry_o *local_res8 [4];
  
  if (Il2CppMethodInitialized_1843476d7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_string_AottgKeybindConflictRegistry_Entry_TryGetValue
              );
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_string);
    Il2CppMethodInitialized_1843476d7 = '\x01';
  }
  local_res8[0] = (Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry_Entry_o *)0x0;
  bVar1 = System_String__IsNullOrEmpty(rowId,(MethodInfo *)0x0);
  if (!bVar1) {
    if ((TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry);
    }
    __this = (System_Collections_Generic_Dictionary_object__object__o *)
             TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry->static_fields->Entries;
    if (__this == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      ThrowNullReferenceException();
    }
    bVar1 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                      (__this,(Il2CppObject *)rowId,(Il2CppObject **)local_res8,
                       (MethodInfo_14769C0 *)
                       MethodInfo_System_Collections_Generic_Dictionary_string_AottgKeybindConflictRegistry_Entry_TryGetValue
                      );
    entry = local_res8[0];
    if (bVar1) {
      if ((TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry->_2).
          cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry);
      }
      keys = Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry__KeyMap((MethodInfo *)0x0);
      pSVar2 = Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry__ConflictLabels
                         (entry,keys,(MethodInfo *)0x0);
      return pSVar2;
    }
  }
  pSVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)pSVar2,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_string_ctor);
  return pSVar2;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgKeybindConflictRegistry$$ClearForTests
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry__ClearForTests (const MethodInfo* method);
// 0x182306140

void Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry__ClearForTests(MethodInfo *method)

{
  System_Collections_Generic_Dictionary_string__AottgKeybindConflictRegistry_Entry__o *__this;
  
  if (Il2CppMethodInitialized_1843476d8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_string_AottgKeybindConflictRegistry_Entry_Clear
              );
    Il2CppMethodInitialized_1843476d8 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry->_2).cctor_finished_or_no_cctor
      == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry);
  }
  __this = TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry->static_fields->Entries;
  if (__this != (System_Collections_Generic_Dictionary_string__AottgKeybindConflictRegistry_Entry__o *)0x0) {
    System_Collections_Generic_Dictionary_fsPortableReflection_AttributeQuery__object___Clear
              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this,
               (MethodInfo_13BF1C0 *)
               MethodInfo_System_Collections_Generic_Dictionary_string_AottgKeybindConflictRegistry_Entry_Clear
              );
    TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry->static_fields->_nextOrder = 0;
    return;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.SettingsScreen.AottgKeybindConflictRegistry$$KeyMap
// il2cpp: System_Collections_Generic_Dictionary_string__List_AottgKeybindConflictRegistry_Entry___o* Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry__KeyMap (const MethodInfo* method);
// 0x182306910
// eh: try 0x182306b40..0x182306dea -> pad 0x183317fd0 (+4 call sites) catch Il2CppExceptionWrapper
// asm: 45 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x182306d2c: jmp 0x182306b40
// asm:   0x182306d31: mov r8, qword ptr [rsp + 0x48]
// asm:   0x182306d36: cmp qword ptr [r8], 0
// asm:   0x182306d3a: je 0x182306d4d
// asm:   0x182306d3c: xor ecx, ecx
// asm:   0x182306d3e: mov r8, qword ptr [r8]
// asm:   0x182306d41: mov rdx, qword ptr [rip + 0x1d925b8]  ; TypeInfo_System_IDisposable
// asm:   0x182306d48: call 0x180014840  ; InterfaceInvoker0_Invoke()
// asm:   0x182306d4d: mov rcx, qword ptr [rsp + 0x40]
// asm:   0x182306d52: test rcx, rcx
// asm:   0x182306d55: jne 0x182306ddf
// asm:   0x182306d5b: xor r12d, r12d
// asm:   0x182306d5e: mov r15, qword ptr [rsp + 0xb8]
// asm:   0x182306d66: jmp 0x182306b40
// asm:   0x182306d7e: mov rdx, qword ptr [rip + 0x1db8f5b]  ; MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string_AottgKeybindConflictRegi
// asm:   0x182306d85: mov rcx, qword ptr [rsp + 0x38]
// asm:   0x182306d8a: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x182306d8f: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x182306d94: test rcx, rcx
// asm:   0x182306d97: jne 0x182306dea
// asm:   0x182306d99: mov r15, qword ptr [rsp + 0xb8]
// asm:   0x182306ddf: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x182306dea: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183317870: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183317875: push rbp
// asm:   0x183317876: sub rsp, 0x20
// asm:   0x18331787a: mov rbp, rdx
// asm:   0x18331787d: mov rax, qword ptr [rbp + 0x20]
// asm:   0x183317881: mov rcx, qword ptr [rax]
// asm:   0x183317884: mov qword ptr [rbp + 0x40], rcx
// asm:   0x183317888: movabs rax, 0
// asm:   0x183317892: add rsp, 0x20
// asm:   0x183317896: pop rbp
// asm:   0x183317897: ret 
// asm:   0x183317fd0: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183317fd5: push rbp
// asm:   0x183317fd6: sub rsp, 0x20
// asm:   0x183317fda: mov rbp, rdx
// asm:   0x183317fdd: mov rax, qword ptr [rbp + 0x28]
// asm:   0x183317fe1: mov rcx, qword ptr [rax]
// asm:   0x183317fe4: mov qword ptr [rbp + 0x30], rcx
// asm:   0x183317fe8: movabs rax, 0
// asm:   0x183317ff2: add rsp, 0x20
// asm:   0x183317ff6: pop rbp
// asm:   0x183317ff7: ret 

System_Collections_Generic_Dictionary_string__List_AottgKeybindConflictRegistry_Entry___o *
Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry__KeyMap(MethodInfo *method)

{
  System_OrdinalIgnoreCaseComparer_o *comparer;
  System_Collections_Generic_Dictionary_string__AottgKeybindConflictRegistry_Entry__o *__this;
  Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry_Entry_o *entry;
  bool bVar1;
  System_Collections_Generic_Dictionary_string__List_AottgKeybindConflictRegistry_Entry___o *__this_00;
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *__this_01;
  Il2CppObject *obj;
  void *pvVar2;
  System_String_o *pSVar3;
  System_Collections_Generic_List_AottgKeybindConflictRegistry_Entry__o *__this_02;
  System_String_o *str0;
  Il2CppObject *local_res10;
  System_Collections_Generic_List_AottgKeybindConflictRegistry_Entry__o *local_res18;
  System_Collections_Generic_Dictionary_string__List_AottgKeybindConflictRegistry_Entry___o *local_res20;
  undefined1 local_58 [16];
  Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry_Entry_o *local_48;
  undefined1 local_40 [8];
  uint64_t uStack_38;
  Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry_Entry_o *local_30;
  
  if (Il2CppMethodInitialized_1843476d9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_string_List_AottgKeybindConflictRegistry_Entry_TryGetValue
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_string_List_AottgKeybindConflictRegistry_Entry_ctor
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_string_AottgKeybindConflictRegistry_Entry_get_Values
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_string_List_AottgKeybindConflictRegistry_Entry_set_Item
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_Dictionary_string_List_AottgKeybindConflictRegistry_Entry)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string_AottgKeybindConflictRegi
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string_AottgKeybindConflictRegi_40bfdc0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string_AottgKeybindConflictRegi_40bfea0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IDisposable);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_IEnumerable_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_IEnumerator_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_IEnumerator);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_AottgKeybindConflictRegistry_Entry_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_AottgKeybindConflictRegistry_Entry_Contains);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_AottgKeybindConflictRegistry_Entry_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_List_AottgKeybindConflictRegistry_Entry);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_StringComparer);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_string_AottgKeybindConflictRegistry_Entry
              );
    Il2CppMethodInitialized_1843476d9 = '\x01';
  }
  local_40 = (undefined1  [8])0x0;
  uStack_38 = 0;
  local_30 = (Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry_Entry_o *)0x0;
  local_res10 = (Il2CppObject *)0x0;
  local_res18 = (System_Collections_Generic_List_AottgKeybindConflictRegistry_Entry__o *)0x0;
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
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_System_Collections_Generic_Dictionary_string_List_AottgKeybindConflictRegistry_Entry
                        );
  System_Collections_Generic_Dictionary_object__object____ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
             (System_Collections_Generic_IEqualityComparer_TKey__o *)comparer,
             (MethodInfo_1453150 *)
             MethodInfo_System_Collections_Generic_Dictionary_string_List_AottgKeybindConflictRegistry_Entry_ctor
            );
  if ((TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry->_2).cctor_finished_or_no_cctor
      == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry);
  }
  __this = TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry->static_fields->Entries;
  if ((__this == (System_Collections_Generic_Dictionary_string__AottgKeybindConflictRegistry_Entry__o *)0x0)
     || (__this_01 = (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)
                     System_Collections_Generic_Dictionary_fsPortableReflection_AttributeQuery__object___System_Collections_Generic_IReadOnlyDictionary_TKey_TValue__get_Values
                               ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this,
                                (MethodInfo_13C65A0 *)
                                MethodInfo_System_Collections_Generic_Dictionary_string_AottgKeybindConflictRegistry_Entry_get_Values
                               ),
        __this_01 == (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)0x0)) {
    ThrowNullReferenceException();
  }
  local_res20 = __this_00;
  System_Collections_Generic_Dictionary_ValueCollection_fsPortableReflection_AttributeQuery__object___GetEnumerator
            ((System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)local_58,
             __this_01,
             (MethodInfo_F1E4D0 *)
             MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_string_AottgKeybindConflictRegistry_Entry
            );
  local_40 = (undefined1  [8])local_58._0_8_;
  uStack_38 = local_58._8_8_;
  local_30 = local_48;
  do {
    bVar1 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_PhotonNetwork_RaiseEventBatch__object___MoveNext
                      ((System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)
                       local_40,(MethodInfo_155CFB0 *)
                                MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string_AottgKeybindConflictRegi_40bfdc0
                      );
    entry = local_30;
    if (!bVar1) {
      System_Configuration_ConfigurationCollectionAttribute___ctor
                ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_40,
                 MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string_AottgKeybindConflictRegi
                );
      return __this_00;
    }
    if ((TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry);
    }
    obj = (Il2CppObject *)
          Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry__Keys(entry,(MethodInfo *)0x0);
    if (obj == (Il2CppObject *)0x0) {
      ThrowNullReferenceException();
    }
    local_res10 = InterfaceInvoker0_Invoke
                            (0,(Il2CppClass *)TypeInfo_System_Collections_Generic_IEnumerable_string,obj);
    local_58._0_8_ = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
    local_58._8_8_ = &local_res10;
    while( true ) {
      if (local_res10 == (Il2CppObject *)0x0) {
        ThrowNullReferenceException();
      }
      pvVar2 = InterfaceInvoker0_Invoke(0,(Il2CppClass *)TypeInfo_System_Collections_IEnumerator,local_res10);
      if ((char)pvVar2 == '\0') break;
      if (local_res10 == (Il2CppObject *)0x0) {
        ThrowNullReferenceException();
      }
      pSVar3 = InterfaceInvoker0_Invoke
                         (0,(Il2CppClass *)TypeInfo_System_Collections_Generic_IEnumerator_string,local_res10)
      ;
      if (entry == (Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry_Entry_o *)0x0) {
        ThrowNullReferenceException();
      }
      str0 = (entry->fields).ScopeId;
      if ((TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry->_2).
          cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry);
      }
      if (Il2CppMethodInitialized_1843476dc == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&"\n");
        Il2CppMethodInitialized_1843476dc = '\x01';
      }
      if (str0 == (System_String_o *)0x0) {
        str0 = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
      }
      pSVar3 = System_String__Concat_1969b70(str0,"\n",pSVar3,(MethodInfo *)0x0);
      if (__this_00 ==
          (System_Collections_Generic_Dictionary_string__List_AottgKeybindConflictRegistry_Entry___o *)0x0) {
        ThrowNullReferenceException();
      }
      bVar1 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                        ((System_Collections_Generic_Dictionary_object__object__o *)__this_00,
                         (Il2CppObject *)pSVar3,(Il2CppObject **)&local_res18,
                         (MethodInfo_14769C0 *)
                         MethodInfo_System_Collections_Generic_Dictionary_string_List_AottgKeybindConflictRegistry_Entry_TryGetValue
                        );
      if (!bVar1) {
        __this_02 = il2cpp_codegen_object_new
                              ((Il2CppClass *)
                               TypeInfo_System_Collections_Generic_List_AottgKeybindConflictRegistry_Entry);
        System_Collections_Generic_LowLevelList___Il2CppFullySharedGenericType____ctor
                  ((System_Collections_Generic_LowLevelList_T__o *)__this_02,
                   (MethodInfo_92A240 *)
                   MethodInfo_System_Collections_Generic_List_AottgKeybindConflictRegistry_Entry_ctor);
        local_res18 = __this_02;
        System_Collections_Generic_Dictionary_object__object___set_Item
                  ((System_Collections_Generic_Dictionary_object__object__o *)__this_00,(Il2CppObject *)pSVar3
                   ,(Il2CppObject *)__this_02,
                   (MethodInfo_147A7F0 *)
                   MethodInfo_System_Collections_Generic_Dictionary_string_List_AottgKeybindConflictRegistry_Entry_set_Item
                  );
      }
      if (local_res18 == (System_Collections_Generic_List_AottgKeybindConflictRegistry_Entry__o *)0x0) {
        ThrowNullReferenceException();
      }
      bVar1 = System_Collections_Generic_List_object___Contains
                        ((System_Collections_Generic_List_object__o *)local_res18,(Il2CppObject *)entry,
                         (MethodInfo_93FC70 *)
                         MethodInfo_System_Collections_Generic_List_AottgKeybindConflictRegistry_Entry_Contains
                        );
      if (!bVar1) {
        if (local_res18 == (System_Collections_Generic_List_AottgKeybindConflictRegistry_Entry__o *)0x0) {
          ThrowNullReferenceException();
        }
        il2cpp_runtime_helper_180012890(local_res18,entry,
                      MethodInfo_System_Collections_Generic_List_AottgKeybindConflictRegistry_Entry_Add);
      }
    }
    if (local_res10 != (Il2CppObject *)0x0) {
      InterfaceInvoker0_Invoke(0,(Il2CppClass *)TypeInfo_System_IDisposable,local_res10);
    }
  } while( true );
}


// Gisketch.Aottg2UI.SettingsScreen.AottgKeybindConflictRegistry$$ConflictLabels
// il2cpp: System_Collections_Generic_List_string__o* Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry__ConflictLabels (Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry_Entry_o* entry, System_Collections_Generic_Dictionary_string__List_AottgKeybindConflictRegistry_Entry___o* keys, const MethodInfo* method);
// 0x1823061d0
// eh: try 0x182306370..0x182306746 -> pad 0x183318f20 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 26 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x182306455: mov esi, r13d
// asm:   0x182306458: nop dword ptr [rax + rax]
// asm:   0x182306563: mov r8, qword ptr [rsp + 0x40]
// asm:   0x182306568: cmp qword ptr [r8], 0
// asm:   0x18230656c: je 0x18230657f
// asm:   0x18230656e: xor ecx, ecx
// asm:   0x182306570: mov r8, qword ptr [r8]
// asm:   0x182306573: mov rdx, qword ptr [rip + 0x1d92d86]  ; TypeInfo_System_IDisposable
// asm:   0x18230657a: call 0x180014840  ; InterfaceInvoker0_Invoke()
// asm:   0x18230657f: mov rcx, qword ptr [rsp + 0x38]
// asm:   0x182306584: test rcx, rcx
// asm:   0x182306587: jne 0x182306746
// asm:   0x18230658d: xor r13d, r13d
// asm:   0x182306590: mov r14, qword ptr [rsp + 0x20]
// asm:   0x182306746: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183318f20: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183318f25: push rbp
// asm:   0x183318f26: sub rsp, 0x20
// asm:   0x183318f2a: mov rbp, rdx
// asm:   0x183318f2d: mov rax, qword ptr [rbp + 0x30]
// asm:   0x183318f31: mov rcx, qword ptr [rax]
// asm:   0x183318f34: mov qword ptr [rbp + 0x38], rcx
// asm:   0x183318f38: movabs rax, 0
// asm:   0x183318f42: add rsp, 0x20
// asm:   0x183318f46: pop rbp
// asm:   0x183318f47: ret 

System_Collections_Generic_List_string__o *
Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry__ConflictLabels
          (Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry_Entry_o *entry,
          System_Collections_Generic_Dictionary_string__List_AottgKeybindConflictRegistry_Entry___o *keys,
          MethodInfo *method)

{
  int32_t *piVar1;
  int32_t capacity;
  uint uVar2;
  System_Collections_Generic_HashSet_object__o *pSVar3;
  System_String_array *pSVar4;
  MethodInfo *pMVar5;
  bool bVar6;
  System_Collections_Generic_List_AottgKeybindConflictRegistry_Entry__o *__this;
  Il2CppObject *pIVar7;
  void *pvVar8;
  System_String_o *pSVar9;
  System_String_o *pSVar10;
  Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry_Entry_o *item;
  UnityEngine_Rendering_DynamicArray_SortComparer_T__o *__this_00;
  System_Collections_Generic_List_string__o *__this_01;
  int index;
  int index_00;
  System_Collections_Generic_List_object__o *local_res20;
  
  if (Il2CppMethodInitialized_1843476da == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Comparison_AottgKeybindConflictRegistry_Entry)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_string_List_AottgKeybindConflictRegistry_Entry_TryGetValue
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IDisposable);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_IEnumerable_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_IEnumerator_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_IEnumerator);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_AottgKeybindConflictRegistry_Entry_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_AottgKeybindConflictRegistry_Entry_Contains);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_AottgKeybindConflictRegistry_Entry_Sort);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_string_ctor_40dc058);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_AottgKeybindConflictRegistry_Entry_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_AottgKeybindConflictRegistry_Entry_get_Count);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_AottgKeybindConflictRegistry_Entry_get_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_List_AottgKeybindConflictRegistry_Entry);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_string);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry_c_ConflictLabels_b__10_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry_c);
    Il2CppMethodInitialized_1843476da = '\x01';
  }
  index_00 = 0;
  local_res20 = (System_Collections_Generic_List_object__o *)0x0;
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)
                      TypeInfo_System_Collections_Generic_List_AottgKeybindConflictRegistry_Entry);
  System_Collections_Generic_LowLevelList___Il2CppFullySharedGenericType____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)__this,
             (MethodInfo_92A240 *)
             MethodInfo_System_Collections_Generic_List_AottgKeybindConflictRegistry_Entry_ctor);
  if ((TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry->_2).cctor_finished_or_no_cctor
      == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry);
  }
  pIVar7 = (Il2CppObject *)
           Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry__Keys(entry,(MethodInfo *)0x0);
  if (pIVar7 != (Il2CppObject *)0x0) {
    pIVar7 = InterfaceInvoker0_Invoke
                       (0,(Il2CppClass *)TypeInfo_System_Collections_Generic_IEnumerable_string,pIVar7);
    while( true ) {
      if (pIVar7 == (Il2CppObject *)0x0) {
        ThrowNullReferenceException();
      }
      pvVar8 = InterfaceInvoker0_Invoke(0,(Il2CppClass *)TypeInfo_System_Collections_IEnumerator,pIVar7);
      if ((char)pvVar8 == '\0') break;
      if (pIVar7 == (Il2CppObject *)0x0) {
        ThrowNullReferenceException();
      }
      pSVar9 = InterfaceInvoker0_Invoke
                         (0,(Il2CppClass *)TypeInfo_System_Collections_Generic_IEnumerator_string,pIVar7);
      if (entry == (Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry_Entry_o *)0x0) {
        ThrowNullReferenceException();
      }
      pSVar10 = (entry->fields).ScopeId;
      if ((TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry->_2).
          cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry);
      }
      if (Il2CppMethodInitialized_1843476dc == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&"\n");
        Il2CppMethodInitialized_1843476dc = '\x01';
      }
      if (pSVar10 == (System_String_o *)0x0) {
        pSVar10 = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
      }
      pSVar10 = System_String__Concat_1969b70(pSVar10,"\n",pSVar9,(MethodInfo *)0x0);
      if (keys == (System_Collections_Generic_Dictionary_string__List_AottgKeybindConflictRegistry_Entry___o *
                  )0x0) {
        ThrowNullReferenceException();
      }
      bVar6 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                        ((System_Collections_Generic_Dictionary_object__object__o *)keys,
                         (Il2CppObject *)pSVar10,(Il2CppObject **)&local_res20,
                         (MethodInfo_14769C0 *)
                         MethodInfo_System_Collections_Generic_Dictionary_string_List_AottgKeybindConflictRegistry_Entry_TryGetValue
                        );
      index = index_00;
      if (bVar6) {
        while( true ) {
          if (local_res20 == (System_Collections_Generic_List_object__o *)0x0) {
            ThrowNullReferenceException();
          }
          if ((local_res20->fields)._size <= index) break;
          item = (Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry_Entry_o *)
                 System_Collections_Generic_List_object___System_Collections_IList_get_Item
                           (local_res20,index,
                            (MethodInfo_92B830 *)
                            MethodInfo_System_Collections_Generic_List_AottgKeybindConflictRegistry_Entry_get_Item
                           );
          if (item != entry) {
            if (__this == (System_Collections_Generic_List_AottgKeybindConflictRegistry_Entry__o *)0x0) {
              ThrowNullReferenceException();
            }
            bVar6 = System_Collections_Generic_List_object___Contains
                              ((System_Collections_Generic_List_object__o *)__this,(Il2CppObject *)item,
                               (MethodInfo_93FC70 *)
                               MethodInfo_System_Collections_Generic_List_AottgKeybindConflictRegistry_Entry_Contains
                              );
            if (!bVar6) {
              if ((TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry->_2).
                  cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)
                           TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry);
              }
              if (Il2CppMethodInitialized_1843476db == '\0') {
                il2cpp_codegen_initialize_runtime_metadata
                          (&MethodInfo_System_Collections_Generic_HashSet_string_Contains);
                Il2CppMethodInitialized_1843476db = '\x01';
              }
              pSVar3 = (System_Collections_Generic_HashSet_object__o *)(entry->fields).DefaultKeys;
              if (pSVar3 == (System_Collections_Generic_HashSet_object__o *)0x0) {
                ThrowNullReferenceException();
              }
              bVar6 = System_Collections_Generic_HashSet_object___Contains
                                (pSVar3,(Il2CppObject *)pSVar9,
                                 (MethodInfo_1759E40 *)
                                 MethodInfo_System_Collections_Generic_HashSet_string_Contains);
              if (bVar6) {
                if (item == (Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry_Entry_o *)0x0) {
                  ThrowNullReferenceException();
                }
                pSVar3 = (System_Collections_Generic_HashSet_object__o *)(item->fields).DefaultKeys;
                if (pSVar3 == (System_Collections_Generic_HashSet_object__o *)0x0) {
                  ThrowNullReferenceException();
                }
                bVar6 = System_Collections_Generic_HashSet_object___Contains
                                  (pSVar3,(Il2CppObject *)pSVar9,
                                   (MethodInfo_1759E40 *)
                                   MethodInfo_System_Collections_Generic_HashSet_string_Contains);
                if (bVar6) goto label_182306543;
              }
              il2cpp_runtime_helper_180012890(__this,item,
                            MethodInfo_System_Collections_Generic_List_AottgKeybindConflictRegistry_Entry_Add)
              ;
            }
          }
label_182306543:
          index = index + 1;
        }
      }
    }
    if (pIVar7 != (Il2CppObject *)0x0) {
      InterfaceInvoker0_Invoke(0,(Il2CppClass *)TypeInfo_System_IDisposable,pIVar7);
    }
    if ((TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry_c->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry_c);
    }
    __this_00 = (UnityEngine_Rendering_DynamicArray_SortComparer_T__o *)
                TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry_c->static_fields->
                __9__10_0;
    if (__this_00 == (UnityEngine_Rendering_DynamicArray_SortComparer_T__o *)0x0) {
      if ((TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry_c->_2).
          cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry_c);
      }
      pIVar7 = (Il2CppObject *)
               TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry_c->static_fields->__9;
      __this_00 = (UnityEngine_Rendering_DynamicArray_SortComparer_T__o *)
                  il2cpp_codegen_object_new
                            ((Il2CppClass *)TypeInfo_System_Comparison_AottgKeybindConflictRegistry_Entry);
      UnityEngine_Rendering_DynamicArray_SortComparer_object____ctor
                (__this_00,pIVar7,
                 (intptr_t)
                 MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry_c_ConflictLabels_b__10_0
                 ,(MethodInfo_C980B0 *)0x0);
      TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry_c->static_fields->__9__10_0 =
           (System_Comparison_AottgKeybindConflictRegistry_Entry__o *)__this_00;
      Il2CppCodeGenWriteBarrier
                (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry_c->static_fields->
                  __9__10_0,__this_00);
    }
    if (__this != (System_Collections_Generic_List_AottgKeybindConflictRegistry_Entry__o *)0x0) {
      System_Collections_Generic_List_object___Sort_949260
                ((System_Collections_Generic_List_object__o *)__this,(System_Comparison_T__o *)__this_00,
                 (MethodInfo_949260 *)
                 MethodInfo_System_Collections_Generic_List_AottgKeybindConflictRegistry_Entry_Sort);
      capacity = (__this->fields)._size;
      __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
      System_Collections_Generic_List_object____ctor
                ((System_Collections_Generic_List_T__o *)__this_01,capacity,
                 (MethodInfo_92A4F0 *)MethodInfo_System_Collections_Generic_List_string_ctor_40dc058);
      while( true ) {
        if ((__this->fields)._size <= index_00) {
          return __this_01;
        }
        pIVar7 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                           ((System_Collections_Generic_List_object__o *)__this,index_00,
                            (MethodInfo_92B830 *)
                            MethodInfo_System_Collections_Generic_List_AottgKeybindConflictRegistry_Entry_get_Item
                           );
        pMVar5 = MethodInfo_System_Collections_Generic_List_string_Add;
        if ((pIVar7 == (Il2CppObject *)0x0) || (__this_01 == (System_Collections_Generic_List_string__o *)0x0)
           ) break;
        pSVar9 = pIVar7[2].monitor;
        piVar1 = &(__this_01->fields)._version;
        *piVar1 = *piVar1 + 1;
        pSVar4 = (__this_01->fields)._items;
        if (pSVar4 == (System_String_array *)0x0) break;
        uVar2 = (__this_01->fields)._size;
        if (uVar2 < (uint)pSVar4->max_length) {
          (__this_01->fields)._size = uVar2 + 1;
          if ((uint)pSVar4->max_length <= uVar2) {
            ThrowIndexOutOfRangeException();
          }
          pSVar4->m_Items[(int)uVar2] = pSVar9;
          Il2CppCodeGenWriteBarrier(pSVar4->m_Items + (int)uVar2,pSVar9);
          index_00 = index_00 + 1;
        }
        else {
          System_Collections_Generic_List_object___AddWithResize
                    ((System_Collections_Generic_List_object__o *)__this_01,(Il2CppObject *)pSVar9,
                     (MethodInfo_93DD50 *)pMVar5->klass->rgctx_data[0xe].method);
          index_00 = index_00 + 1;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.SettingsScreen.AottgKeybindConflictRegistry$$IsDefaultDuplicate
// il2cpp: bool Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry__IsDefaultDuplicate (Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry_Entry_o* entry, Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry_Entry_o* other, System_String_o* key, const MethodInfo* method);
// 0x182306870

bool Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry__IsDefaultDuplicate
               (Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry_Entry_o *entry,
               Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry_Entry_o *other,
               System_String_o *key,MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *pSVar1;
  bool bVar2;
  
  if (Il2CppMethodInitialized_1843476db == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Contains)
    ;
    Il2CppMethodInitialized_1843476db = '\x01';
  }
  if ((entry != (Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry_Entry_o *)0x0) &&
     (pSVar1 = (System_Collections_Generic_HashSet_object__o *)(entry->fields).DefaultKeys,
     pSVar1 != (System_Collections_Generic_HashSet_object__o *)0x0)) {
    bVar2 = System_Collections_Generic_HashSet_object___Contains
                      (pSVar1,(Il2CppObject *)key,
                       (MethodInfo_1759E40 *)MethodInfo_System_Collections_Generic_HashSet_string_Contains);
    if (!bVar2) {
      return false;
    }
    if ((other != (Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry_Entry_o *)0x0) &&
       (pSVar1 = (System_Collections_Generic_HashSet_object__o *)(other->fields).DefaultKeys,
       pSVar1 != (System_Collections_Generic_HashSet_object__o *)0x0)) {
      bVar2 = System_Collections_Generic_HashSet_object___Contains
                        (pSVar1,(Il2CppObject *)key,
                         (MethodInfo_1759E40 *)MethodInfo_System_Collections_Generic_HashSet_string_Contains);
      return bVar2;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.SettingsScreen.AottgKeybindConflictRegistry$$ScopedKey
// il2cpp: System_String_o* Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry__ScopedKey (System_String_o* scopeId, System_String_o* key, const MethodInfo* method);
// 0x182307170

System_String_o *
Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry__ScopedKey
          (System_String_o *scopeId,System_String_o *key,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_1843476dc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"\n");
    Il2CppMethodInitialized_1843476dc = '\x01';
  }
  if (scopeId == (System_String_o *)0x0) {
    scopeId = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
  }
  pSVar1 = System_String__Concat_1969b70(scopeId,"\n",key,(MethodInfo *)0x0);
  return pSVar1;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgKeybindConflictRegistry$$Keys
// il2cpp: System_Collections_Generic_IEnumerable_string__o* Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry__Keys (Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry_Entry_o* entry, const MethodInfo* method);
// 0x182306df0

System_Collections_Generic_IEnumerable_string__o *
Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry__Keys
          (Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry_Entry_o *entry,MethodInfo *method)

{
  int32_t iVar1;
  Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry__Keys_d__13_o *__this;
  
  if (Il2CppMethodInitialized_1843476dd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry_Keys_d__13);
    Il2CppMethodInitialized_1843476dd = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)
                      TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry_Keys_d__13);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = -2;
  iVar1 = System_Diagnostics_TraceEventCache__GetThreadId((MethodInfo *)0x0);
  (__this->fields).__l__initialThreadId = iVar1;
  (__this->fields).__3__entry = entry;
  Il2CppCodeGenWriteBarrier(&(__this->fields).__3__entry,entry);
  return (System_Collections_Generic_IEnumerable_string__o *)__this;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgKeybindConflictRegistry$$BuildDefaultKeys
// il2cpp: System_Collections_Generic_HashSet_string__o* Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry__BuildDefaultKeys (Settings_KeybindSetting_o* setting, const MethodInfo* method);
// 0x182305e90
// eh: try 0x182305fe0..0x182306138 -> pad 0x183315930 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 25 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x182305fde: nop 
// asm:   0x1823060e1: jmp 0x18230610e
// asm:   0x1823060e3: mov r8, qword ptr [rsp + 0x30]
// asm:   0x1823060e8: cmp qword ptr [r8], 0
// asm:   0x1823060ec: je 0x1823060ff
// asm:   0x1823060ee: xor ecx, ecx
// asm:   0x1823060f0: mov r8, qword ptr [r8]
// asm:   0x1823060f3: mov rdx, qword ptr [rip + 0x1d93206]  ; TypeInfo_System_IDisposable
// asm:   0x1823060fa: call 0x180014840  ; InterfaceInvoker0_Invoke()
// asm:   0x1823060ff: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x182306104: test rcx, rcx
// asm:   0x182306107: jne 0x182306138
// asm:   0x182306109: mov rsi, qword ptr [rsp + 0x60]
// asm:   0x182306138: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183315930: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183315935: push rbp
// asm:   0x183315936: sub rsp, 0x20
// asm:   0x18331593a: mov rbp, rdx
// asm:   0x18331593d: mov rax, qword ptr [rbp + 0x20]
// asm:   0x183315941: mov rcx, qword ptr [rax]
// asm:   0x183315944: mov qword ptr [rbp + 0x28], rcx
// asm:   0x183315948: movabs rax, 0
// asm:   0x183315952: add rsp, 0x20
// asm:   0x183315956: pop rbp
// asm:   0x183315957: ret 

System_Collections_Generic_HashSet_string__o *
Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry__BuildDefaultKeys
          (Settings_KeybindSetting_o *setting,MethodInfo *method)

{
  ushort uVar1;
  System_OrdinalIgnoreCaseComparer_o *comparer;
  Il2CppClass *pIVar2;
  Il2CppRuntimeInterfaceOffsetPair *pIVar3;
  bool bVar4;
  System_Collections_Generic_HashSet_string__o *__this;
  Il2CppObject *pIVar5;
  void *pvVar6;
  VirtualInvokeData *pVVar7;
  Settings_InputKey_o *__this_00;
  System_String_o *item;
  ushort uVar8;
  
  if (Il2CppMethodInitialized_1843476de == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_string_ctor_40e3a10);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IDisposable);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_IEnumerable_InputKey);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_IEnumerator_InputKey);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_IEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_StringComparer);
    Il2CppMethodInitialized_1843476de = '\x01';
  }
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
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor_176d450
            ((System_Collections_Generic_HashSet_object__o *)__this,
             (System_Collections_Generic_IEqualityComparer_T__o *)comparer,
             (MethodInfo_176D450 *)MethodInfo_System_Collections_Generic_HashSet_string_ctor_40e3a10);
  if (setting != (Settings_KeybindSetting_o *)0x0) {
    pIVar5 = (Il2CppObject *)Settings_KeybindSetting__DefaultInputKeys(setting,(MethodInfo *)0x0);
    if (pIVar5 == (Il2CppObject *)0x0) {
      ThrowNullReferenceException();
    }
    pIVar5 = InterfaceInvoker0_Invoke
                       (0,(Il2CppClass *)TypeInfo_System_Collections_Generic_IEnumerable_InputKey,pIVar5);
    while( true ) {
      if (pIVar5 == (Il2CppObject *)0x0) {
        ThrowNullReferenceException();
      }
      pvVar6 = InterfaceInvoker0_Invoke(0,(Il2CppClass *)TypeInfo_System_Collections_IEnumerator,pIVar5);
      if ((char)pvVar6 == '\0') break;
      if (pIVar5 == (Il2CppObject *)0x0) {
        ThrowNullReferenceException();
      }
      pIVar2 = pIVar5->klass;
      uVar1 = (pIVar2->_2).interface_offsets_count;
      if (uVar1 != 0) {
        uVar8 = 0;
        pIVar3 = (pIVar2->_1).interfaceOffsets;
        do {
          if (pIVar3[uVar8].interfaceType ==
              (Il2CppClass *)TypeInfo_System_Collections_Generic_IEnumerator_InputKey) {
            pVVar7 = pIVar2->vtable + pIVar3[uVar8].offset;
            goto label_182306056;
          }
          uVar8 = uVar8 + 1;
        } while (uVar8 < uVar1);
      }
      pVVar7 = GetInterfaceInvokeDataFromVTableSlowPath
                         (pIVar5,(Il2CppClass *)TypeInfo_System_Collections_Generic_IEnumerator_InputKey,0);
label_182306056:
      __this_00 = (Settings_InputKey_o *)(*pVVar7->methodPtr)(pIVar5,pVVar7->method);
      if ((__this_00 != (Settings_InputKey_o *)0x0) &&
         (bVar4 = Settings_InputKey__IsNone(__this_00,(MethodInfo *)0x0), !bVar4)) {
        item = (*(__this_00->klass->vtable)._3_ToString.methodPtr)
                         (__this_00,(__this_00->klass->vtable)._3_ToString.method);
        if (__this == (System_Collections_Generic_HashSet_string__o *)0x0) {
          ThrowNullReferenceException();
        }
        System_Collections_Generic_HashSet_object___Add
                  ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)item,
                   (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
      }
    }
    if (pIVar5 != (Il2CppObject *)0x0) {
      InterfaceInvoker0_Invoke(0,(Il2CppClass *)TypeInfo_System_IDisposable,pIVar5);
    }
  }
  return __this;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgKeybindConflictRegistry$$.cctor
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry___cctor (const MethodInfo* method);
// 0x182307520

void Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry___cctor(MethodInfo *method)

{
  System_OrdinalIgnoreCaseComparer_o *comparer;
  System_Collections_Generic_Dictionary_string__AottgKeybindConflictRegistry_Entry__o *__this;
  
  if (Il2CppMethodInitialized_1843476df == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_string_AottgKeybindConflictRegistry_Entry_ctor
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_Dictionary_string_AottgKeybindConflictRegistry_Entry);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_StringComparer);
    Il2CppMethodInitialized_1843476df = '\x01';
  }
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
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)
                      TypeInfo_System_Collections_Generic_Dictionary_string_AottgKeybindConflictRegistry_Entry
                     );
  System_Collections_Generic_Dictionary_object__ProbeReferenceVolume_CellData_PerScenarioData____ctor_1453150
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this,
             (System_Collections_Generic_IEqualityComparer_TKey__o *)comparer,
             (MethodInfo_1453150 *)
             MethodInfo_System_Collections_Generic_Dictionary_string_AottgKeybindConflictRegistry_Entry_ctor);
  TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry->static_fields->Entries = __this;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry->static_fields->Entries,
             __this);
  return;
}


