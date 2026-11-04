// Type: SimpleJSONFixed.JSONObject
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/SimpleJSONFixed/JSONObject.cs
// Prior real C# source (older reference): Assets/Scripts/Utility/SimpleJSON.cs
// --------------------------------

// SimpleJSONFixed.JSONObject.<>c__DisplayClass21_0$$.ctor
// il2cpp: void SimpleJSONFixed_JSONObject___c__DisplayClass21_0___ctor (SimpleJSONFixed_JSONObject___c__DisplayClass21_0_o* __this, const MethodInfo* method);
// 0x18054c890

void
SimpleJSONFixed_JSONObject___c__DisplayClass21_0___ctor(SimpleJSONFixed_JSONObject___c__DisplayClass21_0_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// SimpleJSONFixed.JSONObject.<>c__DisplayClass21_0$$<Remove>b__0
// il2cpp: bool SimpleJSONFixed_JSONObject___c__DisplayClass21_0___Remove_b__0 (SimpleJSONFixed_JSONObject___c__DisplayClass21_0_o* __this, System_Collections_Generic_KeyValuePair_string__JSONNode__o k, const MethodInfo* method);
// 0x181dd04c0

bool SimpleJSONFixed_JSONObject___c__DisplayClass21_0___Remove_b__0
               (SimpleJSONFixed_JSONObject___c__DisplayClass21_0_o *__this,
               System_Collections_Generic_KeyValuePair_string__JSONNode__o *k,MethodInfo *method)

{
  Il2CppObject *b;
  bool bVar1;
  
  if (Il2CppMethodInitialized_1843449b9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_KeyValuePair_string_JSONNode_get_Value);
    Il2CppMethodInitialized_1843449b9 = '\x01';
  }
  b = (Il2CppObject *)(__this->fields).aNode;
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  bVar1 = SimpleJSONFixed_JSONNode__op_Equality((k->fields).value,b,(MethodInfo *)0x0);
  return bVar1;
}


// SimpleJSONFixed.JSONObject.<get_Children>d__27$$.ctor
// il2cpp: void SimpleJSONFixed_JSONObject__get_Children_d__27___ctor (SimpleJSONFixed_JSONObject__get_Children_d__27_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x1808e2870

void
SimpleJSONFixed_JSONObject__get_Children_d__27___ctor(SimpleJSONFixed_JSONObject__get_Children_d__27_o* __this, int32_t __1__state, MethodInfo* method)

{
  int32_t iVar1;
  
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  iVar1 = System_Diagnostics_TraceEventCache__GetThreadId((MethodInfo *)0x0);
  (__this->fields).__l__initialThreadId = iVar1;
  return;
}


// SimpleJSONFixed.JSONObject.<get_Children>d__27$$System.IDisposable.Dispose
// il2cpp: void SimpleJSONFixed_JSONObject__get_Children_d__27__System_IDisposable_Dispose (SimpleJSONFixed_JSONObject__get_Children_d__27_o* __this, const MethodInfo* method);
// 0x181dd1530
// asm: 6 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181dd1594: lea rcx, [rsp + 0x30]
// asm:   0x181dd1599: call 0x181db8eb0  ; il2cpp_runtime_helper_181db8eb0()
// asm:   0x181dd159e: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x181dd15a3: test rcx, rcx
// asm:   0x181dd15a6: jne 0x181dd15ae
// asm:   0x181dd15ae: call 0x1804171b0  ; il2cpp_codegen_rethrow()

void SimpleJSONFixed_JSONObject__get_Children_d__27__System_IDisposable_Dispose
               (SimpleJSONFixed_JSONObject__get_Children_d__27_o *__this,MethodInfo *method)

{
  int iVar1;
  
  iVar1 = (__this->fields).__1__state;
  if ((iVar1 == -3) || (iVar1 == 1)) {
    if (Il2CppMethodInitialized_1843449bb == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_System_Collections_Generic_Dictionary_Enumerator_string_JSONNode_Dispose);
      Il2CppMethodInitialized_1843449bb = '\x01';
    }
    (__this->fields).__1__state = -1;
    System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose
              ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&(__this->fields).__7__wrap1,
               MethodInfo_System_Collections_Generic_Dictionary_Enumerator_string_JSONNode_Dispose);
  }
  return;
}


// SimpleJSONFixed.JSONObject.<get_Children>d__27$$MoveNext
// il2cpp: bool SimpleJSONFixed_JSONObject__get_Children_d__27__MoveNext (SimpleJSONFixed_JSONObject__get_Children_d__27_o* __this, const MethodInfo* method);
// 0x181dd1270
// eh: try 0x181dd12d5..0x181dd142f -> pad 0x183315930 (+2 call sites) catch Il2CppExceptionWrapper
// asm: 19 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181dd140b: mov rbx, qword ptr [rsp + 0x28]
// asm:   0x181dd1410: test rbx, rbx
// asm:   0x181dd1413: jne 0x181dd142f
// asm:   0x181dd1415: movzx eax, byte ptr [rsp + 0x80]
// asm:   0x181dd142f: lea rcx, [rsp + 0x30]
// asm:   0x181dd1434: call 0x181db8f60  ; il2cpp_runtime_helper_181db8f60()
// asm:   0x181dd1439: mov rcx, rbx
// asm:   0x181dd143c: call 0x1804171b0  ; il2cpp_codegen_rethrow()
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

bool SimpleJSONFixed_JSONObject__get_Children_d__27__MoveNext
               (SimpleJSONFixed_JSONObject__get_Children_d__27_o *__this,MethodInfo *method)

{
  int iVar1;
  SimpleJSONFixed_JSONObject_o *pSVar2;
  System_Collections_Generic_Dictionary_string__JSONNode__o *__this_00;
  Il2CppObject *value;
  bool bVar3;
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o local_30;
  
  if (Il2CppMethodInitialized_1843449ba == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_JSONNode_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_Enumerator_string_JSONNode_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_Enumerator_string_JSONNode_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_KeyValuePair_string_JSONNode_get_Value);
    Il2CppMethodInitialized_1843449ba = '\x01';
  }
  iVar1 = (__this->fields).__1__state;
  if (iVar1 == 0) {
    pSVar2 = (__this->fields).__4__this;
    (__this->fields).__1__state = -1;
    if (pSVar2 == (SimpleJSONFixed_JSONObject_o *)0x0) {
      ThrowNullReferenceException();
    }
    __this_00 = (pSVar2->fields).m_Dict;
    if (__this_00 == (System_Collections_Generic_Dictionary_string__JSONNode__o *)0x0) {
      ThrowNullReferenceException();
    }
    System_Collections_Generic_Dictionary_PhotonNetwork_RaiseEventBatch__object___GetEnumerator
              (&local_30,(System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
               (MethodInfo_13C1150 *)
               MethodInfo_System_Collections_Generic_Dictionary_string_JSONNode_GetEnumerator);
    (__this->fields).__7__wrap1.fields._dictionary = local_30.fields._dictionary;
    (__this->fields).__7__wrap1.fields._version = local_30.fields._version;
    (__this->fields).__7__wrap1.fields._index = local_30.fields._index;
    (__this->fields).__7__wrap1.fields._current.fields.key = local_30.fields._current.fields.key;
    (__this->fields).__7__wrap1.fields._current.fields.value = local_30.fields._current.fields.value;
    (__this->fields).__7__wrap1.fields._getEnumeratorRetType = local_30.fields._getEnumeratorRetType;
    *(undefined4 *)&(__this->fields).__7__wrap1.fields.field_0x24 = local_30.fields._36_4_;
    Il2CppCodeGenWriteBarrier((void **)&(__this->fields).__7__wrap1,(void *)0x0);
  }
  else if (iVar1 != 1) {
    return false;
  }
  (__this->fields).__1__state = -3;
  bVar3 = System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext
                    ((System_Collections_Generic_Dictionary_Enumerator_object__object__o *)
                     &(__this->fields).__7__wrap1,
                     (MethodInfo_1585360 *)
                     MethodInfo_System_Collections_Generic_Dictionary_Enumerator_string_JSONNode_MoveNext);
  if (bVar3) {
    value = (__this->fields).__7__wrap1.fields._current.fields.value;
    (__this->fields).__2__current = (SimpleJSONFixed_JSONNode_o *)value;
    Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current,value);
    (__this->fields).__1__state = 1;
    bVar3 = true;
  }
  else {
    if (Il2CppMethodInitialized_1843449bb == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_System_Collections_Generic_Dictionary_Enumerator_string_JSONNode_Dispose);
      Il2CppMethodInitialized_1843449bb = '\x01';
    }
    (__this->fields).__1__state = -1;
    System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose
              ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&(__this->fields).__7__wrap1,
               MethodInfo_System_Collections_Generic_Dictionary_Enumerator_string_JSONNode_Dispose);
    (__this->fields).__7__wrap1.fields._dictionary =
         (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
    (__this->fields).__7__wrap1.fields._version = 0;
    (__this->fields).__7__wrap1.fields._index = 0;
    (__this->fields).__7__wrap1.fields._current.fields.key = (Il2CppObject *)0x0;
    (__this->fields).__7__wrap1.fields._current.fields.value = (Il2CppObject *)0x0;
    *(undefined8 *)&(__this->fields).__7__wrap1.fields._getEnumeratorRetType = 0;
    bVar3 = false;
  }
  return bVar3;
}


// SimpleJSONFixed.JSONObject.<get_Children>d__27$$<>m__Finally1
// il2cpp: void SimpleJSONFixed_JSONObject__get_Children_d__27____m__Finally1 (SimpleJSONFixed_JSONObject__get_Children_d__27_o* __this, const MethodInfo* method);
// 0x181dd15c0

void SimpleJSONFixed_JSONObject__get_Children_d__27____m__Finally1
               (SimpleJSONFixed_JSONObject__get_Children_d__27_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_1843449bb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_Enumerator_string_JSONNode_Dispose);
    Il2CppMethodInitialized_1843449bb = '\x01';
  }
  (__this->fields).__1__state = -1;
  System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&(__this->fields).__7__wrap1,
             MethodInfo_System_Collections_Generic_Dictionary_Enumerator_string_JSONNode_Dispose);
  return;
}


// SimpleJSONFixed.JSONObject.<get_Children>d__27$$System.Collections.Generic.IEnumerator<SimpleJSONFixed.JSONNode>.get_Current
// il2cpp: SimpleJSONFixed_JSONNode_o* SimpleJSONFixed_JSONObject__get_Children_d__27__System_Collections_Generic_IEnumerator_SimpleJSONFixed_JSONNode__get_Current (SimpleJSONFixed_JSONObject__get_Children_d__27_o* __this, const MethodInfo* method);
// 0x180573e90

SimpleJSONFixed_JSONNode_o*
SimpleJSONFixed_JSONObject__get_Children_d__27__System_Collections_Generic_IEnumerator_SimpleJSONFixed_JSONNode__get_Current(SimpleJSONFixed_JSONObject__get_Children_d__27_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// SimpleJSONFixed.JSONObject.<get_Children>d__27$$System.Collections.IEnumerator.Reset
// il2cpp: void SimpleJSONFixed_JSONObject__get_Children_d__27__System_Collections_IEnumerator_Reset (SimpleJSONFixed_JSONObject__get_Children_d__27_o* __this, const MethodInfo* method);
// 0x181dd14f0

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
// 0x180573e90

Il2CppObject*
SimpleJSONFixed_JSONObject__get_Children_d__27__System_Collections_IEnumerator_get_Current(SimpleJSONFixed_JSONObject__get_Children_d__27_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// SimpleJSONFixed.JSONObject.<get_Children>d__27$$System.Collections.Generic.IEnumerable<SimpleJSONFixed.JSONNode>.GetEnumerator
// il2cpp: System_Collections_Generic_IEnumerator_JSONNode__o* SimpleJSONFixed_JSONObject__get_Children_d__27__System_Collections_Generic_IEnumerable_SimpleJSONFixed_JSONNode__GetEnumerator (SimpleJSONFixed_JSONObject__get_Children_d__27_o* __this, const MethodInfo* method);
// 0x181dd1450

System_Collections_Generic_IEnumerator_JSONNode__o*
SimpleJSONFixed_JSONObject__get_Children_d__27__System_Collections_Generic_IEnumerable_SimpleJSONFixed_JSONNode__GetEnumerator(SimpleJSONFixed_JSONObject__get_Children_d__27_o* __this, MethodInfo* method)

{
  int iVar1;
  SimpleJSONFixed_JSONObject_o *value;
  int32_t iVar2;
  SimpleJSONFixed_JSONObject__get_Children_d__27_o *__this_00;
  
  if (Il2CppMethodInitialized_1843449bc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONObject_get_Children_d__27);
    Il2CppMethodInitialized_1843449bc = '\x01';
  }
  if ((__this->fields).__1__state == -2) {
    iVar1 = (__this->fields).__l__initialThreadId;
    iVar2 = System_Diagnostics_TraceEventCache__GetThreadId((MethodInfo *)0x0);
    if (iVar1 == iVar2) {
      (__this->fields).__1__state = 0;
      return (System_Collections_IEnumerator_o *)__this;
    }
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONObject_get_Children_d__27)
  ;
  System_Configuration_ConfigurationCollectionAttribute___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).__1__state = 0;
  iVar2 = System_Diagnostics_TraceEventCache__GetThreadId((MethodInfo *)0x0);
  (__this_00->fields).__l__initialThreadId = iVar2;
  value = (__this->fields).__4__this;
  (__this_00->fields).__4__this = value;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this,value);
  return (System_Collections_IEnumerator_o *)__this_00;
}


// SimpleJSONFixed.JSONObject.<get_Children>d__27$$System.Collections.IEnumerable.GetEnumerator
// il2cpp: System_Collections_IEnumerator_o* SimpleJSONFixed_JSONObject__get_Children_d__27__System_Collections_IEnumerable_GetEnumerator (SimpleJSONFixed_JSONObject__get_Children_d__27_o* __this, const MethodInfo* method);
// 0x181dd1450

System_Collections_IEnumerator_o *
SimpleJSONFixed_JSONObject__get_Children_d__27__System_Collections_IEnumerable_GetEnumerator
          (SimpleJSONFixed_JSONObject__get_Children_d__27_o *__this,MethodInfo *method)

{
  int iVar1;
  SimpleJSONFixed_JSONObject_o *value;
  int32_t iVar2;
  SimpleJSONFixed_JSONObject__get_Children_d__27_o *__this_00;
  
  if (Il2CppMethodInitialized_1843449bc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONObject_get_Children_d__27);
    Il2CppMethodInitialized_1843449bc = '\x01';
  }
  if ((__this->fields).__1__state == -2) {
    iVar1 = (__this->fields).__l__initialThreadId;
    iVar2 = System_Diagnostics_TraceEventCache__GetThreadId((MethodInfo *)0x0);
    if (iVar1 == iVar2) {
      (__this->fields).__1__state = 0;
      return (System_Collections_IEnumerator_o *)__this;
    }
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONObject_get_Children_d__27)
  ;
  System_Configuration_ConfigurationCollectionAttribute___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).__1__state = 0;
  iVar2 = System_Diagnostics_TraceEventCache__GetThreadId((MethodInfo *)0x0);
  (__this_00->fields).__l__initialThreadId = iVar2;
  value = (__this->fields).__4__this;
  (__this_00->fields).__4__this = value;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this,value);
  return (System_Collections_IEnumerator_o *)__this_00;
}


// SimpleJSONFixed.JSONObject$$get_Inline
// il2cpp: bool SimpleJSONFixed_JSONObject__get_Inline (SimpleJSONFixed_JSONObject_o* __this, const MethodInfo* method);
// 0x18111ad30

bool
SimpleJSONFixed_JSONObject__get_Inline(SimpleJSONFixed_JSONObject_o* __this, MethodInfo* method)

{
  return (__this->fields)._inline_;
}


// SimpleJSONFixed.JSONObject$$set_Inline
// il2cpp: void SimpleJSONFixed_JSONObject__set_Inline (SimpleJSONFixed_JSONObject_o* __this, bool value, const MethodInfo* method);
// 0x18111c9f0

void
SimpleJSONFixed_JSONObject__set_Inline(SimpleJSONFixed_JSONObject_o* __this, bool value, MethodInfo* method)

{
  (__this->fields)._inline_ = value;
  return;
}


// SimpleJSONFixed.JSONObject$$get_Tag
// il2cpp: int32_t SimpleJSONFixed_JSONObject__get_Tag (SimpleJSONFixed_JSONObject_o* __this, const MethodInfo* method);
// 0x180846f80

int32_t
SimpleJSONFixed_JSONObject__get_Tag(SimpleJSONFixed_JSONObject_o* __this, MethodInfo* method)

{
  return 2;
}


// SimpleJSONFixed.JSONObject$$get_IsObject
// il2cpp: bool SimpleJSONFixed_JSONObject__get_IsObject (SimpleJSONFixed_JSONObject_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
SimpleJSONFixed_JSONObject__get_IsObject(SimpleJSONFixed_JSONObject_o* __this, MethodInfo* method)

{
  return true;
}


// SimpleJSONFixed.JSONObject$$GetEnumerator
// il2cpp: SimpleJSONFixed_JSONNode_Enumerator_o SimpleJSONFixed_JSONObject__GetEnumerator (SimpleJSONFixed_JSONObject_o* __this, const MethodInfo* method);
// 0x181dc5f10

SimpleJSONFixed_JSONNode_Enumerator_o *
SimpleJSONFixed_JSONObject__GetEnumerator
          (SimpleJSONFixed_JSONNode_Enumerator_o *__return_storage_ptr__,SimpleJSONFixed_JSONObject_o *__this,
          MethodInfo *method)

{
  System_Collections_Generic_Dictionary_string__JSONNode__o *__this_00;
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o local_38;
  
  if (Il2CppMethodInitialized_1843449a8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_JSONNode_GetEnumerator);
    Il2CppMethodInitialized_1843449a8 = '\x01';
  }
  __this_00 = (__this->fields).m_Dict;
  if (__this_00 != (System_Collections_Generic_Dictionary_string__JSONNode__o *)0x0) {
    System_Collections_Generic_Dictionary_PhotonNetwork_RaiseEventBatch__object___GetEnumerator
              (&local_38,(System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
               (MethodInfo_13C1150 *)
               MethodInfo_System_Collections_Generic_Dictionary_string_JSONNode_GetEnumerator);
    *(undefined8 *)&__return_storage_ptr__->fields = 2;
    (__return_storage_ptr__->fields).m_Array.fields._list = (System_Collections_Generic_List_T__o *)0x0;
    (__return_storage_ptr__->fields).m_Array.fields._index = 0;
    (__return_storage_ptr__->fields).m_Array.fields._version = 0;
    (__return_storage_ptr__->fields).m_Array.fields._current = (SimpleJSONFixed_JSONNode_o *)0x0;
    (__return_storage_ptr__->fields).m_Object.fields._dictionary = local_38.fields._dictionary;
    (__return_storage_ptr__->fields).m_Object.fields._version = local_38.fields._version;
    (__return_storage_ptr__->fields).m_Object.fields._index = local_38.fields._index;
    (__return_storage_ptr__->fields).m_Object.fields._current.fields.key = local_38.fields._current.fields.key
    ;
    (__return_storage_ptr__->fields).m_Object.fields._current.fields.value =
         local_38.fields._current.fields.value;
    (__return_storage_ptr__->fields).m_Object.fields._getEnumeratorRetType =
         local_38.fields._getEnumeratorRetType;
    *(undefined4 *)&(__return_storage_ptr__->fields).m_Object.fields.field_0x24 = local_38.fields._36_4_;
    Il2CppCodeGenWriteBarrier((void **)&(__return_storage_ptr__->fields).m_Object,(void *)0x0);
    (__return_storage_ptr__->fields).m_Array.fields._list = (System_Collections_Generic_List_T__o *)0x0;
    (__return_storage_ptr__->fields).m_Array.fields._index = 0;
    (__return_storage_ptr__->fields).m_Array.fields._version = 0;
    (__return_storage_ptr__->fields).m_Array.fields._current = (SimpleJSONFixed_JSONNode_o *)0x0;
    return __return_storage_ptr__;
  }
  ThrowNullReferenceException();
}


// SimpleJSONFixed.JSONObject$$get_Item
// il2cpp: SimpleJSONFixed_JSONNode_o* SimpleJSONFixed_JSONObject__get_Item (SimpleJSONFixed_JSONObject_o* __this, System_String_o* aKey, const MethodInfo* method);
// 0x181dc6890

SimpleJSONFixed_JSONNode_o *
SimpleJSONFixed_JSONObject__get_Item
          (SimpleJSONFixed_JSONObject_o *__this,System_String_o *aKey,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_string__JSONNode__o *__this_00;
  System_Collections_Generic_Dictionary_object__object__o *__this_01;
  bool bVar1;
  SimpleJSONFixed_JSONLazyCreator_o *__this_02;
  SimpleJSONFixed_JSONNode_o *pSVar2;
  
  if (Il2CppMethodInitialized_1843449a9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_JSONNode_ContainsKey);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_JSONNode_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONLazyCreator);
    Il2CppMethodInitialized_1843449a9 = '\x01';
  }
  __this_00 = (__this->fields).m_Dict;
  if (__this_00 != (System_Collections_Generic_Dictionary_string__JSONNode__o *)0x0) {
    bVar1 = System_Collections_Generic_Dictionary_object__StyleComplexSelector_PseudoStateData___ContainsKey
                      ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,(Il2CppObject *)aKey
                       ,(MethodInfo_1455450 *)
                        MethodInfo_System_Collections_Generic_Dictionary_string_JSONNode_ContainsKey);
    if (!bVar1) {
      __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONLazyCreator);
      SimpleJSONFixed_JSONLazyCreator___ctor_1dc1760
                (__this_02,(SimpleJSONFixed_JSONNode_o *)__this,aKey,(MethodInfo *)0x0);
      return (SimpleJSONFixed_JSONNode_o *)__this_02;
    }
    __this_01 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).m_Dict;
    if (__this_01 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      pSVar2 = System_Collections_Generic_Dictionary_object__object___get_Item
                         (__this_01,(Il2CppObject *)aKey,
                          (MethodInfo_147A5B0 *)
                          MethodInfo_System_Collections_Generic_Dictionary_string_JSONNode_get_Item);
      return pSVar2;
    }
  }
  ThrowNullReferenceException();
}


// SimpleJSONFixed.JSONObject$$set_Item
// il2cpp: void SimpleJSONFixed_JSONObject__set_Item (SimpleJSONFixed_JSONObject_o* __this, System_String_o* aKey, SimpleJSONFixed_JSONNode_o* value, const MethodInfo* method);
// 0x181dc6b30
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181dc6c6c: mov rdx, qword ptr [rip + 0x22e979d]  ; TypeInfo_SimpleJSONFixed_JSONNull

void SimpleJSONFixed_JSONObject__set_Item
               (SimpleJSONFixed_JSONObject_o *__this,System_String_o *aKey,SimpleJSONFixed_JSONNode_o *value,
               MethodInfo *method)

{
  byte bVar1;
  SimpleJSONFixed_JSONNode_c *pSVar2;
  System_Collections_Generic_Dictionary_string__JSONNode__o *__this_00;
  System_Collections_Generic_Dictionary_object__object__o *__this_01;
  bool bVar3;
  SimpleJSONFixed_JSONNode_o *pSVar4;
  
  if (Il2CppMethodInitialized_1843449aa == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_JSONNode_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_JSONNode_ContainsKey);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_JSONNode_set_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNull);
    Il2CppMethodInitialized_1843449aa = '\x01';
  }
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  if (Il2CppMethodInitialized_18434497c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONLazyCreator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNull);
    Il2CppMethodInitialized_18434497c = '\x01';
  }
  if (value != (SimpleJSONFixed_JSONNode_o *)0x0) {
    pSVar2 = value->klass;
    bVar1 = (TypeInfo_SimpleJSONFixed_JSONNull->_2).typeHierarchyDepth;
    if (((pSVar2->_2).typeHierarchyDepth < bVar1) ||
       ((pSVar2->_2).typeHierarchy[(ulonglong)bVar1 - 1] != (Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNull))
    {
      bVar1 = (TypeInfo_SimpleJSONFixed_JSONLazyCreator->_2).typeHierarchyDepth;
      if (((pSVar2->_2).typeHierarchyDepth < bVar1) ||
         ((pSVar2->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
          (Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONLazyCreator)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      pSVar4 = (SimpleJSONFixed_JSONNode_o *)0x0;
      if (bVar3) {
        pSVar4 = value;
      }
      bVar3 = pSVar4 != (SimpleJSONFixed_JSONNode_o *)0x0;
    }
    else {
      bVar3 = true;
    }
    if ((!bVar3) &&
       (bVar3 = (*(value->klass->vtable)._0_Equals.methodPtr)
                          (value,(Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o *)0x0,
                           (value->klass->vtable)._0_Equals.method), !bVar3)) goto label_181dc6c8e;
  }
  if ((TypeInfo_SimpleJSONFixed_JSONNull->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNull);
  }
  value = (SimpleJSONFixed_JSONNode_o *)SimpleJSONFixed_JSONNull__CreateOrGet((MethodInfo *)0x0);
label_181dc6c8e:
  __this_00 = (__this->fields).m_Dict;
  if (__this_00 != (System_Collections_Generic_Dictionary_string__JSONNode__o *)0x0) {
    bVar3 = System_Collections_Generic_Dictionary_object__StyleComplexSelector_PseudoStateData___ContainsKey
                      ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,(Il2CppObject *)aKey
                       ,(MethodInfo_1455450 *)
                        MethodInfo_System_Collections_Generic_Dictionary_string_JSONNode_ContainsKey);
    __this_01 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).m_Dict;
    if (__this_01 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      if (bVar3) {
        System_Collections_Generic_Dictionary_object__object___set_Item
                  (__this_01,(Il2CppObject *)aKey,(Il2CppObject *)value,
                   (MethodInfo_147A7F0 *)
                   MethodInfo_System_Collections_Generic_Dictionary_string_JSONNode_set_Item);
        return;
      }
      System_Collections_Generic_Dictionary_object__object___Add
                (__this_01,(Il2CppObject *)aKey,(Il2CppObject *)value,
                 (MethodInfo_146B4B0 *)MethodInfo_System_Collections_Generic_Dictionary_string_JSONNode_Add);
      return;
    }
  }
  ThrowNullReferenceException();
}


// SimpleJSONFixed.JSONObject$$get_Item
// il2cpp: SimpleJSONFixed_JSONNode_o* SimpleJSONFixed_JSONObject__get_Item (SimpleJSONFixed_JSONObject_o* __this, int32_t aIndex, const MethodInfo* method);
// 0x181dc67f0

SimpleJSONFixed_JSONNode_o *
SimpleJSONFixed_JSONObject__get_Item_1dc67f0
          (SimpleJSONFixed_JSONObject_o *__this,int32_t aIndex,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_string__JSONNode__o *__this_00;
  int32_t iVar1;
  System_Collections_Generic_KeyValuePair_object__object__o local_18;
  
  if (Il2CppMethodInitialized_1843449ab == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_JSONNode_get_Count);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Linq_Enumerable_ElementAt_KeyValuePair_string_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_KeyValuePair_string_JSONNode_get_Value);
    Il2CppMethodInitialized_1843449ab = '\x01';
  }
  if (-1 < aIndex) {
    __this_00 = (__this->fields).m_Dict;
    if (__this_00 == (System_Collections_Generic_Dictionary_string__JSONNode__o *)0x0) {
      ThrowNullReferenceException();
    }
    iVar1 = System_Collections_Generic_Dictionary_fsPortableReflection_AttributeQuery__object___get_Count
                      ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
                       (MethodInfo_13CDEB0 *)
                       MethodInfo_System_Collections_Generic_Dictionary_string_JSONNode_get_Count);
    if (aIndex < iVar1) {
      System_Linq_Enumerable__ElementAt_KeyValuePair_object__object__
                (&local_18,(System_Collections_Generic_IEnumerable_TSource__o *)(__this->fields).m_Dict,aIndex
                 ,(MethodInfo_6BB640 *)
                  MethodInfo_System_Linq_Enumerable_ElementAt_KeyValuePair_string_JSONNode);
      return (SimpleJSONFixed_JSONNode_o *)local_18.fields.value;
    }
  }
  return (SimpleJSONFixed_JSONNode_o *)0x0;
}


// SimpleJSONFixed.JSONObject$$set_Item
// il2cpp: void SimpleJSONFixed_JSONObject__set_Item (SimpleJSONFixed_JSONObject_o* __this, int32_t aIndex, SimpleJSONFixed_JSONNode_o* value, const MethodInfo* method);
// 0x181dc6950
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181dc6a97: mov rdx, qword ptr [rip + 0x22e9972]  ; TypeInfo_SimpleJSONFixed_JSONNull

void SimpleJSONFixed_JSONObject__set_Item_1dc6950
               (SimpleJSONFixed_JSONObject_o *__this,int32_t aIndex,SimpleJSONFixed_JSONNode_o *value,
               MethodInfo *method)

{
  byte bVar1;
  SimpleJSONFixed_JSONNode_c *pSVar2;
  System_Collections_Generic_Dictionary_string__JSONNode__o *__this_00;
  System_Collections_Generic_Dictionary_object__object__o *__this_01;
  bool bVar3;
  int32_t iVar4;
  SimpleJSONFixed_JSONNode_o *pSVar5;
  System_Collections_Generic_KeyValuePair_object__object__o local_18;
  
  if (Il2CppMethodInitialized_1843449ac == '\0') {
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
    Il2CppMethodInitialized_1843449ac = '\x01';
  }
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  if (Il2CppMethodInitialized_18434497c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONLazyCreator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNull);
    Il2CppMethodInitialized_18434497c = '\x01';
  }
  if (value == (SimpleJSONFixed_JSONNode_o *)0x0) {
label_181dc6a9e:
    if ((TypeInfo_SimpleJSONFixed_JSONNull->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNull);
    }
    value = (SimpleJSONFixed_JSONNode_o *)SimpleJSONFixed_JSONNull__CreateOrGet((MethodInfo *)0x0);
  }
  else {
    pSVar2 = value->klass;
    bVar1 = (TypeInfo_SimpleJSONFixed_JSONNull->_2).typeHierarchyDepth;
    if (((pSVar2->_2).typeHierarchyDepth < bVar1) ||
       ((pSVar2->_2).typeHierarchy[(ulonglong)bVar1 - 1] != (Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNull))
    {
      bVar1 = (TypeInfo_SimpleJSONFixed_JSONLazyCreator->_2).typeHierarchyDepth;
      if (((pSVar2->_2).typeHierarchyDepth < bVar1) ||
         ((pSVar2->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
          (Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONLazyCreator)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      pSVar5 = (SimpleJSONFixed_JSONNode_o *)0x0;
      if (bVar3) {
        pSVar5 = value;
      }
      bVar3 = pSVar5 != (SimpleJSONFixed_JSONNode_o *)0x0;
    }
    else {
      bVar3 = true;
    }
    if ((bVar3) ||
       (bVar3 = (*(value->klass->vtable)._0_Equals.methodPtr)
                          (value,(Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o *)0x0,
                           (value->klass->vtable)._0_Equals.method), bVar3)) goto label_181dc6a9e;
  }
  if (-1 < aIndex) {
    __this_00 = (__this->fields).m_Dict;
    if (__this_00 == (System_Collections_Generic_Dictionary_string__JSONNode__o *)0x0) {
label_181dc6b1b:
      ThrowNullReferenceException();
    }
    iVar4 = System_Collections_Generic_Dictionary_fsPortableReflection_AttributeQuery__object___get_Count
                      ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
                       (MethodInfo_13CDEB0 *)
                       MethodInfo_System_Collections_Generic_Dictionary_string_JSONNode_get_Count);
    if (aIndex < iVar4) {
      System_Linq_Enumerable__ElementAt_KeyValuePair_object__object__
                (&local_18,(System_Collections_Generic_IEnumerable_TSource__o *)(__this->fields).m_Dict,aIndex
                 ,(MethodInfo_6BB640 *)
                  MethodInfo_System_Linq_Enumerable_ElementAt_KeyValuePair_string_JSONNode);
      __this_01 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).m_Dict;
      if (__this_01 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_181dc6b1b;
      System_Collections_Generic_Dictionary_object__object___set_Item
                (__this_01,local_18.fields.key,(Il2CppObject *)value,
                 (MethodInfo_147A7F0 *)
                 MethodInfo_System_Collections_Generic_Dictionary_string_JSONNode_set_Item);
    }
  }
  return;
}


// SimpleJSONFixed.JSONObject$$get_Count
// il2cpp: int32_t SimpleJSONFixed_JSONObject__get_Count (SimpleJSONFixed_JSONObject_o* __this, const MethodInfo* method);
// 0x181dc67a0

int32_t SimpleJSONFixed_JSONObject__get_Count(SimpleJSONFixed_JSONObject_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_string__JSONNode__o *__this_00;
  int32_t iVar1;
  
  if (Il2CppMethodInitialized_1843449ad == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_JSONNode_get_Count);
    Il2CppMethodInitialized_1843449ad = '\x01';
  }
  __this_00 = (__this->fields).m_Dict;
  if (__this_00 != (System_Collections_Generic_Dictionary_string__JSONNode__o *)0x0) {
    iVar1 = System_Collections_Generic_Dictionary_fsPortableReflection_AttributeQuery__object___get_Count
                      ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
                       (MethodInfo_13CDEB0 *)
                       MethodInfo_System_Collections_Generic_Dictionary_string_JSONNode_get_Count);
    return iVar1;
  }
  ThrowNullReferenceException();
}


// SimpleJSONFixed.JSONObject$$Add
// il2cpp: void SimpleJSONFixed_JSONObject__Add (SimpleJSONFixed_JSONObject_o* __this, System_String_o* aKey, SimpleJSONFixed_JSONNode_o* aItem, const MethodInfo* method);
// 0x181dc5af0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181dc5c2e: mov rdx, qword ptr [rip + 0x22ea7db]  ; TypeInfo_SimpleJSONFixed_JSONNull

void SimpleJSONFixed_JSONObject__Add
               (SimpleJSONFixed_JSONObject_o *__this,System_String_o *aKey,SimpleJSONFixed_JSONNode_o *aItem,
               MethodInfo *method)

{
  byte bVar1;
  SimpleJSONFixed_JSONNode_c *pSVar2;
  System_Collections_Generic_Dictionary_object__object__o *pSVar3;
  bool bVar4;
  SimpleJSONFixed_JSONNode_o *pSVar5;
  System_Guid_o *pSVar6;
  System_String_o *key;
  System_Guid_Fields local_48;
  System_Guid_o local_38;
  
  if (Il2CppMethodInitialized_1843449ae == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_JSONNode_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_JSONNode_ContainsKey);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_JSONNode_set_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNull);
    Il2CppMethodInitialized_1843449ae = '\x01';
  }
  local_48._a = 0;
  local_48._b = 0;
  local_48._c = 0;
  local_48._d = '\0';
  local_48._e = '\0';
  local_48._f = '\0';
  local_48._g = '\0';
  local_48._h = '\0';
  local_48._i = '\0';
  local_48._j = '\0';
  local_48._k = '\0';
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  if (Il2CppMethodInitialized_18434497c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONLazyCreator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNull);
    Il2CppMethodInitialized_18434497c = '\x01';
  }
  if (aItem != (SimpleJSONFixed_JSONNode_o *)0x0) {
    pSVar2 = aItem->klass;
    bVar1 = (TypeInfo_SimpleJSONFixed_JSONNull->_2).typeHierarchyDepth;
    if (((pSVar2->_2).typeHierarchyDepth < bVar1) ||
       ((pSVar2->_2).typeHierarchy[(ulonglong)bVar1 - 1] != (Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNull))
    {
      bVar1 = (TypeInfo_SimpleJSONFixed_JSONLazyCreator->_2).typeHierarchyDepth;
      if (((pSVar2->_2).typeHierarchyDepth < bVar1) ||
         ((pSVar2->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
          (Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONLazyCreator)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      pSVar5 = (SimpleJSONFixed_JSONNode_o *)0x0;
      if (bVar4) {
        pSVar5 = aItem;
      }
      bVar4 = pSVar5 != (SimpleJSONFixed_JSONNode_o *)0x0;
    }
    else {
      bVar4 = true;
    }
    if ((!bVar4) &&
       (bVar4 = (*(aItem->klass->vtable)._0_Equals.methodPtr)
                          (aItem,(Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o *)0x0,
                           (aItem->klass->vtable)._0_Equals.method), !bVar4)) goto label_181dc5c50;
  }
  if ((TypeInfo_SimpleJSONFixed_JSONNull->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNull);
  }
  aItem = (SimpleJSONFixed_JSONNode_o *)SimpleJSONFixed_JSONNull__CreateOrGet((MethodInfo *)0x0);
label_181dc5c50:
  pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).m_Dict;
  if (aKey == (System_String_o *)0x0) {
    pSVar6 = System_Guid__NewGuid(&local_38,(MethodInfo *)0x0);
    local_48._a = (pSVar6->fields)._a;
    local_48._b = (pSVar6->fields)._b;
    local_48._c = (pSVar6->fields)._c;
    local_48._d = (pSVar6->fields)._d;
    local_48._e = (pSVar6->fields)._e;
    local_48._f = (pSVar6->fields)._f;
    local_48._g = (pSVar6->fields)._g;
    local_48._h = (pSVar6->fields)._h;
    local_48._i = (pSVar6->fields)._i;
    local_48._j = (pSVar6->fields)._j;
    local_48._k = (pSVar6->fields)._k;
    key = System_Guid__ToString((System_Guid_o *)&local_48,(MethodInfo *)0x0);
    if (pSVar3 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      System_Collections_Generic_Dictionary_object__object___Add
                (pSVar3,(Il2CppObject *)key,(Il2CppObject *)aItem,
                 (MethodInfo_146B4B0 *)MethodInfo_System_Collections_Generic_Dictionary_string_JSONNode_Add);
      return;
    }
  }
  else if (pSVar3 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    bVar4 = System_Collections_Generic_Dictionary_object__StyleComplexSelector_PseudoStateData___ContainsKey
                      ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar3,(Il2CppObject *)aKey,
                       (MethodInfo_1455450 *)
                       MethodInfo_System_Collections_Generic_Dictionary_string_JSONNode_ContainsKey);
    pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).m_Dict;
    if (pSVar3 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      if (bVar4) {
        System_Collections_Generic_Dictionary_object__object___set_Item
                  (pSVar3,(Il2CppObject *)aKey,(Il2CppObject *)aItem,
                   (MethodInfo_147A7F0 *)
                   MethodInfo_System_Collections_Generic_Dictionary_string_JSONNode_set_Item);
        return;
      }
      System_Collections_Generic_Dictionary_object__object___Add
                (pSVar3,(Il2CppObject *)aKey,(Il2CppObject *)aItem,
                 (MethodInfo_146B4B0 *)MethodInfo_System_Collections_Generic_Dictionary_string_JSONNode_Add);
      return;
    }
  }
  ThrowNullReferenceException();
}


// SimpleJSONFixed.JSONObject$$Remove
// il2cpp: SimpleJSONFixed_JSONNode_o* SimpleJSONFixed_JSONObject__Remove (SimpleJSONFixed_JSONObject_o* __this, System_String_o* aKey, const MethodInfo* method);
// 0x181dc60a0

SimpleJSONFixed_JSONNode_o *
SimpleJSONFixed_JSONObject__Remove
          (SimpleJSONFixed_JSONObject_o *__this,System_String_o *aKey,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_string__JSONNode__o *__this_00;
  System_Collections_Generic_Dictionary_object__object__o *pSVar1;
  bool bVar2;
  SimpleJSONFixed_JSONNode_o *pSVar3;
  
  if (Il2CppMethodInitialized_1843449af == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_JSONNode_ContainsKey);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_JSONNode_Remove);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_JSONNode_get_Item);
    Il2CppMethodInitialized_1843449af = '\x01';
  }
  __this_00 = (__this->fields).m_Dict;
  if (__this_00 != (System_Collections_Generic_Dictionary_string__JSONNode__o *)0x0) {
    bVar2 = System_Collections_Generic_Dictionary_object__StyleComplexSelector_PseudoStateData___ContainsKey
                      ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,(Il2CppObject *)aKey
                       ,(MethodInfo_1455450 *)
                        MethodInfo_System_Collections_Generic_Dictionary_string_JSONNode_ContainsKey);
    if (!bVar2) {
      return (SimpleJSONFixed_JSONNode_o *)0x0;
    }
    pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).m_Dict;
    if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      pSVar3 = System_Collections_Generic_Dictionary_object__object___get_Item
                         (pSVar1,(Il2CppObject *)aKey,
                          (MethodInfo_147A5B0 *)
                          MethodInfo_System_Collections_Generic_Dictionary_string_JSONNode_get_Item);
      pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).m_Dict;
      if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
        System_Collections_Generic_Dictionary_object__object___Remove
                  (pSVar1,(Il2CppObject *)aKey,
                   (MethodInfo_1470BF0 *)
                   MethodInfo_System_Collections_Generic_Dictionary_string_JSONNode_Remove);
        return pSVar3;
      }
    }
  }
  ThrowNullReferenceException();
}


// SimpleJSONFixed.JSONObject$$Remove
// il2cpp: SimpleJSONFixed_JSONNode_o* SimpleJSONFixed_JSONObject__Remove (SimpleJSONFixed_JSONObject_o* __this, int32_t aIndex, const MethodInfo* method);
// 0x181dc62a0

SimpleJSONFixed_JSONNode_o *
SimpleJSONFixed_JSONObject__Remove_1dc62a0
          (SimpleJSONFixed_JSONObject_o *__this,int32_t aIndex,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_string__JSONNode__o *__this_00;
  System_Collections_Generic_Dictionary_object__object__o *__this_01;
  int32_t iVar1;
  System_Collections_Generic_KeyValuePair_object__object__o local_18;
  
  if (Il2CppMethodInitialized_1843449b0 == '\0') {
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
    Il2CppMethodInitialized_1843449b0 = '\x01';
  }
  if (aIndex < 0) {
    return (SimpleJSONFixed_JSONNode_o *)0x0;
  }
  __this_00 = (__this->fields).m_Dict;
  if (__this_00 != (System_Collections_Generic_Dictionary_string__JSONNode__o *)0x0) {
    iVar1 = System_Collections_Generic_Dictionary_fsPortableReflection_AttributeQuery__object___get_Count
                      ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
                       (MethodInfo_13CDEB0 *)
                       MethodInfo_System_Collections_Generic_Dictionary_string_JSONNode_get_Count);
    if (iVar1 <= aIndex) {
      return (SimpleJSONFixed_JSONNode_o *)0x0;
    }
    System_Linq_Enumerable__ElementAt_KeyValuePair_object__object__
              (&local_18,(System_Collections_Generic_IEnumerable_TSource__o *)(__this->fields).m_Dict,aIndex,
               (MethodInfo_6BB640 *)MethodInfo_System_Linq_Enumerable_ElementAt_KeyValuePair_string_JSONNode);
    __this_01 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).m_Dict;
    if (__this_01 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      System_Collections_Generic_Dictionary_object__object___Remove
                (__this_01,local_18.fields.key,
                 (MethodInfo_1470BF0 *)MethodInfo_System_Collections_Generic_Dictionary_string_JSONNode_Remove
                );
      return (SimpleJSONFixed_JSONNode_o *)local_18.fields.value;
    }
  }
  ThrowNullReferenceException();
}


// SimpleJSONFixed.JSONObject$$Remove
// il2cpp: SimpleJSONFixed_JSONNode_o* SimpleJSONFixed_JSONObject__Remove (SimpleJSONFixed_JSONObject_o* __this, SimpleJSONFixed_JSONNode_o* aNode, const MethodInfo* method);
// 0x181dc6170
// eh: try 0x181dc6217..0x181dc629e -> pad 0x183315840 (+1 call sites) catch Il2CppExceptionWrapper [managed catch: runtime default class]
// asm: 24 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181dc6285: xor eax, eax
// asm:   0x183315840: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183315845: push rbx
// asm:   0x183315846: push rbp
// asm:   0x183315847: sub rsp, 0x28
// asm:   0x18331584b: mov rbp, rdx
// asm:   0x18331584e: mov rbx, qword ptr [rbp + 0x28]
// asm:   0x183315852: mov rdx, qword ptr [rbx]
// asm:   0x183315855: mov rdx, qword ptr [rdx]
// asm:   0x183315858: mov rcx, qword ptr [rip + 0x103f571]
// asm:   0x18331585f: call 0x180416950  ; il2cpp_codegen_class_is_assignable_from()
// asm:   0x183315864: test al, al
// asm:   0x183315866: je 0x183315874
// asm:   0x183315868: movabs rax, 0
// asm:   0x183315872: jmp 0x18331588c
// asm:   0x183315874: mov rax, qword ptr [rbx]
// asm:   0x183315877: mov qword ptr [rbp + 0x20], rax
// asm:   0x18331587b: lea rdx, [rip + 0xcc6706]
// asm:   0x183315882: lea rcx, [rbp + 0x20]
// asm:   0x183315886: call 0x1804ef7d0  ; _CxxThrowException()
// asm:   0x18331588c: add rsp, 0x28
// asm:   0x183315890: pop rbp
// asm:   0x183315891: pop rbx
// asm:   0x183315892: ret 

SimpleJSONFixed_JSONNode_o *
SimpleJSONFixed_JSONObject__Remove_1dc6170
          (SimpleJSONFixed_JSONObject_o *__this,SimpleJSONFixed_JSONNode_o *aNode,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_string__JSONNode__o *source;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  SimpleJSONFixed_JSONObject___c__DisplayClass21_0_o *object;
  System_Predicate_T__o *__this_01;
  System_Collections_Generic_IEnumerable_TSource__o *source_00;
  System_Collections_Generic_KeyValuePair_object__object__o local_38;
  
  if (Il2CppMethodInitialized_1843449b1 == '\0') {
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
    Il2CppMethodInitialized_1843449b1 = '\x01';
  }
  object = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONObject_c__DisplayClass21_0);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)object,(MethodInfo *)0x0);
  if (object != (SimpleJSONFixed_JSONObject___c__DisplayClass21_0_o *)0x0) {
    (object->fields).aNode = aNode;
    Il2CppCodeGenWriteBarrier(&(object->fields).aNode,aNode);
    source = (__this->fields).m_Dict;
    __this_01 = (System_Predicate_T__o *)
                il2cpp_codegen_object_new
                          ((Il2CppClass *)TypeInfo_System_Func_KeyValuePair_string_JSONNode_bool);
    System_Func_KeyValuePair_object__object___bool____ctor
              (__this_01,(Il2CppObject *)object,
               (intptr_t)MethodInfo_SimpleJSONFixed_JSONObject_c__DisplayClass21_0_Remove_b__0,
               (MethodInfo_B61280 *)0x0);
    source_00 = System_Linq_Enumerable__Where_RoleSpriteDefinition_
                          ((System_Collections_Generic_IEnumerable_TSource__o *)source,
                           (System_Func_TSource__bool__o *)__this_01,
                           (MethodInfo_6CA8B0 *)
                           MethodInfo_System_Linq_Enumerable_Where_KeyValuePair_string_JSONNode);
    System_Linq_Enumerable__First_KeyValuePair_object__object__
              (&local_38,source_00,
               (MethodInfo_6BDDE0 *)MethodInfo_System_Linq_Enumerable_First_KeyValuePair_string_JSONNode);
    __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).m_Dict;
    if (__this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      System_Collections_Generic_Dictionary_object__object___Remove
                (__this_00,local_38.fields.key,
                 (MethodInfo_1470BF0 *)MethodInfo_System_Collections_Generic_Dictionary_string_JSONNode_Remove
                );
      return (object->fields).aNode;
    }
    ThrowNullReferenceException();
  }
  ThrowNullReferenceException();
}


// SimpleJSONFixed.JSONObject$$Clear
// il2cpp: void SimpleJSONFixed_JSONObject__Clear (SimpleJSONFixed_JSONObject_o* __this, const MethodInfo* method);
// 0x181dc5d00

void SimpleJSONFixed_JSONObject__Clear(SimpleJSONFixed_JSONObject_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_string__JSONNode__o *__this_00;
  
  if (Il2CppMethodInitialized_1843449b2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_JSONNode_Clear);
    Il2CppMethodInitialized_1843449b2 = '\x01';
  }
  __this_00 = (__this->fields).m_Dict;
  if (__this_00 != (System_Collections_Generic_Dictionary_string__JSONNode__o *)0x0) {
    System_Collections_Generic_Dictionary_fsPortableReflection_AttributeQuery__object___Clear
              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
               (MethodInfo_13BF1C0 *)MethodInfo_System_Collections_Generic_Dictionary_string_JSONNode_Clear);
    return;
  }
  ThrowNullReferenceException();
}


// SimpleJSONFixed.JSONObject$$Clone
// il2cpp: SimpleJSONFixed_JSONNode_o* SimpleJSONFixed_JSONObject__Clone (SimpleJSONFixed_JSONObject_o* __this, const MethodInfo* method);
// 0x181dc5d50
// eh: try 0x181dc5e52..0x181dc5f08 -> pad 0x183315930 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 19 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181dc5ebb: mov rdx, qword ptr [rip + 0x22f61be]  ; MethodInfo_System_Collections_Generic_Dictionary_Enumerator_string_JSONNode_Dispose
// asm:   0x181dc5ec2: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x181dc5ec7: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x181dc5ecc: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x181dc5ed1: test rcx, rcx
// asm:   0x181dc5ed4: jne 0x181dc5f08
// asm:   0x181dc5ed6: mov rdi, qword ptr [rsp + 0xa0]
// asm:   0x181dc5f08: call 0x1804171b0  ; il2cpp_codegen_rethrow()
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

SimpleJSONFixed_JSONNode_o *
SimpleJSONFixed_JSONObject__Clone(SimpleJSONFixed_JSONObject_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_string__JSONNode__o *__this_00;
  Il2CppObject *pIVar1;
  bool bVar2;
  SimpleJSONFixed_JSONObject_o *__this_01;
  SimpleJSONFixed_JSONNode_o *pSVar3;
  System_Collections_Generic_Dictionary_Enumerator_object__object__o local_60;
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o local_38;
  
  if (Il2CppMethodInitialized_1843449b3 == '\0') {
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
    Il2CppMethodInitialized_1843449b3 = '\x01';
  }
  local_60.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_60.fields._version = 0;
  local_60.fields._index = 0;
  local_60.fields._current.fields.key = (Il2CppObject *)0x0;
  local_60.fields._current.fields.value = (Il2CppObject *)0x0;
  local_60.fields._getEnumeratorRetType = 0;
  local_60.fields._36_4_ = 0;
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONObject);
  SimpleJSONFixed_JSONObject___ctor(__this_01,(MethodInfo *)0x0);
  __this_00 = (__this->fields).m_Dict;
  if (__this_00 != (System_Collections_Generic_Dictionary_string__JSONNode__o *)0x0) {
    System_Collections_Generic_Dictionary_PhotonNetwork_RaiseEventBatch__object___GetEnumerator
              (&local_38,(System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
               (MethodInfo_13C1150 *)
               MethodInfo_System_Collections_Generic_Dictionary_string_JSONNode_GetEnumerator);
    local_60.fields._dictionary = local_38.fields._dictionary;
    local_60.fields._version = local_38.fields._version;
    local_60.fields._index = local_38.fields._index;
    local_60.fields._current.fields.key = local_38.fields._current.fields.key;
    local_60.fields._current.fields.value = local_38.fields._current.fields.value;
    local_60.fields._getEnumeratorRetType = local_38.fields._getEnumeratorRetType;
    local_60.fields._36_4_ = local_38.fields._36_4_;
    while( true ) {
      bVar2 = System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext
                        (&local_60,
                         (MethodInfo_1585360 *)
                         MethodInfo_System_Collections_Generic_Dictionary_Enumerator_string_JSONNode_MoveNext)
      ;
      pIVar1 = local_60.fields._current.fields.key;
      if (!bVar2) {
        System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose
                  ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_60,
                   MethodInfo_System_Collections_Generic_Dictionary_Enumerator_string_JSONNode_Dispose);
        return (SimpleJSONFixed_JSONNode_o *)__this_01;
      }
      if (local_60.fields._current.fields.value == (Il2CppObject *)0x0) break;
      pSVar3 = (SimpleJSONFixed_JSONNode_o *)
               (*(local_60.fields._current.fields.value)->klass->vtable[0x1a].methodPtr)
                         (local_60.fields._current.fields.value,
                          (local_60.fields._current.fields.value)->klass->vtable[0x1a].method);
      if (__this_01 == (SimpleJSONFixed_JSONObject_o *)0x0) {
        ThrowNullReferenceException();
      }
      (*(__this_01->klass->vtable)._20_Add.methodPtr)
                (__this_01,(System_String_o *)pIVar1,pSVar3,(__this_01->klass->vtable)._20_Add.method);
    }
    ThrowNullReferenceException();
  }
  ThrowNullReferenceException();
}


// SimpleJSONFixed.JSONObject$$HasKey
// il2cpp: bool SimpleJSONFixed_JSONObject__HasKey (SimpleJSONFixed_JSONObject_o* __this, System_String_o* aKey, const MethodInfo* method);
// 0x181dc6040

bool SimpleJSONFixed_JSONObject__HasKey
               (SimpleJSONFixed_JSONObject_o *__this,System_String_o *aKey,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_string__JSONNode__o *__this_00;
  bool bVar1;
  
  if (Il2CppMethodInitialized_1843449b4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_JSONNode_ContainsKey);
    Il2CppMethodInitialized_1843449b4 = '\x01';
  }
  __this_00 = (__this->fields).m_Dict;
  if (__this_00 != (System_Collections_Generic_Dictionary_string__JSONNode__o *)0x0) {
    bVar1 = System_Collections_Generic_Dictionary_object__StyleComplexSelector_PseudoStateData___ContainsKey
                      ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,(Il2CppObject *)aKey
                       ,(MethodInfo_1455450 *)
                        MethodInfo_System_Collections_Generic_Dictionary_string_JSONNode_ContainsKey);
    return bVar1;
  }
  ThrowNullReferenceException();
}


// SimpleJSONFixed.JSONObject$$GetValueOrDefault
// il2cpp: SimpleJSONFixed_JSONNode_o* SimpleJSONFixed_JSONObject__GetValueOrDefault (SimpleJSONFixed_JSONObject_o* __this, System_String_o* aKey, SimpleJSONFixed_JSONNode_o* aDefault, const MethodInfo* method);
// 0x181dc5fc0

SimpleJSONFixed_JSONNode_o *
SimpleJSONFixed_JSONObject__GetValueOrDefault
          (SimpleJSONFixed_JSONObject_o *__this,System_String_o *aKey,SimpleJSONFixed_JSONNode_o *aDefault,
          MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  bool bVar1;
  Il2CppObject *local_res8;
  
  if (Il2CppMethodInitialized_1843449b5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_JSONNode_TryGetValue);
    Il2CppMethodInitialized_1843449b5 = '\x01';
  }
  __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).m_Dict;
  local_res8 = (Il2CppObject *)0x0;
  if (__this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    bVar1 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                      (__this_00,(Il2CppObject *)aKey,&local_res8,
                       (MethodInfo_14769C0 *)
                       MethodInfo_System_Collections_Generic_Dictionary_string_JSONNode_TryGetValue);
    if (!bVar1) {
      local_res8 = (Il2CppObject *)aDefault;
    }
    return (SimpleJSONFixed_JSONNode_o *)local_res8;
  }
  ThrowNullReferenceException();
}


// SimpleJSONFixed.JSONObject$$get_Children
// il2cpp: System_Collections_Generic_IEnumerable_JSONNode__o* SimpleJSONFixed_JSONObject__get_Children (SimpleJSONFixed_JSONObject_o* __this, const MethodInfo* method);
// 0x181dc6720

System_Collections_Generic_IEnumerable_JSONNode__o *
SimpleJSONFixed_JSONObject__get_Children(SimpleJSONFixed_JSONObject_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  SimpleJSONFixed_JSONObject__get_Children_d__27_o *__this_00;
  
  if (Il2CppMethodInitialized_1843449b6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONObject_get_Children_d__27);
    Il2CppMethodInitialized_1843449b6 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONObject_get_Children_d__27)
  ;
  System_Configuration_ConfigurationCollectionAttribute___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).__1__state = -2;
  iVar1 = System_Diagnostics_TraceEventCache__GetThreadId((MethodInfo *)0x0);
  (__this_00->fields).__l__initialThreadId = iVar1;
  (__this_00->fields).__4__this = __this;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this,__this);
  return (System_Collections_Generic_IEnumerable_JSONNode__o *)__this_00;
}


// SimpleJSONFixed.JSONObject$$WriteToStringBuilder
// il2cpp: void SimpleJSONFixed_JSONObject__WriteToStringBuilder (SimpleJSONFixed_JSONObject_o* __this, System_Text_StringBuilder_o* aSB, int32_t aIndent, int32_t aIndentInc, int32_t aMode, const MethodInfo* method);
// 0x181dc6370
// eh: try 0x181dc64b0..0x181dc6672 -> pad 0x18333c0d0 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 21 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181dc65e0: mov rdx, qword ptr [rip + 0x22f5a99]  ; MethodInfo_System_Collections_Generic_Dictionary_Enumerator_string_JSONNode_Dispose
// asm:   0x181dc65e7: mov rcx, qword ptr [rsp + 0x40]
// asm:   0x181dc65ec: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x181dc65f1: mov rcx, qword ptr [rsp + 0x38]
// asm:   0x181dc65f6: test rcx, rcx
// asm:   0x181dc65f9: jne 0x181dc6672
// asm:   0x181dc65fb: mov r13d, dword ptr [rsp + 0xf0]
// asm:   0x181dc6603: mov rdi, qword ptr [rsp + 0xe8]
// asm:   0x181dc660b: mov r14d, dword ptr [rsp + 0x30]
// asm:   0x181dc6672: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x18333c0d0: mov qword ptr [rsp + 0x10], rdx
// asm:   0x18333c0d5: push rbp
// asm:   0x18333c0d6: sub rsp, 0x30
// asm:   0x18333c0da: mov rbp, rdx
// asm:   0x18333c0dd: mov rax, qword ptr [rbp + 0x70]
// asm:   0x18333c0e1: mov rcx, qword ptr [rax]
// asm:   0x18333c0e4: mov qword ptr [rbp + 0x38], rcx
// asm:   0x18333c0e8: movabs rax, 0
// asm:   0x18333c0f2: add rsp, 0x30
// asm:   0x18333c0f6: pop rbp
// asm:   0x18333c0f7: ret 

void SimpleJSONFixed_JSONObject__WriteToStringBuilder
               (SimpleJSONFixed_JSONObject_o *__this,System_Text_StringBuilder_o *aSB,int32_t aIndent,
               int32_t aIndentInc,int32_t aMode,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_string__JSONNode__o *__this_00;
  bool bVar1;
  Il2CppObject *aText;
  Il2CppObject *pIVar2;
  bool bVar3;
  System_Text_StringBuilder_o *pSVar4;
  System_String_o *value;
  int iVar5;
  System_Collections_Generic_Dictionary_Enumerator_object__object__o local_90;
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o local_60;
  
  if (Il2CppMethodInitialized_1843449b7 == '\0') {
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
    Il2CppMethodInitialized_1843449b7 = '\x01';
  }
  local_90.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_90.fields._version = 0;
  local_90.fields._index = 0;
  local_90.fields._current.fields.key = (Il2CppObject *)0x0;
  local_90.fields._current.fields.value = (Il2CppObject *)0x0;
  local_90.fields._getEnumeratorRetType = 0;
  local_90.fields._36_4_ = 0;
  if (aSB != (System_Text_StringBuilder_o *)0x0) {
    System_Text_StringBuilder__Append_197e090(aSB,0x7b,(MethodInfo *)0x0);
    iVar5 = 0;
    if ((__this->fields).field1_0x8 == false) {
      iVar5 = aMode;
    }
    __this_00 = (__this->fields).m_Dict;
    if (__this_00 != (System_Collections_Generic_Dictionary_string__JSONNode__o *)0x0) {
      bVar1 = true;
      System_Collections_Generic_Dictionary_PhotonNetwork_RaiseEventBatch__object___GetEnumerator
                (&local_60,(System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
                 (MethodInfo_13C1150 *)
                 MethodInfo_System_Collections_Generic_Dictionary_string_JSONNode_GetEnumerator);
      local_90.fields._dictionary = local_60.fields._dictionary;
      local_90.fields._version = local_60.fields._version;
      local_90.fields._index = local_60.fields._index;
      local_90.fields._current.fields.key = local_60.fields._current.fields.key;
      local_90.fields._current.fields.value = local_60.fields._current.fields.value;
      local_90.fields._getEnumeratorRetType = local_60.fields._getEnumeratorRetType;
      local_90.fields._36_4_ = local_60.fields._36_4_;
      while( true ) {
        bVar3 = System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext
                          (&local_90,
                           (MethodInfo_1585360 *)
                           MethodInfo_System_Collections_Generic_Dictionary_Enumerator_string_JSONNode_MoveNext
                          );
        pIVar2 = local_90.fields._current.fields.value;
        aText = local_90.fields._current.fields.key;
        if (!bVar3) break;
        if (!bVar1) {
          System_Text_StringBuilder__Append_197e090(aSB,0x2c,(MethodInfo *)0x0);
        }
        if (iVar5 == 1) {
          System_Text_StringBuilder__AppendLine(aSB,(MethodInfo *)0x0);
          System_Text_StringBuilder__Append(aSB,0x20,aIndentInc + aIndent,(MethodInfo *)0x0);
        }
        pSVar4 = System_Text_StringBuilder__Append_197e090(aSB,0x22,(MethodInfo *)0x0);
        if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
        }
        value = SimpleJSONFixed_JSONNode__Escape((System_String_o *)aText,(MethodInfo *)0x0);
        if (pSVar4 == (System_Text_StringBuilder_o *)0x0) {
          ThrowNullReferenceException();
        }
        pSVar4 = System_Text_StringBuilder__Append_197dca0(pSVar4,value,(MethodInfo *)0x0);
        if (pSVar4 == (System_Text_StringBuilder_o *)0x0) {
          ThrowNullReferenceException();
        }
        System_Text_StringBuilder__Append_197e090(pSVar4,0x22,(MethodInfo *)0x0);
        if (iVar5 == 0) {
          System_Text_StringBuilder__Append_197e090(aSB,0x3a,(MethodInfo *)0x0);
        }
        else {
          System_Text_StringBuilder__Append_197dca0(aSB," : ",(MethodInfo *)0x0);
        }
        if (pIVar2 == (Il2CppObject *)0x0) {
          ThrowNullReferenceException();
        }
        bVar1 = false;
        il2cpp_runtime_helper_180353740(0x1f,pIVar2,aSB,aIndentInc + aIndent,aIndentInc,iVar5);
      }
      System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose
                ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_90,
                 MethodInfo_System_Collections_Generic_Dictionary_Enumerator_string_JSONNode_Dispose);
      if (iVar5 == 1) {
        pSVar4 = System_Text_StringBuilder__AppendLine(aSB,(MethodInfo *)0x0);
        if (pSVar4 == (System_Text_StringBuilder_o *)0x0) goto label_181dc665b;
        System_Text_StringBuilder__Append(pSVar4,0x20,aIndent,(MethodInfo *)0x0);
      }
      System_Text_StringBuilder__Append_197e090(aSB,0x7d,(MethodInfo *)0x0);
      return;
    }
  }
label_181dc665b:
  ThrowNullReferenceException();
}


// SimpleJSONFixed.JSONObject$$.ctor
// il2cpp: void SimpleJSONFixed_JSONObject___ctor (SimpleJSONFixed_JSONObject_o* __this, const MethodInfo* method);
// 0x181dc6680

void SimpleJSONFixed_JSONObject___ctor(SimpleJSONFixed_JSONObject_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_string__JSONNode__o *__this_00;
  
  if (Il2CppMethodInitialized_1843449b8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_JSONNode_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_Dictionary_string_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    Il2CppMethodInitialized_1843449b8 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_string_JSONNode);
  System_Collections_Generic_Dictionary_object__object____ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
             (MethodInfo_1454140 *)MethodInfo_System_Collections_Generic_Dictionary_string_JSONNode_ctor);
  (__this->fields).m_Dict = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields).m_Dict,__this_00);
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


