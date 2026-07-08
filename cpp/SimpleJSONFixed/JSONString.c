// Type: SimpleJSONFixed.JSONString
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/SimpleJSONFixed/JSONString.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/Utility/SimpleJSON.cs  [CHANGED since prior version]
// --------------------------------

// SimpleJSONFixed.JSONString$$get_Tag
// il2cpp: int32_t SimpleJSONFixed_JSONString__get_Tag (SimpleJSONFixed_JSONString_o* __this, const MethodInfo* method);
// 0x3d89d00

int32_t SimpleJSONFixed_JSONString__get_Tag(SimpleJSONFixed_JSONString_o *__this,MethodInfo *method)

{
  return 3;
}


// SimpleJSONFixed.JSONString$$get_IsString
// il2cpp: bool SimpleJSONFixed_JSONString__get_IsString (SimpleJSONFixed_JSONString_o* __this, const MethodInfo* method);
// 0x3d89d10

bool_conflict
SimpleJSONFixed_JSONString__get_IsString(SimpleJSONFixed_JSONString_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// SimpleJSONFixed.JSONString$$GetEnumerator
// il2cpp: SimpleJSONFixed_JSONNode_Enumerator_o SimpleJSONFixed_JSONString__GetEnumerator (SimpleJSONFixed_JSONString_o* __this, const MethodInfo* method);
// 0x3d89d20

/* WARNING: Type propagation algorithm not settling */

SimpleJSONFixed_JSONNode_Enumerator_o *
SimpleJSONFixed_JSONString__GetEnumerator
          (SimpleJSONFixed_JSONNode_Enumerator_o *__return_storage_ptr__,
          SimpleJSONFixed_JSONString_o *__this,MethodInfo *method)

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


// SimpleJSONFixed.JSONString$$get_Value
// il2cpp: System_String_o* SimpleJSONFixed_JSONString__get_Value (SimpleJSONFixed_JSONString_o* __this, const MethodInfo* method);
// 0x3d89d40

System_String_o *
SimpleJSONFixed_JSONString__get_Value(SimpleJSONFixed_JSONString_o *__this,MethodInfo *method)

{
  return (__this->fields).m_Data;
}


// SimpleJSONFixed.JSONString$$set_Value
// il2cpp: void SimpleJSONFixed_JSONString__set_Value (SimpleJSONFixed_JSONString_o* __this, System_String_o* value, const MethodInfo* method);
// 0x3d89d50

void SimpleJSONFixed_JSONString__set_Value
               (SimpleJSONFixed_JSONString_o *__this,System_String_o *value,MethodInfo *method)

{
  (__this->fields).m_Data = value;
  il2cpp_runtime_glue(&__this->fields);
  return;
}


// SimpleJSONFixed.JSONString$$.ctor
// il2cpp: void SimpleJSONFixed_JSONString___ctor (SimpleJSONFixed_JSONString_o* __this, System_String_o* aData, const MethodInfo* method);
// 0x3d84070

void SimpleJSONFixed_JSONString___ctor
               (SimpleJSONFixed_JSONString_o *__this,System_String_o *aData,MethodInfo *method)

{
  if (DAT_057026d7 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_JSONNode);
    DAT_057026d7 = '\x01';
  }
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_init_class();
  }
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).m_Data = aData;
  il2cpp_runtime_glue(&__this->fields,aData);
  return;
}


// SimpleJSONFixed.JSONString$$Clone
// il2cpp: SimpleJSONFixed_JSONNode_o* SimpleJSONFixed_JSONString__Clone (SimpleJSONFixed_JSONString_o* __this, const MethodInfo* method);
// 0x3d89d60

SimpleJSONFixed_JSONNode_o *
SimpleJSONFixed_JSONString__Clone(SimpleJSONFixed_JSONString_o *__this,MethodInfo *method)

{
  Il2CppClass *pIVar1;
  Il2CppObject *__this_00;
  
  if (DAT_057026d8 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_JSONString);
    DAT_057026d8 = '\x01';
  }
  pIVar1 = (Il2CppClass *)(__this->fields).m_Data;
  __this_00 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_JSONString);
  if (DAT_057026d7 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_JSONNode);
    DAT_057026d7 = '\x01';
  }
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_init_class();
  }
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  __this_00[1].klass = pIVar1;
  il2cpp_runtime_glue(__this_00 + 1,pIVar1);
  return (SimpleJSONFixed_JSONNode_o *)__this_00;
}


// SimpleJSONFixed.JSONString$$WriteToStringBuilder
// il2cpp: void SimpleJSONFixed_JSONString__WriteToStringBuilder (SimpleJSONFixed_JSONString_o* __this, System_Text_StringBuilder_o* aSB, int32_t aIndent, int32_t aIndentInc, int32_t aMode, const MethodInfo* method);
// 0x3d89e00

void SimpleJSONFixed_JSONString__WriteToStringBuilder
               (SimpleJSONFixed_JSONString_o *__this,System_Text_StringBuilder_o *aSB,
               int32_t aIndent,int32_t aIndentInc,int32_t aMode,MethodInfo *method)

{
  System_Text_StringBuilder_o *pSVar1;
  System_String_o *pSVar2;
  MethodInfo *method_00;
  
  if (DAT_057026d9 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_JSONNode);
    DAT_057026d9 = '\x01';
  }
  if (aSB != (System_Text_StringBuilder_o *)0x0) {
    method_00 = (MethodInfo *)0x22;
    pSVar1 = System_Text_StringBuilder__Append(aSB,0x22,(MethodInfo *)0x0);
    pSVar2 = (__this->fields).m_Data;
    if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pSVar2 = SimpleJSONFixed_JSONNode__Escape(pSVar2,method_00);
    if (pSVar1 != (System_Text_StringBuilder_o *)0x0) {
      pSVar1 = System_Text_StringBuilder__Append(pSVar1,pSVar2,(MethodInfo *)0x0);
      if (pSVar1 != (System_Text_StringBuilder_o *)0x0) {
        System_Text_StringBuilder__Append(pSVar1,0x22,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// SimpleJSONFixed.JSONString$$Equals
// il2cpp: bool SimpleJSONFixed_JSONString__Equals (SimpleJSONFixed_JSONString_o* __this, Il2CppObject* obj, const MethodInfo* method);
// 0x3d89ea0

bool_conflict
SimpleJSONFixed_JSONString__Equals
          (SimpleJSONFixed_JSONString_o *__this,Il2CppObject *obj,MethodInfo *method)

{
  byte bVar1;
  int iVar2;
  Il2CppClass *pIVar3;
  bool_conflict bVar4;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
  System_String_o *a;
  Il2CppObject *a_00;
  
  if (DAT_057026da == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_JSONNode);
    il2cpp_init_method_metadata(&TypeInfo_JSONString);
    DAT_057026da = '\x01';
    method = extraout_RDX;
  }
  if (__this == (SimpleJSONFixed_JSONString_o *)obj) {
    return (bool_conflict)CONCAT71((int7)((ulong)obj >> 8),1);
  }
  if (obj == (Il2CppObject *)0x0) {
LAB_03d89f0d:
    a_00 = (Il2CppObject *)0x0;
    if (*(int *)(TypeInfo_JSONNode + 0xe4) != 0) goto LAB_03d89f27;
LAB_03d89fae:
    il2cpp_init_class();
    method = extraout_RDX_00;
    if (DAT_0570269d == '\0') goto LAB_03d89fc0;
LAB_03d89f34:
    iVar2 = *(int *)(TypeInfo_JSONNode + 0xe4);
  }
  else {
    pIVar3 = obj->klass;
    if (pIVar3 == DAT_057110b0) {
      a = (__this->fields).m_Data;
      goto LAB_03d89f78;
    }
    bVar1 = (TypeInfo_JSONString->_2).naturalAligment;
    method = (MethodInfo *)(ulong)bVar1;
    if ((pIVar3->_2).naturalAligment < bVar1) goto LAB_03d89f0d;
    a_00 = (Il2CppObject *)0x0;
    if ((pIVar3->_2).typeHierarchy[(long)&method[-1].field_0x57] == TypeInfo_JSONString) {
      a_00 = obj;
    }
    if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) goto LAB_03d89fae;
LAB_03d89f27:
    if (DAT_0570269d != '\0') goto LAB_03d89f34;
LAB_03d89fc0:
    il2cpp_init_method_metadata(&TypeInfo_JSONNode);
    DAT_0570269d = '\x01';
    iVar2 = *(int *)(TypeInfo_JSONNode + 0xe4);
    method = extraout_RDX_01;
  }
  if (iVar2 == 0) {
    il2cpp_init_class();
    method = extraout_RDX_02;
  }
  bVar4 = SimpleJSONFixed_JSONNode__op_Equality
                    ((SimpleJSONFixed_JSONNode_o *)a_00,(Il2CppObject *)0x0,method);
  if ((char)bVar4 != '\0') {
    return 0;
  }
  if (a_00 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  a = (__this->fields).m_Data;
  obj = (Il2CppObject *)a_00[1].klass;
LAB_03d89f78:
  bVar4 = System_String__op_Equality(a,(System_String_o *)obj,(MethodInfo *)0x0);
  return bVar4;
}


// SimpleJSONFixed.JSONString$$GetHashCode
// il2cpp: int32_t SimpleJSONFixed_JSONString__GetHashCode (SimpleJSONFixed_JSONString_o* __this, const MethodInfo* method);
// 0x3d8a000

int32_t SimpleJSONFixed_JSONString__GetHashCode
                  (SimpleJSONFixed_JSONString_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  Il2CppMethodPointer vtable_dispatch;
  int32_t iVar2;
  undefined8 in_RDX;
  
  pSVar1 = (__this->fields).m_Data;
  if (pSVar1 != (System_String_o *)0x0) {
    vtable_dispatch = (pSVar1->klass->vtable)._2_GetHashCode.methodPtr;
    iVar2 = (*vtable_dispatch)
                      (pSVar1,(pSVar1->klass->vtable)._2_GetHashCode.method,in_RDX,
                       vtable_dispatch);
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// SimpleJSONFixed.JSONString$$Clear
// il2cpp: void SimpleJSONFixed_JSONString__Clear (SimpleJSONFixed_JSONString_o* __this, const MethodInfo* method);
// 0x3d8a030

void SimpleJSONFixed_JSONString__Clear(SimpleJSONFixed_JSONString_o *__this,MethodInfo *method)

{
  if (DAT_057026db == '\0') {
    il2cpp_init_method_metadata(&"");
    DAT_057026db = '\x01';
  }
  (__this->fields).m_Data = "";
  il2cpp_runtime_glue(&__this->fields);
  return;
}


