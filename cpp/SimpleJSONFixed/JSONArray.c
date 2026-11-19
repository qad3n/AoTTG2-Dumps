// Type: SimpleJSONFixed.JSONArray
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/SimpleJSONFixed/JSONArray.cs
// Prior real C# source (older reference): Assets/Scripts/Utility/SimpleJSON.cs
// --------------------------------

// SimpleJSONFixed.JSONArray.<get_Children>d__24$$.ctor
// il2cpp: void SimpleJSONFixed_JSONArray__get_Children_d__24___ctor (SimpleJSONFixed_JSONArray__get_Children_d__24_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x5867430

void SimpleJSONFixed_JSONArray__get_Children_d__24___ctor
               (SimpleJSONFixed_JSONArray__get_Children_d__24_o *__this,int32_t __1__state,MethodInfo *method)

{
  int32_t iVar1;
  
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  iVar1 = System_Environment__get_CurrentManagedThreadId((MethodInfo *)0x0);
  (__this->fields).__l__initialThreadId = iVar1;
  return;
}


// SimpleJSONFixed.JSONArray.<get_Children>d__24$$System.IDisposable.Dispose
// il2cpp: void SimpleJSONFixed_JSONArray__get_Children_d__24__System_IDisposable_Dispose (SimpleJSONFixed_JSONArray__get_Children_d__24_o* __this, const MethodInfo* method);
// 0x5867700

void SimpleJSONFixed_JSONArray__get_Children_d__24__System_IDisposable_Dispose
               (SimpleJSONFixed_JSONArray__get_Children_d__24_o *__this,MethodInfo *method)

{
  int iVar1;
  
  iVar1 = (__this->fields).__1__state;
  if ((iVar1 != 1) && (iVar1 != -3)) {
    return;
  }
  if (Il2CppMethodInitialized_07545102 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_JSONNode_Dispose);
    Il2CppMethodInitialized_07545102 = '\x01';
  }
  (__this->fields).__1__state = -1;
  System_Collections_Generic_List_Enumerator_object___Dispose
            ((System_Collections_Generic_List_Enumerator_object__o *)&(__this->fields).__7__wrap1,
             (MethodInfo_4C45C40 *)MethodInfo_System_Collections_Generic_List_Enumerator_JSONNode_Dispose);
  return;
}


// SimpleJSONFixed.JSONArray.<get_Children>d__24$$MoveNext
// il2cpp: bool SimpleJSONFixed_JSONArray__get_Children_d__24__MoveNext (SimpleJSONFixed_JSONArray__get_Children_d__24_o* __this, const MethodInfo* method);
// 0x5867750
// eh: try 0x58677dc..0x58678bf -> pad 0x58678c3 (+6 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x58678e3..0x58678e8 -> pad 0x58678fe cleanup
// eh: try 0x5867901..0x586790b -> pad 0x5867913 catch (...) [compiler noexcept guard]
// asm: 27 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x58678bf: jmp 0x58678cb
// asm:   0x58678c1: jmp 0x58678cb
// asm:   0x58678c3: jmp 0x58678cb
// asm:   0x58678c5: jmp 0x58678cb
// asm:   0x58678c7: jmp 0x58678cb
// asm:   0x58678c9: jmp 0x58678cb
// asm:   0x58678cb: mov rbx, rax
// asm:   0x58678ce: cmp edx, 1
// asm:   0x58678d1: jne 0x5867901
// asm:   0x58678d3: mov rdi, rbx
// asm:   0x58678d6: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x58678db: mov rbx, qword ptr [rax]
// asm:   0x58678de: mov qword ptr [rsp + 8], rbx
// asm:   0x58678e3: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x58678e8: test rbx, rbx
// asm:   0x58678eb: je 0x58678ad
// asm:   0x58678ed: mov rdi, qword ptr [rsp]
// asm:   0x58678f1: call 0x2fcf7c0  ; il2cpp_runtime_helper_02fcf7c0()
// asm:   0x58678f6: mov rdi, rbx
// asm:   0x58678f9: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x58678fe: mov rbx, rax
// asm:   0x5867901: lea rdi, [rsp + 8]
// asm:   0x5867906: call 0x2fcf4a0  ; il2cpp_runtime_helper_02fcf4a0()
// asm:   0x586790b: mov rdi, rbx
// asm:   0x586790e: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5867913: mov rdi, rax
// asm:   0x5867916: call 0x2ab61e0  ; __clang_call_terminate()

bool SimpleJSONFixed_JSONArray__get_Children_d__24__MoveNext
               (SimpleJSONFixed_JSONArray__get_Children_d__24_o *__this,MethodInfo *method)

{
  int iVar1;
  SimpleJSONFixed_JSONArray_o *pSVar2;
  System_Collections_Generic_List_object__o *__this_00;
  SimpleJSONFixed_JSONArray__get_Children_d__24_o *pSVar3;
  SimpleJSONFixed_JSONArray__get_Children_d__24_o **ppSVar4;
  bool bVar5;
  SimpleJSONFixed_JSONArray__get_Children_d__24_o *local_58;
  undefined8 local_50;
  undefined1 *local_48;
  System_Collections_Generic_List_Enumerator_T__o local_40;
  System_Collections_Generic_List_T__o *local_28;
  int32_t iStack_20;
  int32_t iStack_1c;
  Il2CppObject *local_18;
  
  local_58 = __this;
  if (Il2CppMethodInitialized_07545101 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_JSONNode_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_JSONNode_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_JSONNode_GetEnumerator);
    Il2CppMethodInitialized_07545101 = '\x01';
  }
  local_48 = (undefined1 *)&local_58;
  local_50 = 0;
  iVar1 = (__this->fields).__1__state;
  ppSVar4 = &local_58;
  if (iVar1 != 1) {
    if (iVar1 != 0) {
      return false;
    }
    pSVar2 = (__this->fields).__4__this;
    (__this->fields).__1__state = -1;
    if (pSVar2 == (SimpleJSONFixed_JSONArray_o *)0x0) {
      ThrowNullReferenceException();
    }
    __this_00 = (System_Collections_Generic_List_object__o *)(pSVar2->fields).m_List;
    if (__this_00 == (System_Collections_Generic_List_object__o *)0x0) {
      local_48 = (undefined1 *)&local_58;
      ThrowNullReferenceException();
    }
    local_48 = (undefined1 *)&local_58;
    System_Collections_Generic_List_object___GetEnumerator
              (&local_40,__this_00,
               (MethodInfo_395E050 *)MethodInfo_System_Collections_Generic_List_JSONNode_GetEnumerator);
    local_18 = local_40.fields._current;
    local_28 = local_40.fields._list;
    iStack_20 = local_40.fields._index;
    iStack_1c = local_40.fields._version;
    (local_58->fields).__7__wrap1.fields._current = (SimpleJSONFixed_JSONNode_o *)local_40.fields._current;
    (local_58->fields).__7__wrap1.fields._list = local_40.fields._list;
    (local_58->fields).__7__wrap1.fields._index = local_40.fields._index;
    (local_58->fields).__7__wrap1.fields._version = local_40.fields._version;
    Il2CppCodeGenWriteBarrier((void **)&(local_58->fields).__7__wrap1);
    __this = local_58;
    ppSVar4 = (SimpleJSONFixed_JSONArray__get_Children_d__24_o **)local_48;
  }
  local_48 = (undefined1 *)ppSVar4;
  (__this->fields).__1__state = -3;
  bVar5 = System_Collections_Generic_List_Enumerator_object___MoveNext
                    ((System_Collections_Generic_List_Enumerator_object__o *)&(__this->fields).__7__wrap1,
                     (MethodInfo_4C45C50 *)
                     MethodInfo_System_Collections_Generic_List_Enumerator_JSONNode_MoveNext);
  pSVar3 = local_58;
  if (bVar5) {
    (local_58->fields).__2__current = (local_58->fields).__7__wrap1.fields._current;
    Il2CppCodeGenWriteBarrier(&(local_58->fields).__2__current);
    (local_58->fields).__1__state = 1;
    return true;
  }
  if (Il2CppMethodInitialized_07545102 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_JSONNode_Dispose);
    Il2CppMethodInitialized_07545102 = '\x01';
  }
  (pSVar3->fields).__1__state = -1;
  System_Collections_Generic_List_Enumerator_object___Dispose
            ((System_Collections_Generic_List_Enumerator_object__o *)&(pSVar3->fields).__7__wrap1,
             (MethodInfo_4C45C40 *)MethodInfo_System_Collections_Generic_List_Enumerator_JSONNode_Dispose);
  (local_58->fields).__7__wrap1.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  (local_58->fields).__7__wrap1.fields._index = 0;
  (local_58->fields).__7__wrap1.fields._version = 0;
  (local_58->fields).__7__wrap1.fields._current = (SimpleJSONFixed_JSONNode_o *)0x0;
  return false;
}


// SimpleJSONFixed.JSONArray.<get_Children>d__24$$<>m__Finally1
// il2cpp: void SimpleJSONFixed_JSONArray__get_Children_d__24____m__Finally1 (SimpleJSONFixed_JSONArray__get_Children_d__24_o* __this, const MethodInfo* method);
// 0x5867920

void SimpleJSONFixed_JSONArray__get_Children_d__24____m__Finally1
               (SimpleJSONFixed_JSONArray__get_Children_d__24_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07545102 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_JSONNode_Dispose);
    Il2CppMethodInitialized_07545102 = '\x01';
  }
  (__this->fields).__1__state = -1;
  System_Collections_Generic_List_Enumerator_object___Dispose
            ((System_Collections_Generic_List_Enumerator_object__o *)&(__this->fields).__7__wrap1,
             (MethodInfo_4C45C40 *)MethodInfo_System_Collections_Generic_List_Enumerator_JSONNode_Dispose);
  return;
}


// SimpleJSONFixed.JSONArray.<get_Children>d__24$$System.Collections.Generic.IEnumerator<SimpleJSONFixed.JSONNode>.get_Current
// il2cpp: SimpleJSONFixed_JSONNode_o* SimpleJSONFixed_JSONArray__get_Children_d__24__System_Collections_Generic_IEnumerator_SimpleJSONFixed_JSONNode__get_Current (SimpleJSONFixed_JSONArray__get_Children_d__24_o* __this, const MethodInfo* method);
// 0x5867960

SimpleJSONFixed_JSONNode_o *
SimpleJSONFixed_JSONArray__get_Children_d__24__System_Collections_Generic_IEnumerator_SimpleJSONFixed_JSONNode__get_Current
          (SimpleJSONFixed_JSONArray__get_Children_d__24_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// SimpleJSONFixed.JSONArray.<get_Children>d__24$$System.Collections.IEnumerator.Reset
// il2cpp: void SimpleJSONFixed_JSONArray__get_Children_d__24__System_Collections_IEnumerator_Reset (SimpleJSONFixed_JSONArray__get_Children_d__24_o* __this, const MethodInfo* method);
// 0x5867970

void SimpleJSONFixed_JSONArray__get_Children_d__24__System_Collections_IEnumerator_Reset
               (SimpleJSONFixed_JSONArray__get_Children_d__24_o *__this,MethodInfo *method)

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
                  MethodInfo_SimpleJSONFixed_JSONArray_get_Children_d__24_System_Collections_IEnumerator_Reset
                 );
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
}


// SimpleJSONFixed.JSONArray.<get_Children>d__24$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* SimpleJSONFixed_JSONArray__get_Children_d__24__System_Collections_IEnumerator_get_Current (SimpleJSONFixed_JSONArray__get_Children_d__24_o* __this, const MethodInfo* method);
// 0x58679b0

Il2CppObject *
SimpleJSONFixed_JSONArray__get_Children_d__24__System_Collections_IEnumerator_get_Current
          (SimpleJSONFixed_JSONArray__get_Children_d__24_o *__this,MethodInfo *method)

{
  return (Il2CppObject *)(__this->fields).__2__current;
}


// SimpleJSONFixed.JSONArray.<get_Children>d__24$$System.Collections.Generic.IEnumerable<SimpleJSONFixed.JSONNode>.GetEnumerator
// il2cpp: System_Collections_Generic_IEnumerator_JSONNode__o* SimpleJSONFixed_JSONArray__get_Children_d__24__System_Collections_Generic_IEnumerable_SimpleJSONFixed_JSONNode__GetEnumerator (SimpleJSONFixed_JSONArray__get_Children_d__24_o* __this, const MethodInfo* method);
// 0x58679c0

System_Collections_IEnumerator_o *
SimpleJSONFixed_JSONArray__get_Children_d__24__System_Collections_Generic_IEnumerable_SimpleJSONFixed_JSONNode__GetEnumerator
          (SimpleJSONFixed_JSONArray__get_Children_d__24_o *__this,MethodInfo *method)

{
  int iVar1;
  int32_t iVar2;
  SimpleJSONFixed_JSONArray__get_Children_d__24_o *__this_00;
  
  if (Il2CppMethodInitialized_07545103 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONArray_get_Children_d__24);
    Il2CppMethodInitialized_07545103 = '\x01';
  }
  if (((__this->fields).__1__state == -2) &&
     (iVar1 = (__this->fields).__l__initialThreadId,
     iVar2 = System_Environment__get_CurrentManagedThreadId((MethodInfo *)0x0), iVar1 == iVar2)) {
    (__this->fields).__1__state = 0;
    return (System_Collections_IEnumerator_o *)__this;
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONArray_get_Children_d__24);
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).__1__state = 0;
  iVar2 = System_Environment__get_CurrentManagedThreadId((MethodInfo *)0x0);
  (__this_00->fields).__l__initialThreadId = iVar2;
  (__this_00->fields).__4__this = (__this->fields).__4__this;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this);
  return (System_Collections_IEnumerator_o *)__this_00;
}


// SimpleJSONFixed.JSONArray.<get_Children>d__24$$System.Collections.IEnumerable.GetEnumerator
// il2cpp: System_Collections_IEnumerator_o* SimpleJSONFixed_JSONArray__get_Children_d__24__System_Collections_IEnumerable_GetEnumerator (SimpleJSONFixed_JSONArray__get_Children_d__24_o* __this, const MethodInfo* method);
// 0x5867a60

System_Collections_IEnumerator_o *
SimpleJSONFixed_JSONArray__get_Children_d__24__System_Collections_IEnumerable_GetEnumerator
          (SimpleJSONFixed_JSONArray__get_Children_d__24_o *__this,MethodInfo *method)

{
  System_Collections_IEnumerator_o *pSVar1;
  
  pSVar1 = SimpleJSONFixed_JSONArray__get_Children_d__24__System_Collections_Generic_IEnumerable_SimpleJSONFixed_JSONNode__GetEnumerator
                     (__this,method);
  return pSVar1;
}


// SimpleJSONFixed.JSONArray$$get_Inline
// il2cpp: bool SimpleJSONFixed_JSONArray__get_Inline (SimpleJSONFixed_JSONArray_o* __this, const MethodInfo* method);
// 0x5866980

bool SimpleJSONFixed_JSONArray__get_Inline(SimpleJSONFixed_JSONArray_o *__this,MethodInfo *method)

{
  return (__this->fields).field1_0x8;
}


// SimpleJSONFixed.JSONArray$$set_Inline
// il2cpp: void SimpleJSONFixed_JSONArray__set_Inline (SimpleJSONFixed_JSONArray_o* __this, bool value, const MethodInfo* method);
// 0x5866990

void SimpleJSONFixed_JSONArray__set_Inline(SimpleJSONFixed_JSONArray_o *__this,bool value,MethodInfo *method)

{
  (__this->fields).field1_0x8 = value;
  return;
}


// SimpleJSONFixed.JSONArray$$get_Tag
// il2cpp: int32_t SimpleJSONFixed_JSONArray__get_Tag (SimpleJSONFixed_JSONArray_o* __this, const MethodInfo* method);
// 0x58669a0

int32_t SimpleJSONFixed_JSONArray__get_Tag(SimpleJSONFixed_JSONArray_o *__this,MethodInfo *method)

{
  return 1;
}


// SimpleJSONFixed.JSONArray$$get_IsArray
// il2cpp: bool SimpleJSONFixed_JSONArray__get_IsArray (SimpleJSONFixed_JSONArray_o* __this, const MethodInfo* method);
// 0x58669b0

bool SimpleJSONFixed_JSONArray__get_IsArray(SimpleJSONFixed_JSONArray_o *__this,MethodInfo *method)

{
  return true;
}


// SimpleJSONFixed.JSONArray$$GetEnumerator
// il2cpp: SimpleJSONFixed_JSONNode_Enumerator_o SimpleJSONFixed_JSONArray__GetEnumerator (SimpleJSONFixed_JSONArray_o* __this, const MethodInfo* method);
// 0x58669c0

SimpleJSONFixed_JSONNode_Enumerator_o *
SimpleJSONFixed_JSONArray__GetEnumerator
          (SimpleJSONFixed_JSONNode_Enumerator_o *__return_storage_ptr__,SimpleJSONFixed_JSONArray_o *__this,
          MethodInfo *method)

{
  System_Collections_Generic_List_object__o *__this_00;
  System_Collections_Generic_List_Enumerator_T__o SStack_28;
  
  if (Il2CppMethodInitialized_075450f3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_JSONNode_GetEnumerator);
    Il2CppMethodInitialized_075450f3 = '\x01';
  }
  __this_00 = (System_Collections_Generic_List_object__o *)(__this->fields).m_List;
  if (__this_00 == (System_Collections_Generic_List_object__o *)0x0) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_List_object___GetEnumerator
            (&SStack_28,__this_00,
             (MethodInfo_395E050 *)MethodInfo_System_Collections_Generic_List_JSONNode_GetEnumerator);
  *(undefined8 *)&__return_storage_ptr__->fields = 0;
  (__return_storage_ptr__->fields).m_Array.fields._list = SStack_28.fields._list;
  (__return_storage_ptr__->fields).m_Array.fields._index = SStack_28.fields._index;
  (__return_storage_ptr__->fields).m_Array.fields._version = SStack_28.fields._version;
  (__return_storage_ptr__->fields).m_Array.fields._current =
       (SimpleJSONFixed_JSONNode_o *)SStack_28.fields._current;
  (__return_storage_ptr__->fields).type = 1;
  (__return_storage_ptr__->fields).m_Object.fields._dictionary =
       (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  (__return_storage_ptr__->fields).m_Object.fields._version = 0;
  (__return_storage_ptr__->fields).m_Object.fields._index = 0;
  (__return_storage_ptr__->fields).m_Object.fields._current.fields.key = (Il2CppObject *)0x0;
  (__return_storage_ptr__->fields).m_Object.fields._current.fields.value = (Il2CppObject *)0x0;
  *(undefined8 *)&(__return_storage_ptr__->fields).m_Object.fields._getEnumeratorRetType = 0;
  Il2CppCodeGenWriteBarrier((void **)&(__return_storage_ptr__->fields).m_Array);
  return __return_storage_ptr__;
}


// SimpleJSONFixed.JSONArray$$get_Item
// il2cpp: SimpleJSONFixed_JSONNode_o* SimpleJSONFixed_JSONArray__get_Item (SimpleJSONFixed_JSONArray_o* __this, int32_t aIndex, const MethodInfo* method);
// 0x5866a50

SimpleJSONFixed_JSONNode_o *
SimpleJSONFixed_JSONArray__get_Item(SimpleJSONFixed_JSONArray_o *__this,int32_t aIndex,MethodInfo *method)

{
  System_Collections_Generic_List_object__o *__this_00;
  SimpleJSONFixed_JSONNode_o *pSVar1;
  SimpleJSONFixed_JSONLazyCreator_o *__this_01;
  
  if (Il2CppMethodInitialized_075450f4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONLazyCreator);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_JSONNode_get_Count)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_JSONNode_get_Item);
    Il2CppMethodInitialized_075450f4 = '\x01';
  }
  if (-1 < aIndex) {
    __this_00 = (System_Collections_Generic_List_object__o *)(__this->fields).m_List;
    if (__this_00 == (System_Collections_Generic_List_object__o *)0x0) {
      ThrowNullReferenceException();
    }
    if (aIndex < (__this_00->fields)._size) {
      pSVar1 = System_Collections_Generic_List_object___get_Item
                         (__this_00,aIndex,
                          (MethodInfo_395CF20 *)MethodInfo_System_Collections_Generic_List_JSONNode_get_Item);
      return pSVar1;
    }
  }
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONLazyCreator);
  if (Il2CppMethodInitialized_07545130 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    Il2CppMethodInitialized_07545130 = '\x01';
  }
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  System_Object___ctor((Il2CppObject *)__this_01,(MethodInfo *)0x0);
  (__this_01->fields).m_Node = (SimpleJSONFixed_JSONNode_o *)__this;
  Il2CppCodeGenWriteBarrier(&(__this_01->fields).m_Node);
  (__this_01->fields).m_Key = (System_String_o *)0x0;
  Il2CppCodeGenWriteBarrier(&(__this_01->fields).m_Key);
  return (SimpleJSONFixed_JSONNode_o *)__this_01;
}


// SimpleJSONFixed.JSONArray$$set_Item
// il2cpp: void SimpleJSONFixed_JSONArray__set_Item (SimpleJSONFixed_JSONArray_o* __this, int32_t aIndex, SimpleJSONFixed_JSONNode_o* value, const MethodInfo* method);
// 0x5866bd0

void SimpleJSONFixed_JSONArray__set_Item
               (SimpleJSONFixed_JSONArray_o *__this,int32_t aIndex,SimpleJSONFixed_JSONNode_o *value,
               MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Collections_Generic_List_object__o *__this_00;
  System_Object_array *pSVar3;
  bool bVar4;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *pMVar5;
  SimpleJSONFixed_JSONNull_c *method_00;
  
  pMVar5 = (MethodInfo *)value;
  if (Il2CppMethodInitialized_075450f5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNull);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_JSONNode_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_JSONNode_get_Count)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_JSONNode_set_Item);
    Il2CppMethodInitialized_075450f5 = '\x01';
    pMVar5 = extraout_RDX;
  }
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
    pMVar5 = extraout_RDX_00;
  }
  bVar4 = SimpleJSONFixed_JSONNode__op_Equality(value,(Il2CppObject *)0x0,pMVar5);
  if (bVar4) {
    method_00 = TypeInfo_SimpleJSONFixed_JSONNull;
    if ((TypeInfo_SimpleJSONFixed_JSONNull->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNull);
    }
    value = (SimpleJSONFixed_JSONNode_o *)SimpleJSONFixed_JSONNull__CreateOrGet((MethodInfo *)method_00);
  }
  pMVar5 = MethodInfo_System_Collections_Generic_List_JSONNode_Add;
  __this_00 = (System_Collections_Generic_List_object__o *)(__this->fields).m_List;
  if (aIndex < 0) {
    if (__this_00 == (System_Collections_Generic_List_object__o *)0x0) goto label_05866cf6;
  }
  else {
    if (__this_00 == (System_Collections_Generic_List_object__o *)0x0) goto label_05866cf6;
    if (aIndex < (__this_00->fields)._size) {
      System_Collections_Generic_List_object___set_Item
                (__this_00,aIndex,(Il2CppObject *)value,
                 (MethodInfo_395CF60 *)MethodInfo_System_Collections_Generic_List_JSONNode_set_Item);
      return;
    }
  }
  piVar1 = &(__this_00->fields)._version;
  *piVar1 = *piVar1 + 1;
  pSVar3 = (__this_00->fields)._items;
  if (pSVar3 != (System_Object_array *)0x0) {
    uVar2 = (__this_00->fields)._size;
    if (uVar2 < (uint)pSVar3->max_length) {
      (__this_00->fields)._size = uVar2 + 1;
      pSVar3->m_Items[(int)uVar2] = (Il2CppObject *)value;
      Il2CppCodeGenWriteBarrier(pSVar3->m_Items + (int)uVar2);
      return;
    }
    System_Collections_Generic_List_object___AddWithResize
              (__this_00,(Il2CppObject *)value,(MethodInfo_395D230 *)pMVar5->klass->rgctx_data[0xe].method);
    return;
  }
label_05866cf6:
  ThrowNullReferenceException();
}


// SimpleJSONFixed.JSONArray$$get_Item
// il2cpp: SimpleJSONFixed_JSONNode_o* SimpleJSONFixed_JSONArray__get_Item (SimpleJSONFixed_JSONArray_o* __this, System_String_o* aKey, const MethodInfo* method);
// 0x5866d00

SimpleJSONFixed_JSONNode_o *
SimpleJSONFixed_JSONArray__get_Item_5766d00
          (SimpleJSONFixed_JSONArray_o *__this,System_String_o *aKey,MethodInfo *method)

{
  SimpleJSONFixed_JSONLazyCreator_o *__this_00;
  
  if (Il2CppMethodInitialized_075450f6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONLazyCreator);
    Il2CppMethodInitialized_075450f6 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONLazyCreator);
  if (Il2CppMethodInitialized_07545130 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    Il2CppMethodInitialized_07545130 = '\x01';
  }
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).m_Node = (SimpleJSONFixed_JSONNode_o *)__this;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).m_Node);
  (__this_00->fields).m_Key = (System_String_o *)0x0;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).m_Key);
  return (SimpleJSONFixed_JSONNode_o *)__this_00;
}


// SimpleJSONFixed.JSONArray$$set_Item
// il2cpp: void SimpleJSONFixed_JSONArray__set_Item (SimpleJSONFixed_JSONArray_o* __this, System_String_o* aKey, SimpleJSONFixed_JSONNode_o* value, const MethodInfo* method);
// 0x5866db0

void SimpleJSONFixed_JSONArray__set_Item_5766db0
               (SimpleJSONFixed_JSONArray_o *__this,System_String_o *aKey,SimpleJSONFixed_JSONNode_o *value,
               MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Collections_Generic_List_object__o *__this_00;
  System_Object_array *pSVar3;
  bool bVar4;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *pMVar5;
  SimpleJSONFixed_JSONNull_c *method_00;
  
  pMVar5 = (MethodInfo *)value;
  if (Il2CppMethodInitialized_075450f7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNull);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_JSONNode_Add);
    Il2CppMethodInitialized_075450f7 = '\x01';
    pMVar5 = extraout_RDX;
  }
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
    pMVar5 = extraout_RDX_00;
  }
  bVar4 = SimpleJSONFixed_JSONNode__op_Equality(value,(Il2CppObject *)0x0,pMVar5);
  if (bVar4) {
    method_00 = TypeInfo_SimpleJSONFixed_JSONNull;
    if ((TypeInfo_SimpleJSONFixed_JSONNull->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNull);
    }
    value = (SimpleJSONFixed_JSONNode_o *)SimpleJSONFixed_JSONNull__CreateOrGet((MethodInfo *)method_00);
  }
  pMVar5 = MethodInfo_System_Collections_Generic_List_JSONNode_Add;
  __this_00 = (System_Collections_Generic_List_object__o *)(__this->fields).m_List;
  if (__this_00 != (System_Collections_Generic_List_object__o *)0x0) {
    piVar1 = &(__this_00->fields)._version;
    *piVar1 = *piVar1 + 1;
    pSVar3 = (__this_00->fields)._items;
    if (pSVar3 != (System_Object_array *)0x0) {
      uVar2 = (__this_00->fields)._size;
      if (uVar2 < (uint)pSVar3->max_length) {
        (__this_00->fields)._size = uVar2 + 1;
        pSVar3->m_Items[(int)uVar2] = (Il2CppObject *)value;
        Il2CppCodeGenWriteBarrier(pSVar3->m_Items + (int)uVar2);
        return;
      }
      System_Collections_Generic_List_object___AddWithResize
                (__this_00,(Il2CppObject *)value,(MethodInfo_395D230 *)pMVar5->klass->rgctx_data[0xe].method);
      return;
    }
  }
  ThrowNullReferenceException();
}


// SimpleJSONFixed.JSONArray$$get_Count
// il2cpp: int32_t SimpleJSONFixed_JSONArray__get_Count (SimpleJSONFixed_JSONArray_o* __this, const MethodInfo* method);
// 0x5866eb0

int32_t SimpleJSONFixed_JSONArray__get_Count(SimpleJSONFixed_JSONArray_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_JSONNode__o *pSVar1;
  
  if (Il2CppMethodInitialized_075450f8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_JSONNode_get_Count)
    ;
    Il2CppMethodInitialized_075450f8 = '\x01';
  }
  pSVar1 = (__this->fields).m_List;
  if (pSVar1 == (System_Collections_Generic_List_JSONNode__o *)0x0) {
    ThrowNullReferenceException();
  }
  return (pSVar1->fields)._size;
}


// SimpleJSONFixed.JSONArray$$Add
// il2cpp: void SimpleJSONFixed_JSONArray__Add (SimpleJSONFixed_JSONArray_o* __this, System_String_o* aKey, SimpleJSONFixed_JSONNode_o* aItem, const MethodInfo* method);
// 0x5866ef0

void SimpleJSONFixed_JSONArray__Add
               (SimpleJSONFixed_JSONArray_o *__this,System_String_o *aKey,SimpleJSONFixed_JSONNode_o *aItem,
               MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Collections_Generic_List_object__o *__this_00;
  System_Object_array *pSVar3;
  bool bVar4;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *pMVar5;
  SimpleJSONFixed_JSONNull_c *method_00;
  
  pMVar5 = (MethodInfo *)aItem;
  if (Il2CppMethodInitialized_075450f9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNull);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_JSONNode_Add);
    Il2CppMethodInitialized_075450f9 = '\x01';
    pMVar5 = extraout_RDX;
  }
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
    pMVar5 = extraout_RDX_00;
  }
  bVar4 = SimpleJSONFixed_JSONNode__op_Equality(aItem,(Il2CppObject *)0x0,pMVar5);
  if (bVar4) {
    method_00 = TypeInfo_SimpleJSONFixed_JSONNull;
    if ((TypeInfo_SimpleJSONFixed_JSONNull->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNull);
    }
    aItem = (SimpleJSONFixed_JSONNode_o *)SimpleJSONFixed_JSONNull__CreateOrGet((MethodInfo *)method_00);
  }
  pMVar5 = MethodInfo_System_Collections_Generic_List_JSONNode_Add;
  __this_00 = (System_Collections_Generic_List_object__o *)(__this->fields).m_List;
  if (__this_00 != (System_Collections_Generic_List_object__o *)0x0) {
    piVar1 = &(__this_00->fields)._version;
    *piVar1 = *piVar1 + 1;
    pSVar3 = (__this_00->fields)._items;
    if (pSVar3 != (System_Object_array *)0x0) {
      uVar2 = (__this_00->fields)._size;
      if (uVar2 < (uint)pSVar3->max_length) {
        (__this_00->fields)._size = uVar2 + 1;
        pSVar3->m_Items[(int)uVar2] = (Il2CppObject *)aItem;
        Il2CppCodeGenWriteBarrier(pSVar3->m_Items + (int)uVar2);
        return;
      }
      System_Collections_Generic_List_object___AddWithResize
                (__this_00,(Il2CppObject *)aItem,(MethodInfo_395D230 *)pMVar5->klass->rgctx_data[0xe].method);
      return;
    }
  }
  ThrowNullReferenceException();
}


// SimpleJSONFixed.JSONArray$$Remove
// il2cpp: SimpleJSONFixed_JSONNode_o* SimpleJSONFixed_JSONArray__Remove (SimpleJSONFixed_JSONArray_o* __this, int32_t aIndex, const MethodInfo* method);
// 0x5866ff0

SimpleJSONFixed_JSONNode_o *
SimpleJSONFixed_JSONArray__Remove(SimpleJSONFixed_JSONArray_o *__this,int32_t aIndex,MethodInfo *method)

{
  System_Collections_Generic_List_object__o *pSVar1;
  SimpleJSONFixed_JSONNode_o *pSVar2;
  
  if (Il2CppMethodInitialized_075450fa == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_JSONNode_RemoveAt);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_JSONNode_get_Count)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_JSONNode_get_Item);
    Il2CppMethodInitialized_075450fa = '\x01';
  }
  if (aIndex < 0) {
    return (SimpleJSONFixed_JSONNode_o *)0x0;
  }
  pSVar1 = (System_Collections_Generic_List_object__o *)(__this->fields).m_List;
  if (pSVar1 != (System_Collections_Generic_List_object__o *)0x0) {
    if ((pSVar1->fields)._size <= aIndex) {
      return (SimpleJSONFixed_JSONNode_o *)0x0;
    }
    pSVar2 = System_Collections_Generic_List_object___get_Item
                       (pSVar1,aIndex,
                        (MethodInfo_395CF20 *)MethodInfo_System_Collections_Generic_List_JSONNode_get_Item);
    pSVar1 = (System_Collections_Generic_List_object__o *)(__this->fields).m_List;
    if (pSVar1 != (System_Collections_Generic_List_object__o *)0x0) {
      System_Collections_Generic_List_object___RemoveAt
                (pSVar1,aIndex,
                 (MethodInfo_395F100 *)MethodInfo_System_Collections_Generic_List_JSONNode_RemoveAt);
      return pSVar2;
    }
  }
  ThrowNullReferenceException();
}


// SimpleJSONFixed.JSONArray$$Remove
// il2cpp: SimpleJSONFixed_JSONNode_o* SimpleJSONFixed_JSONArray__Remove (SimpleJSONFixed_JSONArray_o* __this, SimpleJSONFixed_JSONNode_o* aNode, const MethodInfo* method);
// 0x5867090

SimpleJSONFixed_JSONNode_o *
SimpleJSONFixed_JSONArray__Remove_5767090
          (SimpleJSONFixed_JSONArray_o *__this,SimpleJSONFixed_JSONNode_o *aNode,MethodInfo *method)

{
  System_Collections_Generic_List_object__o *__this_00;
  
  if (Il2CppMethodInitialized_075450fb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_JSONNode_Remove);
    Il2CppMethodInitialized_075450fb = '\x01';
  }
  __this_00 = (System_Collections_Generic_List_object__o *)(__this->fields).m_List;
  if (__this_00 == (System_Collections_Generic_List_object__o *)0x0) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_List_object___Remove
            (__this_00,(Il2CppObject *)aNode,
             (MethodInfo_395ED70 *)MethodInfo_System_Collections_Generic_List_JSONNode_Remove);
  return aNode;
}


// SimpleJSONFixed.JSONArray$$Clear
// il2cpp: void SimpleJSONFixed_JSONArray__Clear (SimpleJSONFixed_JSONArray_o* __this, const MethodInfo* method);
// 0x58670f0

void SimpleJSONFixed_JSONArray__Clear(SimpleJSONFixed_JSONArray_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  int32_t length;
  System_Collections_Generic_List_JSONNode__o *pSVar2;
  
  if (Il2CppMethodInitialized_075450fc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_JSONNode_Clear);
    Il2CppMethodInitialized_075450fc = '\x01';
  }
  pSVar2 = (__this->fields).m_List;
  if (pSVar2 == (System_Collections_Generic_List_JSONNode__o *)0x0) {
    ThrowNullReferenceException();
  }
  piVar1 = &(pSVar2->fields)._version;
  *piVar1 = *piVar1 + 1;
  length = (pSVar2->fields)._size;
  (pSVar2->fields)._size = 0;
  if (length < 1) {
    return;
  }
  System_Array__Clear((System_Array_o *)(pSVar2->fields)._items,0,length,(MethodInfo *)0x0);
  return;
}


// SimpleJSONFixed.JSONArray$$Clone
// il2cpp: SimpleJSONFixed_JSONNode_o* SimpleJSONFixed_JSONArray__Clone (SimpleJSONFixed_JSONArray_o* __this, const MethodInfo* method);
// 0x5867140
// eh: try 0x586728a..0x5867355 -> pad 0x586735e (+5 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x586737c..0x5867381 -> pad 0x58673a2 cleanup
// eh: try 0x58673a5..0x58673af -> pad 0x58673b7 catch (...) [compiler noexcept guard]
// asm: 28 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x586735a: jmp 0x5867364
// asm:   0x586735c: jmp 0x5867364
// asm:   0x586735e: jmp 0x5867364
// asm:   0x5867360: jmp 0x5867364
// asm:   0x5867362: jmp 0x5867364
// asm:   0x5867364: mov rbx, rax
// asm:   0x5867367: cmp edx, 1
// asm:   0x586736a: jne 0x58673a5
// asm:   0x586736c: mov rdi, rbx
// asm:   0x586736f: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5867374: mov rbx, qword ptr [rax]
// asm:   0x5867377: mov qword ptr [rsp + 8], rbx
// asm:   0x586737c: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5867381: lea rax, [rip + 0x1a26ed0]  ; MethodInfo_System_Collections_Generic_List_Enumerator_JSONNode_Dispose
// asm:   0x5867388: mov rsi, qword ptr [rax]
// asm:   0x586738b: lea rdi, [rsp + 0x20]
// asm:   0x5867390: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x5867395: test rbx, rbx
// asm:   0x5867398: je 0x586733f
// asm:   0x586739a: mov rdi, rbx
// asm:   0x586739d: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x58673a2: mov rbx, rax
// asm:   0x58673a5: lea rdi, [rsp + 8]
// asm:   0x58673aa: call 0x2fcf470  ; il2cpp_runtime_helper_02fcf470()
// asm:   0x58673af: mov rdi, rbx
// asm:   0x58673b2: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x58673b7: mov rdi, rax
// asm:   0x58673ba: call 0x2ab61e0  ; __clang_call_terminate()

SimpleJSONFixed_JSONNode_o *
SimpleJSONFixed_JSONArray__Clone(SimpleJSONFixed_JSONArray_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_object__o *pSVar1;
  System_Collections_Generic_List_object__o *__this_00;
  Il2CppObject *a;
  bool bVar2;
  int32_t value;
  SimpleJSONFixed_JSONArray_o *__this_01;
  SimpleJSONFixed_JSONNode_o *pSVar3;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
  MethodInfo *method_00;
  undefined1 auStack_60 [16];
  Il2CppObject *pIStack_50;
  System_Collections_Generic_List_Enumerator_object__o SStack_48;
  
  if (Il2CppMethodInitialized_075450fd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_JSONNode_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_JSONNode_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_JSONNode_get_Current);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONArray);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_JSONNode_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_JSONNode_get_Capacity);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_JSONNode_set_Capacity);
    Il2CppMethodInitialized_075450fd = '\x01';
  }
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONArray);
  SimpleJSONFixed_JSONArray___ctor(__this_01,method);
  if ((__this_01 != (SimpleJSONFixed_JSONArray_o *)0x0) &&
     (pSVar1 = (System_Collections_Generic_List_object__o *)(__this->fields).m_List,
     pSVar1 != (System_Collections_Generic_List_object__o *)0x0)) {
    __this_00 = (System_Collections_Generic_List_object__o *)(__this_01->fields).m_List;
    value = System_Collections_Generic_List_object___get_Capacity
                      (pSVar1,(MethodInfo_395CD30 *)
                              MethodInfo_System_Collections_Generic_List_JSONNode_get_Capacity);
    if (__this_00 != (System_Collections_Generic_List_object__o *)0x0) {
      System_Collections_Generic_List_object___set_Capacity
                (__this_00,value,
                 (MethodInfo_395CD50 *)MethodInfo_System_Collections_Generic_List_JSONNode_set_Capacity);
      pSVar1 = (System_Collections_Generic_List_object__o *)(__this->fields).m_List;
      if (pSVar1 != (System_Collections_Generic_List_object__o *)0x0) {
        System_Collections_Generic_List_object___GetEnumerator
                  ((System_Collections_Generic_List_Enumerator_T__o *)auStack_60,pSVar1,
                   (MethodInfo_395E050 *)MethodInfo_System_Collections_Generic_List_JSONNode_GetEnumerator);
        SStack_48.fields._current = pIStack_50;
        SStack_48.fields._list = (System_Collections_Generic_List_T__o *)auStack_60._0_8_;
        SStack_48.fields._index = auStack_60._8_4_;
        SStack_48.fields._version = auStack_60._12_4_;
        auStack_60._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
        auStack_60._8_8_ = &SStack_48;
        while( true ) {
          while( true ) {
            bVar2 = System_Collections_Generic_List_Enumerator_object___MoveNext
                              (&SStack_48,
                               (MethodInfo_4C45C50 *)
                               MethodInfo_System_Collections_Generic_List_Enumerator_JSONNode_MoveNext);
            a = SStack_48.fields._current;
            if (!bVar2) {
              System_Collections_Generic_List_Enumerator_object___Dispose
                        (&SStack_48,
                         (MethodInfo_4C45C40 *)
                         MethodInfo_System_Collections_Generic_List_Enumerator_JSONNode_Dispose);
              return (SimpleJSONFixed_JSONNode_o *)__this_01;
            }
            method_00 = extraout_RDX;
            if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
              method_00 = extraout_RDX_00;
            }
            if (Il2CppMethodInitialized_075450d9 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
              Il2CppMethodInitialized_075450d9 = '\x01';
              method_00 = extraout_RDX_01;
            }
            if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
              method_00 = extraout_RDX_02;
            }
            bVar2 = SimpleJSONFixed_JSONNode__op_Equality
                              ((SimpleJSONFixed_JSONNode_o *)a,(Il2CppObject *)0x0,method_00);
            if (!bVar2) break;
            (*(__this_01->klass->vtable)._21_Add.methodPtr)
                      (__this_01,(SimpleJSONFixed_JSONNode_o *)0x0,(__this_01->klass->vtable)._21_Add.method);
          }
          if (a == (Il2CppObject *)0x0) break;
          pSVar3 = (*(((SimpleJSONFixed_JSONNode_VTable *)a->klass->vtable)->_26_Clone).methodPtr)
                             (a,(((SimpleJSONFixed_JSONNode_VTable *)a->klass->vtable)->_26_Clone).method);
          (*(__this_01->klass->vtable)._21_Add.methodPtr)
                    (__this_01,pSVar3,(__this_01->klass->vtable)._21_Add.method);
        }
        ThrowNullReferenceException();
      }
    }
  }
  ThrowNullReferenceException();
}


// SimpleJSONFixed.JSONArray$$get_Children
// il2cpp: System_Collections_Generic_IEnumerable_JSONNode__o* SimpleJSONFixed_JSONArray__get_Children (SimpleJSONFixed_JSONArray_o* __this, const MethodInfo* method);
// 0x58673c0

System_Collections_Generic_IEnumerable_JSONNode__o *
SimpleJSONFixed_JSONArray__get_Children(SimpleJSONFixed_JSONArray_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  SimpleJSONFixed_JSONArray__get_Children_d__24_o *__this_00;
  
  if (Il2CppMethodInitialized_075450fe == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONArray_get_Children_d__24);
    Il2CppMethodInitialized_075450fe = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONArray_get_Children_d__24);
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).__1__state = -2;
  iVar1 = System_Environment__get_CurrentManagedThreadId((MethodInfo *)0x0);
  (__this_00->fields).__l__initialThreadId = iVar1;
  (__this_00->fields).__4__this = __this;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this);
  return (System_Collections_Generic_IEnumerable_JSONNode__o *)__this_00;
}


// SimpleJSONFixed.JSONArray$$WriteToStringBuilder
// il2cpp: void SimpleJSONFixed_JSONArray__WriteToStringBuilder (SimpleJSONFixed_JSONArray_o* __this, System_Text_StringBuilder_o* aSB, int32_t aIndent, int32_t aIndentInc, int32_t aMode, const MethodInfo* method);
// 0x5867460
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5867577: nop word ptr [rax + rax]
// asm:   0x58675fe: jmp 0x58676b1
// asm:   0x586764e: nop 

void SimpleJSONFixed_JSONArray__WriteToStringBuilder
               (SimpleJSONFixed_JSONArray_o *__this,System_Text_StringBuilder_o *aSB,int32_t aIndent,
               int32_t aIndentInc,int32_t aMode,MethodInfo *method)

{
  int iVar1;
  System_Collections_Generic_List_object__o *pSVar2;
  SimpleJSONFixed_JSONNode_o *pSVar3;
  System_Text_StringBuilder_o *__this_00;
  undefined4 in_register_0000000c;
  undefined8 uVar4;
  ulong uVar5;
  uint repeatCount;
  int iVar6;
  int iStack_40;
  
  uVar4 = CONCAT44(in_register_0000000c,aIndentInc);
  if (Il2CppMethodInitialized_075450ff == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_JSONNode_get_Count)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_JSONNode_get_Item);
    Il2CppMethodInitialized_075450ff = '\x01';
  }
  if (aSB == (System_Text_StringBuilder_o *)0x0) goto label_058676f8;
  System_Text_StringBuilder__Append_530f6a0(aSB,0x5b,(MethodInfo *)0x0);
  pSVar2 = (System_Collections_Generic_List_object__o *)(__this->fields).m_List;
  if (pSVar2 == (System_Collections_Generic_List_object__o *)0x0) goto label_058676f8;
  iVar1 = (pSVar2->fields)._size;
  uVar5 = 0;
  if ((__this->fields).field1_0x8 == false) {
    uVar5 = (ulong)(uint)aMode;
  }
  iStack_40 = (int)uVar5;
  if (iVar1 < 1) {
label_058676b1:
    if (iStack_40 != 1) goto label_058676db;
  }
  else {
    repeatCount = aIndentInc + aIndent;
    if (iStack_40 != 1) {
      pSVar3 = System_Collections_Generic_List_object___get_Item
                         (pSVar2,0,(MethodInfo_395CF20 *)
                                   MethodInfo_System_Collections_Generic_List_JSONNode_get_Item);
      if (pSVar3 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_058676f8;
      (*(pSVar3->klass->vtable)._31_unknown.methodPtr)
                (pSVar3,aSB,(ulong)repeatCount,uVar4,uVar5,(pSVar3->klass->vtable)._31_unknown.method);
      if (iVar1 == 1) goto label_058676db;
      iVar6 = 1;
      do {
        System_Text_StringBuilder__Append_530f6a0(aSB,0x2c,(MethodInfo *)0x0);
        pSVar2 = (System_Collections_Generic_List_object__o *)(__this->fields).m_List;
        if ((pSVar2 == (System_Collections_Generic_List_object__o *)0x0) ||
           (pSVar3 = System_Collections_Generic_List_object___get_Item
                               (pSVar2,iVar6,
                                (MethodInfo_395CF20 *)
                                MethodInfo_System_Collections_Generic_List_JSONNode_get_Item),
           pSVar3 == (SimpleJSONFixed_JSONNode_o *)0x0)) goto label_058676f8;
        (*(pSVar3->klass->vtable)._31_unknown.methodPtr)
                  (pSVar3,aSB,(ulong)repeatCount,uVar4,uVar5,(pSVar3->klass->vtable)._31_unknown.method);
        iVar6 = iVar6 + 1;
      } while (iVar1 != iVar6);
      goto label_058676b1;
    }
    System_Text_StringBuilder__AppendLine(aSB,(MethodInfo *)0x0);
    System_Text_StringBuilder__Append(aSB,0x20,repeatCount,(MethodInfo *)0x0);
    pSVar2 = (System_Collections_Generic_List_object__o *)(__this->fields).m_List;
    if ((pSVar2 == (System_Collections_Generic_List_object__o *)0x0) ||
       (pSVar3 = System_Collections_Generic_List_object___get_Item
                           (pSVar2,0,(MethodInfo_395CF20 *)
                                     MethodInfo_System_Collections_Generic_List_JSONNode_get_Item),
       pSVar3 == (SimpleJSONFixed_JSONNode_o *)0x0)) goto label_058676f8;
    iVar6 = 1;
    (*(pSVar3->klass->vtable)._31_unknown.methodPtr)
              (pSVar3,aSB,(ulong)repeatCount,uVar4,1,(pSVar3->klass->vtable)._31_unknown.method);
    if (iVar1 != 1) {
      do {
        System_Text_StringBuilder__Append_530f6a0(aSB,0x2c,(MethodInfo *)0x0);
        System_Text_StringBuilder__AppendLine(aSB,(MethodInfo *)0x0);
        System_Text_StringBuilder__Append(aSB,0x20,repeatCount,(MethodInfo *)0x0);
        pSVar2 = (System_Collections_Generic_List_object__o *)(__this->fields).m_List;
        if ((pSVar2 == (System_Collections_Generic_List_object__o *)0x0) ||
           (pSVar3 = System_Collections_Generic_List_object___get_Item
                               (pSVar2,iVar6,
                                (MethodInfo_395CF20 *)
                                MethodInfo_System_Collections_Generic_List_JSONNode_get_Item),
           pSVar3 == (SimpleJSONFixed_JSONNode_o *)0x0)) goto label_058676f8;
        (*(pSVar3->klass->vtable)._31_unknown.methodPtr)
                  (pSVar3,aSB,(ulong)repeatCount,uVar4,1,(pSVar3->klass->vtable)._31_unknown.method);
        iVar6 = iVar6 + 1;
      } while (iVar1 != iVar6);
      goto label_058676b1;
    }
  }
  __this_00 = System_Text_StringBuilder__AppendLine(aSB,(MethodInfo *)0x0);
  if (__this_00 == (System_Text_StringBuilder_o *)0x0) {
label_058676f8:
    ThrowNullReferenceException();
  }
  System_Text_StringBuilder__Append(__this_00,0x20,aIndent,(MethodInfo *)0x0);
label_058676db:
  System_Text_StringBuilder__Append_530f6a0(aSB,0x5d,(MethodInfo *)0x0);
  return;
}


// SimpleJSONFixed.JSONArray$$.ctor
// il2cpp: void SimpleJSONFixed_JSONArray___ctor (SimpleJSONFixed_JSONArray_o* __this, const MethodInfo* method);
// 0x5865320

void SimpleJSONFixed_JSONArray___ctor(SimpleJSONFixed_JSONArray_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_object__o *__this_00;
  
  if (Il2CppMethodInitialized_07545100 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_JSONNode_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_JSONNode);
    Il2CppMethodInitialized_07545100 = '\x01';
  }
  __this_00 = (System_Collections_Generic_List_object__o *)
              il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_JSONNode);
  System_Collections_Generic_List_object____ctor
            (__this_00,(MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_JSONNode_ctor);
  (__this->fields).m_List = (System_Collections_Generic_List_JSONNode__o *)__this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields).m_List);
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


