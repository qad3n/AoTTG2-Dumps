// Type: SimpleJSONFixed.JSONLazyCreator
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/SimpleJSONFixed/JSONLazyCreator.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/Utility/SimpleJSON.cs  [CHANGED since prior version]
// --------------------------------

// SimpleJSONFixed.JSONLazyCreator$$get_Tag
// il2cpp: int32_t SimpleJSONFixed_JSONLazyCreator__get_Tag (SimpleJSONFixed_JSONLazyCreator_o* __this, const MethodInfo* method);
// 0x3d8ac30

int32_t SimpleJSONFixed_JSONLazyCreator__get_Tag
                  (SimpleJSONFixed_JSONLazyCreator_o *__this,MethodInfo *method)

{
  return 7;
}


// SimpleJSONFixed.JSONLazyCreator$$GetEnumerator
// il2cpp: SimpleJSONFixed_JSONNode_Enumerator_o SimpleJSONFixed_JSONLazyCreator__GetEnumerator (SimpleJSONFixed_JSONLazyCreator_o* __this, const MethodInfo* method);
// 0x3d8ac40

/* WARNING: Type propagation algorithm not settling */

SimpleJSONFixed_JSONNode_Enumerator_o *
SimpleJSONFixed_JSONLazyCreator__GetEnumerator
          (SimpleJSONFixed_JSONNode_Enumerator_o *__return_storage_ptr__,
          SimpleJSONFixed_JSONLazyCreator_o *__this,MethodInfo *method)

{
  (__return_storage_ptr__->fields).m_Array.fields._list =
       (System_Collections_Generic_List_T__o *)0x0;
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
// 0x3d876e0

void SimpleJSONFixed_JSONLazyCreator___ctor
               (SimpleJSONFixed_JSONLazyCreator_o *__this,SimpleJSONFixed_JSONNode_o *aNode,
               MethodInfo *method)

{
  if (DAT_057026ee == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_JSONNode);
    DAT_057026ee = '\x01';
  }
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_init_class();
  }
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).m_Node = aNode;
  il2cpp_runtime_glue(&__this->fields,aNode);
  (__this->fields).m_Key = (System_String_o *)0x0;
  il2cpp_runtime_glue(&(__this->fields).m_Key,0);
  return;
}


// SimpleJSONFixed.JSONLazyCreator$$.ctor
// il2cpp: void SimpleJSONFixed_JSONLazyCreator___ctor (SimpleJSONFixed_JSONLazyCreator_o* __this, SimpleJSONFixed_JSONNode_o* aNode, System_String_o* aKey, const MethodInfo* method);
// 0x3d887f0

void SimpleJSONFixed_JSONLazyCreator___ctor
               (SimpleJSONFixed_JSONLazyCreator_o *__this,SimpleJSONFixed_JSONNode_o *aNode,
               System_String_o *aKey,MethodInfo *method)

{
  if (DAT_057026ef == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_JSONNode);
    DAT_057026ef = '\x01';
  }
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_init_class();
  }
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).m_Node = aNode;
  il2cpp_runtime_glue(&__this->fields,aNode);
  (__this->fields).m_Key = aKey;
  il2cpp_runtime_glue(&(__this->fields).m_Key,aKey);
  return;
}


// SimpleJSONFixed.JSONLazyCreator$$Set<object>
// il2cpp: Il2CppObject* SimpleJSONFixed_JSONLazyCreator__Set_object_ (SimpleJSONFixed_JSONLazyCreator_o* __this, Il2CppObject* aVal, const MethodInfo_25213E0* method);
// 0x26213e0

Il2CppObject *
SimpleJSONFixed_JSONLazyCreator__Set<object>
          (SimpleJSONFixed_JSONLazyCreator_o *__this,Il2CppObject *aVal,MethodInfo_25213E0 *method)

{
  SimpleJSONFixed_JSONNode_o *pSVar1;
  System_String_o *pSVar2;
  
  pSVar1 = (__this->fields).m_Node;
  pSVar2 = (__this->fields).m_Key;
  if (pSVar2 == (System_String_o *)0x0) {
    if (pSVar1 == (SimpleJSONFixed_JSONNode_o *)0x0) goto LAB_02621449;
    (*(pSVar1->klass->vtable)._21_Add.methodPtr)(pSVar1,aVal,(pSVar1->klass->vtable)._21_Add.method)
    ;
  }
  else {
    if (pSVar1 == (SimpleJSONFixed_JSONNode_o *)0x0) {
LAB_02621449:
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    (*(pSVar1->klass->vtable)._20_Add.methodPtr)
              (pSVar1,pSVar2,aVal,(pSVar1->klass->vtable)._20_Add.method);
  }
  (__this->fields).m_Node = (SimpleJSONFixed_JSONNode_o *)0x0;
  il2cpp_runtime_glue(&__this->fields,0);
  return aVal;
}


// SimpleJSONFixed.JSONLazyCreator$$get_Item
// il2cpp: SimpleJSONFixed_JSONNode_o* SimpleJSONFixed_JSONLazyCreator__get_Item (SimpleJSONFixed_JSONLazyCreator_o* __this, int32_t aIndex, const MethodInfo* method);
// 0x3d8ac60

SimpleJSONFixed_JSONNode_o *
SimpleJSONFixed_JSONLazyCreator__get_Item
          (SimpleJSONFixed_JSONLazyCreator_o *__this,int32_t aIndex,MethodInfo *method)

{
  Il2CppObject *__this_00;
  
  if (DAT_057026f0 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_JSONLazyCreator);
    DAT_057026f0 = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_JSONLazyCreator);
  if (DAT_057026ee == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_JSONNode);
    DAT_057026ee = '\x01';
  }
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_init_class();
  }
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  __this_00[1].klass = (Il2CppClass *)__this;
  il2cpp_runtime_glue(__this_00 + 1,__this);
  __this_00[1].monitor = (void *)0x0;
  il2cpp_runtime_glue(&__this_00[1].monitor,0);
  return (SimpleJSONFixed_JSONNode_o *)__this_00;
}


// SimpleJSONFixed.JSONLazyCreator$$set_Item
// il2cpp: void SimpleJSONFixed_JSONLazyCreator__set_Item (SimpleJSONFixed_JSONLazyCreator_o* __this, int32_t aIndex, SimpleJSONFixed_JSONNode_o* value, const MethodInfo* method);
// 0x3d8ad10

void SimpleJSONFixed_JSONLazyCreator__set_Item
               (SimpleJSONFixed_JSONLazyCreator_o *__this,int32_t aIndex,
               SimpleJSONFixed_JSONNode_o *value,MethodInfo *method)

{
  Il2CppClass *pIVar1;
  Il2CppMethodPointer vtable_dispatch;
  SimpleJSONFixed_JSONArray_o *__this_00;
  Il2CppObject *pIVar2;
  undefined4 in_register_00000034;
  MethodInfo *method_00;
  
  method_00 = (MethodInfo *)CONCAT44(in_register_00000034,aIndex);
  if (DAT_057026f1 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_JSONArray);
    il2cpp_init_method_metadata(&MethodInfo_JSONArray_Set_JSONArray);
    DAT_057026f1 = '\x01';
  }
  __this_00 = (SimpleJSONFixed_JSONArray_o *)il2cpp_runtime_glue(TypeInfo_JSONArray);
  SimpleJSONFixed_JSONArray___ctor(__this_00,method_00);
  pIVar2 = SimpleJSONFixed_JSONLazyCreator__Set<object>
                     (__this,(Il2CppObject *)__this_00,MethodInfo_JSONArray_Set_JSONArray);
  if (pIVar2 != (Il2CppObject *)0x0) {
    pIVar1 = pIVar2->klass;
    vtable_dispatch = pIVar1->vtable[0x15].methodPtr;
    (*vtable_dispatch)(pIVar2,value,pIVar1->vtable[0x15].method,pIVar1,vtable_dispatch);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// SimpleJSONFixed.JSONLazyCreator$$get_Item
// il2cpp: SimpleJSONFixed_JSONNode_o* SimpleJSONFixed_JSONLazyCreator__get_Item (SimpleJSONFixed_JSONLazyCreator_o* __this, System_String_o* aKey, const MethodInfo* method);
// 0x3d8ada0

SimpleJSONFixed_JSONNode_o *
SimpleJSONFixed_JSONLazyCreator__get_Item
          (SimpleJSONFixed_JSONLazyCreator_o *__this,System_String_o *aKey,MethodInfo *method)

{
  Il2CppObject *__this_00;
  
  if (DAT_057026f2 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_JSONLazyCreator);
    DAT_057026f2 = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_JSONLazyCreator);
  if (DAT_057026ef == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_JSONNode);
    DAT_057026ef = '\x01';
  }
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_init_class();
  }
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  __this_00[1].klass = (Il2CppClass *)__this;
  il2cpp_runtime_glue(__this_00 + 1,__this);
  __this_00[1].monitor = aKey;
  il2cpp_runtime_glue(&__this_00[1].monitor,aKey);
  return (SimpleJSONFixed_JSONNode_o *)__this_00;
}


// SimpleJSONFixed.JSONLazyCreator$$set_Item
// il2cpp: void SimpleJSONFixed_JSONLazyCreator__set_Item (SimpleJSONFixed_JSONLazyCreator_o* __this, System_String_o* aKey, SimpleJSONFixed_JSONNode_o* value, const MethodInfo* method);
// 0x3d8ae50

void SimpleJSONFixed_JSONLazyCreator__set_Item
               (SimpleJSONFixed_JSONLazyCreator_o *__this,System_String_o *aKey,
               SimpleJSONFixed_JSONNode_o *value,MethodInfo *method)

{
  Il2CppMethodPointer vtable_dispatch;
  SimpleJSONFixed_JSONObject_o *__this_00;
  Il2CppObject *pIVar1;
  MethodInfo *method_00;
  
  method_00 = (MethodInfo *)aKey;
  if (DAT_057026f3 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_JSONObject_Set_JSONObject);
    il2cpp_init_method_metadata(&TypeInfo_JSONObject);
    DAT_057026f3 = '\x01';
  }
  __this_00 = (SimpleJSONFixed_JSONObject_o *)il2cpp_runtime_glue(TypeInfo_JSONObject);
  SimpleJSONFixed_JSONObject___ctor(__this_00,method_00);
  pIVar1 = SimpleJSONFixed_JSONLazyCreator__Set<object>
                     (__this,(Il2CppObject *)__this_00,MethodInfo_JSONObject_Set_JSONObject);
  if (pIVar1 != (Il2CppObject *)0x0) {
    vtable_dispatch = pIVar1->klass->vtable[0x14].methodPtr;
    (*vtable_dispatch)
              (pIVar1,aKey,value,pIVar1->klass->vtable[0x14].method,vtable_dispatch);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// SimpleJSONFixed.JSONLazyCreator$$Add
// il2cpp: void SimpleJSONFixed_JSONLazyCreator__Add (SimpleJSONFixed_JSONLazyCreator_o* __this, SimpleJSONFixed_JSONNode_o* aItem, const MethodInfo* method);
// 0x3d8aef0

void SimpleJSONFixed_JSONLazyCreator__Add
               (SimpleJSONFixed_JSONLazyCreator_o *__this,SimpleJSONFixed_JSONNode_o *aItem,
               MethodInfo *method)

{
  Il2CppClass *pIVar1;
  Il2CppMethodPointer vtable_dispatch;
  SimpleJSONFixed_JSONArray_o *__this_00;
  Il2CppObject *pIVar2;
  MethodInfo *method_00;
  
  method_00 = (MethodInfo *)aItem;
  if (DAT_057026f4 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_JSONArray);
    il2cpp_init_method_metadata(&MethodInfo_JSONArray_Set_JSONArray);
    DAT_057026f4 = '\x01';
  }
  __this_00 = (SimpleJSONFixed_JSONArray_o *)il2cpp_runtime_glue(TypeInfo_JSONArray);
  SimpleJSONFixed_JSONArray___ctor(__this_00,method_00);
  pIVar2 = SimpleJSONFixed_JSONLazyCreator__Set<object>
                     (__this,(Il2CppObject *)__this_00,MethodInfo_JSONArray_Set_JSONArray);
  if (pIVar2 != (Il2CppObject *)0x0) {
    pIVar1 = pIVar2->klass;
    vtable_dispatch = pIVar1->vtable[0x15].methodPtr;
    (*vtable_dispatch)(pIVar2,aItem,pIVar1->vtable[0x15].method,pIVar1,vtable_dispatch);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// SimpleJSONFixed.JSONLazyCreator$$Add
// il2cpp: void SimpleJSONFixed_JSONLazyCreator__Add (SimpleJSONFixed_JSONLazyCreator_o* __this, System_String_o* aKey, SimpleJSONFixed_JSONNode_o* aItem, const MethodInfo* method);
// 0x3d8af80

void SimpleJSONFixed_JSONLazyCreator__Add
               (SimpleJSONFixed_JSONLazyCreator_o *__this,System_String_o *aKey,
               SimpleJSONFixed_JSONNode_o *aItem,MethodInfo *method)

{
  Il2CppMethodPointer vtable_dispatch;
  SimpleJSONFixed_JSONObject_o *__this_00;
  Il2CppObject *pIVar1;
  MethodInfo *method_00;
  
  method_00 = (MethodInfo *)aKey;
  if (DAT_057026f5 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_JSONObject_Set_JSONObject);
    il2cpp_init_method_metadata(&TypeInfo_JSONObject);
    DAT_057026f5 = '\x01';
  }
  __this_00 = (SimpleJSONFixed_JSONObject_o *)il2cpp_runtime_glue(TypeInfo_JSONObject);
  SimpleJSONFixed_JSONObject___ctor(__this_00,method_00);
  pIVar1 = SimpleJSONFixed_JSONLazyCreator__Set<object>
                     (__this,(Il2CppObject *)__this_00,MethodInfo_JSONObject_Set_JSONObject);
  if (pIVar1 != (Il2CppObject *)0x0) {
    vtable_dispatch = pIVar1->klass->vtable[0x14].methodPtr;
    (*vtable_dispatch)
              (pIVar1,aKey,aItem,pIVar1->klass->vtable[0x14].method,vtable_dispatch);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// SimpleJSONFixed.JSONLazyCreator$$op_Equality
// il2cpp: bool SimpleJSONFixed_JSONLazyCreator__op_Equality (SimpleJSONFixed_JSONLazyCreator_o* a, Il2CppObject* b, const MethodInfo* method);
// 0x3d8b020

bool_conflict
SimpleJSONFixed_JSONLazyCreator__op_Equality
          (SimpleJSONFixed_JSONLazyCreator_o *a,Il2CppObject *b,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),
                  a == (SimpleJSONFixed_JSONLazyCreator_o *)b || b == (Il2CppObject *)0x0);
}


// SimpleJSONFixed.JSONLazyCreator$$op_Inequality
// il2cpp: bool SimpleJSONFixed_JSONLazyCreator__op_Inequality (SimpleJSONFixed_JSONLazyCreator_o* a, Il2CppObject* b, const MethodInfo* method);
// 0x3d8b030

bool_conflict
SimpleJSONFixed_JSONLazyCreator__op_Inequality
          (SimpleJSONFixed_JSONLazyCreator_o *a,Il2CppObject *b,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),
                  a != (SimpleJSONFixed_JSONLazyCreator_o *)b && b != (Il2CppObject *)0x0);
}


// SimpleJSONFixed.JSONLazyCreator$$Equals
// il2cpp: bool SimpleJSONFixed_JSONLazyCreator__Equals (SimpleJSONFixed_JSONLazyCreator_o* __this, Il2CppObject* obj, const MethodInfo* method);
// 0x3d8b040

bool_conflict
SimpleJSONFixed_JSONLazyCreator__Equals
          (SimpleJSONFixed_JSONLazyCreator_o *__this,Il2CppObject *obj,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),
                  __this == (SimpleJSONFixed_JSONLazyCreator_o *)obj || obj == (Il2CppObject *)0x0);
}


// SimpleJSONFixed.JSONLazyCreator$$GetHashCode
// il2cpp: int32_t SimpleJSONFixed_JSONLazyCreator__GetHashCode (SimpleJSONFixed_JSONLazyCreator_o* __this, const MethodInfo* method);
// 0x3d8b050

int32_t SimpleJSONFixed_JSONLazyCreator__GetHashCode
                  (SimpleJSONFixed_JSONLazyCreator_o *__this,MethodInfo *method)

{
  return 0;
}


// SimpleJSONFixed.JSONLazyCreator$$get_AsInt
// il2cpp: int32_t SimpleJSONFixed_JSONLazyCreator__get_AsInt (SimpleJSONFixed_JSONLazyCreator_o* __this, const MethodInfo* method);
// 0x3d8b060

int32_t SimpleJSONFixed_JSONLazyCreator__get_AsInt
                  (SimpleJSONFixed_JSONLazyCreator_o *__this,MethodInfo *method)

{
  Il2CppObject *__this_00;
  
  if (DAT_057026f6 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_JSONNumber_Set_JSONNumber);
    il2cpp_init_method_metadata(&TypeInfo_JSONNumber);
    DAT_057026f6 = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_JSONNumber);
  if (DAT_057026de == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_JSONNode);
    DAT_057026de = '\x01';
  }
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_init_class();
  }
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  __this_00[1].klass = (Il2CppClass *)0x0;
  SimpleJSONFixed_JSONLazyCreator__Set<object>(__this,__this_00,MethodInfo_JSONNumber_Set_JSONNumber);
  return 0;
}


// SimpleJSONFixed.JSONLazyCreator$$set_AsInt
// il2cpp: void SimpleJSONFixed_JSONLazyCreator__set_AsInt (SimpleJSONFixed_JSONLazyCreator_o* __this, int32_t value, const MethodInfo* method);
// 0x3d8b110

void SimpleJSONFixed_JSONLazyCreator__set_AsInt
               (SimpleJSONFixed_JSONLazyCreator_o *__this,int32_t value,MethodInfo *method)

{
  Il2CppObject *__this_00;
  
  if (DAT_057026f7 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_JSONNumber_Set_JSONNumber);
    il2cpp_init_method_metadata(&TypeInfo_JSONNumber);
    DAT_057026f7 = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_JSONNumber);
  if (DAT_057026de == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_JSONNode);
    DAT_057026de = '\x01';
  }
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_init_class();
  }
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  __this_00[1].klass = (Il2CppClass *)(double)value;
  SimpleJSONFixed_JSONLazyCreator__Set<object>(__this,__this_00,MethodInfo_JSONNumber_Set_JSONNumber);
  return;
}


// SimpleJSONFixed.JSONLazyCreator$$get_AsFloat
// il2cpp: float SimpleJSONFixed_JSONLazyCreator__get_AsFloat (SimpleJSONFixed_JSONLazyCreator_o* __this, const MethodInfo* method);
// 0x3d8b1d0

float SimpleJSONFixed_JSONLazyCreator__get_AsFloat
                (SimpleJSONFixed_JSONLazyCreator_o *__this,MethodInfo *method)

{
  Il2CppObject *__this_00;
  
  if (DAT_057026f8 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_JSONNumber_Set_JSONNumber);
    il2cpp_init_method_metadata(&TypeInfo_JSONNumber);
    DAT_057026f8 = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_JSONNumber);
  if (DAT_057026de == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_JSONNode);
    DAT_057026de = '\x01';
  }
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_init_class();
  }
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  __this_00[1].klass = (Il2CppClass *)0x0;
  SimpleJSONFixed_JSONLazyCreator__Set<object>(__this,__this_00,MethodInfo_JSONNumber_Set_JSONNumber);
  return 0.0;
}


// SimpleJSONFixed.JSONLazyCreator$$set_AsFloat
// il2cpp: void SimpleJSONFixed_JSONLazyCreator__set_AsFloat (SimpleJSONFixed_JSONLazyCreator_o* __this, float value, const MethodInfo* method);
// 0x3d8b280

void SimpleJSONFixed_JSONLazyCreator__set_AsFloat
               (SimpleJSONFixed_JSONLazyCreator_o *__this,float value,MethodInfo *method)

{
  Il2CppObject *__this_00;
  
  if (DAT_057026f9 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_JSONNumber_Set_JSONNumber);
    il2cpp_init_method_metadata(&TypeInfo_JSONNumber);
    DAT_057026f9 = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_JSONNumber);
  if (DAT_057026de == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_JSONNode);
    DAT_057026de = '\x01';
  }
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_init_class();
  }
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  __this_00[1].klass = (Il2CppClass *)(double)value;
  SimpleJSONFixed_JSONLazyCreator__Set<object>(__this,__this_00,MethodInfo_JSONNumber_Set_JSONNumber);
  return;
}


// SimpleJSONFixed.JSONLazyCreator$$get_AsDouble
// il2cpp: double SimpleJSONFixed_JSONLazyCreator__get_AsDouble (SimpleJSONFixed_JSONLazyCreator_o* __this, const MethodInfo* method);
// 0x3d8b340

double SimpleJSONFixed_JSONLazyCreator__get_AsDouble
                 (SimpleJSONFixed_JSONLazyCreator_o *__this,MethodInfo *method)

{
  Il2CppObject *__this_00;
  
  if (DAT_057026fa == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_JSONNumber_Set_JSONNumber);
    il2cpp_init_method_metadata(&TypeInfo_JSONNumber);
    DAT_057026fa = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_JSONNumber);
  if (DAT_057026de == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_JSONNode);
    DAT_057026de = '\x01';
  }
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_init_class();
  }
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  __this_00[1].klass = (Il2CppClass *)0x0;
  SimpleJSONFixed_JSONLazyCreator__Set<object>(__this,__this_00,MethodInfo_JSONNumber_Set_JSONNumber);
  return 0.0;
}


// SimpleJSONFixed.JSONLazyCreator$$set_AsDouble
// il2cpp: void SimpleJSONFixed_JSONLazyCreator__set_AsDouble (SimpleJSONFixed_JSONLazyCreator_o* __this, double value, const MethodInfo* method);
// 0x3d8b3f0

void SimpleJSONFixed_JSONLazyCreator__set_AsDouble
               (SimpleJSONFixed_JSONLazyCreator_o *__this,double value,MethodInfo *method)

{
  Il2CppObject *__this_00;
  
  if (DAT_057026fb == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_JSONNumber_Set_JSONNumber);
    il2cpp_init_method_metadata(&TypeInfo_JSONNumber);
    DAT_057026fb = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_JSONNumber);
  if (DAT_057026de == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_JSONNode);
    DAT_057026de = '\x01';
  }
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_init_class();
  }
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  __this_00[1].klass = (Il2CppClass *)value;
  SimpleJSONFixed_JSONLazyCreator__Set<object>(__this,__this_00,MethodInfo_JSONNumber_Set_JSONNumber);
  return;
}


// SimpleJSONFixed.JSONLazyCreator$$get_AsLong
// il2cpp: int64_t SimpleJSONFixed_JSONLazyCreator__get_AsLong (SimpleJSONFixed_JSONLazyCreator_o* __this, const MethodInfo* method);
// 0x3d8b4a0

int64_t SimpleJSONFixed_JSONLazyCreator__get_AsLong
                  (SimpleJSONFixed_JSONLazyCreator_o *__this,MethodInfo *method)

{
  char cVar1;
  int iVar2;
  Il2CppClass *pIVar3;
  Il2CppObject *__this_00;
  undefined8 *puVar4;
  
  if (DAT_057026fc == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_JSONNumber_Set_JSONNumber);
    il2cpp_init_method_metadata(&MethodInfo_JSONString_Set_JSONString);
    il2cpp_init_method_metadata(&TypeInfo_JSONNode);
    il2cpp_init_method_metadata(&TypeInfo_JSONNumber);
    il2cpp_init_method_metadata(&TypeInfo_JSONString);
    il2cpp_init_method_metadata(&"0");
    DAT_057026fc = '\x01';
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
    __this_00 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_JSONNumber);
    if (DAT_057026de == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_JSONNode);
      DAT_057026de = '\x01';
    }
    if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
      il2cpp_init_class();
    }
    System_Object___ctor(__this_00,(MethodInfo *)0x0);
    __this_00[1].klass = (Il2CppClass *)0x0;
    puVar4 = &MethodInfo_JSONNumber_Set_JSONNumber;
  }
  else {
    __this_00 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_JSONString);
    pIVar3 = "0";
    if (DAT_057026d7 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_JSONNode);
      DAT_057026d7 = '\x01';
    }
    if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
      il2cpp_init_class();
    }
    System_Object___ctor(__this_00,(MethodInfo *)0x0);
    __this_00[1].klass = pIVar3;
    il2cpp_runtime_glue(__this_00 + 1,pIVar3);
    puVar4 = &MethodInfo_JSONString_Set_JSONString;
  }
  SimpleJSONFixed_JSONLazyCreator__Set<object>(__this,__this_00,(MethodInfo_25213E0 *)*puVar4);
  return 0;
}


// SimpleJSONFixed.JSONLazyCreator$$set_AsLong
// il2cpp: void SimpleJSONFixed_JSONLazyCreator__set_AsLong (SimpleJSONFixed_JSONLazyCreator_o* __this, int64_t value, const MethodInfo* method);
// 0x3d8b650

void SimpleJSONFixed_JSONLazyCreator__set_AsLong
               (SimpleJSONFixed_JSONLazyCreator_o *__this,int64_t value,MethodInfo *method)

{
  char cVar1;
  int iVar2;
  Il2CppClass *pIVar3;
  Il2CppObject *pIVar4;
  int64_t local_28;
  
  local_28 = value;
  if (DAT_057026fd == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_JSONNumber_Set_JSONNumber);
    il2cpp_init_method_metadata(&MethodInfo_JSONString_Set_JSONString);
    il2cpp_init_method_metadata(&TypeInfo_JSONNode);
    il2cpp_init_method_metadata(&TypeInfo_JSONNumber);
    il2cpp_init_method_metadata(&TypeInfo_JSONString);
    DAT_057026fd = '\x01';
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
  if (cVar1 != '\0') {
    pIVar3 = (Il2CppClass *)System_Int64__ToString((int64_t)&local_28,(MethodInfo *)0x0);
    pIVar4 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_JSONString);
    if (DAT_057026d7 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_JSONNode);
      DAT_057026d7 = '\x01';
    }
    if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
      il2cpp_init_class();
    }
    System_Object___ctor(pIVar4,(MethodInfo *)0x0);
    pIVar4[1].klass = pIVar3;
    il2cpp_runtime_glue(pIVar4 + 1,pIVar3);
    SimpleJSONFixed_JSONLazyCreator__Set<object>(__this,pIVar4,MethodInfo_JSONString_Set_JSONString);
    return;
  }
  pIVar4 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_JSONNumber);
  if (DAT_057026de == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_JSONNode);
    DAT_057026de = '\x01';
  }
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_init_class();
  }
  System_Object___ctor(pIVar4,(MethodInfo *)0x0);
  pIVar4[1].klass = (Il2CppClass *)(double)value;
  SimpleJSONFixed_JSONLazyCreator__Set<object>(__this,pIVar4,MethodInfo_JSONNumber_Set_JSONNumber);
  return;
}


// SimpleJSONFixed.JSONLazyCreator$$get_AsULong
// il2cpp: uint64_t SimpleJSONFixed_JSONLazyCreator__get_AsULong (SimpleJSONFixed_JSONLazyCreator_o* __this, const MethodInfo* method);
// 0x3d8b820

uint64_t SimpleJSONFixed_JSONLazyCreator__get_AsULong
                   (SimpleJSONFixed_JSONLazyCreator_o *__this,MethodInfo *method)

{
  char cVar1;
  int iVar2;
  Il2CppClass *pIVar3;
  Il2CppObject *__this_00;
  undefined8 *puVar4;
  
  if (DAT_057026fe == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_JSONNumber_Set_JSONNumber);
    il2cpp_init_method_metadata(&MethodInfo_JSONString_Set_JSONString);
    il2cpp_init_method_metadata(&TypeInfo_JSONNode);
    il2cpp_init_method_metadata(&TypeInfo_JSONNumber);
    il2cpp_init_method_metadata(&TypeInfo_JSONString);
    il2cpp_init_method_metadata(&"0");
    DAT_057026fe = '\x01';
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
    __this_00 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_JSONNumber);
    if (DAT_057026de == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_JSONNode);
      DAT_057026de = '\x01';
    }
    if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
      il2cpp_init_class();
    }
    System_Object___ctor(__this_00,(MethodInfo *)0x0);
    __this_00[1].klass = (Il2CppClass *)0x0;
    puVar4 = &MethodInfo_JSONNumber_Set_JSONNumber;
  }
  else {
    __this_00 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_JSONString);
    pIVar3 = "0";
    if (DAT_057026d7 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_JSONNode);
      DAT_057026d7 = '\x01';
    }
    if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
      il2cpp_init_class();
    }
    System_Object___ctor(__this_00,(MethodInfo *)0x0);
    __this_00[1].klass = pIVar3;
    il2cpp_runtime_glue(__this_00 + 1,pIVar3);
    puVar4 = &MethodInfo_JSONString_Set_JSONString;
  }
  SimpleJSONFixed_JSONLazyCreator__Set<object>(__this,__this_00,(MethodInfo_25213E0 *)*puVar4);
  return 0;
}


// SimpleJSONFixed.JSONLazyCreator$$set_AsULong
// il2cpp: void SimpleJSONFixed_JSONLazyCreator__set_AsULong (SimpleJSONFixed_JSONLazyCreator_o* __this, uint64_t value, const MethodInfo* method);
// 0x3d8b9d0

void SimpleJSONFixed_JSONLazyCreator__set_AsULong
               (SimpleJSONFixed_JSONLazyCreator_o *__this,uint64_t value,MethodInfo *method)

{
  char cVar1;
  int iVar2;
  Il2CppClass *pIVar3;
  Il2CppObject *pIVar4;
  double dVar5;
  undefined1 auVar6 [16];
  double dVar7;
  uint64_t local_40;
  double local_38;
  double dStack_30;
  
  local_40 = value;
  if (DAT_057026ff == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_JSONNumber_Set_JSONNumber);
    il2cpp_init_method_metadata(&MethodInfo_JSONString_Set_JSONString);
    il2cpp_init_method_metadata(&TypeInfo_JSONNode);
    il2cpp_init_method_metadata(&TypeInfo_JSONNumber);
    il2cpp_init_method_metadata(&TypeInfo_JSONString);
    DAT_057026ff = '\x01';
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
  if (cVar1 != '\0') {
    pIVar3 = (Il2CppClass *)System_UInt64__ToString((uint64_t)&local_40,(MethodInfo *)0x0);
    pIVar4 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_JSONString);
    if (DAT_057026d7 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_JSONNode);
      DAT_057026d7 = '\x01';
    }
    if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
      il2cpp_init_class();
    }
    System_Object___ctor(pIVar4,(MethodInfo *)0x0);
    pIVar4[1].klass = pIVar3;
    il2cpp_runtime_glue(pIVar4 + 1,pIVar3);
    SimpleJSONFixed_JSONLazyCreator__Set<object>(__this,pIVar4,MethodInfo_JSONString_Set_JSONString);
    return;
  }
  pIVar4 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_JSONNumber);
  auVar6._8_4_ = (int)(value >> 0x20);
  auVar6._0_8_ = value;
  auVar6._12_4_ = 0x45300000;
  dVar5 = (double)CONCAT44(0x43300000,(int)value) - 4503599627370496.0;
  dVar7 = auVar6._8_8_ - 1.9342813113834067e+25;
  if (DAT_057026de == '\0') {
    local_38 = dVar5;
    dStack_30 = dVar7;
    il2cpp_init_method_metadata(&TypeInfo_JSONNode);
    DAT_057026de = '\x01';
    dVar5 = local_38;
  }
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_init_class();
  }
  System_Object___ctor(pIVar4,(MethodInfo *)0x0);
  pIVar4[1].klass = (Il2CppClass *)(dVar7 + dVar5);
  SimpleJSONFixed_JSONLazyCreator__Set<object>(__this,pIVar4,MethodInfo_JSONNumber_Set_JSONNumber);
  return;
}


// SimpleJSONFixed.JSONLazyCreator$$get_AsBool
// il2cpp: bool SimpleJSONFixed_JSONLazyCreator__get_AsBool (SimpleJSONFixed_JSONLazyCreator_o* __this, const MethodInfo* method);
// 0x3d8bbd0

bool_conflict
SimpleJSONFixed_JSONLazyCreator__get_AsBool
          (SimpleJSONFixed_JSONLazyCreator_o *__this,MethodInfo *method)

{
  Il2CppObject *__this_00;
  
  if (DAT_05702700 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_JSONBool);
    il2cpp_init_method_metadata(&MethodInfo_JSONBool_Set_JSONBool);
    DAT_05702700 = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_JSONBool);
  if (DAT_057026e3 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_JSONNode);
    DAT_057026e3 = '\x01';
  }
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_init_class();
  }
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  *(undefined1 *)&__this_00[1].klass = 0;
  SimpleJSONFixed_JSONLazyCreator__Set<object>(__this,__this_00,MethodInfo_JSONBool_Set_JSONBool);
  return 0;
}


// SimpleJSONFixed.JSONLazyCreator$$set_AsBool
// il2cpp: void SimpleJSONFixed_JSONLazyCreator__set_AsBool (SimpleJSONFixed_JSONLazyCreator_o* __this, bool value, const MethodInfo* method);
// 0x3d8bc80

void SimpleJSONFixed_JSONLazyCreator__set_AsBool
               (SimpleJSONFixed_JSONLazyCreator_o *__this,bool_conflict value,MethodInfo *method)

{
  Il2CppObject *__this_00;
  
  if (DAT_05702701 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_JSONBool);
    il2cpp_init_method_metadata(&MethodInfo_JSONBool_Set_JSONBool);
    DAT_05702701 = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_JSONBool);
  if (DAT_057026e3 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_JSONNode);
    DAT_057026e3 = '\x01';
  }
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_init_class();
  }
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  *(char *)&__this_00[1].klass = (char)value;
  SimpleJSONFixed_JSONLazyCreator__Set<object>(__this,__this_00,MethodInfo_JSONBool_Set_JSONBool);
  return;
}


// SimpleJSONFixed.JSONLazyCreator$$get_AsArray
// il2cpp: SimpleJSONFixed_JSONArray_o* SimpleJSONFixed_JSONLazyCreator__get_AsArray (SimpleJSONFixed_JSONLazyCreator_o* __this, const MethodInfo* method);
// 0x3d8bd20

SimpleJSONFixed_JSONArray_o *
SimpleJSONFixed_JSONLazyCreator__get_AsArray
          (SimpleJSONFixed_JSONLazyCreator_o *__this,MethodInfo *method)

{
  SimpleJSONFixed_JSONArray_o *pSVar1;
  
  if (DAT_05702702 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_JSONArray);
    il2cpp_init_method_metadata(&MethodInfo_JSONArray_Set_JSONArray);
    DAT_05702702 = '\x01';
  }
  pSVar1 = (SimpleJSONFixed_JSONArray_o *)il2cpp_runtime_glue(TypeInfo_JSONArray);
  SimpleJSONFixed_JSONArray___ctor(pSVar1,method);
  pSVar1 = (SimpleJSONFixed_JSONArray_o *)
           SimpleJSONFixed_JSONLazyCreator__Set<object>(__this,(Il2CppObject *)pSVar1,MethodInfo_JSONArray_Set_JSONArray);
  return pSVar1;
}


// SimpleJSONFixed.JSONLazyCreator$$get_AsObject
// il2cpp: SimpleJSONFixed_JSONObject_o* SimpleJSONFixed_JSONLazyCreator__get_AsObject (SimpleJSONFixed_JSONLazyCreator_o* __this, const MethodInfo* method);
// 0x3d8bd90

SimpleJSONFixed_JSONObject_o *
SimpleJSONFixed_JSONLazyCreator__get_AsObject
          (SimpleJSONFixed_JSONLazyCreator_o *__this,MethodInfo *method)

{
  SimpleJSONFixed_JSONObject_o *pSVar1;
  
  if (DAT_05702703 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_JSONObject_Set_JSONObject);
    il2cpp_init_method_metadata(&TypeInfo_JSONObject);
    DAT_05702703 = '\x01';
  }
  pSVar1 = (SimpleJSONFixed_JSONObject_o *)il2cpp_runtime_glue(TypeInfo_JSONObject);
  SimpleJSONFixed_JSONObject___ctor(pSVar1,method);
  pSVar1 = (SimpleJSONFixed_JSONObject_o *)
           SimpleJSONFixed_JSONLazyCreator__Set<object>(__this,(Il2CppObject *)pSVar1,MethodInfo_JSONObject_Set_JSONObject);
  return pSVar1;
}


// SimpleJSONFixed.JSONLazyCreator$$WriteToStringBuilder
// il2cpp: void SimpleJSONFixed_JSONLazyCreator__WriteToStringBuilder (SimpleJSONFixed_JSONLazyCreator_o* __this, System_Text_StringBuilder_o* aSB, int32_t aIndent, int32_t aIndentInc, int32_t aMode, const MethodInfo* method);
// 0x3d8be00

void SimpleJSONFixed_JSONLazyCreator__WriteToStringBuilder
               (SimpleJSONFixed_JSONLazyCreator_o *__this,System_Text_StringBuilder_o *aSB,
               int32_t aIndent,int32_t aIndentInc,int32_t aMode,MethodInfo *method)

{
  if (DAT_05702704 == '\0') {
    il2cpp_init_method_metadata(&"null");
    DAT_05702704 = '\x01';
  }
  if (aSB != (System_Text_StringBuilder_o *)0x0) {
    System_Text_StringBuilder__Append(aSB,"null",(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


