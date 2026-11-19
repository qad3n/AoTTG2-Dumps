// Type: CustomLogic.OfflineEvaluator.OfflineCustomLogicEvaluator
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/CustomLogic.OfflineEvaluator/OfflineCustomLogicEvaluator.cs
// Prior real C# source: none
// --------------------------------

// CustomLogic.OfflineEvaluator.OfflineCustomLogicEvaluator$$.ctor
// il2cpp: void CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator___ctor (CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator_o* __this, System_String_o* script, const MethodInfo* method);
// 0x5b8fc60

void CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator___ctor
               (CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator_o *__this,System_String_o *script,
               MethodInfo *method)

{
  CustomLogic_CustomLogicCompiler_o *pCVar1;
  MethodInfo *pMVar2;
  CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator_o *__this_00;
  
  if (Il2CppMethodInitialized_075473ef == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicCompiler);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicSourceFile);
    il2cpp_codegen_initialize_runtime_metadata(&"TestScript.cl");
    Il2CppMethodInitialized_075473ef = '\x01';
  }
  pMVar2 = (MethodInfo *)0x0;
  __this_00 = __this;
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator__InitializeSymbols(__this_00,pMVar2);
  pCVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCompiler);
  CustomLogic_CustomLogicCompiler___ctor(pCVar1,(MethodInfo *)0x0);
  (__this->fields)._compiler = pCVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._compiler);
  pCVar1 = (__this->fields)._compiler;
  pMVar2 = (MethodInfo *)il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicSourceFile);
  CustomLogic_CustomLogicSourceFile___ctor
            ((CustomLogic_CustomLogicSourceFile_o *)pMVar2,"TestScript.cl",script,4,(MethodInfo *)0x0);
  if (pCVar1 == (CustomLogic_CustomLogicCompiler_o *)0x0) {
    ThrowNullReferenceException();
  }
  CustomLogic_CustomLogicCompiler__AddSourceFile
            (pCVar1,(CustomLogic_CustomLogicSourceFile_o *)pMVar2,(MethodInfo *)0x0);
  CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator__CompileAndInitialize(__this,pMVar2);
  return;
}


// CustomLogic.OfflineEvaluator.OfflineCustomLogicEvaluator$$.ctor
// il2cpp: void CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator___ctor (CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator_o* __this, CustomLogic_CustomLogicCompiler_o* compiler, const MethodInfo* method);
// 0x5b90120

void CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator___ctor_5a90120
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
  Il2CppCodeGenWriteBarrier(&(__this->fields)._compiler);
  CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator__CompileAndInitialize
            (__this,(MethodInfo *)compiler);
  return;
}


// CustomLogic.OfflineEvaluator.OfflineCustomLogicEvaluator$$InitializeSymbols
// il2cpp: void CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator__InitializeSymbols (CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator_o* __this, const MethodInfo* method);
// 0x5b8fd40

void CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator__InitializeSymbols
               (CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator_o *__this,MethodInfo *method)

{
  uint32_t uVar1;
  System_Collections_Generic_Dictionary_object__int__o *__this_00;
  int32_t iVar2;
  
  if (Il2CppMethodInitialized_075473f0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicSymbols);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_int_get_Count);
    Il2CppMethodInitialized_075473f0 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicSymbols->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicSymbols->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicSymbols);
    __this_00 = (System_Collections_Generic_Dictionary_object__int__o *)
                TypeInfo_CustomLogic_CustomLogicSymbols->static_fields->Symbols;
  }
  else {
    __this_00 = *(System_Collections_Generic_Dictionary_object__int__o **)
                 ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicSymbols)->static_fields;
  }
  if (__this_00 == (System_Collections_Generic_Dictionary_object__int__o *)0x0) {
    ThrowNullReferenceException();
  }
  iVar2 = System_Collections_Generic_Dictionary_object__int___get_Count
                    (__this_00,
                     (MethodInfo_4A9D390 *)
                     MethodInfo_System_Collections_Generic_Dictionary_string_int_get_Count);
  if (iVar2 != 0) {
    return;
  }
  if ((TypeInfo_CustomLogic_CustomLogicSymbols->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicSymbols);
    CustomLogic_CustomLogicSymbols__Init((MethodInfo *)0x0);
    return;
  }
  CustomLogic_CustomLogicSymbols__Init((MethodInfo *)0x0);
  return;
}


// CustomLogic.OfflineEvaluator.OfflineCustomLogicEvaluator$$CompileAndInitialize
// il2cpp: void CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator__CompileAndInitialize (CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator_o* __this, const MethodInfo* method);
// 0x5b8fdf0

void CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator__CompileAndInitialize
               (CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator_o *__this,MethodInfo *method)

{
  CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator_Fields *targetAddress;
  CustomLogic_CustomLogicCompiler_o *pCVar1;
  CustomLogic_CustomLogicManager_StaticFields *pCVar2;
  System_Collections_Generic_Dictionary_object__object__o *pSVar3;
  bool bVar4;
  System_String_o *pSVar5;
  CustomLogic_CustomLogicLexer_o *__this_00;
  System_Collections_Generic_List_CustomLogicToken__o *tokens;
  CustomLogic_CustomLogicParser_o *__this_01;
  CustomLogic_CustomLogicStartAst_o *pCVar6;
  CustomLogic_CustomLogicEvaluator_o *pCVar7;
  CustomLogic_CustomLogicClassInstance_o *pCVar8;
  System_String_o *str0;
  Il2CppClass *klass;
  System_Exception_o *__this_02;
  MethodInfo *lastManagedFrame;
  System_String_o **metadataPointer;
  
  if (Il2CppMethodInitialized_075473f1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicLexer);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicParser);
    il2cpp_codegen_initialize_runtime_metadata(&"Main");
    Il2CppMethodInitialized_075473f1 = '\x01';
  }
  pCVar1 = (__this->fields)._compiler;
  if (pCVar1 != (CustomLogic_CustomLogicCompiler_o *)0x0) {
    pSVar5 = CustomLogic_CustomLogicCompiler__Compile(pCVar1,(MethodInfo *)0x0);
    pCVar1 = (__this->fields)._compiler;
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLexer);
    CustomLogic_CustomLogicLexer___ctor(__this_00,pSVar5,pCVar1,(MethodInfo *)0x0);
    if (__this_00 != (CustomLogic_CustomLogicLexer_o *)0x0) {
      tokens = CustomLogic_CustomLogicLexer__GetTokens(__this_00,(MethodInfo *)0x0);
      bVar4 = System_String__IsNullOrEmpty((__this_00->fields).Error,(MethodInfo *)0x0);
      if (!bVar4) {
        NullCheck(__this_00);
        pSVar5 = (__this_00->fields).Error;
        metadataPointer = &"Lexer error: ";
label_05b900c3:
        str0 = il2cpp_codegen_get_runtime_metadata(metadataPointer);
        pSVar5 = System_String__Concat_52f0320(str0,pSVar5,(MethodInfo *)0x0);
        klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
        __this_02 = (System_Exception_o *)il2cpp_codegen_object_new(klass);
        System_Exception___ctor_54fa440(__this_02,pSVar5,(MethodInfo *)0x0);
        lastManagedFrame =
             il2cpp_codegen_get_runtime_metadata
                       (&
                        MethodInfo_CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator_CompileAndInitialize
                       );
        il2cpp_codegen_raise_exception((Il2CppObject *)__this_02,lastManagedFrame);
      }
      pCVar1 = (__this->fields)._compiler;
      __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicParser);
      CustomLogic_CustomLogicParser___ctor(__this_01,tokens,pCVar1,(MethodInfo *)0x0);
      if (__this_01 != (CustomLogic_CustomLogicParser_o *)0x0) {
        pCVar6 = CustomLogic_CustomLogicParser__GetStartAst(__this_01,(MethodInfo *)0x0);
        bVar4 = System_String__IsNullOrEmpty((__this_01->fields).Error,(MethodInfo *)0x0);
        if (!bVar4) {
          NullCheck(__this_01);
          pSVar5 = (__this_01->fields).Error;
          metadataPointer = &"Parser error: ";
          goto label_05b900c3;
        }
        pCVar1 = (__this->fields)._compiler;
        pCVar7 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
        CustomLogic_CustomLogicEvaluator___ctor(pCVar7,pCVar6,pCVar1,(MethodInfo *)0x0);
        targetAddress = &__this->fields;
        (__this->fields)._evaluator = pCVar7;
        Il2CppCodeGenWriteBarrier(&targetAddress->_evaluator);
        pCVar7 = (__this->fields)._evaluator;
        if (pCVar7 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
          (pCVar7->fields)._CaptureErrors_k__BackingField = true;
          if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
          }
          pCVar2 = TypeInfo_CustomLogic_CustomLogicManager->static_fields;
          pCVar2->Evaluator = pCVar7;
          Il2CppCodeGenWriteBarrier(&pCVar2->Evaluator);
          CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator__InitializeStaticClasses
                    (__this,(MethodInfo *)pCVar7);
          CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator__CallInitOnStaticClasses
                    (__this,(MethodInfo *)pCVar7);
          if (Il2CppMethodInitialized_075473f6 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicClassDefinitionAst_ContainsKey
                      );
            il2cpp_codegen_initialize_runtime_metadata(&"Main");
            Il2CppMethodInitialized_075473f6 = '\x01';
          }
          if (targetAddress->_evaluator != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
            pCVar6 = (targetAddress->_evaluator->fields)._start;
            if (pCVar6 == (CustomLogic_CustomLogicStartAst_o *)0x0) {
              return;
            }
            pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)(pCVar6->fields).Classes;
            if (pSVar3 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
              bVar4 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                                (pSVar3,(Il2CppObject *)"Main",
                                 (MethodInfo_4AAD6F0 *)
                                 MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicClassDefinitionAst_ContainsKey
                                );
              pSVar5 = "Main";
              if (!bVar4) {
                return;
              }
              if (Il2CppMethodInitialized_075473f5 == '\0') {
                il2cpp_codegen_initialize_runtime_metadata
                          (&
                           MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicClassInstance_ContainsKey
                          );
                il2cpp_codegen_initialize_runtime_metadata
                          (&
                           MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicClassInstance_get_Item
                          );
                Il2CppMethodInitialized_075473f5 = '\x01';
              }
              if (targetAddress->_evaluator != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
                pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)
                         (targetAddress->_evaluator->fields)._staticClasses;
                if ((pSVar3 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) ||
                   (bVar4 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                                      (pSVar3,(Il2CppObject *)pSVar5,
                                       (MethodInfo_4AAD6F0 *)
                                       MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicClassInstance_ContainsKey
                                      ), !bVar4)) {
                  pCVar8 = (CustomLogic_CustomLogicClassInstance_o *)0x0;
                }
                else {
                  pCVar8 = System_Collections_Generic_Dictionary_object__object___get_Item
                                     (pSVar3,(Il2CppObject *)pSVar5,
                                      (MethodInfo_4AAD450 *)
                                      MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicClassInstance_get_Item
                                     );
                }
                (__this->fields)._mainInstance = pCVar8;
                Il2CppCodeGenWriteBarrier(&(__this->fields)._mainInstance);
                return;
              }
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
// 0x5b90160
// eh: try 0x5b904b4..0x5b90d9d -> pad 0x5b90f76 (+66 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5b90da3..0x5b90dad -> pad 0x5b91025 catch (...) [compiler noexcept guard]
// eh: try 0x5b90ec2..0x5b90ec7 -> pad 0x5b90eee cleanup
// eh: try 0x5b90ef1..0x5b90efe -> pad 0x5b91025 catch (...) [compiler noexcept guard]
// eh: try 0x5b90f3a..0x5b90f3f -> pad 0x5b90f64 cleanup
// eh: try 0x5b90f67..0x5b90f71 -> pad 0x5b91025 catch (...) [compiler noexcept guard]
// eh: try 0x5b90f93..0x5b90f98 -> pad 0x5b90fba cleanup
// eh: try 0x5b90fbd..0x5b90fc7 -> pad 0x5b91025 catch (...) [compiler noexcept guard]
// eh: try 0x5b90fe1..0x5b90fe6 -> pad 0x5b91010 cleanup
// eh: try 0x5b91013..0x5b9101d -> pad 0x5b91025 catch (...) [compiler noexcept guard]
// asm: 170 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b904a9: nop dword ptr [rax]
// asm:   0x5b90a99: nop dword ptr [rax]
// asm:   0x5b90ca9: test r15d, r15d
// asm:   0x5b90cac: je 0x5b90b90
// asm:   0x5b90cb2: jmp 0x5b90ce8
// asm:   0x5b90cbe: jmp 0x5b90cc2
// asm:   0x5b90cc0: jmp 0x5b90cc2
// asm:   0x5b90cc2: mov rbx, rdx
// asm:   0x5b90cc5: cmp ebx, 1
// asm:   0x5b90cc8: jne 0x5b90da0
// asm:   0x5b90cce: mov rdi, rax
// asm:   0x5b90cd1: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5b90cd6: mov rbx, qword ptr [rax]
// asm:   0x5b90cd9: mov qword ptr [rsp + 0x18], rbx
// asm:   0x5b90cde: xor r15d, r15d
// asm:   0x5b90ce1: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5b90ce6: jmp 0x5b90c88
// asm:   0x5b90d18: mov rdi, rbx
// asm:   0x5b90d1b: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5b90d9d: mov rbx, rdx
// asm:   0x5b90da0: mov rbp, rax
// asm:   0x5b90da3: lea rdi, [rsp + 0x18]
// asm:   0x5b90da8: call 0x2fd81d0  ; il2cpp_runtime_helper_02fd81d0()
// asm:   0x5b90dad: mov rdi, rbp
// asm:   0x5b90db0: jmp 0x5b90ead
// asm:   0x5b90db5: jmp 0x5b90f1d
// asm:   0x5b90dba: jmp 0x5b90f1d
// asm:   0x5b90dbf: jmp 0x5b90f0f
// asm:   0x5b90dc4: jmp 0x5b90f1d
// asm:   0x5b90dc9: jmp 0x5b90f1d
// asm:   0x5b90dce: jmp 0x5b90f1d
// asm:   0x5b90dd3: jmp 0x5b90f1d
// asm:   0x5b90dd8: jmp 0x5b90f1d
// asm:   0x5b90ddd: jmp 0x5b90f1d
// asm:   0x5b90de2: jmp 0x5b90f0f
// asm:   0x5b90de7: jmp 0x5b90f1d
// asm:   0x5b90dec: jmp 0x5b90f0f
// asm:   0x5b90df1: jmp 0x5b90f0f
// asm:   0x5b90df6: jmp 0x5b90f0f
// asm:   0x5b90dfb: jmp 0x5b90f1d
// asm:   0x5b90e00: jmp 0x5b90f1d
// asm:   0x5b90e05: jmp 0x5b90f0f
// asm:   0x5b90e0a: jmp 0x5b90f0f
// asm:   0x5b90e0f: jmp 0x5b90f1d
// asm:   0x5b90e14: jmp 0x5b90f1d
// asm:   0x5b90e19: jmp 0x5b90f1d
// asm:   0x5b90e1e: jmp 0x5b90f76
// asm:   0x5b90e23: jmp 0x5b90f76
// asm:   0x5b90e28: jmp 0x5b90f0f
// asm:   0x5b90e2d: jmp 0x5b90f1d
// asm:   0x5b90e32: jmp 0x5b90f1d
// asm:   0x5b90e37: jmp 0x5b90f1d
// asm:   0x5b90e3c: jmp 0x5b90f0f
// asm:   0x5b90e41: jmp 0x5b90f0f
// asm:   0x5b90e46: jmp 0x5b90f0f
// asm:   0x5b90e4b: jmp 0x5b90f1d
// asm:   0x5b90e50: jmp 0x5b90f1d
// asm:   0x5b90e55: jmp 0x5b90f0f
// asm:   0x5b90e5a: jmp 0x5b90f0f
// asm:   0x5b90e5f: jmp 0x5b90f0f
// asm:   0x5b90e64: jmp 0x5b90f76
// asm:   0x5b90e69: jmp 0x5b90f1d
// asm:   0x5b90e6e: jmp 0x5b90f1d
// asm:   0x5b90e73: jmp 0x5b90f0f
// asm:   0x5b90e78: jmp 0x5b90f0f
// asm:   0x5b90e7d: jmp 0x5b90f1d
// asm:   0x5b90e82: jmp 0x5b90f0f
// asm:   0x5b90e87: jmp 0x5b90f0f
// asm:   0x5b90e8c: jmp 0x5b90f76
// asm:   0x5b90e91: jmp 0x5b90f76
// asm:   0x5b90e96: jmp 0x5b90f76
// asm:   0x5b90e9b: jmp 0x5b90ea7
// asm:   0x5b90e9d: jmp 0x5b90ea7
// asm:   0x5b90e9f: jmp 0x5b90ea7
// asm:   0x5b90ea1: jmp 0x5b90ea7
// asm:   0x5b90ea3: jmp 0x5b90ea7
// asm:   0x5b90ea5: jmp 0x5b90ea7
// asm:   0x5b90ea7: mov rbx, rdx
// asm:   0x5b90eaa: mov rdi, rax
// asm:   0x5b90ead: cmp ebx, 1
// asm:   0x5b90eb0: jne 0x5b90ee9
// asm:   0x5b90eb2: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5b90eb7: mov rbx, qword ptr [rax]
// asm:   0x5b90eba: mov qword ptr [rsp + 0xe8], rbx
// asm:   0x5b90ec2: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5b90ec7: lea rax, [rip + 0x16fedca]  ; MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string_Dictionary_CustomLogicSo
// asm:   0x5b90ece: mov rsi, qword ptr [rax]
// asm:   0x5b90ed1: lea rdi, [rsp + 0x50]
// asm:   0x5b90ed6: call 0x4de71f0  ; System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___Dispose()
// asm:   0x5b90edb: test rbx, rbx
// asm:   0x5b90ede: je 0x5b90cfc
// asm:   0x5b90ee4: jmp 0x5b91008
// asm:   0x5b90ee9: mov rbx, rdi
// asm:   0x5b90eec: jmp 0x5b90ef1
// asm:   0x5b90eee: mov rbx, rax
// asm:   0x5b90ef1: lea rdi, [rsp + 0xe8]
// asm:   0x5b90ef9: call 0x2fd8200  ; il2cpp_runtime_helper_02fd8200()
// asm:   0x5b90efe: jmp 0x5b9101d
// asm:   0x5b90f03: jmp 0x5b90fc9
// asm:   0x5b90f08: jmp 0x5b90fc9
// asm:   0x5b90f0d: jmp 0x5b90f1d
// asm:   0x5b90f0f: mov rbx, rax
// asm:   0x5b90f12: mov r15, qword ptr [rsp + 0x10]
// asm:   0x5b90f17: jmp 0x5b90f20
// asm:   0x5b90f19: jmp 0x5b90f76
// asm:   0x5b90f1b: jmp 0x5b90f76
// asm:   0x5b90f1d: mov rbx, rax
// asm:   0x5b90f20: mov rbp, qword ptr [rsp + 8]
// asm:   0x5b90f25: cmp edx, 1
// asm:   0x5b90f28: jne 0x5b90f67
// asm:   0x5b90f2a: mov rdi, rbx
// asm:   0x5b90f2d: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5b90f32: mov rbx, qword ptr [rax]
// asm:   0x5b90f35: mov qword ptr [rsp + 0x18], rbx
// asm:   0x5b90f3a: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5b90f3f: lea rax, [rip + 0x16fef92]  ; MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_CustomLogicClassDefinition
// asm:   0x5b90f46: mov rsi, qword ptr [rax]
// asm:   0x5b90f49: lea rdi, [rsp + 0x90]
// asm:   0x5b90f51: call 0x4de7070  ; System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose()
// asm:   0x5b90f56: test rbx, rbx
// asm:   0x5b90f59: je 0x5b90a26
// asm:   0x5b90f5f: jmp 0x5b91008
// asm:   0x5b90f64: mov rbx, rax
// asm:   0x5b90f67: lea rdi, [rsp + 0x18]
// asm:   0x5b90f6c: call 0x2fd8170  ; il2cpp_runtime_helper_02fd8170()
// asm:   0x5b90f71: jmp 0x5b9101d
// asm:   0x5b90f76: mov rbx, rax
// asm:   0x5b90f79: cmp edx, 1
// asm:   0x5b90f7c: mov r15, qword ptr [rsp + 0x10]
// asm:   0x5b90f81: jne 0x5b90fbd
// asm:   0x5b90f83: mov rdi, rbx
// asm:   0x5b90f86: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5b90f8b: mov rbx, qword ptr [rax]
// asm:   0x5b90f8e: mov qword ptr [rsp + 0x18], rbx
// asm:   0x5b90f93: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5b90f98: lea rax, [rip + 0x16fdb41]  ; MethodInfo_System_Collections_Generic_HashSet_Enumerator_string_Dispose
// asm:   0x5b90f9f: mov rsi, qword ptr [rax]
// asm:   0x5b90fa2: lea rdi, [rsp + 0xb0]
// asm:   0x5b90faa: call 0x4d456c0  ; System_Collections_Generic_HashSet_Enumerator_object___Dispose()
// asm:   0x5b90faf: test rbx, rbx
// asm:   0x5b90fb2: je 0x5b9059e
// asm:   0x5b90fb8: jmp 0x5b91008
// asm:   0x5b90fba: mov rbx, rax
// asm:   0x5b90fbd: lea rdi, [rsp + 0x18]
// asm:   0x5b90fc2: call 0x2fd8140  ; il2cpp_runtime_helper_02fd8140()
// asm:   0x5b90fc7: jmp 0x5b9101d
// asm:   0x5b90fc9: mov rbx, rax
// asm:   0x5b90fcc: cmp edx, 1
// asm:   0x5b90fcf: jne 0x5b91013
// asm:   0x5b90fd1: mov rdi, rbx
// asm:   0x5b90fd4: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5b90fd9: mov rbx, qword ptr [rax]
// asm:   0x5b90fdc: mov qword ptr [rsp + 0x18], rbx
// asm:   0x5b90fe1: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5b90fe6: lea rax, [rip + 0x16fef1b]  ; MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string_CustomLogicClassInstance
// asm:   0x5b90fed: mov rsi, qword ptr [rax]
// asm:   0x5b90ff0: lea rdi, [rsp + 0x70]
// asm:   0x5b90ff5: call 0x4de71f0  ; System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___Dispose()
// asm:   0x5b90ffa: test rbx, rbx
// asm:   0x5b90ffd: mov r15, qword ptr [rsp + 0x10]
// asm:   0x5b91002: je 0x5b90b0a
// asm:   0x5b91008: mov rdi, rbx
// asm:   0x5b9100b: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5b91010: mov rbx, rax
// asm:   0x5b91013: lea rdi, [rsp + 0x18]
// asm:   0x5b91018: call 0x2fd81a0  ; il2cpp_runtime_helper_02fd81a0()
// asm:   0x5b9101d: mov rdi, rbx
// asm:   0x5b91020: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5b91025: mov rdi, rax
// asm:   0x5b91028: call 0x2ab61e0  ; __clang_call_terminate()

void CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator__InitializeStaticClasses
               (CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator_o *__this,MethodInfo *method)

{
  byte bVar1;
  CustomLogic_CustomLogicEvaluator_o *pCVar2;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  System_Collections_Generic_Dictionary_object__object__o *__this_01;
  System_Collections_Generic_HashSet_object__o *pSVar3;
  System_Object_array *args;
  System_Collections_Generic_Dictionary_object__object__o *pSVar4;
  CustomLogic_CustomLogicToken_o *pCVar5;
  Il2CppObject *pIVar6;
  System_Collections_Generic_Dictionary_string__CustomLogicSourceType__o *pSVar7;
  bool bVar8;
  int32_t key;
  CustomLogic_BuiltinClassInstance_o *value;
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *__this_02;
  CustomLogic_CustomLogicClassDefinitionAst_o *pCVar9;
  int *piVar10;
  CustomLogic_CustomLogicClassInstance_o *pCVar11;
  System_Collections_Generic_Dictionary_CustomLogicSourceType__CustomLogicClassInstance__o *__this_03;
  System_Collections_Generic_Dictionary_TKey__TValue__o *pSVar12;
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *pSVar13;
  MethodInfo **method_00;
  CustomLogic_CustomLogicStartAst_o *pCVar14;
  undefined1 local_110 [16];
  System_Collections_Generic_Dictionary_TKey__TValue__o *local_100;
  System_Nullable_CustomLogicSourceType__Fields local_f8;
  CustomLogic_CustomLogicStartAst_o *local_f0;
  int32_t local_e8;
  int32_t local_e4;
  System_Nullable_CustomLogicSourceType__Fields local_e0;
  undefined1 local_d8 [8];
  undefined8 uStack_d0;
  System_Collections_Generic_Dictionary_TKey__TValue__o *local_c8;
  undefined1 local_b8 [8];
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *pSStack_b0;
  System_Collections_Generic_Dictionary_TKey__TValue__o *local_a8;
  undefined1 local_98 [8];
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *pSStack_90;
  System_Collections_Generic_Dictionary_TKey__TValue__o *local_88;
  undefined1 local_78 [8];
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *pSStack_70;
  System_Collections_Generic_Dictionary_TKey__TValue__o *local_68;
  undefined1 local_58 [8];
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *pSStack_50;
  System_Collections_Generic_Dictionary_TKey__TValue__o *local_48;
  undefined8 local_40;
  undefined1 *local_38;
  
  if (Il2CppMethodInitialized_075473f2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicBuiltinTypes);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_string_Dictionary_CustomLogicSourceType_CustomLogicClassIn_718ada8
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
               MethodInfo_System_Collections_Generic_Dictionary_string_Dictionary_CustomLogicSourceType_CustomLogicClassIn_718adb0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicClassDefinitionAst_get_Keys
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicClassInstance_get_Values);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_string_Dictionary_CustomLogicSourceType_CustomLogicClassIn_718adb8
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_CustomLogicSourceType_CustomLogicClassInstance_get_Values
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_string_Dictionary_CustomLogicSourceType_CustomLogicClassIn_718adc0
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
               MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_CustomLogicClassDefinition_718fee0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Enumerator_string_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string_Dictionary_CustomLogicSo_718fca0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_CustomLogicSourceType_CustomLog_718f6b8
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string_CustomLogicClassInstance_718ff10
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Enumerator_string_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_CustomLogicSourceType_CustomLog_718f6c0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string_CustomLogicClassInstance_718ff18
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string_Dictionary_CustomLogicSo_718fca8
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_CustomLogicClassDefinition_718fee8
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
    Il2CppMethodInitialized_075473f2 = '\x01';
  }
  local_78 = (undefined1  [8])0x0;
  pSStack_70 = (System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)0x0;
  local_68 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_98 = (undefined1  [8])0x0;
  pSStack_90 = (System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)0x0;
  local_88 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_f8.hasValue = false;
  local_f8._1_3_ = 0;
  local_f8.value = 0;
  local_e4 = 0;
  local_e0.hasValue = false;
  local_e0._1_3_ = 0;
  local_e0.value = 0;
  local_e8 = 0;
  local_b8 = (undefined1  [8])0x0;
  pSStack_b0 = (System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)0x0;
  local_a8 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_d8 = (undefined1  [8])0x0;
  uStack_d0._0_4_ = 0;
  uStack_d0._4_4_ = 0;
  local_c8 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_58 = (undefined1  [8])0x0;
  pSStack_50 = (System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)0x0;
  local_48 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  pCVar2 = (__this->fields)._evaluator;
  if (pCVar2 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
    local_f0 = (pCVar2->fields)._start;
    __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)(pCVar2->fields)._staticClasses;
    __this_01 = (System_Collections_Generic_Dictionary_object__object__o *)
                (pCVar2->fields)._namespacedStaticClasses;
    if ((TypeInfo_CustomLogic_CustomLogicBuiltinTypes->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicBuiltinTypes);
    }
    pSVar3 = (System_Collections_Generic_HashSet_object__o *)
             TypeInfo_CustomLogic_CustomLogicBuiltinTypes->static_fields->StaticTypeNames;
    if (pSVar3 != (System_Collections_Generic_HashSet_object__o *)0x0) {
      System_Collections_Generic_HashSet_object___GetEnumerator
                ((System_Collections_Generic_HashSet_Enumerator_T__o *)local_110,pSVar3,
                 (MethodInfo_4FB3DA0 *)MethodInfo_System_Collections_Generic_HashSet_string_GetEnumerator);
      local_68 = local_100;
      local_78 = (undefined1  [8])local_110._0_8_;
      pSStack_70 = (System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)
                   local_110._8_8_;
      local_110._0_8_ = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
      local_110._8_8_ =
           (System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)local_78;
      while (bVar8 = System_Collections_Generic_HashSet_Enumerator_object___MoveNext
                               ((System_Collections_Generic_HashSet_Enumerator_T__o *)local_78,
                                (MethodInfo_4C456D0 *)
                                MethodInfo_System_Collections_Generic_HashSet_Enumerator_string_MoveNext),
            pSVar12 = local_68, bVar8) {
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
                          (pSVar3,(Il2CppObject *)pSVar12,
                           (MethodInfo_4FB3720 *)MethodInfo_System_Collections_Generic_HashSet_string_Contains
                          );
        if (bVar8) {
          if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
          }
          args = TypeInfo_CustomLogic_CustomLogicEvaluator->static_fields->EmptyArgs;
          if ((TypeInfo_CustomLogic_CustomLogicBuiltinTypes->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicBuiltinTypes);
          }
          value = CustomLogic_CustomLogicBuiltinTypes__CreateClassInstance
                            ((System_String_o *)pSVar12,args,(MethodInfo *)0x0);
          if (__this_00 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
            ThrowNullReferenceException();
          }
          System_Collections_Generic_Dictionary_object__object___set_Item
                    (__this_00,(Il2CppObject *)pSVar12,(Il2CppObject *)value,
                     (MethodInfo_4AAD4C0 *)
                     MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicClassInstance_set_Item
                    );
        }
      }
      System_Collections_Generic_HashSet_Enumerator_object___Dispose
                ((System_Collections_Generic_HashSet_Enumerator_T__o *)local_78,
                 (MethodInfo_4C456C0 *)MethodInfo_System_Collections_Generic_HashSet_Enumerator_string_Dispose
                );
      pCVar14 = local_f0;
      if (((local_f0 != (CustomLogic_CustomLogicStartAst_o *)0x0) &&
          (pSVar4 = (System_Collections_Generic_Dictionary_object__object__o *)(local_f0->fields).Classes,
          pSVar4 != (System_Collections_Generic_Dictionary_object__object__o *)0x0)) &&
         (__this_02 = System_Collections_Generic_Dictionary_object__object___get_Keys
                                (pSVar4,(MethodInfo_4AAD0F0 *)
                                        MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicClassDefinitionAst_get_Keys
                                ),
         __this_02 != (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)0x0)) {
        method_00 = &
                    MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_string_CustomLogicClassDefinitionAst_GetEnum
        ;
        System_Collections_Generic_Dictionary_KeyCollection_object__object___GetEnumerator
                  ((System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)local_110
                   ,__this_02,
                   (MethodInfo_511A520 *)
                   MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_string_CustomLogicClassDefinitionAst_GetEnum
                  );
        local_88 = local_100;
        local_98 = (undefined1  [8])local_110._0_8_;
        pSStack_90 = (System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)
                     local_110._8_8_;
        local_110._0_8_ = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
        local_110._8_8_ =
             (System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)local_98;
        while (bVar8 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___MoveNext
                                 ((System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o
                                   *)local_98,
                                  (MethodInfo_4CE7080 *)
                                  MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_CustomLogicClassDefinition_718fee0
                                 ), pSVar12 = local_88, bVar8) {
          bVar8 = System_String__op_Equality
                            ((System_String_o *)local_88,"Main",(MethodInfo *)0x0);
          if (bVar8) {
            CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator__CreateStaticClassInternal
                      (__this,(System_String_o *)pSVar12,
                       (System_Collections_Generic_Dictionary_string__CustomLogicClassInstance__o *)__this_00,
                       (MethodInfo *)method_00);
          }
          else {
            pSVar4 = (System_Collections_Generic_Dictionary_object__object__o *)(pCVar14->fields).Classes;
            if (pSVar4 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
              ThrowNullReferenceException();
            }
            pCVar9 = System_Collections_Generic_Dictionary_object__object___get_Item
                               (pSVar4,(Il2CppObject *)pSVar12,
                                (MethodInfo_4AAD450 *)
                                MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicClassDefinitionAst_get_Item
                               );
            if (pCVar9 == (CustomLogic_CustomLogicClassDefinitionAst_o *)0x0) {
              ThrowNullReferenceException();
            }
            pCVar5 = (pCVar9->fields).Token;
            if (pCVar5 == (CustomLogic_CustomLogicToken_o *)0x0) {
              ThrowNullReferenceException();
            }
            pIVar6 = (pCVar5->fields).Value;
            if (pIVar6 == (Il2CppObject *)0x0) {
              ThrowNullReferenceException();
            }
            if ((pIVar6->klass->_1).element_class != *(Il2CppClass **)(g_data_07556710 + 0x40)) {
              il2cpp_codegen_raise_invalid_cast_exception();
            }
            piVar10 = il2cpp_vm_Object_Unbox(pIVar6);
            if (*piVar10 == 2) {
              local_f8.hasValue = false;
              local_f8._1_3_ = 0;
              local_f8.value = 0;
              pSVar7 = (pCVar14->fields).ClassNamespaces;
              if (pSVar7 == (System_Collections_Generic_Dictionary_string__CustomLogicSourceType__o *)0x0) {
                ThrowNullReferenceException();
              }
              bVar8 = System_Collections_Generic_Dictionary_object__Int32Enum___TryGetValue
                                ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar7,
                                 (Il2CppObject *)pSVar12,&local_e4,
                                 (MethodInfo_4AA3530 *)
                                 MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicSourceType_TryGetValue
                                );
              if (bVar8) {
                System_Nullable_Int32Enum____ctor
                          ((System_Nullable_Int32Enum__o *)&local_f8,local_e4,
                           (MethodInfo_3CD4F60 *)MethodInfo_System_Nullable_CustomLogicSourceType_ctor);
              }
              pCVar2 = (__this->fields)._evaluator;
              if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
              }
              if (pCVar2 == (CustomLogic_CustomLogicEvaluator_o *)0x0) {
                ThrowNullReferenceException();
              }
              method_00 = (MethodInfo **)0x0;
              pCVar11 = CustomLogic_CustomLogicEvaluator__CreateClassInstance_5a84880
                                  (pCVar2,(System_String_o *)pSVar12,
                                   TypeInfo_CustomLogic_CustomLogicEvaluator->static_fields->EmptyArgs,false,
                                   (System_Nullable_CustomLogicSourceType__o)local_f8,(MethodInfo *)0x0);
              pCVar14 = local_f0;
              if (pCVar11 == (CustomLogic_CustomLogicClassInstance_o *)0x0) {
                ThrowNullReferenceException();
              }
              (pCVar11->fields)._Namespace_k__BackingField.fields = local_f8;
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
                                (pSVar3,(Il2CppObject *)pSVar12,
                                 (MethodInfo_4FB3720 *)
                                 MethodInfo_System_Collections_Generic_HashSet_string_Contains);
              if (bVar8) {
                if (__this_01 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                  ThrowNullReferenceException();
                }
                bVar8 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                                  (__this_01,(Il2CppObject *)pSVar12,
                                   (MethodInfo_4AAD6F0 *)
                                   MethodInfo_System_Collections_Generic_Dictionary_string_Dictionary_CustomLogicSourceType_CustomLogicClassIn_718ada8
                                  );
                if (!bVar8) {
                  __this_03 = il2cpp_codegen_object_new
                                        ((Il2CppClass *)
                                         TypeInfo_System_Collections_Generic_Dictionary_CustomLogicSourceType_CustomLogicClassInstance
                                        );
                  System_Collections_Generic_Dictionary_Int32Enum__object____ctor
                            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_03,
                             (MethodInfo_4A543B0 *)
                             MethodInfo_System_Collections_Generic_Dictionary_CustomLogicSourceType_CustomLogicClassInstance_ctor
                            );
                  method_00 = (MethodInfo **)
                              MethodInfo_System_Collections_Generic_Dictionary_string_Dictionary_CustomLogicSourceType_CustomLogicClassIn_718adc0
                  ;
                  System_Collections_Generic_Dictionary_object__object___set_Item
                            (__this_01,(Il2CppObject *)pSVar12,(Il2CppObject *)__this_03,
                             (MethodInfo_4AAD4C0 *)
                             MethodInfo_System_Collections_Generic_Dictionary_string_Dictionary_CustomLogicSourceType_CustomLogicClassIn_718adc0
                            );
                }
                pCVar14 = local_f0;
                if (local_f8.hasValue != false) {
                  pSVar12 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)
                            System_Collections_Generic_Dictionary_object__object___get_Item
                                      (__this_01,(Il2CppObject *)pSVar12,
                                       (MethodInfo_4AAD450 *)
                                       MethodInfo_System_Collections_Generic_Dictionary_string_Dictionary_CustomLogicSourceType_CustomLogicClassIn_718adb0
                                      );
                  key = System_Nullable_Int32Enum___get_Value
                                  ((System_Nullable_Int32Enum__o *)&local_f8,
                                   (MethodInfo_3CD4F80 *)
                                   MethodInfo_System_Nullable_CustomLogicSourceType_get_Value);
                  if (pSVar12 == (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) {
                    ThrowNullReferenceException();
                  }
                  method_00 = (MethodInfo **)
                              MethodInfo_System_Collections_Generic_Dictionary_CustomLogicSourceType_CustomLogicClassInstance_set_Item
                  ;
                  System_Collections_Generic_Dictionary_Int32Enum__object___set_Item
                            (pSVar12,key,(Il2CppObject *)pCVar11,
                             (MethodInfo_4A54FC0 *)
                             MethodInfo_System_Collections_Generic_Dictionary_CustomLogicSourceType_CustomLogicClassInstance_set_Item
                            );
                  pCVar14 = local_f0;
                }
              }
              else {
                if (__this_00 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                  ThrowNullReferenceException();
                }
                method_00 = (MethodInfo **)
                            MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicClassInstance_set_Item
                ;
                System_Collections_Generic_Dictionary_object__object___set_Item
                          (__this_00,(Il2CppObject *)pSVar12,(Il2CppObject *)pCVar11,
                           (MethodInfo_4AAD4C0 *)
                           MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicClassInstance_set_Item
                          );
              }
            }
            else {
              pSVar4 = (System_Collections_Generic_Dictionary_object__object__o *)(pCVar14->fields).Classes;
              if (pSVar4 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                ThrowNullReferenceException();
              }
              pCVar9 = System_Collections_Generic_Dictionary_object__object___get_Item
                                 (pSVar4,(Il2CppObject *)pSVar12,
                                  (MethodInfo_4AAD450 *)
                                  MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicClassDefinitionAst_get_Item
                                 );
              if (pCVar9 == (CustomLogic_CustomLogicClassDefinitionAst_o *)0x0) {
                ThrowNullReferenceException();
              }
              pCVar5 = (pCVar9->fields).Token;
              if (pCVar5 == (CustomLogic_CustomLogicToken_o *)0x0) {
                ThrowNullReferenceException();
              }
              pIVar6 = (pCVar5->fields).Value;
              if (pIVar6 == (Il2CppObject *)0x0) {
                ThrowNullReferenceException();
              }
              if ((pIVar6->klass->_1).element_class != *(Il2CppClass **)(g_data_07556710 + 0x40)) {
                il2cpp_codegen_raise_invalid_cast_exception();
              }
              piVar10 = il2cpp_vm_Object_Unbox(pIVar6);
              if (*piVar10 == 3) {
                local_e0.hasValue = false;
                local_e0._1_3_ = 0;
                local_e0.value = 0;
                pSVar7 = (pCVar14->fields).ClassNamespaces;
                if (pSVar7 == (System_Collections_Generic_Dictionary_string__CustomLogicSourceType__o *)0x0) {
                  ThrowNullReferenceException();
                }
                bVar8 = System_Collections_Generic_Dictionary_object__Int32Enum___TryGetValue
                                  ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar7,
                                   (Il2CppObject *)pSVar12,&local_e8,
                                   (MethodInfo_4AA3530 *)
                                   MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicSourceType_TryGetValue
                                  );
                if (bVar8) {
                  System_Nullable_Int32Enum____ctor
                            ((System_Nullable_Int32Enum__o *)&local_e0,local_e8,
                             (MethodInfo_3CD4F60 *)MethodInfo_System_Nullable_CustomLogicSourceType_ctor);
                }
                pCVar2 = (__this->fields)._evaluator;
                if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
                }
                if (pCVar2 == (CustomLogic_CustomLogicEvaluator_o *)0x0) {
                  ThrowNullReferenceException();
                }
                pCVar11 = CustomLogic_CustomLogicEvaluator__CreateClassInstance_5a84880
                                    (pCVar2,(System_String_o *)pSVar12,
                                     TypeInfo_CustomLogic_CustomLogicEvaluator->static_fields->EmptyArgs,false
                                     ,(System_Nullable_CustomLogicSourceType__o)local_e0,(MethodInfo *)0x0);
                pCVar14 = local_f0;
                if (pCVar11 == (CustomLogic_CustomLogicClassInstance_o *)0x0) {
                  ThrowNullReferenceException();
                }
                (pCVar11->fields)._Namespace_k__BackingField.fields = local_e0;
                if (__this_00 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                  ThrowNullReferenceException();
                }
                method_00 = (MethodInfo **)
                            MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicClassInstance_set_Item
                ;
                System_Collections_Generic_Dictionary_object__object___set_Item
                          (__this_00,(Il2CppObject *)pSVar12,(Il2CppObject *)pCVar11,
                           (MethodInfo_4AAD4C0 *)
                           MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicClassInstance_set_Item
                          );
              }
            }
          }
        }
        System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose
                  ((System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)local_98,
                   (MethodInfo_4CE7070 *)
                   MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_CustomLogicClassDefinition
                  );
        if ((__this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) &&
           (pSVar13 = System_Collections_Generic_Dictionary_object__object___get_Values
                                (__this_00,
                                 (MethodInfo_4AAD2A0 *)
                                 MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicClassInstance_get_Values
                                ),
           pSVar13 != (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)0x0)) {
          System_Collections_Generic_Dictionary_ValueCollection_object__object___GetEnumerator
                    ((System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)
                     local_110,pSVar13,
                     (MethodInfo_43F93D0 *)
                     MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_string_CustomLogicClassInstance_GetEnumera
                    );
          local_a8 = local_100;
          local_b8 = (undefined1  [8])local_110._0_8_;
          pSStack_b0 = (System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)
                       local_110._8_8_;
          local_110._0_8_ = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
          local_110._8_8_ =
               (System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)local_b8;
label_05b90aa0:
          bVar8 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___MoveNext
                            ((System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o
                              *)local_b8,
                             (MethodInfo_4CE7200 *)
                             MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string_CustomLogicClassInstance_718ff10
                            );
          if (bVar8) {
            if (local_a8 != (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0)
            goto code_r0x05b90abc;
            goto label_05b90ae0;
          }
          System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___Dispose
                    ((System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)
                     local_b8,(MethodInfo_4CE71F0 *)
                              MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string_CustomLogicClassInstance
                    );
          if ((__this_01 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) &&
             (pSVar13 = System_Collections_Generic_Dictionary_object__object___get_Values
                                  (__this_01,
                                   (MethodInfo_4AAD2A0 *)
                                   MethodInfo_System_Collections_Generic_Dictionary_string_Dictionary_CustomLogicSourceType_CustomLogicClassIn_718adb8
                                  ),
             pSVar13 != (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)0x0)) {
            System_Collections_Generic_Dictionary_ValueCollection_object__object___GetEnumerator
                      ((System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)
                       local_110,pSVar13,
                       (MethodInfo_43F93D0 *)
                       MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_string_Dictionary_CustomLogicSourceType_Cu
                      );
            local_c8 = local_100;
            local_d8 = (undefined1  [8])local_110._0_8_;
            uStack_d0 = (System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)
                        local_110._8_8_;
            local_40 = 0;
            local_38 = local_d8;
            do {
              bVar8 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___MoveNext
                                ((System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o
                                  *)local_d8,
                                 (MethodInfo_4CE7200 *)
                                 MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string_Dictionary_CustomLogicSo_718fca0
                                );
              if (!bVar8) {
                System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___Dispose
                          ((System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *
                           )local_d8,
                           (MethodInfo_4CE71F0 *)
                           MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string_Dictionary_CustomLogicSo
                          );
                return;
              }
              if (local_c8 == (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) {
                ThrowNullReferenceException();
              }
              pSVar13 = System_Collections_Generic_Dictionary_Int32Enum__object___get_Values
                                  (local_c8,(MethodInfo_4A54D80 *)
                                            MethodInfo_System_Collections_Generic_Dictionary_CustomLogicSourceType_CustomLogicClassInstance_get_Values
                                  );
              if (pSVar13 == (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)0x0) {
                ThrowNullReferenceException();
              }
              System_Collections_Generic_Dictionary_ValueCollection_Int32Enum__object___GetEnumerator
                        ((System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)
                         local_110,pSVar13,
                         (MethodInfo_43F1210 *)
                         MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_CustomLogicSourceType_CustomLogicClassInst
                        );
              local_48 = local_100;
              local_58 = (undefined1  [8])local_110._0_8_;
              pSStack_50 = (System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)
                           local_110._8_8_;
              local_110._0_8_ = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
              local_110._8_8_ =
                   (System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)local_58;
label_05b90c20:
              bVar8 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_Int32Enum__object___MoveNext
                                ((System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o
                                  *)local_58,
                                 (MethodInfo_4CDC070 *)
                                 MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_CustomLogicSourceType_CustomLog_718f6b8
                                );
              if (bVar8) {
                if (local_48 != (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0)
                goto code_r0x05b90c3d;
                goto label_05b90c61;
              }
              System_Collections_Generic_Dictionary_ValueCollection_Enumerator_Int32Enum__object___Dispose
                        ((System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)
                         local_58,(MethodInfo_4CDC060 *)
                                  MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_CustomLogicSourceType_CustomLog
                        );
            } while( true );
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
code_r0x05b90abc:
  bVar1 = (TypeInfo_CustomLogic_BuiltinClassInstance->_2).typeHierarchyDepth;
  if (((local_a8->klass->_2).typeHierarchyDepth < bVar1) ||
     ((local_a8->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
      (Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance)) {
label_05b90ae0:
    pCVar2 = (__this->fields)._evaluator;
    if (pCVar2 == (CustomLogic_CustomLogicEvaluator_o *)0x0) {
      ThrowNullReferenceException();
    }
    CustomLogic_CustomLogicEvaluator__RunAssignmentsClassInstance
              (pCVar2,(CustomLogic_CustomLogicClassInstance_o *)local_a8,(MethodInfo *)0x0);
  }
  goto label_05b90aa0;
code_r0x05b90c3d:
  bVar1 = (TypeInfo_CustomLogic_BuiltinClassInstance->_2).typeHierarchyDepth;
  if (((local_48->klass->_2).typeHierarchyDepth < bVar1) ||
     ((local_48->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
      (Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance)) {
label_05b90c61:
    pCVar2 = (__this->fields)._evaluator;
    if (pCVar2 == (CustomLogic_CustomLogicEvaluator_o *)0x0) {
      ThrowNullReferenceException();
    }
    CustomLogic_CustomLogicEvaluator__RunAssignmentsClassInstance
              (pCVar2,(CustomLogic_CustomLogicClassInstance_o *)local_48,(MethodInfo *)0x0);
  }
  goto label_05b90c20;
}


// CustomLogic.OfflineEvaluator.OfflineCustomLogicEvaluator$$CallInitOnStaticClasses
// il2cpp: void CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator__CallInitOnStaticClasses (CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator_o* __this, const MethodInfo* method);
// 0x5b91030
// eh: try 0x5b91114..0x5b91177 -> pad 0x5b91182 (+3 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5b9119a..0x5b9119f -> pad 0x5b911be cleanup
// eh: try 0x5b911c1..0x5b911cb -> pad 0x5b911d3 catch (...) [compiler noexcept guard]
// asm: 27 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b9110e: nop 
// asm:   0x5b9117c: jmp 0x5b91182
// asm:   0x5b9117e: jmp 0x5b91182
// asm:   0x5b91180: jmp 0x5b91182
// asm:   0x5b91182: mov rbx, rax
// asm:   0x5b91185: cmp edx, 1
// asm:   0x5b91188: jne 0x5b911c1
// asm:   0x5b9118a: mov rdi, rbx
// asm:   0x5b9118d: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5b91192: mov rbx, qword ptr [rax]
// asm:   0x5b91195: mov qword ptr [rsp + 0x20], rbx
// asm:   0x5b9119a: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5b9119f: lea rax, [rip + 0x16fed62]  ; MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string_CustomLogicClassInstance
// asm:   0x5b911a6: mov rsi, qword ptr [rax]
// asm:   0x5b911a9: mov rdi, rsp
// asm:   0x5b911ac: call 0x4de71f0  ; System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___Dispose()
// asm:   0x5b911b1: test rbx, rbx
// asm:   0x5b911b4: je 0x5b9115f
// asm:   0x5b911b6: mov rdi, rbx
// asm:   0x5b911b9: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5b911be: mov rbx, rax
// asm:   0x5b911c1: lea rdi, [rsp + 0x20]
// asm:   0x5b911c6: call 0x2fd8230  ; il2cpp_runtime_helper_02fd8230()
// asm:   0x5b911cb: mov rdi, rbx
// asm:   0x5b911ce: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5b911d3: mov rdi, rax
// asm:   0x5b911d6: call 0x2ab61e0  ; __clang_call_terminate()

void CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator__CallInitOnStaticClasses
               (CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator_o *__this,MethodInfo *method)

{
  CustomLogic_CustomLogicEvaluator_o *pCVar1;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  Il2CppObject *pIVar2;
  bool bVar3;
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *__this_01;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o local_58;
  undefined8 local_38;
  undefined1 *local_30;
  
  if (Il2CppMethodInitialized_075473f3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicClassInstance_get_Values);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string_CustomLogicClassInstance
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string_CustomLogicClassInstance_718ff10
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string_CustomLogicClassInstance_718ff18
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_string_CustomLogicClassInstance_GetEnumera
              );
    il2cpp_codegen_initialize_runtime_metadata(&"Init");
    Il2CppMethodInitialized_075473f3 = '\x01';
  }
  local_58.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_58.fields._index = 0;
  local_58.fields._version = 0;
  local_58.fields._currentValue = (Il2CppObject *)0x0;
  pCVar1 = (__this->fields)._evaluator;
  if ((pCVar1 != (CustomLogic_CustomLogicEvaluator_o *)0x0) &&
     (__this_00 = (System_Collections_Generic_Dictionary_object__object__o *)(pCVar1->fields)._staticClasses,
     __this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0)) {
    __this_01 = System_Collections_Generic_Dictionary_object__object___get_Values
                          (__this_00,
                           (MethodInfo_4AAD2A0 *)
                           MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicClassInstance_get_Values
                          );
    if (__this_01 != (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)0x0) {
      System_Collections_Generic_Dictionary_ValueCollection_object__object___GetEnumerator
                (&local_58,__this_01,
                 (MethodInfo_43F93D0 *)
                 MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_string_CustomLogicClassInstance_GetEnumera
                );
      local_38 = 0;
      local_30 = (undefined1 *)&local_58;
      while( true ) {
        bVar3 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___MoveNext
                          (&local_58,
                           (MethodInfo_4CE7200 *)
                           MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string_CustomLogicClassInstance_718ff10
                          );
        pIVar2 = local_58.fields._currentValue;
        if (!bVar3) {
          System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___Dispose
                    (&local_58,
                     (MethodInfo_4CE71F0 *)
                     MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string_CustomLogicClassInstance
                    );
          return;
        }
        pCVar1 = (__this->fields)._evaluator;
        if (pCVar1 == (CustomLogic_CustomLogicEvaluator_o *)0x0) break;
        CustomLogic_CustomLogicEvaluator__EvaluateMethod
                  (pCVar1,(CustomLogic_CustomLogicClassInstance_o *)local_58.fields._currentValue,
                   "Init",(System_Object_array *)0x0,0,(MethodInfo *)0x0);
        if ((CustomLogic_CustomLogicClassInstance_o *)pIVar2 == (CustomLogic_CustomLogicClassInstance_o *)0x0)
        {
          ThrowNullReferenceException();
        }
        ((CustomLogic_CustomLogicClassInstance_Fields *)((long)pIVar2 + 0x10))->Inited = true;
      }
      ThrowNullReferenceException();
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.OfflineEvaluator.OfflineCustomLogicEvaluator$$CreateStaticClassInternal
// il2cpp: void CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator__CreateStaticClassInternal (CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator_o* __this, System_String_o* className, System_Collections_Generic_Dictionary_string__CustomLogicClassInstance__o* staticClasses, const MethodInfo* method);
// 0x5b91320

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
  int32_t local_2c;
  System_Nullable_CustomLogicSourceType__Fields local_28;
  
  if (Il2CppMethodInitialized_075473f4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicClassInstance_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicClassInstance_ContainsKey);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicSourceType_TryGetValue);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_CustomLogicSourceType_ctor);
    Il2CppMethodInitialized_075473f4 = '\x01';
  }
  local_2c = 0;
  if (staticClasses != (System_Collections_Generic_Dictionary_string__CustomLogicClassInstance__o *)0x0) {
    bVar3 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                      ((System_Collections_Generic_Dictionary_object__object__o *)staticClasses,
                       (Il2CppObject *)className,
                       (MethodInfo_4AAD6F0 *)
                       MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicClassInstance_ContainsKey
                      );
    if (bVar3) {
      return;
    }
    pCVar1 = (__this->fields)._evaluator;
    if (pCVar1 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
      pCVar2 = (pCVar1->fields)._start;
      local_28.hasValue = false;
      local_28._1_3_ = 0;
      local_28.value = 0;
      if ((pCVar2 != (CustomLogic_CustomLogicStartAst_o *)0x0) &&
         (__this_00 = (pCVar2->fields).ClassNamespaces,
         __this_00 != (System_Collections_Generic_Dictionary_string__CustomLogicSourceType__o *)0x0)) {
        bVar3 = System_Collections_Generic_Dictionary_object__Int32Enum___TryGetValue
                          ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
                           (Il2CppObject *)className,&local_2c,
                           (MethodInfo_4AA3530 *)
                           MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicSourceType_TryGetValue
                          );
        if (bVar3) {
          System_Nullable_Int32Enum____ctor
                    ((System_Nullable_Int32Enum__o *)&local_28,local_2c,
                     (MethodInfo_3CD4F60 *)MethodInfo_System_Nullable_CustomLogicSourceType_ctor);
        }
        pCVar1 = (__this->fields)._evaluator;
        if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
        }
        if ((pCVar1 != (CustomLogic_CustomLogicEvaluator_o *)0x0) &&
           (value = CustomLogic_CustomLogicEvaluator__CreateClassInstance_5a84880
                              (pCVar1,className,
                               TypeInfo_CustomLogic_CustomLogicEvaluator->static_fields->EmptyArgs,false,
                               (System_Nullable_CustomLogicSourceType__o)local_28,(MethodInfo *)0x0),
           value != (CustomLogic_CustomLogicClassInstance_o *)0x0)) {
          (value->fields)._Namespace_k__BackingField.fields = local_28;
          System_Collections_Generic_Dictionary_object__object___Add
                    ((System_Collections_Generic_Dictionary_object__object__o *)staticClasses,
                     (Il2CppObject *)className,(Il2CppObject *)value,
                     (MethodInfo_4AAD4E0 *)
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
// 0x5b91490

void CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator__RunAssignmentsClassInstance
               (CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator_o *__this,
               CustomLogic_CustomLogicClassInstance_o *classInstance,MethodInfo *method)

{
  CustomLogic_CustomLogicEvaluator_o *__this_00;
  
  __this_00 = (__this->fields)._evaluator;
  if (__this_00 == (CustomLogic_CustomLogicEvaluator_o *)0x0) {
    ThrowNullReferenceException();
  }
  CustomLogic_CustomLogicEvaluator__RunAssignmentsClassInstance(__this_00,classInstance,(MethodInfo *)0x0);
  return;
}


// CustomLogic.OfflineEvaluator.OfflineCustomLogicEvaluator$$GetStartAst
// il2cpp: CustomLogic_CustomLogicStartAst_o* CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator__GetStartAst (CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator_o* __this, const MethodInfo* method);
// 0x5b912e0

CustomLogic_CustomLogicStartAst_o *
CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator__GetStartAst
          (CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator_o *__this,MethodInfo *method)

{
  CustomLogic_CustomLogicEvaluator_o *pCVar1;
  
  pCVar1 = (__this->fields)._evaluator;
  if (pCVar1 == (CustomLogic_CustomLogicEvaluator_o *)0x0) {
    ThrowNullReferenceException();
  }
  return (pCVar1->fields)._start;
}


// CustomLogic.OfflineEvaluator.OfflineCustomLogicEvaluator$$GetStaticClassesDictionary
// il2cpp: System_Collections_Generic_Dictionary_string__CustomLogicClassInstance__o* CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator__GetStaticClassesDictionary (CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator_o* __this, const MethodInfo* method);
// 0x5b91300

System_Collections_Generic_Dictionary_string__CustomLogicClassInstance__o *
CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator__GetStaticClassesDictionary
          (CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator_o *__this,MethodInfo *method)

{
  CustomLogic_CustomLogicEvaluator_o *pCVar1;
  
  pCVar1 = (__this->fields)._evaluator;
  if (pCVar1 == (CustomLogic_CustomLogicEvaluator_o *)0x0) {
    ThrowNullReferenceException();
  }
  return (pCVar1->fields)._staticClasses;
}


// CustomLogic.OfflineEvaluator.OfflineCustomLogicEvaluator$$GetStaticClass
// il2cpp: CustomLogic_CustomLogicClassInstance_o* CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator__GetStaticClass (CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator_o* __this, System_String_o* className, const MethodInfo* method);
// 0x5b91250

CustomLogic_CustomLogicClassInstance_o *
CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator__GetStaticClass
          (CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator_o *__this,System_String_o *className,
          MethodInfo *method)

{
  CustomLogic_CustomLogicEvaluator_o *pCVar1;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  bool bVar2;
  CustomLogic_CustomLogicClassInstance_o *pCVar3;
  
  if (Il2CppMethodInitialized_075473f5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicClassInstance_ContainsKey);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicClassInstance_get_Item);
    Il2CppMethodInitialized_075473f5 = '\x01';
  }
  pCVar1 = (__this->fields)._evaluator;
  if (pCVar1 == (CustomLogic_CustomLogicEvaluator_o *)0x0) {
    ThrowNullReferenceException();
  }
  __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)(pCVar1->fields)._staticClasses;
  if (__this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    bVar2 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                      (__this_00,(Il2CppObject *)className,
                       (MethodInfo_4AAD6F0 *)
                       MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicClassInstance_ContainsKey
                      );
    if (bVar2) {
      pCVar3 = System_Collections_Generic_Dictionary_object__object___get_Item
                         (__this_00,(Il2CppObject *)className,
                          (MethodInfo_4AAD450 *)
                          MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicClassInstance_get_Item
                         );
      return pCVar3;
    }
  }
  return (CustomLogic_CustomLogicClassInstance_o *)0x0;
}


// CustomLogic.OfflineEvaluator.OfflineCustomLogicEvaluator$$CreateStaticClass
// il2cpp: void CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator__CreateStaticClass (CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator_o* __this, System_String_o* className, const MethodInfo* method);
// 0x5b914b0

void CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator__CreateStaticClass
               (CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator_o *__this,System_String_o *className,
               MethodInfo *method)

{
  CustomLogic_CustomLogicEvaluator_o *pCVar1;
  MethodInfo *in_RCX;
  
  pCVar1 = (__this->fields)._evaluator;
  if (pCVar1 == (CustomLogic_CustomLogicEvaluator_o *)0x0) {
    ThrowNullReferenceException();
  }
  CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator__CreateStaticClassInternal
            (__this,className,(pCVar1->fields)._staticClasses,in_RCX);
  return;
}


// CustomLogic.OfflineEvaluator.OfflineCustomLogicEvaluator$$HasMainClass
// il2cpp: bool CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator__HasMainClass (CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator_o* __this, const MethodInfo* method);
// 0x5b911e0

bool CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator__HasMainClass
               (CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator_o *__this,MethodInfo *method)

{
  CustomLogic_CustomLogicEvaluator_o *pCVar1;
  CustomLogic_CustomLogicStartAst_o *pCVar2;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  bool bVar3;
  
  if (Il2CppMethodInitialized_075473f6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicClassDefinitionAst_ContainsKey
              );
    il2cpp_codegen_initialize_runtime_metadata(&"Main");
    Il2CppMethodInitialized_075473f6 = '\x01';
  }
  pCVar1 = (__this->fields)._evaluator;
  if (pCVar1 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
    pCVar2 = (pCVar1->fields)._start;
    if (pCVar2 == (CustomLogic_CustomLogicStartAst_o *)0x0) {
      return false;
    }
    __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)(pCVar2->fields).Classes;
    if (__this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      bVar3 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                        (__this_00,(Il2CppObject *)"Main",
                         (MethodInfo_4AAD6F0 *)
                         MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicClassDefinitionAst_ContainsKey
                        );
      return bVar3;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.OfflineEvaluator.OfflineCustomLogicEvaluator$$GetMainInstance
// il2cpp: CustomLogic_CustomLogicClassInstance_o* CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator__GetMainInstance (CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator_o* __this, const MethodInfo* method);
// 0x5b914d0

CustomLogic_CustomLogicClassInstance_o *
CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator__GetMainInstance
          (CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator_o *__this,MethodInfo *method)

{
  return (__this->fields)._mainInstance;
}


// CustomLogic.OfflineEvaluator.OfflineCustomLogicEvaluator$$EvaluateMethod
// il2cpp: Il2CppObject* CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator__EvaluateMethod (CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator_o* __this, CustomLogic_CustomLogicClassInstance_o* instance, System_String_o* methodName, System_Object_array* parameters, const MethodInfo* method);
// 0x5b914e0

Il2CppObject *
CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator__EvaluateMethod
          (CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator_o *__this,
          CustomLogic_CustomLogicClassInstance_o *instance,System_String_o *methodName,
          System_Object_array *parameters,MethodInfo *method)

{
  CustomLogic_CustomLogicEvaluator_o *__this_00;
  Il2CppObject *pIVar1;
  
  __this_00 = (__this->fields)._evaluator;
  if (__this_00 == (CustomLogic_CustomLogicEvaluator_o *)0x0) {
    ThrowNullReferenceException();
  }
  pIVar1 = CustomLogic_CustomLogicEvaluator__EvaluateMethod
                     (__this_00,instance,methodName,parameters,0,(MethodInfo *)0x0);
  return pIVar1;
}


// CustomLogic.OfflineEvaluator.OfflineCustomLogicEvaluator$$EvaluateMethod
// il2cpp: Il2CppObject* CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator__EvaluateMethod (CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator_o* __this, System_String_o* className, System_String_o* methodName, System_Object_array* parameters, const MethodInfo* method);
// 0x5b91500

Il2CppObject *
CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator__EvaluateMethod_5a91500
          (CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator_o *__this,System_String_o *className,
          System_String_o *methodName,System_Object_array *parameters,MethodInfo *method)

{
  CustomLogic_CustomLogicEvaluator_o *pCVar1;
  CustomLogic_CustomLogicClassInstance_o *classInstance;
  Il2CppObject *pIVar2;
  
  if (Il2CppMethodInitialized_075473f7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_075473f7 = '\x01';
  }
  pCVar1 = (__this->fields)._evaluator;
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  if (pCVar1 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
    classInstance =
         CustomLogic_CustomLogicEvaluator__CreateClassInstance
                   (pCVar1,className,TypeInfo_CustomLogic_CustomLogicEvaluator->static_fields->EmptyArgs,true,
                    (MethodInfo *)0x0);
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
// 0x5b915b0

CustomLogic_CustomLogicClassInstance_o *
CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator__CreateClassInstance
          (CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator_o *__this,System_String_o *className,
          bool init,MethodInfo *method)

{
  CustomLogic_CustomLogicEvaluator_o *__this_00;
  CustomLogic_CustomLogicClassInstance_o *pCVar1;
  
  if (Il2CppMethodInitialized_075473f8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_075473f8 = '\x01';
  }
  __this_00 = (__this->fields)._evaluator;
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  if (__this_00 == (CustomLogic_CustomLogicEvaluator_o *)0x0) {
    ThrowNullReferenceException();
  }
  pCVar1 = CustomLogic_CustomLogicEvaluator__CreateClassInstance_5a84880
                     (__this_00,className,TypeInfo_CustomLogic_CustomLogicEvaluator->static_fields->EmptyArgs,
                      init,(System_Nullable_CustomLogicSourceType__o)0x0,(MethodInfo *)0x0);
  return pCVar1;
}


// CustomLogic.OfflineEvaluator.OfflineCustomLogicEvaluator$$EvaluateMainMethod
// il2cpp: Il2CppObject* CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator__EvaluateMainMethod (CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator_o* __this, System_String_o* methodName, System_Object_array* parameters, const MethodInfo* method);
// 0x5b91630

Il2CppObject *
CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator__EvaluateMainMethod
          (CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator_o *__this,System_String_o *methodName,
          System_Object_array *parameters,MethodInfo *method)

{
  CustomLogic_CustomLogicClassInstance_o *classInstance;
  CustomLogic_CustomLogicEvaluator_o *__this_00;
  Il2CppObject *pIVar1;
  Il2CppClass *klass;
  System_Exception_o *__this_01;
  System_String_o *message;
  MethodInfo *lastManagedFrame;
  
  classInstance = (__this->fields)._mainInstance;
  if (classInstance == (CustomLogic_CustomLogicClassInstance_o *)0x0) {
    klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
    __this_01 = (System_Exception_o *)il2cpp_codegen_object_new(klass);
    message = il2cpp_codegen_get_runtime_metadata(&"Main class not found or not initialized");
    System_Exception___ctor_54fa440(__this_01,message,(MethodInfo *)0x0);
    lastManagedFrame =
         il2cpp_codegen_get_runtime_metadata
                   (&MethodInfo_CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator_EvaluateMainMethod);
    il2cpp_codegen_raise_exception((Il2CppObject *)__this_01,lastManagedFrame);
  }
  __this_00 = (__this->fields)._evaluator;
  if (__this_00 == (CustomLogic_CustomLogicEvaluator_o *)0x0) {
    ThrowNullReferenceException();
  }
  pIVar1 = CustomLogic_CustomLogicEvaluator__EvaluateMethod
                     (__this_00,classInstance,methodName,parameters,0,(MethodInfo *)0x0);
  return pIVar1;
}


// CustomLogic.OfflineEvaluator.OfflineCustomLogicEvaluator$$GetMainVariable
// il2cpp: Il2CppObject* CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator__GetMainVariable (CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator_o* __this, System_String_o* variableName, const MethodInfo* method);
// 0x5b916b0

Il2CppObject *
CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator__GetMainVariable
          (CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator_o *__this,System_String_o *variableName,
          MethodInfo *method)

{
  CustomLogic_CustomLogicClassInstance_o *__this_00;
  Il2CppObject *pIVar1;
  Il2CppClass *klass;
  System_Exception_o *__this_01;
  System_String_o *message;
  MethodInfo *lastManagedFrame;
  
  __this_00 = (__this->fields)._mainInstance;
  if (__this_00 == (CustomLogic_CustomLogicClassInstance_o *)0x0) {
    klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
    __this_01 = (System_Exception_o *)il2cpp_codegen_object_new(klass);
    message = il2cpp_codegen_get_runtime_metadata(&"Main class not found or not initialized");
    System_Exception___ctor_54fa440(__this_01,message,(MethodInfo *)0x0);
    lastManagedFrame =
         il2cpp_codegen_get_runtime_metadata
                   (&MethodInfo_CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator_GetMainVariable);
    il2cpp_codegen_raise_exception((Il2CppObject *)__this_01,lastManagedFrame);
  }
  pIVar1 = CustomLogic_CustomLogicClassInstance__GetVariable(__this_00,variableName,(MethodInfo *)0x0);
  return pIVar1;
}


// CustomLogic.OfflineEvaluator.OfflineCustomLogicEvaluator$$SetMainVariable
// il2cpp: void CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator__SetMainVariable (CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator_o* __this, System_String_o* variableName, Il2CppObject* value, const MethodInfo* method);
// 0x5b91710

void CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator__SetMainVariable
               (CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator_o *__this,
               System_String_o *variableName,Il2CppObject *value,MethodInfo *method)

{
  CustomLogic_CustomLogicClassInstance_o *pCVar1;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  Il2CppClass *klass;
  System_Exception_o *__this_01;
  System_String_o *message;
  MethodInfo *lastManagedFrame;
  
  if (Il2CppMethodInitialized_075473f9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_object_set_Item);
    Il2CppMethodInitialized_075473f9 = '\x01';
  }
  pCVar1 = (__this->fields)._mainInstance;
  if (pCVar1 == (CustomLogic_CustomLogicClassInstance_o *)0x0) {
    klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
    __this_01 = (System_Exception_o *)il2cpp_codegen_object_new(klass);
    message = il2cpp_codegen_get_runtime_metadata(&"Main class not found or not initialized");
    System_Exception___ctor_54fa440(__this_01,message,(MethodInfo *)0x0);
    lastManagedFrame =
         il2cpp_codegen_get_runtime_metadata
                   (&MethodInfo_CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator_SetMainVariable);
    il2cpp_codegen_raise_exception((Il2CppObject *)__this_01,lastManagedFrame);
  }
  __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)(pCVar1->fields).Variables;
  if (__this_00 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_Dictionary_object__object___set_Item
            (__this_00,(Il2CppObject *)variableName,value,
             (MethodInfo_4AAD4C0 *)MethodInfo_System_Collections_Generic_Dictionary_string_object_set_Item);
  return;
}


// CustomLogic.OfflineEvaluator.OfflineCustomLogicEvaluator$$GetCompiler
// il2cpp: CustomLogic_CustomLogicCompiler_o* CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator__GetCompiler (CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator_o* __this, const MethodInfo* method);
// 0x5b917c0

CustomLogic_CustomLogicCompiler_o *
CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator__GetCompiler
          (CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator_o *__this,MethodInfo *method)

{
  return (__this->fields)._compiler;
}


// CustomLogic.OfflineEvaluator.OfflineCustomLogicEvaluator$$GetCapturedErrors
// il2cpp: System_Collections_Generic_List_CustomLogicError__o* CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator__GetCapturedErrors (CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator_o* __this, const MethodInfo* method);
// 0x5b917d0

System_Collections_Generic_List_CustomLogicError__o *
CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator__GetCapturedErrors
          (CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator_o *__this,MethodInfo *method)

{
  CustomLogic_CustomLogicEvaluator_o *pCVar1;
  
  pCVar1 = (__this->fields)._evaluator;
  if (pCVar1 == (CustomLogic_CustomLogicEvaluator_o *)0x0) {
    ThrowNullReferenceException();
  }
  return (pCVar1->fields)._CapturedErrors_k__BackingField;
}


// CustomLogic.OfflineEvaluator.OfflineCustomLogicEvaluator$$HasErrors
// il2cpp: bool CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator__HasErrors (CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator_o* __this, const MethodInfo* method);
// 0x5b917f0

bool CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator__HasErrors
               (CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator_o *__this,MethodInfo *method)

{
  CustomLogic_CustomLogicEvaluator_o *pCVar1;
  System_Collections_Generic_List_CustomLogicError__o *pSVar2;
  
  if (Il2CppMethodInitialized_075473fa == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_CustomLogicError_get_Count);
    Il2CppMethodInitialized_075473fa = '\x01';
  }
  pCVar1 = (__this->fields)._evaluator;
  if ((pCVar1 == (CustomLogic_CustomLogicEvaluator_o *)0x0) ||
     (pSVar2 = (pCVar1->fields)._CapturedErrors_k__BackingField,
     pSVar2 == (System_Collections_Generic_List_CustomLogicError__o *)0x0)) {
    ThrowNullReferenceException();
  }
  return 0 < (pSVar2->fields)._size;
}


// CustomLogic.OfflineEvaluator.OfflineCustomLogicEvaluator$$ClearErrors
// il2cpp: void CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator__ClearErrors (CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator_o* __this, const MethodInfo* method);
// 0x5b91840

void CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator__ClearErrors
               (CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator_o *__this,MethodInfo *method)

{
  CustomLogic_CustomLogicEvaluator_o *__this_00;
  
  __this_00 = (__this->fields)._evaluator;
  if (__this_00 == (CustomLogic_CustomLogicEvaluator_o *)0x0) {
    ThrowNullReferenceException();
  }
  CustomLogic_CustomLogicEvaluator__ClearCapturedErrors(__this_00,(MethodInfo *)0x0);
  return;
}


// CustomLogic.OfflineEvaluator.OfflineCustomLogicEvaluator$$GetLastError
// il2cpp: CustomLogic_CustomLogicError_o* CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator__GetLastError (CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator_o* __this, const MethodInfo* method);
// 0x5b91860

CustomLogic_CustomLogicError_o *
CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator__GetLastError
          (CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator_o *__this,MethodInfo *method)

{
  int iVar1;
  CustomLogic_CustomLogicEvaluator_o *pCVar2;
  System_Collections_Generic_List_CustomLogicError__o *__this_00;
  CustomLogic_CustomLogicError_o *pCVar3;
  
  if (Il2CppMethodInitialized_075473fb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_CustomLogicError_get_Count);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_CustomLogicError_get_Item);
    Il2CppMethodInitialized_075473fb = '\x01';
  }
  pCVar2 = (__this->fields)._evaluator;
  if ((pCVar2 == (CustomLogic_CustomLogicEvaluator_o *)0x0) ||
     (__this_00 = (pCVar2->fields)._CapturedErrors_k__BackingField,
     __this_00 == (System_Collections_Generic_List_CustomLogicError__o *)0x0)) {
    ThrowNullReferenceException();
  }
  iVar1 = (__this_00->fields)._size;
  if (iVar1 < 1) {
    return (CustomLogic_CustomLogicError_o *)0x0;
  }
  pCVar3 = System_Collections_Generic_List_object___get_Item
                     ((System_Collections_Generic_List_object__o *)__this_00,iVar1 + -1,
                      (MethodInfo_395CF20 *)
                      MethodInfo_System_Collections_Generic_List_CustomLogicError_get_Item);
  return pCVar3;
}


// CustomLogic.OfflineEvaluator.OfflineCustomLogicEvaluator$$.cctor
// il2cpp: void CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator___cctor (const MethodInfo* method);
// 0x5b918d0

void CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_string__o *__this;
  
  if (Il2CppMethodInitialized_075473fc == '\0') {
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
    Il2CppMethodInitialized_075473fc = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)__this,
             (MethodInfo_4FB2EA0 *)MethodInfo_System_Collections_Generic_HashSet_string_ctor);
  if (__this == (System_Collections_Generic_HashSet_string__o *)0x0) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Math",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Convert",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Json",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Random",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"String",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"List",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Set",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Dict",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Range",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Vector2",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Vector3",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Quaternion",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Color",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  TypeInfo_CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator->static_fields->OfflineCompatibleBuiltins
       = __this;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator->static_fields->
              OfflineCompatibleBuiltins);
  return;
}


