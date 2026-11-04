// Type: SimpleJSONFixed.JSONBool
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/SimpleJSONFixed/JSONBool.cs
// Prior real C# source (older reference): Assets/Scripts/Utility/SimpleJSON.cs
// --------------------------------

// SimpleJSONFixed.JSONBool$$get_Tag
// il2cpp: int32_t SimpleJSONFixed_JSONBool__get_Tag (SimpleJSONFixed_JSONBool_o* __this, const MethodInfo* method);
// 0x180868060

int32_t
SimpleJSONFixed_JSONBool__get_Tag(SimpleJSONFixed_JSONBool_o* __this, MethodInfo* method)

{
  return 6;
}


// SimpleJSONFixed.JSONBool$$get_IsBoolean
// il2cpp: bool SimpleJSONFixed_JSONBool__get_IsBoolean (SimpleJSONFixed_JSONBool_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
SimpleJSONFixed_JSONBool__get_IsBoolean(SimpleJSONFixed_JSONBool_o* __this, MethodInfo* method)

{
  return true;
}


// SimpleJSONFixed.JSONBool$$GetEnumerator
// il2cpp: SimpleJSONFixed_JSONNode_Enumerator_o SimpleJSONFixed_JSONBool__GetEnumerator (SimpleJSONFixed_JSONBool_o* __this, const MethodInfo* method);
// 0x181dc13a0

SimpleJSONFixed_JSONNode_Enumerator_o
SimpleJSONFixed_JSONBool__GetEnumerator(SimpleJSONFixed_JSONBool_o* __this, MethodInfo* method)

{
  *(undefined8 *)&__return_storage_ptr__->fields = 0;
  (__return_storage_ptr__->fields).m_Object.fields._dictionary =
       (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  (__return_storage_ptr__->fields).m_Object.fields._version = 0;
  (__return_storage_ptr__->fields).m_Object.fields._index = 0;
  (__return_storage_ptr__->fields).m_Object.fields._current.fields.key = (Il2CppObject *)0x0;
  (__return_storage_ptr__->fields).m_Object.fields._current.fields.value = (Il2CppObject *)0x0;
  *(undefined8 *)&(__return_storage_ptr__->fields).m_Object.fields._getEnumeratorRetType = 0;
  (__return_storage_ptr__->fields).m_Array.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  (__return_storage_ptr__->fields).m_Array.fields._index = 0;
  (__return_storage_ptr__->fields).m_Array.fields._version = 0;
  (__return_storage_ptr__->fields).m_Array.fields._current = (SimpleJSONFixed_JSONNode_o *)0x0;
  return __return_storage_ptr__;
}


// SimpleJSONFixed.JSONBool$$get_Value
// il2cpp: System_String_o* SimpleJSONFixed_JSONBool__get_Value (SimpleJSONFixed_JSONBool_o* __this, const MethodInfo* method);
// 0x181dc1530

System_String_o * SimpleJSONFixed_JSONBool__get_Value(SimpleJSONFixed_JSONBool_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if ((g_data_184354de8->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_184354de8);
  }
  pSVar1 = System_Boolean__ToString(&(__this->fields).m_Data,(MethodInfo *)0x0);
  return pSVar1;
}


// SimpleJSONFixed.JSONBool$$set_Value
// il2cpp: void SimpleJSONFixed_JSONBool__set_Value (SimpleJSONFixed_JSONBool_o* __this, System_String_o* value, const MethodInfo* method);
// 0x181dc1560

void SimpleJSONFixed_JSONBool__set_Value
               (SimpleJSONFixed_JSONBool_o *__this,System_String_o *value,MethodInfo *method)

{
  bool bVar1;
  SimpleJSONFixed_JSONBool_Fields local_res10 [24];
  
  local_res10[0].m_Data = false;
  if ((g_data_184354de8->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_184354de8);
  }
  bVar1 = System_Boolean__TryParse(value,&local_res10[0].m_Data,(MethodInfo *)0x0);
  if (bVar1) {
    (__this->fields).m_Data = local_res10[0].m_Data;
  }
  return;
}


// SimpleJSONFixed.JSONBool$$get_AsBool
// il2cpp: bool SimpleJSONFixed_JSONBool__get_AsBool (SimpleJSONFixed_JSONBool_o* __this, const MethodInfo* method);
// 0x180e5a320

bool
SimpleJSONFixed_JSONBool__get_AsBool(SimpleJSONFixed_JSONBool_o* __this, MethodInfo* method)

{
  return (__this->fields).m_Data;
}


// SimpleJSONFixed.JSONBool$$set_AsBool
// il2cpp: void SimpleJSONFixed_JSONBool__set_AsBool (SimpleJSONFixed_JSONBool_o* __this, bool value, const MethodInfo* method);
// 0x1811124d0

void
SimpleJSONFixed_JSONBool__set_AsBool(SimpleJSONFixed_JSONBool_o* __this, bool value, MethodInfo* method)

{
  (__this->fields).m_Data = value;
  return;
}


// SimpleJSONFixed.JSONBool$$.ctor
// il2cpp: void SimpleJSONFixed_JSONBool___ctor (SimpleJSONFixed_JSONBool_o* __this, bool aData, const MethodInfo* method);
// 0x181dc1460

void SimpleJSONFixed_JSONBool___ctor(SimpleJSONFixed_JSONBool_o *__this,bool aData,MethodInfo *method)

{
  if (Il2CppMethodInitialized_1843449c9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    Il2CppMethodInitialized_1843449c9 = '\x01';
  }
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  (__this->fields).m_Data = aData;
  return;
}


// SimpleJSONFixed.JSONBool$$.ctor
// il2cpp: void SimpleJSONFixed_JSONBool___ctor (SimpleJSONFixed_JSONBool_o* __this, System_String_o* aData, const MethodInfo* method);
// 0x181dc14c0

void SimpleJSONFixed_JSONBool___ctor_1dc14c0
               (SimpleJSONFixed_JSONBool_o *__this,System_String_o *aData,MethodInfo *method)

{
  if (Il2CppMethodInitialized_1843449ca == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    Il2CppMethodInitialized_1843449ca = '\x01';
  }
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  (*(__this->klass->vtable)._10_set_Value.methodPtr)
            (__this,aData,(__this->klass->vtable)._10_set_Value.method);
  return;
}


// SimpleJSONFixed.JSONBool$$Clone
// il2cpp: SimpleJSONFixed_JSONNode_o* SimpleJSONFixed_JSONBool__Clone (SimpleJSONFixed_JSONBool_o* __this, const MethodInfo* method);
// 0x181dc12b0

SimpleJSONFixed_JSONNode_o *
SimpleJSONFixed_JSONBool__Clone(SimpleJSONFixed_JSONBool_o *__this,MethodInfo *method)

{
  bool bVar1;
  SimpleJSONFixed_JSONBool_o *__this_00;
  
  if (Il2CppMethodInitialized_1843449cb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONBool);
    Il2CppMethodInitialized_1843449cb = '\x01';
  }
  bVar1 = (__this->fields).m_Data;
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONBool);
  if (Il2CppMethodInitialized_1843449c9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    Il2CppMethodInitialized_1843449c9 = '\x01';
  }
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).m_Data = bVar1;
  return (SimpleJSONFixed_JSONNode_o *)__this_00;
}


// SimpleJSONFixed.JSONBool$$WriteToStringBuilder
// il2cpp: void SimpleJSONFixed_JSONBool__WriteToStringBuilder (SimpleJSONFixed_JSONBool_o* __this, System_Text_StringBuilder_o* aSB, int32_t aIndent, int32_t aIndentInc, int32_t aMode, const MethodInfo* method);
// 0x181dc13f0

void SimpleJSONFixed_JSONBool__WriteToStringBuilder
               (SimpleJSONFixed_JSONBool_o *__this,System_Text_StringBuilder_o *aSB,int32_t aIndent,
               int32_t aIndentInc,int32_t aMode,MethodInfo *method)

{
  System_String_o *value;
  
  if (Il2CppMethodInitialized_1843449cc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"false");
    il2cpp_codegen_initialize_runtime_metadata(&"true");
    Il2CppMethodInitialized_1843449cc = '\x01';
  }
  value = "false";
  if ((__this->fields).m_Data != false) {
    value = "true";
  }
  if (aSB != (System_Text_StringBuilder_o *)0x0) {
    System_Text_StringBuilder__Append_197dca0(aSB,value,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// SimpleJSONFixed.JSONBool$$Equals
// il2cpp: bool SimpleJSONFixed_JSONBool__Equals (SimpleJSONFixed_JSONBool_o* __this, Il2CppObject* obj, const MethodInfo* method);
// 0x181dc1340

bool SimpleJSONFixed_JSONBool__Equals(SimpleJSONFixed_JSONBool_o *__this,Il2CppObject *obj,MethodInfo *method)

{
  bool bVar1;
  Il2CppObject *pIVar2;
  char *pcVar3;
  
  if (obj != (Il2CppObject *)0x0) {
    pIVar2 = (Il2CppObject *)0x0;
    if (obj->klass == g_data_184354de8) {
      pIVar2 = obj;
    }
    if (pIVar2 != (Il2CppObject *)0x0) {
      if ((obj->klass->_1).element_class == (g_data_184354de8->_1).element_class) {
        bVar1 = (__this->fields).m_Data;
        pcVar3 = il2cpp_object_unbox(obj);
        return bVar1 == (bool)*pcVar3;
      }
      il2cpp_codegen_raise_invalid_cast_exception();
    }
  }
  return false;
}


// SimpleJSONFixed.JSONBool$$GetHashCode
// il2cpp: int32_t SimpleJSONFixed_JSONBool__GetHashCode (SimpleJSONFixed_JSONBool_o* __this, const MethodInfo* method);
// 0x181dc13c0

int32_t SimpleJSONFixed_JSONBool__GetHashCode(SimpleJSONFixed_JSONBool_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  
  if ((g_data_184354de8->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_184354de8);
  }
  iVar1 = System_Boolean__GetHashCode(&(__this->fields).m_Data,(MethodInfo *)0x0);
  return iVar1;
}


// SimpleJSONFixed.JSONBool$$Clear
// il2cpp: void SimpleJSONFixed_JSONBool__Clear (SimpleJSONFixed_JSONBool_o* __this, const MethodInfo* method);
// 0x181c6f5d0

void
SimpleJSONFixed_JSONBool__Clear(SimpleJSONFixed_JSONBool_o* __this, MethodInfo* method)

{
  (__this->fields).m_Data = false;
  return;
}


