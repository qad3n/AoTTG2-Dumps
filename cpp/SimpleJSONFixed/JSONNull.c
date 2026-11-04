// Type: SimpleJSONFixed.JSONNull
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/SimpleJSONFixed/JSONNull.cs
// Prior real C# source (older reference): Assets/Scripts/Utility/SimpleJSON.cs
// --------------------------------

// SimpleJSONFixed.JSONNull$$CreateOrGet
// il2cpp: SimpleJSONFixed_JSONNull_o* SimpleJSONFixed_JSONNull__CreateOrGet (const MethodInfo* method);
// 0x181dc5020

SimpleJSONFixed_JSONNull_o * SimpleJSONFixed_JSONNull__CreateOrGet(MethodInfo *method)

{
  SimpleJSONFixed_JSONNull_o *__this;
  
  if (Il2CppMethodInitialized_1843449cd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNull);
    Il2CppMethodInitialized_1843449cd = '\x01';
  }
  if ((TypeInfo_SimpleJSONFixed_JSONNull->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNull);
  }
  if (TypeInfo_SimpleJSONFixed_JSONNull->static_fields->reuseSameInstance == false) {
    __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNull);
    if (Il2CppMethodInitialized_1843449ce == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
      Il2CppMethodInitialized_1843449ce = '\x01';
    }
    if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
    }
    System_Object___ctor
              ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
    return __this;
  }
  if ((TypeInfo_SimpleJSONFixed_JSONNull->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNull);
  }
  return TypeInfo_SimpleJSONFixed_JSONNull->static_fields->m_StaticInstance;
}


// SimpleJSONFixed.JSONNull$$.ctor
// il2cpp: void SimpleJSONFixed_JSONNull___ctor (SimpleJSONFixed_JSONNull_o* __this, const MethodInfo* method);
// 0x181dc5280

void SimpleJSONFixed_JSONNull___ctor(SimpleJSONFixed_JSONNull_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_1843449ce == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    Il2CppMethodInitialized_1843449ce = '\x01';
  }
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// SimpleJSONFixed.JSONNull$$get_Tag
// il2cpp: int32_t SimpleJSONFixed_JSONNull__get_Tag (SimpleJSONFixed_JSONNull_o* __this, const MethodInfo* method);
// 0x1808680a0

int32_t
SimpleJSONFixed_JSONNull__get_Tag(SimpleJSONFixed_JSONNull_o* __this, MethodInfo* method)

{
  return 5;
}


// SimpleJSONFixed.JSONNull$$get_IsNull
// il2cpp: bool SimpleJSONFixed_JSONNull__get_IsNull (SimpleJSONFixed_JSONNull_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
SimpleJSONFixed_JSONNull__get_IsNull(SimpleJSONFixed_JSONNull_o* __this, MethodInfo* method)

{
  return true;
}


// SimpleJSONFixed.JSONNull$$GetEnumerator
// il2cpp: SimpleJSONFixed_JSONNode_Enumerator_o SimpleJSONFixed_JSONNull__GetEnumerator (SimpleJSONFixed_JSONNull_o* __this, const MethodInfo* method);
// 0x181dc13a0

SimpleJSONFixed_JSONNode_Enumerator_o
SimpleJSONFixed_JSONNull__GetEnumerator(SimpleJSONFixed_JSONNull_o* __this, MethodInfo* method)

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


// SimpleJSONFixed.JSONNull$$get_Value
// il2cpp: System_String_o* SimpleJSONFixed_JSONNull__get_Value (SimpleJSONFixed_JSONNull_o* __this, const MethodInfo* method);
// 0x181dc52d0

System_String_o * SimpleJSONFixed_JSONNull__get_Value(SimpleJSONFixed_JSONNull_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_1843449cf == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"null");
    Il2CppMethodInitialized_1843449cf = '\x01';
  }
  return "null";
}


// SimpleJSONFixed.JSONNull$$set_Value
// il2cpp: void SimpleJSONFixed_JSONNull__set_Value (SimpleJSONFixed_JSONNull_o* __this, System_String_o* value, const MethodInfo* method);
// 0x180547020

void
SimpleJSONFixed_JSONNull__set_Value(SimpleJSONFixed_JSONNull_o* __this, System_String_o* value, MethodInfo* method)

{
  return;
}


// SimpleJSONFixed.JSONNull$$get_AsBool
// il2cpp: bool SimpleJSONFixed_JSONNull__get_AsBool (SimpleJSONFixed_JSONNull_o* __this, const MethodInfo* method);
// 0x180668280

bool
SimpleJSONFixed_JSONNull__get_AsBool(SimpleJSONFixed_JSONNull_o* __this, MethodInfo* method)

{
  return false;
}


// SimpleJSONFixed.JSONNull$$set_AsBool
// il2cpp: void SimpleJSONFixed_JSONNull__set_AsBool (SimpleJSONFixed_JSONNull_o* __this, bool value, const MethodInfo* method);
// 0x180547020

void
SimpleJSONFixed_JSONNull__set_AsBool(SimpleJSONFixed_JSONNull_o* __this, bool value, MethodInfo* method)

{
  return;
}


// SimpleJSONFixed.JSONNull$$Clone
// il2cpp: SimpleJSONFixed_JSONNode_o* SimpleJSONFixed_JSONNull__Clone (SimpleJSONFixed_JSONNull_o* __this, const MethodInfo* method);
// 0x181dc4fe0

SimpleJSONFixed_JSONNode_o *
SimpleJSONFixed_JSONNull__Clone(SimpleJSONFixed_JSONNull_o *__this,MethodInfo *method)

{
  SimpleJSONFixed_JSONNode_o *pSVar1;
  
  if (Il2CppMethodInitialized_1843449d0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNull);
    Il2CppMethodInitialized_1843449d0 = '\x01';
  }
  if ((TypeInfo_SimpleJSONFixed_JSONNull->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNull);
  }
  pSVar1 = (SimpleJSONFixed_JSONNode_o *)SimpleJSONFixed_JSONNull__CreateOrGet((MethodInfo *)0x0);
  return pSVar1;
}


// SimpleJSONFixed.JSONNull$$Equals
// il2cpp: bool SimpleJSONFixed_JSONNull__Equals (SimpleJSONFixed_JSONNull_o* __this, Il2CppObject* obj, const MethodInfo* method);
// 0x181dc50f0

bool SimpleJSONFixed_JSONNull__Equals(SimpleJSONFixed_JSONNull_o *__this,Il2CppObject *obj,MethodInfo *method)

{
  byte bVar1;
  bool bVar2;
  Il2CppObject *pIVar3;
  
  if (Il2CppMethodInitialized_1843449d1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNull);
    Il2CppMethodInitialized_1843449d1 = '\x01';
  }
  if ((Il2CppObject *)__this != obj) {
    pIVar3 = (Il2CppObject *)0x0;
    if (obj != (Il2CppObject *)0x0) {
      bVar1 = (TypeInfo_SimpleJSONFixed_JSONNull->_2).typeHierarchyDepth;
      if (((obj->klass->_2).typeHierarchyDepth < bVar1) ||
         (bVar2 = true,
         (obj->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
         (Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNull)) {
        bVar2 = false;
      }
      if (bVar2) {
        pIVar3 = obj;
      }
    }
    return pIVar3 != (Il2CppObject *)0x0;
  }
  return true;
}


// SimpleJSONFixed.JSONNull$$GetHashCode
// il2cpp: int32_t SimpleJSONFixed_JSONNull__GetHashCode (SimpleJSONFixed_JSONNull_o* __this, const MethodInfo* method);
// 0x18059b2e0

int32_t
SimpleJSONFixed_JSONNull__GetHashCode(SimpleJSONFixed_JSONNull_o* __this, MethodInfo* method)

{
  return (Unity_Collections_AllocatorManager_TryFunction_o *)0x0;
}


// SimpleJSONFixed.JSONNull$$WriteToStringBuilder
// il2cpp: void SimpleJSONFixed_JSONNull__WriteToStringBuilder (SimpleJSONFixed_JSONNull_o* __this, System_Text_StringBuilder_o* aSB, int32_t aIndent, int32_t aIndentInc, int32_t aMode, const MethodInfo* method);
// 0x181dc5180

void SimpleJSONFixed_JSONNull__WriteToStringBuilder
               (SimpleJSONFixed_JSONNull_o *__this,System_Text_StringBuilder_o *aSB,int32_t aIndent,
               int32_t aIndentInc,int32_t aMode,MethodInfo *method)

{
  if (Il2CppMethodInitialized_1843449d2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"null");
    Il2CppMethodInitialized_1843449d2 = '\x01';
  }
  if (aSB != (System_Text_StringBuilder_o *)0x0) {
    System_Text_StringBuilder__Append_197dca0(aSB,"null",(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// SimpleJSONFixed.JSONNull$$.cctor
// il2cpp: void SimpleJSONFixed_JSONNull___cctor (const MethodInfo* method);
// 0x181dc51d0

void SimpleJSONFixed_JSONNull___cctor(MethodInfo *method)

{
  SimpleJSONFixed_JSONNull_o *__this;
  
  if (Il2CppMethodInitialized_1843449d3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNull);
    Il2CppMethodInitialized_1843449d3 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNull);
  if (Il2CppMethodInitialized_1843449ce == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    Il2CppMethodInitialized_1843449ce = '\x01';
  }
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  TypeInfo_SimpleJSONFixed_JSONNull->static_fields->m_StaticInstance = __this;
  Il2CppCodeGenWriteBarrier(&TypeInfo_SimpleJSONFixed_JSONNull->static_fields->m_StaticInstance,__this);
  TypeInfo_SimpleJSONFixed_JSONNull->static_fields->reuseSameInstance = true;
  return;
}


