// Type: Settings.RuleParser
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/Settings/RuleParser.cs
// Prior real C# source: none
// --------------------------------

// Settings.RuleParser.<>c$$.cctor
// il2cpp: void Settings_RuleParser___c___cctor (const MethodInfo* method);
// 0x5b3cc70

void Settings_RuleParser___c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (Il2CppMethodInitialized_0754725a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_RuleParser_c);
    Il2CppMethodInitialized_0754725a = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_RuleParser_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  TypeInfo_Settings_RuleParser_c->static_fields->__9 = (Settings_RuleParser___c_o *)__this;
  Il2CppCodeGenWriteBarrier(&TypeInfo_Settings_RuleParser_c->static_fields->__9);
  return;
}


// Settings.RuleParser.<>c$$.ctor
// il2cpp: void Settings_RuleParser___c___ctor (Settings_RuleParser___c_o* __this, const MethodInfo* method);
// 0x5b3cce0

void Settings_RuleParser___c___ctor(Settings_RuleParser___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Settings.RuleParser.<>c$$<Parse>b__0_0
// il2cpp: System_String_o* Settings_RuleParser___c___Parse_b__0_0 (Settings_RuleParser___c_o* __this, System_String_o* s, const MethodInfo* method);
// 0x5b3ccf0

System_String_o *
Settings_RuleParser___c___Parse_b__0_0
          (Settings_RuleParser___c_o *__this,System_String_o *s,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (s == (System_String_o *)0x0) {
    ThrowNullReferenceException();
  }
  pSVar1 = System_String__Trim(s,(MethodInfo *)0x0);
  return pSVar1;
}


// Settings.RuleParser.<>c$$<Parse>b__0_1
// il2cpp: bool Settings_RuleParser___c___Parse_b__0_1 (Settings_RuleParser___c_o* __this, System_String_o* s, const MethodInfo* method);
// 0x5b3cd10

bool Settings_RuleParser___c___Parse_b__0_1
               (Settings_RuleParser___c_o *__this,System_String_o *s,MethodInfo *method)

{
  if (s == (System_String_o *)0x0) {
    ThrowNullReferenceException();
  }
  return 0 < (s->fields)._stringLength;
}


// Settings.RuleParser$$Parse
// il2cpp: System_Collections_Generic_List_UIRule__o* Settings_RuleParser__Parse (System_Collections_Generic_IEnumerable_string__o* rawRules, System_Func_string__UIRuleValueType__o* typeResolver, const MethodInfo* method);
// 0x5b3a5e0
// eh: try 0x5b3a82b..0x5b3b5a4 -> pad 0x5b3b722 (+113 call sites) catch Il2CppExceptionWrapper, cleanup [compiler noexcept guard]
// eh: try 0x5b3b751..0x5b3b756 -> pad 0x5b3b75b cleanup
// eh: try 0x5b3b75e..0x5b3b768 -> pad 0x5b3b770 catch (...) [compiler noexcept guard]
// asm: 155 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b3a80e: lea rbx, [rip + 0x1760953]  ; MethodInfo_System_Nullable_float_ctor
// asm:   0x5b3a815: xor eax, eax
// asm:   0x5b3a817: mov r13, rax
// asm:   0x5b3a81a: jmp 0x5b3a851
// asm:   0x5b3a840: mov rbp, qword ptr [rsp + 0x18]
// asm:   0x5b3a845: test rbp, rbp
// asm:   0x5b3a848: mov rbx, r12
// asm:   0x5b3a84b: je 0x5b3b218
// asm:   0x5b3afab: jmp 0x5b3afcc
// asm:   0x5b3b081: jmp 0x5b3b0a2
// asm:   0x5b3b205: mov rbp, qword ptr [rsp + 0x18]
// asm:   0x5b3b20a: test rbp, rbp
// asm:   0x5b3b20d: mov rax, qword ptr [rsp + 0x50]
// asm:   0x5b3b212: jne 0x5b3a817
// asm:   0x5b3b24f: nop 
// asm:   0x5b3b424: mov rdi, rbp
// asm:   0x5b3b427: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5b3b5a4: jmp 0x5b3b739
// asm:   0x5b3b5a9: jmp 0x5b3b739
// asm:   0x5b3b5ae: mov rbp, rax
// asm:   0x5b3b5b1: jmp 0x5b3b73c
// asm:   0x5b3b5b6: mov rbp, rax
// asm:   0x5b3b5b9: jmp 0x5b3b73c
// asm:   0x5b3b5be: jmp 0x5b3b739
// asm:   0x5b3b5c3: jmp 0x5b3b739
// asm:   0x5b3b5c8: jmp 0x5b3b739
// asm:   0x5b3b5cd: jmp 0x5b3b739
// asm:   0x5b3b5d2: jmp 0x5b3b739
// asm:   0x5b3b5d7: jmp 0x5b3b739
// asm:   0x5b3b5dc: jmp 0x5b3b739
// asm:   0x5b3b5e1: jmp 0x5b3b739
// asm:   0x5b3b5e6: mov rbp, rax
// asm:   0x5b3b5e9: jmp 0x5b3b73c
// asm:   0x5b3b5ee: mov rbp, rax
// asm:   0x5b3b5f1: jmp 0x5b3b73c
// asm:   0x5b3b5f6: mov rbp, rax
// asm:   0x5b3b5f9: jmp 0x5b3b73c
// asm:   0x5b3b5fe: jmp 0x5b3b739
// asm:   0x5b3b603: jmp 0x5b3b739
// asm:   0x5b3b608: jmp 0x5b3b739
// asm:   0x5b3b60d: jmp 0x5b3b739
// asm:   0x5b3b612: jmp 0x5b3b739
// asm:   0x5b3b617: jmp 0x5b3b739
// asm:   0x5b3b61c: mov rbp, rax
// asm:   0x5b3b61f: jmp 0x5b3b73c
// asm:   0x5b3b624: mov rbp, rax
// asm:   0x5b3b627: jmp 0x5b3b73c
// asm:   0x5b3b62c: jmp 0x5b3b739
// asm:   0x5b3b631: mov rbp, rax
// asm:   0x5b3b634: jmp 0x5b3b73c
// asm:   0x5b3b639: jmp 0x5b3b739
// asm:   0x5b3b63e: jmp 0x5b3b739
// asm:   0x5b3b643: jmp 0x5b3b739
// asm:   0x5b3b648: jmp 0x5b3b739
// asm:   0x5b3b64d: jmp 0x5b3b739
// asm:   0x5b3b652: jmp 0x5b3b739
// asm:   0x5b3b657: jmp 0x5b3b739
// asm:   0x5b3b65c: jmp 0x5b3b739
// asm:   0x5b3b661: jmp 0x5b3b739
// asm:   0x5b3b666: jmp 0x5b3b739
// asm:   0x5b3b66b: jmp 0x5b3b739
// asm:   0x5b3b670: jmp 0x5b3b739
// asm:   0x5b3b675: jmp 0x5b3b739
// asm:   0x5b3b67a: jmp 0x5b3b739
// asm:   0x5b3b67f: jmp 0x5b3b739
// asm:   0x5b3b684: mov rbp, rax
// asm:   0x5b3b687: jmp 0x5b3b73c
// asm:   0x5b3b68c: jmp 0x5b3b739
// asm:   0x5b3b691: jmp 0x5b3b739
// asm:   0x5b3b696: jmp 0x5b3b739
// asm:   0x5b3b69b: jmp 0x5b3b739
// asm:   0x5b3b6a0: jmp 0x5b3b739
// asm:   0x5b3b6a5: jmp 0x5b3b739
// asm:   0x5b3b6aa: jmp 0x5b3b739
// asm:   0x5b3b6af: jmp 0x5b3b739
// asm:   0x5b3b6b4: jmp 0x5b3b739
// asm:   0x5b3b6b9: jmp 0x5b3b739
// asm:   0x5b3b6bb: jmp 0x5b3b739
// asm:   0x5b3b6bd: jmp 0x5b3b739
// asm:   0x5b3b6bf: jmp 0x5b3b739
// asm:   0x5b3b6c1: jmp 0x5b3b739
// asm:   0x5b3b6c3: jmp 0x5b3b739
// asm:   0x5b3b6c5: jmp 0x5b3b739
// asm:   0x5b3b6c7: jmp 0x5b3b739
// asm:   0x5b3b6c9: jmp 0x5b3b739
// asm:   0x5b3b6cb: jmp 0x5b3b739
// asm:   0x5b3b6cd: jmp 0x5b3b739
// asm:   0x5b3b6cf: jmp 0x5b3b739
// asm:   0x5b3b6d1: jmp 0x5b3b739
// asm:   0x5b3b6d3: jmp 0x5b3b739
// asm:   0x5b3b6d5: jmp 0x5b3b739
// asm:   0x5b3b6d7: jmp 0x5b3b739
// asm:   0x5b3b6d9: jmp 0x5b3b739
// asm:   0x5b3b6db: jmp 0x5b3b739
// asm:   0x5b3b6dd: jmp 0x5b3b739
// asm:   0x5b3b6df: jmp 0x5b3b739
// asm:   0x5b3b6e1: jmp 0x5b3b739
// asm:   0x5b3b6e3: jmp 0x5b3b739
// asm:   0x5b3b6e5: jmp 0x5b3b739
// asm:   0x5b3b6e7: jmp 0x5b3b739
// asm:   0x5b3b6e9: jmp 0x5b3b739
// asm:   0x5b3b6eb: jmp 0x5b3b739
// asm:   0x5b3b6ed: mov rbp, rax
// asm:   0x5b3b6f0: jmp 0x5b3b73c
// asm:   0x5b3b6f2: jmp 0x5b3b739
// asm:   0x5b3b6f4: jmp 0x5b3b739
// asm:   0x5b3b6f6: jmp 0x5b3b739
// asm:   0x5b3b6f8: jmp 0x5b3b739
// asm:   0x5b3b6fa: jmp 0x5b3b739
// asm:   0x5b3b6fc: jmp 0x5b3b739
// asm:   0x5b3b6fe: jmp 0x5b3b739
// asm:   0x5b3b700: jmp 0x5b3b739
// asm:   0x5b3b702: jmp 0x5b3b739
// asm:   0x5b3b704: jmp 0x5b3b739
// asm:   0x5b3b706: jmp 0x5b3b739
// asm:   0x5b3b708: jmp 0x5b3b739
// asm:   0x5b3b70a: jmp 0x5b3b739
// asm:   0x5b3b70c: jmp 0x5b3b739
// asm:   0x5b3b70e: jmp 0x5b3b739
// asm:   0x5b3b710: jmp 0x5b3b739
// asm:   0x5b3b712: jmp 0x5b3b739
// asm:   0x5b3b714: jmp 0x5b3b739
// asm:   0x5b3b716: jmp 0x5b3b739
// asm:   0x5b3b718: jmp 0x5b3b739
// asm:   0x5b3b71a: jmp 0x5b3b739
// asm:   0x5b3b71c: jmp 0x5b3b739
// asm:   0x5b3b71e: jmp 0x5b3b739
// asm:   0x5b3b720: jmp 0x5b3b739
// asm:   0x5b3b722: jmp 0x5b3b739
// asm:   0x5b3b724: jmp 0x5b3b739
// asm:   0x5b3b726: jmp 0x5b3b739
// asm:   0x5b3b728: jmp 0x5b3b739
// asm:   0x5b3b72a: jmp 0x5b3b739
// asm:   0x5b3b72c: jmp 0x5b3b739
// asm:   0x5b3b72e: jmp 0x5b3b739
// asm:   0x5b3b730: jmp 0x5b3b739
// asm:   0x5b3b732: mov rbp, rax
// asm:   0x5b3b735: jmp 0x5b3b73c
// asm:   0x5b3b737: jmp 0x5b3b739
// asm:   0x5b3b739: mov rbp, rax
// asm:   0x5b3b73c: cmp edx, 1
// asm:   0x5b3b73f: jne 0x5b3b75e
// asm:   0x5b3b741: mov rdi, rbp
// asm:   0x5b3b744: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5b3b749: mov rbp, qword ptr [rax]
// asm:   0x5b3b74c: mov qword ptr [rsp + 0x58], rbp
// asm:   0x5b3b751: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5b3b756: jmp 0x5b3b21f
// asm:   0x5b3b75b: mov rbp, rax
// asm:   0x5b3b75e: lea rdi, [rsp + 0x58]
// asm:   0x5b3b763: call 0x2fd6c90  ; il2cpp_runtime_helper_02fd6c90()
// asm:   0x5b3b768: mov rdi, rbp
// asm:   0x5b3b76b: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5b3b770: mov rdi, rax
// asm:   0x5b3b773: call 0x2ab61e0  ; __clang_call_terminate()

System_Collections_Generic_List_UIRule__o *
Settings_RuleParser__Parse
          (System_Collections_Generic_IEnumerable_string__o *rawRules,
          System_Func_string__UIRuleValueType__o *typeResolver,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Collections_Generic_IEnumerable_string__c *pSVar3;
  Il2CppRuntimeInterfaceOffsetPair *pIVar4;
  Settings_UIRule_array *pSVar5;
  char cVar6;
  bool bVar7;
  bool bVar8;
  System_Collections_Generic_List_UIRule__o *__this;
  VirtualInvokeData *pVVar9;
  Il2CppObject *pIVar10;
  System_String_o *pSVar11;
  System_String_o *pSVar12;
  Settings_UIRule_o *pSVar13;
  System_Text_RegularExpressions_Match_o *__this_00;
  System_Text_RegularExpressions_GroupCollection_o *pSVar14;
  System_Text_RegularExpressions_Group_o *pSVar15;
  System_String_o *pSVar16;
  System_Globalization_CultureInfo_o *pSVar17;
  System_String_array *pSVar18;
  System_Func_string__string__o *__this_01;
  Settings_RuleParser___c_StaticFields *pSVar19;
  System_Func_string__bool__o *__this_02;
  System_Collections_Generic_IEnumerable_TSource__o *source;
  System_Collections_Generic_List_string__o *pSVar20;
  Il2CppClass *pIVar21;
  System_FormatException_o *pSVar22;
  MethodInfo *pMVar23;
  ulong uVar24;
  System_Collections_Generic_List_string__o **targetAddress;
  long lVar25;
  float local_8c;
  System_String_array *local_88;
  Il2CppObject *local_80;
  float local_74;
  System_String_o *local_70;
  System_String_o *local_68;
  System_Nullable_float__Fields local_60;
  System_Nullable_float__Fields local_58;
  System_String_o *local_50;
  System_Text_RegularExpressions_Match_o *local_48;
  undefined8 local_40;
  Il2CppObject **local_38;
  
  if (Il2CppMethodInitialized_07547259 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Globalization_CultureInfo);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_Select_string_string);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_ToList_string);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_Where_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_string_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_string_bool);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IDisposable);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_IEnumerable_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_IEnumerator_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_IEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_UIRule_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_UIRule_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_UIRule);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_float_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_float_get_HasValue);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Text_RegularExpressions_Regex);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_RuleParser_c_Parse_b__0_0);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_RuleParser_c_Parse_b__0_1);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_RuleParser_c);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_UIRule);
    il2cpp_codegen_initialize_runtime_metadata(&"!");
    il2cpp_codegen_initialize_runtime_metadata(&"=");
    il2cpp_codegen_initialize_runtime_metadata(&"+");
    il2cpp_codegen_initialize_runtime_metadata(&"-");
    il2cpp_codegen_initialize_runtime_metadata(&"^([^=]+)=([^\\[\\{]+)(?:\\[\\s*(-?(?:\\d+(?:\\.\\d+)?|\\.\\d+))\\s*-\\s*(-?(?:\\d+(?:\\.\\d+)?|\\.\\d+))\\s*\\])?(?:\\{([^\\}]+)\\})?$");
    Il2CppMethodInitialized_07547259 = '\x01';
  }
  local_80 = (Il2CppObject *)0x0;
  local_74 = 0.0;
  local_8c = 0.0;
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_UIRule);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this,
             (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_UIRule_ctor);
  if (rawRules == (System_Collections_Generic_IEnumerable_string__o *)0x0) {
    return __this;
  }
  pSVar3 = rawRules->klass;
  uVar24 = (ulong)(pSVar3->_2).interface_offsets_count;
  if (uVar24 != 0) {
    pIVar4 = (pSVar3->_1).interfaceOffsets;
    lVar25 = 0;
    do {
      if (*(System_Collections_Generic_IEnumerable_string__c **)((long)&pIVar4->interfaceType + lVar25) ==
          TypeInfo_System_Collections_Generic_IEnumerable_string) {
        pVVar9 = (VirtualInvokeData *)&pSVar3->vtable[*(int *)((long)&pIVar4->offset + lVar25)].methodPtr;
        goto label_05b3a7e1;
      }
      lVar25 = lVar25 + 0x10;
    } while (uVar24 * 0x10 != lVar25);
  }
  pVVar9 = GetInterfaceInvokeDataFromVTableSlowPath
                     ((Il2CppObject *)rawRules,
                      (Il2CppClass *)TypeInfo_System_Collections_Generic_IEnumerable_string,0);
label_05b3a7e1:
  pIVar10 = (*pVVar9->methodPtr)((Il2CppObject *)rawRules,pVVar9->method);
  local_40 = 0;
  local_38 = &local_80;
joined_r0x05b3a808:
  do {
    local_80 = pIVar10;
    if (pIVar10 == (Il2CppObject *)0x0) {
      ThrowNullReferenceException();
    }
    pIVar21 = pIVar10->klass;
    uVar24 = (ulong)(pIVar21->_2).interface_offsets_count;
    if (uVar24 != 0) {
      pIVar4 = (pIVar21->_1).interfaceOffsets;
      lVar25 = 0;
      do {
        if (*(Il2CppClass **)((long)&pIVar4->interfaceType + lVar25) ==
            (Il2CppClass *)TypeInfo_System_Collections_IEnumerator) {
          pVVar9 = (VirtualInvokeData *)&pIVar21->vtable[*(int *)((long)&pIVar4->offset + lVar25)].methodPtr;
          goto label_05b3a8b3;
        }
        lVar25 = lVar25 + 0x10;
      } while (uVar24 * 0x10 != lVar25);
    }
    pVVar9 = GetInterfaceInvokeDataFromVTableSlowPath
                       (pIVar10,(Il2CppClass *)TypeInfo_System_Collections_IEnumerator,0);
label_05b3a8b3:
    cVar6 = (*pVVar9->methodPtr)(pIVar10,pVVar9->method);
    pIVar10 = local_80;
    if (cVar6 == '\0') {
      if (local_80 == (Il2CppObject *)0x0) {
        return __this;
      }
      pIVar21 = local_80->klass;
      uVar24 = (ulong)(pIVar21->_2).interface_offsets_count;
      if (uVar24 == 0) goto label_05b3b25f;
      pIVar4 = (pIVar21->_1).interfaceOffsets;
      lVar25 = 0;
      goto label_05b3b250;
    }
    if (local_80 == (Il2CppObject *)0x0) {
      ThrowNullReferenceException();
    }
    pIVar21 = local_80->klass;
    uVar24 = (ulong)(pIVar21->_2).interface_offsets_count;
    if (uVar24 != 0) {
      pIVar4 = (pIVar21->_1).interfaceOffsets;
      lVar25 = 0;
      do {
        if (*(System_Collections_Generic_IEnumerator_string__c **)((long)&pIVar4->interfaceType + lVar25) ==
            TypeInfo_System_Collections_Generic_IEnumerator_string) {
          pVVar9 = (VirtualInvokeData *)&pIVar21->vtable[*(int *)((long)&pIVar4->offset + lVar25)].methodPtr;
          goto label_05b3a933;
        }
        lVar25 = lVar25 + 0x10;
      } while (uVar24 * 0x10 != lVar25);
    }
    pVVar9 = GetInterfaceInvokeDataFromVTableSlowPath
                       (local_80,(Il2CppClass *)TypeInfo_System_Collections_Generic_IEnumerator_string,0);
label_05b3a933:
    pSVar11 = (*pVVar9->methodPtr)(pIVar10,pVVar9->method);
    if (pSVar11 == (System_String_o *)0x0) {
      pIVar21 = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_FormatException);
      pSVar22 = (System_FormatException_o *)il2cpp_codegen_object_new(pIVar21);
      pSVar11 = il2cpp_codegen_get_runtime_metadata(&"Experience rule cannot be null.");
      System_FormatException___ctor_549ecd0(pSVar22,pSVar11,(MethodInfo *)0x0);
      pMVar23 = il2cpp_codegen_get_runtime_metadata(&MethodInfo_Settings_RuleParser_Parse);
      il2cpp_codegen_raise_exception((Il2CppObject *)pSVar22,pMVar23);
    }
    pSVar12 = System_String__Trim(pSVar11,(MethodInfo *)0x0);
    bVar7 = System_String__IsNullOrWhiteSpace(pSVar12,(MethodInfo *)0x0);
    pIVar10 = local_80;
  } while (bVar7);
  if (pSVar12 == (System_String_o *)0x0) {
    ThrowNullReferenceException();
  }
  bVar7 = System_String__StartsWith(pSVar12,"!",(MethodInfo *)0x0);
  if (bVar7) {
    pSVar12 = System_String__Substring(pSVar12,1,(MethodInfo *)0x0);
    if (pSVar12 == (System_String_o *)0x0) {
      ThrowNullReferenceException();
    }
    bVar7 = true;
  }
  else {
    bVar7 = false;
  }
  bVar8 = System_String__StartsWith(pSVar12,"-",(MethodInfo *)0x0);
  if (bVar8) {
    pSVar12 = System_String__Substring(pSVar12,1,(MethodInfo *)0x0);
    if (pSVar12 == (System_String_o *)0x0) {
      ThrowNullReferenceException();
    }
    pSVar12 = System_String__Trim(pSVar12,(MethodInfo *)0x0);
    if (pSVar12 == (System_String_o *)0x0) {
      ThrowNullReferenceException();
    }
    if ((pSVar12->fields)._stringLength == 0) {
      pSVar12 = il2cpp_codegen_get_runtime_metadata(&"Hide rule is missing a setting ID: ");
      pSVar11 = System_String__Concat_52f0320(pSVar12,pSVar11,(MethodInfo *)0x0);
      pIVar21 = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_FormatException);
      pSVar22 = (System_FormatException_o *)il2cpp_codegen_object_new(pIVar21);
      System_FormatException___ctor_549ecd0(pSVar22,pSVar11,(MethodInfo *)0x0);
      pMVar23 = il2cpp_codegen_get_runtime_metadata(&MethodInfo_Settings_RuleParser_Parse);
      il2cpp_codegen_raise_exception((Il2CppObject *)pSVar22,pMVar23);
    }
    pSVar13 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_UIRule);
    System_Object___ctor((Il2CppObject *)pSVar13,(MethodInfo *)0x0);
    if (pSVar13 == (Settings_UIRule_o *)0x0) {
      ThrowNullReferenceException();
    }
    (pSVar13->fields).Type = 1;
    (pSVar13->fields).SettingId = pSVar12;
    Il2CppCodeGenWriteBarrier(&(pSVar13->fields).SettingId);
    pMVar23 = MethodInfo_System_Collections_Generic_List_UIRule_Add;
    if (__this != (System_Collections_Generic_List_UIRule__o *)0x0) {
      piVar1 = &(__this->fields)._version;
      *piVar1 = *piVar1 + 1;
      pSVar5 = (__this->fields)._items;
      if (pSVar5 != (Settings_UIRule_array *)0x0) {
        uVar2 = (__this->fields)._size;
        if (uVar2 < (uint)pSVar5->max_length) {
          (__this->fields)._size = uVar2 + 1;
          pSVar5->m_Items[(int)uVar2] = pSVar13;
          Il2CppCodeGenWriteBarrier(pSVar5->m_Items + (int)uVar2);
          pIVar10 = local_80;
        }
        else {
          System_Collections_Generic_List_object___AddWithResize
                    ((System_Collections_Generic_List_object__o *)__this,(Il2CppObject *)pSVar13,
                     (MethodInfo_395D230 *)pMVar23->klass->rgctx_data[0xe].method);
          pIVar10 = local_80;
        }
        goto joined_r0x05b3a808;
      }
    }
    ThrowNullReferenceException();
  }
  bVar8 = System_String__StartsWith(pSVar12,"+",(MethodInfo *)0x0);
  if (bVar8) {
    pSVar12 = System_String__Substring(pSVar12,1,(MethodInfo *)0x0);
    if (pSVar12 == (System_String_o *)0x0) {
      ThrowNullReferenceException();
    }
    pSVar12 = System_String__Trim(pSVar12,(MethodInfo *)0x0);
    if (pSVar12 == (System_String_o *)0x0) {
      ThrowNullReferenceException();
    }
    if ((pSVar12->fields)._stringLength == 0) {
      pSVar12 = il2cpp_codegen_get_runtime_metadata(&"Show rule is missing a setting ID: ");
      pSVar11 = System_String__Concat_52f0320(pSVar12,pSVar11,(MethodInfo *)0x0);
      pIVar21 = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_FormatException);
      pSVar22 = (System_FormatException_o *)il2cpp_codegen_object_new(pIVar21);
      System_FormatException___ctor_549ecd0(pSVar22,pSVar11,(MethodInfo *)0x0);
      pMVar23 = il2cpp_codegen_get_runtime_metadata(&MethodInfo_Settings_RuleParser_Parse);
      il2cpp_codegen_raise_exception((Il2CppObject *)pSVar22,pMVar23);
    }
    bVar8 = System_String__Contains(pSVar12,"=",(MethodInfo *)0x0);
    if (!bVar8) {
      pSVar13 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_UIRule);
      System_Object___ctor((Il2CppObject *)pSVar13,(MethodInfo *)0x0);
      if (pSVar13 == (Settings_UIRule_o *)0x0) {
        ThrowNullReferenceException();
      }
      (pSVar13->fields).Type = 0;
      (pSVar13->fields).SettingId = pSVar12;
      Il2CppCodeGenWriteBarrier(&(pSVar13->fields).SettingId);
      pMVar23 = MethodInfo_System_Collections_Generic_List_UIRule_Add;
      if (__this != (System_Collections_Generic_List_UIRule__o *)0x0) {
        piVar1 = &(__this->fields)._version;
        *piVar1 = *piVar1 + 1;
        pSVar5 = (__this->fields)._items;
        if (pSVar5 != (Settings_UIRule_array *)0x0) {
          uVar2 = (__this->fields)._size;
          if (uVar2 < (uint)pSVar5->max_length) {
            (__this->fields)._size = uVar2 + 1;
            pSVar5->m_Items[(int)uVar2] = pSVar13;
            Il2CppCodeGenWriteBarrier(pSVar5->m_Items + (int)uVar2);
            pIVar10 = local_80;
          }
          else {
            System_Collections_Generic_List_object___AddWithResize
                      ((System_Collections_Generic_List_object__o *)__this,(Il2CppObject *)pSVar13,
                       (MethodInfo_395D230 *)pMVar23->klass->rgctx_data[0xe].method);
            pIVar10 = local_80;
          }
          goto joined_r0x05b3a808;
        }
      }
      ThrowNullReferenceException();
    }
  }
  if ((TypeInfo_System_Text_RegularExpressions_Regex->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Text_RegularExpressions_Regex);
  }
  __this_00 = System_Text_RegularExpressions_Regex__Match(pSVar12,"^([^=]+)=([^\\[\\{]+)(?:\\[\\s*(-?(?:\\d+(?:\\.\\d+)?|\\.\\d+))\\s*-\\s*(-?(?:\\d+(?:\\.\\d+)?|\\.\\d+))\\s*\\])?(?:\\{([^\\}]+)\\})?$",(MethodInfo *)0x0);
  if (__this_00 == (System_Text_RegularExpressions_Match_o *)0x0) {
    ThrowNullReferenceException();
  }
  bVar8 = System_Text_RegularExpressions_Group__get_Success
                    ((System_Text_RegularExpressions_Group_o *)__this_00,(MethodInfo *)0x0);
  if (!bVar8) {
    pSVar12 = il2cpp_codegen_get_runtime_metadata(&"Invalid experience rule: ");
    pSVar11 = System_String__Concat_52f0320(pSVar12,pSVar11,(MethodInfo *)0x0);
    pIVar21 = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_FormatException);
    pSVar22 = (System_FormatException_o *)il2cpp_codegen_object_new(pIVar21);
    System_FormatException___ctor_549ecd0(pSVar22,pSVar11,(MethodInfo *)0x0);
    pMVar23 = il2cpp_codegen_get_runtime_metadata(&MethodInfo_Settings_RuleParser_Parse);
    il2cpp_codegen_raise_exception((Il2CppObject *)pSVar22,pMVar23);
  }
  local_48 = __this_00;
  if (__this_00 == (System_Text_RegularExpressions_Match_o *)0x0) {
    ThrowNullReferenceException();
  }
  pSVar14 = (*(__this_00->klass->vtable)._5_get_Groups.methodPtr)
                      (__this_00,(__this_00->klass->vtable)._5_get_Groups.method);
  if (pSVar14 == (System_Text_RegularExpressions_GroupCollection_o *)0x0) {
    ThrowNullReferenceException();
  }
  pSVar15 = System_Text_RegularExpressions_GroupCollection__get_Item(pSVar14,1,(MethodInfo *)0x0);
  if (pSVar15 == (System_Text_RegularExpressions_Group_o *)0x0) {
    ThrowNullReferenceException();
  }
  pSVar12 = System_Text_RegularExpressions_Capture__get_Value
                      ((System_Text_RegularExpressions_Capture_o *)pSVar15,(MethodInfo *)0x0);
  if (pSVar12 == (System_String_o *)0x0) {
    ThrowNullReferenceException();
  }
  local_88 = (System_String_array *)System_String__Trim(pSVar12,(MethodInfo *)0x0);
  pSVar14 = (*(__this_00->klass->vtable)._5_get_Groups.methodPtr)
                      (__this_00,(__this_00->klass->vtable)._5_get_Groups.method);
  if (pSVar14 == (System_Text_RegularExpressions_GroupCollection_o *)0x0) {
    ThrowNullReferenceException();
  }
  pSVar15 = System_Text_RegularExpressions_GroupCollection__get_Item(pSVar14,2,(MethodInfo *)0x0);
  if (pSVar15 == (System_Text_RegularExpressions_Group_o *)0x0) {
    ThrowNullReferenceException();
  }
  pSVar12 = System_Text_RegularExpressions_Capture__get_Value
                      ((System_Text_RegularExpressions_Capture_o *)pSVar15,(MethodInfo *)0x0);
  if (pSVar12 == (System_String_o *)0x0) {
    ThrowNullReferenceException();
  }
  pSVar12 = System_String__Trim(pSVar12,(MethodInfo *)0x0);
  pSVar14 = (*(__this_00->klass->vtable)._5_get_Groups.methodPtr)
                      (__this_00,(__this_00->klass->vtable)._5_get_Groups.method);
  if (pSVar14 == (System_Text_RegularExpressions_GroupCollection_o *)0x0) {
    ThrowNullReferenceException();
  }
  pSVar15 = System_Text_RegularExpressions_GroupCollection__get_Item(pSVar14,3,(MethodInfo *)0x0);
  if (pSVar15 == (System_Text_RegularExpressions_Group_o *)0x0) {
    ThrowNullReferenceException();
  }
  pSVar16 = System_Text_RegularExpressions_Capture__get_Value
                      ((System_Text_RegularExpressions_Capture_o *)pSVar15,(MethodInfo *)0x0);
  if (pSVar16 == (System_String_o *)0x0) {
    ThrowNullReferenceException();
  }
  local_50 = System_String__Trim(pSVar16,(MethodInfo *)0x0);
  pSVar14 = (*(__this_00->klass->vtable)._5_get_Groups.methodPtr)
                      (__this_00,(__this_00->klass->vtable)._5_get_Groups.method);
  if (pSVar14 == (System_Text_RegularExpressions_GroupCollection_o *)0x0) {
    ThrowNullReferenceException();
  }
  pSVar15 = System_Text_RegularExpressions_GroupCollection__get_Item(pSVar14,4,(MethodInfo *)0x0);
  if (pSVar15 == (System_Text_RegularExpressions_Group_o *)0x0) {
    ThrowNullReferenceException();
  }
  pSVar16 = System_Text_RegularExpressions_Capture__get_Value
                      ((System_Text_RegularExpressions_Capture_o *)pSVar15,(MethodInfo *)0x0);
  if (pSVar16 == (System_String_o *)0x0) {
    ThrowNullReferenceException();
  }
  local_70 = System_String__Trim(pSVar16,(MethodInfo *)0x0);
  pSVar14 = (*(__this_00->klass->vtable)._5_get_Groups.methodPtr)
                      (__this_00,(__this_00->klass->vtable)._5_get_Groups.method);
  pSVar18 = local_88;
  if (pSVar14 == (System_Text_RegularExpressions_GroupCollection_o *)0x0) {
    ThrowNullReferenceException();
  }
  pSVar15 = System_Text_RegularExpressions_GroupCollection__get_Item(pSVar14,5,(MethodInfo *)0x0);
  if (pSVar15 == (System_Text_RegularExpressions_Group_o *)0x0) {
    ThrowNullReferenceException();
  }
  pSVar16 = System_Text_RegularExpressions_Capture__get_Value
                      ((System_Text_RegularExpressions_Capture_o *)pSVar15,(MethodInfo *)0x0);
  if (pSVar16 == (System_String_o *)0x0) {
    ThrowNullReferenceException();
  }
  local_68 = System_String__Trim(pSVar16,(MethodInfo *)0x0);
  if (pSVar18 == (System_String_array *)0x0) {
    ThrowNullReferenceException();
  }
  if (((System_String_Fields *)&pSVar18->bounds)->_stringLength != 0) {
    if (pSVar12 == (System_String_o *)0x0) {
      ThrowNullReferenceException();
    }
    if ((pSVar12->fields)._stringLength != 0) {
      pSVar13 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_UIRule);
      System_Object___ctor((Il2CppObject *)pSVar13,(MethodInfo *)0x0);
      if (pSVar13 == (Settings_UIRule_o *)0x0) {
        ThrowNullReferenceException();
      }
      (pSVar13->fields).SettingId = (System_String_o *)local_88;
      Il2CppCodeGenWriteBarrier(&(pSVar13->fields).SettingId);
      (pSVar13->fields).DefaultValue = (Il2CppObject *)pSVar12;
      Il2CppCodeGenWriteBarrier(&(pSVar13->fields).DefaultValue);
      pSVar12 = local_50;
      (pSVar13->fields).DisableEditing = bVar7;
      bVar7 = System_String__IsNullOrEmpty(local_50,(MethodInfo *)0x0);
      if ((!bVar7) || (bVar7 = System_String__IsNullOrEmpty(local_70,(MethodInfo *)0x0), !bVar7)) {
        if ((TypeInfo_System_Globalization_CultureInfo->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Globalization_CultureInfo);
        }
        pSVar17 = System_Globalization_CultureInfo__get_InvariantCulture((MethodInfo *)0x0);
        bVar7 = System_Single__TryParse_54d11a0
                          (pSVar12,0xa7,(System_IFormatProvider_o *)pSVar17,&local_74,(MethodInfo *)0x0);
        if (!bVar7) {
label_05b3b3cd:
          pSVar12 = il2cpp_codegen_get_runtime_metadata(&"Invalid experience rule range: ");
          pSVar11 = System_String__Concat_52f0320(pSVar12,pSVar11,(MethodInfo *)0x0);
          pIVar21 = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_FormatException);
          pSVar22 = (System_FormatException_o *)il2cpp_codegen_object_new(pIVar21);
          System_FormatException___ctor_549ecd0(pSVar22,pSVar11,(MethodInfo *)0x0);
          pMVar23 = il2cpp_codegen_get_runtime_metadata(&MethodInfo_Settings_RuleParser_Parse);
          il2cpp_codegen_raise_exception((Il2CppObject *)pSVar22,pMVar23);
        }
        if ((TypeInfo_System_Globalization_CultureInfo->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Globalization_CultureInfo);
        }
        pSVar17 = System_Globalization_CultureInfo__get_InvariantCulture((MethodInfo *)0x0);
        bVar7 = System_Single__TryParse_54d11a0
                          (local_70,0xa7,(System_IFormatProvider_o *)pSVar17,&local_8c,(MethodInfo *)0x0);
        if ((!bVar7) || (local_8c < local_74)) goto label_05b3b3cd;
        local_58.hasValue = false;
        local_58._1_3_ = 0;
        local_58.value = 0.0;
        System_Nullable_float____ctor
                  ((System_Nullable_float__o *)&local_58,local_74,
                   (MethodInfo_3CDA2B0 *)MethodInfo_System_Nullable_float_ctor);
        (pSVar13->fields).Min.fields = local_58;
        local_60.hasValue = false;
        local_60._1_3_ = 0;
        local_60.value = 0.0;
        System_Nullable_float____ctor
                  ((System_Nullable_float__o *)&local_60,local_8c,
                   (MethodInfo_3CDA2B0 *)MethodInfo_System_Nullable_float_ctor);
        (pSVar13->fields).Max.fields = local_60;
        (pSVar13->fields).Type = 4;
      }
      bVar7 = System_String__IsNullOrEmpty(local_68,(MethodInfo *)0x0);
      if (!bVar7) {
        if (local_68 == (System_String_o *)0x0) {
          ThrowNullReferenceException();
        }
        pSVar18 = System_String__Split(local_68,0x2c,0,(MethodInfo *)0x0);
        if ((TypeInfo_Settings_RuleParser_c->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Settings_RuleParser_c);
          pSVar19 = TypeInfo_Settings_RuleParser_c->static_fields;
          __this_01 = pSVar19->__9__0_0;
        }
        else {
          pSVar19 = TypeInfo_Settings_RuleParser_c->static_fields;
          __this_01 = pSVar19->__9__0_0;
        }
        if (__this_01 == (System_Func_string__string__o *)0x0) {
          if ((((Il2CppClass *)TypeInfo_Settings_RuleParser_c)->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Settings_RuleParser_c);
            pSVar19 = TypeInfo_Settings_RuleParser_c->static_fields;
          }
          pIVar10 = (Il2CppObject *)pSVar19->__9;
          local_88 = pSVar18;
          __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_string_string);
          System_Func_object__object____ctor
                    ((System_Func_object__object__o *)__this_01,pIVar10,
                     (intptr_t)MethodInfo_Settings_RuleParser_c_Parse_b__0_0,(MethodInfo_4F19B50 *)0x0);
          pSVar19 = TypeInfo_Settings_RuleParser_c->static_fields;
          pSVar19->__9__0_0 = __this_01;
          Il2CppCodeGenWriteBarrier(&pSVar19->__9__0_0);
          pSVar18 = local_88;
        }
        pSVar18 = (System_String_array *)
                  System_Linq_Enumerable__Select_object__object_
                            ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar18,
                             (System_Func_TSource__TResult__o *)__this_01,
                             (MethodInfo_34F60F0 *)MethodInfo_System_Linq_Enumerable_Select_string_string);
        if ((TypeInfo_Settings_RuleParser_c->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Settings_RuleParser_c);
          pSVar19 = TypeInfo_Settings_RuleParser_c->static_fields;
          __this_02 = pSVar19->__9__0_1;
        }
        else {
          pSVar19 = TypeInfo_Settings_RuleParser_c->static_fields;
          __this_02 = pSVar19->__9__0_1;
        }
        if (__this_02 == (System_Func_string__bool__o *)0x0) {
          if ((((Il2CppClass *)TypeInfo_Settings_RuleParser_c)->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Settings_RuleParser_c);
            pSVar19 = TypeInfo_Settings_RuleParser_c->static_fields;
          }
          pIVar10 = (Il2CppObject *)pSVar19->__9;
          local_88 = pSVar18;
          __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_string_bool);
          System_Func_object__bool____ctor
                    ((System_Func_object__bool__o *)__this_02,pIVar10,
                     (intptr_t)MethodInfo_Settings_RuleParser_c_Parse_b__0_1,(MethodInfo_4F19300 *)0x0);
          pSVar19 = TypeInfo_Settings_RuleParser_c->static_fields;
          pSVar19->__9__0_1 = __this_02;
          Il2CppCodeGenWriteBarrier(&pSVar19->__9__0_1);
          pSVar18 = local_88;
        }
        source = System_Linq_Enumerable__Where_object_
                           ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar18,
                            (System_Func_TSource__bool__o *)__this_02,
                            (MethodInfo_3502B70 *)MethodInfo_System_Linq_Enumerable_Where_string);
        pSVar20 = (System_Collections_Generic_List_string__o *)
                  System_Linq_Enumerable__ToList_object_
                            (source,(MethodInfo_35011B0 *)MethodInfo_System_Linq_Enumerable_ToList_string);
        targetAddress = &(pSVar13->fields).AllowedValues;
        (pSVar13->fields).AllowedValues = pSVar20;
        Il2CppCodeGenWriteBarrier(targetAddress);
        pSVar20 = *targetAddress;
        if (pSVar20 == (System_Collections_Generic_List_string__o *)0x0) {
          ThrowNullReferenceException();
        }
        if ((pSVar20->fields)._size == 0) {
          pSVar12 = il2cpp_codegen_get_runtime_metadata(&"Experience rule has no allowed values: ");
          pSVar11 = System_String__Concat_52f0320(pSVar12,pSVar11,(MethodInfo *)0x0);
          pIVar21 = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_FormatException);
          pSVar22 = (System_FormatException_o *)il2cpp_codegen_object_new(pIVar21);
          System_FormatException___ctor_549ecd0(pSVar22,pSVar11,(MethodInfo *)0x0);
          pMVar23 = il2cpp_codegen_get_runtime_metadata(&MethodInfo_Settings_RuleParser_Parse);
          il2cpp_codegen_raise_exception((Il2CppObject *)pSVar22,pMVar23);
        }
        (pSVar13->fields).Type = 5;
      }
      if ((((pSVar13->fields).Min.fields.hasValue == false) &&
          ((pSVar13->fields).Max.fields.hasValue == false)) &&
         ((pSVar13->fields).AllowedValues == (System_Collections_Generic_List_string__o *)0x0)) {
        (pSVar13->fields).Type = 2;
      }
      pMVar23 = MethodInfo_System_Collections_Generic_List_UIRule_Add;
      if (__this != (System_Collections_Generic_List_UIRule__o *)0x0) {
        piVar1 = &(__this->fields)._version;
        *piVar1 = *piVar1 + 1;
        pSVar5 = (__this->fields)._items;
        if (pSVar5 != (Settings_UIRule_array *)0x0) {
          uVar2 = (__this->fields)._size;
          if (uVar2 < (uint)pSVar5->max_length) {
            (__this->fields)._size = uVar2 + 1;
            pSVar5->m_Items[(int)uVar2] = pSVar13;
            Il2CppCodeGenWriteBarrier(pSVar5->m_Items + (int)uVar2);
            pIVar10 = local_80;
          }
          else {
            System_Collections_Generic_List_object___AddWithResize
                      ((System_Collections_Generic_List_object__o *)__this,(Il2CppObject *)pSVar13,
                       (MethodInfo_395D230 *)pMVar23->klass->rgctx_data[0xe].method);
            pIVar10 = local_80;
          }
          goto joined_r0x05b3a808;
        }
      }
      ThrowNullReferenceException();
    }
  }
  pSVar12 = il2cpp_codegen_get_runtime_metadata(&"Experience rule is missing a setting ID or value: ");
  pSVar11 = System_String__Concat_52f0320(pSVar12,pSVar11,(MethodInfo *)0x0);
  pIVar21 = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_FormatException);
  pSVar22 = (System_FormatException_o *)il2cpp_codegen_object_new(pIVar21);
  System_FormatException___ctor_549ecd0(pSVar22,pSVar11,(MethodInfo *)0x0);
  pMVar23 = il2cpp_codegen_get_runtime_metadata(&MethodInfo_Settings_RuleParser_Parse);
  il2cpp_codegen_raise_exception((Il2CppObject *)pSVar22,pMVar23);
  while (lVar25 = lVar25 + 0x10, uVar24 * 0x10 != lVar25) {
label_05b3b250:
    if (*(System_IDisposable_c **)((long)&pIVar4->interfaceType + lVar25) == TypeInfo_System_IDisposable) {
      pVVar9 = (VirtualInvokeData *)&pIVar21->vtable[*(int *)((long)&pIVar4->offset + lVar25)].methodPtr;
      goto label_05b3b27d;
    }
  }
label_05b3b25f:
  pVVar9 = GetInterfaceInvokeDataFromVTableSlowPath(local_80,(Il2CppClass *)TypeInfo_System_IDisposable,0);
label_05b3b27d:
  (*pVVar9->methodPtr)(pIVar10,pVVar9->method);
  return __this;
}


