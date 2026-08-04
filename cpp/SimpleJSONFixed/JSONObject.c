// Type: SimpleJSONFixed.JSONObject
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/SimpleJSONFixed/JSONObject.cs
// Prior real C# source (older reference): Assets/Scripts/Utility/SimpleJSON.cs
// --------------------------------

// SimpleJSONFixed.JSONObject.<>c__DisplayClass21_0$$.ctor
// il2cpp: void SimpleJSONFixed_JSONObject___c__DisplayClass21_0___ctor (SimpleJSONFixed_JSONObject___c__DisplayClass21_0_o* __this, const MethodInfo* method);
// 0x407e940

void SimpleJSONFixed_JSONObject___c__DisplayClass21_0___ctor
               (SimpleJSONFixed_JSONObject___c__DisplayClass21_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// SimpleJSONFixed.JSONObject.<>c__DisplayClass21_0$$<Remove>b__0
// il2cpp: bool SimpleJSONFixed_JSONObject___c__DisplayClass21_0___Remove_b__0 (SimpleJSONFixed_JSONObject___c__DisplayClass21_0_o* __this, System_Collections_Generic_KeyValuePair_string__JSONNode__o k, const MethodInfo* method);
// 0x407f210

bool_conflict
SimpleJSONFixed_JSONObject___c__DisplayClass21_0___Remove_b__0
          (SimpleJSONFixed_JSONObject___c__DisplayClass21_0_o *__this,
          System_Collections_Generic_KeyValuePair_string__JSONNode__o k,MethodInfo *method)

{
  Il2CppObject *b;
  bool_conflict bVar1;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_00;
  
  method_00 = (MethodInfo *)k.fields.value;
  if (g_data_057ac383 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode,k.fields.key);
    il2cpp_runtime_helper_023445d0(&MethodInfo_JSONNode_get_Value);
    g_data_057ac383 = '\x01';
    method_00 = extraout_RDX;
  }
  b = (Il2CppObject *)(__this->fields).aNode;
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    method_00 = extraout_RDX_00;
  }
  bVar1 = SimpleJSONFixed_JSONNode__op_Equality(k.fields.value,b,method_00);
  return bVar1;
}


// SimpleJSONFixed.JSONObject.<get_Children>d__27$$.ctor
// il2cpp: void SimpleJSONFixed_JSONObject__get_Children_d__27___ctor (SimpleJSONFixed_JSONObject__get_Children_d__27_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x407ed40

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
// 0x407f270

void SimpleJSONFixed_JSONObject__get_Children_d__27__System_IDisposable_Dispose
               (SimpleJSONFixed_JSONObject__get_Children_d__27_o *__this,MethodInfo *method)

{
  int iVar1;
  undefined1 in_stack_00000008 [40];
  
  iVar1 = (__this->fields).__1__state;
  if ((iVar1 != 1) && (iVar1 != -3)) {
    return;
  }
  if (g_data_057ac385 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    g_data_057ac385 = '\x01';
  }
  (__this->fields).__1__state = -1;
  System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose
            ((System_Collections_Generic_Dictionary_Enumerator_object__object__o)in_stack_00000008,
             (MethodInfo_3251280 *)&(__this->fields).__7__wrap1);
  return;
}


// SimpleJSONFixed.JSONObject.<get_Children>d__27$$MoveNext
// il2cpp: bool SimpleJSONFixed_JSONObject__get_Children_d__27__MoveNext (SimpleJSONFixed_JSONObject__get_Children_d__27_o* __this, const MethodInfo* method);
// 0x407f2c0

bool_conflict
SimpleJSONFixed_JSONObject__get_Children_d__27__MoveNext
          (SimpleJSONFixed_JSONObject__get_Children_d__27_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_Enumerator_string__JSONNode__o *method_00;
  int iVar1;
  SimpleJSONFixed_JSONObject_o *pSVar2;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  System_Collections_Generic_Dictionary_Enumerator_object__object__o __this_01;
  System_Collections_Generic_Dictionary_Enumerator_object__object__o __this_02;
  System_Collections_Generic_Dictionary_Enumerator_object__object__o __this_03;
  System_Collections_Generic_Dictionary_Enumerator_object__object__o __this_04;
  bool_conflict bVar3;
  bool_conflict extraout_EAX;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  SimpleJSONFixed_JSONNode_o *extraout_RDX;
  undefined1 auVar7 [12];
  undefined8 in_stack_ffffffffffffff88;
  undefined4 in_stack_ffffffffffffff90;
  undefined4 in_stack_ffffffffffffff94;
  int32_t in_stack_ffffffffffffff98;
  int32_t in_stack_ffffffffffffff9c;
  undefined4 in_stack_ffffffffffffffa0;
  undefined4 in_stack_ffffffffffffffa4;
  undefined4 in_stack_ffffffffffffffa8;
  undefined4 in_stack_ffffffffffffffac;
  undefined8 in_stack_ffffffffffffffb0;
  
  if (g_data_057ac384 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_Enumerator_System_String_Simple);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_KeyValuePair_2_System_String_SimpleJSONFixed_JSONNode_ge);
    il2cpp_runtime_helper_023445d0(&MethodInfo_JSONNode_get_Value);
    g_data_057ac384 = '\x01';
  }
  iVar1 = (__this->fields).__1__state;
  if (iVar1 == 1) {
label_0407f38a:
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
    bVar3 = System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext
                      (__this_01,(MethodInfo_3251160 *)method_00);
    if ((char)bVar3 == '\0') {
      if (g_data_057ac385 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
        g_data_057ac385 = '\x01';
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
      System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose
                (__this_02,(MethodInfo_3251280 *)method_00);
      (__this->fields).__7__wrap1.fields._current.fields.key = (Il2CppObject *)0x0;
      (__this->fields).__7__wrap1.fields._current.fields.value = (Il2CppObject *)0x0;
      (method_00->fields)._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
      (__this->fields).__7__wrap1.fields._version = 0;
      (__this->fields).__7__wrap1.fields._index = 0;
      *(undefined8 *)&(__this->fields).__7__wrap1.fields._getEnumeratorRetType = 0;
      return 0;
    }
    il2cpp_runtime_helper_03343020(method_00,MethodInfo_KeyValuePair_2_System_String_SimpleJSONFixed_JSONNode_ge);
    (__this->fields).__2__current = extraout_RDX;
    uVar4 = il2cpp_runtime_helper_022b4080(&(__this->fields).__2__current,extraout_RDX);
    (__this->fields).__1__state = 1;
    return (bool_conflict)CONCAT71((int7)((ulong)uVar4 >> 8),1);
  }
  if (iVar1 != 0) {
    return 0;
  }
  pSVar2 = (__this->fields).__4__this;
  (__this->fields).__1__state = -1;
  if (pSVar2 == (SimpleJSONFixed_JSONObject_o *)0x0) {
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)(pSVar2->fields).m_Dict;
    if (__this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      System_Collections_Generic_Dictionary_object__object___GetEnumerator
                ((System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)&stack0xffffffffffffff90,
                 __this_00,_DAT_055895f0);
      (__this->fields).__7__wrap1.fields._getEnumeratorRetType = (int32_t)in_stack_ffffffffffffffb0;
      *(int *)&(__this->fields).__7__wrap1.fields.field_0x24 = SUB84(in_stack_ffffffffffffffb0,4);
      *(undefined4 *)&(__this->fields).__7__wrap1.fields._current.fields.key = in_stack_ffffffffffffffa0;
      *(undefined4 *)((long)&(__this->fields).__7__wrap1.fields._current.fields.key + 4) =
           in_stack_ffffffffffffffa4;
      *(undefined4 *)&(__this->fields).__7__wrap1.fields._current.fields.value = in_stack_ffffffffffffffa8;
      *(undefined4 *)((long)&(__this->fields).__7__wrap1.fields._current.fields.value + 4) =
           in_stack_ffffffffffffffac;
      *(undefined4 *)&(__this->fields).__7__wrap1.fields._dictionary = in_stack_ffffffffffffff90;
      *(undefined4 *)((long)&(__this->fields).__7__wrap1.fields._dictionary + 4) = in_stack_ffffffffffffff94;
      (__this->fields).__7__wrap1.fields._version = in_stack_ffffffffffffff98;
      (__this->fields).__7__wrap1.fields._index = in_stack_ffffffffffffff9c;
      il2cpp_runtime_helper_022b4080(&(__this->fields).__7__wrap1,0);
      goto label_0407f38a;
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
    il2cpp_runtime_helper_022348d0(__this);
    uVar4 = il2cpp_runtime_helper_022fefe0(lVar6);
    if (lVar6 != 0) {
      iVar1 = (__this->fields).__1__state;
      if ((iVar1 == 1) || (iVar1 == -3)) {
        if (g_data_057ac385 == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
          g_data_057ac385 = '\x01';
        }
        (__this->fields).__1__state = -1;
        __this_03.fields._version = in_stack_ffffffffffffff90;
        __this_03.fields._dictionary =
             (System_Collections_Generic_Dictionary_TKey__TValue__o *)in_stack_ffffffffffffff88;
        __this_03.fields._index = in_stack_ffffffffffffff94;
        __this_03.fields._current.fields.key._0_4_ = in_stack_ffffffffffffff98;
        __this_03.fields._current.fields.key._4_4_ = in_stack_ffffffffffffff9c;
        __this_03.fields._current.fields.value._0_4_ = in_stack_ffffffffffffffa0;
        __this_03.fields._current.fields.value._4_4_ = in_stack_ffffffffffffffa4;
        __this_03.fields._getEnumeratorRetType = in_stack_ffffffffffffffa8;
        __this_03.fields._36_4_ = in_stack_ffffffffffffffac;
        System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose
                  (__this_03,(MethodInfo_3251280 *)&(__this->fields).__7__wrap1);
      }
      lVar6 = il2cpp_runtime_helper_022fefe0(lVar6);
      il2cpp_runtime_helper_01f66400();
      if (g_data_057ac385 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
        g_data_057ac385 = '\x01';
      }
      *(undefined4 *)(lVar6 + 0x10) = 0xffffffff;
      __this_04.fields._dictionary._4_4_ = in_stack_ffffffffffffff94;
      __this_04.fields._dictionary._0_4_ = in_stack_ffffffffffffff90;
      __this_04.fields._version = in_stack_ffffffffffffff98;
      __this_04.fields._index = in_stack_ffffffffffffff9c;
      __this_04.fields._current.fields.key._0_4_ = in_stack_ffffffffffffffa0;
      __this_04.fields._current.fields.key._4_4_ = in_stack_ffffffffffffffa4;
      __this_04.fields._current.fields.value._0_4_ = in_stack_ffffffffffffffa8;
      __this_04.fields._current.fields.value._4_4_ = in_stack_ffffffffffffffac;
      __this_04.fields._getEnumeratorRetType = (int32_t)in_stack_ffffffffffffffb0;
      __this_04.fields._36_4_ = SUB84(in_stack_ffffffffffffffb0,4);
      System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose
                (__this_04,(MethodInfo_3251280 *)(lVar6 + 0x30));
      return extraout_EAX;
    }
  }
  _Unwind_Resume(uVar4);
}


// SimpleJSONFixed.JSONObject.<get_Children>d__27$$<>m__Finally1
// il2cpp: void SimpleJSONFixed_JSONObject__get_Children_d__27____m__Finally1 (SimpleJSONFixed_JSONObject__get_Children_d__27_o* __this, const MethodInfo* method);
// 0x407f500

void SimpleJSONFixed_JSONObject__get_Children_d__27____m__Finally1
               (SimpleJSONFixed_JSONObject__get_Children_d__27_o *__this,MethodInfo *method)

{
  undefined1 in_stack_00000008 [40];
  
  if (g_data_057ac385 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    g_data_057ac385 = '\x01';
  }
  (__this->fields).__1__state = -1;
  System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose
            ((System_Collections_Generic_Dictionary_Enumerator_object__object__o)in_stack_00000008,
             (MethodInfo_3251280 *)&(__this->fields).__7__wrap1);
  return;
}


// SimpleJSONFixed.JSONObject.<get_Children>d__27$$System.Collections.Generic.IEnumerator<SimpleJSONFixed.JSONNode>.get_Current
// il2cpp: SimpleJSONFixed_JSONNode_o* SimpleJSONFixed_JSONObject__get_Children_d__27__System_Collections_Generic_IEnumerator_SimpleJSONFixed_JSONNode__get_Current (SimpleJSONFixed_JSONObject__get_Children_d__27_o* __this, const MethodInfo* method);
// 0x407f540

SimpleJSONFixed_JSONNode_o *
SimpleJSONFixed_JSONObject__get_Children_d__27__System_Collections_Generic_IEnumerator_SimpleJSONFixed_JSONNode__get_Current
          (SimpleJSONFixed_JSONObject__get_Children_d__27_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// SimpleJSONFixed.JSONObject.<get_Children>d__27$$System.Collections.IEnumerator.Reset
// il2cpp: void SimpleJSONFixed_JSONObject__get_Children_d__27__System_Collections_IEnumerator_Reset (SimpleJSONFixed_JSONObject__get_Children_d__27_o* __this, const MethodInfo* method);
// 0x407f550

void SimpleJSONFixed_JSONObject__get_Children_d__27__System_Collections_IEnumerator_Reset
               (SimpleJSONFixed_JSONObject__get_Children_d__27_o *__this,MethodInfo *method)

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


// SimpleJSONFixed.JSONObject.<get_Children>d__27$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* SimpleJSONFixed_JSONObject__get_Children_d__27__System_Collections_IEnumerator_get_Current (SimpleJSONFixed_JSONObject__get_Children_d__27_o* __this, const MethodInfo* method);
// 0x407f590

Il2CppObject *
SimpleJSONFixed_JSONObject__get_Children_d__27__System_Collections_IEnumerator_get_Current
          (SimpleJSONFixed_JSONObject__get_Children_d__27_o *__this,MethodInfo *method)

{
  return (Il2CppObject *)(__this->fields).__2__current;
}


// SimpleJSONFixed.JSONObject.<get_Children>d__27$$System.Collections.Generic.IEnumerable<SimpleJSONFixed.JSONNode>.GetEnumerator
// il2cpp: System_Collections_Generic_IEnumerator_JSONNode__o* SimpleJSONFixed_JSONObject__get_Children_d__27__System_Collections_Generic_IEnumerable_SimpleJSONFixed_JSONNode__GetEnumerator (SimpleJSONFixed_JSONObject__get_Children_d__27_o* __this, const MethodInfo* method);
// 0x407f5a0

System_Collections_IEnumerator_o *
SimpleJSONFixed_JSONObject__get_Children_d__27__System_Collections_Generic_IEnumerable_SimpleJSONFixed_JSONNode__GetEnumerator
          (SimpleJSONFixed_JSONObject__get_Children_d__27_o *__this,MethodInfo *method)

{
  int iVar1;
  int32_t iVar2;
  undefined8 in_RAX;
  Il2CppObject *__this_00;
  undefined8 unaff_RBX;
  SimpleJSONFixed_JSONObject__get_Children_d__27_o *pSVar3;
  SimpleJSONFixed_JSONObject__get_Children_d__27_o *unaff_R14;
  
  while( true ) {
    pSVar3 = __this;
    *(SimpleJSONFixed_JSONObject__get_Children_d__27_o **)((long)register0x00000020 + -8) = unaff_R14;
    *(undefined8 *)((long)register0x00000020 + -0x10) = unaff_RBX;
    *(undefined8 *)((long)register0x00000020 + -0x18) = in_RAX;
    if (g_data_057ac386 == '\0') {
      *(undefined8 *)((long)register0x00000020 + -0x20) = 0x407f5bc;
      il2cpp_runtime_helper_023445d0();
      g_data_057ac386 = '\x01';
    }
    if ((pSVar3->fields).__1__state == -2) {
      iVar1 = (pSVar3->fields).__l__initialThreadId;
      *(undefined8 *)((long)register0x00000020 + -0x20) = 0x407f5d5;
      iVar2 = System_Environment__get_CurrentManagedThreadId((MethodInfo *)0x0);
      if (iVar1 == iVar2) {
        (pSVar3->fields).__1__state = 0;
        return (System_Collections_IEnumerator_o *)pSVar3;
      }
    }
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x407f5f2;
    __this_00 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_get_Children_d__27);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x407f5ff;
    System_Object___ctor(__this_00,(MethodInfo *)0x0);
    *(undefined4 *)&__this_00[1].klass = 0;
    __this = (SimpleJSONFixed_JSONObject__get_Children_d__27_o *)0x0;
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x407f60d;
    iVar2 = System_Environment__get_CurrentManagedThreadId((MethodInfo *)0x0);
    *(int32_t *)&__this_00[2].klass = iVar2;
    if (__this_00 != (Il2CppObject *)0x0) break;
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x407f63c;
    in_RAX = il2cpp_runtime_helper_022b2c90();
    unaff_RBX = 0;
    register0x00000020 = (BADSPACEBASE *)((long)register0x00000020 + -0x18);
    unaff_R14 = pSVar3;
  }
  __this_00[2].monitor = (pSVar3->fields).__4__this;
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x407f629;
  il2cpp_runtime_helper_022b4080(&__this_00[2].monitor);
  return (System_Collections_IEnumerator_o *)__this_00;
}


// SimpleJSONFixed.JSONObject.<get_Children>d__27$$System.Collections.IEnumerable.GetEnumerator
// il2cpp: System_Collections_IEnumerator_o* SimpleJSONFixed_JSONObject__get_Children_d__27__System_Collections_IEnumerable_GetEnumerator (SimpleJSONFixed_JSONObject__get_Children_d__27_o* __this, const MethodInfo* method);
// 0x407f640

System_Collections_IEnumerator_o *
SimpleJSONFixed_JSONObject__get_Children_d__27__System_Collections_IEnumerable_GetEnumerator
          (SimpleJSONFixed_JSONObject__get_Children_d__27_o *__this,MethodInfo *method)

{
  int iVar1;
  int32_t iVar2;
  Il2CppObject *__this_00;
  undefined8 in_RAX;
  undefined8 unaff_RBX;
  SimpleJSONFixed_JSONObject__get_Children_d__27_o *pSVar3;
  SimpleJSONFixed_JSONObject__get_Children_d__27_o *unaff_R14;
  
  while( true ) {
    pSVar3 = __this;
    *(SimpleJSONFixed_JSONObject__get_Children_d__27_o **)((long)register0x00000020 + -8) = unaff_R14;
    *(undefined8 *)((long)register0x00000020 + -0x10) = unaff_RBX;
    *(undefined8 *)((long)register0x00000020 + -0x18) = in_RAX;
    if (g_data_057ac386 == '\0') {
      *(undefined8 *)((long)register0x00000020 + -0x20) = 0x407f5bc;
      il2cpp_runtime_helper_023445d0();
      g_data_057ac386 = '\x01';
    }
    if ((pSVar3->fields).__1__state == -2) {
      iVar1 = (pSVar3->fields).__l__initialThreadId;
      *(undefined8 *)((long)register0x00000020 + -0x20) = 0x407f5d5;
      iVar2 = System_Environment__get_CurrentManagedThreadId((MethodInfo *)0x0);
      if (iVar1 == iVar2) {
        (pSVar3->fields).__1__state = 0;
        return (System_Collections_IEnumerator_o *)pSVar3;
      }
    }
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x407f5f2;
    __this_00 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_get_Children_d__27);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x407f5ff;
    System_Object___ctor(__this_00,(MethodInfo *)0x0);
    *(undefined4 *)&__this_00[1].klass = 0;
    __this = (SimpleJSONFixed_JSONObject__get_Children_d__27_o *)0x0;
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x407f60d;
    iVar2 = System_Environment__get_CurrentManagedThreadId((MethodInfo *)0x0);
    *(int32_t *)&__this_00[2].klass = iVar2;
    if (__this_00 != (Il2CppObject *)0x0) break;
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x407f63c;
    in_RAX = il2cpp_runtime_helper_022b2c90();
    unaff_RBX = 0;
    register0x00000020 = (BADSPACEBASE *)((long)register0x00000020 + -0x18);
    unaff_R14 = pSVar3;
  }
  __this_00[2].monitor = (pSVar3->fields).__4__this;
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x407f629;
  il2cpp_runtime_helper_022b4080(&__this_00[2].monitor);
  return (System_Collections_IEnumerator_o *)__this_00;
}


// SimpleJSONFixed.JSONObject$$get_Inline
// il2cpp: bool SimpleJSONFixed_JSONObject__get_Inline (SimpleJSONFixed_JSONObject_o* __this, const MethodInfo* method);
// 0x407df40

bool_conflict SimpleJSONFixed_JSONObject__get_Inline(SimpleJSONFixed_JSONObject_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),(char)(__this->fields).field1_0x8);
}


// SimpleJSONFixed.JSONObject$$set_Inline
// il2cpp: void SimpleJSONFixed_JSONObject__set_Inline (SimpleJSONFixed_JSONObject_o* __this, bool value, const MethodInfo* method);
// 0x407df50

void SimpleJSONFixed_JSONObject__set_Inline
               (SimpleJSONFixed_JSONObject_o *__this,bool_conflict value,MethodInfo *method)

{
  *(char *)&(__this->fields).field1_0x8 = (char)value;
  return;
}


// SimpleJSONFixed.JSONObject$$get_Tag
// il2cpp: int32_t SimpleJSONFixed_JSONObject__get_Tag (SimpleJSONFixed_JSONObject_o* __this, const MethodInfo* method);
// 0x407df60

int32_t SimpleJSONFixed_JSONObject__get_Tag(SimpleJSONFixed_JSONObject_o *__this,MethodInfo *method)

{
  return 2;
}


// SimpleJSONFixed.JSONObject$$get_IsObject
// il2cpp: bool SimpleJSONFixed_JSONObject__get_IsObject (SimpleJSONFixed_JSONObject_o* __this, const MethodInfo* method);
// 0x407df70

bool_conflict
SimpleJSONFixed_JSONObject__get_IsObject(SimpleJSONFixed_JSONObject_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// SimpleJSONFixed.JSONObject$$GetEnumerator
// il2cpp: SimpleJSONFixed_JSONNode_Enumerator_o SimpleJSONFixed_JSONObject__GetEnumerator (SimpleJSONFixed_JSONObject_o* __this, const MethodInfo* method);
// 0x407df80

SimpleJSONFixed_JSONNode_Enumerator_o *
SimpleJSONFixed_JSONObject__GetEnumerator
          (SimpleJSONFixed_JSONNode_Enumerator_o *__return_storage_ptr__,SimpleJSONFixed_JSONObject_o *__this,
          MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *pSVar1;
  bool_conflict bVar2;
  Il2CppObject *pIVar3;
  SimpleJSONFixed_JSONNode_Enumerator_o *pSVar4;
  void *extraout_RDX;
  Il2CppClass *__this_00;
  Il2CppClass *pIVar5;
  Il2CppClass *pIVar6;
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o SStack_38;
  
  pIVar6 = (Il2CppClass *)__return_storage_ptr__;
  if (g_data_057ac372 == '\0') {
    pIVar6 = (Il2CppClass *)&MethodInfo_Dictionary_2_TKey_TValue_Enumerator_System_String_Simple;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac372 = '\x01';
  }
  __this_00 = (Il2CppClass *)(__this->fields).m_Dict;
  if (__this_00 != (Il2CppClass *)0x0) {
    System_Collections_Generic_Dictionary_object__object___GetEnumerator
              (&SStack_38,(System_Collections_Generic_Dictionary_object__object__o *)__this_00,_DAT_055895f0);
    *(undefined8 *)&__return_storage_ptr__->fields = 0;
    (__return_storage_ptr__->fields).m_Object.fields._dictionary =
         (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
    (__return_storage_ptr__->fields).m_Array.fields._list = (System_Collections_Generic_List_T__o *)0x0;
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
    *(undefined4 *)((long)&(__return_storage_ptr__->fields).m_Object.fields._current.fields.key + 4) =
         SStack_38.fields._current.fields.key._4_4_;
    *(undefined4 *)&(__return_storage_ptr__->fields).m_Object.fields._current.fields.value =
         SStack_38.fields._current.fields.value._0_4_;
    *(undefined4 *)((long)&(__return_storage_ptr__->fields).m_Object.fields._current.fields.value + 4) =
         SStack_38.fields._current.fields.value._4_4_;
    (__return_storage_ptr__->fields).m_Object.fields._getEnumeratorRetType =
         SStack_38.fields._getEnumeratorRetType;
    *(undefined4 *)&(__return_storage_ptr__->fields).m_Object.fields.field_0x24 = SStack_38.fields._36_4_;
    il2cpp_runtime_helper_022b4080(&(__return_storage_ptr__->fields).m_Object,0);
    (__return_storage_ptr__->fields).m_Array.fields._list = (System_Collections_Generic_List_T__o *)0x0;
    (__return_storage_ptr__->fields).m_Array.fields._index = 0;
    (__return_storage_ptr__->fields).m_Array.fields._version = 0;
    (__return_storage_ptr__->fields).m_Array.fields._current = (SimpleJSONFixed_JSONNode_o *)0x0;
    return __return_storage_ptr__;
  }
  il2cpp_runtime_helper_022b2c90();
  pIVar5 = __this_00;
  if (g_data_057ac373 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    il2cpp_runtime_helper_023445d0(&MethodInfo_JSONNode_get_Item);
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONLazyCreator);
    g_data_057ac373 = '\x01';
  }
  pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(pIVar6->_1).name;
  if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    pIVar5 = __this_00;
    bVar2 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                      (pSVar1,(Il2CppObject *)__this_00,MethodInfo_Boolean_ContainsKey);
    if ((char)bVar2 == '\0') {
      pIVar3 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_JSONLazyCreator);
      if (g_data_057ac39f == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
        g_data_057ac39f = '\x01';
      }
      if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      System_Object___ctor(pIVar3,(MethodInfo *)0x0);
      pIVar3[1].klass = pIVar6;
      il2cpp_runtime_helper_022b4080(pIVar3 + 1,pIVar6);
      pIVar3[1].monitor = __this_00;
      il2cpp_runtime_helper_022b4080(&pIVar3[1].monitor,__this_00);
      return (SimpleJSONFixed_JSONNode_Enumerator_o *)pIVar3;
    }
    pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(pIVar6->_1).name;
    if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      pIVar3 = System_Collections_Generic_Dictionary_object__object___get_Item
                         (pSVar1,(Il2CppObject *)__this_00,MethodInfo_JSONNode_get_Item);
      return (SimpleJSONFixed_JSONNode_Enumerator_o *)pIVar3;
    }
  }
  pIVar3 = (Il2CppObject *)0x0;
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac39f == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    g_data_057ac39f = '\x01';
  }
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  System_Object___ctor(pIVar3,(MethodInfo *)0x0);
  pIVar3[1].klass = pIVar5;
  il2cpp_runtime_helper_022b4080(pIVar3 + 1,pIVar5);
  pIVar3[1].monitor = extraout_RDX;
  pSVar4 = (SimpleJSONFixed_JSONNode_Enumerator_o *)il2cpp_runtime_helper_022b4080(&pIVar3[1].monitor,extraout_RDX);
  return pSVar4;
}


// SimpleJSONFixed.JSONObject$$get_Item
// il2cpp: SimpleJSONFixed_JSONNode_o* SimpleJSONFixed_JSONObject__get_Item (SimpleJSONFixed_JSONObject_o* __this, System_String_o* aKey, const MethodInfo* method);
// 0x407e030

SimpleJSONFixed_JSONNode_o *
SimpleJSONFixed_JSONObject__get_Item
          (SimpleJSONFixed_JSONObject_o *__this,System_String_o *aKey,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *pSVar1;
  bool_conflict bVar2;
  Il2CppObject *pIVar3;
  SimpleJSONFixed_JSONNode_o *pSVar4;
  void *extraout_RDX;
  Il2CppClass *pIVar5;
  
  pIVar5 = (Il2CppClass *)aKey;
  if (g_data_057ac373 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    il2cpp_runtime_helper_023445d0(&MethodInfo_JSONNode_get_Item);
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONLazyCreator);
    g_data_057ac373 = '\x01';
  }
  pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).m_Dict;
  if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    pIVar5 = (Il2CppClass *)aKey;
    bVar2 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                      (pSVar1,(Il2CppObject *)aKey,MethodInfo_Boolean_ContainsKey);
    if ((char)bVar2 == '\0') {
      pIVar3 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_JSONLazyCreator);
      if (g_data_057ac39f == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
        g_data_057ac39f = '\x01';
      }
      if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      System_Object___ctor(pIVar3,(MethodInfo *)0x0);
      pIVar3[1].klass = (Il2CppClass *)__this;
      il2cpp_runtime_helper_022b4080(pIVar3 + 1,__this);
      pIVar3[1].monitor = aKey;
      il2cpp_runtime_helper_022b4080(&pIVar3[1].monitor,aKey);
      return (SimpleJSONFixed_JSONNode_o *)pIVar3;
    }
    pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).m_Dict;
    if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      pIVar3 = System_Collections_Generic_Dictionary_object__object___get_Item
                         (pSVar1,(Il2CppObject *)aKey,MethodInfo_JSONNode_get_Item);
      return (SimpleJSONFixed_JSONNode_o *)pIVar3;
    }
  }
  pIVar3 = (Il2CppObject *)0x0;
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac39f == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    g_data_057ac39f = '\x01';
  }
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  System_Object___ctor(pIVar3,(MethodInfo *)0x0);
  pIVar3[1].klass = pIVar5;
  il2cpp_runtime_helper_022b4080(pIVar3 + 1,pIVar5);
  pIVar3[1].monitor = extraout_RDX;
  pSVar4 = (SimpleJSONFixed_JSONNode_o *)il2cpp_runtime_helper_022b4080(&pIVar3[1].monitor,extraout_RDX);
  return pSVar4;
}


// SimpleJSONFixed.JSONObject$$set_Item
// il2cpp: void SimpleJSONFixed_JSONObject__set_Item (SimpleJSONFixed_JSONObject_o* __this, System_String_o* aKey, SimpleJSONFixed_JSONNode_o* value, const MethodInfo* method);
// 0x407e1c0

void SimpleJSONFixed_JSONObject__set_Item
               (SimpleJSONFixed_JSONObject_o *__this,System_String_o *aKey,SimpleJSONFixed_JSONNode_o *value,
               MethodInfo *method)

{
  char cVar1;
  bool_conflict bVar2;
  int32_t iVar3;
  MethodInfo *pMVar4;
  MethodInfo *pMVar5;
  Il2CppClass *pIVar6;
  Il2CppObject *__this_00;
  System_Func_TSource__bool__o *predicate;
  System_Collections_Generic_IEnumerable_TSource__o *pSVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *a;
  MethodInfo *extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
  MethodInfo *a_00;
  MethodInfo *extraout_RDX_03;
  MethodInfo *extraout_RDX_04;
  int iVar10;
  System_String_o *pSVar11;
  System_String_o *pSVar12;
  Il2CppClass *pIVar13;
  long lVar14;
  System_Collections_Generic_Dictionary_object__object__o *pSVar15;
  char *pcVar16;
  MethodInfo *method_00;
  System_Int32_array *pSVar17;
  System_Collections_Generic_KeyValuePair_object__object__o SVar18;
  undefined1 auVar19 [12];
  System_Guid_o __this_01;
  System_Guid_Fields SStack_88;
  char *pcStack_70;
  
  pMVar4 = (MethodInfo *)value;
  if (g_data_057ac374 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNull);
    g_data_057ac374 = '\x01';
    pMVar4 = extraout_RDX;
  }
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    pMVar4 = extraout_RDX_00;
  }
  pSVar11 = (System_String_o *)0x0;
  bVar2 = SimpleJSONFixed_JSONNode__op_Equality(value,(Il2CppObject *)0x0,pMVar4);
  if ((char)bVar2 != '\0') {
    pMVar4 = TypeInfo_JSONNull;
    if (*(int *)((long)&TypeInfo_JSONNull[2].parameters + 4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    value = (SimpleJSONFixed_JSONNode_o *)SimpleJSONFixed_JSONNull__CreateOrGet(pMVar4);
  }
  pSVar15 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).m_Dict;
  if (pSVar15 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    pSVar11 = aKey;
    bVar2 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                      (pSVar15,(Il2CppObject *)aKey,MethodInfo_Boolean_ContainsKey);
    pSVar15 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).m_Dict;
    if (pSVar15 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      if ((char)bVar2 != '\0') {
        System_Collections_Generic_Dictionary_object__object___set_Item
                  (pSVar15,(Il2CppObject *)aKey,(Il2CppObject *)value,_DAT_05589620);
        return;
      }
      System_Collections_Generic_Dictionary_object__object___Add
                (pSVar15,(Il2CppObject *)aKey,(Il2CppObject *)value,MethodInfo_Void_Add);
      return;
    }
  }
  lVar14 = 0;
  il2cpp_runtime_helper_022b2c90();
  pSVar12 = pSVar11;
  if (g_data_057ac375 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&MethodInfo_KeyValuePair_2_System_String_SimpleJSONFixed_JSONNode_El);
    il2cpp_runtime_helper_023445d0(&MethodInfo_JSONNode_get_Value);
    g_data_057ac375 = '\x01';
  }
  iVar10 = (int)pSVar11;
  if (iVar10 < 0) {
    return;
  }
  pSVar15 = *(System_Collections_Generic_Dictionary_object__object__o **)(lVar14 + 0x10);
  if (pSVar15 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    iVar3 = System_Collections_Generic_Dictionary_object__object___get_Count(pSVar15,MethodInfo_Int32_get_Count);
    if (iVar3 <= iVar10) {
      return;
    }
    System_Linq_Enumerable__ElementAt_KeyValuePair_object__object__
              (*(System_Collections_Generic_IEnumerable_TSource__o **)(lVar14 + 0x10),iVar10,MethodInfo_KeyValuePair_2_System_String_SimpleJSONFixed_JSONNode_El);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pMVar4 = a;
  if (g_data_057ac376 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_KeyValuePair_2_System_String_SimpleJSONFixed_JSONNode_El);
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNull);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Key);
    g_data_057ac376 = '\x01';
    pMVar4 = extraout_RDX_01;
  }
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    pMVar4 = extraout_RDX_02;
  }
  pIVar6 = (Il2CppClass *)0x0;
  bVar2 = SimpleJSONFixed_JSONNode__op_Equality((SimpleJSONFixed_JSONNode_o *)a,(Il2CppObject *)0x0,pMVar4);
  pMVar4 = a;
  if ((char)bVar2 != '\0') {
    pMVar4 = TypeInfo_JSONNull;
    if (*(int *)((long)&TypeInfo_JSONNull[2].parameters + 4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pMVar4 = (MethodInfo *)SimpleJSONFixed_JSONNull__CreateOrGet(pMVar4);
  }
  iVar10 = (int)pSVar12;
  if (iVar10 < 0) {
    return;
  }
  pSVar17 = (pSVar15->fields)._buckets;
  if (pSVar17 != (System_Int32_array *)0x0) {
    iVar3 = System_Collections_Generic_Dictionary_object__object___get_Count
                      ((System_Collections_Generic_Dictionary_object__object__o *)pSVar17,MethodInfo_Int32_get_Count);
    if (iVar3 <= iVar10) {
      return;
    }
    pIVar6 = (Il2CppClass *)((ulong)pSVar12 & 0xffffffff);
    SVar18 = System_Linq_Enumerable__ElementAt_KeyValuePair_object__object__
                       ((System_Collections_Generic_IEnumerable_TSource__o *)(pSVar15->fields)._buckets,iVar10
                        ,MethodInfo_KeyValuePair_2_System_String_SimpleJSONFixed_JSONNode_El);
    pSVar17 = (pSVar15->fields)._buckets;
    if (pSVar17 != (System_Int32_array *)0x0) {
      System_Collections_Generic_Dictionary_object__object___set_Item
                ((System_Collections_Generic_Dictionary_object__object__o *)pSVar17,SVar18.fields.key,
                 (Il2CppObject *)pMVar4,_DAT_05589620);
      return;
    }
  }
  pcVar16 = (char *)0x0;
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac377 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    g_data_057ac377 = '\x01';
  }
  pSVar15 = *(System_Collections_Generic_Dictionary_object__object__o **)(pcVar16 + 0x10);
  if (pSVar15 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    System_Collections_Generic_Dictionary_object__object___get_Count(pSVar15,MethodInfo_Int32_get_Count);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pMVar4 = (MethodInfo *)&SStack_88;
  pMVar5 = a_00;
  pcStack_70 = pcVar16;
  if (g_data_057ac378 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNull);
    g_data_057ac378 = '\x01';
    pMVar5 = extraout_RDX_03;
  }
  SStack_88 = (System_Guid_Fields)ZEXT816(0);
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    pMVar5 = extraout_RDX_04;
  }
  pIVar13 = (Il2CppClass *)0x0;
  method_00 = a_00;
  bVar2 = SimpleJSONFixed_JSONNode__op_Equality((SimpleJSONFixed_JSONNode_o *)a_00,(Il2CppObject *)0x0,pMVar5)
  ;
  pMVar5 = a_00;
  if ((char)bVar2 != '\0') {
    method_00 = TypeInfo_JSONNull;
    if (*(int *)((long)&TypeInfo_JSONNull[2].parameters + 4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pMVar5 = (MethodInfo *)SimpleJSONFixed_JSONNull__CreateOrGet(method_00);
  }
  pSVar17 = (pSVar15->fields)._buckets;
  if (pIVar6 == (Il2CppClass *)0x0) {
    SStack_88 = (System_Guid_Fields)System_Guid__NewGuid((MethodInfo *)0x0);
    pIVar13 = (Il2CppClass *)0x0;
    __this_01.fields._d = '\0';
    __this_01.fields._e = '\0';
    __this_01.fields._f = '\0';
    __this_01.fields._g = '\0';
    __this_01.fields._h = '\0';
    __this_01.fields._i = '\0';
    __this_01.fields._j = '\0';
    __this_01.fields._k = '\0';
    __this_01.fields._0_8_ = &SStack_88;
    pIVar6 = (Il2CppClass *)System_Guid__ToString(__this_01,SStack_88._8_8_);
    if (pSVar17 != (System_Int32_array *)0x0) {
label_0407e5e6:
      System_Collections_Generic_Dictionary_object__object___Add
                ((System_Collections_Generic_Dictionary_object__object__o *)pSVar17,(Il2CppObject *)pIVar6,
                 (Il2CppObject *)pMVar5,MethodInfo_Void_Add);
      return;
    }
  }
  else {
    pMVar4 = method_00;
    if (pSVar17 != (System_Int32_array *)0x0) {
      pIVar13 = pIVar6;
      bVar2 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                        ((System_Collections_Generic_Dictionary_object__object__o *)pSVar17,
                         (Il2CppObject *)pIVar6,MethodInfo_Boolean_ContainsKey);
      pSVar17 = (pSVar15->fields)._buckets;
      pMVar4 = (MethodInfo *)0x0;
      if (pSVar17 != (System_Int32_array *)0x0) {
        if ((char)bVar2 != '\0') {
          System_Collections_Generic_Dictionary_object__object___set_Item
                    ((System_Collections_Generic_Dictionary_object__object__o *)pSVar17,(Il2CppObject *)pIVar6
                     ,(Il2CppObject *)pMVar5,_DAT_05589620);
          return;
        }
        goto label_0407e5e6;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pIVar6 = pIVar13;
  if (g_data_057ac379 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Remove);
    il2cpp_runtime_helper_023445d0(&MethodInfo_JSONNode_get_Item);
    g_data_057ac379 = '\x01';
  }
  if ((System_Collections_Generic_Dictionary_object__object__o *)pMVar4->invoker_method !=
      (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    pIVar6 = pIVar13;
    bVar2 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                      ((System_Collections_Generic_Dictionary_object__object__o *)pMVar4->invoker_method,
                       (Il2CppObject *)pIVar13,MethodInfo_Boolean_ContainsKey);
    if ((char)bVar2 == '\0') {
      return;
    }
    if ((System_Collections_Generic_Dictionary_object__object__o *)pMVar4->invoker_method !=
        (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      pIVar6 = pIVar13;
      System_Collections_Generic_Dictionary_object__object___get_Item
                ((System_Collections_Generic_Dictionary_object__object__o *)pMVar4->invoker_method,
                 (Il2CppObject *)pIVar13,MethodInfo_JSONNode_get_Item);
      if ((System_Collections_Generic_Dictionary_object__object__o *)pMVar4->invoker_method !=
          (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
        System_Collections_Generic_Dictionary_object__object___Remove
                  ((System_Collections_Generic_Dictionary_object__object__o *)pMVar4->invoker_method,
                   (Il2CppObject *)pIVar13,MethodInfo_Boolean_Remove);
        return;
      }
    }
  }
  lVar14 = 0;
  il2cpp_runtime_helper_022b2c90();
  pIVar13 = pIVar6;
  if (g_data_057ac37a == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Remove);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&MethodInfo_KeyValuePair_2_System_String_SimpleJSONFixed_JSONNode_El);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Key);
    il2cpp_runtime_helper_023445d0(&MethodInfo_JSONNode_get_Value);
    g_data_057ac37a = '\x01';
  }
  iVar10 = (int)pIVar6;
  if (iVar10 < 0) {
    return;
  }
  if (*(System_Collections_Generic_Dictionary_object__object__o **)(lVar14 + 0x10) !=
      (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    iVar3 = System_Collections_Generic_Dictionary_object__object___get_Count
                      (*(System_Collections_Generic_Dictionary_object__object__o **)(lVar14 + 0x10),
                       MethodInfo_Int32_get_Count);
    if (iVar3 <= iVar10) {
      return;
    }
    pIVar13 = (Il2CppClass *)((ulong)pIVar6 & 0xffffffff);
    SVar18 = System_Linq_Enumerable__ElementAt_KeyValuePair_object__object__
                       (*(System_Collections_Generic_IEnumerable_TSource__o **)(lVar14 + 0x10),iVar10,
                        MethodInfo_KeyValuePair_2_System_String_SimpleJSONFixed_JSONNode_El);
    if (*(System_Collections_Generic_Dictionary_object__object__o **)(lVar14 + 0x10) !=
        (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      System_Collections_Generic_Dictionary_object__object___Remove
                (*(System_Collections_Generic_Dictionary_object__object__o **)(lVar14 + 0x10),
                 SVar18.fields.key,MethodInfo_Boolean_Remove);
      return;
    }
  }
  lVar14 = 0;
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac37b == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Remove);
    il2cpp_runtime_helper_023445d0(&MethodInfo_KeyValuePair_2_System_String_SimpleJSONFixed_JSONNode_Fi);
    il2cpp_runtime_helper_023445d0(&MethodInfo_IEnumerable_1_KeyValuePair_2_System_String_SimpleJSONFix);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_KeyValuePair_string_JSONNode_bool);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Key);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Remove_b__0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass21_0);
    g_data_057ac37b = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass21_0);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 == (Il2CppObject *)0x0) {
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    __this_00[1].klass = pIVar13;
    il2cpp_runtime_helper_022b4080(__this_00 + 1,pIVar13);
    pSVar7 = *(System_Collections_Generic_IEnumerable_TSource__o **)(lVar14 + 0x10);
    predicate = (System_Func_TSource__bool__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_KeyValuePair_string_JSONNode_bool);
    System_Func_KeyValuePair_object__object___bool____ctor();
    pSVar7 = System_Linq_Enumerable__Where_KeyValuePair_object__object__(pSVar7,predicate,MethodInfo_IEnumerable_1_KeyValuePair_2_System_String_SimpleJSONFix);
    SVar18 = System_Linq_Enumerable__First_KeyValuePair_object__object__(pSVar7,MethodInfo_KeyValuePair_2_System_String_SimpleJSONFixed_JSONNode_Fi);
    if (*(System_Collections_Generic_Dictionary_object__object__o **)(lVar14 + 0x10) !=
        (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      System_Collections_Generic_Dictionary_object__object___Remove
                (*(System_Collections_Generic_Dictionary_object__object__o **)(lVar14 + 0x10),
                 SVar18.fields.key,MethodInfo_Boolean_Remove);
      return;
    }
  }
  auVar19 = il2cpp_runtime_helper_022b2c90();
  if (auVar19._8_4_ == 1) {
    puVar8 = (undefined8 *)__cxa_begin_catch(auVar19._0_8_);
    cVar1 = il2cpp_runtime_helper_0233e000(g_data_057b9b80,*(undefined8 *)*puVar8);
    if (cVar1 != '\0') {
      __cxa_end_catch();
      return;
    }
    puVar9 = (undefined8 *)__cxa_allocate_exception(8);
    *puVar9 = *puVar8;
    __cxa_throw(puVar9,&PTR_PTR_05215060,0);
  }
  _Unwind_Resume(auVar19._0_8_);
}


// SimpleJSONFixed.JSONObject$$get_Item
// il2cpp: SimpleJSONFixed_JSONNode_o* SimpleJSONFixed_JSONObject__get_Item (SimpleJSONFixed_JSONObject_o* __this, int32_t aIndex, const MethodInfo* method);
// 0x407e2d0

SimpleJSONFixed_JSONNode_o *
SimpleJSONFixed_JSONObject__get_Item_3f7e2d0
          (SimpleJSONFixed_JSONObject_o *__this,int32_t aIndex,MethodInfo *method)

{
  char cVar1;
  int32_t iVar2;
  bool_conflict bVar3;
  undefined4 extraout_var;
  MethodInfo *pMVar4;
  undefined4 extraout_var_00;
  SimpleJSONFixed_JSONNode_o *extraout_RAX;
  undefined4 extraout_var_01;
  SimpleJSONFixed_JSONNode_o *extraout_RAX_00;
  Il2CppClass *pIVar5;
  SimpleJSONFixed_JSONNode_o *extraout_RAX_01;
  Il2CppObject *pIVar6;
  System_Func_TSource__bool__o *predicate;
  System_Collections_Generic_IEnumerable_TSource__o *pSVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  MethodInfo *a;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *pMVar10;
  MethodInfo *a_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
  int iVar11;
  ulong uVar12;
  Il2CppClass *pIVar13;
  System_Collections_Generic_Dictionary_object__object__o *pSVar14;
  char *pcVar15;
  MethodInfo *method_00;
  System_Int32_array *pSVar16;
  long lVar17;
  System_Collections_Generic_KeyValuePair_object__object__o SVar18;
  undefined1 auVar19 [12];
  System_Guid_o __this_00;
  System_Guid_Fields SStack_70;
  char *pcStack_58;
  
  uVar12 = (ulong)(uint)aIndex;
  if (g_data_057ac375 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&MethodInfo_KeyValuePair_2_System_String_SimpleJSONFixed_JSONNode_El);
    il2cpp_runtime_helper_023445d0(&MethodInfo_JSONNode_get_Value);
    g_data_057ac375 = '\x01';
  }
  if (aIndex < 0) {
    return (SimpleJSONFixed_JSONNode_o *)0x0;
  }
  pSVar14 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).m_Dict;
  if (pSVar14 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    iVar2 = System_Collections_Generic_Dictionary_object__object___get_Count(pSVar14,MethodInfo_Int32_get_Count);
    if (aIndex < iVar2) {
      SVar18 = System_Linq_Enumerable__ElementAt_KeyValuePair_object__object__
                         ((System_Collections_Generic_IEnumerable_TSource__o *)(__this->fields).m_Dict,aIndex,
                          MethodInfo_KeyValuePair_2_System_String_SimpleJSONFixed_JSONNode_El);
      return (SimpleJSONFixed_JSONNode_o *)SVar18.fields.value;
    }
    return (SimpleJSONFixed_JSONNode_o *)0x0;
  }
  il2cpp_runtime_helper_022b2c90();
  pMVar10 = a;
  if (g_data_057ac376 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_KeyValuePair_2_System_String_SimpleJSONFixed_JSONNode_El);
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNull);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Key);
    g_data_057ac376 = '\x01';
    pMVar10 = extraout_RDX;
  }
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    pMVar10 = extraout_RDX_00;
  }
  pIVar5 = (Il2CppClass *)0x0;
  bVar3 = SimpleJSONFixed_JSONNode__op_Equality((SimpleJSONFixed_JSONNode_o *)a,(Il2CppObject *)0x0,pMVar10);
  pMVar4 = (MethodInfo *)CONCAT44(extraout_var,bVar3);
  pMVar10 = a;
  if ((char)bVar3 != '\0') {
    pMVar10 = TypeInfo_JSONNull;
    if (*(int *)((long)&TypeInfo_JSONNull[2].parameters + 4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pMVar4 = (MethodInfo *)SimpleJSONFixed_JSONNull__CreateOrGet(pMVar10);
    pMVar10 = pMVar4;
  }
  iVar11 = (int)uVar12;
  if (iVar11 < 0) {
    return (SimpleJSONFixed_JSONNode_o *)pMVar4;
  }
  pSVar16 = (pSVar14->fields)._buckets;
  if (pSVar16 != (System_Int32_array *)0x0) {
    iVar2 = System_Collections_Generic_Dictionary_object__object___get_Count
                      ((System_Collections_Generic_Dictionary_object__object__o *)pSVar16,MethodInfo_Int32_get_Count);
    if (iVar2 <= iVar11) {
      return (SimpleJSONFixed_JSONNode_o *)CONCAT44(extraout_var_00,iVar2);
    }
    pIVar5 = (Il2CppClass *)(uVar12 & 0xffffffff);
    SVar18 = System_Linq_Enumerable__ElementAt_KeyValuePair_object__object__
                       ((System_Collections_Generic_IEnumerable_TSource__o *)(pSVar14->fields)._buckets,iVar11
                        ,MethodInfo_KeyValuePair_2_System_String_SimpleJSONFixed_JSONNode_El);
    pSVar16 = (pSVar14->fields)._buckets;
    if (pSVar16 != (System_Int32_array *)0x0) {
      System_Collections_Generic_Dictionary_object__object___set_Item
                ((System_Collections_Generic_Dictionary_object__object__o *)pSVar16,SVar18.fields.key,
                 (Il2CppObject *)pMVar10,_DAT_05589620);
      return extraout_RAX;
    }
  }
  pcVar15 = (char *)0x0;
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac377 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    g_data_057ac377 = '\x01';
  }
  pSVar14 = *(System_Collections_Generic_Dictionary_object__object__o **)(pcVar15 + 0x10);
  if (pSVar14 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    iVar2 = System_Collections_Generic_Dictionary_object__object___get_Count(pSVar14,MethodInfo_Int32_get_Count);
    return (SimpleJSONFixed_JSONNode_o *)CONCAT44(extraout_var_01,iVar2);
  }
  il2cpp_runtime_helper_022b2c90();
  pMVar10 = (MethodInfo *)&SStack_70;
  pMVar4 = a_00;
  pcStack_58 = pcVar15;
  if (g_data_057ac378 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNull);
    g_data_057ac378 = '\x01';
    pMVar4 = extraout_RDX_01;
  }
  SStack_70 = (System_Guid_Fields)ZEXT816(0);
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    pMVar4 = extraout_RDX_02;
  }
  pIVar13 = (Il2CppClass *)0x0;
  method_00 = a_00;
  bVar3 = SimpleJSONFixed_JSONNode__op_Equality((SimpleJSONFixed_JSONNode_o *)a_00,(Il2CppObject *)0x0,pMVar4)
  ;
  pMVar4 = a_00;
  if ((char)bVar3 != '\0') {
    method_00 = TypeInfo_JSONNull;
    if (*(int *)((long)&TypeInfo_JSONNull[2].parameters + 4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pMVar4 = (MethodInfo *)SimpleJSONFixed_JSONNull__CreateOrGet(method_00);
  }
  pSVar16 = (pSVar14->fields)._buckets;
  if (pIVar5 == (Il2CppClass *)0x0) {
    SStack_70 = (System_Guid_Fields)System_Guid__NewGuid((MethodInfo *)0x0);
    pIVar13 = (Il2CppClass *)0x0;
    __this_00.fields._d = '\0';
    __this_00.fields._e = '\0';
    __this_00.fields._f = '\0';
    __this_00.fields._g = '\0';
    __this_00.fields._h = '\0';
    __this_00.fields._i = '\0';
    __this_00.fields._j = '\0';
    __this_00.fields._k = '\0';
    __this_00.fields._0_8_ = &SStack_70;
    pIVar5 = (Il2CppClass *)System_Guid__ToString(__this_00,SStack_70._8_8_);
    if (pSVar16 != (System_Int32_array *)0x0) {
label_0407e5e6:
      System_Collections_Generic_Dictionary_object__object___Add
                ((System_Collections_Generic_Dictionary_object__object__o *)pSVar16,(Il2CppObject *)pIVar5,
                 (Il2CppObject *)pMVar4,MethodInfo_Void_Add);
      return extraout_RAX_01;
    }
  }
  else {
    pMVar10 = method_00;
    if (pSVar16 != (System_Int32_array *)0x0) {
      pIVar13 = pIVar5;
      bVar3 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                        ((System_Collections_Generic_Dictionary_object__object__o *)pSVar16,
                         (Il2CppObject *)pIVar5,MethodInfo_Boolean_ContainsKey);
      pSVar16 = (pSVar14->fields)._buckets;
      pMVar10 = (MethodInfo *)0x0;
      if (pSVar16 != (System_Int32_array *)0x0) {
        if ((char)bVar3 != '\0') {
          System_Collections_Generic_Dictionary_object__object___set_Item
                    ((System_Collections_Generic_Dictionary_object__object__o *)pSVar16,(Il2CppObject *)pIVar5
                     ,(Il2CppObject *)pMVar4,_DAT_05589620);
          return extraout_RAX_00;
        }
        goto label_0407e5e6;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pIVar5 = pIVar13;
  if (g_data_057ac379 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Remove);
    il2cpp_runtime_helper_023445d0(&MethodInfo_JSONNode_get_Item);
    g_data_057ac379 = '\x01';
  }
  if ((System_Collections_Generic_Dictionary_object__object__o *)pMVar10->invoker_method !=
      (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    pIVar5 = pIVar13;
    bVar3 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                      ((System_Collections_Generic_Dictionary_object__object__o *)pMVar10->invoker_method,
                       (Il2CppObject *)pIVar13,MethodInfo_Boolean_ContainsKey);
    if ((char)bVar3 == '\0') {
      return (SimpleJSONFixed_JSONNode_o *)0x0;
    }
    if ((System_Collections_Generic_Dictionary_object__object__o *)pMVar10->invoker_method !=
        (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      pIVar5 = pIVar13;
      pIVar6 = System_Collections_Generic_Dictionary_object__object___get_Item
                         ((System_Collections_Generic_Dictionary_object__object__o *)pMVar10->invoker_method,
                          (Il2CppObject *)pIVar13,MethodInfo_JSONNode_get_Item);
      if ((System_Collections_Generic_Dictionary_object__object__o *)pMVar10->invoker_method !=
          (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
        System_Collections_Generic_Dictionary_object__object___Remove
                  ((System_Collections_Generic_Dictionary_object__object__o *)pMVar10->invoker_method,
                   (Il2CppObject *)pIVar13,MethodInfo_Boolean_Remove);
        return (SimpleJSONFixed_JSONNode_o *)pIVar6;
      }
    }
  }
  lVar17 = 0;
  il2cpp_runtime_helper_022b2c90();
  pIVar13 = pIVar5;
  if (g_data_057ac37a == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Remove);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&MethodInfo_KeyValuePair_2_System_String_SimpleJSONFixed_JSONNode_El);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Key);
    il2cpp_runtime_helper_023445d0(&MethodInfo_JSONNode_get_Value);
    g_data_057ac37a = '\x01';
  }
  iVar11 = (int)pIVar5;
  if (iVar11 < 0) {
    return (SimpleJSONFixed_JSONNode_o *)0x0;
  }
  if (*(System_Collections_Generic_Dictionary_object__object__o **)(lVar17 + 0x10) !=
      (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    iVar2 = System_Collections_Generic_Dictionary_object__object___get_Count
                      (*(System_Collections_Generic_Dictionary_object__object__o **)(lVar17 + 0x10),
                       MethodInfo_Int32_get_Count);
    if (iVar2 <= iVar11) {
      return (SimpleJSONFixed_JSONNode_o *)0x0;
    }
    pIVar13 = (Il2CppClass *)((ulong)pIVar5 & 0xffffffff);
    SVar18 = System_Linq_Enumerable__ElementAt_KeyValuePair_object__object__
                       (*(System_Collections_Generic_IEnumerable_TSource__o **)(lVar17 + 0x10),iVar11,
                        MethodInfo_KeyValuePair_2_System_String_SimpleJSONFixed_JSONNode_El);
    if (*(System_Collections_Generic_Dictionary_object__object__o **)(lVar17 + 0x10) !=
        (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      System_Collections_Generic_Dictionary_object__object___Remove
                (*(System_Collections_Generic_Dictionary_object__object__o **)(lVar17 + 0x10),
                 SVar18.fields.key,MethodInfo_Boolean_Remove);
      return (SimpleJSONFixed_JSONNode_o *)SVar18.fields.value;
    }
  }
  lVar17 = 0;
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac37b == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Remove);
    il2cpp_runtime_helper_023445d0(&MethodInfo_KeyValuePair_2_System_String_SimpleJSONFixed_JSONNode_Fi);
    il2cpp_runtime_helper_023445d0(&MethodInfo_IEnumerable_1_KeyValuePair_2_System_String_SimpleJSONFix);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_KeyValuePair_string_JSONNode_bool);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Key);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Remove_b__0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass21_0);
    g_data_057ac37b = '\x01';
  }
  pIVar6 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass21_0);
  System_Object___ctor(pIVar6,(MethodInfo *)0x0);
  if (pIVar6 == (Il2CppObject *)0x0) {
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    pIVar6[1].klass = pIVar13;
    il2cpp_runtime_helper_022b4080(pIVar6 + 1,pIVar13);
    pSVar7 = *(System_Collections_Generic_IEnumerable_TSource__o **)(lVar17 + 0x10);
    predicate = (System_Func_TSource__bool__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_KeyValuePair_string_JSONNode_bool);
    System_Func_KeyValuePair_object__object___bool____ctor();
    pSVar7 = System_Linq_Enumerable__Where_KeyValuePair_object__object__(pSVar7,predicate,MethodInfo_IEnumerable_1_KeyValuePair_2_System_String_SimpleJSONFix);
    SVar18 = System_Linq_Enumerable__First_KeyValuePair_object__object__(pSVar7,MethodInfo_KeyValuePair_2_System_String_SimpleJSONFixed_JSONNode_Fi);
    if (*(System_Collections_Generic_Dictionary_object__object__o **)(lVar17 + 0x10) !=
        (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      System_Collections_Generic_Dictionary_object__object___Remove
                (*(System_Collections_Generic_Dictionary_object__object__o **)(lVar17 + 0x10),
                 SVar18.fields.key,MethodInfo_Boolean_Remove);
      return (SimpleJSONFixed_JSONNode_o *)pIVar6[1].klass;
    }
  }
  auVar19 = il2cpp_runtime_helper_022b2c90();
  if (auVar19._8_4_ != 1) {
    _Unwind_Resume(auVar19._0_8_);
  }
  puVar8 = (undefined8 *)__cxa_begin_catch(auVar19._0_8_);
  cVar1 = il2cpp_runtime_helper_0233e000(g_data_057b9b80,*(undefined8 *)*puVar8);
  if (cVar1 == '\0') {
    puVar9 = (undefined8 *)__cxa_allocate_exception(8);
    *puVar9 = *puVar8;
    __cxa_throw(puVar9,&PTR_PTR_05215060,0);
  }
  __cxa_end_catch();
  return (SimpleJSONFixed_JSONNode_o *)0x0;
}


// SimpleJSONFixed.JSONObject$$set_Item
// il2cpp: void SimpleJSONFixed_JSONObject__set_Item (SimpleJSONFixed_JSONObject_o* __this, int32_t aIndex, SimpleJSONFixed_JSONNode_o* value, const MethodInfo* method);
// 0x407e360

void SimpleJSONFixed_JSONObject__set_Item_3f7e360
               (SimpleJSONFixed_JSONObject_o *__this,int32_t aIndex,SimpleJSONFixed_JSONNode_o *value,
               MethodInfo *method)

{
  char cVar1;
  bool_conflict bVar2;
  int32_t iVar3;
  MethodInfo *pMVar4;
  Il2CppClass *pIVar5;
  Il2CppObject *__this_00;
  System_Func_TSource__bool__o *predicate;
  System_Collections_Generic_IEnumerable_TSource__o *pSVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *pMVar9;
  MethodInfo *a;
  MethodInfo *extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
  int index;
  Il2CppClass *pIVar10;
  char *pcVar11;
  System_Collections_Generic_Dictionary_object__object__o *pSVar12;
  MethodInfo *method_00;
  System_Int32_array *__this_01;
  long lVar13;
  System_Collections_Generic_KeyValuePair_object__object__o SVar14;
  undefined1 auVar15 [12];
  System_Guid_o __this_02;
  System_Guid_Fields SStack_58;
  char *pcStack_40;
  
  pIVar10 = (Il2CppClass *)(ulong)(uint)aIndex;
  pMVar9 = (MethodInfo *)value;
  if (g_data_057ac376 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_KeyValuePair_2_System_String_SimpleJSONFixed_JSONNode_El);
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNull);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Key);
    g_data_057ac376 = '\x01';
    pMVar9 = extraout_RDX;
  }
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    pMVar9 = extraout_RDX_00;
  }
  pIVar5 = (Il2CppClass *)0x0;
  bVar2 = SimpleJSONFixed_JSONNode__op_Equality(value,(Il2CppObject *)0x0,pMVar9);
  if ((char)bVar2 != '\0') {
    pMVar9 = TypeInfo_JSONNull;
    if (*(int *)((long)&TypeInfo_JSONNull[2].parameters + 4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    value = (SimpleJSONFixed_JSONNode_o *)SimpleJSONFixed_JSONNull__CreateOrGet(pMVar9);
  }
  if (aIndex < 0) {
    return;
  }
  pSVar12 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).m_Dict;
  if (pSVar12 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    iVar3 = System_Collections_Generic_Dictionary_object__object___get_Count(pSVar12,MethodInfo_Int32_get_Count);
    if (iVar3 <= aIndex) {
      return;
    }
    SVar14 = System_Linq_Enumerable__ElementAt_KeyValuePair_object__object__
                       ((System_Collections_Generic_IEnumerable_TSource__o *)(__this->fields).m_Dict,aIndex,
                        MethodInfo_KeyValuePair_2_System_String_SimpleJSONFixed_JSONNode_El);
    pSVar12 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).m_Dict;
    pIVar5 = pIVar10;
    if (pSVar12 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      System_Collections_Generic_Dictionary_object__object___set_Item
                (pSVar12,SVar14.fields.key,(Il2CppObject *)value,_DAT_05589620);
      return;
    }
  }
  pcVar11 = (char *)0x0;
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac377 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    g_data_057ac377 = '\x01';
  }
  pSVar12 = *(System_Collections_Generic_Dictionary_object__object__o **)(pcVar11 + 0x10);
  if (pSVar12 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    System_Collections_Generic_Dictionary_object__object___get_Count(pSVar12,MethodInfo_Int32_get_Count);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pMVar9 = (MethodInfo *)&SStack_58;
  pMVar4 = a;
  pcStack_40 = pcVar11;
  if (g_data_057ac378 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNull);
    g_data_057ac378 = '\x01';
    pMVar4 = extraout_RDX_01;
  }
  SStack_58 = (System_Guid_Fields)ZEXT816(0);
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    pMVar4 = extraout_RDX_02;
  }
  pIVar10 = (Il2CppClass *)0x0;
  method_00 = a;
  bVar2 = SimpleJSONFixed_JSONNode__op_Equality((SimpleJSONFixed_JSONNode_o *)a,(Il2CppObject *)0x0,pMVar4);
  pMVar4 = a;
  if ((char)bVar2 != '\0') {
    method_00 = TypeInfo_JSONNull;
    if (*(int *)((long)&TypeInfo_JSONNull[2].parameters + 4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pMVar4 = (MethodInfo *)SimpleJSONFixed_JSONNull__CreateOrGet(method_00);
  }
  __this_01 = (pSVar12->fields)._buckets;
  if (pIVar5 == (Il2CppClass *)0x0) {
    SStack_58 = (System_Guid_Fields)System_Guid__NewGuid((MethodInfo *)0x0);
    pIVar10 = (Il2CppClass *)0x0;
    __this_02.fields._d = '\0';
    __this_02.fields._e = '\0';
    __this_02.fields._f = '\0';
    __this_02.fields._g = '\0';
    __this_02.fields._h = '\0';
    __this_02.fields._i = '\0';
    __this_02.fields._j = '\0';
    __this_02.fields._k = '\0';
    __this_02.fields._0_8_ = &SStack_58;
    pIVar5 = (Il2CppClass *)System_Guid__ToString(__this_02,SStack_58._8_8_);
    if (__this_01 != (System_Int32_array *)0x0) {
label_0407e5e6:
      System_Collections_Generic_Dictionary_object__object___Add
                ((System_Collections_Generic_Dictionary_object__object__o *)__this_01,(Il2CppObject *)pIVar5,
                 (Il2CppObject *)pMVar4,MethodInfo_Void_Add);
      return;
    }
  }
  else {
    pMVar9 = method_00;
    if (__this_01 != (System_Int32_array *)0x0) {
      pIVar10 = pIVar5;
      bVar2 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                        ((System_Collections_Generic_Dictionary_object__object__o *)__this_01,
                         (Il2CppObject *)pIVar5,MethodInfo_Boolean_ContainsKey);
      __this_01 = (pSVar12->fields)._buckets;
      pMVar9 = (MethodInfo *)0x0;
      if (__this_01 != (System_Int32_array *)0x0) {
        if ((char)bVar2 != '\0') {
          System_Collections_Generic_Dictionary_object__object___set_Item
                    ((System_Collections_Generic_Dictionary_object__object__o *)__this_01,
                     (Il2CppObject *)pIVar5,(Il2CppObject *)pMVar4,_DAT_05589620);
          return;
        }
        goto label_0407e5e6;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pIVar5 = pIVar10;
  if (g_data_057ac379 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Remove);
    il2cpp_runtime_helper_023445d0(&MethodInfo_JSONNode_get_Item);
    g_data_057ac379 = '\x01';
  }
  if ((System_Collections_Generic_Dictionary_object__object__o *)pMVar9->invoker_method !=
      (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    pIVar5 = pIVar10;
    bVar2 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                      ((System_Collections_Generic_Dictionary_object__object__o *)pMVar9->invoker_method,
                       (Il2CppObject *)pIVar10,MethodInfo_Boolean_ContainsKey);
    if ((char)bVar2 == '\0') {
      return;
    }
    if ((System_Collections_Generic_Dictionary_object__object__o *)pMVar9->invoker_method !=
        (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      pIVar5 = pIVar10;
      System_Collections_Generic_Dictionary_object__object___get_Item
                ((System_Collections_Generic_Dictionary_object__object__o *)pMVar9->invoker_method,
                 (Il2CppObject *)pIVar10,MethodInfo_JSONNode_get_Item);
      if ((System_Collections_Generic_Dictionary_object__object__o *)pMVar9->invoker_method !=
          (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
        System_Collections_Generic_Dictionary_object__object___Remove
                  ((System_Collections_Generic_Dictionary_object__object__o *)pMVar9->invoker_method,
                   (Il2CppObject *)pIVar10,MethodInfo_Boolean_Remove);
        return;
      }
    }
  }
  lVar13 = 0;
  il2cpp_runtime_helper_022b2c90();
  pIVar10 = pIVar5;
  if (g_data_057ac37a == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Remove);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&MethodInfo_KeyValuePair_2_System_String_SimpleJSONFixed_JSONNode_El);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Key);
    il2cpp_runtime_helper_023445d0(&MethodInfo_JSONNode_get_Value);
    g_data_057ac37a = '\x01';
  }
  index = (int)pIVar5;
  if (index < 0) {
    return;
  }
  if (*(System_Collections_Generic_Dictionary_object__object__o **)(lVar13 + 0x10) !=
      (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    iVar3 = System_Collections_Generic_Dictionary_object__object___get_Count
                      (*(System_Collections_Generic_Dictionary_object__object__o **)(lVar13 + 0x10),
                       MethodInfo_Int32_get_Count);
    if (iVar3 <= index) {
      return;
    }
    pIVar10 = (Il2CppClass *)((ulong)pIVar5 & 0xffffffff);
    SVar14 = System_Linq_Enumerable__ElementAt_KeyValuePair_object__object__
                       (*(System_Collections_Generic_IEnumerable_TSource__o **)(lVar13 + 0x10),index,
                        MethodInfo_KeyValuePair_2_System_String_SimpleJSONFixed_JSONNode_El);
    if (*(System_Collections_Generic_Dictionary_object__object__o **)(lVar13 + 0x10) !=
        (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      System_Collections_Generic_Dictionary_object__object___Remove
                (*(System_Collections_Generic_Dictionary_object__object__o **)(lVar13 + 0x10),
                 SVar14.fields.key,MethodInfo_Boolean_Remove);
      return;
    }
  }
  lVar13 = 0;
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac37b == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Remove);
    il2cpp_runtime_helper_023445d0(&MethodInfo_KeyValuePair_2_System_String_SimpleJSONFixed_JSONNode_Fi);
    il2cpp_runtime_helper_023445d0(&MethodInfo_IEnumerable_1_KeyValuePair_2_System_String_SimpleJSONFix);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_KeyValuePair_string_JSONNode_bool);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Key);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Remove_b__0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass21_0);
    g_data_057ac37b = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass21_0);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 == (Il2CppObject *)0x0) {
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    __this_00[1].klass = pIVar10;
    il2cpp_runtime_helper_022b4080(__this_00 + 1,pIVar10);
    pSVar6 = *(System_Collections_Generic_IEnumerable_TSource__o **)(lVar13 + 0x10);
    predicate = (System_Func_TSource__bool__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_KeyValuePair_string_JSONNode_bool);
    System_Func_KeyValuePair_object__object___bool____ctor();
    pSVar6 = System_Linq_Enumerable__Where_KeyValuePair_object__object__(pSVar6,predicate,MethodInfo_IEnumerable_1_KeyValuePair_2_System_String_SimpleJSONFix);
    SVar14 = System_Linq_Enumerable__First_KeyValuePair_object__object__(pSVar6,MethodInfo_KeyValuePair_2_System_String_SimpleJSONFixed_JSONNode_Fi);
    if (*(System_Collections_Generic_Dictionary_object__object__o **)(lVar13 + 0x10) !=
        (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      System_Collections_Generic_Dictionary_object__object___Remove
                (*(System_Collections_Generic_Dictionary_object__object__o **)(lVar13 + 0x10),
                 SVar14.fields.key,MethodInfo_Boolean_Remove);
      return;
    }
  }
  auVar15 = il2cpp_runtime_helper_022b2c90();
  if (auVar15._8_4_ == 1) {
    puVar7 = (undefined8 *)__cxa_begin_catch(auVar15._0_8_);
    cVar1 = il2cpp_runtime_helper_0233e000(g_data_057b9b80,*(undefined8 *)*puVar7);
    if (cVar1 != '\0') {
      __cxa_end_catch();
      return;
    }
    puVar8 = (undefined8 *)__cxa_allocate_exception(8);
    *puVar8 = *puVar7;
    __cxa_throw(puVar8,&PTR_PTR_05215060,0);
  }
  _Unwind_Resume(auVar15._0_8_);
}


// SimpleJSONFixed.JSONObject$$get_Count
// il2cpp: int32_t SimpleJSONFixed_JSONObject__get_Count (SimpleJSONFixed_JSONObject_o* __this, const MethodInfo* method);
// 0x407e470

int32_t SimpleJSONFixed_JSONObject__get_Count(SimpleJSONFixed_JSONObject_o *__this,MethodInfo *method)

{
  char cVar1;
  int32_t iVar2;
  bool_conflict bVar3;
  int32_t extraout_EAX;
  int32_t extraout_EAX_00;
  MethodInfo *pMVar4;
  Il2CppObject *pIVar5;
  System_Func_TSource__bool__o *predicate;
  System_Collections_Generic_IEnumerable_TSource__o *pSVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  MethodInfo *a;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  int index;
  Il2CppClass *pIVar9;
  Il2CppClass *pIVar10;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  MethodInfo *method_00;
  System_Int32_array *__this_01;
  long lVar12;
  System_Collections_Generic_KeyValuePair_object__object__o SVar13;
  undefined1 auVar14 [12];
  System_Guid_o __this_02;
  System_Guid_Fields local_40;
  SimpleJSONFixed_JSONObject_o *pSStack_28;
  MethodInfo *pMVar11;
  
  if (g_data_057ac377 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    g_data_057ac377 = '\x01';
  }
  __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).m_Dict;
  if (__this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    iVar2 = System_Collections_Generic_Dictionary_object__object___get_Count(__this_00,MethodInfo_Int32_get_Count);
    return iVar2;
  }
  il2cpp_runtime_helper_022b2c90();
  pMVar11 = (MethodInfo *)&local_40;
  pMVar4 = a;
  pSStack_28 = __this;
  if (g_data_057ac378 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNull);
    g_data_057ac378 = '\x01';
    pMVar4 = extraout_RDX;
  }
  local_40 = (System_Guid_Fields)ZEXT816(0);
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    pMVar4 = extraout_RDX_00;
  }
  pIVar9 = (Il2CppClass *)0x0;
  method_00 = a;
  bVar3 = SimpleJSONFixed_JSONNode__op_Equality((SimpleJSONFixed_JSONNode_o *)a,(Il2CppObject *)0x0,pMVar4);
  pMVar4 = a;
  if ((char)bVar3 != '\0') {
    method_00 = TypeInfo_JSONNull;
    if (*(int *)((long)&TypeInfo_JSONNull[2].parameters + 4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pMVar4 = (MethodInfo *)SimpleJSONFixed_JSONNull__CreateOrGet(method_00);
  }
  __this_01 = (__this_00->fields)._buckets;
  if ((Il2CppClass *)method == (Il2CppClass *)0x0) {
    local_40 = (System_Guid_Fields)System_Guid__NewGuid((MethodInfo *)0x0);
    pIVar9 = (Il2CppClass *)0x0;
    __this_02.fields._d = '\0';
    __this_02.fields._e = '\0';
    __this_02.fields._f = '\0';
    __this_02.fields._g = '\0';
    __this_02.fields._h = '\0';
    __this_02.fields._i = '\0';
    __this_02.fields._j = '\0';
    __this_02.fields._k = '\0';
    __this_02.fields._0_8_ = &local_40;
    method = (MethodInfo *)System_Guid__ToString(__this_02,local_40._8_8_);
    if (__this_01 != (System_Int32_array *)0x0) {
label_0407e5e6:
      System_Collections_Generic_Dictionary_object__object___Add
                ((System_Collections_Generic_Dictionary_object__object__o *)__this_01,(Il2CppObject *)method,
                 (Il2CppObject *)pMVar4,MethodInfo_Void_Add);
      return extraout_EAX_00;
    }
  }
  else {
    pMVar11 = method_00;
    if (__this_01 != (System_Int32_array *)0x0) {
      pIVar9 = (Il2CppClass *)method;
      bVar3 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                        ((System_Collections_Generic_Dictionary_object__object__o *)__this_01,
                         (Il2CppObject *)method,MethodInfo_Boolean_ContainsKey);
      __this_01 = (__this_00->fields)._buckets;
      pMVar11 = (MethodInfo *)0x0;
      if (__this_01 != (System_Int32_array *)0x0) {
        if ((char)bVar3 != '\0') {
          System_Collections_Generic_Dictionary_object__object___set_Item
                    ((System_Collections_Generic_Dictionary_object__object__o *)__this_01,
                     (Il2CppObject *)method,(Il2CppObject *)pMVar4,_DAT_05589620);
          return extraout_EAX;
        }
        goto label_0407e5e6;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pIVar10 = pIVar9;
  if (g_data_057ac379 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Remove);
    il2cpp_runtime_helper_023445d0(&MethodInfo_JSONNode_get_Item);
    g_data_057ac379 = '\x01';
  }
  if ((System_Collections_Generic_Dictionary_object__object__o *)pMVar11->invoker_method !=
      (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    pIVar10 = pIVar9;
    bVar3 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                      ((System_Collections_Generic_Dictionary_object__object__o *)pMVar11->invoker_method,
                       (Il2CppObject *)pIVar9,MethodInfo_Boolean_ContainsKey);
    if ((char)bVar3 == '\0') {
      return 0;
    }
    if ((System_Collections_Generic_Dictionary_object__object__o *)pMVar11->invoker_method !=
        (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      pIVar10 = pIVar9;
      pIVar5 = System_Collections_Generic_Dictionary_object__object___get_Item
                         ((System_Collections_Generic_Dictionary_object__object__o *)pMVar11->invoker_method,
                          (Il2CppObject *)pIVar9,MethodInfo_JSONNode_get_Item);
      if ((System_Collections_Generic_Dictionary_object__object__o *)pMVar11->invoker_method !=
          (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
        System_Collections_Generic_Dictionary_object__object___Remove
                  ((System_Collections_Generic_Dictionary_object__object__o *)pMVar11->invoker_method,
                   (Il2CppObject *)pIVar9,MethodInfo_Boolean_Remove);
        return (int32_t)pIVar5;
      }
    }
  }
  lVar12 = 0;
  il2cpp_runtime_helper_022b2c90();
  pIVar9 = pIVar10;
  if (g_data_057ac37a == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Remove);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&MethodInfo_KeyValuePair_2_System_String_SimpleJSONFixed_JSONNode_El);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Key);
    il2cpp_runtime_helper_023445d0(&MethodInfo_JSONNode_get_Value);
    g_data_057ac37a = '\x01';
  }
  index = (int)pIVar10;
  if (index < 0) {
    return 0;
  }
  if (*(System_Collections_Generic_Dictionary_object__object__o **)(lVar12 + 0x10) !=
      (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    iVar2 = System_Collections_Generic_Dictionary_object__object___get_Count
                      (*(System_Collections_Generic_Dictionary_object__object__o **)(lVar12 + 0x10),
                       MethodInfo_Int32_get_Count);
    if (iVar2 <= index) {
      return 0;
    }
    pIVar9 = (Il2CppClass *)((ulong)pIVar10 & 0xffffffff);
    SVar13 = System_Linq_Enumerable__ElementAt_KeyValuePair_object__object__
                       (*(System_Collections_Generic_IEnumerable_TSource__o **)(lVar12 + 0x10),index,
                        MethodInfo_KeyValuePair_2_System_String_SimpleJSONFixed_JSONNode_El);
    if (*(System_Collections_Generic_Dictionary_object__object__o **)(lVar12 + 0x10) !=
        (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      System_Collections_Generic_Dictionary_object__object___Remove
                (*(System_Collections_Generic_Dictionary_object__object__o **)(lVar12 + 0x10),
                 SVar13.fields.key,MethodInfo_Boolean_Remove);
      return (int32_t)SVar13.fields.value;
    }
  }
  lVar12 = 0;
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac37b == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Remove);
    il2cpp_runtime_helper_023445d0(&MethodInfo_KeyValuePair_2_System_String_SimpleJSONFixed_JSONNode_Fi);
    il2cpp_runtime_helper_023445d0(&MethodInfo_IEnumerable_1_KeyValuePair_2_System_String_SimpleJSONFix);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_KeyValuePair_string_JSONNode_bool);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Key);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Remove_b__0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass21_0);
    g_data_057ac37b = '\x01';
  }
  pIVar5 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass21_0);
  System_Object___ctor(pIVar5,(MethodInfo *)0x0);
  if (pIVar5 == (Il2CppObject *)0x0) {
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    pIVar5[1].klass = pIVar9;
    il2cpp_runtime_helper_022b4080(pIVar5 + 1,pIVar9);
    pSVar6 = *(System_Collections_Generic_IEnumerable_TSource__o **)(lVar12 + 0x10);
    predicate = (System_Func_TSource__bool__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_KeyValuePair_string_JSONNode_bool);
    System_Func_KeyValuePair_object__object___bool____ctor();
    pSVar6 = System_Linq_Enumerable__Where_KeyValuePair_object__object__(pSVar6,predicate,MethodInfo_IEnumerable_1_KeyValuePair_2_System_String_SimpleJSONFix);
    SVar13 = System_Linq_Enumerable__First_KeyValuePair_object__object__(pSVar6,MethodInfo_KeyValuePair_2_System_String_SimpleJSONFixed_JSONNode_Fi);
    if (*(System_Collections_Generic_Dictionary_object__object__o **)(lVar12 + 0x10) !=
        (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      System_Collections_Generic_Dictionary_object__object___Remove
                (*(System_Collections_Generic_Dictionary_object__object__o **)(lVar12 + 0x10),
                 SVar13.fields.key,MethodInfo_Boolean_Remove);
      return (int32_t)pIVar5[1].klass;
    }
  }
  auVar14 = il2cpp_runtime_helper_022b2c90();
  if (auVar14._8_4_ != 1) {
    _Unwind_Resume(auVar14._0_8_);
  }
  puVar7 = (undefined8 *)__cxa_begin_catch(auVar14._0_8_);
  cVar1 = il2cpp_runtime_helper_0233e000(g_data_057b9b80,*(undefined8 *)*puVar7);
  if (cVar1 == '\0') {
    puVar8 = (undefined8 *)__cxa_allocate_exception(8);
    *puVar8 = *puVar7;
    __cxa_throw(puVar8,&PTR_PTR_05215060,0);
  }
  __cxa_end_catch();
  return 0;
}


// SimpleJSONFixed.JSONObject$$Add
// il2cpp: void SimpleJSONFixed_JSONObject__Add (SimpleJSONFixed_JSONObject_o* __this, System_String_o* aKey, SimpleJSONFixed_JSONNode_o* aItem, const MethodInfo* method);
// 0x407e4b0

void SimpleJSONFixed_JSONObject__Add
               (SimpleJSONFixed_JSONObject_o *__this,System_String_o *aKey,SimpleJSONFixed_JSONNode_o *aItem,
               MethodInfo *method)

{
  char cVar1;
  bool_conflict bVar2;
  int32_t iVar3;
  Il2CppObject *__this_00;
  System_Func_TSource__bool__o *predicate;
  System_Collections_Generic_IEnumerable_TSource__o *pSVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_00;
  int index;
  Il2CppClass *pIVar7;
  Il2CppClass *pIVar8;
  MethodInfo *method_01;
  System_Collections_Generic_Dictionary_object__object__o *__this_01;
  long lVar10;
  System_Collections_Generic_KeyValuePair_object__object__o SVar11;
  undefined1 auVar12 [12];
  System_Guid_o __this_02;
  System_Guid_Fields SStack_38;
  MethodInfo *pMVar9;
  
  pMVar9 = (MethodInfo *)&stack0xffffffffffffffc8;
  method_00 = (MethodInfo *)aItem;
  if (g_data_057ac378 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNull);
    g_data_057ac378 = '\x01';
    method_00 = extraout_RDX;
  }
  SStack_38 = (System_Guid_Fields)ZEXT816(0);
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    method_00 = extraout_RDX_00;
  }
  pIVar7 = (Il2CppClass *)0x0;
  method_01 = (MethodInfo *)aItem;
  bVar2 = SimpleJSONFixed_JSONNode__op_Equality(aItem,(Il2CppObject *)0x0,method_00);
  if ((char)bVar2 != '\0') {
    method_01 = TypeInfo_JSONNull;
    if (*(int *)((long)&TypeInfo_JSONNull[2].parameters + 4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    aItem = (SimpleJSONFixed_JSONNode_o *)SimpleJSONFixed_JSONNull__CreateOrGet(method_01);
  }
  __this_01 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).m_Dict;
  if (aKey == (System_String_o *)0x0) {
    SStack_38 = (System_Guid_Fields)System_Guid__NewGuid((MethodInfo *)0x0);
    pIVar7 = (Il2CppClass *)0x0;
    __this_02.fields._d = '\0';
    __this_02.fields._e = '\0';
    __this_02.fields._f = '\0';
    __this_02.fields._g = '\0';
    __this_02.fields._h = '\0';
    __this_02.fields._i = '\0';
    __this_02.fields._j = '\0';
    __this_02.fields._k = '\0';
    __this_02.fields._0_8_ = &stack0xffffffffffffffc8;
    aKey = System_Guid__ToString(__this_02,SStack_38._8_8_);
    if (__this_01 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
label_0407e5e6:
      System_Collections_Generic_Dictionary_object__object___Add
                (__this_01,(Il2CppObject *)aKey,(Il2CppObject *)aItem,MethodInfo_Void_Add);
      return;
    }
  }
  else {
    pMVar9 = method_01;
    if (__this_01 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      pIVar7 = (Il2CppClass *)aKey;
      bVar2 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                        (__this_01,(Il2CppObject *)aKey,MethodInfo_Boolean_ContainsKey);
      __this_01 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).m_Dict;
      pMVar9 = (MethodInfo *)0x0;
      if (__this_01 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
        if ((char)bVar2 != '\0') {
          System_Collections_Generic_Dictionary_object__object___set_Item
                    (__this_01,(Il2CppObject *)aKey,(Il2CppObject *)aItem,_DAT_05589620);
          return;
        }
        goto label_0407e5e6;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pIVar8 = pIVar7;
  if (g_data_057ac379 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Remove);
    il2cpp_runtime_helper_023445d0(&MethodInfo_JSONNode_get_Item);
    g_data_057ac379 = '\x01';
  }
  if ((System_Collections_Generic_Dictionary_object__object__o *)pMVar9->invoker_method !=
      (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    pIVar8 = pIVar7;
    bVar2 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                      ((System_Collections_Generic_Dictionary_object__object__o *)pMVar9->invoker_method,
                       (Il2CppObject *)pIVar7,MethodInfo_Boolean_ContainsKey);
    if ((char)bVar2 == '\0') {
      return;
    }
    if ((System_Collections_Generic_Dictionary_object__object__o *)pMVar9->invoker_method !=
        (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      pIVar8 = pIVar7;
      System_Collections_Generic_Dictionary_object__object___get_Item
                ((System_Collections_Generic_Dictionary_object__object__o *)pMVar9->invoker_method,
                 (Il2CppObject *)pIVar7,MethodInfo_JSONNode_get_Item);
      if ((System_Collections_Generic_Dictionary_object__object__o *)pMVar9->invoker_method !=
          (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
        System_Collections_Generic_Dictionary_object__object___Remove
                  ((System_Collections_Generic_Dictionary_object__object__o *)pMVar9->invoker_method,
                   (Il2CppObject *)pIVar7,MethodInfo_Boolean_Remove);
        return;
      }
    }
  }
  lVar10 = 0;
  il2cpp_runtime_helper_022b2c90();
  pIVar7 = pIVar8;
  if (g_data_057ac37a == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Remove);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&MethodInfo_KeyValuePair_2_System_String_SimpleJSONFixed_JSONNode_El);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Key);
    il2cpp_runtime_helper_023445d0(&MethodInfo_JSONNode_get_Value);
    g_data_057ac37a = '\x01';
  }
  index = (int)pIVar8;
  if (index < 0) {
    return;
  }
  if (*(System_Collections_Generic_Dictionary_object__object__o **)(lVar10 + 0x10) !=
      (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    iVar3 = System_Collections_Generic_Dictionary_object__object___get_Count
                      (*(System_Collections_Generic_Dictionary_object__object__o **)(lVar10 + 0x10),
                       MethodInfo_Int32_get_Count);
    if (iVar3 <= index) {
      return;
    }
    pIVar7 = (Il2CppClass *)((ulong)pIVar8 & 0xffffffff);
    SVar11 = System_Linq_Enumerable__ElementAt_KeyValuePair_object__object__
                       (*(System_Collections_Generic_IEnumerable_TSource__o **)(lVar10 + 0x10),index,
                        MethodInfo_KeyValuePair_2_System_String_SimpleJSONFixed_JSONNode_El);
    if (*(System_Collections_Generic_Dictionary_object__object__o **)(lVar10 + 0x10) !=
        (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      System_Collections_Generic_Dictionary_object__object___Remove
                (*(System_Collections_Generic_Dictionary_object__object__o **)(lVar10 + 0x10),
                 SVar11.fields.key,MethodInfo_Boolean_Remove);
      return;
    }
  }
  lVar10 = 0;
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac37b == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Remove);
    il2cpp_runtime_helper_023445d0(&MethodInfo_KeyValuePair_2_System_String_SimpleJSONFixed_JSONNode_Fi);
    il2cpp_runtime_helper_023445d0(&MethodInfo_IEnumerable_1_KeyValuePair_2_System_String_SimpleJSONFix);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_KeyValuePair_string_JSONNode_bool);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Key);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Remove_b__0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass21_0);
    g_data_057ac37b = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass21_0);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 == (Il2CppObject *)0x0) {
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    __this_00[1].klass = pIVar7;
    il2cpp_runtime_helper_022b4080(__this_00 + 1,pIVar7);
    pSVar4 = *(System_Collections_Generic_IEnumerable_TSource__o **)(lVar10 + 0x10);
    predicate = (System_Func_TSource__bool__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_KeyValuePair_string_JSONNode_bool);
    System_Func_KeyValuePair_object__object___bool____ctor();
    pSVar4 = System_Linq_Enumerable__Where_KeyValuePair_object__object__(pSVar4,predicate,MethodInfo_IEnumerable_1_KeyValuePair_2_System_String_SimpleJSONFix);
    SVar11 = System_Linq_Enumerable__First_KeyValuePair_object__object__(pSVar4,MethodInfo_KeyValuePair_2_System_String_SimpleJSONFixed_JSONNode_Fi);
    if (*(System_Collections_Generic_Dictionary_object__object__o **)(lVar10 + 0x10) !=
        (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      System_Collections_Generic_Dictionary_object__object___Remove
                (*(System_Collections_Generic_Dictionary_object__object__o **)(lVar10 + 0x10),
                 SVar11.fields.key,MethodInfo_Boolean_Remove);
      return;
    }
  }
  auVar12 = il2cpp_runtime_helper_022b2c90();
  if (auVar12._8_4_ == 1) {
    puVar5 = (undefined8 *)__cxa_begin_catch(auVar12._0_8_);
    cVar1 = il2cpp_runtime_helper_0233e000(g_data_057b9b80,*(undefined8 *)*puVar5);
    if (cVar1 != '\0') {
      __cxa_end_catch();
      return;
    }
    puVar6 = (undefined8 *)__cxa_allocate_exception(8);
    *puVar6 = *puVar5;
    __cxa_throw(puVar6,&PTR_PTR_05215060,0);
  }
  _Unwind_Resume(auVar12._0_8_);
}


// SimpleJSONFixed.JSONObject$$Remove
// il2cpp: SimpleJSONFixed_JSONNode_o* SimpleJSONFixed_JSONObject__Remove (SimpleJSONFixed_JSONObject_o* __this, System_String_o* aKey, const MethodInfo* method);
// 0x407e600

SimpleJSONFixed_JSONNode_o *
SimpleJSONFixed_JSONObject__Remove
          (SimpleJSONFixed_JSONObject_o *__this,System_String_o *aKey,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *pSVar1;
  char cVar2;
  bool_conflict bVar3;
  int32_t iVar4;
  Il2CppObject *pIVar5;
  System_Func_TSource__bool__o *predicate;
  System_Collections_Generic_IEnumerable_TSource__o *pSVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  int index;
  Il2CppClass *pIVar9;
  Il2CppClass *pIVar10;
  long lVar11;
  System_Collections_Generic_KeyValuePair_object__object__o SVar12;
  undefined1 auVar13 [12];
  
  pIVar9 = (Il2CppClass *)aKey;
  if (g_data_057ac379 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Remove);
    il2cpp_runtime_helper_023445d0(&MethodInfo_JSONNode_get_Item);
    g_data_057ac379 = '\x01';
  }
  pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).m_Dict;
  if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    pIVar9 = (Il2CppClass *)aKey;
    bVar3 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                      (pSVar1,(Il2CppObject *)aKey,MethodInfo_Boolean_ContainsKey);
    if ((char)bVar3 == '\0') {
      return (SimpleJSONFixed_JSONNode_o *)0x0;
    }
    pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).m_Dict;
    if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      pIVar9 = (Il2CppClass *)aKey;
      pIVar5 = System_Collections_Generic_Dictionary_object__object___get_Item
                         (pSVar1,(Il2CppObject *)aKey,MethodInfo_JSONNode_get_Item);
      pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).m_Dict;
      if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
        System_Collections_Generic_Dictionary_object__object___Remove
                  (pSVar1,(Il2CppObject *)aKey,MethodInfo_Boolean_Remove);
        return (SimpleJSONFixed_JSONNode_o *)pIVar5;
      }
    }
  }
  lVar11 = 0;
  il2cpp_runtime_helper_022b2c90();
  pIVar10 = pIVar9;
  if (g_data_057ac37a == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Remove);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&MethodInfo_KeyValuePair_2_System_String_SimpleJSONFixed_JSONNode_El);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Key);
    il2cpp_runtime_helper_023445d0(&MethodInfo_JSONNode_get_Value);
    g_data_057ac37a = '\x01';
  }
  index = (int)pIVar9;
  if (index < 0) {
    return (SimpleJSONFixed_JSONNode_o *)0x0;
  }
  if (*(System_Collections_Generic_Dictionary_object__object__o **)(lVar11 + 0x10) !=
      (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    iVar4 = System_Collections_Generic_Dictionary_object__object___get_Count
                      (*(System_Collections_Generic_Dictionary_object__object__o **)(lVar11 + 0x10),
                       MethodInfo_Int32_get_Count);
    if (iVar4 <= index) {
      return (SimpleJSONFixed_JSONNode_o *)0x0;
    }
    pIVar10 = (Il2CppClass *)((ulong)pIVar9 & 0xffffffff);
    SVar12 = System_Linq_Enumerable__ElementAt_KeyValuePair_object__object__
                       (*(System_Collections_Generic_IEnumerable_TSource__o **)(lVar11 + 0x10),index,
                        MethodInfo_KeyValuePair_2_System_String_SimpleJSONFixed_JSONNode_El);
    if (*(System_Collections_Generic_Dictionary_object__object__o **)(lVar11 + 0x10) !=
        (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      System_Collections_Generic_Dictionary_object__object___Remove
                (*(System_Collections_Generic_Dictionary_object__object__o **)(lVar11 + 0x10),
                 SVar12.fields.key,MethodInfo_Boolean_Remove);
      return (SimpleJSONFixed_JSONNode_o *)SVar12.fields.value;
    }
  }
  lVar11 = 0;
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac37b == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Remove);
    il2cpp_runtime_helper_023445d0(&MethodInfo_KeyValuePair_2_System_String_SimpleJSONFixed_JSONNode_Fi);
    il2cpp_runtime_helper_023445d0(&MethodInfo_IEnumerable_1_KeyValuePair_2_System_String_SimpleJSONFix);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_KeyValuePair_string_JSONNode_bool);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Key);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Remove_b__0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass21_0);
    g_data_057ac37b = '\x01';
  }
  pIVar5 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass21_0);
  System_Object___ctor(pIVar5,(MethodInfo *)0x0);
  if (pIVar5 == (Il2CppObject *)0x0) {
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    pIVar5[1].klass = pIVar10;
    il2cpp_runtime_helper_022b4080(pIVar5 + 1,pIVar10);
    pSVar6 = *(System_Collections_Generic_IEnumerable_TSource__o **)(lVar11 + 0x10);
    predicate = (System_Func_TSource__bool__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_KeyValuePair_string_JSONNode_bool);
    System_Func_KeyValuePair_object__object___bool____ctor();
    pSVar6 = System_Linq_Enumerable__Where_KeyValuePair_object__object__(pSVar6,predicate,MethodInfo_IEnumerable_1_KeyValuePair_2_System_String_SimpleJSONFix);
    SVar12 = System_Linq_Enumerable__First_KeyValuePair_object__object__(pSVar6,MethodInfo_KeyValuePair_2_System_String_SimpleJSONFixed_JSONNode_Fi);
    if (*(System_Collections_Generic_Dictionary_object__object__o **)(lVar11 + 0x10) !=
        (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      System_Collections_Generic_Dictionary_object__object___Remove
                (*(System_Collections_Generic_Dictionary_object__object__o **)(lVar11 + 0x10),
                 SVar12.fields.key,MethodInfo_Boolean_Remove);
      return (SimpleJSONFixed_JSONNode_o *)pIVar5[1].klass;
    }
  }
  auVar13 = il2cpp_runtime_helper_022b2c90();
  if (auVar13._8_4_ != 1) {
    _Unwind_Resume(auVar13._0_8_);
  }
  puVar7 = (undefined8 *)__cxa_begin_catch(auVar13._0_8_);
  cVar2 = il2cpp_runtime_helper_0233e000(g_data_057b9b80,*(undefined8 *)*puVar7);
  if (cVar2 == '\0') {
    puVar8 = (undefined8 *)__cxa_allocate_exception(8);
    *puVar8 = *puVar7;
    __cxa_throw(puVar8,&PTR_PTR_05215060,0);
  }
  __cxa_end_catch();
  return (SimpleJSONFixed_JSONNode_o *)0x0;
}


// SimpleJSONFixed.JSONObject$$Remove
// il2cpp: SimpleJSONFixed_JSONNode_o* SimpleJSONFixed_JSONObject__Remove (SimpleJSONFixed_JSONObject_o* __this, int32_t aIndex, const MethodInfo* method);
// 0x407e6b0

SimpleJSONFixed_JSONNode_o *
SimpleJSONFixed_JSONObject__Remove_3f7e6b0
          (SimpleJSONFixed_JSONObject_o *__this,int32_t aIndex,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *pSVar1;
  char cVar2;
  int32_t iVar3;
  Il2CppObject *__this_00;
  System_Func_TSource__bool__o *predicate;
  System_Collections_Generic_IEnumerable_TSource__o *pSVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined4 in_register_00000034;
  Il2CppClass *pIVar7;
  Il2CppClass *pIVar8;
  long lVar9;
  System_Collections_Generic_KeyValuePair_object__object__o SVar10;
  undefined1 auVar11 [12];
  
  pIVar7 = (Il2CppClass *)CONCAT44(in_register_00000034,aIndex);
  pIVar8 = (Il2CppClass *)(ulong)(uint)aIndex;
  if (g_data_057ac37a == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Remove);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&MethodInfo_KeyValuePair_2_System_String_SimpleJSONFixed_JSONNode_El);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Key);
    il2cpp_runtime_helper_023445d0(&MethodInfo_JSONNode_get_Value);
    g_data_057ac37a = '\x01';
  }
  if (aIndex < 0) {
    return (SimpleJSONFixed_JSONNode_o *)0x0;
  }
  pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).m_Dict;
  if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    iVar3 = System_Collections_Generic_Dictionary_object__object___get_Count(pSVar1,MethodInfo_Int32_get_Count);
    if (iVar3 <= aIndex) {
      return (SimpleJSONFixed_JSONNode_o *)0x0;
    }
    SVar10 = System_Linq_Enumerable__ElementAt_KeyValuePair_object__object__
                       ((System_Collections_Generic_IEnumerable_TSource__o *)(__this->fields).m_Dict,aIndex,
                        MethodInfo_KeyValuePair_2_System_String_SimpleJSONFixed_JSONNode_El);
    pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).m_Dict;
    pIVar7 = pIVar8;
    if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      System_Collections_Generic_Dictionary_object__object___Remove(pSVar1,SVar10.fields.key,MethodInfo_Boolean_Remove);
      return (SimpleJSONFixed_JSONNode_o *)SVar10.fields.value;
    }
  }
  lVar9 = 0;
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac37b == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Remove);
    il2cpp_runtime_helper_023445d0(&MethodInfo_KeyValuePair_2_System_String_SimpleJSONFixed_JSONNode_Fi);
    il2cpp_runtime_helper_023445d0(&MethodInfo_IEnumerable_1_KeyValuePair_2_System_String_SimpleJSONFix);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_KeyValuePair_string_JSONNode_bool);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Key);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Remove_b__0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass21_0);
    g_data_057ac37b = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass21_0);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 == (Il2CppObject *)0x0) {
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    __this_00[1].klass = pIVar7;
    il2cpp_runtime_helper_022b4080(__this_00 + 1,pIVar7);
    pSVar4 = *(System_Collections_Generic_IEnumerable_TSource__o **)(lVar9 + 0x10);
    predicate = (System_Func_TSource__bool__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_KeyValuePair_string_JSONNode_bool);
    System_Func_KeyValuePair_object__object___bool____ctor();
    pSVar4 = System_Linq_Enumerable__Where_KeyValuePair_object__object__(pSVar4,predicate,MethodInfo_IEnumerable_1_KeyValuePair_2_System_String_SimpleJSONFix);
    SVar10 = System_Linq_Enumerable__First_KeyValuePair_object__object__(pSVar4,MethodInfo_KeyValuePair_2_System_String_SimpleJSONFixed_JSONNode_Fi);
    if (*(System_Collections_Generic_Dictionary_object__object__o **)(lVar9 + 0x10) !=
        (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      System_Collections_Generic_Dictionary_object__object___Remove
                (*(System_Collections_Generic_Dictionary_object__object__o **)(lVar9 + 0x10),SVar10.fields.key
                 ,MethodInfo_Boolean_Remove);
      return (SimpleJSONFixed_JSONNode_o *)__this_00[1].klass;
    }
  }
  auVar11 = il2cpp_runtime_helper_022b2c90();
  if (auVar11._8_4_ != 1) {
    _Unwind_Resume(auVar11._0_8_);
  }
  puVar5 = (undefined8 *)__cxa_begin_catch(auVar11._0_8_);
  cVar2 = il2cpp_runtime_helper_0233e000(g_data_057b9b80,*(undefined8 *)*puVar5);
  if (cVar2 == '\0') {
    puVar6 = (undefined8 *)__cxa_allocate_exception(8);
    *puVar6 = *puVar5;
    __cxa_throw(puVar6,&PTR_PTR_05215060,0);
  }
  __cxa_end_catch();
  return (SimpleJSONFixed_JSONNode_o *)0x0;
}


// SimpleJSONFixed.JSONObject$$Remove
// il2cpp: SimpleJSONFixed_JSONNode_o* SimpleJSONFixed_JSONObject__Remove (SimpleJSONFixed_JSONObject_o* __this, SimpleJSONFixed_JSONNode_o* aNode, const MethodInfo* method);
// 0x407e770

SimpleJSONFixed_JSONNode_o *
SimpleJSONFixed_JSONObject__Remove_3f7e770
          (SimpleJSONFixed_JSONObject_o *__this,SimpleJSONFixed_JSONNode_o *aNode,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_string__JSONNode__o *source;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  char cVar1;
  Il2CppObject *__this_01;
  System_Func_TSource__bool__o *predicate;
  System_Collections_Generic_IEnumerable_TSource__o *source_00;
  undefined8 *puVar2;
  undefined8 *puVar3;
  System_Collections_Generic_KeyValuePair_object__object__o SVar4;
  undefined1 auVar5 [12];
  
  if (g_data_057ac37b == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Remove);
    il2cpp_runtime_helper_023445d0(&MethodInfo_KeyValuePair_2_System_String_SimpleJSONFixed_JSONNode_Fi);
    il2cpp_runtime_helper_023445d0(&MethodInfo_IEnumerable_1_KeyValuePair_2_System_String_SimpleJSONFix);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_KeyValuePair_string_JSONNode_bool);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Key);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Remove_b__0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass21_0);
    g_data_057ac37b = '\x01';
  }
  __this_01 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass21_0);
  System_Object___ctor(__this_01,(MethodInfo *)0x0);
  if (__this_01 == (Il2CppObject *)0x0) {
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    __this_01[1].klass = (Il2CppClass *)aNode;
    il2cpp_runtime_helper_022b4080(__this_01 + 1,aNode);
    source = (__this->fields).m_Dict;
    predicate = (System_Func_TSource__bool__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_KeyValuePair_string_JSONNode_bool);
    System_Func_KeyValuePair_object__object___bool____ctor();
    source_00 = System_Linq_Enumerable__Where_KeyValuePair_object__object__
                          ((System_Collections_Generic_IEnumerable_TSource__o *)source,predicate,MethodInfo_IEnumerable_1_KeyValuePair_2_System_String_SimpleJSONFix)
    ;
    SVar4 = System_Linq_Enumerable__First_KeyValuePair_object__object__(source_00,MethodInfo_KeyValuePair_2_System_String_SimpleJSONFixed_JSONNode_Fi);
    __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).m_Dict;
    if (__this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      System_Collections_Generic_Dictionary_object__object___Remove(__this_00,SVar4.fields.key,MethodInfo_Boolean_Remove);
      return (SimpleJSONFixed_JSONNode_o *)__this_01[1].klass;
    }
  }
  auVar5 = il2cpp_runtime_helper_022b2c90();
  if (auVar5._8_4_ == 1) {
    puVar2 = (undefined8 *)__cxa_begin_catch(auVar5._0_8_);
    cVar1 = il2cpp_runtime_helper_0233e000(g_data_057b9b80,*(undefined8 *)*puVar2);
    if (cVar1 != '\0') {
      __cxa_end_catch();
      return (SimpleJSONFixed_JSONNode_o *)0x0;
    }
    puVar3 = (undefined8 *)__cxa_allocate_exception(8);
    *puVar3 = *puVar2;
    __cxa_throw(puVar3,&PTR_PTR_05215060,0);
  }
  _Unwind_Resume(auVar5._0_8_);
}


// SimpleJSONFixed.JSONObject$$Clear
// il2cpp: void SimpleJSONFixed_JSONObject__Clear (SimpleJSONFixed_JSONObject_o* __this, const MethodInfo* method);
// 0x407e950

void SimpleJSONFixed_JSONObject__Clear(SimpleJSONFixed_JSONObject_o *__this,MethodInfo *method)

{
  System_Int32_array *__this_00;
  long lVar1;
  System_Collections_Generic_Dictionary_Enumerator_object__object__o __this_01;
  System_Collections_Generic_Dictionary_Enumerator_object__object__o __this_02;
  System_Collections_Generic_Dictionary_Enumerator_object__object__o __this_03;
  System_Collections_Generic_Dictionary_Enumerator_object__object__o __this_04;
  System_Collections_Generic_Dictionary_Enumerator_object__object__o __this_05;
  bool_conflict bVar2;
  SimpleJSONFixed_JSONObject_o *__this_06;
  undefined8 uVar3;
  long *plVar4;
  long *extraout_RDX;
  long *extraout_RDX_00;
  System_Collections_Generic_Dictionary_object__object__o *__this_07;
  undefined1 auVar5 [16];
  undefined1 auVar6 [12];
  System_Collections_Generic_Dictionary_TKey__TValue__o *pSVar7;
  Il2CppMethodPointer pIVar8;
  Il2CppObject *pIVar9;
  Il2CppObject *pIVar10;
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__c *pSVar11;
  
  if (g_data_057ac37c == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
    g_data_057ac37c = '\x01';
  }
  __this_07 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).m_Dict;
  if (__this_07 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    System_Collections_Generic_Dictionary_object__object___Clear(__this_07,_DAT_055895e0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac37d == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_Enumerator_System_String_Simple);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_KeyValuePair_2_System_String_SimpleJSONFixed_JSONNode_ge);
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONObject);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Key);
    il2cpp_runtime_helper_023445d0(&MethodInfo_JSONNode_get_Value);
    g_data_057ac37d = '\x01';
  }
  pIVar9 = (Il2CppObject *)0x0;
  pIVar10 = (Il2CppObject *)0x0;
  pSVar7 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  pIVar8 = (Il2CppMethodPointer)0x0;
  pSVar11 = (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__c *)0x0;
  __this_06 = (SimpleJSONFixed_JSONObject_o *)il2cpp_runtime_helper_023052d0(TypeInfo_JSONObject);
  SimpleJSONFixed_JSONObject___ctor(__this_06,method);
  __this_00 = (__this_07->fields)._buckets;
  if (__this_00 == (System_Int32_array *)0x0) {
    il2cpp_runtime_helper_022b2c90();
label_0407eb05:
    il2cpp_runtime_helper_03343020(&stack0xffffffffffffffa0,MethodInfo_KeyValuePair_2_System_String_SimpleJSONFixed_JSONNode_ge);
    plVar4 = extraout_RDX;
    if (extraout_RDX == (long *)0x0) {
label_0407eb1c:
      il2cpp_runtime_helper_022b2c90();
      plVar4 = extraout_RDX_00;
    }
    (**(code **)(*plVar4 + 0x2d8))(plVar4,*(undefined8 *)(*plVar4 + 0x2e0));
    auVar6 = il2cpp_runtime_helper_022b2c90();
    if (auVar6._8_4_ == 1) {
      plVar4 = (long *)__cxa_begin_catch(auVar6._0_8_);
      lVar1 = *plVar4;
      __cxa_end_catch();
      __this_04.fields._8_8_ = pIVar8;
      __this_04.fields._dictionary = pSVar7;
      __this_04.fields._current.fields.key = pIVar9;
      __this_04.fields._current.fields.value = pIVar10;
      __this_04.fields._32_8_ = pSVar11;
      System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose
                (__this_04,(MethodInfo_3251280 *)&stack0xffffffffffffffa0);
      if (lVar1 == 0) {
        return;
      }
      il2cpp_runtime_helper_022fefe0(lVar1);
    }
    __this_05.fields._8_8_ = pIVar8;
    __this_05.fields._dictionary = pSVar7;
    __this_05.fields._current.fields.key = pIVar9;
    __this_05.fields._current.fields.value = pIVar10;
    __this_05.fields._32_8_ = pSVar11;
    System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose
              (__this_05,(MethodInfo_3251280 *)&stack0xffffffffffffffa0);
    _Unwind_Resume(auVar6._0_8_);
  }
  System_Collections_Generic_Dictionary_object__object___GetEnumerator
            ((System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)&stack0xffffffffffffffa0,
             (System_Collections_Generic_Dictionary_object__object__o *)__this_00,_DAT_055895f0);
  if (__this_06 == (SimpleJSONFixed_JSONObject_o *)0x0) {
    __this_02.fields._8_8_ = pIVar8;
    __this_02.fields._dictionary = pSVar7;
    __this_02.fields._current.fields.key = pIVar9;
    __this_02.fields._current.fields.value = pIVar10;
    __this_02.fields._32_8_ = pSVar11;
    bVar2 = System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext
                      (__this_02,(MethodInfo_3251160 *)&stack0xffffffffffffffa0);
    if ((char)bVar2 != '\0') goto label_0407eb05;
  }
  else {
    while (__this_01.fields._8_8_ = pIVar8, __this_01.fields._dictionary = pSVar7,
          __this_01.fields._current.fields.key = pIVar9, __this_01.fields._current.fields.value = pIVar10,
          __this_01.fields._32_8_ = pSVar11,
          bVar2 = System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext
                            (__this_01,(MethodInfo_3251160 *)&stack0xffffffffffffffa0), (char)bVar2 != '\0') {
      auVar5 = il2cpp_runtime_helper_03343020(&stack0xffffffffffffffa0,MethodInfo_KeyValuePair_2_System_String_SimpleJSONFixed_JSONNode_ge);
      plVar4 = auVar5._8_8_;
      if (plVar4 == (long *)0x0) goto label_0407eb1c;
      uVar3 = (**(code **)(*plVar4 + 0x2d8))(plVar4,*(undefined8 *)(*plVar4 + 0x2e0));
      (*(__this_06->klass->vtable)._20_Add.methodPtr)
                (__this_06,auVar5._0_8_,uVar3,(__this_06->klass->vtable)._20_Add.method);
    }
  }
  __this_03.fields._8_8_ = pIVar8;
  __this_03.fields._dictionary = pSVar7;
  __this_03.fields._current.fields.key = pIVar9;
  __this_03.fields._current.fields.value = pIVar10;
  __this_03.fields._32_8_ = pSVar11;
  System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose
            (__this_03,(MethodInfo_3251280 *)&stack0xffffffffffffffa0);
  return;
}


// SimpleJSONFixed.JSONObject$$Clone
// il2cpp: SimpleJSONFixed_JSONNode_o* SimpleJSONFixed_JSONObject__Clone (SimpleJSONFixed_JSONObject_o* __this, const MethodInfo* method);
// 0x407e990

SimpleJSONFixed_JSONNode_o *
SimpleJSONFixed_JSONObject__Clone(SimpleJSONFixed_JSONObject_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  long lVar1;
  System_Collections_Generic_Dictionary_Enumerator_object__object__o __this_01;
  System_Collections_Generic_Dictionary_Enumerator_object__object__o __this_02;
  System_Collections_Generic_Dictionary_Enumerator_object__object__o __this_03;
  System_Collections_Generic_Dictionary_Enumerator_object__object__o __this_04;
  System_Collections_Generic_Dictionary_Enumerator_object__object__o __this_05;
  bool_conflict bVar2;
  SimpleJSONFixed_JSONObject_o *__this_06;
  undefined8 uVar3;
  long *plVar4;
  long *extraout_RDX;
  long *extraout_RDX_00;
  undefined1 auVar5 [16];
  undefined1 auVar6 [12];
  System_Collections_Generic_Dictionary_TKey__TValue__o *pSVar7;
  Il2CppMethodPointer pIVar8;
  Il2CppObject *pIVar9;
  Il2CppObject *pIVar10;
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__c *pSVar11;
  
  if (g_data_057ac37d == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_Enumerator_System_String_Simple);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_KeyValuePair_2_System_String_SimpleJSONFixed_JSONNode_ge);
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONObject);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Key);
    il2cpp_runtime_helper_023445d0(&MethodInfo_JSONNode_get_Value);
    g_data_057ac37d = '\x01';
  }
  pIVar9 = (Il2CppObject *)0x0;
  pIVar10 = (Il2CppObject *)0x0;
  pSVar7 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  pIVar8 = (Il2CppMethodPointer)0x0;
  pSVar11 = (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__c *)0x0;
  __this_06 = (SimpleJSONFixed_JSONObject_o *)il2cpp_runtime_helper_023052d0(TypeInfo_JSONObject);
  SimpleJSONFixed_JSONObject___ctor(__this_06,method);
  __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).m_Dict;
  if (__this_00 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    il2cpp_runtime_helper_022b2c90();
label_0407eb05:
    il2cpp_runtime_helper_03343020(&stack0xffffffffffffffa8,MethodInfo_KeyValuePair_2_System_String_SimpleJSONFixed_JSONNode_ge);
    plVar4 = extraout_RDX;
    if (extraout_RDX == (long *)0x0) {
label_0407eb1c:
      il2cpp_runtime_helper_022b2c90();
      plVar4 = extraout_RDX_00;
    }
    (**(code **)(*plVar4 + 0x2d8))(plVar4,*(undefined8 *)(*plVar4 + 0x2e0));
    auVar6 = il2cpp_runtime_helper_022b2c90();
    if (auVar6._8_4_ == 1) {
      plVar4 = (long *)__cxa_begin_catch(auVar6._0_8_);
      lVar1 = *plVar4;
      __cxa_end_catch();
      __this_04.fields._8_8_ = pIVar8;
      __this_04.fields._dictionary = pSVar7;
      __this_04.fields._current.fields.key = pIVar9;
      __this_04.fields._current.fields.value = pIVar10;
      __this_04.fields._32_8_ = pSVar11;
      System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose
                (__this_04,(MethodInfo_3251280 *)&stack0xffffffffffffffa8);
      if (lVar1 == 0) {
        return (SimpleJSONFixed_JSONNode_o *)__this_06;
      }
      il2cpp_runtime_helper_022fefe0(lVar1);
    }
    __this_05.fields._8_8_ = pIVar8;
    __this_05.fields._dictionary = pSVar7;
    __this_05.fields._current.fields.key = pIVar9;
    __this_05.fields._current.fields.value = pIVar10;
    __this_05.fields._32_8_ = pSVar11;
    System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose
              (__this_05,(MethodInfo_3251280 *)&stack0xffffffffffffffa8);
    _Unwind_Resume(auVar6._0_8_);
  }
  System_Collections_Generic_Dictionary_object__object___GetEnumerator
            ((System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)&stack0xffffffffffffffa8,
             __this_00,_DAT_055895f0);
  if (__this_06 == (SimpleJSONFixed_JSONObject_o *)0x0) {
    __this_02.fields._8_8_ = pIVar8;
    __this_02.fields._dictionary = pSVar7;
    __this_02.fields._current.fields.key = pIVar9;
    __this_02.fields._current.fields.value = pIVar10;
    __this_02.fields._32_8_ = pSVar11;
    bVar2 = System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext
                      (__this_02,(MethodInfo_3251160 *)&stack0xffffffffffffffa8);
    if ((char)bVar2 != '\0') goto label_0407eb05;
  }
  else {
    while (__this_01.fields._8_8_ = pIVar8, __this_01.fields._dictionary = pSVar7,
          __this_01.fields._current.fields.key = pIVar9, __this_01.fields._current.fields.value = pIVar10,
          __this_01.fields._32_8_ = pSVar11,
          bVar2 = System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext
                            (__this_01,(MethodInfo_3251160 *)&stack0xffffffffffffffa8), (char)bVar2 != '\0') {
      auVar5 = il2cpp_runtime_helper_03343020(&stack0xffffffffffffffa8,MethodInfo_KeyValuePair_2_System_String_SimpleJSONFixed_JSONNode_ge);
      plVar4 = auVar5._8_8_;
      if (plVar4 == (long *)0x0) goto label_0407eb1c;
      uVar3 = (**(code **)(*plVar4 + 0x2d8))(plVar4,*(undefined8 *)(*plVar4 + 0x2e0));
      (*(__this_06->klass->vtable)._20_Add.methodPtr)
                (__this_06,auVar5._0_8_,uVar3,(__this_06->klass->vtable)._20_Add.method);
    }
  }
  __this_03.fields._8_8_ = pIVar8;
  __this_03.fields._dictionary = pSVar7;
  __this_03.fields._current.fields.key = pIVar9;
  __this_03.fields._current.fields.value = pIVar10;
  __this_03.fields._32_8_ = pSVar11;
  System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose
            (__this_03,(MethodInfo_3251280 *)&stack0xffffffffffffffa8);
  return (SimpleJSONFixed_JSONNode_o *)__this_06;
}


// SimpleJSONFixed.JSONObject$$HasKey
// il2cpp: bool SimpleJSONFixed_JSONObject__HasKey (SimpleJSONFixed_JSONObject_o* __this, System_String_o* aKey, const MethodInfo* method);
// 0x407ebf0

bool_conflict
SimpleJSONFixed_JSONObject__HasKey
          (SimpleJSONFixed_JSONObject_o *__this,System_String_o *aKey,MethodInfo *method)

{
  bool_conflict bVar1;
  int32_t iVar2;
  Il2CppObject *pIVar3;
  Il2CppObject *extraout_RDX;
  undefined4 uVar4;
  System_String_o *key;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  System_Int32_array *__this_01;
  Il2CppObject *__this_02;
  Il2CppObject *pIStack_38;
  SimpleJSONFixed_JSONObject_o *pSStack_30;
  System_String_o *pSStack_28;
  
  key = aKey;
  if (g_data_057ac37e == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    g_data_057ac37e = '\x01';
  }
  __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).m_Dict;
  if (__this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    bVar1 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                      (__this_00,(Il2CppObject *)aKey,MethodInfo_Boolean_ContainsKey);
    return bVar1;
  }
  il2cpp_runtime_helper_022b2c90();
  pSStack_30 = __this;
  pSStack_28 = aKey;
  if (g_data_057ac37f == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_TryGetValue);
    g_data_057ac37f = '\x01';
  }
  pIStack_38 = (Il2CppObject *)0x0;
  __this_01 = (__this_00->fields)._buckets;
  if (__this_01 != (System_Int32_array *)0x0) {
    bVar1 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                      ((System_Collections_Generic_Dictionary_object__object__o *)__this_01,
                       (Il2CppObject *)key,&pIStack_38,_DAT_05589600);
    pIVar3 = extraout_RDX;
    if ((char)bVar1 != '\0') {
      pIVar3 = pIStack_38;
    }
    return (bool_conflict)pIVar3;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac380 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_get_Children_d__27);
    g_data_057ac380 = '\x01';
  }
  pIVar3 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_get_Children_d__27);
  uVar4 = 0;
  System_Object___ctor(pIVar3,(MethodInfo *)0x0);
  *(undefined4 *)&pIVar3[1].klass = 0xfffffffe;
  __this_02 = (Il2CppObject *)0x0;
  iVar2 = System_Environment__get_CurrentManagedThreadId((MethodInfo *)0x0);
  *(int32_t *)&pIVar3[2].klass = iVar2;
  if (pIVar3 != (Il2CppObject *)0x0) {
    pIVar3[2].monitor = __this_01;
    il2cpp_runtime_helper_022b4080(&pIVar3[2].monitor,__this_01);
    return (bool_conflict)pIVar3;
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor(__this_02,(MethodInfo *)0x0);
  *(undefined4 *)&__this_02[1].klass = uVar4;
  iVar2 = System_Environment__get_CurrentManagedThreadId((MethodInfo *)0x0);
  *(int32_t *)&__this_02[2].klass = iVar2;
  return iVar2;
}


// SimpleJSONFixed.JSONObject$$GetValueOrDefault
// il2cpp: SimpleJSONFixed_JSONNode_o* SimpleJSONFixed_JSONObject__GetValueOrDefault (SimpleJSONFixed_JSONObject_o* __this, System_String_o* aKey, SimpleJSONFixed_JSONNode_o* aDefault, const MethodInfo* method);
// 0x407ec40

SimpleJSONFixed_JSONNode_o *
SimpleJSONFixed_JSONObject__GetValueOrDefault
          (SimpleJSONFixed_JSONObject_o *__this,System_String_o *aKey,SimpleJSONFixed_JSONNode_o *aDefault,
          MethodInfo *method)

{
  bool_conflict bVar1;
  int32_t iVar2;
  Il2CppObject *__this_00;
  undefined4 extraout_var;
  undefined4 uVar3;
  System_Collections_Generic_Dictionary_object__object__o *__this_01;
  Il2CppObject *__this_02;
  Il2CppObject *pIStack_20;
  
  if (g_data_057ac37f == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_TryGetValue);
    g_data_057ac37f = '\x01';
  }
  pIStack_20 = (Il2CppObject *)0x0;
  __this_01 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).m_Dict;
  if (__this_01 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    bVar1 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                      (__this_01,(Il2CppObject *)aKey,&pIStack_20,_DAT_05589600);
    if ((char)bVar1 != '\0') {
      aDefault = (SimpleJSONFixed_JSONNode_o *)pIStack_20;
    }
    return (SimpleJSONFixed_JSONNode_o *)(Il2CppObject *)aDefault;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac380 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_get_Children_d__27);
    g_data_057ac380 = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_get_Children_d__27);
  uVar3 = 0;
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  *(undefined4 *)&__this_00[1].klass = 0xfffffffe;
  __this_02 = (Il2CppObject *)0x0;
  iVar2 = System_Environment__get_CurrentManagedThreadId((MethodInfo *)0x0);
  *(int32_t *)&__this_00[2].klass = iVar2;
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[2].monitor = __this_01;
    il2cpp_runtime_helper_022b4080(&__this_00[2].monitor,__this_01);
    return (SimpleJSONFixed_JSONNode_o *)__this_00;
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor(__this_02,(MethodInfo *)0x0);
  *(undefined4 *)&__this_02[1].klass = uVar3;
  iVar2 = System_Environment__get_CurrentManagedThreadId((MethodInfo *)0x0);
  *(int32_t *)&__this_02[2].klass = iVar2;
  return (SimpleJSONFixed_JSONNode_o *)CONCAT44(extraout_var,iVar2);
}


// SimpleJSONFixed.JSONObject$$get_Children
// il2cpp: System_Collections_Generic_IEnumerable_JSONNode__o* SimpleJSONFixed_JSONObject__get_Children (SimpleJSONFixed_JSONObject_o* __this, const MethodInfo* method);
// 0x407ecc0

System_Collections_Generic_IEnumerable_JSONNode__o *
SimpleJSONFixed_JSONObject__get_Children(SimpleJSONFixed_JSONObject_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  Il2CppObject *__this_00;
  undefined4 extraout_var;
  undefined4 uVar2;
  Il2CppObject *__this_01;
  
  if (g_data_057ac380 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_get_Children_d__27);
    g_data_057ac380 = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_get_Children_d__27);
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


// SimpleJSONFixed.JSONObject$$WriteToStringBuilder
// il2cpp: void SimpleJSONFixed_JSONObject__WriteToStringBuilder (SimpleJSONFixed_JSONObject_o* __this, System_Text_StringBuilder_o* aSB, int32_t aIndent, int32_t aIndentInc, int32_t aMode, const MethodInfo* method);
// 0x407ed70

void SimpleJSONFixed_JSONObject__WriteToStringBuilder
               (SimpleJSONFixed_JSONObject_o *__this,System_Text_StringBuilder_o *aSB,int32_t aIndent,
               int32_t aIndentInc,int32_t aMode,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  long lVar1;
  System_Collections_Generic_Dictionary_Enumerator_object__object__o __this_01;
  System_Collections_Generic_Dictionary_Enumerator_object__object__o __this_02;
  System_Collections_Generic_Dictionary_Enumerator_object__object__o __this_03;
  System_Collections_Generic_Dictionary_Enumerator_object__object__o __this_04;
  System_Collections_Generic_Dictionary_Enumerator_object__object__o __this_05;
  bool_conflict bVar2;
  System_Text_StringBuilder_o *pSVar3;
  System_String_o *pSVar4;
  long *plVar5;
  undefined4 in_register_0000000c;
  undefined8 uVar6;
  bool bVar7;
  ulong uVar8;
  MethodInfo *pMVar9;
  int repeatCount;
  undefined1 auVar10 [16];
  undefined1 auVar11 [12];
  undefined1 in_stack_ffffffffffffff58 [12];
  int in_stack_ffffffffffffff64;
  ulong in_stack_ffffffffffffff68;
  System_Collections_Generic_Dictionary_TKey__TValue__o *pSVar12;
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o SStack_58;
  
  uVar6 = CONCAT44(in_register_0000000c,aIndentInc);
  uVar8 = (ulong)(uint)aIndent;
  if (cRam00000000057ac381 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_Enumerator_System_String_Simple);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_KeyValuePair_2_System_String_SimpleJSONFixed_JSONNode_ge);
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Key);
    il2cpp_runtime_helper_023445d0(&MethodInfo_JSONNode_get_Value);
    il2cpp_runtime_helper_023445d0(&" : ");
    cRam00000000057ac381 = '\x01';
  }
  pSVar12 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  if (aSB != (System_Text_StringBuilder_o *)0x0) {
    System_Text_StringBuilder__Append_3b048f0(aSB,0x7b,(MethodInfo *)0x0);
    if ((char)(__this->fields).field1_0x8 != '\0') {
      aMode = 0;
    }
    __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).m_Dict;
    if (__this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      System_Collections_Generic_Dictionary_object__object___GetEnumerator(&SStack_58,__this_00,_DAT_055895f0)
      ;
      repeatCount = (int)uVar6 + aIndent;
      pSVar12 = SStack_58.fields._dictionary;
      if (aMode == 1) {
        bVar7 = true;
        while (__this_01.fields._index = aMode,
              __this_01.fields._dictionary =
                   (System_Collections_Generic_Dictionary_TKey__TValue__o *)in_stack_ffffffffffffff58._0_8_,
              __this_01.fields._version = in_stack_ffffffffffffff58._8_4_,
              __this_01.fields._current.fields.key = (Il2CppObject *)uVar8,
              __this_01.fields._current.fields.value = (Il2CppObject *)uVar6,
              __this_01.fields._32_8_ = pSVar12,
              bVar2 = System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext
                                (__this_01,(MethodInfo_3251160 *)&stack0xffffffffffffff78),
              (char)bVar2 != '\0') {
          auVar10 = il2cpp_runtime_helper_03343020((MethodInfo_3251160 *)&stack0xffffffffffffff78);
          plVar5 = auVar10._8_8_;
          if (!bVar7) {
            System_Text_StringBuilder__Append_3b048f0(aSB,0x2c,(MethodInfo *)0x0);
          }
          System_Text_StringBuilder__AppendLine(aSB,(MethodInfo *)0x0);
          System_Text_StringBuilder__Append(aSB,0x20,repeatCount,(MethodInfo *)0x0);
          pMVar9 = (MethodInfo *)&g_data_00000022;
          pSVar3 = System_Text_StringBuilder__Append_3b048f0(aSB,0x22,(MethodInfo *)0x0);
          if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pSVar4 = SimpleJSONFixed_JSONNode__Escape(auVar10._0_8_,pMVar9);
          if (pSVar3 == (System_Text_StringBuilder_o *)0x0) goto code_r0x0407f142;
          pSVar3 = System_Text_StringBuilder__Append_3b03f90(pSVar3,pSVar4,(MethodInfo *)0x0);
          if (pSVar3 == (System_Text_StringBuilder_o *)0x0) goto code_r0x0407f147;
          System_Text_StringBuilder__Append_3b048f0(pSVar3,0x22,(MethodInfo *)0x0);
          if (aMode == 0) {
            System_Text_StringBuilder__Append_3b048f0(aSB,0x3a,(MethodInfo *)0x0);
          }
          else {
            System_Text_StringBuilder__Append_3b03f90(aSB,_DAT_055bbc80,(MethodInfo *)0x0);
          }
          if (plVar5 == (long *)0x0) goto code_r0x0407f14c;
          bVar7 = false;
          (**(code **)(*plVar5 + 0x328))(plVar5,aSB,repeatCount,uVar6,1,*(undefined8 *)(*plVar5 + 0x330));
        }
      }
      else {
        bVar7 = true;
        while (__this_02.fields._index = aMode,
              __this_02.fields._dictionary =
                   (System_Collections_Generic_Dictionary_TKey__TValue__o *)in_stack_ffffffffffffff58._0_8_,
              __this_02.fields._version = in_stack_ffffffffffffff58._8_4_,
              __this_02.fields._current.fields.key = (Il2CppObject *)uVar8,
              __this_02.fields._current.fields.value = (Il2CppObject *)uVar6,
              __this_02.fields._32_8_ = pSVar12,
              bVar2 = System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext
                                (__this_02,(MethodInfo_3251160 *)&stack0xffffffffffffff78),
              (char)bVar2 != '\0') {
          auVar10 = il2cpp_runtime_helper_03343020((MethodInfo_3251160 *)&stack0xffffffffffffff78,MethodInfo_KeyValuePair_2_System_String_SimpleJSONFixed_JSONNode_ge);
          plVar5 = auVar10._8_8_;
          if (!bVar7) {
            System_Text_StringBuilder__Append_3b048f0(aSB,0x2c,(MethodInfo *)0x0);
          }
          pMVar9 = (MethodInfo *)&g_data_00000022;
          pSVar3 = System_Text_StringBuilder__Append_3b048f0(aSB,0x22,(MethodInfo *)0x0);
          if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pSVar4 = SimpleJSONFixed_JSONNode__Escape(auVar10._0_8_,pMVar9);
          if (pSVar3 == (System_Text_StringBuilder_o *)0x0) goto code_r0x0407f142;
          pSVar3 = System_Text_StringBuilder__Append_3b03f90(pSVar3,pSVar4,(MethodInfo *)0x0);
          if (pSVar3 == (System_Text_StringBuilder_o *)0x0) goto code_r0x0407f147;
          System_Text_StringBuilder__Append_3b048f0(pSVar3,0x22,(MethodInfo *)0x0);
          if (aMode == 0) {
            System_Text_StringBuilder__Append_3b048f0(aSB,0x3a,(MethodInfo *)0x0);
          }
          else {
            System_Text_StringBuilder__Append_3b03f90(aSB,_DAT_055bbc80,(MethodInfo *)0x0);
          }
          if (plVar5 == (long *)0x0) goto code_r0x0407f14c;
          bVar7 = false;
          (**(code **)(*plVar5 + 0x328))(plVar5,aSB,repeatCount,uVar6,aMode,*(undefined8 *)(*plVar5 + 0x330));
        }
      }
      __this_03.fields._index = aMode;
      __this_03.fields._dictionary =
           (System_Collections_Generic_Dictionary_TKey__TValue__o *)in_stack_ffffffffffffff58._0_8_;
      __this_03.fields._version = in_stack_ffffffffffffff58._8_4_;
      __this_03.fields._current.fields.key = (Il2CppObject *)uVar8;
      __this_03.fields._current.fields.value = (Il2CppObject *)uVar6;
      __this_03.fields._32_8_ = pSVar12;
      System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose
                (__this_03,(MethodInfo_3251280 *)&stack0xffffffffffffff78);
      in_stack_ffffffffffffff64 = aMode;
      in_stack_ffffffffffffff68 = uVar8;
      goto code_r0x0407f0ff;
    }
  }
code_r0x0407f151:
  do {
    uVar8 = in_stack_ffffffffffffff68;
    aMode = in_stack_ffffffffffffff64;
    auVar11 = il2cpp_runtime_helper_022b2c90();
    in_stack_ffffffffffffff64 = aMode;
    in_stack_ffffffffffffff68 = uVar8;
    if (auVar11._8_4_ != 1) {
code_r0x0407f1d0:
      __this_05.fields._index = in_stack_ffffffffffffff64;
      __this_05.fields._dictionary =
           (System_Collections_Generic_Dictionary_TKey__TValue__o *)in_stack_ffffffffffffff58._0_8_;
      __this_05.fields._version = in_stack_ffffffffffffff58._8_4_;
      __this_05.fields._current.fields.key = (Il2CppObject *)in_stack_ffffffffffffff68;
      __this_05.fields._current.fields.value = (Il2CppObject *)uVar6;
      __this_05.fields._32_8_ = pSVar12;
      System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose
                (__this_05,(MethodInfo_3251280 *)&stack0xffffffffffffff78);
      _Unwind_Resume(auVar11._0_8_);
    }
    plVar5 = (long *)__cxa_begin_catch(auVar11._0_8_);
    lVar1 = *plVar5;
    __cxa_end_catch();
    __this_04.fields._index = in_stack_ffffffffffffff64;
    __this_04.fields._dictionary =
         (System_Collections_Generic_Dictionary_TKey__TValue__o *)in_stack_ffffffffffffff58._0_8_;
    __this_04.fields._version = in_stack_ffffffffffffff58._8_4_;
    __this_04.fields._current.fields.key = (Il2CppObject *)in_stack_ffffffffffffff68;
    __this_04.fields._current.fields.value = (Il2CppObject *)uVar6;
    __this_04.fields._32_8_ = pSVar12;
    System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose
              (__this_04,(MethodInfo_3251280 *)&stack0xffffffffffffff78);
    if (lVar1 != 0) {
      il2cpp_runtime_helper_022fefe0(lVar1);
      goto code_r0x0407f1d0;
    }
code_r0x0407f0ff:
    if (aMode != 1) goto code_r0x0407f124;
    pSVar3 = System_Text_StringBuilder__AppendLine(aSB,(MethodInfo *)0x0);
  } while (pSVar3 == (System_Text_StringBuilder_o *)0x0);
  System_Text_StringBuilder__Append(pSVar3,0x20,(int32_t)uVar8,(MethodInfo *)0x0);
code_r0x0407f124:
  System_Text_StringBuilder__Append_3b048f0(aSB,0x7d,(MethodInfo *)0x0);
  return;
code_r0x0407f142:
  il2cpp_runtime_helper_022b2c90();
code_r0x0407f147:
  il2cpp_runtime_helper_022b2c90();
code_r0x0407f14c:
  il2cpp_runtime_helper_022b2c90();
  in_stack_ffffffffffffff64 = aMode;
  in_stack_ffffffffffffff68 = uVar8;
  goto code_r0x0407f151;
}


// SimpleJSONFixed.JSONObject$$.ctor
// il2cpp: void SimpleJSONFixed_JSONObject___ctor (SimpleJSONFixed_JSONObject_o* __this, const MethodInfo* method);
// 0x407b690

void SimpleJSONFixed_JSONObject___ctor(SimpleJSONFixed_JSONObject_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  
  if (g_data_057ac382 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_String_SimpleJSONFixed_JSONNode);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_string_JSONNode);
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    g_data_057ac382 = '\x01';
  }
  __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_string_JSONNode);
  System_Collections_Generic_Dictionary_object__object____ctor(__this_00,MethodInfo_Dictionary_2_System_String_SimpleJSONFixed_JSONNode);
  (__this->fields).m_Dict = (System_Collections_Generic_Dictionary_string__JSONNode__o *)__this_00;
  il2cpp_runtime_helper_022b4080(&__this->fields);
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


