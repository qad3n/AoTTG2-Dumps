// Type: Settings.ExperienceRuleEngine
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp_body_deref/Scripts/Settings/ExperienceRuleEngine.cs
// Prior real C# source: none
// --------------------------------

// Settings.ExperienceRuleEngine$$TryGetValueName
// il2cpp: bool Settings_ExperienceRuleEngine__TryGetValueName (System_String_o* id, int32_t value, System_String_o** name, const MethodInfo* method);
// 0x59d39e0

bool Settings_ExperienceRuleEngine__TryGetValueName
               (System_String_o *id,int32_t value,System_String_o **name,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this;
  System_Type_o *pSVar1;
  bool bVar2;
  bool bVar3;
  Il2CppObject *pIVar4;
  System_String_o *pSVar5;
  int32_t local_3c;
  System_Type_o *local_38;
  
  if (Il2CppMethodInitialized_07545c8d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_Type_TryGetValue);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_ExperienceRuleEngine);
    Il2CppMethodInitialized_07545c8d = '\x01';
  }
  local_38 = (System_Type_o *)0x0;
  *name = (System_String_o *)0x0;
  bVar2 = false;
  Il2CppCodeGenWriteBarrier(name);
  if (id != (System_String_o *)0x0) {
    if ((TypeInfo_Settings_ExperienceRuleEngine->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Settings_ExperienceRuleEngine);
    }
    __this = (System_Collections_Generic_Dictionary_object__object__o *)
             TypeInfo_Settings_ExperienceRuleEngine->static_fields->NamedIntSettings;
    if (__this == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      ThrowNullReferenceException();
    }
    bVar2 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                      (__this,(Il2CppObject *)id,(Il2CppObject **)&local_38,
                       (MethodInfo_4AAF440 *)
                       MethodInfo_System_Collections_Generic_Dictionary_string_Type_TryGetValue);
    pSVar1 = local_38;
    if (bVar2) {
      local_3c = value;
      pIVar4 = il2cpp_vm_Object_Box(g_data_07556710,&local_3c);
      if ((g_data_07556760->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init(g_data_07556760);
      }
      bVar2 = false;
      bVar3 = System_Enum__IsDefined(pSVar1,pIVar4,(MethodInfo *)0x0);
      pSVar1 = local_38;
      if (bVar3) {
        local_3c = value;
        pIVar4 = il2cpp_vm_Object_Box(g_data_07556710,&local_3c);
        if ((g_data_07556760->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init(g_data_07556760);
        }
        pSVar5 = System_Enum__GetName(pSVar1,pIVar4,(MethodInfo *)0x0);
        *name = pSVar5;
        Il2CppCodeGenWriteBarrier(name);
        bVar2 = true;
      }
    }
    else {
      bVar2 = false;
    }
  }
  return bVar2;
}


// Settings.ExperienceRuleEngine$$TryParseValueName
// il2cpp: bool Settings_ExperienceRuleEngine__TryParseValueName (System_String_o* id, System_String_o* name, int32_t* value, const MethodInfo* method);
// 0x59d3b50
// eh: try 0x59d3cff..0x59d3f07 -> pad 0x59d3f26 (+9 call sites) catch Il2CppExceptionWrapper, cleanup [compiler noexcept guard]
// eh: try 0x59d3f3e..0x59d3f43 -> pad 0x59d3f48 cleanup
// eh: try 0x59d3f4b..0x59d3f55 -> pad 0x59d3f5d catch (...) [compiler noexcept guard]
// asm: 30 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x59d3cee: nop 
// asm:   0x59d3ee6: test r14, r14
// asm:   0x59d3ee9: jne 0x59d3f0c
// asm:   0x59d3f0c: mov rdi, r14
// asm:   0x59d3f0f: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x59d3f14: jmp 0x59d3f26
// asm:   0x59d3f16: jmp 0x59d3f26
// asm:   0x59d3f18: jmp 0x59d3f26
// asm:   0x59d3f1a: jmp 0x59d3f26
// asm:   0x59d3f1c: jmp 0x59d3f26
// asm:   0x59d3f1e: jmp 0x59d3f26
// asm:   0x59d3f20: jmp 0x59d3f26
// asm:   0x59d3f22: jmp 0x59d3f26
// asm:   0x59d3f24: jmp 0x59d3f26
// asm:   0x59d3f26: mov rbx, rax
// asm:   0x59d3f29: cmp edx, 1
// asm:   0x59d3f2c: jne 0x59d3f4b
// asm:   0x59d3f2e: mov rdi, rbx
// asm:   0x59d3f31: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x59d3f36: mov r14, qword ptr [rax]
// asm:   0x59d3f39: mov qword ptr [rsp + 0x20], r14
// asm:   0x59d3f3e: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x59d3f43: jmp 0x59d3e61
// asm:   0x59d3f48: mov rbx, rax
// asm:   0x59d3f4b: lea rdi, [rsp + 0x20]
// asm:   0x59d3f50: call 0x2fd5950  ; il2cpp_runtime_helper_02fd5950()
// asm:   0x59d3f55: mov rdi, rbx
// asm:   0x59d3f58: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x59d3f5d: mov rdi, rax
// asm:   0x59d3f60: call 0x2ab61e0  ; __clang_call_terminate()

bool Settings_ExperienceRuleEngine__TryParseValueName
               (System_String_o *id,System_String_o *name,int32_t *value,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this;
  Il2CppClass *pIVar1;
  Il2CppRuntimeInterfaceOffsetPair *pIVar2;
  System_Type_o *pSVar3;
  bool bVar4;
  bool bVar5;
  int32_t iVar6;
  System_Array_o *__this_00;
  VirtualInvokeData *pVVar7;
  Il2CppObject *pIVar8;
  System_String_o *a;
  System_Globalization_CultureInfo_o *provider;
  ulong uVar9;
  long lVar10;
  Il2CppObject *local_60;
  System_Type_o *local_58;
  Il2CppObject *local_50;
  undefined8 local_48;
  Il2CppObject **local_40;
  Il2CppObject **local_38;
  
  if (Il2CppMethodInitialized_07545c8e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Convert);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Globalization_CultureInfo);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_Type_TryGetValue);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_ExperienceRuleEngine);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IDisposable);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_IEnumerator);
    Il2CppMethodInitialized_07545c8e = '\x01';
  }
  local_58 = (System_Type_o *)0x0;
  local_60 = (Il2CppObject *)0x0;
  local_50 = (Il2CppObject *)0x0;
  *value = 0;
  bVar5 = false;
  if ((id != (System_String_o *)0x0) && (bVar4 = System_String__IsNullOrEmpty(name,(MethodInfo *)0x0), !bVar4)
     ) {
    if ((TypeInfo_Settings_ExperienceRuleEngine->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Settings_ExperienceRuleEngine);
    }
    __this = (System_Collections_Generic_Dictionary_object__object__o *)
             TypeInfo_Settings_ExperienceRuleEngine->static_fields->NamedIntSettings;
    if (__this == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
label_059d3f07:
      ThrowNullReferenceException();
    }
    bVar5 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                      (__this,(Il2CppObject *)id,(Il2CppObject **)&local_58,
                       (MethodInfo_4AAF440 *)
                       MethodInfo_System_Collections_Generic_Dictionary_string_Type_TryGetValue);
    pSVar3 = local_58;
    if (bVar5) {
      if ((g_data_07556760->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init(g_data_07556760);
      }
      __this_00 = System_Enum__GetValues(pSVar3,(MethodInfo *)0x0);
      if (__this_00 == (System_Array_o *)0x0) goto label_059d3f07;
      local_60 = (Il2CppObject *)System_Array__GetEnumerator(__this_00,(MethodInfo *)0x0);
      local_48 = 0;
      local_40 = &local_60;
      local_38 = &local_50;
      do {
        pIVar8 = local_60;
        if (local_60 == (Il2CppObject *)0x0) {
          ThrowNullReferenceException();
        }
        pIVar1 = local_60->klass;
        uVar9 = (ulong)(pIVar1->_2).interface_offsets_count;
        if (uVar9 != 0) {
          pIVar2 = (pIVar1->_1).interfaceOffsets;
          lVar10 = 0;
          do {
            if (*(System_Collections_IEnumerator_c **)((long)&pIVar2->interfaceType + lVar10) ==
                TypeInfo_System_Collections_IEnumerator) {
              pVVar7 = pIVar1->vtable + *(int *)((long)&pIVar2->offset + lVar10);
              goto label_059d3d23;
            }
            lVar10 = lVar10 + 0x10;
          } while (uVar9 * 0x10 != lVar10);
        }
        pVVar7 = GetInterfaceInvokeDataFromVTableSlowPath
                           (local_60,(Il2CppClass *)TypeInfo_System_Collections_IEnumerator,0);
label_059d3d23:
        bVar5 = (*pVVar7->methodPtr)(pIVar8,pVVar7->method);
        pIVar8 = local_60;
        if (!bVar5) {
          bVar5 = false;
          goto label_059d3e64;
        }
        if (local_60 == (Il2CppObject *)0x0) {
          ThrowNullReferenceException();
        }
        pIVar1 = local_60->klass;
        uVar9 = (ulong)(pIVar1->_2).interface_offsets_count;
        if (uVar9 != 0) {
          pIVar2 = (pIVar1->_1).interfaceOffsets;
          lVar10 = 0;
          do {
            if (*(System_Collections_IEnumerator_c **)((long)&pIVar2->interfaceType + lVar10) ==
                TypeInfo_System_Collections_IEnumerator) {
              pVVar7 = pIVar1->vtable + (*(int *)((long)&pIVar2->offset + lVar10) + 1);
              goto label_059d3db7;
            }
            lVar10 = lVar10 + 0x10;
          } while (uVar9 * 0x10 != lVar10);
        }
        pVVar7 = GetInterfaceInvokeDataFromVTableSlowPath
                           (local_60,(Il2CppClass *)TypeInfo_System_Collections_IEnumerator,1);
label_059d3db7:
        pIVar8 = (*pVVar7->methodPtr)(pIVar8,pVVar7->method);
        pSVar3 = local_58;
        if ((g_data_07556760->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init(g_data_07556760);
        }
        a = System_Enum__GetName(pSVar3,pIVar8,(MethodInfo *)0x0);
        bVar5 = System_String__Equals_52ffe30(a,name,5,(MethodInfo *)0x0);
      } while (!bVar5);
      if ((TypeInfo_System_Globalization_CultureInfo->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Globalization_CultureInfo);
      }
      provider = System_Globalization_CultureInfo__get_InvariantCulture((MethodInfo *)0x0);
      if ((TypeInfo_System_Convert->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Convert);
      }
      iVar6 = System_Convert__ToInt32_5423de0(pIVar8,(System_IFormatProvider_o *)provider,(MethodInfo *)0x0);
      *value = iVar6;
      bVar5 = true;
label_059d3e64:
      pIVar8 = il2cpp_vm_Object_IsInst(local_60,(Il2CppClass *)TypeInfo_System_IDisposable);
      if (pIVar8 != (Il2CppObject *)0x0) {
        pIVar1 = pIVar8->klass;
        uVar9 = (ulong)(pIVar1->_2).interface_offsets_count;
        local_50 = pIVar8;
        if (uVar9 != 0) {
          pIVar2 = (pIVar1->_1).interfaceOffsets;
          lVar10 = 0;
          do {
            if (*(System_IDisposable_c **)((long)&pIVar2->interfaceType + lVar10) ==
                TypeInfo_System_IDisposable) {
              pVVar7 = pIVar1->vtable + *(int *)((long)&pIVar2->offset + lVar10);
              goto label_059d3edd;
            }
            lVar10 = lVar10 + 0x10;
          } while (uVar9 * 0x10 != lVar10);
        }
        pVVar7 = GetInterfaceInvokeDataFromVTableSlowPath(pIVar8,(Il2CppClass *)TypeInfo_System_IDisposable,0)
        ;
label_059d3edd:
        (*pVVar7->methodPtr)(pIVar8,pVVar7->method);
      }
    }
    else {
      bVar5 = false;
    }
  }
  return bVar5;
}


// Settings.ExperienceRuleEngine$$Apply
// il2cpp: Settings_ExperienceRuleResult_o* Settings_ExperienceRuleEngine__Apply (Settings_PresetDefinition_o* experience, Settings_InGameSet_o* settings, System_Func_string__string__o* mapCategoryResolver, System_String_o* variant, const MethodInfo* method);
// 0x59d3f70
// eh: try 0x59d41ce..0x59d448a -> pad 0x59d504b (+15 call sites) catch Il2CppExceptionWrapper, cleanup [managed catch: TypeInfo_System_Exception]
// eh: try 0x59d45bf..0x59d4dc6 -> pad 0x59d511f (+36 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x59d4f0a..0x59d4f15 -> pad 0x59d504f catch Il2CppExceptionWrapper, cleanup [managed catch: TypeInfo_System_Exception]
// eh: try 0x59d4f2a..0x59d4f53 -> pad 0x59d5123 (+6 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x59d4f53..0x59d4f76 -> pad 0x59d504f (+5 call sites) catch Il2CppExceptionWrapper, cleanup [managed catch: TypeInfo_System_Exception]
// eh: try 0x59d4f76..0x59d4f7b -> pad 0x59d5021 catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x59d4f7b..0x59d4f85 -> pad 0x59d5026 (+1 call sites) catch Il2CppExceptionWrapper, cleanup [managed catch: TypeInfo_System_Exception]
// eh: try 0x59d4f85..0x59d4f9e -> pad 0x59d4fee (+4 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x59d5066..0x59d50f7 -> pad 0x59d50f7 (+1 call sites) cleanup
// eh: try 0x59d50fa..0x59d50ff -> pad 0x59d517f catch (...) [compiler noexcept guard]
// eh: try 0x59d513b..0x59d5140 -> pad 0x59d516a cleanup
// eh: try 0x59d516d..0x59d5177 -> pad 0x59d517f catch (...) [compiler noexcept guard]
// asm: 135 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x59d42df: mov r14, r13
// asm:   0x59d42e2: jmp 0x59d44d9
// asm:   0x59d4c8e: mov rdi, qword ptr [rsp + 0x28]
// asm:   0x59d4c93: mov rbx, qword ptr [rsp + 0x30]
// asm:   0x59d4c98: mov rdx, r15
// asm:   0x59d4f9e: jmp 0x59d5123
// asm:   0x59d4fa3: jmp 0x59d5123
// asm:   0x59d4fa8: jmp 0x59d5123
// asm:   0x59d4fad: jmp 0x59d5123
// asm:   0x59d4fb2: jmp 0x59d5123
// asm:   0x59d4fb7: jmp 0x59d5123
// asm:   0x59d4fbc: jmp 0x59d5123
// asm:   0x59d4fc1: jmp 0x59d5123
// asm:   0x59d4fc6: jmp 0x59d5123
// asm:   0x59d4fcb: jmp 0x59d5123
// asm:   0x59d4fd0: jmp 0x59d5123
// asm:   0x59d4fd5: jmp 0x59d5123
// asm:   0x59d4fda: jmp 0x59d5123
// asm:   0x59d4fdf: jmp 0x59d5123
// asm:   0x59d4fe4: jmp 0x59d5123
// asm:   0x59d4fe9: jmp 0x59d5123
// asm:   0x59d4fee: jmp 0x59d5123
// asm:   0x59d4ff3: jmp 0x59d5123
// asm:   0x59d4ff8: jmp 0x59d5123
// asm:   0x59d4ffd: jmp 0x59d5123
// asm:   0x59d5002: jmp 0x59d5123
// asm:   0x59d5007: jmp 0x59d5123
// asm:   0x59d500c: jmp 0x59d5123
// asm:   0x59d5011: jmp 0x59d5123
// asm:   0x59d5016: jmp 0x59d5123
// asm:   0x59d501b: jmp 0x59d504f
// asm:   0x59d501d: jmp 0x59d504f
// asm:   0x59d501f: jmp 0x59d504f
// asm:   0x59d5021: jmp 0x59d5123
// asm:   0x59d5026: jmp 0x59d504f
// asm:   0x59d5028: jmp 0x59d504f
// asm:   0x59d502a: jmp 0x59d504f
// asm:   0x59d502c: jmp 0x59d504f
// asm:   0x59d502e: jmp 0x59d504f
// asm:   0x59d5030: jmp 0x59d5123
// asm:   0x59d5035: jmp 0x59d504f
// asm:   0x59d5037: jmp 0x59d504f
// asm:   0x59d5039: jmp 0x59d504f
// asm:   0x59d503b: jmp 0x59d504f
// asm:   0x59d503d: jmp 0x59d504f
// asm:   0x59d503f: jmp 0x59d5123
// asm:   0x59d5044: jmp 0x59d5123
// asm:   0x59d5049: jmp 0x59d504f
// asm:   0x59d504b: jmp 0x59d504f
// asm:   0x59d504d: jmp 0x59d504f
// asm:   0x59d504f: mov rbp, rax
// asm:   0x59d5052: cmp edx, 1
// asm:   0x59d5055: jne 0x59d5177
// asm:   0x59d505b: mov rdi, rbp
// asm:   0x59d505e: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x59d5063: mov rbx, rax
// asm:   0x59d5066: lea rdi, [rip + 0x18a3053]  ; TypeInfo_System_Exception
// asm:   0x59d506d: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x59d5072: mov rcx, qword ptr [rbx]
// asm:   0x59d5075: mov rsi, qword ptr [rcx]
// asm:   0x59d5078: mov rdi, rax
// asm:   0x59d507b: call 0x30d6910  ; il2cpp_runtime_helper_030d6910()
// asm:   0x59d5080: test al, al
// asm:   0x59d5082: je 0x59d50d6
// asm:   0x59d5084: mov rbp, qword ptr [rbx]
// asm:   0x59d5087: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x59d508c: test rbp, rbp
// asm:   0x59d508f: je 0x59d50d1
// asm:   0x59d5091: mov rbx, qword ptr [r12 + 0x20]
// asm:   0x59d5096: mov rax, qword ptr [rbp]
// asm:   0x59d509a: mov rsi, qword ptr [rax + 0x190]
// asm:   0x59d50a1: mov rdi, rbp
// asm:   0x59d50a4: call qword ptr [rax + 0x188]  ; vtable slot 5
// asm:   0x59d50aa: test rbx, rbx
// asm:   0x59d50ad: je 0x59d50d1
// asm:   0x59d50af: mov rbp, rax
// asm:   0x59d50b2: lea rdi, [rip + 0x18c189f]  ; MethodInfo_System_Collections_Generic_List_string_Add
// asm:   0x59d50b9: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x59d50be: mov rdi, rbx
// asm:   0x59d50c1: mov rsi, rbp
// asm:   0x59d50c4: mov rdx, rax
// asm:   0x59d50c7: call 0x2fa8fa0  ; il2cpp_runtime_helper_02fa8fa0()
// asm:   0x59d50cc: jmp 0x59d4f15
// asm:   0x59d50d6: mov edi, 8
// asm:   0x59d50db: call 0x6e255b0  ; __cxa_allocate_exception()
// asm:   0x59d50e0: mov rcx, qword ptr [rbx]
// asm:   0x59d50e3: mov qword ptr [rax], rcx
// asm:   0x59d50e6: lea rsi, [rip + 0x1458413]
// asm:   0x59d50ed: mov rdi, rax
// asm:   0x59d50f0: xor edx, edx
// asm:   0x59d50f2: call 0x6e255c0  ; __cxa_throw()
// asm:   0x59d50f7: mov rbp, rax
// asm:   0x59d50fa: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x59d50ff: jmp 0x59d5177
// asm:   0x59d5101: jmp 0x59d5123
// asm:   0x59d5103: jmp 0x59d5123
// asm:   0x59d5105: jmp 0x59d5123
// asm:   0x59d5107: jmp 0x59d5123
// asm:   0x59d5109: jmp 0x59d5123
// asm:   0x59d510b: jmp 0x59d5123
// asm:   0x59d510d: jmp 0x59d5123
// asm:   0x59d510f: jmp 0x59d5123
// asm:   0x59d5111: jmp 0x59d5123
// asm:   0x59d5113: jmp 0x59d5123
// asm:   0x59d5115: jmp 0x59d5123
// asm:   0x59d5117: jmp 0x59d5123
// asm:   0x59d5119: jmp 0x59d5123
// asm:   0x59d511b: jmp 0x59d5123
// asm:   0x59d511d: jmp 0x59d5123
// asm:   0x59d511f: jmp 0x59d5123
// asm:   0x59d5121: jmp 0x59d5123
// asm:   0x59d5123: mov rbp, rax
// asm:   0x59d5126: cmp edx, 1
// asm:   0x59d5129: jne 0x59d516d
// asm:   0x59d512b: mov rdi, rbp
// asm:   0x59d512e: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x59d5133: mov rbx, qword ptr [rax]
// asm:   0x59d5136: mov qword ptr [rsp + 0x78], rbx
// asm:   0x59d513b: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x59d5140: lea rax, [rip + 0x18b9c21]  ; MethodInfo_System_Collections_Generic_List_Enumerator_UIRule_Dispose
// asm:   0x59d5147: mov rsi, qword ptr [rax]
// asm:   0x59d514a: lea rdi, [rsp + 0x50]
// asm:   0x59d514f: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x59d5154: test rbx, rbx
// asm:   0x59d5157: mov r12, qword ptr [rsp + 0x40]
// asm:   0x59d515c: je 0x59d4ddc
// asm:   0x59d5162: mov rdi, rbx
// asm:   0x59d5165: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x59d516a: mov rbp, rax
// asm:   0x59d516d: lea rdi, [rsp + 0x78]
// asm:   0x59d5172: call 0x2fd59f0  ; il2cpp_runtime_helper_02fd59f0()
// asm:   0x59d5177: mov rdi, rbp
// asm:   0x59d517a: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x59d517f: mov rdi, rax
// asm:   0x59d5182: call 0x2ab61e0  ; __clang_call_terminate()

Settings_ExperienceRuleResult_o *
Settings_ExperienceRuleEngine__Apply
          (Settings_PresetDefinition_o *experience,Settings_InGameSet_o *settings,
          System_Func_string__string__o *mapCategoryResolver,System_String_o *variant,MethodInfo *method)

{
  int32_t *piVar1;
  byte bVar2;
  uint32_t uVar3;
  int iVar4;
  System_Collections_Generic_Dictionary_object__object__o *pSVar5;
  System_OrdinalIgnoreCaseComparer_o *comparer;
  Settings_InGameModeSettings_o *pSVar6;
  Settings_InGameGeneralSettings_o *pSVar7;
  Settings_StringSetting_o *pSVar8;
  Il2CppObject *ruleValue;
  Settings_ExperienceRuleField_array *pSVar9;
  Settings_BoolSetting_o *__this;
  Settings_ExperienceRuleField_o *pSVar10;
  Settings_BaseSetting_o *pSVar11;
  Settings_UIRule_o *pSVar12;
  bool bVar13;
  int32_t iVar14;
  Settings_ExperienceRuleResult_o *pSVar15;
  Settings_PresetDefinition_o *pSVar16;
  System_Collections_Generic_List_UIRule__o *__this_00;
  System_String_o **ppSVar17;
  System_String_array *pSVar18;
  System_Collections_Generic_HashSet_string__o *__this_01;
  System_String_o *pSVar19;
  undefined7 extraout_var;
  Settings_ExperienceRuleField_o *__this_02;
  System_String_o **method_00;
  undefined8 uVar20;
  Settings_StringSetting_c *method_01;
  MethodInfo *pMVar21;
  Settings_ExperienceRuleResult_Fields *targetAddress;
  uint uVar22;
  Settings_InGameSet_o *pSVar23;
  Settings_ExperienceRuleField_o *item;
  System_Collections_Generic_List_string__o *pSVar24;
  System_Collections_Generic_List_ExperienceRuleField__o *__this_03;
  System_String_o *value;
  bool bVar25;
  Settings_BaseSetting_o *local_c8;
  Il2CppObject *local_c0;
  undefined8 local_b8;
  System_Collections_Generic_List_ExperienceRuleField__o *local_b0;
  Settings_ExperienceRuleField_o *local_a8;
  Settings_InGameSet_o *local_a0;
  Settings_ExperienceRuleResult_o *local_98;
  System_Collections_Generic_List_string__o *local_90;
  undefined1 local_88 [8];
  undefined1 *puStack_80;
  Settings_UIRule_o *local_78;
  Settings_ExperienceRuleField_o *local_70;
  System_Func_string__string__o *local_68;
  undefined1 local_60 [16];
  Settings_UIRule_o *local_50;
  Settings_PresetDefinition_o *local_48;
  System_String_o *local_40;
  System_Collections_Generic_HashSet_string__o *local_38;
  
  pSVar23 = settings;
  local_68 = mapCategoryResolver;
  if (Il2CppMethodInitialized_07545c8f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_List_string_TryGetValue);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_BaseSetting_get_Count);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_UIRule_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_UIRule_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_UIRule_get_Current);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_ExperienceRuleEngine);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_ExperienceRuleField);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_ExperienceRuleResult);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_string_ctor_7191708);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_string);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_ExperienceRuleField_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_UIRule_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_float_get_HasValue);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_PresetDefinition);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_StringComparer);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_StringSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_set_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_set_Value);
    il2cpp_codegen_initialize_runtime_metadata(&"Experience is missing.");
    il2cpp_codegen_initialize_runtime_metadata(&"general.MapCategory");
    il2cpp_codegen_initialize_runtime_metadata(&"general.MapName");
    il2cpp_codegen_initialize_runtime_metadata(&"Default value is not allowed for ");
    il2cpp_codegen_initialize_runtime_metadata(&"Unknown variant ");
    il2cpp_codegen_initialize_runtime_metadata(&"Default value is outside the setting constraints for ");
    il2cpp_codegen_initialize_runtime_metadata(&" for experience ");
    il2cpp_codegen_initialize_runtime_metadata(&"general.Weather");
    il2cpp_codegen_initialize_runtime_metadata(&"Duplicate experience rule: ");
    il2cpp_codegen_initialize_runtime_metadata(&"Experience contains a rule without a setting ID.");
    il2cpp_codegen_initialize_runtime_metadata(&"Game settings are missing.");
    il2cpp_codegen_initialize_runtime_metadata(&"Unknown experience setting: ");
    il2cpp_codegen_initialize_runtime_metadata(&"mode.");
    il2cpp_codegen_initialize_runtime_metadata(&".");
    Il2CppMethodInitialized_07545c8f = '\x01';
  }
  local_90 = (System_Collections_Generic_List_string__o *)0x0;
  local_88 = (undefined1  [8])0x0;
  puStack_80 = (undefined1 *)0x0;
  local_78 = (Settings_UIRule_o *)0x0;
  local_c8 = (Settings_BaseSetting_o *)0x0;
  pSVar15 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_ExperienceRuleResult);
  Settings_ExperienceRuleResult___ctor(pSVar15,(MethodInfo *)pSVar23);
  if (pSVar15 == (Settings_ExperienceRuleResult_o *)0x0) goto label_059d50d1;
  targetAddress = &pSVar15->fields;
  (pSVar15->fields).Experience = experience;
  Il2CppCodeGenWriteBarrier(&targetAddress->Experience);
  pMVar21 = MethodInfo_System_Collections_Generic_List_string_Add;
  if (experience == (Settings_PresetDefinition_o *)0x0) {
    pSVar24 = (pSVar15->fields).Errors;
    if (pSVar24 == (System_Collections_Generic_List_string__o *)0x0) goto label_059d50d1;
    ppSVar17 = &"Experience is missing.";
  }
  else {
    if (settings != (Settings_InGameSet_o *)0x0) {
      bVar13 = System_String__IsNullOrEmpty(variant,(MethodInfo *)0x0);
      if (bVar13) {
        variant = Settings_PresetDefinition__get_DefaultVariant(experience,(MethodInfo *)0x0);
      }
      bVar13 = System_String__IsNullOrEmpty(variant,(MethodInfo *)0x0);
      if (!bVar13) {
        pSVar5 = (System_Collections_Generic_Dictionary_object__object__o *)(experience->fields).Variants;
        if (((pSVar5 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) ||
            (bVar13 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                                (pSVar5,(Il2CppObject *)variant,(Il2CppObject **)&local_90,
                                 (MethodInfo_4AAF440 *)
                                 MethodInfo_System_Collections_Generic_Dictionary_string_List_string_TryGetValue
                                ), !bVar13)) || (local_90 == (System_Collections_Generic_List_string__o *)0x0)
           ) {
          pSVar24 = (pSVar15->fields).Errors;
          pSVar18 = (System_String_array *)SZArrayNew(TypeInfo_string_array,5);
          if (pSVar18 == (System_String_array *)0x0) {
            ThrowNullReferenceException();
          }
          if ((int)pSVar18->max_length == 0) {
            ThrowIndexOutOfRangeException();
          }
          pSVar18->m_Items[0] = "Unknown variant ";
          Il2CppCodeGenWriteBarrier(pSVar18->m_Items);
          if ((pSVar18->max_length & 0xfffffffe) == 0) {
            ThrowIndexOutOfRangeException();
          }
          pSVar18->m_Items[1] = variant;
          Il2CppCodeGenWriteBarrier(pSVar18->m_Items + 1);
          if ((uint)pSVar18->max_length < 3) {
            ThrowIndexOutOfRangeException();
          }
          pSVar18->m_Items[2] = " for experience ";
          Il2CppCodeGenWriteBarrier(pSVar18->m_Items + 2);
          if ((pSVar18->max_length & 0xfffffffc) == 0) {
            ThrowIndexOutOfRangeException();
          }
          pSVar18->m_Items[3] = (experience->fields).Name;
          Il2CppCodeGenWriteBarrier(pSVar18->m_Items + 3);
          if ((uint)pSVar18->max_length < 5) {
            ThrowIndexOutOfRangeException();
          }
          pSVar18->m_Items[4] = ".";
          Il2CppCodeGenWriteBarrier(pSVar18->m_Items + 4);
          pSVar19 = System_String__Concat_5302910(pSVar18,(MethodInfo *)0x0);
          pMVar21 = MethodInfo_System_Collections_Generic_List_string_Add;
          if (pSVar24 != (System_Collections_Generic_List_string__o *)0x0) {
            piVar1 = &(pSVar24->fields)._version;
            *piVar1 = *piVar1 + 1;
            pSVar18 = (pSVar24->fields)._items;
            if (pSVar18 != (System_String_array *)0x0) {
              uVar22 = (pSVar24->fields)._size;
              if (uVar22 < (uint)pSVar18->max_length) {
                (pSVar24->fields)._size = uVar22 + 1;
                pSVar18->m_Items[(int)uVar22] = pSVar19;
                Il2CppCodeGenWriteBarrier(pSVar18->m_Items + (int)uVar22);
                return pSVar15;
              }
              System_Collections_Generic_List_object___AddWithResize
                        ((System_Collections_Generic_List_object__o *)pSVar24,(Il2CppObject *)pSVar19,
                         (MethodInfo_395D230 *)pMVar21->klass->rgctx_data[0xe].method);
              return pSVar15;
            }
          }
          ThrowNullReferenceException();
        }
        pSVar16 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_PresetDefinition);
        Settings_PresetDefinition___ctor(pSVar16,(MethodInfo *)0x0);
        if (pSVar16 == (Settings_PresetDefinition_o *)0x0) {
          ThrowNullReferenceException();
        }
        (pSVar16->fields).UIRules = local_90;
        Il2CppCodeGenWriteBarrier(&(pSVar16->fields).UIRules);
        experience = Settings_PresetMerger__Merge(experience,pSVar16,(MethodInfo *)0x0);
        targetAddress->Experience = experience;
        Il2CppCodeGenWriteBarrier(&targetAddress->Experience);
        if (experience == (Settings_PresetDefinition_o *)0x0) {
          ThrowNullReferenceException();
        }
      }
      __this_00 = Settings_PresetDefinition__get_UIRulesObject(experience,(MethodInfo *)0x0);
      local_98 = pSVar15;
      if ((TypeInfo_System_StringComparer->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_StringComparer);
        if (Il2CppMethodInitialized_07542886 != '\0') goto label_059d42cb;
label_059d44a6:
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_StringComparer);
        Il2CppMethodInitialized_07542886 = '\x01';
        uVar3 = (TypeInfo_System_StringComparer->_2).cctor_finished_or_no_cctor;
      }
      else {
        if (Il2CppMethodInitialized_07542886 == '\0') goto label_059d44a6;
label_059d42cb:
        uVar3 = (TypeInfo_System_StringComparer->_2).cctor_finished_or_no_cctor;
      }
      if (uVar3 == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_StringComparer);
      }
      comparer = TypeInfo_System_StringComparer->static_fields->s_ordinalIgnoreCase;
      __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_string)
      ;
      System_Collections_Generic_HashSet_object____ctor_4fb2f30
                ((System_Collections_Generic_HashSet_object__o *)__this_01,
                 (System_Collections_Generic_IEqualityComparer_T__o *)comparer,
                 (MethodInfo_4FB2F30 *)MethodInfo_System_Collections_Generic_HashSet_string_ctor_7191708);
      if (__this_00 != (System_Collections_Generic_List_UIRule__o *)0x0) {
        local_a0 = settings;
        local_48 = experience;
        local_40 = variant;
        System_Collections_Generic_List_object___GetEnumerator
                  ((System_Collections_Generic_List_Enumerator_T__o *)local_60,
                   (System_Collections_Generic_List_object__o *)__this_00,
                   (MethodInfo_395E050 *)MethodInfo_System_Collections_Generic_List_UIRule_GetEnumerator);
        pSVar15 = local_98;
        local_78 = local_50;
        local_88 = (undefined1  [8])local_60._0_8_;
        puStack_80 = (undefined1 *)local_60._8_8_;
        local_60._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
        local_60._8_8_ = local_88;
        if (__this_01 == (System_Collections_Generic_HashSet_string__o *)0x0) {
          while (bVar13 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                    ((System_Collections_Generic_List_Enumerator_object__o *)local_88,
                                     (MethodInfo_4C45C50 *)
                                     MethodInfo_System_Collections_Generic_List_Enumerator_UIRule_MoveNext),
                pSVar12 = local_78, bVar13) {
            if ((local_78 != (Settings_UIRule_o *)0x0) &&
               (bVar13 = System_String__IsNullOrWhiteSpace((local_78->fields).SettingId,(MethodInfo *)0x0),
               !bVar13)) {
              Settings_WeatherSettings__IsWeatherSetting((pSVar12->fields).SettingId,(MethodInfo *)0x0);
              ThrowNullReferenceException();
            }
            pSVar19 = "Experience contains a rule without a setting ID.";
            pMVar21 = MethodInfo_System_Collections_Generic_List_string_Add;
            pSVar24 = (pSVar15->fields).Errors;
            if (pSVar24 == (System_Collections_Generic_List_string__o *)0x0) goto label_059d4f2a;
            piVar1 = &(pSVar24->fields)._version;
            *piVar1 = *piVar1 + 1;
            pSVar18 = (pSVar24->fields)._items;
            if (pSVar18 == (System_String_array *)0x0) goto label_059d4f2a;
            uVar22 = (pSVar24->fields)._size;
            if (uVar22 < (uint)pSVar18->max_length) {
              (pSVar24->fields)._size = uVar22 + 1;
              pSVar18->m_Items[(int)uVar22] = pSVar19;
              Il2CppCodeGenWriteBarrier(pSVar18->m_Items + (int)uVar22);
            }
            else {
              System_Collections_Generic_List_object___AddWithResize
                        ((System_Collections_Generic_List_object__o *)pSVar24,(Il2CppObject *)pSVar19,
                         (MethodInfo_395D230 *)pMVar21->klass->rgctx_data[0xe].method);
            }
          }
        }
        else {
          local_70 = (Settings_ExperienceRuleField_o *)0x0;
          local_a8 = (Settings_ExperienceRuleField_o *)0x0;
          local_b0 = (System_Collections_Generic_List_ExperienceRuleField__o *)0x0;
          local_38 = __this_01;
label_059d45c4:
          bVar13 = System_Collections_Generic_List_Enumerator_object___MoveNext
                             ((System_Collections_Generic_List_Enumerator_object__o *)local_88,
                              (MethodInfo_4C45C50 *)
                              MethodInfo_System_Collections_Generic_List_Enumerator_UIRule_MoveNext);
          pSVar12 = local_78;
          if (bVar13) {
            if ((local_78 != (Settings_UIRule_o *)0x0) &&
               (bVar13 = System_String__IsNullOrWhiteSpace((local_78->fields).SettingId,(MethodInfo *)0x0),
               !bVar13)) {
              ppSVar17 = &(pSVar12->fields).SettingId;
              bVar13 = Settings_WeatherSettings__IsWeatherSetting(*ppSVar17,(MethodInfo *)0x0);
              method_00 = ppSVar17;
              if (bVar13) {
                method_00 = &"general.Weather";
              }
              bVar13 = System_Collections_Generic_HashSet_object___Add
                                 ((System_Collections_Generic_HashSet_object__o *)local_38,
                                  (Il2CppObject *)((MethodInfo *)method_00)->methodPointer,
                                  (MethodInfo_4FB4450 *)
                                  MethodInfo_System_Collections_Generic_HashSet_string_Add);
              if (!bVar13) {
                pSVar24 = (pSVar15->fields).Errors;
                pSVar19 = System_String__Concat_52f0320("Duplicate experience rule: ",*ppSVar17,(MethodInfo *)0x0);
                pMVar21 = MethodInfo_System_Collections_Generic_List_string_Add;
                if (pSVar24 != (System_Collections_Generic_List_string__o *)0x0) {
                  piVar1 = &(pSVar24->fields)._version;
                  *piVar1 = *piVar1 + 1;
                  pSVar18 = (pSVar24->fields)._items;
                  if (pSVar18 != (System_String_array *)0x0) {
                    uVar22 = (pSVar24->fields)._size;
                    if (uVar22 < (uint)pSVar18->max_length) {
                      (pSVar24->fields)._size = uVar22 + 1;
                      pSVar18->m_Items[(int)uVar22] = pSVar19;
                      Il2CppCodeGenWriteBarrier(pSVar18->m_Items + (int)uVar22);
                    }
                    else {
                      System_Collections_Generic_List_object___AddWithResize
                                ((System_Collections_Generic_List_object__o *)pSVar24,(Il2CppObject *)pSVar19,
                                 (MethodInfo_395D230 *)pMVar21->klass->rgctx_data[0xe].method);
                    }
                    goto label_059d45c4;
                  }
                }
                ThrowNullReferenceException();
              }
              pSVar19 = *ppSVar17;
              if ((TypeInfo_Settings_ExperienceRuleEngine->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Settings_ExperienceRuleEngine);
              }
              bVar13 = Settings_ExperienceRuleEngine__TryResolveSetting
                                 (local_a0,pSVar19,&local_c8,(MethodInfo *)method_00);
              pSVar11 = local_c8;
              if (bVar13) {
                if (((pSVar12->fields).Min.fields.hasValue != false) ||
                   ((pSVar12->fields).Max.fields.hasValue != false)) {
                  pSVar24 = (pSVar15->fields).Errors;
                  if ((TypeInfo_Settings_ExperienceRuleEngine->_2).cctor_finished_or_no_cctor == 0) {
                    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Settings_ExperienceRuleEngine);
                  }
                  Settings_ExperienceRuleEngine__ApplyBounds(pSVar11,pSVar12,pSVar24,(MethodInfo *)method_00);
                }
                pSVar11 = local_c8;
                if (1 < (uint)(pSVar12->fields).Type) {
                  pSVar19 = (pSVar12->fields).SettingId;
                  local_c0 = (pSVar12->fields).DefaultValue;
                  local_b8 = (MethodInfo *)(pSVar15->fields).Errors;
                  if ((TypeInfo_Settings_ExperienceRuleEngine->_2).cctor_finished_or_no_cctor == 0) {
                    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Settings_ExperienceRuleEngine);
                  }
                  pMVar21 = local_b8;
                  Settings_ExperienceRuleEngine__ApplyValue
                            (pSVar11,pSVar19,local_c0,(System_Collections_Generic_List_string__o *)local_b8,
                             method);
                  pSVar11 = local_c8;
                  if (1 < (uint)(pSVar12->fields).Type) {
                    pSVar19 = (pSVar12->fields).SettingId;
                    local_c0 = (pSVar12->fields).DefaultValue;
                    if ((TypeInfo_Settings_ExperienceRuleEngine->_2).cctor_finished_or_no_cctor == 0) {
                      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Settings_ExperienceRuleEngine)
                      ;
                    }
                    bVar13 = Settings_ExperienceRuleEngine__MatchesDefaultValue
                                       (pSVar11,pSVar19,local_c0,pMVar21);
                    if (!bVar13) {
                      pSVar24 = (pSVar15->fields).Errors;
                      pSVar19 = System_String__Concat_5301f10
                                          ("Default value is outside the setting constraints for ",*ppSVar17,".",
                                           (MethodInfo *)0x0);
                      pMVar21 = MethodInfo_System_Collections_Generic_List_string_Add;
                      if (pSVar24 == (System_Collections_Generic_List_string__o *)0x0) {
label_059d4f8f:
                        ThrowNullReferenceException();
                      }
                      piVar1 = &(pSVar24->fields)._version;
                      *piVar1 = *piVar1 + 1;
                      pSVar18 = (pSVar24->fields)._items;
                      if (pSVar18 == (System_String_array *)0x0) goto label_059d4f8f;
                      uVar22 = (pSVar24->fields)._size;
                      if (uVar22 < (uint)pSVar18->max_length) {
                        (pSVar24->fields)._size = uVar22 + 1;
                        pSVar18->m_Items[(int)uVar22] = pSVar19;
                        Il2CppCodeGenWriteBarrier(pSVar18->m_Items + (int)uVar22);
                      }
                      else {
                        System_Collections_Generic_List_object___AddWithResize
                                  ((System_Collections_Generic_List_object__o *)pSVar24,
                                   (Il2CppObject *)pSVar19,
                                   (MethodInfo_395D230 *)pMVar21->klass->rgctx_data[0xe].method);
                      }
                    }
                  }
                }
                uVar20 = 0;
                bVar13 = System_String__Equals_52ffe30(*ppSVar17,"general.MapName",5,(MethodInfo *)0x0);
                method_01 = (Settings_StringSetting_c *)
                            CONCAT71((int7)((ulong)uVar20 >> 8),
                                     local_68 != (System_Func_string__string__o *)0x0);
                if ((local_68 != (System_Func_string__string__o *)0x0 && bVar13) &&
                   (local_c8 != (Settings_BaseSetting_o *)0x0)) {
                  bVar2 = (TypeInfo_Settings_StringSetting->_2).typeHierarchyDepth;
                  method_01 = TypeInfo_Settings_StringSetting;
                  if ((bVar2 <= (local_c8->klass->_2).typeHierarchyDepth) &&
                     ((local_c8->klass->_2).typeHierarchy[(ulong)bVar2 - 1] ==
                      (Il2CppClass *)TypeInfo_Settings_StringSetting)) {
                    pSVar19 = (System_String_o *)
                              (*(code *)(local_68->fields).invoke_impl)
                                        ((local_68->fields).method_code,(*(uint64_t *)((char *)local_c8 + 0x20)),
                                         (local_68->fields).method);
                    bVar13 = System_String__IsNullOrEmpty(pSVar19,(MethodInfo *)0x0);
                    if (!bVar13) {
                      pSVar7 = (local_a0->fields).General;
                      if (pSVar7 == (Settings_InGameGeneralSettings_o *)0x0) {
                        ThrowNullReferenceException();
                      }
                      pSVar8 = (pSVar7->fields).MapCategory;
                      if (pSVar8 == (Settings_StringSetting_o *)0x0) {
                        ThrowNullReferenceException();
                      }
                      Settings_TypedSetting_object___set_Value
                                ((Settings_TypedSetting_T__o *)pSVar8,(Il2CppObject *)pSVar19,
                                 (MethodInfo_42DA280 *)MethodInfo_Settings_TypedSetting_string_set_Value);
                    }
                  }
                }
                pSVar11 = local_c8;
                pSVar24 = (pSVar12->fields).AllowedValues;
                if ((pSVar24 != (System_Collections_Generic_List_string__o *)0x0) &&
                   (0 < (pSVar24->fields)._size)) {
                  pSVar19 = *ppSVar17;
                  if ((TypeInfo_Settings_ExperienceRuleEngine->_2).cctor_finished_or_no_cctor == 0) {
                    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Settings_ExperienceRuleEngine);
                  }
                  bVar13 = Settings_ExperienceRuleEngine__MatchesAllowedValue
                                     (pSVar11,pSVar19,pSVar12,(MethodInfo *)method_01);
                  if (!bVar13) {
                    pSVar24 = (pSVar15->fields).Errors;
                    pSVar19 = System_String__Concat_5301f10
                                        ("Default value is not allowed for ",*ppSVar17,".",
                                         (MethodInfo *)0x0);
                    pMVar21 = MethodInfo_System_Collections_Generic_List_string_Add;
                    if (pSVar24 == (System_Collections_Generic_List_string__o *)0x0) {
label_059d4f8a:
                      ThrowNullReferenceException();
                    }
                    piVar1 = &(pSVar24->fields)._version;
                    *piVar1 = *piVar1 + 1;
                    pSVar18 = (pSVar24->fields)._items;
                    if (pSVar18 == (System_String_array *)0x0) goto label_059d4f8a;
                    uVar22 = (pSVar24->fields)._size;
                    if (uVar22 < (uint)pSVar18->max_length) {
                      (pSVar24->fields)._size = uVar22 + 1;
                      pSVar18->m_Items[(int)uVar22] = pSVar19;
                      Il2CppCodeGenWriteBarrier(pSVar18->m_Items + (int)uVar22);
                    }
                    else {
                      System_Collections_Generic_List_object___AddWithResize
                                ((System_Collections_Generic_List_object__o *)pSVar24,(Il2CppObject *)pSVar19,
                                 (MethodInfo_395D230 *)pMVar21->klass->rgctx_data[0xe].method);
                    }
                  }
                }
                pMVar21 = (MethodInfo *)0x0;
                bVar13 = System_String__Equals_52ffe30(*ppSVar17,"general.MapCategory",5,(MethodInfo *)0x0);
                iVar4 = (pSVar12->fields).Type;
                uVar22 = 0;
                if (iVar4 == 1) {
                  bVar25 = true;
                  local_b8 = (MethodInfo *)((ulong)local_b8._4_4_ << 0x20);
label_059d4b89:
                  uVar22 = (uint)(iVar4 != 1);
                }
                else {
                  bVar25 = (pSVar12->fields).DisableEditing == false;
                  pMVar21 = (MethodInfo *)CONCAT71((int7)((ulong)pMVar21 >> 8),bVar25);
                  local_b8 = (MethodInfo *)
                             CONCAT44(local_b8._4_4_,(int)CONCAT71(extraout_var,!bVar13 && bVar25));
                  bVar25 = bVar13 || !bVar25;
                  if (iVar4 != 0) goto label_059d4b89;
                }
                local_c0 = (Il2CppObject *)CONCAT44(local_c0._4_4_,uVar22);
                __this_03 = (pSVar15->fields).Fields;
                __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_ExperienceRuleField);
                System_Object___ctor((Il2CppObject *)__this_02,(MethodInfo *)0x0);
                if (__this_02 == (Settings_ExperienceRuleField_o *)0x0) {
                  ThrowNullReferenceException();
                }
                (__this_02->fields).Id = *ppSVar17;
                Il2CppCodeGenWriteBarrier(&(__this_02->fields).Id);
                (__this_02->fields).Setting = local_c8;
                Il2CppCodeGenWriteBarrier(&(__this_02->fields).Setting);
                pSVar10 = local_70;
                (__this_02->fields).Rule = pSVar12;
                Il2CppCodeGenWriteBarrier(&(__this_02->fields).Rule);
                pSVar11 = local_c8;
                (__this_02->fields).Visible = SUB81(local_b8,0);
                (__this_02->fields).Editable = SUB81(local_b8,0);
                if ((int)local_c0 == 0) {
                  bVar13 = false;
                  item = __this_02;
                }
                else {
                  local_b0 = __this_03;
                  local_a8 = __this_02;
                  if (bVar25) {
                    if (bVar13) {
                      bVar13 = false;
                    }
                    else {
                      pSVar19 = (pSVar12->fields).SettingId;
                      ruleValue = (pSVar12->fields).DefaultValue;
                      if ((TypeInfo_Settings_ExperienceRuleEngine->_2).cctor_finished_or_no_cctor == 0) {
                        il2cpp_codegen_runtime_class_init
                                  ((Il2CppClass *)TypeInfo_Settings_ExperienceRuleEngine);
                      }
                      bVar13 = Settings_ExperienceRuleEngine__ChangesDefaultValue
                                         (pSVar11,pSVar19,ruleValue,pMVar21);
                    }
                  }
                  else {
                    bVar13 = false;
                  }
                  item = local_a8;
                  __this_03 = local_b0;
                  pSVar10 = __this_02;
                  if (__this_02 == (Settings_ExperienceRuleField_o *)0x0) goto label_059d4f76;
                }
                (__this_02->fields).Locked = bVar13;
                pMVar21 = MethodInfo_System_Collections_Generic_List_ExperienceRuleField_Add;
                if (__this_03 != (System_Collections_Generic_List_ExperienceRuleField__o *)0x0) {
                  piVar1 = &(__this_03->fields)._version;
                  *piVar1 = *piVar1 + 1;
                  pSVar9 = (__this_03->fields)._items;
                  if (pSVar9 != (Settings_ExperienceRuleField_array *)0x0) {
                    uVar22 = (__this_03->fields)._size;
                    local_70 = pSVar10;
                    if (uVar22 < (uint)pSVar9->max_length) {
                      (__this_03->fields)._size = uVar22 + 1;
                      pSVar9->m_Items[(int)uVar22] = item;
                      Il2CppCodeGenWriteBarrier(pSVar9->m_Items + (int)uVar22);
                    }
                    else {
                      System_Collections_Generic_List_object___AddWithResize
                                ((System_Collections_Generic_List_object__o *)__this_03,(Il2CppObject *)item,
                                 (MethodInfo_395D230 *)pMVar21->klass->rgctx_data[0xe].method);
                    }
                    goto label_059d45c4;
                  }
                }
label_059d4f76:
                ThrowNullReferenceException();
              }
              if (*ppSVar17 == (System_String_o *)0x0) {
                ThrowNullReferenceException();
              }
              bVar13 = System_String__StartsWith_53002b0(*ppSVar17,"mode.",5,(MethodInfo *)0x0);
              if (bVar13) {
                pSVar6 = (local_a0->fields).Mode;
                if (pSVar6 == (Settings_InGameModeSettings_o *)0x0) {
                  ThrowNullReferenceException();
                }
                pSVar5 = (System_Collections_Generic_Dictionary_object__object__o *)(pSVar6->fields).Current;
                if ((pSVar5 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) ||
                   (iVar14 = System_Collections_Generic_Dictionary_object__object___get_Count
                                       (pSVar5,(MethodInfo_4AAD0E0 *)
                                               MethodInfo_System_Collections_Generic_Dictionary_string_BaseSetting_get_Count
                                       ), iVar14 == 0)) goto label_059d45c4;
              }
              pSVar24 = (pSVar15->fields).Errors;
              pSVar19 = System_String__Concat_52f0320("Unknown experience setting: ",*ppSVar17,(MethodInfo *)0x0);
              pMVar21 = MethodInfo_System_Collections_Generic_List_string_Add;
              if (pSVar24 != (System_Collections_Generic_List_string__o *)0x0) {
                piVar1 = &(pSVar24->fields)._version;
                *piVar1 = *piVar1 + 1;
                pSVar18 = (pSVar24->fields)._items;
                if (pSVar18 != (System_String_array *)0x0) {
                  uVar22 = (pSVar24->fields)._size;
                  if (uVar22 < (uint)pSVar18->max_length) {
                    (pSVar24->fields)._size = uVar22 + 1;
                    pSVar18->m_Items[(int)uVar22] = pSVar19;
                    Il2CppCodeGenWriteBarrier(pSVar18->m_Items + (int)uVar22);
                  }
                  else {
                    System_Collections_Generic_List_object___AddWithResize
                              ((System_Collections_Generic_List_object__o *)pSVar24,(Il2CppObject *)pSVar19,
                               (MethodInfo_395D230 *)pMVar21->klass->rgctx_data[0xe].method);
                  }
                  goto label_059d45c4;
                }
              }
              ThrowNullReferenceException();
            }
            pSVar19 = "Experience contains a rule without a setting ID.";
            pMVar21 = MethodInfo_System_Collections_Generic_List_string_Add;
            pSVar24 = (pSVar15->fields).Errors;
            if (pSVar24 == (System_Collections_Generic_List_string__o *)0x0) {
label_059d4f2a:
              ThrowNullReferenceException();
            }
            piVar1 = &(pSVar24->fields)._version;
            *piVar1 = *piVar1 + 1;
            pSVar18 = (pSVar24->fields)._items;
            if (pSVar18 == (System_String_array *)0x0) goto label_059d4f2a;
            uVar22 = (pSVar24->fields)._size;
            if (uVar22 < (uint)pSVar18->max_length) {
              (pSVar24->fields)._size = uVar22 + 1;
              pSVar18->m_Items[(int)uVar22] = pSVar19;
              Il2CppCodeGenWriteBarrier(pSVar18->m_Items + (int)uVar22);
            }
            else {
              System_Collections_Generic_List_object___AddWithResize
                        ((System_Collections_Generic_List_object__o *)pSVar24,(Il2CppObject *)pSVar19,
                         (MethodInfo_395D230 *)pMVar21->klass->rgctx_data[0xe].method);
            }
            goto label_059d45c4;
          }
        }
        System_Collections_Generic_List_Enumerator_object___Dispose
                  ((System_Collections_Generic_List_Enumerator_object__o *)local_88,
                   (MethodInfo_4C45C40 *)MethodInfo_System_Collections_Generic_List_Enumerator_UIRule_Dispose)
        ;
        value = local_40;
        pSVar16 = local_48;
        pSVar23 = local_a0;
        pSVar8 = (local_a0->fields).ExperienceName;
        pSVar19 = (local_48->fields).Name;
        if (pSVar19 == (System_String_o *)0x0) {
          pSVar19 = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
        }
        if (pSVar8 != (Settings_StringSetting_o *)0x0) {
          Settings_TypedSetting_object___set_Value
                    ((Settings_TypedSetting_T__o *)pSVar8,(Il2CppObject *)pSVar19,
                     (MethodInfo_42DA280 *)MethodInfo_Settings_TypedSetting_string_set_Value);
          pSVar8 = (pSVar23->fields).ExperienceCategory;
          pSVar19 = (pSVar16->fields).Category;
          if (pSVar19 == (System_String_o *)0x0) {
            pSVar19 = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
          }
          if (pSVar8 != (Settings_StringSetting_o *)0x0) {
            Settings_TypedSetting_object___set_Value
                      ((Settings_TypedSetting_T__o *)pSVar8,(Il2CppObject *)pSVar19,
                       (MethodInfo_42DA280 *)MethodInfo_Settings_TypedSetting_string_set_Value);
            pSVar8 = (pSVar23->fields).ExperienceSubcategory;
            pSVar19 = (pSVar16->fields).SubCategory;
            if (pSVar19 == (System_String_o *)0x0) {
              pSVar19 = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
            }
            if (pSVar8 != (Settings_StringSetting_o *)0x0) {
              Settings_TypedSetting_object___set_Value
                        ((Settings_TypedSetting_T__o *)pSVar8,(Il2CppObject *)pSVar19,
                         (MethodInfo_42DA280 *)MethodInfo_Settings_TypedSetting_string_set_Value);
              pSVar8 = (pSVar23->fields).ExperienceVariant;
              if (value == (System_String_o *)0x0) {
                value = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
              }
              if (pSVar8 != (Settings_StringSetting_o *)0x0) {
                Settings_TypedSetting_object___set_Value
                          ((Settings_TypedSetting_T__o *)pSVar8,(Il2CppObject *)value,
                           (MethodInfo_42DA280 *)MethodInfo_Settings_TypedSetting_string_set_Value);
                __this = (pSVar23->fields).Sandbox;
                if (__this != (Settings_BoolSetting_o *)0x0) {
                  Settings_TypedSetting_bool___set_Value
                            ((Settings_TypedSetting_bool__o *)__this,false,
                             (MethodInfo_42DA020 *)MethodInfo_Settings_TypedSetting_bool_set_Value);
                  return pSVar15;
                }
              }
            }
          }
        }
      }
      goto label_059d50d1;
    }
    pSVar24 = (pSVar15->fields).Errors;
    if (pSVar24 == (System_Collections_Generic_List_string__o *)0x0) goto label_059d50d1;
    ppSVar17 = &"Game settings are missing.";
  }
  pSVar19 = *ppSVar17;
  piVar1 = &(pSVar24->fields)._version;
  *piVar1 = *piVar1 + 1;
  pSVar18 = (pSVar24->fields)._items;
  if (pSVar18 != (System_String_array *)0x0) {
    uVar22 = (pSVar24->fields)._size;
    if (uVar22 < (uint)pSVar18->max_length) {
      (pSVar24->fields)._size = uVar22 + 1;
      pSVar18->m_Items[(int)uVar22] = pSVar19;
      Il2CppCodeGenWriteBarrier(pSVar18->m_Items + (int)uVar22);
    }
    else {
      System_Collections_Generic_List_object___AddWithResize
                ((System_Collections_Generic_List_object__o *)pSVar24,(Il2CppObject *)pSVar19,
                 (MethodInfo_395D230 *)pMVar21->klass->rgctx_data[0xe].method);
    }
    return pSVar15;
  }
label_059d50d1:
  ThrowNullReferenceException();
}


// Settings.ExperienceRuleEngine$$Validate
// il2cpp: bool Settings_ExperienceRuleEngine__Validate (Settings_ExperienceRuleResult_o* result, const MethodInfo* method);
// 0x59d65a0
// eh: try 0x59d66aa..0x59d67de -> pad 0x59d67f3 (+8 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x59d680b..0x59d6810 -> pad 0x59d6833 cleanup
// eh: try 0x59d6836..0x59d6840 -> pad 0x59d6848 catch (...) [compiler noexcept guard]
// asm: 32 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x59d67e3: jmp 0x59d67f3
// asm:   0x59d67e5: jmp 0x59d67f3
// asm:   0x59d67e7: jmp 0x59d67f3
// asm:   0x59d67e9: jmp 0x59d67f3
// asm:   0x59d67eb: jmp 0x59d67f3
// asm:   0x59d67ed: jmp 0x59d67f3
// asm:   0x59d67ef: jmp 0x59d67f3
// asm:   0x59d67f1: jmp 0x59d67f3
// asm:   0x59d67f3: mov rbx, rax
// asm:   0x59d67f6: cmp edx, 1
// asm:   0x59d67f9: jne 0x59d6836
// asm:   0x59d67fb: mov rdi, rbx
// asm:   0x59d67fe: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x59d6803: mov rbx, qword ptr [rax]
// asm:   0x59d6806: mov qword ptr [rsp + 8], rbx
// asm:   0x59d680b: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x59d6810: lea rax, [rip + 0x18b7489]  ; MethodInfo_System_Collections_Generic_List_Enumerator_ExperienceRuleField_Dispose
// asm:   0x59d6817: mov rsi, qword ptr [rax]
// asm:   0x59d681a: lea rdi, [rsp + 0x20]
// asm:   0x59d681f: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x59d6824: xor ebp, ebp
// asm:   0x59d6826: test rbx, rbx
// asm:   0x59d6829: je 0x59d67bf
// asm:   0x59d682b: mov rdi, rbx
// asm:   0x59d682e: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x59d6833: mov rbx, rax
// asm:   0x59d6836: lea rdi, [rsp + 8]
// asm:   0x59d683b: call 0x2fd5a20  ; il2cpp_runtime_helper_02fd5a20()
// asm:   0x59d6840: mov rdi, rbx
// asm:   0x59d6843: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x59d6848: mov rdi, rax
// asm:   0x59d684b: call 0x2ab61e0  ; __clang_call_terminate()

bool Settings_ExperienceRuleEngine__Validate(Settings_ExperienceRuleResult_o *result,MethodInfo *method)

{
  System_Collections_Generic_List_string__o *pSVar1;
  System_Collections_Generic_List_ExperienceRuleField__o *__this;
  Il2CppClass *rule;
  Il2CppClass *pIVar2;
  Settings_BaseSetting_o *pSVar3;
  Il2CppObject *defaultValue;
  Il2CppObject *pIVar4;
  bool bVar5;
  MethodInfo *in_RCX;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *method_00;
  int iVar6;
  undefined1 local_60 [16];
  Il2CppObject *local_50;
  System_Collections_Generic_List_Enumerator_object__o local_48;
  
  if (Il2CppMethodInitialized_07545c90 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_ExperienceRuleField_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_ExperienceRuleField_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_ExperienceRuleField_get_Current);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_ExperienceRuleEngine);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_ExperienceRuleField_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_float_get_HasValue);
    Il2CppMethodInitialized_07545c90 = '\x01';
  }
  if (result == (Settings_ExperienceRuleResult_o *)0x0) {
    return false;
  }
  if (Il2CppMethodInitialized_07545c8b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_get_Count);
    Il2CppMethodInitialized_07545c8b = '\x01';
  }
  pSVar1 = (result->fields).Errors;
  if (pSVar1 != (System_Collections_Generic_List_string__o *)0x0) {
    if ((pSVar1->fields)._size != 0) {
      return false;
    }
    __this = (result->fields).Fields;
    if (__this != (System_Collections_Generic_List_ExperienceRuleField__o *)0x0) {
      System_Collections_Generic_List_object___GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)local_60,
                 (System_Collections_Generic_List_object__o *)__this,
                 (MethodInfo_395E050 *)
                 MethodInfo_System_Collections_Generic_List_ExperienceRuleField_GetEnumerator);
      local_48.fields._current = local_50;
      local_48.fields._list = (System_Collections_Generic_List_T__o *)local_60._0_8_;
      local_48.fields._index = local_60._8_4_;
      local_48.fields._version = local_60._12_4_;
      local_60._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
      local_60._8_8_ = &local_48;
      do {
        do {
          do {
            bVar5 = System_Collections_Generic_List_Enumerator_object___MoveNext
                              (&local_48,
                               (MethodInfo_4C45C50 *)
                               MethodInfo_System_Collections_Generic_List_Enumerator_ExperienceRuleField_MoveNext
                              );
            pIVar4 = local_48.fields._current;
            if (!bVar5) {
              iVar6 = 10;
              goto label_059d67ab;
            }
            if (local_48.fields._current == (Il2CppObject *)0x0) {
              ThrowNullReferenceException();
            }
            rule = local_48.fields._current[2].klass;
            if (rule == (Il2CppClass *)0x0) {
              ThrowNullReferenceException();
            }
          } while ((uint)((Settings_UIRule_Fields *)&(rule->_1).name)->Type < 2);
          method_00 = extraout_RDX;
          if (*(bool *)&(rule->_1).element_class != false) {
            pIVar2 = local_48.fields._current[1].klass;
            pSVar3 = local_48.fields._current[1].monitor;
            defaultValue = (rule->_1).byval_arg.data;
            if ((TypeInfo_Settings_ExperienceRuleEngine->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Settings_ExperienceRuleEngine);
            }
            bVar5 = Settings_ExperienceRuleEngine__MatchesDefaultValue
                              (pSVar3,(System_String_o *)pIVar2,defaultValue,in_RCX);
            method_00 = extraout_RDX_00;
            if (!bVar5) goto label_059d679f;
          }
          if (((((System_Nullable_float__o *)&(rule->_1).byval_arg.bits)->fields).hasValue != false) ||
             (((System_Nullable_float__Fields *)&(rule->_1).this_arg.data)->hasValue != false)) {
            pSVar3 = pIVar4[1].monitor;
            if ((TypeInfo_Settings_ExperienceRuleEngine->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Settings_ExperienceRuleEngine);
              method_00 = extraout_RDX_01;
            }
            bVar5 = Settings_ExperienceRuleEngine__MatchesRange(pSVar3,(Settings_UIRule_o *)rule,method_00);
            if (!bVar5) goto label_059d679f;
          }
          pSVar1 = *(System_Collections_Generic_List_string__o **)&(rule->_1).this_arg.bits;
        } while ((pSVar1 == (System_Collections_Generic_List_string__o *)0x0) || ((pSVar1->fields)._size < 1))
        ;
        pIVar2 = pIVar4[1].klass;
        pSVar3 = pIVar4[1].monitor;
        if ((TypeInfo_Settings_ExperienceRuleEngine->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Settings_ExperienceRuleEngine);
        }
        bVar5 = Settings_ExperienceRuleEngine__MatchesAllowedValue
                          (pSVar3,(System_String_o *)pIVar2,(Settings_UIRule_o *)rule,in_RCX);
      } while (bVar5);
label_059d679f:
      iVar6 = 7;
label_059d67ab:
      System_Collections_Generic_List_Enumerator_object___Dispose
                (&local_48,
                 (MethodInfo_4C45C40 *)
                 MethodInfo_System_Collections_Generic_List_Enumerator_ExperienceRuleField_Dispose);
      return iVar6 != 7;
    }
  }
  ThrowNullReferenceException();
}


// Settings.ExperienceRuleEngine$$TryResolveSetting
// il2cpp: bool Settings_ExperienceRuleEngine__TryResolveSetting (Settings_InGameSet_o* settings, System_String_o* id, Settings_BaseSetting_o** setting, const MethodInfo* method);
// 0x59d5190
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x59d53b2: jmp 0x59d5406
// asm:   0x59d5401: jmp 0x59d536e

bool Settings_ExperienceRuleEngine__TryResolveSetting
               (Settings_InGameSet_o *settings,System_String_o *id,Settings_BaseSetting_o **setting,
               MethodInfo *method)

{
  Settings_InGameMiscSettings_o *pSVar1;
  System_Collections_Specialized_OrderedDictionary_o *pSVar2;
  Settings_InGameModeSettings_o *pSVar3;
  System_Collections_Generic_Dictionary_object__object__o *__this;
  bool bVar4;
  int32_t length;
  System_String_o *pSVar5;
  System_String_o *key;
  Il2CppObject *obj;
  Settings_BaseSetting_o *pSVar6;
  Settings_InGameMiscSettings_o **ppSVar7;
  
  if (Il2CppMethodInitialized_07545c91 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_BaseSetting);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_BaseSetting_TryGetValue);
    il2cpp_codegen_initialize_runtime_metadata(&"general");
    il2cpp_codegen_initialize_runtime_metadata(&"misc");
    il2cpp_codegen_initialize_runtime_metadata(&"titan");
    il2cpp_codegen_initialize_runtime_metadata(&"mode");
    Il2CppMethodInitialized_07545c91 = '\x01';
  }
  *setting = (Settings_BaseSetting_o *)0x0;
  Il2CppCodeGenWriteBarrier(setting);
  if (settings == (Settings_InGameSet_o *)0x0) {
    return false;
  }
  bVar4 = System_String__IsNullOrEmpty(id,(MethodInfo *)0x0);
  if (bVar4) {
    return false;
  }
  if (id == (System_String_o *)0x0) goto label_059d5406;
  length = System_String__IndexOf(id,0x2e,(MethodInfo *)0x0);
  if (length < 1) {
    return false;
  }
  if (length == (id->fields)._stringLength + -1) {
    return false;
  }
  pSVar5 = System_String__Substring_53042f0(id,0,length,(MethodInfo *)0x0);
  if (pSVar5 == (System_String_o *)0x0) goto label_059d5406;
  pSVar5 = System_String__ToLowerInvariant(pSVar5,(MethodInfo *)0x0);
  key = System_String__Substring(id,length + 1,(MethodInfo *)0x0);
  bVar4 = System_String__op_Equality(pSVar5,"general",(MethodInfo *)0x0);
  if (bVar4) {
    bVar4 = Settings_WeatherSettings__IsWeatherSetting(id,(MethodInfo *)0x0);
    if (bVar4) {
      *setting = (Settings_BaseSetting_o *)(settings->fields).WeatherIndex;
      Il2CppCodeGenWriteBarrier(setting);
      return true;
    }
    ppSVar7 = (Settings_InGameMiscSettings_o **)&(settings->fields).General;
label_059d52fa:
    pSVar1 = *ppSVar7;
  }
  else {
    bVar4 = System_String__op_Equality(pSVar5,"misc",(MethodInfo *)0x0);
    if (bVar4) {
      ppSVar7 = &(settings->fields).Misc;
      goto label_059d52fa;
    }
    bVar4 = System_String__op_Equality(pSVar5,"titan",(MethodInfo *)0x0);
    if (!bVar4) {
      bVar4 = System_String__op_Equality(pSVar5,"mode",(MethodInfo *)0x0);
      if (!bVar4) {
        return false;
      }
      pSVar3 = (settings->fields).Mode;
      if (pSVar3 == (Settings_InGameModeSettings_o *)0x0) goto label_059d5406;
      __this = (System_Collections_Generic_Dictionary_object__object__o *)(pSVar3->fields).Current;
      if (__this == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
        return false;
      }
      bVar4 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                        (__this,(Il2CppObject *)key,(Il2CppObject **)setting,
                         (MethodInfo_4AAF440 *)
                         MethodInfo_System_Collections_Generic_Dictionary_string_BaseSetting_TryGetValue);
      if (!bVar4) {
        return false;
      }
      goto label_059d536e;
    }
    pSVar1 = (Settings_InGameMiscSettings_o *)(settings->fields).Titan;
  }
  if ((pSVar1 != (Settings_InGameMiscSettings_o *)0x0) &&
     (pSVar2 = (pSVar1->fields).Settings, pSVar2 != (System_Collections_Specialized_OrderedDictionary_o *)0x0)
     ) {
    bVar4 = System_Collections_Specialized_OrderedDictionary__Contains
                      (pSVar2,(Il2CppObject *)key,(MethodInfo *)0x0);
    if (!bVar4) {
      return false;
    }
    pSVar2 = (pSVar1->fields).Settings;
    if (pSVar2 != (System_Collections_Specialized_OrderedDictionary_o *)0x0) {
      obj = System_Collections_Specialized_OrderedDictionary__get_Item
                      (pSVar2,(Il2CppObject *)key,(MethodInfo *)0x0);
      pSVar6 = (Settings_BaseSetting_o *)
               il2cpp_codegen_is_inst_class(obj,(Il2CppClass *)TypeInfo_Settings_BaseSetting);
      *setting = pSVar6;
      il2cpp_codegen_is_inst_class(obj,(Il2CppClass *)TypeInfo_Settings_BaseSetting);
      Il2CppCodeGenWriteBarrier(setting);
label_059d536e:
      return *setting != (Settings_BaseSetting_o *)0x0;
    }
  }
label_059d5406:
  ThrowNullReferenceException();
}


// Settings.ExperienceRuleEngine$$ApplyBounds
// il2cpp: void Settings_ExperienceRuleEngine__ApplyBounds (Settings_BaseSetting_o* setting, Settings_UIRule_o* rule, System_Collections_Generic_List_string__o* errors, const MethodInfo* method);
// 0x59d5410
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x59d5643: jmp 0x59d56f3
// asm:   0x59d569c: jmp 0x59d56f3

void Settings_ExperienceRuleEngine__ApplyBounds
               (Settings_BaseSetting_o *setting,Settings_UIRule_o *rule,
               System_Collections_Generic_List_string__o *errors,MethodInfo *method)

{
  int32_t *piVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  Settings_BaseSetting_c *pSVar5;
  System_String_array *pSVar6;
  MethodInfo *pMVar7;
  System_String_o *pSVar8;
  System_String_o **ppSVar9;
  float fVar10;
  
  if (Il2CppMethodInitialized_07545c92 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_FloatSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_IntSetting);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_float_get_HasValue);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_float_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&"Range rule requires a numeric setting: ");
    il2cpp_codegen_initialize_runtime_metadata(&"Empty integer range for ");
    il2cpp_codegen_initialize_runtime_metadata(&"Empty numeric range for ");
    il2cpp_codegen_initialize_runtime_metadata(&".");
    Il2CppMethodInitialized_07545c92 = '\x01';
  }
  if (setting == (Settings_BaseSetting_o *)0x0) {
label_059d5509:
    if (rule == (Settings_UIRule_o *)0x0) goto label_059d56ee;
    pSVar8 = System_String__Concat_52f0320("Range rule requires a numeric setting: ",(rule->fields).SettingId,(MethodInfo *)0x0);
    pMVar7 = MethodInfo_System_Collections_Generic_List_string_Add;
  }
  else {
    pSVar5 = setting->klass;
    bVar2 = (pSVar5->_2).typeHierarchyDepth;
    bVar3 = (TypeInfo_Settings_IntSetting->_2).typeHierarchyDepth;
    if ((bVar2 < bVar3) ||
       ((pSVar5->_2).typeHierarchy[(ulong)bVar3 - 1] != (Il2CppClass *)TypeInfo_Settings_IntSetting)) {
      bVar3 = (TypeInfo_Settings_FloatSetting->_2).typeHierarchyDepth;
      if ((bVar2 < bVar3) ||
         ((pSVar5->_2).typeHierarchy[(ulong)bVar3 - 1] != (Il2CppClass *)TypeInfo_Settings_FloatSetting))
      goto label_059d5509;
      if (rule == (Settings_UIRule_o *)0x0) goto label_059d56ee;
      if ((rule->fields).Min.fields.hasValue != false) {
        fVar10 = System_Nullable_float___get_Value
                           (&(rule->fields).Min,
                            (MethodInfo_3CDA2D0 *)MethodInfo_System_Nullable_float_get_Value);
        *(float *)&(*(uint64_t *)((char *)setting + 0x20)) = fVar10;
      }
      if ((rule->fields).Max.fields.hasValue == false) {
        if (*(float *)&(*(uint64_t *)((char *)setting + 0x20)) <= *(float *)((long)&(*(uint64_t *)((char *)setting + 0x20)) + 4)) {
          return;
        }
      }
      else {
        fVar10 = System_Nullable_float___get_Value
                           (&(rule->fields).Max,
                            (MethodInfo_3CDA2D0 *)MethodInfo_System_Nullable_float_get_Value);
        *(float *)((long)&(*(uint64_t *)((char *)setting + 0x20)) + 4) = fVar10;
        if (*(float *)&(*(uint64_t *)((char *)setting + 0x20)) <= fVar10) {
          return;
        }
      }
      pSVar8 = (rule->fields).SettingId;
      ppSVar9 = &"Empty numeric range for ";
    }
    else {
      if (rule == (Settings_UIRule_o *)0x0) goto label_059d56ee;
      if ((rule->fields).Min.fields.hasValue != false) {
        fVar10 = System_Nullable_float___get_Value
                           (&(rule->fields).Min,
                            (MethodInfo_3CDA2D0 *)MethodInfo_System_Nullable_float_get_Value);
        if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
        }
        fVar10 = ceilf(fVar10);
        *(int *)&(*(uint64_t *)((char *)setting + 0x20)) = (int)fVar10;
      }
      if ((rule->fields).Max.fields.hasValue == false) {
        if (*(int *)&(*(uint64_t *)((char *)setting + 0x20)) <= *(int *)((long)&(*(uint64_t *)((char *)setting + 0x20)) + 4)) {
          return;
        }
      }
      else {
        fVar10 = System_Nullable_float___get_Value
                           (&(rule->fields).Max,
                            (MethodInfo_3CDA2D0 *)MethodInfo_System_Nullable_float_get_Value);
        if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
        }
        fVar10 = floorf(fVar10);
        *(int *)((long)&(*(uint64_t *)((char *)setting + 0x20)) + 4) = (int)fVar10;
        if (*(int *)&(*(uint64_t *)((char *)setting + 0x20)) <= (int)fVar10) {
          return;
        }
      }
      pSVar8 = (rule->fields).SettingId;
      ppSVar9 = &"Empty integer range for ";
    }
    pSVar8 = System_String__Concat_5301f10(*ppSVar9,pSVar8,".",(MethodInfo *)0x0);
    pMVar7 = MethodInfo_System_Collections_Generic_List_string_Add;
  }
  MethodInfo_System_Collections_Generic_List_string_Add = pMVar7;
  if (errors != (System_Collections_Generic_List_string__o *)0x0) {
    piVar1 = &(errors->fields)._version;
    *piVar1 = *piVar1 + 1;
    pSVar6 = (errors->fields)._items;
    if (pSVar6 != (System_String_array *)0x0) {
      uVar4 = (errors->fields)._size;
      if (uVar4 < (uint)pSVar6->max_length) {
        (errors->fields)._size = uVar4 + 1;
        pSVar6->m_Items[(int)uVar4] = pSVar8;
        Il2CppCodeGenWriteBarrier(pSVar6->m_Items + (int)uVar4);
        return;
      }
      System_Collections_Generic_List_object___AddWithResize
                ((System_Collections_Generic_List_object__o *)errors,(Il2CppObject *)pSVar8,
                 (MethodInfo_395D230 *)pMVar7->klass->rgctx_data[0xe].method);
      return;
    }
  }
label_059d56ee:
  ThrowNullReferenceException();
}


// Settings.ExperienceRuleEngine$$ApplyValue
// il2cpp: void Settings_ExperienceRuleEngine__ApplyValue (Settings_BaseSetting_o* setting, System_String_o* id, Il2CppObject* rawValue, System_Collections_Generic_List_string__o* errors, const MethodInfo* method);
// 0x59d5700
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x59d583a: jmp 0x59d590a

void Settings_ExperienceRuleEngine__ApplyValue
               (Settings_BaseSetting_o *setting,System_String_o *id,Il2CppObject *rawValue,
               System_Collections_Generic_List_string__o *errors,MethodInfo *method)

{
  int32_t *piVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  Settings_BaseSetting_c *pSVar5;
  System_String_array *pSVar6;
  bool bVar7;
  System_String_o *pSVar8;
  System_Globalization_CultureInfo_o *provider;
  System_String_o **ppSVar9;
  MethodInfo *pMVar10;
  bool local_31;
  float local_30;
  int32_t local_2c;
  
  if (Il2CppMethodInitialized_07545c93 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_BoolSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Globalization_CultureInfo);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_ExperienceRuleEngine);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_FloatSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_IntSetting);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_StringSetting);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_float_set_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_set_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_set_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_set_Value);
    il2cpp_codegen_initialize_runtime_metadata(&"Invalid numeric value for ");
    il2cpp_codegen_initialize_runtime_metadata(&"Invalid boolean value for ");
    il2cpp_codegen_initialize_runtime_metadata(&": ");
    il2cpp_codegen_initialize_runtime_metadata(&"Unsupported experience setting type: ");
    il2cpp_codegen_initialize_runtime_metadata(&"general.Weather");
    il2cpp_codegen_initialize_runtime_metadata(&"Invalid integer value for ");
    il2cpp_codegen_initialize_runtime_metadata(&"Unknown weather name for ");
    Il2CppMethodInitialized_07545c93 = '\x01';
  }
  local_31 = false;
  local_2c = 0;
  local_30 = 0.0;
  if (rawValue == (Il2CppObject *)0x0) {
    pSVar8 = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
  }
  else {
    pSVar8 = (System_String_o *)
             (*rawValue->klass->vtable[3].methodPtr)(rawValue,rawValue->klass->vtable[3].method);
  }
  if (setting == (Settings_BaseSetting_o *)0x0) {
label_059d590a:
    pSVar8 = System_String__Concat_52f0320("Unsupported experience setting type: ",id,(MethodInfo *)0x0);
    pMVar10 = MethodInfo_System_Collections_Generic_List_string_Add;
    if (errors != (System_Collections_Generic_List_string__o *)0x0) {
      piVar1 = &(errors->fields)._version;
      *piVar1 = *piVar1 + 1;
      pSVar6 = (errors->fields)._items;
      if (pSVar6 != (System_String_array *)0x0) {
        uVar4 = (errors->fields)._size;
        if (uVar4 < (uint)pSVar6->max_length) {
          (errors->fields)._size = uVar4 + 1;
          pSVar6->m_Items[(int)uVar4] = pSVar8;
          Il2CppCodeGenWriteBarrier(pSVar6->m_Items + (int)uVar4);
          return;
        }
        System_Collections_Generic_List_object___AddWithResize
                  ((System_Collections_Generic_List_object__o *)errors,(Il2CppObject *)pSVar8,
                   (MethodInfo_395D230 *)pMVar10->klass->rgctx_data[0xe].method);
        return;
      }
    }
  }
  else {
    pSVar5 = setting->klass;
    bVar2 = (pSVar5->_2).typeHierarchyDepth;
    pMVar10 = (MethodInfo *)(ulong)bVar2;
    bVar3 = (((Il2CppClass *)TypeInfo_Settings_StringSetting)->_2).typeHierarchyDepth;
    if ((bVar3 <= bVar2) &&
       ((pSVar5->_2).typeHierarchy[(ulong)bVar3 - 1] == (Il2CppClass *)TypeInfo_Settings_StringSetting)) {
      Settings_TypedSetting_object___set_Value
                ((Settings_TypedSetting_T__o *)setting,(Il2CppObject *)pSVar8,
                 (MethodInfo_42DA280 *)MethodInfo_Settings_TypedSetting_string_set_Value);
      return;
    }
    bVar3 = (((Il2CppClass *)TypeInfo_Settings_BoolSetting)->_2).typeHierarchyDepth;
    if ((bVar2 < bVar3) ||
       ((pSVar5->_2).typeHierarchy[(ulong)bVar3 - 1] != (Il2CppClass *)TypeInfo_Settings_BoolSetting)) {
      bVar3 = (((Il2CppClass *)TypeInfo_Settings_IntSetting)->_2).typeHierarchyDepth;
      if ((bVar2 < bVar3) ||
         ((pSVar5->_2).typeHierarchy[(ulong)bVar3 - 1] != (Il2CppClass *)TypeInfo_Settings_IntSetting)) {
        bVar3 = (((Il2CppClass *)TypeInfo_Settings_FloatSetting)->_2).typeHierarchyDepth;
        if ((bVar3 <= bVar2) &&
           ((pSVar5->_2).typeHierarchy[(ulong)bVar3 - 1] == (Il2CppClass *)TypeInfo_Settings_FloatSetting)) {
          if ((((Il2CppClass *)TypeInfo_System_Globalization_CultureInfo)->_2).cctor_finished_or_no_cctor == 0
             ) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Globalization_CultureInfo);
          }
          provider = System_Globalization_CultureInfo__get_InvariantCulture((MethodInfo *)0x0);
          bVar7 = System_Single__TryParse_54d11a0
                            (pSVar8,0xa7,(System_IFormatProvider_o *)provider,&local_30,(MethodInfo *)0x0);
          if (bVar7) {
            Settings_TypedSetting_float___set_Value
                      ((Settings_TypedSetting_float__o *)setting,local_30,
                       (MethodInfo_42DA3B0 *)MethodInfo_Settings_TypedSetting_float_set_Value);
            return;
          }
          pSVar8 = System_String__Concat_5302810
                             ("Invalid numeric value for ",id,": ",pSVar8,(MethodInfo *)0x0);
          if (errors != (System_Collections_Generic_List_string__o *)0x0) {
            il2cpp_runtime_helper_02fa8fa0(errors,pSVar8,MethodInfo_System_Collections_Generic_List_string_Add);
            return;
          }
          goto label_059d5ba6;
        }
        goto label_059d590a;
      }
      if ((((Il2CppClass *)TypeInfo_Settings_ExperienceRuleEngine)->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Settings_ExperienceRuleEngine);
      }
      bVar7 = Settings_ExperienceRuleEngine__TryParseInt(id,pSVar8,&local_2c,pMVar10);
      if (bVar7) {
        Settings_TypedSetting_int___set_Value
                  ((Settings_TypedSetting_int__o *)setting,local_2c,
                   (MethodInfo_42DA160 *)MethodInfo_Settings_TypedSetting_int_set_Value);
        return;
      }
      bVar7 = System_String__Equals_52ffe30(id,"general.Weather",5,(MethodInfo *)0x0);
      if (bVar7) {
        ppSVar9 = &"Unknown weather name for ";
      }
      else {
        ppSVar9 = &"Invalid integer value for ";
      }
    }
    else {
      if ((g_data_075566f0->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init(g_data_075566f0);
      }
      bVar7 = System_Boolean__TryParse(pSVar8,&local_31,(MethodInfo *)0x0);
      if (bVar7) {
        Settings_TypedSetting_bool___set_Value
                  ((Settings_TypedSetting_bool__o *)setting,local_31,
                   (MethodInfo_42DA020 *)MethodInfo_Settings_TypedSetting_bool_set_Value);
        return;
      }
      ppSVar9 = &"Invalid boolean value for ";
    }
    pSVar8 = System_String__Concat_5302810(*ppSVar9,id,": ",pSVar8,(MethodInfo *)0x0);
    pMVar10 = MethodInfo_System_Collections_Generic_List_string_Add;
    if (errors != (System_Collections_Generic_List_string__o *)0x0) {
      piVar1 = &(errors->fields)._version;
      *piVar1 = *piVar1 + 1;
      pSVar6 = (errors->fields)._items;
      if (pSVar6 != (System_String_array *)0x0) {
        uVar4 = (errors->fields)._size;
        if (uVar4 < (uint)pSVar6->max_length) {
          (errors->fields)._size = uVar4 + 1;
          pSVar6->m_Items[(int)uVar4] = pSVar8;
          Il2CppCodeGenWriteBarrier(pSVar6->m_Items + (int)uVar4);
        }
        else {
          System_Collections_Generic_List_object___AddWithResize
                    ((System_Collections_Generic_List_object__o *)errors,(Il2CppObject *)pSVar8,
                     (MethodInfo_395D230 *)pMVar10->klass->rgctx_data[0xe].method);
        }
        return;
      }
    }
  }
label_059d5ba6:
  ThrowNullReferenceException();
}


// Settings.ExperienceRuleEngine$$TryParseInt
// il2cpp: bool Settings_ExperienceRuleEngine__TryParseInt (System_String_o* id, System_String_o* value, int32_t* parsed, const MethodInfo* method);
// 0x59d69a0

bool Settings_ExperienceRuleEngine__TryParseInt
               (System_String_o *id,System_String_o *value,int32_t *parsed,MethodInfo *method)

{
  Settings_WeatherSettings_o *__this;
  bool bVar1;
  int iVar2;
  System_Globalization_CultureInfo_o *provider;
  bool bVar3;
  
  if (Il2CppMethodInitialized_07545c94 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Globalization_CultureInfo);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_ExperienceRuleEngine);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&"general.Weather");
    Il2CppMethodInitialized_07545c94 = '\x01';
  }
  if ((TypeInfo_Settings_ExperienceRuleEngine->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Settings_ExperienceRuleEngine);
  }
  bVar1 = Settings_ExperienceRuleEngine__TryParseValueName(id,value,parsed,method);
  bVar3 = true;
  if (!bVar1) {
    bVar1 = System_String__Equals_52ffe30(id,"general.Weather",5,(MethodInfo *)0x0);
    if (!bVar1) {
      if ((TypeInfo_System_Globalization_CultureInfo->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Globalization_CultureInfo);
      }
      provider = System_Globalization_CultureInfo__get_InvariantCulture((MethodInfo *)0x0);
      bVar1 = System_Int32__TryParse_54b7c80
                        (value,7,(System_IFormatProvider_o *)provider,parsed,(MethodInfo *)0x0);
      return bVar1;
    }
    __this = TypeInfo_Settings_SettingsManager->static_fields->WeatherSettings;
    if (__this == (Settings_WeatherSettings_o *)0x0) {
      iVar2 = -1;
    }
    else {
      iVar2 = Settings_WeatherSettings__FindWeatherIndex(__this,value,(MethodInfo *)0x0);
    }
    *parsed = iVar2;
    bVar3 = -1 < iVar2;
  }
  return bVar3;
}


// Settings.ExperienceRuleEngine$$ChangesDefaultValue
// il2cpp: bool Settings_ExperienceRuleEngine__ChangesDefaultValue (Settings_BaseSetting_o* setting, System_String_o* id, Il2CppObject* ruleValue, const MethodInfo* method);
// 0x59d6250

bool Settings_ExperienceRuleEngine__ChangesDefaultValue
               (Settings_BaseSetting_o *setting,System_String_o *id,Il2CppObject *ruleValue,MethodInfo *method
               )

{
  byte bVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  bool bVar5;
  System_String_o *b;
  System_String_o *a;
  uint *puVar6;
  System_Globalization_CultureInfo_o *provider;
  char *pcVar7;
  int *piVar8;
  Settings_BaseSetting_c *method_00;
  bool bVar9;
  bool local_45;
  float local_44;
  int32_t local_40;
  float local_3c;
  undefined1 local_38 [16];
  
  if (Il2CppMethodInitialized_07545c95 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_BoolSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Globalization_CultureInfo);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_ExperienceRuleEngine);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_FloatSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_IntSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_StringSetting);
    Il2CppMethodInitialized_07545c95 = '\x01';
  }
  local_45 = false;
  local_40 = 0;
  local_44 = 0.0;
  if (ruleValue == (Il2CppObject *)0x0) {
    b = *(System_String_o **)g_data_07556758->static_fields;
  }
  else {
    b = (System_String_o *)
        (*ruleValue->klass->vtable[3].methodPtr)(ruleValue,ruleValue->klass->vtable[3].method);
  }
  if (setting == (Settings_BaseSetting_o *)0x0) {
    ThrowNullReferenceException();
  }
  a = (System_String_o *)
      (*(setting->klass->vtable)._7_GetDefaultValue.methodPtr)
                (setting,(setting->klass->vtable)._7_GetDefaultValue.method);
  method_00 = setting->klass;
  bVar1 = (method_00->_2).typeHierarchyDepth;
  bVar2 = (TypeInfo_Settings_StringSetting->_2).typeHierarchyDepth;
  if ((bVar1 < bVar2) ||
     ((method_00->_2).typeHierarchy[(ulong)bVar2 - 1] != (Il2CppClass *)TypeInfo_Settings_StringSetting)) {
    bVar2 = (TypeInfo_Settings_BoolSetting->_2).typeHierarchyDepth;
    if ((bVar1 < bVar2) ||
       ((((method_00->_2).typeHierarchy[(ulong)bVar2 - 1] != (Il2CppClass *)TypeInfo_Settings_BoolSetting ||
         (a == (System_String_o *)0x0)) || ((Il2CppClass *)a->klass != g_data_075566f0)))) {
      bVar2 = (TypeInfo_Settings_IntSetting->_2).typeHierarchyDepth;
      if ((((bVar1 < bVar2) ||
           ((method_00->_2).typeHierarchy[(ulong)bVar2 - 1] != (Il2CppClass *)TypeInfo_Settings_IntSetting))
          || (a == (System_String_o *)0x0)) || ((Il2CppClass *)a->klass != g_data_07556710)) {
        bVar2 = (TypeInfo_Settings_FloatSetting->_2).typeHierarchyDepth;
        bVar9 = true;
        if (((bVar2 <= bVar1) &&
            ((method_00->_2).typeHierarchy[(ulong)bVar2 - 1] == (Il2CppClass *)TypeInfo_Settings_FloatSetting)
            ) && ((a != (System_String_o *)0x0 && ((Il2CppClass *)a->klass == g_data_07556740)))) {
          puVar6 = il2cpp_vm_Object_Unbox((Il2CppObject *)a);
          local_38 = ZEXT416(*puVar6);
          if ((TypeInfo_System_Globalization_CultureInfo->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Globalization_CultureInfo);
          }
          provider = System_Globalization_CultureInfo__get_InvariantCulture((MethodInfo *)0x0);
          bVar5 = System_Single__TryParse_54d11a0
                            (b,0xa7,(System_IFormatProvider_o *)provider,&local_44,(MethodInfo *)0x0);
          if (bVar5) {
            if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
              local_3c = local_44;
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
              local_44 = local_3c;
            }
            bVar9 = 0.0001 <= ABS((float)local_38._0_4_ - local_44);
          }
        }
      }
      else {
        piVar8 = il2cpp_vm_Object_Unbox((Il2CppObject *)a);
        iVar4 = *piVar8;
        if ((TypeInfo_Settings_ExperienceRuleEngine->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Settings_ExperienceRuleEngine);
        }
        bVar5 = Settings_ExperienceRuleEngine__TryParseInt(id,b,&local_40,(MethodInfo *)method_00);
        bVar9 = true;
        if (bVar5) {
          bVar9 = iVar4 != local_40;
        }
      }
    }
    else {
      pcVar7 = il2cpp_vm_Object_Unbox((Il2CppObject *)a);
      cVar3 = *pcVar7;
      if ((g_data_075566f0->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init(g_data_075566f0);
      }
      bVar5 = System_Boolean__TryParse(b,&local_45,(MethodInfo *)0x0);
      bVar9 = true;
      if (bVar5) {
        bVar9 = (bool)cVar3 != local_45;
      }
    }
  }
  else {
    if ((a == (System_String_o *)0x0) || ((Il2CppClass *)a->klass != g_data_07556758)) {
      a = *(System_String_o **)g_data_07556758->static_fields;
    }
    bVar9 = System_String__Equals_52ffe30(a,b,5,(MethodInfo *)0x0);
    bVar9 = !bVar9;
  }
  return bVar9;
}


// Settings.ExperienceRuleEngine$$MatchesDefaultValue
// il2cpp: bool Settings_ExperienceRuleEngine__MatchesDefaultValue (Settings_BaseSetting_o* setting, System_String_o* id, Il2CppObject* defaultValue, const MethodInfo* method);
// 0x59d5bb0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x59d5c91: jmp 0x59d5e93

bool Settings_ExperienceRuleEngine__MatchesDefaultValue
               (Settings_BaseSetting_o *setting,System_String_o *id,Il2CppObject *defaultValue,
               MethodInfo *method)

{
  byte bVar1;
  byte bVar2;
  Settings_BaseSetting_c *pSVar3;
  bool bVar4;
  System_String_o *b;
  System_Globalization_CultureInfo_o *provider;
  MethodInfo *method_00;
  bool local_45;
  float local_44;
  int32_t local_40;
  float local_3c;
  undefined1 local_38 [16];
  
  if (Il2CppMethodInitialized_07545c96 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_BoolSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Globalization_CultureInfo);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_ExperienceRuleEngine);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_FloatSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_IntSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_StringSetting);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_float_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    Il2CppMethodInitialized_07545c96 = '\x01';
  }
  local_45 = false;
  local_40 = 0;
  local_44 = 0.0;
  if (defaultValue == (Il2CppObject *)0x0) {
    b = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
  }
  else {
    b = (System_String_o *)
        (*defaultValue->klass->vtable[3].methodPtr)(defaultValue,defaultValue->klass->vtable[3].method);
  }
  if (setting != (Settings_BaseSetting_o *)0x0) {
    pSVar3 = setting->klass;
    bVar1 = (pSVar3->_2).typeHierarchyDepth;
    method_00 = (MethodInfo *)(ulong)bVar1;
    bVar2 = (((Il2CppClass *)TypeInfo_Settings_StringSetting)->_2).typeHierarchyDepth;
    if ((bVar2 <= bVar1) &&
       ((pSVar3->_2).typeHierarchy[(ulong)bVar2 - 1] == (Il2CppClass *)TypeInfo_Settings_StringSetting)) {
      bVar4 = System_String__Equals_52ffe30((*(uint64_t *)((char *)setting + 0x20)),b,5,(MethodInfo *)0x0);
      return bVar4;
    }
    bVar2 = (((Il2CppClass *)TypeInfo_Settings_BoolSetting)->_2).typeHierarchyDepth;
    if ((bVar2 <= bVar1) &&
       ((pSVar3->_2).typeHierarchy[(ulong)bVar2 - 1] == (Il2CppClass *)TypeInfo_Settings_BoolSetting)) {
      if ((g_data_075566f0->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init(g_data_075566f0);
      }
      bVar4 = System_Boolean__TryParse(b,&local_45,(MethodInfo *)0x0);
      if (bVar4) {
        return local_45 == (bool)*(char *)((long)&(*(uint64_t *)((char *)setting + 0x18)) + 1);
      }
      return false;
    }
    bVar2 = (((Il2CppClass *)TypeInfo_Settings_IntSetting)->_2).typeHierarchyDepth;
    if ((bVar1 < bVar2) ||
       ((pSVar3->_2).typeHierarchy[(ulong)bVar2 - 1] != (Il2CppClass *)TypeInfo_Settings_IntSetting)) {
      bVar2 = (((Il2CppClass *)TypeInfo_Settings_FloatSetting)->_2).typeHierarchyDepth;
      if ((bVar2 <= bVar1) &&
         ((pSVar3->_2).typeHierarchy[(ulong)bVar2 - 1] == (Il2CppClass *)TypeInfo_Settings_FloatSetting)) {
        if ((((Il2CppClass *)TypeInfo_System_Globalization_CultureInfo)->_2).cctor_finished_or_no_cctor == 0)
        {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Globalization_CultureInfo);
        }
        provider = System_Globalization_CultureInfo__get_InvariantCulture((MethodInfo *)0x0);
        bVar4 = System_Single__TryParse_54d11a0
                          (b,0xa7,(System_IFormatProvider_o *)provider,&local_44,(MethodInfo *)0x0);
        if (bVar4) {
          local_38._0_4_ = *(float *)((long)&(*(uint64_t *)((char *)setting + 0x18)) + 4);
          if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
            local_38 = ZEXT416((uint)local_38._0_4_);
            local_3c = local_44;
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
            local_44 = local_3c;
          }
          return ABS((float)local_38._0_4_ - local_44) < 0.0001;
        }
        return false;
      }
    }
    else {
      if ((((Il2CppClass *)TypeInfo_Settings_ExperienceRuleEngine)->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Settings_ExperienceRuleEngine);
      }
      bVar4 = Settings_ExperienceRuleEngine__TryParseInt(id,b,&local_40,method_00);
      if (bVar4) {
        return *(int *)((long)&(*(uint64_t *)((char *)setting + 0x18)) + 4) == local_40;
      }
    }
  }
  return false;
}


// Settings.ExperienceRuleEngine$$MatchesRange
// il2cpp: bool Settings_ExperienceRuleEngine__MatchesRange (Settings_BaseSetting_o* setting, Settings_UIRule_o* rule, const MethodInfo* method);
// 0x59d6850

bool Settings_ExperienceRuleEngine__MatchesRange
               (Settings_BaseSetting_o *setting,Settings_UIRule_o *rule,MethodInfo *method)

{
  byte bVar1;
  byte bVar2;
  Settings_BaseSetting_c *pSVar3;
  float fVar4;
  float fVar5;
  
  if (Il2CppMethodInitialized_07545c97 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_FloatSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_IntSetting);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_float_get_HasValue);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_float_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_float_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    Il2CppMethodInitialized_07545c97 = '\x01';
  }
  if (setting != (Settings_BaseSetting_o *)0x0) {
    pSVar3 = setting->klass;
    bVar1 = (pSVar3->_2).typeHierarchyDepth;
    bVar2 = (TypeInfo_Settings_IntSetting->_2).typeHierarchyDepth;
    if ((bVar1 < bVar2) ||
       ((pSVar3->_2).typeHierarchy[(ulong)bVar2 - 1] != (Il2CppClass *)TypeInfo_Settings_IntSetting)) {
      bVar2 = (TypeInfo_Settings_FloatSetting->_2).typeHierarchyDepth;
      if (bVar1 < bVar2) {
        return false;
      }
      if ((pSVar3->_2).typeHierarchy[(ulong)bVar2 - 1] != (Il2CppClass *)TypeInfo_Settings_FloatSetting) {
        return false;
      }
      fVar4 = *(float *)((long)&(*(uint64_t *)((char *)setting + 0x18)) + 4);
    }
    else {
      fVar4 = (float)*(int *)((long)&(*(uint64_t *)((char *)setting + 0x18)) + 4);
    }
    if (rule == (Settings_UIRule_o *)0x0) {
      ThrowNullReferenceException();
    }
    if (((rule->fields).Min.fields.hasValue == false) ||
       (fVar5 = System_Nullable_float___get_Value
                          (&(rule->fields).Min,
                           (MethodInfo_3CDA2D0 *)MethodInfo_System_Nullable_float_get_Value), fVar5 <= fVar4))
    {
      if ((rule->fields).Max.fields.hasValue == false) {
        return true;
      }
      fVar5 = System_Nullable_float___get_Value
                        (&(rule->fields).Max,(MethodInfo_3CDA2D0 *)MethodInfo_System_Nullable_float_get_Value)
      ;
      return fVar4 <= fVar5;
    }
  }
  return false;
}


// Settings.ExperienceRuleEngine$$MatchesAllowedValue
// il2cpp: bool Settings_ExperienceRuleEngine__MatchesAllowedValue (Settings_BaseSetting_o* setting, System_String_o* id, Settings_UIRule_o* rule, const MethodInfo* method);
// 0x59d5eb0
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x59d60ff: jmp 0x59d6044
// asm:   0x59d61a2: mov qword ptr [rsp + 8], rax

bool Settings_ExperienceRuleEngine__MatchesAllowedValue
               (Settings_BaseSetting_o *setting,System_String_o *id,Settings_UIRule_o *rule,MethodInfo *method
               )

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  int32_t value;
  uint uVar4;
  Settings_BaseSetting_c *pSVar5;
  Settings_WeatherSettings_o *pSVar6;
  Settings_SetSettingsContainer_WeatherSet__o *__this;
  bool bVar7;
  System_String_array *pSVar8;
  System_Globalization_CultureInfo_o *pSVar9;
  System_String_o *pSVar10;
  MethodInfo *method_00;
  bool local_31;
  System_String_o *local_30;
  float local_28;
  int32_t local_24;
  
  if (Il2CppMethodInitialized_07545c98 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Array_Empty_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_BoolSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Globalization_CultureInfo);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_ExperienceRuleEngine);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_FloatSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_IntSetting);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Settings_SetSettingsContainer_WeatherSet_GetSetNames);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_StringSetting);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_float_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&"general.Weather");
    Il2CppMethodInitialized_07545c98 = '\x01';
  }
  local_30 = (System_String_o *)0x0;
  local_31 = false;
  local_24 = 0;
  local_28 = 0.0;
  if (setting == (Settings_BaseSetting_o *)0x0) {
    return false;
  }
  pSVar5 = setting->klass;
  bVar1 = (pSVar5->_2).typeHierarchyDepth;
  bVar2 = (TypeInfo_Settings_StringSetting->_2).typeHierarchyDepth;
  if ((bVar1 < bVar2) ||
     ((pSVar5->_2).typeHierarchy[(ulong)bVar2 - 1] != (Il2CppClass *)TypeInfo_Settings_StringSetting)) {
    bVar2 = (TypeInfo_Settings_BoolSetting->_2).typeHierarchyDepth;
    if ((bVar1 < bVar2) ||
       ((pSVar5->_2).typeHierarchy[(ulong)bVar2 - 1] != (Il2CppClass *)TypeInfo_Settings_BoolSetting)) {
      bVar2 = (TypeInfo_Settings_IntSetting->_2).typeHierarchyDepth;
      if ((bVar1 < bVar2) ||
         ((pSVar5->_2).typeHierarchy[(ulong)bVar2 - 1] != (Il2CppClass *)TypeInfo_Settings_IntSetting)) {
        bVar2 = (TypeInfo_Settings_FloatSetting->_2).typeHierarchyDepth;
        if (bVar1 < bVar2) {
          return false;
        }
        if ((pSVar5->_2).typeHierarchy[(ulong)bVar2 - 1] != (Il2CppClass *)TypeInfo_Settings_FloatSetting) {
          return false;
        }
        local_28 = *(float *)((long)&(*(uint64_t *)((char *)setting + 0x18)) + 4);
        if ((TypeInfo_System_Globalization_CultureInfo->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Globalization_CultureInfo);
        }
        pSVar9 = System_Globalization_CultureInfo__get_InvariantCulture((MethodInfo *)0x0);
        local_30 = System_Single__ToString_54d09f0
                             (&local_28,(System_IFormatProvider_o *)pSVar9,(MethodInfo *)0x0);
      }
      else {
        method_00 = (MethodInfo *)0x0;
        bVar7 = System_String__Equals_52ffe30(id,"general.Weather",5,(MethodInfo *)0x0);
        if (bVar7) {
          pSVar6 = TypeInfo_Settings_SettingsManager->static_fields->WeatherSettings;
          if (pSVar6 == (Settings_WeatherSettings_o *)0x0) {
            pSVar8 = (System_String_array *)il2cpp_runtime_helper_02fa32d0(MethodInfo_System_Array_Empty_string);
            uVar3 = *(uint *)((long)&(*(uint64_t *)((char *)setting + 0x18)) + 4);
          }
          else {
            __this = (pSVar6->fields).WeatherSets;
            if (__this == (Settings_SetSettingsContainer_WeatherSet__o *)0x0) goto label_059d6242;
            pSVar8 = Settings_SetSettingsContainer_object___GetSetNames
                               ((Settings_SetSettingsContainer_T__o *)__this,
                                (MethodInfo_40482D0 *)
                                MethodInfo_Settings_SetSettingsContainer_WeatherSet_GetSetNames);
            uVar3 = *(uint *)((long)&(*(uint64_t *)((char *)setting + 0x18)) + 4);
          }
          if ((int)uVar3 < 0) {
            return false;
          }
          if (pSVar8 != (System_String_array *)0x0) {
            uVar4 = (uint)pSVar8->max_length;
            if ((int)uVar4 <= (int)uVar3) {
              return false;
            }
            if (uVar4 <= uVar3) {
              ThrowIndexOutOfRangeException();
            }
            if (rule != (Settings_UIRule_o *)0x0) {
              pSVar10 = pSVar8->m_Items[uVar3];
              bVar7 = Settings_UIRule__MatchesAllowedValues(rule,pSVar10,(MethodInfo *)0x0);
              if (bVar7) {
                return true;
              }
              if (pSVar10 != (System_String_o *)0x0) {
                pSVar10 = System_String__TrimEnd_53071b0(pSVar10,0x2a,(MethodInfo *)0x0);
                bVar7 = Settings_UIRule__MatchesAllowedValues(rule,pSVar10,(MethodInfo *)0x0);
                return bVar7;
              }
            }
          }
          goto label_059d6242;
        }
        value = *(int32_t *)((long)&(*(uint64_t *)((char *)setting + 0x18)) + 4);
        if ((TypeInfo_Settings_ExperienceRuleEngine->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Settings_ExperienceRuleEngine);
        }
        bVar7 = Settings_ExperienceRuleEngine__TryGetValueName(id,value,&local_30,method_00);
        if (!bVar7) {
          local_24 = *(int32_t *)((long)&(*(uint64_t *)((char *)setting + 0x18)) + 4);
          if ((TypeInfo_System_Globalization_CultureInfo->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Globalization_CultureInfo);
          }
          pSVar9 = System_Globalization_CultureInfo__get_InvariantCulture((MethodInfo *)0x0);
          local_30 = System_Int32__ToString_54b7520
                               (&local_24,(System_IFormatProvider_o *)pSVar9,(MethodInfo *)0x0);
        }
      }
    }
    else {
      local_31 = *(bool *)((long)&(*(uint64_t *)((char *)setting + 0x18)) + 1);
      if ((g_data_075566f0->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init(g_data_075566f0);
      }
      pSVar10 = System_Boolean__ToString(&local_31,(MethodInfo *)0x0);
      if (pSVar10 == (System_String_o *)0x0) goto label_059d6242;
      local_30 = System_String__ToLowerInvariant(pSVar10,(MethodInfo *)0x0);
    }
  }
  else {
    local_30 = (*(uint64_t *)((char *)setting + 0x20));
  }
  if (rule != (Settings_UIRule_o *)0x0) {
    bVar7 = Settings_UIRule__MatchesAllowedValues(rule,local_30,(MethodInfo *)0x0);
    return bVar7;
  }
label_059d6242:
  ThrowNullReferenceException();
}


// Settings.ExperienceRuleEngine$$.cctor
// il2cpp: void Settings_ExperienceRuleEngine___cctor (const MethodInfo* method);
// 0x59d6ab0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x59d6ad8: cmp byte ptr [rip + 0x1b6bda7], 0

void Settings_ExperienceRuleEngine___cctor(MethodInfo *method)

{
  uint32_t uVar1;
  System_OrdinalIgnoreCaseComparer_o *comparer;
  Il2CppType *handle;
  System_Collections_Generic_Dictionary_string__Type__o *__this;
  System_Type_o *pSVar2;
  
  if (Il2CppMethodInitialized_07545c99 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_Type_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_Type_ctor_718bf18);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_Dictionary_string_Type);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_ExperienceRuleEngine);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_Settings_GameDifficulty);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_Settings_PVPMode);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_StringComparer);
    il2cpp_codegen_initialize_runtime_metadata(&"general.Difficulty");
    il2cpp_codegen_initialize_runtime_metadata(&"misc.PVP");
    Il2CppMethodInitialized_07545c99 = '\x01';
    uVar1 = (TypeInfo_System_StringComparer->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_System_StringComparer->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_StringComparer);
  }
  if (Il2CppMethodInitialized_07542886 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_StringComparer);
    Il2CppMethodInitialized_07542886 = '\x01';
    uVar1 = (TypeInfo_System_StringComparer->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (((Il2CppClass *)TypeInfo_System_StringComparer)->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_StringComparer);
  }
  comparer = TypeInfo_System_StringComparer->static_fields->s_ordinalIgnoreCase;
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_string_Type);
  System_Collections_Generic_Dictionary_object__object____ctor_4aac9c0
            ((System_Collections_Generic_Dictionary_object__object__o *)__this,
             (System_Collections_Generic_IEqualityComparer_TKey__o *)comparer,
             (MethodInfo_4AAC9C0 *)MethodInfo_System_Collections_Generic_Dictionary_string_Type_ctor_718bf18);
  handle = TypeRef_Settings_GameDifficulty;
  if ((g_data_075567a8->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_075567a8);
  }
  pSVar2 = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)handle,(MethodInfo *)0x0);
  if (__this == (System_Collections_Generic_Dictionary_string__Type__o *)0x0) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_Dictionary_object__object___Add
            ((System_Collections_Generic_Dictionary_object__object__o *)__this,
             (Il2CppObject *)"general.Difficulty",(Il2CppObject *)pSVar2,
             (MethodInfo_4AAD4E0 *)MethodInfo_System_Collections_Generic_Dictionary_string_Type_Add);
  pSVar2 = System_Type__GetTypeFromHandle
                     ((System_RuntimeTypeHandle_o)TypeRef_Settings_PVPMode,(MethodInfo *)0x0);
  System_Collections_Generic_Dictionary_object__object___Add
            ((System_Collections_Generic_Dictionary_object__object__o *)__this,
             (Il2CppObject *)"misc.PVP",(Il2CppObject *)pSVar2,
             (MethodInfo_4AAD4E0 *)MethodInfo_System_Collections_Generic_Dictionary_string_Type_Add);
  TypeInfo_Settings_ExperienceRuleEngine->static_fields->NamedIntSettings = __this;
  Il2CppCodeGenWriteBarrier(&TypeInfo_Settings_ExperienceRuleEngine->static_fields->NamedIntSettings);
  return;
}


