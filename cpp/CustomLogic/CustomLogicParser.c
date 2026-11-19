// Type: CustomLogic.CustomLogicParser
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/CustomLogic/CustomLogicParser.cs
// Prior real C# source (older reference): Assets/Scripts/CustomLogic/CustomLogicParser.cs
// --------------------------------

// CustomLogic.CustomLogicParser$$get_Compiler
// il2cpp: CustomLogic_CustomLogicCompiler_o* CustomLogic_CustomLogicParser__get_Compiler (CustomLogic_CustomLogicParser_o* __this, const MethodInfo* method);
// 0x5b7bec0

CustomLogic_CustomLogicCompiler_o *
CustomLogic_CustomLogicParser__get_Compiler(CustomLogic_CustomLogicParser_o *__this,MethodInfo *method)

{
  return (__this->fields)._Compiler_k__BackingField;
}


// CustomLogic.CustomLogicParser$$set_Compiler
// il2cpp: void CustomLogic_CustomLogicParser__set_Compiler (CustomLogic_CustomLogicParser_o* __this, CustomLogic_CustomLogicCompiler_o* value, const MethodInfo* method);
// 0x5b7bed0

void CustomLogic_CustomLogicParser__set_Compiler
               (CustomLogic_CustomLogicParser_o *__this,CustomLogic_CustomLogicCompiler_o *value,
               MethodInfo *method)

{
  (__this->fields)._Compiler_k__BackingField = value;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._Compiler_k__BackingField);
  return;
}


// CustomLogic.CustomLogicParser$$.ctor
// il2cpp: void CustomLogic_CustomLogicParser___ctor (CustomLogic_CustomLogicParser_o* __this, System_Collections_Generic_List_CustomLogicToken__o* tokens, CustomLogic_CustomLogicCompiler_o* compiler, const MethodInfo* method);
// 0x5b77f20

void CustomLogic_CustomLogicParser___ctor
               (CustomLogic_CustomLogicParser_o *__this,
               System_Collections_Generic_List_CustomLogicToken__o *tokens,
               CustomLogic_CustomLogicCompiler_o *compiler,MethodInfo *method)

{
  System_Collections_Generic_List_CustomLogicToken__o *__this_00;
  
  if (Il2CppMethodInitialized_0754738f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_CustomLogicToken_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_CustomLogicToken);
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_0754738f = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_CustomLogicToken);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_CustomLogicToken_ctor);
  (__this->fields)._tokens = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._tokens);
  (__this->fields).Error = "";
  Il2CppCodeGenWriteBarrier(&(__this->fields).Error);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields)._tokens = tokens;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._tokens);
  (__this->fields)._Compiler_k__BackingField = compiler;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._Compiler_k__BackingField);
  return;
}


// CustomLogic.CustomLogicParser$$GetLineNumberString
// il2cpp: System_String_o* CustomLogic_CustomLogicParser__GetLineNumberString (CustomLogic_CustomLogicParser_o* __this, int32_t line, const MethodInfo* method);
// 0x5b7bee0

System_String_o *
CustomLogic_CustomLogicParser__GetLineNumberString
          (CustomLogic_CustomLogicParser_o *__this,int32_t line,MethodInfo *method)

{
  CustomLogic_CustomLogicCompiler_o *__this_00;
  System_String_o *pSVar1;
  int32_t local_4;
  
  __this_00 = (__this->fields)._Compiler_k__BackingField;
  if (__this_00 == (CustomLogic_CustomLogicCompiler_o *)0x0) {
    pSVar1 = System_Int32__ToString(&local_4,(MethodInfo *)0x0);
    return pSVar1;
  }
  pSVar1 = CustomLogic_CustomLogicCompiler__FormatLineNumber(__this_00,line,method);
  return pSVar1;
}


// CustomLogic.CustomLogicParser$$GetStartAst
// il2cpp: CustomLogic_CustomLogicStartAst_o* CustomLogic_CustomLogicParser__GetStartAst (CustomLogic_CustomLogicParser_o* __this, const MethodInfo* method);
// 0x5b77ff0
// eh: try 0x5b78032..0x5b78061 -> pad 0x5b78061 (+1 call sites) catch Il2CppExceptionWrapper, cleanup [managed catch: TypeInfo_System_Exception]
// eh: try 0x5b7807a..0x5b781ed -> pad 0x5b781ed (+1 call sites) cleanup
// eh: try 0x5b781f0..0x5b781f5 -> pad 0x5b781fd catch (...) [compiler noexcept guard]
// asm: 99 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b78061: jmp 0x5b78063
// asm:   0x5b78063: mov rbx, rax
// asm:   0x5b78066: cmp edx, 1
// asm:   0x5b78069: jne 0x5b781f5
// asm:   0x5b7806f: mov rdi, rbx
// asm:   0x5b78072: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5b78077: mov rbx, rax
// asm:   0x5b7807a: lea rdi, [rip + 0x170003f]  ; TypeInfo_System_Exception
// asm:   0x5b78081: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x5b78086: mov rcx, qword ptr [rbx]
// asm:   0x5b78089: mov rsi, qword ptr [rcx]
// asm:   0x5b7808c: mov rdi, rax
// asm:   0x5b7808f: call 0x30d6910  ; il2cpp_runtime_helper_030d6910()
// asm:   0x5b78094: test al, al
// asm:   0x5b78096: je 0x5b781cc
// asm:   0x5b7809c: mov r14, qword ptr [rbx]
// asm:   0x5b7809f: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5b780a4: test r14, r14
// asm:   0x5b780a7: je 0x5b781c7
// asm:   0x5b780ad: mov rax, qword ptr [r14]
// asm:   0x5b780b0: mov rsi, qword ptr [rax + 0x190]
// asm:   0x5b780b7: mov rdi, r14
// asm:   0x5b780ba: call qword ptr [rax + 0x188]  ; vtable slot 5
// asm:   0x5b780c0: mov qword ptr [r15 + 0x18], rax
// asm:   0x5b780c4: add r15, 0x18
// asm:   0x5b780c8: mov rdi, r15
// asm:   0x5b780cb: mov rsi, rax
// asm:   0x5b780ce: call 0x30d5fb0  ; Il2CppCodeGenWriteBarrier()
// asm:   0x5b780d3: lea rdi, [rip + 0x1704b76]  ; TypeInfo_Settings_SettingsManager
// asm:   0x5b780da: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x5b780df: mov rax, qword ptr [rax + 0xb8]
// asm:   0x5b780e6: cmp qword ptr [rax + 0x28], 0
// asm:   0x5b780eb: je 0x5b78133
// asm:   0x5b780ed: lea rdi, [rip + 0x1704b5c]  ; TypeInfo_Settings_SettingsManager
// asm:   0x5b780f4: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x5b780f9: mov rax, qword ptr [rax + 0xb8]
// asm:   0x5b78100: mov rax, qword ptr [rax + 0x28]
// asm:   0x5b78104: test rax, rax
// asm:   0x5b78107: je 0x5b781c7
// asm:   0x5b7810d: mov rbx, qword ptr [rax + 0x1a0]
// asm:   0x5b78114: test rbx, rbx
// asm:   0x5b78117: je 0x5b781c7
// asm:   0x5b7811d: lea rdi, [rip + 0x1726c4c]  ; MethodInfo_Settings_TypedSetting_bool_get_Value
// asm:   0x5b78124: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x5b78129: cmp byte ptr [rbx + 0x19], 0
// asm:   0x5b7812d: setne bpl
// asm:   0x5b78131: jmp 0x5b78135
// asm:   0x5b78133: xor ebp, ebp
// asm:   0x5b78135: mov rax, qword ptr [r14]
// asm:   0x5b78138: mov rsi, qword ptr [rax + 0x190]
// asm:   0x5b7813f: mov rdi, r14
// asm:   0x5b78142: call qword ptr [rax + 0x188]  ; vtable slot 5
// asm:   0x5b78148: mov rbx, rax
// asm:   0x5b7814b: lea rdi, [rip + 0x1760dbe]  ; "Custom logic parsing error: "
// asm:   0x5b78152: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x5b78157: mov rdi, rax
// asm:   0x5b7815a: mov rsi, rbx
// asm:   0x5b7815d: xor edx, edx
// asm:   0x5b7815f: call 0x53f0320  ; System_String__Concat()
// asm:   0x5b78164: mov rbx, rax
// asm:   0x5b78167: lea rdi, [rip + 0x16ff4f2]  ; TypeInfo_ApplicationManagers_DebugConsole
// asm:   0x5b7816e: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x5b78173: cmp dword ptr [rax + 0xe4], 0
// asm:   0x5b7817a: jne 0x5b78184
// asm:   0x5b7817c: mov rdi, rax
// asm:   0x5b7817f: call 0x30d6240  ; il2cpp_codegen_runtime_class_init()
// asm:   0x5b78184: movzx esi, bpl
// asm:   0x5b78188: mov rdi, rbx
// asm:   0x5b7818b: xor edx, edx
// asm:   0x5b7818d: call 0x5e0fb40  ; ApplicationManagers_DebugConsole__LogCustomLogic()
// asm:   0x5b78192: lea rdi, [rip + 0x16feed7]  ; TypeInfo_CustomLogic_CustomLogicStartAst
// asm:   0x5b78199: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x5b7819e: mov rdi, rax
// asm:   0x5b781a1: call 0x30d6370  ; il2cpp_runtime_helper_030d6370()
// asm:   0x5b781a6: mov rbx, rax
// asm:   0x5b781a9: mov rdi, rax
// asm:   0x5b781ac: xor esi, esi
// asm:   0x5b781ae: call 0x59a92f0  ; CustomLogic_CustomLogicStartAst___ctor()
// asm:   0x5b781b3: test rbx, rbx
// asm:   0x5b781b6: je 0x5b781c7
// asm:   0x5b781b8: mov rdi, rbx
// asm:   0x5b781bb: xor esi, esi
// asm:   0x5b781bd: call 0x59a93c0  ; CustomLogic_CustomLogicStartAst__AddEmptyMain()
// asm:   0x5b781c2: jmp 0x5b7804e
// asm:   0x5b781c7: call 0x30d63a0  ; ThrowNullReferenceException()
// asm:   0x5b781cc: mov edi, 8
// asm:   0x5b781d1: call 0x6e255b0  ; __cxa_allocate_exception()
// asm:   0x5b781d6: mov rcx, qword ptr [rbx]
// asm:   0x5b781d9: mov qword ptr [rax], rcx
// asm:   0x5b781dc: lea rsi, [rip + 0x12b531d]
// asm:   0x5b781e3: mov rdi, rax
// asm:   0x5b781e6: xor edx, edx
// asm:   0x5b781e8: call 0x6e255c0  ; __cxa_throw()
// asm:   0x5b781ed: mov rbx, rax
// asm:   0x5b781f0: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5b781f5: mov rdi, rbx
// asm:   0x5b781f8: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5b781fd: mov rdi, rax
// asm:   0x5b78200: call 0x2ab61e0  ; __clang_call_terminate()

CustomLogic_CustomLogicStartAst_o *
CustomLogic_CustomLogicParser__GetStartAst(CustomLogic_CustomLogicParser_o *__this,MethodInfo *method)

{
  CustomLogic_CustomLogicStartAst_o *__this_00;
  MethodInfo *in_RCX;
  
  if (Il2CppMethodInitialized_07547390 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicStartAst);
    Il2CppMethodInitialized_07547390 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicStartAst);
  CustomLogic_CustomLogicStartAst___ctor(__this_00,(MethodInfo *)0x0);
  CustomLogic_CustomLogicParser__ParseAst(__this,0,(CustomLogic_CustomLogicBaseAst_o *)__this_00,in_RCX);
  if (__this_00 == (CustomLogic_CustomLogicStartAst_o *)0x0) {
    ThrowNullReferenceException();
  }
  CustomLogic_CustomLogicStartAst__AddEmptyMain(__this_00,(MethodInfo *)0x0);
  return __this_00;
}


// CustomLogic.CustomLogicParser$$ParseExpression
// il2cpp: CustomLogic_CustomLogicBaseExpressionAst_o* CustomLogic_CustomLogicParser__ParseExpression (CustomLogic_CustomLogicParser_o* __this, CustomLogic_CustomLogicBaseExpressionAst_o* prev, int32_t startIndex, int32_t endIndex, const MethodInfo* method);
// 0x5b7d3e0
// asm: 7 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b7d58a: test eax, eax
// asm:   0x5b7d58c: je 0x5b7d60c
// asm:   0x5b7d597: jmp 0x5b7d690
// asm:   0x5b7d681: nop word ptr cs:[rax + rax]
// asm:   0x5b7d93f: nop 
// asm:   0x5b7d993: jmp 0x5b7da0f
// asm:   0x5b7da0c: mov ebp, r13d

CustomLogic_CustomLogicBaseExpressionAst_o *
CustomLogic_CustomLogicParser__ParseExpression
          (CustomLogic_CustomLogicParser_o *__this,CustomLogic_CustomLogicBaseExpressionAst_o *prev,
          int32_t startIndex,int32_t endIndex,MethodInfo *method)

{
  int32_t *piVar1;
  int iVar2;
  uint uVar3;
  Il2CppObject *value;
  System_Collections_Generic_List_CustomLogicBaseAst__o *pSVar4;
  CustomLogic_CustomLogicBaseAst_array *pCVar5;
  bool bVar6;
  int32_t iVar7;
  int iVar8;
  CustomLogic_CustomLogicToken_o *token;
  CustomLogic_CustomLogicToken_o *pCVar9;
  int *piVar10;
  CustomLogic_CustomLogicToken_o *pCVar11;
  CustomLogic_CustomLogicMethodCallExpressionAst_o *pCVar12;
  System_Int32_array *pSVar13;
  il2cpp_array_size_t iVar14;
  CustomLogic_CustomLogicBaseExpressionAst_o *pCVar15;
  CustomLogic_CustomLogicAssignmentExpressionAst_o *__this_00;
  undefined4 in_register_0000000c;
  MethodInfo *pMVar16;
  MethodInfo **method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *method_03;
  System_String_o *pSVar17;
  CustomLogic_CustomLogicAssignmentExpressionAst_o *prev_00;
  CustomLogic_CustomLogicParser_o *__this_01;
  System_Collections_Generic_List_CustomLogicToken__o *pSVar18;
  CustomLogic_CustomLogicToken_o **targetAddress;
  ulong uVar19;
  
  method_00 = (MethodInfo **)CONCAT44(in_register_0000000c,endIndex);
label_05b7d43d:
  if (Il2CppMethodInitialized_07547391 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicAssignmentExpressionAst);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicBinopExpressionAst);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicClassInstantiateExpressionAst)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicFieldExpressionAst);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicMethodCallExpressionAst);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicNotExpressionAst);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicPrimitiveExpressionAst);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicUnaryExpressionAst);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVariableExpressionAst);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_int_array);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_CustomLogicBaseAst_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_CustomLogicToken_get_Count);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_CustomLogicToken_get_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               FieldRva_PrivateImplementationDetails_A96D128D7C4FCB36E9F24CD74A9A916557FDB0792B43C708719409C6DE503E81
              );
    Il2CppMethodInitialized_07547391 = '\x01';
  }
  pSVar18 = (__this->fields)._tokens;
  if (pSVar18 == (System_Collections_Generic_List_CustomLogicToken__o *)0x0) goto label_05b7dc79;
  token = System_Collections_Generic_List_object___get_Item
                    ((System_Collections_Generic_List_object__o *)pSVar18,startIndex,
                     (MethodInfo_395CF20 *)
                     MethodInfo_System_Collections_Generic_List_CustomLogicToken_get_Item);
  if (endIndex < startIndex) {
    return (CustomLogic_CustomLogicBaseExpressionAst_o *)
           (CustomLogic_CustomLogicMethodCallExpressionAst_o *)prev;
  }
  pSVar18 = (__this->fields)._tokens;
  if (pSVar18 == (System_Collections_Generic_List_CustomLogicToken__o *)0x0) goto label_05b7dc79;
  if (startIndex < (pSVar18->fields)._size + -1) {
    pCVar9 = System_Collections_Generic_List_object___get_Item
                       ((System_Collections_Generic_List_object__o *)pSVar18,startIndex + 1,
                        (MethodInfo_395CF20 *)
                        MethodInfo_System_Collections_Generic_List_CustomLogicToken_get_Item);
  }
  else {
    pCVar9 = (CustomLogic_CustomLogicToken_o *)0x0;
  }
  __this_01 = __this;
  iVar7 = CustomLogic_CustomLogicParser__FindLowestBinop(__this,startIndex,endIndex,(MethodInfo *)method_00);
  if (0 < iVar7) {
    pSVar18 = (__this->fields)._tokens;
    if (pSVar18 == (System_Collections_Generic_List_CustomLogicToken__o *)0x0) goto label_05b7dc79;
    pCVar9 = System_Collections_Generic_List_object___get_Item
                       ((System_Collections_Generic_List_object__o *)pSVar18,iVar7,
                        (MethodInfo_395CF20 *)
                        MethodInfo_System_Collections_Generic_List_CustomLogicToken_get_Item);
    pCVar15 = CustomLogic_CustomLogicParser__ParseExpression
                        (__this,(CustomLogic_CustomLogicBaseExpressionAst_o *)0x0,startIndex,iVar7 + -1,method
                        );
    pMVar16 = (MethodInfo *)(ulong)(uint)endIndex;
    pCVar11 = (CustomLogic_CustomLogicToken_o *)
              CustomLogic_CustomLogicParser__ParseExpression
                        (__this,(CustomLogic_CustomLogicBaseExpressionAst_o *)0x0,iVar7 + 1,endIndex,method);
    pSVar13 = (System_Int32_array *)SZArrayNew(TypeInfo_int_array,5);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_53cbb40
              ((System_Array_o *)pSVar13,
               FieldRva_PrivateImplementationDetails_A96D128D7C4FCB36E9F24CD74A9A916557FDB0792B43C708719409C6DE503E81
               ,(MethodInfo *)0x0);
    bVar6 = CustomLogic_CustomLogicParser__IsAnySymbolValue(__this,pCVar9,pSVar13,pMVar16);
    if (!bVar6) {
      if (pCVar9 != (CustomLogic_CustomLogicToken_o *)0x0) {
        iVar7 = (pCVar9->fields).Line;
        __this_00 = (CustomLogic_CustomLogicAssignmentExpressionAst_o *)
                    il2cpp_codegen_object_new
                              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicBinopExpressionAst);
        CustomLogic_CustomLogicBinopExpressionAst___ctor
                  ((CustomLogic_CustomLogicBinopExpressionAst_o *)__this_00,pCVar9,iVar7,(MethodInfo *)0x0);
        if (__this_00 != (CustomLogic_CustomLogicAssignmentExpressionAst_o *)0x0) {
          (__this_00->fields).Left = pCVar15;
          Il2CppCodeGenWriteBarrier(&(__this_00->fields).Left);
          targetAddress = &(__this_00->fields).Operator;
          (__this_00->fields).Operator = pCVar11;
          goto label_05b7dc5e;
        }
      }
      goto label_05b7dc79;
    }
    if (token == (CustomLogic_CustomLogicToken_o *)0x0) goto label_05b7dc79;
    iVar7 = (token->fields).Line;
    __this_00 = il2cpp_codegen_object_new
                          ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAssignmentExpressionAst);
    CustomLogic_CustomLogicAssignmentExpressionAst___ctor(__this_00,pCVar15,pCVar9,iVar7,(MethodInfo *)0x0);
    if (__this_00 == (CustomLogic_CustomLogicAssignmentExpressionAst_o *)0x0) goto label_05b7dc79;
    targetAddress = (CustomLogic_CustomLogicToken_o **)&(__this_00->fields).Right;
    (__this_00->fields).Right = (CustomLogic_CustomLogicBaseExpressionAst_o *)pCVar11;
    goto label_05b7dc5e;
  }
  if (token == (CustomLogic_CustomLogicToken_o *)0x0) goto label_05b7dc79;
  iVar8 = (token->fields).Type;
  if (iVar8 == 0) {
    __this_01 = (CustomLogic_CustomLogicParser_o *)(token->fields).Value;
    if (__this_01 == (CustomLogic_CustomLogicParser_o *)0x0) goto label_05b7dc79;
    if ((((Il2CppClass *)__this_01->klass)->_1).element_class != *(Il2CppClass **)(g_data_07556710 + 0x40))
    goto label_05b7dc83;
    piVar10 = il2cpp_vm_Object_Unbox((Il2CppObject *)__this_01);
    if (*piVar10 == 0xb) {
      iVar7 = CustomLogic_CustomLogicParser__FindClosingParen(__this,startIndex,method_01);
      method_00 = (MethodInfo **)(ulong)(iVar7 - 1U);
      prev = CustomLogic_CustomLogicParser__ParseExpression
                       (__this,(CustomLogic_CustomLogicBaseExpressionAst_o *)0x0,startIndex + 1,iVar7 - 1U,
                        method);
      startIndex = iVar7 + 1;
      goto label_05b7d43d;
    }
    iVar8 = (token->fields).Type;
  }
  if (iVar8 != 0) {
    if (iVar8 != 1) goto label_05b7d690;
    value = (token->fields).Value;
    iVar7 = (token->fields).Line;
    prev = (CustomLogic_CustomLogicBaseExpressionAst_o *)
           il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPrimitiveExpressionAst);
    method_00 = (MethodInfo **)0x0;
    CustomLogic_CustomLogicPrimitiveExpressionAst___ctor
              ((CustomLogic_CustomLogicPrimitiveExpressionAst_o *)prev,value,iVar7,(MethodInfo *)0x0);
    startIndex = startIndex + 1;
    goto label_05b7d43d;
  }
  __this_01 = (CustomLogic_CustomLogicParser_o *)(token->fields).Value;
  if (__this_01 == (CustomLogic_CustomLogicParser_o *)0x0) goto label_05b7dc79;
  if ((((Il2CppClass *)__this_01->klass)->_1).element_class != *(Il2CppClass **)(g_data_07556710 + 0x40)) {
label_05b7dc83:
    il2cpp_codegen_raise_invalid_cast_exception();
  }
  piVar10 = il2cpp_vm_Object_Unbox((Il2CppObject *)__this_01);
  if (*piVar10 == 0x13) {
    if (pCVar9 == (CustomLogic_CustomLogicToken_o *)0x0) goto label_05b7dc79;
    iVar7 = (pCVar9->fields).Line;
    __this_00 = (CustomLogic_CustomLogicAssignmentExpressionAst_o *)
                il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicNotExpressionAst);
    CustomLogic_CustomLogicNotExpressionAst___ctor
              ((CustomLogic_CustomLogicNotExpressionAst_o *)__this_00,iVar7,(MethodInfo *)0x0);
    prev_00 = __this_00;
  }
  else {
    if ((token->fields).Type == 0) {
      __this_01 = (CustomLogic_CustomLogicParser_o *)(token->fields).Value;
      if (__this_01 == (CustomLogic_CustomLogicParser_o *)0x0) goto label_05b7dc79;
      if ((((Il2CppClass *)__this_01->klass)->_1).element_class != *(Il2CppClass **)(g_data_07556710 + 0x40))
      goto label_05b7dc83;
      piVar10 = il2cpp_vm_Object_Unbox((Il2CppObject *)__this_01);
      if (*piVar10 != 0x22) goto label_05b7d690;
    }
    else {
label_05b7d690:
      bVar6 = CustomLogic_CustomLogicParser__IsSymbolValue(__this_01,token,0x21,(MethodInfo *)method_00);
      if (!bVar6) {
        bVar6 = CustomLogic_CustomLogicParser__IsSymbolValue(__this_01,token,0x29,(MethodInfo *)method_00);
        if (!bVar6) {
          if ((token->fields).Type != 2) {
            return (CustomLogic_CustomLogicBaseExpressionAst_o *)0x0;
          }
          bVar6 = CustomLogic_CustomLogicParser__IsSymbolValue(__this_01,pCVar9,0xb,(MethodInfo *)method_00);
          pSVar17 = (System_String_o *)(token->fields).Value;
          iVar7 = (token->fields).Line;
          if (!bVar6) {
            prev = (CustomLogic_CustomLogicBaseExpressionAst_o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVariableExpressionAst);
            if ((pSVar17 != (System_String_o *)0x0) && (pSVar17->klass != g_data_07556758)) goto label_05b7dc88;
            method_00 = (MethodInfo **)0x0;
            CustomLogic_CustomLogicVariableExpressionAst___ctor
                      ((CustomLogic_CustomLogicVariableExpressionAst_o *)prev,pSVar17,iVar7,(MethodInfo *)0x0)
            ;
            startIndex = startIndex + 1;
            goto label_05b7d43d;
          }
          pCVar12 = (CustomLogic_CustomLogicMethodCallExpressionAst_o *)
                    il2cpp_codegen_object_new
                              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicClassInstantiateExpressionAst);
          if ((pSVar17 != (System_String_o *)0x0) && (pSVar17->klass != g_data_07556758)) {
label_05b7dc88:
            il2cpp_codegen_raise_invalid_cast_exception(pSVar17);
          }
          pMVar16 = (MethodInfo *)0x0;
          CustomLogic_CustomLogicClassInstantiateExpressionAst___ctor
                    ((CustomLogic_CustomLogicClassInstantiateExpressionAst_o *)pCVar12,pSVar17,iVar7,
                     (MethodInfo *)0x0);
          if (pCVar12 == (CustomLogic_CustomLogicMethodCallExpressionAst_o *)0x0) goto label_05b7dc79;
          (((CustomLogic_CustomLogicClassInstantiateExpressionAst_o *)pCVar12)->fields).Left = prev;
          Il2CppCodeGenWriteBarrier
                    (&(((CustomLogic_CustomLogicClassInstantiateExpressionAst_o *)pCVar12)->fields).Left);
          iVar8 = CustomLogic_CustomLogicParser__FindClosingParen(__this,startIndex + 1,method_03);
          iVar7 = startIndex + 2;
          pSVar13 = CustomLogic_CustomLogicParser__FindCommas(__this,iVar7,iVar8,pMVar16);
          if (pSVar13 == (System_Int32_array *)0x0) goto label_05b7dc79;
          iVar14 = pSVar13->max_length;
          if ((iVar14 != 0) && (0 < (int)iVar14)) {
            uVar19 = 0;
            do {
              if ((iVar14 & 0xffffffff) <= uVar19) goto label_05b7dc7e;
              iVar2 = pSVar13->m_Items[uVar19];
              pCVar15 = CustomLogic_CustomLogicParser__ParseExpression
                                  (__this,(CustomLogic_CustomLogicBaseExpressionAst_o *)0x0,iVar7,iVar2 + -1,
                                   method);
              pSVar4 = (((CustomLogic_CustomLogicClassInstantiateExpressionAst_o *)pCVar12)->fields).
                       Parameters;
              if (pSVar4 == (System_Collections_Generic_List_CustomLogicBaseAst__o *)0x0) goto label_05b7dc79;
              il2cpp_runtime_helper_02fd7670(pSVar4,pCVar15,MethodInfo_System_Collections_Generic_List_CustomLogicBaseAst_Add);
              iVar7 = iVar2 + 1;
              uVar19 = uVar19 + 1;
              uVar3 = (uint)pSVar13->max_length;
              iVar14 = (il2cpp_array_size_t)uVar3;
            } while ((long)uVar19 < (long)(int)uVar3);
          }
label_05b7da0f:
          method_00 = (MethodInfo **)(ulong)(iVar8 - 1U);
          pCVar15 = CustomLogic_CustomLogicParser__ParseExpression
                              (__this,(CustomLogic_CustomLogicBaseExpressionAst_o *)0x0,iVar7,iVar8 - 1U,
                               method);
          if (pCVar15 != (CustomLogic_CustomLogicBaseExpressionAst_o *)0x0) {
            pSVar4 = (pCVar12->fields).Parameters;
            if (pSVar4 == (System_Collections_Generic_List_CustomLogicBaseAst__o *)0x0) goto label_05b7dc79;
            method_00 = &MethodInfo_System_Collections_Generic_List_CustomLogicBaseAst_Add;
            il2cpp_runtime_helper_02fd7670(pSVar4,pCVar15,MethodInfo_System_Collections_Generic_List_CustomLogicBaseAst_Add);
          }
          prev = (CustomLogic_CustomLogicBaseExpressionAst_o *)pCVar12;
          startIndex = iVar8 + 1;
          goto label_05b7d43d;
        }
        CustomLogic_CustomLogicParser__AssertTokenType(__this,pCVar9,2,(MethodInfo *)method_00);
        pSVar18 = (__this->fields)._tokens;
        if (pSVar18 == (System_Collections_Generic_List_CustomLogicToken__o *)0x0) goto label_05b7dc79;
        iVar8 = startIndex + 2;
        pCVar11 = System_Collections_Generic_List_object___get_Item
                            ((System_Collections_Generic_List_object__o *)pSVar18,iVar8,
                             (MethodInfo_395CF20 *)
                             MethodInfo_System_Collections_Generic_List_CustomLogicToken_get_Item);
        bVar6 = CustomLogic_CustomLogicParser__IsSymbolValue
                          ((CustomLogic_CustomLogicParser_o *)pSVar18,pCVar11,0xb,(MethodInfo *)method_00);
        if (bVar6) {
          if (pCVar9 == (CustomLogic_CustomLogicToken_o *)0x0) goto label_05b7dc79;
          pSVar17 = (System_String_o *)(pCVar9->fields).Value;
          iVar7 = (token->fields).Line;
          pCVar12 = il2cpp_codegen_object_new
                              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMethodCallExpressionAst);
          if ((pSVar17 != (System_String_o *)0x0) && (pSVar17->klass != g_data_07556758)) {
            il2cpp_codegen_raise_invalid_cast_exception(pSVar17);
          }
          pMVar16 = (MethodInfo *)0x0;
          CustomLogic_CustomLogicMethodCallExpressionAst___ctor(pCVar12,pSVar17,iVar7,(MethodInfo *)0x0);
          if (pCVar12 == (CustomLogic_CustomLogicMethodCallExpressionAst_o *)0x0) goto label_05b7dc79;
          (pCVar12->fields).Left = prev;
          Il2CppCodeGenWriteBarrier(&(pCVar12->fields).Left);
          iVar8 = CustomLogic_CustomLogicParser__FindClosingParen(__this,iVar8,method_02);
          iVar7 = startIndex + 3;
          pSVar13 = CustomLogic_CustomLogicParser__FindCommas(__this,iVar7,iVar8,pMVar16);
          if (pSVar13 == (System_Int32_array *)0x0) goto label_05b7dc79;
          iVar14 = pSVar13->max_length;
          if ((iVar14 != 0) && (0 < (int)iVar14)) {
            uVar19 = 0;
            do {
              if ((iVar14 & 0xffffffff) <= uVar19) {
label_05b7dc7e:
                ThrowIndexOutOfRangeException();
              }
              iVar2 = pSVar13->m_Items[uVar19];
              pCVar15 = CustomLogic_CustomLogicParser__ParseExpression
                                  (__this,(CustomLogic_CustomLogicBaseExpressionAst_o *)0x0,iVar7,iVar2 + -1,
                                   method);
              pMVar16 = MethodInfo_System_Collections_Generic_List_CustomLogicBaseAst_Add;
              pSVar4 = (pCVar12->fields).Parameters;
              if (pSVar4 == (System_Collections_Generic_List_CustomLogicBaseAst__o *)0x0) goto label_05b7dc79;
              piVar1 = &(pSVar4->fields)._version;
              *piVar1 = *piVar1 + 1;
              pCVar5 = (pSVar4->fields)._items;
              if (pCVar5 == (CustomLogic_CustomLogicBaseAst_array *)0x0) goto label_05b7dc79;
              uVar3 = (pSVar4->fields)._size;
              if (uVar3 < (uint)pCVar5->max_length) {
                (pSVar4->fields)._size = uVar3 + 1;
                pCVar5->m_Items[(int)uVar3] = (CustomLogic_CustomLogicBaseAst_o *)pCVar15;
                Il2CppCodeGenWriteBarrier(pCVar5->m_Items + (int)uVar3);
              }
              else {
                System_Collections_Generic_List_object___AddWithResize
                          ((System_Collections_Generic_List_object__o *)pSVar4,(Il2CppObject *)pCVar15,
                           (MethodInfo_395D230 *)pMVar16->klass->rgctx_data[0xe].method);
              }
              iVar7 = iVar2 + 1;
              uVar19 = uVar19 + 1;
              uVar3 = (uint)pSVar13->max_length;
              iVar14 = (il2cpp_array_size_t)uVar3;
            } while ((long)uVar19 < (long)(int)uVar3);
          }
          goto label_05b7da0f;
        }
        if (pCVar9 == (CustomLogic_CustomLogicToken_o *)0x0) goto label_05b7dc79;
        pSVar17 = (System_String_o *)(pCVar9->fields).Value;
        iVar7 = (token->fields).Line;
        pCVar12 = (CustomLogic_CustomLogicMethodCallExpressionAst_o *)
                  il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicFieldExpressionAst)
        ;
        if ((pSVar17 != (System_String_o *)0x0) && (pSVar17->klass != g_data_07556758)) goto label_05b7dc88;
        method_00 = (MethodInfo **)0x0;
        CustomLogic_CustomLogicFieldExpressionAst___ctor
                  ((CustomLogic_CustomLogicFieldExpressionAst_o *)pCVar12,pSVar17,iVar7,(MethodInfo *)0x0);
        if (pCVar12 != (CustomLogic_CustomLogicMethodCallExpressionAst_o *)0x0) {
          (pCVar12->fields).Parameters = (System_Collections_Generic_List_CustomLogicBaseAst__o *)prev;
          Il2CppCodeGenWriteBarrier(&(pCVar12->fields).Parameters);
          prev = (CustomLogic_CustomLogicBaseExpressionAst_o *)pCVar12;
          startIndex = iVar8;
          goto label_05b7d43d;
        }
        goto label_05b7dc79;
      }
    }
    iVar7 = (token->fields).Line;
    __this_00 = (CustomLogic_CustomLogicAssignmentExpressionAst_o *)
                il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUnaryExpressionAst);
    CustomLogic_CustomLogicUnaryExpressionAst___ctor
              ((CustomLogic_CustomLogicUnaryExpressionAst_o *)__this_00,token,iVar7,(MethodInfo *)0x0);
    prev_00 = (CustomLogic_CustomLogicAssignmentExpressionAst_o *)0x0;
  }
  pCVar15 = CustomLogic_CustomLogicParser__ParseExpression
                      (__this,(CustomLogic_CustomLogicBaseExpressionAst_o *)prev_00,startIndex + 1,endIndex,
                       method);
  if (__this_00 != (CustomLogic_CustomLogicAssignmentExpressionAst_o *)0x0) {
    targetAddress = (CustomLogic_CustomLogicToken_o **)&(__this_00->fields).Left;
    (__this_00->fields).Left = pCVar15;
label_05b7dc5e:
    Il2CppCodeGenWriteBarrier(targetAddress);
    return (CustomLogic_CustomLogicBaseExpressionAst_o *)__this_00;
  }
label_05b7dc79:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicParser$$ParseExpressionAst
// il2cpp: System_Object_array* CustomLogic_CustomLogicParser__ParseExpressionAst (CustomLogic_CustomLogicParser_o* __this, int32_t startIndex, const MethodInfo* method);
// 0x5b7e540

System_Object_array *
CustomLogic_CustomLogicParser__ParseExpressionAst
          (CustomLogic_CustomLogicParser_o *__this,int32_t startIndex,MethodInfo *method)

{
  int32_t iVar1;
  System_Object_array *pSVar2;
  Il2CppObject *pIVar3;
  Il2CppObject *pIVar4;
  CustomLogic_CustomLogicBaseExpressionAst_o *obj;
  MethodInfo *extraout_RDX;
  MethodInfo *in_R8;
  int local_2c;
  
  if (Il2CppMethodInitialized_07547392 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    Il2CppMethodInitialized_07547392 = '\x01';
    method = extraout_RDX;
  }
  iVar1 = CustomLogic_CustomLogicParser__FindSemicolon(__this,startIndex,method);
  pSVar2 = (System_Object_array *)SZArrayNew(TypeInfo_object_array,2);
  local_2c = iVar1 + 1;
  pIVar3 = il2cpp_vm_Object_Box(g_data_07556710,&local_2c);
  if (pSVar2 == (System_Object_array *)0x0) {
    ThrowNullReferenceException();
  }
  if (pIVar3 != (Il2CppObject *)0x0) {
    pIVar4 = il2cpp_vm_Object_IsInst(pIVar3,(((pSVar2->obj).klass)->_1).element_class);
    if (pIVar4 == (Il2CppObject *)0x0) goto label_05b7e64c;
  }
  if ((int)pSVar2->max_length != 0) {
    pSVar2->m_Items[0] = pIVar3;
    Il2CppCodeGenWriteBarrier(pSVar2->m_Items);
    obj = CustomLogic_CustomLogicParser__ParseExpression
                    (__this,(CustomLogic_CustomLogicBaseExpressionAst_o *)0x0,startIndex,iVar1 + -1,in_R8);
    if (obj != (CustomLogic_CustomLogicBaseExpressionAst_o *)0x0) {
      pIVar3 = il2cpp_vm_Object_IsInst((Il2CppObject *)obj,(((pSVar2->obj).klass)->_1).element_class);
      if (pIVar3 == (Il2CppObject *)0x0) {
label_05b7e64c:
        pIVar3 = il2cpp_codegen_get_array_type_mismatch_exception();
        il2cpp_codegen_raise_exception(pIVar3,(MethodInfo *)0x0);
      }
    }
    if ((pSVar2->max_length & 0xfffffffe) != 0) {
      pSVar2->m_Items[1] = (Il2CppObject *)obj;
      Il2CppCodeGenWriteBarrier(pSVar2->m_Items + 1);
      return pSVar2;
    }
  }
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicParser$$ParseAst
// il2cpp: int32_t CustomLogic_CustomLogicParser__ParseAst (CustomLogic_CustomLogicParser_o* __this, int32_t startIndex, CustomLogic_CustomLogicBaseAst_o* prev, const MethodInfo* method);
// 0x5b7bf10

int32_t CustomLogic_CustomLogicParser__ParseAst
                  (CustomLogic_CustomLogicParser_o *__this,int32_t startIndex,
                  CustomLogic_CustomLogicBaseAst_o *prev,MethodInfo *method)

{
  int32_t *piVar1;
  byte bVar2;
  CustomLogic_CustomLogicCompiler_o *__this_00;
  CustomLogic_CustomLogicToken_array *pCVar3;
  System_Collections_Generic_List_CustomLogicDecorator__o *__this_01;
  CustomLogic_CustomLogicBaseAst_c *__this_02;
  System_Collections_Generic_List_string__o *__this_03;
  System_String_array *pSVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  int32_t iVar8;
  CustomLogic_CustomLogicToken_o *token;
  System_Object_array *pSVar9;
  int *piVar10;
  Il2CppObject *pIVar11;
  CustomLogic_CustomLogicConditionalBlockAst_o *__this_04;
  CustomLogic_CustomLogicToken_o *pCVar12;
  CustomLogic_CustomLogicPrimitiveExpressionAst_o *pCVar13;
  CustomLogic_CustomLogicClassDefinitionAst_o *__this_05;
  CustomLogic_CustomLogicCompiler_FileRange_o *pCVar14;
  System_Collections_Generic_List_CustomLogicToken__o *__this_06;
  uint *puVar15;
  CustomLogic_CustomLogicVariableExpressionAst_o *pCVar16;
  CustomLogic_CustomLogicAssignmentExpressionAst_o *__this_07;
  CustomLogic_CustomLogicBaseExpressionAst_o *pCVar17;
  CustomLogic_CustomLogicContinueExpressionAst_o *__this_08;
  CustomLogic_CustomLogicReturnExpressionAst_o *__this_09;
  CustomLogic_CustomLogicMethodDefinitionAst_o *__this_10;
  Il2CppClass *pIVar18;
  uint *method_00;
  MethodInfo **ppMVar19;
  MethodInfo *pMVar20;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
  MethodInfo *extraout_RDX_03;
  MethodInfo *extraout_RDX_04;
  MethodInfo *extraout_RDX_05;
  MethodInfo *extraout_RDX_06;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *method_03;
  MethodInfo *method_04;
  MethodInfo *method_05;
  MethodInfo *extraout_RDX_07;
  MethodInfo *extraout_RDX_08;
  MethodInfo *method_06;
  MethodInfo *extraout_RDX_09;
  MethodInfo *extraout_RDX_10;
  MethodInfo *extraout_RDX_11;
  MethodInfo *extraout_RDX_12;
  MethodInfo *method_07;
  MethodInfo *extraout_RDX_13;
  MethodInfo *extraout_RDX_14;
  System_String_o *name;
  int iVar21;
  CustomLogic_CustomLogicPrimitiveExpressionAst_o *pCVar22;
  CustomLogic_CustomLogicSymbols_c *__this_11;
  CustomLogic_CustomLogicConditionalBlockAst_o *__this_12;
  System_Collections_Generic_List_CustomLogicToken__o *pSVar23;
  void *pvVar24;
  MethodInfo *in_R8;
  CustomLogic_CustomLogicToken_o *local_58;
  System_Nullable_CustomLogicSourceType__Fields local_48;
  System_Nullable_CustomLogicSourceType__Fields local_40;
  ulong local_38;
  
  pCVar22 = (CustomLogic_CustomLogicPrimitiveExpressionAst_o *)(ulong)(uint)startIndex;
  if (Il2CppMethodInitialized_07547393 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicAssignmentExpressionAst);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicBaseExpressionAst);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicBlockAst);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicBreakExpressionAst);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicClassDefinitionAst);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicConditionalBlockAst);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicContinueExpressionAst);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicDecorator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicForBlockAst);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicMethodDefinitionAst);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicPrimitiveExpressionAst);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicReturnExpressionAst);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicStartAst);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicSymbols);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVariableExpressionAst);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicWaitExpressionAst);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_CustomLogicDecorator_AddRange);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_CustomLogicBaseAst_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_CustomLogicAssignmentExpressionAst_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_CustomLogicDecorator_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_CustomLogicDecorator_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_CustomLogicToken_get_Count);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_CustomLogicToken_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_CustomLogicDecorator)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_CustomLogicSourceType_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_CustomLogicSourceType_get_HasValue)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_CustomLogicSourceType_get_Value);
    Il2CppMethodInitialized_07547393 = '\x01';
  }
  local_40.hasValue = false;
  local_40._1_3_ = 0;
  local_40.value = 0;
  pSVar23 = (__this->fields)._tokens;
  if (pSVar23 == (System_Collections_Generic_List_CustomLogicToken__o *)0x0) goto label_05b7d2c1;
  if ((pSVar23->fields)._size <= startIndex) {
    return startIndex;
  }
  token = System_Collections_Generic_List_object___get_Item
                    ((System_Collections_Generic_List_object__o *)pSVar23,startIndex,
                     (MethodInfo_395CF20 *)
                     MethodInfo_System_Collections_Generic_List_CustomLogicToken_get_Item);
  pSVar23 = (__this->fields)._tokens;
  if (pSVar23 == (System_Collections_Generic_List_CustomLogicToken__o *)0x0) goto label_05b7d2c1;
  if (startIndex < (pSVar23->fields)._size + -1) {
    local_58 = System_Collections_Generic_List_object___get_Item
                         ((System_Collections_Generic_List_object__o *)pSVar23,startIndex + 1,
                          (MethodInfo_395CF20 *)
                          MethodInfo_System_Collections_Generic_List_CustomLogicToken_get_Item);
    pMVar20 = extraout_RDX_00;
  }
  else {
    local_58 = (CustomLogic_CustomLogicToken_o *)0x0;
    pMVar20 = extraout_RDX;
  }
  if (prev == (CustomLogic_CustomLogicBaseAst_o *)0x0) goto label_05b7d2c1;
  method_00 = &switchD_05b7c115::switchdataD_010a5954;
  pCVar13 = (CustomLogic_CustomLogicPrimitiveExpressionAst_o *)prev;
  switch((prev->fields).Type) {
  case 0:
    if ((TypeInfo_CustomLogic_CustomLogicSymbols->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicSymbols);
    }
    bVar5 = CustomLogic_CustomLogicParser__IsSymbolIn
                      ((CustomLogic_CustomLogicParser_o *)TypeInfo_CustomLogic_CustomLogicSymbols,token,
                       TypeInfo_CustomLogic_CustomLogicSymbols->static_fields->ClassSymbols,
                       (MethodInfo *)method_00);
    pMVar20 = extraout_RDX_04;
    if (bVar5) {
      if (token == (CustomLogic_CustomLogicToken_o *)0x0) goto label_05b7d2c1;
      iVar8 = (token->fields).Line;
      __this_05 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicClassDefinitionAst)
      ;
      pMVar20 = (MethodInfo *)0x0;
      CustomLogic_CustomLogicClassDefinitionAst___ctor(__this_05,token,iVar8,(MethodInfo *)0x0);
      __this_00 = (__this->fields)._Compiler_k__BackingField;
      if (__this_00 != (CustomLogic_CustomLogicCompiler_o *)0x0) {
        iVar8 = (token->fields).Line;
        method_01 = extraout_RDX_05;
        if (Il2CppMethodInitialized_0754735c == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_CustomLogicSourceType_ctor);
          Il2CppMethodInitialized_0754735c = '\x01';
          method_01 = extraout_RDX_06;
        }
        pCVar14 = CustomLogic_CustomLogicCompiler__FindFileRange(__this_00,iVar8,method_01);
        if (pCVar14 == (CustomLogic_CustomLogicCompiler_FileRange_o *)0x0) {
          local_40.hasValue = false;
          local_40._1_3_ = 0;
          local_40.value = 0;
        }
        else {
          local_48.hasValue = false;
          local_48._1_3_ = 0;
          local_48.value = 0;
          System_Nullable_Int32Enum____ctor
                    ((System_Nullable_Int32Enum__o *)&local_48,(pCVar14->fields)._Type_k__BackingField,
                     (MethodInfo_3CD4F60 *)MethodInfo_System_Nullable_CustomLogicSourceType_ctor);
          local_40 = local_48;
          if (local_48.hasValue != false) {
            iVar8 = System_Nullable_Int32Enum___get_Value
                              ((System_Nullable_Int32Enum__o *)&local_40,
                               (MethodInfo_3CD4F80 *)
                               MethodInfo_System_Nullable_CustomLogicSourceType_get_Value);
            local_48.hasValue = false;
            local_48._1_3_ = 0;
            local_48.value = 0;
            System_Nullable_Int32Enum____ctor
                      ((System_Nullable_Int32Enum__o *)&local_48,iVar8,
                       (MethodInfo_3CD4F60 *)MethodInfo_System_Nullable_CustomLogicSourceType_ctor);
            if (__this_05 == (CustomLogic_CustomLogicClassDefinitionAst_o *)0x0) goto label_05b7d2c1;
            (__this_05->fields)._Namespace_k__BackingField.fields = local_48;
          }
        }
      }
      pSVar23 = (__this->fields)._tokens;
      if (pSVar23 == (System_Collections_Generic_List_CustomLogicToken__o *)0x0) goto label_05b7d2c1;
      pCVar12 = System_Collections_Generic_List_object___get_Item
                          ((System_Collections_Generic_List_object__o *)pSVar23,startIndex + 2,
                           (MethodInfo_395CF20 *)
                           MethodInfo_System_Collections_Generic_List_CustomLogicToken_get_Item);
      CustomLogic_CustomLogicParser__AssertSymbolValue(__this,pCVar12,9,pMVar20);
      iVar7 = CustomLogic_CustomLogicParser__ParseAst
                        (__this,startIndex + 3,(CustomLogic_CustomLogicBaseAst_o *)__this_05,pMVar20);
      if (local_58 == (CustomLogic_CustomLogicToken_o *)0x0) goto label_05b7d2c1;
      bVar2 = (TypeInfo_CustomLogic_CustomLogicStartAst->_2).typeHierarchyDepth;
      if (((prev->klass->_2).typeHierarchyDepth < bVar2) ||
         ((prev->klass->_2).typeHierarchy[(ulong)bVar2 - 1] !=
          (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicStartAst)) goto label_05b7d3c3;
      pCVar12 = (CustomLogic_CustomLogicToken_o *)(local_58->fields).Value;
      if ((pCVar12 != (CustomLogic_CustomLogicToken_o *)0x0) &&
         (pIVar18 = g_data_07556758, (Il2CppClass *)pCVar12->klass != g_data_07556758)) goto label_05b7d3ad;
      method_00 = (uint *)0x0;
      CustomLogic_CustomLogicStartAst__AddClass
                ((CustomLogic_CustomLogicStartAst_o *)prev,(System_String_o *)pCVar12,__this_05,
                 (MethodInfo *)0x0);
      pMVar20 = extraout_RDX_10;
      goto joined_r0x05b7cd49;
    }
    break;
  case 1:
    __this_06 = (System_Collections_Generic_List_CustomLogicToken__o *)
                il2cpp_codegen_object_new
                          ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_CustomLogicDecorator);
    pSVar23 = __this_06;
    System_Collections_Generic_List_object____ctor
              ((System_Collections_Generic_List_object__o *)__this_06,
               (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_CustomLogicDecorator_ctor);
    if (token == (CustomLogic_CustomLogicToken_o *)0x0) goto label_05b7d2c1;
    iVar7 = (token->fields).Type;
    if (__this_06 == (System_Collections_Generic_List_CustomLogicToken__o *)0x0) {
      if (iVar7 == 0) {
        pSVar23 = (System_Collections_Generic_List_CustomLogicToken__o *)(token->fields).Value;
        if (pSVar23 == (System_Collections_Generic_List_CustomLogicToken__o *)0x0) goto label_05b7d2c1;
        if ((pSVar23->klass->_1).element_class != *(Il2CppClass **)(g_data_07556710 + 0x40)) goto label_05b7d3a8;
        piVar10 = il2cpp_vm_Object_Unbox((Il2CppObject *)pSVar23);
        if (*piVar10 == 0xf) {
          pSVar9 = CustomLogic_CustomLogicParser__ParseDecorator(__this,startIndex,method_07);
          if ((pSVar9 != (System_Object_array *)0x0) && ((pSVar9->max_length & 0xfffffffe) == 0))
          goto label_05b7d07a;
          goto label_05b7d2c1;
        }
      }
    }
    else if (iVar7 == 0) {
      do {
        pSVar23 = (System_Collections_Generic_List_CustomLogicToken__o *)(token->fields).Value;
        if (pSVar23 == (System_Collections_Generic_List_CustomLogicToken__o *)0x0) goto label_05b7d2c1;
        if ((((Il2CppClass *)pSVar23->klass)->_1).element_class != *(Il2CppClass **)(g_data_07556710 + 0x40))
        goto label_05b7d3a8;
        piVar10 = il2cpp_vm_Object_Unbox((Il2CppObject *)pSVar23);
        if (*piVar10 != 0xf) break;
        pSVar9 = CustomLogic_CustomLogicParser__ParseDecorator(__this,(int32_t)pCVar22,method_02);
        method_00 = (uint *)MethodInfo_System_Collections_Generic_List_CustomLogicDecorator_Add;
        if (pSVar9 == (System_Object_array *)0x0) goto label_05b7d2c1;
        if ((pSVar9->max_length & 0xfffffffe) == 0) goto label_05b7d07a;
        pCVar12 = (CustomLogic_CustomLogicToken_o *)pSVar9->m_Items[1];
        if (pCVar12 != (CustomLogic_CustomLogicToken_o *)0x0) {
          bVar2 = (TypeInfo_CustomLogic_CustomLogicDecorator->_2).typeHierarchyDepth;
          pIVar18 = (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicDecorator;
          if (((((Il2CppClass *)pCVar12->klass)->_2).typeHierarchyDepth < bVar2) ||
             ((((Il2CppClass *)pCVar12->klass)->_2).typeHierarchy[(ulong)bVar2 - 1] !=
              (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicDecorator)) goto label_05b7d3ad;
        }
        piVar1 = &(__this_06->fields)._version;
        *piVar1 = *piVar1 + 1;
        pCVar3 = (__this_06->fields)._items;
        if (pCVar3 == (CustomLogic_CustomLogicToken_array *)0x0) goto label_05b7d2c1;
        uVar6 = (__this_06->fields)._size;
        if (uVar6 < (uint)pCVar3->max_length) {
          method_00 = (uint *)(ulong)(uVar6 + 1);
          (__this_06->fields)._size = uVar6 + 1;
          pCVar3->m_Items[(int)uVar6] = pCVar12;
          Il2CppCodeGenWriteBarrier(pCVar3->m_Items + (int)uVar6);
        }
        else {
          System_Collections_Generic_List_object___AddWithResize
                    ((System_Collections_Generic_List_object__o *)__this_06,(Il2CppObject *)pCVar12,
                     (MethodInfo_395D230 *)((MethodInfo *)method_00)->klass->rgctx_data[0xe].method);
        }
        if ((int)pSVar9->max_length == 0) goto label_05b7d07a;
        pIVar11 = pSVar9->m_Items[0];
        if (pIVar11 == (Il2CppObject *)0x0) goto label_05b7d2c1;
        if ((pIVar11->klass->_1).element_class != *(Il2CppClass **)(g_data_07556710 + 0x40)) goto label_05b7d3a8;
        puVar15 = il2cpp_vm_Object_Unbox(pIVar11);
        pSVar23 = (__this->fields)._tokens;
        if (pSVar23 == (System_Collections_Generic_List_CustomLogicToken__o *)0x0) goto label_05b7d2c1;
        uVar6 = *puVar15;
        pCVar22 = (CustomLogic_CustomLogicPrimitiveExpressionAst_o *)(ulong)uVar6;
        token = System_Collections_Generic_List_object___get_Item
                          ((System_Collections_Generic_List_object__o *)pSVar23,uVar6,
                           (MethodInfo_395CF20 *)
                           MethodInfo_System_Collections_Generic_List_CustomLogicToken_get_Item);
        pSVar23 = (__this->fields)._tokens;
        if (pSVar23 == (System_Collections_Generic_List_CustomLogicToken__o *)0x0) goto label_05b7d2c1;
        if ((int)uVar6 < (pSVar23->fields)._size + -1) {
          local_58 = System_Collections_Generic_List_object___get_Item
                               ((System_Collections_Generic_List_object__o *)pSVar23,uVar6 + 1,
                                (MethodInfo_395CF20 *)
                                MethodInfo_System_Collections_Generic_List_CustomLogicToken_get_Item);
        }
        else {
          local_58 = (CustomLogic_CustomLogicToken_o *)0x0;
        }
        if (token == (CustomLogic_CustomLogicToken_o *)0x0) goto label_05b7d2c1;
      } while ((token->fields).Type == 0);
    }
    iVar7 = (token->fields).Type;
    iVar21 = (int)pCVar22;
    if (iVar7 == 0) {
      pSVar23 = (System_Collections_Generic_List_CustomLogicToken__o *)(token->fields).Value;
      if (pSVar23 == (System_Collections_Generic_List_CustomLogicToken__o *)0x0) goto label_05b7d2c1;
      if ((pSVar23->klass->_1).element_class != *(Il2CppClass **)(g_data_07556710 + 0x40)) goto label_05b7d3a8;
      piVar10 = il2cpp_vm_Object_Unbox((Il2CppObject *)pSVar23);
      if (*piVar10 == 5) {
label_05b7cc48:
        CustomLogic_CustomLogicParser__AssertTokenType(__this,local_58,2,(MethodInfo *)method_00);
        if ((token->fields).Type == 0) {
          pIVar11 = (token->fields).Value;
          if (pIVar11 == (Il2CppObject *)0x0) goto label_05b7d2c1;
          if ((pIVar11->klass->_1).element_class != *(Il2CppClass **)(g_data_07556710 + 0x40)) goto label_05b7d3a8;
          piVar10 = il2cpp_vm_Object_Unbox(pIVar11);
          bVar5 = *piVar10 == 6;
        }
        else {
          bVar5 = false;
        }
        iVar8 = (token->fields).Line;
        __this_10 = il2cpp_codegen_object_new
                              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMethodDefinitionAst);
        pMVar20 = (MethodInfo *)0x0;
        CustomLogic_CustomLogicMethodDefinitionAst___ctor(__this_10,iVar8,bVar5,(MethodInfo *)0x0);
        pIVar18 = g_data_07556758;
        if ((local_58 != (CustomLogic_CustomLogicToken_o *)0x0) &&
           (__this_10 != (CustomLogic_CustomLogicMethodDefinitionAst_o *)0x0)) {
          pCVar12 = (CustomLogic_CustomLogicToken_o *)(local_58->fields).Value;
          if (pCVar12 == (CustomLogic_CustomLogicToken_o *)0x0) {
            (__this_10->fields).Name = (System_String_o *)0x0;
          }
          else if (((Il2CppClass *)pCVar12->klass != g_data_07556758) ||
                  ((__this_10->fields).Name = (System_String_o *)pCVar12,
                  (Il2CppClass *)pCVar12->klass != pIVar18)) {
label_05b7d3ad:
            il2cpp_codegen_raise_invalid_cast_exception(pCVar12,pIVar18);
          }
          Il2CppCodeGenWriteBarrier(&(__this_10->fields).Name);
          pSVar23 = (__this->fields)._tokens;
          if (pSVar23 != (System_Collections_Generic_List_CustomLogicToken__o *)0x0) {
            pCVar12 = System_Collections_Generic_List_object___get_Item
                                ((System_Collections_Generic_List_object__o *)pSVar23,iVar21 + 2,
                                 (MethodInfo_395CF20 *)
                                 MethodInfo_System_Collections_Generic_List_CustomLogicToken_get_Item);
            CustomLogic_CustomLogicParser__AssertSymbolValue(__this,pCVar12,0xb,pMVar20);
            pSVar23 = (__this->fields)._tokens;
            if ((pSVar23 != (System_Collections_Generic_List_CustomLogicToken__o *)0x0) &&
               (pCVar12 = System_Collections_Generic_List_object___get_Item
                                    ((System_Collections_Generic_List_object__o *)pSVar23,iVar21 + 3,
                                     (MethodInfo_395CF20 *)
                                     MethodInfo_System_Collections_Generic_List_CustomLogicToken_get_Item),
               pCVar12 != (CustomLogic_CustomLogicToken_o *)0x0)) {
              iVar21 = iVar21 + 5;
              do {
                iVar7 = (pCVar12->fields).Type;
                if (iVar7 == 0) {
                  pIVar11 = (pCVar12->fields).Value;
                  if (pIVar11 == (Il2CppObject *)0x0) break;
                  if ((pIVar11->klass->_1).element_class != *(Il2CppClass **)(g_data_07556710 + 0x40))
                  goto label_05b7d3a8;
                  piVar10 = il2cpp_vm_Object_Unbox(pIVar11);
                  if (*piVar10 == 0xc) {
                    pSVar23 = (__this->fields)._tokens;
                    if (pSVar23 != (System_Collections_Generic_List_CustomLogicToken__o *)0x0) {
                      pCVar12 = System_Collections_Generic_List_object___get_Item
                                          ((System_Collections_Generic_List_object__o *)pSVar23,iVar21 + -1,
                                           (MethodInfo_395CF20 *)
                                           MethodInfo_System_Collections_Generic_List_CustomLogicToken_get_Item
                                          );
                      CustomLogic_CustomLogicParser__AssertSymbolValue(__this,pCVar12,9,pMVar20);
                      iVar7 = CustomLogic_CustomLogicParser__ParseAst
                                        (__this,iVar21,(CustomLogic_CustomLogicBaseAst_o *)__this_10,pMVar20);
                      bVar2 = (TypeInfo_CustomLogic_CustomLogicClassDefinitionAst->_2).typeHierarchyDepth;
                      if (((prev->klass->_2).typeHierarchyDepth < bVar2) ||
                         ((prev->klass->_2).typeHierarchy[(ulong)bVar2 - 1] !=
                          (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicClassDefinitionAst))
                      goto label_05b7d3c3;
                      pCVar12 = (CustomLogic_CustomLogicToken_o *)(local_58->fields).Value;
                      if ((pCVar12 != (CustomLogic_CustomLogicToken_o *)0x0) &&
                         (pIVar18 = g_data_07556758, (Il2CppClass *)pCVar12->klass != g_data_07556758))
                      goto label_05b7d3ad;
                      method_00 = (uint *)0x0;
                      CustomLogic_CustomLogicClassDefinitionAst__AddMethod
                                ((CustomLogic_CustomLogicClassDefinitionAst_o *)prev,
                                 (System_String_o *)pCVar12,__this_10,(MethodInfo *)0x0);
                      pMVar20 = extraout_RDX_13;
                      goto joined_r0x05b7cd49;
                    }
                    break;
                  }
                  if ((pCVar12->fields).Type == 2) goto label_05b7d233;
label_05b7d1a0:
                  CustomLogic_CustomLogicParser__AssertSymbolValue(__this,pCVar12,0x28,pMVar20);
                  pSVar23 = (__this->fields)._tokens;
                }
                else {
                  if (iVar7 != 2) goto label_05b7d1a0;
label_05b7d233:
                  pMVar20 = MethodInfo_System_Collections_Generic_List_string_Add;
                  __this_03 = (__this_10->fields).ParameterNames;
                  if (__this_03 == (System_Collections_Generic_List_string__o *)0x0) break;
                  pCVar12 = (CustomLogic_CustomLogicToken_o *)(pCVar12->fields).Value;
                  if ((pCVar12 != (CustomLogic_CustomLogicToken_o *)0x0) &&
                     (pIVar18 = g_data_07556758, (Il2CppClass *)pCVar12->klass != g_data_07556758))
                  goto label_05b7d3ad;
                  piVar1 = &(__this_03->fields)._version;
                  *piVar1 = *piVar1 + 1;
                  pSVar4 = (__this_03->fields)._items;
                  if (pSVar4 == (System_String_array *)0x0) break;
                  uVar6 = (__this_03->fields)._size;
                  if (uVar6 < (uint)pSVar4->max_length) {
                    pMVar20 = (MethodInfo *)(ulong)(uVar6 + 1);
                    (__this_03->fields)._size = uVar6 + 1;
                    pSVar4->m_Items[(int)uVar6] = (System_String_o *)pCVar12;
                    Il2CppCodeGenWriteBarrier(pSVar4->m_Items + (int)uVar6);
                    pSVar23 = (__this->fields)._tokens;
                  }
                  else {
                    System_Collections_Generic_List_object___AddWithResize
                              ((System_Collections_Generic_List_object__o *)__this_03,(Il2CppObject *)pCVar12,
                               (MethodInfo_395D230 *)pMVar20->klass->rgctx_data[0xe].method);
                    pSVar23 = (__this->fields)._tokens;
                  }
                }
                if (pSVar23 == (System_Collections_Generic_List_CustomLogicToken__o *)0x0) break;
                pCVar12 = System_Collections_Generic_List_object___get_Item
                                    ((System_Collections_Generic_List_object__o *)pSVar23,iVar21 + -1,
                                     (MethodInfo_395CF20 *)
                                     MethodInfo_System_Collections_Generic_List_CustomLogicToken_get_Item);
                iVar21 = iVar21 + 1;
              } while (pCVar12 != (CustomLogic_CustomLogicToken_o *)0x0);
            }
          }
        }
        goto label_05b7d2c1;
      }
      iVar7 = (token->fields).Type;
      if (iVar7 == 0) {
        pSVar23 = (System_Collections_Generic_List_CustomLogicToken__o *)(token->fields).Value;
        if (pSVar23 == (System_Collections_Generic_List_CustomLogicToken__o *)0x0) goto label_05b7d2c1;
        if ((pSVar23->klass->_1).element_class != *(Il2CppClass **)(g_data_07556710 + 0x40)) goto label_05b7d3a8;
        piVar10 = il2cpp_vm_Object_Unbox((Il2CppObject *)pSVar23);
        if (*piVar10 == 6) goto label_05b7cc48;
        iVar7 = (token->fields).Type;
      }
    }
    if (iVar7 == 2) {
      CustomLogic_CustomLogicParser__AssertSymbolValue(__this,local_58,0x14,(MethodInfo *)method_00);
      name = (System_String_o *)(token->fields).Value;
      iVar8 = (token->fields).Line;
      pCVar16 = il2cpp_codegen_object_new
                          ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVariableExpressionAst);
      if ((name != (System_String_o *)0x0) && ((Il2CppClass *)name->klass != g_data_07556758)) goto label_05b7d3cb;
      CustomLogic_CustomLogicVariableExpressionAst___ctor(pCVar16,name,iVar8,(MethodInfo *)0x0);
      iVar8 = (token->fields).Line;
      __this_07 = il2cpp_codegen_object_new
                            ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAssignmentExpressionAst);
      pMVar20 = (MethodInfo *)0x0;
      CustomLogic_CustomLogicAssignmentExpressionAst___ctor
                (__this_07,(CustomLogic_CustomLogicBaseExpressionAst_o *)pCVar16,local_58,iVar8,
                 (MethodInfo *)0x0);
      iVar8 = CustomLogic_CustomLogicParser__FindSemicolon(__this,iVar21,method_05);
      method_00 = (uint *)(ulong)(iVar8 - 1U);
      pCVar17 = CustomLogic_CustomLogicParser__ParseExpression
                          (__this,(CustomLogic_CustomLogicBaseExpressionAst_o *)0x0,iVar21 + 2,iVar8 - 1U,
                           pMVar20);
      if (__this_07 == (CustomLogic_CustomLogicAssignmentExpressionAst_o *)0x0) goto label_05b7d2c1;
      (__this_07->fields).Right = pCVar17;
      Il2CppCodeGenWriteBarrier(&(__this_07->fields).Right);
      __this_01 = (__this_07->fields).Decorators;
      if (__this_01 == (System_Collections_Generic_List_CustomLogicDecorator__o *)0x0) goto label_05b7d2c1;
      System_Collections_Generic_List_object___AddRange
                ((System_Collections_Generic_List_object__o *)__this_01,
                 (System_Collections_Generic_IEnumerable_T__o *)__this_06,
                 (MethodInfo_395D490 *)
                 MethodInfo_System_Collections_Generic_List_CustomLogicDecorator_AddRange);
      pIVar11 = il2cpp_codegen_is_inst_class
                          ((Il2CppObject *)prev,
                           (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicClassDefinitionAst);
      if (pIVar11 == (Il2CppObject *)0x0) goto label_05b7d2c1;
      pIVar11 = il2cpp_codegen_is_inst_class
                          ((Il2CppObject *)prev,
                           (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicClassDefinitionAst);
      if (pIVar11[1].monitor == (void *)0x0) goto label_05b7d2c1;
      iVar7 = iVar8 + 1;
      il2cpp_runtime_helper_02fd76c0(pIVar11[1].monitor,__this_07,
                   MethodInfo_System_Collections_Generic_List_CustomLogicAssignmentExpressionAst_Add);
      pMVar20 = extraout_RDX_07;
      goto joined_r0x05b7cd49;
    }
    bVar5 = CustomLogic_CustomLogicParser__IsSymbolValue
                      ((CustomLogic_CustomLogicParser_o *)pSVar23,token,10,(MethodInfo *)method_00);
    pMVar20 = extraout_RDX_08;
    prev = (CustomLogic_CustomLogicBaseAst_o *)pCVar22;
    if (bVar5) {
      return iVar21 + 1;
    }
    break;
  case 2:
  case 0x10:
  case 0x11:
    if (token == (CustomLogic_CustomLogicToken_o *)0x0) goto label_05b7d2c1;
    iVar7 = (token->fields).Type;
    pCVar22 = (CustomLogic_CustomLogicPrimitiveExpressionAst_o *)prev;
    if (iVar7 != 0) goto label_05b7c130;
    pIVar11 = (token->fields).Value;
    if (pIVar11 == (Il2CppObject *)0x0) goto label_05b7d2c1;
    pCVar22 = (CustomLogic_CustomLogicPrimitiveExpressionAst_o *)&g_data_075566c8;
    if ((pIVar11->klass->_1).element_class != *(Il2CppClass **)(g_data_07556710 + 0x40)) goto label_05b7d3a8;
    piVar10 = il2cpp_vm_Object_Unbox(pIVar11);
    if (*piVar10 == 0x10) {
      pMVar20 = extraout_RDX_02;
      if ((local_58 == (CustomLogic_CustomLogicToken_o *)0x0) || ((local_58->fields).Type != 0)) {
label_05b7c9dc:
        pSVar9 = CustomLogic_CustomLogicParser__ParseExpressionAst(__this,startIndex + 1,pMVar20);
        if (pSVar9 == (System_Object_array *)0x0) goto label_05b7d2c1;
        if ((int)pSVar9->max_length == 0) goto label_05b7d07a;
        pIVar11 = pSVar9->m_Items[0];
        if (pIVar11 == (Il2CppObject *)0x0) goto label_05b7d2c1;
        if ((pIVar11->klass->_1).element_class != *(Il2CppClass **)(g_data_07556710 + 0x40)) {
label_05b7d3a8:
          il2cpp_codegen_raise_invalid_cast_exception();
        }
        piVar10 = il2cpp_vm_Object_Unbox(pIVar11);
        if ((pSVar9->max_length & 0xfffffffe) == 0) goto label_05b7d07a;
        iVar7 = *piVar10;
        pCVar13 = (CustomLogic_CustomLogicPrimitiveExpressionAst_o *)pSVar9->m_Items[1];
        if (pCVar13 == (CustomLogic_CustomLogicPrimitiveExpressionAst_o *)0x0) {
          pCVar13 = (CustomLogic_CustomLogicPrimitiveExpressionAst_o *)0x0;
        }
        else {
          bVar2 = (TypeInfo_CustomLogic_CustomLogicBaseExpressionAst->_2).typeHierarchyDepth;
          if (((((CustomLogic_CustomLogicBaseExpressionAst_c *)pCVar13->klass)->_2).typeHierarchyDepth < bVar2
              ) || ((((CustomLogic_CustomLogicBaseExpressionAst_c *)pCVar13->klass)->_2).typeHierarchy
                    [(ulong)bVar2 - 1] != (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicBaseExpressionAst))
          goto label_05b7d3c3;
        }
      }
      else {
        pIVar11 = (local_58->fields).Value;
        if (pIVar11 == (Il2CppObject *)0x0) goto label_05b7d2c1;
        if ((pIVar11->klass->_1).element_class != *(Il2CppClass **)(g_data_07556710 + 0x40)) goto label_05b7d3a8;
        piVar10 = il2cpp_vm_Object_Unbox(pIVar11);
        pMVar20 = extraout_RDX_03;
        if (*piVar10 != 0x26) goto label_05b7c9dc;
        iVar8 = (token->fields).Line;
        pCVar13 = il2cpp_codegen_object_new
                            ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPrimitiveExpressionAst);
        CustomLogic_CustomLogicPrimitiveExpressionAst___ctor
                  (pCVar13,(Il2CppObject *)0x0,iVar8,(MethodInfo *)0x0);
        iVar7 = startIndex + 2;
      }
      iVar8 = (token->fields).Line;
      __this_09 = il2cpp_codegen_object_new
                            ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicReturnExpressionAst);
      CustomLogic_CustomLogicReturnExpressionAst___ctor
                (__this_09,(CustomLogic_CustomLogicBaseExpressionAst_o *)pCVar13,iVar8,(MethodInfo *)0x0);
      method_00 = (uint *)MethodInfo_System_Collections_Generic_List_CustomLogicBaseAst_Add;
      bVar2 = (TypeInfo_CustomLogic_CustomLogicBlockAst->_2).typeHierarchyDepth;
      pCVar13 = (CustomLogic_CustomLogicPrimitiveExpressionAst_o *)prev;
      if (((prev->klass->_2).typeHierarchyDepth < bVar2) ||
         ((prev->klass->_2).typeHierarchy[(ulong)bVar2 - 1] !=
          (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicBlockAst)) goto label_05b7d3c3;
      __this_02 = (*(uint64_t *)((char *)prev + 0x18));
      if (__this_02 == (CustomLogic_CustomLogicBaseAst_c *)0x0) goto label_05b7d2c1;
      piVar1 = (int32_t *)((long)&(__this_02->_1).namespaze + 4);
      *piVar1 = *piVar1 + 1;
      pSVar9 = ((System_Collections_Generic_List_object__Fields *)&(__this_02->_1).name)->_items;
joined_r0x05b7cf34:
      if (pSVar9 == (System_Object_array *)0x0) goto label_05b7d2c1;
      uVar6 = *(uint *)&(__this_02->_1).namespaze;
      if (uVar6 < (uint)pSVar9->max_length) {
        method_00 = (uint *)(ulong)(uVar6 + 1);
        *(uint *)&(__this_02->_1).namespaze = uVar6 + 1;
        pSVar9->m_Items[(int)uVar6] = (Il2CppObject *)__this_09;
        Il2CppCodeGenWriteBarrier(pSVar9->m_Items + (int)uVar6);
        pMVar20 = extraout_RDX_11;
      }
      else {
        System_Collections_Generic_List_object___AddWithResize
                  ((System_Collections_Generic_List_object__o *)__this_02,(Il2CppObject *)__this_09,
                   (MethodInfo_395D230 *)((MethodInfo *)method_00)->klass->rgctx_data[0xe].method);
        pMVar20 = extraout_RDX_12;
      }
    }
    else {
      iVar7 = (token->fields).Type;
      pMVar20 = extraout_RDX_02;
      if (iVar7 == 0) {
        pIVar11 = (token->fields).Value;
        if (pIVar11 == (Il2CppObject *)0x0) goto label_05b7d2c1;
        if ((pIVar11->klass->_1).element_class != *(Il2CppClass **)(g_data_07556710 + 0x40)) goto label_05b7d3a8;
        piVar10 = il2cpp_vm_Object_Unbox(pIVar11);
        if (*piVar10 == 7) {
          pSVar9 = CustomLogic_CustomLogicParser__ParseExpressionAst(__this,startIndex + 1,method_04);
          if (pSVar9 == (System_Object_array *)0x0) goto label_05b7d2c1;
          if ((int)pSVar9->max_length == 0) goto label_05b7d07a;
          pIVar11 = pSVar9->m_Items[0];
          if (pIVar11 == (Il2CppObject *)0x0) goto label_05b7d2c1;
          if ((pIVar11->klass->_1).element_class != *(Il2CppClass **)(g_data_07556710 + 0x40)) goto label_05b7d3a8;
          piVar10 = il2cpp_vm_Object_Unbox(pIVar11);
          if ((pSVar9->max_length & 0xfffffffe) == 0) goto label_05b7d07a;
          iVar7 = *piVar10;
          pCVar13 = (CustomLogic_CustomLogicPrimitiveExpressionAst_o *)pSVar9->m_Items[1];
          iVar8 = (token->fields).Line;
          __this_09 = (CustomLogic_CustomLogicReturnExpressionAst_o *)
                      il2cpp_codegen_object_new
                                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicWaitExpressionAst);
          if (pCVar13 != (CustomLogic_CustomLogicPrimitiveExpressionAst_o *)0x0) {
            bVar2 = (TypeInfo_CustomLogic_CustomLogicBaseExpressionAst->_2).typeHierarchyDepth;
            if (((((CustomLogic_CustomLogicBaseExpressionAst_c *)pCVar13->klass)->_2).typeHierarchyDepth <
                 bVar2) ||
               ((((CustomLogic_CustomLogicBaseExpressionAst_c *)pCVar13->klass)->_2).typeHierarchy
                [(ulong)bVar2 - 1] != (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicBaseExpressionAst))
            goto label_05b7d3c3;
          }
          CustomLogic_CustomLogicWaitExpressionAst___ctor
                    ((CustomLogic_CustomLogicWaitExpressionAst_o *)__this_09,
                     (CustomLogic_CustomLogicBaseExpressionAst_o *)pCVar13,iVar8,(MethodInfo *)0x0);
          method_00 = (uint *)MethodInfo_System_Collections_Generic_List_CustomLogicBaseAst_Add;
          bVar2 = (TypeInfo_CustomLogic_CustomLogicBlockAst->_2).typeHierarchyDepth;
          pCVar13 = (CustomLogic_CustomLogicPrimitiveExpressionAst_o *)prev;
          if (((prev->klass->_2).typeHierarchyDepth < bVar2) ||
             ((prev->klass->_2).typeHierarchy[(ulong)bVar2 - 1] !=
              (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicBlockAst)) goto label_05b7d3c3;
          __this_02 = (*(uint64_t *)((char *)prev + 0x18));
          if (__this_02 == (CustomLogic_CustomLogicBaseAst_c *)0x0) goto label_05b7d2c1;
          piVar1 = (int32_t *)((long)&(__this_02->_1).namespaze + 4);
          *piVar1 = *piVar1 + 1;
          pSVar9 = ((System_Collections_Generic_List_object__Fields *)&(__this_02->_1).name)->_items;
          goto joined_r0x05b7cf34;
        }
        iVar7 = (token->fields).Type;
        pMVar20 = method_04;
      }
label_05b7c130:
      if (iVar7 == 2) {
        pSVar9 = CustomLogic_CustomLogicParser__ParseExpressionAst(__this,startIndex,pMVar20);
        if (pSVar9 == (System_Object_array *)0x0) goto label_05b7d2c1;
        if ((int)pSVar9->max_length == 0) {
label_05b7d07a:
          ThrowIndexOutOfRangeException();
        }
        piVar10 = (int *)il2cpp_runtime_helper_02abd3a0(pSVar9->m_Items[0],g_data_07556710);
        iVar7 = *piVar10;
        pIVar11 = il2cpp_codegen_is_inst_class
                            ((Il2CppObject *)prev,(Il2CppClass *)TypeInfo_CustomLogic_CustomLogicBlockAst);
        if (pIVar11 == (Il2CppObject *)0x0) goto label_05b7d2c1;
        pIVar11 = il2cpp_codegen_is_inst_class
                            ((Il2CppObject *)prev,(Il2CppClass *)TypeInfo_CustomLogic_CustomLogicBlockAst);
        if ((pSVar9->max_length & 0xfffffffe) == 0) goto label_05b7d07a;
        pvVar24 = pIVar11[1].monitor;
        if (pvVar24 == (void *)0x0) goto label_05b7d2c1;
        pIVar11 = il2cpp_codegen_is_inst_class
                            (pSVar9->m_Items[1],
                             (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicBaseExpressionAst);
        ppMVar19 = &MethodInfo_System_Collections_Generic_List_CustomLogicBaseAst_Add;
        il2cpp_runtime_helper_02fd7670(pvVar24,pIVar11,MethodInfo_System_Collections_Generic_List_CustomLogicBaseAst_Add);
        method_00 = (uint *)ppMVar19;
        pMVar20 = extraout_RDX_01;
      }
      else {
        if ((TypeInfo_CustomLogic_CustomLogicSymbols->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicSymbols);
        }
        __this_11 = TypeInfo_CustomLogic_CustomLogicSymbols;
        bVar5 = CustomLogic_CustomLogicParser__IsSymbolIn
                          ((CustomLogic_CustomLogicParser_o *)TypeInfo_CustomLogic_CustomLogicSymbols,token,
                           TypeInfo_CustomLogic_CustomLogicSymbols->static_fields->ConditionalSymbols,
                           (MethodInfo *)method_00);
        if (bVar5) {
          iVar8 = (token->fields).Line;
          __this_04 = il2cpp_codegen_object_new
                                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicConditionalBlockAst);
          method_00 = (uint *)0x0;
          __this_12 = __this_04;
          CustomLogic_CustomLogicConditionalBlockAst___ctor(__this_04,token,iVar8,(MethodInfo *)0x0);
          bVar5 = CustomLogic_CustomLogicParser__IsSymbolValue
                            ((CustomLogic_CustomLogicParser_o *)__this_12,token,0x2b,(MethodInfo *)method_00);
          if (bVar5) {
            pSVar23 = (__this->fields)._tokens;
            if (pSVar23 == (System_Collections_Generic_List_CustomLogicToken__o *)0x0) goto label_05b7d2c1;
            pCVar12 = System_Collections_Generic_List_object___get_Item
                                ((System_Collections_Generic_List_object__o *)pSVar23,startIndex + 1,
                                 (MethodInfo_395CF20 *)
                                 MethodInfo_System_Collections_Generic_List_CustomLogicToken_get_Item);
            CustomLogic_CustomLogicParser__AssertSymbolValue(__this,pCVar12,9,(MethodInfo *)method_00);
            iVar7 = startIndex;
          }
          else {
            CustomLogic_CustomLogicParser__AssertSymbolValue(__this,local_58,0xb,(MethodInfo *)method_00);
            iVar7 = CustomLogic_CustomLogicParser__FindClosingParen(__this,startIndex + 1,method_06);
            method_00 = (uint *)(ulong)(iVar7 - 1U);
            pCVar17 = CustomLogic_CustomLogicParser__ParseExpression
                                (__this,(CustomLogic_CustomLogicBaseExpressionAst_o *)0x0,startIndex + 2,
                                 iVar7 - 1U,in_R8);
            if (__this_04 == (CustomLogic_CustomLogicConditionalBlockAst_o *)0x0) goto label_05b7d2c1;
            (__this_04->fields).Condition = pCVar17;
            Il2CppCodeGenWriteBarrier(&(__this_04->fields).Condition);
            pSVar23 = (__this->fields)._tokens;
            if (pSVar23 == (System_Collections_Generic_List_CustomLogicToken__o *)0x0) goto label_05b7d2c1;
            pCVar12 = System_Collections_Generic_List_object___get_Item
                                ((System_Collections_Generic_List_object__o *)pSVar23,iVar7 + 1,
                                 (MethodInfo_395CF20 *)
                                 MethodInfo_System_Collections_Generic_List_CustomLogicToken_get_Item);
            CustomLogic_CustomLogicParser__AssertSymbolValue(__this,pCVar12,9,(MethodInfo *)method_00);
          }
          iVar7 = CustomLogic_CustomLogicParser__ParseAst
                            (__this,iVar7 + 2,(CustomLogic_CustomLogicBaseAst_o *)__this_04,
                             (MethodInfo *)method_00);
          pIVar11 = il2cpp_codegen_is_inst_class
                              ((Il2CppObject *)prev,(Il2CppClass *)TypeInfo_CustomLogic_CustomLogicBlockAst);
          if (pIVar11 == (Il2CppObject *)0x0) goto label_05b7d2c1;
          pIVar11 = il2cpp_codegen_is_inst_class
                              ((Il2CppObject *)prev,(Il2CppClass *)TypeInfo_CustomLogic_CustomLogicBlockAst);
          pvVar24 = pIVar11[1].monitor;
          if (pvVar24 == (void *)0x0) goto label_05b7d2c1;
        }
        else {
          bVar5 = CustomLogic_CustomLogicParser__IsSymbolValue
                            ((CustomLogic_CustomLogicParser_o *)__this_11,token,0x2e,(MethodInfo *)method_00);
          if (!bVar5) {
            bVar5 = CustomLogic_CustomLogicParser__IsSymbolValue
                              ((CustomLogic_CustomLogicParser_o *)__this_11,token,0x11,(MethodInfo *)method_00
                              );
            if (bVar5) {
              CustomLogic_CustomLogicParser__AssertSymbolValue(__this,local_58,0x26,(MethodInfo *)method_00);
              iVar8 = (token->fields).Line;
              __this_08 = il2cpp_codegen_object_new
                                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicContinueExpressionAst);
              CustomLogic_CustomLogicContinueExpressionAst___ctor(__this_08,iVar8,(MethodInfo *)0x0);
            }
            else {
              bVar5 = CustomLogic_CustomLogicParser__IsSymbolValue
                                ((CustomLogic_CustomLogicParser_o *)__this_11,token,0x12,
                                 (MethodInfo *)method_00);
              if (!bVar5) {
                bVar5 = CustomLogic_CustomLogicParser__IsSymbolValue
                                  ((CustomLogic_CustomLogicParser_o *)__this_11,token,10,
                                   (MethodInfo *)method_00);
                pMVar20 = extraout_RDX_14;
                prev = (CustomLogic_CustomLogicBaseAst_o *)pCVar22;
                if (bVar5) {
                  return startIndex + 1;
                }
                break;
              }
              CustomLogic_CustomLogicParser__AssertSymbolValue(__this,local_58,0x26,(MethodInfo *)method_00);
              iVar8 = (token->fields).Line;
              __this_08 = (CustomLogic_CustomLogicContinueExpressionAst_o *)
                          il2cpp_codegen_object_new
                                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicBreakExpressionAst);
              CustomLogic_CustomLogicBreakExpressionAst___ctor
                        ((CustomLogic_CustomLogicBreakExpressionAst_o *)__this_08,iVar8,(MethodInfo *)0x0);
            }
            pIVar11 = il2cpp_codegen_is_inst_class
                                ((Il2CppObject *)prev,(Il2CppClass *)TypeInfo_CustomLogic_CustomLogicBlockAst)
            ;
            if (pIVar11 == (Il2CppObject *)0x0) {
label_05b7d2c1:
              ThrowNullReferenceException();
            }
            pIVar11 = il2cpp_codegen_is_inst_class
                                ((Il2CppObject *)prev,(Il2CppClass *)TypeInfo_CustomLogic_CustomLogicBlockAst)
            ;
            if (pIVar11[1].monitor == (void *)0x0) goto label_05b7d2c1;
            iVar7 = startIndex + 2;
            il2cpp_runtime_helper_02fd7670(pIVar11[1].monitor,__this_08,
                         MethodInfo_System_Collections_Generic_List_CustomLogicBaseAst_Add);
            goto label_05b7d36f;
          }
          CustomLogic_CustomLogicParser__AssertSymbolValue(__this,local_58,0xb,(MethodInfo *)method_00);
          uVar6 = CustomLogic_CustomLogicParser__FindClosingParen(__this,startIndex,method_03);
          iVar8 = (token->fields).Line;
          __this_04 = (CustomLogic_CustomLogicConditionalBlockAst_o *)
                      il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicForBlockAst);
          CustomLogic_CustomLogicForBlockAst___ctor
                    ((CustomLogic_CustomLogicForBlockAst_o *)__this_04,iVar8,(MethodInfo *)0x0);
          pSVar23 = (__this->fields)._tokens;
          if (pSVar23 == (System_Collections_Generic_List_CustomLogicToken__o *)0x0) goto label_05b7d2c1;
          iVar7 = startIndex + 2;
          pCVar12 = System_Collections_Generic_List_object___get_Item
                              ((System_Collections_Generic_List_object__o *)pSVar23,iVar7,
                               (MethodInfo_395CF20 *)
                               MethodInfo_System_Collections_Generic_List_CustomLogicToken_get_Item);
          CustomLogic_CustomLogicParser__AssertTokenType(__this,pCVar12,2,(MethodInfo *)method_00);
          pSVar23 = (__this->fields)._tokens;
          if (pSVar23 == (System_Collections_Generic_List_CustomLogicToken__o *)0x0) goto label_05b7d2c1;
          pCVar12 = System_Collections_Generic_List_object___get_Item
                              ((System_Collections_Generic_List_object__o *)pSVar23,iVar7,
                               (MethodInfo_395CF20 *)
                               MethodInfo_System_Collections_Generic_List_CustomLogicToken_get_Item);
          if (pCVar12 == (CustomLogic_CustomLogicToken_o *)0x0) goto label_05b7d2c1;
          pSVar23 = (__this->fields)._tokens;
          local_38 = (ulong)uVar6;
          if (pSVar23 == (System_Collections_Generic_List_CustomLogicToken__o *)0x0) goto label_05b7d2c1;
          name = (System_String_o *)(pCVar12->fields).Value;
          pCVar12 = System_Collections_Generic_List_object___get_Item
                              ((System_Collections_Generic_List_object__o *)pSVar23,iVar7,
                               (MethodInfo_395CF20 *)
                               MethodInfo_System_Collections_Generic_List_CustomLogicToken_get_Item);
          if (pCVar12 == (CustomLogic_CustomLogicToken_o *)0x0) goto label_05b7d2c1;
          iVar8 = (pCVar12->fields).Line;
          pCVar16 = il2cpp_codegen_object_new
                              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVariableExpressionAst);
          if ((name != (System_String_o *)0x0) && ((Il2CppClass *)name->klass != g_data_07556758)) {
label_05b7d3cb:
            il2cpp_codegen_raise_invalid_cast_exception(name);
          }
          pMVar20 = (MethodInfo *)0x0;
          CustomLogic_CustomLogicVariableExpressionAst___ctor(pCVar16,name,iVar8,(MethodInfo *)0x0);
          if (__this_04 == (CustomLogic_CustomLogicConditionalBlockAst_o *)0x0) goto label_05b7d2c1;
          (__this_04->fields).Condition = (CustomLogic_CustomLogicBaseExpressionAst_o *)pCVar16;
          Il2CppCodeGenWriteBarrier(&(__this_04->fields).Condition);
          pSVar23 = (__this->fields)._tokens;
          if (pSVar23 == (System_Collections_Generic_List_CustomLogicToken__o *)0x0) goto label_05b7d2c1;
          pCVar12 = System_Collections_Generic_List_object___get_Item
                              ((System_Collections_Generic_List_object__o *)pSVar23,startIndex + 3,
                               (MethodInfo_395CF20 *)
                               MethodInfo_System_Collections_Generic_List_CustomLogicToken_get_Item);
          CustomLogic_CustomLogicParser__AssertSymbolValue(__this,pCVar12,0x2f,pMVar20);
          iVar7 = (int)local_38;
          method_00 = (uint *)(ulong)(iVar7 - 1U);
          pCVar12 = (CustomLogic_CustomLogicToken_o *)
                    CustomLogic_CustomLogicParser__ParseExpression
                              (__this,(CustomLogic_CustomLogicBaseExpressionAst_o *)0x0,startIndex + 4,
                               iVar7 - 1U,in_R8);
          (__this_04->fields).Token = pCVar12;
          Il2CppCodeGenWriteBarrier(&(__this_04->fields).Token);
          pSVar23 = (__this->fields)._tokens;
          if (pSVar23 == (System_Collections_Generic_List_CustomLogicToken__o *)0x0) goto label_05b7d2c1;
          pCVar12 = System_Collections_Generic_List_object___get_Item
                              ((System_Collections_Generic_List_object__o *)pSVar23,iVar7 + 1,
                               (MethodInfo_395CF20 *)
                               MethodInfo_System_Collections_Generic_List_CustomLogicToken_get_Item);
          CustomLogic_CustomLogicParser__AssertSymbolValue(__this,pCVar12,9,(MethodInfo *)method_00);
          iVar7 = CustomLogic_CustomLogicParser__ParseAst
                            (__this,iVar7 + 2,(CustomLogic_CustomLogicBaseAst_o *)__this_04,
                             (MethodInfo *)method_00);
          pIVar11 = il2cpp_codegen_is_inst_class
                              ((Il2CppObject *)prev,(Il2CppClass *)TypeInfo_CustomLogic_CustomLogicBlockAst);
          if (pIVar11 == (Il2CppObject *)0x0) goto label_05b7d2c1;
          pIVar11 = il2cpp_codegen_is_inst_class
                              ((Il2CppObject *)prev,(Il2CppClass *)TypeInfo_CustomLogic_CustomLogicBlockAst);
          pvVar24 = pIVar11[1].monitor;
          if (pvVar24 == (void *)0x0) goto label_05b7d2c1;
        }
        il2cpp_runtime_helper_02fd7670(pvVar24,__this_04,MethodInfo_System_Collections_Generic_List_CustomLogicBaseAst_Add);
        pMVar20 = extraout_RDX_09;
      }
    }
joined_r0x05b7cd49:
    if (iVar7 != startIndex) {
label_05b7d36f:
      iVar8 = CustomLogic_CustomLogicParser__ParseAst(__this,iVar7,prev,(MethodInfo *)method_00);
      return iVar8;
    }
  }
  CustomLogic_CustomLogicParser__AssertFalse(__this,token,pMVar20);
  pCVar13 = (CustomLogic_CustomLogicPrimitiveExpressionAst_o *)prev;
label_05b7d3c3:
  il2cpp_codegen_raise_invalid_cast_exception(pCVar13);
}


// CustomLogic.CustomLogicParser$$ParseDecorator
// il2cpp: System_Object_array* CustomLogic_CustomLogicParser__ParseDecorator (CustomLogic_CustomLogicParser_o* __this, int32_t startIndex, const MethodInfo* method);
// 0x5b7e9f0
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b7ec84: jmp 0x5b7edcb
// asm:   0x5b7ec9a: jmp 0x5b7edcb
// asm:   0x5b7ee2b: mov rdi, rbp

System_Object_array *
CustomLogic_CustomLogicParser__ParseDecorator
          (CustomLogic_CustomLogicParser_o *__this,int32_t startIndex,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Collections_Generic_List_CustomLogicToken__o *pSVar3;
  System_Collections_Generic_List_object__o *pSVar4;
  int32_t endIndex;
  CustomLogic_CustomLogicToken_o *pCVar5;
  CustomLogic_CustomLogicDecorator_o *__this_00;
  CustomLogic_CustomLogicToken_o *pCVar6;
  int *piVar7;
  System_Int32_array *pSVar8;
  Il2CppObject *pIVar9;
  System_Object_array *pSVar10;
  Il2CppObject *pIVar11;
  System_String_o *pSVar12;
  System_String_o *str0;
  Il2CppClass *pIVar13;
  System_Exception_o *pSVar14;
  MethodInfo *in_RCX;
  MethodInfo *pMVar15;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *pMVar16;
  int iVar17;
  int32_t startIndex_00;
  int local_3c;
  CustomLogic_CustomLogicDecorator_o *local_38;
  
  if (Il2CppMethodInitialized_07547394 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicDecorator);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_object_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_CustomLogicToken_get_Count);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_CustomLogicToken_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    Il2CppMethodInitialized_07547394 = '\x01';
  }
  pSVar3 = (__this->fields)._tokens;
  if (pSVar3 == (System_Collections_Generic_List_CustomLogicToken__o *)0x0) goto label_05b7edcb;
  pCVar5 = System_Collections_Generic_List_object___get_Item
                     ((System_Collections_Generic_List_object__o *)pSVar3,startIndex,
                      (MethodInfo_395CF20 *)
                      MethodInfo_System_Collections_Generic_List_CustomLogicToken_get_Item);
  CustomLogic_CustomLogicParser__AssertSymbolValue(__this,pCVar5,0xf,in_RCX);
  pSVar3 = (__this->fields)._tokens;
  if (pSVar3 == (System_Collections_Generic_List_CustomLogicToken__o *)0x0) goto label_05b7edcb;
  if ((pSVar3->fields)._size <= startIndex + 1) {
    pIVar13 = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
    pSVar14 = (System_Exception_o *)il2cpp_codegen_object_new(pIVar13);
    pSVar12 = il2cpp_codegen_get_runtime_metadata(&"Expected decorator name after @");
    System_Exception___ctor_54fa440(pSVar14,pSVar12,(MethodInfo *)0x0);
    pMVar15 = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicParser_ParseDecorator);
    il2cpp_codegen_raise_exception((Il2CppObject *)pSVar14,pMVar15);
  }
  pCVar5 = System_Collections_Generic_List_object___get_Item
                     ((System_Collections_Generic_List_object__o *)pSVar3,startIndex + 1,
                      (MethodInfo_395CF20 *)
                      MethodInfo_System_Collections_Generic_List_CustomLogicToken_get_Item);
  CustomLogic_CustomLogicParser__AssertTokenType(__this,pCVar5,2,in_RCX);
  if (pCVar5 == (CustomLogic_CustomLogicToken_o *)0x0) goto label_05b7edcb;
  pSVar12 = (System_String_o *)(pCVar5->fields).Value;
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicDecorator);
  if ((pSVar12 != (System_String_o *)0x0) && (pSVar12->klass != g_data_07556758)) {
label_05b7ee2e:
    il2cpp_codegen_raise_invalid_cast_exception(pSVar12);
  }
  CustomLogic_CustomLogicDecorator___ctor(__this_00,pSVar12,(MethodInfo *)0x0);
  pSVar3 = (__this->fields)._tokens;
  if (pSVar3 == (System_Collections_Generic_List_CustomLogicToken__o *)0x0) goto label_05b7edcb;
  iVar17 = startIndex + 2;
  if (((iVar17 < (pSVar3->fields)._size) &&
      (pCVar6 = System_Collections_Generic_List_object___get_Item
                          ((System_Collections_Generic_List_object__o *)pSVar3,iVar17,
                           (MethodInfo_395CF20 *)
                           MethodInfo_System_Collections_Generic_List_CustomLogicToken_get_Item),
      pCVar6 != (CustomLogic_CustomLogicToken_o *)0x0)) && ((pCVar6->fields).Type == 0)) {
    pSVar12 = (System_String_o *)(pCVar6->fields).Value;
    if (pSVar12 == (System_String_o *)0x0) goto label_05b7edcb;
    if ((pSVar12->klass->_1).element_class != (g_data_07556710->_1).element_class) goto label_05b7ee2e;
    piVar7 = il2cpp_vm_Object_Unbox((Il2CppObject *)pSVar12);
    if (*piVar7 != 0xb) goto label_05b7ed1d;
    endIndex = CustomLogic_CustomLogicParser__FindClosingParen(__this,iVar17,method_00);
    if (endIndex < 0) {
      NullCheck(pCVar5);
      pSVar12 = CustomLogic_CustomLogicParser__GetLineNumberString(__this,(pCVar5->fields).Line + 1,method_02)
      ;
      str0 = il2cpp_codegen_get_runtime_metadata(&"Unclosed decorator parameters at line ");
      pSVar12 = System_String__Concat_52f0320(str0,pSVar12,(MethodInfo *)0x0);
      pIVar13 = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
      pSVar14 = (System_Exception_o *)il2cpp_codegen_object_new(pIVar13);
      System_Exception___ctor_54fa440(pSVar14,pSVar12,(MethodInfo *)0x0);
      pMVar15 = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicParser_ParseDecorator);
      il2cpp_codegen_raise_exception((Il2CppObject *)pSVar14,pMVar15);
    }
    startIndex_00 = startIndex + 3;
    pSVar8 = CustomLogic_CustomLogicParser__FindCommas(__this,startIndex_00,endIndex,in_RCX);
    if (pSVar8 == (System_Int32_array *)0x0) goto label_05b7edcb;
    pMVar15 = (MethodInfo *)pSVar8->max_length;
    if (__this_00 == (CustomLogic_CustomLogicDecorator_o *)0x0) {
      if ((0 < (int)pMVar15) || (startIndex_00 < endIndex)) goto label_05b7edcb;
    }
    else if ((int)pMVar15 < 1) {
      if (startIndex_00 < endIndex) goto label_05b7eca4;
    }
    else {
      method_01 = (MethodInfo *)((ulong)pMVar15 & 0xffffffff);
      pMVar16 = (MethodInfo *)0x0;
      local_38 = __this_00;
      do {
        if (method_01 <= pMVar16) goto label_05b7edd0;
        iVar17 = pSVar8->m_Items[(long)pMVar16];
        pSVar4 = (local_38->fields).Parameters;
        pIVar9 = CustomLogic_CustomLogicParser__ParseDecoratorParameter
                           (__this,startIndex_00,iVar17 + -1,method_01);
        pMVar15 = MethodInfo_System_Collections_Generic_List_object_Add;
        if (pSVar4 == (System_Collections_Generic_List_object__o *)0x0) goto label_05b7edcb;
        piVar1 = &(pSVar4->fields)._version;
        *piVar1 = *piVar1 + 1;
        pSVar10 = (pSVar4->fields)._items;
        if (pSVar10 == (System_Object_array *)0x0) goto label_05b7edcb;
        uVar2 = (pSVar4->fields)._size;
        if (uVar2 < (uint)pSVar10->max_length) {
          (pSVar4->fields)._size = uVar2 + 1;
          pSVar10->m_Items[(int)uVar2] = pIVar9;
          Il2CppCodeGenWriteBarrier(pSVar10->m_Items + (int)uVar2);
        }
        else {
          System_Collections_Generic_List_object___AddWithResize
                    (pSVar4,pIVar9,(MethodInfo_395D230 *)pMVar15->klass->rgctx_data[0xe].method);
        }
        startIndex_00 = iVar17 + 1;
        pMVar16 = (MethodInfo *)((long)&pMVar16->methodPointer + 1);
        uVar2 = (uint)pSVar8->max_length;
        method_01 = (MethodInfo *)(ulong)uVar2;
        pMVar15 = (MethodInfo *)(long)(int)uVar2;
      } while ((long)pMVar16 < (long)pMVar15);
      __this_00 = local_38;
      if (startIndex_00 < endIndex) {
        if (local_38 == (CustomLogic_CustomLogicDecorator_o *)0x0) goto label_05b7edcb;
label_05b7eca4:
        pSVar4 = (__this_00->fields).Parameters;
        pIVar9 = CustomLogic_CustomLogicParser__ParseDecoratorParameter
                           (__this,startIndex_00,endIndex + -1,pMVar15);
        pMVar15 = MethodInfo_System_Collections_Generic_List_object_Add;
        if (pSVar4 == (System_Collections_Generic_List_object__o *)0x0) goto label_05b7edcb;
        piVar1 = &(pSVar4->fields)._version;
        *piVar1 = *piVar1 + 1;
        pSVar10 = (pSVar4->fields)._items;
        if (pSVar10 == (System_Object_array *)0x0) goto label_05b7edcb;
        uVar2 = (pSVar4->fields)._size;
        if (uVar2 < (uint)pSVar10->max_length) {
          (pSVar4->fields)._size = uVar2 + 1;
          pSVar10->m_Items[(int)uVar2] = pIVar9;
          Il2CppCodeGenWriteBarrier(pSVar10->m_Items + (int)uVar2);
        }
        else {
          System_Collections_Generic_List_object___AddWithResize
                    (pSVar4,pIVar9,(MethodInfo_395D230 *)pMVar15->klass->rgctx_data[0xe].method);
        }
      }
    }
    iVar17 = endIndex + 1;
  }
label_05b7ed1d:
  pSVar10 = (System_Object_array *)SZArrayNew(TypeInfo_object_array,2);
  local_3c = iVar17;
  pIVar9 = il2cpp_vm_Object_Box(g_data_07556710,&local_3c);
  if (pSVar10 == (System_Object_array *)0x0) {
label_05b7edcb:
    ThrowNullReferenceException();
  }
  if ((pIVar9 != (Il2CppObject *)0x0) &&
     (pIVar11 = il2cpp_vm_Object_IsInst(pIVar9,(((pSVar10->obj).klass)->_1).element_class),
     pIVar11 == (Il2CppObject *)0x0)) {
label_05b7edd5:
    pIVar9 = il2cpp_codegen_get_array_type_mismatch_exception();
    il2cpp_codegen_raise_exception(pIVar9,(MethodInfo *)0x0);
  }
  if ((int)pSVar10->max_length != 0) {
    pSVar10->m_Items[0] = pIVar9;
    Il2CppCodeGenWriteBarrier(pSVar10->m_Items);
    if ((__this_00 != (CustomLogic_CustomLogicDecorator_o *)0x0) &&
       (pIVar9 = il2cpp_vm_Object_IsInst((Il2CppObject *)__this_00,(((pSVar10->obj).klass)->_1).element_class)
       , pIVar9 == (Il2CppObject *)0x0)) goto label_05b7edd5;
    if ((pSVar10->max_length & 0xfffffffe) != 0) {
      pSVar10->m_Items[1] = (Il2CppObject *)__this_00;
      Il2CppCodeGenWriteBarrier(pSVar10->m_Items + 1);
      return pSVar10;
    }
  }
label_05b7edd0:
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicParser$$ParseDecoratorParameter
// il2cpp: Il2CppObject* CustomLogic_CustomLogicParser__ParseDecoratorParameter (CustomLogic_CustomLogicParser_o* __this, int32_t startIndex, int32_t endIndex, const MethodInfo* method);
// 0x5b7eeb0
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b7f146: call 0x30d6260  ; il2cpp_runtime_helper_030d6260()
// asm:   0x5b7f14b: jmp 0x5b7f05e

Il2CppObject *
CustomLogic_CustomLogicParser__ParseDecoratorParameter
          (CustomLogic_CustomLogicParser_o *__this,int32_t startIndex,int32_t endIndex,MethodInfo *method)

{
  uint uVar1;
  System_Collections_Generic_List_CustomLogicToken__o *pSVar2;
  CustomLogic_CustomLogicToken_o *pCVar3;
  int *piVar4;
  uint *puVar5;
  MethodInfo_395CF20 *method_00;
  Il2CppObject *pIVar6;
  System_String_o *pSVar7;
  System_String_o *str0;
  Il2CppClass *pIVar8;
  System_Exception_o *__this_00;
  MethodInfo *lastManagedFrame;
  MethodInfo *method_01;
  MethodInfo *method_02;
  System_String_o **metadataPointer;
  uint local_40;
  uint local_3c;
  undefined1 local_38 [16];
  
  if (Il2CppMethodInitialized_07547395 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_CustomLogicToken_get_Item);
    Il2CppMethodInitialized_07547395 = '\x01';
  }
  if (startIndex + 1 == endIndex) {
    pSVar2 = (__this->fields)._tokens;
    if (pSVar2 == (System_Collections_Generic_List_CustomLogicToken__o *)0x0) goto label_05b7f15e;
    pCVar3 = System_Collections_Generic_List_object___get_Item
                       ((System_Collections_Generic_List_object__o *)pSVar2,startIndex,
                        (MethodInfo_395CF20 *)
                        MethodInfo_System_Collections_Generic_List_CustomLogicToken_get_Item);
    if ((pCVar3 == (CustomLogic_CustomLogicToken_o *)0x0) || ((pCVar3->fields).Type != 0)) {
label_05b7ef49:
      pSVar2 = (__this->fields)._tokens;
      if (pSVar2 == (System_Collections_Generic_List_CustomLogicToken__o *)0x0) goto label_05b7f15e;
      pCVar3 = System_Collections_Generic_List_object___get_Item
                         ((System_Collections_Generic_List_object__o *)pSVar2,startIndex,
                          (MethodInfo_395CF20 *)
                          MethodInfo_System_Collections_Generic_List_CustomLogicToken_get_Item);
      if ((pCVar3 != (CustomLogic_CustomLogicToken_o *)0x0) && ((pCVar3->fields).Type == 0)) {
        pIVar6 = (pCVar3->fields).Value;
        if (pIVar6 == (Il2CppObject *)0x0) goto label_05b7f15e;
        if ((pIVar6->klass->_1).element_class != (g_data_07556710->_1).element_class) goto label_05b7f217;
        piVar4 = il2cpp_vm_Object_Unbox(pIVar6);
        if (*piVar4 == 0x21) goto label_05b7efa7;
      }
    }
    else {
      pIVar6 = (pCVar3->fields).Value;
      if (pIVar6 == (Il2CppObject *)0x0) goto label_05b7f15e;
      if ((pIVar6->klass->_1).element_class != (g_data_07556710->_1).element_class) goto label_05b7f217;
      piVar4 = il2cpp_vm_Object_Unbox(pIVar6);
      if (*piVar4 != 0x22) goto label_05b7ef49;
label_05b7efa7:
      pSVar2 = (__this->fields)._tokens;
      if ((pSVar2 == (System_Collections_Generic_List_CustomLogicToken__o *)0x0) ||
         (pCVar3 = System_Collections_Generic_List_object___get_Item
                             ((System_Collections_Generic_List_object__o *)pSVar2,endIndex,
                              (MethodInfo_395CF20 *)
                              MethodInfo_System_Collections_Generic_List_CustomLogicToken_get_Item),
         pCVar3 == (CustomLogic_CustomLogicToken_o *)0x0)) goto label_05b7f15e;
      if ((pCVar3->fields).Type == 1) {
        pSVar2 = (__this->fields)._tokens;
        if ((pSVar2 == (System_Collections_Generic_List_CustomLogicToken__o *)0x0) ||
           (pCVar3 = System_Collections_Generic_List_object___get_Item
                               ((System_Collections_Generic_List_object__o *)pSVar2,endIndex,
                                (MethodInfo_395CF20 *)
                                MethodInfo_System_Collections_Generic_List_CustomLogicToken_get_Item),
           pCVar3 == (CustomLogic_CustomLogicToken_o *)0x0)) goto label_05b7f15e;
        pIVar6 = (pCVar3->fields).Value;
        if (pIVar6 != (Il2CppObject *)0x0) {
          if (pIVar6->klass == g_data_07556710) {
            puVar5 = il2cpp_vm_Object_Unbox(pIVar6);
            pSVar2 = (__this->fields)._tokens;
            if (pSVar2 == (System_Collections_Generic_List_CustomLogicToken__o *)0x0) goto label_05b7f15e;
            uVar1 = *puVar5;
            pCVar3 = System_Collections_Generic_List_object___get_Item
                               ((System_Collections_Generic_List_object__o *)pSVar2,startIndex,
                                (MethodInfo_395CF20 *)
                                MethodInfo_System_Collections_Generic_List_CustomLogicToken_get_Item);
            local_3c = uVar1;
            if ((pCVar3 != (CustomLogic_CustomLogicToken_o *)0x0) && ((pCVar3->fields).Type == 0)) {
              pIVar6 = (pCVar3->fields).Value;
              if (pIVar6 == (Il2CppObject *)0x0) goto label_05b7f15e;
              if ((pIVar6->klass->_1).element_class != (g_data_07556710->_1).element_class) {
label_05b7f217:
                il2cpp_codegen_raise_invalid_cast_exception();
              }
              piVar4 = il2cpp_vm_Object_Unbox(pIVar6);
              if (*piVar4 == 0x22) {
                local_3c = -uVar1;
              }
            }
            puVar5 = &local_3c;
            pIVar8 = g_data_07556710;
            goto label_05b7f146;
          }
          if (pIVar6->klass == g_data_07556740) {
            puVar5 = il2cpp_vm_Object_Unbox(pIVar6);
            pSVar2 = (__this->fields)._tokens;
            if (pSVar2 == (System_Collections_Generic_List_CustomLogicToken__o *)0x0) goto label_05b7f15e;
            local_38 = ZEXT416(*puVar5);
            pCVar3 = System_Collections_Generic_List_object___get_Item
                               ((System_Collections_Generic_List_object__o *)pSVar2,startIndex,
                                (MethodInfo_395CF20 *)
                                MethodInfo_System_Collections_Generic_List_CustomLogicToken_get_Item);
            if ((pCVar3 == (CustomLogic_CustomLogicToken_o *)0x0) || ((pCVar3->fields).Type != 0)) {
label_05b7f131:
              local_40 = local_38._0_4_;
            }
            else {
              pIVar6 = (pCVar3->fields).Value;
              if (pIVar6 == (Il2CppObject *)0x0) goto label_05b7f15e;
              if ((pIVar6->klass->_1).element_class != (g_data_07556710->_1).element_class) goto label_05b7f217;
              piVar4 = il2cpp_vm_Object_Unbox(pIVar6);
              if (*piVar4 != 0x22) goto label_05b7f131;
              local_40 = local_38._0_4_ ^ 0x80000000;
            }
            puVar5 = &local_40;
            pIVar8 = g_data_07556740;
label_05b7f146:
            pIVar6 = il2cpp_vm_Object_Box(pIVar8,puVar5);
            return pIVar6;
          }
        }
      }
    }
  }
  pSVar2 = (__this->fields)._tokens;
  if (startIndex == endIndex) {
    if ((pSVar2 == (System_Collections_Generic_List_CustomLogicToken__o *)0x0) ||
       (pCVar3 = System_Collections_Generic_List_object___get_Item
                           ((System_Collections_Generic_List_object__o *)pSVar2,startIndex,
                            (MethodInfo_395CF20 *)
                            MethodInfo_System_Collections_Generic_List_CustomLogicToken_get_Item),
       pCVar3 == (CustomLogic_CustomLogicToken_o *)0x0)) {
label_05b7f15e:
      ThrowNullReferenceException();
    }
    if ((pCVar3->fields).Type - 1U < 2) {
      return (pCVar3->fields).Value;
    }
    NullCheck(pCVar3);
    pSVar7 = CustomLogic_CustomLogicParser__GetLineNumberString(__this,(pCVar3->fields).Line + 1,method_02);
    metadataPointer = &"Invalid decorator parameter at line ";
  }
  else {
    NullCheck(pSVar2);
    method_00 = (MethodInfo_395CF20 *)
                il2cpp_codegen_get_runtime_metadata
                          (&MethodInfo_System_Collections_Generic_List_CustomLogicToken_get_Item);
    pIVar6 = System_Collections_Generic_List_object___get_Item
                       ((System_Collections_Generic_List_object__o *)pSVar2,startIndex,method_00);
    NullCheck(pIVar6);
    pSVar7 = CustomLogic_CustomLogicParser__GetLineNumberString(__this,*(int *)&pIVar6[2].klass + 1,method_01)
    ;
    metadataPointer = &"Decorator parameters must be literal values at line ";
  }
  str0 = il2cpp_codegen_get_runtime_metadata(metadataPointer);
  pSVar7 = System_String__Concat_52f0320(str0,pSVar7,(MethodInfo *)0x0);
  pIVar8 = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
  __this_00 = (System_Exception_o *)il2cpp_codegen_object_new(pIVar8);
  System_Exception___ctor_54fa440(__this_00,pSVar7,(MethodInfo *)0x0);
  lastManagedFrame =
       il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicParser_ParseDecoratorParameter);
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
}


// CustomLogic.CustomLogicParser$$FindLowestBinop
// il2cpp: int32_t CustomLogic_CustomLogicParser__FindLowestBinop (CustomLogic_CustomLogicParser_o* __this, int32_t startIndex, int32_t endIndex, const MethodInfo* method);
// 0x5b7dca0
// asm: 6 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b7dd9f: jmp 0x5b7ddb9
// asm:   0x5b7ddac: nop dword ptr [rax]
// asm:   0x5b7ddb0: test r14d, r14d
// asm:   0x5b7df1b: jmp 0x5b7ddc4
// asm:   0x5b7df5e: jmp 0x5b7ddb9
// asm:   0x5b7df9d: jmp 0x5b7dea8

int32_t CustomLogic_CustomLogicParser__FindLowestBinop
                  (CustomLogic_CustomLogicParser_o *__this,int32_t startIndex,int32_t endIndex,
                  MethodInfo *method)

{
  System_Collections_Generic_Dictionary_int__int__o *__this_00;
  Il2CppObject *obj;
  int32_t iVar1;
  bool bVar2;
  int32_t iVar3;
  CustomLogic_CustomLogicToken_o *token;
  int *piVar4;
  int32_t *piVar5;
  CustomLogic_CustomLogicToken_o *pCVar6;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *pMVar7;
  MethodInfo *extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
  MethodInfo *extraout_RDX_03;
  MethodInfo *extraout_RDX_04;
  MethodInfo *extraout_RDX_05;
  System_Collections_Generic_List_CustomLogicToken__o *__this_01;
  int iVar8;
  int iVar9;
  int32_t local_3c;
  int local_38;
  
  if (Il2CppMethodInitialized_07547396 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicSymbols);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_int_get_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_CustomLogicToken_get_Item);
    Il2CppMethodInitialized_07547396 = '\x01';
  }
  local_3c = -1;
  if (startIndex < endIndex) {
    local_38 = 0x7fffffff;
    local_3c = -1;
    iVar9 = 0;
    iVar8 = 0;
    do {
      __this_01 = (__this->fields)._tokens;
      if (__this_01 == (System_Collections_Generic_List_CustomLogicToken__o *)0x0) goto label_05b7dfb5;
      token = System_Collections_Generic_List_object___get_Item
                        ((System_Collections_Generic_List_object__o *)__this_01,startIndex,
                         (MethodInfo_395CF20 *)
                         MethodInfo_System_Collections_Generic_List_CustomLogicToken_get_Item);
      pMVar7 = extraout_RDX;
      if (token == (CustomLogic_CustomLogicToken_o *)0x0) {
        if (iVar8 < 1) goto label_05b7ddc4;
      }
      else {
        if ((token->fields).Type == 0) {
          __this_01 = (System_Collections_Generic_List_CustomLogicToken__o *)(token->fields).Value;
          if (__this_01 == (System_Collections_Generic_List_CustomLogicToken__o *)0x0) goto label_05b7dfb5;
          if ((__this_01->klass->_1).element_class != *(Il2CppClass **)(g_data_07556710 + 0x40))
          goto label_05b7dfba;
          piVar4 = il2cpp_vm_Object_Unbox((Il2CppObject *)__this_01);
          pMVar7 = extraout_RDX_00;
          if (*piVar4 == 0xb) {
            iVar8 = iVar8 + 1;
          }
          else if ((token->fields).Type == 0) {
            __this_01 = (System_Collections_Generic_List_CustomLogicToken__o *)(token->fields).Value;
            if (__this_01 == (System_Collections_Generic_List_CustomLogicToken__o *)0x0) goto label_05b7dfb5;
            if ((__this_01->klass->_1).element_class != *(Il2CppClass **)(g_data_07556710 + 0x40))
            goto label_05b7dfba;
            piVar4 = il2cpp_vm_Object_Unbox((Il2CppObject *)__this_01);
            iVar8 = iVar8 - (uint)(*piVar4 == 0xc);
            pMVar7 = extraout_RDX_04;
          }
        }
        if (iVar8 < 1) {
          if ((token->fields).Type == 0) {
            __this_01 = (System_Collections_Generic_List_CustomLogicToken__o *)(token->fields).Value;
            if (__this_01 == (System_Collections_Generic_List_CustomLogicToken__o *)0x0) goto label_05b7dfb5;
            if ((__this_01->klass->_1).element_class != *(Il2CppClass **)(g_data_07556710 + 0x40))
            goto label_05b7dfba;
            piVar4 = il2cpp_vm_Object_Unbox((Il2CppObject *)__this_01);
            if (*piVar4 == 0x22) {
label_05b7dea8:
              if (iVar9 == 0) goto label_05b7dd29;
              __this_01 = (__this->fields)._tokens;
              if ((__this_01 == (System_Collections_Generic_List_CustomLogicToken__o *)0x0) ||
                 (pCVar6 = System_Collections_Generic_List_object___get_Item
                                     ((System_Collections_Generic_List_object__o *)__this_01,startIndex + -1,
                                      (MethodInfo_395CF20 *)
                                      MethodInfo_System_Collections_Generic_List_CustomLogicToken_get_Item),
                 pCVar6 == (CustomLogic_CustomLogicToken_o *)0x0)) goto label_05b7dfb5;
              pMVar7 = extraout_RDX_02;
              if ((pCVar6->fields).Type == 0) {
                __this_01 = (System_Collections_Generic_List_CustomLogicToken__o *)(pCVar6->fields).Value;
                if (__this_01 == (System_Collections_Generic_List_CustomLogicToken__o *)0x0)
                goto label_05b7dfb5;
                if ((__this_01->klass->_1).element_class != *(Il2CppClass **)(g_data_07556710 + 0x40))
                goto label_05b7dfba;
                piVar4 = il2cpp_vm_Object_Unbox((Il2CppObject *)__this_01);
                pMVar7 = extraout_RDX_03;
                if (*piVar4 != 0xc) goto label_05b7dd29;
              }
            }
            else {
              pMVar7 = extraout_RDX_01;
              if ((token->fields).Type == 0) {
                __this_01 = (System_Collections_Generic_List_CustomLogicToken__o *)(token->fields).Value;
                if (__this_01 == (System_Collections_Generic_List_CustomLogicToken__o *)0x0)
                goto label_05b7dfb5;
                if ((__this_01->klass->_1).element_class != *(Il2CppClass **)(g_data_07556710 + 0x40))
                goto label_05b7dfba;
                piVar4 = il2cpp_vm_Object_Unbox((Il2CppObject *)__this_01);
                pMVar7 = extraout_RDX_05;
                if (*piVar4 == 0x21) goto label_05b7dea8;
              }
            }
          }
label_05b7ddc4:
          bVar2 = CustomLogic_CustomLogicParser__IsSymbolBinop
                            ((CustomLogic_CustomLogicParser_o *)__this_01,token,pMVar7);
          if (bVar2) {
            if ((TypeInfo_CustomLogic_CustomLogicSymbols->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicSymbols);
            }
            if (((token == (CustomLogic_CustomLogicToken_o *)0x0) ||
                (__this_00 = TypeInfo_CustomLogic_CustomLogicSymbols->static_fields->BinopSymbolPriorities,
                __this_00 == (System_Collections_Generic_Dictionary_int__int__o *)0x0)) ||
               (obj = (token->fields).Value, obj == (Il2CppObject *)0x0)) {
label_05b7dfb5:
              ThrowNullReferenceException();
            }
            if ((obj->klass->_1).element_class != *(Il2CppClass **)(g_data_07556710 + 0x40)) {
label_05b7dfba:
              il2cpp_codegen_raise_invalid_cast_exception();
            }
            piVar5 = il2cpp_vm_Object_Unbox(obj);
            iVar3 = System_Collections_Generic_Dictionary_int__int___get_Item
                              (__this_00,*piVar5,
                               (MethodInfo_4A03E70 *)
                               MethodInfo_System_Collections_Generic_Dictionary_int_int_get_Item);
            iVar1 = local_38;
            if (iVar3 < local_38) {
              iVar1 = iVar3;
            }
            if (iVar3 <= local_38) {
              local_3c = startIndex;
            }
            local_38 = iVar1;
          }
        }
      }
label_05b7dd29:
      startIndex = startIndex + 1;
      iVar9 = iVar9 + -1;
    } while (endIndex != startIndex);
  }
  return local_3c;
}


// CustomLogic.CustomLogicParser$$FindCommas
// il2cpp: System_Int32_array* CustomLogic_CustomLogicParser__FindCommas (CustomLogic_CustomLogicParser_o* __this, int32_t startIndex, int32_t endIndex, const MethodInfo* method);
// 0x5b7e320

System_Int32_array *
CustomLogic_CustomLogicParser__FindCommas
          (CustomLogic_CustomLogicParser_o *__this,int32_t startIndex,int32_t endIndex,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Collections_Generic_List_CustomLogicToken__o *__this_00;
  Il2CppObject *pIVar3;
  MethodInfo *pMVar4;
  System_Collections_Generic_List_int__o *__this_01;
  CustomLogic_CustomLogicToken_o *pCVar5;
  int *piVar6;
  System_Int32_array *pSVar7;
  int iVar8;
  
  if (Il2CppMethodInitialized_07547397 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_ToArray);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_CustomLogicToken_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_int);
    Il2CppMethodInitialized_07547397 = '\x01';
  }
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_int);
  System_Collections_Generic_List_int____ctor
            (__this_01,(MethodInfo_39161C0 *)MethodInfo_System_Collections_Generic_List_int_ctor);
  if (startIndex < endIndex) {
    iVar8 = 0;
    do {
      __this_00 = (__this->fields)._tokens;
      if (__this_00 == (System_Collections_Generic_List_CustomLogicToken__o *)0x0) goto label_05b7e530;
      pCVar5 = System_Collections_Generic_List_object___get_Item
                         ((System_Collections_Generic_List_object__o *)__this_00,startIndex,
                          (MethodInfo_395CF20 *)
                          MethodInfo_System_Collections_Generic_List_CustomLogicToken_get_Item);
      if ((pCVar5 != (CustomLogic_CustomLogicToken_o *)0x0) && ((pCVar5->fields).Type == 0)) {
        pIVar3 = (pCVar5->fields).Value;
        if (pIVar3 == (Il2CppObject *)0x0) goto label_05b7e530;
        if ((pIVar3->klass->_1).element_class != *(Il2CppClass **)(g_data_07556710 + 0x40)) {
label_05b7e535:
          il2cpp_codegen_raise_invalid_cast_exception();
        }
        piVar6 = il2cpp_vm_Object_Unbox(pIVar3);
        iVar8 = iVar8 + (uint)(*piVar6 == 0xb);
        if ((pCVar5->fields).Type == 0) {
          pIVar3 = (pCVar5->fields).Value;
          if (pIVar3 == (Il2CppObject *)0x0) goto label_05b7e530;
          if ((pIVar3->klass->_1).element_class != *(Il2CppClass **)(g_data_07556710 + 0x40)) goto label_05b7e535;
          piVar6 = il2cpp_vm_Object_Unbox(pIVar3);
          iVar8 = iVar8 - (uint)(*piVar6 == 0xc);
          if ((pCVar5->fields).Type == 0) {
            pIVar3 = (pCVar5->fields).Value;
            if (pIVar3 == (Il2CppObject *)0x0) goto label_05b7e530;
            if ((pIVar3->klass->_1).element_class != *(Il2CppClass **)(g_data_07556710 + 0x40))
            goto label_05b7e535;
            piVar6 = il2cpp_vm_Object_Unbox(pIVar3);
            pMVar4 = MethodInfo_System_Collections_Generic_List_int_Add;
            if ((*piVar6 == 0x28) && (iVar8 == 0)) {
              if (__this_01 == (System_Collections_Generic_List_int__o *)0x0) goto label_05b7e530;
              piVar1 = &(__this_01->fields)._version;
              *piVar1 = *piVar1 + 1;
              pSVar7 = (__this_01->fields)._items;
              if (pSVar7 == (System_Int32_array *)0x0) goto label_05b7e530;
              uVar2 = (__this_01->fields)._size;
              if (uVar2 < (uint)pSVar7->max_length) {
                (__this_01->fields)._size = uVar2 + 1;
                pSVar7->m_Items[(int)uVar2] = startIndex;
              }
              else {
                System_Collections_Generic_List_int___AddWithResize
                          (__this_01,startIndex,(MethodInfo_3916AC0 *)pMVar4->klass->rgctx_data[0xe].method);
              }
              iVar8 = 0;
            }
          }
        }
      }
      startIndex = startIndex + 1;
    } while (endIndex != startIndex);
  }
  if (__this_01 != (System_Collections_Generic_List_int__o *)0x0) {
    pSVar7 = System_Collections_Generic_List_int___ToArray
                       (__this_01,(MethodInfo_3918D60 *)MethodInfo_System_Collections_Generic_List_int_ToArray
                       );
    return pSVar7;
  }
label_05b7e530:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicParser$$FindClosingParen
// il2cpp: int32_t CustomLogic_CustomLogicParser__FindClosingParen (CustomLogic_CustomLogicParser_o* __this, int32_t startIndex, const MethodInfo* method);
// 0x5b7e0b0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b7e190: jmp 0x5b7e197

int32_t CustomLogic_CustomLogicParser__FindClosingParen
                  (CustomLogic_CustomLogicParser_o *__this,int32_t startIndex,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  CustomLogic_CustomLogicToken_o *pCVar2;
  int *piVar3;
  System_Collections_Generic_List_CustomLogicToken__o *__this_00;
  int iVar4;
  
  if (Il2CppMethodInitialized_07547398 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_CustomLogicToken_get_Count);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_CustomLogicToken_get_Item);
    Il2CppMethodInitialized_07547398 = '\x01';
  }
  __this_00 = (__this->fields)._tokens;
  if (__this_00 != (System_Collections_Generic_List_CustomLogicToken__o *)0x0) {
    iVar4 = 0;
    do {
      if ((__this_00->fields)._size <= startIndex) {
        return -1;
      }
      pCVar2 = System_Collections_Generic_List_object___get_Item
                         ((System_Collections_Generic_List_object__o *)__this_00,startIndex,
                          (MethodInfo_395CF20 *)
                          MethodInfo_System_Collections_Generic_List_CustomLogicToken_get_Item);
      if ((pCVar2 != (CustomLogic_CustomLogicToken_o *)0x0) && ((pCVar2->fields).Type == 0)) {
        pIVar1 = (pCVar2->fields).Value;
        if (pIVar1 == (Il2CppObject *)0x0) break;
        if ((pIVar1->klass->_1).element_class != *(Il2CppClass **)(g_data_07556710 + 0x40)) {
label_05b7e1ad:
          il2cpp_codegen_raise_invalid_cast_exception();
        }
        piVar3 = il2cpp_vm_Object_Unbox(pIVar1);
        if (*piVar3 == 0xb) {
          iVar4 = iVar4 + 1;
        }
        else if ((pCVar2->fields).Type == 0) {
          pIVar1 = (pCVar2->fields).Value;
          if (pIVar1 == (Il2CppObject *)0x0) break;
          if ((pIVar1->klass->_1).element_class != *(Il2CppClass **)(g_data_07556710 + 0x40)) goto label_05b7e1ad;
          piVar3 = il2cpp_vm_Object_Unbox(pIVar1);
          if ((*piVar3 == 0xc) && (iVar4 = iVar4 + -1, iVar4 == 0)) {
            return startIndex;
          }
        }
      }
      startIndex = startIndex + 1;
      __this_00 = (__this->fields)._tokens;
    } while (__this_00 != (System_Collections_Generic_List_CustomLogicToken__o *)0x0);
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicParser$$FindSemicolon
// il2cpp: int32_t CustomLogic_CustomLogicParser__FindSemicolon (CustomLogic_CustomLogicParser_o* __this, int32_t startIndex, const MethodInfo* method);
// 0x5b7e660
// asm: 4 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b7e69e: lea r15, [rip + 0x17158b3]  ; MethodInfo_System_Collections_Generic_List_CustomLogicToken_get_Item
// asm:   0x5b7e6a5: lea r12, [rip + 0x19d801c]
// asm:   0x5b7e6ac: jmp 0x5b7e6bb
// asm:   0x5b7e6fa: jmp 0x5b7e701

int32_t CustomLogic_CustomLogicParser__FindSemicolon
                  (CustomLogic_CustomLogicParser_o *__this,int32_t startIndex,MethodInfo *method)

{
  System_Collections_Generic_List_CustomLogicToken__o *__this_00;
  Il2CppObject *obj;
  CustomLogic_CustomLogicToken_o *pCVar1;
  int *piVar2;
  
  if (Il2CppMethodInitialized_07547399 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_CustomLogicToken_get_Count);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_CustomLogicToken_get_Item);
    Il2CppMethodInitialized_07547399 = '\x01';
  }
  __this_00 = (__this->fields)._tokens;
  while (__this_00 != (System_Collections_Generic_List_CustomLogicToken__o *)0x0) {
    if ((__this_00->fields)._size <= startIndex) {
      return -1;
    }
    pCVar1 = System_Collections_Generic_List_object___get_Item
                       ((System_Collections_Generic_List_object__o *)__this_00,startIndex,
                        (MethodInfo_395CF20 *)
                        MethodInfo_System_Collections_Generic_List_CustomLogicToken_get_Item);
    if ((pCVar1 != (CustomLogic_CustomLogicToken_o *)0x0) && ((pCVar1->fields).Type == 0)) {
      obj = (pCVar1->fields).Value;
      if (obj == (Il2CppObject *)0x0) break;
      if ((obj->klass->_1).element_class != *(Il2CppClass **)(g_data_07556710 + 0x40)) {
        il2cpp_codegen_raise_invalid_cast_exception();
      }
      piVar2 = il2cpp_vm_Object_Unbox(obj);
      if (*piVar2 == 0x26) {
        return startIndex;
      }
    }
    startIndex = startIndex + 1;
    __this_00 = (__this->fields)._tokens;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicParser$$IsSymbolIn
// il2cpp: bool CustomLogic_CustomLogicParser__IsSymbolIn (CustomLogic_CustomLogicParser_o* __this, CustomLogic_CustomLogicToken_o* token, System_Collections_Generic_HashSet_int__o* symbols, const MethodInfo* method);
// 0x5b7e720

bool CustomLogic_CustomLogicParser__IsSymbolIn
               (CustomLogic_CustomLogicParser_o *__this,CustomLogic_CustomLogicToken_o *token,
               System_Collections_Generic_HashSet_int__o *symbols,MethodInfo *method)

{
  Il2CppObject *obj;
  bool bVar1;
  int32_t *piVar2;
  
  if (Il2CppMethodInitialized_0754739a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_int_Contains);
    Il2CppMethodInitialized_0754739a = '\x01';
  }
  if ((token == (CustomLogic_CustomLogicToken_o *)0x0) || ((token->fields).Type != 0)) {
    return false;
  }
  if ((symbols == (System_Collections_Generic_HashSet_int__o *)0x0) ||
     (obj = (token->fields).Value, obj == (Il2CppObject *)0x0)) {
    ThrowNullReferenceException();
  }
  if ((obj->klass->_1).element_class != *(Il2CppClass **)(g_data_07556710 + 0x40)) {
    il2cpp_codegen_raise_invalid_cast_exception();
  }
  piVar2 = il2cpp_vm_Object_Unbox(obj);
  bVar1 = System_Collections_Generic_HashSet_int___Contains
                    (symbols,*piVar2,
                     (MethodInfo_4FA7E00 *)MethodInfo_System_Collections_Generic_HashSet_int_Contains);
  return bVar1;
}


// CustomLogic.CustomLogicParser$$IsSymbolBinop
// il2cpp: bool CustomLogic_CustomLogicParser__IsSymbolBinop (CustomLogic_CustomLogicParser_o* __this, CustomLogic_CustomLogicToken_o* token, const MethodInfo* method);
// 0x5b7f220

bool CustomLogic_CustomLogicParser__IsSymbolBinop
               (CustomLogic_CustomLogicParser_o *__this,CustomLogic_CustomLogicToken_o *token,
               MethodInfo *method)

{
  System_Collections_Generic_Dictionary_int__int__o *__this_00;
  Il2CppObject *obj;
  bool bVar1;
  int32_t *piVar2;
  
  if (Il2CppMethodInitialized_0754739b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicSymbols);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_int_ContainsKey);
    Il2CppMethodInitialized_0754739b = '\x01';
  }
  if ((token == (CustomLogic_CustomLogicToken_o *)0x0) || ((token->fields).Type != 0)) {
    return false;
  }
  if ((TypeInfo_CustomLogic_CustomLogicSymbols->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicSymbols);
  }
  __this_00 = TypeInfo_CustomLogic_CustomLogicSymbols->static_fields->BinopSymbolPriorities;
  if ((__this_00 == (System_Collections_Generic_Dictionary_int__int__o *)0x0) ||
     (obj = (token->fields).Value, obj == (Il2CppObject *)0x0)) {
    ThrowNullReferenceException();
  }
  if ((obj->klass->_1).element_class != *(Il2CppClass **)(g_data_07556710 + 0x40)) {
    il2cpp_codegen_raise_invalid_cast_exception();
  }
  piVar2 = il2cpp_vm_Object_Unbox(obj);
  bVar1 = System_Collections_Generic_Dictionary_int__int___ContainsKey
                    (__this_00,*piVar2,
                     (MethodInfo_4A04140 *)
                     MethodInfo_System_Collections_Generic_Dictionary_int_int_ContainsKey);
  return bVar1;
}


// CustomLogic.CustomLogicParser$$IsSymbolValue
// il2cpp: bool CustomLogic_CustomLogicParser__IsSymbolValue (CustomLogic_CustomLogicParser_o* __this, CustomLogic_CustomLogicToken_o* token, int32_t symbolValue, const MethodInfo* method);
// 0x5b7e060

bool CustomLogic_CustomLogicParser__IsSymbolValue
               (CustomLogic_CustomLogicParser_o *__this,CustomLogic_CustomLogicToken_o *token,
               int32_t symbolValue,MethodInfo *method)

{
  Il2CppObject *obj;
  int *piVar1;
  
  if ((token == (CustomLogic_CustomLogicToken_o *)0x0) || ((token->fields).Type != 0)) {
    return false;
  }
  obj = (token->fields).Value;
  if (obj == (Il2CppObject *)0x0) {
    ThrowNullReferenceException();
  }
  if ((obj->klass->_1).element_class != *(Il2CppClass **)(g_data_07556710 + 0x40)) {
    il2cpp_codegen_raise_invalid_cast_exception();
  }
  piVar1 = il2cpp_vm_Object_Unbox(obj);
  return *piVar1 == symbolValue;
}


// CustomLogic.CustomLogicParser$$IsAnySymbolValue
// il2cpp: bool CustomLogic_CustomLogicParser__IsAnySymbolValue (CustomLogic_CustomLogicParser_o* __this, CustomLogic_CustomLogicToken_o* token, System_Int32_array* symbolValues, const MethodInfo* method);
// 0x5b7dfc0

bool CustomLogic_CustomLogicParser__IsAnySymbolValue
               (CustomLogic_CustomLogicParser_o *__this,CustomLogic_CustomLogicToken_o *token,
               System_Int32_array *symbolValues,MethodInfo *method)

{
  int iVar1;
  Il2CppObject *obj;
  ulong uVar2;
  int *piVar3;
  ulong uVar4;
  
  if (symbolValues == (System_Int32_array *)0x0) {
label_05b7e04a:
    ThrowNullReferenceException();
  }
  if ((token != (CustomLogic_CustomLogicToken_o *)0x0) && (0 < (int)symbolValues->max_length)) {
    uVar2 = symbolValues->max_length & 0xffffffff;
    uVar4 = 0;
    do {
      if (uVar2 <= uVar4) {
        ThrowIndexOutOfRangeException();
      }
      if ((token->fields).Type == 0) {
        obj = (token->fields).Value;
        if (obj == (Il2CppObject *)0x0) goto label_05b7e04a;
        if ((obj->klass->_1).element_class != *(Il2CppClass **)(g_data_07556710 + 0x40)) {
          il2cpp_codegen_raise_invalid_cast_exception();
        }
        iVar1 = symbolValues->m_Items[uVar4];
        piVar3 = il2cpp_vm_Object_Unbox(obj);
        if (*piVar3 == iVar1) {
          return true;
        }
        uVar2 = (ulong)(uint)symbolValues->max_length;
      }
      uVar4 = uVar4 + 1;
    } while ((long)uVar4 < (long)(int)uVar2);
  }
  return false;
}


// CustomLogic.CustomLogicParser$$AssertSymbolValue
// il2cpp: void CustomLogic_CustomLogicParser__AssertSymbolValue (CustomLogic_CustomLogicParser_o* __this, CustomLogic_CustomLogicToken_o* token, int32_t symbolValue, const MethodInfo* method);
// 0x5b7e7b0

void CustomLogic_CustomLogicParser__AssertSymbolValue
               (CustomLogic_CustomLogicParser_o *__this,CustomLogic_CustomLogicToken_o *token,
               int32_t symbolValue,MethodInfo *method)

{
  int *piVar1;
  Il2CppClass *pIVar2;
  System_String_array *values;
  Il2CppObject *pIVar3;
  System_String_o *pSVar4;
  System_Exception_o *__this_00;
  MethodInfo *lastManagedFrame;
  MethodInfo *method_00;
  MethodInfo *method_01;
  System_String_array *__this_01;
  System_Enum_o local_38;
  int32_t local_28;
  
  if ((token != (CustomLogic_CustomLogicToken_o *)0x0) && ((token->fields).Type == 0)) {
    pIVar3 = (token->fields).Value;
    if (pIVar3 == (Il2CppObject *)0x0) {
      ThrowNullReferenceException();
    }
    if ((pIVar3->klass->_1).element_class != *(Il2CppClass **)(g_data_07556710 + 0x40)) {
      il2cpp_codegen_raise_invalid_cast_exception();
    }
    piVar1 = il2cpp_vm_Object_Unbox(pIVar3);
    if (*piVar1 == symbolValue) {
      return;
    }
  }
  pIVar2 = il2cpp_codegen_get_runtime_metadata(&TypeInfo_string_array);
  values = (System_String_array *)SZArrayNew(pIVar2,6);
  NullCheck(values);
  pIVar3 = il2cpp_codegen_get_runtime_metadata(&"Parsing error at line ");
  il2cpp_codegen_array_set_ref((System_Array_o *)values,0,pIVar3);
  NullCheck(token);
  pSVar4 = CustomLogic_CustomLogicParser__GetLineNumberString(__this,(token->fields).Line,method_00);
  il2cpp_codegen_array_set_ref((System_Array_o *)values,1,(Il2CppObject *)pSVar4);
  pIVar3 = il2cpp_codegen_get_runtime_metadata(&", got ");
  __this_01 = values;
  il2cpp_codegen_array_set_ref((System_Array_o *)values,2,pIVar3);
  pSVar4 = CustomLogic_CustomLogicParser__GetTokenString
                     ((CustomLogic_CustomLogicParser_o *)__this_01,token,method_01);
  il2cpp_codegen_array_set_ref((System_Array_o *)values,3,(Il2CppObject *)pSVar4);
  pIVar3 = il2cpp_codegen_get_runtime_metadata(&", expected ");
  il2cpp_codegen_array_set_ref((System_Array_o *)values,4,pIVar3);
  local_38.klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicSymbol);
  local_38.monitor = (void *)0xffffffffffffffff;
  local_28 = symbolValue;
  pSVar4 = System_Enum__ToString(&local_38,(MethodInfo *)0x0);
  il2cpp_codegen_array_set_ref((System_Array_o *)values,5,(Il2CppObject *)pSVar4);
  pSVar4 = System_String__Concat_5302910(values,(MethodInfo *)0x0);
  pIVar2 = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
  __this_00 = (System_Exception_o *)il2cpp_codegen_object_new(pIVar2);
  System_Exception___ctor_54fa440(__this_00,pSVar4,(MethodInfo *)0x0);
  lastManagedFrame =
       il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicParser_AssertSymbolValue);
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
}


// CustomLogic.CustomLogicParser$$AssertTokenType
// il2cpp: void CustomLogic_CustomLogicParser__AssertTokenType (CustomLogic_CustomLogicParser_o* __this, CustomLogic_CustomLogicToken_o* token, int32_t type, const MethodInfo* method);
// 0x5b7e1c0

void CustomLogic_CustomLogicParser__AssertTokenType
               (CustomLogic_CustomLogicParser_o *__this,CustomLogic_CustomLogicToken_o *token,int32_t type,
               MethodInfo *method)

{
  Il2CppClass *pIVar1;
  System_String_array *values;
  Il2CppObject *pIVar2;
  System_String_o *pSVar3;
  System_Exception_o *__this_00;
  MethodInfo *lastManagedFrame;
  MethodInfo *method_00;
  MethodInfo *method_01;
  System_String_array *__this_01;
  System_Enum_o local_38;
  int32_t local_28;
  
  if ((token == (CustomLogic_CustomLogicToken_o *)0x0) || ((token->fields).Type != type)) {
    pIVar1 = il2cpp_codegen_get_runtime_metadata(&TypeInfo_string_array);
    values = (System_String_array *)SZArrayNew(pIVar1,6);
    NullCheck(values);
    pIVar2 = il2cpp_codegen_get_runtime_metadata(&"Parsing error at line ");
    il2cpp_codegen_array_set_ref((System_Array_o *)values,0,pIVar2);
    NullCheck(token);
    pSVar3 = CustomLogic_CustomLogicParser__GetLineNumberString(__this,(token->fields).Line,method_00);
    il2cpp_codegen_array_set_ref((System_Array_o *)values,1,(Il2CppObject *)pSVar3);
    pIVar2 = il2cpp_codegen_get_runtime_metadata(&", got ");
    __this_01 = values;
    il2cpp_codegen_array_set_ref((System_Array_o *)values,2,pIVar2);
    pSVar3 = CustomLogic_CustomLogicParser__GetTokenString
                       ((CustomLogic_CustomLogicParser_o *)__this_01,token,method_01);
    il2cpp_codegen_array_set_ref((System_Array_o *)values,3,(Il2CppObject *)pSVar3);
    pIVar2 = il2cpp_codegen_get_runtime_metadata(&", expected ");
    il2cpp_codegen_array_set_ref((System_Array_o *)values,4,pIVar2);
    local_38.klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicTokenType);
    local_38.monitor = (void *)0xffffffffffffffff;
    local_28 = type;
    pSVar3 = System_Enum__ToString(&local_38,(MethodInfo *)0x0);
    il2cpp_codegen_array_set_ref((System_Array_o *)values,5,(Il2CppObject *)pSVar3);
    pSVar3 = System_String__Concat_5302910(values,(MethodInfo *)0x0);
    pIVar1 = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
    __this_00 = (System_Exception_o *)il2cpp_codegen_object_new(pIVar1);
    System_Exception___ctor_54fa440(__this_00,pSVar3,(MethodInfo *)0x0);
    lastManagedFrame =
         il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicParser_AssertTokenType);
    il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
  }
  return;
}


// CustomLogic.CustomLogicParser$$AssertFalse
// il2cpp: void CustomLogic_CustomLogicParser__AssertFalse (CustomLogic_CustomLogicParser_o* __this, CustomLogic_CustomLogicToken_o* token, const MethodInfo* method);
// 0x5b7e950

void CustomLogic_CustomLogicParser__AssertFalse
               (CustomLogic_CustomLogicParser_o *__this,CustomLogic_CustomLogicToken_o *token,
               MethodInfo *method)

{
  System_String_o *pSVar1;
  System_String_o *str3;
  System_String_o *str0;
  System_String_o *str2;
  Il2CppClass *klass;
  System_Exception_o *__this_00;
  MethodInfo *lastManagedFrame;
  MethodInfo *method_00;
  MethodInfo *method_01;
  
  NullCheck(token);
  pSVar1 = CustomLogic_CustomLogicParser__GetLineNumberString(__this,(token->fields).Line,method_00);
  str3 = CustomLogic_CustomLogicParser__GetTokenString(__this,token,method_01);
  str0 = il2cpp_codegen_get_runtime_metadata(&"Parsing error at line ");
  str2 = il2cpp_codegen_get_runtime_metadata(&", got ");
  pSVar1 = System_String__Concat_5302810(str0,pSVar1,str2,str3,(MethodInfo *)0x0);
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
  __this_00 = (System_Exception_o *)il2cpp_codegen_object_new(klass);
  System_Exception___ctor_54fa440(__this_00,pSVar1,(MethodInfo *)0x0);
  lastManagedFrame =
       il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicParser_AssertFalse);
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
}


// CustomLogic.CustomLogicParser$$GetTokenString
// il2cpp: System_String_o* CustomLogic_CustomLogicParser__GetTokenString (CustomLogic_CustomLogicParser_o* __this, CustomLogic_CustomLogicToken_o* token, const MethodInfo* method);
// 0x5b7f2e0

System_String_o *
CustomLogic_CustomLogicParser__GetTokenString
          (CustomLogic_CustomLogicParser_o *__this,CustomLogic_CustomLogicToken_o *token,MethodInfo *method)

{
  Il2CppObject *obj;
  System_String_o *pSVar1;
  undefined4 *puVar2;
  System_Enum_o local_20;
  undefined4 local_10;
  
  if (Il2CppMethodInitialized_0754739c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicSymbol);
    il2cpp_codegen_initialize_runtime_metadata(&"null");
    Il2CppMethodInitialized_0754739c = '\x01';
  }
  if (token == (CustomLogic_CustomLogicToken_o *)0x0) {
    return "null";
  }
  obj = (token->fields).Value;
  if ((token->fields).Type == 0) {
    if (obj != (Il2CppObject *)0x0) {
      if ((obj->klass->_1).element_class != (TypeInfo_CustomLogic_CustomLogicSymbol->_1).element_class) {
        il2cpp_codegen_raise_invalid_cast_exception();
      }
      puVar2 = il2cpp_vm_Object_Unbox(obj);
      local_10 = *puVar2;
      local_20.klass = (System_Enum_c *)TypeInfo_CustomLogic_CustomLogicSymbol;
      local_20.monitor = (void *)0xffffffffffffffff;
      pSVar1 = System_Enum__ToString(&local_20,(MethodInfo *)0x0);
      return pSVar1;
    }
  }
  else if (obj != (Il2CppObject *)0x0) {
    pSVar1 = (System_String_o *)(*obj->klass->vtable[3].methodPtr)(obj,obj->klass->vtable[3].method);
    return pSVar1;
  }
  ThrowNullReferenceException();
}


