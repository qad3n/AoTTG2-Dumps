// Type: SimpleJSONFixed.JSONLazyCreator
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/SimpleJSONFixed/JSONLazyCreator.cs
// Prior real C# source (older reference): Assets/Scripts/Utility/SimpleJSON.cs
// --------------------------------

// SimpleJSONFixed.JSONLazyCreator$$get_Tag
// il2cpp: int32_t SimpleJSONFixed_JSONLazyCreator__get_Tag (SimpleJSONFixed_JSONLazyCreator_o* __this, const MethodInfo* method);
// 0x18106dd80

int32_t
SimpleJSONFixed_JSONLazyCreator__get_Tag(SimpleJSONFixed_JSONLazyCreator_o* __this, MethodInfo* method)

{
  return 7;
}


// SimpleJSONFixed.JSONLazyCreator$$GetEnumerator
// il2cpp: SimpleJSONFixed_JSONNode_Enumerator_o SimpleJSONFixed_JSONLazyCreator__GetEnumerator (SimpleJSONFixed_JSONLazyCreator_o* __this, const MethodInfo* method);
// 0x181dc13a0

SimpleJSONFixed_JSONNode_Enumerator_o *
SimpleJSONFixed_JSONLazyCreator__GetEnumerator
          (SimpleJSONFixed_JSONNode_Enumerator_o *__return_storage_ptr__,
          SimpleJSONFixed_JSONLazyCreator_o *__this,MethodInfo *method)

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


// SimpleJSONFixed.JSONLazyCreator$$.ctor
// il2cpp: void SimpleJSONFixed_JSONLazyCreator___ctor (SimpleJSONFixed_JSONLazyCreator_o* __this, SimpleJSONFixed_JSONNode_o* aNode, const MethodInfo* method);
// 0x181dc17f0

void SimpleJSONFixed_JSONLazyCreator___ctor
               (SimpleJSONFixed_JSONLazyCreator_o *__this,SimpleJSONFixed_JSONNode_o *aNode,MethodInfo *method
               )

{
  if (Il2CppMethodInitialized_1843449d4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    Il2CppMethodInitialized_1843449d4 = '\x01';
  }
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  (__this->fields).m_Node = aNode;
  Il2CppCodeGenWriteBarrier(&(__this->fields).m_Node,aNode);
  (__this->fields).m_Key = (System_String_o *)0x0;
  Il2CppCodeGenWriteBarrier(&(__this->fields).m_Key,(void *)0x0);
  return;
}


// SimpleJSONFixed.JSONLazyCreator$$.ctor
// il2cpp: void SimpleJSONFixed_JSONLazyCreator___ctor (SimpleJSONFixed_JSONLazyCreator_o* __this, SimpleJSONFixed_JSONNode_o* aNode, System_String_o* aKey, const MethodInfo* method);
// 0x181dc1760

void SimpleJSONFixed_JSONLazyCreator___ctor_1dc1760
               (SimpleJSONFixed_JSONLazyCreator_o *__this,SimpleJSONFixed_JSONNode_o *aNode,
               System_String_o *aKey,MethodInfo *method)

{
  if (Il2CppMethodInitialized_1843449d5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    Il2CppMethodInitialized_1843449d5 = '\x01';
  }
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  (__this->fields).m_Node = aNode;
  Il2CppCodeGenWriteBarrier(&(__this->fields).m_Node,aNode);
  (__this->fields).m_Key = aKey;
  Il2CppCodeGenWriteBarrier(&(__this->fields).m_Key,aKey);
  return;
}


// SimpleJSONFixed.JSONLazyCreator$$Set<object>
// il2cpp: Il2CppObject* SimpleJSONFixed_JSONLazyCreator__Set_object_ (SimpleJSONFixed_JSONLazyCreator_o* __this, Il2CppObject* aVal, const MethodInfo_7135C0* method);
// 0x1807135c0

Il2CppObject *
SimpleJSONFixed_JSONLazyCreator__Set_object_
          (SimpleJSONFixed_JSONLazyCreator_o *__this,Il2CppObject *aVal,MethodInfo_7135C0 *method)

{
  SimpleJSONFixed_JSONNode_o *pSVar1;
  SimpleJSONFixed_JSONNode_c *pSVar2;
  
  pSVar1 = (__this->fields).m_Node;
  if (pSVar1 != (SimpleJSONFixed_JSONNode_o *)0x0) {
    pSVar2 = pSVar1->klass;
    if ((__this->fields).m_Key == (System_String_o *)0x0) {
      (*(pSVar2->vtable)._21_Add.methodPtr)
                (pSVar1,(SimpleJSONFixed_JSONNode_o *)aVal,(pSVar2->vtable)._21_Add.method);
    }
    else {
      (*(pSVar2->vtable)._20_Add.methodPtr)(pSVar1,(System_Type_o *)(__this->fields).m_Key,(MethodInfo *)aVal)
      ;
    }
    (__this->fields).m_Node = (SimpleJSONFixed_JSONNode_o *)0x0;
    Il2CppCodeGenWriteBarrier(&(__this->fields).m_Node,(void *)0x0);
    return aVal;
  }
  ThrowNullReferenceException();
}


// SimpleJSONFixed.JSONLazyCreator$$get_Item
// il2cpp: SimpleJSONFixed_JSONNode_o* SimpleJSONFixed_JSONLazyCreator__get_Item (SimpleJSONFixed_JSONLazyCreator_o* __this, int32_t aIndex, const MethodInfo* method);
// 0x181dc1f30

SimpleJSONFixed_JSONNode_o *
SimpleJSONFixed_JSONLazyCreator__get_Item
          (SimpleJSONFixed_JSONLazyCreator_o *__this,int32_t aIndex,MethodInfo *method)

{
  SimpleJSONFixed_JSONLazyCreator_o *__this_00;
  
  if (Il2CppMethodInitialized_1843449d6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONLazyCreator);
    Il2CppMethodInitialized_1843449d6 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONLazyCreator);
  SimpleJSONFixed_JSONLazyCreator___ctor(__this_00,(SimpleJSONFixed_JSONNode_o *)__this,(MethodInfo *)0x0);
  return (SimpleJSONFixed_JSONNode_o *)__this_00;
}


// SimpleJSONFixed.JSONLazyCreator$$set_Item
// il2cpp: void SimpleJSONFixed_JSONLazyCreator__set_Item (SimpleJSONFixed_JSONLazyCreator_o* __this, int32_t aIndex, SimpleJSONFixed_JSONNode_o* value, const MethodInfo* method);
// 0x181dc26d0

void SimpleJSONFixed_JSONLazyCreator__set_Item
               (SimpleJSONFixed_JSONLazyCreator_o *__this,int32_t aIndex,SimpleJSONFixed_JSONNode_o *value,
               MethodInfo *method)

{
  SimpleJSONFixed_JSONArray_o *pSVar1;
  
  if (Il2CppMethodInitialized_1843449d7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONArray);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_SimpleJSONFixed_JSONLazyCreator_Set_JSONArray);
    Il2CppMethodInitialized_1843449d7 = '\x01';
  }
  pSVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONArray);
  SimpleJSONFixed_JSONArray___ctor(pSVar1,(MethodInfo *)0x0);
  pSVar1 = SimpleJSONFixed_JSONLazyCreator__Set_object_
                     (__this,(Il2CppObject *)pSVar1,
                      (MethodInfo_7135C0 *)MethodInfo_SimpleJSONFixed_JSONLazyCreator_Set_JSONArray);
  if (pSVar1 != (SimpleJSONFixed_JSONArray_o *)0x0) {
    (*(pSVar1->klass->vtable)._21_Add.methodPtr)(pSVar1,value,(pSVar1->klass->vtable)._21_Add.method);
    return;
  }
  ThrowNullReferenceException();
}


// SimpleJSONFixed.JSONLazyCreator$$get_Item
// il2cpp: SimpleJSONFixed_JSONNode_o* SimpleJSONFixed_JSONLazyCreator__get_Item (SimpleJSONFixed_JSONLazyCreator_o* __this, System_String_o* aKey, const MethodInfo* method);
// 0x181dc1f90

SimpleJSONFixed_JSONNode_o *
SimpleJSONFixed_JSONLazyCreator__get_Item_1dc1f90
          (SimpleJSONFixed_JSONLazyCreator_o *__this,System_String_o *aKey,MethodInfo *method)

{
  SimpleJSONFixed_JSONLazyCreator_o *__this_00;
  
  if (Il2CppMethodInitialized_1843449d8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONLazyCreator);
    Il2CppMethodInitialized_1843449d8 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONLazyCreator);
  SimpleJSONFixed_JSONLazyCreator___ctor_1dc1760
            (__this_00,(SimpleJSONFixed_JSONNode_o *)__this,aKey,(MethodInfo *)0x0);
  return (SimpleJSONFixed_JSONNode_o *)__this_00;
}


// SimpleJSONFixed.JSONLazyCreator$$set_Item
// il2cpp: void SimpleJSONFixed_JSONLazyCreator__set_Item (SimpleJSONFixed_JSONLazyCreator_o* __this, System_String_o* aKey, SimpleJSONFixed_JSONNode_o* value, const MethodInfo* method);
// 0x181dc2630

void SimpleJSONFixed_JSONLazyCreator__set_Item_1dc2630
               (SimpleJSONFixed_JSONLazyCreator_o *__this,System_String_o *aKey,
               SimpleJSONFixed_JSONNode_o *value,MethodInfo *method)

{
  SimpleJSONFixed_JSONObject_o *pSVar1;
  
  if (Il2CppMethodInitialized_1843449d9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_SimpleJSONFixed_JSONLazyCreator_Set_JSONObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONObject);
    Il2CppMethodInitialized_1843449d9 = '\x01';
  }
  pSVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONObject);
  SimpleJSONFixed_JSONObject___ctor(pSVar1,(MethodInfo *)0x0);
  pSVar1 = SimpleJSONFixed_JSONLazyCreator__Set_object_
                     (__this,(Il2CppObject *)pSVar1,
                      (MethodInfo_7135C0 *)MethodInfo_SimpleJSONFixed_JSONLazyCreator_Set_JSONObject);
  if (pSVar1 != (SimpleJSONFixed_JSONObject_o *)0x0) {
    (*(pSVar1->klass->vtable)._20_Add.methodPtr)(pSVar1,aKey,value,(pSVar1->klass->vtable)._20_Add.method);
    return;
  }
  ThrowNullReferenceException();
}


// SimpleJSONFixed.JSONLazyCreator$$Add
// il2cpp: void SimpleJSONFixed_JSONLazyCreator__Add (SimpleJSONFixed_JSONLazyCreator_o* __this, SimpleJSONFixed_JSONNode_o* aItem, const MethodInfo* method);
// 0x181dc1660

void SimpleJSONFixed_JSONLazyCreator__Add
               (SimpleJSONFixed_JSONLazyCreator_o *__this,SimpleJSONFixed_JSONNode_o *aItem,MethodInfo *method
               )

{
  SimpleJSONFixed_JSONArray_o *pSVar1;
  
  if (Il2CppMethodInitialized_1843449da == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONArray);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_SimpleJSONFixed_JSONLazyCreator_Set_JSONArray);
    Il2CppMethodInitialized_1843449da = '\x01';
  }
  pSVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONArray);
  SimpleJSONFixed_JSONArray___ctor(pSVar1,(MethodInfo *)0x0);
  pSVar1 = SimpleJSONFixed_JSONLazyCreator__Set_object_
                     (__this,(Il2CppObject *)pSVar1,
                      (MethodInfo_7135C0 *)MethodInfo_SimpleJSONFixed_JSONLazyCreator_Set_JSONArray);
  if (pSVar1 != (SimpleJSONFixed_JSONArray_o *)0x0) {
    (*(pSVar1->klass->vtable)._21_Add.methodPtr)(pSVar1,aItem,(pSVar1->klass->vtable)._21_Add.method);
    return;
  }
  ThrowNullReferenceException();
}


// SimpleJSONFixed.JSONLazyCreator$$Add
// il2cpp: void SimpleJSONFixed_JSONLazyCreator__Add (SimpleJSONFixed_JSONLazyCreator_o* __this, System_String_o* aKey, SimpleJSONFixed_JSONNode_o* aItem, const MethodInfo* method);
// 0x181dc15c0

void SimpleJSONFixed_JSONLazyCreator__Add_1dc15c0
               (SimpleJSONFixed_JSONLazyCreator_o *__this,System_String_o *aKey,
               SimpleJSONFixed_JSONNode_o *aItem,MethodInfo *method)

{
  SimpleJSONFixed_JSONObject_o *pSVar1;
  
  if (Il2CppMethodInitialized_1843449db == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_SimpleJSONFixed_JSONLazyCreator_Set_JSONObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONObject);
    Il2CppMethodInitialized_1843449db = '\x01';
  }
  pSVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONObject);
  SimpleJSONFixed_JSONObject___ctor(pSVar1,(MethodInfo *)0x0);
  pSVar1 = SimpleJSONFixed_JSONLazyCreator__Set_object_
                     (__this,(Il2CppObject *)pSVar1,
                      (MethodInfo_7135C0 *)MethodInfo_SimpleJSONFixed_JSONLazyCreator_Set_JSONObject);
  if (pSVar1 != (SimpleJSONFixed_JSONObject_o *)0x0) {
    (*(pSVar1->klass->vtable)._20_Add.methodPtr)(pSVar1,aKey,aItem,(pSVar1->klass->vtable)._20_Add.method);
    return;
  }
  ThrowNullReferenceException();
}


// SimpleJSONFixed.JSONLazyCreator$$op_Equality
// il2cpp: bool SimpleJSONFixed_JSONLazyCreator__op_Equality (SimpleJSONFixed_JSONLazyCreator_o* a, Il2CppObject* b, const MethodInfo* method);
// 0x181dc1700

bool
SimpleJSONFixed_JSONLazyCreator__op_Equality(SimpleJSONFixed_JSONLazyCreator_o* a, Il2CppObject* b, MethodInfo* method)

{
  if (obj != (Il2CppObject *)0x0) {
    return __this == (SimpleJSONFixed_JSONLazyCreator_o *)obj;
  }
  return true;
}


// SimpleJSONFixed.JSONLazyCreator$$op_Inequality
// il2cpp: bool SimpleJSONFixed_JSONLazyCreator__op_Inequality (SimpleJSONFixed_JSONLazyCreator_o* a, Il2CppObject* b, const MethodInfo* method);
// 0x181dc2000

bool SimpleJSONFixed_JSONLazyCreator__op_Inequality
               (SimpleJSONFixed_JSONLazyCreator_o *a,Il2CppObject *b,MethodInfo *method)

{
  if (b != (Il2CppObject *)0x0) {
    return a != (SimpleJSONFixed_JSONLazyCreator_o *)b;
  }
  return false;
}


// SimpleJSONFixed.JSONLazyCreator$$Equals
// il2cpp: bool SimpleJSONFixed_JSONLazyCreator__Equals (SimpleJSONFixed_JSONLazyCreator_o* __this, Il2CppObject* obj, const MethodInfo* method);
// 0x181dc1700

bool SimpleJSONFixed_JSONLazyCreator__Equals
               (SimpleJSONFixed_JSONLazyCreator_o *__this,Il2CppObject *obj,MethodInfo *method)

{
  if (obj != (Il2CppObject *)0x0) {
    return __this == (SimpleJSONFixed_JSONLazyCreator_o *)obj;
  }
  return true;
}


// SimpleJSONFixed.JSONLazyCreator$$GetHashCode
// il2cpp: int32_t SimpleJSONFixed_JSONLazyCreator__GetHashCode (SimpleJSONFixed_JSONLazyCreator_o* __this, const MethodInfo* method);
// 0x18059b2e0

int32_t
SimpleJSONFixed_JSONLazyCreator__GetHashCode(SimpleJSONFixed_JSONLazyCreator_o* __this, MethodInfo* method)

{
  return (Unity_Collections_AllocatorManager_TryFunction_o *)0x0;
}


// SimpleJSONFixed.JSONLazyCreator$$get_AsInt
// il2cpp: int32_t SimpleJSONFixed_JSONLazyCreator__get_AsInt (SimpleJSONFixed_JSONLazyCreator_o* __this, const MethodInfo* method);
// 0x181dc1af0

int32_t SimpleJSONFixed_JSONLazyCreator__get_AsInt
                  (SimpleJSONFixed_JSONLazyCreator_o *__this,MethodInfo *method)

{
  SimpleJSONFixed_JSONNumber_o *aVal;
  
  if (Il2CppMethodInitialized_1843449dc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_SimpleJSONFixed_JSONLazyCreator_Set_JSONNumber);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNumber);
    Il2CppMethodInitialized_1843449dc = '\x01';
  }
  aVal = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNumber);
  if (Il2CppMethodInitialized_1843449c4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    Il2CppMethodInitialized_1843449c4 = '\x01';
  }
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)aVal,(MethodInfo *)0x0);
  (aVal->fields).m_Data = 0.0;
  SimpleJSONFixed_JSONLazyCreator__Set_object_
            (__this,(Il2CppObject *)aVal,
             (MethodInfo_7135C0 *)MethodInfo_SimpleJSONFixed_JSONLazyCreator_Set_JSONNumber);
  return 0;
}


// SimpleJSONFixed.JSONLazyCreator$$set_AsInt
// il2cpp: void SimpleJSONFixed_JSONLazyCreator__set_AsInt (SimpleJSONFixed_JSONLazyCreator_o* __this, int32_t value, const MethodInfo* method);
// 0x181dc2230

void SimpleJSONFixed_JSONLazyCreator__set_AsInt
               (SimpleJSONFixed_JSONLazyCreator_o *__this,int32_t value,MethodInfo *method)

{
  SimpleJSONFixed_JSONNumber_o *aVal;
  
  if (Il2CppMethodInitialized_1843449dd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_SimpleJSONFixed_JSONLazyCreator_Set_JSONNumber);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNumber);
    Il2CppMethodInitialized_1843449dd = '\x01';
  }
  aVal = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNumber);
  if (Il2CppMethodInitialized_1843449c4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    Il2CppMethodInitialized_1843449c4 = '\x01';
  }
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)aVal,(MethodInfo *)0x0);
  (aVal->fields).m_Data = (double)value;
  SimpleJSONFixed_JSONLazyCreator__Set_object_
            (__this,(Il2CppObject *)aVal,
             (MethodInfo_7135C0 *)MethodInfo_SimpleJSONFixed_JSONLazyCreator_Set_JSONNumber);
  return;
}


// SimpleJSONFixed.JSONLazyCreator$$get_AsFloat
// il2cpp: float SimpleJSONFixed_JSONLazyCreator__get_AsFloat (SimpleJSONFixed_JSONLazyCreator_o* __this, const MethodInfo* method);
// 0x181dc1a40

float SimpleJSONFixed_JSONLazyCreator__get_AsFloat
                (SimpleJSONFixed_JSONLazyCreator_o *__this,MethodInfo *method)

{
  SimpleJSONFixed_JSONNumber_o *aVal;
  
  if (Il2CppMethodInitialized_1843449de == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_SimpleJSONFixed_JSONLazyCreator_Set_JSONNumber);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNumber);
    Il2CppMethodInitialized_1843449de = '\x01';
  }
  aVal = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNumber);
  if (Il2CppMethodInitialized_1843449c4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    Il2CppMethodInitialized_1843449c4 = '\x01';
  }
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)aVal,(MethodInfo *)0x0);
  (aVal->fields).m_Data = 0.0;
  SimpleJSONFixed_JSONLazyCreator__Set_object_
            (__this,(Il2CppObject *)aVal,
             (MethodInfo_7135C0 *)MethodInfo_SimpleJSONFixed_JSONLazyCreator_Set_JSONNumber);
  return 0.0;
}


// SimpleJSONFixed.JSONLazyCreator$$set_AsFloat
// il2cpp: void SimpleJSONFixed_JSONLazyCreator__set_AsFloat (SimpleJSONFixed_JSONLazyCreator_o* __this, float value, const MethodInfo* method);
// 0x181dc2170

void SimpleJSONFixed_JSONLazyCreator__set_AsFloat
               (SimpleJSONFixed_JSONLazyCreator_o *__this,float value,MethodInfo *method)

{
  SimpleJSONFixed_JSONNumber_o *aVal;
  
  if (Il2CppMethodInitialized_1843449df == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_SimpleJSONFixed_JSONLazyCreator_Set_JSONNumber);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNumber);
    Il2CppMethodInitialized_1843449df = '\x01';
  }
  aVal = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNumber);
  if (Il2CppMethodInitialized_1843449c4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    Il2CppMethodInitialized_1843449c4 = '\x01';
  }
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)aVal,(MethodInfo *)0x0);
  (aVal->fields).m_Data = (double)value;
  SimpleJSONFixed_JSONLazyCreator__Set_object_
            (__this,(Il2CppObject *)aVal,
             (MethodInfo_7135C0 *)MethodInfo_SimpleJSONFixed_JSONLazyCreator_Set_JSONNumber);
  return;
}


// SimpleJSONFixed.JSONLazyCreator$$get_AsDouble
// il2cpp: double SimpleJSONFixed_JSONLazyCreator__get_AsDouble (SimpleJSONFixed_JSONLazyCreator_o* __this, const MethodInfo* method);
// 0x181dc1990

double SimpleJSONFixed_JSONLazyCreator__get_AsDouble
                 (SimpleJSONFixed_JSONLazyCreator_o *__this,MethodInfo *method)

{
  SimpleJSONFixed_JSONNumber_o *aVal;
  
  if (Il2CppMethodInitialized_1843449e0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_SimpleJSONFixed_JSONLazyCreator_Set_JSONNumber);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNumber);
    Il2CppMethodInitialized_1843449e0 = '\x01';
  }
  aVal = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNumber);
  if (Il2CppMethodInitialized_1843449c4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    Il2CppMethodInitialized_1843449c4 = '\x01';
  }
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)aVal,(MethodInfo *)0x0);
  (aVal->fields).m_Data = 0.0;
  SimpleJSONFixed_JSONLazyCreator__Set_object_
            (__this,(Il2CppObject *)aVal,
             (MethodInfo_7135C0 *)MethodInfo_SimpleJSONFixed_JSONLazyCreator_Set_JSONNumber);
  return 0.0;
}


// SimpleJSONFixed.JSONLazyCreator$$set_AsDouble
// il2cpp: void SimpleJSONFixed_JSONLazyCreator__set_AsDouble (SimpleJSONFixed_JSONLazyCreator_o* __this, double value, const MethodInfo* method);
// 0x181dc20c0

void SimpleJSONFixed_JSONLazyCreator__set_AsDouble
               (SimpleJSONFixed_JSONLazyCreator_o *__this,double value,MethodInfo *method)

{
  SimpleJSONFixed_JSONNumber_o *aVal;
  
  if (Il2CppMethodInitialized_1843449e1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_SimpleJSONFixed_JSONLazyCreator_Set_JSONNumber);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNumber);
    Il2CppMethodInitialized_1843449e1 = '\x01';
  }
  aVal = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNumber);
  if (Il2CppMethodInitialized_1843449c4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    Il2CppMethodInitialized_1843449c4 = '\x01';
  }
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)aVal,(MethodInfo *)0x0);
  (aVal->fields).m_Data = value;
  SimpleJSONFixed_JSONLazyCreator__Set_object_
            (__this,(Il2CppObject *)aVal,
             (MethodInfo_7135C0 *)MethodInfo_SimpleJSONFixed_JSONLazyCreator_Set_JSONNumber);
  return;
}


// SimpleJSONFixed.JSONLazyCreator$$get_AsLong
// il2cpp: int64_t SimpleJSONFixed_JSONLazyCreator__get_AsLong (SimpleJSONFixed_JSONLazyCreator_o* __this, const MethodInfo* method);
// 0x181dc1ba0

int64_t SimpleJSONFixed_JSONLazyCreator__get_AsLong
                  (SimpleJSONFixed_JSONLazyCreator_o *__this,MethodInfo *method)

{
  System_String_o *value;
  SimpleJSONFixed_JSONNumber_o *aVal;
  SimpleJSONFixed_JSONString_o *aVal_00;
  
  if (Il2CppMethodInitialized_1843449e2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_SimpleJSONFixed_JSONLazyCreator_Set_JSONNumber);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_SimpleJSONFixed_JSONLazyCreator_Set_JSONString);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNumber);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONString);
    il2cpp_codegen_initialize_runtime_metadata(&"0");
    Il2CppMethodInitialized_1843449e2 = '\x01';
  }
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  if (TypeInfo_SimpleJSONFixed_JSONNode->static_fields->longAsString == false) {
    aVal = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNumber);
    if (Il2CppMethodInitialized_1843449c4 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
      Il2CppMethodInitialized_1843449c4 = '\x01';
    }
    if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
    }
    System_Object___ctor
              ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)aVal,(MethodInfo *)0x0);
    (aVal->fields).m_Data = 0.0;
    SimpleJSONFixed_JSONLazyCreator__Set_object_
              (__this,(Il2CppObject *)aVal,
               (MethodInfo_7135C0 *)MethodInfo_SimpleJSONFixed_JSONLazyCreator_Set_JSONNumber);
    return 0;
  }
  aVal_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONString);
  value = "0";
  if (Il2CppMethodInitialized_1843449bd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    Il2CppMethodInitialized_1843449bd = '\x01';
  }
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)aVal_00,(MethodInfo *)0x0);
  (aVal_00->fields).m_Data = value;
  Il2CppCodeGenWriteBarrier(&(aVal_00->fields).m_Data,value);
  SimpleJSONFixed_JSONLazyCreator__Set_object_
            (__this,(Il2CppObject *)aVal_00,
             (MethodInfo_7135C0 *)MethodInfo_SimpleJSONFixed_JSONLazyCreator_Set_JSONString);
  return 0;
}


// SimpleJSONFixed.JSONLazyCreator$$set_AsLong
// il2cpp: void SimpleJSONFixed_JSONLazyCreator__set_AsLong (SimpleJSONFixed_JSONLazyCreator_o* __this, int64_t value, const MethodInfo* method);
// 0x181dc22f0

void SimpleJSONFixed_JSONLazyCreator__set_AsLong
               (SimpleJSONFixed_JSONLazyCreator_o *__this,int64_t value,MethodInfo *method)

{
  int64_t iVar1;
  SimpleJSONFixed_JSONString_o *aVal;
  System_String_o *value_00;
  MethodInfo *method_00;
  int64_t local_res10;
  
  local_res10 = value;
  if (Il2CppMethodInitialized_1843449e3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_SimpleJSONFixed_JSONLazyCreator_Set_JSONNumber);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_SimpleJSONFixed_JSONLazyCreator_Set_JSONString);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNumber);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONString);
    Il2CppMethodInitialized_1843449e3 = '\x01';
  }
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  iVar1 = local_res10;
  if (TypeInfo_SimpleJSONFixed_JSONNode->static_fields->longAsString == false) {
    aVal = (SimpleJSONFixed_JSONString_o *)
           il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNumber);
    if (Il2CppMethodInitialized_1843449c4 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
      Il2CppMethodInitialized_1843449c4 = '\x01';
    }
    if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
    }
    System_Object___ctor
              ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)aVal,(MethodInfo *)0x0);
    (aVal->fields).m_Data = (System_String_o *)(double)iVar1;
    method_00 = MethodInfo_SimpleJSONFixed_JSONLazyCreator_Set_JSONNumber;
  }
  else {
    value_00 = System_Int64__ToString(&local_res10,(MethodInfo *)0x0);
    aVal = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONString);
    if (Il2CppMethodInitialized_1843449bd == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
      Il2CppMethodInitialized_1843449bd = '\x01';
    }
    if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
    }
    System_Object___ctor
              ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)aVal,(MethodInfo *)0x0);
    (aVal->fields).m_Data = value_00;
    Il2CppCodeGenWriteBarrier(&(aVal->fields).m_Data,value_00);
    method_00 = MethodInfo_SimpleJSONFixed_JSONLazyCreator_Set_JSONString;
  }
  SimpleJSONFixed_JSONLazyCreator__Set_object_(__this,(Il2CppObject *)aVal,(MethodInfo_7135C0 *)method_00);
  return;
}


// SimpleJSONFixed.JSONLazyCreator$$get_AsULong
// il2cpp: uint64_t SimpleJSONFixed_JSONLazyCreator__get_AsULong (SimpleJSONFixed_JSONLazyCreator_o* __this, const MethodInfo* method);
// 0x181dc1da0

uint64_t SimpleJSONFixed_JSONLazyCreator__get_AsULong
                   (SimpleJSONFixed_JSONLazyCreator_o *__this,MethodInfo *method)

{
  System_String_o *value;
  SimpleJSONFixed_JSONNumber_o *aVal;
  SimpleJSONFixed_JSONString_o *aVal_00;
  
  if (Il2CppMethodInitialized_1843449e4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_SimpleJSONFixed_JSONLazyCreator_Set_JSONNumber);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_SimpleJSONFixed_JSONLazyCreator_Set_JSONString);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNumber);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONString);
    il2cpp_codegen_initialize_runtime_metadata(&"0");
    Il2CppMethodInitialized_1843449e4 = '\x01';
  }
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  if (TypeInfo_SimpleJSONFixed_JSONNode->static_fields->longAsString == false) {
    aVal = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNumber);
    if (Il2CppMethodInitialized_1843449c4 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
      Il2CppMethodInitialized_1843449c4 = '\x01';
    }
    if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
    }
    System_Object___ctor
              ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)aVal,(MethodInfo *)0x0);
    (aVal->fields).m_Data = 0.0;
    SimpleJSONFixed_JSONLazyCreator__Set_object_
              (__this,(Il2CppObject *)aVal,
               (MethodInfo_7135C0 *)MethodInfo_SimpleJSONFixed_JSONLazyCreator_Set_JSONNumber);
    return 0;
  }
  aVal_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONString);
  value = "0";
  if (Il2CppMethodInitialized_1843449bd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    Il2CppMethodInitialized_1843449bd = '\x01';
  }
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)aVal_00,(MethodInfo *)0x0);
  (aVal_00->fields).m_Data = value;
  Il2CppCodeGenWriteBarrier(&(aVal_00->fields).m_Data,value);
  SimpleJSONFixed_JSONLazyCreator__Set_object_
            (__this,(Il2CppObject *)aVal_00,
             (MethodInfo_7135C0 *)MethodInfo_SimpleJSONFixed_JSONLazyCreator_Set_JSONString);
  return 0;
}


// SimpleJSONFixed.JSONLazyCreator$$set_AsULong
// il2cpp: void SimpleJSONFixed_JSONLazyCreator__set_AsULong (SimpleJSONFixed_JSONLazyCreator_o* __this, uint64_t value, const MethodInfo* method);
// 0x181dc2470

void SimpleJSONFixed_JSONLazyCreator__set_AsULong
               (SimpleJSONFixed_JSONLazyCreator_o *__this,uint64_t value,MethodInfo *method)

{
  uint64_t uVar1;
  SimpleJSONFixed_JSONString_o *aVal;
  System_String_o *value_00;
  MethodInfo *method_00;
  uint64_t local_res10;
  
  local_res10 = value;
  if (Il2CppMethodInitialized_1843449e5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_SimpleJSONFixed_JSONLazyCreator_Set_JSONNumber);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_SimpleJSONFixed_JSONLazyCreator_Set_JSONString);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNumber);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONString);
    Il2CppMethodInitialized_1843449e5 = '\x01';
  }
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  uVar1 = local_res10;
  if (TypeInfo_SimpleJSONFixed_JSONNode->static_fields->longAsString == false) {
    aVal = (SimpleJSONFixed_JSONString_o *)
           il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNumber);
    if (Il2CppMethodInitialized_1843449c4 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
      Il2CppMethodInitialized_1843449c4 = '\x01';
    }
    if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
    }
    System_Object___ctor
              ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)aVal,(MethodInfo *)0x0);
    if ((longlong)uVar1 < 0) {
      (aVal->fields).m_Data = (System_String_o *)(double)uVar1;
      method_00 = MethodInfo_SimpleJSONFixed_JSONLazyCreator_Set_JSONNumber;
    }
    else {
      (aVal->fields).m_Data = (System_String_o *)(double)(longlong)uVar1;
      method_00 = MethodInfo_SimpleJSONFixed_JSONLazyCreator_Set_JSONNumber;
    }
  }
  else {
    value_00 = System_UInt64__ToString(&local_res10,(MethodInfo *)0x0);
    aVal = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONString);
    if (Il2CppMethodInitialized_1843449bd == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
      Il2CppMethodInitialized_1843449bd = '\x01';
    }
    if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
    }
    System_Object___ctor
              ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)aVal,(MethodInfo *)0x0);
    (aVal->fields).m_Data = value_00;
    Il2CppCodeGenWriteBarrier(&(aVal->fields).m_Data,value_00);
    method_00 = MethodInfo_SimpleJSONFixed_JSONLazyCreator_Set_JSONString;
  }
  SimpleJSONFixed_JSONLazyCreator__Set_object_(__this,(Il2CppObject *)aVal,(MethodInfo_7135C0 *)method_00);
  return;
}


// SimpleJSONFixed.JSONLazyCreator$$get_AsBool
// il2cpp: bool SimpleJSONFixed_JSONLazyCreator__get_AsBool (SimpleJSONFixed_JSONLazyCreator_o* __this, const MethodInfo* method);
// 0x181dc18e0

bool SimpleJSONFixed_JSONLazyCreator__get_AsBool(SimpleJSONFixed_JSONLazyCreator_o *__this,MethodInfo *method)

{
  SimpleJSONFixed_JSONBool_o *aVal;
  
  if (Il2CppMethodInitialized_1843449e6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONBool);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_SimpleJSONFixed_JSONLazyCreator_Set_JSONBool);
    Il2CppMethodInitialized_1843449e6 = '\x01';
  }
  aVal = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONBool);
  if (Il2CppMethodInitialized_1843449c9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    Il2CppMethodInitialized_1843449c9 = '\x01';
  }
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)aVal,(MethodInfo *)0x0);
  (aVal->fields).m_Data = false;
  SimpleJSONFixed_JSONLazyCreator__Set_object_
            (__this,(Il2CppObject *)aVal,
             (MethodInfo_7135C0 *)MethodInfo_SimpleJSONFixed_JSONLazyCreator_Set_JSONBool);
  return false;
}


// SimpleJSONFixed.JSONLazyCreator$$set_AsBool
// il2cpp: void SimpleJSONFixed_JSONLazyCreator__set_AsBool (SimpleJSONFixed_JSONLazyCreator_o* __this, bool value, const MethodInfo* method);
// 0x181dc2010

void SimpleJSONFixed_JSONLazyCreator__set_AsBool
               (SimpleJSONFixed_JSONLazyCreator_o *__this,bool value,MethodInfo *method)

{
  SimpleJSONFixed_JSONBool_o *aVal;
  
  if (Il2CppMethodInitialized_1843449e7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONBool);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_SimpleJSONFixed_JSONLazyCreator_Set_JSONBool);
    Il2CppMethodInitialized_1843449e7 = '\x01';
  }
  aVal = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONBool);
  if (Il2CppMethodInitialized_1843449c9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    Il2CppMethodInitialized_1843449c9 = '\x01';
  }
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)aVal,(MethodInfo *)0x0);
  (aVal->fields).m_Data = value;
  SimpleJSONFixed_JSONLazyCreator__Set_object_
            (__this,(Il2CppObject *)aVal,
             (MethodInfo_7135C0 *)MethodInfo_SimpleJSONFixed_JSONLazyCreator_Set_JSONBool);
  return;
}


// SimpleJSONFixed.JSONLazyCreator$$get_AsArray
// il2cpp: SimpleJSONFixed_JSONArray_o* SimpleJSONFixed_JSONLazyCreator__get_AsArray (SimpleJSONFixed_JSONLazyCreator_o* __this, const MethodInfo* method);
// 0x181dc1870

SimpleJSONFixed_JSONArray_o *
SimpleJSONFixed_JSONLazyCreator__get_AsArray(SimpleJSONFixed_JSONLazyCreator_o *__this,MethodInfo *method)

{
  SimpleJSONFixed_JSONArray_o *pSVar1;
  
  if (Il2CppMethodInitialized_1843449e8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONArray);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_SimpleJSONFixed_JSONLazyCreator_Set_JSONArray);
    Il2CppMethodInitialized_1843449e8 = '\x01';
  }
  pSVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONArray);
  SimpleJSONFixed_JSONArray___ctor(pSVar1,(MethodInfo *)0x0);
  pSVar1 = SimpleJSONFixed_JSONLazyCreator__Set_object_
                     (__this,(Il2CppObject *)pSVar1,
                      (MethodInfo_7135C0 *)MethodInfo_SimpleJSONFixed_JSONLazyCreator_Set_JSONArray);
  return pSVar1;
}


// SimpleJSONFixed.JSONLazyCreator$$get_AsObject
// il2cpp: SimpleJSONFixed_JSONObject_o* SimpleJSONFixed_JSONLazyCreator__get_AsObject (SimpleJSONFixed_JSONLazyCreator_o* __this, const MethodInfo* method);
// 0x181dc1d30

SimpleJSONFixed_JSONObject_o *
SimpleJSONFixed_JSONLazyCreator__get_AsObject(SimpleJSONFixed_JSONLazyCreator_o *__this,MethodInfo *method)

{
  SimpleJSONFixed_JSONObject_o *pSVar1;
  
  if (Il2CppMethodInitialized_1843449e9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_SimpleJSONFixed_JSONLazyCreator_Set_JSONObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONObject);
    Il2CppMethodInitialized_1843449e9 = '\x01';
  }
  pSVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONObject);
  SimpleJSONFixed_JSONObject___ctor(pSVar1,(MethodInfo *)0x0);
  pSVar1 = SimpleJSONFixed_JSONLazyCreator__Set_object_
                     (__this,(Il2CppObject *)pSVar1,
                      (MethodInfo_7135C0 *)MethodInfo_SimpleJSONFixed_JSONLazyCreator_Set_JSONObject);
  return pSVar1;
}


// SimpleJSONFixed.JSONLazyCreator$$WriteToStringBuilder
// il2cpp: void SimpleJSONFixed_JSONLazyCreator__WriteToStringBuilder (SimpleJSONFixed_JSONLazyCreator_o* __this, System_Text_StringBuilder_o* aSB, int32_t aIndent, int32_t aIndentInc, int32_t aMode, const MethodInfo* method);
// 0x181dc1710

void SimpleJSONFixed_JSONLazyCreator__WriteToStringBuilder
               (SimpleJSONFixed_JSONLazyCreator_o *__this,System_Text_StringBuilder_o *aSB,int32_t aIndent,
               int32_t aIndentInc,int32_t aMode,MethodInfo *method)

{
  if (Il2CppMethodInitialized_1843449ea == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"null");
    Il2CppMethodInitialized_1843449ea = '\x01';
  }
  if (aSB != (System_Text_StringBuilder_o *)0x0) {
    System_Text_StringBuilder__Append_197dca0(aSB,"null",(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


