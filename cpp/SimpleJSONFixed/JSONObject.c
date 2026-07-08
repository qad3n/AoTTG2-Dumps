// Type: SimpleJSONFixed.JSONObject
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/SimpleJSONFixed/JSONObject.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/Utility/SimpleJSON.cs  [CHANGED since prior version]
// --------------------------------

// SimpleJSONFixed.JSONObject.<>c__DisplayClass21_0$$.ctor
// il2cpp: void SimpleJSONFixed_JSONObject___c__DisplayClass21_0___ctor (SimpleJSONFixed_JSONObject___c__DisplayClass21_0_o* __this, const MethodInfo* method);
// 0x3d88ff0

void SimpleJSONFixed_JSONObject_<>c__DisplayClass21_0___ctor
               (SimpleJSONFixed_JSONObject___c__DisplayClass21_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// SimpleJSONFixed.JSONObject.<>c__DisplayClass21_0$$<Remove>b__0
// il2cpp: bool SimpleJSONFixed_JSONObject___c__DisplayClass21_0___Remove_b__0 (SimpleJSONFixed_JSONObject___c__DisplayClass21_0_o* __this, System_Collections_Generic_KeyValuePair_string__JSONNode__o k, const MethodInfo* method);
// 0x3d898c0

bool_conflict
SimpleJSONFixed_JSONObject_<>c__DisplayClass21_0__<Remove>b__0
          (SimpleJSONFixed_JSONObject___c__DisplayClass21_0_o *__this,
          System_Collections_Generic_KeyValuePair_string__JSONNode__o k,MethodInfo *method)

{
  Il2CppObject *b;
  bool_conflict bVar1;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_00;
  
  method_00 = (MethodInfo *)k.fields.value;
  if (DAT_057026d3 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_JSONNode,k.fields.key);
    il2cpp_init_method_metadata(&MethodInfo_JSONNode_get_Value);
    DAT_057026d3 = '\x01';
    method_00 = extraout_RDX;
  }
  b = (Il2CppObject *)(__this->fields).aNode;
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_init_class();
    method_00 = extraout_RDX_00;
  }
  bVar1 = SimpleJSONFixed_JSONNode__op_Equality(k.fields.value,b,method_00);
  return bVar1;
}


// SimpleJSONFixed.JSONObject.<get_Children>d__27$$.ctor
// il2cpp: void SimpleJSONFixed_JSONObject__get_Children_d__27___ctor (SimpleJSONFixed_JSONObject__get_Children_d__27_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x3d893f0

void SimpleJSONFixed_JSONObject_<get_Children>d__27___ctor
               (SimpleJSONFixed_JSONObject__get_Children_d__27_o *__this,int32_t __1__state,
               MethodInfo *method)

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
// 0x3d89920

void SimpleJSONFixed_JSONObject_<get_Children>d__27__System_IDisposable_Dispose
               (SimpleJSONFixed_JSONObject__get_Children_d__27_o *__this,MethodInfo *method)

{
  int iVar1;
  undefined1 in_stack_00000008 [40];
  
  iVar1 = (__this->fields).__1__state;
  if ((iVar1 != 1) && (iVar1 != -3)) {
    return;
  }
  if (DAT_057026d5 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    DAT_057026d5 = '\x01';
  }
  (__this->fields).__1__state = -1;
  System_Collections_Generic_Dictionary_Enumerator<object__object>__Dispose
            ((System_Collections_Generic_Dictionary_Enumerator_object__object__o)in_stack_00000008,
             (MethodInfo_31CFFB0 *)&(__this->fields).__7__wrap1);
  return;
}


// SimpleJSONFixed.JSONObject.<get_Children>d__27$$MoveNext
// il2cpp: bool SimpleJSONFixed_JSONObject__get_Children_d__27__MoveNext (SimpleJSONFixed_JSONObject__get_Children_d__27_o* __this, const MethodInfo* method);
// 0x3d89970

/* WARNING: Type propagation algorithm not settling */

bool_conflict
SimpleJSONFixed_JSONObject_<get_Children>d__27__MoveNext
          (SimpleJSONFixed_JSONObject__get_Children_d__27_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_Enumerator_string__JSONNode__o *method_00;
  int iVar1;
  SimpleJSONFixed_JSONObject_o *pSVar2;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  System_Collections_Generic_Dictionary_Enumerator_object__object__o __this_01;
  System_Collections_Generic_Dictionary_Enumerator_object__object__o __this_02;
  bool_conflict bVar3;
  undefined8 uVar4;
  SimpleJSONFixed_JSONNode_o *extraout_RDX;
  undefined8 in_stack_ffffffffffffff88;
  undefined4 in_stack_ffffffffffffff90;
  undefined4 in_stack_ffffffffffffff94;
  int32_t in_stack_ffffffffffffff98;
  int32_t in_stack_ffffffffffffff9c;
  undefined4 in_stack_ffffffffffffffa0;
  undefined4 in_stack_ffffffffffffffa4;
  undefined4 in_stack_ffffffffffffffa8;
  undefined4 in_stack_ffffffffffffffac;
  int32_t local_50;
  undefined4 uStack_4c;
  
  if (DAT_057026d4 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_TKey_TValue__Enumerator_System_Stri);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_KeyValuePair_2_System_String_SimpleJSONFixed_JSO);
    il2cpp_init_method_metadata(&MethodInfo_JSONNode_get_Value);
    DAT_057026d4 = '\x01';
  }
  iVar1 = (__this->fields).__1__state;
  if (iVar1 != 1) {
    if (iVar1 != 0) {
      return 0;
    }
    pSVar2 = (__this->fields).__4__this;
    (__this->fields).__1__state = -1;
    if (pSVar2 == (SimpleJSONFixed_JSONObject_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)(pSVar2->fields).m_Dict;
    if (__this_00 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    System_Collections_Generic_Dictionary<object__object>__GetEnumerator
              ((System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)
               &stack0xffffffffffffff90,__this_00,MethodInfo_Dictionary_2_TKey_TValue__Enumerator_System_Stri);
    (__this->fields).__7__wrap1.fields._getEnumeratorRetType = local_50;
    *(undefined4 *)&(__this->fields).__7__wrap1.fields.field_0x24 = uStack_4c;
    *(undefined4 *)&(__this->fields).__7__wrap1.fields._current.fields.key =
         in_stack_ffffffffffffffa0;
    *(undefined4 *)((long)&(__this->fields).__7__wrap1.fields._current.fields.key + 4) =
         in_stack_ffffffffffffffa4;
    *(undefined4 *)&(__this->fields).__7__wrap1.fields._current.fields.value =
         in_stack_ffffffffffffffa8;
    *(undefined4 *)((long)&(__this->fields).__7__wrap1.fields._current.fields.value + 4) =
         in_stack_ffffffffffffffac;
    *(undefined4 *)&(__this->fields).__7__wrap1.fields._dictionary = in_stack_ffffffffffffff90;
    *(undefined4 *)((long)&(__this->fields).__7__wrap1.fields._dictionary + 4) =
         in_stack_ffffffffffffff94;
    (__this->fields).__7__wrap1.fields._version = in_stack_ffffffffffffff98;
    (__this->fields).__7__wrap1.fields._index = in_stack_ffffffffffffff9c;
    il2cpp_runtime_glue(&(__this->fields).__7__wrap1,0);
  }
  (__this->fields).__1__state = -3;
  method_00 = &(__this->fields).__7__wrap1;
  __this_01.fields._version = in_stack_ffffffffffffff90;
  __this_01.fields._dictionary =
       (System_Collections_Generic_Dictionary_TKey__TValue__o *)in_stack_ffffffffffffff88;
  __this_01.fields._index = in_stack_ffffffffffffff94;
  __this_01.fields._current.fields.key._0_4_ = in_stack_ffffffffffffff98;
  __this_01.fields._current.fields.key._4_4_ = in_stack_ffffffffffffff9c;
  __this_01.fields._current.fields.value._0_4_ = in_stack_ffffffffffffffa0;
  __this_01.fields._current.fields.value._4_4_ = in_stack_ffffffffffffffa4;
  __this_01.fields._getEnumeratorRetType = in_stack_ffffffffffffffa8;
  __this_01.fields._36_4_ = in_stack_ffffffffffffffac;
  bVar3 = System_Collections_Generic_Dictionary_Enumerator<object__object>__MoveNext
                    (__this_01,(MethodInfo_31CFE90 *)method_00);
  if ((char)bVar3 == '\0') {
    if (DAT_057026d5 == '\0') {
      il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
      DAT_057026d5 = '\x01';
    }
    (__this->fields).__1__state = -1;
    __this_02.fields._version = in_stack_ffffffffffffff90;
    __this_02.fields._dictionary =
         (System_Collections_Generic_Dictionary_TKey__TValue__o *)in_stack_ffffffffffffff88;
    __this_02.fields._index = in_stack_ffffffffffffff94;
    __this_02.fields._current.fields.key._0_4_ = in_stack_ffffffffffffff98;
    __this_02.fields._current.fields.key._4_4_ = in_stack_ffffffffffffff9c;
    __this_02.fields._current.fields.value._0_4_ = in_stack_ffffffffffffffa0;
    __this_02.fields._current.fields.value._4_4_ = in_stack_ffffffffffffffa4;
    __this_02.fields._getEnumeratorRetType = in_stack_ffffffffffffffa8;
    __this_02.fields._36_4_ = in_stack_ffffffffffffffac;
    System_Collections_Generic_Dictionary_Enumerator<object__object>__Dispose
              (__this_02,(MethodInfo_31CFFB0 *)method_00);
    (__this->fields).__7__wrap1.fields._current.fields.key = (Il2CppObject *)0x0;
    (__this->fields).__7__wrap1.fields._current.fields.value = (Il2CppObject *)0x0;
    (method_00->fields)._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
    (__this->fields).__7__wrap1.fields._version = 0;
    (__this->fields).__7__wrap1.fields._index = 0;
    *(undefined8 *)&(__this->fields).__7__wrap1.fields._getEnumeratorRetType = 0;
    return 0;
  }
  il2cpp_glue_032bf890(method_00,MethodInfo_KeyValuePair_2_System_String_SimpleJSONFixed_JSO);
  (__this->fields).__2__current = extraout_RDX;
  uVar4 = il2cpp_runtime_glue(&(__this->fields).__2__current,extraout_RDX);
  (__this->fields).__1__state = 1;
  return (bool_conflict)CONCAT71((int7)((ulong)uVar4 >> 8),1);
}


// SimpleJSONFixed.JSONObject.<get_Children>d__27$$<>m__Finally1
// il2cpp: void SimpleJSONFixed_JSONObject__get_Children_d__27____m__Finally1 (SimpleJSONFixed_JSONObject__get_Children_d__27_o* __this, const MethodInfo* method);
// 0x3d89bb0

void SimpleJSONFixed_JSONObject_<get_Children>d__27__<>m__Finally1
               (SimpleJSONFixed_JSONObject__get_Children_d__27_o *__this,MethodInfo *method)

{
  undefined1 in_stack_00000008 [40];
  
  if (DAT_057026d5 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    DAT_057026d5 = '\x01';
  }
  (__this->fields).__1__state = -1;
  System_Collections_Generic_Dictionary_Enumerator<object__object>__Dispose
            ((System_Collections_Generic_Dictionary_Enumerator_object__object__o)in_stack_00000008,
             (MethodInfo_31CFFB0 *)&(__this->fields).__7__wrap1);
  return;
}


// SimpleJSONFixed.JSONObject.<get_Children>d__27$$System.Collections.Generic.IEnumerator<SimpleJSONFixed.JSONNode>.get_Current
// il2cpp: SimpleJSONFixed_JSONNode_o* SimpleJSONFixed_JSONObject__get_Children_d__27__System_Collections_Generic_IEnumerator_SimpleJSONFixed_JSONNode__get_Current (SimpleJSONFixed_JSONObject__get_Children_d__27_o* __this, const MethodInfo* method);
// 0x3d89bf0

SimpleJSONFixed_JSONNode_o *
SimpleJSONFixed_JSONObject_<get_Children>d__27__System_Collections_Generic_IEnumerator<SimpleJSONFixed_JSONNode>_get_Current
          (SimpleJSONFixed_JSONObject__get_Children_d__27_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// SimpleJSONFixed.JSONObject.<get_Children>d__27$$System.Collections.IEnumerator.Reset
// il2cpp: void SimpleJSONFixed_JSONObject__get_Children_d__27__System_Collections_IEnumerator_Reset (SimpleJSONFixed_JSONObject__get_Children_d__27_o* __this, const MethodInfo* method);
// 0x3d89c00

void SimpleJSONFixed_JSONObject_<get_Children>d__27__System_Collections_IEnumerator_Reset
               (SimpleJSONFixed_JSONObject__get_Children_d__27_o *__this,MethodInfo *method)

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


// SimpleJSONFixed.JSONObject.<get_Children>d__27$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* SimpleJSONFixed_JSONObject__get_Children_d__27__System_Collections_IEnumerator_get_Current (SimpleJSONFixed_JSONObject__get_Children_d__27_o* __this, const MethodInfo* method);
// 0x3d89c40

Il2CppObject *
SimpleJSONFixed_JSONObject_<get_Children>d__27__System_Collections_IEnumerator_get_Current
          (SimpleJSONFixed_JSONObject__get_Children_d__27_o *__this,MethodInfo *method)

{
  return (Il2CppObject *)(__this->fields).__2__current;
}


// SimpleJSONFixed.JSONObject.<get_Children>d__27$$System.Collections.Generic.IEnumerable<SimpleJSONFixed.JSONNode>.GetEnumerator
// il2cpp: System_Collections_Generic_IEnumerator_JSONNode__o* SimpleJSONFixed_JSONObject__get_Children_d__27__System_Collections_Generic_IEnumerable_SimpleJSONFixed_JSONNode__GetEnumerator (SimpleJSONFixed_JSONObject__get_Children_d__27_o* __this, const MethodInfo* method);
// 0x3d89c50

System_Collections_IEnumerator_o *
SimpleJSONFixed_JSONObject_<get_Children>d__27__System_Collections_Generic_IEnumerable<SimpleJSONFixed_JSONNode>_GetEnumerator
          (SimpleJSONFixed_JSONObject__get_Children_d__27_o *__this,MethodInfo *method)

{
  int iVar1;
  int32_t iVar2;
  Il2CppObject *__this_00;
  
  if (DAT_057026d6 == '\0') {
    il2cpp_init_method_metadata();
    DAT_057026d6 = '\x01';
  }
  if (((__this->fields).__1__state == -2) &&
     (iVar1 = (__this->fields).__l__initialThreadId,
     iVar2 = System_Environment__get_CurrentManagedThreadId((MethodInfo *)0x0), iVar1 == iVar2)) {
    (__this->fields).__1__state = 0;
    return (System_Collections_IEnumerator_o *)__this;
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_get_Children_d__27);
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


// SimpleJSONFixed.JSONObject.<get_Children>d__27$$System.Collections.IEnumerable.GetEnumerator
// il2cpp: System_Collections_IEnumerator_o* SimpleJSONFixed_JSONObject__get_Children_d__27__System_Collections_IEnumerable_GetEnumerator (SimpleJSONFixed_JSONObject__get_Children_d__27_o* __this, const MethodInfo* method);
// 0x3d89cf0

System_Collections_IEnumerator_o *
SimpleJSONFixed_JSONObject_<get_Children>d__27__System_Collections_IEnumerable_GetEnumerator
          (SimpleJSONFixed_JSONObject__get_Children_d__27_o *__this,MethodInfo *method)

{
  int iVar1;
  int32_t iVar2;
  Il2CppObject *__this_00;
  
  if (DAT_057026d6 == '\0') {
    il2cpp_init_method_metadata();
    DAT_057026d6 = '\x01';
  }
  if (((__this->fields).__1__state == -2) &&
     (iVar1 = (__this->fields).__l__initialThreadId,
     iVar2 = System_Environment__get_CurrentManagedThreadId((MethodInfo *)0x0), iVar1 == iVar2)) {
    (__this->fields).__1__state = 0;
    return (System_Collections_IEnumerator_o *)__this;
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_get_Children_d__27);
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


// SimpleJSONFixed.JSONObject$$get_Inline
// il2cpp: bool SimpleJSONFixed_JSONObject__get_Inline (SimpleJSONFixed_JSONObject_o* __this, const MethodInfo* method);
// 0x3d885f0

bool_conflict
SimpleJSONFixed_JSONObject__get_Inline(SimpleJSONFixed_JSONObject_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),(char)(__this->fields).field1_0x8);
}


// SimpleJSONFixed.JSONObject$$set_Inline
// il2cpp: void SimpleJSONFixed_JSONObject__set_Inline (SimpleJSONFixed_JSONObject_o* __this, bool value, const MethodInfo* method);
// 0x3d88600

void SimpleJSONFixed_JSONObject__set_Inline
               (SimpleJSONFixed_JSONObject_o *__this,bool_conflict value,MethodInfo *method)

{
  *(char *)&(__this->fields).field1_0x8 = (char)value;
  return;
}


// SimpleJSONFixed.JSONObject$$get_Tag
// il2cpp: int32_t SimpleJSONFixed_JSONObject__get_Tag (SimpleJSONFixed_JSONObject_o* __this, const MethodInfo* method);
// 0x3d88610

int32_t SimpleJSONFixed_JSONObject__get_Tag(SimpleJSONFixed_JSONObject_o *__this,MethodInfo *method)

{
  return 2;
}


// SimpleJSONFixed.JSONObject$$get_IsObject
// il2cpp: bool SimpleJSONFixed_JSONObject__get_IsObject (SimpleJSONFixed_JSONObject_o* __this, const MethodInfo* method);
// 0x3d88620

bool_conflict
SimpleJSONFixed_JSONObject__get_IsObject(SimpleJSONFixed_JSONObject_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// SimpleJSONFixed.JSONObject$$GetEnumerator
// il2cpp: SimpleJSONFixed_JSONNode_Enumerator_o SimpleJSONFixed_JSONObject__GetEnumerator (SimpleJSONFixed_JSONObject_o* __this, const MethodInfo* method);
// 0x3d88630

/* WARNING: Type propagation algorithm not settling */

SimpleJSONFixed_JSONNode_Enumerator_o *
SimpleJSONFixed_JSONObject__GetEnumerator
          (SimpleJSONFixed_JSONNode_Enumerator_o *__return_storage_ptr__,
          SimpleJSONFixed_JSONObject_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o SStack_38;
  
  if (DAT_057026c2 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_TKey_TValue__Enumerator_System_Stri);
    DAT_057026c2 = '\x01';
  }
  __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).m_Dict;
  if (__this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    System_Collections_Generic_Dictionary<object__object>__GetEnumerator
              (&SStack_38,__this_00,MethodInfo_Dictionary_2_TKey_TValue__Enumerator_System_Stri);
    *(undefined8 *)&__return_storage_ptr__->fields = 0;
    (__return_storage_ptr__->fields).m_Object.fields._dictionary =
         (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
    (__return_storage_ptr__->fields).m_Array.fields._list =
         (System_Collections_Generic_List_T__o *)0x0;
    (__return_storage_ptr__->fields).m_Array.fields._index = 0;
    (__return_storage_ptr__->fields).m_Array.fields._version = 0;
    (__return_storage_ptr__->fields).m_Object.fields._current.fields.value = (Il2CppObject *)0x0;
    *(undefined8 *)&(__return_storage_ptr__->fields).m_Object.fields._getEnumeratorRetType = 0;
    (__return_storage_ptr__->fields).m_Object.fields._version = 0;
    (__return_storage_ptr__->fields).m_Object.fields._index = 0;
    (__return_storage_ptr__->fields).m_Object.fields._current.fields.key = (Il2CppObject *)0x0;
    (__return_storage_ptr__->fields).m_Array.fields._current = (SimpleJSONFixed_JSONNode_o *)0x0;
    (__return_storage_ptr__->fields).type = 2;
    *(undefined4 *)&(__return_storage_ptr__->fields).m_Object.fields._dictionary =
         SStack_38.fields._dictionary._0_4_;
    *(undefined4 *)((long)&(__return_storage_ptr__->fields).m_Object.fields._dictionary + 4) =
         SStack_38.fields._dictionary._4_4_;
    (__return_storage_ptr__->fields).m_Object.fields._version = SStack_38.fields._version;
    (__return_storage_ptr__->fields).m_Object.fields._index = SStack_38.fields._index;
    *(undefined4 *)&(__return_storage_ptr__->fields).m_Object.fields._current.fields.key =
         SStack_38.fields._current.fields.key._0_4_;
    *(undefined4 *)((long)&(__return_storage_ptr__->fields).m_Object.fields._current.fields.key + 4)
         = SStack_38.fields._current.fields.key._4_4_;
    *(undefined4 *)&(__return_storage_ptr__->fields).m_Object.fields._current.fields.value =
         SStack_38.fields._current.fields.value._0_4_;
    *(undefined4 *)
     ((long)&(__return_storage_ptr__->fields).m_Object.fields._current.fields.value + 4) =
         SStack_38.fields._current.fields.value._4_4_;
    (__return_storage_ptr__->fields).m_Object.fields._getEnumeratorRetType =
         SStack_38.fields._getEnumeratorRetType;
    *(undefined4 *)&(__return_storage_ptr__->fields).m_Object.fields.field_0x24 =
         SStack_38.fields._36_4_;
    il2cpp_runtime_glue(&(__return_storage_ptr__->fields).m_Object,0);
    (__return_storage_ptr__->fields).m_Array.fields._list =
         (System_Collections_Generic_List_T__o *)0x0;
    (__return_storage_ptr__->fields).m_Array.fields._index = 0;
    (__return_storage_ptr__->fields).m_Array.fields._version = 0;
    (__return_storage_ptr__->fields).m_Array.fields._current = (SimpleJSONFixed_JSONNode_o *)0x0;
    return __return_storage_ptr__;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// SimpleJSONFixed.JSONObject$$get_Item
// il2cpp: SimpleJSONFixed_JSONNode_o* SimpleJSONFixed_JSONObject__get_Item (SimpleJSONFixed_JSONObject_o* __this, System_String_o* aKey, const MethodInfo* method);
// 0x3d886e0

SimpleJSONFixed_JSONNode_o *
SimpleJSONFixed_JSONObject__get_Item
          (SimpleJSONFixed_JSONObject_o *__this,System_String_o *aKey,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *pSVar1;
  bool_conflict bVar2;
  Il2CppObject *pIVar3;
  
  if (DAT_057026c3 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ContainsKey);
    il2cpp_init_method_metadata(&MethodInfo_JSONNode_get_Item);
    il2cpp_init_method_metadata(&TypeInfo_JSONLazyCreator);
    DAT_057026c3 = '\x01';
  }
  pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).m_Dict;
  if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    bVar2 = System_Collections_Generic_Dictionary<object__object>__ContainsKey
                      (pSVar1,(Il2CppObject *)aKey,MethodInfo_Boolean_ContainsKey);
    if ((char)bVar2 == '\0') {
      pIVar3 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_JSONLazyCreator);
      if (DAT_057026ef == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_JSONNode);
        DAT_057026ef = '\x01';
      }
      if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
        il2cpp_init_class();
      }
      System_Object___ctor(pIVar3,(MethodInfo *)0x0);
      pIVar3[1].klass = (Il2CppClass *)__this;
      il2cpp_runtime_glue(pIVar3 + 1,__this);
      pIVar3[1].monitor = aKey;
      il2cpp_runtime_glue(&pIVar3[1].monitor,aKey);
      return (SimpleJSONFixed_JSONNode_o *)pIVar3;
    }
    pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).m_Dict;
    if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      pIVar3 = System_Collections_Generic_Dictionary<object__object>__get_Item
                         (pSVar1,(Il2CppObject *)aKey,MethodInfo_JSONNode_get_Item);
      return (SimpleJSONFixed_JSONNode_o *)pIVar3;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// SimpleJSONFixed.JSONObject$$set_Item
// il2cpp: void SimpleJSONFixed_JSONObject__set_Item (SimpleJSONFixed_JSONObject_o* __this, System_String_o* aKey, SimpleJSONFixed_JSONNode_o* value, const MethodInfo* method);
// 0x3d88870

void SimpleJSONFixed_JSONObject__set_Item
               (SimpleJSONFixed_JSONObject_o *__this,System_String_o *aKey,
               SimpleJSONFixed_JSONNode_o *value,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *pSVar1;
  bool_conflict bVar2;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *pMVar3;
  
  pMVar3 = (MethodInfo *)value;
  if (DAT_057026c4 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ContainsKey);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Item);
    il2cpp_init_method_metadata(&TypeInfo_JSONNode);
    il2cpp_init_method_metadata(&TypeInfo_JSONNull);
    DAT_057026c4 = '\x01';
    pMVar3 = extraout_RDX;
  }
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_init_class();
    pMVar3 = extraout_RDX_00;
  }
  bVar2 = SimpleJSONFixed_JSONNode__op_Equality(value,(Il2CppObject *)0x0,pMVar3);
  if ((char)bVar2 != '\0') {
    pMVar3 = TypeInfo_JSONNull;
    if (*(int *)((long)&TypeInfo_JSONNull[2].parameters + 4) == 0) {
      il2cpp_init_class();
    }
    value = (SimpleJSONFixed_JSONNode_o *)SimpleJSONFixed_JSONNull__CreateOrGet(pMVar3);
  }
  pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).m_Dict;
  if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    bVar2 = System_Collections_Generic_Dictionary<object__object>__ContainsKey
                      (pSVar1,(Il2CppObject *)aKey,MethodInfo_Boolean_ContainsKey);
    pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).m_Dict;
    if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      if ((char)bVar2 != '\0') {
        System_Collections_Generic_Dictionary<object__object>__set_Item
                  (pSVar1,(Il2CppObject *)aKey,(Il2CppObject *)value,MethodInfo_Void_set_Item);
        return;
      }
      System_Collections_Generic_Dictionary<object__object>__Add
                (pSVar1,(Il2CppObject *)aKey,(Il2CppObject *)value,MethodInfo_Void_Add);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// SimpleJSONFixed.JSONObject$$get_Item
// il2cpp: SimpleJSONFixed_JSONNode_o* SimpleJSONFixed_JSONObject__get_Item (SimpleJSONFixed_JSONObject_o* __this, int32_t aIndex, const MethodInfo* method);
// 0x3d88980

SimpleJSONFixed_JSONNode_o *
SimpleJSONFixed_JSONObject__get_Item
          (SimpleJSONFixed_JSONObject_o *__this,int32_t aIndex,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  int32_t iVar1;
  System_Collections_Generic_KeyValuePair_object__object__o SVar2;
  
  if (DAT_057026c5 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    il2cpp_init_method_metadata(&MethodInfo_KeyValuePair_2_System_String_SimpleJSONFixed_JSO);
    il2cpp_init_method_metadata(&MethodInfo_JSONNode_get_Value);
    DAT_057026c5 = '\x01';
  }
  if (-1 < aIndex) {
    __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).m_Dict;
    if (__this_00 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    iVar1 = System_Collections_Generic_Dictionary<object__object>__get_Count(__this_00,MethodInfo_Int32_get_Count)
    ;
    if (aIndex < iVar1) {
      SVar2 = System_Linq_Enumerable__ElementAt<KeyValuePair<object__object>>
                        ((System_Collections_Generic_IEnumerable_TSource__o *)
                         (__this->fields).m_Dict,aIndex,MethodInfo_KeyValuePair_2_System_String_SimpleJSONFixed_JSO);
      return (SimpleJSONFixed_JSONNode_o *)SVar2.fields.value;
    }
  }
  return (SimpleJSONFixed_JSONNode_o *)0x0;
}


// SimpleJSONFixed.JSONObject$$set_Item
// il2cpp: void SimpleJSONFixed_JSONObject__set_Item (SimpleJSONFixed_JSONObject_o* __this, int32_t aIndex, SimpleJSONFixed_JSONNode_o* value, const MethodInfo* method);
// 0x3d88a10

void SimpleJSONFixed_JSONObject__set_Item
               (SimpleJSONFixed_JSONObject_o *__this,int32_t aIndex,
               SimpleJSONFixed_JSONNode_o *value,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *pSVar1;
  bool_conflict bVar2;
  int32_t iVar3;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *pMVar4;
  System_Collections_Generic_KeyValuePair_object__object__o SVar5;
  
  pMVar4 = (MethodInfo *)value;
  if (DAT_057026c6 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Item);
    il2cpp_init_method_metadata(&MethodInfo_KeyValuePair_2_System_String_SimpleJSONFixed_JSO);
    il2cpp_init_method_metadata(&TypeInfo_JSONNode);
    il2cpp_init_method_metadata(&TypeInfo_JSONNull);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Key);
    DAT_057026c6 = '\x01';
    pMVar4 = extraout_RDX;
  }
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_init_class();
    pMVar4 = extraout_RDX_00;
  }
  bVar2 = SimpleJSONFixed_JSONNode__op_Equality(value,(Il2CppObject *)0x0,pMVar4);
  if ((char)bVar2 != '\0') {
    pMVar4 = TypeInfo_JSONNull;
    if (*(int *)((long)&TypeInfo_JSONNull[2].parameters + 4) == 0) {
      il2cpp_init_class();
    }
    value = (SimpleJSONFixed_JSONNode_o *)SimpleJSONFixed_JSONNull__CreateOrGet(pMVar4);
  }
  if (aIndex < 0) {
    return;
  }
  pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).m_Dict;
  if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    iVar3 = System_Collections_Generic_Dictionary<object__object>__get_Count(pSVar1,MethodInfo_Int32_get_Count);
    if (iVar3 <= aIndex) {
      return;
    }
    SVar5 = System_Linq_Enumerable__ElementAt<KeyValuePair<object__object>>
                      ((System_Collections_Generic_IEnumerable_TSource__o *)(__this->fields).m_Dict,
                       aIndex,MethodInfo_KeyValuePair_2_System_String_SimpleJSONFixed_JSO);
    pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).m_Dict;
    if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      System_Collections_Generic_Dictionary<object__object>__set_Item
                (pSVar1,SVar5.fields.key,(Il2CppObject *)value,MethodInfo_Void_set_Item);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// SimpleJSONFixed.JSONObject$$get_Count
// il2cpp: int32_t SimpleJSONFixed_JSONObject__get_Count (SimpleJSONFixed_JSONObject_o* __this, const MethodInfo* method);
// 0x3d88b20

int32_t SimpleJSONFixed_JSONObject__get_Count
                  (SimpleJSONFixed_JSONObject_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  int32_t iVar1;
  
  if (DAT_057026c7 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    DAT_057026c7 = '\x01';
  }
  __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).m_Dict;
  if (__this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    iVar1 = System_Collections_Generic_Dictionary<object__object>__get_Count(__this_00,MethodInfo_Int32_get_Count)
    ;
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// SimpleJSONFixed.JSONObject$$Add
// il2cpp: void SimpleJSONFixed_JSONObject__Add (SimpleJSONFixed_JSONObject_o* __this, System_String_o* aKey, SimpleJSONFixed_JSONNode_o* aItem, const MethodInfo* method);
// 0x3d88b60

void SimpleJSONFixed_JSONObject__Add
               (SimpleJSONFixed_JSONObject_o *__this,System_String_o *aKey,
               SimpleJSONFixed_JSONNode_o *aItem,MethodInfo *method)

{
  bool_conflict bVar1;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *pMVar2;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  System_Guid_o __this_01;
  System_Guid_Fields local_38;
  
  pMVar2 = (MethodInfo *)aItem;
  if (DAT_057026c8 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ContainsKey);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Item);
    il2cpp_init_method_metadata(&TypeInfo_JSONNode);
    il2cpp_init_method_metadata(&TypeInfo_JSONNull);
    DAT_057026c8 = '\x01';
    pMVar2 = extraout_RDX;
  }
  local_38 = (System_Guid_Fields)ZEXT816(0);
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_init_class();
    pMVar2 = extraout_RDX_00;
  }
  bVar1 = SimpleJSONFixed_JSONNode__op_Equality(aItem,(Il2CppObject *)0x0,pMVar2);
  if ((char)bVar1 != '\0') {
    pMVar2 = TypeInfo_JSONNull;
    if (*(int *)((long)&TypeInfo_JSONNull[2].parameters + 4) == 0) {
      il2cpp_init_class();
    }
    aItem = (SimpleJSONFixed_JSONNode_o *)SimpleJSONFixed_JSONNull__CreateOrGet(pMVar2);
  }
  __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).m_Dict;
  if (aKey == (System_String_o *)0x0) {
    local_38 = (System_Guid_Fields)System_Guid__NewGuid((MethodInfo *)0x0);
    __this_01.fields._d = '\0';
    __this_01.fields._e = '\0';
    __this_01.fields._f = '\0';
    __this_01.fields._g = '\0';
    __this_01.fields._h = '\0';
    __this_01.fields._i = '\0';
    __this_01.fields._j = '\0';
    __this_01.fields._k = '\0';
    __this_01.fields._0_8_ = &local_38;
    aKey = System_Guid__ToString(__this_01,local_38._8_8_);
    if (__this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
LAB_03d88c96:
      System_Collections_Generic_Dictionary<object__object>__Add
                (__this_00,(Il2CppObject *)aKey,(Il2CppObject *)aItem,MethodInfo_Void_Add);
      return;
    }
  }
  else if (__this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    bVar1 = System_Collections_Generic_Dictionary<object__object>__ContainsKey
                      (__this_00,(Il2CppObject *)aKey,MethodInfo_Boolean_ContainsKey);
    __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).m_Dict;
    if (__this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      if ((char)bVar1 != '\0') {
        System_Collections_Generic_Dictionary<object__object>__set_Item
                  (__this_00,(Il2CppObject *)aKey,(Il2CppObject *)aItem,MethodInfo_Void_set_Item);
        return;
      }
      goto LAB_03d88c96;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// SimpleJSONFixed.JSONObject$$Remove
// il2cpp: SimpleJSONFixed_JSONNode_o* SimpleJSONFixed_JSONObject__Remove (SimpleJSONFixed_JSONObject_o* __this, System_String_o* aKey, const MethodInfo* method);
// 0x3d88cb0

SimpleJSONFixed_JSONNode_o *
SimpleJSONFixed_JSONObject__Remove
          (SimpleJSONFixed_JSONObject_o *__this,System_String_o *aKey,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *pSVar1;
  bool_conflict bVar2;
  Il2CppObject *pIVar3;
  
  if (DAT_057026c9 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ContainsKey);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Remove);
    il2cpp_init_method_metadata(&MethodInfo_JSONNode_get_Item);
    DAT_057026c9 = '\x01';
  }
  pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).m_Dict;
  if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    bVar2 = System_Collections_Generic_Dictionary<object__object>__ContainsKey
                      (pSVar1,(Il2CppObject *)aKey,MethodInfo_Boolean_ContainsKey);
    if ((char)bVar2 == '\0') {
      return (SimpleJSONFixed_JSONNode_o *)0x0;
    }
    pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).m_Dict;
    if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      pIVar3 = System_Collections_Generic_Dictionary<object__object>__get_Item
                         (pSVar1,(Il2CppObject *)aKey,MethodInfo_JSONNode_get_Item);
      pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).m_Dict;
      if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
        System_Collections_Generic_Dictionary<object__object>__Remove
                  (pSVar1,(Il2CppObject *)aKey,MethodInfo_Boolean_Remove);
        return (SimpleJSONFixed_JSONNode_o *)pIVar3;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// SimpleJSONFixed.JSONObject$$Remove
// il2cpp: SimpleJSONFixed_JSONNode_o* SimpleJSONFixed_JSONObject__Remove (SimpleJSONFixed_JSONObject_o* __this, int32_t aIndex, const MethodInfo* method);
// 0x3d88d60

SimpleJSONFixed_JSONNode_o *
SimpleJSONFixed_JSONObject__Remove
          (SimpleJSONFixed_JSONObject_o *__this,int32_t aIndex,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *pSVar1;
  int32_t iVar2;
  System_Collections_Generic_KeyValuePair_object__object__o SVar3;
  
  if (DAT_057026ca == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Remove);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    il2cpp_init_method_metadata(&MethodInfo_KeyValuePair_2_System_String_SimpleJSONFixed_JSO);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Key);
    il2cpp_init_method_metadata(&MethodInfo_JSONNode_get_Value);
    DAT_057026ca = '\x01';
  }
  if (aIndex < 0) {
    return (SimpleJSONFixed_JSONNode_o *)0x0;
  }
  pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).m_Dict;
  if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    iVar2 = System_Collections_Generic_Dictionary<object__object>__get_Count(pSVar1,MethodInfo_Int32_get_Count);
    if (iVar2 <= aIndex) {
      return (SimpleJSONFixed_JSONNode_o *)0x0;
    }
    SVar3 = System_Linq_Enumerable__ElementAt<KeyValuePair<object__object>>
                      ((System_Collections_Generic_IEnumerable_TSource__o *)(__this->fields).m_Dict,
                       aIndex,MethodInfo_KeyValuePair_2_System_String_SimpleJSONFixed_JSO);
    pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).m_Dict;
    if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      System_Collections_Generic_Dictionary<object__object>__Remove
                (pSVar1,SVar3.fields.key,MethodInfo_Boolean_Remove);
      return (SimpleJSONFixed_JSONNode_o *)SVar3.fields.value;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// SimpleJSONFixed.JSONObject$$Remove
// il2cpp: SimpleJSONFixed_JSONNode_o* SimpleJSONFixed_JSONObject__Remove (SimpleJSONFixed_JSONObject_o* __this, SimpleJSONFixed_JSONNode_o* aNode, const MethodInfo* method);
// 0x3d88e20

SimpleJSONFixed_JSONNode_o *
SimpleJSONFixed_JSONObject__Remove
          (SimpleJSONFixed_JSONObject_o *__this,SimpleJSONFixed_JSONNode_o *aNode,MethodInfo *method
          )

{
  System_Collections_Generic_Dictionary_string__JSONNode__o *source;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  Il2CppObject *__this_01;
  System_Func_TSource__bool__o *predicate;
  System_Collections_Generic_IEnumerable_TSource__o *source_00;
  System_Collections_Generic_KeyValuePair_object__object__o SVar1;
  
  if (DAT_057026cb == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Remove);
    il2cpp_init_method_metadata(&MethodInfo_KeyValuePair_2_System_String_SimpleJSONFixed_JSO);
    il2cpp_init_method_metadata(&MethodInfo_IEnumerable_1_KeyValuePair_2_System_String_Simpl);
    il2cpp_init_method_metadata(&TypeInfo_Func_KeyValuePair_string__JSONNode___bool);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Key);
    il2cpp_init_method_metadata(&MethodInfo_Boolean__Remove_b__0);
    il2cpp_init_method_metadata(&TypeInfo_c__DisplayClass21_0);
    DAT_057026cb = '\x01';
  }
  __this_01 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_c__DisplayClass21_0);
  System_Object___ctor(__this_01,(MethodInfo *)0x0);
  if (__this_01 != (Il2CppObject *)0x0) {
    __this_01[1].klass = (Il2CppClass *)aNode;
    il2cpp_runtime_glue(__this_01 + 1,aNode);
    source = (__this->fields).m_Dict;
    predicate = (System_Func_TSource__bool__o *)il2cpp_runtime_glue(TypeInfo_Func_KeyValuePair_string__JSONNode___bool);
    System_Func<KeyValuePair<object__object>__bool>___ctor();
    source_00 = System_Linq_Enumerable__Where<KeyValuePair<object__object>>
                          ((System_Collections_Generic_IEnumerable_TSource__o *)source,predicate,
                           MethodInfo_IEnumerable_1_KeyValuePair_2_System_String_Simpl);
    SVar1 = System_Linq_Enumerable__First<KeyValuePair<object__object>>(source_00,MethodInfo_KeyValuePair_2_System_String_SimpleJSONFixed_JSO);
    __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).m_Dict;
    if (__this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      System_Collections_Generic_Dictionary<object__object>__Remove
                (__this_00,SVar1.fields.key,MethodInfo_Boolean_Remove);
      return (SimpleJSONFixed_JSONNode_o *)__this_01[1].klass;
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// SimpleJSONFixed.JSONObject$$Clear
// il2cpp: void SimpleJSONFixed_JSONObject__Clear (SimpleJSONFixed_JSONObject_o* __this, const MethodInfo* method);
// 0x3d89000

void SimpleJSONFixed_JSONObject__Clear(SimpleJSONFixed_JSONObject_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  
  if (DAT_057026cc == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Clear);
    DAT_057026cc = '\x01';
  }
  __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).m_Dict;
  if (__this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    System_Collections_Generic_Dictionary<object__object>__Clear(__this_00,MethodInfo_Void_Clear);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// SimpleJSONFixed.JSONObject$$Clone
// il2cpp: SimpleJSONFixed_JSONNode_o* SimpleJSONFixed_JSONObject__Clone (SimpleJSONFixed_JSONObject_o* __this, const MethodInfo* method);
// 0x3d89040

SimpleJSONFixed_JSONNode_o *
SimpleJSONFixed_JSONObject__Clone(SimpleJSONFixed_JSONObject_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  System_Collections_Generic_Dictionary_Enumerator_object__object__o __this_01;
  System_Collections_Generic_Dictionary_Enumerator_object__object__o __this_02;
  System_Collections_Generic_Dictionary_Enumerator_object__object__o __this_03;
  bool_conflict bVar1;
  SimpleJSONFixed_JSONObject_o *__this_04;
  undefined8 uVar2;
  long *plVar3;
  long *extraout_RDX;
  undefined1 auVar4 [16];
  System_Collections_Generic_Dictionary_TKey__TValue__o *pSVar5;
  Il2CppMethodPointer pIVar6;
  Il2CppObject *pIVar7;
  Il2CppObject *pIVar8;
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__c *pSVar9;
  
  if (DAT_057026cd == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_TKey_TValue__Enumerator_System_Stri);
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_KeyValuePair_2_System_String_SimpleJSONFixed_JSO);
    il2cpp_init_method_metadata(&TypeInfo_JSONObject);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Key);
    il2cpp_init_method_metadata(&MethodInfo_JSONNode_get_Value);
    DAT_057026cd = '\x01';
  }
  pIVar7 = (Il2CppObject *)0x0;
  pIVar8 = (Il2CppObject *)0x0;
  pSVar5 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  pIVar6 = (Il2CppMethodPointer)0x0;
  pSVar9 = (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__c *)0x0;
  __this_04 = (SimpleJSONFixed_JSONObject_o *)il2cpp_runtime_glue(TypeInfo_JSONObject);
  SimpleJSONFixed_JSONObject___ctor(__this_04,method);
  __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).m_Dict;
  if (__this_00 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  System_Collections_Generic_Dictionary<object__object>__GetEnumerator
            ((System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)
             &stack0xffffffffffffffa8,__this_00,MethodInfo_Dictionary_2_TKey_TValue__Enumerator_System_Stri);
  if (__this_04 == (SimpleJSONFixed_JSONObject_o *)0x0) {
    __this_02.fields._8_8_ = pIVar6;
    __this_02.fields._dictionary = pSVar5;
    __this_02.fields._current.fields.key = pIVar7;
    __this_02.fields._current.fields.value = pIVar8;
    __this_02.fields._32_8_ = pSVar9;
    bVar1 = System_Collections_Generic_Dictionary_Enumerator<object__object>__MoveNext
                      (__this_02,(MethodInfo_31CFE90 *)&stack0xffffffffffffffa8);
    if ((char)bVar1 != '\0') {
      il2cpp_glue_032bf890(&stack0xffffffffffffffa8,MethodInfo_KeyValuePair_2_System_String_SimpleJSONFixed_JSO);
      if (extraout_RDX != (long *)0x0) {
        (**(code **)(*extraout_RDX + 0x2d8))(extraout_RDX,*(undefined8 *)(*extraout_RDX + 0x2e0));
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
LAB_03d891cc:
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
  }
  else {
    while (__this_01.fields._8_8_ = pIVar6, __this_01.fields._dictionary = pSVar5,
          __this_01.fields._current.fields.key = pIVar7,
          __this_01.fields._current.fields.value = pIVar8, __this_01.fields._32_8_ = pSVar9,
          bVar1 = System_Collections_Generic_Dictionary_Enumerator<object__object>__MoveNext
                            (__this_01,(MethodInfo_31CFE90 *)&stack0xffffffffffffffa8),
          (char)bVar1 != '\0') {
      auVar4 = il2cpp_glue_032bf890(&stack0xffffffffffffffa8,MethodInfo_KeyValuePair_2_System_String_SimpleJSONFixed_JSO);
      plVar3 = auVar4._8_8_;
      if (plVar3 == (long *)0x0) goto LAB_03d891cc;
      uVar2 = (**(code **)(*plVar3 + 0x2d8))(plVar3,*(undefined8 *)(*plVar3 + 0x2e0));
      (*(__this_04->klass->vtable)._20_Add.methodPtr)
                (__this_04,auVar4._0_8_,uVar2,(__this_04->klass->vtable)._20_Add.method);
    }
  }
  __this_03.fields._8_8_ = pIVar6;
  __this_03.fields._dictionary = pSVar5;
  __this_03.fields._current.fields.key = pIVar7;
  __this_03.fields._current.fields.value = pIVar8;
  __this_03.fields._32_8_ = pSVar9;
  System_Collections_Generic_Dictionary_Enumerator<object__object>__Dispose
            (__this_03,(MethodInfo_31CFFB0 *)&stack0xffffffffffffffa8);
  return (SimpleJSONFixed_JSONNode_o *)__this_04;
}


// SimpleJSONFixed.JSONObject$$HasKey
// il2cpp: bool SimpleJSONFixed_JSONObject__HasKey (SimpleJSONFixed_JSONObject_o* __this, System_String_o* aKey, const MethodInfo* method);
// 0x3d892a0

bool_conflict
SimpleJSONFixed_JSONObject__HasKey
          (SimpleJSONFixed_JSONObject_o *__this,System_String_o *aKey,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  bool_conflict bVar1;
  
  if (DAT_057026ce == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ContainsKey);
    DAT_057026ce = '\x01';
  }
  __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).m_Dict;
  if (__this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    bVar1 = System_Collections_Generic_Dictionary<object__object>__ContainsKey
                      (__this_00,(Il2CppObject *)aKey,MethodInfo_Boolean_ContainsKey);
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// SimpleJSONFixed.JSONObject$$GetValueOrDefault
// il2cpp: SimpleJSONFixed_JSONNode_o* SimpleJSONFixed_JSONObject__GetValueOrDefault (SimpleJSONFixed_JSONObject_o* __this, System_String_o* aKey, SimpleJSONFixed_JSONNode_o* aDefault, const MethodInfo* method);
// 0x3d892f0

SimpleJSONFixed_JSONNode_o *
SimpleJSONFixed_JSONObject__GetValueOrDefault
          (SimpleJSONFixed_JSONObject_o *__this,System_String_o *aKey,
          SimpleJSONFixed_JSONNode_o *aDefault,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  bool_conflict bVar1;
  Il2CppObject *local_20;
  
  if (DAT_057026cf == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_TryGetValue);
    DAT_057026cf = '\x01';
  }
  local_20 = (Il2CppObject *)0x0;
  __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).m_Dict;
  if (__this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    bVar1 = System_Collections_Generic_Dictionary<object__object>__TryGetValue
                      (__this_00,(Il2CppObject *)aKey,&local_20,MethodInfo_Boolean_TryGetValue);
    if ((char)bVar1 != '\0') {
      aDefault = (SimpleJSONFixed_JSONNode_o *)local_20;
    }
    return (SimpleJSONFixed_JSONNode_o *)(Il2CppObject *)aDefault;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// SimpleJSONFixed.JSONObject$$get_Children
// il2cpp: System_Collections_Generic_IEnumerable_JSONNode__o* SimpleJSONFixed_JSONObject__get_Children (SimpleJSONFixed_JSONObject_o* __this, const MethodInfo* method);
// 0x3d89370

System_Collections_Generic_IEnumerable_JSONNode__o *
SimpleJSONFixed_JSONObject__get_Children(SimpleJSONFixed_JSONObject_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  Il2CppObject *__this_00;
  
  if (DAT_057026d0 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_get_Children_d__27);
    DAT_057026d0 = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_get_Children_d__27);
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


// SimpleJSONFixed.JSONObject$$WriteToStringBuilder
// il2cpp: void SimpleJSONFixed_JSONObject__WriteToStringBuilder (SimpleJSONFixed_JSONObject_o* __this, System_Text_StringBuilder_o* aSB, int32_t aIndent, int32_t aIndentInc, int32_t aMode, const MethodInfo* method);
// 0x3d89420

void SimpleJSONFixed_JSONObject__WriteToStringBuilder
               (SimpleJSONFixed_JSONObject_o *__this,System_Text_StringBuilder_o *aSB,
               int32_t aIndent,int32_t aIndentInc,int32_t aMode,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  System_Collections_Generic_Dictionary_Enumerator_object__object__o __this_01;
  System_Collections_Generic_Dictionary_Enumerator_object__object__o __this_02;
  System_Collections_Generic_Dictionary_Enumerator_object__object__o __this_03;
  bool_conflict bVar1;
  System_Text_StringBuilder_o *pSVar2;
  System_String_o *pSVar3;
  undefined4 in_register_0000000c;
  undefined8 uVar4;
  long *plVar5;
  bool bVar6;
  MethodInfo *pMVar7;
  ulong uVar8;
  int repeatCount;
  undefined1 auVar9 [16];
  undefined1 in_stack_ffffffffffffff58 [12];
  System_Collections_Generic_Dictionary_TKey__TValue__o *pSVar10;
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o SStack_58;
  
  uVar4 = CONCAT44(in_register_0000000c,aIndentInc);
  uVar8 = (ulong)(uint)aIndent;
  if (DAT_057026d1 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_TKey_TValue__Enumerator_System_Stri);
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_KeyValuePair_2_System_String_SimpleJSONFixed_JSO);
    il2cpp_init_method_metadata(&TypeInfo_JSONNode);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Key);
    il2cpp_init_method_metadata(&MethodInfo_JSONNode_get_Value);
    il2cpp_init_method_metadata(&" : ");
    DAT_057026d1 = '\x01';
  }
  if (aSB != (System_Text_StringBuilder_o *)0x0) {
    System_Text_StringBuilder__Append(aSB,0x7b,(MethodInfo *)0x0);
    if ((char)(__this->fields).field1_0x8 != '\0') {
      aMode = 0;
    }
    __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).m_Dict;
    if (__this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      System_Collections_Generic_Dictionary<object__object>__GetEnumerator
                (&SStack_58,__this_00,MethodInfo_Dictionary_2_TKey_TValue__Enumerator_System_Stri);
      repeatCount = (int)uVar4 + aIndent;
      pSVar10 = SStack_58.fields._dictionary;
      if (aMode == 1) {
        bVar6 = true;
        while( true ) {
          __this_01.fields._index = aMode;
          __this_01.fields._dictionary =
               (System_Collections_Generic_Dictionary_TKey__TValue__o *)
               in_stack_ffffffffffffff58._0_8_;
          __this_01.fields._version = in_stack_ffffffffffffff58._8_4_;
          __this_01.fields._current.fields.key = (Il2CppObject *)uVar8;
          __this_01.fields._current.fields.value = (Il2CppObject *)uVar4;
          __this_01.fields._32_8_ = pSVar10;
          bVar1 = System_Collections_Generic_Dictionary_Enumerator<object__object>__MoveNext
                            (__this_01,(MethodInfo_31CFE90 *)&stack0xffffffffffffff78);
          if ((char)bVar1 == '\0') break;
          auVar9 = il2cpp_glue_032bf890((MethodInfo_31CFE90 *)&stack0xffffffffffffff78);
          plVar5 = auVar9._8_8_;
          if (!bVar6) {
            System_Text_StringBuilder__Append(aSB,0x2c,(MethodInfo *)0x0);
          }
          System_Text_StringBuilder__AppendLine(aSB,(MethodInfo *)0x0);
          System_Text_StringBuilder__Append(aSB,0x20,repeatCount,(MethodInfo *)0x0);
          pMVar7 = (MethodInfo *)0x22;
          pSVar2 = System_Text_StringBuilder__Append(aSB,0x22,(MethodInfo *)0x0);
          if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
            il2cpp_init_class();
          }
          pSVar3 = SimpleJSONFixed_JSONNode__Escape(auVar9._0_8_,pMVar7);
          if (pSVar2 == (System_Text_StringBuilder_o *)0x0) {
LAB_03d897f2:
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          pSVar2 = System_Text_StringBuilder__Append(pSVar2,pSVar3,(MethodInfo *)0x0);
          if (pSVar2 == (System_Text_StringBuilder_o *)0x0) {
LAB_03d897f7:
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          System_Text_StringBuilder__Append(pSVar2,0x22,(MethodInfo *)0x0);
          if (aMode == 0) {
            System_Text_StringBuilder__Append(aSB,0x3a,(MethodInfo *)0x0);
          }
          else {
            System_Text_StringBuilder__Append(aSB," : ",(MethodInfo *)0x0);
          }
          if (plVar5 == (long *)0x0) {
LAB_03d897fc:
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          bVar6 = false;
          (**(code **)(*plVar5 + 0x328))
                    (plVar5,aSB,repeatCount,uVar4,1,*(undefined8 *)(*plVar5 + 0x330));
        }
      }
      else {
        bVar6 = true;
        while( true ) {
          __this_02.fields._index = aMode;
          __this_02.fields._dictionary =
               (System_Collections_Generic_Dictionary_TKey__TValue__o *)
               in_stack_ffffffffffffff58._0_8_;
          __this_02.fields._version = in_stack_ffffffffffffff58._8_4_;
          __this_02.fields._current.fields.key = (Il2CppObject *)uVar8;
          __this_02.fields._current.fields.value = (Il2CppObject *)uVar4;
          __this_02.fields._32_8_ = pSVar10;
          bVar1 = System_Collections_Generic_Dictionary_Enumerator<object__object>__MoveNext
                            (__this_02,(MethodInfo_31CFE90 *)&stack0xffffffffffffff78);
          if ((char)bVar1 == '\0') break;
          auVar9 = il2cpp_glue_032bf890((MethodInfo_31CFE90 *)&stack0xffffffffffffff78,MethodInfo_KeyValuePair_2_System_String_SimpleJSONFixed_JSO);
          plVar5 = auVar9._8_8_;
          if (!bVar6) {
            System_Text_StringBuilder__Append(aSB,0x2c,(MethodInfo *)0x0);
          }
          pMVar7 = (MethodInfo *)0x22;
          pSVar2 = System_Text_StringBuilder__Append(aSB,0x22,(MethodInfo *)0x0);
          if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
            il2cpp_init_class();
          }
          pSVar3 = SimpleJSONFixed_JSONNode__Escape(auVar9._0_8_,pMVar7);
          if (pSVar2 == (System_Text_StringBuilder_o *)0x0) goto LAB_03d897f2;
          pSVar2 = System_Text_StringBuilder__Append(pSVar2,pSVar3,(MethodInfo *)0x0);
          if (pSVar2 == (System_Text_StringBuilder_o *)0x0) goto LAB_03d897f7;
          System_Text_StringBuilder__Append(pSVar2,0x22,(MethodInfo *)0x0);
          if (aMode == 0) {
            System_Text_StringBuilder__Append(aSB,0x3a,(MethodInfo *)0x0);
          }
          else {
            System_Text_StringBuilder__Append(aSB," : ",(MethodInfo *)0x0);
          }
          if (plVar5 == (long *)0x0) goto LAB_03d897fc;
          bVar6 = false;
          (**(code **)(*plVar5 + 0x328))
                    (plVar5,aSB,repeatCount,uVar4,aMode,*(undefined8 *)(*plVar5 + 0x330));
        }
      }
      __this_03.fields._index = aMode;
      __this_03.fields._dictionary =
           (System_Collections_Generic_Dictionary_TKey__TValue__o *)in_stack_ffffffffffffff58._0_8_;
      __this_03.fields._version = in_stack_ffffffffffffff58._8_4_;
      __this_03.fields._current.fields.key = (Il2CppObject *)uVar8;
      __this_03.fields._current.fields.value = (Il2CppObject *)uVar4;
      __this_03.fields._32_8_ = pSVar10;
      System_Collections_Generic_Dictionary_Enumerator<object__object>__Dispose
                (__this_03,(MethodInfo_31CFFB0 *)&stack0xffffffffffffff78);
      if (aMode == 1) {
        pSVar2 = System_Text_StringBuilder__AppendLine(aSB,(MethodInfo *)0x0);
        if (pSVar2 == (System_Text_StringBuilder_o *)0x0) goto LAB_03d89801;
        System_Text_StringBuilder__Append(pSVar2,0x20,(int32_t)uVar8,(MethodInfo *)0x0);
      }
      System_Text_StringBuilder__Append(aSB,0x7d,(MethodInfo *)0x0);
      return;
    }
  }
LAB_03d89801:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// SimpleJSONFixed.JSONObject$$.ctor
// il2cpp: void SimpleJSONFixed_JSONObject___ctor (SimpleJSONFixed_JSONObject_o* __this, const MethodInfo* method);
// 0x3d85d40

void SimpleJSONFixed_JSONObject___ctor(SimpleJSONFixed_JSONObject_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  
  if (DAT_057026d2 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_System_String_SimpleJSONFixed_JSONN);
    il2cpp_init_method_metadata(&TypeInfo_Dictionary_string__JSONNode);
    il2cpp_init_method_metadata(&TypeInfo_JSONNode);
    DAT_057026d2 = '\x01';
  }
  __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
              il2cpp_runtime_glue(TypeInfo_Dictionary_string__JSONNode);
  System_Collections_Generic_Dictionary<object__object>___ctor(__this_00,MethodInfo_Dictionary_2_System_String_SimpleJSONFixed_JSONN);
  (__this->fields).m_Dict = (System_Collections_Generic_Dictionary_string__JSONNode__o *)__this_00;
  il2cpp_runtime_glue(&__this->fields);
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_init_class();
  }
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


