// Type: Utility.Algorithms.BrotliAlgorithm
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/Utility.Algorithms/BrotliAlgorithm.cs
// Prior real C# source: none
// --------------------------------

// Utility.Algorithms.BrotliAlgorithm$$Compress
// il2cpp: System_Byte_array* Utility_Algorithms_BrotliAlgorithm__Compress (Utility_Algorithms_BrotliAlgorithm_o* __this, System_Byte_array* data, int32_t level, const MethodInfo* method);
// 0x5df4690
// fidelity: the machine code has facts this C leaves out:
//   call to il2cpp_codegen_get_runtime_metadata
//   call to il2cpp_codegen_class_init_checked
// eh: try 0x5df46f0..0x5df4983 -> pad 0x5df499c (+10 call sites) catch Il2CppExceptionWrapper, cleanup [managed catch: runtime default class]
// eh: try 0x5df498e..0x5df4998 -> pad 0x5df4a53 catch (...) [compiler noexcept guard]
// eh: try 0x5df49c1..0x5df49c6 -> pad 0x5df49de catch Il2CppExceptionWrapper, cleanup [managed catch: runtime default class]
// eh: try 0x5df49e4..0x5df49ee -> pad 0x5df4a53 catch (...) [compiler noexcept guard]
// eh: try 0x5df4a0f..0x5df4a43 -> pad 0x5df4a43 (+1 call sites) cleanup
// eh: try 0x5df4a46..0x5df4a4b -> pad 0x5df4a53 catch (...) [compiler noexcept guard]
// asm: 89 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5df4903: mov rdi, rbx
// asm:   0x5df4906: call 0x311e050  ; il2cpp_codegen_rgctx_method_init()
// asm:   0x5df490b: mov rax, qword ptr [rbx + 0x38]
// asm:   0x5df490f: mov rdi, qword ptr [rax + 0x10]
// asm:   0x5df4913: test byte ptr [rdi + 0x135], 1
// asm:   0x5df491a: jne 0x5df48c9
// asm:   0x5df491c: call 0x311dff0  ; il2cpp_codegen_class_init_checked()
// asm:   0x5df4921: mov rdi, rax
// asm:   0x5df4924: cmp dword ptr [rdi + 0xe4], 0
// asm:   0x5df492b: jne 0x5df48d2
// asm:   0x5df492d: call 0x30d6240  ; il2cpp_codegen_runtime_class_init()
// asm:   0x5df4932: mov rax, qword ptr [rbx + 0x38]
// asm:   0x5df4936: mov rax, qword ptr [rax + 0x10]
// asm:   0x5df493a: test byte ptr [rax + 0x135], 1
// asm:   0x5df4941: je 0x5df48e3
// asm:   0x5df4943: jmp 0x5df48eb
// asm:   0x5df494a: mov rdi, r14
// asm:   0x5df494d: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5df4952: mov rdi, r14
// asm:   0x5df4955: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5df495f: jmp 0x5df49a6
// asm:   0x5df4961: jmp 0x5df49a6
// asm:   0x5df4963: mov rbx, rdx
// asm:   0x5df4966: mov r14, rax
// asm:   0x5df4969: cmp ebx, 1
// asm:   0x5df496c: jne 0x5df498e
// asm:   0x5df496e: mov rdi, r14
// asm:   0x5df4971: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5df4976: mov r14, qword ptr [rax]
// asm:   0x5df4979: mov qword ptr [rsp + 0x18], r14
// asm:   0x5df497e: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5df4983: jmp 0x5df478b
// asm:   0x5df4988: mov rbx, rdx
// asm:   0x5df498b: mov r14, rax
// asm:   0x5df498e: lea rdi, [rsp + 0x18]
// asm:   0x5df4993: call 0x2fdf9a0  ; il2cpp_runtime_helper_02fdf9a0()
// asm:   0x5df4998: jmp 0x5df49ac
// asm:   0x5df499a: jmp 0x5df49a6
// asm:   0x5df499c: jmp 0x5df499e
// asm:   0x5df499e: mov rbx, rdx
// asm:   0x5df49a1: mov r14, rax
// asm:   0x5df49a4: jmp 0x5df49ee
// asm:   0x5df49a6: mov rbx, rdx
// asm:   0x5df49a9: mov r14, rax
// asm:   0x5df49ac: cmp ebx, 1
// asm:   0x5df49af: jne 0x5df49e4
// asm:   0x5df49b1: mov rdi, r14
// asm:   0x5df49b4: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5df49b9: mov r14, qword ptr [rax]
// asm:   0x5df49bc: mov qword ptr [rsp + 0x28], r14
// asm:   0x5df49c1: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5df49c6: mov r15b, 1
// asm:   0x5df49c9: xor ebx, ebx
// asm:   0x5df49cb: mov rbp, qword ptr [rsp + 8]
// asm:   0x5df49d0: test rbp, rbp
// asm:   0x5df49d3: jne 0x5df4830
// asm:   0x5df49d9: jmp 0x5df4896
// asm:   0x5df49de: mov rbx, rdx
// asm:   0x5df49e1: mov r14, rax
// asm:   0x5df49e4: lea rdi, [rsp + 0x28]
// asm:   0x5df49e9: call 0x2fdfa30  ; il2cpp_runtime_helper_02fdfa30()
// asm:   0x5df49ee: cmp ebx, 1
// asm:   0x5df49f1: jne 0x5df4a4b
// asm:   0x5df49f3: mov rdi, r14
// asm:   0x5df49f6: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5df49fb: mov rbx, rax
// asm:   0x5df49fe: lea rax, [rip + 0x1761cc3]
// asm:   0x5df4a05: mov rdi, qword ptr [rax + 0x10]
// asm:   0x5df4a09: mov rax, qword ptr [rbx]
// asm:   0x5df4a0c: mov rsi, qword ptr [rax]
// asm:   0x5df4a0f: call 0x30d6910  ; il2cpp_runtime_helper_030d6910()
// asm:   0x5df4a14: test al, al
// asm:   0x5df4a16: je 0x5df4a22
// asm:   0x5df4a18: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5df4a1d: jmp 0x5df48a4
// asm:   0x5df4a22: mov edi, 8
// asm:   0x5df4a27: call 0x6e255b0  ; __cxa_allocate_exception()
// asm:   0x5df4a2c: mov rcx, qword ptr [rbx]
// asm:   0x5df4a2f: mov qword ptr [rax], rcx
// asm:   0x5df4a32: lea rsi, [rip + 0x1038ac7]
// asm:   0x5df4a39: mov rdi, rax
// asm:   0x5df4a3c: xor edx, edx
// asm:   0x5df4a3e: call 0x6e255c0  ; __cxa_throw()
// asm:   0x5df4a43: mov r14, rax
// asm:   0x5df4a46: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5df4a4b: mov rdi, r14
// asm:   0x5df4a4e: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5df4a53: mov rdi, rax
// asm:   0x5df4a56: call 0x2ab61e0  ; __clang_call_terminate()

System_Byte_array *
Utility_Algorithms_BrotliAlgorithm__Compress
          (Utility_Algorithms_BrotliAlgorithm_o *__this,System_Byte_array *data,int32_t level,
          MethodInfo *method)

{
  System_IO_Compression_BrotliStream_c *pSVar1;
  Il2CppRuntimeInterfaceOffsetPair *pIVar2;
  System_IO_MemoryStream_c *pSVar3;
  System_IO_MemoryStream_o *pSVar4;
  System_IO_Compression_BrotliStream_o *pSVar5;
  VirtualInvokeData *pVVar6;
  System_Byte_array *pSVar7;
  ulong uVar8;
  long lVar9;
  System_IO_MemoryStream_o *pSStack_50;
  System_IO_Compression_BrotliStream_o *pSStack_48;
  undefined8 uStack_40;
  System_IO_Compression_BrotliStream_o **ppSStack_38;
  undefined8 uStack_30;
  System_IO_MemoryStream_o **ppSStack_28;
  
  if (Il2CppMethodInitialized_07548317 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IO_Compression_BrotliStream);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IDisposable);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IO_MemoryStream);
    Il2CppMethodInitialized_07548317 = '\x01';
  }
  pSStack_50 = (System_IO_MemoryStream_o *)0x0;
  pSStack_48 = (System_IO_Compression_BrotliStream_o *)0x0;
  pSVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_IO_MemoryStream);
  System_IO_MemoryStream___ctor(pSVar4,(MethodInfo *)0x0);
  uStack_30 = 0;
  ppSStack_28 = &pSStack_50;
  pSStack_50 = pSVar4;
  pSVar5 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_IO_Compression_BrotliStream);
  System_IO_Compression_BrotliStream___ctor_5f60a50
            (pSVar5,(System_IO_Stream_o *)pSVar4,level,true,(MethodInfo *)0x0);
  uStack_40 = 0;
  ppSStack_38 = &pSStack_48;
  pSStack_48 = pSVar5;
  if ((data == (System_Byte_array *)0x0) || (pSVar5 == (System_IO_Compression_BrotliStream_o *)0x0)) {
    ThrowNullReferenceException();
  }
  (*(pSVar5->klass->vtable)._36_Write.methodPtr)
            (pSVar5,data,0,(int32_t)data->max_length,(pSVar5->klass->vtable)._36_Write.method);
  pSVar5 = pSStack_48;
  if (pSStack_48 != (System_IO_Compression_BrotliStream_o *)0x0) {
    pSVar1 = pSStack_48->klass;
    uVar8 = (ulong)(pSVar1->_2).interface_offsets_count;
    if (uVar8 != 0) {
      pIVar2 = (pSVar1->_1).interfaceOffsets;
      lVar9 = 0;
      do {
        if (*(System_IDisposable_c **)((long)&pIVar2->interfaceType + lVar9) == TypeInfo_System_IDisposable) {
          pVVar6 = &(pSVar1->vtable)._0_Equals + *(int *)((long)&pIVar2->offset + lVar9);
          goto label_05df47ed;
        }
        lVar9 = lVar9 + 0x10;
      } while (uVar8 * 0x10 != lVar9);
    }
    pVVar6 = GetInterfaceInvokeDataFromVTableSlowPath
                       ((Il2CppObject *)pSStack_48,(Il2CppClass *)TypeInfo_System_IDisposable,0);
label_05df47ed:
    (*pVVar6->methodPtr)((Il2CppObject *)pSVar5,pVVar6->method);
  }
  if (pSStack_50 == (System_IO_MemoryStream_o *)0x0) {
    ThrowNullReferenceException();
  }
  pSVar7 = (*(pSStack_50->klass->vtable)._42_ToArray.methodPtr)
                     (pSStack_50,(pSStack_50->klass->vtable)._42_ToArray.method);
  pSVar4 = pSStack_50;
  if (pSStack_50 != (System_IO_MemoryStream_o *)0x0) {
    pSVar3 = pSStack_50->klass;
    uVar8 = (ulong)(pSVar3->_2).interface_offsets_count;
    if (uVar8 != 0) {
      pIVar2 = (pSVar3->_1).interfaceOffsets;
      lVar9 = 0;
      do {
        if (*(System_IDisposable_c **)((long)&pIVar2->interfaceType + lVar9) == TypeInfo_System_IDisposable) {
          pVVar6 = &(pSVar3->vtable)._0_Equals + *(int *)((long)&pIVar2->offset + lVar9);
          goto label_05df488d;
        }
        lVar9 = lVar9 + 0x10;
      } while (uVar8 * 0x10 != lVar9);
    }
    pVVar6 = GetInterfaceInvokeDataFromVTableSlowPath
                       ((Il2CppObject *)pSStack_50,(Il2CppClass *)TypeInfo_System_IDisposable,0);
label_05df488d:
    (*pVVar6->methodPtr)((Il2CppObject *)pSVar4,pVVar6->method);
  }
  return pSVar7;
}


// Utility.Algorithms.BrotliAlgorithm$$Decompress
// il2cpp: System_Byte_array* Utility_Algorithms_BrotliAlgorithm__Decompress (Utility_Algorithms_BrotliAlgorithm_o* __this, System_Byte_array* data, int32_t bufferSize, int64_t maxSize, const MethodInfo* method);
// 0x5df4a60
// fidelity: the machine code has facts this C leaves out:
//   call to il2cpp_codegen_get_runtime_metadata
//   call to il2cpp_codegen_class_init_checked
// eh: try 0x5df4ad4..0x5df4eb0 -> pad 0x5df4e70 (+18 call sites) catch Il2CppExceptionWrapper, cleanup [managed catch: runtime default class]
// eh: try 0x5df4ebb..0x5df4ec5 -> pad 0x5df4f5b catch (...) [compiler noexcept guard]
// eh: try 0x5df4eda..0x5df4edf -> pad 0x5df4ee6 catch Il2CppExceptionWrapper, cleanup [managed catch: runtime default class]
// eh: try 0x5df4eec..0x5df4ef6 -> pad 0x5df4f5b catch (...) [compiler noexcept guard]
// eh: try 0x5df4f17..0x5df4f4b -> pad 0x5df4f4b (+1 call sites) cleanup
// eh: try 0x5df4f4e..0x5df4f53 -> pad 0x5df4f5b catch (...) [compiler noexcept guard]
// asm: 101 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5df4c8b: jmp 0x5df4d06
// asm:   0x5df4c8d: xor r14d, r14d
// asm:   0x5df4c90: xor r15d, r15d
// asm:   0x5df4c93: mov rbx, qword ptr [rsp + 8]
// asm:   0x5df4c98: test rbx, rbx
// asm:   0x5df4c9b: je 0x5df4d06
// asm:   0x5df4d76: mov rdi, rbx
// asm:   0x5df4d79: call 0x311e050  ; il2cpp_codegen_rgctx_method_init()
// asm:   0x5df4d7e: mov rax, qword ptr [rbx + 0x38]
// asm:   0x5df4d82: mov rdi, qword ptr [rax + 0x10]
// asm:   0x5df4d86: test byte ptr [rdi + 0x135], 1
// asm:   0x5df4d8d: jne 0x5df4d38
// asm:   0x5df4d8f: call 0x311dff0  ; il2cpp_codegen_class_init_checked()
// asm:   0x5df4d94: mov rdi, rax
// asm:   0x5df4d97: cmp dword ptr [rdi + 0xe4], 0
// asm:   0x5df4d9e: jne 0x5df4d41
// asm:   0x5df4da0: call 0x30d6240  ; il2cpp_codegen_runtime_class_init()
// asm:   0x5df4da5: mov rax, qword ptr [rbx + 0x38]
// asm:   0x5df4da9: mov rax, qword ptr [rax + 0x10]
// asm:   0x5df4dad: test byte ptr [rax + 0x135], 1
// asm:   0x5df4db4: je 0x5df4d52
// asm:   0x5df4db6: jmp 0x5df4d5a
// asm:   0x5df4e4f: mov rdi, r14
// asm:   0x5df4e52: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5df4e57: mov rdi, r14
// asm:   0x5df4e5a: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5df4e64: jmp 0x5df4e72
// asm:   0x5df4e66: jmp 0x5df4e72
// asm:   0x5df4e68: jmp 0x5df4e8e
// asm:   0x5df4e6a: jmp 0x5df4e8e
// asm:   0x5df4e6c: jmp 0x5df4e72
// asm:   0x5df4e6e: jmp 0x5df4e72
// asm:   0x5df4e70: jmp 0x5df4e7a
// asm:   0x5df4e72: mov rbx, rdx
// asm:   0x5df4e75: mov r14, rax
// asm:   0x5df4e78: jmp 0x5df4ec5
// asm:   0x5df4e7a: mov rbx, rdx
// asm:   0x5df4e7d: mov r14, rax
// asm:   0x5df4e80: jmp 0x5df4ef6
// asm:   0x5df4e82: jmp 0x5df4e8e
// asm:   0x5df4e84: jmp 0x5df4e8e
// asm:   0x5df4e86: jmp 0x5df4e8e
// asm:   0x5df4e88: jmp 0x5df4e8e
// asm:   0x5df4e8a: jmp 0x5df4e8e
// asm:   0x5df4e8c: jmp 0x5df4e8e
// asm:   0x5df4e8e: mov rbx, rdx
// asm:   0x5df4e91: mov r14, rax
// asm:   0x5df4e94: cmp ebx, 1
// asm:   0x5df4e97: jne 0x5df4ebb
// asm:   0x5df4e99: mov rdi, r14
// asm:   0x5df4e9c: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5df4ea1: mov r14, qword ptr [rax]
// asm:   0x5df4ea4: mov qword ptr [rsp + 0x28], r14
// asm:   0x5df4ea9: xor ebp, ebp
// asm:   0x5df4eab: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5df4eb0: jmp 0x5df4bd4
// asm:   0x5df4eb5: mov rbx, rdx
// asm:   0x5df4eb8: mov r14, rax
// asm:   0x5df4ebb: lea rdi, [rsp + 0x28]
// asm:   0x5df4ec0: call 0x2fdfac0  ; il2cpp_runtime_helper_02fdfac0()
// asm:   0x5df4ec5: cmp ebx, 1
// asm:   0x5df4ec8: jne 0x5df4eec
// asm:   0x5df4eca: mov rdi, r14
// asm:   0x5df4ecd: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5df4ed2: mov r14, qword ptr [rax]
// asm:   0x5df4ed5: mov qword ptr [rsp + 0x38], r14
// asm:   0x5df4eda: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5df4edf: xor ebp, ebp
// asm:   0x5df4ee1: jmp 0x5df4c90
// asm:   0x5df4ee6: mov rbx, rdx
// asm:   0x5df4ee9: mov r14, rax
// asm:   0x5df4eec: lea rdi, [rsp + 0x38]
// asm:   0x5df4ef1: call 0x2fdfb50  ; il2cpp_runtime_helper_02fdfb50()
// asm:   0x5df4ef6: cmp ebx, 1
// asm:   0x5df4ef9: jne 0x5df4f53
// asm:   0x5df4efb: mov rdi, r14
// asm:   0x5df4efe: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5df4f03: mov rbx, rax
// asm:   0x5df4f06: lea rax, [rip + 0x17617bb]
// asm:   0x5df4f0d: mov rdi, qword ptr [rax + 0x10]
// asm:   0x5df4f11: mov rax, qword ptr [rbx]
// asm:   0x5df4f14: mov rsi, qword ptr [rax]
// asm:   0x5df4f17: call 0x30d6910  ; il2cpp_runtime_helper_030d6910()
// asm:   0x5df4f1c: test al, al
// asm:   0x5df4f1e: je 0x5df4f2a
// asm:   0x5df4f20: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5df4f25: jmp 0x5df4d13
// asm:   0x5df4f2a: mov edi, 8
// asm:   0x5df4f2f: call 0x6e255b0  ; __cxa_allocate_exception()
// asm:   0x5df4f34: mov rcx, qword ptr [rbx]
// asm:   0x5df4f37: mov qword ptr [rax], rcx
// asm:   0x5df4f3a: lea rsi, [rip + 0x10385bf]
// asm:   0x5df4f41: mov rdi, rax
// asm:   0x5df4f44: xor edx, edx
// asm:   0x5df4f46: call 0x6e255c0  ; __cxa_throw()
// asm:   0x5df4f4b: mov r14, rax
// asm:   0x5df4f4e: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5df4f53: mov rdi, r14
// asm:   0x5df4f56: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5df4f5b: mov rdi, rax
// asm:   0x5df4f5e: call 0x2ab61e0  ; __clang_call_terminate()

System_Byte_array *
Utility_Algorithms_BrotliAlgorithm__Decompress
          (Utility_Algorithms_BrotliAlgorithm_o *__this,System_Byte_array *data,int32_t bufferSize,
          int64_t maxSize,MethodInfo *method)

{
  System_IO_Compression_BrotliStream_c *pSVar1;
  Il2CppRuntimeInterfaceOffsetPair *pIVar2;
  System_IO_MemoryStream_c *pSVar3;
  uint uVar4;
  System_IO_MemoryStream_o *pSVar5;
  System_IO_Compression_BrotliStream_o *pSVar6;
  System_Byte_array *pSVar7;
  VirtualInvokeData *pVVar8;
  Il2CppObject *arg0;
  Il2CppObject *arg1;
  System_String_o *pSVar9;
  Il2CppClass *klass;
  System_IO_IOException_o *__this_00;
  MethodInfo *lastManagedFrame;
  ulong uVar10;
  long lVar11;
  System_IO_MemoryStream_o *pSStack_70;
  System_IO_Compression_BrotliStream_o *pSStack_68;
  int64_t iStack_60;
  long alStack_58 [2];
  System_IO_Compression_BrotliStream_o **ppSStack_48;
  undefined8 uStack_40;
  System_IO_MemoryStream_o **ppSStack_38;
  
  if (Il2CppMethodInitialized_07548318 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IO_Compression_BrotliStream);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_byte_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IDisposable);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IO_MemoryStream);
    Il2CppMethodInitialized_07548318 = '\x01';
  }
  pSStack_70 = (System_IO_MemoryStream_o *)0x0;
  pSStack_68 = (System_IO_Compression_BrotliStream_o *)0x0;
  pSVar5 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_IO_MemoryStream);
  System_IO_MemoryStream___ctor(pSVar5,(MethodInfo *)0x0);
  uStack_40 = 0;
  ppSStack_38 = &pSStack_70;
  pSStack_70 = pSVar5;
  pSVar5 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_IO_MemoryStream);
  System_IO_MemoryStream___ctor_5465640(pSVar5,data,(MethodInfo *)0x0);
  pSVar6 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_IO_Compression_BrotliStream);
  System_IO_Compression_BrotliStream___ctor(pSVar6,(System_IO_Stream_o *)pSVar5,0,(MethodInfo *)0x0);
  alStack_58[1] = 0;
  ppSStack_48 = &pSStack_68;
  pSStack_68 = pSVar6;
  pSVar7 = (System_Byte_array *)SZArrayNew(TypeInfo_byte_array,bufferSize);
  lVar11 = 0;
  while( true ) {
    if (pSStack_68 == (System_IO_Compression_BrotliStream_o *)0x0) {
      ThrowNullReferenceException();
    }
    uVar4 = (*(pSStack_68->klass->vtable)._33_Read.methodPtr)
                      (pSStack_68,pSVar7,0,bufferSize,(pSStack_68->klass->vtable)._33_Read.method);
    pSVar6 = pSStack_68;
    if ((int)uVar4 < 1) break;
    lVar11 = lVar11 + (ulong)uVar4;
    if (maxSize < lVar11) {
      alStack_58[0] = lVar11;
      arg0 = il2cpp_vm_Object_Box(g_data_07556730,alStack_58);
      iStack_60 = maxSize;
      arg1 = il2cpp_vm_Object_Box(g_data_07556730,&iStack_60);
      pSVar9 = il2cpp_codegen_get_runtime_metadata(&"Decompressed size exceeded maximum allowed ({0} > {1})");
      pSVar9 = System_String__Format_5302c50(pSVar9,arg0,arg1,(MethodInfo *)0x0);
      klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_IO_IOException);
      __this_00 = (System_IO_IOException_o *)il2cpp_codegen_object_new(klass);
      System_IO_IOException___ctor_5463af0(__this_00,pSVar9,(MethodInfo *)0x0);
      lastManagedFrame =
           il2cpp_codegen_get_runtime_metadata(&MethodInfo_Utility_Algorithms_BrotliAlgorithm_Decompress);
      il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
    }
    if (pSStack_70 == (System_IO_MemoryStream_o *)0x0) {
      ThrowNullReferenceException();
    }
    (*(pSStack_70->klass->vtable)._36_Write.methodPtr)
              (pSStack_70,pSVar7,0,uVar4,(pSStack_70->klass->vtable)._36_Write.method);
  }
  if (pSStack_68 != (System_IO_Compression_BrotliStream_o *)0x0) {
    pSVar1 = pSStack_68->klass;
    uVar10 = (ulong)(pSVar1->_2).interface_offsets_count;
    if (uVar10 != 0) {
      pIVar2 = (pSVar1->_1).interfaceOffsets;
      lVar11 = 0;
      do {
        if (*(System_IDisposable_c **)((long)&pIVar2->interfaceType + lVar11) == TypeInfo_System_IDisposable)
        {
          pVVar8 = &(pSVar1->vtable)._0_Equals + *(int *)((long)&pIVar2->offset + lVar11);
          goto label_05df4c3d;
        }
        lVar11 = lVar11 + 0x10;
      } while (uVar10 * 0x10 != lVar11);
    }
    pVVar8 = GetInterfaceInvokeDataFromVTableSlowPath
                       ((Il2CppObject *)pSStack_68,(Il2CppClass *)TypeInfo_System_IDisposable,0);
label_05df4c3d:
    (*pVVar8->methodPtr)((Il2CppObject *)pSVar6,pVVar8->method);
  }
  if (pSStack_70 == (System_IO_MemoryStream_o *)0x0) {
    ThrowNullReferenceException();
  }
  pSVar7 = (*(pSStack_70->klass->vtable)._42_ToArray.methodPtr)
                     (pSStack_70,(pSStack_70->klass->vtable)._42_ToArray.method);
  pSVar5 = pSStack_70;
  if (pSStack_70 != (System_IO_MemoryStream_o *)0x0) {
    pSVar3 = pSStack_70->klass;
    uVar10 = (ulong)(pSVar3->_2).interface_offsets_count;
    if (uVar10 != 0) {
      pIVar2 = (pSVar3->_1).interfaceOffsets;
      lVar11 = 0;
      do {
        if (*(System_IDisposable_c **)((long)&pIVar2->interfaceType + lVar11) == TypeInfo_System_IDisposable)
        {
          pVVar8 = &(pSVar3->vtable)._0_Equals + *(int *)((long)&pIVar2->offset + lVar11);
          goto label_05df4cfd;
        }
        lVar11 = lVar11 + 0x10;
      } while (uVar10 * 0x10 != lVar11);
    }
    pVVar8 = GetInterfaceInvokeDataFromVTableSlowPath
                       ((Il2CppObject *)pSStack_70,(Il2CppClass *)TypeInfo_System_IDisposable,0);
label_05df4cfd:
    (*pVVar8->methodPtr)((Il2CppObject *)pSVar5,pVVar8->method);
  }
  return pSVar7;
}


// Utility.Algorithms.BrotliAlgorithm$$.ctor
// il2cpp: void Utility_Algorithms_BrotliAlgorithm___ctor (Utility_Algorithms_BrotliAlgorithm_o* __this, const MethodInfo* method);
// 0x5dea940

void Utility_Algorithms_BrotliAlgorithm___ctor
               (Utility_Algorithms_BrotliAlgorithm_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


