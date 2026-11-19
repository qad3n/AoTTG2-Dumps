// Type: SimpleJSONFixed.JSONNode
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/SimpleJSONFixed/JSONNode.cs
// Prior real C# source (older reference): Assets/Scripts/Utility/SimpleJSON.cs
// --------------------------------

// SimpleJSONFixed.JSONNode.Enumerator$$get_IsValid
// il2cpp: bool SimpleJSONFixed_JSONNode_Enumerator__get_IsValid (SimpleJSONFixed_JSONNode_Enumerator_o __this, const MethodInfo* method);
// 0x5865410

bool SimpleJSONFixed_JSONNode_Enumerator__get_IsValid
               (SimpleJSONFixed_JSONNode_Enumerator_o *__this,MethodInfo *method)

{
  return (__this->fields).type != 0;
}


// SimpleJSONFixed.JSONNode.Enumerator$$.ctor
// il2cpp: void SimpleJSONFixed_JSONNode_Enumerator___ctor (SimpleJSONFixed_JSONNode_Enumerator_o __this, System_Collections_Generic_List_Enumerator_JSONNode__o aArrayEnum, const MethodInfo* method);
// 0x5865420

void SimpleJSONFixed_JSONNode_Enumerator___ctor
               (SimpleJSONFixed_JSONNode_Enumerator_o *__this,
               System_Collections_Generic_List_Enumerator_JSONNode__o aArrayEnum,MethodInfo *method)

{
  (__this->fields).type = 1;
  (__this->fields).m_Object.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  (__this->fields).m_Object.fields._version = 0;
  (__this->fields).m_Object.fields._index = 0;
  (__this->fields).m_Object.fields._current.fields.key = (Il2CppObject *)0x0;
  (__this->fields).m_Object.fields._current.fields.value = (Il2CppObject *)0x0;
  *(undefined8 *)&(__this->fields).m_Object.fields._getEnumeratorRetType = 0;
  (__this->fields).m_Array.fields._list = aArrayEnum.fields._list;
  (__this->fields).m_Array.fields._index = aArrayEnum.fields._index;
  (__this->fields).m_Array.fields._version = aArrayEnum.fields._version;
  (__this->fields).m_Array.fields._current = aArrayEnum.fields._current;
  Il2CppCodeGenWriteBarrier((void **)&(__this->fields).m_Array);
  return;
}


// SimpleJSONFixed.JSONNode.Enumerator$$.ctor
// il2cpp: void SimpleJSONFixed_JSONNode_Enumerator___ctor (SimpleJSONFixed_JSONNode_Enumerator_o __this, System_Collections_Generic_Dictionary_Enumerator_string__JSONNode__o aDictEnum, const MethodInfo* method);
// 0x5865460

void SimpleJSONFixed_JSONNode_Enumerator___ctor_5765460
               (SimpleJSONFixed_JSONNode_Enumerator_o *__this,
               System_Collections_Generic_Dictionary_Enumerator_string__JSONNode__o aDictEnum,
               MethodInfo *method)

{
  (__this->fields).type = 2;
  (__this->fields).m_Object.fields._dictionary = aDictEnum.fields._dictionary;
  (__this->fields).m_Object.fields._version = aDictEnum.fields._version;
  (__this->fields).m_Object.fields._index = aDictEnum.fields._index;
  (__this->fields).m_Object.fields._current.fields.key = aDictEnum.fields._current.fields.key;
  (__this->fields).m_Object.fields._current.fields.value = aDictEnum.fields._current.fields.value;
  (__this->fields).m_Object.fields._getEnumeratorRetType = aDictEnum.fields._getEnumeratorRetType;
  *(undefined4 *)&(__this->fields).m_Object.fields.field_0x24 = aDictEnum.fields._36_4_;
  Il2CppCodeGenWriteBarrier((void **)&(__this->fields).m_Object);
  (__this->fields).m_Array.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  (__this->fields).m_Array.fields._index = 0;
  (__this->fields).m_Array.fields._version = 0;
  (__this->fields).m_Array.fields._current = (SimpleJSONFixed_JSONNode_o *)0x0;
  return;
}


// SimpleJSONFixed.JSONNode.Enumerator$$get_Current
// il2cpp: System_Collections_Generic_KeyValuePair_string__JSONNode__o SimpleJSONFixed_JSONNode_Enumerator__get_Current (SimpleJSONFixed_JSONNode_Enumerator_o __this, const MethodInfo* method);
// 0x58654b0

System_Collections_Generic_KeyValuePair_string__JSONNode__o
SimpleJSONFixed_JSONNode_Enumerator__get_Current
          (SimpleJSONFixed_JSONNode_Enumerator_o *__this,MethodInfo *method)

{
  int iVar1;
  System_Collections_Generic_KeyValuePair_string__JSONNode__Fields SVar2;
  Il2CppObject *value;
  Il2CppObject *key;
  System_Collections_Generic_KeyValuePair_object__object__o local_18;
  
  if (Il2CppMethodInitialized_075450e1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_Enumerator_string_JSONNode_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_JSONNode_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_KeyValuePair_string_JSONNode_ctor);
    Il2CppMethodInitialized_075450e1 = '\x01';
  }
  iVar1 = (__this->fields).type;
  if (iVar1 == 2) {
    local_18.fields.key = (__this->fields).m_Object.fields._current.fields.key;
    local_18.fields.value = (__this->fields).m_Object.fields._current.fields.value;
  }
  else {
    if (iVar1 == 1) {
      key = (Il2CppObject *)**(undefined8 **)(g_data_07556758 + 0xb8);
      value = (Il2CppObject *)(__this->fields).m_Array.fields._current;
    }
    else {
      key = (Il2CppObject *)**(undefined8 **)(g_data_07556758 + 0xb8);
      value = (Il2CppObject *)0x0;
    }
    local_18.fields.value = (Il2CppObject *)0x0;
    local_18.fields.key = (Il2CppObject *)0x0;
    System_Collections_Generic_KeyValuePair_object__object____ctor
              (&local_18,key,value,
               (MethodInfo_5139170 *)MethodInfo_System_Collections_Generic_KeyValuePair_string_JSONNode_ctor);
  }
  SVar2.value = (SimpleJSONFixed_JSONNode_o *)local_18.fields.value;
  SVar2.key = (System_String_o *)local_18.fields.key;
  return (System_Collections_Generic_KeyValuePair_string__JSONNode__o)SVar2;
}


// SimpleJSONFixed.JSONNode.Enumerator$$MoveNext
// il2cpp: bool SimpleJSONFixed_JSONNode_Enumerator__MoveNext (SimpleJSONFixed_JSONNode_Enumerator_o __this, const MethodInfo* method);
// 0x5865580

bool SimpleJSONFixed_JSONNode_Enumerator__MoveNext
               (SimpleJSONFixed_JSONNode_Enumerator_o *__this,MethodInfo *method)

{
  int iVar1;
  bool bVar2;
  
  if (Il2CppMethodInitialized_075450e2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_Enumerator_string_JSONNode_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_JSONNode_MoveNext);
    Il2CppMethodInitialized_075450e2 = '\x01';
  }
  iVar1 = (__this->fields).type;
  if (iVar1 == 2) {
    bVar2 = System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext
                      ((System_Collections_Generic_Dictionary_Enumerator_object__object__o *)
                       &(__this->fields).m_Object,
                       (MethodInfo_4CE66D0 *)
                       MethodInfo_System_Collections_Generic_Dictionary_Enumerator_string_JSONNode_MoveNext);
    return bVar2;
  }
  if (iVar1 == 1) {
    bVar2 = System_Collections_Generic_List_Enumerator_object___MoveNext
                      ((System_Collections_Generic_List_Enumerator_object__o *)&(__this->fields).m_Array,
                       (MethodInfo_4C45C50 *)
                       MethodInfo_System_Collections_Generic_List_Enumerator_JSONNode_MoveNext);
    return bVar2;
  }
  return false;
}


// SimpleJSONFixed.JSONNode.ValueEnumerator$$.ctor
// il2cpp: void SimpleJSONFixed_JSONNode_ValueEnumerator___ctor (SimpleJSONFixed_JSONNode_ValueEnumerator_o __this, System_Collections_Generic_List_Enumerator_JSONNode__o aArrayEnum, const MethodInfo* method);
// 0x58655f0

void SimpleJSONFixed_JSONNode_ValueEnumerator___ctor
               (SimpleJSONFixed_JSONNode_ValueEnumerator_o *__this,
               System_Collections_Generic_List_Enumerator_JSONNode__o aArrayEnum,MethodInfo *method)

{
  SimpleJSONFixed_JSONNode_Enumerator_o *pSVar1;
  System_Collections_Generic_List_T__o *local_20 [2];
  SimpleJSONFixed_JSONNode_o *local_10;
  
  local_20[0] = aArrayEnum.fields._list;
  local_20[1] = (System_Collections_Generic_List_T__o *)aArrayEnum.fields._8_8_;
  local_10 = aArrayEnum.fields._current;
  Il2CppCodeGenWriteBarrier(local_20);
  (__this->fields).m_Enumerator.fields.m_Array.fields._current = local_10;
  (__this->fields).m_Enumerator.fields.m_Array.fields._list = local_20[0];
  *(System_Collections_Generic_List_T__o **)&(__this->fields).m_Enumerator.fields.m_Array.fields._index =
       local_20[1];
  *(Il2CppObject **)((long)&(__this->fields).m_Enumerator.fields.m_Object.fields._current.fields + 8) =
       (Il2CppObject *)0x0;
  *(undefined8 *)&(__this->fields).m_Enumerator.fields.m_Object.fields._getEnumeratorRetType = 0;
  pSVar1 = &(__this->fields).m_Enumerator;
  (pSVar1->fields).m_Object.fields._version = 0;
  (pSVar1->fields).m_Object.fields._index = 0;
  (__this->fields).m_Enumerator.fields.m_Object.fields._current.fields.key = (Il2CppObject *)0x0;
  *(undefined8 *)&(__this->fields).m_Enumerator.fields = 1;
  (__this->fields).m_Enumerator.fields.m_Object.fields._dictionary =
       (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  Il2CppCodeGenWriteBarrier((void **)&(__this->fields).m_Enumerator.fields.m_Object);
  return;
}


// SimpleJSONFixed.JSONNode.ValueEnumerator$$.ctor
// il2cpp: void SimpleJSONFixed_JSONNode_ValueEnumerator___ctor (SimpleJSONFixed_JSONNode_ValueEnumerator_o __this, System_Collections_Generic_Dictionary_Enumerator_string__JSONNode__o aDictEnum, const MethodInfo* method);
// 0x5865680

void SimpleJSONFixed_JSONNode_ValueEnumerator___ctor_5765680
               (SimpleJSONFixed_JSONNode_ValueEnumerator_o *__this,
               System_Collections_Generic_Dictionary_Enumerator_string__JSONNode__o aDictEnum,
               MethodInfo *method)

{
  SimpleJSONFixed_JSONNode_Enumerator_o *pSVar1;
  System_Collections_Generic_Dictionary_TKey__TValue__o *apSStack_50 [2];
  Il2CppObject *pIStack_40;
  Il2CppObject *local_38;
  int32_t iStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  
  local_28 = 0;
  uStack_20 = 0;
  local_18 = 0;
  apSStack_50[0] = aDictEnum.fields._dictionary;
  apSStack_50[1] = (System_Collections_Generic_Dictionary_TKey__TValue__o *)aDictEnum.fields._8_8_;
  pIStack_40 = aDictEnum.fields._current.fields.key;
  local_38 = aDictEnum.fields._current.fields.value;
  iStack_30 = aDictEnum.fields._getEnumeratorRetType;
  uStack_2c = aDictEnum.fields._36_4_;
  Il2CppCodeGenWriteBarrier(apSStack_50);
  local_28 = 0;
  uStack_20 = 0;
  local_18 = 0;
  (__this->fields).m_Enumerator.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  pSVar1 = &(__this->fields).m_Enumerator;
  (pSVar1->fields).m_Array.fields._index = 0;
  (pSVar1->fields).m_Array.fields._version = 0;
  *(Il2CppObject **)((long)&(__this->fields).m_Enumerator.fields.m_Object.fields._current.fields + 8) =
       local_38;
  pSVar1 = &(__this->fields).m_Enumerator;
  (pSVar1->fields).m_Object.fields._getEnumeratorRetType = iStack_30;
  *(undefined4 *)&(pSVar1->fields).m_Object.fields.field_0x24 = uStack_2c;
  *(System_Collections_Generic_Dictionary_TKey__TValue__o **)
   &(__this->fields).m_Enumerator.fields.m_Object.fields._version = apSStack_50[1];
  (__this->fields).m_Enumerator.fields.m_Object.fields._current.fields.key = pIStack_40;
  *(undefined8 *)&(__this->fields).m_Enumerator.fields = 2;
  (__this->fields).m_Enumerator.fields.m_Object.fields._dictionary = apSStack_50[0];
  (__this->fields).m_Enumerator.fields.m_Array.fields._current = (SimpleJSONFixed_JSONNode_o *)0x0;
  Il2CppCodeGenWriteBarrier((void **)&(__this->fields).m_Enumerator.fields.m_Object);
  return;
}


// SimpleJSONFixed.JSONNode.ValueEnumerator$$.ctor
// il2cpp: void SimpleJSONFixed_JSONNode_ValueEnumerator___ctor (SimpleJSONFixed_JSONNode_ValueEnumerator_o __this, SimpleJSONFixed_JSONNode_Enumerator_o aEnumerator, const MethodInfo* method);
// 0x5865730

void SimpleJSONFixed_JSONNode_ValueEnumerator___ctor_5765730
               (SimpleJSONFixed_JSONNode_ValueEnumerator_o *__this,
               SimpleJSONFixed_JSONNode_Enumerator_o aEnumerator,MethodInfo *method)

{
  SimpleJSONFixed_JSONNode_Enumerator_o *pSVar1;
  
  (__this->fields).m_Enumerator.fields.m_Array.fields._current = aEnumerator.fields.m_Array.fields._current;
  (__this->fields).m_Enumerator.fields.m_Array.fields._list = aEnumerator.fields.m_Array.fields._list;
  pSVar1 = &(__this->fields).m_Enumerator;
  (pSVar1->fields).m_Array.fields._index = aEnumerator.fields.m_Array.fields._index;
  (pSVar1->fields).m_Array.fields._version = aEnumerator.fields.m_Array.fields._version;
  *(Il2CppObject **)((long)&(__this->fields).m_Enumerator.fields.m_Object.fields._current.fields + 8) =
       aEnumerator.fields.m_Object.fields._current.fields.value;
  pSVar1 = &(__this->fields).m_Enumerator;
  (pSVar1->fields).m_Object.fields._getEnumeratorRetType =
       aEnumerator.fields.m_Object.fields._getEnumeratorRetType;
  *(undefined4 *)&(pSVar1->fields).m_Object.fields.field_0x24 = aEnumerator.fields.m_Object.fields._36_4_;
  pSVar1 = &(__this->fields).m_Enumerator;
  (pSVar1->fields).m_Object.fields._version = aEnumerator.fields.m_Object.fields._version;
  (pSVar1->fields).m_Object.fields._index = aEnumerator.fields.m_Object.fields._index;
  (__this->fields).m_Enumerator.fields.m_Object.fields._current.fields.key =
       aEnumerator.fields.m_Object.fields._current.fields.key;
  (__this->fields).m_Enumerator.fields.type = aEnumerator.fields.type;
  *(undefined4 *)&(__this->fields).m_Enumerator.fields.field_0x4 = aEnumerator.fields._4_4_;
  (__this->fields).m_Enumerator.fields.m_Object.fields._dictionary =
       aEnumerator.fields.m_Object.fields._dictionary;
  Il2CppCodeGenWriteBarrier((void **)&(__this->fields).m_Enumerator.fields.m_Object);
  return;
}


// SimpleJSONFixed.JSONNode.ValueEnumerator$$get_Current
// il2cpp: SimpleJSONFixed_JSONNode_o* SimpleJSONFixed_JSONNode_ValueEnumerator__get_Current (SimpleJSONFixed_JSONNode_ValueEnumerator_o __this, const MethodInfo* method);
// 0x5865770

SimpleJSONFixed_JSONNode_o *
SimpleJSONFixed_JSONNode_ValueEnumerator__get_Current
          (SimpleJSONFixed_JSONNode_ValueEnumerator_o *__this,MethodInfo *method)

{
  System_Collections_Generic_KeyValuePair_string__JSONNode__o SVar1;
  
  if (Il2CppMethodInitialized_075450e5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_KeyValuePair_string_JSONNode_get_Value);
    Il2CppMethodInitialized_075450e5 = '\x01';
  }
  SVar1 = SimpleJSONFixed_JSONNode_Enumerator__get_Current
                    ((SimpleJSONFixed_JSONNode_Enumerator_o *)__this,method);
  return SVar1.fields.value;
}


// SimpleJSONFixed.JSONNode.ValueEnumerator$$MoveNext
// il2cpp: bool SimpleJSONFixed_JSONNode_ValueEnumerator__MoveNext (SimpleJSONFixed_JSONNode_ValueEnumerator_o __this, const MethodInfo* method);
// 0x58657a0

bool SimpleJSONFixed_JSONNode_ValueEnumerator__MoveNext
               (SimpleJSONFixed_JSONNode_ValueEnumerator_o *__this,MethodInfo *method)

{
  int iVar1;
  bool bVar2;
  
  if (Il2CppMethodInitialized_075450e2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_Enumerator_string_JSONNode_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_JSONNode_MoveNext);
    Il2CppMethodInitialized_075450e2 = '\x01';
  }
  iVar1 = (__this->fields).m_Enumerator.fields.type;
  if (iVar1 == 2) {
    bVar2 = System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext
                      ((System_Collections_Generic_Dictionary_Enumerator_object__object__o *)
                       &(__this->fields).m_Enumerator.fields.m_Object,
                       (MethodInfo_4CE66D0 *)
                       MethodInfo_System_Collections_Generic_Dictionary_Enumerator_string_JSONNode_MoveNext);
    return bVar2;
  }
  if (iVar1 == 1) {
    bVar2 = System_Collections_Generic_List_Enumerator_object___MoveNext
                      ((System_Collections_Generic_List_Enumerator_object__o *)
                       &(__this->fields).m_Enumerator.fields.m_Array,
                       (MethodInfo_4C45C50 *)
                       MethodInfo_System_Collections_Generic_List_Enumerator_JSONNode_MoveNext);
    return bVar2;
  }
  return false;
}


// SimpleJSONFixed.JSONNode.ValueEnumerator$$GetEnumerator
// il2cpp: SimpleJSONFixed_JSONNode_ValueEnumerator_o SimpleJSONFixed_JSONNode_ValueEnumerator__GetEnumerator (SimpleJSONFixed_JSONNode_ValueEnumerator_o __this, const MethodInfo* method);
// 0x5865810

SimpleJSONFixed_JSONNode_ValueEnumerator_o *
SimpleJSONFixed_JSONNode_ValueEnumerator__GetEnumerator
          (SimpleJSONFixed_JSONNode_ValueEnumerator_o *__return_storage_ptr__,
          SimpleJSONFixed_JSONNode_ValueEnumerator_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_TKey__TValue__o *pSVar1;
  Il2CppObject *pIVar2;
  Il2CppObject *pIVar3;
  SimpleJSONFixed_JSONNode_Enumerator_o *pSVar4;
  int32_t iVar5;
  int32_t iVar6;
  int32_t iVar7;
  undefined4 uVar8;
  int32_t iVar9;
  int32_t iVar10;
  int32_t iVar11;
  undefined4 uVar12;
  
  (__return_storage_ptr__->fields).m_Enumerator.fields.m_Array.fields._current =
       (__this->fields).m_Enumerator.fields.m_Array.fields._current;
  iVar11 = (__this->fields).m_Enumerator.fields.type;
  uVar12 = *(undefined4 *)&(__this->fields).m_Enumerator.fields.field_0x4;
  pSVar1 = (__this->fields).m_Enumerator.fields.m_Object.fields._dictionary;
  pSVar4 = &(__this->fields).m_Enumerator;
  iVar9 = (pSVar4->fields).m_Object.fields._version;
  iVar10 = (pSVar4->fields).m_Object.fields._index;
  pIVar2 = (__this->fields).m_Enumerator.fields.m_Object.fields._current.fields.key;
  pIVar3 = *(Il2CppObject **)((long)&(__this->fields).m_Enumerator.fields.m_Object.fields._current.fields + 8)
  ;
  pSVar4 = &(__this->fields).m_Enumerator;
  iVar7 = (pSVar4->fields).m_Object.fields._getEnumeratorRetType;
  uVar8 = *(undefined4 *)&(pSVar4->fields).m_Object.fields.field_0x24;
  pSVar4 = &(__this->fields).m_Enumerator;
  iVar5 = (pSVar4->fields).m_Array.fields._index;
  iVar6 = (pSVar4->fields).m_Array.fields._version;
  (__return_storage_ptr__->fields).m_Enumerator.fields.m_Array.fields._list =
       (__this->fields).m_Enumerator.fields.m_Array.fields._list;
  pSVar4 = &(__return_storage_ptr__->fields).m_Enumerator;
  (pSVar4->fields).m_Array.fields._index = iVar5;
  (pSVar4->fields).m_Array.fields._version = iVar6;
  *(Il2CppObject **)
   ((long)&(__return_storage_ptr__->fields).m_Enumerator.fields.m_Object.fields._current.fields + 8) = pIVar3;
  pSVar4 = &(__return_storage_ptr__->fields).m_Enumerator;
  (pSVar4->fields).m_Object.fields._getEnumeratorRetType = iVar7;
  *(undefined4 *)&(pSVar4->fields).m_Object.fields.field_0x24 = uVar8;
  pSVar4 = &(__return_storage_ptr__->fields).m_Enumerator;
  (pSVar4->fields).m_Object.fields._version = iVar9;
  (pSVar4->fields).m_Object.fields._index = iVar10;
  (__return_storage_ptr__->fields).m_Enumerator.fields.m_Object.fields._current.fields.key = pIVar2;
  (__return_storage_ptr__->fields).m_Enumerator.fields.type = iVar11;
  *(undefined4 *)&(__return_storage_ptr__->fields).m_Enumerator.fields.field_0x4 = uVar12;
  (__return_storage_ptr__->fields).m_Enumerator.fields.m_Object.fields._dictionary = pSVar1;
  return __return_storage_ptr__;
}


// SimpleJSONFixed.JSONNode.KeyEnumerator$$.ctor
// il2cpp: void SimpleJSONFixed_JSONNode_KeyEnumerator___ctor (SimpleJSONFixed_JSONNode_KeyEnumerator_o __this, System_Collections_Generic_List_Enumerator_JSONNode__o aArrayEnum, const MethodInfo* method);
// 0x5865840

void SimpleJSONFixed_JSONNode_KeyEnumerator___ctor
               (SimpleJSONFixed_JSONNode_KeyEnumerator_o *__this,
               System_Collections_Generic_List_Enumerator_JSONNode__o aArrayEnum,MethodInfo *method)

{
  SimpleJSONFixed_JSONNode_Enumerator_o *pSVar1;
  System_Collections_Generic_List_T__o *local_20 [2];
  SimpleJSONFixed_JSONNode_o *local_10;
  
  local_20[0] = aArrayEnum.fields._list;
  local_20[1] = (System_Collections_Generic_List_T__o *)aArrayEnum.fields._8_8_;
  local_10 = aArrayEnum.fields._current;
  Il2CppCodeGenWriteBarrier(local_20);
  (__this->fields).m_Enumerator.fields.m_Array.fields._current = local_10;
  (__this->fields).m_Enumerator.fields.m_Array.fields._list = local_20[0];
  *(System_Collections_Generic_List_T__o **)&(__this->fields).m_Enumerator.fields.m_Array.fields._index =
       local_20[1];
  *(Il2CppObject **)((long)&(__this->fields).m_Enumerator.fields.m_Object.fields._current.fields + 8) =
       (Il2CppObject *)0x0;
  *(undefined8 *)&(__this->fields).m_Enumerator.fields.m_Object.fields._getEnumeratorRetType = 0;
  pSVar1 = &(__this->fields).m_Enumerator;
  (pSVar1->fields).m_Object.fields._version = 0;
  (pSVar1->fields).m_Object.fields._index = 0;
  (__this->fields).m_Enumerator.fields.m_Object.fields._current.fields.key = (Il2CppObject *)0x0;
  *(undefined8 *)&(__this->fields).m_Enumerator.fields = 1;
  (__this->fields).m_Enumerator.fields.m_Object.fields._dictionary =
       (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  Il2CppCodeGenWriteBarrier((void **)&(__this->fields).m_Enumerator.fields.m_Object);
  return;
}


// SimpleJSONFixed.JSONNode.KeyEnumerator$$.ctor
// il2cpp: void SimpleJSONFixed_JSONNode_KeyEnumerator___ctor (SimpleJSONFixed_JSONNode_KeyEnumerator_o __this, System_Collections_Generic_Dictionary_Enumerator_string__JSONNode__o aDictEnum, const MethodInfo* method);
// 0x58658d0

void SimpleJSONFixed_JSONNode_KeyEnumerator___ctor_57658d0
               (SimpleJSONFixed_JSONNode_KeyEnumerator_o *__this,
               System_Collections_Generic_Dictionary_Enumerator_string__JSONNode__o aDictEnum,
               MethodInfo *method)

{
  SimpleJSONFixed_JSONNode_Enumerator_o *pSVar1;
  System_Collections_Generic_Dictionary_TKey__TValue__o *apSStack_50 [2];
  Il2CppObject *pIStack_40;
  Il2CppObject *local_38;
  int32_t iStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  
  local_28 = 0;
  uStack_20 = 0;
  local_18 = 0;
  apSStack_50[0] = aDictEnum.fields._dictionary;
  apSStack_50[1] = (System_Collections_Generic_Dictionary_TKey__TValue__o *)aDictEnum.fields._8_8_;
  pIStack_40 = aDictEnum.fields._current.fields.key;
  local_38 = aDictEnum.fields._current.fields.value;
  iStack_30 = aDictEnum.fields._getEnumeratorRetType;
  uStack_2c = aDictEnum.fields._36_4_;
  Il2CppCodeGenWriteBarrier(apSStack_50);
  local_28 = 0;
  uStack_20 = 0;
  local_18 = 0;
  (__this->fields).m_Enumerator.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  pSVar1 = &(__this->fields).m_Enumerator;
  (pSVar1->fields).m_Array.fields._index = 0;
  (pSVar1->fields).m_Array.fields._version = 0;
  *(Il2CppObject **)((long)&(__this->fields).m_Enumerator.fields.m_Object.fields._current.fields + 8) =
       local_38;
  pSVar1 = &(__this->fields).m_Enumerator;
  (pSVar1->fields).m_Object.fields._getEnumeratorRetType = iStack_30;
  *(undefined4 *)&(pSVar1->fields).m_Object.fields.field_0x24 = uStack_2c;
  *(System_Collections_Generic_Dictionary_TKey__TValue__o **)
   &(__this->fields).m_Enumerator.fields.m_Object.fields._version = apSStack_50[1];
  (__this->fields).m_Enumerator.fields.m_Object.fields._current.fields.key = pIStack_40;
  *(undefined8 *)&(__this->fields).m_Enumerator.fields = 2;
  (__this->fields).m_Enumerator.fields.m_Object.fields._dictionary = apSStack_50[0];
  (__this->fields).m_Enumerator.fields.m_Array.fields._current = (SimpleJSONFixed_JSONNode_o *)0x0;
  Il2CppCodeGenWriteBarrier((void **)&(__this->fields).m_Enumerator.fields.m_Object);
  return;
}


// SimpleJSONFixed.JSONNode.KeyEnumerator$$.ctor
// il2cpp: void SimpleJSONFixed_JSONNode_KeyEnumerator___ctor (SimpleJSONFixed_JSONNode_KeyEnumerator_o __this, SimpleJSONFixed_JSONNode_Enumerator_o aEnumerator, const MethodInfo* method);
// 0x5865980

void SimpleJSONFixed_JSONNode_KeyEnumerator___ctor_5765980
               (SimpleJSONFixed_JSONNode_KeyEnumerator_o *__this,
               SimpleJSONFixed_JSONNode_Enumerator_o aEnumerator,MethodInfo *method)

{
  SimpleJSONFixed_JSONNode_Enumerator_o *pSVar1;
  
  (__this->fields).m_Enumerator.fields.m_Array.fields._current = aEnumerator.fields.m_Array.fields._current;
  (__this->fields).m_Enumerator.fields.m_Array.fields._list = aEnumerator.fields.m_Array.fields._list;
  pSVar1 = &(__this->fields).m_Enumerator;
  (pSVar1->fields).m_Array.fields._index = aEnumerator.fields.m_Array.fields._index;
  (pSVar1->fields).m_Array.fields._version = aEnumerator.fields.m_Array.fields._version;
  *(Il2CppObject **)((long)&(__this->fields).m_Enumerator.fields.m_Object.fields._current.fields + 8) =
       aEnumerator.fields.m_Object.fields._current.fields.value;
  pSVar1 = &(__this->fields).m_Enumerator;
  (pSVar1->fields).m_Object.fields._getEnumeratorRetType =
       aEnumerator.fields.m_Object.fields._getEnumeratorRetType;
  *(undefined4 *)&(pSVar1->fields).m_Object.fields.field_0x24 = aEnumerator.fields.m_Object.fields._36_4_;
  pSVar1 = &(__this->fields).m_Enumerator;
  (pSVar1->fields).m_Object.fields._version = aEnumerator.fields.m_Object.fields._version;
  (pSVar1->fields).m_Object.fields._index = aEnumerator.fields.m_Object.fields._index;
  (__this->fields).m_Enumerator.fields.m_Object.fields._current.fields.key =
       aEnumerator.fields.m_Object.fields._current.fields.key;
  (__this->fields).m_Enumerator.fields.type = aEnumerator.fields.type;
  *(undefined4 *)&(__this->fields).m_Enumerator.fields.field_0x4 = aEnumerator.fields._4_4_;
  (__this->fields).m_Enumerator.fields.m_Object.fields._dictionary =
       aEnumerator.fields.m_Object.fields._dictionary;
  Il2CppCodeGenWriteBarrier((void **)&(__this->fields).m_Enumerator.fields.m_Object);
  return;
}


// SimpleJSONFixed.JSONNode.KeyEnumerator$$get_Current
// il2cpp: System_String_o* SimpleJSONFixed_JSONNode_KeyEnumerator__get_Current (SimpleJSONFixed_JSONNode_KeyEnumerator_o __this, const MethodInfo* method);
// 0x58659c0

System_String_o *
SimpleJSONFixed_JSONNode_KeyEnumerator__get_Current
          (SimpleJSONFixed_JSONNode_KeyEnumerator_o *__this,MethodInfo *method)

{
  System_Collections_Generic_KeyValuePair_string__JSONNode__o SVar1;
  
  if (Il2CppMethodInitialized_075450e8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_KeyValuePair_string_JSONNode_get_Key);
    Il2CppMethodInitialized_075450e8 = '\x01';
  }
  SVar1 = SimpleJSONFixed_JSONNode_Enumerator__get_Current
                    ((SimpleJSONFixed_JSONNode_Enumerator_o *)__this,method);
  return SVar1.fields.key;
}


// SimpleJSONFixed.JSONNode.KeyEnumerator$$MoveNext
// il2cpp: bool SimpleJSONFixed_JSONNode_KeyEnumerator__MoveNext (SimpleJSONFixed_JSONNode_KeyEnumerator_o __this, const MethodInfo* method);
// 0x58659f0

bool SimpleJSONFixed_JSONNode_KeyEnumerator__MoveNext
               (SimpleJSONFixed_JSONNode_KeyEnumerator_o *__this,MethodInfo *method)

{
  int iVar1;
  bool bVar2;
  
  if (Il2CppMethodInitialized_075450e2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_Enumerator_string_JSONNode_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_JSONNode_MoveNext);
    Il2CppMethodInitialized_075450e2 = '\x01';
  }
  iVar1 = (__this->fields).m_Enumerator.fields.type;
  if (iVar1 == 2) {
    bVar2 = System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext
                      ((System_Collections_Generic_Dictionary_Enumerator_object__object__o *)
                       &(__this->fields).m_Enumerator.fields.m_Object,
                       (MethodInfo_4CE66D0 *)
                       MethodInfo_System_Collections_Generic_Dictionary_Enumerator_string_JSONNode_MoveNext);
    return bVar2;
  }
  if (iVar1 == 1) {
    bVar2 = System_Collections_Generic_List_Enumerator_object___MoveNext
                      ((System_Collections_Generic_List_Enumerator_object__o *)
                       &(__this->fields).m_Enumerator.fields.m_Array,
                       (MethodInfo_4C45C50 *)
                       MethodInfo_System_Collections_Generic_List_Enumerator_JSONNode_MoveNext);
    return bVar2;
  }
  return false;
}


// SimpleJSONFixed.JSONNode.KeyEnumerator$$GetEnumerator
// il2cpp: SimpleJSONFixed_JSONNode_KeyEnumerator_o SimpleJSONFixed_JSONNode_KeyEnumerator__GetEnumerator (SimpleJSONFixed_JSONNode_KeyEnumerator_o __this, const MethodInfo* method);
// 0x5865a60

SimpleJSONFixed_JSONNode_KeyEnumerator_o *
SimpleJSONFixed_JSONNode_KeyEnumerator__GetEnumerator
          (SimpleJSONFixed_JSONNode_KeyEnumerator_o *__return_storage_ptr__,
          SimpleJSONFixed_JSONNode_KeyEnumerator_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_TKey__TValue__o *pSVar1;
  Il2CppObject *pIVar2;
  Il2CppObject *pIVar3;
  SimpleJSONFixed_JSONNode_Enumerator_o *pSVar4;
  int32_t iVar5;
  int32_t iVar6;
  int32_t iVar7;
  undefined4 uVar8;
  int32_t iVar9;
  int32_t iVar10;
  int32_t iVar11;
  undefined4 uVar12;
  
  (__return_storage_ptr__->fields).m_Enumerator.fields.m_Array.fields._current =
       (__this->fields).m_Enumerator.fields.m_Array.fields._current;
  iVar11 = (__this->fields).m_Enumerator.fields.type;
  uVar12 = *(undefined4 *)&(__this->fields).m_Enumerator.fields.field_0x4;
  pSVar1 = (__this->fields).m_Enumerator.fields.m_Object.fields._dictionary;
  pSVar4 = &(__this->fields).m_Enumerator;
  iVar9 = (pSVar4->fields).m_Object.fields._version;
  iVar10 = (pSVar4->fields).m_Object.fields._index;
  pIVar2 = (__this->fields).m_Enumerator.fields.m_Object.fields._current.fields.key;
  pIVar3 = *(Il2CppObject **)((long)&(__this->fields).m_Enumerator.fields.m_Object.fields._current.fields + 8)
  ;
  pSVar4 = &(__this->fields).m_Enumerator;
  iVar7 = (pSVar4->fields).m_Object.fields._getEnumeratorRetType;
  uVar8 = *(undefined4 *)&(pSVar4->fields).m_Object.fields.field_0x24;
  pSVar4 = &(__this->fields).m_Enumerator;
  iVar5 = (pSVar4->fields).m_Array.fields._index;
  iVar6 = (pSVar4->fields).m_Array.fields._version;
  (__return_storage_ptr__->fields).m_Enumerator.fields.m_Array.fields._list =
       (__this->fields).m_Enumerator.fields.m_Array.fields._list;
  pSVar4 = &(__return_storage_ptr__->fields).m_Enumerator;
  (pSVar4->fields).m_Array.fields._index = iVar5;
  (pSVar4->fields).m_Array.fields._version = iVar6;
  *(Il2CppObject **)
   ((long)&(__return_storage_ptr__->fields).m_Enumerator.fields.m_Object.fields._current.fields + 8) = pIVar3;
  pSVar4 = &(__return_storage_ptr__->fields).m_Enumerator;
  (pSVar4->fields).m_Object.fields._getEnumeratorRetType = iVar7;
  *(undefined4 *)&(pSVar4->fields).m_Object.fields.field_0x24 = uVar8;
  pSVar4 = &(__return_storage_ptr__->fields).m_Enumerator;
  (pSVar4->fields).m_Object.fields._version = iVar9;
  (pSVar4->fields).m_Object.fields._index = iVar10;
  (__return_storage_ptr__->fields).m_Enumerator.fields.m_Object.fields._current.fields.key = pIVar2;
  (__return_storage_ptr__->fields).m_Enumerator.fields.type = iVar11;
  *(undefined4 *)&(__return_storage_ptr__->fields).m_Enumerator.fields.field_0x4 = uVar12;
  (__return_storage_ptr__->fields).m_Enumerator.fields.m_Object.fields._dictionary = pSVar1;
  return __return_storage_ptr__;
}


// SimpleJSONFixed.JSONNode.LinqEnumerator$$.ctor
// il2cpp: void SimpleJSONFixed_JSONNode_LinqEnumerator___ctor (SimpleJSONFixed_JSONNode_LinqEnumerator_o* __this, SimpleJSONFixed_JSONNode_o* aNode, const MethodInfo* method);
// 0x5862ea0
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5862f06: cmp byte ptr [rip + 0x1ce21cc], 0
// asm:   0x5862f0d: je 0x5862fa9

void SimpleJSONFixed_JSONNode_LinqEnumerator___ctor
               (SimpleJSONFixed_JSONNode_LinqEnumerator_o *__this,SimpleJSONFixed_JSONNode_o *aNode,
               MethodInfo *method)

{
  uint32_t uVar1;
  SimpleJSONFixed_JSONNode_o *pSVar2;
  SimpleJSONFixed_JSONNode_Enumerator_o *pSVar3;
  bool bVar4;
  MethodInfo *extraout_RDX;
  MethodInfo *method_00;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
  undefined8 local_68;
  System_Collections_Generic_Dictionary_TKey__TValue__o *pSStack_60;
  undefined8 local_58;
  Il2CppObject *pIStack_50;
  Il2CppObject *local_48;
  undefined8 uStack_40;
  System_Collections_Generic_List_T__o *local_38;
  undefined8 uStack_30;
  SimpleJSONFixed_JSONNode_o *local_28;
  
  if (Il2CppMethodInitialized_075450e9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    Il2CppMethodInitialized_075450e9 = '\x01';
  }
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).m_Node = aNode;
  Il2CppCodeGenWriteBarrier(&(__this->fields).m_Node);
  pSVar2 = (__this->fields).m_Node;
  method_00 = extraout_RDX;
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
    method_00 = extraout_RDX_00;
  }
  if (Il2CppMethodInitialized_075450d9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    Il2CppMethodInitialized_075450d9 = '\x01';
    uVar1 = (TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor;
    method_00 = extraout_RDX_01;
  }
  else {
    uVar1 = (((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode)->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
    method_00 = extraout_RDX_02;
  }
  bVar4 = SimpleJSONFixed_JSONNode__op_Equality(pSVar2,(Il2CppObject *)0x0,method_00);
  if (!bVar4) {
    pSVar2 = (__this->fields).m_Node;
    if (pSVar2 == (SimpleJSONFixed_JSONNode_o *)0x0) {
      ThrowNullReferenceException();
    }
    (*(pSVar2->klass->vtable)._32_unknown.methodPtr)
              (&local_68,pSVar2,(pSVar2->klass->vtable)._32_unknown.method);
    (__this->fields).m_Enumerator.fields.m_Array.fields._current = local_28;
    (__this->fields).m_Enumerator.fields.m_Array.fields._list = local_38;
    pSVar3 = &(__this->fields).m_Enumerator;
    (pSVar3->fields).m_Array.fields._index = (undefined4)uStack_30;
    (pSVar3->fields).m_Array.fields._version = uStack_30._4_4_;
    (__this->fields).m_Enumerator.fields.m_Object.fields._current.fields.value = local_48;
    *(undefined8 *)&(__this->fields).m_Enumerator.fields.m_Object.fields._getEnumeratorRetType = uStack_40;
    pSVar3 = &(__this->fields).m_Enumerator;
    (pSVar3->fields).m_Object.fields._version = (undefined4)local_58;
    (pSVar3->fields).m_Object.fields._index = local_58._4_4_;
    (__this->fields).m_Enumerator.fields.m_Object.fields._current.fields.key = pIStack_50;
    *(undefined8 *)&(__this->fields).m_Enumerator.fields = local_68;
    (__this->fields).m_Enumerator.fields.m_Object.fields._dictionary = pSStack_60;
    Il2CppCodeGenWriteBarrier((void **)&(__this->fields).m_Enumerator.fields.m_Object);
  }
  return;
}


// SimpleJSONFixed.JSONNode.LinqEnumerator$$get_Current
// il2cpp: System_Collections_Generic_KeyValuePair_string__JSONNode__o SimpleJSONFixed_JSONNode_LinqEnumerator__get_Current (SimpleJSONFixed_JSONNode_LinqEnumerator_o* __this, const MethodInfo* method);
// 0x5865a90

System_Collections_Generic_KeyValuePair_string__JSONNode__o
SimpleJSONFixed_JSONNode_LinqEnumerator__get_Current
          (SimpleJSONFixed_JSONNode_LinqEnumerator_o *__this,MethodInfo *method)

{
  System_Collections_Generic_KeyValuePair_string__JSONNode__Fields SVar1;
  
  SVar1 = (System_Collections_Generic_KeyValuePair_string__JSONNode__Fields)
          SimpleJSONFixed_JSONNode_Enumerator__get_Current(&(__this->fields).m_Enumerator,method);
  return (System_Collections_Generic_KeyValuePair_string__JSONNode__o)SVar1;
}


// SimpleJSONFixed.JSONNode.LinqEnumerator$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* SimpleJSONFixed_JSONNode_LinqEnumerator__System_Collections_IEnumerator_get_Current (SimpleJSONFixed_JSONNode_LinqEnumerator_o* __this, const MethodInfo* method);
// 0x5865aa0

Il2CppObject *
SimpleJSONFixed_JSONNode_LinqEnumerator__System_Collections_IEnumerator_get_Current
          (SimpleJSONFixed_JSONNode_LinqEnumerator_o *__this,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  System_Collections_Generic_KeyValuePair_string__JSONNode__o local_18;
  
  if (Il2CppMethodInitialized_075450ea == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_KeyValuePair_string_JSONNode);
    Il2CppMethodInitialized_075450ea = '\x01';
  }
  local_18 = SimpleJSONFixed_JSONNode_Enumerator__get_Current(&(__this->fields).m_Enumerator,method);
  pIVar1 = il2cpp_vm_Object_Box
                     ((Il2CppClass *)TypeInfo_System_Collections_Generic_KeyValuePair_string_JSONNode,
                      &local_18);
  return pIVar1;
}


// SimpleJSONFixed.JSONNode.LinqEnumerator$$MoveNext
// il2cpp: bool SimpleJSONFixed_JSONNode_LinqEnumerator__MoveNext (SimpleJSONFixed_JSONNode_LinqEnumerator_o* __this, const MethodInfo* method);
// 0x5865b00

bool SimpleJSONFixed_JSONNode_LinqEnumerator__MoveNext
               (SimpleJSONFixed_JSONNode_LinqEnumerator_o *__this,MethodInfo *method)

{
  int iVar1;
  bool bVar2;
  
  if (Il2CppMethodInitialized_075450e2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_Enumerator_string_JSONNode_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_JSONNode_MoveNext);
    Il2CppMethodInitialized_075450e2 = '\x01';
  }
  iVar1 = (__this->fields).m_Enumerator.fields.type;
  if (iVar1 == 2) {
    bVar2 = System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext
                      ((System_Collections_Generic_Dictionary_Enumerator_object__object__o *)
                       &(__this->fields).m_Enumerator.fields.m_Object,
                       (MethodInfo_4CE66D0 *)
                       MethodInfo_System_Collections_Generic_Dictionary_Enumerator_string_JSONNode_MoveNext);
    return bVar2;
  }
  if (iVar1 == 1) {
    bVar2 = System_Collections_Generic_List_Enumerator_object___MoveNext
                      ((System_Collections_Generic_List_Enumerator_object__o *)
                       &(__this->fields).m_Enumerator.fields.m_Array,
                       (MethodInfo_4C45C50 *)
                       MethodInfo_System_Collections_Generic_List_Enumerator_JSONNode_MoveNext);
    return bVar2;
  }
  return false;
}


// SimpleJSONFixed.JSONNode.LinqEnumerator$$Dispose
// il2cpp: void SimpleJSONFixed_JSONNode_LinqEnumerator__Dispose (SimpleJSONFixed_JSONNode_LinqEnumerator_o* __this, const MethodInfo* method);
// 0x5865b70

void SimpleJSONFixed_JSONNode_LinqEnumerator__Dispose
               (SimpleJSONFixed_JSONNode_LinqEnumerator_o *__this,MethodInfo *method)

{
  SimpleJSONFixed_JSONNode_Enumerator_o *pSVar1;
  
  (__this->fields).m_Node = (SimpleJSONFixed_JSONNode_o *)0x0;
  Il2CppCodeGenWriteBarrier(&(__this->fields).m_Node);
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
// 0x5865bb0

System_Collections_Generic_IEnumerator_KeyValuePair_string__JSONNode___o *
SimpleJSONFixed_JSONNode_LinqEnumerator__GetEnumerator
          (SimpleJSONFixed_JSONNode_LinqEnumerator_o *__this,MethodInfo *method)

{
  SimpleJSONFixed_JSONNode_o *aNode;
  SimpleJSONFixed_JSONNode_LinqEnumerator_o *__this_00;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_075450eb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode_LinqEnumerator);
    Il2CppMethodInitialized_075450eb = '\x01';
  }
  aNode = (__this->fields).m_Node;
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode_LinqEnumerator);
  SimpleJSONFixed_JSONNode_LinqEnumerator___ctor(__this_00,aNode,method_00);
  return (System_Collections_Generic_IEnumerator_KeyValuePair_string__JSONNode___o *)__this_00;
}


// SimpleJSONFixed.JSONNode.LinqEnumerator$$Reset
// il2cpp: void SimpleJSONFixed_JSONNode_LinqEnumerator__Reset (SimpleJSONFixed_JSONNode_LinqEnumerator_o* __this, const MethodInfo* method);
// 0x5865c00
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5865c43: cmp byte ptr [rip + 0x1cdf48f], 0
// asm:   0x5865c4a: je 0x5865ce7

void SimpleJSONFixed_JSONNode_LinqEnumerator__Reset
               (SimpleJSONFixed_JSONNode_LinqEnumerator_o *__this,MethodInfo *method)

{
  uint32_t uVar1;
  SimpleJSONFixed_JSONNode_o *pSVar2;
  SimpleJSONFixed_JSONNode_Enumerator_o *pSVar3;
  bool bVar4;
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
  undefined8 local_60;
  System_Collections_Generic_Dictionary_TKey__TValue__o *pSStack_58;
  undefined8 local_50;
  Il2CppObject *pIStack_48;
  Il2CppObject *local_40;
  undefined8 uStack_38;
  System_Collections_Generic_List_T__o *local_30;
  undefined8 uStack_28;
  SimpleJSONFixed_JSONNode_o *local_20;
  
  if (Il2CppMethodInitialized_075450ec == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    Il2CppMethodInitialized_075450ec = '\x01';
    in_RDX = extraout_RDX;
  }
  pSVar2 = (__this->fields).m_Node;
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
    in_RDX = extraout_RDX_00;
  }
  if (Il2CppMethodInitialized_075450d9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    Il2CppMethodInitialized_075450d9 = '\x01';
    uVar1 = (TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor;
    in_RDX = extraout_RDX_01;
  }
  else {
    uVar1 = (((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode)->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
    in_RDX = extraout_RDX_02;
  }
  bVar4 = SimpleJSONFixed_JSONNode__op_Equality(pSVar2,(Il2CppObject *)0x0,in_RDX);
  if (!bVar4) {
    pSVar2 = (__this->fields).m_Node;
    if (pSVar2 == (SimpleJSONFixed_JSONNode_o *)0x0) {
      ThrowNullReferenceException();
    }
    (*(pSVar2->klass->vtable)._32_unknown.methodPtr)
              (&local_60,pSVar2,(pSVar2->klass->vtable)._32_unknown.method);
    (__this->fields).m_Enumerator.fields.m_Array.fields._current = local_20;
    (__this->fields).m_Enumerator.fields.m_Array.fields._list = local_30;
    pSVar3 = &(__this->fields).m_Enumerator;
    (pSVar3->fields).m_Array.fields._index = (undefined4)uStack_28;
    (pSVar3->fields).m_Array.fields._version = uStack_28._4_4_;
    (__this->fields).m_Enumerator.fields.m_Object.fields._current.fields.value = local_40;
    *(undefined8 *)&(__this->fields).m_Enumerator.fields.m_Object.fields._getEnumeratorRetType = uStack_38;
    pSVar3 = &(__this->fields).m_Enumerator;
    (pSVar3->fields).m_Object.fields._version = (undefined4)local_50;
    (pSVar3->fields).m_Object.fields._index = local_50._4_4_;
    (__this->fields).m_Enumerator.fields.m_Object.fields._current.fields.key = pIStack_48;
    *(undefined8 *)&(__this->fields).m_Enumerator.fields = local_60;
    (__this->fields).m_Enumerator.fields.m_Object.fields._dictionary = pSStack_58;
    Il2CppCodeGenWriteBarrier((void **)&(__this->fields).m_Enumerator.fields.m_Object);
  }
  return;
}


// SimpleJSONFixed.JSONNode.LinqEnumerator$$System.Collections.IEnumerable.GetEnumerator
// il2cpp: System_Collections_IEnumerator_o* SimpleJSONFixed_JSONNode_LinqEnumerator__System_Collections_IEnumerable_GetEnumerator (SimpleJSONFixed_JSONNode_LinqEnumerator_o* __this, const MethodInfo* method);
// 0x5865d20

System_Collections_IEnumerator_o *
SimpleJSONFixed_JSONNode_LinqEnumerator__System_Collections_IEnumerable_GetEnumerator
          (SimpleJSONFixed_JSONNode_LinqEnumerator_o *__this,MethodInfo *method)

{
  SimpleJSONFixed_JSONNode_o *aNode;
  SimpleJSONFixed_JSONNode_LinqEnumerator_o *__this_00;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_075450ed == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode_LinqEnumerator);
    Il2CppMethodInitialized_075450ed = '\x01';
  }
  aNode = (__this->fields).m_Node;
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode_LinqEnumerator);
  SimpleJSONFixed_JSONNode_LinqEnumerator___ctor(__this_00,aNode,method_00);
  return (System_Collections_IEnumerator_o *)__this_00;
}


// SimpleJSONFixed.JSONNode.<get_Children>d__43$$.ctor
// il2cpp: void SimpleJSONFixed_JSONNode__get_Children_d__43___ctor (SimpleJSONFixed_JSONNode__get_Children_d__43_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x5862c40

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
// 0x5865d70

void SimpleJSONFixed_JSONNode__get_Children_d__43__System_IDisposable_Dispose
               (SimpleJSONFixed_JSONNode__get_Children_d__43_o *__this,MethodInfo *method)

{
  return;
}


// SimpleJSONFixed.JSONNode.<get_Children>d__43$$MoveNext
// il2cpp: bool SimpleJSONFixed_JSONNode__get_Children_d__43__MoveNext (SimpleJSONFixed_JSONNode__get_Children_d__43_o* __this, const MethodInfo* method);
// 0x5865d80

bool SimpleJSONFixed_JSONNode__get_Children_d__43__MoveNext
               (SimpleJSONFixed_JSONNode__get_Children_d__43_o *__this,MethodInfo *method)

{
  if ((__this->fields).__1__state == 0) {
    (__this->fields).__1__state = -1;
    return false;
  }
  return false;
}


// SimpleJSONFixed.JSONNode.<get_Children>d__43$$System.Collections.Generic.IEnumerator<SimpleJSONFixed.JSONNode>.get_Current
// il2cpp: SimpleJSONFixed_JSONNode_o* SimpleJSONFixed_JSONNode__get_Children_d__43__System_Collections_Generic_IEnumerator_SimpleJSONFixed_JSONNode__get_Current (SimpleJSONFixed_JSONNode__get_Children_d__43_o* __this, const MethodInfo* method);
// 0x5865da0

SimpleJSONFixed_JSONNode_o *
SimpleJSONFixed_JSONNode__get_Children_d__43__System_Collections_Generic_IEnumerator_SimpleJSONFixed_JSONNode__get_Current
          (SimpleJSONFixed_JSONNode__get_Children_d__43_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// SimpleJSONFixed.JSONNode.<get_Children>d__43$$System.Collections.IEnumerator.Reset
// il2cpp: void SimpleJSONFixed_JSONNode__get_Children_d__43__System_Collections_IEnumerator_Reset (SimpleJSONFixed_JSONNode__get_Children_d__43_o* __this, const MethodInfo* method);
// 0x5865db0

void SimpleJSONFixed_JSONNode__get_Children_d__43__System_Collections_IEnumerator_Reset
               (SimpleJSONFixed_JSONNode__get_Children_d__43_o *__this,MethodInfo *method)

{
  Il2CppClass *klass;
  System_NotSupportedException_o *__this_00;
  MethodInfo *lastManagedFrame;
  
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_NotSupportedException);
  __this_00 = (System_NotSupportedException_o *)il2cpp_codegen_object_new(klass);
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  lastManagedFrame =
       il2cpp_codegen_get_runtime_metadata
                 (&MethodInfo_SimpleJSONFixed_JSONNode_get_Children_d__43_System_Collections_IEnumerator_Reset
                 );
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
}


// SimpleJSONFixed.JSONNode.<get_Children>d__43$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* SimpleJSONFixed_JSONNode__get_Children_d__43__System_Collections_IEnumerator_get_Current (SimpleJSONFixed_JSONNode__get_Children_d__43_o* __this, const MethodInfo* method);
// 0x5865df0

Il2CppObject *
SimpleJSONFixed_JSONNode__get_Children_d__43__System_Collections_IEnumerator_get_Current
          (SimpleJSONFixed_JSONNode__get_Children_d__43_o *__this,MethodInfo *method)

{
  return (Il2CppObject *)(__this->fields).__2__current;
}


// SimpleJSONFixed.JSONNode.<get_Children>d__43$$System.Collections.Generic.IEnumerable<SimpleJSONFixed.JSONNode>.GetEnumerator
// il2cpp: System_Collections_Generic_IEnumerator_JSONNode__o* SimpleJSONFixed_JSONNode__get_Children_d__43__System_Collections_Generic_IEnumerable_SimpleJSONFixed_JSONNode__GetEnumerator (SimpleJSONFixed_JSONNode__get_Children_d__43_o* __this, const MethodInfo* method);
// 0x5865e00

System_Collections_Generic_IEnumerator_JSONNode__o *
SimpleJSONFixed_JSONNode__get_Children_d__43__System_Collections_Generic_IEnumerable_SimpleJSONFixed_JSONNode__GetEnumerator
          (SimpleJSONFixed_JSONNode__get_Children_d__43_o *__this,MethodInfo *method)

{
  int iVar1;
  int32_t iVar2;
  SimpleJSONFixed_JSONNode__get_Children_d__43_o *__this_00;
  
  if (Il2CppMethodInitialized_075450ee == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode_get_Children_d__43);
    Il2CppMethodInitialized_075450ee = '\x01';
  }
  if (((__this->fields).__1__state == -2) &&
     (iVar1 = (__this->fields).__l__initialThreadId,
     iVar2 = System_Environment__get_CurrentManagedThreadId((MethodInfo *)0x0), iVar1 == iVar2)) {
    (__this->fields).__1__state = 0;
    return (System_Collections_Generic_IEnumerator_JSONNode__o *)__this;
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode_get_Children_d__43);
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).__1__state = 0;
  iVar2 = System_Environment__get_CurrentManagedThreadId((MethodInfo *)0x0);
  (__this_00->fields).__l__initialThreadId = iVar2;
  return (System_Collections_Generic_IEnumerator_JSONNode__o *)__this_00;
}


// SimpleJSONFixed.JSONNode.<get_Children>d__43$$System.Collections.IEnumerable.GetEnumerator
// il2cpp: System_Collections_IEnumerator_o* SimpleJSONFixed_JSONNode__get_Children_d__43__System_Collections_IEnumerable_GetEnumerator (SimpleJSONFixed_JSONNode__get_Children_d__43_o* __this, const MethodInfo* method);
// 0x5865e80

System_Collections_IEnumerator_o *
SimpleJSONFixed_JSONNode__get_Children_d__43__System_Collections_IEnumerable_GetEnumerator
          (SimpleJSONFixed_JSONNode__get_Children_d__43_o *__this,MethodInfo *method)

{
  int iVar1;
  int32_t iVar2;
  SimpleJSONFixed_JSONNode__get_Children_d__43_o *__this_00;
  
  if (Il2CppMethodInitialized_075450ee == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode_get_Children_d__43);
    Il2CppMethodInitialized_075450ee = '\x01';
  }
  if (((__this->fields).__1__state == -2) &&
     (iVar1 = (__this->fields).__l__initialThreadId,
     iVar2 = System_Environment__get_CurrentManagedThreadId((MethodInfo *)0x0), iVar1 == iVar2)) {
    (__this->fields).__1__state = 0;
    return (System_Collections_IEnumerator_o *)__this;
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode_get_Children_d__43);
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).__1__state = 0;
  iVar2 = System_Environment__get_CurrentManagedThreadId((MethodInfo *)0x0);
  (__this_00->fields).__l__initialThreadId = iVar2;
  return (System_Collections_IEnumerator_o *)__this_00;
}


// SimpleJSONFixed.JSONNode.<get_DeepChildren>d__45$$.ctor
// il2cpp: void SimpleJSONFixed_JSONNode__get_DeepChildren_d__45___ctor (SimpleJSONFixed_JSONNode__get_DeepChildren_d__45_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x5862ce0

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
// 0x5865f00
// eh: try 0x5865f79..0x5866006 -> pad 0x58660bb catch Il2CppExceptionWrapper, cleanup [compiler noexcept guard]
// eh: try 0x58660d2..0x58660d7 -> pad 0x58660dc cleanup
// eh: try 0x58660df..0x58660e7 -> pad 0x58660ef catch (...) [compiler noexcept guard]
// asm: 21 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5865f50: jmp 0x5866006
// asm:   0x58660a6: test r14, r14
// asm:   0x58660a9: jne 0x58660b3
// asm:   0x58660b3: mov rdi, r14
// asm:   0x58660b6: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x58660bb: mov rbx, rax
// asm:   0x58660be: cmp edx, 1
// asm:   0x58660c1: jne 0x58660df
// asm:   0x58660c3: mov rdi, rbx
// asm:   0x58660c6: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x58660cb: mov r14, qword ptr [rax]
// asm:   0x58660ce: mov qword ptr [rsp], r14
// asm:   0x58660d2: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x58660d7: jmp 0x5866009
// asm:   0x58660dc: mov rbx, rax
// asm:   0x58660df: mov rdi, rsp
// asm:   0x58660e2: call 0x2fcf3a0  ; il2cpp_runtime_helper_02fcf3a0()
// asm:   0x58660e7: mov rdi, rbx
// asm:   0x58660ea: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x58660ef: mov rdi, rax
// asm:   0x58660f2: call 0x2ab61e0  ; __clang_call_terminate()

void SimpleJSONFixed_JSONNode__get_DeepChildren_d__45__System_IDisposable_Dispose
               (SimpleJSONFixed_JSONNode__get_DeepChildren_d__45_o *__this,MethodInfo *method)

{
  uint uVar1;
  Il2CppObject *pIVar2;
  Il2CppClass *pIVar3;
  Il2CppRuntimeInterfaceOffsetPair *pIVar4;
  VirtualInvokeData *pVVar5;
  ulong uVar6;
  long lVar7;
  
  uVar1 = (__this->fields).__1__state;
  if ((uVar1 & 0xfffffffe) == 0xfffffffc) {
    if (uVar1 != 0xfffffffc) goto label_05866006;
    if (Il2CppMethodInitialized_075450f1 != '\0') goto label_05865f40;
label_05865f79:
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IDisposable);
    Il2CppMethodInitialized_075450f1 = '\x01';
    (__this->fields).__1__state = -3;
    pIVar2 = (Il2CppObject *)(__this->fields).__7__wrap2;
  }
  else {
    if (uVar1 != 1) {
      return;
    }
    if (Il2CppMethodInitialized_075450f1 == '\0') goto label_05865f79;
label_05865f40:
    (__this->fields).__1__state = -3;
    pIVar2 = (Il2CppObject *)(__this->fields).__7__wrap2;
  }
  if (pIVar2 != (Il2CppObject *)0x0) {
    pIVar3 = pIVar2->klass;
    uVar6 = (ulong)(pIVar3->_2).interface_offsets_count;
    if (uVar6 != 0) {
      pIVar4 = (pIVar3->_1).interfaceOffsets;
      lVar7 = 0;
      do {
        if (*(Il2CppClass **)((long)&pIVar4->interfaceType + lVar7) ==
            (Il2CppClass *)TypeInfo_System_IDisposable) {
          pVVar5 = (VirtualInvokeData *)&pIVar3->vtable[*(int *)((long)&pIVar4->offset + lVar7)].methodPtr;
          goto label_05865ffd;
        }
        lVar7 = lVar7 + 0x10;
      } while (uVar6 * 0x10 != lVar7);
    }
    pVVar5 = GetInterfaceInvokeDataFromVTableSlowPath(pIVar2,(Il2CppClass *)TypeInfo_System_IDisposable,0);
label_05865ffd:
    (*pVVar5->methodPtr)(pIVar2,pVVar5->method);
  }
label_05866006:
  if (Il2CppMethodInitialized_075450f0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IDisposable);
    Il2CppMethodInitialized_075450f0 = '\x01';
  }
  (__this->fields).__1__state = -1;
  pIVar2 = (Il2CppObject *)(__this->fields).__7__wrap1;
  if (pIVar2 != (Il2CppObject *)0x0) {
    pIVar3 = pIVar2->klass;
    uVar6 = (ulong)(pIVar3->_2).interface_offsets_count;
    if (uVar6 != 0) {
      pIVar4 = (pIVar3->_1).interfaceOffsets;
      lVar7 = 0;
      do {
        if (*(System_IDisposable_c **)((long)&pIVar4->interfaceType + lVar7) == TypeInfo_System_IDisposable) {
          pVVar5 = (VirtualInvokeData *)&pIVar3->vtable[*(int *)((long)&pIVar4->offset + lVar7)].methodPtr;
          goto label_0586609d;
        }
        lVar7 = lVar7 + 0x10;
      } while (uVar6 * 0x10 != lVar7);
    }
    pVVar5 = GetInterfaceInvokeDataFromVTableSlowPath(pIVar2,(Il2CppClass *)TypeInfo_System_IDisposable,0);
label_0586609d:
    (*pVVar5->methodPtr)(pIVar2,pVVar5->method);
  }
  return;
}


// SimpleJSONFixed.JSONNode.<get_DeepChildren>d__45$$MoveNext
// il2cpp: bool SimpleJSONFixed_JSONNode__get_DeepChildren_d__45__MoveNext (SimpleJSONFixed_JSONNode__get_DeepChildren_d__45_o* __this, const MethodInfo* method);
// 0x5866100
// eh: try 0x5866185..0x58666af -> pad 0x586622d (+18 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x58666df..0x58666e4 -> pad 0x5866706 cleanup
// eh: try 0x5866709..0x5866713 -> pad 0x586671b catch (...) [compiler noexcept guard]
// asm: 39 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x58661bd: nop dword ptr [rax]
// asm:   0x5866228: jmp 0x58666c7
// asm:   0x586622d: jmp 0x58666c7
// asm:   0x5866232: jmp 0x58666c7
// asm:   0x58663cc: nop dword ptr [rax]
// asm:   0x586659c: nop dword ptr [rax]
// asm:   0x58666af: jmp 0x58666c7
// asm:   0x58666b1: jmp 0x58666c7
// asm:   0x58666b3: jmp 0x58666c7
// asm:   0x58666b5: jmp 0x58666c7
// asm:   0x58666b7: jmp 0x58666c7
// asm:   0x58666b9: jmp 0x58666c7
// asm:   0x58666bb: jmp 0x58666c7
// asm:   0x58666bd: jmp 0x58666c7
// asm:   0x58666bf: jmp 0x58666c7
// asm:   0x58666c1: jmp 0x58666c7
// asm:   0x58666c3: jmp 0x58666c7
// asm:   0x58666c5: jmp 0x58666c7
// asm:   0x58666c7: mov rbx, rax
// asm:   0x58666ca: cmp edx, 1
// asm:   0x58666cd: jne 0x5866709
// asm:   0x58666cf: mov rdi, rbx
// asm:   0x58666d2: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x58666d7: mov rbx, qword ptr [rax]
// asm:   0x58666da: mov qword ptr [rsp + 8], rbx
// asm:   0x58666df: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x58666e4: test rbx, rbx
// asm:   0x58666e7: jne 0x58666f5
// asm:   0x58666f5: mov rdi, qword ptr [rsp]
// asm:   0x58666f9: call 0x2fcf7b0  ; il2cpp_runtime_helper_02fcf7b0()
// asm:   0x58666fe: mov rdi, rbx
// asm:   0x5866701: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5866706: mov rbx, rax
// asm:   0x5866709: lea rdi, [rsp + 8]
// asm:   0x586670e: call 0x2fcf450  ; il2cpp_runtime_helper_02fcf450()
// asm:   0x5866713: mov rdi, rbx
// asm:   0x5866716: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x586671b: mov rdi, rax
// asm:   0x586671e: call 0x2ab61e0  ; __clang_call_terminate()

bool SimpleJSONFixed_JSONNode__get_DeepChildren_d__45__MoveNext
               (SimpleJSONFixed_JSONNode__get_DeepChildren_d__45_o *__this,MethodInfo *method)

{
  int iVar1;
  SimpleJSONFixed_JSONNode_o *pSVar2;
  Il2CppClass *pIVar3;
  Il2CppRuntimeInterfaceOffsetPair *pIVar4;
  SimpleJSONFixed_JSONNode__get_DeepChildren_d__45_c *pSVar5;
  SimpleJSONFixed_JSONNode__get_DeepChildren_d__45_o **ppSVar6;
  bool bVar7;
  int32_t iVar8;
  Il2CppObject *pIVar9;
  VirtualInvokeData *pVVar10;
  SimpleJSONFixed_JSONNode__get_DeepChildren_d__45_o *pSVar11;
  ulong uVar12;
  long lVar13;
  SimpleJSONFixed_JSONNode__get_DeepChildren_d__45_o *pSStack_28;
  undefined8 uStack_20;
  undefined1 *puStack_18;
  
  pSStack_28 = __this;
  if (Il2CppMethodInitialized_075450ef == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_IEnumerable_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_IEnumerator_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_IEnumerator);
    Il2CppMethodInitialized_075450ef = '\x01';
  }
  puStack_18 = (undefined1 *)&pSStack_28;
  uStack_20 = 0;
  iVar1 = (__this->fields).__1__state;
  ppSVar6 = &pSStack_28;
  if (iVar1 == 1) goto label_05866392;
  if (iVar1 != 0) {
    return false;
  }
  pSVar2 = (__this->fields).__4__this;
  (__this->fields).__1__state = -1;
  if (pSVar2 == (SimpleJSONFixed_JSONNode_o *)0x0) {
    ThrowNullReferenceException();
  }
  puStack_18 = (undefined1 *)&pSStack_28;
  pIVar9 = (Il2CppObject *)
           (*(pSVar2->klass->vtable)._27_get_Children.methodPtr)
                     (pSVar2,(pSVar2->klass->vtable)._27_get_Children.method);
  if (pIVar9 == (Il2CppObject *)0x0) {
    ThrowNullReferenceException();
  }
  pIVar3 = pIVar9->klass;
  uVar12 = (ulong)(pIVar3->_2).interface_offsets_count;
  if (uVar12 != 0) {
    pIVar4 = (pIVar3->_1).interfaceOffsets;
    lVar13 = 0;
    do {
      if (*(System_Collections_Generic_IEnumerable_JSONNode__c **)((long)&pIVar4->interfaceType + lVar13) ==
          TypeInfo_System_Collections_Generic_IEnumerable_JSONNode) {
        pVVar10 = pIVar3->vtable + *(int *)((long)&pIVar4->offset + lVar13);
        goto label_058661f1;
      }
      lVar13 = lVar13 + 0x10;
    } while (uVar12 * 0x10 != lVar13);
  }
  pVVar10 = GetInterfaceInvokeDataFromVTableSlowPath
                      (pIVar9,(Il2CppClass *)TypeInfo_System_Collections_Generic_IEnumerable_JSONNode,0);
label_058661f1:
  pIVar9 = (*pVVar10->methodPtr)(pIVar9,pVVar10->method);
  (pSStack_28->fields).__7__wrap1 = (System_Collections_Generic_IEnumerator_JSONNode__o *)pIVar9;
  Il2CppCodeGenWriteBarrier(&(pSStack_28->fields).__7__wrap1);
  (pSStack_28->fields).__1__state = -3;
  do {
    pIVar9 = (Il2CppObject *)(pSStack_28->fields).__7__wrap1;
    if (pIVar9 == (Il2CppObject *)0x0) {
      ThrowNullReferenceException();
    }
    pIVar3 = pIVar9->klass;
    uVar12 = (ulong)(pIVar3->_2).interface_offsets_count;
    if (uVar12 != 0) {
      pIVar4 = (pIVar3->_1).interfaceOffsets;
      lVar13 = 0;
      do {
        if (*(System_Collections_IEnumerator_c **)((long)&pIVar4->interfaceType + lVar13) ==
            TypeInfo_System_Collections_IEnumerator) {
          pVVar10 = pIVar3->vtable + *(int *)((long)&pIVar4->offset + lVar13);
          goto label_05866531;
        }
        lVar13 = lVar13 + 0x10;
      } while (uVar12 * 0x10 != lVar13);
    }
    pVVar10 = GetInterfaceInvokeDataFromVTableSlowPath
                        (pIVar9,(Il2CppClass *)TypeInfo_System_Collections_IEnumerator,0);
label_05866531:
    bVar7 = (*pVVar10->methodPtr)(pIVar9,pVVar10->method);
    pSVar11 = pSStack_28;
    if (!bVar7) {
      if (Il2CppMethodInitialized_075450f0 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IDisposable);
        Il2CppMethodInitialized_075450f0 = '\x01';
      }
      (pSVar11->fields).__1__state = -1;
      pIVar9 = (Il2CppObject *)(pSVar11->fields).__7__wrap1;
      if (pIVar9 == (Il2CppObject *)0x0) goto label_0586667b;
      pIVar3 = pIVar9->klass;
      uVar12 = (ulong)(pIVar3->_2).interface_offsets_count;
      if (uVar12 == 0) goto label_058665b3;
      pIVar4 = (pIVar3->_1).interfaceOffsets;
      lVar13 = 0;
      break;
    }
    pIVar9 = (Il2CppObject *)(pSStack_28->fields).__7__wrap1;
    if (pIVar9 == (Il2CppObject *)0x0) {
      ThrowNullReferenceException();
    }
    pIVar3 = pIVar9->klass;
    uVar12 = (ulong)(pIVar3->_2).interface_offsets_count;
    if (uVar12 != 0) {
      pIVar4 = (pIVar3->_1).interfaceOffsets;
      lVar13 = 0;
      do {
        if (*(System_Collections_Generic_IEnumerator_JSONNode__c **)((long)&pIVar4->interfaceType + lVar13) ==
            TypeInfo_System_Collections_Generic_IEnumerator_JSONNode) {
          pVVar10 = pIVar3->vtable + *(int *)((long)&pIVar4->offset + lVar13);
          goto label_058662a1;
        }
        lVar13 = lVar13 + 0x10;
      } while (uVar12 * 0x10 != lVar13);
    }
    pVVar10 = GetInterfaceInvokeDataFromVTableSlowPath
                        (pIVar9,(Il2CppClass *)TypeInfo_System_Collections_Generic_IEnumerator_JSONNode,0);
label_058662a1:
    pIVar9 = (*pVVar10->methodPtr)(pIVar9,pVVar10->method);
    if (pIVar9 == (Il2CppObject *)0x0) {
      ThrowNullReferenceException();
    }
    if (Il2CppMethodInitialized_075450c0 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode_get_DeepChildren_d__45);
      Il2CppMethodInitialized_075450c0 = '\x01';
    }
    pSVar11 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode_get_DeepChildren_d__45);
    System_Object___ctor((Il2CppObject *)pSVar11,(MethodInfo *)0x0);
    (pSVar11->fields).__1__state = -2;
    iVar8 = System_Environment__get_CurrentManagedThreadId((MethodInfo *)0x0);
    (pSVar11->fields).__l__initialThreadId = iVar8;
    (pSVar11->fields).__4__this = (SimpleJSONFixed_JSONNode_o *)pIVar9;
    Il2CppCodeGenWriteBarrier(&(pSVar11->fields).__4__this);
    pSVar5 = pSVar11->klass;
    uVar12 = (ulong)(pSVar5->_2).interface_offsets_count;
    if (uVar12 != 0) {
      pIVar4 = (pSVar5->_1).interfaceOffsets;
      lVar13 = 0;
      do {
        if (*(System_Collections_Generic_IEnumerable_JSONNode__c **)((long)&pIVar4->interfaceType + lVar13) ==
            TypeInfo_System_Collections_Generic_IEnumerable_JSONNode) {
          pVVar10 = &(pSVar5->vtable)._0_Equals + *(int *)((long)&pIVar4->offset + lVar13);
          goto label_05866371;
        }
        lVar13 = lVar13 + 0x10;
      } while (uVar12 * 0x10 != lVar13);
    }
    pVVar10 = GetInterfaceInvokeDataFromVTableSlowPath
                        ((Il2CppObject *)pSVar11,
                         (Il2CppClass *)TypeInfo_System_Collections_Generic_IEnumerable_JSONNode,0);
label_05866371:
    pIVar9 = (*pVVar10->methodPtr)((Il2CppObject *)pSVar11,pVVar10->method);
    (pSStack_28->fields).__7__wrap2 = (System_Collections_Generic_IEnumerator_JSONNode__o *)pIVar9;
    Il2CppCodeGenWriteBarrier(&(pSStack_28->fields).__7__wrap2);
    __this = pSStack_28;
    ppSVar6 = (SimpleJSONFixed_JSONNode__get_DeepChildren_d__45_o **)puStack_18;
label_05866392:
    puStack_18 = (undefined1 *)ppSVar6;
    (__this->fields).__1__state = -4;
    pIVar9 = (Il2CppObject *)(__this->fields).__7__wrap2;
    if (pIVar9 == (Il2CppObject *)0x0) {
      ThrowNullReferenceException();
    }
    pIVar3 = pIVar9->klass;
    uVar12 = (ulong)(pIVar3->_2).interface_offsets_count;
    if (uVar12 != 0) {
      pIVar4 = (pIVar3->_1).interfaceOffsets;
      lVar13 = 0;
      do {
        if (*(System_Collections_IEnumerator_c **)((long)&pIVar4->interfaceType + lVar13) ==
            TypeInfo_System_Collections_IEnumerator) {
          pVVar10 = pIVar3->vtable + *(int *)((long)&pIVar4->offset + lVar13);
          goto label_05866401;
        }
        lVar13 = lVar13 + 0x10;
      } while (uVar12 * 0x10 != lVar13);
    }
    pVVar10 = GetInterfaceInvokeDataFromVTableSlowPath
                        (pIVar9,(Il2CppClass *)TypeInfo_System_Collections_IEnumerator,0);
label_05866401:
    bVar7 = (*pVVar10->methodPtr)(pIVar9,pVVar10->method);
    pSVar11 = pSStack_28;
    if (bVar7) {
      pIVar9 = (Il2CppObject *)(pSStack_28->fields).__7__wrap2;
      if (pIVar9 == (Il2CppObject *)0x0) {
        ThrowNullReferenceException();
      }
      pIVar3 = pIVar9->klass;
      uVar12 = (ulong)(pIVar3->_2).interface_offsets_count;
      if (uVar12 == 0) goto label_0586660f;
      pIVar4 = (pIVar3->_1).interfaceOffsets;
      lVar13 = 0;
      goto label_05866600;
    }
    if (Il2CppMethodInitialized_075450f1 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IDisposable);
      Il2CppMethodInitialized_075450f1 = '\x01';
    }
    (pSVar11->fields).__1__state = -3;
    pIVar9 = (Il2CppObject *)(pSVar11->fields).__7__wrap2;
    if (pIVar9 != (Il2CppObject *)0x0) {
      pIVar3 = pIVar9->klass;
      uVar12 = (ulong)(pIVar3->_2).interface_offsets_count;
      if (uVar12 != 0) {
        pIVar4 = (pIVar3->_1).interfaceOffsets;
        lVar13 = 0;
        do {
          if (*(System_IDisposable_c **)((long)&pIVar4->interfaceType + lVar13) == TypeInfo_System_IDisposable
             ) {
            pVVar10 = pIVar3->vtable + *(int *)((long)&pIVar4->offset + lVar13);
            goto label_0586649d;
          }
          lVar13 = lVar13 + 0x10;
        } while (uVar12 * 0x10 != lVar13);
      }
      pVVar10 = GetInterfaceInvokeDataFromVTableSlowPath(pIVar9,(Il2CppClass *)TypeInfo_System_IDisposable,0);
label_0586649d:
      (*pVVar10->methodPtr)(pIVar9,pVVar10->method);
    }
    (pSStack_28->fields).__7__wrap2 = (System_Collections_Generic_IEnumerator_JSONNode__o *)0x0;
    Il2CppCodeGenWriteBarrier(&(pSStack_28->fields).__7__wrap2);
  } while( true );
  while (lVar13 = lVar13 + 0x10, uVar12 * 0x10 != lVar13) {
    if (*(System_IDisposable_c **)((long)&pIVar4->interfaceType + lVar13) == TypeInfo_System_IDisposable) {
      pVVar10 = pIVar3->vtable + *(int *)((long)&pIVar4->offset + lVar13);
      goto label_05866672;
    }
  }
label_058665b3:
  pVVar10 = GetInterfaceInvokeDataFromVTableSlowPath(pIVar9,(Il2CppClass *)TypeInfo_System_IDisposable,0);
label_05866672:
  (*pVVar10->methodPtr)(pIVar9,pVVar10->method);
label_0586667b:
  (pSStack_28->fields).__7__wrap1 = (System_Collections_Generic_IEnumerator_JSONNode__o *)0x0;
  Il2CppCodeGenWriteBarrier(&(pSStack_28->fields).__7__wrap1);
  return false;
  while (lVar13 = lVar13 + 0x10, uVar12 * 0x10 != lVar13) {
label_05866600:
    if (*(System_Collections_Generic_IEnumerator_JSONNode__c **)((long)&pIVar4->interfaceType + lVar13) ==
        TypeInfo_System_Collections_Generic_IEnumerator_JSONNode) {
      pVVar10 = pIVar3->vtable + *(int *)((long)&pIVar4->offset + lVar13);
      goto label_05866631;
    }
  }
label_0586660f:
  pVVar10 = GetInterfaceInvokeDataFromVTableSlowPath
                      (pIVar9,(Il2CppClass *)TypeInfo_System_Collections_Generic_IEnumerator_JSONNode,0);
label_05866631:
  pIVar9 = (*pVVar10->methodPtr)(pIVar9,pVVar10->method);
  (pSStack_28->fields).__2__current = (SimpleJSONFixed_JSONNode_o *)pIVar9;
  Il2CppCodeGenWriteBarrier(&(pSStack_28->fields).__2__current);
  (pSStack_28->fields).__1__state = 1;
  return true;
}


// SimpleJSONFixed.JSONNode.<get_DeepChildren>d__45$$<>m__Finally1
// il2cpp: void SimpleJSONFixed_JSONNode__get_DeepChildren_d__45____m__Finally1 (SimpleJSONFixed_JSONNode__get_DeepChildren_d__45_o* __this, const MethodInfo* method);
// 0x58667d0

void SimpleJSONFixed_JSONNode__get_DeepChildren_d__45____m__Finally1
               (SimpleJSONFixed_JSONNode__get_DeepChildren_d__45_o *__this,MethodInfo *method)

{
  Il2CppObject *obj;
  Il2CppClass *pIVar1;
  Il2CppRuntimeInterfaceOffsetPair *pIVar2;
  VirtualInvokeData *pVVar3;
  ulong uVar4;
  long lVar5;
  
  if (Il2CppMethodInitialized_075450f0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IDisposable);
    Il2CppMethodInitialized_075450f0 = '\x01';
  }
  (__this->fields).__1__state = -1;
  obj = (Il2CppObject *)(__this->fields).__7__wrap1;
  if (obj == (Il2CppObject *)0x0) {
    return;
  }
  pIVar1 = obj->klass;
  uVar4 = (ulong)(pIVar1->_2).interface_offsets_count;
  if (uVar4 != 0) {
    pIVar2 = (pIVar1->_1).interfaceOffsets;
    lVar5 = 0;
    do {
      if (*(System_IDisposable_c **)((long)&pIVar2->interfaceType + lVar5) == TypeInfo_System_IDisposable) {
        pVVar3 = pIVar1->vtable + *(int *)((long)&pIVar2->offset + lVar5);
        goto label_0586685f;
      }
      lVar5 = lVar5 + 0x10;
    } while (uVar4 * 0x10 != lVar5);
  }
  pVVar3 = GetInterfaceInvokeDataFromVTableSlowPath(obj,(Il2CppClass *)TypeInfo_System_IDisposable,0);
label_0586685f:
  (*pVVar3->methodPtr)(obj,pVVar3->method);
  return;
}


// SimpleJSONFixed.JSONNode.<get_DeepChildren>d__45$$<>m__Finally2
// il2cpp: void SimpleJSONFixed_JSONNode__get_DeepChildren_d__45____m__Finally2 (SimpleJSONFixed_JSONNode__get_DeepChildren_d__45_o* __this, const MethodInfo* method);
// 0x5866730

void SimpleJSONFixed_JSONNode__get_DeepChildren_d__45____m__Finally2
               (SimpleJSONFixed_JSONNode__get_DeepChildren_d__45_o *__this,MethodInfo *method)

{
  Il2CppObject *obj;
  Il2CppClass *pIVar1;
  Il2CppRuntimeInterfaceOffsetPair *pIVar2;
  VirtualInvokeData *pVVar3;
  ulong uVar4;
  long lVar5;
  
  if (Il2CppMethodInitialized_075450f1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IDisposable);
    Il2CppMethodInitialized_075450f1 = '\x01';
  }
  (__this->fields).__1__state = -3;
  obj = (Il2CppObject *)(__this->fields).__7__wrap2;
  if (obj == (Il2CppObject *)0x0) {
    return;
  }
  pIVar1 = obj->klass;
  uVar4 = (ulong)(pIVar1->_2).interface_offsets_count;
  if (uVar4 != 0) {
    pIVar2 = (pIVar1->_1).interfaceOffsets;
    lVar5 = 0;
    do {
      if (*(System_IDisposable_c **)((long)&pIVar2->interfaceType + lVar5) == TypeInfo_System_IDisposable) {
        pVVar3 = pIVar1->vtable + *(int *)((long)&pIVar2->offset + lVar5);
        goto label_058667bf;
      }
      lVar5 = lVar5 + 0x10;
    } while (uVar4 * 0x10 != lVar5);
  }
  pVVar3 = GetInterfaceInvokeDataFromVTableSlowPath(obj,(Il2CppClass *)TypeInfo_System_IDisposable,0);
label_058667bf:
  (*pVVar3->methodPtr)(obj,pVVar3->method);
  return;
}


// SimpleJSONFixed.JSONNode.<get_DeepChildren>d__45$$System.Collections.Generic.IEnumerator<SimpleJSONFixed.JSONNode>.get_Current
// il2cpp: SimpleJSONFixed_JSONNode_o* SimpleJSONFixed_JSONNode__get_DeepChildren_d__45__System_Collections_Generic_IEnumerator_SimpleJSONFixed_JSONNode__get_Current (SimpleJSONFixed_JSONNode__get_DeepChildren_d__45_o* __this, const MethodInfo* method);
// 0x5866870

SimpleJSONFixed_JSONNode_o *
SimpleJSONFixed_JSONNode__get_DeepChildren_d__45__System_Collections_Generic_IEnumerator_SimpleJSONFixed_JSONNode__get_Current
          (SimpleJSONFixed_JSONNode__get_DeepChildren_d__45_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// SimpleJSONFixed.JSONNode.<get_DeepChildren>d__45$$System.Collections.IEnumerator.Reset
// il2cpp: void SimpleJSONFixed_JSONNode__get_DeepChildren_d__45__System_Collections_IEnumerator_Reset (SimpleJSONFixed_JSONNode__get_DeepChildren_d__45_o* __this, const MethodInfo* method);
// 0x5866880

void SimpleJSONFixed_JSONNode__get_DeepChildren_d__45__System_Collections_IEnumerator_Reset
               (SimpleJSONFixed_JSONNode__get_DeepChildren_d__45_o *__this,MethodInfo *method)

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
                  MethodInfo_SimpleJSONFixed_JSONNode_get_DeepChildren_d__45_System_Collections_IEnumerator_Reset
                 );
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
}


// SimpleJSONFixed.JSONNode.<get_DeepChildren>d__45$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* SimpleJSONFixed_JSONNode__get_DeepChildren_d__45__System_Collections_IEnumerator_get_Current (SimpleJSONFixed_JSONNode__get_DeepChildren_d__45_o* __this, const MethodInfo* method);
// 0x58668c0

Il2CppObject *
SimpleJSONFixed_JSONNode__get_DeepChildren_d__45__System_Collections_IEnumerator_get_Current
          (SimpleJSONFixed_JSONNode__get_DeepChildren_d__45_o *__this,MethodInfo *method)

{
  return (Il2CppObject *)(__this->fields).__2__current;
}


// SimpleJSONFixed.JSONNode.<get_DeepChildren>d__45$$System.Collections.Generic.IEnumerable<SimpleJSONFixed.JSONNode>.GetEnumerator
// il2cpp: System_Collections_Generic_IEnumerator_JSONNode__o* SimpleJSONFixed_JSONNode__get_DeepChildren_d__45__System_Collections_Generic_IEnumerable_SimpleJSONFixed_JSONNode__GetEnumerator (SimpleJSONFixed_JSONNode__get_DeepChildren_d__45_o* __this, const MethodInfo* method);
// 0x58668d0

System_Collections_IEnumerator_o *
SimpleJSONFixed_JSONNode__get_DeepChildren_d__45__System_Collections_Generic_IEnumerable_SimpleJSONFixed_JSONNode__GetEnumerator
          (SimpleJSONFixed_JSONNode__get_DeepChildren_d__45_o *__this,MethodInfo *method)

{
  int iVar1;
  int32_t iVar2;
  SimpleJSONFixed_JSONNode__get_DeepChildren_d__45_o *__this_00;
  
  if (Il2CppMethodInitialized_075450f2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode_get_DeepChildren_d__45);
    Il2CppMethodInitialized_075450f2 = '\x01';
  }
  if (((__this->fields).__1__state == -2) &&
     (iVar1 = (__this->fields).__l__initialThreadId,
     iVar2 = System_Environment__get_CurrentManagedThreadId((MethodInfo *)0x0), iVar1 == iVar2)) {
    (__this->fields).__1__state = 0;
    return (System_Collections_IEnumerator_o *)__this;
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode_get_DeepChildren_d__45);
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).__1__state = 0;
  iVar2 = System_Environment__get_CurrentManagedThreadId((MethodInfo *)0x0);
  (__this_00->fields).__l__initialThreadId = iVar2;
  (__this_00->fields).__4__this = (__this->fields).__4__this;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this);
  return (System_Collections_IEnumerator_o *)__this_00;
}


// SimpleJSONFixed.JSONNode.<get_DeepChildren>d__45$$System.Collections.IEnumerable.GetEnumerator
// il2cpp: System_Collections_IEnumerator_o* SimpleJSONFixed_JSONNode__get_DeepChildren_d__45__System_Collections_IEnumerable_GetEnumerator (SimpleJSONFixed_JSONNode__get_DeepChildren_d__45_o* __this, const MethodInfo* method);
// 0x5866970

System_Collections_IEnumerator_o *
SimpleJSONFixed_JSONNode__get_DeepChildren_d__45__System_Collections_IEnumerable_GetEnumerator
          (SimpleJSONFixed_JSONNode__get_DeepChildren_d__45_o *__this,MethodInfo *method)

{
  System_Collections_IEnumerator_o *pSVar1;
  
  pSVar1 = SimpleJSONFixed_JSONNode__get_DeepChildren_d__45__System_Collections_Generic_IEnumerable_SimpleJSONFixed_JSONNode__GetEnumerator
                     (__this,method);
  return pSVar1;
}


// SimpleJSONFixed.JSONNode$$get_Item
// il2cpp: SimpleJSONFixed_JSONNode_o* SimpleJSONFixed_JSONNode__get_Item (SimpleJSONFixed_JSONNode_o* __this, int32_t aIndex, const MethodInfo* method);
// 0x5862a20

SimpleJSONFixed_JSONNode_o *
SimpleJSONFixed_JSONNode__get_Item(SimpleJSONFixed_JSONNode_o *__this,int32_t aIndex,MethodInfo *method)

{
  return (SimpleJSONFixed_JSONNode_o *)0x0;
}


// SimpleJSONFixed.JSONNode$$set_Item
// il2cpp: void SimpleJSONFixed_JSONNode__set_Item (SimpleJSONFixed_JSONNode_o* __this, int32_t aIndex, SimpleJSONFixed_JSONNode_o* value, const MethodInfo* method);
// 0x5862a30

void SimpleJSONFixed_JSONNode__set_Item
               (SimpleJSONFixed_JSONNode_o *__this,int32_t aIndex,SimpleJSONFixed_JSONNode_o *value,
               MethodInfo *method)

{
  return;
}


// SimpleJSONFixed.JSONNode$$get_Item
// il2cpp: SimpleJSONFixed_JSONNode_o* SimpleJSONFixed_JSONNode__get_Item (SimpleJSONFixed_JSONNode_o* __this, System_String_o* aKey, const MethodInfo* method);
// 0x5862a40

SimpleJSONFixed_JSONNode_o *
SimpleJSONFixed_JSONNode__get_Item_5762a40
          (SimpleJSONFixed_JSONNode_o *__this,System_String_o *aKey,MethodInfo *method)

{
  return (SimpleJSONFixed_JSONNode_o *)0x0;
}


// SimpleJSONFixed.JSONNode$$set_Item
// il2cpp: void SimpleJSONFixed_JSONNode__set_Item (SimpleJSONFixed_JSONNode_o* __this, System_String_o* aKey, SimpleJSONFixed_JSONNode_o* value, const MethodInfo* method);
// 0x5862a50

void SimpleJSONFixed_JSONNode__set_Item_5762a50
               (SimpleJSONFixed_JSONNode_o *__this,System_String_o *aKey,SimpleJSONFixed_JSONNode_o *value,
               MethodInfo *method)

{
  return;
}


// SimpleJSONFixed.JSONNode$$get_Value
// il2cpp: System_String_o* SimpleJSONFixed_JSONNode__get_Value (SimpleJSONFixed_JSONNode_o* __this, const MethodInfo* method);
// 0x5862a60

System_String_o * SimpleJSONFixed_JSONNode__get_Value(SimpleJSONFixed_JSONNode_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_075450bd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_075450bd = '\x01';
  }
  return "";
}


// SimpleJSONFixed.JSONNode$$set_Value
// il2cpp: void SimpleJSONFixed_JSONNode__set_Value (SimpleJSONFixed_JSONNode_o* __this, System_String_o* value, const MethodInfo* method);
// 0x5862a90

void SimpleJSONFixed_JSONNode__set_Value
               (SimpleJSONFixed_JSONNode_o *__this,System_String_o *value,MethodInfo *method)

{
  return;
}


// SimpleJSONFixed.JSONNode$$get_Count
// il2cpp: int32_t SimpleJSONFixed_JSONNode__get_Count (SimpleJSONFixed_JSONNode_o* __this, const MethodInfo* method);
// 0x5862aa0

int32_t SimpleJSONFixed_JSONNode__get_Count(SimpleJSONFixed_JSONNode_o *__this,MethodInfo *method)

{
  return 0;
}


// SimpleJSONFixed.JSONNode$$get_IsNumber
// il2cpp: bool SimpleJSONFixed_JSONNode__get_IsNumber (SimpleJSONFixed_JSONNode_o* __this, const MethodInfo* method);
// 0x5862ab0

bool SimpleJSONFixed_JSONNode__get_IsNumber(SimpleJSONFixed_JSONNode_o *__this,MethodInfo *method)

{
  return false;
}


// SimpleJSONFixed.JSONNode$$get_IsString
// il2cpp: bool SimpleJSONFixed_JSONNode__get_IsString (SimpleJSONFixed_JSONNode_o* __this, const MethodInfo* method);
// 0x5862ac0

bool SimpleJSONFixed_JSONNode__get_IsString(SimpleJSONFixed_JSONNode_o *__this,MethodInfo *method)

{
  return false;
}


// SimpleJSONFixed.JSONNode$$get_IsBoolean
// il2cpp: bool SimpleJSONFixed_JSONNode__get_IsBoolean (SimpleJSONFixed_JSONNode_o* __this, const MethodInfo* method);
// 0x5862ad0

bool SimpleJSONFixed_JSONNode__get_IsBoolean(SimpleJSONFixed_JSONNode_o *__this,MethodInfo *method)

{
  return false;
}


// SimpleJSONFixed.JSONNode$$get_IsNull
// il2cpp: bool SimpleJSONFixed_JSONNode__get_IsNull (SimpleJSONFixed_JSONNode_o* __this, const MethodInfo* method);
// 0x5862ae0

bool SimpleJSONFixed_JSONNode__get_IsNull(SimpleJSONFixed_JSONNode_o *__this,MethodInfo *method)

{
  return false;
}


// SimpleJSONFixed.JSONNode$$get_IsArray
// il2cpp: bool SimpleJSONFixed_JSONNode__get_IsArray (SimpleJSONFixed_JSONNode_o* __this, const MethodInfo* method);
// 0x5862af0

bool SimpleJSONFixed_JSONNode__get_IsArray(SimpleJSONFixed_JSONNode_o *__this,MethodInfo *method)

{
  return false;
}


// SimpleJSONFixed.JSONNode$$get_IsObject
// il2cpp: bool SimpleJSONFixed_JSONNode__get_IsObject (SimpleJSONFixed_JSONNode_o* __this, const MethodInfo* method);
// 0x5862b00

bool SimpleJSONFixed_JSONNode__get_IsObject(SimpleJSONFixed_JSONNode_o *__this,MethodInfo *method)

{
  return false;
}


// SimpleJSONFixed.JSONNode$$get_Inline
// il2cpp: bool SimpleJSONFixed_JSONNode__get_Inline (SimpleJSONFixed_JSONNode_o* __this, const MethodInfo* method);
// 0x5862b10

bool SimpleJSONFixed_JSONNode__get_Inline(SimpleJSONFixed_JSONNode_o *__this,MethodInfo *method)

{
  return false;
}


// SimpleJSONFixed.JSONNode$$set_Inline
// il2cpp: void SimpleJSONFixed_JSONNode__set_Inline (SimpleJSONFixed_JSONNode_o* __this, bool value, const MethodInfo* method);
// 0x5862b20

void SimpleJSONFixed_JSONNode__set_Inline(SimpleJSONFixed_JSONNode_o *__this,bool value,MethodInfo *method)

{
  return;
}


// SimpleJSONFixed.JSONNode$$Add
// il2cpp: void SimpleJSONFixed_JSONNode__Add (SimpleJSONFixed_JSONNode_o* __this, System_String_o* aKey, SimpleJSONFixed_JSONNode_o* aItem, const MethodInfo* method);
// 0x5862b30

void SimpleJSONFixed_JSONNode__Add
               (SimpleJSONFixed_JSONNode_o *__this,System_String_o *aKey,SimpleJSONFixed_JSONNode_o *aItem,
               MethodInfo *method)

{
  return;
}


// SimpleJSONFixed.JSONNode$$Add
// il2cpp: void SimpleJSONFixed_JSONNode__Add (SimpleJSONFixed_JSONNode_o* __this, SimpleJSONFixed_JSONNode_o* aItem, const MethodInfo* method);
// 0x5862b40

void SimpleJSONFixed_JSONNode__Add_5762b40
               (SimpleJSONFixed_JSONNode_o *__this,SimpleJSONFixed_JSONNode_o *aItem,MethodInfo *method)

{
  if (Il2CppMethodInitialized_075450be == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_075450be = '\x01';
  }
  (*(__this->klass->vtable)._20_Add.methodPtr)
            (__this,"",aItem,(__this->klass->vtable)._20_Add.method);
  return;
}


// SimpleJSONFixed.JSONNode$$Remove
// il2cpp: SimpleJSONFixed_JSONNode_o* SimpleJSONFixed_JSONNode__Remove (SimpleJSONFixed_JSONNode_o* __this, System_String_o* aKey, const MethodInfo* method);
// 0x5862ba0

SimpleJSONFixed_JSONNode_o *
SimpleJSONFixed_JSONNode__Remove(SimpleJSONFixed_JSONNode_o *__this,System_String_o *aKey,MethodInfo *method)

{
  return (SimpleJSONFixed_JSONNode_o *)0x0;
}


// SimpleJSONFixed.JSONNode$$Remove
// il2cpp: SimpleJSONFixed_JSONNode_o* SimpleJSONFixed_JSONNode__Remove (SimpleJSONFixed_JSONNode_o* __this, int32_t aIndex, const MethodInfo* method);
// 0x5862bb0

SimpleJSONFixed_JSONNode_o *
SimpleJSONFixed_JSONNode__Remove_5762bb0(SimpleJSONFixed_JSONNode_o *__this,int32_t aIndex,MethodInfo *method)

{
  return (SimpleJSONFixed_JSONNode_o *)0x0;
}


// SimpleJSONFixed.JSONNode$$Remove
// il2cpp: SimpleJSONFixed_JSONNode_o* SimpleJSONFixed_JSONNode__Remove (SimpleJSONFixed_JSONNode_o* __this, SimpleJSONFixed_JSONNode_o* aNode, const MethodInfo* method);
// 0x5862bc0

SimpleJSONFixed_JSONNode_o *
SimpleJSONFixed_JSONNode__Remove_5762bc0
          (SimpleJSONFixed_JSONNode_o *__this,SimpleJSONFixed_JSONNode_o *aNode,MethodInfo *method)

{
  return aNode;
}


// SimpleJSONFixed.JSONNode$$Clear
// il2cpp: void SimpleJSONFixed_JSONNode__Clear (SimpleJSONFixed_JSONNode_o* __this, const MethodInfo* method);
// 0x5862bd0

void SimpleJSONFixed_JSONNode__Clear(SimpleJSONFixed_JSONNode_o *__this,MethodInfo *method)

{
  return;
}


// SimpleJSONFixed.JSONNode$$Clone
// il2cpp: SimpleJSONFixed_JSONNode_o* SimpleJSONFixed_JSONNode__Clone (SimpleJSONFixed_JSONNode_o* __this, const MethodInfo* method);
// 0x5862be0

SimpleJSONFixed_JSONNode_o *
SimpleJSONFixed_JSONNode__Clone(SimpleJSONFixed_JSONNode_o *__this,MethodInfo *method)

{
  return (SimpleJSONFixed_JSONNode_o *)0x0;
}


// SimpleJSONFixed.JSONNode$$get_Children
// il2cpp: System_Collections_Generic_IEnumerable_JSONNode__o* SimpleJSONFixed_JSONNode__get_Children (SimpleJSONFixed_JSONNode_o* __this, const MethodInfo* method);
// 0x5862bf0

System_Collections_Generic_IEnumerable_JSONNode__o *
SimpleJSONFixed_JSONNode__get_Children(SimpleJSONFixed_JSONNode_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  SimpleJSONFixed_JSONNode__get_Children_d__43_o *__this_00;
  
  if (Il2CppMethodInitialized_075450bf == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode_get_Children_d__43);
    Il2CppMethodInitialized_075450bf = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode_get_Children_d__43);
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).__1__state = -2;
  iVar1 = System_Environment__get_CurrentManagedThreadId((MethodInfo *)0x0);
  (__this_00->fields).__l__initialThreadId = iVar1;
  return (System_Collections_Generic_IEnumerable_JSONNode__o *)__this_00;
}


// SimpleJSONFixed.JSONNode$$get_DeepChildren
// il2cpp: System_Collections_Generic_IEnumerable_JSONNode__o* SimpleJSONFixed_JSONNode__get_DeepChildren (SimpleJSONFixed_JSONNode_o* __this, const MethodInfo* method);
// 0x5862c70

System_Collections_Generic_IEnumerable_JSONNode__o *
SimpleJSONFixed_JSONNode__get_DeepChildren(SimpleJSONFixed_JSONNode_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  SimpleJSONFixed_JSONNode__get_DeepChildren_d__45_o *__this_00;
  
  if (Il2CppMethodInitialized_075450c0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode_get_DeepChildren_d__45);
    Il2CppMethodInitialized_075450c0 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode_get_DeepChildren_d__45);
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).__1__state = -2;
  iVar1 = System_Environment__get_CurrentManagedThreadId((MethodInfo *)0x0);
  (__this_00->fields).__l__initialThreadId = iVar1;
  (__this_00->fields).__4__this = __this;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this);
  return (System_Collections_Generic_IEnumerable_JSONNode__o *)__this_00;
}


// SimpleJSONFixed.JSONNode$$HasKey
// il2cpp: bool SimpleJSONFixed_JSONNode__HasKey (SimpleJSONFixed_JSONNode_o* __this, System_String_o* aKey, const MethodInfo* method);
// 0x5862d10

bool SimpleJSONFixed_JSONNode__HasKey
               (SimpleJSONFixed_JSONNode_o *__this,System_String_o *aKey,MethodInfo *method)

{
  return false;
}


// SimpleJSONFixed.JSONNode$$GetValueOrDefault
// il2cpp: SimpleJSONFixed_JSONNode_o* SimpleJSONFixed_JSONNode__GetValueOrDefault (SimpleJSONFixed_JSONNode_o* __this, System_String_o* aKey, SimpleJSONFixed_JSONNode_o* aDefault, const MethodInfo* method);
// 0x5862d20

SimpleJSONFixed_JSONNode_o *
SimpleJSONFixed_JSONNode__GetValueOrDefault
          (SimpleJSONFixed_JSONNode_o *__this,System_String_o *aKey,SimpleJSONFixed_JSONNode_o *aDefault,
          MethodInfo *method)

{
  return aDefault;
}


// SimpleJSONFixed.JSONNode$$ToString
// il2cpp: System_String_o* SimpleJSONFixed_JSONNode__ToString (SimpleJSONFixed_JSONNode_o* __this, const MethodInfo* method);
// 0x5862d30

System_String_o * SimpleJSONFixed_JSONNode__ToString(SimpleJSONFixed_JSONNode_o *__this,MethodInfo *method)

{
  System_Text_StringBuilder_o *__this_00;
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_075450c1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Text_StringBuilder);
    Il2CppMethodInitialized_075450c1 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Text_StringBuilder);
  System_Text_StringBuilder___ctor(__this_00,(MethodInfo *)0x0);
  (*(__this->klass->vtable)._31_unknown.methodPtr)
            (__this,__this_00,0,0,0,(__this->klass->vtable)._31_unknown.method);
  if (__this_00 == (System_Text_StringBuilder_o *)0x0) {
    ThrowNullReferenceException();
  }
  pSVar1 = (*(__this_00->klass->vtable)._3_ToString.methodPtr)
                     (__this_00,(__this_00->klass->vtable)._3_ToString.method);
  return pSVar1;
}


// SimpleJSONFixed.JSONNode$$ToString
// il2cpp: System_String_o* SimpleJSONFixed_JSONNode__ToString (SimpleJSONFixed_JSONNode_o* __this, int32_t aIndent, const MethodInfo* method);
// 0x5862dc0

System_String_o *
SimpleJSONFixed_JSONNode__ToString_5762dc0
          (SimpleJSONFixed_JSONNode_o *__this,int32_t aIndent,MethodInfo *method)

{
  System_Text_StringBuilder_o *__this_00;
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_075450c2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Text_StringBuilder);
    Il2CppMethodInitialized_075450c2 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Text_StringBuilder);
  System_Text_StringBuilder___ctor(__this_00,(MethodInfo *)0x0);
  (*(__this->klass->vtable)._31_unknown.methodPtr)
            (__this,__this_00,0,(ulong)(uint)aIndent,1,(__this->klass->vtable)._31_unknown.method);
  if (__this_00 == (System_Text_StringBuilder_o *)0x0) {
    ThrowNullReferenceException();
  }
  pSVar1 = (*(__this_00->klass->vtable)._3_ToString.methodPtr)
                     (__this_00,(__this_00->klass->vtable)._3_ToString.method);
  return pSVar1;
}


// SimpleJSONFixed.JSONNode$$get_Linq
// il2cpp: System_Collections_Generic_IEnumerable_KeyValuePair_string__JSONNode___o* SimpleJSONFixed_JSONNode__get_Linq (SimpleJSONFixed_JSONNode_o* __this, const MethodInfo* method);
// 0x5862e50

System_Collections_Generic_IEnumerable_KeyValuePair_string__JSONNode___o *
SimpleJSONFixed_JSONNode__get_Linq(SimpleJSONFixed_JSONNode_o *__this,MethodInfo *method)

{
  SimpleJSONFixed_JSONNode_LinqEnumerator_o *__this_00;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_075450c3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode_LinqEnumerator);
    Il2CppMethodInitialized_075450c3 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode_LinqEnumerator);
  SimpleJSONFixed_JSONNode_LinqEnumerator___ctor(__this_00,__this,method_00);
  return (System_Collections_Generic_IEnumerable_KeyValuePair_string__JSONNode___o *)__this_00;
}


// SimpleJSONFixed.JSONNode$$get_Keys
// il2cpp: SimpleJSONFixed_JSONNode_KeyEnumerator_o SimpleJSONFixed_JSONNode__get_Keys (SimpleJSONFixed_JSONNode_o* __this, const MethodInfo* method);
// 0x5862fe0

SimpleJSONFixed_JSONNode_KeyEnumerator_o *
SimpleJSONFixed_JSONNode__get_Keys
          (SimpleJSONFixed_JSONNode_KeyEnumerator_o *__return_storage_ptr__,SimpleJSONFixed_JSONNode_o *__this
          ,MethodInfo *method)

{
  SimpleJSONFixed_JSONNode_Enumerator_o *pSVar1;
  undefined8 local_50;
  System_Collections_Generic_Dictionary_TKey__TValue__o *pSStack_48;
  undefined8 local_40;
  Il2CppObject *pIStack_38;
  Il2CppObject *local_30;
  undefined8 uStack_28;
  System_Collections_Generic_List_T__o *local_20;
  undefined8 uStack_18;
  SimpleJSONFixed_JSONNode_o *local_10;
  
  (*(__this->klass->vtable)._32_unknown.methodPtr)
            (&local_50,__this,(__this->klass->vtable)._32_unknown.method);
  (__return_storage_ptr__->fields).m_Enumerator.fields.m_Array.fields._current = local_10;
  (__return_storage_ptr__->fields).m_Enumerator.fields.m_Array.fields._list = local_20;
  pSVar1 = &(__return_storage_ptr__->fields).m_Enumerator;
  (pSVar1->fields).m_Array.fields._index = (undefined4)uStack_18;
  (pSVar1->fields).m_Array.fields._version = uStack_18._4_4_;
  (__return_storage_ptr__->fields).m_Enumerator.fields.m_Object.fields._current.fields.value = local_30;
  *(undefined8 *)&(__return_storage_ptr__->fields).m_Enumerator.fields.m_Object.fields._getEnumeratorRetType =
       uStack_28;
  pSVar1 = &(__return_storage_ptr__->fields).m_Enumerator;
  (pSVar1->fields).m_Object.fields._version = (undefined4)local_40;
  (pSVar1->fields).m_Object.fields._index = local_40._4_4_;
  (__return_storage_ptr__->fields).m_Enumerator.fields.m_Object.fields._current.fields.key = pIStack_38;
  *(undefined8 *)&(__return_storage_ptr__->fields).m_Enumerator.fields = local_50;
  (__return_storage_ptr__->fields).m_Enumerator.fields.m_Object.fields._dictionary = pSStack_48;
  Il2CppCodeGenWriteBarrier((void **)&(__return_storage_ptr__->fields).m_Enumerator.fields.m_Object);
  return __return_storage_ptr__;
}


// SimpleJSONFixed.JSONNode$$get_Values
// il2cpp: SimpleJSONFixed_JSONNode_ValueEnumerator_o SimpleJSONFixed_JSONNode__get_Values (SimpleJSONFixed_JSONNode_o* __this, const MethodInfo* method);
// 0x5863040

SimpleJSONFixed_JSONNode_ValueEnumerator_o *
SimpleJSONFixed_JSONNode__get_Values
          (SimpleJSONFixed_JSONNode_ValueEnumerator_o *__return_storage_ptr__,
          SimpleJSONFixed_JSONNode_o *__this,MethodInfo *method)

{
  SimpleJSONFixed_JSONNode_Enumerator_o *pSVar1;
  undefined8 local_50;
  System_Collections_Generic_Dictionary_TKey__TValue__o *pSStack_48;
  undefined8 local_40;
  Il2CppObject *pIStack_38;
  Il2CppObject *local_30;
  undefined8 uStack_28;
  System_Collections_Generic_List_T__o *local_20;
  undefined8 uStack_18;
  SimpleJSONFixed_JSONNode_o *local_10;
  
  (*(__this->klass->vtable)._32_unknown.methodPtr)
            (&local_50,__this,(__this->klass->vtable)._32_unknown.method);
  (__return_storage_ptr__->fields).m_Enumerator.fields.m_Array.fields._current = local_10;
  (__return_storage_ptr__->fields).m_Enumerator.fields.m_Array.fields._list = local_20;
  pSVar1 = &(__return_storage_ptr__->fields).m_Enumerator;
  (pSVar1->fields).m_Array.fields._index = (undefined4)uStack_18;
  (pSVar1->fields).m_Array.fields._version = uStack_18._4_4_;
  (__return_storage_ptr__->fields).m_Enumerator.fields.m_Object.fields._current.fields.value = local_30;
  *(undefined8 *)&(__return_storage_ptr__->fields).m_Enumerator.fields.m_Object.fields._getEnumeratorRetType =
       uStack_28;
  pSVar1 = &(__return_storage_ptr__->fields).m_Enumerator;
  (pSVar1->fields).m_Object.fields._version = (undefined4)local_40;
  (pSVar1->fields).m_Object.fields._index = local_40._4_4_;
  (__return_storage_ptr__->fields).m_Enumerator.fields.m_Object.fields._current.fields.key = pIStack_38;
  *(undefined8 *)&(__return_storage_ptr__->fields).m_Enumerator.fields = local_50;
  (__return_storage_ptr__->fields).m_Enumerator.fields.m_Object.fields._dictionary = pSStack_48;
  Il2CppCodeGenWriteBarrier((void **)&(__return_storage_ptr__->fields).m_Enumerator.fields.m_Object);
  return __return_storage_ptr__;
}


// SimpleJSONFixed.JSONNode$$get_AsDouble
// il2cpp: double SimpleJSONFixed_JSONNode__get_AsDouble (SimpleJSONFixed_JSONNode_o* __this, const MethodInfo* method);
// 0x58630a0

double SimpleJSONFixed_JSONNode__get_AsDouble(SimpleJSONFixed_JSONNode_o *__this,MethodInfo *method)

{
  bool bVar1;
  System_String_o *s;
  System_Globalization_CultureInfo_o *provider;
  double local_10;
  
  if (Il2CppMethodInitialized_075450c4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Globalization_CultureInfo);
    Il2CppMethodInitialized_075450c4 = '\x01';
  }
  local_10 = 0.0;
  s = (*(__this->klass->vtable)._9_get_Value.methodPtr)(__this,(__this->klass->vtable)._9_get_Value.method);
  if ((TypeInfo_System_Globalization_CultureInfo->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Globalization_CultureInfo);
  }
  provider = System_Globalization_CultureInfo__get_InvariantCulture((MethodInfo *)0x0);
  bVar1 = System_Double__TryParse_549e280
                    (s,0xa7,(System_IFormatProvider_o *)provider,&local_10,(MethodInfo *)0x0);
  if (bVar1) {
    return local_10;
  }
  return 0.0;
}


// SimpleJSONFixed.JSONNode$$set_AsDouble
// il2cpp: void SimpleJSONFixed_JSONNode__set_AsDouble (SimpleJSONFixed_JSONNode_o* __this, double value, const MethodInfo* method);
// 0x5863140

void SimpleJSONFixed_JSONNode__set_AsDouble
               (SimpleJSONFixed_JSONNode_o *__this,double value,MethodInfo *method)

{
  System_Globalization_CultureInfo_o *provider;
  System_String_o *pSVar1;
  double local_10;
  
  local_10 = value;
  if (Il2CppMethodInitialized_075450c5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Globalization_CultureInfo);
    Il2CppMethodInitialized_075450c5 = '\x01';
  }
  if ((TypeInfo_System_Globalization_CultureInfo->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Globalization_CultureInfo);
  }
  provider = System_Globalization_CultureInfo__get_InvariantCulture((MethodInfo *)0x0);
  pSVar1 = System_Double__ToString_549db40(&local_10,(System_IFormatProvider_o *)provider,(MethodInfo *)0x0);
  (*(__this->klass->vtable)._10_set_Value.methodPtr)
            (__this,pSVar1,(__this->klass->vtable)._10_set_Value.method);
  return;
}


// SimpleJSONFixed.JSONNode$$get_AsInt
// il2cpp: int32_t SimpleJSONFixed_JSONNode__get_AsInt (SimpleJSONFixed_JSONNode_o* __this, const MethodInfo* method);
// 0x58631c0

int32_t SimpleJSONFixed_JSONNode__get_AsInt(SimpleJSONFixed_JSONNode_o *__this,MethodInfo *method)

{
  double dVar1;
  
  dVar1 = (*(__this->klass->vtable)._33_get_AsDouble.methodPtr)
                    (__this,(__this->klass->vtable)._33_get_AsDouble.method);
  return (int)dVar1;
}


// SimpleJSONFixed.JSONNode$$set_AsInt
// il2cpp: void SimpleJSONFixed_JSONNode__set_AsInt (SimpleJSONFixed_JSONNode_o* __this, int32_t value, const MethodInfo* method);
// 0x58631e0

void SimpleJSONFixed_JSONNode__set_AsInt(SimpleJSONFixed_JSONNode_o *__this,int32_t value,MethodInfo *method)

{
  (*(__this->klass->vtable)._34_set_AsDouble.methodPtr)
            (__this,(double)value,(__this->klass->vtable)._34_set_AsDouble.method);
  return;
}


// SimpleJSONFixed.JSONNode$$get_AsFloat
// il2cpp: float SimpleJSONFixed_JSONNode__get_AsFloat (SimpleJSONFixed_JSONNode_o* __this, const MethodInfo* method);
// 0x5863200

float SimpleJSONFixed_JSONNode__get_AsFloat(SimpleJSONFixed_JSONNode_o *__this,MethodInfo *method)

{
  double dVar1;
  
  dVar1 = (*(__this->klass->vtable)._33_get_AsDouble.methodPtr)
                    (__this,(__this->klass->vtable)._33_get_AsDouble.method);
  return (float)dVar1;
}


// SimpleJSONFixed.JSONNode$$set_AsFloat
// il2cpp: void SimpleJSONFixed_JSONNode__set_AsFloat (SimpleJSONFixed_JSONNode_o* __this, float value, const MethodInfo* method);
// 0x5863220

void SimpleJSONFixed_JSONNode__set_AsFloat(SimpleJSONFixed_JSONNode_o *__this,float value,MethodInfo *method)

{
  (*(__this->klass->vtable)._34_set_AsDouble.methodPtr)
            (__this,(double)value,(__this->klass->vtable)._34_set_AsDouble.method);
  return;
}


// SimpleJSONFixed.JSONNode$$get_AsBool
// il2cpp: bool SimpleJSONFixed_JSONNode__get_AsBool (SimpleJSONFixed_JSONNode_o* __this, const MethodInfo* method);
// 0x5863240

bool SimpleJSONFixed_JSONNode__get_AsBool(SimpleJSONFixed_JSONNode_o *__this,MethodInfo *method)

{
  bool bVar1;
  ulong in_RAX;
  System_String_o *pSVar2;
  undefined8 uStack_18;
  
  uStack_18 = in_RAX & 0xffffffffffffff;
  pSVar2 = (*(__this->klass->vtable)._9_get_Value.methodPtr)
                     (__this,(__this->klass->vtable)._9_get_Value.method);
  if ((g_data_075566f0->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_075566f0);
  }
  bVar1 = System_Boolean__TryParse(pSVar2,(bool *)((long)&uStack_18 + 7),(MethodInfo *)0x0);
  if (bVar1) {
    return uStack_18._7_1_ != '\0';
  }
  pSVar2 = (*(__this->klass->vtable)._9_get_Value.methodPtr)
                     (__this,(__this->klass->vtable)._9_get_Value.method);
  bVar1 = System_String__IsNullOrEmpty(pSVar2,(MethodInfo *)0x0);
  return !bVar1;
}


// SimpleJSONFixed.JSONNode$$set_AsBool
// il2cpp: void SimpleJSONFixed_JSONNode__set_AsBool (SimpleJSONFixed_JSONNode_o* __this, bool value, const MethodInfo* method);
// 0x58632d0

void SimpleJSONFixed_JSONNode__set_AsBool(SimpleJSONFixed_JSONNode_o *__this,bool value,MethodInfo *method)

{
  System_String_o **ppSVar1;
  
  if (Il2CppMethodInitialized_075450c6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"false");
    il2cpp_codegen_initialize_runtime_metadata(&"true");
    Il2CppMethodInitialized_075450c6 = '\x01';
  }
  if (__this == (SimpleJSONFixed_JSONNode_o *)0x0) {
    ThrowNullReferenceException();
  }
  if (value) {
    ppSVar1 = &"true";
  }
  else {
    ppSVar1 = &"false";
  }
  (*(__this->klass->vtable)._10_set_Value.methodPtr)
            (__this,*ppSVar1,(__this->klass->vtable)._10_set_Value.method);
  return;
}


// SimpleJSONFixed.JSONNode$$get_AsLong
// il2cpp: int64_t SimpleJSONFixed_JSONNode__get_AsLong (SimpleJSONFixed_JSONNode_o* __this, const MethodInfo* method);
// 0x5863340

int64_t SimpleJSONFixed_JSONNode__get_AsLong(SimpleJSONFixed_JSONNode_o *__this,MethodInfo *method)

{
  bool bVar1;
  System_String_o *s;
  int64_t iVar2;
  int64_t local_10;
  
  local_10 = 0;
  s = (*(__this->klass->vtable)._9_get_Value.methodPtr)(__this,(__this->klass->vtable)._9_get_Value.method);
  bVar1 = System_Int64__TryParse(s,&local_10,(MethodInfo *)0x0);
  iVar2 = 0;
  if (bVar1) {
    iVar2 = local_10;
  }
  return iVar2;
}


// SimpleJSONFixed.JSONNode$$set_AsLong
// il2cpp: void SimpleJSONFixed_JSONNode__set_AsLong (SimpleJSONFixed_JSONNode_o* __this, int64_t value, const MethodInfo* method);
// 0x5863390

void SimpleJSONFixed_JSONNode__set_AsLong(SimpleJSONFixed_JSONNode_o *__this,int64_t value,MethodInfo *method)

{
  System_String_o *pSVar1;
  int64_t local_10;
  
  local_10 = value;
  pSVar1 = System_Int64__ToString(&local_10,(MethodInfo *)0x0);
  (*(__this->klass->vtable)._10_set_Value.methodPtr)
            (__this,pSVar1,(__this->klass->vtable)._10_set_Value.method);
  return;
}


// SimpleJSONFixed.JSONNode$$get_AsULong
// il2cpp: uint64_t SimpleJSONFixed_JSONNode__get_AsULong (SimpleJSONFixed_JSONNode_o* __this, const MethodInfo* method);
// 0x58633d0

uint64_t SimpleJSONFixed_JSONNode__get_AsULong(SimpleJSONFixed_JSONNode_o *__this,MethodInfo *method)

{
  bool bVar1;
  System_String_o *s;
  uint64_t uVar2;
  uint64_t local_10;
  
  local_10 = 0;
  s = (*(__this->klass->vtable)._9_get_Value.methodPtr)(__this,(__this->klass->vtable)._9_get_Value.method);
  bVar1 = System_UInt64__TryParse(s,&local_10,(MethodInfo *)0x0);
  uVar2 = 0;
  if (bVar1) {
    uVar2 = local_10;
  }
  return uVar2;
}


// SimpleJSONFixed.JSONNode$$set_AsULong
// il2cpp: void SimpleJSONFixed_JSONNode__set_AsULong (SimpleJSONFixed_JSONNode_o* __this, uint64_t value, const MethodInfo* method);
// 0x5863420

void SimpleJSONFixed_JSONNode__set_AsULong
               (SimpleJSONFixed_JSONNode_o *__this,uint64_t value,MethodInfo *method)

{
  System_String_o *pSVar1;
  uint64_t local_10;
  
  local_10 = value;
  pSVar1 = System_UInt64__ToString(&local_10,(MethodInfo *)0x0);
  (*(__this->klass->vtable)._10_set_Value.methodPtr)
            (__this,pSVar1,(__this->klass->vtable)._10_set_Value.method);
  return;
}


// SimpleJSONFixed.JSONNode$$get_AsArray
// il2cpp: SimpleJSONFixed_JSONArray_o* SimpleJSONFixed_JSONNode__get_AsArray (SimpleJSONFixed_JSONNode_o* __this, const MethodInfo* method);
// 0x5863460

SimpleJSONFixed_JSONArray_o *
SimpleJSONFixed_JSONNode__get_AsArray(SimpleJSONFixed_JSONNode_o *__this,MethodInfo *method)

{
  byte bVar1;
  SimpleJSONFixed_JSONArray_o *pSVar2;
  
  if (Il2CppMethodInitialized_075450c7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONArray);
    Il2CppMethodInitialized_075450c7 = '\x01';
  }
  if (__this != (SimpleJSONFixed_JSONNode_o *)0x0) {
    bVar1 = (TypeInfo_SimpleJSONFixed_JSONArray->_2).typeHierarchyDepth;
    if (bVar1 <= (__this->klass->_2).typeHierarchyDepth) {
      pSVar2 = (SimpleJSONFixed_JSONArray_o *)0x0;
      if ((__this->klass->_2).typeHierarchy[(ulong)bVar1 - 1] ==
          (Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONArray) {
        pSVar2 = (SimpleJSONFixed_JSONArray_o *)__this;
      }
      return pSVar2;
    }
  }
  return (SimpleJSONFixed_JSONArray_o *)0x0;
}


// SimpleJSONFixed.JSONNode$$get_AsObject
// il2cpp: SimpleJSONFixed_JSONObject_o* SimpleJSONFixed_JSONNode__get_AsObject (SimpleJSONFixed_JSONNode_o* __this, const MethodInfo* method);
// 0x58634c0

SimpleJSONFixed_JSONObject_o *
SimpleJSONFixed_JSONNode__get_AsObject(SimpleJSONFixed_JSONNode_o *__this,MethodInfo *method)

{
  byte bVar1;
  SimpleJSONFixed_JSONObject_o *pSVar2;
  
  if (Il2CppMethodInitialized_075450c8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONObject);
    Il2CppMethodInitialized_075450c8 = '\x01';
  }
  if (__this != (SimpleJSONFixed_JSONNode_o *)0x0) {
    bVar1 = (TypeInfo_SimpleJSONFixed_JSONObject->_2).typeHierarchyDepth;
    if (bVar1 <= (__this->klass->_2).typeHierarchyDepth) {
      pSVar2 = (SimpleJSONFixed_JSONObject_o *)0x0;
      if ((__this->klass->_2).typeHierarchy[(ulong)bVar1 - 1] ==
          (Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONObject) {
        pSVar2 = (SimpleJSONFixed_JSONObject_o *)__this;
      }
      return pSVar2;
    }
  }
  return (SimpleJSONFixed_JSONObject_o *)0x0;
}


// SimpleJSONFixed.JSONNode$$op_Implicit
// il2cpp: SimpleJSONFixed_JSONNode_o* SimpleJSONFixed_JSONNode__op_Implicit (System_String_o* s, const MethodInfo* method);
// 0x5863520

SimpleJSONFixed_JSONNode_o * SimpleJSONFixed_JSONNode__op_Implicit(System_String_o *s,MethodInfo *method)

{
  SimpleJSONFixed_JSONString_o *__this;
  SimpleJSONFixed_JSONNode_o *pSVar1;
  SimpleJSONFixed_JSONNull_c *method_00;
  
  if (Il2CppMethodInitialized_075450c9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNull);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONString);
    Il2CppMethodInitialized_075450c9 = '\x01';
  }
  if (s == (System_String_o *)0x0) {
    if ((TypeInfo_SimpleJSONFixed_JSONNull->_2).cctor_finished_or_no_cctor == 0) {
      method_00 = TypeInfo_SimpleJSONFixed_JSONNull;
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNull);
      pSVar1 = (SimpleJSONFixed_JSONNode_o *)SimpleJSONFixed_JSONNull__CreateOrGet((MethodInfo *)method_00);
      return pSVar1;
    }
    pSVar1 = (SimpleJSONFixed_JSONNode_o *)
             SimpleJSONFixed_JSONNull__CreateOrGet((MethodInfo *)TypeInfo_SimpleJSONFixed_JSONNull);
    return pSVar1;
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONString);
  if (Il2CppMethodInitialized_07545119 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    Il2CppMethodInitialized_07545119 = '\x01';
  }
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).m_Data = s;
  Il2CppCodeGenWriteBarrier(&(__this->fields).m_Data);
  return (SimpleJSONFixed_JSONNode_o *)__this;
}


// SimpleJSONFixed.JSONNode$$op_Implicit
// il2cpp: System_String_o* SimpleJSONFixed_JSONNode__op_Implicit (SimpleJSONFixed_JSONNode_o* d, const MethodInfo* method);
// 0x5863740

System_String_o *
SimpleJSONFixed_JSONNode__op_Implicit_5763740(SimpleJSONFixed_JSONNode_o *d,MethodInfo *method)

{
  bool bVar1;
  System_String_o *pSVar2;
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  
  if (Il2CppMethodInitialized_075450ca == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    Il2CppMethodInitialized_075450ca = '\x01';
    in_RDX = extraout_RDX;
  }
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
    in_RDX = extraout_RDX_00;
  }
  bVar1 = SimpleJSONFixed_JSONNode__op_Equality(d,(Il2CppObject *)0x0,in_RDX);
  if (bVar1) {
    return (System_String_o *)0x0;
  }
  if (d == (SimpleJSONFixed_JSONNode_o *)0x0) {
    ThrowNullReferenceException();
  }
  pSVar2 = (*(d->klass->vtable)._9_get_Value.methodPtr)(d,(d->klass->vtable)._9_get_Value.method);
  return pSVar2;
}


// SimpleJSONFixed.JSONNode$$op_Implicit
// il2cpp: SimpleJSONFixed_JSONNode_o* SimpleJSONFixed_JSONNode__op_Implicit (double n, const MethodInfo* method);
// 0x58638f0

SimpleJSONFixed_JSONNode_o * SimpleJSONFixed_JSONNode__op_Implicit_57638f0(double n,MethodInfo *method)

{
  SimpleJSONFixed_JSONNumber_o *__this;
  
  if (Il2CppMethodInitialized_075450cb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNumber);
    Il2CppMethodInitialized_075450cb = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNumber);
  if (Il2CppMethodInitialized_07545120 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    Il2CppMethodInitialized_07545120 = '\x01';
  }
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).m_Data = n;
  return (SimpleJSONFixed_JSONNode_o *)__this;
}


// SimpleJSONFixed.JSONNode$$op_Implicit
// il2cpp: double SimpleJSONFixed_JSONNode__op_Implicit (SimpleJSONFixed_JSONNode_o* d, const MethodInfo* method);
// 0x58639e0

double SimpleJSONFixed_JSONNode__op_Implicit_57639e0(SimpleJSONFixed_JSONNode_o *d,MethodInfo *method)

{
  double dVar1;
  bool bVar2;
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  
  if (Il2CppMethodInitialized_075450cc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    Il2CppMethodInitialized_075450cc = '\x01';
    in_RDX = extraout_RDX;
  }
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
    in_RDX = extraout_RDX_00;
  }
  bVar2 = SimpleJSONFixed_JSONNode__op_Equality(d,(Il2CppObject *)0x0,in_RDX);
  if (bVar2) {
    return 0.0;
  }
  if (d == (SimpleJSONFixed_JSONNode_o *)0x0) {
    ThrowNullReferenceException();
  }
  dVar1 = (*(d->klass->vtable)._33_get_AsDouble.methodPtr)(d,(d->klass->vtable)._33_get_AsDouble.method);
  return dVar1;
}


// SimpleJSONFixed.JSONNode$$op_Implicit
// il2cpp: SimpleJSONFixed_JSONNode_o* SimpleJSONFixed_JSONNode__op_Implicit (float n, const MethodInfo* method);
// 0x5863a50

SimpleJSONFixed_JSONNode_o * SimpleJSONFixed_JSONNode__op_Implicit_5763a50(float n,MethodInfo *method)

{
  SimpleJSONFixed_JSONNumber_o *__this;
  
  if (Il2CppMethodInitialized_075450cd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNumber);
    Il2CppMethodInitialized_075450cd = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNumber);
  if (Il2CppMethodInitialized_07545120 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    Il2CppMethodInitialized_07545120 = '\x01';
  }
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).m_Data = (double)n;
  return (SimpleJSONFixed_JSONNode_o *)__this;
}


// SimpleJSONFixed.JSONNode$$op_Implicit
// il2cpp: float SimpleJSONFixed_JSONNode__op_Implicit (SimpleJSONFixed_JSONNode_o* d, const MethodInfo* method);
// 0x5863af0

float SimpleJSONFixed_JSONNode__op_Implicit_5763af0(SimpleJSONFixed_JSONNode_o *d,MethodInfo *method)

{
  bool bVar1;
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  float fVar2;
  
  if (Il2CppMethodInitialized_075450ce == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    Il2CppMethodInitialized_075450ce = '\x01';
    in_RDX = extraout_RDX;
  }
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
    in_RDX = extraout_RDX_00;
  }
  bVar1 = SimpleJSONFixed_JSONNode__op_Equality(d,(Il2CppObject *)0x0,in_RDX);
  if (bVar1) {
    return 0.0;
  }
  if (d == (SimpleJSONFixed_JSONNode_o *)0x0) {
    ThrowNullReferenceException();
  }
  fVar2 = (*(d->klass->vtable)._37_get_AsFloat.methodPtr)(d,(d->klass->vtable)._37_get_AsFloat.method);
  return fVar2;
}


// SimpleJSONFixed.JSONNode$$op_Implicit
// il2cpp: SimpleJSONFixed_JSONNode_o* SimpleJSONFixed_JSONNode__op_Implicit (int32_t n, const MethodInfo* method);
// 0x5863b60

SimpleJSONFixed_JSONNode_o * SimpleJSONFixed_JSONNode__op_Implicit_5763b60(int32_t n,MethodInfo *method)

{
  SimpleJSONFixed_JSONNumber_o *__this;
  
  if (Il2CppMethodInitialized_075450cf == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNumber);
    Il2CppMethodInitialized_075450cf = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNumber);
  if (Il2CppMethodInitialized_07545120 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    Il2CppMethodInitialized_07545120 = '\x01';
  }
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).m_Data = (double)n;
  return (SimpleJSONFixed_JSONNode_o *)__this;
}


// SimpleJSONFixed.JSONNode$$op_Implicit
// il2cpp: int32_t SimpleJSONFixed_JSONNode__op_Implicit (SimpleJSONFixed_JSONNode_o* d, const MethodInfo* method);
// 0x5863bf0

int32_t SimpleJSONFixed_JSONNode__op_Implicit_5763bf0(SimpleJSONFixed_JSONNode_o *d,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  
  if (Il2CppMethodInitialized_075450d0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    Il2CppMethodInitialized_075450d0 = '\x01';
    in_RDX = extraout_RDX;
  }
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
    in_RDX = extraout_RDX_00;
  }
  bVar1 = SimpleJSONFixed_JSONNode__op_Equality(d,(Il2CppObject *)0x0,in_RDX);
  if (bVar1) {
    return 0;
  }
  if (d == (SimpleJSONFixed_JSONNode_o *)0x0) {
    ThrowNullReferenceException();
  }
  iVar2 = (*(d->klass->vtable)._35_get_AsInt.methodPtr)(d,(d->klass->vtable)._35_get_AsInt.method);
  return iVar2;
}


// SimpleJSONFixed.JSONNode$$op_Implicit
// il2cpp: SimpleJSONFixed_JSONNode_o* SimpleJSONFixed_JSONNode__op_Implicit (int64_t n, const MethodInfo* method);
// 0x5863c60

SimpleJSONFixed_JSONNode_o * SimpleJSONFixed_JSONNode__op_Implicit_5763c60(int64_t n,MethodInfo *method)

{
  char cVar1;
  uint32_t uVar2;
  System_String_o *pSVar3;
  SimpleJSONFixed_JSONString_o *__this;
  int64_t iStack_20;
  
  iStack_20 = n;
  if (Il2CppMethodInitialized_075450d1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNumber);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONString);
    Il2CppMethodInitialized_075450d1 = '\x01';
    uVar2 = (TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar2 = (TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor;
  }
  if (uVar2 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
    cVar1 = TypeInfo_SimpleJSONFixed_JSONNode->static_fields->longAsString;
  }
  else {
    cVar1 = *(char *)((long)((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode)->static_fields + 1);
  }
  if (cVar1 == '\0') {
    __this = (SimpleJSONFixed_JSONString_o *)
             il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNumber);
    if (Il2CppMethodInitialized_07545120 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
      Il2CppMethodInitialized_07545120 = '\x01';
    }
    if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
    }
    System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
    (__this->fields).m_Data = (System_String_o *)(double)n;
  }
  else {
    pSVar3 = System_Int64__ToString(&iStack_20,(MethodInfo *)0x0);
    __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONString);
    if (Il2CppMethodInitialized_07545119 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
      Il2CppMethodInitialized_07545119 = '\x01';
    }
    if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
    }
    System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
    (__this->fields).m_Data = pSVar3;
    Il2CppCodeGenWriteBarrier(&(__this->fields).m_Data);
  }
  return (SimpleJSONFixed_JSONNode_o *)__this;
}


// SimpleJSONFixed.JSONNode$$op_Implicit
// il2cpp: int64_t SimpleJSONFixed_JSONNode__op_Implicit (SimpleJSONFixed_JSONNode_o* d, const MethodInfo* method);
// 0x5863de0

int64_t SimpleJSONFixed_JSONNode__op_Implicit_5763de0(SimpleJSONFixed_JSONNode_o *d,MethodInfo *method)

{
  bool bVar1;
  int64_t iVar2;
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  
  if (Il2CppMethodInitialized_075450d2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    Il2CppMethodInitialized_075450d2 = '\x01';
    in_RDX = extraout_RDX;
  }
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
    in_RDX = extraout_RDX_00;
  }
  bVar1 = SimpleJSONFixed_JSONNode__op_Equality(d,(Il2CppObject *)0x0,in_RDX);
  if (bVar1) {
    return 0;
  }
  if (d == (SimpleJSONFixed_JSONNode_o *)0x0) {
    ThrowNullReferenceException();
  }
  iVar2 = (*(d->klass->vtable)._41_get_AsLong.methodPtr)(d,(d->klass->vtable)._41_get_AsLong.method);
  return iVar2;
}


// SimpleJSONFixed.JSONNode$$op_Implicit
// il2cpp: SimpleJSONFixed_JSONNode_o* SimpleJSONFixed_JSONNode__op_Implicit (uint64_t n, const MethodInfo* method);
// 0x5863e50

SimpleJSONFixed_JSONNode_o * SimpleJSONFixed_JSONNode__op_Implicit_5763e50(uint64_t n,MethodInfo *method)

{
  char cVar1;
  uint32_t uVar2;
  System_String_o *pSVar3;
  SimpleJSONFixed_JSONString_o *__this;
  double dVar4;
  undefined1 auVar5 [16];
  double dVar6;
  uint64_t local_30;
  double local_28;
  double dStack_20;
  
  local_30 = n;
  if (Il2CppMethodInitialized_075450d3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNumber);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONString);
    Il2CppMethodInitialized_075450d3 = '\x01';
    uVar2 = (TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar2 = (TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor;
  }
  if (uVar2 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
    cVar1 = TypeInfo_SimpleJSONFixed_JSONNode->static_fields->longAsString;
  }
  else {
    cVar1 = *(char *)((long)((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode)->static_fields + 1);
  }
  if (cVar1 == '\0') {
    __this = (SimpleJSONFixed_JSONString_o *)
             il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNumber);
    auVar5._8_4_ = (int)(n >> 0x20);
    auVar5._0_8_ = n;
    auVar5._12_4_ = 0x45300000;
    dVar4 = (double)CONCAT44(0x43300000,(int)n) - 4503599627370496.0;
    dVar6 = auVar5._8_8_ - 1.9342813113834067e+25;
    if (Il2CppMethodInitialized_07545120 == '\0') {
      local_28 = dVar4;
      dStack_20 = dVar6;
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
      Il2CppMethodInitialized_07545120 = '\x01';
      dVar4 = local_28;
    }
    if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
    }
    System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
    (__this->fields).m_Data = (System_String_o *)(dVar6 + dVar4);
  }
  else {
    pSVar3 = System_UInt64__ToString(&local_30,(MethodInfo *)0x0);
    __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONString);
    if (Il2CppMethodInitialized_07545119 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
      Il2CppMethodInitialized_07545119 = '\x01';
    }
    if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
    }
    System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
    (__this->fields).m_Data = pSVar3;
    Il2CppCodeGenWriteBarrier(&(__this->fields).m_Data);
  }
  return (SimpleJSONFixed_JSONNode_o *)__this;
}


// SimpleJSONFixed.JSONNode$$op_Implicit
// il2cpp: uint64_t SimpleJSONFixed_JSONNode__op_Implicit (SimpleJSONFixed_JSONNode_o* d, const MethodInfo* method);
// 0x5864000

uint64_t SimpleJSONFixed_JSONNode__op_Implicit_5764000(SimpleJSONFixed_JSONNode_o *d,MethodInfo *method)

{
  bool bVar1;
  uint64_t uVar2;
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  
  if (Il2CppMethodInitialized_075450d4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    Il2CppMethodInitialized_075450d4 = '\x01';
    in_RDX = extraout_RDX;
  }
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
    in_RDX = extraout_RDX_00;
  }
  bVar1 = SimpleJSONFixed_JSONNode__op_Equality(d,(Il2CppObject *)0x0,in_RDX);
  if (bVar1) {
    return 0;
  }
  if (d == (SimpleJSONFixed_JSONNode_o *)0x0) {
    ThrowNullReferenceException();
  }
  uVar2 = (*(d->klass->vtable)._43_get_AsULong.methodPtr)(d,(d->klass->vtable)._43_get_AsULong.method);
  return uVar2;
}


// SimpleJSONFixed.JSONNode$$op_Implicit
// il2cpp: SimpleJSONFixed_JSONNode_o* SimpleJSONFixed_JSONNode__op_Implicit (bool b, const MethodInfo* method);
// 0x5864070

SimpleJSONFixed_JSONNode_o * SimpleJSONFixed_JSONNode__op_Implicit_5764070(bool b,MethodInfo *method)

{
  SimpleJSONFixed_JSONBool_o *__this;
  
  if (Il2CppMethodInitialized_075450d5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONBool);
    Il2CppMethodInitialized_075450d5 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONBool);
  if (Il2CppMethodInitialized_07545125 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    Il2CppMethodInitialized_07545125 = '\x01';
  }
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).m_Data = b;
  return (SimpleJSONFixed_JSONNode_o *)__this;
}


// SimpleJSONFixed.JSONNode$$op_Implicit
// il2cpp: bool SimpleJSONFixed_JSONNode__op_Implicit (SimpleJSONFixed_JSONNode_o* d, const MethodInfo* method);
// 0x5864150

bool SimpleJSONFixed_JSONNode__op_Implicit_5764150(SimpleJSONFixed_JSONNode_o *d,MethodInfo *method)

{
  bool bVar1;
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  
  if (Il2CppMethodInitialized_075450d6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    Il2CppMethodInitialized_075450d6 = '\x01';
    in_RDX = extraout_RDX;
  }
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
    in_RDX = extraout_RDX_00;
  }
  bVar1 = SimpleJSONFixed_JSONNode__op_Equality(d,(Il2CppObject *)0x0,in_RDX);
  if (bVar1) {
    return false;
  }
  if (d == (SimpleJSONFixed_JSONNode_o *)0x0) {
    ThrowNullReferenceException();
  }
  bVar1 = (*(d->klass->vtable)._39_get_AsBool.methodPtr)(d,(d->klass->vtable)._39_get_AsBool.method);
  return bVar1;
}


// SimpleJSONFixed.JSONNode$$op_Implicit
// il2cpp: SimpleJSONFixed_JSONNode_o* SimpleJSONFixed_JSONNode__op_Implicit (System_Collections_Generic_KeyValuePair_string__JSONNode__o aKeyValue, const MethodInfo* method);
// 0x58641c0

SimpleJSONFixed_JSONNode_o *
SimpleJSONFixed_JSONNode__op_Implicit_57641c0
          (System_Collections_Generic_KeyValuePair_string__JSONNode__o aKeyValue,MethodInfo *method)

{
  if (Il2CppMethodInitialized_075450d7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_KeyValuePair_string_JSONNode_get_Value);
    Il2CppMethodInitialized_075450d7 = '\x01';
  }
  return aKeyValue.fields.value;
}


// SimpleJSONFixed.JSONNode$$op_Equality
// il2cpp: bool SimpleJSONFixed_JSONNode__op_Equality (SimpleJSONFixed_JSONNode_o* a, Il2CppObject* b, const MethodInfo* method);
// 0x58637b0
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5863837: mov eax, 1
// asm:   0x586383c: test r14, r14
// asm:   0x5863841: jmp 0x58638af

bool SimpleJSONFixed_JSONNode__op_Equality(SimpleJSONFixed_JSONNode_o *a,Il2CppObject *b,MethodInfo *method)

{
  byte bVar1;
  byte bVar2;
  SimpleJSONFixed_JSONNode_c *pSVar3;
  Il2CppClass *pIVar4;
  bool bVar5;
  bool bVar6;
  
  if (Il2CppMethodInitialized_075450d8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONLazyCreator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNull);
    Il2CppMethodInitialized_075450d8 = '\x01';
  }
  if ((Il2CppObject *)a == b) {
    bVar5 = true;
  }
  else {
    bVar6 = true;
    if (a != (SimpleJSONFixed_JSONNode_o *)0x0) {
      pSVar3 = a->klass;
      bVar1 = (pSVar3->_2).typeHierarchyDepth;
      bVar2 = (TypeInfo_SimpleJSONFixed_JSONNull->_2).typeHierarchyDepth;
      if ((bVar1 < bVar2) ||
         ((pSVar3->_2).typeHierarchy[(ulong)bVar2 - 1] != (Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNull)) {
        bVar2 = (TypeInfo_SimpleJSONFixed_JSONLazyCreator->_2).typeHierarchyDepth;
        if (bVar1 < bVar2) {
          bVar6 = false;
        }
        else {
          bVar6 = (pSVar3->_2).typeHierarchy[(ulong)bVar2 - 1] ==
                  (Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONLazyCreator;
        }
      }
    }
    bVar5 = true;
    if (b != (Il2CppObject *)0x0) {
      bVar5 = true;
      pIVar4 = b->klass;
      bVar1 = (pIVar4->_2).typeHierarchyDepth;
      bVar2 = (TypeInfo_SimpleJSONFixed_JSONNull->_2).typeHierarchyDepth;
      if ((bVar1 < bVar2) ||
         ((pIVar4->_2).typeHierarchy[(ulong)bVar2 - 1] != (Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNull)) {
        bVar2 = (TypeInfo_SimpleJSONFixed_JSONLazyCreator->_2).typeHierarchyDepth;
        bVar5 = false;
        if (bVar2 <= bVar1) {
          bVar5 = (pIVar4->_2).typeHierarchy[(ulong)bVar2 - 1] ==
                  (Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONLazyCreator;
        }
      }
    }
    bVar5 = (bool)(bVar5 & bVar6);
    if (bVar6 == false && bVar5 == false) {
      if (a == (SimpleJSONFixed_JSONNode_o *)0x0) {
        ThrowNullReferenceException();
      }
      bVar5 = (*(a->klass->vtable)._0_Equals.methodPtr)(a,b,(a->klass->vtable)._0_Equals.method);
      return bVar5;
    }
  }
  return bVar5;
}


// SimpleJSONFixed.JSONNode$$op_Inequality
// il2cpp: bool SimpleJSONFixed_JSONNode__op_Inequality (SimpleJSONFixed_JSONNode_o* a, Il2CppObject* b, const MethodInfo* method);
// 0x58641f0

bool SimpleJSONFixed_JSONNode__op_Inequality(SimpleJSONFixed_JSONNode_o *a,Il2CppObject *b,MethodInfo *method)

{
  bool bVar1;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  
  if (Il2CppMethodInitialized_075450d9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    Il2CppMethodInitialized_075450d9 = '\x01';
    method = extraout_RDX;
  }
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
    method = extraout_RDX_00;
  }
  bVar1 = SimpleJSONFixed_JSONNode__op_Equality(a,b,method);
  return !bVar1;
}


// SimpleJSONFixed.JSONNode$$Equals
// il2cpp: bool SimpleJSONFixed_JSONNode__Equals (SimpleJSONFixed_JSONNode_o* __this, Il2CppObject* obj, const MethodInfo* method);
// 0x5864250

bool SimpleJSONFixed_JSONNode__Equals(SimpleJSONFixed_JSONNode_o *__this,Il2CppObject *obj,MethodInfo *method)

{
  return (Il2CppObject *)__this == obj;
}


// SimpleJSONFixed.JSONNode$$GetHashCode
// il2cpp: int32_t SimpleJSONFixed_JSONNode__GetHashCode (SimpleJSONFixed_JSONNode_o* __this, const MethodInfo* method);
// 0x5864260

int32_t SimpleJSONFixed_JSONNode__GetHashCode(SimpleJSONFixed_JSONNode_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  
  iVar1 = System_Object__GetHashCode((Il2CppObject *)__this,(MethodInfo *)0x0);
  return iVar1;
}


// SimpleJSONFixed.JSONNode$$get_EscapeBuilder
// il2cpp: System_Text_StringBuilder_o* SimpleJSONFixed_JSONNode__get_EscapeBuilder (const MethodInfo* method);
// 0x5864270
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x586435f: jmp 0x58642a7

System_Text_StringBuilder_o * SimpleJSONFixed_JSONNode__get_EscapeBuilder(MethodInfo *method)

{
  uint32_t uVar1;
  long lVar2;
  long *plVar3;
  undefined8 *puVar4;
  System_Text_StringBuilder_o *__this;
  void **targetAddress;
  
  if (Il2CppMethodInitialized_075450da == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Text_StringBuilder);
    Il2CppMethodInitialized_075450da = '\x01';
    uVar1 = (TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
    plVar3 = (long *)il2cpp_runtime_helper_030d6080(TypeInfo_SimpleJSONFixed_JSONNode);
    lVar2 = *plVar3;
  }
  else {
    plVar3 = (long *)il2cpp_runtime_helper_030d6080();
    lVar2 = *plVar3;
  }
  if (lVar2 == 0) {
    __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Text_StringBuilder);
    System_Text_StringBuilder___ctor(__this,(MethodInfo *)0x0);
    if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
    }
    puVar4 = (undefined8 *)il2cpp_runtime_helper_030d6080(TypeInfo_SimpleJSONFixed_JSONNode);
    *puVar4 = __this;
    targetAddress = (void **)il2cpp_runtime_helper_030d6080(TypeInfo_SimpleJSONFixed_JSONNode);
    Il2CppCodeGenWriteBarrier(targetAddress);
    uVar1 = (TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode)->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  puVar4 = (undefined8 *)il2cpp_runtime_helper_030d6080(TypeInfo_SimpleJSONFixed_JSONNode);
  return (System_Text_StringBuilder_o *)*puVar4;
}


// SimpleJSONFixed.JSONNode$$Escape
// il2cpp: System_String_o* SimpleJSONFixed_JSONNode__Escape (System_String_o* aText, const MethodInfo* method);
// 0x5864370
// asm: 5 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5864505: jmp 0x58645be
// asm:   0x5864559: jmp 0x58645d7
// asm:   0x58645b6: mov rdi, rbp
// asm:   0x58645b9: mov rsi, rax
// asm:   0x58645bc: jmp 0x5864546

System_String_o * SimpleJSONFixed_JSONNode__Escape(System_String_o *aText,MethodInfo *method)

{
  char cVar1;
  uint16_t value;
  int32_t iVar2;
  ulong in_RAX;
  System_Text_StringBuilder_o *__this;
  System_String_o **ppSVar3;
  System_Text_StringBuilder_o *__this_00;
  System_String_o *pSVar4;
  int iVar5;
  int value_00;
  SimpleJSONFixed_JSONNode_c *method_00;
  undefined8 uStack_38;
  
  uStack_38 = in_RAX;
  if (Il2CppMethodInitialized_075450db == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata(&"\\b");
    il2cpp_codegen_initialize_runtime_metadata(&"\\n");
    il2cpp_codegen_initialize_runtime_metadata(&"\\t");
    il2cpp_codegen_initialize_runtime_metadata(&"\\\"");
    il2cpp_codegen_initialize_runtime_metadata(&"\\f");
    il2cpp_codegen_initialize_runtime_metadata(&"\\r");
    il2cpp_codegen_initialize_runtime_metadata(&"X4");
    il2cpp_codegen_initialize_runtime_metadata(&"\\u");
    il2cpp_codegen_initialize_runtime_metadata(&"\\\\");
    Il2CppMethodInitialized_075450db = '\x01';
  }
  uStack_38 = uStack_38 & 0xffffffffffff;
  method_00 = TypeInfo_SimpleJSONFixed_JSONNode;
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  __this = SimpleJSONFixed_JSONNode__get_EscapeBuilder((MethodInfo *)method_00);
  if (__this != (System_Text_StringBuilder_o *)0x0) {
    System_Text_StringBuilder__set_Length(__this,0,(MethodInfo *)0x0);
    iVar2 = System_Text_StringBuilder__get_Capacity(__this,(MethodInfo *)0x0);
    if (aText != (System_String_o *)0x0) {
      iVar5 = (aText->fields)._stringLength;
      value_00 = iVar5 / 10 + iVar5;
      if (iVar2 < value_00) {
        System_Text_StringBuilder__set_Capacity
                  (__this,value_00,(MethodInfo *)(ulong)(-(iVar5 >> 0x1f) ^ (uint)(iVar5 >> 0x1f) >> 0x1f));
        iVar5 = (aText->fields)._stringLength;
      }
      if (iVar5 < 1) {
label_058645d7:
        pSVar4 = (*(__this->klass->vtable)._3_ToString.methodPtr)
                           (__this,(__this->klass->vtable)._3_ToString.method);
        System_Text_StringBuilder__set_Length(__this,0,(MethodInfo *)0x0);
        return pSVar4;
      }
      iVar5 = 0;
label_058644a0:
      value = System_String__get_Chars(aText,iVar5,(MethodInfo *)0x0);
      switch(value) {
      case 8:
        ppSVar3 = &"\\b";
        break;
      case 9:
        ppSVar3 = &"\\t";
        break;
      case 10:
        ppSVar3 = &"\\n";
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
switchD_058644c2_caseD_b:
        if (value < 0x20) {
label_0586457f:
          uStack_38 = CONCAT26(value,(undefined6)uStack_38);
          __this_00 = System_Text_StringBuilder__Append_530ed80
                                (__this,"\\u",(MethodInfo *)0x0);
          pSVar4 = System_UInt16__ToString_54dbab0
                             ((uint16_t *)((long)&uStack_38 + 6),"X4",(MethodInfo *)0x0);
          if (__this_00 != (System_Text_StringBuilder_o *)0x0) goto label_05864546;
          goto label_0586460b;
        }
        if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
          cVar1 = TypeInfo_SimpleJSONFixed_JSONNode->static_fields->forceASCII;
        }
        else {
          cVar1 = TypeInfo_SimpleJSONFixed_JSONNode->static_fields->forceASCII;
        }
        if ((cVar1 != '\0') && (0x7f < value)) goto label_0586457f;
        System_Text_StringBuilder__Append_530f6a0(__this,value,(MethodInfo *)0x0);
        iVar5 = iVar5 + 1;
        if ((aText->fields)._stringLength <= iVar5) goto label_058645d7;
        goto label_058644a0;
      case 0xc:
        ppSVar3 = &"\\f";
        break;
      case 0xd:
        ppSVar3 = &"\\r";
        break;
      case 0x22:
        ppSVar3 = &"\\\"";
        break;
      default:
        if (value != 0x5c) goto switchD_058644c2_caseD_b;
        ppSVar3 = &"\\\\";
      }
      pSVar4 = *ppSVar3;
      __this_00 = __this;
label_05864546:
      System_Text_StringBuilder__Append_530ed80(__this_00,pSVar4,(MethodInfo *)0x0);
      iVar5 = iVar5 + 1;
      if ((aText->fields)._stringLength <= iVar5) goto label_058645d7;
      goto label_058644a0;
    }
  }
label_0586460b:
  ThrowNullReferenceException();
}


// SimpleJSONFixed.JSONNode$$ParseElement
// il2cpp: SimpleJSONFixed_JSONNode_o* SimpleJSONFixed_JSONNode__ParseElement (System_String_o* token, bool quoted, const MethodInfo* method);
// 0x5864610

SimpleJSONFixed_JSONNode_o *
SimpleJSONFixed_JSONNode__ParseElement(System_String_o *token,bool quoted,MethodInfo *method)

{
  bool bVar1;
  SimpleJSONFixed_JSONNode_o *pSVar2;
  System_Globalization_CultureInfo_o *provider;
  SimpleJSONFixed_JSONNumber_o *__this;
  System_String_o *a;
  undefined7 in_register_00000031;
  MethodInfo *pMVar3;
  SimpleJSONFixed_JSONNull_c *method_00;
  double local_28;
  double local_20;
  
  pMVar3 = (MethodInfo *)CONCAT71(in_register_00000031,quoted);
  if (Il2CppMethodInitialized_075450dc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Globalization_CultureInfo);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNull);
    il2cpp_codegen_initialize_runtime_metadata(&"null");
    il2cpp_codegen_initialize_runtime_metadata(&"false");
    il2cpp_codegen_initialize_runtime_metadata(&"true");
    Il2CppMethodInitialized_075450dc = '\x01';
  }
  local_28 = 0.0;
  if (quoted) {
    if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
    }
    pSVar2 = SimpleJSONFixed_JSONNode__op_Implicit(token,pMVar3);
    return pSVar2;
  }
  if (token == (System_String_o *)0x0) {
    ThrowNullReferenceException();
  }
  if ((token->fields)._stringLength < 6) {
    a = System_String__ToLower(token,(MethodInfo *)0x0);
    bVar1 = System_String__op_Equality(a,"false",(MethodInfo *)0x0);
    if (!bVar1) {
      bVar1 = System_String__op_Equality(a,"true",(MethodInfo *)0x0);
      if (!bVar1) {
        bVar1 = System_String__op_Equality(a,"null",(MethodInfo *)0x0);
        if (bVar1) {
          method_00 = TypeInfo_SimpleJSONFixed_JSONNull;
          if ((TypeInfo_SimpleJSONFixed_JSONNull->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNull);
          }
          pSVar2 = (SimpleJSONFixed_JSONNode_o *)
                   SimpleJSONFixed_JSONNull__CreateOrGet((MethodInfo *)method_00);
          return pSVar2;
        }
        goto label_058646bd;
      }
    }
    bVar1 = System_String__op_Equality(a,"true",(MethodInfo *)0x0);
    if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
    }
    if (Il2CppMethodInitialized_075450d5 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONBool);
      Il2CppMethodInitialized_075450d5 = '\x01';
    }
    __this = (SimpleJSONFixed_JSONNumber_o *)
             il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONBool);
    if (Il2CppMethodInitialized_07545125 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
      Il2CppMethodInitialized_07545125 = '\x01';
    }
    if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
    }
    System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
    *(bool *)&(__this->fields).m_Data = bVar1;
  }
  else {
label_058646bd:
    if ((TypeInfo_System_Globalization_CultureInfo->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Globalization_CultureInfo);
    }
    provider = System_Globalization_CultureInfo__get_InvariantCulture((MethodInfo *)0x0);
    pMVar3 = (MethodInfo *)&g_data_000000a7;
    bVar1 = System_Double__TryParse_549e280
                      (token,0xa7,(System_IFormatProvider_o *)provider,&local_28,(MethodInfo *)0x0);
    if (bVar1) {
      local_20 = local_28;
      if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
      }
      if (Il2CppMethodInitialized_075450cb == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNumber);
        Il2CppMethodInitialized_075450cb = '\x01';
      }
      __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNumber);
      if (Il2CppMethodInitialized_07545120 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
        Il2CppMethodInitialized_07545120 = '\x01';
      }
      if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
      }
      System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
      (__this->fields).m_Data = local_20;
    }
    else {
      if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
      }
      __this = (SimpleJSONFixed_JSONNumber_o *)SimpleJSONFixed_JSONNode__op_Implicit(token,pMVar3);
    }
  }
  return (SimpleJSONFixed_JSONNode_o *)__this;
}


// SimpleJSONFixed.JSONNode$$Parse
// il2cpp: SimpleJSONFixed_JSONNode_o* SimpleJSONFixed_JSONNode__Parse (System_String_o* aJSON, const MethodInfo* method);
// 0x58648f0
// asm: 4 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5864b51: jmp 0x5864fe5
// asm:   0x5864bad: jmp 0x586520b
// asm:   0x5864fa5: nop word ptr cs:[rax + rax]
// asm:   0x5864fe3: jmp 0x5865008

SimpleJSONFixed_JSONNode_o * SimpleJSONFixed_JSONNode__Parse(System_String_o *aJSON,MethodInfo *method)

{
  char cVar1;
  uint32_t uVar2;
  byte quoted;
  byte bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  uint16_t uVar7;
  int32_t iVar8;
  System_Collections_Generic_Stack_object__o *__this;
  System_Text_StringBuilder_o *__this_00;
  SimpleJSONFixed_JSONObject_o *__this_01;
  System_String_o *pSVar9;
  SimpleJSONFixed_JSONNode_o *pSVar10;
  Il2CppClass *pIVar11;
  System_Exception_o *__this_02;
  MethodInfo *pMVar12;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  uint *puVar13;
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
  MethodInfo *extraout_RDX_25;
  MethodInfo *extraout_RDX_26;
  MethodInfo *extraout_RDX_27;
  System_String_o **metadataPointer;
  uint uVar14;
  uint index;
  SimpleJSONFixed_JSONNode_o *pSStack_58;
  System_String_o *pSStack_48;
  
  if (Il2CppMethodInitialized_075450dd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONArray);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONObject);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_Stack_JSONNode_Peek);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_Stack_JSONNode_Pop);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_Stack_JSONNode_Push);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_Stack_JSONNode_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Stack_JSONNode_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_Stack_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Text_StringBuilder);
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_075450dd = '\x01';
  }
  __this = (System_Collections_Generic_Stack_object__o *)
           il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_Stack_JSONNode);
  System_Collections_Generic_Stack_object____ctor
            (__this,(MethodInfo_4104650 *)MethodInfo_System_Collections_Generic_Stack_JSONNode_ctor);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Text_StringBuilder);
  System_Text_StringBuilder___ctor(__this_00,(MethodInfo *)0x0);
  if (aJSON != (System_String_o *)0x0) {
    index = 0;
    if ((aJSON->fields)._stringLength < 1) {
      pSStack_58 = (SimpleJSONFixed_JSONNode_o *)0x0;
      bVar6 = false;
      quoted = false;
      puVar13 = (uint *)extraout_RDX;
    }
    else {
      pSStack_48 = "";
      bVar5 = false;
      quoted = false;
      bVar6 = false;
      pSStack_58 = (SimpleJSONFixed_JSONNode_o *)0x0;
      do {
        pMVar12 = (MethodInfo *)(ulong)index;
        uVar7 = System_String__get_Chars(aJSON,index,(MethodInfo *)0x0);
        puVar13 = (uint *)extraout_RDX_00;
        uVar14 = index;
        bVar4 = bVar5;
        if (uVar7 < 0x30) {
          if (uVar7 < 0x21) {
            bVar4 = true;
            switch(uVar7) {
            case 9:
            case 0x20:
              if (!bVar6) goto label_05864a50;
              break;
            case 10:
            case 0xd:
              goto switchD_05864aa0_caseD_a;
            }
          }
          else {
            if (uVar7 == 0x22) {
              bVar3 = ~bVar6;
              bVar6 = (bool)(bVar3 & 1);
              quoted = quoted | bVar3;
              goto label_05864a50;
            }
            if (uVar7 == 0x2c) {
              if (bVar6) goto switchD_05864aa0_caseD_b;
              if (__this_00 == (System_Text_StringBuilder_o *)0x0) goto label_0586520b;
              iVar8 = System_Text_StringBuilder__get_Length(__this_00,(MethodInfo *)0x0);
              if (0 < iVar8 || (bool)quoted != false) {
                pSVar9 = (*(__this_00->klass->vtable)._3_ToString.methodPtr)
                                   (__this_00,(__this_00->klass->vtable)._3_ToString.method);
                pMVar12 = extraout_RDX_07;
                if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
                  pMVar12 = extraout_RDX_08;
                }
                pSVar10 = SimpleJSONFixed_JSONNode__ParseElement(pSVar9,(bool)quoted,pMVar12);
                if (pSStack_58 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_0586520b;
                (*(pSStack_58->klass->vtable)._20_Add.methodPtr)
                          (pSStack_58,pSStack_48,pSVar10,(pSStack_58->klass->vtable)._20_Add.method);
              }
              pSStack_48 = "";
              goto label_05864dbf;
            }
            if (uVar7 == 0x2f) {
              if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
                cVar1 = TypeInfo_SimpleJSONFixed_JSONNode->static_fields->allowLineComments;
              }
              else {
                cVar1 = TypeInfo_SimpleJSONFixed_JSONNode->static_fields->allowLineComments;
              }
              if (((cVar1 != '\0') && (!bVar6)) &&
                 (uVar14 = index + 1, (int)uVar14 < (aJSON->fields)._stringLength)) {
                uVar7 = System_String__get_Chars(aJSON,uVar14,(MethodInfo *)0x0);
                puVar13 = (uint *)extraout_RDX_13;
                if (uVar7 == 0x2f) {
                  do {
                    index = uVar14;
                    if ((aJSON->fields)._stringLength <= (int)index) break;
                    uVar7 = System_String__get_Chars(aJSON,index,(MethodInfo *)0x0);
                    puVar13 = (uint *)extraout_RDX_14;
                    if (uVar7 == 10) break;
                    uVar7 = System_String__get_Chars(aJSON,index,(MethodInfo *)0x0);
                    puVar13 = (uint *)extraout_RDX_15;
                    uVar14 = index + 1;
                  } while (uVar7 != 0xd);
                  goto label_05865008;
                }
              }
              uVar7 = System_String__get_Chars(aJSON,index,(MethodInfo *)0x0);
              if (__this_00 != (System_Text_StringBuilder_o *)0x0) {
                System_Text_StringBuilder__Append_530f6a0(__this_00,uVar7,(MethodInfo *)0x0);
                puVar13 = (uint *)extraout_RDX_16;
label_05865008:
                uVar14 = index;
                goto switchD_05864aa0_caseD_a;
              }
              goto label_0586520b;
            }
          }
        }
        else {
          if (0x5d < uVar7) {
            if (uVar7 != 0xfeff) {
              if (uVar7 == 0x7d) goto switchD_05864ad7_caseD_5d;
              if ((uVar7 == 0x7b) && (!bVar6)) {
                __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONObject);
                SimpleJSONFixed_JSONObject___ctor(__this_01,pMVar12);
                goto joined_r0x05864ba7;
              }
              goto switchD_05864aa0_caseD_b;
            }
            goto label_05864a50;
          }
          puVar13 = &switchD_05864ad7::switchdataD_010a5460;
          switch(uVar7) {
          case 0x3a:
            if (!bVar6) {
              if (__this_00 != (System_Text_StringBuilder_o *)0x0) {
                pSStack_48 = (*(__this_00->klass->vtable)._3_ToString.methodPtr)
                                       (__this_00,(__this_00->klass->vtable)._3_ToString.method);
label_05864dbf:
                quoted = 0;
                System_Text_StringBuilder__set_Length(__this_00,0,(MethodInfo *)0x0);
                puVar13 = (uint *)extraout_RDX_09;
                goto label_05864a50;
              }
              goto label_0586520b;
            }
            break;
          case 0x5b:
            if (bVar6) break;
            __this_01 = (SimpleJSONFixed_JSONObject_o *)
                        il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONArray);
            SimpleJSONFixed_JSONArray___ctor((SimpleJSONFixed_JSONArray_o *)__this_01,pMVar12);
joined_r0x05864ba7:
            if (__this != (System_Collections_Generic_Stack_object__o *)0x0) {
              System_Collections_Generic_Stack_object___Push
                        (__this,(Il2CppObject *)__this_01,
                         (MethodInfo_4104E00 *)MethodInfo_System_Collections_Generic_Stack_JSONNode_Push);
              if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
                pMVar12 = extraout_RDX_17;
                if (Il2CppMethodInitialized_075450d9 != '\0') goto label_05864e4b;
label_05865029:
                il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
                Il2CppMethodInitialized_075450d9 = '\x01';
                uVar2 = (TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor;
                pMVar12 = extraout_RDX_18;
              }
              else {
                pMVar12 = extraout_RDX_10;
                if (Il2CppMethodInitialized_075450d9 == '\0') goto label_05865029;
label_05864e4b:
                uVar2 = (TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor;
              }
              if (uVar2 == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
                pMVar12 = extraout_RDX_19;
              }
              bVar5 = SimpleJSONFixed_JSONNode__op_Equality(pSStack_58,(Il2CppObject *)0x0,pMVar12);
              if (!bVar5) {
                pSVar10 = System_Collections_Generic_Stack_object___Peek
                                    (__this,(MethodInfo_4104C60 *)
                                            MethodInfo_System_Collections_Generic_Stack_JSONNode_Peek);
                if (pSStack_58 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_0586520b;
                (*(pSStack_58->klass->vtable)._20_Add.methodPtr)
                          (pSStack_58,pSStack_48,pSVar10,(pSStack_58->klass->vtable)._20_Add.method);
              }
              if (__this_00 != (System_Text_StringBuilder_o *)0x0) {
                pSStack_48 = "";
                System_Text_StringBuilder__set_Length(__this_00,0,(MethodInfo *)0x0);
                pSStack_58 = System_Collections_Generic_Stack_object___Peek
                                       (__this,(MethodInfo_4104C60 *)
                                               MethodInfo_System_Collections_Generic_Stack_JSONNode_Peek);
                puVar13 = (uint *)extraout_RDX_11;
                bVar4 = false;
                goto switchD_05864aa0_caseD_a;
              }
            }
            goto label_0586520b;
          case 0x5c:
            uVar14 = index + 1;
            if (!bVar6) goto switchD_05864aa0_caseD_a;
            uVar7 = System_String__get_Chars(aJSON,uVar14,(MethodInfo *)0x0);
            if (uVar7 < 0x67) {
              if (uVar7 == 0x62) {
                if (__this_00 == (System_Text_StringBuilder_o *)0x0) goto label_0586520b;
                uVar7 = 8;
              }
              else {
                if (uVar7 != 0x66) goto switchD_058650aa_caseD_6f;
                if (__this_00 == (System_Text_StringBuilder_o *)0x0) goto label_0586520b;
                uVar7 = 0xc;
              }
            }
            else {
              switch(uVar7) {
              case 0x6e:
                if (__this_00 == (System_Text_StringBuilder_o *)0x0) goto label_0586520b;
                uVar7 = 10;
                break;
              default:
switchD_058650aa_caseD_6f:
                if (__this_00 == (System_Text_StringBuilder_o *)0x0) goto label_0586520b;
                break;
              case 0x72:
                if (__this_00 == (System_Text_StringBuilder_o *)0x0) goto label_0586520b;
                uVar7 = 0xd;
                break;
              case 0x74:
                if (__this_00 == (System_Text_StringBuilder_o *)0x0) goto label_0586520b;
                uVar7 = 9;
                break;
              case 0x75:
                pSVar9 = System_String__Substring_53042f0(aJSON,index + 2,4,(MethodInfo *)0x0);
                iVar8 = System_Int32__Parse_54b77d0(pSVar9,0x200,(MethodInfo *)0x0);
                if (__this_00 != (System_Text_StringBuilder_o *)0x0) {
                  System_Text_StringBuilder__Append_530f6a0(__this_00,(uint16_t)iVar8,(MethodInfo *)0x0);
                  index = index + 5;
                  puVar13 = (uint *)extraout_RDX_24;
                  goto label_05865008;
                }
                goto label_0586520b;
              }
            }
            System_Text_StringBuilder__Append_530f6a0(__this_00,uVar7,(MethodInfo *)0x0);
            puVar13 = (uint *)extraout_RDX_23;
            goto switchD_05864aa0_caseD_a;
          case 0x5d:
switchD_05864ad7_caseD_5d:
            if (!bVar6) {
              if (__this == (System_Collections_Generic_Stack_object__o *)0x0) goto label_0586520b;
              if ((__this->fields)._size != 0) {
                System_Collections_Generic_Stack_object___Pop
                          (__this,(MethodInfo_4104CE0 *)
                                  MethodInfo_System_Collections_Generic_Stack_JSONNode_Pop);
                if (__this_00 == (System_Text_StringBuilder_o *)0x0) goto label_0586520b;
                iVar8 = System_Text_StringBuilder__get_Length(__this_00,(MethodInfo *)0x0);
                pMVar12 = extraout_RDX_01;
                if (0 < iVar8 || (bool)quoted != false) {
                  pSVar9 = (*(__this_00->klass->vtable)._3_ToString.methodPtr)
                                     (__this_00,(__this_00->klass->vtable)._3_ToString.method);
                  pMVar12 = extraout_RDX_02;
                  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
                    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
                    pMVar12 = extraout_RDX_03;
                  }
                  pSVar10 = SimpleJSONFixed_JSONNode__ParseElement(pSVar9,(bool)quoted,pMVar12);
                  if (pSStack_58 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_0586520b;
                  (*(pSStack_58->klass->vtable)._20_Add.methodPtr)
                            (pSStack_58,pSStack_48,pSVar10,(pSStack_58->klass->vtable)._20_Add.method);
                  pMVar12 = extraout_RDX_04;
                }
                if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
                  pMVar12 = extraout_RDX_20;
                  if (Il2CppMethodInitialized_075450d9 != '\0') goto label_05864c91;
label_0586506a:
                  il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
                  Il2CppMethodInitialized_075450d9 = '\x01';
                  uVar2 = (TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor;
                  pMVar12 = extraout_RDX_21;
                }
                else {
                  if (Il2CppMethodInitialized_075450d9 == '\0') goto label_0586506a;
label_05864c91:
                  uVar2 = (TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor;
                }
                if (uVar2 == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
                  pMVar12 = extraout_RDX_22;
                }
                bVar4 = SimpleJSONFixed_JSONNode__op_Equality(pSStack_58,(Il2CppObject *)0x0,pMVar12);
                if (!bVar4) {
                  if (pSStack_58 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_0586520b;
                  (*(pSStack_58->klass->vtable)._19_set_Inline.methodPtr)
                            (pSStack_58,!bVar5,(pSStack_58->klass->vtable)._19_set_Inline.method);
                }
                pSStack_48 = "";
                System_Text_StringBuilder__set_Length(__this_00,0,(MethodInfo *)0x0);
                puVar13 = (uint *)extraout_RDX_05;
                if (0 < (__this->fields)._size) {
                  pSStack_58 = System_Collections_Generic_Stack_object___Peek
                                         (__this,(MethodInfo_4104C60 *)
                                                 MethodInfo_System_Collections_Generic_Stack_JSONNode_Peek);
                  puVar13 = (uint *)extraout_RDX_06;
                }
                quoted = 0;
                goto label_05864a50;
              }
              pIVar11 = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
              __this_02 = (System_Exception_o *)il2cpp_codegen_object_new(pIVar11);
              metadataPointer = &"JSON Parse: Too many closing brackets";
              goto label_0586524e;
            }
          }
        }
switchD_05864aa0_caseD_b:
        uVar7 = System_String__get_Chars(aJSON,index,(MethodInfo *)0x0);
        if (__this_00 == (System_Text_StringBuilder_o *)0x0) goto label_0586520b;
        System_Text_StringBuilder__Append_530f6a0(__this_00,uVar7,(MethodInfo *)0x0);
        puVar13 = (uint *)extraout_RDX_12;
label_05864a50:
        bVar4 = bVar5;
switchD_05864aa0_caseD_a:
        bVar5 = bVar4;
        index = uVar14 + 1;
      } while ((int)index < (aJSON->fields)._stringLength);
    }
    if (bVar6) {
      pIVar11 = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
      __this_02 = (System_Exception_o *)il2cpp_codegen_object_new(pIVar11);
      metadataPointer = &"JSON Parse: Quotation marks seems to be messed up.";
label_0586524e:
      pSVar9 = il2cpp_codegen_get_runtime_metadata(metadataPointer);
      System_Exception___ctor_54fa440(__this_02,pSVar9,(MethodInfo *)0x0);
      pMVar12 = il2cpp_codegen_get_runtime_metadata(&MethodInfo_SimpleJSONFixed_JSONNode_Parse);
      il2cpp_codegen_raise_exception((Il2CppObject *)__this_02,pMVar12);
    }
    if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
      puVar13 = (uint *)extraout_RDX_25;
    }
    bVar6 = SimpleJSONFixed_JSONNode__op_Equality(pSStack_58,(Il2CppObject *)0x0,(MethodInfo *)puVar13);
    if (!bVar6) {
      return pSStack_58;
    }
    if (__this_00 != (System_Text_StringBuilder_o *)0x0) {
      pSVar9 = (*(__this_00->klass->vtable)._3_ToString.methodPtr)
                         (__this_00,(__this_00->klass->vtable)._3_ToString.method);
      pMVar12 = extraout_RDX_26;
      if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
        pMVar12 = extraout_RDX_27;
      }
      pSVar10 = SimpleJSONFixed_JSONNode__ParseElement(pSVar9,(bool)quoted,pMVar12);
      return pSVar10;
    }
  }
label_0586520b:
  ThrowNullReferenceException();
}


// SimpleJSONFixed.JSONNode$$.ctor
// il2cpp: void SimpleJSONFixed_JSONNode___ctor (SimpleJSONFixed_JSONNode_o* __this, const MethodInfo* method);
// 0x58653c0

void SimpleJSONFixed_JSONNode___ctor(SimpleJSONFixed_JSONNode_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// SimpleJSONFixed.JSONNode$$.cctor
// il2cpp: void SimpleJSONFixed_JSONNode___cctor (const MethodInfo* method);
// 0x58653d0

void SimpleJSONFixed_JSONNode___cctor(MethodInfo *method)

{
  SimpleJSONFixed_JSONNode_StaticFields *pSVar1;
  
  if (Il2CppMethodInitialized_075450de == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    Il2CppMethodInitialized_075450de = '\x01';
  }
  pSVar1 = TypeInfo_SimpleJSONFixed_JSONNode->static_fields;
  pSVar1->forceASCII = false;
  pSVar1->longAsString = true;
  pSVar1->allowLineComments = true;
  return;
}


