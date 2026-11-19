// Type: Utility.Algorithms.DeflateAlgorithm
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/Utility.Algorithms/DeflateAlgorithm.cs
// Prior real C# source: none
// --------------------------------

// Utility.Algorithms.DeflateAlgorithm$$Compress
// il2cpp: System_Byte_array* Utility_Algorithms_DeflateAlgorithm__Compress (Utility_Algorithms_DeflateAlgorithm_o* __this, System_Byte_array* data, int32_t level, const MethodInfo* method);
// 0x5df4f80
// fidelity: the machine code has facts this C leaves out:
//   call to il2cpp_codegen_get_runtime_metadata
//   call to il2cpp_codegen_class_init_checked
// eh: try 0x5df4fe0..0x5df5273 -> pad 0x5df528c (+10 call sites) catch Il2CppExceptionWrapper, cleanup [managed catch: runtime default class]
// eh: try 0x5df527e..0x5df5288 -> pad 0x5df5343 catch (...) [compiler noexcept guard]
// eh: try 0x5df52b1..0x5df52b6 -> pad 0x5df52ce catch Il2CppExceptionWrapper, cleanup [managed catch: runtime default class]
// eh: try 0x5df52d4..0x5df52de -> pad 0x5df5343 catch (...) [compiler noexcept guard]
// eh: try 0x5df52ff..0x5df5333 -> pad 0x5df5333 (+1 call sites) cleanup
// eh: try 0x5df5336..0x5df533b -> pad 0x5df5343 catch (...) [compiler noexcept guard]
// asm: 89 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5df51f3: mov rdi, rbx
// asm:   0x5df51f6: call 0x311e050  ; il2cpp_codegen_rgctx_method_init()
// asm:   0x5df51fb: mov rax, qword ptr [rbx + 0x38]
// asm:   0x5df51ff: mov rdi, qword ptr [rax + 0x10]
// asm:   0x5df5203: test byte ptr [rdi + 0x135], 1
// asm:   0x5df520a: jne 0x5df51b9
// asm:   0x5df520c: call 0x311dff0  ; il2cpp_codegen_class_init_checked()
// asm:   0x5df5211: mov rdi, rax
// asm:   0x5df5214: cmp dword ptr [rdi + 0xe4], 0
// asm:   0x5df521b: jne 0x5df51c2
// asm:   0x5df521d: call 0x30d6240  ; il2cpp_codegen_runtime_class_init()
// asm:   0x5df5222: mov rax, qword ptr [rbx + 0x38]
// asm:   0x5df5226: mov rax, qword ptr [rax + 0x10]
// asm:   0x5df522a: test byte ptr [rax + 0x135], 1
// asm:   0x5df5231: je 0x5df51d3
// asm:   0x5df5233: jmp 0x5df51db
// asm:   0x5df523a: mov rdi, r14
// asm:   0x5df523d: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5df5242: mov rdi, r14
// asm:   0x5df5245: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5df524f: jmp 0x5df5296
// asm:   0x5df5251: jmp 0x5df5296
// asm:   0x5df5253: mov rbx, rdx
// asm:   0x5df5256: mov r14, rax
// asm:   0x5df5259: cmp ebx, 1
// asm:   0x5df525c: jne 0x5df527e
// asm:   0x5df525e: mov rdi, r14
// asm:   0x5df5261: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5df5266: mov r14, qword ptr [rax]
// asm:   0x5df5269: mov qword ptr [rsp + 0x18], r14
// asm:   0x5df526e: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5df5273: jmp 0x5df507b
// asm:   0x5df5278: mov rbx, rdx
// asm:   0x5df527b: mov r14, rax
// asm:   0x5df527e: lea rdi, [rsp + 0x18]
// asm:   0x5df5283: call 0x2fdfbe0  ; il2cpp_runtime_helper_02fdfbe0()
// asm:   0x5df5288: jmp 0x5df529c
// asm:   0x5df528a: jmp 0x5df5296
// asm:   0x5df528c: jmp 0x5df528e
// asm:   0x5df528e: mov rbx, rdx
// asm:   0x5df5291: mov r14, rax
// asm:   0x5df5294: jmp 0x5df52de
// asm:   0x5df5296: mov rbx, rdx
// asm:   0x5df5299: mov r14, rax
// asm:   0x5df529c: cmp ebx, 1
// asm:   0x5df529f: jne 0x5df52d4
// asm:   0x5df52a1: mov rdi, r14
// asm:   0x5df52a4: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5df52a9: mov r14, qword ptr [rax]
// asm:   0x5df52ac: mov qword ptr [rsp + 0x28], r14
// asm:   0x5df52b1: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5df52b6: mov r15b, 1
// asm:   0x5df52b9: xor ebx, ebx
// asm:   0x5df52bb: mov rbp, qword ptr [rsp + 8]
// asm:   0x5df52c0: test rbp, rbp
// asm:   0x5df52c3: jne 0x5df5120
// asm:   0x5df52c9: jmp 0x5df5186
// asm:   0x5df52ce: mov rbx, rdx
// asm:   0x5df52d1: mov r14, rax
// asm:   0x5df52d4: lea rdi, [rsp + 0x28]
// asm:   0x5df52d9: call 0x2fdfc70  ; il2cpp_runtime_helper_02fdfc70()
// asm:   0x5df52de: cmp ebx, 1
// asm:   0x5df52e1: jne 0x5df533b
// asm:   0x5df52e3: mov rdi, r14
// asm:   0x5df52e6: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5df52eb: mov rbx, rax
// asm:   0x5df52ee: lea rax, [rip + 0x17613d3]
// asm:   0x5df52f5: mov rdi, qword ptr [rax + 0x10]
// asm:   0x5df52f9: mov rax, qword ptr [rbx]
// asm:   0x5df52fc: mov rsi, qword ptr [rax]
// asm:   0x5df52ff: call 0x30d6910  ; il2cpp_runtime_helper_030d6910()
// asm:   0x5df5304: test al, al
// asm:   0x5df5306: je 0x5df5312
// asm:   0x5df5308: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5df530d: jmp 0x5df5194
// asm:   0x5df5312: mov edi, 8
// asm:   0x5df5317: call 0x6e255b0  ; __cxa_allocate_exception()
// asm:   0x5df531c: mov rcx, qword ptr [rbx]
// asm:   0x5df531f: mov qword ptr [rax], rcx
// asm:   0x5df5322: lea rsi, [rip + 0x10381d7]
// asm:   0x5df5329: mov rdi, rax
// asm:   0x5df532c: xor edx, edx
// asm:   0x5df532e: call 0x6e255c0  ; __cxa_throw()
// asm:   0x5df5333: mov r14, rax
// asm:   0x5df5336: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5df533b: mov rdi, r14
// asm:   0x5df533e: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5df5343: mov rdi, rax
// asm:   0x5df5346: call 0x2ab61e0  ; __clang_call_terminate()

System_Byte_array *
Utility_Algorithms_DeflateAlgorithm__Compress
          (Utility_Algorithms_DeflateAlgorithm_o *__this,System_Byte_array *data,int32_t level,
          MethodInfo *method)

{
  System_IO_Compression_DeflateStream_c *pSVar1;
  Il2CppRuntimeInterfaceOffsetPair *pIVar2;
  System_IO_MemoryStream_c *pSVar3;
  System_IO_MemoryStream_o *pSVar4;
  System_IO_Compression_DeflateStream_o *pSVar5;
  VirtualInvokeData *pVVar6;
  System_Byte_array *pSVar7;
  ulong uVar8;
  long lVar9;
  System_IO_MemoryStream_o *pSStack_50;
  System_IO_Compression_DeflateStream_o *pSStack_48;
  undefined8 uStack_40;
  System_IO_Compression_DeflateStream_o **ppSStack_38;
  undefined8 uStack_30;
  System_IO_MemoryStream_o **ppSStack_28;
  
  if (Il2CppMethodInitialized_0754831a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IO_Compression_DeflateStream);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IDisposable);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IO_MemoryStream);
    Il2CppMethodInitialized_0754831a = '\x01';
  }
  pSStack_50 = (System_IO_MemoryStream_o *)0x0;
  pSStack_48 = (System_IO_Compression_DeflateStream_o *)0x0;
  pSVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_IO_MemoryStream);
  System_IO_MemoryStream___ctor(pSVar4,(MethodInfo *)0x0);
  uStack_30 = 0;
  ppSStack_28 = &pSStack_50;
  pSStack_50 = pSVar4;
  pSVar5 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_IO_Compression_DeflateStream);
  System_IO_Compression_DeflateStream___ctor_628c820
            (pSVar5,(System_IO_Stream_o *)pSVar4,level,true,(MethodInfo *)0x0);
  uStack_40 = 0;
  ppSStack_38 = &pSStack_48;
  pSStack_48 = pSVar5;
  if ((data == (System_Byte_array *)0x0) || (pSVar5 == (System_IO_Compression_DeflateStream_o *)0x0)) {
    ThrowNullReferenceException();
  }
  (*(pSVar5->klass->vtable)._36_Write.methodPtr)
            (pSVar5,data,0,(int32_t)data->max_length,(pSVar5->klass->vtable)._36_Write.method);
  pSVar5 = pSStack_48;
  if (pSStack_48 != (System_IO_Compression_DeflateStream_o *)0x0) {
    pSVar1 = pSStack_48->klass;
    uVar8 = (ulong)(pSVar1->_2).interface_offsets_count;
    if (uVar8 != 0) {
      pIVar2 = (pSVar1->_1).interfaceOffsets;
      lVar9 = 0;
      do {
        if (*(System_IDisposable_c **)((long)&pIVar2->interfaceType + lVar9) == TypeInfo_System_IDisposable) {
          pVVar6 = &(pSVar1->vtable)._0_Equals + *(int *)((long)&pIVar2->offset + lVar9);
          goto label_05df50dd;
        }
        lVar9 = lVar9 + 0x10;
      } while (uVar8 * 0x10 != lVar9);
    }
    pVVar6 = GetInterfaceInvokeDataFromVTableSlowPath
                       ((Il2CppObject *)pSStack_48,(Il2CppClass *)TypeInfo_System_IDisposable,0);
label_05df50dd:
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
          goto label_05df517d;
        }
        lVar9 = lVar9 + 0x10;
      } while (uVar8 * 0x10 != lVar9);
    }
    pVVar6 = GetInterfaceInvokeDataFromVTableSlowPath
                       ((Il2CppObject *)pSStack_50,(Il2CppClass *)TypeInfo_System_IDisposable,0);
label_05df517d:
    (*pVVar6->methodPtr)((Il2CppObject *)pSVar4,pVVar6->method);
  }
  return pSVar7;
}


// Utility.Algorithms.DeflateAlgorithm$$Decompress
// il2cpp: System_Byte_array* Utility_Algorithms_DeflateAlgorithm__Decompress (Utility_Algorithms_DeflateAlgorithm_o* __this, System_Byte_array* data, int32_t bufferSize, int64_t maxSize, const MethodInfo* method);
// 0x5df5350
// fidelity: the machine code has facts this C leaves out:
//   call to il2cpp_codegen_get_runtime_metadata
//   call to il2cpp_codegen_class_init_checked
// eh: try 0x5df53c4..0x5df57a0 -> pad 0x5df5760 (+18 call sites) catch Il2CppExceptionWrapper, cleanup [managed catch: runtime default class]
// eh: try 0x5df57ab..0x5df57b5 -> pad 0x5df584b catch (...) [compiler noexcept guard]
// eh: try 0x5df57ca..0x5df57cf -> pad 0x5df57d6 catch Il2CppExceptionWrapper, cleanup [managed catch: runtime default class]
// eh: try 0x5df57dc..0x5df57e6 -> pad 0x5df584b catch (...) [compiler noexcept guard]
// eh: try 0x5df5807..0x5df583b -> pad 0x5df583b (+1 call sites) cleanup
// eh: try 0x5df583e..0x5df5843 -> pad 0x5df584b catch (...) [compiler noexcept guard]
// asm: 101 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5df557b: jmp 0x5df55f6
// asm:   0x5df557d: xor r14d, r14d
// asm:   0x5df5580: xor r15d, r15d
// asm:   0x5df5583: mov rbx, qword ptr [rsp + 8]
// asm:   0x5df5588: test rbx, rbx
// asm:   0x5df558b: je 0x5df55f6
// asm:   0x5df5666: mov rdi, rbx
// asm:   0x5df5669: call 0x311e050  ; il2cpp_codegen_rgctx_method_init()
// asm:   0x5df566e: mov rax, qword ptr [rbx + 0x38]
// asm:   0x5df5672: mov rdi, qword ptr [rax + 0x10]
// asm:   0x5df5676: test byte ptr [rdi + 0x135], 1
// asm:   0x5df567d: jne 0x5df5628
// asm:   0x5df567f: call 0x311dff0  ; il2cpp_codegen_class_init_checked()
// asm:   0x5df5684: mov rdi, rax
// asm:   0x5df5687: cmp dword ptr [rdi + 0xe4], 0
// asm:   0x5df568e: jne 0x5df5631
// asm:   0x5df5690: call 0x30d6240  ; il2cpp_codegen_runtime_class_init()
// asm:   0x5df5695: mov rax, qword ptr [rbx + 0x38]
// asm:   0x5df5699: mov rax, qword ptr [rax + 0x10]
// asm:   0x5df569d: test byte ptr [rax + 0x135], 1
// asm:   0x5df56a4: je 0x5df5642
// asm:   0x5df56a6: jmp 0x5df564a
// asm:   0x5df573f: mov rdi, r14
// asm:   0x5df5742: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5df5747: mov rdi, r14
// asm:   0x5df574a: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5df5754: jmp 0x5df5762
// asm:   0x5df5756: jmp 0x5df5762
// asm:   0x5df5758: jmp 0x5df577e
// asm:   0x5df575a: jmp 0x5df577e
// asm:   0x5df575c: jmp 0x5df5762
// asm:   0x5df575e: jmp 0x5df5762
// asm:   0x5df5760: jmp 0x5df576a
// asm:   0x5df5762: mov rbx, rdx
// asm:   0x5df5765: mov r14, rax
// asm:   0x5df5768: jmp 0x5df57b5
// asm:   0x5df576a: mov rbx, rdx
// asm:   0x5df576d: mov r14, rax
// asm:   0x5df5770: jmp 0x5df57e6
// asm:   0x5df5772: jmp 0x5df577e
// asm:   0x5df5774: jmp 0x5df577e
// asm:   0x5df5776: jmp 0x5df577e
// asm:   0x5df5778: jmp 0x5df577e
// asm:   0x5df577a: jmp 0x5df577e
// asm:   0x5df577c: jmp 0x5df577e
// asm:   0x5df577e: mov rbx, rdx
// asm:   0x5df5781: mov r14, rax
// asm:   0x5df5784: cmp ebx, 1
// asm:   0x5df5787: jne 0x5df57ab
// asm:   0x5df5789: mov rdi, r14
// asm:   0x5df578c: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5df5791: mov r14, qword ptr [rax]
// asm:   0x5df5794: mov qword ptr [rsp + 0x28], r14
// asm:   0x5df5799: xor ebp, ebp
// asm:   0x5df579b: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5df57a0: jmp 0x5df54c4
// asm:   0x5df57a5: mov rbx, rdx
// asm:   0x5df57a8: mov r14, rax
// asm:   0x5df57ab: lea rdi, [rsp + 0x28]
// asm:   0x5df57b0: call 0x2fdfd00  ; il2cpp_runtime_helper_02fdfd00()
// asm:   0x5df57b5: cmp ebx, 1
// asm:   0x5df57b8: jne 0x5df57dc
// asm:   0x5df57ba: mov rdi, r14
// asm:   0x5df57bd: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5df57c2: mov r14, qword ptr [rax]
// asm:   0x5df57c5: mov qword ptr [rsp + 0x38], r14
// asm:   0x5df57ca: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5df57cf: xor ebp, ebp
// asm:   0x5df57d1: jmp 0x5df5580
// asm:   0x5df57d6: mov rbx, rdx
// asm:   0x5df57d9: mov r14, rax
// asm:   0x5df57dc: lea rdi, [rsp + 0x38]
// asm:   0x5df57e1: call 0x2fdfd90  ; il2cpp_runtime_helper_02fdfd90()
// asm:   0x5df57e6: cmp ebx, 1
// asm:   0x5df57e9: jne 0x5df5843
// asm:   0x5df57eb: mov rdi, r14
// asm:   0x5df57ee: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5df57f3: mov rbx, rax
// asm:   0x5df57f6: lea rax, [rip + 0x1760ecb]
// asm:   0x5df57fd: mov rdi, qword ptr [rax + 0x10]
// asm:   0x5df5801: mov rax, qword ptr [rbx]
// asm:   0x5df5804: mov rsi, qword ptr [rax]
// asm:   0x5df5807: call 0x30d6910  ; il2cpp_runtime_helper_030d6910()
// asm:   0x5df580c: test al, al
// asm:   0x5df580e: je 0x5df581a
// asm:   0x5df5810: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5df5815: jmp 0x5df5603
// asm:   0x5df581a: mov edi, 8
// asm:   0x5df581f: call 0x6e255b0  ; __cxa_allocate_exception()
// asm:   0x5df5824: mov rcx, qword ptr [rbx]
// asm:   0x5df5827: mov qword ptr [rax], rcx
// asm:   0x5df582a: lea rsi, [rip + 0x1037ccf]
// asm:   0x5df5831: mov rdi, rax
// asm:   0x5df5834: xor edx, edx
// asm:   0x5df5836: call 0x6e255c0  ; __cxa_throw()
// asm:   0x5df583b: mov r14, rax
// asm:   0x5df583e: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5df5843: mov rdi, r14
// asm:   0x5df5846: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5df584b: mov rdi, rax
// asm:   0x5df584e: call 0x2ab61e0  ; __clang_call_terminate()

System_Byte_array *
Utility_Algorithms_DeflateAlgorithm__Decompress
          (Utility_Algorithms_DeflateAlgorithm_o *__this,System_Byte_array *data,int32_t bufferSize,
          int64_t maxSize,MethodInfo *method)

{
  System_IO_Compression_DeflateStream_c *pSVar1;
  Il2CppRuntimeInterfaceOffsetPair *pIVar2;
  System_IO_MemoryStream_c *pSVar3;
  uint uVar4;
  System_IO_MemoryStream_o *pSVar5;
  System_IO_Compression_DeflateStream_o *pSVar6;
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
  System_IO_Compression_DeflateStream_o *pSStack_68;
  int64_t iStack_60;
  long alStack_58 [2];
  System_IO_Compression_DeflateStream_o **ppSStack_48;
  undefined8 uStack_40;
  System_IO_MemoryStream_o **ppSStack_38;
  
  if (Il2CppMethodInitialized_0754831b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_byte_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IO_Compression_DeflateStream);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IDisposable);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IO_MemoryStream);
    Il2CppMethodInitialized_0754831b = '\x01';
  }
  pSStack_70 = (System_IO_MemoryStream_o *)0x0;
  pSStack_68 = (System_IO_Compression_DeflateStream_o *)0x0;
  pSVar5 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_IO_MemoryStream);
  System_IO_MemoryStream___ctor(pSVar5,(MethodInfo *)0x0);
  uStack_40 = 0;
  ppSStack_38 = &pSStack_70;
  pSStack_70 = pSVar5;
  pSVar5 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_IO_MemoryStream);
  System_IO_MemoryStream___ctor_5465640(pSVar5,data,(MethodInfo *)0x0);
  pSVar6 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_IO_Compression_DeflateStream);
  System_IO_Compression_DeflateStream___ctor(pSVar6,(System_IO_Stream_o *)pSVar5,0,(MethodInfo *)0x0);
  alStack_58[1] = 0;
  ppSStack_48 = &pSStack_68;
  pSStack_68 = pSVar6;
  pSVar7 = (System_Byte_array *)SZArrayNew(TypeInfo_byte_array,bufferSize);
  lVar11 = 0;
  while( true ) {
    if (pSStack_68 == (System_IO_Compression_DeflateStream_o *)0x0) {
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
           il2cpp_codegen_get_runtime_metadata(&MethodInfo_Utility_Algorithms_DeflateAlgorithm_Decompress);
      il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
    }
    if (pSStack_70 == (System_IO_MemoryStream_o *)0x0) {
      ThrowNullReferenceException();
    }
    (*(pSStack_70->klass->vtable)._36_Write.methodPtr)
              (pSStack_70,pSVar7,0,uVar4,(pSStack_70->klass->vtable)._36_Write.method);
  }
  if (pSStack_68 != (System_IO_Compression_DeflateStream_o *)0x0) {
    pSVar1 = pSStack_68->klass;
    uVar10 = (ulong)(pSVar1->_2).interface_offsets_count;
    if (uVar10 != 0) {
      pIVar2 = (pSVar1->_1).interfaceOffsets;
      lVar11 = 0;
      do {
        if (*(System_IDisposable_c **)((long)&pIVar2->interfaceType + lVar11) == TypeInfo_System_IDisposable)
        {
          pVVar8 = &(pSVar1->vtable)._0_Equals + *(int *)((long)&pIVar2->offset + lVar11);
          goto label_05df552d;
        }
        lVar11 = lVar11 + 0x10;
      } while (uVar10 * 0x10 != lVar11);
    }
    pVVar8 = GetInterfaceInvokeDataFromVTableSlowPath
                       ((Il2CppObject *)pSStack_68,(Il2CppClass *)TypeInfo_System_IDisposable,0);
label_05df552d:
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
          goto label_05df55ed;
        }
        lVar11 = lVar11 + 0x10;
      } while (uVar10 * 0x10 != lVar11);
    }
    pVVar8 = GetInterfaceInvokeDataFromVTableSlowPath
                       ((Il2CppObject *)pSStack_70,(Il2CppClass *)TypeInfo_System_IDisposable,0);
label_05df55ed:
    (*pVVar8->methodPtr)((Il2CppObject *)pSVar5,pVVar8->method);
  }
  return pSVar7;
}


// Utility.Algorithms.DeflateAlgorithm$$.ctor
// il2cpp: void Utility_Algorithms_DeflateAlgorithm___ctor (Utility_Algorithms_DeflateAlgorithm_o* __this, const MethodInfo* method);
// 0x5dea960

void Utility_Algorithms_DeflateAlgorithm___ctor
               (Utility_Algorithms_DeflateAlgorithm_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


