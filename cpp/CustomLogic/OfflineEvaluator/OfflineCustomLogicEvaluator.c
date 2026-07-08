// Type: CustomLogic.OfflineEvaluator.OfflineCustomLogicEvaluator
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/CustomLogic.OfflineEvaluator/OfflineCustomLogicEvaluator.cs
// Prior source: NEW in this update
// --------------------------------

// CustomLogic.OfflineEvaluator.OfflineCustomLogicEvaluator$$.ctor
// il2cpp: void CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator___ctor (CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator_o* __this, System_String_o* script, const MethodInfo* method);
// 0x3f6e740

void CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator___ctor
               (CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator_o *__this,
               System_String_o *script,MethodInfo *method)

{
  System_String_o *pSVar1;
  CustomLogic_CustomLogicCompiler_o *pCVar2;
  MethodInfo *pMVar3;
  CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator_o *__this_00;
  
  if (DAT_05703eec == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicCompiler);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicSourceFile);
    il2cpp_init_method_metadata(&"TestScript.cl");
    DAT_05703eec = '\x01';
  }
  pMVar3 = (MethodInfo *)0x0;
  __this_00 = __this;
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator__InitializeSymbols(__this_00,pMVar3);
  pCVar2 = (CustomLogic_CustomLogicCompiler_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicCompiler);
  CustomLogic_CustomLogicCompiler___ctor(pCVar2,(MethodInfo *)0x0);
  (__this->fields)._compiler = pCVar2;
  il2cpp_runtime_glue(&(__this->fields)._compiler);
  pCVar2 = (__this->fields)._compiler;
  pMVar3 = (MethodInfo *)il2cpp_runtime_glue(TypeInfo_CustomLogicSourceFile);
  pSVar1 = "TestScript.cl";
  System_Object___ctor((Il2CppObject *)pMVar3,(MethodInfo *)0x0);
  ((CustomLogic_CustomLogicSourceFile_Fields *)&pMVar3->invoker_method)->_Name_k__BackingField =
       pSVar1;
  il2cpp_runtime_glue((CustomLogic_CustomLogicSourceFile_Fields *)&pMVar3->invoker_method,pSVar1);
  pMVar3->name = (char *)script;
  il2cpp_runtime_glue(&pMVar3->name,script);
  pMVar3->klass = (Il2CppClass *)0x4;
  pMVar3->return_type = (Il2CppType *)0x0;
  if (pCVar2 != (CustomLogic_CustomLogicCompiler_o *)0x0) {
    CustomLogic_CustomLogicCompiler__AddSourceFile
              (pCVar2,(CustomLogic_CustomLogicSourceFile_o *)pMVar3,(MethodInfo *)0x0);
    CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator__CompileAndInitialize(__this,pMVar3);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.OfflineEvaluator.OfflineCustomLogicEvaluator$$.ctor
// il2cpp: void CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator___ctor (CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator_o* __this, CustomLogic_CustomLogicCompiler_o* compiler, const MethodInfo* method);
// 0x3f6ec20

void CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator___ctor
               (CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator_o *__this,
               CustomLogic_CustomLogicCompiler_o *compiler,MethodInfo *method)

{
  MethodInfo *method_00;
  CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator_o *__this_00;
  
  method_00 = (MethodInfo *)0x0;
  __this_00 = __this;
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator__InitializeSymbols(__this_00,method_00);
  (__this->fields)._compiler = compiler;
  il2cpp_runtime_glue(&(__this->fields)._compiler);
  CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator__CompileAndInitialize
            (__this,(MethodInfo *)compiler);
  return;
}


// CustomLogic.OfflineEvaluator.OfflineCustomLogicEvaluator$$InitializeSymbols
// il2cpp: void CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator__InitializeSymbols (CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator_o* __this, const MethodInfo* method);
// 0x3f6e850

void CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator__InitializeSymbols
               (CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator_o *__this,
               MethodInfo *method)

{
  int iVar1;
  System_Collections_Generic_Dictionary_object__int__o *__this_00;
  int32_t iVar2;
  MethodInfo *method_00;
  
  if (DAT_05703eed == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicSymbols);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    DAT_05703eed = '\x01';
    iVar1 = *(int *)((long)&TypeInfo_CustomLogicSymbols[2].parameters + 4);
  }
  else {
    iVar1 = *(int *)((long)&TypeInfo_CustomLogicSymbols[2].parameters + 4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    __this_00 = *(System_Collections_Generic_Dictionary_object__int__o **)
                 TypeInfo_CustomLogicSymbols[2].virtualMethodPointer;
  }
  else {
    __this_00 = *(System_Collections_Generic_Dictionary_object__int__o **)
                 TypeInfo_CustomLogicSymbols[2].virtualMethodPointer;
  }
  if (__this_00 == (System_Collections_Generic_Dictionary_object__int__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  iVar2 = System_Collections_Generic_Dictionary<object__int>__get_Count(__this_00,MethodInfo_Int32_get_Count);
  if (iVar2 != 0) {
    return;
  }
  if (*(int *)((long)&TypeInfo_CustomLogicSymbols[2].parameters + 4) == 0) {
    method_00 = TypeInfo_CustomLogicSymbols;
    il2cpp_init_class();
    CustomLogic_CustomLogicSymbols__Init(method_00);
    return;
  }
  CustomLogic_CustomLogicSymbols__Init(TypeInfo_CustomLogicSymbols);
  return;
}


// CustomLogic.OfflineEvaluator.OfflineCustomLogicEvaluator$$CompileAndInitialize
// il2cpp: void CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator__CompileAndInitialize (CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator_o* __this, const MethodInfo* method);
// 0x3f6e900

void CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator__CompileAndInitialize
               (CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator_o *__this,
               MethodInfo *method)

{
  CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator_Fields *pCVar1;
  CustomLogic_CustomLogicCompiler_o *pCVar2;
  long lVar3;
  System_Collections_Generic_Dictionary_object__object__o *pSVar4;
  Il2CppObject *key;
  bool_conflict bVar5;
  System_String_o *pSVar6;
  CustomLogic_CustomLogicLexer_o *__this_00;
  MethodInfo *method_00;
  CustomLogic_CustomLogicParser_o *__this_01;
  CustomLogic_CustomLogicStartAst_o *pCVar7;
  CustomLogic_CustomLogicEvaluator_o *pCVar8;
  CustomLogic_CustomLogicClassInstance_o *pCVar9;
  System_String_o *str0;
  undefined8 uVar10;
  System_Exception_o *__this_02;
  MethodInfo *method_01;
  undefined *puVar11;
  
  if (DAT_05703eee == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicLexer);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicManager);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicParser);
    il2cpp_init_method_metadata(&"Main");
    DAT_05703eee = '\x01';
  }
  pCVar2 = (__this->fields)._compiler;
  if (pCVar2 != (CustomLogic_CustomLogicCompiler_o *)0x0) {
    pSVar6 = CustomLogic_CustomLogicCompiler__Compile(pCVar2,(MethodInfo *)0x0);
    pCVar2 = (__this->fields)._compiler;
    __this_00 = (CustomLogic_CustomLogicLexer_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicLexer);
    method_01 = (MethodInfo *)0x0;
    CustomLogic_CustomLogicLexer___ctor(__this_00,pSVar6,pCVar2,(MethodInfo *)0x0);
    if (__this_00 != (CustomLogic_CustomLogicLexer_o *)0x0) {
      method_00 = (MethodInfo *)CustomLogic_CustomLogicLexer__GetTokens(__this_00,(MethodInfo *)0x0)
      ;
      bVar5 = System_String__IsNullOrEmpty((__this_00->fields).Error,(MethodInfo *)0x0);
      if ((char)bVar5 == '\0') {
        il2cpp_glue_01f2f1a0(__this_00);
        pSVar6 = (__this_00->fields).Error;
        puVar11 = &"Lexer error: ";
LAB_03f6ebcd:
        str0 = (System_String_o *)il2cpp_init_method_metadata(puVar11);
        pSVar6 = System_String__Concat(str0,pSVar6,(MethodInfo *)0x0);
        uVar10 = il2cpp_init_method_metadata(&TypeInfo_Exception);
        __this_02 = (System_Exception_o *)il2cpp_runtime_glue(uVar10);
        System_Exception___ctor(__this_02,pSVar6,(MethodInfo *)0x0);
        uVar10 = il2cpp_init_method_metadata(&MethodInfo_Void_CompileAndInitialize);
                    /* WARNING: Subroutine does not return */
        il2cpp_glue_02274a00(__this_02,uVar10);
      }
      pCVar2 = (__this->fields)._compiler;
      __this_01 = (CustomLogic_CustomLogicParser_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicParser);
      CustomLogic_CustomLogicParser___ctor
                (__this_01,(System_Collections_Generic_List_CustomLogicToken__o *)method_00,pCVar2,
                 method_01);
      if (__this_01 != (CustomLogic_CustomLogicParser_o *)0x0) {
        pCVar7 = CustomLogic_CustomLogicParser__GetStartAst(__this_01,method_00);
        bVar5 = System_String__IsNullOrEmpty((__this_01->fields).Error,(MethodInfo *)0x0);
        if ((char)bVar5 == '\0') {
          il2cpp_glue_01f2f1a0(__this_01);
          pSVar6 = (__this_01->fields).Error;
          puVar11 = &"Parser error: ";
          goto LAB_03f6ebcd;
        }
        pCVar2 = (__this->fields)._compiler;
        pCVar8 = (CustomLogic_CustomLogicEvaluator_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicEvaluator);
        CustomLogic_CustomLogicEvaluator___ctor(pCVar8,pCVar7,pCVar2,method_01);
        pCVar1 = &__this->fields;
        (__this->fields)._evaluator = pCVar8;
        il2cpp_runtime_glue(pCVar1,pCVar8);
        pCVar8 = (__this->fields)._evaluator;
        if (pCVar8 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
          *(undefined1 *)&(pCVar8->fields).ForcedLoadout = 1;
          if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
            il2cpp_init_class();
          }
          lVar3 = *(long *)(TypeInfo_CustomLogicManager + 0xb8);
          *(CustomLogic_CustomLogicEvaluator_o **)(lVar3 + 8) = pCVar8;
          il2cpp_runtime_glue(lVar3 + 8);
          CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator__InitializeStaticClasses
                    (__this,(MethodInfo *)pCVar8);
          CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator__CallInitOnStaticClasses
                    (__this,(MethodInfo *)pCVar8);
          if (DAT_05703ef3 == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_Boolean_ContainsKey);
            il2cpp_init_method_metadata(&"Main");
            DAT_05703ef3 = '\x01';
          }
          if (pCVar1->_evaluator != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
            pCVar7 = (pCVar1->_evaluator->fields)._start;
            if (pCVar7 == (CustomLogic_CustomLogicStartAst_o *)0x0) {
              return;
            }
            pSVar4 = (System_Collections_Generic_Dictionary_object__object__o *)
                     (pCVar7->fields).Classes;
            if (pSVar4 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
              bVar5 = System_Collections_Generic_Dictionary<object__object>__ContainsKey
                                (pSVar4,"Main",MethodInfo_Boolean_ContainsKey);
              key = "Main";
              if ((char)bVar5 == '\0') {
                return;
              }
              if (DAT_05703ef2 == '\0') {
                il2cpp_init_method_metadata(&MethodInfo_Boolean_ContainsKey);
                il2cpp_init_method_metadata(&MethodInfo_CustomLogicClassInstance_get_Item);
                DAT_05703ef2 = '\x01';
              }
              if (pCVar1->_evaluator != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
                pSVar4 = (System_Collections_Generic_Dictionary_object__object__o *)
                         (pCVar1->_evaluator->fields)._staticClasses;
                if ((pSVar4 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) ||
                   (bVar5 = System_Collections_Generic_Dictionary<object__object>__ContainsKey
                                      (pSVar4,key,MethodInfo_Boolean_ContainsKey), (char)bVar5 == '\0')) {
                  pCVar9 = (CustomLogic_CustomLogicClassInstance_o *)0x0;
                }
                else {
                  pCVar9 = (CustomLogic_CustomLogicClassInstance_o *)
                           System_Collections_Generic_Dictionary<object__object>__get_Item
                                     (pSVar4,key,MethodInfo_CustomLogicClassInstance_get_Item);
                }
                (__this->fields)._mainInstance = pCVar9;
                il2cpp_runtime_glue(&(__this->fields)._mainInstance);
                return;
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


// CustomLogic.OfflineEvaluator.OfflineCustomLogicEvaluator$$InitializeStaticClasses
// il2cpp: void CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator__InitializeStaticClasses (CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator_o* __this, const MethodInfo* method);
// 0x3f6ec60

/* WARNING: Removing unreachable block (ram,0x03f6f7ee) */
/* WARNING: Removing unreachable block (ram,0x03f6f7f7) */
/* WARNING: Removing unreachable block (ram,0x03f6f8b8) */

void CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator__InitializeStaticClasses
               (CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator_o *__this,
               MethodInfo *method)

{
  byte bVar1;
  CustomLogic_CustomLogicEvaluator_o *pCVar2;
  CustomLogic_CustomLogicStartAst_o *pCVar3;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  System_Collections_Generic_HashSet_object__o *pSVar4;
  System_Object_array *pSVar5;
  System_Collections_Generic_Dictionary_object__object__o *pSVar6;
  long *plVar7;
  System_Collections_Generic_Dictionary_string__CustomLogicSourceType__o *pSVar8;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_01;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_02;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_03;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_04;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_05;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o __this_06;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o __this_07;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o __this_08;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o __this_09;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o __this_10;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o __this_11;
  System_Nullable_CustomLogicSourceType__o callerNamespace;
  System_Nullable_CustomLogicSourceType__Fields SVar9;
  bool_conflict bVar10;
  int32_t key;
  CustomLogic_BuiltinClassInstance_o *value;
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *__this_12;
  Il2CppObject *pIVar11;
  int *piVar12;
  CustomLogic_CustomLogicClassInstance_o *pCVar13;
  System_Collections_Generic_Dictionary_TKey__TValue__o *__this_13;
  System_Collections_Generic_Dictionary_TKey__TValue__o *pSVar14;
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *pSVar15;
  MethodInfo *pMVar16;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *in_R9;
  undefined8 in_stack_fffffffffffffee8;
  System_Collections_Generic_Dictionary_string__Dictionary_CustomLogicSourceType__CustomLogicClassInstance___o
  *__this_14;
  System_Collections_Generic_Dictionary_object__object__o *pSVar17;
  char cVar18;
  undefined7 uVar19;
  int32_t local_f0;
  int32_t local_ec;
  _union_329995 local_e8;
  undefined8 uStack_e0;
  System_Collections_Generic_Dictionary_TKey__TValue__o *local_d8;
  System_Nullable_CustomLogicSourceType__Fields local_d0;
  _union_329995 local_c8;
  undefined8 uStack_c0;
  System_Collections_Generic_Dictionary_TKey__TValue__o *local_b8;
  _union_329995 local_a8;
  undefined8 uStack_a0;
  System_Collections_Generic_Dictionary_TKey__TValue__o *local_98;
  _union_329995 local_88;
  undefined8 uStack_80;
  System_Collections_Generic_Dictionary_TKey__TValue__o *local_78;
  _union_329995 local_68;
  undefined8 uStack_60;
  System_Collections_Generic_Dictionary_TKey__TValue__o *local_58;
  _union_329995 local_48;
  undefined8 uStack_40;
  System_Collections_Generic_Dictionary_TKey__TValue__o *local_38;
  
  if (DAT_05703eef == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BuiltinClassInstance);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicBuiltinTypes);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ContainsKey);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_TryGetValue);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_CustomLogic_CustomLogicSourceType_C);
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicClassDefinitionAst_get_Item);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_CustomLogic_CustomLogicSourceType_C);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_TKey_TValue__KeyCollection_System_S);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_TKey_TValue__ValueCollection_System);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_TKey_TValue__ValueCollection_System);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_TKey_TValue__ValueCollection_Custom);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Item);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Item);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Item);
    il2cpp_init_method_metadata(&TypeInfo_Dictionary_CustomLogicSourceType__CustomLogicCla);
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicClassInstance_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicClassInstance_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_CustomLogic_CustomLogicSourceType_C);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Contains);
    il2cpp_init_method_metadata(&MethodInfo_HashSet_1_T__Enumerator_System_String__GetEnumer);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_TKey_TValue__KeyCollection_TKey_TVa);
    il2cpp_init_method_metadata(&MethodInfo_Nullable_1_CustomLogic_CustomLogicSourceType);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_get_HasValue);
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicSourceType_get_Value);
    il2cpp_init_method_metadata(&TypeInfo_OfflineCustomLogicEvaluator);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_TKey_TValue__ValueCollection_TKey_T);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_TKey_TValue__ValueCollection_TKey_T);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_TKey_TValue__ValueCollection_TKey_T);
    il2cpp_init_method_metadata(&"Main");
    DAT_05703eef = '\x01';
  }
  local_c8.genericMethod = (void *)0x0;
  uStack_c0 = 0;
  local_b8 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_68.genericMethod = (void *)0x0;
  uStack_60 = 0;
  local_58 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  cVar18 = '\0';
  uVar19 = 0;
  local_ec = 0;
  local_d0.hasValue = 0;
  local_d0.value = 0;
  local_f0 = 0;
  local_88.genericMethod = (void *)0x0;
  uStack_80 = 0;
  local_78 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_a8.genericMethod = (void *)0x0;
  uStack_a0 = 0;
  local_98 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_48.genericMethod = (void *)0x0;
  uStack_40 = 0;
  local_38 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  pCVar2 = (__this->fields)._evaluator;
  if (pCVar2 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
    pCVar3 = (pCVar2->fields)._start;
    __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
                (pCVar2->fields)._staticClasses;
    __this_14 = (pCVar2->fields)._namespacedStaticClasses;
    if (*(int *)(TypeInfo_CustomLogicBuiltinTypes + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pSVar4 = *(System_Collections_Generic_HashSet_object__o **)
              (*(long *)(TypeInfo_CustomLogicBuiltinTypes + 0xb8) + 0x20);
    if (pSVar4 != (System_Collections_Generic_HashSet_object__o *)0x0) {
      System_Collections_Generic_HashSet<object>__GetEnumerator
                ((System_Collections_Generic_HashSet_Enumerator_T__o *)&local_e8,pSVar4,MethodInfo_HashSet_1_T__Enumerator_System_String__GetEnumer
                );
      local_b8 = local_d8;
      local_c8 = local_e8;
      uStack_c0 = uStack_e0;
      if (__this_00 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
        while (__this_02.fields._8_8_ = __this_14,
              __this_02.fields._set =
                   (System_Collections_Generic_HashSet_T__o *)in_stack_fffffffffffffee8,
              __this_02.fields._current._0_1_ = cVar18, __this_02.fields._current._1_7_ = uVar19,
              bVar10 = System_Collections_Generic_HashSet_Enumerator<object>__MoveNext
                                 (__this_02,(MethodInfo_3185890 *)&local_c8), pSVar14 = local_b8,
              (char)bVar10 != '\0') {
          if (*(int *)(TypeInfo_OfflineCustomLogicEvaluator + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if ((System_Collections_Generic_HashSet_object__o *)**(undefined8 **)(TypeInfo_OfflineCustomLogicEvaluator + 0xb8)
              == (System_Collections_Generic_HashSet_object__o *)0x0) goto LAB_03f6f88b;
          bVar10 = System_Collections_Generic_HashSet<object>__Contains
                             ((System_Collections_Generic_HashSet_object__o *)
                              **(undefined8 **)(TypeInfo_OfflineCustomLogicEvaluator + 0xb8),(Il2CppObject *)pSVar14,
                              MethodInfo_Boolean_Contains);
          if ((char)bVar10 != '\0') {
            if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
              il2cpp_init_class();
            }
            pSVar5 = (System_Object_array *)**(undefined8 **)(TypeInfo_CustomLogicEvaluator + 0xb8);
            if (*(int *)(TypeInfo_CustomLogicBuiltinTypes + 0xe4) == 0) {
              il2cpp_init_class();
            }
            CustomLogic_CustomLogicBuiltinTypes__CreateClassInstance
                      ((System_String_o *)pSVar14,pSVar5,(MethodInfo *)0x0);
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
        }
      }
      else {
        while (__this_01.fields._8_8_ = __this_14,
              __this_01.fields._set =
                   (System_Collections_Generic_HashSet_T__o *)in_stack_fffffffffffffee8,
              __this_01.fields._current._0_1_ = cVar18, __this_01.fields._current._1_7_ = uVar19,
              bVar10 = System_Collections_Generic_HashSet_Enumerator<object>__MoveNext
                                 (__this_01,(MethodInfo_3185890 *)&local_c8), pSVar14 = local_b8,
              (char)bVar10 != '\0') {
          if (*(int *)(TypeInfo_OfflineCustomLogicEvaluator + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if ((System_Collections_Generic_HashSet_object__o *)**(undefined8 **)(TypeInfo_OfflineCustomLogicEvaluator + 0xb8)
              == (System_Collections_Generic_HashSet_object__o *)0x0) {
LAB_03f6f88b:
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          bVar10 = System_Collections_Generic_HashSet<object>__Contains
                             ((System_Collections_Generic_HashSet_object__o *)
                              **(undefined8 **)(TypeInfo_OfflineCustomLogicEvaluator + 0xb8),(Il2CppObject *)pSVar14,
                              MethodInfo_Boolean_Contains);
          if ((char)bVar10 != '\0') {
            if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
              il2cpp_init_class();
            }
            pSVar5 = (System_Object_array *)**(undefined8 **)(TypeInfo_CustomLogicEvaluator + 0xb8);
            if (*(int *)(TypeInfo_CustomLogicBuiltinTypes + 0xe4) == 0) {
              il2cpp_init_class();
            }
            value = CustomLogic_CustomLogicBuiltinTypes__CreateClassInstance
                              ((System_String_o *)pSVar14,pSVar5,(MethodInfo *)0x0);
            System_Collections_Generic_Dictionary<object__object>__set_Item
                      (__this_00,(Il2CppObject *)pSVar14,(Il2CppObject *)value,
                       (MethodInfo_308C840 *)MethodInfo_Void_set_Item);
          }
        }
      }
      __this_03.fields._8_8_ = __this_14;
      __this_03.fields._set = (System_Collections_Generic_HashSet_T__o *)in_stack_fffffffffffffee8;
      __this_03.fields._current._0_1_ = cVar18;
      __this_03.fields._current._1_7_ = uVar19;
      System_Collections_Generic_HashSet_Enumerator<object>__Dispose
                (__this_03,(MethodInfo_3185880 *)&local_c8);
      if (((pCVar3 != (CustomLogic_CustomLogicStartAst_o *)0x0) &&
          (pSVar6 = (System_Collections_Generic_Dictionary_object__object__o *)
                    (pCVar3->fields).Classes,
          pSVar6 != (System_Collections_Generic_Dictionary_object__object__o *)0x0)) &&
         (pSVar17 = (System_Collections_Generic_Dictionary_object__object__o *)__this_14,
         __this_12 = System_Collections_Generic_Dictionary<object__object>__get_Keys
                               (pSVar6,MethodInfo_Dictionary_2_TKey_TValue__KeyCollection_System_S),
         __this_12 != (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)0x0)) {
        pMVar16 = (MethodInfo *)&MethodInfo_Dictionary_2_TKey_TValue__KeyCollection_TKey_TVa;
        System_Collections_Generic_Dictionary_KeyCollection<object__object>__GetEnumerator
                  ((System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *
                   )&local_e8,__this_12,MethodInfo_Dictionary_2_TKey_TValue__KeyCollection_TKey_TVa);
        local_58 = local_d8;
        local_68 = local_e8;
        uStack_60 = uStack_e0;
        while (__this_04.fields._8_8_ = pSVar17,
              __this_04.fields._dictionary =
                   (System_Collections_Generic_Dictionary_TKey__TValue__o *)
                   in_stack_fffffffffffffee8, __this_04.fields._currentKey._0_1_ = cVar18,
              __this_04.fields._currentKey._1_7_ = uVar19,
              bVar10 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator<object__object>__MoveNext
                                 (__this_04,(MethodInfo_31D0850 *)&local_68), pSVar14 = local_58,
              (char)bVar10 != '\0') {
          bVar10 = System_String__op_Equality
                             ((System_String_o *)local_58,"Main",(MethodInfo *)0x0);
          if ((char)bVar10 == '\0') {
            pSVar6 = (System_Collections_Generic_Dictionary_object__object__o *)
                     (pCVar3->fields).Classes;
            if (pSVar6 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
            pIVar11 = System_Collections_Generic_Dictionary<object__object>__get_Item
                                (pSVar6,(Il2CppObject *)pSVar14,MethodInfo_CustomLogicClassDefinitionAst_get_Item);
            if (pIVar11 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
            if (pIVar11[2].monitor == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
            plVar7 = *(long **)((long)pIVar11[2].monitor + 0x18);
            if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
            if (*(long *)(*plVar7 + 0x40) != *(long *)(DAT_05711068 + 0x40)) {
                    /* WARNING: Subroutine does not return */
              il2cpp_unwind_resume();
            }
            piVar12 = (int *)il2cpp_glue_022c7330();
            if (*piVar12 == 2) {
              cVar18 = '\0';
              uVar19 = 0;
              pSVar8 = (pCVar3->fields).ClassNamespaces;
              if (pSVar8 == (System_Collections_Generic_Dictionary_string__CustomLogicSourceType__o
                             *)0x0) {
                    /* WARNING: Subroutine does not return */
                il2cpp_raise_exception();
              }
              bVar10 = System_Collections_Generic_Dictionary<object__Int32Enum>__TryGetValue
                                 ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar8,
                                  (Il2CppObject *)pSVar14,&local_ec,MethodInfo_Boolean_TryGetValue);
              if ((char)bVar10 != '\0') {
                System_Nullable<Int32Enum>___ctor
                          ((System_Nullable_Int32Enum__o)&stack0xfffffffffffffef8,local_ec,
                           MethodInfo_Nullable_1_CustomLogic_CustomLogicSourceType);
              }
              pCVar2 = (__this->fields)._evaluator;
              if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
                il2cpp_init_class();
              }
              if (pCVar2 == (CustomLogic_CustomLogicEvaluator_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                il2cpp_raise_exception();
              }
              callerNamespace.fields._1_7_ = uVar19;
              callerNamespace.fields.hasValue._0_1_ = cVar18;
              pMVar16 = (MethodInfo *)0x0;
              pCVar13 = CustomLogic_CustomLogicEvaluator__CreateClassInstance
                                  (pCVar2,(System_String_o *)pSVar14,
                                   (System_Object_array *)**(undefined8 **)(TypeInfo_CustomLogicEvaluator + 0xb8),0,
                                   callerNamespace,in_R9);
              if (pCVar13 == (CustomLogic_CustomLogicClassInstance_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                il2cpp_raise_exception();
              }
              SVar9._1_7_ = uVar19;
              SVar9.hasValue._0_1_ = cVar18;
              (pCVar13->fields)._Namespace_k__BackingField.fields = SVar9;
              if (*(int *)(TypeInfo_CustomLogicBuiltinTypes + 0xe4) == 0) {
                il2cpp_init_class();
              }
              pSVar4 = *(System_Collections_Generic_HashSet_object__o **)
                        (*(long *)(TypeInfo_CustomLogicBuiltinTypes + 0xb8) + 0x20);
              if (pSVar4 == (System_Collections_Generic_HashSet_object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
                il2cpp_raise_exception();
              }
              bVar10 = System_Collections_Generic_HashSet<object>__Contains
                                 (pSVar4,(Il2CppObject *)pSVar14,MethodInfo_Boolean_Contains);
              if ((char)bVar10 == '\0') {
                if (__this_00 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
                  il2cpp_raise_exception();
                }
                pMVar16 = MethodInfo_Void_set_Item;
                System_Collections_Generic_Dictionary<object__object>__set_Item
                          (__this_00,(Il2CppObject *)pSVar14,(Il2CppObject *)pCVar13,
                           (MethodInfo_308C840 *)MethodInfo_Void_set_Item);
              }
              else {
                if (__this_14 ==
                    (System_Collections_Generic_Dictionary_string__Dictionary_CustomLogicSourceType__CustomLogicClassInstance___o
                     *)0x0) {
                    /* WARNING: Subroutine does not return */
                  il2cpp_raise_exception();
                }
                bVar10 = System_Collections_Generic_Dictionary<object__object>__ContainsKey
                                   ((System_Collections_Generic_Dictionary_object__object__o *)
                                    __this_14,(Il2CppObject *)pSVar14,MethodInfo_Boolean_ContainsKey);
                if ((char)bVar10 == '\0') {
                  __this_13 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)
                              il2cpp_runtime_glue(TypeInfo_Dictionary_CustomLogicSourceType__CustomLogicCla);
                  System_Collections_Generic_Dictionary<Int32Enum__object>___ctor
                            (__this_13,MethodInfo_Dictionary_2_CustomLogic_CustomLogicSourceType_C);
                  pMVar16 = MethodInfo_Void_set_Item;
                  System_Collections_Generic_Dictionary<object__object>__set_Item
                            ((System_Collections_Generic_Dictionary_object__object__o *)__this_14,
                             (Il2CppObject *)pSVar14,(Il2CppObject *)__this_13,
                             (MethodInfo_308C840 *)MethodInfo_Void_set_Item);
                }
                if (cVar18 != '\0') {
                  pSVar14 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)
                            System_Collections_Generic_Dictionary<object__object>__get_Item
                                      ((System_Collections_Generic_Dictionary_object__object__o *)
                                       __this_14,(Il2CppObject *)pSVar14,MethodInfo_Dictionary_2_CustomLogic_CustomLogicSourceType_C);
                  key = System_Nullable<Int32Enum>__get_Value
                                  ((System_Nullable_Int32Enum__o)&stack0xfffffffffffffef8,
                                   MethodInfo_CustomLogicSourceType_get_Value);
                  if (pSVar14 == (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) {
                    /* WARNING: Subroutine does not return */
                    il2cpp_raise_exception();
                  }
                  pMVar16 = MethodInfo_Void_set_Item;
                  System_Collections_Generic_Dictionary<Int32Enum__object>__set_Item
                            (pSVar14,key,(Il2CppObject *)pCVar13,(MethodInfo_302F5F0 *)MethodInfo_Void_set_Item)
                  ;
                }
              }
            }
            else {
              pSVar6 = (System_Collections_Generic_Dictionary_object__object__o *)
                       (pCVar3->fields).Classes;
              if (pSVar6 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
                il2cpp_raise_exception();
              }
              pIVar11 = System_Collections_Generic_Dictionary<object__object>__get_Item
                                  (pSVar6,(Il2CppObject *)pSVar14,MethodInfo_CustomLogicClassDefinitionAst_get_Item);
              if (pIVar11 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
                il2cpp_raise_exception();
              }
              if (pIVar11[2].monitor == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
                il2cpp_raise_exception();
              }
              plVar7 = *(long **)((long)pIVar11[2].monitor + 0x18);
              if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                il2cpp_raise_exception();
              }
              if (*(long *)(*plVar7 + 0x40) != *(long *)(DAT_05711068 + 0x40)) {
                    /* WARNING: Subroutine does not return */
                il2cpp_unwind_resume();
              }
              piVar12 = (int *)il2cpp_glue_022c7330();
              if (*piVar12 == 3) {
                local_d0.hasValue = 0;
                local_d0.value = 0;
                pSVar8 = (pCVar3->fields).ClassNamespaces;
                if (pSVar8 == (System_Collections_Generic_Dictionary_string__CustomLogicSourceType__o
                               *)0x0) {
                    /* WARNING: Subroutine does not return */
                  il2cpp_raise_exception();
                }
                bVar10 = System_Collections_Generic_Dictionary<object__Int32Enum>__TryGetValue
                                   ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar8,
                                    (Il2CppObject *)pSVar14,&local_f0,MethodInfo_Boolean_TryGetValue);
                if ((char)bVar10 != '\0') {
                  System_Nullable<Int32Enum>___ctor
                            ((System_Nullable_Int32Enum__o)&local_d0,local_f0,MethodInfo_Nullable_1_CustomLogic_CustomLogicSourceType);
                }
                pCVar2 = (__this->fields)._evaluator;
                if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
                  il2cpp_init_class();
                }
                if (pCVar2 == (CustomLogic_CustomLogicEvaluator_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                  il2cpp_raise_exception();
                }
                pCVar13 = CustomLogic_CustomLogicEvaluator__CreateClassInstance
                                    (pCVar2,(System_String_o *)pSVar14,
                                     (System_Object_array *)**(undefined8 **)(TypeInfo_CustomLogicEvaluator + 0xb8),0
                                     ,(System_Nullable_CustomLogicSourceType__o)local_d0,in_R9);
                if (pCVar13 == (CustomLogic_CustomLogicClassInstance_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                  il2cpp_raise_exception();
                }
                (pCVar13->fields)._Namespace_k__BackingField.fields = local_d0;
                if (__this_00 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
                  il2cpp_raise_exception();
                }
                pMVar16 = MethodInfo_Void_set_Item;
                System_Collections_Generic_Dictionary<object__object>__set_Item
                          (__this_00,(Il2CppObject *)pSVar14,(Il2CppObject *)pCVar13,
                           (MethodInfo_308C840 *)MethodInfo_Void_set_Item);
              }
            }
          }
          else {
            CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator__CreateStaticClassInternal
                      (__this,(System_String_o *)pSVar14,
                       (System_Collections_Generic_Dictionary_string__CustomLogicClassInstance__o *)
                       __this_00,pMVar16);
          }
        }
        __this_05.fields._8_8_ = pSVar17;
        __this_05.fields._dictionary =
             (System_Collections_Generic_Dictionary_TKey__TValue__o *)in_stack_fffffffffffffee8;
        __this_05.fields._currentKey._0_1_ = cVar18;
        __this_05.fields._currentKey._1_7_ = uVar19;
        System_Collections_Generic_Dictionary_KeyCollection_Enumerator<object__object>__Dispose
                  (__this_05,(MethodInfo_31D0840 *)&local_68);
        if ((__this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) &&
           (pSVar15 = System_Collections_Generic_Dictionary<object__object>__get_Values
                                (__this_00,MethodInfo_Dictionary_2_TKey_TValue__ValueCollection_System),
           pSVar15 != (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)0x0))
        {
          System_Collections_Generic_Dictionary_ValueCollection<object__object>__GetEnumerator
                    ((System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o
                      *)&local_e8,pSVar15,MethodInfo_Dictionary_2_TKey_TValue__ValueCollection_TKey_T);
          local_78 = local_d8;
          local_88 = local_e8;
          uStack_80 = uStack_e0;
LAB_03f6f620:
          __this_06.fields._8_8_ = pSVar17;
          __this_06.fields._dictionary =
               (System_Collections_Generic_Dictionary_TKey__TValue__o *)in_stack_fffffffffffffee8;
          __this_06.fields._currentValue._0_1_ = cVar18;
          __this_06.fields._currentValue._1_7_ = uVar19;
          bVar10 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator<object__object>__MoveNext
                             (__this_06,(MethodInfo_31D09E0 *)&local_88);
          if ((char)bVar10 != '\0') {
            pMVar16 = extraout_RDX;
            if (local_78 != (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0)
            goto code_r0x03f6f63c;
            goto LAB_03f6f660;
          }
          __this_07.fields._8_8_ = pSVar17;
          __this_07.fields._dictionary =
               (System_Collections_Generic_Dictionary_TKey__TValue__o *)in_stack_fffffffffffffee8;
          __this_07.fields._currentValue._0_1_ = cVar18;
          __this_07.fields._currentValue._1_7_ = uVar19;
          System_Collections_Generic_Dictionary_ValueCollection_Enumerator<object__object>__Dispose
                    (__this_07,(MethodInfo_31D09D0 *)&local_88);
          if ((__this_14 !=
               (System_Collections_Generic_Dictionary_string__Dictionary_CustomLogicSourceType__CustomLogicClassInstance___o
                *)0x0) &&
             (pSVar15 = System_Collections_Generic_Dictionary<object__object>__get_Values
                                  ((System_Collections_Generic_Dictionary_object__object__o *)
                                   __this_14,MethodInfo_Dictionary_2_TKey_TValue__ValueCollection_System),
             pSVar15 != (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)0x0
             )) {
            System_Collections_Generic_Dictionary_ValueCollection<object__object>__GetEnumerator
                      ((System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o
                        *)&local_e8,pSVar15,MethodInfo_Dictionary_2_TKey_TValue__ValueCollection_TKey_T);
            local_98 = local_d8;
            local_a8 = local_e8;
            uStack_a0 = uStack_e0;
            do {
              __this_08.fields._8_8_ = pSVar17;
              __this_08.fields._dictionary =
                   (System_Collections_Generic_Dictionary_TKey__TValue__o *)
                   in_stack_fffffffffffffee8;
              __this_08.fields._currentValue._0_1_ = cVar18;
              __this_08.fields._currentValue._1_7_ = uVar19;
              bVar10 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator<object__object>__MoveNext
                                 (__this_08,(MethodInfo_31D09E0 *)&local_a8);
              if ((char)bVar10 == '\0') {
                __this_11.fields._8_8_ = pSVar17;
                __this_11.fields._dictionary =
                     (System_Collections_Generic_Dictionary_TKey__TValue__o *)
                     in_stack_fffffffffffffee8;
                __this_11.fields._currentValue._0_1_ = cVar18;
                __this_11.fields._currentValue._1_7_ = uVar19;
                System_Collections_Generic_Dictionary_ValueCollection_Enumerator<object__object>__Dispose
                          (__this_11,(MethodInfo_31D09D0 *)&local_a8);
                return;
              }
              if (local_98 == (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) {
                    /* WARNING: Subroutine does not return */
                il2cpp_raise_exception();
              }
              pSVar15 = System_Collections_Generic_Dictionary<Int32Enum__object>__get_Values
                                  (local_98,MethodInfo_Dictionary_2_TKey_TValue__ValueCollection_Custom);
              if (pSVar15 ==
                  (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)0x0) {
                    /* WARNING: Subroutine does not return */
                il2cpp_raise_exception();
              }
              System_Collections_Generic_Dictionary_ValueCollection<Int32Enum__object>__GetEnumerator
                        ((System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o
                          *)&local_e8,pSVar15,MethodInfo_Dictionary_2_TKey_TValue__ValueCollection_TKey_T);
              local_38 = local_d8;
              local_48 = local_e8;
              uStack_40 = uStack_e0;
LAB_03f6f770:
              __this_09.fields._8_8_ = pSVar17;
              __this_09.fields._dictionary =
                   (System_Collections_Generic_Dictionary_TKey__TValue__o *)
                   in_stack_fffffffffffffee8;
              __this_09.fields._currentValue._0_1_ = cVar18;
              __this_09.fields._currentValue._1_7_ = uVar19;
              bVar10 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator<Int32Enum__object>__MoveNext
                                 (__this_09,(MethodInfo_31C8640 *)&local_48);
              if ((char)bVar10 != '\0') {
                pMVar16 = extraout_RDX_00;
                if (local_38 != (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0)
                goto code_r0x03f6f78c;
                goto LAB_03f6f7b0;
              }
              __this_10.fields._8_8_ = pSVar17;
              __this_10.fields._dictionary =
                   (System_Collections_Generic_Dictionary_TKey__TValue__o *)
                   in_stack_fffffffffffffee8;
              __this_10.fields._currentValue._0_1_ = cVar18;
              __this_10.fields._currentValue._1_7_ = uVar19;
              System_Collections_Generic_Dictionary_ValueCollection_Enumerator<Int32Enum__object>__Dispose
                        (__this_10,(MethodInfo_31C8630 *)&local_48);
            } while( true );
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
code_r0x03f6f63c:
  bVar1 = (TypeInfo_BuiltinClassInstance->_2).naturalAligment;
  pMVar16 = (MethodInfo *)(ulong)bVar1;
  if (((local_78->klass->_2).naturalAligment < bVar1) ||
     ((local_78->klass->_2).typeHierarchy[(long)&pMVar16[-1].field_0x57] != TypeInfo_BuiltinClassInstance)) {
LAB_03f6f660:
    pCVar2 = (__this->fields)._evaluator;
    if (pCVar2 == (CustomLogic_CustomLogicEvaluator_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    CustomLogic_CustomLogicEvaluator__RunAssignmentsClassInstance
              (pCVar2,(CustomLogic_CustomLogicClassInstance_o *)local_78,pMVar16);
  }
  goto LAB_03f6f620;
code_r0x03f6f78c:
  bVar1 = (TypeInfo_BuiltinClassInstance->_2).naturalAligment;
  pMVar16 = (MethodInfo *)(ulong)bVar1;
  if (((local_38->klass->_2).naturalAligment < bVar1) ||
     ((local_38->klass->_2).typeHierarchy[(long)&pMVar16[-1].field_0x57] != TypeInfo_BuiltinClassInstance)) {
LAB_03f6f7b0:
    pCVar2 = (__this->fields)._evaluator;
    if (pCVar2 == (CustomLogic_CustomLogicEvaluator_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    CustomLogic_CustomLogicEvaluator__RunAssignmentsClassInstance
              (pCVar2,(CustomLogic_CustomLogicClassInstance_o *)local_38,pMVar16);
  }
  goto LAB_03f6f770;
}


// CustomLogic.OfflineEvaluator.OfflineCustomLogicEvaluator$$CallInitOnStaticClasses
// il2cpp: void CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator__CallInitOnStaticClasses (CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator_o* __this, const MethodInfo* method);
// 0x3f6fea0

void CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator__CallInitOnStaticClasses
               (CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator_o *__this,
               MethodInfo *method)

{
  CustomLogic_CustomLogicEvaluator_o *pCVar1;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o __this_01;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o __this_02;
  bool_conflict bVar2;
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *__this_03;
  MethodInfo *in_R9;
  System_Collections_Generic_Dictionary_TKey__TValue__o *pSVar3;
  Il2CppMethodPointer pIVar4;
  CustomLogic_CustomLogicClassInstance_o *classInstance;
  CustomLogic_CustomLogicClassInstance_o *pCVar5;
  
  if (DAT_05703ef0 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_TKey_TValue__ValueCollection_System);
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicClassInstance_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_TKey_TValue__ValueCollection_TKey_T);
    il2cpp_init_method_metadata(&"Init");
    DAT_05703ef0 = '\x01';
  }
  pSVar3 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  pIVar4 = (Il2CppMethodPointer)0x0;
  classInstance = (CustomLogic_CustomLogicClassInstance_o *)0x0;
  pCVar1 = (__this->fields)._evaluator;
  if ((pCVar1 != (CustomLogic_CustomLogicEvaluator_o *)0x0) &&
     (__this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
                  (pCVar1->fields)._staticClasses,
     __this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0)) {
    __this_03 = System_Collections_Generic_Dictionary<object__object>__get_Values
                          (__this_00,MethodInfo_Dictionary_2_TKey_TValue__ValueCollection_System);
    if (__this_03 != (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)0x0) {
      System_Collections_Generic_Dictionary_ValueCollection<object__object>__GetEnumerator
                ((System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *
                 )&stack0xffffffffffffffb8,__this_03,MethodInfo_Dictionary_2_TKey_TValue__ValueCollection_TKey_T);
      while( true ) {
        __this_01.fields._8_8_ = pIVar4;
        __this_01.fields._dictionary = pSVar3;
        __this_01.fields._currentValue = (Il2CppObject *)classInstance;
        bVar2 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator<object__object>__MoveNext
                          (__this_01,(MethodInfo_31D09E0 *)&stack0xffffffffffffffb8);
        if ((char)bVar2 == '\0') {
          __this_02.fields._8_8_ = pIVar4;
          __this_02.fields._dictionary = pSVar3;
          __this_02.fields._currentValue = (Il2CppObject *)classInstance;
          System_Collections_Generic_Dictionary_ValueCollection_Enumerator<object__object>__Dispose
                    (__this_02,(MethodInfo_31D09D0 *)&stack0xffffffffffffffb8);
          return;
        }
        pCVar1 = (__this->fields)._evaluator;
        if (pCVar1 == (CustomLogic_CustomLogicEvaluator_o *)0x0) break;
        pCVar5 = classInstance;
        CustomLogic_CustomLogicEvaluator__EvaluateMethod
                  (pCVar1,classInstance,"Init",(System_Object_array *)0x0,0,in_R9);
        if (classInstance == (CustomLogic_CustomLogicClassInstance_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        *(undefined1 *)((long)&(classInstance->fields).Enabled + 1) = 1;
        classInstance = pCVar5;
      }
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.OfflineEvaluator.OfflineCustomLogicEvaluator$$CreateStaticClassInternal
// il2cpp: void CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator__CreateStaticClassInternal (CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator_o* __this, System_String_o* className, System_Collections_Generic_Dictionary_string__CustomLogicClassInstance__o* staticClasses, const MethodInfo* method);
// 0x3f701b0

void CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator__CreateStaticClassInternal
               (CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator_o *__this,
               System_String_o *className,
               System_Collections_Generic_Dictionary_string__CustomLogicClassInstance__o
               *staticClasses,MethodInfo *method)

{
  CustomLogic_CustomLogicEvaluator_o *pCVar1;
  CustomLogic_CustomLogicStartAst_o *pCVar2;
  System_Collections_Generic_Dictionary_string__CustomLogicSourceType__o *__this_00;
  bool_conflict bVar3;
  CustomLogic_CustomLogicClassInstance_o *value;
  MethodInfo *in_R9;
  int32_t local_2c;
  System_Nullable_CustomLogicSourceType__Fields local_28;
  
  if (DAT_05703ef1 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ContainsKey);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_TryGetValue);
    il2cpp_init_method_metadata(&MethodInfo_Nullable_1_CustomLogic_CustomLogicSourceType);
    DAT_05703ef1 = '\x01';
  }
  local_28.hasValue = 0;
  local_28.value = 0;
  local_2c = 0;
  if (staticClasses !=
      (System_Collections_Generic_Dictionary_string__CustomLogicClassInstance__o *)0x0) {
    bVar3 = System_Collections_Generic_Dictionary<object__object>__ContainsKey
                      ((System_Collections_Generic_Dictionary_object__object__o *)staticClasses,
                       (Il2CppObject *)className,MethodInfo_Boolean_ContainsKey);
    if ((char)bVar3 != '\0') {
      return;
    }
    pCVar1 = (__this->fields)._evaluator;
    if (pCVar1 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
      pCVar2 = (pCVar1->fields)._start;
      local_28.hasValue = 0;
      local_28.value = 0;
      if ((pCVar2 != (CustomLogic_CustomLogicStartAst_o *)0x0) &&
         (__this_00 = (pCVar2->fields).ClassNamespaces,
         __this_00 != (System_Collections_Generic_Dictionary_string__CustomLogicSourceType__o *)0x0)
         ) {
        bVar3 = System_Collections_Generic_Dictionary<object__Int32Enum>__TryGetValue
                          ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
                           (Il2CppObject *)className,&local_2c,MethodInfo_Boolean_TryGetValue);
        if ((char)bVar3 != '\0') {
          System_Nullable<Int32Enum>___ctor
                    ((System_Nullable_Int32Enum__o)&local_28,local_2c,MethodInfo_Nullable_1_CustomLogic_CustomLogicSourceType);
        }
        pCVar1 = (__this->fields)._evaluator;
        if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if ((pCVar1 != (CustomLogic_CustomLogicEvaluator_o *)0x0) &&
           (value = CustomLogic_CustomLogicEvaluator__CreateClassInstance
                              (pCVar1,className,
                               (System_Object_array *)**(undefined8 **)(TypeInfo_CustomLogicEvaluator + 0xb8),0,
                               (System_Nullable_CustomLogicSourceType__o)local_28,in_R9),
           value != (CustomLogic_CustomLogicClassInstance_o *)0x0)) {
          (value->fields)._Namespace_k__BackingField.fields = local_28;
          System_Collections_Generic_Dictionary<object__object>__Add
                    ((System_Collections_Generic_Dictionary_object__object__o *)staticClasses,
                     (Il2CppObject *)className,(Il2CppObject *)value,MethodInfo_Void_Add);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.OfflineEvaluator.OfflineCustomLogicEvaluator$$RunAssignmentsClassInstance
// il2cpp: void CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator__RunAssignmentsClassInstance (CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator_o* __this, CustomLogic_CustomLogicClassInstance_o* classInstance, const MethodInfo* method);
// 0x3f70330

void CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator__RunAssignmentsClassInstance
               (CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator_o *__this,
               CustomLogic_CustomLogicClassInstance_o *classInstance,MethodInfo *method)

{
  CustomLogic_CustomLogicEvaluator_o *__this_00;
  
  __this_00 = (__this->fields)._evaluator;
  if (__this_00 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
    CustomLogic_CustomLogicEvaluator__RunAssignmentsClassInstance(__this_00,classInstance,method);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.OfflineEvaluator.OfflineCustomLogicEvaluator$$GetStartAst
// il2cpp: CustomLogic_CustomLogicStartAst_o* CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator__GetStartAst (CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator_o* __this, const MethodInfo* method);
// 0x3f70170

CustomLogic_CustomLogicStartAst_o *
CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator__GetStartAst
          (CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator_o *__this,MethodInfo *method)

{
  CustomLogic_CustomLogicEvaluator_o *pCVar1;
  
  pCVar1 = (__this->fields)._evaluator;
  if (pCVar1 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
    return (pCVar1->fields)._start;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.OfflineEvaluator.OfflineCustomLogicEvaluator$$GetStaticClassesDictionary
// il2cpp: System_Collections_Generic_Dictionary_string__CustomLogicClassInstance__o* CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator__GetStaticClassesDictionary (CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator_o* __this, const MethodInfo* method);
// 0x3f70190

System_Collections_Generic_Dictionary_string__CustomLogicClassInstance__o *
CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator__GetStaticClassesDictionary
          (CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator_o *__this,MethodInfo *method)

{
  CustomLogic_CustomLogicEvaluator_o *pCVar1;
  
  pCVar1 = (__this->fields)._evaluator;
  if (pCVar1 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
    return (pCVar1->fields)._staticClasses;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.OfflineEvaluator.OfflineCustomLogicEvaluator$$GetStaticClass
// il2cpp: CustomLogic_CustomLogicClassInstance_o* CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator__GetStaticClass (CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator_o* __this, System_String_o* className, const MethodInfo* method);
// 0x3f700e0

CustomLogic_CustomLogicClassInstance_o *
CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator__GetStaticClass
          (CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator_o *__this,
          System_String_o *className,MethodInfo *method)

{
  CustomLogic_CustomLogicEvaluator_o *pCVar1;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  bool_conflict bVar2;
  CustomLogic_CustomLogicClassInstance_o *pCVar3;
  
  if (DAT_05703ef2 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ContainsKey);
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicClassInstance_get_Item);
    DAT_05703ef2 = '\x01';
  }
  pCVar1 = (__this->fields)._evaluator;
  if (pCVar1 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
    __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
                (pCVar1->fields)._staticClasses;
    if (__this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      bVar2 = System_Collections_Generic_Dictionary<object__object>__ContainsKey
                        (__this_00,(Il2CppObject *)className,MethodInfo_Boolean_ContainsKey);
      if ((char)bVar2 != '\0') {
        pCVar3 = (CustomLogic_CustomLogicClassInstance_o *)
                 System_Collections_Generic_Dictionary<object__object>__get_Item
                           (__this_00,(Il2CppObject *)className,MethodInfo_CustomLogicClassInstance_get_Item);
        return pCVar3;
      }
    }
    return (CustomLogic_CustomLogicClassInstance_o *)0x0;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.OfflineEvaluator.OfflineCustomLogicEvaluator$$CreateStaticClass
// il2cpp: void CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator__CreateStaticClass (CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator_o* __this, System_String_o* className, const MethodInfo* method);
// 0x3f70350

void CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator__CreateStaticClass
               (CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator_o *__this,
               System_String_o *className,MethodInfo *method)

{
  CustomLogic_CustomLogicEvaluator_o *pCVar1;
  MethodInfo *in_RCX;
  
  pCVar1 = (__this->fields)._evaluator;
  if (pCVar1 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
    CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator__CreateStaticClassInternal
              (__this,className,(pCVar1->fields)._staticClasses,in_RCX);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.OfflineEvaluator.OfflineCustomLogicEvaluator$$HasMainClass
// il2cpp: bool CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator__HasMainClass (CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator_o* __this, const MethodInfo* method);
// 0x3f70070

bool_conflict
CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator__HasMainClass
          (CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator_o *__this,MethodInfo *method)

{
  CustomLogic_CustomLogicEvaluator_o *pCVar1;
  CustomLogic_CustomLogicStartAst_o *pCVar2;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  bool_conflict bVar3;
  
  if (DAT_05703ef3 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ContainsKey);
    il2cpp_init_method_metadata(&"Main");
    DAT_05703ef3 = '\x01';
  }
  pCVar1 = (__this->fields)._evaluator;
  if (pCVar1 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
    pCVar2 = (pCVar1->fields)._start;
    if (pCVar2 == (CustomLogic_CustomLogicStartAst_o *)0x0) {
      return 0;
    }
    __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)(pCVar2->fields).Classes;
    if (__this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      bVar3 = System_Collections_Generic_Dictionary<object__object>__ContainsKey
                        (__this_00,"Main",MethodInfo_Boolean_ContainsKey);
      return bVar3;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.OfflineEvaluator.OfflineCustomLogicEvaluator$$GetMainInstance
// il2cpp: CustomLogic_CustomLogicClassInstance_o* CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator__GetMainInstance (CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator_o* __this, const MethodInfo* method);
// 0x3f70370

CustomLogic_CustomLogicClassInstance_o *
CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator__GetMainInstance
          (CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator_o *__this,MethodInfo *method)

{
  return (__this->fields)._mainInstance;
}


// CustomLogic.OfflineEvaluator.OfflineCustomLogicEvaluator$$EvaluateMethod
// il2cpp: Il2CppObject* CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator__EvaluateMethod (CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator_o* __this, CustomLogic_CustomLogicClassInstance_o* instance, System_String_o* methodName, System_Object_array* parameters, const MethodInfo* method);
// 0x3f70380

Il2CppObject *
CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator__EvaluateMethod
          (CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator_o *__this,
          CustomLogic_CustomLogicClassInstance_o *instance,System_String_o *methodName,
          System_Object_array *parameters,MethodInfo *method)

{
  CustomLogic_CustomLogicEvaluator_o *__this_00;
  Il2CppObject *pIVar1;
  MethodInfo *in_R9;
  
  __this_00 = (__this->fields)._evaluator;
  if (__this_00 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
    pIVar1 = CustomLogic_CustomLogicEvaluator__EvaluateMethod
                       (__this_00,instance,methodName,parameters,0,in_R9);
    return pIVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.OfflineEvaluator.OfflineCustomLogicEvaluator$$EvaluateMethod
// il2cpp: Il2CppObject* CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator__EvaluateMethod (CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator_o* __this, System_String_o* className, System_String_o* methodName, System_Object_array* parameters, const MethodInfo* method);
// 0x3f703a0

Il2CppObject *
CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator__EvaluateMethod
          (CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator_o *__this,
          System_String_o *className,System_String_o *methodName,System_Object_array *parameters,
          MethodInfo *method)

{
  CustomLogic_CustomLogicEvaluator_o *pCVar1;
  CustomLogic_CustomLogicClassInstance_o *classInstance;
  Il2CppObject *pIVar2;
  MethodInfo *in_R9;
  
  if (DAT_05703ef4 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05703ef4 = '\x01';
  }
  pCVar1 = (__this->fields)._evaluator;
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_init_class();
  }
  if (pCVar1 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
    classInstance =
         CustomLogic_CustomLogicEvaluator__CreateClassInstance
                   (pCVar1,className,(System_Object_array *)**(undefined8 **)(TypeInfo_CustomLogicEvaluator + 0xb8),1
                    ,(System_Nullable_CustomLogicSourceType__o)0x0,in_R9);
    pCVar1 = (__this->fields)._evaluator;
    if (pCVar1 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
      pIVar2 = CustomLogic_CustomLogicEvaluator__EvaluateMethod
                         (pCVar1,classInstance,methodName,parameters,0,in_R9);
      return pIVar2;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.OfflineEvaluator.OfflineCustomLogicEvaluator$$CreateClassInstance
// il2cpp: CustomLogic_CustomLogicClassInstance_o* CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator__CreateClassInstance (CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator_o* __this, System_String_o* className, bool init, const MethodInfo* method);
// 0x3f70450

CustomLogic_CustomLogicClassInstance_o *
CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator__CreateClassInstance
          (CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator_o *__this,
          System_String_o *className,bool_conflict init,MethodInfo *method)

{
  CustomLogic_CustomLogicEvaluator_o *__this_00;
  CustomLogic_CustomLogicClassInstance_o *pCVar1;
  MethodInfo *in_R9;
  
  if (DAT_05703ef5 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05703ef5 = '\x01';
  }
  __this_00 = (__this->fields)._evaluator;
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_init_class();
  }
  if (__this_00 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
    pCVar1 = CustomLogic_CustomLogicEvaluator__CreateClassInstance
                       (__this_00,className,
                        (System_Object_array *)**(undefined8 **)(TypeInfo_CustomLogicEvaluator + 0xb8),init & 0xff,
                        (System_Nullable_CustomLogicSourceType__o)0x0,in_R9);
    return pCVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.OfflineEvaluator.OfflineCustomLogicEvaluator$$EvaluateMainMethod
// il2cpp: Il2CppObject* CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator__EvaluateMainMethod (CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator_o* __this, System_String_o* methodName, System_Object_array* parameters, const MethodInfo* method);
// 0x3f704d0

Il2CppObject *
CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator__EvaluateMainMethod
          (CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator_o *__this,
          System_String_o *methodName,System_Object_array *parameters,MethodInfo *method)

{
  CustomLogic_CustomLogicClassInstance_o *classInstance;
  CustomLogic_CustomLogicEvaluator_o *__this_00;
  Il2CppObject *pIVar1;
  undefined8 uVar2;
  System_Exception_o *__this_01;
  System_String_o *message;
  MethodInfo *in_R9;
  
  classInstance = (__this->fields)._mainInstance;
  if (classInstance == (CustomLogic_CustomLogicClassInstance_o *)0x0) {
    uVar2 = il2cpp_init_method_metadata(&TypeInfo_Exception);
    __this_01 = (System_Exception_o *)il2cpp_runtime_glue(uVar2);
    message = (System_String_o *)il2cpp_init_method_metadata(&"Main class not found or not initialized");
    System_Exception___ctor(__this_01,message,(MethodInfo *)0x0);
    uVar2 = il2cpp_init_method_metadata(&MethodInfo_Object_EvaluateMainMethod);
                    /* WARNING: Subroutine does not return */
    il2cpp_glue_02274a00(__this_01,uVar2);
  }
  __this_00 = (__this->fields)._evaluator;
  if (__this_00 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
    pIVar1 = CustomLogic_CustomLogicEvaluator__EvaluateMethod
                       (__this_00,classInstance,methodName,parameters,0,in_R9);
    return pIVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.OfflineEvaluator.OfflineCustomLogicEvaluator$$GetMainVariable
// il2cpp: Il2CppObject* CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator__GetMainVariable (CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator_o* __this, System_String_o* variableName, const MethodInfo* method);
// 0x3f70540

Il2CppObject *
CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator__GetMainVariable
          (CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator_o *__this,
          System_String_o *variableName,MethodInfo *method)

{
  CustomLogic_CustomLogicClassInstance_o *__this_00;
  Il2CppObject *pIVar1;
  undefined8 uVar2;
  System_Exception_o *__this_01;
  System_String_o *message;
  
  __this_00 = (__this->fields)._mainInstance;
  if (__this_00 != (CustomLogic_CustomLogicClassInstance_o *)0x0) {
    pIVar1 = CustomLogic_CustomLogicClassInstance__GetVariable
                       (__this_00,variableName,(MethodInfo *)0x0);
    return pIVar1;
  }
  uVar2 = il2cpp_init_method_metadata(&TypeInfo_Exception);
  __this_01 = (System_Exception_o *)il2cpp_runtime_glue(uVar2);
  message = (System_String_o *)il2cpp_init_method_metadata(&"Main class not found or not initialized");
  System_Exception___ctor(__this_01,message,(MethodInfo *)0x0);
  uVar2 = il2cpp_init_method_metadata(&MethodInfo_Object_GetMainVariable);
                    /* WARNING: Subroutine does not return */
  il2cpp_glue_02274a00(__this_01,uVar2);
}


// CustomLogic.OfflineEvaluator.OfflineCustomLogicEvaluator$$SetMainVariable
// il2cpp: void CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator__SetMainVariable (CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator_o* __this, System_String_o* variableName, Il2CppObject* value, const MethodInfo* method);
// 0x3f705a0

void CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator__SetMainVariable
               (CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator_o *__this,
               System_String_o *variableName,Il2CppObject *value,MethodInfo *method)

{
  CustomLogic_CustomLogicClassInstance_o *pCVar1;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  undefined8 uVar2;
  System_Exception_o *__this_01;
  System_String_o *message;
  
  if (DAT_05703ef6 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Item);
    DAT_05703ef6 = '\x01';
  }
  pCVar1 = (__this->fields)._mainInstance;
  if (pCVar1 != (CustomLogic_CustomLogicClassInstance_o *)0x0) {
    __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
                (pCVar1->fields).Variables;
    if (__this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      System_Collections_Generic_Dictionary<object__object>__set_Item
                (__this_00,(Il2CppObject *)variableName,value,MethodInfo_Void_set_Item);
      return;
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  uVar2 = il2cpp_init_method_metadata(&TypeInfo_Exception);
  __this_01 = (System_Exception_o *)il2cpp_runtime_glue(uVar2);
  message = (System_String_o *)il2cpp_init_method_metadata(&"Main class not found or not initialized");
  System_Exception___ctor(__this_01,message,(MethodInfo *)0x0);
  uVar2 = il2cpp_init_method_metadata(&MethodInfo_Void_SetMainVariable);
                    /* WARNING: Subroutine does not return */
  il2cpp_glue_02274a00(__this_01,uVar2);
}


// CustomLogic.OfflineEvaluator.OfflineCustomLogicEvaluator$$GetCompiler
// il2cpp: CustomLogic_CustomLogicCompiler_o* CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator__GetCompiler (CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator_o* __this, const MethodInfo* method);
// 0x3f70650

CustomLogic_CustomLogicCompiler_o *
CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator__GetCompiler
          (CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator_o *__this,MethodInfo *method)

{
  return (__this->fields)._compiler;
}


// CustomLogic.OfflineEvaluator.OfflineCustomLogicEvaluator$$GetCapturedErrors
// il2cpp: System_Collections_Generic_List_CustomLogicError__o* CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator__GetCapturedErrors (CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator_o* __this, const MethodInfo* method);
// 0x3f70660

System_Collections_Generic_List_CustomLogicError__o *
CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator__GetCapturedErrors
          (CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator_o *__this,MethodInfo *method)

{
  CustomLogic_CustomLogicEvaluator_o *pCVar1;
  
  pCVar1 = (__this->fields)._evaluator;
  if (pCVar1 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
    return (System_Collections_Generic_List_CustomLogicError__o *)
           (pCVar1->fields)._Compiler_k__BackingField;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.OfflineEvaluator.OfflineCustomLogicEvaluator$$HasErrors
// il2cpp: bool CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator__HasErrors (CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator_o* __this, const MethodInfo* method);
// 0x3f70680

bool_conflict
CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator__HasErrors
          (CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator_o *__this,MethodInfo *method)

{
  CustomLogic_CustomLogicEvaluator_o *pCVar1;
  CustomLogic_CustomLogicCompiler_o *pCVar2;
  
  if (DAT_05703ef7 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    DAT_05703ef7 = '\x01';
  }
  pCVar1 = (__this->fields)._evaluator;
  if ((pCVar1 != (CustomLogic_CustomLogicEvaluator_o *)0x0) &&
     (pCVar2 = (pCVar1->fields)._Compiler_k__BackingField,
     pCVar2 != (CustomLogic_CustomLogicCompiler_o *)0x0)) {
    return (bool_conflict)
           CONCAT71((int7)((ulong)pCVar2 >> 8),0 < *(int *)&(pCVar2->fields)._fileRanges);
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.OfflineEvaluator.OfflineCustomLogicEvaluator$$ClearErrors
// il2cpp: void CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator__ClearErrors (CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator_o* __this, const MethodInfo* method);
// 0x3f706d0

void CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator__ClearErrors
               (CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator_o *__this,
               MethodInfo *method)

{
  int *piVar1;
  int32_t length;
  CustomLogic_CustomLogicEvaluator_o *pCVar2;
  CustomLogic_CustomLogicCompiler_o *pCVar3;
  
  pCVar2 = (__this->fields)._evaluator;
  if (pCVar2 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
    if (DAT_05703ed0 == '\0') {
      il2cpp_init_method_metadata(&MethodInfo_Void_Clear);
      DAT_05703ed0 = '\x01';
    }
    pCVar3 = (pCVar2->fields)._Compiler_k__BackingField;
    if (pCVar3 != (CustomLogic_CustomLogicCompiler_o *)0x0) {
      piVar1 = (int *)((long)&(pCVar3->fields)._fileRanges + 4);
      *piVar1 = *piVar1 + 1;
      length = *(int32_t *)&(pCVar3->fields)._fileRanges;
      *(undefined4 *)&(pCVar3->fields)._fileRanges = 0;
      if (0 < length) {
        System_Array__Clear((System_Array_o *)(pCVar3->fields)._sourceFiles,0,length,
                            (MethodInfo *)0x0);
        return;
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.OfflineEvaluator.OfflineCustomLogicEvaluator$$GetLastError
// il2cpp: CustomLogic_CustomLogicError_o* CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator__GetLastError (CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator_o* __this, const MethodInfo* method);
// 0x3f70730

CustomLogic_CustomLogicError_o *
CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator__GetLastError
          (CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator_o *__this,MethodInfo *method)

{
  int iVar1;
  CustomLogic_CustomLogicEvaluator_o *pCVar2;
  System_Collections_Generic_List_object__o *__this_00;
  CustomLogic_CustomLogicError_o *pCVar3;
  
  if (DAT_05703ef8 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicError_get_Item);
    DAT_05703ef8 = '\x01';
  }
  pCVar2 = (__this->fields)._evaluator;
  if ((pCVar2 != (CustomLogic_CustomLogicEvaluator_o *)0x0) &&
     (__this_00 = (System_Collections_Generic_List_object__o *)
                  (pCVar2->fields)._Compiler_k__BackingField,
     __this_00 != (System_Collections_Generic_List_object__o *)0x0)) {
    iVar1 = (__this_00->fields)._size;
    if (0 < iVar1) {
      pCVar3 = (CustomLogic_CustomLogicError_o *)
               System_Collections_Generic_List<object>__get_Item(__this_00,iVar1 + -1,MethodInfo_CustomLogicError_get_Item);
      return pCVar3;
    }
    return (CustomLogic_CustomLogicError_o *)0x0;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.OfflineEvaluator.OfflineCustomLogicEvaluator$$.cctor
// il2cpp: void CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator___cctor (const MethodInfo* method);
// 0x3f707a0

void CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *__this;
  
  if (DAT_05703ef9 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Add);
    il2cpp_init_method_metadata(&MethodInfo_HashSet_1_System_String);
    il2cpp_init_method_metadata(&TypeInfo_HashSet_string);
    il2cpp_init_method_metadata(&TypeInfo_OfflineCustomLogicEvaluator);
    il2cpp_init_method_metadata(&"Random");
    il2cpp_init_method_metadata(&"Color");
    il2cpp_init_method_metadata(&"Dict");
    il2cpp_init_method_metadata(&"Quaternion");
    il2cpp_init_method_metadata(&"Set");
    il2cpp_init_method_metadata(&"List");
    il2cpp_init_method_metadata(&"Json");
    il2cpp_init_method_metadata(&"Math");
    il2cpp_init_method_metadata(&"Vector3");
    il2cpp_init_method_metadata(&"String");
    il2cpp_init_method_metadata(&"Vector2");
    il2cpp_init_method_metadata(&"Convert");
    il2cpp_init_method_metadata(&"Range");
    DAT_05703ef9 = '\x01';
  }
  __this = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_glue(TypeInfo_HashSet_string);
  System_Collections_Generic_HashSet<object>___ctor(__this,MethodInfo_HashSet_1_System_String);
  if (__this != (System_Collections_Generic_HashSet_object__o *)0x0) {
    System_Collections_Generic_HashSet<object>__Add(__this,"Math",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Convert",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Json",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Random",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"String",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"List",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Set",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Dict",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Range",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Vector2",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Vector3",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Quaternion",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Color",MethodInfo_Boolean_Add);
    **(undefined8 **)(TypeInfo_OfflineCustomLogicEvaluator + 0xb8) = __this;
    il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_OfflineCustomLogicEvaluator + 0xb8),__this);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


