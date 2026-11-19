// Type: MiscExtensions
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Scripts/MiscExtensions.cs
// Prior real C# source (older reference): Assets/Scripts/Utility/Extensions/MiscExtensions.cs
// --------------------------------

// MiscExtensions.<>c$$.cctor
// il2cpp: void MiscExtensions___c___cctor (const MethodInfo* method);
// 0x5851100

void MiscExtensions___c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (Il2CppMethodInitialized_0754504a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_MiscExtensions_c);
    Il2CppMethodInitialized_0754504a = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_MiscExtensions_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  TypeInfo_MiscExtensions_c->static_fields->__9 = (MiscExtensions___c_o *)__this;
  Il2CppCodeGenWriteBarrier(&TypeInfo_MiscExtensions_c->static_fields->__9);
  return;
}


// MiscExtensions.<>c$$.ctor
// il2cpp: void MiscExtensions___c___ctor (MiscExtensions___c_o* __this, const MethodInfo* method);
// 0x5851170

void MiscExtensions___c___ctor(MiscExtensions___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// MiscExtensions.<>c$$<ReplaceNamedColorTags>b__15_0
// il2cpp: System_String_o* MiscExtensions___c___ReplaceNamedColorTags_b__15_0 (MiscExtensions___c_o* __this, System_Text_RegularExpressions_Match_o* match, const MethodInfo* method);
// 0x5851180

System_String_o *
MiscExtensions___c___ReplaceNamedColorTags_b__15_0
          (MiscExtensions___c_o *__this,System_Text_RegularExpressions_Match_o *match,MethodInfo *method)

{
  bool bVar1;
  System_Text_RegularExpressions_GroupCollection_o *__this_00;
  System_Text_RegularExpressions_Group_o *__this_01;
  System_String_o *pSVar2;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_0754504b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_MiscExtensions);
    il2cpp_codegen_initialize_runtime_metadata(&"<color=#");
    il2cpp_codegen_initialize_runtime_metadata(&">");
    Il2CppMethodInitialized_0754504b = '\x01';
  }
  if (match != (System_Text_RegularExpressions_Match_o *)0x0) {
    __this_00 = (*(match->klass->vtable)._5_get_Groups.methodPtr)
                          (match,(match->klass->vtable)._5_get_Groups.method);
    if (__this_00 != (System_Text_RegularExpressions_GroupCollection_o *)0x0) {
      __this_01 = System_Text_RegularExpressions_GroupCollection__get_Item(__this_00,1,(MethodInfo *)0x0);
      if (__this_01 != (System_Text_RegularExpressions_Group_o *)0x0) {
        method_00 = (MethodInfo *)0x0;
        pSVar2 = System_Text_RegularExpressions_Capture__get_Value
                           ((System_Text_RegularExpressions_Capture_o *)__this_01,(MethodInfo *)0x0);
        if ((TypeInfo_MiscExtensions->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_MiscExtensions);
        }
        pSVar2 = MiscExtensions__ResolveNamedColorHex(pSVar2,method_00);
        bVar1 = System_String__IsNullOrEmpty(pSVar2,(MethodInfo *)0x0);
        if (bVar1) {
          pSVar2 = System_Text_RegularExpressions_Capture__get_Value
                             ((System_Text_RegularExpressions_Capture_o *)match,(MethodInfo *)0x0);
          return pSVar2;
        }
        pSVar2 = System_String__Concat_5301f10
                           ("<color=#",pSVar2,">",(MethodInfo *)0x0);
        return pSVar2;
      }
    }
  }
  ThrowNullReferenceException();
}


// MiscExtensions$$ResolveNamedColorHex
// il2cpp: System_String_o* MiscExtensions__ResolveNamedColorHex (System_String_o* name, const MethodInfo* method);
// 0x584e640

System_String_o * MiscExtensions__ResolveNamedColorHex(System_String_o *name,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this;
  bool bVar1;
  System_String_o *pSVar2;
  System_String_o *local_18;
  
  if (Il2CppMethodInitialized_07545036 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_string_TryGetValue);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_MiscExtensions);
    il2cpp_codegen_initialize_runtime_metadata(&"#");
    Il2CppMethodInitialized_07545036 = '\x01';
  }
  local_18 = (System_String_o *)0x0;
  bVar1 = System_String__IsNullOrEmpty(name,(MethodInfo *)0x0);
  pSVar2 = (System_String_o *)0x0;
  if (!bVar1) {
    if ((TypeInfo_MiscExtensions->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_MiscExtensions);
    }
    __this = (System_Collections_Generic_Dictionary_object__object__o *)
             TypeInfo_MiscExtensions->static_fields->NamedColorHex;
    if (__this == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
label_0584e723:
      ThrowNullReferenceException();
    }
    bVar1 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                      (__this,(Il2CppObject *)name,(Il2CppObject **)&local_18,
                       (MethodInfo_4AAF440 *)
                       MethodInfo_System_Collections_Generic_Dictionary_string_string_TryGetValue);
    if (bVar1) {
      if (local_18 == (System_String_o *)0x0) goto label_0584e723;
      bVar1 = System_String__StartsWith(local_18,"#",(MethodInfo *)0x0);
      pSVar2 = local_18;
      if (bVar1) {
        if (local_18 == (System_String_o *)0x0) goto label_0584e723;
        pSVar2 = System_String__Substring(local_18,1,(MethodInfo *)0x0);
      }
    }
    else {
      pSVar2 = (System_String_o *)0x0;
    }
  }
  return pSVar2;
}


// MiscExtensions$$ReplaceNamedColorTags
// il2cpp: System_String_o* MiscExtensions__ReplaceNamedColorTags (System_String_o* input, const MethodInfo* method);
// 0x584e730
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x584e7e1: test r14, r14
// asm:   0x584e7e4: je 0x584e885

System_String_o * MiscExtensions__ReplaceNamedColorTags(System_String_o *input,MethodInfo *method)

{
  System_Text_RegularExpressions_Regex_o *__this;
  Il2CppObject *object;
  bool bVar1;
  System_String_o *pSVar2;
  MiscExtensions___c_StaticFields *pMVar3;
  System_Text_RegularExpressions_MatchEvaluator_o *__this_00;
  
  if (Il2CppMethodInitialized_07545037 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Text_RegularExpressions_MatchEvaluator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_MiscExtensions);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_MiscExtensions_c_ReplaceNamedColorTags_b__15_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_MiscExtensions_c);
    Il2CppMethodInitialized_07545037 = '\x01';
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
    pMVar3 = TypeInfo_MiscExtensions_c->static_fields;
    __this_00 = pMVar3->__9__15_0;
  }
  else {
    pMVar3 = TypeInfo_MiscExtensions_c->static_fields;
    __this_00 = pMVar3->__9__15_0;
  }
  if (__this_00 == (System_Text_RegularExpressions_MatchEvaluator_o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_MiscExtensions_c)->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_MiscExtensions_c);
      pMVar3 = TypeInfo_MiscExtensions_c->static_fields;
    }
    object = (Il2CppObject *)pMVar3->__9;
    __this_00 = il2cpp_codegen_object_new
                          ((Il2CppClass *)TypeInfo_System_Text_RegularExpressions_MatchEvaluator);
    System_Text_RegularExpressions_MatchEvaluator___ctor
              (__this_00,object,(intptr_t)MethodInfo_MiscExtensions_c_ReplaceNamedColorTags_b__15_0,
               (MethodInfo *)0x0);
    pMVar3 = TypeInfo_MiscExtensions_c->static_fields;
    pMVar3->__9__15_0 = __this_00;
    Il2CppCodeGenWriteBarrier(&pMVar3->__9__15_0);
  }
  if (__this == (System_Text_RegularExpressions_Regex_o *)0x0) {
    ThrowNullReferenceException();
  }
  pSVar2 = System_Text_RegularExpressions_Regex__Replace_61e3fe0(__this,input,__this_00,(MethodInfo *)0x0);
  return pSVar2;
}


// MiscExtensions$$GetActive
// il2cpp: bool MiscExtensions__GetActive (UnityEngine_GameObject_o* target, const MethodInfo* method);
// 0x584e890

bool MiscExtensions__GetActive(UnityEngine_GameObject_o *target,MethodInfo *method)

{
  bool bVar1;
  
  if (target == (UnityEngine_GameObject_o *)0x0) {
    ThrowNullReferenceException();
  }
  bVar1 = UnityEngine_GameObject__get_activeInHierarchy(target,(MethodInfo *)0x0);
  return bVar1;
}


// MiscExtensions$$BakeLocalMesh
// il2cpp: void MiscExtensions__BakeLocalMesh (UnityEngine_SkinnedMeshRenderer_o* renderer, UnityEngine_Mesh_o* mesh, const MethodInfo* method);
// 0x584e8b0

void MiscExtensions__BakeLocalMesh
               (UnityEngine_SkinnedMeshRenderer_o *renderer,UnityEngine_Mesh_o *mesh,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_Cloth_o *local_18;
  
  if (Il2CppMethodInitialized_07545038 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_TryGetComponent_Cloth);
    Il2CppMethodInitialized_07545038 = '\x01';
  }
  local_18 = (UnityEngine_Cloth_o *)0x0;
  if (renderer != (UnityEngine_SkinnedMeshRenderer_o *)0x0) {
    bVar1 = UnityEngine_Component__TryGetComponent_object_
                      ((UnityEngine_Component_o *)renderer,(Il2CppObject **)&local_18,
                       (MethodInfo_34B1690 *)MethodInfo_UnityEngine_Component_TryGetComponent_Cloth);
    if (!bVar1) {
label_0584e955:
      UnityEngine_SkinnedMeshRenderer__BakeMesh(renderer,mesh,true,(MethodInfo *)0x0);
      return;
    }
    if (local_18 != (UnityEngine_Cloth_o *)0x0) {
      bVar1 = UnityEngine_Cloth__get_enabled(local_18,(MethodInfo *)0x0);
      if (!bVar1) goto label_0584e955;
      if (local_18 != (UnityEngine_Cloth_o *)0x0) {
        UnityEngine_Cloth__set_enabled(local_18,false,(MethodInfo *)0x0);
        UnityEngine_SkinnedMeshRenderer__BakeMesh(renderer,mesh,true,(MethodInfo *)0x0);
        if (local_18 != (UnityEngine_Cloth_o *)0x0) {
          UnityEngine_Cloth__set_enabled(local_18,true,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// MiscExtensions$$ToDisplayString
// il2cpp: System_String_o* MiscExtensions__ToDisplayString (UnityEngine_Vector3_o vector, const MethodInfo* method);
// 0x584e980

System_String_o * MiscExtensions__ToDisplayString(UnityEngine_Vector3_o vector,MethodInfo *method)

{
  System_String_array *values;
  System_String_o *pSVar1;
  undefined8 local_28;
  float local_20 [2];
  
  local_20[0] = vector.fields.z;
  local_28 = vector.fields._0_8_;
  if (Il2CppMethodInitialized_07545039 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    il2cpp_codegen_initialize_runtime_metadata(&"(");
    il2cpp_codegen_initialize_runtime_metadata(&")");
    il2cpp_codegen_initialize_runtime_metadata(&",");
    Il2CppMethodInitialized_07545039 = '\x01';
  }
  values = (System_String_array *)SZArrayNew(TypeInfo_string_array,7);
  if (values == (System_String_array *)0x0) {
    ThrowNullReferenceException();
  }
  if ((int)values->max_length != 0) {
    values->m_Items[0] = "(";
    Il2CppCodeGenWriteBarrier(values->m_Items);
    pSVar1 = System_Single__ToString((float *)&local_28,(MethodInfo *)0x0);
    if ((values->max_length & 0xfffffffe) != 0) {
      values->m_Items[1] = pSVar1;
      Il2CppCodeGenWriteBarrier(values->m_Items + 1);
      if (2 < (uint)values->max_length) {
        values->m_Items[2] = ",";
        Il2CppCodeGenWriteBarrier(values->m_Items + 2);
        pSVar1 = System_Single__ToString((float *)((long)&local_28 + 4),(MethodInfo *)0x0);
        if ((values->max_length & 0xfffffffc) != 0) {
          values->m_Items[3] = pSVar1;
          Il2CppCodeGenWriteBarrier(values->m_Items + 3);
          if (4 < (uint)values->max_length) {
            values->m_Items[4] = ",";
            Il2CppCodeGenWriteBarrier(values->m_Items + 4);
            pSVar1 = System_Single__ToString(local_20,(MethodInfo *)0x0);
            if (5 < (uint)values->max_length) {
              values->m_Items[5] = pSVar1;
              Il2CppCodeGenWriteBarrier(values->m_Items + 5);
              if (6 < (uint)values->max_length) {
                values->m_Items[6] = ")";
                Il2CppCodeGenWriteBarrier(values->m_Items + 6);
                pSVar1 = System_String__Concat_5302910(values,(MethodInfo *)0x0);
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


// MiscExtensions$$UnboxToDouble
// il2cpp: double MiscExtensions__UnboxToDouble (Il2CppObject* obj, const MethodInfo* method);
// 0x584eb00

double MiscExtensions__UnboxToDouble(Il2CppObject *obj,MethodInfo *method)

{
  double *pdVar1;
  int *piVar2;
  
  if (obj == (Il2CppObject *)0x0) {
    ThrowNullReferenceException();
  }
  if (obj->klass == g_data_07556710) {
    piVar2 = il2cpp_vm_Object_Unbox(obj);
    return (double)*piVar2;
  }
  if ((obj->klass->_1).element_class != *(Il2CppClass **)(g_data_07556748 + 0x40)) {
    il2cpp_codegen_raise_invalid_cast_exception();
  }
  pdVar1 = il2cpp_vm_Object_Unbox(obj);
  return *pdVar1;
}


// MiscExtensions$$UnboxToFloat
// il2cpp: float MiscExtensions__UnboxToFloat (Il2CppObject* obj, const MethodInfo* method);
// 0x584eb50

float MiscExtensions__UnboxToFloat(Il2CppObject *obj,MethodInfo *method)

{
  System_Globalization_CultureInfo_o *provider;
  int *piVar1;
  float *pfVar2;
  double *pdVar3;
  long *plVar4;
  System_Decimal_Fields *pSVar5;
  char *pcVar6;
  Il2CppClass *klass;
  float fVar7;
  
  if (Il2CppMethodInitialized_0754503a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Convert);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Globalization_CultureInfo);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Decimal);
    Il2CppMethodInitialized_0754503a = '\x01';
  }
  if (obj == (Il2CppObject *)0x0) {
label_0584ebdf:
    if ((TypeInfo_System_Globalization_CultureInfo->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Globalization_CultureInfo);
    }
    provider = System_Globalization_CultureInfo__get_InvariantCulture((MethodInfo *)0x0);
    if ((TypeInfo_System_Convert->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Convert);
    }
    fVar7 = System_Convert__ToSingle_54251a0(obj,(System_IFormatProvider_o *)provider,(MethodInfo *)0x0);
    return fVar7;
  }
  klass = obj->klass;
  if (klass == g_data_07556710) {
    piVar1 = il2cpp_vm_Object_Unbox(obj);
    fVar7 = (float)*piVar1;
  }
  else {
    if (klass == g_data_07556740) {
      pfVar2 = il2cpp_vm_Object_Unbox(obj);
      return *pfVar2;
    }
    if (klass == g_data_07556748) {
      pdVar3 = il2cpp_vm_Object_Unbox(obj);
      return (float)*pdVar3;
    }
    if (klass == g_data_07556730) {
      plVar4 = il2cpp_vm_Object_Unbox(obj);
      return (float)*plVar4;
    }
    if (klass == (Il2CppClass *)TypeInfo_System_Decimal) {
      if ((klass->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init(klass);
        klass = (Il2CppClass *)TypeInfo_System_Decimal;
      }
      pSVar5 = (System_Decimal_Fields *)il2cpp_runtime_helper_02abd3a0(obj,klass);
      fVar7 = System_Decimal__op_Explicit_5526f00((System_Decimal_o)*pSVar5,(MethodInfo *)0x0);
      return fVar7;
    }
    if (klass != g_data_075566f0) goto label_0584ebdf;
    pcVar6 = (char *)il2cpp_runtime_helper_02abd3a0(obj);
    fVar7 = 0.0;
    if (*pcVar6 != '\0') {
      return 1.0;
    }
  }
  return fVar7;
}


// MiscExtensions$$UnboxToInt
// il2cpp: int32_t MiscExtensions__UnboxToInt (Il2CppObject* obj, const MethodInfo* method);
// 0x584ece0

int32_t MiscExtensions__UnboxToInt(Il2CppObject *obj,MethodInfo *method)

{
  int32_t iVar1;
  System_Globalization_CultureInfo_o *provider;
  int32_t *piVar2;
  float *pfVar3;
  double *pdVar4;
  System_Decimal_Fields *pSVar5;
  byte *pbVar6;
  Il2CppClass *klass;
  
  if (Il2CppMethodInitialized_0754503b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Convert);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Globalization_CultureInfo);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Decimal);
    Il2CppMethodInitialized_0754503b = '\x01';
  }
  if (obj == (Il2CppObject *)0x0) {
label_0584ed6b:
    if ((TypeInfo_System_Globalization_CultureInfo->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Globalization_CultureInfo);
    }
    provider = System_Globalization_CultureInfo__get_InvariantCulture((MethodInfo *)0x0);
    if ((TypeInfo_System_Convert->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Convert);
    }
    iVar1 = System_Convert__ToInt32_5423de0(obj,(System_IFormatProvider_o *)provider,(MethodInfo *)0x0);
    return iVar1;
  }
  klass = obj->klass;
  if (klass != g_data_07556710) {
    if (klass == g_data_07556740) {
      pfVar3 = il2cpp_vm_Object_Unbox(obj);
      return (int)*pfVar3;
    }
    if (klass == g_data_07556748) {
      pdVar4 = il2cpp_vm_Object_Unbox(obj);
      return (int)*pdVar4;
    }
    if (klass != g_data_07556730) {
      if (klass == (Il2CppClass *)TypeInfo_System_Decimal) {
        if ((klass->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init(klass);
          klass = (Il2CppClass *)TypeInfo_System_Decimal;
        }
        pSVar5 = (System_Decimal_Fields *)il2cpp_runtime_helper_02abd3a0(obj,klass);
        iVar1 = System_Decimal__op_Explicit_5526e10((System_Decimal_o)*pSVar5,(MethodInfo *)0x0);
        return iVar1;
      }
      if (klass == g_data_075566f0) {
        pbVar6 = (byte *)il2cpp_runtime_helper_02abd3a0(obj);
        return (int32_t)*pbVar6;
      }
      goto label_0584ed6b;
    }
  }
  piVar2 = il2cpp_vm_Object_Unbox(obj);
  return *piVar2;
}


// MiscExtensions$$MaxComponent
// il2cpp: float MiscExtensions__MaxComponent (UnityEngine_Vector3_o v, const MethodInfo* method);
// 0x584ee40
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x584eeeb: jmp 0x584ef64

float MiscExtensions__MaxComponent(UnityEngine_Vector3_o v,MethodInfo *method)

{
  void *pvVar1;
  Il2CppObject *pIVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  float fVar9;
  float fVar10;
  float local_18;
  float fStack_14;
  
  if (Il2CppMethodInitialized_0754503c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_float_array);
    Il2CppMethodInitialized_0754503c = '\x01';
  }
  pIVar2 = SZArrayNew(TypeInfo_float_array,3);
  if (pIVar2 == (Il2CppObject *)0x0) {
    ThrowNullReferenceException();
  }
  pvVar1 = pIVar2[1].monitor;
  uVar3 = (uint)pvVar1;
  local_18 = v.fields.x;
  fStack_14 = v.fields.y;
  if (((uVar3 == 0) || (*(float *)&pIVar2[2].klass = local_18, uVar3 == 1)) ||
     (*(float *)((long)&pIVar2[2].klass + 4) = fStack_14, uVar3 < 3)) {
    ThrowIndexOutOfRangeException();
  }
  *(float *)&pIVar2[2].monitor = v.fields.z;
  if ((int)uVar3 < 2) {
    return local_18;
  }
  uVar5 = (ulong)pvVar1 & 0xffffffff;
  uVar8 = uVar5 - 1;
  uVar4 = (ulong)((uint)uVar8 & 3);
  if (uVar5 - 2 < 3) {
    lVar6 = 1;
  }
  else {
    uVar5 = 0;
    do {
      uVar7 = uVar5;
      fVar9 = *(float *)((long)&pIVar2[2].klass + uVar7 * 4 + 4);
      if (fVar9 <= local_18) {
        fVar9 = local_18;
      }
      fVar10 = *(float *)((long)&pIVar2[2].monitor + uVar7 * 4);
      if (fVar10 <= fVar9) {
        fVar10 = fVar9;
      }
      fVar9 = *(float *)((long)&pIVar2[2].monitor + uVar7 * 4 + 4);
      if (fVar9 <= fVar10) {
        fVar9 = fVar10;
      }
      local_18 = *(float *)((long)&pIVar2[3].klass + uVar7 * 4);
      if (local_18 <= fVar9) {
        local_18 = fVar9;
      }
      uVar5 = uVar7 + 4;
    } while ((uVar8 & 0xfffffffffffffffc) != uVar7 + 4);
    lVar6 = uVar7 + 5;
  }
  if (uVar4 != 0) {
    uVar8 = 0;
    fVar9 = local_18;
    do {
      local_18 = *(float *)((long)&pIVar2[2].klass + uVar8 * 4 + lVar6 * 4);
      if (local_18 <= fVar9) {
        local_18 = fVar9;
      }
      uVar8 = uVar8 + 1;
      fVar9 = local_18;
    } while (uVar4 != uVar8);
  }
  return local_18;
}


// MiscExtensions$$UpperFirstLetter
// il2cpp: System_String_o* MiscExtensions__UpperFirstLetter (System_String_o* text, const MethodInfo* method);
// 0x584ef80

System_String_o * MiscExtensions__UpperFirstLetter(System_String_o *text,MethodInfo *method)

{
  bool bVar1;
  uint16_t c;
  System_String_o *pSVar2;
  System_String_o *str1;
  uint16_t local_1a;
  
  bVar1 = System_String__op_Equality
                    (text,(System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8),(MethodInfo *)0x0);
  if (!bVar1) {
    if (text == (System_String_o *)0x0) {
      ThrowNullReferenceException();
    }
    if ((text->fields)._stringLength < 2) {
      pSVar2 = System_String__ToUpper(text,(MethodInfo *)0x0);
      return pSVar2;
    }
    c = System_String__get_Chars(text,0,(MethodInfo *)0x0);
    if ((g_data_07556750->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init(g_data_07556750);
    }
    local_1a = System_Char__ToUpper_541e9c0(c,(MethodInfo *)0x0);
    pSVar2 = System_Char__ToString(&local_1a,(MethodInfo *)0x0);
    str1 = System_String__Substring(text,1,(MethodInfo *)0x0);
    text = System_String__Concat_52f0320(pSVar2,str1,(MethodInfo *)0x0);
  }
  return text;
}


// MiscExtensions$$StripHex
// il2cpp: System_String_o* MiscExtensions__StripHex (System_String_o* text, const MethodInfo* method);
// 0x584f050

System_String_o * MiscExtensions__StripHex(System_String_o *text,MethodInfo *method)

{
  uint32_t uVar1;
  System_Text_RegularExpressions_Regex_o *__this;
  System_String_o *pSVar2;
  
  if (Il2CppMethodInitialized_0754503d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_MiscExtensions);
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_0754503d = '\x01';
    uVar1 = (TypeInfo_MiscExtensions->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_MiscExtensions->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_MiscExtensions);
    __this = TypeInfo_MiscExtensions->static_fields->HexRegex;
  }
  else {
    __this = *(System_Text_RegularExpressions_Regex_o **)
              ((long)((Il2CppClass *)TypeInfo_MiscExtensions)->static_fields + 0x38);
  }
  if (__this == (System_Text_RegularExpressions_Regex_o *)0x0) {
    ThrowNullReferenceException();
  }
  pSVar2 = System_Text_RegularExpressions_Regex__Replace_61e3d00
                     (__this,text,"",(MethodInfo *)0x0);
  return pSVar2;
}


// MiscExtensions$$Tokenize
// il2cpp: System_Collections_Generic_List_string__o* MiscExtensions__Tokenize (System_String_o* input, const MethodInfo* method);
// 0x584f0f0
// eh: try 0x584f23f..0x584f6de -> pad 0x584f734 (+15 call sites) catch Il2CppExceptionWrapper, cleanup [compiler noexcept guard]
// eh: try 0x584f75c..0x584f761 -> pad 0x584f766 cleanup
// eh: try 0x584f769..0x584f773 -> pad 0x584f77b catch (...) [compiler noexcept guard]
// asm: 35 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x584f309: nop dword ptr [rax]
// asm:   0x584f3bc: jmp 0x584f489
// asm:   0x584f654: jmp 0x584f65f
// asm:   0x584f695: call 0x30d63a0  ; ThrowNullReferenceException()
// asm:   0x584f722: jmp 0x584f73c
// asm:   0x584f724: jmp 0x584f73c
// asm:   0x584f726: jmp 0x584f73c
// asm:   0x584f728: jmp 0x584f73c
// asm:   0x584f72a: jmp 0x584f73c
// asm:   0x584f72c: jmp 0x584f73c
// asm:   0x584f72e: jmp 0x584f73c
// asm:   0x584f730: jmp 0x584f73c
// asm:   0x584f732: jmp 0x584f73c
// asm:   0x584f734: jmp 0x584f73c
// asm:   0x584f736: jmp 0x584f73c
// asm:   0x584f738: jmp 0x584f73c
// asm:   0x584f73a: jmp 0x584f73c
// asm:   0x584f73c: mov rbp, rax
// asm:   0x584f73f: cmp edx, 1
// asm:   0x584f742: jne 0x584f769
// asm:   0x584f744: mov rdi, rbp
// asm:   0x584f747: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x584f74c: mov rcx, qword ptr [rax]
// asm:   0x584f74f: mov qword ptr [rsp + 0x10], rcx
// asm:   0x584f754: mov qword ptr [rsp + 0x20], rcx
// asm:   0x584f759: xor r14d, r14d
// asm:   0x584f75c: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x584f761: jmp 0x584f4e2
// asm:   0x584f766: mov rbp, rax
// asm:   0x584f769: lea rdi, [rsp + 0x20]
// asm:   0x584f76e: call 0x2fce3e0  ; il2cpp_runtime_helper_02fce3e0()
// asm:   0x584f773: mov rdi, rbp
// asm:   0x584f776: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x584f77b: mov rdi, rax
// asm:   0x584f77e: call 0x2ab61e0  ; __clang_call_terminate()

System_Collections_Generic_List_string__o *
MiscExtensions__Tokenize(System_String_o *input,MethodInfo *method)

{
  int32_t *piVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  System_Text_RegularExpressions_Regex_o *__this;
  Il2CppClass *pIVar5;
  Il2CppRuntimeInterfaceOffsetPair *pIVar6;
  System_String_array *pSVar7;
  MethodInfo *pMVar8;
  bool bVar9;
  System_Collections_Generic_List_string__o *__this_00;
  System_Text_RegularExpressions_MatchCollection_o *__this_01;
  VirtualInvokeData *pVVar10;
  System_Text_RegularExpressions_Capture_o *__this_02;
  System_String_o *pSVar11;
  Il2CppObject *pIVar12;
  ulong uVar13;
  long lVar14;
  int index;
  uint16_t local_62;
  Il2CppObject *local_60;
  long local_58;
  Il2CppObject *local_50;
  undefined8 local_48;
  Il2CppObject **local_40;
  Il2CppObject **local_38;
  
  if (Il2CppMethodInitialized_0754503e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IDisposable);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_IEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Text_RegularExpressions_Match);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_MiscExtensions);
    Il2CppMethodInitialized_0754503e = '\x01';
  }
  local_62 = 0;
  local_50 = (Il2CppObject *)0x0;
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_string_ctor);
  if ((TypeInfo_MiscExtensions->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_MiscExtensions);
  }
  __this = TypeInfo_MiscExtensions->static_fields->TagRegex;
  if ((__this != (System_Text_RegularExpressions_Regex_o *)0x0) &&
     (__this_01 = System_Text_RegularExpressions_Regex__Matches(__this,input,(MethodInfo *)0x0),
     __this_01 != (System_Text_RegularExpressions_MatchCollection_o *)0x0)) {
    local_60 = (Il2CppObject *)
               System_Text_RegularExpressions_MatchCollection__GetEnumerator(__this_01,(MethodInfo *)0x0);
    local_48 = 0;
    local_40 = &local_60;
    local_38 = &local_50;
    if (local_60 != (Il2CppObject *)0x0) {
      local_58 = 0;
      index = 0;
      do {
        pIVar12 = local_60;
        pIVar5 = local_60->klass;
        uVar13 = (ulong)(pIVar5->_2).interface_offsets_count;
        if (uVar13 != 0) {
          pIVar6 = (pIVar5->_1).interfaceOffsets;
          lVar14 = 0;
          do {
            if (*(System_Collections_IEnumerator_c **)((long)&pIVar6->interfaceType + lVar14) ==
                TypeInfo_System_Collections_IEnumerator) {
              pVVar10 = pIVar5->vtable + *(int *)((long)&pIVar6->offset + lVar14);
              goto label_0584f2c3;
            }
            lVar14 = lVar14 + 0x10;
          } while (uVar13 * 0x10 != lVar14);
        }
        pVVar10 = GetInterfaceInvokeDataFromVTableSlowPath
                            (local_60,(Il2CppClass *)TypeInfo_System_Collections_IEnumerator,0);
label_0584f2c3:
        bVar9 = (*pVVar10->methodPtr)(pIVar12,pVVar10->method);
        pIVar12 = local_60;
        if (!bVar9) {
          pIVar12 = il2cpp_vm_Object_IsInst(local_60,(Il2CppClass *)TypeInfo_System_IDisposable);
          local_50 = pIVar12;
          if (pIVar12 == (Il2CppObject *)0x0) goto label_0584f566;
          pIVar5 = pIVar12->klass;
          uVar13 = (ulong)(pIVar5->_2).interface_offsets_count;
          if (uVar13 == 0) goto label_0584f53f;
          pIVar6 = (pIVar5->_1).interfaceOffsets;
          lVar14 = 0;
          goto label_0584f530;
        }
        if (local_60 == (Il2CppObject *)0x0) {
          ThrowNullReferenceException();
        }
        pIVar5 = local_60->klass;
        uVar13 = (ulong)(pIVar5->_2).interface_offsets_count;
        if (uVar13 != 0) {
          pIVar6 = (pIVar5->_1).interfaceOffsets;
          lVar14 = 0;
          do {
            if (*(System_Collections_IEnumerator_c **)((long)&pIVar6->interfaceType + lVar14) ==
                TypeInfo_System_Collections_IEnumerator) {
              pVVar10 = pIVar5->vtable + (*(int *)((long)&pIVar6->offset + lVar14) + 1);
              goto label_0584f357;
            }
            lVar14 = lVar14 + 0x10;
          } while (uVar13 * 0x10 != lVar14);
        }
        pVVar10 = GetInterfaceInvokeDataFromVTableSlowPath
                            (local_60,(Il2CppClass *)TypeInfo_System_Collections_IEnumerator,1);
label_0584f357:
        __this_02 = (System_Text_RegularExpressions_Capture_o *)(*pVVar10->methodPtr)(pIVar12,pVVar10->method)
        ;
        if (__this_02 == (System_Text_RegularExpressions_Capture_o *)0x0) {
          ThrowNullReferenceException();
        }
        bVar2 = (TypeInfo_System_Text_RegularExpressions_Match->_2).typeHierarchyDepth;
        if (((__this_02->klass->_2).typeHierarchyDepth < bVar2) ||
           ((__this_02->klass->_2).typeHierarchy[(ulong)bVar2 - 1] !=
            (Il2CppClass *)TypeInfo_System_Text_RegularExpressions_Match)) {
          il2cpp_codegen_raise_invalid_cast_exception(__this_02);
        }
        iVar3 = (__this_02->fields)._Index_k__BackingField;
        if (input == (System_String_o *)0x0) {
          if (index < iVar3) {
            ThrowNullReferenceException();
          }
        }
        else if (__this_00 == (System_Collections_Generic_List_string__o *)0x0) {
          if (index < iVar3) {
            local_62 = System_String__get_Chars(input,index,(MethodInfo *)0x0);
            if ((g_data_07556750->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init(g_data_07556750);
            }
            System_Char__ToString(&local_62,(MethodInfo *)0x0);
label_0584f6d9:
            ThrowNullReferenceException();
          }
        }
        else if (index < iVar3) {
          do {
            local_62 = System_String__get_Chars(input,index,(MethodInfo *)0x0);
            if ((g_data_07556750->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init(g_data_07556750);
            }
            pSVar11 = System_Char__ToString(&local_62,(MethodInfo *)0x0);
            pMVar8 = MethodInfo_System_Collections_Generic_List_string_Add;
            piVar1 = &(__this_00->fields)._version;
            *piVar1 = *piVar1 + 1;
            pSVar7 = (__this_00->fields)._items;
            if (pSVar7 == (System_String_array *)0x0) goto label_0584f6d9;
            uVar4 = (__this_00->fields)._size;
            if (uVar4 < (uint)pSVar7->max_length) {
              (__this_00->fields)._size = uVar4 + 1;
              pSVar7->m_Items[(int)uVar4] = pSVar11;
              Il2CppCodeGenWriteBarrier(pSVar7->m_Items + (int)uVar4);
            }
            else {
              System_Collections_Generic_List_object___AddWithResize
                        ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)pSVar11,
                         (MethodInfo_395D230 *)pMVar8->klass->rgctx_data[0xe].method);
            }
            index = index + 1;
          } while (index < (__this_02->fields)._Index_k__BackingField);
        }
        pSVar11 = System_Text_RegularExpressions_Capture__get_Value(__this_02,(MethodInfo *)0x0);
        pMVar8 = MethodInfo_System_Collections_Generic_List_string_Add;
        if (__this_00 == (System_Collections_Generic_List_string__o *)0x0) {
          ThrowNullReferenceException();
        }
        piVar1 = &(__this_00->fields)._version;
        *piVar1 = *piVar1 + 1;
        pSVar7 = (__this_00->fields)._items;
        if (pSVar7 == (System_String_array *)0x0) {
          ThrowNullReferenceException();
        }
        uVar4 = (__this_00->fields)._size;
        if (uVar4 < (uint)pSVar7->max_length) {
          (__this_00->fields)._size = uVar4 + 1;
          pSVar7->m_Items[(int)uVar4] = pSVar11;
          Il2CppCodeGenWriteBarrier(pSVar7->m_Items + (int)uVar4);
        }
        else {
          System_Collections_Generic_List_object___AddWithResize
                    ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)pSVar11,
                     (MethodInfo_395D230 *)pMVar8->klass->rgctx_data[0xe].method);
        }
        index = (__this_02->fields)._Length_k__BackingField + (__this_02->fields)._Index_k__BackingField;
      } while (local_60 != (Il2CppObject *)0x0);
    }
    ThrowNullReferenceException();
  }
  goto label_0584f69a;
  while (lVar14 = lVar14 + 0x10, uVar13 * 0x10 != lVar14) {
label_0584f530:
    if (*(System_IDisposable_c **)((long)&pIVar6->interfaceType + lVar14) == TypeInfo_System_IDisposable) {
      pVVar10 = pIVar5->vtable + *(int *)((long)&pIVar6->offset + lVar14);
      goto label_0584f55d;
    }
  }
label_0584f53f:
  pVVar10 = GetInterfaceInvokeDataFromVTableSlowPath(pIVar12,(Il2CppClass *)TypeInfo_System_IDisposable,0);
label_0584f55d:
  (*pVVar10->methodPtr)(pIVar12,pVVar10->method);
label_0584f566:
  if (local_58 != 0) {
    il2cpp_codegen_rethrow();
  }
  if (input != (System_String_o *)0x0) {
    iVar3 = (input->fields)._stringLength;
    if (__this_00 == (System_Collections_Generic_List_string__o *)0x0) {
      if (index < iVar3) {
        local_62 = System_String__get_Chars(input,index,(MethodInfo *)0x0);
        if ((g_data_07556750->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init(g_data_07556750);
        }
        System_Char__ToString(&local_62,(MethodInfo *)0x0);
        ThrowNullReferenceException();
      }
    }
    else if (index < iVar3) {
      do {
        while( true ) {
          local_62 = System_String__get_Chars(input,index,(MethodInfo *)0x0);
          if ((g_data_07556750->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init(g_data_07556750);
          }
          pSVar11 = System_Char__ToString(&local_62,(MethodInfo *)0x0);
          pMVar8 = MethodInfo_System_Collections_Generic_List_string_Add;
          piVar1 = &(__this_00->fields)._version;
          *piVar1 = *piVar1 + 1;
          pSVar7 = (__this_00->fields)._items;
          if (pSVar7 == (System_String_array *)0x0) goto label_0584f69a;
          uVar4 = (__this_00->fields)._size;
          if ((uint)pSVar7->max_length <= uVar4) break;
          (__this_00->fields)._size = uVar4 + 1;
          pSVar7->m_Items[(int)uVar4] = pSVar11;
          Il2CppCodeGenWriteBarrier(pSVar7->m_Items + (int)uVar4);
          index = index + 1;
          if ((input->fields)._stringLength <= index) {
            return __this_00;
          }
        }
        System_Collections_Generic_List_object___AddWithResize
                  ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)pSVar11,
                   (MethodInfo_395D230 *)pMVar8->klass->rgctx_data[0xe].method);
        index = index + 1;
      } while (index < (input->fields)._stringLength);
    }
    return __this_00;
  }
label_0584f69a:
  ThrowNullReferenceException();
}


// MiscExtensions$$StripRichText
// il2cpp: System_String_o* MiscExtensions__StripRichText (System_String_o* text, const MethodInfo* method);
// 0x584f790

System_String_o * MiscExtensions__StripRichText(System_String_o *text,MethodInfo *method)

{
  uint32_t uVar1;
  System_Text_RegularExpressions_Regex_o *__this;
  System_String_o *pSVar2;
  
  if (Il2CppMethodInitialized_0754503f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_MiscExtensions);
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_0754503f = '\x01';
    uVar1 = (TypeInfo_MiscExtensions->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_MiscExtensions->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_MiscExtensions);
    __this = TypeInfo_MiscExtensions->static_fields->TagRegex;
  }
  else {
    __this = *(System_Text_RegularExpressions_Regex_o **)
              ((long)((Il2CppClass *)TypeInfo_MiscExtensions)->static_fields + 0x50);
  }
  if (__this == (System_Text_RegularExpressions_Regex_o *)0x0) {
    ThrowNullReferenceException();
  }
  pSVar2 = System_Text_RegularExpressions_Regex__Replace_61e3d00
                     (__this,text,"",(MethodInfo *)0x0);
  return pSVar2;
}


// MiscExtensions$$StripIllegalRichText
// il2cpp: System_String_o* MiscExtensions__StripIllegalRichText (System_String_o* text, const MethodInfo* method);
// 0x584f830

System_String_o * MiscExtensions__StripIllegalRichText(System_String_o *text,MethodInfo *method)

{
  uint32_t uVar1;
  System_Text_RegularExpressions_Regex_o *__this;
  System_String_o *pSVar2;
  
  if (Il2CppMethodInitialized_07545040 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_MiscExtensions);
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_07545040 = '\x01';
    uVar1 = (TypeInfo_MiscExtensions->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_MiscExtensions->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_MiscExtensions);
    __this = TypeInfo_MiscExtensions->static_fields->IllegalStyleRegex;
  }
  else {
    __this = *(System_Text_RegularExpressions_Regex_o **)
              ((long)((Il2CppClass *)TypeInfo_MiscExtensions)->static_fields + 0x58);
  }
  if (__this == (System_Text_RegularExpressions_Regex_o *)0x0) {
    ThrowNullReferenceException();
  }
  pSVar2 = System_Text_RegularExpressions_Regex__Replace_61e3d00
                     (__this,text,"",(MethodInfo *)0x0);
  return pSVar2;
}


// MiscExtensions$$ForceWhiteColorTag
// il2cpp: System_String_o* MiscExtensions__ForceWhiteColorTag (System_String_o* text, const MethodInfo* method);
// 0x584f8d0

System_String_o * MiscExtensions__ForceWhiteColorTag(System_String_o *text,MethodInfo *method)

{
  uint32_t uVar1;
  System_Text_RegularExpressions_Regex_o *__this;
  System_String_o *pSVar2;
  
  if (Il2CppMethodInitialized_07545041 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_MiscExtensions);
    il2cpp_codegen_initialize_runtime_metadata(&"<color=#FFFFFF>");
    Il2CppMethodInitialized_07545041 = '\x01';
    uVar1 = (TypeInfo_MiscExtensions->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_MiscExtensions->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_MiscExtensions);
    __this = TypeInfo_MiscExtensions->static_fields->ColorTagRegex;
  }
  else {
    __this = *(System_Text_RegularExpressions_Regex_o **)
              ((long)((Il2CppClass *)TypeInfo_MiscExtensions)->static_fields + 0x40);
  }
  if (__this == (System_Text_RegularExpressions_Regex_o *)0x0) {
    ThrowNullReferenceException();
  }
  pSVar2 = System_Text_RegularExpressions_Regex__Replace_61e3d00
                     (__this,text,"<color=#FFFFFF>",(MethodInfo *)0x0);
  return pSVar2;
}


// MiscExtensions$$StripColor
// il2cpp: System_String_o* MiscExtensions__StripColor (System_String_o* text, const MethodInfo* method);
// 0x584f970
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x584f9a4: jmp 0x584fa2c

System_String_o * MiscExtensions__StripColor(System_String_o *text,MethodInfo *method)

{
  uint32_t uVar1;
  System_Text_RegularExpressions_Regex_o *pSVar2;
  System_String_o *pSVar3;
  
  if (Il2CppMethodInitialized_07545042 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_MiscExtensions);
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_07545042 = '\x01';
    uVar1 = (TypeInfo_MiscExtensions->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_MiscExtensions->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_MiscExtensions);
    pSVar2 = TypeInfo_MiscExtensions->static_fields->ColorTagRegex;
  }
  else {
    pSVar2 = *(System_Text_RegularExpressions_Regex_o **)
              ((long)((Il2CppClass *)TypeInfo_MiscExtensions)->static_fields + 0x40);
  }
  if (pSVar2 != (System_Text_RegularExpressions_Regex_o *)0x0) {
    pSVar3 = System_Text_RegularExpressions_Regex__Replace_61e3d00
                       (pSVar2,text,"",(MethodInfo *)0x0);
    pSVar2 = TypeInfo_MiscExtensions->static_fields->ColorEndRegex;
    if (pSVar2 != (System_Text_RegularExpressions_Regex_o *)0x0) {
      pSVar3 = System_Text_RegularExpressions_Regex__Replace_61e3d00
                         (pSVar2,pSVar3,"",(MethodInfo *)0x0);
      return pSVar3;
    }
  }
  ThrowNullReferenceException();
}


// MiscExtensions$$ForceColor
// il2cpp: System_String_o* MiscExtensions__ForceColor (System_String_o* text, UnityEngine_Color_o color, const MethodInfo* method);
// 0x584fa40

System_String_o *
MiscExtensions__ForceColor(System_String_o *text,UnityEngine_Color_o color,MethodInfo *method)

{
  int iVar1;
  System_String_o *pSVar2;
  System_String_o *pSVar3;
  System_String_array *values;
  
  if (Il2CppMethodInitialized_07545043 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_MiscExtensions);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    il2cpp_codegen_initialize_runtime_metadata(&"<color=#");
    il2cpp_codegen_initialize_runtime_metadata(&"</color>");
    il2cpp_codegen_initialize_runtime_metadata(&">");
    Il2CppMethodInitialized_07545043 = '\x01';
  }
  if ((TypeInfo_MiscExtensions->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_MiscExtensions);
  }
  pSVar2 = MiscExtensions__StripColor(text,method);
  pSVar3 = Unity_VisualScripting_XColor__ToHexString(color,(MethodInfo *)0x0);
  if (pSVar3 != (System_String_o *)0x0) {
    iVar1 = (pSVar3->fields)._stringLength;
    if (iVar1 < 3) {
      return pSVar2;
    }
    pSVar3 = System_String__Substring_53042f0(pSVar3,0,iVar1 + -2,(MethodInfo *)0x0);
    values = (System_String_array *)SZArrayNew(TypeInfo_string_array,5);
    if (values != (System_String_array *)0x0) {
      if ((int)values->max_length != 0) {
        values->m_Items[0] = "<color=#";
        Il2CppCodeGenWriteBarrier(values->m_Items);
        if ((values->max_length & 0xfffffffe) != 0) {
          values->m_Items[1] = pSVar3;
          Il2CppCodeGenWriteBarrier(values->m_Items + 1);
          if (2 < (uint)values->max_length) {
            values->m_Items[2] = ">";
            Il2CppCodeGenWriteBarrier(values->m_Items + 2);
            if ((values->max_length & 0xfffffffc) != 0) {
              values->m_Items[3] = pSVar2;
              Il2CppCodeGenWriteBarrier(values->m_Items + 3);
              if (4 < (uint)values->max_length) {
                values->m_Items[4] = "</color>";
                Il2CppCodeGenWriteBarrier(values->m_Items + 4);
                pSVar2 = System_String__Concat_5302910(values,(MethodInfo *)0x0);
                return pSVar2;
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
// 0x584fbe0

System_String_o *
MiscExtensions__ForceColor_574fbe0(System_String_o *text,System_String_o *colorHex,MethodInfo *method)

{
  System_String_o *pSVar1;
  System_String_array *values;
  MethodInfo *method_00;
  
  method_00 = (MethodInfo *)colorHex;
  if (Il2CppMethodInitialized_07545044 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_MiscExtensions);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    il2cpp_codegen_initialize_runtime_metadata(&"<color=#");
    il2cpp_codegen_initialize_runtime_metadata(&"</color>");
    il2cpp_codegen_initialize_runtime_metadata(&">");
    Il2CppMethodInitialized_07545044 = '\x01';
  }
  if ((TypeInfo_MiscExtensions->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_MiscExtensions);
  }
  pSVar1 = MiscExtensions__StripColor(text,method_00);
  values = (System_String_array *)SZArrayNew(TypeInfo_string_array,5);
  if (values == (System_String_array *)0x0) {
    ThrowNullReferenceException();
  }
  if ((int)values->max_length != 0) {
    values->m_Items[0] = "<color=#";
    Il2CppCodeGenWriteBarrier(values->m_Items);
    if ((values->max_length & 0xfffffffe) != 0) {
      values->m_Items[1] = colorHex;
      Il2CppCodeGenWriteBarrier(values->m_Items + 1);
      if (2 < (uint)values->max_length) {
        values->m_Items[2] = ">";
        Il2CppCodeGenWriteBarrier(values->m_Items + 2);
        if ((values->max_length & 0xfffffffc) != 0) {
          values->m_Items[3] = pSVar1;
          Il2CppCodeGenWriteBarrier(values->m_Items + 3);
          if (4 < (uint)values->max_length) {
            values->m_Items[4] = "</color>";
            Il2CppCodeGenWriteBarrier(values->m_Items + 4);
            pSVar1 = System_String__Concat_5302910(values,(MethodInfo *)0x0);
            return pSVar1;
          }
        }
      }
    }
  }
  ThrowIndexOutOfRangeException();
}


// MiscExtensions$$TruncateRichText
// il2cpp: System_String_o* MiscExtensions__TruncateRichText (System_String_o* text, int32_t length, const MethodInfo* method);
// 0x584fd30
// eh: try 0x584ff83..0x5850266 -> pad 0x5850298 (+27 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x58502b2..0x58502b7 -> pad 0x58502d8 cleanup
// eh: try 0x58502db..0x58502e5 -> pad 0x58502ed catch (...) [compiler noexcept guard]
// asm: 73 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x584fe32: cmp byte ptr [rip + 0x1cf5207], 0
// asm:   0x584fe39: je 0x584fe6b
// asm:   0x584fe58: jmp 0x58502f5
// asm:   0x584ff71: mov r14, rbp
// asm:   0x584ff74: nop word ptr cs:[rax + rax]
// asm:   0x58500e9: lea rax, [rip + 0x1a4d4e8]  ; MethodInfo_System_Collections_Generic_Stack_string_Pop
// asm:   0x58500f0: mov rsi, qword ptr [rax]
// asm:   0x58500f3: mov rdi, r13
// asm:   0x58500f6: call 0x4204ce0  ; System_Collections_Generic_Stack_object___Pop()
// asm:   0x58500fb: mov rdi, r14
// asm:   0x58500fe: mov rsi, rbp
// asm:   0x5850101: xor edx, edx
// asm:   0x5850103: call 0x53f0320  ; System_String__Concat()
// asm:   0x5850108: mov rbp, rax
// asm:   0x585010b: jmp 0x584ff71
// asm:   0x5850127: mov r14, rbp
// asm:   0x585012a: nop word ptr [rax + rax]
// asm:   0x58501dd: jmp 0x585033d
// asm:   0x58501e7: lea rax, [rip + 0x1a23fc2]  ; TypeInfo_char_array
// asm:   0x58501ee: mov rdi, qword ptr [rax]
// asm:   0x58501f1: mov esi, 2
// asm:   0x58501f6: call 0x30d6180  ; SZArrayNew()
// asm:   0x58501fb: test rax, rax
// asm:   0x58501fe: jne 0x585021f
// asm:   0x5850266: jmp 0x585029a
// asm:   0x5850268: jmp 0x585029a
// asm:   0x585026a: jmp 0x585029a
// asm:   0x585026c: jmp 0x585029a
// asm:   0x585026e: jmp 0x585029a
// asm:   0x5850270: jmp 0x585029a
// asm:   0x5850272: jmp 0x585029a
// asm:   0x5850274: jmp 0x585029a
// asm:   0x5850276: jmp 0x585029a
// asm:   0x5850278: jmp 0x585029a
// asm:   0x585027a: jmp 0x585029a
// asm:   0x585027c: jmp 0x585029a
// asm:   0x585027e: jmp 0x585029a
// asm:   0x5850280: jmp 0x585029a
// asm:   0x5850282: jmp 0x585029a
// asm:   0x5850284: jmp 0x585029a
// asm:   0x5850286: jmp 0x585029a
// asm:   0x5850288: jmp 0x585029a
// asm:   0x585028a: jmp 0x585029a
// asm:   0x585028c: jmp 0x585029a
// asm:   0x585028e: jmp 0x585029a
// asm:   0x5850290: jmp 0x585029a
// asm:   0x5850292: jmp 0x585029a
// asm:   0x5850294: jmp 0x585029a
// asm:   0x5850296: jmp 0x585029a
// asm:   0x5850298: jmp 0x585029a
// asm:   0x585029a: mov rbp, rax
// asm:   0x585029d: cmp edx, 1
// asm:   0x58502a0: jne 0x58502db
// asm:   0x58502a2: mov rdi, rbp
// asm:   0x58502a5: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x58502aa: mov rbx, qword ptr [rax]
// asm:   0x58502ad: mov qword ptr [rsp + 0x30], rbx
// asm:   0x58502b2: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x58502b7: lea rax, [rip + 0x1a3e83a]  ; MethodInfo_System_Collections_Generic_List_Enumerator_string_Dispose
// asm:   0x58502be: mov rsi, qword ptr [rax]
// asm:   0x58502c1: lea rdi, [rsp + 0x10]
// asm:   0x58502c6: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x58502cb: test rbx, rbx
// asm:   0x58502ce: je 0x58502fa
// asm:   0x58502d0: mov rdi, rbx
// asm:   0x58502d3: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x58502d8: mov rbp, rax
// asm:   0x58502db: lea rdi, [rsp + 0x30]
// asm:   0x58502e0: call 0x2fce480  ; il2cpp_runtime_helper_02fce480()
// asm:   0x58502e5: mov rdi, rbp
// asm:   0x58502e8: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x58502ed: mov rdi, rax
// asm:   0x58502f0: call 0x2ab61e0  ; __clang_call_terminate()

System_String_o * MiscExtensions__TruncateRichText(System_String_o *text,int32_t length,MethodInfo *method)

{
  uint32_t uVar1;
  int iVar2;
  System_Text_RegularExpressions_Regex_o *__this;
  bool bVar3;
  int32_t iVar4;
  int iVar5;
  System_String_o *pSVar6;
  System_Collections_Generic_List_string__o *__this_00;
  System_Collections_Generic_Stack_string__o *__this_01;
  System_String_o *pSVar7;
  System_String_o *a;
  System_Char_array *pSVar8;
  System_String_o *pSVar9;
  undefined1 local_68 [8];
  undefined1 *puStack_60;
  System_String_o *local_58;
  undefined1 local_48 [16];
  System_String_o *local_38;
  
  if (Il2CppMethodInitialized_07545045 == '\0') {
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
    Il2CppMethodInitialized_07545045 = '\x01';
  }
  local_68 = (undefined1  [8])0x0;
  puStack_60 = (undefined1 *)0x0;
  local_58 = (System_String_o *)0x0;
  if ((TypeInfo_MiscExtensions->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_MiscExtensions);
  }
  if (Il2CppMethodInitialized_07545040 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_MiscExtensions);
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_07545040 = '\x01';
    uVar1 = (TypeInfo_MiscExtensions->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (((Il2CppClass *)TypeInfo_MiscExtensions)->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_MiscExtensions);
    __this = TypeInfo_MiscExtensions->static_fields->IllegalStyleRegex;
  }
  else {
    __this = *(System_Text_RegularExpressions_Regex_o **)
              ((long)((Il2CppClass *)TypeInfo_MiscExtensions)->static_fields + 0x58);
  }
  if (__this != (System_Text_RegularExpressions_Regex_o *)0x0) {
    pSVar6 = System_Text_RegularExpressions_Regex__Replace_61e3d00
                       (__this,text,"",(MethodInfo *)0x0);
    __this_00 = MiscExtensions__Tokenize(pSVar6,(MethodInfo *)text);
    __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_Stack_string);
    System_Collections_Generic_Stack_object____ctor
              ((System_Collections_Generic_Stack_object__o *)__this_01,
               (MethodInfo_4104650 *)MethodInfo_System_Collections_Generic_Stack_string_ctor);
    if (__this_00 != (System_Collections_Generic_List_string__o *)0x0) {
      pSVar6 = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
      System_Collections_Generic_List_object___GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)local_48,
                 (System_Collections_Generic_List_object__o *)__this_00,
                 (MethodInfo_395E050 *)MethodInfo_System_Collections_Generic_List_string_GetEnumerator);
      local_58 = local_38;
      local_68 = (undefined1  [8])local_48._0_8_;
      puStack_60 = (undefined1 *)local_48._8_8_;
      local_48._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
      local_48._8_8_ = local_68;
      if (__this_01 == (System_Collections_Generic_Stack_string__o *)0x0) {
        iVar5 = 0;
        while (bVar3 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                 ((System_Collections_Generic_List_Enumerator_object__o *)local_68,
                                  (MethodInfo_4C45C50 *)
                                  MethodInfo_System_Collections_Generic_List_Enumerator_string_MoveNext),
              pSVar9 = local_58, bVar3) {
          if (local_58 == (System_String_o *)0x0) {
label_058501e2:
            ThrowNullReferenceException();
          }
          if ((local_58->fields)._stringLength == 1) {
            iVar5 = iVar5 + 1;
            if (length < iVar5) break;
            pSVar6 = System_String__Concat_52f0320(pSVar6,local_58,(MethodInfo *)0x0);
          }
          else {
            bVar3 = System_String__StartsWith(local_58,"</",(MethodInfo *)0x0);
            if (bVar3) {
              System_String__Substring_53042f0(pSVar9,2,(pSVar9->fields)._stringLength + -3,(MethodInfo *)0x0)
              ;
              ThrowNullReferenceException();
            }
            bVar3 = System_String__StartsWith(pSVar9,"<",(MethodInfo *)0x0);
            if (bVar3) {
              pSVar8 = (System_Char_array *)SZArrayNew(TypeInfo_char_array,2);
              if (pSVar8 != (System_Char_array *)0x0) {
                iVar5 = (int)pSVar8->max_length;
                if (iVar5 != 0) {
                  pSVar8->m_Items[0] = 0x3d;
                  if (iVar5 != 1) {
                    pSVar8->m_Items[1] = 0x3e;
                    iVar4 = System_String__IndexOfAny(pSVar9,pSVar8,(MethodInfo *)0x0);
                    System_String__Substring_53042f0(pSVar9,1,iVar4 + -1,(MethodInfo *)0x0);
                    ThrowNullReferenceException();
                  }
label_05850236:
                  ThrowIndexOutOfRangeException();
                }
label_05850226:
                ThrowIndexOutOfRangeException();
              }
label_05850200:
              ThrowNullReferenceException();
            }
          }
        }
      }
      else {
        iVar5 = 0;
        while (bVar3 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                 ((System_Collections_Generic_List_Enumerator_object__o *)local_68,
                                  (MethodInfo_4C45C50 *)
                                  MethodInfo_System_Collections_Generic_List_Enumerator_string_MoveNext),
              pSVar9 = local_58, bVar3) {
          if (local_58 == (System_String_o *)0x0) goto label_058501e2;
          if ((local_58->fields)._stringLength == 1) {
            iVar5 = iVar5 + 1;
            if (length < iVar5) break;
            pSVar6 = System_String__Concat_52f0320(pSVar6,local_58,(MethodInfo *)0x0);
          }
          else {
            bVar3 = System_String__StartsWith(local_58,"</",(MethodInfo *)0x0);
            if (bVar3) {
              pSVar7 = System_String__Substring_53042f0
                                 (pSVar9,2,(pSVar9->fields)._stringLength + -3,(MethodInfo *)0x0);
              if (0 < (__this_01->fields)._size) {
                a = System_Collections_Generic_Stack_object___Peek
                              ((System_Collections_Generic_Stack_object__o *)__this_01,
                               (MethodInfo_4104C60 *)MethodInfo_System_Collections_Generic_Stack_string_Peek);
                bVar3 = System_String__op_Equality(a,pSVar7,(MethodInfo *)0x0);
                if (bVar3) {
                  System_Collections_Generic_Stack_object___Pop
                            ((System_Collections_Generic_Stack_object__o *)__this_01,
                             (MethodInfo_4104CE0 *)MethodInfo_System_Collections_Generic_Stack_string_Pop);
                  pSVar6 = System_String__Concat_52f0320(pSVar6,pSVar9,(MethodInfo *)0x0);
                }
              }
            }
            else {
              bVar3 = System_String__StartsWith(pSVar9,"<",(MethodInfo *)0x0);
              if (bVar3) {
                pSVar8 = (System_Char_array *)SZArrayNew(TypeInfo_char_array,2);
                if (pSVar8 == (System_Char_array *)0x0) goto label_05850200;
                iVar2 = (int)pSVar8->max_length;
                if (iVar2 == 0) goto label_05850226;
                pSVar8->m_Items[0] = 0x3d;
                if (iVar2 == 1) goto label_05850236;
                pSVar8->m_Items[1] = 0x3e;
                iVar4 = System_String__IndexOfAny(pSVar9,pSVar8,(MethodInfo *)0x0);
                pSVar7 = System_String__Substring_53042f0(pSVar9,1,iVar4 + -1,(MethodInfo *)0x0);
                System_Collections_Generic_Stack_object___Push
                          ((System_Collections_Generic_Stack_object__o *)__this_01,(Il2CppObject *)pSVar7,
                           (MethodInfo_4104E00 *)MethodInfo_System_Collections_Generic_Stack_string_Push);
                pSVar6 = System_String__Concat_52f0320(pSVar6,pSVar9,(MethodInfo *)0x0);
              }
            }
          }
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose
                ((System_Collections_Generic_List_Enumerator_object__o *)local_68,
                 (MethodInfo_4C45C40 *)MethodInfo_System_Collections_Generic_List_Enumerator_string_Dispose);
      if (__this_01 != (System_Collections_Generic_Stack_string__o *)0x0) {
        iVar5 = (__this_01->fields)._size;
        while( true ) {
          if (iVar5 < 1) {
            return pSVar6;
          }
          if (__this_01 == (System_Collections_Generic_Stack_string__o *)0x0) break;
          pSVar9 = System_Collections_Generic_Stack_object___Pop
                             ((System_Collections_Generic_Stack_object__o *)__this_01,
                              (MethodInfo_4104CE0 *)MethodInfo_System_Collections_Generic_Stack_string_Pop);
          pSVar6 = System_String__Concat_5302810
                             (pSVar6,"</",pSVar9,">",(MethodInfo *)0x0);
          iVar5 = (__this_01->fields)._size;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// MiscExtensions$$HexColor
// il2cpp: System_String_o* MiscExtensions__HexColor (System_String_o* text, const MethodInfo* method);
// 0x5850350
// asm: 4 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x585037f: cmp byte ptr [rip + 0x1cf4cb9], 0
// asm:   0x58503b1: jmp 0x58505c9
// asm:   0x58504d7: lea r12, [rip + 0x1a9f342]  ; "["
// asm:   0x58504de: lea r13, [rip + 0x1a81d93]  ; "</color>"

System_String_o * MiscExtensions__HexColor(System_String_o *text,MethodInfo *method)

{
  uint32_t uVar1;
  System_Text_RegularExpressions_Regex_o *__this;
  bool bVar2;
  bool bVar3;
  int32_t iVar4;
  System_String_o *pSVar5;
  System_String_o *pSVar6;
  
  if (Il2CppMethodInitialized_07545046 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_MiscExtensions);
    il2cpp_codegen_initialize_runtime_metadata(&"<color=#");
    il2cpp_codegen_initialize_runtime_metadata(&"</color>");
    il2cpp_codegen_initialize_runtime_metadata(&"[");
    il2cpp_codegen_initialize_runtime_metadata(&"]");
    il2cpp_codegen_initialize_runtime_metadata(&">");
    Il2CppMethodInitialized_07545046 = '\x01';
    uVar1 = (TypeInfo_MiscExtensions->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_MiscExtensions->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_MiscExtensions);
  }
  if (Il2CppMethodInitialized_0754503f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_MiscExtensions);
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_0754503f = '\x01';
    uVar1 = (TypeInfo_MiscExtensions->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (((Il2CppClass *)TypeInfo_MiscExtensions)->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_MiscExtensions);
    __this = TypeInfo_MiscExtensions->static_fields->TagRegex;
  }
  else {
    __this = *(System_Text_RegularExpressions_Regex_o **)
              ((long)((Il2CppClass *)TypeInfo_MiscExtensions)->static_fields + 0x50);
  }
  if (((__this != (System_Text_RegularExpressions_Regex_o *)0x0) &&
      (pSVar5 = System_Text_RegularExpressions_Regex__Replace_61e3d00
                          (__this,text,"",(MethodInfo *)0x0),
      pSVar5 != (System_String_o *)0x0)) &&
     ((bVar2 = System_String__Contains(pSVar5,"]",(MethodInfo *)0x0), !bVar2 ||
      (pSVar5 = System_String__Replace_5304550
                          (pSVar5,"]",">",(MethodInfo *)0x0),
      pSVar5 != (System_String_o *)0x0)))) {
    do {
      bVar2 = true;
      do {
        bVar3 = System_String__Contains(pSVar5,"[",(MethodInfo *)0x0);
        if ((!bVar2) || (!bVar3)) {
          if (!bVar2) {
            pSVar5 = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
          }
          return pSVar5;
        }
        bVar2 = false;
        iVar4 = System_String__IndexOf_5307930(pSVar5,"[",(MethodInfo *)0x0);
      } while ((pSVar5->fields)._stringLength < iVar4 + 7);
      pSVar6 = System_String__Substring_53042f0(pSVar5,iVar4 + 1,6,(MethodInfo *)0x0);
      pSVar5 = System_String__Remove(pSVar5,iVar4,7,(MethodInfo *)0x0);
      pSVar6 = System_String__Concat_52f0320("<color=#",pSVar6,(MethodInfo *)0x0);
      if ((pSVar5 == (System_String_o *)0x0) ||
         (pSVar5 = System_String__Insert(pSVar5,iVar4,pSVar6,(MethodInfo *)0x0),
         pSVar5 == (System_String_o *)0x0)) break;
      iVar4 = (pSVar5->fields)._stringLength;
      bVar2 = System_String__Contains(pSVar5,"[",(MethodInfo *)0x0);
      if (bVar2) {
        iVar4 = System_String__IndexOf_5307930(pSVar5,"[",(MethodInfo *)0x0);
      }
      pSVar5 = System_String__Insert(pSVar5,iVar4,"</color>",(MethodInfo *)0x0);
    } while (pSVar5 != (System_String_o *)0x0);
  }
  ThrowNullReferenceException();
}


// MiscExtensions$$ToEnum<Int32Enum>
// il2cpp: int32_t MiscExtensions__ToEnum_Int32Enum_ (System_String_o* value, bool ignoreCase, const MethodInfo_358DB10* method);
// 0x368db10

int32_t MiscExtensions__ToEnum_Int32Enum_(System_String_o *value,bool ignoreCase,MethodInfo_358DB10 *method)

{
  System_RuntimeTypeHandle_o SVar1;
  bool bVar2;
  MethodInfo_358DB10_RGCTXs *pMVar3;
  System_Type_o *pSVar4;
  Il2CppObject *obj;
  Il2CppClass *klass;
  int32_t *piVar5;
  int32_t iVar6;
  
  pMVar3 = method->rgctx_data;
  if (pMVar3 == (MethodInfo_358DB10_RGCTXs *)0x0) {
    il2cpp_codegen_rgctx_method_init((MethodInfo *)method);
    pMVar3 = method->rgctx_data;
  }
  SVar1.fields.value = (System_RuntimeTypeHandle_Fields)pMVar3->_0_T;
  if ((g_data_075567a8->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_075567a8);
  }
  iVar6 = 0;
  pSVar4 = System_Type__GetTypeFromHandle(SVar1,(MethodInfo *)0x0);
  if ((g_data_07556760->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_07556760);
  }
  bVar2 = System_Enum__IsDefined(pSVar4,(Il2CppObject *)value,(MethodInfo *)0x0);
  if (bVar2) {
    SVar1.fields.value = (System_RuntimeTypeHandle_Fields)method->rgctx_data->_0_T;
    if ((g_data_075567a8->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init(g_data_075567a8);
    }
    pSVar4 = System_Type__GetTypeFromHandle(SVar1,(MethodInfo *)0x0);
    if ((g_data_07556760->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init(g_data_07556760);
    }
    obj = System_Enum__Parse_54f65c0(pSVar4,value,ignoreCase,(MethodInfo *)0x0);
    klass = method->rgctx_data->_1_T;
    if (((klass->_2).bitflags1 & 1) == 0) {
      klass = il2cpp_codegen_class_init_checked(klass);
    }
    if (obj == (Il2CppObject *)0x0) {
      ThrowNullReferenceException();
    }
    if ((obj->klass->_1).element_class != (klass->_1).element_class) {
      il2cpp_codegen_raise_invalid_cast_exception(obj,klass);
    }
    piVar5 = il2cpp_vm_Object_Unbox(obj);
    iVar6 = *piVar5;
  }
  return iVar6;
}


// MiscExtensions$$ToEnum<__Il2CppFullySharedGenericType>
// il2cpp: Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o MiscExtensions__ToEnum___Il2CppFullySharedGenericType_ (System_String_o* value, bool ignoreCase, const MethodInfo_358DC40* method);
// 0x368dc40

Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o
MiscExtensions__ToEnum___Il2CppFullySharedGenericType_
          (System_String_o *value,bool ignoreCase,MethodInfo_358DC40 *method)

{
  System_RuntimeTypeHandle_o SVar1;
  long lVar2;
  MethodInfo_358DC40 *__dest;
  System_String_o *pSVar3;
  ulong uVar4;
  bool bVar5;
  Il2CppRGCTXData *pIVar6;
  System_Type_o *pSVar7;
  Il2CppObject *pIVar8;
  Il2CppClass *klass;
  void *__src;
  MethodInfo *in_RCX;
  void *extraout_RDX;
  undefined1 *puVar9;
  undefined7 in_register_00000031;
  undefined1 *__s;
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o UVar10;
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o UVar11;
  undefined8 uStack_60;
  undefined1 auStack_58 [8];
  MethodInfo_358DC40 *local_50;
  System_String_o *local_48;
  undefined4 local_3c;
  ulong local_38;
  
  local_3c = (undefined4)CONCAT71(in_register_00000031,ignoreCase);
  pIVar6 = (in_RCX->field7_0x38).rgctx_data;
  local_48 = value;
  if (pIVar6 == (Il2CppRGCTXData *)0x0) {
    uStack_60 = 0x368dc6f;
    il2cpp_codegen_rgctx_method_init(in_RCX);
    pIVar6 = (in_RCX->field7_0x38).rgctx_data;
  }
  local_38 = (ulong)*(uint *)((long)pIVar6[1].klass + 0xfc);
  lVar2 = -(local_38 + 0xf & 0xfffffffffffffff0);
  __s = auStack_58 + lVar2;
  SVar1.fields.value = (System_RuntimeTypeHandle_Fields)pIVar6->rgctxDataDummy;
  puVar9 = __s;
  if ((g_data_075567a8->_2).cctor_finished_or_no_cctor == 0) {
    *(undefined8 *)(auStack_58 + lVar2 + -8) = 0x368dcb2;
    il2cpp_codegen_runtime_class_init(g_data_075567a8);
    puVar9 = auStack_58 + lVar2;
  }
  *(undefined8 *)(puVar9 + -8) = 0x368dcbc;
  pSVar7 = System_Type__GetTypeFromHandle(SVar1,(MethodInfo *)0x0);
  if ((g_data_07556760->_2).cctor_finished_or_no_cctor == 0) {
    *(undefined8 *)(puVar9 + -8) = 0x368dcd4;
    il2cpp_codegen_runtime_class_init(g_data_07556760);
  }
  pSVar3 = local_48;
  *(undefined8 *)(puVar9 + -8) = 0x368dce2;
  bVar5 = System_Enum__IsDefined(pSVar7,(Il2CppObject *)pSVar3,(MethodInfo *)0x0);
  uVar4 = local_38;
  if (bVar5) {
    SVar1.fields.value = (System_RuntimeTypeHandle_Fields)((in_RCX->field7_0x38).rgctx_data)->rgctxDataDummy;
    local_50 = method;
    if ((g_data_075567a8->_2).cctor_finished_or_no_cctor == 0) {
      *(undefined8 *)(puVar9 + -8) = 0x368dd0b;
      il2cpp_codegen_runtime_class_init(g_data_075567a8);
    }
    *(undefined8 *)(puVar9 + -8) = 0x368dd15;
    pSVar7 = System_Type__GetTypeFromHandle(SVar1,(MethodInfo *)0x0);
    if ((g_data_07556760->_2).cctor_finished_or_no_cctor == 0) {
      *(undefined8 *)(puVar9 + -8) = 0x368dd2d;
      il2cpp_codegen_runtime_class_init(g_data_07556760);
    }
    pSVar3 = local_48;
    bVar5 = local_3c._0_1_;
    *(undefined8 *)(puVar9 + -8) = 0x368dd3f;
    pIVar8 = System_Enum__Parse_54f65c0(pSVar7,pSVar3,bVar5,(MethodInfo *)0x0);
    klass = (in_RCX->field7_0x38).rgctx_data[1].klass;
    if (((klass->_2).bitflags1 & 1) == 0) {
      *(undefined8 *)(puVar9 + -8) = 0x368dd5c;
      klass = il2cpp_codegen_class_init_checked(klass);
    }
    uVar4 = local_38;
    *(undefined8 *)(puVar9 + -8) = 0x368dd6e;
    __src = (void *)il2cpp_runtime_helper_030d6290(pIVar8,klass,__s);
    __dest = local_50;
    *(undefined8 *)(puVar9 + -8) = 0x368dd7d;
    UVar10.klass = memcpy(__dest,__src,uVar4);
    UVar10.monitor = extraout_RDX;
    return UVar10;
  }
  *(undefined8 *)(puVar9 + -8) = 0x368dd9d;
  memset(__s,0,uVar4);
  UVar11.klass = memset(method,0,uVar4);
  UVar11.monitor = UVar11.monitor;
  return UVar11;
}


// MiscExtensions$$ParseFloat
// il2cpp: float MiscExtensions__ParseFloat (System_String_o* str, const MethodInfo* method);
// 0x5850600

float MiscExtensions__ParseFloat(System_String_o *str,MethodInfo *method)

{
  float fVar1;
  
  fVar1 = System_Single__Parse(str,(MethodInfo *)0x0);
  return fVar1;
}


// MiscExtensions$$IsGray
// il2cpp: bool MiscExtensions__IsGray (UnityEngine_Color_o color, const MethodInfo* method);
// 0x5850610

bool MiscExtensions__IsGray(UnityEngine_Color_o color,MethodInfo *method)

{
  bool bVar1;
  float fVar2;
  
  fVar2 = color.fields.r;
  bVar1 = false;
  if (fVar2 == color.fields.g) {
    if ((fVar2 == color.fields.b) && (!NAN(fVar2) && !NAN(color.fields.b))) {
      bVar1 = (bool)(-(color.fields.a == 1.0) & 1);
    }
  }
  return bVar1;
}


// MiscExtensions$$IsGray
// il2cpp: bool MiscExtensions__IsGray (Utility_Color255_o* color, const MethodInfo* method);
// 0x5850640

bool MiscExtensions__IsGray_5750640(Utility_Color255_o *color,MethodInfo *method)

{
  int iVar1;
  
  if (color == (Utility_Color255_o *)0x0) {
    ThrowNullReferenceException();
  }
  iVar1 = (color->fields).R;
  if ((iVar1 == (color->fields).G) && (iVar1 == (color->fields).B)) {
    return (color->fields).A == 0xff;
  }
  return false;
}


// MiscExtensions$$GetRandomItem<int>
// il2cpp: int32_t MiscExtensions__GetRandomItem_int_ (System_Collections_Generic_List_T__o* list, const MethodInfo_358D9C0* method);
// 0x368d9c0

int32_t MiscExtensions__GetRandomItem_int_
                  (System_Collections_Generic_List_T__o *list,MethodInfo_358D9C0 *method)

{
  int32_t iVar1;
  
  if (method->rgctx_data == (MethodInfo_358D9C0_RGCTXs *)0x0) {
    il2cpp_codegen_rgctx_method_init((MethodInfo *)method);
  }
  if (list == (System_Collections_Generic_List_T__o *)0x0) {
    ThrowNullReferenceException();
  }
  iVar1 = UnityEngine_Random__Range_690e2b0(0,(list->fields)._size,(MethodInfo *)0x0);
  iVar1 = System_Collections_Generic_List_int___get_Item
                    ((System_Collections_Generic_List_int__o *)list,iVar1,
                     (MethodInfo_39167D0 *)method->rgctx_data->_2_System_Collections_Generic_List_T__get_Item)
  ;
  return iVar1;
}


// MiscExtensions$$GetRandomItem<object>
// il2cpp: Il2CppObject* MiscExtensions__GetRandomItem_object_ (System_Collections_Generic_List_T__o* list, const MethodInfo_358DA10* method);
// 0x368da10

Il2CppObject *
MiscExtensions__GetRandomItem_object_(System_Collections_Generic_List_T__o *list,MethodInfo_358DA10 *method)

{
  int32_t index;
  Il2CppObject *pIVar1;
  
  if (method->rgctx_data == (MethodInfo_358DA10_RGCTXs *)0x0) {
    il2cpp_codegen_rgctx_method_init((MethodInfo *)method);
  }
  if (list == (System_Collections_Generic_List_T__o *)0x0) {
    ThrowNullReferenceException();
  }
  index = UnityEngine_Random__Range_690e2b0(0,(list->fields)._size,(MethodInfo *)0x0);
  pIVar1 = System_Collections_Generic_List_object___get_Item
                     ((System_Collections_Generic_List_object__o *)list,index,
                      (MethodInfo_395CF20 *)method->rgctx_data->_2_System_Collections_Generic_List_T__get_Item
                     );
  return pIVar1;
}


// MiscExtensions$$GetRandomItem<__Il2CppFullySharedGenericType>
// il2cpp: Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o MiscExtensions__GetRandomItem___Il2CppFullySharedGenericType_ (System_Collections_Generic_List_T__o* list, const MethodInfo_358DA60* method);
// 0x368da60

Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o
MiscExtensions__GetRandomItem___Il2CppFullySharedGenericType_
          (System_Collections_Generic_List_T__o *list,MethodInfo_358DA60 *method)

{
  Il2CppMethodPointer pIVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  code *pcVar4;
  long lVar5;
  int32_t maxExclusive;
  Il2CppRGCTXData *pIVar6;
  MethodInfo *in_RDX;
  void *extraout_RDX;
  void *__src;
  ulong __n;
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o UVar7;
  undefined8 uStack_50;
  int32_t *local_48;
  void *local_40;
  int32_t local_34;
  
  pIVar6 = (in_RDX->field7_0x38).rgctx_data;
  if (pIVar6 == (Il2CppRGCTXData *)0x0) {
    uStack_50 = 0x368da8b;
    il2cpp_codegen_rgctx_method_init(in_RDX);
    pIVar6 = (in_RDX->field7_0x38).rgctx_data;
  }
  __n = (ulong)((pIVar6[3].klass)->_2).stack_slot_size;
  lVar5 = -(__n + 0xf & 0xfffffffffffffff0);
  __src = (void *)((long)&local_48 + lVar5);
  if (list == (System_Collections_Generic_List_T__o *)0x0) {
    *(undefined8 *)((long)&uStack_50 + lVar5) = 0x368db0d;
    ThrowNullReferenceException();
  }
  pIVar1 = (pIVar6[1].method)->methodPointer;
  *(undefined8 *)((long)&uStack_50 + lVar5) = 0x368dab9;
  maxExclusive = (*pIVar1)();
  *(undefined8 *)((long)&uStack_50 + lVar5) = 0x368dac4;
  local_34 = UnityEngine_Random__Range_690e2b0(0,maxExclusive,(MethodInfo *)0x0);
  puVar2 = *(undefined8 **)((long)(in_RDX->field7_0x38).methodMetadataHandle + 0x10);
  uVar3 = *puVar2;
  local_48 = &local_34;
  pcVar4 = (code *)puVar2[2];
  local_40 = __src;
  *(undefined8 *)((long)&uStack_50 + lVar5) = 0x368daeb;
  (*pcVar4)(uVar3,puVar2,list,&local_48,__src);
  *(undefined8 *)((long)&uStack_50 + lVar5) = 0x368daf9;
  UVar7.klass = memcpy(method,__src,__n);
  UVar7.monitor = extraout_RDX;
  return UVar7;
}


// MiscExtensions$$GetRandomItem
// il2cpp: SimpleJSONFixed_JSONNode_o* MiscExtensions__GetRandomItem (SimpleJSONFixed_JSONNode_o* list, const MethodInfo* method);
// 0x5850670

SimpleJSONFixed_JSONNode_o *
MiscExtensions__GetRandomItem(SimpleJSONFixed_JSONNode_o *list,MethodInfo *method)

{
  int32_t iVar1;
  SimpleJSONFixed_JSONNode_o *pSVar2;
  
  if (list == (SimpleJSONFixed_JSONNode_o *)0x0) {
    ThrowNullReferenceException();
  }
  iVar1 = (*(list->klass->vtable)._11_get_Count.methodPtr)(list,(list->klass->vtable)._11_get_Count.method);
  iVar1 = UnityEngine_Random__Range_690e2b0(0,iVar1,(MethodInfo *)0x0);
  pSVar2 = (*(list->klass->vtable)._5_get_Item.methodPtr)(list,iVar1,(list->klass->vtable)._5_get_Item.method)
  ;
  return pSVar2;
}


// MiscExtensions$$ToColor
// il2cpp: UnityEngine_Color_o MiscExtensions__ToColor (SimpleJSONFixed_JSONNode_o* array, const MethodInfo* method);
// 0x58506c0

UnityEngine_Color_o MiscExtensions__ToColor(SimpleJSONFixed_JSONNode_o *array,MethodInfo *method)

{
  int32_t r;
  int32_t g;
  int32_t b;
  int32_t a;
  SimpleJSONFixed_JSONNode_o *pSVar1;
  Utility_Color255_o *__this;
  UnityEngine_Color_Fields UVar2;
  
  if (Il2CppMethodInitialized_07545047 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Color255);
    Il2CppMethodInitialized_07545047 = '\x01';
  }
  if (array != (SimpleJSONFixed_JSONNode_o *)0x0) {
    pSVar1 = (*(array->klass->vtable)._5_get_Item.methodPtr)
                       (array,0,(array->klass->vtable)._5_get_Item.method);
    if (pSVar1 != (SimpleJSONFixed_JSONNode_o *)0x0) {
      r = (*(pSVar1->klass->vtable)._35_get_AsInt.methodPtr)
                    (pSVar1,(pSVar1->klass->vtable)._35_get_AsInt.method);
      pSVar1 = (*(array->klass->vtable)._5_get_Item.methodPtr)
                         (array,1,(array->klass->vtable)._5_get_Item.method);
      if (pSVar1 != (SimpleJSONFixed_JSONNode_o *)0x0) {
        g = (*(pSVar1->klass->vtable)._35_get_AsInt.methodPtr)
                      (pSVar1,(pSVar1->klass->vtable)._35_get_AsInt.method);
        pSVar1 = (*(array->klass->vtable)._5_get_Item.methodPtr)
                           (array,2,(array->klass->vtable)._5_get_Item.method);
        if (pSVar1 != (SimpleJSONFixed_JSONNode_o *)0x0) {
          b = (*(pSVar1->klass->vtable)._35_get_AsInt.methodPtr)
                        (pSVar1,(pSVar1->klass->vtable)._35_get_AsInt.method);
          pSVar1 = (*(array->klass->vtable)._5_get_Item.methodPtr)
                             (array,3,(array->klass->vtable)._5_get_Item.method);
          if (pSVar1 != (SimpleJSONFixed_JSONNode_o *)0x0) {
            a = (*(pSVar1->klass->vtable)._35_get_AsInt.methodPtr)
                          (pSVar1,(pSVar1->klass->vtable)._35_get_AsInt.method);
            __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Utility_Color255);
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
  ThrowNullReferenceException();
}


// MiscExtensions$$GetPlayerInfo
// il2cpp: GameManagers_PlayerInfo_o* MiscExtensions__GetPlayerInfo (Photon_Realtime_Player_o* player, const MethodInfo* method);
// 0x5850810
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5850833: test rbx, rbx
// asm:   0x5850838: jmp 0x58508f5

GameManagers_PlayerInfo_o * MiscExtensions__GetPlayerInfo(Photon_Realtime_Player_o *player,MethodInfo *method)

{
  uint32_t uVar1;
  System_Collections_Generic_Dictionary_int__object__o *pSVar2;
  bool bVar3;
  GameManagers_PlayerInfo_o *pGVar4;
  
  if (Il2CppMethodInitialized_07545048 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_PlayerInfo_ContainsKey);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_PlayerInfo_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_InGameManager);
    Il2CppMethodInitialized_07545048 = '\x01';
    uVar1 = (TypeInfo_GameManagers_InGameManager->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_GameManagers_InGameManager->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_InGameManager);
  }
  if ((player != (Photon_Realtime_Player_o *)0x0) &&
     (pSVar2 = *(System_Collections_Generic_Dictionary_int__object__o **)
                ((long)((Il2CppClass *)TypeInfo_GameManagers_InGameManager)->static_fields + 0x28),
     pSVar2 != (System_Collections_Generic_Dictionary_int__object__o *)0x0)) {
    bVar3 = System_Collections_Generic_Dictionary_int__object___ContainsKey
                      (pSVar2,(player->fields).actorNumber,
                       (MethodInfo_4A0F950 *)
                       MethodInfo_System_Collections_Generic_Dictionary_int_PlayerInfo_ContainsKey);
    if (!bVar3) {
      return (GameManagers_PlayerInfo_o *)0x0;
    }
    if ((TypeInfo_GameManagers_InGameManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_InGameManager);
    }
    pSVar2 = (System_Collections_Generic_Dictionary_int__object__o *)
             TypeInfo_GameManagers_InGameManager->static_fields->AllPlayerInfo;
    if (pSVar2 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
      pGVar4 = System_Collections_Generic_Dictionary_int__object___get_Item
                         (pSVar2,(player->fields).actorNumber,
                          (MethodInfo_4A0F690 *)
                          MethodInfo_System_Collections_Generic_Dictionary_int_PlayerInfo_get_Item);
      return pGVar4;
    }
  }
  ThrowNullReferenceException();
}


// MiscExtensions$$.cctor
// il2cpp: void MiscExtensions___cctor (const MethodInfo* method);
// 0x5850900

void MiscExtensions___cctor(MethodInfo *method)

{
  uint32_t uVar1;
  MiscExtensions_StaticFields *pMVar2;
  System_OrdinalIgnoreCaseComparer_o *comparer;
  System_Text_RegularExpressions_Regex_o *pSVar3;
  System_String_array *values;
  System_String_o *pSVar4;
  System_Collections_Generic_Dictionary_string__string__o *__this;
  
  if (Il2CppMethodInitialized_07545049 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_string_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_string_ctor_718bd38);
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
    Il2CppMethodInitialized_07545049 = '\x01';
  }
  TypeInfo_MiscExtensions->static_fields->HexPattern = "(\\[)([A-Fa-f0-9]{3}|[A-Fa-f0-9]{6})(\\])";
  Il2CppCodeGenWriteBarrier(&TypeInfo_MiscExtensions->static_fields->HexPattern);
  pMVar2 = TypeInfo_MiscExtensions->static_fields;
  pMVar2->ColorTagPattern = "(<color=#)([A-Fa-f0-9]{3}|[A-Fa-f0-9]{6})(>)";
  Il2CppCodeGenWriteBarrier(&pMVar2->ColorTagPattern);
  pMVar2 = TypeInfo_MiscExtensions->static_fields;
  pMVar2->ColorEndPattern = "(</color>)";
  Il2CppCodeGenWriteBarrier(&pMVar2->ColorEndPattern);
  pMVar2 = TypeInfo_MiscExtensions->static_fields;
  pMVar2->TagPattern = "<\\/?[^>]+>";
  Il2CppCodeGenWriteBarrier(&pMVar2->TagPattern);
  pMVar2 = TypeInfo_MiscExtensions->static_fields;
  pMVar2->SizePattern = "<\\/?size.*?>";
  Il2CppCodeGenWriteBarrier(&pMVar2->SizePattern);
  pMVar2 = TypeInfo_MiscExtensions->static_fields;
  pMVar2->MaterialPattern = "<\\/?material.*?>";
  Il2CppCodeGenWriteBarrier(&pMVar2->MaterialPattern);
  pMVar2 = TypeInfo_MiscExtensions->static_fields;
  pMVar2->QuadPattern = "<\\/?quad.*?>";
  Il2CppCodeGenWriteBarrier(&pMVar2->QuadPattern);
  pSVar4 = TypeInfo_MiscExtensions->static_fields->HexPattern;
  pSVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Text_RegularExpressions_Regex);
  System_Text_RegularExpressions_Regex___ctor_61e4ae0(pSVar3,pSVar4,(MethodInfo *)0x0);
  pMVar2 = TypeInfo_MiscExtensions->static_fields;
  pMVar2->HexRegex = pSVar3;
  Il2CppCodeGenWriteBarrier(&pMVar2->HexRegex);
  pSVar4 = TypeInfo_MiscExtensions->static_fields->ColorTagPattern;
  pSVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Text_RegularExpressions_Regex);
  System_Text_RegularExpressions_Regex___ctor_61e4ae0(pSVar3,pSVar4,(MethodInfo *)0x0);
  pMVar2 = TypeInfo_MiscExtensions->static_fields;
  pMVar2->ColorTagRegex = pSVar3;
  Il2CppCodeGenWriteBarrier(&pMVar2->ColorTagRegex);
  pSVar4 = TypeInfo_MiscExtensions->static_fields->ColorEndPattern;
  pSVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Text_RegularExpressions_Regex);
  System_Text_RegularExpressions_Regex___ctor_61e4ae0(pSVar3,pSVar4,(MethodInfo *)0x0);
  pMVar2 = TypeInfo_MiscExtensions->static_fields;
  pMVar2->ColorEndRegex = pSVar3;
  Il2CppCodeGenWriteBarrier(&pMVar2->ColorEndRegex);
  pSVar4 = TypeInfo_MiscExtensions->static_fields->TagPattern;
  pSVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Text_RegularExpressions_Regex);
  System_Text_RegularExpressions_Regex___ctor_61e4ae0(pSVar3,pSVar4,(MethodInfo *)0x0);
  pMVar2 = TypeInfo_MiscExtensions->static_fields;
  pMVar2->TagRegex = pSVar3;
  Il2CppCodeGenWriteBarrier(&pMVar2->TagRegex);
  values = (System_String_array *)SZArrayNew(TypeInfo_string_array,5);
  if (values == (System_String_array *)0x0) goto label_058510f0;
  if ((int)values->max_length == 0) {
label_058510eb:
    ThrowIndexOutOfRangeException();
  }
  values->m_Items[0] = TypeInfo_MiscExtensions->static_fields->SizePattern;
  Il2CppCodeGenWriteBarrier(values->m_Items);
  if ((values->max_length & 0xfffffffe) == 0) goto label_058510eb;
  values->m_Items[1] = "|";
  Il2CppCodeGenWriteBarrier(values->m_Items + 1);
  if ((uint)values->max_length < 3) goto label_058510eb;
  values->m_Items[2] = TypeInfo_MiscExtensions->static_fields->MaterialPattern;
  Il2CppCodeGenWriteBarrier(values->m_Items + 2);
  if ((values->max_length & 0xfffffffc) == 0) goto label_058510eb;
  values->m_Items[3] = "|";
  Il2CppCodeGenWriteBarrier(values->m_Items + 3);
  if ((uint)values->max_length < 5) goto label_058510eb;
  values->m_Items[4] = TypeInfo_MiscExtensions->static_fields->QuadPattern;
  Il2CppCodeGenWriteBarrier(values->m_Items + 4);
  pSVar4 = System_String__Concat_5302910(values,(MethodInfo *)0x0);
  pSVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Text_RegularExpressions_Regex);
  System_Text_RegularExpressions_Regex___ctor_61e4ae0(pSVar3,pSVar4,(MethodInfo *)0x0);
  pMVar2 = TypeInfo_MiscExtensions->static_fields;
  pMVar2->IllegalStyleRegex = pSVar3;
  Il2CppCodeGenWriteBarrier(&pMVar2->IllegalStyleRegex);
  pSVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Text_RegularExpressions_Regex);
  System_Text_RegularExpressions_Regex___ctor_61e4b50(pSVar3,"<color=(\\w+)>",9,(MethodInfo *)0x0);
  pMVar2 = TypeInfo_MiscExtensions->static_fields;
  pMVar2->NamedColorTagRegex = pSVar3;
  Il2CppCodeGenWriteBarrier(&pMVar2->NamedColorTagRegex);
  if ((TypeInfo_System_StringComparer->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_StringComparer);
    if (g_data_07542886 != '\0') goto label_05850e8a;
label_058510bb:
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_StringComparer);
    g_data_07542886 = '\x01';
    uVar1 = (TypeInfo_System_StringComparer->_2).cctor_finished_or_no_cctor;
  }
  else {
    if (g_data_07542886 == '\0') goto label_058510bb;
label_05850e8a:
    uVar1 = (TypeInfo_System_StringComparer->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_StringComparer);
  }
  comparer = TypeInfo_System_StringComparer->static_fields->s_ordinalIgnoreCase;
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_string_string);
  System_Collections_Generic_Dictionary_object__object____ctor_4aac9c0
            ((System_Collections_Generic_Dictionary_object__object__o *)__this,
             (System_Collections_Generic_IEqualityComparer_TKey__o *)comparer,
             (MethodInfo_4AAC9C0 *)MethodInfo_System_Collections_Generic_Dictionary_string_string_ctor_718bd38
            );
  if (__this != (System_Collections_Generic_Dictionary_string__string__o *)0x0) {
    System_Collections_Generic_Dictionary_object__object___Add
              ((System_Collections_Generic_Dictionary_object__object__o *)__this,
               (Il2CppObject *)"aqua",(Il2CppObject *)"#00ffffff",
               (MethodInfo_4AAD4E0 *)MethodInfo_System_Collections_Generic_Dictionary_string_string_Add);
    System_Collections_Generic_Dictionary_object__object___Add
              ((System_Collections_Generic_Dictionary_object__object__o *)__this,
               (Il2CppObject *)"cyan",(Il2CppObject *)"#00ffffff",
               (MethodInfo_4AAD4E0 *)MethodInfo_System_Collections_Generic_Dictionary_string_string_Add);
    System_Collections_Generic_Dictionary_object__object___Add
              ((System_Collections_Generic_Dictionary_object__object__o *)__this,
               (Il2CppObject *)"brown",(Il2CppObject *)"#a52a2aff",
               (MethodInfo_4AAD4E0 *)MethodInfo_System_Collections_Generic_Dictionary_string_string_Add);
    System_Collections_Generic_Dictionary_object__object___Add
              ((System_Collections_Generic_Dictionary_object__object__o *)__this,
               (Il2CppObject *)"darkblue",(Il2CppObject *)"#0000a0ff",
               (MethodInfo_4AAD4E0 *)MethodInfo_System_Collections_Generic_Dictionary_string_string_Add);
    System_Collections_Generic_Dictionary_object__object___Add
              ((System_Collections_Generic_Dictionary_object__object__o *)__this,
               (Il2CppObject *)"fuchsia",(Il2CppObject *)"#ff00ffff",
               (MethodInfo_4AAD4E0 *)MethodInfo_System_Collections_Generic_Dictionary_string_string_Add);
    System_Collections_Generic_Dictionary_object__object___Add
              ((System_Collections_Generic_Dictionary_object__object__o *)__this,
               (Il2CppObject *)"magenta",(Il2CppObject *)"#ff00ffff",
               (MethodInfo_4AAD4E0 *)MethodInfo_System_Collections_Generic_Dictionary_string_string_Add);
    System_Collections_Generic_Dictionary_object__object___Add
              ((System_Collections_Generic_Dictionary_object__object__o *)__this,
               (Il2CppObject *)"grey",(Il2CppObject *)"#808080ff",
               (MethodInfo_4AAD4E0 *)MethodInfo_System_Collections_Generic_Dictionary_string_string_Add);
    System_Collections_Generic_Dictionary_object__object___Add
              ((System_Collections_Generic_Dictionary_object__object__o *)__this,
               (Il2CppObject *)"lightblue",(Il2CppObject *)"#add8e6ff",
               (MethodInfo_4AAD4E0 *)MethodInfo_System_Collections_Generic_Dictionary_string_string_Add);
    System_Collections_Generic_Dictionary_object__object___Add
              ((System_Collections_Generic_Dictionary_object__object__o *)__this,
               (Il2CppObject *)"lime",(Il2CppObject *)"#00ff00ff",
               (MethodInfo_4AAD4E0 *)MethodInfo_System_Collections_Generic_Dictionary_string_string_Add);
    System_Collections_Generic_Dictionary_object__object___Add
              ((System_Collections_Generic_Dictionary_object__object__o *)__this,
               (Il2CppObject *)"maroon",(Il2CppObject *)"#800000ff",
               (MethodInfo_4AAD4E0 *)MethodInfo_System_Collections_Generic_Dictionary_string_string_Add);
    System_Collections_Generic_Dictionary_object__object___Add
              ((System_Collections_Generic_Dictionary_object__object__o *)__this,
               (Il2CppObject *)"navy",(Il2CppObject *)"#000080ff",
               (MethodInfo_4AAD4E0 *)MethodInfo_System_Collections_Generic_Dictionary_string_string_Add);
    System_Collections_Generic_Dictionary_object__object___Add
              ((System_Collections_Generic_Dictionary_object__object__o *)__this,
               (Il2CppObject *)"olive",(Il2CppObject *)"#808000ff",
               (MethodInfo_4AAD4E0 *)MethodInfo_System_Collections_Generic_Dictionary_string_string_Add);
    System_Collections_Generic_Dictionary_object__object___Add
              ((System_Collections_Generic_Dictionary_object__object__o *)__this,
               (Il2CppObject *)"silver",(Il2CppObject *)"#c0c0c0ff",
               (MethodInfo_4AAD4E0 *)MethodInfo_System_Collections_Generic_Dictionary_string_string_Add);
    System_Collections_Generic_Dictionary_object__object___Add
              ((System_Collections_Generic_Dictionary_object__object__o *)__this,
               (Il2CppObject *)"teal",(Il2CppObject *)"#008080ff",
               (MethodInfo_4AAD4E0 *)MethodInfo_System_Collections_Generic_Dictionary_string_string_Add);
    pMVar2 = TypeInfo_MiscExtensions->static_fields;
    pMVar2->NamedColorHex = __this;
    Il2CppCodeGenWriteBarrier(&pMVar2->NamedColorHex);
    return;
  }
label_058510f0:
  ThrowNullReferenceException();
}


