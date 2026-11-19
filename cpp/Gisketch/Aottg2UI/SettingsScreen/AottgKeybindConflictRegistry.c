// Type: Gisketch.Aottg2UI.SettingsScreen.AottgKeybindConflictRegistry
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp_body_deref/Scripts/Gisketch.Aottg2UI.SettingsScreen/AottgKeybindConflictRegistry.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.SettingsScreen.AottgKeybindConflictRegistry.Entry$$.ctor
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry_Entry___ctor (Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry_Entry_o* __this, System_String_o* rowId, int32_t order, const MethodInfo* method);
// 0x5dbf9b0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5dbf9e6: cmp byte ptr [rip + 0x1782e99], 0

void Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry_Entry___ctor
               (Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry_Entry_o *__this,
               System_String_o *rowId,int32_t order,MethodInfo *method)

{
  uint32_t uVar1;
  System_OrdinalIgnoreCaseComparer_o *comparer;
  System_Collections_Generic_HashSet_string__o *__this_00;
  
  if (Il2CppMethodInitialized_07548185 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_string_ctor_7191708);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_StringComparer);
    Il2CppMethodInitialized_07548185 = '\x01';
    uVar1 = (TypeInfo_System_StringComparer->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_System_StringComparer->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
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
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor_4fb2f30
            ((System_Collections_Generic_HashSet_object__o *)__this_00,
             (System_Collections_Generic_IEqualityComparer_T__o *)comparer,
             (MethodInfo_4FB2F30 *)MethodInfo_System_Collections_Generic_HashSet_string_ctor_7191708);
  (__this->fields).DefaultKeys = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields).DefaultKeys);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).RowId = rowId;
  Il2CppCodeGenWriteBarrier(&(__this->fields).RowId);
  (__this->fields).Order = order;
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgKeybindConflictRegistry.<>c$$.cctor
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry___c___cctor (const MethodInfo* method);
// 0x5dc1840

void Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry___c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (Il2CppMethodInitialized_07548186 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry_c);
    Il2CppMethodInitialized_07548186 = '\x01';
  }
  __this = (Il2CppObject *)
           il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry_c)
  ;
  System_Object___ctor(__this,(MethodInfo *)0x0);
  TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry_c->static_fields->__9 =
       (Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry___c_o *)__this;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry_c->static_fields->__9);
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgKeybindConflictRegistry.<>c$$.ctor
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry___c___ctor (Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry___c_o* __this, const MethodInfo* method);
// 0x5dc18b0

void Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry___c___ctor
               (Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry___c_o *__this,MethodInfo *method
               )

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgKeybindConflictRegistry.<>c$$<ConflictLabels>b__10_0
// il2cpp: int32_t Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry___c___ConflictLabels_b__10_0 (Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry___c_o* __this, Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry_Entry_o* a, Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry_Entry_o* b, const MethodInfo* method);
// 0x5dc18c0

int32_t Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry___c___ConflictLabels_b__10_0
                  (Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry___c_o *__this,
                  Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry_Entry_o *a,
                  Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry_Entry_o *b,MethodInfo *method)

{
  int32_t iVar1;
  
  if ((a == (Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry_Entry_o *)0x0) ||
     (b == (Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry_Entry_o *)0x0)) {
    ThrowNullReferenceException();
  }
  iVar1 = System_Int32__CompareTo_54b7380(&(a->fields).Order,(b->fields).Order,(MethodInfo *)0x0);
  return iVar1;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgKeybindConflictRegistry.<Keys>d__13$$.ctor
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry__Keys_d__13___ctor (Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry__Keys_d__13_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x5dc16d0

void Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry__Keys_d__13___ctor
               (Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry__Keys_d__13_o *__this,
               int32_t __1__state,MethodInfo *method)

{
  int32_t iVar1;
  
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  iVar1 = System_Environment__get_CurrentManagedThreadId((MethodInfo *)0x0);
  (__this->fields).__l__initialThreadId = iVar1;
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgKeybindConflictRegistry.<Keys>d__13$$System.IDisposable.Dispose
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry__Keys_d__13__System_IDisposable_Dispose (Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry__Keys_d__13_o* __this, const MethodInfo* method);
// 0x5dc18f0

void Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry__Keys_d__13__System_IDisposable_Dispose
               (Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry__Keys_d__13_o *__this,
               MethodInfo *method)

{
  int iVar1;
  
  iVar1 = (__this->fields).__1__state;
  if ((iVar1 != 1) && (iVar1 != -3)) {
    return;
  }
  if (Il2CppMethodInitialized_07548188 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_InputKey_Dispose);
    Il2CppMethodInitialized_07548188 = '\x01';
  }
  (__this->fields).__1__state = -1;
  System_Collections_Generic_List_Enumerator_object___Dispose
            ((System_Collections_Generic_List_Enumerator_object__o *)&(__this->fields).__7__wrap2,
             (MethodInfo_4C45C40 *)MethodInfo_System_Collections_Generic_List_Enumerator_InputKey_Dispose);
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgKeybindConflictRegistry.<Keys>d__13$$MoveNext
// il2cpp: bool Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry__Keys_d__13__MoveNext (Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry__Keys_d__13_o* __this, const MethodInfo* method);
// 0x5dc1940
// eh: try 0x5dc19fa..0x5dc1c17 -> pad 0x5dc1c25 (+14 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5dc1c4b..0x5dc1c50 -> pad 0x5dc1c66 cleanup
// eh: try 0x5dc1c69..0x5dc1c73 -> pad 0x5dc1c7b catch (...) [compiler noexcept guard]
// asm: 36 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5dc1a2c: jmp 0x5dc1a4d
// asm:   0x5dc1c17: jmp 0x5dc1c33
// asm:   0x5dc1c19: jmp 0x5dc1c33
// asm:   0x5dc1c1b: jmp 0x5dc1c33
// asm:   0x5dc1c1d: jmp 0x5dc1c33
// asm:   0x5dc1c1f: jmp 0x5dc1c33
// asm:   0x5dc1c21: jmp 0x5dc1c33
// asm:   0x5dc1c23: jmp 0x5dc1c33
// asm:   0x5dc1c25: jmp 0x5dc1c33
// asm:   0x5dc1c27: jmp 0x5dc1c33
// asm:   0x5dc1c29: jmp 0x5dc1c33
// asm:   0x5dc1c2b: jmp 0x5dc1c33
// asm:   0x5dc1c2d: jmp 0x5dc1c33
// asm:   0x5dc1c2f: jmp 0x5dc1c33
// asm:   0x5dc1c31: jmp 0x5dc1c33
// asm:   0x5dc1c33: mov rbx, rax
// asm:   0x5dc1c36: cmp edx, 1
// asm:   0x5dc1c39: jne 0x5dc1c69
// asm:   0x5dc1c3b: mov rdi, rbx
// asm:   0x5dc1c3e: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5dc1c43: mov rbx, qword ptr [rax]
// asm:   0x5dc1c46: mov qword ptr [rsp + 8], rbx
// asm:   0x5dc1c4b: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5dc1c50: test rbx, rbx
// asm:   0x5dc1c53: je 0x5dc1bf7
// asm:   0x5dc1c55: mov rdi, qword ptr [rsp]
// asm:   0x5dc1c59: call 0x2fde500  ; il2cpp_runtime_helper_02fde500()
// asm:   0x5dc1c5e: mov rdi, rbx
// asm:   0x5dc1c61: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5dc1c66: mov rbx, rax
// asm:   0x5dc1c69: lea rdi, [rsp + 8]
// asm:   0x5dc1c6e: call 0x2fde320  ; il2cpp_runtime_helper_02fde320()
// asm:   0x5dc1c73: mov rdi, rbx
// asm:   0x5dc1c76: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5dc1c7b: mov rdi, rax
// asm:   0x5dc1c7e: call 0x2ab61e0  ; __clang_call_terminate()

bool Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry__Keys_d__13__MoveNext
               (Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry__Keys_d__13_o *__this,
               MethodInfo *method)

{
  int iVar1;
  uint32_t uVar2;
  Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry_Entry_o *pGVar3;
  Settings_KeybindSetting_o *pSVar4;
  System_OrdinalIgnoreCaseComparer_o *comparer;
  System_Collections_Generic_List_InputKey__o *__this_00;
  Settings_InputKey_o *__this_01;
  System_Collections_Generic_HashSet_object__o *__this_02;
  Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry__Keys_d__13_o *pGVar5;
  Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry__Keys_d__13_o **ppGVar6;
  bool bVar7;
  System_Collections_Generic_HashSet_string__o *__this_03;
  System_String_o *item;
  Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry__Keys_d__13_o *local_68;
  undefined8 local_60;
  undefined1 *local_58;
  System_Collections_Generic_List_Enumerator_T__o local_50;
  System_Collections_Generic_List_T__o *local_38;
  int32_t iStack_30;
  int32_t iStack_2c;
  Settings_InputKey_o *local_28;
  
  local_68 = __this;
  if (Il2CppMethodInitialized_07548187 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_InputKey_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_InputKey_get_Current);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_string_ctor_7191708);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_string);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_InputKey_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_StringComparer);
    Il2CppMethodInitialized_07548187 = '\x01';
  }
  local_58 = (undefined1 *)&local_68;
  local_60 = 0;
  iVar1 = (__this->fields).__1__state;
  ppGVar6 = &local_68;
  if (iVar1 != 1) {
    if (iVar1 != 0) {
      return false;
    }
    (__this->fields).__1__state = -1;
    pGVar3 = (__this->fields).entry;
    if (pGVar3 == (Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry_Entry_o *)0x0) {
      return false;
    }
    pSVar4 = (pGVar3->fields).Setting;
    if (pSVar4 == (Settings_KeybindSetting_o *)0x0) {
      return false;
    }
    Gisketch_Aottg2UI_SettingsScreen_AottgKeybindSettingRow__EnsureSlots(pSVar4,method);
    if ((TypeInfo_System_StringComparer->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_StringComparer);
    }
    if (Il2CppMethodInitialized_07542886 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_StringComparer);
      Il2CppMethodInitialized_07542886 = '\x01';
      uVar2 = (TypeInfo_System_StringComparer->_2).cctor_finished_or_no_cctor;
    }
    else {
      uVar2 = (TypeInfo_System_StringComparer->_2).cctor_finished_or_no_cctor;
    }
    if (uVar2 == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_StringComparer);
    }
    comparer = TypeInfo_System_StringComparer->static_fields->s_ordinalIgnoreCase;
    __this_03 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_string);
    System_Collections_Generic_HashSet_object____ctor_4fb2f30
              ((System_Collections_Generic_HashSet_object__o *)__this_03,
               (System_Collections_Generic_IEqualityComparer_T__o *)comparer,
               (MethodInfo_4FB2F30 *)MethodInfo_System_Collections_Generic_HashSet_string_ctor_7191708);
    (local_68->fields)._seen_5__2 = __this_03;
    Il2CppCodeGenWriteBarrier(&(local_68->fields)._seen_5__2);
    pGVar3 = (local_68->fields).entry;
    if (pGVar3 == (Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry_Entry_o *)0x0) {
      ThrowNullReferenceException();
    }
    pSVar4 = (pGVar3->fields).Setting;
    if (pSVar4 == (Settings_KeybindSetting_o *)0x0) {
      ThrowNullReferenceException();
    }
    __this_00 = (pSVar4->fields).InputKeys;
    if (__this_00 == (System_Collections_Generic_List_InputKey__o *)0x0) {
      ThrowNullReferenceException();
    }
    System_Collections_Generic_List_object___GetEnumerator
              (&local_50,(System_Collections_Generic_List_object__o *)__this_00,
               (MethodInfo_395E050 *)MethodInfo_System_Collections_Generic_List_InputKey_GetEnumerator);
    local_28 = (Settings_InputKey_o *)local_50.fields._current;
    local_38 = local_50.fields._list;
    iStack_30 = local_50.fields._index;
    iStack_2c = local_50.fields._version;
    (local_68->fields).__7__wrap2.fields._current = (Settings_InputKey_o *)local_50.fields._current;
    (local_68->fields).__7__wrap2.fields._list = local_50.fields._list;
    (local_68->fields).__7__wrap2.fields._index = local_50.fields._index;
    (local_68->fields).__7__wrap2.fields._version = local_50.fields._version;
    Il2CppCodeGenWriteBarrier((void **)&(local_68->fields).__7__wrap2);
    __this = local_68;
    ppGVar6 = (Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry__Keys_d__13_o **)local_58;
  }
  local_58 = (undefined1 *)ppGVar6;
  (__this->fields).__1__state = -3;
  do {
    bVar7 = System_Collections_Generic_List_Enumerator_object___MoveNext
                      ((System_Collections_Generic_List_Enumerator_object__o *)&(__this->fields).__7__wrap2,
                       (MethodInfo_4C45C50 *)
                       MethodInfo_System_Collections_Generic_List_Enumerator_InputKey_MoveNext);
    pGVar5 = local_68;
    if (!bVar7) {
      if (Il2CppMethodInitialized_07548188 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_System_Collections_Generic_List_Enumerator_InputKey_Dispose);
        Il2CppMethodInitialized_07548188 = '\x01';
      }
      (pGVar5->fields).__1__state = -1;
      System_Collections_Generic_List_Enumerator_object___Dispose
                ((System_Collections_Generic_List_Enumerator_object__o *)&(pGVar5->fields).__7__wrap2,
                 (MethodInfo_4C45C40 *)MethodInfo_System_Collections_Generic_List_Enumerator_InputKey_Dispose)
      ;
      (local_68->fields).__7__wrap2.fields._list = (System_Collections_Generic_List_T__o *)0x0;
      (local_68->fields).__7__wrap2.fields._index = 0;
      (local_68->fields).__7__wrap2.fields._version = 0;
      (local_68->fields).__7__wrap2.fields._current = (Settings_InputKey_o *)0x0;
      return false;
    }
    __this_01 = (local_68->fields).__7__wrap2.fields._current;
    if ((__this_01 != (Settings_InputKey_o *)0x0) &&
       (bVar7 = Settings_InputKey__IsNone(__this_01,(MethodInfo *)0x0), !bVar7)) {
      item = (*(__this_01->klass->vtable)._3_ToString.methodPtr)
                       (__this_01,(__this_01->klass->vtable)._3_ToString.method);
      __this_02 = (System_Collections_Generic_HashSet_object__o *)(local_68->fields)._seen_5__2;
      if (__this_02 == (System_Collections_Generic_HashSet_object__o *)0x0) {
        ThrowNullReferenceException();
      }
      bVar7 = System_Collections_Generic_HashSet_object___Add
                        (__this_02,(Il2CppObject *)item,
                         (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
      if (bVar7) {
        (local_68->fields).__2__current = item;
        Il2CppCodeGenWriteBarrier(&(local_68->fields).__2__current);
        (local_68->fields).__1__state = 1;
        return true;
      }
    }
    __this = local_68;
  } while( true );
}


// Gisketch.Aottg2UI.SettingsScreen.AottgKeybindConflictRegistry.<Keys>d__13$$<>m__Finally1
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry__Keys_d__13____m__Finally1 (Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry__Keys_d__13_o* __this, const MethodInfo* method);
// 0x5dc1c90

void Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry__Keys_d__13____m__Finally1
               (Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry__Keys_d__13_o *__this,
               MethodInfo *method)

{
  if (Il2CppMethodInitialized_07548188 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_InputKey_Dispose);
    Il2CppMethodInitialized_07548188 = '\x01';
  }
  (__this->fields).__1__state = -1;
  System_Collections_Generic_List_Enumerator_object___Dispose
            ((System_Collections_Generic_List_Enumerator_object__o *)&(__this->fields).__7__wrap2,
             (MethodInfo_4C45C40 *)MethodInfo_System_Collections_Generic_List_Enumerator_InputKey_Dispose);
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgKeybindConflictRegistry.<Keys>d__13$$System.Collections.Generic.IEnumerator<System.String>.get_Current
// il2cpp: System_String_o* Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry__Keys_d__13__System_Collections_Generic_IEnumerator_System_String__get_Current (Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry__Keys_d__13_o* __this, const MethodInfo* method);
// 0x5dc1cd0

System_String_o *
Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry__Keys_d__13__System_Collections_Generic_IEnumerator_System_String__get_Current
          (Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry__Keys_d__13_o *__this,
          MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgKeybindConflictRegistry.<Keys>d__13$$System.Collections.IEnumerator.Reset
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry__Keys_d__13__System_Collections_IEnumerator_Reset (Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry__Keys_d__13_o* __this, const MethodInfo* method);
// 0x5dc1ce0

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
// 0x5dc1d20

Il2CppObject *
Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry__Keys_d__13__System_Collections_IEnumerator_get_Current
          (Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry__Keys_d__13_o *__this,
          MethodInfo *method)

{
  return (Il2CppObject *)(__this->fields).__2__current;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgKeybindConflictRegistry.<Keys>d__13$$System.Collections.Generic.IEnumerable<System.String>.GetEnumerator
// il2cpp: System_Collections_Generic_IEnumerator_string__o* Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry__Keys_d__13__System_Collections_Generic_IEnumerable_System_String__GetEnumerator (Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry__Keys_d__13_o* __this, const MethodInfo* method);
// 0x5dc1d30

System_Collections_IEnumerator_o *
Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry__Keys_d__13__System_Collections_Generic_IEnumerable_System_String__GetEnumerator
          (Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry__Keys_d__13_o *__this,
          MethodInfo *method)

{
  int iVar1;
  int32_t iVar2;
  Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry__Keys_d__13_o *__this_00;
  
  if (Il2CppMethodInitialized_07548189 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry_Keys_d__13);
    Il2CppMethodInitialized_07548189 = '\x01';
  }
  if ((__this->fields).__1__state == -2) {
    iVar1 = (__this->fields).__l__initialThreadId;
    iVar2 = System_Environment__get_CurrentManagedThreadId((MethodInfo *)0x0);
    if (iVar1 == iVar2) {
      (__this->fields).__1__state = 0;
      __this_00 = __this;
      goto label_05dc1da3;
    }
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry_Keys_d__13);
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).__1__state = 0;
  iVar2 = System_Environment__get_CurrentManagedThreadId((MethodInfo *)0x0);
  (__this_00->fields).__l__initialThreadId = iVar2;
label_05dc1da3:
  (__this_00->fields).entry = (__this->fields).__3__entry;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).entry);
  return (System_Collections_IEnumerator_o *)__this_00;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgKeybindConflictRegistry.<Keys>d__13$$System.Collections.IEnumerable.GetEnumerator
// il2cpp: System_Collections_IEnumerator_o* Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry__Keys_d__13__System_Collections_IEnumerable_GetEnumerator (Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry__Keys_d__13_o* __this, const MethodInfo* method);
// 0x5dc1dc0

System_Collections_IEnumerator_o *
Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry__Keys_d__13__System_Collections_IEnumerable_GetEnumerator
          (Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry__Keys_d__13_o *__this,
          MethodInfo *method)

{
  System_Collections_IEnumerator_o *pSVar1;
  
  pSVar1 = Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry__Keys_d__13__System_Collections_Generic_IEnumerable_System_String__GetEnumerator
                     (__this,method);
  return pSVar1;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgKeybindConflictRegistry$$Register
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry__Register (System_String_o* rowId, System_String_o* scopeId, System_String_o* label, Settings_KeybindSetting_o* setting, const MethodInfo* method);
// 0x5dbf7a0

void Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry__Register
               (System_String_o *rowId,System_String_o *scopeId,System_String_o *label,
               Settings_KeybindSetting_o *setting,MethodInfo *method)

{
  uint uVar1;
  int order;
  System_Collections_Generic_Dictionary_object__object__o *pSVar2;
  bool bVar3;
  Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry_Entry_o *pGVar4;
  System_Collections_Generic_HashSet_string__o *pSVar5;
  MethodInfo *pMVar6;
  Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry_Entry_o *local_38;
  
  if (Il2CppMethodInitialized_07548179 == '\0') {
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
    Il2CppMethodInitialized_07548179 = '\x01';
  }
  local_38 = (Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry_Entry_o *)0x0;
  bVar3 = System_String__IsNullOrEmpty(rowId,(MethodInfo *)0x0);
  if ((setting == (Settings_KeybindSetting_o *)0x0) || (bVar3)) {
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
                      (pSVar2,(Il2CppObject *)rowId,(Il2CppObject **)&local_38,
                       (MethodInfo_4AAF440 *)
                       MethodInfo_System_Collections_Generic_Dictionary_string_AottgKeybindConflictRegistry_Entry_TryGetValue
                      );
    if (!bVar3) {
      if ((TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry->_2).
          cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry);
      }
      order = TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry->static_fields->
              _nextOrder;
      uVar1 = order + 1;
      pMVar6 = (MethodInfo *)(ulong)uVar1;
      TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry->static_fields->_nextOrder =
           uVar1;
      pGVar4 = il2cpp_codegen_object_new
                         ((Il2CppClass *)
                          TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry_Entry);
      Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry_Entry___ctor(pGVar4,rowId,order,pMVar6);
      pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
               TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry->static_fields->Entries;
      local_38 = pGVar4;
      if (pSVar2 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_05dbf9a3;
      System_Collections_Generic_Dictionary_object__object___set_Item
                (pSVar2,(Il2CppObject *)rowId,(Il2CppObject *)pGVar4,
                 (MethodInfo_4AAD4C0 *)
                 MethodInfo_System_Collections_Generic_Dictionary_string_AottgKeybindConflictRegistry_Entry_set_Item
                );
    }
    if (scopeId == (System_String_o *)0x0) {
      scopeId = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
    }
    if (local_38 != (Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry_Entry_o *)0x0) {
      (local_38->fields).ScopeId = scopeId;
      Il2CppCodeGenWriteBarrier(&(local_38->fields).ScopeId);
      pGVar4 = local_38;
      bVar3 = System_String__IsNullOrEmpty(label,(MethodInfo *)0x0);
      if (pGVar4 != (Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry_Entry_o *)0x0) {
        if (bVar3) {
          label = rowId;
        }
        (pGVar4->fields).Label = label;
        Il2CppCodeGenWriteBarrier(&(pGVar4->fields).Label);
        if (local_38 != (Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry_Entry_o *)0x0) {
          (local_38->fields).Setting = setting;
          pMVar6 = (MethodInfo *)setting;
          Il2CppCodeGenWriteBarrier(&(local_38->fields).Setting);
          pGVar4 = local_38;
          if ((TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry->_2).
              cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry);
          }
          pSVar5 = Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry__BuildDefaultKeys
                             (setting,pMVar6);
          if (pGVar4 != (Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry_Entry_o *)0x0) {
            (pGVar4->fields).DefaultKeys = pSVar5;
            Il2CppCodeGenWriteBarrier(&(pGVar4->fields).DefaultKeys);
            return;
          }
        }
      }
    }
  }
label_05dbf9a3:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.SettingsScreen.AottgKeybindConflictRegistry$$SyncAll
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry__SyncAll (Gisketch_Aottg2UI_GisketchUIRoot_o* root, const MethodInfo* method);
// 0x5dbff30
// eh: try 0x5dc0060..0x5dc023e -> pad 0x5dc024d (+17 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5dc027d..0x5dc0282 -> pad 0x5dc02a3 cleanup
// eh: try 0x5dc02a6..0x5dc02b0 -> pad 0x5dc02b8 catch (...) [compiler noexcept guard]
// asm: 47 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5dc0052: xor r13d, r13d
// asm:   0x5dc0055: jmp 0x5dc0078
// asm:   0x5dc0136: jmp 0x5dc0078
// asm:   0x5dc0140: xor r12d, r12d
// asm:   0x5dc0143: test r12, r12
// asm:   0x5dc0146: je 0x5dc0078
// asm:   0x5dc01c9: nop dword ptr [rax]
// asm:   0x5dc0243: jmp 0x5dc0265
// asm:   0x5dc0245: jmp 0x5dc0265
// asm:   0x5dc0247: jmp 0x5dc0265
// asm:   0x5dc0249: jmp 0x5dc0265
// asm:   0x5dc024b: jmp 0x5dc0265
// asm:   0x5dc024d: jmp 0x5dc0265
// asm:   0x5dc024f: jmp 0x5dc0265
// asm:   0x5dc0251: jmp 0x5dc0265
// asm:   0x5dc0253: jmp 0x5dc0265
// asm:   0x5dc0255: jmp 0x5dc0265
// asm:   0x5dc0257: jmp 0x5dc0265
// asm:   0x5dc0259: jmp 0x5dc0265
// asm:   0x5dc025b: jmp 0x5dc0265
// asm:   0x5dc025d: jmp 0x5dc0265
// asm:   0x5dc025f: jmp 0x5dc0265
// asm:   0x5dc0261: jmp 0x5dc0265
// asm:   0x5dc0263: jmp 0x5dc0265
// asm:   0x5dc0265: mov rbx, rax
// asm:   0x5dc0268: cmp edx, 1
// asm:   0x5dc026b: jne 0x5dc02a6
// asm:   0x5dc026d: mov rdi, rbx
// asm:   0x5dc0270: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5dc0275: mov rbx, qword ptr [rax]
// asm:   0x5dc0278: mov qword ptr [rsp + 0x30], rbx
// asm:   0x5dc027d: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5dc0282: lea rax, [rip + 0x14cffdf]  ; MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string_AottgKeybindConflictRegi
// asm:   0x5dc0289: mov rsi, qword ptr [rax]
// asm:   0x5dc028c: lea rdi, [rsp + 0x10]
// asm:   0x5dc0291: call 0x4de71f0  ; System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___Dispose()
// asm:   0x5dc0296: test rbx, rbx
// asm:   0x5dc0299: je 0x5dc0220
// asm:   0x5dc029b: mov rdi, rbx
// asm:   0x5dc029e: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5dc02a3: mov rbx, rax
// asm:   0x5dc02a6: lea rdi, [rsp + 0x30]
// asm:   0x5dc02ab: call 0x2fde110  ; il2cpp_runtime_helper_02fde110()
// asm:   0x5dc02b0: mov rdi, rbx
// asm:   0x5dc02b3: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5dc02b8: mov rdi, rax
// asm:   0x5dc02bb: call 0x2ab61e0  ; __clang_call_terminate()

void Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry__SyncAll
               (Gisketch_Aottg2UI_GisketchUIRoot_o *root,MethodInfo *method)

{
  int iVar1;
  System_Collections_Generic_Dictionary_object__object__o *__this;
  Gisketch_Aottg2UI_State_GisketchUIState_o *pGVar2;
  Il2CppObject *pIVar3;
  bool bVar4;
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *__this_00;
  System_String_o *value;
  System_Collections_Generic_List_string__o *pSVar5;
  System_String_o *pSVar6;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *pMVar7;
  MethodInfo *extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
  Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry_c *method_00;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o local_68;
  System_Collections_Generic_Dictionary_string__List_AottgKeybindConflictRegistry_Entry___o *local_50;
  undefined1 local_48 [16];
  Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry_Entry_o *local_38;
  
  if (Il2CppMethodInitialized_0754817a == '\0') {
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
               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string_AottgKeybindConflictRegi_7190270
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string_AottgKeybindConflictRegi_7190278
              );
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_get_Count);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_string_AottgKeybindConflictRegistry_Entry
              );
    Il2CppMethodInitialized_0754817a = '\x01';
  }
  local_68.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_68.fields._index = 0;
  local_68.fields._version = 0;
  local_68.fields._currentValue = (Il2CppObject *)0x0;
  method_00 = TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry;
  if ((TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry->_2).cctor_finished_or_no_cctor
      == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry);
  }
  local_50 = Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry__KeyMap((MethodInfo *)method_00);
  __this = (System_Collections_Generic_Dictionary_object__object__o *)
           TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry->static_fields->Entries;
  if ((__this == (System_Collections_Generic_Dictionary_object__object__o *)0x0) ||
     (__this_00 = System_Collections_Generic_Dictionary_object__object___get_Values
                            (__this,(MethodInfo_4AAD2A0 *)
                                    MethodInfo_System_Collections_Generic_Dictionary_string_AottgKeybindConflictRegistry_Entry_get_Values
                            ),
     __this_00 == (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)0x0)) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_Dictionary_ValueCollection_object__object___GetEnumerator
            ((System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)local_48,
             __this_00,
             (MethodInfo_43F93D0 *)
             MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_string_AottgKeybindConflictRegistry_Entry
            );
  local_68.fields._currentValue = (Il2CppObject *)local_38;
  local_68.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)local_48._0_8_;
  local_68.fields._index = local_48._8_4_;
  local_68.fields._version = local_48._12_4_;
  local_48._0_8_ = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_48._8_8_ = &local_68;
  if (root == (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) {
    while (bVar4 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___MoveNext
                             (&local_68,
                              (MethodInfo_4CE7200 *)
                              MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string_AottgKeybindConflictRegi_7190270
                             ), pIVar3 = local_68.fields._currentValue, bVar4) {
      pMVar7 = extraout_RDX_01;
      if ((TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry->_2).
          cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry);
        pMVar7 = extraout_RDX_02;
      }
      pSVar5 = Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry__ConflictLabels
                         ((Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry_Entry_o *)pIVar3,
                          local_50,pMVar7);
      if (pSVar5 == (System_Collections_Generic_List_string__o *)0x0) {
label_05dc0207:
        ThrowNullReferenceException();
      }
    }
  }
  else {
    while (bVar4 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___MoveNext
                             (&local_68,
                              (MethodInfo_4CE7200 *)
                              MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string_AottgKeybindConflictRegi_7190270
                             ), pIVar3 = local_68.fields._currentValue, bVar4) {
      pMVar7 = extraout_RDX;
      if ((TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry->_2).
          cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry);
        pMVar7 = extraout_RDX_00;
      }
      pSVar5 = Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry__ConflictLabels
                         ((Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry_Entry_o *)pIVar3,
                          local_50,pMVar7);
      if (pSVar5 == (System_Collections_Generic_List_string__o *)0x0) goto label_05dc0207;
      iVar1 = (pSVar5->fields)._size;
      pGVar2 = (root->fields)._State_k__BackingField;
      if (pGVar2 != (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
        if ((Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry_Entry_o *)pIVar3 ==
            (Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry_Entry_o *)0x0) {
          ThrowNullReferenceException();
        }
        pSVar6 = ((Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry_Entry_Fields *)
                 ((long)pIVar3 + 0x10))->RowId;
        if ((TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry->_2).
            cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry);
        }
        pSVar6 = Gisketch_Aottg2UI_Game_AottgSettingsStateKeys__KeybindConflictRow(pSVar6,(MethodInfo *)0x0);
        if (pGVar2 == (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
          ThrowNullReferenceException();
        }
        Gisketch_Aottg2UI_State_GisketchUIState__SetBool(pGVar2,pSVar6,0 < iVar1,(MethodInfo *)0x0);
        pGVar2 = (root->fields)._State_k__BackingField;
        if (pGVar2 != (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
          if ((Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry_Entry_o *)pIVar3 ==
              (Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry_Entry_o *)0x0) {
            ThrowNullReferenceException();
          }
          pSVar6 = ((Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry_Entry_Fields *)
                   ((long)pIVar3 + 0x10))->RowId;
          if ((TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry->_2).
              cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry);
          }
          pMVar7 = (MethodInfo *)0x0;
          pSVar6 = Gisketch_Aottg2UI_Game_AottgSettingsStateKeys__KeybindConflictTooltip
                             (pSVar6,(MethodInfo *)0x0);
          if (iVar1 < 1) {
            value = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
          }
          else {
            if ((TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry->_2).
                cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry
                        );
            }
            value = Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry__ConflictTooltip
                              (pSVar5,pMVar7);
          }
          Gisketch_Aottg2UI_State_GisketchUIState__Set(pGVar2,pSVar6,value,(MethodInfo *)0x0);
        }
      }
    }
  }
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___Dispose
            (&local_68,
             (MethodInfo_4CE71F0 *)
             MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string_AottgKeybindConflictRegi
            );
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgKeybindConflictRegistry$$ConflictTooltip
// il2cpp: System_String_o* Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry__ConflictTooltip (System_Collections_Generic_List_string__o* labels, const MethodInfo* method);
// 0x5dc1310

System_String_o *
Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry__ConflictTooltip
          (System_Collections_Generic_List_string__o *labels,MethodInfo *method)

{
  System_String_o *pSVar1;
  System_String_array *value;
  System_String_o *arg0;
  
  if (Il2CppMethodInitialized_0754817b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ToArray);
    il2cpp_codegen_initialize_runtime_metadata(&", ");
    il2cpp_codegen_initialize_runtime_metadata(&"SettingsPopup.KeybindPopup.Conflict");
    Il2CppMethodInitialized_0754817b = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
  }
  pSVar1 = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text("SettingsPopup.KeybindPopup.Conflict",(MethodInfo *)0x0);
  if (labels == (System_Collections_Generic_List_string__o *)0x0) {
    ThrowNullReferenceException();
  }
  value = (System_String_array *)
          System_Collections_Generic_List_object___ToArray
                    ((System_Collections_Generic_List_object__o *)labels,
                     (MethodInfo_395F5A0 *)MethodInfo_System_Collections_Generic_List_string_ToArray);
  arg0 = System_String__Join(", ",value,(MethodInfo *)0x0);
  pSVar1 = System_String__Format(pSVar1,(Il2CppObject *)arg0,(MethodInfo *)0x0);
  return pSVar1;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgKeybindConflictRegistry$$VisibleStateKey
// il2cpp: System_String_o* Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry__VisibleStateKey (System_String_o* rowId, const MethodInfo* method);
// 0x5dc12f0

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
// 0x5dc1300

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
// 0x5dc13d0

System_Collections_Generic_List_string__o *
Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry__ConflictsForTests
          (System_String_o *rowId,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this;
  Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry_Entry_o *entry;
  bool bVar1;
  System_Collections_Generic_Dictionary_string__List_AottgKeybindConflictRegistry_Entry___o *keys;
  System_Collections_Generic_List_string__o *pSVar2;
  MethodInfo *method_00;
  Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry_c *method_01;
  Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry_Entry_o *pGStack_18;
  
  if (Il2CppMethodInitialized_0754817c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_string_AottgKeybindConflictRegistry_Entry_TryGetValue
              );
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_string);
    Il2CppMethodInitialized_0754817c = '\x01';
  }
  pGStack_18 = (Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry_Entry_o *)0x0;
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
                      (__this,(Il2CppObject *)rowId,(Il2CppObject **)&pGStack_18,
                       (MethodInfo_4AAF440 *)
                       MethodInfo_System_Collections_Generic_Dictionary_string_AottgKeybindConflictRegistry_Entry_TryGetValue
                      );
    entry = pGStack_18;
    if (bVar1) {
      method_01 = TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry;
      if ((TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry->_2).
          cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry);
      }
      keys = Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry__KeyMap((MethodInfo *)method_01);
      pSVar2 = Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry__ConflictLabels
                         (entry,keys,method_00);
      return pSVar2;
    }
  }
  pSVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)pSVar2,
             (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_string_ctor);
  return pSVar2;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgKeybindConflictRegistry$$ClearForTests
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry__ClearForTests (const MethodInfo* method);
// 0x5dc14d0

void Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry__ClearForTests(MethodInfo *method)

{
  uint32_t uVar1;
  System_Collections_Generic_Dictionary_object__object__o *__this;
  
  if (Il2CppMethodInitialized_0754817d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_string_AottgKeybindConflictRegistry_Entry_Clear
              );
    Il2CppMethodInitialized_0754817d = '\x01';
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry->_2).
            cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry->_2).
            cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry);
    __this = (System_Collections_Generic_Dictionary_object__object__o *)
             TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry->static_fields->Entries;
  }
  else {
    __this = *(System_Collections_Generic_Dictionary_object__object__o **)
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry)->
              static_fields;
  }
  if (__this == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_Dictionary_object__object___Clear
            (__this,(MethodInfo_4AAD690 *)
                    MethodInfo_System_Collections_Generic_Dictionary_string_AottgKeybindConflictRegistry_Entry_Clear
            );
  TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry->static_fields->_nextOrder = 0;
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgKeybindConflictRegistry$$KeyMap
// il2cpp: System_Collections_Generic_Dictionary_string__List_AottgKeybindConflictRegistry_Entry___o* Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry__KeyMap (const MethodInfo* method);
// 0x5dc02c0
// eh: try 0x5dc04e0..0x5dc09ec -> pad 0x5dc0a09 (+22 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5dc09f7..0x5dc0a01 -> pad 0x5dc0a67 catch (...) [compiler noexcept guard]
// eh: try 0x5dc0a28..0x5dc0a2d -> pad 0x5dc0a52 cleanup
// eh: try 0x5dc0a55..0x5dc0a5f -> pad 0x5dc0a67 catch (...) [compiler noexcept guard]
// asm: 68 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5dc03ff: cmp byte ptr [rip + 0x1782480], 0
// asm:   0x5dc0406: je 0x5dc09b4
// asm:   0x5dc04f3: test rbp, rbp
// asm:   0x5dc04f6: jne 0x5dc09e4
// asm:   0x5dc05b9: nop dword ptr [rax]
// asm:   0x5dc0637: mov rbx, qword ptr [rsp]
// asm:   0x5dc08c9: nop dword ptr [rax]
// asm:   0x5dc08df: jmp 0x5dc04e0
// asm:   0x5dc0937: jmp 0x5dc0953
// asm:   0x5dc0939: jmp 0x5dc0953
// asm:   0x5dc093b: jmp 0x5dc0953
// asm:   0x5dc093d: jmp 0x5dc0953
// asm:   0x5dc093f: jmp 0x5dc0953
// asm:   0x5dc0941: jmp 0x5dc0953
// asm:   0x5dc0943: jmp 0x5dc0953
// asm:   0x5dc0945: jmp 0x5dc0953
// asm:   0x5dc0947: jmp 0x5dc0953
// asm:   0x5dc0949: jmp 0x5dc0953
// asm:   0x5dc094b: jmp 0x5dc0953
// asm:   0x5dc094d: jmp 0x5dc0953
// asm:   0x5dc094f: jmp 0x5dc0953
// asm:   0x5dc0951: jmp 0x5dc0953
// asm:   0x5dc0953: mov rbp, rdx
// asm:   0x5dc0956: mov rbx, rax
// asm:   0x5dc0959: cmp ebp, 1
// asm:   0x5dc095c: jne 0x5dc09f7
// asm:   0x5dc0962: mov rdi, rbx
// asm:   0x5dc0965: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5dc096a: mov rbp, qword ptr [rax]
// asm:   0x5dc096d: mov qword ptr [rsp + 0x48], rbp
// asm:   0x5dc0972: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5dc0977: jmp 0x5dc0892
// asm:   0x5dc09e4: mov rdi, rbp
// asm:   0x5dc09e7: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5dc09f1: mov rbp, rdx
// asm:   0x5dc09f4: mov rbx, rax
// asm:   0x5dc09f7: lea rdi, [rsp + 0x48]
// asm:   0x5dc09fc: call 0x2fde140  ; il2cpp_runtime_helper_02fde140()
// asm:   0x5dc0a01: jmp 0x5dc0a13
// asm:   0x5dc0a03: jmp 0x5dc0a0d
// asm:   0x5dc0a05: jmp 0x5dc0a0d
// asm:   0x5dc0a07: jmp 0x5dc0a0d
// asm:   0x5dc0a09: jmp 0x5dc0a0d
// asm:   0x5dc0a0b: jmp 0x5dc0a0d
// asm:   0x5dc0a0d: mov rbp, rdx
// asm:   0x5dc0a10: mov rbx, rax
// asm:   0x5dc0a13: cmp ebp, 1
// asm:   0x5dc0a16: jne 0x5dc0a55
// asm:   0x5dc0a18: mov rdi, rbx
// asm:   0x5dc0a1b: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5dc0a20: mov rbx, qword ptr [rax]
// asm:   0x5dc0a23: mov qword ptr [rsp + 0x30], rbx
// asm:   0x5dc0a28: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5dc0a2d: lea rax, [rip + 0x14cf834]  ; MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string_AottgKeybindConflictRegi
// asm:   0x5dc0a34: mov rsi, qword ptr [rax]
// asm:   0x5dc0a37: lea rdi, [rsp + 0x10]
// asm:   0x5dc0a3c: call 0x4de71f0  ; System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___Dispose()
// asm:   0x5dc0a41: test rbx, rbx
// asm:   0x5dc0a44: je 0x5dc0990
// asm:   0x5dc0a4a: mov rdi, rbx
// asm:   0x5dc0a4d: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5dc0a52: mov rbx, rax
// asm:   0x5dc0a55: lea rdi, [rsp + 0x30]
// asm:   0x5dc0a5a: call 0x2fde1d0  ; il2cpp_runtime_helper_02fde1d0()
// asm:   0x5dc0a5f: mov rdi, rbx
// asm:   0x5dc0a62: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5dc0a67: mov rdi, rax
// asm:   0x5dc0a6a: call 0x2ab61e0  ; __clang_call_terminate()

System_Collections_Generic_Dictionary_string__List_AottgKeybindConflictRegistry_Entry___o *
Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry__KeyMap(MethodInfo *method)

{
  int32_t *piVar1;
  uint32_t uVar2;
  uint uVar3;
  System_OrdinalIgnoreCaseComparer_o *comparer;
  System_Collections_Generic_Dictionary_object__object__o *__this;
  Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry__Keys_d__13_c *pGVar4;
  Il2CppRuntimeInterfaceOffsetPair *pIVar5;
  Il2CppClass *pIVar6;
  Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry_Entry_array *pGVar7;
  MethodInfo *pMVar8;
  Il2CppObject *pIVar9;
  Il2CppObject *item;
  bool bVar10;
  int32_t iVar11;
  System_Collections_Generic_Dictionary_string__List_AottgKeybindConflictRegistry_Entry___o *__this_00;
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *__this_01;
  Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry__Keys_d__13_o *__this_02;
  VirtualInvokeData *pVVar12;
  System_String_o *pSVar13;
  System_Collections_Generic_List_AottgKeybindConflictRegistry_Entry__o *__this_03;
  ulong uVar14;
  System_String_o *str0;
  long lVar15;
  Il2CppObject *local_88;
  System_Collections_Generic_List_AottgKeybindConflictRegistry_Entry__o *local_80;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o local_78;
  undefined1 local_58 [16];
  Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry_Entry_o *local_48;
  undefined8 local_40;
  undefined1 *local_38;
  
  if (Il2CppMethodInitialized_0754817e == '\0') {
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
               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string_AottgKeybindConflictRegi_7190270
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string_AottgKeybindConflictRegi_7190278
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
    Il2CppMethodInitialized_0754817e = '\x01';
  }
  local_78.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_78.fields._index = 0;
  local_78.fields._version = 0;
  local_78.fields._currentValue = (Il2CppObject *)0x0;
  local_88 = (Il2CppObject *)0x0;
  local_80 = (System_Collections_Generic_List_AottgKeybindConflictRegistry_Entry__o *)0x0;
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
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_System_Collections_Generic_Dictionary_string_List_AottgKeybindConflictRegistry_Entry
                        );
  System_Collections_Generic_Dictionary_object__object____ctor_4aac9c0
            ((System_Collections_Generic_Dictionary_object__object__o *)__this_00,
             (System_Collections_Generic_IEqualityComparer_TKey__o *)comparer,
             (MethodInfo_4AAC9C0 *)
             MethodInfo_System_Collections_Generic_Dictionary_string_List_AottgKeybindConflictRegistry_Entry_ctor
            );
  if ((TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry->_2).cctor_finished_or_no_cctor
      == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry);
  }
  __this = (System_Collections_Generic_Dictionary_object__object__o *)
           TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry->static_fields->Entries;
  if ((__this == (System_Collections_Generic_Dictionary_object__object__o *)0x0) ||
     (__this_01 = System_Collections_Generic_Dictionary_object__object___get_Values
                            (__this,(MethodInfo_4AAD2A0 *)
                                    MethodInfo_System_Collections_Generic_Dictionary_string_AottgKeybindConflictRegistry_Entry_get_Values
                            ),
     __this_01 == (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)0x0)) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_Dictionary_ValueCollection_object__object___GetEnumerator
            ((System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)local_58,
             __this_01,
             (MethodInfo_43F93D0 *)
             MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_string_AottgKeybindConflictRegistry_Entry
            );
  local_78.fields._currentValue = (Il2CppObject *)local_48;
  local_78.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)local_58._0_8_;
  local_78.fields._index = local_58._8_4_;
  local_78.fields._version = local_58._12_4_;
  local_58._0_8_ = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_58._8_8_ = &local_78;
  do {
    do {
      bVar10 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___MoveNext
                         (&local_78,
                          (MethodInfo_4CE7200 *)
                          MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string_AottgKeybindConflictRegi_7190270
                         );
      item = local_78.fields._currentValue;
      if (!bVar10) {
        System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___Dispose
                  (&local_78,
                   (MethodInfo_4CE71F0 *)
                   MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string_AottgKeybindConflictRegi
                  );
        return __this_00;
      }
      if ((TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry->_2).
          cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry);
      }
      if (Il2CppMethodInitialized_07548182 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry_Keys_d__13);
        Il2CppMethodInitialized_07548182 = '\x01';
      }
      __this_02 = il2cpp_codegen_object_new
                            ((Il2CppClass *)
                             TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry_Keys_d__13
                            );
      System_Object___ctor((Il2CppObject *)__this_02,(MethodInfo *)0x0);
      (__this_02->fields).__1__state = -2;
      iVar11 = System_Environment__get_CurrentManagedThreadId((MethodInfo *)0x0);
      (__this_02->fields).__l__initialThreadId = iVar11;
      (__this_02->fields).__3__entry =
           (Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry_Entry_o *)item;
      Il2CppCodeGenWriteBarrier(&(__this_02->fields).__3__entry);
      pGVar4 = __this_02->klass;
      uVar14 = (ulong)(pGVar4->_2).interface_offsets_count;
      if (uVar14 != 0) {
        pIVar5 = (pGVar4->_1).interfaceOffsets;
        lVar15 = 0;
        do {
          if (*(System_Collections_Generic_IEnumerable_string__c **)((long)&pIVar5->interfaceType + lVar15) ==
              TypeInfo_System_Collections_Generic_IEnumerable_string) {
            pVVar12 = &(pGVar4->vtable)._0_Equals + *(int *)((long)&pIVar5->offset + lVar15);
            goto label_05dc05f3;
          }
          lVar15 = lVar15 + 0x10;
        } while (uVar14 * 0x10 != lVar15);
      }
      pVVar12 = GetInterfaceInvokeDataFromVTableSlowPath
                          ((Il2CppObject *)__this_02,
                           (Il2CppClass *)TypeInfo_System_Collections_Generic_IEnumerable_string,0);
label_05dc05f3:
      local_88 = (*pVVar12->methodPtr)((Il2CppObject *)__this_02,pVVar12->method);
      local_40 = 0;
      local_38 = (undefined1 *)&local_88;
label_05dc063b:
      pIVar9 = local_88;
      if (local_88 == (Il2CppObject *)0x0) {
        ThrowNullReferenceException();
      }
      pIVar6 = local_88->klass;
      uVar14 = (ulong)(pIVar6->_2).interface_offsets_count;
      if (uVar14 != 0) {
        pIVar5 = (pIVar6->_1).interfaceOffsets;
        lVar15 = 0;
        do {
          if (*(System_Collections_IEnumerator_c **)((long)&pIVar5->interfaceType + lVar15) ==
              TypeInfo_System_Collections_IEnumerator) {
            pVVar12 = pIVar6->vtable + *(int *)((long)&pIVar5->offset + lVar15);
            goto label_05dc06a3;
          }
          lVar15 = lVar15 + 0x10;
        } while (uVar14 * 0x10 != lVar15);
      }
      pVVar12 = GetInterfaceInvokeDataFromVTableSlowPath
                          (local_88,(Il2CppClass *)TypeInfo_System_Collections_IEnumerator,0);
label_05dc06a3:
      bVar10 = (*pVVar12->methodPtr)(pIVar9,pVVar12->method);
      pIVar9 = local_88;
      if (bVar10) {
        if (local_88 == (Il2CppObject *)0x0) {
          ThrowNullReferenceException();
        }
        pIVar6 = local_88->klass;
        uVar14 = (ulong)(pIVar6->_2).interface_offsets_count;
        if (uVar14 != 0) {
          pIVar5 = (pIVar6->_1).interfaceOffsets;
          lVar15 = 0;
          do {
            if (*(System_Collections_Generic_IEnumerator_string__c **)((long)&pIVar5->interfaceType + lVar15)
                == TypeInfo_System_Collections_Generic_IEnumerator_string) {
              pVVar12 = pIVar6->vtable + *(int *)((long)&pIVar5->offset + lVar15);
              goto label_05dc0723;
            }
            lVar15 = lVar15 + 0x10;
          } while (uVar14 * 0x10 != lVar15);
        }
        pVVar12 = GetInterfaceInvokeDataFromVTableSlowPath
                            (local_88,(Il2CppClass *)TypeInfo_System_Collections_Generic_IEnumerator_string,0)
        ;
label_05dc0723:
        pSVar13 = (*pVVar12->methodPtr)(pIVar9,pVVar12->method);
        if ((Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry_Entry_o *)item ==
            (Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry_Entry_o *)0x0) {
          ThrowNullReferenceException();
        }
        str0 = ((Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry_Entry_Fields *)
               ((long)item + 0x10))->ScopeId;
        if ((TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry->_2).
            cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry);
        }
        if (Il2CppMethodInitialized_07548181 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&"\n");
          Il2CppMethodInitialized_07548181 = '\x01';
        }
        if (str0 == (System_String_o *)0x0) {
          str0 = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
        }
        pSVar13 = System_String__Concat_5301f10(str0,"\n",pSVar13,(MethodInfo *)0x0);
        if (__this_00 ==
            (System_Collections_Generic_Dictionary_string__List_AottgKeybindConflictRegistry_Entry___o *)0x0)
        {
          ThrowNullReferenceException();
        }
        bVar10 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                           ((System_Collections_Generic_Dictionary_object__object__o *)__this_00,
                            (Il2CppObject *)pSVar13,(Il2CppObject **)&local_80,
                            (MethodInfo_4AAF440 *)
                            MethodInfo_System_Collections_Generic_Dictionary_string_List_AottgKeybindConflictRegistry_Entry_TryGetValue
                           );
        if (!bVar10) {
          __this_03 = il2cpp_codegen_object_new
                                ((Il2CppClass *)
                                 TypeInfo_System_Collections_Generic_List_AottgKeybindConflictRegistry_Entry);
          System_Collections_Generic_List_object____ctor
                    ((System_Collections_Generic_List_object__o *)__this_03,
                     (MethodInfo_395C910 *)
                     MethodInfo_System_Collections_Generic_List_AottgKeybindConflictRegistry_Entry_ctor);
          local_80 = __this_03;
          System_Collections_Generic_Dictionary_object__object___set_Item
                    ((System_Collections_Generic_Dictionary_object__object__o *)__this_00,
                     (Il2CppObject *)pSVar13,(Il2CppObject *)__this_03,
                     (MethodInfo_4AAD4C0 *)
                     MethodInfo_System_Collections_Generic_Dictionary_string_List_AottgKeybindConflictRegistry_Entry_set_Item
                    );
        }
        if (local_80 == (System_Collections_Generic_List_AottgKeybindConflictRegistry_Entry__o *)0x0) {
          ThrowNullReferenceException();
        }
        bVar10 = System_Collections_Generic_List_object___Contains
                           ((System_Collections_Generic_List_object__o *)local_80,item,
                            (MethodInfo_395D6D0 *)
                            MethodInfo_System_Collections_Generic_List_AottgKeybindConflictRegistry_Entry_Contains
                           );
        pMVar8 = MethodInfo_System_Collections_Generic_List_AottgKeybindConflictRegistry_Entry_Add;
        if (!bVar10) {
          if (local_80 != (System_Collections_Generic_List_AottgKeybindConflictRegistry_Entry__o *)0x0) {
            piVar1 = &(local_80->fields)._version;
            *piVar1 = *piVar1 + 1;
            pGVar7 = (local_80->fields)._items;
            if (pGVar7 != (Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry_Entry_array *)0x0) {
              uVar3 = (local_80->fields)._size;
              if (uVar3 < (uint)pGVar7->max_length) {
                (local_80->fields)._size = uVar3 + 1;
                pGVar7->m_Items[(int)uVar3] =
                     (Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry_Entry_o *)item;
                Il2CppCodeGenWriteBarrier(pGVar7->m_Items + (int)uVar3);
              }
              else {
                System_Collections_Generic_List_object___AddWithResize
                          ((System_Collections_Generic_List_object__o *)local_80,item,
                           (MethodInfo_395D230 *)pMVar8->klass->rgctx_data[0xe].method);
              }
              goto label_05dc063b;
            }
          }
          ThrowNullReferenceException();
        }
        goto label_05dc063b;
      }
    } while (local_88 == (Il2CppObject *)0x0);
    pIVar6 = local_88->klass;
    uVar14 = (ulong)(pIVar6->_2).interface_offsets_count;
    if (uVar14 != 0) {
      pIVar5 = (pIVar6->_1).interfaceOffsets;
      lVar15 = 0;
      do {
        if (*(System_IDisposable_c **)((long)&pIVar5->interfaceType + lVar15) == TypeInfo_System_IDisposable)
        {
          pVVar12 = pIVar6->vtable + *(int *)((long)&pIVar5->offset + lVar15);
          goto label_05dc04ea;
        }
        lVar15 = lVar15 + 0x10;
      } while (uVar14 * 0x10 != lVar15);
    }
    pVVar12 = GetInterfaceInvokeDataFromVTableSlowPath(local_88,(Il2CppClass *)TypeInfo_System_IDisposable,0);
label_05dc04ea:
    (*pVVar12->methodPtr)(pIVar9,pVVar12->method);
  } while( true );
}


// Gisketch.Aottg2UI.SettingsScreen.AottgKeybindConflictRegistry$$ConflictLabels
// il2cpp: System_Collections_Generic_List_string__o* Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry__ConflictLabels (Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry_Entry_o* entry, System_Collections_Generic_Dictionary_string__List_AottgKeybindConflictRegistry_Entry___o* keys, const MethodInfo* method);
// 0x5dc0a70
// eh: try 0x5dc0d2f..0x5dc1257 -> pad 0x5dc1294 (+19 call sites) catch Il2CppExceptionWrapper, cleanup [compiler noexcept guard]
// eh: try 0x5dc12c0..0x5dc12c5 -> pad 0x5dc12ca cleanup
// eh: try 0x5dc12cd..0x5dc12d7 -> pad 0x5dc12df catch (...) [compiler noexcept guard]
// asm: 43 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5dc0bc9: mov qword ptr [rsp + 8], rbx
// asm:   0x5dc0bce: cmp byte ptr [rip + 0x17875ad], 0
// asm:   0x5dc0bd5: jne 0x5dc0bea
// asm:   0x5dc0c4e: nop 
// asm:   0x5dc0c85: jmp 0x5dc0bea
// asm:   0x5dc0d99: nop dword ptr [rax]
// asm:   0x5dc125c: mov rdi, r14
// asm:   0x5dc125f: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5dc1282: jmp 0x5dc12a6
// asm:   0x5dc1284: jmp 0x5dc12a6
// asm:   0x5dc1286: jmp 0x5dc12a6
// asm:   0x5dc1288: jmp 0x5dc12a6
// asm:   0x5dc128a: jmp 0x5dc12a6
// asm:   0x5dc128c: jmp 0x5dc12a6
// asm:   0x5dc128e: jmp 0x5dc12a6
// asm:   0x5dc1290: jmp 0x5dc12a6
// asm:   0x5dc1292: jmp 0x5dc12a6
// asm:   0x5dc1294: jmp 0x5dc12a6
// asm:   0x5dc1296: jmp 0x5dc12a6
// asm:   0x5dc1298: jmp 0x5dc12a6
// asm:   0x5dc129a: jmp 0x5dc12a6
// asm:   0x5dc129c: jmp 0x5dc12a6
// asm:   0x5dc129e: jmp 0x5dc12a6
// asm:   0x5dc12a0: jmp 0x5dc12a6
// asm:   0x5dc12a2: jmp 0x5dc12a6
// asm:   0x5dc12a4: jmp 0x5dc12a6
// asm:   0x5dc12a6: mov rbx, rax
// asm:   0x5dc12a9: cmp edx, 1
// asm:   0x5dc12ac: jne 0x5dc12cd
// asm:   0x5dc12ae: mov rdi, rbx
// asm:   0x5dc12b1: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5dc12b6: mov r14, qword ptr [rax]
// asm:   0x5dc12b9: mov qword ptr [rsp + 0x28], r14
// asm:   0x5dc12be: xor ebp, ebp
// asm:   0x5dc12c0: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5dc12c5: jmp 0x5dc1015
// asm:   0x5dc12ca: mov rbx, rax
// asm:   0x5dc12cd: lea rdi, [rsp + 0x28]
// asm:   0x5dc12d2: call 0x2fde200  ; il2cpp_runtime_helper_02fde200()
// asm:   0x5dc12d7: mov rdi, rbx
// asm:   0x5dc12da: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5dc12df: mov rdi, rax
// asm:   0x5dc12e2: call 0x2ab61e0  ; __clang_call_terminate()

System_Collections_Generic_List_string__o *
Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry__ConflictLabels
          (Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry_Entry_o *entry,
          System_Collections_Generic_Dictionary_string__List_AottgKeybindConflictRegistry_Entry___o *keys,
          MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry__Keys_d__13_c *pGVar3;
  Il2CppRuntimeInterfaceOffsetPair *pIVar4;
  Il2CppClass *pIVar5;
  System_Collections_Generic_HashSet_object__o *pSVar6;
  Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry_Entry_array *pGVar7;
  System_String_array *pSVar8;
  MethodInfo *pMVar9;
  System_Collections_Generic_Dictionary_object__object__o *__this;
  bool bVar10;
  int32_t iVar11;
  System_Collections_Generic_List_AottgKeybindConflictRegistry_Entry__o *__this_00;
  Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry__Keys_d__13_o *__this_01;
  VirtualInvokeData *pVVar12;
  System_String_o *pSVar13;
  System_String_o *pSVar14;
  Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry_Entry_o *pGVar15;
  Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry___c_StaticFields *pGVar16;
  System_Comparison_T__o *comparison;
  System_Collections_Generic_List_string__o *__this_02;
  Il2CppObject *pIVar17;
  ulong uVar18;
  long lVar19;
  int iVar20;
  Il2CppObject *local_58;
  System_Collections_Generic_List_object__o *local_50;
  System_Collections_Generic_Dictionary_object__object__o *local_48;
  undefined8 local_40;
  Il2CppObject **local_38;
  
  if (Il2CppMethodInitialized_0754817f == '\0') {
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
              (&MethodInfo_System_Collections_Generic_List_string_ctor_7196950);
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
    Il2CppMethodInitialized_0754817f = '\x01';
  }
  local_58 = (Il2CppObject *)0x0;
  local_50 = (System_Collections_Generic_List_object__o *)0x0;
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_System_Collections_Generic_List_AottgKeybindConflictRegistry_Entry);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             (MethodInfo_395C910 *)
             MethodInfo_System_Collections_Generic_List_AottgKeybindConflictRegistry_Entry_ctor);
  if ((TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry->_2).cctor_finished_or_no_cctor
      == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry);
  }
  if (Il2CppMethodInitialized_07548182 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry_Keys_d__13);
    Il2CppMethodInitialized_07548182 = '\x01';
  }
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry_Keys_d__13);
  System_Object___ctor((Il2CppObject *)__this_01,(MethodInfo *)0x0);
  (__this_01->fields).__1__state = -2;
  iVar11 = System_Environment__get_CurrentManagedThreadId((MethodInfo *)0x0);
  (__this_01->fields).__l__initialThreadId = iVar11;
  (__this_01->fields).__3__entry = entry;
  Il2CppCodeGenWriteBarrier(&(__this_01->fields).__3__entry);
  pGVar3 = __this_01->klass;
  uVar18 = (ulong)(pGVar3->_2).interface_offsets_count;
  if (uVar18 != 0) {
    pIVar4 = (pGVar3->_1).interfaceOffsets;
    lVar19 = 0;
    do {
      if (*(System_Collections_Generic_IEnumerable_string__c **)((long)&pIVar4->interfaceType + lVar19) ==
          TypeInfo_System_Collections_Generic_IEnumerable_string) {
        pVVar12 = &(pGVar3->vtable)._0_Equals + *(int *)((long)&pIVar4->offset + lVar19);
        goto label_05dc0c9d;
      }
      lVar19 = lVar19 + 0x10;
    } while (uVar18 * 0x10 != lVar19);
  }
  pVVar12 = GetInterfaceInvokeDataFromVTableSlowPath
                      ((Il2CppObject *)__this_01,
                       (Il2CppClass *)TypeInfo_System_Collections_Generic_IEnumerable_string,0);
label_05dc0c9d:
  local_58 = (*pVVar12->methodPtr)((Il2CppObject *)__this_01,pVVar12->method);
  local_40 = 0;
  local_38 = &local_58;
  if (local_58 != (Il2CppObject *)0x0) {
    local_48 = (System_Collections_Generic_Dictionary_object__object__o *)keys;
    do {
      __this = local_48;
      pIVar17 = local_58;
      pIVar5 = local_58->klass;
      uVar18 = (ulong)(pIVar5->_2).interface_offsets_count;
      if (uVar18 != 0) {
        pIVar4 = (pIVar5->_1).interfaceOffsets;
        lVar19 = 0;
        do {
          if (*(System_Collections_IEnumerator_c **)((long)&pIVar4->interfaceType + lVar19) ==
              TypeInfo_System_Collections_IEnumerator) {
            pVVar12 = pIVar5->vtable + *(int *)((long)&pIVar4->offset + lVar19);
            goto label_05dc0d53;
          }
          lVar19 = lVar19 + 0x10;
        } while (uVar18 * 0x10 != lVar19);
      }
      pVVar12 = GetInterfaceInvokeDataFromVTableSlowPath
                          (local_58,(Il2CppClass *)TypeInfo_System_Collections_IEnumerator,0);
label_05dc0d53:
      bVar10 = (*pVVar12->methodPtr)(pIVar17,pVVar12->method);
      pIVar17 = local_58;
      if (!bVar10) {
        if (local_58 == (Il2CppObject *)0x0) goto label_05dc1086;
        pIVar5 = local_58->klass;
        uVar18 = (ulong)(pIVar5->_2).interface_offsets_count;
        if (uVar18 == 0) goto label_05dc105f;
        pIVar4 = (pIVar5->_1).interfaceOffsets;
        lVar19 = 0;
        goto label_05dc1050;
      }
      if (local_58 == (Il2CppObject *)0x0) {
        ThrowNullReferenceException();
      }
      pIVar5 = local_58->klass;
      uVar18 = (ulong)(pIVar5->_2).interface_offsets_count;
      if (uVar18 != 0) {
        pIVar4 = (pIVar5->_1).interfaceOffsets;
        lVar19 = 0;
        do {
          if (*(System_Collections_Generic_IEnumerator_string__c **)((long)&pIVar4->interfaceType + lVar19) ==
              TypeInfo_System_Collections_Generic_IEnumerator_string) {
            pVVar12 = pIVar5->vtable + *(int *)((long)&pIVar4->offset + lVar19);
            goto label_05dc0dd3;
          }
          lVar19 = lVar19 + 0x10;
        } while (uVar18 * 0x10 != lVar19);
      }
      pVVar12 = GetInterfaceInvokeDataFromVTableSlowPath
                          (local_58,(Il2CppClass *)TypeInfo_System_Collections_Generic_IEnumerator_string,0);
label_05dc0dd3:
      pSVar13 = (*pVVar12->methodPtr)(pIVar17,pVVar12->method);
      if (entry == (Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry_Entry_o *)0x0) {
        ThrowNullReferenceException();
      }
      pSVar14 = (entry->fields).ScopeId;
      if ((TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry->_2).
          cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry);
      }
      if (Il2CppMethodInitialized_07548181 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&"\n");
        Il2CppMethodInitialized_07548181 = '\x01';
      }
      if (pSVar14 == (System_String_o *)0x0) {
        pSVar14 = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
      }
      pSVar14 = System_String__Concat_5301f10(pSVar14,"\n",pSVar13,(MethodInfo *)0x0);
      if (__this == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
        ThrowNullReferenceException();
      }
      bVar10 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                         (__this,(Il2CppObject *)pSVar14,(Il2CppObject **)&local_50,
                          (MethodInfo_4AAF440 *)
                          MethodInfo_System_Collections_Generic_Dictionary_string_List_AottgKeybindConflictRegistry_Entry_TryGetValue
                         );
      if (bVar10) {
        if (local_50 == (System_Collections_Generic_List_object__o *)0x0) {
label_05dc1008:
          ThrowNullReferenceException();
        }
        if (__this_00 == (System_Collections_Generic_List_AottgKeybindConflictRegistry_Entry__o *)0x0) {
          iVar20 = 0;
          while (iVar20 < (local_50->fields)._size) {
            pGVar15 = (Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry_Entry_o *)
                      System_Collections_Generic_List_object___get_Item
                                (local_50,iVar20,
                                 (MethodInfo_395CF20 *)
                                 MethodInfo_System_Collections_Generic_List_AottgKeybindConflictRegistry_Entry_get_Item
                                );
            if (pGVar15 != entry) {
              ThrowNullReferenceException();
            }
            iVar20 = iVar20 + 1;
            if (local_50 == (System_Collections_Generic_List_object__o *)0x0) goto label_05dc1008;
          }
        }
        else {
          iVar20 = 0;
          while (iVar20 < (local_50->fields)._size) {
            pGVar15 = (Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry_Entry_o *)
                      System_Collections_Generic_List_object___get_Item
                                (local_50,iVar20,
                                 (MethodInfo_395CF20 *)
                                 MethodInfo_System_Collections_Generic_List_AottgKeybindConflictRegistry_Entry_get_Item
                                );
            if ((pGVar15 != entry) &&
               (bVar10 = System_Collections_Generic_List_object___Contains
                                   ((System_Collections_Generic_List_object__o *)__this_00,
                                    (Il2CppObject *)pGVar15,
                                    (MethodInfo_395D6D0 *)
                                    MethodInfo_System_Collections_Generic_List_AottgKeybindConflictRegistry_Entry_Contains
                                   ), !bVar10)) {
              if ((TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry->_2).
                  cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)
                           TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry);
              }
              if (Il2CppMethodInitialized_07548180 == '\0') {
                il2cpp_codegen_initialize_runtime_metadata
                          (&MethodInfo_System_Collections_Generic_HashSet_string_Contains);
                Il2CppMethodInitialized_07548180 = '\x01';
              }
              pSVar6 = (System_Collections_Generic_HashSet_object__o *)(entry->fields).DefaultKeys;
              if (pSVar6 == (System_Collections_Generic_HashSet_object__o *)0x0) {
label_05dc1234:
                ThrowNullReferenceException();
              }
              bVar10 = System_Collections_Generic_HashSet_object___Contains
                                 (pSVar6,(Il2CppObject *)pSVar13,
                                  (MethodInfo_4FB3720 *)
                                  MethodInfo_System_Collections_Generic_HashSet_string_Contains);
              if (bVar10) {
                if ((pGVar15 == (Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry_Entry_o *)0x0)
                   || (pSVar6 = (System_Collections_Generic_HashSet_object__o *)(pGVar15->fields).DefaultKeys,
                      pSVar6 == (System_Collections_Generic_HashSet_object__o *)0x0)) goto label_05dc1234;
                bVar10 = System_Collections_Generic_HashSet_object___Contains
                                   (pSVar6,(Il2CppObject *)pSVar13,
                                    (MethodInfo_4FB3720 *)
                                    MethodInfo_System_Collections_Generic_HashSet_string_Contains);
                if (bVar10) goto label_05dc0ec0;
              }
              pMVar9 = MethodInfo_System_Collections_Generic_List_AottgKeybindConflictRegistry_Entry_Add;
              piVar1 = &(__this_00->fields)._version;
              *piVar1 = *piVar1 + 1;
              pGVar7 = (__this_00->fields)._items;
              if (pGVar7 == (Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry_Entry_array *)0x0)
              {
                ThrowNullReferenceException();
              }
              uVar2 = (__this_00->fields)._size;
              if (uVar2 < (uint)pGVar7->max_length) {
                (__this_00->fields)._size = uVar2 + 1;
                pGVar7->m_Items[(int)uVar2] = pGVar15;
                Il2CppCodeGenWriteBarrier(pGVar7->m_Items + (int)uVar2);
              }
              else {
                System_Collections_Generic_List_object___AddWithResize
                          ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)pGVar15,
                           (MethodInfo_395D230 *)pMVar9->klass->rgctx_data[0xe].method);
              }
            }
label_05dc0ec0:
            iVar20 = iVar20 + 1;
            if (local_50 == (System_Collections_Generic_List_object__o *)0x0) goto label_05dc1008;
          }
        }
      }
    } while (local_58 != (Il2CppObject *)0x0);
  }
  ThrowNullReferenceException();
  while (lVar19 = lVar19 + 0x10, uVar18 * 0x10 != lVar19) {
label_05dc1050:
    if (*(System_IDisposable_c **)((long)&pIVar4->interfaceType + lVar19) == TypeInfo_System_IDisposable) {
      pVVar12 = pIVar5->vtable + *(int *)((long)&pIVar4->offset + lVar19);
      goto label_05dc107d;
    }
  }
label_05dc105f:
  pVVar12 = GetInterfaceInvokeDataFromVTableSlowPath(local_58,(Il2CppClass *)TypeInfo_System_IDisposable,0);
label_05dc107d:
  (*pVVar12->methodPtr)(pIVar17,pVVar12->method);
label_05dc1086:
  if ((TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry_c->_2).
      cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry_c);
  }
  pGVar16 = TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry_c->static_fields;
  comparison = (System_Comparison_T__o *)pGVar16->__9__10_0;
  if (comparison == (System_Comparison_T__o *)0x0) {
    if ((TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry_c->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry_c);
      pGVar16 = TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry_c->static_fields;
    }
    pIVar17 = (Il2CppObject *)pGVar16->__9;
    comparison = (System_Comparison_T__o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Comparison_AottgKeybindConflictRegistry_Entry);
    System_Comparison_object____ctor
              ((System_Comparison_object__o *)comparison,pIVar17,
               (intptr_t)
               MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry_c_ConflictLabels_b__10_0
               ,(MethodInfo_48E28F0 *)0x0);
    pGVar16 = TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry_c->static_fields;
    pGVar16->__9__10_0 = (System_Comparison_AottgKeybindConflictRegistry_Entry__o *)comparison;
    Il2CppCodeGenWriteBarrier(&pGVar16->__9__10_0);
  }
  if (__this_00 == (System_Collections_Generic_List_AottgKeybindConflictRegistry_Entry__o *)0x0) {
label_05dc1257:
    ThrowNullReferenceException();
  }
  System_Collections_Generic_List_object___Sort_395f500
            ((System_Collections_Generic_List_object__o *)__this_00,comparison,
             (MethodInfo_395F500 *)
             MethodInfo_System_Collections_Generic_List_AottgKeybindConflictRegistry_Entry_Sort);
  iVar11 = (__this_00->fields)._size;
  __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
  System_Collections_Generic_List_object____ctor_395c990
            ((System_Collections_Generic_List_object__o *)__this_02,iVar11,
             (MethodInfo_395C990 *)MethodInfo_System_Collections_Generic_List_string_ctor_7196950);
  if (0 < (__this_00->fields)._size) {
    if (__this_02 == (System_Collections_Generic_List_string__o *)0x0) {
      System_Collections_Generic_List_object___get_Item
                ((System_Collections_Generic_List_object__o *)__this_00,0,
                 (MethodInfo_395CF20 *)
                 MethodInfo_System_Collections_Generic_List_AottgKeybindConflictRegistry_Entry_get_Item);
      ThrowNullReferenceException();
    }
    iVar20 = 0;
    do {
      while( true ) {
        pIVar17 = System_Collections_Generic_List_object___get_Item
                            ((System_Collections_Generic_List_object__o *)__this_00,iVar20,
                             (MethodInfo_395CF20 *)
                             MethodInfo_System_Collections_Generic_List_AottgKeybindConflictRegistry_Entry_get_Item
                            );
        pMVar9 = MethodInfo_System_Collections_Generic_List_string_Add;
        if (pIVar17 == (Il2CppObject *)0x0) goto label_05dc1257;
        pSVar13 = pIVar17[2].monitor;
        piVar1 = &(__this_02->fields)._version;
        *piVar1 = *piVar1 + 1;
        pSVar8 = (__this_02->fields)._items;
        if (pSVar8 == (System_String_array *)0x0) goto label_05dc1257;
        uVar2 = (__this_02->fields)._size;
        if ((uint)pSVar8->max_length <= uVar2) break;
        (__this_02->fields)._size = uVar2 + 1;
        pSVar8->m_Items[(int)uVar2] = pSVar13;
        Il2CppCodeGenWriteBarrier(pSVar8->m_Items + (int)uVar2);
        iVar20 = iVar20 + 1;
        if ((__this_00->fields)._size <= iVar20) {
          return __this_02;
        }
      }
      System_Collections_Generic_List_object___AddWithResize
                ((System_Collections_Generic_List_object__o *)__this_02,(Il2CppObject *)pSVar13,
                 (MethodInfo_395D230 *)pMVar9->klass->rgctx_data[0xe].method);
      iVar20 = iVar20 + 1;
    } while (iVar20 < (__this_00->fields)._size);
  }
  return __this_02;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgKeybindConflictRegistry$$IsDefaultDuplicate
// il2cpp: bool Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry__IsDefaultDuplicate (Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry_Entry_o* entry, Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry_Entry_o* other, System_String_o* key, const MethodInfo* method);
// 0x5dc1650

bool Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry__IsDefaultDuplicate
               (Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry_Entry_o *entry,
               Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry_Entry_o *other,
               System_String_o *key,MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *pSVar1;
  bool bVar2;
  
  if (Il2CppMethodInitialized_07548180 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Contains)
    ;
    Il2CppMethodInitialized_07548180 = '\x01';
  }
  if ((entry != (Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry_Entry_o *)0x0) &&
     (pSVar1 = (System_Collections_Generic_HashSet_object__o *)(entry->fields).DefaultKeys,
     pSVar1 != (System_Collections_Generic_HashSet_object__o *)0x0)) {
    bVar2 = System_Collections_Generic_HashSet_object___Contains
                      (pSVar1,(Il2CppObject *)key,
                       (MethodInfo_4FB3720 *)MethodInfo_System_Collections_Generic_HashSet_string_Contains);
    if (!bVar2) {
      return false;
    }
    if ((other != (Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry_Entry_o *)0x0) &&
       (pSVar1 = (System_Collections_Generic_HashSet_object__o *)(other->fields).DefaultKeys,
       pSVar1 != (System_Collections_Generic_HashSet_object__o *)0x0)) {
      bVar2 = System_Collections_Generic_HashSet_object___Contains
                        (pSVar1,(Il2CppObject *)key,
                         (MethodInfo_4FB3720 *)MethodInfo_System_Collections_Generic_HashSet_string_Contains);
      return bVar2;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.SettingsScreen.AottgKeybindConflictRegistry$$ScopedKey
// il2cpp: System_String_o* Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry__ScopedKey (System_String_o* scopeId, System_String_o* key, const MethodInfo* method);
// 0x5dc15e0

System_String_o *
Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry__ScopedKey
          (System_String_o *scopeId,System_String_o *key,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_07548181 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"\n");
    Il2CppMethodInitialized_07548181 = '\x01';
  }
  if (scopeId == (System_String_o *)0x0) {
    scopeId = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
  }
  pSVar1 = System_String__Concat_5301f10(scopeId,"\n",key,(MethodInfo *)0x0);
  return pSVar1;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgKeybindConflictRegistry$$Keys
// il2cpp: System_Collections_Generic_IEnumerable_string__o* Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry__Keys (Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry_Entry_o* entry, const MethodInfo* method);
// 0x5dc1570

System_Collections_Generic_IEnumerable_string__o *
Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry__Keys
          (Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry_Entry_o *entry,MethodInfo *method)

{
  int32_t iVar1;
  Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry__Keys_d__13_o *__this;
  
  if (Il2CppMethodInitialized_07548182 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry_Keys_d__13);
    Il2CppMethodInitialized_07548182 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)
                      TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry_Keys_d__13);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = -2;
  iVar1 = System_Environment__get_CurrentManagedThreadId((MethodInfo *)0x0);
  (__this->fields).__l__initialThreadId = iVar1;
  (__this->fields).__3__entry = entry;
  Il2CppCodeGenWriteBarrier(&(__this->fields).__3__entry);
  return (System_Collections_Generic_IEnumerable_string__o *)__this;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgKeybindConflictRegistry$$BuildDefaultKeys
// il2cpp: System_Collections_Generic_HashSet_string__o* Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry__BuildDefaultKeys (Settings_KeybindSetting_o* setting, const MethodInfo* method);
// 0x5dbfb00
// eh: try 0x5dbfd3f..0x5dbfe45 -> pad 0x5dbfe58 (+7 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5dbfe74..0x5dbfe79 -> pad 0x5dbff05 cleanup
// eh: try 0x5dbff08..0x5dbff12 -> pad 0x5dbff1a catch (...) [compiler noexcept guard]
// asm: 35 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5dbfba0: cmp byte ptr [rip + 0x1782cdf], 0
// asm:   0x5dbfba7: je 0x5dbfc70
// asm:   0x5dbfcdd: lea r12, [rip + 0x14b9714]  ; TypeInfo_System_Collections_IEnumerator
// asm:   0x5dbfce4: xor r14d, r14d
// asm:   0x5dbfce7: lea r13, [rip + 0x14b12d2]  ; TypeInfo_System_Collections_Generic_IEnumerator_InputKey
// asm:   0x5dbfcee: lea rbp, [rip + 0x14d1a23]  ; MethodInfo_System_Collections_Generic_HashSet_string_Add
// asm:   0x5dbfcf5: jmp 0x5dbfd0d
// asm:   0x5dbfd00: mov rbx, qword ptr [rsp]
// asm:   0x5dbfd04: test rbx, rbx
// asm:   0x5dbfd07: je 0x5dbfe36
// asm:   0x5dbfd2d: nop dword ptr [rax]
// asm:   0x5dbfe4a: jmp 0x5dbfe58
// asm:   0x5dbfe4c: jmp 0x5dbfe58
// asm:   0x5dbfe4e: jmp 0x5dbfe58
// asm:   0x5dbfe50: jmp 0x5dbfe58
// asm:   0x5dbfe52: jmp 0x5dbfe58
// asm:   0x5dbfe54: jmp 0x5dbfe58
// asm:   0x5dbfe56: jmp 0x5dbfe58
// asm:   0x5dbfe58: mov rbx, rax
// asm:   0x5dbfe5b: cmp edx, 1
// asm:   0x5dbfe5e: jne 0x5dbff08
// asm:   0x5dbfe64: mov rdi, rbx
// asm:   0x5dbfe67: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5dbfe6c: mov r14, qword ptr [rax]
// asm:   0x5dbfe6f: mov qword ptr [rsp + 8], r14
// asm:   0x5dbfe74: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5dbfefd: mov rdi, r14
// asm:   0x5dbff00: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5dbff05: mov rbx, rax
// asm:   0x5dbff08: lea rdi, [rsp + 8]
// asm:   0x5dbff0d: call 0x2fde290  ; il2cpp_runtime_helper_02fde290()
// asm:   0x5dbff12: mov rdi, rbx
// asm:   0x5dbff15: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5dbff1a: mov rdi, rax
// asm:   0x5dbff1d: call 0x2ab61e0  ; __clang_call_terminate()

System_Collections_Generic_HashSet_string__o *
Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry__BuildDefaultKeys
          (Settings_KeybindSetting_o *setting,MethodInfo *method)

{
  uint32_t uVar1;
  System_OrdinalIgnoreCaseComparer_o *comparer;
  Il2CppClass *pIVar2;
  Il2CppRuntimeInterfaceOffsetPair *pIVar3;
  char cVar4;
  bool bVar5;
  System_Collections_Generic_HashSet_string__o *__this;
  Il2CppObject *pIVar6;
  VirtualInvokeData *pVVar7;
  Settings_InputKey_o *__this_00;
  System_String_o *item;
  ulong uVar8;
  long lVar9;
  Il2CppObject *local_48;
  undefined8 local_40;
  undefined1 *local_38;
  
  if (Il2CppMethodInitialized_07548183 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_string_ctor_7191708);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IDisposable);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_IEnumerable_InputKey);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_IEnumerator_InputKey);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_IEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_StringComparer);
    Il2CppMethodInitialized_07548183 = '\x01';
  }
  local_48 = (Il2CppObject *)0x0;
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
  if (setting == (Settings_KeybindSetting_o *)0x0) {
    return __this;
  }
  pIVar6 = (Il2CppObject *)Settings_KeybindSetting__DefaultInputKeys(setting,(MethodInfo *)0x0);
  if (pIVar6 == (Il2CppObject *)0x0) {
    ThrowNullReferenceException();
  }
  pIVar2 = pIVar6->klass;
  uVar8 = (ulong)(pIVar2->_2).interface_offsets_count;
  if (uVar8 != 0) {
    pIVar3 = (pIVar2->_1).interfaceOffsets;
    lVar9 = 0;
    do {
      if (*(System_Collections_Generic_IEnumerable_InputKey__c **)((long)&pIVar3->interfaceType + lVar9) ==
          TypeInfo_System_Collections_Generic_IEnumerable_InputKey) {
        pVVar7 = (VirtualInvokeData *)&pIVar2->vtable[*(int *)((long)&pIVar3->offset + lVar9)].methodPtr;
        goto label_05dbfcb3;
      }
      lVar9 = lVar9 + 0x10;
    } while (uVar8 * 0x10 != lVar9);
  }
  pVVar7 = GetInterfaceInvokeDataFromVTableSlowPath
                     (pIVar6,(Il2CppClass *)TypeInfo_System_Collections_Generic_IEnumerable_InputKey,0);
label_05dbfcb3:
  pIVar6 = (*pVVar7->methodPtr)(pIVar6,pVVar7->method);
  local_40 = 0;
  local_38 = (undefined1 *)&local_48;
  do {
    local_48 = pIVar6;
    if (pIVar6 == (Il2CppObject *)0x0) {
      ThrowNullReferenceException();
    }
    pIVar2 = pIVar6->klass;
    uVar8 = (ulong)(pIVar2->_2).interface_offsets_count;
    if (uVar8 != 0) {
      pIVar3 = (pIVar2->_1).interfaceOffsets;
      lVar9 = 0;
      do {
        if (*(Il2CppClass **)((long)&pIVar3->interfaceType + lVar9) ==
            (Il2CppClass *)TypeInfo_System_Collections_IEnumerator) {
          pVVar7 = (VirtualInvokeData *)&pIVar2->vtable[*(int *)((long)&pIVar3->offset + lVar9)].methodPtr;
          goto label_05dbfd63;
        }
        lVar9 = lVar9 + 0x10;
      } while (uVar8 * 0x10 != lVar9);
    }
    pVVar7 = GetInterfaceInvokeDataFromVTableSlowPath
                       (pIVar6,(Il2CppClass *)TypeInfo_System_Collections_IEnumerator,0);
label_05dbfd63:
    cVar4 = (*pVVar7->methodPtr)(pIVar6,pVVar7->method);
    pIVar6 = local_48;
    if (cVar4 == '\0') {
      if (local_48 == (Il2CppObject *)0x0) {
        return __this;
      }
      pIVar2 = local_48->klass;
      uVar8 = (ulong)(pIVar2->_2).interface_offsets_count;
      if (uVar8 == 0) goto label_05dbfebf;
      pIVar3 = (pIVar2->_1).interfaceOffsets;
      lVar9 = 0;
      break;
    }
    if (local_48 == (Il2CppObject *)0x0) {
      ThrowNullReferenceException();
    }
    pIVar2 = local_48->klass;
    uVar8 = (ulong)(pIVar2->_2).interface_offsets_count;
    if (uVar8 != 0) {
      pIVar3 = (pIVar2->_1).interfaceOffsets;
      lVar9 = 0;
      do {
        if (*(System_Collections_Generic_IEnumerator_InputKey__c **)((long)&pIVar3->interfaceType + lVar9) ==
            TypeInfo_System_Collections_Generic_IEnumerator_InputKey) {
          pVVar7 = (VirtualInvokeData *)&pIVar2->vtable[*(int *)((long)&pIVar3->offset + lVar9)].methodPtr;
          goto label_05dbfde3;
        }
        lVar9 = lVar9 + 0x10;
      } while (uVar8 * 0x10 != lVar9);
    }
    pVVar7 = GetInterfaceInvokeDataFromVTableSlowPath
                       (local_48,(Il2CppClass *)TypeInfo_System_Collections_Generic_IEnumerator_InputKey,0);
label_05dbfde3:
    __this_00 = (Settings_InputKey_o *)(*pVVar7->methodPtr)(pIVar6,pVVar7->method);
    pIVar6 = local_48;
    if ((__this_00 != (Settings_InputKey_o *)0x0) &&
       (bVar5 = Settings_InputKey__IsNone(__this_00,(MethodInfo *)0x0), pIVar6 = local_48, !bVar5)) {
      item = (*(__this_00->klass->vtable)._3_ToString.methodPtr)
                       (__this_00,(__this_00->klass->vtable)._3_ToString.method);
      if (__this == (System_Collections_Generic_HashSet_string__o *)0x0) {
        ThrowNullReferenceException();
      }
      System_Collections_Generic_HashSet_object___Add
                ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)item,
                 (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
      pIVar6 = local_48;
    }
  } while( true );
  while (lVar9 = lVar9 + 0x10, uVar8 * 0x10 != lVar9) {
    if (*(System_IDisposable_c **)((long)&pIVar3->interfaceType + lVar9) == TypeInfo_System_IDisposable) {
      pVVar7 = (VirtualInvokeData *)&pIVar2->vtable[*(int *)((long)&pIVar3->offset + lVar9)].methodPtr;
      goto label_05dbfedd;
    }
  }
label_05dbfebf:
  pVVar7 = GetInterfaceInvokeDataFromVTableSlowPath(local_48,(Il2CppClass *)TypeInfo_System_IDisposable,0);
label_05dbfedd:
  (*pVVar7->methodPtr)(pIVar6,pVVar7->method);
  return __this;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgKeybindConflictRegistry$$.cctor
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry___cctor (const MethodInfo* method);
// 0x5dc1700
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5dc1728: cmp byte ptr [rip + 0x1781157], 0

void Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry___cctor(MethodInfo *method)

{
  uint32_t uVar1;
  System_OrdinalIgnoreCaseComparer_o *comparer;
  System_Collections_Generic_Dictionary_string__AottgKeybindConflictRegistry_Entry__o *__this;
  
  if (Il2CppMethodInitialized_07548184 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_string_AottgKeybindConflictRegistry_Entry_ctor
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_Dictionary_string_AottgKeybindConflictRegistry_Entry);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_StringComparer);
    Il2CppMethodInitialized_07548184 = '\x01';
    uVar1 = (TypeInfo_System_StringComparer->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_System_StringComparer->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
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
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)
                      TypeInfo_System_Collections_Generic_Dictionary_string_AottgKeybindConflictRegistry_Entry
                     );
  System_Collections_Generic_Dictionary_object__object____ctor_4aac9c0
            ((System_Collections_Generic_Dictionary_object__object__o *)__this,
             (System_Collections_Generic_IEqualityComparer_TKey__o *)comparer,
             (MethodInfo_4AAC9C0 *)
             MethodInfo_System_Collections_Generic_Dictionary_string_AottgKeybindConflictRegistry_Entry_ctor);
  TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry->static_fields->Entries = __this;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry->static_fields->Entries);
  return;
}


