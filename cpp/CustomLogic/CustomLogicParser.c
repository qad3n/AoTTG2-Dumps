// Type: CustomLogic.CustomLogicParser
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicParser.cs
// Prior real C# source (older reference): Assets/Scripts/CustomLogic/CustomLogicParser.cs
// --------------------------------

// CustomLogic.CustomLogicParser$$get_Compiler
// il2cpp: CustomLogic_CustomLogicCompiler_o* CustomLogic_CustomLogicParser__get_Compiler (CustomLogic_CustomLogicParser_o* __this, const MethodInfo* method);
// 0x1805852b0

CustomLogic_CustomLogicCompiler_o*
CustomLogic_CustomLogicParser__get_Compiler(CustomLogic_CustomLogicParser_o* __this, MethodInfo* method)

{
  return (__this->fields)._Compiler_k__BackingField;
}


// CustomLogic.CustomLogicParser$$set_Compiler
// il2cpp: void CustomLogic_CustomLogicParser__set_Compiler (CustomLogic_CustomLogicParser_o* __this, CustomLogic_CustomLogicCompiler_o* value, const MethodInfo* method);
// 0x180ace2f0

void
CustomLogic_CustomLogicParser__set_Compiler(CustomLogic_CustomLogicParser_o* __this, CustomLogic_CustomLogicCompiler_o* value, MethodInfo* method)

{
  (__this->fields)._Compiler_k__BackingField = value;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._Compiler_k__BackingField,value);
  return;
}


// CustomLogic.CustomLogicParser$$.ctor
// il2cpp: void CustomLogic_CustomLogicParser___ctor (CustomLogic_CustomLogicParser_o* __this, System_Collections_Generic_List_CustomLogicToken__o* tokens, CustomLogic_CustomLogicCompiler_o* compiler, const MethodInfo* method);
// 0x1820e8400

void CustomLogic_CustomLogicParser___ctor
               (CustomLogic_CustomLogicParser_o *__this,
               System_Collections_Generic_List_CustomLogicToken__o *tokens,
               CustomLogic_CustomLogicCompiler_o *compiler,MethodInfo *method)

{
  System_Collections_Generic_List_CustomLogicToken__o *__this_00;
  
  if (Il2CppMethodInitialized_1843469c4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_CustomLogicToken_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_CustomLogicToken);
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_1843469c4 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_CustomLogicToken);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)__this_00,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_CustomLogicToken_ctor);
  (__this->fields)._tokens = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._tokens,__this_00);
  (__this->fields).Error = "";
  Il2CppCodeGenWriteBarrier(&(__this->fields).Error,"");
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  (__this->fields)._tokens = tokens;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._tokens,tokens);
  (__this->fields)._Compiler_k__BackingField = compiler;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._Compiler_k__BackingField,compiler);
  return;
}


// CustomLogic.CustomLogicParser$$GetLineNumberString
// il2cpp: System_String_o* CustomLogic_CustomLogicParser__GetLineNumberString (CustomLogic_CustomLogicParser_o* __this, int32_t line, const MethodInfo* method);
// 0x1820e5270

System_String_o *
CustomLogic_CustomLogicParser__GetLineNumberString
          (CustomLogic_CustomLogicParser_o *__this,int32_t line,MethodInfo *method)

{
  CustomLogic_CustomLogicCompiler_o *__this_00;
  System_String_o *pSVar1;
  int32_t local_res10 [6];
  
  local_res10[0] = line;
  if ((__this->fields)._Compiler_k__BackingField == (CustomLogic_CustomLogicCompiler_o *)0x0) {
    pSVar1 = System_Int32__ToString(local_res10,(MethodInfo *)0x0);
    return pSVar1;
  }
  __this_00 = (__this->fields)._Compiler_k__BackingField;
  if (__this_00 != (CustomLogic_CustomLogicCompiler_o *)0x0) {
    pSVar1 = CustomLogic_CustomLogicCompiler__FormatLineNumber(__this_00,line,(MethodInfo *)0x0);
    return pSVar1;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicParser$$GetStartAst
// il2cpp: CustomLogic_CustomLogicStartAst_o* CustomLogic_CustomLogicParser__GetStartAst (CustomLogic_CustomLogicParser_o* __this, const MethodInfo* method);
// 0x1820e52b0
// eh: try 0x1820e52f8..0x1820e5465 -> pad 0x1833197a0 (+1 call sites) catch Il2CppExceptionWrapper [managed catch: TypeInfo_System_Exception]
// asm: 98 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1820e5321: mov rbx, qword ptr [rsp + 0x30]
// asm:   0x1820e5326: test rbx, rbx
// asm:   0x1820e5329: je 0x1820e5458
// asm:   0x1820e532f: mov rax, qword ptr [rbx]
// asm:   0x1820e5332: mov rdx, qword ptr [rax + 0x190]
// asm:   0x1820e5339: mov rcx, rbx
// asm:   0x1820e533c: call qword ptr [rax + 0x188]  ; vtable slot 5
// asm:   0x1820e5342: mov rcx, qword ptr [rsp + 0x50]
// asm:   0x1820e5347: mov qword ptr [rcx + 0x18], rax
// asm:   0x1820e534b: add rcx, 0x18
// asm:   0x1820e534f: mov rdx, rax
// asm:   0x1820e5352: call 0x180416180  ; Il2CppCodeGenWriteBarrier()
// asm:   0x1820e5357: lea rcx, [rip + 0x20174ea]  ; TypeInfo_Settings_SettingsManager
// asm:   0x1820e535e: call 0x180416ea0  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x1820e5363: mov rcx, qword ptr [rax + 0xb8]
// asm:   0x1820e536a: cmp qword ptr [rcx + 0x28], 0
// asm:   0x1820e536f: jne 0x1820e5375
// asm:   0x1820e5371: xor edi, edi
// asm:   0x1820e5373: jmp 0x1820e53b5
// asm:   0x1820e5375: lea rcx, [rip + 0x20174cc]  ; TypeInfo_Settings_SettingsManager
// asm:   0x1820e537c: call 0x180416ea0  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x1820e5381: mov rcx, qword ptr [rax + 0xb8]
// asm:   0x1820e5388: mov rdi, qword ptr [rcx + 0x28]
// asm:   0x1820e538c: test rdi, rdi
// asm:   0x1820e538f: je 0x1820e5458
// asm:   0x1820e5395: mov rdi, qword ptr [rdi + 0x1a0]
// asm:   0x1820e539c: test rdi, rdi
// asm:   0x1820e539f: je 0x1820e5458
// asm:   0x1820e53a5: lea rcx, [rip + 0x1fb07bc]  ; MethodInfo_Settings_TypedSetting_bool_get_Value
// asm:   0x1820e53ac: call 0x180416ea0  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x1820e53b1: movzx edi, byte ptr [rdi + 0x19]
// asm:   0x1820e53b5: mov rax, qword ptr [rbx]
// asm:   0x1820e53b8: mov rdx, qword ptr [rax + 0x190]
// asm:   0x1820e53bf: mov rcx, rbx
// asm:   0x1820e53c2: call qword ptr [rax + 0x188]  ; vtable slot 5
// asm:   0x1820e53c8: mov rbx, rax
// asm:   0x1820e53cb: lea rcx, [rip + 0x1faf0c6]  ; "Custom logic parsing error: "
// asm:   0x1820e53d2: call 0x180416ea0  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x1820e53d7: mov rcx, rax
// asm:   0x1820e53da: xor r8d, r8d
// asm:   0x1820e53dd: mov rdx, rbx
// asm:   0x1820e53e0: call 0x181969e50  ; System_String__Concat()
// asm:   0x1820e53e5: mov rbx, rax
// asm:   0x1820e53e8: test edi, edi
// asm:   0x1820e53ea: setne dil
// asm:   0x1820e53ee: lea rcx, [rip + 0x20162db]  ; TypeInfo_ApplicationManagers_DebugConsole
// asm:   0x1820e53f5: call 0x180416ea0  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x1820e53fa: cmp dword ptr [rax + 0xe4], 0
// asm:   0x1820e5401: jne 0x1820e540b
// asm:   0x1820e5403: mov rcx, rax
// asm:   0x1820e5406: call 0x1804171c0  ; il2cpp_codegen_runtime_class_init()
// asm:   0x1820e540b: xor r8d, r8d
// asm:   0x1820e540e: movzx edx, dil
// asm:   0x1820e5412: mov rcx, rbx
// asm:   0x1820e5415: call 0x18234c0c0  ; ApplicationManagers_DebugConsole__LogCustomLogic()
// asm:   0x1820e541a: lea rcx, [rip + 0x200bf67]  ; TypeInfo_CustomLogic_CustomLogicStartAst
// asm:   0x1820e5421: call 0x180416ea0  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x1820e5426: mov rcx, rax
// asm:   0x1820e5429: call 0x1804170d0  ; il2cpp_runtime_helper_1804170d0()
// asm:   0x1820e542e: mov rbx, rax
// asm:   0x1820e5431: xor edx, edx
// asm:   0x1820e5433: mov rcx, rax
// asm:   0x1820e5436: call 0x181ed3eb0  ; CustomLogic_CustomLogicStartAst___ctor()
// asm:   0x1820e543b: test rbx, rbx
// asm:   0x1820e543e: je 0x1820e5458
// asm:   0x1820e5440: xor edx, edx
// asm:   0x1820e5442: mov rcx, rbx
// asm:   0x1820e5445: call 0x181ed3b40  ; CustomLogic_CustomLogicStartAst__AddEmptyMain()
// asm:   0x1820e5458: call 0x180417120  ; ThrowNullReferenceException()
// asm:   0x1833197a0: mov qword ptr [rsp + 0x10], rdx
// asm:   0x1833197a5: push rbx
// asm:   0x1833197a6: push rbp
// asm:   0x1833197a7: push rdi
// asm:   0x1833197a8: sub rsp, 0x20
// asm:   0x1833197ac: mov rbp, rdx
// asm:   0x1833197af: mov rdi, qword ptr [rbp + 0x28]
// asm:   0x1833197b3: mov rax, qword ptr [rdi]
// asm:   0x1833197b6: mov rbx, qword ptr [rax]
// asm:   0x1833197b9: lea rcx, [rip + 0xd5f798]  ; TypeInfo_System_Exception
// asm:   0x1833197c0: call 0x180416ea0  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x1833197c5: mov rcx, rax
// asm:   0x1833197c8: mov rdx, rbx
// asm:   0x1833197cb: call 0x180416950  ; il2cpp_codegen_class_is_assignable_from()
// asm:   0x1833197d0: test al, al
// asm:   0x1833197d2: mov rax, qword ptr [rdi]
// asm:   0x1833197d5: je 0x1833197e7
// asm:   0x1833197d7: mov qword ptr [rbp + 0x30], rax
// asm:   0x1833197db: movabs rax, 0
// asm:   0x1833197e5: jmp 0x1833197fc
// asm:   0x1833197e7: mov qword ptr [rbp + 0x20], rax
// asm:   0x1833197eb: lea rdx, [rip + 0xcc2796]
// asm:   0x1833197f2: lea rcx, [rbp + 0x20]
// asm:   0x1833197f6: call 0x1804ef7d0  ; _CxxThrowException()
// asm:   0x1833197fc: add rsp, 0x20
// asm:   0x183319800: pop rdi
// asm:   0x183319801: pop rbp
// asm:   0x183319802: pop rbx
// asm:   0x183319803: ret 

CustomLogic_CustomLogicStartAst_o *
CustomLogic_CustomLogicParser__GetStartAst(CustomLogic_CustomLogicParser_o *__this,MethodInfo *method)

{
  CustomLogic_CustomLogicStartAst_o *__this_00;
  
  if (Il2CppMethodInitialized_1843469c5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicStartAst);
    Il2CppMethodInitialized_1843469c5 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicStartAst);
  CustomLogic_CustomLogicStartAst___ctor(__this_00,(MethodInfo *)0x0);
  CustomLogic_CustomLogicParser__ParseAst
            (__this,0,(CustomLogic_CustomLogicBaseAst_o *)__this_00,(MethodInfo *)0x0);
  if (__this_00 != (CustomLogic_CustomLogicStartAst_o *)0x0) {
    CustomLogic_CustomLogicStartAst__AddEmptyMain(__this_00,(MethodInfo *)0x0);
    return __this_00;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicParser$$ParseExpression
// il2cpp: CustomLogic_CustomLogicBaseExpressionAst_o* CustomLogic_CustomLogicParser__ParseExpression (CustomLogic_CustomLogicParser_o* __this, CustomLogic_CustomLogicBaseExpressionAst_o* prev, int32_t startIndex, int32_t endIndex, const MethodInfo* method);
// 0x1820e7940
// asm: 11 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1820e7dc5: mov ebx, r15d
// asm:   0x1820e7dc8: mov eax, r15d
// asm:   0x1820e7dcb: nop dword ptr [rax + rax]
// asm:   0x1820e8043: mov ebx, r15d
// asm:   0x1820e8046: mov eax, r15d
// asm:   0x1820e8049: nop dword ptr [rax]
// asm:   0x1820e825c: mov edi, ebx
// asm:   0x1820e825e: mov eax, ebx
// asm:   0x1820e82ff: mov rdx, r15
// asm:   0x1820e8372: mov rax, r12
// asm:   0x1820e8375: jmp 0x1820e830a

CustomLogic_CustomLogicBaseExpressionAst_o *
CustomLogic_CustomLogicParser__ParseExpression
          (CustomLogic_CustomLogicParser_o *__this,CustomLogic_CustomLogicBaseExpressionAst_o *prev,
          int32_t startIndex,int32_t endIndex,MethodInfo *method)

{
  int32_t *piVar1;
  int iVar2;
  uint uVar3;
  System_Collections_Generic_List_CustomLogicToken__o *pSVar4;
  System_String_o *pSVar5;
  System_Collections_Generic_List_CustomLogicBaseAst__o *pSVar6;
  CustomLogic_CustomLogicBaseAst_array *pCVar7;
  Il2CppObject *obj;
  MethodInfo *pMVar8;
  int32_t iVar9;
  CustomLogic_CustomLogicToken_o *pCVar10;
  CustomLogic_CustomLogicToken_o *pCVar11;
  int *piVar12;
  CustomLogic_CustomLogicAssignmentExpressionAst_o *__this_00;
  CustomLogic_CustomLogicToken_o *pCVar13;
  CustomLogic_CustomLogicAssignmentExpressionAst_o *__this_01;
  CustomLogic_CustomLogicToken_o *pCVar14;
  CustomLogic_CustomLogicMethodCallExpressionAst_o *__this_02;
  System_Int32_array *pSVar15;
  CustomLogic_CustomLogicBaseExpressionAst_o *pCVar16;
  CustomLogic_CustomLogicFieldExpressionAst_o *__this_03;
  CustomLogic_CustomLogicClassInstantiateExpressionAst_o *__this_04;
  CustomLogic_CustomLogicVariableExpressionAst_o *__this_05;
  Il2CppObject *pIVar17;
  CustomLogic_CustomLogicToken_o **targetAddress;
  System_String_o *name;
  uint uVar18;
  int iVar19;
  
  if (Il2CppMethodInitialized_1843469c6 == '\0') {
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
    Il2CppMethodInitialized_1843469c6 = '\x01';
  }
  pSVar4 = (__this->fields)._tokens;
  if (pSVar4 == (System_Collections_Generic_List_CustomLogicToken__o *)0x0) goto label_1820e8377;
  pCVar10 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                      ((System_Collections_Generic_List_object__o *)pSVar4,startIndex,
                       (MethodInfo_92B830 *)
                       MethodInfo_System_Collections_Generic_List_CustomLogicToken_get_Item);
  if (endIndex < startIndex) {
    return prev;
  }
  pSVar4 = (__this->fields)._tokens;
  if (pSVar4 == (System_Collections_Generic_List_CustomLogicToken__o *)0x0) goto label_1820e8377;
  pCVar13 = (CustomLogic_CustomLogicToken_o *)0x0;
  pCVar11 = pCVar13;
  if (startIndex < (pSVar4->fields)._size + -1) {
    pCVar11 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                        ((System_Collections_Generic_List_object__o *)(__this->fields)._tokens,startIndex + 1,
                         (MethodInfo_92B830 *)
                         MethodInfo_System_Collections_Generic_List_CustomLogicToken_get_Item);
  }
  iVar9 = CustomLogic_CustomLogicParser__FindLowestBinop(__this,startIndex,endIndex,(MethodInfo *)0x0);
  if (iVar9 < 1) {
    if (pCVar10 == (CustomLogic_CustomLogicToken_o *)0x0) goto label_1820e8377;
    if ((pCVar10->fields).Type == 0) {
      pIVar17 = (pCVar10->fields).Value;
      if (pIVar17 == (Il2CppObject *)0x0) goto label_1820e8377;
      if ((pIVar17->klass->_1).element_class != *(Il2CppClass **)(g_data_184354e08 + 0x40)) {
        il2cpp_codegen_raise_invalid_cast_exception(pIVar17,g_data_184354e08);
      }
      piVar12 = il2cpp_object_unbox(pIVar17);
      if (*piVar12 == 0xb) {
        iVar9 = CustomLogic_CustomLogicParser__FindClosingParen(__this,startIndex,(MethodInfo *)0x0);
        pCVar16 = CustomLogic_CustomLogicParser__ParseExpression
                            (__this,(CustomLogic_CustomLogicBaseExpressionAst_o *)0x0,startIndex + 1,
                             iVar9 + -1,(MethodInfo *)0x0);
        pCVar16 = CustomLogic_CustomLogicParser__ParseExpression
                            (__this,pCVar16,iVar9 + 1,endIndex,(MethodInfo *)0x0);
        return pCVar16;
      }
      if (pCVar10 == (CustomLogic_CustomLogicToken_o *)0x0) goto label_1820e8377;
    }
    if ((pCVar10->fields).Type == 1) {
      pIVar17 = (pCVar10->fields).Value;
      iVar9 = (pCVar10->fields).Line;
      __this_05 = (CustomLogic_CustomLogicVariableExpressionAst_o *)
                  il2cpp_codegen_object_new
                            ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPrimitiveExpressionAst);
      CustomLogic_CustomLogicPrimitiveExpressionAst___ctor
                ((CustomLogic_CustomLogicPrimitiveExpressionAst_o *)__this_05,pIVar17,iVar9,(MethodInfo *)0x0)
      ;
    }
    else {
      if ((pCVar10->fields).Type == 0) {
        pIVar17 = (pCVar10->fields).Value;
        if (pIVar17 == (Il2CppObject *)0x0) goto label_1820e8377;
        if ((pIVar17->klass->_1).element_class != *(Il2CppClass **)(g_data_184354e08 + 0x40)) {
          il2cpp_codegen_raise_invalid_cast_exception(pIVar17,g_data_184354e08);
        }
        piVar12 = il2cpp_object_unbox(pIVar17);
        if (*piVar12 == 0x13) {
          if (pCVar11 == (CustomLogic_CustomLogicToken_o *)0x0) goto label_1820e8377;
          iVar9 = (pCVar11->fields).Line;
          __this_00 = (CustomLogic_CustomLogicAssignmentExpressionAst_o *)
                      il2cpp_codegen_object_new
                                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicNotExpressionAst);
          CustomLogic_CustomLogicNotExpressionAst___ctor
                    ((CustomLogic_CustomLogicNotExpressionAst_o *)__this_00,iVar9,(MethodInfo *)0x0);
          __this_01 = __this_00;
label_1820e7b60:
          pCVar13 = (CustomLogic_CustomLogicToken_o *)
                    CustomLogic_CustomLogicParser__ParseExpression
                              (__this,(CustomLogic_CustomLogicBaseExpressionAst_o *)__this_00,startIndex + 1,
                               endIndex,(MethodInfo *)0x0);
          if (__this_01 == (CustomLogic_CustomLogicAssignmentExpressionAst_o *)0x0) goto label_1820e8377;
          (__this_01->fields).Left = (CustomLogic_CustomLogicBaseExpressionAst_o *)pCVar13;
          targetAddress = (CustomLogic_CustomLogicToken_o **)&(__this_01->fields).Left;
          goto label_1820e8302;
        }
        if ((pCVar10->fields).Type == 0) {
          pIVar17 = (pCVar10->fields).Value;
          if (pIVar17 == (Il2CppObject *)0x0) goto label_1820e8377;
          if ((pIVar17->klass->_1).element_class != *(Il2CppClass **)(g_data_184354e08 + 0x40)) {
            il2cpp_codegen_raise_invalid_cast_exception(pIVar17,g_data_184354e08);
          }
          piVar12 = il2cpp_object_unbox(pIVar17);
          if (*piVar12 == 0x22) {
label_1820e7c42:
            iVar9 = (pCVar10->fields).Line;
            __this_01 = (CustomLogic_CustomLogicAssignmentExpressionAst_o *)
                        il2cpp_codegen_object_new
                                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUnaryExpressionAst);
            CustomLogic_CustomLogicUnaryExpressionAst___ctor
                      ((CustomLogic_CustomLogicUnaryExpressionAst_o *)__this_01,pCVar10,iVar9,
                       (MethodInfo *)0x0);
            __this_00 = (CustomLogic_CustomLogicAssignmentExpressionAst_o *)0x0;
            goto label_1820e7b60;
          }
          if ((pCVar10->fields).Type == 0) {
            pIVar17 = (pCVar10->fields).Value;
            if (pIVar17 == (Il2CppObject *)0x0) goto label_1820e8377;
            if ((pIVar17->klass->_1).element_class != *(Il2CppClass **)(g_data_184354e08 + 0x40)) {
              il2cpp_codegen_raise_invalid_cast_exception(pIVar17,g_data_184354e08);
            }
            piVar12 = il2cpp_object_unbox(pIVar17);
            if (*piVar12 == 0x21) goto label_1820e7c42;
            if ((pCVar10->fields).Type == 0) {
              pIVar17 = (pCVar10->fields).Value;
              if (pIVar17 == (Il2CppObject *)0x0) goto label_1820e8377;
              if ((pIVar17->klass->_1).element_class != *(Il2CppClass **)(g_data_184354e08 + 0x40)) {
                il2cpp_codegen_raise_invalid_cast_exception(pIVar17,g_data_184354e08);
              }
              piVar12 = il2cpp_object_unbox(pIVar17);
              if (*piVar12 == 0x29) {
                CustomLogic_CustomLogicParser__AssertTokenType(__this,pCVar11,2,(MethodInfo *)0x0);
                pSVar4 = (__this->fields)._tokens;
                if (pSVar4 == (System_Collections_Generic_List_CustomLogicToken__o *)0x0) goto label_1820e8377;
                pCVar14 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                                    ((System_Collections_Generic_List_object__o *)pSVar4,startIndex + 2,
                                     (MethodInfo_92B830 *)
                                     MethodInfo_System_Collections_Generic_List_CustomLogicToken_get_Item);
                if ((pCVar14 != (CustomLogic_CustomLogicToken_o *)0x0) && ((pCVar14->fields).Type == 0)) {
                  pIVar17 = (pCVar14->fields).Value;
                  if (pIVar17 == (Il2CppObject *)0x0) goto label_1820e8377;
                  if ((pIVar17->klass->_1).element_class != *(Il2CppClass **)(g_data_184354e08 + 0x40)) {
                    il2cpp_codegen_raise_invalid_cast_exception(pIVar17,g_data_184354e08);
                  }
                  piVar12 = il2cpp_object_unbox(pIVar17);
                  if (*piVar12 == 0xb) {
                    if (pCVar11 != (CustomLogic_CustomLogicToken_o *)0x0) {
                      pSVar5 = (System_String_o *)(pCVar11->fields).Value;
                      iVar9 = (pCVar10->fields).Line;
                      __this_02 = il2cpp_codegen_object_new
                                            ((Il2CppClass *)
                                             TypeInfo_CustomLogic_CustomLogicMethodCallExpressionAst);
                      name = (System_String_o *)0x0;
                      if (pSVar5 != (System_String_o *)0x0) {
                        if ((Il2CppClass *)pSVar5->klass == g_data_184354e50) {
                          name = pSVar5;
                        }
                        if (name == (System_String_o *)0x0) {
                          il2cpp_codegen_raise_invalid_cast_exception(pSVar5,g_data_184354e50);
                        }
                      }
                      CustomLogic_CustomLogicMethodCallExpressionAst___ctor
                                (__this_02,name,iVar9,(MethodInfo *)0x0);
                      if (__this_02 != (CustomLogic_CustomLogicMethodCallExpressionAst_o *)0x0) {
                        (__this_02->fields).Left = prev;
                        Il2CppCodeGenWriteBarrier(&(__this_02->fields).Left,prev);
                        iVar9 = CustomLogic_CustomLogicParser__FindClosingParen
                                          (__this,startIndex + 2,(MethodInfo *)0x0);
                        pSVar15 = CustomLogic_CustomLogicParser__FindCommas
                                            (__this,startIndex + 3,iVar9,(MethodInfo *)0x0);
                        if (pSVar15 != (System_Int32_array *)0x0) {
                          iVar19 = startIndex + 3;
                          uVar18 = 0;
                          if (pSVar15->max_length != 0) {
                            while ((int)uVar18 < (int)pSVar15->max_length) {
                              if ((uint)pSVar15->max_length <= uVar18) goto label_1820e83f5;
                              iVar2 = pSVar15->m_Items[(int)uVar18];
                              pCVar16 = CustomLogic_CustomLogicParser__ParseExpression
                                                  (__this,(CustomLogic_CustomLogicBaseExpressionAst_o *)0x0,
                                                   iVar19,iVar2 + -1,(MethodInfo *)0x0);
                              pMVar8 = MethodInfo_System_Collections_Generic_List_CustomLogicBaseAst_Add;
                              pSVar6 = (__this_02->fields).Parameters;
                              if (pSVar6 == (System_Collections_Generic_List_CustomLogicBaseAst__o *)0x0)
                              goto label_1820e8377;
                              piVar1 = &(pSVar6->fields)._version;
                              *piVar1 = *piVar1 + 1;
                              pCVar7 = (pSVar6->fields)._items;
                              if (pCVar7 == (CustomLogic_CustomLogicBaseAst_array *)0x0) goto label_1820e8377;
                              uVar3 = (pSVar6->fields)._size;
                              if (uVar3 < (uint)pCVar7->max_length) {
                                (pSVar6->fields)._size = uVar3 + 1;
                                if ((uint)pCVar7->max_length <= uVar3) goto label_1820e83f5;
                                pCVar7->m_Items[(int)uVar3] = (CustomLogic_CustomLogicBaseAst_o *)pCVar16;
                                Il2CppCodeGenWriteBarrier(pCVar7->m_Items + (int)uVar3,pCVar16);
                                uVar18 = uVar18 + 1;
                                iVar19 = iVar2 + 1;
                              }
                              else {
                                System_Collections_Generic_List_object___AddWithResize
                                          ((System_Collections_Generic_List_object__o *)pSVar6,
                                           (Il2CppObject *)pCVar16,
                                           (MethodInfo_93DD50 *)pMVar8->klass->rgctx_data[0xe].method);
                                uVar18 = uVar18 + 1;
                                iVar19 = iVar2 + 1;
                              }
                            }
                          }
                          pCVar16 = CustomLogic_CustomLogicParser__ParseExpression
                                              (__this,(CustomLogic_CustomLogicBaseExpressionAst_o *)0x0,iVar19
                                               ,iVar9 + -1,(MethodInfo *)0x0);
                          if (pCVar16 != (CustomLogic_CustomLogicBaseExpressionAst_o *)0x0) {
                            pSVar6 = (__this_02->fields).Parameters;
                            if (pSVar6 == (System_Collections_Generic_List_CustomLogicBaseAst__o *)0x0)
                            goto label_1820e8377;
                            il2cpp_runtime_helper_180012890(pSVar6,pCVar16,
                                          MethodInfo_System_Collections_Generic_List_CustomLogicBaseAst_Add);
                          }
                          pCVar16 = CustomLogic_CustomLogicParser__ParseExpression
                                              (__this,(CustomLogic_CustomLogicBaseExpressionAst_o *)__this_02,
                                               iVar9 + 1,endIndex,(MethodInfo *)0x0);
                          return pCVar16;
                        }
                      }
                    }
                    goto label_1820e8377;
                  }
                }
                if (pCVar11 != (CustomLogic_CustomLogicToken_o *)0x0) {
                  pCVar11 = (CustomLogic_CustomLogicToken_o *)(pCVar11->fields).Value;
                  iVar9 = (pCVar10->fields).Line;
                  __this_03 = il2cpp_codegen_object_new
                                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicFieldExpressionAst);
                  if (pCVar11 != (CustomLogic_CustomLogicToken_o *)0x0) {
                    if ((Il2CppClass *)pCVar11->klass == g_data_184354e50) {
                      pCVar13 = pCVar11;
                    }
                    if (pCVar13 == (CustomLogic_CustomLogicToken_o *)0x0) {
                      il2cpp_codegen_raise_invalid_cast_exception(pCVar11,g_data_184354e50);
                    }
                  }
                  CustomLogic_CustomLogicFieldExpressionAst___ctor
                            (__this_03,(System_String_o *)pCVar13,iVar9,(MethodInfo *)0x0);
                  if (__this_03 != (CustomLogic_CustomLogicFieldExpressionAst_o *)0x0) {
                    (__this_03->fields).Left = prev;
                    Il2CppCodeGenWriteBarrier(&(__this_03->fields).Left,prev);
                    pCVar16 = CustomLogic_CustomLogicParser__ParseExpression
                                        (__this,(CustomLogic_CustomLogicBaseExpressionAst_o *)__this_03,
                                         startIndex + 2,endIndex,(MethodInfo *)0x0);
                    return pCVar16;
                  }
                }
                goto label_1820e8377;
              }
            }
          }
        }
      }
      if ((pCVar10->fields).Type != 2) {
        return (CustomLogic_CustomLogicBaseExpressionAst_o *)0x0;
      }
      if ((pCVar11 == (CustomLogic_CustomLogicToken_o *)0x0) || ((pCVar11->fields).Type != 0)) {
        pCVar11 = (CustomLogic_CustomLogicToken_o *)(pCVar10->fields).Value;
        iVar9 = (pCVar10->fields).Line;
      }
      else {
        pIVar17 = (pCVar11->fields).Value;
        if (pIVar17 == (Il2CppObject *)0x0) {
label_1820e8377:
          ThrowNullReferenceException();
        }
        if ((pIVar17->klass->_1).element_class != *(Il2CppClass **)(g_data_184354e08 + 0x40)) {
          il2cpp_codegen_raise_invalid_cast_exception(pIVar17,g_data_184354e08);
        }
        piVar12 = il2cpp_object_unbox(pIVar17);
        pCVar11 = (CustomLogic_CustomLogicToken_o *)(pCVar10->fields).Value;
        iVar9 = (pCVar10->fields).Line;
        if (*piVar12 == 0xb) {
          __this_04 = il2cpp_codegen_object_new
                                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicClassInstantiateExpressionAst)
          ;
          pCVar10 = (CustomLogic_CustomLogicToken_o *)0x0;
          if (pCVar11 != (CustomLogic_CustomLogicToken_o *)0x0) {
            if ((Il2CppClass *)pCVar11->klass == g_data_184354e50) {
              pCVar10 = pCVar11;
            }
            if (pCVar10 == (CustomLogic_CustomLogicToken_o *)0x0) {
              il2cpp_codegen_raise_invalid_cast_exception(pCVar11,g_data_184354e50);
            }
          }
          CustomLogic_CustomLogicClassInstantiateExpressionAst___ctor
                    (__this_04,(System_String_o *)pCVar10,iVar9,(MethodInfo *)0x0);
          if (__this_04 != (CustomLogic_CustomLogicClassInstantiateExpressionAst_o *)0x0) {
            (__this_04->fields).Left = prev;
            Il2CppCodeGenWriteBarrier(&(__this_04->fields).Left,prev);
            iVar9 = CustomLogic_CustomLogicParser__FindClosingParen(__this,startIndex + 1,(MethodInfo *)0x0);
            pSVar15 = CustomLogic_CustomLogicParser__FindCommas(__this,startIndex + 2,iVar9,(MethodInfo *)0x0)
            ;
            if (pSVar15 != (System_Int32_array *)0x0) {
              iVar19 = startIndex + 2;
              uVar18 = 0;
              if (pSVar15->max_length != 0) {
                while ((int)uVar18 < (int)pSVar15->max_length) {
                  if ((uint)pSVar15->max_length <= uVar18) {
label_1820e83f5:
                    ThrowIndexOutOfRangeException();
                  }
                  iVar2 = pSVar15->m_Items[(int)uVar18];
                  pCVar16 = CustomLogic_CustomLogicParser__ParseExpression
                                      (__this,(CustomLogic_CustomLogicBaseExpressionAst_o *)0x0,iVar19,
                                       iVar2 + -1,(MethodInfo *)0x0);
                  pMVar8 = MethodInfo_System_Collections_Generic_List_CustomLogicBaseAst_Add;
                  pSVar6 = (__this_04->fields).Parameters;
                  if (pSVar6 == (System_Collections_Generic_List_CustomLogicBaseAst__o *)0x0)
                  goto label_1820e8377;
                  piVar1 = &(pSVar6->fields)._version;
                  *piVar1 = *piVar1 + 1;
                  pCVar7 = (pSVar6->fields)._items;
                  if (pCVar7 == (CustomLogic_CustomLogicBaseAst_array *)0x0) goto label_1820e8377;
                  uVar3 = (pSVar6->fields)._size;
                  if (uVar3 < (uint)pCVar7->max_length) {
                    (pSVar6->fields)._size = uVar3 + 1;
                    if ((uint)pCVar7->max_length <= uVar3) goto label_1820e83f5;
                    pCVar7->m_Items[(int)uVar3] = (CustomLogic_CustomLogicBaseAst_o *)pCVar16;
                    Il2CppCodeGenWriteBarrier(pCVar7->m_Items + (int)uVar3,pCVar16);
                    uVar18 = uVar18 + 1;
                    iVar19 = iVar2 + 1;
                  }
                  else {
                    System_Collections_Generic_List_object___AddWithResize
                              ((System_Collections_Generic_List_object__o *)pSVar6,(Il2CppObject *)pCVar16,
                               (MethodInfo_93DD50 *)pMVar8->klass->rgctx_data[0xe].method);
                    uVar18 = uVar18 + 1;
                    iVar19 = iVar2 + 1;
                  }
                }
              }
              pCVar16 = CustomLogic_CustomLogicParser__ParseExpression
                                  (__this,(CustomLogic_CustomLogicBaseExpressionAst_o *)0x0,iVar19,iVar9 + -1,
                                   (MethodInfo *)0x0);
              if (pCVar16 != (CustomLogic_CustomLogicBaseExpressionAst_o *)0x0) {
                pSVar6 = (__this_04->fields).Parameters;
                if (pSVar6 == (System_Collections_Generic_List_CustomLogicBaseAst__o *)0x0)
                goto label_1820e8377;
                il2cpp_runtime_helper_180012890(pSVar6,pCVar16,MethodInfo_System_Collections_Generic_List_CustomLogicBaseAst_Add
                             );
              }
              pCVar16 = CustomLogic_CustomLogicParser__ParseExpression
                                  (__this,(CustomLogic_CustomLogicBaseExpressionAst_o *)__this_04,iVar9 + 1,
                                   endIndex,(MethodInfo *)0x0);
              return pCVar16;
            }
          }
          goto label_1820e8377;
        }
      }
      __this_05 = il2cpp_codegen_object_new
                            ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVariableExpressionAst);
      if (pCVar11 != (CustomLogic_CustomLogicToken_o *)0x0) {
        if ((Il2CppClass *)pCVar11->klass == g_data_184354e50) {
          pCVar13 = pCVar11;
        }
        if (pCVar13 == (CustomLogic_CustomLogicToken_o *)0x0) {
          il2cpp_codegen_raise_invalid_cast_exception(pCVar11,g_data_184354e50);
        }
      }
      CustomLogic_CustomLogicVariableExpressionAst___ctor
                (__this_05,(System_String_o *)pCVar13,iVar9,(MethodInfo *)0x0);
    }
    __this_01 = (CustomLogic_CustomLogicAssignmentExpressionAst_o *)
                CustomLogic_CustomLogicParser__ParseExpression
                          (__this,(CustomLogic_CustomLogicBaseExpressionAst_o *)__this_05,startIndex + 1,
                           endIndex,(MethodInfo *)0x0);
  }
  else {
    pSVar4 = (__this->fields)._tokens;
    if (pSVar4 == (System_Collections_Generic_List_CustomLogicToken__o *)0x0) goto label_1820e8377;
    pCVar11 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                        ((System_Collections_Generic_List_object__o *)pSVar4,iVar9,
                         (MethodInfo_92B830 *)
                         MethodInfo_System_Collections_Generic_List_CustomLogicToken_get_Item);
    uVar18 = 0;
    pCVar16 = CustomLogic_CustomLogicParser__ParseExpression
                        (__this,(CustomLogic_CustomLogicBaseExpressionAst_o *)0x0,startIndex,iVar9 + -1,
                         (MethodInfo *)0x0);
    pCVar13 = (CustomLogic_CustomLogicToken_o *)
              CustomLogic_CustomLogicParser__ParseExpression
                        (__this,(CustomLogic_CustomLogicBaseExpressionAst_o *)0x0,iVar9 + 1,endIndex,
                         (MethodInfo *)0x0);
    pIVar17 = SZArrayNew(TypeInfo_int_array,5);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_1a54600
              ((System_Array_o *)pIVar17,
               FieldRva_PrivateImplementationDetails_A96D128D7C4FCB36E9F24CD74A9A916557FDB0792B43C708719409C6DE503E81
               ,(MethodInfo *)0x0);
    if (pIVar17 == (Il2CppObject *)0x0) goto label_1820e8377;
    for (; (int)uVar18 < *(int *)&pIVar17[1].monitor; uVar18 = uVar18 + 1) {
      if (*(uint *)&pIVar17[1].monitor <= uVar18) goto label_1820e83f5;
      if ((pCVar11 != (CustomLogic_CustomLogicToken_o *)0x0) && ((pCVar11->fields).Type == 0)) {
        obj = (pCVar11->fields).Value;
        if (obj == (Il2CppObject *)0x0) goto label_1820e8377;
        if ((obj->klass->_1).element_class != *(Il2CppClass **)(g_data_184354e08 + 0x40)) {
          il2cpp_codegen_raise_invalid_cast_exception(obj,g_data_184354e08);
        }
        iVar19 = *(int *)((longlong)&pIVar17[2].klass + (longlong)(int)uVar18 * 4);
        piVar12 = il2cpp_object_unbox(obj);
        if (*piVar12 == iVar19) {
          if (pCVar10 == (CustomLogic_CustomLogicToken_o *)0x0) goto label_1820e8377;
          iVar9 = (pCVar10->fields).Line;
          __this_01 = il2cpp_codegen_object_new
                                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAssignmentExpressionAst);
          CustomLogic_CustomLogicAssignmentExpressionAst___ctor
                    (__this_01,pCVar16,pCVar11,iVar9,(MethodInfo *)0x0);
          if (__this_01 == (CustomLogic_CustomLogicAssignmentExpressionAst_o *)0x0) goto label_1820e8377;
          (__this_01->fields).Right = (CustomLogic_CustomLogicBaseExpressionAst_o *)pCVar13;
          targetAddress = (CustomLogic_CustomLogicToken_o **)&(__this_01->fields).Right;
          goto label_1820e8302;
        }
      }
    }
    if (pCVar11 == (CustomLogic_CustomLogicToken_o *)0x0) goto label_1820e8377;
    iVar9 = (pCVar11->fields).Line;
    __this_01 = (CustomLogic_CustomLogicAssignmentExpressionAst_o *)
                il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicBinopExpressionAst);
    CustomLogic_CustomLogicBinopExpressionAst___ctor
              ((CustomLogic_CustomLogicBinopExpressionAst_o *)__this_01,pCVar11,iVar9,(MethodInfo *)0x0);
    if (__this_01 == (CustomLogic_CustomLogicAssignmentExpressionAst_o *)0x0) goto label_1820e8377;
    (__this_01->fields).Left = pCVar16;
    Il2CppCodeGenWriteBarrier(&(__this_01->fields).Left,pCVar16);
    targetAddress = &(__this_01->fields).Operator;
    (__this_01->fields).Operator = pCVar13;
label_1820e8302:
    Il2CppCodeGenWriteBarrier(targetAddress,pCVar13);
  }
  return (CustomLogic_CustomLogicBaseExpressionAst_o *)__this_01;
}


// CustomLogic.CustomLogicParser$$ParseExpressionAst
// il2cpp: System_Object_array* CustomLogic_CustomLogicParser__ParseExpressionAst (CustomLogic_CustomLogicParser_o* __this, int32_t startIndex, const MethodInfo* method);
// 0x1820e77f0

System_Object_array *
CustomLogic_CustomLogicParser__ParseExpressionAst
          (CustomLogic_CustomLogicParser_o *__this,int32_t startIndex,MethodInfo *method)

{
  int32_t iVar1;
  System_Object_array *pSVar2;
  Il2CppObject *pIVar3;
  Il2CppObject *pIVar4;
  CustomLogic_CustomLogicBaseExpressionAst_o *obj;
  int local_res10 [2];
  
  if (Il2CppMethodInitialized_1843469c7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    Il2CppMethodInitialized_1843469c7 = '\x01';
  }
  iVar1 = CustomLogic_CustomLogicParser__FindSemicolon(__this,startIndex,(MethodInfo *)0x0);
  pSVar2 = (System_Object_array *)SZArrayNew(TypeInfo_object_array,2);
  local_res10[0] = iVar1 + 1;
  pIVar3 = il2cpp_value_box(g_data_184354e08,local_res10);
  if (pSVar2 == (System_Object_array *)0x0) {
    ThrowNullReferenceException();
  }
  if (pIVar3 != (Il2CppObject *)0x0) {
    pIVar4 = il2cpp_vm_Object_IsInst(pIVar3,(((pSVar2->obj).klass)->_1).element_class);
    if (pIVar4 == (Il2CppObject *)0x0) {
      pIVar3 = il2cpp_codegen_get_array_type_mismatch_exception();
      il2cpp_codegen_raise_exception(pIVar3,(MethodInfo *)0x0);
    }
  }
  if ((int)pSVar2->max_length != 0) {
    pSVar2->m_Items[0] = pIVar3;
    Il2CppCodeGenWriteBarrier(pSVar2->m_Items,pIVar3);
    obj = CustomLogic_CustomLogicParser__ParseExpression
                    (__this,(CustomLogic_CustomLogicBaseExpressionAst_o *)0x0,startIndex,iVar1 + -1,
                     (MethodInfo *)0x0);
    if (obj != (CustomLogic_CustomLogicBaseExpressionAst_o *)0x0) {
      pIVar3 = il2cpp_vm_Object_IsInst((Il2CppObject *)obj,(((pSVar2->obj).klass)->_1).element_class);
      if (pIVar3 == (Il2CppObject *)0x0) {
        pIVar3 = il2cpp_codegen_get_array_type_mismatch_exception();
        il2cpp_codegen_raise_exception(pIVar3,(MethodInfo *)0x0);
      }
    }
    if (1 < (uint)pSVar2->max_length) {
      pSVar2->m_Items[1] = (Il2CppObject *)obj;
      Il2CppCodeGenWriteBarrier(pSVar2->m_Items + 1,obj);
      return pSVar2;
    }
  }
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicParser$$ParseAst
// il2cpp: int32_t CustomLogic_CustomLogicParser__ParseAst (CustomLogic_CustomLogicParser_o* __this, int32_t startIndex, CustomLogic_CustomLogicBaseAst_o* prev, const MethodInfo* method);
// 0x1820e57a0
// asm: 22 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1820e5e1f: mov r14, r12
// asm:   0x1820e5e22: jmp 0x1820e5e57
// asm:   0x1820e6147: jmp 0x1820e6083
// asm:   0x1820e6210: mov ebx, esi
// asm:   0x1820e6212: jmp 0x1820e6274
// asm:   0x1820e6272: mov esi, ebx
// asm:   0x1820e63a6: mov rcx, r12
// asm:   0x1820e63a9: jmp 0x1820e63df
// asm:   0x1820e6491: mov r9, r12
// asm:   0x1820e6494: jmp 0x1820e64c9
// asm:   0x1820e65b0: mov r13, r12
// asm:   0x1820e65b3: jmp 0x1820e6416
// asm:   0x1820e667f: jmp 0x1820e6189
// asm:   0x1820e6873: jmp 0x1820e67b7
// asm:   0x1820e6c98: xor r9d, r9d
// asm:   0x1820e6c9b: mov r8, r15
// asm:   0x1820e6c9e: mov edx, esi
// asm:   0x1820e6ca0: mov rcx, rbp
// asm:   0x1820e6ca3: call 0x1820e57a0  ; CustomLogic_CustomLogicParser__ParseAst()
// asm:   0x1820e6ca8: jmp 0x1820e618c
// asm:   0x1820e6cad: mov eax, esi
// asm:   0x1820e6caf: jmp 0x1820e618c

int32_t CustomLogic_CustomLogicParser__ParseAst
                  (CustomLogic_CustomLogicParser_o *__this,int32_t startIndex,
                  CustomLogic_CustomLogicBaseAst_o *prev,MethodInfo *method)

{
  byte bVar1;
  uint uVar2;
  System_Collections_Generic_List_CustomLogicToken__o *pSVar3;
  Il2CppObject *pIVar4;
  System_Collections_Generic_HashSet_int__o *pSVar5;
  System_String_o *pSVar6;
  CustomLogic_CustomLogicDecorator_array *pCVar7;
  System_Collections_Generic_List_string__o *pSVar8;
  System_Collections_Generic_List_CustomLogicDecorator__o *__this_00;
  CustomLogic_CustomLogicBaseAst_c *__this_01;
  MethodInfo *pMVar9;
  bool bVar10;
  int32_t iVar11;
  int iVar12;
  uint32_t value;
  int32_t iVar13;
  CustomLogic_CustomLogicToken_o *pCVar14;
  CustomLogic_CustomLogicToken_o *pCVar15;
  int *piVar16;
  int32_t *piVar17;
  CustomLogic_CustomLogicForBlockAst_o *__this_02;
  CustomLogic_CustomLogicToken_o *pCVar18;
  CustomLogic_CustomLogicVariableExpressionAst_o *__this_03;
  CustomLogic_CustomLogicBaseExpressionAst_o *pCVar19;
  CustomLogic_CustomLogicReturnExpressionAst_o *__this_04;
  CustomLogic_CustomLogicWaitExpressionAst_o *__this_05;
  CustomLogic_CustomLogicContinueExpressionAst_o *__this_06;
  CustomLogic_CustomLogicConditionalBlockAst_o *__this_07;
  System_Object_array *pSVar20;
  System_Collections_Generic_List_CustomLogicDecorator__o *__this_08;
  CustomLogic_CustomLogicMethodDefinitionAst_o *__this_09;
  System_String_o *pSVar21;
  CustomLogic_CustomLogicAssignmentExpressionAst_o *__this_10;
  CustomLogic_CustomLogicClassDefinitionAst_o *__this_11;
  CustomLogic_CustomLogicToken_o *token;
  Il2CppObject *pIVar22;
  System_Nullable_CustomLogicSourceType__Fields local_48;
  System_Nullable_CustomLogicSourceType__Fields local_40;
  
  if (Il2CppMethodInitialized_1843469c8 == '\0') {
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
    Il2CppMethodInitialized_1843469c8 = '\x01';
  }
  pSVar3 = (__this->fields)._tokens;
  pCVar18 = (CustomLogic_CustomLogicToken_o *)0x0;
  local_48.hasValue = false;
  local_48._1_3_ = 0;
  local_48.value = 0;
  if (pSVar3 == (System_Collections_Generic_List_CustomLogicToken__o *)0x0) goto label_1820e6dd1;
  if ((pSVar3->fields)._size <= startIndex) {
    return startIndex;
  }
  pCVar14 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                      ((System_Collections_Generic_List_object__o *)pSVar3,startIndex,
                       (MethodInfo_92B830 *)
                       MethodInfo_System_Collections_Generic_List_CustomLogicToken_get_Item);
  pSVar3 = (__this->fields)._tokens;
  if (pSVar3 == (System_Collections_Generic_List_CustomLogicToken__o *)0x0) goto label_1820e6dd1;
  pCVar15 = pCVar18;
  if (startIndex < (pSVar3->fields)._size + -1) {
    pCVar15 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                        ((System_Collections_Generic_List_object__o *)(__this->fields)._tokens,startIndex + 1,
                         (MethodInfo_92B830 *)
                         MethodInfo_System_Collections_Generic_List_CustomLogicToken_get_Item);
  }
  if (prev == (CustomLogic_CustomLogicBaseAst_o *)0x0) goto label_1820e6dd1;
  if ((prev->fields).Type == 0) {
    if ((TypeInfo_CustomLogic_CustomLogicSymbols->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicSymbols);
    }
    pSVar5 = TypeInfo_CustomLogic_CustomLogicSymbols->static_fields->ClassSymbols;
    if (Il2CppMethodInitialized_1843469cf == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_int_Contains);
      Il2CppMethodInitialized_1843469cf = '\x01';
    }
    pMVar9 = MethodInfo_System_Collections_Generic_HashSet_int_Contains;
    if ((pCVar14 == (CustomLogic_CustomLogicToken_o *)0x0) || ((pCVar14->fields).Type != 0)) {
label_1820e6e70:
      CustomLogic_CustomLogicParser__AssertFalse(__this,pCVar14,(MethodInfo *)0x0);
    }
    if ((pSVar5 == (System_Collections_Generic_HashSet_int__o *)0x0) ||
       (pIVar4 = (pCVar14->fields).Value, pIVar4 == (Il2CppObject *)0x0)) goto label_1820e6dd1;
    if ((pIVar4->klass->_1).element_class != *(Il2CppClass **)(g_data_184354e08 + 0x40)) {
      il2cpp_codegen_raise_invalid_cast_exception(pIVar4,g_data_184354e08);
    }
    piVar17 = il2cpp_object_unbox(pIVar4);
    bVar10 = System_Collections_Generic_HashSet_Int32Enum___Contains
                       ((System_Collections_Generic_HashSet_T__o *)pSVar5,*piVar17,
                        (MethodInfo_1759C90 *)pMVar9);
    if (!bVar10) goto label_1820e6e70;
    iVar13 = (pCVar14->fields).Line;
    __this_11 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicClassDefinitionAst);
    CustomLogic_CustomLogicClassDefinitionAst___ctor(__this_11,pCVar14,iVar13,(MethodInfo *)0x0);
    if (((__this->fields)._Compiler_k__BackingField != (CustomLogic_CustomLogicCompiler_o *)0x0) &&
       (local_48 = (System_Nullable_CustomLogicSourceType__Fields)
                   CustomLogic_CustomLogicCompiler__GetFileTypeForLine
                             ((__this->fields)._Compiler_k__BackingField,(pCVar14->fields).Line,
                              (MethodInfo *)0x0), local_48.hasValue != false)) {
      value = System_Nullable_uint___get_Value
                        ((System_Nullable_uint__o *)&local_48,
                         (MethodInfo_AE29B0 *)MethodInfo_System_Nullable_CustomLogicSourceType_get_Value);
      local_40.hasValue = false;
      local_40._1_3_ = 0;
      local_40.value = 0;
      System_Data_SqlTypes_SqlInt32___ctor_ae2660
                ((System_Data_SqlTypes_SqlInt32_o *)&local_40,value,
                 MethodInfo_System_Nullable_CustomLogicSourceType_ctor);
      if (__this_11 == (CustomLogic_CustomLogicClassDefinitionAst_o *)0x0) {
        ThrowNullReferenceException();
      }
      (__this_11->fields)._Namespace_k__BackingField.fields = local_40;
    }
    pSVar3 = (__this->fields)._tokens;
    if (pSVar3 == (System_Collections_Generic_List_CustomLogicToken__o *)0x0) goto label_1820e6dd1;
    token = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                      ((System_Collections_Generic_List_object__o *)pSVar3,startIndex + 2,
                       (MethodInfo_92B830 *)
                       MethodInfo_System_Collections_Generic_List_CustomLogicToken_get_Item);
    CustomLogic_CustomLogicParser__AssertSymbolValue(__this,token,9,(MethodInfo *)0x0);
    iVar12 = CustomLogic_CustomLogicParser__ParseAst
                       (__this,startIndex + 3,(CustomLogic_CustomLogicBaseAst_o *)__this_11,(MethodInfo *)0x0)
    ;
    if (pCVar15 == (CustomLogic_CustomLogicToken_o *)0x0) goto label_1820e6dd1;
    bVar1 = (TypeInfo_CustomLogic_CustomLogicStartAst->_2).typeHierarchyDepth;
    if (((prev->klass->_2).typeHierarchyDepth < bVar1) ||
       ((prev->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
        (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicStartAst)) {
      il2cpp_codegen_raise_invalid_cast_exception(prev);
    }
    pCVar15 = (CustomLogic_CustomLogicToken_o *)(pCVar15->fields).Value;
    if (pCVar15 != (CustomLogic_CustomLogicToken_o *)0x0) {
      if ((Il2CppClass *)pCVar15->klass == g_data_184354e50) {
        pCVar18 = pCVar15;
      }
      if (pCVar18 == (CustomLogic_CustomLogicToken_o *)0x0) {
        il2cpp_codegen_raise_invalid_cast_exception(pCVar15,g_data_184354e50);
      }
    }
    CustomLogic_CustomLogicStartAst__AddClass
              ((CustomLogic_CustomLogicStartAst_o *)prev,(System_String_o *)pCVar18,__this_11,
               (MethodInfo *)0x0);
  }
  else {
    iVar12 = startIndex;
    if ((prev->fields).Type == 1) {
      __this_08 = il2cpp_codegen_object_new
                            ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_CustomLogicDecorator);
      System_Collections_Generic_List_object____ctor
                ((System_Collections_Generic_LowLevelList_T__o *)__this_08,
                 (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_CustomLogicDecorator_ctor);
      while (pCVar14 != (CustomLogic_CustomLogicToken_o *)0x0) {
        if ((pCVar14->fields).Type != 0) goto label_1820e65f1;
        pIVar4 = (pCVar14->fields).Value;
        if (pIVar4 == (Il2CppObject *)0x0) break;
        if ((pIVar4->klass->_1).element_class != *(Il2CppClass **)(g_data_184354e08 + 0x40)) {
          il2cpp_codegen_raise_invalid_cast_exception(pIVar4,g_data_184354e08);
        }
        piVar16 = il2cpp_object_unbox(pIVar4);
        if (*piVar16 != 0xf) {
          if ((pCVar14->fields).Type == 0) {
            pIVar4 = (pCVar14->fields).Value;
            if (pIVar4 == (Il2CppObject *)0x0) break;
            if ((pIVar4->klass->_1).element_class != *(Il2CppClass **)(g_data_184354e08 + 0x40)) {
              il2cpp_codegen_raise_invalid_cast_exception(pIVar4,g_data_184354e08);
            }
            piVar16 = il2cpp_object_unbox(pIVar4);
            if (*piVar16 != 5) goto label_1820e65f1;
label_1820e6684:
            CustomLogic_CustomLogicParser__AssertTokenType(__this,pCVar15,2,(MethodInfo *)0x0);
            if (pCVar14 == (CustomLogic_CustomLogicToken_o *)0x0) break;
            if ((pCVar14->fields).Type == 0) {
              pIVar4 = (pCVar14->fields).Value;
              if (pIVar4 == (Il2CppObject *)0x0) break;
              if ((pIVar4->klass->_1).element_class != *(Il2CppClass **)(g_data_184354e08 + 0x40)) {
                il2cpp_codegen_raise_invalid_cast_exception(pIVar4,g_data_184354e08);
              }
              piVar16 = il2cpp_object_unbox(pIVar4);
              pCVar18 = (CustomLogic_CustomLogicToken_o *)(ulonglong)(*piVar16 == 6);
            }
            iVar13 = (pCVar14->fields).Line;
            __this_09 = il2cpp_codegen_object_new
                                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMethodDefinitionAst);
            CustomLogic_CustomLogicMethodDefinitionAst___ctor
                      (__this_09,iVar13,SUB81(pCVar18,0),(MethodInfo *)0x0);
            if ((pCVar15 != (CustomLogic_CustomLogicToken_o *)0x0) &&
               (__this_09 != (CustomLogic_CustomLogicMethodDefinitionAst_o *)0x0)) {
              pSVar6 = (System_String_o *)(pCVar15->fields).Value;
              if (pSVar6 == (System_String_o *)0x0) {
                (__this_09->fields).Name = (System_String_o *)0x0;
                pSVar21 = (System_String_o *)0x0;
              }
              else {
                pSVar21 = (System_String_o *)0x0;
                if ((Il2CppClass *)pSVar6->klass == g_data_184354e50) {
                  pSVar21 = pSVar6;
                }
                if (pSVar21 == (System_String_o *)0x0) {
                  il2cpp_codegen_raise_invalid_cast_exception();
                }
                (__this_09->fields).Name = pSVar21;
                pSVar21 = (System_String_o *)0x0;
                if ((Il2CppClass *)pSVar6->klass == g_data_184354e50) {
                  pSVar21 = pSVar6;
                }
                if (pSVar21 == (System_String_o *)0x0) {
                  il2cpp_codegen_raise_invalid_cast_exception(pSVar6,g_data_184354e50);
                }
              }
              Il2CppCodeGenWriteBarrier(&(__this_09->fields).Name,pSVar21);
              pSVar3 = (__this->fields)._tokens;
              if (pSVar3 != (System_Collections_Generic_List_CustomLogicToken__o *)0x0) {
                pCVar18 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                                    ((System_Collections_Generic_List_object__o *)pSVar3,iVar12 + 2,
                                     (MethodInfo_92B830 *)
                                     MethodInfo_System_Collections_Generic_List_CustomLogicToken_get_Item);
                CustomLogic_CustomLogicParser__AssertSymbolValue(__this,pCVar18,0xb,(MethodInfo *)0x0);
                pSVar3 = (__this->fields)._tokens;
                if (pSVar3 != (System_Collections_Generic_List_CustomLogicToken__o *)0x0) {
                  iVar12 = iVar12 + 3;
                  pCVar18 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                                      ((System_Collections_Generic_List_object__o *)pSVar3,iVar12,
                                       (MethodInfo_92B830 *)
                                       MethodInfo_System_Collections_Generic_List_CustomLogicToken_get_Item);
                  if (pCVar18 != (CustomLogic_CustomLogicToken_o *)0x0) goto label_1820e67b7;
                }
              }
            }
          }
          else {
label_1820e65f1:
            if (pCVar14 == (CustomLogic_CustomLogicToken_o *)0x0) break;
            if ((pCVar14->fields).Type == 0) {
              pIVar4 = (pCVar14->fields).Value;
              if (pIVar4 == (Il2CppObject *)0x0) break;
              if ((pIVar4->klass->_1).element_class != *(Il2CppClass **)(g_data_184354e08 + 0x40)) {
                il2cpp_codegen_raise_invalid_cast_exception(pIVar4,g_data_184354e08);
              }
              piVar16 = il2cpp_object_unbox(pIVar4);
              if (*piVar16 == 6) goto label_1820e6684;
              if (pCVar14 == (CustomLogic_CustomLogicToken_o *)0x0) break;
            }
            if ((pCVar14->fields).Type != 2) {
              if ((pCVar14->fields).Type == 0) {
                pIVar4 = (pCVar14->fields).Value;
                if (pIVar4 == (Il2CppObject *)0x0) break;
                if ((pIVar4->klass->_1).element_class != *(Il2CppClass **)(g_data_184354e08 + 0x40)) {
                  il2cpp_codegen_raise_invalid_cast_exception(pIVar4,g_data_184354e08);
                }
                piVar16 = il2cpp_object_unbox(pIVar4);
                if (*piVar16 == 10) goto label_1820e6189;
              }
              CustomLogic_CustomLogicParser__AssertFalse(__this,pCVar14,(MethodInfo *)0x0);
            }
            CustomLogic_CustomLogicParser__AssertSymbolValue(__this,pCVar15,0x14,(MethodInfo *)0x0);
            pSVar6 = (System_String_o *)(pCVar14->fields).Value;
            iVar13 = (pCVar14->fields).Line;
            local_40 = (System_Nullable_CustomLogicSourceType__Fields)
                       il2cpp_codegen_object_new
                                 ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVariableExpressionAst);
            pSVar21 = (System_String_o *)0x0;
            if (pSVar6 != (System_String_o *)0x0) {
              if ((Il2CppClass *)pSVar6->klass == g_data_184354e50) {
                pSVar21 = pSVar6;
              }
              if (pSVar21 == (System_String_o *)0x0) {
                il2cpp_codegen_raise_invalid_cast_exception(pSVar6,g_data_184354e50);
              }
            }
            CustomLogic_CustomLogicVariableExpressionAst___ctor
                      ((CustomLogic_CustomLogicVariableExpressionAst_o *)local_40,pSVar21,iVar13,
                       (MethodInfo *)0x0);
            iVar13 = (pCVar14->fields).Line;
            __this_10 = il2cpp_codegen_object_new
                                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAssignmentExpressionAst);
            CustomLogic_CustomLogicAssignmentExpressionAst___ctor
                      (__this_10,(CustomLogic_CustomLogicBaseExpressionAst_o *)local_40,pCVar15,iVar13,
                       (MethodInfo *)0x0);
            iVar13 = CustomLogic_CustomLogicParser__FindSemicolon(__this,iVar12,(MethodInfo *)0x0);
            pCVar19 = CustomLogic_CustomLogicParser__ParseExpression
                                (__this,(CustomLogic_CustomLogicBaseExpressionAst_o *)0x0,iVar12 + 2,
                                 iVar13 + -1,(MethodInfo *)0x0);
            if (__this_10 != (CustomLogic_CustomLogicAssignmentExpressionAst_o *)0x0) {
              (__this_10->fields).Right = pCVar19;
              Il2CppCodeGenWriteBarrier(&(__this_10->fields).Right,pCVar19);
              __this_00 = (__this_10->fields).Decorators;
              if (__this_00 != (System_Collections_Generic_List_CustomLogicDecorator__o *)0x0) {
                System_Collections_Generic_List_object___AddRange
                          ((System_Collections_Generic_List_object__o *)__this_00,
                           (System_Collections_Generic_IEnumerable_T__o *)__this_08,
                           (MethodInfo_93DA30 *)
                           MethodInfo_System_Collections_Generic_List_CustomLogicDecorator_AddRange);
                pMVar9 = MethodInfo_System_Collections_Generic_List_CustomLogicAssignmentExpressionAst_Add;
                bVar1 = (TypeInfo_CustomLogic_CustomLogicClassDefinitionAst->_2).typeHierarchyDepth;
                if (((prev->klass->_2).typeHierarchyDepth < bVar1) ||
                   ((prev->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
                    (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicClassDefinitionAst)) {
                  il2cpp_codegen_raise_invalid_cast_exception(prev);
                }
                __this_01 = (*(uint64_t *)((char *)prev + 0x18));
                if (__this_01 != (CustomLogic_CustomLogicBaseAst_c *)0x0) {
                  piVar17 = (int32_t *)((longlong)&(__this_01->_1).namespaze + 4);
                  *piVar17 = *piVar17 + 1;
                  pSVar20 = ((System_Collections_Generic_List_object__Fields *)&(__this_01->_1).name)->_items;
                  if (pSVar20 != (System_Object_array *)0x0) {
                    uVar2 = *(uint *)&(__this_01->_1).namespaze;
                    iVar12 = iVar13 + 1;
                    if (uVar2 < (uint)pSVar20->max_length) {
                      *(uint *)&(__this_01->_1).namespaze = uVar2 + 1;
                      if ((uint)pSVar20->max_length <= uVar2) goto label_1820e6e25;
                      pSVar20->m_Items[(int)uVar2] = (Il2CppObject *)__this_10;
                      Il2CppCodeGenWriteBarrier(pSVar20->m_Items + (int)uVar2,__this_10);
                    }
                    else {
                      System_Collections_Generic_List_object___AddWithResize
                                ((System_Collections_Generic_List_object__o *)__this_01,
                                 (Il2CppObject *)__this_10,
                                 (MethodInfo_93DD50 *)pMVar9->klass->rgctx_data[0xe].method);
                    }
                    goto label_1820e6c8b;
                  }
                }
              }
            }
          }
          break;
        }
        pSVar20 = CustomLogic_CustomLogicParser__ParseDecorator(__this,iVar12,(MethodInfo *)0x0);
        pMVar9 = MethodInfo_System_Collections_Generic_List_CustomLogicDecorator_Add;
        if (pSVar20 == (System_Object_array *)0x0) break;
        if ((uint)pSVar20->max_length < 2) goto label_1820e6e25;
        if (__this_08 == (System_Collections_Generic_List_CustomLogicDecorator__o *)0x0) break;
        pCVar14 = (CustomLogic_CustomLogicToken_o *)pSVar20->m_Items[1];
        pCVar15 = pCVar18;
        if (pCVar14 != (CustomLogic_CustomLogicToken_o *)0x0) {
          bVar1 = (TypeInfo_CustomLogic_CustomLogicDecorator->_2).typeHierarchyDepth;
          if (((((CustomLogic_CustomLogicPrimitiveExpressionAst_c *)pCVar14->klass)->_2).typeHierarchyDepth <
               bVar1) ||
             (pCVar15 = pCVar14,
             (((CustomLogic_CustomLogicPrimitiveExpressionAst_c *)pCVar14->klass)->_2).typeHierarchy
             [(ulonglong)bVar1 - 1] != (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicDecorator)) {
            il2cpp_codegen_raise_invalid_cast_exception(pCVar14);
          }
        }
        piVar17 = &(__this_08->fields)._version;
        *piVar17 = *piVar17 + 1;
        pCVar7 = (__this_08->fields)._items;
        if (pCVar7 == (CustomLogic_CustomLogicDecorator_array *)0x0) break;
        uVar2 = (__this_08->fields)._size;
        if (uVar2 < (uint)pCVar7->max_length) {
          (__this_08->fields)._size = uVar2 + 1;
          if ((uint)pCVar7->max_length <= uVar2) goto label_1820e6e25;
          pCVar7->m_Items[(int)uVar2] = (CustomLogic_CustomLogicDecorator_o *)pCVar15;
          Il2CppCodeGenWriteBarrier(pCVar7->m_Items + (int)uVar2,pCVar15);
        }
        else {
          System_Collections_Generic_List_object___AddWithResize
                    ((System_Collections_Generic_List_object__o *)__this_08,(Il2CppObject *)pCVar15,
                     (MethodInfo_93DD50 *)pMVar9->klass->rgctx_data[0xe].method);
        }
        if ((int)pSVar20->max_length == 0) goto label_1820e6e25;
        pIVar4 = pSVar20->m_Items[0];
        if (pIVar4 == (Il2CppObject *)0x0) break;
        if ((pIVar4->klass->_1).element_class != *(Il2CppClass **)(g_data_184354e08 + 0x40)) {
          il2cpp_codegen_raise_invalid_cast_exception(pIVar4,g_data_184354e08);
        }
        piVar16 = il2cpp_object_unbox(pIVar4);
        pSVar3 = (__this->fields)._tokens;
        if (pSVar3 == (System_Collections_Generic_List_CustomLogicToken__o *)0x0) break;
        iVar12 = *piVar16;
        pCVar14 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                            ((System_Collections_Generic_List_object__o *)pSVar3,iVar12,
                             (MethodInfo_92B830 *)
                             MethodInfo_System_Collections_Generic_List_CustomLogicToken_get_Item);
        pSVar3 = (__this->fields)._tokens;
        if (pSVar3 == (System_Collections_Generic_List_CustomLogicToken__o *)0x0) break;
        pCVar15 = pCVar18;
        if (iVar12 < (pSVar3->fields)._size + -1) {
          pCVar15 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                              ((System_Collections_Generic_List_object__o *)(__this->fields)._tokens,
                               iVar12 + 1,
                               (MethodInfo_92B830 *)
                               MethodInfo_System_Collections_Generic_List_CustomLogicToken_get_Item);
        }
      }
      goto label_1820e6dd1;
    }
    if ((((prev->fields).Type != 2) && ((prev->fields).Type != 0x10)) && ((prev->fields).Type != 0x11))
    goto label_1820e6e46;
    if (pCVar14 == (CustomLogic_CustomLogicToken_o *)0x0) goto label_1820e6dd1;
    if ((pCVar14->fields).Type == 0) {
      pIVar4 = (pCVar14->fields).Value;
      if (pIVar4 == (Il2CppObject *)0x0) goto label_1820e6dd1;
      if ((pIVar4->klass->_1).element_class != *(Il2CppClass **)(g_data_184354e08 + 0x40)) {
        il2cpp_codegen_raise_invalid_cast_exception(pIVar4,g_data_184354e08);
      }
      piVar16 = il2cpp_object_unbox(pIVar4);
      if (*piVar16 == 0x10) {
        if ((pCVar15 == (CustomLogic_CustomLogicToken_o *)0x0) || ((pCVar15->fields).Type != 0)) {
label_1820e5dba:
          pSVar20 = CustomLogic_CustomLogicParser__ParseExpressionAst(__this,startIndex + 1,(MethodInfo *)0x0)
          ;
          if (pSVar20 == (System_Object_array *)0x0) goto label_1820e6dd1;
          if ((int)pSVar20->max_length == 0) goto label_1820e6e25;
          pIVar4 = pSVar20->m_Items[0];
          if (pIVar4 == (Il2CppObject *)0x0) goto label_1820e6dd1;
          if ((pIVar4->klass->_1).element_class != *(Il2CppClass **)(g_data_184354e08 + 0x40)) {
            il2cpp_codegen_raise_invalid_cast_exception(pIVar4,g_data_184354e08);
          }
          piVar16 = il2cpp_object_unbox(pIVar4);
          if ((uint)pSVar20->max_length < 2) goto label_1820e6e25;
          pCVar15 = (CustomLogic_CustomLogicToken_o *)pSVar20->m_Items[1];
          if (pCVar15 != (CustomLogic_CustomLogicToken_o *)0x0) {
            bVar1 = (TypeInfo_CustomLogic_CustomLogicBaseExpressionAst->_2).typeHierarchyDepth;
            if (((((CustomLogic_CustomLogicPrimitiveExpressionAst_c *)pCVar15->klass)->_2).typeHierarchyDepth
                 < bVar1) ||
               (pCVar18 = pCVar15,
               (((CustomLogic_CustomLogicPrimitiveExpressionAst_c *)pCVar15->klass)->_2).typeHierarchy
               [(ulonglong)bVar1 - 1] != (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicBaseExpressionAst)) {
              il2cpp_codegen_raise_invalid_cast_exception(pCVar15);
            }
          }
          iVar12 = *piVar16;
        }
        else {
          pIVar4 = (pCVar15->fields).Value;
          if (pIVar4 == (Il2CppObject *)0x0) goto label_1820e6dd1;
          if ((pIVar4->klass->_1).element_class != *(Il2CppClass **)(g_data_184354e08 + 0x40)) {
            il2cpp_codegen_raise_invalid_cast_exception(pIVar4,g_data_184354e08);
          }
          piVar16 = il2cpp_object_unbox(pIVar4);
          if (*piVar16 != 0x26) goto label_1820e5dba;
          iVar13 = (pCVar14->fields).Line;
          pCVar18 = (CustomLogic_CustomLogicToken_o *)
                    il2cpp_codegen_object_new
                              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPrimitiveExpressionAst);
          CustomLogic_CustomLogicPrimitiveExpressionAst___ctor
                    ((CustomLogic_CustomLogicPrimitiveExpressionAst_o *)pCVar18,(Il2CppObject *)0x0,iVar13,
                     (MethodInfo *)0x0);
          iVar12 = startIndex + 2;
        }
        iVar13 = (pCVar14->fields).Line;
        __this_04 = il2cpp_codegen_object_new
                              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicReturnExpressionAst);
        CustomLogic_CustomLogicReturnExpressionAst___ctor
                  (__this_04,(CustomLogic_CustomLogicBaseExpressionAst_o *)pCVar18,iVar13,(MethodInfo *)0x0);
        bVar1 = (TypeInfo_CustomLogic_CustomLogicBlockAst->_2).typeHierarchyDepth;
        if (((prev->klass->_2).typeHierarchyDepth < bVar1) ||
           ((prev->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
            (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicBlockAst)) {
          il2cpp_codegen_raise_invalid_cast_exception(prev,TypeInfo_CustomLogic_CustomLogicBlockAst);
        }
        if ((*(uint64_t *)((char *)prev + 0x18)) == (CustomLogic_CustomLogicBaseAst_c *)0x0) goto label_1820e6dd1;
        il2cpp_runtime_helper_180012890((*(uint64_t *)((char *)prev + 0x18)),__this_04);
        goto label_1820e6c8b;
      }
      if (pCVar14 == (CustomLogic_CustomLogicToken_o *)0x0) goto label_1820e6dd1;
      if ((pCVar14->fields).Type == 0) {
        pIVar4 = (pCVar14->fields).Value;
        if (pIVar4 == (Il2CppObject *)0x0) goto label_1820e6dd1;
        if ((pIVar4->klass->_1).element_class != *(Il2CppClass **)(g_data_184354e08 + 0x40)) {
          il2cpp_codegen_raise_invalid_cast_exception(pIVar4,g_data_184354e08);
        }
        piVar16 = il2cpp_object_unbox(pIVar4);
        if (*piVar16 == 7) {
          pSVar20 = CustomLogic_CustomLogicParser__ParseExpressionAst(__this,startIndex + 1,(MethodInfo *)0x0)
          ;
          if (pSVar20 == (System_Object_array *)0x0) goto label_1820e6dd1;
          if ((int)pSVar20->max_length == 0) goto label_1820e6e25;
          pIVar4 = pSVar20->m_Items[0];
          if (pIVar4 == (Il2CppObject *)0x0) goto label_1820e6dd1;
          if ((pIVar4->klass->_1).element_class != *(Il2CppClass **)(g_data_184354e08 + 0x40)) {
            il2cpp_codegen_raise_invalid_cast_exception(pIVar4,g_data_184354e08);
          }
          piVar16 = il2cpp_object_unbox(pIVar4);
          if ((uint)pSVar20->max_length < 2) goto label_1820e6e25;
          iVar12 = *piVar16;
          pCVar19 = (CustomLogic_CustomLogicBaseExpressionAst_o *)pSVar20->m_Items[1];
          iVar13 = (pCVar14->fields).Line;
          __this_05 = il2cpp_codegen_object_new
                                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicWaitExpressionAst);
          if (pCVar19 != (CustomLogic_CustomLogicBaseExpressionAst_o *)0x0) {
            bVar1 = (TypeInfo_CustomLogic_CustomLogicBaseExpressionAst->_2).typeHierarchyDepth;
            if (((pCVar19->klass->_2).typeHierarchyDepth < bVar1) ||
               ((pCVar19->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
                (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicBaseExpressionAst)) {
              il2cpp_codegen_raise_invalid_cast_exception(pCVar19);
            }
          }
          CustomLogic_CustomLogicWaitExpressionAst___ctor(__this_05,pCVar19,iVar13,(MethodInfo *)0x0);
          bVar1 = (TypeInfo_CustomLogic_CustomLogicBlockAst->_2).typeHierarchyDepth;
          if (((prev->klass->_2).typeHierarchyDepth < bVar1) ||
             ((prev->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
              (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicBlockAst)) {
            il2cpp_codegen_raise_invalid_cast_exception(prev);
          }
          if ((*(uint64_t *)((char *)prev + 0x18)) == (CustomLogic_CustomLogicBaseAst_c *)0x0) goto label_1820e6dd1;
          il2cpp_runtime_helper_180012890((*(uint64_t *)((char *)prev + 0x18)),__this_05);
          goto label_1820e6c8b;
        }
        if (pCVar14 == (CustomLogic_CustomLogicToken_o *)0x0) goto label_1820e6dd1;
      }
    }
    if ((pCVar14->fields).Type == 2) {
      pSVar20 = CustomLogic_CustomLogicParser__ParseExpressionAst(__this,startIndex,(MethodInfo *)0x0);
      if (pSVar20 == (System_Object_array *)0x0) goto label_1820e6dd1;
      if ((int)pSVar20->max_length == 0) {
label_1820e6e25:
        ThrowIndexOutOfRangeException();
      }
      pIVar4 = pSVar20->m_Items[0];
      if (pIVar4 == (Il2CppObject *)0x0) goto label_1820e6dd1;
      if ((pIVar4->klass->_1).element_class != *(Il2CppClass **)(g_data_184354e08 + 0x40)) {
        il2cpp_codegen_raise_invalid_cast_exception(pIVar4,g_data_184354e08);
      }
      piVar16 = il2cpp_object_unbox(pIVar4);
      bVar1 = (TypeInfo_CustomLogic_CustomLogicBlockAst->_2).typeHierarchyDepth;
      if (((prev->klass->_2).typeHierarchyDepth < bVar1) ||
         ((prev->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
          (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicBlockAst)) {
        il2cpp_codegen_raise_invalid_cast_exception(prev,TypeInfo_CustomLogic_CustomLogicBlockAst);
      }
      if ((uint)pSVar20->max_length < 2) goto label_1820e6e25;
      if ((*(uint64_t *)((char *)prev + 0x18)) == (CustomLogic_CustomLogicBaseAst_c *)0x0) goto label_1820e6dd1;
      pCVar15 = (CustomLogic_CustomLogicToken_o *)pSVar20->m_Items[1];
      if (pCVar15 != (CustomLogic_CustomLogicToken_o *)0x0) {
        bVar1 = (TypeInfo_CustomLogic_CustomLogicBaseExpressionAst->_2).typeHierarchyDepth;
        if (((((CustomLogic_CustomLogicPrimitiveExpressionAst_c *)pCVar15->klass)->_2).typeHierarchyDepth <
             bVar1) ||
           (pCVar18 = pCVar15,
           (((CustomLogic_CustomLogicPrimitiveExpressionAst_c *)pCVar15->klass)->_2).typeHierarchy
           [(ulonglong)bVar1 - 1] != (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicBaseExpressionAst)) {
          il2cpp_codegen_raise_invalid_cast_exception();
        }
      }
      iVar12 = *piVar16;
      il2cpp_runtime_helper_180012890((*(uint64_t *)((char *)prev + 0x18)),pCVar18);
    }
    else {
      if ((TypeInfo_CustomLogic_CustomLogicSymbols->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicSymbols);
      }
      pSVar5 = TypeInfo_CustomLogic_CustomLogicSymbols->static_fields->ConditionalSymbols;
      if (Il2CppMethodInitialized_1843469cf == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_System_Collections_Generic_HashSet_int_Contains);
        Il2CppMethodInitialized_1843469cf = '\x01';
      }
      pMVar9 = MethodInfo_System_Collections_Generic_HashSet_int_Contains;
      if ((pCVar14->fields).Type != 0) goto label_1820e6d59;
      if ((pSVar5 == (System_Collections_Generic_HashSet_int__o *)0x0) ||
         (pIVar4 = (pCVar14->fields).Value, pIVar4 == (Il2CppObject *)0x0)) goto label_1820e6dd1;
      if ((pIVar4->klass->_1).element_class != *(Il2CppClass **)(g_data_184354e08 + 0x40)) {
        il2cpp_codegen_raise_invalid_cast_exception(pIVar4,g_data_184354e08);
      }
      piVar17 = il2cpp_object_unbox(pIVar4);
      bVar10 = System_Collections_Generic_HashSet_Int32Enum___Contains
                         ((System_Collections_Generic_HashSet_T__o *)pSVar5,*piVar17,
                          (MethodInfo_1759C90 *)pMVar9);
      if (!bVar10) {
        if ((pCVar14->fields).Type != 0) goto label_1820e6d59;
        pIVar4 = (pCVar14->fields).Value;
        if (pIVar4 == (Il2CppObject *)0x0) goto label_1820e6dd1;
        if ((pIVar4->klass->_1).element_class != *(Il2CppClass **)(g_data_184354e08 + 0x40)) {
          il2cpp_codegen_raise_invalid_cast_exception(pIVar4,g_data_184354e08);
        }
        piVar16 = il2cpp_object_unbox(pIVar4);
        if (*piVar16 == 0x2e) {
          CustomLogic_CustomLogicParser__AssertSymbolValue(__this,pCVar15,0xb,(MethodInfo *)0x0);
          iVar11 = CustomLogic_CustomLogicParser__FindClosingParen(__this,startIndex,(MethodInfo *)0x0);
          iVar13 = (pCVar14->fields).Line;
          __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicForBlockAst);
          CustomLogic_CustomLogicForBlockAst___ctor(__this_02,iVar13,(MethodInfo *)0x0);
          pSVar3 = (__this->fields)._tokens;
          if (pSVar3 == (System_Collections_Generic_List_CustomLogicToken__o *)0x0) goto label_1820e6dd1;
          pCVar18 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                              ((System_Collections_Generic_List_object__o *)pSVar3,startIndex + 2,
                               (MethodInfo_92B830 *)
                               MethodInfo_System_Collections_Generic_List_CustomLogicToken_get_Item);
          CustomLogic_CustomLogicParser__AssertTokenType(__this,pCVar18,2,(MethodInfo *)0x0);
          pSVar3 = (__this->fields)._tokens;
          if (((pSVar3 == (System_Collections_Generic_List_CustomLogicToken__o *)0x0) ||
              (pCVar18 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                                   ((System_Collections_Generic_List_object__o *)pSVar3,startIndex + 2,
                                    (MethodInfo_92B830 *)
                                    MethodInfo_System_Collections_Generic_List_CustomLogicToken_get_Item),
              pCVar18 == (CustomLogic_CustomLogicToken_o *)0x0)) ||
             (pSVar3 = (__this->fields)._tokens,
             pSVar3 == (System_Collections_Generic_List_CustomLogicToken__o *)0x0)) goto label_1820e6dd1;
          pSVar6 = (System_String_o *)(pCVar18->fields).Value;
          pCVar18 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                              ((System_Collections_Generic_List_object__o *)pSVar3,startIndex + 2,
                               (MethodInfo_92B830 *)
                               MethodInfo_System_Collections_Generic_List_CustomLogicToken_get_Item);
          if (pCVar18 == (CustomLogic_CustomLogicToken_o *)0x0) goto label_1820e6dd1;
          iVar13 = (pCVar18->fields).Line;
          __this_03 = il2cpp_codegen_object_new
                                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVariableExpressionAst);
          pSVar21 = (System_String_o *)0x0;
          if (pSVar6 != (System_String_o *)0x0) {
            if ((Il2CppClass *)pSVar6->klass == g_data_184354e50) {
              pSVar21 = pSVar6;
            }
            if (pSVar21 == (System_String_o *)0x0) {
              il2cpp_codegen_raise_invalid_cast_exception(pSVar6,g_data_184354e50);
            }
          }
          CustomLogic_CustomLogicVariableExpressionAst___ctor(__this_03,pSVar21,iVar13,(MethodInfo *)0x0);
          if (__this_02 == (CustomLogic_CustomLogicForBlockAst_o *)0x0) goto label_1820e6dd1;
          (__this_02->fields).Variable = __this_03;
          Il2CppCodeGenWriteBarrier(&(__this_02->fields).Variable,__this_03);
          pSVar3 = (__this->fields)._tokens;
          if (pSVar3 == (System_Collections_Generic_List_CustomLogicToken__o *)0x0) goto label_1820e6dd1;
          pCVar18 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                              ((System_Collections_Generic_List_object__o *)pSVar3,startIndex + 3,
                               (MethodInfo_92B830 *)
                               MethodInfo_System_Collections_Generic_List_CustomLogicToken_get_Item);
          CustomLogic_CustomLogicParser__AssertSymbolValue(__this,pCVar18,0x2f,(MethodInfo *)0x0);
          pCVar19 = CustomLogic_CustomLogicParser__ParseExpression
                              (__this,(CustomLogic_CustomLogicBaseExpressionAst_o *)0x0,startIndex + 4,
                               iVar11 + -1,(MethodInfo *)0x0);
          (__this_02->fields).Iterable = pCVar19;
          Il2CppCodeGenWriteBarrier(&(__this_02->fields).Iterable,pCVar19);
          pSVar3 = (__this->fields)._tokens;
          if (pSVar3 == (System_Collections_Generic_List_CustomLogicToken__o *)0x0) goto label_1820e6dd1;
          pCVar18 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                              ((System_Collections_Generic_List_object__o *)pSVar3,iVar11 + 1,
                               (MethodInfo_92B830 *)
                               MethodInfo_System_Collections_Generic_List_CustomLogicToken_get_Item);
          CustomLogic_CustomLogicParser__AssertSymbolValue(__this,pCVar18,9,(MethodInfo *)0x0);
          iVar12 = CustomLogic_CustomLogicParser__ParseAst
                             (__this,iVar11 + 2,(CustomLogic_CustomLogicBaseAst_o *)__this_02,
                              (MethodInfo *)0x0);
          bVar1 = (TypeInfo_CustomLogic_CustomLogicBlockAst->_2).typeHierarchyDepth;
          if (((prev->klass->_2).typeHierarchyDepth < bVar1) ||
             ((prev->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
              (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicBlockAst)) {
            il2cpp_codegen_raise_invalid_cast_exception(prev);
          }
          if ((*(uint64_t *)((char *)prev + 0x18)) == (CustomLogic_CustomLogicBaseAst_c *)0x0) goto label_1820e6dd1;
          il2cpp_runtime_helper_180012890((*(uint64_t *)((char *)prev + 0x18)),__this_02);
        }
        else {
          if ((pCVar14->fields).Type != 0) goto label_1820e6d59;
          pIVar4 = (pCVar14->fields).Value;
          if (pIVar4 == (Il2CppObject *)0x0) goto label_1820e6dd1;
          if ((pIVar4->klass->_1).element_class != *(Il2CppClass **)(g_data_184354e08 + 0x40)) {
            il2cpp_codegen_raise_invalid_cast_exception(pIVar4,g_data_184354e08);
          }
          piVar16 = il2cpp_object_unbox(pIVar4);
          if (*piVar16 == 0x11) {
            CustomLogic_CustomLogicParser__AssertSymbolValue(__this,pCVar15,0x26,(MethodInfo *)0x0);
            iVar13 = (pCVar14->fields).Line;
            __this_06 = il2cpp_codegen_object_new
                                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicContinueExpressionAst);
            CustomLogic_CustomLogicContinueExpressionAst___ctor(__this_06,iVar13,(MethodInfo *)0x0);
            bVar1 = (TypeInfo_CustomLogic_CustomLogicBlockAst->_2).typeHierarchyDepth;
            if (((prev->klass->_2).typeHierarchyDepth < bVar1) ||
               ((prev->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
                (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicBlockAst)) {
              il2cpp_codegen_raise_invalid_cast_exception(prev,TypeInfo_CustomLogic_CustomLogicBlockAst);
            }
          }
          else {
            if ((pCVar14->fields).Type != 0) {
label_1820e6d59:
              CustomLogic_CustomLogicParser__AssertFalse(__this,pCVar14,(MethodInfo *)0x0);
            }
            pIVar4 = (pCVar14->fields).Value;
            if (pIVar4 == (Il2CppObject *)0x0) goto label_1820e6dd1;
            if ((pIVar4->klass->_1).element_class != *(Il2CppClass **)(g_data_184354e08 + 0x40)) {
              il2cpp_codegen_raise_invalid_cast_exception(pIVar4,g_data_184354e08);
            }
            piVar16 = il2cpp_object_unbox(pIVar4);
            if (*piVar16 != 0x12) {
              if ((pCVar14->fields).Type == 0) {
                pIVar4 = (pCVar14->fields).Value;
                if (pIVar4 == (Il2CppObject *)0x0) goto label_1820e6dd1;
                if ((pIVar4->klass->_1).element_class != *(Il2CppClass **)(g_data_184354e08 + 0x40)) {
                  il2cpp_codegen_raise_invalid_cast_exception(pIVar4,g_data_184354e08);
                }
                piVar16 = il2cpp_object_unbox(pIVar4);
                if (*piVar16 == 10) {
label_1820e6189:
                  return iVar12 + 1;
                }
              }
              goto label_1820e6d59;
            }
            CustomLogic_CustomLogicParser__AssertSymbolValue(__this,pCVar15,0x26,(MethodInfo *)0x0);
            iVar13 = (pCVar14->fields).Line;
            __this_06 = (CustomLogic_CustomLogicContinueExpressionAst_o *)
                        il2cpp_codegen_object_new
                                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicBreakExpressionAst);
            CustomLogic_CustomLogicBreakExpressionAst___ctor
                      ((CustomLogic_CustomLogicBreakExpressionAst_o *)__this_06,iVar13,(MethodInfo *)0x0);
            bVar1 = (TypeInfo_CustomLogic_CustomLogicBlockAst->_2).typeHierarchyDepth;
            if (((prev->klass->_2).typeHierarchyDepth < bVar1) ||
               ((prev->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
                (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicBlockAst)) {
              il2cpp_codegen_raise_invalid_cast_exception(prev,TypeInfo_CustomLogic_CustomLogicBlockAst);
            }
          }
          if ((*(uint64_t *)((char *)prev + 0x18)) == (CustomLogic_CustomLogicBaseAst_c *)0x0) goto label_1820e6dd1;
          iVar12 = startIndex + 2;
          il2cpp_runtime_helper_180012890((*(uint64_t *)((char *)prev + 0x18)),__this_06);
        }
        goto label_1820e6c8b;
      }
      iVar13 = (pCVar14->fields).Line;
      __this_07 = il2cpp_codegen_object_new
                            ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicConditionalBlockAst);
      CustomLogic_CustomLogicConditionalBlockAst___ctor(__this_07,pCVar14,iVar13,(MethodInfo *)0x0);
      if ((pCVar14->fields).Type == 0) {
        pIVar4 = (pCVar14->fields).Value;
        if (pIVar4 == (Il2CppObject *)0x0) goto label_1820e6dd1;
        if ((pIVar4->klass->_1).element_class != *(Il2CppClass **)(g_data_184354e08 + 0x40)) {
          il2cpp_codegen_raise_invalid_cast_exception(pIVar4,g_data_184354e08);
        }
        piVar16 = il2cpp_object_unbox(pIVar4);
        if (*piVar16 != 0x2b) goto label_1820e6214;
        pSVar3 = (__this->fields)._tokens;
      }
      else {
label_1820e6214:
        CustomLogic_CustomLogicParser__AssertSymbolValue(__this,pCVar15,0xb,(MethodInfo *)0x0);
        iVar12 = CustomLogic_CustomLogicParser__FindClosingParen(__this,startIndex + 1,(MethodInfo *)0x0);
        pCVar19 = CustomLogic_CustomLogicParser__ParseExpression
                            (__this,(CustomLogic_CustomLogicBaseExpressionAst_o *)0x0,startIndex + 2,
                             iVar12 + -1,(MethodInfo *)0x0);
        if (__this_07 == (CustomLogic_CustomLogicConditionalBlockAst_o *)0x0) goto label_1820e6dd1;
        (__this_07->fields).Condition = pCVar19;
        Il2CppCodeGenWriteBarrier(&(__this_07->fields).Condition,pCVar19);
        pSVar3 = (__this->fields)._tokens;
      }
      if (pSVar3 == (System_Collections_Generic_List_CustomLogicToken__o *)0x0) {
label_1820e6dd1:
        ThrowNullReferenceException();
      }
      pCVar18 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                          ((System_Collections_Generic_List_object__o *)(__this->fields)._tokens,iVar12 + 1,
                           (MethodInfo_92B830 *)
                           MethodInfo_System_Collections_Generic_List_CustomLogicToken_get_Item);
      CustomLogic_CustomLogicParser__AssertSymbolValue(__this,pCVar18,9,(MethodInfo *)0x0);
      iVar12 = CustomLogic_CustomLogicParser__ParseAst
                         (__this,iVar12 + 2,(CustomLogic_CustomLogicBaseAst_o *)__this_07,(MethodInfo *)0x0);
      bVar1 = (TypeInfo_CustomLogic_CustomLogicBlockAst->_2).typeHierarchyDepth;
      if (((prev->klass->_2).typeHierarchyDepth < bVar1) ||
         ((prev->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
          (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicBlockAst)) {
        il2cpp_codegen_raise_invalid_cast_exception(prev);
      }
      if ((*(uint64_t *)((char *)prev + 0x18)) == (CustomLogic_CustomLogicBaseAst_c *)0x0) goto label_1820e6dd1;
      il2cpp_runtime_helper_180012890((*(uint64_t *)((char *)prev + 0x18)),__this_07);
    }
  }
label_1820e6c8b:
  if (iVar12 != startIndex) {
    iVar13 = CustomLogic_CustomLogicParser__ParseAst(__this,iVar12,prev,(MethodInfo *)0x0);
    return iVar13;
  }
label_1820e6e46:
  CustomLogic_CustomLogicParser__AssertFalse(__this,pCVar14,(MethodInfo *)0x0);
  while( true ) {
    if ((pCVar18->fields).Type == 2) {
      pSVar8 = (__this_09->fields).ParameterNames;
      if (pSVar8 == (System_Collections_Generic_List_string__o *)0x0) break;
      pIVar4 = (pCVar18->fields).Value;
      pIVar22 = (Il2CppObject *)0x0;
      if (pIVar4 != (Il2CppObject *)0x0) {
        if (pIVar4->klass == g_data_184354e50) {
          pIVar22 = pIVar4;
        }
        if (pIVar22 == (Il2CppObject *)0x0) {
          il2cpp_codegen_raise_invalid_cast_exception(pIVar4,g_data_184354e50);
        }
      }
      il2cpp_runtime_helper_180012890(pSVar8,pIVar22,MethodInfo_System_Collections_Generic_List_string_Add);
    }
    else {
      CustomLogic_CustomLogicParser__AssertSymbolValue(__this,pCVar18,0x28,(MethodInfo *)0x0);
    }
    pSVar3 = (__this->fields)._tokens;
    if (pSVar3 == (System_Collections_Generic_List_CustomLogicToken__o *)0x0) break;
    iVar12 = iVar12 + 1;
    pCVar18 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                        ((System_Collections_Generic_List_object__o *)pSVar3,iVar12,
                         (MethodInfo_92B830 *)
                         MethodInfo_System_Collections_Generic_List_CustomLogicToken_get_Item);
    if (pCVar18 == (CustomLogic_CustomLogicToken_o *)0x0) break;
label_1820e67b7:
    if ((pCVar18->fields).Type == 0) {
      pIVar4 = (pCVar18->fields).Value;
      if (pIVar4 == (Il2CppObject *)0x0) break;
      if ((pIVar4->klass->_1).element_class != *(Il2CppClass **)(g_data_184354e08 + 0x40)) {
        il2cpp_codegen_raise_invalid_cast_exception(pIVar4,g_data_184354e08);
      }
      piVar16 = il2cpp_object_unbox(pIVar4);
      if (*piVar16 == 0xc) {
        pSVar3 = (__this->fields)._tokens;
        if (pSVar3 != (System_Collections_Generic_List_CustomLogicToken__o *)0x0) {
          pCVar18 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                              ((System_Collections_Generic_List_object__o *)pSVar3,iVar12 + 1,
                               (MethodInfo_92B830 *)
                               MethodInfo_System_Collections_Generic_List_CustomLogicToken_get_Item);
          CustomLogic_CustomLogicParser__AssertSymbolValue(__this,pCVar18,9,(MethodInfo *)0x0);
          iVar12 = CustomLogic_CustomLogicParser__ParseAst
                             (__this,iVar12 + 2,(CustomLogic_CustomLogicBaseAst_o *)__this_09,
                              (MethodInfo *)0x0);
          bVar1 = (TypeInfo_CustomLogic_CustomLogicClassDefinitionAst->_2).typeHierarchyDepth;
          if (((prev->klass->_2).typeHierarchyDepth < bVar1) ||
             ((prev->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
              (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicClassDefinitionAst)) {
            il2cpp_codegen_raise_invalid_cast_exception(prev);
          }
          pSVar6 = (System_String_o *)(pCVar15->fields).Value;
          pSVar21 = (System_String_o *)0x0;
          if (pSVar6 != (System_String_o *)0x0) {
            if ((Il2CppClass *)pSVar6->klass == g_data_184354e50) {
              pSVar21 = pSVar6;
            }
            if (pSVar21 == (System_String_o *)0x0) {
              il2cpp_codegen_raise_invalid_cast_exception(pSVar6,g_data_184354e50);
            }
          }
          CustomLogic_CustomLogicClassDefinitionAst__AddMethod
                    ((CustomLogic_CustomLogicClassDefinitionAst_o *)prev,pSVar21,__this_09,(MethodInfo *)0x0);
          goto label_1820e6c8b;
        }
        break;
      }
    }
  }
  goto label_1820e6dd1;
}


// CustomLogic.CustomLogicParser$$ParseDecorator
// il2cpp: System_Object_array* CustomLogic_CustomLogicParser__ParseDecorator (CustomLogic_CustomLogicParser_o* __this, int32_t startIndex, const MethodInfo* method);
// 0x1820e72f0

System_Object_array *
CustomLogic_CustomLogicParser__ParseDecorator
          (CustomLogic_CustomLogicParser_o *__this,int32_t startIndex,MethodInfo *method)

{
  int32_t *piVar1;
  int iVar2;
  uint uVar3;
  System_Collections_Generic_List_CustomLogicToken__o *pSVar4;
  System_Collections_Generic_List_object__o *pSVar5;
  int32_t iVar6;
  CustomLogic_CustomLogicToken_o *pCVar7;
  CustomLogic_CustomLogicDecorator_o *__this_00;
  CustomLogic_CustomLogicToken_o *pCVar8;
  int *piVar9;
  System_Int32_array *pSVar10;
  Il2CppObject *pIVar11;
  System_Object_array *pSVar12;
  Il2CppObject *pIVar13;
  System_String_o *pSVar14;
  System_String_o *pSVar15;
  Il2CppClass *pIVar16;
  System_Exception_o *pSVar17;
  MethodInfo *pMVar18;
  uint uVar19;
  System_String_o *pSVar20;
  int iVar21;
  int local_res10 [2];
  
  if (Il2CppMethodInitialized_1843469c9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicDecorator);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_object_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_CustomLogicToken_get_Count);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_CustomLogicToken_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    Il2CppMethodInitialized_1843469c9 = '\x01';
  }
  pSVar4 = (__this->fields)._tokens;
  if (pSVar4 != (System_Collections_Generic_List_CustomLogicToken__o *)0x0) {
    pCVar7 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                       ((System_Collections_Generic_List_object__o *)pSVar4,startIndex,
                        (MethodInfo_92B830 *)
                        MethodInfo_System_Collections_Generic_List_CustomLogicToken_get_Item);
    CustomLogic_CustomLogicParser__AssertSymbolValue(__this,pCVar7,0xf,(MethodInfo *)0x0);
    pSVar4 = (__this->fields)._tokens;
    if (pSVar4 != (System_Collections_Generic_List_CustomLogicToken__o *)0x0) {
      if ((pSVar4->fields)._size <= startIndex + 1) {
        pIVar16 = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
        pSVar17 = (System_Exception_o *)il2cpp_codegen_object_new(pIVar16);
        pSVar14 = il2cpp_codegen_get_runtime_metadata(&"Expected decorator name after @");
        System_Exception___ctor_1b6abf0(pSVar17,pSVar14,(MethodInfo *)0x0);
        pMVar18 = il2cpp_codegen_get_runtime_metadata
                            (&MethodInfo_CustomLogic_CustomLogicParser_ParseDecorator);
        il2cpp_codegen_raise_exception((Il2CppObject *)pSVar17,pMVar18);
      }
      pCVar7 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                         ((System_Collections_Generic_List_object__o *)pSVar4,startIndex + 1,
                          (MethodInfo_92B830 *)
                          MethodInfo_System_Collections_Generic_List_CustomLogicToken_get_Item);
      CustomLogic_CustomLogicParser__AssertTokenType(__this,pCVar7,2,(MethodInfo *)0x0);
      if (pCVar7 != (CustomLogic_CustomLogicToken_o *)0x0) {
        pSVar14 = (System_String_o *)(pCVar7->fields).Value;
        __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicDecorator);
        pSVar20 = (System_String_o *)0x0;
        pSVar15 = pSVar20;
        if (pSVar14 != (System_String_o *)0x0) {
          if ((Il2CppClass *)pSVar14->klass == g_data_184354e50) {
            pSVar15 = pSVar14;
          }
          if (pSVar15 == (System_String_o *)0x0) {
            il2cpp_codegen_raise_invalid_cast_exception(pSVar14,g_data_184354e50);
          }
        }
        CustomLogic_CustomLogicDecorator___ctor(__this_00,pSVar15,(MethodInfo *)0x0);
        pSVar4 = (__this->fields)._tokens;
        if (pSVar4 != (System_Collections_Generic_List_CustomLogicToken__o *)0x0) {
          iVar21 = startIndex + 2;
          if (iVar21 < (pSVar4->fields)._size) {
            pCVar8 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                               ((System_Collections_Generic_List_object__o *)pSVar4,iVar21,
                                (MethodInfo_92B830 *)
                                MethodInfo_System_Collections_Generic_List_CustomLogicToken_get_Item);
            if ((pCVar8 != (CustomLogic_CustomLogicToken_o *)0x0) && ((pCVar8->fields).Type == 0)) {
              pIVar11 = (pCVar8->fields).Value;
              if (pIVar11 == (Il2CppObject *)0x0) goto label_1820e76d8;
              if ((pIVar11->klass->_1).element_class != (g_data_184354e08->_1).element_class) {
                il2cpp_codegen_raise_invalid_cast_exception();
              }
              piVar9 = il2cpp_object_unbox(pIVar11);
              if (*piVar9 != 0xb) goto label_1820e7611;
              iVar6 = CustomLogic_CustomLogicParser__FindClosingParen(__this,iVar21,(MethodInfo *)0x0);
              if (iVar6 < 0) {
                NullCheck(pCVar7);
                iVar6 = il2cpp_runtime_helper_180001e60((pCVar7->fields).Line,1);
                pSVar14 = CustomLogic_CustomLogicParser__GetLineNumberString(__this,iVar6,(MethodInfo *)0x0);
                pSVar15 = il2cpp_codegen_get_runtime_metadata(&"Unclosed decorator parameters at line ");
                pSVar14 = System_String__Concat_1969e50(pSVar15,pSVar14,(MethodInfo *)0x0);
                pIVar16 = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
                pSVar17 = (System_Exception_o *)il2cpp_codegen_object_new(pIVar16);
                System_Exception___ctor_1b6abf0(pSVar17,pSVar14,(MethodInfo *)0x0);
                pMVar18 = il2cpp_codegen_get_runtime_metadata
                                    (&MethodInfo_CustomLogic_CustomLogicParser_ParseDecorator);
                il2cpp_codegen_raise_exception((Il2CppObject *)pSVar17,pMVar18);
              }
              pSVar10 = CustomLogic_CustomLogicParser__FindCommas
                                  (__this,startIndex + 3,iVar6,(MethodInfo *)0x0);
              if (pSVar10 == (System_Int32_array *)0x0) goto label_1820e76d8;
              iVar21 = startIndex + 3;
              while( true ) {
                uVar19 = (uint)pSVar20;
                if ((int)pSVar10->max_length <= (int)uVar19) break;
                if ((uint)pSVar10->max_length <= uVar19) goto label_1820e76de;
                if (__this_00 == (CustomLogic_CustomLogicDecorator_o *)0x0) goto label_1820e76d8;
                pSVar5 = (__this_00->fields).Parameters;
                iVar2 = pSVar10->m_Items[(int)uVar19];
                pIVar11 = CustomLogic_CustomLogicParser__ParseDecoratorParameter
                                    (__this,iVar21,iVar2 + -1,(MethodInfo *)0x0);
                pMVar18 = MethodInfo_System_Collections_Generic_List_object_Add;
                if (pSVar5 == (System_Collections_Generic_List_object__o *)0x0) goto label_1820e76d8;
                piVar1 = &(pSVar5->fields)._version;
                *piVar1 = *piVar1 + 1;
                pSVar12 = (pSVar5->fields)._items;
                if (pSVar12 == (System_Object_array *)0x0) goto label_1820e76d8;
                uVar3 = (pSVar5->fields)._size;
                if (uVar3 < (uint)pSVar12->max_length) {
                  (pSVar5->fields)._size = uVar3 + 1;
                  if ((uint)pSVar12->max_length <= uVar3) goto label_1820e76de;
                  pSVar12->m_Items[(int)uVar3] = pIVar11;
                  Il2CppCodeGenWriteBarrier(pSVar12->m_Items + (int)uVar3,pIVar11);
                  iVar21 = iVar2 + 1;
                  pSVar20 = (System_String_o *)(ulonglong)(uVar19 + 1);
                }
                else {
                  System_Collections_Generic_List_object___AddWithResize
                            (pSVar5,pIVar11,(MethodInfo_93DD50 *)pMVar18->klass->rgctx_data[0xe].method);
                  iVar21 = iVar2 + 1;
                  pSVar20 = (System_String_o *)(ulonglong)(uVar19 + 1);
                }
              }
              if (iVar21 < iVar6) {
                if (__this_00 == (CustomLogic_CustomLogicDecorator_o *)0x0) goto label_1820e76d8;
                pSVar5 = (__this_00->fields).Parameters;
                pIVar11 = CustomLogic_CustomLogicParser__ParseDecoratorParameter
                                    (__this,iVar21,iVar6 + -1,(MethodInfo *)0x0);
                pMVar18 = MethodInfo_System_Collections_Generic_List_object_Add;
                if (pSVar5 == (System_Collections_Generic_List_object__o *)0x0) goto label_1820e76d8;
                piVar1 = &(pSVar5->fields)._version;
                *piVar1 = *piVar1 + 1;
                pSVar12 = (pSVar5->fields)._items;
                if (pSVar12 == (System_Object_array *)0x0) goto label_1820e76d8;
                uVar19 = (pSVar5->fields)._size;
                if (uVar19 < (uint)pSVar12->max_length) {
                  (pSVar5->fields)._size = uVar19 + 1;
                  if ((uint)pSVar12->max_length <= uVar19) {
label_1820e76de:
                    ThrowIndexOutOfRangeException();
                  }
                  pSVar12->m_Items[(int)uVar19] = pIVar11;
                  Il2CppCodeGenWriteBarrier(pSVar12->m_Items + (int)uVar19,pIVar11);
                }
                else {
                  System_Collections_Generic_List_object___AddWithResize
                            (pSVar5,pIVar11,(MethodInfo_93DD50 *)pMVar18->klass->rgctx_data[0xe].method);
                }
              }
              iVar21 = iVar6 + 1;
            }
          }
label_1820e7611:
          pSVar12 = (System_Object_array *)SZArrayNew(TypeInfo_object_array,2);
          local_res10[0] = iVar21;
          pIVar11 = il2cpp_value_box(g_data_184354e08,local_res10);
          if (pSVar12 == (System_Object_array *)0x0) {
            ThrowNullReferenceException();
          }
          if (pIVar11 != (Il2CppObject *)0x0) {
            pIVar13 = il2cpp_vm_Object_IsInst(pIVar11,(((pSVar12->obj).klass)->_1).element_class);
            if (pIVar13 == (Il2CppObject *)0x0) {
              pIVar11 = il2cpp_codegen_get_array_type_mismatch_exception();
              il2cpp_codegen_raise_exception(pIVar11,(MethodInfo *)0x0);
            }
          }
          if ((int)pSVar12->max_length != 0) {
            pSVar12->m_Items[0] = pIVar11;
            Il2CppCodeGenWriteBarrier(pSVar12->m_Items,pIVar11);
            if (__this_00 != (CustomLogic_CustomLogicDecorator_o *)0x0) {
              pIVar11 = il2cpp_vm_Object_IsInst
                                  ((Il2CppObject *)__this_00,(((pSVar12->obj).klass)->_1).element_class);
              if (pIVar11 == (Il2CppObject *)0x0) {
                pIVar11 = il2cpp_codegen_get_array_type_mismatch_exception();
                il2cpp_codegen_raise_exception(pIVar11,(MethodInfo *)0x0);
              }
            }
            if (1 < (uint)pSVar12->max_length) {
              pSVar12->m_Items[1] = (Il2CppObject *)__this_00;
              Il2CppCodeGenWriteBarrier(pSVar12->m_Items + 1,__this_00);
              return pSVar12;
            }
          }
          ThrowIndexOutOfRangeException();
        }
      }
    }
  }
label_1820e76d8:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicParser$$ParseDecoratorParameter
// il2cpp: Il2CppObject* CustomLogic_CustomLogicParser__ParseDecoratorParameter (CustomLogic_CustomLogicParser_o* __this, int32_t startIndex, int32_t endIndex, const MethodInfo* method);
// 0x1820e6e80
// asm: 7 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1820e7086: mov rcx, qword ptr [rip + 0x226ddab]
// asm:   0x1820e708d: lea rdx, [rsp + 0x48]
// asm:   0x1820e7092: movss dword ptr [rsp + 0x48], xmm6
// asm:   0x1820e7141: mov dword ptr [rsp + 0x48], eax
// asm:   0x1820e7145: jmp 0x1820e7098
// asm:   0x1820e7188: mov rax, qword ptr [rax + 0x18]
// asm:   0x1820e718c: jmp 0x1820e709d

Il2CppObject *
CustomLogic_CustomLogicParser__ParseDecoratorParameter
          (CustomLogic_CustomLogicParser_o *__this,int32_t startIndex,int32_t endIndex,MethodInfo *method)

{
  uint uVar1;
  System_Collections_Generic_List_CustomLogicToken__o *pSVar2;
  int32_t iVar3;
  CustomLogic_CustomLogicToken_o *pCVar4;
  int *piVar5;
  Il2CppObject *pIVar6;
  uint *puVar7;
  Il2CppObject *pIVar8;
  MethodInfo_92B830 *method_00;
  System_String_o *pSVar9;
  System_String_o *pSVar10;
  Il2CppClass *pIVar11;
  System_Exception_o *pSVar12;
  MethodInfo *pMVar13;
  bool bVar14;
  uint local_res10 [2];
  
  if (Il2CppMethodInitialized_1843469ca == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_CustomLogicToken_get_Item);
    Il2CppMethodInitialized_1843469ca = '\x01';
  }
  if (endIndex == startIndex + 1) {
    pSVar2 = (__this->fields)._tokens;
    if (pSVar2 == (System_Collections_Generic_List_CustomLogicToken__o *)0x0) goto label_1820e72e9;
    pCVar4 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                       ((System_Collections_Generic_List_object__o *)pSVar2,startIndex,
                        (MethodInfo_92B830 *)
                        MethodInfo_System_Collections_Generic_List_CustomLogicToken_get_Item);
    if ((pCVar4 == (CustomLogic_CustomLogicToken_o *)0x0) || ((pCVar4->fields).Type != 0)) {
label_1820e6f1d:
      pSVar2 = (__this->fields)._tokens;
      if (pSVar2 == (System_Collections_Generic_List_CustomLogicToken__o *)0x0) goto label_1820e72e9;
      pCVar4 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                         ((System_Collections_Generic_List_object__o *)pSVar2,startIndex,
                          (MethodInfo_92B830 *)
                          MethodInfo_System_Collections_Generic_List_CustomLogicToken_get_Item);
      if ((pCVar4 != (CustomLogic_CustomLogicToken_o *)0x0) && ((pCVar4->fields).Type == 0)) {
        pIVar8 = (pCVar4->fields).Value;
        if (pIVar8 == (Il2CppObject *)0x0) goto label_1820e72e9;
        if ((pIVar8->klass->_1).element_class != (g_data_184354e08->_1).element_class) {
          il2cpp_codegen_raise_invalid_cast_exception(pIVar8,g_data_184354e08);
        }
        piVar5 = il2cpp_object_unbox(pIVar8);
        if (*piVar5 == 0x21) goto label_1820e6f7e;
      }
    }
    else {
      pIVar8 = (pCVar4->fields).Value;
      if (pIVar8 == (Il2CppObject *)0x0) goto label_1820e72e9;
      if ((pIVar8->klass->_1).element_class != (g_data_184354e08->_1).element_class) {
        il2cpp_codegen_raise_invalid_cast_exception(pIVar8,g_data_184354e08);
      }
      piVar5 = il2cpp_object_unbox(pIVar8);
      if (*piVar5 != 0x22) goto label_1820e6f1d;
label_1820e6f7e:
      pSVar2 = (__this->fields)._tokens;
      if ((pSVar2 == (System_Collections_Generic_List_CustomLogicToken__o *)0x0) ||
         (pCVar4 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                             ((System_Collections_Generic_List_object__o *)pSVar2,endIndex,
                              (MethodInfo_92B830 *)
                              MethodInfo_System_Collections_Generic_List_CustomLogicToken_get_Item),
         pCVar4 == (CustomLogic_CustomLogicToken_o *)0x0)) goto label_1820e72e9;
      if ((pCVar4->fields).Type == 1) {
        pSVar2 = (__this->fields)._tokens;
        if ((pSVar2 == (System_Collections_Generic_List_CustomLogicToken__o *)0x0) ||
           (pCVar4 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                               ((System_Collections_Generic_List_object__o *)pSVar2,endIndex,
                                (MethodInfo_92B830 *)
                                MethodInfo_System_Collections_Generic_List_CustomLogicToken_get_Item),
           pCVar4 == (CustomLogic_CustomLogicToken_o *)0x0)) goto label_1820e72e9;
        pIVar8 = (pCVar4->fields).Value;
        if (pIVar8 != (Il2CppObject *)0x0) {
          pIVar6 = (Il2CppObject *)0x0;
          if (pIVar8->klass == g_data_184354e08) {
            pIVar6 = pIVar8;
          }
          if (pIVar6 != (Il2CppObject *)0x0) {
            if ((pIVar8->klass->_1).element_class != (g_data_184354e08->_1).element_class) {
              il2cpp_codegen_raise_invalid_cast_exception();
            }
            puVar7 = il2cpp_object_unbox(pIVar8);
            pSVar2 = (__this->fields)._tokens;
            if (pSVar2 == (System_Collections_Generic_List_CustomLogicToken__o *)0x0) goto label_1820e72e9;
            uVar1 = *puVar7;
            pCVar4 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                               ((System_Collections_Generic_List_object__o *)pSVar2,startIndex,
                                (MethodInfo_92B830 *)
                                MethodInfo_System_Collections_Generic_List_CustomLogicToken_get_Item);
            if ((pCVar4 == (CustomLogic_CustomLogicToken_o *)0x0) || ((pCVar4->fields).Type != 0)) {
              bVar14 = false;
            }
            else {
              pIVar8 = (pCVar4->fields).Value;
              if (pIVar8 == (Il2CppObject *)0x0) goto label_1820e72e9;
              if ((pIVar8->klass->_1).element_class != (g_data_184354e08->_1).element_class) {
                il2cpp_codegen_raise_invalid_cast_exception(pIVar8,g_data_184354e08);
              }
              piVar5 = il2cpp_object_unbox(pIVar8);
              bVar14 = *piVar5 == 0x22;
            }
            pIVar11 = g_data_184354e08;
            local_res10[0] = -uVar1;
            if (!bVar14) {
              local_res10[0] = uVar1;
            }
label_1820e7098:
            pIVar8 = il2cpp_value_box(pIVar11,local_res10);
            return pIVar8;
          }
          pIVar6 = (Il2CppObject *)0x0;
          if (pIVar8->klass == g_data_184354e38) {
            pIVar6 = pIVar8;
          }
          if (pIVar6 != (Il2CppObject *)0x0) {
            if ((pIVar8->klass->_1).element_class != (g_data_184354e38->_1).element_class) {
              il2cpp_codegen_raise_invalid_cast_exception(pIVar8,g_data_184354e38);
            }
            puVar7 = il2cpp_object_unbox(pIVar8);
            pSVar2 = (__this->fields)._tokens;
            if (pSVar2 == (System_Collections_Generic_List_CustomLogicToken__o *)0x0) goto label_1820e72e9;
            uVar1 = *puVar7;
            pCVar4 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                               ((System_Collections_Generic_List_object__o *)pSVar2,startIndex,
                                (MethodInfo_92B830 *)
                                MethodInfo_System_Collections_Generic_List_CustomLogicToken_get_Item);
            pIVar11 = g_data_184354e38;
            local_res10[0] = uVar1;
            if ((pCVar4 != (CustomLogic_CustomLogicToken_o *)0x0) && ((pCVar4->fields).Type == 0)) {
              pIVar8 = (pCVar4->fields).Value;
              if (pIVar8 == (Il2CppObject *)0x0) goto label_1820e72e9;
              if ((pIVar8->klass->_1).element_class != (g_data_184354e08->_1).element_class) {
                il2cpp_codegen_raise_invalid_cast_exception(pIVar8,g_data_184354e08);
              }
              piVar5 = il2cpp_object_unbox(pIVar8);
              pIVar11 = g_data_184354e38;
              if (*piVar5 == 0x22) {
                local_res10[0] = uVar1 ^ 0x80000000;
              }
            }
            goto label_1820e7098;
          }
        }
      }
    }
  }
  pSVar2 = (__this->fields)._tokens;
  if (startIndex != endIndex) {
    NullCheck(pSVar2);
    method_00 = (MethodInfo_92B830 *)
                il2cpp_codegen_get_runtime_metadata
                          (&MethodInfo_System_Collections_Generic_List_CustomLogicToken_get_Item);
    pIVar8 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                       ((System_Collections_Generic_List_object__o *)pSVar2,startIndex,method_00);
    NullCheck(pIVar8);
    iVar3 = il2cpp_runtime_helper_180001e60(*(undefined4 *)&pIVar8[2].klass,1);
    pSVar9 = CustomLogic_CustomLogicParser__GetLineNumberString(__this,iVar3,(MethodInfo *)0x0);
    pSVar10 = il2cpp_codegen_get_runtime_metadata(&"Decorator parameters must be literal values at line ");
    pSVar9 = System_String__Concat_1969e50(pSVar10,pSVar9,(MethodInfo *)0x0);
    pIVar11 = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
    pSVar12 = (System_Exception_o *)il2cpp_codegen_object_new(pIVar11);
    System_Exception___ctor_1b6abf0(pSVar12,pSVar9,(MethodInfo *)0x0);
    pMVar13 = il2cpp_codegen_get_runtime_metadata
                        (&MethodInfo_CustomLogic_CustomLogicParser_ParseDecoratorParameter);
    il2cpp_codegen_raise_exception((Il2CppObject *)pSVar12,pMVar13);
  }
  if ((pSVar2 != (System_Collections_Generic_List_CustomLogicToken__o *)0x0) &&
     (pCVar4 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                         ((System_Collections_Generic_List_object__o *)pSVar2,startIndex,
                          (MethodInfo_92B830 *)
                          MethodInfo_System_Collections_Generic_List_CustomLogicToken_get_Item),
     pCVar4 != (CustomLogic_CustomLogicToken_o *)0x0)) {
    if (((pCVar4->fields).Type != 1) && ((pCVar4->fields).Type != 2)) {
      NullCheck(pCVar4);
      iVar3 = il2cpp_runtime_helper_180001e60((pCVar4->fields).Line,1);
      pSVar9 = CustomLogic_CustomLogicParser__GetLineNumberString(__this,iVar3,(MethodInfo *)0x0);
      pSVar10 = il2cpp_codegen_get_runtime_metadata(&"Invalid decorator parameter at line ");
      pSVar9 = System_String__Concat_1969e50(pSVar10,pSVar9,(MethodInfo *)0x0);
      pIVar11 = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
      pSVar12 = (System_Exception_o *)il2cpp_codegen_object_new(pIVar11);
      System_Exception___ctor_1b6abf0(pSVar12,pSVar9,(MethodInfo *)0x0);
      pMVar13 = il2cpp_codegen_get_runtime_metadata
                          (&MethodInfo_CustomLogic_CustomLogicParser_ParseDecoratorParameter);
      il2cpp_codegen_raise_exception((Il2CppObject *)pSVar12,pMVar13);
    }
    return (pCVar4->fields).Value;
  }
label_1820e72e9:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicParser$$FindLowestBinop
// il2cpp: int32_t CustomLogic_CustomLogicParser__FindLowestBinop (CustomLogic_CustomLogicParser_o* __this, int32_t startIndex, int32_t endIndex, const MethodInfo* method);
// 0x1820e4e90
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1820e4f08: nop dword ptr [rax + rax]

int32_t CustomLogic_CustomLogicParser__FindLowestBinop
                  (CustomLogic_CustomLogicParser_o *__this,int32_t startIndex,int32_t endIndex,
                  MethodInfo *method)

{
  System_Collections_Generic_List_CustomLogicToken__o *pSVar1;
  Il2CppObject *pIVar2;
  System_Collections_Generic_Dictionary_int__LayerMask__o *__this_00;
  MethodInfo *method_00;
  bool bVar3;
  UnityEngine_LayerMask_o UVar4;
  CustomLogic_CustomLogicToken_o *token;
  int *piVar5;
  CustomLogic_CustomLogicToken_o *pCVar6;
  int32_t *piVar7;
  int index;
  int iVar8;
  UnityEngine_LayerMask_o UVar9;
  int iVar10;
  
  if (Il2CppMethodInitialized_1843469cb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicSymbols);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_int_get_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_CustomLogicToken_get_Item);
    Il2CppMethodInitialized_1843469cb = '\x01';
  }
  iVar8 = 0;
  iVar10 = -1;
  UVar9.fields.m_Mask = (UnityEngine_LayerMask_Fields)0x7fffffff;
  index = startIndex;
  do {
    if (endIndex <= index) {
      return iVar10;
    }
    pSVar1 = (__this->fields)._tokens;
    if (pSVar1 == (System_Collections_Generic_List_CustomLogicToken__o *)0x0) goto label_1820e515d;
    token = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                      ((System_Collections_Generic_List_object__o *)pSVar1,index,
                       (MethodInfo_92B830 *)
                       MethodInfo_System_Collections_Generic_List_CustomLogicToken_get_Item);
    if (token != (CustomLogic_CustomLogicToken_o *)0x0) {
      if ((token->fields).Type == 0) {
        pIVar2 = (token->fields).Value;
        if (pIVar2 == (Il2CppObject *)0x0) goto label_1820e515d;
        if ((pIVar2->klass->_1).element_class != *(Il2CppClass **)(g_data_184354e08 + 0x40)) {
          il2cpp_codegen_raise_invalid_cast_exception(pIVar2,g_data_184354e08);
        }
        piVar5 = il2cpp_object_unbox(pIVar2);
        if (*piVar5 == 0xb) {
          iVar8 = iVar8 + 1;
        }
        else if (token != (CustomLogic_CustomLogicToken_o *)0x0) goto label_1820e4f71;
      }
      else {
label_1820e4f71:
        if ((token->fields).Type == 0) {
          pIVar2 = (token->fields).Value;
          if (pIVar2 == (Il2CppObject *)0x0) goto label_1820e515d;
          if ((pIVar2->klass->_1).element_class != *(Il2CppClass **)(g_data_184354e08 + 0x40)) {
            il2cpp_codegen_raise_invalid_cast_exception(pIVar2,g_data_184354e08);
          }
          piVar5 = il2cpp_object_unbox(pIVar2);
          if (*piVar5 == 0xc) {
            iVar8 = iVar8 + -1;
          }
        }
      }
    }
    if (iVar8 < 1) {
      if ((token != (CustomLogic_CustomLogicToken_o *)0x0) && ((token->fields).Type == 0)) {
        pIVar2 = (token->fields).Value;
        if (pIVar2 == (Il2CppObject *)0x0) goto label_1820e515d;
        if ((pIVar2->klass->_1).element_class != *(Il2CppClass **)(g_data_184354e08 + 0x40)) {
          il2cpp_codegen_raise_invalid_cast_exception(pIVar2,g_data_184354e08);
        }
        piVar5 = il2cpp_object_unbox(pIVar2);
        if (*piVar5 == 0x22) {
label_1820e5034:
          if (index == startIndex) goto label_1820e512a;
          pSVar1 = (__this->fields)._tokens;
          if ((pSVar1 == (System_Collections_Generic_List_CustomLogicToken__o *)0x0) ||
             (pCVar6 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                                 ((System_Collections_Generic_List_object__o *)pSVar1,index + -1,
                                  (MethodInfo_92B830 *)
                                  MethodInfo_System_Collections_Generic_List_CustomLogicToken_get_Item),
             pCVar6 == (CustomLogic_CustomLogicToken_o *)0x0)) goto label_1820e515d;
          if ((pCVar6->fields).Type == 0) {
            pIVar2 = (pCVar6->fields).Value;
            if (pIVar2 == (Il2CppObject *)0x0) goto label_1820e515d;
            if ((pIVar2->klass->_1).element_class != *(Il2CppClass **)(g_data_184354e08 + 0x40)) {
              il2cpp_codegen_raise_invalid_cast_exception(pIVar2,g_data_184354e08);
            }
            piVar5 = il2cpp_object_unbox(pIVar2);
            if (*piVar5 != 0xc) goto label_1820e512a;
          }
        }
        else if ((token != (CustomLogic_CustomLogicToken_o *)0x0) && ((token->fields).Type == 0)) {
          pIVar2 = (token->fields).Value;
          if (pIVar2 == (Il2CppObject *)0x0) goto label_1820e515d;
          if ((pIVar2->klass->_1).element_class != *(Il2CppClass **)(g_data_184354e08 + 0x40)) {
            il2cpp_codegen_raise_invalid_cast_exception(pIVar2,g_data_184354e08);
          }
          piVar5 = il2cpp_object_unbox(pIVar2);
          if (*piVar5 == 0x21) goto label_1820e5034;
        }
      }
      bVar3 = CustomLogic_CustomLogicParser__IsSymbolBinop(__this,token,(MethodInfo *)0x0);
      if (bVar3) {
        if ((TypeInfo_CustomLogic_CustomLogicSymbols->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicSymbols);
        }
        method_00 = MethodInfo_System_Collections_Generic_Dictionary_int_int_get_Item;
        if (((token == (CustomLogic_CustomLogicToken_o *)0x0) ||
            (__this_00 = (System_Collections_Generic_Dictionary_int__LayerMask__o *)
                         TypeInfo_CustomLogic_CustomLogicSymbols->static_fields->BinopSymbolPriorities,
            __this_00 == (System_Collections_Generic_Dictionary_int__LayerMask__o *)0x0)) ||
           (pIVar2 = (token->fields).Value, pIVar2 == (Il2CppObject *)0x0)) {
label_1820e515d:
          ThrowNullReferenceException();
        }
        if ((pIVar2->klass->_1).element_class != *(Il2CppClass **)(g_data_184354e08 + 0x40)) {
          il2cpp_codegen_raise_invalid_cast_exception(pIVar2,g_data_184354e08);
        }
        piVar7 = il2cpp_object_unbox(pIVar2);
        UVar4 = System_Collections_Generic_Dictionary_int__LayerMask___get_Item
                          (__this_00,*piVar7,(MethodInfo_14157A0 *)method_00);
        if ((int)UVar4.fields.m_Mask <= (int)UVar9.fields.m_Mask) {
          UVar9 = UVar4;
          iVar10 = index;
        }
      }
    }
label_1820e512a:
    index = index + 1;
  } while( true );
}


// CustomLogic.CustomLogicParser$$FindCommas
// il2cpp: System_Int32_array* CustomLogic_CustomLogicParser__FindCommas (CustomLogic_CustomLogicParser_o* __this, int32_t startIndex, int32_t endIndex, const MethodInfo* method);
// 0x1820e4ca0
// asm: 6 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1820e4d3b: nop dword ptr [rax + rax]
// asm:   0x1820e4d69: mov ebp, ebx
// asm:   0x1820e4d6b: jmp 0x1820e4da4
// asm:   0x1820e4da0: mov ebx, ecx
// asm:   0x1820e4da2: mov ebp, ecx
// asm:   0x1820e4ddd: jmp 0x1820e4de4

System_Int32_array *
CustomLogic_CustomLogicParser__FindCommas
          (CustomLogic_CustomLogicParser_o *__this,int32_t startIndex,int32_t endIndex,MethodInfo *method)

{
  System_Collections_Generic_List_CustomLogicToken__o *__this_00;
  Il2CppObject *pIVar1;
  System_Collections_Generic_List_T__o *__this_01;
  CustomLogic_CustomLogicToken_o *pCVar2;
  int *piVar3;
  UnityEngine_Rendering_RenderGraphModule_RenderGraph_DebugData_PassData_NRPInfo_NativeRenderPassInfo_PassCompatibilityInfo_array
  *pUVar4;
  int iVar5;
  int iVar6;
  
  if (Il2CppMethodInitialized_1843469cc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_ToArray);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_CustomLogicToken_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_int);
    Il2CppMethodInitialized_1843469cc = '\x01';
  }
  __this_01 = (System_Collections_Generic_List_T__o *)
              il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_int);
  System_Collections_Generic_List_int____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)__this_01,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_int_ctor);
  iVar5 = 0;
  for (; startIndex < endIndex; startIndex = startIndex + 1) {
    __this_00 = (__this->fields)._tokens;
    if (__this_00 == (System_Collections_Generic_List_CustomLogicToken__o *)0x0) goto label_1820e4e68;
    pCVar2 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                       ((System_Collections_Generic_List_object__o *)__this_00,startIndex,
                        (MethodInfo_92B830 *)
                        MethodInfo_System_Collections_Generic_List_CustomLogicToken_get_Item);
    if (pCVar2 == (CustomLogic_CustomLogicToken_o *)0x0) {
label_1820e4ddf:
      iVar6 = iVar5;
      if (pCVar2 != (CustomLogic_CustomLogicToken_o *)0x0) goto label_1820e4de4;
    }
    else {
      iVar6 = iVar5;
      if ((pCVar2->fields).Type == 0) {
        pIVar1 = (pCVar2->fields).Value;
        if (pIVar1 == (Il2CppObject *)0x0) goto label_1820e4e68;
        if ((pIVar1->klass->_1).element_class != *(Il2CppClass **)(g_data_184354e08 + 0x40)) {
          il2cpp_codegen_raise_invalid_cast_exception(pIVar1,g_data_184354e08);
        }
        piVar3 = il2cpp_object_unbox(pIVar1);
        iVar6 = iVar5 + 1;
        if (*piVar3 != 0xb) {
          iVar6 = iVar5;
        }
      }
      iVar5 = iVar6;
      if ((pCVar2->fields).Type != 0) goto label_1820e4ddf;
      pIVar1 = (pCVar2->fields).Value;
      if (pIVar1 == (Il2CppObject *)0x0) goto label_1820e4e68;
      if ((pIVar1->klass->_1).element_class != *(Il2CppClass **)(g_data_184354e08 + 0x40)) {
        il2cpp_codegen_raise_invalid_cast_exception(pIVar1,g_data_184354e08);
      }
      piVar3 = il2cpp_object_unbox(pIVar1);
      iVar6 = iVar5 + -1;
      if (*piVar3 != 0xc) {
        iVar6 = iVar5;
      }
label_1820e4de4:
      iVar5 = iVar6;
      if ((pCVar2->fields).Type == 0) {
        pIVar1 = (pCVar2->fields).Value;
        if (pIVar1 == (Il2CppObject *)0x0) goto label_1820e4e68;
        if ((pIVar1->klass->_1).element_class != *(Il2CppClass **)(g_data_184354e08 + 0x40)) {
          il2cpp_codegen_raise_invalid_cast_exception(pIVar1,g_data_184354e08);
        }
        piVar3 = il2cpp_object_unbox(pIVar1);
        if ((*piVar3 == 0x28) && (iVar6 == 0)) {
          if (__this_01 == (System_Collections_Generic_List_T__o *)0x0) goto label_1820e4e68;
          il2cpp_runtime_helper_180026690(__this_01,startIndex,MethodInfo_System_Collections_Generic_List_int_Add);
        }
      }
    }
  }
  if (__this_01 != (System_Collections_Generic_List_T__o *)0x0) {
    pUVar4 = System_Collections_Generic_List_int___ToArray
                       (__this_01,(MethodInfo_929FE0 *)MethodInfo_System_Collections_Generic_List_int_ToArray)
    ;
    return (System_Int32_array *)pUVar4;
  }
label_1820e4e68:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicParser$$FindClosingParen
// il2cpp: int32_t CustomLogic_CustomLogicParser__FindClosingParen (CustomLogic_CustomLogicParser_o* __this, int32_t startIndex, const MethodInfo* method);
// 0x1820e4b60
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1820e4c53: jmp 0x1820e4bb2
// asm:   0x1820e4c5c: mov eax, esi

int32_t CustomLogic_CustomLogicParser__FindClosingParen
                  (CustomLogic_CustomLogicParser_o *__this,int32_t startIndex,MethodInfo *method)

{
  System_Collections_Generic_List_CustomLogicToken__o *pSVar1;
  Il2CppObject *pIVar2;
  CustomLogic_CustomLogicToken_o *pCVar3;
  int *piVar4;
  int iVar5;
  
  if (Il2CppMethodInitialized_1843469cd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_CustomLogicToken_get_Count);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_CustomLogicToken_get_Item);
    Il2CppMethodInitialized_1843469cd = '\x01';
  }
  iVar5 = 0;
  pSVar1 = (__this->fields)._tokens;
  while (pSVar1 != (System_Collections_Generic_List_CustomLogicToken__o *)0x0) {
    if ((pSVar1->fields)._size <= startIndex) {
      return -1;
    }
    pSVar1 = (__this->fields)._tokens;
    if (pSVar1 == (System_Collections_Generic_List_CustomLogicToken__o *)0x0) break;
    pCVar3 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                       ((System_Collections_Generic_List_object__o *)pSVar1,startIndex,
                        (MethodInfo_92B830 *)
                        MethodInfo_System_Collections_Generic_List_CustomLogicToken_get_Item);
    if (pCVar3 != (CustomLogic_CustomLogicToken_o *)0x0) {
      if ((pCVar3->fields).Type == 0) {
        pIVar2 = (pCVar3->fields).Value;
        if (pIVar2 == (Il2CppObject *)0x0) break;
        if ((pIVar2->klass->_1).element_class != *(Il2CppClass **)(g_data_184354e08 + 0x40)) {
          il2cpp_codegen_raise_invalid_cast_exception(pIVar2,g_data_184354e08);
        }
        piVar4 = il2cpp_object_unbox(pIVar2);
        if (*piVar4 == 0xb) {
          iVar5 = iVar5 + 1;
        }
        else if (pCVar3 != (CustomLogic_CustomLogicToken_o *)0x0) goto label_1820e4c14;
      }
      else {
label_1820e4c14:
        if ((pCVar3->fields).Type == 0) {
          pIVar2 = (pCVar3->fields).Value;
          if (pIVar2 == (Il2CppObject *)0x0) break;
          if ((pIVar2->klass->_1).element_class != *(Il2CppClass **)(g_data_184354e08 + 0x40)) {
            il2cpp_codegen_raise_invalid_cast_exception(pIVar2,g_data_184354e08);
          }
          piVar4 = il2cpp_object_unbox(pIVar2);
          if ((*piVar4 == 0xc) && (iVar5 = iVar5 + -1, iVar5 == 0)) {
            return startIndex;
          }
        }
      }
    }
    startIndex = startIndex + 1;
    pSVar1 = (__this->fields)._tokens;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicParser$$FindSemicolon
// il2cpp: int32_t CustomLogic_CustomLogicParser__FindSemicolon (CustomLogic_CustomLogicParser_o* __this, int32_t startIndex, const MethodInfo* method);
// 0x1820e51a0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1820e523d: jmp 0x1820e51e2

int32_t CustomLogic_CustomLogicParser__FindSemicolon
                  (CustomLogic_CustomLogicParser_o *__this,int32_t startIndex,MethodInfo *method)

{
  System_Collections_Generic_List_CustomLogicToken__o *pSVar1;
  Il2CppObject *obj;
  CustomLogic_CustomLogicToken_o *pCVar2;
  int *piVar3;
  
  if (Il2CppMethodInitialized_1843469ce == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_CustomLogicToken_get_Count);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_CustomLogicToken_get_Item);
    Il2CppMethodInitialized_1843469ce = '\x01';
  }
  pSVar1 = (__this->fields)._tokens;
  while (pSVar1 != (System_Collections_Generic_List_CustomLogicToken__o *)0x0) {
    if ((pSVar1->fields)._size <= startIndex) {
      return -1;
    }
    pSVar1 = (__this->fields)._tokens;
    if (pSVar1 == (System_Collections_Generic_List_CustomLogicToken__o *)0x0) break;
    pCVar2 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                       ((System_Collections_Generic_List_object__o *)pSVar1,startIndex,
                        (MethodInfo_92B830 *)
                        MethodInfo_System_Collections_Generic_List_CustomLogicToken_get_Item);
    if ((pCVar2 != (CustomLogic_CustomLogicToken_o *)0x0) && ((pCVar2->fields).Type == 0)) {
      obj = (pCVar2->fields).Value;
      if (obj == (Il2CppObject *)0x0) break;
      if ((obj->klass->_1).element_class != *(Il2CppClass **)(g_data_184354e08 + 0x40)) {
        il2cpp_codegen_raise_invalid_cast_exception(obj,g_data_184354e08);
      }
      piVar3 = il2cpp_object_unbox(obj);
      if (*piVar3 == 0x26) {
        return startIndex;
      }
    }
    startIndex = startIndex + 1;
    pSVar1 = (__this->fields)._tokens;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicParser$$IsSymbolIn
// il2cpp: bool CustomLogic_CustomLogicParser__IsSymbolIn (CustomLogic_CustomLogicParser_o* __this, CustomLogic_CustomLogicToken_o* token, System_Collections_Generic_HashSet_int__o* symbols, const MethodInfo* method);
// 0x1820e56a0

bool CustomLogic_CustomLogicParser__IsSymbolIn
               (CustomLogic_CustomLogicParser_o *__this,CustomLogic_CustomLogicToken_o *token,
               System_Collections_Generic_HashSet_int__o *symbols,MethodInfo *method)

{
  Il2CppObject *obj;
  MethodInfo *method_00;
  bool bVar1;
  int32_t *piVar2;
  
  if (Il2CppMethodInitialized_1843469cf == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_int_Contains);
    Il2CppMethodInitialized_1843469cf = '\x01';
  }
  method_00 = MethodInfo_System_Collections_Generic_HashSet_int_Contains;
  if ((token != (CustomLogic_CustomLogicToken_o *)0x0) && ((token->fields).Type == 0)) {
    if ((symbols != (System_Collections_Generic_HashSet_int__o *)0x0) &&
       (obj = (token->fields).Value, obj != (Il2CppObject *)0x0)) {
      if ((obj->klass->_1).element_class == *(Il2CppClass **)(g_data_184354e08 + 0x40)) {
        piVar2 = il2cpp_object_unbox(obj);
        bVar1 = System_Collections_Generic_HashSet_Int32Enum___Contains
                          ((System_Collections_Generic_HashSet_T__o *)symbols,*piVar2,
                           (MethodInfo_1759C90 *)method_00);
        return bVar1;
      }
      il2cpp_codegen_raise_invalid_cast_exception(obj,g_data_184354e08);
    }
    ThrowNullReferenceException();
  }
  return false;
}


// CustomLogic.CustomLogicParser$$IsSymbolBinop
// il2cpp: bool CustomLogic_CustomLogicParser__IsSymbolBinop (CustomLogic_CustomLogicParser_o* __this, CustomLogic_CustomLogicToken_o* token, const MethodInfo* method);
// 0x1820e55d0

bool CustomLogic_CustomLogicParser__IsSymbolBinop
               (CustomLogic_CustomLogicParser_o *__this,CustomLogic_CustomLogicToken_o *token,
               MethodInfo *method)

{
  System_Collections_Generic_Dictionary_int__float__o *__this_00;
  Il2CppObject *obj;
  MethodInfo *method_00;
  bool bVar1;
  int32_t *piVar2;
  
  if (Il2CppMethodInitialized_1843469d0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicSymbols);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_int_ContainsKey);
    Il2CppMethodInitialized_1843469d0 = '\x01';
  }
  if ((token == (CustomLogic_CustomLogicToken_o *)0x0) || ((token->fields).Type != 0)) {
    return false;
  }
  if ((TypeInfo_CustomLogic_CustomLogicSymbols->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicSymbols);
  }
  method_00 = MethodInfo_System_Collections_Generic_Dictionary_int_int_ContainsKey;
  __this_00 = (System_Collections_Generic_Dictionary_int__float__o *)
              TypeInfo_CustomLogic_CustomLogicSymbols->static_fields->BinopSymbolPriorities;
  if ((__this_00 != (System_Collections_Generic_Dictionary_int__float__o *)0x0) &&
     (obj = (token->fields).Value, obj != (Il2CppObject *)0x0)) {
    if ((obj->klass->_1).element_class == *(Il2CppClass **)(g_data_184354e08 + 0x40)) {
      piVar2 = il2cpp_object_unbox(obj);
      bVar1 = System_Collections_Generic_Dictionary_int__float___ContainsKey
                        (__this_00,*piVar2,(MethodInfo_14070E0 *)method_00);
      return bVar1;
    }
    il2cpp_codegen_raise_invalid_cast_exception(obj,g_data_184354e08);
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicParser$$IsSymbolValue
// il2cpp: bool CustomLogic_CustomLogicParser__IsSymbolValue (CustomLogic_CustomLogicParser_o* __this, CustomLogic_CustomLogicToken_o* token, int32_t symbolValue, const MethodInfo* method);
// 0x1820e5740

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
  if ((obj->klass->_1).element_class == *(Il2CppClass **)(g_data_184354e08 + 0x40)) {
    piVar1 = il2cpp_object_unbox(obj);
    return *piVar1 == symbolValue;
  }
  il2cpp_codegen_raise_invalid_cast_exception(obj,g_data_184354e08);
}


// CustomLogic.CustomLogicParser$$IsAnySymbolValue
// il2cpp: bool CustomLogic_CustomLogicParser__IsAnySymbolValue (CustomLogic_CustomLogicParser_o* __this, CustomLogic_CustomLogicToken_o* token, System_Int32_array* symbolValues, const MethodInfo* method);
// 0x1820e5540

bool CustomLogic_CustomLogicParser__IsAnySymbolValue
               (CustomLogic_CustomLogicParser_o *__this,CustomLogic_CustomLogicToken_o *token,
               System_Int32_array *symbolValues,MethodInfo *method)

{
  int iVar1;
  Il2CppObject *obj;
  int *piVar2;
  uint uVar3;
  
  if (symbolValues != (System_Int32_array *)0x0) {
    uVar3 = 0;
    do {
      if ((int)symbolValues->max_length <= (int)uVar3) {
        return false;
      }
      if ((uint)symbolValues->max_length <= uVar3) {
        ThrowIndexOutOfRangeException();
      }
      if ((token != (CustomLogic_CustomLogicToken_o *)0x0) && ((token->fields).Type == 0)) {
        obj = (token->fields).Value;
        if (obj == (Il2CppObject *)0x0) break;
        if ((obj->klass->_1).element_class != *(Il2CppClass **)(g_data_184354e08 + 0x40)) {
          il2cpp_codegen_raise_invalid_cast_exception(obj,g_data_184354e08);
        }
        iVar1 = symbolValues->m_Items[(int)uVar3];
        piVar2 = il2cpp_object_unbox(obj);
        if (*piVar2 == iVar1) {
          return true;
        }
      }
      uVar3 = uVar3 + 1;
    } while( true );
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicParser$$AssertSymbolValue
// il2cpp: void CustomLogic_CustomLogicParser__AssertSymbolValue (CustomLogic_CustomLogicParser_o* __this, CustomLogic_CustomLogicToken_o* token, int32_t symbolValue, const MethodInfo* method);
// 0x1820e47d0

void CustomLogic_CustomLogicParser__AssertSymbolValue
               (CustomLogic_CustomLogicParser_o *__this,CustomLogic_CustomLogicToken_o *token,
               int32_t symbolValue,MethodInfo *method)

{
  int *piVar1;
  Il2CppClass *pIVar2;
  System_String_array *values;
  Il2CppObject *pIVar3;
  System_String_o *pSVar4;
  void *pvVar5;
  System_Exception_o *__this_00;
  MethodInfo *lastManagedFrame;
  int32_t local_res10 [2];
  System_Enum_o local_38 [2];
  
  if ((token != (CustomLogic_CustomLogicToken_o *)0x0) && ((token->fields).Type == 0)) {
    pIVar3 = (token->fields).Value;
    if (pIVar3 == (Il2CppObject *)0x0) {
      ThrowNullReferenceException();
    }
    if ((pIVar3->klass->_1).element_class != *(Il2CppClass **)(g_data_184354e08 + 0x40)) {
      il2cpp_codegen_raise_invalid_cast_exception();
    }
    piVar1 = il2cpp_object_unbox(pIVar3);
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
  pSVar4 = CustomLogic_CustomLogicParser__GetLineNumberString(__this,(token->fields).Line,(MethodInfo *)0x0);
  NullCheck(values);
  il2cpp_codegen_array_set_ref((System_Array_o *)values,1,(Il2CppObject *)pSVar4);
  NullCheck(values);
  pIVar3 = il2cpp_codegen_get_runtime_metadata(&", got ");
  il2cpp_codegen_array_set_ref((System_Array_o *)values,2,pIVar3);
  pSVar4 = CustomLogic_CustomLogicParser__GetTokenString(__this,token,(MethodInfo *)0x0);
  NullCheck(values);
  il2cpp_codegen_array_set_ref((System_Array_o *)values,3,(Il2CppObject *)pSVar4);
  NullCheck(values);
  pIVar3 = il2cpp_codegen_get_runtime_metadata(&", expected ");
  il2cpp_codegen_array_set_ref((System_Array_o *)values,4,pIVar3);
  local_res10[0] = symbolValue;
  pvVar5 = il2cpp_codegen_get_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicSymbol);
  il2cpp_runtime_helper_180001e80(local_38,pvVar5,local_res10);
  pSVar4 = System_Enum__ToString(local_38,(MethodInfo *)0x0);
  NullCheck(values);
  il2cpp_codegen_array_set_ref((System_Array_o *)values,5,(Il2CppObject *)pSVar4);
  pSVar4 = System_String__Concat_1969830(values,(MethodInfo *)0x0);
  pIVar2 = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
  __this_00 = (System_Exception_o *)il2cpp_codegen_object_new(pIVar2);
  System_Exception___ctor_1b6abf0(__this_00,pSVar4,(MethodInfo *)0x0);
  lastManagedFrame =
       il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicParser_AssertSymbolValue);
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
}


// CustomLogic.CustomLogicParser$$AssertTokenType
// il2cpp: void CustomLogic_CustomLogicParser__AssertTokenType (CustomLogic_CustomLogicParser_o* __this, CustomLogic_CustomLogicToken_o* token, int32_t type, const MethodInfo* method);
// 0x1820e49b0

void CustomLogic_CustomLogicParser__AssertTokenType
               (CustomLogic_CustomLogicParser_o *__this,CustomLogic_CustomLogicToken_o *token,int32_t type,
               MethodInfo *method)

{
  Il2CppClass *pIVar1;
  System_String_array *values;
  Il2CppObject *pIVar2;
  System_String_o *pSVar3;
  void *pvVar4;
  System_Exception_o *__this_00;
  MethodInfo *lastManagedFrame;
  int32_t local_res18 [2];
  System_Enum_o local_28 [2];
  
  if ((token != (CustomLogic_CustomLogicToken_o *)0x0) && ((token->fields).Type == type)) {
    return;
  }
  local_res18[0] = type;
  pIVar1 = il2cpp_codegen_get_runtime_metadata(&TypeInfo_string_array);
  values = (System_String_array *)SZArrayNew(pIVar1,6);
  NullCheck(values);
  pIVar2 = il2cpp_codegen_get_runtime_metadata(&"Parsing error at line ");
  il2cpp_codegen_array_set_ref((System_Array_o *)values,0,pIVar2);
  NullCheck(token);
  pSVar3 = CustomLogic_CustomLogicParser__GetLineNumberString(__this,(token->fields).Line,(MethodInfo *)0x0);
  NullCheck(values);
  il2cpp_codegen_array_set_ref((System_Array_o *)values,1,(Il2CppObject *)pSVar3);
  NullCheck(values);
  pIVar2 = il2cpp_codegen_get_runtime_metadata(&", got ");
  il2cpp_codegen_array_set_ref((System_Array_o *)values,2,pIVar2);
  pSVar3 = CustomLogic_CustomLogicParser__GetTokenString(__this,token,(MethodInfo *)0x0);
  NullCheck(values);
  il2cpp_codegen_array_set_ref((System_Array_o *)values,3,(Il2CppObject *)pSVar3);
  NullCheck(values);
  pIVar2 = il2cpp_codegen_get_runtime_metadata(&", expected ");
  il2cpp_codegen_array_set_ref((System_Array_o *)values,4,pIVar2);
  pvVar4 = il2cpp_codegen_get_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicTokenType);
  il2cpp_runtime_helper_180001e80(local_28,pvVar4,local_res18);
  pSVar3 = System_Enum__ToString(local_28,(MethodInfo *)0x0);
  NullCheck(values);
  il2cpp_codegen_array_set_ref((System_Array_o *)values,5,(Il2CppObject *)pSVar3);
  pSVar3 = System_String__Concat_1969830(values,(MethodInfo *)0x0);
  pIVar1 = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
  __this_00 = (System_Exception_o *)il2cpp_codegen_object_new(pIVar1);
  System_Exception___ctor_1b6abf0(__this_00,pSVar3,(MethodInfo *)0x0);
  lastManagedFrame =
       il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicParser_AssertTokenType);
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
}


// CustomLogic.CustomLogicParser$$AssertFalse
// il2cpp: void CustomLogic_CustomLogicParser__AssertFalse (CustomLogic_CustomLogicParser_o* __this, CustomLogic_CustomLogicToken_o* token, const MethodInfo* method);
// 0x1820e4710

void CustomLogic_CustomLogicParser__AssertFalse
               (CustomLogic_CustomLogicParser_o *__this,CustomLogic_CustomLogicToken_o *token,
               MethodInfo *method)

{
  System_String_o *pSVar1;
  System_String_o *str3;
  System_String_o *str2;
  System_String_o *str0;
  Il2CppClass *klass;
  System_Exception_o *__this_00;
  MethodInfo *lastManagedFrame;
  
  NullCheck(token);
  pSVar1 = CustomLogic_CustomLogicParser__GetLineNumberString(__this,(token->fields).Line,(MethodInfo *)0x0);
  str3 = CustomLogic_CustomLogicParser__GetTokenString(__this,token,(MethodInfo *)0x0);
  str2 = il2cpp_codegen_get_runtime_metadata(&", got ");
  str0 = il2cpp_codegen_get_runtime_metadata(&"Parsing error at line ");
  pSVar1 = System_String__Concat_1969590(str0,pSVar1,str2,str3,(MethodInfo *)0x0);
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
  __this_00 = (System_Exception_o *)il2cpp_codegen_object_new(klass);
  System_Exception___ctor_1b6abf0(__this_00,pSVar1,(MethodInfo *)0x0);
  lastManagedFrame =
       il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicParser_AssertFalse);
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
}


// CustomLogic.CustomLogicParser$$GetTokenString
// il2cpp: System_String_o* CustomLogic_CustomLogicParser__GetTokenString (CustomLogic_CustomLogicParser_o* __this, CustomLogic_CustomLogicToken_o* token, const MethodInfo* method);
// 0x1820e5470

System_String_o *
CustomLogic_CustomLogicParser__GetTokenString
          (CustomLogic_CustomLogicParser_o *__this,CustomLogic_CustomLogicToken_o *token,MethodInfo *method)

{
  Il2CppObject *obj;
  System_String_o *pSVar1;
  undefined4 *puVar2;
  System_Enum_o local_28;
  undefined4 local_18;
  
  if (Il2CppMethodInitialized_1843469d1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicSymbol);
    il2cpp_codegen_initialize_runtime_metadata(&"null");
    Il2CppMethodInitialized_1843469d1 = '\x01';
  }
  if (token == (CustomLogic_CustomLogicToken_o *)0x0) {
    return "null";
  }
  obj = (token->fields).Value;
  if ((token->fields).Type != 0) {
    if (obj != (Il2CppObject *)0x0) {
      pSVar1 = (System_String_o *)(*obj->klass->vtable[3].methodPtr)(obj,obj->klass->vtable[3].method);
      return pSVar1;
    }
    ThrowNullReferenceException();
  }
  if (obj == (Il2CppObject *)0x0) {
    ThrowNullReferenceException();
  }
  if ((obj->klass->_1).element_class == (TypeInfo_CustomLogic_CustomLogicSymbol->_1).element_class) {
    puVar2 = il2cpp_object_unbox(obj);
    local_18 = *puVar2;
    local_28.klass = (System_Enum_c *)TypeInfo_CustomLogic_CustomLogicSymbol;
    local_28.monitor = &g_data_ffffffffffffffff;
    pSVar1 = System_Enum__ToString(&local_28,(MethodInfo *)0x0);
    return pSVar1;
  }
  il2cpp_codegen_raise_invalid_cast_exception();
}


