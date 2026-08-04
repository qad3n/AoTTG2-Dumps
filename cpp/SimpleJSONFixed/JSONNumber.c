// Type: SimpleJSONFixed.JSONNumber
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/SimpleJSONFixed/JSONNumber.cs
// Prior real C# source (older reference): Assets/Scripts/Utility/SimpleJSON.cs
// --------------------------------

// SimpleJSONFixed.JSONNumber$$get_Tag
// il2cpp: int32_t SimpleJSONFixed_JSONNumber__get_Tag (SimpleJSONFixed_JSONNumber_o* __this, const MethodInfo* method);
// 0x407f9c0

int32_t SimpleJSONFixed_JSONNumber__get_Tag(SimpleJSONFixed_JSONNumber_o *__this,MethodInfo *method)

{
  return 4;
}


// SimpleJSONFixed.JSONNumber$$get_IsNumber
// il2cpp: bool SimpleJSONFixed_JSONNumber__get_IsNumber (SimpleJSONFixed_JSONNumber_o* __this, const MethodInfo* method);
// 0x407f9d0

bool_conflict
SimpleJSONFixed_JSONNumber__get_IsNumber(SimpleJSONFixed_JSONNumber_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// SimpleJSONFixed.JSONNumber$$GetEnumerator
// il2cpp: SimpleJSONFixed_JSONNode_Enumerator_o SimpleJSONFixed_JSONNumber__GetEnumerator (SimpleJSONFixed_JSONNumber_o* __this, const MethodInfo* method);
// 0x407f9e0

SimpleJSONFixed_JSONNode_Enumerator_o *
SimpleJSONFixed_JSONNumber__GetEnumerator
          (SimpleJSONFixed_JSONNode_Enumerator_o *__return_storage_ptr__,SimpleJSONFixed_JSONNumber_o *__this,
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


// SimpleJSONFixed.JSONNumber$$get_Value
// il2cpp: System_String_o* SimpleJSONFixed_JSONNumber__get_Value (SimpleJSONFixed_JSONNumber_o* __this, const MethodInfo* method);
// 0x407fa00

System_String_o *
SimpleJSONFixed_JSONNumber__get_Value(SimpleJSONFixed_JSONNumber_o *__this,MethodInfo *method)

{
  System_Globalization_CultureInfo_o *method_00;
  System_String_o *pSVar1;
  double __this_00;
  
  if (g_data_057ac38c == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CultureInfo);
    g_data_057ac38c = '\x01';
  }
  if (*(int *)(TypeInfo_CultureInfo + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  method_00 = System_Globalization_CultureInfo__get_InvariantCulture((MethodInfo *)0x0);
  pSVar1 = System_Double__ToString_3c99e60
                     (__this_00,(System_IFormatProvider_o *)&__this->fields,(MethodInfo *)method_00);
  return pSVar1;
}


// SimpleJSONFixed.JSONNumber$$set_Value
// il2cpp: void SimpleJSONFixed_JSONNumber__set_Value (SimpleJSONFixed_JSONNumber_o* __this, System_String_o* value, const MethodInfo* method);
// 0x407fa60

void SimpleJSONFixed_JSONNumber__set_Value
               (SimpleJSONFixed_JSONNumber_o *__this,System_String_o *value,MethodInfo *method)

{
  bool_conflict bVar1;
  System_Globalization_CultureInfo_o *provider;
  SimpleJSONFixed_JSONNumber_Fields SStack_18;
  
  if (g_data_057ac38d == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CultureInfo);
    g_data_057ac38d = '\x01';
  }
  SStack_18.m_Data = 0.0;
  if (*(int *)(TypeInfo_CultureInfo + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  provider = System_Globalization_CultureInfo__get_InvariantCulture((MethodInfo *)0x0);
  bVar1 = System_Double__TryParse_3c9a570
                    (value,0xa7,(System_IFormatProvider_o *)provider,&SStack_18.m_Data,(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    (__this->fields).m_Data = SStack_18.m_Data;
  }
  return;
}


// SimpleJSONFixed.JSONNumber$$get_AsDouble
// il2cpp: double SimpleJSONFixed_JSONNumber__get_AsDouble (SimpleJSONFixed_JSONNumber_o* __this, const MethodInfo* method);
// 0x407fae0

double SimpleJSONFixed_JSONNumber__get_AsDouble(SimpleJSONFixed_JSONNumber_o *__this,MethodInfo *method)

{
  return (__this->fields).m_Data;
}


// SimpleJSONFixed.JSONNumber$$set_AsDouble
// il2cpp: void SimpleJSONFixed_JSONNumber__set_AsDouble (SimpleJSONFixed_JSONNumber_o* __this, double value, const MethodInfo* method);
// 0x407faf0

void SimpleJSONFixed_JSONNumber__set_AsDouble
               (SimpleJSONFixed_JSONNumber_o *__this,double value,MethodInfo *method)

{
  (__this->fields).m_Data = value;
  return;
}


// SimpleJSONFixed.JSONNumber$$get_AsLong
// il2cpp: int64_t SimpleJSONFixed_JSONNumber__get_AsLong (SimpleJSONFixed_JSONNumber_o* __this, const MethodInfo* method);
// 0x407fb00

int64_t SimpleJSONFixed_JSONNumber__get_AsLong(SimpleJSONFixed_JSONNumber_o *__this,MethodInfo *method)

{
  return (long)(__this->fields).m_Data;
}


// SimpleJSONFixed.JSONNumber$$set_AsLong
// il2cpp: void SimpleJSONFixed_JSONNumber__set_AsLong (SimpleJSONFixed_JSONNumber_o* __this, int64_t value, const MethodInfo* method);
// 0x407fb10

void SimpleJSONFixed_JSONNumber__set_AsLong
               (SimpleJSONFixed_JSONNumber_o *__this,int64_t value,MethodInfo *method)

{
  (__this->fields).m_Data = (double)value;
  return;
}


// SimpleJSONFixed.JSONNumber$$get_AsULong
// il2cpp: uint64_t SimpleJSONFixed_JSONNumber__get_AsULong (SimpleJSONFixed_JSONNumber_o* __this, const MethodInfo* method);
// 0x407fb20

uint64_t SimpleJSONFixed_JSONNumber__get_AsULong(SimpleJSONFixed_JSONNumber_o *__this,MethodInfo *method)

{
  double dVar1;
  ulong uVar2;
  
  dVar1 = (__this->fields).m_Data;
  uVar2 = (long)(dVar1 - 9.223372036854776e+18) ^ 0x8000000000000000;
  if (dVar1 < 9.223372036854776e+18) {
    uVar2 = (long)dVar1;
  }
  if (dVar1 < 0.0) {
    uVar2 = (long)dVar1;
  }
  return uVar2;
}


// SimpleJSONFixed.JSONNumber$$set_AsULong
// il2cpp: void SimpleJSONFixed_JSONNumber__set_AsULong (SimpleJSONFixed_JSONNumber_o* __this, uint64_t value, const MethodInfo* method);
// 0x407fb70

void SimpleJSONFixed_JSONNumber__set_AsULong
               (SimpleJSONFixed_JSONNumber_o *__this,uint64_t value,MethodInfo *method)

{
  undefined1 auVar1 [16];
  
  auVar1._8_4_ = (int)(value >> 0x20);
  auVar1._0_8_ = value;
  auVar1._12_4_ = 0x45300000;
  (__this->fields).m_Data =
       (auVar1._8_8_ - 1.9342813113834067e+25) +
       ((double)CONCAT44(0x43300000,(int)value) - 4503599627370496.0);
  return;
}


// SimpleJSONFixed.JSONNumber$$.ctor
// il2cpp: void SimpleJSONFixed_JSONNumber___ctor (SimpleJSONFixed_JSONNumber_o* __this, double aData, const MethodInfo* method);
// 0x4079d60

void SimpleJSONFixed_JSONNumber___ctor(SimpleJSONFixed_JSONNumber_o *__this,double aData,MethodInfo *method)

{
  if (g_data_057ac38e == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    g_data_057ac38e = '\x01';
  }
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).m_Data = aData;
  return;
}


// SimpleJSONFixed.JSONNumber$$.ctor
// il2cpp: void SimpleJSONFixed_JSONNumber___ctor (SimpleJSONFixed_JSONNumber_o* __this, System_String_o* aData, const MethodInfo* method);
// 0x407fba0

void SimpleJSONFixed_JSONNumber___ctor_3f7fba0
               (SimpleJSONFixed_JSONNumber_o *__this,System_String_o *aData,MethodInfo *method)

{
  Il2CppMethodPointer vtableDispatch;
  
  if (g_data_057ac38f == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    g_data_057ac38f = '\x01';
  }
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  vtableDispatch = (__this->klass->vtable)._10_set_Value.methodPtr;
  (*vtableDispatch)(__this,aData,(__this->klass->vtable)._10_set_Value.method,vtableDispatch);
  return;
}


// SimpleJSONFixed.JSONNumber$$Clone
// il2cpp: SimpleJSONFixed_JSONNode_o* SimpleJSONFixed_JSONNumber__Clone (SimpleJSONFixed_JSONNumber_o* __this, const MethodInfo* method);
// 0x407fc10

SimpleJSONFixed_JSONNode_o *
SimpleJSONFixed_JSONNumber__Clone(SimpleJSONFixed_JSONNumber_o *__this,MethodInfo *method)

{
  Il2CppClass *pIVar1;
  Il2CppObject *__this_00;
  
  if (g_data_057ac390 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNumber);
    g_data_057ac390 = '\x01';
  }
  pIVar1 = (Il2CppClass *)(__this->fields).m_Data;
  __this_00 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_JSONNumber);
  if (g_data_057ac38e == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    g_data_057ac38e = '\x01';
  }
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  __this_00[1].klass = pIVar1;
  return (SimpleJSONFixed_JSONNode_o *)__this_00;
}


// SimpleJSONFixed.JSONNumber$$WriteToStringBuilder
// il2cpp: void SimpleJSONFixed_JSONNumber__WriteToStringBuilder (SimpleJSONFixed_JSONNumber_o* __this, System_Text_StringBuilder_o* aSB, int32_t aIndent, int32_t aIndentInc, int32_t aMode, const MethodInfo* method);
// 0x407fca0

void SimpleJSONFixed_JSONNumber__WriteToStringBuilder
               (SimpleJSONFixed_JSONNumber_o *__this,System_Text_StringBuilder_o *aSB,int32_t aIndent,
               int32_t aIndentInc,int32_t aMode,MethodInfo *method)

{
  System_String_o *value;
  undefined4 in_register_0000000c;
  undefined4 in_register_00000014;
  
  value = (System_String_o *)
          (*(__this->klass->vtable)._9_get_Value.methodPtr)
                    (__this,(__this->klass->vtable)._9_get_Value.method,CONCAT44(in_register_00000014,aIndent)
                     ,CONCAT44(in_register_0000000c,aIndentInc));
  if (aSB != (System_Text_StringBuilder_o *)0x0) {
    System_Text_StringBuilder__Append_3b03f90(aSB,value,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac391 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_decimal);
    g_data_057ac391 = '\x01';
  }
  if (__this == (SimpleJSONFixed_JSONNumber_o *)0x0) {
    return;
  }
  return;
}


// SimpleJSONFixed.JSONNumber$$IsNumeric
// il2cpp: bool SimpleJSONFixed_JSONNumber__IsNumeric (Il2CppObject* value, const MethodInfo* method);
// 0x407fcd0

bool_conflict SimpleJSONFixed_JSONNumber__IsNumeric(Il2CppObject *value,MethodInfo *method)

{
  Il2CppClass *pIVar1;
  bool_conflict bVar2;
  undefined8 in_RAX;
  undefined7 uVar3;
  
  if (g_data_057ac391 == '\0') {
    in_RAX = il2cpp_runtime_helper_023445d0(&TypeInfo_decimal);
    g_data_057ac391 = '\x01';
  }
  if (value != (Il2CppObject *)0x0) {
    pIVar1 = value->klass;
    uVar3 = (undefined7)((ulong)in_RAX >> 8);
    bVar2 = (bool_conflict)CONCAT71(uVar3,1);
    if ((((((pIVar1 != g_data_057b9bb8) && (pIVar1 != g_data_057b9bc0)) && (pIVar1 != g_data_057b9be8)) &&
         ((pIVar1 != g_data_057b9bf0 && (pIVar1 != TypeInfo_decimal)))) &&
        ((pIVar1 != g_data_057b9bd8 && ((pIVar1 != g_data_057b9be0 && (pIVar1 != g_data_057b9ba8)))))) &&
       ((pIVar1 != g_data_057b9bb0 && (pIVar1 != g_data_057b9ba0)))) {
      bVar2 = (bool_conflict)CONCAT71(uVar3,pIVar1 == g_data_057b9b88);
    }
    return bVar2;
  }
  return 0;
}


// SimpleJSONFixed.JSONNumber$$Equals
// il2cpp: bool SimpleJSONFixed_JSONNumber__Equals (SimpleJSONFixed_JSONNumber_o* __this, Il2CppObject* obj, const MethodInfo* method);
// 0x407fd60

bool_conflict
SimpleJSONFixed_JSONNumber__Equals(SimpleJSONFixed_JSONNumber_o *__this,Il2CppObject *obj,MethodInfo *method)

{
  int iVar1;
  bool_conflict bVar2;
  uint uVar3;
  undefined8 in_RAX;
  Il2CppClass *extraout_RDX;
  Il2CppClass *extraout_RDX_00;
  Il2CppClass *extraout_RDX_01;
  Il2CppObject *a;
  Il2CppClass *pIVar4;
  Il2CppObject *pIVar5;
  Il2CppClass *pIVar6;
  
  if (g_data_057ac392 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Convert);
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    in_RAX = il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNumber);
    g_data_057ac392 = '\x01';
  }
  if (obj == (Il2CppObject *)0x0) {
label_0407fec9:
    uVar3 = 0;
  }
  else {
    if (__this == (SimpleJSONFixed_JSONNumber_o *)obj) {
      return (bool_conflict)CONCAT71((int7)((ulong)in_RAX >> 8),1);
    }
    pIVar6 = obj->klass;
    if ((pIVar6->_2).naturalAligment < *(byte *)(TypeInfo_JSONNumber + 0x130)) {
      a = (Il2CppObject *)0x0;
      if (*(int *)(TypeInfo_JSONNode + 0xe4) != 0) goto label_0407fe18;
label_0407fee0:
      il2cpp_runtime_helper_02337ed0();
      pIVar6 = extraout_RDX;
      if (g_data_057ac34d != '\0') goto label_0407fe25;
label_0407fef2:
      il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
      g_data_057ac34d = '\x01';
      iVar1 = *(int *)(TypeInfo_JSONNode + 0xe4);
      pIVar6 = extraout_RDX_00;
    }
    else {
      pIVar6 = (Il2CppClass *)(pIVar6->_2).typeHierarchy;
      a = (Il2CppObject *)0x0;
      if (*(long *)((long)pIVar6 + (ulong)*(byte *)(TypeInfo_JSONNumber + 0x130) * 8 + -8) == TypeInfo_JSONNumber) {
        a = obj;
      }
      if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) goto label_0407fee0;
label_0407fe18:
      if (g_data_057ac34d == '\0') goto label_0407fef2;
label_0407fe25:
      iVar1 = *(int *)(TypeInfo_JSONNode + 0xe4);
    }
    if (iVar1 == 0) {
      il2cpp_runtime_helper_02337ed0();
      pIVar6 = extraout_RDX_01;
    }
    pIVar5 = a;
    bVar2 = SimpleJSONFixed_JSONNode__op_Equality
                      ((SimpleJSONFixed_JSONNode_o *)a,(Il2CppObject *)0x0,(MethodInfo *)pIVar6);
    if ((char)bVar2 == '\0') {
      if (a == (Il2CppObject *)0x0) {
        il2cpp_runtime_helper_022b2c90();
        pIVar6 = pIVar5[1].klass;
        pIVar4 = (Il2CppClass *)((ulong)pIVar6 & 0x7ff0000000000000);
        if (((ulong)((long)&pIVar6[-1].vtable[0xfe].method + 7U) & 0x7ff0000000000000) != 0x7ff0000000000000)
        {
          pIVar4 = pIVar6;
        }
        return (uint)((ulong)pIVar4 >> 0x20) ^ (uint)pIVar4;
      }
      pIVar6 = a[1].klass;
    }
    else {
      if (g_data_057ac391 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_decimal);
        g_data_057ac391 = '\x01';
      }
      pIVar6 = obj->klass;
      if ((((((pIVar6 != g_data_057b9bb8) && (pIVar6 != g_data_057b9bc0)) && (pIVar6 != g_data_057b9be8)) &&
           ((pIVar6 != g_data_057b9bf0 && (pIVar6 != TypeInfo_decimal)))) &&
          ((pIVar6 != g_data_057b9bd8 && ((pIVar6 != g_data_057b9be0 && (pIVar6 != g_data_057b9ba8)))))) &&
         ((pIVar6 != g_data_057b9bb0 && ((pIVar6 != g_data_057b9ba0 && (pIVar6 != g_data_057b9b88))))))
      goto label_0407fec9;
      if (*(int *)(TypeInfo_Convert + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pIVar6 = (Il2CppClass *)System_Convert__ToDouble(obj,(MethodInfo *)0x0);
    }
    uVar3 = -(uint)((double)pIVar6 == (__this->fields).m_Data) & 1;
  }
  return uVar3;
}


// SimpleJSONFixed.JSONNumber$$GetHashCode
// il2cpp: int32_t SimpleJSONFixed_JSONNumber__GetHashCode (SimpleJSONFixed_JSONNumber_o* __this, const MethodInfo* method);
// 0x407ff70

int32_t SimpleJSONFixed_JSONNumber__GetHashCode(SimpleJSONFixed_JSONNumber_o *__this,MethodInfo *method)

{
  double dVar1;
  double dVar2;
  
  dVar1 = (__this->fields).m_Data;
  dVar2 = (double)((ulong)dVar1 & 0x7ff0000000000000);
  if (((long)dVar1 - 1U & 0x7ff0000000000000) != 0x7ff0000000000000) {
    dVar2 = dVar1;
  }
  return (uint)((ulong)dVar2 >> 0x20) ^ SUB84(dVar2,0);
}


// SimpleJSONFixed.JSONNumber$$Clear
// il2cpp: void SimpleJSONFixed_JSONNumber__Clear (SimpleJSONFixed_JSONNumber_o* __this, const MethodInfo* method);
// 0x407ffa0

void SimpleJSONFixed_JSONNumber__Clear(SimpleJSONFixed_JSONNumber_o *__this,MethodInfo *method)

{
  (__this->fields).m_Data = 0.0;
  return;
}


