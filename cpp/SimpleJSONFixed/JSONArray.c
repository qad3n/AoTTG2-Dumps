// Type: SimpleJSONFixed.JSONArray
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/SimpleJSONFixed/JSONArray.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/Utility/SimpleJSON.cs  [CHANGED since prior version]
// --------------------------------

// SimpleJSONFixed.JSONArray.<get_Children>d__24$$.ctor
// il2cpp: void SimpleJSONFixed_JSONArray__get_Children_d__24___ctor (SimpleJSONFixed_JSONArray__get_Children_d__24_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x3d88010

void SimpleJSONFixed_JSONArray_<get_Children>d__24___ctor
               (SimpleJSONFixed_JSONArray__get_Children_d__24_o *__this,int32_t __1__state,
               MethodInfo *method)

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
// 0x3d88240

void SimpleJSONFixed_JSONArray_<get_Children>d__24__System_IDisposable_Dispose
               (SimpleJSONFixed_JSONArray__get_Children_d__24_o *__this,MethodInfo *method)

{
  int iVar1;
  undefined1 in_stack_00000008 [24];
  
  iVar1 = (__this->fields).__1__state;
  if ((iVar1 != 1) && (iVar1 != -3)) {
    return;
  }
  if (DAT_057026c0 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    DAT_057026c0 = '\x01';
  }
  (__this->fields).__1__state = -1;
  System_Collections_Generic_List_Enumerator<object>__Dispose
            ((System_Collections_Generic_List_Enumerator_object__o)in_stack_00000008,
             (MethodInfo_3185E10 *)&(__this->fields).__7__wrap1);
  return;
}


// SimpleJSONFixed.JSONArray.<get_Children>d__24$$MoveNext
// il2cpp: bool SimpleJSONFixed_JSONArray__get_Children_d__24__MoveNext (SimpleJSONFixed_JSONArray__get_Children_d__24_o* __this, const MethodInfo* method);
// 0x3d88290

bool_conflict
SimpleJSONFixed_JSONArray_<get_Children>d__24__MoveNext
          (SimpleJSONFixed_JSONArray__get_Children_d__24_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_Enumerator_JSONNode__o *method_00;
  int iVar1;
  SimpleJSONFixed_JSONArray_o *pSVar2;
  System_Collections_Generic_List_object__o *__this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  bool_conflict bVar3;
  undefined8 uVar4;
  undefined8 in_stack_ffffffffffffffa8;
  undefined4 in_stack_ffffffffffffffb0;
  undefined4 in_stack_ffffffffffffffb4;
  int32_t in_stack_ffffffffffffffb8;
  int32_t in_stack_ffffffffffffffbc;
  Il2CppObject *local_40;
  
  if (DAT_057026bf == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_JSONNode_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_List_1_T__Enumerator_SimpleJSONFixed_JSONNode__G);
    DAT_057026bf = '\x01';
  }
  iVar1 = (__this->fields).__1__state;
  if (iVar1 != 1) {
    if (iVar1 != 0) {
      return 0;
    }
    pSVar2 = (__this->fields).__4__this;
    (__this->fields).__1__state = -1;
    if (pSVar2 == (SimpleJSONFixed_JSONArray_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    __this_00 = (System_Collections_Generic_List_object__o *)(pSVar2->fields).m_List;
    if (__this_00 == (System_Collections_Generic_List_object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    System_Collections_Generic_List<object>__GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)&stack0xffffffffffffffb0,__this_00
               ,MethodInfo_List_1_T__Enumerator_SimpleJSONFixed_JSONNode__G);
    (__this->fields).__7__wrap1.fields._current = (SimpleJSONFixed_JSONNode_o *)local_40;
    *(undefined4 *)&(__this->fields).__7__wrap1.fields._list = in_stack_ffffffffffffffb0;
    *(undefined4 *)((long)&(__this->fields).__7__wrap1.fields._list + 4) = in_stack_ffffffffffffffb4
    ;
    (__this->fields).__7__wrap1.fields._index = in_stack_ffffffffffffffb8;
    (__this->fields).__7__wrap1.fields._version = in_stack_ffffffffffffffbc;
    il2cpp_runtime_glue(&(__this->fields).__7__wrap1,0);
  }
  (__this->fields).__1__state = -3;
  method_00 = &(__this->fields).__7__wrap1;
  __this_01.fields._index = in_stack_ffffffffffffffb0;
  __this_01.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffffa8;
  __this_01.fields._version = in_stack_ffffffffffffffb4;
  __this_01.fields._current._0_4_ = in_stack_ffffffffffffffb8;
  __this_01.fields._current._4_4_ = in_stack_ffffffffffffffbc;
  bVar3 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                    (__this_01,(MethodInfo_3185E20 *)method_00);
  if ((char)bVar3 == '\0') {
    if (DAT_057026c0 == '\0') {
      il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
      DAT_057026c0 = '\x01';
    }
    (__this->fields).__1__state = -1;
    __this_02.fields._index = in_stack_ffffffffffffffb0;
    __this_02.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffffa8;
    __this_02.fields._version = in_stack_ffffffffffffffb4;
    __this_02.fields._current._0_4_ = in_stack_ffffffffffffffb8;
    __this_02.fields._current._4_4_ = in_stack_ffffffffffffffbc;
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (__this_02,(MethodInfo_3185E10 *)method_00);
    (method_00->fields)._list = (System_Collections_Generic_List_T__o *)0x0;
    (__this->fields).__7__wrap1.fields._index = 0;
    (__this->fields).__7__wrap1.fields._version = 0;
    (__this->fields).__7__wrap1.fields._current = (SimpleJSONFixed_JSONNode_o *)0x0;
    return 0;
  }
  (__this->fields).__2__current = (__this->fields).__7__wrap1.fields._current;
  uVar4 = il2cpp_runtime_glue(&(__this->fields).__2__current);
  (__this->fields).__1__state = 1;
  return (bool_conflict)CONCAT71((int7)((ulong)uVar4 >> 8),1);
}


// SimpleJSONFixed.JSONArray.<get_Children>d__24$$<>m__Finally1
// il2cpp: void SimpleJSONFixed_JSONArray__get_Children_d__24____m__Finally1 (SimpleJSONFixed_JSONArray__get_Children_d__24_o* __this, const MethodInfo* method);
// 0x3d884a0

void SimpleJSONFixed_JSONArray_<get_Children>d__24__<>m__Finally1
               (SimpleJSONFixed_JSONArray__get_Children_d__24_o *__this,MethodInfo *method)

{
  undefined1 in_stack_00000008 [24];
  
  if (DAT_057026c0 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    DAT_057026c0 = '\x01';
  }
  (__this->fields).__1__state = -1;
  System_Collections_Generic_List_Enumerator<object>__Dispose
            ((System_Collections_Generic_List_Enumerator_object__o)in_stack_00000008,
             (MethodInfo_3185E10 *)&(__this->fields).__7__wrap1);
  return;
}


// SimpleJSONFixed.JSONArray.<get_Children>d__24$$System.Collections.Generic.IEnumerator<SimpleJSONFixed.JSONNode>.get_Current
// il2cpp: SimpleJSONFixed_JSONNode_o* SimpleJSONFixed_JSONArray__get_Children_d__24__System_Collections_Generic_IEnumerator_SimpleJSONFixed_JSONNode__get_Current (SimpleJSONFixed_JSONArray__get_Children_d__24_o* __this, const MethodInfo* method);
// 0x3d884e0

SimpleJSONFixed_JSONNode_o *
SimpleJSONFixed_JSONArray_<get_Children>d__24__System_Collections_Generic_IEnumerator<SimpleJSONFixed_JSONNode>_get_Current
          (SimpleJSONFixed_JSONArray__get_Children_d__24_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// SimpleJSONFixed.JSONArray.<get_Children>d__24$$System.Collections.IEnumerator.Reset
// il2cpp: void SimpleJSONFixed_JSONArray__get_Children_d__24__System_Collections_IEnumerator_Reset (SimpleJSONFixed_JSONArray__get_Children_d__24_o* __this, const MethodInfo* method);
// 0x3d884f0

void SimpleJSONFixed_JSONArray_<get_Children>d__24__System_Collections_IEnumerator_Reset
               (SimpleJSONFixed_JSONArray__get_Children_d__24_o *__this,MethodInfo *method)

{
  undefined8 uVar1;
  System_NotSupportedException_o *__this_00;
  
  uVar1 = il2cpp_init_method_metadata(&TypeInfo_NotSupportedException);
  __this_00 = (System_NotSupportedException_o *)il2cpp_runtime_glue(uVar1);
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  uVar1 = il2cpp_init_method_metadata(&MethodInfo_Void_System_Collections_IEnumerator_Reset);
                    /* WARNING: Subroutine does not return */
  il2cpp_glue_02274a00(__this_00,uVar1);
}


// SimpleJSONFixed.JSONArray.<get_Children>d__24$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* SimpleJSONFixed_JSONArray__get_Children_d__24__System_Collections_IEnumerator_get_Current (SimpleJSONFixed_JSONArray__get_Children_d__24_o* __this, const MethodInfo* method);
// 0x3d88530

Il2CppObject *
SimpleJSONFixed_JSONArray_<get_Children>d__24__System_Collections_IEnumerator_get_Current
          (SimpleJSONFixed_JSONArray__get_Children_d__24_o *__this,MethodInfo *method)

{
  return (Il2CppObject *)(__this->fields).__2__current;
}


// SimpleJSONFixed.JSONArray.<get_Children>d__24$$System.Collections.Generic.IEnumerable<SimpleJSONFixed.JSONNode>.GetEnumerator
// il2cpp: System_Collections_Generic_IEnumerator_JSONNode__o* SimpleJSONFixed_JSONArray__get_Children_d__24__System_Collections_Generic_IEnumerable_SimpleJSONFixed_JSONNode__GetEnumerator (SimpleJSONFixed_JSONArray__get_Children_d__24_o* __this, const MethodInfo* method);
// 0x3d88540

System_Collections_IEnumerator_o *
SimpleJSONFixed_JSONArray_<get_Children>d__24__System_Collections_Generic_IEnumerable<SimpleJSONFixed_JSONNode>_GetEnumerator
          (SimpleJSONFixed_JSONArray__get_Children_d__24_o *__this,MethodInfo *method)

{
  int iVar1;
  int32_t iVar2;
  Il2CppObject *__this_00;
  
  if (DAT_057026c1 == '\0') {
    il2cpp_init_method_metadata();
    DAT_057026c1 = '\x01';
  }
  if (((__this->fields).__1__state == -2) &&
     (iVar1 = (__this->fields).__l__initialThreadId,
     iVar2 = System_Environment__get_CurrentManagedThreadId((MethodInfo *)0x0), iVar1 == iVar2)) {
    (__this->fields).__1__state = 0;
    return (System_Collections_IEnumerator_o *)__this;
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_get_Children_d__24);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  *(undefined4 *)&__this_00[1].klass = 0;
  iVar2 = System_Environment__get_CurrentManagedThreadId((MethodInfo *)0x0);
  *(int32_t *)&__this_00[2].klass = iVar2;
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[2].monitor = (__this->fields).__4__this;
    il2cpp_runtime_glue(&__this_00[2].monitor);
    return (System_Collections_IEnumerator_o *)__this_00;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// SimpleJSONFixed.JSONArray.<get_Children>d__24$$System.Collections.IEnumerable.GetEnumerator
// il2cpp: System_Collections_IEnumerator_o* SimpleJSONFixed_JSONArray__get_Children_d__24__System_Collections_IEnumerable_GetEnumerator (SimpleJSONFixed_JSONArray__get_Children_d__24_o* __this, const MethodInfo* method);
// 0x3d885e0

System_Collections_IEnumerator_o *
SimpleJSONFixed_JSONArray_<get_Children>d__24__System_Collections_IEnumerable_GetEnumerator
          (SimpleJSONFixed_JSONArray__get_Children_d__24_o *__this,MethodInfo *method)

{
  int iVar1;
  int32_t iVar2;
  Il2CppObject *__this_00;
  
  if (DAT_057026c1 == '\0') {
    il2cpp_init_method_metadata();
    DAT_057026c1 = '\x01';
  }
  if (((__this->fields).__1__state == -2) &&
     (iVar1 = (__this->fields).__l__initialThreadId,
     iVar2 = System_Environment__get_CurrentManagedThreadId((MethodInfo *)0x0), iVar1 == iVar2)) {
    (__this->fields).__1__state = 0;
    return (System_Collections_IEnumerator_o *)__this;
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_get_Children_d__24);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  *(undefined4 *)&__this_00[1].klass = 0;
  iVar2 = System_Environment__get_CurrentManagedThreadId((MethodInfo *)0x0);
  *(int32_t *)&__this_00[2].klass = iVar2;
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[2].monitor = (__this->fields).__4__this;
    il2cpp_runtime_glue(&__this_00[2].monitor);
    return (System_Collections_IEnumerator_o *)__this_00;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// SimpleJSONFixed.JSONArray$$get_Inline
// il2cpp: bool SimpleJSONFixed_JSONArray__get_Inline (SimpleJSONFixed_JSONArray_o* __this, const MethodInfo* method);
// 0x3d87510

bool_conflict
SimpleJSONFixed_JSONArray__get_Inline(SimpleJSONFixed_JSONArray_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),(char)(__this->fields).field1_0x8);
}


// SimpleJSONFixed.JSONArray$$set_Inline
// il2cpp: void SimpleJSONFixed_JSONArray__set_Inline (SimpleJSONFixed_JSONArray_o* __this, bool value, const MethodInfo* method);
// 0x3d87520

void SimpleJSONFixed_JSONArray__set_Inline
               (SimpleJSONFixed_JSONArray_o *__this,bool_conflict value,MethodInfo *method)

{
  *(char *)&(__this->fields).field1_0x8 = (char)value;
  return;
}


// SimpleJSONFixed.JSONArray$$get_Tag
// il2cpp: int32_t SimpleJSONFixed_JSONArray__get_Tag (SimpleJSONFixed_JSONArray_o* __this, const MethodInfo* method);
// 0x3d87530

int32_t SimpleJSONFixed_JSONArray__get_Tag(SimpleJSONFixed_JSONArray_o *__this,MethodInfo *method)

{
  return 1;
}


// SimpleJSONFixed.JSONArray$$get_IsArray
// il2cpp: bool SimpleJSONFixed_JSONArray__get_IsArray (SimpleJSONFixed_JSONArray_o* __this, const MethodInfo* method);
// 0x3d87540

bool_conflict
SimpleJSONFixed_JSONArray__get_IsArray(SimpleJSONFixed_JSONArray_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// SimpleJSONFixed.JSONArray$$GetEnumerator
// il2cpp: SimpleJSONFixed_JSONNode_Enumerator_o SimpleJSONFixed_JSONArray__GetEnumerator (SimpleJSONFixed_JSONArray_o* __this, const MethodInfo* method);
// 0x3d87550

/* WARNING: Type propagation algorithm not settling */

SimpleJSONFixed_JSONNode_Enumerator_o *
SimpleJSONFixed_JSONArray__GetEnumerator
          (SimpleJSONFixed_JSONNode_Enumerator_o *__return_storage_ptr__,
          SimpleJSONFixed_JSONArray_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_object__o *__this_00;
  System_Collections_Generic_List_Enumerator_T__o SStack_28;
  
  if (DAT_057026b1 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_List_1_T__Enumerator_SimpleJSONFixed_JSONNode__G);
    DAT_057026b1 = '\x01';
  }
  __this_00 = (System_Collections_Generic_List_object__o *)(__this->fields).m_List;
  if (__this_00 != (System_Collections_Generic_List_object__o *)0x0) {
    System_Collections_Generic_List<object>__GetEnumerator(&SStack_28,__this_00,MethodInfo_List_1_T__Enumerator_SimpleJSONFixed_JSONNode__G);
    *(undefined8 *)&__return_storage_ptr__->fields = 1;
    (__return_storage_ptr__->fields).m_Object.fields._dictionary =
         (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
    (__return_storage_ptr__->fields).m_Object.fields._version = 0;
    (__return_storage_ptr__->fields).m_Object.fields._index = 0;
    (__return_storage_ptr__->fields).m_Object.fields._current.fields.key = (Il2CppObject *)0x0;
    (__return_storage_ptr__->fields).m_Object.fields._current.fields.value = (Il2CppObject *)0x0;
    *(undefined8 *)&(__return_storage_ptr__->fields).m_Object.fields._getEnumeratorRetType = 0;
    *(undefined4 *)&(__return_storage_ptr__->fields).m_Array.fields._list =
         SStack_28.fields._list._0_4_;
    *(undefined4 *)((long)&(__return_storage_ptr__->fields).m_Array.fields._list + 4) =
         SStack_28.fields._list._4_4_;
    (__return_storage_ptr__->fields).m_Array.fields._index = SStack_28.fields._index;
    (__return_storage_ptr__->fields).m_Array.fields._version = SStack_28.fields._version;
    (__return_storage_ptr__->fields).m_Array.fields._current =
         (SimpleJSONFixed_JSONNode_o *)SStack_28.fields._current;
    il2cpp_runtime_glue(&(__return_storage_ptr__->fields).m_Array,0);
    return __return_storage_ptr__;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// SimpleJSONFixed.JSONArray$$get_Item
// il2cpp: SimpleJSONFixed_JSONNode_o* SimpleJSONFixed_JSONArray__get_Item (SimpleJSONFixed_JSONArray_o* __this, int32_t aIndex, const MethodInfo* method);
// 0x3d875e0

SimpleJSONFixed_JSONNode_o *
SimpleJSONFixed_JSONArray__get_Item
          (SimpleJSONFixed_JSONArray_o *__this,int32_t aIndex,MethodInfo *method)

{
  System_Collections_Generic_List_object__o *__this_00;
  Il2CppObject *pIVar1;
  
  if (DAT_057026b2 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_JSONLazyCreator);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    il2cpp_init_method_metadata(&MethodInfo_JSONNode_get_Item);
    DAT_057026b2 = '\x01';
  }
  if (-1 < aIndex) {
    __this_00 = (System_Collections_Generic_List_object__o *)(__this->fields).m_List;
    if (__this_00 == (System_Collections_Generic_List_object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    if (aIndex < (__this_00->fields)._size) {
      pIVar1 = System_Collections_Generic_List<object>__get_Item(__this_00,aIndex,MethodInfo_JSONNode_get_Item);
      return (SimpleJSONFixed_JSONNode_o *)pIVar1;
    }
  }
  pIVar1 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_JSONLazyCreator);
  if (DAT_057026ee == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_JSONNode);
    DAT_057026ee = '\x01';
  }
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_init_class();
  }
  System_Object___ctor(pIVar1,(MethodInfo *)0x0);
  pIVar1[1].klass = (Il2CppClass *)__this;
  il2cpp_runtime_glue(pIVar1 + 1,__this);
  pIVar1[1].monitor = (void *)0x0;
  il2cpp_runtime_glue(&pIVar1[1].monitor,0);
  return (SimpleJSONFixed_JSONNode_o *)pIVar1;
}


// SimpleJSONFixed.JSONArray$$set_Item
// il2cpp: void SimpleJSONFixed_JSONArray__set_Item (SimpleJSONFixed_JSONArray_o* __this, int32_t aIndex, SimpleJSONFixed_JSONNode_o* value, const MethodInfo* method);
// 0x3d87760

void SimpleJSONFixed_JSONArray__set_Item
               (SimpleJSONFixed_JSONArray_o *__this,int32_t aIndex,SimpleJSONFixed_JSONNode_o *value
               ,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Collections_Generic_List_object__o *__this_00;
  System_Object_array *pSVar3;
  long lVar4;
  bool_conflict bVar5;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *pMVar6;
  
  pMVar6 = (MethodInfo *)value;
  if (DAT_057026b3 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_JSONNode);
    il2cpp_init_method_metadata(&TypeInfo_JSONNull);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Item);
    DAT_057026b3 = '\x01';
    pMVar6 = extraout_RDX;
  }
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_init_class();
    pMVar6 = extraout_RDX_00;
  }
  bVar5 = SimpleJSONFixed_JSONNode__op_Equality(value,(Il2CppObject *)0x0,pMVar6);
  if ((char)bVar5 != '\0') {
    pMVar6 = TypeInfo_JSONNull;
    if (*(int *)((long)&TypeInfo_JSONNull[2].parameters + 4) == 0) {
      il2cpp_init_class();
    }
    value = (SimpleJSONFixed_JSONNode_o *)SimpleJSONFixed_JSONNull__CreateOrGet(pMVar6);
  }
  lVar4 = MethodInfo_Void_Add;
  __this_00 = (System_Collections_Generic_List_object__o *)(__this->fields).m_List;
  if (aIndex < 0) {
    if (__this_00 == (System_Collections_Generic_List_object__o *)0x0) goto LAB_03d87887;
  }
  else {
    if (__this_00 == (System_Collections_Generic_List_object__o *)0x0) goto LAB_03d87887;
    if (aIndex < (__this_00->fields)._size) {
      System_Collections_Generic_List<object>__set_Item
                (__this_00,aIndex,(Il2CppObject *)value,MethodInfo_Void_set_Item);
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
      il2cpp_runtime_glue(pSVar3->m_Items + (int)uVar2,value);
      return;
    }
    System_Collections_Generic_List<object>__AddWithResize
              (__this_00,(Il2CppObject *)value,
               *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
    return;
  }
LAB_03d87887:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// SimpleJSONFixed.JSONArray$$get_Item
// il2cpp: SimpleJSONFixed_JSONNode_o* SimpleJSONFixed_JSONArray__get_Item (SimpleJSONFixed_JSONArray_o* __this, System_String_o* aKey, const MethodInfo* method);
// 0x3d87890

SimpleJSONFixed_JSONNode_o *
SimpleJSONFixed_JSONArray__get_Item
          (SimpleJSONFixed_JSONArray_o *__this,System_String_o *aKey,MethodInfo *method)

{
  Il2CppObject *__this_00;
  
  if (DAT_057026b4 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_JSONLazyCreator);
    DAT_057026b4 = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_JSONLazyCreator);
  if (DAT_057026ee == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_JSONNode);
    DAT_057026ee = '\x01';
  }
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_init_class();
  }
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  __this_00[1].klass = (Il2CppClass *)__this;
  il2cpp_runtime_glue(__this_00 + 1,__this);
  __this_00[1].monitor = (void *)0x0;
  il2cpp_runtime_glue(&__this_00[1].monitor,0);
  return (SimpleJSONFixed_JSONNode_o *)__this_00;
}


// SimpleJSONFixed.JSONArray$$set_Item
// il2cpp: void SimpleJSONFixed_JSONArray__set_Item (SimpleJSONFixed_JSONArray_o* __this, System_String_o* aKey, SimpleJSONFixed_JSONNode_o* value, const MethodInfo* method);
// 0x3d87940

void SimpleJSONFixed_JSONArray__set_Item
               (SimpleJSONFixed_JSONArray_o *__this,System_String_o *aKey,
               SimpleJSONFixed_JSONNode_o *value,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Collections_Generic_List_object__o *__this_00;
  System_Object_array *pSVar3;
  long lVar4;
  bool_conflict bVar5;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *pMVar6;
  
  pMVar6 = (MethodInfo *)value;
  if (DAT_057026b5 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_JSONNode);
    il2cpp_init_method_metadata(&TypeInfo_JSONNull);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    DAT_057026b5 = '\x01';
    pMVar6 = extraout_RDX;
  }
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_init_class();
    pMVar6 = extraout_RDX_00;
  }
  bVar5 = SimpleJSONFixed_JSONNode__op_Equality(value,(Il2CppObject *)0x0,pMVar6);
  if ((char)bVar5 != '\0') {
    pMVar6 = TypeInfo_JSONNull;
    if (*(int *)((long)&TypeInfo_JSONNull[2].parameters + 4) == 0) {
      il2cpp_init_class();
    }
    value = (SimpleJSONFixed_JSONNode_o *)SimpleJSONFixed_JSONNull__CreateOrGet(pMVar6);
  }
  lVar4 = MethodInfo_Void_Add;
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
        il2cpp_runtime_glue(pSVar3->m_Items + (int)uVar2,value);
        return;
      }
      System_Collections_Generic_List<object>__AddWithResize
                (__this_00,(Il2CppObject *)value,
                 *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// SimpleJSONFixed.JSONArray$$get_Count
// il2cpp: int32_t SimpleJSONFixed_JSONArray__get_Count (SimpleJSONFixed_JSONArray_o* __this, const MethodInfo* method);
// 0x3d87a40

int32_t SimpleJSONFixed_JSONArray__get_Count(SimpleJSONFixed_JSONArray_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_JSONNode__o *pSVar1;
  
  if (DAT_057026b6 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    DAT_057026b6 = '\x01';
  }
  pSVar1 = (__this->fields).m_List;
  if (pSVar1 != (System_Collections_Generic_List_JSONNode__o *)0x0) {
    return (pSVar1->fields)._size;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// SimpleJSONFixed.JSONArray$$Add
// il2cpp: void SimpleJSONFixed_JSONArray__Add (SimpleJSONFixed_JSONArray_o* __this, System_String_o* aKey, SimpleJSONFixed_JSONNode_o* aItem, const MethodInfo* method);
// 0x3d87a80

void SimpleJSONFixed_JSONArray__Add
               (SimpleJSONFixed_JSONArray_o *__this,System_String_o *aKey,
               SimpleJSONFixed_JSONNode_o *aItem,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Collections_Generic_List_object__o *__this_00;
  System_Object_array *pSVar3;
  long lVar4;
  bool_conflict bVar5;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *pMVar6;
  
  pMVar6 = (MethodInfo *)aItem;
  if (DAT_057026b7 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_JSONNode);
    il2cpp_init_method_metadata(&TypeInfo_JSONNull);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    DAT_057026b7 = '\x01';
    pMVar6 = extraout_RDX;
  }
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_init_class();
    pMVar6 = extraout_RDX_00;
  }
  bVar5 = SimpleJSONFixed_JSONNode__op_Equality(aItem,(Il2CppObject *)0x0,pMVar6);
  if ((char)bVar5 != '\0') {
    pMVar6 = TypeInfo_JSONNull;
    if (*(int *)((long)&TypeInfo_JSONNull[2].parameters + 4) == 0) {
      il2cpp_init_class();
    }
    aItem = (SimpleJSONFixed_JSONNode_o *)SimpleJSONFixed_JSONNull__CreateOrGet(pMVar6);
  }
  lVar4 = MethodInfo_Void_Add;
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
        il2cpp_runtime_glue(pSVar3->m_Items + (int)uVar2,aItem);
        return;
      }
      System_Collections_Generic_List<object>__AddWithResize
                (__this_00,(Il2CppObject *)aItem,
                 *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// SimpleJSONFixed.JSONArray$$Remove
// il2cpp: SimpleJSONFixed_JSONNode_o* SimpleJSONFixed_JSONArray__Remove (SimpleJSONFixed_JSONArray_o* __this, int32_t aIndex, const MethodInfo* method);
// 0x3d87b80

SimpleJSONFixed_JSONNode_o *
SimpleJSONFixed_JSONArray__Remove
          (SimpleJSONFixed_JSONArray_o *__this,int32_t aIndex,MethodInfo *method)

{
  System_Collections_Generic_List_object__o *pSVar1;
  Il2CppObject *pIVar2;
  
  if (DAT_057026b8 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_RemoveAt);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    il2cpp_init_method_metadata(&MethodInfo_JSONNode_get_Item);
    DAT_057026b8 = '\x01';
  }
  if (aIndex < 0) {
    return (SimpleJSONFixed_JSONNode_o *)0x0;
  }
  pSVar1 = (System_Collections_Generic_List_object__o *)(__this->fields).m_List;
  if (pSVar1 != (System_Collections_Generic_List_object__o *)0x0) {
    if ((pSVar1->fields)._size <= aIndex) {
      return (SimpleJSONFixed_JSONNode_o *)0x0;
    }
    pIVar2 = System_Collections_Generic_List<object>__get_Item(pSVar1,aIndex,MethodInfo_JSONNode_get_Item);
    pSVar1 = (System_Collections_Generic_List_object__o *)(__this->fields).m_List;
    if (pSVar1 != (System_Collections_Generic_List_object__o *)0x0) {
      System_Collections_Generic_List<object>__RemoveAt(pSVar1,aIndex,MethodInfo_Void_RemoveAt);
      return (SimpleJSONFixed_JSONNode_o *)pIVar2;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// SimpleJSONFixed.JSONArray$$Remove
// il2cpp: SimpleJSONFixed_JSONNode_o* SimpleJSONFixed_JSONArray__Remove (SimpleJSONFixed_JSONArray_o* __this, SimpleJSONFixed_JSONNode_o* aNode, const MethodInfo* method);
// 0x3d87c20

SimpleJSONFixed_JSONNode_o *
SimpleJSONFixed_JSONArray__Remove
          (SimpleJSONFixed_JSONArray_o *__this,SimpleJSONFixed_JSONNode_o *aNode,MethodInfo *method)

{
  System_Collections_Generic_List_object__o *__this_00;
  
  if (DAT_057026b9 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Remove);
    DAT_057026b9 = '\x01';
  }
  __this_00 = (System_Collections_Generic_List_object__o *)(__this->fields).m_List;
  if (__this_00 != (System_Collections_Generic_List_object__o *)0x0) {
    System_Collections_Generic_List<object>__Remove(__this_00,(Il2CppObject *)aNode,MethodInfo_Boolean_Remove);
    return aNode;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// SimpleJSONFixed.JSONArray$$Clear
// il2cpp: void SimpleJSONFixed_JSONArray__Clear (SimpleJSONFixed_JSONArray_o* __this, const MethodInfo* method);
// 0x3d87c80

void SimpleJSONFixed_JSONArray__Clear(SimpleJSONFixed_JSONArray_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  int32_t length;
  System_Collections_Generic_List_JSONNode__o *pSVar2;
  
  if (DAT_057026ba == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Clear);
    DAT_057026ba = '\x01';
  }
  pSVar2 = (__this->fields).m_List;
  if (pSVar2 != (System_Collections_Generic_List_JSONNode__o *)0x0) {
    piVar1 = &(pSVar2->fields)._version;
    *piVar1 = *piVar1 + 1;
    length = (pSVar2->fields)._size;
    (pSVar2->fields)._size = 0;
    if (0 < length) {
      System_Array__Clear((System_Array_o *)(pSVar2->fields)._items,0,length,(MethodInfo *)0x0);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// SimpleJSONFixed.JSONArray$$Clone
// il2cpp: SimpleJSONFixed_JSONNode_o* SimpleJSONFixed_JSONArray__Clone (SimpleJSONFixed_JSONArray_o* __this, const MethodInfo* method);
// 0x3d87cd0

SimpleJSONFixed_JSONNode_o *
SimpleJSONFixed_JSONArray__Clone(SimpleJSONFixed_JSONArray_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_object__o *pSVar1;
  System_Collections_Generic_List_object__o *__this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  int32_t value;
  bool_conflict bVar2;
  SimpleJSONFixed_JSONArray_o *__this_03;
  undefined8 uVar3;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
  MethodInfo *method_00;
  System_Collections_Generic_List_T__o *pSVar4;
  System_Collections_Generic_List_Enumerator_T__c *pSVar5;
  Il2CppType *a;
  Il2CppType *pIVar6;
  undefined1 local_40 [16];
  Il2CppType *local_30;
  
  if (DAT_057026bb == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_JSONNode_get_Current);
    il2cpp_init_method_metadata(&TypeInfo_JSONArray);
    il2cpp_init_method_metadata(&TypeInfo_JSONNode);
    il2cpp_init_method_metadata(&MethodInfo_List_1_T__Enumerator_SimpleJSONFixed_JSONNode__G);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Capacity);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Capacity);
    DAT_057026bb = '\x01';
  }
  __this_03 = (SimpleJSONFixed_JSONArray_o *)il2cpp_runtime_glue(TypeInfo_JSONArray);
  SimpleJSONFixed_JSONArray___ctor(__this_03,method);
  if ((__this_03 != (SimpleJSONFixed_JSONArray_o *)0x0) &&
     (pSVar1 = (System_Collections_Generic_List_object__o *)(__this->fields).m_List,
     pSVar1 != (System_Collections_Generic_List_object__o *)0x0)) {
    __this_00 = (System_Collections_Generic_List_object__o *)(__this_03->fields).m_List;
    value = System_Collections_Generic_List<object>__get_Capacity(pSVar1,MethodInfo_Int32_get_Capacity);
    if (__this_00 != (System_Collections_Generic_List_object__o *)0x0) {
      System_Collections_Generic_List<object>__set_Capacity(__this_00,value,MethodInfo_Void_set_Capacity);
      pSVar1 = (System_Collections_Generic_List_object__o *)(__this->fields).m_List;
      if (pSVar1 != (System_Collections_Generic_List_object__o *)0x0) {
        System_Collections_Generic_List<object>__GetEnumerator
                  ((System_Collections_Generic_List_Enumerator_T__o *)local_40,pSVar1,MethodInfo_List_1_T__Enumerator_SimpleJSONFixed_JSONNode__G);
        pSVar4 = (System_Collections_Generic_List_T__o *)local_40._0_8_;
        pSVar5 = (System_Collections_Generic_List_Enumerator_T__c *)local_40._8_8_;
        a = local_30;
        while( true ) {
          while( true ) {
            __this_01.fields._8_8_ = pSVar5;
            __this_01.fields._list = pSVar4;
            __this_01.fields._current = (Il2CppObject *)a;
            bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                              (__this_01,(MethodInfo_3185E20 *)&stack0xffffffffffffffa8);
            if ((char)bVar2 == '\0') {
              __this_02.fields._8_8_ = pSVar5;
              __this_02.fields._list = pSVar4;
              __this_02.fields._current = (Il2CppObject *)a;
              System_Collections_Generic_List_Enumerator<object>__Dispose
                        (__this_02,(MethodInfo_3185E10 *)&stack0xffffffffffffffa8);
              return (SimpleJSONFixed_JSONNode_o *)__this_03;
            }
            method_00 = extraout_RDX;
            pIVar6 = a;
            if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
              il2cpp_init_class();
              method_00 = extraout_RDX_00;
            }
            if (DAT_0570269d == '\0') {
              il2cpp_init_method_metadata(&TypeInfo_JSONNode);
              DAT_0570269d = '\x01';
              method_00 = extraout_RDX_01;
            }
            if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
              il2cpp_init_class();
              method_00 = extraout_RDX_02;
            }
            bVar2 = SimpleJSONFixed_JSONNode__op_Equality
                              ((SimpleJSONFixed_JSONNode_o *)a,(Il2CppObject *)0x0,method_00);
            if ((char)bVar2 == '\0') break;
            (*(__this_03->klass->vtable)._21_Add.methodPtr)
                      (__this_03,0,(__this_03->klass->vtable)._21_Add.method);
            a = pIVar6;
          }
          if (a == (Il2CppType *)0x0) break;
          uVar3 = (*a->data->vtable[0x1a].methodPtr)(a,a->data->vtable[0x1a].method);
          (*(__this_03->klass->vtable)._21_Add.methodPtr)
                    (__this_03,uVar3,(__this_03->klass->vtable)._21_Add.method);
          a = pIVar6;
        }
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// SimpleJSONFixed.JSONArray$$get_Children
// il2cpp: System_Collections_Generic_IEnumerable_JSONNode__o* SimpleJSONFixed_JSONArray__get_Children (SimpleJSONFixed_JSONArray_o* __this, const MethodInfo* method);
// 0x3d87f90

System_Collections_Generic_IEnumerable_JSONNode__o *
SimpleJSONFixed_JSONArray__get_Children(SimpleJSONFixed_JSONArray_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  Il2CppObject *__this_00;
  
  if (DAT_057026bc == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_get_Children_d__24);
    DAT_057026bc = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_get_Children_d__24);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  *(undefined4 *)&__this_00[1].klass = 0xfffffffe;
  iVar1 = System_Environment__get_CurrentManagedThreadId((MethodInfo *)0x0);
  *(int32_t *)&__this_00[2].klass = iVar1;
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[2].monitor = __this;
    il2cpp_runtime_glue(&__this_00[2].monitor,__this);
    return (System_Collections_Generic_IEnumerable_JSONNode__o *)__this_00;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// SimpleJSONFixed.JSONArray$$WriteToStringBuilder
// il2cpp: void SimpleJSONFixed_JSONArray__WriteToStringBuilder (SimpleJSONFixed_JSONArray_o* __this, System_Text_StringBuilder_o* aSB, int32_t aIndent, int32_t aIndentInc, int32_t aMode, const MethodInfo* method);
// 0x3d88040

void SimpleJSONFixed_JSONArray__WriteToStringBuilder
               (SimpleJSONFixed_JSONArray_o *__this,System_Text_StringBuilder_o *aSB,int32_t aIndent
               ,int32_t aIndentInc,int32_t aMode,MethodInfo *method)

{
  int iVar1;
  System_Collections_Generic_List_JSONNode__o *pSVar2;
  System_Collections_Generic_List_object__o *pSVar3;
  Il2CppObject *pIVar4;
  System_Text_StringBuilder_o *__this_00;
  undefined4 in_register_0000000c;
  ulong uVar5;
  uint repeatCount;
  int iVar6;
  int iStack_48;
  
  if (DAT_057026bd == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    il2cpp_init_method_metadata(&MethodInfo_JSONNode_get_Item);
    DAT_057026bd = '\x01';
  }
  if (aSB != (System_Text_StringBuilder_o *)0x0) {
    uVar5 = 0;
    System_Text_StringBuilder__Append(aSB,0x5b,(MethodInfo *)0x0);
    pSVar2 = (__this->fields).m_List;
    if (pSVar2 != (System_Collections_Generic_List_JSONNode__o *)0x0) {
      iVar1 = (pSVar2->fields)._size;
      if ((char)(__this->fields).field1_0x8 == '\0') {
        uVar5 = (ulong)(uint)aMode;
      }
      iStack_48 = (int)uVar5;
      if (0 < iVar1) {
        repeatCount = aIndentInc + aIndent;
        if (iStack_48 == 1) {
          iVar6 = 0;
          do {
            if (iVar6 != 0) {
              System_Text_StringBuilder__Append(aSB,0x2c,(MethodInfo *)0x0);
            }
            System_Text_StringBuilder__AppendLine(aSB,(MethodInfo *)0x0);
            System_Text_StringBuilder__Append(aSB,0x20,repeatCount,(MethodInfo *)0x0);
            pSVar3 = (System_Collections_Generic_List_object__o *)(__this->fields).m_List;
            if ((pSVar3 == (System_Collections_Generic_List_object__o *)0x0) ||
               (pIVar4 = System_Collections_Generic_List<object>__get_Item
                                   (pSVar3,iVar6,MethodInfo_JSONNode_get_Item), pIVar4 == (Il2CppObject *)0x0))
            goto LAB_03d8822c;
            (*pIVar4->klass->vtable[0x1f].methodPtr)
                      (pIVar4,aSB,(ulong)repeatCount,CONCAT44(in_register_0000000c,aIndentInc),1,
                       pIVar4->klass->vtable[0x1f].method);
            iVar6 = iVar6 + 1;
          } while (iVar1 != iVar6);
        }
        else {
          iVar6 = 0;
          do {
            if (iVar6 != 0) {
              System_Text_StringBuilder__Append(aSB,0x2c,(MethodInfo *)0x0);
            }
            pSVar3 = (System_Collections_Generic_List_object__o *)(__this->fields).m_List;
            if ((pSVar3 == (System_Collections_Generic_List_object__o *)0x0) ||
               (pIVar4 = System_Collections_Generic_List<object>__get_Item
                                   (pSVar3,iVar6,MethodInfo_JSONNode_get_Item), pIVar4 == (Il2CppObject *)0x0))
            goto LAB_03d8822c;
            (*pIVar4->klass->vtable[0x1f].methodPtr)
                      (pIVar4,aSB,(ulong)repeatCount,CONCAT44(in_register_0000000c,aIndentInc),uVar5
                       ,pIVar4->klass->vtable[0x1f].method);
            iVar6 = iVar6 + 1;
          } while (iVar1 != iVar6);
        }
      }
      if (iStack_48 == 1) {
        __this_00 = System_Text_StringBuilder__AppendLine(aSB,(MethodInfo *)0x0);
        if (__this_00 == (System_Text_StringBuilder_o *)0x0) goto LAB_03d8822c;
        System_Text_StringBuilder__Append(__this_00,0x20,aIndent,(MethodInfo *)0x0);
      }
      System_Text_StringBuilder__Append(aSB,0x5d,(MethodInfo *)0x0);
      return;
    }
  }
LAB_03d8822c:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// SimpleJSONFixed.JSONArray$$.ctor
// il2cpp: void SimpleJSONFixed_JSONArray___ctor (SimpleJSONFixed_JSONArray_o* __this, const MethodInfo* method);
// 0x3d85de0

void SimpleJSONFixed_JSONArray___ctor(SimpleJSONFixed_JSONArray_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_object__o *__this_00;
  
  if (DAT_057026be == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_JSONNode);
    il2cpp_init_method_metadata(&MethodInfo_List_1_SimpleJSONFixed_JSONNode);
    il2cpp_init_method_metadata(&TypeInfo_List_JSONNode);
    DAT_057026be = '\x01';
  }
  __this_00 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_glue(TypeInfo_List_JSONNode);
  System_Collections_Generic_List<object>___ctor(__this_00,MethodInfo_List_1_SimpleJSONFixed_JSONNode);
  (__this->fields).m_List = (System_Collections_Generic_List_JSONNode__o *)__this_00;
  il2cpp_runtime_glue(&__this->fields);
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_init_class();
  }
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


