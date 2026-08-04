// Type: SimpleJSONFixed.JSONNode
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/SimpleJSONFixed/JSONNode.cs
// Prior real C# source (older reference): Assets/Scripts/Utility/SimpleJSON.cs
// --------------------------------

// SimpleJSONFixed.JSONNode.Enumerator$$get_IsValid
// il2cpp: bool SimpleJSONFixed_JSONNode_Enumerator__get_IsValid (SimpleJSONFixed_JSONNode_Enumerator_o __this, const MethodInfo* method);
// 0x407b820

bool_conflict
SimpleJSONFixed_JSONNode_Enumerator__get_IsValid
          (SimpleJSONFixed_JSONNode_Enumerator_o __this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),*(int *)&method->methodPointer != 0);
}


// SimpleJSONFixed.JSONNode.Enumerator$$.ctor
// il2cpp: void SimpleJSONFixed_JSONNode_Enumerator___ctor (SimpleJSONFixed_JSONNode_Enumerator_o __this, System_Collections_Generic_List_Enumerator_JSONNode__o aArrayEnum, const MethodInfo* method);
// 0x407b830

void SimpleJSONFixed_JSONNode_Enumerator___ctor
               (SimpleJSONFixed_JSONNode_Enumerator_o __this,
               System_Collections_Generic_List_Enumerator_JSONNode__o aArrayEnum,MethodInfo *method)

{
  *(undefined4 *)&method->methodPointer = 1;
  method->virtualMethodPointer = (Il2CppMethodPointer)0x0;
  method->invoker_method = (InvokerMethod)0x0;
  method->name = (char *)0x0;
  method->klass = (Il2CppClass *)0x0;
  method->return_type = (Il2CppType *)0x0;
  *(int32_t *)&method->parameters = __this.fields.type;
  *(undefined4 *)((long)&method->parameters + 4) = __this.fields._4_4_;
  *(undefined4 *)&method->field7_0x38 = __this.fields.m_Object.fields._dictionary._0_4_;
  *(undefined4 *)((long)&method->field7_0x38 + 4) = __this.fields.m_Object.fields._dictionary._4_4_;
  method->field8_0x40 = (_union_14)__this.fields.m_Object.fields._8_8_;
  il2cpp_runtime_helper_022b4080(&method->parameters,0);
  return;
}


// SimpleJSONFixed.JSONNode.Enumerator$$.ctor
// il2cpp: void SimpleJSONFixed_JSONNode_Enumerator___ctor (SimpleJSONFixed_JSONNode_Enumerator_o __this, System_Collections_Generic_Dictionary_Enumerator_string__JSONNode__o aDictEnum, const MethodInfo* method);
// 0x407b870

void SimpleJSONFixed_JSONNode_Enumerator___ctor_3f7b870
               (SimpleJSONFixed_JSONNode_Enumerator_o __this,
               System_Collections_Generic_Dictionary_Enumerator_string__JSONNode__o aDictEnum,
               MethodInfo *method)

{
  *(undefined4 *)&method->methodPointer = 2;
  *(int32_t *)&method->virtualMethodPointer = __this.fields.type;
  *(undefined4 *)((long)&method->virtualMethodPointer + 4) = __this.fields._4_4_;
  *(undefined4 *)&method->invoker_method = __this.fields.m_Object.fields._dictionary._0_4_;
  *(undefined4 *)((long)&method->invoker_method + 4) = __this.fields.m_Object.fields._dictionary._4_4_;
  *(int32_t *)&method->name = __this.fields.m_Object.fields._version;
  *(int32_t *)((long)&method->name + 4) = __this.fields.m_Object.fields._index;
  *(undefined4 *)&method->klass = __this.fields.m_Object.fields._current.fields.key._0_4_;
  *(undefined4 *)((long)&method->klass + 4) = __this.fields.m_Object.fields._current.fields.key._4_4_;
  method->return_type = (Il2CppType *)__this.fields.m_Object.fields._current.fields.value;
  il2cpp_runtime_helper_022b4080(&method->virtualMethodPointer,0);
  method->parameters = (Il2CppType **)0x0;
  (method->field7_0x38).rgctx_data = (Il2CppRGCTXData *)0x0;
  (method->field8_0x40).genericMethod = (void *)0x0;
  return;
}


// SimpleJSONFixed.JSONNode.Enumerator$$get_Current
// il2cpp: System_Collections_Generic_KeyValuePair_string__JSONNode__o SimpleJSONFixed_JSONNode_Enumerator__get_Current (SimpleJSONFixed_JSONNode_Enumerator_o __this, const MethodInfo* method);
// 0x407b8c0

System_Collections_Generic_KeyValuePair_string__JSONNode__o
SimpleJSONFixed_JSONNode_Enumerator__get_Current
          (SimpleJSONFixed_JSONNode_Enumerator_o __this,MethodInfo *method)

{
  Il2CppObject *key;
  Il2CppObject *pIVar1;
  MethodInfo_3503420 *in_R8;
  System_Collections_Generic_KeyValuePair_string__JSONNode__Fields SVar2;
  System_Collections_Generic_KeyValuePair_object__object__o __this_00;
  Il2CppObject local_18;
  
  if (g_data_057ac353 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_KeyValuePair_2_System_String_SimpleJSONFixed_JSONNode_ge);
    il2cpp_runtime_helper_023445d0(&MethodInfo_JSONNode_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_KeyValuePair_2_System_String_SimpleJSONFixed_JSONNode);
    g_data_057ac353 = '\x01';
  }
  if (*(int *)&method->methodPointer == 2) {
    SVar2 = (System_Collections_Generic_KeyValuePair_string__JSONNode__Fields)
            il2cpp_runtime_helper_03343020(&method->virtualMethodPointer,MethodInfo_KeyValuePair_2_System_String_SimpleJSONFixed_JSONNode_ge);
  }
  else {
    if (*(int *)&method->methodPointer == 1) {
      pIVar1 = (Il2CppObject *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
      key = (method->field8_0x40).genericMethod;
    }
    else {
      pIVar1 = (Il2CppObject *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
      key = (Il2CppObject *)0x0;
    }
    local_18.monitor = (SimpleJSONFixed_JSONNode_o *)0x0;
    local_18.klass = (Il2CppClass *)0x0;
    __this_00.fields.value = pIVar1;
    __this_00.fields.key = &local_18;
    System_Collections_Generic_KeyValuePair_object__object____ctor(__this_00,key,MethodInfo_KeyValuePair_2_System_String_SimpleJSONFixed_JSONNode,in_R8);
    SVar2.value = local_18.monitor;
    SVar2.key = (System_String_o *)local_18.klass;
  }
  return (System_Collections_Generic_KeyValuePair_string__JSONNode__o)SVar2;
}


// SimpleJSONFixed.JSONNode.Enumerator$$MoveNext
// il2cpp: bool SimpleJSONFixed_JSONNode_Enumerator__MoveNext (SimpleJSONFixed_JSONNode_Enumerator_o __this, const MethodInfo* method);
// 0x407b9a0

bool_conflict
SimpleJSONFixed_JSONNode_Enumerator__MoveNext(SimpleJSONFixed_JSONNode_Enumerator_o __this,MethodInfo *method)

{
  bool_conflict bVar1;
  
  if (g_data_057ac354 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    g_data_057ac354 = '\x01';
  }
  if (*(int *)&method->methodPointer != 2) {
    if (*(int *)&method->methodPointer == 1) {
      bVar1 = System_Collections_Generic_List_Enumerator_object___MoveNext
                        ((System_Collections_Generic_List_Enumerator_object__o)__this.fields._0_24_,
                         (MethodInfo_321A1D0 *)&method->parameters);
      return bVar1;
    }
    return 0;
  }
  bVar1 = System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext
                    ((System_Collections_Generic_Dictionary_Enumerator_object__object__o)__this.fields._0_40_,
                     (MethodInfo_3251160 *)&method->virtualMethodPointer);
  return bVar1;
}


// SimpleJSONFixed.JSONNode.ValueEnumerator$$.ctor
// il2cpp: void SimpleJSONFixed_JSONNode_ValueEnumerator___ctor (SimpleJSONFixed_JSONNode_ValueEnumerator_o __this, System_Collections_Generic_List_Enumerator_JSONNode__o aArrayEnum, const MethodInfo* method);
// 0x407ba10

void SimpleJSONFixed_JSONNode_ValueEnumerator___ctor
               (SimpleJSONFixed_JSONNode_ValueEnumerator_o __this,
               System_Collections_Generic_List_Enumerator_JSONNode__o aArrayEnum,MethodInfo *method)

{
  int32_t local_20 [2];
  undefined4 uStack_18;
  undefined4 uStack_14;
  _union_14 local_10;
  
  local_20[0] = __this.fields.m_Enumerator.fields.type;
  local_20[1] = __this.fields.m_Enumerator.fields._4_4_;
  uStack_18 = __this.fields.m_Enumerator.fields.m_Object.fields._dictionary._0_4_;
  uStack_14 = __this.fields.m_Enumerator.fields.m_Object.fields._dictionary._4_4_;
  local_10 = (_union_14)__this.fields.m_Enumerator.fields.m_Object.fields._8_8_;
  il2cpp_runtime_helper_022b4080(local_20,0);
  method->field8_0x40 = local_10;
  *(int32_t *)&method->parameters = local_20[0];
  *(int32_t *)((long)&method->parameters + 4) = local_20[1];
  *(undefined4 *)&method->field7_0x38 = uStack_18;
  *(undefined4 *)((long)&method->field7_0x38 + 4) = uStack_14;
  *(undefined4 *)&method->klass = 0;
  *(undefined4 *)((long)&method->klass + 4) = 0;
  *(undefined4 *)&method->return_type = 0;
  *(undefined4 *)((long)&method->return_type + 4) = 0;
  *(undefined4 *)&method->invoker_method = 0;
  *(undefined4 *)((long)&method->invoker_method + 4) = 0;
  *(undefined4 *)&method->name = 0;
  *(undefined4 *)((long)&method->name + 4) = 0;
  *(undefined4 *)&method->methodPointer = 1;
  *(undefined4 *)((long)&method->methodPointer + 4) = 0;
  *(undefined4 *)&method->virtualMethodPointer = 0;
  *(undefined4 *)((long)&method->virtualMethodPointer + 4) = 0;
  il2cpp_runtime_helper_022b4080(&method->virtualMethodPointer,0);
  return;
}


// SimpleJSONFixed.JSONNode.ValueEnumerator$$.ctor
// il2cpp: void SimpleJSONFixed_JSONNode_ValueEnumerator___ctor (SimpleJSONFixed_JSONNode_ValueEnumerator_o __this, System_Collections_Generic_Dictionary_Enumerator_string__JSONNode__o aDictEnum, const MethodInfo* method);
// 0x407baa0

void SimpleJSONFixed_JSONNode_ValueEnumerator___ctor_3f7baa0
               (SimpleJSONFixed_JSONNode_ValueEnumerator_o __this,
               System_Collections_Generic_Dictionary_Enumerator_string__JSONNode__o aDictEnum,
               MethodInfo *method)

{
  int32_t aiStack_50 [2];
  undefined4 local_48;
  undefined4 uStack_44;
  int32_t iStack_40;
  int32_t iStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  
  local_28 = 0;
  uStack_20 = 0;
  local_18 = 0;
  aiStack_50[0] = __this.fields.m_Enumerator.fields.type;
  aiStack_50[1] = __this.fields.m_Enumerator.fields._4_4_;
  local_48 = __this.fields.m_Enumerator.fields.m_Object.fields._dictionary._0_4_;
  uStack_44 = __this.fields.m_Enumerator.fields.m_Object.fields._dictionary._4_4_;
  iStack_40 = __this.fields.m_Enumerator.fields.m_Object.fields._version;
  iStack_3c = __this.fields.m_Enumerator.fields.m_Object.fields._index;
  local_38 = __this.fields.m_Enumerator.fields.m_Object.fields._current.fields.key._0_4_;
  uStack_34 = __this.fields.m_Enumerator.fields.m_Object.fields._current.fields.key._4_4_;
  uStack_30 = __this.fields.m_Enumerator.fields.m_Object.fields._current.fields.value;
  il2cpp_runtime_helper_022b4080(aiStack_50,0);
  local_28 = 0;
  uStack_20 = 0;
  local_18 = 0;
  method->parameters = (Il2CppType **)0x0;
  (method->field7_0x38).rgctx_data = (Il2CppRGCTXData *)0x0;
  *(undefined4 *)&method->klass = local_38;
  *(undefined4 *)((long)&method->klass + 4) = uStack_34;
  *(undefined4 *)&method->return_type = (undefined4)uStack_30;
  *(undefined4 *)((long)&method->return_type + 4) = uStack_30._4_4_;
  *(undefined4 *)&method->invoker_method = local_48;
  *(undefined4 *)((long)&method->invoker_method + 4) = uStack_44;
  *(int32_t *)&method->name = iStack_40;
  *(int32_t *)((long)&method->name + 4) = iStack_3c;
  *(undefined4 *)&method->methodPointer = 2;
  *(undefined4 *)((long)&method->methodPointer + 4) = 0;
  *(int32_t *)&method->virtualMethodPointer = aiStack_50[0];
  *(int32_t *)((long)&method->virtualMethodPointer + 4) = aiStack_50[1];
  (method->field8_0x40).genericMethod = (void *)0x0;
  il2cpp_runtime_helper_022b4080(&method->virtualMethodPointer,0);
  return;
}


// SimpleJSONFixed.JSONNode.ValueEnumerator$$.ctor
// il2cpp: void SimpleJSONFixed_JSONNode_ValueEnumerator___ctor (SimpleJSONFixed_JSONNode_ValueEnumerator_o __this, SimpleJSONFixed_JSONNode_Enumerator_o aEnumerator, const MethodInfo* method);
// 0x407bb50

void SimpleJSONFixed_JSONNode_ValueEnumerator___ctor_3f7bb50
               (SimpleJSONFixed_JSONNode_ValueEnumerator_o __this,
               SimpleJSONFixed_JSONNode_Enumerator_o aEnumerator,MethodInfo *method)

{
  (method->field8_0x40).genericMethod = __this.fields.m_Enumerator.fields.m_Array.fields._current;
  *(undefined4 *)&method->parameters = __this.fields.m_Enumerator.fields.m_Array.fields._list._0_4_;
  *(undefined4 *)((long)&method->parameters + 4) =
       __this.fields.m_Enumerator.fields.m_Array.fields._list._4_4_;
  *(int32_t *)&method->field7_0x38 = __this.fields.m_Enumerator.fields.m_Array.fields._index;
  *(int32_t *)((long)&method->field7_0x38 + 4) = __this.fields.m_Enumerator.fields.m_Array.fields._version;
  *(undefined4 *)&method->klass =
       __this.fields.m_Enumerator.fields.m_Object.fields._current.fields.value._0_4_;
  *(undefined4 *)((long)&method->klass + 4) =
       __this.fields.m_Enumerator.fields.m_Object.fields._current.fields.value._4_4_;
  *(int32_t *)&method->return_type = __this.fields.m_Enumerator.fields.m_Object.fields._getEnumeratorRetType;
  *(undefined4 *)((long)&method->return_type + 4) = __this.fields.m_Enumerator.fields.m_Object.fields._36_4_;
  *(int32_t *)&method->invoker_method = __this.fields.m_Enumerator.fields.m_Object.fields._version;
  *(int32_t *)((long)&method->invoker_method + 4) = __this.fields.m_Enumerator.fields.m_Object.fields._index;
  *(undefined4 *)&method->name = __this.fields.m_Enumerator.fields.m_Object.fields._current.fields.key._0_4_;
  *(undefined4 *)((long)&method->name + 4) =
       __this.fields.m_Enumerator.fields.m_Object.fields._current.fields.key._4_4_;
  *(int32_t *)&method->methodPointer = __this.fields.m_Enumerator.fields.type;
  *(undefined4 *)((long)&method->methodPointer + 4) = __this.fields.m_Enumerator.fields._4_4_;
  *(undefined4 *)&method->virtualMethodPointer =
       __this.fields.m_Enumerator.fields.m_Object.fields._dictionary._0_4_;
  *(undefined4 *)((long)&method->virtualMethodPointer + 4) =
       __this.fields.m_Enumerator.fields.m_Object.fields._dictionary._4_4_;
  il2cpp_runtime_helper_022b4080(&method->virtualMethodPointer,0);
  return;
}


// SimpleJSONFixed.JSONNode.ValueEnumerator$$get_Current
// il2cpp: SimpleJSONFixed_JSONNode_o* SimpleJSONFixed_JSONNode_ValueEnumerator__get_Current (SimpleJSONFixed_JSONNode_ValueEnumerator_o __this, const MethodInfo* method);
// 0x407bb90

SimpleJSONFixed_JSONNode_o *
SimpleJSONFixed_JSONNode_ValueEnumerator__get_Current
          (SimpleJSONFixed_JSONNode_ValueEnumerator_o __this,MethodInfo *method)

{
  SimpleJSONFixed_JSONNode_Enumerator_o __this_00;
  undefined8 unaff_RBX;
  System_Collections_Generic_KeyValuePair_string__JSONNode__o SVar1;
  undefined8 unaff_retaddr;
  
  unique0x10000082 =
       (SimpleJSONFixed_JSONNode_ValueEnumerator_o)
       (SimpleJSONFixed_JSONNode_ValueEnumerator_o)__this.fields.m_Enumerator.fields;
  __this_00.fields.m_Object.fields._dictionary =
       (System_Collections_Generic_Dictionary_TKey__TValue__o *)unaff_retaddr;
  if (g_data_057ac355 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_JSONNode_get_Value);
    g_data_057ac355 = '\x01';
  }
  __this_00.fields._0_8_ = unaff_RBX;
  SVar1 = SimpleJSONFixed_JSONNode_Enumerator__get_Current(__this_00,method);
  return SVar1.fields.value;
}


// SimpleJSONFixed.JSONNode.ValueEnumerator$$MoveNext
// il2cpp: bool SimpleJSONFixed_JSONNode_ValueEnumerator__MoveNext (SimpleJSONFixed_JSONNode_ValueEnumerator_o __this, const MethodInfo* method);
// 0x407bbc0

bool_conflict
SimpleJSONFixed_JSONNode_ValueEnumerator__MoveNext
          (SimpleJSONFixed_JSONNode_ValueEnumerator_o __this,MethodInfo *method)

{
  bool_conflict bVar1;
  
  if (g_data_057ac354 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    g_data_057ac354 = '\x01';
  }
  if (*(int *)&method->methodPointer != 2) {
    if (*(int *)&method->methodPointer == 1) {
      bVar1 = System_Collections_Generic_List_Enumerator_object___MoveNext
                        ((System_Collections_Generic_List_Enumerator_object__o)
                         __this.fields.m_Enumerator.fields._0_24_,(MethodInfo_321A1D0 *)&method->parameters);
      return bVar1;
    }
    return 0;
  }
  bVar1 = System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext
                    ((System_Collections_Generic_Dictionary_Enumerator_object__object__o)
                     __this.fields.m_Enumerator.fields._0_40_,
                     (MethodInfo_3251160 *)&method->virtualMethodPointer);
  return bVar1;
}


// SimpleJSONFixed.JSONNode.ValueEnumerator$$GetEnumerator
// il2cpp: SimpleJSONFixed_JSONNode_ValueEnumerator_o SimpleJSONFixed_JSONNode_ValueEnumerator__GetEnumerator (SimpleJSONFixed_JSONNode_ValueEnumerator_o __this, const MethodInfo* method);
// 0x407bc30

SimpleJSONFixed_JSONNode_ValueEnumerator_o *
SimpleJSONFixed_JSONNode_ValueEnumerator__GetEnumerator
          (SimpleJSONFixed_JSONNode_ValueEnumerator_o *__return_storage_ptr__,
          SimpleJSONFixed_JSONNode_ValueEnumerator_o __this,MethodInfo *method)

{
  Il2CppMethodPointer pIVar1;
  System_Collections_Generic_Dictionary_TKey__TValue__o *pSVar2;
  InvokerMethod pIVar3;
  Il2CppObject *pIVar4;
  Il2CppClass *pIVar5;
  Il2CppType *pIVar6;
  _union_13 _Var7;
  
  (__return_storage_ptr__->fields).m_Enumerator.fields.m_Array.fields._current =
       (SimpleJSONFixed_JSONNode_o *)method->field8_0x40;
  pIVar1 = method->methodPointer;
  pSVar2 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)method->virtualMethodPointer;
  pIVar3 = method->invoker_method;
  pIVar4 = (Il2CppObject *)method->name;
  pIVar5 = method->klass;
  pIVar6 = method->return_type;
  _Var7 = method->field7_0x38;
  (__return_storage_ptr__->fields).m_Enumerator.fields.m_Array.fields._list =
       (System_Collections_Generic_List_T__o *)method->parameters;
  *(_union_13 *)&(__return_storage_ptr__->fields).m_Enumerator.fields.m_Array.fields._index = _Var7;
  *(Il2CppClass **)
   ((long)&(__return_storage_ptr__->fields).m_Enumerator.fields.m_Object.fields._current.fields + 8) = pIVar5;
  *(Il2CppType **)&(__return_storage_ptr__->fields).m_Enumerator.fields.m_Object.fields._getEnumeratorRetType
       = pIVar6;
  *(InvokerMethod *)&(__return_storage_ptr__->fields).m_Enumerator.fields.m_Object.fields._version = pIVar3;
  (__return_storage_ptr__->fields).m_Enumerator.fields.m_Object.fields._current.fields.key = pIVar4;
  *(Il2CppMethodPointer *)&(__return_storage_ptr__->fields).m_Enumerator.fields = pIVar1;
  (__return_storage_ptr__->fields).m_Enumerator.fields.m_Object.fields._dictionary = pSVar2;
  return __return_storage_ptr__;
}


// SimpleJSONFixed.JSONNode.KeyEnumerator$$.ctor
// il2cpp: void SimpleJSONFixed_JSONNode_KeyEnumerator___ctor (SimpleJSONFixed_JSONNode_KeyEnumerator_o __this, System_Collections_Generic_List_Enumerator_JSONNode__o aArrayEnum, const MethodInfo* method);
// 0x407bc60

void SimpleJSONFixed_JSONNode_KeyEnumerator___ctor
               (SimpleJSONFixed_JSONNode_KeyEnumerator_o __this,
               System_Collections_Generic_List_Enumerator_JSONNode__o aArrayEnum,MethodInfo *method)

{
  int32_t local_20 [2];
  undefined4 uStack_18;
  undefined4 uStack_14;
  _union_14 local_10;
  
  local_20[0] = __this.fields.m_Enumerator.fields.type;
  local_20[1] = __this.fields.m_Enumerator.fields._4_4_;
  uStack_18 = __this.fields.m_Enumerator.fields.m_Object.fields._dictionary._0_4_;
  uStack_14 = __this.fields.m_Enumerator.fields.m_Object.fields._dictionary._4_4_;
  local_10 = (_union_14)__this.fields.m_Enumerator.fields.m_Object.fields._8_8_;
  il2cpp_runtime_helper_022b4080(local_20,0);
  method->field8_0x40 = local_10;
  *(int32_t *)&method->parameters = local_20[0];
  *(int32_t *)((long)&method->parameters + 4) = local_20[1];
  *(undefined4 *)&method->field7_0x38 = uStack_18;
  *(undefined4 *)((long)&method->field7_0x38 + 4) = uStack_14;
  *(undefined4 *)&method->klass = 0;
  *(undefined4 *)((long)&method->klass + 4) = 0;
  *(undefined4 *)&method->return_type = 0;
  *(undefined4 *)((long)&method->return_type + 4) = 0;
  *(undefined4 *)&method->invoker_method = 0;
  *(undefined4 *)((long)&method->invoker_method + 4) = 0;
  *(undefined4 *)&method->name = 0;
  *(undefined4 *)((long)&method->name + 4) = 0;
  *(undefined4 *)&method->methodPointer = 1;
  *(undefined4 *)((long)&method->methodPointer + 4) = 0;
  *(undefined4 *)&method->virtualMethodPointer = 0;
  *(undefined4 *)((long)&method->virtualMethodPointer + 4) = 0;
  il2cpp_runtime_helper_022b4080(&method->virtualMethodPointer,0);
  return;
}


// SimpleJSONFixed.JSONNode.KeyEnumerator$$.ctor
// il2cpp: void SimpleJSONFixed_JSONNode_KeyEnumerator___ctor (SimpleJSONFixed_JSONNode_KeyEnumerator_o __this, System_Collections_Generic_Dictionary_Enumerator_string__JSONNode__o aDictEnum, const MethodInfo* method);
// 0x407bcf0

void SimpleJSONFixed_JSONNode_KeyEnumerator___ctor_3f7bcf0
               (SimpleJSONFixed_JSONNode_KeyEnumerator_o __this,
               System_Collections_Generic_Dictionary_Enumerator_string__JSONNode__o aDictEnum,
               MethodInfo *method)

{
  int32_t aiStack_50 [2];
  undefined4 local_48;
  undefined4 uStack_44;
  int32_t iStack_40;
  int32_t iStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  
  local_28 = 0;
  uStack_20 = 0;
  local_18 = 0;
  aiStack_50[0] = __this.fields.m_Enumerator.fields.type;
  aiStack_50[1] = __this.fields.m_Enumerator.fields._4_4_;
  local_48 = __this.fields.m_Enumerator.fields.m_Object.fields._dictionary._0_4_;
  uStack_44 = __this.fields.m_Enumerator.fields.m_Object.fields._dictionary._4_4_;
  iStack_40 = __this.fields.m_Enumerator.fields.m_Object.fields._version;
  iStack_3c = __this.fields.m_Enumerator.fields.m_Object.fields._index;
  local_38 = __this.fields.m_Enumerator.fields.m_Object.fields._current.fields.key._0_4_;
  uStack_34 = __this.fields.m_Enumerator.fields.m_Object.fields._current.fields.key._4_4_;
  uStack_30 = __this.fields.m_Enumerator.fields.m_Object.fields._current.fields.value;
  il2cpp_runtime_helper_022b4080(aiStack_50,0);
  local_28 = 0;
  uStack_20 = 0;
  local_18 = 0;
  method->parameters = (Il2CppType **)0x0;
  (method->field7_0x38).rgctx_data = (Il2CppRGCTXData *)0x0;
  *(undefined4 *)&method->klass = local_38;
  *(undefined4 *)((long)&method->klass + 4) = uStack_34;
  *(undefined4 *)&method->return_type = (undefined4)uStack_30;
  *(undefined4 *)((long)&method->return_type + 4) = uStack_30._4_4_;
  *(undefined4 *)&method->invoker_method = local_48;
  *(undefined4 *)((long)&method->invoker_method + 4) = uStack_44;
  *(int32_t *)&method->name = iStack_40;
  *(int32_t *)((long)&method->name + 4) = iStack_3c;
  *(undefined4 *)&method->methodPointer = 2;
  *(undefined4 *)((long)&method->methodPointer + 4) = 0;
  *(int32_t *)&method->virtualMethodPointer = aiStack_50[0];
  *(int32_t *)((long)&method->virtualMethodPointer + 4) = aiStack_50[1];
  (method->field8_0x40).genericMethod = (void *)0x0;
  il2cpp_runtime_helper_022b4080(&method->virtualMethodPointer,0);
  return;
}


// SimpleJSONFixed.JSONNode.KeyEnumerator$$.ctor
// il2cpp: void SimpleJSONFixed_JSONNode_KeyEnumerator___ctor (SimpleJSONFixed_JSONNode_KeyEnumerator_o __this, SimpleJSONFixed_JSONNode_Enumerator_o aEnumerator, const MethodInfo* method);
// 0x407bda0

void SimpleJSONFixed_JSONNode_KeyEnumerator___ctor_3f7bda0
               (SimpleJSONFixed_JSONNode_KeyEnumerator_o __this,
               SimpleJSONFixed_JSONNode_Enumerator_o aEnumerator,MethodInfo *method)

{
  (method->field8_0x40).genericMethod = __this.fields.m_Enumerator.fields.m_Array.fields._current;
  *(undefined4 *)&method->parameters = __this.fields.m_Enumerator.fields.m_Array.fields._list._0_4_;
  *(undefined4 *)((long)&method->parameters + 4) =
       __this.fields.m_Enumerator.fields.m_Array.fields._list._4_4_;
  *(int32_t *)&method->field7_0x38 = __this.fields.m_Enumerator.fields.m_Array.fields._index;
  *(int32_t *)((long)&method->field7_0x38 + 4) = __this.fields.m_Enumerator.fields.m_Array.fields._version;
  *(undefined4 *)&method->klass =
       __this.fields.m_Enumerator.fields.m_Object.fields._current.fields.value._0_4_;
  *(undefined4 *)((long)&method->klass + 4) =
       __this.fields.m_Enumerator.fields.m_Object.fields._current.fields.value._4_4_;
  *(int32_t *)&method->return_type = __this.fields.m_Enumerator.fields.m_Object.fields._getEnumeratorRetType;
  *(undefined4 *)((long)&method->return_type + 4) = __this.fields.m_Enumerator.fields.m_Object.fields._36_4_;
  *(int32_t *)&method->invoker_method = __this.fields.m_Enumerator.fields.m_Object.fields._version;
  *(int32_t *)((long)&method->invoker_method + 4) = __this.fields.m_Enumerator.fields.m_Object.fields._index;
  *(undefined4 *)&method->name = __this.fields.m_Enumerator.fields.m_Object.fields._current.fields.key._0_4_;
  *(undefined4 *)((long)&method->name + 4) =
       __this.fields.m_Enumerator.fields.m_Object.fields._current.fields.key._4_4_;
  *(int32_t *)&method->methodPointer = __this.fields.m_Enumerator.fields.type;
  *(undefined4 *)((long)&method->methodPointer + 4) = __this.fields.m_Enumerator.fields._4_4_;
  *(undefined4 *)&method->virtualMethodPointer =
       __this.fields.m_Enumerator.fields.m_Object.fields._dictionary._0_4_;
  *(undefined4 *)((long)&method->virtualMethodPointer + 4) =
       __this.fields.m_Enumerator.fields.m_Object.fields._dictionary._4_4_;
  il2cpp_runtime_helper_022b4080(&method->virtualMethodPointer,0);
  return;
}


// SimpleJSONFixed.JSONNode.KeyEnumerator$$get_Current
// il2cpp: System_String_o* SimpleJSONFixed_JSONNode_KeyEnumerator__get_Current (SimpleJSONFixed_JSONNode_KeyEnumerator_o __this, const MethodInfo* method);
// 0x407bde0

System_String_o *
SimpleJSONFixed_JSONNode_KeyEnumerator__get_Current
          (SimpleJSONFixed_JSONNode_KeyEnumerator_o __this,MethodInfo *method)

{
  System_Collections_Generic_KeyValuePair_string__JSONNode__o SVar1;
  
  if (g_data_057ac356 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Key);
    g_data_057ac356 = '\x01';
  }
  SVar1 = SimpleJSONFixed_JSONNode_Enumerator__get_Current
                    ((SimpleJSONFixed_JSONNode_Enumerator_o)__this.fields.m_Enumerator.fields,method);
  return SVar1.fields.key;
}


// SimpleJSONFixed.JSONNode.KeyEnumerator$$MoveNext
// il2cpp: bool SimpleJSONFixed_JSONNode_KeyEnumerator__MoveNext (SimpleJSONFixed_JSONNode_KeyEnumerator_o __this, const MethodInfo* method);
// 0x407be10

bool_conflict
SimpleJSONFixed_JSONNode_KeyEnumerator__MoveNext
          (SimpleJSONFixed_JSONNode_KeyEnumerator_o __this,MethodInfo *method)

{
  bool_conflict bVar1;
  
  if (g_data_057ac354 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    g_data_057ac354 = '\x01';
  }
  if (*(int *)&method->methodPointer != 2) {
    if (*(int *)&method->methodPointer == 1) {
      bVar1 = System_Collections_Generic_List_Enumerator_object___MoveNext
                        ((System_Collections_Generic_List_Enumerator_object__o)
                         __this.fields.m_Enumerator.fields._0_24_,(MethodInfo_321A1D0 *)&method->parameters);
      return bVar1;
    }
    return 0;
  }
  bVar1 = System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext
                    ((System_Collections_Generic_Dictionary_Enumerator_object__object__o)
                     __this.fields.m_Enumerator.fields._0_40_,
                     (MethodInfo_3251160 *)&method->virtualMethodPointer);
  return bVar1;
}


// SimpleJSONFixed.JSONNode.KeyEnumerator$$GetEnumerator
// il2cpp: SimpleJSONFixed_JSONNode_KeyEnumerator_o SimpleJSONFixed_JSONNode_KeyEnumerator__GetEnumerator (SimpleJSONFixed_JSONNode_KeyEnumerator_o __this, const MethodInfo* method);
// 0x407be80

SimpleJSONFixed_JSONNode_KeyEnumerator_o *
SimpleJSONFixed_JSONNode_KeyEnumerator__GetEnumerator
          (SimpleJSONFixed_JSONNode_KeyEnumerator_o *__return_storage_ptr__,
          SimpleJSONFixed_JSONNode_KeyEnumerator_o __this,MethodInfo *method)

{
  Il2CppMethodPointer pIVar1;
  System_Collections_Generic_Dictionary_TKey__TValue__o *pSVar2;
  InvokerMethod pIVar3;
  Il2CppObject *pIVar4;
  Il2CppClass *pIVar5;
  Il2CppType *pIVar6;
  _union_13 _Var7;
  
  (__return_storage_ptr__->fields).m_Enumerator.fields.m_Array.fields._current =
       (SimpleJSONFixed_JSONNode_o *)method->field8_0x40;
  pIVar1 = method->methodPointer;
  pSVar2 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)method->virtualMethodPointer;
  pIVar3 = method->invoker_method;
  pIVar4 = (Il2CppObject *)method->name;
  pIVar5 = method->klass;
  pIVar6 = method->return_type;
  _Var7 = method->field7_0x38;
  (__return_storage_ptr__->fields).m_Enumerator.fields.m_Array.fields._list =
       (System_Collections_Generic_List_T__o *)method->parameters;
  *(_union_13 *)&(__return_storage_ptr__->fields).m_Enumerator.fields.m_Array.fields._index = _Var7;
  *(Il2CppClass **)
   ((long)&(__return_storage_ptr__->fields).m_Enumerator.fields.m_Object.fields._current.fields + 8) = pIVar5;
  *(Il2CppType **)&(__return_storage_ptr__->fields).m_Enumerator.fields.m_Object.fields._getEnumeratorRetType
       = pIVar6;
  *(InvokerMethod *)&(__return_storage_ptr__->fields).m_Enumerator.fields.m_Object.fields._version = pIVar3;
  (__return_storage_ptr__->fields).m_Enumerator.fields.m_Object.fields._current.fields.key = pIVar4;
  *(Il2CppMethodPointer *)&(__return_storage_ptr__->fields).m_Enumerator.fields = pIVar1;
  (__return_storage_ptr__->fields).m_Enumerator.fields.m_Object.fields._dictionary = pSVar2;
  return __return_storage_ptr__;
}


// SimpleJSONFixed.JSONNode.LinqEnumerator$$.ctor
// il2cpp: void SimpleJSONFixed_JSONNode_LinqEnumerator___ctor (SimpleJSONFixed_JSONNode_LinqEnumerator_o* __this, SimpleJSONFixed_JSONNode_o* aNode, const MethodInfo* method);
// 0x4079240

void SimpleJSONFixed_JSONNode_LinqEnumerator___ctor
               (SimpleJSONFixed_JSONNode_LinqEnumerator_o *__this,SimpleJSONFixed_JSONNode_o *aNode,
               MethodInfo *method)

{
  int iVar1;
  bool_conflict bVar2;
  MethodInfo *extraout_RDX;
  MethodInfo *method_00;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
  SimpleJSONFixed_JSONNode_o *pSVar3;
  SimpleJSONFixed_JSONNode_o *a;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  SimpleJSONFixed_JSONNode_c *pSStack_c8;
  SimpleJSONFixed_JSONNode_LinqEnumerator_o *pSStack_c0;
  int32_t local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  int32_t local_a0;
  int32_t iStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 local_90;
  undefined4 uStack_8c;
  int32_t iStack_88;
  undefined4 uStack_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  int32_t iStack_78;
  int32_t iStack_74;
  SimpleJSONFixed_JSONNode_o *local_70;
  int32_t local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  int32_t local_58;
  int32_t iStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  int32_t iStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  int32_t iStack_30;
  int32_t iStack_2c;
  SimpleJSONFixed_JSONNode_o *local_28;
  
  if (g_data_057ac357 == '\0') {
    pSStack_c0 = (SimpleJSONFixed_JSONNode_LinqEnumerator_o *)0x4079269;
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    g_data_057ac357 = '\x01';
  }
  pSStack_c0 = (SimpleJSONFixed_JSONNode_LinqEnumerator_o *)0x407927a;
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).m_Node = aNode;
  pSStack_c0 = (SimpleJSONFixed_JSONNode_LinqEnumerator_o *)0x407928d;
  il2cpp_runtime_helper_022b4080(&__this->fields);
  a = (__this->fields).m_Node;
  method_00 = extraout_RDX;
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    pSStack_c0 = (SimpleJSONFixed_JSONNode_LinqEnumerator_o *)0x4079364;
    il2cpp_runtime_helper_02337ed0();
    method_00 = extraout_RDX_00;
  }
  if (g_data_057ac34d == '\0') {
    pSStack_c0 = (SimpleJSONFixed_JSONNode_LinqEnumerator_o *)0x407937d;
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    g_data_057ac34d = '\x01';
    iVar1 = *(int *)(TypeInfo_JSONNode + 0xe4);
    method_00 = extraout_RDX_01;
  }
  else {
    iVar1 = *(int *)(TypeInfo_JSONNode + 0xe4);
  }
  if (iVar1 == 0) {
    pSStack_c0 = (SimpleJSONFixed_JSONNode_LinqEnumerator_o *)0x407939a;
    il2cpp_runtime_helper_02337ed0();
    method_00 = extraout_RDX_02;
  }
  pSStack_c0 = (SimpleJSONFixed_JSONNode_LinqEnumerator_o *)0x40792d1;
  bVar2 = SimpleJSONFixed_JSONNode__op_Equality(a,(Il2CppObject *)0x0,method_00);
  if ((char)bVar2 == '\0') {
    pSVar3 = (__this->fields).m_Node;
    if (pSVar3 == (SimpleJSONFixed_JSONNode_o *)0x0) {
      pSStack_c0 = (SimpleJSONFixed_JSONNode_LinqEnumerator_o *)0x40793a4;
      il2cpp_runtime_helper_022b2c90();
      pSStack_c0 = __this;
      (*(pSVar3->klass->vtable)._32_unknown.methodPtr)(&uStack_108);
      a[4].klass = pSStack_c8;
      *(undefined4 *)&a[3].klass = uStack_d8;
      *(undefined4 *)((long)&a[3].klass + 4) = uStack_d4;
      *(undefined4 *)&a[3].monitor = uStack_d0;
      *(undefined4 *)((long)&a[3].monitor + 4) = uStack_cc;
      *(undefined4 *)&a[2].klass = uStack_e8;
      *(undefined4 *)((long)&a[2].klass + 4) = uStack_e4;
      *(undefined4 *)&a[2].monitor = uStack_e0;
      *(undefined4 *)((long)&a[2].monitor + 4) = uStack_dc;
      *(undefined4 *)&a[1].klass = uStack_f8;
      *(undefined4 *)((long)&a[1].klass + 4) = uStack_f4;
      *(undefined4 *)&a[1].monitor = uStack_f0;
      *(undefined4 *)((long)&a[1].monitor + 4) = uStack_ec;
      *(undefined4 *)&a->klass = uStack_108;
      *(undefined4 *)((long)&a->klass + 4) = uStack_104;
      *(undefined4 *)&a->monitor = uStack_100;
      *(undefined4 *)((long)&a->monitor + 4) = uStack_fc;
      il2cpp_runtime_helper_022b4080(&a->monitor,0);
      return;
    }
    pSStack_c0 = (SimpleJSONFixed_JSONNode_LinqEnumerator_o *)0x40792f6;
    (*(pSVar3->klass->vtable)._32_unknown.methodPtr)
              (&local_b0,pSVar3,(pSVar3->klass->vtable)._32_unknown.method);
    local_28 = local_70;
    local_38 = local_80;
    uStack_34 = uStack_7c;
    iStack_30 = iStack_78;
    iStack_2c = iStack_74;
    local_48 = local_90;
    uStack_44 = uStack_8c;
    iStack_40 = iStack_88;
    uStack_3c = uStack_84;
    local_58 = local_a0;
    iStack_54 = iStack_9c;
    uStack_50 = uStack_98;
    uStack_4c = uStack_94;
    local_68 = local_b0;
    uStack_64 = uStack_ac;
    uStack_60 = uStack_a8;
    uStack_5c = uStack_a4;
    (__this->fields).m_Enumerator.fields.m_Array.fields._current = local_70;
    *(undefined4 *)&(__this->fields).m_Enumerator.fields.m_Array.fields._list = local_80;
    *(undefined4 *)((long)&(__this->fields).m_Enumerator.fields.m_Array.fields._list + 4) = uStack_7c;
    (__this->fields).m_Enumerator.fields.m_Array.fields._index = iStack_78;
    (__this->fields).m_Enumerator.fields.m_Array.fields._version = iStack_74;
    *(undefined4 *)&(__this->fields).m_Enumerator.fields.m_Object.fields._current.fields.value = local_90;
    *(undefined4 *)((long)&(__this->fields).m_Enumerator.fields.m_Object.fields._current.fields.value + 4) =
         uStack_8c;
    (__this->fields).m_Enumerator.fields.m_Object.fields._getEnumeratorRetType = iStack_88;
    *(undefined4 *)&(__this->fields).m_Enumerator.fields.m_Object.fields.field_0x24 = uStack_84;
    (__this->fields).m_Enumerator.fields.m_Object.fields._version = local_a0;
    (__this->fields).m_Enumerator.fields.m_Object.fields._index = iStack_9c;
    *(undefined4 *)&(__this->fields).m_Enumerator.fields.m_Object.fields._current.fields.key = uStack_98;
    *(undefined4 *)((long)&(__this->fields).m_Enumerator.fields.m_Object.fields._current.fields.key + 4) =
         uStack_94;
    (__this->fields).m_Enumerator.fields.type = local_b0;
    *(undefined4 *)&(__this->fields).m_Enumerator.fields.field_0x4 = uStack_ac;
    *(undefined4 *)&(__this->fields).m_Enumerator.fields.m_Object.fields._dictionary = uStack_a8;
    *(undefined4 *)((long)&(__this->fields).m_Enumerator.fields.m_Object.fields._dictionary + 4) = uStack_a4;
    pSStack_c0 = (SimpleJSONFixed_JSONNode_LinqEnumerator_o *)0x4079350;
    il2cpp_runtime_helper_022b4080(&(__this->fields).m_Enumerator.fields.m_Object,0);
  }
  return;
}


// SimpleJSONFixed.JSONNode.LinqEnumerator$$get_Current
// il2cpp: System_Collections_Generic_KeyValuePair_string__JSONNode__o SimpleJSONFixed_JSONNode_LinqEnumerator__get_Current (SimpleJSONFixed_JSONNode_LinqEnumerator_o* __this, const MethodInfo* method);
// 0x407beb0

System_Collections_Generic_KeyValuePair_string__JSONNode__o
SimpleJSONFixed_JSONNode_LinqEnumerator__get_Current
          (SimpleJSONFixed_JSONNode_LinqEnumerator_o *__this,MethodInfo *method)

{
  System_Collections_Generic_KeyValuePair_string__JSONNode__Fields SVar1;
  undefined1 in_stack_00000008 [72];
  
  SVar1 = (System_Collections_Generic_KeyValuePair_string__JSONNode__Fields)
          SimpleJSONFixed_JSONNode_Enumerator__get_Current
                    ((SimpleJSONFixed_JSONNode_Enumerator_o)in_stack_00000008,
                     (MethodInfo *)&(__this->fields).m_Enumerator);
  return (System_Collections_Generic_KeyValuePair_string__JSONNode__o)SVar1;
}


// SimpleJSONFixed.JSONNode.LinqEnumerator$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* SimpleJSONFixed_JSONNode_LinqEnumerator__System_Collections_IEnumerator_get_Current (SimpleJSONFixed_JSONNode_LinqEnumerator_o* __this, const MethodInfo* method);
// 0x407bec0

Il2CppObject *
SimpleJSONFixed_JSONNode_LinqEnumerator__System_Collections_IEnumerator_get_Current
          (SimpleJSONFixed_JSONNode_LinqEnumerator_o *__this,MethodInfo *method)

{
  SimpleJSONFixed_JSONNode_Enumerator_o __this_00;
  Il2CppObject *pIVar1;
  undefined8 unaff_RBX;
  undefined1 in_stack_00000000 [48];
  undefined1 in_stack_ffffffffffffffe8 [16];
  
  if (g_data_057ac358 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_KeyValuePair_string_JSONNode);
    g_data_057ac358 = '\x01';
  }
  __this_00.fields.m_Object.fields._version = (int)unaff_RBX;
  __this_00.fields.m_Object.fields._index = (int)((ulong)unaff_RBX >> 0x20);
  __this_00.fields.type = in_stack_ffffffffffffffe8._0_4_;
  __this_00.fields._4_4_ = in_stack_ffffffffffffffe8._4_4_;
  __this_00.fields.m_Object.fields._dictionary =
       (System_Collections_Generic_Dictionary_TKey__TValue__o *)in_stack_ffffffffffffffe8._8_8_;
  __this_00.fields._24_48_ = in_stack_00000000;
  SimpleJSONFixed_JSONNode_Enumerator__get_Current(__this_00,(MethodInfo *)&(__this->fields).m_Enumerator);
  pIVar1 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(TypeInfo_KeyValuePair_string_JSONNode,&stack0xffffffffffffffe8);
  return pIVar1;
}


// SimpleJSONFixed.JSONNode.LinqEnumerator$$MoveNext
// il2cpp: bool SimpleJSONFixed_JSONNode_LinqEnumerator__MoveNext (SimpleJSONFixed_JSONNode_LinqEnumerator_o* __this, const MethodInfo* method);
// 0x407bf20

bool_conflict
SimpleJSONFixed_JSONNode_LinqEnumerator__MoveNext
          (SimpleJSONFixed_JSONNode_LinqEnumerator_o *__this,MethodInfo *method)

{
  int iVar1;
  System_Collections_Generic_Dictionary_Enumerator_object__object__o __this_00;
  bool_conflict bVar2;
  undefined1 in_stack_00000008 [24];
  undefined1 in_stack_00000020 [16];
  
  if (g_data_057ac354 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    g_data_057ac354 = '\x01';
  }
  iVar1 = (__this->fields).m_Enumerator.fields.type;
  if (iVar1 != 2) {
    if (iVar1 == 1) {
      bVar2 = System_Collections_Generic_List_Enumerator_object___MoveNext
                        ((System_Collections_Generic_List_Enumerator_object__o)in_stack_00000008,
                         (MethodInfo_321A1D0 *)&(__this->fields).m_Enumerator.fields.m_Array);
      return bVar2;
    }
    return 0;
  }
  __this_00.fields._24_16_ = in_stack_00000020;
  __this_00.fields._0_24_ = in_stack_00000008;
  bVar2 = System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext
                    (__this_00,(MethodInfo_3251160 *)&(__this->fields).m_Enumerator.fields.m_Object);
  return bVar2;
}


// SimpleJSONFixed.JSONNode.LinqEnumerator$$Dispose
// il2cpp: void SimpleJSONFixed_JSONNode_LinqEnumerator__Dispose (SimpleJSONFixed_JSONNode_LinqEnumerator_o* __this, const MethodInfo* method);
// 0x407bf90

void SimpleJSONFixed_JSONNode_LinqEnumerator__Dispose
               (SimpleJSONFixed_JSONNode_LinqEnumerator_o *__this,MethodInfo *method)

{
  SimpleJSONFixed_JSONNode_Enumerator_o *pSVar1;
  
  (__this->fields).m_Node = (SimpleJSONFixed_JSONNode_o *)0x0;
  il2cpp_runtime_helper_022b4080(&__this->fields,0);
  (__this->fields).m_Enumerator.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  pSVar1 = &(__this->fields).m_Enumerator;
  (pSVar1->fields).m_Array.fields._index = 0;
  (pSVar1->fields).m_Array.fields._version = 0;
  *(Il2CppObject **)((long)&(__this->fields).m_Enumerator.fields.m_Object.fields._current.fields + 8) =
       (Il2CppObject *)0x0;
  *(undefined8 *)&(__this->fields).m_Enumerator.fields.m_Object.fields._getEnumeratorRetType = 0;
  pSVar1 = &(__this->fields).m_Enumerator;
  (pSVar1->fields).m_Object.fields._version = 0;
  (pSVar1->fields).m_Object.fields._index = 0;
  (__this->fields).m_Enumerator.fields.m_Object.fields._current.fields.key = (Il2CppObject *)0x0;
  *(undefined8 *)&(__this->fields).m_Enumerator.fields = 0;
  (__this->fields).m_Enumerator.fields.m_Object.fields._dictionary =
       (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  (__this->fields).m_Enumerator.fields.m_Array.fields._current = (SimpleJSONFixed_JSONNode_o *)0x0;
  return;
}


// SimpleJSONFixed.JSONNode.LinqEnumerator$$GetEnumerator
// il2cpp: System_Collections_Generic_IEnumerator_KeyValuePair_string__JSONNode___o* SimpleJSONFixed_JSONNode_LinqEnumerator__GetEnumerator (SimpleJSONFixed_JSONNode_LinqEnumerator_o* __this, const MethodInfo* method);
// 0x407bfd0

System_Collections_Generic_IEnumerator_KeyValuePair_string__JSONNode___o *
SimpleJSONFixed_JSONNode_LinqEnumerator__GetEnumerator
          (SimpleJSONFixed_JSONNode_LinqEnumerator_o *__this,MethodInfo *method)

{
  SimpleJSONFixed_JSONNode_o *aNode;
  undefined1 auVar1 [16];
  
  if (g_data_057ac359 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_LinqEnumerator);
    g_data_057ac359 = '\x01';
  }
  aNode = (__this->fields).m_Node;
  auVar1 = il2cpp_runtime_helper_023052d0(TypeInfo_LinqEnumerator);
  SimpleJSONFixed_JSONNode_LinqEnumerator___ctor(auVar1._0_8_,aNode,auVar1._8_8_);
  return (System_Collections_Generic_IEnumerator_KeyValuePair_string__JSONNode___o *)auVar1._0_8_;
}


// SimpleJSONFixed.JSONNode.LinqEnumerator$$Reset
// il2cpp: void SimpleJSONFixed_JSONNode_LinqEnumerator__Reset (SimpleJSONFixed_JSONNode_LinqEnumerator_o* __this, const MethodInfo* method);
// 0x407c020

void SimpleJSONFixed_JSONNode_LinqEnumerator__Reset
               (SimpleJSONFixed_JSONNode_LinqEnumerator_o *__this,MethodInfo *method)

{
  int iVar1;
  SimpleJSONFixed_JSONNode_o *pSVar2;
  SimpleJSONFixed_JSONNode_c *aNode;
  bool_conflict bVar3;
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
  SimpleJSONFixed_JSONNode_o *a;
  undefined1 auVar4 [16];
  int32_t local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  int32_t local_a0;
  int32_t iStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 local_90;
  undefined4 uStack_8c;
  int32_t iStack_88;
  undefined4 uStack_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  int32_t iStack_78;
  int32_t iStack_74;
  SimpleJSONFixed_JSONNode_o *local_70;
  int32_t local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  int32_t local_58;
  int32_t iStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  int32_t iStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  int32_t iStack_30;
  int32_t iStack_2c;
  SimpleJSONFixed_JSONNode_o *local_28;
  
  if (g_data_057ac35a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    g_data_057ac35a = '\x01';
    in_RDX = extraout_RDX;
  }
  a = (__this->fields).m_Node;
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    in_RDX = extraout_RDX_00;
  }
  if (g_data_057ac34d == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    g_data_057ac34d = '\x01';
    iVar1 = *(int *)(TypeInfo_JSONNode + 0xe4);
    in_RDX = extraout_RDX_01;
  }
  else {
    iVar1 = *(int *)(TypeInfo_JSONNode + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
    in_RDX = extraout_RDX_02;
  }
  bVar3 = SimpleJSONFixed_JSONNode__op_Equality(a,(Il2CppObject *)0x0,in_RDX);
  if ((char)bVar3 == '\0') {
    pSVar2 = (__this->fields).m_Node;
    if (pSVar2 == (SimpleJSONFixed_JSONNode_o *)0x0) {
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057ac35b == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_LinqEnumerator);
        g_data_057ac35b = '\x01';
      }
      aNode = a[1].klass;
      auVar4 = il2cpp_runtime_helper_023052d0(TypeInfo_LinqEnumerator);
      SimpleJSONFixed_JSONNode_LinqEnumerator___ctor
                (auVar4._0_8_,(SimpleJSONFixed_JSONNode_o *)aNode,auVar4._8_8_);
      return;
    }
    (*(pSVar2->klass->vtable)._32_unknown.methodPtr)
              (&local_b0,pSVar2,(pSVar2->klass->vtable)._32_unknown.method);
    local_28 = local_70;
    local_38 = local_80;
    uStack_34 = uStack_7c;
    iStack_30 = iStack_78;
    iStack_2c = iStack_74;
    local_48 = local_90;
    uStack_44 = uStack_8c;
    iStack_40 = iStack_88;
    uStack_3c = uStack_84;
    local_58 = local_a0;
    iStack_54 = iStack_9c;
    uStack_50 = uStack_98;
    uStack_4c = uStack_94;
    local_68 = local_b0;
    uStack_64 = uStack_ac;
    uStack_60 = uStack_a8;
    uStack_5c = uStack_a4;
    (__this->fields).m_Enumerator.fields.m_Array.fields._current = local_70;
    *(undefined4 *)&(__this->fields).m_Enumerator.fields.m_Array.fields._list = local_80;
    *(undefined4 *)((long)&(__this->fields).m_Enumerator.fields.m_Array.fields._list + 4) = uStack_7c;
    (__this->fields).m_Enumerator.fields.m_Array.fields._index = iStack_78;
    (__this->fields).m_Enumerator.fields.m_Array.fields._version = iStack_74;
    *(undefined4 *)&(__this->fields).m_Enumerator.fields.m_Object.fields._current.fields.value = local_90;
    *(undefined4 *)((long)&(__this->fields).m_Enumerator.fields.m_Object.fields._current.fields.value + 4) =
         uStack_8c;
    (__this->fields).m_Enumerator.fields.m_Object.fields._getEnumeratorRetType = iStack_88;
    *(undefined4 *)&(__this->fields).m_Enumerator.fields.m_Object.fields.field_0x24 = uStack_84;
    (__this->fields).m_Enumerator.fields.m_Object.fields._version = local_a0;
    (__this->fields).m_Enumerator.fields.m_Object.fields._index = iStack_9c;
    *(undefined4 *)&(__this->fields).m_Enumerator.fields.m_Object.fields._current.fields.key = uStack_98;
    *(undefined4 *)((long)&(__this->fields).m_Enumerator.fields.m_Object.fields._current.fields.key + 4) =
         uStack_94;
    (__this->fields).m_Enumerator.fields.type = local_b0;
    *(undefined4 *)&(__this->fields).m_Enumerator.fields.field_0x4 = uStack_ac;
    *(undefined4 *)&(__this->fields).m_Enumerator.fields.m_Object.fields._dictionary = uStack_a8;
    *(undefined4 *)((long)&(__this->fields).m_Enumerator.fields.m_Object.fields._dictionary + 4) = uStack_a4;
    il2cpp_runtime_helper_022b4080(&(__this->fields).m_Enumerator.fields.m_Object,0);
  }
  return;
}


// SimpleJSONFixed.JSONNode.LinqEnumerator$$System.Collections.IEnumerable.GetEnumerator
// il2cpp: System_Collections_IEnumerator_o* SimpleJSONFixed_JSONNode_LinqEnumerator__System_Collections_IEnumerable_GetEnumerator (SimpleJSONFixed_JSONNode_LinqEnumerator_o* __this, const MethodInfo* method);
// 0x407c160

System_Collections_IEnumerator_o *
SimpleJSONFixed_JSONNode_LinqEnumerator__System_Collections_IEnumerable_GetEnumerator
          (SimpleJSONFixed_JSONNode_LinqEnumerator_o *__this,MethodInfo *method)

{
  SimpleJSONFixed_JSONNode_o *aNode;
  undefined1 auVar1 [16];
  
  if (g_data_057ac35b == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_LinqEnumerator);
    g_data_057ac35b = '\x01';
  }
  aNode = (__this->fields).m_Node;
  auVar1 = il2cpp_runtime_helper_023052d0(TypeInfo_LinqEnumerator);
  SimpleJSONFixed_JSONNode_LinqEnumerator___ctor(auVar1._0_8_,aNode,auVar1._8_8_);
  return (System_Collections_IEnumerator_o *)auVar1._0_8_;
}


// SimpleJSONFixed.JSONNode.<get_Children>d__43$$.ctor
// il2cpp: void SimpleJSONFixed_JSONNode__get_Children_d__43___ctor (SimpleJSONFixed_JSONNode__get_Children_d__43_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x4078fd0

void SimpleJSONFixed_JSONNode__get_Children_d__43___ctor
               (SimpleJSONFixed_JSONNode__get_Children_d__43_o *__this,int32_t __1__state,MethodInfo *method)

{
  int32_t iVar1;
  
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  iVar1 = System_Environment__get_CurrentManagedThreadId((MethodInfo *)0x0);
  (__this->fields).__l__initialThreadId = iVar1;
  return;
}


// SimpleJSONFixed.JSONNode.<get_Children>d__43$$System.IDisposable.Dispose
// il2cpp: void SimpleJSONFixed_JSONNode__get_Children_d__43__System_IDisposable_Dispose (SimpleJSONFixed_JSONNode__get_Children_d__43_o* __this, const MethodInfo* method);
// 0x407c1b0

void SimpleJSONFixed_JSONNode__get_Children_d__43__System_IDisposable_Dispose
               (SimpleJSONFixed_JSONNode__get_Children_d__43_o *__this,MethodInfo *method)

{
  return;
}


// SimpleJSONFixed.JSONNode.<get_Children>d__43$$MoveNext
// il2cpp: bool SimpleJSONFixed_JSONNode__get_Children_d__43__MoveNext (SimpleJSONFixed_JSONNode__get_Children_d__43_o* __this, const MethodInfo* method);
// 0x407c1c0

bool_conflict
SimpleJSONFixed_JSONNode__get_Children_d__43__MoveNext
          (SimpleJSONFixed_JSONNode__get_Children_d__43_o *__this,MethodInfo *method)

{
  if ((__this->fields).__1__state != 0) {
    return 0;
  }
  (__this->fields).__1__state = -1;
  return 0;
}


// SimpleJSONFixed.JSONNode.<get_Children>d__43$$System.Collections.Generic.IEnumerator<SimpleJSONFixed.JSONNode>.get_Current
// il2cpp: SimpleJSONFixed_JSONNode_o* SimpleJSONFixed_JSONNode__get_Children_d__43__System_Collections_Generic_IEnumerator_SimpleJSONFixed_JSONNode__get_Current (SimpleJSONFixed_JSONNode__get_Children_d__43_o* __this, const MethodInfo* method);
// 0x407c1e0

SimpleJSONFixed_JSONNode_o *
SimpleJSONFixed_JSONNode__get_Children_d__43__System_Collections_Generic_IEnumerator_SimpleJSONFixed_JSONNode__get_Current
          (SimpleJSONFixed_JSONNode__get_Children_d__43_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// SimpleJSONFixed.JSONNode.<get_Children>d__43$$System.Collections.IEnumerator.Reset
// il2cpp: void SimpleJSONFixed_JSONNode__get_Children_d__43__System_Collections_IEnumerator_Reset (SimpleJSONFixed_JSONNode__get_Children_d__43_o* __this, const MethodInfo* method);
// 0x407c1f0

void SimpleJSONFixed_JSONNode__get_Children_d__43__System_Collections_IEnumerator_Reset
               (SimpleJSONFixed_JSONNode__get_Children_d__43_o *__this,MethodInfo *method)

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


// SimpleJSONFixed.JSONNode.<get_Children>d__43$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* SimpleJSONFixed_JSONNode__get_Children_d__43__System_Collections_IEnumerator_get_Current (SimpleJSONFixed_JSONNode__get_Children_d__43_o* __this, const MethodInfo* method);
// 0x407c230

Il2CppObject *
SimpleJSONFixed_JSONNode__get_Children_d__43__System_Collections_IEnumerator_get_Current
          (SimpleJSONFixed_JSONNode__get_Children_d__43_o *__this,MethodInfo *method)

{
  return (Il2CppObject *)(__this->fields).__2__current;
}


// SimpleJSONFixed.JSONNode.<get_Children>d__43$$System.Collections.Generic.IEnumerable<SimpleJSONFixed.JSONNode>.GetEnumerator
// il2cpp: System_Collections_Generic_IEnumerator_JSONNode__o* SimpleJSONFixed_JSONNode__get_Children_d__43__System_Collections_Generic_IEnumerable_SimpleJSONFixed_JSONNode__GetEnumerator (SimpleJSONFixed_JSONNode__get_Children_d__43_o* __this, const MethodInfo* method);
// 0x407c240

System_Collections_Generic_IEnumerator_JSONNode__o *
SimpleJSONFixed_JSONNode__get_Children_d__43__System_Collections_Generic_IEnumerable_SimpleJSONFixed_JSONNode__GetEnumerator
          (SimpleJSONFixed_JSONNode__get_Children_d__43_o *__this,MethodInfo *method)

{
  int iVar1;
  int32_t iVar2;
  Il2CppObject *__this_00;
  
  if (g_data_057ac35c == '\0') {
    il2cpp_runtime_helper_023445d0();
    g_data_057ac35c = '\x01';
  }
  if (((__this->fields).__1__state == -2) &&
     (iVar1 = (__this->fields).__l__initialThreadId,
     iVar2 = System_Environment__get_CurrentManagedThreadId((MethodInfo *)0x0), iVar1 == iVar2)) {
    (__this->fields).__1__state = 0;
    return (System_Collections_Generic_IEnumerator_JSONNode__o *)__this;
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_get_Children_d__43);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  *(undefined4 *)&__this_00[1].klass = 0;
  iVar2 = System_Environment__get_CurrentManagedThreadId((MethodInfo *)0x0);
  *(int32_t *)&__this_00[2].klass = iVar2;
  return (System_Collections_Generic_IEnumerator_JSONNode__o *)__this_00;
}


// SimpleJSONFixed.JSONNode.<get_Children>d__43$$System.Collections.IEnumerable.GetEnumerator
// il2cpp: System_Collections_IEnumerator_o* SimpleJSONFixed_JSONNode__get_Children_d__43__System_Collections_IEnumerable_GetEnumerator (SimpleJSONFixed_JSONNode__get_Children_d__43_o* __this, const MethodInfo* method);
// 0x407c2c0

System_Collections_IEnumerator_o *
SimpleJSONFixed_JSONNode__get_Children_d__43__System_Collections_IEnumerable_GetEnumerator
          (SimpleJSONFixed_JSONNode__get_Children_d__43_o *__this,MethodInfo *method)

{
  int iVar1;
  int32_t iVar2;
  Il2CppObject *__this_00;
  
  if (g_data_057ac35c == '\0') {
    il2cpp_runtime_helper_023445d0();
    g_data_057ac35c = '\x01';
  }
  if (((__this->fields).__1__state == -2) &&
     (iVar1 = (__this->fields).__l__initialThreadId,
     iVar2 = System_Environment__get_CurrentManagedThreadId((MethodInfo *)0x0), iVar1 == iVar2)) {
    (__this->fields).__1__state = 0;
    return (System_Collections_IEnumerator_o *)__this;
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_get_Children_d__43);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  *(undefined4 *)&__this_00[1].klass = 0;
  iVar2 = System_Environment__get_CurrentManagedThreadId((MethodInfo *)0x0);
  *(int32_t *)&__this_00[2].klass = iVar2;
  return (System_Collections_IEnumerator_o *)__this_00;
}


// SimpleJSONFixed.JSONNode.<get_DeepChildren>d__45$$.ctor
// il2cpp: void SimpleJSONFixed_JSONNode__get_DeepChildren_d__45___ctor (SimpleJSONFixed_JSONNode__get_DeepChildren_d__45_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x4079080

void SimpleJSONFixed_JSONNode__get_DeepChildren_d__45___ctor
               (SimpleJSONFixed_JSONNode__get_DeepChildren_d__45_o *__this,int32_t __1__state,
               MethodInfo *method)

{
  int32_t iVar1;
  
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  iVar1 = System_Environment__get_CurrentManagedThreadId((MethodInfo *)0x0);
  (__this->fields).__l__initialThreadId = iVar1;
  return;
}


// SimpleJSONFixed.JSONNode.<get_DeepChildren>d__45$$System.IDisposable.Dispose
// il2cpp: void SimpleJSONFixed_JSONNode__get_DeepChildren_d__45__System_IDisposable_Dispose (SimpleJSONFixed_JSONNode__get_DeepChildren_d__45_o* __this, const MethodInfo* method);
// 0x407c340

void SimpleJSONFixed_JSONNode__get_DeepChildren_d__45__System_IDisposable_Dispose
               (SimpleJSONFixed_JSONNode__get_DeepChildren_d__45_o *__this,MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  uint uVar4;
  System_Collections_Generic_IEnumerator_JSONNode__o *pSVar5;
  System_Collections_Generic_IEnumerator_JSONNode__c *pSVar6;
  Il2CppRuntimeInterfaceOffsetPair *pIVar7;
  VirtualInvokeData *pVVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  undefined1 auVar12 [12];
  
  uVar4 = (__this->fields).__1__state;
  if ((uVar4 & 0xfffffffe) == 0xfffffffc) {
    if ((uVar4 == 1) || (uVar4 == 0xfffffffc)) goto label_0407c370;
  }
  else {
    if (uVar4 != 1) {
      return;
    }
label_0407c370:
    if (g_data_057ac35f == '\0') {
      il2cpp_runtime_helper_023445d0();
      g_data_057ac35f = '\x01';
    }
    (__this->fields).__1__state = -3;
    pSVar5 = (__this->fields).__7__wrap2;
    if (pSVar5 != (System_Collections_Generic_IEnumerator_JSONNode__o *)0x0) {
      pSVar6 = pSVar5->klass;
      uVar1._0_1_ = (pSVar6->_2).rank;
      uVar1._1_1_ = (pSVar6->_2).minimumAlignment;
      if ((ulong)uVar1 != 0) {
        pIVar7 = (pSVar6->_1).interfaceOffsets;
        lVar11 = 0;
        do {
          if (*(long *)((long)&pIVar7->interfaceType + lVar11) == TypeInfo_IDisposable) {
            pVVar8 = pSVar6->vtable + *(int *)((long)&pIVar7->offset + lVar11);
            goto label_0407c40b;
          }
          lVar11 = lVar11 + 0x10;
        } while ((ulong)uVar1 << 4 != lVar11);
      }
      pVVar8 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(pSVar5,TypeInfo_IDisposable,0);
label_0407c40b:
      (*pVVar8->methodPtr)(pSVar5,pVVar8->method);
      lVar11 = 0;
      goto joined_r0x0407c3f5;
    }
  }
  lVar11 = 0;
joined_r0x0407c3f5:
  do {
    if (g_data_057ac35e == '\0') {
      il2cpp_runtime_helper_023445d0();
      g_data_057ac35e = '\x01';
    }
    (__this->fields).__1__state = -1;
    pSVar5 = (__this->fields).__7__wrap1;
    if (pSVar5 != (System_Collections_Generic_IEnumerator_JSONNode__o *)0x0) {
      pSVar6 = pSVar5->klass;
      uVar2._0_1_ = (pSVar6->_2).rank;
      uVar2._1_1_ = (pSVar6->_2).minimumAlignment;
      if ((ulong)uVar2 != 0) {
        pIVar7 = (pSVar6->_1).interfaceOffsets;
        lVar10 = 0;
        do {
          if (*(long *)((long)&pIVar7->interfaceType + lVar10) == TypeInfo_IDisposable) {
            pVVar8 = pSVar6->vtable + *(int *)((long)&pIVar7->offset + lVar10);
            goto label_0407c49d;
          }
          lVar10 = lVar10 + 0x10;
        } while ((ulong)uVar2 << 4 != lVar10);
      }
      pVVar8 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(pSVar5,TypeInfo_IDisposable,0);
label_0407c49d:
      (*pVVar8->methodPtr)(pSVar5,pVVar8->method);
    }
    if (lVar11 == 0) {
      return;
    }
    auVar12 = il2cpp_runtime_helper_022fefe0();
    if (auVar12._8_4_ != 1) break;
    plVar9 = (long *)__cxa_begin_catch();
    lVar11 = *plVar9;
    __cxa_end_catch();
  } while( true );
  if (g_data_057ac35e == '\0') {
    il2cpp_runtime_helper_023445d0();
    g_data_057ac35e = '\x01';
  }
  (__this->fields).__1__state = -1;
  pSVar5 = (__this->fields).__7__wrap1;
  if (pSVar5 != (System_Collections_Generic_IEnumerator_JSONNode__o *)0x0) {
    pSVar6 = pSVar5->klass;
    uVar3._0_1_ = (pSVar6->_2).rank;
    uVar3._1_1_ = (pSVar6->_2).minimumAlignment;
    if ((ulong)uVar3 != 0) {
      pIVar7 = (pSVar6->_1).interfaceOffsets;
      lVar11 = 0;
      do {
        if (*(long *)((long)&pIVar7->interfaceType + lVar11) == TypeInfo_IDisposable) {
          pVVar8 = pSVar6->vtable + *(int *)((long)&pIVar7->offset + lVar11);
          goto label_0407c56d;
        }
        lVar11 = lVar11 + 0x10;
      } while ((ulong)uVar3 << 4 != lVar11);
    }
    pVVar8 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(pSVar5,TypeInfo_IDisposable,0);
label_0407c56d:
    (*pVVar8->methodPtr)(pSVar5,pVVar8->method);
  }
  _Unwind_Resume(auVar12._0_8_);
}


// SimpleJSONFixed.JSONNode.<get_DeepChildren>d__45$$MoveNext
// il2cpp: bool SimpleJSONFixed_JSONNode__get_DeepChildren_d__45__MoveNext (SimpleJSONFixed_JSONNode__get_DeepChildren_d__45_o* __this, const MethodInfo* method);
// 0x407c5b0

bool_conflict
SimpleJSONFixed_JSONNode__get_DeepChildren_d__45__MoveNext
          (SimpleJSONFixed_JSONNode__get_DeepChildren_d__45_o *__this,MethodInfo *method)

{
  System_Collections_Generic_IEnumerator_JSONNode__o **ppSVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  ushort uVar6;
  ushort uVar7;
  ushort uVar8;
  int iVar9;
  SimpleJSONFixed_JSONNode_c *pSVar10;
  System_Collections_Generic_IEnumerator_JSONNode__o *pSVar11;
  Il2CppClass *pIVar12;
  System_Collections_Generic_IEnumerator_JSONNode__c *pSVar13;
  Il2CppRuntimeInterfaceOffsetPair *pIVar14;
  code *vtableDispatch;
  char cVar15;
  int32_t iVar16;
  bool_conflict bVar17;
  long *plVar18;
  undefined8 *puVar19;
  void *pvVar20;
  Il2CppObject *__this_00;
  Il2CppMethodPointer *ppIVar21;
  SimpleJSONFixed_JSONNode_o *pSVar22;
  undefined8 uVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [12];
  
  if (g_data_057ac35d == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerable_JSONNode);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerator_JSONNode);
    il2cpp_runtime_helper_023445d0();
    g_data_057ac35d = '\x01';
  }
  iVar9 = (__this->fields).__1__state;
  if (iVar9 == 1) goto label_0407c84a;
  if (iVar9 != 0) {
    return 0;
  }
  pSVar22 = (__this->fields).__4__this;
  (__this->fields).__1__state = -1;
  if (pSVar22 == (SimpleJSONFixed_JSONNode_o *)0x0) {
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    pSVar10 = pSVar22->klass;
    method = (pSVar10->vtable)._27_get_Children.method;
    plVar18 = (long *)(*(pSVar10->vtable)._27_get_Children.methodPtr)();
    if (plVar18 != (long *)0x0) {
      lVar24 = *plVar18;
      if ((ulong)*(ushort *)(lVar24 + 0x12e) != 0) {
        lVar25 = 0;
        do {
          if (*(long *)(*(long *)(lVar24 + 0xb0) + lVar25) == TypeInfo_IEnumerable_JSONNode) {
            puVar19 = (undefined8 *)
                      ((long)*(int *)(*(long *)(lVar24 + 0xb0) + 8 + lVar25) * 0x10 + lVar24 + 0x138);
            goto label_0407c691;
          }
          lVar25 = lVar25 + 0x10;
        } while ((ulong)*(ushort *)(lVar24 + 0x12e) << 4 != lVar25);
      }
      puVar19 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar18,TypeInfo_IEnumerable_JSONNode,0);
label_0407c691:
      method = (MethodInfo *)(*(code *)*puVar19)(plVar18,puVar19[1]);
      (__this->fields).__7__wrap1 = (System_Collections_Generic_IEnumerator_JSONNode__o *)method;
      il2cpp_runtime_helper_022b4080();
      (__this->fields).__1__state = -3;
      pSVar11 = (__this->fields).__7__wrap1;
      while (pSVar11 != (System_Collections_Generic_IEnumerator_JSONNode__o *)0x0) {
        pSVar13 = pSVar11->klass;
        uVar6._0_1_ = (pSVar13->_2).rank;
        uVar6._1_1_ = (pSVar13->_2).minimumAlignment;
        if ((ulong)uVar6 != 0) {
          pIVar14 = (pSVar13->_1).interfaceOffsets;
          lVar24 = 0;
          do {
            if (*(long *)((long)&pIVar14->interfaceType + lVar24) == TypeInfo_IEnumerator) {
              ppIVar21 = &pSVar13->vtable[*(int *)((long)&pIVar14->offset + lVar24)].methodPtr;
              goto label_0407c9e1;
            }
            lVar24 = lVar24 + 0x10;
          } while ((ulong)uVar6 << 4 != lVar24);
        }
        ppIVar21 = (Il2CppMethodPointer *)il2cpp_runtime_helper_02300d20(pSVar11,TypeInfo_IEnumerator,0);
label_0407c9e1:
        method = (MethodInfo *)ppIVar21[1];
        cVar15 = (**ppIVar21)();
        ppSVar1 = &(__this->fields).__7__wrap1;
        if (cVar15 == '\0') {
          if (g_data_057ac35e == '\0') {
            il2cpp_runtime_helper_023445d0();
            g_data_057ac35e = '\x01';
          }
          (__this->fields).__1__state = -1;
          pSVar11 = (__this->fields).__7__wrap1;
          if (pSVar11 == (System_Collections_Generic_IEnumerator_JSONNode__o *)0x0) goto label_0407cb25;
          pSVar13 = pSVar11->klass;
          uVar7._0_1_ = (pSVar13->_2).rank;
          uVar7._1_1_ = (pSVar13->_2).minimumAlignment;
          if ((ulong)uVar7 == 0) goto label_0407ca63;
          pIVar14 = (pSVar13->_1).interfaceOffsets;
          lVar24 = 0;
          goto label_0407ca50;
        }
        pSVar11 = *ppSVar1;
        if (pSVar11 == (System_Collections_Generic_IEnumerator_JSONNode__o *)0x0) {
label_0407cb43:
          il2cpp_runtime_helper_022b2c90();
          break;
        }
        pSVar13 = pSVar11->klass;
        uVar2._0_1_ = (pSVar13->_2).rank;
        uVar2._1_1_ = (pSVar13->_2).minimumAlignment;
        if ((ulong)uVar2 != 0) {
          pIVar14 = (pSVar13->_1).interfaceOffsets;
          lVar24 = 0;
          do {
            if (*(long *)((long)&pIVar14->interfaceType + lVar24) == TypeInfo_IEnumerator_JSONNode) {
              ppIVar21 = &pSVar13->vtable[*(int *)((long)&pIVar14->offset + lVar24)].methodPtr;
              goto label_0407c761;
            }
            lVar24 = lVar24 + 0x10;
          } while ((ulong)uVar2 << 4 != lVar24);
        }
        ppIVar21 = (Il2CppMethodPointer *)il2cpp_runtime_helper_02300d20(pSVar11,TypeInfo_IEnumerator_JSONNode,0);
label_0407c761:
        method = (MethodInfo *)ppIVar21[1];
        pvVar20 = (void *)(**ppIVar21)(pSVar11);
        if (pvVar20 == (void *)0x0) {
          il2cpp_runtime_helper_022b2c90();
          goto label_0407cb43;
        }
        if (g_data_057ac334 == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_get_DeepChildren_d__45);
          g_data_057ac334 = '\x01';
        }
        __this_00 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_get_DeepChildren_d__45);
        System_Object___ctor(__this_00,(MethodInfo *)0x0);
        *(undefined4 *)&__this_00[1].klass = 0xfffffffe;
        iVar16 = System_Environment__get_CurrentManagedThreadId((MethodInfo *)0x0);
        *(int32_t *)&__this_00[2].klass = iVar16;
        __this_00[2].monitor = pvVar20;
        il2cpp_runtime_helper_022b4080(&__this_00[2].monitor,pvVar20);
        pIVar12 = __this_00->klass;
        uVar3._0_1_ = (pIVar12->_2).rank;
        uVar3._1_1_ = (pIVar12->_2).minimumAlignment;
        if ((ulong)uVar3 != 0) {
          pIVar14 = (pIVar12->_1).interfaceOffsets;
          lVar24 = 0;
          do {
            if (*(long *)((long)&pIVar14->interfaceType + lVar24) == TypeInfo_IEnumerable_JSONNode) {
              ppIVar21 = &pIVar12->vtable[*(int *)((long)&pIVar14->offset + lVar24)].methodPtr;
              goto label_0407c831;
            }
            lVar24 = lVar24 + 0x10;
          } while ((ulong)uVar3 << 4 != lVar24);
        }
        ppIVar21 = (Il2CppMethodPointer *)il2cpp_runtime_helper_02300d20(__this_00,TypeInfo_IEnumerable_JSONNode,0);
label_0407c831:
        method = (MethodInfo *)(**ppIVar21)(__this_00,(MethodInfo *)ppIVar21[1]);
        (__this->fields).__7__wrap2 = (System_Collections_Generic_IEnumerator_JSONNode__o *)method;
        il2cpp_runtime_helper_022b4080();
label_0407c84a:
        (__this->fields).__1__state = -4;
        pSVar11 = (__this->fields).__7__wrap2;
        if (pSVar11 == (System_Collections_Generic_IEnumerator_JSONNode__o *)0x0) goto label_0407cb4d;
        pSVar13 = pSVar11->klass;
        uVar4._0_1_ = (pSVar13->_2).rank;
        uVar4._1_1_ = (pSVar13->_2).minimumAlignment;
        if ((ulong)uVar4 != 0) {
          pIVar14 = (pSVar13->_1).interfaceOffsets;
          lVar24 = 0;
          do {
            if (*(long *)((long)&pIVar14->interfaceType + lVar24) == TypeInfo_IEnumerator) {
              ppIVar21 = &pSVar13->vtable[*(int *)((long)&pIVar14->offset + lVar24)].methodPtr;
              goto label_0407c8c1;
            }
            lVar24 = lVar24 + 0x10;
          } while ((ulong)uVar4 << 4 != lVar24);
        }
        ppIVar21 = (Il2CppMethodPointer *)il2cpp_runtime_helper_02300d20(pSVar11,TypeInfo_IEnumerator,0);
label_0407c8c1:
        method = (MethodInfo *)ppIVar21[1];
        cVar15 = (**ppIVar21)();
        ppSVar1 = &(__this->fields).__7__wrap2;
        if (cVar15 != '\0') {
          pSVar11 = *ppSVar1;
          if (pSVar11 == (System_Collections_Generic_IEnumerator_JSONNode__o *)0x0) goto label_0407cb52;
          pSVar13 = pSVar11->klass;
          uVar8._0_1_ = (pSVar13->_2).rank;
          uVar8._1_1_ = (pSVar13->_2).minimumAlignment;
          if ((ulong)uVar8 == 0) goto label_0407cabf;
          pIVar14 = (pSVar13->_1).interfaceOffsets;
          lVar24 = 0;
          goto label_0407cab0;
        }
        if (g_data_057ac35f == '\0') {
          il2cpp_runtime_helper_023445d0();
          g_data_057ac35f = '\x01';
        }
        (__this->fields).__1__state = -3;
        pSVar11 = (__this->fields).__7__wrap2;
        if (pSVar11 != (System_Collections_Generic_IEnumerator_JSONNode__o *)0x0) {
          pSVar13 = pSVar11->klass;
          uVar5._0_1_ = (pSVar13->_2).rank;
          uVar5._1_1_ = (pSVar13->_2).minimumAlignment;
          if ((ulong)uVar5 != 0) {
            pIVar14 = (pSVar13->_1).interfaceOffsets;
            lVar24 = 0;
            do {
              if (*(long *)((long)&pIVar14->interfaceType + lVar24) == TypeInfo_IDisposable) {
                ppIVar21 = &pSVar13->vtable[*(int *)((long)&pIVar14->offset + lVar24)].methodPtr;
                goto label_0407c95d;
              }
              lVar24 = lVar24 + 0x10;
            } while ((ulong)uVar5 << 4 != lVar24);
          }
          ppIVar21 = (Il2CppMethodPointer *)il2cpp_runtime_helper_02300d20(pSVar11,TypeInfo_IDisposable,0);
label_0407c95d:
          (**ppIVar21)(pSVar11);
        }
        *ppSVar1 = (System_Collections_Generic_IEnumerator_JSONNode__o *)0x0;
        method = (MethodInfo *)0x0;
        il2cpp_runtime_helper_022b4080();
        pSVar11 = (__this->fields).__7__wrap1;
      }
      il2cpp_runtime_helper_022b2c90();
label_0407cb4d:
      il2cpp_runtime_helper_022b2c90();
label_0407cb52:
      auVar28 = il2cpp_runtime_helper_022b2c90();
      goto joined_r0x0407c6d1;
    }
  }
  auVar28 = il2cpp_runtime_helper_022b2c90();
joined_r0x0407c6d1:
  uVar23 = auVar28._0_8_;
  if (auVar28._8_4_ == 1) {
    plVar18 = (long *)__cxa_begin_catch(uVar23);
    lVar24 = *plVar18;
    __cxa_end_catch();
    if (lVar24 == 0) {
      return 0;
    }
    SimpleJSONFixed_JSONNode__get_DeepChildren_d__45__System_IDisposable_Dispose(__this,method);
    uVar23 = il2cpp_runtime_helper_022fefe0(lVar24);
    if (lVar24 != 0) {
      SimpleJSONFixed_JSONNode__get_DeepChildren_d__45__System_IDisposable_Dispose(__this,method);
      lVar24 = il2cpp_runtime_helper_022fefe0(lVar24);
      bVar17 = il2cpp_runtime_helper_01f66400();
      if (g_data_057ac35f == '\0') {
        bVar17 = il2cpp_runtime_helper_023445d0();
        g_data_057ac35f = '\x01';
      }
      *(undefined4 *)(lVar24 + 0x10) = 0xfffffffd;
      plVar18 = *(long **)(lVar24 + 0x38);
      if (plVar18 == (long *)0x0) {
        return bVar17;
      }
      lVar24 = *plVar18;
      if ((ulong)*(ushort *)(lVar24 + 0x12e) != 0) {
        lVar25 = *(long *)(lVar24 + 0xb0);
        lVar26 = 0;
        do {
          if (*(long *)(lVar25 + lVar26) == TypeInfo_IDisposable) {
            auVar27._8_8_ = lVar25;
            auVar27._0_8_ = lVar24 + (long)*(int *)(lVar25 + 8 + lVar26) * 0x10 + 0x138;
            goto label_0407cc9f;
          }
          lVar26 = lVar26 + 0x10;
        } while ((ulong)*(ushort *)(lVar24 + 0x12e) << 4 != lVar26);
      }
      auVar27 = il2cpp_runtime_helper_02300d20(plVar18,TypeInfo_IDisposable,0);
label_0407cc9f:
      vtableDispatch = (code *)*auVar27._0_8_;
      bVar17 = (*vtableDispatch)(plVar18,auVar27._0_8_[1],auVar27._8_8_,vtableDispatch);
      return bVar17;
    }
  }
  _Unwind_Resume(uVar23);
  while (lVar24 = lVar24 + 0x10, (ulong)uVar7 << 4 != lVar24) {
label_0407ca50:
    if (*(long *)((long)&pIVar14->interfaceType + lVar24) == TypeInfo_IDisposable) {
      ppIVar21 = &pSVar13->vtable[*(int *)((long)&pIVar14->offset + lVar24)].methodPtr;
      goto label_0407cb1c;
    }
  }
label_0407ca63:
  ppIVar21 = (Il2CppMethodPointer *)il2cpp_runtime_helper_02300d20(pSVar11,TypeInfo_IDisposable,0);
label_0407cb1c:
  (**ppIVar21)(pSVar11,(MethodInfo *)ppIVar21[1]);
label_0407cb25:
  *ppSVar1 = (System_Collections_Generic_IEnumerator_JSONNode__o *)0x0;
  il2cpp_runtime_helper_022b4080(ppSVar1,0);
  return 0;
  while (lVar24 = lVar24 + 0x10, (ulong)uVar8 << 4 != lVar24) {
label_0407cab0:
    if (*(long *)((long)&pIVar14->interfaceType + lVar24) == TypeInfo_IEnumerator_JSONNode) {
      ppIVar21 = &pSVar13->vtable[*(int *)((long)&pIVar14->offset + lVar24)].methodPtr;
      goto label_0407cae1;
    }
  }
label_0407cabf:
  ppIVar21 = (Il2CppMethodPointer *)il2cpp_runtime_helper_02300d20(pSVar11,TypeInfo_IEnumerator_JSONNode,0);
label_0407cae1:
  pSVar22 = (SimpleJSONFixed_JSONNode_o *)(**ppIVar21)(pSVar11,(MethodInfo *)ppIVar21[1]);
  (__this->fields).__2__current = pSVar22;
  il2cpp_runtime_helper_022b4080(&(__this->fields).__2__current,pSVar22);
  (__this->fields).__1__state = 1;
  return (bool_conflict)CONCAT71((int7)((ulong)ppSVar1 >> 8),1);
}


// SimpleJSONFixed.JSONNode.<get_DeepChildren>d__45$$<>m__Finally1
// il2cpp: void SimpleJSONFixed_JSONNode__get_DeepChildren_d__45____m__Finally1 (SimpleJSONFixed_JSONNode__get_DeepChildren_d__45_o* __this, const MethodInfo* method);
// 0x407ccb0

void SimpleJSONFixed_JSONNode__get_DeepChildren_d__45____m__Finally1
               (SimpleJSONFixed_JSONNode__get_DeepChildren_d__45_o *__this,MethodInfo *method)

{
  ushort uVar1;
  System_Collections_Generic_IEnumerator_JSONNode__o *pSVar2;
  System_Collections_Generic_IEnumerator_JSONNode__c *pSVar3;
  Il2CppRuntimeInterfaceOffsetPair *pIVar4;
  code *vtableDispatch;
  long lVar5;
  undefined1 auVar6 [16];
  
  if (g_data_057ac35e == '\0') {
    il2cpp_runtime_helper_023445d0();
    g_data_057ac35e = '\x01';
  }
  (__this->fields).__1__state = -1;
  pSVar2 = (__this->fields).__7__wrap1;
  if (pSVar2 == (System_Collections_Generic_IEnumerator_JSONNode__o *)0x0) {
    return;
  }
  pSVar3 = pSVar2->klass;
  uVar1._0_1_ = (pSVar3->_2).rank;
  uVar1._1_1_ = (pSVar3->_2).minimumAlignment;
  if ((ulong)uVar1 != 0) {
    pIVar4 = (pSVar3->_1).interfaceOffsets;
    lVar5 = 0;
    do {
      if (*(long *)((long)&pIVar4->interfaceType + lVar5) == TypeInfo_IDisposable) {
        auVar6._8_8_ = pIVar4;
        auVar6._0_8_ = pSVar3->vtable + *(int *)((long)&pIVar4->offset + lVar5);
        goto label_0407cd3f;
      }
      lVar5 = lVar5 + 0x10;
    } while ((ulong)uVar1 << 4 != lVar5);
  }
  auVar6 = il2cpp_runtime_helper_02300d20(pSVar2,TypeInfo_IDisposable,0);
label_0407cd3f:
  vtableDispatch = (code *)*auVar6._0_8_;
  (*vtableDispatch)(pSVar2,auVar6._0_8_[1],auVar6._8_8_,vtableDispatch);
  return;
}


// SimpleJSONFixed.JSONNode.<get_DeepChildren>d__45$$<>m__Finally2
// il2cpp: void SimpleJSONFixed_JSONNode__get_DeepChildren_d__45____m__Finally2 (SimpleJSONFixed_JSONNode__get_DeepChildren_d__45_o* __this, const MethodInfo* method);
// 0x407cc10

void SimpleJSONFixed_JSONNode__get_DeepChildren_d__45____m__Finally2
               (SimpleJSONFixed_JSONNode__get_DeepChildren_d__45_o *__this,MethodInfo *method)

{
  ushort uVar1;
  System_Collections_Generic_IEnumerator_JSONNode__o *pSVar2;
  System_Collections_Generic_IEnumerator_JSONNode__c *pSVar3;
  Il2CppRuntimeInterfaceOffsetPair *pIVar4;
  code *vtableDispatch;
  long lVar5;
  undefined1 auVar6 [16];
  
  if (g_data_057ac35f == '\0') {
    il2cpp_runtime_helper_023445d0();
    g_data_057ac35f = '\x01';
  }
  (__this->fields).__1__state = -3;
  pSVar2 = (__this->fields).__7__wrap2;
  if (pSVar2 == (System_Collections_Generic_IEnumerator_JSONNode__o *)0x0) {
    return;
  }
  pSVar3 = pSVar2->klass;
  uVar1._0_1_ = (pSVar3->_2).rank;
  uVar1._1_1_ = (pSVar3->_2).minimumAlignment;
  if ((ulong)uVar1 != 0) {
    pIVar4 = (pSVar3->_1).interfaceOffsets;
    lVar5 = 0;
    do {
      if (*(long *)((long)&pIVar4->interfaceType + lVar5) == TypeInfo_IDisposable) {
        auVar6._8_8_ = pIVar4;
        auVar6._0_8_ = pSVar3->vtable + *(int *)((long)&pIVar4->offset + lVar5);
        goto label_0407cc9f;
      }
      lVar5 = lVar5 + 0x10;
    } while ((ulong)uVar1 << 4 != lVar5);
  }
  auVar6 = il2cpp_runtime_helper_02300d20(pSVar2,TypeInfo_IDisposable,0);
label_0407cc9f:
  vtableDispatch = (code *)*auVar6._0_8_;
  (*vtableDispatch)(pSVar2,auVar6._0_8_[1],auVar6._8_8_,vtableDispatch);
  return;
}


// SimpleJSONFixed.JSONNode.<get_DeepChildren>d__45$$System.Collections.Generic.IEnumerator<SimpleJSONFixed.JSONNode>.get_Current
// il2cpp: SimpleJSONFixed_JSONNode_o* SimpleJSONFixed_JSONNode__get_DeepChildren_d__45__System_Collections_Generic_IEnumerator_SimpleJSONFixed_JSONNode__get_Current (SimpleJSONFixed_JSONNode__get_DeepChildren_d__45_o* __this, const MethodInfo* method);
// 0x407cd50

SimpleJSONFixed_JSONNode_o *
SimpleJSONFixed_JSONNode__get_DeepChildren_d__45__System_Collections_Generic_IEnumerator_SimpleJSONFixed_JSONNode__get_Current
          (SimpleJSONFixed_JSONNode__get_DeepChildren_d__45_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// SimpleJSONFixed.JSONNode.<get_DeepChildren>d__45$$System.Collections.IEnumerator.Reset
// il2cpp: void SimpleJSONFixed_JSONNode__get_DeepChildren_d__45__System_Collections_IEnumerator_Reset (SimpleJSONFixed_JSONNode__get_DeepChildren_d__45_o* __this, const MethodInfo* method);
// 0x407cd60

void SimpleJSONFixed_JSONNode__get_DeepChildren_d__45__System_Collections_IEnumerator_Reset
               (SimpleJSONFixed_JSONNode__get_DeepChildren_d__45_o *__this,MethodInfo *method)

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


// SimpleJSONFixed.JSONNode.<get_DeepChildren>d__45$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* SimpleJSONFixed_JSONNode__get_DeepChildren_d__45__System_Collections_IEnumerator_get_Current (SimpleJSONFixed_JSONNode__get_DeepChildren_d__45_o* __this, const MethodInfo* method);
// 0x407cda0

Il2CppObject *
SimpleJSONFixed_JSONNode__get_DeepChildren_d__45__System_Collections_IEnumerator_get_Current
          (SimpleJSONFixed_JSONNode__get_DeepChildren_d__45_o *__this,MethodInfo *method)

{
  return (Il2CppObject *)(__this->fields).__2__current;
}


// SimpleJSONFixed.JSONNode.<get_DeepChildren>d__45$$System.Collections.Generic.IEnumerable<SimpleJSONFixed.JSONNode>.GetEnumerator
// il2cpp: System_Collections_Generic_IEnumerator_JSONNode__o* SimpleJSONFixed_JSONNode__get_DeepChildren_d__45__System_Collections_Generic_IEnumerable_SimpleJSONFixed_JSONNode__GetEnumerator (SimpleJSONFixed_JSONNode__get_DeepChildren_d__45_o* __this, const MethodInfo* method);
// 0x407cdb0

System_Collections_IEnumerator_o *
SimpleJSONFixed_JSONNode__get_DeepChildren_d__45__System_Collections_Generic_IEnumerable_SimpleJSONFixed_JSONNode__GetEnumerator
          (SimpleJSONFixed_JSONNode__get_DeepChildren_d__45_o *__this,MethodInfo *method)

{
  int iVar1;
  int32_t iVar2;
  undefined8 in_RAX;
  Il2CppObject *__this_00;
  undefined8 unaff_RBX;
  SimpleJSONFixed_JSONNode__get_DeepChildren_d__45_o *pSVar3;
  SimpleJSONFixed_JSONNode__get_DeepChildren_d__45_o *unaff_R14;
  
  while( true ) {
    pSVar3 = __this;
    *(SimpleJSONFixed_JSONNode__get_DeepChildren_d__45_o **)((long)register0x00000020 + -8) = unaff_R14;
    *(undefined8 *)((long)register0x00000020 + -0x10) = unaff_RBX;
    *(undefined8 *)((long)register0x00000020 + -0x18) = in_RAX;
    if (g_data_057ac360 == '\0') {
      *(undefined8 *)((long)register0x00000020 + -0x20) = 0x407cdcc;
      il2cpp_runtime_helper_023445d0();
      g_data_057ac360 = '\x01';
    }
    if ((pSVar3->fields).__1__state == -2) {
      iVar1 = (pSVar3->fields).__l__initialThreadId;
      *(undefined8 *)((long)register0x00000020 + -0x20) = 0x407cde5;
      iVar2 = System_Environment__get_CurrentManagedThreadId((MethodInfo *)0x0);
      if (iVar1 == iVar2) {
        (pSVar3->fields).__1__state = 0;
        return (System_Collections_IEnumerator_o *)pSVar3;
      }
    }
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x407ce02;
    __this_00 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_get_DeepChildren_d__45);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x407ce0f;
    System_Object___ctor(__this_00,(MethodInfo *)0x0);
    *(undefined4 *)&__this_00[1].klass = 0;
    __this = (SimpleJSONFixed_JSONNode__get_DeepChildren_d__45_o *)0x0;
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x407ce1d;
    iVar2 = System_Environment__get_CurrentManagedThreadId((MethodInfo *)0x0);
    *(int32_t *)&__this_00[2].klass = iVar2;
    if (__this_00 != (Il2CppObject *)0x0) break;
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x407ce4c;
    in_RAX = il2cpp_runtime_helper_022b2c90();
    unaff_RBX = 0;
    register0x00000020 = (BADSPACEBASE *)((long)register0x00000020 + -0x18);
    unaff_R14 = pSVar3;
  }
  __this_00[2].monitor = (pSVar3->fields).__4__this;
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x407ce39;
  il2cpp_runtime_helper_022b4080(&__this_00[2].monitor);
  return (System_Collections_IEnumerator_o *)__this_00;
}


// SimpleJSONFixed.JSONNode.<get_DeepChildren>d__45$$System.Collections.IEnumerable.GetEnumerator
// il2cpp: System_Collections_IEnumerator_o* SimpleJSONFixed_JSONNode__get_DeepChildren_d__45__System_Collections_IEnumerable_GetEnumerator (SimpleJSONFixed_JSONNode__get_DeepChildren_d__45_o* __this, const MethodInfo* method);
// 0x407ce50

System_Collections_IEnumerator_o *
SimpleJSONFixed_JSONNode__get_DeepChildren_d__45__System_Collections_IEnumerable_GetEnumerator
          (SimpleJSONFixed_JSONNode__get_DeepChildren_d__45_o *__this,MethodInfo *method)

{
  int iVar1;
  int32_t iVar2;
  Il2CppObject *__this_00;
  undefined8 in_RAX;
  undefined8 unaff_RBX;
  SimpleJSONFixed_JSONNode__get_DeepChildren_d__45_o *pSVar3;
  SimpleJSONFixed_JSONNode__get_DeepChildren_d__45_o *unaff_R14;
  
  while( true ) {
    pSVar3 = __this;
    *(SimpleJSONFixed_JSONNode__get_DeepChildren_d__45_o **)((long)register0x00000020 + -8) = unaff_R14;
    *(undefined8 *)((long)register0x00000020 + -0x10) = unaff_RBX;
    *(undefined8 *)((long)register0x00000020 + -0x18) = in_RAX;
    if (g_data_057ac360 == '\0') {
      *(undefined8 *)((long)register0x00000020 + -0x20) = 0x407cdcc;
      il2cpp_runtime_helper_023445d0();
      g_data_057ac360 = '\x01';
    }
    if ((pSVar3->fields).__1__state == -2) {
      iVar1 = (pSVar3->fields).__l__initialThreadId;
      *(undefined8 *)((long)register0x00000020 + -0x20) = 0x407cde5;
      iVar2 = System_Environment__get_CurrentManagedThreadId((MethodInfo *)0x0);
      if (iVar1 == iVar2) {
        (pSVar3->fields).__1__state = 0;
        return (System_Collections_IEnumerator_o *)pSVar3;
      }
    }
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x407ce02;
    __this_00 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_get_DeepChildren_d__45);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x407ce0f;
    System_Object___ctor(__this_00,(MethodInfo *)0x0);
    *(undefined4 *)&__this_00[1].klass = 0;
    __this = (SimpleJSONFixed_JSONNode__get_DeepChildren_d__45_o *)0x0;
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x407ce1d;
    iVar2 = System_Environment__get_CurrentManagedThreadId((MethodInfo *)0x0);
    *(int32_t *)&__this_00[2].klass = iVar2;
    if (__this_00 != (Il2CppObject *)0x0) break;
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x407ce4c;
    in_RAX = il2cpp_runtime_helper_022b2c90();
    unaff_RBX = 0;
    register0x00000020 = (BADSPACEBASE *)((long)register0x00000020 + -0x18);
    unaff_R14 = pSVar3;
  }
  __this_00[2].monitor = (pSVar3->fields).__4__this;
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x407ce39;
  il2cpp_runtime_helper_022b4080(&__this_00[2].monitor);
  return (System_Collections_IEnumerator_o *)__this_00;
}


// SimpleJSONFixed.JSONNode$$get_Item
// il2cpp: SimpleJSONFixed_JSONNode_o* SimpleJSONFixed_JSONNode__get_Item (SimpleJSONFixed_JSONNode_o* __this, int32_t aIndex, const MethodInfo* method);
// 0x4078db0

SimpleJSONFixed_JSONNode_o *
SimpleJSONFixed_JSONNode__get_Item(SimpleJSONFixed_JSONNode_o *__this,int32_t aIndex,MethodInfo *method)

{
  return (SimpleJSONFixed_JSONNode_o *)0x0;
}


// SimpleJSONFixed.JSONNode$$set_Item
// il2cpp: void SimpleJSONFixed_JSONNode__set_Item (SimpleJSONFixed_JSONNode_o* __this, int32_t aIndex, SimpleJSONFixed_JSONNode_o* value, const MethodInfo* method);
// 0x4078dc0

void SimpleJSONFixed_JSONNode__set_Item
               (SimpleJSONFixed_JSONNode_o *__this,int32_t aIndex,SimpleJSONFixed_JSONNode_o *value,
               MethodInfo *method)

{
  return;
}


// SimpleJSONFixed.JSONNode$$get_Item
// il2cpp: SimpleJSONFixed_JSONNode_o* SimpleJSONFixed_JSONNode__get_Item (SimpleJSONFixed_JSONNode_o* __this, System_String_o* aKey, const MethodInfo* method);
// 0x4078dd0

SimpleJSONFixed_JSONNode_o *
SimpleJSONFixed_JSONNode__get_Item_3f78dd0
          (SimpleJSONFixed_JSONNode_o *__this,System_String_o *aKey,MethodInfo *method)

{
  return (SimpleJSONFixed_JSONNode_o *)0x0;
}


// SimpleJSONFixed.JSONNode$$set_Item
// il2cpp: void SimpleJSONFixed_JSONNode__set_Item (SimpleJSONFixed_JSONNode_o* __this, System_String_o* aKey, SimpleJSONFixed_JSONNode_o* value, const MethodInfo* method);
// 0x4078de0

void SimpleJSONFixed_JSONNode__set_Item_3f78de0
               (SimpleJSONFixed_JSONNode_o *__this,System_String_o *aKey,SimpleJSONFixed_JSONNode_o *value,
               MethodInfo *method)

{
  return;
}


// SimpleJSONFixed.JSONNode$$get_Value
// il2cpp: System_String_o* SimpleJSONFixed_JSONNode__get_Value (SimpleJSONFixed_JSONNode_o* __this, const MethodInfo* method);
// 0x4078df0

System_String_o * SimpleJSONFixed_JSONNode__get_Value(SimpleJSONFixed_JSONNode_o *__this,MethodInfo *method)

{
  if (g_data_057ac331 == '\0') {
    il2cpp_runtime_helper_023445d0(&"");
    g_data_057ac331 = '\x01';
  }
  return "";
}


// SimpleJSONFixed.JSONNode$$set_Value
// il2cpp: void SimpleJSONFixed_JSONNode__set_Value (SimpleJSONFixed_JSONNode_o* __this, System_String_o* value, const MethodInfo* method);
// 0x4078e20

void SimpleJSONFixed_JSONNode__set_Value
               (SimpleJSONFixed_JSONNode_o *__this,System_String_o *value,MethodInfo *method)

{
  return;
}


// SimpleJSONFixed.JSONNode$$get_Count
// il2cpp: int32_t SimpleJSONFixed_JSONNode__get_Count (SimpleJSONFixed_JSONNode_o* __this, const MethodInfo* method);
// 0x4078e30

int32_t SimpleJSONFixed_JSONNode__get_Count(SimpleJSONFixed_JSONNode_o *__this,MethodInfo *method)

{
  return 0;
}


// SimpleJSONFixed.JSONNode$$get_IsNumber
// il2cpp: bool SimpleJSONFixed_JSONNode__get_IsNumber (SimpleJSONFixed_JSONNode_o* __this, const MethodInfo* method);
// 0x4078e40

bool_conflict SimpleJSONFixed_JSONNode__get_IsNumber(SimpleJSONFixed_JSONNode_o *__this,MethodInfo *method)

{
  return 0;
}


// SimpleJSONFixed.JSONNode$$get_IsString
// il2cpp: bool SimpleJSONFixed_JSONNode__get_IsString (SimpleJSONFixed_JSONNode_o* __this, const MethodInfo* method);
// 0x4078e50

bool_conflict SimpleJSONFixed_JSONNode__get_IsString(SimpleJSONFixed_JSONNode_o *__this,MethodInfo *method)

{
  return 0;
}


// SimpleJSONFixed.JSONNode$$get_IsBoolean
// il2cpp: bool SimpleJSONFixed_JSONNode__get_IsBoolean (SimpleJSONFixed_JSONNode_o* __this, const MethodInfo* method);
// 0x4078e60

bool_conflict SimpleJSONFixed_JSONNode__get_IsBoolean(SimpleJSONFixed_JSONNode_o *__this,MethodInfo *method)

{
  return 0;
}


// SimpleJSONFixed.JSONNode$$get_IsNull
// il2cpp: bool SimpleJSONFixed_JSONNode__get_IsNull (SimpleJSONFixed_JSONNode_o* __this, const MethodInfo* method);
// 0x4078e70

bool_conflict SimpleJSONFixed_JSONNode__get_IsNull(SimpleJSONFixed_JSONNode_o *__this,MethodInfo *method)

{
  return 0;
}


// SimpleJSONFixed.JSONNode$$get_IsArray
// il2cpp: bool SimpleJSONFixed_JSONNode__get_IsArray (SimpleJSONFixed_JSONNode_o* __this, const MethodInfo* method);
// 0x4078e80

bool_conflict SimpleJSONFixed_JSONNode__get_IsArray(SimpleJSONFixed_JSONNode_o *__this,MethodInfo *method)

{
  return 0;
}


// SimpleJSONFixed.JSONNode$$get_IsObject
// il2cpp: bool SimpleJSONFixed_JSONNode__get_IsObject (SimpleJSONFixed_JSONNode_o* __this, const MethodInfo* method);
// 0x4078e90

bool_conflict SimpleJSONFixed_JSONNode__get_IsObject(SimpleJSONFixed_JSONNode_o *__this,MethodInfo *method)

{
  return 0;
}


// SimpleJSONFixed.JSONNode$$get_Inline
// il2cpp: bool SimpleJSONFixed_JSONNode__get_Inline (SimpleJSONFixed_JSONNode_o* __this, const MethodInfo* method);
// 0x4078ea0

bool_conflict SimpleJSONFixed_JSONNode__get_Inline(SimpleJSONFixed_JSONNode_o *__this,MethodInfo *method)

{
  return 0;
}


// SimpleJSONFixed.JSONNode$$set_Inline
// il2cpp: void SimpleJSONFixed_JSONNode__set_Inline (SimpleJSONFixed_JSONNode_o* __this, bool value, const MethodInfo* method);
// 0x4078eb0

void SimpleJSONFixed_JSONNode__set_Inline
               (SimpleJSONFixed_JSONNode_o *__this,bool_conflict value,MethodInfo *method)

{
  return;
}


// SimpleJSONFixed.JSONNode$$Add
// il2cpp: void SimpleJSONFixed_JSONNode__Add (SimpleJSONFixed_JSONNode_o* __this, System_String_o* aKey, SimpleJSONFixed_JSONNode_o* aItem, const MethodInfo* method);
// 0x4078ec0

void SimpleJSONFixed_JSONNode__Add
               (SimpleJSONFixed_JSONNode_o *__this,System_String_o *aKey,SimpleJSONFixed_JSONNode_o *aItem,
               MethodInfo *method)

{
  return;
}


// SimpleJSONFixed.JSONNode$$Add
// il2cpp: void SimpleJSONFixed_JSONNode__Add (SimpleJSONFixed_JSONNode_o* __this, SimpleJSONFixed_JSONNode_o* aItem, const MethodInfo* method);
// 0x4078ed0

void SimpleJSONFixed_JSONNode__Add_3f78ed0
               (SimpleJSONFixed_JSONNode_o *__this,SimpleJSONFixed_JSONNode_o *aItem,MethodInfo *method)

{
  Il2CppMethodPointer vtableDispatch;
  
  if (g_data_057ac332 == '\0') {
    il2cpp_runtime_helper_023445d0(&"");
    g_data_057ac332 = '\x01';
  }
  vtableDispatch = (__this->klass->vtable)._20_Add.methodPtr;
  (*vtableDispatch)
            (__this,"",aItem,(__this->klass->vtable)._20_Add.method,vtableDispatch);
  return;
}


// SimpleJSONFixed.JSONNode$$Remove
// il2cpp: SimpleJSONFixed_JSONNode_o* SimpleJSONFixed_JSONNode__Remove (SimpleJSONFixed_JSONNode_o* __this, System_String_o* aKey, const MethodInfo* method);
// 0x4078f30

SimpleJSONFixed_JSONNode_o *
SimpleJSONFixed_JSONNode__Remove(SimpleJSONFixed_JSONNode_o *__this,System_String_o *aKey,MethodInfo *method)

{
  return (SimpleJSONFixed_JSONNode_o *)0x0;
}


// SimpleJSONFixed.JSONNode$$Remove
// il2cpp: SimpleJSONFixed_JSONNode_o* SimpleJSONFixed_JSONNode__Remove (SimpleJSONFixed_JSONNode_o* __this, int32_t aIndex, const MethodInfo* method);
// 0x4078f40

SimpleJSONFixed_JSONNode_o *
SimpleJSONFixed_JSONNode__Remove_3f78f40(SimpleJSONFixed_JSONNode_o *__this,int32_t aIndex,MethodInfo *method)

{
  return (SimpleJSONFixed_JSONNode_o *)0x0;
}


// SimpleJSONFixed.JSONNode$$Remove
// il2cpp: SimpleJSONFixed_JSONNode_o* SimpleJSONFixed_JSONNode__Remove (SimpleJSONFixed_JSONNode_o* __this, SimpleJSONFixed_JSONNode_o* aNode, const MethodInfo* method);
// 0x4078f50

SimpleJSONFixed_JSONNode_o *
SimpleJSONFixed_JSONNode__Remove_3f78f50
          (SimpleJSONFixed_JSONNode_o *__this,SimpleJSONFixed_JSONNode_o *aNode,MethodInfo *method)

{
  return aNode;
}


// SimpleJSONFixed.JSONNode$$Clear
// il2cpp: void SimpleJSONFixed_JSONNode__Clear (SimpleJSONFixed_JSONNode_o* __this, const MethodInfo* method);
// 0x4078f60

void SimpleJSONFixed_JSONNode__Clear(SimpleJSONFixed_JSONNode_o *__this,MethodInfo *method)

{
  return;
}


// SimpleJSONFixed.JSONNode$$Clone
// il2cpp: SimpleJSONFixed_JSONNode_o* SimpleJSONFixed_JSONNode__Clone (SimpleJSONFixed_JSONNode_o* __this, const MethodInfo* method);
// 0x4078f70

SimpleJSONFixed_JSONNode_o *
SimpleJSONFixed_JSONNode__Clone(SimpleJSONFixed_JSONNode_o *__this,MethodInfo *method)

{
  return (SimpleJSONFixed_JSONNode_o *)0x0;
}


// SimpleJSONFixed.JSONNode$$get_Children
// il2cpp: System_Collections_Generic_IEnumerable_JSONNode__o* SimpleJSONFixed_JSONNode__get_Children (SimpleJSONFixed_JSONNode_o* __this, const MethodInfo* method);
// 0x4078f80

System_Collections_Generic_IEnumerable_JSONNode__o *
SimpleJSONFixed_JSONNode__get_Children(SimpleJSONFixed_JSONNode_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  Il2CppObject *__this_00;
  
  if (g_data_057ac333 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_get_Children_d__43);
    g_data_057ac333 = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_get_Children_d__43);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  *(undefined4 *)&__this_00[1].klass = 0xfffffffe;
  iVar1 = System_Environment__get_CurrentManagedThreadId((MethodInfo *)0x0);
  *(int32_t *)&__this_00[2].klass = iVar1;
  return (System_Collections_Generic_IEnumerable_JSONNode__o *)__this_00;
}


// SimpleJSONFixed.JSONNode$$get_DeepChildren
// il2cpp: System_Collections_Generic_IEnumerable_JSONNode__o* SimpleJSONFixed_JSONNode__get_DeepChildren (SimpleJSONFixed_JSONNode_o* __this, const MethodInfo* method);
// 0x4079000

System_Collections_Generic_IEnumerable_JSONNode__o *
SimpleJSONFixed_JSONNode__get_DeepChildren(SimpleJSONFixed_JSONNode_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  Il2CppObject *__this_00;
  undefined4 extraout_var;
  undefined4 uVar2;
  Il2CppObject *__this_01;
  
  if (g_data_057ac334 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_get_DeepChildren_d__45);
    g_data_057ac334 = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_get_DeepChildren_d__45);
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


// SimpleJSONFixed.JSONNode$$HasKey
// il2cpp: bool SimpleJSONFixed_JSONNode__HasKey (SimpleJSONFixed_JSONNode_o* __this, System_String_o* aKey, const MethodInfo* method);
// 0x40790b0

bool_conflict
SimpleJSONFixed_JSONNode__HasKey(SimpleJSONFixed_JSONNode_o *__this,System_String_o *aKey,MethodInfo *method)

{
  return 0;
}


// SimpleJSONFixed.JSONNode$$GetValueOrDefault
// il2cpp: SimpleJSONFixed_JSONNode_o* SimpleJSONFixed_JSONNode__GetValueOrDefault (SimpleJSONFixed_JSONNode_o* __this, System_String_o* aKey, SimpleJSONFixed_JSONNode_o* aDefault, const MethodInfo* method);
// 0x40790c0

SimpleJSONFixed_JSONNode_o *
SimpleJSONFixed_JSONNode__GetValueOrDefault
          (SimpleJSONFixed_JSONNode_o *__this,System_String_o *aKey,SimpleJSONFixed_JSONNode_o *aDefault,
          MethodInfo *method)

{
  return aDefault;
}


// SimpleJSONFixed.JSONNode$$ToString
// il2cpp: System_String_o* SimpleJSONFixed_JSONNode__ToString (SimpleJSONFixed_JSONNode_o* __this, const MethodInfo* method);
// 0x40790d0

System_String_o * SimpleJSONFixed_JSONNode__ToString(SimpleJSONFixed_JSONNode_o *__this,MethodInfo *method)

{
  Il2CppMethodPointer UNRECOVERED_JUMPTABLE_00;
  System_Text_StringBuilder_o *__this_00;
  System_String_o *pSVar1;
  System_Text_StringBuilder_o *__this_01;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  System_Text_StringBuilder_o *pSVar2;
  SimpleJSONFixed_JSONNode_o *aNode;
  undefined1 auVar3 [16];
  
  if (g_data_057ac335 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_StringBuilder);
    g_data_057ac335 = '\x01';
  }
  __this_00 = (System_Text_StringBuilder_o *)il2cpp_runtime_helper_023052d0(TypeInfo_StringBuilder);
  System_Text_StringBuilder___ctor(__this_00,(MethodInfo *)0x0);
  pSVar2 = __this_00;
  aNode = __this;
  (*(__this->klass->vtable)._31_unknown.methodPtr)
            (__this,__this_00,0,0,0,(__this->klass->vtable)._31_unknown.method);
  if (__this_00 != (System_Text_StringBuilder_o *)0x0) {
    UNRECOVERED_JUMPTABLE_00 = (__this_00->klass->vtable)._3_ToString.methodPtr;
    pSVar1 = (System_String_o *)
             (*UNRECOVERED_JUMPTABLE_00)
                       (__this_00,(__this_00->klass->vtable)._3_ToString.method,extraout_RDX,
                        UNRECOVERED_JUMPTABLE_00);
    return pSVar1;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac336 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_StringBuilder);
    g_data_057ac336 = '\x01';
  }
  __this_01 = (System_Text_StringBuilder_o *)il2cpp_runtime_helper_023052d0(TypeInfo_StringBuilder);
  System_Text_StringBuilder___ctor(__this_01,(MethodInfo *)0x0);
  (*(aNode->klass->vtable)._31_unknown.methodPtr)
            (aNode,__this_01,0,(ulong)pSVar2 & 0xffffffff,1,(aNode->klass->vtable)._31_unknown.method,
             __this_00,__this);
  if (__this_01 != (System_Text_StringBuilder_o *)0x0) {
    UNRECOVERED_JUMPTABLE_00 = (__this_01->klass->vtable)._3_ToString.methodPtr;
    pSVar1 = (System_String_o *)
             (*UNRECOVERED_JUMPTABLE_00)
                       (__this_01,(__this_01->klass->vtable)._3_ToString.method,extraout_RDX_00,
                        UNRECOVERED_JUMPTABLE_00);
    return pSVar1;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac337 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_LinqEnumerator);
    g_data_057ac337 = '\x01';
  }
  auVar3 = il2cpp_runtime_helper_023052d0(TypeInfo_LinqEnumerator);
  SimpleJSONFixed_JSONNode_LinqEnumerator___ctor(auVar3._0_8_,aNode,auVar3._8_8_);
  return (System_String_o *)auVar3._0_8_;
}


// SimpleJSONFixed.JSONNode$$ToString
// il2cpp: System_String_o* SimpleJSONFixed_JSONNode__ToString (SimpleJSONFixed_JSONNode_o* __this, int32_t aIndent, const MethodInfo* method);
// 0x4079160

System_String_o *
SimpleJSONFixed_JSONNode__ToString_3f79160
          (SimpleJSONFixed_JSONNode_o *__this,int32_t aIndent,MethodInfo *method)

{
  Il2CppMethodPointer vtableDispatch;
  System_Text_StringBuilder_o *__this_00;
  System_String_o *pSVar1;
  undefined8 extraout_RDX;
  undefined1 auVar2 [16];
  
  if (g_data_057ac336 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_StringBuilder);
    g_data_057ac336 = '\x01';
  }
  __this_00 = (System_Text_StringBuilder_o *)il2cpp_runtime_helper_023052d0(TypeInfo_StringBuilder);
  System_Text_StringBuilder___ctor(__this_00,(MethodInfo *)0x0);
  (*(__this->klass->vtable)._31_unknown.methodPtr)
            (__this,__this_00,0,(ulong)(uint)aIndent,1,(__this->klass->vtable)._31_unknown.method);
  if (__this_00 != (System_Text_StringBuilder_o *)0x0) {
    vtableDispatch = (__this_00->klass->vtable)._3_ToString.methodPtr;
    pSVar1 = (System_String_o *)
             (*vtableDispatch)
                       (__this_00,(__this_00->klass->vtable)._3_ToString.method,extraout_RDX,
                        vtableDispatch);
    return pSVar1;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac337 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_LinqEnumerator);
    g_data_057ac337 = '\x01';
  }
  auVar2 = il2cpp_runtime_helper_023052d0(TypeInfo_LinqEnumerator);
  SimpleJSONFixed_JSONNode_LinqEnumerator___ctor(auVar2._0_8_,__this,auVar2._8_8_);
  return (System_String_o *)auVar2._0_8_;
}


// SimpleJSONFixed.JSONNode$$get_Linq
// il2cpp: System_Collections_Generic_IEnumerable_KeyValuePair_string__JSONNode___o* SimpleJSONFixed_JSONNode__get_Linq (SimpleJSONFixed_JSONNode_o* __this, const MethodInfo* method);
// 0x40791f0

System_Collections_Generic_IEnumerable_KeyValuePair_string__JSONNode___o *
SimpleJSONFixed_JSONNode__get_Linq(SimpleJSONFixed_JSONNode_o *__this,MethodInfo *method)

{
  undefined1 auVar1 [16];
  
  if (g_data_057ac337 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_LinqEnumerator);
    g_data_057ac337 = '\x01';
  }
  auVar1 = il2cpp_runtime_helper_023052d0(TypeInfo_LinqEnumerator);
  SimpleJSONFixed_JSONNode_LinqEnumerator___ctor(auVar1._0_8_,__this,auVar1._8_8_);
  return (System_Collections_Generic_IEnumerable_KeyValuePair_string__JSONNode___o *)auVar1._0_8_;
}


// SimpleJSONFixed.JSONNode$$get_Keys
// il2cpp: SimpleJSONFixed_JSONNode_KeyEnumerator_o SimpleJSONFixed_JSONNode__get_Keys (SimpleJSONFixed_JSONNode_o* __this, const MethodInfo* method);
// 0x40793b0

SimpleJSONFixed_JSONNode_KeyEnumerator_o *
SimpleJSONFixed_JSONNode__get_Keys
          (SimpleJSONFixed_JSONNode_KeyEnumerator_o *__return_storage_ptr__,SimpleJSONFixed_JSONNode_o *__this
          ,MethodInfo *method)

{
  int32_t local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  int32_t local_40;
  int32_t iStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  int32_t iStack_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  int32_t iStack_18;
  int32_t iStack_14;
  SimpleJSONFixed_JSONNode_o *local_10;
  
  (*(__this->klass->vtable)._32_unknown.methodPtr)
            (&local_50,__this,(__this->klass->vtable)._32_unknown.method);
  (__return_storage_ptr__->fields).m_Enumerator.fields.m_Array.fields._current = local_10;
  *(undefined4 *)&(__return_storage_ptr__->fields).m_Enumerator.fields.m_Array.fields._list = local_20;
  *(undefined4 *)((long)&(__return_storage_ptr__->fields).m_Enumerator.fields.m_Array.fields._list + 4) =
       uStack_1c;
  (__return_storage_ptr__->fields).m_Enumerator.fields.m_Array.fields._index = iStack_18;
  (__return_storage_ptr__->fields).m_Enumerator.fields.m_Array.fields._version = iStack_14;
  *(undefined4 *)&(__return_storage_ptr__->fields).m_Enumerator.fields.m_Object.fields._current.fields.value =
       local_30;
  *(undefined4 *)
   ((long)&(__return_storage_ptr__->fields).m_Enumerator.fields.m_Object.fields._current.fields.value + 4) =
       uStack_2c;
  (__return_storage_ptr__->fields).m_Enumerator.fields.m_Object.fields._getEnumeratorRetType = iStack_28;
  *(undefined4 *)&(__return_storage_ptr__->fields).m_Enumerator.fields.m_Object.fields.field_0x24 = uStack_24;
  (__return_storage_ptr__->fields).m_Enumerator.fields.m_Object.fields._version = local_40;
  (__return_storage_ptr__->fields).m_Enumerator.fields.m_Object.fields._index = iStack_3c;
  *(undefined4 *)&(__return_storage_ptr__->fields).m_Enumerator.fields.m_Object.fields._current.fields.key =
       uStack_38;
  *(undefined4 *)
   ((long)&(__return_storage_ptr__->fields).m_Enumerator.fields.m_Object.fields._current.fields.key + 4) =
       uStack_34;
  (__return_storage_ptr__->fields).m_Enumerator.fields.type = local_50;
  *(undefined4 *)&(__return_storage_ptr__->fields).m_Enumerator.fields.field_0x4 = uStack_4c;
  *(undefined4 *)&(__return_storage_ptr__->fields).m_Enumerator.fields.m_Object.fields._dictionary = uStack_48
  ;
  *(undefined4 *)((long)&(__return_storage_ptr__->fields).m_Enumerator.fields.m_Object.fields._dictionary + 4)
       = uStack_44;
  il2cpp_runtime_helper_022b4080(&(__return_storage_ptr__->fields).m_Enumerator.fields.m_Object,0);
  return __return_storage_ptr__;
}


// SimpleJSONFixed.JSONNode$$get_Values
// il2cpp: SimpleJSONFixed_JSONNode_ValueEnumerator_o SimpleJSONFixed_JSONNode__get_Values (SimpleJSONFixed_JSONNode_o* __this, const MethodInfo* method);
// 0x4079410

SimpleJSONFixed_JSONNode_ValueEnumerator_o *
SimpleJSONFixed_JSONNode__get_Values
          (SimpleJSONFixed_JSONNode_ValueEnumerator_o *__return_storage_ptr__,
          SimpleJSONFixed_JSONNode_o *__this,MethodInfo *method)

{
  int32_t local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  int32_t local_40;
  int32_t iStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  int32_t iStack_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  int32_t iStack_18;
  int32_t iStack_14;
  SimpleJSONFixed_JSONNode_o *local_10;
  
  (*(__this->klass->vtable)._32_unknown.methodPtr)
            (&local_50,__this,(__this->klass->vtable)._32_unknown.method);
  (__return_storage_ptr__->fields).m_Enumerator.fields.m_Array.fields._current = local_10;
  *(undefined4 *)&(__return_storage_ptr__->fields).m_Enumerator.fields.m_Array.fields._list = local_20;
  *(undefined4 *)((long)&(__return_storage_ptr__->fields).m_Enumerator.fields.m_Array.fields._list + 4) =
       uStack_1c;
  (__return_storage_ptr__->fields).m_Enumerator.fields.m_Array.fields._index = iStack_18;
  (__return_storage_ptr__->fields).m_Enumerator.fields.m_Array.fields._version = iStack_14;
  *(undefined4 *)&(__return_storage_ptr__->fields).m_Enumerator.fields.m_Object.fields._current.fields.value =
       local_30;
  *(undefined4 *)
   ((long)&(__return_storage_ptr__->fields).m_Enumerator.fields.m_Object.fields._current.fields.value + 4) =
       uStack_2c;
  (__return_storage_ptr__->fields).m_Enumerator.fields.m_Object.fields._getEnumeratorRetType = iStack_28;
  *(undefined4 *)&(__return_storage_ptr__->fields).m_Enumerator.fields.m_Object.fields.field_0x24 = uStack_24;
  (__return_storage_ptr__->fields).m_Enumerator.fields.m_Object.fields._version = local_40;
  (__return_storage_ptr__->fields).m_Enumerator.fields.m_Object.fields._index = iStack_3c;
  *(undefined4 *)&(__return_storage_ptr__->fields).m_Enumerator.fields.m_Object.fields._current.fields.key =
       uStack_38;
  *(undefined4 *)
   ((long)&(__return_storage_ptr__->fields).m_Enumerator.fields.m_Object.fields._current.fields.key + 4) =
       uStack_34;
  (__return_storage_ptr__->fields).m_Enumerator.fields.type = local_50;
  *(undefined4 *)&(__return_storage_ptr__->fields).m_Enumerator.fields.field_0x4 = uStack_4c;
  *(undefined4 *)&(__return_storage_ptr__->fields).m_Enumerator.fields.m_Object.fields._dictionary = uStack_48
  ;
  *(undefined4 *)((long)&(__return_storage_ptr__->fields).m_Enumerator.fields.m_Object.fields._dictionary + 4)
       = uStack_44;
  il2cpp_runtime_helper_022b4080(&(__return_storage_ptr__->fields).m_Enumerator.fields.m_Object,0);
  return __return_storage_ptr__;
}


// SimpleJSONFixed.JSONNode$$get_AsDouble
// il2cpp: double SimpleJSONFixed_JSONNode__get_AsDouble (SimpleJSONFixed_JSONNode_o* __this, const MethodInfo* method);
// 0x4079470

double SimpleJSONFixed_JSONNode__get_AsDouble(SimpleJSONFixed_JSONNode_o *__this,MethodInfo *method)

{
  bool_conflict bVar1;
  System_String_o *s;
  System_Globalization_CultureInfo_o *provider;
  double local_10;
  
  if (g_data_057ac338 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CultureInfo);
    g_data_057ac338 = '\x01';
  }
  local_10 = 0.0;
  s = (System_String_o *)
      (*(__this->klass->vtable)._9_get_Value.methodPtr)(__this,(__this->klass->vtable)._9_get_Value.method);
  if (*(int *)(TypeInfo_CultureInfo + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  provider = System_Globalization_CultureInfo__get_InvariantCulture((MethodInfo *)0x0);
  bVar1 = System_Double__TryParse_3c9a570
                    (s,0xa7,(System_IFormatProvider_o *)provider,&local_10,(MethodInfo *)0x0);
  if ((char)bVar1 == '\0') {
    return 0.0;
  }
  return local_10;
}


// SimpleJSONFixed.JSONNode$$set_AsDouble
// il2cpp: void SimpleJSONFixed_JSONNode__set_AsDouble (SimpleJSONFixed_JSONNode_o* __this, double value, const MethodInfo* method);
// 0x4079510

void SimpleJSONFixed_JSONNode__set_AsDouble
               (SimpleJSONFixed_JSONNode_o *__this,double value,MethodInfo *method)

{
  System_Globalization_CultureInfo_o *method_00;
  System_String_o *pSVar1;
  double __this_00;
  System_IFormatProvider_c *local_10;
  
  local_10 = (System_IFormatProvider_c *)value;
  if (g_data_057ac339 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CultureInfo);
    g_data_057ac339 = '\x01';
  }
  if (*(int *)(TypeInfo_CultureInfo + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  method_00 = System_Globalization_CultureInfo__get_InvariantCulture((MethodInfo *)0x0);
  pSVar1 = System_Double__ToString_3c99e60
                     (__this_00,(System_IFormatProvider_o *)&local_10,(MethodInfo *)method_00);
  (*(__this->klass->vtable)._10_set_Value.methodPtr)
            (__this,pSVar1,(__this->klass->vtable)._10_set_Value.method);
  return;
}


// SimpleJSONFixed.JSONNode$$get_AsInt
// il2cpp: int32_t SimpleJSONFixed_JSONNode__get_AsInt (SimpleJSONFixed_JSONNode_o* __this, const MethodInfo* method);
// 0x4079590

int32_t SimpleJSONFixed_JSONNode__get_AsInt(SimpleJSONFixed_JSONNode_o *__this,MethodInfo *method)

{
  double dVar1;
  
  dVar1 = (double)(*(__this->klass->vtable)._33_get_AsDouble.methodPtr)
                            (__this,(__this->klass->vtable)._33_get_AsDouble.method);
  return (int)dVar1;
}


// SimpleJSONFixed.JSONNode$$set_AsInt
// il2cpp: void SimpleJSONFixed_JSONNode__set_AsInt (SimpleJSONFixed_JSONNode_o* __this, int32_t value, const MethodInfo* method);
// 0x40795b0

void SimpleJSONFixed_JSONNode__set_AsInt(SimpleJSONFixed_JSONNode_o *__this,int32_t value,MethodInfo *method)

{
  Il2CppMethodPointer vtableDispatch;
  
  vtableDispatch = (__this->klass->vtable)._34_set_AsDouble.methodPtr;
  (*vtableDispatch)
            ((double)value,__this,(__this->klass->vtable)._34_set_AsDouble.method,method,vtableDispatch
            );
  return;
}


// SimpleJSONFixed.JSONNode$$get_AsFloat
// il2cpp: float SimpleJSONFixed_JSONNode__get_AsFloat (SimpleJSONFixed_JSONNode_o* __this, const MethodInfo* method);
// 0x40795d0

float SimpleJSONFixed_JSONNode__get_AsFloat(SimpleJSONFixed_JSONNode_o *__this,MethodInfo *method)

{
  double dVar1;
  
  dVar1 = (double)(*(__this->klass->vtable)._33_get_AsDouble.methodPtr)
                            (__this,(__this->klass->vtable)._33_get_AsDouble.method);
  return (float)dVar1;
}


// SimpleJSONFixed.JSONNode$$set_AsFloat
// il2cpp: void SimpleJSONFixed_JSONNode__set_AsFloat (SimpleJSONFixed_JSONNode_o* __this, float value, const MethodInfo* method);
// 0x40795f0

void SimpleJSONFixed_JSONNode__set_AsFloat(SimpleJSONFixed_JSONNode_o *__this,float value,MethodInfo *method)

{
  Il2CppMethodPointer vtableDispatch;
  undefined8 in_RDX;
  
  vtableDispatch = (__this->klass->vtable)._34_set_AsDouble.methodPtr;
  (*vtableDispatch)
            ((double)value,__this,(__this->klass->vtable)._34_set_AsDouble.method,in_RDX,vtableDispatch
            );
  return;
}


// SimpleJSONFixed.JSONNode$$get_AsBool
// il2cpp: bool SimpleJSONFixed_JSONNode__get_AsBool (SimpleJSONFixed_JSONNode_o* __this, const MethodInfo* method);
// 0x4079610

bool_conflict SimpleJSONFixed_JSONNode__get_AsBool(SimpleJSONFixed_JSONNode_o *__this,MethodInfo *method)

{
  bool_conflict bVar1;
  uint uVar2;
  ulong in_RAX;
  System_String_o *pSVar3;
  undefined8 uStack_18;
  
  uStack_18 = in_RAX & 0xffffffffffffff;
  pSVar3 = (System_String_o *)
           (*(__this->klass->vtable)._9_get_Value.methodPtr)
                     (__this,(__this->klass->vtable)._9_get_Value.method);
  if (*(int *)(g_data_057b9b98 + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar1 = System_Boolean__TryParse(pSVar3,(bool_conflict *)((long)&uStack_18 + 7),(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    return CONCAT31((int3)((uint)bVar1 >> 8),uStack_18._7_1_ != '\0');
  }
  pSVar3 = (System_String_o *)(*(__this->klass->vtable)._9_get_Value.methodPtr)(__this);
  uVar2 = System_String__IsNullOrEmpty(pSVar3,(MethodInfo *)0x0);
  return uVar2 ^ 1;
}


// SimpleJSONFixed.JSONNode$$set_AsBool
// il2cpp: void SimpleJSONFixed_JSONNode__set_AsBool (SimpleJSONFixed_JSONNode_o* __this, bool value, const MethodInfo* method);
// 0x40796a0

void SimpleJSONFixed_JSONNode__set_AsBool
               (SimpleJSONFixed_JSONNode_o *__this,bool_conflict value,MethodInfo *method)

{
  Il2CppMethodPointer vtableDispatch;
  undefined8 *puVar1;
  System_String_o *s;
  SimpleJSONFixed_JSONNode_o *pSVar2;
  int64_t iStack_28;
  SimpleJSONFixed_JSONNode_o *pSStack_20;
  
  pSVar2 = __this;
  if (g_data_057ac33a == '\0') {
    pSStack_20 = (SimpleJSONFixed_JSONNode_o *)0x40796bd;
    il2cpp_runtime_helper_023445d0(&"false");
    pSVar2 = (SimpleJSONFixed_JSONNode_o *)&"true";
    pSStack_20 = (SimpleJSONFixed_JSONNode_o *)0x40796c9;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac33a = '\x01';
  }
  if (__this != (SimpleJSONFixed_JSONNode_o *)0x0) {
    if ((char)value == '\0') {
      puVar1 = &"false";
    }
    else {
      puVar1 = &"true";
    }
    vtableDispatch = (__this->klass->vtable)._10_set_Value.methodPtr;
    (*vtableDispatch)
              (__this,*puVar1,(__this->klass->vtable)._10_set_Value.method,vtableDispatch);
    return;
  }
  pSStack_20 = (SimpleJSONFixed_JSONNode_o *)0x407970e;
  il2cpp_runtime_helper_022b2c90();
  iStack_28 = 0;
  pSStack_20 = __this;
  s = (System_String_o *)(*(pSVar2->klass->vtable)._9_get_Value.methodPtr)();
  System_Int64__TryParse(s,&iStack_28,(MethodInfo *)0x0);
  return;
}


// SimpleJSONFixed.JSONNode$$get_AsLong
// il2cpp: int64_t SimpleJSONFixed_JSONNode__get_AsLong (SimpleJSONFixed_JSONNode_o* __this, const MethodInfo* method);
// 0x4079710

int64_t SimpleJSONFixed_JSONNode__get_AsLong(SimpleJSONFixed_JSONNode_o *__this,MethodInfo *method)

{
  bool_conflict bVar1;
  System_String_o *s;
  int64_t iVar2;
  int64_t local_10;
  
  local_10 = 0;
  s = (System_String_o *)
      (*(__this->klass->vtable)._9_get_Value.methodPtr)(__this,(__this->klass->vtable)._9_get_Value.method);
  bVar1 = System_Int64__TryParse(s,&local_10,(MethodInfo *)0x0);
  iVar2 = 0;
  if ((char)bVar1 != '\0') {
    iVar2 = local_10;
  }
  return iVar2;
}


// SimpleJSONFixed.JSONNode$$set_AsLong
// il2cpp: void SimpleJSONFixed_JSONNode__set_AsLong (SimpleJSONFixed_JSONNode_o* __this, int64_t value, const MethodInfo* method);
// 0x4079760

void SimpleJSONFixed_JSONNode__set_AsLong(SimpleJSONFixed_JSONNode_o *__this,int64_t value,MethodInfo *method)

{
  System_String_o *pSVar1;
  int64_t local_10;
  
  local_10 = value;
  pSVar1 = System_Int64__ToString((int64_t)&local_10,(MethodInfo *)0x0);
  (*(__this->klass->vtable)._10_set_Value.methodPtr)
            (__this,pSVar1,(__this->klass->vtable)._10_set_Value.method);
  return;
}


// SimpleJSONFixed.JSONNode$$get_AsULong
// il2cpp: uint64_t SimpleJSONFixed_JSONNode__get_AsULong (SimpleJSONFixed_JSONNode_o* __this, const MethodInfo* method);
// 0x40797a0

uint64_t SimpleJSONFixed_JSONNode__get_AsULong(SimpleJSONFixed_JSONNode_o *__this,MethodInfo *method)

{
  bool_conflict bVar1;
  System_String_o *s;
  uint64_t uVar2;
  uint64_t local_10;
  
  local_10 = 0;
  s = (System_String_o *)
      (*(__this->klass->vtable)._9_get_Value.methodPtr)(__this,(__this->klass->vtable)._9_get_Value.method);
  bVar1 = System_UInt64__TryParse(s,&local_10,(MethodInfo *)0x0);
  uVar2 = 0;
  if ((char)bVar1 != '\0') {
    uVar2 = local_10;
  }
  return uVar2;
}


// SimpleJSONFixed.JSONNode$$set_AsULong
// il2cpp: void SimpleJSONFixed_JSONNode__set_AsULong (SimpleJSONFixed_JSONNode_o* __this, uint64_t value, const MethodInfo* method);
// 0x40797f0

void SimpleJSONFixed_JSONNode__set_AsULong
               (SimpleJSONFixed_JSONNode_o *__this,uint64_t value,MethodInfo *method)

{
  System_String_o *pSVar1;
  uint64_t local_10;
  
  local_10 = value;
  pSVar1 = System_UInt64__ToString((uint64_t)&local_10,(MethodInfo *)0x0);
  (*(__this->klass->vtable)._10_set_Value.methodPtr)
            (__this,pSVar1,(__this->klass->vtable)._10_set_Value.method);
  return;
}


// SimpleJSONFixed.JSONNode$$get_AsArray
// il2cpp: SimpleJSONFixed_JSONArray_o* SimpleJSONFixed_JSONNode__get_AsArray (SimpleJSONFixed_JSONNode_o* __this, const MethodInfo* method);
// 0x4079830

SimpleJSONFixed_JSONArray_o *
SimpleJSONFixed_JSONNode__get_AsArray(SimpleJSONFixed_JSONNode_o *__this,MethodInfo *method)

{
  byte bVar1;
  SimpleJSONFixed_JSONArray_o *pSVar2;
  
  if (g_data_057ac33b == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONArray);
    g_data_057ac33b = '\x01';
  }
  if (__this != (SimpleJSONFixed_JSONNode_o *)0x0) {
    bVar1 = (TypeInfo_JSONArray->_2).naturalAligment;
    if (bVar1 <= (__this->klass->_2).naturalAligment) {
      pSVar2 = (SimpleJSONFixed_JSONArray_o *)0x0;
      if ((__this->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_JSONArray) {
        pSVar2 = (SimpleJSONFixed_JSONArray_o *)__this;
      }
      return pSVar2;
    }
  }
  return (SimpleJSONFixed_JSONArray_o *)0x0;
}


// SimpleJSONFixed.JSONNode$$get_AsObject
// il2cpp: SimpleJSONFixed_JSONObject_o* SimpleJSONFixed_JSONNode__get_AsObject (SimpleJSONFixed_JSONNode_o* __this, const MethodInfo* method);
// 0x4079890

SimpleJSONFixed_JSONObject_o *
SimpleJSONFixed_JSONNode__get_AsObject(SimpleJSONFixed_JSONNode_o *__this,MethodInfo *method)

{
  byte bVar1;
  SimpleJSONFixed_JSONObject_o *pSVar2;
  
  if (g_data_057ac33c == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONObject);
    g_data_057ac33c = '\x01';
  }
  if (__this != (SimpleJSONFixed_JSONNode_o *)0x0) {
    bVar1 = (TypeInfo_JSONObject->_2).naturalAligment;
    if (bVar1 <= (__this->klass->_2).naturalAligment) {
      pSVar2 = (SimpleJSONFixed_JSONObject_o *)0x0;
      if ((__this->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_JSONObject) {
        pSVar2 = (SimpleJSONFixed_JSONObject_o *)__this;
      }
      return pSVar2;
    }
  }
  return (SimpleJSONFixed_JSONObject_o *)0x0;
}


// SimpleJSONFixed.JSONNode$$op_Implicit
// il2cpp: SimpleJSONFixed_JSONNode_o* SimpleJSONFixed_JSONNode__op_Implicit (System_String_o* s, const MethodInfo* method);
// 0x40798f0

SimpleJSONFixed_JSONNode_o * SimpleJSONFixed_JSONNode__op_Implicit(System_String_o *s,MethodInfo *method)

{
  Il2CppObject *__this;
  SimpleJSONFixed_JSONNode_o *pSVar1;
  MethodInfo *method_00;
  
  if (g_data_057ac33d == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNull);
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONString);
    g_data_057ac33d = '\x01';
  }
  if (s != (System_String_o *)0x0) {
    __this = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_JSONString);
    if (g_data_057ac387 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
      g_data_057ac387 = '\x01';
    }
    if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    System_Object___ctor(__this,(MethodInfo *)0x0);
    __this[1].klass = (Il2CppClass *)s;
    il2cpp_runtime_helper_022b4080(__this + 1,s);
    return (SimpleJSONFixed_JSONNode_o *)__this;
  }
  if (*(int *)((long)&TypeInfo_JSONNull[2].parameters + 4) != 0) {
    pSVar1 = (SimpleJSONFixed_JSONNode_o *)SimpleJSONFixed_JSONNull__CreateOrGet(TypeInfo_JSONNull);
    return pSVar1;
  }
  method_00 = TypeInfo_JSONNull;
  il2cpp_runtime_helper_02337ed0();
  pSVar1 = (SimpleJSONFixed_JSONNode_o *)SimpleJSONFixed_JSONNull__CreateOrGet(method_00);
  return pSVar1;
}


// SimpleJSONFixed.JSONNode$$op_Implicit
// il2cpp: System_String_o* SimpleJSONFixed_JSONNode__op_Implicit (SimpleJSONFixed_JSONNode_o* d, const MethodInfo* method);
// 0x4079b00

System_String_o *
SimpleJSONFixed_JSONNode__op_Implicit_3f79b00(SimpleJSONFixed_JSONNode_o *d,MethodInfo *method)

{
  byte bVar1;
  byte bVar2;
  Il2CppClass **ppIVar3;
  SimpleJSONFixed_JSONNode_c *pSVar4;
  Il2CppMethodPointer vtableDispatch;
  bool_conflict bVar5;
  System_String_o *pSVar6;
  undefined8 uVar7;
  Il2CppClass *pIVar8;
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  SimpleJSONFixed_JSONNode_o *pSVar9;
  SimpleJSONFixed_JSONNode_o *pSVar10;
  bool bVar11;
  bool bVar12;
  
  if (g_data_057ac33e == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    g_data_057ac33e = '\x01';
    in_RDX = extraout_RDX;
  }
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    in_RDX = extraout_RDX_00;
  }
  pSVar9 = (SimpleJSONFixed_JSONNode_o *)0x0;
  pSVar10 = d;
  bVar5 = SimpleJSONFixed_JSONNode__op_Equality(d,(Il2CppObject *)0x0,in_RDX);
  if ((char)bVar5 != '\0') {
    return (System_String_o *)0x0;
  }
  if (d != (SimpleJSONFixed_JSONNode_o *)0x0) {
    pSVar6 = (System_String_o *)
             (*(d->klass->vtable)._9_get_Value.methodPtr)(d,(d->klass->vtable)._9_get_Value.method);
    return pSVar6;
  }
  uVar7 = il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac34c == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONLazyCreator);
    uVar7 = il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNull);
    g_data_057ac34c = '\x01';
  }
  if (pSVar10 != pSVar9) {
    bVar11 = true;
    pIVar8 = (Il2CppClass *)&TypeInfo_JSONNull;
    if (pSVar10 != (SimpleJSONFixed_JSONNode_o *)0x0) {
      bVar1 = (TypeInfo_JSONNull->_2).naturalAligment;
      if ((pSVar10->klass->_2).naturalAligment < bVar1) {
        pIVar8 = (Il2CppClass *)0x0;
      }
      else {
        ppIVar3 = (pSVar10->klass->_2).typeHierarchy;
        pIVar8 = (Il2CppClass *)
                 CONCAT71((int7)((ulong)ppIVar3 >> 8),ppIVar3[(ulong)bVar1 - 1] == TypeInfo_JSONNull);
      }
      if ((pSVar10 != (SimpleJSONFixed_JSONNode_o *)0x0) && ((char)pIVar8 == '\0')) {
        bVar1 = (TypeInfo_JSONLazyCreator->_2).naturalAligment;
        pIVar8 = TypeInfo_JSONLazyCreator;
        if ((pSVar10->klass->_2).naturalAligment < bVar1) {
          bVar11 = false;
        }
        else {
          bVar11 = (pSVar10->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_JSONLazyCreator;
        }
      }
    }
    bVar12 = true;
    if (pSVar9 != (SimpleJSONFixed_JSONNode_o *)0x0) {
      bVar12 = true;
      pSVar4 = pSVar9->klass;
      bVar1 = (pSVar4->_2).naturalAligment;
      pIVar8 = (Il2CppClass *)CONCAT71((int7)((ulong)pIVar8 >> 8),bVar1);
      bVar2 = (TypeInfo_JSONNull->_2).naturalAligment;
      if ((bVar1 < bVar2) || ((pSVar4->_2).typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_JSONNull)) {
        bVar2 = (TypeInfo_JSONLazyCreator->_2).naturalAligment;
        bVar12 = false;
        if (bVar2 <= bVar1) {
          pIVar8 = (Il2CppClass *)(pSVar4->_2).typeHierarchy;
          bVar12 = *(Il2CppClass **)((long)pIVar8 + (ulong)bVar2 * 8 + -8) == TypeInfo_JSONLazyCreator;
        }
      }
    }
    if (!bVar11 && !(bool)(bVar12 & bVar11)) {
      if (pSVar10 != (SimpleJSONFixed_JSONNode_o *)0x0) {
        vtableDispatch = (pSVar10->klass->vtable)._0_Equals.methodPtr;
        pSVar6 = (System_String_o *)
                 (*vtableDispatch)
                           (pSVar10,pSVar9,(pSVar10->klass->vtable)._0_Equals.method,vtableDispatch);
        return pSVar6;
      }
      uVar7 = il2cpp_runtime_helper_022b2c90();
      if (g_data_057ac33f == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNumber);
        g_data_057ac33f = '\x01';
      }
      pSVar6 = (System_String_o *)il2cpp_runtime_helper_023052d0(TypeInfo_JSONNumber);
      if (g_data_057ac38e == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
        g_data_057ac38e = '\x01';
      }
      if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      System_Object___ctor((Il2CppObject *)pSVar6,(MethodInfo *)0x0);
      (pSVar6->fields)._stringLength = (int)uVar7;
      (pSVar6->fields)._firstChar = (short)((ulong)uVar7 >> 0x20);
      *(short *)&(pSVar6->fields).field_0x6 = (short)((ulong)uVar7 >> 0x30);
      return pSVar6;
    }
    return (System_String_o *)CONCAT71((int7)((ulong)pIVar8 >> 8),bVar12 & bVar11);
  }
  return (System_String_o *)CONCAT71((int7)((ulong)uVar7 >> 8),1);
}


// SimpleJSONFixed.JSONNode$$op_Implicit
// il2cpp: SimpleJSONFixed_JSONNode_o* SimpleJSONFixed_JSONNode__op_Implicit (double n, const MethodInfo* method);
// 0x4079cd0

SimpleJSONFixed_JSONNode_o * SimpleJSONFixed_JSONNode__op_Implicit_3f79cd0(double n,MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (g_data_057ac33f == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNumber);
    g_data_057ac33f = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_JSONNumber);
  if (g_data_057ac38e == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    g_data_057ac38e = '\x01';
  }
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  System_Object___ctor(__this,(MethodInfo *)0x0);
  __this[1].klass = (Il2CppClass *)n;
  return (SimpleJSONFixed_JSONNode_o *)__this;
}


// SimpleJSONFixed.JSONNode$$op_Implicit
// il2cpp: double SimpleJSONFixed_JSONNode__op_Implicit (SimpleJSONFixed_JSONNode_o* d, const MethodInfo* method);
// 0x4079dc0

double SimpleJSONFixed_JSONNode__op_Implicit_3f79dc0(SimpleJSONFixed_JSONNode_o *d,MethodInfo *method)

{
  bool_conflict bVar1;
  Il2CppObject *__this;
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  float fVar2;
  double dVar3;
  
  if (g_data_057ac340 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    g_data_057ac340 = '\x01';
    in_RDX = extraout_RDX;
  }
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    in_RDX = extraout_RDX_00;
  }
  bVar1 = SimpleJSONFixed_JSONNode__op_Equality(d,(Il2CppObject *)0x0,in_RDX);
  if ((char)bVar1 != '\0') {
    return 0.0;
  }
  if (d != (SimpleJSONFixed_JSONNode_o *)0x0) {
    dVar3 = (double)(*(d->klass->vtable)._33_get_AsDouble.methodPtr)
                              (d,(d->klass->vtable)._33_get_AsDouble.method);
    return dVar3;
  }
  fVar2 = (float)il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac341 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNumber);
    g_data_057ac341 = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_JSONNumber);
  if (g_data_057ac38e == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    g_data_057ac38e = '\x01';
  }
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  System_Object___ctor(__this,(MethodInfo *)0x0);
  __this[1].klass = (Il2CppClass *)(double)fVar2;
  return (double)(Il2CppClass *)(double)fVar2;
}


// SimpleJSONFixed.JSONNode$$op_Implicit
// il2cpp: SimpleJSONFixed_JSONNode_o* SimpleJSONFixed_JSONNode__op_Implicit (float n, const MethodInfo* method);
// 0x4079e30

SimpleJSONFixed_JSONNode_o * SimpleJSONFixed_JSONNode__op_Implicit_3f79e30(float n,MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (g_data_057ac341 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNumber);
    g_data_057ac341 = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_JSONNumber);
  if (g_data_057ac38e == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    g_data_057ac38e = '\x01';
  }
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  System_Object___ctor(__this,(MethodInfo *)0x0);
  __this[1].klass = (Il2CppClass *)(double)n;
  return (SimpleJSONFixed_JSONNode_o *)__this;
}


// SimpleJSONFixed.JSONNode$$op_Implicit
// il2cpp: float SimpleJSONFixed_JSONNode__op_Implicit (SimpleJSONFixed_JSONNode_o* d, const MethodInfo* method);
// 0x4079ed0

float SimpleJSONFixed_JSONNode__op_Implicit_3f79ed0(SimpleJSONFixed_JSONNode_o *d,MethodInfo *method)

{
  bool_conflict bVar1;
  Il2CppObject *__this;
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  int iVar2;
  float fVar4;
  SimpleJSONFixed_JSONNode_o *pSVar3;
  
  if (g_data_057ac342 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    g_data_057ac342 = '\x01';
    in_RDX = extraout_RDX;
  }
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    in_RDX = extraout_RDX_00;
  }
  pSVar3 = d;
  bVar1 = SimpleJSONFixed_JSONNode__op_Equality(d,(Il2CppObject *)0x0,in_RDX);
  iVar2 = (int)pSVar3;
  if ((char)bVar1 != '\0') {
    return 0.0;
  }
  if (d != (SimpleJSONFixed_JSONNode_o *)0x0) {
    fVar4 = (float)(*(d->klass->vtable)._37_get_AsFloat.methodPtr)
                             (d,(d->klass->vtable)._37_get_AsFloat.method);
    return fVar4;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac343 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNumber);
    g_data_057ac343 = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_JSONNumber);
  if (g_data_057ac38e == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    g_data_057ac38e = '\x01';
  }
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  System_Object___ctor(__this,(MethodInfo *)0x0);
  __this[1].klass = (Il2CppClass *)(double)iVar2;
  return SUB84((Il2CppClass *)(double)iVar2,0);
}


// SimpleJSONFixed.JSONNode$$op_Implicit
// il2cpp: SimpleJSONFixed_JSONNode_o* SimpleJSONFixed_JSONNode__op_Implicit (int32_t n, const MethodInfo* method);
// 0x4079f40

SimpleJSONFixed_JSONNode_o * SimpleJSONFixed_JSONNode__op_Implicit_3f79f40(int32_t n,MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (g_data_057ac343 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNumber);
    g_data_057ac343 = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_JSONNumber);
  if (g_data_057ac38e == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    g_data_057ac38e = '\x01';
  }
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  System_Object___ctor(__this,(MethodInfo *)0x0);
  __this[1].klass = (Il2CppClass *)(double)n;
  return (SimpleJSONFixed_JSONNode_o *)__this;
}


// SimpleJSONFixed.JSONNode$$op_Implicit
// il2cpp: int32_t SimpleJSONFixed_JSONNode__op_Implicit (SimpleJSONFixed_JSONNode_o* d, const MethodInfo* method);
// 0x4079fd0

int32_t SimpleJSONFixed_JSONNode__op_Implicit_3f79fd0(SimpleJSONFixed_JSONNode_o *d,MethodInfo *method)

{
  char cVar1;
  int iVar2;
  bool_conflict bVar3;
  int32_t iVar4;
  Il2CppClass *pIVar5;
  Il2CppObject *__this;
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  SimpleJSONFixed_JSONNode_o *pSVar6;
  SimpleJSONFixed_JSONNode_o *local_28;
  SimpleJSONFixed_JSONNode_o *pSStack_20;
  
  if (g_data_057ac344 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    g_data_057ac344 = '\x01';
    in_RDX = extraout_RDX;
  }
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    in_RDX = extraout_RDX_00;
  }
  pSVar6 = d;
  bVar3 = SimpleJSONFixed_JSONNode__op_Equality(d,(Il2CppObject *)0x0,in_RDX);
  if ((char)bVar3 == '\0') {
    if (d == (SimpleJSONFixed_JSONNode_o *)0x0) {
      il2cpp_runtime_helper_022b2c90();
      local_28 = pSVar6;
      pSStack_20 = d;
      if (g_data_057ac345 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
        il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNumber);
        il2cpp_runtime_helper_023445d0(&TypeInfo_JSONString);
        g_data_057ac345 = '\x01';
        iVar2 = *(int *)(TypeInfo_JSONNode + 0xe4);
      }
      else {
        iVar2 = *(int *)(TypeInfo_JSONNode + 0xe4);
      }
      if (iVar2 == 0) {
        il2cpp_runtime_helper_02337ed0();
        cVar1 = *(char *)(*(long *)(TypeInfo_JSONNode + 0xb8) + 1);
      }
      else {
        cVar1 = *(char *)(*(long *)(TypeInfo_JSONNode + 0xb8) + 1);
      }
      if (cVar1 == '\0') {
        __this = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_JSONNumber);
        if (g_data_057ac38e == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
          g_data_057ac38e = '\x01';
        }
        if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        System_Object___ctor(__this,(MethodInfo *)0x0);
        __this[1].klass = (Il2CppClass *)(double)(long)pSVar6;
      }
      else {
        pIVar5 = (Il2CppClass *)System_Int64__ToString((int64_t)&local_28,(MethodInfo *)0x0);
        __this = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_JSONString);
        if (g_data_057ac387 == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
          g_data_057ac387 = '\x01';
        }
        if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        System_Object___ctor(__this,(MethodInfo *)0x0);
        __this[1].klass = pIVar5;
        il2cpp_runtime_helper_022b4080(__this + 1,pIVar5);
      }
      return (int32_t)__this;
    }
    iVar4 = (*(d->klass->vtable)._35_get_AsInt.methodPtr)(d,(d->klass->vtable)._35_get_AsInt.method);
    return iVar4;
  }
  return 0;
}


// SimpleJSONFixed.JSONNode$$op_Implicit
// il2cpp: SimpleJSONFixed_JSONNode_o* SimpleJSONFixed_JSONNode__op_Implicit (int64_t n, const MethodInfo* method);
// 0x407a040

SimpleJSONFixed_JSONNode_o * SimpleJSONFixed_JSONNode__op_Implicit_3f7a040(int64_t n,MethodInfo *method)

{
  char cVar1;
  int iVar2;
  Il2CppClass *pIVar3;
  Il2CppObject *__this;
  int64_t iStack_20;
  
  iStack_20 = n;
  if (g_data_057ac345 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNumber);
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONString);
    g_data_057ac345 = '\x01';
    iVar2 = *(int *)(TypeInfo_JSONNode + 0xe4);
  }
  else {
    iVar2 = *(int *)(TypeInfo_JSONNode + 0xe4);
  }
  if (iVar2 == 0) {
    il2cpp_runtime_helper_02337ed0();
    cVar1 = *(char *)(*(long *)(TypeInfo_JSONNode + 0xb8) + 1);
  }
  else {
    cVar1 = *(char *)(*(long *)(TypeInfo_JSONNode + 0xb8) + 1);
  }
  if (cVar1 == '\0') {
    __this = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_JSONNumber);
    if (g_data_057ac38e == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
      g_data_057ac38e = '\x01';
    }
    if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    System_Object___ctor(__this,(MethodInfo *)0x0);
    __this[1].klass = (Il2CppClass *)(double)n;
  }
  else {
    pIVar3 = (Il2CppClass *)System_Int64__ToString((int64_t)&iStack_20,(MethodInfo *)0x0);
    __this = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_JSONString);
    if (g_data_057ac387 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
      g_data_057ac387 = '\x01';
    }
    if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    System_Object___ctor(__this,(MethodInfo *)0x0);
    __this[1].klass = pIVar3;
    il2cpp_runtime_helper_022b4080(__this + 1,pIVar3);
  }
  return (SimpleJSONFixed_JSONNode_o *)__this;
}


// SimpleJSONFixed.JSONNode$$op_Implicit
// il2cpp: int64_t SimpleJSONFixed_JSONNode__op_Implicit (SimpleJSONFixed_JSONNode_o* d, const MethodInfo* method);
// 0x407a1c0

int64_t SimpleJSONFixed_JSONNode__op_Implicit_3f7a1c0(SimpleJSONFixed_JSONNode_o *d,MethodInfo *method)

{
  char cVar1;
  int iVar2;
  bool_conflict bVar3;
  int64_t iVar4;
  Il2CppClass *pIVar5;
  Il2CppObject *__this;
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  SimpleJSONFixed_JSONNode_o *pSVar6;
  double dVar7;
  undefined1 auVar8 [16];
  double dVar9;
  SimpleJSONFixed_JSONNode_o *pSStack_38;
  double dStack_30;
  double dStack_28;
  SimpleJSONFixed_JSONNode_o *pSStack_20;
  
  if (g_data_057ac346 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    g_data_057ac346 = '\x01';
    in_RDX = extraout_RDX;
  }
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    in_RDX = extraout_RDX_00;
  }
  pSVar6 = d;
  bVar3 = SimpleJSONFixed_JSONNode__op_Equality(d,(Il2CppObject *)0x0,in_RDX);
  if ((char)bVar3 == '\0') {
    if (d == (SimpleJSONFixed_JSONNode_o *)0x0) {
      il2cpp_runtime_helper_022b2c90();
      pSStack_38 = pSVar6;
      pSStack_20 = d;
      if (g_data_057ac347 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
        il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNumber);
        il2cpp_runtime_helper_023445d0(&TypeInfo_JSONString);
        g_data_057ac347 = '\x01';
        iVar2 = *(int *)(TypeInfo_JSONNode + 0xe4);
      }
      else {
        iVar2 = *(int *)(TypeInfo_JSONNode + 0xe4);
      }
      if (iVar2 == 0) {
        il2cpp_runtime_helper_02337ed0();
        cVar1 = *(char *)(*(long *)(TypeInfo_JSONNode + 0xb8) + 1);
      }
      else {
        cVar1 = *(char *)(*(long *)(TypeInfo_JSONNode + 0xb8) + 1);
      }
      if (cVar1 == '\0') {
        __this = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_JSONNumber);
        auVar8._8_4_ = (int)((ulong)pSVar6 >> 0x20);
        auVar8._0_8_ = pSVar6;
        auVar8._12_4_ = 0x45300000;
        dVar7 = (double)CONCAT44(0x43300000,(int)pSVar6) - 4503599627370496.0;
        dVar9 = auVar8._8_8_ - 1.9342813113834067e+25;
        if (g_data_057ac38e == '\0') {
          dStack_30 = dVar7;
          dStack_28 = dVar9;
          il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
          g_data_057ac38e = '\x01';
          dVar7 = dStack_30;
        }
        if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        System_Object___ctor(__this,(MethodInfo *)0x0);
        __this[1].klass = (Il2CppClass *)(dVar9 + dVar7);
      }
      else {
        pIVar5 = (Il2CppClass *)System_UInt64__ToString((uint64_t)&pSStack_38,(MethodInfo *)0x0);
        __this = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_JSONString);
        if (g_data_057ac387 == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
          g_data_057ac387 = '\x01';
        }
        if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        System_Object___ctor(__this,(MethodInfo *)0x0);
        __this[1].klass = pIVar5;
        il2cpp_runtime_helper_022b4080(__this + 1,pIVar5);
      }
      return (int64_t)__this;
    }
    iVar4 = (*(d->klass->vtable)._41_get_AsLong.methodPtr)(d,(d->klass->vtable)._41_get_AsLong.method);
    return iVar4;
  }
  return 0;
}


// SimpleJSONFixed.JSONNode$$op_Implicit
// il2cpp: SimpleJSONFixed_JSONNode_o* SimpleJSONFixed_JSONNode__op_Implicit (uint64_t n, const MethodInfo* method);
// 0x407a230

SimpleJSONFixed_JSONNode_o * SimpleJSONFixed_JSONNode__op_Implicit_3f7a230(uint64_t n,MethodInfo *method)

{
  char cVar1;
  int iVar2;
  Il2CppClass *pIVar3;
  Il2CppObject *__this;
  double dVar4;
  undefined1 auVar5 [16];
  double dVar6;
  uint64_t local_30;
  double local_28;
  double dStack_20;
  
  local_30 = n;
  if (g_data_057ac347 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNumber);
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONString);
    g_data_057ac347 = '\x01';
    iVar2 = *(int *)(TypeInfo_JSONNode + 0xe4);
  }
  else {
    iVar2 = *(int *)(TypeInfo_JSONNode + 0xe4);
  }
  if (iVar2 == 0) {
    il2cpp_runtime_helper_02337ed0();
    cVar1 = *(char *)(*(long *)(TypeInfo_JSONNode + 0xb8) + 1);
  }
  else {
    cVar1 = *(char *)(*(long *)(TypeInfo_JSONNode + 0xb8) + 1);
  }
  if (cVar1 == '\0') {
    __this = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_JSONNumber);
    auVar5._8_4_ = (int)(n >> 0x20);
    auVar5._0_8_ = n;
    auVar5._12_4_ = 0x45300000;
    dVar4 = (double)CONCAT44(0x43300000,(int)n) - 4503599627370496.0;
    dVar6 = auVar5._8_8_ - 1.9342813113834067e+25;
    if (g_data_057ac38e == '\0') {
      local_28 = dVar4;
      dStack_20 = dVar6;
      il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
      g_data_057ac38e = '\x01';
      dVar4 = local_28;
    }
    if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    System_Object___ctor(__this,(MethodInfo *)0x0);
    __this[1].klass = (Il2CppClass *)(dVar6 + dVar4);
  }
  else {
    pIVar3 = (Il2CppClass *)System_UInt64__ToString((uint64_t)&local_30,(MethodInfo *)0x0);
    __this = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_JSONString);
    if (g_data_057ac387 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
      g_data_057ac387 = '\x01';
    }
    if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    System_Object___ctor(__this,(MethodInfo *)0x0);
    __this[1].klass = pIVar3;
    il2cpp_runtime_helper_022b4080(__this + 1,pIVar3);
  }
  return (SimpleJSONFixed_JSONNode_o *)__this;
}


// SimpleJSONFixed.JSONNode$$op_Implicit
// il2cpp: uint64_t SimpleJSONFixed_JSONNode__op_Implicit (SimpleJSONFixed_JSONNode_o* d, const MethodInfo* method);
// 0x407a3e0

uint64_t SimpleJSONFixed_JSONNode__op_Implicit_3f7a3e0(SimpleJSONFixed_JSONNode_o *d,MethodInfo *method)

{
  bool_conflict bVar1;
  uint64_t uVar2;
  Il2CppObject *__this;
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  undefined1 uVar3;
  SimpleJSONFixed_JSONNode_o *pSVar4;
  
  if (g_data_057ac348 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    g_data_057ac348 = '\x01';
    in_RDX = extraout_RDX;
  }
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    in_RDX = extraout_RDX_00;
  }
  pSVar4 = d;
  bVar1 = SimpleJSONFixed_JSONNode__op_Equality(d,(Il2CppObject *)0x0,in_RDX);
  uVar3 = SUB81(pSVar4,0);
  if ((char)bVar1 != '\0') {
    return 0;
  }
  if (d != (SimpleJSONFixed_JSONNode_o *)0x0) {
    uVar2 = (*(d->klass->vtable)._43_get_AsULong.methodPtr)(d,(d->klass->vtable)._43_get_AsULong.method);
    return uVar2;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac349 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONBool);
    g_data_057ac349 = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_JSONBool);
  if (g_data_057ac393 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    g_data_057ac393 = '\x01';
  }
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  System_Object___ctor(__this,(MethodInfo *)0x0);
  *(undefined1 *)&__this[1].klass = uVar3;
  return (uint64_t)__this;
}


// SimpleJSONFixed.JSONNode$$op_Implicit
// il2cpp: SimpleJSONFixed_JSONNode_o* SimpleJSONFixed_JSONNode__op_Implicit (bool b, const MethodInfo* method);
// 0x407a450

SimpleJSONFixed_JSONNode_o * SimpleJSONFixed_JSONNode__op_Implicit_3f7a450(bool_conflict b,MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (g_data_057ac349 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONBool);
    g_data_057ac349 = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_JSONBool);
  if (g_data_057ac393 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    g_data_057ac393 = '\x01';
  }
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  System_Object___ctor(__this,(MethodInfo *)0x0);
  *(char *)&__this[1].klass = (char)b;
  return (SimpleJSONFixed_JSONNode_o *)__this;
}


// SimpleJSONFixed.JSONNode$$op_Implicit
// il2cpp: bool SimpleJSONFixed_JSONNode__op_Implicit (SimpleJSONFixed_JSONNode_o* d, const MethodInfo* method);
// 0x407a530

bool_conflict SimpleJSONFixed_JSONNode__op_Implicit_3f7a530(SimpleJSONFixed_JSONNode_o *d,MethodInfo *method)

{
  bool_conflict bVar1;
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  bool_conflict bVar2;
  
  if (g_data_057ac34a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    g_data_057ac34a = '\x01';
    in_RDX = extraout_RDX;
  }
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    in_RDX = extraout_RDX_00;
  }
  bVar2 = 0;
  bVar1 = SimpleJSONFixed_JSONNode__op_Equality(d,(Il2CppObject *)0x0,in_RDX);
  if ((char)bVar1 != '\0') {
    return 0;
  }
  if (d != (SimpleJSONFixed_JSONNode_o *)0x0) {
    bVar1 = (*(d->klass->vtable)._39_get_AsBool.methodPtr)(d,(d->klass->vtable)._39_get_AsBool.method);
    return bVar1;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac34b == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_JSONNode_get_Value);
    g_data_057ac34b = '\x01';
  }
  return bVar2;
}


// SimpleJSONFixed.JSONNode$$op_Implicit
// il2cpp: SimpleJSONFixed_JSONNode_o* SimpleJSONFixed_JSONNode__op_Implicit (System_Collections_Generic_KeyValuePair_string__JSONNode__o aKeyValue, const MethodInfo* method);
// 0x407a5a0

SimpleJSONFixed_JSONNode_o *
SimpleJSONFixed_JSONNode__op_Implicit_3f7a5a0
          (System_Collections_Generic_KeyValuePair_string__JSONNode__o aKeyValue,MethodInfo *method)

{
  if (g_data_057ac34b == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_JSONNode_get_Value);
    g_data_057ac34b = '\x01';
  }
  return aKeyValue.fields.value;
}


// SimpleJSONFixed.JSONNode$$op_Equality
// il2cpp: bool SimpleJSONFixed_JSONNode__op_Equality (SimpleJSONFixed_JSONNode_o* a, Il2CppObject* b, const MethodInfo* method);
// 0x4079b70

bool_conflict
SimpleJSONFixed_JSONNode__op_Equality(SimpleJSONFixed_JSONNode_o *a,Il2CppObject *b,MethodInfo *method)

{
  byte bVar1;
  byte bVar2;
  Il2CppClass **ppIVar3;
  Il2CppClass *pIVar4;
  Il2CppMethodPointer vtableDispatch;
  bool_conflict bVar5;
  undefined8 in_RAX;
  Il2CppObject *__this;
  bool bVar6;
  bool bVar7;
  Il2CppClass *pIVar8;
  
  if (g_data_057ac34c == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONLazyCreator);
    in_RAX = il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNull);
    g_data_057ac34c = '\x01';
  }
  if ((Il2CppObject *)a == b) {
    return (bool_conflict)CONCAT71((int7)((ulong)in_RAX >> 8),1);
  }
  bVar6 = true;
  pIVar8 = (Il2CppClass *)&TypeInfo_JSONNull;
  if (a != (SimpleJSONFixed_JSONNode_o *)0x0) {
    bVar1 = (TypeInfo_JSONNull->_2).naturalAligment;
    if ((a->klass->_2).naturalAligment < bVar1) {
      pIVar8 = (Il2CppClass *)0x0;
    }
    else {
      ppIVar3 = (a->klass->_2).typeHierarchy;
      pIVar8 = (Il2CppClass *)CONCAT71((int7)((ulong)ppIVar3 >> 8),ppIVar3[(ulong)bVar1 - 1] == TypeInfo_JSONNull);
    }
    if ((a != (SimpleJSONFixed_JSONNode_o *)0x0) && ((char)pIVar8 == '\0')) {
      bVar1 = (TypeInfo_JSONLazyCreator->_2).naturalAligment;
      pIVar8 = TypeInfo_JSONLazyCreator;
      if ((a->klass->_2).naturalAligment < bVar1) {
        bVar6 = false;
      }
      else {
        bVar6 = (a->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_JSONLazyCreator;
      }
    }
  }
  bVar7 = true;
  if (b != (Il2CppObject *)0x0) {
    bVar7 = true;
    pIVar4 = b->klass;
    bVar1 = (pIVar4->_2).naturalAligment;
    pIVar8 = (Il2CppClass *)CONCAT71((int7)((ulong)pIVar8 >> 8),bVar1);
    bVar2 = (TypeInfo_JSONNull->_2).naturalAligment;
    if ((bVar1 < bVar2) || ((pIVar4->_2).typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_JSONNull)) {
      bVar2 = (TypeInfo_JSONLazyCreator->_2).naturalAligment;
      bVar7 = false;
      if (bVar2 <= bVar1) {
        pIVar8 = (Il2CppClass *)(pIVar4->_2).typeHierarchy;
        bVar7 = *(Il2CppClass **)((long)pIVar8 + (ulong)bVar2 * 8 + -8) == TypeInfo_JSONLazyCreator;
      }
    }
  }
  if (!bVar6 && !(bool)(bVar7 & bVar6)) {
    if (a != (SimpleJSONFixed_JSONNode_o *)0x0) {
      vtableDispatch = (a->klass->vtable)._0_Equals.methodPtr;
      bVar5 = (*vtableDispatch)(a,b,(a->klass->vtable)._0_Equals.method,vtableDispatch);
      return bVar5;
    }
    pIVar8 = (Il2CppClass *)il2cpp_runtime_helper_022b2c90();
    if (g_data_057ac33f == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNumber);
      g_data_057ac33f = '\x01';
    }
    __this = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_JSONNumber);
    if (g_data_057ac38e == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
      g_data_057ac38e = '\x01';
    }
    if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    System_Object___ctor(__this,(MethodInfo *)0x0);
    __this[1].klass = pIVar8;
    return (bool_conflict)__this;
  }
  return (bool_conflict)CONCAT71((int7)((ulong)pIVar8 >> 8),bVar7 & bVar6);
}


// SimpleJSONFixed.JSONNode$$op_Inequality
// il2cpp: bool SimpleJSONFixed_JSONNode__op_Inequality (SimpleJSONFixed_JSONNode_o* a, Il2CppObject* b, const MethodInfo* method);
// 0x407a5d0

bool_conflict
SimpleJSONFixed_JSONNode__op_Inequality(SimpleJSONFixed_JSONNode_o *a,Il2CppObject *b,MethodInfo *method)

{
  uint uVar1;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  
  if (g_data_057ac34d == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    g_data_057ac34d = '\x01';
    method = extraout_RDX;
  }
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    method = extraout_RDX_00;
  }
  uVar1 = SimpleJSONFixed_JSONNode__op_Equality(a,b,method);
  return uVar1 ^ 1;
}


// SimpleJSONFixed.JSONNode$$Equals
// il2cpp: bool SimpleJSONFixed_JSONNode__Equals (SimpleJSONFixed_JSONNode_o* __this, Il2CppObject* obj, const MethodInfo* method);
// 0x407a630

bool_conflict
SimpleJSONFixed_JSONNode__Equals(SimpleJSONFixed_JSONNode_o *__this,Il2CppObject *obj,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),(Il2CppObject *)__this == obj);
}


// SimpleJSONFixed.JSONNode$$GetHashCode
// il2cpp: int32_t SimpleJSONFixed_JSONNode__GetHashCode (SimpleJSONFixed_JSONNode_o* __this, const MethodInfo* method);
// 0x407a640

int32_t SimpleJSONFixed_JSONNode__GetHashCode(SimpleJSONFixed_JSONNode_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  
  iVar1 = System_Object__GetHashCode((Il2CppObject *)__this,(MethodInfo *)0x0);
  return iVar1;
}


// SimpleJSONFixed.JSONNode$$get_EscapeBuilder
// il2cpp: System_Text_StringBuilder_o* SimpleJSONFixed_JSONNode__get_EscapeBuilder (const MethodInfo* method);
// 0x407a650

System_Text_StringBuilder_o * SimpleJSONFixed_JSONNode__get_EscapeBuilder(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  undefined8 *puVar4;
  System_Text_StringBuilder_o *__this;
  undefined8 uVar5;
  
  if (g_data_057ac34e == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    il2cpp_runtime_helper_023445d0(&TypeInfo_StringBuilder);
    g_data_057ac34e = '\x01';
    iVar1 = *(int *)(TypeInfo_JSONNode + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_JSONNode + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
    plVar3 = (long *)il2cpp_runtime_helper_022b2940(TypeInfo_JSONNode);
    lVar2 = *plVar3;
  }
  else {
    plVar3 = (long *)il2cpp_runtime_helper_022b2940();
    lVar2 = *plVar3;
  }
  if (lVar2 == 0) {
    __this = (System_Text_StringBuilder_o *)il2cpp_runtime_helper_023052d0(TypeInfo_StringBuilder);
    System_Text_StringBuilder___ctor(__this,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    puVar4 = (undefined8 *)il2cpp_runtime_helper_022b2940(TypeInfo_JSONNode);
    *puVar4 = __this;
    uVar5 = il2cpp_runtime_helper_022b2940(TypeInfo_JSONNode);
    il2cpp_runtime_helper_022b4080(uVar5,__this);
    iVar1 = *(int *)(TypeInfo_JSONNode + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_JSONNode + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  puVar4 = (undefined8 *)il2cpp_runtime_helper_022b2940(TypeInfo_JSONNode);
  return (System_Text_StringBuilder_o *)*puVar4;
}


// SimpleJSONFixed.JSONNode$$Escape
// il2cpp: System_String_o* SimpleJSONFixed_JSONNode__Escape (System_String_o* aText, const MethodInfo* method);
// 0x407a750

System_String_o * SimpleJSONFixed_JSONNode__Escape(System_String_o *aText,MethodInfo *method)

{
  uint index;
  long lVar1;
  long *plVar2;
  code *pcVar3;
  Il2CppMethodPointer pIVar4;
  bool bVar5;
  byte bVar6;
  uint16_t uVar7;
  int32_t iVar8;
  bool_conflict bVar9;
  ulong in_RAX;
  MethodInfo *pMVar10;
  undefined8 *puVar11;
  MethodInfo *pMVar12;
  System_String_o *pSVar13;
  System_Globalization_CultureInfo_o *provider;
  System_Collections_Generic_Stack_object__o *pSVar14;
  System_Text_StringBuilder_o *__this;
  SimpleJSONFixed_JSONObject_o *__this_00;
  SimpleJSONFixed_JSONNode_o *pSVar15;
  Il2CppObject *pIVar16;
  MethodInfo *pMVar17;
  undefined8 uVar18;
  System_Exception_o *__this_01;
  System_Collections_Generic_Dictionary_object__object__o *__this_02;
  System_String_o *extraout_RAX;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
  MethodInfo *extraout_RDX_03;
  MethodInfo *extraout_RDX_04;
  MethodInfo *extraout_RDX_05;
  MethodInfo *extraout_RDX_06;
  MethodInfo *extraout_RDX_07;
  MethodInfo *extraout_RDX_08;
  MethodInfo *extraout_RDX_09;
  MethodInfo *extraout_RDX_10;
  MethodInfo *extraout_RDX_11;
  MethodInfo *extraout_RDX_12;
  MethodInfo *extraout_RDX_13;
  MethodInfo *extraout_RDX_14;
  MethodInfo *extraout_RDX_15;
  MethodInfo *extraout_RDX_16;
  MethodInfo *extraout_RDX_17;
  MethodInfo *extraout_RDX_18;
  MethodInfo *extraout_RDX_19;
  MethodInfo *extraout_RDX_20;
  MethodInfo *extraout_RDX_21;
  MethodInfo *extraout_RDX_22;
  MethodInfo *extraout_RDX_23;
  int iVar19;
  ulong unaff_RBX;
  undefined1 *puVar20;
  System_String_o **unaff_RBP;
  ulong uVar21;
  int value;
  System_String_o **__this_03;
  undefined *puVar22;
  System_Exception_o *__this_04;
  uint index_00;
  uint *unaff_R12;
  undefined8 unaff_R13;
  MethodInfo *unaff_R14;
  bool bVar23;
  undefined1 auVar24 [16];
  undefined1 auStack_38 [8];
  
  puVar20 = auStack_38;
  auStack_38 = (undefined1  [8])in_RAX;
  if (g_data_057ac34f == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    il2cpp_runtime_helper_023445d0(&"\\b");
    il2cpp_runtime_helper_023445d0(&"\\n");
    il2cpp_runtime_helper_023445d0(&"\\t");
    il2cpp_runtime_helper_023445d0(&"\\\"");
    il2cpp_runtime_helper_023445d0(&"\\f");
    il2cpp_runtime_helper_023445d0(&"\\r");
    il2cpp_runtime_helper_023445d0(&"X4");
    il2cpp_runtime_helper_023445d0(&"\\u");
    il2cpp_runtime_helper_023445d0(&"\\\\");
    g_data_057ac34f = '\x01';
  }
  auStack_38 = (undefined1  [8])((ulong)auStack_38 & 0xffffffffffff);
  pMVar17 = TypeInfo_JSONNode;
  if (*(int *)((long)&TypeInfo_JSONNode[2].parameters + 4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pMVar10 = (MethodInfo *)SimpleJSONFixed_JSONNode__get_EscapeBuilder(pMVar17);
  if (pMVar10 != (MethodInfo *)0x0) {
    System_Text_StringBuilder__set_Length((System_Text_StringBuilder_o *)pMVar10,0,(MethodInfo *)0x0);
    method = (MethodInfo *)0x0;
    pMVar17 = pMVar10;
    iVar8 = System_Text_StringBuilder__get_Capacity((System_Text_StringBuilder_o *)pMVar10,(MethodInfo *)0x0);
    unaff_R14 = pMVar10;
    if (aText != (System_String_o *)0x0) {
      iVar19 = (aText->fields)._stringLength;
      value = iVar19 / 10 + iVar19;
      if (iVar8 < value) {
        System_Text_StringBuilder__set_Capacity
                  ((System_Text_StringBuilder_o *)pMVar10,value,(MethodInfo *)0x0);
        iVar19 = (aText->fields)._stringLength;
      }
      if (iVar19 < 1) {
label_0407a9d3:
        pSVar13 = (System_String_o *)
                  (*(((System_Text_StringBuilder_c *)pMVar10->methodPointer)->vtable)._3_ToString.methodPtr)
                            (pMVar10);
        System_Text_StringBuilder__set_Length((System_Text_StringBuilder_o *)pMVar10,0,(MethodInfo *)0x0);
        return pSVar13;
      }
      unaff_RBX = 0;
      unaff_R12 = &switchD_0407a8a3::switchdataD_00d9912c;
label_0407a880:
      iVar19 = (int)unaff_RBX;
      uVar7 = System_String__get_Chars(aText,iVar19,(MethodInfo *)0x0);
      pMVar12 = pMVar10;
      switch(uVar7) {
      case 8:
        pSVar13 = "\\b";
        goto label_0407a986;
      case 9:
        puVar11 = &"\\t";
        break;
      case 10:
        puVar11 = &"\\n";
        break;
      case 0xb:
      case 0xe:
      case 0xf:
      case 0x10:
      case 0x11:
      case 0x12:
      case 0x13:
      case 0x14:
      case 0x15:
      case 0x16:
      case 0x17:
      case 0x18:
      case 0x19:
      case 0x1a:
      case 0x1b:
      case 0x1c:
      case 0x1d:
      case 0x1e:
      case 0x1f:
      case 0x20:
      case 0x21:
switchD_0407a8a3_caseD_3:
        if (uVar7 < 0x20) {
label_0407a907:
          unaff_RBP = &"\\b";
          auStack_38._6_2_ = uVar7;
          pMVar12 = (MethodInfo *)
                    System_Text_StringBuilder__Append_3b03f90
                              ((System_Text_StringBuilder_o *)pMVar10,"\\u",(MethodInfo *)0x0);
          pMVar17 = (MethodInfo *)(auStack_38 + 6);
          method = "X4";
          pSVar13 = System_UInt16__ToString_3cd7a50
                              ((uint16_t)pMVar17,(System_String_o *)"X4",(MethodInfo *)0x0);
          unaff_R13 = 0;
          if (pMVar12 != (MethodInfo *)0x0) goto label_0407a986;
          goto label_0407aa07;
        }
        if (*(int *)((long)&TypeInfo_JSONNode[2].parameters + 4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        if ((0x7f < uVar7) && (*TypeInfo_JSONNode[2].virtualMethodPointer != (Il2CppMethodPointer)0x0))
        goto label_0407a907;
        System_Text_StringBuilder__Append_3b048f0
                  ((System_Text_StringBuilder_o *)pMVar10,uVar7,(MethodInfo *)0x0);
        unaff_RBX = (ulong)(iVar19 + 1U);
        if ((aText->fields)._stringLength <= (int)(iVar19 + 1U)) goto label_0407a9d3;
        goto label_0407a880;
      case 0xc:
        puVar11 = &"\\f";
        break;
      case 0xd:
        puVar11 = &"\\r";
        break;
      case 0x22:
        puVar11 = &"\\\"";
        break;
      default:
        if (uVar7 != 0x5c) goto switchD_0407a8a3_caseD_3;
        puVar11 = &"\\\\";
      }
      pSVar13 = (System_String_o *)*puVar11;
label_0407a986:
      System_Text_StringBuilder__Append_3b03f90
                ((System_Text_StringBuilder_o *)pMVar12,pSVar13,(MethodInfo *)0x0);
      unaff_RBX = (ulong)(iVar19 + 1U);
      if ((aText->fields)._stringLength <= (int)(iVar19 + 1U)) goto label_0407a9d3;
      goto label_0407a880;
    }
  }
label_0407aa07:
  il2cpp_runtime_helper_022b2c90();
  do {
    *(System_String_o ***)(puVar20 + -8) = unaff_RBP;
    *(MethodInfo **)(puVar20 + -0x10) = unaff_R14;
    *(ulong *)(puVar20 + -0x18) = unaff_RBX;
    uVar21 = (ulong)method & 0xffffffff;
    __this_03 = (System_String_o **)pMVar17;
    if (g_data_057ac350 == '\0') {
      *(undefined8 *)(puVar20 + -0x30) = 0x407aa32;
      il2cpp_runtime_helper_023445d0(&TypeInfo_CultureInfo);
      *(undefined8 *)(puVar20 + -0x30) = 0x407aa3e;
      il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
      *(undefined8 *)(puVar20 + -0x30) = 0x407aa4a;
      il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNull);
      *(undefined8 *)(puVar20 + -0x30) = 0x407aa56;
      il2cpp_runtime_helper_023445d0(&"null");
      *(undefined8 *)(puVar20 + -0x30) = 0x407aa62;
      il2cpp_runtime_helper_023445d0(&"false");
      __this_03 = &"true";
      *(undefined8 *)(puVar20 + -0x30) = 0x407aa6e;
      il2cpp_runtime_helper_023445d0();
      g_data_057ac350 = '\x01';
    }
    *(undefined8 *)(puVar20 + -0x20) = 0;
    if ((char)uVar21 != '\0') {
label_0407ab64:
      if (*(int *)((long)&TypeInfo_JSONNode[2].parameters + 4) == 0) {
        *(undefined8 *)(puVar20 + -0x30) = 0x407ab7c;
        il2cpp_runtime_helper_02337ed0();
      }
      *(undefined8 *)(puVar20 + -0x30) = 0x407ab84;
      pSVar13 = (System_String_o *)SimpleJSONFixed_JSONNode__op_Implicit((System_String_o *)pMVar17,method);
      return pSVar13;
    }
    if (pMVar17 != (MethodInfo *)0x0) {
      if (*(int *)&((System_Text_StringBuilder_Fields *)&pMVar17->invoker_method)->m_ChunkChars < 6) {
        *(undefined8 *)(puVar20 + -0x30) = 0x407ab96;
        pSVar13 = System_String__ToLower((System_String_o *)pMVar17,(MethodInfo *)0x0);
        *(undefined8 *)(puVar20 + -0x30) = 0x407abad;
        bVar9 = System_String__op_Equality(pSVar13,"false",(MethodInfo *)0x0);
        if ((char)bVar9 != '\0') {
label_0407abcd:
          *(undefined8 *)(puVar20 + -0x30) = 0x407abe1;
          bVar9 = System_String__op_Equality(pSVar13,"true",(MethodInfo *)0x0);
          if (*(int *)((long)&TypeInfo_JSONNode[2].parameters + 4) == 0) {
            *(undefined8 *)(puVar20 + -0x30) = 0x407abfb;
            il2cpp_runtime_helper_02337ed0();
          }
          if (g_data_057ac349 == '\0') {
            *(undefined8 *)(puVar20 + -0x30) = 0x407ac10;
            il2cpp_runtime_helper_023445d0(&TypeInfo_JSONBool);
            g_data_057ac349 = '\x01';
          }
          *(undefined8 *)(puVar20 + -0x30) = 0x407ac26;
          pSVar13 = (System_String_o *)il2cpp_runtime_helper_023052d0(TypeInfo_JSONBool);
          if (g_data_057ac393 == '\0') {
            *(undefined8 *)(puVar20 + -0x30) = 0x407ac3e;
            il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
            g_data_057ac393 = '\x01';
          }
          if (*(int *)((long)&TypeInfo_JSONNode[2].parameters + 4) == 0) {
            *(undefined8 *)(puVar20 + -0x30) = 0x407ac56;
            il2cpp_runtime_helper_02337ed0();
          }
          *(undefined8 *)(puVar20 + -0x30) = 0x407ac60;
          System_Object___ctor((Il2CppObject *)pSVar13,(MethodInfo *)0x0);
          *(char *)&(pSVar13->fields)._stringLength = (char)bVar9;
          return pSVar13;
        }
        *(undefined8 *)(puVar20 + -0x30) = 0x407abc5;
        bVar9 = System_String__op_Equality(pSVar13,"true",(MethodInfo *)0x0);
        if ((char)bVar9 != '\0') goto label_0407abcd;
        *(undefined8 *)(puVar20 + -0x30) = 0x407ac84;
        bVar9 = System_String__op_Equality(pSVar13,"null",(MethodInfo *)0x0);
        if ((char)bVar9 != '\0') {
          pMVar17 = TypeInfo_JSONNull;
          if (*(int *)((long)&TypeInfo_JSONNull[2].parameters + 4) == 0) {
            *(undefined8 *)(puVar20 + -0x30) = 0x407aca4;
            il2cpp_runtime_helper_02337ed0();
          }
          *(undefined8 *)(puVar20 + -0x30) = 0x407aca9;
          pSVar13 = (System_String_o *)SimpleJSONFixed_JSONNull__CreateOrGet(pMVar17);
          return pSVar13;
        }
      }
      if (*(int *)(TypeInfo_CultureInfo + 0xe4) == 0) {
        *(undefined8 *)(puVar20 + -0x30) = 0x407aab2;
        il2cpp_runtime_helper_02337ed0();
      }
      *(undefined8 *)(puVar20 + -0x30) = 0x407aab9;
      provider = System_Globalization_CultureInfo__get_InvariantCulture((MethodInfo *)0x0);
      method = (MethodInfo *)&g_data_000000a7;
      *(undefined8 *)(puVar20 + -0x30) = 0x407aad1;
      bVar9 = System_Double__TryParse_3c9a570
                        ((System_String_o *)pMVar17,0xa7,(System_IFormatProvider_o *)provider,
                         (double *)(puVar20 + -0x20),(MethodInfo *)0x0);
      if ((char)bVar9 != '\0') {
        uVar18 = *(undefined8 *)(puVar20 + -0x20);
        if (*(int *)((long)&TypeInfo_JSONNode[2].parameters + 4) == 0) {
          *(undefined8 *)(puVar20 + -0x30) = 0x407aaf6;
          il2cpp_runtime_helper_02337ed0();
        }
        if (g_data_057ac33f == '\0') {
          *(undefined8 *)(puVar20 + -0x30) = 0x407ab0b;
          il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNumber);
          g_data_057ac33f = '\x01';
        }
        *(undefined8 *)(puVar20 + -0x30) = 0x407ab21;
        pSVar13 = (System_String_o *)il2cpp_runtime_helper_023052d0(TypeInfo_JSONNumber);
        if (g_data_057ac38e == '\0') {
          *(undefined8 *)(puVar20 + -0x30) = 0x407ab39;
          il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
          g_data_057ac38e = '\x01';
        }
        if (*(int *)((long)&TypeInfo_JSONNode[2].parameters + 4) == 0) {
          *(undefined8 *)(puVar20 + -0x30) = 0x407ab51;
          il2cpp_runtime_helper_02337ed0();
        }
        *(undefined8 *)(puVar20 + -0x30) = 0x407ab5b;
        System_Object___ctor((Il2CppObject *)pSVar13,(MethodInfo *)0x0);
        (pSVar13->fields)._stringLength = (int)uVar18;
        (pSVar13->fields)._firstChar = (short)((ulong)uVar18 >> 0x20);
        *(short *)&(pSVar13->fields).field_0x6 = (short)((ulong)uVar18 >> 0x30);
        return pSVar13;
      }
      goto label_0407ab64;
    }
    *(undefined8 *)(puVar20 + -0x30) = 0x407acb3;
    il2cpp_runtime_helper_022b2c90();
    *(ulong *)(puVar20 + -0x30) = uVar21;
    *(System_String_o **)(puVar20 + -0x38) = aText;
    *(MethodInfo **)(puVar20 + -0x40) = unaff_R14;
    *(undefined8 *)(puVar20 + -0x48) = unaff_R13;
    *(uint **)(puVar20 + -0x50) = unaff_R12;
    *(undefined8 *)(puVar20 + -0x58) = 0;
    if (g_data_057ac351 == '\0') {
      *(undefined8 *)(puVar20 + -0x98) = 0x407acea;
      il2cpp_runtime_helper_023445d0(&TypeInfo_JSONArray);
      *(undefined8 *)(puVar20 + -0x98) = 0x407acf6;
      il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
      *(undefined8 *)(puVar20 + -0x98) = 0x407ad02;
      il2cpp_runtime_helper_023445d0(&TypeInfo_JSONObject);
      *(undefined8 *)(puVar20 + -0x98) = 0x407ad0e;
      il2cpp_runtime_helper_023445d0(&MethodInfo_JSONNode_Peek);
      *(undefined8 *)(puVar20 + -0x98) = 0x407ad1a;
      il2cpp_runtime_helper_023445d0(&MethodInfo_JSONNode_Pop);
      *(undefined8 *)(puVar20 + -0x98) = 0x407ad26;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Push);
      *(undefined8 *)(puVar20 + -0x98) = 0x407ad32;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Stack_1_SimpleJSONFixed_JSONNode);
      *(undefined8 *)(puVar20 + -0x98) = 0x407ad3e;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
      *(undefined8 *)(puVar20 + -0x98) = 0x407ad4a;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Stack_JSONNode);
      *(undefined8 *)(puVar20 + -0x98) = 0x407ad56;
      il2cpp_runtime_helper_023445d0(&TypeInfo_StringBuilder);
      *(undefined8 *)(puVar20 + -0x98) = 0x407ad62;
      il2cpp_runtime_helper_023445d0(&"");
      g_data_057ac351 = '\x01';
    }
    *(undefined8 *)(puVar20 + -0x98) = 0x407ad78;
    pSVar14 = (System_Collections_Generic_Stack_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Stack_JSONNode);
    *(System_Collections_Generic_Stack_object__o **)(puVar20 + -0x68) = pSVar14;
    *(undefined8 *)(puVar20 + -0x98) = 0x407ad8f;
    System_Collections_Generic_Stack_object____ctor(pSVar14,MethodInfo_Stack_1_SimpleJSONFixed_JSONNode);
    *(undefined8 *)(puVar20 + -0x98) = 0x407ad9e;
    __this = (System_Text_StringBuilder_o *)il2cpp_runtime_helper_023052d0(TypeInfo_StringBuilder);
    *(undefined8 *)(puVar20 + -0x98) = 0x407adab;
    System_Text_StringBuilder___ctor(__this,(MethodInfo *)0x0);
    if ((MethodInfo *)__this_03 == (MethodInfo *)0x0) {
label_0407b618:
      *(undefined8 *)(puVar20 + -0x98) = 0x407b61d;
      il2cpp_runtime_helper_022b2c90();
label_0407b61d:
      *(undefined8 *)(puVar20 + -0x98) = 0x407b629;
      uVar18 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
      *(undefined8 *)(puVar20 + -0x98) = 0x407b631;
      __this_01 = (System_Exception_o *)il2cpp_runtime_helper_023052d0(uVar18);
      puVar22 = &"JSON Parse: Too many closing brackets";
label_0407b65b:
      *(undefined8 *)(puVar20 + -0x98) = 0x407b660;
      pSVar13 = (System_String_o *)il2cpp_runtime_helper_023445d0(puVar22);
      *(undefined8 *)(puVar20 + -0x98) = 0x407b66d;
      System_Exception___ctor_3cf6120(__this_01,pSVar13,(MethodInfo *)0x0);
      *(undefined8 *)(puVar20 + -0x98) = 0x407b679;
      uVar18 = il2cpp_runtime_helper_023445d0(&MethodInfo_JSONNode_Parse);
      *(undefined8 *)(puVar20 + -0x98) = 0x407b684;
      __this_04 = __this_01;
      uVar18 = il2cpp_runtime_helper_022b2b10(__this_01,uVar18);
      *(System_Text_StringBuilder_o **)(puVar20 + -0x98) = __this;
      *(System_Exception_o **)(puVar20 + -0xa0) = __this_01;
      *(undefined8 *)(puVar20 + -0xa8) = uVar18;
      if (g_data_057ac382 == '\0') {
        *(undefined8 *)(puVar20 + -0xb0) = 0x407b6ac;
        il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_String_SimpleJSONFixed_JSONNode);
        *(undefined8 *)(puVar20 + -0xb0) = 0x407b6b8;
        il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_string_JSONNode);
        *(undefined8 *)(puVar20 + -0xb0) = 0x407b6c4;
        il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
        g_data_057ac382 = '\x01';
      }
      *(undefined8 *)(puVar20 + -0xb0) = 0x407b6da;
      __this_02 = (System_Collections_Generic_Dictionary_object__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_string_JSONNode);
      *(undefined8 *)(puVar20 + -0xb0) = 0x407b6ef;
      System_Collections_Generic_Dictionary_object__object____ctor(__this_02,MethodInfo_Dictionary_2_System_String_SimpleJSONFixed_JSONNode);
      (__this_04->fields)._className = (System_String_o *)__this_02;
      *(undefined8 *)(puVar20 + -0xb0) = 0x407b6ff;
      il2cpp_runtime_helper_022b4080(&__this_04->fields);
      if (*(int *)((long)&TypeInfo_JSONNode[2].parameters + 4) == 0) {
        *(undefined8 *)(puVar20 + -0xb0) = 0x407b717;
        il2cpp_runtime_helper_02337ed0();
      }
      System_Object___ctor((Il2CppObject *)__this_04,(MethodInfo *)0x0);
      return extraout_RAX;
    }
    index_00 = 0;
    if (0 < *(int *)&((System_Text_StringBuilder_Fields *)&((MethodInfo *)__this_03)->invoker_method)->
                     m_ChunkChars) {
      *(undefined8 *)(puVar20 + -0x70) = "";
      bVar23 = false;
      *(undefined8 *)(puVar20 + -0x78) = 0;
      *(undefined8 *)(puVar20 + -0x88) = 0;
      *(undefined8 *)(puVar20 + -0x80) = 0;
      *(System_Text_StringBuilder_o **)(puVar20 + -0x60) = __this;
label_0407ae34:
      pMVar10 = (MethodInfo *)(ulong)index_00;
      *(undefined8 *)(puVar20 + -0x98) = 0x407ae41;
      uVar7 = System_String__get_Chars((System_String_o *)__this_03,index_00,(MethodInfo *)0x0);
      pMVar17 = extraout_RDX_00;
      bVar5 = bVar23;
      if (uVar7 < 0x30) {
        if (uVar7 < 0x21) {
          bVar5 = true;
          switch(uVar7) {
          case 9:
          case 0x20:
            bVar5 = bVar23;
            if ((puVar20[-0x88] & 1) != 0) goto switchD_0407ae72_caseD_2;
            break;
          case 10:
          case 0xd:
            break;
          default:
            goto switchD_0407ae72_caseD_2;
          }
          goto switchD_0407ae72_caseD_1;
        }
        if (uVar7 == 0x22) {
          bVar6 = ~(byte)*(undefined8 *)(puVar20 + -0x88);
          *(ulong *)(puVar20 + -0x88) =
               CONCAT71((int7)((ulong)*(undefined8 *)(puVar20 + -0x88) >> 8),bVar6) & 0xffffffffffffff01;
          *(ulong *)(puVar20 + -0x78) =
               CONCAT71((int7)((ulong)*(undefined8 *)(puVar20 + -0x78) >> 8),
                        (byte)*(undefined8 *)(puVar20 + -0x78) | bVar6) & 0xffffffffffffff01;
          goto switchD_0407ae72_caseD_1;
        }
        if (uVar7 == 0x2c) {
          if ((puVar20[-0x88] & 1) != 0) goto switchD_0407ae72_caseD_2;
          if (__this == (System_Text_StringBuilder_o *)0x0) goto label_0407b618;
          *(undefined8 *)(puVar20 + -0x98) = 0x407b173;
          iVar8 = System_Text_StringBuilder__get_Length(__this,(MethodInfo *)0x0);
          uVar21 = *(ulong *)(puVar20 + -0x78);
          uVar18 = "";
          if (0 < iVar8 || (uVar21 & 1) != 0) {
            pMVar17 = (__this->klass->vtable)._3_ToString.method;
            pIVar4 = (__this->klass->vtable)._3_ToString.methodPtr;
            *(undefined8 *)(puVar20 + -0x98) = 0x407b19a;
            auVar24 = (*pIVar4)(__this,pMVar17);
            pMVar17 = auVar24._8_8_;
            if (*(int *)((long)&TypeInfo_JSONNode[2].parameters + 4) == 0) {
              *(undefined8 *)(puVar20 + -0x98) = 0x407b1b1;
              il2cpp_runtime_helper_02337ed0();
              pMVar17 = extraout_RDX_09;
            }
            *(undefined8 *)(puVar20 + -0x98) = 0x407b1bd;
            pSVar15 = SimpleJSONFixed_JSONNode__ParseElement(auVar24._0_8_,(uint)uVar21 & 1,pMVar17);
            plVar2 = *(long **)(puVar20 + -0x80);
            if (plVar2 != (long *)0x0) {
              uVar18 = *(undefined8 *)(*plVar2 + 0x280);
              pcVar3 = *(code **)(*plVar2 + 0x278);
              *(undefined8 *)(puVar20 + -0x98) = 0x407b1e3;
              (*pcVar3)(plVar2,*(undefined8 *)(puVar20 + -0x70),pSVar15,uVar18);
              uVar18 = "";
              goto label_0407b1f4;
            }
            goto label_0407b618;
          }
          goto label_0407b1f4;
        }
        if (uVar7 == 0x2f) {
          if (*(int *)((long)&TypeInfo_JSONNode[2].parameters + 4) == 0) {
            *(undefined8 *)(puVar20 + -0x98) = 0x407b3bd;
            il2cpp_runtime_helper_02337ed0();
            bVar6 = puVar20[-0x88];
          }
          else {
            bVar6 = puVar20[-0x88];
          }
          if ((((bVar6 & 1) == 0) && (TypeInfo_JSONNode[2].virtualMethodPointer[2] != (Il2CppMethodPointer)0x0)) &&
             (index = index_00 + 1,
             (int)index <
             *(int *)&((System_Text_StringBuilder_Fields *)&((MethodInfo *)__this_03)->invoker_method)->
                      m_ChunkChars)) {
            *(undefined8 *)(puVar20 + -0x98) = 0x407af45;
            uVar7 = System_String__get_Chars((System_String_o *)__this_03,index,(MethodInfo *)0x0);
            pMVar17 = extraout_RDX_01;
            if (uVar7 == 0x2f) {
              do {
                index_00 = index;
                if (*(int *)&((System_Text_StringBuilder_Fields *)&((MethodInfo *)__this_03)->invoker_method)
                             ->m_ChunkChars <= (int)index_00) break;
                *(undefined8 *)(puVar20 + -0x98) = 0x407af69;
                uVar7 = System_String__get_Chars((System_String_o *)__this_03,index_00,(MethodInfo *)0x0);
                pMVar17 = extraout_RDX_02;
                if (uVar7 == 10) break;
                *(undefined8 *)(puVar20 + -0x98) = 0x407af80;
                uVar7 = System_String__get_Chars((System_String_o *)__this_03,index_00,(MethodInfo *)0x0);
                pMVar17 = extraout_RDX_03;
                index = index_00 + 1;
              } while (uVar7 != 0xd);
              goto label_0407b3ef;
            }
          }
          *(undefined8 *)(puVar20 + -0x98) = 0x407b3d9;
          uVar7 = System_String__get_Chars((System_String_o *)__this_03,index_00,(MethodInfo *)0x0);
          if (__this == (System_Text_StringBuilder_o *)0x0) goto label_0407b618;
          *(undefined8 *)(puVar20 + -0x98) = 0x407b3ef;
          System_Text_StringBuilder__Append_3b048f0(__this,uVar7,(MethodInfo *)0x0);
          pMVar17 = extraout_RDX_14;
label_0407b3ef:
          index_00 = index_00 + 1;
          if (*(int *)&((System_Text_StringBuilder_Fields *)&((MethodInfo *)__this_03)->invoker_method)->
                       m_ChunkChars <= (int)index_00) goto label_0407b581;
          goto label_0407ae34;
        }
      }
      else {
        if (0x5d < uVar7) {
          if (uVar7 == 0xfeff) goto switchD_0407ae72_caseD_1;
          if (uVar7 == 0x7d) goto switchD_0407aea8_caseD_23;
          if ((uVar7 != 0x7b) || ((puVar20[-0x88] & 1) != 0)) goto switchD_0407ae72_caseD_2;
          *(undefined8 *)(puVar20 + -0x98) = 0x407afc9;
          __this_00 = (SimpleJSONFixed_JSONObject_o *)il2cpp_runtime_helper_023052d0(TypeInfo_JSONObject);
          *(undefined8 *)(puVar20 + -0x98) = 0x407afd4;
          SimpleJSONFixed_JSONObject___ctor(__this_00,pMVar10);
          pSVar14 = *(System_Collections_Generic_Stack_object__o **)(puVar20 + -0x68);
          if (pSVar14 != (System_Collections_Generic_Stack_object__o *)0x0) goto label_0407b294;
          goto label_0407b618;
        }
        switch(uVar7) {
        case 0x3a:
          if ((puVar20[-0x88] & 1) == 0) {
            if (__this == (System_Text_StringBuilder_o *)0x0) goto label_0407b618;
            pIVar4 = (__this->klass->vtable)._3_ToString.methodPtr;
            *(undefined8 *)(puVar20 + -0x98) = 0x407aed1;
            uVar18 = (*pIVar4)(__this);
label_0407b1f4:
            *(undefined8 *)(puVar20 + -0x70) = uVar18;
            *(undefined8 *)(puVar20 + -0x78) = 0;
            *(undefined8 *)(puVar20 + -0x98) = 0x407b20c;
            System_Text_StringBuilder__set_Length(__this,0,(MethodInfo *)0x0);
            pMVar17 = extraout_RDX_10;
            goto switchD_0407ae72_caseD_1;
          }
          break;
        case 0x5b:
          if ((puVar20[-0x88] & 1) == 0) {
            *(undefined8 *)(puVar20 + -0x98) = 0x407b27b;
            __this_00 = (SimpleJSONFixed_JSONObject_o *)il2cpp_runtime_helper_023052d0(TypeInfo_JSONArray);
            *(undefined8 *)(puVar20 + -0x98) = 0x407b286;
            SimpleJSONFixed_JSONArray___ctor((SimpleJSONFixed_JSONArray_o *)__this_00,pMVar10);
            pSVar14 = *(System_Collections_Generic_Stack_object__o **)(puVar20 + -0x68);
            if (pSVar14 == (System_Collections_Generic_Stack_object__o *)0x0) goto label_0407b618;
label_0407b294:
            *(undefined8 *)(puVar20 + -0x98) = 0x407b2a6;
            System_Collections_Generic_Stack_object___Push(pSVar14,(Il2CppObject *)__this_00,MethodInfo_Void_Push);
            pSVar15 = *(SimpleJSONFixed_JSONNode_o **)(puVar20 + -0x80);
            if (*(int *)((long)&TypeInfo_JSONNode[2].parameters + 4) == 0) {
              *(undefined8 *)(puVar20 + -0x98) = 0x407b455;
              il2cpp_runtime_helper_02337ed0();
              pMVar17 = extraout_RDX_18;
              if (g_data_057ac34d == '\0') goto label_0407b462;
label_0407b2d0:
              iVar19 = *(int *)((long)&TypeInfo_JSONNode[2].parameters + 4);
            }
            else {
              pMVar17 = extraout_RDX_11;
              if (g_data_057ac34d != '\0') goto label_0407b2d0;
label_0407b462:
              *(undefined8 *)(puVar20 + -0x98) = 0x407b46a;
              il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
              g_data_057ac34d = '\x01';
              iVar19 = *(int *)((long)&TypeInfo_JSONNode[2].parameters + 4);
              pMVar17 = extraout_RDX_19;
            }
            if (iVar19 == 0) {
              *(undefined8 *)(puVar20 + -0x98) = 0x407b487;
              il2cpp_runtime_helper_02337ed0();
              pMVar17 = extraout_RDX_20;
            }
            *(undefined8 *)(puVar20 + -0x98) = 0x407b2eb;
            bVar9 = SimpleJSONFixed_JSONNode__op_Equality(pSVar15,(Il2CppObject *)0x0,pMVar17);
            if ((char)bVar9 == '\0') {
              *(undefined8 *)(puVar20 + -0x98) = 0x407b303;
              pIVar16 = System_Collections_Generic_Stack_object___Peek
                                  (*(System_Collections_Generic_Stack_object__o **)(puVar20 + -0x68),
                                   MethodInfo_JSONNode_Peek);
              if (pSVar15 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_0407b618;
              pMVar17 = (pSVar15->klass->vtable)._20_Add.method;
              pIVar4 = (pSVar15->klass->vtable)._20_Add.methodPtr;
              *(undefined8 *)(puVar20 + -0x98) = 0x407b327;
              (*pIVar4)(pSVar15,*(undefined8 *)(puVar20 + -0x70),pIVar16,pMVar17);
            }
            if (__this == (System_Text_StringBuilder_o *)0x0) goto label_0407b618;
            *(undefined8 *)(puVar20 + -0x70) = "";
            *(undefined8 *)(puVar20 + -0x98) = 0x407b355;
            System_Text_StringBuilder__set_Length(__this,0,(MethodInfo *)0x0);
            *(undefined8 *)(puVar20 + -0x98) = 0x407b369;
            pIVar16 = System_Collections_Generic_Stack_object___Peek
                                (*(System_Collections_Generic_Stack_object__o **)(puVar20 + -0x68),
                                 MethodInfo_JSONNode_Peek);
            *(Il2CppObject **)(puVar20 + -0x80) = pIVar16;
            index_00 = index_00 + 1;
            bVar23 = false;
            pMVar17 = extraout_RDX_12;
            if (*(int *)&((System_Text_StringBuilder_Fields *)&((MethodInfo *)__this_03)->invoker_method)->
                         m_ChunkChars <= (int)index_00) goto label_0407b581;
            goto label_0407ae34;
          }
          break;
        case 0x5c:
          if ((puVar20[-0x88] & 1) != 0) {
            *(undefined8 *)(puVar20 + -0x98) = 0x407b22d;
            uVar7 = System_String__get_Chars((System_String_o *)__this_03,index_00 + 1,(MethodInfo *)0x0);
            if (uVar7 < 0x67) {
              if (uVar7 == 0x62) {
                if (__this == (System_Text_StringBuilder_o *)0x0) goto label_0407b618;
                uVar7 = 8;
              }
              else {
                if (uVar7 != 0x66) goto switchD_0407b4a6_caseD_1;
                if (__this == (System_Text_StringBuilder_o *)0x0) goto label_0407b618;
                uVar7 = 0xc;
              }
            }
            else {
              switch(uVar7) {
              case 0x6e:
                if (__this == (System_Text_StringBuilder_o *)0x0) goto label_0407b618;
                uVar7 = 10;
                break;
              default:
switchD_0407b4a6_caseD_1:
                if (__this == (System_Text_StringBuilder_o *)0x0) goto label_0407b618;
                break;
              case 0x72:
                if (__this == (System_Text_StringBuilder_o *)0x0) goto label_0407b618;
                uVar7 = 0xd;
                break;
              case 0x74:
                if (__this == (System_Text_StringBuilder_o *)0x0) goto label_0407b618;
                uVar7 = 9;
                break;
              case 0x75:
                *(undefined8 *)(puVar20 + -0x98) = 0x407b53e;
                pSVar13 = System_String__Substring_3af8da0
                                    ((System_String_o *)__this_03,index_00 + 2,4,(MethodInfo *)0x0);
                *(undefined8 *)(puVar20 + -0x98) = 0x407b54d;
                iVar8 = System_Int32__Parse_3cb4720(pSVar13,0x200,(MethodInfo *)0x0);
                if (__this != (System_Text_StringBuilder_o *)0x0) {
                  *(undefined8 *)(puVar20 + -0x98) = 0x407b563;
                  System_Text_StringBuilder__Append_3b048f0(__this,(uint16_t)iVar8,(MethodInfo *)0x0);
                  index_00 = index_00 + 5;
                  pMVar17 = extraout_RDX_22;
                  goto label_0407b3ef;
                }
                goto label_0407b618;
              }
            }
            *(undefined8 *)(puVar20 + -0x98) = 0x407b50a;
            System_Text_StringBuilder__Append_3b048f0(__this,uVar7,(MethodInfo *)0x0);
            pMVar17 = extraout_RDX_21;
          }
          index_00 = index_00 + 2;
          if (*(int *)&((System_Text_StringBuilder_Fields *)&((MethodInfo *)__this_03)->invoker_method)->
                       m_ChunkChars <= (int)index_00) goto label_0407b581;
          goto label_0407ae34;
        case 0x5d:
switchD_0407aea8_caseD_23:
          if ((puVar20[-0x88] & 1) == 0) {
            pSVar14 = *(System_Collections_Generic_Stack_object__o **)(puVar20 + -0x68);
            if (pSVar14 != (System_Collections_Generic_Stack_object__o *)0x0) {
              if ((pSVar14->fields)._size != 0) {
                *(undefined8 *)(puVar20 + -0x98) = 0x407b019;
                System_Collections_Generic_Stack_object___Pop(pSVar14,MethodInfo_JSONNode_Pop);
                if (__this == (System_Text_StringBuilder_o *)0x0) goto label_0407b618;
                *(undefined8 *)(puVar20 + -0x98) = 0x407b02c;
                iVar8 = System_Text_StringBuilder__get_Length(__this,(MethodInfo *)0x0);
                uVar21 = *(ulong *)(puVar20 + -0x78);
                __this = (System_Text_StringBuilder_o *)(uVar21 & 0xffffffffffffff01);
                pMVar17 = extraout_RDX_04;
                if (0 < iVar8 || (char)__this != '\0') {
                  lVar1 = **(long **)(puVar20 + -0x60);
                  uVar18 = *(undefined8 *)(lVar1 + 0x170);
                  pcVar3 = *(code **)(lVar1 + 0x168);
                  *(undefined8 *)(puVar20 + -0x98) = 0x407b055;
                  auVar24 = (*pcVar3)(*(long **)(puVar20 + -0x60),uVar18);
                  pMVar17 = auVar24._8_8_;
                  if (*(int *)((long)&TypeInfo_JSONNode[2].parameters + 4) == 0) {
                    *(undefined8 *)(puVar20 + -0x98) = 0x407b06a;
                    il2cpp_runtime_helper_02337ed0();
                    pMVar17 = extraout_RDX_05;
                  }
                  *(undefined8 *)(puVar20 + -0x98) = 0x407b076;
                  pSVar15 = SimpleJSONFixed_JSONNode__ParseElement(auVar24._0_8_,(uint)uVar21 & 1,pMVar17);
                  plVar2 = *(long **)(puVar20 + -0x80);
                  if (plVar2 == (long *)0x0) goto label_0407b618;
                  uVar18 = *(undefined8 *)(*plVar2 + 0x280);
                  pcVar3 = *(code **)(*plVar2 + 0x278);
                  *(undefined8 *)(puVar20 + -0x98) = 0x407b09c;
                  (*pcVar3)(plVar2,*(undefined8 *)(puVar20 + -0x70),pSVar15,uVar18);
                  pMVar17 = extraout_RDX_06;
                }
                if (*(int *)((long)&TypeInfo_JSONNode[2].parameters + 4) == 0) {
                  *(undefined8 *)(puVar20 + -0x98) = 0x407b414;
                  il2cpp_runtime_helper_02337ed0();
                  __this = *(System_Text_StringBuilder_o **)(puVar20 + -0x60);
                  pMVar17 = extraout_RDX_15;
                  if (g_data_057ac34d == '\0') goto label_0407b426;
label_0407b0c6:
                  iVar19 = *(int *)((long)&TypeInfo_JSONNode[2].parameters + 4);
                }
                else {
                  __this = *(System_Text_StringBuilder_o **)(puVar20 + -0x60);
                  if (g_data_057ac34d != '\0') goto label_0407b0c6;
label_0407b426:
                  *(undefined8 *)(puVar20 + -0x98) = 0x407b42e;
                  il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
                  g_data_057ac34d = '\x01';
                  iVar19 = *(int *)((long)&TypeInfo_JSONNode[2].parameters + 4);
                  pMVar17 = extraout_RDX_16;
                }
                if (iVar19 == 0) {
                  *(undefined8 *)(puVar20 + -0x98) = 0x407b44b;
                  il2cpp_runtime_helper_02337ed0();
                  pMVar17 = extraout_RDX_17;
                }
                *(undefined8 *)(puVar20 + -0x98) = 0x407b0e3;
                bVar9 = SimpleJSONFixed_JSONNode__op_Equality
                                  (*(SimpleJSONFixed_JSONNode_o **)(puVar20 + -0x80),(Il2CppObject *)0x0,
                                   pMVar17);
                if ((char)bVar9 == '\0') {
                  plVar2 = *(long **)(puVar20 + -0x80);
                  if (plVar2 == (long *)0x0) goto label_0407b618;
                  uVar18 = *(undefined8 *)(*plVar2 + 0x270);
                  pcVar3 = *(code **)(*plVar2 + 0x268);
                  *(undefined8 *)(puVar20 + -0x98) = 0x407b10f;
                  (*pcVar3)(plVar2,!bVar23,uVar18);
                }
                *(undefined8 *)(puVar20 + -0x70) = "";
                *(undefined8 *)(puVar20 + -0x98) = 0x407b12a;
                System_Text_StringBuilder__set_Length(__this,0,(MethodInfo *)0x0);
                pMVar17 = extraout_RDX_07;
                if (0 < ((*(System_Collections_Generic_Stack_object__o **)(puVar20 + -0x68))->fields)._size) {
                  *(undefined8 *)(puVar20 + -0x98) = 0x407b144;
                  pIVar16 = System_Collections_Generic_Stack_object___Peek
                                      (*(System_Collections_Generic_Stack_object__o **)(puVar20 + -0x68),
                                       MethodInfo_JSONNode_Peek);
                  *(Il2CppObject **)(puVar20 + -0x80) = pIVar16;
                  pMVar17 = extraout_RDX_08;
                }
                *(undefined8 *)(puVar20 + -0x78) = 0;
                goto switchD_0407ae72_caseD_1;
              }
              goto label_0407b61d;
            }
            goto label_0407b618;
          }
        }
      }
switchD_0407ae72_caseD_2:
      *(undefined8 *)(puVar20 + -0x98) = 0x407b39d;
      uVar7 = System_String__get_Chars((System_String_o *)__this_03,index_00,(MethodInfo *)0x0);
      if (__this == (System_Text_StringBuilder_o *)0x0) goto label_0407b618;
      *(undefined8 *)(puVar20 + -0x98) = 0x407b3b3;
      System_Text_StringBuilder__Append_3b048f0(__this,uVar7,(MethodInfo *)0x0);
      pMVar17 = extraout_RDX_13;
      bVar5 = bVar23;
switchD_0407ae72_caseD_1:
      bVar23 = bVar5;
      index_00 = index_00 + 1;
      if (*(int *)&((System_Text_StringBuilder_Fields *)&((MethodInfo *)__this_03)->invoker_method)->
                   m_ChunkChars <= (int)index_00) goto label_0407b581;
      goto label_0407ae34;
    }
    *(undefined8 *)(puVar20 + -0x80) = 0;
    *(undefined8 *)(puVar20 + -0x88) = 0;
    *(undefined8 *)(puVar20 + -0x78) = 0;
    pMVar17 = extraout_RDX;
label_0407b581:
    if ((puVar20[-0x88] & 1) != 0) {
      *(undefined8 *)(puVar20 + -0x98) = 0x407b649;
      uVar18 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
      *(undefined8 *)(puVar20 + -0x98) = 0x407b651;
      __this_01 = (System_Exception_o *)il2cpp_runtime_helper_023052d0(uVar18);
      puVar22 = &"JSON Parse: Quotation marks seems to be messed up.";
      goto label_0407b65b;
    }
    pSVar13 = *(System_String_o **)(puVar20 + -0x80);
    uVar18 = *(undefined8 *)(puVar20 + -0x78);
    if (*(int *)((long)&TypeInfo_JSONNode[2].parameters + 4) == 0) {
      *(undefined8 *)(puVar20 + -0x98) = 0x407b5ae;
      il2cpp_runtime_helper_02337ed0();
      pMVar17 = extraout_RDX_23;
    }
    *(undefined8 *)(puVar20 + -0x98) = 0x407b5b8;
    bVar9 = SimpleJSONFixed_JSONNode__op_Equality
                      ((SimpleJSONFixed_JSONNode_o *)pSVar13,(Il2CppObject *)0x0,pMVar17);
    if ((char)bVar9 == '\0') {
      return pSVar13;
    }
    if (__this == (System_Text_StringBuilder_o *)0x0) goto label_0407b618;
    pMVar17 = (__this->klass->vtable)._3_ToString.method;
    pIVar4 = (__this->klass->vtable)._3_ToString.methodPtr;
    *(undefined8 *)(puVar20 + -0x98) = 0x407b5d4;
    pMVar17 = (MethodInfo *)(*pIVar4)(__this,pMVar17);
    if (*(int *)((long)&TypeInfo_JSONNode[2].parameters + 4) == 0) {
      *(undefined8 *)(puVar20 + -0x98) = 0x407b5e8;
      il2cpp_runtime_helper_02337ed0();
    }
    method = (MethodInfo *)(ulong)((byte)uVar18 & 1);
    unaff_RBX = *(ulong *)(puVar20 + -0x58);
    unaff_R12 = *(uint **)(puVar20 + -0x50);
    unaff_R13 = *(undefined8 *)(puVar20 + -0x48);
    unaff_R14 = *(MethodInfo **)(puVar20 + -0x40);
    aText = *(System_String_o **)(puVar20 + -0x38);
    unaff_RBP = *(System_String_o ***)(puVar20 + -0x30);
    puVar20 = puVar20 + -0x28;
  } while( true );
}


// SimpleJSONFixed.JSONNode$$ParseElement
// il2cpp: SimpleJSONFixed_JSONNode_o* SimpleJSONFixed_JSONNode__ParseElement (System_String_o* token, bool quoted, const MethodInfo* method);
// 0x407aa10

SimpleJSONFixed_JSONNode_o *
SimpleJSONFixed_JSONNode__ParseElement(System_String_o *token,bool_conflict quoted,MethodInfo *method)

{
  uint index;
  int iVar1;
  Il2CppClass *pIVar2;
  long lVar3;
  long *plVar4;
  code *pcVar5;
  Il2CppMethodPointer pIVar6;
  bool bVar7;
  byte bVar8;
  uint16_t uVar9;
  bool_conflict bVar10;
  int32_t iVar11;
  System_Globalization_CultureInfo_o *provider;
  Il2CppObject *pIVar12;
  SimpleJSONFixed_JSONNode_o *pSVar13;
  System_String_o *pSVar14;
  System_Collections_Generic_Stack_object__o *pSVar15;
  System_Text_StringBuilder_o *__this;
  SimpleJSONFixed_JSONObject_o *__this_00;
  undefined8 uVar16;
  System_Exception_o *__this_01;
  System_Collections_Generic_Dictionary_object__object__o *__this_02;
  SimpleJSONFixed_JSONNode_o *extraout_RAX;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
  MethodInfo *extraout_RDX_03;
  MethodInfo *extraout_RDX_04;
  MethodInfo *extraout_RDX_05;
  MethodInfo *extraout_RDX_06;
  MethodInfo *extraout_RDX_07;
  MethodInfo *extraout_RDX_08;
  MethodInfo *extraout_RDX_09;
  MethodInfo *extraout_RDX_10;
  MethodInfo *extraout_RDX_11;
  MethodInfo *extraout_RDX_12;
  MethodInfo *extraout_RDX_13;
  MethodInfo *extraout_RDX_14;
  MethodInfo *extraout_RDX_15;
  MethodInfo *extraout_RDX_16;
  MethodInfo *extraout_RDX_17;
  MethodInfo *extraout_RDX_18;
  MethodInfo *extraout_RDX_19;
  MethodInfo *extraout_RDX_20;
  MethodInfo *extraout_RDX_21;
  MethodInfo *extraout_RDX_22;
  MethodInfo *extraout_RDX_23;
  MethodInfo *extraout_RDX_24;
  undefined8 unaff_RBX;
  undefined8 unaff_RBP;
  ulong uVar17;
  undefined4 in_register_00000034;
  MethodInfo *pMVar18;
  MethodInfo *method_00;
  System_String_o **__this_03;
  undefined *puVar19;
  System_Exception_o *__this_04;
  uint index_00;
  undefined8 unaff_R12;
  undefined8 unaff_R13;
  undefined8 unaff_R14;
  bool bVar20;
  undefined8 unaff_R15;
  undefined1 auVar21 [16];
  
  pMVar18 = (MethodInfo *)CONCAT44(in_register_00000034,quoted);
  do {
    *(undefined8 *)((long)register0x00000020 + -8) = unaff_RBP;
    *(undefined8 *)((long)register0x00000020 + -0x10) = unaff_R14;
    *(undefined8 *)((long)register0x00000020 + -0x18) = unaff_RBX;
    uVar17 = (ulong)pMVar18 & 0xffffffff;
    __this_03 = (System_String_o **)token;
    if (g_data_057ac350 == '\0') {
      *(undefined8 *)((long)register0x00000020 + -0x30) = 0x407aa32;
      il2cpp_runtime_helper_023445d0(&TypeInfo_CultureInfo,pMVar18,method);
      *(undefined8 *)((long)register0x00000020 + -0x30) = 0x407aa3e;
      il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
      *(undefined8 *)((long)register0x00000020 + -0x30) = 0x407aa4a;
      il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNull);
      *(undefined8 *)((long)register0x00000020 + -0x30) = 0x407aa56;
      il2cpp_runtime_helper_023445d0(&"null");
      *(undefined8 *)((long)register0x00000020 + -0x30) = 0x407aa62;
      il2cpp_runtime_helper_023445d0(&"false");
      __this_03 = &"true";
      *(undefined8 *)((long)register0x00000020 + -0x30) = 0x407aa6e;
      il2cpp_runtime_helper_023445d0();
      g_data_057ac350 = '\x01';
    }
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0;
    if ((char)uVar17 != '\0') {
label_0407ab64:
      if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
        *(undefined8 *)((long)register0x00000020 + -0x30) = 0x407ab7c;
        il2cpp_runtime_helper_02337ed0();
      }
      *(undefined8 *)((long)register0x00000020 + -0x30) = 0x407ab84;
      pSVar13 = SimpleJSONFixed_JSONNode__op_Implicit(token,pMVar18);
      return pSVar13;
    }
    if (token != (System_String_o *)0x0) {
      if ((token->fields)._stringLength < 6) {
        *(undefined8 *)((long)register0x00000020 + -0x30) = 0x407ab96;
        pSVar14 = System_String__ToLower(token,(MethodInfo *)0x0);
        *(undefined8 *)((long)register0x00000020 + -0x30) = 0x407abad;
        bVar10 = System_String__op_Equality(pSVar14,"false",(MethodInfo *)0x0);
        if ((char)bVar10 != '\0') {
label_0407abcd:
          *(undefined8 *)((long)register0x00000020 + -0x30) = 0x407abe1;
          bVar10 = System_String__op_Equality(pSVar14,"true",(MethodInfo *)0x0);
          if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
            *(undefined8 *)((long)register0x00000020 + -0x30) = 0x407abfb;
            il2cpp_runtime_helper_02337ed0();
          }
          if (g_data_057ac349 == '\0') {
            *(undefined8 *)((long)register0x00000020 + -0x30) = 0x407ac10;
            il2cpp_runtime_helper_023445d0(&TypeInfo_JSONBool);
            g_data_057ac349 = '\x01';
          }
          *(undefined8 *)((long)register0x00000020 + -0x30) = 0x407ac26;
          pIVar12 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_JSONBool);
          if (g_data_057ac393 == '\0') {
            *(undefined8 *)((long)register0x00000020 + -0x30) = 0x407ac3e;
            il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
            g_data_057ac393 = '\x01';
          }
          if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
            *(undefined8 *)((long)register0x00000020 + -0x30) = 0x407ac56;
            il2cpp_runtime_helper_02337ed0();
          }
          *(undefined8 *)((long)register0x00000020 + -0x30) = 0x407ac60;
          System_Object___ctor(pIVar12,(MethodInfo *)0x0);
          *(char *)&pIVar12[1].klass = (char)bVar10;
          return (SimpleJSONFixed_JSONNode_o *)pIVar12;
        }
        *(undefined8 *)((long)register0x00000020 + -0x30) = 0x407abc5;
        bVar10 = System_String__op_Equality(pSVar14,"true",(MethodInfo *)0x0);
        if ((char)bVar10 != '\0') goto label_0407abcd;
        *(undefined8 *)((long)register0x00000020 + -0x30) = 0x407ac84;
        bVar10 = System_String__op_Equality(pSVar14,"null",(MethodInfo *)0x0);
        if ((char)bVar10 != '\0') {
          pMVar18 = TypeInfo_JSONNull;
          if (*(int *)((long)&TypeInfo_JSONNull[2].parameters + 4) == 0) {
            *(undefined8 *)((long)register0x00000020 + -0x30) = 0x407aca4;
            il2cpp_runtime_helper_02337ed0();
          }
          *(undefined8 *)((long)register0x00000020 + -0x30) = 0x407aca9;
          pSVar13 = (SimpleJSONFixed_JSONNode_o *)SimpleJSONFixed_JSONNull__CreateOrGet(pMVar18);
          return pSVar13;
        }
      }
      if (*(int *)(TypeInfo_CultureInfo + 0xe4) == 0) {
        *(undefined8 *)((long)register0x00000020 + -0x30) = 0x407aab2;
        il2cpp_runtime_helper_02337ed0();
      }
      *(undefined8 *)((long)register0x00000020 + -0x30) = 0x407aab9;
      provider = System_Globalization_CultureInfo__get_InvariantCulture((MethodInfo *)0x0);
      pMVar18 = (MethodInfo *)&g_data_000000a7;
      *(undefined8 *)((long)register0x00000020 + -0x30) = 0x407aad1;
      bVar10 = System_Double__TryParse_3c9a570
                         (token,0xa7,(System_IFormatProvider_o *)provider,
                          (double *)((long)register0x00000020 + -0x20),(MethodInfo *)0x0);
      if ((char)bVar10 != '\0') {
        pIVar2 = *(Il2CppClass **)((long)register0x00000020 + -0x20);
        if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
          *(undefined8 *)((long)register0x00000020 + -0x30) = 0x407aaf6;
          il2cpp_runtime_helper_02337ed0();
        }
        if (g_data_057ac33f == '\0') {
          *(undefined8 *)((long)register0x00000020 + -0x30) = 0x407ab0b;
          il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNumber);
          g_data_057ac33f = '\x01';
        }
        *(undefined8 *)((long)register0x00000020 + -0x30) = 0x407ab21;
        pIVar12 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_JSONNumber);
        if (g_data_057ac38e == '\0') {
          *(undefined8 *)((long)register0x00000020 + -0x30) = 0x407ab39;
          il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
          g_data_057ac38e = '\x01';
        }
        if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
          *(undefined8 *)((long)register0x00000020 + -0x30) = 0x407ab51;
          il2cpp_runtime_helper_02337ed0();
        }
        *(undefined8 *)((long)register0x00000020 + -0x30) = 0x407ab5b;
        System_Object___ctor(pIVar12,(MethodInfo *)0x0);
        pIVar12[1].klass = pIVar2;
        return (SimpleJSONFixed_JSONNode_o *)pIVar12;
      }
      goto label_0407ab64;
    }
    *(undefined8 *)((long)register0x00000020 + -0x30) = 0x407acb3;
    il2cpp_runtime_helper_022b2c90();
    *(ulong *)((long)register0x00000020 + -0x30) = uVar17;
    *(undefined8 *)((long)register0x00000020 + -0x38) = unaff_R15;
    *(undefined8 *)((long)register0x00000020 + -0x40) = unaff_R14;
    *(undefined8 *)((long)register0x00000020 + -0x48) = unaff_R13;
    *(undefined8 *)((long)register0x00000020 + -0x50) = unaff_R12;
    *(undefined8 *)((long)register0x00000020 + -0x58) = 0;
    if (g_data_057ac351 == '\0') {
      *(undefined8 *)((long)register0x00000020 + -0x98) = 0x407acea;
      il2cpp_runtime_helper_023445d0(&TypeInfo_JSONArray);
      *(undefined8 *)((long)register0x00000020 + -0x98) = 0x407acf6;
      il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
      *(undefined8 *)((long)register0x00000020 + -0x98) = 0x407ad02;
      il2cpp_runtime_helper_023445d0(&TypeInfo_JSONObject);
      *(undefined8 *)((long)register0x00000020 + -0x98) = 0x407ad0e;
      il2cpp_runtime_helper_023445d0(&MethodInfo_JSONNode_Peek);
      *(undefined8 *)((long)register0x00000020 + -0x98) = 0x407ad1a;
      il2cpp_runtime_helper_023445d0(&MethodInfo_JSONNode_Pop);
      *(undefined8 *)((long)register0x00000020 + -0x98) = 0x407ad26;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Push);
      *(undefined8 *)((long)register0x00000020 + -0x98) = 0x407ad32;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Stack_1_SimpleJSONFixed_JSONNode);
      *(undefined8 *)((long)register0x00000020 + -0x98) = 0x407ad3e;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
      *(undefined8 *)((long)register0x00000020 + -0x98) = 0x407ad4a;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Stack_JSONNode);
      *(undefined8 *)((long)register0x00000020 + -0x98) = 0x407ad56;
      il2cpp_runtime_helper_023445d0(&TypeInfo_StringBuilder);
      *(undefined8 *)((long)register0x00000020 + -0x98) = 0x407ad62;
      il2cpp_runtime_helper_023445d0(&"");
      g_data_057ac351 = '\x01';
    }
    *(undefined8 *)((long)register0x00000020 + -0x98) = 0x407ad78;
    pSVar15 = (System_Collections_Generic_Stack_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Stack_JSONNode);
    *(System_Collections_Generic_Stack_object__o **)((long)register0x00000020 + -0x68) = pSVar15;
    *(undefined8 *)((long)register0x00000020 + -0x98) = 0x407ad8f;
    System_Collections_Generic_Stack_object____ctor(pSVar15,MethodInfo_Stack_1_SimpleJSONFixed_JSONNode);
    *(undefined8 *)((long)register0x00000020 + -0x98) = 0x407ad9e;
    __this = (System_Text_StringBuilder_o *)il2cpp_runtime_helper_023052d0(TypeInfo_StringBuilder);
    *(undefined8 *)((long)register0x00000020 + -0x98) = 0x407adab;
    System_Text_StringBuilder___ctor(__this,(MethodInfo *)0x0);
    if ((System_String_o *)__this_03 == (System_String_o *)0x0) {
label_0407b618:
      *(undefined8 *)((long)register0x00000020 + -0x98) = 0x407b61d;
      il2cpp_runtime_helper_022b2c90();
label_0407b61d:
      *(undefined8 *)((long)register0x00000020 + -0x98) = 0x407b629;
      uVar16 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
      *(undefined8 *)((long)register0x00000020 + -0x98) = 0x407b631;
      __this_01 = (System_Exception_o *)il2cpp_runtime_helper_023052d0(uVar16);
      puVar19 = &"JSON Parse: Too many closing brackets";
label_0407b65b:
      *(undefined8 *)((long)register0x00000020 + -0x98) = 0x407b660;
      pSVar14 = (System_String_o *)il2cpp_runtime_helper_023445d0(puVar19);
      *(undefined8 *)((long)register0x00000020 + -0x98) = 0x407b66d;
      System_Exception___ctor_3cf6120(__this_01,pSVar14,(MethodInfo *)0x0);
      *(undefined8 *)((long)register0x00000020 + -0x98) = 0x407b679;
      uVar16 = il2cpp_runtime_helper_023445d0(&MethodInfo_JSONNode_Parse);
      *(undefined8 *)((long)register0x00000020 + -0x98) = 0x407b684;
      __this_04 = __this_01;
      uVar16 = il2cpp_runtime_helper_022b2b10(__this_01,uVar16);
      *(System_Text_StringBuilder_o **)((long)register0x00000020 + -0x98) = __this;
      *(System_Exception_o **)((long)register0x00000020 + -0xa0) = __this_01;
      *(undefined8 *)((long)register0x00000020 + -0xa8) = uVar16;
      if (g_data_057ac382 == '\0') {
        *(undefined8 *)((long)register0x00000020 + -0xb0) = 0x407b6ac;
        il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_String_SimpleJSONFixed_JSONNode);
        *(undefined8 *)((long)register0x00000020 + -0xb0) = 0x407b6b8;
        il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_string_JSONNode);
        *(undefined8 *)((long)register0x00000020 + -0xb0) = 0x407b6c4;
        il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
        g_data_057ac382 = '\x01';
      }
      *(undefined8 *)((long)register0x00000020 + -0xb0) = 0x407b6da;
      __this_02 = (System_Collections_Generic_Dictionary_object__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_string_JSONNode);
      *(undefined8 *)((long)register0x00000020 + -0xb0) = 0x407b6ef;
      System_Collections_Generic_Dictionary_object__object____ctor(__this_02,MethodInfo_Dictionary_2_System_String_SimpleJSONFixed_JSONNode);
      (__this_04->fields)._className = (System_String_o *)__this_02;
      *(undefined8 *)((long)register0x00000020 + -0xb0) = 0x407b6ff;
      il2cpp_runtime_helper_022b4080(&__this_04->fields);
      if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
        *(undefined8 *)((long)register0x00000020 + -0xb0) = 0x407b717;
        il2cpp_runtime_helper_02337ed0();
      }
      System_Object___ctor((Il2CppObject *)__this_04,(MethodInfo *)0x0);
      return extraout_RAX;
    }
    index_00 = 0;
    if (0 < (((System_String_o *)__this_03)->fields)._stringLength) {
      *(undefined8 *)((long)register0x00000020 + -0x70) = "";
      bVar20 = false;
      *(undefined8 *)((long)register0x00000020 + -0x78) = 0;
      *(undefined8 *)((long)register0x00000020 + -0x88) = 0;
      *(undefined8 *)((long)register0x00000020 + -0x80) = 0;
      *(System_Text_StringBuilder_o **)((long)register0x00000020 + -0x60) = __this;
label_0407ae34:
      method_00 = (MethodInfo *)(ulong)index_00;
      *(undefined8 *)((long)register0x00000020 + -0x98) = 0x407ae41;
      uVar9 = System_String__get_Chars((System_String_o *)__this_03,index_00,(MethodInfo *)0x0);
      pMVar18 = extraout_RDX_00;
      bVar7 = bVar20;
      if (uVar9 < 0x30) {
        if (uVar9 < 0x21) {
          bVar7 = true;
          switch(uVar9) {
          case 9:
          case 0x20:
            bVar7 = bVar20;
            if ((*(byte *)((long)register0x00000020 + -0x88) & 1) != 0) goto switchD_0407ae72_caseD_2;
            break;
          case 10:
          case 0xd:
            break;
          default:
            goto switchD_0407ae72_caseD_2;
          }
          goto switchD_0407ae72_caseD_1;
        }
        if (uVar9 == 0x22) {
          bVar8 = ~(byte)*(undefined8 *)((long)register0x00000020 + -0x88);
          *(ulong *)((long)register0x00000020 + -0x88) =
               CONCAT71((int7)((ulong)*(undefined8 *)((long)register0x00000020 + -0x88) >> 8),bVar8) &
               0xffffffffffffff01;
          *(ulong *)((long)register0x00000020 + -0x78) =
               CONCAT71((int7)((ulong)*(undefined8 *)((long)register0x00000020 + -0x78) >> 8),
                        (byte)*(undefined8 *)((long)register0x00000020 + -0x78) | bVar8) & 0xffffffffffffff01;
          goto switchD_0407ae72_caseD_1;
        }
        if (uVar9 == 0x2c) {
          if ((*(byte *)((long)register0x00000020 + -0x88) & 1) != 0) goto switchD_0407ae72_caseD_2;
          if (__this == (System_Text_StringBuilder_o *)0x0) goto label_0407b618;
          *(undefined8 *)((long)register0x00000020 + -0x98) = 0x407b173;
          iVar11 = System_Text_StringBuilder__get_Length(__this,(MethodInfo *)0x0);
          uVar17 = *(ulong *)((long)register0x00000020 + -0x78);
          uVar16 = "";
          if (0 < iVar11 || (uVar17 & 1) != 0) {
            pMVar18 = (__this->klass->vtable)._3_ToString.method;
            pIVar6 = (__this->klass->vtable)._3_ToString.methodPtr;
            *(undefined8 *)((long)register0x00000020 + -0x98) = 0x407b19a;
            auVar21 = (*pIVar6)(__this,pMVar18);
            pMVar18 = auVar21._8_8_;
            if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
              *(undefined8 *)((long)register0x00000020 + -0x98) = 0x407b1b1;
              il2cpp_runtime_helper_02337ed0();
              pMVar18 = extraout_RDX_09;
            }
            *(undefined8 *)((long)register0x00000020 + -0x98) = 0x407b1bd;
            pSVar13 = SimpleJSONFixed_JSONNode__ParseElement(auVar21._0_8_,(uint)uVar17 & 1,pMVar18);
            plVar4 = *(long **)((long)register0x00000020 + -0x80);
            if (plVar4 != (long *)0x0) {
              uVar16 = *(undefined8 *)(*plVar4 + 0x280);
              pcVar5 = *(code **)(*plVar4 + 0x278);
              *(undefined8 *)((long)register0x00000020 + -0x98) = 0x407b1e3;
              (*pcVar5)(plVar4,*(undefined8 *)((long)register0x00000020 + -0x70),pSVar13,uVar16);
              uVar16 = "";
              goto label_0407b1f4;
            }
            goto label_0407b618;
          }
          goto label_0407b1f4;
        }
        if (uVar9 == 0x2f) {
          if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
            *(undefined8 *)((long)register0x00000020 + -0x98) = 0x407b3bd;
            il2cpp_runtime_helper_02337ed0();
            bVar8 = *(byte *)((long)register0x00000020 + -0x88);
          }
          else {
            bVar8 = *(byte *)((long)register0x00000020 + -0x88);
          }
          if ((((bVar8 & 1) == 0) && (*(char *)(*(long *)(TypeInfo_JSONNode + 0xb8) + 2) != '\0')) &&
             (index = index_00 + 1, (int)index < (((System_String_o *)__this_03)->fields)._stringLength)) {
            *(undefined8 *)((long)register0x00000020 + -0x98) = 0x407af45;
            uVar9 = System_String__get_Chars((System_String_o *)__this_03,index,(MethodInfo *)0x0);
            pMVar18 = extraout_RDX_01;
            if (uVar9 == 0x2f) {
              do {
                index_00 = index;
                if ((((System_String_o *)__this_03)->fields)._stringLength <= (int)index_00) break;
                *(undefined8 *)((long)register0x00000020 + -0x98) = 0x407af69;
                uVar9 = System_String__get_Chars((System_String_o *)__this_03,index_00,(MethodInfo *)0x0);
                pMVar18 = extraout_RDX_02;
                if (uVar9 == 10) break;
                *(undefined8 *)((long)register0x00000020 + -0x98) = 0x407af80;
                uVar9 = System_String__get_Chars((System_String_o *)__this_03,index_00,(MethodInfo *)0x0);
                pMVar18 = extraout_RDX_03;
                index = index_00 + 1;
              } while (uVar9 != 0xd);
              goto label_0407b3ef;
            }
          }
          *(undefined8 *)((long)register0x00000020 + -0x98) = 0x407b3d9;
          uVar9 = System_String__get_Chars((System_String_o *)__this_03,index_00,(MethodInfo *)0x0);
          if (__this == (System_Text_StringBuilder_o *)0x0) goto label_0407b618;
          *(undefined8 *)((long)register0x00000020 + -0x98) = 0x407b3ef;
          System_Text_StringBuilder__Append_3b048f0(__this,uVar9,(MethodInfo *)0x0);
          pMVar18 = extraout_RDX_14;
label_0407b3ef:
          index_00 = index_00 + 1;
          if ((((System_String_o *)__this_03)->fields)._stringLength <= (int)index_00) goto label_0407b581;
          goto label_0407ae34;
        }
      }
      else {
        if (0x5d < uVar9) {
          if (uVar9 == 0xfeff) goto switchD_0407ae72_caseD_1;
          if (uVar9 == 0x7d) goto switchD_0407aea8_caseD_23;
          if ((uVar9 != 0x7b) || ((*(byte *)((long)register0x00000020 + -0x88) & 1) != 0))
          goto switchD_0407ae72_caseD_2;
          *(undefined8 *)((long)register0x00000020 + -0x98) = 0x407afc9;
          __this_00 = (SimpleJSONFixed_JSONObject_o *)il2cpp_runtime_helper_023052d0(TypeInfo_JSONObject);
          *(undefined8 *)((long)register0x00000020 + -0x98) = 0x407afd4;
          SimpleJSONFixed_JSONObject___ctor(__this_00,method_00);
          pSVar15 = *(System_Collections_Generic_Stack_object__o **)((long)register0x00000020 + -0x68);
          if (pSVar15 != (System_Collections_Generic_Stack_object__o *)0x0) goto label_0407b294;
          goto label_0407b618;
        }
        switch(uVar9) {
        case 0x3a:
          if ((*(byte *)((long)register0x00000020 + -0x88) & 1) == 0) {
            if (__this == (System_Text_StringBuilder_o *)0x0) goto label_0407b618;
            pIVar6 = (__this->klass->vtable)._3_ToString.methodPtr;
            *(undefined8 *)((long)register0x00000020 + -0x98) = 0x407aed1;
            uVar16 = (*pIVar6)(__this);
label_0407b1f4:
            *(undefined8 *)((long)register0x00000020 + -0x70) = uVar16;
            *(undefined8 *)((long)register0x00000020 + -0x78) = 0;
            *(undefined8 *)((long)register0x00000020 + -0x98) = 0x407b20c;
            System_Text_StringBuilder__set_Length(__this,0,(MethodInfo *)0x0);
            pMVar18 = extraout_RDX_10;
            goto switchD_0407ae72_caseD_1;
          }
          break;
        case 0x5b:
          if ((*(byte *)((long)register0x00000020 + -0x88) & 1) == 0) {
            *(undefined8 *)((long)register0x00000020 + -0x98) = 0x407b27b;
            __this_00 = (SimpleJSONFixed_JSONObject_o *)il2cpp_runtime_helper_023052d0(TypeInfo_JSONArray);
            *(undefined8 *)((long)register0x00000020 + -0x98) = 0x407b286;
            SimpleJSONFixed_JSONArray___ctor((SimpleJSONFixed_JSONArray_o *)__this_00,method_00);
            pSVar15 = *(System_Collections_Generic_Stack_object__o **)((long)register0x00000020 + -0x68);
            if (pSVar15 == (System_Collections_Generic_Stack_object__o *)0x0) goto label_0407b618;
label_0407b294:
            *(undefined8 *)((long)register0x00000020 + -0x98) = 0x407b2a6;
            System_Collections_Generic_Stack_object___Push(pSVar15,(Il2CppObject *)__this_00,MethodInfo_Void_Push);
            pSVar13 = *(SimpleJSONFixed_JSONNode_o **)((long)register0x00000020 + -0x80);
            if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
              *(undefined8 *)((long)register0x00000020 + -0x98) = 0x407b455;
              il2cpp_runtime_helper_02337ed0();
              pMVar18 = extraout_RDX_18;
              if (g_data_057ac34d == '\0') goto label_0407b462;
label_0407b2d0:
              iVar1 = *(int *)(TypeInfo_JSONNode + 0xe4);
            }
            else {
              pMVar18 = extraout_RDX_11;
              if (g_data_057ac34d != '\0') goto label_0407b2d0;
label_0407b462:
              *(undefined8 *)((long)register0x00000020 + -0x98) = 0x407b46a;
              il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
              g_data_057ac34d = '\x01';
              iVar1 = *(int *)(TypeInfo_JSONNode + 0xe4);
              pMVar18 = extraout_RDX_19;
            }
            if (iVar1 == 0) {
              *(undefined8 *)((long)register0x00000020 + -0x98) = 0x407b487;
              il2cpp_runtime_helper_02337ed0();
              pMVar18 = extraout_RDX_20;
            }
            *(undefined8 *)((long)register0x00000020 + -0x98) = 0x407b2eb;
            bVar10 = SimpleJSONFixed_JSONNode__op_Equality(pSVar13,(Il2CppObject *)0x0,pMVar18);
            if ((char)bVar10 == '\0') {
              *(undefined8 *)((long)register0x00000020 + -0x98) = 0x407b303;
              pIVar12 = System_Collections_Generic_Stack_object___Peek
                                  (*(System_Collections_Generic_Stack_object__o **)
                                    ((long)register0x00000020 + -0x68),MethodInfo_JSONNode_Peek);
              if (pSVar13 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_0407b618;
              pMVar18 = (pSVar13->klass->vtable)._20_Add.method;
              pIVar6 = (pSVar13->klass->vtable)._20_Add.methodPtr;
              *(undefined8 *)((long)register0x00000020 + -0x98) = 0x407b327;
              (*pIVar6)(pSVar13,*(undefined8 *)((long)register0x00000020 + -0x70),pIVar12,pMVar18);
            }
            if (__this == (System_Text_StringBuilder_o *)0x0) goto label_0407b618;
            *(undefined8 *)((long)register0x00000020 + -0x70) = "";
            *(undefined8 *)((long)register0x00000020 + -0x98) = 0x407b355;
            System_Text_StringBuilder__set_Length(__this,0,(MethodInfo *)0x0);
            *(undefined8 *)((long)register0x00000020 + -0x98) = 0x407b369;
            pIVar12 = System_Collections_Generic_Stack_object___Peek
                                (*(System_Collections_Generic_Stack_object__o **)
                                  ((long)register0x00000020 + -0x68),MethodInfo_JSONNode_Peek);
            *(Il2CppObject **)((long)register0x00000020 + -0x80) = pIVar12;
            index_00 = index_00 + 1;
            bVar20 = false;
            pMVar18 = extraout_RDX_12;
            if ((((System_String_o *)__this_03)->fields)._stringLength <= (int)index_00) goto label_0407b581;
            goto label_0407ae34;
          }
          break;
        case 0x5c:
          if ((*(byte *)((long)register0x00000020 + -0x88) & 1) != 0) {
            *(undefined8 *)((long)register0x00000020 + -0x98) = 0x407b22d;
            uVar9 = System_String__get_Chars((System_String_o *)__this_03,index_00 + 1,(MethodInfo *)0x0);
            if (uVar9 < 0x67) {
              if (uVar9 == 0x62) {
                if (__this == (System_Text_StringBuilder_o *)0x0) goto label_0407b618;
                uVar9 = 8;
              }
              else {
                if (uVar9 != 0x66) goto switchD_0407b4a6_caseD_1;
                if (__this == (System_Text_StringBuilder_o *)0x0) goto label_0407b618;
                uVar9 = 0xc;
              }
            }
            else {
              switch(uVar9) {
              case 0x6e:
                if (__this == (System_Text_StringBuilder_o *)0x0) goto label_0407b618;
                uVar9 = 10;
                break;
              default:
switchD_0407b4a6_caseD_1:
                if (__this == (System_Text_StringBuilder_o *)0x0) goto label_0407b618;
                break;
              case 0x72:
                if (__this == (System_Text_StringBuilder_o *)0x0) goto label_0407b618;
                uVar9 = 0xd;
                break;
              case 0x74:
                if (__this == (System_Text_StringBuilder_o *)0x0) goto label_0407b618;
                uVar9 = 9;
                break;
              case 0x75:
                *(undefined8 *)((long)register0x00000020 + -0x98) = 0x407b53e;
                pSVar14 = System_String__Substring_3af8da0
                                    ((System_String_o *)__this_03,index_00 + 2,4,(MethodInfo *)0x0);
                *(undefined8 *)((long)register0x00000020 + -0x98) = 0x407b54d;
                iVar11 = System_Int32__Parse_3cb4720(pSVar14,0x200,(MethodInfo *)0x0);
                if (__this != (System_Text_StringBuilder_o *)0x0) {
                  *(undefined8 *)((long)register0x00000020 + -0x98) = 0x407b563;
                  System_Text_StringBuilder__Append_3b048f0(__this,(uint16_t)iVar11,(MethodInfo *)0x0);
                  index_00 = index_00 + 5;
                  pMVar18 = extraout_RDX_22;
                  goto label_0407b3ef;
                }
                goto label_0407b618;
              }
            }
            *(undefined8 *)((long)register0x00000020 + -0x98) = 0x407b50a;
            System_Text_StringBuilder__Append_3b048f0(__this,uVar9,(MethodInfo *)0x0);
            pMVar18 = extraout_RDX_21;
          }
          index_00 = index_00 + 2;
          if ((((System_String_o *)__this_03)->fields)._stringLength <= (int)index_00) goto label_0407b581;
          goto label_0407ae34;
        case 0x5d:
switchD_0407aea8_caseD_23:
          if ((*(byte *)((long)register0x00000020 + -0x88) & 1) == 0) {
            pSVar15 = *(System_Collections_Generic_Stack_object__o **)((long)register0x00000020 + -0x68);
            if (pSVar15 != (System_Collections_Generic_Stack_object__o *)0x0) {
              if ((pSVar15->fields)._size != 0) {
                *(undefined8 *)((long)register0x00000020 + -0x98) = 0x407b019;
                System_Collections_Generic_Stack_object___Pop(pSVar15,MethodInfo_JSONNode_Pop);
                if (__this == (System_Text_StringBuilder_o *)0x0) goto label_0407b618;
                *(undefined8 *)((long)register0x00000020 + -0x98) = 0x407b02c;
                iVar11 = System_Text_StringBuilder__get_Length(__this,(MethodInfo *)0x0);
                uVar17 = *(ulong *)((long)register0x00000020 + -0x78);
                __this = (System_Text_StringBuilder_o *)(uVar17 & 0xffffffffffffff01);
                pMVar18 = extraout_RDX_04;
                if (0 < iVar11 || (char)__this != '\0') {
                  lVar3 = **(long **)((long)register0x00000020 + -0x60);
                  uVar16 = *(undefined8 *)(lVar3 + 0x170);
                  pcVar5 = *(code **)(lVar3 + 0x168);
                  *(undefined8 *)((long)register0x00000020 + -0x98) = 0x407b055;
                  auVar21 = (*pcVar5)(*(long **)((long)register0x00000020 + -0x60),uVar16);
                  pMVar18 = auVar21._8_8_;
                  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
                    *(undefined8 *)((long)register0x00000020 + -0x98) = 0x407b06a;
                    il2cpp_runtime_helper_02337ed0();
                    pMVar18 = extraout_RDX_05;
                  }
                  *(undefined8 *)((long)register0x00000020 + -0x98) = 0x407b076;
                  pSVar13 = SimpleJSONFixed_JSONNode__ParseElement(auVar21._0_8_,(uint)uVar17 & 1,pMVar18);
                  plVar4 = *(long **)((long)register0x00000020 + -0x80);
                  if (plVar4 == (long *)0x0) goto label_0407b618;
                  uVar16 = *(undefined8 *)(*plVar4 + 0x280);
                  pcVar5 = *(code **)(*plVar4 + 0x278);
                  *(undefined8 *)((long)register0x00000020 + -0x98) = 0x407b09c;
                  (*pcVar5)(plVar4,*(undefined8 *)((long)register0x00000020 + -0x70),pSVar13,uVar16);
                  pMVar18 = extraout_RDX_06;
                }
                if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
                  *(undefined8 *)((long)register0x00000020 + -0x98) = 0x407b414;
                  il2cpp_runtime_helper_02337ed0();
                  __this = *(System_Text_StringBuilder_o **)((long)register0x00000020 + -0x60);
                  pMVar18 = extraout_RDX_15;
                  if (g_data_057ac34d == '\0') goto label_0407b426;
label_0407b0c6:
                  iVar1 = *(int *)(TypeInfo_JSONNode + 0xe4);
                }
                else {
                  __this = *(System_Text_StringBuilder_o **)((long)register0x00000020 + -0x60);
                  if (g_data_057ac34d != '\0') goto label_0407b0c6;
label_0407b426:
                  *(undefined8 *)((long)register0x00000020 + -0x98) = 0x407b42e;
                  il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
                  g_data_057ac34d = '\x01';
                  iVar1 = *(int *)(TypeInfo_JSONNode + 0xe4);
                  pMVar18 = extraout_RDX_16;
                }
                if (iVar1 == 0) {
                  *(undefined8 *)((long)register0x00000020 + -0x98) = 0x407b44b;
                  il2cpp_runtime_helper_02337ed0();
                  pMVar18 = extraout_RDX_17;
                }
                *(undefined8 *)((long)register0x00000020 + -0x98) = 0x407b0e3;
                bVar10 = SimpleJSONFixed_JSONNode__op_Equality
                                   (*(SimpleJSONFixed_JSONNode_o **)((long)register0x00000020 + -0x80),
                                    (Il2CppObject *)0x0,pMVar18);
                if ((char)bVar10 == '\0') {
                  plVar4 = *(long **)((long)register0x00000020 + -0x80);
                  if (plVar4 == (long *)0x0) goto label_0407b618;
                  uVar16 = *(undefined8 *)(*plVar4 + 0x270);
                  pcVar5 = *(code **)(*plVar4 + 0x268);
                  *(undefined8 *)((long)register0x00000020 + -0x98) = 0x407b10f;
                  (*pcVar5)(plVar4,!bVar20,uVar16);
                }
                *(undefined8 *)((long)register0x00000020 + -0x70) = "";
                *(undefined8 *)((long)register0x00000020 + -0x98) = 0x407b12a;
                System_Text_StringBuilder__set_Length(__this,0,(MethodInfo *)0x0);
                pMVar18 = extraout_RDX_07;
                if (0 < ((*(System_Collections_Generic_Stack_object__o **)((long)register0x00000020 + -0x68))
                        ->fields)._size) {
                  *(undefined8 *)((long)register0x00000020 + -0x98) = 0x407b144;
                  pIVar12 = System_Collections_Generic_Stack_object___Peek
                                      (*(System_Collections_Generic_Stack_object__o **)
                                        ((long)register0x00000020 + -0x68),MethodInfo_JSONNode_Peek);
                  *(Il2CppObject **)((long)register0x00000020 + -0x80) = pIVar12;
                  pMVar18 = extraout_RDX_08;
                }
                *(undefined8 *)((long)register0x00000020 + -0x78) = 0;
                goto switchD_0407ae72_caseD_1;
              }
              goto label_0407b61d;
            }
            goto label_0407b618;
          }
        }
      }
switchD_0407ae72_caseD_2:
      *(undefined8 *)((long)register0x00000020 + -0x98) = 0x407b39d;
      uVar9 = System_String__get_Chars((System_String_o *)__this_03,index_00,(MethodInfo *)0x0);
      if (__this == (System_Text_StringBuilder_o *)0x0) goto label_0407b618;
      *(undefined8 *)((long)register0x00000020 + -0x98) = 0x407b3b3;
      System_Text_StringBuilder__Append_3b048f0(__this,uVar9,(MethodInfo *)0x0);
      pMVar18 = extraout_RDX_13;
      bVar7 = bVar20;
switchD_0407ae72_caseD_1:
      bVar20 = bVar7;
      index_00 = index_00 + 1;
      if ((((System_String_o *)__this_03)->fields)._stringLength <= (int)index_00) goto label_0407b581;
      goto label_0407ae34;
    }
    *(undefined8 *)((long)register0x00000020 + -0x80) = 0;
    *(undefined8 *)((long)register0x00000020 + -0x88) = 0;
    *(undefined8 *)((long)register0x00000020 + -0x78) = 0;
    pMVar18 = extraout_RDX;
label_0407b581:
    if ((*(byte *)((long)register0x00000020 + -0x88) & 1) != 0) {
      *(undefined8 *)((long)register0x00000020 + -0x98) = 0x407b649;
      uVar16 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
      *(undefined8 *)((long)register0x00000020 + -0x98) = 0x407b651;
      __this_01 = (System_Exception_o *)il2cpp_runtime_helper_023052d0(uVar16);
      puVar19 = &"JSON Parse: Quotation marks seems to be messed up.";
      goto label_0407b65b;
    }
    pSVar13 = *(SimpleJSONFixed_JSONNode_o **)((long)register0x00000020 + -0x80);
    uVar16 = *(undefined8 *)((long)register0x00000020 + -0x78);
    if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
      *(undefined8 *)((long)register0x00000020 + -0x98) = 0x407b5ae;
      il2cpp_runtime_helper_02337ed0();
      pMVar18 = extraout_RDX_23;
    }
    *(undefined8 *)((long)register0x00000020 + -0x98) = 0x407b5b8;
    bVar10 = SimpleJSONFixed_JSONNode__op_Equality(pSVar13,(Il2CppObject *)0x0,pMVar18);
    if ((char)bVar10 == '\0') {
      return pSVar13;
    }
    if (__this == (System_Text_StringBuilder_o *)0x0) goto label_0407b618;
    pMVar18 = (__this->klass->vtable)._3_ToString.method;
    pIVar6 = (__this->klass->vtable)._3_ToString.methodPtr;
    *(undefined8 *)((long)register0x00000020 + -0x98) = 0x407b5d4;
    auVar21 = (*pIVar6)(__this,pMVar18);
    method = auVar21._8_8_;
    token = auVar21._0_8_;
    if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
      *(undefined8 *)((long)register0x00000020 + -0x98) = 0x407b5e8;
      il2cpp_runtime_helper_02337ed0();
      method = extraout_RDX_24;
    }
    pMVar18 = (MethodInfo *)(ulong)((byte)uVar16 & 1);
    unaff_RBX = *(undefined8 *)((long)register0x00000020 + -0x58);
    unaff_R12 = *(undefined8 *)((long)register0x00000020 + -0x50);
    unaff_R13 = *(undefined8 *)((long)register0x00000020 + -0x48);
    unaff_R14 = *(undefined8 *)((long)register0x00000020 + -0x40);
    unaff_R15 = *(undefined8 *)((long)register0x00000020 + -0x38);
    unaff_RBP = *(undefined8 *)((long)register0x00000020 + -0x30);
    register0x00000020 = (BADSPACEBASE *)((long)register0x00000020 + -0x28);
  } while( true );
}


// SimpleJSONFixed.JSONNode$$Parse
// il2cpp: SimpleJSONFixed_JSONNode_o* SimpleJSONFixed_JSONNode__Parse (System_String_o* aJSON, const MethodInfo* method);
// 0x407acc0

SimpleJSONFixed_JSONNode_o * SimpleJSONFixed_JSONNode__Parse(System_String_o *aJSON,MethodInfo *method)

{
  uint index;
  int iVar1;
  Il2CppClass *pIVar2;
  long lVar3;
  long *plVar4;
  code *pcVar5;
  ulong uVar6;
  Il2CppMethodPointer pIVar7;
  bool bVar8;
  byte bVar9;
  uint16_t uVar10;
  int32_t iVar11;
  bool_conflict bVar12;
  System_Globalization_CultureInfo_o *provider;
  Il2CppObject *pIVar13;
  System_String_o *a;
  SimpleJSONFixed_JSONNode_o *pSVar14;
  System_Collections_Generic_Stack_object__o *pSVar15;
  System_Text_StringBuilder_o *__this;
  SimpleJSONFixed_JSONObject_o *__this_00;
  System_String_o *pSVar16;
  undefined8 uVar17;
  System_Exception_o *__this_01;
  System_Collections_Generic_Dictionary_object__object__o *__this_02;
  SimpleJSONFixed_JSONNode_o *extraout_RAX;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
  MethodInfo *extraout_RDX_03;
  MethodInfo *extraout_RDX_04;
  MethodInfo *extraout_RDX_05;
  MethodInfo *extraout_RDX_06;
  MethodInfo *extraout_RDX_07;
  MethodInfo *extraout_RDX_08;
  MethodInfo *extraout_RDX_09;
  MethodInfo *extraout_RDX_10;
  MethodInfo *extraout_RDX_11;
  MethodInfo *extraout_RDX_12;
  MethodInfo *extraout_RDX_13;
  MethodInfo *extraout_RDX_14;
  MethodInfo *extraout_RDX_15;
  MethodInfo *extraout_RDX_16;
  MethodInfo *extraout_RDX_17;
  MethodInfo *extraout_RDX_18;
  MethodInfo *extraout_RDX_19;
  MethodInfo *extraout_RDX_20;
  MethodInfo *extraout_RDX_21;
  MethodInfo *extraout_RDX_22;
  MethodInfo *extraout_RDX_23;
  undefined8 unaff_RBX;
  MethodInfo *unaff_RBP;
  MethodInfo *pMVar18;
  MethodInfo *method_00;
  System_String_o **ppSVar19;
  undefined *puVar20;
  System_Exception_o *__this_03;
  uint index_00;
  undefined8 unaff_R12;
  undefined8 unaff_R13;
  undefined8 unaff_R14;
  bool bVar21;
  undefined8 unaff_R15;
  undefined1 auVar22 [16];
  
  do {
    *(MethodInfo **)((long)register0x00000020 + -8) = unaff_RBP;
    *(undefined8 *)((long)register0x00000020 + -0x10) = unaff_R15;
    *(undefined8 *)((long)register0x00000020 + -0x18) = unaff_R14;
    *(undefined8 *)((long)register0x00000020 + -0x20) = unaff_R13;
    *(undefined8 *)((long)register0x00000020 + -0x28) = unaff_R12;
    *(undefined8 *)((long)register0x00000020 + -0x30) = unaff_RBX;
    if (g_data_057ac351 == '\0') {
      *(undefined8 *)((long)register0x00000020 + -0x70) = 0x407acea;
      il2cpp_runtime_helper_023445d0(&TypeInfo_JSONArray);
      *(undefined8 *)((long)register0x00000020 + -0x70) = 0x407acf6;
      il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
      *(undefined8 *)((long)register0x00000020 + -0x70) = 0x407ad02;
      il2cpp_runtime_helper_023445d0(&TypeInfo_JSONObject);
      *(undefined8 *)((long)register0x00000020 + -0x70) = 0x407ad0e;
      il2cpp_runtime_helper_023445d0(&MethodInfo_JSONNode_Peek);
      *(undefined8 *)((long)register0x00000020 + -0x70) = 0x407ad1a;
      il2cpp_runtime_helper_023445d0(&MethodInfo_JSONNode_Pop);
      *(undefined8 *)((long)register0x00000020 + -0x70) = 0x407ad26;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Push);
      *(undefined8 *)((long)register0x00000020 + -0x70) = 0x407ad32;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Stack_1_SimpleJSONFixed_JSONNode);
      *(undefined8 *)((long)register0x00000020 + -0x70) = 0x407ad3e;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
      *(undefined8 *)((long)register0x00000020 + -0x70) = 0x407ad4a;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Stack_JSONNode);
      *(undefined8 *)((long)register0x00000020 + -0x70) = 0x407ad56;
      il2cpp_runtime_helper_023445d0(&TypeInfo_StringBuilder);
      *(undefined8 *)((long)register0x00000020 + -0x70) = 0x407ad62;
      il2cpp_runtime_helper_023445d0(&"");
      g_data_057ac351 = '\x01';
    }
    *(undefined8 *)((long)register0x00000020 + -0x70) = 0x407ad78;
    pSVar15 = (System_Collections_Generic_Stack_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Stack_JSONNode);
    *(System_Collections_Generic_Stack_object__o **)((long)register0x00000020 + -0x40) = pSVar15;
    *(undefined8 *)((long)register0x00000020 + -0x70) = 0x407ad8f;
    System_Collections_Generic_Stack_object____ctor(pSVar15,MethodInfo_Stack_1_SimpleJSONFixed_JSONNode);
    *(undefined8 *)((long)register0x00000020 + -0x70) = 0x407ad9e;
    __this = (System_Text_StringBuilder_o *)il2cpp_runtime_helper_023052d0(TypeInfo_StringBuilder);
    *(undefined8 *)((long)register0x00000020 + -0x70) = 0x407adab;
    System_Text_StringBuilder___ctor(__this,(MethodInfo *)0x0);
    if (aJSON == (System_String_o *)0x0) {
label_0407b618:
      *(undefined8 *)((long)register0x00000020 + -0x70) = 0x407b61d;
      il2cpp_runtime_helper_022b2c90();
label_0407b61d:
      *(undefined8 *)((long)register0x00000020 + -0x70) = 0x407b629;
      uVar17 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
      *(undefined8 *)((long)register0x00000020 + -0x70) = 0x407b631;
      __this_01 = (System_Exception_o *)il2cpp_runtime_helper_023052d0(uVar17);
      puVar20 = &"JSON Parse: Too many closing brackets";
label_0407b65b:
      *(undefined8 *)((long)register0x00000020 + -0x70) = 0x407b660;
      pSVar16 = (System_String_o *)il2cpp_runtime_helper_023445d0(puVar20);
      *(undefined8 *)((long)register0x00000020 + -0x70) = 0x407b66d;
      System_Exception___ctor_3cf6120(__this_01,pSVar16,(MethodInfo *)0x0);
      *(undefined8 *)((long)register0x00000020 + -0x70) = 0x407b679;
      uVar17 = il2cpp_runtime_helper_023445d0(&MethodInfo_JSONNode_Parse);
      *(undefined8 *)((long)register0x00000020 + -0x70) = 0x407b684;
      __this_03 = __this_01;
      uVar17 = il2cpp_runtime_helper_022b2b10(__this_01,uVar17);
      *(System_Text_StringBuilder_o **)((long)register0x00000020 + -0x70) = __this;
      *(System_Exception_o **)((long)register0x00000020 + -0x78) = __this_01;
      *(undefined8 *)((long)register0x00000020 + -0x80) = uVar17;
      if (g_data_057ac382 == '\0') {
        *(undefined8 *)((long)register0x00000020 + -0x88) = 0x407b6ac;
        il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_String_SimpleJSONFixed_JSONNode);
        *(undefined8 *)((long)register0x00000020 + -0x88) = 0x407b6b8;
        il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_string_JSONNode);
        *(undefined8 *)((long)register0x00000020 + -0x88) = 0x407b6c4;
        il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
        g_data_057ac382 = '\x01';
      }
      *(undefined8 *)((long)register0x00000020 + -0x88) = 0x407b6da;
      __this_02 = (System_Collections_Generic_Dictionary_object__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_string_JSONNode);
      *(undefined8 *)((long)register0x00000020 + -0x88) = 0x407b6ef;
      System_Collections_Generic_Dictionary_object__object____ctor(__this_02,MethodInfo_Dictionary_2_System_String_SimpleJSONFixed_JSONNode);
      (__this_03->fields)._className = (System_String_o *)__this_02;
      *(undefined8 *)((long)register0x00000020 + -0x88) = 0x407b6ff;
      il2cpp_runtime_helper_022b4080(&__this_03->fields);
      if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
        *(undefined8 *)((long)register0x00000020 + -0x88) = 0x407b717;
        il2cpp_runtime_helper_02337ed0();
      }
      System_Object___ctor((Il2CppObject *)__this_03,(MethodInfo *)0x0);
      return extraout_RAX;
    }
    index_00 = 0;
    if (0 < (aJSON->fields)._stringLength) {
      *(undefined8 *)((long)register0x00000020 + -0x48) = "";
      bVar21 = false;
      *(undefined8 *)((long)register0x00000020 + -0x50) = 0;
      *(undefined8 *)((long)register0x00000020 + -0x60) = 0;
      *(undefined8 *)((long)register0x00000020 + -0x58) = 0;
      *(System_Text_StringBuilder_o **)((long)register0x00000020 + -0x38) = __this;
label_0407ae34:
      method_00 = (MethodInfo *)(ulong)index_00;
      *(undefined8 *)((long)register0x00000020 + -0x70) = 0x407ae41;
      uVar10 = System_String__get_Chars(aJSON,index_00,(MethodInfo *)0x0);
      pMVar18 = extraout_RDX_00;
      bVar8 = bVar21;
      if (uVar10 < 0x30) {
        if (uVar10 < 0x21) {
          bVar8 = true;
          switch(uVar10) {
          case 9:
          case 0x20:
            bVar8 = bVar21;
            if ((*(byte *)((long)register0x00000020 + -0x60) & 1) != 0) goto switchD_0407ae72_caseD_2;
            break;
          case 10:
          case 0xd:
            break;
          default:
            goto switchD_0407ae72_caseD_2;
          }
          goto switchD_0407ae72_caseD_1;
        }
        if (uVar10 == 0x22) {
          bVar9 = ~(byte)*(undefined8 *)((long)register0x00000020 + -0x60);
          *(ulong *)((long)register0x00000020 + -0x60) =
               CONCAT71((int7)((ulong)*(undefined8 *)((long)register0x00000020 + -0x60) >> 8),bVar9) &
               0xffffffffffffff01;
          *(ulong *)((long)register0x00000020 + -0x50) =
               CONCAT71((int7)((ulong)*(undefined8 *)((long)register0x00000020 + -0x50) >> 8),
                        (byte)*(undefined8 *)((long)register0x00000020 + -0x50) | bVar9) & 0xffffffffffffff01;
          goto switchD_0407ae72_caseD_1;
        }
        if (uVar10 == 0x2c) {
          if ((*(byte *)((long)register0x00000020 + -0x60) & 1) != 0) goto switchD_0407ae72_caseD_2;
          if (__this == (System_Text_StringBuilder_o *)0x0) goto label_0407b618;
          *(undefined8 *)((long)register0x00000020 + -0x70) = 0x407b173;
          iVar11 = System_Text_StringBuilder__get_Length(__this,(MethodInfo *)0x0);
          uVar6 = *(ulong *)((long)register0x00000020 + -0x50);
          uVar17 = "";
          if (0 < iVar11 || (uVar6 & 1) != 0) {
            pMVar18 = (__this->klass->vtable)._3_ToString.method;
            pIVar7 = (__this->klass->vtable)._3_ToString.methodPtr;
            *(undefined8 *)((long)register0x00000020 + -0x70) = 0x407b19a;
            auVar22 = (*pIVar7)(__this,pMVar18);
            pMVar18 = auVar22._8_8_;
            if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
              *(undefined8 *)((long)register0x00000020 + -0x70) = 0x407b1b1;
              il2cpp_runtime_helper_02337ed0();
              pMVar18 = extraout_RDX_09;
            }
            *(undefined8 *)((long)register0x00000020 + -0x70) = 0x407b1bd;
            pSVar14 = SimpleJSONFixed_JSONNode__ParseElement(auVar22._0_8_,(uint)uVar6 & 1,pMVar18);
            plVar4 = *(long **)((long)register0x00000020 + -0x58);
            if (plVar4 != (long *)0x0) {
              uVar17 = *(undefined8 *)(*plVar4 + 0x280);
              pcVar5 = *(code **)(*plVar4 + 0x278);
              *(undefined8 *)((long)register0x00000020 + -0x70) = 0x407b1e3;
              (*pcVar5)(plVar4,*(undefined8 *)((long)register0x00000020 + -0x48),pSVar14,uVar17);
              uVar17 = "";
              goto label_0407b1f4;
            }
            goto label_0407b618;
          }
          goto label_0407b1f4;
        }
        if (uVar10 == 0x2f) {
          if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
            *(undefined8 *)((long)register0x00000020 + -0x70) = 0x407b3bd;
            il2cpp_runtime_helper_02337ed0();
            bVar9 = *(byte *)((long)register0x00000020 + -0x60);
          }
          else {
            bVar9 = *(byte *)((long)register0x00000020 + -0x60);
          }
          if ((((bVar9 & 1) == 0) && (*(char *)(*(long *)(TypeInfo_JSONNode + 0xb8) + 2) != '\0')) &&
             (index = index_00 + 1, (int)index < (aJSON->fields)._stringLength)) {
            *(undefined8 *)((long)register0x00000020 + -0x70) = 0x407af45;
            uVar10 = System_String__get_Chars(aJSON,index,(MethodInfo *)0x0);
            pMVar18 = extraout_RDX_01;
            if (uVar10 == 0x2f) {
              do {
                index_00 = index;
                if ((aJSON->fields)._stringLength <= (int)index_00) break;
                *(undefined8 *)((long)register0x00000020 + -0x70) = 0x407af69;
                uVar10 = System_String__get_Chars(aJSON,index_00,(MethodInfo *)0x0);
                pMVar18 = extraout_RDX_02;
                if (uVar10 == 10) break;
                *(undefined8 *)((long)register0x00000020 + -0x70) = 0x407af80;
                uVar10 = System_String__get_Chars(aJSON,index_00,(MethodInfo *)0x0);
                pMVar18 = extraout_RDX_03;
                index = index_00 + 1;
              } while (uVar10 != 0xd);
              goto label_0407b3ef;
            }
          }
          *(undefined8 *)((long)register0x00000020 + -0x70) = 0x407b3d9;
          uVar10 = System_String__get_Chars(aJSON,index_00,(MethodInfo *)0x0);
          if (__this == (System_Text_StringBuilder_o *)0x0) goto label_0407b618;
          *(undefined8 *)((long)register0x00000020 + -0x70) = 0x407b3ef;
          System_Text_StringBuilder__Append_3b048f0(__this,uVar10,(MethodInfo *)0x0);
          pMVar18 = extraout_RDX_14;
label_0407b3ef:
          index_00 = index_00 + 1;
          if ((aJSON->fields)._stringLength <= (int)index_00) goto label_0407b581;
          goto label_0407ae34;
        }
      }
      else {
        if (0x5d < uVar10) {
          if (uVar10 == 0xfeff) goto switchD_0407ae72_caseD_1;
          if (uVar10 == 0x7d) goto switchD_0407aea8_caseD_23;
          if ((uVar10 != 0x7b) || ((*(byte *)((long)register0x00000020 + -0x60) & 1) != 0))
          goto switchD_0407ae72_caseD_2;
          *(undefined8 *)((long)register0x00000020 + -0x70) = 0x407afc9;
          __this_00 = (SimpleJSONFixed_JSONObject_o *)il2cpp_runtime_helper_023052d0(TypeInfo_JSONObject);
          *(undefined8 *)((long)register0x00000020 + -0x70) = 0x407afd4;
          SimpleJSONFixed_JSONObject___ctor(__this_00,method_00);
          pSVar15 = *(System_Collections_Generic_Stack_object__o **)((long)register0x00000020 + -0x40);
          if (pSVar15 != (System_Collections_Generic_Stack_object__o *)0x0) goto label_0407b294;
          goto label_0407b618;
        }
        switch(uVar10) {
        case 0x3a:
          if ((*(byte *)((long)register0x00000020 + -0x60) & 1) == 0) {
            if (__this == (System_Text_StringBuilder_o *)0x0) goto label_0407b618;
            pIVar7 = (__this->klass->vtable)._3_ToString.methodPtr;
            *(undefined8 *)((long)register0x00000020 + -0x70) = 0x407aed1;
            uVar17 = (*pIVar7)(__this);
label_0407b1f4:
            *(undefined8 *)((long)register0x00000020 + -0x48) = uVar17;
            *(undefined8 *)((long)register0x00000020 + -0x50) = 0;
            *(undefined8 *)((long)register0x00000020 + -0x70) = 0x407b20c;
            System_Text_StringBuilder__set_Length(__this,0,(MethodInfo *)0x0);
            pMVar18 = extraout_RDX_10;
            goto switchD_0407ae72_caseD_1;
          }
          break;
        case 0x5b:
          if ((*(byte *)((long)register0x00000020 + -0x60) & 1) == 0) {
            *(undefined8 *)((long)register0x00000020 + -0x70) = 0x407b27b;
            __this_00 = (SimpleJSONFixed_JSONObject_o *)il2cpp_runtime_helper_023052d0(TypeInfo_JSONArray);
            *(undefined8 *)((long)register0x00000020 + -0x70) = 0x407b286;
            SimpleJSONFixed_JSONArray___ctor((SimpleJSONFixed_JSONArray_o *)__this_00,method_00);
            pSVar15 = *(System_Collections_Generic_Stack_object__o **)((long)register0x00000020 + -0x40);
            if (pSVar15 == (System_Collections_Generic_Stack_object__o *)0x0) goto label_0407b618;
label_0407b294:
            *(undefined8 *)((long)register0x00000020 + -0x70) = 0x407b2a6;
            System_Collections_Generic_Stack_object___Push(pSVar15,(Il2CppObject *)__this_00,MethodInfo_Void_Push);
            pSVar14 = *(SimpleJSONFixed_JSONNode_o **)((long)register0x00000020 + -0x58);
            if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
              *(undefined8 *)((long)register0x00000020 + -0x70) = 0x407b455;
              il2cpp_runtime_helper_02337ed0();
              pMVar18 = extraout_RDX_18;
              if (g_data_057ac34d == '\0') goto label_0407b462;
label_0407b2d0:
              iVar1 = *(int *)(TypeInfo_JSONNode + 0xe4);
            }
            else {
              pMVar18 = extraout_RDX_11;
              if (g_data_057ac34d != '\0') goto label_0407b2d0;
label_0407b462:
              *(undefined8 *)((long)register0x00000020 + -0x70) = 0x407b46a;
              il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
              g_data_057ac34d = '\x01';
              iVar1 = *(int *)(TypeInfo_JSONNode + 0xe4);
              pMVar18 = extraout_RDX_19;
            }
            if (iVar1 == 0) {
              *(undefined8 *)((long)register0x00000020 + -0x70) = 0x407b487;
              il2cpp_runtime_helper_02337ed0();
              pMVar18 = extraout_RDX_20;
            }
            *(undefined8 *)((long)register0x00000020 + -0x70) = 0x407b2eb;
            bVar12 = SimpleJSONFixed_JSONNode__op_Equality(pSVar14,(Il2CppObject *)0x0,pMVar18);
            if ((char)bVar12 == '\0') {
              *(undefined8 *)((long)register0x00000020 + -0x70) = 0x407b303;
              pIVar13 = System_Collections_Generic_Stack_object___Peek
                                  (*(System_Collections_Generic_Stack_object__o **)
                                    ((long)register0x00000020 + -0x40),MethodInfo_JSONNode_Peek);
              if (pSVar14 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_0407b618;
              pMVar18 = (pSVar14->klass->vtable)._20_Add.method;
              pIVar7 = (pSVar14->klass->vtable)._20_Add.methodPtr;
              *(undefined8 *)((long)register0x00000020 + -0x70) = 0x407b327;
              (*pIVar7)(pSVar14,*(undefined8 *)((long)register0x00000020 + -0x48),pIVar13,pMVar18);
            }
            if (__this == (System_Text_StringBuilder_o *)0x0) goto label_0407b618;
            *(undefined8 *)((long)register0x00000020 + -0x48) = "";
            *(undefined8 *)((long)register0x00000020 + -0x70) = 0x407b355;
            System_Text_StringBuilder__set_Length(__this,0,(MethodInfo *)0x0);
            *(undefined8 *)((long)register0x00000020 + -0x70) = 0x407b369;
            pIVar13 = System_Collections_Generic_Stack_object___Peek
                                (*(System_Collections_Generic_Stack_object__o **)
                                  ((long)register0x00000020 + -0x40),MethodInfo_JSONNode_Peek);
            *(Il2CppObject **)((long)register0x00000020 + -0x58) = pIVar13;
            index_00 = index_00 + 1;
            bVar21 = false;
            pMVar18 = extraout_RDX_12;
            if ((aJSON->fields)._stringLength <= (int)index_00) goto label_0407b581;
            goto label_0407ae34;
          }
          break;
        case 0x5c:
          if ((*(byte *)((long)register0x00000020 + -0x60) & 1) != 0) {
            *(undefined8 *)((long)register0x00000020 + -0x70) = 0x407b22d;
            uVar10 = System_String__get_Chars(aJSON,index_00 + 1,(MethodInfo *)0x0);
            if (uVar10 < 0x67) {
              if (uVar10 == 0x62) {
                if (__this == (System_Text_StringBuilder_o *)0x0) goto label_0407b618;
                uVar10 = 8;
              }
              else {
                if (uVar10 != 0x66) goto switchD_0407b4a6_caseD_1;
                if (__this == (System_Text_StringBuilder_o *)0x0) goto label_0407b618;
                uVar10 = 0xc;
              }
            }
            else {
              switch(uVar10) {
              case 0x6e:
                if (__this == (System_Text_StringBuilder_o *)0x0) goto label_0407b618;
                uVar10 = 10;
                break;
              default:
switchD_0407b4a6_caseD_1:
                if (__this == (System_Text_StringBuilder_o *)0x0) goto label_0407b618;
                break;
              case 0x72:
                if (__this == (System_Text_StringBuilder_o *)0x0) goto label_0407b618;
                uVar10 = 0xd;
                break;
              case 0x74:
                if (__this == (System_Text_StringBuilder_o *)0x0) goto label_0407b618;
                uVar10 = 9;
                break;
              case 0x75:
                *(undefined8 *)((long)register0x00000020 + -0x70) = 0x407b53e;
                pSVar16 = System_String__Substring_3af8da0(aJSON,index_00 + 2,4,(MethodInfo *)0x0);
                *(undefined8 *)((long)register0x00000020 + -0x70) = 0x407b54d;
                iVar11 = System_Int32__Parse_3cb4720(pSVar16,0x200,(MethodInfo *)0x0);
                if (__this != (System_Text_StringBuilder_o *)0x0) {
                  *(undefined8 *)((long)register0x00000020 + -0x70) = 0x407b563;
                  System_Text_StringBuilder__Append_3b048f0(__this,(uint16_t)iVar11,(MethodInfo *)0x0);
                  index_00 = index_00 + 5;
                  pMVar18 = extraout_RDX_22;
                  goto label_0407b3ef;
                }
                goto label_0407b618;
              }
            }
            *(undefined8 *)((long)register0x00000020 + -0x70) = 0x407b50a;
            System_Text_StringBuilder__Append_3b048f0(__this,uVar10,(MethodInfo *)0x0);
            pMVar18 = extraout_RDX_21;
          }
          index_00 = index_00 + 2;
          if ((aJSON->fields)._stringLength <= (int)index_00) goto label_0407b581;
          goto label_0407ae34;
        case 0x5d:
switchD_0407aea8_caseD_23:
          if ((*(byte *)((long)register0x00000020 + -0x60) & 1) == 0) {
            pSVar15 = *(System_Collections_Generic_Stack_object__o **)((long)register0x00000020 + -0x40);
            if (pSVar15 != (System_Collections_Generic_Stack_object__o *)0x0) {
              if ((pSVar15->fields)._size != 0) {
                *(undefined8 *)((long)register0x00000020 + -0x70) = 0x407b019;
                System_Collections_Generic_Stack_object___Pop(pSVar15,MethodInfo_JSONNode_Pop);
                if (__this == (System_Text_StringBuilder_o *)0x0) goto label_0407b618;
                *(undefined8 *)((long)register0x00000020 + -0x70) = 0x407b02c;
                iVar11 = System_Text_StringBuilder__get_Length(__this,(MethodInfo *)0x0);
                uVar6 = *(ulong *)((long)register0x00000020 + -0x50);
                __this = (System_Text_StringBuilder_o *)(uVar6 & 0xffffffffffffff01);
                pMVar18 = extraout_RDX_04;
                if (0 < iVar11 || (char)__this != '\0') {
                  lVar3 = **(long **)((long)register0x00000020 + -0x38);
                  uVar17 = *(undefined8 *)(lVar3 + 0x170);
                  pcVar5 = *(code **)(lVar3 + 0x168);
                  *(undefined8 *)((long)register0x00000020 + -0x70) = 0x407b055;
                  auVar22 = (*pcVar5)(*(long **)((long)register0x00000020 + -0x38),uVar17);
                  pMVar18 = auVar22._8_8_;
                  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
                    *(undefined8 *)((long)register0x00000020 + -0x70) = 0x407b06a;
                    il2cpp_runtime_helper_02337ed0();
                    pMVar18 = extraout_RDX_05;
                  }
                  *(undefined8 *)((long)register0x00000020 + -0x70) = 0x407b076;
                  pSVar14 = SimpleJSONFixed_JSONNode__ParseElement(auVar22._0_8_,(uint)uVar6 & 1,pMVar18);
                  plVar4 = *(long **)((long)register0x00000020 + -0x58);
                  if (plVar4 == (long *)0x0) goto label_0407b618;
                  uVar17 = *(undefined8 *)(*plVar4 + 0x280);
                  pcVar5 = *(code **)(*plVar4 + 0x278);
                  *(undefined8 *)((long)register0x00000020 + -0x70) = 0x407b09c;
                  (*pcVar5)(plVar4,*(undefined8 *)((long)register0x00000020 + -0x48),pSVar14,uVar17);
                  pMVar18 = extraout_RDX_06;
                }
                if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
                  *(undefined8 *)((long)register0x00000020 + -0x70) = 0x407b414;
                  il2cpp_runtime_helper_02337ed0();
                  __this = *(System_Text_StringBuilder_o **)((long)register0x00000020 + -0x38);
                  pMVar18 = extraout_RDX_15;
                  if (g_data_057ac34d == '\0') goto label_0407b426;
label_0407b0c6:
                  iVar1 = *(int *)(TypeInfo_JSONNode + 0xe4);
                }
                else {
                  __this = *(System_Text_StringBuilder_o **)((long)register0x00000020 + -0x38);
                  if (g_data_057ac34d != '\0') goto label_0407b0c6;
label_0407b426:
                  *(undefined8 *)((long)register0x00000020 + -0x70) = 0x407b42e;
                  il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
                  g_data_057ac34d = '\x01';
                  iVar1 = *(int *)(TypeInfo_JSONNode + 0xe4);
                  pMVar18 = extraout_RDX_16;
                }
                if (iVar1 == 0) {
                  *(undefined8 *)((long)register0x00000020 + -0x70) = 0x407b44b;
                  il2cpp_runtime_helper_02337ed0();
                  pMVar18 = extraout_RDX_17;
                }
                *(undefined8 *)((long)register0x00000020 + -0x70) = 0x407b0e3;
                bVar12 = SimpleJSONFixed_JSONNode__op_Equality
                                   (*(SimpleJSONFixed_JSONNode_o **)((long)register0x00000020 + -0x58),
                                    (Il2CppObject *)0x0,pMVar18);
                if ((char)bVar12 == '\0') {
                  plVar4 = *(long **)((long)register0x00000020 + -0x58);
                  if (plVar4 == (long *)0x0) goto label_0407b618;
                  uVar17 = *(undefined8 *)(*plVar4 + 0x270);
                  pcVar5 = *(code **)(*plVar4 + 0x268);
                  *(undefined8 *)((long)register0x00000020 + -0x70) = 0x407b10f;
                  (*pcVar5)(plVar4,!bVar21,uVar17);
                }
                *(undefined8 *)((long)register0x00000020 + -0x48) = "";
                *(undefined8 *)((long)register0x00000020 + -0x70) = 0x407b12a;
                System_Text_StringBuilder__set_Length(__this,0,(MethodInfo *)0x0);
                pMVar18 = extraout_RDX_07;
                if (0 < ((*(System_Collections_Generic_Stack_object__o **)((long)register0x00000020 + -0x40))
                        ->fields)._size) {
                  *(undefined8 *)((long)register0x00000020 + -0x70) = 0x407b144;
                  pIVar13 = System_Collections_Generic_Stack_object___Peek
                                      (*(System_Collections_Generic_Stack_object__o **)
                                        ((long)register0x00000020 + -0x40),MethodInfo_JSONNode_Peek);
                  *(Il2CppObject **)((long)register0x00000020 + -0x58) = pIVar13;
                  pMVar18 = extraout_RDX_08;
                }
                *(undefined8 *)((long)register0x00000020 + -0x50) = 0;
                goto switchD_0407ae72_caseD_1;
              }
              goto label_0407b61d;
            }
            goto label_0407b618;
          }
        }
      }
switchD_0407ae72_caseD_2:
      *(undefined8 *)((long)register0x00000020 + -0x70) = 0x407b39d;
      uVar10 = System_String__get_Chars(aJSON,index_00,(MethodInfo *)0x0);
      if (__this == (System_Text_StringBuilder_o *)0x0) goto label_0407b618;
      *(undefined8 *)((long)register0x00000020 + -0x70) = 0x407b3b3;
      System_Text_StringBuilder__Append_3b048f0(__this,uVar10,(MethodInfo *)0x0);
      pMVar18 = extraout_RDX_13;
      bVar8 = bVar21;
switchD_0407ae72_caseD_1:
      bVar21 = bVar8;
      index_00 = index_00 + 1;
      if ((aJSON->fields)._stringLength <= (int)index_00) goto label_0407b581;
      goto label_0407ae34;
    }
    *(undefined8 *)((long)register0x00000020 + -0x58) = 0;
    *(undefined8 *)((long)register0x00000020 + -0x60) = 0;
    *(undefined8 *)((long)register0x00000020 + -0x50) = 0;
    pMVar18 = extraout_RDX;
label_0407b581:
    if ((*(byte *)((long)register0x00000020 + -0x60) & 1) != 0) {
      *(undefined8 *)((long)register0x00000020 + -0x70) = 0x407b649;
      uVar17 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
      *(undefined8 *)((long)register0x00000020 + -0x70) = 0x407b651;
      __this_01 = (System_Exception_o *)il2cpp_runtime_helper_023052d0(uVar17);
      puVar20 = &"JSON Parse: Quotation marks seems to be messed up.";
      goto label_0407b65b;
    }
    pSVar14 = *(SimpleJSONFixed_JSONNode_o **)((long)register0x00000020 + -0x58);
    uVar6 = *(ulong *)((long)register0x00000020 + -0x50);
    if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
      *(undefined8 *)((long)register0x00000020 + -0x70) = 0x407b5ae;
      il2cpp_runtime_helper_02337ed0();
      pMVar18 = extraout_RDX_23;
    }
    *(undefined8 *)((long)register0x00000020 + -0x70) = 0x407b5b8;
    bVar12 = SimpleJSONFixed_JSONNode__op_Equality(pSVar14,(Il2CppObject *)0x0,pMVar18);
    if ((char)bVar12 == '\0') {
      return pSVar14;
    }
    if (__this == (System_Text_StringBuilder_o *)0x0) goto label_0407b618;
    pMVar18 = (__this->klass->vtable)._3_ToString.method;
    pIVar7 = (__this->klass->vtable)._3_ToString.methodPtr;
    *(undefined8 *)((long)register0x00000020 + -0x70) = 0x407b5d4;
    pSVar16 = (System_String_o *)(*pIVar7)(__this,pMVar18);
    if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
      *(undefined8 *)((long)register0x00000020 + -0x70) = 0x407b5e8;
      il2cpp_runtime_helper_02337ed0();
    }
    unaff_RBP = (MethodInfo *)(ulong)((byte)uVar6 & 1);
    unaff_R12 = *(undefined8 *)((long)register0x00000020 + -0x28);
    unaff_R13 = *(undefined8 *)((long)register0x00000020 + -0x20);
    unaff_R14 = *(undefined8 *)((long)register0x00000020 + -0x18);
    unaff_R15 = *(undefined8 *)((long)register0x00000020 + -0x10);
    *(undefined8 *)((long)register0x00000020 + -8) = *(undefined8 *)((long)register0x00000020 + -8);
    *(undefined8 *)((long)register0x00000020 + -0x10) = unaff_R14;
    *(undefined8 *)((long)register0x00000020 + -0x18) = *(undefined8 *)((long)register0x00000020 + -0x30);
    pMVar18 = unaff_RBP;
    aJSON = pSVar16;
    if (g_data_057ac350 == '\0') {
      *(undefined8 *)((long)register0x00000020 + -0x30) = 0x407aa32;
      il2cpp_runtime_helper_023445d0(&TypeInfo_CultureInfo);
      *(undefined8 *)((long)register0x00000020 + -0x30) = 0x407aa3e;
      il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
      *(undefined8 *)((long)register0x00000020 + -0x30) = 0x407aa4a;
      il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNull);
      *(undefined8 *)((long)register0x00000020 + -0x30) = 0x407aa56;
      il2cpp_runtime_helper_023445d0(&"null");
      *(undefined8 *)((long)register0x00000020 + -0x30) = 0x407aa62;
      il2cpp_runtime_helper_023445d0(&"false");
      ppSVar19 = &"true";
      *(undefined8 *)((long)register0x00000020 + -0x30) = 0x407aa6e;
      il2cpp_runtime_helper_023445d0();
      g_data_057ac350 = '\x01';
      aJSON = (System_String_o *)ppSVar19;
    }
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0;
    if ((uVar6 & 1) != 0) goto label_0407ab64;
    if (pSVar16 != (System_String_o *)0x0) break;
    *(undefined8 *)((long)register0x00000020 + -0x30) = 0x407acb3;
    il2cpp_runtime_helper_022b2c90();
    unaff_RBX = 0;
    register0x00000020 = (BADSPACEBASE *)((long)register0x00000020 + -0x28);
  } while( true );
  if ((pSVar16->fields)._stringLength < 6) {
    *(undefined8 *)((long)register0x00000020 + -0x30) = 0x407ab96;
    a = System_String__ToLower(pSVar16,(MethodInfo *)0x0);
    *(undefined8 *)((long)register0x00000020 + -0x30) = 0x407abad;
    bVar12 = System_String__op_Equality(a,"false",(MethodInfo *)0x0);
    if ((char)bVar12 == '\0') {
      *(undefined8 *)((long)register0x00000020 + -0x30) = 0x407abc5;
      bVar12 = System_String__op_Equality(a,"true",(MethodInfo *)0x0);
      if ((char)bVar12 == '\0') {
        *(undefined8 *)((long)register0x00000020 + -0x30) = 0x407ac84;
        bVar12 = System_String__op_Equality(a,"null",(MethodInfo *)0x0);
        if ((char)bVar12 != '\0') {
          pMVar18 = TypeInfo_JSONNull;
          if (*(int *)((long)&TypeInfo_JSONNull[2].parameters + 4) == 0) {
            *(undefined8 *)((long)register0x00000020 + -0x30) = 0x407aca4;
            il2cpp_runtime_helper_02337ed0();
          }
          *(undefined8 *)((long)register0x00000020 + -0x30) = 0x407aca9;
          pSVar14 = (SimpleJSONFixed_JSONNode_o *)SimpleJSONFixed_JSONNull__CreateOrGet(pMVar18);
          return pSVar14;
        }
        goto label_0407aa9a;
      }
    }
    *(undefined8 *)((long)register0x00000020 + -0x30) = 0x407abe1;
    bVar12 = System_String__op_Equality(a,"true",(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
      *(undefined8 *)((long)register0x00000020 + -0x30) = 0x407abfb;
      il2cpp_runtime_helper_02337ed0();
    }
    if (g_data_057ac349 == '\0') {
      *(undefined8 *)((long)register0x00000020 + -0x30) = 0x407ac10;
      il2cpp_runtime_helper_023445d0(&TypeInfo_JSONBool);
      g_data_057ac349 = '\x01';
    }
    *(undefined8 *)((long)register0x00000020 + -0x30) = 0x407ac26;
    pIVar13 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_JSONBool);
    if (g_data_057ac393 == '\0') {
      *(undefined8 *)((long)register0x00000020 + -0x30) = 0x407ac3e;
      il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
      g_data_057ac393 = '\x01';
    }
    if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
      *(undefined8 *)((long)register0x00000020 + -0x30) = 0x407ac56;
      il2cpp_runtime_helper_02337ed0();
    }
    *(undefined8 *)((long)register0x00000020 + -0x30) = 0x407ac60;
    System_Object___ctor(pIVar13,(MethodInfo *)0x0);
    *(char *)&pIVar13[1].klass = (char)bVar12;
  }
  else {
label_0407aa9a:
    if (*(int *)(TypeInfo_CultureInfo + 0xe4) == 0) {
      *(undefined8 *)((long)register0x00000020 + -0x30) = 0x407aab2;
      il2cpp_runtime_helper_02337ed0();
    }
    *(undefined8 *)((long)register0x00000020 + -0x30) = 0x407aab9;
    provider = System_Globalization_CultureInfo__get_InvariantCulture((MethodInfo *)0x0);
    pMVar18 = (MethodInfo *)&g_data_000000a7;
    *(undefined8 *)((long)register0x00000020 + -0x30) = 0x407aad1;
    bVar12 = System_Double__TryParse_3c9a570
                       (pSVar16,0xa7,(System_IFormatProvider_o *)provider,
                        (double *)((long)register0x00000020 + -0x20),(MethodInfo *)0x0);
    if ((char)bVar12 == '\0') {
label_0407ab64:
      if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
        *(undefined8 *)((long)register0x00000020 + -0x30) = 0x407ab7c;
        il2cpp_runtime_helper_02337ed0();
      }
      *(undefined8 *)((long)register0x00000020 + -0x30) = 0x407ab84;
      pIVar13 = (Il2CppObject *)SimpleJSONFixed_JSONNode__op_Implicit(pSVar16,pMVar18);
    }
    else {
      pIVar2 = *(Il2CppClass **)((long)register0x00000020 + -0x20);
      if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
        *(undefined8 *)((long)register0x00000020 + -0x30) = 0x407aaf6;
        il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057ac33f == '\0') {
        *(undefined8 *)((long)register0x00000020 + -0x30) = 0x407ab0b;
        il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNumber);
        g_data_057ac33f = '\x01';
      }
      *(undefined8 *)((long)register0x00000020 + -0x30) = 0x407ab21;
      pIVar13 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_JSONNumber);
      if (g_data_057ac38e == '\0') {
        *(undefined8 *)((long)register0x00000020 + -0x30) = 0x407ab39;
        il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
        g_data_057ac38e = '\x01';
      }
      if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
        *(undefined8 *)((long)register0x00000020 + -0x30) = 0x407ab51;
        il2cpp_runtime_helper_02337ed0();
      }
      *(undefined8 *)((long)register0x00000020 + -0x30) = 0x407ab5b;
      System_Object___ctor(pIVar13,(MethodInfo *)0x0);
      pIVar13[1].klass = pIVar2;
    }
  }
  return (SimpleJSONFixed_JSONNode_o *)pIVar13;
}


// SimpleJSONFixed.JSONNode$$.ctor
// il2cpp: void SimpleJSONFixed_JSONNode___ctor (SimpleJSONFixed_JSONNode_o* __this, const MethodInfo* method);
// 0x407b7d0

void SimpleJSONFixed_JSONNode___ctor(SimpleJSONFixed_JSONNode_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// SimpleJSONFixed.JSONNode$$.cctor
// il2cpp: void SimpleJSONFixed_JSONNode___cctor (const MethodInfo* method);
// 0x407b7e0

void SimpleJSONFixed_JSONNode___cctor(MethodInfo *method)

{
  undefined2 *puVar1;
  
  if (g_data_057ac352 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    g_data_057ac352 = '\x01';
  }
  puVar1 = *(undefined2 **)(TypeInfo_JSONNode + 0xb8);
  *puVar1 = 0x100;
  *(undefined1 *)(puVar1 + 1) = 1;
  return;
}


