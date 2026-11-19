// Type: Utility.Algorithms.GZipAlgorithm
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Utility.Algorithms/GZipAlgorithm.cs
// Prior real C# source: none
// --------------------------------

// Utility.Algorithms.GZipAlgorithm$$Compress
// il2cpp: System_Byte_array* Utility_Algorithms_GZipAlgorithm__Compress (Utility_Algorithms_GZipAlgorithm_o* __this, System_Byte_array* data, int32_t level, const MethodInfo* method);
// 0x5df5860
// eh: try 0x5df58c0..0x5df5b53 -> pad 0x5df5b6c (+10 call sites) catch Il2CppExceptionWrapper, cleanup [managed catch: runtime default class]
// eh: try 0x5df5b5e..0x5df5b68 -> pad 0x5df5c23 catch (...) [compiler noexcept guard]
// eh: try 0x5df5b91..0x5df5b96 -> pad 0x5df5bae catch Il2CppExceptionWrapper, cleanup [managed catch: runtime default class]
// eh: try 0x5df5bb4..0x5df5bbe -> pad 0x5df5c23 catch (...) [compiler noexcept guard]
// eh: try 0x5df5bdf..0x5df5c13 -> pad 0x5df5c13 (+1 call sites) cleanup
// eh: try 0x5df5c16..0x5df5c1b -> pad 0x5df5c23 catch (...) [compiler noexcept guard]
// asm: 89 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5df5ad3: mov rdi, rbx
// asm:   0x5df5ad6: call 0x311e050  ; il2cpp_codegen_rgctx_method_init()
// asm:   0x5df5adb: mov rax, qword ptr [rbx + 0x38]
// asm:   0x5df5adf: mov rdi, qword ptr [rax + 0x10]
// asm:   0x5df5ae3: test byte ptr [rdi + 0x135], 1
// asm:   0x5df5aea: jne 0x5df5a99
// asm:   0x5df5aec: call 0x311dff0  ; il2cpp_codegen_class_init_checked()
// asm:   0x5df5af1: mov rdi, rax
// asm:   0x5df5af4: cmp dword ptr [rdi + 0xe4], 0
// asm:   0x5df5afb: jne 0x5df5aa2
// asm:   0x5df5afd: call 0x30d6240  ; il2cpp_codegen_runtime_class_init()
// asm:   0x5df5b02: mov rax, qword ptr [rbx + 0x38]
// asm:   0x5df5b06: mov rax, qword ptr [rax + 0x10]
// asm:   0x5df5b0a: test byte ptr [rax + 0x135], 1
// asm:   0x5df5b11: je 0x5df5ab3
// asm:   0x5df5b13: jmp 0x5df5abb
// asm:   0x5df5b1a: mov rdi, r14
// asm:   0x5df5b1d: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5df5b22: mov rdi, r14
// asm:   0x5df5b25: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5df5b2f: jmp 0x5df5b76
// asm:   0x5df5b31: jmp 0x5df5b76
// asm:   0x5df5b33: mov rbx, rdx
// asm:   0x5df5b36: mov r14, rax
// asm:   0x5df5b39: cmp ebx, 1
// asm:   0x5df5b3c: jne 0x5df5b5e
// asm:   0x5df5b3e: mov rdi, r14
// asm:   0x5df5b41: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5df5b46: mov r14, qword ptr [rax]
// asm:   0x5df5b49: mov qword ptr [rsp + 0x18], r14
// asm:   0x5df5b4e: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5df5b53: jmp 0x5df595b
// asm:   0x5df5b58: mov rbx, rdx
// asm:   0x5df5b5b: mov r14, rax
// asm:   0x5df5b5e: lea rdi, [rsp + 0x18]
// asm:   0x5df5b63: call 0x2fdfe20  ; il2cpp_runtime_helper_02fdfe20()
// asm:   0x5df5b68: jmp 0x5df5b7c
// asm:   0x5df5b6a: jmp 0x5df5b76
// asm:   0x5df5b6c: jmp 0x5df5b6e
// asm:   0x5df5b6e: mov rbx, rdx
// asm:   0x5df5b71: mov r14, rax
// asm:   0x5df5b74: jmp 0x5df5bbe
// asm:   0x5df5b76: mov rbx, rdx
// asm:   0x5df5b79: mov r14, rax
// asm:   0x5df5b7c: cmp ebx, 1
// asm:   0x5df5b7f: jne 0x5df5bb4
// asm:   0x5df5b81: mov rdi, r14
// asm:   0x5df5b84: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5df5b89: mov r14, qword ptr [rax]
// asm:   0x5df5b8c: mov qword ptr [rsp + 0x28], r14
// asm:   0x5df5b91: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5df5b96: mov r15b, 1
// asm:   0x5df5b99: xor ebx, ebx
// asm:   0x5df5b9b: mov rbp, qword ptr [rsp + 8]
// asm:   0x5df5ba0: test rbp, rbp
// asm:   0x5df5ba3: jne 0x5df5a00
// asm:   0x5df5ba9: jmp 0x5df5a66
// asm:   0x5df5bae: mov rbx, rdx
// asm:   0x5df5bb1: mov r14, rax
// asm:   0x5df5bb4: lea rdi, [rsp + 0x28]
// asm:   0x5df5bb9: call 0x2fdfeb0  ; il2cpp_runtime_helper_02fdfeb0()
// asm:   0x5df5bbe: cmp ebx, 1
// asm:   0x5df5bc1: jne 0x5df5c1b
// asm:   0x5df5bc3: mov rdi, r14
// asm:   0x5df5bc6: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5df5bcb: mov rbx, rax
// asm:   0x5df5bce: lea rax, [rip + 0x1760af3]
// asm:   0x5df5bd5: mov rdi, qword ptr [rax + 0x10]
// asm:   0x5df5bd9: mov rax, qword ptr [rbx]
// asm:   0x5df5bdc: mov rsi, qword ptr [rax]
// asm:   0x5df5bdf: call 0x30d6910  ; il2cpp_runtime_helper_030d6910()
// asm:   0x5df5be4: test al, al
// asm:   0x5df5be6: je 0x5df5bf2
// asm:   0x5df5be8: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5df5bed: jmp 0x5df5a74
// asm:   0x5df5bf2: mov edi, 8
// asm:   0x5df5bf7: call 0x6e255b0  ; __cxa_allocate_exception()
// asm:   0x5df5bfc: mov rcx, qword ptr [rbx]
// asm:   0x5df5bff: mov qword ptr [rax], rcx
// asm:   0x5df5c02: lea rsi, [rip + 0x10378f7]
// asm:   0x5df5c09: mov rdi, rax
// asm:   0x5df5c0c: xor edx, edx
// asm:   0x5df5c0e: call 0x6e255c0  ; __cxa_throw()
// asm:   0x5df5c13: mov r14, rax
// asm:   0x5df5c16: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5df5c1b: mov rdi, r14
// asm:   0x5df5c1e: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5df5c23: mov rdi, rax
// asm:   0x5df5c26: call 0x2ab61e0  ; __clang_call_terminate()

System_Byte_array *
Utility_Algorithms_GZipAlgorithm__Compress
          (Utility_Algorithms_GZipAlgorithm_o *__this,System_Byte_array *data,int32_t level,MethodInfo *method
          )

{
  System_IO_Compression_GZipStream_c *pSVar1;
  Il2CppRuntimeInterfaceOffsetPair *pIVar2;
  System_IO_MemoryStream_c *pSVar3;
  System_IO_MemoryStream_o *pSVar4;
  System_IO_Compression_GZipStream_o *pSVar5;
  VirtualInvokeData *pVVar6;
  System_Byte_array *pSVar7;
  ulong uVar8;
  long lVar9;
  System_IO_MemoryStream_o *pSStack_50;
  System_IO_Compression_GZipStream_o *pSStack_48;
  undefined8 uStack_40;
  System_IO_Compression_GZipStream_o **ppSStack_38;
  undefined8 uStack_30;
  System_IO_MemoryStream_o **ppSStack_28;
  
  if (Il2CppMethodInitialized_0754831c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IO_Compression_GZipStream);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IDisposable);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IO_MemoryStream);
    Il2CppMethodInitialized_0754831c = '\x01';
  }
  pSStack_50 = (System_IO_MemoryStream_o *)0x0;
  pSStack_48 = (System_IO_Compression_GZipStream_o *)0x0;
  pSVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_IO_MemoryStream);
  System_IO_MemoryStream___ctor(pSVar4,(MethodInfo *)0x0);
  uStack_30 = 0;
  ppSStack_28 = &pSStack_50;
  pSStack_50 = pSVar4;
  pSVar5 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_IO_Compression_GZipStream);
  System_IO_Compression_GZipStream___ctor_628b830
            (pSVar5,(System_IO_Stream_o *)pSVar4,level,true,(MethodInfo *)0x0);
  uStack_40 = 0;
  ppSStack_38 = &pSStack_48;
  pSStack_48 = pSVar5;
  if ((data == (System_Byte_array *)0x0) || (pSVar5 == (System_IO_Compression_GZipStream_o *)0x0)) {
    ThrowNullReferenceException();
  }
  (*(pSVar5->klass->vtable)._36_Write.methodPtr)
            (pSVar5,data,0,(int32_t)data->max_length,(pSVar5->klass->vtable)._36_Write.method);
  pSVar5 = pSStack_48;
  if (pSStack_48 != (System_IO_Compression_GZipStream_o *)0x0) {
    pSVar1 = pSStack_48->klass;
    uVar8 = (ulong)(pSVar1->_2).interface_offsets_count;
    if (uVar8 != 0) {
      pIVar2 = (pSVar1->_1).interfaceOffsets;
      lVar9 = 0;
      do {
        if (*(System_IDisposable_c **)((long)&pIVar2->interfaceType + lVar9) == TypeInfo_System_IDisposable) {
          pVVar6 = &(pSVar1->vtable)._0_Equals + *(int *)((long)&pIVar2->offset + lVar9);
          goto label_05df59bd;
        }
        lVar9 = lVar9 + 0x10;
      } while (uVar8 * 0x10 != lVar9);
    }
    pVVar6 = GetInterfaceInvokeDataFromVTableSlowPath
                       ((Il2CppObject *)pSStack_48,(Il2CppClass *)TypeInfo_System_IDisposable,0);
label_05df59bd:
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
          goto label_05df5a5d;
        }
        lVar9 = lVar9 + 0x10;
      } while (uVar8 * 0x10 != lVar9);
    }
    pVVar6 = GetInterfaceInvokeDataFromVTableSlowPath
                       ((Il2CppObject *)pSStack_50,(Il2CppClass *)TypeInfo_System_IDisposable,0);
label_05df5a5d:
    (*pVVar6->methodPtr)((Il2CppObject *)pSVar4,pVVar6->method);
  }
  return pSVar7;
}


// Utility.Algorithms.GZipAlgorithm$$Decompress
// il2cpp: System_Byte_array* Utility_Algorithms_GZipAlgorithm__Decompress (Utility_Algorithms_GZipAlgorithm_o* __this, System_Byte_array* data, int32_t bufferSize, int64_t maxSize, const MethodInfo* method);
// 0x5df5c30
// eh: try 0x5df5ca4..0x5df6080 -> pad 0x5df6040 (+18 call sites) catch Il2CppExceptionWrapper, cleanup [managed catch: runtime default class]
// eh: try 0x5df608b..0x5df6095 -> pad 0x5df612b catch (...) [compiler noexcept guard]
// eh: try 0x5df60aa..0x5df60af -> pad 0x5df60b6 catch Il2CppExceptionWrapper, cleanup [managed catch: runtime default class]
// eh: try 0x5df60bc..0x5df60c6 -> pad 0x5df612b catch (...) [compiler noexcept guard]
// eh: try 0x5df60e7..0x5df611b -> pad 0x5df611b (+1 call sites) cleanup
// eh: try 0x5df611e..0x5df6123 -> pad 0x5df612b catch (...) [compiler noexcept guard]
// asm: 101 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5df5e5b: jmp 0x5df5ed6
// asm:   0x5df5e5d: xor r14d, r14d
// asm:   0x5df5e60: xor r15d, r15d
// asm:   0x5df5e63: mov rbx, qword ptr [rsp + 8]
// asm:   0x5df5e68: test rbx, rbx
// asm:   0x5df5e6b: je 0x5df5ed6
// asm:   0x5df5f46: mov rdi, rbx
// asm:   0x5df5f49: call 0x311e050  ; il2cpp_codegen_rgctx_method_init()
// asm:   0x5df5f4e: mov rax, qword ptr [rbx + 0x38]
// asm:   0x5df5f52: mov rdi, qword ptr [rax + 0x10]
// asm:   0x5df5f56: test byte ptr [rdi + 0x135], 1
// asm:   0x5df5f5d: jne 0x5df5f08
// asm:   0x5df5f5f: call 0x311dff0  ; il2cpp_codegen_class_init_checked()
// asm:   0x5df5f64: mov rdi, rax
// asm:   0x5df5f67: cmp dword ptr [rdi + 0xe4], 0
// asm:   0x5df5f6e: jne 0x5df5f11
// asm:   0x5df5f70: call 0x30d6240  ; il2cpp_codegen_runtime_class_init()
// asm:   0x5df5f75: mov rax, qword ptr [rbx + 0x38]
// asm:   0x5df5f79: mov rax, qword ptr [rax + 0x10]
// asm:   0x5df5f7d: test byte ptr [rax + 0x135], 1
// asm:   0x5df5f84: je 0x5df5f22
// asm:   0x5df5f86: jmp 0x5df5f2a
// asm:   0x5df601f: mov rdi, r14
// asm:   0x5df6022: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5df6027: mov rdi, r14
// asm:   0x5df602a: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5df6034: jmp 0x5df6042
// asm:   0x5df6036: jmp 0x5df6042
// asm:   0x5df6038: jmp 0x5df605e
// asm:   0x5df603a: jmp 0x5df605e
// asm:   0x5df603c: jmp 0x5df6042
// asm:   0x5df603e: jmp 0x5df6042
// asm:   0x5df6040: jmp 0x5df604a
// asm:   0x5df6042: mov rbx, rdx
// asm:   0x5df6045: mov r14, rax
// asm:   0x5df6048: jmp 0x5df6095
// asm:   0x5df604a: mov rbx, rdx
// asm:   0x5df604d: mov r14, rax
// asm:   0x5df6050: jmp 0x5df60c6
// asm:   0x5df6052: jmp 0x5df605e
// asm:   0x5df6054: jmp 0x5df605e
// asm:   0x5df6056: jmp 0x5df605e
// asm:   0x5df6058: jmp 0x5df605e
// asm:   0x5df605a: jmp 0x5df605e
// asm:   0x5df605c: jmp 0x5df605e
// asm:   0x5df605e: mov rbx, rdx
// asm:   0x5df6061: mov r14, rax
// asm:   0x5df6064: cmp ebx, 1
// asm:   0x5df6067: jne 0x5df608b
// asm:   0x5df6069: mov rdi, r14
// asm:   0x5df606c: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5df6071: mov r14, qword ptr [rax]
// asm:   0x5df6074: mov qword ptr [rsp + 0x28], r14
// asm:   0x5df6079: xor ebp, ebp
// asm:   0x5df607b: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5df6080: jmp 0x5df5da4
// asm:   0x5df6085: mov rbx, rdx
// asm:   0x5df6088: mov r14, rax
// asm:   0x5df608b: lea rdi, [rsp + 0x28]
// asm:   0x5df6090: call 0x2fdff40  ; il2cpp_runtime_helper_02fdff40()
// asm:   0x5df6095: cmp ebx, 1
// asm:   0x5df6098: jne 0x5df60bc
// asm:   0x5df609a: mov rdi, r14
// asm:   0x5df609d: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5df60a2: mov r14, qword ptr [rax]
// asm:   0x5df60a5: mov qword ptr [rsp + 0x38], r14
// asm:   0x5df60aa: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5df60af: xor ebp, ebp
// asm:   0x5df60b1: jmp 0x5df5e60
// asm:   0x5df60b6: mov rbx, rdx
// asm:   0x5df60b9: mov r14, rax
// asm:   0x5df60bc: lea rdi, [rsp + 0x38]
// asm:   0x5df60c1: call 0x2fdffd0  ; il2cpp_runtime_helper_02fdffd0()
// asm:   0x5df60c6: cmp ebx, 1
// asm:   0x5df60c9: jne 0x5df6123
// asm:   0x5df60cb: mov rdi, r14
// asm:   0x5df60ce: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5df60d3: mov rbx, rax
// asm:   0x5df60d6: lea rax, [rip + 0x17605eb]
// asm:   0x5df60dd: mov rdi, qword ptr [rax + 0x10]
// asm:   0x5df60e1: mov rax, qword ptr [rbx]
// asm:   0x5df60e4: mov rsi, qword ptr [rax]
// asm:   0x5df60e7: call 0x30d6910  ; il2cpp_runtime_helper_030d6910()
// asm:   0x5df60ec: test al, al
// asm:   0x5df60ee: je 0x5df60fa
// asm:   0x5df60f0: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5df60f5: jmp 0x5df5ee3
// asm:   0x5df60fa: mov edi, 8
// asm:   0x5df60ff: call 0x6e255b0  ; __cxa_allocate_exception()
// asm:   0x5df6104: mov rcx, qword ptr [rbx]
// asm:   0x5df6107: mov qword ptr [rax], rcx
// asm:   0x5df610a: lea rsi, [rip + 0x10373ef]
// asm:   0x5df6111: mov rdi, rax
// asm:   0x5df6114: xor edx, edx
// asm:   0x5df6116: call 0x6e255c0  ; __cxa_throw()
// asm:   0x5df611b: mov r14, rax
// asm:   0x5df611e: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5df6123: mov rdi, r14
// asm:   0x5df6126: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5df612b: mov rdi, rax
// asm:   0x5df612e: call 0x2ab61e0  ; __clang_call_terminate()

System_Byte_array *
Utility_Algorithms_GZipAlgorithm__Decompress
          (Utility_Algorithms_GZipAlgorithm_o *__this,System_Byte_array *data,int32_t bufferSize,
          int64_t maxSize,MethodInfo *method)

{
  System_IO_Compression_GZipStream_c *pSVar1;
  Il2CppRuntimeInterfaceOffsetPair *pIVar2;
  System_IO_MemoryStream_c *pSVar3;
  uint uVar4;
  System_IO_MemoryStream_o *pSVar5;
  System_IO_Compression_GZipStream_o *pSVar6;
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
  System_IO_Compression_GZipStream_o *pSStack_68;
  int64_t iStack_60;
  long alStack_58 [2];
  System_IO_Compression_GZipStream_o **ppSStack_48;
  undefined8 uStack_40;
  System_IO_MemoryStream_o **ppSStack_38;
  
  if (Il2CppMethodInitialized_0754831d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_byte_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IO_Compression_GZipStream);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IDisposable);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IO_MemoryStream);
    Il2CppMethodInitialized_0754831d = '\x01';
  }
  pSStack_70 = (System_IO_MemoryStream_o *)0x0;
  pSStack_68 = (System_IO_Compression_GZipStream_o *)0x0;
  pSVar5 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_IO_MemoryStream);
  System_IO_MemoryStream___ctor(pSVar5,(MethodInfo *)0x0);
  uStack_40 = 0;
  ppSStack_38 = &pSStack_70;
  pSStack_70 = pSVar5;
  pSVar5 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_IO_MemoryStream);
  System_IO_MemoryStream___ctor_5465640(pSVar5,data,(MethodInfo *)0x0);
  pSVar6 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_IO_Compression_GZipStream);
  System_IO_Compression_GZipStream___ctor(pSVar6,(System_IO_Stream_o *)pSVar5,0,(MethodInfo *)0x0);
  alStack_58[1] = 0;
  ppSStack_48 = &pSStack_68;
  pSStack_68 = pSVar6;
  pSVar7 = (System_Byte_array *)SZArrayNew(TypeInfo_byte_array,bufferSize);
  lVar11 = 0;
  while( true ) {
    if (pSStack_68 == (System_IO_Compression_GZipStream_o *)0x0) {
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
           il2cpp_codegen_get_runtime_metadata(&MethodInfo_Utility_Algorithms_GZipAlgorithm_Decompress);
      il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
    }
    if (pSStack_70 == (System_IO_MemoryStream_o *)0x0) {
      ThrowNullReferenceException();
    }
    (*(pSStack_70->klass->vtable)._36_Write.methodPtr)
              (pSStack_70,pSVar7,0,uVar4,(pSStack_70->klass->vtable)._36_Write.method);
  }
  if (pSStack_68 != (System_IO_Compression_GZipStream_o *)0x0) {
    pSVar1 = pSStack_68->klass;
    uVar10 = (ulong)(pSVar1->_2).interface_offsets_count;
    if (uVar10 != 0) {
      pIVar2 = (pSVar1->_1).interfaceOffsets;
      lVar11 = 0;
      do {
        if (*(System_IDisposable_c **)((long)&pIVar2->interfaceType + lVar11) == TypeInfo_System_IDisposable)
        {
          pVVar8 = &(pSVar1->vtable)._0_Equals + *(int *)((long)&pIVar2->offset + lVar11);
          goto label_05df5e0d;
        }
        lVar11 = lVar11 + 0x10;
      } while (uVar10 * 0x10 != lVar11);
    }
    pVVar8 = GetInterfaceInvokeDataFromVTableSlowPath
                       ((Il2CppObject *)pSStack_68,(Il2CppClass *)TypeInfo_System_IDisposable,0);
label_05df5e0d:
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
          goto label_05df5ecd;
        }
        lVar11 = lVar11 + 0x10;
      } while (uVar10 * 0x10 != lVar11);
    }
    pVVar8 = GetInterfaceInvokeDataFromVTableSlowPath
                       ((Il2CppObject *)pSStack_70,(Il2CppClass *)TypeInfo_System_IDisposable,0);
label_05df5ecd:
    (*pVVar8->methodPtr)((Il2CppObject *)pSVar5,pVVar8->method);
  }
  return pSVar7;
}


// Utility.Algorithms.GZipAlgorithm$$.ctor
// il2cpp: void Utility_Algorithms_GZipAlgorithm___ctor (Utility_Algorithms_GZipAlgorithm_o* __this, const MethodInfo* method);
// 0x5dea950

void Utility_Algorithms_GZipAlgorithm___ctor(Utility_Algorithms_GZipAlgorithm_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


