// Type: SimpleJSONFixed.JSONArray
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/SimpleJSONFixed/JSONArray.cs
// Prior real C# source (older reference): Assets/Scripts/Utility/SimpleJSON.cs
// --------------------------------

// SimpleJSONFixed.JSONArray.<get_Children>d__24$$.ctor
// il2cpp: void SimpleJSONFixed_JSONArray__get_Children_d__24___ctor (SimpleJSONFixed_JSONArray__get_Children_d__24_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x1808e2870

void
SimpleJSONFixed_JSONArray__get_Children_d__24___ctor(SimpleJSONFixed_JSONArray__get_Children_d__24_o* __this, int32_t __1__state, MethodInfo* method)

{
  int32_t iVar1;
  
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  iVar1 = System_Diagnostics_TraceEventCache__GetThreadId((MethodInfo *)0x0);
  (__this->fields).__l__initialThreadId = iVar1;
  return;
}


// SimpleJSONFixed.JSONArray.<get_Children>d__24$$System.IDisposable.Dispose
// il2cpp: void SimpleJSONFixed_JSONArray__get_Children_d__24__System_IDisposable_Dispose (SimpleJSONFixed_JSONArray__get_Children_d__24_o* __this, const MethodInfo* method);
// 0x181dd1190
// asm: 6 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181dd11f4: lea rcx, [rsp + 0x30]
// asm:   0x181dd11f9: call 0x181db8fd0  ; il2cpp_runtime_helper_181db8fd0()
// asm:   0x181dd11fe: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x181dd1203: test rcx, rcx
// asm:   0x181dd1206: jne 0x181dd120e
// asm:   0x181dd120e: call 0x1804171b0  ; il2cpp_codegen_rethrow()

void SimpleJSONFixed_JSONArray__get_Children_d__24__System_IDisposable_Dispose
               (SimpleJSONFixed_JSONArray__get_Children_d__24_o *__this,MethodInfo *method)

{
  int iVar1;
  
  iVar1 = (__this->fields).__1__state;
  if ((iVar1 == -3) || (iVar1 == 1)) {
    if (Il2CppMethodInitialized_1843449a6 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_System_Collections_Generic_List_Enumerator_JSONNode_Dispose);
      Il2CppMethodInitialized_1843449a6 = '\x01';
    }
    (__this->fields).__1__state = -1;
    System_Collections_Generic_List_Enumerator_object___Dispose
              ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&(__this->fields).__7__wrap1,
               MethodInfo_System_Collections_Generic_List_Enumerator_JSONNode_Dispose);
  }
  return;
}


// SimpleJSONFixed.JSONArray.<get_Children>d__24$$MoveNext
// il2cpp: bool SimpleJSONFixed_JSONArray__get_Children_d__24__MoveNext (SimpleJSONFixed_JSONArray__get_Children_d__24_o* __this, const MethodInfo* method);
// 0x181dd0f00
// eh: try 0x181dd0f56..0x181dd1097 -> pad 0x183315930 (+2 call sites) catch Il2CppExceptionWrapper
// asm: 19 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181dd1076: mov rbx, qword ptr [rsp + 0x28]
// asm:   0x181dd107b: test rbx, rbx
// asm:   0x181dd107e: jne 0x181dd1097
// asm:   0x181dd1080: movzx eax, byte ptr [rsp + 0x70]
// asm:   0x181dd1097: lea rcx, [rsp + 0x30]
// asm:   0x181dd109c: call 0x181db8fb0  ; il2cpp_runtime_helper_181db8fb0()
// asm:   0x181dd10a1: mov rcx, rbx
// asm:   0x181dd10a4: call 0x1804171b0  ; il2cpp_codegen_rethrow()
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

bool SimpleJSONFixed_JSONArray__get_Children_d__24__MoveNext
               (SimpleJSONFixed_JSONArray__get_Children_d__24_o *__this,MethodInfo *method)

{
  int iVar1;
  SimpleJSONFixed_JSONArray_o *pSVar2;
  System_Collections_Generic_List_T__o *__this_00;
  SimpleJSONFixed_JSONNode_o *value;
  bool bVar3;
  System_Collections_Generic_List_Enumerator_T__o local_20;
  
  if (Il2CppMethodInitialized_1843449a5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_JSONNode_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_JSONNode_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_JSONNode_GetEnumerator);
    Il2CppMethodInitialized_1843449a5 = '\x01';
  }
  iVar1 = (__this->fields).__1__state;
  if (iVar1 == 0) {
    pSVar2 = (__this->fields).__4__this;
    (__this->fields).__1__state = -1;
    if (pSVar2 == (SimpleJSONFixed_JSONArray_o *)0x0) {
      ThrowNullReferenceException();
    }
    __this_00 = (System_Collections_Generic_List_T__o *)(pSVar2->fields).m_List;
    if (__this_00 == (System_Collections_Generic_List_T__o *)0x0) {
      ThrowNullReferenceException();
    }
    System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
              (&local_20,__this_00,
               (MethodInfo_91F180 *)MethodInfo_System_Collections_Generic_List_JSONNode_GetEnumerator);
    (__this->fields).__7__wrap1.fields._list = local_20.fields._list;
    (__this->fields).__7__wrap1.fields._index = local_20.fields._index;
    (__this->fields).__7__wrap1.fields._version = local_20.fields._version;
    (__this->fields).__7__wrap1.fields._current = (SimpleJSONFixed_JSONNode_o *)local_20.fields._current;
    Il2CppCodeGenWriteBarrier((void **)&(__this->fields).__7__wrap1,(void *)0x0);
  }
  else if (iVar1 != 1) {
    return false;
  }
  (__this->fields).__1__state = -3;
  bVar3 = System_Collections_Generic_List_Enumerator_object___MoveNext
                    ((System_Collections_Generic_List_Enumerator_object__o *)&(__this->fields).__7__wrap1,
                     (MethodInfo_153A2A0 *)
                     MethodInfo_System_Collections_Generic_List_Enumerator_JSONNode_MoveNext);
  if (bVar3) {
    value = (__this->fields).__7__wrap1.fields._current;
    (__this->fields).__2__current = value;
    Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current,value);
    (__this->fields).__1__state = 1;
    bVar3 = true;
  }
  else {
    if (Il2CppMethodInitialized_1843449a6 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_System_Collections_Generic_List_Enumerator_JSONNode_Dispose);
      Il2CppMethodInitialized_1843449a6 = '\x01';
    }
    (__this->fields).__1__state = -1;
    System_Collections_Generic_List_Enumerator_object___Dispose
              ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&(__this->fields).__7__wrap1,
               MethodInfo_System_Collections_Generic_List_Enumerator_JSONNode_Dispose);
    (__this->fields).__7__wrap1.fields._list = (System_Collections_Generic_List_T__o *)0x0;
    (__this->fields).__7__wrap1.fields._index = 0;
    (__this->fields).__7__wrap1.fields._version = 0;
    (__this->fields).__7__wrap1.fields._current = (SimpleJSONFixed_JSONNode_o *)0x0;
    bVar3 = false;
  }
  return bVar3;
}


// SimpleJSONFixed.JSONArray.<get_Children>d__24$$<>m__Finally1
// il2cpp: void SimpleJSONFixed_JSONArray__get_Children_d__24____m__Finally1 (SimpleJSONFixed_JSONArray__get_Children_d__24_o* __this, const MethodInfo* method);
// 0x181dd1220

void SimpleJSONFixed_JSONArray__get_Children_d__24____m__Finally1
               (SimpleJSONFixed_JSONArray__get_Children_d__24_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_1843449a6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_JSONNode_Dispose);
    Il2CppMethodInitialized_1843449a6 = '\x01';
  }
  (__this->fields).__1__state = -1;
  System_Collections_Generic_List_Enumerator_object___Dispose
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&(__this->fields).__7__wrap1,
             MethodInfo_System_Collections_Generic_List_Enumerator_JSONNode_Dispose);
  return;
}


// SimpleJSONFixed.JSONArray.<get_Children>d__24$$System.Collections.Generic.IEnumerator<SimpleJSONFixed.JSONNode>.get_Current
// il2cpp: SimpleJSONFixed_JSONNode_o* SimpleJSONFixed_JSONArray__get_Children_d__24__System_Collections_Generic_IEnumerator_SimpleJSONFixed_JSONNode__get_Current (SimpleJSONFixed_JSONArray__get_Children_d__24_o* __this, const MethodInfo* method);
// 0x180573e90

SimpleJSONFixed_JSONNode_o*
SimpleJSONFixed_JSONArray__get_Children_d__24__System_Collections_Generic_IEnumerator_SimpleJSONFixed_JSONNode__get_Current(SimpleJSONFixed_JSONArray__get_Children_d__24_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// SimpleJSONFixed.JSONArray.<get_Children>d__24$$System.Collections.IEnumerator.Reset
// il2cpp: void SimpleJSONFixed_JSONArray__get_Children_d__24__System_Collections_IEnumerator_Reset (SimpleJSONFixed_JSONArray__get_Children_d__24_o* __this, const MethodInfo* method);
// 0x181dd1150

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
// 0x180573e90

Il2CppObject*
SimpleJSONFixed_JSONArray__get_Children_d__24__System_Collections_IEnumerator_get_Current(SimpleJSONFixed_JSONArray__get_Children_d__24_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// SimpleJSONFixed.JSONArray.<get_Children>d__24$$System.Collections.Generic.IEnumerable<SimpleJSONFixed.JSONNode>.GetEnumerator
// il2cpp: System_Collections_Generic_IEnumerator_JSONNode__o* SimpleJSONFixed_JSONArray__get_Children_d__24__System_Collections_Generic_IEnumerable_SimpleJSONFixed_JSONNode__GetEnumerator (SimpleJSONFixed_JSONArray__get_Children_d__24_o* __this, const MethodInfo* method);
// 0x181dd10b0

System_Collections_Generic_IEnumerator_JSONNode__o*
SimpleJSONFixed_JSONArray__get_Children_d__24__System_Collections_Generic_IEnumerable_SimpleJSONFixed_JSONNode__GetEnumerator(SimpleJSONFixed_JSONArray__get_Children_d__24_o* __this, MethodInfo* method)

{
  int iVar1;
  SimpleJSONFixed_JSONArray_o *value;
  int32_t iVar2;
  SimpleJSONFixed_JSONArray__get_Children_d__24_o *__this_00;
  
  if (Il2CppMethodInitialized_1843449a7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONArray_get_Children_d__24);
    Il2CppMethodInitialized_1843449a7 = '\x01';
  }
  if ((__this->fields).__1__state == -2) {
    iVar1 = (__this->fields).__l__initialThreadId;
    iVar2 = System_Diagnostics_TraceEventCache__GetThreadId((MethodInfo *)0x0);
    if (iVar1 == iVar2) {
      (__this->fields).__1__state = 0;
      return (System_Collections_IEnumerator_o *)__this;
    }
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONArray_get_Children_d__24);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).__1__state = 0;
  iVar2 = System_Diagnostics_TraceEventCache__GetThreadId((MethodInfo *)0x0);
  (__this_00->fields).__l__initialThreadId = iVar2;
  value = (__this->fields).__4__this;
  (__this_00->fields).__4__this = value;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this,value);
  return (System_Collections_IEnumerator_o *)__this_00;
}


// SimpleJSONFixed.JSONArray.<get_Children>d__24$$System.Collections.IEnumerable.GetEnumerator
// il2cpp: System_Collections_IEnumerator_o* SimpleJSONFixed_JSONArray__get_Children_d__24__System_Collections_IEnumerable_GetEnumerator (SimpleJSONFixed_JSONArray__get_Children_d__24_o* __this, const MethodInfo* method);
// 0x181dd10b0

System_Collections_IEnumerator_o *
SimpleJSONFixed_JSONArray__get_Children_d__24__System_Collections_IEnumerable_GetEnumerator
          (SimpleJSONFixed_JSONArray__get_Children_d__24_o *__this,MethodInfo *method)

{
  int iVar1;
  SimpleJSONFixed_JSONArray_o *value;
  int32_t iVar2;
  SimpleJSONFixed_JSONArray__get_Children_d__24_o *__this_00;
  
  if (Il2CppMethodInitialized_1843449a7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONArray_get_Children_d__24);
    Il2CppMethodInitialized_1843449a7 = '\x01';
  }
  if ((__this->fields).__1__state == -2) {
    iVar1 = (__this->fields).__l__initialThreadId;
    iVar2 = System_Diagnostics_TraceEventCache__GetThreadId((MethodInfo *)0x0);
    if (iVar1 == iVar2) {
      (__this->fields).__1__state = 0;
      return (System_Collections_IEnumerator_o *)__this;
    }
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONArray_get_Children_d__24);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).__1__state = 0;
  iVar2 = System_Diagnostics_TraceEventCache__GetThreadId((MethodInfo *)0x0);
  (__this_00->fields).__l__initialThreadId = iVar2;
  value = (__this->fields).__4__this;
  (__this_00->fields).__4__this = value;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this,value);
  return (System_Collections_IEnumerator_o *)__this_00;
}


// SimpleJSONFixed.JSONArray$$get_Inline
// il2cpp: bool SimpleJSONFixed_JSONArray__get_Inline (SimpleJSONFixed_JSONArray_o* __this, const MethodInfo* method);
// 0x18111ad30

bool
SimpleJSONFixed_JSONArray__get_Inline(SimpleJSONFixed_JSONArray_o* __this, MethodInfo* method)

{
  return (__this->fields)._inline_;
}


// SimpleJSONFixed.JSONArray$$set_Inline
// il2cpp: void SimpleJSONFixed_JSONArray__set_Inline (SimpleJSONFixed_JSONArray_o* __this, bool value, const MethodInfo* method);
// 0x18111c9f0

void
SimpleJSONFixed_JSONArray__set_Inline(SimpleJSONFixed_JSONArray_o* __this, bool value, MethodInfo* method)

{
  (__this->fields)._inline_ = value;
  return;
}


// SimpleJSONFixed.JSONArray$$get_Tag
// il2cpp: int32_t SimpleJSONFixed_JSONArray__get_Tag (SimpleJSONFixed_JSONArray_o* __this, const MethodInfo* method);
// 0x180564040

int32_t
SimpleJSONFixed_JSONArray__get_Tag(SimpleJSONFixed_JSONArray_o* __this, MethodInfo* method)

{
  return 1;
}


// SimpleJSONFixed.JSONArray$$get_IsArray
// il2cpp: bool SimpleJSONFixed_JSONArray__get_IsArray (SimpleJSONFixed_JSONArray_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
SimpleJSONFixed_JSONArray__get_IsArray(SimpleJSONFixed_JSONArray_o* __this, MethodInfo* method)

{
  return true;
}


// SimpleJSONFixed.JSONArray$$GetEnumerator
// il2cpp: SimpleJSONFixed_JSONNode_Enumerator_o SimpleJSONFixed_JSONArray__GetEnumerator (SimpleJSONFixed_JSONArray_o* __this, const MethodInfo* method);
// 0x181dc0940

SimpleJSONFixed_JSONNode_Enumerator_o *
SimpleJSONFixed_JSONArray__GetEnumerator
          (SimpleJSONFixed_JSONNode_Enumerator_o *__return_storage_ptr__,SimpleJSONFixed_JSONArray_o *__this,
          MethodInfo *method)

{
  System_Collections_Generic_List_T__o *__this_00;
  System_Collections_Generic_List_Enumerator_T__o local_28;
  
  if (Il2CppMethodInitialized_184344997 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_JSONNode_GetEnumerator);
    Il2CppMethodInitialized_184344997 = '\x01';
  }
  __this_00 = (System_Collections_Generic_List_T__o *)(__this->fields).m_List;
  if (__this_00 != (System_Collections_Generic_List_T__o *)0x0) {
    System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
              (&local_28,__this_00,
               (MethodInfo_91F180 *)MethodInfo_System_Collections_Generic_List_JSONNode_GetEnumerator);
    *(undefined8 *)&__return_storage_ptr__->fields = 1;
    (__return_storage_ptr__->fields).m_Object.fields._dictionary =
         (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
    (__return_storage_ptr__->fields).m_Object.fields._version = 0;
    (__return_storage_ptr__->fields).m_Object.fields._index = 0;
    (__return_storage_ptr__->fields).m_Object.fields._current.fields.key = (Il2CppObject *)0x0;
    (__return_storage_ptr__->fields).m_Object.fields._current.fields.value = (Il2CppObject *)0x0;
    *(undefined8 *)&(__return_storage_ptr__->fields).m_Object.fields._getEnumeratorRetType = 0;
    (__return_storage_ptr__->fields).m_Array.fields._list = local_28.fields._list;
    (__return_storage_ptr__->fields).m_Array.fields._index = local_28.fields._index;
    (__return_storage_ptr__->fields).m_Array.fields._version = local_28.fields._version;
    (__return_storage_ptr__->fields).m_Array.fields._current =
         (SimpleJSONFixed_JSONNode_o *)local_28.fields._current;
    Il2CppCodeGenWriteBarrier((void **)&(__return_storage_ptr__->fields).m_Array,(void *)0x0);
    return __return_storage_ptr__;
  }
  ThrowNullReferenceException();
}


// SimpleJSONFixed.JSONArray$$get_Item
// il2cpp: SimpleJSONFixed_JSONNode_o* SimpleJSONFixed_JSONArray__get_Item (SimpleJSONFixed_JSONArray_o* __this, int32_t aIndex, const MethodInfo* method);
// 0x181dc0dc0

SimpleJSONFixed_JSONNode_o *
SimpleJSONFixed_JSONArray__get_Item(SimpleJSONFixed_JSONArray_o *__this,int32_t aIndex,MethodInfo *method)

{
  System_Collections_Generic_List_object__o *__this_00;
  SimpleJSONFixed_JSONNode_o *pSVar1;
  SimpleJSONFixed_JSONLazyCreator_o *__this_01;
  
  if (Il2CppMethodInitialized_184344998 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONLazyCreator);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_JSONNode_get_Count)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_JSONNode_get_Item);
    Il2CppMethodInitialized_184344998 = '\x01';
  }
  if (-1 < aIndex) {
    __this_00 = (System_Collections_Generic_List_object__o *)(__this->fields).m_List;
    if (__this_00 == (System_Collections_Generic_List_object__o *)0x0) {
      ThrowNullReferenceException();
    }
    if (aIndex < (__this_00->fields)._size) {
      pSVar1 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                         (__this_00,aIndex,
                          (MethodInfo_92B830 *)MethodInfo_System_Collections_Generic_List_JSONNode_get_Item);
      return pSVar1;
    }
  }
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONLazyCreator);
  SimpleJSONFixed_JSONLazyCreator___ctor(__this_01,(SimpleJSONFixed_JSONNode_o *)__this,(MethodInfo *)0x0);
  return (SimpleJSONFixed_JSONNode_o *)__this_01;
}


// SimpleJSONFixed.JSONArray$$set_Item
// il2cpp: void SimpleJSONFixed_JSONArray__set_Item (SimpleJSONFixed_JSONArray_o* __this, int32_t aIndex, SimpleJSONFixed_JSONNode_o* value, const MethodInfo* method);
// 0x181dc1090
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181dc11cb: mov rdx, qword ptr [rip + 0x22ef23e]  ; TypeInfo_SimpleJSONFixed_JSONNull

void SimpleJSONFixed_JSONArray__set_Item
               (SimpleJSONFixed_JSONArray_o *__this,int32_t aIndex,SimpleJSONFixed_JSONNode_o *value,
               MethodInfo *method)

{
  int32_t *piVar1;
  byte bVar2;
  uint uVar3;
  SimpleJSONFixed_JSONNode_c *pSVar4;
  System_Collections_Generic_List_object__o *pSVar5;
  System_Object_array *pSVar6;
  MethodInfo *pMVar7;
  bool bVar8;
  SimpleJSONFixed_JSONNode_o *pSVar9;
  
  if (Il2CppMethodInitialized_184344999 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNull);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_JSONNode_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_JSONNode_get_Count)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_JSONNode_set_Item);
    Il2CppMethodInitialized_184344999 = '\x01';
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
label_181dc11d2:
    if ((TypeInfo_SimpleJSONFixed_JSONNull->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNull);
    }
    value = (SimpleJSONFixed_JSONNode_o *)SimpleJSONFixed_JSONNull__CreateOrGet((MethodInfo *)0x0);
  }
  else {
    pSVar4 = value->klass;
    bVar2 = (TypeInfo_SimpleJSONFixed_JSONNull->_2).typeHierarchyDepth;
    if (((pSVar4->_2).typeHierarchyDepth < bVar2) ||
       ((pSVar4->_2).typeHierarchy[(ulonglong)bVar2 - 1] != (Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNull))
    {
      bVar2 = (TypeInfo_SimpleJSONFixed_JSONLazyCreator->_2).typeHierarchyDepth;
      if (((pSVar4->_2).typeHierarchyDepth < bVar2) ||
         ((pSVar4->_2).typeHierarchy[(ulonglong)bVar2 - 1] !=
          (Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONLazyCreator)) {
        bVar8 = false;
      }
      else {
        bVar8 = true;
      }
      pSVar9 = (SimpleJSONFixed_JSONNode_o *)0x0;
      if (bVar8) {
        pSVar9 = value;
      }
      bVar8 = pSVar9 != (SimpleJSONFixed_JSONNode_o *)0x0;
    }
    else {
      bVar8 = true;
    }
    if ((bVar8) ||
       (bVar8 = (*(value->klass->vtable)._0_Equals.methodPtr)
                          (value,(Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o *)0x0,
                           (value->klass->vtable)._0_Equals.method), bVar8)) goto label_181dc11d2;
  }
  pMVar7 = MethodInfo_System_Collections_Generic_List_JSONNode_Add;
  if (-1 < aIndex) {
    pSVar5 = (System_Collections_Generic_List_object__o *)(__this->fields).m_List;
    if (pSVar5 == (System_Collections_Generic_List_object__o *)0x0) goto label_181dc12a3;
    if (aIndex < (pSVar5->fields)._size) {
      System_Collections_Generic_List_object___set_Item
                (pSVar5,aIndex,(Il2CppObject *)value,
                 (MethodInfo_950000 *)MethodInfo_System_Collections_Generic_List_JSONNode_set_Item);
      return;
    }
  }
  pSVar5 = (System_Collections_Generic_List_object__o *)(__this->fields).m_List;
  if (pSVar5 != (System_Collections_Generic_List_object__o *)0x0) {
    piVar1 = &(pSVar5->fields)._version;
    *piVar1 = *piVar1 + 1;
    pSVar6 = (pSVar5->fields)._items;
    if (pSVar6 != (System_Object_array *)0x0) {
      uVar3 = (pSVar5->fields)._size;
      if ((uint)pSVar6->max_length <= uVar3) {
        System_Collections_Generic_List_object___AddWithResize
                  (pSVar5,(Il2CppObject *)value,(MethodInfo_93DD50 *)pMVar7->klass->rgctx_data[0xe].method);
        return;
      }
      (pSVar5->fields)._size = uVar3 + 1;
      if ((uint)pSVar6->max_length <= uVar3) {
        ThrowIndexOutOfRangeException();
      }
      pSVar6->m_Items[(int)uVar3] = (Il2CppObject *)value;
      Il2CppCodeGenWriteBarrier(pSVar6->m_Items + (int)uVar3,value);
      return;
    }
  }
label_181dc12a3:
  ThrowNullReferenceException();
}


// SimpleJSONFixed.JSONArray$$get_Item
// il2cpp: SimpleJSONFixed_JSONNode_o* SimpleJSONFixed_JSONArray__get_Item (SimpleJSONFixed_JSONArray_o* __this, System_String_o* aKey, const MethodInfo* method);
// 0x181dc0e70

SimpleJSONFixed_JSONNode_o *
SimpleJSONFixed_JSONArray__get_Item_1dc0e70
          (SimpleJSONFixed_JSONArray_o *__this,System_String_o *aKey,MethodInfo *method)

{
  SimpleJSONFixed_JSONLazyCreator_o *__this_00;
  
  if (Il2CppMethodInitialized_18434499a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONLazyCreator);
    Il2CppMethodInitialized_18434499a = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONLazyCreator);
  SimpleJSONFixed_JSONLazyCreator___ctor(__this_00,(SimpleJSONFixed_JSONNode_o *)__this,(MethodInfo *)0x0);
  return (SimpleJSONFixed_JSONNode_o *)__this_00;
}


// SimpleJSONFixed.JSONArray$$set_Item
// il2cpp: void SimpleJSONFixed_JSONArray__set_Item (SimpleJSONFixed_JSONArray_o* __this, System_String_o* aKey, SimpleJSONFixed_JSONNode_o* value, const MethodInfo* method);
// 0x181dc0ed0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181dc0fec: mov rdx, qword ptr [rip + 0x22ef41d]  ; TypeInfo_SimpleJSONFixed_JSONNull

void SimpleJSONFixed_JSONArray__set_Item_1dc0ed0
               (SimpleJSONFixed_JSONArray_o *__this,System_String_o *aKey,SimpleJSONFixed_JSONNode_o *value,
               MethodInfo *method)

{
  int32_t *piVar1;
  byte bVar2;
  uint uVar3;
  SimpleJSONFixed_JSONNode_c *pSVar4;
  System_Collections_Generic_List_object__o *__this_00;
  System_Object_array *pSVar5;
  MethodInfo *pMVar6;
  bool bVar7;
  SimpleJSONFixed_JSONNode_o *pSVar8;
  
  if (Il2CppMethodInitialized_18434499b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNull);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_JSONNode_Add);
    Il2CppMethodInitialized_18434499b = '\x01';
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
    pSVar4 = value->klass;
    bVar2 = (TypeInfo_SimpleJSONFixed_JSONNull->_2).typeHierarchyDepth;
    if (((pSVar4->_2).typeHierarchyDepth < bVar2) ||
       ((pSVar4->_2).typeHierarchy[(ulonglong)bVar2 - 1] != (Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNull))
    {
      bVar2 = (TypeInfo_SimpleJSONFixed_JSONLazyCreator->_2).typeHierarchyDepth;
      if (((pSVar4->_2).typeHierarchyDepth < bVar2) ||
         ((pSVar4->_2).typeHierarchy[(ulonglong)bVar2 - 1] !=
          (Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONLazyCreator)) {
        bVar7 = false;
      }
      else {
        bVar7 = true;
      }
      pSVar8 = (SimpleJSONFixed_JSONNode_o *)0x0;
      if (bVar7) {
        pSVar8 = value;
      }
      bVar7 = pSVar8 != (SimpleJSONFixed_JSONNode_o *)0x0;
    }
    else {
      bVar7 = true;
    }
    if ((!bVar7) &&
       (bVar7 = (*(value->klass->vtable)._0_Equals.methodPtr)
                          (value,(Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o *)0x0,
                           (value->klass->vtable)._0_Equals.method), !bVar7)) goto label_181dc100e;
  }
  if ((TypeInfo_SimpleJSONFixed_JSONNull->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNull);
  }
  value = (SimpleJSONFixed_JSONNode_o *)SimpleJSONFixed_JSONNull__CreateOrGet((MethodInfo *)0x0);
label_181dc100e:
  pMVar6 = MethodInfo_System_Collections_Generic_List_JSONNode_Add;
  __this_00 = (System_Collections_Generic_List_object__o *)(__this->fields).m_List;
  if (__this_00 != (System_Collections_Generic_List_object__o *)0x0) {
    piVar1 = &(__this_00->fields)._version;
    *piVar1 = *piVar1 + 1;
    pSVar5 = (__this_00->fields)._items;
    if (pSVar5 != (System_Object_array *)0x0) {
      uVar3 = (__this_00->fields)._size;
      if ((uint)pSVar5->max_length <= uVar3) {
        System_Collections_Generic_List_object___AddWithResize
                  (__this_00,(Il2CppObject *)value,(MethodInfo_93DD50 *)pMVar6->klass->rgctx_data[0xe].method)
        ;
        return;
      }
      (__this_00->fields)._size = uVar3 + 1;
      if ((uint)pSVar5->max_length <= uVar3) {
        ThrowIndexOutOfRangeException();
      }
      pSVar5->m_Items[(int)uVar3] = (Il2CppObject *)value;
      Il2CppCodeGenWriteBarrier(pSVar5->m_Items + (int)uVar3,value);
      return;
    }
  }
  ThrowNullReferenceException();
}


// SimpleJSONFixed.JSONArray$$get_Count
// il2cpp: int32_t SimpleJSONFixed_JSONArray__get_Count (SimpleJSONFixed_JSONArray_o* __this, const MethodInfo* method);
// 0x181dc0d80

int32_t SimpleJSONFixed_JSONArray__get_Count(SimpleJSONFixed_JSONArray_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_JSONNode__o *pSVar1;
  
  if (Il2CppMethodInitialized_18434499c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_JSONNode_get_Count)
    ;
    Il2CppMethodInitialized_18434499c = '\x01';
  }
  pSVar1 = (__this->fields).m_List;
  if (pSVar1 != (System_Collections_Generic_List_JSONNode__o *)0x0) {
    return (pSVar1->fields)._size;
  }
  ThrowNullReferenceException();
}


// SimpleJSONFixed.JSONArray$$Add
// il2cpp: void SimpleJSONFixed_JSONArray__Add (SimpleJSONFixed_JSONArray_o* __this, System_String_o* aKey, SimpleJSONFixed_JSONNode_o* aItem, const MethodInfo* method);
// 0x181dc0420
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181dc053c: mov rdx, qword ptr [rip + 0x22efecd]  ; TypeInfo_SimpleJSONFixed_JSONNull

void SimpleJSONFixed_JSONArray__Add
               (SimpleJSONFixed_JSONArray_o *__this,System_String_o *aKey,SimpleJSONFixed_JSONNode_o *aItem,
               MethodInfo *method)

{
  int32_t *piVar1;
  byte bVar2;
  uint uVar3;
  SimpleJSONFixed_JSONNode_c *pSVar4;
  System_Collections_Generic_List_object__o *__this_00;
  System_Object_array *pSVar5;
  MethodInfo *pMVar6;
  bool bVar7;
  SimpleJSONFixed_JSONNode_o *pSVar8;
  
  if (Il2CppMethodInitialized_18434499d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNull);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_JSONNode_Add);
    Il2CppMethodInitialized_18434499d = '\x01';
  }
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  if (Il2CppMethodInitialized_18434497c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONLazyCreator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNull);
    Il2CppMethodInitialized_18434497c = '\x01';
  }
  if (aItem != (SimpleJSONFixed_JSONNode_o *)0x0) {
    pSVar4 = aItem->klass;
    bVar2 = (TypeInfo_SimpleJSONFixed_JSONNull->_2).typeHierarchyDepth;
    if (((pSVar4->_2).typeHierarchyDepth < bVar2) ||
       ((pSVar4->_2).typeHierarchy[(ulonglong)bVar2 - 1] != (Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNull))
    {
      bVar2 = (TypeInfo_SimpleJSONFixed_JSONLazyCreator->_2).typeHierarchyDepth;
      if (((pSVar4->_2).typeHierarchyDepth < bVar2) ||
         ((pSVar4->_2).typeHierarchy[(ulonglong)bVar2 - 1] !=
          (Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONLazyCreator)) {
        bVar7 = false;
      }
      else {
        bVar7 = true;
      }
      pSVar8 = (SimpleJSONFixed_JSONNode_o *)0x0;
      if (bVar7) {
        pSVar8 = aItem;
      }
      bVar7 = pSVar8 != (SimpleJSONFixed_JSONNode_o *)0x0;
    }
    else {
      bVar7 = true;
    }
    if ((!bVar7) &&
       (bVar7 = (*(aItem->klass->vtable)._0_Equals.methodPtr)
                          (aItem,(Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o *)0x0,
                           (aItem->klass->vtable)._0_Equals.method), !bVar7)) goto label_181dc055e;
  }
  if ((TypeInfo_SimpleJSONFixed_JSONNull->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNull);
  }
  aItem = (SimpleJSONFixed_JSONNode_o *)SimpleJSONFixed_JSONNull__CreateOrGet((MethodInfo *)0x0);
label_181dc055e:
  pMVar6 = MethodInfo_System_Collections_Generic_List_JSONNode_Add;
  __this_00 = (System_Collections_Generic_List_object__o *)(__this->fields).m_List;
  if (__this_00 != (System_Collections_Generic_List_object__o *)0x0) {
    piVar1 = &(__this_00->fields)._version;
    *piVar1 = *piVar1 + 1;
    pSVar5 = (__this_00->fields)._items;
    if (pSVar5 != (System_Object_array *)0x0) {
      uVar3 = (__this_00->fields)._size;
      if ((uint)pSVar5->max_length <= uVar3) {
        System_Collections_Generic_List_object___AddWithResize
                  (__this_00,(Il2CppObject *)aItem,(MethodInfo_93DD50 *)pMVar6->klass->rgctx_data[0xe].method)
        ;
        return;
      }
      (__this_00->fields)._size = uVar3 + 1;
      if ((uint)pSVar5->max_length <= uVar3) {
        ThrowIndexOutOfRangeException();
      }
      pSVar5->m_Items[(int)uVar3] = (Il2CppObject *)aItem;
      Il2CppCodeGenWriteBarrier(pSVar5->m_Items + (int)uVar3,aItem);
      return;
    }
  }
  ThrowNullReferenceException();
}


// SimpleJSONFixed.JSONArray$$Remove
// il2cpp: SimpleJSONFixed_JSONNode_o* SimpleJSONFixed_JSONArray__Remove (SimpleJSONFixed_JSONArray_o* __this, int32_t aIndex, const MethodInfo* method);
// 0x181dc0a40

SimpleJSONFixed_JSONNode_o *
SimpleJSONFixed_JSONArray__Remove(SimpleJSONFixed_JSONArray_o *__this,int32_t aIndex,MethodInfo *method)

{
  System_Collections_Generic_List_object__o *pSVar1;
  SimpleJSONFixed_JSONNode_o *pSVar2;
  
  if (Il2CppMethodInitialized_18434499e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_JSONNode_RemoveAt);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_JSONNode_get_Count)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_JSONNode_get_Item);
    Il2CppMethodInitialized_18434499e = '\x01';
  }
  if (aIndex < 0) {
    return (SimpleJSONFixed_JSONNode_o *)0x0;
  }
  pSVar1 = (System_Collections_Generic_List_object__o *)(__this->fields).m_List;
  if (pSVar1 != (System_Collections_Generic_List_object__o *)0x0) {
    if ((pSVar1->fields)._size <= aIndex) {
      return (SimpleJSONFixed_JSONNode_o *)0x0;
    }
    pSVar2 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                       (pSVar1,aIndex,
                        (MethodInfo_92B830 *)MethodInfo_System_Collections_Generic_List_JSONNode_get_Item);
    pSVar1 = (System_Collections_Generic_List_object__o *)(__this->fields).m_List;
    if (pSVar1 != (System_Collections_Generic_List_object__o *)0x0) {
      System_Collections_Generic_List_object___RemoveAt
                (pSVar1,aIndex,
                 (MethodInfo_947010 *)MethodInfo_System_Collections_Generic_List_JSONNode_RemoveAt);
      return pSVar2;
    }
  }
  ThrowNullReferenceException();
}


// SimpleJSONFixed.JSONArray$$Remove
// il2cpp: SimpleJSONFixed_JSONNode_o* SimpleJSONFixed_JSONArray__Remove (SimpleJSONFixed_JSONArray_o* __this, SimpleJSONFixed_JSONNode_o* aNode, const MethodInfo* method);
// 0x181dc09e0

SimpleJSONFixed_JSONNode_o *
SimpleJSONFixed_JSONArray__Remove_1dc09e0
          (SimpleJSONFixed_JSONArray_o *__this,SimpleJSONFixed_JSONNode_o *aNode,MethodInfo *method)

{
  System_Collections_Generic_List_object__o *__this_00;
  
  if (Il2CppMethodInitialized_18434499f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_JSONNode_Remove);
    Il2CppMethodInitialized_18434499f = '\x01';
  }
  __this_00 = (System_Collections_Generic_List_object__o *)(__this->fields).m_List;
  if (__this_00 != (System_Collections_Generic_List_object__o *)0x0) {
    System_Collections_Generic_List_object___Remove
              (__this_00,(Il2CppObject *)aNode,
               (MethodInfo_947340 *)MethodInfo_System_Collections_Generic_List_JSONNode_Remove);
    return aNode;
  }
  ThrowNullReferenceException();
}


// SimpleJSONFixed.JSONArray$$Clear
// il2cpp: void SimpleJSONFixed_JSONArray__Clear (SimpleJSONFixed_JSONArray_o* __this, const MethodInfo* method);
// 0x181dc05e0

void SimpleJSONFixed_JSONArray__Clear(SimpleJSONFixed_JSONArray_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  int32_t length;
  System_Collections_Generic_List_JSONNode__o *pSVar2;
  
  if (Il2CppMethodInitialized_1843449a0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_JSONNode_Clear);
    Il2CppMethodInitialized_1843449a0 = '\x01';
  }
  pSVar2 = (__this->fields).m_List;
  if (pSVar2 != (System_Collections_Generic_List_JSONNode__o *)0x0) {
    length = (pSVar2->fields)._size;
    piVar1 = &(pSVar2->fields)._version;
    *piVar1 = *piVar1 + 1;
    (pSVar2->fields)._size = 0;
    if (0 < length) {
      System_Array__Clear((System_Array_o *)(pSVar2->fields)._items,0,length,(MethodInfo *)0x0);
      return;
    }
    return;
  }
  ThrowNullReferenceException();
}


// SimpleJSONFixed.JSONArray$$Clone
// il2cpp: SimpleJSONFixed_JSONNode_o* SimpleJSONFixed_JSONArray__Clone (SimpleJSONFixed_JSONArray_o* __this, const MethodInfo* method);
// 0x181dc0640
// eh: try 0x181dc0780..0x181dc08ec -> pad 0x183315930 catch Il2CppExceptionWrapper
// asm: 20 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181dc0779: nop dword ptr [rax]
// asm:   0x181dc08fd: mov rdx, qword ptr [rip + 0x22c8464]  ; MethodInfo_System_Collections_Generic_List_Enumerator_JSONNode_Dispose
// asm:   0x181dc0904: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x181dc0909: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x181dc090e: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x181dc0913: test rcx, rcx
// asm:   0x181dc0916: jne 0x181dc0939
// asm:   0x181dc0918: mov rsi, qword ptr [rsp + 0x80]
// asm:   0x181dc0939: call 0x1804171b0  ; il2cpp_codegen_rethrow()
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
SimpleJSONFixed_JSONArray__Clone(SimpleJSONFixed_JSONArray_o *__this,MethodInfo *method)

{
  byte bVar1;
  System_Collections_Generic_List_JSONNode__o *__this_00;
  System_Collections_Generic_List_T__o *pSVar2;
  Il2CppClass *pIVar3;
  Il2CppObject *pIVar4;
  bool bVar5;
  char cVar6;
  int32_t value;
  SimpleJSONFixed_JSONArray_o *__this_01;
  Il2CppObject *pIVar7;
  SimpleJSONFixed_JSONNode_o *pSVar8;
  undefined1 local_40 [16];
  Il2CppObject *local_30;
  System_Collections_Generic_List_Enumerator_object__o local_28;
  
  if (Il2CppMethodInitialized_1843449a1 == '\0') {
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
    Il2CppMethodInitialized_1843449a1 = '\x01';
  }
  local_28.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_28.fields._index = 0;
  local_28.fields._version = 0;
  local_28.fields._current = (Il2CppObject *)0x0;
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONArray);
  SimpleJSONFixed_JSONArray___ctor(__this_01,(MethodInfo *)0x0);
  if ((__this_01 != (SimpleJSONFixed_JSONArray_o *)0x0) &&
     (__this_00 = (__this->fields).m_List, __this_00 != (System_Collections_Generic_List_JSONNode__o *)0x0)) {
    pSVar2 = (System_Collections_Generic_List_T__o *)(__this_01->fields).m_List;
    value = System_Collections_Generic_List_object___get_Capacity
                      ((UnityEngine_AdaptivePerformance_RunningAverage_o *)__this_00,
                       MethodInfo_System_Collections_Generic_List_JSONNode_get_Capacity);
    if (pSVar2 != (System_Collections_Generic_List_T__o *)0x0) {
      System_Collections_Generic_List_RenderGraph_DebugData_PassData_NRPInfo_NativeRenderPassInfo_PassCompatibilityInfo___set_Capacity
                (pSVar2,value,
                 (MethodInfo_92B930 *)MethodInfo_System_Collections_Generic_List_JSONNode_set_Capacity);
      pSVar2 = (System_Collections_Generic_List_T__o *)(__this->fields).m_List;
      if (pSVar2 != (System_Collections_Generic_List_T__o *)0x0) {
        System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
                  ((System_Collections_Generic_List_Enumerator_T__o *)local_40,pSVar2,
                   (MethodInfo_91F180 *)MethodInfo_System_Collections_Generic_List_JSONNode_GetEnumerator);
        local_28.fields._list = (System_Collections_Generic_List_T__o *)local_40._0_8_;
        local_28.fields._index = local_40._8_4_;
        local_28.fields._version = local_40._12_4_;
        local_28.fields._current = local_30;
        local_40._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
        local_40._8_8_ = &local_28;
label_181dc0780:
        do {
          bVar5 = System_Collections_Generic_List_Enumerator_object___MoveNext
                            (&local_28,
                             (MethodInfo_153A2A0 *)
                             MethodInfo_System_Collections_Generic_List_Enumerator_JSONNode_MoveNext);
          pIVar4 = local_28.fields._current;
          if (!bVar5) {
            System_Collections_Generic_List_Enumerator_object___Dispose
                      ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_28,
                       MethodInfo_System_Collections_Generic_List_Enumerator_JSONNode_Dispose);
            return (SimpleJSONFixed_JSONNode_o *)__this_01;
          }
          if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
          }
          if (Il2CppMethodInitialized_18434497d == '\0') {
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
            Il2CppMethodInitialized_18434497d = '\x01';
          }
          if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
          }
          if (Il2CppMethodInitialized_18434497c == '\0') {
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONLazyCreator);
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNull);
            Il2CppMethodInitialized_18434497c = '\x01';
          }
          if (pIVar4 != (Il2CppObject *)0x0) {
            pIVar3 = pIVar4->klass;
            bVar1 = (TypeInfo_SimpleJSONFixed_JSONNull->_2).typeHierarchyDepth;
            if (((pIVar3->_2).typeHierarchyDepth < bVar1) ||
               ((pIVar3->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
                (Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNull)) {
              bVar1 = (TypeInfo_SimpleJSONFixed_JSONLazyCreator->_2).typeHierarchyDepth;
              if (((pIVar3->_2).typeHierarchyDepth < bVar1) ||
                 ((pIVar3->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
                  (Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONLazyCreator)) {
                bVar5 = false;
              }
              else {
                bVar5 = true;
              }
              pIVar7 = (Il2CppObject *)0x0;
              if (bVar5) {
                pIVar7 = pIVar4;
              }
              bVar5 = pIVar7 != (Il2CppObject *)0x0;
            }
            else {
              bVar5 = true;
            }
            if (!bVar5) {
              cVar6 = (*pIVar3->vtable[0].methodPtr)(pIVar4,0,pIVar3->vtable[0].method);
              if (cVar6 == '\0') {
                pSVar8 = (SimpleJSONFixed_JSONNode_o *)
                         (*pIVar4->klass->vtable[0x1a].methodPtr)(pIVar4,pIVar4->klass->vtable[0x1a].method);
                (*(__this_01->klass->vtable)._21_Add.methodPtr)
                          (__this_01,pSVar8,(__this_01->klass->vtable)._21_Add.method);
                goto label_181dc0780;
              }
            }
          }
          (*(__this_01->klass->vtable)._21_Add.methodPtr)
                    (__this_01,(SimpleJSONFixed_JSONNode_o *)0x0,(__this_01->klass->vtable)._21_Add.method);
        } while( true );
      }
    }
  }
  ThrowNullReferenceException();
}


// SimpleJSONFixed.JSONArray$$get_Children
// il2cpp: System_Collections_Generic_IEnumerable_JSONNode__o* SimpleJSONFixed_JSONArray__get_Children (SimpleJSONFixed_JSONArray_o* __this, const MethodInfo* method);
// 0x181dc0d00

System_Collections_Generic_IEnumerable_JSONNode__o *
SimpleJSONFixed_JSONArray__get_Children(SimpleJSONFixed_JSONArray_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  SimpleJSONFixed_JSONArray__get_Children_d__24_o *__this_00;
  
  if (Il2CppMethodInitialized_1843449a2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONArray_get_Children_d__24);
    Il2CppMethodInitialized_1843449a2 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONArray_get_Children_d__24);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).__1__state = -2;
  iVar1 = System_Diagnostics_TraceEventCache__GetThreadId((MethodInfo *)0x0);
  (__this_00->fields).__l__initialThreadId = iVar1;
  (__this_00->fields).__4__this = __this;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this,__this);
  return (System_Collections_Generic_IEnumerable_JSONNode__o *)__this_00;
}


// SimpleJSONFixed.JSONArray$$WriteToStringBuilder
// il2cpp: void SimpleJSONFixed_JSONArray__WriteToStringBuilder (SimpleJSONFixed_JSONArray_o* __this, System_Text_StringBuilder_o* aSB, int32_t aIndent, int32_t aIndentInc, int32_t aMode, const MethodInfo* method);
// 0x181dc0af0

void SimpleJSONFixed_JSONArray__WriteToStringBuilder
               (SimpleJSONFixed_JSONArray_o *__this,System_Text_StringBuilder_o *aSB,int32_t aIndent,
               int32_t aIndentInc,int32_t aMode,MethodInfo *method)

{
  int iVar1;
  System_Collections_Generic_List_JSONNode__o *pSVar2;
  System_Collections_Generic_List_object__o *__this_00;
  SimpleJSONFixed_JSONNode_o *pSVar3;
  System_Text_StringBuilder_o *__this_01;
  int iVar4;
  int index;
  
  if (Il2CppMethodInitialized_1843449a3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_JSONNode_get_Count)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_JSONNode_get_Item);
    Il2CppMethodInitialized_1843449a3 = '\x01';
  }
  if (aSB != (System_Text_StringBuilder_o *)0x0) {
    System_Text_StringBuilder__Append_197e090(aSB,0x5b,(MethodInfo *)0x0);
    pSVar2 = (__this->fields).m_List;
    if (pSVar2 != (System_Collections_Generic_List_JSONNode__o *)0x0) {
      iVar1 = (pSVar2->fields)._size;
      iVar4 = 0;
      if ((__this->fields).field1_0x8 == false) {
        iVar4 = aMode;
      }
      if (0 < iVar1) {
        index = 0;
        do {
          if (index != 0) {
            System_Text_StringBuilder__Append_197e090(aSB,0x2c,(MethodInfo *)0x0);
          }
          if (iVar4 == 1) {
            System_Text_StringBuilder__AppendLine(aSB,(MethodInfo *)0x0);
            System_Text_StringBuilder__Append(aSB,0x20,aIndentInc + aIndent,(MethodInfo *)0x0);
          }
          __this_00 = (System_Collections_Generic_List_object__o *)(__this->fields).m_List;
          if (__this_00 == (System_Collections_Generic_List_object__o *)0x0) goto label_181dc0c54;
          pSVar3 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                             (__this_00,index,
                              (MethodInfo_92B830 *)
                              MethodInfo_System_Collections_Generic_List_JSONNode_get_Item);
          if (pSVar3 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_181dc0c54;
          il2cpp_runtime_helper_180353740(0x1f);
          index = index + 1;
        } while (index < iVar1);
      }
      if (iVar4 == 1) {
        __this_01 = System_Text_StringBuilder__AppendLine(aSB,(MethodInfo *)0x0);
        if (__this_01 == (System_Text_StringBuilder_o *)0x0) goto label_181dc0c54;
        System_Text_StringBuilder__Append(__this_01,0x20,aIndent,(MethodInfo *)0x0);
      }
      System_Text_StringBuilder__Append_197e090(aSB,0x5d,(MethodInfo *)0x0);
      return;
    }
  }
label_181dc0c54:
  ThrowNullReferenceException();
}


// SimpleJSONFixed.JSONArray$$.ctor
// il2cpp: void SimpleJSONFixed_JSONArray___ctor (SimpleJSONFixed_JSONArray_o* __this, const MethodInfo* method);
// 0x181dc0c60

void SimpleJSONFixed_JSONArray___ctor(SimpleJSONFixed_JSONArray_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_JSONNode__o *__this_00;
  
  if (Il2CppMethodInitialized_1843449a4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_JSONNode_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_JSONNode);
    Il2CppMethodInitialized_1843449a4 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_JSONNode);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)__this_00,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_JSONNode_ctor);
  (__this->fields).m_List = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields).m_List,__this_00);
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


