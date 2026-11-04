// Type: Utility.Algorithms.GZipAlgorithm
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Utility.Algorithms/GZipAlgorithm.cs
// Prior real C# source: none
// --------------------------------

// Utility.Algorithms.GZipAlgorithm$$Compress
// il2cpp: System_Byte_array* Utility_Algorithms_GZipAlgorithm__Compress (Utility_Algorithms_GZipAlgorithm_o* __this, System_Byte_array* data, int32_t level, const MethodInfo* method);
// 0x182339b30
// eh: try 0x182339b86..0x182339bb3 -> pad 0x183340430 catch Il2CppExceptionWrapper [managed catch: runtime default class]
// eh: try 0x182339bb3..0x182339c62 -> pad 0x183340400 (+2 call sites) catch Il2CppExceptionWrapper
// eh: try 0x182339c62..0x182339c7b -> pad 0x183340430 catch Il2CppExceptionWrapper [managed catch: runtime default class]
// eh: try 0x182339c90..0x182339cb4 -> pad 0x183340400 catch Il2CppExceptionWrapper
// eh: try 0x182339cb4..0x182339cca -> pad 0x183340430 catch Il2CppExceptionWrapper [managed catch: runtime default class]
// eh: try 0x182339cec..0x182339d03 -> pad 0x183340400 (+2 call sites) catch Il2CppExceptionWrapper
// eh: try 0x182339d03..0x182339d0a -> pad 0x183340430 catch Il2CppExceptionWrapper [managed catch: runtime default class]
// asm: 72 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x182339c7a: nop 
// asm:   0x182339c7d: mov r8, qword ptr [rsp + 0x38]
// asm:   0x182339c82: test r8, r8
// asm:   0x182339c85: je 0x182339c95
// asm:   0x182339c87: xor ecx, ecx
// asm:   0x182339c89: mov rdx, qword ptr [rip + 0x1d5f670]  ; TypeInfo_System_IDisposable
// asm:   0x182339c90: call 0x180014840  ; InterfaceInvoker0_Invoke()
// asm:   0x182339c95: mov rcx, qword ptr [rsp + 0x60]
// asm:   0x182339c9a: test rcx, rcx
// asm:   0x182339c9d: jne 0x182339cfd
// asm:   0x182339c9f: jmp 0x182339c41
// asm:   0x182339ca1: mov r8, qword ptr [rsp + 0x30]
// asm:   0x182339ca6: test r8, r8
// asm:   0x182339ca9: je 0x182339cb9
// asm:   0x182339cab: xor ecx, ecx
// asm:   0x182339cad: mov rdx, qword ptr [rip + 0x1d5f64c]  ; TypeInfo_System_IDisposable
// asm:   0x182339cb4: call 0x180014840  ; InterfaceInvoker0_Invoke()
// asm:   0x182339cb9: mov rcx, qword ptr [rsp + 0x70]
// asm:   0x182339cbe: test rcx, rcx
// asm:   0x182339cc1: jne 0x182339d03
// asm:   0x182339cc3: lea rcx, [rip + 0x1d9f09e]  ; MethodInfo_System_Array_Empty_byte
// asm:   0x182339cca: call 0x180416ea0  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x182339ccf: mov rcx, rax
// asm:   0x182339cd2: call 0x18001b1e0  ; il2cpp_runtime_helper_18001b1e0()
// asm:   0x182339cd7: mov rbx, rax
// asm:   0x182339cfd: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x182339d03: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x18333af70: mov qword ptr [rsp + 0x10], rdx
// asm:   0x18333af75: push rbp
// asm:   0x18333af76: sub rsp, 0x30
// asm:   0x18333af7a: mov rbp, rdx
// asm:   0x18333af7d: mov rax, qword ptr [rbp + 0x48]
// asm:   0x18333af81: mov rcx, qword ptr [rax]
// asm:   0x18333af84: mov qword ptr [rbp + 0x60], rcx
// asm:   0x18333af88: movabs rax, 0
// asm:   0x18333af92: add rsp, 0x30
// asm:   0x18333af96: pop rbp
// asm:   0x18333af97: ret 
// asm:   0x183340400: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183340405: push rbp
// asm:   0x183340406: sub rsp, 0x30
// asm:   0x18334040a: mov rbp, rdx
// asm:   0x18334040d: mov rax, qword ptr [rbp + 0x50]
// asm:   0x183340411: mov rcx, qword ptr [rax]
// asm:   0x183340414: mov qword ptr [rbp + 0x70], rcx
// asm:   0x183340418: movabs rax, 0
// asm:   0x183340422: add rsp, 0x30
// asm:   0x183340426: pop rbp
// asm:   0x183340427: ret 
// asm:   0x183340430: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183340435: push rbx
// asm:   0x183340436: push rbp
// asm:   0x183340437: sub rsp, 0x38
// asm:   0x18334043b: mov rbp, rdx
// asm:   0x18334043e: mov rbx, qword ptr [rbp + 0x58]
// asm:   0x183340442: mov rdx, qword ptr [rbx]
// asm:   0x183340445: mov rdx, qword ptr [rdx]
// asm:   0x183340448: mov rcx, qword ptr [rip + 0x1014981]
// asm:   0x18334044f: call 0x180416950  ; il2cpp_codegen_class_is_assignable_from()
// asm:   0x183340454: test al, al
// asm:   0x183340456: je 0x183340464
// asm:   0x183340458: movabs rax, 0
// asm:   0x183340462: jmp 0x18334047c
// asm:   0x183340464: mov rax, qword ptr [rbx]
// asm:   0x183340467: mov qword ptr [rbp + 0x40], rax
// asm:   0x18334046b: lea rdx, [rip + 0xc9bb16]
// asm:   0x183340472: lea rcx, [rbp + 0x40]
// asm:   0x183340476: call 0x1804ef7d0  ; _CxxThrowException()
// asm:   0x18334047c: add rsp, 0x38
// asm:   0x183340480: pop rbp
// asm:   0x183340481: pop rbx
// asm:   0x183340482: ret 

System_Byte_array *
Utility_Algorithms_GZipAlgorithm__Compress
          (Utility_Algorithms_GZipAlgorithm_o *__this,System_Byte_array *data,int32_t level,MethodInfo *method
          )

{
  System_IO_MemoryStream_o *__this_00;
  System_IO_Compression_GZipStream_o *__this_01;
  System_Byte_array *pSVar1;
  System_IO_MemoryStream_o *local_78;
  System_IO_Compression_GZipStream_o *local_70 [5];
  undefined8 local_48;
  System_IO_Compression_GZipStream_o **local_40;
  undefined8 local_38;
  System_IO_MemoryStream_o **local_30;
  
  if (Il2CppMethodInitialized_18434786c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IO_Compression_GZipStream);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IDisposable);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IO_MemoryStream);
    Il2CppMethodInitialized_18434786c = '\x01';
  }
  local_78 = (System_IO_MemoryStream_o *)0x0;
  local_70[0] = (System_IO_Compression_GZipStream_o *)0x0;
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_IO_MemoryStream);
  System_IO_MemoryStream___ctor(__this_00,(MethodInfo *)0x0);
  local_38 = 0;
  local_30 = &local_78;
  local_78 = __this_00;
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_IO_Compression_GZipStream);
  System_IO_Compression_GZipStream___ctor_28fece0
            (__this_01,(System_IO_Stream_o *)__this_00,level,true,(MethodInfo *)0x0);
  local_48 = 0;
  local_40 = local_70;
  local_70[0] = __this_01;
  if (data == (System_Byte_array *)0x0) {
    ThrowNullReferenceException();
  }
  if (__this_01 == (System_IO_Compression_GZipStream_o *)0x0) {
    ThrowNullReferenceException();
  }
  (*(__this_01->klass->vtable)._35_Write.methodPtr)
            (__this_01,data,0,(int32_t)data->max_length,(__this_01->klass->vtable)._35_Write.method);
  if (local_70[0] != (System_IO_Compression_GZipStream_o *)0x0) {
    InterfaceInvoker0_Invoke(0,(Il2CppClass *)TypeInfo_System_IDisposable,(Il2CppObject *)local_70[0]);
  }
  if (local_78 != (System_IO_MemoryStream_o *)0x0) {
    pSVar1 = (*(local_78->klass->vtable)._41_ToArray.methodPtr)
                       (local_78,(local_78->klass->vtable)._41_ToArray.method);
    if (local_78 != (System_IO_MemoryStream_o *)0x0) {
      InterfaceInvoker0_Invoke(0,(Il2CppClass *)TypeInfo_System_IDisposable,(Il2CppObject *)local_78);
    }
    return pSVar1;
  }
  ThrowNullReferenceException();
}


// Utility.Algorithms.GZipAlgorithm$$Decompress
// il2cpp: System_Byte_array* Utility_Algorithms_GZipAlgorithm__Decompress (Utility_Algorithms_GZipAlgorithm_o* __this, System_Byte_array* data, int32_t bufferSize, int64_t maxSize, const MethodInfo* method);
// 0x182339d10
// eh: try 0x182339d79..0x182339da6 -> pad 0x183340490 catch Il2CppExceptionWrapper [managed catch: runtime default class]
// eh: try 0x182339da6..0x182339edd -> pad 0x1833286e0 (+2 call sites) catch Il2CppExceptionWrapper
// eh: try 0x182339edd..0x182339f28 -> pad 0x183340490 (+1 call sites) catch Il2CppExceptionWrapper [managed catch: runtime default class]
// eh: try 0x182339f4e..0x182339ff3 -> pad 0x1833383a0 (+1 call sites) catch Il2CppExceptionWrapper
// eh: try 0x182339ff3..0x182339ffa -> pad 0x183340490 catch Il2CppExceptionWrapper [managed catch: runtime default class]
// asm: 75 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x182339e0c: nop dword ptr [rax]
// asm:   0x182339e8d: mov r8, qword ptr [rsp + 0x58]
// asm:   0x182339e92: cmp qword ptr [r8], 0
// asm:   0x182339e96: je 0x182339ea9
// asm:   0x182339e98: xor ecx, ecx
// asm:   0x182339e9a: mov r8, qword ptr [r8]
// asm:   0x182339e9d: mov rdx, qword ptr [rip + 0x1d5f45c]  ; TypeInfo_System_IDisposable
// asm:   0x182339ea4: call 0x180014840  ; InterfaceInvoker0_Invoke()
// asm:   0x182339ea9: mov rcx, qword ptr [rsp + 0x50]
// asm:   0x182339eae: test rcx, rcx
// asm:   0x182339eb1: jne 0x182339fe8
// asm:   0x182339eb7: mov rbx, qword ptr [rsp + 0x48]
// asm:   0x182339ef4: nop 
// asm:   0x182339ef7: mov r8, qword ptr [rsp + 0x48]
// asm:   0x182339efc: cmp qword ptr [r8], 0
// asm:   0x182339f00: je 0x182339f13
// asm:   0x182339f02: xor ecx, ecx
// asm:   0x182339f04: mov r8, qword ptr [r8]
// asm:   0x182339f07: mov rdx, qword ptr [rip + 0x1d5f3f2]  ; TypeInfo_System_IDisposable
// asm:   0x182339f0e: call 0x180014840  ; InterfaceInvoker0_Invoke()
// asm:   0x182339f13: mov rcx, qword ptr [rsp + 0x40]
// asm:   0x182339f18: test rcx, rcx
// asm:   0x182339f1b: jne 0x182339ff3
// asm:   0x182339f21: lea rcx, [rip + 0x1d9ee40]  ; MethodInfo_System_Array_Empty_byte
// asm:   0x182339f28: call 0x180416ea0  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x182339f2d: mov rcx, rax
// asm:   0x182339f30: call 0x18001b1e0  ; il2cpp_runtime_helper_18001b1e0()
// asm:   0x182339f35: mov rdi, rax
// asm:   0x182339fe8: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x182339ff3: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x1833286e0: mov qword ptr [rsp + 0x10], rdx
// asm:   0x1833286e5: push rbp
// asm:   0x1833286e6: sub rsp, 0x30
// asm:   0x1833286ea: mov rbp, rdx
// asm:   0x1833286ed: mov rax, qword ptr [rbp + 0x80]
// asm:   0x1833286f4: mov rcx, qword ptr [rax]
// asm:   0x1833286f7: mov qword ptr [rbp + 0x40], rcx
// asm:   0x1833286fb: movabs rax, 0
// asm:   0x183328705: add rsp, 0x30
// asm:   0x183328709: pop rbp
// asm:   0x18332870a: ret 
// asm:   0x1833383a0: mov qword ptr [rsp + 0x10], rdx
// asm:   0x1833383a5: push rbp
// asm:   0x1833383a6: sub rsp, 0x30
// asm:   0x1833383aa: mov rbp, rdx
// asm:   0x1833383ad: mov rax, qword ptr [rbp + 0x78]
// asm:   0x1833383b1: mov rcx, qword ptr [rax]
// asm:   0x1833383b4: mov qword ptr [rbp + 0x50], rcx
// asm:   0x1833383b8: movabs rax, 0
// asm:   0x1833383c2: add rsp, 0x30
// asm:   0x1833383c6: pop rbp
// asm:   0x1833383c7: ret 
// asm:   0x183340490: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183340495: push rbx
// asm:   0x183340496: push rbp
// asm:   0x183340497: sub rsp, 0x38
// asm:   0x18334049b: mov rbp, rdx
// asm:   0x18334049e: mov rbx, qword ptr [rbp + 0x88]
// asm:   0x1833404a5: mov rdx, qword ptr [rbx]
// asm:   0x1833404a8: mov rdx, qword ptr [rdx]
// asm:   0x1833404ab: mov rcx, qword ptr [rip + 0x101491e]
// asm:   0x1833404b2: call 0x180416950  ; il2cpp_codegen_class_is_assignable_from()
// asm:   0x1833404b7: test al, al
// asm:   0x1833404b9: je 0x1833404c7
// asm:   0x1833404bb: movabs rax, 0
// asm:   0x1833404c5: jmp 0x1833404df
// asm:   0x1833404c7: mov rax, qword ptr [rbx]
// asm:   0x1833404ca: mov qword ptr [rbp + 0x70], rax
// asm:   0x1833404ce: lea rdx, [rip + 0xc9bab3]
// asm:   0x1833404d5: lea rcx, [rbp + 0x70]
// asm:   0x1833404d9: call 0x1804ef7d0  ; _CxxThrowException()
// asm:   0x1833404df: add rsp, 0x38
// asm:   0x1833404e3: pop rbp
// asm:   0x1833404e4: pop rbx
// asm:   0x1833404e5: ret 

System_Byte_array *
Utility_Algorithms_GZipAlgorithm__Decompress
          (Utility_Algorithms_GZipAlgorithm_o *__this,System_Byte_array *data,int32_t bufferSize,
          int64_t maxSize,MethodInfo *method)

{
  int32_t iVar1;
  System_IO_MemoryStream_o *pSVar2;
  System_IO_Compression_GZipStream_o *__this_00;
  System_Byte_array *pSVar3;
  Il2CppObject *arg0;
  Il2CppObject *arg1;
  System_String_o *pSVar4;
  Il2CppClass *klass;
  System_IO_IOException_o *__this_01;
  MethodInfo *lastManagedFrame;
  longlong lVar5;
  System_IO_MemoryStream_o *local_98;
  System_IO_Compression_GZipStream_o *local_90;
  undefined8 local_88;
  System_IO_MemoryStream_o **local_80;
  undefined8 local_78;
  System_IO_Compression_GZipStream_o **local_70;
  longlong local_68;
  int64_t local_60 [5];
  
  if (Il2CppMethodInitialized_18434786d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_byte_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IO_Compression_GZipStream);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IDisposable);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IO_MemoryStream);
    Il2CppMethodInitialized_18434786d = '\x01';
  }
  lVar5 = 0;
  local_98 = (System_IO_MemoryStream_o *)0x0;
  local_90 = (System_IO_Compression_GZipStream_o *)0x0;
  pSVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_IO_MemoryStream);
  System_IO_MemoryStream___ctor(pSVar2,(MethodInfo *)0x0);
  local_88 = 0;
  local_80 = &local_98;
  local_98 = pSVar2;
  pSVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_IO_MemoryStream);
  System_IO_MemoryStream___ctor_1ad7fc0(pSVar2,data,(MethodInfo *)0x0);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_IO_Compression_GZipStream);
  System_IO_Compression_GZipStream___ctor(__this_00,(System_IO_Stream_o *)pSVar2,0,(MethodInfo *)0x0);
  local_78 = 0;
  local_70 = &local_90;
  local_90 = __this_00;
  pSVar3 = (System_Byte_array *)SZArrayNew(TypeInfo_byte_array,bufferSize);
  while( true ) {
    if (local_90 == (System_IO_Compression_GZipStream_o *)0x0) {
      ThrowNullReferenceException();
    }
    iVar1 = (*(local_90->klass->vtable)._32_Read.methodPtr)
                      (local_90,pSVar3,0,bufferSize,(local_90->klass->vtable)._32_Read.method);
    if (iVar1 < 1) {
      if (local_90 != (System_IO_Compression_GZipStream_o *)0x0) {
        InterfaceInvoker0_Invoke(0,(Il2CppClass *)TypeInfo_System_IDisposable,(Il2CppObject *)local_90);
      }
      if (local_98 != (System_IO_MemoryStream_o *)0x0) {
        pSVar3 = (*(local_98->klass->vtable)._41_ToArray.methodPtr)
                           (local_98,(local_98->klass->vtable)._41_ToArray.method);
        if (local_98 != (System_IO_MemoryStream_o *)0x0) {
          InterfaceInvoker0_Invoke(0,(Il2CppClass *)TypeInfo_System_IDisposable,(Il2CppObject *)local_98);
        }
        return pSVar3;
      }
      ThrowNullReferenceException();
    }
    lVar5 = lVar5 + iVar1;
    if (maxSize < lVar5) {
      local_68 = lVar5;
      arg0 = il2cpp_value_box(g_data_184354e28,&local_68);
      local_60[0] = maxSize;
      arg1 = il2cpp_value_box(g_data_184354e28,local_60);
      pSVar4 = il2cpp_codegen_get_runtime_metadata(&"Decompressed size exceeded maximum allowed ({0} > {1})");
      pSVar4 = System_String__Format_196d440(pSVar4,arg0,arg1,(MethodInfo *)0x0);
      klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_IO_IOException);
      __this_01 = (System_IO_IOException_o *)il2cpp_codegen_object_new(klass);
      System_IO_IOException___ctor_1ad5520(__this_01,pSVar4,(MethodInfo *)0x0);
      lastManagedFrame =
           il2cpp_codegen_get_runtime_metadata(&MethodInfo_Utility_Algorithms_GZipAlgorithm_Decompress);
      il2cpp_codegen_raise_exception((Il2CppObject *)__this_01,lastManagedFrame);
    }
    if (local_98 == (System_IO_MemoryStream_o *)0x0) break;
    il2cpp_runtime_helper_180332290(0x23,local_98,pSVar3,0,iVar1);
  }
  ThrowNullReferenceException();
}


// Utility.Algorithms.GZipAlgorithm$$.ctor
// il2cpp: void Utility_Algorithms_GZipAlgorithm___ctor (Utility_Algorithms_GZipAlgorithm_o* __this, const MethodInfo* method);
// 0x18054c890

void
Utility_Algorithms_GZipAlgorithm___ctor(Utility_Algorithms_GZipAlgorithm_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


