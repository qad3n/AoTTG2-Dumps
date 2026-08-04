// Type: SimpleJSONFixed.JSONArray
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/SimpleJSONFixed/JSONArray.cs
// Prior real C# source (older reference): Assets/Scripts/Utility/SimpleJSON.cs
// --------------------------------

// SimpleJSONFixed.JSONArray.<get_Children>d__24$$.ctor
// il2cpp: void SimpleJSONFixed_JSONArray__get_Children_d__24___ctor (SimpleJSONFixed_JSONArray__get_Children_d__24_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x407d960

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
// 0x407db90

void SimpleJSONFixed_JSONArray__get_Children_d__24__System_IDisposable_Dispose
               (SimpleJSONFixed_JSONArray__get_Children_d__24_o *__this,MethodInfo *method)

{
  int iVar1;
  undefined1 in_stack_00000008 [24];
  
  iVar1 = (__this->fields).__1__state;
  if ((iVar1 != 1) && (iVar1 != -3)) {
    return;
  }
  if (g_data_057ac370 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    g_data_057ac370 = '\x01';
  }
  (__this->fields).__1__state = -1;
  System_Collections_Generic_List_Enumerator_object___Dispose
            ((System_Collections_Generic_List_Enumerator_object__o)in_stack_00000008,
             (MethodInfo_321A1C0 *)&(__this->fields).__7__wrap1);
  return;
}


// SimpleJSONFixed.JSONArray.<get_Children>d__24$$MoveNext
// il2cpp: bool SimpleJSONFixed_JSONArray__get_Children_d__24__MoveNext (SimpleJSONFixed_JSONArray__get_Children_d__24_o* __this, const MethodInfo* method);
// 0x407dbe0

bool_conflict
SimpleJSONFixed_JSONArray__get_Children_d__24__MoveNext
          (SimpleJSONFixed_JSONArray__get_Children_d__24_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_Enumerator_JSONNode__o *method_00;
  int iVar1;
  SimpleJSONFixed_JSONArray_o *pSVar2;
  System_Collections_Generic_List_object__o *__this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  bool_conflict bVar3;
  bool_conflict extraout_EAX;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  undefined1 auVar7 [12];
  undefined8 in_stack_ffffffffffffffa8;
  undefined4 in_stack_ffffffffffffffb0;
  undefined4 in_stack_ffffffffffffffb4;
  int32_t in_stack_ffffffffffffffb8;
  int32_t in_stack_ffffffffffffffbc;
  Il2CppObject *in_stack_ffffffffffffffc0;
  
  if (g_data_057ac36f == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_JSONNode_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_SimpleJSONFixed_JSONNode_GetEnumerat);
    g_data_057ac36f = '\x01';
  }
  iVar1 = (__this->fields).__1__state;
  if (iVar1 == 1) {
label_0407dc8f:
    (__this->fields).__1__state = -3;
    method_00 = &(__this->fields).__7__wrap1;
    __this_01.fields._index = in_stack_ffffffffffffffb0;
    __this_01.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffffa8;
    __this_01.fields._version = in_stack_ffffffffffffffb4;
    __this_01.fields._current._0_4_ = in_stack_ffffffffffffffb8;
    __this_01.fields._current._4_4_ = in_stack_ffffffffffffffbc;
    bVar3 = System_Collections_Generic_List_Enumerator_object___MoveNext
                      (__this_01,(MethodInfo_321A1D0 *)method_00);
    if ((char)bVar3 == '\0') {
      if (g_data_057ac370 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
        g_data_057ac370 = '\x01';
      }
      (__this->fields).__1__state = -1;
      __this_02.fields._index = in_stack_ffffffffffffffb0;
      __this_02.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffffa8;
      __this_02.fields._version = in_stack_ffffffffffffffb4;
      __this_02.fields._current._0_4_ = in_stack_ffffffffffffffb8;
      __this_02.fields._current._4_4_ = in_stack_ffffffffffffffbc;
      System_Collections_Generic_List_Enumerator_object___Dispose(__this_02,(MethodInfo_321A1C0 *)method_00);
      (method_00->fields)._list = (System_Collections_Generic_List_T__o *)0x0;
      (__this->fields).__7__wrap1.fields._index = 0;
      (__this->fields).__7__wrap1.fields._version = 0;
      (__this->fields).__7__wrap1.fields._current = (SimpleJSONFixed_JSONNode_o *)0x0;
      return 0;
    }
    (__this->fields).__2__current = (__this->fields).__7__wrap1.fields._current;
    uVar4 = il2cpp_runtime_helper_022b4080(&(__this->fields).__2__current);
    (__this->fields).__1__state = 1;
    return (bool_conflict)CONCAT71((int7)((ulong)uVar4 >> 8),1);
  }
  if (iVar1 != 0) {
    return 0;
  }
  pSVar2 = (__this->fields).__4__this;
  (__this->fields).__1__state = -1;
  if (pSVar2 == (SimpleJSONFixed_JSONArray_o *)0x0) {
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    __this_00 = (System_Collections_Generic_List_object__o *)(pSVar2->fields).m_List;
    if (__this_00 != (System_Collections_Generic_List_object__o *)0x0) {
      System_Collections_Generic_List_object___GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)&stack0xffffffffffffffb0,__this_00,
                 MethodInfo_List_1_T_Enumerator_SimpleJSONFixed_JSONNode_GetEnumerat);
      (__this->fields).__7__wrap1.fields._current = (SimpleJSONFixed_JSONNode_o *)in_stack_ffffffffffffffc0;
      *(undefined4 *)&(__this->fields).__7__wrap1.fields._list = in_stack_ffffffffffffffb0;
      *(undefined4 *)((long)&(__this->fields).__7__wrap1.fields._list + 4) = in_stack_ffffffffffffffb4;
      (__this->fields).__7__wrap1.fields._index = in_stack_ffffffffffffffb8;
      (__this->fields).__7__wrap1.fields._version = in_stack_ffffffffffffffbc;
      il2cpp_runtime_helper_022b4080(&(__this->fields).__7__wrap1,0);
      goto label_0407dc8f;
    }
  }
  auVar7 = il2cpp_runtime_helper_022b2c90();
  uVar4 = auVar7._0_8_;
  if (auVar7._8_4_ == 1) {
    plVar5 = (long *)__cxa_begin_catch(uVar4);
    lVar6 = *plVar5;
    __cxa_end_catch();
    if (lVar6 == 0) {
      return 0;
    }
    il2cpp_runtime_helper_02234880(__this);
    uVar4 = il2cpp_runtime_helper_022fefe0(lVar6);
    if (lVar6 != 0) {
      iVar1 = (__this->fields).__1__state;
      if ((iVar1 == 1) || (iVar1 == -3)) {
        if (g_data_057ac370 == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
          g_data_057ac370 = '\x01';
        }
        (__this->fields).__1__state = -1;
        __this_03.fields._index = in_stack_ffffffffffffffb0;
        __this_03.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffffa8;
        __this_03.fields._version = in_stack_ffffffffffffffb4;
        __this_03.fields._current._0_4_ = in_stack_ffffffffffffffb8;
        __this_03.fields._current._4_4_ = in_stack_ffffffffffffffbc;
        System_Collections_Generic_List_Enumerator_object___Dispose
                  (__this_03,(MethodInfo_321A1C0 *)&(__this->fields).__7__wrap1);
      }
      lVar6 = il2cpp_runtime_helper_022fefe0(lVar6);
      il2cpp_runtime_helper_01f66400();
      if (g_data_057ac370 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
        g_data_057ac370 = '\x01';
      }
      *(undefined4 *)(lVar6 + 0x10) = 0xffffffff;
      __this_04.fields._list._4_4_ = in_stack_ffffffffffffffb4;
      __this_04.fields._list._0_4_ = in_stack_ffffffffffffffb0;
      __this_04.fields._index = in_stack_ffffffffffffffb8;
      __this_04.fields._version = in_stack_ffffffffffffffbc;
      __this_04.fields._current = in_stack_ffffffffffffffc0;
      System_Collections_Generic_List_Enumerator_object___Dispose
                (__this_04,(MethodInfo_321A1C0 *)(lVar6 + 0x30));
      return extraout_EAX;
    }
  }
  _Unwind_Resume(uVar4);
}


// SimpleJSONFixed.JSONArray.<get_Children>d__24$$<>m__Finally1
// il2cpp: void SimpleJSONFixed_JSONArray__get_Children_d__24____m__Finally1 (SimpleJSONFixed_JSONArray__get_Children_d__24_o* __this, const MethodInfo* method);
// 0x407ddf0

void SimpleJSONFixed_JSONArray__get_Children_d__24____m__Finally1
               (SimpleJSONFixed_JSONArray__get_Children_d__24_o *__this,MethodInfo *method)

{
  undefined1 in_stack_00000008 [24];
  
  if (g_data_057ac370 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    g_data_057ac370 = '\x01';
  }
  (__this->fields).__1__state = -1;
  System_Collections_Generic_List_Enumerator_object___Dispose
            ((System_Collections_Generic_List_Enumerator_object__o)in_stack_00000008,
             (MethodInfo_321A1C0 *)&(__this->fields).__7__wrap1);
  return;
}


// SimpleJSONFixed.JSONArray.<get_Children>d__24$$System.Collections.Generic.IEnumerator<SimpleJSONFixed.JSONNode>.get_Current
// il2cpp: SimpleJSONFixed_JSONNode_o* SimpleJSONFixed_JSONArray__get_Children_d__24__System_Collections_Generic_IEnumerator_SimpleJSONFixed_JSONNode__get_Current (SimpleJSONFixed_JSONArray__get_Children_d__24_o* __this, const MethodInfo* method);
// 0x407de30

SimpleJSONFixed_JSONNode_o *
SimpleJSONFixed_JSONArray__get_Children_d__24__System_Collections_Generic_IEnumerator_SimpleJSONFixed_JSONNode__get_Current
          (SimpleJSONFixed_JSONArray__get_Children_d__24_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// SimpleJSONFixed.JSONArray.<get_Children>d__24$$System.Collections.IEnumerator.Reset
// il2cpp: void SimpleJSONFixed_JSONArray__get_Children_d__24__System_Collections_IEnumerator_Reset (SimpleJSONFixed_JSONArray__get_Children_d__24_o* __this, const MethodInfo* method);
// 0x407de40

void SimpleJSONFixed_JSONArray__get_Children_d__24__System_Collections_IEnumerator_Reset
               (SimpleJSONFixed_JSONArray__get_Children_d__24_o *__this,MethodInfo *method)

{
  undefined8 uVar1;
  System_NotSupportedException_o *__this_00;
  
  uVar1 = il2cpp_runtime_helper_023445d0(&TypeInfo_NotSupportedException);
  __this_00 = (System_NotSupportedException_o *)il2cpp_runtime_helper_023052d0(uVar1);
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  uVar1 = il2cpp_runtime_helper_023445d0(&MethodInfo_Void_System_Collections_IEnumerator_Reset);
  il2cpp_runtime_helper_022b2b10(__this_00,uVar1);
  return;
}


// SimpleJSONFixed.JSONArray.<get_Children>d__24$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* SimpleJSONFixed_JSONArray__get_Children_d__24__System_Collections_IEnumerator_get_Current (SimpleJSONFixed_JSONArray__get_Children_d__24_o* __this, const MethodInfo* method);
// 0x407de80

Il2CppObject *
SimpleJSONFixed_JSONArray__get_Children_d__24__System_Collections_IEnumerator_get_Current
          (SimpleJSONFixed_JSONArray__get_Children_d__24_o *__this,MethodInfo *method)

{
  return (Il2CppObject *)(__this->fields).__2__current;
}


// SimpleJSONFixed.JSONArray.<get_Children>d__24$$System.Collections.Generic.IEnumerable<SimpleJSONFixed.JSONNode>.GetEnumerator
// il2cpp: System_Collections_Generic_IEnumerator_JSONNode__o* SimpleJSONFixed_JSONArray__get_Children_d__24__System_Collections_Generic_IEnumerable_SimpleJSONFixed_JSONNode__GetEnumerator (SimpleJSONFixed_JSONArray__get_Children_d__24_o* __this, const MethodInfo* method);
// 0x407de90

System_Collections_IEnumerator_o *
SimpleJSONFixed_JSONArray__get_Children_d__24__System_Collections_Generic_IEnumerable_SimpleJSONFixed_JSONNode__GetEnumerator
          (SimpleJSONFixed_JSONArray__get_Children_d__24_o *__this,MethodInfo *method)

{
  int iVar1;
  int32_t iVar2;
  undefined8 in_RAX;
  Il2CppObject *__this_00;
  undefined8 unaff_RBX;
  SimpleJSONFixed_JSONArray__get_Children_d__24_o *pSVar3;
  SimpleJSONFixed_JSONArray__get_Children_d__24_o *unaff_R14;
  
  while( true ) {
    pSVar3 = __this;
    *(SimpleJSONFixed_JSONArray__get_Children_d__24_o **)((long)register0x00000020 + -8) = unaff_R14;
    *(undefined8 *)((long)register0x00000020 + -0x10) = unaff_RBX;
    *(undefined8 *)((long)register0x00000020 + -0x18) = in_RAX;
    if (g_data_057ac371 == '\0') {
      *(undefined8 *)((long)register0x00000020 + -0x20) = 0x407deac;
      il2cpp_runtime_helper_023445d0();
      g_data_057ac371 = '\x01';
    }
    if ((pSVar3->fields).__1__state == -2) {
      iVar1 = (pSVar3->fields).__l__initialThreadId;
      *(undefined8 *)((long)register0x00000020 + -0x20) = 0x407dec5;
      iVar2 = System_Environment__get_CurrentManagedThreadId((MethodInfo *)0x0);
      if (iVar1 == iVar2) {
        (pSVar3->fields).__1__state = 0;
        return (System_Collections_IEnumerator_o *)pSVar3;
      }
    }
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x407dee2;
    __this_00 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_get_Children_d__24);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x407deef;
    System_Object___ctor(__this_00,(MethodInfo *)0x0);
    *(undefined4 *)&__this_00[1].klass = 0;
    __this = (SimpleJSONFixed_JSONArray__get_Children_d__24_o *)0x0;
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x407defd;
    iVar2 = System_Environment__get_CurrentManagedThreadId((MethodInfo *)0x0);
    *(int32_t *)&__this_00[2].klass = iVar2;
    if (__this_00 != (Il2CppObject *)0x0) break;
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x407df2c;
    in_RAX = il2cpp_runtime_helper_022b2c90();
    unaff_RBX = 0;
    register0x00000020 = (BADSPACEBASE *)((long)register0x00000020 + -0x18);
    unaff_R14 = pSVar3;
  }
  __this_00[2].monitor = (pSVar3->fields).__4__this;
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x407df19;
  il2cpp_runtime_helper_022b4080(&__this_00[2].monitor);
  return (System_Collections_IEnumerator_o *)__this_00;
}


// SimpleJSONFixed.JSONArray.<get_Children>d__24$$System.Collections.IEnumerable.GetEnumerator
// il2cpp: System_Collections_IEnumerator_o* SimpleJSONFixed_JSONArray__get_Children_d__24__System_Collections_IEnumerable_GetEnumerator (SimpleJSONFixed_JSONArray__get_Children_d__24_o* __this, const MethodInfo* method);
// 0x407df30

System_Collections_IEnumerator_o *
SimpleJSONFixed_JSONArray__get_Children_d__24__System_Collections_IEnumerable_GetEnumerator
          (SimpleJSONFixed_JSONArray__get_Children_d__24_o *__this,MethodInfo *method)

{
  int iVar1;
  int32_t iVar2;
  Il2CppObject *__this_00;
  undefined8 in_RAX;
  undefined8 unaff_RBX;
  SimpleJSONFixed_JSONArray__get_Children_d__24_o *pSVar3;
  SimpleJSONFixed_JSONArray__get_Children_d__24_o *unaff_R14;
  
  while( true ) {
    pSVar3 = __this;
    *(SimpleJSONFixed_JSONArray__get_Children_d__24_o **)((long)register0x00000020 + -8) = unaff_R14;
    *(undefined8 *)((long)register0x00000020 + -0x10) = unaff_RBX;
    *(undefined8 *)((long)register0x00000020 + -0x18) = in_RAX;
    if (g_data_057ac371 == '\0') {
      *(undefined8 *)((long)register0x00000020 + -0x20) = 0x407deac;
      il2cpp_runtime_helper_023445d0();
      g_data_057ac371 = '\x01';
    }
    if ((pSVar3->fields).__1__state == -2) {
      iVar1 = (pSVar3->fields).__l__initialThreadId;
      *(undefined8 *)((long)register0x00000020 + -0x20) = 0x407dec5;
      iVar2 = System_Environment__get_CurrentManagedThreadId((MethodInfo *)0x0);
      if (iVar1 == iVar2) {
        (pSVar3->fields).__1__state = 0;
        return (System_Collections_IEnumerator_o *)pSVar3;
      }
    }
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x407dee2;
    __this_00 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_get_Children_d__24);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x407deef;
    System_Object___ctor(__this_00,(MethodInfo *)0x0);
    *(undefined4 *)&__this_00[1].klass = 0;
    __this = (SimpleJSONFixed_JSONArray__get_Children_d__24_o *)0x0;
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x407defd;
    iVar2 = System_Environment__get_CurrentManagedThreadId((MethodInfo *)0x0);
    *(int32_t *)&__this_00[2].klass = iVar2;
    if (__this_00 != (Il2CppObject *)0x0) break;
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x407df2c;
    in_RAX = il2cpp_runtime_helper_022b2c90();
    unaff_RBX = 0;
    register0x00000020 = (BADSPACEBASE *)((long)register0x00000020 + -0x18);
    unaff_R14 = pSVar3;
  }
  __this_00[2].monitor = (pSVar3->fields).__4__this;
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x407df19;
  il2cpp_runtime_helper_022b4080(&__this_00[2].monitor);
  return (System_Collections_IEnumerator_o *)__this_00;
}


// SimpleJSONFixed.JSONArray$$get_Inline
// il2cpp: bool SimpleJSONFixed_JSONArray__get_Inline (SimpleJSONFixed_JSONArray_o* __this, const MethodInfo* method);
// 0x407ce60

bool_conflict SimpleJSONFixed_JSONArray__get_Inline(SimpleJSONFixed_JSONArray_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),(char)(__this->fields).field1_0x8);
}


// SimpleJSONFixed.JSONArray$$set_Inline
// il2cpp: void SimpleJSONFixed_JSONArray__set_Inline (SimpleJSONFixed_JSONArray_o* __this, bool value, const MethodInfo* method);
// 0x407ce70

void SimpleJSONFixed_JSONArray__set_Inline
               (SimpleJSONFixed_JSONArray_o *__this,bool_conflict value,MethodInfo *method)

{
  *(char *)&(__this->fields).field1_0x8 = (char)value;
  return;
}


// SimpleJSONFixed.JSONArray$$get_Tag
// il2cpp: int32_t SimpleJSONFixed_JSONArray__get_Tag (SimpleJSONFixed_JSONArray_o* __this, const MethodInfo* method);
// 0x407ce80

int32_t SimpleJSONFixed_JSONArray__get_Tag(SimpleJSONFixed_JSONArray_o *__this,MethodInfo *method)

{
  return 1;
}


// SimpleJSONFixed.JSONArray$$get_IsArray
// il2cpp: bool SimpleJSONFixed_JSONArray__get_IsArray (SimpleJSONFixed_JSONArray_o* __this, const MethodInfo* method);
// 0x407ce90

bool_conflict SimpleJSONFixed_JSONArray__get_IsArray(SimpleJSONFixed_JSONArray_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// SimpleJSONFixed.JSONArray$$GetEnumerator
// il2cpp: SimpleJSONFixed_JSONNode_Enumerator_o SimpleJSONFixed_JSONArray__GetEnumerator (SimpleJSONFixed_JSONArray_o* __this, const MethodInfo* method);
// 0x407cea0

SimpleJSONFixed_JSONNode_Enumerator_o *
SimpleJSONFixed_JSONArray__GetEnumerator
          (SimpleJSONFixed_JSONNode_Enumerator_o *__return_storage_ptr__,SimpleJSONFixed_JSONArray_o *__this,
          MethodInfo *method)

{
  Il2CppObject *pIVar1;
  SimpleJSONFixed_JSONNode_Enumerator_o *pSVar2;
  int index;
  System_Object_array *__this_00;
  System_Object_array *pSVar3;
  Il2CppClass *pIVar4;
  System_Collections_Generic_List_object__o *__this_01;
  System_Collections_Generic_List_Enumerator_T__o SStack_28;
  
  pIVar4 = (Il2CppClass *)__return_storage_ptr__;
  if (g_data_057ac361 == '\0') {
    pIVar4 = (Il2CppClass *)&MethodInfo_List_1_T_Enumerator_SimpleJSONFixed_JSONNode_GetEnumerat;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac361 = '\x01';
  }
  __this_00 = (System_Object_array *)(__this->fields).m_List;
  if (__this_00 != (System_Object_array *)0x0) {
    System_Collections_Generic_List_object___GetEnumerator
              (&SStack_28,(System_Collections_Generic_List_object__o *)__this_00,MethodInfo_List_1_T_Enumerator_SimpleJSONFixed_JSONNode_GetEnumerat);
    *(undefined8 *)&__return_storage_ptr__->fields = 1;
    (__return_storage_ptr__->fields).m_Object.fields._dictionary =
         (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
    (__return_storage_ptr__->fields).m_Object.fields._version = 0;
    (__return_storage_ptr__->fields).m_Object.fields._index = 0;
    (__return_storage_ptr__->fields).m_Object.fields._current.fields.key = (Il2CppObject *)0x0;
    (__return_storage_ptr__->fields).m_Object.fields._current.fields.value = (Il2CppObject *)0x0;
    *(undefined8 *)&(__return_storage_ptr__->fields).m_Object.fields._getEnumeratorRetType = 0;
    *(undefined4 *)&(__return_storage_ptr__->fields).m_Array.fields._list = SStack_28.fields._list._0_4_;
    *(undefined4 *)((long)&(__return_storage_ptr__->fields).m_Array.fields._list + 4) =
         SStack_28.fields._list._4_4_;
    (__return_storage_ptr__->fields).m_Array.fields._index = SStack_28.fields._index;
    (__return_storage_ptr__->fields).m_Array.fields._version = SStack_28.fields._version;
    (__return_storage_ptr__->fields).m_Array.fields._current =
         (SimpleJSONFixed_JSONNode_o *)SStack_28.fields._current;
    il2cpp_runtime_helper_022b4080(&(__return_storage_ptr__->fields).m_Array,0);
    return __return_storage_ptr__;
  }
  il2cpp_runtime_helper_022b2c90();
  pSVar3 = __this_00;
  if (g_data_057ac362 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONLazyCreator);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&MethodInfo_JSONNode_get_Item);
    g_data_057ac362 = '\x01';
  }
  index = (int)__this_00;
  if (-1 < index) {
    __this_01 = (System_Collections_Generic_List_object__o *)(pIVar4->_1).name;
    if (__this_01 == (System_Collections_Generic_List_object__o *)0x0) {
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057ac39e == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
        g_data_057ac39e = '\x01';
      }
      if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      System_Object___ctor((Il2CppObject *)__this_01,(MethodInfo *)0x0);
      (__this_01->fields)._items = pSVar3;
      il2cpp_runtime_helper_022b4080(&__this_01->fields,pSVar3);
      (__this_01->fields)._size = 0;
      (__this_01->fields)._version = 0;
      pSVar2 = (SimpleJSONFixed_JSONNode_Enumerator_o *)il2cpp_runtime_helper_022b4080(&(__this_01->fields)._size,0);
      return pSVar2;
    }
    if (index < (__this_01->fields)._size) {
      pIVar1 = System_Collections_Generic_List_object___get_Item(__this_01,index,MethodInfo_JSONNode_get_Item);
      return (SimpleJSONFixed_JSONNode_Enumerator_o *)pIVar1;
    }
  }
  pIVar1 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_JSONLazyCreator);
  if (g_data_057ac39e == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    g_data_057ac39e = '\x01';
  }
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  System_Object___ctor(pIVar1,(MethodInfo *)0x0);
  pIVar1[1].klass = pIVar4;
  il2cpp_runtime_helper_022b4080(pIVar1 + 1,pIVar4);
  pIVar1[1].monitor = (void *)0x0;
  il2cpp_runtime_helper_022b4080(&pIVar1[1].monitor,0);
  return (SimpleJSONFixed_JSONNode_Enumerator_o *)pIVar1;
}


// SimpleJSONFixed.JSONArray$$get_Item
// il2cpp: SimpleJSONFixed_JSONNode_o* SimpleJSONFixed_JSONArray__get_Item (SimpleJSONFixed_JSONArray_o* __this, int32_t aIndex, const MethodInfo* method);
// 0x407cf30

SimpleJSONFixed_JSONNode_o *
SimpleJSONFixed_JSONArray__get_Item(SimpleJSONFixed_JSONArray_o *__this,int32_t aIndex,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  SimpleJSONFixed_JSONNode_o *pSVar2;
  undefined4 in_register_00000034;
  System_Object_array *pSVar3;
  System_Collections_Generic_List_object__o *__this_00;
  
  pSVar3 = (System_Object_array *)CONCAT44(in_register_00000034,aIndex);
  if (g_data_057ac362 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONLazyCreator);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&MethodInfo_JSONNode_get_Item);
    g_data_057ac362 = '\x01';
  }
  if (-1 < aIndex) {
    __this_00 = (System_Collections_Generic_List_object__o *)(__this->fields).m_List;
    if (__this_00 == (System_Collections_Generic_List_object__o *)0x0) {
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057ac39e == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
        g_data_057ac39e = '\x01';
      }
      if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
      (__this_00->fields)._items = pSVar3;
      il2cpp_runtime_helper_022b4080(&__this_00->fields,pSVar3);
      (__this_00->fields)._size = 0;
      (__this_00->fields)._version = 0;
      pSVar2 = (SimpleJSONFixed_JSONNode_o *)il2cpp_runtime_helper_022b4080(&(__this_00->fields)._size,0);
      return pSVar2;
    }
    if (aIndex < (__this_00->fields)._size) {
      pIVar1 = System_Collections_Generic_List_object___get_Item(__this_00,aIndex,MethodInfo_JSONNode_get_Item);
      return (SimpleJSONFixed_JSONNode_o *)pIVar1;
    }
  }
  pIVar1 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_JSONLazyCreator);
  if (g_data_057ac39e == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    g_data_057ac39e = '\x01';
  }
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  System_Object___ctor(pIVar1,(MethodInfo *)0x0);
  pIVar1[1].klass = (Il2CppClass *)__this;
  il2cpp_runtime_helper_022b4080(pIVar1 + 1,__this);
  pIVar1[1].monitor = (void *)0x0;
  il2cpp_runtime_helper_022b4080(&pIVar1[1].monitor,0);
  return (SimpleJSONFixed_JSONNode_o *)pIVar1;
}


// SimpleJSONFixed.JSONArray$$set_Item
// il2cpp: void SimpleJSONFixed_JSONArray__set_Item (SimpleJSONFixed_JSONArray_o* __this, int32_t aIndex, SimpleJSONFixed_JSONNode_o* value, const MethodInfo* method);
// 0x407d0b0

void SimpleJSONFixed_JSONArray__set_Item
               (SimpleJSONFixed_JSONArray_o *__this,int32_t aIndex,SimpleJSONFixed_JSONNode_o *value,
               MethodInfo *method)

{
  uint uVar1;
  System_Object_array *pSVar2;
  int32_t *piVar3;
  long lVar4;
  bool_conflict bVar5;
  Il2CppObject *__this_00;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *pMVar6;
  Il2CppClass *__this_01;
  
  pMVar6 = (MethodInfo *)value;
  if (g_data_057ac363 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNull);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    g_data_057ac363 = '\x01';
    pMVar6 = extraout_RDX;
  }
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    pMVar6 = extraout_RDX_00;
  }
  bVar5 = SimpleJSONFixed_JSONNode__op_Equality(value,(Il2CppObject *)0x0,pMVar6);
  if ((char)bVar5 != '\0') {
    pMVar6 = TypeInfo_JSONNull;
    if (*(int *)((long)&TypeInfo_JSONNull[2].parameters + 4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    value = (SimpleJSONFixed_JSONNode_o *)SimpleJSONFixed_JSONNull__CreateOrGet(pMVar6);
  }
  lVar4 = MethodInfo_Void_Add;
  __this_01 = (Il2CppClass *)(__this->fields).m_List;
  if (aIndex < 0) {
    if (__this_01 == (Il2CppClass *)0x0) goto label_0407d1d7;
  }
  else {
    if (__this_01 == (Il2CppClass *)0x0) goto label_0407d1d7;
    if (aIndex < *(int *)&(__this_01->_1).namespaze) {
      System_Collections_Generic_List_object___set_Item
                ((System_Collections_Generic_List_object__o *)__this_01,aIndex,(Il2CppObject *)value,
                 _DAT_05590fb8);
      return;
    }
  }
  piVar3 = (int32_t *)((long)&(__this_01->_1).namespaze + 4);
  *piVar3 = *piVar3 + 1;
  pSVar2 = ((System_Collections_Generic_List_object__Fields *)&(__this_01->_1).name)->_items;
  if (pSVar2 != (System_Object_array *)0x0) {
    uVar1 = *(uint *)&(__this_01->_1).namespaze;
    if (uVar1 < (uint)pSVar2->max_length) {
      *(uint *)&(__this_01->_1).namespaze = uVar1 + 1;
      pSVar2->m_Items[(int)uVar1] = (Il2CppObject *)value;
      il2cpp_runtime_helper_022b4080(pSVar2->m_Items + (int)uVar1,value);
      return;
    }
    System_Collections_Generic_List_object___AddWithResize
              ((System_Collections_Generic_List_object__o *)__this_01,(Il2CppObject *)value,
               *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
    return;
  }
label_0407d1d7:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac364 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONLazyCreator);
    g_data_057ac364 = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_JSONLazyCreator);
  if (g_data_057ac39e == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    g_data_057ac39e = '\x01';
  }
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  __this_00[1].klass = __this_01;
  il2cpp_runtime_helper_022b4080(__this_00 + 1,__this_01);
  __this_00[1].monitor = (void *)0x0;
  il2cpp_runtime_helper_022b4080(&__this_00[1].monitor,0);
  return;
}


// SimpleJSONFixed.JSONArray$$get_Item
// il2cpp: SimpleJSONFixed_JSONNode_o* SimpleJSONFixed_JSONArray__get_Item (SimpleJSONFixed_JSONArray_o* __this, System_String_o* aKey, const MethodInfo* method);
// 0x407d1e0

SimpleJSONFixed_JSONNode_o *
SimpleJSONFixed_JSONArray__get_Item_3f7d1e0
          (SimpleJSONFixed_JSONArray_o *__this,System_String_o *aKey,MethodInfo *method)

{
  Il2CppObject *__this_00;
  
  if (g_data_057ac364 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONLazyCreator);
    g_data_057ac364 = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_JSONLazyCreator);
  if (g_data_057ac39e == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    g_data_057ac39e = '\x01';
  }
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  __this_00[1].klass = (Il2CppClass *)__this;
  il2cpp_runtime_helper_022b4080(__this_00 + 1,__this);
  __this_00[1].monitor = (void *)0x0;
  il2cpp_runtime_helper_022b4080(&__this_00[1].monitor,0);
  return (SimpleJSONFixed_JSONNode_o *)__this_00;
}


// SimpleJSONFixed.JSONArray$$set_Item
// il2cpp: void SimpleJSONFixed_JSONArray__set_Item (SimpleJSONFixed_JSONArray_o* __this, System_String_o* aKey, SimpleJSONFixed_JSONNode_o* value, const MethodInfo* method);
// 0x407d290

void SimpleJSONFixed_JSONArray__set_Item_3f7d290
               (SimpleJSONFixed_JSONArray_o *__this,System_String_o *aKey,SimpleJSONFixed_JSONNode_o *value,
               MethodInfo *method)

{
  int32_t *piVar1;
  int *piVar2;
  uint uVar3;
  Il2CppArrayBounds *pIVar4;
  System_Collections_Generic_List_Enumerator_object__o __this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  undefined1 *puVar5;
  bool_conflict bVar6;
  int32_t iVar7;
  MethodInfo *pMVar8;
  SimpleJSONFixed_JSONArray_o *__this_04;
  undefined8 uVar9;
  long *plVar10;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *a;
  MethodInfo *extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
  MethodInfo *extraout_RDX_03;
  MethodInfo *extraout_RDX_04;
  MethodInfo *extraout_RDX_05;
  MethodInfo *extraout_RDX_06;
  int index;
  MethodInfo *pMVar11;
  System_Collections_Generic_List_object__o *pSVar12;
  System_Collections_Generic_List_object__o *pSVar13;
  System_Object_array *pSVar14;
  long lVar15;
  undefined1 auVar16 [12];
  System_Collections_Generic_List_T__o *pSVar17;
  System_Collections_Generic_List_Enumerator_T__c *pSVar18;
  Il2CppType *pIVar19;
  Il2CppType *a_00;
  undefined1 auStack_b0 [16];
  Il2CppType *pIStack_a0;
  System_Collections_Generic_List_object__o *pSStack_98;
  
  pMVar8 = (MethodInfo *)value;
  if (g_data_057ac365 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNull);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    g_data_057ac365 = '\x01';
    pMVar8 = extraout_RDX;
  }
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    pMVar8 = extraout_RDX_00;
  }
  bVar6 = SimpleJSONFixed_JSONNode__op_Equality(value,(Il2CppObject *)0x0,pMVar8);
  if ((char)bVar6 != '\0') {
    pMVar8 = TypeInfo_JSONNull;
    if (*(int *)((long)&TypeInfo_JSONNull[2].parameters + 4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    value = (SimpleJSONFixed_JSONNode_o *)SimpleJSONFixed_JSONNull__CreateOrGet(pMVar8);
  }
  lVar15 = MethodInfo_Void_Add;
  pSVar12 = (System_Collections_Generic_List_object__o *)(__this->fields).m_List;
  if (pSVar12 != (System_Collections_Generic_List_object__o *)0x0) {
    piVar1 = &(pSVar12->fields)._version;
    *piVar1 = *piVar1 + 1;
    pSVar14 = (pSVar12->fields)._items;
    if (pSVar14 != (System_Object_array *)0x0) {
      uVar3 = (pSVar12->fields)._size;
      if ((uint)pSVar14->max_length <= uVar3) {
        System_Collections_Generic_List_object___AddWithResize
                  (pSVar12,(Il2CppObject *)value,
                   *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
        return;
      }
      (pSVar12->fields)._size = uVar3 + 1;
      pSVar14->m_Items[(int)uVar3] = (Il2CppObject *)value;
      il2cpp_runtime_helper_022b4080(pSVar14->m_Items + (int)uVar3,value);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pSVar13 = pSVar12;
  if (g_data_057ac366 == '\0') {
    pSVar13 = (System_Collections_Generic_List_object__o *)&MethodInfo_Int32_get_Count;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac366 = '\x01';
  }
  if ((pSVar12->fields)._items != (System_Object_array *)0x0) {
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pMVar8 = a;
  if (g_data_057ac367 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNull);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    g_data_057ac367 = '\x01';
    pMVar8 = extraout_RDX_01;
  }
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    pMVar8 = extraout_RDX_02;
  }
  pMVar11 = (MethodInfo *)0x0;
  bVar6 = SimpleJSONFixed_JSONNode__op_Equality((SimpleJSONFixed_JSONNode_o *)a,(Il2CppObject *)0x0,pMVar8);
  pMVar8 = a;
  if ((char)bVar6 != '\0') {
    pMVar8 = TypeInfo_JSONNull;
    if (*(int *)((long)&TypeInfo_JSONNull[2].parameters + 4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pMVar8 = (MethodInfo *)SimpleJSONFixed_JSONNull__CreateOrGet(pMVar8);
  }
  lVar15 = MethodInfo_Void_Add;
  pSVar14 = (pSVar13->fields)._items;
  if (pSVar14 != (System_Object_array *)0x0) {
    puVar5 = (undefined1 *)((long)&pSVar14->max_length + 4);
    *(int *)puVar5 = *(int *)puVar5 + 1;
    pIVar4 = pSVar14->bounds;
    if (pIVar4 != (Il2CppArrayBounds *)0x0) {
      uVar3 = (uint)pSVar14->max_length;
      if ((uint)pIVar4[1].lower_bound <= uVar3) {
        System_Collections_Generic_List_object___AddWithResize
                  ((System_Collections_Generic_List_object__o *)pSVar14,(Il2CppObject *)pMVar8,
                   *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
        return;
      }
      *(uint *)&pSVar14->max_length = uVar3 + 1;
      (&pIVar4[2].length)[(int)uVar3] = (il2cpp_array_size_t)pMVar8;
      il2cpp_runtime_helper_022b4080(&pIVar4[2].length + (int)uVar3,pMVar8);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pMVar8 = pMVar11;
  if (g_data_057ac368 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_RemoveAt);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&MethodInfo_JSONNode_get_Item);
    g_data_057ac368 = '\x01';
  }
  index = (int)pMVar11;
  if (index < 0) {
    return;
  }
  pSVar12 = (System_Collections_Generic_List_object__o *)pSVar14->bounds;
  if (pSVar12 != (System_Collections_Generic_List_object__o *)0x0) {
    if ((pSVar12->fields)._size <= index) {
      return;
    }
    pMVar8 = (MethodInfo *)((ulong)pMVar11 & 0xffffffff);
    System_Collections_Generic_List_object___get_Item(pSVar12,index,MethodInfo_JSONNode_get_Item);
    if ((System_Collections_Generic_List_object__o *)pSVar14->bounds !=
        (System_Collections_Generic_List_object__o *)0x0) {
      System_Collections_Generic_List_object___RemoveAt
                ((System_Collections_Generic_List_object__o *)pSVar14->bounds,index,MethodInfo_Void_RemoveAt);
      return;
    }
  }
  lVar15 = 0;
  il2cpp_runtime_helper_022b2c90();
  pMVar11 = pMVar8;
  if (g_data_057ac369 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Remove);
    g_data_057ac369 = '\x01';
  }
  pSVar12 = *(System_Collections_Generic_List_object__o **)(lVar15 + 0x10);
  if (pSVar12 != (System_Collections_Generic_List_object__o *)0x0) {
    System_Collections_Generic_List_object___Remove(pSVar12,(Il2CppObject *)pMVar8,MethodInfo_Boolean_Remove);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pSVar13 = pSVar12;
  if (g_data_057ac36a == '\0') {
    pSVar13 = (System_Collections_Generic_List_object__o *)&MethodInfo_Void_Clear;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac36a = '\x01';
  }
  pSVar14 = (pSVar12->fields)._items;
  if (pSVar14 == (System_Object_array *)0x0) {
    il2cpp_runtime_helper_022b2c90();
    pSStack_98 = pSVar12;
    if (g_data_057ac36b == '\0') {
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
      il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
      il2cpp_runtime_helper_023445d0(&MethodInfo_JSONNode_get_Current);
      il2cpp_runtime_helper_023445d0(&TypeInfo_JSONArray);
      il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
      il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_SimpleJSONFixed_JSONNode_GetEnumerat);
      il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Capacity);
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Capacity);
      g_data_057ac36b = '\x01';
    }
    pSVar17 = (System_Collections_Generic_List_T__o *)0x0;
    pSVar18 = (System_Collections_Generic_List_Enumerator_T__c *)0x0;
    pIVar19 = (Il2CppType *)0x0;
    __this_04 = (SimpleJSONFixed_JSONArray_o *)il2cpp_runtime_helper_023052d0(TypeInfo_JSONArray);
    SimpleJSONFixed_JSONArray___ctor(__this_04,pMVar11);
    if ((__this_04 != (SimpleJSONFixed_JSONArray_o *)0x0) &&
       (pSVar14 = (pSVar13->fields)._items, pSVar14 != (System_Object_array *)0x0)) {
      pSVar12 = (System_Collections_Generic_List_object__o *)(__this_04->fields).m_List;
      iVar7 = System_Collections_Generic_List_object___get_Capacity
                        ((System_Collections_Generic_List_object__o *)pSVar14,MethodInfo_Int32_get_Capacity);
      if (pSVar12 != (System_Collections_Generic_List_object__o *)0x0) {
        System_Collections_Generic_List_object___set_Capacity(pSVar12,iVar7,MethodInfo_Void_set_Capacity);
        pSVar14 = (pSVar13->fields)._items;
        if (pSVar14 != (System_Object_array *)0x0) {
          System_Collections_Generic_List_object___GetEnumerator
                    ((System_Collections_Generic_List_Enumerator_T__o *)auStack_b0,
                     (System_Collections_Generic_List_object__o *)pSVar14,MethodInfo_List_1_T_Enumerator_SimpleJSONFixed_JSONNode_GetEnumerat);
          pSVar17 = (System_Collections_Generic_List_T__o *)auStack_b0._0_8_;
          pSVar18 = (System_Collections_Generic_List_Enumerator_T__c *)auStack_b0._8_8_;
          a_00 = pIStack_a0;
          while( true ) {
            while( true ) {
              __this_00.fields._8_8_ = pSVar18;
              __this_00.fields._list = pSVar17;
              __this_00.fields._current = (Il2CppObject *)a_00;
              bVar6 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                (__this_00,(MethodInfo_321A1D0 *)&stack0xffffffffffffff38);
              if ((char)bVar6 == '\0') {
                __this_01.fields._8_8_ = pSVar18;
                __this_01.fields._list = pSVar17;
                __this_01.fields._current = (Il2CppObject *)a_00;
                System_Collections_Generic_List_Enumerator_object___Dispose
                          (__this_01,(MethodInfo_321A1C0 *)&stack0xffffffffffffff38);
                return;
              }
              pMVar8 = extraout_RDX_03;
              pIVar19 = a_00;
              if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
                pMVar8 = extraout_RDX_04;
              }
              if (g_data_057ac34d == '\0') {
                il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
                g_data_057ac34d = '\x01';
                pMVar8 = extraout_RDX_05;
              }
              if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
                pMVar8 = extraout_RDX_06;
              }
              bVar6 = SimpleJSONFixed_JSONNode__op_Equality
                                ((SimpleJSONFixed_JSONNode_o *)a_00,(Il2CppObject *)0x0,pMVar8);
              if ((char)bVar6 == '\0') break;
              (*(__this_04->klass->vtable)._21_Add.methodPtr)
                        (__this_04,0,(__this_04->klass->vtable)._21_Add.method);
              a_00 = pIVar19;
            }
            if (a_00 == (Il2CppType *)0x0) break;
            uVar9 = (*a_00->data->vtable[0x1a].methodPtr)(a_00,a_00->data->vtable[0x1a].method);
            (*(__this_04->klass->vtable)._21_Add.methodPtr)
                      (__this_04,uVar9,(__this_04->klass->vtable)._21_Add.method);
            a_00 = pIVar19;
          }
          il2cpp_runtime_helper_022b2c90();
        }
      }
    }
    auVar16 = il2cpp_runtime_helper_022b2c90();
    if (auVar16._8_4_ == 1) {
      plVar10 = (long *)__cxa_begin_catch(auVar16._0_8_);
      lVar15 = *plVar10;
      __cxa_end_catch();
      __this_02.fields._8_8_ = pSVar18;
      __this_02.fields._list = pSVar17;
      __this_02.fields._current = (Il2CppObject *)pIVar19;
      System_Collections_Generic_List_Enumerator_object___Dispose
                (__this_02,(MethodInfo_321A1C0 *)&stack0xffffffffffffff38);
      if (lVar15 == 0) {
        return;
      }
      il2cpp_runtime_helper_022fefe0(lVar15);
    }
    __this_03.fields._8_8_ = pSVar18;
    __this_03.fields._list = pSVar17;
    __this_03.fields._current = (Il2CppObject *)pIVar19;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_03,(MethodInfo_321A1C0 *)&stack0xffffffffffffff38);
    _Unwind_Resume(auVar16._0_8_);
  }
  piVar2 = (int *)((long)&pSVar14->max_length + 4);
  *piVar2 = *piVar2 + 1;
  iVar7 = (int32_t)pSVar14->max_length;
  *(undefined4 *)&pSVar14->max_length = 0;
  if (iVar7 < 1) {
    return;
  }
  System_Array__Clear((System_Array_o *)pSVar14->bounds,0,iVar7,(MethodInfo *)0x0);
  return;
}


// SimpleJSONFixed.JSONArray$$get_Count
// il2cpp: int32_t SimpleJSONFixed_JSONArray__get_Count (SimpleJSONFixed_JSONArray_o* __this, const MethodInfo* method);
// 0x407d390

int32_t SimpleJSONFixed_JSONArray__get_Count(SimpleJSONFixed_JSONArray_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  int *piVar2;
  uint uVar3;
  System_Collections_Generic_List_JSONNode__o *pSVar4;
  System_Object_array *pSVar5;
  System_Collections_Generic_List_Enumerator_object__o __this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  bool_conflict bVar6;
  int32_t iVar7;
  int32_t extraout_EAX;
  int32_t extraout_EAX_00;
  MethodInfo *pMVar8;
  Il2CppObject *pIVar9;
  undefined8 uVar10;
  long *plVar11;
  MethodInfo *a;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
  MethodInfo *extraout_RDX_03;
  MethodInfo *extraout_RDX_04;
  int index;
  MethodInfo *pMVar12;
  SimpleJSONFixed_JSONArray_o *pSVar13;
  System_Collections_Generic_List_object__o *pSVar14;
  long lVar15;
  System_Collections_Generic_List_object__o *pSVar16;
  undefined1 auVar17 [12];
  System_Collections_Generic_List_T__o *pSVar18;
  System_Collections_Generic_List_Enumerator_T__c *pSVar19;
  Il2CppType *pIVar20;
  Il2CppType *a_00;
  undefined1 auStack_98 [16];
  Il2CppType *pIStack_88;
  System_Collections_Generic_List_object__o *pSStack_80;
  
  pSVar13 = __this;
  if (g_data_057ac366 == '\0') {
    pSVar13 = (SimpleJSONFixed_JSONArray_o *)&MethodInfo_Int32_get_Count;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac366 = '\x01';
  }
  pSVar4 = (__this->fields).m_List;
  if (pSVar4 != (System_Collections_Generic_List_JSONNode__o *)0x0) {
    return (pSVar4->fields)._size;
  }
  il2cpp_runtime_helper_022b2c90();
  pMVar8 = a;
  if (g_data_057ac367 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNull);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    g_data_057ac367 = '\x01';
    pMVar8 = extraout_RDX;
  }
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    pMVar8 = extraout_RDX_00;
  }
  pMVar12 = (MethodInfo *)0x0;
  bVar6 = SimpleJSONFixed_JSONNode__op_Equality((SimpleJSONFixed_JSONNode_o *)a,(Il2CppObject *)0x0,pMVar8);
  pMVar8 = a;
  if ((char)bVar6 != '\0') {
    pMVar8 = TypeInfo_JSONNull;
    if (*(int *)((long)&TypeInfo_JSONNull[2].parameters + 4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pMVar8 = (MethodInfo *)SimpleJSONFixed_JSONNull__CreateOrGet(pMVar8);
  }
  lVar15 = MethodInfo_Void_Add;
  pSVar14 = (System_Collections_Generic_List_object__o *)(pSVar13->fields).m_List;
  if (pSVar14 != (System_Collections_Generic_List_object__o *)0x0) {
    piVar1 = &(pSVar14->fields)._version;
    *piVar1 = *piVar1 + 1;
    pSVar5 = (pSVar14->fields)._items;
    if (pSVar5 != (System_Object_array *)0x0) {
      uVar3 = (pSVar14->fields)._size;
      if (uVar3 < (uint)pSVar5->max_length) {
        (pSVar14->fields)._size = uVar3 + 1;
        pSVar5->m_Items[(int)uVar3] = (Il2CppObject *)pMVar8;
        iVar7 = il2cpp_runtime_helper_022b4080(pSVar5->m_Items + (int)uVar3,pMVar8);
        return iVar7;
      }
      System_Collections_Generic_List_object___AddWithResize
                (pSVar14,(Il2CppObject *)pMVar8,
                 *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
      return extraout_EAX;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pMVar8 = pMVar12;
  if (g_data_057ac368 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_RemoveAt);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&MethodInfo_JSONNode_get_Item);
    g_data_057ac368 = '\x01';
  }
  index = (int)pMVar12;
  if (index < 0) {
    return 0;
  }
  pSVar5 = (pSVar14->fields)._items;
  if (pSVar5 != (System_Object_array *)0x0) {
    if ((int)pSVar5->max_length <= index) {
      return 0;
    }
    pMVar8 = (MethodInfo *)((ulong)pMVar12 & 0xffffffff);
    pIVar9 = System_Collections_Generic_List_object___get_Item
                       ((System_Collections_Generic_List_object__o *)pSVar5,index,MethodInfo_JSONNode_get_Item);
    pSVar5 = (pSVar14->fields)._items;
    if (pSVar5 != (System_Object_array *)0x0) {
      System_Collections_Generic_List_object___RemoveAt
                ((System_Collections_Generic_List_object__o *)pSVar5,index,MethodInfo_Void_RemoveAt);
      return (int32_t)pIVar9;
    }
  }
  lVar15 = 0;
  il2cpp_runtime_helper_022b2c90();
  pMVar12 = pMVar8;
  if (g_data_057ac369 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Remove);
    g_data_057ac369 = '\x01';
  }
  pSVar14 = *(System_Collections_Generic_List_object__o **)(lVar15 + 0x10);
  if (pSVar14 != (System_Collections_Generic_List_object__o *)0x0) {
    System_Collections_Generic_List_object___Remove(pSVar14,(Il2CppObject *)pMVar8,MethodInfo_Boolean_Remove);
    return (int32_t)pMVar8;
  }
  il2cpp_runtime_helper_022b2c90();
  pSVar16 = pSVar14;
  if (g_data_057ac36a == '\0') {
    pSVar16 = (System_Collections_Generic_List_object__o *)&MethodInfo_Void_Clear;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac36a = '\x01';
  }
  pSVar5 = (pSVar14->fields)._items;
  if (pSVar5 != (System_Object_array *)0x0) {
    piVar2 = (int *)((long)&pSVar5->max_length + 4);
    *piVar2 = *piVar2 + 1;
    iVar7 = (int32_t)pSVar5->max_length;
    *(undefined4 *)&pSVar5->max_length = 0;
    if (0 < iVar7) {
      System_Array__Clear((System_Array_o *)pSVar5->bounds,0,iVar7,(MethodInfo *)0x0);
      return extraout_EAX_00;
    }
    return (int32_t)pSVar5;
  }
  il2cpp_runtime_helper_022b2c90();
  pSStack_80 = pSVar14;
  if (g_data_057ac36b == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_JSONNode_get_Current);
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONArray);
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_SimpleJSONFixed_JSONNode_GetEnumerat);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Capacity);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Capacity);
    g_data_057ac36b = '\x01';
  }
  pSVar18 = (System_Collections_Generic_List_T__o *)0x0;
  pSVar19 = (System_Collections_Generic_List_Enumerator_T__c *)0x0;
  pIVar20 = (Il2CppType *)0x0;
  pSVar13 = (SimpleJSONFixed_JSONArray_o *)il2cpp_runtime_helper_023052d0(TypeInfo_JSONArray);
  SimpleJSONFixed_JSONArray___ctor(pSVar13,pMVar12);
  if ((pSVar13 != (SimpleJSONFixed_JSONArray_o *)0x0) &&
     (pSVar5 = (pSVar16->fields)._items, pSVar5 != (System_Object_array *)0x0)) {
    pSVar14 = (System_Collections_Generic_List_object__o *)(pSVar13->fields).m_List;
    iVar7 = System_Collections_Generic_List_object___get_Capacity
                      ((System_Collections_Generic_List_object__o *)pSVar5,MethodInfo_Int32_get_Capacity);
    if (pSVar14 != (System_Collections_Generic_List_object__o *)0x0) {
      System_Collections_Generic_List_object___set_Capacity(pSVar14,iVar7,MethodInfo_Void_set_Capacity);
      pSVar5 = (pSVar16->fields)._items;
      if (pSVar5 != (System_Object_array *)0x0) {
        System_Collections_Generic_List_object___GetEnumerator
                  ((System_Collections_Generic_List_Enumerator_T__o *)auStack_98,
                   (System_Collections_Generic_List_object__o *)pSVar5,MethodInfo_List_1_T_Enumerator_SimpleJSONFixed_JSONNode_GetEnumerat);
        pSVar18 = (System_Collections_Generic_List_T__o *)auStack_98._0_8_;
        pSVar19 = (System_Collections_Generic_List_Enumerator_T__c *)auStack_98._8_8_;
        a_00 = pIStack_88;
        while (__this_00.fields._8_8_ = pSVar19, __this_00.fields._list = pSVar18,
              __this_00.fields._current = (Il2CppObject *)a_00,
              bVar6 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                (__this_00,(MethodInfo_321A1D0 *)&stack0xffffffffffffff50),
              (char)bVar6 != '\0') {
          pMVar8 = extraout_RDX_01;
          pIVar20 = a_00;
          if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
            pMVar8 = extraout_RDX_02;
          }
          if (g_data_057ac34d == '\0') {
            il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
            g_data_057ac34d = '\x01';
            pMVar8 = extraout_RDX_03;
          }
          if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
            pMVar8 = extraout_RDX_04;
          }
          bVar6 = SimpleJSONFixed_JSONNode__op_Equality
                            ((SimpleJSONFixed_JSONNode_o *)a_00,(Il2CppObject *)0x0,pMVar8);
          if ((char)bVar6 == '\0') {
            if (a_00 == (Il2CppType *)0x0) {
              il2cpp_runtime_helper_022b2c90();
              goto label_0407d833;
            }
            uVar10 = (*a_00->data->vtable[0x1a].methodPtr)(a_00,a_00->data->vtable[0x1a].method);
            (*(pSVar13->klass->vtable)._21_Add.methodPtr)
                      (pSVar13,uVar10,(pSVar13->klass->vtable)._21_Add.method);
            a_00 = pIVar20;
          }
          else {
            (*(pSVar13->klass->vtable)._21_Add.methodPtr)(pSVar13,0,(pSVar13->klass->vtable)._21_Add.method);
            a_00 = pIVar20;
          }
        }
        __this_01.fields._8_8_ = pSVar19;
        __this_01.fields._list = pSVar18;
        __this_01.fields._current = (Il2CppObject *)a_00;
        System_Collections_Generic_List_Enumerator_object___Dispose
                  (__this_01,(MethodInfo_321A1C0 *)&stack0xffffffffffffff50);
        goto label_0407d81d;
      }
    }
  }
label_0407d833:
  auVar17 = il2cpp_runtime_helper_022b2c90();
  if (auVar17._8_4_ == 1) {
    plVar11 = (long *)__cxa_begin_catch(auVar17._0_8_);
    lVar15 = *plVar11;
    __cxa_end_catch();
    __this_02.fields._8_8_ = pSVar19;
    __this_02.fields._list = pSVar18;
    __this_02.fields._current = (Il2CppObject *)pIVar20;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_02,(MethodInfo_321A1C0 *)&stack0xffffffffffffff50);
    if (lVar15 == 0) {
label_0407d81d:
      return (int32_t)pSVar13;
    }
    il2cpp_runtime_helper_022fefe0(lVar15);
  }
  __this_03.fields._8_8_ = pSVar19;
  __this_03.fields._list = pSVar18;
  __this_03.fields._current = (Il2CppObject *)pIVar20;
  System_Collections_Generic_List_Enumerator_object___Dispose
            (__this_03,(MethodInfo_321A1C0 *)&stack0xffffffffffffff50);
  _Unwind_Resume(auVar17._0_8_);
}


// SimpleJSONFixed.JSONArray$$Add
// il2cpp: void SimpleJSONFixed_JSONArray__Add (SimpleJSONFixed_JSONArray_o* __this, System_String_o* aKey, SimpleJSONFixed_JSONNode_o* aItem, const MethodInfo* method);
// 0x407d3d0

void SimpleJSONFixed_JSONArray__Add
               (SimpleJSONFixed_JSONArray_o *__this,System_String_o *aKey,SimpleJSONFixed_JSONNode_o *aItem,
               MethodInfo *method)

{
  int32_t *piVar1;
  int *piVar2;
  uint uVar3;
  System_Object_array *pSVar4;
  System_Collections_Generic_List_Enumerator_object__o __this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  bool_conflict bVar5;
  int32_t iVar6;
  SimpleJSONFixed_JSONArray_o *__this_04;
  undefined8 uVar7;
  long *plVar8;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
  MethodInfo *extraout_RDX_03;
  MethodInfo *extraout_RDX_04;
  MethodInfo *pMVar9;
  int index;
  MethodInfo *pMVar10;
  System_Collections_Generic_List_object__o *pSVar11;
  long lVar12;
  System_Collections_Generic_List_object__o *pSVar13;
  undefined1 auVar14 [12];
  System_Collections_Generic_List_T__o *pSVar15;
  System_Collections_Generic_List_Enumerator_T__c *pSVar16;
  Il2CppType *pIVar17;
  Il2CppType *a;
  undefined1 auStack_90 [16];
  Il2CppType *pIStack_80;
  System_Collections_Generic_List_object__o *pSStack_78;
  
  pMVar9 = (MethodInfo *)aItem;
  if (g_data_057ac367 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNull);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    g_data_057ac367 = '\x01';
    pMVar9 = extraout_RDX;
  }
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    pMVar9 = extraout_RDX_00;
  }
  pMVar10 = (MethodInfo *)0x0;
  bVar5 = SimpleJSONFixed_JSONNode__op_Equality(aItem,(Il2CppObject *)0x0,pMVar9);
  if ((char)bVar5 != '\0') {
    pMVar9 = TypeInfo_JSONNull;
    if (*(int *)((long)&TypeInfo_JSONNull[2].parameters + 4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    aItem = (SimpleJSONFixed_JSONNode_o *)SimpleJSONFixed_JSONNull__CreateOrGet(pMVar9);
  }
  lVar12 = MethodInfo_Void_Add;
  pSVar11 = (System_Collections_Generic_List_object__o *)(__this->fields).m_List;
  if (pSVar11 != (System_Collections_Generic_List_object__o *)0x0) {
    piVar1 = &(pSVar11->fields)._version;
    *piVar1 = *piVar1 + 1;
    pSVar4 = (pSVar11->fields)._items;
    if (pSVar4 != (System_Object_array *)0x0) {
      uVar3 = (pSVar11->fields)._size;
      if ((uint)pSVar4->max_length <= uVar3) {
        System_Collections_Generic_List_object___AddWithResize
                  (pSVar11,(Il2CppObject *)aItem,
                   *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
        return;
      }
      (pSVar11->fields)._size = uVar3 + 1;
      pSVar4->m_Items[(int)uVar3] = (Il2CppObject *)aItem;
      il2cpp_runtime_helper_022b4080(pSVar4->m_Items + (int)uVar3,aItem);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pMVar9 = pMVar10;
  if (g_data_057ac368 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_RemoveAt);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&MethodInfo_JSONNode_get_Item);
    g_data_057ac368 = '\x01';
  }
  index = (int)pMVar10;
  if (index < 0) {
    return;
  }
  pSVar4 = (pSVar11->fields)._items;
  if (pSVar4 != (System_Object_array *)0x0) {
    if ((int)pSVar4->max_length <= index) {
      return;
    }
    pMVar9 = (MethodInfo *)((ulong)pMVar10 & 0xffffffff);
    System_Collections_Generic_List_object___get_Item
              ((System_Collections_Generic_List_object__o *)pSVar4,index,MethodInfo_JSONNode_get_Item);
    pSVar4 = (pSVar11->fields)._items;
    if (pSVar4 != (System_Object_array *)0x0) {
      System_Collections_Generic_List_object___RemoveAt
                ((System_Collections_Generic_List_object__o *)pSVar4,index,MethodInfo_Void_RemoveAt);
      return;
    }
  }
  lVar12 = 0;
  il2cpp_runtime_helper_022b2c90();
  pMVar10 = pMVar9;
  if (g_data_057ac369 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Remove);
    g_data_057ac369 = '\x01';
  }
  pSVar11 = *(System_Collections_Generic_List_object__o **)(lVar12 + 0x10);
  if (pSVar11 != (System_Collections_Generic_List_object__o *)0x0) {
    System_Collections_Generic_List_object___Remove(pSVar11,(Il2CppObject *)pMVar9,MethodInfo_Boolean_Remove);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pSVar13 = pSVar11;
  if (g_data_057ac36a == '\0') {
    pSVar13 = (System_Collections_Generic_List_object__o *)&MethodInfo_Void_Clear;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac36a = '\x01';
  }
  pSVar4 = (pSVar11->fields)._items;
  if (pSVar4 == (System_Object_array *)0x0) {
    il2cpp_runtime_helper_022b2c90();
    pSStack_78 = pSVar11;
    if (g_data_057ac36b == '\0') {
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
      il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
      il2cpp_runtime_helper_023445d0(&MethodInfo_JSONNode_get_Current);
      il2cpp_runtime_helper_023445d0(&TypeInfo_JSONArray);
      il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
      il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_SimpleJSONFixed_JSONNode_GetEnumerat);
      il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Capacity);
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Capacity);
      g_data_057ac36b = '\x01';
    }
    pSVar15 = (System_Collections_Generic_List_T__o *)0x0;
    pSVar16 = (System_Collections_Generic_List_Enumerator_T__c *)0x0;
    pIVar17 = (Il2CppType *)0x0;
    __this_04 = (SimpleJSONFixed_JSONArray_o *)il2cpp_runtime_helper_023052d0(TypeInfo_JSONArray);
    SimpleJSONFixed_JSONArray___ctor(__this_04,pMVar10);
    if ((__this_04 != (SimpleJSONFixed_JSONArray_o *)0x0) &&
       (pSVar4 = (pSVar13->fields)._items, pSVar4 != (System_Object_array *)0x0)) {
      pSVar11 = (System_Collections_Generic_List_object__o *)(__this_04->fields).m_List;
      iVar6 = System_Collections_Generic_List_object___get_Capacity
                        ((System_Collections_Generic_List_object__o *)pSVar4,MethodInfo_Int32_get_Capacity);
      if (pSVar11 != (System_Collections_Generic_List_object__o *)0x0) {
        System_Collections_Generic_List_object___set_Capacity(pSVar11,iVar6,MethodInfo_Void_set_Capacity);
        pSVar4 = (pSVar13->fields)._items;
        if (pSVar4 != (System_Object_array *)0x0) {
          System_Collections_Generic_List_object___GetEnumerator
                    ((System_Collections_Generic_List_Enumerator_T__o *)auStack_90,
                     (System_Collections_Generic_List_object__o *)pSVar4,MethodInfo_List_1_T_Enumerator_SimpleJSONFixed_JSONNode_GetEnumerat);
          pSVar15 = (System_Collections_Generic_List_T__o *)auStack_90._0_8_;
          pSVar16 = (System_Collections_Generic_List_Enumerator_T__c *)auStack_90._8_8_;
          a = pIStack_80;
          while( true ) {
            while( true ) {
              __this_00.fields._8_8_ = pSVar16;
              __this_00.fields._list = pSVar15;
              __this_00.fields._current = (Il2CppObject *)a;
              bVar5 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                (__this_00,(MethodInfo_321A1D0 *)&stack0xffffffffffffff58);
              if ((char)bVar5 == '\0') {
                __this_01.fields._8_8_ = pSVar16;
                __this_01.fields._list = pSVar15;
                __this_01.fields._current = (Il2CppObject *)a;
                System_Collections_Generic_List_Enumerator_object___Dispose
                          (__this_01,(MethodInfo_321A1C0 *)&stack0xffffffffffffff58);
                return;
              }
              pMVar9 = extraout_RDX_01;
              pIVar17 = a;
              if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
                pMVar9 = extraout_RDX_02;
              }
              if (g_data_057ac34d == '\0') {
                il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
                g_data_057ac34d = '\x01';
                pMVar9 = extraout_RDX_03;
              }
              if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
                pMVar9 = extraout_RDX_04;
              }
              bVar5 = SimpleJSONFixed_JSONNode__op_Equality
                                ((SimpleJSONFixed_JSONNode_o *)a,(Il2CppObject *)0x0,pMVar9);
              if ((char)bVar5 == '\0') break;
              (*(__this_04->klass->vtable)._21_Add.methodPtr)
                        (__this_04,0,(__this_04->klass->vtable)._21_Add.method);
              a = pIVar17;
            }
            if (a == (Il2CppType *)0x0) break;
            uVar7 = (*a->data->vtable[0x1a].methodPtr)(a,a->data->vtable[0x1a].method);
            (*(__this_04->klass->vtable)._21_Add.methodPtr)
                      (__this_04,uVar7,(__this_04->klass->vtable)._21_Add.method);
            a = pIVar17;
          }
          il2cpp_runtime_helper_022b2c90();
        }
      }
    }
    auVar14 = il2cpp_runtime_helper_022b2c90();
    if (auVar14._8_4_ == 1) {
      plVar8 = (long *)__cxa_begin_catch(auVar14._0_8_);
      lVar12 = *plVar8;
      __cxa_end_catch();
      __this_02.fields._8_8_ = pSVar16;
      __this_02.fields._list = pSVar15;
      __this_02.fields._current = (Il2CppObject *)pIVar17;
      System_Collections_Generic_List_Enumerator_object___Dispose
                (__this_02,(MethodInfo_321A1C0 *)&stack0xffffffffffffff58);
      if (lVar12 == 0) {
        return;
      }
      il2cpp_runtime_helper_022fefe0(lVar12);
    }
    __this_03.fields._8_8_ = pSVar16;
    __this_03.fields._list = pSVar15;
    __this_03.fields._current = (Il2CppObject *)pIVar17;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_03,(MethodInfo_321A1C0 *)&stack0xffffffffffffff58);
    _Unwind_Resume(auVar14._0_8_);
  }
  piVar2 = (int *)((long)&pSVar4->max_length + 4);
  *piVar2 = *piVar2 + 1;
  iVar6 = (int32_t)pSVar4->max_length;
  *(undefined4 *)&pSVar4->max_length = 0;
  if (iVar6 < 1) {
    return;
  }
  System_Array__Clear((System_Array_o *)pSVar4->bounds,0,iVar6,(MethodInfo *)0x0);
  return;
}


// SimpleJSONFixed.JSONArray$$Remove
// il2cpp: SimpleJSONFixed_JSONNode_o* SimpleJSONFixed_JSONArray__Remove (SimpleJSONFixed_JSONArray_o* __this, int32_t aIndex, const MethodInfo* method);
// 0x407d4d0

SimpleJSONFixed_JSONNode_o *
SimpleJSONFixed_JSONArray__Remove(SimpleJSONFixed_JSONArray_o *__this,int32_t aIndex,MethodInfo *method)

{
  System_Object_array *pSVar1;
  System_Collections_Generic_List_Enumerator_object__o __this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  undefined1 *puVar2;
  int32_t iVar3;
  bool_conflict bVar4;
  Il2CppObject *pIVar5;
  SimpleJSONFixed_JSONNode_o *extraout_RAX;
  SimpleJSONFixed_JSONArray_o *__this_04;
  undefined8 uVar6;
  long *plVar7;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
  MethodInfo *pMVar8;
  undefined4 in_register_00000034;
  MethodInfo *item;
  long lVar9;
  System_Collections_Generic_List_object__o *pSVar10;
  System_Collections_Generic_List_object__o *pSVar11;
  undefined1 auVar12 [12];
  System_Collections_Generic_List_T__o *pSVar13;
  System_Collections_Generic_List_Enumerator_T__c *pSVar14;
  Il2CppType *pIVar15;
  Il2CppType *a;
  undefined1 auStack_78 [16];
  Il2CppType *pIStack_68;
  System_Collections_Generic_List_object__o *pSStack_60;
  
  item = (MethodInfo *)CONCAT44(in_register_00000034,aIndex);
  pMVar8 = (MethodInfo *)(ulong)(uint)aIndex;
  if (g_data_057ac368 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_RemoveAt);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&MethodInfo_JSONNode_get_Item);
    g_data_057ac368 = '\x01';
  }
  if (aIndex < 0) {
    return (SimpleJSONFixed_JSONNode_o *)0x0;
  }
  pSVar10 = (System_Collections_Generic_List_object__o *)(__this->fields).m_List;
  if (pSVar10 != (System_Collections_Generic_List_object__o *)0x0) {
    if ((pSVar10->fields)._size <= aIndex) {
      return (SimpleJSONFixed_JSONNode_o *)0x0;
    }
    pIVar5 = System_Collections_Generic_List_object___get_Item(pSVar10,aIndex,MethodInfo_JSONNode_get_Item);
    pSVar10 = (System_Collections_Generic_List_object__o *)(__this->fields).m_List;
    item = pMVar8;
    if (pSVar10 != (System_Collections_Generic_List_object__o *)0x0) {
      System_Collections_Generic_List_object___RemoveAt(pSVar10,aIndex,MethodInfo_Void_RemoveAt);
      return (SimpleJSONFixed_JSONNode_o *)pIVar5;
    }
  }
  lVar9 = 0;
  il2cpp_runtime_helper_022b2c90();
  pMVar8 = item;
  if (g_data_057ac369 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Remove);
    g_data_057ac369 = '\x01';
  }
  pSVar10 = *(System_Collections_Generic_List_object__o **)(lVar9 + 0x10);
  if (pSVar10 != (System_Collections_Generic_List_object__o *)0x0) {
    System_Collections_Generic_List_object___Remove(pSVar10,(Il2CppObject *)item,MethodInfo_Boolean_Remove);
    return (SimpleJSONFixed_JSONNode_o *)item;
  }
  il2cpp_runtime_helper_022b2c90();
  pSVar11 = pSVar10;
  if (g_data_057ac36a == '\0') {
    pSVar11 = (System_Collections_Generic_List_object__o *)&MethodInfo_Void_Clear;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac36a = '\x01';
  }
  pSVar1 = (pSVar10->fields)._items;
  if (pSVar1 != (System_Object_array *)0x0) {
    puVar2 = (undefined1 *)((long)&pSVar1->max_length + 4);
    *(int *)puVar2 = *(int *)puVar2 + 1;
    iVar3 = (int32_t)pSVar1->max_length;
    *(undefined4 *)&pSVar1->max_length = 0;
    if (0 < iVar3) {
      System_Array__Clear((System_Array_o *)pSVar1->bounds,0,iVar3,(MethodInfo *)0x0);
      return extraout_RAX;
    }
    return (SimpleJSONFixed_JSONNode_o *)pSVar1;
  }
  il2cpp_runtime_helper_022b2c90();
  pSStack_60 = pSVar10;
  if (g_data_057ac36b == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_JSONNode_get_Current);
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONArray);
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_SimpleJSONFixed_JSONNode_GetEnumerat);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Capacity);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Capacity);
    g_data_057ac36b = '\x01';
  }
  pSVar13 = (System_Collections_Generic_List_T__o *)0x0;
  pSVar14 = (System_Collections_Generic_List_Enumerator_T__c *)0x0;
  pIVar15 = (Il2CppType *)0x0;
  __this_04 = (SimpleJSONFixed_JSONArray_o *)il2cpp_runtime_helper_023052d0(TypeInfo_JSONArray);
  SimpleJSONFixed_JSONArray___ctor(__this_04,pMVar8);
  if ((__this_04 != (SimpleJSONFixed_JSONArray_o *)0x0) &&
     (pSVar1 = (pSVar11->fields)._items, pSVar1 != (System_Object_array *)0x0)) {
    pSVar10 = (System_Collections_Generic_List_object__o *)(__this_04->fields).m_List;
    iVar3 = System_Collections_Generic_List_object___get_Capacity
                      ((System_Collections_Generic_List_object__o *)pSVar1,MethodInfo_Int32_get_Capacity);
    if (pSVar10 != (System_Collections_Generic_List_object__o *)0x0) {
      System_Collections_Generic_List_object___set_Capacity(pSVar10,iVar3,MethodInfo_Void_set_Capacity);
      pSVar1 = (pSVar11->fields)._items;
      if (pSVar1 != (System_Object_array *)0x0) {
        System_Collections_Generic_List_object___GetEnumerator
                  ((System_Collections_Generic_List_Enumerator_T__o *)auStack_78,
                   (System_Collections_Generic_List_object__o *)pSVar1,MethodInfo_List_1_T_Enumerator_SimpleJSONFixed_JSONNode_GetEnumerat);
        pSVar13 = (System_Collections_Generic_List_T__o *)auStack_78._0_8_;
        pSVar14 = (System_Collections_Generic_List_Enumerator_T__c *)auStack_78._8_8_;
        a = pIStack_68;
        while( true ) {
          while( true ) {
            __this_00.fields._8_8_ = pSVar14;
            __this_00.fields._list = pSVar13;
            __this_00.fields._current = (Il2CppObject *)a;
            bVar4 = System_Collections_Generic_List_Enumerator_object___MoveNext
                              (__this_00,(MethodInfo_321A1D0 *)&stack0xffffffffffffff70);
            if ((char)bVar4 == '\0') {
              __this_01.fields._8_8_ = pSVar14;
              __this_01.fields._list = pSVar13;
              __this_01.fields._current = (Il2CppObject *)a;
              System_Collections_Generic_List_Enumerator_object___Dispose
                        (__this_01,(MethodInfo_321A1C0 *)&stack0xffffffffffffff70);
              return (SimpleJSONFixed_JSONNode_o *)__this_04;
            }
            pMVar8 = extraout_RDX;
            pIVar15 = a;
            if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
              pMVar8 = extraout_RDX_00;
            }
            if (g_data_057ac34d == '\0') {
              il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
              g_data_057ac34d = '\x01';
              pMVar8 = extraout_RDX_01;
            }
            if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
              pMVar8 = extraout_RDX_02;
            }
            bVar4 = SimpleJSONFixed_JSONNode__op_Equality
                              ((SimpleJSONFixed_JSONNode_o *)a,(Il2CppObject *)0x0,pMVar8);
            if ((char)bVar4 == '\0') break;
            (*(__this_04->klass->vtable)._21_Add.methodPtr)
                      (__this_04,0,(__this_04->klass->vtable)._21_Add.method);
            a = pIVar15;
          }
          if (a == (Il2CppType *)0x0) break;
          uVar6 = (*a->data->vtable[0x1a].methodPtr)(a,a->data->vtable[0x1a].method);
          (*(__this_04->klass->vtable)._21_Add.methodPtr)
                    (__this_04,uVar6,(__this_04->klass->vtable)._21_Add.method);
          a = pIVar15;
        }
        il2cpp_runtime_helper_022b2c90();
      }
    }
  }
  auVar12 = il2cpp_runtime_helper_022b2c90();
  if (auVar12._8_4_ == 1) {
    plVar7 = (long *)__cxa_begin_catch(auVar12._0_8_);
    lVar9 = *plVar7;
    __cxa_end_catch();
    __this_02.fields._8_8_ = pSVar14;
    __this_02.fields._list = pSVar13;
    __this_02.fields._current = (Il2CppObject *)pIVar15;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_02,(MethodInfo_321A1C0 *)&stack0xffffffffffffff70);
    if (lVar9 == 0) {
      return (SimpleJSONFixed_JSONNode_o *)__this_04;
    }
    il2cpp_runtime_helper_022fefe0(lVar9);
  }
  __this_03.fields._8_8_ = pSVar14;
  __this_03.fields._list = pSVar13;
  __this_03.fields._current = (Il2CppObject *)pIVar15;
  System_Collections_Generic_List_Enumerator_object___Dispose
            (__this_03,(MethodInfo_321A1C0 *)&stack0xffffffffffffff70);
  _Unwind_Resume(auVar12._0_8_);
}


// SimpleJSONFixed.JSONArray$$Remove
// il2cpp: SimpleJSONFixed_JSONNode_o* SimpleJSONFixed_JSONArray__Remove (SimpleJSONFixed_JSONArray_o* __this, SimpleJSONFixed_JSONNode_o* aNode, const MethodInfo* method);
// 0x407d570

SimpleJSONFixed_JSONNode_o *
SimpleJSONFixed_JSONArray__Remove_3f7d570
          (SimpleJSONFixed_JSONArray_o *__this,SimpleJSONFixed_JSONNode_o *aNode,MethodInfo *method)

{
  System_Object_array *pSVar1;
  long lVar2;
  System_Collections_Generic_List_Enumerator_object__o __this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  undefined1 *puVar3;
  int32_t iVar4;
  bool_conflict bVar5;
  SimpleJSONFixed_JSONNode_o *extraout_RAX;
  SimpleJSONFixed_JSONArray_o *__this_04;
  undefined8 uVar6;
  long *plVar7;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
  MethodInfo *pMVar8;
  System_Collections_Generic_List_object__o *pSVar9;
  System_Collections_Generic_List_object__o *pSVar10;
  undefined1 auVar11 [12];
  System_Collections_Generic_List_T__o *pSVar12;
  System_Collections_Generic_List_Enumerator_T__c *pSVar13;
  Il2CppType *pIVar14;
  Il2CppType *a;
  undefined1 auStack_60 [16];
  Il2CppType *pIStack_50;
  System_Collections_Generic_List_object__o *pSStack_48;
  
  pMVar8 = (MethodInfo *)aNode;
  if (g_data_057ac369 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Remove);
    g_data_057ac369 = '\x01';
  }
  pSVar9 = (System_Collections_Generic_List_object__o *)(__this->fields).m_List;
  if (pSVar9 != (System_Collections_Generic_List_object__o *)0x0) {
    System_Collections_Generic_List_object___Remove(pSVar9,(Il2CppObject *)aNode,MethodInfo_Boolean_Remove);
    return aNode;
  }
  il2cpp_runtime_helper_022b2c90();
  pSVar10 = pSVar9;
  if (g_data_057ac36a == '\0') {
    pSVar10 = (System_Collections_Generic_List_object__o *)&MethodInfo_Void_Clear;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac36a = '\x01';
  }
  pSVar1 = (pSVar9->fields)._items;
  if (pSVar1 == (System_Object_array *)0x0) {
    il2cpp_runtime_helper_022b2c90();
    pSStack_48 = pSVar9;
    if (g_data_057ac36b == '\0') {
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
      il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
      il2cpp_runtime_helper_023445d0(&MethodInfo_JSONNode_get_Current);
      il2cpp_runtime_helper_023445d0(&TypeInfo_JSONArray);
      il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
      il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_SimpleJSONFixed_JSONNode_GetEnumerat);
      il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Capacity);
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Capacity);
      g_data_057ac36b = '\x01';
    }
    pSVar12 = (System_Collections_Generic_List_T__o *)0x0;
    pSVar13 = (System_Collections_Generic_List_Enumerator_T__c *)0x0;
    pIVar14 = (Il2CppType *)0x0;
    __this_04 = (SimpleJSONFixed_JSONArray_o *)il2cpp_runtime_helper_023052d0(TypeInfo_JSONArray);
    SimpleJSONFixed_JSONArray___ctor(__this_04,pMVar8);
    if ((__this_04 != (SimpleJSONFixed_JSONArray_o *)0x0) &&
       (pSVar1 = (pSVar10->fields)._items, pSVar1 != (System_Object_array *)0x0)) {
      pSVar9 = (System_Collections_Generic_List_object__o *)(__this_04->fields).m_List;
      iVar4 = System_Collections_Generic_List_object___get_Capacity
                        ((System_Collections_Generic_List_object__o *)pSVar1,MethodInfo_Int32_get_Capacity);
      if (pSVar9 != (System_Collections_Generic_List_object__o *)0x0) {
        System_Collections_Generic_List_object___set_Capacity(pSVar9,iVar4,MethodInfo_Void_set_Capacity);
        pSVar1 = (pSVar10->fields)._items;
        if (pSVar1 != (System_Object_array *)0x0) {
          System_Collections_Generic_List_object___GetEnumerator
                    ((System_Collections_Generic_List_Enumerator_T__o *)auStack_60,
                     (System_Collections_Generic_List_object__o *)pSVar1,MethodInfo_List_1_T_Enumerator_SimpleJSONFixed_JSONNode_GetEnumerat);
          pSVar12 = (System_Collections_Generic_List_T__o *)auStack_60._0_8_;
          pSVar13 = (System_Collections_Generic_List_Enumerator_T__c *)auStack_60._8_8_;
          a = pIStack_50;
          while( true ) {
            while( true ) {
              __this_00.fields._8_8_ = pSVar13;
              __this_00.fields._list = pSVar12;
              __this_00.fields._current = (Il2CppObject *)a;
              bVar5 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                (__this_00,(MethodInfo_321A1D0 *)&stack0xffffffffffffff88);
              if ((char)bVar5 == '\0') {
                __this_01.fields._8_8_ = pSVar13;
                __this_01.fields._list = pSVar12;
                __this_01.fields._current = (Il2CppObject *)a;
                System_Collections_Generic_List_Enumerator_object___Dispose
                          (__this_01,(MethodInfo_321A1C0 *)&stack0xffffffffffffff88);
                return (SimpleJSONFixed_JSONNode_o *)__this_04;
              }
              pMVar8 = extraout_RDX;
              pIVar14 = a;
              if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
                pMVar8 = extraout_RDX_00;
              }
              if (g_data_057ac34d == '\0') {
                il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
                g_data_057ac34d = '\x01';
                pMVar8 = extraout_RDX_01;
              }
              if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
                pMVar8 = extraout_RDX_02;
              }
              bVar5 = SimpleJSONFixed_JSONNode__op_Equality
                                ((SimpleJSONFixed_JSONNode_o *)a,(Il2CppObject *)0x0,pMVar8);
              if ((char)bVar5 == '\0') break;
              (*(__this_04->klass->vtable)._21_Add.methodPtr)
                        (__this_04,0,(__this_04->klass->vtable)._21_Add.method);
              a = pIVar14;
            }
            if (a == (Il2CppType *)0x0) break;
            uVar6 = (*a->data->vtable[0x1a].methodPtr)(a,a->data->vtable[0x1a].method);
            (*(__this_04->klass->vtable)._21_Add.methodPtr)
                      (__this_04,uVar6,(__this_04->klass->vtable)._21_Add.method);
            a = pIVar14;
          }
          il2cpp_runtime_helper_022b2c90();
        }
      }
    }
    auVar11 = il2cpp_runtime_helper_022b2c90();
    if (auVar11._8_4_ == 1) {
      plVar7 = (long *)__cxa_begin_catch(auVar11._0_8_);
      lVar2 = *plVar7;
      __cxa_end_catch();
      __this_02.fields._8_8_ = pSVar13;
      __this_02.fields._list = pSVar12;
      __this_02.fields._current = (Il2CppObject *)pIVar14;
      System_Collections_Generic_List_Enumerator_object___Dispose
                (__this_02,(MethodInfo_321A1C0 *)&stack0xffffffffffffff88);
      if (lVar2 == 0) {
        return (SimpleJSONFixed_JSONNode_o *)__this_04;
      }
      il2cpp_runtime_helper_022fefe0(lVar2);
    }
    __this_03.fields._8_8_ = pSVar13;
    __this_03.fields._list = pSVar12;
    __this_03.fields._current = (Il2CppObject *)pIVar14;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_03,(MethodInfo_321A1C0 *)&stack0xffffffffffffff88);
    _Unwind_Resume(auVar11._0_8_);
  }
  puVar3 = (undefined1 *)((long)&pSVar1->max_length + 4);
  *(int *)puVar3 = *(int *)puVar3 + 1;
  iVar4 = (int32_t)pSVar1->max_length;
  *(undefined4 *)&pSVar1->max_length = 0;
  if (iVar4 < 1) {
    return (SimpleJSONFixed_JSONNode_o *)pSVar1;
  }
  System_Array__Clear((System_Array_o *)pSVar1->bounds,0,iVar4,(MethodInfo *)0x0);
  return extraout_RAX;
}


// SimpleJSONFixed.JSONArray$$Clear
// il2cpp: void SimpleJSONFixed_JSONArray__Clear (SimpleJSONFixed_JSONArray_o* __this, const MethodInfo* method);
// 0x407d5d0

void SimpleJSONFixed_JSONArray__Clear(SimpleJSONFixed_JSONArray_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  System_Collections_Generic_List_JSONNode__o *pSVar2;
  System_Collections_Generic_List_object__o *pSVar3;
  System_Collections_Generic_List_object__o *__this_00;
  long lVar4;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  int32_t iVar5;
  bool_conflict bVar6;
  SimpleJSONFixed_JSONArray_o *__this_05;
  undefined8 uVar7;
  long *plVar8;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
  MethodInfo *method_00;
  SimpleJSONFixed_JSONArray_o *pSVar9;
  undefined1 auVar10 [12];
  System_Collections_Generic_List_T__o *pSVar11;
  System_Collections_Generic_List_Enumerator_T__c *pSVar12;
  Il2CppType *pIVar13;
  Il2CppType *a;
  undefined1 local_48 [16];
  Il2CppType *local_38;
  SimpleJSONFixed_JSONArray_o *pSStack_30;
  
  pSVar9 = __this;
  if (g_data_057ac36a == '\0') {
    pSVar9 = (SimpleJSONFixed_JSONArray_o *)&MethodInfo_Void_Clear;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac36a = '\x01';
  }
  pSVar2 = (__this->fields).m_List;
  if (pSVar2 == (System_Collections_Generic_List_JSONNode__o *)0x0) {
    il2cpp_runtime_helper_022b2c90();
    pSStack_30 = __this;
    if (g_data_057ac36b == '\0') {
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
      il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
      il2cpp_runtime_helper_023445d0(&MethodInfo_JSONNode_get_Current);
      il2cpp_runtime_helper_023445d0(&TypeInfo_JSONArray);
      il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
      il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_SimpleJSONFixed_JSONNode_GetEnumerat);
      il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Capacity);
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Capacity);
      g_data_057ac36b = '\x01';
    }
    pSVar11 = (System_Collections_Generic_List_T__o *)0x0;
    pSVar12 = (System_Collections_Generic_List_Enumerator_T__c *)0x0;
    pIVar13 = (Il2CppType *)0x0;
    __this_05 = (SimpleJSONFixed_JSONArray_o *)il2cpp_runtime_helper_023052d0(TypeInfo_JSONArray);
    SimpleJSONFixed_JSONArray___ctor(__this_05,method);
    if ((__this_05 != (SimpleJSONFixed_JSONArray_o *)0x0) &&
       (pSVar3 = (System_Collections_Generic_List_object__o *)(pSVar9->fields).m_List,
       pSVar3 != (System_Collections_Generic_List_object__o *)0x0)) {
      __this_00 = (System_Collections_Generic_List_object__o *)(__this_05->fields).m_List;
      iVar5 = System_Collections_Generic_List_object___get_Capacity(pSVar3,MethodInfo_Int32_get_Capacity);
      if (__this_00 != (System_Collections_Generic_List_object__o *)0x0) {
        System_Collections_Generic_List_object___set_Capacity(__this_00,iVar5,MethodInfo_Void_set_Capacity);
        pSVar3 = (System_Collections_Generic_List_object__o *)(pSVar9->fields).m_List;
        if (pSVar3 != (System_Collections_Generic_List_object__o *)0x0) {
          System_Collections_Generic_List_object___GetEnumerator
                    ((System_Collections_Generic_List_Enumerator_T__o *)local_48,pSVar3,MethodInfo_List_1_T_Enumerator_SimpleJSONFixed_JSONNode_GetEnumerat);
          pSVar11 = (System_Collections_Generic_List_T__o *)local_48._0_8_;
          pSVar12 = (System_Collections_Generic_List_Enumerator_T__c *)local_48._8_8_;
          a = local_38;
          while( true ) {
            while( true ) {
              __this_01.fields._8_8_ = pSVar12;
              __this_01.fields._list = pSVar11;
              __this_01.fields._current = (Il2CppObject *)a;
              bVar6 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                (__this_01,(MethodInfo_321A1D0 *)&stack0xffffffffffffffa0);
              if ((char)bVar6 == '\0') {
                __this_02.fields._8_8_ = pSVar12;
                __this_02.fields._list = pSVar11;
                __this_02.fields._current = (Il2CppObject *)a;
                System_Collections_Generic_List_Enumerator_object___Dispose
                          (__this_02,(MethodInfo_321A1C0 *)&stack0xffffffffffffffa0);
                return;
              }
              method_00 = extraout_RDX;
              pIVar13 = a;
              if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
                method_00 = extraout_RDX_00;
              }
              if (g_data_057ac34d == '\0') {
                il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
                g_data_057ac34d = '\x01';
                method_00 = extraout_RDX_01;
              }
              if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
                method_00 = extraout_RDX_02;
              }
              bVar6 = SimpleJSONFixed_JSONNode__op_Equality
                                ((SimpleJSONFixed_JSONNode_o *)a,(Il2CppObject *)0x0,method_00);
              if ((char)bVar6 == '\0') break;
              (*(__this_05->klass->vtable)._21_Add.methodPtr)
                        (__this_05,0,(__this_05->klass->vtable)._21_Add.method);
              a = pIVar13;
            }
            if (a == (Il2CppType *)0x0) break;
            uVar7 = (*a->data->vtable[0x1a].methodPtr)(a,a->data->vtable[0x1a].method);
            (*(__this_05->klass->vtable)._21_Add.methodPtr)
                      (__this_05,uVar7,(__this_05->klass->vtable)._21_Add.method);
            a = pIVar13;
          }
          il2cpp_runtime_helper_022b2c90();
        }
      }
    }
    auVar10 = il2cpp_runtime_helper_022b2c90();
    if (auVar10._8_4_ == 1) {
      plVar8 = (long *)__cxa_begin_catch(auVar10._0_8_);
      lVar4 = *plVar8;
      __cxa_end_catch();
      __this_03.fields._8_8_ = pSVar12;
      __this_03.fields._list = pSVar11;
      __this_03.fields._current = (Il2CppObject *)pIVar13;
      System_Collections_Generic_List_Enumerator_object___Dispose
                (__this_03,(MethodInfo_321A1C0 *)&stack0xffffffffffffffa0);
      if (lVar4 == 0) {
        return;
      }
      il2cpp_runtime_helper_022fefe0(lVar4);
    }
    __this_04.fields._8_8_ = pSVar12;
    __this_04.fields._list = pSVar11;
    __this_04.fields._current = (Il2CppObject *)pIVar13;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_04,(MethodInfo_321A1C0 *)&stack0xffffffffffffffa0);
    _Unwind_Resume(auVar10._0_8_);
  }
  piVar1 = &(pSVar2->fields)._version;
  *piVar1 = *piVar1 + 1;
  iVar5 = (pSVar2->fields)._size;
  (pSVar2->fields)._size = 0;
  if (iVar5 < 1) {
    return;
  }
  System_Array__Clear((System_Array_o *)(pSVar2->fields)._items,0,iVar5,(MethodInfo *)0x0);
  return;
}


// SimpleJSONFixed.JSONArray$$Clone
// il2cpp: SimpleJSONFixed_JSONNode_o* SimpleJSONFixed_JSONArray__Clone (SimpleJSONFixed_JSONArray_o* __this, const MethodInfo* method);
// 0x407d620

SimpleJSONFixed_JSONNode_o *
SimpleJSONFixed_JSONArray__Clone(SimpleJSONFixed_JSONArray_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_object__o *pSVar1;
  System_Collections_Generic_List_object__o *__this_00;
  long lVar2;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  int32_t value;
  bool_conflict bVar3;
  SimpleJSONFixed_JSONArray_o *__this_05;
  undefined8 uVar4;
  long *plVar5;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
  MethodInfo *method_00;
  undefined1 auVar6 [12];
  System_Collections_Generic_List_T__o *pSVar7;
  System_Collections_Generic_List_Enumerator_T__c *pSVar8;
  Il2CppType *pIVar9;
  Il2CppType *a;
  undefined1 auStack_40 [16];
  Il2CppType *pIStack_30;
  
  if (g_data_057ac36b == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_JSONNode_get_Current);
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONArray);
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_SimpleJSONFixed_JSONNode_GetEnumerat);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Capacity);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Capacity);
    g_data_057ac36b = '\x01';
  }
  pSVar7 = (System_Collections_Generic_List_T__o *)0x0;
  pSVar8 = (System_Collections_Generic_List_Enumerator_T__c *)0x0;
  pIVar9 = (Il2CppType *)0x0;
  __this_05 = (SimpleJSONFixed_JSONArray_o *)il2cpp_runtime_helper_023052d0(TypeInfo_JSONArray);
  SimpleJSONFixed_JSONArray___ctor(__this_05,method);
  if ((__this_05 != (SimpleJSONFixed_JSONArray_o *)0x0) &&
     (pSVar1 = (System_Collections_Generic_List_object__o *)(__this->fields).m_List,
     pSVar1 != (System_Collections_Generic_List_object__o *)0x0)) {
    __this_00 = (System_Collections_Generic_List_object__o *)(__this_05->fields).m_List;
    value = System_Collections_Generic_List_object___get_Capacity(pSVar1,MethodInfo_Int32_get_Capacity);
    if (__this_00 != (System_Collections_Generic_List_object__o *)0x0) {
      System_Collections_Generic_List_object___set_Capacity(__this_00,value,MethodInfo_Void_set_Capacity);
      pSVar1 = (System_Collections_Generic_List_object__o *)(__this->fields).m_List;
      if (pSVar1 != (System_Collections_Generic_List_object__o *)0x0) {
        System_Collections_Generic_List_object___GetEnumerator
                  ((System_Collections_Generic_List_Enumerator_T__o *)auStack_40,pSVar1,MethodInfo_List_1_T_Enumerator_SimpleJSONFixed_JSONNode_GetEnumerat);
        pSVar7 = (System_Collections_Generic_List_T__o *)auStack_40._0_8_;
        pSVar8 = (System_Collections_Generic_List_Enumerator_T__c *)auStack_40._8_8_;
        a = pIStack_30;
        while( true ) {
          while( true ) {
            __this_01.fields._8_8_ = pSVar8;
            __this_01.fields._list = pSVar7;
            __this_01.fields._current = (Il2CppObject *)a;
            bVar3 = System_Collections_Generic_List_Enumerator_object___MoveNext
                              (__this_01,(MethodInfo_321A1D0 *)&stack0xffffffffffffffa8);
            if ((char)bVar3 == '\0') {
              __this_02.fields._8_8_ = pSVar8;
              __this_02.fields._list = pSVar7;
              __this_02.fields._current = (Il2CppObject *)a;
              System_Collections_Generic_List_Enumerator_object___Dispose
                        (__this_02,(MethodInfo_321A1C0 *)&stack0xffffffffffffffa8);
              return (SimpleJSONFixed_JSONNode_o *)__this_05;
            }
            method_00 = extraout_RDX;
            pIVar9 = a;
            if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
              method_00 = extraout_RDX_00;
            }
            if (g_data_057ac34d == '\0') {
              il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
              g_data_057ac34d = '\x01';
              method_00 = extraout_RDX_01;
            }
            if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
              method_00 = extraout_RDX_02;
            }
            bVar3 = SimpleJSONFixed_JSONNode__op_Equality
                              ((SimpleJSONFixed_JSONNode_o *)a,(Il2CppObject *)0x0,method_00);
            if ((char)bVar3 == '\0') break;
            (*(__this_05->klass->vtable)._21_Add.methodPtr)
                      (__this_05,0,(__this_05->klass->vtable)._21_Add.method);
            a = pIVar9;
          }
          if (a == (Il2CppType *)0x0) break;
          uVar4 = (*a->data->vtable[0x1a].methodPtr)(a,a->data->vtable[0x1a].method);
          (*(__this_05->klass->vtable)._21_Add.methodPtr)
                    (__this_05,uVar4,(__this_05->klass->vtable)._21_Add.method);
          a = pIVar9;
        }
        il2cpp_runtime_helper_022b2c90();
      }
    }
  }
  auVar6 = il2cpp_runtime_helper_022b2c90();
  if (auVar6._8_4_ == 1) {
    plVar5 = (long *)__cxa_begin_catch(auVar6._0_8_);
    lVar2 = *plVar5;
    __cxa_end_catch();
    __this_03.fields._8_8_ = pSVar8;
    __this_03.fields._list = pSVar7;
    __this_03.fields._current = (Il2CppObject *)pIVar9;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_03,(MethodInfo_321A1C0 *)&stack0xffffffffffffffa8);
    if (lVar2 == 0) {
      return (SimpleJSONFixed_JSONNode_o *)__this_05;
    }
    il2cpp_runtime_helper_022fefe0(lVar2);
  }
  __this_04.fields._8_8_ = pSVar8;
  __this_04.fields._list = pSVar7;
  __this_04.fields._current = (Il2CppObject *)pIVar9;
  System_Collections_Generic_List_Enumerator_object___Dispose
            (__this_04,(MethodInfo_321A1C0 *)&stack0xffffffffffffffa8);
  _Unwind_Resume(auVar6._0_8_);
}


// SimpleJSONFixed.JSONArray$$get_Children
// il2cpp: System_Collections_Generic_IEnumerable_JSONNode__o* SimpleJSONFixed_JSONArray__get_Children (SimpleJSONFixed_JSONArray_o* __this, const MethodInfo* method);
// 0x407d8e0

System_Collections_Generic_IEnumerable_JSONNode__o *
SimpleJSONFixed_JSONArray__get_Children(SimpleJSONFixed_JSONArray_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  Il2CppObject *__this_00;
  undefined4 extraout_var;
  undefined4 uVar2;
  Il2CppObject *__this_01;
  
  if (g_data_057ac36c == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_get_Children_d__24);
    g_data_057ac36c = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_get_Children_d__24);
  uVar2 = 0;
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  *(undefined4 *)&__this_00[1].klass = 0xfffffffe;
  __this_01 = (Il2CppObject *)0x0;
  iVar1 = System_Environment__get_CurrentManagedThreadId((MethodInfo *)0x0);
  *(int32_t *)&__this_00[2].klass = iVar1;
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[2].monitor = __this;
    il2cpp_runtime_helper_022b4080(&__this_00[2].monitor,__this);
    return (System_Collections_Generic_IEnumerable_JSONNode__o *)__this_00;
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor(__this_01,(MethodInfo *)0x0);
  *(undefined4 *)&__this_01[1].klass = uVar2;
  iVar1 = System_Environment__get_CurrentManagedThreadId((MethodInfo *)0x0);
  *(int32_t *)&__this_01[2].klass = iVar1;
  return (System_Collections_Generic_IEnumerable_JSONNode__o *)CONCAT44(extraout_var,iVar1);
}


// SimpleJSONFixed.JSONArray$$WriteToStringBuilder
// il2cpp: void SimpleJSONFixed_JSONArray__WriteToStringBuilder (SimpleJSONFixed_JSONArray_o* __this, System_Text_StringBuilder_o* aSB, int32_t aIndent, int32_t aIndentInc, int32_t aMode, const MethodInfo* method);
// 0x407d990

void SimpleJSONFixed_JSONArray__WriteToStringBuilder
               (SimpleJSONFixed_JSONArray_o *__this,System_Text_StringBuilder_o *aSB,int32_t aIndent,
               int32_t aIndentInc,int32_t aMode,MethodInfo *method)

{
  int iVar1;
  System_Collections_Generic_List_JSONNode__o *pSVar2;
  System_Collections_Generic_List_Enumerator_object__o __this_00;
  Il2CppObject *pIVar3;
  System_Text_StringBuilder_o *__this_01;
  undefined4 in_register_0000000c;
  undefined8 uVar4;
  undefined4 in_register_00000014;
  undefined8 uVar5;
  Il2CppObject *unaff_RBX;
  ulong uVar6;
  MethodInfo_362BED0 **__this_02;
  uint repeatCount;
  int iVar7;
  int iStackY_48;
  
  uVar5 = CONCAT44(in_register_00000014,aIndent);
  uVar4 = CONCAT44(in_register_0000000c,aIndentInc);
  __this_02 = (MethodInfo_362BED0 **)__this;
  if (g_data_057ac36d == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    __this_02 = &MethodInfo_JSONNode_get_Item;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac36d = '\x01';
  }
  if (aSB != (System_Text_StringBuilder_o *)0x0) {
    uVar6 = 0;
    __this_02 = (MethodInfo_362BED0 **)aSB;
    System_Text_StringBuilder__Append_3b048f0(aSB,0x5b,(MethodInfo *)0x0);
    pSVar2 = (__this->fields).m_List;
    if (pSVar2 != (System_Collections_Generic_List_JSONNode__o *)0x0) {
      iVar1 = (pSVar2->fields)._size;
      if ((char)(__this->fields).field1_0x8 == '\0') {
        uVar6 = (ulong)(uint)aMode;
      }
      iStackY_48 = (int)uVar6;
      if (0 < iVar1) {
        repeatCount = (int)uVar4 + (int)uVar5;
        if (iStackY_48 == 1) {
          iVar7 = 0;
          do {
            if (iVar7 != 0) {
              System_Text_StringBuilder__Append_3b048f0(aSB,0x2c,(MethodInfo *)0x0);
            }
            System_Text_StringBuilder__AppendLine(aSB,(MethodInfo *)0x0);
            System_Text_StringBuilder__Append(aSB,0x20,repeatCount,(MethodInfo *)0x0);
            __this_02 = (MethodInfo_362BED0 **)(__this->fields).m_List;
            if (((System_Text_StringBuilder_o *)__this_02 == (System_Text_StringBuilder_o *)0x0) ||
               (pIVar3 = System_Collections_Generic_List_object___get_Item
                                   ((System_Collections_Generic_List_object__o *)__this_02,iVar7,MethodInfo_JSONNode_get_Item)
               , pIVar3 == (Il2CppObject *)0x0)) goto label_0407db7c;
            (*pIVar3->klass->vtable[0x1f].methodPtr)
                      (pIVar3,aSB,(ulong)repeatCount,uVar4,1,pIVar3->klass->vtable[0x1f].method);
            iVar7 = iVar7 + 1;
          } while (iVar1 != iVar7);
        }
        else {
          iVar7 = 0;
          do {
            if (iVar7 != 0) {
              System_Text_StringBuilder__Append_3b048f0(aSB,0x2c,(MethodInfo *)0x0);
            }
            __this_02 = (MethodInfo_362BED0 **)(__this->fields).m_List;
            if (((System_Text_StringBuilder_o *)__this_02 == (System_Text_StringBuilder_o *)0x0) ||
               (pIVar3 = System_Collections_Generic_List_object___get_Item
                                   ((System_Collections_Generic_List_object__o *)__this_02,iVar7,MethodInfo_JSONNode_get_Item)
               , pIVar3 == (Il2CppObject *)0x0)) goto label_0407db7c;
            (*pIVar3->klass->vtable[0x1f].methodPtr)
                      (pIVar3,aSB,(ulong)repeatCount,uVar4,uVar6,pIVar3->klass->vtable[0x1f].method);
            iVar7 = iVar7 + 1;
          } while (iVar1 != iVar7);
        }
      }
      if (iStackY_48 == 1) {
        __this_02 = (MethodInfo_362BED0 **)aSB;
        __this_01 = System_Text_StringBuilder__AppendLine(aSB,(MethodInfo *)0x0);
        if (__this_01 == (System_Text_StringBuilder_o *)0x0) goto label_0407db7c;
        System_Text_StringBuilder__Append(__this_01,0x20,(int32_t)uVar5,(MethodInfo *)0x0);
      }
      System_Text_StringBuilder__Append_3b048f0(aSB,0x5d,(MethodInfo *)0x0);
      return;
    }
  }
label_0407db7c:
  il2cpp_runtime_helper_022b2c90();
  iVar1 = *(int *)&(((System_Text_StringBuilder_o *)__this_02)->fields).m_ChunkChars;
  if ((iVar1 != 1) && (iVar1 != -3)) {
    return;
  }
  if (g_data_057ac370 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    g_data_057ac370 = '\x01';
  }
  *(undefined4 *)&(((System_Text_StringBuilder_o *)__this_02)->fields).m_ChunkChars = 0xffffffff;
  __this_00.fields._index = (int)uVar5;
  __this_00.fields._version = (int)((ulong)uVar5 >> 0x20);
  __this_00.fields._list = (System_Collections_Generic_List_T__o *)uVar4;
  __this_00.fields._current = unaff_RBX;
  System_Collections_Generic_List_Enumerator_object___Dispose
            (__this_00,(MethodInfo_321A1C0 *)((long)__this_02 + 0x30));
  return;
}


// SimpleJSONFixed.JSONArray$$.ctor
// il2cpp: void SimpleJSONFixed_JSONArray___ctor (SimpleJSONFixed_JSONArray_o* __this, const MethodInfo* method);
// 0x407b730

void SimpleJSONFixed_JSONArray___ctor(SimpleJSONFixed_JSONArray_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_object__o *__this_00;
  
  if (g_data_057ac36e == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_SimpleJSONFixed_JSONNode);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_JSONNode);
    g_data_057ac36e = '\x01';
  }
  __this_00 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_JSONNode);
  System_Collections_Generic_List_object____ctor(__this_00,MethodInfo_List_1_SimpleJSONFixed_JSONNode);
  (__this->fields).m_List = (System_Collections_Generic_List_JSONNode__o *)__this_00;
  il2cpp_runtime_helper_022b4080(&__this->fields);
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


