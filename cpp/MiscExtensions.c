// Type: MiscExtensions
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/MiscExtensions.cs
// Prior real C# source (older reference): Assets/Scripts/Utility/Extensions/MiscExtensions.cs
// --------------------------------

// MiscExtensions.<>c$$.cctor
// il2cpp: void MiscExtensions___c___cctor (const MethodInfo* method);
// 0x181db1490

void MiscExtensions___c___cctor(MethodInfo *method)

{
  MiscExtensions___c_o *__this;
  
  if (Il2CppMethodInitialized_1843448f4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_MiscExtensions_c);
    Il2CppMethodInitialized_1843448f4 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_MiscExtensions_c);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  TypeInfo_MiscExtensions_c->static_fields->__9 = __this;
  Il2CppCodeGenWriteBarrier(&TypeInfo_MiscExtensions_c->static_fields->__9,__this);
  return;
}


// MiscExtensions.<>c$$.ctor
// il2cpp: void MiscExtensions___c___ctor (MiscExtensions___c_o* __this, const MethodInfo* method);
// 0x18054c890

void
MiscExtensions___c___ctor(MiscExtensions___c_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// MiscExtensions.<>c$$<ReplaceNamedColorTags>b__15_0
// il2cpp: System_String_o* MiscExtensions___c___ReplaceNamedColorTags_b__15_0 (MiscExtensions___c_o* __this, System_Text_RegularExpressions_Match_o* match, const MethodInfo* method);
// 0x181db0fe0
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181db1159: mov rbx, qword ptr [rsp + 0x38]
// asm:   0x181db115e: jmp 0x181db1162

System_String_o *
MiscExtensions___c___ReplaceNamedColorTags_b__15_0
          (MiscExtensions___c_o *__this,System_Text_RegularExpressions_Match_o *match,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  bool bVar1;
  System_Text_RegularExpressions_GroupCollection_o *__this_01;
  System_Text_RegularExpressions_Capture_o *__this_02;
  System_String_o *pSVar2;
  System_String_o *local_res10 [3];
  
  if (Il2CppMethodInitialized_1843448f5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_MiscExtensions);
    il2cpp_codegen_initialize_runtime_metadata(&"<color=#");
    il2cpp_codegen_initialize_runtime_metadata(&">");
    Il2CppMethodInitialized_1843448f5 = '\x01';
  }
  if (((match == (System_Text_RegularExpressions_Match_o *)0x0) ||
      (__this_01 = (*(match->klass->vtable)._5_get_Groups.methodPtr)
                             (match,(match->klass->vtable)._5_get_Groups.method),
      __this_01 == (System_Text_RegularExpressions_GroupCollection_o *)0x0)) ||
     (__this_02 = (System_Text_RegularExpressions_Capture_o *)
                  System_Text_RegularExpressions_GroupCollection__System_Collections_IList_get_Item
                            (__this_01,1,(MethodInfo *)0x0),
     __this_02 == (System_Text_RegularExpressions_Capture_o *)0x0)) {
    ThrowNullReferenceException();
  }
  pSVar2 = System_Text_RegularExpressions_Capture__ToString(__this_02,(MethodInfo *)0x0);
  if ((TypeInfo_MiscExtensions->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_MiscExtensions);
  }
  if (Il2CppMethodInitialized_1843448e0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_string_TryGetValue);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_MiscExtensions);
    il2cpp_codegen_initialize_runtime_metadata(&"#");
    Il2CppMethodInitialized_1843448e0 = '\x01';
  }
  local_res10[0] = (System_String_o *)0x0;
  bVar1 = System_String__IsNullOrEmpty(pSVar2,(MethodInfo *)0x0);
  if (!bVar1) {
    if ((TypeInfo_MiscExtensions->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_MiscExtensions);
    }
    __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
                TypeInfo_MiscExtensions->static_fields->NamedColorHex;
    if (__this_00 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
label_181db11ae:
      ThrowNullReferenceException();
    }
    bVar1 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                      (__this_00,(Il2CppObject *)pSVar2,(Il2CppObject **)local_res10,
                       (MethodInfo_14769C0 *)
                       MethodInfo_System_Collections_Generic_Dictionary_string_string_TryGetValue);
    if (bVar1) {
      if (local_res10[0] == (System_String_o *)0x0) goto label_181db11ae;
      bVar1 = System_String__StartsWith(local_res10[0],"#",(MethodInfo *)0x0);
      pSVar2 = local_res10[0];
      if (bVar1) {
        if (local_res10[0] == (System_String_o *)0x0) goto label_181db11ae;
        pSVar2 = System_String__Substring(local_res10[0],1,(MethodInfo *)0x0);
      }
      goto label_181db1162;
    }
  }
  pSVar2 = (System_String_o *)0x0;
label_181db1162:
  bVar1 = System_String__IsNullOrEmpty(pSVar2,(MethodInfo *)0x0);
  if (!bVar1) {
    pSVar2 = System_String__Concat_1969b70
                       ("<color=#",pSVar2,">",(MethodInfo *)0x0);
    return pSVar2;
  }
  pSVar2 = System_Text_RegularExpressions_Capture__ToString
                     ((System_Text_RegularExpressions_Capture_o *)match,(MethodInfo *)0x0);
  return pSVar2;
}


// MiscExtensions$$ResolveNamedColorHex
// il2cpp: System_String_o* MiscExtensions__ResolveNamedColorHex (System_String_o* name, const MethodInfo* method);
// 0x181da6740

System_String_o * MiscExtensions__ResolveNamedColorHex(System_String_o *name,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this;
  bool bVar1;
  System_String_o *pSVar2;
  System_String_o *local_res8 [4];
  
  if (Il2CppMethodInitialized_1843448e0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_string_TryGetValue);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_MiscExtensions);
    il2cpp_codegen_initialize_runtime_metadata(&"#");
    Il2CppMethodInitialized_1843448e0 = '\x01';
  }
  local_res8[0] = (System_String_o *)0x0;
  bVar1 = System_String__IsNullOrEmpty(name,(MethodInfo *)0x0);
  if (bVar1) {
    return (System_String_o *)0x0;
  }
  if ((TypeInfo_MiscExtensions->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_MiscExtensions);
  }
  __this = (System_Collections_Generic_Dictionary_object__object__o *)
           TypeInfo_MiscExtensions->static_fields->NamedColorHex;
  if (__this != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    bVar1 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                      (__this,(Il2CppObject *)name,(Il2CppObject **)local_res8,
                       (MethodInfo_14769C0 *)
                       MethodInfo_System_Collections_Generic_Dictionary_string_string_TryGetValue);
    if (!bVar1) {
      return (System_String_o *)0x0;
    }
    if (local_res8[0] != (System_String_o *)0x0) {
      bVar1 = System_String__StartsWith(local_res8[0],"#",(MethodInfo *)0x0);
      if (!bVar1) {
        return local_res8[0];
      }
      if (local_res8[0] != (System_String_o *)0x0) {
        pSVar2 = System_String__Substring(local_res8[0],1,(MethodInfo *)0x0);
        return pSVar2;
      }
    }
  }
  ThrowNullReferenceException();
}


// MiscExtensions$$ReplaceNamedColorTags
// il2cpp: System_String_o* MiscExtensions__ReplaceNamedColorTags (System_String_o* input, const MethodInfo* method);
// 0x181da65d0

System_String_o * MiscExtensions__ReplaceNamedColorTags(System_String_o *input,MethodInfo *method)

{
  System_Text_RegularExpressions_Regex_o *__this;
  Il2CppObject *object;
  bool bVar1;
  System_Text_RegularExpressions_MatchEvaluator_o *evaluator;
  System_String_o *pSVar2;
  
  if (Il2CppMethodInitialized_1843448e1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Text_RegularExpressions_MatchEvaluator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_MiscExtensions);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_MiscExtensions_c_ReplaceNamedColorTags_b__15_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_MiscExtensions_c);
    Il2CppMethodInitialized_1843448e1 = '\x01';
  }
  bVar1 = System_String__IsNullOrEmpty(input,(MethodInfo *)0x0);
  if (bVar1) {
    return input;
  }
  if ((TypeInfo_MiscExtensions->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_MiscExtensions);
  }
  __this = TypeInfo_MiscExtensions->static_fields->NamedColorTagRegex;
  if ((TypeInfo_MiscExtensions_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_MiscExtensions_c);
  }
  evaluator = TypeInfo_MiscExtensions_c->static_fields->__9__15_0;
  if (evaluator == (System_Text_RegularExpressions_MatchEvaluator_o *)0x0) {
    if ((TypeInfo_MiscExtensions_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_MiscExtensions_c);
    }
    object = (Il2CppObject *)TypeInfo_MiscExtensions_c->static_fields->__9;
    evaluator = il2cpp_codegen_object_new
                          ((Il2CppClass *)TypeInfo_System_Text_RegularExpressions_MatchEvaluator);
    System_Text_RegularExpressions_MatchEvaluator___ctor
              ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)evaluator,object,
               (intptr_t)MethodInfo_MiscExtensions_c_ReplaceNamedColorTags_b__15_0,(MethodInfo_16E67D0 *)0x0);
    TypeInfo_MiscExtensions_c->static_fields->__9__15_0 = evaluator;
    Il2CppCodeGenWriteBarrier(&TypeInfo_MiscExtensions_c->static_fields->__9__15_0,evaluator);
  }
  if (__this != (System_Text_RegularExpressions_Regex_o *)0x0) {
    pSVar2 = System_Text_RegularExpressions_Regex__Replace_285dcc0(__this,input,evaluator,(MethodInfo *)0x0);
    return pSVar2;
  }
  ThrowNullReferenceException();
}


// MiscExtensions$$GetActive
// il2cpp: bool MiscExtensions__GetActive (UnityEngine_GameObject_o* target, const MethodInfo* method);
// 0x181da60c0

bool MiscExtensions__GetActive(UnityEngine_GameObject_o *target,MethodInfo *method)

{
  bool bVar1;
  
  if (target != (UnityEngine_GameObject_o *)0x0) {
    bVar1 = UnityEngine_GameObject__get_activeInHierarchy(target,(MethodInfo *)0x0);
    return bVar1;
  }
  ThrowNullReferenceException();
}


// MiscExtensions$$ToDisplayString
// il2cpp: System_String_o* MiscExtensions__ToDisplayString (UnityEngine_Vector3_o vector, const MethodInfo* method);
// 0x181da6c60

System_String_o * MiscExtensions__ToDisplayString(UnityEngine_Vector3_o *vector,MethodInfo *method)

{
  System_String_array *values;
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_1843448e2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    il2cpp_codegen_initialize_runtime_metadata(&"(");
    il2cpp_codegen_initialize_runtime_metadata(&")");
    il2cpp_codegen_initialize_runtime_metadata(&",");
    Il2CppMethodInitialized_1843448e2 = '\x01';
  }
  values = (System_String_array *)SZArrayNew(TypeInfo_string_array,7);
  pSVar1 = "(";
  if (values != (System_String_array *)0x0) {
    if ((int)values->max_length != 0) {
      values->m_Items[0] = "(";
      Il2CppCodeGenWriteBarrier(values->m_Items,pSVar1);
      pSVar1 = System_Single__ToString((float *)vector,(MethodInfo *)0x0);
      if (1 < (uint)values->max_length) {
        values->m_Items[1] = pSVar1;
        Il2CppCodeGenWriteBarrier(values->m_Items + 1,pSVar1);
        pSVar1 = ",";
        if (2 < (uint)values->max_length) {
          values->m_Items[2] = ",";
          Il2CppCodeGenWriteBarrier(values->m_Items + 2,pSVar1);
          pSVar1 = System_Single__ToString(&(vector->fields).y,(MethodInfo *)0x0);
          if (3 < (uint)values->max_length) {
            values->m_Items[3] = pSVar1;
            Il2CppCodeGenWriteBarrier(values->m_Items + 3,pSVar1);
            pSVar1 = ",";
            if (4 < (uint)values->max_length) {
              values->m_Items[4] = ",";
              Il2CppCodeGenWriteBarrier(values->m_Items + 4,pSVar1);
              pSVar1 = System_Single__ToString(&(vector->fields).z,(MethodInfo *)0x0);
              if (5 < (uint)values->max_length) {
                values->m_Items[5] = pSVar1;
                Il2CppCodeGenWriteBarrier(values->m_Items + 5,pSVar1);
                pSVar1 = ")";
                if (6 < (uint)values->max_length) {
                  values->m_Items[6] = ")";
                  Il2CppCodeGenWriteBarrier(values->m_Items + 6,pSVar1);
                  pSVar1 = System_String__Concat_1969830(values,(MethodInfo *)0x0);
                  return pSVar1;
                }
              }
            }
          }
        }
      }
    }
    ThrowIndexOutOfRangeException();
  }
  ThrowNullReferenceException();
}


// MiscExtensions$$UnboxToDouble
// il2cpp: double MiscExtensions__UnboxToDouble (Il2CppObject* obj, const MethodInfo* method);
// 0x181da7610

double MiscExtensions__UnboxToDouble(Il2CppObject *obj,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  double *pdVar2;
  int *piVar3;
  
  if (obj == (Il2CppObject *)0x0) {
    ThrowNullReferenceException();
  }
  pIVar1 = (Il2CppObject *)0x0;
  if (obj->klass == g_data_184354e08) {
    pIVar1 = obj;
  }
  if (pIVar1 == (Il2CppObject *)0x0) {
    if ((obj->klass->_1).element_class == *(Il2CppClass **)(g_data_184354e40 + 0x40)) {
      pdVar2 = il2cpp_object_unbox(obj);
      return *pdVar2;
    }
    il2cpp_codegen_raise_invalid_cast_exception();
  }
  if ((obj->klass->_1).element_class == (g_data_184354e08->_1).element_class) {
    piVar3 = il2cpp_object_unbox(obj);
    return (double)*piVar3;
  }
  il2cpp_codegen_raise_invalid_cast_exception();
}


// MiscExtensions$$UnboxToFloat
// il2cpp: float MiscExtensions__UnboxToFloat (Il2CppObject* obj, const MethodInfo* method);
// 0x181da7690

float MiscExtensions__UnboxToFloat(Il2CppObject *obj,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  char *pcVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  double *pdVar5;
  float *pfVar6;
  int *piVar7;
  System_Globalization_CultureInfo_o *provider;
  float fVar8;
  System_Decimal_Fields local_18;
  
  if (Il2CppMethodInitialized_1843448e3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Convert);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Globalization_CultureInfo);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Decimal);
    Il2CppMethodInitialized_1843448e3 = '\x01';
  }
  if (obj != (Il2CppObject *)0x0) {
    pIVar1 = (Il2CppObject *)0x0;
    if (obj->klass == g_data_184354e08) {
      pIVar1 = obj;
    }
    if (pIVar1 != (Il2CppObject *)0x0) {
      if ((obj->klass->_1).element_class == (g_data_184354e08->_1).element_class) {
        piVar7 = il2cpp_object_unbox(obj);
        return (float)*piVar7;
      }
      il2cpp_codegen_raise_invalid_cast_exception();
    }
    pIVar1 = (Il2CppObject *)0x0;
    if (obj->klass == g_data_184354e38) {
      pIVar1 = obj;
    }
    if (pIVar1 != (Il2CppObject *)0x0) {
      if ((obj->klass->_1).element_class == (g_data_184354e38->_1).element_class) {
        pfVar6 = il2cpp_object_unbox(obj);
        return *pfVar6;
      }
      il2cpp_codegen_raise_invalid_cast_exception();
    }
    pIVar1 = (Il2CppObject *)0x0;
    if (obj->klass == g_data_184354e40) {
      pIVar1 = obj;
    }
    if (pIVar1 != (Il2CppObject *)0x0) {
      if ((obj->klass->_1).element_class == (g_data_184354e40->_1).element_class) {
        pdVar5 = il2cpp_object_unbox(obj);
        return (float)*pdVar5;
      }
      il2cpp_codegen_raise_invalid_cast_exception();
    }
    pIVar1 = (Il2CppObject *)0x0;
    if (obj->klass == g_data_184354e28) {
      pIVar1 = obj;
    }
    if (pIVar1 != (Il2CppObject *)0x0) {
      if ((obj->klass->_1).element_class == (g_data_184354e28->_1).element_class) {
        plVar4 = il2cpp_object_unbox(obj);
        return (float)*plVar4;
      }
      il2cpp_codegen_raise_invalid_cast_exception();
    }
    pIVar1 = (Il2CppObject *)0x0;
    if (obj->klass == (Il2CppClass *)TypeInfo_System_Decimal) {
      pIVar1 = obj;
    }
    if (pIVar1 != (Il2CppObject *)0x0) {
      if ((TypeInfo_System_Decimal->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Decimal);
      }
      if ((obj->klass->_1).element_class == (TypeInfo_System_Decimal->_1).element_class) {
        puVar3 = il2cpp_object_unbox(obj);
        local_18._0_8_ = *puVar3;
        local_18._overlap_2 = *(_union_28699 *)(puVar3 + 1);
        fVar8 = System_Decimal__op_Explicit_1b9e640((System_Decimal_o *)&local_18,(MethodInfo *)0x0);
        return fVar8;
      }
      il2cpp_codegen_raise_invalid_cast_exception();
    }
    pIVar1 = (Il2CppObject *)0x0;
    if (obj->klass == g_data_184354de8) {
      pIVar1 = obj;
    }
    if (pIVar1 != (Il2CppObject *)0x0) {
      if ((obj->klass->_1).element_class != (g_data_184354de8->_1).element_class) {
        il2cpp_codegen_raise_invalid_cast_exception();
      }
      pcVar2 = il2cpp_object_unbox(obj);
      if (*pcVar2 != '\0') {
        return 1.0;
      }
      return 0.0;
    }
  }
  if ((TypeInfo_System_Globalization_CultureInfo->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Globalization_CultureInfo);
  }
  provider = System_Globalization_CultureInfo__get_InvariantCulture((MethodInfo *)0x0);
  if ((TypeInfo_System_Convert->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Convert);
  }
  fVar8 = System_Convert__ToSingle_1a84860(obj,(System_IFormatProvider_o *)provider,(MethodInfo *)0x0);
  return fVar8;
}


// MiscExtensions$$UnboxToInt
// il2cpp: int32_t MiscExtensions__UnboxToInt (Il2CppObject* obj, const MethodInfo* method);
// 0x181da78f0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181da7a45: jmp 0x181da7a9d

int32_t MiscExtensions__UnboxToInt(Il2CppObject *obj,MethodInfo *method)

{
  int32_t iVar1;
  Il2CppObject *pIVar2;
  char *pcVar3;
  undefined8 *puVar4;
  double *pdVar5;
  float *pfVar6;
  int32_t *piVar7;
  System_Globalization_CultureInfo_o *provider;
  System_Decimal_Fields local_18;
  
  if (Il2CppMethodInitialized_1843448e4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Convert);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Globalization_CultureInfo);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Decimal);
    Il2CppMethodInitialized_1843448e4 = '\x01';
  }
  if (obj == (Il2CppObject *)0x0) {
label_181da7aaa:
    if ((TypeInfo_System_Globalization_CultureInfo->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Globalization_CultureInfo);
    }
    provider = System_Globalization_CultureInfo__get_InvariantCulture((MethodInfo *)0x0);
    if ((TypeInfo_System_Convert->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Convert);
    }
    iVar1 = System_Convert__ToInt32_1a83690(obj,(System_IFormatProvider_o *)provider,(MethodInfo *)0x0);
    return iVar1;
  }
  pIVar2 = (Il2CppObject *)0x0;
  if (obj->klass == g_data_184354e08) {
    pIVar2 = obj;
  }
  if (pIVar2 == (Il2CppObject *)0x0) {
    pIVar2 = (Il2CppObject *)0x0;
    if (obj->klass == g_data_184354e38) {
      pIVar2 = obj;
    }
    if (pIVar2 != (Il2CppObject *)0x0) {
      if ((obj->klass->_1).element_class != (g_data_184354e38->_1).element_class) {
        il2cpp_codegen_raise_invalid_cast_exception();
      }
      pfVar6 = il2cpp_object_unbox(obj);
      return (int)*pfVar6;
    }
    pIVar2 = (Il2CppObject *)0x0;
    if (obj->klass == g_data_184354e40) {
      pIVar2 = obj;
    }
    if (pIVar2 != (Il2CppObject *)0x0) {
      if ((obj->klass->_1).element_class != (g_data_184354e40->_1).element_class) {
        il2cpp_codegen_raise_invalid_cast_exception();
      }
      pdVar5 = il2cpp_object_unbox(obj);
      return (int)*pdVar5;
    }
    pIVar2 = (Il2CppObject *)0x0;
    if (obj->klass == g_data_184354e28) {
      pIVar2 = obj;
    }
    if (pIVar2 == (Il2CppObject *)0x0) {
      pIVar2 = (Il2CppObject *)0x0;
      if (obj->klass == (Il2CppClass *)TypeInfo_System_Decimal) {
        pIVar2 = obj;
      }
      if (pIVar2 != (Il2CppObject *)0x0) {
        if ((TypeInfo_System_Decimal->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Decimal);
        }
        if ((obj->klass->_1).element_class != (TypeInfo_System_Decimal->_1).element_class) {
          il2cpp_codegen_raise_invalid_cast_exception();
        }
        puVar4 = il2cpp_object_unbox(obj);
        local_18._0_8_ = *puVar4;
        local_18._overlap_2 = *(_union_28699 *)(puVar4 + 1);
        iVar1 = System_Decimal__op_Explicit_1b9e5e0((System_Decimal_o *)&local_18,(MethodInfo *)0x0);
        return iVar1;
      }
      pIVar2 = (Il2CppObject *)0x0;
      if (obj->klass == g_data_184354de8) {
        pIVar2 = obj;
      }
      if (pIVar2 != (Il2CppObject *)0x0) {
        if ((obj->klass->_1).element_class != (g_data_184354de8->_1).element_class) {
          il2cpp_codegen_raise_invalid_cast_exception();
        }
        pcVar3 = il2cpp_object_unbox(obj);
        return (int32_t)(*pcVar3 != '\0');
      }
      goto label_181da7aaa;
    }
    if ((obj->klass->_1).element_class != (g_data_184354e28->_1).element_class) {
      il2cpp_codegen_raise_invalid_cast_exception();
    }
  }
  else if ((obj->klass->_1).element_class != (g_data_184354e08->_1).element_class) {
    il2cpp_codegen_raise_invalid_cast_exception();
  }
  piVar7 = il2cpp_object_unbox(obj);
  return *piVar7;
}


// MiscExtensions$$MaxComponent
// il2cpp: float MiscExtensions__MaxComponent (UnityEngine_Vector3_o v, const MethodInfo* method);
// 0x181da6500
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181da6579: nop dword ptr [rax]

float MiscExtensions__MaxComponent(UnityEngine_Vector3_o *v,MethodInfo *method)

{
  uint uVar1;
  Il2CppObject *pIVar2;
  uint uVar3;
  ulonglong uVar4;
  bool bVar5;
  float fVar6;
  
  if (Il2CppMethodInitialized_1843448e5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_float_array);
    Il2CppMethodInitialized_1843448e5 = '\x01';
  }
  pIVar2 = SZArrayNew(TypeInfo_float_array,3);
  if (pIVar2 == (Il2CppObject *)0x0) {
    ThrowNullReferenceException();
  }
  if (((*(int *)&pIVar2[1].monitor != 0) &&
      (*(float *)&pIVar2[2].klass = (v->fields).x, 1 < *(uint *)&pIVar2[1].monitor)) &&
     (*(float *)((longlong)&pIVar2[2].klass + 4) = (v->fields).y, 2 < *(uint *)&pIVar2[1].monitor)) {
    *(float *)&pIVar2[2].monitor = (v->fields).z;
    uVar1 = *(uint *)&pIVar2[1].monitor;
    if (uVar1 == 0) {
      fVar6 = 0.0;
    }
    else {
      fVar6 = *(float *)&pIVar2[2].klass;
      uVar4 = 1;
      bVar5 = 1 < uVar1;
      if (1 < (int)uVar1) {
        while (bVar5) {
          if (fVar6 < *(float *)((longlong)&pIVar2[2].klass + uVar4 * 4)) {
            fVar6 = *(float *)((longlong)&pIVar2[2].klass + uVar4 * 4);
          }
          uVar3 = (int)uVar4 + 1;
          uVar4 = (ulonglong)uVar3;
          bVar5 = uVar3 < uVar1;
          if ((int)uVar1 <= (int)uVar3) {
            return fVar6;
          }
        }
        goto label_181da65b9;
      }
    }
    return fVar6;
  }
label_181da65b9:
  ThrowIndexOutOfRangeException();
}


// MiscExtensions$$UpperFirstLetter
// il2cpp: System_String_o* MiscExtensions__UpperFirstLetter (System_String_o* text, const MethodInfo* method);
// 0x181da7b20

System_String_o * MiscExtensions__UpperFirstLetter(System_String_o *text,MethodInfo *method)

{
  bool bVar1;
  uint16_t c;
  System_String_o *pSVar2;
  System_String_o *str1;
  MethodInfo *method_00;
  uint16_t local_res8 [4];
  
  local_res8[0] = 0;
  bVar1 = System_String__op_Equality
                    (text,(System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8),(MethodInfo *)0x0);
  if (bVar1) {
    return text;
  }
  if (text != (System_String_o *)0x0) {
    if ((text->fields)._stringLength < 2) {
      pSVar2 = System_String__ToUpper(text,(MethodInfo *)0x0);
      return pSVar2;
    }
    method_00 = (MethodInfo *)0x0;
    c = System_String__get_Chars(text,0,(MethodInfo *)0x0);
    if ((g_data_184354e48->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init(g_data_184354e48);
    }
    local_res8[0] = System_Char__ToUpper_1a7e040(c,(MethodInfo *)0x0);
    pSVar2 = System_Char__ToString(local_res8,(System_IFormatProvider_o *)0x0,method_00);
    str1 = System_String__Substring(text,1,(MethodInfo *)0x0);
    pSVar2 = System_String__Concat_1969e50(pSVar2,str1,(MethodInfo *)0x0);
    return pSVar2;
  }
  ThrowNullReferenceException();
}


// MiscExtensions$$StripHex
// il2cpp: System_String_o* MiscExtensions__StripHex (System_String_o* text, const MethodInfo* method);
// 0x181da6950

System_String_o * MiscExtensions__StripHex(System_String_o *text,MethodInfo *method)

{
  System_Text_RegularExpressions_Regex_o *__this;
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_1843448e6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_MiscExtensions);
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_1843448e6 = '\x01';
  }
  if ((TypeInfo_MiscExtensions->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_MiscExtensions);
  }
  __this = TypeInfo_MiscExtensions->static_fields->HexRegex;
  if (__this != (System_Text_RegularExpressions_Regex_o *)0x0) {
    pSVar1 = System_Text_RegularExpressions_Regex__Replace_285e6c0
                       (__this,text,"",(MethodInfo *)0x0);
    return pSVar1;
  }
  ThrowNullReferenceException();
}


// MiscExtensions$$Tokenize
// il2cpp: System_Collections_Generic_List_string__o* MiscExtensions__Tokenize (System_String_o* input, const MethodInfo* method);
// 0x181da6dd0
// eh: try 0x181da6f00..0x181da7185 -> pad 0x183324010 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 22 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181da6f7e: nop 
// asm:   0x181da6f89: nop dword ptr [rax]
// asm:   0x181da7059: lea rcx, [rsp + 0x48]
// asm:   0x181da705e: call 0x1806aa210  ; il2cpp_runtime_helper_1806aa210()
// asm:   0x181da7063: mov rcx, qword ptr [rsp + 0x40]
// asm:   0x181da7068: test rcx, rcx
// asm:   0x181da706b: jne 0x181da7185
// asm:   0x181da7071: mov r14, qword ptr [rsp + 0x90]
// asm:   0x181da7079: mov rdi, qword ptr [rsp + 0x30]
// asm:   0x181da707e: mov ebx, dword ptr [rsp + 0xa8]
// asm:   0x181da7185: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183324010: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183324015: push rbp
// asm:   0x183324016: sub rsp, 0x20
// asm:   0x18332401a: mov rbp, rdx
// asm:   0x18332401d: mov rax, qword ptr [rbp + 0x38]
// asm:   0x183324021: mov rcx, qword ptr [rax]
// asm:   0x183324024: mov qword ptr [rbp + 0x40], rcx
// asm:   0x183324028: movabs rax, 0
// asm:   0x183324032: add rsp, 0x20
// asm:   0x183324036: pop rbp
// asm:   0x183324037: ret 

System_Collections_Generic_List_string__o *
MiscExtensions__Tokenize(System_String_o *input,MethodInfo *method)

{
  int32_t *piVar1;
  byte bVar2;
  uint uVar3;
  System_Text_RegularExpressions_Regex_o *__this;
  System_String_array *pSVar4;
  System_Collections_Generic_List_string__o *__this_00;
  System_Text_RegularExpressions_MatchCollection_o *__this_01;
  void *pvVar5;
  System_Text_RegularExpressions_Capture_o *__this_02;
  System_String_o *pSVar6;
  int index;
  MethodInfo *pMVar7;
  uint16_t local_res18 [4];
  int local_res20;
  Il2CppObject *local_68;
  Il2CppObject *local_60;
  System_Collections_Generic_List_string__o *local_58;
  undefined8 local_48;
  Il2CppObject **local_40;
  Il2CppObject **local_38;
  
  if (Il2CppMethodInitialized_1843448e7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IDisposable);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_IEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Text_RegularExpressions_Match);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_MiscExtensions);
    Il2CppMethodInitialized_1843448e7 = '\x01';
  }
  local_68 = (Il2CppObject *)0x0;
  local_res18[0] = 0;
  local_60 = (Il2CppObject *)0x0;
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)__this_00,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_string_ctor);
  if ((TypeInfo_MiscExtensions->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_MiscExtensions);
  }
  __this = TypeInfo_MiscExtensions->static_fields->TagRegex;
  if (__this != (System_Text_RegularExpressions_Regex_o *)0x0) {
    __this_01 = System_Text_RegularExpressions_Regex__Matches_285d470(__this,input,(MethodInfo *)0x0);
    if (__this_01 != (System_Text_RegularExpressions_MatchCollection_o *)0x0) {
      index = 0;
      local_res20 = 0;
      local_58 = __this_00;
      local_68 = (Il2CppObject *)
                 System_Text_RegularExpressions_MatchCollection__GetEnumerator(__this_01,(MethodInfo *)0x0);
      local_48 = 0;
      local_40 = &local_68;
      local_38 = &local_60;
      while( true ) {
        if (local_68 == (Il2CppObject *)0x0) {
          ThrowNullReferenceException();
        }
        pvVar5 = InterfaceInvoker0_Invoke(0,(Il2CppClass *)TypeInfo_System_Collections_IEnumerator,local_68);
        if ((char)pvVar5 == '\0') break;
        if (local_68 == (Il2CppObject *)0x0) {
          ThrowNullReferenceException();
        }
        __this_02 = InterfaceInvoker0_Invoke
                              (1,(Il2CppClass *)TypeInfo_System_Collections_IEnumerator,local_68);
        if (__this_02 != (System_Text_RegularExpressions_Capture_o *)0x0) {
          bVar2 = (TypeInfo_System_Text_RegularExpressions_Match->_2).typeHierarchyDepth;
          if (((__this_02->klass->_2).typeHierarchyDepth < bVar2) ||
             ((__this_02->klass->_2).typeHierarchy[(ulonglong)bVar2 - 1] !=
              (Il2CppClass *)TypeInfo_System_Text_RegularExpressions_Match)) {
            il2cpp_codegen_raise_invalid_cast_exception(__this_02);
          }
        }
        if (__this_02 == (System_Text_RegularExpressions_Capture_o *)0x0) {
          ThrowNullReferenceException();
        }
        for (; index < (__this_02->fields)._Index_k__BackingField; index = index + 1) {
          if (input == (System_String_o *)0x0) {
            ThrowNullReferenceException();
          }
          pMVar7 = (MethodInfo *)0x0;
          local_res18[0] = System_String__get_Chars(input,index,(MethodInfo *)0x0);
          if ((g_data_184354e48->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init(g_data_184354e48);
          }
          System_Char__ToString(local_res18,(System_IFormatProvider_o *)0x0,pMVar7);
          if (__this_00 == (System_Collections_Generic_List_string__o *)0x0) {
            ThrowNullReferenceException();
          }
          il2cpp_runtime_helper_180012890(__this_00);
        }
        pSVar6 = System_Text_RegularExpressions_Capture__ToString(__this_02,(MethodInfo *)0x0);
        if (__this_00 == (System_Collections_Generic_List_string__o *)0x0) {
          ThrowNullReferenceException();
        }
        il2cpp_runtime_helper_180012890(__this_00,pSVar6,MethodInfo_System_Collections_Generic_List_string_Add);
        index = (__this_02->fields)._Length_k__BackingField + (__this_02->fields)._Index_k__BackingField;
        local_res20 = index;
      }
      local_60 = il2cpp_vm_Object_IsInst(local_68,(Il2CppClass *)TypeInfo_System_IDisposable);
      if (local_60 != (Il2CppObject *)0x0) {
        InterfaceInvoker0_Invoke(0,(Il2CppClass *)TypeInfo_System_IDisposable,local_60);
      }
      if (input != (System_String_o *)0x0) {
        while( true ) {
          if ((input->fields)._stringLength <= index) {
            return __this_00;
          }
          pMVar7 = (MethodInfo *)0x0;
          local_res18[0] = System_String__get_Chars(input,index,(MethodInfo *)0x0);
          if ((g_data_184354e48->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init(g_data_184354e48);
          }
          pSVar6 = System_Char__ToString(local_res18,(System_IFormatProvider_o *)0x0,pMVar7);
          pMVar7 = MethodInfo_System_Collections_Generic_List_string_Add;
          if (__this_00 == (System_Collections_Generic_List_string__o *)0x0) break;
          piVar1 = &(__this_00->fields)._version;
          *piVar1 = *piVar1 + 1;
          pSVar4 = (__this_00->fields)._items;
          if (pSVar4 == (System_String_array *)0x0) break;
          uVar3 = (__this_00->fields)._size;
          if (uVar3 < (uint)pSVar4->max_length) {
            (__this_00->fields)._size = uVar3 + 1;
            if ((uint)pSVar4->max_length <= uVar3) {
              ThrowIndexOutOfRangeException();
            }
            pSVar4->m_Items[(int)uVar3] = pSVar6;
            Il2CppCodeGenWriteBarrier(pSVar4->m_Items + (int)uVar3,pSVar6);
            index = index + 1;
          }
          else {
            System_Collections_Generic_List_object___AddWithResize
                      ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)pSVar6,
                       (MethodInfo_93DD50 *)pMVar7->klass->rgctx_data[0xe].method);
            index = index + 1;
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// MiscExtensions$$StripRichText
// il2cpp: System_String_o* MiscExtensions__StripRichText (System_String_o* text, const MethodInfo* method);
// 0x181da6a50

System_String_o * MiscExtensions__StripRichText(System_String_o *text,MethodInfo *method)

{
  System_Text_RegularExpressions_Regex_o *__this;
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_1843448e8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_MiscExtensions);
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_1843448e8 = '\x01';
  }
  if ((TypeInfo_MiscExtensions->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_MiscExtensions);
  }
  __this = TypeInfo_MiscExtensions->static_fields->TagRegex;
  if (__this != (System_Text_RegularExpressions_Regex_o *)0x0) {
    pSVar1 = System_Text_RegularExpressions_Regex__Replace_285e6c0
                       (__this,text,"",(MethodInfo *)0x0);
    return pSVar1;
  }
  ThrowNullReferenceException();
}


// MiscExtensions$$StripIllegalRichText
// il2cpp: System_String_o* MiscExtensions__StripIllegalRichText (System_String_o* text, const MethodInfo* method);
// 0x181da69d0

System_String_o * MiscExtensions__StripIllegalRichText(System_String_o *text,MethodInfo *method)

{
  System_Text_RegularExpressions_Regex_o *__this;
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_1843448e9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_MiscExtensions);
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_1843448e9 = '\x01';
  }
  if ((TypeInfo_MiscExtensions->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_MiscExtensions);
  }
  __this = TypeInfo_MiscExtensions->static_fields->IllegalStyleRegex;
  if (__this != (System_Text_RegularExpressions_Regex_o *)0x0) {
    pSVar1 = System_Text_RegularExpressions_Regex__Replace_285e6c0
                       (__this,text,"",(MethodInfo *)0x0);
    return pSVar1;
  }
  ThrowNullReferenceException();
}


// MiscExtensions$$ForceWhiteColorTag
// il2cpp: System_String_o* MiscExtensions__ForceWhiteColorTag (System_String_o* text, const MethodInfo* method);
// 0x181da6040

System_String_o * MiscExtensions__ForceWhiteColorTag(System_String_o *text,MethodInfo *method)

{
  System_Text_RegularExpressions_Regex_o *__this;
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_1843448ea == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_MiscExtensions);
    il2cpp_codegen_initialize_runtime_metadata(&"<color=#FFFFFF>");
    Il2CppMethodInitialized_1843448ea = '\x01';
  }
  if ((TypeInfo_MiscExtensions->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_MiscExtensions);
  }
  __this = TypeInfo_MiscExtensions->static_fields->ColorTagRegex;
  if (__this != (System_Text_RegularExpressions_Regex_o *)0x0) {
    pSVar1 = System_Text_RegularExpressions_Regex__Replace_285e6c0
                       (__this,text,"<color=#FFFFFF>",(MethodInfo *)0x0);
    return pSVar1;
  }
  ThrowNullReferenceException();
}


// MiscExtensions$$StripColor
// il2cpp: System_String_o* MiscExtensions__StripColor (System_String_o* text, const MethodInfo* method);
// 0x181da68a0

System_String_o * MiscExtensions__StripColor(System_String_o *text,MethodInfo *method)

{
  System_Text_RegularExpressions_Regex_o *pSVar1;
  System_String_o *pSVar2;
  
  if (Il2CppMethodInitialized_1843448eb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_MiscExtensions);
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_1843448eb = '\x01';
  }
  if ((TypeInfo_MiscExtensions->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_MiscExtensions);
  }
  pSVar1 = TypeInfo_MiscExtensions->static_fields->ColorTagRegex;
  if (pSVar1 != (System_Text_RegularExpressions_Regex_o *)0x0) {
    pSVar2 = System_Text_RegularExpressions_Regex__Replace_285e6c0
                       (pSVar1,text,"",(MethodInfo *)0x0);
    pSVar1 = TypeInfo_MiscExtensions->static_fields->ColorEndRegex;
    if (pSVar1 != (System_Text_RegularExpressions_Regex_o *)0x0) {
      pSVar2 = System_Text_RegularExpressions_Regex__Replace_285e6c0
                         (pSVar1,pSVar2,"",(MethodInfo *)0x0);
      return pSVar2;
    }
  }
  ThrowNullReferenceException();
}


// MiscExtensions$$ForceColor
// il2cpp: System_String_o* MiscExtensions__ForceColor (System_String_o* text, UnityEngine_Color_o color, const MethodInfo* method);
// 0x181da5ea0

System_String_o *
MiscExtensions__ForceColor(System_String_o *text,UnityEngine_Color_o *color,MethodInfo *method)

{
  System_String_o *pSVar1;
  System_String_o *pSVar2;
  System_String_o *value;
  System_String_array *values;
  UnityEngine_Color_Fields local_18;
  
  if (Il2CppMethodInitialized_1843448ec == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_MiscExtensions);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    il2cpp_codegen_initialize_runtime_metadata(&"<color=#");
    il2cpp_codegen_initialize_runtime_metadata(&"</color>");
    il2cpp_codegen_initialize_runtime_metadata(&">");
    Il2CppMethodInitialized_1843448ec = '\x01';
  }
  if ((TypeInfo_MiscExtensions->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_MiscExtensions);
  }
  pSVar1 = MiscExtensions__StripColor(text,(MethodInfo *)0x0);
  local_18.r = (color->fields).r;
  local_18.g = (color->fields).g;
  local_18.b = (color->fields).b;
  local_18.a = (color->fields).a;
  pSVar2 = Unity_VisualScripting_XColor__ToHexString((UnityEngine_Color_o *)&local_18,(MethodInfo *)0x0);
  if (pSVar2 != (System_String_o *)0x0) {
    if ((pSVar2->fields)._stringLength < 3) {
      return pSVar1;
    }
    value = System_String__Substring_1972740(pSVar2,0,(pSVar2->fields)._stringLength + -2,(MethodInfo *)0x0);
    values = (System_String_array *)SZArrayNew(TypeInfo_string_array,5);
    pSVar2 = "<color=#";
    if (values != (System_String_array *)0x0) {
      if ((int)values->max_length != 0) {
        values->m_Items[0] = "<color=#";
        Il2CppCodeGenWriteBarrier(values->m_Items,pSVar2);
        if (1 < (uint)values->max_length) {
          values->m_Items[1] = value;
          Il2CppCodeGenWriteBarrier(values->m_Items + 1,value);
          pSVar2 = ">";
          if (2 < (uint)values->max_length) {
            values->m_Items[2] = ">";
            Il2CppCodeGenWriteBarrier(values->m_Items + 2,pSVar2);
            if (3 < (uint)values->max_length) {
              values->m_Items[3] = pSVar1;
              Il2CppCodeGenWriteBarrier(values->m_Items + 3,pSVar1);
              pSVar1 = "</color>";
              if (4 < (uint)values->max_length) {
                values->m_Items[4] = "</color>";
                Il2CppCodeGenWriteBarrier(values->m_Items + 4,pSVar1);
                pSVar1 = System_String__Concat_1969830(values,(MethodInfo *)0x0);
                return pSVar1;
              }
            }
          }
        }
      }
      ThrowIndexOutOfRangeException();
    }
  }
  ThrowNullReferenceException();
}


// MiscExtensions$$ForceColor
// il2cpp: System_String_o* MiscExtensions__ForceColor (System_String_o* text, System_String_o* colorHex, const MethodInfo* method);
// 0x181da5d50

System_String_o *
MiscExtensions__ForceColor_1da5d50(System_String_o *text,System_String_o *colorHex,MethodInfo *method)

{
  System_String_o *value;
  System_String_array *values;
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_1843448ed == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_MiscExtensions);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    il2cpp_codegen_initialize_runtime_metadata(&"<color=#");
    il2cpp_codegen_initialize_runtime_metadata(&"</color>");
    il2cpp_codegen_initialize_runtime_metadata(&">");
    Il2CppMethodInitialized_1843448ed = '\x01';
  }
  if ((TypeInfo_MiscExtensions->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_MiscExtensions);
  }
  value = MiscExtensions__StripColor(text,(MethodInfo *)0x0);
  values = (System_String_array *)SZArrayNew(TypeInfo_string_array,5);
  pSVar1 = "<color=#";
  if (values != (System_String_array *)0x0) {
    if ((int)values->max_length != 0) {
      values->m_Items[0] = "<color=#";
      Il2CppCodeGenWriteBarrier(values->m_Items,pSVar1);
      if (1 < (uint)values->max_length) {
        values->m_Items[1] = colorHex;
        Il2CppCodeGenWriteBarrier(values->m_Items + 1,colorHex);
        pSVar1 = ">";
        if (2 < (uint)values->max_length) {
          values->m_Items[2] = ">";
          Il2CppCodeGenWriteBarrier(values->m_Items + 2,pSVar1);
          if (3 < (uint)values->max_length) {
            values->m_Items[3] = value;
            Il2CppCodeGenWriteBarrier(values->m_Items + 3,value);
            pSVar1 = "</color>";
            if (4 < (uint)values->max_length) {
              values->m_Items[4] = "</color>";
              Il2CppCodeGenWriteBarrier(values->m_Items + 4,pSVar1);
              pSVar1 = System_String__Concat_1969830(values,(MethodInfo *)0x0);
              return pSVar1;
            }
          }
        }
      }
    }
    ThrowIndexOutOfRangeException();
  }
  ThrowNullReferenceException();
}


// MiscExtensions$$TruncateRichText
// il2cpp: System_String_o* MiscExtensions__TruncateRichText (System_String_o* text, int32_t length, const MethodInfo* method);
// 0x181da71a0
// eh: try 0x181da739a..0x181da7528 -> pad 0x183315a20 catch Il2CppExceptionWrapper
// eh: try 0x181da7551..0x181da755f -> pad 0x180230320 cleanup
// eh: try 0x181da75d9..0x181da75f9 -> pad 0x183315a20 catch Il2CppExceptionWrapper
// asm: 26 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181da73a0: mov r15d, dword ptr [rsp + 0xb8]
// asm:   0x181da7551: jmp 0x181da75c0
// asm:   0x181da7553: mov rdx, qword ptr [rip + 0x22f03be]  ; MethodInfo_System_Collections_Generic_List_Enumerator_string_Dispose
// asm:   0x181da755a: mov rcx, qword ptr [rsp + 0x40]
// asm:   0x181da755f: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x181da7564: mov rcx, qword ptr [rsp + 0x38]
// asm:   0x181da7569: test rcx, rcx
// asm:   0x181da756c: jne 0x181da75ff
// asm:   0x181da7572: mov rdi, qword ptr [rsp + 0xb0]
// asm:   0x181da757a: test rdi, rdi
// asm:   0x181da757d: je 0x181da75f9
// asm:   0x181da7583: mov r14, qword ptr [rsp + 0xc8]
// asm:   0x181da758b: xor r13d, r13d
// asm:   0x181da758e: nop 
// asm:   0x181da75ff: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183315a20: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183315a25: push rbp
// asm:   0x183315a26: sub rsp, 0x30
// asm:   0x183315a2a: mov rbp, rdx
// asm:   0x183315a2d: mov rax, qword ptr [rbp + 0x30]
// asm:   0x183315a31: mov rcx, qword ptr [rax]
// asm:   0x183315a34: mov qword ptr [rbp + 0x38], rcx
// asm:   0x183315a38: movabs rax, 0
// asm:   0x183315a42: add rsp, 0x30
// asm:   0x183315a46: pop rbp
// asm:   0x183315a47: ret 

System_String_o * MiscExtensions__TruncateRichText(System_String_o *text,int32_t length,MethodInfo *method)

{
  System_Text_RegularExpressions_Regex_o *__this;
  bool bVar1;
  int32_t iVar2;
  System_String_o *pSVar3;
  System_Collections_Generic_List_string__o *__this_00;
  System_Collections_Generic_Stack_EntryPreProcessor_AllocSize__o *__this_01;
  System_Char_array *anyOf;
  System_String_o *pSVar4;
  UnityEngine_UIElements_UIR_EntryPreProcessor_AllocSize_o a;
  System_String_o *pSVar5;
  int iVar6;
  undefined1 local_70 [16];
  System_String_o *local_60;
  undefined1 local_58 [8];
  UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *pUStack_50;
  System_String_o *local_48;
  
  if (Il2CppMethodInitialized_1843448ee == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_char_array);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_string_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_string_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_string_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_string_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_MiscExtensions);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_Stack_string_Peek);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_Stack_string_Pop);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_Stack_string_Push);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_Stack_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_Stack_string_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_Stack_string);
    il2cpp_codegen_initialize_runtime_metadata(&"<");
    il2cpp_codegen_initialize_runtime_metadata(&"</");
    il2cpp_codegen_initialize_runtime_metadata(&">");
    Il2CppMethodInitialized_1843448ee = '\x01';
  }
  local_58 = (undefined1  [8])0x0;
  pUStack_50 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)0x0;
  local_48 = (System_String_o *)0x0;
  if ((TypeInfo_MiscExtensions->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_MiscExtensions);
  }
  if (Il2CppMethodInitialized_1843448e9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_MiscExtensions);
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_1843448e9 = '\x01';
  }
  if ((TypeInfo_MiscExtensions->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_MiscExtensions);
  }
  __this = TypeInfo_MiscExtensions->static_fields->IllegalStyleRegex;
  if (__this != (System_Text_RegularExpressions_Regex_o *)0x0) {
    pSVar3 = System_Text_RegularExpressions_Regex__Replace_285e6c0
                       (__this,text,"",(MethodInfo *)0x0);
    __this_00 = MiscExtensions__Tokenize(pSVar3,(MethodInfo *)0x0);
    __this_01 = (System_Collections_Generic_Stack_EntryPreProcessor_AllocSize__o *)
                il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_Stack_string);
    System_Collections_Generic_Stack_object____ctor
              ((System_Runtime_CompilerServices_ReadOnlyCollectionBuilder_T__o *)__this_01,
               (MethodInfo_B96030 *)MethodInfo_System_Collections_Generic_Stack_string_ctor);
    if (__this_00 != (System_Collections_Generic_List_string__o *)0x0) {
      iVar6 = 0;
      pSVar3 = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
      System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)local_70,
                 (System_Collections_Generic_List_T__o *)__this_00,
                 (MethodInfo_91F180 *)MethodInfo_System_Collections_Generic_List_string_GetEnumerator);
      local_58 = (undefined1  [8])local_70._0_8_;
      pUStack_50 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_70._8_8_;
      local_48 = local_60;
      local_70._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
      local_70._8_8_ = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_58;
      while (bVar1 = System_Collections_Generic_List_Enumerator_object___MoveNext
                               ((System_Collections_Generic_List_Enumerator_object__o *)local_58,
                                (MethodInfo_153A2A0 *)
                                MethodInfo_System_Collections_Generic_List_Enumerator_string_MoveNext),
            pSVar5 = local_48, bVar1) {
        if (local_48 == (System_String_o *)0x0) {
          ThrowNullReferenceException();
        }
        if ((local_48->fields)._stringLength == 1) {
          iVar6 = iVar6 + 1;
          if (length < iVar6) {
            System_Collections_Generic_List_Enumerator_object___Dispose
                      ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_58,
                       MethodInfo_System_Collections_Generic_List_Enumerator_string_Dispose);
            goto label_181da7548;
          }
label_181da7512:
          pSVar3 = System_String__Concat_1969e50(pSVar3,pSVar5,(MethodInfo *)0x0);
        }
        else {
          bVar1 = System_String__StartsWith(local_48,"</",(MethodInfo *)0x0);
          if (bVar1) {
            pSVar4 = System_String__Substring_1972740
                               (pSVar5,2,(pSVar5->fields)._stringLength + -3,(MethodInfo *)0x0);
            if (__this_01 == (System_Collections_Generic_Stack_EntryPreProcessor_AllocSize__o *)0x0) {
              ThrowNullReferenceException();
            }
            if (0 < (__this_01->fields)._size) {
              a = System_Collections_Generic_Stack_object___Peek
                            (__this_01,
                             (MethodInfo_CFBFE0 *)MethodInfo_System_Collections_Generic_Stack_string_Peek);
              bVar1 = System_String__op_Equality((System_String_o *)a.fields,pSVar4,(MethodInfo *)0x0);
              if (bVar1) {
                System_Collections_Generic_Stack_object___Pop
                          ((System_Collections_Generic_Stack_object__o *)__this_01,
                           (MethodInfo_CFC370 *)MethodInfo_System_Collections_Generic_Stack_string_Pop);
                pSVar3 = System_String__Concat_1969e50(pSVar3,pSVar5,(MethodInfo *)0x0);
              }
            }
          }
          else {
            bVar1 = System_String__StartsWith(pSVar5,"<",(MethodInfo *)0x0);
            if (bVar1) {
              anyOf = (System_Char_array *)SZArrayNew(TypeInfo_char_array,2);
              if (anyOf == (System_Char_array *)0x0) {
                ThrowNullReferenceException();
              }
              if ((int)anyOf->max_length == 0) {
                ThrowIndexOutOfRangeException();
              }
              anyOf->m_Items[0] = 0x3d;
              if ((uint)anyOf->max_length < 2) {
                ThrowIndexOutOfRangeException();
              }
              anyOf->m_Items[1] = 0x3e;
              iVar2 = System_String__IndexOfAny(pSVar5,anyOf,(MethodInfo *)0x0);
              pSVar4 = System_String__Substring_1972740(pSVar5,1,iVar2 + -1,(MethodInfo *)0x0);
              if (__this_01 == (System_Collections_Generic_Stack_EntryPreProcessor_AllocSize__o *)0x0) {
                ThrowNullReferenceException();
              }
              System_Collections_Generic_Stack_object___Push
                        ((System_Collections_Generic_Stack_object__o *)__this_01,(Il2CppObject *)pSVar4,
                         (MethodInfo_CFD670 *)MethodInfo_System_Collections_Generic_Stack_string_Push);
              goto label_181da7512;
            }
          }
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose
                ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_58,
                 MethodInfo_System_Collections_Generic_List_Enumerator_string_Dispose);
label_181da7548:
      if (__this_01 != (System_Collections_Generic_Stack_EntryPreProcessor_AllocSize__o *)0x0) {
        while (0 < (__this_01->fields)._size) {
          pSVar5 = System_Collections_Generic_Stack_object___Pop
                             ((System_Collections_Generic_Stack_object__o *)__this_01,
                              (MethodInfo_CFC370 *)MethodInfo_System_Collections_Generic_Stack_string_Pop);
          pSVar3 = System_String__Concat_1969590
                             (pSVar3,"</",pSVar5,">",(MethodInfo *)0x0);
        }
        return pSVar3;
      }
    }
  }
  ThrowNullReferenceException();
}


// MiscExtensions$$HexColor
// il2cpp: System_String_o* MiscExtensions__HexColor (System_String_o* text, const MethodInfo* method);
// 0x181da6210
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181da6349: nop dword ptr [rax]
// asm:   0x181da6446: jmp 0x181da6350
// asm:   0x181da6450: mov rax, rbx

System_String_o * MiscExtensions__HexColor(System_String_o *text,MethodInfo *method)

{
  System_Text_RegularExpressions_Regex_o *__this;
  bool bVar1;
  bool bVar2;
  int32_t iVar3;
  System_String_o *pSVar4;
  System_String_o *pSVar5;
  
  if (Il2CppMethodInitialized_1843448ef == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_MiscExtensions);
    il2cpp_codegen_initialize_runtime_metadata(&"<color=#");
    il2cpp_codegen_initialize_runtime_metadata(&"</color>");
    il2cpp_codegen_initialize_runtime_metadata(&"[");
    il2cpp_codegen_initialize_runtime_metadata(&"]");
    il2cpp_codegen_initialize_runtime_metadata(&">");
    Il2CppMethodInitialized_1843448ef = '\x01';
  }
  if ((TypeInfo_MiscExtensions->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_MiscExtensions);
  }
  if (Il2CppMethodInitialized_1843448e8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_MiscExtensions);
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_1843448e8 = '\x01';
  }
  if ((TypeInfo_MiscExtensions->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_MiscExtensions);
  }
  __this = TypeInfo_MiscExtensions->static_fields->TagRegex;
  if ((__this != (System_Text_RegularExpressions_Regex_o *)0x0) &&
     (pSVar4 = System_Text_RegularExpressions_Regex__Replace_285e6c0
                         (__this,text,"",(MethodInfo *)0x0),
     pSVar4 != (System_String_o *)0x0)) {
    bVar1 = System_String__Contains(pSVar4,"]",(MethodInfo *)0x0);
    if (bVar1) {
      pSVar4 = System_String__Replace_1970e80
                         (pSVar4,"]",">",(MethodInfo *)0x0);
    }
    bVar1 = false;
    if (pSVar4 != (System_String_o *)0x0) {
label_181da6350:
      do {
        bVar2 = System_String__Contains(pSVar4,"[",(MethodInfo *)0x0);
        if (!bVar2) {
          if (!bVar1) {
            return pSVar4;
          }
label_181da6468:
          return (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
        }
        if (bVar1) goto label_181da6468;
        if (pSVar4 == (System_String_o *)0x0) break;
        iVar3 = System_String__IndexOf_196e2a0(pSVar4,"[",(MethodInfo *)0x0);
        if ((pSVar4->fields)._stringLength < iVar3 + 7) {
          bVar1 = true;
          goto label_181da6350;
        }
        pSVar5 = System_String__Substring_1972740(pSVar4,iVar3 + 1,6,(MethodInfo *)0x0);
        pSVar4 = System_String__Remove(pSVar4,iVar3,7,(MethodInfo *)0x0);
        pSVar5 = System_String__Concat_1969e50("<color=#",pSVar5,(MethodInfo *)0x0);
        if ((pSVar4 == (System_String_o *)0x0) ||
           (pSVar4 = System_String__Insert(pSVar4,iVar3,pSVar5,(MethodInfo *)0x0),
           pSVar4 == (System_String_o *)0x0)) break;
        iVar3 = (pSVar4->fields)._stringLength;
        bVar2 = System_String__Contains(pSVar4,"[",(MethodInfo *)0x0);
        if (bVar2) {
          iVar3 = System_String__IndexOf_196e2a0(pSVar4,"[",(MethodInfo *)0x0);
        }
        pSVar4 = System_String__Insert(pSVar4,iVar3,"</color>",(MethodInfo *)0x0);
        if (pSVar4 == (System_String_o *)0x0) break;
      } while( true );
    }
  }
  ThrowNullReferenceException();
}


// MiscExtensions$$ToEnum<Int32Enum>
// il2cpp: int32_t MiscExtensions__ToEnum_Int32Enum_ (System_String_o* value, bool ignoreCase, const MethodInfo_732FD0* method);
// 0x180732fd0

int32_t MiscExtensions__ToEnum_Int32Enum_(System_String_o *value,bool ignoreCase,MethodInfo_732FD0 *method)

{
  System_RuntimeTypeHandle_o SVar1;
  bool bVar2;
  System_Type_o *pSVar3;
  Il2CppObject *obj;
  Il2CppClass *klass;
  int32_t *piVar4;
  
  if (method->rgctx_data == (MethodInfo_732FD0_RGCTXs *)0x0) {
    il2cpp_codegen_rgctx_method_init((MethodInfo *)method);
  }
  SVar1.fields.value = (System_RuntimeTypeHandle_Fields)method->rgctx_data->_0_T;
  if ((g_data_184354ea0->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_184354ea0);
  }
  pSVar3 = System_Type__GetTypeFromHandle(SVar1,(MethodInfo *)0x0);
  if ((g_data_184354e58->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_184354e58);
  }
  bVar2 = System_Enum__IsDefined(pSVar3,(Il2CppObject *)value,(MethodInfo *)0x0);
  if (!bVar2) {
    return 0;
  }
  SVar1.fields.value = (System_RuntimeTypeHandle_Fields)method->rgctx_data->_0_T;
  if ((g_data_184354ea0->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_184354ea0);
  }
  pSVar3 = System_Type__GetTypeFromHandle(SVar1,(MethodInfo *)0x0);
  if ((g_data_184354e58->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_184354e58);
  }
  obj = System_Enum__Parse_1b66980(pSVar3,value,ignoreCase,(MethodInfo *)0x0);
  klass = method->rgctx_data->_1_T;
  if (((klass->_2).bitflags1 & 1) == 0) {
    klass = il2cpp_codegen_class_init_checked(klass);
  }
  if (obj != (Il2CppObject *)0x0) {
    if ((obj->klass->_1).element_class == (klass->_1).element_class) {
      piVar4 = il2cpp_object_unbox(obj);
      return *piVar4;
    }
    il2cpp_codegen_raise_invalid_cast_exception(obj,klass);
  }
  ThrowNullReferenceException();
}


// MiscExtensions$$ToEnum<__Il2CppFullySharedGenericType>
// il2cpp: Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o MiscExtensions__ToEnum___Il2CppFullySharedGenericType_ (System_String_o* value, bool ignoreCase, const MethodInfo_732E20* method);
// 0x180732e20

Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o *
MiscExtensions__ToEnum___Il2CppFullySharedGenericType_
          (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o *__return_storage_ptr__,
          System_String_o *value,bool ignoreCase,MethodInfo_732E20 *method)

{
  System_RuntimeTypeHandle_o SVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  ulonglong uVar5;
  System_Type_o *pSVar6;
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o *pUVar7;
  Il2CppObject *pIVar8;
  Il2CppClass *klass;
  void *source;
  ulonglong size;
  undefined7 in_register_00000081;
  undefined8 auStack_70 [5];
  undefined1 local_48 [8];
  
  if (method->rgctx_data == (MethodInfo_732E20_RGCTXs *)0x0) {
    auStack_70[0] = 0x180732e51;
    il2cpp_codegen_rgctx_method_init((MethodInfo *)method);
  }
  size = (ulonglong)(method->rgctx_data->_1_T->_2).stack_slot_size;
  uVar5 = size + 0xf;
  if (uVar5 <= size) {
    uVar5 = 0xffffffffffffff0;
  }
  auStack_70[0] = 0x180732e7f;
  lVar2 = -(uVar5 & 0xfffffffffffffff0);
  uVar5 = size + 0xf;
  if (uVar5 <= size) {
    uVar5 = 0xffffffffffffff0;
  }
  *(undefined8 *)((longlong)auStack_70 + lVar2) = 0x180732e9c;
  lVar3 = -(uVar5 & 0xfffffffffffffff0);
  *(undefined8 *)((longlong)auStack_70 + lVar3 + lVar2) = 0x180732eb1;
  il2cpp_runtime_helper_180522500(local_48 + lVar3 + lVar2);
  SVar1.fields.value = (System_RuntimeTypeHandle_Fields)method->rgctx_data->_0_T;
  if ((g_data_184354ea0->_2).cctor_finished_or_no_cctor == 0) {
    *(undefined8 *)((longlong)auStack_70 + lVar3 + lVar2) = 0x180732ecd;
    il2cpp_codegen_runtime_class_init(g_data_184354ea0);
  }
  *(undefined8 *)((longlong)auStack_70 + lVar3 + lVar2) = 0x180732ed7;
  pSVar6 = System_Type__GetTypeFromHandle(SVar1,(MethodInfo *)0x0);
  if ((g_data_184354e58->_2).cctor_finished_or_no_cctor == 0) {
    *(undefined8 *)((longlong)auStack_70 + lVar3 + lVar2) = 0x180732eef;
    il2cpp_codegen_runtime_class_init(g_data_184354e58);
  }
  *(undefined8 *)((longlong)auStack_70 + lVar3 + lVar2) = 0x180732efd;
  bVar4 = System_Enum__IsDefined(pSVar6,(Il2CppObject *)__return_storage_ptr__,(MethodInfo *)0x0);
  if (bVar4) {
    SVar1.fields.value = (System_RuntimeTypeHandle_Fields)method->rgctx_data->_0_T;
    if ((g_data_184354ea0->_2).cctor_finished_or_no_cctor == 0) {
      *(undefined8 *)((longlong)auStack_70 + lVar3 + lVar2) = 0x180732f49;
      il2cpp_codegen_runtime_class_init(g_data_184354ea0);
    }
    *(undefined8 *)((longlong)auStack_70 + lVar3 + lVar2) = 0x180732f53;
    pSVar6 = System_Type__GetTypeFromHandle(SVar1,(MethodInfo *)0x0);
    if ((g_data_184354e58->_2).cctor_finished_or_no_cctor == 0) {
      *(undefined8 *)((longlong)auStack_70 + lVar3 + lVar2) = 0x180732f6b;
      il2cpp_codegen_runtime_class_init(g_data_184354e58);
    }
    *(undefined8 *)((longlong)auStack_70 + lVar3 + lVar2) = 0x180732f7e;
    pIVar8 = System_Enum__Parse_1b66980
                       (pSVar6,(System_String_o *)__return_storage_ptr__,SUB81(value,0),(MethodInfo *)0x0);
    klass = method->rgctx_data->_1_T;
    if (((klass->_2).bitflags1 & 1) == 0) {
      *(undefined8 *)((longlong)auStack_70 + lVar3 + lVar2) = 0x180732f9a;
      klass = il2cpp_codegen_class_init_checked(klass);
    }
    *(undefined8 *)((longlong)auStack_70 + lVar3 + lVar2) = 0x180732fa8;
    source = (void *)il2cpp_runtime_helper_180416280(pIVar8,klass,local_48 + lVar2);
    *(undefined8 *)((longlong)auStack_70 + lVar3 + lVar2) = 0x180732fb6;
    pUVar7 = memcpy((void *)CONCAT71(in_register_00000081,ignoreCase),source,size);
  }
  else {
    *(undefined8 *)((longlong)auStack_70 + lVar3 + lVar2) = 0x180732f0e;
    il2cpp_runtime_helper_180522500(local_48 + lVar3 + lVar2,0,size);
    *(undefined8 *)((longlong)auStack_70 + lVar3 + lVar2) = 0x180732f1b;
    il2cpp_runtime_helper_180522500(local_48 + lVar2,0,size);
    *(undefined8 *)((longlong)auStack_70 + lVar3 + lVar2) = 0x180732f28;
    pUVar7 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o *)
             il2cpp_runtime_helper_180522500((void *)CONCAT71(in_register_00000081,ignoreCase),0,size);
  }
  return pUVar7;
}


// MiscExtensions$$ParseFloat
// il2cpp: float MiscExtensions__ParseFloat (System_String_o* str, const MethodInfo* method);
// 0x181da65c0

float MiscExtensions__ParseFloat(System_String_o *str,MethodInfo *method)

{
  float fVar1;
  
  fVar1 = System_Single__Parse(str,(MethodInfo *)0x0);
  return fVar1;
}


// MiscExtensions$$IsGray
// il2cpp: bool MiscExtensions__IsGray (UnityEngine_Color_o color, const MethodInfo* method);
// 0x181da64d0

bool MiscExtensions__IsGray(UnityEngine_Color_o *color,MethodInfo *method)

{
  float fVar1;
  
  fVar1 = (color->fields).r;
  if (((fVar1 == (color->fields).g) && (fVar1 == (color->fields).b)) && ((color->fields).a == 1.0)) {
    return true;
  }
  return false;
}


// MiscExtensions$$IsGray
// il2cpp: bool MiscExtensions__IsGray (Utility_Color255_o* color, const MethodInfo* method);
// 0x181da6490

bool MiscExtensions__IsGray_1da6490(Utility_Color255_o *color,MethodInfo *method)

{
  if (color == (Utility_Color255_o *)0x0) {
    ThrowNullReferenceException();
  }
  if (((color->fields).R == (color->fields).G) && ((color->fields).R == (color->fields).B)) {
    return (color->fields).A == 0xff;
  }
  return false;
}


// MiscExtensions$$GetRandomItem<int>
// il2cpp: int32_t MiscExtensions__GetRandomItem_int_ (System_Collections_Generic_List_T__o* list, const MethodInfo_732D60* method);
// 0x180732d60

int32_t MiscExtensions__GetRandomItem_int_
                  (System_Collections_Generic_List_T__o *list,MethodInfo_732D60 *method)

{
  int32_t iVar1;
  System_Text_RegularExpressions_RegexCharClass_SingleRange_o SVar2;
  
  if (method->rgctx_data == (MethodInfo_732D60_RGCTXs *)0x0) {
    il2cpp_codegen_rgctx_method_init((MethodInfo *)method);
  }
  if (list != (System_Collections_Generic_List_T__o *)0x0) {
    iVar1 = UnityEngine_Random__RandomRangeInt(0,(list->fields)._size,(MethodInfo *)0x0);
    SVar2 = System_Collections_Generic_List_RegexCharClass_SingleRange___get_Item
                      ((System_Collections_Generic_List_RegexCharClass_SingleRange__o *)list,iVar1,
                       (MethodInfo_92B8E0 *)method->rgctx_data->_2_System_Collections_Generic_List_T__get_Item
                      );
    iVar1._0_2_ = SVar2.fields.First;
    iVar1._2_2_ = SVar2.fields.Last;
    return iVar1;
  }
  ThrowNullReferenceException();
}


// MiscExtensions$$GetRandomItem<object>
// il2cpp: Il2CppObject* MiscExtensions__GetRandomItem_object_ (System_Collections_Generic_List_T__o* list, const MethodInfo_732DC0* method);
// 0x180732dc0

Il2CppObject*
MiscExtensions__GetRandomItem_object_(System_Collections_Generic_List_T__o* list, MethodInfo_732DC0* method)

{
  int32_t index;
  Il2CppObject *pIVar1;
  
  if (method->rgctx_data == (MethodInfo_732DC0_RGCTXs *)0x0) {
    il2cpp_codegen_rgctx_method_init((MethodInfo *)method);
  }
  if (items != (System_Collections_Generic_List_T__o *)0x0) {
    index = UnityEngine_Random__RandomRangeInt(0,(items->fields)._size,(MethodInfo *)0x0);
    pIVar1 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                       ((System_Collections_Generic_List_object__o *)items,index,
                        (MethodInfo_92B830 *)
                        method->rgctx_data->_2_System_Collections_Generic_List_T__get_Item);
    return pIVar1;
  }
  ThrowNullReferenceException();
}


// MiscExtensions$$GetRandomItem<__Il2CppFullySharedGenericType>
// il2cpp: Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o MiscExtensions__GetRandomItem___Il2CppFullySharedGenericType_ (System_Collections_Generic_List_T__o* list, const MethodInfo_732C90* method);
// 0x180732c90

Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o
MiscExtensions__GetRandomItem___Il2CppFullySharedGenericType_(System_Collections_Generic_List_T__o* list, MethodInfo_732C90* method)

{
  void *source;
  MethodInfo *pMVar1;
  Il2CppMethodPointer pIVar2;
  InvokerMethod pIVar3;
  longlong lVar4;
  int32_t maxExclusive;
  ulonglong uVar5;
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o *pUVar6;
  ulonglong size;
  int32_t local_res8 [8];
  undefined8 auStack_80 [5];
  undefined8 auStack_58 [2];
  int32_t *local_48;
  void *local_40;
  
  if (method->rgctx_data == (MethodInfo_732C90_RGCTXs *)0x0) {
    auStack_80[0] = 0x180732cba;
    il2cpp_codegen_rgctx_method_init((MethodInfo *)method);
  }
  size = (ulonglong)(method->rgctx_data->_3_T->_2).stack_slot_size;
  uVar5 = size + 0xf;
  if (uVar5 <= size) {
    uVar5 = 0xffffffffffffff0;
  }
  auStack_80[0] = 0x180732ce5;
  lVar4 = -(uVar5 & 0xfffffffffffffff0);
  source = (void *)((longlong)&local_48 + lVar4);
  if (__return_storage_ptr__ != (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o *)0x0) {
    pMVar1 = method->rgctx_data->_1_System_Collections_Generic_List_T__get_Count;
    pIVar2 = pMVar1->methodPointer;
    *(undefined8 *)((longlong)auStack_80 + lVar4) = 0x180732d03;
    maxExclusive = (*pIVar2)(__return_storage_ptr__,pMVar1);
    *(undefined8 *)((longlong)auStack_80 + lVar4) = 0x180732d0f;
    local_res8[0] = UnityEngine_Random__RandomRangeInt(0,maxExclusive,(MethodInfo *)0x0);
    local_40 = source;
    local_48 = local_res8;
    pMVar1 = method->rgctx_data->_2_System_Collections_Generic_List_T__get_Item;
    *(void **)((longlong)auStack_58 + lVar4) = source;
    pIVar2 = pMVar1->methodPointer;
    pIVar3 = pMVar1->invoker_method;
    *(undefined8 *)((longlong)auStack_80 + lVar4) = 0x180732d3c;
    (*pIVar3)(pIVar2,pMVar1,__return_storage_ptr__,&local_48,*(void **)((longlong)auStack_58 + lVar4));
    *(undefined8 *)((longlong)auStack_80 + lVar4) = 0x180732d4a;
    pUVar6 = memcpy(items,source,size);
    return pUVar6;
  }
  *(undefined8 *)((longlong)auStack_80 + lVar4) = 0x180732d5c;
  ThrowNullReferenceException();
}


// MiscExtensions$$GetRandomItem
// il2cpp: SimpleJSONFixed_JSONNode_o* MiscExtensions__GetRandomItem (SimpleJSONFixed_JSONNode_o* list, const MethodInfo* method);
// 0x181da61c0

SimpleJSONFixed_JSONNode_o *
MiscExtensions__GetRandomItem(SimpleJSONFixed_JSONNode_o *list,MethodInfo *method)

{
  int32_t iVar1;
  System_Xml_Schema_XmlSchema_o *pSVar2;
  
  if (list != (SimpleJSONFixed_JSONNode_o *)0x0) {
    pSVar2 = (*(list->klass->vtable)._11_get_Count.methodPtr)(list,(list->klass->vtable)._11_get_Count.method)
    ;
    iVar1 = UnityEngine_Random__RandomRangeInt(0,(int32_t)pSVar2,(MethodInfo *)0x0);
    pSVar2 = (*(list->klass->vtable)._5_get_Item.methodPtr)(list,(MethodInfo *)iVar1);
    return (SimpleJSONFixed_JSONNode_o *)pSVar2;
  }
  ThrowNullReferenceException();
}


// MiscExtensions$$ToColor
// il2cpp: UnityEngine_Color_o MiscExtensions__ToColor (SimpleJSONFixed_JSONNode_o* array, const MethodInfo* method);
// 0x181da6ad0

UnityEngine_Color_o *
MiscExtensions__ToColor
          (UnityEngine_Color_o *__return_storage_ptr__,SimpleJSONFixed_JSONNode_o *array,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int32_t tryStart;
  int32_t tryEnd;
  int32_t finallyStart;
  int32_t finallyEnd;
  System_Xml_Schema_XmlSchema_o *pSVar4;
  Utility_Color255_o *__this;
  UnityEngine_Color_o *pUVar5;
  UnityEngine_Color_o local_28;
  
  if (Il2CppMethodInitialized_1843448f0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Color255);
    Il2CppMethodInitialized_1843448f0 = '\x01';
  }
  if (array != (SimpleJSONFixed_JSONNode_o *)0x0) {
    pSVar4 = (*(array->klass->vtable)._5_get_Item.methodPtr)(array,(MethodInfo *)0x0);
    if (pSVar4 != (System_Xml_Schema_XmlSchema_o *)0x0) {
      tryStart = (*(code *)((Il2CppClass *)pSVar4->klass)->vtable[35].methodPtr)
                           (pSVar4,((Il2CppClass *)pSVar4->klass)->vtable[35].method);
      pSVar4 = (*(array->klass->vtable)._5_get_Item.methodPtr)(array,(MethodInfo *)0x1);
      if (pSVar4 != (System_Xml_Schema_XmlSchema_o *)0x0) {
        tryEnd = (*(code *)((Il2CppClass *)pSVar4->klass)->vtable[35].methodPtr)
                           (pSVar4,((Il2CppClass *)pSVar4->klass)->vtable[35].method);
        pSVar4 = (*(array->klass->vtable)._5_get_Item.methodPtr)(array,(MethodInfo *)0x2);
        if (pSVar4 != (System_Xml_Schema_XmlSchema_o *)0x0) {
          finallyStart = (*(code *)((Il2CppClass *)pSVar4->klass)->vtable[35].methodPtr)
                                   (pSVar4,((Il2CppClass *)pSVar4->klass)->vtable[35].method);
          pSVar4 = (*(array->klass->vtable)._5_get_Item.methodPtr)(array,(MethodInfo *)0x3);
          if (pSVar4 != (System_Xml_Schema_XmlSchema_o *)0x0) {
            finallyEnd = (*(code *)((Il2CppClass *)pSVar4->klass)->vtable[35].methodPtr)
                                   (pSVar4,((Il2CppClass *)pSVar4->klass)->vtable[35].method);
            __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Utility_Color255);
            Utility_Color255___ctor
                      ((System_Linq_Expressions_Interpreter_TryFaultHandler_o *)__this,tryStart,tryEnd,
                       finallyStart,finallyEnd,(MethodInfo *)0x0);
            if (__this != (Utility_Color255_o *)0x0) {
              pUVar5 = Utility_Color255__ToColor(&local_28,__this,(MethodInfo *)0x0);
              fVar1 = (pUVar5->fields).g;
              fVar2 = (pUVar5->fields).b;
              fVar3 = (pUVar5->fields).a;
              (__return_storage_ptr__->fields).r = (pUVar5->fields).r;
              (__return_storage_ptr__->fields).g = fVar1;
              (__return_storage_ptr__->fields).b = fVar2;
              (__return_storage_ptr__->fields).a = fVar3;
              return __return_storage_ptr__;
            }
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// MiscExtensions$$GetPlayerInfo
// il2cpp: GameManagers_PlayerInfo_o* MiscExtensions__GetPlayerInfo (Photon_Realtime_Player_o* player, const MethodInfo* method);
// 0x181da60e0

GameManagers_PlayerInfo_o * MiscExtensions__GetPlayerInfo(Photon_Realtime_Player_o *player,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_int__ulong__o *pSVar1;
  bool bVar2;
  GameManagers_PlayerInfo_o *pGVar3;
  
  if (Il2CppMethodInitialized_1843448f1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_PlayerInfo_ContainsKey);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_PlayerInfo_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_InGameManager);
    Il2CppMethodInitialized_1843448f1 = '\x01';
  }
  if ((TypeInfo_GameManagers_InGameManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_InGameManager);
  }
  if ((player != (Photon_Realtime_Player_o *)0x0) &&
     (pSVar1 = (System_Collections_Generic_Dictionary_int__ulong__o *)
               TypeInfo_GameManagers_InGameManager->static_fields->AllPlayerInfo,
     pSVar1 != (System_Collections_Generic_Dictionary_int__ulong__o *)0x0)) {
    bVar2 = System_Collections_Generic_Dictionary_int__ulong___ContainsKey
                      (pSVar1,(player->fields).actorNumber,
                       (MethodInfo_1407110 *)
                       MethodInfo_System_Collections_Generic_Dictionary_int_PlayerInfo_ContainsKey);
    if (!bVar2) {
      return (GameManagers_PlayerInfo_o *)0x0;
    }
    if ((TypeInfo_GameManagers_InGameManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_InGameManager);
    }
    pSVar1 = (System_Collections_Generic_Dictionary_int__ulong__o *)
             TypeInfo_GameManagers_InGameManager->static_fields->AllPlayerInfo;
    if (pSVar1 != (System_Collections_Generic_Dictionary_int__ulong__o *)0x0) {
      pGVar3 = (GameManagers_PlayerInfo_o *)
               System_Collections_Generic_Dictionary_int__ulong___get_Item
                         (pSVar1,(player->fields).actorNumber,
                          (MethodInfo_14156F0 *)
                          MethodInfo_System_Collections_Generic_Dictionary_int_PlayerInfo_get_Item);
      return pGVar3;
    }
  }
  ThrowNullReferenceException();
}


// MiscExtensions$$ReverseString
// il2cpp: System_String_o* MiscExtensions__ReverseString (System_String_o* s, const MethodInfo* method);
// 0x181da6840

System_String_o * MiscExtensions__ReverseString(System_String_o *s,MethodInfo *method)

{
  System_Char_array *array;
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_1843448f2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Array_Reverse_char);
    Il2CppMethodInitialized_1843448f2 = '\x01';
  }
  if (s != (System_String_o *)0x0) {
    array = System_String__ToCharArray(s,(MethodInfo *)0x0);
    System_Array__Reverse_char_(array,(MethodInfo_5EAF20 *)MethodInfo_System_Array_Reverse_char);
    pSVar1 = System_String__CreateString_196b000((System_String_o *)0x0,array,(MethodInfo *)0x0);
    return pSVar1;
  }
  ThrowNullReferenceException();
}


// MiscExtensions$$.cctor
// il2cpp: void MiscExtensions___cctor (const MethodInfo* method);
// 0x181da7bf0

void MiscExtensions___cctor(MethodInfo *method)

{
  System_OrdinalIgnoreCaseComparer_o *comparer;
  System_Text_RegularExpressions_Regex_o *pSVar1;
  System_String_array *values;
  System_String_o *pSVar2;
  System_Collections_Generic_Dictionary_string__string__o *__this;
  
  if (Il2CppMethodInitialized_1843448f3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_string_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_string_ctor_40dd6f8);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_Dictionary_string_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_MiscExtensions);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Text_RegularExpressions_Regex);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_StringComparer);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    il2cpp_codegen_initialize_runtime_metadata(&"<color=(\\w+)>");
    il2cpp_codegen_initialize_runtime_metadata(&"#808080ff");
    il2cpp_codegen_initialize_runtime_metadata(&"(</color>)");
    il2cpp_codegen_initialize_runtime_metadata(&"#a52a2aff");
    il2cpp_codegen_initialize_runtime_metadata(&"teal");
    il2cpp_codegen_initialize_runtime_metadata(&"magenta");
    il2cpp_codegen_initialize_runtime_metadata(&"darkblue");
    il2cpp_codegen_initialize_runtime_metadata(&"(\\[)([A-Fa-f0-9]{3}|[A-Fa-f0-9]{6})(\\])");
    il2cpp_codegen_initialize_runtime_metadata(&"lightblue");
    il2cpp_codegen_initialize_runtime_metadata(&"brown");
    il2cpp_codegen_initialize_runtime_metadata(&"#008080ff");
    il2cpp_codegen_initialize_runtime_metadata(&"grey");
    il2cpp_codegen_initialize_runtime_metadata(&"<\\/?material.*?>");
    il2cpp_codegen_initialize_runtime_metadata(&"olive");
    il2cpp_codegen_initialize_runtime_metadata(&"#0000a0ff");
    il2cpp_codegen_initialize_runtime_metadata(&"#c0c0c0ff");
    il2cpp_codegen_initialize_runtime_metadata(&"(<color=#)([A-Fa-f0-9]{3}|[A-Fa-f0-9]{6})(>)");
    il2cpp_codegen_initialize_runtime_metadata(&"#ff00ffff");
    il2cpp_codegen_initialize_runtime_metadata(&"silver");
    il2cpp_codegen_initialize_runtime_metadata(&"#00ff00ff");
    il2cpp_codegen_initialize_runtime_metadata(&"|");
    il2cpp_codegen_initialize_runtime_metadata(&"aqua");
    il2cpp_codegen_initialize_runtime_metadata(&"#00ffffff");
    il2cpp_codegen_initialize_runtime_metadata(&"<\\/?size.*?>");
    il2cpp_codegen_initialize_runtime_metadata(&"#add8e6ff");
    il2cpp_codegen_initialize_runtime_metadata(&"lime");
    il2cpp_codegen_initialize_runtime_metadata(&"#000080ff");
    il2cpp_codegen_initialize_runtime_metadata(&"navy");
    il2cpp_codegen_initialize_runtime_metadata(&"fuchsia");
    il2cpp_codegen_initialize_runtime_metadata(&"#808000ff");
    il2cpp_codegen_initialize_runtime_metadata(&"cyan");
    il2cpp_codegen_initialize_runtime_metadata(&"<\\/?[^>]+>");
    il2cpp_codegen_initialize_runtime_metadata(&"<\\/?quad.*?>");
    il2cpp_codegen_initialize_runtime_metadata(&"maroon");
    il2cpp_codegen_initialize_runtime_metadata(&"#800000ff");
    Il2CppMethodInitialized_1843448f3 = '\x01';
  }
  TypeInfo_MiscExtensions->static_fields->HexPattern = "(\\[)([A-Fa-f0-9]{3}|[A-Fa-f0-9]{6})(\\])";
  Il2CppCodeGenWriteBarrier(&TypeInfo_MiscExtensions->static_fields->HexPattern,"(\\[)([A-Fa-f0-9]{3}|[A-Fa-f0-9]{6})(\\])");
  TypeInfo_MiscExtensions->static_fields->ColorTagPattern = "(<color=#)([A-Fa-f0-9]{3}|[A-Fa-f0-9]{6})(>)";
  Il2CppCodeGenWriteBarrier(&TypeInfo_MiscExtensions->static_fields->ColorTagPattern,"(<color=#)([A-Fa-f0-9]{3}|[A-Fa-f0-9]{6})(>)");
  TypeInfo_MiscExtensions->static_fields->ColorEndPattern = "(</color>)";
  Il2CppCodeGenWriteBarrier(&TypeInfo_MiscExtensions->static_fields->ColorEndPattern,"(</color>)");
  TypeInfo_MiscExtensions->static_fields->TagPattern = "<\\/?[^>]+>";
  Il2CppCodeGenWriteBarrier(&TypeInfo_MiscExtensions->static_fields->TagPattern,"<\\/?[^>]+>");
  TypeInfo_MiscExtensions->static_fields->SizePattern = "<\\/?size.*?>";
  Il2CppCodeGenWriteBarrier(&TypeInfo_MiscExtensions->static_fields->SizePattern,"<\\/?size.*?>");
  TypeInfo_MiscExtensions->static_fields->MaterialPattern = "<\\/?material.*?>";
  Il2CppCodeGenWriteBarrier(&TypeInfo_MiscExtensions->static_fields->MaterialPattern,"<\\/?material.*?>");
  TypeInfo_MiscExtensions->static_fields->QuadPattern = "<\\/?quad.*?>";
  Il2CppCodeGenWriteBarrier(&TypeInfo_MiscExtensions->static_fields->QuadPattern,"<\\/?quad.*?>");
  pSVar2 = TypeInfo_MiscExtensions->static_fields->HexPattern;
  pSVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Text_RegularExpressions_Regex);
  System_Text_RegularExpressions_Regex___ctor_285f1d0(pSVar1,pSVar2,(MethodInfo *)0x0);
  TypeInfo_MiscExtensions->static_fields->HexRegex = pSVar1;
  Il2CppCodeGenWriteBarrier(&TypeInfo_MiscExtensions->static_fields->HexRegex,pSVar1);
  pSVar2 = TypeInfo_MiscExtensions->static_fields->ColorTagPattern;
  pSVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Text_RegularExpressions_Regex);
  System_Text_RegularExpressions_Regex___ctor_285f1d0(pSVar1,pSVar2,(MethodInfo *)0x0);
  TypeInfo_MiscExtensions->static_fields->ColorTagRegex = pSVar1;
  Il2CppCodeGenWriteBarrier(&TypeInfo_MiscExtensions->static_fields->ColorTagRegex,pSVar1);
  pSVar2 = TypeInfo_MiscExtensions->static_fields->ColorEndPattern;
  pSVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Text_RegularExpressions_Regex);
  System_Text_RegularExpressions_Regex___ctor_285f1d0(pSVar1,pSVar2,(MethodInfo *)0x0);
  TypeInfo_MiscExtensions->static_fields->ColorEndRegex = pSVar1;
  Il2CppCodeGenWriteBarrier(&TypeInfo_MiscExtensions->static_fields->ColorEndRegex,pSVar1);
  pSVar2 = TypeInfo_MiscExtensions->static_fields->TagPattern;
  pSVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Text_RegularExpressions_Regex);
  System_Text_RegularExpressions_Regex___ctor_285f1d0(pSVar1,pSVar2,(MethodInfo *)0x0);
  TypeInfo_MiscExtensions->static_fields->TagRegex = pSVar1;
  Il2CppCodeGenWriteBarrier(&TypeInfo_MiscExtensions->static_fields->TagRegex,pSVar1);
  values = (System_String_array *)SZArrayNew(TypeInfo_string_array,5);
  if (values != (System_String_array *)0x0) {
    if ((int)values->max_length != 0) {
      pSVar2 = TypeInfo_MiscExtensions->static_fields->SizePattern;
      values->m_Items[0] = pSVar2;
      Il2CppCodeGenWriteBarrier(values->m_Items,pSVar2);
      pSVar2 = "|";
      if (1 < (uint)values->max_length) {
        values->m_Items[1] = "|";
        Il2CppCodeGenWriteBarrier(values->m_Items + 1,pSVar2);
        if (2 < (uint)values->max_length) {
          pSVar2 = TypeInfo_MiscExtensions->static_fields->MaterialPattern;
          values->m_Items[2] = pSVar2;
          Il2CppCodeGenWriteBarrier(values->m_Items + 2,pSVar2);
          pSVar2 = "|";
          if (3 < (uint)values->max_length) {
            values->m_Items[3] = "|";
            Il2CppCodeGenWriteBarrier(values->m_Items + 3,pSVar2);
            if (4 < (uint)values->max_length) {
              pSVar2 = TypeInfo_MiscExtensions->static_fields->QuadPattern;
              values->m_Items[4] = pSVar2;
              Il2CppCodeGenWriteBarrier(values->m_Items + 4,pSVar2);
              pSVar2 = System_String__Concat_1969830(values,(MethodInfo *)0x0);
              pSVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Text_RegularExpressions_Regex)
              ;
              System_Text_RegularExpressions_Regex___ctor_285f1d0(pSVar1,pSVar2,(MethodInfo *)0x0);
              TypeInfo_MiscExtensions->static_fields->IllegalStyleRegex = pSVar1;
              Il2CppCodeGenWriteBarrier(&TypeInfo_MiscExtensions->static_fields->IllegalStyleRegex,pSVar1);
              pSVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Text_RegularExpressions_Regex)
              ;
              System_Text_RegularExpressions_Regex___ctor_285f6f0
                        (pSVar1,"<color=(\\w+)>",9,(MethodInfo *)0x0);
              TypeInfo_MiscExtensions->static_fields->NamedColorTagRegex = pSVar1;
              Il2CppCodeGenWriteBarrier(&TypeInfo_MiscExtensions->static_fields->NamedColorTagRegex,pSVar1);
              if ((TypeInfo_System_StringComparer->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_StringComparer);
              }
              if (Il2CppMethodInitialized_184341f37 == '\0') {
                il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_StringComparer);
                Il2CppMethodInitialized_184341f37 = '\x01';
              }
              if ((TypeInfo_System_StringComparer->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_StringComparer);
              }
              comparer = TypeInfo_System_StringComparer->static_fields->s_ordinalIgnoreCase;
              __this = il2cpp_codegen_object_new
                                 ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_string_string)
              ;
              System_Collections_Generic_Dictionary_object__ProbeReferenceVolume_CellData_PerScenarioData____ctor_1453150
                        ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this,
                         (System_Collections_Generic_IEqualityComparer_TKey__o *)comparer,
                         (MethodInfo_1453150 *)
                         MethodInfo_System_Collections_Generic_Dictionary_string_string_ctor_40dd6f8);
              if (__this != (System_Collections_Generic_Dictionary_string__string__o *)0x0) {
                System_Collections_Generic_Dictionary_object__object___Add
                          ((System_Collections_Generic_Dictionary_object__object__o *)__this,
                           (Il2CppObject *)"aqua",(Il2CppObject *)"#00ffffff",
                           (MethodInfo_146B4B0 *)
                           MethodInfo_System_Collections_Generic_Dictionary_string_string_Add);
                System_Collections_Generic_Dictionary_object__object___Add
                          ((System_Collections_Generic_Dictionary_object__object__o *)__this,
                           (Il2CppObject *)"cyan",(Il2CppObject *)"#00ffffff",
                           (MethodInfo_146B4B0 *)
                           MethodInfo_System_Collections_Generic_Dictionary_string_string_Add);
                System_Collections_Generic_Dictionary_object__object___Add
                          ((System_Collections_Generic_Dictionary_object__object__o *)__this,
                           (Il2CppObject *)"brown",(Il2CppObject *)"#a52a2aff",
                           (MethodInfo_146B4B0 *)
                           MethodInfo_System_Collections_Generic_Dictionary_string_string_Add);
                System_Collections_Generic_Dictionary_object__object___Add
                          ((System_Collections_Generic_Dictionary_object__object__o *)__this,
                           (Il2CppObject *)"darkblue",(Il2CppObject *)"#0000a0ff",
                           (MethodInfo_146B4B0 *)
                           MethodInfo_System_Collections_Generic_Dictionary_string_string_Add);
                System_Collections_Generic_Dictionary_object__object___Add
                          ((System_Collections_Generic_Dictionary_object__object__o *)__this,
                           (Il2CppObject *)"fuchsia",(Il2CppObject *)"#ff00ffff",
                           (MethodInfo_146B4B0 *)
                           MethodInfo_System_Collections_Generic_Dictionary_string_string_Add);
                System_Collections_Generic_Dictionary_object__object___Add
                          ((System_Collections_Generic_Dictionary_object__object__o *)__this,
                           (Il2CppObject *)"magenta",(Il2CppObject *)"#ff00ffff",
                           (MethodInfo_146B4B0 *)
                           MethodInfo_System_Collections_Generic_Dictionary_string_string_Add);
                System_Collections_Generic_Dictionary_object__object___Add
                          ((System_Collections_Generic_Dictionary_object__object__o *)__this,
                           (Il2CppObject *)"grey",(Il2CppObject *)"#808080ff",
                           (MethodInfo_146B4B0 *)
                           MethodInfo_System_Collections_Generic_Dictionary_string_string_Add);
                System_Collections_Generic_Dictionary_object__object___Add
                          ((System_Collections_Generic_Dictionary_object__object__o *)__this,
                           (Il2CppObject *)"lightblue",(Il2CppObject *)"#add8e6ff",
                           (MethodInfo_146B4B0 *)
                           MethodInfo_System_Collections_Generic_Dictionary_string_string_Add);
                System_Collections_Generic_Dictionary_object__object___Add
                          ((System_Collections_Generic_Dictionary_object__object__o *)__this,
                           (Il2CppObject *)"lime",(Il2CppObject *)"#00ff00ff",
                           (MethodInfo_146B4B0 *)
                           MethodInfo_System_Collections_Generic_Dictionary_string_string_Add);
                System_Collections_Generic_Dictionary_object__object___Add
                          ((System_Collections_Generic_Dictionary_object__object__o *)__this,
                           (Il2CppObject *)"maroon",(Il2CppObject *)"#800000ff",
                           (MethodInfo_146B4B0 *)
                           MethodInfo_System_Collections_Generic_Dictionary_string_string_Add);
                System_Collections_Generic_Dictionary_object__object___Add
                          ((System_Collections_Generic_Dictionary_object__object__o *)__this,
                           (Il2CppObject *)"navy",(Il2CppObject *)"#000080ff",
                           (MethodInfo_146B4B0 *)
                           MethodInfo_System_Collections_Generic_Dictionary_string_string_Add);
                System_Collections_Generic_Dictionary_object__object___Add
                          ((System_Collections_Generic_Dictionary_object__object__o *)__this,
                           (Il2CppObject *)"olive",(Il2CppObject *)"#808000ff",
                           (MethodInfo_146B4B0 *)
                           MethodInfo_System_Collections_Generic_Dictionary_string_string_Add);
                System_Collections_Generic_Dictionary_object__object___Add
                          ((System_Collections_Generic_Dictionary_object__object__o *)__this,
                           (Il2CppObject *)"silver",(Il2CppObject *)"#c0c0c0ff",
                           (MethodInfo_146B4B0 *)
                           MethodInfo_System_Collections_Generic_Dictionary_string_string_Add);
                System_Collections_Generic_Dictionary_object__object___Add
                          ((System_Collections_Generic_Dictionary_object__object__o *)__this,
                           (Il2CppObject *)"teal",(Il2CppObject *)"#008080ff",
                           (MethodInfo_146B4B0 *)
                           MethodInfo_System_Collections_Generic_Dictionary_string_string_Add);
                TypeInfo_MiscExtensions->static_fields->NamedColorHex = __this;
                Il2CppCodeGenWriteBarrier(&TypeInfo_MiscExtensions->static_fields->NamedColorHex,__this);
                return;
              }
              goto label_181da84b8;
            }
          }
        }
      }
    }
    ThrowIndexOutOfRangeException();
  }
label_181da84b8:
  ThrowNullReferenceException();
}


