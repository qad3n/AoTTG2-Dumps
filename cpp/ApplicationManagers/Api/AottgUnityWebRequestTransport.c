// Type: ApplicationManagers.Api.AottgUnityWebRequestTransport
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/ApplicationManagers.Api/AottgUnityWebRequestTransport.cs
// Prior real C# source: none
// --------------------------------

// ApplicationManagers.Api.AottgUnityWebRequestTransport.<SendAsync>d__0$$MoveNext
// il2cpp: void ApplicationManagers_Api_AottgUnityWebRequestTransport__SendAsync_d__0__MoveNext (ApplicationManagers_Api_AottgUnityWebRequestTransport__SendAsync_d__0_o __this, const MethodInfo* method);
// 0x5e2b0a0
// eh: try 0x5e2b20e..0x5e2bb4d -> pad 0x5e2bb82 (+42 call sites) catch Il2CppExceptionWrapper, cleanup [managed catch: TypeInfo_System_Exception]
// eh: try 0x5e2bb68..0x5e2bb6d -> pad 0x5e2bda9 catch (...) [compiler noexcept guard]
// eh: try 0x5e2bbae..0x5e2bbb3 -> pad 0x5e2bbb8 catch Il2CppExceptionWrapper, cleanup [managed catch: TypeInfo_System_Exception]
// eh: try 0x5e2bbbe..0x5e2bbc8 -> pad 0x5e2bda9 catch (...) [compiler noexcept guard]
// eh: try 0x5e2bbe0..0x5e2bbe5 -> pad 0x5e2bbfa catch Il2CppExceptionWrapper, cleanup [managed catch: TypeInfo_System_Exception]
// eh: try 0x5e2bc00..0x5e2bc0a -> pad 0x5e2bda9 catch (...) [compiler noexcept guard]
// eh: try 0x5e2bc1e..0x5e2bd99 -> pad 0x5e2bd99 (+1 call sites) cleanup
// eh: try 0x5e2bd9c..0x5e2bda1 -> pad 0x5e2bda9 catch (...) [compiler noexcept guard]
// asm: 199 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5e2b77b: xor r12d, r12d
// asm:   0x5e2b77e: jmp 0x5e2b821
// asm:   0x5e2b8a5: jmp 0x5e2b8ff
// asm:   0x5e2b943: mov rdi, r15
// asm:   0x5e2b946: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5e2b964: mov rdi, r14
// asm:   0x5e2b967: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5e2b98a: jmp 0x5e2b9e3
// asm:   0x5e2b98c: jmp 0x5e2b9e3
// asm:   0x5e2b98e: jmp 0x5e2b9e3
// asm:   0x5e2b990: jmp 0x5e2b9e3
// asm:   0x5e2b992: jmp 0x5e2b9e3
// asm:   0x5e2b994: jmp 0x5e2bb7a
// asm:   0x5e2b999: jmp 0x5e2bb7a
// asm:   0x5e2b99e: jmp 0x5e2bb7a
// asm:   0x5e2b9a3: jmp 0x5e2bb7a
// asm:   0x5e2b9a8: jmp 0x5e2b9e3
// asm:   0x5e2b9aa: jmp 0x5e2bb7a
// asm:   0x5e2b9af: jmp 0x5e2b9e3
// asm:   0x5e2b9b1: jmp 0x5e2bb7a
// asm:   0x5e2b9b6: jmp 0x5e2bb7a
// asm:   0x5e2b9bb: jmp 0x5e2bb7a
// asm:   0x5e2b9c0: jmp 0x5e2bb7a
// asm:   0x5e2b9c5: jmp 0x5e2bb7a
// asm:   0x5e2b9ca: jmp 0x5e2bb7a
// asm:   0x5e2b9cf: jmp 0x5e2bb82
// asm:   0x5e2b9d4: jmp 0x5e2bb7a
// asm:   0x5e2b9d9: jmp 0x5e2bb7a
// asm:   0x5e2b9de: jmp 0x5e2bb7a
// asm:   0x5e2b9e3: mov rbx, rdx
// asm:   0x5e2b9e6: mov r14, rax
// asm:   0x5e2b9e9: xor r12d, r12d
// asm:   0x5e2b9ec: cmp ebx, 1
// asm:   0x5e2b9ef: jne 0x5e2bbcb
// asm:   0x5e2b9f5: mov rdi, r14
// asm:   0x5e2b9f8: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5e2b9fd: mov r15, rax
// asm:   0x5e2ba00: mov rbp, qword ptr [rax]
// asm:   0x5e2ba03: lea rdi, [rip + 0x1452786]  ; TypeInfo_Cysharp_Threading_Tasks_UnityWebRequestException
// asm:   0x5e2ba0a: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x5e2ba0f: test rbp, rbp
// asm:   0x5e2ba12: je 0x5e2bb2c
// asm:   0x5e2ba18: mov rcx, qword ptr [rbp]
// asm:   0x5e2ba1c: movzx edx, byte ptr [rax + 0x130]
// asm:   0x5e2ba23: cmp byte ptr [rcx + 0x130], dl
// asm:   0x5e2ba29: jb 0x5e2bb2c
// asm:   0x5e2ba2f: mov rcx, qword ptr [rcx + 0xc8]
// asm:   0x5e2ba36: cmp qword ptr [rcx + rdx*8 - 8], rax
// asm:   0x5e2ba3b: jne 0x5e2bb2c
// asm:   0x5e2ba41: mov rbx, qword ptr [rsp]
// asm:   0x5e2ba45: lea rdi, [rip + 0x144a96c]  ; TypeInfo_System_Threading_CancellationToken
// asm:   0x5e2ba4c: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x5e2ba51: cmp dword ptr [rax + 0xe4], 0
// asm:   0x5e2ba58: jne 0x5e2ba62
// asm:   0x5e2ba5a: mov rdi, rax
// asm:   0x5e2ba5d: call 0x30d6240  ; il2cpp_codegen_runtime_class_init()
// asm:   0x5e2ba62: add rbx, 0x28
// asm:   0x5e2ba66: mov rdi, rbx
// asm:   0x5e2ba69: xor esi, esi
// asm:   0x5e2ba6b: call 0x562bb70  ; System_Threading_CancellationToken__get_IsCancellationRequested()
// asm:   0x5e2ba70: test al, al
// asm:   0x5e2ba72: jne 0x5e2bb2c
// asm:   0x5e2ba78: mov rax, qword ptr [r15]
// asm:   0x5e2ba7b: mov qword ptr [rsp + 0xc0], rax
// asm:   0x5e2ba83: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5e2ba88: mov r15, qword ptr [rbp + 0x90]
// asm:   0x5e2ba8f: mov r14, qword ptr [rbp + 0xa0]
// asm:   0x5e2ba96: mov r12, qword ptr [rbp + 0xa8]
// asm:   0x5e2ba9d: mov rbx, qword ptr [rbp + 0xb0]
// asm:   0x5e2baa4: xorps xmm0, xmm0
// asm:   0x5e2baa7: movaps xmmword ptr [rsp + 0x10], xmm0
// asm:   0x5e2baac: lea rdi, [rip + 0x146f395]  ; MethodInfo_System_Nullable_long_ctor
// asm:   0x5e2bab3: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x5e2bab8: lea rdi, [rsp + 0x10]
// asm:   0x5e2babd: mov rsi, rbx
// asm:   0x5e2bac0: mov rdx, rax
// asm:   0x5e2bac3: call 0x3dd5350  ; System_Nullable_long____ctor()
// asm:   0x5e2bac8: mov r8, qword ptr [rsp + 0x18]
// asm:   0x5e2bacd: mov ecx, dword ptr [rsp + 0x10]
// asm:   0x5e2bad1: mov rdi, r15
// asm:   0x5e2bad4: mov rsi, r12
// asm:   0x5e2bad7: mov rdx, r14
// asm:   0x5e2bada: call 0x5e2af40  ; ApplicationManagers_Api_AottgUnityWebRequestTransport__BuildResponse()
// asm:   0x5e2badf: mov r14, rax
// asm:   0x5e2bae2: mov dword ptr [rsp + 0xd0], 0
// asm:   0x5e2baed: mov ebx, 0xf
// asm:   0x5e2baf2: xor r12d, r12d
// asm:   0x5e2baf5: xor r15d, r15d
// asm:   0x5e2baf8: cmp dword ptr [rsp + 0xc], 0
// asm:   0x5e2bafd: jns 0x5e2b832
// asm:   0x5e2bb03: jmp 0x5e2b71c
// asm:   0x5e2bb08: jmp 0x5e2bb54
// asm:   0x5e2bb0a: jmp 0x5e2bb54
// asm:   0x5e2bb0c: jmp 0x5e2bb10
// asm:   0x5e2bb0e: jmp 0x5e2bb10
// asm:   0x5e2bb10: mov rbx, rdx
// asm:   0x5e2bb13: mov r14, rax
// asm:   0x5e2bb16: mov eax, 1
// asm:   0x5e2bb1b: cmp ebx, eax
// asm:   0x5e2bb1d: jne 0x5e2bb68
// asm:   0x5e2bb1f: mov rdi, r14
// asm:   0x5e2bb22: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5e2bb27: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5e2bb2c: mov edi, 8
// asm:   0x5e2bb31: call 0x6e255b0  ; __cxa_allocate_exception()
// asm:   0x5e2bb36: mov rcx, qword ptr [r15]
// asm:   0x5e2bb39: mov qword ptr [rax], rcx
// asm:   0x5e2bb3c: lea rsi, [rip + 0x10019bd]
// asm:   0x5e2bb43: mov rdi, rax
// asm:   0x5e2bb46: xor edx, edx
// asm:   0x5e2bb48: call 0x6e255c0  ; __cxa_throw()
// asm:   0x5e2bb4d: jmp 0x5e2bd99
// asm:   0x5e2bb52: jmp 0x5e2bb62
// asm:   0x5e2bb54: mov rbx, rdx
// asm:   0x5e2bb57: mov r14, rax
// asm:   0x5e2bb5a: mov r12d, 1
// asm:   0x5e2bb60: jmp 0x5e2bbcb
// asm:   0x5e2bb62: mov rbx, rdx
// asm:   0x5e2bb65: mov r14, rax
// asm:   0x5e2bb68: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5e2bb6d: jmp 0x5e2bbcb
// asm:   0x5e2bb6f: mov rbx, rdx
// asm:   0x5e2bb72: mov r14, rax
// asm:   0x5e2bb75: jmp 0x5e2bc0a
// asm:   0x5e2bb7a: mov rbx, rdx
// asm:   0x5e2bb7d: mov r14, rax
// asm:   0x5e2bb80: jmp 0x5e2bbc8
// asm:   0x5e2bb82: mov rbx, rdx
// asm:   0x5e2bb85: mov r14, rax
// asm:   0x5e2bb88: xor r12d, r12d
// asm:   0x5e2bb8b: jmp 0x5e2bc0a
// asm:   0x5e2bb8d: jmp 0x5e2bb91
// asm:   0x5e2bb8f: jmp 0x5e2bb91
// asm:   0x5e2bb91: mov rbx, rdx
// asm:   0x5e2bb94: mov r14, rax
// asm:   0x5e2bb97: cmp ebx, 1
// asm:   0x5e2bb9a: jne 0x5e2bbbe
// asm:   0x5e2bb9c: mov rdi, r14
// asm:   0x5e2bb9f: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5e2bba4: mov r14, qword ptr [rax]
// asm:   0x5e2bba7: mov qword ptr [rsp + 0x10], r14
// asm:   0x5e2bbac: xor ebx, ebx
// asm:   0x5e2bbae: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5e2bbb3: jmp 0x5e2b43f
// asm:   0x5e2bbb8: mov rbx, rdx
// asm:   0x5e2bbbb: mov r14, rax
// asm:   0x5e2bbbe: lea rdi, [rsp + 0x10]
// asm:   0x5e2bbc3: call 0x2fe0970  ; il2cpp_runtime_helper_02fe0970()
// asm:   0x5e2bbc8: xor r12d, r12d
// asm:   0x5e2bbcb: cmp ebx, 1
// asm:   0x5e2bbce: jne 0x5e2bc00
// asm:   0x5e2bbd0: mov rdi, r14
// asm:   0x5e2bbd3: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5e2bbd8: mov r15, qword ptr [rax]
// asm:   0x5e2bbdb: mov qword ptr [rsp + 0x58], r15
// asm:   0x5e2bbe0: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5e2bbe5: xor ebx, ebx
// asm:   0x5e2bbe7: xor r14d, r14d
// asm:   0x5e2bbea: cmp dword ptr [rsp + 0xc], 0
// asm:   0x5e2bbef: jns 0x5e2b832
// asm:   0x5e2bbf5: jmp 0x5e2b71c
// asm:   0x5e2bbfa: mov rbx, rdx
// asm:   0x5e2bbfd: mov r14, rax
// asm:   0x5e2bc00: lea rdi, [rsp + 0x58]
// asm:   0x5e2bc05: call 0x2fe09a0  ; il2cpp_runtime_helper_02fe09a0()
// asm:   0x5e2bc0a: cmp ebx, 1
// asm:   0x5e2bc0d: jne 0x5e2bda1
// asm:   0x5e2bc13: mov rdi, r14
// asm:   0x5e2bc16: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5e2bc1b: mov rbx, rax
// asm:   0x5e2bc1e: lea rdi, [rip + 0x144c49b]  ; TypeInfo_System_Exception
// asm:   0x5e2bc25: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x5e2bc2a: mov rcx, qword ptr [rbx]
// asm:   0x5e2bc2d: mov rsi, qword ptr [rcx]
// asm:   0x5e2bc30: mov rdi, rax
// asm:   0x5e2bc33: call 0x30d6910  ; il2cpp_runtime_helper_030d6910()
// asm:   0x5e2bc38: test al, al
// asm:   0x5e2bc3a: je 0x5e2bd78
// asm:   0x5e2bc40: mov rax, qword ptr [rbx]
// asm:   0x5e2bc43: mov ecx, r12d
// asm:   0x5e2bc46: mov qword ptr [rsp + rcx*8 + 0xc0], rax
// asm:   0x5e2bc4e: inc r12d
// asm:   0x5e2bc51: mov dword ptr [rsp + 0xd0], r12d
// asm:   0x5e2bc59: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5e2bcc7: jmp 0x5e2bd1f
// asm:   0x5e2bd78: mov edi, 8
// asm:   0x5e2bd7d: call 0x6e255b0  ; __cxa_allocate_exception()
// asm:   0x5e2bd82: mov rcx, qword ptr [rbx]
// asm:   0x5e2bd85: mov qword ptr [rax], rcx
// asm:   0x5e2bd88: lea rsi, [rip + 0x1001771]
// asm:   0x5e2bd8f: mov rdi, rax
// asm:   0x5e2bd92: xor edx, edx
// asm:   0x5e2bd94: call 0x6e255c0  ; __cxa_throw()
// asm:   0x5e2bd99: mov r14, rax
// asm:   0x5e2bd9c: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5e2bda1: mov rdi, r14
// asm:   0x5e2bda4: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5e2bda9: mov rdi, rax
// asm:   0x5e2bdac: call 0x2ab61e0  ; __clang_call_terminate()

void ApplicationManagers_Api_AottgUnityWebRequestTransport__SendAsync_d__0__MoveNext
               (ApplicationManagers_Api_AottgUnityWebRequestTransport__SendAsync_d__0_o *__this,
               MethodInfo *method)

{
  ushort uVar1;
  System_String_o *method_00;
  System_String_o *url;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  Il2CppClass *pIVar2;
  Il2CppRuntimeInterfaceOffsetPair *pIVar3;
  ApplicationManagers_Api_AottgUnityWebRequestTransport__SendAsync_d__0_o *pAVar4;
  System_String_c *pSVar5;
  short sVar6;
  ApplicationManagers_Api_AottgUnityWebRequestTransport__SendAsync_d__0_o **ppAVar7;
  bool bVar8;
  int32_t value;
  int iVar9;
  UnityEngine_Networking_UnityWebRequest_o *pUVar10;
  UnityEngine_Networking_DownloadHandlerBuffer_o *__this_01;
  System_Text_Encoding_o *pSVar11;
  System_Byte_array *data;
  UnityEngine_Networking_UploadHandlerRaw_o *__this_02;
  UnityEngine_Networking_UnityWebRequestAsyncOperation_o *asyncOperation;
  Il2CppClass *pIVar12;
  VirtualInvokeData *pVVar13;
  System_Exception_o *pSVar14;
  void *pvVar15;
  ulong uVar16;
  MethodInfo *pMVar17;
  ApplicationManagers_Api_AottgApiTransportRequest_o *pAVar18;
  long lVar19;
  System_Exception_o **targetAddress;
  Il2CppObject *obj;
  MethodInfo *in_R9;
  ApplicationManagers_Api_AottgUnityWebRequestTransport__SendAsync_d__0_o *local_108;
  undefined1 local_fc [4];
  undefined1 local_f8 [8];
  UnityEngine_Networking_UnityWebRequest_o *pUStack_f0;
  System_String_Fields local_e8;
  System_String_o *pSStack_e0;
  undefined8 local_d8;
  System_String_c *local_c8;
  UnityEngine_Networking_UnityWebRequest_o *pUStack_c0;
  System_String_Fields local_b8;
  undefined8 local_b0;
  UnityEngine_Networking_UnityWebRequest_o *local_a8;
  undefined1 *local_a0;
  System_String_c *local_98;
  UnityEngine_Networking_UnityWebRequest_o *pUStack_90;
  System_String_Fields local_88;
  undefined1 local_78 [8];
  UnityEngine_Networking_UnityWebRequest_o *pUStack_70;
  System_String_Fields local_68;
  System_String_o *pSStack_60;
  undefined8 local_58;
  System_Exception_o *pSStack_50;
  undefined4 local_38;
  
  local_108 = __this;
  if (Il2CppMethodInitialized_07548518 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskMethodBuilder_AottgApiTransportResponse_Awa
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskMethodBuilder_AottgApiTransportResponse_Set_7187540
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Cysharp_Threading_Tasks_UniTask_Awaiter_UnityWebRequest_GetResult);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Cysharp_Threading_Tasks_UniTask_Awaiter_UnityWebRequest_get_IsCompleted);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_string_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Networking_DownloadHandlerBuffer);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_Enumerator_string_string_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_Enumerator_string_string_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_Enumerator_string_string_get_Current);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IDisposable);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_KeyValuePair_string_string_get_Key);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_KeyValuePair_string_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_int_get_HasValue);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_int_get_Value);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Cysharp_Threading_Tasks_UniTask_UnityWebRequest_GetAwaiter);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Networking_UnityWebRequest);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Networking_UploadHandlerRaw);
    Il2CppMethodInitialized_07548518 = '\x01';
  }
  local_68._stringLength = 0;
  local_68._firstChar = 0;
  local_68._6_2_ = 0;
  pSStack_60 = (System_String_o *)0x0;
  local_78 = (undefined1  [8])0x0;
  pUStack_70 = (UnityEngine_Networking_UnityWebRequest_o *)0x0;
  local_58 = 0;
  local_c8 = (System_String_c *)0x0;
  pUStack_c0 = (UnityEngine_Networking_UnityWebRequest_o *)0x0;
  local_b8._stringLength = 0;
  local_b8._firstChar = 0;
  local_b8._6_2_ = 0;
  local_98 = (System_String_c *)0x0;
  pUStack_90 = (UnityEngine_Networking_UnityWebRequest_o *)0x0;
  local_88._stringLength = 0;
  local_88._firstChar = 0;
  local_88._6_2_ = 0;
  local_38 = 0;
  local_fc = (undefined1  [4])(__this->fields).__1__state;
  if (local_fc == (undefined1  [4])0x0) {
    local_b0 = 0;
    local_a8 = (UnityEngine_Networking_UnityWebRequest_o *)local_fc;
    ppAVar7 = &local_108;
label_05e2b603:
    local_a0 = (undefined1 *)ppAVar7;
    local_b8 = *(System_String_Fields *)&(local_108->fields).__u__1.fields.task.fields.token;
    local_c8 = (System_String_c *)(local_108->fields).__u__1.fields.task.fields.source;
    pUStack_c0 = (UnityEngine_Networking_UnityWebRequest_o *)
                 (local_108->fields).__u__1.fields.task.fields.result;
    (local_108->fields).__u__1.fields.task.fields.source = (Cysharp_Threading_Tasks_IUniTaskSource_T__o *)0x0;
    (local_108->fields).__u__1.fields.task.fields.result = (Il2CppObject *)0x0;
    *(undefined8 *)&(local_108->fields).__u__1.fields.task.fields.token = 0;
    local_fc = (undefined1  [4])0xffffffff;
    (local_108->fields).__1__state = -1;
label_05e2b636:
    pSVar5 = local_c8;
    if (local_c8 != (System_String_c *)0x0) {
      sVar6 = (short)local_b8._stringLength;
      pIVar12 = MethodInfo_Cysharp_Threading_Tasks_UniTask_Awaiter_UnityWebRequest_GetResult->klass;
      if (((pIVar12->_2).bitflags1 & 1) == 0) {
        pIVar12 = il2cpp_codegen_class_init_checked(pIVar12);
      }
      pIVar12 = pIVar12->rgctx_data[5].klass;
      if (((pIVar12->_2).bitflags1 & 1) == 0) {
        pIVar12 = il2cpp_codegen_class_init_checked(pIVar12);
      }
      pIVar2 = (pSVar5->_1).image;
      uVar16 = (ulong)(pIVar2->_2).interface_offsets_count;
      if (uVar16 != 0) {
        pIVar3 = (pIVar2->_1).interfaceOffsets;
        lVar19 = 0;
        do {
          if (*(Il2CppClass **)((long)&pIVar3->interfaceType + lVar19) == pIVar12) {
            pVVar13 = (VirtualInvokeData *)&pIVar2->vtable[*(int *)((long)&pIVar3->offset + lVar19)].methodPtr
            ;
            goto label_05e2b6e1;
          }
          lVar19 = lVar19 + 0x10;
        } while (uVar16 * 0x10 != lVar19);
      }
      pVVar13 = GetInterfaceInvokeDataFromVTableSlowPath((Il2CppObject *)pSVar5,pIVar12,0);
label_05e2b6e1:
      (*pVVar13->methodPtr)(pSVar5,(ulong)(uint)(int)sVar6,pVVar13->method);
    }
label_05e2b6ed:
    pSVar14 = (System_Exception_o *)
              ApplicationManagers_Api_AottgUnityWebRequestTransport__BuildResponse
                        ((local_108->fields)._unityRequest_5__2,(System_String_o *)0x0,(System_String_o *)0x0,
                         (System_Nullable_long__o)ZEXT816(0),in_R9);
    iVar9 = 0xf;
  }
  else {
    pAVar18 = (__this->fields).request;
    if (pAVar18 == (ApplicationManagers_Api_AottgApiTransportRequest_o *)0x0) {
      ThrowNullReferenceException();
    }
    method_00 = (pAVar18->fields).Method;
    url = (pAVar18->fields).Url;
    pUVar10 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Networking_UnityWebRequest);
    UnityEngine_Networking_UnityWebRequest___ctor_6d1c530(pUVar10,url,method_00,(MethodInfo *)0x0);
    (local_108->fields)._unityRequest_5__2 = pUVar10;
    Il2CppCodeGenWriteBarrier(&(local_108->fields)._unityRequest_5__2);
    local_a0 = (undefined1 *)&local_108;
    local_b0 = 0;
    local_a8 = (UnityEngine_Networking_UnityWebRequest_o *)local_fc;
    ppAVar7 = &local_108;
    if (local_fc == (undefined1  [4])0x0) goto label_05e2b603;
    pUVar10 = (local_108->fields)._unityRequest_5__2;
    __this_01 = il2cpp_codegen_object_new
                          ((Il2CppClass *)TypeInfo_UnityEngine_Networking_DownloadHandlerBuffer);
    UnityEngine_Networking_DownloadHandlerBuffer___ctor(__this_01,(MethodInfo *)0x0);
    if (pUVar10 == (UnityEngine_Networking_UnityWebRequest_o *)0x0) {
      ThrowNullReferenceException();
    }
    UnityEngine_Networking_UnityWebRequest__set_downloadHandler
              (pUVar10,(UnityEngine_Networking_DownloadHandler_o *)__this_01,(MethodInfo *)0x0);
    pAVar18 = (local_108->fields).request;
    if (pAVar18 == (ApplicationManagers_Api_AottgApiTransportRequest_o *)0x0) {
      ThrowNullReferenceException();
    }
    bVar8 = System_String__IsNullOrEmpty((pAVar18->fields).JsonBody,(MethodInfo *)0x0);
    if (!bVar8) {
      pUVar10 = (local_108->fields)._unityRequest_5__2;
      pSVar11 = System_Text_Encoding__get_UTF8((MethodInfo *)0x0);
      pAVar18 = (local_108->fields).request;
      if (pAVar18 == (ApplicationManagers_Api_AottgApiTransportRequest_o *)0x0) {
        ThrowNullReferenceException();
      }
      if (pSVar11 == (System_Text_Encoding_o *)0x0) {
        ThrowNullReferenceException();
      }
      data = (*(pSVar11->klass->vtable)._18_GetBytes.methodPtr)
                       (pSVar11,(pAVar18->fields).JsonBody,(pSVar11->klass->vtable)._18_GetBytes.method);
      __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Networking_UploadHandlerRaw);
      UnityEngine_Networking_UploadHandlerRaw___ctor(__this_02,data,(MethodInfo *)0x0);
      if (pUVar10 == (UnityEngine_Networking_UnityWebRequest_o *)0x0) {
        ThrowNullReferenceException();
      }
      UnityEngine_Networking_UnityWebRequest__set_uploadHandler
                (pUVar10,(UnityEngine_Networking_UploadHandler_o *)__this_02,(MethodInfo *)0x0);
    }
    pAVar18 = (local_108->fields).request;
    if (pAVar18 == (ApplicationManagers_Api_AottgApiTransportRequest_o *)0x0) {
      ThrowNullReferenceException();
    }
    if ((pAVar18->fields).TimeoutSeconds.fields.hasValue != false) {
      pUVar10 = (local_108->fields)._unityRequest_5__2;
      value = System_Nullable_int___get_Value
                        (&(pAVar18->fields).TimeoutSeconds,
                         (MethodInfo_3CD4BC0 *)MethodInfo_System_Nullable_int_get_Value);
      if (pUVar10 == (UnityEngine_Networking_UnityWebRequest_o *)0x0) {
        ThrowNullReferenceException();
      }
      UnityEngine_Networking_UnityWebRequest__set_timeout(pUVar10,value,(MethodInfo *)0x0);
      pAVar18 = (local_108->fields).request;
      if (pAVar18 == (ApplicationManagers_Api_AottgApiTransportRequest_o *)0x0) {
        ThrowNullReferenceException();
      }
    }
    __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)(pAVar18->fields).Headers;
    if (__this_00 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      ThrowNullReferenceException();
    }
    System_Collections_Generic_Dictionary_object__object___GetEnumerator
              ((System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)local_f8,__this_00,
               (MethodInfo_4AAD970 *)
               MethodInfo_System_Collections_Generic_Dictionary_string_string_GetEnumerator);
    local_58 = local_d8;
    local_68 = local_e8;
    pSStack_60 = pSStack_e0;
    local_78 = local_f8;
    pUStack_70 = pUStack_f0;
    local_f8 = (undefined1  [8])0x0;
    pUStack_f0 = (UnityEngine_Networking_UnityWebRequest_o *)local_fc;
    local_e8 = (System_String_Fields)local_78;
    while (bVar8 = System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext
                             ((System_Collections_Generic_Dictionary_Enumerator_object__object__o *)local_78,
                              (MethodInfo_4CE66D0 *)
                              MethodInfo_System_Collections_Generic_Dictionary_Enumerator_string_string_MoveNext
                             ), bVar8) {
      pUVar10 = (local_108->fields)._unityRequest_5__2;
      if (pUVar10 == (UnityEngine_Networking_UnityWebRequest_o *)0x0) {
        ThrowNullReferenceException();
      }
      UnityEngine_Networking_UnityWebRequest__SetRequestHeader
                (pUVar10,(System_String_o *)local_68,pSStack_60,(MethodInfo *)0x0);
    }
    if ((int)local_fc < 0) {
      System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose
                ((System_Collections_Generic_Dictionary_Enumerator_object__object__o *)local_78,
                 (MethodInfo_4CE67F0 *)
                 MethodInfo_System_Collections_Generic_Dictionary_Enumerator_string_string_Dispose);
    }
    ppAVar7 = (ApplicationManagers_Api_AottgUnityWebRequestTransport__SendAsync_d__0_o **)local_a0;
    if (local_fc == (undefined1  [4])0x0) goto label_05e2b603;
    pUVar10 = (local_108->fields)._unityRequest_5__2;
    if (pUVar10 == (UnityEngine_Networking_UnityWebRequest_o *)0x0) {
      ThrowNullReferenceException();
    }
    asyncOperation = UnityEngine_Networking_UnityWebRequest__SendWebRequest(pUVar10,(MethodInfo *)0x0);
    Cysharp_Threading_Tasks_UnityAsyncExtensions__WithCancellation_62e82d0
              ((Cysharp_Threading_Tasks_UniTask_UnityWebRequest__o *)local_f8,asyncOperation,
               (System_Threading_CancellationToken_o)(local_108->fields).cancellationToken.fields._source,
               (MethodInfo *)0x0);
    local_88 = local_e8;
    local_98 = (System_String_c *)local_f8;
    pUStack_90 = pUStack_f0;
    local_f8 = (undefined1  [8])0x0;
    pUStack_f0 = (UnityEngine_Networking_UnityWebRequest_o *)0x0;
    local_e8 = (System_String_Fields)0x0;
    if (((MethodInfo_Cysharp_Threading_Tasks_UniTask_UnityWebRequest_GetAwaiter->klass->_2).bitflags1 & 1) ==
        0) {
      il2cpp_codegen_class_init_checked
                (MethodInfo_Cysharp_Threading_Tasks_UniTask_UnityWebRequest_GetAwaiter->klass);
    }
    local_e8 = local_88;
    local_f8 = (undefined1  [8])local_98;
    pUStack_f0 = pUStack_90;
    Il2CppCodeGenWriteBarrier((void **)local_f8);
    local_b8 = local_e8;
    local_c8 = (System_String_c *)local_f8;
    pUStack_c0 = pUStack_f0;
    pIVar12 = MethodInfo_Cysharp_Threading_Tasks_UniTask_Awaiter_UnityWebRequest_get_IsCompleted->klass;
    if (((pIVar12->_2).bitflags1 & 1) == 0) {
      pIVar12 = il2cpp_codegen_class_init_checked(pIVar12);
    }
    pSVar5 = local_c8;
    if (local_c8 == (System_String_c *)0x0) goto label_05e2b6ed;
    sVar6 = (short)local_b8._stringLength;
    pIVar12 = (pIVar12->rgctx_data[3].method)->klass;
    if (((pIVar12->_2).bitflags1 & 1) == 0) {
      pIVar12 = il2cpp_codegen_class_init_checked(pIVar12);
    }
    pIVar12 = pIVar12->rgctx_data[1].klass;
    if (((pIVar12->_2).bitflags1 & 1) == 0) {
      pIVar12 = il2cpp_codegen_class_init_checked(pIVar12);
    }
    pIVar2 = (pSVar5->_1).image;
    uVar16 = (ulong)(pIVar2->_2).interface_offsets_count;
    if (uVar16 != 0) {
      pIVar3 = (pIVar2->_1).interfaceOffsets;
      lVar19 = 0;
      do {
        if (*(Il2CppClass **)((long)&pIVar3->interfaceType + lVar19) == pIVar12) {
          pVVar13 = (VirtualInvokeData *)
                    &pIVar2->vtable[*(int *)((long)&pIVar3->offset + lVar19) + 1].methodPtr;
          goto label_05e2b7ba;
        }
        lVar19 = lVar19 + 0x10;
      } while (uVar16 * 0x10 != lVar19);
    }
    pVVar13 = GetInterfaceInvokeDataFromVTableSlowPath((Il2CppObject *)pSVar5,pIVar12,1);
label_05e2b7ba:
    iVar9 = (*pVVar13->methodPtr)(pSVar5,(ulong)(uint)(int)sVar6,pVVar13->method);
    if (iVar9 != 0) goto label_05e2b636;
    local_fc = (undefined1  [4])0x0;
    (local_108->fields).__1__state = 0;
    (local_108->fields).__u__1.fields.task.fields.source =
         (Cysharp_Threading_Tasks_IUniTaskSource_T__o *)local_c8;
    (local_108->fields).__u__1.fields.task.fields.result = (Il2CppObject *)pUStack_c0;
    *(System_String_Fields *)&(local_108->fields).__u__1.fields.task.fields.token = local_b8;
    Il2CppCodeGenWriteBarrier((void **)&(local_108->fields).__u__1);
    il2cpp_runtime_helper_032ecdb0(&(local_108->fields).__t__builder,&local_c8,local_108,
                 MethodInfo_Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskMethodBuilder_AottgApiTransportResponse_Awa
                );
    iVar9 = 10;
    pSVar14 = (System_Exception_o *)0x0;
  }
  if (((int)local_fc < 0) &&
     (pUVar10 = (local_108->fields)._unityRequest_5__2,
     pUVar10 != (UnityEngine_Networking_UnityWebRequest_o *)0x0)) {
    pIVar12 = (Il2CppClass *)pUVar10->klass;
    uVar16 = (ulong)(pIVar12->_2).interface_offsets_count;
    if (uVar16 != 0) {
      pIVar3 = (pIVar12->_1).interfaceOffsets;
      lVar19 = 0;
      do {
        if (*(Il2CppClass **)((long)&pIVar3->interfaceType + lVar19) ==
            (Il2CppClass *)TypeInfo_System_IDisposable) {
          pVVar13 = (VirtualInvokeData *)&pIVar12->vtable[*(int *)((long)&pIVar3->offset + lVar19)].methodPtr;
          goto label_05e2b795;
        }
        lVar19 = lVar19 + 0x10;
      } while (uVar16 * 0x10 != lVar19);
    }
    pVVar13 = GetInterfaceInvokeDataFromVTableSlowPath
                        ((Il2CppObject *)pUVar10,(Il2CppClass *)TypeInfo_System_IDisposable,0);
label_05e2b795:
    (*pVVar13->methodPtr)(pUVar10,pVVar13->method);
  }
  pAVar4 = local_108;
  if (iVar9 == 0) {
    (local_108->fields).__1__state = -2;
    pvVar15 = il2cpp_codegen_get_runtime_metadata
                        (&
                         MethodInfo_Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskMethodBuilder_AottgApiTransportResponse_Set
                        );
    obj = (Il2CppObject *)(pAVar4->fields).__t__builder.fields.runnerPromise;
    if (obj == (Il2CppObject *)0x0) {
      (pAVar4->fields).__t__builder.fields.ex = pSStack_50;
      targetAddress = &(pAVar4->fields).__t__builder.fields.ex;
      goto label_05e2bd39;
    }
    pIVar12 = *(Il2CppClass **)((long)pvVar15 + 0x20);
    if (((pIVar12->_2).bitflags1 & 1) == 0) {
      pIVar12 = il2cpp_codegen_class_init_checked(pIVar12);
      pIVar12 = pIVar12->rgctx_data[1].klass;
      if (((pIVar12->_2).bitflags1 & 1) == 0) goto label_05e2bcdd;
label_05e2bcb8:
      pIVar2 = obj->klass;
      uVar1 = (pIVar2->_2).interface_offsets_count;
    }
    else {
      pIVar12 = pIVar12->rgctx_data[1].klass;
      if (((pIVar12->_2).bitflags1 & 1) != 0) goto label_05e2bcb8;
label_05e2bcdd:
      pIVar12 = il2cpp_codegen_class_init_checked(pIVar12);
      pIVar2 = obj->klass;
      uVar1 = (pIVar2->_2).interface_offsets_count;
    }
    if ((ulong)uVar1 != 0) {
      pIVar3 = (pIVar2->_1).interfaceOffsets;
      lVar19 = 0;
      do {
        if (*(Il2CppClass **)((long)&pIVar3->interfaceType + lVar19) == pIVar12) {
          pVVar13 = (VirtualInvokeData *)
                    &pIVar2->vtable[*(int *)((long)&pIVar3->offset + lVar19) + 3].methodPtr;
          goto label_05e2bd5a;
        }
        lVar19 = lVar19 + 0x10;
      } while ((ulong)uVar1 * 0x10 != lVar19);
    }
    pVVar13 = GetInterfaceInvokeDataFromVTableSlowPath(obj,pIVar12,3);
label_05e2bd5a:
    pMVar17 = pVVar13->method;
    goto label_05e2bd61;
  }
  if (iVar9 != 0xf) {
    return;
  }
  (local_108->fields).__1__state = -2;
  obj = (Il2CppObject *)(local_108->fields).__t__builder.fields.runnerPromise;
  if (obj == (Il2CppObject *)0x0) {
    (local_108->fields).__t__builder.fields.result =
         (ApplicationManagers_Api_AottgApiTransportResponse_o *)pSVar14;
    targetAddress = (System_Exception_o **)&(local_108->fields).__t__builder.fields.result;
label_05e2bd39:
    Il2CppCodeGenWriteBarrier(targetAddress);
    return;
  }
  pIVar12 = MethodInfo_Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskMethodBuilder_AottgApiTransportResponse_Set_7187540
            ->klass;
  if (((pIVar12->_2).bitflags1 & 1) == 0) {
    pIVar12 = il2cpp_codegen_class_init_checked(pIVar12);
    pIVar12 = pIVar12->rgctx_data[1].klass;
    if (((pIVar12->_2).bitflags1 & 1) == 0) goto label_05e2b8bb;
label_05e2b896:
    pIVar2 = obj->klass;
    uVar1 = (pIVar2->_2).interface_offsets_count;
  }
  else {
    pIVar12 = pIVar12->rgctx_data[1].klass;
    if (((pIVar12->_2).bitflags1 & 1) != 0) goto label_05e2b896;
label_05e2b8bb:
    pIVar12 = il2cpp_codegen_class_init_checked(pIVar12);
    pIVar2 = obj->klass;
    uVar1 = (pIVar2->_2).interface_offsets_count;
  }
  if ((ulong)uVar1 != 0) {
    pIVar3 = (pIVar2->_1).interfaceOffsets;
    lVar19 = 0;
    do {
      if (*(Il2CppClass **)((long)&pIVar3->interfaceType + lVar19) == pIVar12) {
        pVVar13 = (VirtualInvokeData *)&pIVar2->vtable[*(int *)((long)&pIVar3->offset + lVar19) + 2].methodPtr
        ;
        goto label_05e2b932;
      }
      lVar19 = lVar19 + 0x10;
    } while ((ulong)uVar1 * 0x10 != lVar19);
  }
  pVVar13 = GetInterfaceInvokeDataFromVTableSlowPath(obj,pIVar12,2);
label_05e2b932:
  pMVar17 = pVVar13->method;
  pSStack_50 = pSVar14;
label_05e2bd61:
  (*pVVar13->methodPtr)(obj,pSStack_50,pMVar17);
  return;
}


// ApplicationManagers.Api.AottgUnityWebRequestTransport.<SendAsync>d__0$$SetStateMachine
// il2cpp: void ApplicationManagers_Api_AottgUnityWebRequestTransport__SendAsync_d__0__SetStateMachine (ApplicationManagers_Api_AottgUnityWebRequestTransport__SendAsync_d__0_o __this, System_Runtime_CompilerServices_IAsyncStateMachine_o* stateMachine, const MethodInfo* method);
// 0x5e2bdc0

void ApplicationManagers_Api_AottgUnityWebRequestTransport__SendAsync_d__0__SetStateMachine
               (ApplicationManagers_Api_AottgUnityWebRequestTransport__SendAsync_d__0_o *__this,
               System_Runtime_CompilerServices_IAsyncStateMachine_o *stateMachine,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07548519 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskMethodBuilder_AottgApiTransportResponse_Set_7187548
              );
    Il2CppMethodInitialized_07548519 = '\x01';
  }
  Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskMethodBuilder_object___SetStateMachine
            ((Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskMethodBuilder_T__o *)
             &(__this->fields).__t__builder,stateMachine,
             (MethodInfo_41D2380 *)
             MethodInfo_Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskMethodBuilder_AottgApiTransportResponse_Set_7187548
            );
  return;
}


// ApplicationManagers.Api.AottgUnityWebRequestTransport$$SendAsync
// il2cpp: Cysharp_Threading_Tasks_UniTask_AottgApiTransportResponse__o ApplicationManagers_Api_AottgUnityWebRequestTransport__SendAsync (ApplicationManagers_Api_AottgUnityWebRequestTransport_o* __this, ApplicationManagers_Api_AottgApiTransportRequest_o* request, System_Threading_CancellationToken_o cancellationToken, const MethodInfo* method);
// 0x5e2ae30

Cysharp_Threading_Tasks_UniTask_AottgApiTransportResponse__o *
ApplicationManagers_Api_AottgUnityWebRequestTransport__SendAsync
          (Cysharp_Threading_Tasks_UniTask_AottgApiTransportResponse__o *__return_storage_ptr__,
          ApplicationManagers_Api_AottgUnityWebRequestTransport_o *__this,
          ApplicationManagers_Api_AottgApiTransportRequest_o *request,
          System_Threading_CancellationToken_o cancellationToken,MethodInfo *method)

{
  MethodInfo *method_00;
  ApplicationManagers_Api_AottgUnityWebRequestTransport__SendAsync_d__0_Fields local_98;
  Cysharp_Threading_Tasks_IUniTaskSource_T__o *local_40;
  ApplicationManagers_Api_AottgApiTransportResponse_o *pAStack_38;
  undefined8 local_30;
  
  if (Il2CppMethodInitialized_07548516 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskMethodBuilder_AottgApiTransportResponse_Cre
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskMethodBuilder_AottgApiTransportResponse_Sta
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskMethodBuilder_AottgApiTransportResponse_get
              );
    Il2CppMethodInitialized_07548516 = '\x01';
  }
  local_98.__1__state = 0;
  local_98._4_4_ = 0;
  local_98.__u__1.fields.task.fields.result = (Il2CppObject *)0x0;
  local_98.__u__1.fields.task.fields.token = 0;
  local_98.__u__1.fields.task.fields._18_6_ = 0;
  local_98._unityRequest_5__2 = (UnityEngine_Networking_UnityWebRequest_o *)0x0;
  local_98.__u__1.fields.task.fields.source = (Cysharp_Threading_Tasks_IUniTaskSource_T__o *)0x0;
  local_98.request = (ApplicationManagers_Api_AottgApiTransportRequest_o *)0x0;
  local_98.cancellationToken.fields._source =
       (System_Threading_CancellationToken_Fields)(System_Threading_CancellationTokenSource_o *)0x0;
  local_98.__t__builder.fields.runnerPromise =
       (Cysharp_Threading_Tasks_CompilerServices_IStateMachineRunnerPromise_T__o *)0x0;
  local_98.__t__builder.fields.ex = (System_Exception_o *)0x0;
  local_98.__t__builder.fields.result = (ApplicationManagers_Api_AottgApiTransportResponse_o *)0x0;
  Il2CppCodeGenWriteBarrier((void **)&local_98.__t__builder);
  local_98.request = request;
  Il2CppCodeGenWriteBarrier(&local_98.request);
  method_00 = (MethodInfo *)0x0;
  local_98.cancellationToken =
       (System_Threading_CancellationToken_o)
       (System_Threading_CancellationToken_o)cancellationToken.fields._source;
  Il2CppCodeGenWriteBarrier((void **)&local_98.cancellationToken);
  local_98.__1__state = -1;
  if ((
      MethodInfo_Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskMethodBuilder_AottgApiTransportResponse_Sta
      ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
    il2cpp_codegen_rgctx_method_init
              (
              MethodInfo_Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskMethodBuilder_AottgApiTransportResponse_Sta
              );
  }
  ApplicationManagers_Api_AottgUnityWebRequestTransport__SendAsync_d__0__MoveNext
            ((ApplicationManagers_Api_AottgUnityWebRequestTransport__SendAsync_d__0_o *)&local_98,method_00);
  il2cpp_runtime_helper_042dddd0(&local_40,&local_98.__t__builder,
               MethodInfo_Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskMethodBuilder_AottgApiTransportResponse_get
              );
  *(undefined8 *)&(__return_storage_ptr__->fields).token = local_30;
  (__return_storage_ptr__->fields).source = local_40;
  (__return_storage_ptr__->fields).result = pAStack_38;
  return __return_storage_ptr__;
}


// ApplicationManagers.Api.AottgUnityWebRequestTransport$$BuildResponse
// il2cpp: ApplicationManagers_Api_AottgApiTransportResponse_o* ApplicationManagers_Api_AottgUnityWebRequestTransport__BuildResponse (UnityEngine_Networking_UnityWebRequest_o* unityRequest, System_String_o* textOverride, System_String_o* errorOverride, System_Nullable_long__o statusCodeOverride, const MethodInfo* method);
// 0x5e2af40
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5e2afe7: jmp 0x5e2afff

ApplicationManagers_Api_AottgApiTransportResponse_o *
ApplicationManagers_Api_AottgUnityWebRequestTransport__BuildResponse
          (UnityEngine_Networking_UnityWebRequest_o *unityRequest,System_String_o *textOverride,
          System_String_o *errorOverride,System_Nullable_long__o statusCodeOverride,MethodInfo *method)

{
  int32_t iVar1;
  ApplicationManagers_Api_AottgApiTransportResponse_o *__this;
  int64_t iVar2;
  UnityEngine_Networking_DownloadHandler_o *pUVar3;
  int iVar4;
  bool local_34;
  
  if (Il2CppMethodInitialized_07548517 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_Api_AottgApiTransportResponse);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_long_GetValueOrDefault);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_long_get_HasValue);
    Il2CppMethodInitialized_07548517 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_ApplicationManagers_Api_AottgApiTransportResponse);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  if ((unityRequest == (UnityEngine_Networking_UnityWebRequest_o *)0x0) ||
     (iVar1 = UnityEngine_Networking_UnityWebRequest__get_result(unityRequest,(MethodInfo *)0x0),
     __this == (ApplicationManagers_Api_AottgApiTransportResponse_o *)0x0)) {
label_05e2b08b:
    ThrowNullReferenceException();
  }
  iVar4 = 0;
  if (iVar1 - 2U < 3) {
    iVar4 = iVar1 + -1;
  }
  (__this->fields).Result = iVar4;
  local_34 = statusCodeOverride.fields.hasValue;
  if (local_34 == false) {
    iVar2 = UnityEngine_Networking_UnityWebRequest__get_responseCode(unityRequest,(MethodInfo *)0x0);
    (__this->fields).StatusCode = iVar2;
  }
  else {
    (__this->fields).StatusCode = statusCodeOverride.fields.value;
  }
  if (textOverride == (System_String_o *)0x0) {
    pUVar3 = UnityEngine_Networking_UnityWebRequest__get_downloadHandler(unityRequest,(MethodInfo *)0x0);
    if (pUVar3 == (UnityEngine_Networking_DownloadHandler_o *)0x0) {
      textOverride = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
    }
    else {
      pUVar3 = UnityEngine_Networking_UnityWebRequest__get_downloadHandler(unityRequest,(MethodInfo *)0x0);
      if (pUVar3 == (UnityEngine_Networking_DownloadHandler_o *)0x0) goto label_05e2b08b;
      textOverride = UnityEngine_Networking_DownloadHandler__get_text(pUVar3,(MethodInfo *)0x0);
    }
  }
  (__this->fields).Text = textOverride;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Text);
  if (errorOverride == (System_String_o *)0x0) {
    errorOverride = UnityEngine_Networking_UnityWebRequest__get_error(unityRequest,(MethodInfo *)0x0);
  }
  (__this->fields).Error = errorOverride;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Error);
  return __this;
}


// ApplicationManagers.Api.AottgUnityWebRequestTransport$$ConvertResult
// il2cpp: int32_t ApplicationManagers_Api_AottgUnityWebRequestTransport__ConvertResult (int32_t result, const MethodInfo* method);
// 0x5e2b090

int32_t ApplicationManagers_Api_AottgUnityWebRequestTransport__ConvertResult
                  (int32_t result,MethodInfo *method)

{
  int32_t iVar1;
  
  iVar1 = 0;
  if (result - 2U < 3) {
    iVar1 = result + -1;
  }
  return iVar1;
}


// ApplicationManagers.Api.AottgUnityWebRequestTransport$$.ctor
// il2cpp: void ApplicationManagers_Api_AottgUnityWebRequestTransport___ctor (ApplicationManagers_Api_AottgUnityWebRequestTransport_o* __this, const MethodInfo* method);
// 0x5e29270

void ApplicationManagers_Api_AottgUnityWebRequestTransport___ctor
               (ApplicationManagers_Api_AottgUnityWebRequestTransport_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


