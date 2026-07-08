// Type: SimpleJSONFixed.JSONNumber
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/SimpleJSONFixed/JSONNumber.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/Utility/SimpleJSON.cs  [CHANGED since prior version]
// --------------------------------

// SimpleJSONFixed.JSONNumber$$get_Tag
// il2cpp: int32_t SimpleJSONFixed_JSONNumber__get_Tag (SimpleJSONFixed_JSONNumber_o* __this, const MethodInfo* method);
// 0x3d8a070

int32_t SimpleJSONFixed_JSONNumber__get_Tag(SimpleJSONFixed_JSONNumber_o *__this,MethodInfo *method)

{
  return 4;
}


// SimpleJSONFixed.JSONNumber$$get_IsNumber
// il2cpp: bool SimpleJSONFixed_JSONNumber__get_IsNumber (SimpleJSONFixed_JSONNumber_o* __this, const MethodInfo* method);
// 0x3d8a080

bool_conflict
SimpleJSONFixed_JSONNumber__get_IsNumber(SimpleJSONFixed_JSONNumber_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// SimpleJSONFixed.JSONNumber$$GetEnumerator
// il2cpp: SimpleJSONFixed_JSONNode_Enumerator_o SimpleJSONFixed_JSONNumber__GetEnumerator (SimpleJSONFixed_JSONNumber_o* __this, const MethodInfo* method);
// 0x3d8a090

/* WARNING: Type propagation algorithm not settling */

SimpleJSONFixed_JSONNode_Enumerator_o *
SimpleJSONFixed_JSONNumber__GetEnumerator
          (SimpleJSONFixed_JSONNode_Enumerator_o *__return_storage_ptr__,
          SimpleJSONFixed_JSONNumber_o *__this,MethodInfo *method)

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


// SimpleJSONFixed.JSONNumber$$get_Value
// il2cpp: System_String_o* SimpleJSONFixed_JSONNumber__get_Value (SimpleJSONFixed_JSONNumber_o* __this, const MethodInfo* method);
// 0x3d8a0b0

System_String_o *
SimpleJSONFixed_JSONNumber__get_Value(SimpleJSONFixed_JSONNumber_o *__this,MethodInfo *method)

{
  System_Globalization_CultureInfo_o *method_00;
  System_String_o *pSVar1;
  double __this_00;
  
  if (DAT_057026dc == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CultureInfo);
    DAT_057026dc = '\x01';
  }
  if (*(int *)(TypeInfo_CultureInfo + 0xe4) == 0) {
    il2cpp_init_class();
  }
  method_00 = System_Globalization_CultureInfo__get_InvariantCulture((MethodInfo *)0x0);
  pSVar1 = System_Double__ToString
                     (__this_00,(System_IFormatProvider_o *)&__this->fields,(MethodInfo *)method_00)
  ;
  return pSVar1;
}


// SimpleJSONFixed.JSONNumber$$set_Value
// il2cpp: void SimpleJSONFixed_JSONNumber__set_Value (SimpleJSONFixed_JSONNumber_o* __this, System_String_o* value, const MethodInfo* method);
// 0x3d8a110

void SimpleJSONFixed_JSONNumber__set_Value
               (SimpleJSONFixed_JSONNumber_o *__this,System_String_o *value,MethodInfo *method)

{
  bool_conflict bVar1;
  System_Globalization_CultureInfo_o *provider;
  SimpleJSONFixed_JSONNumber_Fields SStack_18;
  
  if (DAT_057026dd == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CultureInfo);
    DAT_057026dd = '\x01';
  }
  SStack_18.m_Data = 0.0;
  if (*(int *)(TypeInfo_CultureInfo + 0xe4) == 0) {
    il2cpp_init_class();
  }
  provider = System_Globalization_CultureInfo__get_InvariantCulture((MethodInfo *)0x0);
  bVar1 = System_Double__TryParse
                    (value,0xa7,(System_IFormatProvider_o *)provider,&SStack_18.m_Data,
                     (MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    (__this->fields).m_Data = SStack_18.m_Data;
  }
  return;
}


// SimpleJSONFixed.JSONNumber$$get_AsDouble
// il2cpp: double SimpleJSONFixed_JSONNumber__get_AsDouble (SimpleJSONFixed_JSONNumber_o* __this, const MethodInfo* method);
// 0x3d8a190

double SimpleJSONFixed_JSONNumber__get_AsDouble
                 (SimpleJSONFixed_JSONNumber_o *__this,MethodInfo *method)

{
  return (__this->fields).m_Data;
}


// SimpleJSONFixed.JSONNumber$$set_AsDouble
// il2cpp: void SimpleJSONFixed_JSONNumber__set_AsDouble (SimpleJSONFixed_JSONNumber_o* __this, double value, const MethodInfo* method);
// 0x3d8a1a0

void SimpleJSONFixed_JSONNumber__set_AsDouble
               (SimpleJSONFixed_JSONNumber_o *__this,double value,MethodInfo *method)

{
  (__this->fields).m_Data = value;
  return;
}


// SimpleJSONFixed.JSONNumber$$get_AsLong
// il2cpp: int64_t SimpleJSONFixed_JSONNumber__get_AsLong (SimpleJSONFixed_JSONNumber_o* __this, const MethodInfo* method);
// 0x3d8a1b0

int64_t SimpleJSONFixed_JSONNumber__get_AsLong
                  (SimpleJSONFixed_JSONNumber_o *__this,MethodInfo *method)

{
  return (long)(__this->fields).m_Data;
}


// SimpleJSONFixed.JSONNumber$$set_AsLong
// il2cpp: void SimpleJSONFixed_JSONNumber__set_AsLong (SimpleJSONFixed_JSONNumber_o* __this, int64_t value, const MethodInfo* method);
// 0x3d8a1c0

void SimpleJSONFixed_JSONNumber__set_AsLong
               (SimpleJSONFixed_JSONNumber_o *__this,int64_t value,MethodInfo *method)

{
  (__this->fields).m_Data = (double)value;
  return;
}


// SimpleJSONFixed.JSONNumber$$get_AsULong
// il2cpp: uint64_t SimpleJSONFixed_JSONNumber__get_AsULong (SimpleJSONFixed_JSONNumber_o* __this, const MethodInfo* method);
// 0x3d8a1d0

uint64_t SimpleJSONFixed_JSONNumber__get_AsULong
                   (SimpleJSONFixed_JSONNumber_o *__this,MethodInfo *method)

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
// 0x3d8a220

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
// 0x3d84410

void SimpleJSONFixed_JSONNumber___ctor
               (SimpleJSONFixed_JSONNumber_o *__this,double aData,MethodInfo *method)

{
  if (DAT_057026de == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_JSONNode);
    DAT_057026de = '\x01';
  }
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_init_class();
  }
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).m_Data = aData;
  return;
}


// SimpleJSONFixed.JSONNumber$$.ctor
// il2cpp: void SimpleJSONFixed_JSONNumber___ctor (SimpleJSONFixed_JSONNumber_o* __this, System_String_o* aData, const MethodInfo* method);
// 0x3d8a250

void SimpleJSONFixed_JSONNumber___ctor
               (SimpleJSONFixed_JSONNumber_o *__this,System_String_o *aData,MethodInfo *method)

{
  Il2CppMethodPointer vtable_dispatch;
  
  if (DAT_057026df == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_JSONNode);
    DAT_057026df = '\x01';
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


// SimpleJSONFixed.JSONNumber$$Clone
// il2cpp: SimpleJSONFixed_JSONNode_o* SimpleJSONFixed_JSONNumber__Clone (SimpleJSONFixed_JSONNumber_o* __this, const MethodInfo* method);
// 0x3d8a2c0

SimpleJSONFixed_JSONNode_o *
SimpleJSONFixed_JSONNumber__Clone(SimpleJSONFixed_JSONNumber_o *__this,MethodInfo *method)

{
  Il2CppClass *pIVar1;
  Il2CppObject *__this_00;
  
  if (DAT_057026e0 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_JSONNumber);
    DAT_057026e0 = '\x01';
  }
  pIVar1 = (Il2CppClass *)(__this->fields).m_Data;
  __this_00 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_JSONNumber);
  if (DAT_057026de == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_JSONNode);
    DAT_057026de = '\x01';
  }
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_init_class();
  }
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  __this_00[1].klass = pIVar1;
  return (SimpleJSONFixed_JSONNode_o *)__this_00;
}


// SimpleJSONFixed.JSONNumber$$WriteToStringBuilder
// il2cpp: void SimpleJSONFixed_JSONNumber__WriteToStringBuilder (SimpleJSONFixed_JSONNumber_o* __this, System_Text_StringBuilder_o* aSB, int32_t aIndent, int32_t aIndentInc, int32_t aMode, const MethodInfo* method);
// 0x3d8a350

void SimpleJSONFixed_JSONNumber__WriteToStringBuilder
               (SimpleJSONFixed_JSONNumber_o *__this,System_Text_StringBuilder_o *aSB,
               int32_t aIndent,int32_t aIndentInc,int32_t aMode,MethodInfo *method)

{
  System_String_o *value;
  undefined4 in_register_00000014;
  
  value = (System_String_o *)
          (*(__this->klass->vtable)._9_get_Value.methodPtr)
                    (__this,(__this->klass->vtable)._9_get_Value.method,
                     CONCAT44(in_register_00000014,aIndent));
  if (aSB != (System_Text_StringBuilder_o *)0x0) {
    System_Text_StringBuilder__Append(aSB,value,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// SimpleJSONFixed.JSONNumber$$IsNumeric
// il2cpp: bool SimpleJSONFixed_JSONNumber__IsNumeric (Il2CppObject* value, const MethodInfo* method);
// 0x3d8a380

bool_conflict SimpleJSONFixed_JSONNumber__IsNumeric(Il2CppObject *value,MethodInfo *method)

{
  Il2CppClass *pIVar1;
  bool_conflict bVar2;
  undefined8 in_RAX;
  undefined7 uVar3;
  
  if (DAT_057026e1 == '\0') {
    in_RAX = il2cpp_init_method_metadata(&TypeInfo_decimal);
    DAT_057026e1 = '\x01';
  }
  if (value != (Il2CppObject *)0x0) {
    pIVar1 = value->klass;
    uVar3 = (undefined7)((ulong)in_RAX >> 8);
    bVar2 = (bool_conflict)CONCAT71(uVar3,1);
    if ((((((pIVar1 != DAT_05711068) && (pIVar1 != DAT_05711070)) && (pIVar1 != DAT_05711098)) &&
         ((pIVar1 != DAT_057110a0 && (pIVar1 != TypeInfo_decimal)))) &&
        ((pIVar1 != DAT_05711088 && ((pIVar1 != DAT_05711090 && (pIVar1 != DAT_05711058)))))) &&
       ((pIVar1 != DAT_05711060 && (pIVar1 != DAT_05711050)))) {
      bVar2 = (bool_conflict)CONCAT71(uVar3,pIVar1 == DAT_05711038);
    }
    return bVar2;
  }
  return 0;
}


// SimpleJSONFixed.JSONNumber$$Equals
// il2cpp: bool SimpleJSONFixed_JSONNumber__Equals (SimpleJSONFixed_JSONNumber_o* __this, Il2CppObject* obj, const MethodInfo* method);
// 0x3d8a410

bool_conflict
SimpleJSONFixed_JSONNumber__Equals
          (SimpleJSONFixed_JSONNumber_o *__this,Il2CppObject *obj,MethodInfo *method)

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
  
  if (DAT_057026e2 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Convert);
    il2cpp_init_method_metadata(&TypeInfo_JSONNode);
    in_RAX = il2cpp_init_method_metadata(&TypeInfo_JSONNumber);
    DAT_057026e2 = '\x01';
  }
  if (obj == (Il2CppObject *)0x0) {
LAB_03d8a579:
    uVar3 = 0;
  }
  else {
    if (__this == (SimpleJSONFixed_JSONNumber_o *)obj) {
      return (bool_conflict)CONCAT71((int7)((ulong)in_RAX >> 8),1);
    }
    pIVar4 = obj->klass;
    if ((pIVar4->_2).naturalAligment < *(byte *)(TypeInfo_JSONNumber + 0x130)) {
      a = (Il2CppObject *)0x0;
      if (*(int *)(TypeInfo_JSONNode + 0xe4) != 0) goto LAB_03d8a4c8;
LAB_03d8a590:
      il2cpp_init_class();
      pIVar4 = extraout_RDX;
      if (DAT_0570269d != '\0') goto LAB_03d8a4d5;
LAB_03d8a5a2:
      il2cpp_init_method_metadata(&TypeInfo_JSONNode);
      DAT_0570269d = '\x01';
      iVar1 = *(int *)(TypeInfo_JSONNode + 0xe4);
      pIVar4 = extraout_RDX_00;
    }
    else {
      pIVar4 = (Il2CppClass *)(pIVar4->_2).typeHierarchy;
      a = (Il2CppObject *)0x0;
      if (*(long *)((long)pIVar4 + (ulong)*(byte *)(TypeInfo_JSONNumber + 0x130) * 8 + -8) == TypeInfo_JSONNumber)
      {
        a = obj;
      }
      if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) goto LAB_03d8a590;
LAB_03d8a4c8:
      if (DAT_0570269d == '\0') goto LAB_03d8a5a2;
LAB_03d8a4d5:
      iVar1 = *(int *)(TypeInfo_JSONNode + 0xe4);
    }
    if (iVar1 == 0) {
      il2cpp_init_class();
      pIVar4 = extraout_RDX_01;
    }
    bVar2 = SimpleJSONFixed_JSONNode__op_Equality
                      ((SimpleJSONFixed_JSONNode_o *)a,(Il2CppObject *)0x0,(MethodInfo *)pIVar4);
    if ((char)bVar2 == '\0') {
      if (a == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      pIVar4 = a[1].klass;
    }
    else {
      if (DAT_057026e1 == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_decimal);
        DAT_057026e1 = '\x01';
      }
      pIVar4 = obj->klass;
      if ((((((pIVar4 != DAT_05711068) && (pIVar4 != DAT_05711070)) && (pIVar4 != DAT_05711098)) &&
           ((pIVar4 != DAT_057110a0 && (pIVar4 != TypeInfo_decimal)))) &&
          ((pIVar4 != DAT_05711088 && ((pIVar4 != DAT_05711090 && (pIVar4 != DAT_05711058)))))) &&
         ((pIVar4 != DAT_05711060 && ((pIVar4 != DAT_05711050 && (pIVar4 != DAT_05711038))))))
      goto LAB_03d8a579;
      if (*(int *)(TypeInfo_Convert + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pIVar4 = (Il2CppClass *)System_Convert__ToDouble(obj,(MethodInfo *)0x0);
    }
    uVar3 = -(uint)((double)pIVar4 == (__this->fields).m_Data) & 1;
  }
  return uVar3;
}


// SimpleJSONFixed.JSONNumber$$GetHashCode
// il2cpp: int32_t SimpleJSONFixed_JSONNumber__GetHashCode (SimpleJSONFixed_JSONNumber_o* __this, const MethodInfo* method);
// 0x3d8a620

int32_t SimpleJSONFixed_JSONNumber__GetHashCode
                  (SimpleJSONFixed_JSONNumber_o *__this,MethodInfo *method)

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
// 0x3d8a650

void SimpleJSONFixed_JSONNumber__Clear(SimpleJSONFixed_JSONNumber_o *__this,MethodInfo *method)

{
  (__this->fields).m_Data = 0.0;
  return;
}


