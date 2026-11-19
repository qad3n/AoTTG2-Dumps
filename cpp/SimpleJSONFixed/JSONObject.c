// Type: SimpleJSONFixed.JSONObject
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/SimpleJSONFixed/JSONObject.cs
// Prior real C# source (older reference): Assets/Scripts/Utility/SimpleJSON.cs
// --------------------------------

// SimpleJSONFixed.JSONObject.<>c__DisplayClass21_0$$.ctor
// il2cpp: void SimpleJSONFixed_JSONObject___c__DisplayClass21_0___ctor (SimpleJSONFixed_JSONObject___c__DisplayClass21_0_o* __this, const MethodInfo* method);
// 0x5868470

void SimpleJSONFixed_JSONObject___c__DisplayClass21_0___ctor
               (SimpleJSONFixed_JSONObject___c__DisplayClass21_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// SimpleJSONFixed.JSONObject.<>c__DisplayClass21_0$$<Remove>b__0
// il2cpp: bool SimpleJSONFixed_JSONObject___c__DisplayClass21_0___Remove_b__0 (SimpleJSONFixed_JSONObject___c__DisplayClass21_0_o* __this, System_Collections_Generic_KeyValuePair_string__JSONNode__o k, const MethodInfo* method);
// 0x5868b80

bool SimpleJSONFixed_JSONObject___c__DisplayClass21_0___Remove_b__0
               (SimpleJSONFixed_JSONObject___c__DisplayClass21_0_o *__this,
               System_Collections_Generic_KeyValuePair_string__JSONNode__o k,MethodInfo *method)

{
  Il2CppObject *b;
  bool bVar1;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_00;
  
  method_00 = (MethodInfo *)k.fields.value;
  if (Il2CppMethodInitialized_07545115 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_KeyValuePair_string_JSONNode_get_Value);
    Il2CppMethodInitialized_07545115 = '\x01';
    method_00 = extraout_RDX;
  }
  b = (Il2CppObject *)(__this->fields).aNode;
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
    method_00 = extraout_RDX_00;
  }
  bVar1 = SimpleJSONFixed_JSONNode__op_Equality(k.fields.value,b,method_00);
  return bVar1;
}


// SimpleJSONFixed.JSONObject.<get_Children>d__27$$.ctor
// il2cpp: void SimpleJSONFixed_JSONObject__get_Children_d__27___ctor (SimpleJSONFixed_JSONObject__get_Children_d__27_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x58687f0

void SimpleJSONFixed_JSONObject__get_Children_d__27___ctor
               (SimpleJSONFixed_JSONObject__get_Children_d__27_o *__this,int32_t __1__state,MethodInfo *method
               )

{
  int32_t iVar1;
  
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  iVar1 = System_Environment__get_CurrentManagedThreadId((MethodInfo *)0x0);
  (__this->fields).__l__initialThreadId = iVar1;
  return;
}


// SimpleJSONFixed.JSONObject.<get_Children>d__27$$System.IDisposable.Dispose
// il2cpp: void SimpleJSONFixed_JSONObject__get_Children_d__27__System_IDisposable_Dispose (SimpleJSONFixed_JSONObject__get_Children_d__27_o* __this, const MethodInfo* method);
// 0x5868be0

void SimpleJSONFixed_JSONObject__get_Children_d__27__System_IDisposable_Dispose
               (SimpleJSONFixed_JSONObject__get_Children_d__27_o *__this,MethodInfo *method)

{
  int iVar1;
  
  iVar1 = (__this->fields).__1__state;
  if ((iVar1 != 1) && (iVar1 != -3)) {
    return;
  }
  if (Il2CppMethodInitialized_07545117 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_Enumerator_string_JSONNode_Dispose);
    Il2CppMethodInitialized_07545117 = '\x01';
  }
  (__this->fields).__1__state = -1;
  System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose
            ((System_Collections_Generic_Dictionary_Enumerator_object__object__o *)
             &(__this->fields).__7__wrap1,
             (MethodInfo_4CE67F0 *)
             MethodInfo_System_Collections_Generic_Dictionary_Enumerator_string_JSONNode_Dispose);
  return;
}


// SimpleJSONFixed.JSONObject.<get_Children>d__27$$MoveNext
// il2cpp: bool SimpleJSONFixed_JSONObject__get_Children_d__27__MoveNext (SimpleJSONFixed_JSONObject__get_Children_d__27_o* __this, const MethodInfo* method);
// 0x5868c30
// eh: try 0x5868cc8..0x5868dbd -> pad 0x5868dc1 (+6 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5868de1..0x5868de6 -> pad 0x5868dfc cleanup
// eh: try 0x5868dff..0x5868e09 -> pad 0x5868e11 catch (...) [compiler noexcept guard]
// asm: 27 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5868dbd: jmp 0x5868dc9
// asm:   0x5868dbf: jmp 0x5868dc9
// asm:   0x5868dc1: jmp 0x5868dc9
// asm:   0x5868dc3: jmp 0x5868dc9
// asm:   0x5868dc5: jmp 0x5868dc9
// asm:   0x5868dc7: jmp 0x5868dc9
// asm:   0x5868dc9: mov rbx, rax
// asm:   0x5868dcc: cmp edx, 1
// asm:   0x5868dcf: jne 0x5868dff
// asm:   0x5868dd1: mov rdi, rbx
// asm:   0x5868dd4: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5868dd9: mov rbx, qword ptr [rax]
// asm:   0x5868ddc: mov qword ptr [rsp + 8], rbx
// asm:   0x5868de1: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5868de6: test rbx, rbx
// asm:   0x5868de9: je 0x5868dab
// asm:   0x5868deb: mov rdi, qword ptr [rsp]
// asm:   0x5868def: call 0x2fcf810  ; il2cpp_runtime_helper_02fcf810()
// asm:   0x5868df4: mov rdi, rbx
// asm:   0x5868df7: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5868dfc: mov rbx, rax
// asm:   0x5868dff: lea rdi, [rsp + 8]
// asm:   0x5868e04: call 0x2fcf520  ; il2cpp_runtime_helper_02fcf520()
// asm:   0x5868e09: mov rdi, rbx
// asm:   0x5868e0c: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5868e11: mov rdi, rax
// asm:   0x5868e14: call 0x2ab61e0  ; __clang_call_terminate()

bool SimpleJSONFixed_JSONObject__get_Children_d__27__MoveNext
               (SimpleJSONFixed_JSONObject__get_Children_d__27_o *__this,MethodInfo *method)

{
  int iVar1;
  SimpleJSONFixed_JSONObject_o *pSVar2;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  SimpleJSONFixed_JSONObject__get_Children_d__27_o *pSVar3;
  SimpleJSONFixed_JSONObject__get_Children_d__27_o **ppSVar4;
  bool bVar5;
  SimpleJSONFixed_JSONObject__get_Children_d__27_o *local_78;
  undefined8 local_70;
  undefined1 *local_68;
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o local_60;
  System_Collections_Generic_Dictionary_TKey__TValue__o *local_38;
  int32_t iStack_30;
  int32_t iStack_2c;
  Il2CppObject *local_28;
  Il2CppObject *pIStack_20;
  int32_t local_18;
  undefined4 uStack_14;
  
  local_78 = __this;
  if (Il2CppMethodInitialized_07545116 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_JSONNode_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_Enumerator_string_JSONNode_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_Enumerator_string_JSONNode_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_KeyValuePair_string_JSONNode_get_Value);
    Il2CppMethodInitialized_07545116 = '\x01';
  }
  local_68 = (undefined1 *)&local_78;
  local_70 = 0;
  iVar1 = (__this->fields).__1__state;
  ppSVar4 = &local_78;
  if (iVar1 != 1) {
    if (iVar1 != 0) {
      return false;
    }
    pSVar2 = (__this->fields).__4__this;
    (__this->fields).__1__state = -1;
    if (pSVar2 == (SimpleJSONFixed_JSONObject_o *)0x0) {
      ThrowNullReferenceException();
    }
    __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)(pSVar2->fields).m_Dict;
    if (__this_00 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      local_68 = (undefined1 *)&local_78;
      ThrowNullReferenceException();
    }
    local_68 = (undefined1 *)&local_78;
    System_Collections_Generic_Dictionary_object__object___GetEnumerator
              (&local_60,__this_00,
               (MethodInfo_4AAD970 *)
               MethodInfo_System_Collections_Generic_Dictionary_string_JSONNode_GetEnumerator);
    local_18 = local_60.fields._getEnumeratorRetType;
    uStack_14 = local_60.fields._36_4_;
    local_28 = local_60.fields._current.fields.key;
    pIStack_20 = local_60.fields._current.fields.value;
    local_38 = local_60.fields._dictionary;
    iStack_30 = local_60.fields._version;
    iStack_2c = local_60.fields._index;
    (local_78->fields).__7__wrap1.fields._getEnumeratorRetType = local_60.fields._getEnumeratorRetType;
    *(undefined4 *)&(local_78->fields).__7__wrap1.fields.field_0x24 = local_60.fields._36_4_;
    (local_78->fields).__7__wrap1.fields._current.fields.key = local_60.fields._current.fields.key;
    (local_78->fields).__7__wrap1.fields._current.fields.value = local_60.fields._current.fields.value;
    (local_78->fields).__7__wrap1.fields._dictionary = local_60.fields._dictionary;
    (local_78->fields).__7__wrap1.fields._version = local_60.fields._version;
    (local_78->fields).__7__wrap1.fields._index = local_60.fields._index;
    Il2CppCodeGenWriteBarrier((void **)&(local_78->fields).__7__wrap1);
    __this = local_78;
    ppSVar4 = (SimpleJSONFixed_JSONObject__get_Children_d__27_o **)local_68;
  }
  local_68 = (undefined1 *)ppSVar4;
  (__this->fields).__1__state = -3;
  bVar5 = System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext
                    ((System_Collections_Generic_Dictionary_Enumerator_object__object__o *)
                     &(__this->fields).__7__wrap1,
                     (MethodInfo_4CE66D0 *)
                     MethodInfo_System_Collections_Generic_Dictionary_Enumerator_string_JSONNode_MoveNext);
  pSVar3 = local_78;
  if (bVar5) {
    (local_78->fields).__2__current =
         (SimpleJSONFixed_JSONNode_o *)(local_78->fields).__7__wrap1.fields._current.fields.value;
    Il2CppCodeGenWriteBarrier(&(local_78->fields).__2__current);
    (local_78->fields).__1__state = 1;
    return true;
  }
  if (Il2CppMethodInitialized_07545117 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_Enumerator_string_JSONNode_Dispose);
    Il2CppMethodInitialized_07545117 = '\x01';
  }
  (pSVar3->fields).__1__state = -1;
  System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose
            ((System_Collections_Generic_Dictionary_Enumerator_object__object__o *)
             &(pSVar3->fields).__7__wrap1,
             (MethodInfo_4CE67F0 *)
             MethodInfo_System_Collections_Generic_Dictionary_Enumerator_string_JSONNode_Dispose);
  (local_78->fields).__7__wrap1.fields._current.fields.key = (Il2CppObject *)0x0;
  (local_78->fields).__7__wrap1.fields._current.fields.value = (Il2CppObject *)0x0;
  (local_78->fields).__7__wrap1.fields._dictionary =
       (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  (local_78->fields).__7__wrap1.fields._version = 0;
  (local_78->fields).__7__wrap1.fields._index = 0;
  *(undefined8 *)&(local_78->fields).__7__wrap1.fields._getEnumeratorRetType = 0;
  return false;
}


// SimpleJSONFixed.JSONObject.<get_Children>d__27$$<>m__Finally1
// il2cpp: void SimpleJSONFixed_JSONObject__get_Children_d__27____m__Finally1 (SimpleJSONFixed_JSONObject__get_Children_d__27_o* __this, const MethodInfo* method);
// 0x5868e20

void SimpleJSONFixed_JSONObject__get_Children_d__27____m__Finally1
               (SimpleJSONFixed_JSONObject__get_Children_d__27_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07545117 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_Enumerator_string_JSONNode_Dispose);
    Il2CppMethodInitialized_07545117 = '\x01';
  }
  (__this->fields).__1__state = -1;
  System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose
            ((System_Collections_Generic_Dictionary_Enumerator_object__object__o *)
             &(__this->fields).__7__wrap1,
             (MethodInfo_4CE67F0 *)
             MethodInfo_System_Collections_Generic_Dictionary_Enumerator_string_JSONNode_Dispose);
  return;
}


// SimpleJSONFixed.JSONObject.<get_Children>d__27$$System.Collections.Generic.IEnumerator<SimpleJSONFixed.JSONNode>.get_Current
// il2cpp: SimpleJSONFixed_JSONNode_o* SimpleJSONFixed_JSONObject__get_Children_d__27__System_Collections_Generic_IEnumerator_SimpleJSONFixed_JSONNode__get_Current (SimpleJSONFixed_JSONObject__get_Children_d__27_o* __this, const MethodInfo* method);
// 0x5868e60

SimpleJSONFixed_JSONNode_o *
SimpleJSONFixed_JSONObject__get_Children_d__27__System_Collections_Generic_IEnumerator_SimpleJSONFixed_JSONNode__get_Current
          (SimpleJSONFixed_JSONObject__get_Children_d__27_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// SimpleJSONFixed.JSONObject.<get_Children>d__27$$System.Collections.IEnumerator.Reset
// il2cpp: void SimpleJSONFixed_JSONObject__get_Children_d__27__System_Collections_IEnumerator_Reset (SimpleJSONFixed_JSONObject__get_Children_d__27_o* __this, const MethodInfo* method);
// 0x5868e70

void SimpleJSONFixed_JSONObject__get_Children_d__27__System_Collections_IEnumerator_Reset
               (SimpleJSONFixed_JSONObject__get_Children_d__27_o *__this,MethodInfo *method)

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
                  MethodInfo_SimpleJSONFixed_JSONObject_get_Children_d__27_System_Collections_IEnumerator_Reset
                 );
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
}


// SimpleJSONFixed.JSONObject.<get_Children>d__27$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* SimpleJSONFixed_JSONObject__get_Children_d__27__System_Collections_IEnumerator_get_Current (SimpleJSONFixed_JSONObject__get_Children_d__27_o* __this, const MethodInfo* method);
// 0x5868eb0

Il2CppObject *
SimpleJSONFixed_JSONObject__get_Children_d__27__System_Collections_IEnumerator_get_Current
          (SimpleJSONFixed_JSONObject__get_Children_d__27_o *__this,MethodInfo *method)

{
  return (Il2CppObject *)(__this->fields).__2__current;
}


// SimpleJSONFixed.JSONObject.<get_Children>d__27$$System.Collections.Generic.IEnumerable<SimpleJSONFixed.JSONNode>.GetEnumerator
// il2cpp: System_Collections_Generic_IEnumerator_JSONNode__o* SimpleJSONFixed_JSONObject__get_Children_d__27__System_Collections_Generic_IEnumerable_SimpleJSONFixed_JSONNode__GetEnumerator (SimpleJSONFixed_JSONObject__get_Children_d__27_o* __this, const MethodInfo* method);
// 0x5868ec0

System_Collections_IEnumerator_o *
SimpleJSONFixed_JSONObject__get_Children_d__27__System_Collections_Generic_IEnumerable_SimpleJSONFixed_JSONNode__GetEnumerator
          (SimpleJSONFixed_JSONObject__get_Children_d__27_o *__this,MethodInfo *method)

{
  int iVar1;
  int32_t iVar2;
  SimpleJSONFixed_JSONObject__get_Children_d__27_o *__this_00;
  
  if (Il2CppMethodInitialized_07545118 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONObject_get_Children_d__27);
    Il2CppMethodInitialized_07545118 = '\x01';
  }
  if (((__this->fields).__1__state == -2) &&
     (iVar1 = (__this->fields).__l__initialThreadId,
     iVar2 = System_Environment__get_CurrentManagedThreadId((MethodInfo *)0x0), iVar1 == iVar2)) {
    (__this->fields).__1__state = 0;
    return (System_Collections_IEnumerator_o *)__this;
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONObject_get_Children_d__27)
  ;
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).__1__state = 0;
  iVar2 = System_Environment__get_CurrentManagedThreadId((MethodInfo *)0x0);
  (__this_00->fields).__l__initialThreadId = iVar2;
  (__this_00->fields).__4__this = (__this->fields).__4__this;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this);
  return (System_Collections_IEnumerator_o *)__this_00;
}


// SimpleJSONFixed.JSONObject.<get_Children>d__27$$System.Collections.IEnumerable.GetEnumerator
// il2cpp: System_Collections_IEnumerator_o* SimpleJSONFixed_JSONObject__get_Children_d__27__System_Collections_IEnumerable_GetEnumerator (SimpleJSONFixed_JSONObject__get_Children_d__27_o* __this, const MethodInfo* method);
// 0x5868f60

System_Collections_IEnumerator_o *
SimpleJSONFixed_JSONObject__get_Children_d__27__System_Collections_IEnumerable_GetEnumerator
          (SimpleJSONFixed_JSONObject__get_Children_d__27_o *__this,MethodInfo *method)

{
  System_Collections_IEnumerator_o *pSVar1;
  
  pSVar1 = SimpleJSONFixed_JSONObject__get_Children_d__27__System_Collections_Generic_IEnumerable_SimpleJSONFixed_JSONNode__GetEnumerator
                     (__this,method);
  return pSVar1;
}


// SimpleJSONFixed.JSONObject$$get_Inline
// il2cpp: bool SimpleJSONFixed_JSONObject__get_Inline (SimpleJSONFixed_JSONObject_o* __this, const MethodInfo* method);
// 0x5867a70

bool SimpleJSONFixed_JSONObject__get_Inline(SimpleJSONFixed_JSONObject_o *__this,MethodInfo *method)

{
  return (__this->fields).field1_0x8;
}


// SimpleJSONFixed.JSONObject$$set_Inline
// il2cpp: void SimpleJSONFixed_JSONObject__set_Inline (SimpleJSONFixed_JSONObject_o* __this, bool value, const MethodInfo* method);
// 0x5867a80

void SimpleJSONFixed_JSONObject__set_Inline
               (SimpleJSONFixed_JSONObject_o *__this,bool value,MethodInfo *method)

{
  (__this->fields).field1_0x8 = value;
  return;
}


// SimpleJSONFixed.JSONObject$$get_Tag
// il2cpp: int32_t SimpleJSONFixed_JSONObject__get_Tag (SimpleJSONFixed_JSONObject_o* __this, const MethodInfo* method);
// 0x5867a90

int32_t SimpleJSONFixed_JSONObject__get_Tag(SimpleJSONFixed_JSONObject_o *__this,MethodInfo *method)

{
  return 2;
}


// SimpleJSONFixed.JSONObject$$get_IsObject
// il2cpp: bool SimpleJSONFixed_JSONObject__get_IsObject (SimpleJSONFixed_JSONObject_o* __this, const MethodInfo* method);
// 0x5867aa0

bool SimpleJSONFixed_JSONObject__get_IsObject(SimpleJSONFixed_JSONObject_o *__this,MethodInfo *method)

{
  return true;
}


// SimpleJSONFixed.JSONObject$$GetEnumerator
// il2cpp: SimpleJSONFixed_JSONNode_Enumerator_o SimpleJSONFixed_JSONObject__GetEnumerator (SimpleJSONFixed_JSONObject_o* __this, const MethodInfo* method);
// 0x5867ab0

SimpleJSONFixed_JSONNode_Enumerator_o *
SimpleJSONFixed_JSONObject__GetEnumerator
          (SimpleJSONFixed_JSONNode_Enumerator_o *__return_storage_ptr__,SimpleJSONFixed_JSONObject_o *__this,
          MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o SStack_38;
  
  if (Il2CppMethodInitialized_07545104 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_JSONNode_GetEnumerator);
    Il2CppMethodInitialized_07545104 = '\x01';
  }
  __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).m_Dict;
  if (__this_00 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_Dictionary_object__object___GetEnumerator
            (&SStack_38,__this_00,
             (MethodInfo_4AAD970 *)
             MethodInfo_System_Collections_Generic_Dictionary_string_JSONNode_GetEnumerator);
  (__return_storage_ptr__->fields).m_Array.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  (__return_storage_ptr__->fields).m_Array.fields._index = 0;
  (__return_storage_ptr__->fields).m_Array.fields._version = 0;
  (__return_storage_ptr__->fields).m_Object.fields._current.fields.value = (Il2CppObject *)0x0;
  *(undefined8 *)&(__return_storage_ptr__->fields).m_Object.fields._getEnumeratorRetType = 0;
  (__return_storage_ptr__->fields).m_Object.fields._version = 0;
  (__return_storage_ptr__->fields).m_Object.fields._index = 0;
  (__return_storage_ptr__->fields).m_Object.fields._current.fields.key = (Il2CppObject *)0x0;
  *(undefined8 *)&__return_storage_ptr__->fields = 0;
  (__return_storage_ptr__->fields).m_Object.fields._dictionary =
       (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  (__return_storage_ptr__->fields).m_Array.fields._current = (SimpleJSONFixed_JSONNode_o *)0x0;
  (__return_storage_ptr__->fields).m_Object.fields._dictionary = SStack_38.fields._dictionary;
  (__return_storage_ptr__->fields).m_Object.fields._version = SStack_38.fields._version;
  (__return_storage_ptr__->fields).m_Object.fields._index = SStack_38.fields._index;
  (__return_storage_ptr__->fields).m_Object.fields._current.fields.key = SStack_38.fields._current.fields.key;
  (__return_storage_ptr__->fields).m_Object.fields._current.fields.value =
       SStack_38.fields._current.fields.value;
  (__return_storage_ptr__->fields).m_Object.fields._getEnumeratorRetType =
       SStack_38.fields._getEnumeratorRetType;
  *(undefined4 *)&(__return_storage_ptr__->fields).m_Object.fields.field_0x24 = SStack_38.fields._36_4_;
  (__return_storage_ptr__->fields).type = 2;
  Il2CppCodeGenWriteBarrier((void **)&(__return_storage_ptr__->fields).m_Object);
  (__return_storage_ptr__->fields).m_Array.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  (__return_storage_ptr__->fields).m_Array.fields._index = 0;
  (__return_storage_ptr__->fields).m_Array.fields._version = 0;
  (__return_storage_ptr__->fields).m_Array.fields._current = (SimpleJSONFixed_JSONNode_o *)0x0;
  return __return_storage_ptr__;
}


// SimpleJSONFixed.JSONObject$$get_Item
// il2cpp: SimpleJSONFixed_JSONNode_o* SimpleJSONFixed_JSONObject__get_Item (SimpleJSONFixed_JSONObject_o* __this, System_String_o* aKey, const MethodInfo* method);
// 0x5867b60

SimpleJSONFixed_JSONNode_o *
SimpleJSONFixed_JSONObject__get_Item
          (SimpleJSONFixed_JSONObject_o *__this,System_String_o *aKey,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *pSVar1;
  bool bVar2;
  SimpleJSONFixed_JSONNode_o *pSVar3;
  SimpleJSONFixed_JSONLazyCreator_o *__this_00;
  
  if (Il2CppMethodInitialized_07545105 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_JSONNode_ContainsKey);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_JSONNode_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONLazyCreator);
    Il2CppMethodInitialized_07545105 = '\x01';
  }
  pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).m_Dict;
  if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    bVar2 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                      (pSVar1,(Il2CppObject *)aKey,
                       (MethodInfo_4AAD6F0 *)
                       MethodInfo_System_Collections_Generic_Dictionary_string_JSONNode_ContainsKey);
    if (!bVar2) {
      __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONLazyCreator);
      if (Il2CppMethodInitialized_07545131 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
        Il2CppMethodInitialized_07545131 = '\x01';
      }
      if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
      }
      System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
      (__this_00->fields).m_Node = (SimpleJSONFixed_JSONNode_o *)__this;
      Il2CppCodeGenWriteBarrier(&(__this_00->fields).m_Node);
      (__this_00->fields).m_Key = aKey;
      Il2CppCodeGenWriteBarrier(&(__this_00->fields).m_Key);
      return (SimpleJSONFixed_JSONNode_o *)__this_00;
    }
    pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).m_Dict;
    if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      pSVar3 = System_Collections_Generic_Dictionary_object__object___get_Item
                         (pSVar1,(Il2CppObject *)aKey,
                          (MethodInfo_4AAD450 *)
                          MethodInfo_System_Collections_Generic_Dictionary_string_JSONNode_get_Item);
      return pSVar3;
    }
  }
  ThrowNullReferenceException();
}


// SimpleJSONFixed.JSONObject$$set_Item
// il2cpp: void SimpleJSONFixed_JSONObject__set_Item (SimpleJSONFixed_JSONObject_o* __this, System_String_o* aKey, SimpleJSONFixed_JSONNode_o* value, const MethodInfo* method);
// 0x5867cf0

void SimpleJSONFixed_JSONObject__set_Item
               (SimpleJSONFixed_JSONObject_o *__this,System_String_o *aKey,SimpleJSONFixed_JSONNode_o *value,
               MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *pSVar1;
  bool bVar2;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_00;
  SimpleJSONFixed_JSONNull_c *method_01;
  
  method_00 = (MethodInfo *)value;
  if (Il2CppMethodInitialized_07545106 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_JSONNode_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_JSONNode_ContainsKey);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_JSONNode_set_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNull);
    Il2CppMethodInitialized_07545106 = '\x01';
    method_00 = extraout_RDX;
  }
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
    method_00 = extraout_RDX_00;
  }
  bVar2 = SimpleJSONFixed_JSONNode__op_Equality(value,(Il2CppObject *)0x0,method_00);
  if (bVar2) {
    method_01 = TypeInfo_SimpleJSONFixed_JSONNull;
    if ((TypeInfo_SimpleJSONFixed_JSONNull->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNull);
    }
    value = (SimpleJSONFixed_JSONNode_o *)SimpleJSONFixed_JSONNull__CreateOrGet((MethodInfo *)method_01);
  }
  pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).m_Dict;
  if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    bVar2 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                      (pSVar1,(Il2CppObject *)aKey,
                       (MethodInfo_4AAD6F0 *)
                       MethodInfo_System_Collections_Generic_Dictionary_string_JSONNode_ContainsKey);
    pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).m_Dict;
    if (bVar2) {
      if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
        System_Collections_Generic_Dictionary_object__object___set_Item
                  (pSVar1,(Il2CppObject *)aKey,(Il2CppObject *)value,
                   (MethodInfo_4AAD4C0 *)
                   MethodInfo_System_Collections_Generic_Dictionary_string_JSONNode_set_Item);
        return;
      }
    }
    else if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      System_Collections_Generic_Dictionary_object__object___Add
                (pSVar1,(Il2CppObject *)aKey,(Il2CppObject *)value,
                 (MethodInfo_4AAD4E0 *)MethodInfo_System_Collections_Generic_Dictionary_string_JSONNode_Add);
      return;
    }
  }
  ThrowNullReferenceException();
}


// SimpleJSONFixed.JSONObject$$get_Item
// il2cpp: SimpleJSONFixed_JSONNode_o* SimpleJSONFixed_JSONObject__get_Item (SimpleJSONFixed_JSONObject_o* __this, int32_t aIndex, const MethodInfo* method);
// 0x5867e00

SimpleJSONFixed_JSONNode_o *
SimpleJSONFixed_JSONObject__get_Item_5767e00
          (SimpleJSONFixed_JSONObject_o *__this,int32_t aIndex,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  int32_t iVar1;
  System_Collections_Generic_KeyValuePair_object__object__o SVar2;
  
  if (Il2CppMethodInitialized_07545107 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_JSONNode_get_Count);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Linq_Enumerable_ElementAt_KeyValuePair_string_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_KeyValuePair_string_JSONNode_get_Value);
    Il2CppMethodInitialized_07545107 = '\x01';
  }
  if (-1 < aIndex) {
    __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).m_Dict;
    if (__this_00 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      ThrowNullReferenceException();
    }
    iVar1 = System_Collections_Generic_Dictionary_object__object___get_Count
                      (__this_00,
                       (MethodInfo_4AAD0E0 *)
                       MethodInfo_System_Collections_Generic_Dictionary_string_JSONNode_get_Count);
    if (aIndex < iVar1) {
      SVar2 = System_Linq_Enumerable__ElementAt_KeyValuePair_object__object__
                        ((System_Collections_Generic_IEnumerable_TSource__o *)(__this->fields).m_Dict,aIndex,
                         (MethodInfo_34E8F20 *)
                         MethodInfo_System_Linq_Enumerable_ElementAt_KeyValuePair_string_JSONNode);
      return (SimpleJSONFixed_JSONNode_o *)SVar2.fields.value;
    }
  }
  return (SimpleJSONFixed_JSONNode_o *)0x0;
}


// SimpleJSONFixed.JSONObject$$set_Item
// il2cpp: void SimpleJSONFixed_JSONObject__set_Item (SimpleJSONFixed_JSONObject_o* __this, int32_t aIndex, SimpleJSONFixed_JSONNode_o* value, const MethodInfo* method);
// 0x5867e90

void SimpleJSONFixed_JSONObject__set_Item_5767e90
               (SimpleJSONFixed_JSONObject_o *__this,int32_t aIndex,SimpleJSONFixed_JSONNode_o *value,
               MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *pSVar1;
  bool bVar2;
  int32_t iVar3;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_00;
  SimpleJSONFixed_JSONNull_c *method_01;
  System_Collections_Generic_KeyValuePair_object__object__o SVar4;
  
  method_00 = (MethodInfo *)value;
  if (Il2CppMethodInitialized_07545108 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_JSONNode_get_Count);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_JSONNode_set_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Linq_Enumerable_ElementAt_KeyValuePair_string_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNull);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_KeyValuePair_string_JSONNode_get_Key);
    Il2CppMethodInitialized_07545108 = '\x01';
    method_00 = extraout_RDX;
  }
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
    method_00 = extraout_RDX_00;
  }
  bVar2 = SimpleJSONFixed_JSONNode__op_Equality(value,(Il2CppObject *)0x0,method_00);
  if (bVar2) {
    method_01 = TypeInfo_SimpleJSONFixed_JSONNull;
    if ((TypeInfo_SimpleJSONFixed_JSONNull->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNull);
    }
    value = (SimpleJSONFixed_JSONNode_o *)SimpleJSONFixed_JSONNull__CreateOrGet((MethodInfo *)method_01);
  }
  if (aIndex < 0) {
    return;
  }
  pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).m_Dict;
  if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    iVar3 = System_Collections_Generic_Dictionary_object__object___get_Count
                      (pSVar1,(MethodInfo_4AAD0E0 *)
                              MethodInfo_System_Collections_Generic_Dictionary_string_JSONNode_get_Count);
    if (iVar3 <= aIndex) {
      return;
    }
    SVar4 = System_Linq_Enumerable__ElementAt_KeyValuePair_object__object__
                      ((System_Collections_Generic_IEnumerable_TSource__o *)(__this->fields).m_Dict,aIndex,
                       (MethodInfo_34E8F20 *)
                       MethodInfo_System_Linq_Enumerable_ElementAt_KeyValuePair_string_JSONNode);
    pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).m_Dict;
    if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      System_Collections_Generic_Dictionary_object__object___set_Item
                (pSVar1,SVar4.fields.key,(Il2CppObject *)value,
                 (MethodInfo_4AAD4C0 *)
                 MethodInfo_System_Collections_Generic_Dictionary_string_JSONNode_set_Item);
      return;
    }
  }
  ThrowNullReferenceException();
}


// SimpleJSONFixed.JSONObject$$get_Count
// il2cpp: int32_t SimpleJSONFixed_JSONObject__get_Count (SimpleJSONFixed_JSONObject_o* __this, const MethodInfo* method);
// 0x5867fa0

int32_t SimpleJSONFixed_JSONObject__get_Count(SimpleJSONFixed_JSONObject_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  int32_t iVar1;
  
  if (Il2CppMethodInitialized_07545109 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_JSONNode_get_Count);
    Il2CppMethodInitialized_07545109 = '\x01';
  }
  __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).m_Dict;
  if (__this_00 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    ThrowNullReferenceException();
  }
  iVar1 = System_Collections_Generic_Dictionary_object__object___get_Count
                    (__this_00,
                     (MethodInfo_4AAD0E0 *)
                     MethodInfo_System_Collections_Generic_Dictionary_string_JSONNode_get_Count);
  return iVar1;
}


// SimpleJSONFixed.JSONObject$$Add
// il2cpp: void SimpleJSONFixed_JSONObject__Add (SimpleJSONFixed_JSONObject_o* __this, System_String_o* aKey, SimpleJSONFixed_JSONNode_o* aItem, const MethodInfo* method);
// 0x5867fe0

void SimpleJSONFixed_JSONObject__Add
               (SimpleJSONFixed_JSONObject_o *__this,System_String_o *aKey,SimpleJSONFixed_JSONNode_o *aItem,
               MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *pSVar1;
  bool bVar2;
  System_String_o *key;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_00;
  SimpleJSONFixed_JSONNull_c *method_01;
  System_Guid_o SStack_30;
  
  method_00 = (MethodInfo *)aItem;
  if (Il2CppMethodInitialized_0754510a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_JSONNode_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_JSONNode_ContainsKey);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_JSONNode_set_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNull);
    Il2CppMethodInitialized_0754510a = '\x01';
    method_00 = extraout_RDX;
  }
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
    method_00 = extraout_RDX_00;
  }
  bVar2 = SimpleJSONFixed_JSONNode__op_Equality(aItem,(Il2CppObject *)0x0,method_00);
  if (bVar2) {
    method_01 = TypeInfo_SimpleJSONFixed_JSONNull;
    if ((TypeInfo_SimpleJSONFixed_JSONNull->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNull);
    }
    aItem = (SimpleJSONFixed_JSONNode_o *)SimpleJSONFixed_JSONNull__CreateOrGet((MethodInfo *)method_01);
  }
  pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).m_Dict;
  if (aKey == (System_String_o *)0x0) {
    SStack_30 = System_Guid__NewGuid((MethodInfo *)0x0);
    key = System_Guid__ToString(&SStack_30,(MethodInfo *)0x0);
    if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      System_Collections_Generic_Dictionary_object__object___Add
                (pSVar1,(Il2CppObject *)key,(Il2CppObject *)aItem,
                 (MethodInfo_4AAD4E0 *)MethodInfo_System_Collections_Generic_Dictionary_string_JSONNode_Add);
      return;
    }
  }
  else if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    bVar2 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                      (pSVar1,(Il2CppObject *)aKey,
                       (MethodInfo_4AAD6F0 *)
                       MethodInfo_System_Collections_Generic_Dictionary_string_JSONNode_ContainsKey);
    pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).m_Dict;
    if (bVar2) {
      if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
        System_Collections_Generic_Dictionary_object__object___set_Item
                  (pSVar1,(Il2CppObject *)aKey,(Il2CppObject *)aItem,
                   (MethodInfo_4AAD4C0 *)
                   MethodInfo_System_Collections_Generic_Dictionary_string_JSONNode_set_Item);
        return;
      }
    }
    else if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      System_Collections_Generic_Dictionary_object__object___Add
                (pSVar1,(Il2CppObject *)aKey,(Il2CppObject *)aItem,
                 (MethodInfo_4AAD4E0 *)MethodInfo_System_Collections_Generic_Dictionary_string_JSONNode_Add);
      return;
    }
  }
  ThrowNullReferenceException();
}


// SimpleJSONFixed.JSONObject$$Remove
// il2cpp: SimpleJSONFixed_JSONNode_o* SimpleJSONFixed_JSONObject__Remove (SimpleJSONFixed_JSONObject_o* __this, System_String_o* aKey, const MethodInfo* method);
// 0x5868150

SimpleJSONFixed_JSONNode_o *
SimpleJSONFixed_JSONObject__Remove
          (SimpleJSONFixed_JSONObject_o *__this,System_String_o *aKey,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *pSVar1;
  bool bVar2;
  SimpleJSONFixed_JSONNode_o *pSVar3;
  
  if (Il2CppMethodInitialized_0754510b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_JSONNode_ContainsKey);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_JSONNode_Remove);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_JSONNode_get_Item);
    Il2CppMethodInitialized_0754510b = '\x01';
  }
  pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).m_Dict;
  if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    bVar2 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                      (pSVar1,(Il2CppObject *)aKey,
                       (MethodInfo_4AAD6F0 *)
                       MethodInfo_System_Collections_Generic_Dictionary_string_JSONNode_ContainsKey);
    if (!bVar2) {
      return (SimpleJSONFixed_JSONNode_o *)0x0;
    }
    pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).m_Dict;
    if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      pSVar3 = System_Collections_Generic_Dictionary_object__object___get_Item
                         (pSVar1,(Il2CppObject *)aKey,
                          (MethodInfo_4AAD450 *)
                          MethodInfo_System_Collections_Generic_Dictionary_string_JSONNode_get_Item);
      pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).m_Dict;
      if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
        System_Collections_Generic_Dictionary_object__object___Remove
                  (pSVar1,(Il2CppObject *)aKey,
                   (MethodInfo_4AAED10 *)
                   MethodInfo_System_Collections_Generic_Dictionary_string_JSONNode_Remove);
        return pSVar3;
      }
    }
  }
  ThrowNullReferenceException();
}


// SimpleJSONFixed.JSONObject$$Remove
// il2cpp: SimpleJSONFixed_JSONNode_o* SimpleJSONFixed_JSONObject__Remove (SimpleJSONFixed_JSONObject_o* __this, int32_t aIndex, const MethodInfo* method);
// 0x5868200

SimpleJSONFixed_JSONNode_o *
SimpleJSONFixed_JSONObject__Remove_5768200
          (SimpleJSONFixed_JSONObject_o *__this,int32_t aIndex,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *pSVar1;
  int32_t iVar2;
  System_Collections_Generic_KeyValuePair_object__object__o SVar3;
  
  if (Il2CppMethodInitialized_0754510c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_JSONNode_Remove);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_JSONNode_get_Count);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Linq_Enumerable_ElementAt_KeyValuePair_string_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_KeyValuePair_string_JSONNode_get_Key);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_KeyValuePair_string_JSONNode_get_Value);
    Il2CppMethodInitialized_0754510c = '\x01';
  }
  if (aIndex < 0) {
    return (SimpleJSONFixed_JSONNode_o *)0x0;
  }
  pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).m_Dict;
  if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    iVar2 = System_Collections_Generic_Dictionary_object__object___get_Count
                      (pSVar1,(MethodInfo_4AAD0E0 *)
                              MethodInfo_System_Collections_Generic_Dictionary_string_JSONNode_get_Count);
    if (iVar2 <= aIndex) {
      return (SimpleJSONFixed_JSONNode_o *)0x0;
    }
    SVar3 = System_Linq_Enumerable__ElementAt_KeyValuePair_object__object__
                      ((System_Collections_Generic_IEnumerable_TSource__o *)(__this->fields).m_Dict,aIndex,
                       (MethodInfo_34E8F20 *)
                       MethodInfo_System_Linq_Enumerable_ElementAt_KeyValuePair_string_JSONNode);
    pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).m_Dict;
    if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      System_Collections_Generic_Dictionary_object__object___Remove
                (pSVar1,SVar3.fields.key,
                 (MethodInfo_4AAED10 *)MethodInfo_System_Collections_Generic_Dictionary_string_JSONNode_Remove
                );
      return (SimpleJSONFixed_JSONNode_o *)SVar3.fields.value;
    }
  }
  ThrowNullReferenceException();
}


// SimpleJSONFixed.JSONObject$$Remove
// il2cpp: SimpleJSONFixed_JSONNode_o* SimpleJSONFixed_JSONObject__Remove (SimpleJSONFixed_JSONObject_o* __this, SimpleJSONFixed_JSONNode_o* aNode, const MethodInfo* method);
// 0x58682c0
// eh: try 0x586837c..0x58683f5 -> pad 0x58683fd (+4 call sites) catch Il2CppExceptionWrapper, cleanup [managed catch: runtime default class]
// eh: try 0x5868421..0x5868454 -> pad 0x5868454 (+1 call sites) cleanup
// eh: try 0x5868457..0x586845c -> pad 0x5868464 catch (...) [compiler noexcept guard]
// asm: 34 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x58683f5: jmp 0x58683fd
// asm:   0x58683f7: jmp 0x58683fd
// asm:   0x58683f9: jmp 0x58683fd
// asm:   0x58683fb: jmp 0x58683fd
// asm:   0x58683fd: mov rbx, rax
// asm:   0x5868400: cmp edx, 1
// asm:   0x5868403: jne 0x586845c
// asm:   0x5868405: mov rdi, rbx
// asm:   0x5868408: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x586840d: mov rbx, rax
// asm:   0x5868410: lea rax, [rip + 0x1cee2b1]
// asm:   0x5868417: mov rdi, qword ptr [rax + 0x10]
// asm:   0x586841b: mov rax, qword ptr [rbx]
// asm:   0x586841e: mov rsi, qword ptr [rax]
// asm:   0x5868421: call 0x30d6910  ; il2cpp_runtime_helper_030d6910()
// asm:   0x5868426: test al, al
// asm:   0x5868428: je 0x5868433
// asm:   0x586842a: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x586842f: xor eax, eax
// asm:   0x5868431: jmp 0x58683e1
// asm:   0x5868433: mov edi, 8
// asm:   0x5868438: call 0x6e255b0  ; __cxa_allocate_exception()
// asm:   0x586843d: mov rcx, qword ptr [rbx]
// asm:   0x5868440: mov qword ptr [rax], rcx
// asm:   0x5868443: lea rsi, [rip + 0x15c50b6]
// asm:   0x586844a: mov rdi, rax
// asm:   0x586844d: xor edx, edx
// asm:   0x586844f: call 0x6e255c0  ; __cxa_throw()
// asm:   0x5868454: mov rbx, rax
// asm:   0x5868457: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x586845c: mov rdi, rbx
// asm:   0x586845f: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5868464: mov rdi, rax
// asm:   0x5868467: call 0x2ab61e0  ; __clang_call_terminate()

SimpleJSONFixed_JSONNode_o *
SimpleJSONFixed_JSONObject__Remove_57682c0
          (SimpleJSONFixed_JSONObject_o *__this,SimpleJSONFixed_JSONNode_o *aNode,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_string__JSONNode__o *source;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  SimpleJSONFixed_JSONObject___c__DisplayClass21_0_o *__this_01;
  System_Func_T__TResult__o *__this_02;
  System_Collections_Generic_IEnumerable_TSource__o *source_00;
  System_Collections_Generic_KeyValuePair_object__object__o SVar1;
  
  if (Il2CppMethodInitialized_0754510d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_JSONNode_Remove);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Linq_Enumerable_First_KeyValuePair_string_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Linq_Enumerable_Where_KeyValuePair_string_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_KeyValuePair_string_JSONNode_bool);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_KeyValuePair_string_JSONNode_get_Key);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_SimpleJSONFixed_JSONObject_c__DisplayClass21_0_Remove_b__0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONObject_c__DisplayClass21_0);
    Il2CppMethodInitialized_0754510d = '\x01';
  }
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONObject_c__DisplayClass21_0);
  System_Object___ctor((Il2CppObject *)__this_01,(MethodInfo *)0x0);
  if (__this_01 == (SimpleJSONFixed_JSONObject___c__DisplayClass21_0_o *)0x0) {
    ThrowNullReferenceException();
  }
  (__this_01->fields).aNode = aNode;
  Il2CppCodeGenWriteBarrier(&(__this_01->fields).aNode);
  source = (__this->fields).m_Dict;
  __this_02 = (System_Func_T__TResult__o *)
              il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_KeyValuePair_string_JSONNode_bool)
  ;
  System_Func_KeyValuePair_object__object___bool____ctor
            (__this_02,(Il2CppObject *)__this_01,
             (intptr_t)MethodInfo_SimpleJSONFixed_JSONObject_c__DisplayClass21_0_Remove_b__0,
             (MethodInfo_4F10020 *)0x0);
  source_00 = System_Linq_Enumerable__Where_KeyValuePair_object__object__
                        ((System_Collections_Generic_IEnumerable_TSource__o *)source,
                         (System_Func_TSource__bool__o *)__this_02,
                         (MethodInfo_3501CC0 *)
                         MethodInfo_System_Linq_Enumerable_Where_KeyValuePair_string_JSONNode);
  SVar1 = System_Linq_Enumerable__First_KeyValuePair_object__object__
                    (source_00,
                     (MethodInfo_34EA650 *)
                     MethodInfo_System_Linq_Enumerable_First_KeyValuePair_string_JSONNode);
  __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).m_Dict;
  if (__this_00 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_Dictionary_object__object___Remove
            (__this_00,SVar1.fields.key,
             (MethodInfo_4AAED10 *)MethodInfo_System_Collections_Generic_Dictionary_string_JSONNode_Remove);
  return (__this_01->fields).aNode;
}


// SimpleJSONFixed.JSONObject$$Clear
// il2cpp: void SimpleJSONFixed_JSONObject__Clear (SimpleJSONFixed_JSONObject_o* __this, const MethodInfo* method);
// 0x5868480

void SimpleJSONFixed_JSONObject__Clear(SimpleJSONFixed_JSONObject_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  
  if (Il2CppMethodInitialized_0754510e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_JSONNode_Clear);
    Il2CppMethodInitialized_0754510e = '\x01';
  }
  __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).m_Dict;
  if (__this_00 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_Dictionary_object__object___Clear
            (__this_00,
             (MethodInfo_4AAD690 *)MethodInfo_System_Collections_Generic_Dictionary_string_JSONNode_Clear);
  return;
}


// SimpleJSONFixed.JSONObject$$Clone
// il2cpp: SimpleJSONFixed_JSONNode_o* SimpleJSONFixed_JSONObject__Clone (SimpleJSONFixed_JSONObject_o* __this, const MethodInfo* method);
// 0x58684c0
// eh: try 0x58685a4..0x586864b -> pad 0x5868653 (+5 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x586866d..0x5868672 -> pad 0x5868691 cleanup
// eh: try 0x5868694..0x586869e -> pad 0x58686a6 catch (...) [compiler noexcept guard]
// asm: 30 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5868596: lea r12, [rip + 0x1a27a7b]  ; MethodInfo_System_Collections_Generic_Dictionary_Enumerator_string_JSONNode_MoveNext
// asm:   0x586859d: mov r14, rsp
// asm:   0x586864b: jmp 0x5868655
// asm:   0x586864d: jmp 0x5868655
// asm:   0x586864f: jmp 0x5868655
// asm:   0x5868651: jmp 0x5868655
// asm:   0x5868653: jmp 0x5868655
// asm:   0x5868655: mov r14, rax
// asm:   0x5868658: cmp edx, 1
// asm:   0x586865b: jne 0x5868694
// asm:   0x586865d: mov rdi, r14
// asm:   0x5868660: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5868665: mov r14, qword ptr [rax]
// asm:   0x5868668: mov qword ptr [rsp + 0x28], r14
// asm:   0x586866d: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5868672: lea rax, [rip + 0x1a27997]  ; MethodInfo_System_Collections_Generic_Dictionary_Enumerator_string_JSONNode_Dispose
// asm:   0x5868679: mov rsi, qword ptr [rax]
// asm:   0x586867c: mov rdi, rsp
// asm:   0x586867f: call 0x4de67f0  ; System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose()
// asm:   0x5868684: test r14, r14
// asm:   0x5868687: je 0x5868613
// asm:   0x5868689: mov rdi, r14
// asm:   0x586868c: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5868691: mov r14, rax
// asm:   0x5868694: lea rdi, [rsp + 0x28]
// asm:   0x5868699: call 0x2fcf4c0  ; il2cpp_runtime_helper_02fcf4c0()
// asm:   0x586869e: mov rdi, r14
// asm:   0x58686a1: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x58686a6: mov rdi, rax
// asm:   0x58686a9: call 0x2ab61e0  ; __clang_call_terminate()

SimpleJSONFixed_JSONNode_o *
SimpleJSONFixed_JSONObject__Clone(SimpleJSONFixed_JSONObject_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  Il2CppObject *pIVar1;
  bool bVar2;
  SimpleJSONFixed_JSONObject_o *__this_01;
  SimpleJSONFixed_JSONNode_o *pSVar3;
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o SStack_58;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (Il2CppMethodInitialized_0754510f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_JSONNode_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_Enumerator_string_JSONNode_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_Enumerator_string_JSONNode_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_Enumerator_string_JSONNode_get_Current);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONObject);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_KeyValuePair_string_JSONNode_get_Key);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_KeyValuePair_string_JSONNode_get_Value);
    Il2CppMethodInitialized_0754510f = '\x01';
  }
  SStack_58.fields._current.fields.key = (Il2CppObject *)0x0;
  SStack_58.fields._current.fields.value = (Il2CppObject *)0x0;
  SStack_58.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  SStack_58.fields._version = 0;
  SStack_58.fields._index = 0;
  SStack_58.fields._getEnumeratorRetType = 0;
  SStack_58.fields._36_4_ = 0;
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONObject);
  SimpleJSONFixed_JSONObject___ctor(__this_01,method);
  __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).m_Dict;
  if (__this_00 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_Dictionary_object__object___GetEnumerator
            (&SStack_58,__this_00,
             (MethodInfo_4AAD970 *)
             MethodInfo_System_Collections_Generic_Dictionary_string_JSONNode_GetEnumerator);
  uStack_30 = 0;
  puStack_28 = (undefined1 *)&SStack_58;
  if (__this_01 == (SimpleJSONFixed_JSONObject_o *)0x0) {
    puStack_28 = (undefined1 *)&SStack_58;
    bVar2 = System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext
                      ((System_Collections_Generic_Dictionary_Enumerator_object__object__o *)&SStack_58,
                       (MethodInfo_4CE66D0 *)
                       MethodInfo_System_Collections_Generic_Dictionary_Enumerator_string_JSONNode_MoveNext);
    if (bVar2) {
      if (SStack_58.fields._current.fields.value != (Il2CppObject *)0x0) {
        (*(SStack_58.fields._current.fields.value)->klass->vtable[0x1a].methodPtr)
                  (SStack_58.fields._current.fields.value,
                   (SStack_58.fields._current.fields.value)->klass->vtable[0x1a].method);
        ThrowNullReferenceException();
      }
label_05868631:
      ThrowNullReferenceException();
    }
  }
  else {
    while (bVar2 = System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext
                             ((System_Collections_Generic_Dictionary_Enumerator_object__object__o *)&SStack_58
                              ,(MethodInfo_4CE66D0 *)
                               MethodInfo_System_Collections_Generic_Dictionary_Enumerator_string_JSONNode_MoveNext
                             ), pIVar1 = SStack_58.fields._current.fields.key, bVar2) {
      if (SStack_58.fields._current.fields.value == (Il2CppObject *)0x0) goto label_05868631;
      pSVar3 = (SimpleJSONFixed_JSONNode_o *)
               (*(SStack_58.fields._current.fields.value)->klass->vtable[0x1a].methodPtr)
                         (SStack_58.fields._current.fields.value,
                          (SStack_58.fields._current.fields.value)->klass->vtable[0x1a].method);
      (*(__this_01->klass->vtable)._20_Add.methodPtr)
                (__this_01,(System_String_o *)pIVar1,pSVar3,(__this_01->klass->vtable)._20_Add.method);
    }
  }
  System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose
            ((System_Collections_Generic_Dictionary_Enumerator_object__object__o *)&SStack_58,
             (MethodInfo_4CE67F0 *)
             MethodInfo_System_Collections_Generic_Dictionary_Enumerator_string_JSONNode_Dispose);
  return (SimpleJSONFixed_JSONNode_o *)__this_01;
}


// SimpleJSONFixed.JSONObject$$HasKey
// il2cpp: bool SimpleJSONFixed_JSONObject__HasKey (SimpleJSONFixed_JSONObject_o* __this, System_String_o* aKey, const MethodInfo* method);
// 0x58686b0

bool SimpleJSONFixed_JSONObject__HasKey
               (SimpleJSONFixed_JSONObject_o *__this,System_String_o *aKey,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  bool bVar1;
  
  if (Il2CppMethodInitialized_07545110 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_JSONNode_ContainsKey);
    Il2CppMethodInitialized_07545110 = '\x01';
  }
  __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).m_Dict;
  if (__this_00 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    ThrowNullReferenceException();
  }
  bVar1 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                    (__this_00,(Il2CppObject *)aKey,
                     (MethodInfo_4AAD6F0 *)
                     MethodInfo_System_Collections_Generic_Dictionary_string_JSONNode_ContainsKey);
  return bVar1;
}


// SimpleJSONFixed.JSONObject$$GetValueOrDefault
// il2cpp: SimpleJSONFixed_JSONNode_o* SimpleJSONFixed_JSONObject__GetValueOrDefault (SimpleJSONFixed_JSONObject_o* __this, System_String_o* aKey, SimpleJSONFixed_JSONNode_o* aDefault, const MethodInfo* method);
// 0x5868700

SimpleJSONFixed_JSONNode_o *
SimpleJSONFixed_JSONObject__GetValueOrDefault
          (SimpleJSONFixed_JSONObject_o *__this,System_String_o *aKey,SimpleJSONFixed_JSONNode_o *aDefault,
          MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  bool bVar1;
  Il2CppObject *pIStack_20;
  
  if (Il2CppMethodInitialized_07545111 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_JSONNode_TryGetValue);
    Il2CppMethodInitialized_07545111 = '\x01';
  }
  pIStack_20 = (Il2CppObject *)0x0;
  __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).m_Dict;
  if (__this_00 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    ThrowNullReferenceException();
  }
  bVar1 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                    (__this_00,(Il2CppObject *)aKey,&pIStack_20,
                     (MethodInfo_4AAF440 *)
                     MethodInfo_System_Collections_Generic_Dictionary_string_JSONNode_TryGetValue);
  if (bVar1) {
    aDefault = (SimpleJSONFixed_JSONNode_o *)pIStack_20;
  }
  return (SimpleJSONFixed_JSONNode_o *)(Il2CppObject *)aDefault;
}


// SimpleJSONFixed.JSONObject$$get_Children
// il2cpp: System_Collections_Generic_IEnumerable_JSONNode__o* SimpleJSONFixed_JSONObject__get_Children (SimpleJSONFixed_JSONObject_o* __this, const MethodInfo* method);
// 0x5868780

System_Collections_Generic_IEnumerable_JSONNode__o *
SimpleJSONFixed_JSONObject__get_Children(SimpleJSONFixed_JSONObject_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  SimpleJSONFixed_JSONObject__get_Children_d__27_o *__this_00;
  
  if (Il2CppMethodInitialized_07545112 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONObject_get_Children_d__27);
    Il2CppMethodInitialized_07545112 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONObject_get_Children_d__27)
  ;
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).__1__state = -2;
  iVar1 = System_Environment__get_CurrentManagedThreadId((MethodInfo *)0x0);
  (__this_00->fields).__l__initialThreadId = iVar1;
  (__this_00->fields).__4__this = __this;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this);
  return (System_Collections_Generic_IEnumerable_JSONNode__o *)__this_00;
}


// SimpleJSONFixed.JSONObject$$WriteToStringBuilder
// il2cpp: void SimpleJSONFixed_JSONObject__WriteToStringBuilder (SimpleJSONFixed_JSONObject_o* __this, System_Text_StringBuilder_o* aSB, int32_t aIndent, int32_t aIndentInc, int32_t aMode, const MethodInfo* method);
// 0x5868820
// eh: try 0x586896a..0x5868aef -> pad 0x5868b10 (+14 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5868b2d..0x5868b32 -> pad 0x5868b57 cleanup
// eh: try 0x5868b5a..0x5868b64 -> pad 0x5868b6c catch (...) [compiler noexcept guard]
// asm: 38 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5868af4: jmp 0x5868b10
// asm:   0x5868af6: jmp 0x5868b10
// asm:   0x5868af8: jmp 0x5868b10
// asm:   0x5868afa: jmp 0x5868b10
// asm:   0x5868afc: jmp 0x5868b10
// asm:   0x5868afe: jmp 0x5868b10
// asm:   0x5868b00: jmp 0x5868b10
// asm:   0x5868b02: jmp 0x5868b10
// asm:   0x5868b04: jmp 0x5868b10
// asm:   0x5868b06: jmp 0x5868b10
// asm:   0x5868b08: jmp 0x5868b10
// asm:   0x5868b0a: jmp 0x5868b10
// asm:   0x5868b0c: jmp 0x5868b10
// asm:   0x5868b0e: jmp 0x5868b10
// asm:   0x5868b10: mov r14, rax
// asm:   0x5868b13: mov rbp, qword ptr [rsp + 8]
// asm:   0x5868b18: cmp edx, 1
// asm:   0x5868b1b: jne 0x5868b5a
// asm:   0x5868b1d: mov rdi, r14
// asm:   0x5868b20: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5868b25: mov r14, qword ptr [rax]
// asm:   0x5868b28: mov qword ptr [rsp + 0x50], r14
// asm:   0x5868b2d: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5868b32: lea rax, [rip + 0x1a274d7]  ; MethodInfo_System_Collections_Generic_Dictionary_Enumerator_string_JSONNode_Dispose
// asm:   0x5868b39: mov rsi, qword ptr [rax]
// asm:   0x5868b3c: lea rdi, [rsp + 0x20]
// asm:   0x5868b41: call 0x4de67f0  ; System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose()
// asm:   0x5868b46: test r14, r14
// asm:   0x5868b49: je 0x5868a9b
// asm:   0x5868b4f: mov rdi, r14
// asm:   0x5868b52: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5868b57: mov r14, rax
// asm:   0x5868b5a: lea rdi, [rsp + 0x50]
// asm:   0x5868b5f: call 0x2fcf4f0  ; il2cpp_runtime_helper_02fcf4f0()
// asm:   0x5868b64: mov rdi, r14
// asm:   0x5868b67: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5868b6c: mov rdi, rax
// asm:   0x5868b6f: call 0x2ab61e0  ; __clang_call_terminate()

void SimpleJSONFixed_JSONObject__WriteToStringBuilder
               (SimpleJSONFixed_JSONObject_o *__this,System_Text_StringBuilder_o *aSB,int32_t aIndent,
               int32_t aIndentInc,int32_t aMode,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  Il2CppObject *pIVar1;
  bool bVar2;
  System_Text_StringBuilder_o *pSVar3;
  System_String_o *pSVar4;
  undefined4 in_register_0000000c;
  bool bVar5;
  MethodInfo *method_00;
  undefined1 auStack_88 [8];
  undefined1 *puStack_80;
  System_String_o *pSStack_78;
  Il2CppObject *pIStack_70;
  undefined8 uStack_68;
  undefined1 auStack_58 [16];
  System_String_o *pSStack_48;
  Il2CppObject *pIStack_40;
  int32_t iStack_38;
  undefined4 uStack_34;
  
  if (Il2CppMethodInitialized_07545113 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_JSONNode_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_Enumerator_string_JSONNode_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_Enumerator_string_JSONNode_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_Enumerator_string_JSONNode_get_Current);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_KeyValuePair_string_JSONNode_get_Key);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_KeyValuePair_string_JSONNode_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&" : ");
    Il2CppMethodInitialized_07545113 = '\x01';
  }
  pSStack_78 = (System_String_o *)0x0;
  pIStack_70 = (Il2CppObject *)0x0;
  auStack_88 = (undefined1  [8])0x0;
  puStack_80 = (undefined1 *)0x0;
  uStack_68._0_4_ = 0;
  uStack_68._4_4_ = 0;
  if (aSB != (System_Text_StringBuilder_o *)0x0) {
    System_Text_StringBuilder__Append_530f6a0(aSB,0x7b,(MethodInfo *)0x0);
    if ((__this->fields).field1_0x8 != false) {
      aMode = 0;
    }
    __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).m_Dict;
    if (__this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      System_Collections_Generic_Dictionary_object__object___GetEnumerator
                ((System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)auStack_58,__this_00,
                 (MethodInfo_4AAD970 *)
                 MethodInfo_System_Collections_Generic_Dictionary_string_JSONNode_GetEnumerator);
      uStack_68._0_4_ = iStack_38;
      uStack_68._4_4_ = uStack_34;
      pSStack_78 = pSStack_48;
      pIStack_70 = pIStack_40;
      auStack_88 = (undefined1  [8])auStack_58._0_8_;
      puStack_80 = (undefined1 *)auStack_58._8_8_;
      auStack_58._0_8_ = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
      auStack_58._8_8_ = auStack_88;
      bVar5 = true;
      while( true ) {
        bVar2 = System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext
                          ((System_Collections_Generic_Dictionary_Enumerator_object__object__o *)auStack_88,
                           (MethodInfo_4CE66D0 *)
                           MethodInfo_System_Collections_Generic_Dictionary_Enumerator_string_JSONNode_MoveNext
                          );
        pIVar1 = pIStack_70;
        pSVar4 = pSStack_78;
        if (!bVar2) break;
        if (!bVar5) {
          System_Text_StringBuilder__Append_530f6a0(aSB,0x2c,(MethodInfo *)0x0);
        }
        if (aMode == 1) {
          System_Text_StringBuilder__AppendLine(aSB,(MethodInfo *)0x0);
          System_Text_StringBuilder__Append(aSB,0x20,aIndentInc + aIndent,(MethodInfo *)0x0);
        }
        method_00 = (MethodInfo *)&g_data_00000022;
        pSVar3 = System_Text_StringBuilder__Append_530f6a0(aSB,0x22,(MethodInfo *)0x0);
        if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
        }
        pSVar4 = SimpleJSONFixed_JSONNode__Escape(pSVar4,method_00);
        if (pSVar3 == (System_Text_StringBuilder_o *)0x0) {
          ThrowNullReferenceException();
        }
        pSVar3 = System_Text_StringBuilder__Append_530ed80(pSVar3,pSVar4,(MethodInfo *)0x0);
        if (pSVar3 == (System_Text_StringBuilder_o *)0x0) {
          ThrowNullReferenceException();
        }
        System_Text_StringBuilder__Append_530f6a0(pSVar3,0x22,(MethodInfo *)0x0);
        if (aMode == 0) {
          System_Text_StringBuilder__Append_530f6a0(aSB,0x3a,(MethodInfo *)0x0);
        }
        else {
          System_Text_StringBuilder__Append_530ed80(aSB," : ",(MethodInfo *)0x0);
        }
        if (pIVar1 == (Il2CppObject *)0x0) {
          ThrowNullReferenceException();
        }
        bVar5 = false;
        (*pIVar1->klass->vtable[0x1f].methodPtr)
                  (pIVar1,aSB,(ulong)(uint)(aIndentInc + aIndent),CONCAT44(in_register_0000000c,aIndentInc),
                   (ulong)(uint)aMode,pIVar1->klass->vtable[0x1f].method);
      }
      System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose
                ((System_Collections_Generic_Dictionary_Enumerator_object__object__o *)auStack_88,
                 (MethodInfo_4CE67F0 *)
                 MethodInfo_System_Collections_Generic_Dictionary_Enumerator_string_JSONNode_Dispose);
      if (aMode == 1) {
        pSVar3 = System_Text_StringBuilder__AppendLine(aSB,(MethodInfo *)0x0);
        if (pSVar3 == (System_Text_StringBuilder_o *)0x0) goto label_05868aef;
        System_Text_StringBuilder__Append(pSVar3,0x20,aIndent,(MethodInfo *)0x0);
      }
      System_Text_StringBuilder__Append_530f6a0(aSB,0x7d,(MethodInfo *)0x0);
      return;
    }
  }
label_05868aef:
  ThrowNullReferenceException();
}


// SimpleJSONFixed.JSONObject$$.ctor
// il2cpp: void SimpleJSONFixed_JSONObject___ctor (SimpleJSONFixed_JSONObject_o* __this, const MethodInfo* method);
// 0x5865280

void SimpleJSONFixed_JSONObject___ctor(SimpleJSONFixed_JSONObject_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_string__JSONNode__o *__this_00;
  
  if (Il2CppMethodInitialized_07545114 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_JSONNode_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_Dictionary_string_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    Il2CppMethodInitialized_07545114 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_string_JSONNode);
  System_Collections_Generic_Dictionary_object__object____ctor
            ((System_Collections_Generic_Dictionary_object__object__o *)__this_00,
             (MethodInfo_4AAC8D0 *)MethodInfo_System_Collections_Generic_Dictionary_string_JSONNode_ctor);
  (__this->fields).m_Dict = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields).m_Dict);
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


