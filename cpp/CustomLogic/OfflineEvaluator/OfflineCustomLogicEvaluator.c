// Type: CustomLogic.OfflineEvaluator.OfflineCustomLogicEvaluator
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/CustomLogic.OfflineEvaluator/OfflineCustomLogicEvaluator.cs
// Prior real C# source: none
// --------------------------------

// CustomLogic.OfflineEvaluator.OfflineCustomLogicEvaluator$$.ctor
// il2cpp: void CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator___ctor (CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator_o* __this, System_String_o* script, const MethodInfo* method);
// 0x1820ed090

void CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator___ctor
               (CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator_o *__this,System_String_o *script,
               MethodInfo *method)

{
  System_String_o *value;
  CustomLogic_CustomLogicCompiler_o *pCVar1;
  CustomLogic_CustomLogicSourceFile_o *file;
  
  if (Il2CppMethodInitialized_184346a23 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicCompiler);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicSourceFile);
    il2cpp_codegen_initialize_runtime_metadata(&"TestScript.cl");
    Il2CppMethodInitialized_184346a23 = '\x01';
  }
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator__InitializeSymbols(__this,(MethodInfo *)0x0);
  pCVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCompiler);
  CustomLogic_CustomLogicCompiler___ctor(pCVar1,(MethodInfo *)0x0);
  (__this->fields)._compiler = pCVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._compiler,pCVar1);
  pCVar1 = (__this->fields)._compiler;
  file = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicSourceFile);
  value = "TestScript.cl";
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)file,(MethodInfo *)0x0);
  (file->fields)._Name_k__BackingField = value;
  Il2CppCodeGenWriteBarrier(&(file->fields)._Name_k__BackingField,value);
  (file->fields)._Content_k__BackingField = script;
  Il2CppCodeGenWriteBarrier(&(file->fields)._Content_k__BackingField,script);
  (file->fields)._Type_k__BackingField = 4;
  (file->fields)._StartLine_k__BackingField = 0;
  (file->fields)._EndLine_k__BackingField = 0;
  (file->fields)._MapLogicOffset_k__BackingField = 0;
  if (pCVar1 != (CustomLogic_CustomLogicCompiler_o *)0x0) {
    CustomLogic_CustomLogicCompiler__AddSourceFile(pCVar1,file,(MethodInfo *)0x0);
    CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator__CompileAndInitialize(__this,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.OfflineEvaluator.OfflineCustomLogicEvaluator$$.ctor
// il2cpp: void CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator___ctor (CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator_o* __this, CustomLogic_CustomLogicCompiler_o* compiler, const MethodInfo* method);
// 0x1820ed040

void CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator___ctor_20ed040
               (CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator_o *__this,
               CustomLogic_CustomLogicCompiler_o *compiler,MethodInfo *method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator__InitializeSymbols(__this,(MethodInfo *)0x0);
  (__this->fields)._compiler = compiler;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._compiler,compiler);
  CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator__CompileAndInitialize(__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.OfflineEvaluator.OfflineCustomLogicEvaluator$$InitializeSymbols
// il2cpp: void CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator__InitializeSymbols (CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator_o* __this, const MethodInfo* method);
// 0x1820ecab0

void CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator__InitializeSymbols
               (CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_string__int__o *pSVar1;
  System_Collections_Generic_HashSet_BallotBox_Ballot__o *pSVar2;
  System_Collections_Generic_Dictionary_int__int__o *__this_00;
  int32_t iVar3;
  
  if (Il2CppMethodInitialized_184346a24 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicSymbols);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_int_get_Count);
    Il2CppMethodInitialized_184346a24 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicSymbols->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicSymbols);
  }
  pSVar1 = TypeInfo_CustomLogic_CustomLogicSymbols->static_fields->Symbols;
  if (pSVar1 == (System_Collections_Generic_Dictionary_string__int__o *)0x0) {
label_1820eccf0:
    ThrowNullReferenceException();
  }
  iVar3 = System_Collections_Generic_Dictionary_fsPortableReflection_AttributeQuery__object___get_Count
                    ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar1,
                     (MethodInfo_13CDEB0 *)
                     MethodInfo_System_Collections_Generic_Dictionary_string_int_get_Count);
  if (iVar3 == 0) {
    if ((TypeInfo_CustomLogic_CustomLogicSymbols->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicSymbols);
    }
    if (Il2CppMethodInitialized_1843469d2 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicSymbols);
      Il2CppMethodInitialized_1843469d2 = '\x01';
    }
    if ((TypeInfo_CustomLogic_CustomLogicSymbols->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicSymbols);
    }
    if (TypeInfo_CustomLogic_CustomLogicSymbols->static_fields->_loaded == false) {
      if ((TypeInfo_CustomLogic_CustomLogicSymbols->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicSymbols);
      }
      if (Il2CppMethodInitialized_1843469d3 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicSymbols);
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_System_Collections_Generic_Dictionary_string_int_Clear);
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_System_Collections_Generic_Dictionary_int_int_Clear);
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_System_Collections_Generic_HashSet_string_Clear);
        il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_int_Clear);
        Il2CppMethodInitialized_1843469d3 = '\x01';
      }
      if ((TypeInfo_CustomLogic_CustomLogicSymbols->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicSymbols);
      }
      pSVar1 = TypeInfo_CustomLogic_CustomLogicSymbols->static_fields->Symbols;
      if (pSVar1 != (System_Collections_Generic_Dictionary_string__int__o *)0x0) {
        System_Collections_Generic_Dictionary_fsPortableReflection_AttributeQuery__object___Clear
                  ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar1,
                   (MethodInfo_13BF1C0 *)MethodInfo_System_Collections_Generic_Dictionary_string_int_Clear);
        pSVar2 = (System_Collections_Generic_HashSet_BallotBox_Ballot__o *)
                 TypeInfo_CustomLogic_CustomLogicSymbols->static_fields->SpecialSymbolNames;
        if (pSVar2 != (System_Collections_Generic_HashSet_BallotBox_Ballot__o *)0x0) {
          System_Collections_Generic_HashSet_BallotBox_Ballot___Clear
                    (pSVar2,(MethodInfo_17592A0 *)MethodInfo_System_Collections_Generic_HashSet_string_Clear);
          pSVar2 = (System_Collections_Generic_HashSet_BallotBox_Ballot__o *)
                   TypeInfo_CustomLogic_CustomLogicSymbols->static_fields->AlphaSymbolNames;
          if (pSVar2 != (System_Collections_Generic_HashSet_BallotBox_Ballot__o *)0x0) {
            System_Collections_Generic_HashSet_BallotBox_Ballot___Clear
                      (pSVar2,(MethodInfo_17592A0 *)MethodInfo_System_Collections_Generic_HashSet_string_Clear
                      );
            __this_00 = TypeInfo_CustomLogic_CustomLogicSymbols->static_fields->BinopSymbolPriorities;
            if (__this_00 != (System_Collections_Generic_Dictionary_int__int__o *)0x0) {
              System_Collections_Generic_Dictionary_fsPortableReflection_AttributeQuery__object___Clear
                        ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
                         (MethodInfo_13BF1C0 *)MethodInfo_System_Collections_Generic_Dictionary_int_int_Clear)
              ;
              pSVar2 = (System_Collections_Generic_HashSet_BallotBox_Ballot__o *)
                       TypeInfo_CustomLogic_CustomLogicSymbols->static_fields->ClassSymbols;
              if (pSVar2 != (System_Collections_Generic_HashSet_BallotBox_Ballot__o *)0x0) {
                System_Collections_Generic_HashSet_BallotBox_Ballot___Clear
                          (pSVar2,(MethodInfo_17592A0 *)
                                  MethodInfo_System_Collections_Generic_HashSet_int_Clear);
                pSVar2 = (System_Collections_Generic_HashSet_BallotBox_Ballot__o *)
                         TypeInfo_CustomLogic_CustomLogicSymbols->static_fields->ConditionalSymbols;
                if (pSVar2 != (System_Collections_Generic_HashSet_BallotBox_Ballot__o *)0x0) {
                  System_Collections_Generic_HashSet_BallotBox_Ballot___Clear
                            (pSVar2,(MethodInfo_17592A0 *)
                                    MethodInfo_System_Collections_Generic_HashSet_int_Clear);
                  CustomLogic_CustomLogicSymbols__AddSymbols((MethodInfo *)0x0);
                  CustomLogic_CustomLogicSymbols__CategorizeSymbols((MethodInfo *)0x0);
                  TypeInfo_CustomLogic_CustomLogicSymbols->static_fields->_loaded = true;
                  return;
                }
              }
            }
          }
        }
      }
      goto label_1820eccf0;
    }
  }
  return;
}


// CustomLogic.OfflineEvaluator.OfflineCustomLogicEvaluator$$CompileAndInitialize
// il2cpp: void CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator__CompileAndInitialize (CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator_o* __this, const MethodInfo* method);
// 0x1820eb400

void CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator__CompileAndInitialize
               (CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator_o *__this,MethodInfo *method)

{
  CustomLogic_CustomLogicCompiler_o *pCVar1;
  System_Collections_Generic_Dictionary_string__CustomLogicClassDefinitionAst__o *__this_00;
  System_Collections_Generic_Dictionary_object__object__o *__this_01;
  bool bVar2;
  System_String_o *pSVar3;
  CustomLogic_CustomLogicLexer_o *__this_02;
  System_Collections_Generic_List_CustomLogicToken__o *value;
  CustomLogic_CustomLogicParser_o *__this_03;
  System_Collections_Generic_List_CustomLogicToken__o *__this_04;
  CustomLogic_CustomLogicStartAst_o *pCVar4;
  CustomLogic_CustomLogicEvaluator_o *pCVar5;
  CustomLogic_CustomLogicClassInstance_o *value_00;
  System_String_o *pSVar6;
  Il2CppClass *pIVar7;
  System_Exception_o *pSVar8;
  MethodInfo *pMVar9;
  
  if (Il2CppMethodInitialized_184346a25 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicLexer);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicParser);
    il2cpp_codegen_initialize_runtime_metadata(&"Main");
    Il2CppMethodInitialized_184346a25 = '\x01';
  }
  pCVar1 = (__this->fields)._compiler;
  if (pCVar1 != (CustomLogic_CustomLogicCompiler_o *)0x0) {
    pSVar3 = CustomLogic_CustomLogicCompiler__Compile(pCVar1,(MethodInfo *)0x0);
    pCVar1 = (__this->fields)._compiler;
    __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLexer);
    CustomLogic_CustomLogicLexer___ctor(__this_02,pSVar3,pCVar1,(MethodInfo *)0x0);
    if (__this_02 != (CustomLogic_CustomLogicLexer_o *)0x0) {
      value = CustomLogic_CustomLogicLexer__GetTokens(__this_02,(MethodInfo *)0x0);
      bVar2 = System_String__IsNullOrEmpty((__this_02->fields).Error,(MethodInfo *)0x0);
      if (!bVar2) {
        NullCheck(__this_02);
        pSVar3 = (__this_02->fields).Error;
        pSVar6 = il2cpp_codegen_get_runtime_metadata(&"Lexer error: ");
        pSVar3 = System_String__Concat_1969e50(pSVar6,pSVar3,(MethodInfo *)0x0);
        pIVar7 = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
        pSVar8 = (System_Exception_o *)il2cpp_codegen_object_new(pIVar7);
        System_Exception___ctor_1b6abf0(pSVar8,pSVar3,(MethodInfo *)0x0);
        pMVar9 = il2cpp_codegen_get_runtime_metadata
                           (&
                            MethodInfo_CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator_CompileAndInitialize
                           );
        il2cpp_codegen_raise_exception((Il2CppObject *)pSVar8,pMVar9);
      }
      pCVar1 = (__this->fields)._compiler;
      __this_03 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicParser);
      if (Il2CppMethodInitialized_1843469c4 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_System_Collections_Generic_List_CustomLogicToken_ctor);
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_CustomLogicToken)
        ;
        il2cpp_codegen_initialize_runtime_metadata(&"");
        Il2CppMethodInitialized_1843469c4 = '\x01';
      }
      __this_04 = il2cpp_codegen_object_new
                            ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_CustomLogicToken);
      System_Collections_Generic_List_object____ctor
                ((System_Collections_Generic_LowLevelList_T__o *)__this_04,
                 (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_CustomLogicToken_ctor);
      (__this_03->fields)._tokens = __this_04;
      Il2CppCodeGenWriteBarrier(&(__this_03->fields)._tokens,__this_04);
      (__this_03->fields).Error = "";
      Il2CppCodeGenWriteBarrier(&(__this_03->fields).Error,"");
      System_Configuration_ConfigurationCollectionAttribute___ctor
                ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this_03,(MethodInfo *)0x0);
      (__this_03->fields)._tokens = value;
      Il2CppCodeGenWriteBarrier(&(__this_03->fields)._tokens,value);
      (__this_03->fields)._Compiler_k__BackingField = pCVar1;
      Il2CppCodeGenWriteBarrier(&(__this_03->fields)._Compiler_k__BackingField,pCVar1);
      pCVar4 = CustomLogic_CustomLogicParser__GetStartAst(__this_03,(MethodInfo *)0x0);
      bVar2 = System_String__IsNullOrEmpty((__this_03->fields).Error,(MethodInfo *)0x0);
      if (!bVar2) {
        NullCheck(__this_03);
        pSVar3 = (__this_03->fields).Error;
        pSVar6 = il2cpp_codegen_get_runtime_metadata(&"Parser error: ");
        pSVar3 = System_String__Concat_1969e50(pSVar6,pSVar3,(MethodInfo *)0x0);
        pIVar7 = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
        pSVar8 = (System_Exception_o *)il2cpp_codegen_object_new(pIVar7);
        System_Exception___ctor_1b6abf0(pSVar8,pSVar3,(MethodInfo *)0x0);
        pMVar9 = il2cpp_codegen_get_runtime_metadata
                           (&
                            MethodInfo_CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator_CompileAndInitialize
                           );
        il2cpp_codegen_raise_exception((Il2CppObject *)pSVar8,pMVar9);
      }
      pCVar1 = (__this->fields)._compiler;
      pCVar5 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
      CustomLogic_CustomLogicEvaluator___ctor(pCVar5,pCVar4,pCVar1,(MethodInfo *)0x0);
      (__this->fields)._evaluator = pCVar5;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._evaluator,pCVar5);
      pCVar5 = (__this->fields)._evaluator;
      if (pCVar5 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
        (pCVar5->fields)._CaptureErrors_k__BackingField = true;
        pCVar5 = (__this->fields)._evaluator;
        if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
        }
        TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator = pCVar5;
        Il2CppCodeGenWriteBarrier(&TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator,pCVar5);
        CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator__InitializeStaticClasses
                  (__this,(MethodInfo *)0x0);
        CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator__CallInitOnStaticClasses
                  (__this,(MethodInfo *)0x0);
        if (Il2CppMethodInitialized_184346a2a == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicClassDefinitionAst_ContainsKey
                    );
          il2cpp_codegen_initialize_runtime_metadata(&"Main");
          Il2CppMethodInitialized_184346a2a = '\x01';
        }
        pCVar5 = (__this->fields)._evaluator;
        if (pCVar5 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
          pCVar4 = (pCVar5->fields)._start;
          if (pCVar4 == (CustomLogic_CustomLogicStartAst_o *)0x0) {
            return;
          }
          __this_00 = (pCVar4->fields).Classes;
          if (__this_00 !=
              (System_Collections_Generic_Dictionary_string__CustomLogicClassDefinitionAst__o *)0x0) {
            bVar2 = System_Collections_Generic_Dictionary_object__StyleComplexSelector_PseudoStateData___ContainsKey
                              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
                               (Il2CppObject *)"Main",
                               (MethodInfo_1455450 *)
                               MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicClassDefinitionAst_ContainsKey
                              );
            pSVar3 = "Main";
            if (!bVar2) {
              return;
            }
            if (Il2CppMethodInitialized_184346a29 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&
                         MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicClassInstance_ContainsKey
                        );
              il2cpp_codegen_initialize_runtime_metadata
                        (&
                         MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicClassInstance_get_Item
                        );
              Il2CppMethodInitialized_184346a29 = '\x01';
            }
            pCVar5 = (__this->fields)._evaluator;
            if (pCVar5 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
              __this_01 = (System_Collections_Generic_Dictionary_object__object__o *)
                          (pCVar5->fields)._staticClasses;
              if ((__this_01 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) ||
                 (bVar2 = System_Collections_Generic_Dictionary_object__StyleComplexSelector_PseudoStateData___ContainsKey
                                    ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_01,
                                     (Il2CppObject *)pSVar3,
                                     (MethodInfo_1455450 *)
                                     MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicClassInstance_ContainsKey
                                    ), !bVar2)) {
                value_00 = (CustomLogic_CustomLogicClassInstance_o *)0x0;
              }
              else {
                value_00 = System_Collections_Generic_Dictionary_object__object___get_Item
                                     (__this_01,(Il2CppObject *)pSVar3,
                                      (MethodInfo_147A5B0 *)
                                      MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicClassInstance_get_Item
                                     );
              }
              (__this->fields)._mainInstance = value_00;
              Il2CppCodeGenWriteBarrier(&(__this->fields)._mainInstance,value_00);
              return;
            }
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.OfflineEvaluator.OfflineCustomLogicEvaluator$$InitializeStaticClasses
// il2cpp: void CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator__InitializeStaticClasses (CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator_o* __this, const MethodInfo* method);
// 0x1820ebe20
// eh: try 0x1820ec160..0x1820eca9a -> pad 0x183331f00 (+10 call sites) catch Il2CppExceptionWrapper
// asm: 108 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1820ec159: nop dword ptr [rax]
// asm:   0x1820ec253: mov rdx, qword ptr [rip + 0x1fab41e]  ; MethodInfo_System_Collections_Generic_HashSet_Enumerator_string_Dispose
// asm:   0x1820ec25a: mov rcx, qword ptr [rsp + 0x38]
// asm:   0x1820ec25f: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x1820ec264: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x1820ec269: test rcx, rcx
// asm:   0x1820ec26c: jne 0x1820ec9fc
// asm:   0x1820ec272: xor r15d, r15d
// asm:   0x1820ec275: mov rsi, qword ptr [rsp + 0x180]
// asm:   0x1820ec27d: mov r14, qword ptr [rsp + 0x78]
// asm:   0x1820ec282: mov r13, qword ptr [rsp + 0x68]
// asm:   0x1820ec287: mov r12, qword ptr [rsp + 0x50]
// asm:   0x1820ec300: mov r13, qword ptr [rsp + 0x68]
// asm:   0x1820ec6c9: mov rdx, qword ptr [rip + 0x1fcd790]  ; MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_CustomLogicClassDefinition
// asm:   0x1820ec6d0: mov rcx, qword ptr [rsp + 0x38]
// asm:   0x1820ec6d5: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x1820ec6da: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x1820ec6df: test rcx, rcx
// asm:   0x1820ec6e2: jne 0x1820eca72
// asm:   0x1820ec6e8: xor r15d, r15d
// asm:   0x1820ec6eb: mov rsi, qword ptr [rsp + 0x180]
// asm:   0x1820ec6f3: mov r14, qword ptr [rsp + 0x78]
// asm:   0x1820ec6f8: mov r12, qword ptr [rsp + 0x70]
// asm:   0x1820ec7d9: mov rdx, qword ptr [rip + 0x1fcdbc0]  ; MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string_CustomLogicClassInstance
// asm:   0x1820ec7e0: mov rcx, qword ptr [rsp + 0x38]
// asm:   0x1820ec7e5: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x1820ec7ea: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x1820ec7ef: test rcx, rcx
// asm:   0x1820ec7f2: jne 0x1820eca7e
// asm:   0x1820ec7f8: xor r15d, r15d
// asm:   0x1820ec7fb: mov rsi, qword ptr [rsp + 0x180]
// asm:   0x1820ec803: mov r12, qword ptr [rsp + 0x70]
// asm:   0x1820ec8fd: nop dword ptr [rax]
// asm:   0x1820ec97c: mov rdx, qword ptr [rip + 0x1fbede5]  ; MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_CustomLogicSourceType_CustomLog
// asm:   0x1820ec983: mov rcx, qword ptr [rsp + 0x38]
// asm:   0x1820ec988: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x1820ec98d: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x1820ec992: test rcx, rcx
// asm:   0x1820ec995: jne 0x1820eca8a
// asm:   0x1820ec99b: xor r15d, r15d
// asm:   0x1820ec99e: mov rsi, qword ptr [rsp + 0x180]
// asm:   0x1820ec9a6: jmp 0x1820ec870
// asm:   0x1820ec9be: mov rdx, qword ptr [rip + 0x1fc959b]  ; MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string_Dictionary_CustomLogicSo
// asm:   0x1820ec9c5: mov rcx, qword ptr [rsp + 0x58]
// asm:   0x1820ec9ca: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x1820ec9cf: mov rcx, qword ptr [rsp + 0x50]
// asm:   0x1820ec9d4: test rcx, rcx
// asm:   0x1820ec9d7: jne 0x1820eca9a
// asm:   0x1820ec9fc: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x1820eca72: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x1820eca7e: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x1820eca8a: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x1820eca9a: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183331f00: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183331f05: push rbp
// asm:   0x183331f06: sub rsp, 0x30
// asm:   0x183331f0a: mov rbp, rdx
// asm:   0x183331f0d: mov rax, qword ptr [rbp + 0xf8]
// asm:   0x183331f14: mov rcx, qword ptr [rax]
// asm:   0x183331f17: mov qword ptr [rbp + 0x30], rcx
// asm:   0x183331f1b: movabs rax, 0
// asm:   0x183331f25: add rsp, 0x30
// asm:   0x183331f29: pop rbp
// asm:   0x183331f2a: ret 
// asm:   0x18333b5f0: mov qword ptr [rsp + 0x10], rdx
// asm:   0x18333b5f5: push rbp
// asm:   0x18333b5f6: sub rsp, 0x30
// asm:   0x18333b5fa: mov rbp, rdx
// asm:   0x18333b5fd: mov rax, qword ptr [rbp + 0x100]
// asm:   0x18333b604: mov rcx, qword ptr [rax]
// asm:   0x18333b607: mov qword ptr [rbp + 0x30], rcx
// asm:   0x18333b60b: movabs rax, 0
// asm:   0x18333b615: add rsp, 0x30
// asm:   0x18333b619: pop rbp
// asm:   0x18333b61a: ret 
// asm:   0x18333b6f0: mov qword ptr [rsp + 0x10], rdx
// asm:   0x18333b6f5: push rbp
// asm:   0x18333b6f6: sub rsp, 0x30
// asm:   0x18333b6fa: mov rbp, rdx
// asm:   0x18333b6fd: mov rax, qword ptr [rbp + 0x108]
// asm:   0x18333b704: mov rcx, qword ptr [rax]
// asm:   0x18333b707: mov qword ptr [rbp + 0x30], rcx
// asm:   0x18333b70b: movabs rax, 0
// asm:   0x18333b715: add rsp, 0x30
// asm:   0x18333b719: pop rbp
// asm:   0x18333b71a: ret 
// asm:   0x18333ea20: mov qword ptr [rsp + 0x10], rdx
// asm:   0x18333ea25: push rbp
// asm:   0x18333ea26: sub rsp, 0x30
// asm:   0x18333ea2a: mov rbp, rdx
// asm:   0x18333ea2d: mov rax, qword ptr [rbp + 0x110]
// asm:   0x18333ea34: mov rcx, qword ptr [rax]
// asm:   0x18333ea37: mov qword ptr [rbp + 0x30], rcx
// asm:   0x18333ea3b: movabs rax, 0
// asm:   0x18333ea45: add rsp, 0x30
// asm:   0x18333ea49: pop rbp
// asm:   0x18333ea4a: ret 
// asm:   0x18333ea50: mov qword ptr [rsp + 0x10], rdx
// asm:   0x18333ea55: push rbp
// asm:   0x18333ea56: sub rsp, 0x30
// asm:   0x18333ea5a: mov rbp, rdx
// asm:   0x18333ea5d: mov rax, qword ptr [rbp + 0x118]
// asm:   0x18333ea64: mov rcx, qword ptr [rax]
// asm:   0x18333ea67: mov qword ptr [rbp + 0x50], rcx
// asm:   0x18333ea6b: movabs rax, 0
// asm:   0x18333ea75: add rsp, 0x30
// asm:   0x18333ea79: pop rbp
// asm:   0x18333ea7a: ret 

void CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator__InitializeStaticClasses
               (CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator_o *__this,MethodInfo *method)

{
  byte bVar1;
  CustomLogic_CustomLogicEvaluator_o *pCVar2;
  System_Collections_Generic_Dictionary_object__object__o *staticClasses;
  System_Object_array *__this_00;
  System_Collections_Generic_HashSet_Vector2Int__o *__this_01;
  System_Collections_Generic_HashSet_object__o *pSVar3;
  System_Collections_Generic_Dictionary_string__CustomLogicClassDefinitionAst__o *__this_02;
  System_Collections_Generic_Dictionary_object__object__o *pSVar4;
  CustomLogic_CustomLogicToken_o *pCVar5;
  Il2CppObject *pIVar6;
  System_Collections_Generic_Dictionary_string__CustomLogicSourceType__o *pSVar7;
  bool bVar8;
  uint32_t key;
  CustomLogic_BuiltinClassInstance_o *value;
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *pSVar9;
  CustomLogic_CustomLogicClassDefinitionAst_o *pCVar10;
  int *piVar11;
  CustomLogic_CustomLogicClassInstance_o *pCVar12;
  System_Collections_Generic_Dictionary_TKey__TValue__o *pSVar13;
  CustomLogic_CustomLogicStartAst_o *pCVar14;
  UnityEngine_UIElements_TextureId_o local_res18 [2];
  UnityEngine_UIElements_TextureId_o local_res20 [2];
  undefined1 local_148 [16];
  System_Collections_Generic_Dictionary_TKey__TValue__o *local_138;
  System_Nullable_CustomLogicSourceType__Fields local_130;
  System_Object_array *local_128;
  UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *local_120;
  System_Nullable_CustomLogicSourceType__Fields local_118;
  CustomLogic_CustomLogicStartAst_o *local_110;
  System_Object_array *local_108;
  System_Collections_Generic_Dictionary_object__object__o *local_100;
  undefined1 local_f8 [8];
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *pSStack_f0;
  System_Collections_Generic_Dictionary_TKey__TValue__o *local_e8;
  undefined1 local_e0 [8];
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *pSStack_d8;
  System_Collections_Generic_Dictionary_TKey__TValue__o *local_d0;
  undefined1 local_c8 [8];
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *pSStack_c0;
  System_Collections_Generic_Dictionary_TKey__TValue__o *local_b8;
  undefined1 local_b0 [8];
  uint64_t uStack_a8;
  System_Collections_Generic_Dictionary_TKey__TValue__o *local_a0;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o local_98 [2];
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o local_58;
  
  if (Il2CppMethodInitialized_184346a26 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicBuiltinTypes);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_string_Dictionary_CustomLogicSourceType_CustomLogicClassIn_40c3730
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicSourceType_TryGetValue);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_CustomLogicSourceType_CustomLogicClassInstance_ctor
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicClassDefinitionAst_get_Item
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_string_Dictionary_CustomLogicSourceType_CustomLogicClassIn_40c3810
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicClassDefinitionAst_get_Keys
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicClassInstance_get_Values);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_string_Dictionary_CustomLogicSourceType_CustomLogicClassIn_40c38f0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_CustomLogicSourceType_CustomLogicClassInstance_get_Values
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_string_Dictionary_CustomLogicSourceType_CustomLogicClassIn_40c39d0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicClassInstance_set_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_CustomLogicSourceType_CustomLogicClassInstance_set_Item
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_Dictionary_CustomLogicSourceType_CustomLogicClassInstance)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string_CustomLogicClassInstance
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_CustomLogicClassDefinition
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Enumerator_string_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string_Dictionary_CustomLogicSo
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_CustomLogicSourceType_CustomLog
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_CustomLogicClassDefinition_40b9f40
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Enumerator_string_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string_Dictionary_CustomLogicSo_40b6040
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_CustomLogicSourceType_CustomLog_40ab848
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string_CustomLogicClassInstance_40ba480
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Enumerator_string_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_CustomLogicSourceType_CustomLog_40ab928
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string_CustomLogicClassInstance_40ba560
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string_Dictionary_CustomLogicSo_40b6120
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_CustomLogicClassDefinition_40ba020
              );
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Contains)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_string_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_string_CustomLogicClassDefinitionAst_GetEnum
              );
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_CustomLogicSourceType_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_CustomLogicSourceType_get_HasValue)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_CustomLogicSourceType_get_Value);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_string_CustomLogicClassInstance_GetEnumera
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_string_Dictionary_CustomLogicSourceType_Cu
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_CustomLogicSourceType_CustomLogicClassInst
              );
    il2cpp_codegen_initialize_runtime_metadata(&"Main");
    Il2CppMethodInitialized_184346a26 = '\x01';
  }
  local_f8 = (undefined1  [8])0x0;
  pSStack_f0 = (System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)0x0;
  local_e8 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_e0 = (undefined1  [8])0x0;
  pSStack_d8 = (System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)0x0;
  local_d0 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_130.hasValue = false;
  local_130._1_3_ = 0;
  local_130.value = 0;
  local_res20[0].fields.m_Index = (UnityEngine_UIElements_TextureId_Fields)0;
  local_118.hasValue = false;
  local_118._1_3_ = 0;
  local_118.value = 0;
  local_res18[0].fields.m_Index = (UnityEngine_UIElements_TextureId_Fields)0;
  local_c8 = (undefined1  [8])0x0;
  pSStack_c0 = (System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)0x0;
  local_b8 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_b0 = (undefined1  [8])0x0;
  uStack_a8 = 0;
  local_a0 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_98[0].fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_98[0].fields._index = 0;
  local_98[0].fields._version = 0;
  local_98[0].fields._currentValue = (Il2CppObject *)0x0;
  pCVar2 = (__this->fields)._evaluator;
  if (pCVar2 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
    pCVar14 = (pCVar2->fields)._start;
    pCVar2 = (__this->fields)._evaluator;
    staticClasses = (System_Collections_Generic_Dictionary_object__object__o *)(pCVar2->fields)._staticClasses
    ;
    __this_00 = (System_Object_array *)(pCVar2->fields)._namespacedStaticClasses;
    local_128 = __this_00;
    local_110 = pCVar14;
    if ((TypeInfo_CustomLogic_CustomLogicBuiltinTypes->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicBuiltinTypes);
    }
    __this_01 = (System_Collections_Generic_HashSet_Vector2Int__o *)
                TypeInfo_CustomLogic_CustomLogicBuiltinTypes->static_fields->StaticTypeNames;
    if (__this_01 != (System_Collections_Generic_HashSet_Vector2Int__o *)0x0) {
      local_100 = staticClasses;
      System_Collections_Generic_HashSet_Vector2Int___GetEnumerator
                ((System_Collections_Generic_HashSet_Enumerator_T__o *)local_148,__this_01,
                 (MethodInfo_175C200 *)MethodInfo_System_Collections_Generic_HashSet_string_GetEnumerator);
      local_f8 = (undefined1  [8])local_148._0_8_;
      pSStack_f0 = (System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)
                   local_148._8_8_;
      local_e8 = local_138;
      local_148._0_8_ = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
      local_148._8_8_ =
           (System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)local_f8;
      while (bVar8 = System_Collections_Generic_HashSet_Enumerator_object___MoveNext
                               ((System_Collections_Generic_HashSet_Enumerator_T__o *)local_f8,
                                (MethodInfo_15381F0 *)
                                MethodInfo_System_Collections_Generic_HashSet_Enumerator_string_MoveNext),
            pSVar13 = local_e8, bVar8) {
        if ((TypeInfo_CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator->_2).cctor_finished_or_no_cctor
            == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator);
        }
        pSVar3 = (System_Collections_Generic_HashSet_object__o *)
                 TypeInfo_CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator->static_fields->
                 OfflineCompatibleBuiltins;
        if (pSVar3 == (System_Collections_Generic_HashSet_object__o *)0x0) {
          ThrowNullReferenceException();
        }
        bVar8 = System_Collections_Generic_HashSet_object___Contains
                          (pSVar3,(Il2CppObject *)pSVar13,
                           (MethodInfo_1759E40 *)MethodInfo_System_Collections_Generic_HashSet_string_Contains
                          );
        if (bVar8) {
          if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
          }
          local_108 = TypeInfo_CustomLogic_CustomLogicEvaluator->static_fields->EmptyArgs;
          if ((TypeInfo_CustomLogic_CustomLogicBuiltinTypes->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicBuiltinTypes);
          }
          value = CustomLogic_CustomLogicBuiltinTypes__CreateClassInstance
                            ((System_String_o *)pSVar13,local_108,(MethodInfo *)0x0);
          if (staticClasses == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
            ThrowNullReferenceException();
          }
          System_Collections_Generic_Dictionary_object__object___set_Item
                    (staticClasses,(Il2CppObject *)pSVar13,(Il2CppObject *)value,
                     (MethodInfo_147A7F0 *)
                     MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicClassInstance_set_Item
                    );
        }
      }
      System_Collections_Generic_HashSet_Enumerator_object___Dispose
                ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_f8,
                 MethodInfo_System_Collections_Generic_HashSet_Enumerator_string_Dispose);
      if (((pCVar14 != (CustomLogic_CustomLogicStartAst_o *)0x0) &&
          (__this_02 = (pCVar14->fields).Classes,
          __this_02 != (System_Collections_Generic_Dictionary_string__CustomLogicClassDefinitionAst__o *)0x0))
         && (pSVar9 = (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)
                      System_Collections_Generic_Dictionary_fsPortableReflection_AttributeQuery__object___System_Collections_Generic_IReadOnlyDictionary_TKey_TValue__get_Keys
                                ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_02,
                                 (MethodInfo_13C6500 *)
                                 MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicClassDefinitionAst_get_Keys
                                ),
            pSVar9 != (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)0x0)) {
        local_108 = __this_00;
        System_Collections_Generic_Dictionary_ValueCollection_fsPortableReflection_AttributeQuery__object___GetEnumerator
                  ((System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)
                   local_148,pSVar9,
                   (MethodInfo_F1E4D0 *)
                   MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_string_CustomLogicClassDefinitionAst_GetEnum
                  );
        local_e0 = (undefined1  [8])local_148._0_8_;
        pSStack_d8 = (System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)
                     local_148._8_8_;
        local_d0 = local_138;
        local_148._0_8_ = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
        local_148._8_8_ =
             (System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)local_e0;
        while (bVar8 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__StyleComplexSelector_PseudoStateData___MoveNext
                                 ((System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o
                                   *)local_e0,
                                  (MethodInfo_156BDD0 *)
                                  MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_CustomLogicClassDefinition_40b9f40
                                 ), pSVar13 = local_d0, bVar8) {
          bVar8 = System_String__op_Equality
                            ((System_String_o *)local_d0,"Main",(MethodInfo *)0x0);
          if (bVar8) {
            CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator__CreateStaticClassInternal
                      (__this,(System_String_o *)pSVar13,
                       (System_Collections_Generic_Dictionary_string__CustomLogicClassInstance__o *)
                       staticClasses,(MethodInfo *)0x0);
          }
          else {
            pSVar4 = (System_Collections_Generic_Dictionary_object__object__o *)(pCVar14->fields).Classes;
            if (pSVar4 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
              ThrowNullReferenceException();
            }
            pCVar10 = System_Collections_Generic_Dictionary_object__object___get_Item
                                (pSVar4,(Il2CppObject *)pSVar13,
                                 (MethodInfo_147A5B0 *)
                                 MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicClassDefinitionAst_get_Item
                                );
            if (pCVar10 == (CustomLogic_CustomLogicClassDefinitionAst_o *)0x0) {
              ThrowNullReferenceException();
            }
            pCVar5 = (pCVar10->fields).Token;
            if (pCVar5 == (CustomLogic_CustomLogicToken_o *)0x0) {
              ThrowNullReferenceException();
            }
            pIVar6 = (pCVar5->fields).Value;
            if (pIVar6 == (Il2CppObject *)0x0) {
              ThrowNullReferenceException();
            }
            if ((pIVar6->klass->_1).element_class != *(Il2CppClass **)(g_data_184354e08 + 0x40)) {
              il2cpp_codegen_raise_invalid_cast_exception(pIVar6,g_data_184354e08);
            }
            piVar11 = il2cpp_object_unbox(pIVar6);
            if (*piVar11 == 2) {
              local_130.hasValue = false;
              local_130._1_3_ = 0;
              local_130.value = 0;
              pSVar7 = (pCVar14->fields).ClassNamespaces;
              if (pSVar7 == (System_Collections_Generic_Dictionary_string__CustomLogicSourceType__o *)0x0) {
                ThrowNullReferenceException();
              }
              bVar8 = System_Collections_Generic_Dictionary_object__TextureId___TryGetValue
                                ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar7,
                                 (Il2CppObject *)pSVar13,local_res20,
                                 (MethodInfo_1461BD0 *)
                                 MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicSourceType_TryGetValue
                                );
              if (bVar8) {
                System_Data_SqlTypes_SqlInt32___ctor_ae2660
                          ((System_Data_SqlTypes_SqlInt32_o *)&local_130,
                           (int32_t)local_res20[0].fields.m_Index,
                           MethodInfo_System_Nullable_CustomLogicSourceType_ctor);
              }
              pCVar2 = (__this->fields)._evaluator;
              if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
              }
              if (pCVar2 == (CustomLogic_CustomLogicEvaluator_o *)0x0) {
                ThrowNullReferenceException();
              }
              pCVar12 = CustomLogic_CustomLogicEvaluator__CreateClassInstance_20d7780
                                  (pCVar2,(System_String_o *)pSVar13,
                                   TypeInfo_CustomLogic_CustomLogicEvaluator->static_fields->EmptyArgs,false,
                                   (System_Nullable_CustomLogicSourceType__o)local_130,(MethodInfo *)0x0);
              if (pCVar12 == (CustomLogic_CustomLogicClassInstance_o *)0x0) {
                ThrowNullReferenceException();
              }
              (pCVar12->fields)._Namespace_k__BackingField.fields = local_130;
              if ((TypeInfo_CustomLogic_CustomLogicBuiltinTypes->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicBuiltinTypes)
                ;
              }
              pSVar3 = (System_Collections_Generic_HashSet_object__o *)
                       TypeInfo_CustomLogic_CustomLogicBuiltinTypes->static_fields->StaticTypeNames;
              if (pSVar3 == (System_Collections_Generic_HashSet_object__o *)0x0) {
                ThrowNullReferenceException();
              }
              bVar8 = System_Collections_Generic_HashSet_object___Contains
                                (pSVar3,(Il2CppObject *)pSVar13,
                                 (MethodInfo_1759E40 *)
                                 MethodInfo_System_Collections_Generic_HashSet_string_Contains);
              if (bVar8) {
                if (__this_00 == (System_Object_array *)0x0) {
                  ThrowNullReferenceException();
                }
                bVar8 = System_Collections_Generic_Dictionary_object__StyleComplexSelector_PseudoStateData___ContainsKey
                                  ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
                                   (Il2CppObject *)pSVar13,
                                   (MethodInfo_1455450 *)
                                   MethodInfo_System_Collections_Generic_Dictionary_string_Dictionary_CustomLogicSourceType_CustomLogicClassIn_40c3730
                                  );
                if (!bVar8) {
                  local_128 = (System_Object_array *)
                              il2cpp_codegen_object_new
                                        ((Il2CppClass *)
                                         TypeInfo_System_Collections_Generic_Dictionary_CustomLogicSourceType_CustomLogicClassInstance
                                        );
                  System_Collections_Generic_Dictionary_Int32Enum__float____ctor
                            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)local_128,
                             (MethodInfo_14421B0 *)
                             MethodInfo_System_Collections_Generic_Dictionary_CustomLogicSourceType_CustomLogicClassInstance_ctor
                            );
                  System_Collections_Generic_Dictionary_object__object___set_Item
                            ((System_Collections_Generic_Dictionary_object__object__o *)__this_00,
                             (Il2CppObject *)pSVar13,&local_128->obj,
                             (MethodInfo_147A7F0 *)
                             MethodInfo_System_Collections_Generic_Dictionary_string_Dictionary_CustomLogicSourceType_CustomLogicClassIn_40c39d0
                            );
                }
                pCVar14 = local_110;
                if (local_130.hasValue != false) {
                  pSVar13 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)
                            System_Collections_Generic_Dictionary_object__object___get_Item
                                      ((System_Collections_Generic_Dictionary_object__object__o *)__this_00,
                                       (Il2CppObject *)pSVar13,
                                       (MethodInfo_147A5B0 *)
                                       MethodInfo_System_Collections_Generic_Dictionary_string_Dictionary_CustomLogicSourceType_CustomLogicClassIn_40c3810
                                      );
                  key = System_Nullable_uint___get_Value
                                  ((System_Nullable_uint__o *)&local_130,
                                   (MethodInfo_AE29B0 *)
                                   MethodInfo_System_Nullable_CustomLogicSourceType_get_Value);
                  if (pSVar13 == (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) {
                    ThrowNullReferenceException();
                  }
                  System_Collections_Generic_Dictionary_Int32Enum__object___set_Item
                            (pSVar13,key,(Il2CppObject *)pCVar12,
                             (MethodInfo_1455210 *)
                             MethodInfo_System_Collections_Generic_Dictionary_CustomLogicSourceType_CustomLogicClassInstance_set_Item
                            );
                  pCVar14 = local_110;
                }
              }
              else {
                if (staticClasses == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                  ThrowNullReferenceException();
                }
                System_Collections_Generic_Dictionary_object__object___set_Item
                          (staticClasses,(Il2CppObject *)pSVar13,(Il2CppObject *)pCVar12,
                           (MethodInfo_147A7F0 *)
                           MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicClassInstance_set_Item
                          );
                pCVar14 = local_110;
              }
            }
            else {
              pSVar4 = (System_Collections_Generic_Dictionary_object__object__o *)(pCVar14->fields).Classes;
              if (pSVar4 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                ThrowNullReferenceException();
              }
              pCVar10 = System_Collections_Generic_Dictionary_object__object___get_Item
                                  (pSVar4,(Il2CppObject *)pSVar13,
                                   (MethodInfo_147A5B0 *)
                                   MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicClassDefinitionAst_get_Item
                                  );
              if (pCVar10 == (CustomLogic_CustomLogicClassDefinitionAst_o *)0x0) {
                ThrowNullReferenceException();
              }
              pCVar5 = (pCVar10->fields).Token;
              if (pCVar5 == (CustomLogic_CustomLogicToken_o *)0x0) {
                ThrowNullReferenceException();
              }
              pIVar6 = (pCVar5->fields).Value;
              if (pIVar6 == (Il2CppObject *)0x0) {
                ThrowNullReferenceException();
              }
              if ((pIVar6->klass->_1).element_class != *(Il2CppClass **)(g_data_184354e08 + 0x40)) {
                il2cpp_codegen_raise_invalid_cast_exception(pIVar6,g_data_184354e08);
              }
              piVar11 = il2cpp_object_unbox(pIVar6);
              if (*piVar11 == 3) {
                local_118.hasValue = false;
                local_118._1_3_ = 0;
                local_118.value = 0;
                pSVar7 = (pCVar14->fields).ClassNamespaces;
                if (pSVar7 == (System_Collections_Generic_Dictionary_string__CustomLogicSourceType__o *)0x0) {
                  ThrowNullReferenceException();
                }
                bVar8 = System_Collections_Generic_Dictionary_object__TextureId___TryGetValue
                                  ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar7,
                                   (Il2CppObject *)pSVar13,local_res18,
                                   (MethodInfo_1461BD0 *)
                                   MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicSourceType_TryGetValue
                                  );
                if (bVar8) {
                  System_Data_SqlTypes_SqlInt32___ctor_ae2660
                            ((System_Data_SqlTypes_SqlInt32_o *)&local_118,
                             (int32_t)local_res18[0].fields.m_Index,
                             MethodInfo_System_Nullable_CustomLogicSourceType_ctor);
                }
                local_128 = (System_Object_array *)(__this->fields)._evaluator;
                if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
                }
                if (local_128 == (System_Object_array *)0x0) {
                  ThrowNullReferenceException();
                }
                pCVar12 = CustomLogic_CustomLogicEvaluator__CreateClassInstance_20d7780
                                    ((CustomLogic_CustomLogicEvaluator_o *)local_128,
                                     (System_String_o *)pSVar13,
                                     TypeInfo_CustomLogic_CustomLogicEvaluator->static_fields->EmptyArgs,false
                                     ,(System_Nullable_CustomLogicSourceType__o)local_118,(MethodInfo *)0x0);
                if (pCVar12 == (CustomLogic_CustomLogicClassInstance_o *)0x0) {
                  ThrowNullReferenceException();
                }
                (pCVar12->fields)._Namespace_k__BackingField.fields = local_118;
                if (staticClasses == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                  ThrowNullReferenceException();
                }
                System_Collections_Generic_Dictionary_object__object___set_Item
                          (staticClasses,(Il2CppObject *)pSVar13,(Il2CppObject *)pCVar12,
                           (MethodInfo_147A7F0 *)
                           MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicClassInstance_set_Item
                          );
              }
            }
          }
        }
        System_Configuration_ConfigurationCollectionAttribute___ctor
                  ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_e0,
                   MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_CustomLogicClassDefinition
                  );
        if ((staticClasses != (System_Collections_Generic_Dictionary_object__object__o *)0x0) &&
           (pSVar9 = (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)
                     System_Collections_Generic_Dictionary_fsPortableReflection_AttributeQuery__object___System_Collections_Generic_IReadOnlyDictionary_TKey_TValue__get_Values
                               ((System_Collections_Generic_Dictionary_TKey__TValue__o *)staticClasses,
                                (MethodInfo_13C65A0 *)
                                MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicClassInstance_get_Values
                               ),
           pSVar9 != (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)0x0)) {
          System_Collections_Generic_Dictionary_ValueCollection_fsPortableReflection_AttributeQuery__object___GetEnumerator
                    ((System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)
                     local_148,pSVar9,
                     (MethodInfo_F1E4D0 *)
                     MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_string_CustomLogicClassInstance_GetEnumera
                    );
          local_c8 = (undefined1  [8])local_148._0_8_;
          pSStack_c0 = (System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)
                       local_148._8_8_;
          local_b8 = local_138;
          local_148._0_8_ = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
          local_148._8_8_ =
               (System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)local_c8;
label_1820ec760:
          bVar8 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_PhotonNetwork_RaiseEventBatch__object___MoveNext
                            ((System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o
                              *)local_c8,
                             (MethodInfo_155CFB0 *)
                             MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string_CustomLogicClassInstance_40ba480
                            );
          if (bVar8) {
            if (local_b8 != (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0)
            goto code_r0x0001820ec785;
            goto label_1820ec7b1;
          }
          System_Configuration_ConfigurationCollectionAttribute___ctor
                    ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_c8,
                     MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string_CustomLogicClassInstance
                    );
          if ((__this_00 != (System_Object_array *)0x0) &&
             (pSVar9 = (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)
                       System_Collections_Generic_Dictionary_fsPortableReflection_AttributeQuery__object___System_Collections_Generic_IReadOnlyDictionary_TKey_TValue__get_Values
                                 ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
                                  (MethodInfo_13C65A0 *)
                                  MethodInfo_System_Collections_Generic_Dictionary_string_Dictionary_CustomLogicSourceType_CustomLogicClassIn_40c38f0
                                 ),
             pSVar9 != (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)0x0)) {
            System_Collections_Generic_Dictionary_ValueCollection_fsPortableReflection_AttributeQuery__object___GetEnumerator
                      ((System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)
                       local_148,pSVar9,
                       (MethodInfo_F1E4D0 *)
                       MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_string_Dictionary_CustomLogicSourceType_Cu
                      );
            local_b0 = (undefined1  [8])local_148._0_8_;
            uStack_a8 = local_148._8_8_;
            local_a0 = local_138;
            local_128 = (System_Object_array *)0x0;
            local_120 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_b0;
            do {
              bVar8 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_PhotonNetwork_RaiseEventBatch__object___MoveNext
                                ((System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o
                                  *)local_b0,
                                 (MethodInfo_155CFB0 *)
                                 MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string_Dictionary_CustomLogicSo_40b6040
                                );
              if (!bVar8) {
                System_Configuration_ConfigurationCollectionAttribute___ctor
                          (local_120,
                           MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string_Dictionary_CustomLogicSo
                          );
                return;
              }
              if (local_a0 == (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) {
                ThrowNullReferenceException();
              }
              pSVar9 = (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)
                       System_Collections_Generic_Dictionary_fsPortableReflection_AttributeQuery__object___System_Collections_Generic_IReadOnlyDictionary_TKey_TValue__get_Values
                                 (local_a0,(MethodInfo_13C65A0 *)
                                           MethodInfo_System_Collections_Generic_Dictionary_CustomLogicSourceType_CustomLogicClassInstance_get_Values
                                 );
              if (pSVar9 == (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)0x0) {
                ThrowNullReferenceException();
              }
              System_Collections_Generic_Dictionary_ValueCollection_fsPortableReflection_AttributeQuery__object___GetEnumerator
                        (&local_58,pSVar9,
                         (MethodInfo_F1E4D0 *)
                         MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_CustomLogicSourceType_CustomLogicClassInst
                        );
              local_98[0].fields._dictionary = local_58.fields._dictionary;
              local_98[0].fields._index = local_58.fields._index;
              local_98[0].fields._version = local_58.fields._version;
              local_98[0].fields._currentValue = local_58.fields._currentValue;
              local_148._0_8_ = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
              local_148._8_8_ = local_98;
label_1820ec900:
              bVar8 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_PhotonNetwork_RaiseEventBatch__object___MoveNext
                                (local_98,(MethodInfo_155CFB0 *)
                                          MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_CustomLogicSourceType_CustomLog_40ab848
                                );
              if (bVar8) {
                if ((CustomLogic_CustomLogicClassInstance_o *)local_98[0].fields._currentValue !=
                    (CustomLogic_CustomLogicClassInstance_o *)0x0) goto code_r0x0001820ec925;
                goto label_1820ec951;
              }
              System_Configuration_ConfigurationCollectionAttribute___ctor
                        ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_98,
                         MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_CustomLogicSourceType_CustomLog
                        );
            } while( true );
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
code_r0x0001820ec785:
  bVar1 = (TypeInfo_CustomLogic_BuiltinClassInstance->_2).typeHierarchyDepth;
  if (((local_b8->klass->_2).typeHierarchyDepth < bVar1) ||
     ((local_b8->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
      (Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance)) {
label_1820ec7b1:
    pCVar2 = (__this->fields)._evaluator;
    if (pCVar2 == (CustomLogic_CustomLogicEvaluator_o *)0x0) {
      ThrowNullReferenceException();
    }
    CustomLogic_CustomLogicEvaluator__RunAssignmentsClassInstance
              (pCVar2,(CustomLogic_CustomLogicClassInstance_o *)local_b8,(MethodInfo *)0x0);
  }
  goto label_1820ec760;
code_r0x0001820ec925:
  bVar1 = (TypeInfo_CustomLogic_BuiltinClassInstance->_2).typeHierarchyDepth;
  if (((((CustomLogic_CustomLogicClassInstance_c *)(local_98[0].fields._currentValue)->klass)->_2).
       typeHierarchyDepth < bVar1) ||
     ((((CustomLogic_CustomLogicClassInstance_c *)(local_98[0].fields._currentValue)->klass)->_2).
      typeHierarchy[(ulonglong)bVar1 - 1] != (Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance)) {
label_1820ec951:
    pCVar2 = (__this->fields)._evaluator;
    if (pCVar2 == (CustomLogic_CustomLogicEvaluator_o *)0x0) {
      ThrowNullReferenceException();
    }
    CustomLogic_CustomLogicEvaluator__RunAssignmentsClassInstance
              (pCVar2,(CustomLogic_CustomLogicClassInstance_o *)local_98[0].fields._currentValue,
               (MethodInfo *)0x0);
  }
  goto label_1820ec900;
}


// CustomLogic.OfflineEvaluator.OfflineCustomLogicEvaluator$$CallInitOnStaticClasses
// il2cpp: void CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator__CallInitOnStaticClasses (CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator_o* __this, const MethodInfo* method);
// 0x1820eb210
// eh: try 0x1820eb2f0..0x1820eb37c -> pad 0x183315a20 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 19 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1820eb2ef: nop 
// asm:   0x1820eb34b: mov rdx, qword ptr [rip + 0x1fcf04e]  ; MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string_CustomLogicClassInstance
// asm:   0x1820eb352: mov rcx, qword ptr [rsp + 0x40]
// asm:   0x1820eb357: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x1820eb35c: mov rcx, qword ptr [rsp + 0x38]
// asm:   0x1820eb361: test rcx, rcx
// asm:   0x1820eb364: jne 0x1820eb37c
// asm:   0x1820eb37c: call 0x1804171b0  ; il2cpp_codegen_rethrow()
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

void CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator__CallInitOnStaticClasses
               (CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator_o *__this,MethodInfo *method)

{
  CustomLogic_CustomLogicEvaluator_o *pCVar1;
  System_Collections_Generic_Dictionary_string__CustomLogicClassInstance__o *__this_00;
  Il2CppObject *pIVar2;
  bool bVar3;
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *__this_01;
  undefined1 local_60 [16];
  CustomLogic_CustomLogicClassInstance_o *local_50;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o local_48;
  
  if (Il2CppMethodInitialized_184346a27 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicClassInstance_get_Values);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string_CustomLogicClassInstance
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string_CustomLogicClassInstance_40ba480
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string_CustomLogicClassInstance_40ba560
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_string_CustomLogicClassInstance_GetEnumera
              );
    il2cpp_codegen_initialize_runtime_metadata(&"Init");
    Il2CppMethodInitialized_184346a27 = '\x01';
  }
  local_48.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._currentValue = (Il2CppObject *)0x0;
  pCVar1 = (__this->fields)._evaluator;
  if ((pCVar1 != (CustomLogic_CustomLogicEvaluator_o *)0x0) &&
     (__this_00 = (pCVar1->fields)._staticClasses,
     __this_00 != (System_Collections_Generic_Dictionary_string__CustomLogicClassInstance__o *)0x0)) {
    __this_01 = (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)
                System_Collections_Generic_Dictionary_fsPortableReflection_AttributeQuery__object___System_Collections_Generic_IReadOnlyDictionary_TKey_TValue__get_Values
                          ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
                           (MethodInfo_13C65A0 *)
                           MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicClassInstance_get_Values
                          );
    if (__this_01 != (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)0x0) {
      System_Collections_Generic_Dictionary_ValueCollection_fsPortableReflection_AttributeQuery__object___GetEnumerator
                ((System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)local_60,
                 __this_01,
                 (MethodInfo_F1E4D0 *)
                 MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_string_CustomLogicClassInstance_GetEnumera
                );
      local_48.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)local_60._0_8_;
      local_48.fields._index = local_60._8_4_;
      local_48.fields._version = local_60._12_4_;
      local_48.fields._currentValue = (Il2CppObject *)local_50;
      local_60._0_8_ = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
      local_60._8_8_ = &local_48;
      while( true ) {
        bVar3 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_PhotonNetwork_RaiseEventBatch__object___MoveNext
                          (&local_48,
                           (MethodInfo_155CFB0 *)
                           MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string_CustomLogicClassInstance_40ba480
                          );
        pIVar2 = local_48.fields._currentValue;
        if (!bVar3) {
          System_Configuration_ConfigurationCollectionAttribute___ctor
                    ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_48,
                     MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string_CustomLogicClassInstance
                    );
          return;
        }
        pCVar1 = (__this->fields)._evaluator;
        if (pCVar1 == (CustomLogic_CustomLogicEvaluator_o *)0x0) break;
        CustomLogic_CustomLogicEvaluator__EvaluateMethod
                  (pCVar1,(CustomLogic_CustomLogicClassInstance_o *)local_48.fields._currentValue,
                   "Init",(System_Object_array *)0x0,0,(MethodInfo *)0x0);
        if ((CustomLogic_CustomLogicClassInstance_o *)pIVar2 == (CustomLogic_CustomLogicClassInstance_o *)0x0)
        {
          ThrowNullReferenceException();
        }
        ((CustomLogic_CustomLogicClassInstance_Fields *)((longlong)pIVar2 + 0x10))->Inited = true;
      }
      ThrowNullReferenceException();
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.OfflineEvaluator.OfflineCustomLogicEvaluator$$CreateStaticClassInternal
// il2cpp: void CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator__CreateStaticClassInternal (CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator_o* __this, System_String_o* className, System_Collections_Generic_Dictionary_string__CustomLogicClassInstance__o* staticClasses, const MethodInfo* method);
// 0x1820eb8c0

void CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator__CreateStaticClassInternal
               (CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator_o *__this,System_String_o *className,
               System_Collections_Generic_Dictionary_string__CustomLogicClassInstance__o *staticClasses,
               MethodInfo *method)

{
  CustomLogic_CustomLogicEvaluator_o *pCVar1;
  CustomLogic_CustomLogicStartAst_o *pCVar2;
  System_Collections_Generic_Dictionary_string__CustomLogicSourceType__o *__this_00;
  bool bVar3;
  CustomLogic_CustomLogicClassInstance_o *value;
  UnityEngine_UIElements_TextureId_o local_res10 [2];
  System_Nullable_CustomLogicSourceType__Fields local_res18 [2];
  
  if (Il2CppMethodInitialized_184346a28 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicClassInstance_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicClassInstance_ContainsKey);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicSourceType_TryGetValue);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_CustomLogicSourceType_ctor);
    Il2CppMethodInitialized_184346a28 = '\x01';
  }
  local_res18[0].hasValue = false;
  local_res18[0]._1_3_ = 0;
  local_res18[0].value = 0;
  local_res10[0].fields.m_Index = (UnityEngine_UIElements_TextureId_Fields)0;
  if (staticClasses != (System_Collections_Generic_Dictionary_string__CustomLogicClassInstance__o *)0x0) {
    bVar3 = System_Collections_Generic_Dictionary_object__StyleComplexSelector_PseudoStateData___ContainsKey
                      ((System_Collections_Generic_Dictionary_TKey__TValue__o *)staticClasses,
                       (Il2CppObject *)className,
                       (MethodInfo_1455450 *)
                       MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicClassInstance_ContainsKey
                      );
    if (bVar3) {
      return;
    }
    pCVar1 = (__this->fields)._evaluator;
    if (pCVar1 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
      pCVar2 = (pCVar1->fields)._start;
      local_res18[0].hasValue = false;
      local_res18[0]._1_3_ = 0;
      local_res18[0].value = 0;
      if ((pCVar2 != (CustomLogic_CustomLogicStartAst_o *)0x0) &&
         (__this_00 = (pCVar2->fields).ClassNamespaces,
         __this_00 != (System_Collections_Generic_Dictionary_string__CustomLogicSourceType__o *)0x0)) {
        bVar3 = System_Collections_Generic_Dictionary_object__TextureId___TryGetValue
                          ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
                           (Il2CppObject *)className,local_res10,
                           (MethodInfo_1461BD0 *)
                           MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicSourceType_TryGetValue
                          );
        if (bVar3) {
          System_Data_SqlTypes_SqlInt32___ctor_ae2660
                    ((System_Data_SqlTypes_SqlInt32_o *)local_res18,(int32_t)local_res10[0].fields.m_Index,
                     MethodInfo_System_Nullable_CustomLogicSourceType_ctor);
        }
        pCVar1 = (__this->fields)._evaluator;
        if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
        }
        if ((pCVar1 != (CustomLogic_CustomLogicEvaluator_o *)0x0) &&
           (value = CustomLogic_CustomLogicEvaluator__CreateClassInstance_20d7780
                              (pCVar1,className,
                               TypeInfo_CustomLogic_CustomLogicEvaluator->static_fields->EmptyArgs,false,
                               (System_Nullable_CustomLogicSourceType__o)local_res18[0],(MethodInfo *)0x0),
           value != (CustomLogic_CustomLogicClassInstance_o *)0x0)) {
          (value->fields)._Namespace_k__BackingField.fields = local_res18[0];
          System_Collections_Generic_Dictionary_object__object___Add
                    ((System_Collections_Generic_Dictionary_object__object__o *)staticClasses,
                     (Il2CppObject *)className,(Il2CppObject *)value,
                     (MethodInfo_146B4B0 *)
                     MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicClassInstance_Add);
          return;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.OfflineEvaluator.OfflineCustomLogicEvaluator$$RunAssignmentsClassInstance
// il2cpp: void CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator__RunAssignmentsClassInstance (CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator_o* __this, CustomLogic_CustomLogicClassInstance_o* classInstance, const MethodInfo* method);
// 0x1820ecd00

void CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator__RunAssignmentsClassInstance
               (CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator_o *__this,
               CustomLogic_CustomLogicClassInstance_o *classInstance,MethodInfo *method)

{
  CustomLogic_CustomLogicEvaluator_o *__this_00;
  
  __this_00 = (__this->fields)._evaluator;
  if (__this_00 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
    CustomLogic_CustomLogicEvaluator__RunAssignmentsClassInstance(__this_00,classInstance,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.OfflineEvaluator.OfflineCustomLogicEvaluator$$GetStartAst
// il2cpp: CustomLogic_CustomLogicStartAst_o* CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator__GetStartAst (CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator_o* __this, const MethodInfo* method);
// 0x181a4d2b0

CustomLogic_CustomLogicStartAst_o*
CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator__GetStartAst(CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator_o* __this, MethodInfo* method)

{
  System_Resources_ResourceManager_o *pSVar1;
  
  pSVar1 = (__this->fields)._evaluator;
  if (pSVar1 != (System_Resources_ResourceManager_o *)0x0) {
    return (pSVar1->fields)._userResourceSet;
  }
  ThrowNullReferenceException();
}


// CustomLogic.OfflineEvaluator.OfflineCustomLogicEvaluator$$GetStaticClassesDictionary
// il2cpp: System_Collections_Generic_Dictionary_string__CustomLogicClassInstance__o* CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator__GetStaticClassesDictionary (CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator_o* __this, const MethodInfo* method);
// 0x181a4d270

System_Collections_Generic_Dictionary_string__CustomLogicClassInstance__o*
CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator__GetStaticClassesDictionary(CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator_o* __this, MethodInfo* method)

{
  ExitGames_Client_Photon_PhotonPeer_o *pEVar1;
  
  pEVar1 = (__this->fields)._evaluator;
  if (pEVar1 != (ExitGames_Client_Photon_PhotonPeer_o *)0x0) {
    return (pEVar1->fields)._Listener_k__BackingField;
  }
  ThrowNullReferenceException();
}


// CustomLogic.OfflineEvaluator.OfflineCustomLogicEvaluator$$GetStaticClass
// il2cpp: CustomLogic_CustomLogicClassInstance_o* CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator__GetStaticClass (CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator_o* __this, System_String_o* className, const MethodInfo* method);
// 0x1820ebcc0

CustomLogic_CustomLogicClassInstance_o *
CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator__GetStaticClass
          (CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator_o *__this,System_String_o *className,
          MethodInfo *method)

{
  CustomLogic_CustomLogicEvaluator_o *pCVar1;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  bool bVar2;
  CustomLogic_CustomLogicClassInstance_o *pCVar3;
  
  if (Il2CppMethodInitialized_184346a29 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicClassInstance_ContainsKey);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicClassInstance_get_Item);
    Il2CppMethodInitialized_184346a29 = '\x01';
  }
  pCVar1 = (__this->fields)._evaluator;
  if (pCVar1 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
    __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)(pCVar1->fields)._staticClasses;
    if (__this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      bVar2 = System_Collections_Generic_Dictionary_object__StyleComplexSelector_PseudoStateData___ContainsKey
                        ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
                         (Il2CppObject *)className,
                         (MethodInfo_1455450 *)
                         MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicClassInstance_ContainsKey
                        );
      if (bVar2) {
        pCVar3 = System_Collections_Generic_Dictionary_object__object___get_Item
                           (__this_00,(Il2CppObject *)className,
                            (MethodInfo_147A5B0 *)
                            MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicClassInstance_get_Item
                           );
        return pCVar3;
      }
    }
    return (CustomLogic_CustomLogicClassInstance_o *)0x0;
  }
  ThrowNullReferenceException();
}


// CustomLogic.OfflineEvaluator.OfflineCustomLogicEvaluator$$CreateStaticClass
// il2cpp: void CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator__CreateStaticClass (CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator_o* __this, System_String_o* className, const MethodInfo* method);
// 0x1820eba30

void CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator__CreateStaticClass
               (CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator_o *__this,System_String_o *className,
               MethodInfo *method)

{
  CustomLogic_CustomLogicEvaluator_o *pCVar1;
  
  pCVar1 = (__this->fields)._evaluator;
  if (pCVar1 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
    CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator__CreateStaticClassInternal
              (__this,className,(pCVar1->fields)._staticClasses,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.OfflineEvaluator.OfflineCustomLogicEvaluator$$HasMainClass
// il2cpp: bool CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator__HasMainClass (CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator_o* __this, const MethodInfo* method);
// 0x1820ebda0

bool CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator__HasMainClass
               (CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator_o *__this,MethodInfo *method)

{
  CustomLogic_CustomLogicEvaluator_o *pCVar1;
  CustomLogic_CustomLogicStartAst_o *pCVar2;
  System_Collections_Generic_Dictionary_string__CustomLogicClassDefinitionAst__o *__this_00;
  bool bVar3;
  
  if (Il2CppMethodInitialized_184346a2a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicClassDefinitionAst_ContainsKey
              );
    il2cpp_codegen_initialize_runtime_metadata(&"Main");
    Il2CppMethodInitialized_184346a2a = '\x01';
  }
  pCVar1 = (__this->fields)._evaluator;
  if (pCVar1 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
    pCVar2 = (pCVar1->fields)._start;
    if (pCVar2 == (CustomLogic_CustomLogicStartAst_o *)0x0) {
      return false;
    }
    __this_00 = (pCVar2->fields).Classes;
    if (__this_00 != (System_Collections_Generic_Dictionary_string__CustomLogicClassDefinitionAst__o *)0x0) {
      bVar3 = System_Collections_Generic_Dictionary_object__StyleComplexSelector_PseudoStateData___ContainsKey
                        ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
                         (Il2CppObject *)"Main",
                         (MethodInfo_1455450 *)
                         MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicClassDefinitionAst_ContainsKey
                        );
      return bVar3;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.OfflineEvaluator.OfflineCustomLogicEvaluator$$GetMainInstance
// il2cpp: CustomLogic_CustomLogicClassInstance_o* CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator__GetMainInstance (CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator_o* __this, const MethodInfo* method);
// 0x1805852b0

CustomLogic_CustomLogicClassInstance_o*
CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator__GetMainInstance(CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator_o* __this, MethodInfo* method)

{
  return (__this->fields)._mainInstance;
}


// CustomLogic.OfflineEvaluator.OfflineCustomLogicEvaluator$$EvaluateMethod
// il2cpp: Il2CppObject* CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator__EvaluateMethod (CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator_o* __this, CustomLogic_CustomLogicClassInstance_o* instance, System_String_o* methodName, System_Object_array* parameters, const MethodInfo* method);
// 0x1820ebbb0

Il2CppObject *
CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator__EvaluateMethod
          (CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator_o *__this,
          CustomLogic_CustomLogicClassInstance_o *instance,System_String_o *methodName,
          System_Object_array *parameters,MethodInfo *method)

{
  CustomLogic_CustomLogicEvaluator_o *__this_00;
  Il2CppObject *pIVar1;
  
  __this_00 = (__this->fields)._evaluator;
  if (__this_00 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
    pIVar1 = CustomLogic_CustomLogicEvaluator__EvaluateMethod
                       (__this_00,instance,methodName,parameters,0,(MethodInfo *)0x0);
    return pIVar1;
  }
  ThrowNullReferenceException();
}


// CustomLogic.OfflineEvaluator.OfflineCustomLogicEvaluator$$EvaluateMethod
// il2cpp: Il2CppObject* CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator__EvaluateMethod (CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator_o* __this, System_String_o* className, System_String_o* methodName, System_Object_array* parameters, const MethodInfo* method);
// 0x1820ebaf0

Il2CppObject *
CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator__EvaluateMethod_20ebaf0
          (CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator_o *__this,System_String_o *className,
          System_String_o *methodName,System_Object_array *parameters,MethodInfo *method)

{
  CustomLogic_CustomLogicEvaluator_o *pCVar1;
  CustomLogic_CustomLogicClassInstance_o *classInstance;
  Il2CppObject *pIVar2;
  
  if (Il2CppMethodInitialized_184346a2b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_184346a2b = '\x01';
  }
  pCVar1 = (__this->fields)._evaluator;
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  if (pCVar1 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
    classInstance =
         CustomLogic_CustomLogicEvaluator__CreateClassInstance_20d7780
                   (pCVar1,className,TypeInfo_CustomLogic_CustomLogicEvaluator->static_fields->EmptyArgs,true,
                    (System_Nullable_CustomLogicSourceType__o)0x0,(MethodInfo *)0x0);
    pCVar1 = (__this->fields)._evaluator;
    if (pCVar1 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
      pIVar2 = CustomLogic_CustomLogicEvaluator__EvaluateMethod
                         (pCVar1,classInstance,methodName,parameters,0,(MethodInfo *)0x0);
      return pIVar2;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.OfflineEvaluator.OfflineCustomLogicEvaluator$$CreateClassInstance
// il2cpp: CustomLogic_CustomLogicClassInstance_o* CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator__CreateClassInstance (CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator_o* __this, System_String_o* className, bool init, const MethodInfo* method);
// 0x1820eb820

CustomLogic_CustomLogicClassInstance_o *
CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator__CreateClassInstance
          (CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator_o *__this,System_String_o *className,
          bool init,MethodInfo *method)

{
  CustomLogic_CustomLogicEvaluator_o *__this_00;
  CustomLogic_CustomLogicClassInstance_o *pCVar1;
  
  if (Il2CppMethodInitialized_184346a2c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_184346a2c = '\x01';
  }
  __this_00 = (__this->fields)._evaluator;
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  if (__this_00 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
    pCVar1 = CustomLogic_CustomLogicEvaluator__CreateClassInstance_20d7780
                       (__this_00,className,
                        TypeInfo_CustomLogic_CustomLogicEvaluator->static_fields->EmptyArgs,init,
                        (System_Nullable_CustomLogicSourceType__o)0x0,(MethodInfo *)0x0);
    return pCVar1;
  }
  ThrowNullReferenceException();
}


// CustomLogic.OfflineEvaluator.OfflineCustomLogicEvaluator$$EvaluateMainMethod
// il2cpp: Il2CppObject* CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator__EvaluateMainMethod (CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator_o* __this, System_String_o* methodName, System_Object_array* parameters, const MethodInfo* method);
// 0x1820eba60

Il2CppObject *
CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator__EvaluateMainMethod
          (CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator_o *__this,System_String_o *methodName,
          System_Object_array *parameters,MethodInfo *method)

{
  CustomLogic_CustomLogicEvaluator_o *__this_00;
  Il2CppObject *pIVar1;
  Il2CppClass *klass;
  System_Exception_o *__this_01;
  System_String_o *message;
  MethodInfo *lastManagedFrame;
  
  if ((__this->fields)._mainInstance == (CustomLogic_CustomLogicClassInstance_o *)0x0) {
    klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
    __this_01 = (System_Exception_o *)il2cpp_codegen_object_new(klass);
    message = il2cpp_codegen_get_runtime_metadata(&"Main class not found or not initialized");
    System_Exception___ctor_1b6abf0(__this_01,message,(MethodInfo *)0x0);
    lastManagedFrame =
         il2cpp_codegen_get_runtime_metadata
                   (&MethodInfo_CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator_EvaluateMainMethod);
    il2cpp_codegen_raise_exception((Il2CppObject *)__this_01,lastManagedFrame);
  }
  __this_00 = (__this->fields)._evaluator;
  if (__this_00 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
    pIVar1 = CustomLogic_CustomLogicEvaluator__EvaluateMethod
                       (__this_00,(__this->fields)._mainInstance,methodName,parameters,0,(MethodInfo *)0x0);
    return pIVar1;
  }
  ThrowNullReferenceException();
}


// CustomLogic.OfflineEvaluator.OfflineCustomLogicEvaluator$$GetMainVariable
// il2cpp: Il2CppObject* CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator__GetMainVariable (CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator_o* __this, System_String_o* variableName, const MethodInfo* method);
// 0x1820ebc50

Il2CppObject *
CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator__GetMainVariable
          (CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator_o *__this,System_String_o *variableName,
          MethodInfo *method)

{
  Il2CppObject *pIVar1;
  Il2CppClass *klass;
  System_Exception_o *__this_00;
  System_String_o *message;
  MethodInfo *lastManagedFrame;
  
  if ((__this->fields)._mainInstance != (CustomLogic_CustomLogicClassInstance_o *)0x0) {
    pIVar1 = CustomLogic_CustomLogicClassInstance__GetVariable
                       ((__this->fields)._mainInstance,variableName,(MethodInfo *)0x0);
    return pIVar1;
  }
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
  __this_00 = (System_Exception_o *)il2cpp_codegen_object_new(klass);
  message = il2cpp_codegen_get_runtime_metadata(&"Main class not found or not initialized");
  System_Exception___ctor_1b6abf0(__this_00,message,(MethodInfo *)0x0);
  lastManagedFrame =
       il2cpp_codegen_get_runtime_metadata
                 (&MethodInfo_CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator_GetMainVariable);
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
}


// CustomLogic.OfflineEvaluator.OfflineCustomLogicEvaluator$$SetMainVariable
// il2cpp: void CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator__SetMainVariable (CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator_o* __this, System_String_o* variableName, Il2CppObject* value, const MethodInfo* method);
// 0x1820ecd20

void CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator__SetMainVariable
               (CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator_o *__this,
               System_String_o *variableName,Il2CppObject *value,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  Il2CppClass *klass;
  System_Exception_o *__this_01;
  System_String_o *message;
  MethodInfo *lastManagedFrame;
  
  if (Il2CppMethodInitialized_184346a2d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_object_set_Item);
    Il2CppMethodInitialized_184346a2d = '\x01';
  }
  if ((__this->fields)._mainInstance != (CustomLogic_CustomLogicClassInstance_o *)0x0) {
    __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
                (((__this->fields)._mainInstance)->fields).Variables;
    if (__this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      System_Collections_Generic_Dictionary_object__object___set_Item
                (__this_00,(Il2CppObject *)variableName,value,
                 (MethodInfo_147A7F0 *)MethodInfo_System_Collections_Generic_Dictionary_string_object_set_Item
                );
      return;
    }
    ThrowNullReferenceException();
  }
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
  __this_01 = (System_Exception_o *)il2cpp_codegen_object_new(klass);
  message = il2cpp_codegen_get_runtime_metadata(&"Main class not found or not initialized");
  System_Exception___ctor_1b6abf0(__this_01,message,(MethodInfo *)0x0);
  lastManagedFrame =
       il2cpp_codegen_get_runtime_metadata
                 (&MethodInfo_CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator_SetMainVariable);
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_01,lastManagedFrame);
}


// CustomLogic.OfflineEvaluator.OfflineCustomLogicEvaluator$$GetCompiler
// il2cpp: CustomLogic_CustomLogicCompiler_o* CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator__GetCompiler (CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator_o* __this, const MethodInfo* method);
// 0x180573e90

CustomLogic_CustomLogicCompiler_o*
CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator__GetCompiler(CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator_o* __this, MethodInfo* method)

{
  return (__this->fields)._compiler;
}


// CustomLogic.OfflineEvaluator.OfflineCustomLogicEvaluator$$GetCapturedErrors
// il2cpp: System_Collections_Generic_List_CustomLogicError__o* CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator__GetCapturedErrors (CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator_o* __this, const MethodInfo* method);
// 0x181ccd880

System_Collections_Generic_List_CustomLogicError__o*
CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator__GetCapturedErrors(CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator_o* __this, MethodInfo* method)

{
  ExitGames_Client_Photon_PhotonPeer_o *pEVar1;
  
  pEVar1 = (__this->fields)._evaluator;
  if (pEVar1 != (ExitGames_Client_Photon_PhotonPeer_o *)0x0) {
    return (pEVar1->fields)._TrafficStatsIncoming_k__BackingField;
  }
  ThrowNullReferenceException();
}


// CustomLogic.OfflineEvaluator.OfflineCustomLogicEvaluator$$HasErrors
// il2cpp: bool CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator__HasErrors (CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator_o* __this, const MethodInfo* method);
// 0x1820ebd50

bool CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator__HasErrors
               (CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator_o *__this,MethodInfo *method)

{
  CustomLogic_CustomLogicEvaluator_o *pCVar1;
  System_Collections_Generic_List_CustomLogicError__o *pSVar2;
  
  if (Il2CppMethodInitialized_184346a2e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_CustomLogicError_get_Count);
    Il2CppMethodInitialized_184346a2e = '\x01';
  }
  pCVar1 = (__this->fields)._evaluator;
  if ((pCVar1 != (CustomLogic_CustomLogicEvaluator_o *)0x0) &&
     (pSVar2 = (pCVar1->fields)._CapturedErrors_k__BackingField,
     pSVar2 != (System_Collections_Generic_List_CustomLogicError__o *)0x0)) {
    return 0 < (pSVar2->fields)._size;
  }
  ThrowNullReferenceException();
}


// CustomLogic.OfflineEvaluator.OfflineCustomLogicEvaluator$$ClearErrors
// il2cpp: void CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator__ClearErrors (CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator_o* __this, const MethodInfo* method);
// 0x1820eb390

void CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator__ClearErrors
               (CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  int32_t length;
  CustomLogic_CustomLogicEvaluator_o *pCVar2;
  System_Collections_Generic_List_CustomLogicError__o *pSVar3;
  
  pCVar2 = (__this->fields)._evaluator;
  if (pCVar2 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
    if (Il2CppMethodInitialized_184346a03 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_System_Collections_Generic_List_CustomLogicError_Clear);
      Il2CppMethodInitialized_184346a03 = '\x01';
    }
    pSVar3 = (pCVar2->fields)._CapturedErrors_k__BackingField;
    if (pSVar3 != (System_Collections_Generic_List_CustomLogicError__o *)0x0) {
      length = (pSVar3->fields)._size;
      piVar1 = &(pSVar3->fields)._version;
      *piVar1 = *piVar1 + 1;
      (pSVar3->fields)._size = 0;
      if (0 < length) {
        System_Array__Clear((System_Array_o *)(pSVar3->fields)._items,0,length,(MethodInfo *)0x0);
        return;
      }
      return;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.OfflineEvaluator.OfflineCustomLogicEvaluator$$GetLastError
// il2cpp: CustomLogic_CustomLogicError_o* CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator__GetLastError (CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator_o* __this, const MethodInfo* method);
// 0x1820ebbe0

CustomLogic_CustomLogicError_o *
CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator__GetLastError
          (CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator_o *__this,MethodInfo *method)

{
  CustomLogic_CustomLogicEvaluator_o *pCVar1;
  System_Collections_Generic_List_CustomLogicError__o *__this_00;
  CustomLogic_CustomLogicError_o *pCVar2;
  
  if (Il2CppMethodInitialized_184346a2f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_CustomLogicError_get_Count);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_CustomLogicError_get_Item);
    Il2CppMethodInitialized_184346a2f = '\x01';
  }
  pCVar1 = (__this->fields)._evaluator;
  if ((pCVar1 != (CustomLogic_CustomLogicEvaluator_o *)0x0) &&
     (__this_00 = (pCVar1->fields)._CapturedErrors_k__BackingField,
     __this_00 != (System_Collections_Generic_List_CustomLogicError__o *)0x0)) {
    if (0 < (__this_00->fields)._size) {
      pCVar2 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                         ((System_Collections_Generic_List_object__o *)__this_00,
                          (__this_00->fields)._size + -1,
                          (MethodInfo_92B830 *)
                          MethodInfo_System_Collections_Generic_List_CustomLogicError_get_Item);
      return pCVar2;
    }
    return (CustomLogic_CustomLogicError_o *)0x0;
  }
  ThrowNullReferenceException();
}


// CustomLogic.OfflineEvaluator.OfflineCustomLogicEvaluator$$.cctor
// il2cpp: void CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator___cctor (const MethodInfo* method);
// 0x1820ecde0

void CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_string__o *__this;
  
  if (Il2CppMethodInitialized_184346a30 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_string);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator);
    il2cpp_codegen_initialize_runtime_metadata(&"Random");
    il2cpp_codegen_initialize_runtime_metadata(&"Color");
    il2cpp_codegen_initialize_runtime_metadata(&"Dict");
    il2cpp_codegen_initialize_runtime_metadata(&"Quaternion");
    il2cpp_codegen_initialize_runtime_metadata(&"Set");
    il2cpp_codegen_initialize_runtime_metadata(&"List");
    il2cpp_codegen_initialize_runtime_metadata(&"Json");
    il2cpp_codegen_initialize_runtime_metadata(&"Math");
    il2cpp_codegen_initialize_runtime_metadata(&"Vector3");
    il2cpp_codegen_initialize_runtime_metadata(&"String");
    il2cpp_codegen_initialize_runtime_metadata(&"Vector2");
    il2cpp_codegen_initialize_runtime_metadata(&"Convert");
    il2cpp_codegen_initialize_runtime_metadata(&"Range");
    Il2CppMethodInitialized_184346a30 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)__this,
             (MethodInfo_176CE80 *)MethodInfo_System_Collections_Generic_HashSet_string_ctor);
  if (__this != (System_Collections_Generic_HashSet_string__o *)0x0) {
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Math",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Convert",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Json",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Random",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"String",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"List",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Set",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Dict",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Range",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Vector2",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Vector3",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Quaternion",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Color",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    TypeInfo_CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator->static_fields->
    OfflineCompatibleBuiltins = __this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator->static_fields->
                OfflineCompatibleBuiltins,__this);
    return;
  }
  ThrowNullReferenceException();
}


