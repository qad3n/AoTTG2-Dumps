// Type: SimpleJSONFixed.JSONBool
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/SimpleJSONFixed/JSONBool.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/Utility/SimpleJSON.cs  [CHANGED since prior version]
// --------------------------------

// SimpleJSONFixed.JSONBool$$get_Tag
// il2cpp: int32_t SimpleJSONFixed_JSONBool__get_Tag (SimpleJSONFixed_JSONBool_o* __this, const MethodInfo* method);
// 0x3d8a660

int32_t SimpleJSONFixed_JSONBool__get_Tag(SimpleJSONFixed_JSONBool_o *__this,MethodInfo *method)

{
  return 6;
}


// SimpleJSONFixed.JSONBool$$get_IsBoolean
// il2cpp: bool SimpleJSONFixed_JSONBool__get_IsBoolean (SimpleJSONFixed_JSONBool_o* __this, const MethodInfo* method);
// 0x3d8a670

bool_conflict
SimpleJSONFixed_JSONBool__get_IsBoolean(SimpleJSONFixed_JSONBool_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// SimpleJSONFixed.JSONBool$$GetEnumerator
// il2cpp: SimpleJSONFixed_JSONNode_Enumerator_o SimpleJSONFixed_JSONBool__GetEnumerator (SimpleJSONFixed_JSONBool_o* __this, const MethodInfo* method);
// 0x3d8a680

/* WARNING: Type propagation algorithm not settling */

SimpleJSONFixed_JSONNode_Enumerator_o *
SimpleJSONFixed_JSONBool__GetEnumerator
          (SimpleJSONFixed_JSONNode_Enumerator_o *__return_storage_ptr__,
          SimpleJSONFixed_JSONBool_o *__this,MethodInfo *method)

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


// SimpleJSONFixed.JSONBool$$get_Value
// il2cpp: System_String_o* SimpleJSONFixed_JSONBool__get_Value (SimpleJSONFixed_JSONBool_o* __this, const MethodInfo* method);
// 0x3d8a6a0

System_String_o *
SimpleJSONFixed_JSONBool__get_Value(SimpleJSONFixed_JSONBool_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  int __this_00;
  
  __this_00 = (int)__this + 0x10;
  if (*(int *)(DAT_05711048 + 0xe4) != 0) {
    pSVar1 = System_Boolean__ToString(__this_00,(MethodInfo *)0x0);
    return pSVar1;
  }
  il2cpp_init_class();
  pSVar1 = System_Boolean__ToString(__this_00,(MethodInfo *)0x0);
  return pSVar1;
}


// SimpleJSONFixed.JSONBool$$set_Value
// il2cpp: void SimpleJSONFixed_JSONBool__set_Value (SimpleJSONFixed_JSONBool_o* __this, System_String_o* value, const MethodInfo* method);
// 0x3d8a6e0

void SimpleJSONFixed_JSONBool__set_Value
               (SimpleJSONFixed_JSONBool_o *__this,System_String_o *value,MethodInfo *method)

{
  bool_conflict bVar1;
  ulong in_RAX;
  undefined8 uStack_18;
  
  uStack_18 = in_RAX & 0xffffffffffffff;
  if (*(int *)(DAT_05711048 + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar1 = System_Boolean__TryParse(value,(bool_conflict *)((long)&uStack_18 + 7),(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    *(undefined1 *)&(__this->fields).m_Data = uStack_18._7_1_;
  }
  return;
}


// SimpleJSONFixed.JSONBool$$get_AsBool
// il2cpp: bool SimpleJSONFixed_JSONBool__get_AsBool (SimpleJSONFixed_JSONBool_o* __this, const MethodInfo* method);
// 0x3d8a730

bool_conflict
SimpleJSONFixed_JSONBool__get_AsBool(SimpleJSONFixed_JSONBool_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),(char)(__this->fields).m_Data);
}


// SimpleJSONFixed.JSONBool$$set_AsBool
// il2cpp: void SimpleJSONFixed_JSONBool__set_AsBool (SimpleJSONFixed_JSONBool_o* __this, bool value, const MethodInfo* method);
// 0x3d8a740

void SimpleJSONFixed_JSONBool__set_AsBool
               (SimpleJSONFixed_JSONBool_o *__this,bool_conflict value,MethodInfo *method)

{
  *(char *)&(__this->fields).m_Data = (char)value;
  return;
}


// SimpleJSONFixed.JSONBool$$.ctor
// il2cpp: void SimpleJSONFixed_JSONBool___ctor (SimpleJSONFixed_JSONBool_o* __this, bool aData, const MethodInfo* method);
// 0x3d84b80

void SimpleJSONFixed_JSONBool___ctor
               (SimpleJSONFixed_JSONBool_o *__this,bool_conflict aData,MethodInfo *method)

{
  if (DAT_057026e3 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_JSONNode);
    DAT_057026e3 = '\x01';
  }
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_init_class();
  }
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  *(char *)&(__this->fields).m_Data = (char)aData;
  return;
}


// SimpleJSONFixed.JSONBool$$.ctor
// il2cpp: void SimpleJSONFixed_JSONBool___ctor (SimpleJSONFixed_JSONBool_o* __this, System_String_o* aData, const MethodInfo* method);
// 0x3d8a750

void SimpleJSONFixed_JSONBool___ctor
               (SimpleJSONFixed_JSONBool_o *__this,System_String_o *aData,MethodInfo *method)

{
  Il2CppMethodPointer vtable_dispatch;
  
  if (DAT_057026e4 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_JSONNode);
    DAT_057026e4 = '\x01';
  }
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_init_class();
  }
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  vtable_dispatch = (__this->klass->vtable)._10_set_Value.methodPtr;
  (*vtable_dispatch)
            (__this,aData,(__this->klass->vtable)._10_set_Value.method,vtable_dispatch);
  return;
}


// SimpleJSONFixed.JSONBool$$Clone
// il2cpp: SimpleJSONFixed_JSONNode_o* SimpleJSONFixed_JSONBool__Clone (SimpleJSONFixed_JSONBool_o* __this, const MethodInfo* method);
// 0x3d8a7c0

SimpleJSONFixed_JSONNode_o *
SimpleJSONFixed_JSONBool__Clone(SimpleJSONFixed_JSONBool_o *__this,MethodInfo *method)

{
  bool_conflict bVar1;
  Il2CppObject *__this_00;
  
  if (DAT_057026e5 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_JSONBool);
    DAT_057026e5 = '\x01';
  }
  bVar1 = (__this->fields).m_Data;
  __this_00 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_JSONBool);
  if (DAT_057026e3 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_JSONNode);
    DAT_057026e3 = '\x01';
  }
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_init_class();
  }
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  *(char *)&__this_00[1].klass = (char)bVar1;
  return (SimpleJSONFixed_JSONNode_o *)__this_00;
}


// SimpleJSONFixed.JSONBool$$WriteToStringBuilder
// il2cpp: void SimpleJSONFixed_JSONBool__WriteToStringBuilder (SimpleJSONFixed_JSONBool_o* __this, System_Text_StringBuilder_o* aSB, int32_t aIndent, int32_t aIndentInc, int32_t aMode, const MethodInfo* method);
// 0x3d8a850

void SimpleJSONFixed_JSONBool__WriteToStringBuilder
               (SimpleJSONFixed_JSONBool_o *__this,System_Text_StringBuilder_o *aSB,int32_t aIndent,
               int32_t aIndentInc,int32_t aMode,MethodInfo *method)

{
  undefined8 *puVar1;
  
  if (DAT_057026e6 == '\0') {
    il2cpp_init_method_metadata(&"false");
    il2cpp_init_method_metadata(&"true");
    DAT_057026e6 = '\x01';
  }
  if (aSB != (System_Text_StringBuilder_o *)0x0) {
    if ((char)(__this->fields).m_Data == '\0') {
      puVar1 = &"false";
    }
    else {
      puVar1 = &"true";
    }
    System_Text_StringBuilder__Append(aSB,(System_String_o *)*puVar1,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// SimpleJSONFixed.JSONBool$$Equals
// il2cpp: bool SimpleJSONFixed_JSONBool__Equals (SimpleJSONFixed_JSONBool_o* __this, Il2CppObject* obj, const MethodInfo* method);
// 0x3d8a8c0

bool_conflict
SimpleJSONFixed_JSONBool__Equals
          (SimpleJSONFixed_JSONBool_o *__this,Il2CppObject *obj,MethodInfo *method)

{
  bool_conflict bVar1;
  char *pcVar2;
  
  if ((obj != (Il2CppObject *)0x0) && (obj->klass == DAT_05711048)) {
    bVar1 = (__this->fields).m_Data;
    pcVar2 = (char *)il2cpp_glue_022c7330(obj);
    return (bool_conflict)CONCAT71((int7)((ulong)pcVar2 >> 8),(char)bVar1 == *pcVar2);
  }
  return 0;
}


// SimpleJSONFixed.JSONBool$$GetHashCode
// il2cpp: int32_t SimpleJSONFixed_JSONBool__GetHashCode (SimpleJSONFixed_JSONBool_o* __this, const MethodInfo* method);
// 0x3d8a8f0

int32_t SimpleJSONFixed_JSONBool__GetHashCode(SimpleJSONFixed_JSONBool_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  int __this_00;
  
  __this_00 = (int)__this + 0x10;
  if (*(int *)(DAT_05711048 + 0xe4) != 0) {
    iVar1 = System_Boolean__GetHashCode(__this_00,(MethodInfo *)0x0);
    return iVar1;
  }
  il2cpp_init_class();
  iVar1 = System_Boolean__GetHashCode(__this_00,(MethodInfo *)0x0);
  return iVar1;
}


// SimpleJSONFixed.JSONBool$$Clear
// il2cpp: void SimpleJSONFixed_JSONBool__Clear (SimpleJSONFixed_JSONBool_o* __this, const MethodInfo* method);
// 0x3d8a930

void SimpleJSONFixed_JSONBool__Clear(SimpleJSONFixed_JSONBool_o *__this,MethodInfo *method)

{
  *(undefined1 *)&(__this->fields).m_Data = 0;
  return;
}


