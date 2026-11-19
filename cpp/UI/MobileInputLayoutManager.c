// Type: UI.MobileInputLayoutManager
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: NEW in this game update
// C# structure: source/csharp/Scripts/UI/MobileInputLayoutManager.cs
// Prior real C# source: none
// --------------------------------

// UI.MobileInputLayoutManager.<>c$$.cctor
// il2cpp: void UI_MobileInputLayoutManager___c___cctor (const MethodInfo* method);
// 0x5c9a1d0

void UI_MobileInputLayoutManager___c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (Il2CppMethodInitialized_07547a06 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MobileInputLayoutManager_c);
    Il2CppMethodInitialized_07547a06 = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_MobileInputLayoutManager_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  TypeInfo_UI_MobileInputLayoutManager_c->static_fields->__9 = (UI_MobileInputLayoutManager___c_o *)__this;
  Il2CppCodeGenWriteBarrier(&TypeInfo_UI_MobileInputLayoutManager_c->static_fields->__9);
  return;
}


// UI.MobileInputLayoutManager.<>c$$.ctor
// il2cpp: void UI_MobileInputLayoutManager___c___ctor (UI_MobileInputLayoutManager___c_o* __this, const MethodInfo* method);
// 0x5c9a240

void UI_MobileInputLayoutManager___c___ctor(UI_MobileInputLayoutManager___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// UI.MobileInputLayoutManager.<>c$$<GetLayoutNames>b__16_0
// il2cpp: System_String_o* UI_MobileInputLayoutManager___c___GetLayoutNames_b__16_0 (UI_MobileInputLayoutManager___c_o* __this, UI_MobileInputLayout_o* x, const MethodInfo* method);
// 0x5c9a250

System_String_o *
UI_MobileInputLayoutManager___c___GetLayoutNames_b__16_0
          (UI_MobileInputLayoutManager___c_o *__this,UI_MobileInputLayout_o *x,MethodInfo *method)

{
  if (x == (UI_MobileInputLayout_o *)0x0) {
    ThrowNullReferenceException();
  }
  return (x->fields).Name;
}


// UI.MobileInputLayoutManager.<>c__DisplayClass18_0$$.ctor
// il2cpp: void UI_MobileInputLayoutManager___c__DisplayClass18_0___ctor (UI_MobileInputLayoutManager___c__DisplayClass18_0_o* __this, const MethodInfo* method);
// 0x5c9a270

void UI_MobileInputLayoutManager___c__DisplayClass18_0___ctor
               (UI_MobileInputLayoutManager___c__DisplayClass18_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// UI.MobileInputLayoutManager.<>c__DisplayClass18_0$$<IsBuiltinLayoutName>b__0
// il2cpp: bool UI_MobileInputLayoutManager___c__DisplayClass18_0___IsBuiltinLayoutName_b__0 (UI_MobileInputLayoutManager___c__DisplayClass18_0_o* __this, UI_MobileInputLayout_o* x, const MethodInfo* method);
// 0x5c9a280

bool UI_MobileInputLayoutManager___c__DisplayClass18_0___IsBuiltinLayoutName_b__0
               (UI_MobileInputLayoutManager___c__DisplayClass18_0_o *__this,UI_MobileInputLayout_o *x,
               MethodInfo *method)

{
  bool bVar1;
  
  if (x == (UI_MobileInputLayout_o *)0x0) {
    ThrowNullReferenceException();
  }
  if ((x->fields).Builtin == false) {
    return false;
  }
  bVar1 = System_String__op_Equality((x->fields).Name,(__this->fields).name,(MethodInfo *)0x0);
  return bVar1;
}


// UI.MobileInputLayoutManager.<>c__DisplayClass21_0$$.ctor
// il2cpp: void UI_MobileInputLayoutManager___c__DisplayClass21_0___ctor (UI_MobileInputLayoutManager___c__DisplayClass21_0_o* __this, const MethodInfo* method);
// 0x5c9a2b0

void UI_MobileInputLayoutManager___c__DisplayClass21_0___ctor
               (UI_MobileInputLayoutManager___c__DisplayClass21_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// UI.MobileInputLayoutManager.<>c__DisplayClass21_0$$<GetUniqueLayoutName>b__0
// il2cpp: bool UI_MobileInputLayoutManager___c__DisplayClass21_0___GetUniqueLayoutName_b__0 (UI_MobileInputLayoutManager___c__DisplayClass21_0_o* __this, UI_MobileInputLayout_o* x, const MethodInfo* method);
// 0x5c9a2c0

bool UI_MobileInputLayoutManager___c__DisplayClass21_0___GetUniqueLayoutName_b__0
               (UI_MobileInputLayoutManager___c__DisplayClass21_0_o *__this,UI_MobileInputLayout_o *x,
               MethodInfo *method)

{
  bool bVar1;
  
  if (x == (UI_MobileInputLayout_o *)0x0) {
    ThrowNullReferenceException();
  }
  bVar1 = System_String__op_Equality((x->fields).Name,(__this->fields).name,(MethodInfo *)0x0);
  return bVar1;
}


// UI.MobileInputLayoutManager.<>c__DisplayClass21_1$$.ctor
// il2cpp: void UI_MobileInputLayoutManager___c__DisplayClass21_1___ctor (UI_MobileInputLayoutManager___c__DisplayClass21_1_o* __this, const MethodInfo* method);
// 0x5c9a2e0

void UI_MobileInputLayoutManager___c__DisplayClass21_1___ctor
               (UI_MobileInputLayoutManager___c__DisplayClass21_1_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// UI.MobileInputLayoutManager.<>c__DisplayClass21_1$$<GetUniqueLayoutName>b__1
// il2cpp: bool UI_MobileInputLayoutManager___c__DisplayClass21_1___GetUniqueLayoutName_b__1 (UI_MobileInputLayoutManager___c__DisplayClass21_1_o* __this, UI_MobileInputLayout_o* x, const MethodInfo* method);
// 0x5c9a2f0

bool UI_MobileInputLayoutManager___c__DisplayClass21_1___GetUniqueLayoutName_b__1
               (UI_MobileInputLayoutManager___c__DisplayClass21_1_o *__this,UI_MobileInputLayout_o *x,
               MethodInfo *method)

{
  bool bVar1;
  
  if (x == (UI_MobileInputLayout_o *)0x0) {
    ThrowNullReferenceException();
  }
  bVar1 = System_String__op_Equality((x->fields).Name,(__this->fields).candidate,(MethodInfo *)0x0);
  return bVar1;
}


// UI.MobileInputLayoutManager.<>c__DisplayClass22_0$$.ctor
// il2cpp: void UI_MobileInputLayoutManager___c__DisplayClass22_0___ctor (UI_MobileInputLayoutManager___c__DisplayClass22_0_o* __this, const MethodInfo* method);
// 0x5c9a310

void UI_MobileInputLayoutManager___c__DisplayClass22_0___ctor
               (UI_MobileInputLayoutManager___c__DisplayClass22_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// UI.MobileInputLayoutManager.<>c__DisplayClass22_0$$<SetSelectedLayoutName>b__0
// il2cpp: bool UI_MobileInputLayoutManager___c__DisplayClass22_0___SetSelectedLayoutName_b__0 (UI_MobileInputLayoutManager___c__DisplayClass22_0_o* __this, UI_MobileInputLayout_o* x, const MethodInfo* method);
// 0x5c9a320

bool UI_MobileInputLayoutManager___c__DisplayClass22_0___SetSelectedLayoutName_b__0
               (UI_MobileInputLayoutManager___c__DisplayClass22_0_o *__this,UI_MobileInputLayout_o *x,
               MethodInfo *method)

{
  bool bVar1;
  
  if (x == (UI_MobileInputLayout_o *)0x0) {
    ThrowNullReferenceException();
  }
  bVar1 = System_String__op_Equality((x->fields).Name,(__this->fields).name,(MethodInfo *)0x0);
  return bVar1;
}


// UI.MobileInputLayoutManager.<>c__DisplayClass23_0$$.ctor
// il2cpp: void UI_MobileInputLayoutManager___c__DisplayClass23_0___ctor (UI_MobileInputLayoutManager___c__DisplayClass23_0_o* __this, const MethodInfo* method);
// 0x5c9a340

void UI_MobileInputLayoutManager___c__DisplayClass23_0___ctor
               (UI_MobileInputLayoutManager___c__DisplayClass23_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// UI.MobileInputLayoutManager.<>c__DisplayClass23_0$$<GetSelectedLayout>b__0
// il2cpp: bool UI_MobileInputLayoutManager___c__DisplayClass23_0___GetSelectedLayout_b__0 (UI_MobileInputLayoutManager___c__DisplayClass23_0_o* __this, UI_MobileInputLayout_o* x, const MethodInfo* method);
// 0x5c9a350

bool UI_MobileInputLayoutManager___c__DisplayClass23_0___GetSelectedLayout_b__0
               (UI_MobileInputLayoutManager___c__DisplayClass23_0_o *__this,UI_MobileInputLayout_o *x,
               MethodInfo *method)

{
  System_String_o *a;
  System_Collections_Generic_Dictionary_MobileInputLayoutRole__string__o *__this_00;
  bool bVar1;
  System_String_o *b;
  
  if (Il2CppMethodInitialized_07547a07 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_MobileInputLayoutRole_string_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MobileInputLayoutManager);
    Il2CppMethodInitialized_07547a07 = '\x01';
  }
  if (x != (UI_MobileInputLayout_o *)0x0) {
    a = (x->fields).Name;
    if ((TypeInfo_UI_MobileInputLayoutManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MobileInputLayoutManager);
    }
    __this_00 = TypeInfo_UI_MobileInputLayoutManager->static_fields->_selected;
    if (__this_00 != (System_Collections_Generic_Dictionary_MobileInputLayoutRole__string__o *)0x0) {
      b = System_Collections_Generic_Dictionary_Int32Enum__object___get_Item
                    ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,(__this->fields).role,
                     (MethodInfo_4A54F30 *)
                     MethodInfo_System_Collections_Generic_Dictionary_MobileInputLayoutRole_string_get_Item);
      bVar1 = System_String__op_Equality(a,b,(MethodInfo *)0x0);
      return bVar1;
    }
  }
  ThrowNullReferenceException();
}


// UI.MobileInputLayoutManager.<>c__DisplayClass25_0$$.ctor
// il2cpp: void UI_MobileInputLayoutManager___c__DisplayClass25_0___ctor (UI_MobileInputLayoutManager___c__DisplayClass25_0_o* __this, const MethodInfo* method);
// 0x5c9a3f0

void UI_MobileInputLayoutManager___c__DisplayClass25_0___ctor
               (UI_MobileInputLayoutManager___c__DisplayClass25_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// UI.MobileInputLayoutManager.<>c__DisplayClass25_0$$<SaveCustomLayout>b__0
// il2cpp: bool UI_MobileInputLayoutManager___c__DisplayClass25_0___SaveCustomLayout_b__0 (UI_MobileInputLayoutManager___c__DisplayClass25_0_o* __this, UI_MobileInputLayout_o* x, const MethodInfo* method);
// 0x5c9a400

bool UI_MobileInputLayoutManager___c__DisplayClass25_0___SaveCustomLayout_b__0
               (UI_MobileInputLayoutManager___c__DisplayClass25_0_o *__this,UI_MobileInputLayout_o *x,
               MethodInfo *method)

{
  UI_MobileInputLayout_o *pUVar1;
  bool bVar2;
  
  if (x != (UI_MobileInputLayout_o *)0x0) {
    if ((x->fields).Builtin != false) {
      return false;
    }
    pUVar1 = (__this->fields).layout;
    if (pUVar1 != (UI_MobileInputLayout_o *)0x0) {
      bVar2 = System_String__op_Equality((x->fields).Name,(pUVar1->fields).Name,(MethodInfo *)0x0);
      return bVar2;
    }
  }
  ThrowNullReferenceException();
}


// UI.MobileInputLayoutManager.<>c__DisplayClass29_0$$.ctor
// il2cpp: void UI_MobileInputLayoutManager___c__DisplayClass29_0___ctor (UI_MobileInputLayoutManager___c__DisplayClass29_0_o* __this, const MethodInfo* method);
// 0x5c9a430

void UI_MobileInputLayoutManager___c__DisplayClass29_0___ctor
               (UI_MobileInputLayoutManager___c__DisplayClass29_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// UI.MobileInputLayoutManager.<>c__DisplayClass29_0$$<TryAddLayout>b__0
// il2cpp: bool UI_MobileInputLayoutManager___c__DisplayClass29_0___TryAddLayout_b__0 (UI_MobileInputLayoutManager___c__DisplayClass29_0_o* __this, UI_MobileInputLayout_o* x, const MethodInfo* method);
// 0x5c9a440

bool UI_MobileInputLayoutManager___c__DisplayClass29_0___TryAddLayout_b__0
               (UI_MobileInputLayoutManager___c__DisplayClass29_0_o *__this,UI_MobileInputLayout_o *x,
               MethodInfo *method)

{
  UI_MobileInputLayout_o *pUVar1;
  bool bVar2;
  bool bVar3;
  
  if ((x == (UI_MobileInputLayout_o *)0x0) ||
     (pUVar1 = (__this->fields).layout, pUVar1 == (UI_MobileInputLayout_o *)0x0)) {
label_05c9a48c:
    ThrowNullReferenceException();
  }
  bVar3 = false;
  bVar2 = System_String__op_Equality((x->fields).Name,(pUVar1->fields).Name,(MethodInfo *)0x0);
  if (bVar2) {
    pUVar1 = (__this->fields).layout;
    if (pUVar1 == (UI_MobileInputLayout_o *)0x0) goto label_05c9a48c;
    bVar3 = (x->fields).Builtin == (pUVar1->fields).Builtin;
  }
  return bVar3;
}


// UI.MobileInputLayoutManager.<>c__DisplayClass30_0$$.ctor
// il2cpp: void UI_MobileInputLayoutManager___c__DisplayClass30_0___ctor (UI_MobileInputLayoutManager___c__DisplayClass30_0_o* __this, const MethodInfo* method);
// 0x5c9a4a0

void UI_MobileInputLayoutManager___c__DisplayClass30_0___ctor
               (UI_MobileInputLayoutManager___c__DisplayClass30_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// UI.MobileInputLayoutManager.<>c__DisplayClass30_0$$<LoadSelections>b__0
// il2cpp: bool UI_MobileInputLayoutManager___c__DisplayClass30_0___LoadSelections_b__0 (UI_MobileInputLayoutManager___c__DisplayClass30_0_o* __this, UI_MobileInputLayout_o* x, const MethodInfo* method);
// 0x5c9a4b0

bool UI_MobileInputLayoutManager___c__DisplayClass30_0___LoadSelections_b__0
               (UI_MobileInputLayoutManager___c__DisplayClass30_0_o *__this,UI_MobileInputLayout_o *x,
               MethodInfo *method)

{
  bool bVar1;
  
  if (x == (UI_MobileInputLayout_o *)0x0) {
    ThrowNullReferenceException();
  }
  bVar1 = System_String__op_Equality((x->fields).Name,(__this->fields).value,(MethodInfo *)0x0);
  return bVar1;
}


// UI.MobileInputLayoutManager$$add_OnLayoutsChanged
// il2cpp: void UI_MobileInputLayoutManager__add_OnLayoutsChanged (System_Action_o* value, const MethodInfo* method);
// 0x5c63bc0

void UI_MobileInputLayoutManager__add_OnLayoutsChanged(System_Action_o *value,MethodInfo *method)

{
  System_Action_o *pSVar1;
  System_Delegate_o *value_00;
  System_Action_o *a;
  bool bVar2;
  
  if (Il2CppMethodInitialized_0754795b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MobileInputLayoutManager);
    Il2CppMethodInitialized_0754795b = '\x01';
  }
  if ((TypeInfo_UI_MobileInputLayoutManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MobileInputLayoutManager);
  }
  a = TypeInfo_UI_MobileInputLayoutManager->static_fields->OnLayoutsChanged;
  do {
    value_00 = System_Delegate__Combine((System_Delegate_o *)a,(System_Delegate_o *)value,(MethodInfo *)0x0);
    if ((value_00 != (System_Delegate_o *)0x0) &&
       ((System_Action_c *)value_00->klass != TypeInfo_System_Action)) {
      il2cpp_codegen_raise_invalid_cast_exception(value_00);
    }
    if ((TypeInfo_UI_MobileInputLayoutManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MobileInputLayoutManager);
    }
    pSVar1 = il2cpp_codegen_interlocked_compare_exchange_ref
                       (&TypeInfo_UI_MobileInputLayoutManager->static_fields->OnLayoutsChanged,value_00,a);
    bVar2 = pSVar1 != a;
    a = pSVar1;
  } while (bVar2);
  return;
}


// UI.MobileInputLayoutManager$$remove_OnLayoutsChanged
// il2cpp: void UI_MobileInputLayoutManager__remove_OnLayoutsChanged (System_Action_o* value, const MethodInfo* method);
// 0x5c642a0

void UI_MobileInputLayoutManager__remove_OnLayoutsChanged(System_Action_o *value,MethodInfo *method)

{
  System_Action_o *pSVar1;
  System_Delegate_o *value_00;
  System_Action_o *source;
  bool bVar2;
  
  if (Il2CppMethodInitialized_0754795c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MobileInputLayoutManager);
    Il2CppMethodInitialized_0754795c = '\x01';
  }
  if ((TypeInfo_UI_MobileInputLayoutManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MobileInputLayoutManager);
  }
  source = TypeInfo_UI_MobileInputLayoutManager->static_fields->OnLayoutsChanged;
  do {
    value_00 = System_Delegate__Remove
                         ((System_Delegate_o *)source,(System_Delegate_o *)value,(MethodInfo *)0x0);
    if ((value_00 != (System_Delegate_o *)0x0) &&
       ((System_Action_c *)value_00->klass != TypeInfo_System_Action)) {
      il2cpp_codegen_raise_invalid_cast_exception(value_00);
    }
    if ((TypeInfo_UI_MobileInputLayoutManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MobileInputLayoutManager);
    }
    pSVar1 = il2cpp_codegen_interlocked_compare_exchange_ref
                       (&TypeInfo_UI_MobileInputLayoutManager->static_fields->OnLayoutsChanged,value_00,source
                       );
    bVar2 = pSVar1 != source;
    source = pSVar1;
  } while (bVar2);
  return;
}


// UI.MobileInputLayoutManager$$add_OnSelectionChanged
// il2cpp: void UI_MobileInputLayoutManager__add_OnSelectionChanged (System_Action_o* value, const MethodInfo* method);
// 0x5c63ae0

void UI_MobileInputLayoutManager__add_OnSelectionChanged(System_Action_o *value,MethodInfo *method)

{
  System_Action_o *pSVar1;
  System_Delegate_o *value_00;
  System_Action_o *a;
  bool bVar2;
  
  if (Il2CppMethodInitialized_0754795d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MobileInputLayoutManager);
    Il2CppMethodInitialized_0754795d = '\x01';
  }
  if ((TypeInfo_UI_MobileInputLayoutManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MobileInputLayoutManager);
  }
  a = TypeInfo_UI_MobileInputLayoutManager->static_fields->OnSelectionChanged;
  do {
    value_00 = System_Delegate__Combine((System_Delegate_o *)a,(System_Delegate_o *)value,(MethodInfo *)0x0);
    if ((value_00 != (System_Delegate_o *)0x0) &&
       ((System_Action_c *)value_00->klass != TypeInfo_System_Action)) {
      il2cpp_codegen_raise_invalid_cast_exception(value_00);
    }
    if ((TypeInfo_UI_MobileInputLayoutManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MobileInputLayoutManager);
    }
    pSVar1 = il2cpp_codegen_interlocked_compare_exchange_ref
                       (&TypeInfo_UI_MobileInputLayoutManager->static_fields->OnSelectionChanged,value_00,a);
    bVar2 = pSVar1 != a;
    a = pSVar1;
  } while (bVar2);
  return;
}


// UI.MobileInputLayoutManager$$remove_OnSelectionChanged
// il2cpp: void UI_MobileInputLayoutManager__remove_OnSelectionChanged (System_Action_o* value, const MethodInfo* method);
// 0x5c641c0

void UI_MobileInputLayoutManager__remove_OnSelectionChanged(System_Action_o *value,MethodInfo *method)

{
  System_Action_o *pSVar1;
  System_Delegate_o *value_00;
  System_Action_o *source;
  bool bVar2;
  
  if (Il2CppMethodInitialized_0754795e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MobileInputLayoutManager);
    Il2CppMethodInitialized_0754795e = '\x01';
  }
  if ((TypeInfo_UI_MobileInputLayoutManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MobileInputLayoutManager);
  }
  source = TypeInfo_UI_MobileInputLayoutManager->static_fields->OnSelectionChanged;
  do {
    value_00 = System_Delegate__Remove
                         ((System_Delegate_o *)source,(System_Delegate_o *)value,(MethodInfo *)0x0);
    if ((value_00 != (System_Delegate_o *)0x0) &&
       ((System_Action_c *)value_00->klass != TypeInfo_System_Action)) {
      il2cpp_codegen_raise_invalid_cast_exception(value_00);
    }
    if ((TypeInfo_UI_MobileInputLayoutManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MobileInputLayoutManager);
    }
    pSVar1 = il2cpp_codegen_interlocked_compare_exchange_ref
                       (&TypeInfo_UI_MobileInputLayoutManager->static_fields->OnSelectionChanged,value_00,
                        source);
    bVar2 = pSVar1 != source;
    source = pSVar1;
  } while (bVar2);
  return;
}


// UI.MobileInputLayoutManager$$EnsureLoaded
// il2cpp: void UI_MobileInputLayoutManager__EnsureLoaded (const MethodInfo* method);
// 0x5c789b0
// eh: try 0x5c78b7f..0x5c78de7 -> pad 0x5c78dfe (+9 call sites) catch Il2CppExceptionWrapper, cleanup [compiler noexcept guard]
// eh: try 0x5c78e1f..0x5c78e24 -> pad 0x5c78e29 cleanup
// eh: try 0x5c78e2c..0x5c78e36 -> pad 0x5c78e3e catch (...) [compiler noexcept guard]
// asm: 31 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5c78a74: jmp 0x5c78a90
// asm:   0x5c78b3f: nop 
// asm:   0x5c78b6e: nop 
// asm:   0x5c78d4e: nop 
// asm:   0x5c78dec: mov rdi, r15
// asm:   0x5c78def: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5c78df4: jmp 0x5c78e04
// asm:   0x5c78df6: jmp 0x5c78e04
// asm:   0x5c78df8: jmp 0x5c78e04
// asm:   0x5c78dfa: jmp 0x5c78e04
// asm:   0x5c78dfc: jmp 0x5c78e04
// asm:   0x5c78dfe: jmp 0x5c78e04
// asm:   0x5c78e00: jmp 0x5c78e04
// asm:   0x5c78e02: jmp 0x5c78e04
// asm:   0x5c78e04: mov rbx, rax
// asm:   0x5c78e07: cmp edx, 1
// asm:   0x5c78e0a: jne 0x5c78e2c
// asm:   0x5c78e0c: mov rdi, rbx
// asm:   0x5c78e0f: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5c78e14: mov r15, qword ptr [rax]
// asm:   0x5c78e17: mov qword ptr [rsp + 0x10], r15
// asm:   0x5c78e1c: xor r14d, r14d
// asm:   0x5c78e1f: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5c78e24: jmp 0x5c78d0f
// asm:   0x5c78e29: mov rbx, rax
// asm:   0x5c78e2c: lea rdi, [rsp + 0x10]
// asm:   0x5c78e31: call 0x2fda070  ; il2cpp_runtime_helper_02fda070()
// asm:   0x5c78e36: mov rdi, rbx
// asm:   0x5c78e39: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5c78e3e: mov rdi, rax
// asm:   0x5c78e41: call 0x2ab61e0  ; __clang_call_terminate()

void UI_MobileInputLayoutManager__EnsureLoaded(MethodInfo *method)

{
  char cVar1;
  int32_t key;
  Il2CppClass *pIVar2;
  Il2CppRuntimeInterfaceOffsetPair *pIVar3;
  System_Collections_Generic_Dictionary_MobileInputLayoutRole__List_MobileInputLayout___o *__this;
  System_Collections_Generic_Dictionary_MobileInputLayoutRole__string__o *__this_00;
  Il2CppType *handle;
  bool bVar4;
  UI_MobileInputLayoutManager_StaticFields *pUVar5;
  System_Type_o *enumType;
  System_Array_o *__this_01;
  VirtualInvokeData *pVVar6;
  Il2CppObject *pIVar7;
  int32_t *piVar8;
  System_Collections_Generic_List_MobileInputLayout__o *__this_02;
  ulong uVar9;
  long lVar10;
  UI_MobileInputLayoutManager_c *method_00;
  Il2CppObject *local_58;
  Il2CppObject *local_50;
  undefined8 local_48;
  undefined1 *local_40;
  Il2CppObject **local_38;
  
  if (Il2CppMethodInitialized_0754795f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_MobileInputLayoutRole_List_MobileInputLayout_set_Item
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_MobileInputLayoutRole_string_set_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IDisposable);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_IEnumerator);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_MobileInputLayout_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_MobileInputLayout);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MobileInputLayoutManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UI_MobileInputLayoutRole);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MobileInputLayoutRole);
    il2cpp_codegen_initialize_runtime_metadata(&"Default");
    Il2CppMethodInitialized_0754795f = '\x01';
  }
  local_50 = (Il2CppObject *)0x0;
  if ((TypeInfo_UI_MobileInputLayoutManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MobileInputLayoutManager);
    pUVar5 = TypeInfo_UI_MobileInputLayoutManager->static_fields;
    cVar1 = pUVar5->_loaded;
  }
  else {
    pUVar5 = TypeInfo_UI_MobileInputLayoutManager->static_fields;
    cVar1 = pUVar5->_loaded;
  }
  if (cVar1 != '\0') {
    return;
  }
  if ((((Il2CppClass *)TypeInfo_UI_MobileInputLayoutManager)->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MobileInputLayoutManager);
    pUVar5 = TypeInfo_UI_MobileInputLayoutManager->static_fields;
  }
  pUVar5->_loaded = true;
  handle = TypeRef_UI_MobileInputLayoutRole;
  if ((g_data_075567a8->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_075567a8);
  }
  enumType = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)handle,(MethodInfo *)0x0);
  if ((g_data_07556760->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_07556760);
  }
  __this_01 = System_Enum__GetValues(enumType,(MethodInfo *)0x0);
  if (__this_01 == (System_Array_o *)0x0) {
    ThrowNullReferenceException();
  }
  local_58 = (Il2CppObject *)System_Array__GetEnumerator(__this_01,(MethodInfo *)0x0);
  local_40 = (undefined1 *)&local_58;
  local_48 = 0;
  local_38 = &local_50;
  do {
    pIVar7 = local_58;
    if (local_58 == (Il2CppObject *)0x0) {
      ThrowNullReferenceException();
    }
    pIVar2 = local_58->klass;
    uVar9 = (ulong)(pIVar2->_2).interface_offsets_count;
    if (uVar9 != 0) {
      pIVar3 = (pIVar2->_1).interfaceOffsets;
      lVar10 = 0;
      do {
        if (*(System_Collections_IEnumerator_c **)((long)&pIVar3->interfaceType + lVar10) ==
            TypeInfo_System_Collections_IEnumerator) {
          pVVar6 = pIVar2->vtable + *(int *)((long)&pIVar3->offset + lVar10);
          goto label_05c78ba3;
        }
        lVar10 = lVar10 + 0x10;
      } while (uVar9 * 0x10 != lVar10);
    }
    pVVar6 = GetInterfaceInvokeDataFromVTableSlowPath
                       (local_58,(Il2CppClass *)TypeInfo_System_Collections_IEnumerator,0);
label_05c78ba3:
    bVar4 = (*pVVar6->methodPtr)(pIVar7,pVVar6->method);
    pIVar7 = local_58;
    if (!bVar4) {
      pIVar7 = il2cpp_vm_Object_IsInst(local_58,(Il2CppClass *)TypeInfo_System_IDisposable);
      local_50 = pIVar7;
      if (pIVar7 == (Il2CppObject *)0x0) goto label_05c78d86;
      pIVar2 = pIVar7->klass;
      uVar9 = (ulong)(pIVar2->_2).interface_offsets_count;
      if (uVar9 == 0) goto label_05c78d5f;
      pIVar3 = (pIVar2->_1).interfaceOffsets;
      lVar10 = 0;
      break;
    }
    if (local_58 == (Il2CppObject *)0x0) {
      ThrowNullReferenceException();
    }
    pIVar2 = local_58->klass;
    uVar9 = (ulong)(pIVar2->_2).interface_offsets_count;
    if (uVar9 != 0) {
      pIVar3 = (pIVar2->_1).interfaceOffsets;
      lVar10 = 0;
      do {
        if (*(System_Collections_IEnumerator_c **)((long)&pIVar3->interfaceType + lVar10) ==
            TypeInfo_System_Collections_IEnumerator) {
          pVVar6 = pIVar2->vtable + (*(int *)((long)&pIVar3->offset + lVar10) + 1);
          goto label_05c78c37;
        }
        lVar10 = lVar10 + 0x10;
      } while (uVar9 * 0x10 != lVar10);
    }
    pVVar6 = GetInterfaceInvokeDataFromVTableSlowPath
                       (local_58,(Il2CppClass *)TypeInfo_System_Collections_IEnumerator,1);
label_05c78c37:
    pIVar7 = (*pVVar6->methodPtr)(pIVar7,pVVar6->method);
    if (pIVar7 == (Il2CppObject *)0x0) {
      ThrowNullReferenceException();
    }
    if ((pIVar7->klass->_1).element_class != (TypeInfo_UI_MobileInputLayoutRole->_1).element_class) {
      il2cpp_codegen_raise_invalid_cast_exception(pIVar7);
    }
    piVar8 = il2cpp_vm_Object_Unbox(pIVar7);
    key = *piVar8;
    if ((TypeInfo_UI_MobileInputLayoutManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MobileInputLayoutManager);
    }
    __this = TypeInfo_UI_MobileInputLayoutManager->static_fields->_layouts;
    __this_02 = il2cpp_codegen_object_new
                          ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_MobileInputLayout);
    System_Collections_Generic_List_object____ctor
              ((System_Collections_Generic_List_object__o *)__this_02,
               (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_MobileInputLayout_ctor);
    if (__this == (System_Collections_Generic_Dictionary_MobileInputLayoutRole__List_MobileInputLayout___o *)
                  0x0) {
      ThrowNullReferenceException();
    }
    System_Collections_Generic_Dictionary_Int32Enum__object___set_Item
              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this,key,(Il2CppObject *)__this_02,
               (MethodInfo_4A54FC0 *)
               MethodInfo_System_Collections_Generic_Dictionary_MobileInputLayoutRole_List_MobileInputLayout_set_Item
              );
    __this_00 = TypeInfo_UI_MobileInputLayoutManager->static_fields->_selected;
    if (__this_00 == (System_Collections_Generic_Dictionary_MobileInputLayoutRole__string__o *)0x0) {
      ThrowNullReferenceException();
    }
    System_Collections_Generic_Dictionary_Int32Enum__object___set_Item
              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,key,
               (Il2CppObject *)"Default",
               (MethodInfo_4A54FC0 *)
               MethodInfo_System_Collections_Generic_Dictionary_MobileInputLayoutRole_string_set_Item);
  } while( true );
  while (lVar10 = lVar10 + 0x10, uVar9 * 0x10 != lVar10) {
    if (*(System_IDisposable_c **)((long)&pIVar3->interfaceType + lVar10) == TypeInfo_System_IDisposable) {
      pVVar6 = pIVar2->vtable + *(int *)((long)&pIVar3->offset + lVar10);
      goto label_05c78d7d;
    }
  }
label_05c78d5f:
  pVVar6 = GetInterfaceInvokeDataFromVTableSlowPath(pIVar7,(Il2CppClass *)TypeInfo_System_IDisposable,0);
label_05c78d7d:
  (*pVVar6->methodPtr)(pIVar7,pVVar6->method);
label_05c78d86:
  method_00 = TypeInfo_UI_MobileInputLayoutManager;
  if ((TypeInfo_UI_MobileInputLayoutManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MobileInputLayoutManager);
  }
  UI_MobileInputLayoutManager__LoadBuiltins((MethodInfo *)method_00);
  UI_MobileInputLayoutManager__LoadCustomLayouts((MethodInfo *)method_00);
  UI_MobileInputLayoutManager__LoadSelections((MethodInfo *)method_00);
  return;
}


// UI.MobileInputLayoutManager$$MigrateCustomLayouts
// il2cpp: void UI_MobileInputLayoutManager__MigrateCustomLayouts (const MethodInfo* method);
// 0x5c79890

void UI_MobileInputLayoutManager__MigrateCustomLayouts(MethodInfo *method)

{
  System_String_o *folder;
  UI_MobileInputLayoutManager_c *method_00;
  
  if (Il2CppMethodInitialized_07547960 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MobileInputLayoutManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MobileInputLayoutMigrationRunner);
    Il2CppMethodInitialized_07547960 = '\x01';
  }
  method_00 = TypeInfo_UI_MobileInputLayoutManager;
  if ((TypeInfo_UI_MobileInputLayoutManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MobileInputLayoutManager);
  }
  folder = UI_MobileInputLayoutManager__GetCustomFolder((MethodInfo *)method_00);
  if ((TypeInfo_UI_MobileInputLayoutMigrationRunner->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MobileInputLayoutMigrationRunner);
  }
  UI_MobileInputLayoutMigrationRunner__MigrateCustomLayouts(folder,2,(MethodInfo *)0x0);
  return;
}


// UI.MobileInputLayoutManager$$RefreshControls
// il2cpp: void UI_MobileInputLayoutManager__RefreshControls (const MethodInfo* method);
// 0x5c799a0

void UI_MobileInputLayoutManager__RefreshControls(MethodInfo *method)

{
  uint32_t uVar1;
  System_Action_o *pSVar2;
  code *vtableDispatch;
  undefined8 in_RDX;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  
  if (Il2CppMethodInitialized_07547961 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MobileInputLayoutManager);
    Il2CppMethodInitialized_07547961 = '\x01';
    uVar1 = (TypeInfo_UI_MobileInputLayoutManager->_2).cctor_finished_or_no_cctor;
    in_RDX = extraout_RDX;
  }
  else {
    uVar1 = (TypeInfo_UI_MobileInputLayoutManager->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MobileInputLayoutManager);
    pSVar2 = TypeInfo_UI_MobileInputLayoutManager->static_fields->OnSelectionChanged;
    in_RDX = extraout_RDX_00;
  }
  else {
    pSVar2 = *(System_Action_o **)
              ((long)((Il2CppClass *)TypeInfo_UI_MobileInputLayoutManager)->static_fields + 0x20);
  }
  if (pSVar2 == (System_Action_o *)0x0) {
    return;
  }
  vtableDispatch = (code *)(pSVar2->fields).invoke_impl;
  (*vtableDispatch)((pSVar2->fields).method_code,(pSVar2->fields).method,in_RDX,vtableDispatch);
  return;
}


// UI.MobileInputLayoutManager$$GetLayoutNames
// il2cpp: System_String_array* UI_MobileInputLayoutManager__GetLayoutNames (int32_t role, const MethodInfo* method);
// 0x5c79a20
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5c79b05: jmp 0x5c79b20

System_String_array * UI_MobileInputLayoutManager__GetLayoutNames(int32_t role,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_MobileInputLayoutRole__List_MobileInputLayout___o *__this;
  Il2CppObject *object;
  Il2CppObject *source;
  UI_MobileInputLayoutManager___c_StaticFields *pUVar1;
  System_Func_MobileInputLayout__string__o *__this_00;
  System_Collections_Generic_IEnumerable_TResult__o *source_00;
  System_Collections_Generic_IEnumerable_TSource__o *source_01;
  System_String_array *pSVar2;
  UI_MobileInputLayoutManager_c *method_00;
  
  if (Il2CppMethodInitialized_07547962 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_MobileInputLayoutRole_List_MobileInputLayout_get_Item
              );
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_Distinct_string);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Linq_Enumerable_Select_MobileInputLayout_string);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_ToArray_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_MobileInputLayout_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MobileInputLayoutManager);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_MobileInputLayoutManager_c_GetLayoutNames_b__16_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MobileInputLayoutManager_c);
    Il2CppMethodInitialized_07547962 = '\x01';
  }
  method_00 = TypeInfo_UI_MobileInputLayoutManager;
  if ((TypeInfo_UI_MobileInputLayoutManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MobileInputLayoutManager);
  }
  UI_MobileInputLayoutManager__EnsureLoaded((MethodInfo *)method_00);
  __this = TypeInfo_UI_MobileInputLayoutManager->static_fields->_layouts;
  if (__this == (System_Collections_Generic_Dictionary_MobileInputLayoutRole__List_MobileInputLayout___o *)0x0
     ) {
    ThrowNullReferenceException();
  }
  source = System_Collections_Generic_Dictionary_Int32Enum__object___get_Item
                     ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this,role,
                      (MethodInfo_4A54F30 *)
                      MethodInfo_System_Collections_Generic_Dictionary_MobileInputLayoutRole_List_MobileInputLayout_get_Item
                     );
  if ((TypeInfo_UI_MobileInputLayoutManager_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MobileInputLayoutManager_c);
    pUVar1 = TypeInfo_UI_MobileInputLayoutManager_c->static_fields;
    __this_00 = pUVar1->__9__16_0;
  }
  else {
    pUVar1 = TypeInfo_UI_MobileInputLayoutManager_c->static_fields;
    __this_00 = pUVar1->__9__16_0;
  }
  if (__this_00 == (System_Func_MobileInputLayout__string__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_UI_MobileInputLayoutManager_c)->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MobileInputLayoutManager_c);
      pUVar1 = TypeInfo_UI_MobileInputLayoutManager_c->static_fields;
    }
    object = (Il2CppObject *)pUVar1->__9;
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_MobileInputLayout_string);
    System_Func_object__object____ctor
              ((System_Func_object__object__o *)__this_00,object,
               (intptr_t)MethodInfo_UI_MobileInputLayoutManager_c_GetLayoutNames_b__16_0,
               (MethodInfo_4F19B50 *)0x0);
    pUVar1 = TypeInfo_UI_MobileInputLayoutManager_c->static_fields;
    pUVar1->__9__16_0 = __this_00;
    Il2CppCodeGenWriteBarrier(&pUVar1->__9__16_0);
  }
  source_00 = System_Linq_Enumerable__Select_object__object_
                        ((System_Collections_Generic_IEnumerable_TSource__o *)source,
                         (System_Func_TSource__TResult__o *)__this_00,
                         (MethodInfo_34F60F0 *)
                         MethodInfo_System_Linq_Enumerable_Select_MobileInputLayout_string);
  source_01 = System_Linq_Enumerable__Distinct_object_
                        ((System_Collections_Generic_IEnumerable_TSource__o *)source_00,
                         (MethodInfo_34E8B20 *)MethodInfo_System_Linq_Enumerable_Distinct_string);
  pSVar2 = (System_String_array *)
           System_Linq_Enumerable__ToArray_object_
                     (source_01,(MethodInfo_34FEA80 *)MethodInfo_System_Linq_Enumerable_ToArray_string);
  return pSVar2;
}


// UI.MobileInputLayoutManager$$GetSelectedLayoutName
// il2cpp: System_String_o* UI_MobileInputLayoutManager__GetSelectedLayoutName (int32_t role, const MethodInfo* method);
// 0x5c79bd0

System_String_o * UI_MobileInputLayoutManager__GetSelectedLayoutName(int32_t role,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_MobileInputLayoutRole__string__o *__this;
  System_String_o *pSVar1;
  UI_MobileInputLayoutManager_c *method_00;
  
  if (Il2CppMethodInitialized_07547963 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_MobileInputLayoutRole_string_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MobileInputLayoutManager);
    Il2CppMethodInitialized_07547963 = '\x01';
  }
  method_00 = TypeInfo_UI_MobileInputLayoutManager;
  if ((TypeInfo_UI_MobileInputLayoutManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MobileInputLayoutManager);
  }
  UI_MobileInputLayoutManager__EnsureLoaded((MethodInfo *)method_00);
  __this = TypeInfo_UI_MobileInputLayoutManager->static_fields->_selected;
  if (__this == (System_Collections_Generic_Dictionary_MobileInputLayoutRole__string__o *)0x0) {
    ThrowNullReferenceException();
  }
  pSVar1 = System_Collections_Generic_Dictionary_Int32Enum__object___get_Item
                     ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this,role,
                      (MethodInfo_4A54F30 *)
                      MethodInfo_System_Collections_Generic_Dictionary_MobileInputLayoutRole_string_get_Item);
  return pSVar1;
}


// UI.MobileInputLayoutManager$$IsBuiltinLayoutName
// il2cpp: bool UI_MobileInputLayoutManager__IsBuiltinLayoutName (int32_t role, System_String_o* name, const MethodInfo* method);
// 0x5c79c50

bool UI_MobileInputLayoutManager__IsBuiltinLayoutName(int32_t role,System_String_o *name,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_MobileInputLayoutRole__List_MobileInputLayout___o *__this;
  bool bVar1;
  UI_MobileInputLayoutManager___c__DisplayClass18_0_o *__this_00;
  Il2CppObject *source;
  System_Func_MobileInputLayout__bool__o *__this_01;
  UI_MobileInputLayoutManager_c *method_00;
  
  if (Il2CppMethodInitialized_07547964 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_MobileInputLayoutRole_List_MobileInputLayout_get_Item
              );
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_Any_MobileInputLayout);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_MobileInputLayout_bool);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MobileInputLayoutManager);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_MobileInputLayoutManager_c__DisplayClass18_0_IsBuiltinLayoutName_b__0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MobileInputLayoutManager_c__DisplayClass18_0);
    Il2CppMethodInitialized_07547964 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_UI_MobileInputLayoutManager_c__DisplayClass18_0);
  UI_MobileInputLayoutManager___c__DisplayClass18_0___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (UI_MobileInputLayoutManager___c__DisplayClass18_0_o *)0x0) {
    (__this_00->fields).name = name;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).name);
    method_00 = TypeInfo_UI_MobileInputLayoutManager;
    if ((TypeInfo_UI_MobileInputLayoutManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MobileInputLayoutManager);
    }
    UI_MobileInputLayoutManager__EnsureLoaded((MethodInfo *)method_00);
    __this = TypeInfo_UI_MobileInputLayoutManager->static_fields->_layouts;
    if (__this != (System_Collections_Generic_Dictionary_MobileInputLayoutRole__List_MobileInputLayout___o *)
                  0x0) {
      source = System_Collections_Generic_Dictionary_Int32Enum__object___get_Item
                         ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this,role,
                          (MethodInfo_4A54F30 *)
                          MethodInfo_System_Collections_Generic_Dictionary_MobileInputLayoutRole_List_MobileInputLayout_get_Item
                         );
      __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_MobileInputLayout_bool);
      System_Func_object__bool____ctor
                ((System_Func_object__bool__o *)__this_01,(Il2CppObject *)__this_00,
                 (intptr_t)MethodInfo_UI_MobileInputLayoutManager_c__DisplayClass18_0_IsBuiltinLayoutName_b__0
                 ,(MethodInfo_4F19300 *)0x0);
      bVar1 = System_Linq_Enumerable__Any_object__34dfce0
                        ((System_Collections_Generic_IEnumerable_TSource__o *)source,
                         (System_Func_TSource__bool__o *)__this_01,
                         (MethodInfo_34DFCE0 *)MethodInfo_System_Linq_Enumerable_Any_MobileInputLayout);
      return bVar1;
    }
  }
  ThrowNullReferenceException();
}


// UI.MobileInputLayoutManager$$GetLayoutDisplayName
// il2cpp: System_String_o* UI_MobileInputLayoutManager__GetLayoutDisplayName (int32_t role, System_String_o* name, const MethodInfo* method);
// 0x5c79d80

System_String_o *
UI_MobileInputLayoutManager__GetLayoutDisplayName(int32_t role,System_String_o *name,MethodInfo *method)

{
  bool bVar1;
  System_String_o *pSVar2;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  
  if (Il2CppMethodInitialized_07547965 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MobileInputLayoutManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"Common");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_07547965 = '\x01';
    method = extraout_RDX;
  }
  if ((TypeInfo_UI_MobileInputLayoutManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MobileInputLayoutManager);
    method = extraout_RDX_00;
  }
  bVar1 = UI_MobileInputLayoutManager__IsBuiltinLayoutName(role,name,method);
  if (bVar1) {
    if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
    }
    pSVar2 = UI_UIManager__GetLocale
                       ("Common",name,"","",name,
                        (MethodInfo *)0x0);
    return pSVar2;
  }
  return name;
}


// UI.MobileInputLayoutManager$$GetControlKindDisplayName
// il2cpp: System_String_o* UI_MobileInputLayoutManager__GetControlKindDisplayName (System_String_o* kind, const MethodInfo* method);
// 0x5c6d1b0

System_String_o *
UI_MobileInputLayoutManager__GetControlKindDisplayName(System_String_o *kind,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_07547966 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"SettingsPopup");
    il2cpp_codegen_initialize_runtime_metadata(&"MobileLayout.Kind");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_07547966 = '\x01';
  }
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  pSVar1 = UI_UIManager__GetLocale
                     ("SettingsPopup","MobileLayout.Kind",kind,"",kind,
                      (MethodInfo *)0x0);
  return pSVar1;
}


// UI.MobileInputLayoutManager$$GetUniqueLayoutName
// il2cpp: System_String_o* UI_MobileInputLayoutManager__GetUniqueLayoutName (int32_t role, System_String_o* baseName, const MethodInfo* method);
// 0x5c79e40

System_String_o *
UI_MobileInputLayoutManager__GetUniqueLayoutName(int32_t role,System_String_o *baseName,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_MobileInputLayoutRole__List_MobileInputLayout___o *pSVar1;
  bool bVar2;
  UI_MobileInputLayoutManager___c__DisplayClass21_0_o *__this;
  Il2CppObject *pIVar3;
  System_Func_MobileInputLayout__bool__o *pSVar4;
  UI_MobileInputLayoutManager___c__DisplayClass21_1_o *__this_00;
  System_String_o *pSVar5;
  System_String_o *pSVar6;
  UI_MobileInputLayoutManager_c *method_00;
  UI_MobileInputLayoutManager___c__DisplayClass21_0_Fields *targetAddress;
  int32_t local_40;
  int32_t local_3c;
  System_DateTime_o local_38;
  
  local_3c = role;
  if (Il2CppMethodInitialized_07547967 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_DateTime);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_MobileInputLayoutRole_List_MobileInputLayout_get_Item
              );
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_Any_MobileInputLayout);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_MobileInputLayout_bool);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MobileInputLayoutManager);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_MobileInputLayoutManager_c__DisplayClass21_0_GetUniqueLayoutName_b__0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MobileInputLayoutManager_c__DisplayClass21_0);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_MobileInputLayoutManager_c__DisplayClass21_1_GetUniqueLayoutName_b__1);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MobileInputLayoutManager_c__DisplayClass21_1);
    il2cpp_codegen_initialize_runtime_metadata(&" ");
    il2cpp_codegen_initialize_runtime_metadata(&"Custom");
    il2cpp_codegen_initialize_runtime_metadata(&"yyyyMMdd-HHmmss");
    Il2CppMethodInitialized_07547967 = '\x01';
  }
  local_40 = 0;
  local_38.fields._dateData = (System_DateTime_Fields)0;
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_MobileInputLayoutManager_c__DisplayClass21_0);
  UI_MobileInputLayoutManager___c__DisplayClass21_0___ctor(__this,(MethodInfo *)0x0);
  method_00 = TypeInfo_UI_MobileInputLayoutManager;
  if ((TypeInfo_UI_MobileInputLayoutManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MobileInputLayoutManager);
  }
  UI_MobileInputLayoutManager__EnsureLoaded((MethodInfo *)method_00);
  bVar2 = System_String__IsNullOrWhiteSpace(baseName,(MethodInfo *)0x0);
  if (bVar2) {
    pSVar6 = "Custom";
  }
  else {
    if (baseName == (System_String_o *)0x0) goto label_05c7a18c;
    pSVar6 = System_String__Trim(baseName,(MethodInfo *)0x0);
  }
  if (__this != (UI_MobileInputLayoutManager___c__DisplayClass21_0_o *)0x0) {
    targetAddress = &__this->fields;
    (__this->fields).name = pSVar6;
    Il2CppCodeGenWriteBarrier(&targetAddress->name);
    if ((TypeInfo_UI_MobileInputLayoutManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MobileInputLayoutManager);
    }
    pSVar1 = TypeInfo_UI_MobileInputLayoutManager->static_fields->_layouts;
    if (pSVar1 != (System_Collections_Generic_Dictionary_MobileInputLayoutRole__List_MobileInputLayout___o *)
                  0x0) {
      pIVar3 = System_Collections_Generic_Dictionary_Int32Enum__object___get_Item
                         ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar1,local_3c,
                          (MethodInfo_4A54F30 *)
                          MethodInfo_System_Collections_Generic_Dictionary_MobileInputLayoutRole_List_MobileInputLayout_get_Item
                         );
      pSVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_MobileInputLayout_bool);
      System_Func_object__bool____ctor
                ((System_Func_object__bool__o *)pSVar4,(Il2CppObject *)__this,
                 (intptr_t)MethodInfo_UI_MobileInputLayoutManager_c__DisplayClass21_0_GetUniqueLayoutName_b__0
                 ,(MethodInfo_4F19300 *)0x0);
      bVar2 = System_Linq_Enumerable__Any_object__34dfce0
                        ((System_Collections_Generic_IEnumerable_TSource__o *)pIVar3,
                         (System_Func_TSource__bool__o *)pSVar4,
                         (MethodInfo_34DFCE0 *)MethodInfo_System_Linq_Enumerable_Any_MobileInputLayout);
      if (bVar2) {
        local_40 = 2;
        do {
          __this_00 = il2cpp_codegen_object_new
                                ((Il2CppClass *)TypeInfo_UI_MobileInputLayoutManager_c__DisplayClass21_1);
          UI_MobileInputLayoutManager___c__DisplayClass21_1___ctor(__this_00,(MethodInfo *)0x0);
          pSVar6 = targetAddress->name;
          pSVar5 = System_Int32__ToString(&local_40,(MethodInfo *)0x0);
          pSVar6 = System_String__Concat_5301f10(pSVar6," ",pSVar5,(MethodInfo *)0x0);
          if (__this_00 == (UI_MobileInputLayoutManager___c__DisplayClass21_1_o *)0x0) goto label_05c7a18c;
          (__this_00->fields).candidate = pSVar6;
          Il2CppCodeGenWriteBarrier(&(__this_00->fields).candidate);
          if ((TypeInfo_UI_MobileInputLayoutManager->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MobileInputLayoutManager);
          }
          pSVar1 = TypeInfo_UI_MobileInputLayoutManager->static_fields->_layouts;
          if (pSVar1 == (System_Collections_Generic_Dictionary_MobileInputLayoutRole__List_MobileInputLayout___o
                         *)0x0) goto label_05c7a18c;
          pIVar3 = System_Collections_Generic_Dictionary_Int32Enum__object___get_Item
                             ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar1,local_3c,
                              (MethodInfo_4A54F30 *)
                              MethodInfo_System_Collections_Generic_Dictionary_MobileInputLayoutRole_List_MobileInputLayout_get_Item
                             );
          pSVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_MobileInputLayout_bool);
          System_Func_object__bool____ctor
                    ((System_Func_object__bool__o *)pSVar4,(Il2CppObject *)__this_00,
                     (intptr_t)
                     MethodInfo_UI_MobileInputLayoutManager_c__DisplayClass21_1_GetUniqueLayoutName_b__1,
                     (MethodInfo_4F19300 *)0x0);
          bVar2 = System_Linq_Enumerable__Any_object__34dfce0
                            ((System_Collections_Generic_IEnumerable_TSource__o *)pIVar3,
                             (System_Func_TSource__bool__o *)pSVar4,
                             (MethodInfo_34DFCE0 *)MethodInfo_System_Linq_Enumerable_Any_MobileInputLayout);
          if (!bVar2) {
            return (__this_00->fields).candidate;
          }
          local_40 = local_40 + 1;
        } while (local_40 < 1000);
        pSVar6 = targetAddress->name;
        if ((TypeInfo_System_DateTime->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_DateTime);
        }
        local_38 = System_DateTime__get_Now((MethodInfo *)0x0);
        pSVar5 = System_DateTime__ToString_5497760(&local_38,"yyyyMMdd-HHmmss",(MethodInfo *)0x0);
        pSVar6 = System_String__Concat_5301f10(pSVar6," ",pSVar5,(MethodInfo *)0x0);
      }
      else {
        pSVar6 = targetAddress->name;
      }
      return pSVar6;
    }
  }
label_05c7a18c:
  ThrowNullReferenceException();
}


// UI.MobileInputLayoutManager$$SetSelectedLayoutName
// il2cpp: void UI_MobileInputLayoutManager__SetSelectedLayoutName (int32_t role, System_String_o* name, const MethodInfo* method);
// 0x5c7a1a0

void UI_MobileInputLayoutManager__SetSelectedLayoutName(int32_t role,System_String_o *name,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_MobileInputLayoutRole__string__o *pSVar1;
  System_Collections_Generic_Dictionary_MobileInputLayoutRole__List_MobileInputLayout___o *__this;
  System_Action_o *pSVar2;
  bool bVar3;
  UI_MobileInputLayoutManager___c__DisplayClass22_0_o *__this_00;
  System_String_o *b;
  Il2CppObject *source;
  System_Func_MobileInputLayout__bool__o *__this_01;
  System_String_o *a;
  UI_MobileInputLayoutManager_c *pUVar4;
  
  if (Il2CppMethodInitialized_07547968 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_MobileInputLayoutRole_List_MobileInputLayout_get_Item
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_MobileInputLayoutRole_string_get_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_MobileInputLayoutRole_string_set_Item);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_Any_MobileInputLayout);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_MobileInputLayout_bool);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MobileInputLayoutManager);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_MobileInputLayoutManager_c__DisplayClass22_0_SetSelectedLayoutName_b__0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MobileInputLayoutManager_c__DisplayClass22_0);
    Il2CppMethodInitialized_07547968 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_UI_MobileInputLayoutManager_c__DisplayClass22_0);
  UI_MobileInputLayoutManager___c__DisplayClass22_0___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (UI_MobileInputLayoutManager___c__DisplayClass22_0_o *)0x0) {
    (__this_00->fields).name = name;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).name);
    pUVar4 = TypeInfo_UI_MobileInputLayoutManager;
    if ((TypeInfo_UI_MobileInputLayoutManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MobileInputLayoutManager);
    }
    UI_MobileInputLayoutManager__EnsureLoaded((MethodInfo *)pUVar4);
    pSVar1 = TypeInfo_UI_MobileInputLayoutManager->static_fields->_selected;
    if (pSVar1 != (System_Collections_Generic_Dictionary_MobileInputLayoutRole__string__o *)0x0) {
      b = System_Collections_Generic_Dictionary_Int32Enum__object___get_Item
                    ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar1,role,
                     (MethodInfo_4A54F30 *)
                     MethodInfo_System_Collections_Generic_Dictionary_MobileInputLayoutRole_string_get_Item);
      __this = TypeInfo_UI_MobileInputLayoutManager->static_fields->_layouts;
      if (__this != (System_Collections_Generic_Dictionary_MobileInputLayoutRole__List_MobileInputLayout___o *
                    )0x0) {
        source = System_Collections_Generic_Dictionary_Int32Enum__object___get_Item
                           ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this,role,
                            (MethodInfo_4A54F30 *)
                            MethodInfo_System_Collections_Generic_Dictionary_MobileInputLayoutRole_List_MobileInputLayout_get_Item
                           );
        __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_MobileInputLayout_bool);
        System_Func_object__bool____ctor
                  ((System_Func_object__bool__o *)__this_01,(Il2CppObject *)__this_00,
                   (intptr_t)
                   MethodInfo_UI_MobileInputLayoutManager_c__DisplayClass22_0_SetSelectedLayoutName_b__0,
                   (MethodInfo_4F19300 *)0x0);
        bVar3 = System_Linq_Enumerable__Any_object__34dfce0
                          ((System_Collections_Generic_IEnumerable_TSource__o *)source,
                           (System_Func_TSource__bool__o *)__this_01,
                           (MethodInfo_34DFCE0 *)MethodInfo_System_Linq_Enumerable_Any_MobileInputLayout);
        if (bVar3) {
          if ((TypeInfo_UI_MobileInputLayoutManager->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MobileInputLayoutManager);
          }
          pSVar1 = TypeInfo_UI_MobileInputLayoutManager->static_fields->_selected;
          if (pSVar1 == (System_Collections_Generic_Dictionary_MobileInputLayoutRole__string__o *)0x0)
          goto label_05c7a401;
          System_Collections_Generic_Dictionary_Int32Enum__object___set_Item
                    ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar1,role,
                     (Il2CppObject *)(__this_00->fields).name,
                     (MethodInfo_4A54FC0 *)
                     MethodInfo_System_Collections_Generic_Dictionary_MobileInputLayoutRole_string_set_Item);
        }
        pUVar4 = TypeInfo_UI_MobileInputLayoutManager;
        if ((TypeInfo_UI_MobileInputLayoutManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MobileInputLayoutManager);
        }
        UI_MobileInputLayoutManager__SaveSelections((MethodInfo *)pUVar4);
        pSVar1 = TypeInfo_UI_MobileInputLayoutManager->static_fields->_selected;
        if (pSVar1 != (System_Collections_Generic_Dictionary_MobileInputLayoutRole__string__o *)0x0) {
          a = System_Collections_Generic_Dictionary_Int32Enum__object___get_Item
                        ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar1,role,
                         (MethodInfo_4A54F30 *)
                         MethodInfo_System_Collections_Generic_Dictionary_MobileInputLayoutRole_string_get_Item
                        );
          bVar3 = System_String__op_Inequality(a,b,(MethodInfo *)0x0);
          if (bVar3) {
            if ((TypeInfo_UI_MobileInputLayoutManager->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MobileInputLayoutManager);
              pSVar2 = TypeInfo_UI_MobileInputLayoutManager->static_fields->OnSelectionChanged;
            }
            else {
              pSVar2 = TypeInfo_UI_MobileInputLayoutManager->static_fields->OnSelectionChanged;
            }
            if (pSVar2 != (System_Action_o *)0x0) {
              (*(code *)(pSVar2->fields).invoke_impl)((pSVar2->fields).method_code,(pSVar2->fields).method);
              return;
            }
          }
          return;
        }
      }
    }
  }
label_05c7a401:
  ThrowNullReferenceException();
}


// UI.MobileInputLayoutManager$$GetSelectedLayout
// il2cpp: UI_MobileInputLayout_o* UI_MobileInputLayoutManager__GetSelectedLayout (int32_t role, const MethodInfo* method);
// 0x5c66e10

UI_MobileInputLayout_o * UI_MobileInputLayoutManager__GetSelectedLayout(int32_t role,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_MobileInputLayoutRole__List_MobileInputLayout___o *pSVar1;
  UI_MobileInputLayoutManager___c__DisplayClass23_0_o *__this;
  Il2CppObject *pIVar2;
  System_Func_MobileInputLayout__bool__o *__this_00;
  UI_MobileInputLayout_o *pUVar3;
  UI_MobileInputLayoutManager_c *method_00;
  
  if (Il2CppMethodInitialized_07547969 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_MobileInputLayoutRole_List_MobileInputLayout_get_Item
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Linq_Enumerable_FirstOrDefault_MobileInputLayout_71a8528);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Linq_Enumerable_FirstOrDefault_MobileInputLayout);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_MobileInputLayout_bool);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MobileInputLayoutManager);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_MobileInputLayoutManager_c__DisplayClass23_0_GetSelectedLayout_b__0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MobileInputLayoutManager_c__DisplayClass23_0);
    Il2CppMethodInitialized_07547969 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_MobileInputLayoutManager_c__DisplayClass23_0);
  UI_MobileInputLayoutManager___c__DisplayClass23_0___ctor(__this,(MethodInfo *)0x0);
  if (__this != (UI_MobileInputLayoutManager___c__DisplayClass23_0_o *)0x0) {
    (__this->fields).role = role;
    method_00 = TypeInfo_UI_MobileInputLayoutManager;
    if ((TypeInfo_UI_MobileInputLayoutManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MobileInputLayoutManager);
    }
    UI_MobileInputLayoutManager__EnsureLoaded((MethodInfo *)method_00);
    pSVar1 = TypeInfo_UI_MobileInputLayoutManager->static_fields->_layouts;
    if (pSVar1 != (System_Collections_Generic_Dictionary_MobileInputLayoutRole__List_MobileInputLayout___o *)
                  0x0) {
      pIVar2 = System_Collections_Generic_Dictionary_Int32Enum__object___get_Item
                         ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar1,
                          (__this->fields).role,
                          (MethodInfo_4A54F30 *)
                          MethodInfo_System_Collections_Generic_Dictionary_MobileInputLayoutRole_List_MobileInputLayout_get_Item
                         );
      __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_MobileInputLayout_bool);
      System_Func_object__bool____ctor
                ((System_Func_object__bool__o *)__this_00,(Il2CppObject *)__this,
                 (intptr_t)MethodInfo_UI_MobileInputLayoutManager_c__DisplayClass23_0_GetSelectedLayout_b__0,
                 (MethodInfo_4F19300 *)0x0);
      pUVar3 = System_Linq_Enumerable__FirstOrDefault_object__34ed9e0
                         ((System_Collections_Generic_IEnumerable_TSource__o *)pIVar2,
                          (System_Func_TSource__bool__o *)__this_00,
                          (MethodInfo_34ED9E0 *)
                          MethodInfo_System_Linq_Enumerable_FirstOrDefault_MobileInputLayout_71a8528);
      if (pUVar3 != (UI_MobileInputLayout_o *)0x0) {
        return pUVar3;
      }
      if ((TypeInfo_UI_MobileInputLayoutManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MobileInputLayoutManager);
      }
      pSVar1 = TypeInfo_UI_MobileInputLayoutManager->static_fields->_layouts;
      if (pSVar1 != (System_Collections_Generic_Dictionary_MobileInputLayoutRole__List_MobileInputLayout___o *
                    )0x0) {
        pIVar2 = System_Collections_Generic_Dictionary_Int32Enum__object___get_Item
                           ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar1,
                            (__this->fields).role,
                            (MethodInfo_4A54F30 *)
                            MethodInfo_System_Collections_Generic_Dictionary_MobileInputLayoutRole_List_MobileInputLayout_get_Item
                           );
        pUVar3 = System_Linq_Enumerable__FirstOrDefault_object_
                           ((System_Collections_Generic_IEnumerable_TSource__o *)pIVar2,
                            (MethodInfo_34ECD10 *)
                            MethodInfo_System_Linq_Enumerable_FirstOrDefault_MobileInputLayout);
        return pUVar3;
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.MobileInputLayoutManager$$GetLayouts
// il2cpp: System_Collections_Generic_List_MobileInputLayout__o* UI_MobileInputLayoutManager__GetLayouts (int32_t role, const MethodInfo* method);
// 0x5c7a930

System_Collections_Generic_List_MobileInputLayout__o *
UI_MobileInputLayoutManager__GetLayouts(int32_t role,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_MobileInputLayoutRole__List_MobileInputLayout___o *__this;
  System_Collections_Generic_List_MobileInputLayout__o *pSVar1;
  UI_MobileInputLayoutManager_c *method_00;
  
  if (Il2CppMethodInitialized_0754796a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_MobileInputLayoutRole_List_MobileInputLayout_get_Item
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MobileInputLayoutManager);
    Il2CppMethodInitialized_0754796a = '\x01';
  }
  method_00 = TypeInfo_UI_MobileInputLayoutManager;
  if ((TypeInfo_UI_MobileInputLayoutManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MobileInputLayoutManager);
  }
  UI_MobileInputLayoutManager__EnsureLoaded((MethodInfo *)method_00);
  __this = TypeInfo_UI_MobileInputLayoutManager->static_fields->_layouts;
  if (__this == (System_Collections_Generic_Dictionary_MobileInputLayoutRole__List_MobileInputLayout___o *)0x0
     ) {
    ThrowNullReferenceException();
  }
  pSVar1 = (System_Collections_Generic_List_MobileInputLayout__o *)
           System_Collections_Generic_Dictionary_Int32Enum__object___get_Item
                     ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this,role,
                      (MethodInfo_4A54F30 *)
                      MethodInfo_System_Collections_Generic_Dictionary_MobileInputLayoutRole_List_MobileInputLayout_get_Item
                     );
  return pSVar1;
}


// UI.MobileInputLayoutManager$$SaveCustomLayout
// il2cpp: void UI_MobileInputLayoutManager__SaveCustomLayout (UI_MobileInputLayout_o* layout, const MethodInfo* method);
// 0x5c7a9b0
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5c7abc1: jmp 0x5c7ac3a
// asm:   0x5c7ac0e: jmp 0x5c7ac3a

void UI_MobileInputLayoutManager__SaveCustomLayout(UI_MobileInputLayout_o *layout,MethodInfo *method)

{
  int32_t *piVar1;
  uint32_t uVar2;
  uint uVar3;
  UI_MobileInputLayout_o *pUVar4;
  System_Collections_Generic_Dictionary_MobileInputLayoutRole__List_MobileInputLayout___o *__this;
  System_Object_array *pSVar5;
  System_Action_o *pSVar6;
  bool bVar7;
  int32_t index;
  ulong in_RAX;
  UI_MobileInputLayoutManager___c__DisplayClass25_0_o *__this_00;
  System_Collections_Generic_List_object__o *__this_01;
  System_Predicate_T__o *match;
  System_String_o *pSVar8;
  System_String_o *contents;
  MethodInfo *pMVar9;
  UI_MobileInputLayoutManager_c *method_00;
  Il2CppClass *klass;
  int32_t key;
  UI_MobileInputLayoutManager___c__DisplayClass25_0_Fields *targetAddress;
  undefined8 uStack_38;
  
  uStack_38 = in_RAX;
  if (Il2CppMethodInitialized_0754796b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_MobileInputLayoutRole_List_MobileInputLayout_get_Item
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_MobileInputLayoutRole_string_set_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_MobileInputLayout_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_MobileInputLayout_FindIndex);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_MobileInputLayout_set_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MobileInputLayoutManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Predicate_MobileInputLayout);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_MobileInputLayoutManager_c__DisplayClass25_0_SaveCustomLayout_b__0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MobileInputLayoutManager_c__DisplayClass25_0);
    Il2CppMethodInitialized_0754796b = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_UI_MobileInputLayoutManager_c__DisplayClass25_0);
  UI_MobileInputLayoutManager___c__DisplayClass25_0___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (UI_MobileInputLayoutManager___c__DisplayClass25_0_o *)0x0) {
    targetAddress = &__this_00->fields;
    (__this_00->fields).layout = layout;
    Il2CppCodeGenWriteBarrier(&targetAddress->layout);
    method_00 = TypeInfo_UI_MobileInputLayoutManager;
    if ((TypeInfo_UI_MobileInputLayoutManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MobileInputLayoutManager);
    }
    UI_MobileInputLayoutManager__EnsureLoaded((MethodInfo *)method_00);
    pUVar4 = targetAddress->layout;
    if (pUVar4 != (UI_MobileInputLayout_o *)0x0) {
      (pUVar4->fields).Builtin = false;
      (pUVar4->fields).Version = 2;
      UI_MobileInputLayout__AssignRuntimeIds(pUVar4,(MethodInfo *)layout);
      pUVar4 = targetAddress->layout;
      if (pUVar4 != (UI_MobileInputLayout_o *)0x0) {
        uStack_38 = uStack_38 & 0xffffffff;
        if (Il2CppMethodInitialized_07547929 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Enum_TryParse_MobileInputLayoutRole);
          Il2CppMethodInitialized_07547929 = '\x01';
        }
        pSVar8 = (pUVar4->fields).Role;
        if ((g_data_07556760->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init(g_data_07556760);
        }
        bVar7 = System_Enum__TryParse_Int32Enum_
                          (pSVar8,(int32_t *)((long)&uStack_38 + 4),
                           (MethodInfo_34DC610 *)MethodInfo_System_Enum_TryParse_MobileInputLayoutRole);
        key = 1;
        if (bVar7) {
          key = uStack_38._4_4_;
        }
        __this = TypeInfo_UI_MobileInputLayoutManager->static_fields->_layouts;
        if (__this != (System_Collections_Generic_Dictionary_MobileInputLayoutRole__List_MobileInputLayout___o
                       *)0x0) {
          __this_01 = (System_Collections_Generic_List_object__o *)
                      System_Collections_Generic_Dictionary_Int32Enum__object___get_Item
                                ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this,key,
                                 (MethodInfo_4A54F30 *)
                                 MethodInfo_System_Collections_Generic_Dictionary_MobileInputLayoutRole_List_MobileInputLayout_get_Item
                                );
          match = (System_Predicate_T__o *)
                  il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Predicate_MobileInputLayout);
          System_Predicate_object____ctor
                    ((System_Predicate_object__o *)match,(Il2CppObject *)__this_00,
                     (intptr_t)
                     MethodInfo_UI_MobileInputLayoutManager_c__DisplayClass25_0_SaveCustomLayout_b__0,
                     (MethodInfo_3DC95B0 *)0x0);
          if (__this_01 != (System_Collections_Generic_List_object__o *)0x0) {
            index = System_Collections_Generic_List_object___FindIndex
                              (__this_01,match,
                               (MethodInfo_395DCC0 *)
                               MethodInfo_System_Collections_Generic_List_MobileInputLayout_FindIndex);
            pMVar9 = MethodInfo_System_Collections_Generic_List_MobileInputLayout_Add;
            pUVar4 = targetAddress->layout;
            if (index < 0) {
              piVar1 = &(__this_01->fields)._version;
              *piVar1 = *piVar1 + 1;
              pSVar5 = (__this_01->fields)._items;
              if (pSVar5 == (System_Object_array *)0x0) goto label_05c7acda;
              uVar3 = (__this_01->fields)._size;
              if (uVar3 < (uint)pSVar5->max_length) {
                (__this_01->fields)._size = uVar3 + 1;
                pSVar5->m_Items[(int)uVar3] = (Il2CppObject *)pUVar4;
                Il2CppCodeGenWriteBarrier(pSVar5->m_Items + (int)uVar3);
                uVar2 = (TypeInfo_UI_MobileInputLayoutManager->_2).cctor_finished_or_no_cctor;
                klass = (Il2CppClass *)TypeInfo_UI_MobileInputLayoutManager;
              }
              else {
                System_Collections_Generic_List_object___AddWithResize
                          (__this_01,(Il2CppObject *)pUVar4,
                           (MethodInfo_395D230 *)pMVar9->klass->rgctx_data[0xe].method);
                uVar2 = (TypeInfo_UI_MobileInputLayoutManager->_2).cctor_finished_or_no_cctor;
                klass = (Il2CppClass *)TypeInfo_UI_MobileInputLayoutManager;
              }
            }
            else {
              System_Collections_Generic_List_object___set_Item
                        (__this_01,index,(Il2CppObject *)pUVar4,
                         (MethodInfo_395CF60 *)
                         MethodInfo_System_Collections_Generic_List_MobileInputLayout_set_Item);
              uVar2 = (TypeInfo_UI_MobileInputLayoutManager->_2).cctor_finished_or_no_cctor;
              klass = (Il2CppClass *)TypeInfo_UI_MobileInputLayoutManager;
            }
            TypeInfo_UI_MobileInputLayoutManager = (UI_MobileInputLayoutManager_c *)klass;
            if (uVar2 == 0) {
              il2cpp_codegen_runtime_class_init(klass);
            }
            pSVar8 = UI_MobileInputLayoutManager__GetCustomFolder((MethodInfo *)klass);
            pMVar9 = (MethodInfo *)0x0;
            System_IO_Directory__CreateDirectory(pSVar8,(MethodInfo *)0x0);
            pSVar8 = UI_MobileInputLayoutManager__GetCustomLayoutPath(targetAddress->layout,pMVar9);
            contents = UnityEngine_JsonUtility__ToJson_69c15e0
                                 ((Il2CppObject *)targetAddress->layout,true,(MethodInfo *)0x0);
            System_IO_File__WriteAllText(pSVar8,contents,(MethodInfo *)0x0);
            if ((targetAddress->layout != (UI_MobileInputLayout_o *)0x0) &&
               (pMVar9 = (MethodInfo *)TypeInfo_UI_MobileInputLayoutManager->static_fields->_selected,
               pMVar9 != (MethodInfo *)0x0)) {
              System_Collections_Generic_Dictionary_Int32Enum__object___set_Item
                        ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pMVar9,key,
                         (Il2CppObject *)(targetAddress->layout->fields).Name,
                         (MethodInfo_4A54FC0 *)
                         MethodInfo_System_Collections_Generic_Dictionary_MobileInputLayoutRole_string_set_Item
                        );
              UI_MobileInputLayoutManager__SaveSelections(pMVar9);
              pSVar6 = TypeInfo_UI_MobileInputLayoutManager->static_fields->OnLayoutsChanged;
              if (pSVar6 != (System_Action_o *)0x0) {
                (*(code *)(pSVar6->fields).invoke_impl)((pSVar6->fields).method_code,(pSVar6->fields).method);
              }
              return;
            }
          }
        }
      }
    }
  }
label_05c7acda:
  ThrowNullReferenceException();
}


// UI.MobileInputLayoutManager$$DeleteCustomLayout
// il2cpp: bool UI_MobileInputLayoutManager__DeleteCustomLayout (UI_MobileInputLayout_o* layout, const MethodInfo* method);
// 0x5c7ade0
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5c7ae1d: jmp 0x5c7aea9
// asm:   0x5c7af47: jmp 0x5c7b0ed
// asm:   0x5c7afe3: jmp 0x5c7b0ed

bool UI_MobileInputLayoutManager__DeleteCustomLayout(UI_MobileInputLayout_o *layout,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_MobileInputLayoutRole__List_MobileInputLayout___o *pSVar1;
  System_Collections_Generic_Dictionary_MobileInputLayoutRole__string__o *pSVar2;
  System_Action_o *pSVar3;
  bool bVar4;
  System_Collections_Generic_List_object__o *__this;
  System_String_o *pSVar5;
  Il2CppObject *source;
  UI_MobileInputLayout_o *pUVar6;
  MethodInfo *method_00;
  UI_MobileInputLayoutManager_c *pUVar7;
  int32_t key;
  int32_t local_2c;
  
  if (Il2CppMethodInitialized_0754796c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_MobileInputLayoutRole_List_MobileInputLayout_get_Item
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_MobileInputLayoutRole_string_get_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_MobileInputLayoutRole_string_set_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Linq_Enumerable_FirstOrDefault_MobileInputLayout);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_MobileInputLayout_Remove);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MobileInputLayoutManager);
    il2cpp_codegen_initialize_runtime_metadata(&"Default");
    Il2CppMethodInitialized_0754796c = '\x01';
    if ((TypeInfo_UI_MobileInputLayoutManager->_2).cctor_finished_or_no_cctor == 0) goto label_05c7ae94;
label_05c7ae0f:
    UI_MobileInputLayoutManager__EnsureLoaded((MethodInfo *)TypeInfo_UI_MobileInputLayoutManager);
  }
  else {
    if ((TypeInfo_UI_MobileInputLayoutManager->_2).cctor_finished_or_no_cctor != 0) goto label_05c7ae0f;
label_05c7ae94:
    pUVar7 = TypeInfo_UI_MobileInputLayoutManager;
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MobileInputLayoutManager);
    UI_MobileInputLayoutManager__EnsureLoaded((MethodInfo *)pUVar7);
  }
  if ((layout == (UI_MobileInputLayout_o *)0x0) || ((layout->fields).Builtin != false)) {
    return false;
  }
  local_2c = 0;
  if (Il2CppMethodInitialized_07547929 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Enum_TryParse_MobileInputLayoutRole);
    Il2CppMethodInitialized_07547929 = '\x01';
  }
  pSVar5 = (layout->fields).Role;
  if ((g_data_07556760->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_07556760);
  }
  bVar4 = System_Enum__TryParse_Int32Enum_
                    (pSVar5,&local_2c,
                     (MethodInfo_34DC610 *)MethodInfo_System_Enum_TryParse_MobileInputLayoutRole);
  key = 1;
  if (bVar4) {
    key = local_2c;
    if ((TypeInfo_UI_MobileInputLayoutManager->_2).cctor_finished_or_no_cctor == 0) goto label_05c7af30;
label_05c7af58:
    pSVar1 = TypeInfo_UI_MobileInputLayoutManager->static_fields->_layouts;
  }
  else {
    if ((TypeInfo_UI_MobileInputLayoutManager->_2).cctor_finished_or_no_cctor != 0) goto label_05c7af58;
label_05c7af30:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MobileInputLayoutManager);
    pSVar1 = TypeInfo_UI_MobileInputLayoutManager->static_fields->_layouts;
  }
  if ((pSVar1 == (System_Collections_Generic_Dictionary_MobileInputLayoutRole__List_MobileInputLayout___o *)
                 0x0) ||
     (__this = (System_Collections_Generic_List_object__o *)
               System_Collections_Generic_Dictionary_Int32Enum__object___get_Item
                         ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar1,key,
                          (MethodInfo_4A54F30 *)
                          MethodInfo_System_Collections_Generic_Dictionary_MobileInputLayoutRole_List_MobileInputLayout_get_Item
                         ), __this == (System_Collections_Generic_List_object__o *)0x0)) goto label_05c7b0ed;
  method_00 = (MethodInfo *)layout;
  System_Collections_Generic_List_object___Remove
            (__this,(Il2CppObject *)layout,
             (MethodInfo_395ED70 *)MethodInfo_System_Collections_Generic_List_MobileInputLayout_Remove);
  pSVar5 = UI_MobileInputLayoutManager__GetCustomLayoutPath(layout,method_00);
  bVar4 = System_IO_File__Exists(pSVar5,(MethodInfo *)0x0);
  if (bVar4) {
    System_IO_File__Delete(pSVar5,(MethodInfo *)0x0);
    if ((TypeInfo_UI_MobileInputLayoutManager->_2).cctor_finished_or_no_cctor == 0) goto label_05c7afcb;
label_05c7aff4:
    pSVar2 = TypeInfo_UI_MobileInputLayoutManager->static_fields->_selected;
  }
  else {
    if ((TypeInfo_UI_MobileInputLayoutManager->_2).cctor_finished_or_no_cctor != 0) goto label_05c7aff4;
label_05c7afcb:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MobileInputLayoutManager);
    pSVar2 = TypeInfo_UI_MobileInputLayoutManager->static_fields->_selected;
  }
  if (pSVar2 != (System_Collections_Generic_Dictionary_MobileInputLayoutRole__string__o *)0x0) {
    pSVar5 = System_Collections_Generic_Dictionary_Int32Enum__object___get_Item
                       ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar2,key,
                        (MethodInfo_4A54F30 *)
                        MethodInfo_System_Collections_Generic_Dictionary_MobileInputLayoutRole_string_get_Item
                       );
    bVar4 = System_String__op_Equality(pSVar5,(layout->fields).Name,(MethodInfo *)0x0);
    if (!bVar4) {
label_05c7b0a7:
      pUVar7 = TypeInfo_UI_MobileInputLayoutManager;
      if ((TypeInfo_UI_MobileInputLayoutManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MobileInputLayoutManager);
      }
      UI_MobileInputLayoutManager__SaveSelections((MethodInfo *)pUVar7);
      pSVar3 = TypeInfo_UI_MobileInputLayoutManager->static_fields->OnLayoutsChanged;
      if (pSVar3 != (System_Action_o *)0x0) {
        (*(code *)(pSVar3->fields).invoke_impl)((pSVar3->fields).method_code,(pSVar3->fields).method);
      }
      return true;
    }
    if ((TypeInfo_UI_MobileInputLayoutManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MobileInputLayoutManager);
    }
    pSVar1 = TypeInfo_UI_MobileInputLayoutManager->static_fields->_layouts;
    if (pSVar1 != (System_Collections_Generic_Dictionary_MobileInputLayoutRole__List_MobileInputLayout___o *)
                  0x0) {
      pSVar2 = TypeInfo_UI_MobileInputLayoutManager->static_fields->_selected;
      source = System_Collections_Generic_Dictionary_Int32Enum__object___get_Item
                         ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar1,key,
                          (MethodInfo_4A54F30 *)
                          MethodInfo_System_Collections_Generic_Dictionary_MobileInputLayoutRole_List_MobileInputLayout_get_Item
                         );
      pUVar6 = System_Linq_Enumerable__FirstOrDefault_object_
                         ((System_Collections_Generic_IEnumerable_TSource__o *)source,
                          (MethodInfo_34ECD10 *)
                          MethodInfo_System_Linq_Enumerable_FirstOrDefault_MobileInputLayout);
      if (pUVar6 == (UI_MobileInputLayout_o *)0x0) {
        pSVar5 = (System_String_o *)0x0;
      }
      else {
        pSVar5 = (pUVar6->fields).Name;
      }
      if (pSVar2 != (System_Collections_Generic_Dictionary_MobileInputLayoutRole__string__o *)0x0) {
        if (pSVar5 == (System_String_o *)0x0) {
          pSVar5 = "Default";
        }
        System_Collections_Generic_Dictionary_Int32Enum__object___set_Item
                  ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar2,key,(Il2CppObject *)pSVar5,
                   (MethodInfo_4A54FC0 *)
                   MethodInfo_System_Collections_Generic_Dictionary_MobileInputLayoutRole_string_set_Item);
        goto label_05c7b0a7;
      }
    }
  }
label_05c7b0ed:
  ThrowNullReferenceException();
}


// UI.MobileInputLayoutManager$$LoadBuiltins
// il2cpp: void UI_MobileInputLayoutManager__LoadBuiltins (const MethodInfo* method);
// 0x5c78e50

void UI_MobileInputLayoutManager__LoadBuiltins(MethodInfo *method)

{
  uint uVar1;
  System_Object_array *pSVar2;
  System_String_o *json;
  UI_MobileInputLayout_o *layout;
  MethodInfo *method_00;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  uint uVar3;
  
  if (Il2CppMethodInitialized_0754796d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_JsonUtility_FromJson_MobileInputLayout)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MobileInputLayoutManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Resources_LoadAll_TextAsset);
    il2cpp_codegen_initialize_runtime_metadata(&"MobileLayouts");
    Il2CppMethodInitialized_0754796d = '\x01';
  }
  pSVar2 = UnityEngine_Resources__LoadAll_object_
                     ("MobileLayouts",
                      (MethodInfo_3665CE0 *)MethodInfo_UnityEngine_Resources_LoadAll_TextAsset);
  if (pSVar2 == (System_Object_array *)0x0) {
label_05c78f41:
    ThrowNullReferenceException();
  }
  uVar1 = (uint)pSVar2->max_length;
  if (0 < (int)uVar1) {
    uVar3 = 0;
    do {
      if (uVar1 <= uVar3) {
        ThrowIndexOutOfRangeException();
      }
      if ((UnityEngine_TextAsset_o *)pSVar2->m_Items[(int)uVar3] == (UnityEngine_TextAsset_o *)0x0)
      goto label_05c78f41;
      json = UnityEngine_TextAsset__get_text
                       ((UnityEngine_TextAsset_o *)pSVar2->m_Items[(int)uVar3],(MethodInfo *)0x0);
      layout = UnityEngine_JsonUtility__FromJson_object_
                         (json,(MethodInfo_356DE00 *)
                               MethodInfo_UnityEngine_JsonUtility_FromJson_MobileInputLayout);
      method_00 = extraout_RDX;
      if ((TypeInfo_UI_MobileInputLayoutManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MobileInputLayoutManager);
        method_00 = extraout_RDX_00;
      }
      UI_MobileInputLayoutManager__TryAddLayout(layout,true,method_00);
      uVar3 = uVar3 + 1;
      uVar1 = (uint)pSVar2->max_length;
    } while ((int)uVar3 < (int)uVar1);
  }
  return;
}


// UI.MobileInputLayoutManager$$LoadCustomLayouts
// il2cpp: void UI_MobileInputLayoutManager__LoadCustomLayouts (const MethodInfo* method);
// 0x5c78f50
// eh: try 0x5c79010..0x5c79044 -> pad 0x5c79057 (+1 call sites) catch Il2CppExceptionWrapper, cleanup [managed catch: TypeInfo_System_Exception]
// eh: try 0x5c79070..0x5c79153 -> pad 0x5c79155 (+1 call sites) cleanup
// eh: try 0x5c79158..0x5c7915d -> pad 0x5c79165 catch (...) [compiler noexcept guard]
// asm: 63 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5c78ff9: nop dword ptr [rax]
// asm:   0x5c79052: jmp 0x5c79119
// asm:   0x5c79057: jmp 0x5c79059
// asm:   0x5c79059: mov r14, rax
// asm:   0x5c7905c: cmp edx, 1
// asm:   0x5c7905f: jne 0x5c7915d
// asm:   0x5c79065: mov rdi, r14
// asm:   0x5c79068: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5c7906d: mov r14, rax
// asm:   0x5c79070: lea rdi, [rip + 0x15ff049]  ; TypeInfo_System_Exception
// asm:   0x5c79077: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x5c7907c: mov rcx, qword ptr [r14]
// asm:   0x5c7907f: mov rsi, qword ptr [rcx]
// asm:   0x5c79082: mov rdi, rax
// asm:   0x5c79085: call 0x30d6910  ; il2cpp_runtime_helper_030d6910()
// asm:   0x5c7908a: test al, al
// asm:   0x5c7908c: je 0x5c79132
// asm:   0x5c79092: mov r14, qword ptr [r14]
// asm:   0x5c79095: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5c7909a: test r14, r14
// asm:   0x5c7909d: je 0x5c7912d
// asm:   0x5c790a3: mov rax, qword ptr [r14]
// asm:   0x5c790a6: mov rsi, qword ptr [rax + 0x190]
// asm:   0x5c790ad: mov rdi, r14
// asm:   0x5c790b0: call qword ptr [rax + 0x188]  ; vtable slot 5
// asm:   0x5c790b6: mov qword ptr [rsp], rax
// asm:   0x5c790ba: lea rdi, [rip + 0x1662b67]  ; "Failed to load mobile layout "
// asm:   0x5c790c1: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x5c790c6: mov r14, rax
// asm:   0x5c790c9: lea rdi, [rip + 0x1658eb0]  ; ": "
// asm:   0x5c790d0: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x5c790d5: mov rdi, r14
// asm:   0x5c790d8: mov rsi, rbp
// asm:   0x5c790db: mov rdx, rax
// asm:   0x5c790de: mov rcx, qword ptr [rsp]
// asm:   0x5c790e2: xor r8d, r8d
// asm:   0x5c790e5: call 0x5402810  ; System_String__Concat()
// asm:   0x5c790ea: mov rbp, rax
// asm:   0x5c790ed: lea rdi, [rip + 0x15fe554]  ; TypeInfo_UnityEngine_Debug
// asm:   0x5c790f4: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x5c790f9: cmp dword ptr [rax + 0xe4], 0
// asm:   0x5c79100: jne 0x5c7910a
// asm:   0x5c79102: mov rdi, rax
// asm:   0x5c79105: call 0x30d6240  ; il2cpp_codegen_runtime_class_init()
// asm:   0x5c7910a: mov rdi, rbp
// asm:   0x5c7910d: xor esi, esi
// asm:   0x5c7910f: call 0x69c5270  ; UnityEngine_Debug__LogWarning()
// asm:   0x5c79114: jmp 0x5c79044
// asm:   0x5c79132: mov edi, 8
// asm:   0x5c79137: call 0x6e255b0  ; __cxa_allocate_exception()
// asm:   0x5c7913c: mov rcx, qword ptr [r14]
// asm:   0x5c7913f: mov qword ptr [rax], rcx
// asm:   0x5c79142: lea rsi, [rip + 0x11b43b7]
// asm:   0x5c79149: mov rdi, rax
// asm:   0x5c7914c: xor edx, edx
// asm:   0x5c7914e: call 0x6e255c0  ; __cxa_throw()
// asm:   0x5c79153: jmp 0x5c79155
// asm:   0x5c79155: mov r14, rax
// asm:   0x5c79158: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5c7915d: mov rdi, r14
// asm:   0x5c79160: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5c79165: mov rdi, rax
// asm:   0x5c79168: call 0x2ab61e0  ; __clang_call_terminate()

void UI_MobileInputLayoutManager__LoadCustomLayouts(MethodInfo *method)

{
  uint uVar1;
  bool bVar2;
  System_String_o *pSVar3;
  System_String_array *pSVar4;
  ulong uVar5;
  UI_MobileInputLayout_o *layout;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_00;
  UI_MobileInputLayoutManager_c *method_01;
  ulong uVar6;
  
  if (Il2CppMethodInitialized_0754796e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_JsonUtility_FromJson_MobileInputLayout)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MobileInputLayoutManager);
    il2cpp_codegen_initialize_runtime_metadata(&"*.json");
    Il2CppMethodInitialized_0754796e = '\x01';
  }
  method_01 = TypeInfo_UI_MobileInputLayoutManager;
  if ((TypeInfo_UI_MobileInputLayoutManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MobileInputLayoutManager);
  }
  pSVar3 = UI_MobileInputLayoutManager__GetCustomFolder((MethodInfo *)method_01);
  bVar2 = System_IO_Directory__Exists(pSVar3,(MethodInfo *)0x0);
  if (bVar2) {
    pSVar4 = System_IO_Directory__GetFiles(pSVar3,"*.json",(MethodInfo *)0x0);
    if (pSVar4 == (System_String_array *)0x0) {
      ThrowNullReferenceException();
    }
    if (0 < (int)pSVar4->max_length) {
      uVar5 = pSVar4->max_length & 0xffffffff;
      uVar6 = 0;
      do {
        if (uVar5 <= uVar6) {
          ThrowIndexOutOfRangeException();
        }
        pSVar3 = System_IO_File__ReadAllText(pSVar4->m_Items[uVar6],(MethodInfo *)0x0);
        layout = UnityEngine_JsonUtility__FromJson_object_
                           (pSVar3,(MethodInfo_356DE00 *)
                                   MethodInfo_UnityEngine_JsonUtility_FromJson_MobileInputLayout);
        method_00 = extraout_RDX;
        if ((TypeInfo_UI_MobileInputLayoutManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MobileInputLayoutManager);
          method_00 = extraout_RDX_00;
        }
        UI_MobileInputLayoutManager__TryAddLayout(layout,false,method_00);
        uVar6 = uVar6 + 1;
        uVar1 = (uint)pSVar4->max_length;
        uVar5 = (ulong)uVar1;
      } while ((long)uVar6 < (long)(int)uVar1);
    }
  }
  return;
}


// UI.MobileInputLayoutManager$$TryAddLayout
// il2cpp: void UI_MobileInputLayoutManager__TryAddLayout (UI_MobileInputLayout_o* layout, bool builtin, const MethodInfo* method);
// 0x5c7b100

void UI_MobileInputLayoutManager__TryAddLayout(UI_MobileInputLayout_o *layout,bool builtin,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  UI_MobileInputLayout_o *pUVar3;
  System_String_o *value;
  System_Collections_Generic_Dictionary_MobileInputLayoutRole__List_MobileInputLayout___o *pSVar4;
  System_Object_array *pSVar5;
  bool bVar6;
  uint in_EAX;
  UI_MobileInputLayoutManager___c__DisplayClass29_0_o *__this;
  Il2CppObject *source;
  System_Func_MobileInputLayout__bool__o *__this_00;
  System_Collections_Generic_List_object__o *__this_01;
  MethodInfo *pMVar7;
  UI_MobileInputLayoutManager___c__DisplayClass29_0_Fields *targetAddress;
  undefined8 uStack_38;
  
  uStack_38._0_4_ = in_EAX;
  if (Il2CppMethodInitialized_0754796f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_MobileInputLayoutRole_List_MobileInputLayout_get_Item
              );
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_Any_MobileInputLayout);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_MobileInputLayout_bool);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_MobileInputLayout_Add);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MobileInputLayoutManager);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_MobileInputLayoutManager_c__DisplayClass29_0_TryAddLayout_b__0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MobileInputLayoutManager_c__DisplayClass29_0);
    Il2CppMethodInitialized_0754796f = '\x01';
  }
  uStack_38 = (ulong)(uint)uStack_38;
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_MobileInputLayoutManager_c__DisplayClass29_0);
  UI_MobileInputLayoutManager___c__DisplayClass29_0___ctor(__this,(MethodInfo *)0x0);
  if (__this != (UI_MobileInputLayoutManager___c__DisplayClass29_0_o *)0x0) {
    targetAddress = &__this->fields;
    (__this->fields).layout = layout;
    Il2CppCodeGenWriteBarrier(&targetAddress->layout);
    pUVar3 = (__this->fields).layout;
    if ((pUVar3 == (UI_MobileInputLayout_o *)0x0) ||
       (bVar6 = System_String__IsNullOrEmpty((pUVar3->fields).Name,(MethodInfo *)0x0), bVar6)) {
      return;
    }
    pUVar3 = targetAddress->layout;
    if (pUVar3 != (UI_MobileInputLayout_o *)0x0) {
      (pUVar3->fields).Builtin = builtin;
      if (Il2CppMethodInitialized_07547929 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Enum_TryParse_MobileInputLayoutRole);
        Il2CppMethodInitialized_07547929 = '\x01';
      }
      value = (pUVar3->fields).Role;
      if ((g_data_07556760->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init(g_data_07556760);
      }
      pMVar7 = (MethodInfo *)((long)&uStack_38 + 4);
      bVar6 = System_Enum__TryParse_Int32Enum_
                        (value,(int32_t *)pMVar7,
                         (MethodInfo_34DC610 *)MethodInfo_System_Enum_TryParse_MobileInputLayoutRole);
      if (!bVar6) {
        return;
      }
      if (targetAddress->layout != (UI_MobileInputLayout_o *)0x0) {
        UI_MobileInputLayout__AssignRuntimeIds(targetAddress->layout,pMVar7);
        if ((TypeInfo_UI_MobileInputLayoutManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MobileInputLayoutManager);
        }
        pSVar4 = TypeInfo_UI_MobileInputLayoutManager->static_fields->_layouts;
        if (pSVar4 != (System_Collections_Generic_Dictionary_MobileInputLayoutRole__List_MobileInputLayout___o
                       *)0x0) {
          source = System_Collections_Generic_Dictionary_Int32Enum__object___get_Item
                             ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar4,uStack_38._4_4_,
                              (MethodInfo_4A54F30 *)
                              MethodInfo_System_Collections_Generic_Dictionary_MobileInputLayoutRole_List_MobileInputLayout_get_Item
                             );
          __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_MobileInputLayout_bool);
          System_Func_object__bool____ctor
                    ((System_Func_object__bool__o *)__this_00,(Il2CppObject *)__this,
                     (intptr_t)MethodInfo_UI_MobileInputLayoutManager_c__DisplayClass29_0_TryAddLayout_b__0,
                     (MethodInfo_4F19300 *)0x0);
          bVar6 = System_Linq_Enumerable__Any_object__34dfce0
                            ((System_Collections_Generic_IEnumerable_TSource__o *)source,
                             (System_Func_TSource__bool__o *)__this_00,
                             (MethodInfo_34DFCE0 *)MethodInfo_System_Linq_Enumerable_Any_MobileInputLayout);
          if (bVar6) {
            return;
          }
          if ((TypeInfo_UI_MobileInputLayoutManager->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MobileInputLayoutManager);
          }
          pSVar4 = TypeInfo_UI_MobileInputLayoutManager->static_fields->_layouts;
          if (pSVar4 != (System_Collections_Generic_Dictionary_MobileInputLayoutRole__List_MobileInputLayout___o
                         *)0x0) {
            __this_01 = (System_Collections_Generic_List_object__o *)
                        System_Collections_Generic_Dictionary_Int32Enum__object___get_Item
                                  ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar4,
                                   uStack_38._4_4_,
                                   (MethodInfo_4A54F30 *)
                                   MethodInfo_System_Collections_Generic_Dictionary_MobileInputLayoutRole_List_MobileInputLayout_get_Item
                                  );
            pMVar7 = MethodInfo_System_Collections_Generic_List_MobileInputLayout_Add;
            if (__this_01 != (System_Collections_Generic_List_object__o *)0x0) {
              pUVar3 = targetAddress->layout;
              piVar1 = &(__this_01->fields)._version;
              *piVar1 = *piVar1 + 1;
              pSVar5 = (__this_01->fields)._items;
              if (pSVar5 != (System_Object_array *)0x0) {
                uVar2 = (__this_01->fields)._size;
                if (uVar2 < (uint)pSVar5->max_length) {
                  (__this_01->fields)._size = uVar2 + 1;
                  pSVar5->m_Items[(int)uVar2] = (Il2CppObject *)pUVar3;
                  Il2CppCodeGenWriteBarrier(pSVar5->m_Items + (int)uVar2);
                  return;
                }
                System_Collections_Generic_List_object___AddWithResize
                          (__this_01,(Il2CppObject *)pUVar3,
                           (MethodInfo_395D230 *)pMVar7->klass->rgctx_data[0xe].method);
                return;
              }
            }
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.MobileInputLayoutManager$$LoadSelections
// il2cpp: void UI_MobileInputLayoutManager__LoadSelections (const MethodInfo* method);
// 0x5c79170
// eh: try 0x5c792be..0x5c792d2 -> pad 0x5c7974f (+1 call sites) catch Il2CppExceptionWrapper, cleanup [managed catch: TypeInfo_System_Exception]
// eh: try 0x5c793ef..0x5c79745 -> pad 0x5c79844 (+20 call sites) catch Il2CppExceptionWrapper, cleanup [compiler noexcept guard]
// eh: try 0x5c79766..0x5c7981e -> pad 0x5c7981e (+1 call sites) cleanup
// eh: try 0x5c79821..0x5c79826 -> pad 0x5c79883 catch (...) [compiler noexcept guard]
// eh: try 0x5c79864..0x5c79869 -> pad 0x5c7986e cleanup
// eh: try 0x5c79871..0x5c7987b -> pad 0x5c79883 catch (...) [compiler noexcept guard]
// asm: 101 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5c79391: lea r12, [rip + 0x1600060]  ; TypeInfo_System_Collections_IEnumerator
// asm:   0x5c79398: lea r13, [rip + 0x1601ae1]  ; TypeInfo_UI_MobileInputLayoutRole
// asm:   0x5c7939f: jmp 0x5c793bd
// asm:   0x5c793b0: mov rbx, qword ptr [rsp]
// asm:   0x5c793b4: test rbx, rbx
// asm:   0x5c793b7: je 0x5c7971a
// asm:   0x5c793dd: nop dword ptr [rax]
// asm:   0x5c79745: mov rdi, r14
// asm:   0x5c79748: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5c7974d: jmp 0x5c7974f
// asm:   0x5c7974f: mov rbx, rax
// asm:   0x5c79752: cmp edx, 1
// asm:   0x5c79755: jne 0x5c7987b
// asm:   0x5c7975b: mov rdi, rbx
// asm:   0x5c7975e: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5c79763: mov rbx, rax
// asm:   0x5c79766: lea rdi, [rip + 0x15fe953]  ; TypeInfo_System_Exception
// asm:   0x5c7976d: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x5c79772: mov rcx, qword ptr [rbx]
// asm:   0x5c79775: mov rsi, qword ptr [rcx]
// asm:   0x5c79778: mov rdi, rax
// asm:   0x5c7977b: call 0x30d6910  ; il2cpp_runtime_helper_030d6910()
// asm:   0x5c79780: test al, al
// asm:   0x5c79782: je 0x5c797fd
// asm:   0x5c79784: mov rbx, qword ptr [rbx]
// asm:   0x5c79787: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5c7978c: test rbx, rbx
// asm:   0x5c7978f: je 0x5c797f8
// asm:   0x5c79791: mov rax, qword ptr [rbx]
// asm:   0x5c79794: mov rsi, qword ptr [rax + 0x190]
// asm:   0x5c7979b: mov rdi, rbx
// asm:   0x5c7979e: call qword ptr [rax + 0x188]  ; vtable slot 5
// asm:   0x5c797a4: mov rbx, rax
// asm:   0x5c797a7: lea rdi, [rip + 0x1662482]  ; "Failed to load mobile layout selections: "
// asm:   0x5c797ae: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x5c797b3: mov rdi, rax
// asm:   0x5c797b6: mov rsi, rbx
// asm:   0x5c797b9: xor edx, edx
// asm:   0x5c797bb: call 0x53f0320  ; System_String__Concat()
// asm:   0x5c797c0: mov rbx, rax
// asm:   0x5c797c3: lea rdi, [rip + 0x15fde7e]  ; TypeInfo_UnityEngine_Debug
// asm:   0x5c797ca: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x5c797cf: cmp dword ptr [rax + 0xe4], 0
// asm:   0x5c797d6: jne 0x5c797e0
// asm:   0x5c797d8: mov rdi, rax
// asm:   0x5c797db: call 0x30d6240  ; il2cpp_codegen_runtime_class_init()
// asm:   0x5c797e0: mov rdi, rbx
// asm:   0x5c797e3: xor esi, esi
// asm:   0x5c797e5: add rsp, 0x48
// asm:   0x5c797e9: pop rbx
// asm:   0x5c797ea: pop r12
// asm:   0x5c797ec: pop r13
// asm:   0x5c797ee: pop r14
// asm:   0x5c797f0: pop r15
// asm:   0x5c797f2: pop rbp
// asm:   0x5c797f3: jmp 0x69c5270  ; UnityEngine_Debug__LogWarning()
// asm:   0x5c797fd: mov edi, 8
// asm:   0x5c79802: call 0x6e255b0  ; __cxa_allocate_exception()
// asm:   0x5c79807: mov rcx, qword ptr [rbx]
// asm:   0x5c7980a: mov qword ptr [rax], rcx
// asm:   0x5c7980d: lea rsi, [rip + 0x11b3cec]
// asm:   0x5c79814: mov rdi, rax
// asm:   0x5c79817: xor edx, edx
// asm:   0x5c79819: call 0x6e255c0  ; __cxa_throw()
// asm:   0x5c7981e: mov rbx, rax
// asm:   0x5c79821: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5c79826: jmp 0x5c7987b
// asm:   0x5c79828: jmp 0x5c7984c
// asm:   0x5c7982a: jmp 0x5c7984c
// asm:   0x5c7982c: jmp 0x5c7984c
// asm:   0x5c7982e: jmp 0x5c7984c
// asm:   0x5c79830: jmp 0x5c7984c
// asm:   0x5c79832: jmp 0x5c7984c
// asm:   0x5c79834: jmp 0x5c7984c
// asm:   0x5c79836: jmp 0x5c7984c
// asm:   0x5c79838: jmp 0x5c7984c
// asm:   0x5c7983a: jmp 0x5c7984c
// asm:   0x5c7983c: jmp 0x5c7984c
// asm:   0x5c7983e: jmp 0x5c7984c
// asm:   0x5c79840: jmp 0x5c7984c
// asm:   0x5c79842: jmp 0x5c7984c
// asm:   0x5c79844: jmp 0x5c7984c
// asm:   0x5c79846: jmp 0x5c7984c
// asm:   0x5c79848: jmp 0x5c7984c
// asm:   0x5c7984a: jmp 0x5c7984c
// asm:   0x5c7984c: mov rbx, rax
// asm:   0x5c7984f: cmp edx, 1
// asm:   0x5c79852: jne 0x5c79871
// asm:   0x5c79854: mov rdi, rbx
// asm:   0x5c79857: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5c7985c: mov r14, qword ptr [rax]
// asm:   0x5c7985f: mov qword ptr [rsp + 0x18], r14
// asm:   0x5c79864: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5c79869: jmp 0x5c79687
// asm:   0x5c7986e: mov rbx, rax
// asm:   0x5c79871: lea rdi, [rsp + 0x18]
// asm:   0x5c79876: call 0x2fda110  ; il2cpp_runtime_helper_02fda110()
// asm:   0x5c7987b: mov rdi, rbx
// asm:   0x5c7987e: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5c79883: mov rdi, rax
// asm:   0x5c79886: call 0x2ab61e0  ; __clang_call_terminate()

void UI_MobileInputLayoutManager__LoadSelections(MethodInfo *method)

{
  int32_t iVar1;
  Il2CppClass *pIVar2;
  Il2CppRuntimeInterfaceOffsetPair *pIVar3;
  System_Collections_Generic_Dictionary_MobileInputLayoutRole__List_MobileInputLayout___o *__this;
  System_Collections_Generic_Dictionary_MobileInputLayoutRole__string__o *__this_00;
  Il2CppType *handle;
  bool bVar4;
  char cVar5;
  System_String_o *pSVar6;
  SimpleJSONFixed_JSONNode_o *a;
  System_Type_o *enumType;
  System_Array_o *__this_01;
  Il2CppObject *pIVar7;
  VirtualInvokeData *pVVar8;
  int32_t *piVar9;
  UI_MobileInputLayoutManager___c__DisplayClass30_0_o *__this_02;
  SimpleJSONFixed_JSONNode_o *d;
  System_Func_MobileInputLayout__bool__o *__this_03;
  ulong uVar10;
  UI_MobileInputLayoutManager___c__DisplayClass30_0_Fields *targetAddress;
  long lVar11;
  Il2CppObject *local_78;
  int32_t local_6c;
  Il2CppObject *local_68;
  undefined8 local_60;
  undefined1 *local_58;
  Il2CppObject **local_50;
  System_Enum_o local_48;
  int32_t local_38;
  
  if (Il2CppMethodInitialized_07547970 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_MobileInputLayoutRole_List_MobileInputLayout_get_Item
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_MobileInputLayoutRole_string_set_Item);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_Any_MobileInputLayout);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_FolderPaths);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_MobileInputLayout_bool);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IDisposable);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_IEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MobileInputLayoutManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UI_MobileInputLayoutRole);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MobileInputLayoutRole);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IO_Path);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_MobileInputLayoutManager_c__DisplayClass30_0_LoadSelections_b__0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MobileInputLayoutManager_c__DisplayClass30_0);
    il2cpp_codegen_initialize_runtime_metadata(&"MobileLayoutSelections.json");
    Il2CppMethodInitialized_07547970 = '\x01';
  }
  local_78 = (Il2CppObject *)0x0;
  local_68 = (Il2CppObject *)0x0;
  if ((TypeInfo_Utility_FolderPaths->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_FolderPaths);
  }
  pSVar6 = TypeInfo_Utility_FolderPaths->static_fields->Settings;
  if ((TypeInfo_System_IO_Path->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_IO_Path);
  }
  pSVar6 = System_IO_Path__Combine(pSVar6,"MobileLayoutSelections.json",(MethodInfo *)0x0);
  bVar4 = System_IO_File__Exists(pSVar6,(MethodInfo *)0x0);
  if (!bVar4) {
    return;
  }
  pSVar6 = System_IO_File__ReadAllText(pSVar6,(MethodInfo *)0x0);
  a = SimpleJSONFixed_JSON__Parse(pSVar6,(MethodInfo *)0x0);
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  bVar4 = SimpleJSONFixed_JSONNode__op_Equality(a,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  handle = TypeRef_UI_MobileInputLayoutRole;
  if (bVar4) {
    return;
  }
  if ((g_data_075567a8->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_075567a8);
  }
  enumType = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)handle,(MethodInfo *)0x0);
  if ((g_data_07556760->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_07556760);
  }
  __this_01 = System_Enum__GetValues(enumType,(MethodInfo *)0x0);
  if (__this_01 == (System_Array_o *)0x0) {
    ThrowNullReferenceException();
  }
  pIVar7 = (Il2CppObject *)System_Array__GetEnumerator(__this_01,(MethodInfo *)0x0);
  local_58 = (undefined1 *)&local_78;
  local_60 = 0;
  local_50 = &local_68;
  do {
    local_78 = pIVar7;
    if (pIVar7 == (Il2CppObject *)0x0) {
      ThrowNullReferenceException();
    }
    pIVar2 = pIVar7->klass;
    uVar10 = (ulong)(pIVar2->_2).interface_offsets_count;
    if (uVar10 != 0) {
      pIVar3 = (pIVar2->_1).interfaceOffsets;
      lVar11 = 0;
      do {
        if (*(Il2CppClass **)((long)&pIVar3->interfaceType + lVar11) ==
            (Il2CppClass *)TypeInfo_System_Collections_IEnumerator) {
          pVVar8 = (VirtualInvokeData *)&pIVar2->vtable[*(int *)((long)&pIVar3->offset + lVar11)].methodPtr;
          goto label_05c79413;
        }
        lVar11 = lVar11 + 0x10;
      } while (uVar10 * 0x10 != lVar11);
    }
    pVVar8 = GetInterfaceInvokeDataFromVTableSlowPath
                       (pIVar7,(Il2CppClass *)TypeInfo_System_Collections_IEnumerator,0);
label_05c79413:
    cVar5 = (*pVVar8->methodPtr)(pIVar7,pVVar8->method);
    pIVar7 = local_78;
    if (cVar5 == '\0') {
      pIVar7 = il2cpp_vm_Object_IsInst(local_78,(Il2CppClass *)TypeInfo_System_IDisposable);
      if (pIVar7 == (Il2CppObject *)0x0) {
        return;
      }
      pIVar2 = pIVar7->klass;
      uVar10 = (ulong)(pIVar2->_2).interface_offsets_count;
      local_68 = pIVar7;
      if (uVar10 == 0) goto label_05c796df;
      pIVar3 = (pIVar2->_1).interfaceOffsets;
      lVar11 = 0;
      break;
    }
    if (local_78 == (Il2CppObject *)0x0) {
      ThrowNullReferenceException();
    }
    pIVar2 = local_78->klass;
    uVar10 = (ulong)(pIVar2->_2).interface_offsets_count;
    if (uVar10 != 0) {
      pIVar3 = (pIVar2->_1).interfaceOffsets;
      lVar11 = 0;
      do {
        if (*(System_Collections_IEnumerator_c **)((long)&pIVar3->interfaceType + lVar11) ==
            TypeInfo_System_Collections_IEnumerator) {
          pVVar8 = (VirtualInvokeData *)
                   &pIVar2->vtable[*(int *)((long)&pIVar3->offset + lVar11) + 1].methodPtr;
          goto label_05c794a7;
        }
        lVar11 = lVar11 + 0x10;
      } while (uVar10 * 0x10 != lVar11);
    }
    pVVar8 = GetInterfaceInvokeDataFromVTableSlowPath
                       (local_78,(Il2CppClass *)TypeInfo_System_Collections_IEnumerator,1);
label_05c794a7:
    pIVar7 = (*pVVar8->methodPtr)(pIVar7,pVVar8->method);
    if (pIVar7 == (Il2CppObject *)0x0) {
      ThrowNullReferenceException();
    }
    if ((pIVar7->klass->_1).element_class != (TypeInfo_UI_MobileInputLayoutRole->_1).element_class) {
      il2cpp_codegen_raise_invalid_cast_exception(pIVar7);
    }
    piVar9 = il2cpp_vm_Object_Unbox(pIVar7);
    iVar1 = *piVar9;
    __this_02 = il2cpp_codegen_object_new
                          ((Il2CppClass *)TypeInfo_UI_MobileInputLayoutManager_c__DisplayClass30_0);
    UI_MobileInputLayoutManager___c__DisplayClass30_0___ctor(__this_02,(MethodInfo *)0x0);
    local_48.klass = (System_Enum_c *)TypeInfo_UI_MobileInputLayoutRole;
    local_48.monitor = (void *)0xffffffffffffffff;
    local_38 = iVar1;
    pSVar6 = System_Enum__ToString(&local_48,(MethodInfo *)0x0);
    local_6c = iVar1;
    if (a == (SimpleJSONFixed_JSONNode_o *)0x0) {
      ThrowNullReferenceException();
    }
    d = (*(a->klass->vtable)._7_get_Item.methodPtr)(a,pSVar6,(a->klass->vtable)._7_get_Item.method);
    if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
    }
    pSVar6 = SimpleJSONFixed_JSONNode__op_Implicit_5763740(d,(MethodInfo *)0x0);
    if (__this_02 == (UI_MobileInputLayoutManager___c__DisplayClass30_0_o *)0x0) {
      ThrowNullReferenceException();
    }
    targetAddress = &__this_02->fields;
    (__this_02->fields).value = pSVar6;
    Il2CppCodeGenWriteBarrier(&targetAddress->value);
    bVar4 = System_String__IsNullOrEmpty(targetAddress->value,(MethodInfo *)0x0);
    pIVar7 = local_78;
    if (!bVar4) {
      if ((TypeInfo_UI_MobileInputLayoutManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MobileInputLayoutManager);
      }
      __this = TypeInfo_UI_MobileInputLayoutManager->static_fields->_layouts;
      if (__this == (System_Collections_Generic_Dictionary_MobileInputLayoutRole__List_MobileInputLayout___o *
                    )0x0) {
        ThrowNullReferenceException();
      }
      pIVar7 = System_Collections_Generic_Dictionary_Int32Enum__object___get_Item
                         ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this,local_6c,
                          (MethodInfo_4A54F30 *)
                          MethodInfo_System_Collections_Generic_Dictionary_MobileInputLayoutRole_List_MobileInputLayout_get_Item
                         );
      __this_03 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_MobileInputLayout_bool);
      System_Func_object__bool____ctor
                ((System_Func_object__bool__o *)__this_03,(Il2CppObject *)__this_02,
                 (intptr_t)MethodInfo_UI_MobileInputLayoutManager_c__DisplayClass30_0_LoadSelections_b__0,
                 (MethodInfo_4F19300 *)0x0);
      bVar4 = System_Linq_Enumerable__Any_object__34dfce0
                        ((System_Collections_Generic_IEnumerable_TSource__o *)pIVar7,
                         (System_Func_TSource__bool__o *)__this_03,
                         (MethodInfo_34DFCE0 *)MethodInfo_System_Linq_Enumerable_Any_MobileInputLayout);
      pIVar7 = local_78;
      if (bVar4) {
        if ((TypeInfo_UI_MobileInputLayoutManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MobileInputLayoutManager);
        }
        __this_00 = TypeInfo_UI_MobileInputLayoutManager->static_fields->_selected;
        if (__this_00 == (System_Collections_Generic_Dictionary_MobileInputLayoutRole__string__o *)0x0) {
          ThrowNullReferenceException();
        }
        System_Collections_Generic_Dictionary_Int32Enum__object___set_Item
                  ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,local_6c,
                   (Il2CppObject *)targetAddress->value,
                   (MethodInfo_4A54FC0 *)
                   MethodInfo_System_Collections_Generic_Dictionary_MobileInputLayoutRole_string_set_Item);
        pIVar7 = local_78;
      }
    }
  } while( true );
  while (lVar11 = lVar11 + 0x10, uVar10 * 0x10 != lVar11) {
    if (*(System_IDisposable_c **)((long)&pIVar3->interfaceType + lVar11) == TypeInfo_System_IDisposable) {
      pVVar8 = (VirtualInvokeData *)&pIVar2->vtable[*(int *)((long)&pIVar3->offset + lVar11)].methodPtr;
      goto label_05c796fd;
    }
  }
label_05c796df:
  pVVar8 = GetInterfaceInvokeDataFromVTableSlowPath(pIVar7,(Il2CppClass *)TypeInfo_System_IDisposable,0);
label_05c796fd:
  (*pVVar8->methodPtr)(pIVar7,pVVar8->method);
  return;
}


// UI.MobileInputLayoutManager$$SaveSelections
// il2cpp: void UI_MobileInputLayoutManager__SaveSelections (const MethodInfo* method);
// 0x5c7a410
// eh: try 0x5c7a5ef..0x5c7a8ca -> pad 0x5c7a8e3 (+9 call sites) catch Il2CppExceptionWrapper, cleanup [compiler noexcept guard]
// eh: try 0x5c7a901..0x5c7a906 -> pad 0x5c7a90b cleanup
// eh: try 0x5c7a90e..0x5c7a918 -> pad 0x5c7a920 catch (...) [compiler noexcept guard]
// asm: 31 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5c7a5a4: lea r13, [rip + 0x15fee4d]  ; TypeInfo_System_Collections_IEnumerator
// asm:   0x5c7a5ab: lea r14, [rip + 0x16008ce]  ; TypeInfo_UI_MobileInputLayoutRole
// asm:   0x5c7a5b2: lea r15, [rip + 0x16008b7]  ; TypeInfo_UI_MobileInputLayoutManager
// asm:   0x5c7a5b9: nop dword ptr [rax]
// asm:   0x5c7a8cf: mov rdi, r14
// asm:   0x5c7a8d2: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5c7a8d7: jmp 0x5c7a8e9
// asm:   0x5c7a8d9: jmp 0x5c7a8e9
// asm:   0x5c7a8db: jmp 0x5c7a8e9
// asm:   0x5c7a8dd: jmp 0x5c7a8e9
// asm:   0x5c7a8df: jmp 0x5c7a8e9
// asm:   0x5c7a8e1: jmp 0x5c7a8e9
// asm:   0x5c7a8e3: jmp 0x5c7a8e9
// asm:   0x5c7a8e5: jmp 0x5c7a8e9
// asm:   0x5c7a8e7: jmp 0x5c7a8e9
// asm:   0x5c7a8e9: mov r14, rax
// asm:   0x5c7a8ec: cmp edx, 1
// asm:   0x5c7a8ef: jne 0x5c7a90e
// asm:   0x5c7a8f1: mov rdi, r14
// asm:   0x5c7a8f4: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5c7a8f9: mov r14, qword ptr [rax]
// asm:   0x5c7a8fc: mov qword ptr [rsp + 0x18], r14
// asm:   0x5c7a901: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5c7a906: jmp 0x5c7a792
// asm:   0x5c7a90b: mov r14, rax
// asm:   0x5c7a90e: lea rdi, [rsp + 0x18]
// asm:   0x5c7a913: call 0x2fda1b0  ; il2cpp_runtime_helper_02fda1b0()
// asm:   0x5c7a918: mov rdi, r14
// asm:   0x5c7a91b: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5c7a920: mov rdi, rax
// asm:   0x5c7a923: call 0x2ab61e0  ; __clang_call_terminate()

void UI_MobileInputLayoutManager__SaveSelections(MethodInfo *method)

{
  int32_t key;
  Il2CppClass *pIVar1;
  Il2CppRuntimeInterfaceOffsetPair *pIVar2;
  System_Collections_Generic_Dictionary_MobileInputLayoutRole__string__o *__this;
  Il2CppType *handle;
  char cVar3;
  SimpleJSONFixed_JSONObject_o *__this_00;
  System_Type_o *enumType;
  System_Array_o *__this_01;
  Il2CppObject *pIVar4;
  VirtualInvokeData *pVVar5;
  int32_t *piVar6;
  System_String_o *pSVar7;
  System_String_o *pSVar8;
  SimpleJSONFixed_JSONNode_o *pSVar9;
  ulong uVar10;
  long lVar11;
  Il2CppObject *local_70;
  Il2CppObject *local_68;
  undefined8 local_60;
  Il2CppObject **local_58;
  Il2CppObject **local_50;
  System_Enum_o local_48;
  int32_t local_38;
  
  if (Il2CppMethodInitialized_07547971 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_MobileInputLayoutRole_string_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_FolderPaths);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IDisposable);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_IEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MobileInputLayoutManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UI_MobileInputLayoutRole);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MobileInputLayoutRole);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IO_Path);
    il2cpp_codegen_initialize_runtime_metadata(&"MobileLayoutSelections.json");
    Il2CppMethodInitialized_07547971 = '\x01';
  }
  local_70 = (Il2CppObject *)0x0;
  local_68 = (Il2CppObject *)0x0;
  if ((TypeInfo_Utility_FolderPaths->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_FolderPaths);
  }
  System_IO_Directory__CreateDirectory
            (TypeInfo_Utility_FolderPaths->static_fields->Settings,(MethodInfo *)0x0);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONObject);
  SimpleJSONFixed_JSONObject___ctor(__this_00,(MethodInfo *)0x0);
  handle = TypeRef_UI_MobileInputLayoutRole;
  if ((g_data_075567a8->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_075567a8);
  }
  enumType = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)handle,(MethodInfo *)0x0);
  if ((g_data_07556760->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_07556760);
  }
  __this_01 = System_Enum__GetValues(enumType,(MethodInfo *)0x0);
  if (__this_01 != (System_Array_o *)0x0) {
    pIVar4 = (Il2CppObject *)System_Array__GetEnumerator(__this_01,(MethodInfo *)0x0);
    local_60 = 0;
    local_58 = &local_70;
    local_50 = &local_68;
    do {
      local_70 = pIVar4;
      if (pIVar4 == (Il2CppObject *)0x0) {
        ThrowNullReferenceException();
      }
      pIVar1 = pIVar4->klass;
      uVar10 = (ulong)(pIVar1->_2).interface_offsets_count;
      if (uVar10 != 0) {
        pIVar2 = (pIVar1->_1).interfaceOffsets;
        lVar11 = 0;
        do {
          if (*(Il2CppClass **)((long)&pIVar2->interfaceType + lVar11) ==
              (Il2CppClass *)TypeInfo_System_Collections_IEnumerator) {
            pVVar5 = pIVar1->vtable + *(int *)((long)&pIVar2->offset + lVar11);
            goto label_05c7a613;
          }
          lVar11 = lVar11 + 0x10;
        } while (uVar10 * 0x10 != lVar11);
      }
      pVVar5 = GetInterfaceInvokeDataFromVTableSlowPath
                         (pIVar4,(Il2CppClass *)TypeInfo_System_Collections_IEnumerator,0);
label_05c7a613:
      cVar3 = (*pVVar5->methodPtr)(pIVar4,pVVar5->method);
      pIVar4 = local_70;
      if (cVar3 == '\0') {
        pIVar4 = il2cpp_vm_Object_IsInst(local_70,(Il2CppClass *)TypeInfo_System_IDisposable);
        local_68 = pIVar4;
        if (pIVar4 == (Il2CppObject *)0x0) goto label_05c7a816;
        pIVar1 = pIVar4->klass;
        uVar10 = (ulong)(pIVar1->_2).interface_offsets_count;
        if (uVar10 == 0) goto label_05c7a7ef;
        pIVar2 = (pIVar1->_1).interfaceOffsets;
        lVar11 = 0;
        goto label_05c7a7e0;
      }
      if (local_70 == (Il2CppObject *)0x0) {
        ThrowNullReferenceException();
      }
      pIVar1 = local_70->klass;
      uVar10 = (ulong)(pIVar1->_2).interface_offsets_count;
      if (uVar10 != 0) {
        pIVar2 = (pIVar1->_1).interfaceOffsets;
        lVar11 = 0;
        do {
          if (*(System_Collections_IEnumerator_c **)((long)&pIVar2->interfaceType + lVar11) ==
              TypeInfo_System_Collections_IEnumerator) {
            pVVar5 = pIVar1->vtable + (*(int *)((long)&pIVar2->offset + lVar11) + 1);
            goto label_05c7a6a7;
          }
          lVar11 = lVar11 + 0x10;
        } while (uVar10 * 0x10 != lVar11);
      }
      pVVar5 = GetInterfaceInvokeDataFromVTableSlowPath
                         (local_70,(Il2CppClass *)TypeInfo_System_Collections_IEnumerator,1);
label_05c7a6a7:
      pIVar4 = (*pVVar5->methodPtr)(pIVar4,pVVar5->method);
      if (pIVar4 == (Il2CppObject *)0x0) {
        ThrowNullReferenceException();
      }
      if ((pIVar4->klass->_1).element_class != (TypeInfo_UI_MobileInputLayoutRole->_1).element_class) {
        il2cpp_codegen_raise_invalid_cast_exception(pIVar4);
      }
      piVar6 = il2cpp_vm_Object_Unbox(pIVar4);
      key = *piVar6;
      local_48.klass = (System_Enum_c *)TypeInfo_UI_MobileInputLayoutRole;
      local_48.monitor = (void *)0xffffffffffffffff;
      local_38 = key;
      pSVar7 = System_Enum__ToString(&local_48,(MethodInfo *)0x0);
      if ((TypeInfo_UI_MobileInputLayoutManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MobileInputLayoutManager);
      }
      __this = TypeInfo_UI_MobileInputLayoutManager->static_fields->_selected;
      if (__this == (System_Collections_Generic_Dictionary_MobileInputLayoutRole__string__o *)0x0) {
        ThrowNullReferenceException();
      }
      pSVar8 = System_Collections_Generic_Dictionary_Int32Enum__object___get_Item
                         ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this,key,
                          (MethodInfo_4A54F30 *)
                          MethodInfo_System_Collections_Generic_Dictionary_MobileInputLayoutRole_string_get_Item
                         );
      if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
      }
      pSVar9 = SimpleJSONFixed_JSONNode__op_Implicit(pSVar8,(MethodInfo *)0x0);
      if (__this_00 == (SimpleJSONFixed_JSONObject_o *)0x0) {
        ThrowNullReferenceException();
      }
      (*(__this_00->klass->vtable)._20_Add.methodPtr)
                (__this_00,pSVar7,pSVar9,(__this_00->klass->vtable)._20_Add.method);
      pIVar4 = local_70;
    } while( true );
  }
  goto label_05c7a8ca;
  while (lVar11 = lVar11 + 0x10, uVar10 * 0x10 != lVar11) {
label_05c7a7e0:
    if (*(System_IDisposable_c **)((long)&pIVar2->interfaceType + lVar11) == TypeInfo_System_IDisposable) {
      pVVar5 = pIVar1->vtable + *(int *)((long)&pIVar2->offset + lVar11);
      goto label_05c7a80d;
    }
  }
label_05c7a7ef:
  pVVar5 = GetInterfaceInvokeDataFromVTableSlowPath(pIVar4,(Il2CppClass *)TypeInfo_System_IDisposable,0);
label_05c7a80d:
  (*pVVar5->methodPtr)(pIVar4,pVVar5->method);
label_05c7a816:
  if ((TypeInfo_Utility_FolderPaths->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_FolderPaths);
  }
  pSVar7 = TypeInfo_Utility_FolderPaths->static_fields->Settings;
  if ((TypeInfo_System_IO_Path->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_IO_Path);
  }
  pSVar7 = System_IO_Path__Combine(pSVar7,"MobileLayoutSelections.json",(MethodInfo *)0x0);
  if (__this_00 != (SimpleJSONFixed_JSONObject_o *)0x0) {
    pSVar8 = (*(__this_00->klass->vtable)._30_ToString.methodPtr)
                       (__this_00,4,(__this_00->klass->vtable)._30_ToString.method);
    System_IO_File__WriteAllText(pSVar7,pSVar8,(MethodInfo *)0x0);
    return;
  }
label_05c7a8ca:
  ThrowNullReferenceException();
}


// UI.MobileInputLayoutManager$$GetCustomFolder
// il2cpp: System_String_o* UI_MobileInputLayoutManager__GetCustomFolder (const MethodInfo* method);
// 0x5c79910

System_String_o * UI_MobileInputLayoutManager__GetCustomFolder(MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_07547972 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_FolderPaths);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IO_Path);
    il2cpp_codegen_initialize_runtime_metadata(&"MobileLayouts");
    Il2CppMethodInitialized_07547972 = '\x01';
  }
  if ((TypeInfo_Utility_FolderPaths->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_FolderPaths);
  }
  pSVar1 = TypeInfo_Utility_FolderPaths->static_fields->Settings;
  if ((TypeInfo_System_IO_Path->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_IO_Path);
  }
  pSVar1 = System_IO_Path__Combine(pSVar1,"MobileLayouts",(MethodInfo *)0x0);
  return pSVar1;
}


// UI.MobileInputLayoutManager$$GetCustomLayoutPath
// il2cpp: System_String_o* UI_MobileInputLayoutManager__GetCustomLayoutPath (UI_MobileInputLayout_o* layout, const MethodInfo* method);
// 0x5c7ace0

System_String_o *
UI_MobileInputLayoutManager__GetCustomLayoutPath(UI_MobileInputLayout_o *layout,MethodInfo *method)

{
  System_Char_array *separator;
  System_String_array *value;
  System_String_o *pSVar1;
  System_String_o *path1;
  UI_MobileInputLayoutManager_c *method_00;
  
  if (Il2CppMethodInitialized_07547973 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MobileInputLayoutManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IO_Path);
    il2cpp_codegen_initialize_runtime_metadata(&".json");
    il2cpp_codegen_initialize_runtime_metadata(&"_");
    Il2CppMethodInitialized_07547973 = '\x01';
  }
  if (layout != (UI_MobileInputLayout_o *)0x0) {
    pSVar1 = (layout->fields).Name;
    if ((TypeInfo_System_IO_Path->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_IO_Path);
    }
    separator = System_IO_Path__GetInvalidFileNameChars((MethodInfo *)0x0);
    if (pSVar1 != (System_String_o *)0x0) {
      value = System_String__Split_5304f50(pSVar1,separator,(MethodInfo *)0x0);
      pSVar1 = System_String__Join("_",value,(MethodInfo *)0x0);
      method_00 = TypeInfo_UI_MobileInputLayoutManager;
      if ((TypeInfo_UI_MobileInputLayoutManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MobileInputLayoutManager);
      }
      path1 = UI_MobileInputLayoutManager__GetCustomFolder((MethodInfo *)method_00);
      pSVar1 = System_String__Concat_5302810
                         ((layout->fields).Role,"_",pSVar1,".json",
                          (MethodInfo *)0x0);
      pSVar1 = System_IO_Path__Combine(path1,pSVar1,(MethodInfo *)0x0);
      return pSVar1;
    }
  }
  ThrowNullReferenceException();
}


// UI.MobileInputLayoutManager$$.cctor
// il2cpp: void UI_MobileInputLayoutManager___cctor (const MethodInfo* method);
// 0x5c7b380

void UI_MobileInputLayoutManager___cctor(MethodInfo *method)

{
  UI_MobileInputLayoutManager_StaticFields *pUVar1;
  System_Collections_Generic_Dictionary_MobileInputLayoutRole__List_MobileInputLayout___o *__this;
  System_Collections_Generic_Dictionary_MobileInputLayoutRole__string__o *__this_00;
  
  if (Il2CppMethodInitialized_07547974 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_MobileInputLayoutRole_List_MobileInputLayout_ctor
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_MobileInputLayoutRole_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_Dictionary_MobileInputLayoutRole_string);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_Dictionary_MobileInputLayoutRole_List_MobileInputLayout);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MobileInputLayoutManager);
    Il2CppMethodInitialized_07547974 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)
                      TypeInfo_System_Collections_Generic_Dictionary_MobileInputLayoutRole_List_MobileInputLayout
                     );
  System_Collections_Generic_Dictionary_Int32Enum__object____ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this,
             (MethodInfo_4A543B0 *)
             MethodInfo_System_Collections_Generic_Dictionary_MobileInputLayoutRole_List_MobileInputLayout_ctor
            );
  TypeInfo_UI_MobileInputLayoutManager->static_fields->_layouts = __this;
  Il2CppCodeGenWriteBarrier(&TypeInfo_UI_MobileInputLayoutManager->static_fields->_layouts);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_System_Collections_Generic_Dictionary_MobileInputLayoutRole_string);
  System_Collections_Generic_Dictionary_Int32Enum__object____ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
             (MethodInfo_4A543B0 *)
             MethodInfo_System_Collections_Generic_Dictionary_MobileInputLayoutRole_string_ctor);
  pUVar1 = TypeInfo_UI_MobileInputLayoutManager->static_fields;
  pUVar1->_selected = __this_00;
  Il2CppCodeGenWriteBarrier(&pUVar1->_selected);
  return;
}


