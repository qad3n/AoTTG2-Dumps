// Type: SimpleJSONFixed.JSONNode
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/SimpleJSONFixed/JSONNode.cs
// Prior real C# source (older reference): Assets/Scripts/Utility/SimpleJSON.cs
// --------------------------------

// SimpleJSONFixed.JSONNode.Enumerator$$get_IsValid
// il2cpp: bool SimpleJSONFixed_JSONNode_Enumerator__get_IsValid (SimpleJSONFixed_JSONNode_Enumerator_o __this, const MethodInfo* method);
// 0x181dbb1f0

bool
SimpleJSONFixed_JSONNode_Enumerator__get_IsValid(SimpleJSONFixed_JSONNode_Enumerator_o __this, MethodInfo* method)

{
  return (__this->fields).index != 0;
}


// SimpleJSONFixed.JSONNode.Enumerator$$.ctor
// il2cpp: void SimpleJSONFixed_JSONNode_Enumerator___ctor (SimpleJSONFixed_JSONNode_Enumerator_o __this, System_Collections_Generic_List_Enumerator_JSONNode__o aArrayEnum, const MethodInfo* method);
// 0x181dbb110

void SimpleJSONFixed_JSONNode_Enumerator___ctor
               (SimpleJSONFixed_JSONNode_Enumerator_o *__this,
               System_Collections_Generic_List_Enumerator_JSONNode__o *aArrayEnum,MethodInfo *method)

{
  SimpleJSONFixed_JSONNode_o *pSVar1;
  int32_t iVar2;
  int32_t iVar3;
  
  pSVar1 = (aArrayEnum->fields)._current;
  (__this->fields).type = 1;
  (__this->fields).m_Object.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  (__this->fields).m_Object.fields._version = 0;
  (__this->fields).m_Object.fields._index = 0;
  (__this->fields).m_Object.fields._current.fields.key = (Il2CppObject *)0x0;
  (__this->fields).m_Object.fields._current.fields.value = (Il2CppObject *)0x0;
  *(undefined8 *)&(__this->fields).m_Object.fields._getEnumeratorRetType = 0;
  iVar2 = (aArrayEnum->fields)._index;
  iVar3 = (aArrayEnum->fields)._version;
  (__this->fields).m_Array.fields._list = (aArrayEnum->fields)._list;
  (__this->fields).m_Array.fields._index = iVar2;
  (__this->fields).m_Array.fields._version = iVar3;
  (__this->fields).m_Array.fields._current = pSVar1;
  Il2CppCodeGenWriteBarrier((void **)&(__this->fields).m_Array,(void *)0x0);
  return;
}


// SimpleJSONFixed.JSONNode.Enumerator$$.ctor
// il2cpp: void SimpleJSONFixed_JSONNode_Enumerator___ctor (SimpleJSONFixed_JSONNode_Enumerator_o __this, System_Collections_Generic_Dictionary_Enumerator_string__JSONNode__o aDictEnum, const MethodInfo* method);
// 0x181dbb0c0

void SimpleJSONFixed_JSONNode_Enumerator___ctor_1dbb0c0
               (SimpleJSONFixed_JSONNode_Enumerator_o *__this,
               System_Collections_Generic_Dictionary_Enumerator_string__JSONNode__o *aDictEnum,
               MethodInfo *method)

{
  System_Collections_Generic_Dictionary_TKey__TValue__o *pSVar1;
  Il2CppObject *pIVar2;
  Il2CppObject *pIVar3;
  int32_t iVar4;
  int32_t iVar5;
  undefined4 uVar6;
  
  pSVar1 = (aDictEnum->fields)._dictionary;
  iVar4 = (aDictEnum->fields)._version;
  iVar5 = (aDictEnum->fields)._index;
  (__this->fields).type = 2;
  pIVar2 = (aDictEnum->fields)._current.fields.key;
  pIVar3 = (aDictEnum->fields)._current.fields.value;
  (__this->fields).m_Object.fields._dictionary = pSVar1;
  (__this->fields).m_Object.fields._version = iVar4;
  (__this->fields).m_Object.fields._index = iVar5;
  iVar4 = (aDictEnum->fields)._getEnumeratorRetType;
  uVar6 = *(undefined4 *)&(aDictEnum->fields).field_0x24;
  (__this->fields).m_Object.fields._current.fields.key = pIVar2;
  (__this->fields).m_Object.fields._current.fields.value = pIVar3;
  (__this->fields).m_Object.fields._getEnumeratorRetType = iVar4;
  *(undefined4 *)&(__this->fields).m_Object.fields.field_0x24 = uVar6;
  Il2CppCodeGenWriteBarrier((void **)&(__this->fields).m_Object,(void *)0x0);
  (__this->fields).m_Array.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  (__this->fields).m_Array.fields._index = 0;
  (__this->fields).m_Array.fields._version = 0;
  (__this->fields).m_Array.fields._current = (SimpleJSONFixed_JSONNode_o *)0x0;
  return;
}


// SimpleJSONFixed.JSONNode.Enumerator$$get_Current
// il2cpp: System_Collections_Generic_KeyValuePair_string__JSONNode__o SimpleJSONFixed_JSONNode_Enumerator__get_Current (SimpleJSONFixed_JSONNode_Enumerator_o __this, const MethodInfo* method);
// 0x181dbb150

System_Collections_Generic_KeyValuePair_string__JSONNode__o *
SimpleJSONFixed_JSONNode_Enumerator__get_Current
          (System_Collections_Generic_KeyValuePair_string__JSONNode__o *__return_storage_ptr__,
          SimpleJSONFixed_JSONNode_Enumerator_o *__this,MethodInfo *method)

{
  System_Type_o *source;
  Il2CppObject *pIVar1;
  System_Type_o *destination;
  
  if (Il2CppMethodInitialized_184344985 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_Enumerator_string_JSONNode_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_JSONNode_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_KeyValuePair_string_JSONNode_ctor);
    Il2CppMethodInitialized_184344985 = '\x01';
  }
  if ((__this->fields).type == 1) {
    destination = (System_Type_o *)(__this->fields).m_Array.fields._current;
  }
  else {
    if ((__this->fields).type == 2) {
      pIVar1 = (__this->fields).m_Object.fields._current.fields.value;
      (__return_storage_ptr__->fields).key =
           (System_String_o *)(__this->fields).m_Object.fields._current.fields.key;
      (__return_storage_ptr__->fields).value = (SimpleJSONFixed_JSONNode_o *)pIVar1;
      return __return_storage_ptr__;
    }
    destination = (System_Type_o *)0x0;
  }
  source = (System_Type_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
  (__return_storage_ptr__->fields).key = (System_String_o *)0x0;
  (__return_storage_ptr__->fields).value = (SimpleJSONFixed_JSONNode_o *)0x0;
  System_Collections_Generic_KeyValuePair_object__object____ctor
            ((Unity_Properties_ConverterKey_o *)__return_storage_ptr__,source,destination,
             MethodInfo_System_Collections_Generic_KeyValuePair_string_JSONNode_ctor);
  return __return_storage_ptr__;
}


// SimpleJSONFixed.JSONNode.Enumerator$$MoveNext
// il2cpp: bool SimpleJSONFixed_JSONNode_Enumerator__MoveNext (SimpleJSONFixed_JSONNode_Enumerator_o __this, const MethodInfo* method);
// 0x181dbb050

bool
SimpleJSONFixed_JSONNode_Enumerator__MoveNext(SimpleJSONFixed_JSONNode_Enumerator_o __this, MethodInfo* method)

{
  bool bVar1;
  
  if (Il2CppMethodInitialized_184344986 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_Enumerator_string_JSONNode_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_JSONNode_MoveNext);
    Il2CppMethodInitialized_184344986 = '\x01';
  }
  if ((__this->fields).m_Enumerator.fields.type != 1) {
    if ((__this->fields).m_Enumerator.fields.type != 2) {
      return false;
    }
    bVar1 = System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext
                      ((System_Collections_Generic_Dictionary_Enumerator_object__object__o *)
                       &(__this->fields).m_Enumerator.fields.m_Object,
                       (MethodInfo_1585360 *)
                       MethodInfo_System_Collections_Generic_Dictionary_Enumerator_string_JSONNode_MoveNext);
    return bVar1;
  }
  bVar1 = System_Collections_Generic_List_Enumerator_object___MoveNext
                    ((System_Collections_Generic_List_Enumerator_object__o *)
                     &(__this->fields).m_Enumerator.fields.m_Array,
                     (MethodInfo_153A2A0 *)
                     MethodInfo_System_Collections_Generic_List_Enumerator_JSONNode_MoveNext);
  return bVar1;
}


// SimpleJSONFixed.JSONNode.ValueEnumerator$$.ctor
// il2cpp: void SimpleJSONFixed_JSONNode_ValueEnumerator___ctor (SimpleJSONFixed_JSONNode_ValueEnumerator_o __this, System_Collections_Generic_List_Enumerator_JSONNode__o aArrayEnum, const MethodInfo* method);
// 0x181dc7170

void
SimpleJSONFixed_JSONNode_ValueEnumerator___ctor(SimpleJSONFixed_JSONNode_ValueEnumerator_o __this, System_Collections_Generic_List_Enumerator_JSONNode__o aArrayEnum, MethodInfo* method)

{
  SimpleJSONFixed_JSONNode_Enumerator_o *pSVar1;
  System_Collections_Generic_List_T__o *local_28;
  undefined8 uStack_20;
  SimpleJSONFixed_JSONNode_o *pSStack_18;
  
  local_28 = (aArrayEnum->fields)._list;
  uStack_20._0_4_ = (aArrayEnum->fields)._index;
  uStack_20._4_4_ = (aArrayEnum->fields)._version;
  pSStack_18 = (aArrayEnum->fields)._current;
  Il2CppCodeGenWriteBarrier(&local_28,(void *)0x0);
  *(undefined8 *)&(__this->fields).m_Enumerator.fields = 1;
  (__this->fields).m_Enumerator.fields.m_Object.fields._dictionary =
       (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  pSVar1 = &(__this->fields).m_Enumerator;
  (pSVar1->fields).m_Object.fields._version = 0;
  (pSVar1->fields).m_Object.fields._index = 0;
  (__this->fields).m_Enumerator.fields.m_Object.fields._current.fields.key = (Il2CppObject *)0x0;
  *(Il2CppObject **)((longlong)&(__this->fields).m_Enumerator.fields.m_Object.fields._current.fields + 8) =
       (Il2CppObject *)0x0;
  *(undefined8 *)&(__this->fields).m_Enumerator.fields.m_Object.fields._getEnumeratorRetType = 0;
  (__this->fields).m_Enumerator.fields.m_Array.fields._list = local_28;
  pSVar1 = &(__this->fields).m_Enumerator;
  (pSVar1->fields).m_Array.fields._index = (undefined4)uStack_20;
  (pSVar1->fields).m_Array.fields._version = uStack_20._4_4_;
  (__this->fields).m_Enumerator.fields.m_Array.fields._current = pSStack_18;
  Il2CppCodeGenWriteBarrier((void **)&(__this->fields).m_Enumerator.fields.m_Object,(void *)0x0);
  return;
}


// SimpleJSONFixed.JSONNode.ValueEnumerator$$.ctor
// il2cpp: void SimpleJSONFixed_JSONNode_ValueEnumerator___ctor (SimpleJSONFixed_JSONNode_ValueEnumerator_o __this, System_Collections_Generic_Dictionary_Enumerator_string__JSONNode__o aDictEnum, const MethodInfo* method);
// 0x181dc7240

void
SimpleJSONFixed_JSONNode_ValueEnumerator___ctor_1dc7240(SimpleJSONFixed_JSONNode_ValueEnumerator_o __this, System_Collections_Generic_Dictionary_Enumerator_string__JSONNode__o aDictEnum, MethodInfo* method)

{
  SimpleJSONFixed_JSONNode_Enumerator_o *pSVar1;
  System_Collections_Generic_Dictionary_TKey__TValue__o *pSStack_50;
  undefined8 local_48;
  Il2CppObject *pIStack_40;
  Il2CppObject *local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  
  local_38 = (aDictEnum->fields)._current.fields.value;
  uStack_30 = *(undefined8 *)&(aDictEnum->fields)._getEnumeratorRetType;
  local_18 = 0;
  pSStack_50 = (aDictEnum->fields)._dictionary;
  local_28 = 0;
  uStack_20 = 0;
  local_48._0_4_ = (aDictEnum->fields)._version;
  local_48._4_4_ = (aDictEnum->fields)._index;
  pIStack_40 = (aDictEnum->fields)._current.fields.key;
  Il2CppCodeGenWriteBarrier(&pSStack_50,(void *)0x0);
  *(undefined8 *)&(__this->fields).m_Enumerator.fields = 2;
  (__this->fields).m_Enumerator.fields.m_Object.fields._dictionary = pSStack_50;
  pSVar1 = &(__this->fields).m_Enumerator;
  (pSVar1->fields).m_Object.fields._version = (undefined4)local_48;
  (pSVar1->fields).m_Object.fields._index = local_48._4_4_;
  (__this->fields).m_Enumerator.fields.m_Object.fields._current.fields.key = pIStack_40;
  local_18 = 0;
  *(Il2CppObject **)((longlong)&(__this->fields).m_Enumerator.fields.m_Object.fields._current.fields + 8) =
       local_38;
  *(undefined8 *)&(__this->fields).m_Enumerator.fields.m_Object.fields._getEnumeratorRetType = uStack_30;
  (__this->fields).m_Enumerator.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  pSVar1 = &(__this->fields).m_Enumerator;
  (pSVar1->fields).m_Array.fields._index = 0;
  (pSVar1->fields).m_Array.fields._version = 0;
  (__this->fields).m_Enumerator.fields.m_Array.fields._current = (SimpleJSONFixed_JSONNode_o *)0x0;
  local_28 = 0;
  uStack_20 = 0;
  Il2CppCodeGenWriteBarrier((void **)&(__this->fields).m_Enumerator.fields.m_Object,(void *)0x0);
  return;
}


// SimpleJSONFixed.JSONNode.ValueEnumerator$$.ctor
// il2cpp: void SimpleJSONFixed_JSONNode_ValueEnumerator___ctor (SimpleJSONFixed_JSONNode_ValueEnumerator_o __this, SimpleJSONFixed_JSONNode_Enumerator_o aEnumerator, const MethodInfo* method);
// 0x181dc7200

void
SimpleJSONFixed_JSONNode_ValueEnumerator___ctor_1dc7200(SimpleJSONFixed_JSONNode_ValueEnumerator_o __this, SimpleJSONFixed_JSONNode_Enumerator_o aEnumerator, MethodInfo* method)

{
  SimpleJSONFixed_JSONNode_o *pSVar1;
  System_Collections_Generic_Dictionary_TKey__TValue__o *pSVar2;
  Il2CppObject *pIVar3;
  Il2CppObject *pIVar4;
  System_Collections_Generic_List_T__o *pSVar5;
  SimpleJSONFixed_JSONNode_Enumerator_o *pSVar6;
  undefined4 uVar7;
  int32_t iVar8;
  int32_t iVar9;
  int32_t iVar10;
  
  uVar7 = *(undefined4 *)&(aEnumerator->fields).field_0x4;
  pSVar2 = (aEnumerator->fields).m_Object.fields._dictionary;
  iVar8 = (aEnumerator->fields).m_Object.fields._version;
  iVar9 = (aEnumerator->fields).m_Object.fields._index;
  pIVar3 = (aEnumerator->fields).m_Object.fields._current.fields.key;
  (__this->fields).m_Enumerator.fields.type = (aEnumerator->fields).type;
  *(undefined4 *)&(__this->fields).m_Enumerator.fields.field_0x4 = uVar7;
  (__this->fields).m_Enumerator.fields.m_Object.fields._dictionary = pSVar2;
  pIVar4 = (aEnumerator->fields).m_Object.fields._current.fields.value;
  iVar10 = (aEnumerator->fields).m_Object.fields._getEnumeratorRetType;
  uVar7 = *(undefined4 *)&(aEnumerator->fields).m_Object.fields.field_0x24;
  pSVar6 = &(__this->fields).m_Enumerator;
  (pSVar6->fields).m_Object.fields._version = iVar8;
  (pSVar6->fields).m_Object.fields._index = iVar9;
  (__this->fields).m_Enumerator.fields.m_Object.fields._current.fields.key = pIVar3;
  pSVar5 = (aEnumerator->fields).m_Array.fields._list;
  iVar8 = (aEnumerator->fields).m_Array.fields._index;
  iVar9 = (aEnumerator->fields).m_Array.fields._version;
  *(Il2CppObject **)((longlong)&(__this->fields).m_Enumerator.fields.m_Object.fields._current.fields + 8) =
       pIVar4;
  pSVar6 = &(__this->fields).m_Enumerator;
  (pSVar6->fields).m_Object.fields._getEnumeratorRetType = iVar10;
  *(undefined4 *)&(pSVar6->fields).m_Object.fields.field_0x24 = uVar7;
  pSVar1 = (aEnumerator->fields).m_Array.fields._current;
  (__this->fields).m_Enumerator.fields.m_Array.fields._list = pSVar5;
  pSVar6 = &(__this->fields).m_Enumerator;
  (pSVar6->fields).m_Array.fields._index = iVar8;
  (pSVar6->fields).m_Array.fields._version = iVar9;
  (__this->fields).m_Enumerator.fields.m_Array.fields._current = pSVar1;
  Il2CppCodeGenWriteBarrier((void **)&(__this->fields).m_Enumerator.fields.m_Object,(void *)0x0);
  return;
}


// SimpleJSONFixed.JSONNode.ValueEnumerator$$get_Current
// il2cpp: SimpleJSONFixed_JSONNode_o* SimpleJSONFixed_JSONNode_ValueEnumerator__get_Current (SimpleJSONFixed_JSONNode_ValueEnumerator_o __this, const MethodInfo* method);
// 0x181dd2240

SimpleJSONFixed_JSONNode_o *
SimpleJSONFixed_JSONNode_ValueEnumerator__get_Current
          (SimpleJSONFixed_JSONNode_ValueEnumerator_o *__this,MethodInfo *method)

{
  System_Type_o *destination;
  Unity_Properties_ConverterKey_o local_18;
  
  if (Il2CppMethodInitialized_184344989 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_KeyValuePair_string_JSONNode_get_Value);
    Il2CppMethodInitialized_184344989 = '\x01';
  }
  if (Il2CppMethodInitialized_184344985 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_Enumerator_string_JSONNode_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_JSONNode_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_KeyValuePair_string_JSONNode_ctor);
    Il2CppMethodInitialized_184344985 = '\x01';
  }
  if ((__this->fields).m_Enumerator.fields.type == 1) {
    destination = (System_Type_o *)(__this->fields).m_Enumerator.fields.m_Array.fields._current;
  }
  else {
    if ((__this->fields).m_Enumerator.fields.type == 2) {
      return (SimpleJSONFixed_JSONNode_o *)
             *(Il2CppObject **)
              ((longlong)&(__this->fields).m_Enumerator.fields.m_Object.fields._current.fields + 8);
    }
    destination = (System_Type_o *)0x0;
  }
  local_18.fields.SourceType = (System_Type_o *)0x0;
  local_18.fields.DestinationType = (System_Type_o *)0x0;
  System_Collections_Generic_KeyValuePair_object__object____ctor
            (&local_18,(System_Type_o *)**(undefined8 **)(g_data_184354e50 + 0xb8),destination,
             MethodInfo_System_Collections_Generic_KeyValuePair_string_JSONNode_ctor);
  return (SimpleJSONFixed_JSONNode_o *)local_18.fields.DestinationType;
}


// SimpleJSONFixed.JSONNode.ValueEnumerator$$MoveNext
// il2cpp: bool SimpleJSONFixed_JSONNode_ValueEnumerator__MoveNext (SimpleJSONFixed_JSONNode_ValueEnumerator_o __this, const MethodInfo* method);
// 0x181dbb050

bool
SimpleJSONFixed_JSONNode_ValueEnumerator__MoveNext(SimpleJSONFixed_JSONNode_ValueEnumerator_o __this, MethodInfo* method)

{
  bool bVar1;
  
  if (Il2CppMethodInitialized_184344986 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_Enumerator_string_JSONNode_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_JSONNode_MoveNext);
    Il2CppMethodInitialized_184344986 = '\x01';
  }
  if ((__this->fields).m_Enumerator.fields.type != 1) {
    if ((__this->fields).m_Enumerator.fields.type != 2) {
      return false;
    }
    bVar1 = System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext
                      ((System_Collections_Generic_Dictionary_Enumerator_object__object__o *)
                       &(__this->fields).m_Enumerator.fields.m_Object,
                       (MethodInfo_1585360 *)
                       MethodInfo_System_Collections_Generic_Dictionary_Enumerator_string_JSONNode_MoveNext);
    return bVar1;
  }
  bVar1 = System_Collections_Generic_List_Enumerator_object___MoveNext
                    ((System_Collections_Generic_List_Enumerator_object__o *)
                     &(__this->fields).m_Enumerator.fields.m_Array,
                     (MethodInfo_153A2A0 *)
                     MethodInfo_System_Collections_Generic_List_Enumerator_JSONNode_MoveNext);
  return bVar1;
}


// SimpleJSONFixed.JSONNode.ValueEnumerator$$GetEnumerator
// il2cpp: SimpleJSONFixed_JSONNode_ValueEnumerator_o SimpleJSONFixed_JSONNode_ValueEnumerator__GetEnumerator (SimpleJSONFixed_JSONNode_ValueEnumerator_o __this, const MethodInfo* method);
// 0x181dc7140

SimpleJSONFixed_JSONNode_ValueEnumerator_o
SimpleJSONFixed_JSONNode_ValueEnumerator__GetEnumerator(SimpleJSONFixed_JSONNode_ValueEnumerator_o __this, MethodInfo* method)

{
  SimpleJSONFixed_JSONNode_o *pSVar1;
  System_Collections_Generic_Dictionary_TKey__TValue__o *pSVar2;
  Il2CppObject *pIVar3;
  Il2CppObject *pIVar4;
  System_Collections_Generic_List_T__o *pSVar5;
  SimpleJSONFixed_JSONNode_Enumerator_o *pSVar6;
  undefined4 uVar7;
  int32_t iVar8;
  int32_t iVar9;
  int32_t iVar10;
  
  uVar7 = *(undefined4 *)&(__this->fields).m_Enumerator.fields.field_0x4;
  pSVar2 = (__this->fields).m_Enumerator.fields.m_Object.fields._dictionary;
  pSVar6 = &(__this->fields).m_Enumerator;
  iVar8 = (pSVar6->fields).m_Object.fields._version;
  iVar9 = (pSVar6->fields).m_Object.fields._index;
  pIVar3 = (__this->fields).m_Enumerator.fields.m_Object.fields._current.fields.key;
  (__return_storage_ptr__->fields).m_Enumerator.fields.type = (__this->fields).m_Enumerator.fields.type;
  *(undefined4 *)&(__return_storage_ptr__->fields).m_Enumerator.fields.field_0x4 = uVar7;
  (__return_storage_ptr__->fields).m_Enumerator.fields.m_Object.fields._dictionary = pSVar2;
  pIVar4 = *(Il2CppObject **)
            ((longlong)&(__this->fields).m_Enumerator.fields.m_Object.fields._current.fields + 8);
  pSVar6 = &(__this->fields).m_Enumerator;
  iVar10 = (pSVar6->fields).m_Object.fields._getEnumeratorRetType;
  uVar7 = *(undefined4 *)&(pSVar6->fields).m_Object.fields.field_0x24;
  pSVar6 = &(__return_storage_ptr__->fields).m_Enumerator;
  (pSVar6->fields).m_Object.fields._version = iVar8;
  (pSVar6->fields).m_Object.fields._index = iVar9;
  (__return_storage_ptr__->fields).m_Enumerator.fields.m_Object.fields._current.fields.key = pIVar3;
  pSVar5 = (__this->fields).m_Enumerator.fields.m_Array.fields._list;
  pSVar6 = &(__this->fields).m_Enumerator;
  iVar8 = (pSVar6->fields).m_Array.fields._index;
  iVar9 = (pSVar6->fields).m_Array.fields._version;
  *(Il2CppObject **)
   ((longlong)&(__return_storage_ptr__->fields).m_Enumerator.fields.m_Object.fields._current.fields + 8) =
       pIVar4;
  pSVar6 = &(__return_storage_ptr__->fields).m_Enumerator;
  (pSVar6->fields).m_Object.fields._getEnumeratorRetType = iVar10;
  *(undefined4 *)&(pSVar6->fields).m_Object.fields.field_0x24 = uVar7;
  pSVar1 = (__this->fields).m_Enumerator.fields.m_Array.fields._current;
  (__return_storage_ptr__->fields).m_Enumerator.fields.m_Array.fields._list = pSVar5;
  pSVar6 = &(__return_storage_ptr__->fields).m_Enumerator;
  (pSVar6->fields).m_Array.fields._index = iVar8;
  (pSVar6->fields).m_Array.fields._version = iVar9;
  (__return_storage_ptr__->fields).m_Enumerator.fields.m_Array.fields._current = pSVar1;
  return __return_storage_ptr__;
}


// SimpleJSONFixed.JSONNode.KeyEnumerator$$.ctor
// il2cpp: void SimpleJSONFixed_JSONNode_KeyEnumerator___ctor (SimpleJSONFixed_JSONNode_KeyEnumerator_o __this, System_Collections_Generic_List_Enumerator_JSONNode__o aArrayEnum, const MethodInfo* method);
// 0x181dc7170

void SimpleJSONFixed_JSONNode_KeyEnumerator___ctor
               (SimpleJSONFixed_JSONNode_KeyEnumerator_o *__this,
               System_Collections_Generic_List_Enumerator_JSONNode__o *aArrayEnum,MethodInfo *method)

{
  SimpleJSONFixed_JSONNode_Enumerator_o *pSVar1;
  System_Collections_Generic_List_T__o *local_28;
  undefined8 uStack_20;
  SimpleJSONFixed_JSONNode_o *pSStack_18;
  
  local_28 = (aArrayEnum->fields)._list;
  uStack_20._0_4_ = (aArrayEnum->fields)._index;
  uStack_20._4_4_ = (aArrayEnum->fields)._version;
  pSStack_18 = (aArrayEnum->fields)._current;
  Il2CppCodeGenWriteBarrier(&local_28,(void *)0x0);
  *(undefined8 *)&(__this->fields).m_Enumerator.fields = 1;
  (__this->fields).m_Enumerator.fields.m_Object.fields._dictionary =
       (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  pSVar1 = &(__this->fields).m_Enumerator;
  (pSVar1->fields).m_Object.fields._version = 0;
  (pSVar1->fields).m_Object.fields._index = 0;
  (__this->fields).m_Enumerator.fields.m_Object.fields._current.fields.key = (Il2CppObject *)0x0;
  *(Il2CppObject **)((longlong)&(__this->fields).m_Enumerator.fields.m_Object.fields._current.fields + 8) =
       (Il2CppObject *)0x0;
  *(undefined8 *)&(__this->fields).m_Enumerator.fields.m_Object.fields._getEnumeratorRetType = 0;
  (__this->fields).m_Enumerator.fields.m_Array.fields._list = local_28;
  pSVar1 = &(__this->fields).m_Enumerator;
  (pSVar1->fields).m_Array.fields._index = (undefined4)uStack_20;
  (pSVar1->fields).m_Array.fields._version = uStack_20._4_4_;
  (__this->fields).m_Enumerator.fields.m_Array.fields._current = pSStack_18;
  Il2CppCodeGenWriteBarrier((void **)&(__this->fields).m_Enumerator.fields.m_Object,(void *)0x0);
  return;
}


// SimpleJSONFixed.JSONNode.KeyEnumerator$$.ctor
// il2cpp: void SimpleJSONFixed_JSONNode_KeyEnumerator___ctor (SimpleJSONFixed_JSONNode_KeyEnumerator_o __this, System_Collections_Generic_Dictionary_Enumerator_string__JSONNode__o aDictEnum, const MethodInfo* method);
// 0x181dc7240

void SimpleJSONFixed_JSONNode_KeyEnumerator___ctor_1dc7240
               (SimpleJSONFixed_JSONNode_KeyEnumerator_o *__this,
               System_Collections_Generic_Dictionary_Enumerator_string__JSONNode__o *aDictEnum,
               MethodInfo *method)

{
  SimpleJSONFixed_JSONNode_Enumerator_o *pSVar1;
  System_Collections_Generic_Dictionary_TKey__TValue__o *pSStack_50;
  undefined8 local_48;
  Il2CppObject *pIStack_40;
  Il2CppObject *local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  
  local_38 = (aDictEnum->fields)._current.fields.value;
  uStack_30 = *(undefined8 *)&(aDictEnum->fields)._getEnumeratorRetType;
  local_18 = 0;
  pSStack_50 = (aDictEnum->fields)._dictionary;
  local_28 = 0;
  uStack_20 = 0;
  local_48._0_4_ = (aDictEnum->fields)._version;
  local_48._4_4_ = (aDictEnum->fields)._index;
  pIStack_40 = (aDictEnum->fields)._current.fields.key;
  Il2CppCodeGenWriteBarrier(&pSStack_50,(void *)0x0);
  *(undefined8 *)&(__this->fields).m_Enumerator.fields = 2;
  (__this->fields).m_Enumerator.fields.m_Object.fields._dictionary = pSStack_50;
  pSVar1 = &(__this->fields).m_Enumerator;
  (pSVar1->fields).m_Object.fields._version = (undefined4)local_48;
  (pSVar1->fields).m_Object.fields._index = local_48._4_4_;
  (__this->fields).m_Enumerator.fields.m_Object.fields._current.fields.key = pIStack_40;
  local_18 = 0;
  *(Il2CppObject **)((longlong)&(__this->fields).m_Enumerator.fields.m_Object.fields._current.fields + 8) =
       local_38;
  *(undefined8 *)&(__this->fields).m_Enumerator.fields.m_Object.fields._getEnumeratorRetType = uStack_30;
  (__this->fields).m_Enumerator.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  pSVar1 = &(__this->fields).m_Enumerator;
  (pSVar1->fields).m_Array.fields._index = 0;
  (pSVar1->fields).m_Array.fields._version = 0;
  (__this->fields).m_Enumerator.fields.m_Array.fields._current = (SimpleJSONFixed_JSONNode_o *)0x0;
  local_28 = 0;
  uStack_20 = 0;
  Il2CppCodeGenWriteBarrier((void **)&(__this->fields).m_Enumerator.fields.m_Object,(void *)0x0);
  return;
}


// SimpleJSONFixed.JSONNode.KeyEnumerator$$.ctor
// il2cpp: void SimpleJSONFixed_JSONNode_KeyEnumerator___ctor (SimpleJSONFixed_JSONNode_KeyEnumerator_o __this, SimpleJSONFixed_JSONNode_Enumerator_o aEnumerator, const MethodInfo* method);
// 0x181dc7200

void SimpleJSONFixed_JSONNode_KeyEnumerator___ctor_1dc7200
               (SimpleJSONFixed_JSONNode_KeyEnumerator_o *__this,
               SimpleJSONFixed_JSONNode_Enumerator_o *aEnumerator,MethodInfo *method)

{
  SimpleJSONFixed_JSONNode_o *pSVar1;
  System_Collections_Generic_Dictionary_TKey__TValue__o *pSVar2;
  Il2CppObject *pIVar3;
  Il2CppObject *pIVar4;
  System_Collections_Generic_List_T__o *pSVar5;
  SimpleJSONFixed_JSONNode_Enumerator_o *pSVar6;
  undefined4 uVar7;
  int32_t iVar8;
  int32_t iVar9;
  int32_t iVar10;
  
  uVar7 = *(undefined4 *)&(aEnumerator->fields).field_0x4;
  pSVar2 = (aEnumerator->fields).m_Object.fields._dictionary;
  iVar8 = (aEnumerator->fields).m_Object.fields._version;
  iVar9 = (aEnumerator->fields).m_Object.fields._index;
  pIVar3 = (aEnumerator->fields).m_Object.fields._current.fields.key;
  (__this->fields).m_Enumerator.fields.type = (aEnumerator->fields).type;
  *(undefined4 *)&(__this->fields).m_Enumerator.fields.field_0x4 = uVar7;
  (__this->fields).m_Enumerator.fields.m_Object.fields._dictionary = pSVar2;
  pIVar4 = (aEnumerator->fields).m_Object.fields._current.fields.value;
  iVar10 = (aEnumerator->fields).m_Object.fields._getEnumeratorRetType;
  uVar7 = *(undefined4 *)&(aEnumerator->fields).m_Object.fields.field_0x24;
  pSVar6 = &(__this->fields).m_Enumerator;
  (pSVar6->fields).m_Object.fields._version = iVar8;
  (pSVar6->fields).m_Object.fields._index = iVar9;
  (__this->fields).m_Enumerator.fields.m_Object.fields._current.fields.key = pIVar3;
  pSVar5 = (aEnumerator->fields).m_Array.fields._list;
  iVar8 = (aEnumerator->fields).m_Array.fields._index;
  iVar9 = (aEnumerator->fields).m_Array.fields._version;
  *(Il2CppObject **)((longlong)&(__this->fields).m_Enumerator.fields.m_Object.fields._current.fields + 8) =
       pIVar4;
  pSVar6 = &(__this->fields).m_Enumerator;
  (pSVar6->fields).m_Object.fields._getEnumeratorRetType = iVar10;
  *(undefined4 *)&(pSVar6->fields).m_Object.fields.field_0x24 = uVar7;
  pSVar1 = (aEnumerator->fields).m_Array.fields._current;
  (__this->fields).m_Enumerator.fields.m_Array.fields._list = pSVar5;
  pSVar6 = &(__this->fields).m_Enumerator;
  (pSVar6->fields).m_Array.fields._index = iVar8;
  (pSVar6->fields).m_Array.fields._version = iVar9;
  (__this->fields).m_Enumerator.fields.m_Array.fields._current = pSVar1;
  Il2CppCodeGenWriteBarrier((void **)&(__this->fields).m_Enumerator.fields.m_Object,(void *)0x0);
  return;
}


// SimpleJSONFixed.JSONNode.KeyEnumerator$$get_Current
// il2cpp: System_String_o* SimpleJSONFixed_JSONNode_KeyEnumerator__get_Current (SimpleJSONFixed_JSONNode_KeyEnumerator_o __this, const MethodInfo* method);
// 0x181dc72d0

System_String_o *
SimpleJSONFixed_JSONNode_KeyEnumerator__get_Current
          (SimpleJSONFixed_JSONNode_KeyEnumerator_o *__this,MethodInfo *method)

{
  System_Type_o *destination;
  Unity_Properties_ConverterKey_o local_18;
  
  if (Il2CppMethodInitialized_18434498c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_KeyValuePair_string_JSONNode_get_Key);
    Il2CppMethodInitialized_18434498c = '\x01';
  }
  if (Il2CppMethodInitialized_184344985 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_Enumerator_string_JSONNode_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_JSONNode_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_KeyValuePair_string_JSONNode_ctor);
    Il2CppMethodInitialized_184344985 = '\x01';
  }
  if ((__this->fields).m_Enumerator.fields.type == 1) {
    destination = (System_Type_o *)(__this->fields).m_Enumerator.fields.m_Array.fields._current;
  }
  else {
    if ((__this->fields).m_Enumerator.fields.type == 2) {
      return (System_String_o *)(__this->fields).m_Enumerator.fields.m_Object.fields._current.fields.key;
    }
    destination = (System_Type_o *)0x0;
  }
  local_18.fields.SourceType = (System_Type_o *)0x0;
  local_18.fields.DestinationType = (System_Type_o *)0x0;
  System_Collections_Generic_KeyValuePair_object__object____ctor
            (&local_18,(System_Type_o *)**(undefined8 **)(g_data_184354e50 + 0xb8),destination,
             MethodInfo_System_Collections_Generic_KeyValuePair_string_JSONNode_ctor);
  return (System_String_o *)local_18.fields.SourceType;
}


// SimpleJSONFixed.JSONNode.KeyEnumerator$$MoveNext
// il2cpp: bool SimpleJSONFixed_JSONNode_KeyEnumerator__MoveNext (SimpleJSONFixed_JSONNode_KeyEnumerator_o __this, const MethodInfo* method);
// 0x181dbb050

bool SimpleJSONFixed_JSONNode_KeyEnumerator__MoveNext
               (SimpleJSONFixed_JSONNode_KeyEnumerator_o *__this,MethodInfo *method)

{
  bool bVar1;
  
  if (Il2CppMethodInitialized_184344986 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_Enumerator_string_JSONNode_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_JSONNode_MoveNext);
    Il2CppMethodInitialized_184344986 = '\x01';
  }
  if ((__this->fields).m_Enumerator.fields.type != 1) {
    if ((__this->fields).m_Enumerator.fields.type != 2) {
      return false;
    }
    bVar1 = System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext
                      ((System_Collections_Generic_Dictionary_Enumerator_object__object__o *)
                       &(__this->fields).m_Enumerator.fields.m_Object,
                       (MethodInfo_1585360 *)
                       MethodInfo_System_Collections_Generic_Dictionary_Enumerator_string_JSONNode_MoveNext);
    return bVar1;
  }
  bVar1 = System_Collections_Generic_List_Enumerator_object___MoveNext
                    ((System_Collections_Generic_List_Enumerator_object__o *)
                     &(__this->fields).m_Enumerator.fields.m_Array,
                     (MethodInfo_153A2A0 *)
                     MethodInfo_System_Collections_Generic_List_Enumerator_JSONNode_MoveNext);
  return bVar1;
}


// SimpleJSONFixed.JSONNode.KeyEnumerator$$GetEnumerator
// il2cpp: SimpleJSONFixed_JSONNode_KeyEnumerator_o SimpleJSONFixed_JSONNode_KeyEnumerator__GetEnumerator (SimpleJSONFixed_JSONNode_KeyEnumerator_o __this, const MethodInfo* method);
// 0x181dc7140

SimpleJSONFixed_JSONNode_KeyEnumerator_o *
SimpleJSONFixed_JSONNode_KeyEnumerator__GetEnumerator
          (SimpleJSONFixed_JSONNode_KeyEnumerator_o *__return_storage_ptr__,
          SimpleJSONFixed_JSONNode_KeyEnumerator_o *__this,MethodInfo *method)

{
  SimpleJSONFixed_JSONNode_o *pSVar1;
  System_Collections_Generic_Dictionary_TKey__TValue__o *pSVar2;
  Il2CppObject *pIVar3;
  Il2CppObject *pIVar4;
  System_Collections_Generic_List_T__o *pSVar5;
  SimpleJSONFixed_JSONNode_Enumerator_o *pSVar6;
  undefined4 uVar7;
  int32_t iVar8;
  int32_t iVar9;
  int32_t iVar10;
  
  uVar7 = *(undefined4 *)&(__this->fields).m_Enumerator.fields.field_0x4;
  pSVar2 = (__this->fields).m_Enumerator.fields.m_Object.fields._dictionary;
  pSVar6 = &(__this->fields).m_Enumerator;
  iVar8 = (pSVar6->fields).m_Object.fields._version;
  iVar9 = (pSVar6->fields).m_Object.fields._index;
  pIVar3 = (__this->fields).m_Enumerator.fields.m_Object.fields._current.fields.key;
  (__return_storage_ptr__->fields).m_Enumerator.fields.type = (__this->fields).m_Enumerator.fields.type;
  *(undefined4 *)&(__return_storage_ptr__->fields).m_Enumerator.fields.field_0x4 = uVar7;
  (__return_storage_ptr__->fields).m_Enumerator.fields.m_Object.fields._dictionary = pSVar2;
  pIVar4 = *(Il2CppObject **)
            ((longlong)&(__this->fields).m_Enumerator.fields.m_Object.fields._current.fields + 8);
  pSVar6 = &(__this->fields).m_Enumerator;
  iVar10 = (pSVar6->fields).m_Object.fields._getEnumeratorRetType;
  uVar7 = *(undefined4 *)&(pSVar6->fields).m_Object.fields.field_0x24;
  pSVar6 = &(__return_storage_ptr__->fields).m_Enumerator;
  (pSVar6->fields).m_Object.fields._version = iVar8;
  (pSVar6->fields).m_Object.fields._index = iVar9;
  (__return_storage_ptr__->fields).m_Enumerator.fields.m_Object.fields._current.fields.key = pIVar3;
  pSVar5 = (__this->fields).m_Enumerator.fields.m_Array.fields._list;
  pSVar6 = &(__this->fields).m_Enumerator;
  iVar8 = (pSVar6->fields).m_Array.fields._index;
  iVar9 = (pSVar6->fields).m_Array.fields._version;
  *(Il2CppObject **)
   ((longlong)&(__return_storage_ptr__->fields).m_Enumerator.fields.m_Object.fields._current.fields + 8) =
       pIVar4;
  pSVar6 = &(__return_storage_ptr__->fields).m_Enumerator;
  (pSVar6->fields).m_Object.fields._getEnumeratorRetType = iVar10;
  *(undefined4 *)&(pSVar6->fields).m_Object.fields.field_0x24 = uVar7;
  pSVar1 = (__this->fields).m_Enumerator.fields.m_Array.fields._current;
  (__return_storage_ptr__->fields).m_Enumerator.fields.m_Array.fields._list = pSVar5;
  pSVar6 = &(__return_storage_ptr__->fields).m_Enumerator;
  (pSVar6->fields).m_Array.fields._index = iVar8;
  (pSVar6->fields).m_Array.fields._version = iVar9;
  (__return_storage_ptr__->fields).m_Enumerator.fields.m_Array.fields._current = pSVar1;
  return __return_storage_ptr__;
}


// SimpleJSONFixed.JSONNode.LinqEnumerator$$.ctor
// il2cpp: void SimpleJSONFixed_JSONNode_LinqEnumerator___ctor (SimpleJSONFixed_JSONNode_LinqEnumerator_o* __this, SimpleJSONFixed_JSONNode_o* aNode, const MethodInfo* method);
// 0x181dc7750

void SimpleJSONFixed_JSONNode_LinqEnumerator___ctor
               (SimpleJSONFixed_JSONNode_LinqEnumerator_o *__this,SimpleJSONFixed_JSONNode_o *aNode,
               MethodInfo *method)

{
  byte bVar1;
  SimpleJSONFixed_JSONNode_o *pSVar2;
  SimpleJSONFixed_JSONNode_c *pSVar3;
  System_Collections_Generic_Dictionary_TKey__TValue__o *pSVar4;
  undefined8 uVar5;
  Il2CppObject *pIVar6;
  Il2CppObject *pIVar7;
  undefined8 uVar8;
  System_Collections_Generic_List_T__o *pSVar9;
  undefined8 uVar10;
  SimpleJSONFixed_JSONNode_Enumerator_o *pSVar11;
  bool bVar12;
  SimpleJSONFixed_JSONNode_o *pSVar13;
  undefined8 *puVar14;
  undefined1 local_58 [80];
  
  if (Il2CppMethodInitialized_18434498d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    Il2CppMethodInitialized_18434498d = '\x01';
  }
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  (__this->fields).m_Node = aNode;
  Il2CppCodeGenWriteBarrier(&(__this->fields).m_Node,aNode);
  pSVar2 = (__this->fields).m_Node;
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
  if (pSVar2 != (SimpleJSONFixed_JSONNode_o *)0x0) {
    pSVar3 = pSVar2->klass;
    bVar1 = (TypeInfo_SimpleJSONFixed_JSONNull->_2).typeHierarchyDepth;
    if (((pSVar3->_2).typeHierarchyDepth < bVar1) ||
       ((pSVar3->_2).typeHierarchy[(ulonglong)bVar1 - 1] != (Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNull))
    {
      bVar1 = (TypeInfo_SimpleJSONFixed_JSONLazyCreator->_2).typeHierarchyDepth;
      if (((pSVar3->_2).typeHierarchyDepth < bVar1) ||
         ((pSVar3->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
          (Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONLazyCreator)) {
        bVar12 = false;
      }
      else {
        bVar12 = true;
      }
      pSVar13 = (SimpleJSONFixed_JSONNode_o *)0x0;
      if (bVar12) {
        pSVar13 = pSVar2;
      }
      bVar12 = pSVar13 != (SimpleJSONFixed_JSONNode_o *)0x0;
    }
    else {
      bVar12 = true;
    }
    if (!bVar12) {
      bVar12 = (*(pSVar3->vtable)._0_Equals.methodPtr)
                         (pSVar2,(Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o *)0x0,
                          (pSVar3->vtable)._0_Equals.method);
      if (!bVar12) {
        pSVar2 = (__this->fields).m_Node;
        if (pSVar2 == (SimpleJSONFixed_JSONNode_o *)0x0) {
          ThrowNullReferenceException();
        }
        puVar14 = (undefined8 *)
                  (*(pSVar2->klass->vtable)._32_unknown.methodPtr)
                            (local_58,pSVar2,(pSVar2->klass->vtable)._32_unknown.method);
        pSVar4 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)puVar14[1];
        uVar5 = puVar14[2];
        pIVar6 = (Il2CppObject *)puVar14[3];
        pIVar7 = (Il2CppObject *)puVar14[4];
        uVar8 = puVar14[5];
        pSVar9 = (System_Collections_Generic_List_T__o *)puVar14[6];
        uVar10 = puVar14[7];
        pSVar2 = (SimpleJSONFixed_JSONNode_o *)puVar14[8];
        *(undefined8 *)&(__this->fields).m_Enumerator.fields = *puVar14;
        (__this->fields).m_Enumerator.fields.m_Object.fields._dictionary = pSVar4;
        pSVar11 = &(__this->fields).m_Enumerator;
        (pSVar11->fields).m_Object.fields._version = (int)uVar5;
        (pSVar11->fields).m_Object.fields._index = (int)((ulonglong)uVar5 >> 0x20);
        (__this->fields).m_Enumerator.fields.m_Object.fields._current.fields.key = pIVar6;
        (__this->fields).m_Enumerator.fields.m_Object.fields._current.fields.value = pIVar7;
        *(undefined8 *)&(__this->fields).m_Enumerator.fields.m_Object.fields._getEnumeratorRetType = uVar8;
        (__this->fields).m_Enumerator.fields.m_Array.fields._list = pSVar9;
        pSVar11 = &(__this->fields).m_Enumerator;
        (pSVar11->fields).m_Array.fields._index = (int)uVar10;
        (pSVar11->fields).m_Array.fields._version = (int)((ulonglong)uVar10 >> 0x20);
        (__this->fields).m_Enumerator.fields.m_Array.fields._current = pSVar2;
        Il2CppCodeGenWriteBarrier((void **)&(__this->fields).m_Enumerator.fields.m_Object,(void *)0x0);
      }
    }
  }
  return;
}


// SimpleJSONFixed.JSONNode.LinqEnumerator$$get_Current
// il2cpp: System_Collections_Generic_KeyValuePair_string__JSONNode__o SimpleJSONFixed_JSONNode_LinqEnumerator__get_Current (SimpleJSONFixed_JSONNode_LinqEnumerator_o* __this, const MethodInfo* method);
// 0x181dc7910

System_Collections_Generic_KeyValuePair_string__JSONNode__o *
SimpleJSONFixed_JSONNode_LinqEnumerator__get_Current
          (System_Collections_Generic_KeyValuePair_string__JSONNode__o *__return_storage_ptr__,
          SimpleJSONFixed_JSONNode_LinqEnumerator_o *__this,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  System_Type_o *destination;
  Unity_Properties_ConverterKey_o local_18;
  
  if (Il2CppMethodInitialized_184344985 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_Enumerator_string_JSONNode_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_JSONNode_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_KeyValuePair_string_JSONNode_ctor);
    Il2CppMethodInitialized_184344985 = '\x01';
  }
  if ((__this->fields).m_Enumerator.fields.type == 1) {
    destination = (System_Type_o *)(__this->fields).m_Enumerator.fields.m_Array.fields._current;
  }
  else {
    if ((__this->fields).m_Enumerator.fields.type == 2) {
      pIVar1 = *(Il2CppObject **)
                ((longlong)&(__this->fields).m_Enumerator.fields.m_Object.fields._current.fields + 8);
      (__return_storage_ptr__->fields).key =
           (System_String_o *)(__this->fields).m_Enumerator.fields.m_Object.fields._current.fields.key;
      (__return_storage_ptr__->fields).value = (SimpleJSONFixed_JSONNode_o *)pIVar1;
      return __return_storage_ptr__;
    }
    destination = (System_Type_o *)0x0;
  }
  local_18.fields.SourceType = (System_Type_o *)0x0;
  local_18.fields.DestinationType = (System_Type_o *)0x0;
  System_Collections_Generic_KeyValuePair_object__object____ctor
            (&local_18,(System_Type_o *)**(undefined8 **)(g_data_184354e50 + 0xb8),destination,
             MethodInfo_System_Collections_Generic_KeyValuePair_string_JSONNode_ctor);
  (__return_storage_ptr__->fields).key = (System_String_o *)local_18.fields.SourceType;
  (__return_storage_ptr__->fields).value = (SimpleJSONFixed_JSONNode_o *)local_18.fields.DestinationType;
  return __return_storage_ptr__;
}


// SimpleJSONFixed.JSONNode.LinqEnumerator$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* SimpleJSONFixed_JSONNode_LinqEnumerator__System_Collections_IEnumerator_get_Current (SimpleJSONFixed_JSONNode_LinqEnumerator_o* __this, const MethodInfo* method);
// 0x181dc7690

Il2CppObject *
SimpleJSONFixed_JSONNode_LinqEnumerator__System_Collections_IEnumerator_get_Current
          (SimpleJSONFixed_JSONNode_LinqEnumerator_o *__this,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  System_Type_o *destination;
  Unity_Properties_ConverterKey_o local_28;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  if (Il2CppMethodInitialized_18434498e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_KeyValuePair_string_JSONNode);
    Il2CppMethodInitialized_18434498e = '\x01';
  }
  if (Il2CppMethodInitialized_184344985 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_Enumerator_string_JSONNode_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_JSONNode_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_KeyValuePair_string_JSONNode_ctor);
    Il2CppMethodInitialized_184344985 = '\x01';
  }
  if ((__this->fields).m_Enumerator.fields.type == 1) {
    destination = (System_Type_o *)(__this->fields).m_Enumerator.fields.m_Array.fields._current;
  }
  else {
    if ((__this->fields).m_Enumerator.fields.type == 2) {
      local_18 = *(undefined4 *)&(__this->fields).m_Enumerator.fields.m_Object.fields._current.fields.key;
      uStack_14 = *(undefined4 *)
                   ((longlong)&(__this->fields).m_Enumerator.fields.m_Object.fields._current.fields + 4);
      uStack_10 = *(undefined4 *)
                   ((longlong)&(__this->fields).m_Enumerator.fields.m_Object.fields._current.fields + 8);
      uStack_c = *(undefined4 *)
                  ((longlong)&(__this->fields).m_Enumerator.fields.m_Object.fields._current.fields + 0xc);
      goto label_181dc7733;
    }
    destination = (System_Type_o *)0x0;
  }
  local_28.fields.SourceType = (System_Type_o *)0x0;
  local_28.fields.DestinationType = (System_Type_o *)0x0;
  System_Collections_Generic_KeyValuePair_object__object____ctor
            (&local_28,(System_Type_o *)**(undefined8 **)(g_data_184354e50 + 0xb8),destination,
             MethodInfo_System_Collections_Generic_KeyValuePair_string_JSONNode_ctor);
  local_18 = local_28.fields.SourceType._0_4_;
  uStack_14 = local_28.fields.SourceType._4_4_;
  uStack_10 = local_28.fields.DestinationType._0_4_;
  uStack_c = local_28.fields.DestinationType._4_4_;
label_181dc7733:
  pIVar1 = il2cpp_value_box((Il2CppClass *)TypeInfo_System_Collections_Generic_KeyValuePair_string_JSONNode,
                       &local_18);
  return pIVar1;
}


// SimpleJSONFixed.JSONNode.LinqEnumerator$$MoveNext
// il2cpp: bool SimpleJSONFixed_JSONNode_LinqEnumerator__MoveNext (SimpleJSONFixed_JSONNode_LinqEnumerator_o* __this, const MethodInfo* method);
// 0x181dc7420

bool SimpleJSONFixed_JSONNode_LinqEnumerator__MoveNext
               (SimpleJSONFixed_JSONNode_LinqEnumerator_o *__this,MethodInfo *method)

{
  bool bVar1;
  
  if (Il2CppMethodInitialized_184344986 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_Enumerator_string_JSONNode_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_JSONNode_MoveNext);
    Il2CppMethodInitialized_184344986 = '\x01';
  }
  if ((__this->fields).m_Enumerator.fields.type != 1) {
    if ((__this->fields).m_Enumerator.fields.type != 2) {
      return false;
    }
    bVar1 = System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext
                      ((System_Collections_Generic_Dictionary_Enumerator_object__object__o *)
                       &(__this->fields).m_Enumerator.fields.m_Object,
                       (MethodInfo_1585360 *)
                       MethodInfo_System_Collections_Generic_Dictionary_Enumerator_string_JSONNode_MoveNext);
    return bVar1;
  }
  bVar1 = System_Collections_Generic_List_Enumerator_object___MoveNext
                    ((System_Collections_Generic_List_Enumerator_object__o *)
                     &(__this->fields).m_Enumerator.fields.m_Array,
                     (MethodInfo_153A2A0 *)
                     MethodInfo_System_Collections_Generic_List_Enumerator_JSONNode_MoveNext);
  return bVar1;
}


// SimpleJSONFixed.JSONNode.LinqEnumerator$$Dispose
// il2cpp: void SimpleJSONFixed_JSONNode_LinqEnumerator__Dispose (SimpleJSONFixed_JSONNode_LinqEnumerator_o* __this, const MethodInfo* method);
// 0x181dc7380

void SimpleJSONFixed_JSONNode_LinqEnumerator__Dispose
               (SimpleJSONFixed_JSONNode_LinqEnumerator_o *__this,MethodInfo *method)

{
  SimpleJSONFixed_JSONNode_Enumerator_o *pSVar1;
  
  (__this->fields).m_Node = (SimpleJSONFixed_JSONNode_o *)0x0;
  Il2CppCodeGenWriteBarrier(&(__this->fields).m_Node,(void *)0x0);
  *(undefined8 *)&(__this->fields).m_Enumerator.fields = 0;
  (__this->fields).m_Enumerator.fields.m_Object.fields._dictionary =
       (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  pSVar1 = &(__this->fields).m_Enumerator;
  (pSVar1->fields).m_Object.fields._version = 0;
  (pSVar1->fields).m_Object.fields._index = 0;
  (__this->fields).m_Enumerator.fields.m_Object.fields._current.fields.key = (Il2CppObject *)0x0;
  *(Il2CppObject **)((longlong)&(__this->fields).m_Enumerator.fields.m_Object.fields._current.fields + 8) =
       (Il2CppObject *)0x0;
  *(undefined8 *)&(__this->fields).m_Enumerator.fields.m_Object.fields._getEnumeratorRetType = 0;
  (__this->fields).m_Enumerator.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  pSVar1 = &(__this->fields).m_Enumerator;
  (pSVar1->fields).m_Array.fields._index = 0;
  (pSVar1->fields).m_Array.fields._version = 0;
  (__this->fields).m_Enumerator.fields.m_Array.fields._current = (SimpleJSONFixed_JSONNode_o *)0x0;
  return;
}


// SimpleJSONFixed.JSONNode.LinqEnumerator$$GetEnumerator
// il2cpp: System_Collections_Generic_IEnumerator_KeyValuePair_string__JSONNode___o* SimpleJSONFixed_JSONNode_LinqEnumerator__GetEnumerator (SimpleJSONFixed_JSONNode_LinqEnumerator_o* __this, const MethodInfo* method);
// 0x181dc73c0

System_Collections_Generic_IEnumerator_KeyValuePair_string__JSONNode___o *
SimpleJSONFixed_JSONNode_LinqEnumerator__GetEnumerator
          (SimpleJSONFixed_JSONNode_LinqEnumerator_o *__this,MethodInfo *method)

{
  SimpleJSONFixed_JSONNode_o *aNode;
  SimpleJSONFixed_JSONNode_LinqEnumerator_o *__this_00;
  
  if (Il2CppMethodInitialized_18434498f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode_LinqEnumerator);
    Il2CppMethodInitialized_18434498f = '\x01';
  }
  aNode = (__this->fields).m_Node;
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode_LinqEnumerator);
  SimpleJSONFixed_JSONNode_LinqEnumerator___ctor(__this_00,aNode,(MethodInfo *)0x0);
  return (System_Collections_Generic_IEnumerator_KeyValuePair_string__JSONNode___o *)__this_00;
}


// SimpleJSONFixed.JSONNode.LinqEnumerator$$Reset
// il2cpp: void SimpleJSONFixed_JSONNode_LinqEnumerator__Reset (SimpleJSONFixed_JSONNode_LinqEnumerator_o* __this, const MethodInfo* method);
// 0x181dc7490

void SimpleJSONFixed_JSONNode_LinqEnumerator__Reset
               (SimpleJSONFixed_JSONNode_LinqEnumerator_o *__this,MethodInfo *method)

{
  byte bVar1;
  SimpleJSONFixed_JSONNode_o *pSVar2;
  SimpleJSONFixed_JSONNode_c *pSVar3;
  System_Collections_Generic_Dictionary_TKey__TValue__o *pSVar4;
  undefined8 uVar5;
  Il2CppObject *pIVar6;
  Il2CppObject *pIVar7;
  undefined8 uVar8;
  System_Collections_Generic_List_T__o *pSVar9;
  undefined8 uVar10;
  SimpleJSONFixed_JSONNode_Enumerator_o *pSVar11;
  bool bVar12;
  SimpleJSONFixed_JSONNode_o *pSVar13;
  undefined8 *puVar14;
  undefined1 local_58 [80];
  
  if (Il2CppMethodInitialized_184344990 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    Il2CppMethodInitialized_184344990 = '\x01';
  }
  pSVar2 = (__this->fields).m_Node;
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
  if (pSVar2 != (SimpleJSONFixed_JSONNode_o *)0x0) {
    pSVar3 = pSVar2->klass;
    bVar1 = (TypeInfo_SimpleJSONFixed_JSONNull->_2).typeHierarchyDepth;
    if (((pSVar3->_2).typeHierarchyDepth < bVar1) ||
       ((pSVar3->_2).typeHierarchy[(ulonglong)bVar1 - 1] != (Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNull))
    {
      bVar1 = (TypeInfo_SimpleJSONFixed_JSONLazyCreator->_2).typeHierarchyDepth;
      if (((pSVar3->_2).typeHierarchyDepth < bVar1) ||
         ((pSVar3->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
          (Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONLazyCreator)) {
        bVar12 = false;
      }
      else {
        bVar12 = true;
      }
      pSVar13 = (SimpleJSONFixed_JSONNode_o *)0x0;
      if (bVar12) {
        pSVar13 = pSVar2;
      }
      bVar12 = pSVar13 != (SimpleJSONFixed_JSONNode_o *)0x0;
    }
    else {
      bVar12 = true;
    }
    if (!bVar12) {
      bVar12 = (*(pSVar3->vtable)._0_Equals.methodPtr)
                         (pSVar2,(Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o *)0x0,
                          (pSVar3->vtable)._0_Equals.method);
      if (!bVar12) {
        pSVar2 = (__this->fields).m_Node;
        if (pSVar2 == (SimpleJSONFixed_JSONNode_o *)0x0) {
          ThrowNullReferenceException();
        }
        puVar14 = (undefined8 *)
                  (*(pSVar2->klass->vtable)._32_unknown.methodPtr)
                            (local_58,pSVar2,(pSVar2->klass->vtable)._32_unknown.method);
        pSVar4 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)puVar14[1];
        uVar5 = puVar14[2];
        pIVar6 = (Il2CppObject *)puVar14[3];
        pIVar7 = (Il2CppObject *)puVar14[4];
        uVar8 = puVar14[5];
        pSVar9 = (System_Collections_Generic_List_T__o *)puVar14[6];
        uVar10 = puVar14[7];
        pSVar2 = (SimpleJSONFixed_JSONNode_o *)puVar14[8];
        *(undefined8 *)&(__this->fields).m_Enumerator.fields = *puVar14;
        (__this->fields).m_Enumerator.fields.m_Object.fields._dictionary = pSVar4;
        pSVar11 = &(__this->fields).m_Enumerator;
        (pSVar11->fields).m_Object.fields._version = (int)uVar5;
        (pSVar11->fields).m_Object.fields._index = (int)((ulonglong)uVar5 >> 0x20);
        (__this->fields).m_Enumerator.fields.m_Object.fields._current.fields.key = pIVar6;
        (__this->fields).m_Enumerator.fields.m_Object.fields._current.fields.value = pIVar7;
        *(undefined8 *)&(__this->fields).m_Enumerator.fields.m_Object.fields._getEnumeratorRetType = uVar8;
        (__this->fields).m_Enumerator.fields.m_Array.fields._list = pSVar9;
        pSVar11 = &(__this->fields).m_Enumerator;
        (pSVar11->fields).m_Array.fields._index = (int)uVar10;
        (pSVar11->fields).m_Array.fields._version = (int)((ulonglong)uVar10 >> 0x20);
        (__this->fields).m_Enumerator.fields.m_Array.fields._current = pSVar2;
        Il2CppCodeGenWriteBarrier((void **)&(__this->fields).m_Enumerator.fields.m_Object,(void *)0x0);
      }
    }
  }
  return;
}


// SimpleJSONFixed.JSONNode.LinqEnumerator$$System.Collections.IEnumerable.GetEnumerator
// il2cpp: System_Collections_IEnumerator_o* SimpleJSONFixed_JSONNode_LinqEnumerator__System_Collections_IEnumerable_GetEnumerator (SimpleJSONFixed_JSONNode_LinqEnumerator_o* __this, const MethodInfo* method);
// 0x181dc7630

System_Collections_IEnumerator_o *
SimpleJSONFixed_JSONNode_LinqEnumerator__System_Collections_IEnumerable_GetEnumerator
          (SimpleJSONFixed_JSONNode_LinqEnumerator_o *__this,MethodInfo *method)

{
  SimpleJSONFixed_JSONNode_o *aNode;
  SimpleJSONFixed_JSONNode_LinqEnumerator_o *__this_00;
  
  if (Il2CppMethodInitialized_184344991 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode_LinqEnumerator);
    Il2CppMethodInitialized_184344991 = '\x01';
  }
  aNode = (__this->fields).m_Node;
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode_LinqEnumerator);
  SimpleJSONFixed_JSONNode_LinqEnumerator___ctor(__this_00,aNode,(MethodInfo *)0x0);
  return (System_Collections_IEnumerator_o *)__this_00;
}


// SimpleJSONFixed.JSONNode.<get_Children>d__43$$.ctor
// il2cpp: void SimpleJSONFixed_JSONNode__get_Children_d__43___ctor (SimpleJSONFixed_JSONNode__get_Children_d__43_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x1808e2870

void
SimpleJSONFixed_JSONNode__get_Children_d__43___ctor(SimpleJSONFixed_JSONNode__get_Children_d__43_o* __this, int32_t __1__state, MethodInfo* method)

{
  int32_t iVar1;
  
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  iVar1 = System_Diagnostics_TraceEventCache__GetThreadId((MethodInfo *)0x0);
  (__this->fields).__l__initialThreadId = iVar1;
  return;
}


// SimpleJSONFixed.JSONNode.<get_Children>d__43$$System.IDisposable.Dispose
// il2cpp: void SimpleJSONFixed_JSONNode__get_Children_d__43__System_IDisposable_Dispose (SimpleJSONFixed_JSONNode__get_Children_d__43_o* __this, const MethodInfo* method);
// 0x180547020

void
SimpleJSONFixed_JSONNode__get_Children_d__43__System_IDisposable_Dispose(SimpleJSONFixed_JSONNode__get_Children_d__43_o* __this, MethodInfo* method)

{
  return;
}


// SimpleJSONFixed.JSONNode.<get_Children>d__43$$MoveNext
// il2cpp: bool SimpleJSONFixed_JSONNode__get_Children_d__43__MoveNext (SimpleJSONFixed_JSONNode__get_Children_d__43_o* __this, const MethodInfo* method);
// 0x1818be990

bool
SimpleJSONFixed_JSONNode__get_Children_d__43__MoveNext(SimpleJSONFixed_JSONNode__get_Children_d__43_o* __this, MethodInfo* method)

{
  if ((__this->fields).__1__state == 0) {
    (__this->fields).__1__state = -1;
  }
  return false;
}


// SimpleJSONFixed.JSONNode.<get_Children>d__43$$System.Collections.Generic.IEnumerator<SimpleJSONFixed.JSONNode>.get_Current
// il2cpp: SimpleJSONFixed_JSONNode_o* SimpleJSONFixed_JSONNode__get_Children_d__43__System_Collections_Generic_IEnumerator_SimpleJSONFixed_JSONNode__get_Current (SimpleJSONFixed_JSONNode__get_Children_d__43_o* __this, const MethodInfo* method);
// 0x180573e90

SimpleJSONFixed_JSONNode_o*
SimpleJSONFixed_JSONNode__get_Children_d__43__System_Collections_Generic_IEnumerator_SimpleJSONFixed_JSONNode__get_Current(SimpleJSONFixed_JSONNode__get_Children_d__43_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// SimpleJSONFixed.JSONNode.<get_Children>d__43$$System.Collections.IEnumerator.Reset
// il2cpp: void SimpleJSONFixed_JSONNode__get_Children_d__43__System_Collections_IEnumerator_Reset (SimpleJSONFixed_JSONNode__get_Children_d__43_o* __this, const MethodInfo* method);
// 0x181dd16a0

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
// 0x180573e90

Il2CppObject*
SimpleJSONFixed_JSONNode__get_Children_d__43__System_Collections_IEnumerator_get_Current(SimpleJSONFixed_JSONNode__get_Children_d__43_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// SimpleJSONFixed.JSONNode.<get_Children>d__43$$System.Collections.Generic.IEnumerable<SimpleJSONFixed.JSONNode>.GetEnumerator
// il2cpp: System_Collections_Generic_IEnumerator_JSONNode__o* SimpleJSONFixed_JSONNode__get_Children_d__43__System_Collections_Generic_IEnumerable_SimpleJSONFixed_JSONNode__GetEnumerator (SimpleJSONFixed_JSONNode__get_Children_d__43_o* __this, const MethodInfo* method);
// 0x181dd1610

System_Collections_Generic_IEnumerator_JSONNode__o*
SimpleJSONFixed_JSONNode__get_Children_d__43__System_Collections_Generic_IEnumerable_SimpleJSONFixed_JSONNode__GetEnumerator(SimpleJSONFixed_JSONNode__get_Children_d__43_o* __this, MethodInfo* method)

{
  int iVar1;
  int32_t iVar2;
  SimpleJSONFixed_JSONNode__get_Children_d__43_o *__this_00;
  
  if (Il2CppMethodInitialized_184344992 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode_get_Children_d__43);
    Il2CppMethodInitialized_184344992 = '\x01';
  }
  if ((__this->fields).__1__state == -2) {
    iVar1 = (__this->fields).__l__initialThreadId;
    iVar2 = System_Diagnostics_TraceEventCache__GetThreadId((MethodInfo *)0x0);
    if (iVar1 == iVar2) {
      (__this->fields).__1__state = 0;
      return (System_Collections_IEnumerator_o *)__this;
    }
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode_get_Children_d__43);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).__1__state = 0;
  iVar2 = System_Diagnostics_TraceEventCache__GetThreadId((MethodInfo *)0x0);
  (__this_00->fields).__l__initialThreadId = iVar2;
  return (System_Collections_IEnumerator_o *)__this_00;
}


// SimpleJSONFixed.JSONNode.<get_Children>d__43$$System.Collections.IEnumerable.GetEnumerator
// il2cpp: System_Collections_IEnumerator_o* SimpleJSONFixed_JSONNode__get_Children_d__43__System_Collections_IEnumerable_GetEnumerator (SimpleJSONFixed_JSONNode__get_Children_d__43_o* __this, const MethodInfo* method);
// 0x181dd1610

System_Collections_IEnumerator_o *
SimpleJSONFixed_JSONNode__get_Children_d__43__System_Collections_IEnumerable_GetEnumerator
          (SimpleJSONFixed_JSONNode__get_Children_d__43_o *__this,MethodInfo *method)

{
  int iVar1;
  int32_t iVar2;
  SimpleJSONFixed_JSONNode__get_Children_d__43_o *__this_00;
  
  if (Il2CppMethodInitialized_184344992 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode_get_Children_d__43);
    Il2CppMethodInitialized_184344992 = '\x01';
  }
  if ((__this->fields).__1__state == -2) {
    iVar1 = (__this->fields).__l__initialThreadId;
    iVar2 = System_Diagnostics_TraceEventCache__GetThreadId((MethodInfo *)0x0);
    if (iVar1 == iVar2) {
      (__this->fields).__1__state = 0;
      return (System_Collections_IEnumerator_o *)__this;
    }
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode_get_Children_d__43);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).__1__state = 0;
  iVar2 = System_Diagnostics_TraceEventCache__GetThreadId((MethodInfo *)0x0);
  (__this_00->fields).__l__initialThreadId = iVar2;
  return (System_Collections_IEnumerator_o *)__this_00;
}


// SimpleJSONFixed.JSONNode.<get_DeepChildren>d__45$$.ctor
// il2cpp: void SimpleJSONFixed_JSONNode__get_DeepChildren_d__45___ctor (SimpleJSONFixed_JSONNode__get_DeepChildren_d__45_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x1808e2870

void
SimpleJSONFixed_JSONNode__get_DeepChildren_d__45___ctor(SimpleJSONFixed_JSONNode__get_DeepChildren_d__45_o* __this, int32_t __1__state, MethodInfo* method)

{
  int32_t iVar1;
  
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  iVar1 = System_Diagnostics_TraceEventCache__GetThreadId((MethodInfo *)0x0);
  (__this->fields).__l__initialThreadId = iVar1;
  return;
}


// SimpleJSONFixed.JSONNode.<get_DeepChildren>d__45$$System.IDisposable.Dispose
// il2cpp: void SimpleJSONFixed_JSONNode__get_DeepChildren_d__45__System_IDisposable_Dispose (SimpleJSONFixed_JSONNode__get_DeepChildren_d__45_o* __this, const MethodInfo* method);
// 0x181dd1b20
// eh: try 0x181dd1b9f..0x181dd1c6c -> pad 0x183317f60 (+2 call sites) catch Il2CppExceptionWrapper
// asm: 25 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181dd1b9a: jmp 0x181dd1c31
// asm:   0x181dd1bef: nop 
// asm:   0x181dd1c37: lea rcx, [rsp + 0x38]
// asm:   0x181dd1c3c: call 0x181db9020  ; il2cpp_runtime_helper_181db9020()
// asm:   0x181dd1c41: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x181dd1c46: test rcx, rcx
// asm:   0x181dd1c49: jne 0x181dd1c65
// asm:   0x181dd1c4b: lea rcx, [rsp + 0x48]
// asm:   0x181dd1c50: call 0x181db8f00  ; il2cpp_runtime_helper_181db8f00()
// asm:   0x181dd1c55: mov rcx, qword ptr [rsp + 0x40]
// asm:   0x181dd1c5a: test rcx, rcx
// asm:   0x181dd1c5d: je 0x181dd1c31
// asm:   0x181dd1c5f: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x181dd1c65: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183317f60: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183317f65: push rbp
// asm:   0x183317f66: sub rsp, 0x20
// asm:   0x183317f6a: mov rbp, rdx
// asm:   0x183317f6d: mov rax, qword ptr [rbp + 0x28]
// asm:   0x183317f71: mov rcx, qword ptr [rax]
// asm:   0x183317f74: mov qword ptr [rbp + 0x40], rcx
// asm:   0x183317f78: movabs rax, 0
// asm:   0x183317f82: add rsp, 0x20
// asm:   0x183317f86: pop rbp
// asm:   0x183317f87: ret 

void SimpleJSONFixed_JSONNode__get_DeepChildren_d__45__System_IDisposable_Dispose
               (SimpleJSONFixed_JSONNode__get_DeepChildren_d__45_o *__this,MethodInfo *method)

{
  int iVar1;
  
  iVar1 = (__this->fields).__1__state;
  if ((iVar1 + 4U < 2) || (iVar1 == 1)) {
    if ((iVar1 == -4) || (iVar1 == 1)) {
      if (Il2CppMethodInitialized_184344995 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IDisposable);
        Il2CppMethodInitialized_184344995 = '\x01';
      }
      (__this->fields).__1__state = -3;
      if ((__this->fields).__7__wrap2 != (System_Collections_Generic_IEnumerator_JSONNode__o *)0x0) {
        InterfaceInvoker0_Invoke
                  (0,(Il2CppClass *)TypeInfo_System_IDisposable,(Il2CppObject *)(__this->fields).__7__wrap2);
      }
      if (Il2CppMethodInitialized_184344994 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IDisposable);
        Il2CppMethodInitialized_184344994 = '\x01';
      }
      (__this->fields).__1__state = -1;
      if ((__this->fields).__7__wrap1 != (System_Collections_Generic_IEnumerator_JSONNode__o *)0x0) {
        InterfaceInvoker0_Invoke
                  (0,(Il2CppClass *)TypeInfo_System_IDisposable,(Il2CppObject *)(__this->fields).__7__wrap1);
      }
    }
    else {
      if (Il2CppMethodInitialized_184344994 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IDisposable);
        Il2CppMethodInitialized_184344994 = '\x01';
      }
      (__this->fields).__1__state = -1;
      if ((__this->fields).__7__wrap1 != (System_Collections_Generic_IEnumerator_JSONNode__o *)0x0) {
        InterfaceInvoker0_Invoke
                  (0,(Il2CppClass *)TypeInfo_System_IDisposable,(Il2CppObject *)(__this->fields).__7__wrap1);
      }
    }
  }
  return;
}


// SimpleJSONFixed.JSONNode.<get_DeepChildren>d__45$$MoveNext
// il2cpp: bool SimpleJSONFixed_JSONNode__get_DeepChildren_d__45__MoveNext (SimpleJSONFixed_JSONNode__get_DeepChildren_d__45_o* __this, const MethodInfo* method);
// 0x181dd16e0
// eh: try 0x181dd173d..0x181dd1a2a -> pad 0x183315930 (+2 call sites) catch Il2CppExceptionWrapper
// asm: 22 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181dd19db: xor al, al
// asm:   0x181dd19dd: mov byte ptr [rsp + 0x70], al
// asm:   0x181dd19e1: jmp 0x181dd19f2
// asm:   0x181dd19e3: mov rbx, qword ptr [rsp + 0x28]
// asm:   0x181dd19e8: test rbx, rbx
// asm:   0x181dd19eb: jne 0x181dd1a2a
// asm:   0x181dd19ed: movzx eax, byte ptr [rsp + 0x70]
// asm:   0x181dd1a2a: lea rcx, [rsp + 0x30]
// asm:   0x181dd1a2f: call 0x181db8fc0  ; il2cpp_runtime_helper_181db8fc0()
// asm:   0x181dd1a34: mov rcx, rbx
// asm:   0x181dd1a37: call 0x1804171b0  ; il2cpp_codegen_rethrow()
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

bool SimpleJSONFixed_JSONNode__get_DeepChildren_d__45__MoveNext
               (SimpleJSONFixed_JSONNode__get_DeepChildren_d__45_o *__this,MethodInfo *method)

{
  int iVar1;
  int32_t iVar2;
  Il2CppObject *pIVar3;
  System_Collections_Generic_IEnumerator_JSONNode__o *pSVar4;
  void *pvVar5;
  SimpleJSONFixed_JSONNode_o *pSVar6;
  SimpleJSONFixed_JSONNode__get_DeepChildren_d__45_o *obj;
  
  if (Il2CppMethodInitialized_184344993 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_IEnumerable_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_IEnumerator_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_IEnumerator);
    Il2CppMethodInitialized_184344993 = '\x01';
  }
  iVar1 = (__this->fields).__1__state;
  if (iVar1 == 0) {
    pSVar6 = (__this->fields).__4__this;
    (__this->fields).__1__state = -1;
    if (pSVar6 == (SimpleJSONFixed_JSONNode_o *)0x0) {
      ThrowNullReferenceException();
    }
    pIVar3 = (Il2CppObject *)
             (*(pSVar6->klass->vtable)._27_get_Children.methodPtr)
                       (pSVar6,(pSVar6->klass->vtable)._27_get_Children.method);
    if (pIVar3 == (Il2CppObject *)0x0) {
      ThrowNullReferenceException();
    }
    pSVar4 = InterfaceInvoker0_Invoke
                       (0,(Il2CppClass *)TypeInfo_System_Collections_Generic_IEnumerable_JSONNode,pIVar3);
    (__this->fields).__7__wrap1 = pSVar4;
    Il2CppCodeGenWriteBarrier(&(__this->fields).__7__wrap1,pSVar4);
    (__this->fields).__1__state = -3;
    while( true ) {
      pIVar3 = (Il2CppObject *)(__this->fields).__7__wrap1;
      if (pIVar3 == (Il2CppObject *)0x0) {
        ThrowNullReferenceException();
      }
      pvVar5 = InterfaceInvoker0_Invoke(0,(Il2CppClass *)TypeInfo_System_Collections_IEnumerator,pIVar3);
      if ((char)pvVar5 == '\0') break;
      pIVar3 = (Il2CppObject *)(__this->fields).__7__wrap1;
      if (pIVar3 == (Il2CppObject *)0x0) {
        ThrowNullReferenceException();
      }
      pSVar6 = InterfaceInvoker0_Invoke
                         (0,(Il2CppClass *)TypeInfo_System_Collections_Generic_IEnumerator_JSONNode,pIVar3);
      if (pSVar6 == (SimpleJSONFixed_JSONNode_o *)0x0) {
        ThrowNullReferenceException();
      }
      if (Il2CppMethodInitialized_184344964 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode_get_DeepChildren_d__45);
        Il2CppMethodInitialized_184344964 = '\x01';
      }
      obj = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode_get_DeepChildren_d__45)
      ;
      System_Configuration_ConfigurationCollectionAttribute___ctor
                ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)obj,(MethodInfo *)0x0);
      (obj->fields).__1__state = -2;
      iVar2 = System_Diagnostics_TraceEventCache__GetThreadId((MethodInfo *)0x0);
      (obj->fields).__l__initialThreadId = iVar2;
      if (obj == (SimpleJSONFixed_JSONNode__get_DeepChildren_d__45_o *)0x0) {
        ThrowNullReferenceException();
      }
      (obj->fields).__4__this = pSVar6;
      Il2CppCodeGenWriteBarrier(&(obj->fields).__4__this,pSVar6);
      pSVar4 = InterfaceInvoker0_Invoke
                         (0,(Il2CppClass *)TypeInfo_System_Collections_Generic_IEnumerable_JSONNode,
                          (Il2CppObject *)obj);
      (__this->fields).__7__wrap2 = pSVar4;
      Il2CppCodeGenWriteBarrier(&(__this->fields).__7__wrap2,pSVar4);
label_181dd17bb:
      (__this->fields).__1__state = -4;
      pIVar3 = (Il2CppObject *)(__this->fields).__7__wrap2;
      if (pIVar3 == (Il2CppObject *)0x0) {
        ThrowNullReferenceException();
      }
      pvVar5 = InterfaceInvoker0_Invoke(0,(Il2CppClass *)TypeInfo_System_Collections_IEnumerator,pIVar3);
      if ((char)pvVar5 != '\0') {
        pIVar3 = (Il2CppObject *)(__this->fields).__7__wrap2;
        if (pIVar3 == (Il2CppObject *)0x0) {
          ThrowNullReferenceException();
        }
        pSVar6 = InterfaceInvoker0_Invoke
                           (0,(Il2CppClass *)TypeInfo_System_Collections_Generic_IEnumerator_JSONNode,pIVar3);
        (__this->fields).__2__current = pSVar6;
        Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current,pSVar6);
        (__this->fields).__1__state = 1;
        return true;
      }
      if (Il2CppMethodInitialized_184344995 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IDisposable);
        Il2CppMethodInitialized_184344995 = '\x01';
      }
      (__this->fields).__1__state = -3;
      if ((__this->fields).__7__wrap2 != (System_Collections_Generic_IEnumerator_JSONNode__o *)0x0) {
        InterfaceInvoker0_Invoke
                  (0,(Il2CppClass *)TypeInfo_System_IDisposable,(Il2CppObject *)(__this->fields).__7__wrap2);
      }
      (__this->fields).__7__wrap2 = (System_Collections_Generic_IEnumerator_JSONNode__o *)0x0;
      Il2CppCodeGenWriteBarrier(&(__this->fields).__7__wrap2,(void *)0x0);
    }
    if (Il2CppMethodInitialized_184344994 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IDisposable);
      Il2CppMethodInitialized_184344994 = '\x01';
    }
    (__this->fields).__1__state = -1;
    if ((__this->fields).__7__wrap1 != (System_Collections_Generic_IEnumerator_JSONNode__o *)0x0) {
      InterfaceInvoker0_Invoke
                (0,(Il2CppClass *)TypeInfo_System_IDisposable,(Il2CppObject *)(__this->fields).__7__wrap1);
    }
    (__this->fields).__7__wrap1 = (System_Collections_Generic_IEnumerator_JSONNode__o *)0x0;
    Il2CppCodeGenWriteBarrier(&(__this->fields).__7__wrap1,(void *)0x0);
  }
  else if (iVar1 == 1) goto label_181dd17bb;
  return false;
}


// SimpleJSONFixed.JSONNode.<get_DeepChildren>d__45$$<>m__Finally1
// il2cpp: void SimpleJSONFixed_JSONNode__get_DeepChildren_d__45____m__Finally1 (SimpleJSONFixed_JSONNode__get_DeepChildren_d__45_o* __this, const MethodInfo* method);
// 0x181dd1c70

void SimpleJSONFixed_JSONNode__get_DeepChildren_d__45____m__Finally1
               (SimpleJSONFixed_JSONNode__get_DeepChildren_d__45_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184344994 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IDisposable);
    Il2CppMethodInitialized_184344994 = '\x01';
  }
  (__this->fields).__1__state = -1;
  if ((__this->fields).__7__wrap1 != (System_Collections_Generic_IEnumerator_JSONNode__o *)0x0) {
    InterfaceInvoker0_Invoke
              (0,(Il2CppClass *)TypeInfo_System_IDisposable,(Il2CppObject *)(__this->fields).__7__wrap1);
    return;
  }
  return;
}


// SimpleJSONFixed.JSONNode.<get_DeepChildren>d__45$$<>m__Finally2
// il2cpp: void SimpleJSONFixed_JSONNode__get_DeepChildren_d__45____m__Finally2 (SimpleJSONFixed_JSONNode__get_DeepChildren_d__45_o* __this, const MethodInfo* method);
// 0x181dd1cc0

void SimpleJSONFixed_JSONNode__get_DeepChildren_d__45____m__Finally2
               (SimpleJSONFixed_JSONNode__get_DeepChildren_d__45_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184344995 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IDisposable);
    Il2CppMethodInitialized_184344995 = '\x01';
  }
  (__this->fields).__1__state = -3;
  if ((__this->fields).__7__wrap2 != (System_Collections_Generic_IEnumerator_JSONNode__o *)0x0) {
    InterfaceInvoker0_Invoke
              (0,(Il2CppClass *)TypeInfo_System_IDisposable,(Il2CppObject *)(__this->fields).__7__wrap2);
    return;
  }
  return;
}


// SimpleJSONFixed.JSONNode.<get_DeepChildren>d__45$$System.Collections.Generic.IEnumerator<SimpleJSONFixed.JSONNode>.get_Current
// il2cpp: SimpleJSONFixed_JSONNode_o* SimpleJSONFixed_JSONNode__get_DeepChildren_d__45__System_Collections_Generic_IEnumerator_SimpleJSONFixed_JSONNode__get_Current (SimpleJSONFixed_JSONNode__get_DeepChildren_d__45_o* __this, const MethodInfo* method);
// 0x180573e90

SimpleJSONFixed_JSONNode_o*
SimpleJSONFixed_JSONNode__get_DeepChildren_d__45__System_Collections_Generic_IEnumerator_SimpleJSONFixed_JSONNode__get_Current(SimpleJSONFixed_JSONNode__get_DeepChildren_d__45_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// SimpleJSONFixed.JSONNode.<get_DeepChildren>d__45$$System.Collections.IEnumerator.Reset
// il2cpp: void SimpleJSONFixed_JSONNode__get_DeepChildren_d__45__System_Collections_IEnumerator_Reset (SimpleJSONFixed_JSONNode__get_DeepChildren_d__45_o* __this, const MethodInfo* method);
// 0x181dd1ae0

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
// 0x180573e90

Il2CppObject*
SimpleJSONFixed_JSONNode__get_DeepChildren_d__45__System_Collections_IEnumerator_get_Current(SimpleJSONFixed_JSONNode__get_DeepChildren_d__45_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// SimpleJSONFixed.JSONNode.<get_DeepChildren>d__45$$System.Collections.Generic.IEnumerable<SimpleJSONFixed.JSONNode>.GetEnumerator
// il2cpp: System_Collections_Generic_IEnumerator_JSONNode__o* SimpleJSONFixed_JSONNode__get_DeepChildren_d__45__System_Collections_Generic_IEnumerable_SimpleJSONFixed_JSONNode__GetEnumerator (SimpleJSONFixed_JSONNode__get_DeepChildren_d__45_o* __this, const MethodInfo* method);
// 0x181dd1a40

System_Collections_Generic_IEnumerator_JSONNode__o*
SimpleJSONFixed_JSONNode__get_DeepChildren_d__45__System_Collections_Generic_IEnumerable_SimpleJSONFixed_JSONNode__GetEnumerator(SimpleJSONFixed_JSONNode__get_DeepChildren_d__45_o* __this, MethodInfo* method)

{
  int iVar1;
  SimpleJSONFixed_JSONNode_o *value;
  int32_t iVar2;
  SimpleJSONFixed_JSONNode__get_DeepChildren_d__45_o *__this_00;
  
  if (Il2CppMethodInitialized_184344996 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode_get_DeepChildren_d__45);
    Il2CppMethodInitialized_184344996 = '\x01';
  }
  if ((__this->fields).__1__state == -2) {
    iVar1 = (__this->fields).__l__initialThreadId;
    iVar2 = System_Diagnostics_TraceEventCache__GetThreadId((MethodInfo *)0x0);
    if (iVar1 == iVar2) {
      (__this->fields).__1__state = 0;
      return (System_Collections_IEnumerator_o *)__this;
    }
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode_get_DeepChildren_d__45);
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


// SimpleJSONFixed.JSONNode.<get_DeepChildren>d__45$$System.Collections.IEnumerable.GetEnumerator
// il2cpp: System_Collections_IEnumerator_o* SimpleJSONFixed_JSONNode__get_DeepChildren_d__45__System_Collections_IEnumerable_GetEnumerator (SimpleJSONFixed_JSONNode__get_DeepChildren_d__45_o* __this, const MethodInfo* method);
// 0x181dd1a40

System_Collections_IEnumerator_o *
SimpleJSONFixed_JSONNode__get_DeepChildren_d__45__System_Collections_IEnumerable_GetEnumerator
          (SimpleJSONFixed_JSONNode__get_DeepChildren_d__45_o *__this,MethodInfo *method)

{
  int iVar1;
  SimpleJSONFixed_JSONNode_o *value;
  int32_t iVar2;
  SimpleJSONFixed_JSONNode__get_DeepChildren_d__45_o *__this_00;
  
  if (Il2CppMethodInitialized_184344996 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode_get_DeepChildren_d__45);
    Il2CppMethodInitialized_184344996 = '\x01';
  }
  if ((__this->fields).__1__state == -2) {
    iVar1 = (__this->fields).__l__initialThreadId;
    iVar2 = System_Diagnostics_TraceEventCache__GetThreadId((MethodInfo *)0x0);
    if (iVar1 == iVar2) {
      (__this->fields).__1__state = 0;
      return (System_Collections_IEnumerator_o *)__this;
    }
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode_get_DeepChildren_d__45);
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


// SimpleJSONFixed.JSONNode$$get_Item
// il2cpp: SimpleJSONFixed_JSONNode_o* SimpleJSONFixed_JSONNode__get_Item (SimpleJSONFixed_JSONNode_o* __this, int32_t aIndex, const MethodInfo* method);
// 0x18059b2e0

SimpleJSONFixed_JSONNode_o*
SimpleJSONFixed_JSONNode__get_Item(SimpleJSONFixed_JSONNode_o* __this, int32_t aIndex, MethodInfo* method)

{
  return (Unity_Collections_AllocatorManager_TryFunction_o *)0x0;
}


// SimpleJSONFixed.JSONNode$$set_Item
// il2cpp: void SimpleJSONFixed_JSONNode__set_Item (SimpleJSONFixed_JSONNode_o* __this, int32_t aIndex, SimpleJSONFixed_JSONNode_o* value, const MethodInfo* method);
// 0x180547020

void
SimpleJSONFixed_JSONNode__set_Item(SimpleJSONFixed_JSONNode_o* __this, int32_t aIndex, SimpleJSONFixed_JSONNode_o* value, MethodInfo* method)

{
  return;
}


// SimpleJSONFixed.JSONNode$$get_Item
// il2cpp: SimpleJSONFixed_JSONNode_o* SimpleJSONFixed_JSONNode__get_Item (SimpleJSONFixed_JSONNode_o* __this, System_String_o* aKey, const MethodInfo* method);
// 0x18059b2e0

SimpleJSONFixed_JSONNode_o*
SimpleJSONFixed_JSONNode__get_Item(SimpleJSONFixed_JSONNode_o* __this, System_String_o* aKey, MethodInfo* method)

{
  return (Unity_Collections_AllocatorManager_TryFunction_o *)0x0;
}


// SimpleJSONFixed.JSONNode$$set_Item
// il2cpp: void SimpleJSONFixed_JSONNode__set_Item (SimpleJSONFixed_JSONNode_o* __this, System_String_o* aKey, SimpleJSONFixed_JSONNode_o* value, const MethodInfo* method);
// 0x180547020

void
SimpleJSONFixed_JSONNode__set_Item(SimpleJSONFixed_JSONNode_o* __this, System_String_o* aKey, SimpleJSONFixed_JSONNode_o* value, MethodInfo* method)

{
  return;
}


// SimpleJSONFixed.JSONNode$$get_Value
// il2cpp: System_String_o* SimpleJSONFixed_JSONNode__get_Value (SimpleJSONFixed_JSONNode_o* __this, const MethodInfo* method);
// 0x181dc3de0

System_String_o * SimpleJSONFixed_JSONNode__get_Value(SimpleJSONFixed_JSONNode_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184344961 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_184344961 = '\x01';
  }
  return "";
}


// SimpleJSONFixed.JSONNode$$set_Value
// il2cpp: void SimpleJSONFixed_JSONNode__set_Value (SimpleJSONFixed_JSONNode_o* __this, System_String_o* value, const MethodInfo* method);
// 0x180547020

void
SimpleJSONFixed_JSONNode__set_Value(SimpleJSONFixed_JSONNode_o* __this, System_String_o* value, MethodInfo* method)

{
  return;
}


// SimpleJSONFixed.JSONNode$$get_Count
// il2cpp: int32_t SimpleJSONFixed_JSONNode__get_Count (SimpleJSONFixed_JSONNode_o* __this, const MethodInfo* method);
// 0x18059b2e0

int32_t
SimpleJSONFixed_JSONNode__get_Count(SimpleJSONFixed_JSONNode_o* __this, MethodInfo* method)

{
  return (Unity_Collections_AllocatorManager_TryFunction_o *)0x0;
}


// SimpleJSONFixed.JSONNode$$get_IsNumber
// il2cpp: bool SimpleJSONFixed_JSONNode__get_IsNumber (SimpleJSONFixed_JSONNode_o* __this, const MethodInfo* method);
// 0x180668280

bool
SimpleJSONFixed_JSONNode__get_IsNumber(SimpleJSONFixed_JSONNode_o* __this, MethodInfo* method)

{
  return false;
}


// SimpleJSONFixed.JSONNode$$get_IsString
// il2cpp: bool SimpleJSONFixed_JSONNode__get_IsString (SimpleJSONFixed_JSONNode_o* __this, const MethodInfo* method);
// 0x180668280

bool
SimpleJSONFixed_JSONNode__get_IsString(SimpleJSONFixed_JSONNode_o* __this, MethodInfo* method)

{
  return false;
}


// SimpleJSONFixed.JSONNode$$get_IsBoolean
// il2cpp: bool SimpleJSONFixed_JSONNode__get_IsBoolean (SimpleJSONFixed_JSONNode_o* __this, const MethodInfo* method);
// 0x180668280

bool
SimpleJSONFixed_JSONNode__get_IsBoolean(SimpleJSONFixed_JSONNode_o* __this, MethodInfo* method)

{
  return false;
}


// SimpleJSONFixed.JSONNode$$get_IsNull
// il2cpp: bool SimpleJSONFixed_JSONNode__get_IsNull (SimpleJSONFixed_JSONNode_o* __this, const MethodInfo* method);
// 0x180668280

bool
SimpleJSONFixed_JSONNode__get_IsNull(SimpleJSONFixed_JSONNode_o* __this, MethodInfo* method)

{
  return false;
}


// SimpleJSONFixed.JSONNode$$get_IsArray
// il2cpp: bool SimpleJSONFixed_JSONNode__get_IsArray (SimpleJSONFixed_JSONNode_o* __this, const MethodInfo* method);
// 0x180668280

bool
SimpleJSONFixed_JSONNode__get_IsArray(SimpleJSONFixed_JSONNode_o* __this, MethodInfo* method)

{
  return false;
}


// SimpleJSONFixed.JSONNode$$get_IsObject
// il2cpp: bool SimpleJSONFixed_JSONNode__get_IsObject (SimpleJSONFixed_JSONNode_o* __this, const MethodInfo* method);
// 0x180668280

bool
SimpleJSONFixed_JSONNode__get_IsObject(SimpleJSONFixed_JSONNode_o* __this, MethodInfo* method)

{
  return false;
}


// SimpleJSONFixed.JSONNode$$get_Inline
// il2cpp: bool SimpleJSONFixed_JSONNode__get_Inline (SimpleJSONFixed_JSONNode_o* __this, const MethodInfo* method);
// 0x180668280

bool
SimpleJSONFixed_JSONNode__get_Inline(SimpleJSONFixed_JSONNode_o* __this, MethodInfo* method)

{
  return false;
}


// SimpleJSONFixed.JSONNode$$set_Inline
// il2cpp: void SimpleJSONFixed_JSONNode__set_Inline (SimpleJSONFixed_JSONNode_o* __this, bool value, const MethodInfo* method);
// 0x180547020

void
SimpleJSONFixed_JSONNode__set_Inline(SimpleJSONFixed_JSONNode_o* __this, bool value, MethodInfo* method)

{
  return;
}


// SimpleJSONFixed.JSONNode$$Add
// il2cpp: void SimpleJSONFixed_JSONNode__Add (SimpleJSONFixed_JSONNode_o* __this, System_String_o* aKey, SimpleJSONFixed_JSONNode_o* aItem, const MethodInfo* method);
// 0x180547020

void
SimpleJSONFixed_JSONNode__Add(SimpleJSONFixed_JSONNode_o* __this, System_String_o* aKey, SimpleJSONFixed_JSONNode_o* aItem, MethodInfo* method)

{
  return;
}


// SimpleJSONFixed.JSONNode$$Add
// il2cpp: void SimpleJSONFixed_JSONNode__Add (SimpleJSONFixed_JSONNode_o* __this, SimpleJSONFixed_JSONNode_o* aItem, const MethodInfo* method);
// 0x181dc2770

void SimpleJSONFixed_JSONNode__Add_1dc2770
               (SimpleJSONFixed_JSONNode_o *__this,SimpleJSONFixed_JSONNode_o *aItem,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184344962 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_184344962 = '\x01';
  }
  (*(__this->klass->vtable)._20_Add.methodPtr)
            (__this,(System_Type_o *)"",(MethodInfo *)aItem);
  return;
}


// SimpleJSONFixed.JSONNode$$Remove
// il2cpp: SimpleJSONFixed_JSONNode_o* SimpleJSONFixed_JSONNode__Remove (SimpleJSONFixed_JSONNode_o* __this, System_String_o* aKey, const MethodInfo* method);
// 0x18059b2e0

SimpleJSONFixed_JSONNode_o*
SimpleJSONFixed_JSONNode__Remove(SimpleJSONFixed_JSONNode_o* __this, System_String_o* aKey, MethodInfo* method)

{
  return (Unity_Collections_AllocatorManager_TryFunction_o *)0x0;
}


// SimpleJSONFixed.JSONNode$$Remove
// il2cpp: SimpleJSONFixed_JSONNode_o* SimpleJSONFixed_JSONNode__Remove (SimpleJSONFixed_JSONNode_o* __this, int32_t aIndex, const MethodInfo* method);
// 0x18059b2e0

SimpleJSONFixed_JSONNode_o*
SimpleJSONFixed_JSONNode__Remove(SimpleJSONFixed_JSONNode_o* __this, int32_t aIndex, MethodInfo* method)

{
  return (Unity_Collections_AllocatorManager_TryFunction_o *)0x0;
}


// SimpleJSONFixed.JSONNode$$Remove
// il2cpp: SimpleJSONFixed_JSONNode_o* SimpleJSONFixed_JSONNode__Remove (SimpleJSONFixed_JSONNode_o* __this, SimpleJSONFixed_JSONNode_o* aNode, const MethodInfo* method);
// 0x1808e13a0

SimpleJSONFixed_JSONNode_o*
SimpleJSONFixed_JSONNode__Remove(SimpleJSONFixed_JSONNode_o* __this, SimpleJSONFixed_JSONNode_o* aNode, MethodInfo* method)

{
  return (System_Linq_Expressions_Expression_o *)node;
}


// SimpleJSONFixed.JSONNode$$Clear
// il2cpp: void SimpleJSONFixed_JSONNode__Clear (SimpleJSONFixed_JSONNode_o* __this, const MethodInfo* method);
// 0x180547020

void
SimpleJSONFixed_JSONNode__Clear(SimpleJSONFixed_JSONNode_o* __this, MethodInfo* method)

{
  return;
}


// SimpleJSONFixed.JSONNode$$Clone
// il2cpp: SimpleJSONFixed_JSONNode_o* SimpleJSONFixed_JSONNode__Clone (SimpleJSONFixed_JSONNode_o* __this, const MethodInfo* method);
// 0x18059b2e0

SimpleJSONFixed_JSONNode_o*
SimpleJSONFixed_JSONNode__Clone(SimpleJSONFixed_JSONNode_o* __this, MethodInfo* method)

{
  return (Unity_Collections_AllocatorManager_TryFunction_o *)0x0;
}


// SimpleJSONFixed.JSONNode$$get_Children
// il2cpp: System_Collections_Generic_IEnumerable_JSONNode__o* SimpleJSONFixed_JSONNode__get_Children (SimpleJSONFixed_JSONNode_o* __this, const MethodInfo* method);
// 0x181dc3b60

System_Collections_Generic_IEnumerable_JSONNode__o *
SimpleJSONFixed_JSONNode__get_Children(SimpleJSONFixed_JSONNode_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  SimpleJSONFixed_JSONNode__get_Children_d__43_o *__this_00;
  
  if (Il2CppMethodInitialized_184344963 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode_get_Children_d__43);
    Il2CppMethodInitialized_184344963 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode_get_Children_d__43);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).__1__state = -2;
  iVar1 = System_Diagnostics_TraceEventCache__GetThreadId((MethodInfo *)0x0);
  (__this_00->fields).__l__initialThreadId = iVar1;
  return (System_Collections_Generic_IEnumerable_JSONNode__o *)__this_00;
}


// SimpleJSONFixed.JSONNode$$get_DeepChildren
// il2cpp: System_Collections_Generic_IEnumerable_JSONNode__o* SimpleJSONFixed_JSONNode__get_DeepChildren (SimpleJSONFixed_JSONNode_o* __this, const MethodInfo* method);
// 0x181dc3bc0

System_Collections_Generic_IEnumerable_JSONNode__o *
SimpleJSONFixed_JSONNode__get_DeepChildren(SimpleJSONFixed_JSONNode_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  SimpleJSONFixed_JSONNode__get_DeepChildren_d__45_o *__this_00;
  
  if (Il2CppMethodInitialized_184344964 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode_get_DeepChildren_d__45);
    Il2CppMethodInitialized_184344964 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode_get_DeepChildren_d__45);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).__1__state = -2;
  iVar1 = System_Diagnostics_TraceEventCache__GetThreadId((MethodInfo *)0x0);
  (__this_00->fields).__l__initialThreadId = iVar1;
  (__this_00->fields).__4__this = __this;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this,__this);
  return (System_Collections_Generic_IEnumerable_JSONNode__o *)__this_00;
}


// SimpleJSONFixed.JSONNode$$HasKey
// il2cpp: bool SimpleJSONFixed_JSONNode__HasKey (SimpleJSONFixed_JSONNode_o* __this, System_String_o* aKey, const MethodInfo* method);
// 0x180668280

bool
SimpleJSONFixed_JSONNode__HasKey(SimpleJSONFixed_JSONNode_o* __this, System_String_o* aKey, MethodInfo* method)

{
  return false;
}


// SimpleJSONFixed.JSONNode$$GetValueOrDefault
// il2cpp: SimpleJSONFixed_JSONNode_o* SimpleJSONFixed_JSONNode__GetValueOrDefault (SimpleJSONFixed_JSONNode_o* __this, System_String_o* aKey, SimpleJSONFixed_JSONNode_o* aDefault, const MethodInfo* method);
// 0x180546d10

SimpleJSONFixed_JSONNode_o*
SimpleJSONFixed_JSONNode__GetValueOrDefault(SimpleJSONFixed_JSONNode_o* __this, System_String_o* aKey, SimpleJSONFixed_JSONNode_o* aDefault, MethodInfo* method)

{
  return value;
}


// SimpleJSONFixed.JSONNode$$ToString
// il2cpp: System_String_o* SimpleJSONFixed_JSONNode__ToString (SimpleJSONFixed_JSONNode_o* __this, const MethodInfo* method);
// 0x181dc36b0

System_String_o * SimpleJSONFixed_JSONNode__ToString(SimpleJSONFixed_JSONNode_o *__this,MethodInfo *method)

{
  System_Text_StringBuilder_o *__this_00;
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_184344965 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Text_StringBuilder);
    Il2CppMethodInitialized_184344965 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Text_StringBuilder);
  System_Text_StringBuilder___ctor(__this_00,(MethodInfo *)0x0);
  (*(__this->klass->vtable)._31_unknown.methodPtr)
            (__this,__this_00,0,0,0,(__this->klass->vtable)._31_unknown.method);
  if (__this_00 != (System_Text_StringBuilder_o *)0x0) {
    pSVar1 = (*(__this_00->klass->vtable)._3_ToString.methodPtr)
                       (__this_00,(__this_00->klass->vtable)._3_ToString.method);
    return pSVar1;
  }
  ThrowNullReferenceException();
}


// SimpleJSONFixed.JSONNode$$ToString
// il2cpp: System_String_o* SimpleJSONFixed_JSONNode__ToString (SimpleJSONFixed_JSONNode_o* __this, int32_t aIndent, const MethodInfo* method);
// 0x181dc3750

System_String_o *
SimpleJSONFixed_JSONNode__ToString_1dc3750
          (SimpleJSONFixed_JSONNode_o *__this,int32_t aIndent,MethodInfo *method)

{
  System_Text_StringBuilder_o *__this_00;
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_184344966 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Text_StringBuilder);
    Il2CppMethodInitialized_184344966 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Text_StringBuilder);
  System_Text_StringBuilder___ctor(__this_00,(MethodInfo *)0x0);
  (*(__this->klass->vtable)._31_unknown.methodPtr)
            (__this,__this_00,0,(ulonglong)(uint)aIndent,1,(__this->klass->vtable)._31_unknown.method);
  if (__this_00 != (System_Text_StringBuilder_o *)0x0) {
    pSVar1 = (*(__this_00->klass->vtable)._3_ToString.methodPtr)
                       (__this_00,(__this_00->klass->vtable)._3_ToString.method);
    return pSVar1;
  }
  ThrowNullReferenceException();
}


// SimpleJSONFixed.JSONNode$$get_Linq
// il2cpp: System_Collections_Generic_IEnumerable_KeyValuePair_string__JSONNode___o* SimpleJSONFixed_JSONNode__get_Linq (SimpleJSONFixed_JSONNode_o* __this, const MethodInfo* method);
// 0x181dc3d80

System_Collections_Generic_IEnumerable_KeyValuePair_string__JSONNode___o *
SimpleJSONFixed_JSONNode__get_Linq(SimpleJSONFixed_JSONNode_o *__this,MethodInfo *method)

{
  SimpleJSONFixed_JSONNode_LinqEnumerator_o *__this_00;
  
  if (Il2CppMethodInitialized_184344967 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode_LinqEnumerator);
    Il2CppMethodInitialized_184344967 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode_LinqEnumerator);
  SimpleJSONFixed_JSONNode_LinqEnumerator___ctor(__this_00,__this,(MethodInfo *)0x0);
  return (System_Collections_Generic_IEnumerable_KeyValuePair_string__JSONNode___o *)__this_00;
}


// SimpleJSONFixed.JSONNode$$get_Keys
// il2cpp: SimpleJSONFixed_JSONNode_KeyEnumerator_o SimpleJSONFixed_JSONNode__get_Keys (SimpleJSONFixed_JSONNode_o* __this, const MethodInfo* method);
// 0x181dc3d20

SimpleJSONFixed_JSONNode_KeyEnumerator_o
SimpleJSONFixed_JSONNode__get_Keys(SimpleJSONFixed_JSONNode_o* __this, MethodInfo* method)

{
  SimpleJSONFixed_JSONNode_o *pSVar1;
  System_Collections_Generic_Dictionary_TKey__TValue__o *pSVar2;
  undefined8 uVar3;
  Il2CppObject *pIVar4;
  Il2CppObject *pIVar5;
  undefined8 uVar6;
  System_Collections_Generic_List_T__o *pSVar7;
  undefined8 uVar8;
  SimpleJSONFixed_JSONNode_Enumerator_o *pSVar9;
  undefined8 *puVar10;
  undefined1 local_58 [80];
  
  puVar10 = (undefined8 *)
            (*(__this->klass->vtable)._32_unknown.methodPtr)
                      (local_58,__this,(__this->klass->vtable)._32_unknown.method);
  pSVar2 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)puVar10[1];
  uVar3 = puVar10[2];
  pIVar4 = (Il2CppObject *)puVar10[3];
  pIVar5 = (Il2CppObject *)puVar10[4];
  uVar6 = puVar10[5];
  pSVar7 = (System_Collections_Generic_List_T__o *)puVar10[6];
  uVar8 = puVar10[7];
  pSVar1 = (SimpleJSONFixed_JSONNode_o *)puVar10[8];
  *(undefined8 *)&(__return_storage_ptr__->fields).m_Enumerator.fields = *puVar10;
  (__return_storage_ptr__->fields).m_Enumerator.fields.m_Object.fields._dictionary = pSVar2;
  pSVar9 = &(__return_storage_ptr__->fields).m_Enumerator;
  (pSVar9->fields).m_Object.fields._version = (int)uVar3;
  (pSVar9->fields).m_Object.fields._index = (int)((ulonglong)uVar3 >> 0x20);
  (__return_storage_ptr__->fields).m_Enumerator.fields.m_Object.fields._current.fields.key = pIVar4;
  (__return_storage_ptr__->fields).m_Enumerator.fields.m_Object.fields._current.fields.value = pIVar5;
  *(undefined8 *)&(__return_storage_ptr__->fields).m_Enumerator.fields.m_Object.fields._getEnumeratorRetType =
       uVar6;
  (__return_storage_ptr__->fields).m_Enumerator.fields.m_Array.fields._list = pSVar7;
  pSVar9 = &(__return_storage_ptr__->fields).m_Enumerator;
  (pSVar9->fields).m_Array.fields._index = (int)uVar8;
  (pSVar9->fields).m_Array.fields._version = (int)((ulonglong)uVar8 >> 0x20);
  (__return_storage_ptr__->fields).m_Enumerator.fields.m_Array.fields._current = pSVar1;
  Il2CppCodeGenWriteBarrier
            ((void **)&(__return_storage_ptr__->fields).m_Enumerator.fields.m_Object,(void *)0x0);
  return __return_storage_ptr__;
}


// SimpleJSONFixed.JSONNode$$get_Values
// il2cpp: SimpleJSONFixed_JSONNode_ValueEnumerator_o SimpleJSONFixed_JSONNode__get_Values (SimpleJSONFixed_JSONNode_o* __this, const MethodInfo* method);
// 0x181dc3d20

SimpleJSONFixed_JSONNode_ValueEnumerator_o *
SimpleJSONFixed_JSONNode__get_Values
          (SimpleJSONFixed_JSONNode_ValueEnumerator_o *__return_storage_ptr__,
          SimpleJSONFixed_JSONNode_o *__this,MethodInfo *method)

{
  SimpleJSONFixed_JSONNode_o *pSVar1;
  System_Collections_Generic_Dictionary_TKey__TValue__o *pSVar2;
  undefined8 uVar3;
  Il2CppObject *pIVar4;
  Il2CppObject *pIVar5;
  undefined8 uVar6;
  System_Collections_Generic_List_T__o *pSVar7;
  undefined8 uVar8;
  SimpleJSONFixed_JSONNode_Enumerator_o *pSVar9;
  undefined8 *puVar10;
  undefined1 local_58 [80];
  
  puVar10 = (undefined8 *)
            (*(__this->klass->vtable)._32_unknown.methodPtr)
                      (local_58,__this,(__this->klass->vtable)._32_unknown.method);
  pSVar2 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)puVar10[1];
  uVar3 = puVar10[2];
  pIVar4 = (Il2CppObject *)puVar10[3];
  pIVar5 = (Il2CppObject *)puVar10[4];
  uVar6 = puVar10[5];
  pSVar7 = (System_Collections_Generic_List_T__o *)puVar10[6];
  uVar8 = puVar10[7];
  pSVar1 = (SimpleJSONFixed_JSONNode_o *)puVar10[8];
  *(undefined8 *)&(__return_storage_ptr__->fields).m_Enumerator.fields = *puVar10;
  (__return_storage_ptr__->fields).m_Enumerator.fields.m_Object.fields._dictionary = pSVar2;
  pSVar9 = &(__return_storage_ptr__->fields).m_Enumerator;
  (pSVar9->fields).m_Object.fields._version = (int)uVar3;
  (pSVar9->fields).m_Object.fields._index = (int)((ulonglong)uVar3 >> 0x20);
  (__return_storage_ptr__->fields).m_Enumerator.fields.m_Object.fields._current.fields.key = pIVar4;
  (__return_storage_ptr__->fields).m_Enumerator.fields.m_Object.fields._current.fields.value = pIVar5;
  *(undefined8 *)&(__return_storage_ptr__->fields).m_Enumerator.fields.m_Object.fields._getEnumeratorRetType =
       uVar6;
  (__return_storage_ptr__->fields).m_Enumerator.fields.m_Array.fields._list = pSVar7;
  pSVar9 = &(__return_storage_ptr__->fields).m_Enumerator;
  (pSVar9->fields).m_Array.fields._index = (int)uVar8;
  (pSVar9->fields).m_Array.fields._version = (int)((ulonglong)uVar8 >> 0x20);
  (__return_storage_ptr__->fields).m_Enumerator.fields.m_Array.fields._current = pSVar1;
  Il2CppCodeGenWriteBarrier
            ((void **)&(__return_storage_ptr__->fields).m_Enumerator.fields.m_Object,(void *)0x0);
  return __return_storage_ptr__;
}


// SimpleJSONFixed.JSONNode$$get_AsDouble
// il2cpp: double SimpleJSONFixed_JSONNode__get_AsDouble (SimpleJSONFixed_JSONNode_o* __this, const MethodInfo* method);
// 0x181dc3960

double SimpleJSONFixed_JSONNode__get_AsDouble(SimpleJSONFixed_JSONNode_o *__this,MethodInfo *method)

{
  bool bVar1;
  System_String_o *s;
  System_Globalization_CultureInfo_o *provider;
  double local_res8 [4];
  
  if (Il2CppMethodInitialized_184344968 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Globalization_CultureInfo);
    Il2CppMethodInitialized_184344968 = '\x01';
  }
  local_res8[0] = 0.0;
  s = (*(__this->klass->vtable)._9_get_Value.methodPtr)(__this,(__this->klass->vtable)._9_get_Value.method);
  if ((TypeInfo_System_Globalization_CultureInfo->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Globalization_CultureInfo);
  }
  provider = System_Globalization_CultureInfo__get_InvariantCulture((MethodInfo *)0x0);
  bVar1 = System_Double__TryParse_1b22970
                    (s,0xa7,(System_IFormatProvider_o *)provider,local_res8,(MethodInfo *)0x0);
  if (!bVar1) {
    return 0.0;
  }
  return local_res8[0];
}


// SimpleJSONFixed.JSONNode$$set_AsDouble
// il2cpp: void SimpleJSONFixed_JSONNode__set_AsDouble (SimpleJSONFixed_JSONNode_o* __this, double value, const MethodInfo* method);
// 0x181dc4ea0

void SimpleJSONFixed_JSONNode__set_AsDouble
               (SimpleJSONFixed_JSONNode_o *__this,double value,MethodInfo *method)

{
  System_Globalization_CultureInfo_o *provider;
  System_Type_o *pSVar1;
  double local_res10 [3];
  
  local_res10[0] = value;
  if (Il2CppMethodInitialized_184344969 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Globalization_CultureInfo);
    Il2CppMethodInitialized_184344969 = '\x01';
  }
  if ((TypeInfo_System_Globalization_CultureInfo->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Globalization_CultureInfo);
  }
  provider = System_Globalization_CultureInfo__get_InvariantCulture((MethodInfo *)0x0);
  pSVar1 = (System_Type_o *)
           System_Double__ToString_1b226c0(local_res10,(System_IFormatProvider_o *)provider,(MethodInfo *)0x0)
  ;
  (*(__this->klass->vtable)._10_set_Value.methodPtr)
            (__this,pSVar1,(__this->klass->vtable)._10_set_Value.method);
  return;
}


// SimpleJSONFixed.JSONNode$$get_AsInt
// il2cpp: int32_t SimpleJSONFixed_JSONNode__get_AsInt (SimpleJSONFixed_JSONNode_o* __this, const MethodInfo* method);
// 0x181dc3a30

int32_t SimpleJSONFixed_JSONNode__get_AsInt(SimpleJSONFixed_JSONNode_o *__this,MethodInfo *method)

{
  double dVar1;
  
  dVar1 = (*(__this->klass->vtable)._33_get_AsDouble.methodPtr)
                    (__this,(__this->klass->vtable)._33_get_AsDouble.method);
  return (int)dVar1;
}


// SimpleJSONFixed.JSONNode$$set_AsInt
// il2cpp: void SimpleJSONFixed_JSONNode__set_AsInt (SimpleJSONFixed_JSONNode_o* __this, int32_t value, const MethodInfo* method);
// 0x181dc4f40

void SimpleJSONFixed_JSONNode__set_AsInt(SimpleJSONFixed_JSONNode_o *__this,int32_t value,MethodInfo *method)

{
  (*(__this->klass->vtable)._34_set_AsDouble.methodPtr)
            (__this,(double)value,(__this->klass->vtable)._34_set_AsDouble.method);
  return;
}


// SimpleJSONFixed.JSONNode$$get_AsFloat
// il2cpp: float SimpleJSONFixed_JSONNode__get_AsFloat (SimpleJSONFixed_JSONNode_o* __this, const MethodInfo* method);
// 0x181dc3a10

float SimpleJSONFixed_JSONNode__get_AsFloat(SimpleJSONFixed_JSONNode_o *__this,MethodInfo *method)

{
  double dVar1;
  
  dVar1 = (*(__this->klass->vtable)._33_get_AsDouble.methodPtr)
                    (__this,(__this->klass->vtable)._33_get_AsDouble.method);
  return (float)dVar1;
}


// SimpleJSONFixed.JSONNode$$set_AsFloat
// il2cpp: void SimpleJSONFixed_JSONNode__set_AsFloat (SimpleJSONFixed_JSONNode_o* __this, float value, const MethodInfo* method);
// 0x181dc4f20

void SimpleJSONFixed_JSONNode__set_AsFloat(SimpleJSONFixed_JSONNode_o *__this,float value,MethodInfo *method)

{
  (*(__this->klass->vtable)._34_set_AsDouble.methodPtr)
            (__this,(double)value,(__this->klass->vtable)._34_set_AsDouble.method);
  return;
}


// SimpleJSONFixed.JSONNode$$get_AsBool
// il2cpp: bool SimpleJSONFixed_JSONNode__get_AsBool (SimpleJSONFixed_JSONNode_o* __this, const MethodInfo* method);
// 0x181dc38d0

bool SimpleJSONFixed_JSONNode__get_AsBool(SimpleJSONFixed_JSONNode_o *__this,MethodInfo *method)

{
  bool bVar1;
  System_String_o *pSVar2;
  bool local_res8 [8];
  
  local_res8[0] = false;
  pSVar2 = (*(__this->klass->vtable)._9_get_Value.methodPtr)
                     (__this,(__this->klass->vtable)._9_get_Value.method);
  if ((g_data_184354de8->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_184354de8);
  }
  bVar1 = System_Boolean__TryParse(pSVar2,local_res8,(MethodInfo *)0x0);
  if (!bVar1) {
    pSVar2 = (*(__this->klass->vtable)._9_get_Value.methodPtr)
                       (__this,(__this->klass->vtable)._9_get_Value.method);
    bVar1 = System_String__IsNullOrEmpty(pSVar2,(MethodInfo *)0x0);
    return !bVar1;
  }
  return local_res8[0];
}


// SimpleJSONFixed.JSONNode$$set_AsBool
// il2cpp: void SimpleJSONFixed_JSONNode__set_AsBool (SimpleJSONFixed_JSONNode_o* __this, bool value, const MethodInfo* method);
// 0x181dc4e20

void SimpleJSONFixed_JSONNode__set_AsBool(SimpleJSONFixed_JSONNode_o *__this,bool value,MethodInfo *method)

{
  System_Type_o *pSVar1;
  
  if (Il2CppMethodInitialized_18434496a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"false");
    il2cpp_codegen_initialize_runtime_metadata(&"true");
    Il2CppMethodInitialized_18434496a = '\x01';
  }
  pSVar1 = (System_Type_o *)"false";
  if (value) {
    pSVar1 = (System_Type_o *)"true";
  }
  if (__this != (SimpleJSONFixed_JSONNode_o *)0x0) {
    (*(__this->klass->vtable)._10_set_Value.methodPtr)
              (__this,pSVar1,(__this->klass->vtable)._10_set_Value.method);
    return;
  }
  ThrowNullReferenceException();
}


// SimpleJSONFixed.JSONNode$$get_AsLong
// il2cpp: int64_t SimpleJSONFixed_JSONNode__get_AsLong (SimpleJSONFixed_JSONNode_o* __this, const MethodInfo* method);
// 0x181dc3a50

int64_t SimpleJSONFixed_JSONNode__get_AsLong(SimpleJSONFixed_JSONNode_o *__this,MethodInfo *method)

{
  bool bVar1;
  System_String_o *s;
  int64_t local_res8 [4];
  
  local_res8[0] = 0;
  s = (*(__this->klass->vtable)._9_get_Value.methodPtr)(__this,(__this->klass->vtable)._9_get_Value.method);
  bVar1 = System_Int64__TryParse(s,local_res8,(MethodInfo *)0x0);
  if (!bVar1) {
    local_res8[0] = 0;
  }
  return local_res8[0];
}


// SimpleJSONFixed.JSONNode$$set_AsLong
// il2cpp: void SimpleJSONFixed_JSONNode__set_AsLong (SimpleJSONFixed_JSONNode_o* __this, int64_t value, const MethodInfo* method);
// 0x181dc4f60

void SimpleJSONFixed_JSONNode__set_AsLong(SimpleJSONFixed_JSONNode_o *__this,int64_t value,MethodInfo *method)

{
  System_Type_o *pSVar1;
  int64_t local_res10 [3];
  
  local_res10[0] = value;
  pSVar1 = (System_Type_o *)System_Int64__ToString(local_res10,(MethodInfo *)0x0);
  (*(__this->klass->vtable)._10_set_Value.methodPtr)
            (__this,pSVar1,(__this->klass->vtable)._10_set_Value.method);
  return;
}


// SimpleJSONFixed.JSONNode$$get_AsULong
// il2cpp: uint64_t SimpleJSONFixed_JSONNode__get_AsULong (SimpleJSONFixed_JSONNode_o* __this, const MethodInfo* method);
// 0x181dc3b10

uint64_t SimpleJSONFixed_JSONNode__get_AsULong(SimpleJSONFixed_JSONNode_o *__this,MethodInfo *method)

{
  bool bVar1;
  System_String_o *s;
  uint64_t local_res8 [4];
  
  local_res8[0] = 0;
  s = (*(__this->klass->vtable)._9_get_Value.methodPtr)(__this,(__this->klass->vtable)._9_get_Value.method);
  bVar1 = System_UInt64__TryParse(s,local_res8,(MethodInfo *)0x0);
  if (!bVar1) {
    local_res8[0] = 0;
  }
  return local_res8[0];
}


// SimpleJSONFixed.JSONNode$$set_AsULong
// il2cpp: void SimpleJSONFixed_JSONNode__set_AsULong (SimpleJSONFixed_JSONNode_o* __this, uint64_t value, const MethodInfo* method);
// 0x181dc4fa0

void SimpleJSONFixed_JSONNode__set_AsULong
               (SimpleJSONFixed_JSONNode_o *__this,uint64_t value,MethodInfo *method)

{
  System_Type_o *pSVar1;
  uint64_t local_res10 [3];
  
  local_res10[0] = value;
  pSVar1 = (System_Type_o *)System_UInt64__ToString(local_res10,(MethodInfo *)0x0);
  (*(__this->klass->vtable)._10_set_Value.methodPtr)
            (__this,pSVar1,(__this->klass->vtable)._10_set_Value.method);
  return;
}


// SimpleJSONFixed.JSONNode$$get_AsArray
// il2cpp: SimpleJSONFixed_JSONArray_o* SimpleJSONFixed_JSONNode__get_AsArray (SimpleJSONFixed_JSONNode_o* __this, const MethodInfo* method);
// 0x181dc3860

SimpleJSONFixed_JSONArray_o *
SimpleJSONFixed_JSONNode__get_AsArray(SimpleJSONFixed_JSONNode_o *__this,MethodInfo *method)

{
  byte bVar1;
  bool bVar2;
  SimpleJSONFixed_JSONArray_o *pSVar3;
  
  if (Il2CppMethodInitialized_18434496b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONArray);
    Il2CppMethodInitialized_18434496b = '\x01';
  }
  pSVar3 = (SimpleJSONFixed_JSONArray_o *)0x0;
  if (__this != (SimpleJSONFixed_JSONNode_o *)0x0) {
    bVar1 = (TypeInfo_SimpleJSONFixed_JSONArray->_2).typeHierarchyDepth;
    if (((__this->klass->_2).typeHierarchyDepth < bVar1) ||
       (bVar2 = true,
       (__this->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
       (Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONArray)) {
      bVar2 = false;
    }
    if (bVar2) {
      pSVar3 = (SimpleJSONFixed_JSONArray_o *)__this;
    }
  }
  return pSVar3;
}


// SimpleJSONFixed.JSONNode$$get_AsObject
// il2cpp: SimpleJSONFixed_JSONObject_o* SimpleJSONFixed_JSONNode__get_AsObject (SimpleJSONFixed_JSONNode_o* __this, const MethodInfo* method);
// 0x181dc3aa0

SimpleJSONFixed_JSONObject_o *
SimpleJSONFixed_JSONNode__get_AsObject(SimpleJSONFixed_JSONNode_o *__this,MethodInfo *method)

{
  byte bVar1;
  bool bVar2;
  SimpleJSONFixed_JSONObject_o *pSVar3;
  
  if (Il2CppMethodInitialized_18434496c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONObject);
    Il2CppMethodInitialized_18434496c = '\x01';
  }
  pSVar3 = (SimpleJSONFixed_JSONObject_o *)0x0;
  if (__this != (SimpleJSONFixed_JSONNode_o *)0x0) {
    bVar1 = (TypeInfo_SimpleJSONFixed_JSONObject->_2).typeHierarchyDepth;
    if (((__this->klass->_2).typeHierarchyDepth < bVar1) ||
       (bVar2 = true,
       (__this->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
       (Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONObject)) {
      bVar2 = false;
    }
    if (bVar2) {
      pSVar3 = (SimpleJSONFixed_JSONObject_o *)__this;
    }
  }
  return pSVar3;
}


// SimpleJSONFixed.JSONNode$$op_Implicit
// il2cpp: SimpleJSONFixed_JSONNode_o* SimpleJSONFixed_JSONNode__op_Implicit (System_String_o* s, const MethodInfo* method);
// 0x181dc4b90

SimpleJSONFixed_JSONNode_o * SimpleJSONFixed_JSONNode__op_Implicit(System_String_o *s,MethodInfo *method)

{
  SimpleJSONFixed_JSONNode_o *pSVar1;
  SimpleJSONFixed_JSONString_o *__this;
  
  if (Il2CppMethodInitialized_18434496d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNull);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONString);
    Il2CppMethodInitialized_18434496d = '\x01';
  }
  if (s == (System_String_o *)0x0) {
    if ((TypeInfo_SimpleJSONFixed_JSONNull->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNull);
    }
    pSVar1 = (SimpleJSONFixed_JSONNode_o *)SimpleJSONFixed_JSONNull__CreateOrGet((MethodInfo *)0x0);
    return pSVar1;
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONString);
  if (Il2CppMethodInitialized_1843449bd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    Il2CppMethodInitialized_1843449bd = '\x01';
  }
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  (__this->fields).m_Data = s;
  Il2CppCodeGenWriteBarrier(&(__this->fields).m_Data,s);
  return (SimpleJSONFixed_JSONNode_o *)__this;
}


// SimpleJSONFixed.JSONNode$$op_Implicit
// il2cpp: System_String_o* SimpleJSONFixed_JSONNode__op_Implicit (SimpleJSONFixed_JSONNode_o* d, const MethodInfo* method);
// 0x181dc4450

System_String_o *
SimpleJSONFixed_JSONNode__op_Implicit_1dc4450(SimpleJSONFixed_JSONNode_o *d,MethodInfo *method)

{
  byte bVar1;
  SimpleJSONFixed_JSONNode_c *pSVar2;
  bool bVar3;
  SimpleJSONFixed_JSONNode_o *pSVar4;
  System_String_o *pSVar5;
  
  if (Il2CppMethodInitialized_18434496e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    Il2CppMethodInitialized_18434496e = '\x01';
  }
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  if (Il2CppMethodInitialized_18434497c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONLazyCreator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNull);
    Il2CppMethodInitialized_18434497c = '\x01';
  }
  if (d != (SimpleJSONFixed_JSONNode_o *)0x0) {
    pSVar2 = d->klass;
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
        pSVar4 = d;
      }
      bVar3 = pSVar4 != (SimpleJSONFixed_JSONNode_o *)0x0;
    }
    else {
      bVar3 = true;
    }
    if (!bVar3) {
      bVar3 = (*(pSVar2->vtable)._0_Equals.methodPtr)
                        (d,(Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o *)0x0,
                         (pSVar2->vtable)._0_Equals.method);
      if (!bVar3) {
        pSVar5 = (*(d->klass->vtable)._9_get_Value.methodPtr)(d,(d->klass->vtable)._9_get_Value.method);
        return pSVar5;
      }
    }
  }
  return (System_String_o *)0x0;
}


// SimpleJSONFixed.JSONNode$$op_Implicit
// il2cpp: SimpleJSONFixed_JSONNode_o* SimpleJSONFixed_JSONNode__op_Implicit (double n, const MethodInfo* method);
// 0x181dc4710

SimpleJSONFixed_JSONNode_o * SimpleJSONFixed_JSONNode__op_Implicit_1dc4710(double n,MethodInfo *method)

{
  SimpleJSONFixed_JSONNumber_o *__this;
  
  if (Il2CppMethodInitialized_18434496f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNumber);
    Il2CppMethodInitialized_18434496f = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNumber);
  if (Il2CppMethodInitialized_1843449c4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    Il2CppMethodInitialized_1843449c4 = '\x01';
  }
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  (__this->fields).m_Data = n;
  return (SimpleJSONFixed_JSONNode_o *)__this;
}


// SimpleJSONFixed.JSONNode$$op_Implicit
// il2cpp: double SimpleJSONFixed_JSONNode__op_Implicit (SimpleJSONFixed_JSONNode_o* d, const MethodInfo* method);
// 0x181dc47a0

double SimpleJSONFixed_JSONNode__op_Implicit_1dc47a0(SimpleJSONFixed_JSONNode_o *d,MethodInfo *method)

{
  byte bVar1;
  SimpleJSONFixed_JSONNode_c *pSVar2;
  double dVar3;
  bool bVar4;
  SimpleJSONFixed_JSONNode_o *pSVar5;
  
  if (Il2CppMethodInitialized_184344970 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    Il2CppMethodInitialized_184344970 = '\x01';
  }
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  if (Il2CppMethodInitialized_18434497c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONLazyCreator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNull);
    Il2CppMethodInitialized_18434497c = '\x01';
  }
  if (d != (SimpleJSONFixed_JSONNode_o *)0x0) {
    pSVar2 = d->klass;
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
        pSVar5 = d;
      }
      bVar4 = pSVar5 != (SimpleJSONFixed_JSONNode_o *)0x0;
    }
    else {
      bVar4 = true;
    }
    if (!bVar4) {
      bVar4 = (*(pSVar2->vtable)._0_Equals.methodPtr)
                        (d,(Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o *)0x0,
                         (pSVar2->vtable)._0_Equals.method);
      if (!bVar4) {
        dVar3 = (*(d->klass->vtable)._33_get_AsDouble.methodPtr)(d,(d->klass->vtable)._33_get_AsDouble.method)
        ;
        return dVar3;
      }
    }
  }
  return 0.0;
}


// SimpleJSONFixed.JSONNode$$op_Implicit
// il2cpp: SimpleJSONFixed_JSONNode_o* SimpleJSONFixed_JSONNode__op_Implicit (float n, const MethodInfo* method);
// 0x181dc4260

SimpleJSONFixed_JSONNode_o * SimpleJSONFixed_JSONNode__op_Implicit_1dc4260(float n,MethodInfo *method)

{
  SimpleJSONFixed_JSONNumber_o *__this;
  
  if (Il2CppMethodInitialized_184344971 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNumber);
    Il2CppMethodInitialized_184344971 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNumber);
  if (Il2CppMethodInitialized_1843449c4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    Il2CppMethodInitialized_1843449c4 = '\x01';
  }
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  (__this->fields).m_Data = (double)n;
  return (SimpleJSONFixed_JSONNode_o *)__this;
}


// SimpleJSONFixed.JSONNode$$op_Implicit
// il2cpp: float SimpleJSONFixed_JSONNode__op_Implicit (SimpleJSONFixed_JSONNode_o* d, const MethodInfo* method);
// 0x181dc40b0

float SimpleJSONFixed_JSONNode__op_Implicit_1dc40b0(SimpleJSONFixed_JSONNode_o *d,MethodInfo *method)

{
  byte bVar1;
  SimpleJSONFixed_JSONNode_c *pSVar2;
  bool bVar3;
  SimpleJSONFixed_JSONNode_o *pSVar4;
  float fVar5;
  
  if (Il2CppMethodInitialized_184344972 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    Il2CppMethodInitialized_184344972 = '\x01';
  }
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  if (Il2CppMethodInitialized_18434497c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONLazyCreator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNull);
    Il2CppMethodInitialized_18434497c = '\x01';
  }
  if (d != (SimpleJSONFixed_JSONNode_o *)0x0) {
    pSVar2 = d->klass;
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
        pSVar4 = d;
      }
      bVar3 = pSVar4 != (SimpleJSONFixed_JSONNode_o *)0x0;
    }
    else {
      bVar3 = true;
    }
    if (!bVar3) {
      bVar3 = (*(pSVar2->vtable)._0_Equals.methodPtr)
                        (d,(Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o *)0x0,
                         (pSVar2->vtable)._0_Equals.method);
      if (!bVar3) {
        fVar5 = (*(d->klass->vtable)._37_get_AsFloat.methodPtr)(d,(d->klass->vtable)._37_get_AsFloat.method);
        return fVar5;
      }
    }
  }
  return 0.0;
}


// SimpleJSONFixed.JSONNode$$op_Implicit
// il2cpp: SimpleJSONFixed_JSONNode_o* SimpleJSONFixed_JSONNode__op_Implicit (int32_t n, const MethodInfo* method);
// 0x181dc41d0

SimpleJSONFixed_JSONNode_o * SimpleJSONFixed_JSONNode__op_Implicit_1dc41d0(int32_t n,MethodInfo *method)

{
  SimpleJSONFixed_JSONNumber_o *__this;
  
  if (Il2CppMethodInitialized_184344973 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNumber);
    Il2CppMethodInitialized_184344973 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNumber);
  if (Il2CppMethodInitialized_1843449c4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    Il2CppMethodInitialized_1843449c4 = '\x01';
  }
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  (__this->fields).m_Data = (double)n;
  return (SimpleJSONFixed_JSONNode_o *)__this;
}


// SimpleJSONFixed.JSONNode$$op_Implicit
// il2cpp: int32_t SimpleJSONFixed_JSONNode__op_Implicit (SimpleJSONFixed_JSONNode_o* d, const MethodInfo* method);
// 0x181dc4950

int32_t SimpleJSONFixed_JSONNode__op_Implicit_1dc4950(SimpleJSONFixed_JSONNode_o *d,MethodInfo *method)

{
  byte bVar1;
  SimpleJSONFixed_JSONNode_c *pSVar2;
  bool bVar3;
  int32_t iVar4;
  SimpleJSONFixed_JSONNode_o *pSVar5;
  
  if (Il2CppMethodInitialized_184344974 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    Il2CppMethodInitialized_184344974 = '\x01';
  }
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  if (Il2CppMethodInitialized_18434497c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONLazyCreator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNull);
    Il2CppMethodInitialized_18434497c = '\x01';
  }
  if (d != (SimpleJSONFixed_JSONNode_o *)0x0) {
    pSVar2 = d->klass;
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
        pSVar5 = d;
      }
      bVar3 = pSVar5 != (SimpleJSONFixed_JSONNode_o *)0x0;
    }
    else {
      bVar3 = true;
    }
    if (!bVar3) {
      bVar3 = (*(pSVar2->vtable)._0_Equals.methodPtr)
                        (d,(Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o *)0x0,
                         (pSVar2->vtable)._0_Equals.method);
      if (!bVar3) {
        iVar4 = (*(d->klass->vtable)._35_get_AsInt.methodPtr)(d,(d->klass->vtable)._35_get_AsInt.method);
        return iVar4;
      }
    }
  }
  return 0;
}


// SimpleJSONFixed.JSONNode$$op_Implicit
// il2cpp: SimpleJSONFixed_JSONNode_o* SimpleJSONFixed_JSONNode__op_Implicit (int64_t n, const MethodInfo* method);
// 0x181dc4c60

SimpleJSONFixed_JSONNode_o * SimpleJSONFixed_JSONNode__op_Implicit_1dc4c60(int64_t n,MethodInfo *method)

{
  int64_t iVar1;
  SimpleJSONFixed_JSONNumber_o *__this;
  System_String_o *value;
  SimpleJSONFixed_JSONString_o *__this_00;
  int64_t local_res8;
  
  local_res8 = n;
  if (Il2CppMethodInitialized_184344975 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNumber);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONString);
    Il2CppMethodInitialized_184344975 = '\x01';
  }
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  iVar1 = local_res8;
  if (TypeInfo_SimpleJSONFixed_JSONNode->static_fields->longAsString == false) {
    __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNumber);
    if (Il2CppMethodInitialized_1843449c4 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
      Il2CppMethodInitialized_1843449c4 = '\x01';
    }
    if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
    }
    System_Object___ctor
              ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
    (__this->fields).m_Data = (double)iVar1;
    return (SimpleJSONFixed_JSONNode_o *)__this;
  }
  value = System_Int64__ToString(&local_res8,(MethodInfo *)0x0);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONString);
  if (Il2CppMethodInitialized_1843449bd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    Il2CppMethodInitialized_1843449bd = '\x01';
  }
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).m_Data = value;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).m_Data,value);
  return (SimpleJSONFixed_JSONNode_o *)__this_00;
}


// SimpleJSONFixed.JSONNode$$op_Implicit
// il2cpp: int64_t SimpleJSONFixed_JSONNode__op_Implicit (SimpleJSONFixed_JSONNode_o* d, const MethodInfo* method);
// 0x181dc4a70

int64_t SimpleJSONFixed_JSONNode__op_Implicit_1dc4a70(SimpleJSONFixed_JSONNode_o *d,MethodInfo *method)

{
  byte bVar1;
  SimpleJSONFixed_JSONNode_c *pSVar2;
  bool bVar3;
  SimpleJSONFixed_JSONNode_o *pSVar4;
  int64_t iVar5;
  
  if (Il2CppMethodInitialized_184344976 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    Il2CppMethodInitialized_184344976 = '\x01';
  }
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  if (Il2CppMethodInitialized_18434497c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONLazyCreator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNull);
    Il2CppMethodInitialized_18434497c = '\x01';
  }
  if (d != (SimpleJSONFixed_JSONNode_o *)0x0) {
    pSVar2 = d->klass;
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
        pSVar4 = d;
      }
      bVar3 = pSVar4 != (SimpleJSONFixed_JSONNode_o *)0x0;
    }
    else {
      bVar3 = true;
    }
    if (!bVar3) {
      bVar3 = (*(pSVar2->vtable)._0_Equals.methodPtr)
                        (d,(Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o *)0x0,
                         (pSVar2->vtable)._0_Equals.method);
      if (!bVar3) {
        iVar5 = (*(d->klass->vtable)._41_get_AsLong.methodPtr)(d,(d->klass->vtable)._41_get_AsLong.method);
        return iVar5;
      }
    }
  }
  return 0;
}


// SimpleJSONFixed.JSONNode$$op_Implicit
// il2cpp: SimpleJSONFixed_JSONNode_o* SimpleJSONFixed_JSONNode__op_Implicit (uint64_t n, const MethodInfo* method);
// 0x181dc4570

SimpleJSONFixed_JSONNode_o * SimpleJSONFixed_JSONNode__op_Implicit_1dc4570(uint64_t n,MethodInfo *method)

{
  uint64_t uVar1;
  SimpleJSONFixed_JSONNumber_o *__this;
  System_String_o *value;
  SimpleJSONFixed_JSONString_o *__this_00;
  uint64_t local_res8;
  
  local_res8 = n;
  if (Il2CppMethodInitialized_184344977 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNumber);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONString);
    Il2CppMethodInitialized_184344977 = '\x01';
  }
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  uVar1 = local_res8;
  if (TypeInfo_SimpleJSONFixed_JSONNode->static_fields->longAsString == false) {
    __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNumber);
    if (Il2CppMethodInitialized_1843449c4 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
      Il2CppMethodInitialized_1843449c4 = '\x01';
    }
    if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
    }
    System_Object___ctor
              ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
    if (-1 < (longlong)uVar1) {
      (__this->fields).m_Data = (double)(longlong)uVar1;
      return (SimpleJSONFixed_JSONNode_o *)__this;
    }
    (__this->fields).m_Data = (double)uVar1;
    return (SimpleJSONFixed_JSONNode_o *)__this;
  }
  value = System_UInt64__ToString(&local_res8,(MethodInfo *)0x0);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONString);
  if (Il2CppMethodInitialized_1843449bd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    Il2CppMethodInitialized_1843449bd = '\x01';
  }
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).m_Data = value;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).m_Data,value);
  return (SimpleJSONFixed_JSONNode_o *)__this_00;
}


// SimpleJSONFixed.JSONNode$$op_Implicit
// il2cpp: uint64_t SimpleJSONFixed_JSONNode__op_Implicit (SimpleJSONFixed_JSONNode_o* d, const MethodInfo* method);
// 0x181dc3f90

uint64_t SimpleJSONFixed_JSONNode__op_Implicit_1dc3f90(SimpleJSONFixed_JSONNode_o *d,MethodInfo *method)

{
  byte bVar1;
  SimpleJSONFixed_JSONNode_c *pSVar2;
  bool bVar3;
  SimpleJSONFixed_JSONNode_o *pSVar4;
  uint64_t uVar5;
  
  if (Il2CppMethodInitialized_184344978 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    Il2CppMethodInitialized_184344978 = '\x01';
  }
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  if (Il2CppMethodInitialized_18434497c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONLazyCreator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNull);
    Il2CppMethodInitialized_18434497c = '\x01';
  }
  if (d != (SimpleJSONFixed_JSONNode_o *)0x0) {
    pSVar2 = d->klass;
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
        pSVar4 = d;
      }
      bVar3 = pSVar4 != (SimpleJSONFixed_JSONNode_o *)0x0;
    }
    else {
      bVar3 = true;
    }
    if (!bVar3) {
      bVar3 = (*(pSVar2->vtable)._0_Equals.methodPtr)
                        (d,(Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o *)0x0,
                         (pSVar2->vtable)._0_Equals.method);
      if (!bVar3) {
        uVar5 = (*(d->klass->vtable)._43_get_AsULong.methodPtr)(d,(d->klass->vtable)._43_get_AsULong.method);
        return uVar5;
      }
    }
  }
  return 0;
}


// SimpleJSONFixed.JSONNode$$op_Implicit
// il2cpp: SimpleJSONFixed_JSONNode_o* SimpleJSONFixed_JSONNode__op_Implicit (bool b, const MethodInfo* method);
// 0x181dc48c0

SimpleJSONFixed_JSONNode_o * SimpleJSONFixed_JSONNode__op_Implicit_1dc48c0(bool b,MethodInfo *method)

{
  SimpleJSONFixed_JSONBool_o *__this;
  
  if (Il2CppMethodInitialized_184344979 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONBool);
    Il2CppMethodInitialized_184344979 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONBool);
  if (Il2CppMethodInitialized_1843449c9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    Il2CppMethodInitialized_1843449c9 = '\x01';
  }
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  (__this->fields).m_Data = b;
  return (SimpleJSONFixed_JSONNode_o *)__this;
}


// SimpleJSONFixed.JSONNode$$op_Implicit
// il2cpp: bool SimpleJSONFixed_JSONNode__op_Implicit (SimpleJSONFixed_JSONNode_o* d, const MethodInfo* method);
// 0x181dc42f0

bool SimpleJSONFixed_JSONNode__op_Implicit_1dc42f0(SimpleJSONFixed_JSONNode_o *d,MethodInfo *method)

{
  byte bVar1;
  SimpleJSONFixed_JSONNode_c *pSVar2;
  bool bVar3;
  SimpleJSONFixed_JSONNode_o *pSVar4;
  
  if (Il2CppMethodInitialized_18434497a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    Il2CppMethodInitialized_18434497a = '\x01';
  }
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  if (Il2CppMethodInitialized_18434497c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONLazyCreator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNull);
    Il2CppMethodInitialized_18434497c = '\x01';
  }
  if (d != (SimpleJSONFixed_JSONNode_o *)0x0) {
    pSVar2 = d->klass;
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
        pSVar4 = d;
      }
      bVar3 = pSVar4 != (SimpleJSONFixed_JSONNode_o *)0x0;
    }
    else {
      bVar3 = true;
    }
    if (!bVar3) {
      bVar3 = (*(pSVar2->vtable)._0_Equals.methodPtr)
                        (d,(Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o *)0x0,
                         (pSVar2->vtable)._0_Equals.method);
      if (!bVar3) {
        bVar3 = (*(d->klass->vtable)._39_get_AsBool.methodPtr)(d,(d->klass->vtable)._39_get_AsBool.method);
        return bVar3;
      }
    }
  }
  return false;
}


// SimpleJSONFixed.JSONNode$$op_Implicit
// il2cpp: SimpleJSONFixed_JSONNode_o* SimpleJSONFixed_JSONNode__op_Implicit (System_Collections_Generic_KeyValuePair_string__JSONNode__o aKeyValue, const MethodInfo* method);
// 0x181dc4410

SimpleJSONFixed_JSONNode_o *
SimpleJSONFixed_JSONNode__op_Implicit_1dc4410
          (System_Collections_Generic_KeyValuePair_string__JSONNode__o *aKeyValue,MethodInfo *method)

{
  if (Il2CppMethodInitialized_18434497b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_KeyValuePair_string_JSONNode_get_Value);
    Il2CppMethodInitialized_18434497b = 1;
    return (aKeyValue->fields).value;
  }
  return (aKeyValue->fields).value;
}


// SimpleJSONFixed.JSONNode$$op_Equality
// il2cpp: bool SimpleJSONFixed_JSONNode__op_Equality (SimpleJSONFixed_JSONNode_o* a, Il2CppObject* b, const MethodInfo* method);
// 0x181dc3e10

bool SimpleJSONFixed_JSONNode__op_Equality(SimpleJSONFixed_JSONNode_o *a,Il2CppObject *b,MethodInfo *method)

{
  byte bVar1;
  SimpleJSONFixed_JSONNode_c *pSVar2;
  Il2CppClass *pIVar3;
  SimpleJSONFixed_JSONNode_o *pSVar4;
  Il2CppObject *pIVar5;
  bool bVar6;
  bool bVar7;
  
  if (Il2CppMethodInitialized_18434497c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONLazyCreator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNull);
    Il2CppMethodInitialized_18434497c = '\x01';
  }
  if ((Il2CppObject *)a == b) {
    return true;
  }
  if (a != (SimpleJSONFixed_JSONNode_o *)0x0) {
    pSVar2 = a->klass;
    bVar1 = (TypeInfo_SimpleJSONFixed_JSONNull->_2).typeHierarchyDepth;
    if (((pSVar2->_2).typeHierarchyDepth < bVar1) ||
       ((pSVar2->_2).typeHierarchy[(ulonglong)bVar1 - 1] != (Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNull))
    {
      bVar1 = (TypeInfo_SimpleJSONFixed_JSONLazyCreator->_2).typeHierarchyDepth;
      if (((pSVar2->_2).typeHierarchyDepth < bVar1) ||
         ((pSVar2->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
          (Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONLazyCreator)) {
        bVar6 = false;
      }
      else {
        bVar6 = true;
      }
      pSVar4 = (SimpleJSONFixed_JSONNode_o *)0x0;
      if (bVar6) {
        pSVar4 = a;
      }
      bVar6 = pSVar4 != (SimpleJSONFixed_JSONNode_o *)0x0;
      goto label_181dc3ed4;
    }
  }
  bVar6 = true;
label_181dc3ed4:
  bVar7 = true;
  if (b != (Il2CppObject *)0x0) {
    pIVar3 = b->klass;
    bVar1 = (TypeInfo_SimpleJSONFixed_JSONNull->_2).typeHierarchyDepth;
    if (((pIVar3->_2).typeHierarchyDepth < bVar1) ||
       ((pIVar3->_2).typeHierarchy[(ulonglong)bVar1 - 1] != (Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNull))
    {
      bVar1 = (TypeInfo_SimpleJSONFixed_JSONLazyCreator->_2).typeHierarchyDepth;
      if (((pIVar3->_2).typeHierarchyDepth < bVar1) ||
         ((pIVar3->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
          (Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONLazyCreator)) {
        bVar7 = false;
      }
      pIVar5 = (Il2CppObject *)0x0;
      if (bVar7) {
        pIVar5 = b;
      }
      bVar7 = pIVar5 != (Il2CppObject *)0x0;
    }
  }
  if ((bool)(bVar7 & bVar6)) {
    return true;
  }
  if (bVar6) {
    return false;
  }
  if (a == (SimpleJSONFixed_JSONNode_o *)0x0) {
    ThrowNullReferenceException();
  }
  bVar6 = (*(a->klass->vtable)._0_Equals.methodPtr)
                    (a,(Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o *)b,
                     (a->klass->vtable)._0_Equals.method);
  return bVar6;
}


// SimpleJSONFixed.JSONNode$$op_Inequality
// il2cpp: bool SimpleJSONFixed_JSONNode__op_Inequality (SimpleJSONFixed_JSONNode_o* a, Il2CppObject* b, const MethodInfo* method);
// 0x181dc4dc0

bool SimpleJSONFixed_JSONNode__op_Inequality(SimpleJSONFixed_JSONNode_o *a,Il2CppObject *b,MethodInfo *method)

{
  bool bVar1;
  
  if (Il2CppMethodInitialized_18434497d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    Il2CppMethodInitialized_18434497d = '\x01';
  }
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  bVar1 = SimpleJSONFixed_JSONNode__op_Equality(a,b,(MethodInfo *)0x0);
  return !bVar1;
}


// SimpleJSONFixed.JSONNode$$Equals
// il2cpp: bool SimpleJSONFixed_JSONNode__Equals (SimpleJSONFixed_JSONNode_o* __this, Il2CppObject* obj, const MethodInfo* method);
// 0x180841f20

bool
SimpleJSONFixed_JSONNode__Equals(SimpleJSONFixed_JSONNode_o* __this, Il2CppObject* obj, MethodInfo* method)

{
  return left == right;
}


// SimpleJSONFixed.JSONNode$$GetHashCode
// il2cpp: int32_t SimpleJSONFixed_JSONNode__GetHashCode (SimpleJSONFixed_JSONNode_o* __this, const MethodInfo* method);
// 0x18198ac80

int32_t
SimpleJSONFixed_JSONNode__GetHashCode(SimpleJSONFixed_JSONNode_o* __this, MethodInfo* method)

{
  int32_t iVar1;
  
  iVar1 = System_Object__InternalGetHashCode((Il2CppObject *)__this,(MethodInfo *)0x0);
  return iVar1;
}


// SimpleJSONFixed.JSONNode$$get_EscapeBuilder
// il2cpp: System_Text_StringBuilder_o* SimpleJSONFixed_JSONNode__get_EscapeBuilder (const MethodInfo* method);
// 0x181dc3c40

System_Text_StringBuilder_o * SimpleJSONFixed_JSONNode__get_EscapeBuilder(MethodInfo *method)

{
  longlong *plVar1;
  System_Text_StringBuilder_o *__this;
  undefined8 *puVar2;
  void **targetAddress;
  
  if (Il2CppMethodInitialized_18434497e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Text_StringBuilder);
    Il2CppMethodInitialized_18434497e = '\x01';
  }
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  plVar1 = (longlong *)il2cpp_runtime_helper_180416c80(TypeInfo_SimpleJSONFixed_JSONNode);
  if (*plVar1 == 0) {
    __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Text_StringBuilder);
    System_Text_StringBuilder___ctor(__this,(MethodInfo *)0x0);
    if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
    }
    puVar2 = (undefined8 *)il2cpp_runtime_helper_180416c80(TypeInfo_SimpleJSONFixed_JSONNode);
    *puVar2 = __this;
    targetAddress = (void **)il2cpp_runtime_helper_180416c80(TypeInfo_SimpleJSONFixed_JSONNode);
    Il2CppCodeGenWriteBarrier(targetAddress,__this);
  }
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  puVar2 = (undefined8 *)il2cpp_runtime_helper_180416c80(TypeInfo_SimpleJSONFixed_JSONNode);
  return (System_Text_StringBuilder_o *)*puVar2;
}


// SimpleJSONFixed.JSONNode$$Escape
// il2cpp: System_String_o* SimpleJSONFixed_JSONNode__Escape (System_String_o* aText, const MethodInfo* method);
// 0x181dc27d0

System_String_o * SimpleJSONFixed_JSONNode__Escape(System_String_o *aText,MethodInfo *method)

{
  uint16_t value;
  int32_t iVar1;
  longlong *plVar2;
  System_Text_StringBuilder_o *pSVar3;
  undefined8 *puVar4;
  void **targetAddress;
  System_Text_StringBuilder_o *__this;
  System_String_o *pSVar5;
  int index;
  uint16_t local_res18 [8];
  
  if (Il2CppMethodInitialized_18434497f == '\0') {
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
    Il2CppMethodInitialized_18434497f = '\x01';
  }
  local_res18[0] = 0;
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  if (Il2CppMethodInitialized_18434497e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Text_StringBuilder);
    Il2CppMethodInitialized_18434497e = '\x01';
  }
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  plVar2 = (longlong *)il2cpp_runtime_helper_180416c80(TypeInfo_SimpleJSONFixed_JSONNode);
  if (*plVar2 == 0) {
    pSVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Text_StringBuilder);
    System_Text_StringBuilder___ctor(pSVar3,(MethodInfo *)0x0);
    if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
    }
    puVar4 = (undefined8 *)il2cpp_runtime_helper_180416c80(TypeInfo_SimpleJSONFixed_JSONNode);
    *puVar4 = pSVar3;
    targetAddress = (void **)il2cpp_runtime_helper_180416c80(TypeInfo_SimpleJSONFixed_JSONNode);
    Il2CppCodeGenWriteBarrier(targetAddress,pSVar3);
  }
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  puVar4 = (undefined8 *)il2cpp_runtime_helper_180416c80(TypeInfo_SimpleJSONFixed_JSONNode);
  pSVar3 = (System_Text_StringBuilder_o *)*puVar4;
  if (pSVar3 != (System_Text_StringBuilder_o *)0x0) {
    System_Text_StringBuilder__set_Length(pSVar3,0,(MethodInfo *)0x0);
    iVar1 = System_Text_StringBuilder__get_Capacity(pSVar3,(MethodInfo *)0x0);
    if (aText != (System_String_o *)0x0) {
      if (iVar1 < (aText->fields)._stringLength / 10 + (aText->fields)._stringLength) {
        System_Text_StringBuilder__set_Capacity
                  (pSVar3,(aText->fields)._stringLength / 10 + (aText->fields)._stringLength,(MethodInfo *)0x0
                  );
      }
      index = 0;
      do {
        if ((aText->fields)._stringLength <= index) {
          pSVar5 = (*(pSVar3->klass->vtable)._3_ToString.methodPtr)
                             (pSVar3,(pSVar3->klass->vtable)._3_ToString.method);
          System_Text_StringBuilder__set_Length(pSVar3,0,(MethodInfo *)0x0);
          return pSVar5;
        }
        value = System_String__get_Chars(aText,index,(MethodInfo *)0x0);
        switch(value) {
        case 8:
          System_Text_StringBuilder__Append_197dca0(pSVar3,"\\b",(MethodInfo *)0x0);
          index = index + 1;
          break;
        case 9:
          System_Text_StringBuilder__Append_197dca0(pSVar3,"\\t",(MethodInfo *)0x0);
          index = index + 1;
          break;
        case 10:
          System_Text_StringBuilder__Append_197dca0(pSVar3,"\\n",(MethodInfo *)0x0);
          index = index + 1;
          break;
        case 0xb:
switchD_181dc29fa_caseD_b:
          if (0x1f < value) {
            if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
            }
            if ((TypeInfo_SimpleJSONFixed_JSONNode->static_fields->forceASCII == false) || (value < 0x80)) {
              System_Text_StringBuilder__Append_197e090(pSVar3,value,(MethodInfo *)0x0);
              index = index + 1;
              break;
            }
          }
          local_res18[0] = value;
          __this = System_Text_StringBuilder__Append_197dca0(pSVar3,"\\u",(MethodInfo *)0x0);
          pSVar5 = System_UInt16__ToString_1b559e0(local_res18,"X4",(MethodInfo *)0x0);
          if (__this == (System_Text_StringBuilder_o *)0x0) goto label_181dc2b90;
          System_Text_StringBuilder__Append_197dca0(__this,pSVar5,(MethodInfo *)0x0);
          index = index + 1;
          break;
        case 0xc:
          System_Text_StringBuilder__Append_197dca0(pSVar3,"\\f",(MethodInfo *)0x0);
          index = index + 1;
          break;
        case 0xd:
          System_Text_StringBuilder__Append_197dca0(pSVar3,"\\r",(MethodInfo *)0x0);
          index = index + 1;
          break;
        default:
          if (value == 0x22) {
            System_Text_StringBuilder__Append_197dca0(pSVar3,"\\\"",(MethodInfo *)0x0);
            index = index + 1;
          }
          else {
            if (value != 0x5c) goto switchD_181dc29fa_caseD_b;
            System_Text_StringBuilder__Append_197dca0(pSVar3,"\\\\",(MethodInfo *)0x0);
            index = index + 1;
          }
        }
      } while( true );
    }
  }
label_181dc2b90:
  ThrowNullReferenceException();
}


// SimpleJSONFixed.JSONNode$$ParseElement
// il2cpp: SimpleJSONFixed_JSONNode_o* SimpleJSONFixed_JSONNode__ParseElement (System_String_o* token, bool quoted, const MethodInfo* method);
// 0x181dc2bb0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181dc2e39: mov rcx, qword ptr [rip + 0x22ed4f0]  ; TypeInfo_SimpleJSONFixed_JSONNode

SimpleJSONFixed_JSONNode_o *
SimpleJSONFixed_JSONNode__ParseElement(System_String_o *token,bool quoted,MethodInfo *method)

{
  SimpleJSONFixed_JSONNumber_Fields SVar1;
  bool bVar2;
  System_String_o *a;
  SimpleJSONFixed_JSONNode_o *pSVar3;
  SimpleJSONFixed_JSONBool_o *__this;
  System_Globalization_CultureInfo_o *provider;
  SimpleJSONFixed_JSONNumber_o *__this_00;
  SimpleJSONFixed_JSONNumber_Fields local_res20;
  
  if (Il2CppMethodInitialized_184344980 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Globalization_CultureInfo);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNull);
    il2cpp_codegen_initialize_runtime_metadata(&"null");
    il2cpp_codegen_initialize_runtime_metadata(&"false");
    il2cpp_codegen_initialize_runtime_metadata(&"true");
    Il2CppMethodInitialized_184344980 = '\x01';
  }
  local_res20.m_Data = 0.0;
  if (!quoted) {
    if (token == (System_String_o *)0x0) {
      ThrowNullReferenceException();
    }
    if ((token->fields)._stringLength < 6) {
      a = System_String__ToLower(token,(MethodInfo *)0x0);
      bVar2 = System_String__op_Equality(a,"false",(MethodInfo *)0x0);
      if ((bVar2) || (bVar2 = System_String__op_Equality(a,"true",(MethodInfo *)0x0), bVar2)) {
        bVar2 = System_String__op_Equality(a,"true",(MethodInfo *)0x0);
        if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
        }
        if (Il2CppMethodInitialized_184344979 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONBool);
          Il2CppMethodInitialized_184344979 = '\x01';
        }
        __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONBool);
        if (Il2CppMethodInitialized_1843449c9 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
          Il2CppMethodInitialized_1843449c9 = '\x01';
        }
        if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
        }
        System_Object___ctor
                  ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
        (__this->fields).m_Data = bVar2;
        return (SimpleJSONFixed_JSONNode_o *)__this;
      }
      bVar2 = System_String__op_Equality(a,"null",(MethodInfo *)0x0);
      if (bVar2) {
        if ((TypeInfo_SimpleJSONFixed_JSONNull->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNull);
        }
        pSVar3 = (SimpleJSONFixed_JSONNode_o *)SimpleJSONFixed_JSONNull__CreateOrGet((MethodInfo *)0x0);
        return pSVar3;
      }
    }
    if ((TypeInfo_System_Globalization_CultureInfo->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Globalization_CultureInfo);
    }
    provider = System_Globalization_CultureInfo__get_InvariantCulture((MethodInfo *)0x0);
    bVar2 = System_Double__TryParse_1b22970
                      (token,0xa7,(System_IFormatProvider_o *)provider,&local_res20.m_Data,(MethodInfo *)0x0);
    SVar1.m_Data = local_res20.m_Data;
    if (bVar2) {
      if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
      }
      if (Il2CppMethodInitialized_18434496f == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNumber);
        Il2CppMethodInitialized_18434496f = '\x01';
      }
      __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNumber);
      if (Il2CppMethodInitialized_1843449c4 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
        Il2CppMethodInitialized_1843449c4 = '\x01';
      }
      if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
      }
      System_Object___ctor
                ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this_00,(MethodInfo *)0x0);
      (__this_00->fields).m_Data = SVar1.m_Data;
      return (SimpleJSONFixed_JSONNode_o *)__this_00;
    }
  }
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  pSVar3 = SimpleJSONFixed_JSONNode__op_Implicit(token,(MethodInfo *)0x0);
  return pSVar3;
}


// SimpleJSONFixed.JSONNode$$Parse
// il2cpp: SimpleJSONFixed_JSONNode_o* SimpleJSONFixed_JSONNode__Parse (System_String_o* aJSON, const MethodInfo* method);
// 0x181dc2e70
// asm: 6 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181dc2f8e: nop 
// asm:   0x181dc30b3: jmp 0x181dc3533
// asm:   0x181dc329a: movzx esi, byte ptr [rsp + 0x60]
// asm:   0x181dc3371: jmp 0x181dc328f
// asm:   0x181dc357a: jmp 0x181dc3533
// asm:   0x181dc35ab: mov rax, r14

SimpleJSONFixed_JSONNode_o * SimpleJSONFixed_JSONNode__Parse(System_String_o *aJSON,MethodInfo *method)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  uint16_t uVar4;
  int32_t iVar5;
  System_Collections_Generic_Stack_EntryPreProcessor_AllocSize__o *__this;
  System_Runtime_Serialization_ObjectHolder_o *__this_00;
  SimpleJSONFixed_JSONObject_o *__this_01;
  UnityEngine_UIElements_UIR_EntryPreProcessor_AllocSize_Fields a;
  System_String_o *pSVar6;
  Il2CppClass *pIVar7;
  System_Exception_o *pSVar8;
  MethodInfo *pMVar9;
  int index;
  int iVar10;
  int iVar11;
  bool bVar12;
  
  if (Il2CppMethodInitialized_184344981 == '\0') {
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
    Il2CppMethodInitialized_184344981 = '\x01';
  }
  __this = (System_Collections_Generic_Stack_EntryPreProcessor_AllocSize__o *)
           il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_Stack_JSONNode);
  System_Collections_Generic_Stack_object____ctor
            ((System_Runtime_CompilerServices_ReadOnlyCollectionBuilder_T__o *)__this,
             (MethodInfo_B96030 *)MethodInfo_System_Collections_Generic_Stack_JSONNode_ctor);
  __this_00 = (System_Runtime_Serialization_ObjectHolder_o *)
              il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Text_StringBuilder);
  System_Text_StringBuilder___ctor((System_Text_StringBuilder_o *)__this_00,(MethodInfo *)0x0);
  if (aJSON != (System_String_o *)0x0) {
    a.vertexCount = 0;
    a.indexCount = 0;
    index = 0;
    bVar12 = false;
    bVar2 = false;
    bVar3 = false;
label_181dc2f90:
    if ((aJSON->fields)._stringLength <= index) goto label_181dc357c;
    uVar4 = System_String__get_Chars(aJSON,index,(MethodInfo *)0x0);
    iVar10 = index;
    if (uVar4 < 0x30) {
      if (uVar4 < 0x21) {
        if (uVar4 == 9) {
label_181dc3571:
          if (!bVar3) goto label_181dc329f;
          goto label_181dc3533;
        }
        if (uVar4 != 10) {
          if ((uVar4 != 0xb) && (uVar4 != 0xc)) {
            if (uVar4 == 0xd) goto label_181dc3560;
            if (uVar4 == 0x20) goto label_181dc3571;
          }
          goto label_181dc3533;
        }
label_181dc3560:
        index = index + 1;
        goto label_181dc2f90;
      }
      if (uVar4 == 0x22) {
        bVar12 = bVar12 == false;
        bVar2 = bVar2 != false || bVar12;
        index = index + 1;
        bVar3 = bVar12;
        goto label_181dc2f90;
      }
      if (uVar4 == 0x2c) {
        if (!bVar3) {
          if (__this_00 == (System_Runtime_Serialization_ObjectHolder_o *)0x0) goto label_181dc365e;
          iVar5 = System_Text_StringBuilder__get_Length
                            (__this_00,(MethodInfo *)0x0);
          if (0 < iVar5 || bVar2) {
            pSVar6 = (System_String_o *)
                     (*(__this_00->klass->vtable)._3_ToString.methodPtr)
                               (__this_00,(__this_00->klass->vtable)._3_ToString.method);
            if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
            }
            SimpleJSONFixed_JSONNode__ParseElement(pSVar6,bVar2,(MethodInfo *)0x0);
            if (a == (UnityEngine_UIElements_UIR_EntryPreProcessor_AllocSize_Fields)0x0) goto label_181dc365e;
            (**(code **)(*(longlong *)a + 0x278))(a);
          }
          System_Text_StringBuilder__set_Length((System_Text_StringBuilder_o *)__this_00,0,(MethodInfo *)0x0);
          bVar2 = false;
          index = index + 1;
          goto label_181dc2f90;
        }
      }
      else {
        if (uVar4 != 0x2f) goto label_181dc3533;
        if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
        }
        if ((((TypeInfo_SimpleJSONFixed_JSONNode->static_fields->allowLineComments != false) && (!bVar3)) &&
            (index + 1 < (aJSON->fields)._stringLength)) &&
           (uVar4 = System_String__get_Chars(aJSON,index + 1,(MethodInfo *)0x0), uVar4 == 0x2f)) {
          do {
            iVar11 = index;
            iVar10 = iVar11 + 1;
            if (((aJSON->fields)._stringLength <= iVar10) ||
               (uVar4 = System_String__get_Chars(aJSON,iVar10,(MethodInfo *)0x0), uVar4 == 10))
            goto label_181dc329f;
            uVar4 = System_String__get_Chars(aJSON,iVar10,(MethodInfo *)0x0);
            index = iVar10;
          } while (uVar4 != 0xd);
          index = iVar11 + 2;
          goto label_181dc2f90;
        }
      }
    }
    else if (uVar4 < 0x5e) {
      if (uVar4 == 0x3a) {
        if (!bVar3) {
          if (__this_00 == (System_Runtime_Serialization_ObjectHolder_o *)0x0) goto label_181dc365e;
          (*(__this_00->klass->vtable)._3_ToString.methodPtr)(__this_00);
          System_Text_StringBuilder__set_Length((System_Text_StringBuilder_o *)__this_00,0,(MethodInfo *)0x0);
          bVar2 = false;
          index = index + 1;
          goto label_181dc2f90;
        }
      }
      else if (uVar4 == 0x5b) {
        if (!bVar3) {
          __this_01 = (SimpleJSONFixed_JSONObject_o *)
                      il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONArray);
          SimpleJSONFixed_JSONArray___ctor((SimpleJSONFixed_JSONArray_o *)__this_01,(MethodInfo *)0x0);
          goto label_181dc2fe6;
        }
      }
      else {
        if (uVar4 == 0x5c) {
          iVar10 = index + 1;
          if (!bVar3) goto label_181dc329f;
          uVar4 = System_String__get_Chars(aJSON,iVar10,(MethodInfo *)0x0);
          if (uVar4 < 0x67) {
            if (uVar4 == 0x62) {
              if (__this_00 == (System_Runtime_Serialization_ObjectHolder_o *)0x0) goto label_181dc365e;
              uVar4 = 8;
            }
            else {
              if (uVar4 != 0x66) goto label_181dc3368;
              if (__this_00 == (System_Runtime_Serialization_ObjectHolder_o *)0x0) goto label_181dc365e;
              uVar4 = 0xc;
            }
          }
          else if (uVar4 == 0x6e) {
            if (__this_00 == (System_Runtime_Serialization_ObjectHolder_o *)0x0) goto label_181dc365e;
            uVar4 = 10;
          }
          else if (uVar4 == 0x72) {
            if (__this_00 == (System_Runtime_Serialization_ObjectHolder_o *)0x0) goto label_181dc365e;
            uVar4 = 0xd;
          }
          else {
            if (uVar4 != 0x73) {
              if (uVar4 == 0x74) {
                if (__this_00 != (System_Runtime_Serialization_ObjectHolder_o *)0x0) {
                  uVar4 = 9;
                  goto label_181dc328f;
                }
                goto label_181dc365e;
              }
              if (uVar4 == 0x75) {
                pSVar6 = System_String__Substring_1972740(aJSON,index + 2,4,(MethodInfo *)0x0);
                iVar5 = System_Int32__Parse_1b29290(pSVar6,0x200,(MethodInfo *)0x0);
                if (__this_00 == (System_Runtime_Serialization_ObjectHolder_o *)0x0) goto label_181dc365e;
                System_Text_StringBuilder__Append_197e090
                          ((System_Text_StringBuilder_o *)__this_00,(uint16_t)iVar5,(MethodInfo *)0x0);
                index = index + 6;
                goto label_181dc2f90;
              }
            }
label_181dc3368:
            if (__this_00 == (System_Runtime_Serialization_ObjectHolder_o *)0x0) goto label_181dc365e;
          }
label_181dc328f:
          System_Text_StringBuilder__Append_197e090
                    ((System_Text_StringBuilder_o *)__this_00,uVar4,(MethodInfo *)0x0);
          goto label_181dc329f;
        }
        if (uVar4 == 0x5d) goto label_181dc311d;
      }
    }
    else if (uVar4 == 0x7b) {
      if (!bVar3) {
        __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONObject);
        SimpleJSONFixed_JSONObject___ctor(__this_01,(MethodInfo *)0x0);
label_181dc2fe6:
        if (__this == (System_Collections_Generic_Stack_EntryPreProcessor_AllocSize__o *)0x0)
        goto label_181dc365e;
        System_Collections_Generic_Stack_object___Push
                  ((System_Collections_Generic_Stack_object__o *)__this,(Il2CppObject *)__this_01,
                   (MethodInfo_CFD670 *)MethodInfo_System_Collections_Generic_Stack_JSONNode_Push);
        if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
        }
        bVar1 = SimpleJSONFixed_JSONNode__op_Inequality
                          ((SimpleJSONFixed_JSONNode_o *)a,(Il2CppObject *)0x0,(MethodInfo *)0x0);
        if (bVar1) {
          System_Collections_Generic_Stack_object___Peek
                    (__this,(MethodInfo_CFBFE0 *)MethodInfo_System_Collections_Generic_Stack_JSONNode_Peek);
          if (a == (UnityEngine_UIElements_UIR_EntryPreProcessor_AllocSize_Fields)0x0) goto label_181dc365e;
          (**(code **)(*(longlong *)a + 0x278))(a);
        }
        if (__this_00 == (System_Runtime_Serialization_ObjectHolder_o *)0x0) goto label_181dc365e;
        System_Text_StringBuilder__set_Length((System_Text_StringBuilder_o *)__this_00,0,(MethodInfo *)0x0);
        a = (UnityEngine_UIElements_UIR_EntryPreProcessor_AllocSize_Fields)
            System_Collections_Generic_Stack_object___Peek
                      (__this,(MethodInfo_CFBFE0 *)MethodInfo_System_Collections_Generic_Stack_JSONNode_Peek);
        index = index + 1;
        goto label_181dc2f90;
      }
    }
    else if (uVar4 == 0x7d) {
label_181dc311d:
      if (!bVar3) {
        if (__this == (System_Collections_Generic_Stack_EntryPreProcessor_AllocSize__o *)0x0)
        goto label_181dc365e;
        if ((__this->fields)._size == 0) {
          pIVar7 = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
          pSVar8 = (System_Exception_o *)il2cpp_codegen_object_new(pIVar7);
          pSVar6 = il2cpp_codegen_get_runtime_metadata(&"JSON Parse: Too many closing brackets");
          System_Exception___ctor_1b6abf0(pSVar8,pSVar6,(MethodInfo *)0x0);
          pMVar9 = il2cpp_codegen_get_runtime_metadata(&MethodInfo_SimpleJSONFixed_JSONNode_Parse);
          il2cpp_codegen_raise_exception((Il2CppObject *)pSVar8,pMVar9);
        }
        System_Collections_Generic_Stack_object___Pop
                  ((System_Collections_Generic_Stack_object__o *)__this,
                   (MethodInfo_CFC370 *)MethodInfo_System_Collections_Generic_Stack_JSONNode_Pop);
        if (__this_00 == (System_Runtime_Serialization_ObjectHolder_o *)0x0) goto label_181dc365e;
        iVar5 = System_Text_StringBuilder__get_Length
                          (__this_00,(MethodInfo *)0x0);
        if (0 < iVar5 || bVar2) {
          pSVar6 = (System_String_o *)
                   (*(__this_00->klass->vtable)._3_ToString.methodPtr)
                             (__this_00,(__this_00->klass->vtable)._3_ToString.method);
          if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
          }
          SimpleJSONFixed_JSONNode__ParseElement(pSVar6,bVar2,(MethodInfo *)0x0);
          if (a == (UnityEngine_UIElements_UIR_EntryPreProcessor_AllocSize_Fields)0x0) goto label_181dc365e;
          (**(code **)(*(longlong *)a + 0x278))(a);
        }
        if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
        }
        bVar2 = SimpleJSONFixed_JSONNode__op_Inequality
                          ((SimpleJSONFixed_JSONNode_o *)a,(Il2CppObject *)0x0,(MethodInfo *)0x0);
        if (bVar2) {
          if (a == (UnityEngine_UIElements_UIR_EntryPreProcessor_AllocSize_Fields)0x0) goto label_181dc365e;
          (**(code **)(*(longlong *)a + 0x268))(a);
        }
        bVar2 = false;
        System_Text_StringBuilder__set_Length((System_Text_StringBuilder_o *)__this_00,0,(MethodInfo *)0x0);
        if ((__this->fields)._size < 1) goto label_181dc329f;
        a = (UnityEngine_UIElements_UIR_EntryPreProcessor_AllocSize_Fields)
            System_Collections_Generic_Stack_object___Peek
                      (__this,(MethodInfo_CFBFE0 *)MethodInfo_System_Collections_Generic_Stack_JSONNode_Peek);
        index = index + 1;
        goto label_181dc2f90;
      }
    }
    else if (uVar4 == 0xfeff) {
label_181dc329f:
      index = iVar10 + 1;
      goto label_181dc2f90;
    }
label_181dc3533:
    uVar4 = System_String__get_Chars(aJSON,index,(MethodInfo *)0x0);
    if (__this_00 == (System_Runtime_Serialization_ObjectHolder_o *)0x0) goto label_181dc365e;
    System_Text_StringBuilder__Append_197e090
              ((System_Text_StringBuilder_o *)__this_00,uVar4,(MethodInfo *)0x0);
    index = index + 1;
    goto label_181dc2f90;
  }
label_181dc365e:
  ThrowNullReferenceException();
label_181dc357c:
  if (bVar3) {
    pIVar7 = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
    pSVar8 = (System_Exception_o *)il2cpp_codegen_object_new(pIVar7);
    pSVar6 = il2cpp_codegen_get_runtime_metadata(&"JSON Parse: Quotation marks seems to be messed up.");
    System_Exception___ctor_1b6abf0(pSVar8,pSVar6,(MethodInfo *)0x0);
    pMVar9 = il2cpp_codegen_get_runtime_metadata(&MethodInfo_SimpleJSONFixed_JSONNode_Parse);
    il2cpp_codegen_raise_exception((Il2CppObject *)pSVar8,pMVar9);
  }
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  bVar3 = SimpleJSONFixed_JSONNode__op_Equality
                    ((SimpleJSONFixed_JSONNode_o *)a,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if (bVar3) {
    if (__this_00 == (System_Runtime_Serialization_ObjectHolder_o *)0x0) goto label_181dc365e;
    pSVar6 = (System_String_o *)
             (*(__this_00->klass->vtable)._3_ToString.methodPtr)
                       (__this_00,(__this_00->klass->vtable)._3_ToString.method);
    if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
    }
    a = (UnityEngine_UIElements_UIR_EntryPreProcessor_AllocSize_Fields)
        SimpleJSONFixed_JSONNode__ParseElement(pSVar6,bVar2,(MethodInfo *)0x0);
  }
  return (SimpleJSONFixed_JSONNode_o *)a;
}


// SimpleJSONFixed.JSONNode$$.ctor
// il2cpp: void SimpleJSONFixed_JSONNode___ctor (SimpleJSONFixed_JSONNode_o* __this, const MethodInfo* method);
// 0x18054c890

void
SimpleJSONFixed_JSONNode___ctor(SimpleJSONFixed_JSONNode_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// SimpleJSONFixed.JSONNode$$.cctor
// il2cpp: void SimpleJSONFixed_JSONNode___cctor (const MethodInfo* method);
// 0x181dc3800

void SimpleJSONFixed_JSONNode___cctor(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184344982 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    Il2CppMethodInitialized_184344982 = '\x01';
  }
  TypeInfo_SimpleJSONFixed_JSONNode->static_fields->forceASCII = false;
  TypeInfo_SimpleJSONFixed_JSONNode->static_fields->longAsString = true;
  TypeInfo_SimpleJSONFixed_JSONNode->static_fields->allowLineComments = true;
  return;
}


