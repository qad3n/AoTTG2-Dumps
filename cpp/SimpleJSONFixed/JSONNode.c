// Type: SimpleJSONFixed.JSONNode
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/SimpleJSONFixed/JSONNode.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/Utility/SimpleJSON.cs  [CHANGED since prior version]
// --------------------------------

// SimpleJSONFixed.JSONNode.Enumerator$$get_IsValid
// il2cpp: bool SimpleJSONFixed_JSONNode_Enumerator__get_IsValid (SimpleJSONFixed_JSONNode_Enumerator_o __this, const MethodInfo* method);
// 0x3d85ed0

bool_conflict
SimpleJSONFixed_JSONNode_Enumerator__get_IsValid
          (SimpleJSONFixed_JSONNode_Enumerator_o __this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),*(int *)&method->methodPointer != 0);
}


// SimpleJSONFixed.JSONNode.Enumerator$$.ctor
// il2cpp: void SimpleJSONFixed_JSONNode_Enumerator___ctor (SimpleJSONFixed_JSONNode_Enumerator_o __this, System_Collections_Generic_List_Enumerator_JSONNode__o aArrayEnum, const MethodInfo* method);
// 0x3d85ee0

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
  il2cpp_runtime_glue(&method->parameters,0);
  return;
}


// SimpleJSONFixed.JSONNode.Enumerator$$.ctor
// il2cpp: void SimpleJSONFixed_JSONNode_Enumerator___ctor (SimpleJSONFixed_JSONNode_Enumerator_o __this, System_Collections_Generic_Dictionary_Enumerator_string__JSONNode__o aDictEnum, const MethodInfo* method);
// 0x3d85f20

void SimpleJSONFixed_JSONNode_Enumerator___ctor
               (SimpleJSONFixed_JSONNode_Enumerator_o __this,
               System_Collections_Generic_Dictionary_Enumerator_string__JSONNode__o aDictEnum,
               MethodInfo *method)

{
  *(undefined4 *)&method->methodPointer = 2;
  *(int32_t *)&method->virtualMethodPointer = __this.fields.type;
  *(undefined4 *)((long)&method->virtualMethodPointer + 4) = __this.fields._4_4_;
  *(undefined4 *)&method->invoker_method = __this.fields.m_Object.fields._dictionary._0_4_;
  *(undefined4 *)((long)&method->invoker_method + 4) =
       __this.fields.m_Object.fields._dictionary._4_4_;
  *(int32_t *)&method->name = __this.fields.m_Object.fields._version;
  *(int32_t *)((long)&method->name + 4) = __this.fields.m_Object.fields._index;
  *(undefined4 *)&method->klass = __this.fields.m_Object.fields._current.fields.key._0_4_;
  *(undefined4 *)((long)&method->klass + 4) =
       __this.fields.m_Object.fields._current.fields.key._4_4_;
  method->return_type = (Il2CppType *)__this.fields.m_Object.fields._current.fields.value;
  il2cpp_runtime_glue(&method->virtualMethodPointer,0);
  method->parameters = (Il2CppType **)0x0;
  (method->field7_0x38).rgctx_data = (Il2CppRGCTXData *)0x0;
  (method->field8_0x40).genericMethod = (void *)0x0;
  return;
}


// SimpleJSONFixed.JSONNode.Enumerator$$get_Current
// il2cpp: System_Collections_Generic_KeyValuePair_string__JSONNode__o SimpleJSONFixed_JSONNode_Enumerator__get_Current (SimpleJSONFixed_JSONNode_Enumerator_o __this, const MethodInfo* method);
// 0x3d85f70

System_Collections_Generic_KeyValuePair_string__JSONNode__o
SimpleJSONFixed_JSONNode_Enumerator__get_Current
          (SimpleJSONFixed_JSONNode_Enumerator_o __this,MethodInfo *method)

{
  Il2CppObject *key;
  Il2CppObject *pIVar1;
  MethodInfo_347CEC0 *in_R8;
  System_Collections_Generic_KeyValuePair_string__JSONNode__Fields SVar2;
  System_Collections_Generic_KeyValuePair_object__object__o __this_00;
  Il2CppObject local_18;
  
  if (DAT_057026a3 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_KeyValuePair_2_System_String_SimpleJSONFixed_JSO);
    il2cpp_init_method_metadata(&MethodInfo_JSONNode_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_KeyValuePair_2_System_String_SimpleJSONFixed_JSO);
    DAT_057026a3 = '\x01';
  }
  if (*(int *)&method->methodPointer == 2) {
    SVar2 = (System_Collections_Generic_KeyValuePair_string__JSONNode__Fields)
            il2cpp_glue_032bf890(&method->virtualMethodPointer,MethodInfo_KeyValuePair_2_System_String_SimpleJSONFixed_JSO);
  }
  else {
    if (*(int *)&method->methodPointer == 1) {
      pIVar1 = (Il2CppObject *)**(undefined8 **)(DAT_057110b0 + 0xb8);
      key = (method->field8_0x40).genericMethod;
    }
    else {
      pIVar1 = (Il2CppObject *)**(undefined8 **)(DAT_057110b0 + 0xb8);
      key = (Il2CppObject *)0x0;
    }
    local_18.monitor = (SimpleJSONFixed_JSONNode_o *)0x0;
    local_18.klass = (Il2CppClass *)0x0;
    __this_00.fields.value = pIVar1;
    __this_00.fields.key = &local_18;
    System_Collections_Generic_KeyValuePair<object__object>___ctor(__this_00,key,MethodInfo_KeyValuePair_2_System_String_SimpleJSONFixed_JSO,in_R8)
    ;
    SVar2.value = local_18.monitor;
    SVar2.key = (System_String_o *)local_18.klass;
  }
  return (System_Collections_Generic_KeyValuePair_string__JSONNode__o)SVar2;
}


// SimpleJSONFixed.JSONNode.Enumerator$$MoveNext
// il2cpp: bool SimpleJSONFixed_JSONNode_Enumerator__MoveNext (SimpleJSONFixed_JSONNode_Enumerator_o __this, const MethodInfo* method);
// 0x3d86050

bool_conflict
SimpleJSONFixed_JSONNode_Enumerator__MoveNext
          (SimpleJSONFixed_JSONNode_Enumerator_o __this,MethodInfo *method)

{
  bool_conflict bVar1;
  
  if (DAT_057026a4 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    DAT_057026a4 = '\x01';
  }
  if (*(int *)&method->methodPointer != 2) {
    if (*(int *)&method->methodPointer == 1) {
      bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        ((System_Collections_Generic_List_Enumerator_object__o)__this.fields._0_24_,
                         (MethodInfo_3185E20 *)&method->parameters);
      return bVar1;
    }
    return 0;
  }
  bVar1 = System_Collections_Generic_Dictionary_Enumerator<object__object>__MoveNext
                    ((System_Collections_Generic_Dictionary_Enumerator_object__object__o)
                     __this.fields._0_40_,(MethodInfo_31CFE90 *)&method->virtualMethodPointer);
  return bVar1;
}


// SimpleJSONFixed.JSONNode.ValueEnumerator$$.ctor
// il2cpp: void SimpleJSONFixed_JSONNode_ValueEnumerator___ctor (SimpleJSONFixed_JSONNode_ValueEnumerator_o __this, System_Collections_Generic_List_Enumerator_JSONNode__o aArrayEnum, const MethodInfo* method);
// 0x3d860c0

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
  il2cpp_runtime_glue(local_20,0);
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
  il2cpp_runtime_glue(&method->virtualMethodPointer,0);
  return;
}


// SimpleJSONFixed.JSONNode.ValueEnumerator$$.ctor
// il2cpp: void SimpleJSONFixed_JSONNode_ValueEnumerator___ctor (SimpleJSONFixed_JSONNode_ValueEnumerator_o __this, System_Collections_Generic_Dictionary_Enumerator_string__JSONNode__o aDictEnum, const MethodInfo* method);
// 0x3d86150

void SimpleJSONFixed_JSONNode_ValueEnumerator___ctor
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
  il2cpp_runtime_glue(aiStack_50,0);
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
  il2cpp_runtime_glue(&method->virtualMethodPointer,0);
  return;
}


// SimpleJSONFixed.JSONNode.ValueEnumerator$$.ctor
// il2cpp: void SimpleJSONFixed_JSONNode_ValueEnumerator___ctor (SimpleJSONFixed_JSONNode_ValueEnumerator_o __this, SimpleJSONFixed_JSONNode_Enumerator_o aEnumerator, const MethodInfo* method);
// 0x3d86200

void SimpleJSONFixed_JSONNode_ValueEnumerator___ctor
               (SimpleJSONFixed_JSONNode_ValueEnumerator_o __this,
               SimpleJSONFixed_JSONNode_Enumerator_o aEnumerator,MethodInfo *method)

{
  (method->field8_0x40).genericMethod = __this.fields.m_Enumerator.fields.m_Array.fields._current;
  *(undefined4 *)&method->parameters = __this.fields.m_Enumerator.fields.m_Array.fields._list._0_4_;
  *(undefined4 *)((long)&method->parameters + 4) =
       __this.fields.m_Enumerator.fields.m_Array.fields._list._4_4_;
  *(int32_t *)&method->field7_0x38 = __this.fields.m_Enumerator.fields.m_Array.fields._index;
  *(int32_t *)((long)&method->field7_0x38 + 4) =
       __this.fields.m_Enumerator.fields.m_Array.fields._version;
  *(undefined4 *)&method->klass =
       __this.fields.m_Enumerator.fields.m_Object.fields._current.fields.value._0_4_;
  *(undefined4 *)((long)&method->klass + 4) =
       __this.fields.m_Enumerator.fields.m_Object.fields._current.fields.value._4_4_;
  *(int32_t *)&method->return_type =
       __this.fields.m_Enumerator.fields.m_Object.fields._getEnumeratorRetType;
  *(undefined4 *)((long)&method->return_type + 4) =
       __this.fields.m_Enumerator.fields.m_Object.fields._36_4_;
  *(int32_t *)&method->invoker_method = __this.fields.m_Enumerator.fields.m_Object.fields._version;
  *(int32_t *)((long)&method->invoker_method + 4) =
       __this.fields.m_Enumerator.fields.m_Object.fields._index;
  *(undefined4 *)&method->name =
       __this.fields.m_Enumerator.fields.m_Object.fields._current.fields.key._0_4_;
  *(undefined4 *)((long)&method->name + 4) =
       __this.fields.m_Enumerator.fields.m_Object.fields._current.fields.key._4_4_;
  *(int32_t *)&method->methodPointer = __this.fields.m_Enumerator.fields.type;
  *(undefined4 *)((long)&method->methodPointer + 4) = __this.fields.m_Enumerator.fields._4_4_;
  *(undefined4 *)&method->virtualMethodPointer =
       __this.fields.m_Enumerator.fields.m_Object.fields._dictionary._0_4_;
  *(undefined4 *)((long)&method->virtualMethodPointer + 4) =
       __this.fields.m_Enumerator.fields.m_Object.fields._dictionary._4_4_;
  il2cpp_runtime_glue(&method->virtualMethodPointer,0);
  return;
}


// SimpleJSONFixed.JSONNode.ValueEnumerator$$get_Current
// il2cpp: SimpleJSONFixed_JSONNode_o* SimpleJSONFixed_JSONNode_ValueEnumerator__get_Current (SimpleJSONFixed_JSONNode_ValueEnumerator_o __this, const MethodInfo* method);
// 0x3d86240

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
  if (DAT_057026a5 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_JSONNode_get_Value);
    DAT_057026a5 = '\x01';
  }
  __this_00.fields._0_8_ = unaff_RBX;
  SVar1 = SimpleJSONFixed_JSONNode_Enumerator__get_Current(__this_00,method);
  return SVar1.fields.value;
}


// SimpleJSONFixed.JSONNode.ValueEnumerator$$MoveNext
// il2cpp: bool SimpleJSONFixed_JSONNode_ValueEnumerator__MoveNext (SimpleJSONFixed_JSONNode_ValueEnumerator_o __this, const MethodInfo* method);
// 0x3d86270

bool_conflict
SimpleJSONFixed_JSONNode_ValueEnumerator__MoveNext
          (SimpleJSONFixed_JSONNode_ValueEnumerator_o __this,MethodInfo *method)

{
  bool_conflict bVar1;
  
  if (DAT_057026a4 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    DAT_057026a4 = '\x01';
  }
  if (*(int *)&method->methodPointer != 2) {
    if (*(int *)&method->methodPointer == 1) {
      bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        ((System_Collections_Generic_List_Enumerator_object__o)
                         __this.fields.m_Enumerator.fields._0_24_,
                         (MethodInfo_3185E20 *)&method->parameters);
      return bVar1;
    }
    return 0;
  }
  bVar1 = System_Collections_Generic_Dictionary_Enumerator<object__object>__MoveNext
                    ((System_Collections_Generic_Dictionary_Enumerator_object__object__o)
                     __this.fields.m_Enumerator.fields._0_40_,
                     (MethodInfo_31CFE90 *)&method->virtualMethodPointer);
  return bVar1;
}


// SimpleJSONFixed.JSONNode.ValueEnumerator$$GetEnumerator
// il2cpp: SimpleJSONFixed_JSONNode_ValueEnumerator_o SimpleJSONFixed_JSONNode_ValueEnumerator__GetEnumerator (SimpleJSONFixed_JSONNode_ValueEnumerator_o __this, const MethodInfo* method);
// 0x3d862e0

/* WARNING: Type propagation algorithm not settling */

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
   ((long)&(__return_storage_ptr__->fields).m_Enumerator.fields.m_Object.fields._current.fields + 8)
       = pIVar5;
  *(Il2CppType **)
   &(__return_storage_ptr__->fields).m_Enumerator.fields.m_Object.fields._getEnumeratorRetType =
       pIVar6;
  *(InvokerMethod *)&(__return_storage_ptr__->fields).m_Enumerator.fields.m_Object.fields._version =
       pIVar3;
  (__return_storage_ptr__->fields).m_Enumerator.fields.m_Object.fields._current.fields.key = pIVar4;
  *(Il2CppMethodPointer *)&(__return_storage_ptr__->fields).m_Enumerator.fields = pIVar1;
  (__return_storage_ptr__->fields).m_Enumerator.fields.m_Object.fields._dictionary = pSVar2;
  return __return_storage_ptr__;
}


// SimpleJSONFixed.JSONNode.KeyEnumerator$$.ctor
// il2cpp: void SimpleJSONFixed_JSONNode_KeyEnumerator___ctor (SimpleJSONFixed_JSONNode_KeyEnumerator_o __this, System_Collections_Generic_List_Enumerator_JSONNode__o aArrayEnum, const MethodInfo* method);
// 0x3d86310

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
  il2cpp_runtime_glue(local_20,0);
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
  il2cpp_runtime_glue(&method->virtualMethodPointer,0);
  return;
}


// SimpleJSONFixed.JSONNode.KeyEnumerator$$.ctor
// il2cpp: void SimpleJSONFixed_JSONNode_KeyEnumerator___ctor (SimpleJSONFixed_JSONNode_KeyEnumerator_o __this, System_Collections_Generic_Dictionary_Enumerator_string__JSONNode__o aDictEnum, const MethodInfo* method);
// 0x3d863a0

void SimpleJSONFixed_JSONNode_KeyEnumerator___ctor
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
  il2cpp_runtime_glue(aiStack_50,0);
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
  il2cpp_runtime_glue(&method->virtualMethodPointer,0);
  return;
}


// SimpleJSONFixed.JSONNode.KeyEnumerator$$.ctor
// il2cpp: void SimpleJSONFixed_JSONNode_KeyEnumerator___ctor (SimpleJSONFixed_JSONNode_KeyEnumerator_o __this, SimpleJSONFixed_JSONNode_Enumerator_o aEnumerator, const MethodInfo* method);
// 0x3d86450

void SimpleJSONFixed_JSONNode_KeyEnumerator___ctor
               (SimpleJSONFixed_JSONNode_KeyEnumerator_o __this,
               SimpleJSONFixed_JSONNode_Enumerator_o aEnumerator,MethodInfo *method)

{
  (method->field8_0x40).genericMethod = __this.fields.m_Enumerator.fields.m_Array.fields._current;
  *(undefined4 *)&method->parameters = __this.fields.m_Enumerator.fields.m_Array.fields._list._0_4_;
  *(undefined4 *)((long)&method->parameters + 4) =
       __this.fields.m_Enumerator.fields.m_Array.fields._list._4_4_;
  *(int32_t *)&method->field7_0x38 = __this.fields.m_Enumerator.fields.m_Array.fields._index;
  *(int32_t *)((long)&method->field7_0x38 + 4) =
       __this.fields.m_Enumerator.fields.m_Array.fields._version;
  *(undefined4 *)&method->klass =
       __this.fields.m_Enumerator.fields.m_Object.fields._current.fields.value._0_4_;
  *(undefined4 *)((long)&method->klass + 4) =
       __this.fields.m_Enumerator.fields.m_Object.fields._current.fields.value._4_4_;
  *(int32_t *)&method->return_type =
       __this.fields.m_Enumerator.fields.m_Object.fields._getEnumeratorRetType;
  *(undefined4 *)((long)&method->return_type + 4) =
       __this.fields.m_Enumerator.fields.m_Object.fields._36_4_;
  *(int32_t *)&method->invoker_method = __this.fields.m_Enumerator.fields.m_Object.fields._version;
  *(int32_t *)((long)&method->invoker_method + 4) =
       __this.fields.m_Enumerator.fields.m_Object.fields._index;
  *(undefined4 *)&method->name =
       __this.fields.m_Enumerator.fields.m_Object.fields._current.fields.key._0_4_;
  *(undefined4 *)((long)&method->name + 4) =
       __this.fields.m_Enumerator.fields.m_Object.fields._current.fields.key._4_4_;
  *(int32_t *)&method->methodPointer = __this.fields.m_Enumerator.fields.type;
  *(undefined4 *)((long)&method->methodPointer + 4) = __this.fields.m_Enumerator.fields._4_4_;
  *(undefined4 *)&method->virtualMethodPointer =
       __this.fields.m_Enumerator.fields.m_Object.fields._dictionary._0_4_;
  *(undefined4 *)((long)&method->virtualMethodPointer + 4) =
       __this.fields.m_Enumerator.fields.m_Object.fields._dictionary._4_4_;
  il2cpp_runtime_glue(&method->virtualMethodPointer,0);
  return;
}


// SimpleJSONFixed.JSONNode.KeyEnumerator$$get_Current
// il2cpp: System_String_o* SimpleJSONFixed_JSONNode_KeyEnumerator__get_Current (SimpleJSONFixed_JSONNode_KeyEnumerator_o __this, const MethodInfo* method);
// 0x3d86490

System_String_o *
SimpleJSONFixed_JSONNode_KeyEnumerator__get_Current
          (SimpleJSONFixed_JSONNode_KeyEnumerator_o __this,MethodInfo *method)

{
  System_Collections_Generic_KeyValuePair_string__JSONNode__o SVar1;
  
  if (DAT_057026a6 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_String_get_Key);
    DAT_057026a6 = '\x01';
  }
  SVar1 = SimpleJSONFixed_JSONNode_Enumerator__get_Current
                    ((SimpleJSONFixed_JSONNode_Enumerator_o)__this.fields.m_Enumerator.fields,method
                    );
  return SVar1.fields.key;
}


// SimpleJSONFixed.JSONNode.KeyEnumerator$$MoveNext
// il2cpp: bool SimpleJSONFixed_JSONNode_KeyEnumerator__MoveNext (SimpleJSONFixed_JSONNode_KeyEnumerator_o __this, const MethodInfo* method);
// 0x3d864c0

bool_conflict
SimpleJSONFixed_JSONNode_KeyEnumerator__MoveNext
          (SimpleJSONFixed_JSONNode_KeyEnumerator_o __this,MethodInfo *method)

{
  bool_conflict bVar1;
  
  if (DAT_057026a4 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    DAT_057026a4 = '\x01';
  }
  if (*(int *)&method->methodPointer != 2) {
    if (*(int *)&method->methodPointer == 1) {
      bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        ((System_Collections_Generic_List_Enumerator_object__o)
                         __this.fields.m_Enumerator.fields._0_24_,
                         (MethodInfo_3185E20 *)&method->parameters);
      return bVar1;
    }
    return 0;
  }
  bVar1 = System_Collections_Generic_Dictionary_Enumerator<object__object>__MoveNext
                    ((System_Collections_Generic_Dictionary_Enumerator_object__object__o)
                     __this.fields.m_Enumerator.fields._0_40_,
                     (MethodInfo_31CFE90 *)&method->virtualMethodPointer);
  return bVar1;
}


// SimpleJSONFixed.JSONNode.KeyEnumerator$$GetEnumerator
// il2cpp: SimpleJSONFixed_JSONNode_KeyEnumerator_o SimpleJSONFixed_JSONNode_KeyEnumerator__GetEnumerator (SimpleJSONFixed_JSONNode_KeyEnumerator_o __this, const MethodInfo* method);
// 0x3d86530

/* WARNING: Type propagation algorithm not settling */

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
   ((long)&(__return_storage_ptr__->fields).m_Enumerator.fields.m_Object.fields._current.fields + 8)
       = pIVar5;
  *(Il2CppType **)
   &(__return_storage_ptr__->fields).m_Enumerator.fields.m_Object.fields._getEnumeratorRetType =
       pIVar6;
  *(InvokerMethod *)&(__return_storage_ptr__->fields).m_Enumerator.fields.m_Object.fields._version =
       pIVar3;
  (__return_storage_ptr__->fields).m_Enumerator.fields.m_Object.fields._current.fields.key = pIVar4;
  *(Il2CppMethodPointer *)&(__return_storage_ptr__->fields).m_Enumerator.fields = pIVar1;
  (__return_storage_ptr__->fields).m_Enumerator.fields.m_Object.fields._dictionary = pSVar2;
  return __return_storage_ptr__;
}


// SimpleJSONFixed.JSONNode.LinqEnumerator$$.ctor
// il2cpp: void SimpleJSONFixed_JSONNode_LinqEnumerator___ctor (SimpleJSONFixed_JSONNode_LinqEnumerator_o* __this, SimpleJSONFixed_JSONNode_o* aNode, const MethodInfo* method);
// 0x3d838f0

void SimpleJSONFixed_JSONNode_LinqEnumerator___ctor
               (SimpleJSONFixed_JSONNode_LinqEnumerator_o *__this,SimpleJSONFixed_JSONNode_o *aNode,
               MethodInfo *method)

{
  int iVar1;
  SimpleJSONFixed_JSONNode_o *pSVar2;
  bool_conflict bVar3;
  MethodInfo *extraout_RDX;
  MethodInfo *method_00;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
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
  
  if (DAT_057026a7 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_JSONNode);
    DAT_057026a7 = '\x01';
  }
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).m_Node = aNode;
  il2cpp_runtime_glue(&__this->fields);
  pSVar2 = (__this->fields).m_Node;
  method_00 = extraout_RDX;
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_init_class();
    method_00 = extraout_RDX_00;
  }
  if (DAT_0570269d == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_JSONNode);
    DAT_0570269d = '\x01';
    iVar1 = *(int *)(TypeInfo_JSONNode + 0xe4);
    method_00 = extraout_RDX_01;
  }
  else {
    iVar1 = *(int *)(TypeInfo_JSONNode + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    method_00 = extraout_RDX_02;
  }
  bVar3 = SimpleJSONFixed_JSONNode__op_Equality(pSVar2,(Il2CppObject *)0x0,method_00);
  if ((char)bVar3 == '\0') {
    pSVar2 = (__this->fields).m_Node;
    if (pSVar2 == (SimpleJSONFixed_JSONNode_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
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
    *(undefined4 *)((long)&(__this->fields).m_Enumerator.fields.m_Array.fields._list + 4) =
         uStack_7c;
    (__this->fields).m_Enumerator.fields.m_Array.fields._index = iStack_78;
    (__this->fields).m_Enumerator.fields.m_Array.fields._version = iStack_74;
    *(undefined4 *)&(__this->fields).m_Enumerator.fields.m_Object.fields._current.fields.value =
         local_90;
    *(undefined4 *)
     ((long)&(__this->fields).m_Enumerator.fields.m_Object.fields._current.fields.value + 4) =
         uStack_8c;
    (__this->fields).m_Enumerator.fields.m_Object.fields._getEnumeratorRetType = iStack_88;
    *(undefined4 *)&(__this->fields).m_Enumerator.fields.m_Object.fields.field_0x24 = uStack_84;
    (__this->fields).m_Enumerator.fields.m_Object.fields._version = local_a0;
    (__this->fields).m_Enumerator.fields.m_Object.fields._index = iStack_9c;
    *(undefined4 *)&(__this->fields).m_Enumerator.fields.m_Object.fields._current.fields.key =
         uStack_98;
    *(undefined4 *)
     ((long)&(__this->fields).m_Enumerator.fields.m_Object.fields._current.fields.key + 4) =
         uStack_94;
    (__this->fields).m_Enumerator.fields.type = local_b0;
    *(undefined4 *)&(__this->fields).m_Enumerator.fields.field_0x4 = uStack_ac;
    *(undefined4 *)&(__this->fields).m_Enumerator.fields.m_Object.fields._dictionary = uStack_a8;
    *(undefined4 *)((long)&(__this->fields).m_Enumerator.fields.m_Object.fields._dictionary + 4) =
         uStack_a4;
    il2cpp_runtime_glue(&(__this->fields).m_Enumerator.fields.m_Object,0);
  }
  return;
}


// SimpleJSONFixed.JSONNode.LinqEnumerator$$get_Current
// il2cpp: System_Collections_Generic_KeyValuePair_string__JSONNode__o SimpleJSONFixed_JSONNode_LinqEnumerator__get_Current (SimpleJSONFixed_JSONNode_LinqEnumerator_o* __this, const MethodInfo* method);
// 0x3d86560

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
// 0x3d86570

Il2CppObject *
SimpleJSONFixed_JSONNode_LinqEnumerator__System_Collections_IEnumerator_get_Current
          (SimpleJSONFixed_JSONNode_LinqEnumerator_o *__this,MethodInfo *method)

{
  SimpleJSONFixed_JSONNode_Enumerator_o __this_00;
  Il2CppObject *pIVar1;
  undefined8 unaff_RBX;
  undefined1 in_stack_00000000 [48];
  undefined1 in_stack_ffffffffffffffe8 [16];
  
  if (DAT_057026a8 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_KeyValuePair_string__JSONNode);
    DAT_057026a8 = '\x01';
  }
  __this_00.fields.m_Object.fields._version = (int)unaff_RBX;
  __this_00.fields.m_Object.fields._index = (int)((ulong)unaff_RBX >> 0x20);
  __this_00.fields.type = in_stack_ffffffffffffffe8._0_4_;
  __this_00.fields._4_4_ = in_stack_ffffffffffffffe8._4_4_;
  __this_00.fields.m_Object.fields._dictionary =
       (System_Collections_Generic_Dictionary_TKey__TValue__o *)in_stack_ffffffffffffffe8._8_8_;
  __this_00.fields._24_48_ = in_stack_00000000;
  SimpleJSONFixed_JSONNode_Enumerator__get_Current
            (__this_00,(MethodInfo *)&(__this->fields).m_Enumerator);
  pIVar1 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_KeyValuePair_string__JSONNode,&stack0xffffffffffffffe8);
  return pIVar1;
}


// SimpleJSONFixed.JSONNode.LinqEnumerator$$MoveNext
// il2cpp: bool SimpleJSONFixed_JSONNode_LinqEnumerator__MoveNext (SimpleJSONFixed_JSONNode_LinqEnumerator_o* __this, const MethodInfo* method);
// 0x3d865d0

bool_conflict
SimpleJSONFixed_JSONNode_LinqEnumerator__MoveNext
          (SimpleJSONFixed_JSONNode_LinqEnumerator_o *__this,MethodInfo *method)

{
  int iVar1;
  System_Collections_Generic_Dictionary_Enumerator_object__object__o __this_00;
  bool_conflict bVar2;
  undefined1 in_stack_00000008 [24];
  undefined1 in_stack_00000020 [16];
  
  if (DAT_057026a4 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    DAT_057026a4 = '\x01';
  }
  iVar1 = (__this->fields).m_Enumerator.fields.type;
  if (iVar1 != 2) {
    if (iVar1 == 1) {
      bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        ((System_Collections_Generic_List_Enumerator_object__o)in_stack_00000008,
                         (MethodInfo_3185E20 *)&(__this->fields).m_Enumerator.fields.m_Array);
      return bVar2;
    }
    return 0;
  }
  __this_00.fields._24_16_ = in_stack_00000020;
  __this_00.fields._0_24_ = in_stack_00000008;
  bVar2 = System_Collections_Generic_Dictionary_Enumerator<object__object>__MoveNext
                    (__this_00,(MethodInfo_31CFE90 *)&(__this->fields).m_Enumerator.fields.m_Object)
  ;
  return bVar2;
}


// SimpleJSONFixed.JSONNode.LinqEnumerator$$Dispose
// il2cpp: void SimpleJSONFixed_JSONNode_LinqEnumerator__Dispose (SimpleJSONFixed_JSONNode_LinqEnumerator_o* __this, const MethodInfo* method);
// 0x3d86640

/* WARNING: Type propagation algorithm not settling */

void SimpleJSONFixed_JSONNode_LinqEnumerator__Dispose
               (SimpleJSONFixed_JSONNode_LinqEnumerator_o *__this,MethodInfo *method)

{
  SimpleJSONFixed_JSONNode_Enumerator_o *pSVar1;
  
  (__this->fields).m_Node = (SimpleJSONFixed_JSONNode_o *)0x0;
  il2cpp_runtime_glue(&__this->fields,0);
  (__this->fields).m_Enumerator.fields.m_Array.fields._list =
       (System_Collections_Generic_List_T__o *)0x0;
  pSVar1 = &(__this->fields).m_Enumerator;
  (pSVar1->fields).m_Array.fields._index = 0;
  (pSVar1->fields).m_Array.fields._version = 0;
  *(Il2CppObject **)
   ((long)&(__this->fields).m_Enumerator.fields.m_Object.fields._current.fields + 8) =
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
// 0x3d86680

System_Collections_Generic_IEnumerator_KeyValuePair_string__JSONNode___o *
SimpleJSONFixed_JSONNode_LinqEnumerator__GetEnumerator
          (SimpleJSONFixed_JSONNode_LinqEnumerator_o *__this,MethodInfo *method)

{
  SimpleJSONFixed_JSONNode_o *aNode;
  undefined1 auVar1 [16];
  
  if (DAT_057026a9 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_LinqEnumerator);
    DAT_057026a9 = '\x01';
  }
  aNode = (__this->fields).m_Node;
  auVar1 = il2cpp_runtime_glue(TypeInfo_LinqEnumerator);
  SimpleJSONFixed_JSONNode_LinqEnumerator___ctor(auVar1._0_8_,aNode,auVar1._8_8_);
  return (System_Collections_Generic_IEnumerator_KeyValuePair_string__JSONNode___o *)auVar1._0_8_;
}


// SimpleJSONFixed.JSONNode.LinqEnumerator$$Reset
// il2cpp: void SimpleJSONFixed_JSONNode_LinqEnumerator__Reset (SimpleJSONFixed_JSONNode_LinqEnumerator_o* __this, const MethodInfo* method);
// 0x3d866d0

void SimpleJSONFixed_JSONNode_LinqEnumerator__Reset
               (SimpleJSONFixed_JSONNode_LinqEnumerator_o *__this,MethodInfo *method)

{
  int iVar1;
  SimpleJSONFixed_JSONNode_o *pSVar2;
  bool_conflict bVar3;
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
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
  
  if (DAT_057026aa == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_JSONNode);
    DAT_057026aa = '\x01';
    in_RDX = extraout_RDX;
  }
  pSVar2 = (__this->fields).m_Node;
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_init_class();
    in_RDX = extraout_RDX_00;
  }
  if (DAT_0570269d == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_JSONNode);
    DAT_0570269d = '\x01';
    iVar1 = *(int *)(TypeInfo_JSONNode + 0xe4);
    in_RDX = extraout_RDX_01;
  }
  else {
    iVar1 = *(int *)(TypeInfo_JSONNode + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    in_RDX = extraout_RDX_02;
  }
  bVar3 = SimpleJSONFixed_JSONNode__op_Equality(pSVar2,(Il2CppObject *)0x0,in_RDX);
  if ((char)bVar3 == '\0') {
    pSVar2 = (__this->fields).m_Node;
    if (pSVar2 == (SimpleJSONFixed_JSONNode_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
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
    *(undefined4 *)((long)&(__this->fields).m_Enumerator.fields.m_Array.fields._list + 4) =
         uStack_7c;
    (__this->fields).m_Enumerator.fields.m_Array.fields._index = iStack_78;
    (__this->fields).m_Enumerator.fields.m_Array.fields._version = iStack_74;
    *(undefined4 *)&(__this->fields).m_Enumerator.fields.m_Object.fields._current.fields.value =
         local_90;
    *(undefined4 *)
     ((long)&(__this->fields).m_Enumerator.fields.m_Object.fields._current.fields.value + 4) =
         uStack_8c;
    (__this->fields).m_Enumerator.fields.m_Object.fields._getEnumeratorRetType = iStack_88;
    *(undefined4 *)&(__this->fields).m_Enumerator.fields.m_Object.fields.field_0x24 = uStack_84;
    (__this->fields).m_Enumerator.fields.m_Object.fields._version = local_a0;
    (__this->fields).m_Enumerator.fields.m_Object.fields._index = iStack_9c;
    *(undefined4 *)&(__this->fields).m_Enumerator.fields.m_Object.fields._current.fields.key =
         uStack_98;
    *(undefined4 *)
     ((long)&(__this->fields).m_Enumerator.fields.m_Object.fields._current.fields.key + 4) =
         uStack_94;
    (__this->fields).m_Enumerator.fields.type = local_b0;
    *(undefined4 *)&(__this->fields).m_Enumerator.fields.field_0x4 = uStack_ac;
    *(undefined4 *)&(__this->fields).m_Enumerator.fields.m_Object.fields._dictionary = uStack_a8;
    *(undefined4 *)((long)&(__this->fields).m_Enumerator.fields.m_Object.fields._dictionary + 4) =
         uStack_a4;
    il2cpp_runtime_glue(&(__this->fields).m_Enumerator.fields.m_Object,0);
  }
  return;
}


// SimpleJSONFixed.JSONNode.LinqEnumerator$$System.Collections.IEnumerable.GetEnumerator
// il2cpp: System_Collections_IEnumerator_o* SimpleJSONFixed_JSONNode_LinqEnumerator__System_Collections_IEnumerable_GetEnumerator (SimpleJSONFixed_JSONNode_LinqEnumerator_o* __this, const MethodInfo* method);
// 0x3d86810

System_Collections_IEnumerator_o *
SimpleJSONFixed_JSONNode_LinqEnumerator__System_Collections_IEnumerable_GetEnumerator
          (SimpleJSONFixed_JSONNode_LinqEnumerator_o *__this,MethodInfo *method)

{
  SimpleJSONFixed_JSONNode_o *aNode;
  undefined1 auVar1 [16];
  
  if (DAT_057026ab == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_LinqEnumerator);
    DAT_057026ab = '\x01';
  }
  aNode = (__this->fields).m_Node;
  auVar1 = il2cpp_runtime_glue(TypeInfo_LinqEnumerator);
  SimpleJSONFixed_JSONNode_LinqEnumerator___ctor(auVar1._0_8_,aNode,auVar1._8_8_);
  return (System_Collections_IEnumerator_o *)auVar1._0_8_;
}


// SimpleJSONFixed.JSONNode.<get_Children>d__43$$.ctor
// il2cpp: void SimpleJSONFixed_JSONNode__get_Children_d__43___ctor (SimpleJSONFixed_JSONNode__get_Children_d__43_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x3d83680

void SimpleJSONFixed_JSONNode_<get_Children>d__43___ctor
               (SimpleJSONFixed_JSONNode__get_Children_d__43_o *__this,int32_t __1__state,
               MethodInfo *method)

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
// 0x3d86860

void SimpleJSONFixed_JSONNode_<get_Children>d__43__System_IDisposable_Dispose
               (SimpleJSONFixed_JSONNode__get_Children_d__43_o *__this,MethodInfo *method)

{
  return;
}


// SimpleJSONFixed.JSONNode.<get_Children>d__43$$MoveNext
// il2cpp: bool SimpleJSONFixed_JSONNode__get_Children_d__43__MoveNext (SimpleJSONFixed_JSONNode__get_Children_d__43_o* __this, const MethodInfo* method);
// 0x3d86870

bool_conflict
SimpleJSONFixed_JSONNode_<get_Children>d__43__MoveNext
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
// 0x3d86890

SimpleJSONFixed_JSONNode_o *
SimpleJSONFixed_JSONNode_<get_Children>d__43__System_Collections_Generic_IEnumerator<SimpleJSONFixed_JSONNode>_get_Current
          (SimpleJSONFixed_JSONNode__get_Children_d__43_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// SimpleJSONFixed.JSONNode.<get_Children>d__43$$System.Collections.IEnumerator.Reset
// il2cpp: void SimpleJSONFixed_JSONNode__get_Children_d__43__System_Collections_IEnumerator_Reset (SimpleJSONFixed_JSONNode__get_Children_d__43_o* __this, const MethodInfo* method);
// 0x3d868a0

void SimpleJSONFixed_JSONNode_<get_Children>d__43__System_Collections_IEnumerator_Reset
               (SimpleJSONFixed_JSONNode__get_Children_d__43_o *__this,MethodInfo *method)

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


// SimpleJSONFixed.JSONNode.<get_Children>d__43$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* SimpleJSONFixed_JSONNode__get_Children_d__43__System_Collections_IEnumerator_get_Current (SimpleJSONFixed_JSONNode__get_Children_d__43_o* __this, const MethodInfo* method);
// 0x3d868e0

Il2CppObject *
SimpleJSONFixed_JSONNode_<get_Children>d__43__System_Collections_IEnumerator_get_Current
          (SimpleJSONFixed_JSONNode__get_Children_d__43_o *__this,MethodInfo *method)

{
  return (Il2CppObject *)(__this->fields).__2__current;
}


// SimpleJSONFixed.JSONNode.<get_Children>d__43$$System.Collections.Generic.IEnumerable<SimpleJSONFixed.JSONNode>.GetEnumerator
// il2cpp: System_Collections_Generic_IEnumerator_JSONNode__o* SimpleJSONFixed_JSONNode__get_Children_d__43__System_Collections_Generic_IEnumerable_SimpleJSONFixed_JSONNode__GetEnumerator (SimpleJSONFixed_JSONNode__get_Children_d__43_o* __this, const MethodInfo* method);
// 0x3d868f0

System_Collections_Generic_IEnumerator_JSONNode__o *
SimpleJSONFixed_JSONNode_<get_Children>d__43__System_Collections_Generic_IEnumerable<SimpleJSONFixed_JSONNode>_GetEnumerator
          (SimpleJSONFixed_JSONNode__get_Children_d__43_o *__this,MethodInfo *method)

{
  int iVar1;
  int32_t iVar2;
  Il2CppObject *__this_00;
  
  if (DAT_057026ac == '\0') {
    il2cpp_init_method_metadata();
    DAT_057026ac = '\x01';
  }
  if (((__this->fields).__1__state == -2) &&
     (iVar1 = (__this->fields).__l__initialThreadId,
     iVar2 = System_Environment__get_CurrentManagedThreadId((MethodInfo *)0x0), iVar1 == iVar2)) {
    (__this->fields).__1__state = 0;
    return (System_Collections_Generic_IEnumerator_JSONNode__o *)__this;
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_get_Children_d__43);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  *(undefined4 *)&__this_00[1].klass = 0;
  iVar2 = System_Environment__get_CurrentManagedThreadId((MethodInfo *)0x0);
  *(int32_t *)&__this_00[2].klass = iVar2;
  return (System_Collections_Generic_IEnumerator_JSONNode__o *)__this_00;
}


// SimpleJSONFixed.JSONNode.<get_Children>d__43$$System.Collections.IEnumerable.GetEnumerator
// il2cpp: System_Collections_IEnumerator_o* SimpleJSONFixed_JSONNode__get_Children_d__43__System_Collections_IEnumerable_GetEnumerator (SimpleJSONFixed_JSONNode__get_Children_d__43_o* __this, const MethodInfo* method);
// 0x3d86970

System_Collections_IEnumerator_o *
SimpleJSONFixed_JSONNode_<get_Children>d__43__System_Collections_IEnumerable_GetEnumerator
          (SimpleJSONFixed_JSONNode__get_Children_d__43_o *__this,MethodInfo *method)

{
  int iVar1;
  int32_t iVar2;
  Il2CppObject *__this_00;
  
  if (DAT_057026ac == '\0') {
    il2cpp_init_method_metadata();
    DAT_057026ac = '\x01';
  }
  if (((__this->fields).__1__state == -2) &&
     (iVar1 = (__this->fields).__l__initialThreadId,
     iVar2 = System_Environment__get_CurrentManagedThreadId((MethodInfo *)0x0), iVar1 == iVar2)) {
    (__this->fields).__1__state = 0;
    return (System_Collections_IEnumerator_o *)__this;
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_get_Children_d__43);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  *(undefined4 *)&__this_00[1].klass = 0;
  iVar2 = System_Environment__get_CurrentManagedThreadId((MethodInfo *)0x0);
  *(int32_t *)&__this_00[2].klass = iVar2;
  return (System_Collections_IEnumerator_o *)__this_00;
}


// SimpleJSONFixed.JSONNode.<get_DeepChildren>d__45$$.ctor
// il2cpp: void SimpleJSONFixed_JSONNode__get_DeepChildren_d__45___ctor (SimpleJSONFixed_JSONNode__get_DeepChildren_d__45_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x3d83730

void SimpleJSONFixed_JSONNode_<get_DeepChildren>d__45___ctor
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
// 0x3d869f0

/* WARNING: Removing unreachable block (ram,0x03d86b67) */

void SimpleJSONFixed_JSONNode_<get_DeepChildren>d__45__System_IDisposable_Dispose
               (SimpleJSONFixed_JSONNode__get_DeepChildren_d__45_o *__this,MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  System_Collections_Generic_IEnumerator_JSONNode__o *pSVar4;
  System_Collections_Generic_IEnumerator_JSONNode__c *pSVar5;
  Il2CppRuntimeInterfaceOffsetPair *pIVar6;
  VirtualInvokeData *pVVar7;
  long lVar8;
  
  uVar3 = (__this->fields).__1__state;
  if ((uVar3 & 0xfffffffe) == 0xfffffffc) {
    if ((uVar3 != 1) && (uVar3 != 0xfffffffc)) goto joined_r0x03d86ace;
  }
  else if (uVar3 != 1) {
    return;
  }
  if (DAT_057026af == '\0') {
    il2cpp_init_method_metadata();
    DAT_057026af = '\x01';
  }
  (__this->fields).__1__state = -3;
  pSVar4 = (__this->fields).__7__wrap2;
  if (pSVar4 != (System_Collections_Generic_IEnumerator_JSONNode__o *)0x0) {
    pSVar5 = pSVar4->klass;
    uVar1._0_1_ = (pSVar5->_2).rank;
    uVar1._1_1_ = (pSVar5->_2).minimumAlignment;
    if ((ulong)uVar1 != 0) {
      pIVar6 = (pSVar5->_1).interfaceOffsets;
      lVar8 = 0;
      do {
        if (*(long *)((long)&pIVar6->interfaceType + lVar8) == TypeInfo_IDisposable) {
          pVVar7 = pSVar5->vtable + *(int *)((long)&pIVar6->offset + lVar8);
          goto LAB_03d86abb;
        }
        lVar8 = lVar8 + 0x10;
      } while ((ulong)uVar1 << 4 != lVar8);
    }
    pVVar7 = (VirtualInvokeData *)il2cpp_runtime_glue(pSVar4,TypeInfo_IDisposable,0);
LAB_03d86abb:
    (*pVVar7->methodPtr)(pSVar4,pVVar7->method);
  }
joined_r0x03d86ace:
  if (DAT_057026ae == '\0') {
    il2cpp_init_method_metadata();
    DAT_057026ae = '\x01';
  }
  (__this->fields).__1__state = -1;
  pSVar4 = (__this->fields).__7__wrap1;
  if (pSVar4 != (System_Collections_Generic_IEnumerator_JSONNode__o *)0x0) {
    pSVar5 = pSVar4->klass;
    uVar2._0_1_ = (pSVar5->_2).rank;
    uVar2._1_1_ = (pSVar5->_2).minimumAlignment;
    if ((ulong)uVar2 != 0) {
      pIVar6 = (pSVar5->_1).interfaceOffsets;
      lVar8 = 0;
      do {
        if (*(long *)((long)&pIVar6->interfaceType + lVar8) == TypeInfo_IDisposable) {
          pVVar7 = pSVar5->vtable + *(int *)((long)&pIVar6->offset + lVar8);
          goto LAB_03d86b4d;
        }
        lVar8 = lVar8 + 0x10;
      } while ((ulong)uVar2 << 4 != lVar8);
    }
    pVVar7 = (VirtualInvokeData *)il2cpp_runtime_glue(pSVar4,TypeInfo_IDisposable,0);
LAB_03d86b4d:
    (*pVVar7->methodPtr)(pSVar4,pVVar7->method);
  }
  return;
}


// SimpleJSONFixed.JSONNode.<get_DeepChildren>d__45$$MoveNext
// il2cpp: bool SimpleJSONFixed_JSONNode__get_DeepChildren_d__45__MoveNext (SimpleJSONFixed_JSONNode__get_DeepChildren_d__45_o* __this, const MethodInfo* method);
// 0x3d86c60

bool_conflict
SimpleJSONFixed_JSONNode_<get_DeepChildren>d__45__MoveNext
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
  Il2CppClass *pIVar10;
  System_Collections_Generic_IEnumerator_JSONNode__c *pSVar11;
  Il2CppRuntimeInterfaceOffsetPair *pIVar12;
  char cVar13;
  int32_t iVar14;
  long *plVar15;
  undefined8 *puVar16;
  System_Collections_Generic_IEnumerator_JSONNode__o *pSVar17;
  void *pvVar18;
  Il2CppObject *__this_00;
  VirtualInvokeData *pVVar19;
  SimpleJSONFixed_JSONNode_o *pSVar20;
  long lVar21;
  long lVar22;
  
  if (DAT_057026ad == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_IEnumerable_JSONNode);
    il2cpp_init_method_metadata(&TypeInfo_IEnumerator_JSONNode);
    il2cpp_init_method_metadata();
    DAT_057026ad = '\x01';
  }
  iVar9 = (__this->fields).__1__state;
  if (iVar9 == 1) goto LAB_03d86efa;
  if (iVar9 != 0) {
    return 0;
  }
  pSVar20 = (__this->fields).__4__this;
  (__this->fields).__1__state = -1;
  if (pSVar20 == (SimpleJSONFixed_JSONNode_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  plVar15 = (long *)(*(pSVar20->klass->vtable)._27_get_Children.methodPtr)
                              (pSVar20,(pSVar20->klass->vtable)._27_get_Children.method);
  if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  lVar22 = *plVar15;
  if ((ulong)*(ushort *)(lVar22 + 0x12e) != 0) {
    lVar21 = 0;
    do {
      if (*(long *)(*(long *)(lVar22 + 0xb0) + lVar21) == TypeInfo_IEnumerable_JSONNode) {
        puVar16 = (undefined8 *)
                  ((long)*(int *)(*(long *)(lVar22 + 0xb0) + 8 + lVar21) * 0x10 + lVar22 + 0x138);
        goto LAB_03d86d41;
      }
      lVar21 = lVar21 + 0x10;
    } while ((ulong)*(ushort *)(lVar22 + 0x12e) << 4 != lVar21);
  }
  puVar16 = (undefined8 *)il2cpp_runtime_glue(plVar15,TypeInfo_IEnumerable_JSONNode,0);
LAB_03d86d41:
  pSVar17 = (System_Collections_Generic_IEnumerator_JSONNode__o *)
            (*(code *)*puVar16)(plVar15,puVar16[1]);
  (__this->fields).__7__wrap1 = pSVar17;
  il2cpp_runtime_glue(&(__this->fields).__7__wrap1,pSVar17);
  (__this->fields).__1__state = -3;
  pSVar17 = (__this->fields).__7__wrap1;
  do {
    if (pSVar17 == (System_Collections_Generic_IEnumerator_JSONNode__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    pSVar11 = pSVar17->klass;
    uVar6._0_1_ = (pSVar11->_2).rank;
    uVar6._1_1_ = (pSVar11->_2).minimumAlignment;
    if ((ulong)uVar6 != 0) {
      pIVar12 = (pSVar11->_1).interfaceOffsets;
      lVar22 = 0;
      do {
        if (*(long *)((long)&pIVar12->interfaceType + lVar22) == TypeInfo_IEnumerator) {
          pVVar19 = pSVar11->vtable + *(int *)((long)&pIVar12->offset + lVar22);
          goto LAB_03d87091;
        }
        lVar22 = lVar22 + 0x10;
      } while ((ulong)uVar6 << 4 != lVar22);
    }
    pVVar19 = (VirtualInvokeData *)il2cpp_runtime_glue(pSVar17,TypeInfo_IEnumerator,0);
LAB_03d87091:
    cVar13 = (*pVVar19->methodPtr)(pSVar17,pVVar19->method);
    ppSVar1 = &(__this->fields).__7__wrap1;
    if (cVar13 == '\0') {
      if (DAT_057026ae == '\0') {
        il2cpp_init_method_metadata();
        DAT_057026ae = '\x01';
      }
      (__this->fields).__1__state = -1;
      pSVar17 = (__this->fields).__7__wrap1;
      if (pSVar17 == (System_Collections_Generic_IEnumerator_JSONNode__o *)0x0) goto LAB_03d871d5;
      pSVar11 = pSVar17->klass;
      uVar7._0_1_ = (pSVar11->_2).rank;
      uVar7._1_1_ = (pSVar11->_2).minimumAlignment;
      if ((ulong)uVar7 == 0) goto LAB_03d87113;
      pIVar12 = (pSVar11->_1).interfaceOffsets;
      lVar22 = 0;
      break;
    }
    pSVar17 = *ppSVar1;
    if (pSVar17 == (System_Collections_Generic_IEnumerator_JSONNode__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    pSVar11 = pSVar17->klass;
    uVar2._0_1_ = (pSVar11->_2).rank;
    uVar2._1_1_ = (pSVar11->_2).minimumAlignment;
    if ((ulong)uVar2 != 0) {
      pIVar12 = (pSVar11->_1).interfaceOffsets;
      lVar22 = 0;
      do {
        if (*(long *)((long)&pIVar12->interfaceType + lVar22) == TypeInfo_IEnumerator_JSONNode) {
          pVVar19 = pSVar11->vtable + *(int *)((long)&pIVar12->offset + lVar22);
          goto LAB_03d86e11;
        }
        lVar22 = lVar22 + 0x10;
      } while ((ulong)uVar2 << 4 != lVar22);
    }
    pVVar19 = (VirtualInvokeData *)il2cpp_runtime_glue(pSVar17,TypeInfo_IEnumerator_JSONNode,0);
LAB_03d86e11:
    pvVar18 = (void *)(*pVVar19->methodPtr)(pSVar17);
    if (pvVar18 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    if (DAT_05702684 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_get_DeepChildren_d__45);
      DAT_05702684 = '\x01';
    }
    __this_00 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_get_DeepChildren_d__45);
    System_Object___ctor(__this_00,(MethodInfo *)0x0);
    *(undefined4 *)&__this_00[1].klass = 0xfffffffe;
    iVar14 = System_Environment__get_CurrentManagedThreadId((MethodInfo *)0x0);
    *(int32_t *)&__this_00[2].klass = iVar14;
    __this_00[2].monitor = pvVar18;
    il2cpp_runtime_glue(&__this_00[2].monitor,pvVar18);
    pIVar10 = __this_00->klass;
    uVar3._0_1_ = (pIVar10->_2).rank;
    uVar3._1_1_ = (pIVar10->_2).minimumAlignment;
    if ((ulong)uVar3 != 0) {
      pIVar12 = (pIVar10->_1).interfaceOffsets;
      lVar22 = 0;
      do {
        if (*(long *)((long)&pIVar12->interfaceType + lVar22) == TypeInfo_IEnumerable_JSONNode) {
          pVVar19 = pIVar10->vtable + *(int *)((long)&pIVar12->offset + lVar22);
          goto LAB_03d86ee1;
        }
        lVar22 = lVar22 + 0x10;
      } while ((ulong)uVar3 << 4 != lVar22);
    }
    pVVar19 = (VirtualInvokeData *)il2cpp_runtime_glue(__this_00,TypeInfo_IEnumerable_JSONNode,0);
LAB_03d86ee1:
    pSVar17 = (System_Collections_Generic_IEnumerator_JSONNode__o *)
              (*pVVar19->methodPtr)(__this_00,pVVar19->method);
    (__this->fields).__7__wrap2 = pSVar17;
    il2cpp_runtime_glue(&(__this->fields).__7__wrap2,pSVar17);
LAB_03d86efa:
    (__this->fields).__1__state = -4;
    pSVar17 = (__this->fields).__7__wrap2;
    if (pSVar17 == (System_Collections_Generic_IEnumerator_JSONNode__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    pSVar11 = pSVar17->klass;
    uVar4._0_1_ = (pSVar11->_2).rank;
    uVar4._1_1_ = (pSVar11->_2).minimumAlignment;
    if ((ulong)uVar4 != 0) {
      pIVar12 = (pSVar11->_1).interfaceOffsets;
      lVar22 = 0;
      do {
        if (*(long *)((long)&pIVar12->interfaceType + lVar22) == TypeInfo_IEnumerator) {
          pVVar19 = pSVar11->vtable + *(int *)((long)&pIVar12->offset + lVar22);
          goto LAB_03d86f71;
        }
        lVar22 = lVar22 + 0x10;
      } while ((ulong)uVar4 << 4 != lVar22);
    }
    pVVar19 = (VirtualInvokeData *)il2cpp_runtime_glue(pSVar17,TypeInfo_IEnumerator,0);
LAB_03d86f71:
    cVar13 = (*pVVar19->methodPtr)(pSVar17,pVVar19->method);
    ppSVar1 = &(__this->fields).__7__wrap2;
    if (cVar13 != '\0') {
      pSVar17 = *ppSVar1;
      if (pSVar17 == (System_Collections_Generic_IEnumerator_JSONNode__o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      pSVar11 = pSVar17->klass;
      uVar8._0_1_ = (pSVar11->_2).rank;
      uVar8._1_1_ = (pSVar11->_2).minimumAlignment;
      if ((ulong)uVar8 == 0) goto LAB_03d8716f;
      pIVar12 = (pSVar11->_1).interfaceOffsets;
      lVar22 = 0;
      goto LAB_03d87160;
    }
    if (DAT_057026af == '\0') {
      il2cpp_init_method_metadata();
      DAT_057026af = '\x01';
    }
    (__this->fields).__1__state = -3;
    pSVar17 = (__this->fields).__7__wrap2;
    if (pSVar17 != (System_Collections_Generic_IEnumerator_JSONNode__o *)0x0) {
      pSVar11 = pSVar17->klass;
      uVar5._0_1_ = (pSVar11->_2).rank;
      uVar5._1_1_ = (pSVar11->_2).minimumAlignment;
      if ((ulong)uVar5 != 0) {
        pIVar12 = (pSVar11->_1).interfaceOffsets;
        lVar22 = 0;
        do {
          if (*(long *)((long)&pIVar12->interfaceType + lVar22) == TypeInfo_IDisposable) {
            pVVar19 = pSVar11->vtable + *(int *)((long)&pIVar12->offset + lVar22);
            goto LAB_03d8700d;
          }
          lVar22 = lVar22 + 0x10;
        } while ((ulong)uVar5 << 4 != lVar22);
      }
      pVVar19 = (VirtualInvokeData *)il2cpp_runtime_glue(pSVar17,TypeInfo_IDisposable,0);
LAB_03d8700d:
      (*pVVar19->methodPtr)(pSVar17,pVVar19->method);
    }
    *ppSVar1 = (System_Collections_Generic_IEnumerator_JSONNode__o *)0x0;
    il2cpp_runtime_glue(ppSVar1,0);
    pSVar17 = (__this->fields).__7__wrap1;
  } while( true );
  while (lVar22 = lVar22 + 0x10, (ulong)uVar7 << 4 != lVar22) {
    if (*(long *)((long)&pIVar12->interfaceType + lVar22) == TypeInfo_IDisposable) {
      pVVar19 = pSVar11->vtable + *(int *)((long)&pIVar12->offset + lVar22);
      goto LAB_03d871cc;
    }
  }
LAB_03d87113:
  pVVar19 = (VirtualInvokeData *)il2cpp_runtime_glue(pSVar17,TypeInfo_IDisposable,0);
LAB_03d871cc:
  (*pVVar19->methodPtr)(pSVar17,pVVar19->method);
LAB_03d871d5:
  *ppSVar1 = (System_Collections_Generic_IEnumerator_JSONNode__o *)0x0;
  il2cpp_runtime_glue(ppSVar1,0);
  return 0;
  while (lVar22 = lVar22 + 0x10, (ulong)uVar8 << 4 != lVar22) {
LAB_03d87160:
    if (*(long *)((long)&pIVar12->interfaceType + lVar22) == TypeInfo_IEnumerator_JSONNode) {
      pVVar19 = pSVar11->vtable + *(int *)((long)&pIVar12->offset + lVar22);
      goto LAB_03d87191;
    }
  }
LAB_03d8716f:
  pVVar19 = (VirtualInvokeData *)il2cpp_runtime_glue(pSVar17,TypeInfo_IEnumerator_JSONNode,0);
LAB_03d87191:
  pSVar20 = (SimpleJSONFixed_JSONNode_o *)(*pVVar19->methodPtr)(pSVar17,pVVar19->method);
  (__this->fields).__2__current = pSVar20;
  il2cpp_runtime_glue(&(__this->fields).__2__current,pSVar20);
  (__this->fields).__1__state = 1;
  return (bool_conflict)CONCAT71((int7)((ulong)ppSVar1 >> 8),1);
}


// SimpleJSONFixed.JSONNode.<get_DeepChildren>d__45$$<>m__Finally1
// il2cpp: void SimpleJSONFixed_JSONNode__get_DeepChildren_d__45____m__Finally1 (SimpleJSONFixed_JSONNode__get_DeepChildren_d__45_o* __this, const MethodInfo* method);
// 0x3d87360

void SimpleJSONFixed_JSONNode_<get_DeepChildren>d__45__<>m__Finally1
               (SimpleJSONFixed_JSONNode__get_DeepChildren_d__45_o *__this,MethodInfo *method)

{
  ushort uVar1;
  System_Collections_Generic_IEnumerator_JSONNode__o *pSVar2;
  System_Collections_Generic_IEnumerator_JSONNode__c *pSVar3;
  Il2CppRuntimeInterfaceOffsetPair *pIVar4;
  code *vtable_dispatch;
  long lVar5;
  undefined1 auVar6 [16];
  
  if (DAT_057026ae == '\0') {
    il2cpp_init_method_metadata();
    DAT_057026ae = '\x01';
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
        goto LAB_03d873ef;
      }
      lVar5 = lVar5 + 0x10;
    } while ((ulong)uVar1 << 4 != lVar5);
  }
  auVar6 = il2cpp_runtime_glue(pSVar2,TypeInfo_IDisposable,0);
LAB_03d873ef:
  vtable_dispatch = (code *)*auVar6._0_8_;
  (*vtable_dispatch)(pSVar2,auVar6._0_8_[1],auVar6._8_8_,vtable_dispatch);
  return;
}


// SimpleJSONFixed.JSONNode.<get_DeepChildren>d__45$$<>m__Finally2
// il2cpp: void SimpleJSONFixed_JSONNode__get_DeepChildren_d__45____m__Finally2 (SimpleJSONFixed_JSONNode__get_DeepChildren_d__45_o* __this, const MethodInfo* method);
// 0x3d872c0

void SimpleJSONFixed_JSONNode_<get_DeepChildren>d__45__<>m__Finally2
               (SimpleJSONFixed_JSONNode__get_DeepChildren_d__45_o *__this,MethodInfo *method)

{
  ushort uVar1;
  System_Collections_Generic_IEnumerator_JSONNode__o *pSVar2;
  System_Collections_Generic_IEnumerator_JSONNode__c *pSVar3;
  Il2CppRuntimeInterfaceOffsetPair *pIVar4;
  code *vtable_dispatch;
  long lVar5;
  undefined1 auVar6 [16];
  
  if (DAT_057026af == '\0') {
    il2cpp_init_method_metadata();
    DAT_057026af = '\x01';
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
        goto LAB_03d8734f;
      }
      lVar5 = lVar5 + 0x10;
    } while ((ulong)uVar1 << 4 != lVar5);
  }
  auVar6 = il2cpp_runtime_glue(pSVar2,TypeInfo_IDisposable,0);
LAB_03d8734f:
  vtable_dispatch = (code *)*auVar6._0_8_;
  (*vtable_dispatch)(pSVar2,auVar6._0_8_[1],auVar6._8_8_,vtable_dispatch);
  return;
}


// SimpleJSONFixed.JSONNode.<get_DeepChildren>d__45$$System.Collections.Generic.IEnumerator<SimpleJSONFixed.JSONNode>.get_Current
// il2cpp: SimpleJSONFixed_JSONNode_o* SimpleJSONFixed_JSONNode__get_DeepChildren_d__45__System_Collections_Generic_IEnumerator_SimpleJSONFixed_JSONNode__get_Current (SimpleJSONFixed_JSONNode__get_DeepChildren_d__45_o* __this, const MethodInfo* method);
// 0x3d87400

SimpleJSONFixed_JSONNode_o *
SimpleJSONFixed_JSONNode_<get_DeepChildren>d__45__System_Collections_Generic_IEnumerator<SimpleJSONFixed_JSONNode>_get_Current
          (SimpleJSONFixed_JSONNode__get_DeepChildren_d__45_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// SimpleJSONFixed.JSONNode.<get_DeepChildren>d__45$$System.Collections.IEnumerator.Reset
// il2cpp: void SimpleJSONFixed_JSONNode__get_DeepChildren_d__45__System_Collections_IEnumerator_Reset (SimpleJSONFixed_JSONNode__get_DeepChildren_d__45_o* __this, const MethodInfo* method);
// 0x3d87410

void SimpleJSONFixed_JSONNode_<get_DeepChildren>d__45__System_Collections_IEnumerator_Reset
               (SimpleJSONFixed_JSONNode__get_DeepChildren_d__45_o *__this,MethodInfo *method)

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


// SimpleJSONFixed.JSONNode.<get_DeepChildren>d__45$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* SimpleJSONFixed_JSONNode__get_DeepChildren_d__45__System_Collections_IEnumerator_get_Current (SimpleJSONFixed_JSONNode__get_DeepChildren_d__45_o* __this, const MethodInfo* method);
// 0x3d87450

Il2CppObject *
SimpleJSONFixed_JSONNode_<get_DeepChildren>d__45__System_Collections_IEnumerator_get_Current
          (SimpleJSONFixed_JSONNode__get_DeepChildren_d__45_o *__this,MethodInfo *method)

{
  return (Il2CppObject *)(__this->fields).__2__current;
}


// SimpleJSONFixed.JSONNode.<get_DeepChildren>d__45$$System.Collections.Generic.IEnumerable<SimpleJSONFixed.JSONNode>.GetEnumerator
// il2cpp: System_Collections_Generic_IEnumerator_JSONNode__o* SimpleJSONFixed_JSONNode__get_DeepChildren_d__45__System_Collections_Generic_IEnumerable_SimpleJSONFixed_JSONNode__GetEnumerator (SimpleJSONFixed_JSONNode__get_DeepChildren_d__45_o* __this, const MethodInfo* method);
// 0x3d87460

System_Collections_IEnumerator_o *
SimpleJSONFixed_JSONNode_<get_DeepChildren>d__45__System_Collections_Generic_IEnumerable<SimpleJSONFixed_JSONNode>_GetEnumerator
          (SimpleJSONFixed_JSONNode__get_DeepChildren_d__45_o *__this,MethodInfo *method)

{
  int iVar1;
  int32_t iVar2;
  Il2CppObject *__this_00;
  
  if (DAT_057026b0 == '\0') {
    il2cpp_init_method_metadata();
    DAT_057026b0 = '\x01';
  }
  if (((__this->fields).__1__state == -2) &&
     (iVar1 = (__this->fields).__l__initialThreadId,
     iVar2 = System_Environment__get_CurrentManagedThreadId((MethodInfo *)0x0), iVar1 == iVar2)) {
    (__this->fields).__1__state = 0;
    return (System_Collections_IEnumerator_o *)__this;
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_get_DeepChildren_d__45);
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


// SimpleJSONFixed.JSONNode.<get_DeepChildren>d__45$$System.Collections.IEnumerable.GetEnumerator
// il2cpp: System_Collections_IEnumerator_o* SimpleJSONFixed_JSONNode__get_DeepChildren_d__45__System_Collections_IEnumerable_GetEnumerator (SimpleJSONFixed_JSONNode__get_DeepChildren_d__45_o* __this, const MethodInfo* method);
// 0x3d87500

System_Collections_IEnumerator_o *
SimpleJSONFixed_JSONNode_<get_DeepChildren>d__45__System_Collections_IEnumerable_GetEnumerator
          (SimpleJSONFixed_JSONNode__get_DeepChildren_d__45_o *__this,MethodInfo *method)

{
  int iVar1;
  int32_t iVar2;
  Il2CppObject *__this_00;
  
  if (DAT_057026b0 == '\0') {
    il2cpp_init_method_metadata();
    DAT_057026b0 = '\x01';
  }
  if (((__this->fields).__1__state == -2) &&
     (iVar1 = (__this->fields).__l__initialThreadId,
     iVar2 = System_Environment__get_CurrentManagedThreadId((MethodInfo *)0x0), iVar1 == iVar2)) {
    (__this->fields).__1__state = 0;
    return (System_Collections_IEnumerator_o *)__this;
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_get_DeepChildren_d__45);
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


// SimpleJSONFixed.JSONNode$$get_Item
// il2cpp: SimpleJSONFixed_JSONNode_o* SimpleJSONFixed_JSONNode__get_Item (SimpleJSONFixed_JSONNode_o* __this, int32_t aIndex, const MethodInfo* method);
// 0x3d83460

SimpleJSONFixed_JSONNode_o *
SimpleJSONFixed_JSONNode__get_Item
          (SimpleJSONFixed_JSONNode_o *__this,int32_t aIndex,MethodInfo *method)

{
  return (SimpleJSONFixed_JSONNode_o *)0x0;
}


// SimpleJSONFixed.JSONNode$$set_Item
// il2cpp: void SimpleJSONFixed_JSONNode__set_Item (SimpleJSONFixed_JSONNode_o* __this, int32_t aIndex, SimpleJSONFixed_JSONNode_o* value, const MethodInfo* method);
// 0x3d83470

void SimpleJSONFixed_JSONNode__set_Item
               (SimpleJSONFixed_JSONNode_o *__this,int32_t aIndex,SimpleJSONFixed_JSONNode_o *value,
               MethodInfo *method)

{
  return;
}


// SimpleJSONFixed.JSONNode$$get_Item
// il2cpp: SimpleJSONFixed_JSONNode_o* SimpleJSONFixed_JSONNode__get_Item (SimpleJSONFixed_JSONNode_o* __this, System_String_o* aKey, const MethodInfo* method);
// 0x3d83480

SimpleJSONFixed_JSONNode_o *
SimpleJSONFixed_JSONNode__get_Item
          (SimpleJSONFixed_JSONNode_o *__this,System_String_o *aKey,MethodInfo *method)

{
  return (SimpleJSONFixed_JSONNode_o *)0x0;
}


// SimpleJSONFixed.JSONNode$$set_Item
// il2cpp: void SimpleJSONFixed_JSONNode__set_Item (SimpleJSONFixed_JSONNode_o* __this, System_String_o* aKey, SimpleJSONFixed_JSONNode_o* value, const MethodInfo* method);
// 0x3d83490

void SimpleJSONFixed_JSONNode__set_Item
               (SimpleJSONFixed_JSONNode_o *__this,System_String_o *aKey,
               SimpleJSONFixed_JSONNode_o *value,MethodInfo *method)

{
  return;
}


// SimpleJSONFixed.JSONNode$$get_Value
// il2cpp: System_String_o* SimpleJSONFixed_JSONNode__get_Value (SimpleJSONFixed_JSONNode_o* __this, const MethodInfo* method);
// 0x3d834a0

System_String_o *
SimpleJSONFixed_JSONNode__get_Value(SimpleJSONFixed_JSONNode_o *__this,MethodInfo *method)

{
  if (DAT_05702681 == '\0') {
    il2cpp_init_method_metadata(&"");
    DAT_05702681 = '\x01';
  }
  return "";
}


// SimpleJSONFixed.JSONNode$$set_Value
// il2cpp: void SimpleJSONFixed_JSONNode__set_Value (SimpleJSONFixed_JSONNode_o* __this, System_String_o* value, const MethodInfo* method);
// 0x3d834d0

void SimpleJSONFixed_JSONNode__set_Value
               (SimpleJSONFixed_JSONNode_o *__this,System_String_o *value,MethodInfo *method)

{
  return;
}


// SimpleJSONFixed.JSONNode$$get_Count
// il2cpp: int32_t SimpleJSONFixed_JSONNode__get_Count (SimpleJSONFixed_JSONNode_o* __this, const MethodInfo* method);
// 0x3d834e0

int32_t SimpleJSONFixed_JSONNode__get_Count(SimpleJSONFixed_JSONNode_o *__this,MethodInfo *method)

{
  return 0;
}


// SimpleJSONFixed.JSONNode$$get_IsNumber
// il2cpp: bool SimpleJSONFixed_JSONNode__get_IsNumber (SimpleJSONFixed_JSONNode_o* __this, const MethodInfo* method);
// 0x3d834f0

bool_conflict
SimpleJSONFixed_JSONNode__get_IsNumber(SimpleJSONFixed_JSONNode_o *__this,MethodInfo *method)

{
  return 0;
}


// SimpleJSONFixed.JSONNode$$get_IsString
// il2cpp: bool SimpleJSONFixed_JSONNode__get_IsString (SimpleJSONFixed_JSONNode_o* __this, const MethodInfo* method);
// 0x3d83500

bool_conflict
SimpleJSONFixed_JSONNode__get_IsString(SimpleJSONFixed_JSONNode_o *__this,MethodInfo *method)

{
  return 0;
}


// SimpleJSONFixed.JSONNode$$get_IsBoolean
// il2cpp: bool SimpleJSONFixed_JSONNode__get_IsBoolean (SimpleJSONFixed_JSONNode_o* __this, const MethodInfo* method);
// 0x3d83510

bool_conflict
SimpleJSONFixed_JSONNode__get_IsBoolean(SimpleJSONFixed_JSONNode_o *__this,MethodInfo *method)

{
  return 0;
}


// SimpleJSONFixed.JSONNode$$get_IsNull
// il2cpp: bool SimpleJSONFixed_JSONNode__get_IsNull (SimpleJSONFixed_JSONNode_o* __this, const MethodInfo* method);
// 0x3d83520

bool_conflict
SimpleJSONFixed_JSONNode__get_IsNull(SimpleJSONFixed_JSONNode_o *__this,MethodInfo *method)

{
  return 0;
}


// SimpleJSONFixed.JSONNode$$get_IsArray
// il2cpp: bool SimpleJSONFixed_JSONNode__get_IsArray (SimpleJSONFixed_JSONNode_o* __this, const MethodInfo* method);
// 0x3d83530

bool_conflict
SimpleJSONFixed_JSONNode__get_IsArray(SimpleJSONFixed_JSONNode_o *__this,MethodInfo *method)

{
  return 0;
}


// SimpleJSONFixed.JSONNode$$get_IsObject
// il2cpp: bool SimpleJSONFixed_JSONNode__get_IsObject (SimpleJSONFixed_JSONNode_o* __this, const MethodInfo* method);
// 0x3d83540

bool_conflict
SimpleJSONFixed_JSONNode__get_IsObject(SimpleJSONFixed_JSONNode_o *__this,MethodInfo *method)

{
  return 0;
}


// SimpleJSONFixed.JSONNode$$get_Inline
// il2cpp: bool SimpleJSONFixed_JSONNode__get_Inline (SimpleJSONFixed_JSONNode_o* __this, const MethodInfo* method);
// 0x3d83550

bool_conflict
SimpleJSONFixed_JSONNode__get_Inline(SimpleJSONFixed_JSONNode_o *__this,MethodInfo *method)

{
  return 0;
}


// SimpleJSONFixed.JSONNode$$set_Inline
// il2cpp: void SimpleJSONFixed_JSONNode__set_Inline (SimpleJSONFixed_JSONNode_o* __this, bool value, const MethodInfo* method);
// 0x3d83560

void SimpleJSONFixed_JSONNode__set_Inline
               (SimpleJSONFixed_JSONNode_o *__this,bool_conflict value,MethodInfo *method)

{
  return;
}


// SimpleJSONFixed.JSONNode$$Add
// il2cpp: void SimpleJSONFixed_JSONNode__Add (SimpleJSONFixed_JSONNode_o* __this, System_String_o* aKey, SimpleJSONFixed_JSONNode_o* aItem, const MethodInfo* method);
// 0x3d83570

void SimpleJSONFixed_JSONNode__Add
               (SimpleJSONFixed_JSONNode_o *__this,System_String_o *aKey,
               SimpleJSONFixed_JSONNode_o *aItem,MethodInfo *method)

{
  return;
}


// SimpleJSONFixed.JSONNode$$Add
// il2cpp: void SimpleJSONFixed_JSONNode__Add (SimpleJSONFixed_JSONNode_o* __this, SimpleJSONFixed_JSONNode_o* aItem, const MethodInfo* method);
// 0x3d83580

void SimpleJSONFixed_JSONNode__Add
               (SimpleJSONFixed_JSONNode_o *__this,SimpleJSONFixed_JSONNode_o *aItem,
               MethodInfo *method)

{
  Il2CppMethodPointer vtable_dispatch;
  
  if (DAT_05702682 == '\0') {
    il2cpp_init_method_metadata(&"");
    DAT_05702682 = '\x01';
  }
  vtable_dispatch = (__this->klass->vtable)._20_Add.methodPtr;
  (*vtable_dispatch)
            (__this,"",aItem,(__this->klass->vtable)._20_Add.method,vtable_dispatch)
  ;
  return;
}


// SimpleJSONFixed.JSONNode$$Remove
// il2cpp: SimpleJSONFixed_JSONNode_o* SimpleJSONFixed_JSONNode__Remove (SimpleJSONFixed_JSONNode_o* __this, System_String_o* aKey, const MethodInfo* method);
// 0x3d835e0

SimpleJSONFixed_JSONNode_o *
SimpleJSONFixed_JSONNode__Remove
          (SimpleJSONFixed_JSONNode_o *__this,System_String_o *aKey,MethodInfo *method)

{
  return (SimpleJSONFixed_JSONNode_o *)0x0;
}


// SimpleJSONFixed.JSONNode$$Remove
// il2cpp: SimpleJSONFixed_JSONNode_o* SimpleJSONFixed_JSONNode__Remove (SimpleJSONFixed_JSONNode_o* __this, int32_t aIndex, const MethodInfo* method);
// 0x3d835f0

SimpleJSONFixed_JSONNode_o *
SimpleJSONFixed_JSONNode__Remove
          (SimpleJSONFixed_JSONNode_o *__this,int32_t aIndex,MethodInfo *method)

{
  return (SimpleJSONFixed_JSONNode_o *)0x0;
}


// SimpleJSONFixed.JSONNode$$Remove
// il2cpp: SimpleJSONFixed_JSONNode_o* SimpleJSONFixed_JSONNode__Remove (SimpleJSONFixed_JSONNode_o* __this, SimpleJSONFixed_JSONNode_o* aNode, const MethodInfo* method);
// 0x3d83600

SimpleJSONFixed_JSONNode_o *
SimpleJSONFixed_JSONNode__Remove
          (SimpleJSONFixed_JSONNode_o *__this,SimpleJSONFixed_JSONNode_o *aNode,MethodInfo *method)

{
  return aNode;
}


// SimpleJSONFixed.JSONNode$$Clear
// il2cpp: void SimpleJSONFixed_JSONNode__Clear (SimpleJSONFixed_JSONNode_o* __this, const MethodInfo* method);
// 0x3d83610

void SimpleJSONFixed_JSONNode__Clear(SimpleJSONFixed_JSONNode_o *__this,MethodInfo *method)

{
  return;
}


// SimpleJSONFixed.JSONNode$$Clone
// il2cpp: SimpleJSONFixed_JSONNode_o* SimpleJSONFixed_JSONNode__Clone (SimpleJSONFixed_JSONNode_o* __this, const MethodInfo* method);
// 0x3d83620

SimpleJSONFixed_JSONNode_o *
SimpleJSONFixed_JSONNode__Clone(SimpleJSONFixed_JSONNode_o *__this,MethodInfo *method)

{
  return (SimpleJSONFixed_JSONNode_o *)0x0;
}


// SimpleJSONFixed.JSONNode$$get_Children
// il2cpp: System_Collections_Generic_IEnumerable_JSONNode__o* SimpleJSONFixed_JSONNode__get_Children (SimpleJSONFixed_JSONNode_o* __this, const MethodInfo* method);
// 0x3d83630

System_Collections_Generic_IEnumerable_JSONNode__o *
SimpleJSONFixed_JSONNode__get_Children(SimpleJSONFixed_JSONNode_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  Il2CppObject *__this_00;
  
  if (DAT_05702683 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_get_Children_d__43);
    DAT_05702683 = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_get_Children_d__43);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  *(undefined4 *)&__this_00[1].klass = 0xfffffffe;
  iVar1 = System_Environment__get_CurrentManagedThreadId((MethodInfo *)0x0);
  *(int32_t *)&__this_00[2].klass = iVar1;
  return (System_Collections_Generic_IEnumerable_JSONNode__o *)__this_00;
}


// SimpleJSONFixed.JSONNode$$get_DeepChildren
// il2cpp: System_Collections_Generic_IEnumerable_JSONNode__o* SimpleJSONFixed_JSONNode__get_DeepChildren (SimpleJSONFixed_JSONNode_o* __this, const MethodInfo* method);
// 0x3d836b0

System_Collections_Generic_IEnumerable_JSONNode__o *
SimpleJSONFixed_JSONNode__get_DeepChildren(SimpleJSONFixed_JSONNode_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  Il2CppObject *__this_00;
  
  if (DAT_05702684 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_get_DeepChildren_d__45);
    DAT_05702684 = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_get_DeepChildren_d__45);
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


// SimpleJSONFixed.JSONNode$$HasKey
// il2cpp: bool SimpleJSONFixed_JSONNode__HasKey (SimpleJSONFixed_JSONNode_o* __this, System_String_o* aKey, const MethodInfo* method);
// 0x3d83760

bool_conflict
SimpleJSONFixed_JSONNode__HasKey
          (SimpleJSONFixed_JSONNode_o *__this,System_String_o *aKey,MethodInfo *method)

{
  return 0;
}


// SimpleJSONFixed.JSONNode$$GetValueOrDefault
// il2cpp: SimpleJSONFixed_JSONNode_o* SimpleJSONFixed_JSONNode__GetValueOrDefault (SimpleJSONFixed_JSONNode_o* __this, System_String_o* aKey, SimpleJSONFixed_JSONNode_o* aDefault, const MethodInfo* method);
// 0x3d83770

SimpleJSONFixed_JSONNode_o *
SimpleJSONFixed_JSONNode__GetValueOrDefault
          (SimpleJSONFixed_JSONNode_o *__this,System_String_o *aKey,
          SimpleJSONFixed_JSONNode_o *aDefault,MethodInfo *method)

{
  return aDefault;
}


// SimpleJSONFixed.JSONNode$$ToString
// il2cpp: System_String_o* SimpleJSONFixed_JSONNode__ToString (SimpleJSONFixed_JSONNode_o* __this, const MethodInfo* method);
// 0x3d83780

System_String_o *
SimpleJSONFixed_JSONNode__ToString(SimpleJSONFixed_JSONNode_o *__this,MethodInfo *method)

{
  Il2CppMethodPointer vtable_dispatch;
  System_Text_StringBuilder_o *__this_00;
  System_String_o *pSVar1;
  undefined8 extraout_RDX;
  
  if (DAT_05702685 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_StringBuilder);
    DAT_05702685 = '\x01';
  }
  __this_00 = (System_Text_StringBuilder_o *)il2cpp_runtime_glue(TypeInfo_StringBuilder);
  System_Text_StringBuilder___ctor(__this_00,(MethodInfo *)0x0);
  (*(__this->klass->vtable)._31_unknown.methodPtr)
            (__this,__this_00,0,0,0,(__this->klass->vtable)._31_unknown.method);
  if (__this_00 != (System_Text_StringBuilder_o *)0x0) {
    vtable_dispatch = (__this_00->klass->vtable)._3_ToString.methodPtr;
    pSVar1 = (System_String_o *)
             (*vtable_dispatch)
                       (__this_00,(__this_00->klass->vtable)._3_ToString.method,extraout_RDX,
                        vtable_dispatch);
    return pSVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// SimpleJSONFixed.JSONNode$$ToString
// il2cpp: System_String_o* SimpleJSONFixed_JSONNode__ToString (SimpleJSONFixed_JSONNode_o* __this, int32_t aIndent, const MethodInfo* method);
// 0x3d83810

System_String_o *
SimpleJSONFixed_JSONNode__ToString
          (SimpleJSONFixed_JSONNode_o *__this,int32_t aIndent,MethodInfo *method)

{
  Il2CppMethodPointer vtable_dispatch;
  System_Text_StringBuilder_o *__this_00;
  System_String_o *pSVar1;
  undefined8 extraout_RDX;
  
  if (DAT_05702686 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_StringBuilder);
    DAT_05702686 = '\x01';
  }
  __this_00 = (System_Text_StringBuilder_o *)il2cpp_runtime_glue(TypeInfo_StringBuilder);
  System_Text_StringBuilder___ctor(__this_00,(MethodInfo *)0x0);
  (*(__this->klass->vtable)._31_unknown.methodPtr)
            (__this,__this_00,0,(ulong)(uint)aIndent,1,(__this->klass->vtable)._31_unknown.method);
  if (__this_00 != (System_Text_StringBuilder_o *)0x0) {
    vtable_dispatch = (__this_00->klass->vtable)._3_ToString.methodPtr;
    pSVar1 = (System_String_o *)
             (*vtable_dispatch)
                       (__this_00,(__this_00->klass->vtable)._3_ToString.method,extraout_RDX,
                        vtable_dispatch);
    return pSVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// SimpleJSONFixed.JSONNode$$get_Linq
// il2cpp: System_Collections_Generic_IEnumerable_KeyValuePair_string__JSONNode___o* SimpleJSONFixed_JSONNode__get_Linq (SimpleJSONFixed_JSONNode_o* __this, const MethodInfo* method);
// 0x3d838a0

System_Collections_Generic_IEnumerable_KeyValuePair_string__JSONNode___o *
SimpleJSONFixed_JSONNode__get_Linq(SimpleJSONFixed_JSONNode_o *__this,MethodInfo *method)

{
  undefined1 auVar1 [16];
  
  if (DAT_05702687 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_LinqEnumerator);
    DAT_05702687 = '\x01';
  }
  auVar1 = il2cpp_runtime_glue(TypeInfo_LinqEnumerator);
  SimpleJSONFixed_JSONNode_LinqEnumerator___ctor(auVar1._0_8_,__this,auVar1._8_8_);
  return (System_Collections_Generic_IEnumerable_KeyValuePair_string__JSONNode___o *)auVar1._0_8_;
}


// SimpleJSONFixed.JSONNode$$get_Keys
// il2cpp: SimpleJSONFixed_JSONNode_KeyEnumerator_o SimpleJSONFixed_JSONNode__get_Keys (SimpleJSONFixed_JSONNode_o* __this, const MethodInfo* method);
// 0x3d83a60

SimpleJSONFixed_JSONNode_KeyEnumerator_o *
SimpleJSONFixed_JSONNode__get_Keys
          (SimpleJSONFixed_JSONNode_KeyEnumerator_o *__return_storage_ptr__,
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
  *(undefined4 *)&(__return_storage_ptr__->fields).m_Enumerator.fields.m_Array.fields._list =
       local_20;
  *(undefined4 *)
   ((long)&(__return_storage_ptr__->fields).m_Enumerator.fields.m_Array.fields._list + 4) =
       uStack_1c;
  (__return_storage_ptr__->fields).m_Enumerator.fields.m_Array.fields._index = iStack_18;
  (__return_storage_ptr__->fields).m_Enumerator.fields.m_Array.fields._version = iStack_14;
  *(undefined4 *)
   &(__return_storage_ptr__->fields).m_Enumerator.fields.m_Object.fields._current.fields.value =
       local_30;
  *(undefined4 *)
   ((long)&(__return_storage_ptr__->fields).m_Enumerator.fields.m_Object.fields._current.fields.
           value + 4) = uStack_2c;
  (__return_storage_ptr__->fields).m_Enumerator.fields.m_Object.fields._getEnumeratorRetType =
       iStack_28;
  *(undefined4 *)&(__return_storage_ptr__->fields).m_Enumerator.fields.m_Object.fields.field_0x24 =
       uStack_24;
  (__return_storage_ptr__->fields).m_Enumerator.fields.m_Object.fields._version = local_40;
  (__return_storage_ptr__->fields).m_Enumerator.fields.m_Object.fields._index = iStack_3c;
  *(undefined4 *)
   &(__return_storage_ptr__->fields).m_Enumerator.fields.m_Object.fields._current.fields.key =
       uStack_38;
  *(undefined4 *)
   ((long)&(__return_storage_ptr__->fields).m_Enumerator.fields.m_Object.fields._current.fields.key
   + 4) = uStack_34;
  (__return_storage_ptr__->fields).m_Enumerator.fields.type = local_50;
  *(undefined4 *)&(__return_storage_ptr__->fields).m_Enumerator.fields.field_0x4 = uStack_4c;
  *(undefined4 *)&(__return_storage_ptr__->fields).m_Enumerator.fields.m_Object.fields._dictionary =
       uStack_48;
  *(undefined4 *)
   ((long)&(__return_storage_ptr__->fields).m_Enumerator.fields.m_Object.fields._dictionary + 4) =
       uStack_44;
  il2cpp_runtime_glue(&(__return_storage_ptr__->fields).m_Enumerator.fields.m_Object,0);
  return __return_storage_ptr__;
}


// SimpleJSONFixed.JSONNode$$get_Values
// il2cpp: SimpleJSONFixed_JSONNode_ValueEnumerator_o SimpleJSONFixed_JSONNode__get_Values (SimpleJSONFixed_JSONNode_o* __this, const MethodInfo* method);
// 0x3d83ac0

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
  *(undefined4 *)&(__return_storage_ptr__->fields).m_Enumerator.fields.m_Array.fields._list =
       local_20;
  *(undefined4 *)
   ((long)&(__return_storage_ptr__->fields).m_Enumerator.fields.m_Array.fields._list + 4) =
       uStack_1c;
  (__return_storage_ptr__->fields).m_Enumerator.fields.m_Array.fields._index = iStack_18;
  (__return_storage_ptr__->fields).m_Enumerator.fields.m_Array.fields._version = iStack_14;
  *(undefined4 *)
   &(__return_storage_ptr__->fields).m_Enumerator.fields.m_Object.fields._current.fields.value =
       local_30;
  *(undefined4 *)
   ((long)&(__return_storage_ptr__->fields).m_Enumerator.fields.m_Object.fields._current.fields.
           value + 4) = uStack_2c;
  (__return_storage_ptr__->fields).m_Enumerator.fields.m_Object.fields._getEnumeratorRetType =
       iStack_28;
  *(undefined4 *)&(__return_storage_ptr__->fields).m_Enumerator.fields.m_Object.fields.field_0x24 =
       uStack_24;
  (__return_storage_ptr__->fields).m_Enumerator.fields.m_Object.fields._version = local_40;
  (__return_storage_ptr__->fields).m_Enumerator.fields.m_Object.fields._index = iStack_3c;
  *(undefined4 *)
   &(__return_storage_ptr__->fields).m_Enumerator.fields.m_Object.fields._current.fields.key =
       uStack_38;
  *(undefined4 *)
   ((long)&(__return_storage_ptr__->fields).m_Enumerator.fields.m_Object.fields._current.fields.key
   + 4) = uStack_34;
  (__return_storage_ptr__->fields).m_Enumerator.fields.type = local_50;
  *(undefined4 *)&(__return_storage_ptr__->fields).m_Enumerator.fields.field_0x4 = uStack_4c;
  *(undefined4 *)&(__return_storage_ptr__->fields).m_Enumerator.fields.m_Object.fields._dictionary =
       uStack_48;
  *(undefined4 *)
   ((long)&(__return_storage_ptr__->fields).m_Enumerator.fields.m_Object.fields._dictionary + 4) =
       uStack_44;
  il2cpp_runtime_glue(&(__return_storage_ptr__->fields).m_Enumerator.fields.m_Object,0);
  return __return_storage_ptr__;
}


// SimpleJSONFixed.JSONNode$$get_AsDouble
// il2cpp: double SimpleJSONFixed_JSONNode__get_AsDouble (SimpleJSONFixed_JSONNode_o* __this, const MethodInfo* method);
// 0x3d83b20

double SimpleJSONFixed_JSONNode__get_AsDouble(SimpleJSONFixed_JSONNode_o *__this,MethodInfo *method)

{
  bool_conflict bVar1;
  System_String_o *s;
  System_Globalization_CultureInfo_o *provider;
  double local_10;
  
  if (DAT_05702688 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CultureInfo);
    DAT_05702688 = '\x01';
  }
  local_10 = 0.0;
  s = (System_String_o *)
      (*(__this->klass->vtable)._9_get_Value.methodPtr)
                (__this,(__this->klass->vtable)._9_get_Value.method);
  if (*(int *)(TypeInfo_CultureInfo + 0xe4) == 0) {
    il2cpp_init_class();
  }
  provider = System_Globalization_CultureInfo__get_InvariantCulture((MethodInfo *)0x0);
  bVar1 = System_Double__TryParse
                    (s,0xa7,(System_IFormatProvider_o *)provider,&local_10,(MethodInfo *)0x0);
  if ((char)bVar1 == '\0') {
    return 0.0;
  }
  return local_10;
}


// SimpleJSONFixed.JSONNode$$set_AsDouble
// il2cpp: void SimpleJSONFixed_JSONNode__set_AsDouble (SimpleJSONFixed_JSONNode_o* __this, double value, const MethodInfo* method);
// 0x3d83bc0

void SimpleJSONFixed_JSONNode__set_AsDouble
               (SimpleJSONFixed_JSONNode_o *__this,double value,MethodInfo *method)

{
  System_Globalization_CultureInfo_o *method_00;
  System_String_o *pSVar1;
  double __this_00;
  System_IFormatProvider_c *local_10;
  
  local_10 = (System_IFormatProvider_c *)value;
  if (DAT_05702689 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CultureInfo);
    DAT_05702689 = '\x01';
  }
  if (*(int *)(TypeInfo_CultureInfo + 0xe4) == 0) {
    il2cpp_init_class();
  }
  method_00 = System_Globalization_CultureInfo__get_InvariantCulture((MethodInfo *)0x0);
  pSVar1 = System_Double__ToString
                     (__this_00,(System_IFormatProvider_o *)&local_10,(MethodInfo *)method_00);
  (*(__this->klass->vtable)._10_set_Value.methodPtr)
            (__this,pSVar1,(__this->klass->vtable)._10_set_Value.method);
  return;
}


// SimpleJSONFixed.JSONNode$$get_AsInt
// il2cpp: int32_t SimpleJSONFixed_JSONNode__get_AsInt (SimpleJSONFixed_JSONNode_o* __this, const MethodInfo* method);
// 0x3d83c40

int32_t SimpleJSONFixed_JSONNode__get_AsInt(SimpleJSONFixed_JSONNode_o *__this,MethodInfo *method)

{
  double dVar1;
  
  dVar1 = (double)(*(__this->klass->vtable)._33_get_AsDouble.methodPtr)
                            (__this,(__this->klass->vtable)._33_get_AsDouble.method);
  return (int)dVar1;
}


// SimpleJSONFixed.JSONNode$$set_AsInt
// il2cpp: void SimpleJSONFixed_JSONNode__set_AsInt (SimpleJSONFixed_JSONNode_o* __this, int32_t value, const MethodInfo* method);
// 0x3d83c60

void SimpleJSONFixed_JSONNode__set_AsInt
               (SimpleJSONFixed_JSONNode_o *__this,int32_t value,MethodInfo *method)

{
  Il2CppMethodPointer vtable_dispatch;
  
  vtable_dispatch = (__this->klass->vtable)._34_set_AsDouble.methodPtr;
  (*vtable_dispatch)
            ((double)value,__this,(__this->klass->vtable)._34_set_AsDouble.method,method,
             vtable_dispatch);
  return;
}


// SimpleJSONFixed.JSONNode$$get_AsFloat
// il2cpp: float SimpleJSONFixed_JSONNode__get_AsFloat (SimpleJSONFixed_JSONNode_o* __this, const MethodInfo* method);
// 0x3d83c80

float SimpleJSONFixed_JSONNode__get_AsFloat(SimpleJSONFixed_JSONNode_o *__this,MethodInfo *method)

{
  double dVar1;
  
  dVar1 = (double)(*(__this->klass->vtable)._33_get_AsDouble.methodPtr)
                            (__this,(__this->klass->vtable)._33_get_AsDouble.method);
  return (float)dVar1;
}


// SimpleJSONFixed.JSONNode$$set_AsFloat
// il2cpp: void SimpleJSONFixed_JSONNode__set_AsFloat (SimpleJSONFixed_JSONNode_o* __this, float value, const MethodInfo* method);
// 0x3d83ca0

void SimpleJSONFixed_JSONNode__set_AsFloat
               (SimpleJSONFixed_JSONNode_o *__this,float value,MethodInfo *method)

{
  Il2CppMethodPointer vtable_dispatch;
  undefined8 in_RDX;
  
  vtable_dispatch = (__this->klass->vtable)._34_set_AsDouble.methodPtr;
  (*vtable_dispatch)
            ((double)value,__this,(__this->klass->vtable)._34_set_AsDouble.method,in_RDX,
             vtable_dispatch);
  return;
}


// SimpleJSONFixed.JSONNode$$get_AsBool
// il2cpp: bool SimpleJSONFixed_JSONNode__get_AsBool (SimpleJSONFixed_JSONNode_o* __this, const MethodInfo* method);
// 0x3d83cc0

bool_conflict
SimpleJSONFixed_JSONNode__get_AsBool(SimpleJSONFixed_JSONNode_o *__this,MethodInfo *method)

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
  if (*(int *)(DAT_05711048 + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar1 = System_Boolean__TryParse(pSVar3,(bool_conflict *)((long)&uStack_18 + 7),(MethodInfo *)0x0)
  ;
  if ((char)bVar1 != '\0') {
    return CONCAT31((int3)((uint)bVar1 >> 8),uStack_18._7_1_ != '\0');
  }
  pSVar3 = (System_String_o *)(*(__this->klass->vtable)._9_get_Value.methodPtr)(__this);
  uVar2 = System_String__IsNullOrEmpty(pSVar3,(MethodInfo *)0x0);
  return uVar2 ^ 1;
}


// SimpleJSONFixed.JSONNode$$set_AsBool
// il2cpp: void SimpleJSONFixed_JSONNode__set_AsBool (SimpleJSONFixed_JSONNode_o* __this, bool value, const MethodInfo* method);
// 0x3d83d50

void SimpleJSONFixed_JSONNode__set_AsBool
               (SimpleJSONFixed_JSONNode_o *__this,bool_conflict value,MethodInfo *method)

{
  Il2CppMethodPointer vtable_dispatch;
  undefined8 *puVar1;
  
  if (DAT_0570268a == '\0') {
    il2cpp_init_method_metadata(&"false");
    il2cpp_init_method_metadata(&"true");
    DAT_0570268a = '\x01';
  }
  if (__this != (SimpleJSONFixed_JSONNode_o *)0x0) {
    if ((char)value == '\0') {
      puVar1 = &"false";
    }
    else {
      puVar1 = &"true";
    }
    vtable_dispatch = (__this->klass->vtable)._10_set_Value.methodPtr;
    (*vtable_dispatch)
              (__this,*puVar1,(__this->klass->vtable)._10_set_Value.method,vtable_dispatch);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// SimpleJSONFixed.JSONNode$$get_AsLong
// il2cpp: int64_t SimpleJSONFixed_JSONNode__get_AsLong (SimpleJSONFixed_JSONNode_o* __this, const MethodInfo* method);
// 0x3d83dc0

int64_t SimpleJSONFixed_JSONNode__get_AsLong(SimpleJSONFixed_JSONNode_o *__this,MethodInfo *method)

{
  bool_conflict bVar1;
  System_String_o *s;
  int64_t iVar2;
  int64_t local_10;
  
  local_10 = 0;
  s = (System_String_o *)
      (*(__this->klass->vtable)._9_get_Value.methodPtr)
                (__this,(__this->klass->vtable)._9_get_Value.method);
  bVar1 = System_Int64__TryParse(s,&local_10,(MethodInfo *)0x0);
  iVar2 = 0;
  if ((char)bVar1 != '\0') {
    iVar2 = local_10;
  }
  return iVar2;
}


// SimpleJSONFixed.JSONNode$$set_AsLong
// il2cpp: void SimpleJSONFixed_JSONNode__set_AsLong (SimpleJSONFixed_JSONNode_o* __this, int64_t value, const MethodInfo* method);
// 0x3d83e10

void SimpleJSONFixed_JSONNode__set_AsLong
               (SimpleJSONFixed_JSONNode_o *__this,int64_t value,MethodInfo *method)

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
// 0x3d83e50

uint64_t SimpleJSONFixed_JSONNode__get_AsULong
                   (SimpleJSONFixed_JSONNode_o *__this,MethodInfo *method)

{
  bool_conflict bVar1;
  System_String_o *s;
  uint64_t uVar2;
  uint64_t local_10;
  
  local_10 = 0;
  s = (System_String_o *)
      (*(__this->klass->vtable)._9_get_Value.methodPtr)
                (__this,(__this->klass->vtable)._9_get_Value.method);
  bVar1 = System_UInt64__TryParse(s,&local_10,(MethodInfo *)0x0);
  uVar2 = 0;
  if ((char)bVar1 != '\0') {
    uVar2 = local_10;
  }
  return uVar2;
}


// SimpleJSONFixed.JSONNode$$set_AsULong
// il2cpp: void SimpleJSONFixed_JSONNode__set_AsULong (SimpleJSONFixed_JSONNode_o* __this, uint64_t value, const MethodInfo* method);
// 0x3d83ea0

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
// 0x3d83ee0

SimpleJSONFixed_JSONArray_o *
SimpleJSONFixed_JSONNode__get_AsArray(SimpleJSONFixed_JSONNode_o *__this,MethodInfo *method)

{
  byte bVar1;
  SimpleJSONFixed_JSONArray_o *pSVar2;
  
  if (DAT_0570268b == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_JSONArray);
    DAT_0570268b = '\x01';
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
// 0x3d83f40

SimpleJSONFixed_JSONObject_o *
SimpleJSONFixed_JSONNode__get_AsObject(SimpleJSONFixed_JSONNode_o *__this,MethodInfo *method)

{
  byte bVar1;
  SimpleJSONFixed_JSONObject_o *pSVar2;
  
  if (DAT_0570268c == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_JSONObject);
    DAT_0570268c = '\x01';
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
// 0x3d83fa0

SimpleJSONFixed_JSONNode_o *
SimpleJSONFixed_JSONNode__op_Implicit(System_String_o *s,MethodInfo *method)

{
  Il2CppObject *__this;
  SimpleJSONFixed_JSONNode_o *pSVar1;
  MethodInfo *method_00;
  
  if (DAT_0570268d == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_JSONNull);
    il2cpp_init_method_metadata(&TypeInfo_JSONString);
    DAT_0570268d = '\x01';
  }
  if (s != (System_String_o *)0x0) {
    __this = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_JSONString);
    if (DAT_057026d7 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_JSONNode);
      DAT_057026d7 = '\x01';
    }
    if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
      il2cpp_init_class();
    }
    System_Object___ctor(__this,(MethodInfo *)0x0);
    __this[1].klass = (Il2CppClass *)s;
    il2cpp_runtime_glue(__this + 1,s);
    return (SimpleJSONFixed_JSONNode_o *)__this;
  }
  if (*(int *)((long)&TypeInfo_JSONNull[2].parameters + 4) != 0) {
    pSVar1 = (SimpleJSONFixed_JSONNode_o *)SimpleJSONFixed_JSONNull__CreateOrGet(TypeInfo_JSONNull);
    return pSVar1;
  }
  method_00 = TypeInfo_JSONNull;
  il2cpp_init_class();
  pSVar1 = (SimpleJSONFixed_JSONNode_o *)SimpleJSONFixed_JSONNull__CreateOrGet(method_00);
  return pSVar1;
}


// SimpleJSONFixed.JSONNode$$op_Implicit
// il2cpp: System_String_o* SimpleJSONFixed_JSONNode__op_Implicit (SimpleJSONFixed_JSONNode_o* d, const MethodInfo* method);
// 0x3d841b0

System_String_o *
SimpleJSONFixed_JSONNode__op_Implicit(SimpleJSONFixed_JSONNode_o *d,MethodInfo *method)

{
  bool_conflict bVar1;
  System_String_o *pSVar2;
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  
  if (DAT_0570268e == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_JSONNode);
    DAT_0570268e = '\x01';
    in_RDX = extraout_RDX;
  }
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_init_class();
    in_RDX = extraout_RDX_00;
  }
  bVar1 = SimpleJSONFixed_JSONNode__op_Equality(d,(Il2CppObject *)0x0,in_RDX);
  if ((char)bVar1 != '\0') {
    return (System_String_o *)0x0;
  }
  if (d != (SimpleJSONFixed_JSONNode_o *)0x0) {
    pSVar2 = (System_String_o *)
             (*(d->klass->vtable)._9_get_Value.methodPtr)(d,(d->klass->vtable)._9_get_Value.method);
    return pSVar2;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// SimpleJSONFixed.JSONNode$$op_Implicit
// il2cpp: SimpleJSONFixed_JSONNode_o* SimpleJSONFixed_JSONNode__op_Implicit (double n, const MethodInfo* method);
// 0x3d84380

SimpleJSONFixed_JSONNode_o * SimpleJSONFixed_JSONNode__op_Implicit(double n,MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (DAT_0570268f == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_JSONNumber);
    DAT_0570268f = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_JSONNumber);
  if (DAT_057026de == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_JSONNode);
    DAT_057026de = '\x01';
  }
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_init_class();
  }
  System_Object___ctor(__this,(MethodInfo *)0x0);
  __this[1].klass = (Il2CppClass *)n;
  return (SimpleJSONFixed_JSONNode_o *)__this;
}


// SimpleJSONFixed.JSONNode$$op_Implicit
// il2cpp: double SimpleJSONFixed_JSONNode__op_Implicit (SimpleJSONFixed_JSONNode_o* d, const MethodInfo* method);
// 0x3d84470

double SimpleJSONFixed_JSONNode__op_Implicit(SimpleJSONFixed_JSONNode_o *d,MethodInfo *method)

{
  double dVar1;
  bool_conflict bVar2;
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  
  if (DAT_05702690 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_JSONNode);
    DAT_05702690 = '\x01';
    in_RDX = extraout_RDX;
  }
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_init_class();
    in_RDX = extraout_RDX_00;
  }
  bVar2 = SimpleJSONFixed_JSONNode__op_Equality(d,(Il2CppObject *)0x0,in_RDX);
  if ((char)bVar2 != '\0') {
    return 0.0;
  }
  if (d != (SimpleJSONFixed_JSONNode_o *)0x0) {
    dVar1 = (double)(*(d->klass->vtable)._33_get_AsDouble.methodPtr)
                              (d,(d->klass->vtable)._33_get_AsDouble.method);
    return dVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// SimpleJSONFixed.JSONNode$$op_Implicit
// il2cpp: SimpleJSONFixed_JSONNode_o* SimpleJSONFixed_JSONNode__op_Implicit (float n, const MethodInfo* method);
// 0x3d844e0

SimpleJSONFixed_JSONNode_o * SimpleJSONFixed_JSONNode__op_Implicit(float n,MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (DAT_05702691 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_JSONNumber);
    DAT_05702691 = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_JSONNumber);
  if (DAT_057026de == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_JSONNode);
    DAT_057026de = '\x01';
  }
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_init_class();
  }
  System_Object___ctor(__this,(MethodInfo *)0x0);
  __this[1].klass = (Il2CppClass *)(double)n;
  return (SimpleJSONFixed_JSONNode_o *)__this;
}


// SimpleJSONFixed.JSONNode$$op_Implicit
// il2cpp: float SimpleJSONFixed_JSONNode__op_Implicit (SimpleJSONFixed_JSONNode_o* d, const MethodInfo* method);
// 0x3d84580

float SimpleJSONFixed_JSONNode__op_Implicit(SimpleJSONFixed_JSONNode_o *d,MethodInfo *method)

{
  bool_conflict bVar1;
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  float fVar2;
  
  if (DAT_05702692 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_JSONNode);
    DAT_05702692 = '\x01';
    in_RDX = extraout_RDX;
  }
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_init_class();
    in_RDX = extraout_RDX_00;
  }
  bVar1 = SimpleJSONFixed_JSONNode__op_Equality(d,(Il2CppObject *)0x0,in_RDX);
  if ((char)bVar1 != '\0') {
    return 0.0;
  }
  if (d != (SimpleJSONFixed_JSONNode_o *)0x0) {
    fVar2 = (float)(*(d->klass->vtable)._37_get_AsFloat.methodPtr)
                             (d,(d->klass->vtable)._37_get_AsFloat.method);
    return fVar2;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// SimpleJSONFixed.JSONNode$$op_Implicit
// il2cpp: SimpleJSONFixed_JSONNode_o* SimpleJSONFixed_JSONNode__op_Implicit (int32_t n, const MethodInfo* method);
// 0x3d845f0

SimpleJSONFixed_JSONNode_o * SimpleJSONFixed_JSONNode__op_Implicit(int32_t n,MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (DAT_05702693 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_JSONNumber);
    DAT_05702693 = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_JSONNumber);
  if (DAT_057026de == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_JSONNode);
    DAT_057026de = '\x01';
  }
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_init_class();
  }
  System_Object___ctor(__this,(MethodInfo *)0x0);
  __this[1].klass = (Il2CppClass *)(double)n;
  return (SimpleJSONFixed_JSONNode_o *)__this;
}


// SimpleJSONFixed.JSONNode$$op_Implicit
// il2cpp: int32_t SimpleJSONFixed_JSONNode__op_Implicit (SimpleJSONFixed_JSONNode_o* d, const MethodInfo* method);
// 0x3d84680

int32_t SimpleJSONFixed_JSONNode__op_Implicit(SimpleJSONFixed_JSONNode_o *d,MethodInfo *method)

{
  bool_conflict bVar1;
  int32_t iVar2;
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  
  if (DAT_05702694 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_JSONNode);
    DAT_05702694 = '\x01';
    in_RDX = extraout_RDX;
  }
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_init_class();
    in_RDX = extraout_RDX_00;
  }
  bVar1 = SimpleJSONFixed_JSONNode__op_Equality(d,(Il2CppObject *)0x0,in_RDX);
  if ((char)bVar1 != '\0') {
    return 0;
  }
  if (d != (SimpleJSONFixed_JSONNode_o *)0x0) {
    iVar2 = (*(d->klass->vtable)._35_get_AsInt.methodPtr)(d,(d->klass->vtable)._35_get_AsInt.method)
    ;
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// SimpleJSONFixed.JSONNode$$op_Implicit
// il2cpp: SimpleJSONFixed_JSONNode_o* SimpleJSONFixed_JSONNode__op_Implicit (int64_t n, const MethodInfo* method);
// 0x3d846f0

SimpleJSONFixed_JSONNode_o * SimpleJSONFixed_JSONNode__op_Implicit(int64_t n,MethodInfo *method)

{
  char cVar1;
  int iVar2;
  Il2CppClass *pIVar3;
  Il2CppObject *__this;
  int64_t local_20;
  
  local_20 = n;
  if (DAT_05702695 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_JSONNode);
    il2cpp_init_method_metadata(&TypeInfo_JSONNumber);
    il2cpp_init_method_metadata(&TypeInfo_JSONString);
    DAT_05702695 = '\x01';
    iVar2 = *(int *)(TypeInfo_JSONNode + 0xe4);
  }
  else {
    iVar2 = *(int *)(TypeInfo_JSONNode + 0xe4);
  }
  if (iVar2 == 0) {
    il2cpp_init_class();
    cVar1 = *(char *)(*(long *)(TypeInfo_JSONNode + 0xb8) + 1);
  }
  else {
    cVar1 = *(char *)(*(long *)(TypeInfo_JSONNode + 0xb8) + 1);
  }
  if (cVar1 == '\0') {
    __this = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_JSONNumber);
    if (DAT_057026de == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_JSONNode);
      DAT_057026de = '\x01';
    }
    if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
      il2cpp_init_class();
    }
    System_Object___ctor(__this,(MethodInfo *)0x0);
    __this[1].klass = (Il2CppClass *)(double)n;
  }
  else {
    pIVar3 = (Il2CppClass *)System_Int64__ToString((int64_t)&local_20,(MethodInfo *)0x0);
    __this = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_JSONString);
    if (DAT_057026d7 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_JSONNode);
      DAT_057026d7 = '\x01';
    }
    if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
      il2cpp_init_class();
    }
    System_Object___ctor(__this,(MethodInfo *)0x0);
    __this[1].klass = pIVar3;
    il2cpp_runtime_glue(__this + 1,pIVar3);
  }
  return (SimpleJSONFixed_JSONNode_o *)__this;
}


// SimpleJSONFixed.JSONNode$$op_Implicit
// il2cpp: int64_t SimpleJSONFixed_JSONNode__op_Implicit (SimpleJSONFixed_JSONNode_o* d, const MethodInfo* method);
// 0x3d84870

int64_t SimpleJSONFixed_JSONNode__op_Implicit(SimpleJSONFixed_JSONNode_o *d,MethodInfo *method)

{
  bool_conflict bVar1;
  int64_t iVar2;
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  
  if (DAT_05702696 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_JSONNode);
    DAT_05702696 = '\x01';
    in_RDX = extraout_RDX;
  }
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_init_class();
    in_RDX = extraout_RDX_00;
  }
  bVar1 = SimpleJSONFixed_JSONNode__op_Equality(d,(Il2CppObject *)0x0,in_RDX);
  if ((char)bVar1 != '\0') {
    return 0;
  }
  if (d != (SimpleJSONFixed_JSONNode_o *)0x0) {
    iVar2 = (*(d->klass->vtable)._41_get_AsLong.methodPtr)
                      (d,(d->klass->vtable)._41_get_AsLong.method);
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// SimpleJSONFixed.JSONNode$$op_Implicit
// il2cpp: SimpleJSONFixed_JSONNode_o* SimpleJSONFixed_JSONNode__op_Implicit (uint64_t n, const MethodInfo* method);
// 0x3d848e0

SimpleJSONFixed_JSONNode_o * SimpleJSONFixed_JSONNode__op_Implicit(uint64_t n,MethodInfo *method)

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
  if (DAT_05702697 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_JSONNode);
    il2cpp_init_method_metadata(&TypeInfo_JSONNumber);
    il2cpp_init_method_metadata(&TypeInfo_JSONString);
    DAT_05702697 = '\x01';
    iVar2 = *(int *)(TypeInfo_JSONNode + 0xe4);
  }
  else {
    iVar2 = *(int *)(TypeInfo_JSONNode + 0xe4);
  }
  if (iVar2 == 0) {
    il2cpp_init_class();
    cVar1 = *(char *)(*(long *)(TypeInfo_JSONNode + 0xb8) + 1);
  }
  else {
    cVar1 = *(char *)(*(long *)(TypeInfo_JSONNode + 0xb8) + 1);
  }
  if (cVar1 == '\0') {
    __this = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_JSONNumber);
    auVar5._8_4_ = (int)(n >> 0x20);
    auVar5._0_8_ = n;
    auVar5._12_4_ = 0x45300000;
    dVar4 = (double)CONCAT44(0x43300000,(int)n) - 4503599627370496.0;
    dVar6 = auVar5._8_8_ - 1.9342813113834067e+25;
    if (DAT_057026de == '\0') {
      local_28 = dVar4;
      dStack_20 = dVar6;
      il2cpp_init_method_metadata(&TypeInfo_JSONNode);
      DAT_057026de = '\x01';
      dVar4 = local_28;
    }
    if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
      il2cpp_init_class();
    }
    System_Object___ctor(__this,(MethodInfo *)0x0);
    __this[1].klass = (Il2CppClass *)(dVar6 + dVar4);
  }
  else {
    pIVar3 = (Il2CppClass *)System_UInt64__ToString((uint64_t)&local_30,(MethodInfo *)0x0);
    __this = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_JSONString);
    if (DAT_057026d7 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_JSONNode);
      DAT_057026d7 = '\x01';
    }
    if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
      il2cpp_init_class();
    }
    System_Object___ctor(__this,(MethodInfo *)0x0);
    __this[1].klass = pIVar3;
    il2cpp_runtime_glue(__this + 1,pIVar3);
  }
  return (SimpleJSONFixed_JSONNode_o *)__this;
}


// SimpleJSONFixed.JSONNode$$op_Implicit
// il2cpp: uint64_t SimpleJSONFixed_JSONNode__op_Implicit (SimpleJSONFixed_JSONNode_o* d, const MethodInfo* method);
// 0x3d84a90

uint64_t SimpleJSONFixed_JSONNode__op_Implicit(SimpleJSONFixed_JSONNode_o *d,MethodInfo *method)

{
  bool_conflict bVar1;
  uint64_t uVar2;
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  
  if (DAT_05702698 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_JSONNode);
    DAT_05702698 = '\x01';
    in_RDX = extraout_RDX;
  }
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_init_class();
    in_RDX = extraout_RDX_00;
  }
  bVar1 = SimpleJSONFixed_JSONNode__op_Equality(d,(Il2CppObject *)0x0,in_RDX);
  if ((char)bVar1 != '\0') {
    return 0;
  }
  if (d != (SimpleJSONFixed_JSONNode_o *)0x0) {
    uVar2 = (*(d->klass->vtable)._43_get_AsULong.methodPtr)
                      (d,(d->klass->vtable)._43_get_AsULong.method);
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// SimpleJSONFixed.JSONNode$$op_Implicit
// il2cpp: SimpleJSONFixed_JSONNode_o* SimpleJSONFixed_JSONNode__op_Implicit (bool b, const MethodInfo* method);
// 0x3d84b00

SimpleJSONFixed_JSONNode_o *
SimpleJSONFixed_JSONNode__op_Implicit(bool_conflict b,MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (DAT_05702699 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_JSONBool);
    DAT_05702699 = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_JSONBool);
  if (DAT_057026e3 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_JSONNode);
    DAT_057026e3 = '\x01';
  }
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_init_class();
  }
  System_Object___ctor(__this,(MethodInfo *)0x0);
  *(char *)&__this[1].klass = (char)b;
  return (SimpleJSONFixed_JSONNode_o *)__this;
}


// SimpleJSONFixed.JSONNode$$op_Implicit
// il2cpp: bool SimpleJSONFixed_JSONNode__op_Implicit (SimpleJSONFixed_JSONNode_o* d, const MethodInfo* method);
// 0x3d84be0

bool_conflict
SimpleJSONFixed_JSONNode__op_Implicit(SimpleJSONFixed_JSONNode_o *d,MethodInfo *method)

{
  bool_conflict bVar1;
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  
  if (DAT_0570269a == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_JSONNode);
    DAT_0570269a = '\x01';
    in_RDX = extraout_RDX;
  }
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_init_class();
    in_RDX = extraout_RDX_00;
  }
  bVar1 = SimpleJSONFixed_JSONNode__op_Equality(d,(Il2CppObject *)0x0,in_RDX);
  if ((char)bVar1 != '\0') {
    return 0;
  }
  if (d != (SimpleJSONFixed_JSONNode_o *)0x0) {
    bVar1 = (*(d->klass->vtable)._39_get_AsBool.methodPtr)
                      (d,(d->klass->vtable)._39_get_AsBool.method);
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// SimpleJSONFixed.JSONNode$$op_Implicit
// il2cpp: SimpleJSONFixed_JSONNode_o* SimpleJSONFixed_JSONNode__op_Implicit (System_Collections_Generic_KeyValuePair_string__JSONNode__o aKeyValue, const MethodInfo* method);
// 0x3d84c50

SimpleJSONFixed_JSONNode_o *
SimpleJSONFixed_JSONNode__op_Implicit
          (System_Collections_Generic_KeyValuePair_string__JSONNode__o aKeyValue,MethodInfo *method)

{
  if (DAT_0570269b == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_JSONNode_get_Value);
    DAT_0570269b = '\x01';
  }
  return aKeyValue.fields.value;
}


// SimpleJSONFixed.JSONNode$$op_Equality
// il2cpp: bool SimpleJSONFixed_JSONNode__op_Equality (SimpleJSONFixed_JSONNode_o* a, Il2CppObject* b, const MethodInfo* method);
// 0x3d84220

bool_conflict
SimpleJSONFixed_JSONNode__op_Equality
          (SimpleJSONFixed_JSONNode_o *a,Il2CppObject *b,MethodInfo *method)

{
  byte bVar1;
  byte bVar2;
  Il2CppClass **ppIVar3;
  Il2CppClass *pIVar4;
  Il2CppMethodPointer vtable_dispatch;
  bool_conflict bVar5;
  undefined8 in_RAX;
  Il2CppClass *pIVar6;
  bool bVar7;
  bool bVar8;
  
  if (DAT_0570269c == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_JSONLazyCreator);
    in_RAX = il2cpp_init_method_metadata(&TypeInfo_JSONNull);
    DAT_0570269c = '\x01';
  }
  if ((Il2CppObject *)a == b) {
    return (bool_conflict)CONCAT71((int7)((ulong)in_RAX >> 8),1);
  }
  bVar7 = true;
  pIVar6 = (Il2CppClass *)&TypeInfo_JSONNull;
  if (a != (SimpleJSONFixed_JSONNode_o *)0x0) {
    bVar1 = (TypeInfo_JSONNull->_2).naturalAligment;
    if ((a->klass->_2).naturalAligment < bVar1) {
      pIVar6 = (Il2CppClass *)0x0;
    }
    else {
      ppIVar3 = (a->klass->_2).typeHierarchy;
      pIVar6 = (Il2CppClass *)
               CONCAT71((int7)((ulong)ppIVar3 >> 8),ppIVar3[(ulong)bVar1 - 1] == TypeInfo_JSONNull);
    }
    if ((a != (SimpleJSONFixed_JSONNode_o *)0x0) && ((char)pIVar6 == '\0')) {
      bVar1 = (TypeInfo_JSONLazyCreator->_2).naturalAligment;
      pIVar6 = TypeInfo_JSONLazyCreator;
      if ((a->klass->_2).naturalAligment < bVar1) {
        bVar7 = false;
      }
      else {
        bVar7 = (a->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_JSONLazyCreator;
      }
    }
  }
  bVar8 = true;
  if (b != (Il2CppObject *)0x0) {
    bVar8 = true;
    pIVar4 = b->klass;
    bVar1 = (pIVar4->_2).naturalAligment;
    pIVar6 = (Il2CppClass *)CONCAT71((int7)((ulong)pIVar6 >> 8),bVar1);
    bVar2 = (TypeInfo_JSONNull->_2).naturalAligment;
    if ((bVar1 < bVar2) || ((pIVar4->_2).typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_JSONNull)) {
      bVar2 = (TypeInfo_JSONLazyCreator->_2).naturalAligment;
      bVar8 = false;
      if (bVar2 <= bVar1) {
        pIVar6 = (Il2CppClass *)(pIVar4->_2).typeHierarchy;
        bVar8 = *(Il2CppClass **)((long)pIVar6 + (ulong)bVar2 * 8 + -8) == TypeInfo_JSONLazyCreator;
      }
    }
  }
  if (!bVar7 && !(bool)(bVar8 & bVar7)) {
    if (a != (SimpleJSONFixed_JSONNode_o *)0x0) {
      vtable_dispatch = (a->klass->vtable)._0_Equals.methodPtr;
      bVar5 = (*vtable_dispatch)
                        (a,b,(a->klass->vtable)._0_Equals.method,vtable_dispatch);
      return bVar5;
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  return (bool_conflict)CONCAT71((int7)((ulong)pIVar6 >> 8),bVar8 & bVar7);
}


// SimpleJSONFixed.JSONNode$$op_Inequality
// il2cpp: bool SimpleJSONFixed_JSONNode__op_Inequality (SimpleJSONFixed_JSONNode_o* a, Il2CppObject* b, const MethodInfo* method);
// 0x3d84c80

bool_conflict
SimpleJSONFixed_JSONNode__op_Inequality
          (SimpleJSONFixed_JSONNode_o *a,Il2CppObject *b,MethodInfo *method)

{
  uint uVar1;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  
  if (DAT_0570269d == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_JSONNode);
    DAT_0570269d = '\x01';
    method = extraout_RDX;
  }
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_init_class();
    method = extraout_RDX_00;
  }
  uVar1 = SimpleJSONFixed_JSONNode__op_Equality(a,b,method);
  return uVar1 ^ 1;
}


// SimpleJSONFixed.JSONNode$$Equals
// il2cpp: bool SimpleJSONFixed_JSONNode__Equals (SimpleJSONFixed_JSONNode_o* __this, Il2CppObject* obj, const MethodInfo* method);
// 0x3d84ce0

bool_conflict
SimpleJSONFixed_JSONNode__Equals
          (SimpleJSONFixed_JSONNode_o *__this,Il2CppObject *obj,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),(Il2CppObject *)__this == obj);
}


// SimpleJSONFixed.JSONNode$$GetHashCode
// il2cpp: int32_t SimpleJSONFixed_JSONNode__GetHashCode (SimpleJSONFixed_JSONNode_o* __this, const MethodInfo* method);
// 0x3d84cf0

int32_t SimpleJSONFixed_JSONNode__GetHashCode(SimpleJSONFixed_JSONNode_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  
  iVar1 = System_Object__GetHashCode((Il2CppObject *)__this,(MethodInfo *)0x0);
  return iVar1;
}


// SimpleJSONFixed.JSONNode$$get_EscapeBuilder
// il2cpp: System_Text_StringBuilder_o* SimpleJSONFixed_JSONNode__get_EscapeBuilder (const MethodInfo* method);
// 0x3d84d00

/* WARNING: Type propagation algorithm not settling */

System_Text_StringBuilder_o * SimpleJSONFixed_JSONNode__get_EscapeBuilder(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  undefined8 *puVar4;
  System_Text_StringBuilder_o *__this;
  undefined8 uVar5;
  
  if (DAT_0570269e == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_JSONNode);
    il2cpp_init_method_metadata(&TypeInfo_StringBuilder);
    DAT_0570269e = '\x01';
    iVar1 = *(int *)(TypeInfo_JSONNode + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_JSONNode + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    plVar3 = (long *)il2cpp_glue_02274830(TypeInfo_JSONNode);
    lVar2 = *plVar3;
  }
  else {
    plVar3 = (long *)il2cpp_glue_02274830();
    lVar2 = *plVar3;
  }
  if (lVar2 == 0) {
    __this = (System_Text_StringBuilder_o *)il2cpp_runtime_glue(TypeInfo_StringBuilder);
    System_Text_StringBuilder___ctor(__this,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
      il2cpp_init_class();
    }
    puVar4 = (undefined8 *)il2cpp_glue_02274830(TypeInfo_JSONNode);
    *puVar4 = __this;
    uVar5 = il2cpp_glue_02274830(TypeInfo_JSONNode);
    il2cpp_runtime_glue(uVar5,__this);
    iVar1 = *(int *)(TypeInfo_JSONNode + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_JSONNode + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  puVar4 = (undefined8 *)il2cpp_glue_02274830(TypeInfo_JSONNode);
  return (System_Text_StringBuilder_o *)*puVar4;
}


// SimpleJSONFixed.JSONNode$$Escape
// il2cpp: System_String_o* SimpleJSONFixed_JSONNode__Escape (System_String_o* aText, const MethodInfo* method);
// 0x3d84e00

System_String_o * SimpleJSONFixed_JSONNode__Escape(System_String_o *aText,MethodInfo *method)

{
  uint16_t value;
  int32_t iVar1;
  ulong in_RAX;
  System_Text_StringBuilder_o *__this;
  undefined8 *puVar2;
  System_Text_StringBuilder_o *pSVar3;
  System_String_o *pSVar4;
  int iVar5;
  int value_00;
  MethodInfo *method_00;
  undefined8 uStack_38;
  
  uStack_38 = in_RAX;
  if (DAT_0570269f == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_JSONNode);
    il2cpp_init_method_metadata(&"\\b");
    il2cpp_init_method_metadata(&"\\n");
    il2cpp_init_method_metadata(&"\\t");
    il2cpp_init_method_metadata(&"\\\"");
    il2cpp_init_method_metadata(&"\\f");
    il2cpp_init_method_metadata(&"\\r");
    il2cpp_init_method_metadata(&"X4");
    il2cpp_init_method_metadata(&"\\u");
    il2cpp_init_method_metadata(&"\\\\");
    DAT_0570269f = '\x01';
  }
  uStack_38 = uStack_38 & 0xffffffffffff;
  method_00 = TypeInfo_JSONNode;
  if (*(int *)((long)&TypeInfo_JSONNode[2].parameters + 4) == 0) {
    il2cpp_init_class();
  }
  __this = SimpleJSONFixed_JSONNode__get_EscapeBuilder(method_00);
  if (__this != (System_Text_StringBuilder_o *)0x0) {
    System_Text_StringBuilder__set_Length(__this,0,(MethodInfo *)0x0);
    iVar1 = System_Text_StringBuilder__get_Capacity(__this,(MethodInfo *)0x0);
    if (aText != (System_String_o *)0x0) {
      iVar5 = (aText->fields)._stringLength;
      value_00 = iVar5 / 10 + iVar5;
      if (iVar1 < value_00) {
        System_Text_StringBuilder__set_Capacity(__this,value_00,(MethodInfo *)0x0);
        iVar5 = (aText->fields)._stringLength;
      }
      if (iVar5 < 1) {
LAB_03d85083:
        pSVar4 = (System_String_o *)(*(__this->klass->vtable)._3_ToString.methodPtr)(__this);
        System_Text_StringBuilder__set_Length(__this,0,(MethodInfo *)0x0);
        return pSVar4;
      }
      iVar5 = 0;
LAB_03d84f30:
      value = System_String__get_Chars(aText,iVar5,(MethodInfo *)0x0);
      pSVar3 = __this;
      switch(value) {
      case 8:
        pSVar4 = "\\b";
        goto LAB_03d85036;
      case 9:
        puVar2 = &"\\t";
        break;
      case 10:
        puVar2 = &"\\n";
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
switchD_03d84f53_caseD_3:
        if (value < 0x20) {
LAB_03d84fb7:
          uStack_38 = CONCAT26(value,(undefined6)uStack_38);
          pSVar3 = System_Text_StringBuilder__Append(__this,"\\u",(MethodInfo *)0x0);
          pSVar4 = System_UInt16__ToString((short)&uStack_38 + 6,"X4",(MethodInfo *)0x0);
          if (pSVar3 != (System_Text_StringBuilder_o *)0x0) goto LAB_03d85036;
          goto LAB_03d850b7;
        }
        if (*(int *)((long)&TypeInfo_JSONNode[2].parameters + 4) == 0) {
          il2cpp_init_class();
        }
        if ((0x7f < value) && (*TypeInfo_JSONNode[2].virtualMethodPointer != (Il2CppMethodPointer)0x0))
        goto LAB_03d84fb7;
        System_Text_StringBuilder__Append(__this,value,(MethodInfo *)0x0);
        iVar5 = iVar5 + 1;
        if ((aText->fields)._stringLength <= iVar5) goto LAB_03d85083;
        goto LAB_03d84f30;
      case 0xc:
        puVar2 = &"\\f";
        break;
      case 0xd:
        puVar2 = &"\\r";
        break;
      case 0x22:
        puVar2 = &"\\\"";
        break;
      default:
        if (value != 0x5c) goto switchD_03d84f53_caseD_3;
        puVar2 = &"\\\\";
      }
      pSVar4 = (System_String_o *)*puVar2;
LAB_03d85036:
      System_Text_StringBuilder__Append(pSVar3,pSVar4,(MethodInfo *)0x0);
      iVar5 = iVar5 + 1;
      if ((aText->fields)._stringLength <= iVar5) goto LAB_03d85083;
      goto LAB_03d84f30;
    }
  }
LAB_03d850b7:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// SimpleJSONFixed.JSONNode$$ParseElement
// il2cpp: SimpleJSONFixed_JSONNode_o* SimpleJSONFixed_JSONNode__ParseElement (System_String_o* token, bool quoted, const MethodInfo* method);
// 0x3d850c0

SimpleJSONFixed_JSONNode_o *
SimpleJSONFixed_JSONNode__ParseElement
          (System_String_o *token,bool_conflict quoted,MethodInfo *method)

{
  Il2CppClass *pIVar1;
  bool_conflict bVar2;
  System_Globalization_CultureInfo_o *provider;
  Il2CppObject *pIVar3;
  SimpleJSONFixed_JSONNode_o *pSVar4;
  System_String_o *a;
  undefined4 in_register_00000034;
  MethodInfo *pMVar5;
  Il2CppClass *local_20;
  
  pMVar5 = (MethodInfo *)CONCAT44(in_register_00000034,quoted);
  if (DAT_057026a0 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CultureInfo);
    il2cpp_init_method_metadata(&TypeInfo_JSONNode);
    il2cpp_init_method_metadata(&TypeInfo_JSONNull);
    il2cpp_init_method_metadata(&"null");
    il2cpp_init_method_metadata(&"false");
    il2cpp_init_method_metadata(&"true");
    DAT_057026a0 = '\x01';
  }
  local_20 = (Il2CppClass *)0x0;
  if ((char)quoted == '\0') {
    if (token == (System_String_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    if ((token->fields)._stringLength < 6) {
      a = System_String__ToLower(token,(MethodInfo *)0x0);
      bVar2 = System_String__op_Equality(a,"false",(MethodInfo *)0x0);
      if (((char)bVar2 != '\0') ||
         (bVar2 = System_String__op_Equality(a,"true",(MethodInfo *)0x0), (char)bVar2 != '\0')
         ) {
        bVar2 = System_String__op_Equality(a,"true",(MethodInfo *)0x0);
        if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_05702699 == '\0') {
          il2cpp_init_method_metadata(&TypeInfo_JSONBool);
          DAT_05702699 = '\x01';
        }
        pIVar3 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_JSONBool);
        if (DAT_057026e3 == '\0') {
          il2cpp_init_method_metadata(&TypeInfo_JSONNode);
          DAT_057026e3 = '\x01';
        }
        if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
          il2cpp_init_class();
        }
        System_Object___ctor(pIVar3,(MethodInfo *)0x0);
        *(char *)&pIVar3[1].klass = (char)bVar2;
        return (SimpleJSONFixed_JSONNode_o *)pIVar3;
      }
      bVar2 = System_String__op_Equality(a,"null",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        pMVar5 = TypeInfo_JSONNull;
        if (*(int *)((long)&TypeInfo_JSONNull[2].parameters + 4) == 0) {
          il2cpp_init_class();
        }
        pSVar4 = (SimpleJSONFixed_JSONNode_o *)SimpleJSONFixed_JSONNull__CreateOrGet(pMVar5);
        return pSVar4;
      }
    }
    if (*(int *)(TypeInfo_CultureInfo + 0xe4) == 0) {
      il2cpp_init_class();
    }
    provider = System_Globalization_CultureInfo__get_InvariantCulture((MethodInfo *)0x0);
    pMVar5 = (MethodInfo *)0xa7;
    bVar2 = System_Double__TryParse
                      (token,0xa7,(System_IFormatProvider_o *)provider,(double *)&local_20,
                       (MethodInfo *)0x0);
    pIVar1 = local_20;
    if ((char)bVar2 != '\0') {
      if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if (DAT_0570268f == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_JSONNumber);
        DAT_0570268f = '\x01';
      }
      pIVar3 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_JSONNumber);
      if (DAT_057026de == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_JSONNode);
        DAT_057026de = '\x01';
      }
      if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
        il2cpp_init_class();
      }
      System_Object___ctor(pIVar3,(MethodInfo *)0x0);
      pIVar3[1].klass = pIVar1;
      return (SimpleJSONFixed_JSONNode_o *)pIVar3;
    }
  }
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar4 = SimpleJSONFixed_JSONNode__op_Implicit(token,pMVar5);
  return pSVar4;
}


// SimpleJSONFixed.JSONNode$$Parse
// il2cpp: SimpleJSONFixed_JSONNode_o* SimpleJSONFixed_JSONNode__Parse (System_String_o* aJSON, const MethodInfo* method);
// 0x3d85370

SimpleJSONFixed_JSONNode_o *
SimpleJSONFixed_JSONNode__Parse(System_String_o *aJSON,MethodInfo *method)

{
  uint index;
  int iVar1;
  byte bVar2;
  bool bVar3;
  bool bVar4;
  byte bVar5;
  uint16_t uVar6;
  int32_t iVar7;
  bool_conflict bVar8;
  System_Collections_Generic_Stack_object__o *__this;
  System_Text_StringBuilder_o *__this_00;
  SimpleJSONFixed_JSONObject_o *__this_01;
  Il2CppObject *pIVar9;
  SimpleJSONFixed_JSONNode_o *pSVar10;
  undefined8 uVar11;
  System_Exception_o *__this_02;
  System_String_o *pSVar12;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *pMVar13;
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
  MethodInfo *method_00;
  undefined *puVar14;
  uint index_00;
  bool bVar15;
  undefined1 auVar16 [16];
  Il2CppObject *local_58;
  undefined8 local_48;
  
  if (DAT_057026a1 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_JSONArray);
    il2cpp_init_method_metadata(&TypeInfo_JSONNode);
    il2cpp_init_method_metadata(&TypeInfo_JSONObject);
    il2cpp_init_method_metadata(&MethodInfo_JSONNode_Peek);
    il2cpp_init_method_metadata(&MethodInfo_JSONNode_Pop);
    il2cpp_init_method_metadata(&MethodInfo_Void_Push);
    il2cpp_init_method_metadata(&MethodInfo_Stack_1_SimpleJSONFixed_JSONNode);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    il2cpp_init_method_metadata(&TypeInfo_Stack_JSONNode);
    il2cpp_init_method_metadata(&TypeInfo_StringBuilder);
    il2cpp_init_method_metadata(&"");
    DAT_057026a1 = '\x01';
  }
  __this = (System_Collections_Generic_Stack_object__o *)il2cpp_runtime_glue(TypeInfo_Stack_JSONNode);
  System_Collections_Generic_Stack<object>___ctor(__this,MethodInfo_Stack_1_SimpleJSONFixed_JSONNode);
  __this_00 = (System_Text_StringBuilder_o *)il2cpp_runtime_glue(TypeInfo_StringBuilder);
  System_Text_StringBuilder___ctor(__this_00,(MethodInfo *)0x0);
  if (aJSON == (System_String_o *)0x0) {
LAB_03d85cc8:
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  index_00 = 0;
  if ((aJSON->fields)._stringLength < 1) {
    local_58 = (Il2CppObject *)0x0;
    bVar3 = false;
    bVar2 = 0;
    pMVar13 = extraout_RDX;
LAB_03d85c31:
    if (bVar3) {
      uVar11 = il2cpp_init_method_metadata(&TypeInfo_Exception);
      __this_02 = (System_Exception_o *)il2cpp_runtime_glue(uVar11);
      puVar14 = &"JSON Parse: Quotation marks seems to be messed up.";
LAB_03d85d0b:
      pSVar12 = (System_String_o *)il2cpp_init_method_metadata(puVar14);
      System_Exception___ctor(__this_02,pSVar12,(MethodInfo *)0x0);
      uVar11 = il2cpp_init_method_metadata(&MethodInfo_JSONNode_Parse);
                    /* WARNING: Subroutine does not return */
      il2cpp_glue_02274a00(__this_02,uVar11);
    }
    if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
      il2cpp_init_class();
      pMVar13 = extraout_RDX_23;
    }
    bVar8 = SimpleJSONFixed_JSONNode__op_Equality
                      ((SimpleJSONFixed_JSONNode_o *)local_58,(Il2CppObject *)0x0,pMVar13);
    if ((char)bVar8 == '\0') {
      return (SimpleJSONFixed_JSONNode_o *)local_58;
    }
    if (__this_00 != (System_Text_StringBuilder_o *)0x0) {
      auVar16 = (*(__this_00->klass->vtable)._3_ToString.methodPtr)
                          (__this_00,(__this_00->klass->vtable)._3_ToString.method);
      pMVar13 = auVar16._8_8_;
      if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
        il2cpp_init_class();
        pMVar13 = extraout_RDX_24;
      }
      pSVar10 = SimpleJSONFixed_JSONNode__ParseElement(auVar16._0_8_,(uint)bVar2,pMVar13);
      return pSVar10;
    }
    goto LAB_03d85cc8;
  }
  local_48 = "";
  bVar15 = false;
  bVar2 = 0;
  bVar3 = false;
  local_58 = (Il2CppObject *)0x0;
LAB_03d854e4:
  method_00 = (MethodInfo *)(ulong)index_00;
  uVar6 = System_String__get_Chars(aJSON,index_00,(MethodInfo *)0x0);
  pMVar13 = extraout_RDX_00;
  bVar4 = bVar15;
  if (uVar6 < 0x30) {
    if (uVar6 < 0x21) {
      bVar4 = true;
      switch(uVar6) {
      case 9:
      case 0x20:
        bVar4 = bVar15;
        if (bVar3) goto switchD_03d85522_caseD_2;
        break;
      case 10:
      case 0xd:
        break;
      default:
        goto switchD_03d85522_caseD_2;
      }
      goto switchD_03d85522_caseD_1;
    }
    if (uVar6 == 0x22) {
      bVar5 = ~bVar3;
      bVar3 = (bool)(bVar5 & 1);
      bVar2 = bVar2 | bVar5;
      goto switchD_03d85522_caseD_1;
    }
    if (uVar6 == 0x2c) {
      if (bVar3) goto switchD_03d85522_caseD_2;
      if (__this_00 == (System_Text_StringBuilder_o *)0x0) goto LAB_03d85cc8;
      iVar7 = System_Text_StringBuilder__get_Length(__this_00,(MethodInfo *)0x0);
      uVar11 = "";
      if (iVar7 < 1 && bVar2 == 0) goto LAB_03d858a4;
      auVar16 = (*(__this_00->klass->vtable)._3_ToString.methodPtr)
                          (__this_00,(__this_00->klass->vtable)._3_ToString.method);
      pMVar13 = auVar16._8_8_;
      if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
        il2cpp_init_class();
        pMVar13 = extraout_RDX_09;
      }
      pSVar10 = SimpleJSONFixed_JSONNode__ParseElement(auVar16._0_8_,(uint)bVar2,pMVar13);
      if (local_58 == (Il2CppObject *)0x0) goto LAB_03d85cc8;
      (*local_58->klass->vtable[0x14].methodPtr)
                (local_58,local_48,pSVar10,local_58->klass->vtable[0x14].method);
      uVar11 = "";
      goto LAB_03d858a4;
    }
    if (uVar6 == 0x2f) {
      if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if ((((bVar3) || (*(char *)(*(long *)(TypeInfo_JSONNode + 0xb8) + 2) == '\0')) ||
          (index = index_00 + 1, (aJSON->fields)._stringLength <= (int)index)) ||
         (uVar6 = System_String__get_Chars(aJSON,index,(MethodInfo *)0x0), pMVar13 = extraout_RDX_01
         , uVar6 != 0x2f)) {
        uVar6 = System_String__get_Chars(aJSON,index_00,(MethodInfo *)0x0);
        if (__this_00 == (System_Text_StringBuilder_o *)0x0) goto LAB_03d85cc8;
        System_Text_StringBuilder__Append(__this_00,uVar6,(MethodInfo *)0x0);
        pMVar13 = extraout_RDX_14;
      }
      else {
        do {
          index_00 = index;
          if (((aJSON->fields)._stringLength <= (int)index_00) ||
             (uVar6 = System_String__get_Chars(aJSON,index_00,(MethodInfo *)0x0),
             pMVar13 = extraout_RDX_02, uVar6 == 10)) break;
          uVar6 = System_String__get_Chars(aJSON,index_00,(MethodInfo *)0x0);
          pMVar13 = extraout_RDX_03;
          index = index_00 + 1;
        } while (uVar6 != 0xd);
      }
LAB_03d85a9f:
      index_00 = index_00 + 1;
      if ((aJSON->fields)._stringLength <= (int)index_00) goto LAB_03d85c31;
      goto LAB_03d854e4;
    }
  }
  else {
    if (0x5d < uVar6) {
      if (uVar6 == 0xfeff) goto switchD_03d85522_caseD_1;
      if (uVar6 == 0x7d) goto switchD_03d85558_caseD_23;
      if ((uVar6 != 0x7b) || (bVar3)) goto switchD_03d85522_caseD_2;
      __this_01 = (SimpleJSONFixed_JSONObject_o *)il2cpp_runtime_glue(TypeInfo_JSONObject);
      SimpleJSONFixed_JSONObject___ctor(__this_01,method_00);
      if (__this != (System_Collections_Generic_Stack_object__o *)0x0) goto LAB_03d85944;
      goto LAB_03d85cc8;
    }
    switch(uVar6) {
    case 0x3a:
      if (!bVar3) {
        if (__this_00 == (System_Text_StringBuilder_o *)0x0) goto LAB_03d85cc8;
        uVar11 = (*(__this_00->klass->vtable)._3_ToString.methodPtr)(__this_00);
LAB_03d858a4:
        bVar2 = 0;
        System_Text_StringBuilder__set_Length(__this_00,0,(MethodInfo *)0x0);
        pMVar13 = extraout_RDX_10;
        local_48 = uVar11;
        goto switchD_03d85522_caseD_1;
      }
      break;
    case 0x5b:
      if (!bVar3) {
        __this_01 = (SimpleJSONFixed_JSONObject_o *)il2cpp_runtime_glue(TypeInfo_JSONArray);
        SimpleJSONFixed_JSONArray___ctor((SimpleJSONFixed_JSONArray_o *)__this_01,method_00);
        if (__this == (System_Collections_Generic_Stack_object__o *)0x0) goto LAB_03d85cc8;
LAB_03d85944:
        System_Collections_Generic_Stack<object>__Push
                  (__this,(Il2CppObject *)__this_01,MethodInfo_Void_Push);
        if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
          il2cpp_init_class();
          pMVar13 = extraout_RDX_18;
          if (DAT_0570269d != '\0') goto LAB_03d85980;
LAB_03d85b12:
          il2cpp_init_method_metadata(&TypeInfo_JSONNode);
          DAT_0570269d = '\x01';
          iVar1 = *(int *)(TypeInfo_JSONNode + 0xe4);
          pMVar13 = extraout_RDX_19;
        }
        else {
          pMVar13 = extraout_RDX_11;
          if (DAT_0570269d == '\0') goto LAB_03d85b12;
LAB_03d85980:
          iVar1 = *(int *)(TypeInfo_JSONNode + 0xe4);
        }
        if (iVar1 == 0) {
          il2cpp_init_class();
          pMVar13 = extraout_RDX_20;
        }
        bVar8 = SimpleJSONFixed_JSONNode__op_Equality
                          ((SimpleJSONFixed_JSONNode_o *)local_58,(Il2CppObject *)0x0,pMVar13);
        if ((char)bVar8 == '\0') {
          pIVar9 = System_Collections_Generic_Stack<object>__Peek(__this,MethodInfo_JSONNode_Peek);
          if (local_58 == (Il2CppObject *)0x0) goto LAB_03d85cc8;
          (*local_58->klass->vtable[0x14].methodPtr)
                    (local_58,local_48,pIVar9,local_58->klass->vtable[0x14].method);
        }
        if (__this_00 == (System_Text_StringBuilder_o *)0x0) goto LAB_03d85cc8;
        local_48 = "";
        System_Text_StringBuilder__set_Length(__this_00,0,(MethodInfo *)0x0);
        local_58 = System_Collections_Generic_Stack<object>__Peek(__this,MethodInfo_JSONNode_Peek);
        index_00 = index_00 + 1;
        bVar15 = false;
        pMVar13 = extraout_RDX_12;
        if ((aJSON->fields)._stringLength <= (int)index_00) goto LAB_03d85c31;
        goto LAB_03d854e4;
      }
      break;
    case 0x5c:
      if (!bVar3) goto LAB_03d85bba;
      uVar6 = System_String__get_Chars(aJSON,index_00 + 1,(MethodInfo *)0x0);
      if (uVar6 < 0x67) {
        if (uVar6 == 0x62) {
          if (__this_00 == (System_Text_StringBuilder_o *)0x0) goto LAB_03d85cc8;
          uVar6 = 8;
        }
        else {
          if (uVar6 != 0x66) goto switchD_03d85b56_caseD_1;
          if (__this_00 == (System_Text_StringBuilder_o *)0x0) goto LAB_03d85cc8;
          uVar6 = 0xc;
        }
      }
      else {
        switch(uVar6) {
        case 0x6e:
          if (__this_00 == (System_Text_StringBuilder_o *)0x0) goto LAB_03d85cc8;
          uVar6 = 10;
          break;
        default:
switchD_03d85b56_caseD_1:
          if (__this_00 == (System_Text_StringBuilder_o *)0x0) goto LAB_03d85cc8;
          break;
        case 0x72:
          if (__this_00 == (System_Text_StringBuilder_o *)0x0) goto LAB_03d85cc8;
          uVar6 = 0xd;
          break;
        case 0x74:
          if (__this_00 == (System_Text_StringBuilder_o *)0x0) goto LAB_03d85cc8;
          uVar6 = 9;
          break;
        case 0x75:
          pSVar12 = System_String__Substring(aJSON,index_00 + 2,4,(MethodInfo *)0x0);
          iVar7 = System_Int32__Parse(pSVar12,0x200,(MethodInfo *)0x0);
          if (__this_00 != (System_Text_StringBuilder_o *)0x0) {
            System_Text_StringBuilder__Append(__this_00,(uint16_t)iVar7,(MethodInfo *)0x0);
            index_00 = index_00 + 5;
            pMVar13 = extraout_RDX_22;
            goto LAB_03d85a9f;
          }
          goto LAB_03d85cc8;
        }
      }
      System_Text_StringBuilder__Append(__this_00,uVar6,(MethodInfo *)0x0);
      pMVar13 = extraout_RDX_21;
LAB_03d85bba:
      index_00 = index_00 + 2;
      if ((aJSON->fields)._stringLength <= (int)index_00) goto LAB_03d85c31;
      goto LAB_03d854e4;
    case 0x5d:
switchD_03d85558_caseD_23:
      if (!bVar3) {
        if (__this == (System_Collections_Generic_Stack_object__o *)0x0) goto LAB_03d85cc8;
        if ((__this->fields)._size != 0) {
          System_Collections_Generic_Stack<object>__Pop(__this,MethodInfo_JSONNode_Pop);
          if (__this_00 == (System_Text_StringBuilder_o *)0x0) goto LAB_03d85cc8;
          iVar7 = System_Text_StringBuilder__get_Length(__this_00,(MethodInfo *)0x0);
          pMVar13 = extraout_RDX_04;
          if (0 < iVar7 || bVar2 != 0) {
            auVar16 = (*(__this_00->klass->vtable)._3_ToString.methodPtr)
                                (__this_00,(__this_00->klass->vtable)._3_ToString.method);
            pMVar13 = auVar16._8_8_;
            if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
              il2cpp_init_class();
              pMVar13 = extraout_RDX_05;
            }
            pSVar10 = SimpleJSONFixed_JSONNode__ParseElement(auVar16._0_8_,(uint)bVar2,pMVar13);
            if (local_58 == (Il2CppObject *)0x0) goto LAB_03d85cc8;
            (*local_58->klass->vtable[0x14].methodPtr)
                      (local_58,local_48,pSVar10,local_58->klass->vtable[0x14].method);
            pMVar13 = extraout_RDX_06;
          }
          if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
            il2cpp_init_class();
            pMVar13 = extraout_RDX_15;
            if (DAT_0570269d != '\0') goto LAB_03d85776;
LAB_03d85ad6:
            il2cpp_init_method_metadata(&TypeInfo_JSONNode);
            DAT_0570269d = '\x01';
            iVar1 = *(int *)(TypeInfo_JSONNode + 0xe4);
            pMVar13 = extraout_RDX_16;
          }
          else {
            if (DAT_0570269d == '\0') goto LAB_03d85ad6;
LAB_03d85776:
            iVar1 = *(int *)(TypeInfo_JSONNode + 0xe4);
          }
          if (iVar1 == 0) {
            il2cpp_init_class();
            pMVar13 = extraout_RDX_17;
          }
          bVar8 = SimpleJSONFixed_JSONNode__op_Equality
                            ((SimpleJSONFixed_JSONNode_o *)local_58,(Il2CppObject *)0x0,pMVar13);
          if ((char)bVar8 == '\0') {
            if (local_58 == (Il2CppObject *)0x0) goto LAB_03d85cc8;
            (*local_58->klass->vtable[0x13].methodPtr)
                      (local_58,(ulong)!bVar15,local_58->klass->vtable[0x13].method);
          }
          local_48 = "";
          System_Text_StringBuilder__set_Length(__this_00,0,(MethodInfo *)0x0);
          pMVar13 = extraout_RDX_07;
          if (0 < (__this->fields)._size) {
            local_58 = System_Collections_Generic_Stack<object>__Peek(__this,MethodInfo_JSONNode_Peek);
            pMVar13 = extraout_RDX_08;
          }
          bVar2 = 0;
          goto switchD_03d85522_caseD_1;
        }
        uVar11 = il2cpp_init_method_metadata(&TypeInfo_Exception);
        __this_02 = (System_Exception_o *)il2cpp_runtime_glue(uVar11);
        puVar14 = &"JSON Parse: Too many closing brackets";
        goto LAB_03d85d0b;
      }
    }
  }
switchD_03d85522_caseD_2:
  uVar6 = System_String__get_Chars(aJSON,index_00,(MethodInfo *)0x0);
  if (__this_00 == (System_Text_StringBuilder_o *)0x0) goto LAB_03d85cc8;
  System_Text_StringBuilder__Append(__this_00,uVar6,(MethodInfo *)0x0);
  pMVar13 = extraout_RDX_13;
  bVar4 = bVar15;
switchD_03d85522_caseD_1:
  bVar15 = bVar4;
  index_00 = index_00 + 1;
  if ((aJSON->fields)._stringLength <= (int)index_00) goto LAB_03d85c31;
  goto LAB_03d854e4;
}


// SimpleJSONFixed.JSONNode$$.ctor
// il2cpp: void SimpleJSONFixed_JSONNode___ctor (SimpleJSONFixed_JSONNode_o* __this, const MethodInfo* method);
// 0x3d85e80

void SimpleJSONFixed_JSONNode___ctor(SimpleJSONFixed_JSONNode_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// SimpleJSONFixed.JSONNode$$.cctor
// il2cpp: void SimpleJSONFixed_JSONNode___cctor (const MethodInfo* method);
// 0x3d85e90

void SimpleJSONFixed_JSONNode___cctor(MethodInfo *method)

{
  undefined2 *puVar1;
  
  if (DAT_057026a2 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_JSONNode);
    DAT_057026a2 = '\x01';
  }
  puVar1 = *(undefined2 **)(TypeInfo_JSONNode + 0xb8);
  *puVar1 = 0x100;
  *(undefined1 *)(puVar1 + 1) = 1;
  return;
}


