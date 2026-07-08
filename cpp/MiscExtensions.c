// Type: MiscExtensions
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/MiscExtensions.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/Utility/Extensions/MiscExtensions.cs  [CHANGED since prior version]
// --------------------------------

// MiscExtensions.<>c$$.cctor
// il2cpp: void MiscExtensions___c___cctor (const MethodInfo* method);
// 0x3d71b30

void MiscExtensions_<>c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (DAT_05702613 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05702613 = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = __this;
  il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_c + 0xb8),__this);
  return;
}


// MiscExtensions.<>c$$.ctor
// il2cpp: void MiscExtensions___c___ctor (MiscExtensions___c_o* __this, const MethodInfo* method);
// 0x3d71ba0

void MiscExtensions_<>c___ctor(MiscExtensions___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// MiscExtensions.<>c$$<ReplaceNamedColorTags>b__15_0
// il2cpp: System_String_o* MiscExtensions___c___ReplaceNamedColorTags_b__15_0 (MiscExtensions___c_o* __this, System_Text_RegularExpressions_Match_o* match, const MethodInfo* method);
// 0x3d71bb0

System_String_o *
MiscExtensions_<>c__<ReplaceNamedColorTags>b__15_0
          (MiscExtensions___c_o *__this,System_Text_RegularExpressions_Match_o *match,
          MethodInfo *method)

{
  bool_conflict bVar1;
  System_Text_RegularExpressions_GroupCollection_o *__this_00;
  System_Text_RegularExpressions_Capture_o *__this_01;
  System_String_o *pSVar2;
  MethodInfo *extraout_RDX;
  MethodInfo *method_00;
  
  if (DAT_05702614 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_MiscExtensions);
    il2cpp_init_method_metadata(&"<color=#");
    il2cpp_init_method_metadata(&">");
    DAT_05702614 = '\x01';
    method = extraout_RDX;
  }
  if (match != (System_Text_RegularExpressions_Match_o *)0x0) {
    __this_00 = (System_Text_RegularExpressions_GroupCollection_o *)
                (*(match->klass->vtable)._5_get_Groups.methodPtr)
                          (match,(match->klass->vtable)._5_get_Groups.method,method);
    if (__this_00 != (System_Text_RegularExpressions_GroupCollection_o *)0x0) {
      __this_01 = (System_Text_RegularExpressions_Capture_o *)
                  System_Text_RegularExpressions_GroupCollection__get_Item
                            (__this_00,1,(MethodInfo *)0x0);
      if (__this_01 != (System_Text_RegularExpressions_Capture_o *)0x0) {
        method_00 = (MethodInfo *)0x0;
        pSVar2 = System_Text_RegularExpressions_Capture__get_Value(__this_01,(MethodInfo *)0x0);
        if (*(int *)(TypeInfo_MiscExtensions + 0xe4) == 0) {
          il2cpp_init_class();
        }
        pSVar2 = MiscExtensions__ResolveNamedColorHex(pSVar2,method_00);
        bVar1 = System_String__IsNullOrEmpty(pSVar2,(MethodInfo *)0x0);
        if ((char)bVar1 != '\0') {
          pSVar2 = System_Text_RegularExpressions_Capture__get_Value
                             ((System_Text_RegularExpressions_Capture_o *)match,(MethodInfo *)0x0);
          return pSVar2;
        }
        pSVar2 = System_String__Concat("<color=#",pSVar2,">",(MethodInfo *)0x0);
        return pSVar2;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// MiscExtensions$$ResolveNamedColorHex
// il2cpp: System_String_o* MiscExtensions__ResolveNamedColorHex (System_String_o* name, const MethodInfo* method);
// 0x3d6f1d0

System_String_o * MiscExtensions__ResolveNamedColorHex(System_String_o *name,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this;
  bool_conflict bVar1;
  System_String_o *pSVar2;
  System_String_o *local_18;
  
  if (DAT_05702601 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_TryGetValue);
    il2cpp_init_method_metadata(&TypeInfo_MiscExtensions);
    il2cpp_init_method_metadata(&"#");
    DAT_05702601 = '\x01';
  }
  local_18 = (System_String_o *)0x0;
  bVar1 = System_String__IsNullOrEmpty(name,(MethodInfo *)0x0);
  pSVar2 = (System_String_o *)0x0;
  if ((char)bVar1 == '\0') {
    if (*(int *)(TypeInfo_MiscExtensions + 0xe4) == 0) {
      il2cpp_init_class();
    }
    __this = *(System_Collections_Generic_Dictionary_object__object__o **)
              (*(long *)(TypeInfo_MiscExtensions + 0xb8) + 0x68);
    if (__this == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
LAB_03d6f2b3:
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    bVar1 = System_Collections_Generic_Dictionary<object__object>__TryGetValue
                      (__this,(Il2CppObject *)name,(Il2CppObject **)&local_18,MethodInfo_Boolean_TryGetValue);
    if ((char)bVar1 == '\0') {
      pSVar2 = (System_String_o *)0x0;
    }
    else {
      if (local_18 == (System_String_o *)0x0) goto LAB_03d6f2b3;
      bVar1 = System_String__StartsWith(local_18,"#",(MethodInfo *)0x0);
      pSVar2 = local_18;
      if ((char)bVar1 != '\0') {
        if (local_18 == (System_String_o *)0x0) goto LAB_03d6f2b3;
        pSVar2 = System_String__Substring(local_18,1,(MethodInfo *)0x0);
      }
    }
  }
  return pSVar2;
}


// MiscExtensions$$ReplaceNamedColorTags
// il2cpp: System_String_o* MiscExtensions__ReplaceNamedColorTags (System_String_o* input, const MethodInfo* method);
// 0x3d6f2c0

System_String_o * MiscExtensions__ReplaceNamedColorTags(System_String_o *input,MethodInfo *method)

{
  System_Text_RegularExpressions_Regex_o *__this;
  long lVar1;
  bool_conflict bVar2;
  System_String_o *pSVar3;
  System_Text_RegularExpressions_MatchEvaluator_o *evaluator;
  
  if (DAT_05702602 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_MatchEvaluator);
    il2cpp_init_method_metadata(&TypeInfo_MiscExtensions);
    il2cpp_init_method_metadata(&MethodInfo_String__ReplaceNamedColorTags_b__15_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05702602 = '\x01';
  }
  bVar2 = System_String__IsNullOrEmpty(input,(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    return input;
  }
  if (*(int *)(TypeInfo_MiscExtensions + 0xe4) == 0) {
    il2cpp_init_class();
  }
  __this = *(System_Text_RegularExpressions_Regex_o **)(*(long *)(TypeInfo_MiscExtensions + 0xb8) + 0x60);
  if (*(int *)(TypeInfo_c + 0xe4) == 0) {
    il2cpp_init_class();
    evaluator = *(System_Text_RegularExpressions_MatchEvaluator_o **)
                 (*(long *)(TypeInfo_c + 0xb8) + 8);
  }
  else {
    evaluator = *(System_Text_RegularExpressions_MatchEvaluator_o **)
                 (*(long *)(TypeInfo_c + 0xb8) + 8);
  }
  if (evaluator == (System_Text_RegularExpressions_MatchEvaluator_o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    evaluator = (System_Text_RegularExpressions_MatchEvaluator_o *)il2cpp_runtime_glue(TypeInfo_MatchEvaluator);
    System_Text_RegularExpressions_MatchEvaluator___ctor();
    lVar1 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Text_RegularExpressions_MatchEvaluator_o **)(lVar1 + 8) = evaluator;
    il2cpp_runtime_glue(lVar1 + 8,evaluator);
  }
  if (__this == (System_Text_RegularExpressions_Regex_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  pSVar3 = System_Text_RegularExpressions_Regex__Replace(__this,input,evaluator,(MethodInfo *)0x0);
  return pSVar3;
}


// MiscExtensions$$GetActive
// il2cpp: bool MiscExtensions__GetActive (UnityEngine_GameObject_o* target, const MethodInfo* method);
// 0x3d6f420

bool_conflict MiscExtensions__GetActive(UnityEngine_GameObject_o *target,MethodInfo *method)

{
  bool_conflict bVar1;
  
  if (target != (UnityEngine_GameObject_o *)0x0) {
    bVar1 = UnityEngine_GameObject__get_activeInHierarchy(target,(MethodInfo *)0x0);
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// MiscExtensions$$ToDisplayString
// il2cpp: System_String_o* MiscExtensions__ToDisplayString (UnityEngine_Vector3_o vector, const MethodInfo* method);
// 0x3d6f440

System_String_o * MiscExtensions__ToDisplayString(UnityEngine_Vector3_o vector,MethodInfo *method)

{
  System_String_array *values;
  System_String_o *pSVar1;
  float fVar2;
  undefined1 local_28 [8];
  float local_20 [2];
  
  local_20[0] = vector.fields.z;
  local_28 = vector.fields._0_8_;
  if (DAT_05702603 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_string);
    il2cpp_init_method_metadata(&"(");
    il2cpp_init_method_metadata(&")");
    il2cpp_init_method_metadata(&",");
    DAT_05702603 = '\x01';
  }
  values = (System_String_array *)il2cpp_glue_02274930(TypeInfo_string,7);
  if (values != (System_String_array *)0x0) {
    if ((int)values->max_length != 0) {
      values->m_Items[0] = "(";
      fVar2 = (float)il2cpp_runtime_glue(values->m_Items);
      pSVar1 = System_Single__ToString(fVar2,(MethodInfo *)local_28);
      if (1 < (uint)values->max_length) {
        values->m_Items[1] = pSVar1;
        il2cpp_runtime_glue(values->m_Items + 1,pSVar1);
        if (2 < (uint)values->max_length) {
          values->m_Items[2] = ",";
          fVar2 = (float)il2cpp_runtime_glue(values->m_Items + 2);
          pSVar1 = System_Single__ToString(fVar2,(MethodInfo *)(local_28 + 4));
          if (3 < (uint)values->max_length) {
            values->m_Items[3] = pSVar1;
            il2cpp_runtime_glue(values->m_Items + 3,pSVar1);
            if (4 < (uint)values->max_length) {
              values->m_Items[4] = ",";
              fVar2 = (float)il2cpp_runtime_glue(values->m_Items + 4);
              pSVar1 = System_Single__ToString(fVar2,(MethodInfo *)local_20);
              if (5 < (uint)values->max_length) {
                values->m_Items[5] = pSVar1;
                il2cpp_runtime_glue(values->m_Items + 5,pSVar1);
                if (6 < (uint)values->max_length) {
                  values->m_Items[6] = ")";
                  il2cpp_runtime_glue(values->m_Items + 6);
                  pSVar1 = System_String__Concat(values,(MethodInfo *)0x0);
                  return pSVar1;
                }
              }
            }
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// MiscExtensions$$UnboxToDouble
// il2cpp: double MiscExtensions__UnboxToDouble (Il2CppObject* obj, const MethodInfo* method);
// 0x3d6f5c0

double MiscExtensions__UnboxToDouble(Il2CppObject *obj,MethodInfo *method)

{
  double *pdVar1;
  int *piVar2;
  
  if (obj == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if (obj->klass != DAT_05711068) {
    if ((obj->klass->_1).element_class == *(Il2CppClass **)(DAT_057110a0 + 0x40)) {
      pdVar1 = (double *)il2cpp_glue_022c7330();
      return *pdVar1;
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_unwind_resume();
  }
  piVar2 = (int *)il2cpp_glue_022c7330();
  return (double)*piVar2;
}


// MiscExtensions$$UnboxToFloat
// il2cpp: float MiscExtensions__UnboxToFloat (Il2CppObject* obj, const MethodInfo* method);
// 0x3d6f610

float MiscExtensions__UnboxToFloat(Il2CppObject *obj,MethodInfo *method)

{
  float *pfVar1;
  int *piVar2;
  
  if (obj == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if (obj->klass != DAT_05711068) {
    if ((obj->klass->_1).element_class == *(Il2CppClass **)(DAT_05711098 + 0x40)) {
      pfVar1 = (float *)il2cpp_glue_022c7330();
      return *pfVar1;
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_unwind_resume();
  }
  piVar2 = (int *)il2cpp_glue_022c7330();
  return (float)*piVar2;
}


// MiscExtensions$$UnboxToInt
// il2cpp: int32_t MiscExtensions__UnboxToInt (Il2CppObject* obj, const MethodInfo* method);
// 0x3d6f660

int32_t MiscExtensions__UnboxToInt(Il2CppObject *obj,MethodInfo *method)

{
  int32_t *piVar1;
  float *pfVar2;
  
  if (obj == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if (obj->klass != DAT_05711098) {
    if ((obj->klass->_1).element_class == *(Il2CppClass **)(DAT_05711068 + 0x40)) {
      piVar1 = (int32_t *)il2cpp_glue_022c7330();
      return *piVar1;
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_unwind_resume();
  }
  pfVar2 = (float *)il2cpp_glue_022c7330();
  return (int)*pfVar2;
}


// MiscExtensions$$MaxComponent
// il2cpp: float MiscExtensions__MaxComponent (UnityEngine_Vector3_o v, const MethodInfo* method);
// 0x3d6f6b0

float MiscExtensions__MaxComponent(UnityEngine_Vector3_o v,MethodInfo *method)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  float fVar7;
  float fVar8;
  float local_18;
  float fStack_14;
  
  if (DAT_05702604 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_float);
    DAT_05702604 = '\x01';
  }
  lVar2 = il2cpp_glue_02274930(TypeInfo_float,3);
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  uVar3 = (uint)*(ulong *)(lVar2 + 0x18);
  local_18 = v.fields.x;
  fStack_14 = v.fields.y;
  if (((uVar3 == 0) || (*(float *)(lVar2 + 0x20) = local_18, uVar3 == 1)) ||
     (*(float *)(lVar2 + 0x24) = fStack_14, uVar3 < 3)) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  *(float *)(lVar2 + 0x28) = v.fields.z;
  if (1 < (int)uVar3) {
    uVar5 = *(ulong *)(lVar2 + 0x18) & 0xffffffff;
    if (fStack_14 <= local_18) {
      fStack_14 = local_18;
    }
    if (uVar5 == 2) {
      return fStack_14;
    }
    uVar4 = (ulong)(uVar3 - 2 & 3);
    if (uVar5 - 3 < 3) {
      lVar6 = 2;
      local_18 = fStack_14;
    }
    else {
      lVar1 = 0;
      do {
        lVar6 = lVar1;
        fVar8 = *(float *)(lVar2 + 0x28 + lVar6 * 4);
        if (fVar8 <= fStack_14) {
          fVar8 = fStack_14;
        }
        fVar7 = *(float *)(lVar2 + 0x2c + lVar6 * 4);
        if (fVar7 <= fVar8) {
          fVar7 = fVar8;
        }
        fVar8 = *(float *)(lVar2 + 0x30 + lVar6 * 4);
        if (fVar8 <= fVar7) {
          fVar8 = fVar7;
        }
        fStack_14 = *(float *)(lVar2 + 0x34 + lVar6 * 4);
        if (fStack_14 <= fVar8) {
          fStack_14 = fVar8;
        }
        lVar1 = lVar6 + 4;
      } while ((uVar5 - uVar4) + -2 != lVar6 + 4);
      lVar6 = lVar6 + 6;
      local_18 = fStack_14;
    }
    if (uVar4 != 0) {
      uVar5 = 0;
      fVar8 = local_18;
      do {
        local_18 = *(float *)(lVar2 + lVar6 * 4 + 0x20 + uVar5 * 4);
        if (local_18 <= fVar8) {
          local_18 = fVar8;
        }
        uVar5 = uVar5 + 1;
        fVar8 = local_18;
      } while (uVar4 != uVar5);
    }
  }
  return local_18;
}


// MiscExtensions$$UpperFirstLetter
// il2cpp: System_String_o* MiscExtensions__UpperFirstLetter (System_String_o* text, const MethodInfo* method);
// 0x3d6f800

System_String_o * MiscExtensions__UpperFirstLetter(System_String_o *text,MethodInfo *method)

{
  uint16_t c;
  bool_conflict bVar1;
  System_String_o *str0;
  System_String_o *str1;
  uint16_t local_1a;
  
  local_1a = 0;
  bVar1 = System_String__op_Equality
                    (text,(System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8),
                     (MethodInfo *)0x0);
  if ((char)bVar1 == '\0') {
    if (text == (System_String_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    if ((text->fields)._stringLength < 2) {
      text = System_String__ToUpper(text,(MethodInfo *)0x0);
    }
    else {
      c = System_String__get_Chars(text,0,(MethodInfo *)0x0);
      if (*(int *)(DAT_057110a8 + 0xe4) == 0) {
        il2cpp_init_class();
      }
      local_1a = System_Char__ToUpper(c,(MethodInfo *)0x0);
      str0 = System_Char__ToString((uint16_t)&local_1a,(MethodInfo *)0x0);
      str1 = System_String__Substring(text,1,(MethodInfo *)0x0);
      text = System_String__Concat(str0,str1,(MethodInfo *)0x0);
    }
  }
  return text;
}


// MiscExtensions$$StripHex
// il2cpp: System_String_o* MiscExtensions__StripHex (System_String_o* text, const MethodInfo* method);
// 0x3d6f8d0

System_String_o * MiscExtensions__StripHex(System_String_o *text,MethodInfo *method)

{
  int iVar1;
  System_Text_RegularExpressions_Regex_o *__this;
  System_String_o *pSVar2;
  
  if (DAT_05702605 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_MiscExtensions);
    il2cpp_init_method_metadata(&"");
    DAT_05702605 = '\x01';
    iVar1 = *(int *)(TypeInfo_MiscExtensions + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_MiscExtensions + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    __this = *(System_Text_RegularExpressions_Regex_o **)(*(long *)(TypeInfo_MiscExtensions + 0xb8) + 0x38);
  }
  else {
    __this = *(System_Text_RegularExpressions_Regex_o **)(*(long *)(TypeInfo_MiscExtensions + 0xb8) + 0x38);
  }
  if (__this != (System_Text_RegularExpressions_Regex_o *)0x0) {
    pSVar2 = System_Text_RegularExpressions_Regex__Replace
                       (__this,text,"",(MethodInfo *)0x0);
    return pSVar2;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// MiscExtensions$$Tokenize
// il2cpp: System_Collections_Generic_List_string__o* MiscExtensions__Tokenize (System_String_o* input, const MethodInfo* method);
// 0x3d6f970

/* WARNING: Removing unreachable block (ram,0x03d6fdb8) */
/* WARNING: Removing unreachable block (ram,0x03d6ff19) */

System_Collections_Generic_List_string__o *
MiscExtensions__Tokenize(System_String_o *input,MethodInfo *method)

{
  int32_t *piVar1;
  byte bVar2;
  ushort uVar3;
  ushort uVar4;
  int iVar5;
  uint uVar6;
  System_Text_RegularExpressions_Regex_o *__this;
  System_Collections_IEnumerator_c *pSVar7;
  Il2CppRuntimeInterfaceOffsetPair *pIVar8;
  System_String_array *pSVar9;
  char cVar10;
  System_Collections_Generic_List_string__o *__this_00;
  System_Text_RegularExpressions_MatchCollection_o *__this_01;
  VirtualInvokeData *pVVar11;
  System_Text_RegularExpressions_Capture_o *__this_02;
  System_String_o *pSVar12;
  long *plVar13;
  undefined8 *puVar14;
  long lVar15;
  long lVar16;
  int iVar17;
  uint16_t local_3e;
  int local_3c;
  System_Collections_IEnumerator_o *local_38;
  
  if (DAT_05702606 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_IDisposable);
    il2cpp_init_method_metadata(&TypeInfo_IEnumerator);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_List_1_System_String);
    il2cpp_init_method_metadata(&TypeInfo_List_string);
    il2cpp_init_method_metadata(&TypeInfo_Match);
    il2cpp_init_method_metadata(&TypeInfo_MiscExtensions);
    DAT_05702606 = '\x01';
  }
  local_3e = 0;
  __this_00 = (System_Collections_Generic_List_string__o *)il2cpp_runtime_glue(TypeInfo_List_string);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,MethodInfo_List_1_System_String);
  if (*(int *)(TypeInfo_MiscExtensions + 0xe4) == 0) {
    il2cpp_init_class();
  }
  __this = *(System_Text_RegularExpressions_Regex_o **)(*(long *)(TypeInfo_MiscExtensions + 0xb8) + 0x50);
  if ((__this != (System_Text_RegularExpressions_Regex_o *)0x0) &&
     (__this_01 = System_Text_RegularExpressions_Regex__Matches(__this,input,(MethodInfo *)0x0),
     __this_01 != (System_Text_RegularExpressions_MatchCollection_o *)0x0)) {
    local_38 = System_Text_RegularExpressions_MatchCollection__GetEnumerator
                         (__this_01,(MethodInfo *)0x0);
    if (local_38 == (System_Collections_IEnumerator_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    iVar17 = 0;
    do {
      pSVar7 = local_38->klass;
      uVar3._0_1_ = (pSVar7->_2).rank;
      uVar3._1_1_ = (pSVar7->_2).minimumAlignment;
      local_3c = iVar17;
      if ((ulong)uVar3 != 0) {
        pIVar8 = (pSVar7->_1).interfaceOffsets;
        lVar15 = 0;
        do {
          if (*(long *)((long)&pIVar8->interfaceType + lVar15) == TypeInfo_IEnumerator) {
            pVVar11 = pSVar7->vtable + *(int *)((long)&pIVar8->offset + lVar15);
            goto LAB_03d6fb13;
          }
          lVar15 = lVar15 + 0x10;
        } while ((ulong)uVar3 << 4 != lVar15);
      }
      pVVar11 = (VirtualInvokeData *)il2cpp_runtime_glue(local_38,TypeInfo_IEnumerator,0);
LAB_03d6fb13:
      cVar10 = (*pVVar11->methodPtr)(local_38,pVVar11->method);
      if (cVar10 == '\0') {
        plVar13 = (long *)il2cpp_runtime_glue(local_38,TypeInfo_IDisposable);
        if (plVar13 == (long *)0x0) goto LAB_03d6fda6;
        lVar15 = *plVar13;
        if ((ulong)*(ushort *)(lVar15 + 0x12e) == 0) goto LAB_03d6fd7f;
        lVar16 = 0;
        goto LAB_03d6fd70;
      }
      pSVar7 = local_38->klass;
      uVar4._0_1_ = (pSVar7->_2).rank;
      uVar4._1_1_ = (pSVar7->_2).minimumAlignment;
      if ((ulong)uVar4 != 0) {
        pIVar8 = (pSVar7->_1).interfaceOffsets;
        lVar15 = 0;
        do {
          if (*(long *)((long)&pIVar8->interfaceType + lVar15) == TypeInfo_IEnumerator) {
            pVVar11 = pSVar7->vtable + (*(int *)((long)&pIVar8->offset + lVar15) + 1);
            goto LAB_03d6fb98;
          }
          lVar15 = lVar15 + 0x10;
        } while ((ulong)uVar4 << 4 != lVar15);
      }
      pVVar11 = (VirtualInvokeData *)il2cpp_runtime_glue(local_38,TypeInfo_IEnumerator,1);
LAB_03d6fb98:
      __this_02 = (System_Text_RegularExpressions_Capture_o *)
                  (*pVVar11->methodPtr)(local_38,pVVar11->method);
      if (__this_02 == (System_Text_RegularExpressions_Capture_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      bVar2 = (TypeInfo_Match->_2).naturalAligment;
      if (((__this_02->klass->_2).naturalAligment < bVar2) ||
         ((__this_02->klass->_2).typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_Match)) {
                    /* WARNING: Subroutine does not return */
        il2cpp_unwind_resume(__this_02);
      }
      iVar5 = (__this_02->fields)._Index_k__BackingField;
      if (input == (System_String_o *)0x0) {
        if (iVar17 < iVar5) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
      }
      else if (__this_00 == (System_Collections_Generic_List_string__o *)0x0) {
        if (iVar17 < iVar5) {
          local_3e = System_String__get_Chars(input,local_3c,(MethodInfo *)0x0);
          if (*(int *)(DAT_057110a8 + 0xe4) == 0) {
            il2cpp_init_class();
          }
          System_Char__ToString((uint16_t)&local_3e,(MethodInfo *)0x0);
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
      }
      else if (iVar17 < iVar5) {
        do {
          local_3e = System_String__get_Chars(input,iVar17,(MethodInfo *)0x0);
          if (*(int *)(DAT_057110a8 + 0xe4) == 0) {
            il2cpp_init_class();
          }
          pSVar12 = System_Char__ToString((uint16_t)&local_3e,(MethodInfo *)0x0);
          lVar15 = MethodInfo_Void_Add;
          piVar1 = &(__this_00->fields)._version;
          *piVar1 = *piVar1 + 1;
          pSVar9 = (__this_00->fields)._items;
          if (pSVar9 == (System_String_array *)0x0) {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          uVar6 = (__this_00->fields)._size;
          if (uVar6 < (uint)pSVar9->max_length) {
            (__this_00->fields)._size = uVar6 + 1;
            pSVar9->m_Items[(int)uVar6] = pSVar12;
            il2cpp_runtime_glue(pSVar9->m_Items + (int)uVar6);
          }
          else {
            System_Collections_Generic_List<object>__AddWithResize
                      ((System_Collections_Generic_List_object__o *)__this_00,
                       (Il2CppObject *)pSVar12,
                       *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
          }
          iVar17 = iVar17 + 1;
        } while (iVar17 < (__this_02->fields)._Index_k__BackingField);
      }
      pSVar12 = System_Text_RegularExpressions_Capture__get_Value(__this_02,(MethodInfo *)0x0);
      lVar15 = MethodInfo_Void_Add;
      if (__this_00 == (System_Collections_Generic_List_string__o *)0x0) {
        local_3c = 0;
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      piVar1 = &(__this_00->fields)._version;
      *piVar1 = *piVar1 + 1;
      pSVar9 = (__this_00->fields)._items;
      if (pSVar9 == (System_String_array *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      uVar6 = (__this_00->fields)._size;
      if (uVar6 < (uint)pSVar9->max_length) {
        (__this_00->fields)._size = uVar6 + 1;
        pSVar9->m_Items[(int)uVar6] = pSVar12;
        il2cpp_runtime_glue(pSVar9->m_Items + (int)uVar6,pSVar12);
      }
      else {
        System_Collections_Generic_List<object>__AddWithResize
                  ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)pSVar12,
                   *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
      }
      iVar17 = (__this_02->fields)._Length_k__BackingField +
               (__this_02->fields)._Index_k__BackingField;
    } while( true );
  }
  goto LAB_03d6fecf;
  while (lVar16 = lVar16 + 0x10, (ulong)*(ushort *)(lVar15 + 0x12e) << 4 != lVar16) {
LAB_03d6fd70:
    if (*(long *)(*(long *)(lVar15 + 0xb0) + lVar16) == TypeInfo_IDisposable) {
      puVar14 = (undefined8 *)
                (lVar15 + (long)*(int *)(*(long *)(lVar15 + 0xb0) + 8 + lVar16) * 0x10 + 0x138);
      goto LAB_03d6fd9d;
    }
  }
LAB_03d6fd7f:
  puVar14 = (undefined8 *)il2cpp_runtime_glue(plVar13,TypeInfo_IDisposable,0);
LAB_03d6fd9d:
  (*(code *)*puVar14)(plVar13,puVar14[1]);
LAB_03d6fda6:
  if (input != (System_String_o *)0x0) {
    iVar17 = (input->fields)._stringLength;
    if (__this_00 == (System_Collections_Generic_List_string__o *)0x0) {
      if (local_3c < iVar17) {
        local_3e = System_String__get_Chars(input,local_3c,(MethodInfo *)0x0);
        if (*(int *)(DAT_057110a8 + 0xe4) == 0) {
          il2cpp_init_class();
        }
        System_Char__ToString((uint16_t)&local_3e,(MethodInfo *)0x0);
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
    }
    else if (local_3c < iVar17) {
      iVar17 = local_3c;
      do {
        local_3e = System_String__get_Chars(input,iVar17,(MethodInfo *)0x0);
        if (*(int *)(DAT_057110a8 + 0xe4) == 0) {
          il2cpp_init_class();
        }
        pSVar12 = System_Char__ToString((uint16_t)&local_3e,(MethodInfo *)0x0);
        lVar15 = MethodInfo_Void_Add;
        piVar1 = &(__this_00->fields)._version;
        *piVar1 = *piVar1 + 1;
        pSVar9 = (__this_00->fields)._items;
        if (pSVar9 == (System_String_array *)0x0) goto LAB_03d6fecf;
        uVar6 = (__this_00->fields)._size;
        if (uVar6 < (uint)pSVar9->max_length) {
          (__this_00->fields)._size = uVar6 + 1;
          pSVar9->m_Items[(int)uVar6] = pSVar12;
          il2cpp_runtime_glue(pSVar9->m_Items + (int)uVar6,pSVar12);
        }
        else {
          System_Collections_Generic_List<object>__AddWithResize
                    ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)pSVar12,
                     *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
        }
        iVar17 = iVar17 + 1;
      } while (iVar17 < (input->fields)._stringLength);
    }
    return __this_00;
  }
LAB_03d6fecf:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// MiscExtensions$$StripRichText
// il2cpp: System_String_o* MiscExtensions__StripRichText (System_String_o* text, const MethodInfo* method);
// 0x3d700e0

System_String_o * MiscExtensions__StripRichText(System_String_o *text,MethodInfo *method)

{
  int iVar1;
  System_Text_RegularExpressions_Regex_o *__this;
  System_String_o *pSVar2;
  
  if (DAT_05702607 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_MiscExtensions);
    il2cpp_init_method_metadata(&"");
    DAT_05702607 = '\x01';
    iVar1 = *(int *)(TypeInfo_MiscExtensions + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_MiscExtensions + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    __this = *(System_Text_RegularExpressions_Regex_o **)(*(long *)(TypeInfo_MiscExtensions + 0xb8) + 0x50);
  }
  else {
    __this = *(System_Text_RegularExpressions_Regex_o **)(*(long *)(TypeInfo_MiscExtensions + 0xb8) + 0x50);
  }
  if (__this != (System_Text_RegularExpressions_Regex_o *)0x0) {
    pSVar2 = System_Text_RegularExpressions_Regex__Replace
                       (__this,text,"",(MethodInfo *)0x0);
    return pSVar2;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// MiscExtensions$$StripIllegalRichText
// il2cpp: System_String_o* MiscExtensions__StripIllegalRichText (System_String_o* text, const MethodInfo* method);
// 0x3d70180

System_String_o * MiscExtensions__StripIllegalRichText(System_String_o *text,MethodInfo *method)

{
  int iVar1;
  System_Text_RegularExpressions_Regex_o *__this;
  System_String_o *pSVar2;
  
  if (DAT_05702608 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_MiscExtensions);
    il2cpp_init_method_metadata(&"");
    DAT_05702608 = '\x01';
    iVar1 = *(int *)(TypeInfo_MiscExtensions + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_MiscExtensions + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    __this = *(System_Text_RegularExpressions_Regex_o **)(*(long *)(TypeInfo_MiscExtensions + 0xb8) + 0x58);
  }
  else {
    __this = *(System_Text_RegularExpressions_Regex_o **)(*(long *)(TypeInfo_MiscExtensions + 0xb8) + 0x58);
  }
  if (__this != (System_Text_RegularExpressions_Regex_o *)0x0) {
    pSVar2 = System_Text_RegularExpressions_Regex__Replace
                       (__this,text,"",(MethodInfo *)0x0);
    return pSVar2;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// MiscExtensions$$ForceWhiteColorTag
// il2cpp: System_String_o* MiscExtensions__ForceWhiteColorTag (System_String_o* text, const MethodInfo* method);
// 0x3d70220

System_String_o * MiscExtensions__ForceWhiteColorTag(System_String_o *text,MethodInfo *method)

{
  int iVar1;
  System_Text_RegularExpressions_Regex_o *__this;
  System_String_o *pSVar2;
  
  if (DAT_05702609 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_MiscExtensions);
    il2cpp_init_method_metadata(&"<color=#FFFFFF>");
    DAT_05702609 = '\x01';
    iVar1 = *(int *)(TypeInfo_MiscExtensions + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_MiscExtensions + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    __this = *(System_Text_RegularExpressions_Regex_o **)(*(long *)(TypeInfo_MiscExtensions + 0xb8) + 0x40);
  }
  else {
    __this = *(System_Text_RegularExpressions_Regex_o **)(*(long *)(TypeInfo_MiscExtensions + 0xb8) + 0x40);
  }
  if (__this != (System_Text_RegularExpressions_Regex_o *)0x0) {
    pSVar2 = System_Text_RegularExpressions_Regex__Replace
                       (__this,text,"<color=#FFFFFF>",(MethodInfo *)0x0);
    return pSVar2;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// MiscExtensions$$StripColor
// il2cpp: System_String_o* MiscExtensions__StripColor (System_String_o* text, const MethodInfo* method);
// 0x3d702c0

System_String_o * MiscExtensions__StripColor(System_String_o *text,MethodInfo *method)

{
  int iVar1;
  System_Text_RegularExpressions_Regex_o *pSVar2;
  System_String_o *pSVar3;
  
  if (DAT_0570260a == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_MiscExtensions);
    il2cpp_init_method_metadata(&"");
    DAT_0570260a = '\x01';
    iVar1 = *(int *)(TypeInfo_MiscExtensions + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_MiscExtensions + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    pSVar2 = *(System_Text_RegularExpressions_Regex_o **)(*(long *)(TypeInfo_MiscExtensions + 0xb8) + 0x40);
  }
  else {
    pSVar2 = *(System_Text_RegularExpressions_Regex_o **)(*(long *)(TypeInfo_MiscExtensions + 0xb8) + 0x40);
  }
  if (pSVar2 != (System_Text_RegularExpressions_Regex_o *)0x0) {
    pSVar3 = System_Text_RegularExpressions_Regex__Replace
                       (pSVar2,text,"",(MethodInfo *)0x0);
    pSVar2 = *(System_Text_RegularExpressions_Regex_o **)(*(long *)(TypeInfo_MiscExtensions + 0xb8) + 0x48);
    if (pSVar2 != (System_Text_RegularExpressions_Regex_o *)0x0) {
      pSVar3 = System_Text_RegularExpressions_Regex__Replace
                         (pSVar2,pSVar3,"",(MethodInfo *)0x0);
      return pSVar3;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// MiscExtensions$$ForceColor
// il2cpp: System_String_o* MiscExtensions__ForceColor (System_String_o* text, UnityEngine_Color_o color, const MethodInfo* method);
// 0x3d70390

System_String_o *
MiscExtensions__ForceColor(System_String_o *text,UnityEngine_Color_o color,MethodInfo *method)

{
  int iVar1;
  System_String_o *pSVar2;
  System_String_o *pSVar3;
  System_String_array *values;
  
  if (DAT_0570260b == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_MiscExtensions);
    il2cpp_init_method_metadata(&TypeInfo_string);
    il2cpp_init_method_metadata(&"<color=#");
    il2cpp_init_method_metadata(&"</color>");
    il2cpp_init_method_metadata(&">");
    DAT_0570260b = '\x01';
  }
  if (*(int *)(TypeInfo_MiscExtensions + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar2 = MiscExtensions__StripColor(text,method);
  pSVar3 = Unity_VisualScripting_XColor__ToHexString(color,(MethodInfo *)0x0);
  if (pSVar3 != (System_String_o *)0x0) {
    iVar1 = (pSVar3->fields)._stringLength;
    if (iVar1 < 3) {
      return pSVar2;
    }
    pSVar3 = System_String__Substring(pSVar3,0,iVar1 + -2,(MethodInfo *)0x0);
    values = (System_String_array *)il2cpp_glue_02274930(TypeInfo_string,5);
    if (values != (System_String_array *)0x0) {
      if ((int)values->max_length != 0) {
        values->m_Items[0] = "<color=#";
        il2cpp_runtime_glue(values->m_Items);
        if (1 < (uint)values->max_length) {
          values->m_Items[1] = pSVar3;
          il2cpp_runtime_glue(values->m_Items + 1,pSVar3);
          if (2 < (uint)values->max_length) {
            values->m_Items[2] = ">";
            il2cpp_runtime_glue(values->m_Items + 2);
            if (3 < (uint)values->max_length) {
              values->m_Items[3] = pSVar2;
              il2cpp_runtime_glue(values->m_Items + 3,pSVar2);
              if (4 < (uint)values->max_length) {
                values->m_Items[4] = "</color>";
                il2cpp_runtime_glue(values->m_Items + 4);
                pSVar2 = System_String__Concat(values,(MethodInfo *)0x0);
                return pSVar2;
              }
            }
          }
        }
      }
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// MiscExtensions$$ForceColor
// il2cpp: System_String_o* MiscExtensions__ForceColor (System_String_o* text, System_String_o* colorHex, const MethodInfo* method);
// 0x3d70530

System_String_o *
MiscExtensions__ForceColor(System_String_o *text,System_String_o *colorHex,MethodInfo *method)

{
  System_String_o *pSVar1;
  System_String_array *values;
  MethodInfo *method_00;
  
  method_00 = (MethodInfo *)colorHex;
  if (DAT_0570260c == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_MiscExtensions);
    il2cpp_init_method_metadata(&TypeInfo_string);
    il2cpp_init_method_metadata(&"<color=#");
    il2cpp_init_method_metadata(&"</color>");
    il2cpp_init_method_metadata(&">");
    DAT_0570260c = '\x01';
  }
  if (*(int *)(TypeInfo_MiscExtensions + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar1 = MiscExtensions__StripColor(text,method_00);
  values = (System_String_array *)il2cpp_glue_02274930(TypeInfo_string,5);
  if (values != (System_String_array *)0x0) {
    if ((int)values->max_length != 0) {
      values->m_Items[0] = "<color=#";
      il2cpp_runtime_glue(values->m_Items);
      if (1 < (uint)values->max_length) {
        values->m_Items[1] = colorHex;
        il2cpp_runtime_glue(values->m_Items + 1,colorHex);
        if (2 < (uint)values->max_length) {
          values->m_Items[2] = ">";
          il2cpp_runtime_glue(values->m_Items + 2);
          if (3 < (uint)values->max_length) {
            values->m_Items[3] = pSVar1;
            il2cpp_runtime_glue(values->m_Items + 3,pSVar1);
            if (4 < (uint)values->max_length) {
              values->m_Items[4] = "</color>";
              il2cpp_runtime_glue(values->m_Items + 4);
              pSVar1 = System_String__Concat(values,(MethodInfo *)0x0);
              return pSVar1;
            }
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// MiscExtensions$$TruncateRichText
// il2cpp: System_String_o* MiscExtensions__TruncateRichText (System_String_o* text, int32_t length, const MethodInfo* method);
// 0x3d70670

System_String_o *
MiscExtensions__TruncateRichText(System_String_o *text,int32_t length,MethodInfo *method)

{
  int iVar1;
  System_Text_RegularExpressions_Regex_o *__this;
  System_Collections_Generic_List_Enumerator_object__o __this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  bool_conflict bVar2;
  int32_t iVar3;
  int iVar4;
  System_String_o *pSVar5;
  System_Collections_Generic_List_string__o *__this_03;
  System_Collections_Generic_Stack_object__o *__this_04;
  System_String_o *pSVar6;
  System_String_o *a;
  System_Char_array *anyOf;
  undefined1 in_stack_ffffffffffffff88 [12];
  System_Collections_Generic_List_Enumerator_T__c *pSVar7;
  System_Collections_Generic_List_Enumerator_T__o local_48;
  
  if (DAT_0570260d == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_char);
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_List_1_T__Enumerator_System_String__GetEnumerato);
    il2cpp_init_method_metadata(&TypeInfo_MiscExtensions);
    il2cpp_init_method_metadata(&MethodInfo_String_Peek);
    il2cpp_init_method_metadata(&MethodInfo_String_Pop);
    il2cpp_init_method_metadata(&MethodInfo_Void_Push);
    il2cpp_init_method_metadata(&MethodInfo_Stack_1_System_String);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    il2cpp_init_method_metadata(&TypeInfo_Stack_string);
    il2cpp_init_method_metadata(&"<");
    il2cpp_init_method_metadata(&"</");
    il2cpp_init_method_metadata(&">");
    DAT_0570260d = '\x01';
  }
  if (*(int *)(TypeInfo_MiscExtensions + 0xe4) == 0) {
    il2cpp_init_class();
    if (DAT_05702608 == '\0') goto LAB_03d707ab;
LAB_03d7077b:
    if (*(int *)(TypeInfo_MiscExtensions + 0xe4) != 0) goto LAB_03d70788;
LAB_03d707d7:
    il2cpp_init_class();
    __this = *(System_Text_RegularExpressions_Regex_o **)(*(long *)(TypeInfo_MiscExtensions + 0xb8) + 0x58);
  }
  else {
    if (DAT_05702608 != '\0') goto LAB_03d7077b;
LAB_03d707ab:
    il2cpp_init_method_metadata(&TypeInfo_MiscExtensions);
    il2cpp_init_method_metadata(&"");
    DAT_05702608 = '\x01';
    if (*(int *)(TypeInfo_MiscExtensions + 0xe4) == 0) goto LAB_03d707d7;
LAB_03d70788:
    __this = *(System_Text_RegularExpressions_Regex_o **)(*(long *)(TypeInfo_MiscExtensions + 0xb8) + 0x58);
  }
  if (__this != (System_Text_RegularExpressions_Regex_o *)0x0) {
    iVar4 = 0;
    pSVar5 = System_Text_RegularExpressions_Regex__Replace
                       (__this,text,"",(MethodInfo *)0x0);
    __this_03 = MiscExtensions__Tokenize(pSVar5,(MethodInfo *)text);
    __this_04 = (System_Collections_Generic_Stack_object__o *)il2cpp_runtime_glue(TypeInfo_Stack_string);
    System_Collections_Generic_Stack<object>___ctor(__this_04,MethodInfo_Stack_1_System_String);
    if (__this_03 != (System_Collections_Generic_List_string__o *)0x0) {
      pSVar5 = (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
      System_Collections_Generic_List<object>__GetEnumerator
                (&local_48,(System_Collections_Generic_List_object__o *)__this_03,MethodInfo_List_1_T__Enumerator_System_String__GetEnumerato);
      pSVar7 = (System_Collections_Generic_List_Enumerator_T__c *)local_48.fields._list;
LAB_03d70896:
      do {
        if (__this_04 == (System_Collections_Generic_Stack_object__o *)0x0) {
          do {
            __this_01.fields._version = length;
            __this_01.fields._list =
                 (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff88._0_8_;
            __this_01.fields._index = in_stack_ffffffffffffff88._8_4_;
            __this_01.fields._current = (Il2CppObject *)pSVar7;
            bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                              (__this_01,(MethodInfo_3185E20 *)&stack0xffffffffffffff98);
            if ((char)bVar2 == '\0') goto LAB_03d70a9f;
            if ((System_String_o *)local_48.fields._current == (System_String_o *)0x0)
            goto LAB_03d70acc;
            if (((System_String_Fields *)((long)local_48.fields._current + 0x10))->_stringLength ==
                1) goto LAB_03d70a50;
            bVar2 = System_String__StartsWith
                              ((System_String_o *)local_48.fields._current,"</",
                               (MethodInfo *)0x0);
            if ((char)bVar2 != '\0') {
              System_String__Substring
                        ((System_String_o *)local_48.fields._current,2,
                         ((System_String_Fields *)((long)local_48.fields._current + 0x10))->
                         _stringLength + -3,(MethodInfo *)0x0);
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
            bVar2 = System_String__StartsWith
                              ((System_String_o *)local_48.fields._current,"<",
                               (MethodInfo *)0x0);
          } while ((char)bVar2 == '\0');
        }
        else {
LAB_03d708b0:
          do {
            __this_00.fields._version = length;
            __this_00.fields._list =
                 (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff88._0_8_;
            __this_00.fields._index = in_stack_ffffffffffffff88._8_4_;
            __this_00.fields._current = (Il2CppObject *)pSVar7;
            bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                              (__this_00,(MethodInfo_3185E20 *)&stack0xffffffffffffff98);
            if ((char)bVar2 == '\0') goto LAB_03d70a9f;
            if ((System_String_o *)local_48.fields._current == (System_String_o *)0x0) {
LAB_03d70acc:
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
            if (((System_String_Fields *)((long)local_48.fields._current + 0x10))->_stringLength ==
                1) goto LAB_03d70a50;
            bVar2 = System_String__StartsWith
                              ((System_String_o *)local_48.fields._current,"</",
                               (MethodInfo *)0x0);
            if ((char)bVar2 != '\0') {
              pSVar6 = System_String__Substring
                                 ((System_String_o *)local_48.fields._current,2,
                                  ((System_String_Fields *)((long)local_48.fields._current + 0x10))
                                  ->_stringLength + -3,(MethodInfo *)0x0);
              if (0 < (__this_04->fields)._size) {
                a = (System_String_o *)
                    System_Collections_Generic_Stack<object>__Peek(__this_04,MethodInfo_String_Peek);
                bVar2 = System_String__op_Equality(a,pSVar6,(MethodInfo *)0x0);
                if ((char)bVar2 != '\0') {
                  System_Collections_Generic_Stack<object>__Pop(__this_04,MethodInfo_String_Pop);
                  pSVar5 = System_String__Concat
                                     (pSVar5,(System_String_o *)local_48.fields._current,
                                      (MethodInfo *)0x0);
                  goto LAB_03d70896;
                }
              }
              goto LAB_03d708b0;
            }
            bVar2 = System_String__StartsWith
                              ((System_String_o *)local_48.fields._current,"<",
                               (MethodInfo *)0x0);
          } while ((char)bVar2 == '\0');
        }
        anyOf = (System_Char_array *)il2cpp_glue_02274930(TypeInfo_char,2);
        if (anyOf == (System_Char_array *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        iVar1 = (int)anyOf->max_length;
        if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        anyOf->m_Items[0] = 0x3d;
        if (iVar1 == 1) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        anyOf->m_Items[1] = 0x3e;
        iVar3 = System_String__IndexOfAny
                          ((System_String_o *)local_48.fields._current,anyOf,(MethodInfo *)0x0);
        pSVar6 = System_String__Substring
                           ((System_String_o *)local_48.fields._current,1,iVar3 + -1,
                            (MethodInfo *)0x0);
        if (__this_04 == (System_Collections_Generic_Stack_object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        System_Collections_Generic_Stack<object>__Push
                  (__this_04,(Il2CppObject *)pSVar6,MethodInfo_Void_Push);
        pSVar5 = System_String__Concat
                           (pSVar5,(System_String_o *)local_48.fields._current,(MethodInfo *)0x0);
      } while( true );
    }
  }
LAB_03d70ca2:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
LAB_03d70a50:
  iVar4 = iVar4 + 1;
  if (length < iVar4) goto LAB_03d70a9f;
  pSVar5 = System_String__Concat
                     (pSVar5,(System_String_o *)local_48.fields._current,(MethodInfo *)0x0);
  goto LAB_03d70896;
LAB_03d70a9f:
  __this_02.fields._version = length;
  __this_02.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff88._0_8_;
  __this_02.fields._index = in_stack_ffffffffffffff88._8_4_;
  __this_02.fields._current = (Il2CppObject *)pSVar7;
  System_Collections_Generic_List_Enumerator<object>__Dispose
            (__this_02,(MethodInfo_3185E10 *)&stack0xffffffffffffff98);
  if (__this_04 != (System_Collections_Generic_Stack_object__o *)0x0) {
    iVar4 = (__this_04->fields)._size;
    while( true ) {
      if (iVar4 < 1) {
        return pSVar5;
      }
      if (__this_04 == (System_Collections_Generic_Stack_object__o *)0x0) break;
      pSVar6 = (System_String_o *)
               System_Collections_Generic_Stack<object>__Pop(__this_04,MethodInfo_String_Pop);
      pSVar5 = System_String__Concat(pSVar5,"</",pSVar6,">",(MethodInfo *)0x0);
      iVar4 = (__this_04->fields)._size;
    }
  }
  goto LAB_03d70ca2;
}


// MiscExtensions$$HexColor
// il2cpp: System_String_o* MiscExtensions__HexColor (System_String_o* text, const MethodInfo* method);
// 0x3d70d00

/* WARNING: Type propagation algorithm not settling */

System_String_o * MiscExtensions__HexColor(System_String_o *text,MethodInfo *method)

{
  int iVar1;
  System_Text_RegularExpressions_Regex_o *__this;
  bool_conflict bVar2;
  int32_t iVar3;
  System_String_o *pSVar4;
  System_String_o *pSVar5;
  
  if (DAT_0570260e == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_MiscExtensions);
    il2cpp_init_method_metadata(&"<color=#");
    il2cpp_init_method_metadata(&"</color>");
    il2cpp_init_method_metadata(&"[");
    il2cpp_init_method_metadata(&"]");
    il2cpp_init_method_metadata(&">");
    DAT_0570260e = '\x01';
    iVar1 = *(int *)(TypeInfo_MiscExtensions + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_MiscExtensions + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  if (DAT_05702607 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_MiscExtensions);
    il2cpp_init_method_metadata(&"");
    DAT_05702607 = '\x01';
    iVar1 = *(int *)(TypeInfo_MiscExtensions + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_MiscExtensions + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    __this = *(System_Text_RegularExpressions_Regex_o **)(*(long *)(TypeInfo_MiscExtensions + 0xb8) + 0x50);
  }
  else {
    __this = *(System_Text_RegularExpressions_Regex_o **)(*(long *)(TypeInfo_MiscExtensions + 0xb8) + 0x50);
  }
  if ((__this != (System_Text_RegularExpressions_Regex_o *)0x0) &&
     (pSVar4 = System_Text_RegularExpressions_Regex__Replace
                         (__this,text,"",(MethodInfo *)0x0),
     pSVar4 != (System_String_o *)0x0)) {
    bVar2 = System_String__Contains(pSVar4,"]",(MethodInfo *)0x0);
    if ((char)bVar2 == '\0') goto LAB_03d70ebc;
    for (pSVar4 = System_String__Replace(pSVar4,"]",">",(MethodInfo *)0x0);
        pSVar4 != (System_String_o *)0x0;
        pSVar4 = System_String__Insert(pSVar4,iVar3,"</color>",(MethodInfo *)0x0)) {
LAB_03d70ebc:
      bVar2 = System_String__Contains(pSVar4,"[",(MethodInfo *)0x0);
      if ((char)bVar2 == '\0') {
        return pSVar4;
      }
      iVar3 = System_String__IndexOf(pSVar4,"[",(MethodInfo *)0x0);
      if ((pSVar4->fields)._stringLength < iVar3 + 7) {
        System_String__Contains(pSVar4,"[",(MethodInfo *)0x0);
        return (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
      }
      pSVar5 = System_String__Substring(pSVar4,iVar3 + 1,6,(MethodInfo *)0x0);
      pSVar4 = System_String__Remove(pSVar4,iVar3,7,(MethodInfo *)0x0);
      pSVar5 = System_String__Concat("<color=#",pSVar5,(MethodInfo *)0x0);
      if ((pSVar4 == (System_String_o *)0x0) ||
         (pSVar4 = System_String__Insert(pSVar4,iVar3,pSVar5,(MethodInfo *)0x0),
         pSVar4 == (System_String_o *)0x0)) break;
      iVar3 = (pSVar4->fields)._stringLength;
      bVar2 = System_String__Contains(pSVar4,"[",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        iVar3 = System_String__IndexOf(pSVar4,"[",(MethodInfo *)0x0);
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// MiscExtensions$$ToEnum<Int32Enum>
// il2cpp: int32_t MiscExtensions__ToEnum_Int32Enum_ (System_String_o* value, bool ignoreCase, const MethodInfo_253F750* method);
// 0x263f750

int32_t MiscExtensions__ToEnum<Int32Enum>
                  (System_String_o *value,bool_conflict ignoreCase,MethodInfo_253F750 *method)

{
  System_RuntimeTypeHandle_o SVar1;
  bool_conflict bVar2;
  MethodInfo_253F750_RGCTXs *pMVar3;
  System_Type_o *pSVar4;
  Il2CppObject *pIVar5;
  Il2CppClass *pIVar6;
  int32_t *piVar7;
  int32_t iVar8;
  
  pMVar3 = method->rgctx_data;
  if (pMVar3 == (MethodInfo_253F750_RGCTXs *)0x0) {
    il2cpp_glue_022c2910(method);
    pMVar3 = method->rgctx_data;
  }
  SVar1.fields.value = (System_RuntimeTypeHandle_Fields)pMVar3->_0_T;
  if (*(int *)(DAT_05711100 + 0xe4) == 0) {
    il2cpp_init_class();
  }
  iVar8 = 0;
  pSVar4 = System_Type__GetTypeFromHandle(SVar1,(MethodInfo *)0x0);
  if (*(int *)(DAT_057110b8 + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar2 = System_Enum__IsDefined(pSVar4,(Il2CppObject *)value,(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    SVar1.fields.value = (System_RuntimeTypeHandle_Fields)method->rgctx_data->_0_T;
    if (*(int *)(DAT_05711100 + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pSVar4 = System_Type__GetTypeFromHandle(SVar1,(MethodInfo *)0x0);
    if (*(int *)(DAT_057110b8 + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pIVar5 = System_Enum__Parse(pSVar4,value,ignoreCase & 0xff,(MethodInfo *)0x0);
    pIVar6 = method->rgctx_data->_1_T;
    if (((pIVar6->_2).field_0x6d & 1) == 0) {
      pIVar6 = (Il2CppClass *)il2cpp_glue_022c28b0(pIVar6);
    }
    if (pIVar5 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    if ((pIVar5->klass->_1).element_class != (pIVar6->_1).element_class) {
                    /* WARNING: Subroutine does not return */
      il2cpp_unwind_resume(pIVar5,pIVar6);
    }
    piVar7 = (int32_t *)il2cpp_glue_022c7330(pIVar5);
    iVar8 = *piVar7;
  }
  return iVar8;
}


// MiscExtensions$$ToEnum<__Il2CppFullySharedGenericType>
// il2cpp: Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o MiscExtensions__ToEnum___Il2CppFullySharedGenericType_ (System_String_o* value, bool ignoreCase, const MethodInfo_253F880* method);
// 0x263f880

/* WARNING: Type propagation algorithm not settling */

Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o
MiscExtensions__ToEnum<__Il2CppFullySharedGenericType>
          (System_String_o *value,bool_conflict ignoreCase,MethodInfo_253F880 *method)

{
  System_RuntimeTypeHandle_o SVar1;
  System_String_o *value_00;
  MethodInfo_253F880 *__dest;
  uint uVar2;
  bool_conflict bVar3;
  ulong uVar4;
  System_Type_o *pSVar5;
  Il2CppObject *pIVar6;
  long lVar7;
  void *__dest_00;
  long in_RCX;
  ulong __n;
  void *extraout_RDX;
  System_RuntimeTypeHandle_Fields *pSVar8;
  void *__s;
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o UVar9;
  undefined8 uStack_60;
  long local_58;
  System_String_o *local_50;
  MethodInfo_253F880 *local_48;
  uint local_3c;
  ulong local_38;
  
  pSVar8 = *(System_RuntimeTypeHandle_Fields **)(in_RCX + 0x38);
  local_50 = value;
  local_48 = method;
  local_3c = ignoreCase;
  if (pSVar8 == (System_RuntimeTypeHandle_Fields *)0x0) {
    uStack_60 = 0x263f8b0;
    il2cpp_glue_022c2910();
    pSVar8 = *(System_RuntimeTypeHandle_Fields **)(in_RCX + 0x38);
  }
  __n = (ulong)*(uint *)(pSVar8[1].value + 0xfc);
  uVar4 = __n + 0xf & 0xfffffffffffffff0;
  __dest_00 = (void *)((long)&local_58 - uVar4);
  __s = (void *)((long)__dest_00 - uVar4);
  local_58 = in_RCX;
  local_38 = __n;
  *(undefined8 *)((long)__s + -8) = 0x263f8ea;
  memset(__s,0,__n);
  SVar1.fields.value = (System_RuntimeTypeHandle_Fields)pSVar8->value;
  if (*(int *)(DAT_05711100 + 0xe4) == 0) {
    *(undefined8 *)((long)__s + -8) = 0x263f90a;
    il2cpp_init_class();
  }
  *(undefined8 *)((long)__s + -8) = 0x263f914;
  pSVar5 = System_Type__GetTypeFromHandle(SVar1,(MethodInfo *)0x0);
  if (*(int *)(DAT_057110b8 + 0xe4) == 0) {
    *(undefined8 *)((long)__s + -8) = 0x263f92c;
    il2cpp_init_class();
  }
  value_00 = local_50;
  *(undefined8 *)((long)__s + -8) = 0x263f93d;
  bVar3 = System_Enum__IsDefined(pSVar5,(Il2CppObject *)value_00,(MethodInfo *)0x0);
  uVar4 = local_38;
  if ((char)bVar3 == '\0') {
    *(undefined8 *)((long)__s + -8) = 0x263f9ea;
    memset(__s,0,uVar4);
    *(undefined8 *)((long)__s + -8) = 0x263f9f8;
    memcpy(__dest_00,__s,uVar4);
  }
  else {
    SVar1.fields.value =
         (System_RuntimeTypeHandle_Fields)
         (*(System_RuntimeTypeHandle_Fields **)(local_58 + 0x38))->value;
    if (*(int *)(DAT_05711100 + 0xe4) == 0) {
      *(undefined8 *)((long)__s + -8) = 0x263f96f;
      il2cpp_init_class();
    }
    *(undefined8 *)((long)__s + -8) = 0x263f979;
    pSVar5 = System_Type__GetTypeFromHandle(SVar1,(MethodInfo *)0x0);
    if (*(int *)(DAT_057110b8 + 0xe4) == 0) {
      *(undefined8 *)((long)__s + -8) = 0x263f991;
      il2cpp_init_class();
    }
    uVar2 = local_3c;
    *(undefined8 *)((long)__s + -8) = 0x263f9a2;
    pIVar6 = System_Enum__Parse(pSVar5,value_00,uVar2 & 0xff,(MethodInfo *)0x0);
    lVar7 = *(long *)(*(long *)(local_58 + 0x38) + 8);
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
      *(undefined8 *)((long)__s + -8) = 0x263f9be;
      lVar7 = il2cpp_glue_022c28b0(lVar7);
    }
    uVar4 = local_38;
    *(undefined8 *)((long)__s + -8) = 0x263f9d0;
    __dest_00 = (void *)il2cpp_glue_02274a70(pIVar6,lVar7,__dest_00);
  }
  __dest = local_48;
  *(undefined8 *)((long)__s + -8) = 0x263fa07;
  UVar9.klass = memcpy(__dest,__dest_00,uVar4);
  UVar9.monitor = extraout_RDX;
  return UVar9;
}


// MiscExtensions$$ParseFloat
// il2cpp: float MiscExtensions__ParseFloat (System_String_o* str, const MethodInfo* method);
// 0x3d70fc0

float MiscExtensions__ParseFloat(System_String_o *str,MethodInfo *method)

{
  float fVar1;
  
  fVar1 = System_Single__Parse(str,(MethodInfo *)0x0);
  return fVar1;
}


// MiscExtensions$$IsGray
// il2cpp: bool MiscExtensions__IsGray (UnityEngine_Color_o color, const MethodInfo* method);
// 0x3d70fd0

bool_conflict MiscExtensions__IsGray(UnityEngine_Color_o color,MethodInfo *method)

{
  uint uVar1;
  float fVar2;
  
  fVar2 = color.fields.r;
  uVar1 = 0;
  if (fVar2 == color.fields.g) {
    uVar1 = 0;
    if ((fVar2 == color.fields.b) && (!NAN(fVar2) && !NAN(color.fields.b))) {
      uVar1 = -(uint)(color.fields.a == 1.0) & 1;
    }
  }
  return uVar1;
}


// MiscExtensions$$IsGray
// il2cpp: bool MiscExtensions__IsGray (Utility_Color255_o* color, const MethodInfo* method);
// 0x3d71000

bool_conflict MiscExtensions__IsGray(Utility_Color255_o *color,MethodInfo *method)

{
  int iVar1;
  
  if (color == (Utility_Color255_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  iVar1 = (color->fields).R;
  if ((iVar1 == (color->fields).G) && (iVar1 == (color->fields).B)) {
    return CONCAT31((int3)((uint)iVar1 >> 8),(color->fields).A == 0xff);
  }
  return 0;
}


// MiscExtensions$$GetRandomItem<int>
// il2cpp: int32_t MiscExtensions__GetRandomItem_int_ (System_Collections_Generic_List_T__o* list, const MethodInfo_253F600* method);
// 0x263f600

int32_t MiscExtensions__GetRandomItem<int>
                  (System_Collections_Generic_List_T__o *list,MethodInfo_253F600 *method)

{
  int32_t iVar1;
  
  if (method->rgctx_data == (MethodInfo_253F600_RGCTXs *)0x0) {
    il2cpp_glue_022c2910();
  }
  if (list != (System_Collections_Generic_List_T__o *)0x0) {
    iVar1 = UnityEngine_Random__Range(0,(list->fields)._size,(MethodInfo *)0x0);
    iVar1 = System_Collections_Generic_List<int>__get_Item
                      ((System_Collections_Generic_List_int__o *)list,iVar1,
                       (MethodInfo_3578E10 *)
                       method->rgctx_data->_2_System_Collections_Generic_List_T__get_Item);
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// MiscExtensions$$GetRandomItem<object>
// il2cpp: Il2CppObject* MiscExtensions__GetRandomItem_object_ (System_Collections_Generic_List_T__o* list, const MethodInfo_253F650* method);
// 0x263f650

Il2CppObject *
MiscExtensions__GetRandomItem<object>
          (System_Collections_Generic_List_T__o *list,MethodInfo_253F650 *method)

{
  int32_t index;
  Il2CppObject *pIVar1;
  
  if (method->rgctx_data == (MethodInfo_253F650_RGCTXs *)0x0) {
    il2cpp_glue_022c2910();
  }
  if (list != (System_Collections_Generic_List_T__o *)0x0) {
    index = UnityEngine_Random__Range(0,(list->fields)._size,(MethodInfo *)0x0);
    pIVar1 = System_Collections_Generic_List<object>__get_Item
                       ((System_Collections_Generic_List_object__o *)list,index,
                        (MethodInfo_35A7000 *)
                        method->rgctx_data->_2_System_Collections_Generic_List_T__get_Item);
    return pIVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// MiscExtensions$$GetRandomItem<__Il2CppFullySharedGenericType>
// il2cpp: Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o MiscExtensions__GetRandomItem___Il2CppFullySharedGenericType_ (System_Collections_Generic_List_T__o* list, const MethodInfo_253F6A0* method);
// 0x263f6a0

Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o
MiscExtensions__GetRandomItem<__Il2CppFullySharedGenericType>
          (System_Collections_Generic_List_T__o *list,MethodInfo_253F6A0 *method)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  int32_t maxExclusive;
  long lVar5;
  long in_RDX;
  void *extraout_RDX;
  void *__src;
  ulong __n;
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o UVar6;
  undefined8 uStack_50;
  int32_t *local_48;
  void *local_40;
  int32_t local_34;
  
  lVar5 = *(long *)(in_RDX + 0x38);
  if (lVar5 == 0) {
    uStack_50 = 0x263f6cb;
    il2cpp_glue_022c2910();
    lVar5 = *(long *)(in_RDX + 0x38);
  }
  __n = (ulong)*(uint *)(*(long *)(lVar5 + 0x18) + 0xfc);
  lVar4 = -(__n + 0xf & 0xfffffffffffffff0);
  __src = (void *)((long)&local_48 + lVar4);
  if (list != (System_Collections_Generic_List_T__o *)0x0) {
    pcVar1 = (code *)**(undefined8 **)(lVar5 + 8);
    *(undefined8 *)((long)&uStack_50 + lVar4) = 0x263f6f9;
    maxExclusive = (*pcVar1)();
    *(undefined8 *)((long)&uStack_50 + lVar4) = 0x263f704;
    local_34 = UnityEngine_Random__Range(0,maxExclusive,(MethodInfo *)0x0);
    puVar2 = *(undefined8 **)(*(long *)(in_RDX + 0x38) + 0x10);
    uVar3 = *puVar2;
    local_48 = &local_34;
    pcVar1 = (code *)puVar2[2];
    local_40 = __src;
    *(undefined8 *)((long)&uStack_50 + lVar4) = 0x263f72b;
    (*pcVar1)(uVar3,puVar2,list,&local_48,__src);
    *(undefined8 *)((long)&uStack_50 + lVar4) = 0x263f739;
    UVar6.klass = memcpy(method,__src,__n);
    UVar6.monitor = extraout_RDX;
    return UVar6;
  }
                    /* WARNING: Subroutine does not return */
  *(undefined **)((long)&uStack_50 + lVar4) = &UNK_0263f74d;
  il2cpp_raise_exception();
}


// MiscExtensions$$GetRandomItem
// il2cpp: SimpleJSONFixed_JSONNode_o* MiscExtensions__GetRandomItem (SimpleJSONFixed_JSONNode_o* list, const MethodInfo* method);
// 0x3d71030

SimpleJSONFixed_JSONNode_o *
MiscExtensions__GetRandomItem(SimpleJSONFixed_JSONNode_o *list,MethodInfo *method)

{
  SimpleJSONFixed_JSONNode_c *pSVar1;
  Il2CppMethodPointer vtable_dispatch;
  int32_t maxExclusive;
  uint uVar2;
  SimpleJSONFixed_JSONNode_o *pSVar3;
  
  if (list != (SimpleJSONFixed_JSONNode_o *)0x0) {
    maxExclusive = (*(list->klass->vtable)._11_get_Count.methodPtr)
                             (list,(list->klass->vtable)._11_get_Count.method);
    uVar2 = UnityEngine_Random__Range(0,maxExclusive,(MethodInfo *)0x0);
    pSVar1 = list->klass;
    vtable_dispatch = (pSVar1->vtable)._5_get_Item.methodPtr;
    pSVar3 = (SimpleJSONFixed_JSONNode_o *)
             (*vtable_dispatch)
                       (list,(ulong)uVar2,(pSVar1->vtable)._5_get_Item.method,pSVar1,
                        vtable_dispatch);
    return pSVar3;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// MiscExtensions$$ToColor
// il2cpp: UnityEngine_Color_o MiscExtensions__ToColor (SimpleJSONFixed_JSONNode_o* array, const MethodInfo* method);
// 0x3d71080

UnityEngine_Color_o MiscExtensions__ToColor(SimpleJSONFixed_JSONNode_o *array,MethodInfo *method)

{
  int32_t r;
  int32_t g;
  int32_t b;
  int32_t a;
  long *plVar1;
  Utility_Color255_o *__this;
  UnityEngine_Color_Fields UVar2;
  
  if (DAT_0570260f == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Color255);
    DAT_0570260f = '\x01';
  }
  if (array != (SimpleJSONFixed_JSONNode_o *)0x0) {
    plVar1 = (long *)(*(array->klass->vtable)._5_get_Item.methodPtr)
                               (array,0,(array->klass->vtable)._5_get_Item.method);
    if (plVar1 != (long *)0x0) {
      r = (**(code **)(*plVar1 + 0x368))(plVar1,*(undefined8 *)(*plVar1 + 0x370));
      plVar1 = (long *)(*(array->klass->vtable)._5_get_Item.methodPtr)
                                 (array,1,(array->klass->vtable)._5_get_Item.method);
      if (plVar1 != (long *)0x0) {
        g = (**(code **)(*plVar1 + 0x368))(plVar1,*(undefined8 *)(*plVar1 + 0x370));
        plVar1 = (long *)(*(array->klass->vtable)._5_get_Item.methodPtr)
                                   (array,2,(array->klass->vtable)._5_get_Item.method);
        if (plVar1 != (long *)0x0) {
          b = (**(code **)(*plVar1 + 0x368))(plVar1,*(undefined8 *)(*plVar1 + 0x370));
          plVar1 = (long *)(*(array->klass->vtable)._5_get_Item.methodPtr)
                                     (array,3,(array->klass->vtable)._5_get_Item.method);
          if (plVar1 != (long *)0x0) {
            a = (**(code **)(*plVar1 + 0x368))(plVar1,*(undefined8 *)(*plVar1 + 0x370));
            __this = (Utility_Color255_o *)il2cpp_runtime_glue(TypeInfo_Color255);
            Utility_Color255___ctor(__this,r,g,b,a,(MethodInfo *)0x0);
            if (__this != (Utility_Color255_o *)0x0) {
              UVar2 = (UnityEngine_Color_Fields)Utility_Color255__ToColor(__this,(MethodInfo *)0x0);
              return (UnityEngine_Color_o)UVar2;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// MiscExtensions$$GetPlayerInfo
// il2cpp: GameManagers_PlayerInfo_o* MiscExtensions__GetPlayerInfo (Photon_Realtime_Player_o* player, const MethodInfo* method);
// 0x3d711d0

GameManagers_PlayerInfo_o *
MiscExtensions__GetPlayerInfo(Photon_Realtime_Player_o *player,MethodInfo *method)

{
  int iVar1;
  System_Collections_Generic_Dictionary_int__object__o *pSVar2;
  bool_conflict bVar3;
  GameManagers_PlayerInfo_o *pGVar4;
  
  if (DAT_05702610 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ContainsKey);
    il2cpp_init_method_metadata(&MethodInfo_PlayerInfo_get_Item);
    il2cpp_init_method_metadata(&TypeInfo_InGameManager);
    DAT_05702610 = '\x01';
    iVar1 = *(int *)(TypeInfo_InGameManager + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_InGameManager + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  if ((player != (Photon_Realtime_Player_o *)0x0) &&
     (pSVar2 = *(System_Collections_Generic_Dictionary_int__object__o **)
                (*(long *)(TypeInfo_InGameManager + 0xb8) + 0x18),
     pSVar2 != (System_Collections_Generic_Dictionary_int__object__o *)0x0)) {
    bVar3 = System_Collections_Generic_Dictionary<int__object>__ContainsKey
                      (pSVar2,(player->fields).actorNumber,MethodInfo_Boolean_ContainsKey);
    if ((char)bVar3 == '\0') {
      return (GameManagers_PlayerInfo_o *)0x0;
    }
    if (*(int *)(TypeInfo_InGameManager + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pSVar2 = *(System_Collections_Generic_Dictionary_int__object__o **)
              (*(long *)(TypeInfo_InGameManager + 0xb8) + 0x18);
    if (pSVar2 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
      pGVar4 = (GameManagers_PlayerInfo_o *)
               System_Collections_Generic_Dictionary<int__object>__get_Item
                         (pSVar2,(player->fields).actorNumber,MethodInfo_PlayerInfo_get_Item);
      return pGVar4;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// MiscExtensions$$ReverseString
// il2cpp: System_String_o* MiscExtensions__ReverseString (System_String_o* s, const MethodInfo* method);
// 0x3d712e0

System_String_o * MiscExtensions__ReverseString(System_String_o *s,MethodInfo *method)

{
  System_Char_array *array;
  System_String_o *pSVar1;
  
  if (DAT_05702611 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Reverse_Char);
    DAT_05702611 = '\x01';
  }
  if (s != (System_String_o *)0x0) {
    array = System_String__ToCharArray(s,(MethodInfo *)0x0);
    System_Array__Reverse<char>(array,MethodInfo_Void_Reverse_Char);
    pSVar1 = System_String__CreateString((System_String_o *)0x0,array,(MethodInfo *)0x0);
    return pSVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// MiscExtensions$$.cctor
// il2cpp: void MiscExtensions___cctor (const MethodInfo* method);
// 0x3d71340

void MiscExtensions___cctor(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Collections_Generic_IEqualityComparer_TKey__o *comparer;
  System_Text_RegularExpressions_Regex_o *pSVar3;
  System_String_array *values;
  System_String_o *pSVar4;
  System_Collections_Generic_Dictionary_object__object__o *__this;
  
  if (DAT_05702612 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_System_String_System_String);
    il2cpp_init_method_metadata(&TypeInfo_Dictionary_string__string);
    il2cpp_init_method_metadata(&TypeInfo_MiscExtensions);
    il2cpp_init_method_metadata(&TypeInfo_Regex);
    il2cpp_init_method_metadata(&TypeInfo_StringComparer);
    il2cpp_init_method_metadata(&TypeInfo_string);
    il2cpp_init_method_metadata(&"<color=(\\w+)>");
    il2cpp_init_method_metadata(&"#808080ff");
    il2cpp_init_method_metadata(&"(</color>)");
    il2cpp_init_method_metadata(&"#a52a2aff");
    il2cpp_init_method_metadata(&"teal");
    il2cpp_init_method_metadata(&"magenta");
    il2cpp_init_method_metadata(&"darkblue");
    il2cpp_init_method_metadata(&"(\\[)([A-Fa-f0-9]{3}|[A-Fa-f0-9]{6})(\\])");
    il2cpp_init_method_metadata(&"lightblue");
    il2cpp_init_method_metadata(&"brown");
    il2cpp_init_method_metadata(&"#008080ff");
    il2cpp_init_method_metadata(&"grey");
    il2cpp_init_method_metadata(&"<\\/?material.*?>");
    il2cpp_init_method_metadata(&"olive");
    il2cpp_init_method_metadata(&"#0000a0ff");
    il2cpp_init_method_metadata(&"#c0c0c0ff");
    il2cpp_init_method_metadata(&"(<color=#)([A-Fa-f0-9]{3}|[A-Fa-f0-9]{6})(>)");
    il2cpp_init_method_metadata(&"#ff00ffff");
    il2cpp_init_method_metadata(&"silver");
    il2cpp_init_method_metadata(&"#00ff00ff");
    il2cpp_init_method_metadata(&"|");
    il2cpp_init_method_metadata(&"aqua");
    il2cpp_init_method_metadata(&"#00ffffff");
    il2cpp_init_method_metadata(&"<\\/?size.*?>");
    il2cpp_init_method_metadata(&"#add8e6ff");
    il2cpp_init_method_metadata(&"lime");
    il2cpp_init_method_metadata(&"#000080ff");
    il2cpp_init_method_metadata(&"navy");
    il2cpp_init_method_metadata(&"fuchsia");
    il2cpp_init_method_metadata(&"#808000ff");
    il2cpp_init_method_metadata(&"cyan");
    il2cpp_init_method_metadata(&"<\\/?[^>]+>");
    il2cpp_init_method_metadata(&"<\\/?quad.*?>");
    il2cpp_init_method_metadata(&"maroon");
    il2cpp_init_method_metadata(&"#800000ff");
    DAT_05702612 = '\x01';
  }
  **(undefined8 **)(TypeInfo_MiscExtensions + 0xb8) = "(\\[)([A-Fa-f0-9]{3}|[A-Fa-f0-9]{6})(\\])";
  il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_MiscExtensions + 0xb8),"(\\[)([A-Fa-f0-9]{3}|[A-Fa-f0-9]{6})(\\])");
  lVar2 = *(long *)(TypeInfo_MiscExtensions + 0xb8);
  *(undefined8 *)(lVar2 + 8) = "(<color=#)([A-Fa-f0-9]{3}|[A-Fa-f0-9]{6})(>)";
  il2cpp_runtime_glue(lVar2 + 8);
  lVar2 = *(long *)(TypeInfo_MiscExtensions + 0xb8);
  *(undefined8 *)(lVar2 + 0x10) = "(</color>)";
  il2cpp_runtime_glue(lVar2 + 0x10);
  lVar2 = *(long *)(TypeInfo_MiscExtensions + 0xb8);
  *(undefined8 *)(lVar2 + 0x18) = "<\\/?[^>]+>";
  il2cpp_runtime_glue(lVar2 + 0x18);
  lVar2 = *(long *)(TypeInfo_MiscExtensions + 0xb8);
  *(undefined8 *)(lVar2 + 0x20) = "<\\/?size.*?>";
  il2cpp_runtime_glue(lVar2 + 0x20);
  lVar2 = *(long *)(TypeInfo_MiscExtensions + 0xb8);
  *(undefined8 *)(lVar2 + 0x28) = "<\\/?material.*?>";
  il2cpp_runtime_glue(lVar2 + 0x28);
  lVar2 = *(long *)(TypeInfo_MiscExtensions + 0xb8);
  *(undefined8 *)(lVar2 + 0x30) = "<\\/?quad.*?>";
  il2cpp_runtime_glue(lVar2 + 0x30);
  pSVar4 = (System_String_o *)**(undefined8 **)(TypeInfo_MiscExtensions + 0xb8);
  pSVar3 = (System_Text_RegularExpressions_Regex_o *)il2cpp_runtime_glue(TypeInfo_Regex);
  System_Text_RegularExpressions_Regex___ctor(pSVar3,pSVar4,(MethodInfo *)0x0);
  lVar2 = *(long *)(TypeInfo_MiscExtensions + 0xb8);
  *(System_Text_RegularExpressions_Regex_o **)(lVar2 + 0x38) = pSVar3;
  il2cpp_runtime_glue(lVar2 + 0x38,pSVar3);
  pSVar4 = *(System_String_o **)(*(long *)(TypeInfo_MiscExtensions + 0xb8) + 8);
  pSVar3 = (System_Text_RegularExpressions_Regex_o *)il2cpp_runtime_glue(TypeInfo_Regex);
  System_Text_RegularExpressions_Regex___ctor(pSVar3,pSVar4,(MethodInfo *)0x0);
  lVar2 = *(long *)(TypeInfo_MiscExtensions + 0xb8);
  *(System_Text_RegularExpressions_Regex_o **)(lVar2 + 0x40) = pSVar3;
  il2cpp_runtime_glue(lVar2 + 0x40,pSVar3);
  pSVar4 = *(System_String_o **)(*(long *)(TypeInfo_MiscExtensions + 0xb8) + 0x10);
  pSVar3 = (System_Text_RegularExpressions_Regex_o *)il2cpp_runtime_glue(TypeInfo_Regex);
  System_Text_RegularExpressions_Regex___ctor(pSVar3,pSVar4,(MethodInfo *)0x0);
  lVar2 = *(long *)(TypeInfo_MiscExtensions + 0xb8);
  *(System_Text_RegularExpressions_Regex_o **)(lVar2 + 0x48) = pSVar3;
  il2cpp_runtime_glue(lVar2 + 0x48,pSVar3);
  pSVar4 = *(System_String_o **)(*(long *)(TypeInfo_MiscExtensions + 0xb8) + 0x18);
  pSVar3 = (System_Text_RegularExpressions_Regex_o *)il2cpp_runtime_glue(TypeInfo_Regex);
  System_Text_RegularExpressions_Regex___ctor(pSVar3,pSVar4,(MethodInfo *)0x0);
  lVar2 = *(long *)(TypeInfo_MiscExtensions + 0xb8);
  *(System_Text_RegularExpressions_Regex_o **)(lVar2 + 0x50) = pSVar3;
  il2cpp_runtime_glue(lVar2 + 0x50,pSVar3);
  values = (System_String_array *)il2cpp_glue_02274930(TypeInfo_string,5);
  if (values == (System_String_array *)0x0) goto LAB_03d71b2a;
  if ((int)values->max_length == 0) {
LAB_03d71b25:
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  values->m_Items[0] = *(System_String_o **)(*(long *)(TypeInfo_MiscExtensions + 0xb8) + 0x20);
  il2cpp_runtime_glue(values->m_Items);
  if ((uint)values->max_length < 2) goto LAB_03d71b25;
  values->m_Items[1] = "|";
  il2cpp_runtime_glue(values->m_Items + 1);
  if ((uint)values->max_length < 3) goto LAB_03d71b25;
  values->m_Items[2] = *(System_String_o **)(*(long *)(TypeInfo_MiscExtensions + 0xb8) + 0x28);
  il2cpp_runtime_glue(values->m_Items + 2);
  if ((uint)values->max_length < 4) goto LAB_03d71b25;
  values->m_Items[3] = "|";
  il2cpp_runtime_glue(values->m_Items + 3);
  if ((uint)values->max_length < 5) goto LAB_03d71b25;
  values->m_Items[4] = *(System_String_o **)(*(long *)(TypeInfo_MiscExtensions + 0xb8) + 0x30);
  il2cpp_runtime_glue(values->m_Items + 4);
  pSVar4 = System_String__Concat(values,(MethodInfo *)0x0);
  pSVar3 = (System_Text_RegularExpressions_Regex_o *)il2cpp_runtime_glue(TypeInfo_Regex);
  System_Text_RegularExpressions_Regex___ctor(pSVar3,pSVar4,(MethodInfo *)0x0);
  lVar2 = *(long *)(TypeInfo_MiscExtensions + 0xb8);
  *(System_Text_RegularExpressions_Regex_o **)(lVar2 + 0x58) = pSVar3;
  il2cpp_runtime_glue(lVar2 + 0x58,pSVar3);
  pSVar3 = (System_Text_RegularExpressions_Regex_o *)il2cpp_runtime_glue(TypeInfo_Regex);
  System_Text_RegularExpressions_Regex___ctor(pSVar3,"<color=(\\w+)>",9,(MethodInfo *)0x0);
  lVar2 = *(long *)(TypeInfo_MiscExtensions + 0xb8);
  *(System_Text_RegularExpressions_Regex_o **)(lVar2 + 0x60) = pSVar3;
  il2cpp_runtime_glue(lVar2 + 0x60,pSVar3);
  if (*(int *)(TypeInfo_StringComparer + 0xe4) == 0) {
    il2cpp_init_class();
    if (DAT_0570136f != '\0') goto LAB_03d718c4;
LAB_03d71af5:
    il2cpp_init_method_metadata(&TypeInfo_StringComparer);
    DAT_0570136f = '\x01';
    iVar1 = *(int *)(TypeInfo_StringComparer + 0xe4);
  }
  else {
    if (DAT_0570136f == '\0') goto LAB_03d71af5;
LAB_03d718c4:
    iVar1 = *(int *)(TypeInfo_StringComparer + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  comparer = *(System_Collections_Generic_IEqualityComparer_TKey__o **)
              (*(long *)(TypeInfo_StringComparer + 0xb8) + 0x18);
  __this = (System_Collections_Generic_Dictionary_object__object__o *)
           il2cpp_runtime_glue(TypeInfo_Dictionary_string__string);
  System_Collections_Generic_Dictionary<object__object>___ctor(__this,comparer,MethodInfo_Dictionary_2_System_String_System_String);
  if (__this != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    System_Collections_Generic_Dictionary<object__object>__Add
              (__this,"aqua","#00ffffff",MethodInfo_Void_Add);
    System_Collections_Generic_Dictionary<object__object>__Add
              (__this,"cyan","#00ffffff",MethodInfo_Void_Add);
    System_Collections_Generic_Dictionary<object__object>__Add
              (__this,"brown","#a52a2aff",MethodInfo_Void_Add);
    System_Collections_Generic_Dictionary<object__object>__Add
              (__this,"darkblue","#0000a0ff",MethodInfo_Void_Add);
    System_Collections_Generic_Dictionary<object__object>__Add
              (__this,"fuchsia","#ff00ffff",MethodInfo_Void_Add);
    System_Collections_Generic_Dictionary<object__object>__Add
              (__this,"magenta","#ff00ffff",MethodInfo_Void_Add);
    System_Collections_Generic_Dictionary<object__object>__Add
              (__this,"grey","#808080ff",MethodInfo_Void_Add);
    System_Collections_Generic_Dictionary<object__object>__Add
              (__this,"lightblue","#add8e6ff",MethodInfo_Void_Add);
    System_Collections_Generic_Dictionary<object__object>__Add
              (__this,"lime","#00ff00ff",MethodInfo_Void_Add);
    System_Collections_Generic_Dictionary<object__object>__Add
              (__this,"maroon","#800000ff",MethodInfo_Void_Add);
    System_Collections_Generic_Dictionary<object__object>__Add
              (__this,"navy","#000080ff",MethodInfo_Void_Add);
    System_Collections_Generic_Dictionary<object__object>__Add
              (__this,"olive","#808000ff",MethodInfo_Void_Add);
    System_Collections_Generic_Dictionary<object__object>__Add
              (__this,"silver","#c0c0c0ff",MethodInfo_Void_Add);
    System_Collections_Generic_Dictionary<object__object>__Add
              (__this,"teal","#008080ff",MethodInfo_Void_Add);
    lVar2 = *(long *)(TypeInfo_MiscExtensions + 0xb8);
    *(System_Collections_Generic_Dictionary_object__object__o **)(lVar2 + 0x68) = __this;
    il2cpp_runtime_glue(lVar2 + 0x68,__this);
    return;
  }
LAB_03d71b2a:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


