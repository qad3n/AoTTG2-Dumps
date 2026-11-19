// Type: SimpleJSONFixed.JSONString
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/SimpleJSONFixed/JSONString.cs
// Prior real C# source (older reference): Assets/Scripts/Utility/SimpleJSON.cs
// --------------------------------

// SimpleJSONFixed.JSONString$$get_Tag
// il2cpp: int32_t SimpleJSONFixed_JSONString__get_Tag (SimpleJSONFixed_JSONString_o* __this, const MethodInfo* method);
// 0x5868f70

int32_t SimpleJSONFixed_JSONString__get_Tag(SimpleJSONFixed_JSONString_o *__this,MethodInfo *method)

{
  return 3;
}


// SimpleJSONFixed.JSONString$$get_IsString
// il2cpp: bool SimpleJSONFixed_JSONString__get_IsString (SimpleJSONFixed_JSONString_o* __this, const MethodInfo* method);
// 0x5868f80

bool SimpleJSONFixed_JSONString__get_IsString(SimpleJSONFixed_JSONString_o *__this,MethodInfo *method)

{
  return true;
}


// SimpleJSONFixed.JSONString$$GetEnumerator
// il2cpp: SimpleJSONFixed_JSONNode_Enumerator_o SimpleJSONFixed_JSONString__GetEnumerator (SimpleJSONFixed_JSONString_o* __this, const MethodInfo* method);
// 0x5868f90

SimpleJSONFixed_JSONNode_Enumerator_o *
SimpleJSONFixed_JSONString__GetEnumerator
          (SimpleJSONFixed_JSONNode_Enumerator_o *__return_storage_ptr__,SimpleJSONFixed_JSONString_o *__this,
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


// SimpleJSONFixed.JSONString$$get_Value
// il2cpp: System_String_o* SimpleJSONFixed_JSONString__get_Value (SimpleJSONFixed_JSONString_o* __this, const MethodInfo* method);
// 0x5868fb0

System_String_o *
SimpleJSONFixed_JSONString__get_Value(SimpleJSONFixed_JSONString_o *__this,MethodInfo *method)

{
  return (__this->fields).m_Data;
}


// SimpleJSONFixed.JSONString$$set_Value
// il2cpp: void SimpleJSONFixed_JSONString__set_Value (SimpleJSONFixed_JSONString_o* __this, System_String_o* value, const MethodInfo* method);
// 0x5868fc0

void SimpleJSONFixed_JSONString__set_Value
               (SimpleJSONFixed_JSONString_o *__this,System_String_o *value,MethodInfo *method)

{
  (__this->fields).m_Data = value;
  Il2CppCodeGenWriteBarrier(&(__this->fields).m_Data);
  return;
}


// SimpleJSONFixed.JSONString$$.ctor
// il2cpp: void SimpleJSONFixed_JSONString___ctor (SimpleJSONFixed_JSONString_o* __this, System_String_o* aData, const MethodInfo* method);
// 0x5863600

void SimpleJSONFixed_JSONString___ctor
               (SimpleJSONFixed_JSONString_o *__this,System_String_o *aData,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07545119 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    Il2CppMethodInitialized_07545119 = '\x01';
  }
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).m_Data = aData;
  Il2CppCodeGenWriteBarrier(&(__this->fields).m_Data);
  return;
}


// SimpleJSONFixed.JSONString$$Clone
// il2cpp: SimpleJSONFixed_JSONNode_o* SimpleJSONFixed_JSONString__Clone (SimpleJSONFixed_JSONString_o* __this, const MethodInfo* method);
// 0x5868fd0

SimpleJSONFixed_JSONNode_o *
SimpleJSONFixed_JSONString__Clone(SimpleJSONFixed_JSONString_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  SimpleJSONFixed_JSONString_o *__this_00;
  
  if (Il2CppMethodInitialized_0754511a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONString);
    Il2CppMethodInitialized_0754511a = '\x01';
  }
  pSVar1 = (__this->fields).m_Data;
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONString);
  if (Il2CppMethodInitialized_07545119 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    Il2CppMethodInitialized_07545119 = '\x01';
  }
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).m_Data = pSVar1;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).m_Data);
  return (SimpleJSONFixed_JSONNode_o *)__this_00;
}


// SimpleJSONFixed.JSONString$$WriteToStringBuilder
// il2cpp: void SimpleJSONFixed_JSONString__WriteToStringBuilder (SimpleJSONFixed_JSONString_o* __this, System_Text_StringBuilder_o* aSB, int32_t aIndent, int32_t aIndentInc, int32_t aMode, const MethodInfo* method);
// 0x5869070

void SimpleJSONFixed_JSONString__WriteToStringBuilder
               (SimpleJSONFixed_JSONString_o *__this,System_Text_StringBuilder_o *aSB,int32_t aIndent,
               int32_t aIndentInc,int32_t aMode,MethodInfo *method)

{
  System_Text_StringBuilder_o *pSVar1;
  System_String_o *pSVar2;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_0754511b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    Il2CppMethodInitialized_0754511b = '\x01';
  }
  if (aSB != (System_Text_StringBuilder_o *)0x0) {
    method_00 = (MethodInfo *)&g_data_00000022;
    pSVar1 = System_Text_StringBuilder__Append_530f6a0(aSB,0x22,(MethodInfo *)0x0);
    pSVar2 = (__this->fields).m_Data;
    if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
    }
    pSVar2 = SimpleJSONFixed_JSONNode__Escape(pSVar2,method_00);
    if (pSVar1 != (System_Text_StringBuilder_o *)0x0) {
      pSVar1 = System_Text_StringBuilder__Append_530ed80(pSVar1,pSVar2,(MethodInfo *)0x0);
      if (pSVar1 != (System_Text_StringBuilder_o *)0x0) {
        System_Text_StringBuilder__Append_530f6a0(pSVar1,0x22,(MethodInfo *)0x0);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// SimpleJSONFixed.JSONString$$Equals
// il2cpp: bool SimpleJSONFixed_JSONString__Equals (SimpleJSONFixed_JSONString_o* __this, Il2CppObject* obj, const MethodInfo* method);
// 0x5869110

bool SimpleJSONFixed_JSONString__Equals
               (SimpleJSONFixed_JSONString_o *__this,Il2CppObject *obj,MethodInfo *method)

{
  byte bVar1;
  uint32_t uVar2;
  Il2CppClass *pIVar3;
  bool bVar4;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
  System_String_o *a;
  Il2CppObject *a_00;
  
  if (Il2CppMethodInitialized_0754511c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONString);
    Il2CppMethodInitialized_0754511c = '\x01';
    method = extraout_RDX;
  }
  if (__this == (SimpleJSONFixed_JSONString_o *)obj) {
    return true;
  }
  if (obj == (Il2CppObject *)0x0) {
label_0586917d:
    a_00 = (Il2CppObject *)0x0;
    if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor != 0) goto label_05869197;
label_0586921e:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
    method = extraout_RDX_00;
    if (g_data_075450d9 == '\0') goto label_05869230;
label_058691a4:
    uVar2 = (TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor;
  }
  else {
    pIVar3 = obj->klass;
    if (pIVar3 == g_data_07556758) {
      a = (__this->fields).m_Data;
      goto label_058691e8;
    }
    bVar1 = (TypeInfo_SimpleJSONFixed_JSONString->_2).typeHierarchyDepth;
    method = (MethodInfo *)(ulong)bVar1;
    if ((pIVar3->_2).typeHierarchyDepth < bVar1) goto label_0586917d;
    a_00 = (Il2CppObject *)0x0;
    if ((pIVar3->_2).typeHierarchy[(long)&method[-1].field_0x57] ==
        (Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONString) {
      a_00 = obj;
    }
    if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) goto label_0586921e;
label_05869197:
    if (g_data_075450d9 != '\0') goto label_058691a4;
label_05869230:
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    g_data_075450d9 = '\x01';
    uVar2 = (TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor;
    method = extraout_RDX_01;
  }
  if (uVar2 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
    method = extraout_RDX_02;
  }
  bVar4 = SimpleJSONFixed_JSONNode__op_Equality((SimpleJSONFixed_JSONNode_o *)a_00,(Il2CppObject *)0x0,method)
  ;
  if (bVar4) {
    return false;
  }
  if (a_00 == (Il2CppObject *)0x0) {
    ThrowNullReferenceException();
  }
  a = (__this->fields).m_Data;
  obj = (Il2CppObject *)a_00[1].klass;
label_058691e8:
  bVar4 = System_String__op_Equality(a,(System_String_o *)obj,(MethodInfo *)0x0);
  return bVar4;
}


// SimpleJSONFixed.JSONString$$GetHashCode
// il2cpp: int32_t SimpleJSONFixed_JSONString__GetHashCode (SimpleJSONFixed_JSONString_o* __this, const MethodInfo* method);
// 0x5869270

int32_t SimpleJSONFixed_JSONString__GetHashCode(SimpleJSONFixed_JSONString_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  int32_t iVar2;
  
  pSVar1 = (__this->fields).m_Data;
  if (pSVar1 == (System_String_o *)0x0) {
    ThrowNullReferenceException();
  }
  iVar2 = (*(pSVar1->klass->vtable)._2_GetHashCode.methodPtr)
                    (pSVar1,(pSVar1->klass->vtable)._2_GetHashCode.method);
  return iVar2;
}


// SimpleJSONFixed.JSONString$$Clear
// il2cpp: void SimpleJSONFixed_JSONString__Clear (SimpleJSONFixed_JSONString_o* __this, const MethodInfo* method);
// 0x58692a0

void SimpleJSONFixed_JSONString__Clear(SimpleJSONFixed_JSONString_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_0754511d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_0754511d = '\x01';
  }
  (__this->fields).m_Data = "";
  Il2CppCodeGenWriteBarrier(&(__this->fields).m_Data);
  return;
}


