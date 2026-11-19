// Type: SimpleJSONFixed.JSONLazyCreator
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/SimpleJSONFixed/JSONLazyCreator.cs
// Prior real C# source (older reference): Assets/Scripts/Utility/SimpleJSON.cs
// --------------------------------

// SimpleJSONFixed.JSONLazyCreator$$get_Tag
// il2cpp: int32_t SimpleJSONFixed_JSONLazyCreator__get_Tag (SimpleJSONFixed_JSONLazyCreator_o* __this, const MethodInfo* method);
// 0x5869e80

int32_t SimpleJSONFixed_JSONLazyCreator__get_Tag(SimpleJSONFixed_JSONLazyCreator_o *__this,MethodInfo *method)

{
  return 7;
}


// SimpleJSONFixed.JSONLazyCreator$$GetEnumerator
// il2cpp: SimpleJSONFixed_JSONNode_Enumerator_o SimpleJSONFixed_JSONLazyCreator__GetEnumerator (SimpleJSONFixed_JSONLazyCreator_o* __this, const MethodInfo* method);
// 0x5869e90

SimpleJSONFixed_JSONNode_Enumerator_o *
SimpleJSONFixed_JSONLazyCreator__GetEnumerator
          (SimpleJSONFixed_JSONNode_Enumerator_o *__return_storage_ptr__,
          SimpleJSONFixed_JSONLazyCreator_o *__this,MethodInfo *method)

{
  (__return_storage_ptr__->fields).m_Array.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  (__return_storage_ptr__->fields).m_Array.fields._index = 0;
  (__return_storage_ptr__->fields).m_Array.fields._version = 0;
  (__return_storage_ptr__->fields).m_Object.fields._current.fields.value = (Il2CppObject *)0x0;
  *(undefined8 *)&(__return_storage_ptr__->fields).m_Object.fields._getEnumeratorRetType = 0;
  (__return_storage_ptr__->fields).m_Object.fields._version = 0;
  (__return_storage_ptr__->fields).m_Object.fields._index = 0;
  (__return_storage_ptr__->fields).m_Object.fields._current.fields.key = (Il2CppObject *)0x0;
  *(undefined8 *)&__return_storage_ptr__->fields = 0;
  (__return_storage_ptr__->fields).m_Object.fields._dictionary =
       (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  (__return_storage_ptr__->fields).m_Array.fields._current = (SimpleJSONFixed_JSONNode_o *)0x0;
  return __return_storage_ptr__;
}


// SimpleJSONFixed.JSONLazyCreator$$.ctor
// il2cpp: void SimpleJSONFixed_JSONLazyCreator___ctor (SimpleJSONFixed_JSONLazyCreator_o* __this, SimpleJSONFixed_JSONNode_o* aNode, const MethodInfo* method);
// 0x5866b50

void SimpleJSONFixed_JSONLazyCreator___ctor
               (SimpleJSONFixed_JSONLazyCreator_o *__this,SimpleJSONFixed_JSONNode_o *aNode,MethodInfo *method
               )

{
  if (Il2CppMethodInitialized_07545130 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    Il2CppMethodInitialized_07545130 = '\x01';
  }
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).m_Node = aNode;
  Il2CppCodeGenWriteBarrier(&(__this->fields).m_Node);
  (__this->fields).m_Key = (System_String_o *)0x0;
  Il2CppCodeGenWriteBarrier(&(__this->fields).m_Key);
  return;
}


// SimpleJSONFixed.JSONLazyCreator$$.ctor
// il2cpp: void SimpleJSONFixed_JSONLazyCreator___ctor (SimpleJSONFixed_JSONLazyCreator_o* __this, SimpleJSONFixed_JSONNode_o* aNode, System_String_o* aKey, const MethodInfo* method);
// 0x5867c70

void SimpleJSONFixed_JSONLazyCreator___ctor_5767c70
               (SimpleJSONFixed_JSONLazyCreator_o *__this,SimpleJSONFixed_JSONNode_o *aNode,
               System_String_o *aKey,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07545131 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    Il2CppMethodInitialized_07545131 = '\x01';
  }
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).m_Node = aNode;
  Il2CppCodeGenWriteBarrier(&(__this->fields).m_Node);
  (__this->fields).m_Key = aKey;
  Il2CppCodeGenWriteBarrier(&(__this->fields).m_Key);
  return;
}


// SimpleJSONFixed.JSONLazyCreator$$Set<object>
// il2cpp: Il2CppObject* SimpleJSONFixed_JSONLazyCreator__Set_object_ (SimpleJSONFixed_JSONLazyCreator_o* __this, Il2CppObject* aVal, const MethodInfo_356AD40* method);
// 0x366ad40

Il2CppObject *
SimpleJSONFixed_JSONLazyCreator__Set_object_
          (SimpleJSONFixed_JSONLazyCreator_o *__this,Il2CppObject *aVal,MethodInfo_356AD40 *method)

{
  SimpleJSONFixed_JSONNode_o *pSVar1;
  System_String_o *pSVar2;
  
  pSVar1 = (__this->fields).m_Node;
  pSVar2 = (__this->fields).m_Key;
  if (pSVar2 == (System_String_o *)0x0) {
    if (pSVar1 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_0366adaa;
    (*(pSVar1->klass->vtable)._21_Add.methodPtr)
              (pSVar1,(SimpleJSONFixed_JSONNode_o *)aVal,(pSVar1->klass->vtable)._21_Add.method);
  }
  else {
    if (pSVar1 == (SimpleJSONFixed_JSONNode_o *)0x0) {
label_0366adaa:
      ThrowNullReferenceException();
    }
    (*(pSVar1->klass->vtable)._20_Add.methodPtr)
              (pSVar1,pSVar2,(SimpleJSONFixed_JSONNode_o *)aVal,(pSVar1->klass->vtable)._20_Add.method);
  }
  (__this->fields).m_Node = (SimpleJSONFixed_JSONNode_o *)0x0;
  Il2CppCodeGenWriteBarrier(&(__this->fields).m_Node);
  return aVal;
}


// SimpleJSONFixed.JSONLazyCreator$$get_Item
// il2cpp: SimpleJSONFixed_JSONNode_o* SimpleJSONFixed_JSONLazyCreator__get_Item (SimpleJSONFixed_JSONLazyCreator_o* __this, int32_t aIndex, const MethodInfo* method);
// 0x5869eb0

SimpleJSONFixed_JSONNode_o *
SimpleJSONFixed_JSONLazyCreator__get_Item
          (SimpleJSONFixed_JSONLazyCreator_o *__this,int32_t aIndex,MethodInfo *method)

{
  SimpleJSONFixed_JSONLazyCreator_o *__this_00;
  
  if (Il2CppMethodInitialized_07545132 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONLazyCreator);
    Il2CppMethodInitialized_07545132 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONLazyCreator);
  if (Il2CppMethodInitialized_07545130 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    Il2CppMethodInitialized_07545130 = '\x01';
  }
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).m_Node = (SimpleJSONFixed_JSONNode_o *)__this;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).m_Node);
  (__this_00->fields).m_Key = (System_String_o *)0x0;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).m_Key);
  return (SimpleJSONFixed_JSONNode_o *)__this_00;
}


// SimpleJSONFixed.JSONLazyCreator$$set_Item
// il2cpp: void SimpleJSONFixed_JSONLazyCreator__set_Item (SimpleJSONFixed_JSONLazyCreator_o* __this, int32_t aIndex, SimpleJSONFixed_JSONNode_o* value, const MethodInfo* method);
// 0x5869f60

void SimpleJSONFixed_JSONLazyCreator__set_Item
               (SimpleJSONFixed_JSONLazyCreator_o *__this,int32_t aIndex,SimpleJSONFixed_JSONNode_o *value,
               MethodInfo *method)

{
  SimpleJSONFixed_JSONArray_o *pSVar1;
  undefined4 in_register_00000034;
  MethodInfo *method_00;
  
  method_00 = (MethodInfo *)CONCAT44(in_register_00000034,aIndex);
  if (Il2CppMethodInitialized_07545133 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONArray);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_SimpleJSONFixed_JSONLazyCreator_Set_JSONArray);
    Il2CppMethodInitialized_07545133 = '\x01';
  }
  pSVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONArray);
  SimpleJSONFixed_JSONArray___ctor(pSVar1,method_00);
  pSVar1 = SimpleJSONFixed_JSONLazyCreator__Set_object_
                     (__this,(Il2CppObject *)pSVar1,
                      (MethodInfo_356AD40 *)MethodInfo_SimpleJSONFixed_JSONLazyCreator_Set_JSONArray);
  if (pSVar1 == (SimpleJSONFixed_JSONArray_o *)0x0) {
    ThrowNullReferenceException();
  }
  (*(pSVar1->klass->vtable)._21_Add.methodPtr)(pSVar1,value,(pSVar1->klass->vtable)._21_Add.method);
  return;
}


// SimpleJSONFixed.JSONLazyCreator$$get_Item
// il2cpp: SimpleJSONFixed_JSONNode_o* SimpleJSONFixed_JSONLazyCreator__get_Item (SimpleJSONFixed_JSONLazyCreator_o* __this, System_String_o* aKey, const MethodInfo* method);
// 0x5869ff0

SimpleJSONFixed_JSONNode_o *
SimpleJSONFixed_JSONLazyCreator__get_Item_5769ff0
          (SimpleJSONFixed_JSONLazyCreator_o *__this,System_String_o *aKey,MethodInfo *method)

{
  SimpleJSONFixed_JSONLazyCreator_o *__this_00;
  
  if (Il2CppMethodInitialized_07545134 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONLazyCreator);
    Il2CppMethodInitialized_07545134 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONLazyCreator);
  if (Il2CppMethodInitialized_07545131 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    Il2CppMethodInitialized_07545131 = '\x01';
  }
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).m_Node = (SimpleJSONFixed_JSONNode_o *)__this;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).m_Node);
  (__this_00->fields).m_Key = aKey;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).m_Key);
  return (SimpleJSONFixed_JSONNode_o *)__this_00;
}


// SimpleJSONFixed.JSONLazyCreator$$set_Item
// il2cpp: void SimpleJSONFixed_JSONLazyCreator__set_Item (SimpleJSONFixed_JSONLazyCreator_o* __this, System_String_o* aKey, SimpleJSONFixed_JSONNode_o* value, const MethodInfo* method);
// 0x586a0a0

void SimpleJSONFixed_JSONLazyCreator__set_Item_576a0a0
               (SimpleJSONFixed_JSONLazyCreator_o *__this,System_String_o *aKey,
               SimpleJSONFixed_JSONNode_o *value,MethodInfo *method)

{
  SimpleJSONFixed_JSONObject_o *pSVar1;
  MethodInfo *method_00;
  
  method_00 = (MethodInfo *)aKey;
  if (Il2CppMethodInitialized_07545135 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_SimpleJSONFixed_JSONLazyCreator_Set_JSONObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONObject);
    Il2CppMethodInitialized_07545135 = '\x01';
  }
  pSVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONObject);
  SimpleJSONFixed_JSONObject___ctor(pSVar1,method_00);
  pSVar1 = SimpleJSONFixed_JSONLazyCreator__Set_object_
                     (__this,(Il2CppObject *)pSVar1,
                      (MethodInfo_356AD40 *)MethodInfo_SimpleJSONFixed_JSONLazyCreator_Set_JSONObject);
  if (pSVar1 == (SimpleJSONFixed_JSONObject_o *)0x0) {
    ThrowNullReferenceException();
  }
  (*(pSVar1->klass->vtable)._20_Add.methodPtr)(pSVar1,aKey,value,(pSVar1->klass->vtable)._20_Add.method);
  return;
}


// SimpleJSONFixed.JSONLazyCreator$$Add
// il2cpp: void SimpleJSONFixed_JSONLazyCreator__Add (SimpleJSONFixed_JSONLazyCreator_o* __this, SimpleJSONFixed_JSONNode_o* aItem, const MethodInfo* method);
// 0x586a140

void SimpleJSONFixed_JSONLazyCreator__Add
               (SimpleJSONFixed_JSONLazyCreator_o *__this,SimpleJSONFixed_JSONNode_o *aItem,MethodInfo *method
               )

{
  SimpleJSONFixed_JSONArray_o *pSVar1;
  MethodInfo *method_00;
  
  method_00 = (MethodInfo *)aItem;
  if (Il2CppMethodInitialized_07545136 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONArray);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_SimpleJSONFixed_JSONLazyCreator_Set_JSONArray);
    Il2CppMethodInitialized_07545136 = '\x01';
  }
  pSVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONArray);
  SimpleJSONFixed_JSONArray___ctor(pSVar1,method_00);
  pSVar1 = SimpleJSONFixed_JSONLazyCreator__Set_object_
                     (__this,(Il2CppObject *)pSVar1,
                      (MethodInfo_356AD40 *)MethodInfo_SimpleJSONFixed_JSONLazyCreator_Set_JSONArray);
  if (pSVar1 == (SimpleJSONFixed_JSONArray_o *)0x0) {
    ThrowNullReferenceException();
  }
  (*(pSVar1->klass->vtable)._21_Add.methodPtr)(pSVar1,aItem,(pSVar1->klass->vtable)._21_Add.method);
  return;
}


// SimpleJSONFixed.JSONLazyCreator$$Add
// il2cpp: void SimpleJSONFixed_JSONLazyCreator__Add (SimpleJSONFixed_JSONLazyCreator_o* __this, System_String_o* aKey, SimpleJSONFixed_JSONNode_o* aItem, const MethodInfo* method);
// 0x586a1d0

void SimpleJSONFixed_JSONLazyCreator__Add_576a1d0
               (SimpleJSONFixed_JSONLazyCreator_o *__this,System_String_o *aKey,
               SimpleJSONFixed_JSONNode_o *aItem,MethodInfo *method)

{
  SimpleJSONFixed_JSONObject_o *pSVar1;
  MethodInfo *method_00;
  
  method_00 = (MethodInfo *)aKey;
  if (Il2CppMethodInitialized_07545137 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_SimpleJSONFixed_JSONLazyCreator_Set_JSONObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONObject);
    Il2CppMethodInitialized_07545137 = '\x01';
  }
  pSVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONObject);
  SimpleJSONFixed_JSONObject___ctor(pSVar1,method_00);
  pSVar1 = SimpleJSONFixed_JSONLazyCreator__Set_object_
                     (__this,(Il2CppObject *)pSVar1,
                      (MethodInfo_356AD40 *)MethodInfo_SimpleJSONFixed_JSONLazyCreator_Set_JSONObject);
  if (pSVar1 == (SimpleJSONFixed_JSONObject_o *)0x0) {
    ThrowNullReferenceException();
  }
  (*(pSVar1->klass->vtable)._20_Add.methodPtr)(pSVar1,aKey,aItem,(pSVar1->klass->vtable)._20_Add.method);
  return;
}


// SimpleJSONFixed.JSONLazyCreator$$op_Equality
// il2cpp: bool SimpleJSONFixed_JSONLazyCreator__op_Equality (SimpleJSONFixed_JSONLazyCreator_o* a, Il2CppObject* b, const MethodInfo* method);
// 0x586a270

bool SimpleJSONFixed_JSONLazyCreator__op_Equality
               (SimpleJSONFixed_JSONLazyCreator_o *a,Il2CppObject *b,MethodInfo *method)

{
  return a == (SimpleJSONFixed_JSONLazyCreator_o *)b || b == (Il2CppObject *)0x0;
}


// SimpleJSONFixed.JSONLazyCreator$$op_Inequality
// il2cpp: bool SimpleJSONFixed_JSONLazyCreator__op_Inequality (SimpleJSONFixed_JSONLazyCreator_o* a, Il2CppObject* b, const MethodInfo* method);
// 0x586a280

bool SimpleJSONFixed_JSONLazyCreator__op_Inequality
               (SimpleJSONFixed_JSONLazyCreator_o *a,Il2CppObject *b,MethodInfo *method)

{
  return a != (SimpleJSONFixed_JSONLazyCreator_o *)b && b != (Il2CppObject *)0x0;
}


// SimpleJSONFixed.JSONLazyCreator$$Equals
// il2cpp: bool SimpleJSONFixed_JSONLazyCreator__Equals (SimpleJSONFixed_JSONLazyCreator_o* __this, Il2CppObject* obj, const MethodInfo* method);
// 0x586a290

bool SimpleJSONFixed_JSONLazyCreator__Equals
               (SimpleJSONFixed_JSONLazyCreator_o *__this,Il2CppObject *obj,MethodInfo *method)

{
  return __this == (SimpleJSONFixed_JSONLazyCreator_o *)obj || obj == (Il2CppObject *)0x0;
}


// SimpleJSONFixed.JSONLazyCreator$$GetHashCode
// il2cpp: int32_t SimpleJSONFixed_JSONLazyCreator__GetHashCode (SimpleJSONFixed_JSONLazyCreator_o* __this, const MethodInfo* method);
// 0x586a2a0

int32_t SimpleJSONFixed_JSONLazyCreator__GetHashCode
                  (SimpleJSONFixed_JSONLazyCreator_o *__this,MethodInfo *method)

{
  return 0;
}


// SimpleJSONFixed.JSONLazyCreator$$get_AsInt
// il2cpp: int32_t SimpleJSONFixed_JSONLazyCreator__get_AsInt (SimpleJSONFixed_JSONLazyCreator_o* __this, const MethodInfo* method);
// 0x586a2b0

int32_t SimpleJSONFixed_JSONLazyCreator__get_AsInt
                  (SimpleJSONFixed_JSONLazyCreator_o *__this,MethodInfo *method)

{
  SimpleJSONFixed_JSONNumber_o *__this_00;
  
  if (Il2CppMethodInitialized_07545138 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_SimpleJSONFixed_JSONLazyCreator_Set_JSONNumber);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNumber);
    Il2CppMethodInitialized_07545138 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNumber);
  if (Il2CppMethodInitialized_07545120 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    Il2CppMethodInitialized_07545120 = '\x01';
  }
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).m_Data = 0.0;
  SimpleJSONFixed_JSONLazyCreator__Set_object_
            (__this,(Il2CppObject *)__this_00,
             (MethodInfo_356AD40 *)MethodInfo_SimpleJSONFixed_JSONLazyCreator_Set_JSONNumber);
  return 0;
}


// SimpleJSONFixed.JSONLazyCreator$$set_AsInt
// il2cpp: void SimpleJSONFixed_JSONLazyCreator__set_AsInt (SimpleJSONFixed_JSONLazyCreator_o* __this, int32_t value, const MethodInfo* method);
// 0x586a360

void SimpleJSONFixed_JSONLazyCreator__set_AsInt
               (SimpleJSONFixed_JSONLazyCreator_o *__this,int32_t value,MethodInfo *method)

{
  SimpleJSONFixed_JSONNumber_o *__this_00;
  
  if (Il2CppMethodInitialized_07545139 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_SimpleJSONFixed_JSONLazyCreator_Set_JSONNumber);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNumber);
    Il2CppMethodInitialized_07545139 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNumber);
  if (Il2CppMethodInitialized_07545120 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    Il2CppMethodInitialized_07545120 = '\x01';
  }
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).m_Data = (double)value;
  SimpleJSONFixed_JSONLazyCreator__Set_object_
            (__this,(Il2CppObject *)__this_00,
             (MethodInfo_356AD40 *)MethodInfo_SimpleJSONFixed_JSONLazyCreator_Set_JSONNumber);
  return;
}


// SimpleJSONFixed.JSONLazyCreator$$get_AsFloat
// il2cpp: float SimpleJSONFixed_JSONLazyCreator__get_AsFloat (SimpleJSONFixed_JSONLazyCreator_o* __this, const MethodInfo* method);
// 0x586a420

float SimpleJSONFixed_JSONLazyCreator__get_AsFloat
                (SimpleJSONFixed_JSONLazyCreator_o *__this,MethodInfo *method)

{
  SimpleJSONFixed_JSONNumber_o *__this_00;
  
  if (Il2CppMethodInitialized_0754513a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_SimpleJSONFixed_JSONLazyCreator_Set_JSONNumber);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNumber);
    Il2CppMethodInitialized_0754513a = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNumber);
  if (Il2CppMethodInitialized_07545120 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    Il2CppMethodInitialized_07545120 = '\x01';
  }
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).m_Data = 0.0;
  SimpleJSONFixed_JSONLazyCreator__Set_object_
            (__this,(Il2CppObject *)__this_00,
             (MethodInfo_356AD40 *)MethodInfo_SimpleJSONFixed_JSONLazyCreator_Set_JSONNumber);
  return 0.0;
}


// SimpleJSONFixed.JSONLazyCreator$$set_AsFloat
// il2cpp: void SimpleJSONFixed_JSONLazyCreator__set_AsFloat (SimpleJSONFixed_JSONLazyCreator_o* __this, float value, const MethodInfo* method);
// 0x586a4d0

void SimpleJSONFixed_JSONLazyCreator__set_AsFloat
               (SimpleJSONFixed_JSONLazyCreator_o *__this,float value,MethodInfo *method)

{
  SimpleJSONFixed_JSONNumber_o *__this_00;
  
  if (Il2CppMethodInitialized_0754513b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_SimpleJSONFixed_JSONLazyCreator_Set_JSONNumber);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNumber);
    Il2CppMethodInitialized_0754513b = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNumber);
  if (Il2CppMethodInitialized_07545120 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    Il2CppMethodInitialized_07545120 = '\x01';
  }
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).m_Data = (double)value;
  SimpleJSONFixed_JSONLazyCreator__Set_object_
            (__this,(Il2CppObject *)__this_00,
             (MethodInfo_356AD40 *)MethodInfo_SimpleJSONFixed_JSONLazyCreator_Set_JSONNumber);
  return;
}


// SimpleJSONFixed.JSONLazyCreator$$get_AsDouble
// il2cpp: double SimpleJSONFixed_JSONLazyCreator__get_AsDouble (SimpleJSONFixed_JSONLazyCreator_o* __this, const MethodInfo* method);
// 0x586a590

double SimpleJSONFixed_JSONLazyCreator__get_AsDouble
                 (SimpleJSONFixed_JSONLazyCreator_o *__this,MethodInfo *method)

{
  SimpleJSONFixed_JSONNumber_o *__this_00;
  
  if (Il2CppMethodInitialized_0754513c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_SimpleJSONFixed_JSONLazyCreator_Set_JSONNumber);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNumber);
    Il2CppMethodInitialized_0754513c = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNumber);
  if (Il2CppMethodInitialized_07545120 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    Il2CppMethodInitialized_07545120 = '\x01';
  }
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).m_Data = 0.0;
  SimpleJSONFixed_JSONLazyCreator__Set_object_
            (__this,(Il2CppObject *)__this_00,
             (MethodInfo_356AD40 *)MethodInfo_SimpleJSONFixed_JSONLazyCreator_Set_JSONNumber);
  return 0.0;
}


// SimpleJSONFixed.JSONLazyCreator$$set_AsDouble
// il2cpp: void SimpleJSONFixed_JSONLazyCreator__set_AsDouble (SimpleJSONFixed_JSONLazyCreator_o* __this, double value, const MethodInfo* method);
// 0x586a640

void SimpleJSONFixed_JSONLazyCreator__set_AsDouble
               (SimpleJSONFixed_JSONLazyCreator_o *__this,double value,MethodInfo *method)

{
  SimpleJSONFixed_JSONNumber_o *__this_00;
  
  if (Il2CppMethodInitialized_0754513d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_SimpleJSONFixed_JSONLazyCreator_Set_JSONNumber);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNumber);
    Il2CppMethodInitialized_0754513d = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNumber);
  if (Il2CppMethodInitialized_07545120 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    Il2CppMethodInitialized_07545120 = '\x01';
  }
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).m_Data = value;
  SimpleJSONFixed_JSONLazyCreator__Set_object_
            (__this,(Il2CppObject *)__this_00,
             (MethodInfo_356AD40 *)MethodInfo_SimpleJSONFixed_JSONLazyCreator_Set_JSONNumber);
  return;
}


// SimpleJSONFixed.JSONLazyCreator$$get_AsLong
// il2cpp: int64_t SimpleJSONFixed_JSONLazyCreator__get_AsLong (SimpleJSONFixed_JSONLazyCreator_o* __this, const MethodInfo* method);
// 0x586a6f0

int64_t SimpleJSONFixed_JSONLazyCreator__get_AsLong
                  (SimpleJSONFixed_JSONLazyCreator_o *__this,MethodInfo *method)

{
  char cVar1;
  uint32_t uVar2;
  System_String_o *pSVar3;
  SimpleJSONFixed_JSONString_o *__this_00;
  MethodInfo **ppMVar4;
  
  if (Il2CppMethodInitialized_0754513e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_SimpleJSONFixed_JSONLazyCreator_Set_JSONNumber);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_SimpleJSONFixed_JSONLazyCreator_Set_JSONString);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNumber);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONString);
    il2cpp_codegen_initialize_runtime_metadata(&"0");
    Il2CppMethodInitialized_0754513e = '\x01';
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
    __this_00 = (SimpleJSONFixed_JSONString_o *)
                il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNumber);
    if (Il2CppMethodInitialized_07545120 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
      Il2CppMethodInitialized_07545120 = '\x01';
    }
    if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
    }
    System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
    (__this_00->fields).m_Data = (System_String_o *)0x0;
    ppMVar4 = &MethodInfo_SimpleJSONFixed_JSONLazyCreator_Set_JSONNumber;
  }
  else {
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONString);
    pSVar3 = "0";
    if (Il2CppMethodInitialized_07545119 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
      Il2CppMethodInitialized_07545119 = '\x01';
    }
    if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
    }
    System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
    (__this_00->fields).m_Data = pSVar3;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).m_Data);
    ppMVar4 = &MethodInfo_SimpleJSONFixed_JSONLazyCreator_Set_JSONString;
  }
  SimpleJSONFixed_JSONLazyCreator__Set_object_
            (__this,(Il2CppObject *)__this_00,(MethodInfo_356AD40 *)*ppMVar4);
  return 0;
}


// SimpleJSONFixed.JSONLazyCreator$$set_AsLong
// il2cpp: void SimpleJSONFixed_JSONLazyCreator__set_AsLong (SimpleJSONFixed_JSONLazyCreator_o* __this, int64_t value, const MethodInfo* method);
// 0x586a8a0

void SimpleJSONFixed_JSONLazyCreator__set_AsLong
               (SimpleJSONFixed_JSONLazyCreator_o *__this,int64_t value,MethodInfo *method)

{
  char cVar1;
  uint32_t uVar2;
  System_String_o *pSVar3;
  SimpleJSONFixed_JSONString_o *__this_00;
  SimpleJSONFixed_JSONNumber_o *__this_01;
  int64_t local_28;
  
  local_28 = value;
  if (Il2CppMethodInitialized_0754513f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_SimpleJSONFixed_JSONLazyCreator_Set_JSONNumber);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_SimpleJSONFixed_JSONLazyCreator_Set_JSONString);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNumber);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONString);
    Il2CppMethodInitialized_0754513f = '\x01';
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
    __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNumber);
    if (Il2CppMethodInitialized_07545120 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
      Il2CppMethodInitialized_07545120 = '\x01';
    }
    if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
    }
    System_Object___ctor((Il2CppObject *)__this_01,(MethodInfo *)0x0);
    (__this_01->fields).m_Data = (double)value;
    SimpleJSONFixed_JSONLazyCreator__Set_object_
              (__this,(Il2CppObject *)__this_01,
               (MethodInfo_356AD40 *)MethodInfo_SimpleJSONFixed_JSONLazyCreator_Set_JSONNumber);
    return;
  }
  pSVar3 = System_Int64__ToString(&local_28,(MethodInfo *)0x0);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONString);
  if (Il2CppMethodInitialized_07545119 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    Il2CppMethodInitialized_07545119 = '\x01';
  }
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).m_Data = pSVar3;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).m_Data);
  SimpleJSONFixed_JSONLazyCreator__Set_object_
            (__this,(Il2CppObject *)__this_00,
             (MethodInfo_356AD40 *)MethodInfo_SimpleJSONFixed_JSONLazyCreator_Set_JSONString);
  return;
}


// SimpleJSONFixed.JSONLazyCreator$$get_AsULong
// il2cpp: uint64_t SimpleJSONFixed_JSONLazyCreator__get_AsULong (SimpleJSONFixed_JSONLazyCreator_o* __this, const MethodInfo* method);
// 0x586aa70

uint64_t SimpleJSONFixed_JSONLazyCreator__get_AsULong
                   (SimpleJSONFixed_JSONLazyCreator_o *__this,MethodInfo *method)

{
  char cVar1;
  uint32_t uVar2;
  System_String_o *pSVar3;
  SimpleJSONFixed_JSONString_o *__this_00;
  MethodInfo **ppMVar4;
  
  if (Il2CppMethodInitialized_07545140 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_SimpleJSONFixed_JSONLazyCreator_Set_JSONNumber);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_SimpleJSONFixed_JSONLazyCreator_Set_JSONString);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNumber);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONString);
    il2cpp_codegen_initialize_runtime_metadata(&"0");
    Il2CppMethodInitialized_07545140 = '\x01';
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
    __this_00 = (SimpleJSONFixed_JSONString_o *)
                il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNumber);
    if (Il2CppMethodInitialized_07545120 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
      Il2CppMethodInitialized_07545120 = '\x01';
    }
    if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
    }
    System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
    (__this_00->fields).m_Data = (System_String_o *)0x0;
    ppMVar4 = &MethodInfo_SimpleJSONFixed_JSONLazyCreator_Set_JSONNumber;
  }
  else {
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONString);
    pSVar3 = "0";
    if (Il2CppMethodInitialized_07545119 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
      Il2CppMethodInitialized_07545119 = '\x01';
    }
    if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
    }
    System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
    (__this_00->fields).m_Data = pSVar3;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).m_Data);
    ppMVar4 = &MethodInfo_SimpleJSONFixed_JSONLazyCreator_Set_JSONString;
  }
  SimpleJSONFixed_JSONLazyCreator__Set_object_
            (__this,(Il2CppObject *)__this_00,(MethodInfo_356AD40 *)*ppMVar4);
  return 0;
}


// SimpleJSONFixed.JSONLazyCreator$$set_AsULong
// il2cpp: void SimpleJSONFixed_JSONLazyCreator__set_AsULong (SimpleJSONFixed_JSONLazyCreator_o* __this, uint64_t value, const MethodInfo* method);
// 0x586ac20

void SimpleJSONFixed_JSONLazyCreator__set_AsULong
               (SimpleJSONFixed_JSONLazyCreator_o *__this,uint64_t value,MethodInfo *method)

{
  char cVar1;
  uint32_t uVar2;
  System_String_o *pSVar3;
  SimpleJSONFixed_JSONString_o *__this_00;
  SimpleJSONFixed_JSONNumber_o *__this_01;
  double dVar4;
  undefined1 auVar5 [16];
  double dVar6;
  uint64_t local_40;
  double local_38;
  double dStack_30;
  
  local_40 = value;
  if (Il2CppMethodInitialized_07545141 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_SimpleJSONFixed_JSONLazyCreator_Set_JSONNumber);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_SimpleJSONFixed_JSONLazyCreator_Set_JSONString);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNumber);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONString);
    Il2CppMethodInitialized_07545141 = '\x01';
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
    __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNumber);
    auVar5._8_4_ = (int)(value >> 0x20);
    auVar5._0_8_ = value;
    auVar5._12_4_ = 0x45300000;
    dVar4 = (double)CONCAT44(0x43300000,(int)value) - 4503599627370496.0;
    dVar6 = auVar5._8_8_ - 1.9342813113834067e+25;
    if (Il2CppMethodInitialized_07545120 == '\0') {
      local_38 = dVar4;
      dStack_30 = dVar6;
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
      Il2CppMethodInitialized_07545120 = '\x01';
      dVar4 = local_38;
    }
    if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
    }
    System_Object___ctor((Il2CppObject *)__this_01,(MethodInfo *)0x0);
    (__this_01->fields).m_Data = dVar6 + dVar4;
    SimpleJSONFixed_JSONLazyCreator__Set_object_
              (__this,(Il2CppObject *)__this_01,
               (MethodInfo_356AD40 *)MethodInfo_SimpleJSONFixed_JSONLazyCreator_Set_JSONNumber);
    return;
  }
  pSVar3 = System_UInt64__ToString(&local_40,(MethodInfo *)0x0);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONString);
  if (Il2CppMethodInitialized_07545119 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    Il2CppMethodInitialized_07545119 = '\x01';
  }
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).m_Data = pSVar3;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).m_Data);
  SimpleJSONFixed_JSONLazyCreator__Set_object_
            (__this,(Il2CppObject *)__this_00,
             (MethodInfo_356AD40 *)MethodInfo_SimpleJSONFixed_JSONLazyCreator_Set_JSONString);
  return;
}


// SimpleJSONFixed.JSONLazyCreator$$get_AsBool
// il2cpp: bool SimpleJSONFixed_JSONLazyCreator__get_AsBool (SimpleJSONFixed_JSONLazyCreator_o* __this, const MethodInfo* method);
// 0x586ae20

bool SimpleJSONFixed_JSONLazyCreator__get_AsBool(SimpleJSONFixed_JSONLazyCreator_o *__this,MethodInfo *method)

{
  SimpleJSONFixed_JSONBool_o *__this_00;
  
  if (Il2CppMethodInitialized_07545142 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONBool);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_SimpleJSONFixed_JSONLazyCreator_Set_JSONBool);
    Il2CppMethodInitialized_07545142 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONBool);
  if (Il2CppMethodInitialized_07545125 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    Il2CppMethodInitialized_07545125 = '\x01';
  }
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).m_Data = false;
  SimpleJSONFixed_JSONLazyCreator__Set_object_
            (__this,(Il2CppObject *)__this_00,
             (MethodInfo_356AD40 *)MethodInfo_SimpleJSONFixed_JSONLazyCreator_Set_JSONBool);
  return false;
}


// SimpleJSONFixed.JSONLazyCreator$$set_AsBool
// il2cpp: void SimpleJSONFixed_JSONLazyCreator__set_AsBool (SimpleJSONFixed_JSONLazyCreator_o* __this, bool value, const MethodInfo* method);
// 0x586aed0

void SimpleJSONFixed_JSONLazyCreator__set_AsBool
               (SimpleJSONFixed_JSONLazyCreator_o *__this,bool value,MethodInfo *method)

{
  SimpleJSONFixed_JSONBool_o *__this_00;
  
  if (Il2CppMethodInitialized_07545143 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONBool);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_SimpleJSONFixed_JSONLazyCreator_Set_JSONBool);
    Il2CppMethodInitialized_07545143 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONBool);
  if (Il2CppMethodInitialized_07545125 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    Il2CppMethodInitialized_07545125 = '\x01';
  }
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).m_Data = value;
  SimpleJSONFixed_JSONLazyCreator__Set_object_
            (__this,(Il2CppObject *)__this_00,
             (MethodInfo_356AD40 *)MethodInfo_SimpleJSONFixed_JSONLazyCreator_Set_JSONBool);
  return;
}


// SimpleJSONFixed.JSONLazyCreator$$get_AsArray
// il2cpp: SimpleJSONFixed_JSONArray_o* SimpleJSONFixed_JSONLazyCreator__get_AsArray (SimpleJSONFixed_JSONLazyCreator_o* __this, const MethodInfo* method);
// 0x586af70

SimpleJSONFixed_JSONArray_o *
SimpleJSONFixed_JSONLazyCreator__get_AsArray(SimpleJSONFixed_JSONLazyCreator_o *__this,MethodInfo *method)

{
  SimpleJSONFixed_JSONArray_o *pSVar1;
  
  if (Il2CppMethodInitialized_07545144 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONArray);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_SimpleJSONFixed_JSONLazyCreator_Set_JSONArray);
    Il2CppMethodInitialized_07545144 = '\x01';
  }
  pSVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONArray);
  SimpleJSONFixed_JSONArray___ctor(pSVar1,method);
  pSVar1 = SimpleJSONFixed_JSONLazyCreator__Set_object_
                     (__this,(Il2CppObject *)pSVar1,
                      (MethodInfo_356AD40 *)MethodInfo_SimpleJSONFixed_JSONLazyCreator_Set_JSONArray);
  return pSVar1;
}


// SimpleJSONFixed.JSONLazyCreator$$get_AsObject
// il2cpp: SimpleJSONFixed_JSONObject_o* SimpleJSONFixed_JSONLazyCreator__get_AsObject (SimpleJSONFixed_JSONLazyCreator_o* __this, const MethodInfo* method);
// 0x586afe0

SimpleJSONFixed_JSONObject_o *
SimpleJSONFixed_JSONLazyCreator__get_AsObject(SimpleJSONFixed_JSONLazyCreator_o *__this,MethodInfo *method)

{
  SimpleJSONFixed_JSONObject_o *pSVar1;
  
  if (Il2CppMethodInitialized_07545145 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_SimpleJSONFixed_JSONLazyCreator_Set_JSONObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONObject);
    Il2CppMethodInitialized_07545145 = '\x01';
  }
  pSVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONObject);
  SimpleJSONFixed_JSONObject___ctor(pSVar1,method);
  pSVar1 = SimpleJSONFixed_JSONLazyCreator__Set_object_
                     (__this,(Il2CppObject *)pSVar1,
                      (MethodInfo_356AD40 *)MethodInfo_SimpleJSONFixed_JSONLazyCreator_Set_JSONObject);
  return pSVar1;
}


// SimpleJSONFixed.JSONLazyCreator$$WriteToStringBuilder
// il2cpp: void SimpleJSONFixed_JSONLazyCreator__WriteToStringBuilder (SimpleJSONFixed_JSONLazyCreator_o* __this, System_Text_StringBuilder_o* aSB, int32_t aIndent, int32_t aIndentInc, int32_t aMode, const MethodInfo* method);
// 0x586b050

void SimpleJSONFixed_JSONLazyCreator__WriteToStringBuilder
               (SimpleJSONFixed_JSONLazyCreator_o *__this,System_Text_StringBuilder_o *aSB,int32_t aIndent,
               int32_t aIndentInc,int32_t aMode,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07545146 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"null");
    Il2CppMethodInitialized_07545146 = '\x01';
  }
  if (aSB == (System_Text_StringBuilder_o *)0x0) {
    ThrowNullReferenceException();
  }
  System_Text_StringBuilder__Append_530ed80(aSB,"null",(MethodInfo *)0x0);
  return;
}


