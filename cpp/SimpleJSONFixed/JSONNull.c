// Type: SimpleJSONFixed.JSONNull
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/SimpleJSONFixed/JSONNull.cs
// Prior real C# source (older reference): Assets/Scripts/Utility/SimpleJSON.cs
// --------------------------------

// SimpleJSONFixed.JSONNull$$CreateOrGet
// il2cpp: SimpleJSONFixed_JSONNull_o* SimpleJSONFixed_JSONNull__CreateOrGet (const MethodInfo* method);
// 0x4079a30

SimpleJSONFixed_JSONNull_o * SimpleJSONFixed_JSONNull__CreateOrGet(MethodInfo *method)

{
  char cVar1;
  int iVar2;
  Il2CppObject *__this;
  
  if (g_data_057ac397 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNull);
    g_data_057ac397 = '\x01';
    iVar2 = *(int *)(TypeInfo_JSONNull + 0xe4);
  }
  else {
    iVar2 = *(int *)(TypeInfo_JSONNull + 0xe4);
  }
  if (iVar2 == 0) {
    il2cpp_runtime_helper_02337ed0();
    cVar1 = *(char *)(*(long *)(TypeInfo_JSONNull + 0xb8) + 8);
  }
  else {
    cVar1 = *(char *)(*(long *)(TypeInfo_JSONNull + 0xb8) + 8);
  }
  if (cVar1 != '\0') {
    if (*(int *)(TypeInfo_JSONNull + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    return (SimpleJSONFixed_JSONNull_o *)**(undefined8 **)(TypeInfo_JSONNull + 0xb8);
  }
  __this = (Il2CppObject *)il2cpp_runtime_helper_023052d0();
  if (g_data_057ac398 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    g_data_057ac398 = '\x01';
  }
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  System_Object___ctor(__this,(MethodInfo *)0x0);
  return (SimpleJSONFixed_JSONNull_o *)__this;
}


// SimpleJSONFixed.JSONNull$$.ctor
// il2cpp: void SimpleJSONFixed_JSONNull___ctor (SimpleJSONFixed_JSONNull_o* __this, const MethodInfo* method);
// 0x4080290

void SimpleJSONFixed_JSONNull___ctor(SimpleJSONFixed_JSONNull_o *__this,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ac398 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    g_data_057ac398 = '\x01';
    iVar1 = *(int *)(TypeInfo_JSONNode + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_JSONNode + 0xe4);
  }
  if (iVar1 != 0) {
    System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_02337ed0();
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// SimpleJSONFixed.JSONNull$$get_Tag
// il2cpp: int32_t SimpleJSONFixed_JSONNull__get_Tag (SimpleJSONFixed_JSONNull_o* __this, const MethodInfo* method);
// 0x4080300

int32_t SimpleJSONFixed_JSONNull__get_Tag(SimpleJSONFixed_JSONNull_o *__this,MethodInfo *method)

{
  return 5;
}


// SimpleJSONFixed.JSONNull$$get_IsNull
// il2cpp: bool SimpleJSONFixed_JSONNull__get_IsNull (SimpleJSONFixed_JSONNull_o* __this, const MethodInfo* method);
// 0x4080310

bool_conflict SimpleJSONFixed_JSONNull__get_IsNull(SimpleJSONFixed_JSONNull_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// SimpleJSONFixed.JSONNull$$GetEnumerator
// il2cpp: SimpleJSONFixed_JSONNode_Enumerator_o SimpleJSONFixed_JSONNull__GetEnumerator (SimpleJSONFixed_JSONNull_o* __this, const MethodInfo* method);
// 0x4080320

SimpleJSONFixed_JSONNode_Enumerator_o *
SimpleJSONFixed_JSONNull__GetEnumerator
          (SimpleJSONFixed_JSONNode_Enumerator_o *__return_storage_ptr__,SimpleJSONFixed_JSONNull_o *__this,
          MethodInfo *method)

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


// SimpleJSONFixed.JSONNull$$get_Value
// il2cpp: System_String_o* SimpleJSONFixed_JSONNull__get_Value (SimpleJSONFixed_JSONNull_o* __this, const MethodInfo* method);
// 0x4080340

System_String_o * SimpleJSONFixed_JSONNull__get_Value(SimpleJSONFixed_JSONNull_o *__this,MethodInfo *method)

{
  if (g_data_057ac399 == '\0') {
    il2cpp_runtime_helper_023445d0(&"null");
    g_data_057ac399 = '\x01';
  }
  return "null";
}


// SimpleJSONFixed.JSONNull$$set_Value
// il2cpp: void SimpleJSONFixed_JSONNull__set_Value (SimpleJSONFixed_JSONNull_o* __this, System_String_o* value, const MethodInfo* method);
// 0x4080370

void SimpleJSONFixed_JSONNull__set_Value
               (SimpleJSONFixed_JSONNull_o *__this,System_String_o *value,MethodInfo *method)

{
  return;
}


// SimpleJSONFixed.JSONNull$$get_AsBool
// il2cpp: bool SimpleJSONFixed_JSONNull__get_AsBool (SimpleJSONFixed_JSONNull_o* __this, const MethodInfo* method);
// 0x4080380

bool_conflict SimpleJSONFixed_JSONNull__get_AsBool(SimpleJSONFixed_JSONNull_o *__this,MethodInfo *method)

{
  return 0;
}


// SimpleJSONFixed.JSONNull$$set_AsBool
// il2cpp: void SimpleJSONFixed_JSONNull__set_AsBool (SimpleJSONFixed_JSONNull_o* __this, bool value, const MethodInfo* method);
// 0x4080390

void SimpleJSONFixed_JSONNull__set_AsBool
               (SimpleJSONFixed_JSONNull_o *__this,bool_conflict value,MethodInfo *method)

{
  return;
}


// SimpleJSONFixed.JSONNull$$Clone
// il2cpp: SimpleJSONFixed_JSONNode_o* SimpleJSONFixed_JSONNull__Clone (SimpleJSONFixed_JSONNull_o* __this, const MethodInfo* method);
// 0x40803a0

SimpleJSONFixed_JSONNode_o *
SimpleJSONFixed_JSONNull__Clone(SimpleJSONFixed_JSONNull_o *__this,MethodInfo *method)

{
  int iVar1;
  SimpleJSONFixed_JSONNode_o *pSVar2;
  MethodInfo *method_00;
  
  if (g_data_057ac39a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNull);
    g_data_057ac39a = '\x01';
    iVar1 = *(int *)((long)&TypeInfo_JSONNull[2].parameters + 4);
    method_00 = TypeInfo_JSONNull;
  }
  else {
    iVar1 = *(int *)((long)&TypeInfo_JSONNull[2].parameters + 4);
    method_00 = TypeInfo_JSONNull;
  }
  TypeInfo_JSONNull = method_00;
  if (iVar1 != 0) {
    pSVar2 = (SimpleJSONFixed_JSONNode_o *)SimpleJSONFixed_JSONNull__CreateOrGet(method_00);
    return pSVar2;
  }
  il2cpp_runtime_helper_02337ed0();
  pSVar2 = (SimpleJSONFixed_JSONNode_o *)SimpleJSONFixed_JSONNull__CreateOrGet(method_00);
  return pSVar2;
}


// SimpleJSONFixed.JSONNull$$Equals
// il2cpp: bool SimpleJSONFixed_JSONNull__Equals (SimpleJSONFixed_JSONNull_o* __this, Il2CppObject* obj, const MethodInfo* method);
// 0x4080400

bool_conflict
SimpleJSONFixed_JSONNull__Equals(SimpleJSONFixed_JSONNull_o *__this,Il2CppObject *obj,MethodInfo *method)

{
  byte bVar1;
  undefined8 in_RAX;
  
  if (g_data_057ac39b == '\0') {
    in_RAX = il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNull);
    g_data_057ac39b = '\x01';
  }
  if ((Il2CppObject *)__this != obj) {
    if (obj != (Il2CppObject *)0x0) {
      bVar1 = (TypeInfo_JSONNull->_2).naturalAligment;
      if (bVar1 <= (obj->klass->_2).naturalAligment) {
        return (bool_conflict)
               CONCAT71((int7)((ulong)TypeInfo_JSONNull >> 8),
                        (obj->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_JSONNull);
      }
    }
    return 0;
  }
  return (bool_conflict)CONCAT71((int7)((ulong)in_RAX >> 8),1);
}


// SimpleJSONFixed.JSONNull$$GetHashCode
// il2cpp: int32_t SimpleJSONFixed_JSONNull__GetHashCode (SimpleJSONFixed_JSONNull_o* __this, const MethodInfo* method);
// 0x4080480

int32_t SimpleJSONFixed_JSONNull__GetHashCode(SimpleJSONFixed_JSONNull_o *__this,MethodInfo *method)

{
  return 0;
}


// SimpleJSONFixed.JSONNull$$WriteToStringBuilder
// il2cpp: void SimpleJSONFixed_JSONNull__WriteToStringBuilder (SimpleJSONFixed_JSONNull_o* __this, System_Text_StringBuilder_o* aSB, int32_t aIndent, int32_t aIndentInc, int32_t aMode, const MethodInfo* method);
// 0x4080490

void SimpleJSONFixed_JSONNull__WriteToStringBuilder
               (SimpleJSONFixed_JSONNull_o *__this,System_Text_StringBuilder_o *aSB,int32_t aIndent,
               int32_t aIndentInc,int32_t aMode,MethodInfo *method)

{
  Il2CppObject *__this_00;
  
  if (g_data_057ac39c == '\0') {
    il2cpp_runtime_helper_023445d0(&"null");
    g_data_057ac39c = '\x01';
  }
  if (aSB != (System_Text_StringBuilder_o *)0x0) {
    System_Text_StringBuilder__Append_3b03f90(aSB,"null",(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac39d == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNull);
    g_data_057ac39d = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_JSONNull);
  if (g_data_057ac398 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    g_data_057ac398 = '\x01';
  }
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_JSONNull + 0xb8) = __this_00;
  il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_JSONNull + 0xb8),__this_00);
  *(undefined1 *)(*(long *)(TypeInfo_JSONNull + 0xb8) + 8) = 1;
  return;
}


// SimpleJSONFixed.JSONNull$$.cctor
// il2cpp: void SimpleJSONFixed_JSONNull___cctor (const MethodInfo* method);
// 0x40804d0

void SimpleJSONFixed_JSONNull___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (g_data_057ac39d == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNull);
    g_data_057ac39d = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_JSONNull);
  if (g_data_057ac398 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    g_data_057ac398 = '\x01';
  }
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  System_Object___ctor(__this,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_JSONNull + 0xb8) = __this;
  il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_JSONNull + 0xb8),__this);
  *(undefined1 *)(*(long *)(TypeInfo_JSONNull + 0xb8) + 8) = 1;
  return;
}


