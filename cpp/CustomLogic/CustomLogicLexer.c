// Type: CustomLogic.CustomLogicLexer
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicLexer.cs
// Prior real C# source (older reference): Assets/Scripts/CustomLogic/CustomLogicLexer.cs
// --------------------------------

// CustomLogic.CustomLogicLexer$$get_Compiler
// il2cpp: CustomLogic_CustomLogicCompiler_o* CustomLogic_CustomLogicLexer__get_Compiler (CustomLogic_CustomLogicLexer_o* __this, const MethodInfo* method);
// 0x5b74500

CustomLogic_CustomLogicCompiler_o *
CustomLogic_CustomLogicLexer__get_Compiler(CustomLogic_CustomLogicLexer_o *__this,MethodInfo *method)

{
  return (__this->fields)._Compiler_k__BackingField;
}


// CustomLogic.CustomLogicLexer$$set_Compiler
// il2cpp: void CustomLogic_CustomLogicLexer__set_Compiler (CustomLogic_CustomLogicLexer_o* __this, CustomLogic_CustomLogicCompiler_o* value, const MethodInfo* method);
// 0x5b74510

void CustomLogic_CustomLogicLexer__set_Compiler
               (CustomLogic_CustomLogicLexer_o *__this,CustomLogic_CustomLogicCompiler_o *value,
               MethodInfo *method)

{
  (__this->fields)._Compiler_k__BackingField = value;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._Compiler_k__BackingField);
  return;
}


// CustomLogic.CustomLogicLexer$$.ctor
// il2cpp: void CustomLogic_CustomLogicLexer___ctor (CustomLogic_CustomLogicLexer_o* __this, System_String_o* source, CustomLogic_CustomLogicCompiler_o* compiler, const MethodInfo* method);
// 0x5b74520

void CustomLogic_CustomLogicLexer___ctor
               (CustomLogic_CustomLogicLexer_o *__this,System_String_o *source,
               CustomLogic_CustomLogicCompiler_o *compiler,MethodInfo *method)

{
  System_Collections_Generic_List_CustomLogicToken__o *__this_00;
  CustomLogic_CustomLogicSymbols_c *method_00;
  
  if (Il2CppMethodInitialized_07547369 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicSymbols);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_CustomLogicToken_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_CustomLogicToken);
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_07547369 = '\x01';
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
  method_00 = TypeInfo_CustomLogic_CustomLogicSymbols;
  if ((TypeInfo_CustomLogic_CustomLogicSymbols->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicSymbols);
  }
  CustomLogic_CustomLogicSymbols__Init((MethodInfo *)method_00);
  (__this->fields)._source = source;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._source);
  (__this->fields)._Compiler_k__BackingField = compiler;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._Compiler_k__BackingField);
  return;
}


// CustomLogic.CustomLogicLexer$$GetLineNumberString
// il2cpp: System_String_o* CustomLogic_CustomLogicLexer__GetLineNumberString (CustomLogic_CustomLogicLexer_o* __this, int32_t line, const MethodInfo* method);
// 0x5b746c0

System_String_o *
CustomLogic_CustomLogicLexer__GetLineNumberString
          (CustomLogic_CustomLogicLexer_o *__this,int32_t line,MethodInfo *method)

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


// CustomLogic.CustomLogicLexer$$GetTokens
// il2cpp: System_Collections_Generic_List_CustomLogicToken__o* CustomLogic_CustomLogicLexer__GetTokens (CustomLogic_CustomLogicLexer_o* __this, const MethodInfo* method);
// 0x5b746f0
// eh: try 0x5b7483d..0x5b74e4f -> pad 0x5b74eb7 (+66 call sites) catch Il2CppExceptionWrapper, cleanup [managed catch: TypeInfo_System_Exception]
// eh: try 0x5b74ee0..0x5b75003 -> pad 0x5b75003 (+1 call sites) cleanup
// eh: try 0x5b75006..0x5b7500b -> pad 0x5b75013 catch (...) [compiler noexcept guard]
// asm: 143 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b74c7b: nop dword ptr [rax + rax]
// asm:   0x5b74e13: call 0x30d63a0  ; ThrowNullReferenceException()
// asm:   0x5b74e1d: call 0x30d63a0  ; ThrowNullReferenceException()
// asm:   0x5b74e4f: jmp 0x5b74ec9
// asm:   0x5b74e51: jmp 0x5b74ec9
// asm:   0x5b74e53: jmp 0x5b74ec9
// asm:   0x5b74e55: jmp 0x5b74ec9
// asm:   0x5b74e57: jmp 0x5b74ec9
// asm:   0x5b74e59: jmp 0x5b74ec9
// asm:   0x5b74e5b: jmp 0x5b74ec9
// asm:   0x5b74e5d: jmp 0x5b74ec9
// asm:   0x5b74e5f: jmp 0x5b74ec9
// asm:   0x5b74e61: jmp 0x5b74ec9
// asm:   0x5b74e63: jmp 0x5b74ec9
// asm:   0x5b74e65: jmp 0x5b74ec9
// asm:   0x5b74e67: jmp 0x5b74ec9
// asm:   0x5b74e69: jmp 0x5b74ec9
// asm:   0x5b74e6b: jmp 0x5b74ec9
// asm:   0x5b74e6d: jmp 0x5b74ec9
// asm:   0x5b74e6f: jmp 0x5b74ec9
// asm:   0x5b74e71: jmp 0x5b74ec9
// asm:   0x5b74e73: jmp 0x5b74ec9
// asm:   0x5b74e75: jmp 0x5b74ec9
// asm:   0x5b74e77: jmp 0x5b74ec9
// asm:   0x5b74e79: jmp 0x5b74ec9
// asm:   0x5b74e7b: jmp 0x5b74ec9
// asm:   0x5b74e7d: jmp 0x5b74ec9
// asm:   0x5b74e7f: jmp 0x5b74ec9
// asm:   0x5b74e81: jmp 0x5b74ec9
// asm:   0x5b74e83: jmp 0x5b74ec9
// asm:   0x5b74e85: jmp 0x5b74ec9
// asm:   0x5b74e87: jmp 0x5b74ec9
// asm:   0x5b74e89: jmp 0x5b74ec9
// asm:   0x5b74e8b: jmp 0x5b74ec9
// asm:   0x5b74e8d: jmp 0x5b74ec9
// asm:   0x5b74e8f: jmp 0x5b74ec9
// asm:   0x5b74e91: jmp 0x5b74ec9
// asm:   0x5b74e93: jmp 0x5b74ec9
// asm:   0x5b74e95: jmp 0x5b74ec9
// asm:   0x5b74e97: jmp 0x5b74ec9
// asm:   0x5b74e99: jmp 0x5b74ec9
// asm:   0x5b74e9b: jmp 0x5b74ec9
// asm:   0x5b74e9d: jmp 0x5b74ec9
// asm:   0x5b74e9f: jmp 0x5b74ec9
// asm:   0x5b74ea1: jmp 0x5b74ec9
// asm:   0x5b74ea3: jmp 0x5b74ec9
// asm:   0x5b74ea5: jmp 0x5b74ec9
// asm:   0x5b74ea7: jmp 0x5b74ec9
// asm:   0x5b74ea9: jmp 0x5b74ec9
// asm:   0x5b74eab: jmp 0x5b74ec9
// asm:   0x5b74ead: jmp 0x5b74ec9
// asm:   0x5b74eaf: jmp 0x5b74ec9
// asm:   0x5b74eb1: jmp 0x5b74ec9
// asm:   0x5b74eb3: jmp 0x5b74ec9
// asm:   0x5b74eb5: jmp 0x5b74ec9
// asm:   0x5b74eb7: jmp 0x5b74ec9
// asm:   0x5b74eb9: jmp 0x5b74ec9
// asm:   0x5b74ebb: jmp 0x5b74ec9
// asm:   0x5b74ebd: jmp 0x5b74ec9
// asm:   0x5b74ebf: jmp 0x5b74ec9
// asm:   0x5b74ec1: jmp 0x5b74ec9
// asm:   0x5b74ec3: jmp 0x5b74ec9
// asm:   0x5b74ec5: jmp 0x5b74ec9
// asm:   0x5b74ec7: jmp 0x5b74ec9
// asm:   0x5b74ec9: mov rbx, rax
// asm:   0x5b74ecc: cmp edx, 1
// asm:   0x5b74ecf: jne 0x5b7500b
// asm:   0x5b74ed5: mov rdi, rbx
// asm:   0x5b74ed8: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5b74edd: mov rbx, rax
// asm:   0x5b74ee0: lea rdi, [rip + 0x17031d9]  ; TypeInfo_System_Exception
// asm:   0x5b74ee7: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x5b74eec: mov rcx, qword ptr [rbx]
// asm:   0x5b74eef: mov rsi, qword ptr [rcx]
// asm:   0x5b74ef2: mov rdi, rax
// asm:   0x5b74ef5: call 0x30d6910  ; il2cpp_runtime_helper_030d6910()
// asm:   0x5b74efa: test al, al
// asm:   0x5b74efc: je 0x5b74fe2
// asm:   0x5b74f02: mov rbp, qword ptr [rbx]
// asm:   0x5b74f05: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5b74f0a: mov esi, dword ptr [r14 + 0x30]
// asm:   0x5b74f0e: inc esi
// asm:   0x5b74f10: mov rdi, r14
// asm:   0x5b74f13: call 0x5b746c0  ; CustomLogic_CustomLogicLexer__GetLineNumberString()
// asm:   0x5b74f18: test rbp, rbp
// asm:   0x5b74f1b: je 0x5b74fdd
// asm:   0x5b74f21: mov r15, rax
// asm:   0x5b74f24: mov rax, qword ptr [rbp]
// asm:   0x5b74f28: mov rsi, qword ptr [rax + 0x190]
// asm:   0x5b74f2f: mov rdi, rbp
// asm:   0x5b74f32: call qword ptr [rax + 0x188]  ; vtable slot 5
// asm:   0x5b74f38: mov rbp, rax
// asm:   0x5b74f3b: lea rdi, [rip + 0x17660b6]  ; "Error parsing custom logic at line "
// asm:   0x5b74f42: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x5b74f47: mov rbx, rax
// asm:   0x5b74f4a: lea rdi, [rip + 0x175d02f]  ; ": "
// asm:   0x5b74f51: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x5b74f56: mov rdi, rbx
// asm:   0x5b74f59: mov rsi, r15
// asm:   0x5b74f5c: mov rdx, rax
// asm:   0x5b74f5f: mov rcx, rbp
// asm:   0x5b74f62: xor r8d, r8d
// asm:   0x5b74f65: call 0x5402810  ; System_String__Concat()
// asm:   0x5b74f6a: lea rdi, [r14 + 0x28]
// asm:   0x5b74f6e: mov qword ptr [r14 + 0x28], rax
// asm:   0x5b74f72: mov rsi, rax
// asm:   0x5b74f75: call 0x30d5fb0  ; Il2CppCodeGenWriteBarrier()
// asm:   0x5b74f7a: mov rbx, qword ptr [r14 + 0x28]
// asm:   0x5b74f7e: lea rdi, [rip + 0x17026db]  ; TypeInfo_ApplicationManagers_DebugConsole
// asm:   0x5b74f85: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x5b74f8a: cmp dword ptr [rax + 0xe4], 0
// asm:   0x5b74f91: jne 0x5b74f9b
// asm:   0x5b74f93: mov rdi, rax
// asm:   0x5b74f96: call 0x30d6240  ; il2cpp_codegen_runtime_class_init()
// asm:   0x5b74f9b: mov rdi, rbx
// asm:   0x5b74f9e: mov esi, 1
// asm:   0x5b74fa3: xor edx, edx
// asm:   0x5b74fa5: call 0x5e0fa90  ; ApplicationManagers_DebugConsole__Log()
// asm:   0x5b74faa: lea rdi, [rip + 0x16fca6f]  ; TypeInfo_System_Collections_Generic_List_CustomLogicToken
// asm:   0x5b74fb1: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x5b74fb6: mov rdi, rax
// asm:   0x5b74fb9: call 0x30d6370  ; il2cpp_runtime_helper_030d6370()
// asm:   0x5b74fbe: mov rbx, rax
// asm:   0x5b74fc1: lea rdi, [rip + 0x171ef70]  ; MethodInfo_System_Collections_Generic_List_CustomLogicToken_ctor
// asm:   0x5b74fc8: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x5b74fcd: mov rdi, rbx
// asm:   0x5b74fd0: mov rsi, rax
// asm:   0x5b74fd3: call 0x3a5c910  ; System_Collections_Generic_List_object____ctor()
// asm:   0x5b74fd8: jmp 0x5b74ded
// asm:   0x5b74fe2: mov edi, 8
// asm:   0x5b74fe7: call 0x6e255b0  ; __cxa_allocate_exception()
// asm:   0x5b74fec: mov rcx, qword ptr [rbx]
// asm:   0x5b74fef: mov qword ptr [rax], rcx
// asm:   0x5b74ff2: lea rsi, [rip + 0x12b8507]
// asm:   0x5b74ff9: mov rdi, rax
// asm:   0x5b74ffc: xor edx, edx
// asm:   0x5b74ffe: call 0x6e255c0  ; __cxa_throw()
// asm:   0x5b75003: mov rbx, rax
// asm:   0x5b75006: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5b7500b: mov rdi, rbx
// asm:   0x5b7500e: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5b75013: mov rdi, rax
// asm:   0x5b75016: call 0x2ab61e0  ; __clang_call_terminate()

System_Collections_Generic_List_CustomLogicToken__o *
CustomLogic_CustomLogicLexer__GetTokens(CustomLogic_CustomLogicLexer_o *__this,MethodInfo *method)

{
  uint uVar1;
  int32_t *piVar2;
  System_Char_array **targetAddress;
  int32_t length;
  uint32_t uVar3;
  System_Collections_Generic_List_CustomLogicToken__o *pSVar4;
  System_Collections_Generic_HashSet_object__o *pSVar5;
  System_Collections_Generic_Dictionary_object__int__o *pSVar6;
  uint16_t uVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  System_Char_array *pSVar11;
  System_String_o *pSVar12;
  System_String_o *str1;
  Il2CppObject *pIVar13;
  ulong uVar14;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *method_03;
  MethodInfo *method_04;
  MethodInfo *method_05;
  MethodInfo *in_R8;
  uint startIndex;
  uint16_t local_3a;
  float local_38;
  int32_t local_34;
  
  if (Il2CppMethodInitialized_0754736a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicSymbols);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_int_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Contains)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_CustomLogicToken_Clear);
    il2cpp_codegen_initialize_runtime_metadata(&"null");
    il2cpp_codegen_initialize_runtime_metadata(&"true");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    il2cpp_codegen_initialize_runtime_metadata(&".");
    Il2CppMethodInitialized_0754736a = '\x01';
  }
  local_3a = 0;
  local_34 = 0;
  (__this->fields)._line = 0;
  pSVar4 = (__this->fields)._tokens;
  if (pSVar4 != (System_Collections_Generic_List_CustomLogicToken__o *)0x0) {
    piVar2 = &(pSVar4->fields)._version;
    *piVar2 = *piVar2 + 1;
    length = (pSVar4->fields)._size;
    (pSVar4->fields)._size = 0;
    if (0 < length) {
      System_Array__Clear((System_Array_o *)(pSVar4->fields)._items,0,length,(MethodInfo *)0x0);
    }
    pSVar12 = (__this->fields)._source;
    if (pSVar12 != (System_String_o *)0x0) {
      startIndex = 0;
      pSVar11 = System_String__ToCharArray(pSVar12,(MethodInfo *)0x0);
      targetAddress = &(__this->fields)._chars;
      (__this->fields)._chars = pSVar11;
      Il2CppCodeGenWriteBarrier(targetAddress);
      pSVar11 = (__this->fields)._chars;
      while (pSVar11 != (System_Char_array *)0x0) {
        uVar9 = (uint)pSVar11->max_length;
        if ((int)uVar9 <= (int)startIndex) {
          return (__this->fields)._tokens;
        }
        if (uVar9 <= startIndex) {
          ThrowIndexOutOfRangeException();
        }
        local_3a = pSVar11->m_Items[(int)startIndex];
        if (local_3a == 10) {
          piVar2 = &(__this->fields)._line;
          *piVar2 = *piVar2 + 1;
          goto label_05b747f4;
        }
        if ((g_data_07556750->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init(g_data_07556750);
        }
        pSVar12 = System_Char__ToString(&local_3a,(MethodInfo *)0x0);
        pSVar11 = *targetAddress;
        if (pSVar11 == (System_Char_array *)0x0) {
          ThrowNullReferenceException();
        }
        uVar9 = (uint)pSVar11->max_length;
        uVar14 = (ulong)(uVar9 - 1);
        if ((int)startIndex < (int)(uVar9 - 1)) {
          if ((g_data_07556750->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init(g_data_07556750);
            uVar9 = (uint)pSVar11->max_length;
          }
          uVar1 = startIndex + 1;
          uVar14 = (ulong)uVar1;
          if (uVar9 <= uVar1) {
            ThrowIndexOutOfRangeException();
          }
          str1 = System_Char__ToString(pSVar11->m_Items + (int)uVar1,(MethodInfo *)0x0);
          pSVar12 = System_String__Concat_52f0320(pSVar12,str1,(MethodInfo *)0x0);
        }
        uVar7 = local_3a;
        if ((g_data_07556750->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init(g_data_07556750);
        }
        bVar8 = System_Char__IsLetter(uVar7,(MethodInfo *)0x0);
        uVar7 = local_3a;
        method_00 = (MethodInfo *)CONCAT71((int7)(uVar14 >> 8),local_3a == 0x5f);
        if (bVar8 || local_3a == 0x5f) {
          pSVar12 = CustomLogic_CustomLogicLexer__ScanBool(__this,startIndex,method_01);
          bVar8 = System_String__op_Inequality(pSVar12,"",(MethodInfo *)0x0);
          if (bVar8) {
            bVar8 = System_String__op_Equality(pSVar12,"true",(MethodInfo *)0x0);
            local_38 = (float)CONCAT31(local_38._1_3_,bVar8);
            pIVar13 = il2cpp_vm_Object_Box(g_data_075566f0,&local_38);
            CustomLogic_CustomLogicLexer__AddToken(__this,1,pIVar13,(__this->fields)._line,in_R8);
            if (pSVar12 == (System_String_o *)0x0) {
              ThrowNullReferenceException();
            }
          }
          else {
            pSVar12 = CustomLogic_CustomLogicLexer__ScanAlphaSymbol(__this,startIndex,method_02);
            bVar8 = System_String__op_Inequality(pSVar12,"",(MethodInfo *)0x0);
            if (bVar8) {
              bVar8 = System_String__op_Equality(pSVar12,"null",(MethodInfo *)0x0);
              if (bVar8) {
                CustomLogic_CustomLogicLexer__AddToken
                          (__this,1,(Il2CppObject *)0x0,(__this->fields)._line,in_R8);
              }
              else {
                if ((TypeInfo_CustomLogic_CustomLogicSymbols->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicSymbols);
                }
                pSVar6 = (System_Collections_Generic_Dictionary_object__int__o *)
                         TypeInfo_CustomLogic_CustomLogicSymbols->static_fields->Symbols;
                if (pSVar6 == (System_Collections_Generic_Dictionary_object__int__o *)0x0) {
                  ThrowNullReferenceException();
                }
                local_38 = (float)System_Collections_Generic_Dictionary_object__int___get_Item
                                            (pSVar6,(Il2CppObject *)pSVar12,
                                             (MethodInfo_4A9D700 *)
                                             MethodInfo_System_Collections_Generic_Dictionary_string_int_get_Item
                                            );
                pIVar13 = il2cpp_vm_Object_Box(g_data_07556710,&local_38);
                CustomLogic_CustomLogicLexer__AddToken(__this,0,pIVar13,(__this->fields)._line,in_R8);
              }
              if (pSVar12 == (System_String_o *)0x0) {
                ThrowNullReferenceException();
              }
            }
            else {
              pSVar12 = CustomLogic_CustomLogicLexer__ScanName(__this,startIndex,method_04);
              CustomLogic_CustomLogicLexer__AddToken
                        (__this,2,(Il2CppObject *)pSVar12,(__this->fields)._line,in_R8);
              if (pSVar12 == (System_String_o *)0x0) {
                ThrowNullReferenceException();
              }
            }
          }
label_05b74c80:
          startIndex = (startIndex + (pSVar12->fields)._stringLength) - 1;
        }
        else {
          if ((g_data_07556750->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init(g_data_07556750);
          }
          bVar8 = System_Char__IsDigit(uVar7,(MethodInfo *)0x0);
          if (bVar8) {
            pSVar12 = CustomLogic_CustomLogicLexer__ScanNumber(__this,startIndex,method_03);
            if (pSVar12 == (System_String_o *)0x0) {
              ThrowNullReferenceException();
            }
            bVar8 = System_String__Contains(pSVar12,".",(MethodInfo *)0x0);
            if (bVar8) {
              local_38 = System_Single__Parse(pSVar12,(MethodInfo *)0x0);
              pIVar13 = il2cpp_vm_Object_Box(g_data_07556740,&local_38);
              CustomLogic_CustomLogicLexer__AddToken(__this,1,pIVar13,(__this->fields)._line,in_R8);
            }
            else {
              local_38 = (float)System_Int32__Parse(pSVar12,(MethodInfo *)0x0);
              pIVar13 = il2cpp_vm_Object_Box(g_data_07556710,&local_38);
              CustomLogic_CustomLogicLexer__AddToken(__this,1,pIVar13,(__this->fields)._line,in_R8);
            }
            goto label_05b74c80;
          }
          if (local_3a == 0x23) {
            pSVar12 = CustomLogic_CustomLogicLexer__ScanComment(__this,startIndex,method_03);
            if (pSVar12 == (System_String_o *)0x0) {
              ThrowNullReferenceException();
            }
            iVar10 = (pSVar12->fields)._stringLength;
label_05b74b2c:
            startIndex = startIndex + iVar10 + 1;
          }
          else {
            if (local_3a == 0x22) {
              pSVar12 = CustomLogic_CustomLogicLexer__ScanStringLiteral(__this,startIndex,&local_34,method_00)
              ;
              CustomLogic_CustomLogicLexer__AddToken
                        (__this,1,(Il2CppObject *)pSVar12,(__this->fields)._line,in_R8);
              iVar10 = local_34;
              goto label_05b74b2c;
            }
            if ((TypeInfo_CustomLogic_CustomLogicSymbols->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicSymbols);
            }
            pSVar5 = (System_Collections_Generic_HashSet_object__o *)
                     TypeInfo_CustomLogic_CustomLogicSymbols->static_fields->SpecialSymbolNames;
            if (pSVar5 == (System_Collections_Generic_HashSet_object__o *)0x0) {
              ThrowNullReferenceException();
            }
            bVar8 = System_Collections_Generic_HashSet_object___Contains
                              (pSVar5,(Il2CppObject *)pSVar12,
                               (MethodInfo_4FB3720 *)
                               MethodInfo_System_Collections_Generic_HashSet_string_Contains);
            uVar3 = (TypeInfo_CustomLogic_CustomLogicSymbols->_2).cctor_finished_or_no_cctor;
            if (bVar8) {
              if (uVar3 == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicSymbols);
              }
              pSVar6 = (System_Collections_Generic_Dictionary_object__int__o *)
                       TypeInfo_CustomLogic_CustomLogicSymbols->static_fields->Symbols;
              if (pSVar6 == (System_Collections_Generic_Dictionary_object__int__o *)0x0) {
                ThrowNullReferenceException();
              }
              local_38 = (float)System_Collections_Generic_Dictionary_object__int___get_Item
                                          (pSVar6,(Il2CppObject *)pSVar12,
                                           (MethodInfo_4A9D700 *)
                                           MethodInfo_System_Collections_Generic_Dictionary_string_int_get_Item
                                          );
              pIVar13 = il2cpp_vm_Object_Box(g_data_07556710,&local_38);
              CustomLogic_CustomLogicLexer__AddToken(__this,0,pIVar13,(__this->fields)._line,in_R8);
              startIndex = startIndex + 1;
            }
            else {
              if (uVar3 == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicSymbols);
              }
              pSVar5 = (System_Collections_Generic_HashSet_object__o *)
                       TypeInfo_CustomLogic_CustomLogicSymbols->static_fields->SpecialSymbolNames;
              if ((g_data_07556750->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init(g_data_07556750);
              }
              pSVar12 = System_Char__ToString(&local_3a,(MethodInfo *)0x0);
              if (pSVar5 == (System_Collections_Generic_HashSet_object__o *)0x0) {
                ThrowNullReferenceException();
              }
              bVar8 = System_Collections_Generic_HashSet_object___Contains
                                (pSVar5,(Il2CppObject *)pSVar12,
                                 (MethodInfo_4FB3720 *)
                                 MethodInfo_System_Collections_Generic_HashSet_string_Contains);
              if (bVar8) {
                if (local_3a == 0x2f) {
                  pSVar11 = *targetAddress;
                  if (pSVar11 == (System_Char_array *)0x0) {
                    ThrowNullReferenceException();
                  }
                  uVar9 = startIndex + 1;
                  uVar1 = (uint)pSVar11->max_length;
                  if ((int)uVar9 < (int)uVar1) {
                    if (uVar1 <= uVar9) {
                      ThrowIndexOutOfRangeException();
                    }
                    if (pSVar11->m_Items[(int)uVar9] == 0x2a) {
                      pSVar12 = CustomLogic_CustomLogicLexer__ScanBlockComment(__this,uVar9,method_05);
                      if (pSVar12 == (System_String_o *)0x0) {
                        ThrowNullReferenceException();
                      }
                      startIndex = startIndex + (pSVar12->fields)._stringLength + 3;
                      goto label_05b747f4;
                    }
                  }
                }
                if ((TypeInfo_CustomLogic_CustomLogicSymbols->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicSymbols);
                }
                pSVar6 = (System_Collections_Generic_Dictionary_object__int__o *)
                         TypeInfo_CustomLogic_CustomLogicSymbols->static_fields->Symbols;
                if ((g_data_07556750->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init(g_data_07556750);
                }
                pSVar12 = System_Char__ToString(&local_3a,(MethodInfo *)0x0);
                if (pSVar6 == (System_Collections_Generic_Dictionary_object__int__o *)0x0) {
                  ThrowNullReferenceException();
                }
                local_38 = (float)System_Collections_Generic_Dictionary_object__int___get_Item
                                            (pSVar6,(Il2CppObject *)pSVar12,
                                             (MethodInfo_4A9D700 *)
                                             MethodInfo_System_Collections_Generic_Dictionary_string_int_get_Item
                                            );
                pIVar13 = il2cpp_vm_Object_Box(g_data_07556710,&local_38);
                CustomLogic_CustomLogicLexer__AddToken(__this,0,pIVar13,(__this->fields)._line,in_R8);
              }
            }
          }
        }
label_05b747f4:
        startIndex = startIndex + 1;
        pSVar11 = *targetAddress;
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicLexer$$AddToken
// il2cpp: void CustomLogic_CustomLogicLexer__AddToken (CustomLogic_CustomLogicLexer_o* __this, int32_t type, Il2CppObject* value, int32_t line, const MethodInfo* method);
// 0x5b75180

void CustomLogic_CustomLogicLexer__AddToken
               (CustomLogic_CustomLogicLexer_o *__this,int32_t type,Il2CppObject *value,int32_t line,
               MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Collections_Generic_List_CustomLogicToken__o *__this_00;
  CustomLogic_CustomLogicToken_array *pCVar3;
  MethodInfo *pMVar4;
  CustomLogic_CustomLogicToken_o *__this_01;
  
  if (Il2CppMethodInitialized_0754736b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicToken);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_CustomLogicToken_Add);
    Il2CppMethodInitialized_0754736b = '\x01';
  }
  __this_00 = (__this->fields)._tokens;
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicToken);
  System_Object___ctor((Il2CppObject *)__this_01,(MethodInfo *)0x0);
  (__this_01->fields).Type = type;
  (__this_01->fields).Value = value;
  Il2CppCodeGenWriteBarrier(&(__this_01->fields).Value);
  (__this_01->fields).Line = line;
  pMVar4 = MethodInfo_System_Collections_Generic_List_CustomLogicToken_Add;
  if (__this_00 != (System_Collections_Generic_List_CustomLogicToken__o *)0x0) {
    piVar1 = &(__this_00->fields)._version;
    *piVar1 = *piVar1 + 1;
    pCVar3 = (__this_00->fields)._items;
    if (pCVar3 != (CustomLogic_CustomLogicToken_array *)0x0) {
      uVar2 = (__this_00->fields)._size;
      if (uVar2 < (uint)pCVar3->max_length) {
        (__this_00->fields)._size = uVar2 + 1;
        pCVar3->m_Items[(int)uVar2] = __this_01;
        Il2CppCodeGenWriteBarrier(pCVar3->m_Items + (int)uVar2);
        return;
      }
      System_Collections_Generic_List_object___AddWithResize
                ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)__this_01,
                 (MethodInfo_395D230 *)pMVar4->klass->rgctx_data[0xe].method);
      return;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicLexer$$ScanAlphaSymbol
// il2cpp: System_String_o* CustomLogic_CustomLogicLexer__ScanAlphaSymbol (CustomLogic_CustomLogicLexer_o* __this, int32_t startIndex, const MethodInfo* method);
// 0x5b75270
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b752de: nop 
// asm:   0x5b75321: jmp 0x5b753ff
// asm:   0x5b7539b: jmp 0x5b753ff

System_String_o *
CustomLogic_CustomLogicLexer__ScanAlphaSymbol
          (CustomLogic_CustomLogicLexer_o *__this,int32_t startIndex,MethodInfo *method)

{
  uint uVar1;
  uint16_t c;
  System_Collections_Generic_HashSet_object__o *__this_00;
  bool bVar2;
  System_Char_array *pSVar3;
  System_String_o *str1;
  System_String_o *str0;
  long lVar4;
  
  if (Il2CppMethodInitialized_0754736c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicSymbols);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Contains)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_0754736c = '\x01';
  }
  pSVar3 = (__this->fields)._chars;
  if (pSVar3 != (System_Char_array *)0x0) {
    lVar4 = (long)startIndex * 2 + 0x20;
    str0 = "";
    do {
      uVar1 = (uint)pSVar3->max_length;
      if ((int)uVar1 <= startIndex) {
        return "";
      }
      if (uVar1 <= (uint)startIndex) {
label_05b753fa:
        ThrowIndexOutOfRangeException();
      }
      c = *(uint16_t *)((long)pSVar3->m_Items + lVar4 + -0x20);
      if ((g_data_07556750->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init(g_data_07556750);
      }
      bVar2 = System_Char__IsLetter(c,(MethodInfo *)0x0);
      pSVar3 = (__this->fields)._chars;
      if (bVar2) {
        if (pSVar3 == (System_Char_array *)0x0) break;
      }
      else {
        if (pSVar3 == (System_Char_array *)0x0) break;
        if ((uint)pSVar3->max_length <= (uint)startIndex) goto label_05b753fa;
        if (*(short *)((long)pSVar3->m_Items + lVar4 + -0x20) != 0x5f) {
          if ((TypeInfo_CustomLogic_CustomLogicSymbols->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicSymbols);
          }
          __this_00 = (System_Collections_Generic_HashSet_object__o *)
                      TypeInfo_CustomLogic_CustomLogicSymbols->static_fields->AlphaSymbolNames;
          if (__this_00 != (System_Collections_Generic_HashSet_object__o *)0x0) {
            bVar2 = System_Collections_Generic_HashSet_object___Contains
                              (__this_00,(Il2CppObject *)str0,
                               (MethodInfo_4FB3720 *)
                               MethodInfo_System_Collections_Generic_HashSet_string_Contains);
            if (bVar2) {
              return str0;
            }
            return "";
          }
          break;
        }
      }
      if ((g_data_07556750->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init(g_data_07556750);
      }
      if ((uint)pSVar3->max_length <= (uint)startIndex) goto label_05b753fa;
      str1 = System_Char__ToString((uint16_t *)((long)pSVar3->m_Items + lVar4 + -0x20),(MethodInfo *)0x0);
      str0 = System_String__Concat_52f0320(str0,str1,(MethodInfo *)0x0);
      startIndex = startIndex + 1;
      pSVar3 = (__this->fields)._chars;
      lVar4 = lVar4 + 2;
    } while (pSVar3 != (System_Char_array *)0x0);
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicLexer$$ScanBool
// il2cpp: System_String_o* CustomLogic_CustomLogicLexer__ScanBool (CustomLogic_CustomLogicLexer_o* __this, int32_t startIndex, const MethodInfo* method);
// 0x5b75020
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b7508e: nop 

System_String_o *
CustomLogic_CustomLogicLexer__ScanBool
          (CustomLogic_CustomLogicLexer_o *__this,int32_t startIndex,MethodInfo *method)

{
  uint uVar1;
  uint16_t c;
  long lVar2;
  bool bVar3;
  System_Char_array *pSVar4;
  System_String_o *str1;
  System_String_o *a;
  long lVar5;
  
  if (Il2CppMethodInitialized_0754736d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"false");
    il2cpp_codegen_initialize_runtime_metadata(&"true");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_0754736d = '\x01';
  }
  pSVar4 = (__this->fields)._chars;
  if (pSVar4 != (System_Char_array *)0x0) {
    lVar5 = (long)startIndex * 2 + 0x20;
    a = "";
    do {
      uVar1 = (uint)pSVar4->max_length;
      if ((int)uVar1 <= startIndex) {
        return "";
      }
      if (uVar1 <= (uint)startIndex) {
label_05b75173:
        ThrowIndexOutOfRangeException();
      }
      c = *(uint16_t *)((long)pSVar4->m_Items + lVar5 + -0x20);
      if ((g_data_07556750->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init(g_data_07556750);
      }
      bVar3 = System_Char__IsLetter(c,(MethodInfo *)0x0);
      if (!bVar3) {
        bVar3 = System_String__op_Equality(a,"true",(MethodInfo *)0x0);
        if (bVar3) {
          return a;
        }
        bVar3 = System_String__op_Equality(a,"false",(MethodInfo *)0x0);
        if (bVar3) {
          return a;
        }
        return "";
      }
      pSVar4 = (__this->fields)._chars;
      if (pSVar4 == (System_Char_array *)0x0) break;
      if ((g_data_07556750->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init(g_data_07556750);
      }
      if ((uint)pSVar4->max_length <= (uint)startIndex) goto label_05b75173;
      startIndex = startIndex + 1;
      lVar2 = lVar5 + -0x20;
      lVar5 = lVar5 + 2;
      str1 = System_Char__ToString((uint16_t *)((long)pSVar4->m_Items + lVar2),(MethodInfo *)0x0);
      a = System_String__Concat_52f0320(a,str1,(MethodInfo *)0x0);
      pSVar4 = (__this->fields)._chars;
    } while (pSVar4 != (System_Char_array *)0x0);
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicLexer$$ScanNumber
// il2cpp: System_String_o* CustomLogic_CustomLogicLexer__ScanNumber (CustomLogic_CustomLogicLexer_o* __this, int32_t startIndex, const MethodInfo* method);
// 0x5b75540
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b755e0: jmp 0x5b7564e

System_String_o *
CustomLogic_CustomLogicLexer__ScanNumber
          (CustomLogic_CustomLogicLexer_o *__this,int32_t startIndex,MethodInfo *method)

{
  uint uVar1;
  uint16_t c;
  bool bVar2;
  System_Char_array *pSVar3;
  System_String_o *str1;
  System_String_o *str0;
  long lVar4;
  
  if (Il2CppMethodInitialized_0754736e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_0754736e = '\x01';
  }
  pSVar3 = (__this->fields)._chars;
  if (pSVar3 != (System_Char_array *)0x0) {
    lVar4 = (long)startIndex * 2 + 0x20;
    str0 = "";
    do {
      uVar1 = (uint)pSVar3->max_length;
      if ((int)uVar1 <= startIndex) {
        return str0;
      }
      if (uVar1 <= (uint)startIndex) {
label_05b75665:
        ThrowIndexOutOfRangeException();
      }
      c = *(uint16_t *)((long)pSVar3->m_Items + lVar4 + -0x20);
      if ((g_data_07556750->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init(g_data_07556750);
      }
      bVar2 = System_Char__IsDigit(c,(MethodInfo *)0x0);
      pSVar3 = (__this->fields)._chars;
      if (bVar2) {
        if (pSVar3 == (System_Char_array *)0x0) break;
      }
      else {
        if (pSVar3 == (System_Char_array *)0x0) break;
        if ((uint)pSVar3->max_length <= (uint)startIndex) goto label_05b75665;
        if (*(short *)((long)pSVar3->m_Items + lVar4 + -0x20) != 0x2e) {
          return str0;
        }
      }
      if ((g_data_07556750->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init(g_data_07556750);
      }
      if ((uint)pSVar3->max_length <= (uint)startIndex) goto label_05b75665;
      str1 = System_Char__ToString((uint16_t *)((long)pSVar3->m_Items + lVar4 + -0x20),(MethodInfo *)0x0);
      str0 = System_String__Concat_52f0320(str0,str1,(MethodInfo *)0x0);
      startIndex = startIndex + 1;
      pSVar3 = (__this->fields)._chars;
      lVar4 = lVar4 + 2;
    } while (pSVar3 != (System_Char_array *)0x0);
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicLexer$$ScanName
// il2cpp: System_String_o* CustomLogic_CustomLogicLexer__ScanName (CustomLogic_CustomLogicLexer_o* __this, int32_t startIndex, const MethodInfo* method);
// 0x5b75410
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b754b0: jmp 0x5b7551e

System_String_o *
CustomLogic_CustomLogicLexer__ScanName
          (CustomLogic_CustomLogicLexer_o *__this,int32_t startIndex,MethodInfo *method)

{
  uint uVar1;
  uint16_t c;
  bool bVar2;
  System_Char_array *pSVar3;
  System_String_o *str1;
  System_String_o *str0;
  long lVar4;
  
  if (Il2CppMethodInitialized_0754736f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_0754736f = '\x01';
  }
  pSVar3 = (__this->fields)._chars;
  if (pSVar3 != (System_Char_array *)0x0) {
    lVar4 = (long)startIndex * 2 + 0x20;
    str0 = "";
    do {
      uVar1 = (uint)pSVar3->max_length;
      if ((int)uVar1 <= startIndex) {
        return str0;
      }
      if (uVar1 <= (uint)startIndex) {
label_05b75535:
        ThrowIndexOutOfRangeException();
      }
      c = *(uint16_t *)((long)pSVar3->m_Items + lVar4 + -0x20);
      if ((g_data_07556750->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init(g_data_07556750);
      }
      bVar2 = System_Char__IsLetterOrDigit(c,(MethodInfo *)0x0);
      pSVar3 = (__this->fields)._chars;
      if (bVar2) {
        if (pSVar3 == (System_Char_array *)0x0) break;
      }
      else {
        if (pSVar3 == (System_Char_array *)0x0) break;
        if ((uint)pSVar3->max_length <= (uint)startIndex) goto label_05b75535;
        if (*(short *)((long)pSVar3->m_Items + lVar4 + -0x20) != 0x5f) {
          return str0;
        }
      }
      if ((g_data_07556750->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init(g_data_07556750);
      }
      if ((uint)pSVar3->max_length <= (uint)startIndex) goto label_05b75535;
      str1 = System_Char__ToString((uint16_t *)((long)pSVar3->m_Items + lVar4 + -0x20),(MethodInfo *)0x0);
      str0 = System_String__Concat_52f0320(str0,str1,(MethodInfo *)0x0);
      startIndex = startIndex + 1;
      pSVar3 = (__this->fields)._chars;
      lVar4 = lVar4 + 2;
    } while (pSVar3 != (System_Char_array *)0x0);
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicLexer$$ScanStringLiteral
// il2cpp: System_String_o* CustomLogic_CustomLogicLexer__ScanStringLiteral (CustomLogic_CustomLogicLexer_o* __this, int32_t startIndex, int32_t* rawLiteralLength, const MethodInfo* method);
// 0x5b75670
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b75776: cmp ebp, eax
// asm:   0x5b75778: jb 0x5b757b0
// asm:   0x5b7577a: jmp 0x5b75889

System_String_o *
CustomLogic_CustomLogicLexer__ScanStringLiteral
          (CustomLogic_CustomLogicLexer_o *__this,int32_t startIndex,int32_t *rawLiteralLength,
          MethodInfo *method)

{
  int32_t *piVar1;
  uint16_t uVar2;
  int iVar3;
  uint32_t uVar4;
  uint uVar5;
  System_Char_array *pSVar6;
  System_String_o *pSVar7;
  System_String_o *str1;
  System_String_o **ppSVar8;
  Il2CppClass *klass;
  System_Exception_o *__this_00;
  MethodInfo *lastManagedFrame;
  uint uVar9;
  uint16_t local_3a;
  CustomLogic_CustomLogicLexer_o *local_38;
  
  local_38 = __this;
  if (Il2CppMethodInitialized_07547370 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"\n");
    il2cpp_codegen_initialize_runtime_metadata(&"\\");
    il2cpp_codegen_initialize_runtime_metadata(&"\t");
    il2cpp_codegen_initialize_runtime_metadata(&"\"");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    il2cpp_codegen_initialize_runtime_metadata(&"\r");
    Il2CppMethodInitialized_07547370 = '\x01';
  }
  pSVar7 = "";
  local_3a = 0;
  *rawLiteralLength = 0;
  do {
    pSVar6 = (local_38->fields)._chars;
    if (pSVar6 == (System_Char_array *)0x0) {
      ThrowNullReferenceException();
    }
    uVar9 = startIndex + 1;
    uVar5 = (uint)pSVar6->max_length;
    if ((int)uVar5 <= (int)uVar9) {
label_05b7588e:
      klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
      __this_00 = (System_Exception_o *)il2cpp_codegen_object_new(klass);
      pSVar7 = il2cpp_codegen_get_runtime_metadata(&"Unclosed string literal");
      System_Exception___ctor_54fa440(__this_00,pSVar7,(MethodInfo *)0x0);
      lastManagedFrame =
           il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicLexer_ScanStringLiteral);
      il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
    }
    iVar3 = *rawLiteralLength;
    *rawLiteralLength = iVar3 + 1;
    if (uVar5 <= uVar9) goto label_05b75889;
    uVar2 = pSVar6->m_Items[(int)uVar9];
    if (uVar2 == 10) {
      piVar1 = &(local_38->fields)._line;
      *piVar1 = *piVar1 + 1;
      uVar4 = (g_data_07556750->_2).cctor_finished_or_no_cctor;
joined_r0x05b7579d:
      if (uVar4 == 0) {
        il2cpp_codegen_runtime_class_init(g_data_07556750);
        uVar5 = (uint)pSVar6->max_length;
      }
      if (uVar5 <= uVar9) {
label_05b75889:
        ThrowIndexOutOfRangeException();
      }
      str1 = System_Char__ToString(pSVar6->m_Items + (int)uVar9,(MethodInfo *)0x0);
      startIndex = uVar9;
    }
    else {
      if (uVar2 != 0x5c) {
        if (uVar2 == 0x22) {
          *rawLiteralLength = iVar3;
          return pSVar7;
        }
        uVar4 = (g_data_07556750->_2).cctor_finished_or_no_cctor;
        goto joined_r0x05b7579d;
      }
      startIndex = startIndex + 2;
      if ((int)uVar5 <= startIndex) goto label_05b7588e;
      *rawLiteralLength = iVar3 + 2;
      if (uVar5 <= (uint)startIndex) goto label_05b75889;
      local_3a = pSVar6->m_Items[startIndex];
      switch(local_3a) {
      case 0x5c:
        ppSVar8 = &"\\";
        break;
      case 0x5d:
      case 0x5e:
      case 0x5f:
      case 0x60:
      case 0x61:
      case 0x62:
      case 99:
      case 100:
      case 0x65:
      case 0x66:
      case 0x67:
      case 0x68:
      case 0x69:
      case 0x6a:
      case 0x6b:
      case 0x6c:
      case 0x6d:
      case 0x6f:
      case 0x70:
      case 0x71:
      case 0x73:
switchD_05b7580d_caseD_1:
        if ((g_data_07556750->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init(g_data_07556750);
        }
        str1 = System_Char__ToString(&local_3a,(MethodInfo *)0x0);
        goto label_05b75704;
      case 0x6e:
        ppSVar8 = &"\n";
        break;
      case 0x72:
        ppSVar8 = &"\r";
        break;
      case 0x74:
        ppSVar8 = &"\t";
        break;
      default:
        if (local_3a != 0x22) goto switchD_05b7580d_caseD_1;
        ppSVar8 = &"\"";
      }
      str1 = *ppSVar8;
    }
label_05b75704:
    pSVar7 = System_String__Concat_52f0320(pSVar7,str1,(MethodInfo *)0x0);
  } while( true );
}


// CustomLogic.CustomLogicLexer$$ScanComment
// il2cpp: System_String_o* CustomLogic_CustomLogicLexer__ScanComment (CustomLogic_CustomLogicLexer_o* __this, int32_t startIndex, const MethodInfo* method);
// 0x5b758e0

System_String_o *
CustomLogic_CustomLogicLexer__ScanComment
          (CustomLogic_CustomLogicLexer_o *__this,int32_t startIndex,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_String_o *str1;
  System_String_o *pSVar3;
  Il2CppClass *klass;
  System_Exception_o *__this_00;
  MethodInfo *lastManagedFrame;
  System_Char_array *pSVar4;
  
  if (Il2CppMethodInitialized_07547371 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_07547371 = '\x01';
  }
  pSVar4 = (__this->fields)._chars;
  if (pSVar4 != (System_Char_array *)0x0) {
    pSVar3 = "";
    do {
      startIndex = startIndex + 1;
      uVar2 = (uint)pSVar4->max_length;
      if ((int)uVar2 <= startIndex) {
        klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
        __this_00 = (System_Exception_o *)il2cpp_codegen_object_new(klass);
        pSVar3 = il2cpp_codegen_get_runtime_metadata(&"Unclosed comment");
        System_Exception___ctor_54fa440(__this_00,pSVar3,(MethodInfo *)0x0);
        lastManagedFrame =
             il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicLexer_ScanComment);
        il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
      }
      if (uVar2 <= (uint)startIndex) {
label_05b759a8:
        ThrowIndexOutOfRangeException();
      }
      if (pSVar4->m_Items[startIndex] == 10) {
        piVar1 = &(__this->fields)._line;
        *piVar1 = *piVar1 + 1;
        return pSVar3;
      }
      if ((g_data_07556750->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init(g_data_07556750);
        uVar2 = (uint)pSVar4->max_length;
      }
      if (uVar2 <= (uint)startIndex) goto label_05b759a8;
      str1 = System_Char__ToString(pSVar4->m_Items + startIndex,(MethodInfo *)0x0);
      pSVar3 = System_String__Concat_52f0320(pSVar3,str1,(MethodInfo *)0x0);
      pSVar4 = (__this->fields)._chars;
    } while (pSVar4 != (System_Char_array *)0x0);
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicLexer$$ScanBlockComment
// il2cpp: System_String_o* CustomLogic_CustomLogicLexer__ScanBlockComment (CustomLogic_CustomLogicLexer_o* __this, int32_t startIndex, const MethodInfo* method);
// 0x5b75a00
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b75a59: nop dword ptr [rax]
// asm:   0x5b75aa6: nop word ptr cs:[rax + rax]

System_String_o *
CustomLogic_CustomLogicLexer__ScanBlockComment
          (CustomLogic_CustomLogicLexer_o *__this,int32_t startIndex,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  short sVar3;
  uint uVar4;
  System_String_o *str1;
  System_String_o *pSVar5;
  Il2CppClass *klass;
  System_Exception_o *__this_00;
  MethodInfo *lastManagedFrame;
  System_Char_array *pSVar6;
  uint uVar7;
  long lVar8;
  
  if (Il2CppMethodInitialized_07547372 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_07547372 = '\x01';
  }
  pSVar6 = (__this->fields)._chars;
  if (pSVar6 != (System_Char_array *)0x0) {
    uVar7 = startIndex + 1;
    lVar8 = (long)(int)uVar7 * 2 + 0x20;
    pSVar5 = "";
    do {
      uVar4 = (uint)pSVar6->max_length;
      if ((int)uVar4 <= (int)uVar7) {
        klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
        __this_00 = (System_Exception_o *)il2cpp_codegen_object_new(klass);
        pSVar5 = il2cpp_codegen_get_runtime_metadata(&"Unclosed block comment");
        System_Exception___ctor_54fa440(__this_00,pSVar5,(MethodInfo *)0x0);
        lastManagedFrame =
             il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicLexer_ScanBlockComment);
        il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
      }
      if (uVar4 <= uVar7) {
label_05b75b15:
        ThrowIndexOutOfRangeException();
      }
      sVar3 = *(short *)((long)pSVar6->m_Items + lVar8 + -0x20);
      if (sVar3 == 0x2a) {
        uVar2 = uVar7 + 1;
        if ((int)uVar2 < (int)uVar4) {
          if (uVar4 <= uVar2) goto label_05b75b15;
          if (pSVar6->m_Items[(int)uVar2] == 0x2f) {
            return pSVar5;
          }
        }
      }
      else if (sVar3 == 10) {
        piVar1 = &(__this->fields)._line;
        *piVar1 = *piVar1 + 1;
      }
      if ((g_data_07556750->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init(g_data_07556750);
        uVar4 = (uint)pSVar6->max_length;
      }
      if (uVar4 <= uVar7) goto label_05b75b15;
      str1 = System_Char__ToString((uint16_t *)((long)pSVar6->m_Items + lVar8 + -0x20),(MethodInfo *)0x0);
      pSVar5 = System_String__Concat_52f0320(pSVar5,str1,(MethodInfo *)0x0);
      pSVar6 = (__this->fields)._chars;
      uVar7 = uVar7 + 1;
      lVar8 = lVar8 + 2;
    } while (pSVar6 != (System_Char_array *)0x0);
  }
  ThrowNullReferenceException();
}


