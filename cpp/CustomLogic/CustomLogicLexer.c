// Type: CustomLogic.CustomLogicLexer
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicLexer.cs
// Prior real C# source (older reference): Assets/Scripts/CustomLogic/CustomLogicLexer.cs
// --------------------------------

// CustomLogic.CustomLogicLexer$$get_Compiler
// il2cpp: CustomLogic_CustomLogicCompiler_o* CustomLogic_CustomLogicLexer__get_Compiler (CustomLogic_CustomLogicLexer_o* __this, const MethodInfo* method);
// 0x1808fb3a0

CustomLogic_CustomLogicCompiler_o*
CustomLogic_CustomLogicLexer__get_Compiler(CustomLogic_CustomLogicLexer_o* __this, MethodInfo* method)

{
  return (__this->fields)._Compiler_k__BackingField;
}


// CustomLogic.CustomLogicLexer$$set_Compiler
// il2cpp: void CustomLogic_CustomLogicLexer__set_Compiler (CustomLogic_CustomLogicLexer_o* __this, CustomLogic_CustomLogicCompiler_o* value, const MethodInfo* method);
// 0x180b8ac00

void
CustomLogic_CustomLogicLexer__set_Compiler(CustomLogic_CustomLogicLexer_o* __this, CustomLogic_CustomLogicCompiler_o* value, MethodInfo* method)

{
  (__this->fields)._Compiler_k__BackingField = value;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._Compiler_k__BackingField,value);
  return;
}


// CustomLogic.CustomLogicLexer$$.ctor
// il2cpp: void CustomLogic_CustomLogicLexer___ctor (CustomLogic_CustomLogicLexer_o* __this, System_String_o* source, CustomLogic_CustomLogicCompiler_o* compiler, const MethodInfo* method);
// 0x1820a2ee0

void CustomLogic_CustomLogicLexer___ctor
               (CustomLogic_CustomLogicLexer_o *__this,System_String_o *source,
               CustomLogic_CustomLogicCompiler_o *compiler,MethodInfo *method)

{
  System_Collections_Generic_List_CustomLogicToken__o *__this_00;
  
  if (Il2CppMethodInitialized_1843468f3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicSymbols);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_CustomLogicToken_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_CustomLogicToken);
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_1843468f3 = '\x01';
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
  if ((TypeInfo_CustomLogic_CustomLogicSymbols->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicSymbols);
  }
  CustomLogic_CustomLogicSymbols__Init((MethodInfo *)0x0);
  (__this->fields)._source = source;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._source,source);
  (__this->fields)._Compiler_k__BackingField = compiler;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._Compiler_k__BackingField,compiler);
  return;
}


// CustomLogic.CustomLogicLexer$$GetLineNumberString
// il2cpp: System_String_o* CustomLogic_CustomLogicLexer__GetLineNumberString (CustomLogic_CustomLogicLexer_o* __this, int32_t line, const MethodInfo* method);
// 0x1820a1a00

System_String_o *
CustomLogic_CustomLogicLexer__GetLineNumberString
          (CustomLogic_CustomLogicLexer_o *__this,int32_t line,MethodInfo *method)

{
  CustomLogic_CustomLogicCompiler_o *__this_00;
  System_String_o *pSVar1;
  CustomLogic_CustomLogicCompiler_FileRange_o *pCVar2;
  Il2CppObject *pIVar3;
  Il2CppObject *arg2;
  int iVar4;
  int32_t local_res8 [2];
  int32_t local_res10 [2];
  int local_res20 [2];
  int local_28 [4];
  
  local_res10[0] = line;
  if ((__this->fields)._Compiler_k__BackingField == (CustomLogic_CustomLogicCompiler_o *)0x0) {
    pSVar1 = System_Int32__ToString(local_res10,(MethodInfo *)0x0);
    return pSVar1;
  }
  __this_00 = (__this->fields)._Compiler_k__BackingField;
  if (__this_00 != (CustomLogic_CustomLogicCompiler_o *)0x0) {
    local_res8[0] = line;
    if (Il2CppMethodInitialized_1843468e4 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&"{0} ({1}:{2})");
      il2cpp_codegen_initialize_runtime_metadata(&"{0} (Internal C# Bindings)");
      Il2CppMethodInitialized_1843468e4 = '\x01';
    }
    pCVar2 = CustomLogic_CustomLogicCompiler__FindFileRange(__this_00,local_res8[0],(MethodInfo *)0x0);
    if (pCVar2 == (CustomLogic_CustomLogicCompiler_FileRange_o *)0x0) {
      pSVar1 = System_Int32__ToString(local_res8,(MethodInfo *)0x0);
    }
    else {
      local_res20[0] = local_res8[0];
      if ((pCVar2->fields)._Type_k__BackingField == 0) {
        pIVar3 = il2cpp_value_box(g_data_184354e08,local_res20);
        pSVar1 = System_String__Format("{0} (Internal C# Bindings)",pIVar3,(MethodInfo *)0x0);
      }
      else {
        iVar4 = local_res8[0] - (pCVar2->fields)._StartLine_k__BackingField;
        if ((pCVar2->fields)._Type_k__BackingField == 3) {
          pIVar3 = il2cpp_value_box(g_data_184354e08,local_res20);
          local_28[0] = (pCVar2->fields)._MapLogicOffset_k__BackingField + 1 + iVar4;
        }
        else {
          pIVar3 = il2cpp_value_box(g_data_184354e08,local_res20);
          local_28[0] = iVar4 + 1;
        }
        pSVar1 = (pCVar2->fields)._Name_k__BackingField;
        arg2 = il2cpp_value_box(g_data_184354e08,local_28);
        pSVar1 = System_String__Format_196d050
                           ("{0} ({1}:{2})",pIVar3,(Il2CppObject *)pSVar1,arg2,(MethodInfo *)0x0);
      }
    }
    return pSVar1;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicLexer$$GetTokens
// il2cpp: System_Collections_Generic_List_CustomLogicToken__o* CustomLogic_CustomLogicLexer__GetTokens (CustomLogic_CustomLogicLexer_o* __this, const MethodInfo* method);
// 0x1820a1b50
// eh: try 0x1820a1c6f..0x1820a23b6 -> pad 0x18333de50 (+1 call sites) catch Il2CppExceptionWrapper [managed catch: TypeInfo_System_Exception]
// asm: 95 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1820a1c3f: nop 
// asm:   0x1820a224c: jmp 0x1820a2251
// asm:   0x1820a2258: mov rsi, qword ptr [rsp + 0xa0]
// asm:   0x1820a2260: mov edx, dword ptr [rsi + 0x30]
// asm:   0x1820a2263: inc edx
// asm:   0x1820a2265: xor r8d, r8d
// asm:   0x1820a2268: mov rcx, rsi
// asm:   0x1820a226b: call 0x1820a1a00  ; CustomLogic_CustomLogicLexer__GetLineNumberString()
// asm:   0x1820a2270: mov r15, rax
// asm:   0x1820a2273: mov ecx, dword ptr [rsp + 0x50]
// asm:   0x1820a2277: dec ecx
// asm:   0x1820a2279: movsxd rdx, ecx
// asm:   0x1820a227c: mov rcx, qword ptr [rsp + rdx*8 + 0x48]
// asm:   0x1820a2281: test rcx, rcx
// asm:   0x1820a2284: je 0x1820a235d
// asm:   0x1820a228a: mov r8, qword ptr [rcx]
// asm:   0x1820a228d: mov rdx, qword ptr [r8 + 0x190]
// asm:   0x1820a2294: call qword ptr [r8 + 0x188]  ; vtable slot 5
// asm:   0x1820a229b: mov rdi, rax
// asm:   0x1820a229e: lea rcx, [rip + 0x20552c3]  ; ": "
// asm:   0x1820a22a5: call 0x180416ea0  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x1820a22aa: mov rbx, rax
// asm:   0x1820a22ad: lea rcx, [rip + 0x202d6dc]  ; "Error parsing custom logic at line "
// asm:   0x1820a22b4: call 0x180416ea0  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x1820a22b9: mov rcx, rax
// asm:   0x1820a22bc: xor r14d, r14d
// asm:   0x1820a22bf: mov qword ptr [rsp + 0x20], r14
// asm:   0x1820a22c4: mov r9, rdi
// asm:   0x1820a22c7: mov r8, rbx
// asm:   0x1820a22ca: mov rdx, r15
// asm:   0x1820a22cd: call 0x181969590  ; System_String__Concat()
// asm:   0x1820a22d2: mov qword ptr [rsi + 0x28], rax
// asm:   0x1820a22d6: lea rcx, [rsi + 0x28]
// asm:   0x1820a22da: mov rdx, rax
// asm:   0x1820a22dd: call 0x180416180  ; Il2CppCodeGenWriteBarrier()
// asm:   0x1820a22e2: mov rbx, qword ptr [rsi + 0x28]
// asm:   0x1820a22e6: lea rcx, [rip + 0x20593e3]  ; TypeInfo_ApplicationManagers_DebugConsole
// asm:   0x1820a22ed: call 0x180416ea0  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x1820a22f2: cmp dword ptr [rax + 0xe4], r14d
// asm:   0x1820a22f9: jne 0x1820a2303
// asm:   0x1820a22fb: mov rcx, rax
// asm:   0x1820a22fe: call 0x1804171c0  ; il2cpp_codegen_runtime_class_init()
// asm:   0x1820a2303: xor r8d, r8d
// asm:   0x1820a2306: mov dl, 1
// asm:   0x1820a2308: mov rcx, rbx
// asm:   0x1820a230b: call 0x18234c240  ; ApplicationManagers_DebugConsole__Log()
// asm:   0x1820a2310: lea rcx, [rip + 0x204f2b9]  ; TypeInfo_System_Collections_Generic_List_CustomLogicToken
// asm:   0x1820a2317: call 0x180416ea0  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x1820a231c: mov rcx, rax
// asm:   0x1820a231f: call 0x1804170d0  ; il2cpp_runtime_helper_1804170d0()
// asm:   0x1820a2324: mov rbx, rax
// asm:   0x1820a2327: lea rcx, [rip + 0x1ff21e2]  ; MethodInfo_System_Collections_Generic_List_CustomLogicToken_ctor
// asm:   0x1820a232e: call 0x180416ea0  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x1820a2333: mov rdx, rax
// asm:   0x1820a2336: mov rcx, rbx
// asm:   0x1820a2339: call 0x18092a240  ; System_Collections_Generic_List_KeyValuePair_int__object_____ctor()
// asm:   0x1820a233e: mov rax, rbx
// asm:   0x1820a2341: add rsp, 0x70
// asm:   0x1820a2345: pop r15
// asm:   0x1820a2347: pop r14
// asm:   0x1820a2349: pop rdi
// asm:   0x1820a234a: pop rsi
// asm:   0x1820a234b: pop rbx
// asm:   0x1820a234c: ret 
// asm:   0x18333de50: mov qword ptr [rsp + 0x10], rdx
// asm:   0x18333de55: push rbx
// asm:   0x18333de56: push rbp
// asm:   0x18333de57: push rdi
// asm:   0x18333de58: sub rsp, 0x30
// asm:   0x18333de5c: mov rbp, rdx
// asm:   0x18333de5f: mov rdi, qword ptr [rbp + 0x60]
// asm:   0x18333de63: mov rax, qword ptr [rdi]
// asm:   0x18333de66: mov rbx, qword ptr [rax]
// asm:   0x18333de69: lea rcx, [rip + 0xd3b0e8]  ; TypeInfo_System_Exception
// asm:   0x18333de70: call 0x180416ea0  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x18333de75: mov rcx, rax
// asm:   0x18333de78: mov rdx, rbx
// asm:   0x18333de7b: call 0x180416950  ; il2cpp_codegen_class_is_assignable_from()
// asm:   0x18333de80: test al, al
// asm:   0x18333de82: mov rax, qword ptr [rdi]
// asm:   0x18333de85: je 0x18333de9f
// asm:   0x18333de87: movsxd rcx, dword ptr [rbp + 0x50]
// asm:   0x18333de8b: mov qword ptr [rbp + rcx*8 + 0x48], rax
// asm:   0x18333de90: inc dword ptr [rbp + 0x50]
// asm:   0x18333de93: movabs rax, 0
// asm:   0x18333de9d: jmp 0x18333deb4
// asm:   0x18333de9f: mov qword ptr [rbp + 0x58], rax
// asm:   0x18333dea3: lea rdx, [rip + 0xc9e0de]
// asm:   0x18333deaa: lea rcx, [rbp + 0x58]
// asm:   0x18333deae: call 0x1804ef7d0  ; _CxxThrowException()
// asm:   0x18333deb4: add rsp, 0x30
// asm:   0x18333deb8: pop rdi
// asm:   0x18333deb9: pop rbp
// asm:   0x18333deba: pop rbx
// asm:   0x18333debb: ret 

System_Collections_Generic_List_CustomLogicToken__o *
CustomLogic_CustomLogicLexer__GetTokens(CustomLogic_CustomLogicLexer_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Collections_Generic_List_CustomLogicToken__o *pSVar3;
  System_Collections_Generic_HashSet_object__o *pSVar4;
  System_Collections_Generic_Dictionary_string__int__o *pSVar5;
  uint16_t uVar6;
  bool bVar7;
  System_Char_array *pSVar8;
  System_String_o *pSVar9;
  System_String_o *str1;
  MethodInfo *pMVar10;
  MethodInfo *value;
  uint startIndex;
  undefined1 local_res18 [8];
  uint16_t local_res20 [4];
  int32_t local_68;
  int32_t local_64;
  int32_t local_60;
  int32_t local_5c;
  float local_58;
  int32_t local_54 [3];
  undefined4 local_48;
  
  if (Il2CppMethodInitialized_1843468f4 == '\0') {
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
    Il2CppMethodInitialized_1843468f4 = '\x01';
  }
  startIndex = 0;
  local_res20[0] = 0;
  local_68 = 0;
  local_48 = 0;
  (__this->fields)._line = 0;
  pSVar3 = (__this->fields)._tokens;
  if (pSVar3 != (System_Collections_Generic_List_CustomLogicToken__o *)0x0) {
    piVar1 = &(pSVar3->fields)._version;
    *piVar1 = *piVar1 + 1;
    uVar2 = (pSVar3->fields)._size;
    pMVar10 = (MethodInfo *)(ulonglong)uVar2;
    (pSVar3->fields)._size = 0;
    if (0 < (int)uVar2) {
      System_Array__Clear((System_Array_o *)(pSVar3->fields)._items,0,uVar2,(MethodInfo *)0x0);
    }
    pSVar9 = (__this->fields)._source;
    if (pSVar9 != (System_String_o *)0x0) {
      pSVar8 = System_String__ToCharArray(pSVar9,(MethodInfo *)0x0);
      (__this->fields)._chars = pSVar8;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._chars,pSVar8);
      while (pSVar8 = (__this->fields)._chars, pSVar8 != (System_Char_array *)0x0) {
        uVar2 = (uint)pSVar8->max_length;
        if ((int)uVar2 <= (int)startIndex) {
          return (__this->fields)._tokens;
        }
        if (uVar2 <= startIndex) {
          ThrowIndexOutOfRangeException();
        }
        local_res20[0] = pSVar8->m_Items[(int)startIndex];
        if (local_res20[0] == 10) {
          piVar1 = &(__this->fields)._line;
          *piVar1 = *piVar1 + 1;
        }
        else {
          if ((g_data_184354e48->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init(g_data_184354e48);
          }
          pSVar9 = System_Char__ToString(local_res20,(System_IFormatProvider_o *)0x0,pMVar10);
          pSVar8 = (__this->fields)._chars;
          if (pSVar8 == (System_Char_array *)0x0) {
            ThrowNullReferenceException();
          }
          if ((int)startIndex < (int)pSVar8->max_length + -1) {
            pSVar8 = (__this->fields)._chars;
            if ((g_data_184354e48->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init(g_data_184354e48);
            }
            if ((uint)pSVar8->max_length <= startIndex + 1) {
              ThrowIndexOutOfRangeException();
            }
            str1 = System_Char__ToString
                             (pSVar8->m_Items + (int)(startIndex + 1),(System_IFormatProvider_o *)0x0,pMVar10)
            ;
            pSVar9 = System_String__Concat_1969e50(pSVar9,str1,(MethodInfo *)0x0);
          }
          uVar6 = local_res20[0];
          if ((g_data_184354e48->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init(g_data_184354e48);
          }
          bVar7 = System_Char__IsLetter(uVar6,(MethodInfo *)0x0);
          uVar6 = local_res20[0];
          if ((bVar7) || (local_res20[0] == 0x5f)) {
            pSVar9 = CustomLogic_CustomLogicLexer__ScanBool(__this,startIndex,(MethodInfo *)0x0);
            bVar7 = System_String__op_Inequality(pSVar9,"",(MethodInfo *)0x0);
            if (bVar7) {
              local_res18[0] = System_String__op_Equality(pSVar9,"true",(MethodInfo *)0x0);
              pMVar10 = (MethodInfo *)il2cpp_value_box(g_data_184354de8,local_res18);
              CustomLogic_CustomLogicLexer__AddToken
                        (__this,1,(Il2CppObject *)pMVar10,(__this->fields)._line,(MethodInfo *)0x0);
              if (pSVar9 == (System_String_o *)0x0) {
                ThrowNullReferenceException();
              }
              startIndex = (startIndex - 1) + (pSVar9->fields)._stringLength;
            }
            else {
              pSVar9 = CustomLogic_CustomLogicLexer__ScanAlphaSymbol(__this,startIndex,(MethodInfo *)0x0);
              bVar7 = System_String__op_Inequality(pSVar9,"",(MethodInfo *)0x0);
              if (bVar7) {
                bVar7 = System_String__op_Equality(pSVar9,"null",(MethodInfo *)0x0);
                if (bVar7) {
                  pMVar10 = (MethodInfo *)0x0;
                  CustomLogic_CustomLogicLexer__AddToken
                            (__this,1,(Il2CppObject *)0x0,(__this->fields)._line,(MethodInfo *)0x0);
                }
                else {
                  if ((TypeInfo_CustomLogic_CustomLogicSymbols->_2).cctor_finished_or_no_cctor == 0) {
                    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicSymbols);
                  }
                  pSVar5 = TypeInfo_CustomLogic_CustomLogicSymbols->static_fields->Symbols;
                  if (pSVar5 == (System_Collections_Generic_Dictionary_string__int__o *)0x0) {
                    ThrowNullReferenceException();
                  }
                  local_54[0] = System_Collections_Generic_Dictionary_object__Int32Enum___get_Item
                                          ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar5,
                                           (Il2CppObject *)pSVar9,
                                           (MethodInfo_147A530 *)
                                           MethodInfo_System_Collections_Generic_Dictionary_string_int_get_Item
                                          );
                  pMVar10 = (MethodInfo *)il2cpp_value_box(g_data_184354e08,local_54);
                  CustomLogic_CustomLogicLexer__AddToken
                            (__this,0,(Il2CppObject *)pMVar10,(__this->fields)._line,(MethodInfo *)0x0);
                }
                if (pSVar9 == (System_String_o *)0x0) {
                  ThrowNullReferenceException();
                }
                startIndex = (startIndex - 1) + (pSVar9->fields)._stringLength;
              }
              else {
                value = (MethodInfo *)
                        CustomLogic_CustomLogicLexer__ScanName(__this,startIndex,(MethodInfo *)0x0);
                pMVar10 = value;
                CustomLogic_CustomLogicLexer__AddToken
                          (__this,2,(Il2CppObject *)value,(__this->fields)._line,(MethodInfo *)0x0);
                if (value == (MethodInfo *)0x0) {
                  ThrowNullReferenceException();
                }
                startIndex = (startIndex - 1) + *(int *)&value->invoker_method;
              }
            }
          }
          else {
            if ((g_data_184354e48->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init(g_data_184354e48);
            }
            bVar7 = System_Char__IsDigit(uVar6,(MethodInfo *)0x0);
            if (bVar7) {
              pSVar9 = CustomLogic_CustomLogicLexer__ScanNumber(__this,startIndex,(MethodInfo *)0x0);
              if (pSVar9 == (System_String_o *)0x0) {
                ThrowNullReferenceException();
              }
              bVar7 = System_String__Contains(pSVar9,".",(MethodInfo *)0x0);
              if (bVar7) {
                local_58 = System_Single__Parse(pSVar9,(MethodInfo *)0x0);
                pMVar10 = (MethodInfo *)il2cpp_value_box(g_data_184354e38,&local_58);
                CustomLogic_CustomLogicLexer__AddToken
                          (__this,1,(Il2CppObject *)pMVar10,(__this->fields)._line,(MethodInfo *)0x0);
                startIndex = (startIndex - 1) + (pSVar9->fields)._stringLength;
              }
              else {
                local_5c = System_Int32__Parse(pSVar9,(MethodInfo *)0x0);
                pMVar10 = (MethodInfo *)il2cpp_value_box(g_data_184354e08,&local_5c);
                CustomLogic_CustomLogicLexer__AddToken
                          (__this,1,(Il2CppObject *)pMVar10,(__this->fields)._line,(MethodInfo *)0x0);
                startIndex = (startIndex - 1) + (pSVar9->fields)._stringLength;
              }
            }
            else if (local_res20[0] == 0x22) {
              pMVar10 = (MethodInfo *)
                        CustomLogic_CustomLogicLexer__ScanStringLiteral
                                  (__this,startIndex,&local_68,(MethodInfo *)0x0);
              CustomLogic_CustomLogicLexer__AddToken
                        (__this,1,(Il2CppObject *)pMVar10,(__this->fields)._line,(MethodInfo *)0x0);
              startIndex = startIndex + 1 + local_68;
            }
            else if (local_res20[0] == 0x23) {
              pMVar10 = (MethodInfo *)0x0;
              pSVar9 = CustomLogic_CustomLogicLexer__ScanComment(__this,startIndex,(MethodInfo *)0x0);
              if (pSVar9 == (System_String_o *)0x0) {
                ThrowNullReferenceException();
              }
              startIndex = startIndex + 1 + (pSVar9->fields)._stringLength;
            }
            else {
              if ((TypeInfo_CustomLogic_CustomLogicSymbols->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicSymbols);
              }
              pSVar4 = (System_Collections_Generic_HashSet_object__o *)
                       TypeInfo_CustomLogic_CustomLogicSymbols->static_fields->SpecialSymbolNames;
              if (pSVar4 == (System_Collections_Generic_HashSet_object__o *)0x0) {
                ThrowNullReferenceException();
              }
              pMVar10 = MethodInfo_System_Collections_Generic_HashSet_string_Contains;
              bVar7 = System_Collections_Generic_HashSet_object___Contains
                                (pSVar4,(Il2CppObject *)pSVar9,
                                 (MethodInfo_1759E40 *)
                                 MethodInfo_System_Collections_Generic_HashSet_string_Contains);
              if (bVar7) {
                if ((TypeInfo_CustomLogic_CustomLogicSymbols->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicSymbols);
                }
                pSVar5 = TypeInfo_CustomLogic_CustomLogicSymbols->static_fields->Symbols;
                if (pSVar5 == (System_Collections_Generic_Dictionary_string__int__o *)0x0) {
                  ThrowNullReferenceException();
                }
                local_60 = System_Collections_Generic_Dictionary_object__Int32Enum___get_Item
                                     ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar5,
                                      (Il2CppObject *)pSVar9,
                                      (MethodInfo_147A530 *)
                                      MethodInfo_System_Collections_Generic_Dictionary_string_int_get_Item);
                pMVar10 = (MethodInfo *)il2cpp_value_box(g_data_184354e08,&local_60);
                CustomLogic_CustomLogicLexer__AddToken
                          (__this,0,(Il2CppObject *)pMVar10,(__this->fields)._line,(MethodInfo *)0x0);
                startIndex = startIndex + 1;
              }
              else {
                if ((TypeInfo_CustomLogic_CustomLogicSymbols->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicSymbols);
                }
                pSVar4 = (System_Collections_Generic_HashSet_object__o *)
                         TypeInfo_CustomLogic_CustomLogicSymbols->static_fields->SpecialSymbolNames;
                if ((g_data_184354e48->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init(g_data_184354e48);
                }
                pSVar9 = System_Char__ToString(local_res20,(System_IFormatProvider_o *)0x0,pMVar10);
                if (pSVar4 == (System_Collections_Generic_HashSet_object__o *)0x0) {
                  ThrowNullReferenceException();
                }
                pMVar10 = MethodInfo_System_Collections_Generic_HashSet_string_Contains;
                bVar7 = System_Collections_Generic_HashSet_object___Contains
                                  (pSVar4,(Il2CppObject *)pSVar9,
                                   (MethodInfo_1759E40 *)
                                   MethodInfo_System_Collections_Generic_HashSet_string_Contains);
                if (bVar7) {
                  if (local_res20[0] == 0x2f) {
                    pSVar8 = (__this->fields)._chars;
                    if (pSVar8 == (System_Char_array *)0x0) {
                      ThrowNullReferenceException();
                    }
                    if ((int)(startIndex + 1) < (int)pSVar8->max_length) {
                      if ((uint)pSVar8->max_length <= startIndex + 1) {
                        ThrowIndexOutOfRangeException();
                      }
                      if (pSVar8->m_Items[(longlong)(int)startIndex + 1] == 0x2a) {
                        pMVar10 = (MethodInfo *)0x0;
                        pSVar9 = CustomLogic_CustomLogicLexer__ScanBlockComment
                                           (__this,startIndex + 1,(MethodInfo *)0x0);
                        if (pSVar9 == (System_String_o *)0x0) {
                          ThrowNullReferenceException();
                        }
                        startIndex = startIndex + 3 + (pSVar9->fields)._stringLength;
                        goto label_1820a2251;
                      }
                    }
                  }
                  if ((TypeInfo_CustomLogic_CustomLogicSymbols->_2).cctor_finished_or_no_cctor == 0) {
                    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicSymbols);
                  }
                  pSVar5 = TypeInfo_CustomLogic_CustomLogicSymbols->static_fields->Symbols;
                  if ((g_data_184354e48->_2).cctor_finished_or_no_cctor == 0) {
                    il2cpp_codegen_runtime_class_init(g_data_184354e48);
                  }
                  pSVar9 = System_Char__ToString(local_res20,(System_IFormatProvider_o *)0x0,pMVar10);
                  if (pSVar5 == (System_Collections_Generic_Dictionary_string__int__o *)0x0) {
                    ThrowNullReferenceException();
                  }
                  local_64 = System_Collections_Generic_Dictionary_object__Int32Enum___get_Item
                                       ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar5,
                                        (Il2CppObject *)pSVar9,
                                        (MethodInfo_147A530 *)
                                        MethodInfo_System_Collections_Generic_Dictionary_string_int_get_Item);
                  pMVar10 = (MethodInfo *)il2cpp_value_box(g_data_184354e08,&local_64);
                  CustomLogic_CustomLogicLexer__AddToken
                            (__this,0,(Il2CppObject *)pMVar10,(__this->fields)._line,(MethodInfo *)0x0);
                }
              }
            }
          }
        }
label_1820a2251:
        startIndex = startIndex + 1;
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicLexer$$AddToken
// il2cpp: void CustomLogic_CustomLogicLexer__AddToken (CustomLogic_CustomLogicLexer_o* __this, int32_t type, Il2CppObject* value, int32_t line, const MethodInfo* method);
// 0x1820a1910

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
  
  if (Il2CppMethodInitialized_1843468f5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicToken);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_CustomLogicToken_Add);
    Il2CppMethodInitialized_1843468f5 = '\x01';
  }
  __this_00 = (__this->fields)._tokens;
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicToken);
  CustomLogic_CustomLogicToken___ctor(__this_01,type,value,line,(MethodInfo *)0x0);
  pMVar4 = MethodInfo_System_Collections_Generic_List_CustomLogicToken_Add;
  if (__this_00 != (System_Collections_Generic_List_CustomLogicToken__o *)0x0) {
    piVar1 = &(__this_00->fields)._version;
    *piVar1 = *piVar1 + 1;
    pCVar3 = (__this_00->fields)._items;
    if (pCVar3 != (CustomLogic_CustomLogicToken_array *)0x0) {
      uVar2 = (__this_00->fields)._size;
      if ((uint)pCVar3->max_length <= uVar2) {
        System_Collections_Generic_List_object___AddWithResize
                  ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)__this_01,
                   (MethodInfo_93DD50 *)pMVar4->klass->rgctx_data[0xe].method);
        return;
      }
      (__this_00->fields)._size = uVar2 + 1;
      if (uVar2 < (uint)pCVar3->max_length) {
        pCVar3->m_Items[(int)uVar2] = __this_01;
        Il2CppCodeGenWriteBarrier(pCVar3->m_Items + (int)uVar2,__this_01);
        return;
      }
      ThrowIndexOutOfRangeException();
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicLexer$$ScanAlphaSymbol
// il2cpp: System_String_o* CustomLogic_CustomLogicLexer__ScanAlphaSymbol (CustomLogic_CustomLogicLexer_o* __this, int32_t startIndex, const MethodInfo* method);
// 0x1820a23c0
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1820a24e9: jmp 0x1820a2423
// asm:   0x1820a254e: mov rax, qword ptr [rip + 0x1fdc9d3]  ; ""
// asm:   0x1820a2555: jmp 0x1820a2539

System_String_o *
CustomLogic_CustomLogicLexer__ScanAlphaSymbol
          (CustomLogic_CustomLogicLexer_o *__this,int32_t startIndex,MethodInfo *method)

{
  uint16_t c;
  System_Char_array *pSVar1;
  System_Collections_Generic_HashSet_object__o *__this_00;
  bool bVar2;
  System_String_o *str1;
  System_String_o *str0;
  
  if (Il2CppMethodInitialized_1843468f6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicSymbols);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Contains)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_1843468f6 = '\x01';
  }
  pSVar1 = (__this->fields)._chars;
  str0 = "";
  do {
    if (pSVar1 == (System_Char_array *)0x0) {
label_1820a2557:
      ThrowNullReferenceException();
    }
    if ((int)pSVar1->max_length <= startIndex) {
      return "";
    }
    pSVar1 = (__this->fields)._chars;
    if (pSVar1 == (System_Char_array *)0x0) goto label_1820a2557;
    if ((uint)pSVar1->max_length <= (uint)startIndex) {
label_1820a255d:
      ThrowIndexOutOfRangeException();
    }
    c = pSVar1->m_Items[startIndex];
    if ((g_data_184354e48->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init(g_data_184354e48);
    }
    bVar2 = System_Char__IsLetter(c,(MethodInfo *)0x0);
    if (!bVar2) {
      pSVar1 = (__this->fields)._chars;
      if (pSVar1 == (System_Char_array *)0x0) goto label_1820a2557;
      if ((uint)pSVar1->max_length <= (uint)startIndex) goto label_1820a255d;
      if (pSVar1->m_Items[startIndex] != 0x5f) {
        if ((TypeInfo_CustomLogic_CustomLogicSymbols->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicSymbols);
        }
        __this_00 = (System_Collections_Generic_HashSet_object__o *)
                    TypeInfo_CustomLogic_CustomLogicSymbols->static_fields->AlphaSymbolNames;
        if (__this_00 != (System_Collections_Generic_HashSet_object__o *)0x0) {
          bVar2 = System_Collections_Generic_HashSet_object___Contains
                            (__this_00,(Il2CppObject *)str0,
                             (MethodInfo_1759E40 *)
                             MethodInfo_System_Collections_Generic_HashSet_string_Contains);
          if (bVar2) {
            return str0;
          }
          return "";
        }
        goto label_1820a2557;
      }
    }
    pSVar1 = (__this->fields)._chars;
    if (pSVar1 == (System_Char_array *)0x0) goto label_1820a2557;
    if ((g_data_184354e48->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init(g_data_184354e48);
    }
    if ((uint)pSVar1->max_length <= (uint)startIndex) goto label_1820a255d;
    str1 = System_Char__ToString(pSVar1->m_Items + startIndex,(System_IFormatProvider_o *)0x0,method);
    method = (MethodInfo *)0x0;
    str0 = System_String__Concat_1969e50(str0,str1,(MethodInfo *)0x0);
    startIndex = startIndex + 1;
    pSVar1 = (__this->fields)._chars;
  } while( true );
}


// CustomLogic.CustomLogicLexer$$ScanBool
// il2cpp: System_String_o* CustomLogic_CustomLogicLexer__ScanBool (CustomLogic_CustomLogicLexer_o* __this, int32_t startIndex, const MethodInfo* method);
// 0x1820a2700
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1820a2808: jmp 0x1820a2763
// asm:   0x1820a2855: mov rax, rbp
// asm:   0x1820a2858: jmp 0x1820a2840

System_String_o *
CustomLogic_CustomLogicLexer__ScanBool
          (CustomLogic_CustomLogicLexer_o *__this,int32_t startIndex,MethodInfo *method)

{
  uint16_t c;
  System_Char_array *pSVar1;
  bool bVar2;
  System_String_o *str1;
  System_String_o *a;
  
  if (Il2CppMethodInitialized_1843468f7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"false");
    il2cpp_codegen_initialize_runtime_metadata(&"true");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_1843468f7 = '\x01';
  }
  pSVar1 = (__this->fields)._chars;
  a = "";
  while (pSVar1 != (System_Char_array *)0x0) {
    if ((int)pSVar1->max_length <= startIndex) {
      return "";
    }
    pSVar1 = (__this->fields)._chars;
    if (pSVar1 == (System_Char_array *)0x0) break;
    if ((uint)pSVar1->max_length <= (uint)startIndex) {
label_1820a285a:
      ThrowIndexOutOfRangeException();
    }
    c = pSVar1->m_Items[startIndex];
    if ((g_data_184354e48->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init(g_data_184354e48);
    }
    bVar2 = System_Char__IsLetter(c,(MethodInfo *)0x0);
    if (!bVar2) {
      bVar2 = System_String__op_Equality(a,"true",(MethodInfo *)0x0);
      if (bVar2) {
        return a;
      }
      bVar2 = System_String__op_Equality(a,"false",(MethodInfo *)0x0);
      if (!bVar2) {
        return "";
      }
      return a;
    }
    pSVar1 = (__this->fields)._chars;
    if (pSVar1 == (System_Char_array *)0x0) break;
    if ((g_data_184354e48->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init(g_data_184354e48);
    }
    if ((uint)pSVar1->max_length <= (uint)startIndex) goto label_1820a285a;
    str1 = System_Char__ToString(pSVar1->m_Items + startIndex,(System_IFormatProvider_o *)0x0,method);
    method = (MethodInfo *)0x0;
    a = System_String__Concat_1969e50(a,str1,(MethodInfo *)0x0);
    startIndex = startIndex + 1;
    pSVar1 = (__this->fields)._chars;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicLexer$$ScanNumber
// il2cpp: System_String_o* CustomLogic_CustomLogicLexer__ScanNumber (CustomLogic_CustomLogicLexer_o* __this, int32_t startIndex, const MethodInfo* method);
// 0x1820a2af0
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1820a2b3b: nop dword ptr [rax + rax]
// asm:   0x1820a2bfa: jmp 0x1820a2b40

System_String_o *
CustomLogic_CustomLogicLexer__ScanNumber
          (CustomLogic_CustomLogicLexer_o *__this,int32_t startIndex,MethodInfo *method)

{
  uint16_t c;
  System_Char_array *pSVar1;
  bool bVar2;
  System_String_o *str1;
  System_String_o *str0;
  
  if (Il2CppMethodInitialized_1843468f8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_1843468f8 = '\x01';
  }
  pSVar1 = (__this->fields)._chars;
  str0 = "";
  while (pSVar1 != (System_Char_array *)0x0) {
    if ((int)pSVar1->max_length <= startIndex) {
      return str0;
    }
    pSVar1 = (__this->fields)._chars;
    if (pSVar1 == (System_Char_array *)0x0) break;
    if ((uint)pSVar1->max_length <= (uint)startIndex) {
label_1820a2c17:
      ThrowIndexOutOfRangeException();
    }
    c = pSVar1->m_Items[startIndex];
    if ((g_data_184354e48->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init(g_data_184354e48);
    }
    bVar2 = System_Char__IsDigit(c,(MethodInfo *)0x0);
    if (!bVar2) {
      pSVar1 = (__this->fields)._chars;
      if (pSVar1 == (System_Char_array *)0x0) break;
      if ((uint)pSVar1->max_length <= (uint)startIndex) goto label_1820a2c17;
      if (pSVar1->m_Items[startIndex] != 0x2e) {
        return str0;
      }
    }
    pSVar1 = (__this->fields)._chars;
    if (pSVar1 == (System_Char_array *)0x0) break;
    if ((g_data_184354e48->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init(g_data_184354e48);
    }
    if ((uint)pSVar1->max_length <= (uint)startIndex) goto label_1820a2c17;
    str1 = System_Char__ToString(pSVar1->m_Items + startIndex,(System_IFormatProvider_o *)0x0,method);
    method = (MethodInfo *)0x0;
    str0 = System_String__Concat_1969e50(str0,str1,(MethodInfo *)0x0);
    startIndex = startIndex + 1;
    pSVar1 = (__this->fields)._chars;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicLexer$$ScanName
// il2cpp: System_String_o* CustomLogic_CustomLogicLexer__ScanName (CustomLogic_CustomLogicLexer_o* __this, int32_t startIndex, const MethodInfo* method);
// 0x1820a29b0
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1820a29fb: nop dword ptr [rax + rax]
// asm:   0x1820a2aba: jmp 0x1820a2a00

System_String_o *
CustomLogic_CustomLogicLexer__ScanName
          (CustomLogic_CustomLogicLexer_o *__this,int32_t startIndex,MethodInfo *method)

{
  uint16_t c;
  System_Char_array *pSVar1;
  bool bVar2;
  System_String_o *str1;
  System_String_o *str0;
  
  if (Il2CppMethodInitialized_1843468f9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_1843468f9 = '\x01';
  }
  pSVar1 = (__this->fields)._chars;
  str0 = "";
  while (pSVar1 != (System_Char_array *)0x0) {
    if ((int)pSVar1->max_length <= startIndex) {
      return str0;
    }
    pSVar1 = (__this->fields)._chars;
    if (pSVar1 == (System_Char_array *)0x0) break;
    if ((uint)pSVar1->max_length <= (uint)startIndex) {
label_1820a2ad7:
      ThrowIndexOutOfRangeException();
    }
    c = pSVar1->m_Items[startIndex];
    if ((g_data_184354e48->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init(g_data_184354e48);
    }
    bVar2 = System_Char__IsLetterOrDigit(c,(MethodInfo *)0x0);
    if (!bVar2) {
      pSVar1 = (__this->fields)._chars;
      if (pSVar1 == (System_Char_array *)0x0) break;
      if ((uint)pSVar1->max_length <= (uint)startIndex) goto label_1820a2ad7;
      if (pSVar1->m_Items[startIndex] != 0x5f) {
        return str0;
      }
    }
    pSVar1 = (__this->fields)._chars;
    if (pSVar1 == (System_Char_array *)0x0) break;
    if ((g_data_184354e48->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init(g_data_184354e48);
    }
    if ((uint)pSVar1->max_length <= (uint)startIndex) goto label_1820a2ad7;
    str1 = System_Char__ToString(pSVar1->m_Items + startIndex,(System_IFormatProvider_o *)0x0,method);
    method = (MethodInfo *)0x0;
    str0 = System_String__Concat_1969e50(str0,str1,(MethodInfo *)0x0);
    startIndex = startIndex + 1;
    pSVar1 = (__this->fields)._chars;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicLexer$$ScanStringLiteral
// il2cpp: System_String_o* CustomLogic_CustomLogicLexer__ScanStringLiteral (CustomLogic_CustomLogicLexer_o* __this, int32_t startIndex, int32_t* rawLiteralLength, const MethodInfo* method);
// 0x1820a2c30
// asm: 10 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1820a2dd4: mov rdx, qword ptr [rip + 0x1fde1ad]  ; "\t"
// asm:   0x1820a2ddb: jmp 0x1820a2dff
// asm:   0x1820a2ddd: mov rdx, qword ptr [rip + 0x1fe0204]  ; "\r"
// asm:   0x1820a2de4: jmp 0x1820a2dff
// asm:   0x1820a2de6: mov rdx, qword ptr [rip + 0x1fde6db]  ; "\n"
// asm:   0x1820a2ded: jmp 0x1820a2dff
// asm:   0x1820a2def: mov rdx, qword ptr [rip + 0x2030e5a]  ; "\\"
// asm:   0x1820a2df6: jmp 0x1820a2dff
// asm:   0x1820a2df8: mov rdx, qword ptr [rip + 0x2002f81]  ; "\""
// asm:   0x1820a2e18: jmp 0x1820a2cc2

System_String_o *
CustomLogic_CustomLogicLexer__ScanStringLiteral
          (CustomLogic_CustomLogicLexer_o *__this,int32_t startIndex,int32_t *rawLiteralLength,
          MethodInfo *method)

{
  int32_t *piVar1;
  System_Char_array *pSVar2;
  System_String_o *str1;
  System_String_o *pSVar3;
  Il2CppClass *pIVar4;
  System_Exception_o *pSVar5;
  MethodInfo *pMVar6;
  uint uVar7;
  uint16_t local_res10 [4];
  
  pMVar6 = (MethodInfo *)rawLiteralLength;
  if (Il2CppMethodInitialized_1843468fa == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"\n");
    il2cpp_codegen_initialize_runtime_metadata(&"\\");
    il2cpp_codegen_initialize_runtime_metadata(&"\t");
    il2cpp_codegen_initialize_runtime_metadata(&"\"");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    il2cpp_codegen_initialize_runtime_metadata(&"\r");
    Il2CppMethodInitialized_1843468fa = '\x01';
  }
  pSVar3 = "";
  local_res10[0] = 0;
  *rawLiteralLength = 0;
  pSVar2 = (__this->fields)._chars;
  while (pSVar2 != (System_Char_array *)0x0) {
    uVar7 = startIndex + 1;
    if ((int)pSVar2->max_length <= (int)uVar7) {
      pIVar4 = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
      pSVar5 = (System_Exception_o *)il2cpp_codegen_object_new(pIVar4);
      pSVar3 = il2cpp_codegen_get_runtime_metadata(&"Unclosed string literal");
      System_Exception___ctor_1b6abf0(pSVar5,pSVar3,(MethodInfo *)0x0);
      pMVar6 = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicLexer_ScanStringLiteral)
      ;
      il2cpp_codegen_raise_exception((Il2CppObject *)pSVar5,pMVar6);
    }
    *rawLiteralLength = *rawLiteralLength + 1;
    pSVar2 = (__this->fields)._chars;
    if (pSVar2 == (System_Char_array *)0x0) break;
    if ((uint)pSVar2->max_length <= uVar7) {
label_1820a2ece:
      ThrowIndexOutOfRangeException();
    }
    if (pSVar2->m_Items[(int)uVar7] == 10) {
      piVar1 = &(__this->fields)._line;
      *piVar1 = *piVar1 + 1;
    }
    if (pSVar2 == (System_Char_array *)0x0) break;
    if ((uint)pSVar2->max_length <= uVar7) goto label_1820a2ece;
    if (pSVar2->m_Items[(int)uVar7] == 0x5c) {
      if ((int)pSVar2->max_length <= (int)(startIndex + 2U)) {
        pIVar4 = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
        pSVar5 = (System_Exception_o *)il2cpp_codegen_object_new(pIVar4);
        pSVar3 = il2cpp_codegen_get_runtime_metadata(&"Unclosed string literal");
        System_Exception___ctor_1b6abf0(pSVar5,pSVar3,(MethodInfo *)0x0);
        pMVar6 = il2cpp_codegen_get_runtime_metadata
                           (&MethodInfo_CustomLogic_CustomLogicLexer_ScanStringLiteral);
        il2cpp_codegen_raise_exception((Il2CppObject *)pSVar5,pMVar6);
      }
      *rawLiteralLength = *rawLiteralLength + 1;
      pSVar2 = (__this->fields)._chars;
      if (pSVar2 == (System_Char_array *)0x0) break;
      startIndex = startIndex + 2;
      if ((uint)pSVar2->max_length <= (uint)startIndex) goto label_1820a2ece;
      local_res10[0] = pSVar2->m_Items[(longlong)(int)uVar7 + 1];
      str1 = "\"";
      if ((((local_res10[0] != 0x22) && (str1 = "\\", local_res10[0] != 0x5c)) &&
          (str1 = "\n", local_res10[0] != 0x6e)) &&
         ((str1 = "\r", local_res10[0] != 0x72 &&
          (str1 = "\t", local_res10[0] != 0x74)))) {
        if ((g_data_184354e48->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init(g_data_184354e48);
        }
        str1 = System_Char__ToString(local_res10,(System_IFormatProvider_o *)0x0,pMVar6);
      }
    }
    else {
      if (pSVar2->m_Items[(int)uVar7] == 0x22) {
        *rawLiteralLength = *rawLiteralLength + -1;
        return pSVar3;
      }
      if ((g_data_184354e48->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init(g_data_184354e48);
      }
      if ((uint)pSVar2->max_length <= uVar7) goto label_1820a2ece;
      str1 = System_Char__ToString(pSVar2->m_Items + (int)uVar7,(System_IFormatProvider_o *)0x0,pMVar6);
      startIndex = uVar7;
    }
    pMVar6 = (MethodInfo *)0x0;
    pSVar3 = System_String__Concat_1969e50(pSVar3,str1,(MethodInfo *)0x0);
    pSVar2 = (__this->fields)._chars;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicLexer$$ScanComment
// il2cpp: System_String_o* CustomLogic_CustomLogicLexer__ScanComment (CustomLogic_CustomLogicLexer_o* __this, int32_t startIndex, const MethodInfo* method);
// 0x1820a2870
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1820a28bb: nop dword ptr [rax + rax]
// asm:   0x1820a2939: jmp 0x1820a28c0

System_String_o *
CustomLogic_CustomLogicLexer__ScanComment
          (CustomLogic_CustomLogicLexer_o *__this,int32_t startIndex,MethodInfo *method)

{
  int32_t *piVar1;
  System_Char_array *pSVar2;
  System_String_o *str1;
  System_String_o *pSVar3;
  Il2CppClass *klass;
  System_Exception_o *__this_00;
  MethodInfo *lastManagedFrame;
  
  if (Il2CppMethodInitialized_1843468fb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_1843468fb = '\x01';
  }
  pSVar2 = (__this->fields)._chars;
  pSVar3 = "";
  while (pSVar2 != (System_Char_array *)0x0) {
    startIndex = startIndex + 1;
    if ((int)pSVar2->max_length <= startIndex) {
      klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
      __this_00 = (System_Exception_o *)il2cpp_codegen_object_new(klass);
      pSVar3 = il2cpp_codegen_get_runtime_metadata(&"Unclosed comment");
      System_Exception___ctor_1b6abf0(__this_00,pSVar3,(MethodInfo *)0x0);
      lastManagedFrame =
           il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicLexer_ScanComment);
      il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
    }
    pSVar2 = (__this->fields)._chars;
    if (pSVar2 == (System_Char_array *)0x0) break;
    if ((uint)pSVar2->max_length <= (uint)startIndex) {
label_1820a29a5:
      ThrowIndexOutOfRangeException();
    }
    if (pSVar2->m_Items[startIndex] == 10) {
      piVar1 = &(__this->fields)._line;
      *piVar1 = *piVar1 + 1;
      return pSVar3;
    }
    if ((g_data_184354e48->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init(g_data_184354e48);
    }
    if ((uint)pSVar2->max_length <= (uint)startIndex) goto label_1820a29a5;
    str1 = System_Char__ToString(pSVar2->m_Items + startIndex,(System_IFormatProvider_o *)0x0,method);
    method = (MethodInfo *)0x0;
    pSVar3 = System_String__Concat_1969e50(pSVar3,str1,(MethodInfo *)0x0);
    pSVar2 = (__this->fields)._chars;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicLexer$$ScanBlockComment
// il2cpp: System_String_o* CustomLogic_CustomLogicLexer__ScanBlockComment (CustomLogic_CustomLogicLexer_o* __this, int32_t startIndex, const MethodInfo* method);
// 0x1820a2570
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1820a25bb: nop dword ptr [rax + rax]
// asm:   0x1820a2680: jmp 0x1820a25c0

System_String_o *
CustomLogic_CustomLogicLexer__ScanBlockComment
          (CustomLogic_CustomLogicLexer_o *__this,int32_t startIndex,MethodInfo *method)

{
  int32_t *piVar1;
  System_Char_array *pSVar2;
  System_String_o *str1;
  System_String_o *pSVar3;
  Il2CppClass *klass;
  System_Exception_o *__this_00;
  MethodInfo *lastManagedFrame;
  uint uVar4;
  
  if (Il2CppMethodInitialized_1843468fc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_1843468fc = '\x01';
  }
  pSVar2 = (__this->fields)._chars;
  pSVar3 = "";
  while (pSVar2 != (System_Char_array *)0x0) {
    uVar4 = startIndex + 1;
    if ((int)pSVar2->max_length <= (int)uVar4) {
      klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
      __this_00 = (System_Exception_o *)il2cpp_codegen_object_new(klass);
      pSVar3 = il2cpp_codegen_get_runtime_metadata(&"Unclosed block comment");
      System_Exception___ctor_1b6abf0(__this_00,pSVar3,(MethodInfo *)0x0);
      lastManagedFrame =
           il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicLexer_ScanBlockComment);
      il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
    }
    pSVar2 = (__this->fields)._chars;
    if (pSVar2 == (System_Char_array *)0x0) break;
    if ((uint)pSVar2->max_length <= uVar4) {
label_1820a26ec:
      ThrowIndexOutOfRangeException();
    }
    if (pSVar2->m_Items[(int)uVar4] == 10) {
      piVar1 = &(__this->fields)._line;
      *piVar1 = *piVar1 + 1;
    }
    if (pSVar2 == (System_Char_array *)0x0) break;
    if ((uint)pSVar2->max_length <= uVar4) goto label_1820a26ec;
    if ((pSVar2->m_Items[(int)uVar4] == 0x2a) &&
       (pSVar2 = (__this->fields)._chars, (int)(startIndex + 2U) < (int)pSVar2->max_length)) {
      if ((uint)pSVar2->max_length <= startIndex + 2U) goto label_1820a26ec;
      if (pSVar2->m_Items[(longlong)(int)uVar4 + 1] == 0x2f) {
        return pSVar3;
      }
    }
    pSVar2 = (__this->fields)._chars;
    if ((g_data_184354e48->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init(g_data_184354e48);
    }
    if ((uint)pSVar2->max_length <= uVar4) goto label_1820a26ec;
    str1 = System_Char__ToString(pSVar2->m_Items + (int)uVar4,(System_IFormatProvider_o *)0x0,method);
    method = (MethodInfo *)0x0;
    pSVar3 = System_String__Concat_1969e50(pSVar3,str1,(MethodInfo *)0x0);
    startIndex = uVar4;
    pSVar2 = (__this->fields)._chars;
  }
  ThrowNullReferenceException();
}


