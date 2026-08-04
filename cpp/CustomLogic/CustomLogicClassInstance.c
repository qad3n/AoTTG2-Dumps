// Type: CustomLogic.CustomLogicClassInstance
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicClassInstance.cs
// Prior real C# source (older reference): Assets/Scripts/CustomLogic/Builtin/CustomLogicClassInstance.cs
// --------------------------------

// CustomLogic.CustomLogicClassInstance$$SetContainsTypeOverride
// il2cpp: void CustomLogic_CustomLogicClassInstance__SetContainsTypeOverride (CustomLogic_CustomLogicClassInstance_o* __this, bool contains, const MethodInfo* method);
// 0x425a4c0

void CustomLogic_CustomLogicClassInstance__SetContainsTypeOverride
               (CustomLogic_CustomLogicClassInstance_o *__this,bool_conflict contains,MethodInfo *method)

{
  *(char *)&(__this->fields)._containsTypeOverride = (char)contains;
  return;
}


// CustomLogic.CustomLogicClassInstance$$get_Namespace
// il2cpp: System_Nullable_CustomLogicSourceType__o CustomLogic_CustomLogicClassInstance__get_Namespace (CustomLogic_CustomLogicClassInstance_o* __this, const MethodInfo* method);
// 0x425a4d0

System_Nullable_CustomLogicSourceType__o
CustomLogic_CustomLogicClassInstance__get_Namespace
          (CustomLogic_CustomLogicClassInstance_o *__this,MethodInfo *method)

{
  return (System_Nullable_CustomLogicSourceType__o)(__this->fields)._Namespace_k__BackingField.fields;
}


// CustomLogic.CustomLogicClassInstance$$set_Namespace
// il2cpp: void CustomLogic_CustomLogicClassInstance__set_Namespace (CustomLogic_CustomLogicClassInstance_o* __this, System_Nullable_CustomLogicSourceType__o value, const MethodInfo* method);
// 0x425a4e0

void CustomLogic_CustomLogicClassInstance__set_Namespace
               (CustomLogic_CustomLogicClassInstance_o *__this,System_Nullable_CustomLogicSourceType__o value,
               MethodInfo *method)

{
  (__this->fields)._Namespace_k__BackingField.fields = value.fields;
  return;
}


// CustomLogic.CustomLogicClassInstance$$.ctor
// il2cpp: void CustomLogic_CustomLogicClassInstance___ctor (CustomLogic_CustomLogicClassInstance_o* __this, const MethodInfo* method);
// 0x42543c0

void CustomLogic_CustomLogicClassInstance___ctor
               (CustomLogic_CustomLogicClassInstance_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  
  if (g_data_057adbc3 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_String_System_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_string_object);
    g_data_057adbc3 = '\x01';
  }
  *(undefined1 *)&(__this->fields).Enabled = 1;
  *(undefined1 *)&(__this->fields)._LookupBaseClassForVariables_k__BackingField = 1;
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_string_object);
  System_Collections_Generic_Dictionary_object__object____ctor(__this_00,MethodInfo_Dictionary_2_System_String_System_Object);
  (__this->fields).Variables = (System_Collections_Generic_Dictionary_string__object__o *)__this_00;
  il2cpp_runtime_helper_022b4080(&(__this->fields).Variables,__this_00);
  return;
}


// CustomLogic.CustomLogicClassInstance$$get_LookupBaseClassForVariables
// il2cpp: bool CustomLogic_CustomLogicClassInstance__get_LookupBaseClassForVariables (CustomLogic_CustomLogicClassInstance_o* __this, const MethodInfo* method);
// 0x425a4f0

bool_conflict
CustomLogic_CustomLogicClassInstance__get_LookupBaseClassForVariables
          (CustomLogic_CustomLogicClassInstance_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),
                  (char)(__this->fields)._LookupBaseClassForVariables_k__BackingField);
}


// CustomLogic.CustomLogicClassInstance$$ToString
// il2cpp: System_String_o* CustomLogic_CustomLogicClassInstance__ToString (CustomLogic_CustomLogicClassInstance_o* __this, const MethodInfo* method);
// 0x425a500

System_String_o *
CustomLogic_CustomLogicClassInstance__ToString
          (CustomLogic_CustomLogicClassInstance_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  CustomLogic_CustomLogicEvaluator_o *pCVar5;
  char *pcVar6;
  InvokerMethod pIVar7;
  System_Collections_Generic_List_Enumerator_object__o __this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  char cVar8;
  bool_conflict bVar9;
  int32_t iVar10;
  System_String_o *pSVar11;
  System_Collections_Generic_HashSet_object__o *pSVar12;
  CustomLogic_CustomLogicClassInstance_o *__this_05;
  uint *puVar13;
  undefined4 extraout_var;
  System_Object_array *parameterValues;
  long lVar14;
  Il2CppObject *pIVar15;
  undefined1 *puVar16;
  undefined4 extraout_var_00;
  CustomLogic_CustomLogicClassInstance_o *__this_06;
  MethodInfo_33E0DF0 **str3;
  System_String_o *pSVar17;
  System_String_o *str2;
  MethodInfo_3104D80 **message;
  undefined8 uVar18;
  System_Exception_o *__this_07;
  _union_249689 __this_08;
  _union_249689 typeName;
  System_String_o *extraout_RAX;
  System_String_o *extraout_RAX_00;
  System_Func_TSource__TKey__o *keySelector;
  System_Linq_IOrderedEnumerable_TSource__o *source;
  System_Collections_Generic_List_TSource__o *__this_09;
  System_String_array *pSVar19;
  Il2CppClass *pIVar20;
  System_Object_array *pSVar21;
  System_Object_array *pSVar22;
  undefined8 *puVar23;
  ulong uVar24;
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
  MethodInfo *extraout_RDX_03;
  MethodInfo *extraout_RDX_04;
  MethodInfo *pMVar25;
  MethodInfo *extraout_RDX_05;
  MethodInfo *extraout_RDX_06;
  _union_249689 extraout_RDX_07;
  long *plVar26;
  int iVar27;
  System_String_o *unaff_RBP;
  System_String_c *key;
  System_Collections_Generic_Dictionary_object__object__o *pSVar28;
  _union_249689 item;
  _union_249689 collection;
  System_Collections_Generic_Dictionary_object__object__o *pSVar29;
  Il2CppRGCTXData *__this_10;
  System_Collections_Generic_List_object__o *__this_11;
  int iVar30;
  MethodInfo_3104D80 **unaff_R13;
  undefined4 uVar31;
  System_String_o **ppSVar32;
  undefined1 auVar33 [12];
  undefined8 in_stack_fffffffffffffe48;
  MethodInfo *pMVar34;
  System_Collections_Generic_List_Enumerator_T__c *pSVar35;
  System_Collections_Generic_List_TSource__o *pSStack_198;
  System_Collections_Generic_List_Enumerator_T__o SStack_188;
  Il2CppRGCTXData *pIStack_170;
  _union_249689 _Stack_168;
  _union_249689 *p_Stack_160;
  _union_249689 _Stack_158;
  System_String_o *pSStack_150;
  System_Exception_o *pSStack_148;
  undefined8 uStack_140;
  System_Collections_Generic_Dictionary_object__object__o *pSStack_138;
  _union_249689 _Stack_130;
  undefined8 uStack_128;
  _union_249689 _Stack_120;
  System_String_o *pSStack_118;
  _union_249689 _Stack_108;
  System_Exception_o *pSStack_100;
  _union_249689 _Stack_f8;
  Il2CppObject *pIStack_f0;
  System_Exception_o *pSStack_e8;
  CustomLogic_CustomLogicEvaluator_o *pCStack_e0;
  System_String_o **ppSStack_d8;
  System_String_o *pSStack_d0;
  System_String_o *pSStack_c8;
  System_String_o *pSStack_c0;
  System_String_o *pSStack_b0;
  System_Object_array *pSStack_a8;
  CustomLogic_CustomLogicClassInstance_o *pCStack_a0;
  System_Collections_Generic_Dictionary_object__object__o *pSStack_98;
  CustomLogic_CustomLogicEvaluator_o *pCStack_90;
  System_String_o *pSStack_88;
  MethodInfo_3104D80 **ppMStack_80;
  System_Collections_Generic_Dictionary_object__object__o *pSStack_78;
  System_String_o **ppSStack_70;
  CustomLogic_CustomLogicEvaluator_o *pCStack_68;
  System_String_c *pSStack_60;
  MethodInfo_33E0DF0 **ppMStack_58;
  undefined8 uStack_50;
  CustomLogic_CustomLogicEvaluator_o *pCStack_48;
  
  if (g_data_057adbc4 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    il2cpp_runtime_helper_023445d0(&"__Str__");
    il2cpp_runtime_helper_023445d0(&"(CustomLogicClassInstance)");
    g_data_057adbc4 = '\x01';
    in_RDX = extraout_RDX;
    if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) goto label_0425a577;
label_0425a524:
    plVar26 = *(long **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
  }
  else {
    if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) != 0) goto label_0425a524;
label_0425a577:
    il2cpp_runtime_helper_02337ed0();
    plVar26 = *(long **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
    in_RDX = extraout_RDX_00;
  }
  if ((CustomLogic_CustomLogicEvaluator_o *)plVar26 == (CustomLogic_CustomLogicEvaluator_o *)0x0) {
label_0425a5d9:
    pSVar11 = (System_String_o *)
              (*(__this->klass->vtable)._4_unknown.methodPtr)
                        (__this,(__this->klass->vtable)._4_unknown.method);
    pSVar11 = System_String__Concat_3ae5ba0("(CustomLogicClassInstance)",pSVar11,(MethodInfo *)0x0);
    return pSVar11;
  }
  ppSVar32 = &"__Str__";
  bVar9 = CustomLogic_CustomLogicClassInstance__HasVariable(__this,"__Str__",in_RDX);
  if ((char)bVar9 == '\0') goto label_0425a5d9;
  pSVar11 = (System_String_o *)
            CustomLogic_CustomLogicEvaluator__EvaluateMethod
                      ((CustomLogic_CustomLogicEvaluator_o *)plVar26,__this,"__Str__",
                       (System_Object_array *)0x0,0,(MethodInfo *)0x0);
  if ((pSVar11 == (System_String_o *)0x0) || (puVar23 = &g_data_057b9b70, pSVar11->klass == g_data_057b9c00)) {
    return pSVar11;
  }
  key = g_data_057b9c00;
  uStack_50 = il2cpp_runtime_helper_022b2fd0();
  pCStack_48 = (CustomLogic_CustomLogicEvaluator_o *)plVar26;
  if (g_data_057adbc8 == '\0') {
    ppMStack_58 = (MethodInfo_33E0DF0 **)0x425a636;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicBuiltinTypes);
    ppMStack_58 = (MethodInfo_33E0DF0 **)0x425a642;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    ppMStack_58 = (MethodInfo_33E0DF0 **)0x425a64e;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    ppMStack_58 = (MethodInfo_33E0DF0 **)0x425a65a;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Item);
    ppMStack_58 = (MethodInfo_33E0DF0 **)0x425a666;
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_System_String_get_Item);
    ppMStack_58 = (MethodInfo_33E0DF0 **)0x425a672;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Contains);
    g_data_057adbc8 = '\x01';
  }
  pSVar29 = (System_Collections_Generic_Dictionary_object__object__o *)0x0;
  if (pSVar11[1].klass != (System_String_c *)0x0) {
    ppMStack_58 = (MethodInfo_33E0DF0 **)0x425a699;
    bVar9 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                      ((System_Collections_Generic_Dictionary_object__object__o *)pSVar11[1].klass,
                       (Il2CppObject *)key,MethodInfo_Boolean_ContainsKey);
    uVar24 = CONCAT71((int7)((ulong)puVar23 >> 8),1);
    if ((char)bVar9 != '\0') {
label_0425a7f4:
      return (System_String_o *)(uVar24 & 0xffffffff);
    }
    ppMStack_58 = (MethodInfo_33E0DF0 **)0x425a6b7;
    unaff_RBP = (System_String_o *)(*(pSVar11->klass->vtable)._4_CompareTo.methodPtr)(pSVar11);
    plVar26 = &TypeInfo_CustomLogicBuiltinTypes;
    unaff_R13 = &MethodInfo_HashSet_1_System_String_get_Item;
    iVar30 = *(int *)(TypeInfo_CustomLogicBuiltinTypes + 0xe4);
    while( true ) {
      if (iVar30 == 0) {
        ppMStack_58 = (MethodInfo_33E0DF0 **)0x425a6e5;
        il2cpp_runtime_helper_02337ed0();
      }
      ppMStack_58 = (MethodInfo_33E0DF0 **)0x425a6ef;
      bVar9 = CustomLogic_CustomLogicBuiltinTypes__IsBuiltinType(unaff_RBP,(MethodInfo *)0x0);
      if ((char)bVar9 == '\0') goto label_0425a7ee;
      if (*(int *)(TypeInfo_CustomLogicBuiltinTypes + 0xe4) == 0) {
        ppMStack_58 = (MethodInfo_33E0DF0 **)0x425a708;
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar29 = *(System_Collections_Generic_Dictionary_object__object__o **)
                 (*(long *)(TypeInfo_CustomLogicBuiltinTypes + 0xb8) + 0x18);
      ppSVar32 = (System_String_o **)&MethodInfo_Boolean_Contains;
      if (pSVar29 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) break;
      ppMStack_58 = (MethodInfo_33E0DF0 **)0x425a72b;
      pSVar12 = (System_Collections_Generic_HashSet_object__o *)
                System_Collections_Generic_Dictionary_object__object___get_Item
                          (pSVar29,(Il2CppObject *)unaff_RBP,MethodInfo_HashSet_1_System_String_get_Item);
      if (pSVar12 == (System_Collections_Generic_HashSet_object__o *)0x0) break;
      ppMStack_58 = (MethodInfo_33E0DF0 **)0x425a742;
      bVar9 = System_Collections_Generic_HashSet_object___Contains(pSVar12,(Il2CppObject *)key,MethodInfo_Boolean_Contains);
      if ((char)bVar9 != '\0') {
        uVar24 = CONCAT71((int7)(uVar24 >> 8),1);
        goto label_0425a7f4;
      }
      ppMStack_58 = (MethodInfo_33E0DF0 **)0x425a75e;
      cVar8 = (*(pSVar11->klass->vtable)._5_System_Collections_IEnumerable_GetEnumerator.methodPtr)(pSVar11);
      if (cVar8 == '\0') {
label_0425a7ee:
        uVar24 = 0;
        goto label_0425a7f4;
      }
      if (*(int *)(TypeInfo_CustomLogicBuiltinTypes + 0xe4) == 0) {
        ppMStack_58 = (MethodInfo_33E0DF0 **)0x425a777;
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar28 = *(System_Collections_Generic_Dictionary_object__object__o **)
                 (*(long *)(TypeInfo_CustomLogicBuiltinTypes + 0xb8) + 0x10);
      pSVar29 = (System_Collections_Generic_Dictionary_object__object__o *)0x0;
      if (pSVar28 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) break;
      ppMStack_58 = (MethodInfo_33E0DF0 **)0x425a79c;
      bVar9 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                        (pSVar28,(Il2CppObject *)unaff_RBP,MethodInfo_Boolean_ContainsKey);
      if ((char)bVar9 == '\0') goto label_0425a7ee;
      if (*(int *)(TypeInfo_CustomLogicBuiltinTypes + 0xe4) == 0) {
        ppMStack_58 = (MethodInfo_33E0DF0 **)0x425a7b1;
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar28 = *(System_Collections_Generic_Dictionary_object__object__o **)
                 (*(long *)(TypeInfo_CustomLogicBuiltinTypes + 0xb8) + 0x10);
      pSVar29 = (System_Collections_Generic_Dictionary_object__object__o *)0x0;
      if (pSVar28 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) break;
      ppMStack_58 = (MethodInfo_33E0DF0 **)0x425a7d6;
      unaff_RBP = (System_String_o *)
                  System_Collections_Generic_Dictionary_object__object___get_Item
                            (pSVar28,(Il2CppObject *)unaff_RBP,MethodInfo_String_get_Item);
      iVar30 = *(int *)(TypeInfo_CustomLogicBuiltinTypes + 0xe4);
    }
  }
  ppMStack_58 = (MethodInfo_33E0DF0 **)0x425a80a;
  il2cpp_runtime_helper_022b2c90();
  pCStack_68 = (CustomLogic_CustomLogicEvaluator_o *)plVar26;
  pSStack_60 = key;
  ppMStack_58 = (MethodInfo_33E0DF0 **)ppSVar32;
  if (g_data_057adbc5 == '\0') {
    ppSStack_70 = (System_String_o **)0x425a855;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    ppSStack_70 = (System_String_o **)0x425a861;
    il2cpp_runtime_helper_023445d0(&"__Hash__");
    g_data_057adbc5 = '\x01';
    pMVar25 = extraout_RDX_02;
    if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) goto label_0425a87b;
label_0425a834:
    pCVar5 = *(CustomLogic_CustomLogicEvaluator_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
  }
  else {
    pMVar25 = extraout_RDX_01;
    if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) != 0) goto label_0425a834;
label_0425a87b:
    ppSStack_70 = (System_String_o **)0x425a880;
    il2cpp_runtime_helper_02337ed0();
    pCVar5 = *(CustomLogic_CustomLogicEvaluator_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
    pMVar25 = extraout_RDX_03;
  }
  if (pCVar5 == (CustomLogic_CustomLogicEvaluator_o *)0x0) {
label_0425a8ec:
    iVar10 = System_Object__GetHashCode((Il2CppObject *)pSVar29,(MethodInfo *)0x0);
    return (System_String_o *)CONCAT44(extraout_var,iVar10);
  }
  ppSStack_70 = (System_String_o **)0x425a8a5;
  bVar9 = CustomLogic_CustomLogicClassInstance__HasVariable
                    ((CustomLogic_CustomLogicClassInstance_o *)pSVar29,"__Hash__",pMVar25);
  if ((char)bVar9 == '\0') goto label_0425a8ec;
  pSVar21 = (System_Object_array *)0x0;
  ppSStack_70 = (System_String_o **)0x425a8bf;
  pSVar28 = pSVar29;
  __this_05 = (CustomLogic_CustomLogicClassInstance_o *)
              CustomLogic_CustomLogicEvaluator__EvaluateMethod
                        (pCVar5,(CustomLogic_CustomLogicClassInstance_o *)pSVar29,"__Hash__",
                         (System_Object_array *)0x0,0,(MethodInfo *)0x0);
  if (__this_05 == (CustomLogic_CustomLogicClassInstance_o *)0x0) {
    ppSStack_70 = (System_String_o **)0x425a900;
    __this_05 = (CustomLogic_CustomLogicClassInstance_o *)il2cpp_runtime_helper_022b2c90();
  }
  else {
    pSVar21 = (System_Object_array *)(((Il2CppClass *)__this_05->klass)->_1).element_class;
    pSVar28 = g_data_057b9bb8;
    if (pSVar21 == (System_Object_array *)(g_data_057b9bb8->fields)._values) {
      ppSStack_70 = (System_String_o **)0x425a8e4;
      puVar13 = (uint *)il2cpp_runtime_helper_02305440(__this_05);
      return (System_String_o *)(ulong)*puVar13;
    }
  }
  ppSStack_70 = (System_String_o **)0x425a908;
  il2cpp_runtime_helper_022b2fd0();
  ppSStack_70 = &"__Hash__";
  pCStack_90 = pCVar5;
  pSStack_88 = pSVar11;
  ppMStack_80 = unaff_R13;
  pSStack_78 = pSVar29;
  if (g_data_057adbc6 == '\0') {
    pSStack_98 = (System_Collections_Generic_Dictionary_object__object__o *)0x425a95c;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    pSStack_98 = (System_Collections_Generic_Dictionary_object__object__o *)0x425a968;
    il2cpp_runtime_helper_023445d0(&TypeInfo_object);
    pSStack_98 = (System_Collections_Generic_Dictionary_object__object__o *)0x425a974;
    il2cpp_runtime_helper_023445d0(&"__Eq__");
    g_data_057adbc6 = '\x01';
    pMVar25 = extraout_RDX_05;
    if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) goto label_0425a98e;
label_0425a93b:
    pCVar5 = *(CustomLogic_CustomLogicEvaluator_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
  }
  else {
    pMVar25 = extraout_RDX_04;
    if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) != 0) goto label_0425a93b;
label_0425a98e:
    pSStack_98 = (System_Collections_Generic_Dictionary_object__object__o *)0x425a993;
    il2cpp_runtime_helper_02337ed0();
    pCVar5 = *(CustomLogic_CustomLogicEvaluator_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
    pMVar25 = extraout_RDX_06;
  }
  if (pCVar5 == (CustomLogic_CustomLogicEvaluator_o *)0x0) {
label_0425aa64:
    bVar9 = System_Object__Equals((Il2CppObject *)__this_05,(Il2CppObject *)pSVar28,(MethodInfo *)0x0);
    return (System_String_o *)CONCAT44(extraout_var_00,bVar9);
  }
  ppSVar32 = &"__Eq__";
  pSStack_98 = (System_Collections_Generic_Dictionary_object__object__o *)0x425a9bd;
  bVar9 = CustomLogic_CustomLogicClassInstance__HasVariable(__this_05,"__Eq__",pMVar25);
  if ((char)bVar9 == '\0') goto label_0425aa64;
  pSStack_98 = (System_Collections_Generic_Dictionary_object__object__o *)0x425a9d9;
  parameterValues = (System_Object_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_object);
  pSVar22 = (System_Object_array *)&TypeInfo_CustomLogicManager;
  if (parameterValues == (System_Object_array *)0x0) {
label_0425aa7a:
    pSStack_98 = (System_Collections_Generic_Dictionary_object__object__o *)0x425aa7f;
    il2cpp_runtime_helper_022b2c90();
label_0425aa7f:
    pSStack_98 = (System_Collections_Generic_Dictionary_object__object__o *)0x425aa84;
    pIVar15 = (Il2CppObject *)il2cpp_runtime_helper_022b2ca0();
label_0425aa84:
    pSStack_98 = (System_Collections_Generic_Dictionary_object__object__o *)0x425aa8c;
    il2cpp_runtime_helper_022b2fd0(pIVar15);
  }
  else {
    pSVar22 = parameterValues;
    if (pSVar28 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
label_0425aa02:
      if ((int)parameterValues->max_length == 0) goto label_0425aa7f;
      parameterValues->m_Items[0] = (Il2CppObject *)pSVar28;
      pSStack_98 = (System_Collections_Generic_Dictionary_object__object__o *)0x425aa1b;
      il2cpp_runtime_helper_022b4080(parameterValues->m_Items,pSVar28);
      pSStack_98 = (System_Collections_Generic_Dictionary_object__object__o *)0x425aa33;
      pSVar21 = parameterValues;
      pIVar15 = CustomLogic_CustomLogicEvaluator__EvaluateMethod
                          (pCVar5,__this_05,"__Eq__",parameterValues,0,(MethodInfo *)0x0);
      if (pIVar15 == (Il2CppObject *)0x0) goto label_0425aa7a;
      pSVar21 = (System_Object_array *)(pIVar15->klass->_1).element_class;
      if (pSVar21 == *(System_Object_array **)(g_data_057b9b98 + 0x40)) {
        pSStack_98 = (System_Collections_Generic_Dictionary_object__object__o *)0x425aa58;
        puVar16 = (undefined1 *)il2cpp_runtime_helper_02305440(pIVar15);
        return (System_String_o *)CONCAT71((int7)((ulong)puVar16 >> 8),*puVar16);
      }
      goto label_0425aa84;
    }
    pSStack_98 = (System_Collections_Generic_Dictionary_object__object__o *)0x425a9f9;
    lVar14 = il2cpp_runtime_helper_023051f0(pSVar28);
    if (lVar14 != 0) goto label_0425aa02;
  }
  pSStack_98 = (System_Collections_Generic_Dictionary_object__object__o *)0x425aa91;
  __this_06 = (CustomLogic_CustomLogicClassInstance_o *)il2cpp_runtime_helper_0231b270();
  pSVar11 = (System_String_o *)0x0;
  pSStack_98 = (System_Collections_Generic_Dictionary_object__object__o *)0x425aa9b;
  il2cpp_runtime_helper_022b2b10();
  pSStack_b0 = (System_String_o *)0x0;
  pSStack_c0 = (System_String_o *)0x425aac2;
  pSStack_a8 = pSVar22;
  pCStack_a0 = __this_05;
  pSStack_98 = pSVar28;
  bVar9 = CustomLogic_CustomLogicClassInstance__TryGetVariable
                    (__this_06,pSVar11,(Il2CppObject **)&pSStack_b0,(MethodInfo *)pSVar21);
  if ((char)bVar9 != '\0') {
    return pSStack_b0;
  }
  pSStack_c0 = (System_String_o *)0x425aae8;
  str3 = (MethodInfo_33E0DF0 **)
         (*(__this_06->klass->vtable)._4_unknown.methodPtr)
                   (__this_06,(__this_06->klass->vtable)._4_unknown.method);
  pSStack_c0 = (System_String_o *)0x425aaf7;
  pSVar17 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Variable ");
  pSStack_c0 = (System_String_o *)0x425ab06;
  str2 = (System_String_o *)il2cpp_runtime_helper_023445d0(&" not found in class ");
  pSStack_c0 = (System_String_o *)0x425ab1a;
  message = (MethodInfo_3104D80 **)
            System_String__Concat_3af7470(pSVar17,pSVar11,str2,(System_String_o *)str3,(MethodInfo *)0x0);
  pSStack_c0 = (System_String_o *)0x425ab29;
  uVar18 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
  pSStack_c0 = (System_String_o *)0x425ab31;
  __this_07 = (System_Exception_o *)il2cpp_runtime_helper_023052d0(uVar18);
  pSStack_c0 = (System_String_o *)0x425ab41;
  System_Exception___ctor_3cf6120(__this_07,(System_String_o *)message,(MethodInfo *)0x0);
  pSStack_c0 = (System_String_o *)0x425ab4d;
  __this_08.genericMethod = (void *)il2cpp_runtime_helper_023445d0(&MethodInfo_Object_GetVariable);
  pSStack_c0 = (System_String_o *)0x425ab58;
  plVar26 = (long *)__this_07;
  il2cpp_runtime_helper_022b2b10();
  ppSStack_d8 = &"__Eq__";
  item = __this_08;
  pSStack_e8 = __this_07;
  pCStack_e0 = pCVar5;
  pSStack_d0 = (System_String_o *)message;
  pSStack_c8 = (System_String_o *)str3;
  pSStack_c0 = unaff_RBP;
  if (g_data_057adbc7 == '\0') {
    pSStack_118 = (System_String_o *)0x425ab8c;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicBuiltinTypes);
    pSStack_118 = (System_String_o *)0x425ab98;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    pSStack_118 = (System_String_o *)0x425aba4;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_TryGetValue);
    pSStack_118 = (System_String_o *)0x425abb0;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Item);
    pSStack_118 = (System_String_o *)0x425abbc;
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_System_String_get_Item);
    pSStack_118 = (System_String_o *)0x425abc8;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    pSStack_118 = (System_String_o *)0x425abd4;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Contains);
    g_data_057adbc7 = '\x01';
  }
  pIStack_f0 = (Il2CppObject *)0x0;
  _Stack_108.genericMethod = (MethodInfo *)0x0;
  pSVar29 = (System_Collections_Generic_Dictionary_object__object__o *)
            (((System_Exception_o *)plVar26)->fields)._message;
  pSVar28 = (System_Collections_Generic_Dictionary_object__object__o *)0x0;
  typeName = extraout_RDX_07;
  if (pSVar29 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    pSStack_118 = (System_String_o *)0x425ac11;
    bVar9 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                      (pSVar29,__this_08.genericMethod,&pIStack_f0,MethodInfo_Boolean_TryGetValue);
    if ((char)bVar9 == '\0') {
      pSStack_118 = (System_String_o *)0x425ac48;
      pSStack_100 = (System_Exception_o *)plVar26;
      _Stack_f8 = extraout_RDX_07;
      typeName.genericMethod =
           (void *)(*(((System_Exception_o *)plVar26)->klass->vtable)._4_unknown.methodPtr)(plVar26);
      plVar26 = &TypeInfo_CustomLogicBuiltinTypes;
      message = &MethodInfo_HashSet_1_System_String_get_Item;
      str3 = &MethodInfo_Boolean_Contains;
      ppSVar32 = (System_String_o **)&_Stack_108;
label_0425ac70:
      iVar30 = *(int *)(TypeInfo_CustomLogicBuiltinTypes + 0xe4);
      do {
        if (iVar30 == 0) {
          pSStack_118 = (System_String_o *)0x425ac82;
          il2cpp_runtime_helper_02337ed0();
        }
        item.genericMethod = (MethodInfo *)0x0;
        pSStack_118 = (System_String_o *)0x425ac8c;
        bVar9 = CustomLogic_CustomLogicBuiltinTypes__IsBuiltinType(typeName.genericMethod,(MethodInfo *)0x0);
        if ((char)bVar9 == '\0') {
label_0425adb3:
          *(undefined8 *)_Stack_f8.genericMethod = 0;
          uVar24 = 0;
          pSStack_118 = (System_String_o *)0x425adc8;
          il2cpp_runtime_helper_022b4080(_Stack_f8.genericMethod,0);
          goto label_0425ae03;
        }
        if (*(int *)(TypeInfo_CustomLogicBuiltinTypes + 0xe4) == 0) {
          pSStack_118 = (System_String_o *)0x425aca6;
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar28 = *(System_Collections_Generic_Dictionary_object__object__o **)
                   (*(long *)(TypeInfo_CustomLogicBuiltinTypes + 0xb8) + 0x18);
        if (pSVar28 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_0425ae14;
        pSStack_118 = (System_String_o *)0x425acc9;
        item = typeName;
        pSVar12 = (System_Collections_Generic_HashSet_object__o *)
                  System_Collections_Generic_Dictionary_object__object___get_Item
                            (pSVar28,typeName.genericMethod,MethodInfo_HashSet_1_System_String_get_Item);
        if (pSVar12 == (System_Collections_Generic_HashSet_object__o *)0x0) goto label_0425ae14;
        pSStack_118 = (System_String_o *)0x425ace0;
        bVar9 = System_Collections_Generic_HashSet_object___Contains
                          (pSVar12,__this_08.genericMethod,MethodInfo_Boolean_Contains);
        if ((char)bVar9 != '\0') goto code_r0x0425ace4;
        item = (_union_249689)(pSStack_100->klass->vtable)._5_get_Message.method;
        pSStack_118 = (System_String_o *)0x425ad16;
        cVar8 = (*(pSStack_100->klass->vtable)._5_get_Message.methodPtr)();
        if (cVar8 == '\0') goto label_0425adb3;
        if (*(int *)(TypeInfo_CustomLogicBuiltinTypes + 0xe4) == 0) {
          pSStack_118 = (System_String_o *)0x425ad30;
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar29 = *(System_Collections_Generic_Dictionary_object__object__o **)
                   (*(long *)(TypeInfo_CustomLogicBuiltinTypes + 0xb8) + 0x10);
        pSVar28 = (System_Collections_Generic_Dictionary_object__object__o *)0x0;
        if (pSVar29 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_0425ae14;
        pSStack_118 = (System_String_o *)0x425ad5a;
        item = typeName;
        bVar9 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                          (pSVar29,typeName.genericMethod,MethodInfo_Boolean_ContainsKey);
        if ((char)bVar9 == '\0') goto label_0425adb3;
        if (*(int *)(TypeInfo_CustomLogicBuiltinTypes + 0xe4) == 0) {
          pSStack_118 = (System_String_o *)0x425ad70;
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar29 = *(System_Collections_Generic_Dictionary_object__object__o **)
                   (*(long *)(TypeInfo_CustomLogicBuiltinTypes + 0xb8) + 0x10);
        pSVar28 = (System_Collections_Generic_Dictionary_object__object__o *)0x0;
        if (pSVar29 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_0425ae14;
        pSStack_118 = (System_String_o *)0x425ad9a;
        typeName.genericMethod =
             System_Collections_Generic_Dictionary_object__object___get_Item
                       (pSVar29,typeName.genericMethod,MethodInfo_String_get_Item);
        iVar30 = *(int *)(TypeInfo_CustomLogicBuiltinTypes + 0xe4);
      } while( true );
    }
    *(Il2CppObject **)extraout_RDX_07.genericMethod = pIStack_f0;
    pSStack_118 = (System_String_o *)0x425ac25;
    il2cpp_runtime_helper_022b4080(extraout_RDX_07.genericMethod);
label_0425ae01:
    uVar24 = CONCAT71(typeName._1_7_,1);
label_0425ae03:
    return (System_String_o *)(uVar24 & 0xffffffff);
  }
label_0425ae14:
  pSStack_118 = (System_String_o *)0x425ae19;
  uStack_128 = il2cpp_runtime_helper_022b2c90();
  collection = item;
  _Stack_120 = typeName;
  pSStack_118 = (System_String_o *)message;
  if (g_data_057adbca == '\0') {
    _Stack_130 = (_union_249689)0x425ae3f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    g_data_057adbca = '\x01';
  }
  lVar14 = MethodInfo_Void_Add;
  __this_10 = (Il2CppRGCTXData *)(pSVar28->fields)._buckets;
  if (__this_10 != (Il2CppRGCTXData *)0x0) {
    *(int *)((long)__this_10 + 0x1c) = *(int *)((long)__this_10 + 0x1c) + 1;
    pMVar25 = __this_10[2].method;
    if (pMVar25 != (MethodInfo *)0x0) {
      uVar3 = *(uint *)(__this_10 + 3);
      if (uVar3 < *(uint *)&pMVar25->name) {
        *(uint *)(__this_10 + 3) = uVar3 + 1;
        ((_union_249689 *)(&pMVar25->klass + (int)uVar3))->genericMethod = (void *)item;
        pSVar11 = (System_String_o *)il2cpp_runtime_helper_022b4080(&pMVar25->klass + (int)uVar3,item.genericMethod);
        return pSVar11;
      }
      System_Collections_Generic_List_object___AddWithResize
                ((System_Collections_Generic_List_object__o *)__this_10,item.genericMethod,
                 *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
      return extraout_RAX;
    }
  }
  _Stack_130 = (_union_249689)0x425aeb4;
  uStack_140 = il2cpp_runtime_helper_022b2c90();
  pSStack_138 = pSVar28;
  _Stack_130 = item;
  if (g_data_057adbcb == '\0') {
    pSStack_148 = (System_Exception_o *)0x425aedf;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_AddRange);
    g_data_057adbcb = '\x01';
  }
  pMVar25 = __this_10[2].method;
  if (pMVar25 != (MethodInfo *)0x0) {
    System_Collections_Generic_List_object___AddRange
              ((System_Collections_Generic_List_object__o *)pMVar25,collection.genericMethod,MethodInfo_Void_AddRange);
    return extraout_RAX_00;
  }
  pSStack_148 = (System_Exception_o *)0x425af0d;
  il2cpp_runtime_helper_022b2c90();
  pIStack_170 = __this_10;
  _Stack_168 = __this_08;
  p_Stack_160 = (_union_249689 *)ppSVar32;
  _Stack_158 = collection;
  pSStack_150 = (System_String_o *)str3;
  pSStack_148 = (System_Exception_o *)plVar26;
  if (g_data_057adbcc == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_IOrderedEnumerable_1_CustomLogic_CustomLogicSourceFile_O);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_CustomLogic_CustomLogicSourceFile_ToList_CustomLo);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicSourceFile_get_Current);
    il2cpp_runtime_helper_023445d0(&TypeInfo_FileRange);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicSourceFile_int);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_CustomLogic_CustomLogicSourceFile_Ge);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_Compile_b__6_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    il2cpp_runtime_helper_023445d0(&"\n");
    g_data_057adbcc = '\x01';
  }
  pSVar35 = (System_Collections_Generic_List_Enumerator_T__c *)0x0;
  pSStack_198 = (System_Collections_Generic_List_TSource__o *)0x0;
  pSVar21 = ((System_Collections_Generic_List_object__Fields *)&pMVar25->invoker_method)->_items;
  if (*(int *)(TypeInfo_c + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    keySelector = *(System_Func_TSource__TKey__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
  }
  else {
    keySelector = *(System_Func_TSource__TKey__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
  }
  if (keySelector == (System_Func_TSource__TKey__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    __this_08 = **(_union_249689 **)(TypeInfo_c + 0xb8);
    keySelector = (System_Func_TSource__TKey__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicSourceFile_int);
    System_Func_object__int____ctor();
    lVar14 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_TSource__TKey__o **)(lVar14 + 8) = keySelector;
    il2cpp_runtime_helper_022b4080(lVar14 + 8,keySelector);
  }
  source = System_Linq_Enumerable__OrderBy_object__int_
                     ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar21,keySelector,MethodInfo_IOrderedEnumerable_1_CustomLogic_CustomLogicSourceFile_O);
  __this_09 = System_Linq_Enumerable__ToList_object_
                        ((System_Collections_Generic_IEnumerable_TSource__o *)source,MethodInfo_List_1_CustomLogic_CustomLogicSourceFile_ToList_CustomLo);
  pcVar6 = pMVar25->name;
  if (pcVar6 != (char *)0x0) {
    *(int *)(pcVar6 + 0x1c) = *(int *)(pcVar6 + 0x1c) + 1;
    iVar30 = *(int *)(pcVar6 + 0x18);
    pcVar6[0x18] = '\0';
    pcVar6[0x19] = '\0';
    pcVar6[0x1a] = '\0';
    pcVar6[0x1b] = '\0';
    if (0 < iVar30) {
      System_Array__Clear(*(System_Array_o **)(pcVar6 + 0x10),0,iVar30,(MethodInfo *)0x0);
    }
    __this_08.genericMethod = (void *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
    System_Collections_Generic_List_object____ctor(__this_08.genericMethod,MethodInfo_List_1_System_String);
    if (__this_09 != (System_Collections_Generic_List_TSource__o *)0x0) {
      System_Collections_Generic_List_object___GetEnumerator
                (&SStack_188,(System_Collections_Generic_List_object__o *)__this_09,MethodInfo_List_1_T_Enumerator_CustomLogic_CustomLogicSourceFile_Ge);
      pSStack_198 = (System_Collections_Generic_List_TSource__o *)SStack_188.fields._current;
      if (__this_08.genericMethod == (MethodInfo *)0x0) {
        __this_01.fields._8_8_ = pMVar25;
        __this_01.fields._list = (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffe48;
        __this_01.fields._current = (Il2CppObject *)SStack_188.fields._list;
        bVar9 = System_Collections_Generic_List_Enumerator_object___MoveNext
                          (__this_01,(MethodInfo_321A1D0 *)&stack0xfffffffffffffe58);
        pSVar35 = (System_Collections_Generic_List_Enumerator_T__c *)SStack_188.fields._list;
        if ((char)bVar9 != '\0') goto label_0425b3ae;
      }
      else {
        iVar30 = 0;
        pSVar35 = (System_Collections_Generic_List_Enumerator_T__c *)SStack_188.fields._list;
        while (__this_00.fields._8_8_ = pMVar25,
              __this_00.fields._list = (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffe48,
              __this_00.fields._current = (Il2CppObject *)pSVar35,
              bVar9 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                (__this_00,(MethodInfo_321A1D0 *)&stack0xfffffffffffffe58),
              (char)bVar9 != '\0') {
          if ((System_Collections_Generic_List_TSource__o *)SStack_188.fields._current ==
              (System_Collections_Generic_List_TSource__o *)0x0) goto label_0425b3b8;
          pSVar11 = *(System_String_o **)
                     &((System_Collections_Generic_List_TSource__Fields *)
                      ((long)SStack_188.fields._current + 0x10))->_size;
          pSVar17 = (System_String_o *)0x0;
          if (pSVar11 == (System_String_o *)0x0) goto label_0425b3c6;
          pSVar19 = System_String__Split(pSVar11,10,0,(MethodInfo *)0x0);
          if (pSVar19 == (System_String_array *)0x0) goto label_0425b3de;
          iVar27 = (int)pSVar19->max_length;
          __this_09 = (System_Collections_Generic_List_TSource__o *)il2cpp_runtime_helper_023052d0(TypeInfo_FileRange);
          System_Object___ctor((Il2CppObject *)__this_09,(MethodInfo *)0x0);
          if (__this_09 == (System_Collections_Generic_List_TSource__o *)0x0) goto label_0425b407;
          (__this_09->fields)._items =
               ((System_Collections_Generic_List_TSource__Fields *)((long)SStack_188.fields._current + 0x10))
               ->_items;
          il2cpp_runtime_helper_022b4080(&__this_09->fields);
          (__this_09->fields)._size =
               *(int32_t *)
                &((System_Collections_Generic_List_TSource__Fields *)((long)SStack_188.fields._current + 0x10)
                 )->_syncRoot;
          (__this_09->fields)._version = iVar30;
          uVar3 = iVar30 + -1 + iVar27;
          pSVar21 = (System_Object_array *)(ulong)uVar3;
          *(uint *)&(__this_09->fields)._syncRoot = uVar3;
          *(int *)((long)&(__this_09->fields)._syncRoot + 4) = iVar27;
          *(undefined4 *)&__this_09[1].klass =
               *(undefined4 *)
                ((long)&((System_Collections_Generic_List_TSource__o *)
                        ((long)SStack_188.fields._current + 0x28))->klass + 4);
          lVar14 = MethodInfo_Void_Add;
          __this_11 = (System_Collections_Generic_List_object__o *)pMVar25->name;
          if (__this_11 == (System_Collections_Generic_List_object__o *)0x0) goto label_0425b450;
          piVar1 = &(__this_11->fields)._version;
          *piVar1 = *piVar1 + 1;
          pSVar22 = (__this_11->fields)._items;
          if (pSVar22 == (System_Object_array *)0x0) goto label_0425b46c;
          uVar4 = (__this_11->fields)._size;
          if (uVar4 < (uint)pSVar22->max_length) {
            (__this_11->fields)._size = uVar4 + 1;
            pSVar22->m_Items[(int)uVar4] = (Il2CppObject *)__this_09;
            il2cpp_runtime_helper_022b4080(pSVar22->m_Items + (int)uVar4,__this_09);
          }
          else {
            System_Collections_Generic_List_object___AddWithResize
                      (__this_11,(Il2CppObject *)__this_09,
                       *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
          }
          *(int *)((long)&((System_Collections_Generic_List_TSource__Fields *)
                          ((long)SStack_188.fields._current + 0x10))->_syncRoot + 4) = iVar30;
          *(uint *)&((System_Collections_Generic_List_TSource__o *)((long)SStack_188.fields._current + 0x28))
                    ->klass = uVar3;
          lVar14 = MethodInfo_Void_Add;
          pIVar15 = *(Il2CppObject **)
                     &((System_Collections_Generic_List_TSource__Fields *)
                      ((long)SStack_188.fields._current + 0x10))->_size;
          *(int *)((long)__this_08.genericMethod + 0x1c) = *(int *)((long)__this_08.genericMethod + 0x1c) + 1;
          pIVar7 = *(InvokerMethod *)((long)__this_08.genericMethod + 0x10);
          if (pIVar7 == (InvokerMethod)0x0) {
            il2cpp_runtime_helper_022b2c90();
            goto label_0425b3a9;
          }
          iVar30 = iVar30 + iVar27;
          uVar3 = *(uint *)((long)__this_08.genericMethod + 0x18);
          if (uVar3 < *(uint *)(pIVar7 + 0x18)) {
            *(uint *)((long)__this_08.genericMethod + 0x18) = uVar3 + 1;
            *(Il2CppObject **)(pIVar7 + (long)(int)uVar3 * 8 + 0x20) = pIVar15;
            il2cpp_runtime_helper_022b4080(pIVar7 + (long)(int)uVar3 * 8 + 0x20);
          }
          else {
            System_Collections_Generic_List_object___AddWithResize
                      (__this_08.genericMethod,pIVar15,
                       *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
          }
        }
      }
      __this_02.fields._8_8_ = pMVar25;
      __this_02.fields._list = (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffe48;
      __this_02.fields._current = (Il2CppObject *)pSVar35;
      System_Collections_Generic_List_Enumerator_object___Dispose
                (__this_02,(MethodInfo_321A1C0 *)&stack0xfffffffffffffe58);
      pMVar34 = pMVar25;
      goto label_0425b33e;
    }
  }
label_0425b3a9:
  do {
    il2cpp_runtime_helper_022b2c90();
label_0425b3ae:
    __this_09 = pSStack_198;
    if (pSStack_198 == (System_Collections_Generic_List_TSource__o *)0x0) {
label_0425b3b8:
      il2cpp_runtime_helper_022b2c90();
    }
    pSVar17 = *(System_String_o **)&(__this_09->fields)._size;
    if (pSVar17 == (System_String_o *)0x0) {
label_0425b3c6:
      il2cpp_runtime_helper_022b2c90();
    }
    pSVar19 = System_String__Split(pSVar17,10,0,(MethodInfo *)0x0);
    if (pSVar19 == (System_String_array *)0x0) {
label_0425b3de:
      pSVar19 = (System_String_array *)il2cpp_runtime_helper_022b2c90();
    }
    iVar27 = (int)pSVar19->max_length;
    pSVar21 = (System_Object_array *)il2cpp_runtime_helper_023052d0(TypeInfo_FileRange);
    System_Object___ctor((Il2CppObject *)pSVar21,(MethodInfo *)0x0);
    if (pSVar21 == (System_Object_array *)0x0) {
label_0425b407:
      il2cpp_runtime_helper_022b2c90();
    }
    pSVar21->bounds = (Il2CppArrayBounds *)(__this_09->fields)._items;
    il2cpp_runtime_helper_022b4080(&pSVar21->bounds);
    *(undefined4 *)&pSVar21->max_length = *(undefined4 *)&(__this_09->fields)._syncRoot;
    *(undefined4 *)((long)&pSVar21->max_length + 4) = 0;
    SStack_188.fields._current = (Il2CppObject *)(ulong)(iVar27 - 1U);
    *(uint *)pSVar21->m_Items = iVar27 - 1U;
    *(int *)((long)pSVar21->m_Items + 4) = iVar27;
    *(undefined4 *)(pSVar21->m_Items + 1) = *(undefined4 *)((long)&__this_09[1].klass + 4);
    __this_11 = (System_Collections_Generic_List_object__o *)pMVar25->name;
    if (__this_11 == (System_Collections_Generic_List_object__o *)0x0) {
label_0425b450:
      il2cpp_runtime_helper_022b2c90();
    }
    lVar14 = MethodInfo_Void_Add;
    uVar31 = SUB84(SStack_188.fields._current,0);
    piVar1 = &(__this_11->fields)._version;
    *piVar1 = *piVar1 + 1;
    pSVar22 = (__this_11->fields)._items;
    if (pSVar22 == (System_Object_array *)0x0) {
label_0425b46c:
      uVar31 = SUB84(SStack_188.fields._current,0);
      pSVar22 = (System_Object_array *)il2cpp_runtime_helper_022b2c90();
    }
    uVar3 = (__this_11->fields)._size;
    if (uVar3 < (uint)pSVar22->max_length) {
      (__this_11->fields)._size = uVar3 + 1;
      pSVar22->m_Items[(int)uVar3] = &pSVar21->obj;
      il2cpp_runtime_helper_022b4080(pSVar22->m_Items + (int)uVar3,pSVar21);
    }
    else {
      System_Collections_Generic_List_object___AddWithResize
                (__this_11,&pSVar21->obj,
                 *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
    }
    *(undefined4 *)((long)&(__this_09->fields)._syncRoot + 4) = 0;
    *(undefined4 *)&__this_09[1].klass = uVar31;
    auVar33 = il2cpp_runtime_helper_022b2c90();
    if (auVar33._8_4_ != 1) {
label_0425b5b9:
      __this_04.fields._8_8_ = pMVar25;
      __this_04.fields._list = (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffe48;
      __this_04.fields._current = (Il2CppObject *)pSVar35;
      System_Collections_Generic_List_Enumerator_object___Dispose
                (__this_04,(MethodInfo_321A1C0 *)&stack0xfffffffffffffe58);
      _Unwind_Resume(auVar33._0_8_);
    }
    plVar26 = (long *)__cxa_begin_catch(auVar33._0_8_);
    lVar14 = *plVar26;
    __cxa_end_catch();
    __this_03.fields._8_8_ = pMVar25;
    __this_03.fields._list = (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffe48;
    __this_03.fields._current = (Il2CppObject *)pSVar35;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_03,(MethodInfo_321A1C0 *)&stack0xfffffffffffffe58);
    pMVar34 = pMVar25;
    if (lVar14 != 0) {
      il2cpp_runtime_helper_022fefe0(lVar14);
      goto label_0425b5b9;
    }
label_0425b33e:
    pIVar20 = (Il2CppClass *)
              System_String__Join_3af7e00("\n",__this_08.genericMethod,(MethodInfo *)0x0);
    pMVar34->klass = pIVar20;
    pMVar25 = pMVar34;
    il2cpp_runtime_helper_022b4080(&pMVar34->klass);
    pSVar21 = ((System_Collections_Generic_List_object__Fields *)&pMVar34->invoker_method)->_items;
    if (pSVar21 != (System_Object_array *)0x0) {
      piVar2 = (int *)((long)&pSVar21->max_length + 4);
      *piVar2 = *piVar2 + 1;
      iVar10 = (int32_t)pSVar21->max_length;
      *(undefined4 *)&pSVar21->max_length = 0;
      if (0 < iVar10) {
        System_Array__Clear((System_Array_o *)pSVar21->bounds,0,iVar10,(MethodInfo *)0x0);
      }
      return (System_String_o *)pMVar34->klass;
    }
  } while( true );
code_r0x0425ace4:
  pSStack_118 = (System_String_o *)0x425acf4;
  bVar9 = CustomLogic_CLBindingCache__GetOrCreateBinding
                    (typeName.genericMethod,__this_08.genericMethod,
                     (CustomLogic_ICLMemberBinding_o **)ppSVar32,(MethodInfo *)0x0);
  if ((char)bVar9 != '\0') goto label_0425adca;
  goto label_0425ac70;
label_0425adca:
  *(_union_249689 *)_Stack_f8.genericMethod = _Stack_108;
  pSStack_118 = (System_String_o *)0x425addc;
  item = _Stack_108;
  il2cpp_runtime_helper_022b4080();
  pSVar29 = (System_Collections_Generic_Dictionary_object__object__o *)(pSStack_100->fields)._message;
  pSVar28 = (System_Collections_Generic_Dictionary_object__object__o *)0x0;
  if (pSVar29 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    pSStack_118 = (System_String_o *)0x425ae01;
    System_Collections_Generic_Dictionary_object__object___set_Item
              (pSVar29,__this_08.genericMethod,_Stack_108.genericMethod,MethodInfo_Void_set_Item);
    goto label_0425ae01;
  }
  goto label_0425ae14;
}


// CustomLogic.CustomLogicClassInstance$$GetHashCode
// il2cpp: int32_t CustomLogic_CustomLogicClassInstance__GetHashCode (CustomLogic_CustomLogicClassInstance_o* __this, const MethodInfo* method);
// 0x425a810

int32_t CustomLogic_CustomLogicClassInstance__GetHashCode
                  (CustomLogic_CustomLogicClassInstance_o *__this,MethodInfo *method)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  CustomLogic_CustomLogicEvaluator_o *pCVar4;
  System_Collections_Generic_Dictionary_object__object__o *pSVar5;
  char *pcVar6;
  InvokerMethod pIVar7;
  System_Collections_Generic_List_Enumerator_object__o __this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  char cVar8;
  bool_conflict bVar9;
  int32_t iVar10;
  int32_t extraout_EAX;
  int32_t extraout_EAX_00;
  CustomLogic_CustomLogicClassInstance_o *__this_05;
  int32_t *piVar11;
  System_Object_array *parameterValues;
  long lVar12;
  Il2CppObject *pIVar13;
  undefined1 *puVar14;
  CustomLogic_CustomLogicClassInstance_o *__this_06;
  MethodInfo_33E0DF0 **str3;
  System_String_o *pSVar15;
  System_String_o *str2;
  MethodInfo_3104D80 **message;
  undefined8 uVar16;
  System_Exception_o *__this_07;
  _union_249689 __this_08;
  _union_249689 typeName;
  System_Collections_Generic_HashSet_object__o *__this_09;
  System_Func_TSource__TKey__o *keySelector;
  System_Linq_IOrderedEnumerable_TSource__o *source;
  System_Collections_Generic_List_TSource__o *__this_10;
  System_String_array *pSVar17;
  Il2CppClass *pIVar18;
  System_Object_array *pSVar19;
  System_Object_array *pSVar20;
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *pMVar21;
  MethodInfo *extraout_RDX_02;
  MethodInfo *extraout_RDX_03;
  _union_249689 extraout_RDX_04;
  int iVar22;
  long *plVar23;
  System_String_o *pSVar24;
  _union_249689 item;
  _union_249689 collection;
  System_Collections_Generic_Dictionary_object__object__o *__this_11;
  Il2CppRGCTXData *__this_12;
  System_Collections_Generic_List_object__o *__this_13;
  int iVar25;
  System_String_o **binding;
  undefined4 uVar26;
  undefined1 auVar27 [12];
  undefined8 in_stack_fffffffffffffe98;
  MethodInfo *pMVar28;
  System_Collections_Generic_List_Enumerator_T__c *pSVar29;
  System_Collections_Generic_List_TSource__o *pSStack_148;
  System_Collections_Generic_List_Enumerator_T__o SStack_138;
  Il2CppRGCTXData *pIStack_120;
  _union_249689 _Stack_118;
  _union_249689 *p_Stack_110;
  _union_249689 _Stack_108;
  System_String_o *pSStack_100;
  System_Exception_o *pSStack_f8;
  undefined8 uStack_f0;
  System_Collections_Generic_Dictionary_object__object__o *pSStack_e8;
  _union_249689 _Stack_e0;
  undefined8 uStack_d8;
  _union_249689 _Stack_d0;
  System_String_o *pSStack_c8;
  _union_249689 _Stack_b8;
  System_Exception_o *pSStack_b0;
  _union_249689 _Stack_a8;
  Il2CppObject *pIStack_a0;
  System_Exception_o *pSStack_98;
  CustomLogic_CustomLogicEvaluator_o *pCStack_90;
  System_String_o **ppSStack_88;
  System_String_o *pSStack_80;
  System_String_o *pSStack_78;
  Il2CppObject *pIStack_60;
  System_Object_array *pSStack_58;
  CustomLogic_CustomLogicClassInstance_o *pCStack_50;
  CustomLogic_CustomLogicClassInstance_o *pCStack_48;
  CustomLogic_CustomLogicEvaluator_o *pCStack_40;
  
  if (g_data_057adbc5 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    il2cpp_runtime_helper_023445d0(&"__Hash__");
    g_data_057adbc5 = '\x01';
    in_RDX = extraout_RDX;
    if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) != 0) goto label_0425a834;
label_0425a87b:
    il2cpp_runtime_helper_02337ed0();
    pCVar4 = *(CustomLogic_CustomLogicEvaluator_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
    in_RDX = extraout_RDX_00;
  }
  else {
    if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) goto label_0425a87b;
label_0425a834:
    pCVar4 = *(CustomLogic_CustomLogicEvaluator_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
  }
  if ((pCVar4 == (CustomLogic_CustomLogicEvaluator_o *)0x0) ||
     (bVar9 = CustomLogic_CustomLogicClassInstance__HasVariable(__this,"__Hash__",in_RDX),
     (char)bVar9 == '\0')) {
    iVar10 = System_Object__GetHashCode((Il2CppObject *)__this,(MethodInfo *)0x0);
    return iVar10;
  }
  pSVar19 = (System_Object_array *)0x0;
  __this_05 = (CustomLogic_CustomLogicClassInstance_o *)
              CustomLogic_CustomLogicEvaluator__EvaluateMethod
                        (pCVar4,__this,"__Hash__",(System_Object_array *)0x0,0,(MethodInfo *)0x0);
  if (__this_05 == (CustomLogic_CustomLogicClassInstance_o *)0x0) {
    __this_05 = (CustomLogic_CustomLogicClassInstance_o *)il2cpp_runtime_helper_022b2c90();
  }
  else {
    pSVar19 = (System_Object_array *)(((Il2CppClass *)__this_05->klass)->_1).element_class;
    __this = g_data_057b9bb8;
    if (pSVar19 == *(System_Object_array **)&g_data_057b9bb8[1].fields) {
      piVar11 = (int32_t *)il2cpp_runtime_helper_02305440(__this_05);
      return *piVar11;
    }
  }
  il2cpp_runtime_helper_022b2fd0();
  pCStack_40 = pCVar4;
  if (g_data_057adbc6 == '\0') {
    pCStack_48 = (CustomLogic_CustomLogicClassInstance_o *)0x425a95c;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    pCStack_48 = (CustomLogic_CustomLogicClassInstance_o *)0x425a968;
    il2cpp_runtime_helper_023445d0(&TypeInfo_object);
    pCStack_48 = (CustomLogic_CustomLogicClassInstance_o *)0x425a974;
    il2cpp_runtime_helper_023445d0(&"__Eq__");
    g_data_057adbc6 = '\x01';
    pMVar21 = extraout_RDX_02;
    if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) != 0) goto label_0425a93b;
label_0425a98e:
    pCStack_48 = (CustomLogic_CustomLogicClassInstance_o *)0x425a993;
    il2cpp_runtime_helper_02337ed0();
    pCVar4 = *(CustomLogic_CustomLogicEvaluator_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
    pMVar21 = extraout_RDX_03;
  }
  else {
    pMVar21 = extraout_RDX_01;
    if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) goto label_0425a98e;
label_0425a93b:
    pCVar4 = *(CustomLogic_CustomLogicEvaluator_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
  }
  if (pCVar4 == (CustomLogic_CustomLogicEvaluator_o *)0x0) {
label_0425aa64:
    bVar9 = System_Object__Equals((Il2CppObject *)__this_05,(Il2CppObject *)__this,(MethodInfo *)0x0);
    return bVar9;
  }
  binding = &"__Eq__";
  pCStack_48 = (CustomLogic_CustomLogicClassInstance_o *)0x425a9bd;
  bVar9 = CustomLogic_CustomLogicClassInstance__HasVariable(__this_05,"__Eq__",pMVar21);
  if ((char)bVar9 == '\0') goto label_0425aa64;
  pCStack_48 = (CustomLogic_CustomLogicClassInstance_o *)0x425a9d9;
  parameterValues = (System_Object_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_object);
  pSVar20 = (System_Object_array *)&TypeInfo_CustomLogicManager;
  if (parameterValues == (System_Object_array *)0x0) {
label_0425aa7a:
    pCStack_48 = (CustomLogic_CustomLogicClassInstance_o *)0x425aa7f;
    il2cpp_runtime_helper_022b2c90();
label_0425aa7f:
    pCStack_48 = (CustomLogic_CustomLogicClassInstance_o *)0x425aa84;
    pIVar13 = (Il2CppObject *)il2cpp_runtime_helper_022b2ca0();
label_0425aa84:
    pCStack_48 = (CustomLogic_CustomLogicClassInstance_o *)0x425aa8c;
    il2cpp_runtime_helper_022b2fd0(pIVar13);
  }
  else {
    pSVar20 = parameterValues;
    if (__this == (CustomLogic_CustomLogicClassInstance_o *)0x0) {
label_0425aa02:
      if ((int)parameterValues->max_length == 0) goto label_0425aa7f;
      parameterValues->m_Items[0] = (Il2CppObject *)__this;
      pCStack_48 = (CustomLogic_CustomLogicClassInstance_o *)0x425aa1b;
      il2cpp_runtime_helper_022b4080(parameterValues->m_Items,__this);
      pCStack_48 = (CustomLogic_CustomLogicClassInstance_o *)0x425aa33;
      pSVar19 = parameterValues;
      pIVar13 = CustomLogic_CustomLogicEvaluator__EvaluateMethod
                          (pCVar4,__this_05,"__Eq__",parameterValues,0,(MethodInfo *)0x0);
      if (pIVar13 == (Il2CppObject *)0x0) goto label_0425aa7a;
      pSVar19 = (System_Object_array *)(pIVar13->klass->_1).element_class;
      if (pSVar19 == *(System_Object_array **)(g_data_057b9b98 + 0x40)) {
        pCStack_48 = (CustomLogic_CustomLogicClassInstance_o *)0x425aa58;
        puVar14 = (undefined1 *)il2cpp_runtime_helper_02305440(pIVar13);
        return (int32_t)CONCAT71((int7)((ulong)puVar14 >> 8),*puVar14);
      }
      goto label_0425aa84;
    }
    pCStack_48 = (CustomLogic_CustomLogicClassInstance_o *)0x425a9f9;
    lVar12 = il2cpp_runtime_helper_023051f0(__this);
    if (lVar12 != 0) goto label_0425aa02;
  }
  pCStack_48 = (CustomLogic_CustomLogicClassInstance_o *)0x425aa91;
  __this_06 = (CustomLogic_CustomLogicClassInstance_o *)il2cpp_runtime_helper_0231b270();
  pSVar24 = (System_String_o *)0x0;
  pCStack_48 = (CustomLogic_CustomLogicClassInstance_o *)0x425aa9b;
  il2cpp_runtime_helper_022b2b10();
  pIStack_60 = (Il2CppObject *)0x0;
  pSStack_58 = pSVar20;
  pCStack_50 = __this_05;
  pCStack_48 = __this;
  bVar9 = CustomLogic_CustomLogicClassInstance__TryGetVariable
                    (__this_06,pSVar24,&pIStack_60,(MethodInfo *)pSVar19);
  if ((char)bVar9 != '\0') {
    return (int32_t)pIStack_60;
  }
  str3 = (MethodInfo_33E0DF0 **)
         (*(__this_06->klass->vtable)._4_unknown.methodPtr)
                   (__this_06,(__this_06->klass->vtable)._4_unknown.method);
  pSVar15 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Variable ");
  str2 = (System_String_o *)il2cpp_runtime_helper_023445d0(&" not found in class ");
  message = (MethodInfo_3104D80 **)
            System_String__Concat_3af7470(pSVar15,pSVar24,str2,(System_String_o *)str3,(MethodInfo *)0x0);
  uVar16 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
  __this_07 = (System_Exception_o *)il2cpp_runtime_helper_023052d0(uVar16);
  System_Exception___ctor_3cf6120(__this_07,(System_String_o *)message,(MethodInfo *)0x0);
  __this_08.genericMethod = (void *)il2cpp_runtime_helper_023445d0(&MethodInfo_Object_GetVariable);
  plVar23 = (long *)__this_07;
  il2cpp_runtime_helper_022b2b10();
  ppSStack_88 = &"__Eq__";
  item = __this_08;
  pSStack_98 = __this_07;
  pCStack_90 = pCVar4;
  pSStack_80 = (System_String_o *)message;
  pSStack_78 = (System_String_o *)str3;
  if (g_data_057adbc7 == '\0') {
    pSStack_c8 = (System_String_o *)0x425ab8c;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicBuiltinTypes);
    pSStack_c8 = (System_String_o *)0x425ab98;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    pSStack_c8 = (System_String_o *)0x425aba4;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_TryGetValue);
    pSStack_c8 = (System_String_o *)0x425abb0;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Item);
    pSStack_c8 = (System_String_o *)0x425abbc;
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_System_String_get_Item);
    pSStack_c8 = (System_String_o *)0x425abc8;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    pSStack_c8 = (System_String_o *)0x425abd4;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Contains);
    g_data_057adbc7 = '\x01';
  }
  pIStack_a0 = (Il2CppObject *)0x0;
  _Stack_b8.genericMethod = (MethodInfo *)0x0;
  pSVar5 = (System_Collections_Generic_Dictionary_object__object__o *)
           (((System_Exception_o *)plVar23)->fields)._message;
  __this_11 = (System_Collections_Generic_Dictionary_object__object__o *)0x0;
  typeName = extraout_RDX_04;
  if (pSVar5 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    pSStack_c8 = (System_String_o *)0x425ac11;
    bVar9 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                      (pSVar5,__this_08.genericMethod,&pIStack_a0,MethodInfo_Boolean_TryGetValue);
    if ((char)bVar9 == '\0') {
      pSStack_c8 = (System_String_o *)0x425ac48;
      pSStack_b0 = (System_Exception_o *)plVar23;
      _Stack_a8 = extraout_RDX_04;
      typeName.genericMethod =
           (void *)(*(((System_Exception_o *)plVar23)->klass->vtable)._4_unknown.methodPtr)(plVar23);
      plVar23 = &TypeInfo_CustomLogicBuiltinTypes;
      message = &MethodInfo_HashSet_1_System_String_get_Item;
      str3 = &MethodInfo_Boolean_Contains;
      binding = (System_String_o **)&_Stack_b8;
label_0425ac70:
      iVar25 = *(int *)(TypeInfo_CustomLogicBuiltinTypes + 0xe4);
      do {
        if (iVar25 == 0) {
          pSStack_c8 = (System_String_o *)0x425ac82;
          il2cpp_runtime_helper_02337ed0();
        }
        item.genericMethod = (MethodInfo *)0x0;
        pSStack_c8 = (System_String_o *)0x425ac8c;
        bVar9 = CustomLogic_CustomLogicBuiltinTypes__IsBuiltinType(typeName.genericMethod,(MethodInfo *)0x0);
        if ((char)bVar9 == '\0') {
label_0425adb3:
          *(undefined8 *)_Stack_a8.genericMethod = 0;
          pSStack_c8 = (System_String_o *)0x425adc8;
          il2cpp_runtime_helper_022b4080(_Stack_a8.genericMethod,0);
          return 0;
        }
        if (*(int *)(TypeInfo_CustomLogicBuiltinTypes + 0xe4) == 0) {
          pSStack_c8 = (System_String_o *)0x425aca6;
          il2cpp_runtime_helper_02337ed0();
        }
        __this_11 = *(System_Collections_Generic_Dictionary_object__object__o **)
                     (*(long *)(TypeInfo_CustomLogicBuiltinTypes + 0xb8) + 0x18);
        if (__this_11 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_0425ae14;
        pSStack_c8 = (System_String_o *)0x425acc9;
        item = typeName;
        __this_09 = (System_Collections_Generic_HashSet_object__o *)
                    System_Collections_Generic_Dictionary_object__object___get_Item
                              (__this_11,typeName.genericMethod,MethodInfo_HashSet_1_System_String_get_Item);
        if (__this_09 == (System_Collections_Generic_HashSet_object__o *)0x0) goto label_0425ae14;
        pSStack_c8 = (System_String_o *)0x425ace0;
        bVar9 = System_Collections_Generic_HashSet_object___Contains
                          (__this_09,__this_08.genericMethod,MethodInfo_Boolean_Contains);
        if ((char)bVar9 != '\0') goto code_r0x0425ace4;
        item = (_union_249689)(pSStack_b0->klass->vtable)._5_get_Message.method;
        pSStack_c8 = (System_String_o *)0x425ad16;
        cVar8 = (*(pSStack_b0->klass->vtable)._5_get_Message.methodPtr)();
        if (cVar8 == '\0') goto label_0425adb3;
        if (*(int *)(TypeInfo_CustomLogicBuiltinTypes + 0xe4) == 0) {
          pSStack_c8 = (System_String_o *)0x425ad30;
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar5 = *(System_Collections_Generic_Dictionary_object__object__o **)
                  (*(long *)(TypeInfo_CustomLogicBuiltinTypes + 0xb8) + 0x10);
        __this_11 = (System_Collections_Generic_Dictionary_object__object__o *)0x0;
        if (pSVar5 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_0425ae14;
        pSStack_c8 = (System_String_o *)0x425ad5a;
        item = typeName;
        bVar9 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                          (pSVar5,typeName.genericMethod,MethodInfo_Boolean_ContainsKey);
        if ((char)bVar9 == '\0') goto label_0425adb3;
        if (*(int *)(TypeInfo_CustomLogicBuiltinTypes + 0xe4) == 0) {
          pSStack_c8 = (System_String_o *)0x425ad70;
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar5 = *(System_Collections_Generic_Dictionary_object__object__o **)
                  (*(long *)(TypeInfo_CustomLogicBuiltinTypes + 0xb8) + 0x10);
        __this_11 = (System_Collections_Generic_Dictionary_object__object__o *)0x0;
        if (pSVar5 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_0425ae14;
        pSStack_c8 = (System_String_o *)0x425ad9a;
        typeName.genericMethod =
             System_Collections_Generic_Dictionary_object__object___get_Item
                       (pSVar5,typeName.genericMethod,MethodInfo_String_get_Item);
        iVar25 = *(int *)(TypeInfo_CustomLogicBuiltinTypes + 0xe4);
      } while( true );
    }
    *(Il2CppObject **)extraout_RDX_04.genericMethod = pIStack_a0;
    pSStack_c8 = (System_String_o *)0x425ac25;
    il2cpp_runtime_helper_022b4080(extraout_RDX_04.genericMethod);
label_0425ae01:
    return (int32_t)CONCAT71(typeName._1_7_,1);
  }
label_0425ae14:
  pSStack_c8 = (System_String_o *)0x425ae19;
  uStack_d8 = il2cpp_runtime_helper_022b2c90();
  collection = item;
  _Stack_d0 = typeName;
  pSStack_c8 = (System_String_o *)message;
  if (g_data_057adbca == '\0') {
    _Stack_e0 = (_union_249689)0x425ae3f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    g_data_057adbca = '\x01';
  }
  lVar12 = MethodInfo_Void_Add;
  __this_12 = (Il2CppRGCTXData *)(__this_11->fields)._buckets;
  if (__this_12 != (Il2CppRGCTXData *)0x0) {
    *(int *)((long)__this_12 + 0x1c) = *(int *)((long)__this_12 + 0x1c) + 1;
    pMVar21 = __this_12[2].method;
    if (pMVar21 != (MethodInfo *)0x0) {
      uVar2 = *(uint *)(__this_12 + 3);
      if (*(uint *)&pMVar21->name <= uVar2) {
        System_Collections_Generic_List_object___AddWithResize
                  ((System_Collections_Generic_List_object__o *)__this_12,item.genericMethod,
                   *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
        return extraout_EAX;
      }
      *(uint *)(__this_12 + 3) = uVar2 + 1;
      ((_union_249689 *)(&pMVar21->klass + (int)uVar2))->genericMethod = (void *)item;
      iVar10 = il2cpp_runtime_helper_022b4080(&pMVar21->klass + (int)uVar2,item.genericMethod);
      return iVar10;
    }
  }
  _Stack_e0 = (_union_249689)0x425aeb4;
  uStack_f0 = il2cpp_runtime_helper_022b2c90();
  pSStack_e8 = __this_11;
  _Stack_e0 = item;
  if (g_data_057adbcb == '\0') {
    pSStack_f8 = (System_Exception_o *)0x425aedf;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_AddRange);
    g_data_057adbcb = '\x01';
  }
  pMVar21 = __this_12[2].method;
  if (pMVar21 != (MethodInfo *)0x0) {
    System_Collections_Generic_List_object___AddRange
              ((System_Collections_Generic_List_object__o *)pMVar21,collection.genericMethod,MethodInfo_Void_AddRange);
    return extraout_EAX_00;
  }
  pSStack_f8 = (System_Exception_o *)0x425af0d;
  il2cpp_runtime_helper_022b2c90();
  pIStack_120 = __this_12;
  _Stack_118 = __this_08;
  p_Stack_110 = (_union_249689 *)binding;
  _Stack_108 = collection;
  pSStack_100 = (System_String_o *)str3;
  pSStack_f8 = (System_Exception_o *)plVar23;
  if (g_data_057adbcc == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_IOrderedEnumerable_1_CustomLogic_CustomLogicSourceFile_O);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_CustomLogic_CustomLogicSourceFile_ToList_CustomLo);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicSourceFile_get_Current);
    il2cpp_runtime_helper_023445d0(&TypeInfo_FileRange);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicSourceFile_int);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_CustomLogic_CustomLogicSourceFile_Ge);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_Compile_b__6_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    il2cpp_runtime_helper_023445d0(&"\n");
    g_data_057adbcc = '\x01';
  }
  pSVar29 = (System_Collections_Generic_List_Enumerator_T__c *)0x0;
  pSStack_148 = (System_Collections_Generic_List_TSource__o *)0x0;
  pSVar19 = ((System_Collections_Generic_List_object__Fields *)&pMVar21->invoker_method)->_items;
  if (*(int *)(TypeInfo_c + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    keySelector = *(System_Func_TSource__TKey__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
  }
  else {
    keySelector = *(System_Func_TSource__TKey__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
  }
  if (keySelector == (System_Func_TSource__TKey__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    __this_08 = **(_union_249689 **)(TypeInfo_c + 0xb8);
    keySelector = (System_Func_TSource__TKey__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicSourceFile_int);
    System_Func_object__int____ctor();
    lVar12 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_TSource__TKey__o **)(lVar12 + 8) = keySelector;
    il2cpp_runtime_helper_022b4080(lVar12 + 8,keySelector);
  }
  source = System_Linq_Enumerable__OrderBy_object__int_
                     ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar19,keySelector,MethodInfo_IOrderedEnumerable_1_CustomLogic_CustomLogicSourceFile_O);
  __this_10 = System_Linq_Enumerable__ToList_object_
                        ((System_Collections_Generic_IEnumerable_TSource__o *)source,MethodInfo_List_1_CustomLogic_CustomLogicSourceFile_ToList_CustomLo);
  pcVar6 = pMVar21->name;
  if (pcVar6 != (char *)0x0) {
    *(int *)(pcVar6 + 0x1c) = *(int *)(pcVar6 + 0x1c) + 1;
    iVar25 = *(int *)(pcVar6 + 0x18);
    pcVar6[0x18] = '\0';
    pcVar6[0x19] = '\0';
    pcVar6[0x1a] = '\0';
    pcVar6[0x1b] = '\0';
    if (0 < iVar25) {
      System_Array__Clear(*(System_Array_o **)(pcVar6 + 0x10),0,iVar25,(MethodInfo *)0x0);
    }
    __this_08.genericMethod = (void *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
    System_Collections_Generic_List_object____ctor(__this_08.genericMethod,MethodInfo_List_1_System_String);
    if (__this_10 != (System_Collections_Generic_List_TSource__o *)0x0) {
      System_Collections_Generic_List_object___GetEnumerator
                (&SStack_138,(System_Collections_Generic_List_object__o *)__this_10,MethodInfo_List_1_T_Enumerator_CustomLogic_CustomLogicSourceFile_Ge);
      pSStack_148 = (System_Collections_Generic_List_TSource__o *)SStack_138.fields._current;
      if (__this_08.genericMethod == (MethodInfo *)0x0) {
        __this_01.fields._8_8_ = pMVar21;
        __this_01.fields._list = (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffe98;
        __this_01.fields._current = (Il2CppObject *)SStack_138.fields._list;
        bVar9 = System_Collections_Generic_List_Enumerator_object___MoveNext
                          (__this_01,(MethodInfo_321A1D0 *)&stack0xfffffffffffffea8);
        pSVar29 = (System_Collections_Generic_List_Enumerator_T__c *)SStack_138.fields._list;
        if ((char)bVar9 != '\0') goto label_0425b3ae;
      }
      else {
        iVar25 = 0;
        pSVar29 = (System_Collections_Generic_List_Enumerator_T__c *)SStack_138.fields._list;
        while (__this_00.fields._8_8_ = pMVar21,
              __this_00.fields._list = (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffe98,
              __this_00.fields._current = (Il2CppObject *)pSVar29,
              bVar9 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                (__this_00,(MethodInfo_321A1D0 *)&stack0xfffffffffffffea8),
              (char)bVar9 != '\0') {
          if ((System_Collections_Generic_List_TSource__o *)SStack_138.fields._current ==
              (System_Collections_Generic_List_TSource__o *)0x0) goto label_0425b3b8;
          pSVar24 = *(System_String_o **)
                     &((System_Collections_Generic_List_TSource__Fields *)
                      ((long)SStack_138.fields._current + 0x10))->_size;
          pSVar15 = (System_String_o *)0x0;
          if (pSVar24 == (System_String_o *)0x0) goto label_0425b3c6;
          pSVar17 = System_String__Split(pSVar24,10,0,(MethodInfo *)0x0);
          if (pSVar17 == (System_String_array *)0x0) goto label_0425b3de;
          iVar22 = (int)pSVar17->max_length;
          __this_10 = (System_Collections_Generic_List_TSource__o *)il2cpp_runtime_helper_023052d0(TypeInfo_FileRange);
          System_Object___ctor((Il2CppObject *)__this_10,(MethodInfo *)0x0);
          if (__this_10 == (System_Collections_Generic_List_TSource__o *)0x0) goto label_0425b407;
          (__this_10->fields)._items =
               ((System_Collections_Generic_List_TSource__Fields *)((long)SStack_138.fields._current + 0x10))
               ->_items;
          il2cpp_runtime_helper_022b4080(&__this_10->fields);
          (__this_10->fields)._size =
               *(int32_t *)
                &((System_Collections_Generic_List_TSource__Fields *)((long)SStack_138.fields._current + 0x10)
                 )->_syncRoot;
          (__this_10->fields)._version = iVar25;
          uVar2 = iVar25 + -1 + iVar22;
          pSVar19 = (System_Object_array *)(ulong)uVar2;
          *(uint *)&(__this_10->fields)._syncRoot = uVar2;
          *(int *)((long)&(__this_10->fields)._syncRoot + 4) = iVar22;
          *(undefined4 *)&__this_10[1].klass =
               *(undefined4 *)
                ((long)&((System_Collections_Generic_List_TSource__o *)
                        ((long)SStack_138.fields._current + 0x28))->klass + 4);
          lVar12 = MethodInfo_Void_Add;
          __this_13 = (System_Collections_Generic_List_object__o *)pMVar21->name;
          if (__this_13 == (System_Collections_Generic_List_object__o *)0x0) goto label_0425b450;
          piVar11 = &(__this_13->fields)._version;
          *piVar11 = *piVar11 + 1;
          pSVar20 = (__this_13->fields)._items;
          if (pSVar20 == (System_Object_array *)0x0) goto label_0425b46c;
          uVar3 = (__this_13->fields)._size;
          if (uVar3 < (uint)pSVar20->max_length) {
            (__this_13->fields)._size = uVar3 + 1;
            pSVar20->m_Items[(int)uVar3] = (Il2CppObject *)__this_10;
            il2cpp_runtime_helper_022b4080(pSVar20->m_Items + (int)uVar3,__this_10);
          }
          else {
            System_Collections_Generic_List_object___AddWithResize
                      (__this_13,(Il2CppObject *)__this_10,
                       *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
          }
          *(int *)((long)&((System_Collections_Generic_List_TSource__Fields *)
                          ((long)SStack_138.fields._current + 0x10))->_syncRoot + 4) = iVar25;
          *(uint *)&((System_Collections_Generic_List_TSource__o *)((long)SStack_138.fields._current + 0x28))
                    ->klass = uVar2;
          lVar12 = MethodInfo_Void_Add;
          pIVar13 = *(Il2CppObject **)
                     &((System_Collections_Generic_List_TSource__Fields *)
                      ((long)SStack_138.fields._current + 0x10))->_size;
          *(int *)((long)__this_08.genericMethod + 0x1c) = *(int *)((long)__this_08.genericMethod + 0x1c) + 1;
          pIVar7 = *(InvokerMethod *)((long)__this_08.genericMethod + 0x10);
          if (pIVar7 == (InvokerMethod)0x0) {
            il2cpp_runtime_helper_022b2c90();
            goto label_0425b3a9;
          }
          iVar25 = iVar25 + iVar22;
          uVar2 = *(uint *)((long)__this_08.genericMethod + 0x18);
          if (uVar2 < *(uint *)(pIVar7 + 0x18)) {
            *(uint *)((long)__this_08.genericMethod + 0x18) = uVar2 + 1;
            *(Il2CppObject **)(pIVar7 + (long)(int)uVar2 * 8 + 0x20) = pIVar13;
            il2cpp_runtime_helper_022b4080(pIVar7 + (long)(int)uVar2 * 8 + 0x20);
          }
          else {
            System_Collections_Generic_List_object___AddWithResize
                      (__this_08.genericMethod,pIVar13,
                       *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
          }
        }
      }
      __this_02.fields._8_8_ = pMVar21;
      __this_02.fields._list = (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffe98;
      __this_02.fields._current = (Il2CppObject *)pSVar29;
      System_Collections_Generic_List_Enumerator_object___Dispose
                (__this_02,(MethodInfo_321A1C0 *)&stack0xfffffffffffffea8);
      pMVar28 = pMVar21;
      goto label_0425b33e;
    }
  }
label_0425b3a9:
  do {
    il2cpp_runtime_helper_022b2c90();
label_0425b3ae:
    __this_10 = pSStack_148;
    if (pSStack_148 == (System_Collections_Generic_List_TSource__o *)0x0) {
label_0425b3b8:
      il2cpp_runtime_helper_022b2c90();
    }
    pSVar15 = *(System_String_o **)&(__this_10->fields)._size;
    if (pSVar15 == (System_String_o *)0x0) {
label_0425b3c6:
      il2cpp_runtime_helper_022b2c90();
    }
    pSVar17 = System_String__Split(pSVar15,10,0,(MethodInfo *)0x0);
    if (pSVar17 == (System_String_array *)0x0) {
label_0425b3de:
      pSVar17 = (System_String_array *)il2cpp_runtime_helper_022b2c90();
    }
    iVar22 = (int)pSVar17->max_length;
    pSVar19 = (System_Object_array *)il2cpp_runtime_helper_023052d0(TypeInfo_FileRange);
    System_Object___ctor((Il2CppObject *)pSVar19,(MethodInfo *)0x0);
    if (pSVar19 == (System_Object_array *)0x0) {
label_0425b407:
      il2cpp_runtime_helper_022b2c90();
    }
    pSVar19->bounds = (Il2CppArrayBounds *)(__this_10->fields)._items;
    il2cpp_runtime_helper_022b4080(&pSVar19->bounds);
    *(undefined4 *)&pSVar19->max_length = *(undefined4 *)&(__this_10->fields)._syncRoot;
    *(undefined4 *)((long)&pSVar19->max_length + 4) = 0;
    SStack_138.fields._current = (Il2CppObject *)(ulong)(iVar22 - 1U);
    *(uint *)pSVar19->m_Items = iVar22 - 1U;
    *(int *)((long)pSVar19->m_Items + 4) = iVar22;
    *(undefined4 *)(pSVar19->m_Items + 1) = *(undefined4 *)((long)&__this_10[1].klass + 4);
    __this_13 = (System_Collections_Generic_List_object__o *)pMVar21->name;
    if (__this_13 == (System_Collections_Generic_List_object__o *)0x0) {
label_0425b450:
      il2cpp_runtime_helper_022b2c90();
    }
    lVar12 = MethodInfo_Void_Add;
    uVar26 = SUB84(SStack_138.fields._current,0);
    piVar11 = &(__this_13->fields)._version;
    *piVar11 = *piVar11 + 1;
    pSVar20 = (__this_13->fields)._items;
    if (pSVar20 == (System_Object_array *)0x0) {
label_0425b46c:
      uVar26 = SUB84(SStack_138.fields._current,0);
      pSVar20 = (System_Object_array *)il2cpp_runtime_helper_022b2c90();
    }
    uVar2 = (__this_13->fields)._size;
    if (uVar2 < (uint)pSVar20->max_length) {
      (__this_13->fields)._size = uVar2 + 1;
      pSVar20->m_Items[(int)uVar2] = &pSVar19->obj;
      il2cpp_runtime_helper_022b4080(pSVar20->m_Items + (int)uVar2,pSVar19);
    }
    else {
      System_Collections_Generic_List_object___AddWithResize
                (__this_13,&pSVar19->obj,
                 *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
    }
    *(undefined4 *)((long)&(__this_10->fields)._syncRoot + 4) = 0;
    *(undefined4 *)&__this_10[1].klass = uVar26;
    auVar27 = il2cpp_runtime_helper_022b2c90();
    if (auVar27._8_4_ != 1) {
label_0425b5b9:
      __this_04.fields._8_8_ = pMVar21;
      __this_04.fields._list = (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffe98;
      __this_04.fields._current = (Il2CppObject *)pSVar29;
      System_Collections_Generic_List_Enumerator_object___Dispose
                (__this_04,(MethodInfo_321A1C0 *)&stack0xfffffffffffffea8);
      _Unwind_Resume(auVar27._0_8_);
    }
    plVar23 = (long *)__cxa_begin_catch(auVar27._0_8_);
    lVar12 = *plVar23;
    __cxa_end_catch();
    __this_03.fields._8_8_ = pMVar21;
    __this_03.fields._list = (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffe98;
    __this_03.fields._current = (Il2CppObject *)pSVar29;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_03,(MethodInfo_321A1C0 *)&stack0xfffffffffffffea8);
    pMVar28 = pMVar21;
    if (lVar12 != 0) {
      il2cpp_runtime_helper_022fefe0(lVar12);
      goto label_0425b5b9;
    }
label_0425b33e:
    pIVar18 = (Il2CppClass *)
              System_String__Join_3af7e00("\n",__this_08.genericMethod,(MethodInfo *)0x0);
    pMVar28->klass = pIVar18;
    pMVar21 = pMVar28;
    il2cpp_runtime_helper_022b4080(&pMVar28->klass);
    pSVar19 = ((System_Collections_Generic_List_object__Fields *)&pMVar28->invoker_method)->_items;
    if (pSVar19 != (System_Object_array *)0x0) {
      piVar1 = (int *)((long)&pSVar19->max_length + 4);
      *piVar1 = *piVar1 + 1;
      iVar10 = (int32_t)pSVar19->max_length;
      *(undefined4 *)&pSVar19->max_length = 0;
      if (0 < iVar10) {
        System_Array__Clear((System_Array_o *)pSVar19->bounds,0,iVar10,(MethodInfo *)0x0);
      }
      return (int32_t)pMVar28->klass;
    }
  } while( true );
code_r0x0425ace4:
  pSStack_c8 = (System_String_o *)0x425acf4;
  bVar9 = CustomLogic_CLBindingCache__GetOrCreateBinding
                    (typeName.genericMethod,__this_08.genericMethod,(CustomLogic_ICLMemberBinding_o **)binding
                     ,(MethodInfo *)0x0);
  if ((char)bVar9 != '\0') goto label_0425adca;
  goto label_0425ac70;
label_0425adca:
  *(_union_249689 *)_Stack_a8.genericMethod = _Stack_b8;
  pSStack_c8 = (System_String_o *)0x425addc;
  item = _Stack_b8;
  il2cpp_runtime_helper_022b4080();
  pSVar5 = (System_Collections_Generic_Dictionary_object__object__o *)(pSStack_b0->fields)._message;
  __this_11 = (System_Collections_Generic_Dictionary_object__object__o *)0x0;
  if (pSVar5 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    pSStack_c8 = (System_String_o *)0x425ae01;
    System_Collections_Generic_Dictionary_object__object___set_Item
              (pSVar5,__this_08.genericMethod,_Stack_b8.genericMethod,MethodInfo_Void_set_Item);
    goto label_0425ae01;
  }
  goto label_0425ae14;
}


// CustomLogic.CustomLogicClassInstance$$Equals
// il2cpp: bool CustomLogic_CustomLogicClassInstance__Equals (CustomLogic_CustomLogicClassInstance_o* __this, Il2CppObject* obj, const MethodInfo* method);
// 0x425a910

bool_conflict
CustomLogic_CustomLogicClassInstance__Equals
          (CustomLogic_CustomLogicClassInstance_o *__this,Il2CppObject *obj,MethodInfo *method)

{
  int32_t *piVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  int32_t length;
  CustomLogic_CustomLogicEvaluator_o *__this_00;
  System_Collections_Generic_Dictionary_object__object__o *pSVar5;
  char *pcVar6;
  InvokerMethod pIVar7;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  System_Collections_Generic_List_Enumerator_object__o __this_05;
  char cVar8;
  bool_conflict bVar9;
  bool_conflict extraout_EAX;
  bool_conflict extraout_EAX_00;
  System_Object_array *pSVar10;
  long lVar11;
  Il2CppObject *pIVar12;
  undefined1 *puVar13;
  CustomLogic_CustomLogicClassInstance_o *__this_06;
  MethodInfo_33E0DF0 **str3;
  System_String_o *pSVar14;
  System_String_o *str2;
  MethodInfo_3104D80 **message;
  undefined8 uVar15;
  System_Exception_o *__this_07;
  _union_249689 __this_08;
  _union_249689 typeName;
  System_Collections_Generic_HashSet_object__o *__this_09;
  System_Func_TSource__TKey__o *keySelector;
  System_Linq_IOrderedEnumerable_TSource__o *source;
  System_Collections_Generic_List_TSource__o *__this_10;
  System_String_array *pSVar16;
  Il2CppClass *pIVar17;
  System_Object_array *pSVar18;
  System_Object_array *in_RCX;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  _union_249689 extraout_RDX_01;
  int iVar19;
  long *plVar20;
  System_String_o *pSVar21;
  _union_249689 item;
  _union_249689 collection;
  System_Collections_Generic_Dictionary_object__object__o *__this_11;
  Il2CppRGCTXData *__this_12;
  MethodInfo *pMVar22;
  System_Collections_Generic_List_object__o *__this_13;
  int iVar23;
  System_String_o **binding;
  undefined4 uVar24;
  undefined1 auVar25 [12];
  undefined8 in_stack_fffffffffffffeb0;
  MethodInfo *pMVar26;
  System_Collections_Generic_List_Enumerator_T__c *pSVar27;
  System_Collections_Generic_List_TSource__o *pSStack_130;
  System_Collections_Generic_List_Enumerator_T__o SStack_120;
  Il2CppRGCTXData *pIStack_108;
  _union_249689 _Stack_100;
  _union_249689 *p_Stack_f8;
  _union_249689 _Stack_f0;
  System_String_o *pSStack_e8;
  System_Exception_o *pSStack_e0;
  undefined8 uStack_d8;
  System_Collections_Generic_Dictionary_object__object__o *pSStack_d0;
  _union_249689 _Stack_c8;
  undefined8 uStack_c0;
  _union_249689 _Stack_b8;
  System_String_o *pSStack_b0;
  _union_249689 _Stack_a0;
  System_Exception_o *pSStack_98;
  _union_249689 _Stack_90;
  Il2CppObject *pIStack_88;
  System_Exception_o *pSStack_80;
  CustomLogic_CustomLogicEvaluator_o *pCStack_78;
  System_String_o **ppSStack_70;
  System_String_o *pSStack_68;
  System_String_o *pSStack_60;
  Il2CppObject *pIStack_48;
  System_Object_array *pSStack_40;
  CustomLogic_CustomLogicClassInstance_o *pCStack_38;
  Il2CppObject *pIStack_30;
  
  if (g_data_057adbc6 == '\0') {
    pIStack_30 = (Il2CppObject *)0x425a95c;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    pIStack_30 = (Il2CppObject *)0x425a968;
    il2cpp_runtime_helper_023445d0(&TypeInfo_object);
    pIStack_30 = (Il2CppObject *)0x425a974;
    il2cpp_runtime_helper_023445d0(&"__Eq__");
    g_data_057adbc6 = '\x01';
    method = extraout_RDX;
    if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) != 0) goto label_0425a93b;
label_0425a98e:
    pIStack_30 = (Il2CppObject *)0x425a993;
    il2cpp_runtime_helper_02337ed0();
    __this_00 = *(CustomLogic_CustomLogicEvaluator_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
    method = extraout_RDX_00;
  }
  else {
    if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) goto label_0425a98e;
label_0425a93b:
    __this_00 = *(CustomLogic_CustomLogicEvaluator_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
  }
  if (__this_00 == (CustomLogic_CustomLogicEvaluator_o *)0x0) {
label_0425aa64:
    bVar9 = System_Object__Equals((Il2CppObject *)__this,obj,(MethodInfo *)0x0);
    return bVar9;
  }
  binding = &"__Eq__";
  pIStack_30 = (Il2CppObject *)0x425a9bd;
  bVar9 = CustomLogic_CustomLogicClassInstance__HasVariable(__this,"__Eq__",method);
  if ((char)bVar9 == '\0') goto label_0425aa64;
  pIStack_30 = (Il2CppObject *)0x425a9d9;
  pSVar10 = (System_Object_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_object);
  pSVar18 = (System_Object_array *)&TypeInfo_CustomLogicManager;
  if (pSVar10 == (System_Object_array *)0x0) {
label_0425aa7a:
    pIStack_30 = (Il2CppObject *)0x425aa7f;
    il2cpp_runtime_helper_022b2c90();
label_0425aa7f:
    pIStack_30 = (Il2CppObject *)0x425aa84;
    pIVar12 = (Il2CppObject *)il2cpp_runtime_helper_022b2ca0();
label_0425aa84:
    pIStack_30 = (Il2CppObject *)0x425aa8c;
    il2cpp_runtime_helper_022b2fd0(pIVar12);
  }
  else {
    pSVar18 = pSVar10;
    if (obj == (Il2CppObject *)0x0) {
label_0425aa02:
      if ((int)pSVar10->max_length == 0) goto label_0425aa7f;
      pSVar10->m_Items[0] = obj;
      pIStack_30 = (Il2CppObject *)0x425aa1b;
      il2cpp_runtime_helper_022b4080(pSVar10->m_Items,obj);
      pIStack_30 = (Il2CppObject *)0x425aa33;
      in_RCX = pSVar10;
      pIVar12 = CustomLogic_CustomLogicEvaluator__EvaluateMethod
                          (__this_00,__this,"__Eq__",pSVar10,0,(MethodInfo *)0x0);
      if (pIVar12 == (Il2CppObject *)0x0) goto label_0425aa7a;
      in_RCX = (System_Object_array *)(pIVar12->klass->_1).element_class;
      if (in_RCX == *(System_Object_array **)(g_data_057b9b98 + 0x40)) {
        pIStack_30 = (Il2CppObject *)0x425aa58;
        puVar13 = (undefined1 *)il2cpp_runtime_helper_02305440(pIVar12);
        return (bool_conflict)CONCAT71((int7)((ulong)puVar13 >> 8),*puVar13);
      }
      goto label_0425aa84;
    }
    pIStack_30 = (Il2CppObject *)0x425a9f9;
    lVar11 = il2cpp_runtime_helper_023051f0(obj);
    if (lVar11 != 0) goto label_0425aa02;
  }
  pIStack_30 = (Il2CppObject *)0x425aa91;
  __this_06 = (CustomLogic_CustomLogicClassInstance_o *)il2cpp_runtime_helper_0231b270();
  pSVar21 = (System_String_o *)0x0;
  pIStack_30 = (Il2CppObject *)0x425aa9b;
  il2cpp_runtime_helper_022b2b10();
  pIStack_48 = (Il2CppObject *)0x0;
  pSStack_40 = pSVar18;
  pCStack_38 = __this;
  pIStack_30 = obj;
  bVar9 = CustomLogic_CustomLogicClassInstance__TryGetVariable
                    (__this_06,pSVar21,&pIStack_48,(MethodInfo *)in_RCX);
  if ((char)bVar9 != '\0') {
    return (bool_conflict)pIStack_48;
  }
  str3 = (MethodInfo_33E0DF0 **)
         (*(__this_06->klass->vtable)._4_unknown.methodPtr)
                   (__this_06,(__this_06->klass->vtable)._4_unknown.method);
  pSVar14 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Variable ");
  str2 = (System_String_o *)il2cpp_runtime_helper_023445d0(&" not found in class ");
  message = (MethodInfo_3104D80 **)
            System_String__Concat_3af7470(pSVar14,pSVar21,str2,(System_String_o *)str3,(MethodInfo *)0x0);
  uVar15 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
  __this_07 = (System_Exception_o *)il2cpp_runtime_helper_023052d0(uVar15);
  System_Exception___ctor_3cf6120(__this_07,(System_String_o *)message,(MethodInfo *)0x0);
  __this_08.genericMethod = (void *)il2cpp_runtime_helper_023445d0(&MethodInfo_Object_GetVariable);
  plVar20 = (long *)__this_07;
  il2cpp_runtime_helper_022b2b10();
  ppSStack_70 = &"__Eq__";
  item = __this_08;
  pSStack_80 = __this_07;
  pCStack_78 = __this_00;
  pSStack_68 = (System_String_o *)message;
  pSStack_60 = (System_String_o *)str3;
  if (g_data_057adbc7 == '\0') {
    pSStack_b0 = (System_String_o *)0x425ab8c;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicBuiltinTypes);
    pSStack_b0 = (System_String_o *)0x425ab98;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    pSStack_b0 = (System_String_o *)0x425aba4;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_TryGetValue);
    pSStack_b0 = (System_String_o *)0x425abb0;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Item);
    pSStack_b0 = (System_String_o *)0x425abbc;
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_System_String_get_Item);
    pSStack_b0 = (System_String_o *)0x425abc8;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    pSStack_b0 = (System_String_o *)0x425abd4;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Contains);
    g_data_057adbc7 = '\x01';
  }
  pIStack_88 = (Il2CppObject *)0x0;
  _Stack_a0.genericMethod = (MethodInfo *)0x0;
  pSVar5 = (System_Collections_Generic_Dictionary_object__object__o *)
           (((System_Exception_o *)plVar20)->fields)._message;
  __this_11 = (System_Collections_Generic_Dictionary_object__object__o *)0x0;
  typeName = extraout_RDX_01;
  if (pSVar5 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    pSStack_b0 = (System_String_o *)0x425ac11;
    bVar9 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                      (pSVar5,__this_08.genericMethod,&pIStack_88,MethodInfo_Boolean_TryGetValue);
    if ((char)bVar9 == '\0') {
      pSStack_b0 = (System_String_o *)0x425ac48;
      pSStack_98 = (System_Exception_o *)plVar20;
      _Stack_90 = extraout_RDX_01;
      typeName.genericMethod =
           (void *)(*(((System_Exception_o *)plVar20)->klass->vtable)._4_unknown.methodPtr)(plVar20);
      plVar20 = &TypeInfo_CustomLogicBuiltinTypes;
      message = &MethodInfo_HashSet_1_System_String_get_Item;
      str3 = &MethodInfo_Boolean_Contains;
      binding = (System_String_o **)&_Stack_a0;
label_0425ac70:
      iVar23 = *(int *)(TypeInfo_CustomLogicBuiltinTypes + 0xe4);
      do {
        if (iVar23 == 0) {
          pSStack_b0 = (System_String_o *)0x425ac82;
          il2cpp_runtime_helper_02337ed0();
        }
        item.genericMethod = (MethodInfo *)0x0;
        pSStack_b0 = (System_String_o *)0x425ac8c;
        bVar9 = CustomLogic_CustomLogicBuiltinTypes__IsBuiltinType(typeName.genericMethod,(MethodInfo *)0x0);
        if ((char)bVar9 == '\0') {
label_0425adb3:
          *(undefined8 *)_Stack_90.genericMethod = 0;
          pSStack_b0 = (System_String_o *)0x425adc8;
          il2cpp_runtime_helper_022b4080(_Stack_90.genericMethod,0);
          return 0;
        }
        if (*(int *)(TypeInfo_CustomLogicBuiltinTypes + 0xe4) == 0) {
          pSStack_b0 = (System_String_o *)0x425aca6;
          il2cpp_runtime_helper_02337ed0();
        }
        __this_11 = *(System_Collections_Generic_Dictionary_object__object__o **)
                     (*(long *)(TypeInfo_CustomLogicBuiltinTypes + 0xb8) + 0x18);
        if (__this_11 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_0425ae14;
        pSStack_b0 = (System_String_o *)0x425acc9;
        item = typeName;
        __this_09 = (System_Collections_Generic_HashSet_object__o *)
                    System_Collections_Generic_Dictionary_object__object___get_Item
                              (__this_11,typeName.genericMethod,MethodInfo_HashSet_1_System_String_get_Item);
        if (__this_09 == (System_Collections_Generic_HashSet_object__o *)0x0) goto label_0425ae14;
        pSStack_b0 = (System_String_o *)0x425ace0;
        bVar9 = System_Collections_Generic_HashSet_object___Contains
                          (__this_09,__this_08.genericMethod,MethodInfo_Boolean_Contains);
        if ((char)bVar9 != '\0') goto code_r0x0425ace4;
        item = (_union_249689)(pSStack_98->klass->vtable)._5_get_Message.method;
        pSStack_b0 = (System_String_o *)0x425ad16;
        cVar8 = (*(pSStack_98->klass->vtable)._5_get_Message.methodPtr)();
        if (cVar8 == '\0') goto label_0425adb3;
        if (*(int *)(TypeInfo_CustomLogicBuiltinTypes + 0xe4) == 0) {
          pSStack_b0 = (System_String_o *)0x425ad30;
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar5 = *(System_Collections_Generic_Dictionary_object__object__o **)
                  (*(long *)(TypeInfo_CustomLogicBuiltinTypes + 0xb8) + 0x10);
        __this_11 = (System_Collections_Generic_Dictionary_object__object__o *)0x0;
        if (pSVar5 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_0425ae14;
        pSStack_b0 = (System_String_o *)0x425ad5a;
        item = typeName;
        bVar9 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                          (pSVar5,typeName.genericMethod,MethodInfo_Boolean_ContainsKey);
        if ((char)bVar9 == '\0') goto label_0425adb3;
        if (*(int *)(TypeInfo_CustomLogicBuiltinTypes + 0xe4) == 0) {
          pSStack_b0 = (System_String_o *)0x425ad70;
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar5 = *(System_Collections_Generic_Dictionary_object__object__o **)
                  (*(long *)(TypeInfo_CustomLogicBuiltinTypes + 0xb8) + 0x10);
        __this_11 = (System_Collections_Generic_Dictionary_object__object__o *)0x0;
        if (pSVar5 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_0425ae14;
        pSStack_b0 = (System_String_o *)0x425ad9a;
        typeName.genericMethod =
             System_Collections_Generic_Dictionary_object__object___get_Item
                       (pSVar5,typeName.genericMethod,MethodInfo_String_get_Item);
        iVar23 = *(int *)(TypeInfo_CustomLogicBuiltinTypes + 0xe4);
      } while( true );
    }
    *(Il2CppObject **)extraout_RDX_01.genericMethod = pIStack_88;
    pSStack_b0 = (System_String_o *)0x425ac25;
    il2cpp_runtime_helper_022b4080(extraout_RDX_01.genericMethod);
label_0425ae01:
    return (bool_conflict)CONCAT71(typeName._1_7_,1);
  }
label_0425ae14:
  pSStack_b0 = (System_String_o *)0x425ae19;
  uStack_c0 = il2cpp_runtime_helper_022b2c90();
  collection = item;
  _Stack_b8 = typeName;
  pSStack_b0 = (System_String_o *)message;
  if (g_data_057adbca == '\0') {
    _Stack_c8 = (_union_249689)0x425ae3f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    g_data_057adbca = '\x01';
  }
  lVar11 = MethodInfo_Void_Add;
  __this_12 = (Il2CppRGCTXData *)(__this_11->fields)._buckets;
  if (__this_12 != (Il2CppRGCTXData *)0x0) {
    *(int *)((long)__this_12 + 0x1c) = *(int *)((long)__this_12 + 0x1c) + 1;
    pMVar22 = __this_12[2].method;
    if (pMVar22 != (MethodInfo *)0x0) {
      uVar3 = *(uint *)(__this_12 + 3);
      if (*(uint *)&pMVar22->name <= uVar3) {
        System_Collections_Generic_List_object___AddWithResize
                  ((System_Collections_Generic_List_object__o *)__this_12,item.genericMethod,
                   *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
        return extraout_EAX;
      }
      *(uint *)(__this_12 + 3) = uVar3 + 1;
      ((_union_249689 *)(&pMVar22->klass + (int)uVar3))->genericMethod = (void *)item;
      bVar9 = il2cpp_runtime_helper_022b4080(&pMVar22->klass + (int)uVar3,item.genericMethod);
      return bVar9;
    }
  }
  _Stack_c8 = (_union_249689)0x425aeb4;
  uStack_d8 = il2cpp_runtime_helper_022b2c90();
  pSStack_d0 = __this_11;
  _Stack_c8 = item;
  if (g_data_057adbcb == '\0') {
    pSStack_e0 = (System_Exception_o *)0x425aedf;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_AddRange);
    g_data_057adbcb = '\x01';
  }
  pMVar22 = __this_12[2].method;
  if (pMVar22 != (MethodInfo *)0x0) {
    System_Collections_Generic_List_object___AddRange
              ((System_Collections_Generic_List_object__o *)pMVar22,collection.genericMethod,MethodInfo_Void_AddRange);
    return extraout_EAX_00;
  }
  pSStack_e0 = (System_Exception_o *)0x425af0d;
  il2cpp_runtime_helper_022b2c90();
  pIStack_108 = __this_12;
  _Stack_100 = __this_08;
  p_Stack_f8 = (_union_249689 *)binding;
  _Stack_f0 = collection;
  pSStack_e8 = (System_String_o *)str3;
  pSStack_e0 = (System_Exception_o *)plVar20;
  if (g_data_057adbcc == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_IOrderedEnumerable_1_CustomLogic_CustomLogicSourceFile_O);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_CustomLogic_CustomLogicSourceFile_ToList_CustomLo);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicSourceFile_get_Current);
    il2cpp_runtime_helper_023445d0(&TypeInfo_FileRange);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicSourceFile_int);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_CustomLogic_CustomLogicSourceFile_Ge);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_Compile_b__6_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    il2cpp_runtime_helper_023445d0(&"\n");
    g_data_057adbcc = '\x01';
  }
  pSVar27 = (System_Collections_Generic_List_Enumerator_T__c *)0x0;
  pSStack_130 = (System_Collections_Generic_List_TSource__o *)0x0;
  pSVar18 = ((System_Collections_Generic_List_object__Fields *)&pMVar22->invoker_method)->_items;
  if (*(int *)(TypeInfo_c + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    keySelector = *(System_Func_TSource__TKey__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
  }
  else {
    keySelector = *(System_Func_TSource__TKey__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
  }
  if (keySelector == (System_Func_TSource__TKey__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    __this_08 = **(_union_249689 **)(TypeInfo_c + 0xb8);
    keySelector = (System_Func_TSource__TKey__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicSourceFile_int);
    System_Func_object__int____ctor();
    lVar11 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_TSource__TKey__o **)(lVar11 + 8) = keySelector;
    il2cpp_runtime_helper_022b4080(lVar11 + 8,keySelector);
  }
  source = System_Linq_Enumerable__OrderBy_object__int_
                     ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar18,keySelector,MethodInfo_IOrderedEnumerable_1_CustomLogic_CustomLogicSourceFile_O);
  __this_10 = System_Linq_Enumerable__ToList_object_
                        ((System_Collections_Generic_IEnumerable_TSource__o *)source,MethodInfo_List_1_CustomLogic_CustomLogicSourceFile_ToList_CustomLo);
  pcVar6 = pMVar22->name;
  if (pcVar6 != (char *)0x0) {
    *(int *)(pcVar6 + 0x1c) = *(int *)(pcVar6 + 0x1c) + 1;
    iVar23 = *(int *)(pcVar6 + 0x18);
    pcVar6[0x18] = '\0';
    pcVar6[0x19] = '\0';
    pcVar6[0x1a] = '\0';
    pcVar6[0x1b] = '\0';
    if (0 < iVar23) {
      System_Array__Clear(*(System_Array_o **)(pcVar6 + 0x10),0,iVar23,(MethodInfo *)0x0);
    }
    __this_08.genericMethod = (void *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
    System_Collections_Generic_List_object____ctor(__this_08.genericMethod,MethodInfo_List_1_System_String);
    if (__this_10 != (System_Collections_Generic_List_TSource__o *)0x0) {
      System_Collections_Generic_List_object___GetEnumerator
                (&SStack_120,(System_Collections_Generic_List_object__o *)__this_10,MethodInfo_List_1_T_Enumerator_CustomLogic_CustomLogicSourceFile_Ge);
      pSStack_130 = (System_Collections_Generic_List_TSource__o *)SStack_120.fields._current;
      if (__this_08.genericMethod == (MethodInfo *)0x0) {
        __this_02.fields._8_8_ = pMVar22;
        __this_02.fields._list = (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffeb0;
        __this_02.fields._current = (Il2CppObject *)SStack_120.fields._list;
        bVar9 = System_Collections_Generic_List_Enumerator_object___MoveNext
                          (__this_02,(MethodInfo_321A1D0 *)&stack0xfffffffffffffec0);
        pSVar27 = (System_Collections_Generic_List_Enumerator_T__c *)SStack_120.fields._list;
        if ((char)bVar9 != '\0') goto label_0425b3ae;
      }
      else {
        iVar23 = 0;
        pSVar27 = (System_Collections_Generic_List_Enumerator_T__c *)SStack_120.fields._list;
        while (__this_01.fields._8_8_ = pMVar22,
              __this_01.fields._list = (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffeb0,
              __this_01.fields._current = (Il2CppObject *)pSVar27,
              bVar9 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                (__this_01,(MethodInfo_321A1D0 *)&stack0xfffffffffffffec0),
              (char)bVar9 != '\0') {
          if ((System_Collections_Generic_List_TSource__o *)SStack_120.fields._current ==
              (System_Collections_Generic_List_TSource__o *)0x0) goto label_0425b3b8;
          pSVar21 = *(System_String_o **)
                     &((System_Collections_Generic_List_TSource__Fields *)
                      ((long)SStack_120.fields._current + 0x10))->_size;
          pSVar14 = (System_String_o *)0x0;
          if (pSVar21 == (System_String_o *)0x0) goto label_0425b3c6;
          pSVar16 = System_String__Split(pSVar21,10,0,(MethodInfo *)0x0);
          if (pSVar16 == (System_String_array *)0x0) goto label_0425b3de;
          iVar19 = (int)pSVar16->max_length;
          __this_10 = (System_Collections_Generic_List_TSource__o *)il2cpp_runtime_helper_023052d0(TypeInfo_FileRange);
          System_Object___ctor((Il2CppObject *)__this_10,(MethodInfo *)0x0);
          if (__this_10 == (System_Collections_Generic_List_TSource__o *)0x0) goto label_0425b407;
          (__this_10->fields)._items =
               ((System_Collections_Generic_List_TSource__Fields *)((long)SStack_120.fields._current + 0x10))
               ->_items;
          il2cpp_runtime_helper_022b4080(&__this_10->fields);
          (__this_10->fields)._size =
               *(int32_t *)
                &((System_Collections_Generic_List_TSource__Fields *)((long)SStack_120.fields._current + 0x10)
                 )->_syncRoot;
          (__this_10->fields)._version = iVar23;
          uVar3 = iVar23 + -1 + iVar19;
          pSVar18 = (System_Object_array *)(ulong)uVar3;
          *(uint *)&(__this_10->fields)._syncRoot = uVar3;
          *(int *)((long)&(__this_10->fields)._syncRoot + 4) = iVar19;
          *(undefined4 *)&__this_10[1].klass =
               *(undefined4 *)
                ((long)&((System_Collections_Generic_List_TSource__o *)
                        ((long)SStack_120.fields._current + 0x28))->klass + 4);
          lVar11 = MethodInfo_Void_Add;
          __this_13 = (System_Collections_Generic_List_object__o *)pMVar22->name;
          if (__this_13 == (System_Collections_Generic_List_object__o *)0x0) goto label_0425b450;
          piVar1 = &(__this_13->fields)._version;
          *piVar1 = *piVar1 + 1;
          pSVar10 = (__this_13->fields)._items;
          if (pSVar10 == (System_Object_array *)0x0) goto label_0425b46c;
          uVar4 = (__this_13->fields)._size;
          if (uVar4 < (uint)pSVar10->max_length) {
            (__this_13->fields)._size = uVar4 + 1;
            pSVar10->m_Items[(int)uVar4] = (Il2CppObject *)__this_10;
            il2cpp_runtime_helper_022b4080(pSVar10->m_Items + (int)uVar4,__this_10);
          }
          else {
            System_Collections_Generic_List_object___AddWithResize
                      (__this_13,(Il2CppObject *)__this_10,
                       *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
          }
          *(int *)((long)&((System_Collections_Generic_List_TSource__Fields *)
                          ((long)SStack_120.fields._current + 0x10))->_syncRoot + 4) = iVar23;
          *(uint *)&((System_Collections_Generic_List_TSource__o *)((long)SStack_120.fields._current + 0x28))
                    ->klass = uVar3;
          lVar11 = MethodInfo_Void_Add;
          pIVar12 = *(Il2CppObject **)
                     &((System_Collections_Generic_List_TSource__Fields *)
                      ((long)SStack_120.fields._current + 0x10))->_size;
          *(int *)((long)__this_08.genericMethod + 0x1c) = *(int *)((long)__this_08.genericMethod + 0x1c) + 1;
          pIVar7 = *(InvokerMethod *)((long)__this_08.genericMethod + 0x10);
          if (pIVar7 == (InvokerMethod)0x0) {
            il2cpp_runtime_helper_022b2c90();
            goto label_0425b3a9;
          }
          iVar23 = iVar23 + iVar19;
          uVar3 = *(uint *)((long)__this_08.genericMethod + 0x18);
          if (uVar3 < *(uint *)(pIVar7 + 0x18)) {
            *(uint *)((long)__this_08.genericMethod + 0x18) = uVar3 + 1;
            *(Il2CppObject **)(pIVar7 + (long)(int)uVar3 * 8 + 0x20) = pIVar12;
            il2cpp_runtime_helper_022b4080(pIVar7 + (long)(int)uVar3 * 8 + 0x20);
          }
          else {
            System_Collections_Generic_List_object___AddWithResize
                      (__this_08.genericMethod,pIVar12,
                       *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
          }
        }
      }
      __this_03.fields._8_8_ = pMVar22;
      __this_03.fields._list = (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffeb0;
      __this_03.fields._current = (Il2CppObject *)pSVar27;
      System_Collections_Generic_List_Enumerator_object___Dispose
                (__this_03,(MethodInfo_321A1C0 *)&stack0xfffffffffffffec0);
      pMVar26 = pMVar22;
      goto label_0425b33e;
    }
  }
label_0425b3a9:
  do {
    il2cpp_runtime_helper_022b2c90();
label_0425b3ae:
    __this_10 = pSStack_130;
    if (pSStack_130 == (System_Collections_Generic_List_TSource__o *)0x0) {
label_0425b3b8:
      il2cpp_runtime_helper_022b2c90();
    }
    pSVar14 = *(System_String_o **)&(__this_10->fields)._size;
    if (pSVar14 == (System_String_o *)0x0) {
label_0425b3c6:
      il2cpp_runtime_helper_022b2c90();
    }
    pSVar16 = System_String__Split(pSVar14,10,0,(MethodInfo *)0x0);
    if (pSVar16 == (System_String_array *)0x0) {
label_0425b3de:
      pSVar16 = (System_String_array *)il2cpp_runtime_helper_022b2c90();
    }
    iVar19 = (int)pSVar16->max_length;
    pSVar18 = (System_Object_array *)il2cpp_runtime_helper_023052d0(TypeInfo_FileRange);
    System_Object___ctor((Il2CppObject *)pSVar18,(MethodInfo *)0x0);
    if (pSVar18 == (System_Object_array *)0x0) {
label_0425b407:
      il2cpp_runtime_helper_022b2c90();
    }
    pSVar18->bounds = (Il2CppArrayBounds *)(__this_10->fields)._items;
    il2cpp_runtime_helper_022b4080(&pSVar18->bounds);
    *(undefined4 *)&pSVar18->max_length = *(undefined4 *)&(__this_10->fields)._syncRoot;
    *(undefined4 *)((long)&pSVar18->max_length + 4) = 0;
    SStack_120.fields._current = (Il2CppObject *)(ulong)(iVar19 - 1U);
    *(uint *)pSVar18->m_Items = iVar19 - 1U;
    *(int *)((long)pSVar18->m_Items + 4) = iVar19;
    *(undefined4 *)(pSVar18->m_Items + 1) = *(undefined4 *)((long)&__this_10[1].klass + 4);
    __this_13 = (System_Collections_Generic_List_object__o *)pMVar22->name;
    if (__this_13 == (System_Collections_Generic_List_object__o *)0x0) {
label_0425b450:
      il2cpp_runtime_helper_022b2c90();
    }
    lVar11 = MethodInfo_Void_Add;
    uVar24 = SUB84(SStack_120.fields._current,0);
    piVar1 = &(__this_13->fields)._version;
    *piVar1 = *piVar1 + 1;
    pSVar10 = (__this_13->fields)._items;
    if (pSVar10 == (System_Object_array *)0x0) {
label_0425b46c:
      uVar24 = SUB84(SStack_120.fields._current,0);
      pSVar10 = (System_Object_array *)il2cpp_runtime_helper_022b2c90();
    }
    uVar3 = (__this_13->fields)._size;
    if (uVar3 < (uint)pSVar10->max_length) {
      (__this_13->fields)._size = uVar3 + 1;
      pSVar10->m_Items[(int)uVar3] = &pSVar18->obj;
      il2cpp_runtime_helper_022b4080(pSVar10->m_Items + (int)uVar3,pSVar18);
    }
    else {
      System_Collections_Generic_List_object___AddWithResize
                (__this_13,&pSVar18->obj,
                 *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
    }
    *(undefined4 *)((long)&(__this_10->fields)._syncRoot + 4) = 0;
    *(undefined4 *)&__this_10[1].klass = uVar24;
    auVar25 = il2cpp_runtime_helper_022b2c90();
    if (auVar25._8_4_ != 1) {
label_0425b5b9:
      __this_05.fields._8_8_ = pMVar22;
      __this_05.fields._list = (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffeb0;
      __this_05.fields._current = (Il2CppObject *)pSVar27;
      System_Collections_Generic_List_Enumerator_object___Dispose
                (__this_05,(MethodInfo_321A1C0 *)&stack0xfffffffffffffec0);
      _Unwind_Resume(auVar25._0_8_);
    }
    plVar20 = (long *)__cxa_begin_catch(auVar25._0_8_);
    lVar11 = *plVar20;
    __cxa_end_catch();
    __this_04.fields._8_8_ = pMVar22;
    __this_04.fields._list = (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffeb0;
    __this_04.fields._current = (Il2CppObject *)pSVar27;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_04,(MethodInfo_321A1C0 *)&stack0xfffffffffffffec0);
    pMVar26 = pMVar22;
    if (lVar11 != 0) {
      il2cpp_runtime_helper_022fefe0(lVar11);
      goto label_0425b5b9;
    }
label_0425b33e:
    pIVar17 = (Il2CppClass *)
              System_String__Join_3af7e00("\n",__this_08.genericMethod,(MethodInfo *)0x0);
    pMVar26->klass = pIVar17;
    pMVar22 = pMVar26;
    il2cpp_runtime_helper_022b4080(&pMVar26->klass);
    pSVar18 = ((System_Collections_Generic_List_object__Fields *)&pMVar26->invoker_method)->_items;
    if (pSVar18 != (System_Object_array *)0x0) {
      piVar2 = (int *)((long)&pSVar18->max_length + 4);
      *piVar2 = *piVar2 + 1;
      length = (int32_t)pSVar18->max_length;
      *(undefined4 *)&pSVar18->max_length = 0;
      if (0 < length) {
        System_Array__Clear((System_Array_o *)pSVar18->bounds,0,length,(MethodInfo *)0x0);
      }
      return (bool_conflict)pMVar26->klass;
    }
  } while( true );
code_r0x0425ace4:
  pSStack_b0 = (System_String_o *)0x425acf4;
  bVar9 = CustomLogic_CLBindingCache__GetOrCreateBinding
                    (typeName.genericMethod,__this_08.genericMethod,(CustomLogic_ICLMemberBinding_o **)binding
                     ,(MethodInfo *)0x0);
  if ((char)bVar9 != '\0') goto label_0425adca;
  goto label_0425ac70;
label_0425adca:
  *(_union_249689 *)_Stack_90.genericMethod = _Stack_a0;
  pSStack_b0 = (System_String_o *)0x425addc;
  item = _Stack_a0;
  il2cpp_runtime_helper_022b4080();
  pSVar5 = (System_Collections_Generic_Dictionary_object__object__o *)(pSStack_98->fields)._message;
  __this_11 = (System_Collections_Generic_Dictionary_object__object__o *)0x0;
  if (pSVar5 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    pSStack_b0 = (System_String_o *)0x425ae01;
    System_Collections_Generic_Dictionary_object__object___set_Item
              (pSVar5,__this_08.genericMethod,_Stack_a0.genericMethod,MethodInfo_Void_set_Item);
    goto label_0425ae01;
  }
  goto label_0425ae14;
}


// CustomLogic.CustomLogicClassInstance$$GetVariable
// il2cpp: Il2CppObject* CustomLogic_CustomLogicClassInstance__GetVariable (CustomLogic_CustomLogicClassInstance_o* __this, System_String_o* name, const MethodInfo* method);
// 0x425aaa0

Il2CppObject *
CustomLogic_CustomLogicClassInstance__GetVariable
          (CustomLogic_CustomLogicClassInstance_o *__this,System_String_o *name,MethodInfo *method)

{
  int32_t *piVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  int32_t length;
  System_Collections_Generic_Dictionary_object__object__o *pSVar5;
  char *pcVar6;
  InvokerMethod pIVar7;
  System_Collections_Generic_List_Enumerator_object__o __this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  char cVar8;
  bool_conflict bVar9;
  MethodInfo_33E0DF0 **str3;
  System_String_o *pSVar10;
  System_String_o *pSVar11;
  MethodInfo_3104D80 **message;
  undefined8 uVar12;
  System_Exception_o *__this_05;
  _union_249689 __this_06;
  _union_249689 typeName;
  System_Collections_Generic_HashSet_object__o *__this_07;
  Il2CppObject *pIVar13;
  Il2CppObject *extraout_RAX;
  Il2CppObject *extraout_RAX_00;
  System_Func_TSource__TKey__o *keySelector;
  System_Linq_IOrderedEnumerable_TSource__o *source;
  System_Collections_Generic_List_TSource__o *__this_08;
  System_String_array *pSVar14;
  Il2CppClass *pIVar15;
  System_Object_array *pSVar16;
  System_Object_array *pSVar17;
  MethodInfo *in_RCX;
  long lVar18;
  _union_249689 extraout_RDX;
  ulong uVar19;
  int iVar20;
  long *plVar21;
  _union_249689 item;
  _union_249689 collection;
  System_Collections_Generic_Dictionary_object__object__o *__this_09;
  Il2CppRGCTXData *__this_10;
  MethodInfo *pMVar22;
  System_Collections_Generic_List_object__o *__this_11;
  int iVar23;
  _union_249689 *unaff_R13;
  undefined4 uVar24;
  undefined1 auVar25 [12];
  undefined8 in_stack_fffffffffffffed8;
  MethodInfo *pMVar26;
  System_Collections_Generic_List_Enumerator_T__c *pSVar27;
  System_Collections_Generic_List_TSource__o *pSStack_108;
  System_Collections_Generic_List_Enumerator_T__o SStack_f8;
  Il2CppRGCTXData *pIStack_e0;
  _union_249689 _Stack_d8;
  _union_249689 *p_Stack_d0;
  _union_249689 _Stack_c8;
  System_String_o *pSStack_c0;
  System_Exception_o *pSStack_b8;
  undefined8 uStack_b0;
  System_Collections_Generic_Dictionary_object__object__o *pSStack_a8;
  _union_249689 _Stack_a0;
  undefined8 uStack_98;
  _union_249689 _Stack_90;
  System_String_o *pSStack_88;
  _union_249689 _Stack_78;
  System_Exception_o *pSStack_70;
  _union_249689 _Stack_68;
  Il2CppObject *pIStack_60;
  System_Exception_o *pSStack_58;
  Il2CppObject *local_20;
  
  local_20 = (Il2CppObject *)0x0;
  bVar9 = CustomLogic_CustomLogicClassInstance__TryGetVariable(__this,name,&local_20,in_RCX);
  if ((char)bVar9 != '\0') {
    return local_20;
  }
  str3 = (MethodInfo_33E0DF0 **)
         (*(__this->klass->vtable)._4_unknown.methodPtr)(__this,(__this->klass->vtable)._4_unknown.method);
  pSVar10 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Variable ");
  pSVar11 = (System_String_o *)il2cpp_runtime_helper_023445d0(&" not found in class ");
  message = (MethodInfo_3104D80 **)
            System_String__Concat_3af7470(pSVar10,name,pSVar11,(System_String_o *)str3,(MethodInfo *)0x0);
  uVar12 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
  __this_05 = (System_Exception_o *)il2cpp_runtime_helper_023052d0(uVar12);
  System_Exception___ctor_3cf6120(__this_05,(System_String_o *)message,(MethodInfo *)0x0);
  __this_06.genericMethod = (void *)il2cpp_runtime_helper_023445d0(&MethodInfo_Object_GetVariable);
  plVar21 = (long *)__this_05;
  il2cpp_runtime_helper_022b2b10();
  item = __this_06;
  pSStack_58 = __this_05;
  if (g_data_057adbc7 == '\0') {
    pSStack_88 = (System_String_o *)0x425ab8c;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicBuiltinTypes);
    pSStack_88 = (System_String_o *)0x425ab98;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    pSStack_88 = (System_String_o *)0x425aba4;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_TryGetValue);
    pSStack_88 = (System_String_o *)0x425abb0;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Item);
    pSStack_88 = (System_String_o *)0x425abbc;
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_System_String_get_Item);
    pSStack_88 = (System_String_o *)0x425abc8;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    pSStack_88 = (System_String_o *)0x425abd4;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Contains);
    g_data_057adbc7 = '\x01';
  }
  pIStack_60 = (Il2CppObject *)0x0;
  _Stack_78.genericMethod = (MethodInfo *)0x0;
  pSVar5 = (System_Collections_Generic_Dictionary_object__object__o *)
           (((System_Exception_o *)plVar21)->fields)._message;
  __this_09 = (System_Collections_Generic_Dictionary_object__object__o *)0x0;
  typeName = extraout_RDX;
  if (pSVar5 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    pSStack_88 = (System_String_o *)0x425ac11;
    bVar9 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                      (pSVar5,__this_06.genericMethod,&pIStack_60,MethodInfo_Boolean_TryGetValue);
    if ((char)bVar9 == '\0') {
      pSStack_88 = (System_String_o *)0x425ac48;
      pSStack_70 = (System_Exception_o *)plVar21;
      _Stack_68 = extraout_RDX;
      typeName.genericMethod =
           (void *)(*(((System_Exception_o *)plVar21)->klass->vtable)._4_unknown.methodPtr)(plVar21);
      plVar21 = &TypeInfo_CustomLogicBuiltinTypes;
      message = &MethodInfo_HashSet_1_System_String_get_Item;
      str3 = &MethodInfo_Boolean_Contains;
      unaff_R13 = &_Stack_78;
label_0425ac70:
      iVar23 = *(int *)(TypeInfo_CustomLogicBuiltinTypes + 0xe4);
      do {
        if (iVar23 == 0) {
          pSStack_88 = (System_String_o *)0x425ac82;
          il2cpp_runtime_helper_02337ed0();
        }
        item.genericMethod = (MethodInfo *)0x0;
        pSStack_88 = (System_String_o *)0x425ac8c;
        bVar9 = CustomLogic_CustomLogicBuiltinTypes__IsBuiltinType(typeName.genericMethod,(MethodInfo *)0x0);
        if ((char)bVar9 == '\0') {
label_0425adb3:
          *(undefined8 *)_Stack_68.genericMethod = 0;
          uVar19 = 0;
          pSStack_88 = (System_String_o *)0x425adc8;
          il2cpp_runtime_helper_022b4080(_Stack_68.genericMethod,0);
          goto label_0425ae03;
        }
        if (*(int *)(TypeInfo_CustomLogicBuiltinTypes + 0xe4) == 0) {
          pSStack_88 = (System_String_o *)0x425aca6;
          il2cpp_runtime_helper_02337ed0();
        }
        __this_09 = *(System_Collections_Generic_Dictionary_object__object__o **)
                     (*(long *)(TypeInfo_CustomLogicBuiltinTypes + 0xb8) + 0x18);
        if (__this_09 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_0425ae14;
        pSStack_88 = (System_String_o *)0x425acc9;
        item = typeName;
        __this_07 = (System_Collections_Generic_HashSet_object__o *)
                    System_Collections_Generic_Dictionary_object__object___get_Item
                              (__this_09,typeName.genericMethod,MethodInfo_HashSet_1_System_String_get_Item);
        if (__this_07 == (System_Collections_Generic_HashSet_object__o *)0x0) goto label_0425ae14;
        pSStack_88 = (System_String_o *)0x425ace0;
        bVar9 = System_Collections_Generic_HashSet_object___Contains
                          (__this_07,__this_06.genericMethod,MethodInfo_Boolean_Contains);
        if ((char)bVar9 != '\0') goto code_r0x0425ace4;
        item = (_union_249689)(pSStack_70->klass->vtable)._5_get_Message.method;
        pSStack_88 = (System_String_o *)0x425ad16;
        cVar8 = (*(pSStack_70->klass->vtable)._5_get_Message.methodPtr)();
        if (cVar8 == '\0') goto label_0425adb3;
        if (*(int *)(TypeInfo_CustomLogicBuiltinTypes + 0xe4) == 0) {
          pSStack_88 = (System_String_o *)0x425ad30;
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar5 = *(System_Collections_Generic_Dictionary_object__object__o **)
                  (*(long *)(TypeInfo_CustomLogicBuiltinTypes + 0xb8) + 0x10);
        __this_09 = (System_Collections_Generic_Dictionary_object__object__o *)0x0;
        if (pSVar5 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_0425ae14;
        pSStack_88 = (System_String_o *)0x425ad5a;
        item = typeName;
        bVar9 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                          (pSVar5,typeName.genericMethod,MethodInfo_Boolean_ContainsKey);
        if ((char)bVar9 == '\0') goto label_0425adb3;
        if (*(int *)(TypeInfo_CustomLogicBuiltinTypes + 0xe4) == 0) {
          pSStack_88 = (System_String_o *)0x425ad70;
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar5 = *(System_Collections_Generic_Dictionary_object__object__o **)
                  (*(long *)(TypeInfo_CustomLogicBuiltinTypes + 0xb8) + 0x10);
        __this_09 = (System_Collections_Generic_Dictionary_object__object__o *)0x0;
        if (pSVar5 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_0425ae14;
        pSStack_88 = (System_String_o *)0x425ad9a;
        typeName.genericMethod =
             System_Collections_Generic_Dictionary_object__object___get_Item
                       (pSVar5,typeName.genericMethod,MethodInfo_String_get_Item);
        iVar23 = *(int *)(TypeInfo_CustomLogicBuiltinTypes + 0xe4);
      } while( true );
    }
    *(Il2CppObject **)extraout_RDX.genericMethod = pIStack_60;
    pSStack_88 = (System_String_o *)0x425ac25;
    il2cpp_runtime_helper_022b4080(extraout_RDX.genericMethod);
    goto label_0425ae01;
  }
label_0425ae14:
  pSStack_88 = (System_String_o *)0x425ae19;
  uStack_98 = il2cpp_runtime_helper_022b2c90();
  collection = item;
  _Stack_90 = typeName;
  pSStack_88 = (System_String_o *)message;
  if (g_data_057adbca == '\0') {
    _Stack_a0 = (_union_249689)0x425ae3f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    g_data_057adbca = '\x01';
  }
  lVar18 = MethodInfo_Void_Add;
  __this_10 = (Il2CppRGCTXData *)(__this_09->fields)._buckets;
  if (__this_10 != (Il2CppRGCTXData *)0x0) {
    *(int *)((long)__this_10 + 0x1c) = *(int *)((long)__this_10 + 0x1c) + 1;
    pMVar22 = __this_10[2].method;
    if (pMVar22 != (MethodInfo *)0x0) {
      uVar3 = *(uint *)(__this_10 + 3);
      if (uVar3 < *(uint *)&pMVar22->name) {
        *(uint *)(__this_10 + 3) = uVar3 + 1;
        ((_union_249689 *)(&pMVar22->klass + (int)uVar3))->genericMethod = (void *)item;
        pIVar13 = (Il2CppObject *)il2cpp_runtime_helper_022b4080(&pMVar22->klass + (int)uVar3,item.genericMethod);
        return pIVar13;
      }
      System_Collections_Generic_List_object___AddWithResize
                ((System_Collections_Generic_List_object__o *)__this_10,item.genericMethod,
                 *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar18 + 0x20) + 0xc0) + 0x70));
      return extraout_RAX;
    }
  }
  _Stack_a0 = (_union_249689)0x425aeb4;
  uStack_b0 = il2cpp_runtime_helper_022b2c90();
  pSStack_a8 = __this_09;
  _Stack_a0 = item;
  if (g_data_057adbcb == '\0') {
    pSStack_b8 = (System_Exception_o *)0x425aedf;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_AddRange);
    g_data_057adbcb = '\x01';
  }
  pMVar22 = __this_10[2].method;
  if (pMVar22 != (MethodInfo *)0x0) {
    System_Collections_Generic_List_object___AddRange
              ((System_Collections_Generic_List_object__o *)pMVar22,collection.genericMethod,MethodInfo_Void_AddRange);
    return extraout_RAX_00;
  }
  pSStack_b8 = (System_Exception_o *)0x425af0d;
  il2cpp_runtime_helper_022b2c90();
  pIStack_e0 = __this_10;
  _Stack_d8 = __this_06;
  p_Stack_d0 = unaff_R13;
  _Stack_c8 = collection;
  pSStack_c0 = (System_String_o *)str3;
  pSStack_b8 = (System_Exception_o *)plVar21;
  if (g_data_057adbcc == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_IOrderedEnumerable_1_CustomLogic_CustomLogicSourceFile_O);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_CustomLogic_CustomLogicSourceFile_ToList_CustomLo);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicSourceFile_get_Current);
    il2cpp_runtime_helper_023445d0(&TypeInfo_FileRange);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicSourceFile_int);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_CustomLogic_CustomLogicSourceFile_Ge);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_Compile_b__6_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    il2cpp_runtime_helper_023445d0(&"\n");
    g_data_057adbcc = '\x01';
  }
  pSVar27 = (System_Collections_Generic_List_Enumerator_T__c *)0x0;
  pSStack_108 = (System_Collections_Generic_List_TSource__o *)0x0;
  pSVar16 = ((System_Collections_Generic_List_object__Fields *)&pMVar22->invoker_method)->_items;
  if (*(int *)(TypeInfo_c + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    keySelector = *(System_Func_TSource__TKey__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
  }
  else {
    keySelector = *(System_Func_TSource__TKey__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
  }
  if (keySelector == (System_Func_TSource__TKey__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    __this_06 = **(_union_249689 **)(TypeInfo_c + 0xb8);
    keySelector = (System_Func_TSource__TKey__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicSourceFile_int);
    System_Func_object__int____ctor();
    lVar18 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_TSource__TKey__o **)(lVar18 + 8) = keySelector;
    il2cpp_runtime_helper_022b4080(lVar18 + 8,keySelector);
  }
  source = System_Linq_Enumerable__OrderBy_object__int_
                     ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar16,keySelector,MethodInfo_IOrderedEnumerable_1_CustomLogic_CustomLogicSourceFile_O);
  __this_08 = System_Linq_Enumerable__ToList_object_
                        ((System_Collections_Generic_IEnumerable_TSource__o *)source,MethodInfo_List_1_CustomLogic_CustomLogicSourceFile_ToList_CustomLo);
  pcVar6 = pMVar22->name;
  if (pcVar6 != (char *)0x0) {
    *(int *)(pcVar6 + 0x1c) = *(int *)(pcVar6 + 0x1c) + 1;
    iVar23 = *(int *)(pcVar6 + 0x18);
    pcVar6[0x18] = '\0';
    pcVar6[0x19] = '\0';
    pcVar6[0x1a] = '\0';
    pcVar6[0x1b] = '\0';
    if (0 < iVar23) {
      System_Array__Clear(*(System_Array_o **)(pcVar6 + 0x10),0,iVar23,(MethodInfo *)0x0);
    }
    __this_06.genericMethod = (void *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
    System_Collections_Generic_List_object____ctor(__this_06.genericMethod,MethodInfo_List_1_System_String);
    if (__this_08 != (System_Collections_Generic_List_TSource__o *)0x0) {
      System_Collections_Generic_List_object___GetEnumerator
                (&SStack_f8,(System_Collections_Generic_List_object__o *)__this_08,MethodInfo_List_1_T_Enumerator_CustomLogic_CustomLogicSourceFile_Ge);
      pSStack_108 = (System_Collections_Generic_List_TSource__o *)SStack_f8.fields._current;
      if (__this_06.genericMethod == (MethodInfo *)0x0) {
        __this_01.fields._8_8_ = pMVar22;
        __this_01.fields._list = (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffed8;
        __this_01.fields._current = (Il2CppObject *)SStack_f8.fields._list;
        bVar9 = System_Collections_Generic_List_Enumerator_object___MoveNext
                          (__this_01,(MethodInfo_321A1D0 *)&stack0xfffffffffffffee8);
        pSVar27 = (System_Collections_Generic_List_Enumerator_T__c *)SStack_f8.fields._list;
        if ((char)bVar9 != '\0') goto label_0425b3ae;
      }
      else {
        iVar23 = 0;
        pSVar27 = (System_Collections_Generic_List_Enumerator_T__c *)SStack_f8.fields._list;
        while (__this_00.fields._8_8_ = pMVar22,
              __this_00.fields._list = (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffed8,
              __this_00.fields._current = (Il2CppObject *)pSVar27,
              bVar9 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                (__this_00,(MethodInfo_321A1D0 *)&stack0xfffffffffffffee8),
              (char)bVar9 != '\0') {
          if ((System_Collections_Generic_List_TSource__o *)SStack_f8.fields._current ==
              (System_Collections_Generic_List_TSource__o *)0x0) goto label_0425b3b8;
          pSVar10 = *(System_String_o **)
                     &((System_Collections_Generic_List_TSource__Fields *)
                      ((long)SStack_f8.fields._current + 0x10))->_size;
          pSVar11 = (System_String_o *)0x0;
          if (pSVar10 == (System_String_o *)0x0) goto label_0425b3c6;
          pSVar14 = System_String__Split(pSVar10,10,0,(MethodInfo *)0x0);
          if (pSVar14 == (System_String_array *)0x0) goto label_0425b3de;
          iVar20 = (int)pSVar14->max_length;
          __this_08 = (System_Collections_Generic_List_TSource__o *)il2cpp_runtime_helper_023052d0(TypeInfo_FileRange);
          System_Object___ctor((Il2CppObject *)__this_08,(MethodInfo *)0x0);
          if (__this_08 == (System_Collections_Generic_List_TSource__o *)0x0) goto label_0425b407;
          (__this_08->fields)._items =
               ((System_Collections_Generic_List_TSource__Fields *)((long)SStack_f8.fields._current + 0x10))->
               _items;
          il2cpp_runtime_helper_022b4080(&__this_08->fields);
          (__this_08->fields)._size =
               *(int32_t *)
                &((System_Collections_Generic_List_TSource__Fields *)((long)SStack_f8.fields._current + 0x10))
                 ->_syncRoot;
          (__this_08->fields)._version = iVar23;
          uVar3 = iVar23 + -1 + iVar20;
          pSVar16 = (System_Object_array *)(ulong)uVar3;
          *(uint *)&(__this_08->fields)._syncRoot = uVar3;
          *(int *)((long)&(__this_08->fields)._syncRoot + 4) = iVar20;
          *(undefined4 *)&__this_08[1].klass =
               *(undefined4 *)
                ((long)&((System_Collections_Generic_List_TSource__o *)
                        ((long)SStack_f8.fields._current + 0x28))->klass + 4);
          lVar18 = MethodInfo_Void_Add;
          __this_11 = (System_Collections_Generic_List_object__o *)pMVar22->name;
          if (__this_11 == (System_Collections_Generic_List_object__o *)0x0) goto label_0425b450;
          piVar1 = &(__this_11->fields)._version;
          *piVar1 = *piVar1 + 1;
          pSVar17 = (__this_11->fields)._items;
          if (pSVar17 == (System_Object_array *)0x0) goto label_0425b46c;
          uVar4 = (__this_11->fields)._size;
          if (uVar4 < (uint)pSVar17->max_length) {
            (__this_11->fields)._size = uVar4 + 1;
            pSVar17->m_Items[(int)uVar4] = (Il2CppObject *)__this_08;
            il2cpp_runtime_helper_022b4080(pSVar17->m_Items + (int)uVar4,__this_08);
          }
          else {
            System_Collections_Generic_List_object___AddWithResize
                      (__this_11,(Il2CppObject *)__this_08,
                       *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar18 + 0x20) + 0xc0) + 0x70));
          }
          *(int *)((long)&((System_Collections_Generic_List_TSource__Fields *)
                          ((long)SStack_f8.fields._current + 0x10))->_syncRoot + 4) = iVar23;
          *(uint *)&((System_Collections_Generic_List_TSource__o *)((long)SStack_f8.fields._current + 0x28))->
                    klass = uVar3;
          lVar18 = MethodInfo_Void_Add;
          pIVar13 = *(Il2CppObject **)
                     &((System_Collections_Generic_List_TSource__Fields *)
                      ((long)SStack_f8.fields._current + 0x10))->_size;
          *(int *)((long)__this_06.genericMethod + 0x1c) = *(int *)((long)__this_06.genericMethod + 0x1c) + 1;
          pIVar7 = *(InvokerMethod *)((long)__this_06.genericMethod + 0x10);
          if (pIVar7 == (InvokerMethod)0x0) {
            il2cpp_runtime_helper_022b2c90();
            goto label_0425b3a9;
          }
          iVar23 = iVar23 + iVar20;
          uVar3 = *(uint *)((long)__this_06.genericMethod + 0x18);
          if (uVar3 < *(uint *)(pIVar7 + 0x18)) {
            *(uint *)((long)__this_06.genericMethod + 0x18) = uVar3 + 1;
            *(Il2CppObject **)(pIVar7 + (long)(int)uVar3 * 8 + 0x20) = pIVar13;
            il2cpp_runtime_helper_022b4080(pIVar7 + (long)(int)uVar3 * 8 + 0x20);
          }
          else {
            System_Collections_Generic_List_object___AddWithResize
                      (__this_06.genericMethod,pIVar13,
                       *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar18 + 0x20) + 0xc0) + 0x70));
          }
        }
      }
      __this_02.fields._8_8_ = pMVar22;
      __this_02.fields._list = (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffed8;
      __this_02.fields._current = (Il2CppObject *)pSVar27;
      System_Collections_Generic_List_Enumerator_object___Dispose
                (__this_02,(MethodInfo_321A1C0 *)&stack0xfffffffffffffee8);
      pMVar26 = pMVar22;
      goto label_0425b33e;
    }
  }
label_0425b3a9:
  do {
    il2cpp_runtime_helper_022b2c90();
label_0425b3ae:
    __this_08 = pSStack_108;
    if (pSStack_108 == (System_Collections_Generic_List_TSource__o *)0x0) {
label_0425b3b8:
      il2cpp_runtime_helper_022b2c90();
    }
    pSVar11 = *(System_String_o **)&(__this_08->fields)._size;
    if (pSVar11 == (System_String_o *)0x0) {
label_0425b3c6:
      il2cpp_runtime_helper_022b2c90();
    }
    pSVar14 = System_String__Split(pSVar11,10,0,(MethodInfo *)0x0);
    if (pSVar14 == (System_String_array *)0x0) {
label_0425b3de:
      pSVar14 = (System_String_array *)il2cpp_runtime_helper_022b2c90();
    }
    iVar20 = (int)pSVar14->max_length;
    pSVar16 = (System_Object_array *)il2cpp_runtime_helper_023052d0(TypeInfo_FileRange);
    System_Object___ctor((Il2CppObject *)pSVar16,(MethodInfo *)0x0);
    if (pSVar16 == (System_Object_array *)0x0) {
label_0425b407:
      il2cpp_runtime_helper_022b2c90();
    }
    pSVar16->bounds = (Il2CppArrayBounds *)(__this_08->fields)._items;
    il2cpp_runtime_helper_022b4080(&pSVar16->bounds);
    *(undefined4 *)&pSVar16->max_length = *(undefined4 *)&(__this_08->fields)._syncRoot;
    *(undefined4 *)((long)&pSVar16->max_length + 4) = 0;
    SStack_f8.fields._current = (Il2CppObject *)(ulong)(iVar20 - 1U);
    *(uint *)pSVar16->m_Items = iVar20 - 1U;
    *(int *)((long)pSVar16->m_Items + 4) = iVar20;
    *(undefined4 *)(pSVar16->m_Items + 1) = *(undefined4 *)((long)&__this_08[1].klass + 4);
    __this_11 = (System_Collections_Generic_List_object__o *)pMVar22->name;
    if (__this_11 == (System_Collections_Generic_List_object__o *)0x0) {
label_0425b450:
      il2cpp_runtime_helper_022b2c90();
    }
    lVar18 = MethodInfo_Void_Add;
    uVar24 = SUB84(SStack_f8.fields._current,0);
    piVar1 = &(__this_11->fields)._version;
    *piVar1 = *piVar1 + 1;
    pSVar17 = (__this_11->fields)._items;
    if (pSVar17 == (System_Object_array *)0x0) {
label_0425b46c:
      uVar24 = SUB84(SStack_f8.fields._current,0);
      pSVar17 = (System_Object_array *)il2cpp_runtime_helper_022b2c90();
    }
    uVar3 = (__this_11->fields)._size;
    if (uVar3 < (uint)pSVar17->max_length) {
      (__this_11->fields)._size = uVar3 + 1;
      pSVar17->m_Items[(int)uVar3] = &pSVar16->obj;
      il2cpp_runtime_helper_022b4080(pSVar17->m_Items + (int)uVar3,pSVar16);
    }
    else {
      System_Collections_Generic_List_object___AddWithResize
                (__this_11,&pSVar16->obj,
                 *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar18 + 0x20) + 0xc0) + 0x70));
    }
    *(undefined4 *)((long)&(__this_08->fields)._syncRoot + 4) = 0;
    *(undefined4 *)&__this_08[1].klass = uVar24;
    auVar25 = il2cpp_runtime_helper_022b2c90();
    if (auVar25._8_4_ != 1) {
label_0425b5b9:
      __this_04.fields._8_8_ = pMVar22;
      __this_04.fields._list = (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffed8;
      __this_04.fields._current = (Il2CppObject *)pSVar27;
      System_Collections_Generic_List_Enumerator_object___Dispose
                (__this_04,(MethodInfo_321A1C0 *)&stack0xfffffffffffffee8);
      _Unwind_Resume(auVar25._0_8_);
    }
    plVar21 = (long *)__cxa_begin_catch(auVar25._0_8_);
    lVar18 = *plVar21;
    __cxa_end_catch();
    __this_03.fields._8_8_ = pMVar22;
    __this_03.fields._list = (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffed8;
    __this_03.fields._current = (Il2CppObject *)pSVar27;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_03,(MethodInfo_321A1C0 *)&stack0xfffffffffffffee8);
    pMVar26 = pMVar22;
    if (lVar18 != 0) {
      il2cpp_runtime_helper_022fefe0(lVar18);
      goto label_0425b5b9;
    }
label_0425b33e:
    pIVar15 = (Il2CppClass *)
              System_String__Join_3af7e00("\n",__this_06.genericMethod,(MethodInfo *)0x0);
    pMVar26->klass = pIVar15;
    pMVar22 = pMVar26;
    il2cpp_runtime_helper_022b4080(&pMVar26->klass);
    pSVar16 = ((System_Collections_Generic_List_object__Fields *)&pMVar26->invoker_method)->_items;
    if (pSVar16 != (System_Object_array *)0x0) {
      piVar2 = (int *)((long)&pSVar16->max_length + 4);
      *piVar2 = *piVar2 + 1;
      length = (int32_t)pSVar16->max_length;
      *(undefined4 *)&pSVar16->max_length = 0;
      if (0 < length) {
        System_Array__Clear((System_Array_o *)pSVar16->bounds,0,length,(MethodInfo *)0x0);
      }
      return (Il2CppObject *)pMVar26->klass;
    }
  } while( true );
code_r0x0425ace4:
  pSStack_88 = (System_String_o *)0x425acf4;
  bVar9 = CustomLogic_CLBindingCache__GetOrCreateBinding
                    (typeName.genericMethod,__this_06.genericMethod,&unaff_R13->genericMethod,
                     (MethodInfo *)0x0);
  if ((char)bVar9 != '\0') goto label_0425adca;
  goto label_0425ac70;
label_0425adca:
  *(_union_249689 *)_Stack_68.genericMethod = _Stack_78;
  pSStack_88 = (System_String_o *)0x425addc;
  item = _Stack_78;
  il2cpp_runtime_helper_022b4080();
  pSVar5 = (System_Collections_Generic_Dictionary_object__object__o *)(pSStack_70->fields)._message;
  __this_09 = (System_Collections_Generic_Dictionary_object__object__o *)0x0;
  if (pSVar5 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    pSStack_88 = (System_String_o *)0x425ae01;
    System_Collections_Generic_Dictionary_object__object___set_Item
              (pSVar5,__this_06.genericMethod,_Stack_78.genericMethod,MethodInfo_Void_set_Item);
label_0425ae01:
    uVar19 = CONCAT71(typeName._1_7_,1);
label_0425ae03:
    return (Il2CppObject *)(uVar19 & 0xffffffff);
  }
  goto label_0425ae14;
}


// CustomLogic.CustomLogicClassInstance$$TryGetVariable
// il2cpp: bool CustomLogic_CustomLogicClassInstance__TryGetVariable (CustomLogic_CustomLogicClassInstance_o* __this, System_String_o* name, Il2CppObject** variable, const MethodInfo* method);
// 0x425ab60

bool_conflict
CustomLogic_CustomLogicClassInstance__TryGetVariable
          (CustomLogic_CustomLogicClassInstance_o *__this,System_String_o *name,Il2CppObject **variable,
          MethodInfo *method)

{
  int32_t *piVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  int32_t length;
  System_Collections_Generic_Dictionary_object__object__o *pSVar5;
  char *pcVar6;
  System_String_o *__this_00;
  Il2CppObject *item;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  System_Collections_Generic_List_Enumerator_object__o __this_05;
  char cVar7;
  bool_conflict bVar8;
  bool_conflict extraout_EAX;
  bool_conflict extraout_EAX_00;
  System_Collections_Generic_HashSet_object__o *__this_06;
  System_Func_TSource__TKey__o *keySelector;
  System_Linq_IOrderedEnumerable_TSource__o *source;
  System_Collections_Generic_List_TSource__o *__this_07;
  System_String_array *pSVar9;
  Il2CppClass *pIVar10;
  System_Object_array *pSVar11;
  System_Object_array *pSVar12;
  long *plVar13;
  long lVar14;
  int iVar15;
  Il2CppClass *collection;
  System_Collections_Generic_Dictionary_object__object__o *__this_08;
  Il2CppRGCTXData *__this_09;
  MethodInfo *pMVar16;
  System_String_o *__this_10;
  System_Collections_Generic_List_object__o *__this_11;
  int iVar17;
  Il2CppClass **unaff_R13;
  undefined4 uVar18;
  MethodInfo_3104D80 **unaff_R14;
  MethodInfo_33E0DF0 **unaff_R15;
  undefined1 auVar19 [12];
  undefined8 in_stack_ffffffffffffff00;
  MethodInfo *pMVar20;
  System_Collections_Generic_List_Enumerator_T__c *pSVar21;
  System_Collections_Generic_List_TSource__o *pSStack_e0;
  System_Collections_Generic_List_Enumerator_T__o SStack_d0;
  Il2CppRGCTXData *pIStack_b8;
  _union_249689 _Stack_b0;
  Il2CppClass **ppIStack_a8;
  Il2CppClass *pIStack_a0;
  MethodInfo_33E0DF0 **ppMStack_98;
  CustomLogic_CustomLogicClassInstance_o *pCStack_90;
  undefined8 uStack_88;
  System_Collections_Generic_Dictionary_object__object__o *pSStack_80;
  Il2CppClass *pIStack_78;
  undefined8 uStack_70;
  Il2CppClass *pIStack_68;
  MethodInfo_3104D80 **ppMStack_60;
  Il2CppClass *local_50;
  CustomLogic_CustomLogicClassInstance_o *local_48;
  Il2CppObject **local_40;
  Il2CppObject *local_38;
  
  pIVar10 = (Il2CppClass *)name;
  if (g_data_057adbc7 == '\0') {
    ppMStack_60 = (MethodInfo_3104D80 **)0x425ab8c;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicBuiltinTypes);
    ppMStack_60 = (MethodInfo_3104D80 **)0x425ab98;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    ppMStack_60 = (MethodInfo_3104D80 **)0x425aba4;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_TryGetValue);
    ppMStack_60 = (MethodInfo_3104D80 **)0x425abb0;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Item);
    ppMStack_60 = (MethodInfo_3104D80 **)0x425abbc;
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_System_String_get_Item);
    ppMStack_60 = (MethodInfo_3104D80 **)0x425abc8;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    ppMStack_60 = (MethodInfo_3104D80 **)0x425abd4;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Contains);
    g_data_057adbc7 = '\x01';
  }
  local_38 = (Il2CppObject *)0x0;
  local_50 = (Il2CppClass *)0x0;
  pSVar5 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).Variables;
  __this_08 = (System_Collections_Generic_Dictionary_object__object__o *)0x0;
  if (pSVar5 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    ppMStack_60 = (MethodInfo_3104D80 **)0x425ac11;
    bVar8 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                      (pSVar5,(Il2CppObject *)name,&local_38,MethodInfo_Boolean_TryGetValue);
    if ((char)bVar8 == '\0') {
      ppMStack_60 = (MethodInfo_3104D80 **)0x425ac48;
      local_48 = __this;
      local_40 = variable;
      variable = (Il2CppObject **)(*(__this->klass->vtable)._4_unknown.methodPtr)(__this);
      unaff_R14 = &MethodInfo_HashSet_1_System_String_get_Item;
      unaff_R15 = &MethodInfo_Boolean_Contains;
      unaff_R13 = &local_50;
label_0425ac70:
      iVar17 = *(int *)(TypeInfo_CustomLogicBuiltinTypes + 0xe4);
      do {
        if (iVar17 == 0) {
          ppMStack_60 = (MethodInfo_3104D80 **)0x425ac82;
          il2cpp_runtime_helper_02337ed0();
        }
        pIVar10 = (Il2CppClass *)0x0;
        ppMStack_60 = (MethodInfo_3104D80 **)0x425ac8c;
        bVar8 = CustomLogic_CustomLogicBuiltinTypes__IsBuiltinType
                          ((System_String_o *)variable,(MethodInfo *)0x0);
        if ((char)bVar8 == '\0') {
label_0425adb3:
          *local_40 = (Il2CppObject *)0x0;
          ppMStack_60 = (MethodInfo_3104D80 **)0x425adc8;
          il2cpp_runtime_helper_022b4080(local_40,0);
          return 0;
        }
        if (*(int *)(TypeInfo_CustomLogicBuiltinTypes + 0xe4) == 0) {
          ppMStack_60 = (MethodInfo_3104D80 **)0x425aca6;
          il2cpp_runtime_helper_02337ed0();
        }
        __this_08 = *(System_Collections_Generic_Dictionary_object__object__o **)
                     (*(long *)(TypeInfo_CustomLogicBuiltinTypes + 0xb8) + 0x18);
        __this = (CustomLogic_CustomLogicClassInstance_o *)&TypeInfo_CustomLogicBuiltinTypes;
        if (__this_08 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_0425ae14;
        ppMStack_60 = (MethodInfo_3104D80 **)0x425acc9;
        pIVar10 = (Il2CppClass *)variable;
        __this_06 = (System_Collections_Generic_HashSet_object__o *)
                    System_Collections_Generic_Dictionary_object__object___get_Item
                              (__this_08,(Il2CppObject *)variable,MethodInfo_HashSet_1_System_String_get_Item);
        if (__this_06 == (System_Collections_Generic_HashSet_object__o *)0x0) goto label_0425ae14;
        ppMStack_60 = (MethodInfo_3104D80 **)0x425ace0;
        bVar8 = System_Collections_Generic_HashSet_object___Contains
                          (__this_06,(Il2CppObject *)name,MethodInfo_Boolean_Contains);
        if ((char)bVar8 != '\0') goto code_r0x0425ace4;
        pIVar10 = (Il2CppClass *)(local_48->klass->vtable)._5_get_LookupBaseClassForVariables.method;
        ppMStack_60 = (MethodInfo_3104D80 **)0x425ad16;
        cVar7 = (*(local_48->klass->vtable)._5_get_LookupBaseClassForVariables.methodPtr)();
        if (cVar7 == '\0') goto label_0425adb3;
        if (*(int *)(TypeInfo_CustomLogicBuiltinTypes + 0xe4) == 0) {
          ppMStack_60 = (MethodInfo_3104D80 **)0x425ad30;
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar5 = *(System_Collections_Generic_Dictionary_object__object__o **)
                  (*(long *)(TypeInfo_CustomLogicBuiltinTypes + 0xb8) + 0x10);
        __this_08 = (System_Collections_Generic_Dictionary_object__object__o *)0x0;
        if (pSVar5 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_0425ae14;
        ppMStack_60 = (MethodInfo_3104D80 **)0x425ad5a;
        pIVar10 = (Il2CppClass *)variable;
        bVar8 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                          (pSVar5,(Il2CppObject *)variable,MethodInfo_Boolean_ContainsKey);
        if ((char)bVar8 == '\0') goto label_0425adb3;
        if (*(int *)(TypeInfo_CustomLogicBuiltinTypes + 0xe4) == 0) {
          ppMStack_60 = (MethodInfo_3104D80 **)0x425ad70;
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar5 = *(System_Collections_Generic_Dictionary_object__object__o **)
                  (*(long *)(TypeInfo_CustomLogicBuiltinTypes + 0xb8) + 0x10);
        __this_08 = (System_Collections_Generic_Dictionary_object__object__o *)0x0;
        if (pSVar5 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_0425ae14;
        ppMStack_60 = (MethodInfo_3104D80 **)0x425ad9a;
        variable = (Il2CppObject **)
                   System_Collections_Generic_Dictionary_object__object___get_Item
                             (pSVar5,(Il2CppObject *)variable,MethodInfo_String_get_Item);
        iVar17 = *(int *)(TypeInfo_CustomLogicBuiltinTypes + 0xe4);
      } while( true );
    }
    *variable = local_38;
    ppMStack_60 = (MethodInfo_3104D80 **)0x425ac25;
    il2cpp_runtime_helper_022b4080(variable);
    goto label_0425ae01;
  }
label_0425ae14:
  ppMStack_60 = (MethodInfo_3104D80 **)0x425ae19;
  uStack_70 = il2cpp_runtime_helper_022b2c90();
  collection = pIVar10;
  pIStack_68 = (Il2CppClass *)variable;
  ppMStack_60 = unaff_R14;
  if (g_data_057adbca == '\0') {
    pIStack_78 = (Il2CppClass *)0x425ae3f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    g_data_057adbca = '\x01';
  }
  lVar14 = MethodInfo_Void_Add;
  __this_09 = (Il2CppRGCTXData *)(__this_08->fields)._buckets;
  if (__this_09 != (Il2CppRGCTXData *)0x0) {
    *(int *)((long)__this_09 + 0x1c) = *(int *)((long)__this_09 + 0x1c) + 1;
    pMVar16 = __this_09[2].method;
    if (pMVar16 != (MethodInfo *)0x0) {
      uVar3 = *(uint *)(__this_09 + 3);
      if (*(uint *)&pMVar16->name <= uVar3) {
        System_Collections_Generic_List_object___AddWithResize
                  ((System_Collections_Generic_List_object__o *)__this_09,(Il2CppObject *)pIVar10,
                   *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
        return extraout_EAX;
      }
      *(uint *)(__this_09 + 3) = uVar3 + 1;
      (&pMVar16->klass)[(int)uVar3] = pIVar10;
      bVar8 = il2cpp_runtime_helper_022b4080(&pMVar16->klass + (int)uVar3,pIVar10);
      return bVar8;
    }
  }
  pIStack_78 = (Il2CppClass *)0x425aeb4;
  uStack_88 = il2cpp_runtime_helper_022b2c90();
  pSStack_80 = __this_08;
  pIStack_78 = pIVar10;
  if (g_data_057adbcb == '\0') {
    pCStack_90 = (CustomLogic_CustomLogicClassInstance_o *)0x425aedf;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_AddRange);
    g_data_057adbcb = '\x01';
  }
  pMVar16 = __this_09[2].method;
  if (pMVar16 != (MethodInfo *)0x0) {
    System_Collections_Generic_List_object___AddRange
              ((System_Collections_Generic_List_object__o *)pMVar16,
               (System_Collections_Generic_IEnumerable_T__o *)collection,MethodInfo_Void_AddRange);
    return extraout_EAX_00;
  }
  pCStack_90 = (CustomLogic_CustomLogicClassInstance_o *)0x425af0d;
  il2cpp_runtime_helper_022b2c90();
  pIStack_b8 = __this_09;
  _Stack_b0 = (_union_249689)name;
  ppIStack_a8 = unaff_R13;
  pIStack_a0 = collection;
  ppMStack_98 = unaff_R15;
  pCStack_90 = __this;
  if (g_data_057adbcc == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_IOrderedEnumerable_1_CustomLogic_CustomLogicSourceFile_O);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_CustomLogic_CustomLogicSourceFile_ToList_CustomLo);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicSourceFile_get_Current);
    il2cpp_runtime_helper_023445d0(&TypeInfo_FileRange);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicSourceFile_int);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_CustomLogic_CustomLogicSourceFile_Ge);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_Compile_b__6_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    il2cpp_runtime_helper_023445d0(&"\n");
    g_data_057adbcc = '\x01';
  }
  pSVar21 = (System_Collections_Generic_List_Enumerator_T__c *)0x0;
  pSStack_e0 = (System_Collections_Generic_List_TSource__o *)0x0;
  pSVar11 = ((System_Collections_Generic_List_object__Fields *)&pMVar16->invoker_method)->_items;
  if (*(int *)(TypeInfo_c + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    keySelector = *(System_Func_TSource__TKey__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
  }
  else {
    keySelector = *(System_Func_TSource__TKey__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
  }
  if (keySelector == (System_Func_TSource__TKey__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    name = (System_String_o *)**(undefined8 **)(TypeInfo_c + 0xb8);
    keySelector = (System_Func_TSource__TKey__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicSourceFile_int);
    System_Func_object__int____ctor();
    lVar14 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_TSource__TKey__o **)(lVar14 + 8) = keySelector;
    il2cpp_runtime_helper_022b4080(lVar14 + 8,keySelector);
  }
  source = System_Linq_Enumerable__OrderBy_object__int_
                     ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar11,keySelector,MethodInfo_IOrderedEnumerable_1_CustomLogic_CustomLogicSourceFile_O);
  __this_07 = System_Linq_Enumerable__ToList_object_
                        ((System_Collections_Generic_IEnumerable_TSource__o *)source,MethodInfo_List_1_CustomLogic_CustomLogicSourceFile_ToList_CustomLo);
  pcVar6 = pMVar16->name;
  if (pcVar6 != (char *)0x0) {
    *(int *)(pcVar6 + 0x1c) = *(int *)(pcVar6 + 0x1c) + 1;
    iVar17 = *(int *)(pcVar6 + 0x18);
    pcVar6[0x18] = '\0';
    pcVar6[0x19] = '\0';
    pcVar6[0x1a] = '\0';
    pcVar6[0x1b] = '\0';
    if (0 < iVar17) {
      System_Array__Clear(*(System_Array_o **)(pcVar6 + 0x10),0,iVar17,(MethodInfo *)0x0);
    }
    name = (System_String_o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
    System_Collections_Generic_List_object____ctor
              ((System_Collections_Generic_List_object__o *)name,MethodInfo_List_1_System_String);
    if (__this_07 != (System_Collections_Generic_List_TSource__o *)0x0) {
      System_Collections_Generic_List_object___GetEnumerator
                (&SStack_d0,(System_Collections_Generic_List_object__o *)__this_07,MethodInfo_List_1_T_Enumerator_CustomLogic_CustomLogicSourceFile_Ge);
      pSStack_e0 = (System_Collections_Generic_List_TSource__o *)SStack_d0.fields._current;
      if ((System_Collections_Generic_List_object__o *)name ==
          (System_Collections_Generic_List_object__o *)0x0) {
        __this_02.fields._8_8_ = pMVar16;
        __this_02.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff00;
        __this_02.fields._current = (Il2CppObject *)SStack_d0.fields._list;
        bVar8 = System_Collections_Generic_List_Enumerator_object___MoveNext
                          (__this_02,(MethodInfo_321A1D0 *)&stack0xffffffffffffff10);
        pSVar21 = (System_Collections_Generic_List_Enumerator_T__c *)SStack_d0.fields._list;
        if ((char)bVar8 != '\0') goto label_0425b3ae;
      }
      else {
        iVar17 = 0;
        pSVar21 = (System_Collections_Generic_List_Enumerator_T__c *)SStack_d0.fields._list;
        while (__this_01.fields._8_8_ = pMVar16,
              __this_01.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff00,
              __this_01.fields._current = (Il2CppObject *)pSVar21,
              bVar8 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                (__this_01,(MethodInfo_321A1D0 *)&stack0xffffffffffffff10),
              (char)bVar8 != '\0') {
          if ((System_Collections_Generic_List_TSource__o *)SStack_d0.fields._current ==
              (System_Collections_Generic_List_TSource__o *)0x0) goto label_0425b3b8;
          __this_00 = *(System_String_o **)
                       &((System_Collections_Generic_List_TSource__Fields *)
                        ((long)SStack_d0.fields._current + 0x10))->_size;
          __this_10 = (System_String_o *)0x0;
          if (__this_00 == (System_String_o *)0x0) goto label_0425b3c6;
          pSVar9 = System_String__Split(__this_00,10,0,(MethodInfo *)0x0);
          if (pSVar9 == (System_String_array *)0x0) goto label_0425b3de;
          iVar15 = (int)pSVar9->max_length;
          __this_07 = (System_Collections_Generic_List_TSource__o *)il2cpp_runtime_helper_023052d0(TypeInfo_FileRange);
          System_Object___ctor((Il2CppObject *)__this_07,(MethodInfo *)0x0);
          if (__this_07 == (System_Collections_Generic_List_TSource__o *)0x0) goto label_0425b407;
          (__this_07->fields)._items =
               ((System_Collections_Generic_List_TSource__Fields *)((long)SStack_d0.fields._current + 0x10))->
               _items;
          il2cpp_runtime_helper_022b4080(&__this_07->fields);
          (__this_07->fields)._size =
               *(int32_t *)
                &((System_Collections_Generic_List_TSource__Fields *)((long)SStack_d0.fields._current + 0x10))
                 ->_syncRoot;
          (__this_07->fields)._version = iVar17;
          uVar3 = iVar17 + -1 + iVar15;
          pSVar11 = (System_Object_array *)(ulong)uVar3;
          *(uint *)&(__this_07->fields)._syncRoot = uVar3;
          *(int *)((long)&(__this_07->fields)._syncRoot + 4) = iVar15;
          *(undefined4 *)&__this_07[1].klass =
               *(undefined4 *)
                ((long)&((System_Collections_Generic_List_TSource__o *)
                        ((long)SStack_d0.fields._current + 0x28))->klass + 4);
          lVar14 = MethodInfo_Void_Add;
          __this_11 = (System_Collections_Generic_List_object__o *)pMVar16->name;
          if (__this_11 == (System_Collections_Generic_List_object__o *)0x0) goto label_0425b450;
          piVar1 = &(__this_11->fields)._version;
          *piVar1 = *piVar1 + 1;
          pSVar12 = (__this_11->fields)._items;
          if (pSVar12 == (System_Object_array *)0x0) goto label_0425b46c;
          uVar4 = (__this_11->fields)._size;
          if (uVar4 < (uint)pSVar12->max_length) {
            (__this_11->fields)._size = uVar4 + 1;
            pSVar12->m_Items[(int)uVar4] = (Il2CppObject *)__this_07;
            il2cpp_runtime_helper_022b4080(pSVar12->m_Items + (int)uVar4,__this_07);
          }
          else {
            System_Collections_Generic_List_object___AddWithResize
                      (__this_11,(Il2CppObject *)__this_07,
                       *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
          }
          *(int *)((long)&((System_Collections_Generic_List_TSource__Fields *)
                          ((long)SStack_d0.fields._current + 0x10))->_syncRoot + 4) = iVar17;
          *(uint *)&((System_Collections_Generic_List_TSource__o *)((long)SStack_d0.fields._current + 0x28))->
                    klass = uVar3;
          lVar14 = MethodInfo_Void_Add;
          item = *(Il2CppObject **)
                  &((System_Collections_Generic_List_TSource__Fields *)
                   ((long)SStack_d0.fields._current + 0x10))->_size;
          piVar1 = &(((System_Collections_Generic_List_object__o *)name)->fields)._version;
          *piVar1 = *piVar1 + 1;
          pSVar12 = (((System_Collections_Generic_List_object__o *)name)->fields)._items;
          if (pSVar12 == (System_Object_array *)0x0) {
            il2cpp_runtime_helper_022b2c90();
            goto label_0425b3a9;
          }
          iVar17 = iVar17 + iVar15;
          uVar3 = (((System_Collections_Generic_List_object__o *)name)->fields)._size;
          if (uVar3 < (uint)pSVar12->max_length) {
            (((System_Collections_Generic_List_object__o *)name)->fields)._size = uVar3 + 1;
            pSVar12->m_Items[(int)uVar3] = item;
            il2cpp_runtime_helper_022b4080(pSVar12->m_Items + (int)uVar3);
          }
          else {
            System_Collections_Generic_List_object___AddWithResize
                      ((System_Collections_Generic_List_object__o *)name,item,
                       *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
          }
        }
      }
      __this_03.fields._8_8_ = pMVar16;
      __this_03.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff00;
      __this_03.fields._current = (Il2CppObject *)pSVar21;
      System_Collections_Generic_List_Enumerator_object___Dispose
                (__this_03,(MethodInfo_321A1C0 *)&stack0xffffffffffffff10);
      pMVar20 = pMVar16;
      goto label_0425b33e;
    }
  }
label_0425b3a9:
  do {
    il2cpp_runtime_helper_022b2c90();
label_0425b3ae:
    __this_07 = pSStack_e0;
    if (pSStack_e0 == (System_Collections_Generic_List_TSource__o *)0x0) {
label_0425b3b8:
      il2cpp_runtime_helper_022b2c90();
    }
    __this_10 = *(System_String_o **)&(__this_07->fields)._size;
    if (__this_10 == (System_String_o *)0x0) {
label_0425b3c6:
      il2cpp_runtime_helper_022b2c90();
    }
    pSVar9 = System_String__Split(__this_10,10,0,(MethodInfo *)0x0);
    if (pSVar9 == (System_String_array *)0x0) {
label_0425b3de:
      pSVar9 = (System_String_array *)il2cpp_runtime_helper_022b2c90();
    }
    iVar15 = (int)pSVar9->max_length;
    pSVar11 = (System_Object_array *)il2cpp_runtime_helper_023052d0(TypeInfo_FileRange);
    System_Object___ctor((Il2CppObject *)pSVar11,(MethodInfo *)0x0);
    if (pSVar11 == (System_Object_array *)0x0) {
label_0425b407:
      il2cpp_runtime_helper_022b2c90();
    }
    pSVar11->bounds = (Il2CppArrayBounds *)(__this_07->fields)._items;
    il2cpp_runtime_helper_022b4080(&pSVar11->bounds);
    *(undefined4 *)&pSVar11->max_length = *(undefined4 *)&(__this_07->fields)._syncRoot;
    *(undefined4 *)((long)&pSVar11->max_length + 4) = 0;
    SStack_d0.fields._current = (Il2CppObject *)(ulong)(iVar15 - 1U);
    *(uint *)pSVar11->m_Items = iVar15 - 1U;
    *(int *)((long)pSVar11->m_Items + 4) = iVar15;
    *(undefined4 *)(pSVar11->m_Items + 1) = *(undefined4 *)((long)&__this_07[1].klass + 4);
    __this_11 = (System_Collections_Generic_List_object__o *)pMVar16->name;
    if (__this_11 == (System_Collections_Generic_List_object__o *)0x0) {
label_0425b450:
      il2cpp_runtime_helper_022b2c90();
    }
    lVar14 = MethodInfo_Void_Add;
    uVar18 = SUB84(SStack_d0.fields._current,0);
    piVar1 = &(__this_11->fields)._version;
    *piVar1 = *piVar1 + 1;
    pSVar12 = (__this_11->fields)._items;
    if (pSVar12 == (System_Object_array *)0x0) {
label_0425b46c:
      uVar18 = SUB84(SStack_d0.fields._current,0);
      pSVar12 = (System_Object_array *)il2cpp_runtime_helper_022b2c90();
    }
    uVar3 = (__this_11->fields)._size;
    if (uVar3 < (uint)pSVar12->max_length) {
      (__this_11->fields)._size = uVar3 + 1;
      pSVar12->m_Items[(int)uVar3] = &pSVar11->obj;
      il2cpp_runtime_helper_022b4080(pSVar12->m_Items + (int)uVar3,pSVar11);
    }
    else {
      System_Collections_Generic_List_object___AddWithResize
                (__this_11,&pSVar11->obj,
                 *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
    }
    *(undefined4 *)((long)&(__this_07->fields)._syncRoot + 4) = 0;
    *(undefined4 *)&__this_07[1].klass = uVar18;
    auVar19 = il2cpp_runtime_helper_022b2c90();
    if (auVar19._8_4_ != 1) {
label_0425b5b9:
      __this_05.fields._8_8_ = pMVar16;
      __this_05.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff00;
      __this_05.fields._current = (Il2CppObject *)pSVar21;
      System_Collections_Generic_List_Enumerator_object___Dispose
                (__this_05,(MethodInfo_321A1C0 *)&stack0xffffffffffffff10);
      _Unwind_Resume(auVar19._0_8_);
    }
    plVar13 = (long *)__cxa_begin_catch(auVar19._0_8_);
    lVar14 = *plVar13;
    __cxa_end_catch();
    __this_04.fields._8_8_ = pMVar16;
    __this_04.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff00;
    __this_04.fields._current = (Il2CppObject *)pSVar21;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_04,(MethodInfo_321A1C0 *)&stack0xffffffffffffff10);
    pMVar20 = pMVar16;
    if (lVar14 != 0) {
      il2cpp_runtime_helper_022fefe0(lVar14);
      goto label_0425b5b9;
    }
label_0425b33e:
    pIVar10 = (Il2CppClass *)
              System_String__Join_3af7e00
                        ("\n",(System_Collections_Generic_IEnumerable_string__o *)name,
                         (MethodInfo *)0x0);
    pMVar20->klass = pIVar10;
    pMVar16 = pMVar20;
    il2cpp_runtime_helper_022b4080(&pMVar20->klass);
    pSVar11 = ((System_Collections_Generic_List_object__Fields *)&pMVar20->invoker_method)->_items;
    if (pSVar11 != (System_Object_array *)0x0) {
      piVar2 = (int *)((long)&pSVar11->max_length + 4);
      *piVar2 = *piVar2 + 1;
      length = (int32_t)pSVar11->max_length;
      *(undefined4 *)&pSVar11->max_length = 0;
      if (0 < length) {
        System_Array__Clear((System_Array_o *)pSVar11->bounds,0,length,(MethodInfo *)0x0);
      }
      return (bool_conflict)pMVar20->klass;
    }
  } while( true );
code_r0x0425ace4:
  ppMStack_60 = (MethodInfo_3104D80 **)0x425acf4;
  bVar8 = CustomLogic_CLBindingCache__GetOrCreateBinding
                    ((System_String_o *)variable,name,(CustomLogic_ICLMemberBinding_o **)unaff_R13,
                     (MethodInfo *)0x0);
  if ((char)bVar8 != '\0') goto label_0425adca;
  goto label_0425ac70;
label_0425adca:
  *local_40 = (Il2CppObject *)local_50;
  ppMStack_60 = (MethodInfo_3104D80 **)0x425addc;
  pIVar10 = local_50;
  il2cpp_runtime_helper_022b4080();
  pSVar5 = (System_Collections_Generic_Dictionary_object__object__o *)(local_48->fields).Variables;
  __this_08 = (System_Collections_Generic_Dictionary_object__object__o *)0x0;
  if (pSVar5 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    ppMStack_60 = (MethodInfo_3104D80 **)0x425ae01;
    System_Collections_Generic_Dictionary_object__object___set_Item
              (pSVar5,(Il2CppObject *)name,(Il2CppObject *)local_50,MethodInfo_Void_set_Item);
label_0425ae01:
    return (bool_conflict)CONCAT71((int7)((ulong)variable >> 8),1);
  }
  goto label_0425ae14;
}


// CustomLogic.CustomLogicClassInstance$$HasVariable
// il2cpp: bool CustomLogic_CustomLogicClassInstance__HasVariable (CustomLogic_CustomLogicClassInstance_o* __this, System_String_o* name, const MethodInfo* method);
// 0x425a610

bool_conflict
CustomLogic_CustomLogicClassInstance__HasVariable
          (CustomLogic_CustomLogicClassInstance_o *__this,System_String_o *name,MethodInfo *method)

{
  int32_t *piVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  CustomLogic_CustomLogicEvaluator_o *pCVar5;
  char *pcVar6;
  InvokerMethod pIVar7;
  System_Collections_Generic_List_Enumerator_object__o __this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  char cVar8;
  bool_conflict bVar9;
  int32_t iVar10;
  bool_conflict extraout_EAX;
  bool_conflict extraout_EAX_00;
  System_Collections_Generic_HashSet_object__o *pSVar11;
  CustomLogic_CustomLogicClassInstance_o *__this_05;
  bool_conflict *pbVar12;
  System_Object_array *parameterValues;
  long lVar13;
  Il2CppObject *pIVar14;
  undefined1 *puVar15;
  CustomLogic_CustomLogicClassInstance_o *__this_06;
  MethodInfo_33E0DF0 **str3;
  System_String_o *pSVar16;
  System_String_o *str2;
  MethodInfo_3104D80 **message;
  undefined8 uVar17;
  System_Exception_o *__this_07;
  _union_249689 __this_08;
  _union_249689 typeName;
  System_Func_TSource__TKey__o *keySelector;
  System_Linq_IOrderedEnumerable_TSource__o *source;
  System_Collections_Generic_List_TSource__o *__this_09;
  System_String_array *pSVar18;
  Il2CppClass *pIVar19;
  System_Object_array *pSVar20;
  System_Object_array *pSVar21;
  undefined8 in_RCX;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
  MethodInfo *pMVar22;
  MethodInfo *extraout_RDX_03;
  MethodInfo *extraout_RDX_04;
  _union_249689 extraout_RDX_05;
  long *unaff_RBX;
  int iVar23;
  System_String_o *unaff_RBP;
  long *plVar24;
  System_Collections_Generic_Dictionary_object__object__o *pSVar25;
  System_String_o *pSVar26;
  _union_249689 item;
  _union_249689 collection;
  System_Collections_Generic_Dictionary_object__object__o *pSVar27;
  Il2CppRGCTXData *__this_10;
  System_Collections_Generic_List_object__o *__this_11;
  int iVar28;
  MethodInfo_3104D80 **unaff_R13;
  System_String_o **binding;
  undefined4 uVar29;
  MethodInfo_33E0DF0 **unaff_R15;
  undefined1 auVar30 [12];
  undefined8 in_stack_fffffffffffffe60;
  MethodInfo *pMVar31;
  System_Collections_Generic_List_Enumerator_T__c *pSVar32;
  System_Collections_Generic_List_TSource__o *pSStack_180;
  System_Collections_Generic_List_Enumerator_T__o SStack_170;
  Il2CppRGCTXData *pIStack_158;
  _union_249689 _Stack_150;
  _union_249689 *p_Stack_148;
  _union_249689 _Stack_140;
  System_String_o *pSStack_138;
  System_Exception_o *pSStack_130;
  undefined8 uStack_128;
  System_Collections_Generic_Dictionary_object__object__o *pSStack_120;
  _union_249689 _Stack_118;
  undefined8 uStack_110;
  _union_249689 _Stack_108;
  System_String_o *pSStack_100;
  _union_249689 _Stack_f0;
  System_Exception_o *pSStack_e8;
  _union_249689 _Stack_e0;
  Il2CppObject *pIStack_d8;
  System_Exception_o *pSStack_d0;
  CustomLogic_CustomLogicEvaluator_o *pCStack_c8;
  System_String_o **ppSStack_c0;
  System_String_o *pSStack_b8;
  System_String_o *pSStack_b0;
  System_String_o *pSStack_a8;
  Il2CppObject *pIStack_98;
  System_Object_array *pSStack_90;
  CustomLogic_CustomLogicClassInstance_o *pCStack_88;
  System_Collections_Generic_Dictionary_object__object__o *pSStack_80;
  CustomLogic_CustomLogicEvaluator_o *pCStack_78;
  CustomLogic_CustomLogicClassInstance_o *pCStack_70;
  MethodInfo_3104D80 **ppMStack_68;
  System_Collections_Generic_Dictionary_object__object__o *pSStack_60;
  System_String_o **ppSStack_58;
  long *plStack_50;
  System_String_o *pSStack_48;
  MethodInfo_33E0DF0 **ppMStack_40;
  
  if (g_data_057adbc8 == '\0') {
    ppMStack_40 = (MethodInfo_33E0DF0 **)0x425a636;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicBuiltinTypes);
    ppMStack_40 = (MethodInfo_33E0DF0 **)0x425a642;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    ppMStack_40 = (MethodInfo_33E0DF0 **)0x425a64e;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    ppMStack_40 = (MethodInfo_33E0DF0 **)0x425a65a;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Item);
    ppMStack_40 = (MethodInfo_33E0DF0 **)0x425a666;
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_System_String_get_Item);
    ppMStack_40 = (MethodInfo_33E0DF0 **)0x425a672;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Contains);
    g_data_057adbc8 = '\x01';
  }
  pSVar25 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).Variables;
  pSVar27 = (System_Collections_Generic_Dictionary_object__object__o *)0x0;
  if (pSVar25 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    ppMStack_40 = (MethodInfo_33E0DF0 **)0x425a699;
    bVar9 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                      (pSVar25,(Il2CppObject *)name,MethodInfo_Boolean_ContainsKey);
    uVar17 = CONCAT71((int7)((ulong)in_RCX >> 8),1);
    if ((char)bVar9 != '\0') {
      return (bool_conflict)uVar17;
    }
    ppMStack_40 = (MethodInfo_33E0DF0 **)0x425a6b7;
    unaff_RBP = (System_String_o *)(*(__this->klass->vtable)._4_unknown.methodPtr)(__this);
    unaff_RBX = &TypeInfo_CustomLogicBuiltinTypes;
    unaff_R13 = &MethodInfo_HashSet_1_System_String_get_Item;
    unaff_R15 = &MethodInfo_Boolean_Contains;
    iVar28 = *(int *)(TypeInfo_CustomLogicBuiltinTypes + 0xe4);
    while( true ) {
      if (iVar28 == 0) {
        ppMStack_40 = (MethodInfo_33E0DF0 **)0x425a6e5;
        il2cpp_runtime_helper_02337ed0();
      }
      ppMStack_40 = (MethodInfo_33E0DF0 **)0x425a6ef;
      bVar9 = CustomLogic_CustomLogicBuiltinTypes__IsBuiltinType(unaff_RBP,(MethodInfo *)0x0);
      if ((char)bVar9 == '\0') {
        return 0;
      }
      if (*(int *)(TypeInfo_CustomLogicBuiltinTypes + 0xe4) == 0) {
        ppMStack_40 = (MethodInfo_33E0DF0 **)0x425a708;
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar27 = *(System_Collections_Generic_Dictionary_object__object__o **)
                 (*(long *)(TypeInfo_CustomLogicBuiltinTypes + 0xb8) + 0x18);
      if (pSVar27 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) break;
      ppMStack_40 = (MethodInfo_33E0DF0 **)0x425a72b;
      pSVar11 = (System_Collections_Generic_HashSet_object__o *)
                System_Collections_Generic_Dictionary_object__object___get_Item
                          (pSVar27,(Il2CppObject *)unaff_RBP,MethodInfo_HashSet_1_System_String_get_Item);
      if (pSVar11 == (System_Collections_Generic_HashSet_object__o *)0x0) break;
      ppMStack_40 = (MethodInfo_33E0DF0 **)0x425a742;
      bVar9 = System_Collections_Generic_HashSet_object___Contains(pSVar11,(Il2CppObject *)name,MethodInfo_Boolean_Contains);
      if ((char)bVar9 != '\0') {
        return (bool_conflict)CONCAT71((int7)((ulong)uVar17 >> 8),1);
      }
      ppMStack_40 = (MethodInfo_33E0DF0 **)0x425a75e;
      cVar8 = (*(__this->klass->vtable)._5_get_LookupBaseClassForVariables.methodPtr)(__this);
      if (cVar8 == '\0') {
        return 0;
      }
      if (*(int *)(TypeInfo_CustomLogicBuiltinTypes + 0xe4) == 0) {
        ppMStack_40 = (MethodInfo_33E0DF0 **)0x425a777;
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar25 = *(System_Collections_Generic_Dictionary_object__object__o **)
                 (*(long *)(TypeInfo_CustomLogicBuiltinTypes + 0xb8) + 0x10);
      pSVar27 = (System_Collections_Generic_Dictionary_object__object__o *)0x0;
      if (pSVar25 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) break;
      ppMStack_40 = (MethodInfo_33E0DF0 **)0x425a79c;
      bVar9 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                        (pSVar25,(Il2CppObject *)unaff_RBP,MethodInfo_Boolean_ContainsKey);
      if ((char)bVar9 == '\0') {
        return 0;
      }
      if (*(int *)(TypeInfo_CustomLogicBuiltinTypes + 0xe4) == 0) {
        ppMStack_40 = (MethodInfo_33E0DF0 **)0x425a7b1;
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar25 = *(System_Collections_Generic_Dictionary_object__object__o **)
                 (*(long *)(TypeInfo_CustomLogicBuiltinTypes + 0xb8) + 0x10);
      pSVar27 = (System_Collections_Generic_Dictionary_object__object__o *)0x0;
      if (pSVar25 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) break;
      ppMStack_40 = (MethodInfo_33E0DF0 **)0x425a7d6;
      unaff_RBP = (System_String_o *)
                  System_Collections_Generic_Dictionary_object__object___get_Item
                            (pSVar25,(Il2CppObject *)unaff_RBP,MethodInfo_String_get_Item);
      iVar28 = *(int *)(TypeInfo_CustomLogicBuiltinTypes + 0xe4);
    }
  }
  ppMStack_40 = (MethodInfo_33E0DF0 **)0x425a80a;
  il2cpp_runtime_helper_022b2c90();
  plStack_50 = unaff_RBX;
  pSStack_48 = name;
  ppMStack_40 = unaff_R15;
  if (g_data_057adbc5 == '\0') {
    ppSStack_58 = (System_String_o **)0x425a855;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    ppSStack_58 = (System_String_o **)0x425a861;
    il2cpp_runtime_helper_023445d0(&"__Hash__");
    g_data_057adbc5 = '\x01';
    pMVar22 = extraout_RDX_00;
    if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) goto label_0425a87b;
label_0425a834:
    pCVar5 = *(CustomLogic_CustomLogicEvaluator_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
  }
  else {
    pMVar22 = extraout_RDX;
    if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) != 0) goto label_0425a834;
label_0425a87b:
    ppSStack_58 = (System_String_o **)0x425a880;
    il2cpp_runtime_helper_02337ed0();
    pCVar5 = *(CustomLogic_CustomLogicEvaluator_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
    pMVar22 = extraout_RDX_01;
  }
  if (pCVar5 == (CustomLogic_CustomLogicEvaluator_o *)0x0) {
label_0425a8ec:
    iVar10 = System_Object__GetHashCode((Il2CppObject *)pSVar27,(MethodInfo *)0x0);
    return iVar10;
  }
  ppSStack_58 = (System_String_o **)0x425a8a5;
  bVar9 = CustomLogic_CustomLogicClassInstance__HasVariable
                    ((CustomLogic_CustomLogicClassInstance_o *)pSVar27,"__Hash__",pMVar22);
  if ((char)bVar9 == '\0') goto label_0425a8ec;
  pSVar20 = (System_Object_array *)0x0;
  ppSStack_58 = (System_String_o **)0x425a8bf;
  pSVar25 = pSVar27;
  __this_05 = (CustomLogic_CustomLogicClassInstance_o *)
              CustomLogic_CustomLogicEvaluator__EvaluateMethod
                        (pCVar5,(CustomLogic_CustomLogicClassInstance_o *)pSVar27,"__Hash__",
                         (System_Object_array *)0x0,0,(MethodInfo *)0x0);
  if (__this_05 == (CustomLogic_CustomLogicClassInstance_o *)0x0) {
    ppSStack_58 = (System_String_o **)0x425a900;
    __this_05 = (CustomLogic_CustomLogicClassInstance_o *)il2cpp_runtime_helper_022b2c90();
  }
  else {
    pSVar20 = (System_Object_array *)(((Il2CppClass *)__this_05->klass)->_1).element_class;
    pSVar25 = g_data_057b9bb8;
    if (pSVar20 == (System_Object_array *)(g_data_057b9bb8->fields)._values) {
      ppSStack_58 = (System_String_o **)0x425a8e4;
      pbVar12 = (bool_conflict *)il2cpp_runtime_helper_02305440(__this_05);
      return *pbVar12;
    }
  }
  ppSStack_58 = (System_String_o **)0x425a908;
  il2cpp_runtime_helper_022b2fd0();
  ppSStack_58 = &"__Hash__";
  pCStack_78 = pCVar5;
  pCStack_70 = __this;
  ppMStack_68 = unaff_R13;
  pSStack_60 = pSVar27;
  if (g_data_057adbc6 == '\0') {
    pSStack_80 = (System_Collections_Generic_Dictionary_object__object__o *)0x425a95c;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    pSStack_80 = (System_Collections_Generic_Dictionary_object__object__o *)0x425a968;
    il2cpp_runtime_helper_023445d0(&TypeInfo_object);
    pSStack_80 = (System_Collections_Generic_Dictionary_object__object__o *)0x425a974;
    il2cpp_runtime_helper_023445d0(&"__Eq__");
    g_data_057adbc6 = '\x01';
    pMVar22 = extraout_RDX_03;
    if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) goto label_0425a98e;
label_0425a93b:
    pCVar5 = *(CustomLogic_CustomLogicEvaluator_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
  }
  else {
    pMVar22 = extraout_RDX_02;
    if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) != 0) goto label_0425a93b;
label_0425a98e:
    pSStack_80 = (System_Collections_Generic_Dictionary_object__object__o *)0x425a993;
    il2cpp_runtime_helper_02337ed0();
    pCVar5 = *(CustomLogic_CustomLogicEvaluator_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
    pMVar22 = extraout_RDX_04;
  }
  if (pCVar5 == (CustomLogic_CustomLogicEvaluator_o *)0x0) {
label_0425aa64:
    bVar9 = System_Object__Equals((Il2CppObject *)__this_05,(Il2CppObject *)pSVar25,(MethodInfo *)0x0);
    return bVar9;
  }
  binding = &"__Eq__";
  pSStack_80 = (System_Collections_Generic_Dictionary_object__object__o *)0x425a9bd;
  bVar9 = CustomLogic_CustomLogicClassInstance__HasVariable(__this_05,"__Eq__",pMVar22);
  if ((char)bVar9 == '\0') goto label_0425aa64;
  pSStack_80 = (System_Collections_Generic_Dictionary_object__object__o *)0x425a9d9;
  parameterValues = (System_Object_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_object);
  pSVar21 = (System_Object_array *)&TypeInfo_CustomLogicManager;
  if (parameterValues == (System_Object_array *)0x0) {
label_0425aa7a:
    pSStack_80 = (System_Collections_Generic_Dictionary_object__object__o *)0x425aa7f;
    il2cpp_runtime_helper_022b2c90();
label_0425aa7f:
    pSStack_80 = (System_Collections_Generic_Dictionary_object__object__o *)0x425aa84;
    pIVar14 = (Il2CppObject *)il2cpp_runtime_helper_022b2ca0();
label_0425aa84:
    pSStack_80 = (System_Collections_Generic_Dictionary_object__object__o *)0x425aa8c;
    il2cpp_runtime_helper_022b2fd0(pIVar14);
  }
  else {
    pSVar21 = parameterValues;
    if (pSVar25 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
label_0425aa02:
      if ((int)parameterValues->max_length == 0) goto label_0425aa7f;
      parameterValues->m_Items[0] = (Il2CppObject *)pSVar25;
      pSStack_80 = (System_Collections_Generic_Dictionary_object__object__o *)0x425aa1b;
      il2cpp_runtime_helper_022b4080(parameterValues->m_Items,pSVar25);
      pSStack_80 = (System_Collections_Generic_Dictionary_object__object__o *)0x425aa33;
      pSVar20 = parameterValues;
      pIVar14 = CustomLogic_CustomLogicEvaluator__EvaluateMethod
                          (pCVar5,__this_05,"__Eq__",parameterValues,0,(MethodInfo *)0x0);
      if (pIVar14 == (Il2CppObject *)0x0) goto label_0425aa7a;
      pSVar20 = (System_Object_array *)(pIVar14->klass->_1).element_class;
      if (pSVar20 == *(System_Object_array **)(g_data_057b9b98 + 0x40)) {
        pSStack_80 = (System_Collections_Generic_Dictionary_object__object__o *)0x425aa58;
        puVar15 = (undefined1 *)il2cpp_runtime_helper_02305440(pIVar14);
        return (bool_conflict)CONCAT71((int7)((ulong)puVar15 >> 8),*puVar15);
      }
      goto label_0425aa84;
    }
    pSStack_80 = (System_Collections_Generic_Dictionary_object__object__o *)0x425a9f9;
    lVar13 = il2cpp_runtime_helper_023051f0(pSVar25);
    if (lVar13 != 0) goto label_0425aa02;
  }
  pSStack_80 = (System_Collections_Generic_Dictionary_object__object__o *)0x425aa91;
  __this_06 = (CustomLogic_CustomLogicClassInstance_o *)il2cpp_runtime_helper_0231b270();
  pSVar26 = (System_String_o *)0x0;
  pSStack_80 = (System_Collections_Generic_Dictionary_object__object__o *)0x425aa9b;
  il2cpp_runtime_helper_022b2b10();
  pIStack_98 = (Il2CppObject *)0x0;
  pSStack_a8 = (System_String_o *)0x425aac2;
  pSStack_90 = pSVar21;
  pCStack_88 = __this_05;
  pSStack_80 = pSVar25;
  bVar9 = CustomLogic_CustomLogicClassInstance__TryGetVariable
                    (__this_06,pSVar26,&pIStack_98,(MethodInfo *)pSVar20);
  if ((char)bVar9 != '\0') {
    return (bool_conflict)pIStack_98;
  }
  pSStack_a8 = (System_String_o *)0x425aae8;
  str3 = (MethodInfo_33E0DF0 **)
         (*(__this_06->klass->vtable)._4_unknown.methodPtr)
                   (__this_06,(__this_06->klass->vtable)._4_unknown.method);
  pSStack_a8 = (System_String_o *)0x425aaf7;
  pSVar16 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Variable ");
  pSStack_a8 = (System_String_o *)0x425ab06;
  str2 = (System_String_o *)il2cpp_runtime_helper_023445d0(&" not found in class ");
  pSStack_a8 = (System_String_o *)0x425ab1a;
  message = (MethodInfo_3104D80 **)
            System_String__Concat_3af7470(pSVar16,pSVar26,str2,(System_String_o *)str3,(MethodInfo *)0x0);
  pSStack_a8 = (System_String_o *)0x425ab29;
  uVar17 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
  pSStack_a8 = (System_String_o *)0x425ab31;
  __this_07 = (System_Exception_o *)il2cpp_runtime_helper_023052d0(uVar17);
  pSStack_a8 = (System_String_o *)0x425ab41;
  System_Exception___ctor_3cf6120(__this_07,(System_String_o *)message,(MethodInfo *)0x0);
  pSStack_a8 = (System_String_o *)0x425ab4d;
  __this_08.genericMethod = (void *)il2cpp_runtime_helper_023445d0(&MethodInfo_Object_GetVariable);
  pSStack_a8 = (System_String_o *)0x425ab58;
  plVar24 = (long *)__this_07;
  il2cpp_runtime_helper_022b2b10();
  ppSStack_c0 = &"__Eq__";
  item = __this_08;
  pSStack_d0 = __this_07;
  pCStack_c8 = pCVar5;
  pSStack_b8 = (System_String_o *)message;
  pSStack_b0 = (System_String_o *)str3;
  pSStack_a8 = unaff_RBP;
  if (g_data_057adbc7 == '\0') {
    pSStack_100 = (System_String_o *)0x425ab8c;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicBuiltinTypes);
    pSStack_100 = (System_String_o *)0x425ab98;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    pSStack_100 = (System_String_o *)0x425aba4;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_TryGetValue);
    pSStack_100 = (System_String_o *)0x425abb0;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Item);
    pSStack_100 = (System_String_o *)0x425abbc;
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_System_String_get_Item);
    pSStack_100 = (System_String_o *)0x425abc8;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    pSStack_100 = (System_String_o *)0x425abd4;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Contains);
    g_data_057adbc7 = '\x01';
  }
  pIStack_d8 = (Il2CppObject *)0x0;
  _Stack_f0.genericMethod = (MethodInfo *)0x0;
  pSVar25 = (System_Collections_Generic_Dictionary_object__object__o *)
            (((System_Exception_o *)plVar24)->fields)._message;
  pSVar27 = (System_Collections_Generic_Dictionary_object__object__o *)0x0;
  typeName = extraout_RDX_05;
  if (pSVar25 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    pSStack_100 = (System_String_o *)0x425ac11;
    bVar9 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                      (pSVar25,__this_08.genericMethod,&pIStack_d8,MethodInfo_Boolean_TryGetValue);
    if ((char)bVar9 == '\0') {
      pSStack_100 = (System_String_o *)0x425ac48;
      pSStack_e8 = (System_Exception_o *)plVar24;
      _Stack_e0 = extraout_RDX_05;
      typeName.genericMethod =
           (void *)(*(((System_Exception_o *)plVar24)->klass->vtable)._4_unknown.methodPtr)(plVar24);
      plVar24 = &TypeInfo_CustomLogicBuiltinTypes;
      message = &MethodInfo_HashSet_1_System_String_get_Item;
      str3 = &MethodInfo_Boolean_Contains;
      binding = (System_String_o **)&_Stack_f0;
label_0425ac70:
      iVar28 = *(int *)(TypeInfo_CustomLogicBuiltinTypes + 0xe4);
      do {
        if (iVar28 == 0) {
          pSStack_100 = (System_String_o *)0x425ac82;
          il2cpp_runtime_helper_02337ed0();
        }
        item.genericMethod = (MethodInfo *)0x0;
        pSStack_100 = (System_String_o *)0x425ac8c;
        bVar9 = CustomLogic_CustomLogicBuiltinTypes__IsBuiltinType(typeName.genericMethod,(MethodInfo *)0x0);
        if ((char)bVar9 == '\0') {
label_0425adb3:
          *(undefined8 *)_Stack_e0.genericMethod = 0;
          pSStack_100 = (System_String_o *)0x425adc8;
          il2cpp_runtime_helper_022b4080(_Stack_e0.genericMethod,0);
          return 0;
        }
        if (*(int *)(TypeInfo_CustomLogicBuiltinTypes + 0xe4) == 0) {
          pSStack_100 = (System_String_o *)0x425aca6;
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar27 = *(System_Collections_Generic_Dictionary_object__object__o **)
                   (*(long *)(TypeInfo_CustomLogicBuiltinTypes + 0xb8) + 0x18);
        if (pSVar27 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_0425ae14;
        pSStack_100 = (System_String_o *)0x425acc9;
        item = typeName;
        pSVar11 = (System_Collections_Generic_HashSet_object__o *)
                  System_Collections_Generic_Dictionary_object__object___get_Item
                            (pSVar27,typeName.genericMethod,MethodInfo_HashSet_1_System_String_get_Item);
        if (pSVar11 == (System_Collections_Generic_HashSet_object__o *)0x0) goto label_0425ae14;
        pSStack_100 = (System_String_o *)0x425ace0;
        bVar9 = System_Collections_Generic_HashSet_object___Contains
                          (pSVar11,__this_08.genericMethod,MethodInfo_Boolean_Contains);
        if ((char)bVar9 != '\0') goto code_r0x0425ace4;
        item = (_union_249689)(pSStack_e8->klass->vtable)._5_get_Message.method;
        pSStack_100 = (System_String_o *)0x425ad16;
        cVar8 = (*(pSStack_e8->klass->vtable)._5_get_Message.methodPtr)();
        if (cVar8 == '\0') goto label_0425adb3;
        if (*(int *)(TypeInfo_CustomLogicBuiltinTypes + 0xe4) == 0) {
          pSStack_100 = (System_String_o *)0x425ad30;
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar25 = *(System_Collections_Generic_Dictionary_object__object__o **)
                   (*(long *)(TypeInfo_CustomLogicBuiltinTypes + 0xb8) + 0x10);
        pSVar27 = (System_Collections_Generic_Dictionary_object__object__o *)0x0;
        if (pSVar25 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_0425ae14;
        pSStack_100 = (System_String_o *)0x425ad5a;
        item = typeName;
        bVar9 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                          (pSVar25,typeName.genericMethod,MethodInfo_Boolean_ContainsKey);
        if ((char)bVar9 == '\0') goto label_0425adb3;
        if (*(int *)(TypeInfo_CustomLogicBuiltinTypes + 0xe4) == 0) {
          pSStack_100 = (System_String_o *)0x425ad70;
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar25 = *(System_Collections_Generic_Dictionary_object__object__o **)
                   (*(long *)(TypeInfo_CustomLogicBuiltinTypes + 0xb8) + 0x10);
        pSVar27 = (System_Collections_Generic_Dictionary_object__object__o *)0x0;
        if (pSVar25 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_0425ae14;
        pSStack_100 = (System_String_o *)0x425ad9a;
        typeName.genericMethod =
             System_Collections_Generic_Dictionary_object__object___get_Item
                       (pSVar25,typeName.genericMethod,MethodInfo_String_get_Item);
        iVar28 = *(int *)(TypeInfo_CustomLogicBuiltinTypes + 0xe4);
      } while( true );
    }
    *(Il2CppObject **)extraout_RDX_05.genericMethod = pIStack_d8;
    pSStack_100 = (System_String_o *)0x425ac25;
    il2cpp_runtime_helper_022b4080(extraout_RDX_05.genericMethod);
label_0425ae01:
    return (bool_conflict)CONCAT71(typeName._1_7_,1);
  }
label_0425ae14:
  pSStack_100 = (System_String_o *)0x425ae19;
  uStack_110 = il2cpp_runtime_helper_022b2c90();
  collection = item;
  _Stack_108 = typeName;
  pSStack_100 = (System_String_o *)message;
  if (g_data_057adbca == '\0') {
    _Stack_118 = (_union_249689)0x425ae3f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    g_data_057adbca = '\x01';
  }
  lVar13 = MethodInfo_Void_Add;
  __this_10 = (Il2CppRGCTXData *)(pSVar27->fields)._buckets;
  if (__this_10 != (Il2CppRGCTXData *)0x0) {
    *(int *)((long)__this_10 + 0x1c) = *(int *)((long)__this_10 + 0x1c) + 1;
    pMVar22 = __this_10[2].method;
    if (pMVar22 != (MethodInfo *)0x0) {
      uVar3 = *(uint *)(__this_10 + 3);
      if (uVar3 < *(uint *)&pMVar22->name) {
        *(uint *)(__this_10 + 3) = uVar3 + 1;
        ((_union_249689 *)(&pMVar22->klass + (int)uVar3))->genericMethod = (void *)item;
        bVar9 = il2cpp_runtime_helper_022b4080(&pMVar22->klass + (int)uVar3,item.genericMethod);
        return bVar9;
      }
      System_Collections_Generic_List_object___AddWithResize
                ((System_Collections_Generic_List_object__o *)__this_10,item.genericMethod,
                 *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
      return extraout_EAX;
    }
  }
  _Stack_118 = (_union_249689)0x425aeb4;
  uStack_128 = il2cpp_runtime_helper_022b2c90();
  pSStack_120 = pSVar27;
  _Stack_118 = item;
  if (g_data_057adbcb == '\0') {
    pSStack_130 = (System_Exception_o *)0x425aedf;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_AddRange);
    g_data_057adbcb = '\x01';
  }
  pMVar22 = __this_10[2].method;
  if (pMVar22 != (MethodInfo *)0x0) {
    System_Collections_Generic_List_object___AddRange
              ((System_Collections_Generic_List_object__o *)pMVar22,collection.genericMethod,MethodInfo_Void_AddRange);
    return extraout_EAX_00;
  }
  pSStack_130 = (System_Exception_o *)0x425af0d;
  il2cpp_runtime_helper_022b2c90();
  pIStack_158 = __this_10;
  _Stack_150 = __this_08;
  p_Stack_148 = (_union_249689 *)binding;
  _Stack_140 = collection;
  pSStack_138 = (System_String_o *)str3;
  pSStack_130 = (System_Exception_o *)plVar24;
  if (g_data_057adbcc == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_IOrderedEnumerable_1_CustomLogic_CustomLogicSourceFile_O);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_CustomLogic_CustomLogicSourceFile_ToList_CustomLo);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicSourceFile_get_Current);
    il2cpp_runtime_helper_023445d0(&TypeInfo_FileRange);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicSourceFile_int);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_CustomLogic_CustomLogicSourceFile_Ge);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_Compile_b__6_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    il2cpp_runtime_helper_023445d0(&"\n");
    g_data_057adbcc = '\x01';
  }
  pSVar32 = (System_Collections_Generic_List_Enumerator_T__c *)0x0;
  pSStack_180 = (System_Collections_Generic_List_TSource__o *)0x0;
  pSVar20 = ((System_Collections_Generic_List_object__Fields *)&pMVar22->invoker_method)->_items;
  if (*(int *)(TypeInfo_c + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    keySelector = *(System_Func_TSource__TKey__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
  }
  else {
    keySelector = *(System_Func_TSource__TKey__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
  }
  if (keySelector == (System_Func_TSource__TKey__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    __this_08 = **(_union_249689 **)(TypeInfo_c + 0xb8);
    keySelector = (System_Func_TSource__TKey__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicSourceFile_int);
    System_Func_object__int____ctor();
    lVar13 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_TSource__TKey__o **)(lVar13 + 8) = keySelector;
    il2cpp_runtime_helper_022b4080(lVar13 + 8,keySelector);
  }
  source = System_Linq_Enumerable__OrderBy_object__int_
                     ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar20,keySelector,MethodInfo_IOrderedEnumerable_1_CustomLogic_CustomLogicSourceFile_O);
  __this_09 = System_Linq_Enumerable__ToList_object_
                        ((System_Collections_Generic_IEnumerable_TSource__o *)source,MethodInfo_List_1_CustomLogic_CustomLogicSourceFile_ToList_CustomLo);
  pcVar6 = pMVar22->name;
  if (pcVar6 != (char *)0x0) {
    *(int *)(pcVar6 + 0x1c) = *(int *)(pcVar6 + 0x1c) + 1;
    iVar28 = *(int *)(pcVar6 + 0x18);
    pcVar6[0x18] = '\0';
    pcVar6[0x19] = '\0';
    pcVar6[0x1a] = '\0';
    pcVar6[0x1b] = '\0';
    if (0 < iVar28) {
      System_Array__Clear(*(System_Array_o **)(pcVar6 + 0x10),0,iVar28,(MethodInfo *)0x0);
    }
    __this_08.genericMethod = (void *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
    System_Collections_Generic_List_object____ctor(__this_08.genericMethod,MethodInfo_List_1_System_String);
    if (__this_09 != (System_Collections_Generic_List_TSource__o *)0x0) {
      System_Collections_Generic_List_object___GetEnumerator
                (&SStack_170,(System_Collections_Generic_List_object__o *)__this_09,MethodInfo_List_1_T_Enumerator_CustomLogic_CustomLogicSourceFile_Ge);
      pSStack_180 = (System_Collections_Generic_List_TSource__o *)SStack_170.fields._current;
      if (__this_08.genericMethod == (MethodInfo *)0x0) {
        __this_01.fields._8_8_ = pMVar22;
        __this_01.fields._list = (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffe60;
        __this_01.fields._current = (Il2CppObject *)SStack_170.fields._list;
        bVar9 = System_Collections_Generic_List_Enumerator_object___MoveNext
                          (__this_01,(MethodInfo_321A1D0 *)&stack0xfffffffffffffe70);
        pSVar32 = (System_Collections_Generic_List_Enumerator_T__c *)SStack_170.fields._list;
        if ((char)bVar9 != '\0') goto label_0425b3ae;
      }
      else {
        iVar28 = 0;
        pSVar32 = (System_Collections_Generic_List_Enumerator_T__c *)SStack_170.fields._list;
        while (__this_00.fields._8_8_ = pMVar22,
              __this_00.fields._list = (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffe60,
              __this_00.fields._current = (Il2CppObject *)pSVar32,
              bVar9 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                (__this_00,(MethodInfo_321A1D0 *)&stack0xfffffffffffffe70),
              (char)bVar9 != '\0') {
          if ((System_Collections_Generic_List_TSource__o *)SStack_170.fields._current ==
              (System_Collections_Generic_List_TSource__o *)0x0) goto label_0425b3b8;
          pSVar26 = *(System_String_o **)
                     &((System_Collections_Generic_List_TSource__Fields *)
                      ((long)SStack_170.fields._current + 0x10))->_size;
          pSVar16 = (System_String_o *)0x0;
          if (pSVar26 == (System_String_o *)0x0) goto label_0425b3c6;
          pSVar18 = System_String__Split(pSVar26,10,0,(MethodInfo *)0x0);
          if (pSVar18 == (System_String_array *)0x0) goto label_0425b3de;
          iVar23 = (int)pSVar18->max_length;
          __this_09 = (System_Collections_Generic_List_TSource__o *)il2cpp_runtime_helper_023052d0(TypeInfo_FileRange);
          System_Object___ctor((Il2CppObject *)__this_09,(MethodInfo *)0x0);
          if (__this_09 == (System_Collections_Generic_List_TSource__o *)0x0) goto label_0425b407;
          (__this_09->fields)._items =
               ((System_Collections_Generic_List_TSource__Fields *)((long)SStack_170.fields._current + 0x10))
               ->_items;
          il2cpp_runtime_helper_022b4080(&__this_09->fields);
          (__this_09->fields)._size =
               *(int32_t *)
                &((System_Collections_Generic_List_TSource__Fields *)((long)SStack_170.fields._current + 0x10)
                 )->_syncRoot;
          (__this_09->fields)._version = iVar28;
          uVar3 = iVar28 + -1 + iVar23;
          pSVar20 = (System_Object_array *)(ulong)uVar3;
          *(uint *)&(__this_09->fields)._syncRoot = uVar3;
          *(int *)((long)&(__this_09->fields)._syncRoot + 4) = iVar23;
          *(undefined4 *)&__this_09[1].klass =
               *(undefined4 *)
                ((long)&((System_Collections_Generic_List_TSource__o *)
                        ((long)SStack_170.fields._current + 0x28))->klass + 4);
          lVar13 = MethodInfo_Void_Add;
          __this_11 = (System_Collections_Generic_List_object__o *)pMVar22->name;
          if (__this_11 == (System_Collections_Generic_List_object__o *)0x0) goto label_0425b450;
          piVar1 = &(__this_11->fields)._version;
          *piVar1 = *piVar1 + 1;
          pSVar21 = (__this_11->fields)._items;
          if (pSVar21 == (System_Object_array *)0x0) goto label_0425b46c;
          uVar4 = (__this_11->fields)._size;
          if (uVar4 < (uint)pSVar21->max_length) {
            (__this_11->fields)._size = uVar4 + 1;
            pSVar21->m_Items[(int)uVar4] = (Il2CppObject *)__this_09;
            il2cpp_runtime_helper_022b4080(pSVar21->m_Items + (int)uVar4,__this_09);
          }
          else {
            System_Collections_Generic_List_object___AddWithResize
                      (__this_11,(Il2CppObject *)__this_09,
                       *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
          }
          *(int *)((long)&((System_Collections_Generic_List_TSource__Fields *)
                          ((long)SStack_170.fields._current + 0x10))->_syncRoot + 4) = iVar28;
          *(uint *)&((System_Collections_Generic_List_TSource__o *)((long)SStack_170.fields._current + 0x28))
                    ->klass = uVar3;
          lVar13 = MethodInfo_Void_Add;
          pIVar14 = *(Il2CppObject **)
                     &((System_Collections_Generic_List_TSource__Fields *)
                      ((long)SStack_170.fields._current + 0x10))->_size;
          *(int *)((long)__this_08.genericMethod + 0x1c) = *(int *)((long)__this_08.genericMethod + 0x1c) + 1;
          pIVar7 = *(InvokerMethod *)((long)__this_08.genericMethod + 0x10);
          if (pIVar7 == (InvokerMethod)0x0) {
            il2cpp_runtime_helper_022b2c90();
            goto label_0425b3a9;
          }
          iVar28 = iVar28 + iVar23;
          uVar3 = *(uint *)((long)__this_08.genericMethod + 0x18);
          if (uVar3 < *(uint *)(pIVar7 + 0x18)) {
            *(uint *)((long)__this_08.genericMethod + 0x18) = uVar3 + 1;
            *(Il2CppObject **)(pIVar7 + (long)(int)uVar3 * 8 + 0x20) = pIVar14;
            il2cpp_runtime_helper_022b4080(pIVar7 + (long)(int)uVar3 * 8 + 0x20);
          }
          else {
            System_Collections_Generic_List_object___AddWithResize
                      (__this_08.genericMethod,pIVar14,
                       *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
          }
        }
      }
      __this_02.fields._8_8_ = pMVar22;
      __this_02.fields._list = (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffe60;
      __this_02.fields._current = (Il2CppObject *)pSVar32;
      System_Collections_Generic_List_Enumerator_object___Dispose
                (__this_02,(MethodInfo_321A1C0 *)&stack0xfffffffffffffe70);
      pMVar31 = pMVar22;
      goto label_0425b33e;
    }
  }
label_0425b3a9:
  do {
    il2cpp_runtime_helper_022b2c90();
label_0425b3ae:
    __this_09 = pSStack_180;
    if (pSStack_180 == (System_Collections_Generic_List_TSource__o *)0x0) {
label_0425b3b8:
      il2cpp_runtime_helper_022b2c90();
    }
    pSVar16 = *(System_String_o **)&(__this_09->fields)._size;
    if (pSVar16 == (System_String_o *)0x0) {
label_0425b3c6:
      il2cpp_runtime_helper_022b2c90();
    }
    pSVar18 = System_String__Split(pSVar16,10,0,(MethodInfo *)0x0);
    if (pSVar18 == (System_String_array *)0x0) {
label_0425b3de:
      pSVar18 = (System_String_array *)il2cpp_runtime_helper_022b2c90();
    }
    iVar23 = (int)pSVar18->max_length;
    pSVar20 = (System_Object_array *)il2cpp_runtime_helper_023052d0(TypeInfo_FileRange);
    System_Object___ctor((Il2CppObject *)pSVar20,(MethodInfo *)0x0);
    if (pSVar20 == (System_Object_array *)0x0) {
label_0425b407:
      il2cpp_runtime_helper_022b2c90();
    }
    pSVar20->bounds = (Il2CppArrayBounds *)(__this_09->fields)._items;
    il2cpp_runtime_helper_022b4080(&pSVar20->bounds);
    *(undefined4 *)&pSVar20->max_length = *(undefined4 *)&(__this_09->fields)._syncRoot;
    *(undefined4 *)((long)&pSVar20->max_length + 4) = 0;
    SStack_170.fields._current = (Il2CppObject *)(ulong)(iVar23 - 1U);
    *(uint *)pSVar20->m_Items = iVar23 - 1U;
    *(int *)((long)pSVar20->m_Items + 4) = iVar23;
    *(undefined4 *)(pSVar20->m_Items + 1) = *(undefined4 *)((long)&__this_09[1].klass + 4);
    __this_11 = (System_Collections_Generic_List_object__o *)pMVar22->name;
    if (__this_11 == (System_Collections_Generic_List_object__o *)0x0) {
label_0425b450:
      il2cpp_runtime_helper_022b2c90();
    }
    lVar13 = MethodInfo_Void_Add;
    uVar29 = SUB84(SStack_170.fields._current,0);
    piVar1 = &(__this_11->fields)._version;
    *piVar1 = *piVar1 + 1;
    pSVar21 = (__this_11->fields)._items;
    if (pSVar21 == (System_Object_array *)0x0) {
label_0425b46c:
      uVar29 = SUB84(SStack_170.fields._current,0);
      pSVar21 = (System_Object_array *)il2cpp_runtime_helper_022b2c90();
    }
    uVar3 = (__this_11->fields)._size;
    if (uVar3 < (uint)pSVar21->max_length) {
      (__this_11->fields)._size = uVar3 + 1;
      pSVar21->m_Items[(int)uVar3] = &pSVar20->obj;
      il2cpp_runtime_helper_022b4080(pSVar21->m_Items + (int)uVar3,pSVar20);
    }
    else {
      System_Collections_Generic_List_object___AddWithResize
                (__this_11,&pSVar20->obj,
                 *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
    }
    *(undefined4 *)((long)&(__this_09->fields)._syncRoot + 4) = 0;
    *(undefined4 *)&__this_09[1].klass = uVar29;
    auVar30 = il2cpp_runtime_helper_022b2c90();
    if (auVar30._8_4_ != 1) {
label_0425b5b9:
      __this_04.fields._8_8_ = pMVar22;
      __this_04.fields._list = (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffe60;
      __this_04.fields._current = (Il2CppObject *)pSVar32;
      System_Collections_Generic_List_Enumerator_object___Dispose
                (__this_04,(MethodInfo_321A1C0 *)&stack0xfffffffffffffe70);
      _Unwind_Resume(auVar30._0_8_);
    }
    plVar24 = (long *)__cxa_begin_catch(auVar30._0_8_);
    lVar13 = *plVar24;
    __cxa_end_catch();
    __this_03.fields._8_8_ = pMVar22;
    __this_03.fields._list = (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffe60;
    __this_03.fields._current = (Il2CppObject *)pSVar32;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_03,(MethodInfo_321A1C0 *)&stack0xfffffffffffffe70);
    pMVar31 = pMVar22;
    if (lVar13 != 0) {
      il2cpp_runtime_helper_022fefe0(lVar13);
      goto label_0425b5b9;
    }
label_0425b33e:
    pIVar19 = (Il2CppClass *)
              System_String__Join_3af7e00("\n",__this_08.genericMethod,(MethodInfo *)0x0);
    pMVar31->klass = pIVar19;
    pMVar22 = pMVar31;
    il2cpp_runtime_helper_022b4080(&pMVar31->klass);
    pSVar20 = ((System_Collections_Generic_List_object__Fields *)&pMVar31->invoker_method)->_items;
    if (pSVar20 != (System_Object_array *)0x0) {
      piVar2 = (int *)((long)&pSVar20->max_length + 4);
      *piVar2 = *piVar2 + 1;
      iVar10 = (int32_t)pSVar20->max_length;
      *(undefined4 *)&pSVar20->max_length = 0;
      if (0 < iVar10) {
        System_Array__Clear((System_Array_o *)pSVar20->bounds,0,iVar10,(MethodInfo *)0x0);
      }
      return (bool_conflict)pMVar31->klass;
    }
  } while( true );
code_r0x0425ace4:
  pSStack_100 = (System_String_o *)0x425acf4;
  bVar9 = CustomLogic_CLBindingCache__GetOrCreateBinding
                    (typeName.genericMethod,__this_08.genericMethod,(CustomLogic_ICLMemberBinding_o **)binding
                     ,(MethodInfo *)0x0);
  if ((char)bVar9 != '\0') goto label_0425adca;
  goto label_0425ac70;
label_0425adca:
  *(_union_249689 *)_Stack_e0.genericMethod = _Stack_f0;
  pSStack_100 = (System_String_o *)0x425addc;
  item = _Stack_f0;
  il2cpp_runtime_helper_022b4080();
  pSVar25 = (System_Collections_Generic_Dictionary_object__object__o *)(pSStack_e8->fields)._message;
  pSVar27 = (System_Collections_Generic_Dictionary_object__object__o *)0x0;
  if (pSVar25 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    pSStack_100 = (System_String_o *)0x425ae01;
    System_Collections_Generic_Dictionary_object__object___set_Item
              (pSVar25,__this_08.genericMethod,_Stack_f0.genericMethod,MethodInfo_Void_set_Item);
    goto label_0425ae01;
  }
  goto label_0425ae14;
}


// CustomLogic.CustomLogicClassInstance$$ShowVariableInInspector
// il2cpp: bool CustomLogic_CustomLogicClassInstance__ShowVariableInInspector (CustomLogic_CustomLogicClassInstance_o* __this, System_String_o* name, const MethodInfo* method);
// 0x4256ae0

bool_conflict
CustomLogic_CustomLogicClassInstance__ShowVariableInInspector
          (CustomLogic_CustomLogicClassInstance_o *__this,System_String_o *name,MethodInfo *method)

{
  bool_conflict bVar1;
  
  if (g_data_057adbc9 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Type");
    g_data_057adbc9 = '\x01';
  }
  bVar1 = System_String__op_Equality(name,"Type",(MethodInfo *)0x0);
  if (((char)bVar1 != '\0') && ((char)(__this->fields)._containsTypeOverride == '\0')) {
    return 0;
  }
  return (bool_conflict)CONCAT71((uint7)(uint3)((uint)bVar1 >> 8),1);
}


