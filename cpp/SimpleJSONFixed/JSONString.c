// Type: SimpleJSONFixed.JSONString
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/SimpleJSONFixed/JSONString.cs
// Prior real C# source (older reference): Assets/Scripts/Utility/SimpleJSON.cs
// --------------------------------

// SimpleJSONFixed.JSONString$$get_Tag
// il2cpp: int32_t SimpleJSONFixed_JSONString__get_Tag (SimpleJSONFixed_JSONString_o* __this, const MethodInfo* method);
// 0x407f650

int32_t SimpleJSONFixed_JSONString__get_Tag(SimpleJSONFixed_JSONString_o *__this,MethodInfo *method)

{
  return 3;
}


// SimpleJSONFixed.JSONString$$get_IsString
// il2cpp: bool SimpleJSONFixed_JSONString__get_IsString (SimpleJSONFixed_JSONString_o* __this, const MethodInfo* method);
// 0x407f660

bool_conflict
SimpleJSONFixed_JSONString__get_IsString(SimpleJSONFixed_JSONString_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// SimpleJSONFixed.JSONString$$GetEnumerator
// il2cpp: SimpleJSONFixed_JSONNode_Enumerator_o SimpleJSONFixed_JSONString__GetEnumerator (SimpleJSONFixed_JSONString_o* __this, const MethodInfo* method);
// 0x407f670

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
// 0x407f690

System_String_o *
SimpleJSONFixed_JSONString__get_Value(SimpleJSONFixed_JSONString_o *__this,MethodInfo *method)

{
  return (__this->fields).m_Data;
}


// SimpleJSONFixed.JSONString$$set_Value
// il2cpp: void SimpleJSONFixed_JSONString__set_Value (SimpleJSONFixed_JSONString_o* __this, System_String_o* value, const MethodInfo* method);
// 0x407f6a0

void SimpleJSONFixed_JSONString__set_Value
               (SimpleJSONFixed_JSONString_o *__this,System_String_o *value,MethodInfo *method)

{
  (__this->fields).m_Data = value;
  il2cpp_runtime_helper_022b4080(&__this->fields);
  return;
}


// SimpleJSONFixed.JSONString$$.ctor
// il2cpp: void SimpleJSONFixed_JSONString___ctor (SimpleJSONFixed_JSONString_o* __this, System_String_o* aData, const MethodInfo* method);
// 0x40799c0

void SimpleJSONFixed_JSONString___ctor
               (SimpleJSONFixed_JSONString_o *__this,System_String_o *aData,MethodInfo *method)

{
  if (g_data_057ac387 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    g_data_057ac387 = '\x01';
  }
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).m_Data = aData;
  il2cpp_runtime_helper_022b4080(&__this->fields,aData);
  return;
}


// SimpleJSONFixed.JSONString$$Clone
// il2cpp: SimpleJSONFixed_JSONNode_o* SimpleJSONFixed_JSONString__Clone (SimpleJSONFixed_JSONString_o* __this, const MethodInfo* method);
// 0x407f6b0

SimpleJSONFixed_JSONNode_o *
SimpleJSONFixed_JSONString__Clone(SimpleJSONFixed_JSONString_o *__this,MethodInfo *method)

{
  Il2CppClass *pIVar1;
  Il2CppObject *__this_00;
  
  if (g_data_057ac388 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONString);
    g_data_057ac388 = '\x01';
  }
  pIVar1 = (Il2CppClass *)(__this->fields).m_Data;
  __this_00 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_JSONString);
  if (g_data_057ac387 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    g_data_057ac387 = '\x01';
  }
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  __this_00[1].klass = pIVar1;
  il2cpp_runtime_helper_022b4080(__this_00 + 1,pIVar1);
  return (SimpleJSONFixed_JSONNode_o *)__this_00;
}


// SimpleJSONFixed.JSONString$$WriteToStringBuilder
// il2cpp: void SimpleJSONFixed_JSONString__WriteToStringBuilder (SimpleJSONFixed_JSONString_o* __this, System_Text_StringBuilder_o* aSB, int32_t aIndent, int32_t aIndentInc, int32_t aMode, const MethodInfo* method);
// 0x407f750

void SimpleJSONFixed_JSONString__WriteToStringBuilder
               (SimpleJSONFixed_JSONString_o *__this,System_Text_StringBuilder_o *aSB,int32_t aIndent,
               int32_t aIndentInc,int32_t aMode,MethodInfo *method)

{
  int iVar1;
  long lVar2;
  code *vtableDispatch;
  bool_conflict bVar3;
  System_String_Fields SVar4;
  System_String_Fields value;
  System_Text_StringBuilder_o *__this_00;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
  MethodInfo *extraout_RDX_03;
  undefined8 extraout_RDX_04;
  System_String_Fields SVar5;
  System_String_Fields SVar6;
  
  SVar5 = (System_String_Fields)aSB;
  SVar6 = (System_String_Fields)__this;
  if (g_data_057ac389 == '\0') {
    SVar6 = (System_String_Fields)&TypeInfo_JSONNode;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac389 = '\x01';
  }
  if (aSB != (System_Text_StringBuilder_o *)0x0) {
    SVar5._stringLength = 0x22;
    SVar5._firstChar = 0;
    SVar5._6_2_ = 0;
    SVar4 = (System_String_Fields)System_Text_StringBuilder__Append_3b048f0(aSB,0x22,(MethodInfo *)0x0);
    SVar6 = (System_String_Fields)(__this->fields).m_Data;
    if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    value = (System_String_Fields)
            SimpleJSONFixed_JSONNode__Escape((System_String_o *)SVar6,(MethodInfo *)SVar5);
    if ((SVar4 != (System_String_Fields)0x0) &&
       (__this_00 = System_Text_StringBuilder__Append_3b03f90
                              ((System_Text_StringBuilder_o *)SVar4,(System_String_o *)value,(MethodInfo *)0x0
                              ), SVar5 = value, SVar6 = SVar4, __this_00 != (System_Text_StringBuilder_o *)0x0
       )) {
      System_Text_StringBuilder__Append_3b048f0(__this_00,0x22,(MethodInfo *)0x0);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  method_00 = extraout_RDX;
  if (g_data_057ac38a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONString);
    g_data_057ac38a = '\x01';
    method_00 = extraout_RDX_00;
  }
  if (SVar6 == SVar5) {
    return;
  }
  if (SVar5 == (System_String_Fields)0x0) {
label_0407f85d:
    SVar4._stringLength = 0;
    SVar4._firstChar = 0;
    SVar4._6_2_ = 0;
    if (*(int *)(TypeInfo_JSONNode + 0xe4) != 0) goto label_0407f877;
label_0407f8fe:
    il2cpp_runtime_helper_02337ed0();
    method_00 = extraout_RDX_01;
    if (g_data_057ac34d != '\0') goto label_0407f884;
label_0407f910:
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    g_data_057ac34d = '\x01';
    iVar1 = *(int *)(TypeInfo_JSONNode + 0xe4);
    method_00 = extraout_RDX_02;
  }
  else {
    lVar2 = *(long *)SVar5;
    if (lVar2 == g_data_057b9c00) {
      SVar6 = *(System_String_Fields *)((long)SVar6 + 0x10);
      goto label_0407f8c8;
    }
    method_00 = (MethodInfo *)(ulong)*(byte *)(TypeInfo_JSONString + 0x130);
    if (*(byte *)(lVar2 + 0x130) < *(byte *)(TypeInfo_JSONString + 0x130)) goto label_0407f85d;
    SVar4._stringLength = 0;
    SVar4._firstChar = 0;
    SVar4._6_2_ = 0;
    if (*(long *)(*(long *)(lVar2 + 200) + -8 + (long)method_00 * 8) == TypeInfo_JSONString) {
      SVar4 = SVar5;
    }
    if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) goto label_0407f8fe;
label_0407f877:
    if (g_data_057ac34d == '\0') goto label_0407f910;
label_0407f884:
    iVar1 = *(int *)(TypeInfo_JSONNode + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
    method_00 = extraout_RDX_03;
  }
  SVar5 = SVar4;
  bVar3 = SimpleJSONFixed_JSONNode__op_Equality
                    ((SimpleJSONFixed_JSONNode_o *)SVar4,(Il2CppObject *)0x0,method_00);
  if ((char)bVar3 != '\0') {
    return;
  }
  if (SVar4 == (System_String_Fields)0x0) {
    il2cpp_runtime_helper_022b2c90();
    SVar6 = *(System_String_Fields *)((long)SVar5 + 0x10);
    if (SVar6 == (System_String_Fields)0x0) {
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057ac38b == '\0') {
        il2cpp_runtime_helper_023445d0(&"");
        g_data_057ac38b = '\x01';
      }
      *(undefined8 *)((long)SVar6 + 0x10) = "";
      il2cpp_runtime_helper_022b4080((long)SVar6 + 0x10);
      return;
    }
    vtableDispatch = *(code **)(*(long *)SVar6 + 0x158);
    (*vtableDispatch)
              (SVar6,*(undefined8 *)(*(long *)SVar6 + 0x160),extraout_RDX_04,vtableDispatch);
    return;
  }
  SVar6 = *(System_String_Fields *)((long)SVar6 + 0x10);
  SVar5 = *(System_String_Fields *)((long)SVar4 + 0x10);
label_0407f8c8:
  System_String__op_Equality((System_String_o *)SVar6,(System_String_o *)SVar5,(MethodInfo *)0x0);
  return;
}


// SimpleJSONFixed.JSONString$$Equals
// il2cpp: bool SimpleJSONFixed_JSONString__Equals (SimpleJSONFixed_JSONString_o* __this, Il2CppObject* obj, const MethodInfo* method);
// 0x407f7f0

bool_conflict
SimpleJSONFixed_JSONString__Equals(SimpleJSONFixed_JSONString_o *__this,Il2CppObject *obj,MethodInfo *method)

{
  byte bVar1;
  int iVar2;
  void *pvVar3;
  code *vtableDispatch;
  bool_conflict bVar4;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
  undefined8 extraout_RDX_03;
  Il2CppObject *pIVar5;
  System_String_o *a;
  Il2CppClass *pIVar6;
  Il2CppObject *a_00;
  
  if (g_data_057ac38a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONString);
    g_data_057ac38a = '\x01';
    method = extraout_RDX;
  }
  if (__this == (SimpleJSONFixed_JSONString_o *)obj) {
    return (bool_conflict)CONCAT71((int7)((ulong)obj >> 8),1);
  }
  if (obj == (Il2CppObject *)0x0) {
label_0407f85d:
    a_00 = (Il2CppObject *)0x0;
    if (*(int *)(TypeInfo_JSONNode + 0xe4) != 0) goto label_0407f877;
label_0407f8fe:
    il2cpp_runtime_helper_02337ed0();
    method = extraout_RDX_00;
    if (g_data_057ac34d == '\0') goto label_0407f910;
label_0407f884:
    iVar2 = *(int *)(TypeInfo_JSONNode + 0xe4);
  }
  else {
    pIVar6 = obj->klass;
    if (pIVar6 == g_data_057b9c00) {
      a = (__this->fields).m_Data;
      goto label_0407f8c8;
    }
    bVar1 = (TypeInfo_JSONString->_2).naturalAligment;
    method = (MethodInfo *)(ulong)bVar1;
    if ((pIVar6->_2).naturalAligment < bVar1) goto label_0407f85d;
    a_00 = (Il2CppObject *)0x0;
    if ((pIVar6->_2).typeHierarchy[(long)&method[-1].field_0x57] == TypeInfo_JSONString) {
      a_00 = obj;
    }
    if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) goto label_0407f8fe;
label_0407f877:
    if (g_data_057ac34d != '\0') goto label_0407f884;
label_0407f910:
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    g_data_057ac34d = '\x01';
    iVar2 = *(int *)(TypeInfo_JSONNode + 0xe4);
    method = extraout_RDX_01;
  }
  if (iVar2 == 0) {
    il2cpp_runtime_helper_02337ed0();
    method = extraout_RDX_02;
  }
  pIVar5 = a_00;
  bVar4 = SimpleJSONFixed_JSONNode__op_Equality((SimpleJSONFixed_JSONNode_o *)a_00,(Il2CppObject *)0x0,method)
  ;
  if ((char)bVar4 != '\0') {
    return 0;
  }
  if (a_00 == (Il2CppObject *)0x0) {
    il2cpp_runtime_helper_022b2c90();
    pIVar6 = pIVar5[1].klass;
    if (pIVar6 != (Il2CppClass *)0x0) {
      pvVar3 = (pIVar6->_1).image;
      vtableDispatch = *(code **)((long)pvVar3 + 0x158);
      bVar4 = (*vtableDispatch)
                        (pIVar6,*(undefined8 *)((long)pvVar3 + 0x160),extraout_RDX_03,vtableDispatch);
      return bVar4;
    }
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057ac38b == '\0') {
      il2cpp_runtime_helper_023445d0(&"");
      g_data_057ac38b = '\x01';
    }
    (pIVar6->_1).name = "";
    bVar4 = il2cpp_runtime_helper_022b4080(&(pIVar6->_1).name);
    return bVar4;
  }
  a = (__this->fields).m_Data;
  obj = (Il2CppObject *)a_00[1].klass;
label_0407f8c8:
  bVar4 = System_String__op_Equality(a,(System_String_o *)obj,(MethodInfo *)0x0);
  return bVar4;
}


// SimpleJSONFixed.JSONString$$GetHashCode
// il2cpp: int32_t SimpleJSONFixed_JSONString__GetHashCode (SimpleJSONFixed_JSONString_o* __this, const MethodInfo* method);
// 0x407f950

int32_t SimpleJSONFixed_JSONString__GetHashCode(SimpleJSONFixed_JSONString_o *__this,MethodInfo *method)

{
  Il2CppMethodPointer vtableDispatch;
  int32_t iVar1;
  undefined8 in_RDX;
  System_String_o *pSVar2;
  
  pSVar2 = (__this->fields).m_Data;
  if (pSVar2 != (System_String_o *)0x0) {
    vtableDispatch = (pSVar2->klass->vtable)._2_GetHashCode.methodPtr;
    iVar1 = (*vtableDispatch)
                      (pSVar2,(pSVar2->klass->vtable)._2_GetHashCode.method,in_RDX,vtableDispatch);
    return iVar1;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac38b == '\0') {
    il2cpp_runtime_helper_023445d0(&"");
    g_data_057ac38b = '\x01';
  }
  pSVar2->fields = "";
  iVar1 = il2cpp_runtime_helper_022b4080(&pSVar2->fields);
  return iVar1;
}


// SimpleJSONFixed.JSONString$$Clear
// il2cpp: void SimpleJSONFixed_JSONString__Clear (SimpleJSONFixed_JSONString_o* __this, const MethodInfo* method);
// 0x407f980

void SimpleJSONFixed_JSONString__Clear(SimpleJSONFixed_JSONString_o *__this,MethodInfo *method)

{
  if (g_data_057ac38b == '\0') {
    il2cpp_runtime_helper_023445d0(&"");
    g_data_057ac38b = '\x01';
  }
  (__this->fields).m_Data = "";
  il2cpp_runtime_helper_022b4080(&__this->fields);
  return;
}


