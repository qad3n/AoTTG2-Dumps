// Type: Utility.Algorithms.DeflateAlgorithm
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Utility.Algorithms/DeflateAlgorithm.cs
// Prior real C# source: none
// --------------------------------

// Utility.Algorithms.DeflateAlgorithm$$Compress
// il2cpp: System_Byte_array* Utility_Algorithms_DeflateAlgorithm__Compress (Utility_Algorithms_DeflateAlgorithm_o* __this, System_Byte_array* data, int32_t level, const MethodInfo* method);
// 0x1823354c0
// eh: try 0x182335516..0x182335543 -> pad 0x183340430 catch Il2CppExceptionWrapper [managed catch: runtime default class]
// eh: try 0x182335543..0x1823355f2 -> pad 0x183340400 (+2 call sites) catch Il2CppExceptionWrapper
// eh: try 0x1823355f2..0x18233560b -> pad 0x183340430 catch Il2CppExceptionWrapper [managed catch: runtime default class]
// eh: try 0x182335620..0x182335644 -> pad 0x183340400 catch Il2CppExceptionWrapper
// eh: try 0x182335644..0x18233565a -> pad 0x183340430 catch Il2CppExceptionWrapper [managed catch: runtime default class]
// eh: try 0x18233567c..0x182335693 -> pad 0x183340400 (+2 call sites) catch Il2CppExceptionWrapper
// eh: try 0x182335693..0x18233569a -> pad 0x183340430 catch Il2CppExceptionWrapper [managed catch: runtime default class]
// asm: 72 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18233560a: nop 
// asm:   0x18233560d: mov r8, qword ptr [rsp + 0x38]
// asm:   0x182335612: test r8, r8
// asm:   0x182335615: je 0x182335625
// asm:   0x182335617: xor ecx, ecx
// asm:   0x182335619: mov rdx, qword ptr [rip + 0x1d63ce0]  ; TypeInfo_System_IDisposable
// asm:   0x182335620: call 0x180014840  ; InterfaceInvoker0_Invoke()
// asm:   0x182335625: mov rcx, qword ptr [rsp + 0x60]
// asm:   0x18233562a: test rcx, rcx
// asm:   0x18233562d: jne 0x18233568d
// asm:   0x18233562f: jmp 0x1823355d1
// asm:   0x182335631: mov r8, qword ptr [rsp + 0x30]
// asm:   0x182335636: test r8, r8
// asm:   0x182335639: je 0x182335649
// asm:   0x18233563b: xor ecx, ecx
// asm:   0x18233563d: mov rdx, qword ptr [rip + 0x1d63cbc]  ; TypeInfo_System_IDisposable
// asm:   0x182335644: call 0x180014840  ; InterfaceInvoker0_Invoke()
// asm:   0x182335649: mov rcx, qword ptr [rsp + 0x70]
// asm:   0x18233564e: test rcx, rcx
// asm:   0x182335651: jne 0x182335693
// asm:   0x182335653: lea rcx, [rip + 0x1da370e]  ; MethodInfo_System_Array_Empty_byte
// asm:   0x18233565a: call 0x180416ea0  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x18233565f: mov rcx, rax
// asm:   0x182335662: call 0x18001b1e0  ; il2cpp_runtime_helper_18001b1e0()
// asm:   0x182335667: mov rbx, rax
// asm:   0x18233568d: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x182335693: call 0x1804171b0  ; il2cpp_codegen_rethrow()
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
Utility_Algorithms_DeflateAlgorithm__Compress
          (Utility_Algorithms_DeflateAlgorithm_o *__this,System_Byte_array *data,int32_t level,
          MethodInfo *method)

{
  System_IO_MemoryStream_o *__this_00;
  System_IO_Compression_DeflateStream_o *__this_01;
  System_Byte_array *pSVar1;
  System_IO_MemoryStream_o *local_78;
  System_IO_Compression_DeflateStream_o *local_70 [5];
  undefined8 local_48;
  System_IO_Compression_DeflateStream_o **local_40;
  undefined8 local_38;
  System_IO_MemoryStream_o **local_30;
  
  if (Il2CppMethodInitialized_18434786a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IO_Compression_DeflateStream);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IDisposable);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IO_MemoryStream);
    Il2CppMethodInitialized_18434786a = '\x01';
  }
  local_78 = (System_IO_MemoryStream_o *)0x0;
  local_70[0] = (System_IO_Compression_DeflateStream_o *)0x0;
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_IO_MemoryStream);
  System_IO_MemoryStream___ctor(__this_00,(MethodInfo *)0x0);
  local_38 = 0;
  local_30 = &local_78;
  local_78 = __this_00;
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_IO_Compression_DeflateStream);
  System_IO_Compression_DeflateStream___ctor_28f0480
            (__this_01,(System_IO_Stream_o *)__this_00,level,true,(MethodInfo *)0x0);
  local_48 = 0;
  local_40 = local_70;
  local_70[0] = __this_01;
  if (data == (System_Byte_array *)0x0) {
    ThrowNullReferenceException();
  }
  if (__this_01 == (System_IO_Compression_DeflateStream_o *)0x0) {
    ThrowNullReferenceException();
  }
  (*(__this_01->klass->vtable)._35_Write.methodPtr)
            (__this_01,data,0,(int32_t)data->max_length,(__this_01->klass->vtable)._35_Write.method);
  if (local_70[0] != (System_IO_Compression_DeflateStream_o *)0x0) {
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


// Utility.Algorithms.DeflateAlgorithm$$Decompress
// il2cpp: System_Byte_array* Utility_Algorithms_DeflateAlgorithm__Decompress (Utility_Algorithms_DeflateAlgorithm_o* __this, System_Byte_array* data, int32_t bufferSize, int64_t maxSize, const MethodInfo* method);
// 0x1823356a0
// eh: try 0x182335709..0x182335736 -> pad 0x183340490 catch Il2CppExceptionWrapper [managed catch: runtime default class]
// eh: try 0x182335736..0x18233586d -> pad 0x1833286e0 (+2 call sites) catch Il2CppExceptionWrapper
// eh: try 0x18233586d..0x1823358b8 -> pad 0x183340490 (+1 call sites) catch Il2CppExceptionWrapper [managed catch: runtime default class]
// eh: try 0x1823358de..0x182335983 -> pad 0x1833383a0 (+1 call sites) catch Il2CppExceptionWrapper
// eh: try 0x182335983..0x18233598a -> pad 0x183340490 catch Il2CppExceptionWrapper [managed catch: runtime default class]
// asm: 75 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18233579c: nop dword ptr [rax]
// asm:   0x18233581d: mov r8, qword ptr [rsp + 0x58]
// asm:   0x182335822: cmp qword ptr [r8], 0
// asm:   0x182335826: je 0x182335839
// asm:   0x182335828: xor ecx, ecx
// asm:   0x18233582a: mov r8, qword ptr [r8]
// asm:   0x18233582d: mov rdx, qword ptr [rip + 0x1d63acc]  ; TypeInfo_System_IDisposable
// asm:   0x182335834: call 0x180014840  ; InterfaceInvoker0_Invoke()
// asm:   0x182335839: mov rcx, qword ptr [rsp + 0x50]
// asm:   0x18233583e: test rcx, rcx
// asm:   0x182335841: jne 0x182335978
// asm:   0x182335847: mov rbx, qword ptr [rsp + 0x48]
// asm:   0x182335884: nop 
// asm:   0x182335887: mov r8, qword ptr [rsp + 0x48]
// asm:   0x18233588c: cmp qword ptr [r8], 0
// asm:   0x182335890: je 0x1823358a3
// asm:   0x182335892: xor ecx, ecx
// asm:   0x182335894: mov r8, qword ptr [r8]
// asm:   0x182335897: mov rdx, qword ptr [rip + 0x1d63a62]  ; TypeInfo_System_IDisposable
// asm:   0x18233589e: call 0x180014840  ; InterfaceInvoker0_Invoke()
// asm:   0x1823358a3: mov rcx, qword ptr [rsp + 0x40]
// asm:   0x1823358a8: test rcx, rcx
// asm:   0x1823358ab: jne 0x182335983
// asm:   0x1823358b1: lea rcx, [rip + 0x1da34b0]  ; MethodInfo_System_Array_Empty_byte
// asm:   0x1823358b8: call 0x180416ea0  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x1823358bd: mov rcx, rax
// asm:   0x1823358c0: call 0x18001b1e0  ; il2cpp_runtime_helper_18001b1e0()
// asm:   0x1823358c5: mov rdi, rax
// asm:   0x182335978: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x182335983: call 0x1804171b0  ; il2cpp_codegen_rethrow()
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
Utility_Algorithms_DeflateAlgorithm__Decompress
          (Utility_Algorithms_DeflateAlgorithm_o *__this,System_Byte_array *data,int32_t bufferSize,
          int64_t maxSize,MethodInfo *method)

{
  int32_t iVar1;
  System_IO_MemoryStream_o *pSVar2;
  System_IO_Compression_DeflateStream_o *__this_00;
  System_Byte_array *pSVar3;
  Il2CppObject *arg0;
  Il2CppObject *arg1;
  System_String_o *pSVar4;
  Il2CppClass *klass;
  System_IO_IOException_o *__this_01;
  MethodInfo *lastManagedFrame;
  longlong lVar5;
  System_IO_MemoryStream_o *local_98;
  System_IO_Compression_DeflateStream_o *local_90;
  undefined8 local_88;
  System_IO_MemoryStream_o **local_80;
  undefined8 local_78;
  System_IO_Compression_DeflateStream_o **local_70;
  longlong local_68;
  int64_t local_60 [5];
  
  if (Il2CppMethodInitialized_18434786b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_byte_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IO_Compression_DeflateStream);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IDisposable);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IO_MemoryStream);
    Il2CppMethodInitialized_18434786b = '\x01';
  }
  lVar5 = 0;
  local_98 = (System_IO_MemoryStream_o *)0x0;
  local_90 = (System_IO_Compression_DeflateStream_o *)0x0;
  pSVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_IO_MemoryStream);
  System_IO_MemoryStream___ctor(pSVar2,(MethodInfo *)0x0);
  local_88 = 0;
  local_80 = &local_98;
  local_98 = pSVar2;
  pSVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_IO_MemoryStream);
  System_IO_MemoryStream___ctor_1ad7fc0(pSVar2,data,(MethodInfo *)0x0);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_IO_Compression_DeflateStream);
  System_IO_Compression_DeflateStream___ctor(__this_00,(System_IO_Stream_o *)pSVar2,0,(MethodInfo *)0x0);
  local_78 = 0;
  local_70 = &local_90;
  local_90 = __this_00;
  pSVar3 = (System_Byte_array *)SZArrayNew(TypeInfo_byte_array,bufferSize);
  while( true ) {
    if (local_90 == (System_IO_Compression_DeflateStream_o *)0x0) {
      ThrowNullReferenceException();
    }
    iVar1 = (*(local_90->klass->vtable)._32_Read.methodPtr)
                      (local_90,pSVar3,0,bufferSize,(local_90->klass->vtable)._32_Read.method);
    if (iVar1 < 1) {
      if (local_90 != (System_IO_Compression_DeflateStream_o *)0x0) {
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
           il2cpp_codegen_get_runtime_metadata(&MethodInfo_Utility_Algorithms_DeflateAlgorithm_Decompress);
      il2cpp_codegen_raise_exception((Il2CppObject *)__this_01,lastManagedFrame);
    }
    if (local_98 == (System_IO_MemoryStream_o *)0x0) break;
    il2cpp_runtime_helper_180332290(0x23,local_98,pSVar3,0,iVar1);
  }
  ThrowNullReferenceException();
}


// Utility.Algorithms.DeflateAlgorithm$$.ctor
// il2cpp: void Utility_Algorithms_DeflateAlgorithm___ctor (Utility_Algorithms_DeflateAlgorithm_o* __this, const MethodInfo* method);
// 0x18054c890

void
Utility_Algorithms_DeflateAlgorithm___ctor(Utility_Algorithms_DeflateAlgorithm_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


