// Type: SimpleJSONFixed.JSONNumber
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/SimpleJSONFixed/JSONNumber.cs
// Prior real C# source (older reference): Assets/Scripts/Utility/SimpleJSON.cs
// --------------------------------

// SimpleJSONFixed.JSONNumber$$get_Tag
// il2cpp: int32_t SimpleJSONFixed_JSONNumber__get_Tag (SimpleJSONFixed_JSONNumber_o* __this, const MethodInfo* method);
// 0x180846f40

int32_t
SimpleJSONFixed_JSONNumber__get_Tag(SimpleJSONFixed_JSONNumber_o* __this, MethodInfo* method)

{
  return 4;
}


// SimpleJSONFixed.JSONNumber$$get_IsNumber
// il2cpp: bool SimpleJSONFixed_JSONNumber__get_IsNumber (SimpleJSONFixed_JSONNumber_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
SimpleJSONFixed_JSONNumber__get_IsNumber(SimpleJSONFixed_JSONNumber_o* __this, MethodInfo* method)

{
  return true;
}


// SimpleJSONFixed.JSONNumber$$GetEnumerator
// il2cpp: SimpleJSONFixed_JSONNode_Enumerator_o SimpleJSONFixed_JSONNumber__GetEnumerator (SimpleJSONFixed_JSONNumber_o* __this, const MethodInfo* method);
// 0x181dc13a0

SimpleJSONFixed_JSONNode_Enumerator_o
SimpleJSONFixed_JSONNumber__GetEnumerator(SimpleJSONFixed_JSONNumber_o* __this, MethodInfo* method)

{
  *(undefined8 *)&__return_storage_ptr__->fields = 0;
  (__return_storage_ptr__->fields).m_Object.fields._dictionary =
       (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  (__return_storage_ptr__->fields).m_Object.fields._version = 0;
  (__return_storage_ptr__->fields).m_Object.fields._index = 0;
  (__return_storage_ptr__->fields).m_Object.fields._current.fields.key = (Il2CppObject *)0x0;
  (__return_storage_ptr__->fields).m_Object.fields._current.fields.value = (Il2CppObject *)0x0;
  *(undefined8 *)&(__return_storage_ptr__->fields).m_Object.fields._getEnumeratorRetType = 0;
  (__return_storage_ptr__->fields).m_Array.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  (__return_storage_ptr__->fields).m_Array.fields._index = 0;
  (__return_storage_ptr__->fields).m_Array.fields._version = 0;
  (__return_storage_ptr__->fields).m_Array.fields._current = (SimpleJSONFixed_JSONNode_o *)0x0;
  return __return_storage_ptr__;
}


// SimpleJSONFixed.JSONNumber$$get_Value
// il2cpp: System_String_o* SimpleJSONFixed_JSONNumber__get_Value (SimpleJSONFixed_JSONNumber_o* __this, const MethodInfo* method);
// 0x181dc59b0

System_String_o *
SimpleJSONFixed_JSONNumber__get_Value(SimpleJSONFixed_JSONNumber_o *__this,MethodInfo *method)

{
  System_Globalization_CultureInfo_o *provider;
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_1843449c2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Globalization_CultureInfo);
    Il2CppMethodInitialized_1843449c2 = '\x01';
  }
  if ((TypeInfo_System_Globalization_CultureInfo->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Globalization_CultureInfo);
  }
  provider = System_Globalization_CultureInfo__get_InvariantCulture((MethodInfo *)0x0);
  pSVar1 = System_Double__ToString_1b226c0
                     (&(__this->fields).m_Data,(System_IFormatProvider_o *)provider,(MethodInfo *)0x0);
  return pSVar1;
}


// SimpleJSONFixed.JSONNumber$$set_Value
// il2cpp: void SimpleJSONFixed_JSONNumber__set_Value (SimpleJSONFixed_JSONNumber_o* __this, System_String_o* value, const MethodInfo* method);
// 0x181dc5a60

void SimpleJSONFixed_JSONNumber__set_Value
               (SimpleJSONFixed_JSONNumber_o *__this,System_String_o *value,MethodInfo *method)

{
  bool bVar1;
  System_Globalization_CultureInfo_o *provider;
  SimpleJSONFixed_JSONNumber_Fields local_res10 [3];
  
  if (Il2CppMethodInitialized_1843449c3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Globalization_CultureInfo);
    Il2CppMethodInitialized_1843449c3 = '\x01';
  }
  local_res10[0].m_Data = 0.0;
  if ((TypeInfo_System_Globalization_CultureInfo->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Globalization_CultureInfo);
  }
  provider = System_Globalization_CultureInfo__get_InvariantCulture((MethodInfo *)0x0);
  bVar1 = System_Double__TryParse_1b22970
                    (value,0xa7,(System_IFormatProvider_o *)provider,&local_res10[0].m_Data,(MethodInfo *)0x0)
  ;
  if (bVar1) {
    (__this->fields).m_Data = local_res10[0].m_Data;
  }
  return;
}


// SimpleJSONFixed.JSONNumber$$get_AsDouble
// il2cpp: double SimpleJSONFixed_JSONNumber__get_AsDouble (SimpleJSONFixed_JSONNumber_o* __this, const MethodInfo* method);
// 0x181537000

double
SimpleJSONFixed_JSONNumber__get_AsDouble(SimpleJSONFixed_JSONNumber_o* __this, MethodInfo* method)

{
  return (double)(__this->fields)._current;
}


// SimpleJSONFixed.JSONNumber$$set_AsDouble
// il2cpp: void SimpleJSONFixed_JSONNumber__set_AsDouble (SimpleJSONFixed_JSONNumber_o* __this, double value, const MethodInfo* method);
// 0x181dc5a10

void SimpleJSONFixed_JSONNumber__set_AsDouble
               (SimpleJSONFixed_JSONNumber_o *__this,double value,MethodInfo *method)

{
  (__this->fields).m_Data = value;
  return;
}


// SimpleJSONFixed.JSONNumber$$get_AsLong
// il2cpp: int64_t SimpleJSONFixed_JSONNumber__get_AsLong (SimpleJSONFixed_JSONNumber_o* __this, const MethodInfo* method);
// 0x181dc5950

int64_t SimpleJSONFixed_JSONNumber__get_AsLong(SimpleJSONFixed_JSONNumber_o *__this,MethodInfo *method)

{
  return (longlong)(__this->fields).m_Data;
}


// SimpleJSONFixed.JSONNumber$$set_AsLong
// il2cpp: void SimpleJSONFixed_JSONNumber__set_AsLong (SimpleJSONFixed_JSONNumber_o* __this, int64_t value, const MethodInfo* method);
// 0x181dc5a20

void SimpleJSONFixed_JSONNumber__set_AsLong
               (SimpleJSONFixed_JSONNumber_o *__this,int64_t value,MethodInfo *method)

{
  (__this->fields).m_Data = (double)value;
  return;
}


// SimpleJSONFixed.JSONNumber$$get_AsULong
// il2cpp: uint64_t SimpleJSONFixed_JSONNumber__get_AsULong (SimpleJSONFixed_JSONNumber_o* __this, const MethodInfo* method);
// 0x181dc5960

uint64_t SimpleJSONFixed_JSONNumber__get_AsULong(SimpleJSONFixed_JSONNumber_o *__this,MethodInfo *method)

{
  longlong lVar1;
  double dVar2;
  
  dVar2 = (__this->fields).m_Data;
  if (dVar2 < 0.0) {
    return (longlong)dVar2;
  }
  lVar1 = 0;
  if ((9.223372036854776e+18 <= dVar2) &&
     (dVar2 = dVar2 - 9.223372036854776e+18, dVar2 < 9.223372036854776e+18)) {
    lVar1 = -0x8000000000000000;
  }
  return (longlong)dVar2 + lVar1;
}


// SimpleJSONFixed.JSONNumber$$set_AsULong
// il2cpp: void SimpleJSONFixed_JSONNumber__set_AsULong (SimpleJSONFixed_JSONNumber_o* __this, uint64_t value, const MethodInfo* method);
// 0x181dc5a30

void SimpleJSONFixed_JSONNumber__set_AsULong
               (SimpleJSONFixed_JSONNumber_o *__this,uint64_t value,MethodInfo *method)

{
  if (-1 < (longlong)value) {
    (__this->fields).m_Data = (double)(longlong)value;
    return;
  }
  (__this->fields).m_Data = (double)value;
  return;
}


// SimpleJSONFixed.JSONNumber$$.ctor
// il2cpp: void SimpleJSONFixed_JSONNumber___ctor (SimpleJSONFixed_JSONNumber_o* __this, double aData, const MethodInfo* method);
// 0x181dc5880

void SimpleJSONFixed_JSONNumber___ctor(SimpleJSONFixed_JSONNumber_o *__this,double aData,MethodInfo *method)

{
  if (Il2CppMethodInitialized_1843449c4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    Il2CppMethodInitialized_1843449c4 = '\x01';
  }
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  (__this->fields).m_Data = aData;
  return;
}


// SimpleJSONFixed.JSONNumber$$.ctor
// il2cpp: void SimpleJSONFixed_JSONNumber___ctor (SimpleJSONFixed_JSONNumber_o* __this, System_String_o* aData, const MethodInfo* method);
// 0x181dc58e0

void SimpleJSONFixed_JSONNumber___ctor_1dc58e0
               (SimpleJSONFixed_JSONNumber_o *__this,System_String_o *aData,MethodInfo *method)

{
  if (Il2CppMethodInitialized_1843449c5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    Il2CppMethodInitialized_1843449c5 = '\x01';
  }
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  (*(__this->klass->vtable)._10_set_Value.methodPtr)
            (__this,aData,(__this->klass->vtable)._10_set_Value.method);
  return;
}


// SimpleJSONFixed.JSONNumber$$Clone
// il2cpp: SimpleJSONFixed_JSONNode_o* SimpleJSONFixed_JSONNumber__Clone (SimpleJSONFixed_JSONNumber_o* __this, const MethodInfo* method);
// 0x181dc5310

SimpleJSONFixed_JSONNode_o *
SimpleJSONFixed_JSONNumber__Clone(SimpleJSONFixed_JSONNumber_o *__this,MethodInfo *method)

{
  double dVar1;
  SimpleJSONFixed_JSONNumber_o *__this_00;
  
  if (Il2CppMethodInitialized_1843449c6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNumber);
    Il2CppMethodInitialized_1843449c6 = '\x01';
  }
  dVar1 = (__this->fields).m_Data;
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNumber);
  if (Il2CppMethodInitialized_1843449c4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    Il2CppMethodInitialized_1843449c4 = '\x01';
  }
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).m_Data = dVar1;
  return (SimpleJSONFixed_JSONNode_o *)__this_00;
}


// SimpleJSONFixed.JSONNumber$$WriteToStringBuilder
// il2cpp: void SimpleJSONFixed_JSONNumber__WriteToStringBuilder (SimpleJSONFixed_JSONNumber_o* __this, System_Text_StringBuilder_o* aSB, int32_t aIndent, int32_t aIndentInc, int32_t aMode, const MethodInfo* method);
// 0x181dc5840

void SimpleJSONFixed_JSONNumber__WriteToStringBuilder
               (SimpleJSONFixed_JSONNumber_o *__this,System_Text_StringBuilder_o *aSB,int32_t aIndent,
               int32_t aIndentInc,int32_t aMode,MethodInfo *method)

{
  System_String_o *value;
  
  value = (*(__this->klass->vtable)._9_get_Value.methodPtr)
                    (__this,(__this->klass->vtable)._9_get_Value.method);
  if (aSB != (System_Text_StringBuilder_o *)0x0) {
    System_Text_StringBuilder__Append_197dca0(aSB,value,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// SimpleJSONFixed.JSONNumber$$IsNumeric
// il2cpp: bool SimpleJSONFixed_JSONNumber__IsNumeric (Il2CppObject* value, const MethodInfo* method);
// 0x181dc56f0

bool SimpleJSONFixed_JSONNumber__IsNumeric(Il2CppObject *value,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  Il2CppObject *pIVar2;
  
  if (Il2CppMethodInitialized_1843449c7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Decimal);
    Il2CppMethodInitialized_1843449c7 = '\x01';
  }
  pIVar2 = (Il2CppObject *)0x0;
  if (value == (Il2CppObject *)0x0) {
label_181dc581f:
    return pIVar2 != (Il2CppObject *)0x0;
  }
  pIVar1 = pIVar2;
  if (value->klass == g_data_184354e08) {
    pIVar1 = value;
  }
  if (pIVar1 == (Il2CppObject *)0x0) {
    pIVar1 = pIVar2;
    if (value->klass == g_data_184354e10) {
      pIVar1 = value;
    }
    if (pIVar1 == (Il2CppObject *)0x0) {
      pIVar1 = pIVar2;
      if (value->klass == g_data_184354e38) {
        pIVar1 = value;
      }
      if (pIVar1 == (Il2CppObject *)0x0) {
        pIVar1 = pIVar2;
        if (value->klass == g_data_184354e40) {
          pIVar1 = value;
        }
        if (pIVar1 == (Il2CppObject *)0x0) {
          pIVar1 = pIVar2;
          if (value->klass == (Il2CppClass *)TypeInfo_System_Decimal) {
            pIVar1 = value;
          }
          if (pIVar1 == (Il2CppObject *)0x0) {
            pIVar1 = pIVar2;
            if (value->klass == g_data_184354e28) {
              pIVar1 = value;
            }
            if (pIVar1 == (Il2CppObject *)0x0) {
              pIVar1 = pIVar2;
              if (value->klass == g_data_184354e30) {
                pIVar1 = value;
              }
              if (pIVar1 == (Il2CppObject *)0x0) {
                pIVar1 = pIVar2;
                if (value->klass == g_data_184354df8) {
                  pIVar1 = value;
                }
                if (pIVar1 == (Il2CppObject *)0x0) {
                  pIVar1 = pIVar2;
                  if (value->klass == g_data_184354e00) {
                    pIVar1 = value;
                  }
                  if (pIVar1 == (Il2CppObject *)0x0) {
                    pIVar1 = pIVar2;
                    if (value->klass == g_data_184354df0) {
                      pIVar1 = value;
                    }
                    if (pIVar1 == (Il2CppObject *)0x0) {
                      if (value->klass == g_data_184354dd8) {
                        pIVar2 = value;
                      }
                      goto label_181dc581f;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return true;
}


// SimpleJSONFixed.JSONNumber$$Equals
// il2cpp: bool SimpleJSONFixed_JSONNumber__Equals (SimpleJSONFixed_JSONNumber_o* __this, Il2CppObject* obj, const MethodInfo* method);
// 0x181dc53a0
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181dc568c: xor al, al
// asm:   0x181dc568e: jmp 0x181dc554f

bool SimpleJSONFixed_JSONNumber__Equals
               (SimpleJSONFixed_JSONNumber_o *__this,Il2CppObject *obj,MethodInfo *method)

{
  byte bVar1;
  Il2CppClass *pIVar2;
  char cVar3;
  Il2CppObject *pIVar4;
  Il2CppObject *pIVar5;
  bool bVar6;
  bool bVar7;
  double dVar8;
  
  if (Il2CppMethodInitialized_1843449c8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Convert);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNumber);
    Il2CppMethodInitialized_1843449c8 = '\x01';
  }
  if (obj == (Il2CppObject *)0x0) {
    return false;
  }
  if (__this == (SimpleJSONFixed_JSONNumber_o *)obj) {
    return true;
  }
  bVar7 = true;
  bVar1 = (TypeInfo_SimpleJSONFixed_JSONNumber->_2).typeHierarchyDepth;
  if (((obj->klass->_2).typeHierarchyDepth < bVar1) ||
     ((obj->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
      (Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNumber)) {
    bVar6 = false;
  }
  else {
    bVar6 = true;
  }
  pIVar5 = (Il2CppObject *)0x0;
  if (bVar6) {
    pIVar5 = obj;
  }
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  if (Il2CppMethodInitialized_18434497d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    Il2CppMethodInitialized_18434497d = '\x01';
  }
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  if (Il2CppMethodInitialized_18434497c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONLazyCreator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNull);
    Il2CppMethodInitialized_18434497c = '\x01';
  }
  if (pIVar5 != (Il2CppObject *)0x0) {
    pIVar2 = pIVar5->klass;
    bVar1 = (TypeInfo_SimpleJSONFixed_JSONNull->_2).typeHierarchyDepth;
    if (((pIVar2->_2).typeHierarchyDepth < bVar1) ||
       ((pIVar2->_2).typeHierarchy[(ulonglong)bVar1 - 1] != (Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNull))
    {
      bVar1 = (TypeInfo_SimpleJSONFixed_JSONLazyCreator->_2).typeHierarchyDepth;
      if (((pIVar2->_2).typeHierarchyDepth < bVar1) ||
         ((pIVar2->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
          (Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONLazyCreator)) {
        bVar7 = false;
      }
      pIVar4 = (Il2CppObject *)0x0;
      if (bVar7) {
        pIVar4 = pIVar5;
      }
      bVar7 = pIVar4 != (Il2CppObject *)0x0;
    }
    if ((!bVar7) && (cVar3 = (*pIVar2->vtable[0].methodPtr)(pIVar5,0,pIVar2->vtable[0].method), cVar3 == '\0')
       ) {
      dVar8 = (__this->fields).m_Data;
      bVar6 = NAN(dVar8) || NAN((double)pIVar5[1].klass);
      bVar7 = dVar8 == (double)pIVar5[1].klass;
      goto label_181dc5541;
    }
  }
  if (Il2CppMethodInitialized_1843449c7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Decimal);
    Il2CppMethodInitialized_1843449c7 = '\x01';
  }
  pIVar5 = (Il2CppObject *)0x0;
  if (obj->klass == g_data_184354e08) {
    pIVar5 = obj;
  }
  if (pIVar5 == (Il2CppObject *)0x0) {
    pIVar5 = (Il2CppObject *)0x0;
    if (obj->klass == g_data_184354e10) {
      pIVar5 = obj;
    }
    if (pIVar5 == (Il2CppObject *)0x0) {
      pIVar5 = (Il2CppObject *)0x0;
      if (obj->klass == g_data_184354e38) {
        pIVar5 = obj;
      }
      if (pIVar5 == (Il2CppObject *)0x0) {
        pIVar5 = (Il2CppObject *)0x0;
        if (obj->klass == g_data_184354e40) {
          pIVar5 = obj;
        }
        if (pIVar5 == (Il2CppObject *)0x0) {
          pIVar5 = (Il2CppObject *)0x0;
          if (obj->klass == (Il2CppClass *)TypeInfo_System_Decimal) {
            pIVar5 = obj;
          }
          if (pIVar5 == (Il2CppObject *)0x0) {
            pIVar5 = (Il2CppObject *)0x0;
            if (obj->klass == g_data_184354e28) {
              pIVar5 = obj;
            }
            if (pIVar5 == (Il2CppObject *)0x0) {
              pIVar5 = (Il2CppObject *)0x0;
              if (obj->klass == g_data_184354e30) {
                pIVar5 = obj;
              }
              if (pIVar5 == (Il2CppObject *)0x0) {
                pIVar5 = (Il2CppObject *)0x0;
                if (obj->klass == g_data_184354df8) {
                  pIVar5 = obj;
                }
                if (pIVar5 == (Il2CppObject *)0x0) {
                  pIVar5 = (Il2CppObject *)0x0;
                  if (obj->klass == g_data_184354e00) {
                    pIVar5 = obj;
                  }
                  if (pIVar5 == (Il2CppObject *)0x0) {
                    pIVar5 = (Il2CppObject *)0x0;
                    if (obj->klass == g_data_184354df0) {
                      pIVar5 = obj;
                    }
                    if (pIVar5 == (Il2CppObject *)0x0) {
                      pIVar5 = (Il2CppObject *)0x0;
                      if (obj->klass == g_data_184354dd8) {
                        pIVar5 = obj;
                      }
                      if (pIVar5 == (Il2CppObject *)0x0) {
                        return false;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  if ((TypeInfo_System_Convert->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Convert);
  }
  dVar8 = System_Convert__ToDouble(obj,(MethodInfo *)0x0);
  bVar6 = NAN(dVar8) || NAN((__this->fields).m_Data);
  bVar7 = dVar8 == (__this->fields).m_Data;
label_181dc5541:
  if ((!bVar6) && (bVar7)) {
    return true;
  }
  return false;
}


// SimpleJSONFixed.JSONNumber$$GetHashCode
// il2cpp: int32_t SimpleJSONFixed_JSONNumber__GetHashCode (SimpleJSONFixed_JSONNumber_o* __this, const MethodInfo* method);
// 0x181dc56b0

int32_t SimpleJSONFixed_JSONNumber__GetHashCode(SimpleJSONFixed_JSONNumber_o *__this,MethodInfo *method)

{
  double dVar1;
  
  dVar1 = (__this->fields).m_Data;
  if (0x7fefffffffffffff < ((longlong)dVar1 - 1U & 0x7fffffffffffffff)) {
    dVar1 = (double)((ulonglong)dVar1 & 0x7ff0000000000000);
  }
  return (uint)((ulonglong)dVar1 >> 0x20) ^ SUB84(dVar1,0);
}


// SimpleJSONFixed.JSONNumber$$Clear
// il2cpp: void SimpleJSONFixed_JSONNumber__Clear (SimpleJSONFixed_JSONNumber_o* __this, const MethodInfo* method);
// 0x181dc5300

void SimpleJSONFixed_JSONNumber__Clear(SimpleJSONFixed_JSONNumber_o *__this,MethodInfo *method)

{
  (__this->fields).m_Data = 0.0;
  return;
}


