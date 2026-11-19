// Type: SimpleJSONFixed.JSONNumber
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/SimpleJSONFixed/JSONNumber.cs
// Prior real C# source (older reference): Assets/Scripts/Utility/SimpleJSON.cs
// --------------------------------

// SimpleJSONFixed.JSONNumber$$get_Tag
// il2cpp: int32_t SimpleJSONFixed_JSONNumber__get_Tag (SimpleJSONFixed_JSONNumber_o* __this, const MethodInfo* method);
// 0x58692e0

int32_t SimpleJSONFixed_JSONNumber__get_Tag(SimpleJSONFixed_JSONNumber_o *__this,MethodInfo *method)

{
  return 4;
}


// SimpleJSONFixed.JSONNumber$$get_IsNumber
// il2cpp: bool SimpleJSONFixed_JSONNumber__get_IsNumber (SimpleJSONFixed_JSONNumber_o* __this, const MethodInfo* method);
// 0x58692f0

bool SimpleJSONFixed_JSONNumber__get_IsNumber(SimpleJSONFixed_JSONNumber_o *__this,MethodInfo *method)

{
  return true;
}


// SimpleJSONFixed.JSONNumber$$GetEnumerator
// il2cpp: SimpleJSONFixed_JSONNode_Enumerator_o SimpleJSONFixed_JSONNumber__GetEnumerator (SimpleJSONFixed_JSONNumber_o* __this, const MethodInfo* method);
// 0x5869300

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
// 0x5869320

System_String_o *
SimpleJSONFixed_JSONNumber__get_Value(SimpleJSONFixed_JSONNumber_o *__this,MethodInfo *method)

{
  System_Globalization_CultureInfo_o *provider;
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_0754511e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Globalization_CultureInfo);
    Il2CppMethodInitialized_0754511e = '\x01';
  }
  if ((TypeInfo_System_Globalization_CultureInfo->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Globalization_CultureInfo);
  }
  provider = System_Globalization_CultureInfo__get_InvariantCulture((MethodInfo *)0x0);
  pSVar1 = System_Double__ToString_549db40
                     (&(__this->fields).m_Data,(System_IFormatProvider_o *)provider,(MethodInfo *)0x0);
  return pSVar1;
}


// SimpleJSONFixed.JSONNumber$$set_Value
// il2cpp: void SimpleJSONFixed_JSONNumber__set_Value (SimpleJSONFixed_JSONNumber_o* __this, System_String_o* value, const MethodInfo* method);
// 0x5869380

void SimpleJSONFixed_JSONNumber__set_Value
               (SimpleJSONFixed_JSONNumber_o *__this,System_String_o *value,MethodInfo *method)

{
  bool bVar1;
  System_Globalization_CultureInfo_o *provider;
  SimpleJSONFixed_JSONNumber_Fields SStack_18;
  
  if (Il2CppMethodInitialized_0754511f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Globalization_CultureInfo);
    Il2CppMethodInitialized_0754511f = '\x01';
  }
  SStack_18.m_Data = 0.0;
  if ((TypeInfo_System_Globalization_CultureInfo->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Globalization_CultureInfo);
  }
  provider = System_Globalization_CultureInfo__get_InvariantCulture((MethodInfo *)0x0);
  bVar1 = System_Double__TryParse_549e280
                    (value,0xa7,(System_IFormatProvider_o *)provider,&SStack_18.m_Data,(MethodInfo *)0x0);
  if (bVar1) {
    (__this->fields).m_Data = SStack_18.m_Data;
  }
  return;
}


// SimpleJSONFixed.JSONNumber$$get_AsDouble
// il2cpp: double SimpleJSONFixed_JSONNumber__get_AsDouble (SimpleJSONFixed_JSONNumber_o* __this, const MethodInfo* method);
// 0x5869400

double SimpleJSONFixed_JSONNumber__get_AsDouble(SimpleJSONFixed_JSONNumber_o *__this,MethodInfo *method)

{
  return (__this->fields).m_Data;
}


// SimpleJSONFixed.JSONNumber$$set_AsDouble
// il2cpp: void SimpleJSONFixed_JSONNumber__set_AsDouble (SimpleJSONFixed_JSONNumber_o* __this, double value, const MethodInfo* method);
// 0x5869410

void SimpleJSONFixed_JSONNumber__set_AsDouble
               (SimpleJSONFixed_JSONNumber_o *__this,double value,MethodInfo *method)

{
  (__this->fields).m_Data = value;
  return;
}


// SimpleJSONFixed.JSONNumber$$get_AsLong
// il2cpp: int64_t SimpleJSONFixed_JSONNumber__get_AsLong (SimpleJSONFixed_JSONNumber_o* __this, const MethodInfo* method);
// 0x5869420

int64_t SimpleJSONFixed_JSONNumber__get_AsLong(SimpleJSONFixed_JSONNumber_o *__this,MethodInfo *method)

{
  return (long)(__this->fields).m_Data;
}


// SimpleJSONFixed.JSONNumber$$set_AsLong
// il2cpp: void SimpleJSONFixed_JSONNumber__set_AsLong (SimpleJSONFixed_JSONNumber_o* __this, int64_t value, const MethodInfo* method);
// 0x5869430

void SimpleJSONFixed_JSONNumber__set_AsLong
               (SimpleJSONFixed_JSONNumber_o *__this,int64_t value,MethodInfo *method)

{
  (__this->fields).m_Data = (double)value;
  return;
}


// SimpleJSONFixed.JSONNumber$$get_AsULong
// il2cpp: uint64_t SimpleJSONFixed_JSONNumber__get_AsULong (SimpleJSONFixed_JSONNumber_o* __this, const MethodInfo* method);
// 0x5869440

uint64_t SimpleJSONFixed_JSONNumber__get_AsULong(SimpleJSONFixed_JSONNumber_o *__this,MethodInfo *method)

{
  double dVar1;
  uint64_t uVar2;
  
  dVar1 = (__this->fields).m_Data;
  uVar2 = (long)dVar1;
  if (0.0 <= dVar1) {
    uVar2 = (long)(dVar1 - 9.223372036854776e+18) & (long)dVar1 >> 0x3f | (long)dVar1;
  }
  return uVar2;
}


// SimpleJSONFixed.JSONNumber$$set_AsULong
// il2cpp: void SimpleJSONFixed_JSONNumber__set_AsULong (SimpleJSONFixed_JSONNumber_o* __this, uint64_t value, const MethodInfo* method);
// 0x5869480

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
// 0x5863980

void SimpleJSONFixed_JSONNumber___ctor(SimpleJSONFixed_JSONNumber_o *__this,double aData,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07545120 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    Il2CppMethodInitialized_07545120 = '\x01';
  }
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).m_Data = aData;
  return;
}


// SimpleJSONFixed.JSONNumber$$.ctor
// il2cpp: void SimpleJSONFixed_JSONNumber___ctor (SimpleJSONFixed_JSONNumber_o* __this, System_String_o* aData, const MethodInfo* method);
// 0x58694b0

void SimpleJSONFixed_JSONNumber___ctor_57694b0
               (SimpleJSONFixed_JSONNumber_o *__this,System_String_o *aData,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07545121 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    Il2CppMethodInitialized_07545121 = '\x01';
  }
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (*(__this->klass->vtable)._10_set_Value.methodPtr)
            (__this,aData,(__this->klass->vtable)._10_set_Value.method);
  return;
}


// SimpleJSONFixed.JSONNumber$$Clone
// il2cpp: SimpleJSONFixed_JSONNode_o* SimpleJSONFixed_JSONNumber__Clone (SimpleJSONFixed_JSONNumber_o* __this, const MethodInfo* method);
// 0x5869520

SimpleJSONFixed_JSONNode_o *
SimpleJSONFixed_JSONNumber__Clone(SimpleJSONFixed_JSONNumber_o *__this,MethodInfo *method)

{
  double dVar1;
  SimpleJSONFixed_JSONNumber_o *__this_00;
  
  if (Il2CppMethodInitialized_07545122 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNumber);
    Il2CppMethodInitialized_07545122 = '\x01';
  }
  dVar1 = (__this->fields).m_Data;
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNumber);
  if (Il2CppMethodInitialized_07545120 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    Il2CppMethodInitialized_07545120 = '\x01';
  }
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).m_Data = dVar1;
  return (SimpleJSONFixed_JSONNode_o *)__this_00;
}


// SimpleJSONFixed.JSONNumber$$WriteToStringBuilder
// il2cpp: void SimpleJSONFixed_JSONNumber__WriteToStringBuilder (SimpleJSONFixed_JSONNumber_o* __this, System_Text_StringBuilder_o* aSB, int32_t aIndent, int32_t aIndentInc, int32_t aMode, const MethodInfo* method);
// 0x58695c0

void SimpleJSONFixed_JSONNumber__WriteToStringBuilder
               (SimpleJSONFixed_JSONNumber_o *__this,System_Text_StringBuilder_o *aSB,int32_t aIndent,
               int32_t aIndentInc,int32_t aMode,MethodInfo *method)

{
  System_String_o *value;
  
  value = (*(__this->klass->vtable)._9_get_Value.methodPtr)
                    (__this,(__this->klass->vtable)._9_get_Value.method);
  if (aSB == (System_Text_StringBuilder_o *)0x0) {
    ThrowNullReferenceException();
  }
  System_Text_StringBuilder__Append_530ed80(aSB,value,(MethodInfo *)0x0);
  return;
}


// SimpleJSONFixed.JSONNumber$$IsNumeric
// il2cpp: bool SimpleJSONFixed_JSONNumber__IsNumeric (Il2CppObject* value, const MethodInfo* method);
// 0x58695f0

bool SimpleJSONFixed_JSONNumber__IsNumeric(Il2CppObject *value,MethodInfo *method)

{
  Il2CppClass *pIVar1;
  bool bVar2;
  
  if (Il2CppMethodInitialized_07545123 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Decimal);
    Il2CppMethodInitialized_07545123 = '\x01';
  }
  if (value == (Il2CppObject *)0x0) {
    return false;
  }
  pIVar1 = value->klass;
  bVar2 = true;
  if ((((((pIVar1 != g_data_07556710) && (pIVar1 != g_data_07556718)) && (pIVar1 != g_data_07556740)) &&
       ((pIVar1 != g_data_07556748 && (pIVar1 != (Il2CppClass *)TypeInfo_System_Decimal)))) &&
      ((pIVar1 != g_data_07556730 && ((pIVar1 != g_data_07556738 && (pIVar1 != g_data_07556700)))))) &&
     ((pIVar1 != g_data_07556708 && (pIVar1 != g_data_075566f8)))) {
    bVar2 = pIVar1 == g_data_075566e0;
  }
  return bVar2;
}


// SimpleJSONFixed.JSONNumber$$Equals
// il2cpp: bool SimpleJSONFixed_JSONNumber__Equals (SimpleJSONFixed_JSONNumber_o* __this, Il2CppObject* obj, const MethodInfo* method);
// 0x5869680
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5869703: jmp 0x5869806

bool SimpleJSONFixed_JSONNumber__Equals
               (SimpleJSONFixed_JSONNumber_o *__this,Il2CppObject *obj,MethodInfo *method)

{
  byte bVar1;
  uint32_t uVar2;
  bool bVar3;
  Il2CppClass *pIVar4;
  Il2CppClass *extraout_RDX;
  Il2CppClass *extraout_RDX_00;
  Il2CppClass *extraout_RDX_01;
  SimpleJSONFixed_JSONNumber_o *a;
  double dVar5;
  
  if (Il2CppMethodInitialized_07545124 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Convert);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNumber);
    Il2CppMethodInitialized_07545124 = '\x01';
  }
  if (obj == (Il2CppObject *)0x0) {
label_058697eb:
    bVar3 = false;
  }
  else {
    if (__this == (SimpleJSONFixed_JSONNumber_o *)obj) {
      return true;
    }
    pIVar4 = obj->klass;
    bVar1 = (TypeInfo_SimpleJSONFixed_JSONNumber->_2).typeHierarchyDepth;
    if ((pIVar4->_2).typeHierarchyDepth < bVar1) {
      a = (SimpleJSONFixed_JSONNumber_o *)0x0;
      if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor != 0) goto label_0586973a;
label_05869806:
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
      pIVar4 = extraout_RDX;
      if (g_data_075450d9 != '\0') goto label_05869747;
label_05869818:
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
      g_data_075450d9 = '\x01';
      uVar2 = (TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor;
      pIVar4 = extraout_RDX_00;
    }
    else {
      pIVar4 = (Il2CppClass *)(pIVar4->_2).typeHierarchy;
      a = (SimpleJSONFixed_JSONNumber_o *)0x0;
      if (*(SimpleJSONFixed_JSONNumber_c **)((long)(pIVar4->vtable + -0x14) + (ulong)bVar1 * 8) ==
          TypeInfo_SimpleJSONFixed_JSONNumber) {
        a = (SimpleJSONFixed_JSONNumber_o *)obj;
      }
      if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) goto label_05869806;
label_0586973a:
      if (g_data_075450d9 == '\0') goto label_05869818;
label_05869747:
      uVar2 = (TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor;
    }
    if (uVar2 == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
      pIVar4 = extraout_RDX_01;
    }
    bVar3 = SimpleJSONFixed_JSONNode__op_Equality
                      ((SimpleJSONFixed_JSONNode_o *)a,(Il2CppObject *)0x0,(MethodInfo *)pIVar4);
    if (bVar3) {
      if (Il2CppMethodInitialized_07545123 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Decimal);
        Il2CppMethodInitialized_07545123 = '\x01';
      }
      pIVar4 = obj->klass;
      if ((((((pIVar4 != g_data_07556710) && (pIVar4 != g_data_07556718)) && (pIVar4 != g_data_07556740)) &&
           ((pIVar4 != g_data_07556748 && (pIVar4 != (Il2CppClass *)TypeInfo_System_Decimal)))) &&
          ((pIVar4 != g_data_07556730 && ((pIVar4 != g_data_07556738 && (pIVar4 != g_data_07556700)))))) &&
         ((pIVar4 != g_data_07556708 && ((pIVar4 != g_data_075566f8 && (pIVar4 != g_data_075566e0))))))
      goto label_058697eb;
      if ((TypeInfo_System_Convert->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Convert);
      }
      dVar5 = System_Convert__ToDouble(obj,(MethodInfo *)0x0);
      a = __this;
    }
    else {
      if (a == (SimpleJSONFixed_JSONNumber_o *)0x0) {
        ThrowNullReferenceException();
      }
      dVar5 = (__this->fields).m_Data;
    }
    bVar3 = (bool)(-(dVar5 == (a->fields).m_Data) & 1);
  }
  return bVar3;
}


// SimpleJSONFixed.JSONNumber$$GetHashCode
// il2cpp: int32_t SimpleJSONFixed_JSONNumber__GetHashCode (SimpleJSONFixed_JSONNumber_o* __this, const MethodInfo* method);
// 0x5869890

int32_t SimpleJSONFixed_JSONNumber__GetHashCode(SimpleJSONFixed_JSONNumber_o *__this,MethodInfo *method)

{
  double dVar1;
  double dVar2;
  
  dVar1 = (__this->fields).m_Data;
  dVar2 = (double)((ulong)dVar1 & 0x7ff0000000000000);
  if ((-(long)dVar1 & 0x7ff0000000000000U) != 0) {
    dVar2 = dVar1;
  }
  return (uint)((ulong)dVar2 >> 0x20) ^ SUB84(dVar2,0);
}


// SimpleJSONFixed.JSONNumber$$Clear
// il2cpp: void SimpleJSONFixed_JSONNumber__Clear (SimpleJSONFixed_JSONNumber_o* __this, const MethodInfo* method);
// 0x58698c0

void SimpleJSONFixed_JSONNumber__Clear(SimpleJSONFixed_JSONNumber_o *__this,MethodInfo *method)

{
  (__this->fields).m_Data = 0.0;
  return;
}


