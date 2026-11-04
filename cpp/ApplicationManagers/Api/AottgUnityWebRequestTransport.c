// Type: ApplicationManagers.Api.AottgUnityWebRequestTransport
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/ApplicationManagers.Api/AottgUnityWebRequestTransport.cs
// Prior real C# source: none
// --------------------------------

// ApplicationManagers.Api.AottgUnityWebRequestTransport.<SendAsync>d__0$$MoveNext
// il2cpp: void ApplicationManagers_Api_AottgUnityWebRequestTransport__SendAsync_d__0__MoveNext (ApplicationManagers_Api_AottgUnityWebRequestTransport__SendAsync_d__0_o __this, const MethodInfo* method);
// 0x182373800
// eh: try 0x182373944..0x1823739c9 -> pad 0x183340ba0 catch Il2CppExceptionWrapper [managed catch: TypeInfo_System_Exception]
// eh: try 0x1823739c9..0x182373e4a -> pad 0x183340b70 (+6 call sites) catch Il2CppExceptionWrapper
// eh: try 0x182373e4a..0x182373e6e -> pad 0x183340ba0 catch Il2CppExceptionWrapper [managed catch: TypeInfo_System_Exception]
// eh: try 0x182373eae..0x182373f77 -> pad 0x183340a60 catch Il2CppExceptionWrapper
// eh: try 0x182373f77..0x182373f9b -> pad 0x183340ba0 catch Il2CppExceptionWrapper [managed catch: TypeInfo_System_Exception]
// eh: try 0x182373fdc..0x182374123 -> pad 0x183340b70 catch Il2CppExceptionWrapper
// eh: try 0x182374123..0x18237421b -> pad 0x183340ba0 (+2 call sites) catch Il2CppExceptionWrapper [managed catch: TypeInfo_System_Exception]
// eh: try 0x18237421b..0x182374284 -> pad 0x183340b70 (+4 call sites) catch Il2CppExceptionWrapper
// eh: try 0x182374284..0x18237428b -> pad 0x183340ba0 catch Il2CppExceptionWrapper [managed catch: TypeInfo_System_Exception]
// asm: 280 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x182373b7e: nop 
// asm:   0x182373bdb: nop 
// asm:   0x182373c2d: mov rax, qword ptr [rsp + 0x28]
// asm:   0x182373c32: cmp dword ptr [rax], 0
// asm:   0x182373c35: jge 0x182373c48
// asm:   0x182373c37: mov rdx, qword ptr [rip + 0x1d4a662]  ; MethodInfo_System_Collections_Generic_Dictionary_Enumerator_string_string_Dispose
// asm:   0x182373c3e: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x182373c43: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x182373c48: mov rcx, qword ptr [rsp + 0x20]
// asm:   0x182373c4d: test rcx, rcx
// asm:   0x182373c50: jne 0x182374236
// asm:   0x182373c56: xor edi, edi
// asm:   0x182373c58: mov r15, qword ptr [rsp + 0x60]
// asm:   0x182373c5d: mov r12, qword ptr [rsp + 0x58]
// asm:   0x182373c62: jmp 0x182373bdc
// asm:   0x182373e6d: nop 
// asm:   0x182373fa0: mov rax, qword ptr [rsp + 0x168]
// asm:   0x182373fa8: test rax, rax
// asm:   0x182373fab: je 0x18237427e
// asm:   0x182373fb1: mov rsi, qword ptr [rax + 0x90]
// asm:   0x182373fb8: mov r14, qword ptr [rax + 0xa8]
// asm:   0x182373fbf: mov r15, qword ptr [rax + 0xa0]
// asm:   0x182373fc6: mov rbx, qword ptr [rax + 0xb0]
// asm:   0x182373fcd: xorps xmm0, xmm0
// asm:   0x182373fd0: movups xmmword ptr [rsp + 0x20], xmm0
// asm:   0x182373fd5: lea rcx, [rip + 0x1d489fc]  ; MethodInfo_System_Nullable_long_ctor
// asm:   0x182373fdc: call 0x180416ea0  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x182373fe1: mov r8, rax
// asm:   0x182373fe4: mov rdx, rbx
// asm:   0x182373fe7: lea rcx, [rsp + 0x20]
// asm:   0x182373fec: call 0x180ae2650  ; System_Nullable_DateTime____ctor()
// asm:   0x182373ff1: movzx r13d, byte ptr [rsp + 0x20]
// asm:   0x182373ff7: mov r12, qword ptr [rsp + 0x28]
// asm:   0x182373ffc: cmp byte ptr [rip + 0x1fd3a5a], 0
// asm:   0x182374003: jne 0x182374030
// asm:   0x182374005: lea rcx, [rip + 0x1d4c32c]  ; TypeInfo_ApplicationManagers_Api_AottgApiTransportResponse
// asm:   0x18237400c: call 0x180416e80  ; il2cpp_codegen_initialize_runtime_metadata()
// asm:   0x182374011: lea rcx, [rip + 0x1d48aa0]  ; MethodInfo_System_Nullable_long_GetValueOrDefault
// asm:   0x182374018: call 0x180416e80  ; il2cpp_codegen_initialize_runtime_metadata()
// asm:   0x18237401d: lea rcx, [rip + 0x1d48b74]  ; MethodInfo_System_Nullable_long_get_HasValue
// asm:   0x182374024: call 0x180416e80  ; il2cpp_codegen_initialize_runtime_metadata()
// asm:   0x182374029: mov byte ptr [rip + 0x1fd3a2d], 1
// asm:   0x182374030: mov rcx, qword ptr [rip + 0x1d4c301]  ; TypeInfo_ApplicationManagers_Api_AottgApiTransportResponse
// asm:   0x182374037: call 0x1804170d0  ; il2cpp_runtime_helper_1804170d0()
// asm:   0x18237403c: mov rbx, rax
// asm:   0x18237403f: xor edx, edx
// asm:   0x182374041: mov rcx, rax
// asm:   0x182374044: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x182374049: test rsi, rsi
// asm:   0x18237404c: je 0x182374279
// asm:   0x182374052: xor edx, edx
// asm:   0x182374054: mov rcx, rsi
// asm:   0x182374057: call 0x18330cc50  ; UnityEngine_Networking_UnityWebRequest__get_result()
// asm:   0x18237405c: lea ecx, [rax - 2]
// asm:   0x18237405f: test ecx, ecx
// asm:   0x182374061: je 0x18237407f
// asm:   0x182374063: sub ecx, 1
// asm:   0x182374066: je 0x182374078
// asm:   0x182374068: cmp ecx, 1
// asm:   0x18237406b: je 0x182374071
// asm:   0x18237406d: xor edi, edi
// asm:   0x18237406f: jmp 0x182374084
// asm:   0x182374071: mov edi, 3
// asm:   0x182374076: jmp 0x182374084
// asm:   0x182374078: mov edi, 2
// asm:   0x18237407d: jmp 0x182374084
// asm:   0x18237407f: mov edi, 1
// asm:   0x182374084: test rbx, rbx
// asm:   0x182374087: je 0x182374274
// asm:   0x18237408d: mov dword ptr [rbx + 0x10], edi
// asm:   0x182374090: test r13b, r13b
// asm:   0x182374093: jne 0x1823740a2
// asm:   0x182374095: xor edx, edx
// asm:   0x182374097: mov rcx, rsi
// asm:   0x18237409a: call 0x18330cbb0  ; UnityEngine_Networking_UnityWebRequest__get_responseCode()
// asm:   0x18237409f: mov r12, rax
// asm:   0x1823740a2: mov qword ptr [rbx + 0x18], r12
// asm:   0x1823740a6: test r14, r14
// asm:   0x1823740a9: jne 0x1823740ed
// asm:   0x1823740ab: xor edx, edx
// asm:   0x1823740ad: mov rcx, rsi
// asm:   0x1823740b0: call 0x181536bf0  ; UnityEngine_UIElements_PanelSettings__get_themeStyleSheet()
// asm:   0x1823740b5: test rax, rax
// asm:   0x1823740b8: je 0x1823740dc
// asm:   0x1823740ba: xor edx, edx
// asm:   0x1823740bc: mov rcx, rsi
// asm:   0x1823740bf: call 0x181536bf0  ; UnityEngine_UIElements_PanelSettings__get_themeStyleSheet()
// asm:   0x1823740c4: test rax, rax
// asm:   0x1823740c7: je 0x18237426f
// asm:   0x1823740cd: xor edx, edx
// asm:   0x1823740cf: mov rcx, rax
// asm:   0x1823740d2: call 0x181b53230  ; System_Type__InternalGetNameIfAvailable()
// asm:   0x1823740d7: mov r14, rax
// asm:   0x1823740da: jmp 0x1823740ed
// asm:   0x1823740dc: mov rax, qword ptr [rip + 0x1fe0d6d]
// asm:   0x1823740e3: mov rcx, qword ptr [rax + 0xb8]
// asm:   0x1823740ea: mov r14, qword ptr [rcx]
// asm:   0x1823740ed: mov qword ptr [rbx + 0x20], r14
// asm:   0x1823740f1: lea rcx, [rbx + 0x20]
// asm:   0x1823740f5: mov rdx, r14
// asm:   0x1823740f8: call 0x180416180  ; Il2CppCodeGenWriteBarrier()
// asm:   0x1823740fd: test r15, r15
// asm:   0x182374100: jne 0x18237410f
// asm:   0x182374102: xor edx, edx
// asm:   0x182374104: mov rcx, rsi
// asm:   0x182374107: call 0x18330c8e0  ; UnityEngine_Networking_UnityWebRequest__get_error()
// asm:   0x18237410c: mov r15, rax
// asm:   0x18237410f: mov qword ptr [rbx + 0x28], r15
// asm:   0x182374113: lea rcx, [rbx + 0x28]
// asm:   0x182374117: mov rdx, r15
// asm:   0x18237411a: call 0x180416180  ; Il2CppCodeGenWriteBarrier()
// asm:   0x18237411f: dec dword ptr [rsp + 0x48]
// asm:   0x182374123: mov rax, qword ptr [rsp + 0x58]
// asm:   0x182374128: cmp dword ptr [rax], 0
// asm:   0x18237412b: jge 0x18237414f
// asm:   0x18237412d: mov r8, qword ptr [rsp + 0x60]
// asm:   0x182374132: mov rax, qword ptr [r8]
// asm:   0x182374135: cmp qword ptr [rax + 0x30], 0
// asm:   0x18237413a: je 0x18237414f
// asm:   0x18237413c: xor ecx, ecx
// asm:   0x18237413e: mov r8, qword ptr [rax + 0x30]
// asm:   0x182374142: mov rdx, qword ptr [rip + 0x1d251b7]  ; TypeInfo_System_IDisposable
// asm:   0x182374149: call 0x180014840  ; InterfaceInvoker0_Invoke()
// asm:   0x18237414e: nop 
// asm:   0x18237419b: mov rax, qword ptr [rsp + 0x58]
// asm:   0x1823741a0: cmp dword ptr [rax], 0
// asm:   0x1823741a3: jge 0x1823741c6
// asm:   0x1823741a5: mov r8, qword ptr [rsp + 0x60]
// asm:   0x1823741aa: mov rax, qword ptr [r8]
// asm:   0x1823741ad: cmp qword ptr [rax + 0x30], 0
// asm:   0x1823741b2: je 0x1823741c6
// asm:   0x1823741b4: xor ecx, ecx
// asm:   0x1823741b6: mov r8, qword ptr [rax + 0x30]
// asm:   0x1823741ba: mov rdx, qword ptr [rip + 0x1d2513f]  ; TypeInfo_System_IDisposable
// asm:   0x1823741c1: call 0x180014840  ; InterfaceInvoker0_Invoke()
// asm:   0x1823741c6: mov rcx, qword ptr [rsp + 0x50]
// asm:   0x1823741cb: test rcx, rcx
// asm:   0x1823741ce: jne 0x182374284
// asm:   0x1823741d4: mov rax, qword ptr [rsp + 0x150]
// asm:   0x1823741dc: mov dword ptr [rax], 0xfffffffe
// asm:   0x1823741e2: mov rbx, qword ptr [rsp + 0x150]
// asm:   0x1823741ea: lea rcx, [rip + 0x1d831df]  ; MethodInfo_Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskMethodBuilder_AottgApiTransportResponse_Set
// asm:   0x1823741f1: call 0x180416ea0  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x1823741f6: mov r8, rax
// asm:   0x1823741f9: mov eax, dword ptr [rsp + 0x48]
// asm:   0x1823741fd: dec eax
// asm:   0x1823741ff: movsxd rdx, eax
// asm:   0x182374202: mov rdx, qword ptr [rsp + rdx*8 + 0x38]
// asm:   0x182374207: lea rcx, [rbx + 8]
// asm:   0x18237420b: call 0x180dda900  ; Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskMethodBuilder_bool___SetException()
// asm:   0x182374210: jmp 0x182374178
// asm:   0x182374236: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x18237426f: call 0x180417120  ; ThrowNullReferenceException()
// asm:   0x182374274: call 0x180417120  ; ThrowNullReferenceException()
// asm:   0x182374279: call 0x180417120  ; ThrowNullReferenceException()
// asm:   0x18237427e: call 0x180417120  ; ThrowNullReferenceException()
// asm:   0x182374284: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x18333fdb0: mov qword ptr [rsp + 0x10], rdx
// asm:   0x18333fdb5: push rbp
// asm:   0x18333fdb6: sub rsp, 0x20
// asm:   0x18333fdba: mov rbp, rdx
// asm:   0x18333fdbd: mov rax, qword ptr [rbp + 0xd0]
// asm:   0x18333fdc4: mov rcx, qword ptr [rax]
// asm:   0x18333fdc7: mov qword ptr [rbp + 0x20], rcx
// asm:   0x18333fdcb: movabs rax, 0
// asm:   0x18333fdd5: add rsp, 0x20
// asm:   0x18333fdd9: pop rbp
// asm:   0x18333fdda: ret 
// asm:   0x183340a60: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183340a65: push rbx
// asm:   0x183340a66: push rbp
// asm:   0x183340a67: push rdi
// asm:   0x183340a68: sub rsp, 0x20
// asm:   0x183340a6c: mov rbp, rdx
// asm:   0x183340a6f: mov rbx, qword ptr [rbp + 0x90]
// asm:   0x183340a76: mov rdi, qword ptr [rbx]
// asm:   0x183340a79: lea rcx, [rip + 0xd4c640]  ; TypeInfo_Cysharp_Threading_Tasks_UnityWebRequestException
// asm:   0x183340a80: call 0x180416ea0  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x183340a85: mov rdx, rax
// asm:   0x183340a88: test rdi, rdi
// asm:   0x183340a8b: je 0x183340b12
// asm:   0x183340a91: mov r8, qword ptr [rdi]
// asm:   0x183340a94: movzx ecx, byte ptr [rax + 0x130]
// asm:   0x183340a9b: cmp byte ptr [r8 + 0x130], cl
// asm:   0x183340aa2: jb 0x183340abd
// asm:   0x183340aa4: movzx eax, cl
// asm:   0x183340aa7: dec eax
// asm:   0x183340aa9: movsxd rcx, eax
// asm:   0x183340aac: mov rax, qword ptr [r8 + 0xc8]
// asm:   0x183340ab3: cmp qword ptr [rax + rcx*8], rdx
// asm:   0x183340ab7: jne 0x183340abd
// asm:   0x183340ab9: mov cl, 1
// asm:   0x183340abb: jmp 0x183340abf
// asm:   0x183340abd: xor cl, cl
// asm:   0x183340abf: xor eax, eax
// asm:   0x183340ac1: test cl, cl
// asm:   0x183340ac3: cmovne rax, rdi
// asm:   0x183340ac7: test rax, rax
// asm:   0x183340aca: je 0x183340b12
// asm:   0x183340acc: mov qword ptr [rbp + 0x168], rax
// asm:   0x183340ad3: mov rdi, qword ptr [rbp + 0x150]
// asm:   0x183340ada: lea rcx, [rip + 0xd9abf7]  ; TypeInfo_System_Threading_CancellationToken
// asm:   0x183340ae1: call 0x180416ea0  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x183340ae6: cmp dword ptr [rax + 0xe4], 0
// asm:   0x183340aed: jne 0x183340af7
// asm:   0x183340aef: mov rcx, rax
// asm:   0x183340af2: call 0x1804171c0  ; il2cpp_codegen_runtime_class_init()
// asm:   0x183340af7: xor edx, edx
// asm:   0x183340af9: lea rcx, [rdi + 0x28]
// asm:   0x183340afd: call 0x181b96f60  ; System_Threading_CancellationToken__get_IsCancellationRequested()
// asm:   0x183340b02: xor ecx, ecx
// asm:   0x183340b04: test al, al
// asm:   0x183340b06: sete cl
// asm:   0x183340b09: xor eax, eax
// asm:   0x183340b0b: test ecx, ecx
// asm:   0x183340b0d: setne al
// asm:   0x183340b10: jmp 0x183340b14
// asm:   0x183340b12: xor eax, eax
// asm:   0x183340b14: test eax, eax
// asm:   0x183340b16: setne al
// asm:   0x183340b19: test al, al
// asm:   0x183340b1b: je 0x183340b3f
// asm:   0x183340b1d: movsxd rcx, dword ptr [rbp + 0x48]
// asm:   0x183340b21: mov rax, qword ptr [rbx]
// asm:   0x183340b24: mov qword ptr [rbp + rcx*8 + 0x38], rax
// asm:   0x183340b29: inc dword ptr [rbp + 0x48]
// asm:   0x183340b2c: movabs rax, 0
// asm:   0x183340b36: jmp 0x183340b5d
// asm:   0x183340b3f: mov rax, qword ptr [rbx]
// asm:   0x183340b42: mov qword ptr [rbp + 0x98], rax
// asm:   0x183340b49: lea rdx, [rip + 0xc9b438]
// asm:   0x183340b50: lea rcx, [rbp + 0x98]
// asm:   0x183340b57: call 0x1804ef7d0  ; _CxxThrowException()
// asm:   0x183340b5d: add rsp, 0x20
// asm:   0x183340b61: pop rdi
// asm:   0x183340b62: pop rbp
// asm:   0x183340b63: pop rbx
// asm:   0x183340b64: ret 
// asm:   0x183340b70: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183340b75: push rbp
// asm:   0x183340b76: sub rsp, 0x20
// asm:   0x183340b7a: mov rbp, rdx
// asm:   0x183340b7d: mov rax, qword ptr [rbp + 0xd8]
// asm:   0x183340b84: mov rcx, qword ptr [rax]
// asm:   0x183340b87: mov qword ptr [rbp + 0x50], rcx
// asm:   0x183340b8b: movabs rax, 0
// asm:   0x183340b95: add rsp, 0x20
// asm:   0x183340b99: pop rbp
// asm:   0x183340b9a: ret 
// asm:   0x183340ba0: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183340ba5: push rbx
// asm:   0x183340ba6: push rbp
// asm:   0x183340ba7: push rdi
// asm:   0x183340ba8: sub rsp, 0x20
// asm:   0x183340bac: mov rbp, rdx
// asm:   0x183340baf: mov rdi, qword ptr [rbp + 0xe0]
// asm:   0x183340bb6: mov rax, qword ptr [rdi]
// asm:   0x183340bb9: mov rbx, qword ptr [rax]
// asm:   0x183340bbc: lea rcx, [rip + 0xd38395]  ; TypeInfo_System_Exception
// asm:   0x183340bc3: call 0x180416ea0  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x183340bc8: mov rcx, rax
// asm:   0x183340bcb: mov rdx, rbx
// asm:   0x183340bce: call 0x180416950  ; il2cpp_codegen_class_is_assignable_from()
// asm:   0x183340bd3: test al, al
// asm:   0x183340bd5: mov rax, qword ptr [rdi]
// asm:   0x183340bd8: je 0x183340bf2
// asm:   0x183340bda: movsxd rcx, dword ptr [rbp + 0x48]
// asm:   0x183340bde: mov qword ptr [rbp + rcx*8 + 0x38], rax
// asm:   0x183340be3: inc dword ptr [rbp + 0x48]
// asm:   0x183340be6: movabs rax, 0
// asm:   0x183340bf0: jmp 0x183340c0d
// asm:   0x183340bf2: mov qword ptr [rbp + 0xa0], rax
// asm:   0x183340bf9: lea rdx, [rip + 0xc9b388]
// asm:   0x183340c00: lea rcx, [rbp + 0xa0]
// asm:   0x183340c07: call 0x1804ef7d0  ; _CxxThrowException()
// asm:   0x183340c0d: add rsp, 0x20
// asm:   0x183340c11: pop rdi
// asm:   0x183340c12: pop rbp
// asm:   0x183340c13: pop rbx
// asm:   0x183340c14: ret 

void ApplicationManagers_Api_AottgUnityWebRequestTransport__SendAsync_d__0__MoveNext
               (ApplicationManagers_Api_AottgUnityWebRequestTransport__SendAsync_d__0_o *__this,
               MethodInfo *method)

{
  ApplicationManagers_Api_AottgApiTransportRequest_o *pAVar1;
  System_String_o *method_00;
  System_Collections_Generic_Dictionary_string__string__o *__this_00;
  Il2CppObject *obj;
  System_Collections_Generic_Dictionary_TKey__TValue__o *pSVar2;
  MethodInfo *pMVar3;
  ApplicationManagers_Api_AottgUnityWebRequestTransport__SendAsync_d__0_o *stateMachine;
  bool bVar4;
  uint32_t value;
  int32_t iVar5;
  UnityEngine_Networking_UnityWebRequest_o *pUVar6;
  UnityEngine_Networking_DownloadHandlerBuffer_o *__this_01;
  System_Text_Encoding_o *pSVar7;
  System_Byte_array *data;
  UnityEngine_Networking_UploadHandlerRaw_o *__this_02;
  UnityEngine_Networking_UnityWebRequestAsyncOperation_o *asyncOperation;
  Cysharp_Threading_Tasks_UniTask_UnityWebRequest__o *pCVar8;
  ApplicationManagers_Api_AottgApiTransportResponse_o *result;
  int64_t iVar9;
  uint64_t uVar10;
  UnityEngine_Networking_DownloadHandler_o *__this_03;
  System_String_o *pSVar11;
  Il2CppClass *pIVar12;
  void *pvVar13;
  int32_t iVar14;
  ApplicationManagers_Api_AottgUnityWebRequestTransport__SendAsync_d__0_o *local_res8 [2];
  Il2CppObject local_res18;
  undefined1 local_128 [40];
  undefined4 local_100;
  undefined8 local_f8;
  Il2CppObject *local_f0;
  ApplicationManagers_Api_AottgUnityWebRequestTransport__SendAsync_d__0_o **local_e8;
  undefined1 local_e0 [8];
  UnityEngine_Networking_UnityWebRequest_o *pUStack_d8;
  System_String_o *local_d0;
  System_String_o *pSStack_c8;
  int32_t local_c0;
  undefined4 uStack_bc;
  undefined1 local_a0 [8];
  UnityEngine_Networking_UnityWebRequest_o *pUStack_98;
  System_String_o *local_90;
  System_String_o *pSStack_88;
  undefined8 local_80;
  
  local_res8[0] = __this;
  if (Il2CppMethodInitialized_184347a5e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskMethodBuilder_AottgApiTransportResponse_Awa
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskMethodBuilder_AottgApiTransportResponse_Set_40f74a8
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
    Il2CppMethodInitialized_184347a5e = '\x01';
  }
  iVar14 = 0;
  local_a0 = (undefined1  [8])0x0;
  pUStack_98 = (UnityEngine_Networking_UnityWebRequest_o *)0x0;
  local_90 = (System_String_o *)0x0;
  pSStack_88 = (System_String_o *)0x0;
  local_80._0_4_ = 0;
  local_80._4_4_ = 0;
  local_res18.monitor = (void *)0x0;
  local_100 = 0;
  local_res18.klass._0_4_ = (local_res8[0]->fields).__1__state;
  if ((int)local_res18.klass != 0) {
    pAVar1 = (local_res8[0]->fields).request;
    if (pAVar1 == (ApplicationManagers_Api_AottgApiTransportRequest_o *)0x0) {
      ThrowNullReferenceException();
    }
    pSVar11 = (pAVar1->fields).Url;
    method_00 = (pAVar1->fields).Method;
    pUVar6 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Networking_UnityWebRequest);
    UnityEngine_Networking_UnityWebRequest___ctor_330c7c0(pUVar6,pSVar11,method_00,(MethodInfo *)0x0);
    (local_res8[0]->fields)._unityRequest_5__2 = pUVar6;
    Il2CppCodeGenWriteBarrier(&(local_res8[0]->fields)._unityRequest_5__2,pUVar6);
  }
  local_f8 = 0;
  local_f0 = &local_res18;
  local_e8 = local_res8;
  if ((int)local_res18.klass != 0) {
    pUVar6 = (local_res8[0]->fields)._unityRequest_5__2;
    __this_01 = il2cpp_codegen_object_new
                          ((Il2CppClass *)TypeInfo_UnityEngine_Networking_DownloadHandlerBuffer);
    UnityEngine_Networking_DownloadHandlerBuffer___ctor(__this_01,(MethodInfo *)0x0);
    if (pUVar6 == (UnityEngine_Networking_UnityWebRequest_o *)0x0) {
      ThrowNullReferenceException();
    }
    UnityEngine_Networking_UnityWebRequest__set_downloadHandler
              (pUVar6,(UnityEngine_Networking_DownloadHandler_o *)__this_01,(MethodInfo *)0x0);
    pAVar1 = (local_res8[0]->fields).request;
    if (pAVar1 == (ApplicationManagers_Api_AottgApiTransportRequest_o *)0x0) {
      ThrowNullReferenceException();
    }
    bVar4 = System_String__IsNullOrEmpty((pAVar1->fields).JsonBody,(MethodInfo *)0x0);
    if (!bVar4) {
      pUVar6 = (local_res8[0]->fields)._unityRequest_5__2;
      pSVar7 = System_Text_Encoding__get_UTF8((MethodInfo *)0x0);
      pAVar1 = (local_res8[0]->fields).request;
      if (pAVar1 == (ApplicationManagers_Api_AottgApiTransportRequest_o *)0x0) {
        ThrowNullReferenceException();
      }
      if (pSVar7 == (System_Text_Encoding_o *)0x0) {
        ThrowNullReferenceException();
      }
      data = (*(pSVar7->klass->vtable)._18_GetBytes.methodPtr)
                       (pSVar7,(pAVar1->fields).JsonBody,(pSVar7->klass->vtable)._18_GetBytes.method);
      __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Networking_UploadHandlerRaw);
      UnityEngine_Networking_UploadHandlerRaw___ctor(__this_02,data,(MethodInfo *)0x0);
      if (pUVar6 == (UnityEngine_Networking_UnityWebRequest_o *)0x0) {
        ThrowNullReferenceException();
      }
      UnityEngine_Networking_UnityWebRequest__set_uploadHandler
                (pUVar6,(UnityEngine_Networking_UploadHandler_o *)__this_02,(MethodInfo *)0x0);
    }
    pAVar1 = (local_res8[0]->fields).request;
    if (pAVar1 == (ApplicationManagers_Api_AottgApiTransportRequest_o *)0x0) {
      ThrowNullReferenceException();
    }
    if ((pAVar1->fields).TimeoutSeconds.fields.hasValue != false) {
      pUVar6 = (local_res8[0]->fields)._unityRequest_5__2;
      value = System_Nullable_uint___get_Value
                        ((System_Nullable_uint__o *)&(pAVar1->fields).TimeoutSeconds,
                         (MethodInfo_AE29B0 *)MethodInfo_System_Nullable_int_get_Value);
      if (pUVar6 == (UnityEngine_Networking_UnityWebRequest_o *)0x0) {
        ThrowNullReferenceException();
      }
      UnityEngine_Networking_UnityWebRequest__set_timeout(pUVar6,value,(MethodInfo *)0x0);
    }
    pAVar1 = (local_res8[0]->fields).request;
    if (pAVar1 == (ApplicationManagers_Api_AottgApiTransportRequest_o *)0x0) {
      ThrowNullReferenceException();
    }
    __this_00 = (pAVar1->fields).Headers;
    if (__this_00 == (System_Collections_Generic_Dictionary_string__string__o *)0x0) {
      ThrowNullReferenceException();
    }
    System_Collections_Generic_Dictionary_PhotonNetwork_RaiseEventBatch__object___GetEnumerator
              ((System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)local_e0,
               (System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
               (MethodInfo_13C1150 *)
               MethodInfo_System_Collections_Generic_Dictionary_string_string_GetEnumerator);
    local_a0 = local_e0;
    pUStack_98 = pUStack_d8;
    local_90 = local_d0;
    pSStack_88 = pSStack_c8;
    local_80._0_4_ = local_c0;
    local_80._4_4_ = uStack_bc;
    local_128._0_8_ = (Cysharp_Threading_Tasks_IUniTaskSource_T__o *)0x0;
    local_128._8_8_ = &local_res18;
    local_128._16_8_ = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_a0;
    while (bVar4 = System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext
                             ((System_Collections_Generic_Dictionary_Enumerator_object__object__o *)local_a0,
                              (MethodInfo_1585360 *)
                              MethodInfo_System_Collections_Generic_Dictionary_Enumerator_string_string_MoveNext
                             ), bVar4) {
      pUVar6 = (local_res8[0]->fields)._unityRequest_5__2;
      if (pUVar6 == (UnityEngine_Networking_UnityWebRequest_o *)0x0) {
        ThrowNullReferenceException();
      }
      UnityEngine_Networking_UnityWebRequest__SetRequestHeader(pUVar6,local_90,pSStack_88,(MethodInfo *)0x0);
    }
    if ((int)local_res18.klass < 0) {
      System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose
                ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_a0,
                 MethodInfo_System_Collections_Generic_Dictionary_Enumerator_string_string_Dispose);
    }
  }
  if ((int)local_res18.klass == 0) {
    local_128._0_8_ = (local_res8[0]->fields).__u__1.fields.task.fields.source;
    local_128._8_8_ = (local_res8[0]->fields).__u__1.fields.task.fields.result;
    local_128._16_8_ = *(undefined8 *)&(local_res8[0]->fields).__u__1.fields.task.fields.token;
    (local_res8[0]->fields).__u__1.fields.task.fields.source =
         (Cysharp_Threading_Tasks_IUniTaskSource_T__o *)0x0;
    (local_res8[0]->fields).__u__1.fields.task.fields.result = (Il2CppObject *)0x0;
    *(undefined8 *)&(local_res8[0]->fields).__u__1.fields.task.fields.token = 0;
    local_res18.klass._0_4_ = -1;
    (local_res8[0]->fields).__1__state = -1;
  }
  else {
    pUVar6 = (local_res8[0]->fields)._unityRequest_5__2;
    if (pUVar6 == (UnityEngine_Networking_UnityWebRequest_o *)0x0) {
      ThrowNullReferenceException();
    }
    asyncOperation = UnityEngine_Networking_UnityWebRequest__SendWebRequest(pUVar6,(MethodInfo *)0x0);
    pCVar8 = Cysharp_Threading_Tasks_UnityAsyncExtensions__WithCancellation_294d560
                       ((Cysharp_Threading_Tasks_UniTask_UnityWebRequest__o *)local_e0,asyncOperation,
                        (System_Threading_CancellationToken_o)
                        (local_res8[0]->fields).cancellationToken.fields._source,(MethodInfo *)0x0);
    pSVar2 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)(pCVar8->fields).source;
    pUVar6 = (pCVar8->fields).result;
    pSVar11 = *(System_String_o **)&(pCVar8->fields).token;
    local_e0 = (undefined1  [8])0x0;
    pUStack_d8 = (UnityEngine_Networking_UnityWebRequest_o *)0x0;
    local_d0 = (System_String_o *)0x0;
    if (((MethodInfo_Cysharp_Threading_Tasks_UniTask_UnityWebRequest_GetAwaiter->klass->_2).bitflags1 & 1) ==
        0) {
      il2cpp_codegen_class_init_checked
                (MethodInfo_Cysharp_Threading_Tasks_UniTask_UnityWebRequest_GetAwaiter->klass);
    }
    local_e0 = (undefined1  [8])pSVar2;
    pUStack_d8 = pUVar6;
    local_d0 = pSVar11;
    Il2CppCodeGenWriteBarrier((void **)local_e0,(void *)0x0);
    local_128._0_8_ = local_e0;
    local_128._8_8_ = pUStack_d8;
    local_128._16_8_ = local_d0;
    bVar4 = Cysharp_Threading_Tasks_UniTask_Awaiter_Vector2___get_IsCompleted
                      ((Cysharp_Threading_Tasks_UniTask_Awaiter_T__o *)local_128,
                       (MethodInfo_EE1910 *)
                       MethodInfo_Cysharp_Threading_Tasks_UniTask_Awaiter_UnityWebRequest_get_IsCompleted);
    if (!bVar4) {
      local_res18.klass._0_4_ = 0;
      (local_res8[0]->fields).__1__state = 0;
      (local_res8[0]->fields).__u__1.fields.task.fields.source =
           (Cysharp_Threading_Tasks_IUniTaskSource_T__o *)local_128._0_8_;
      (local_res8[0]->fields).__u__1.fields.task.fields.result = (Il2CppObject *)local_128._8_8_;
      *(undefined8 *)&(local_res8[0]->fields).__u__1.fields.task.fields.token = local_128._16_8_;
      Il2CppCodeGenWriteBarrier((void **)&(local_res8[0]->fields).__u__1,(void *)0x0);
      stateMachine = local_res8[0];
      pMVar3 = 
      MethodInfo_Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskMethodBuilder_AottgApiTransportResponse_Awa
      ;
      if ((
          MethodInfo_Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskMethodBuilder_AottgApiTransportResponse_Awa
          ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
        il2cpp_codegen_rgctx_method_init
                  (
                  MethodInfo_Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskMethodBuilder_AottgApiTransportResponse_Awa
                  );
      }
      if ((stateMachine->fields).__t__builder.fields.runnerPromise ==
          (Cysharp_Threading_Tasks_CompilerServices_IStateMachineRunnerPromise_T__o *)0x0) {
        pIVar12 = (pMVar3->field7_0x38).rgctx_data[2].klass;
        if (((pIVar12->_2).bitflags1 & 1) == 0) {
          pIVar12 = il2cpp_codegen_class_init_checked(pIVar12);
        }
        if ((pIVar12->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init(pIVar12);
        }
        Cysharp_Threading_Tasks_CompilerServices_AsyncUniTask_AottgUnityWebRequestTransport__SendAsync_d__0__object___SetStateMachine
                  (stateMachine,
                   (Cysharp_Threading_Tasks_CompilerServices_IStateMachineRunnerPromise_T__o **)
                   &(stateMachine->fields).__t__builder,
                   (MethodInfo_DFF0B0 *)(pMVar3->field7_0x38).rgctx_data[1].method);
      }
      obj = (Il2CppObject *)(stateMachine->fields).__t__builder.fields.runnerPromise;
      if (obj != (Il2CppObject *)0x0) {
        pIVar12 = pMVar3->klass;
        if (((pIVar12->_2).bitflags1 & 1) == 0) {
          pIVar12 = il2cpp_codegen_class_init_checked(pIVar12);
        }
        pIVar12 = pIVar12->rgctx_data[1].klass;
        if (((pIVar12->_2).bitflags1 & 1) == 0) {
          pIVar12 = il2cpp_codegen_class_init_checked(pIVar12);
        }
        pvVar13 = InterfaceInvoker0_Invoke(0,pIVar12,obj);
        il2cpp_runtime_helper_1800142b0(local_128,pvVar13,(pMVar3->field7_0x38).rgctx_data[5].rgctxDataDummy);
        if (-1 < (int)local_res18.klass) {
          return;
        }
        if ((local_res8[0]->fields)._unityRequest_5__2 == (UnityEngine_Networking_UnityWebRequest_o *)0x0) {
          return;
        }
        InterfaceInvoker0_Invoke
                  (0,(Il2CppClass *)TypeInfo_System_IDisposable,
                   (Il2CppObject *)(local_res8[0]->fields)._unityRequest_5__2);
        return;
      }
      ThrowNullReferenceException();
    }
  }
  Cysharp_Threading_Tasks_UniTask_Awaiter_object___GetResult
            ((Cysharp_Threading_Tasks_UniTask_Awaiter_object__o *)local_128,
             (MethodInfo_EE11A0 *)MethodInfo_Cysharp_Threading_Tasks_UniTask_Awaiter_UnityWebRequest_GetResult
            );
  pUVar6 = (local_res8[0]->fields)._unityRequest_5__2;
  if (Il2CppMethodInitialized_184347a5d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_Api_AottgApiTransportResponse);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_long_GetValueOrDefault);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_long_get_HasValue);
    Il2CppMethodInitialized_184347a5d = '\x01';
  }
  result = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_ApplicationManagers_Api_AottgApiTransportResponse);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)result,(MethodInfo *)0x0);
  if (pUVar6 != (UnityEngine_Networking_UnityWebRequest_o *)0x0) {
    iVar5 = UnityEngine_Networking_UnityWebRequest__get_result(pUVar6,(MethodInfo *)0x0);
    if (iVar5 == 2) {
      iVar14 = 1;
    }
    else if (iVar5 == 3) {
      iVar14 = 2;
    }
    else if (iVar5 == 4) {
      iVar14 = 3;
    }
    if (result != (ApplicationManagers_Api_AottgApiTransportResponse_o *)0x0) {
      (result->fields).Result = iVar14;
      iVar9 = UnityEngine_Networking_UnityWebRequest__get_responseCode(pUVar6,(MethodInfo *)0x0);
      (result->fields).StatusCode = iVar9;
      uVar10 = UnityEngine_Networking_UnityWebRequest__get_downloadHandler
                         ((Unity_Collections_NativeArray_Enumerator_T__o *)pUVar6,(MethodInfo_1536BF0 *)0x0);
      if (uVar10 == 0) {
        pSVar11 = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
      }
      else {
        __this_03 = (UnityEngine_Networking_DownloadHandler_o *)
                    UnityEngine_Networking_UnityWebRequest__get_downloadHandler
                              ((Unity_Collections_NativeArray_Enumerator_T__o *)pUVar6,
                               (MethodInfo_1536BF0 *)0x0);
        if (__this_03 == (UnityEngine_Networking_DownloadHandler_o *)0x0) {
          ThrowNullReferenceException();
        }
        pSVar11 = UnityEngine_Networking_DownloadHandler__get_text(__this_03,(MethodInfo *)0x0);
      }
      (result->fields).Text = pSVar11;
      Il2CppCodeGenWriteBarrier(&(result->fields).Text,pSVar11);
      pSVar11 = UnityEngine_Networking_UnityWebRequest__get_error(pUVar6,(MethodInfo *)0x0);
      (result->fields).Error = pSVar11;
      Il2CppCodeGenWriteBarrier(&(result->fields).Error,pSVar11);
      if (((int)local_res18.klass < 0) &&
         ((local_res8[0]->fields)._unityRequest_5__2 != (UnityEngine_Networking_UnityWebRequest_o *)0x0)) {
        InterfaceInvoker0_Invoke
                  (0,(Il2CppClass *)TypeInfo_System_IDisposable,
                   (Il2CppObject *)(local_res8[0]->fields)._unityRequest_5__2);
      }
      (local_res8[0]->fields).__1__state = -2;
      Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskMethodBuilder_object___SetResult
                ((Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskMethodBuilder_T__o *)
                 &(local_res8[0]->fields).__t__builder,(Il2CppObject *)result,
                 (MethodInfo_DDA980 *)
                 MethodInfo_Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskMethodBuilder_AottgApiTransportResponse_Set_40f74a8
                );
      return;
    }
    ThrowNullReferenceException();
  }
  ThrowNullReferenceException();
}


// ApplicationManagers.Api.AottgUnityWebRequestTransport.<SendAsync>d__0$$SetStateMachine
// il2cpp: void ApplicationManagers_Api_AottgUnityWebRequestTransport__SendAsync_d__0__SetStateMachine (ApplicationManagers_Api_AottgUnityWebRequestTransport__SendAsync_d__0_o __this, System_Runtime_CompilerServices_IAsyncStateMachine_o* stateMachine, const MethodInfo* method);
// 0x182374290

void ApplicationManagers_Api_AottgUnityWebRequestTransport__SendAsync_d__0__SetStateMachine
               (ApplicationManagers_Api_AottgUnityWebRequestTransport__SendAsync_d__0_o *__this,
               System_Runtime_CompilerServices_IAsyncStateMachine_o *stateMachine,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184347a5f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskMethodBuilder_AottgApiTransportResponse_Set_40f7588
              );
    Il2CppMethodInitialized_184347a5f = '\x01';
  }
  System_Configuration_ConfigurationCollectionAttribute___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&(__this->fields).__t__builder,
             (MethodInfo *)stateMachine);
  return;
}


// ApplicationManagers.Api.AottgUnityWebRequestTransport$$SendAsync
// il2cpp: Cysharp_Threading_Tasks_UniTask_AottgApiTransportResponse__o ApplicationManagers_Api_AottgUnityWebRequestTransport__SendAsync (ApplicationManagers_Api_AottgUnityWebRequestTransport_o* __this, ApplicationManagers_Api_AottgApiTransportRequest_o* request, System_Threading_CancellationToken_o cancellationToken, const MethodInfo* method);
// 0x182368410

Cysharp_Threading_Tasks_UniTask_AottgApiTransportResponse__o *
ApplicationManagers_Api_AottgUnityWebRequestTransport__SendAsync
          (Cysharp_Threading_Tasks_UniTask_AottgApiTransportResponse__o *__return_storage_ptr__,
          ApplicationManagers_Api_AottgUnityWebRequestTransport_o *__this,
          ApplicationManagers_Api_AottgApiTransportRequest_o *request,
          System_Threading_CancellationToken_o cancellationToken,MethodInfo *method)

{
  MethodInfo *pMVar1;
  Cysharp_Threading_Tasks_IUniTaskSource_T__o *local_78;
  ApplicationManagers_Api_AottgApiTransportResponse_o *pAStack_70;
  undefined8 local_68;
  ApplicationManagers_Api_AottgUnityWebRequestTransport__SendAsync_d__0_Fields local_58;
  
  if (Il2CppMethodInitialized_184347a5c == '\0') {
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
    Il2CppMethodInitialized_184347a5c = '\x01';
  }
  local_58.__1__state = 0;
  local_58._4_4_ = 0;
  local_58.request = (ApplicationManagers_Api_AottgApiTransportRequest_o *)0x0;
  local_58.cancellationToken.fields._source =
       (System_Threading_CancellationToken_Fields)(System_Threading_CancellationTokenSource_o *)0x0;
  local_58._unityRequest_5__2 = (UnityEngine_Networking_UnityWebRequest_o *)0x0;
  local_58.__u__1.fields.task.fields.source = (Cysharp_Threading_Tasks_IUniTaskSource_T__o *)0x0;
  local_58.__u__1.fields.task.fields.result = (Il2CppObject *)0x0;
  local_58.__u__1.fields.task.fields.token = 0;
  local_58.__u__1.fields.task.fields._18_6_ = 0;
  local_58.__t__builder.fields.runnerPromise =
       (Cysharp_Threading_Tasks_CompilerServices_IStateMachineRunnerPromise_T__o *)0x0;
  local_58.__t__builder.fields.ex = (System_Exception_o *)0x0;
  local_58.__t__builder.fields.result = (ApplicationManagers_Api_AottgApiTransportResponse_o *)0x0;
  Il2CppCodeGenWriteBarrier((void **)&local_58.__t__builder,(void *)0x0);
  local_58.request = request;
  Il2CppCodeGenWriteBarrier(&local_58.request,request);
  local_58.cancellationToken.fields._source = cancellationToken.fields._source;
  Il2CppCodeGenWriteBarrier((void **)&local_58.cancellationToken,(void *)0x0);
  pMVar1 = 
  MethodInfo_Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskMethodBuilder_AottgApiTransportResponse_Sta;
  local_58.__1__state = -1;
  if ((
      MethodInfo_Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskMethodBuilder_AottgApiTransportResponse_Sta
      ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
    il2cpp_codegen_rgctx_method_init
              (
              MethodInfo_Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskMethodBuilder_AottgApiTransportResponse_Sta
              );
  }
  ApplicationManagers_Api_AottgUnityWebRequestTransport__SendAsync_d__0__MoveNext
            ((ApplicationManagers_Api_AottgUnityWebRequestTransport__SendAsync_d__0_o *)&local_58,
             (pMVar1->field7_0x38).rgctx_data[2].method);
  il2cpp_runtime_helper_180ddb120(&local_78,&local_58.__t__builder,
                MethodInfo_Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskMethodBuilder_AottgApiTransportResponse_get
               );
  (__return_storage_ptr__->fields).source = local_78;
  (__return_storage_ptr__->fields).result = pAStack_70;
  *(undefined8 *)&(__return_storage_ptr__->fields).token = local_68;
  return __return_storage_ptr__;
}


// ApplicationManagers.Api.AottgUnityWebRequestTransport$$BuildResponse
// il2cpp: ApplicationManagers_Api_AottgApiTransportResponse_o* ApplicationManagers_Api_AottgUnityWebRequestTransport__BuildResponse (UnityEngine_Networking_UnityWebRequest_o* unityRequest, System_String_o* textOverride, System_String_o* errorOverride, System_Nullable_long__o statusCodeOverride, const MethodInfo* method);
// 0x182368290

ApplicationManagers_Api_AottgApiTransportResponse_o *
ApplicationManagers_Api_AottgUnityWebRequestTransport__BuildResponse
          (UnityEngine_Networking_UnityWebRequest_o *unityRequest,System_String_o *textOverride,
          System_String_o *errorOverride,System_Nullable_long__o *statusCodeOverride,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  ApplicationManagers_Api_AottgApiTransportResponse_o *__this;
  int64_t iVar3;
  uint64_t uVar4;
  UnityEngine_Networking_DownloadHandler_o *__this_00;
  
  if (Il2CppMethodInitialized_184347a5d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_Api_AottgApiTransportResponse);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_long_GetValueOrDefault);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_long_get_HasValue);
    Il2CppMethodInitialized_184347a5d = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_ApplicationManagers_Api_AottgApiTransportResponse);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  if (unityRequest != (UnityEngine_Networking_UnityWebRequest_o *)0x0) {
    iVar2 = UnityEngine_Networking_UnityWebRequest__get_result(unityRequest,(MethodInfo *)0x0);
    if (iVar2 == 2) {
      iVar2 = 1;
    }
    else if (iVar2 == 3) {
      iVar2 = 2;
    }
    else if (iVar2 == 4) {
      iVar2 = 3;
    }
    else {
      iVar2 = 0;
    }
    if (__this != (ApplicationManagers_Api_AottgApiTransportResponse_o *)0x0) {
      bVar1 = (statusCodeOverride->fields).hasValue;
      (__this->fields).Result = iVar2;
      if (bVar1 == false) {
        iVar3 = UnityEngine_Networking_UnityWebRequest__get_responseCode(unityRequest,(MethodInfo *)0x0);
      }
      else {
        iVar3 = (statusCodeOverride->fields).value;
      }
      (__this->fields).StatusCode = iVar3;
      if (textOverride == (System_String_o *)0x0) {
        uVar4 = UnityEngine_Tilemaps_Tile__get_sprite
                          ((Unity_Collections_NativeArray_Enumerator_T__o *)unityRequest,
                           (MethodInfo_1536BF0 *)0x0);
        if (uVar4 == 0) {
          textOverride = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
        }
        else {
          __this_00 = (UnityEngine_Networking_DownloadHandler_o *)
                      UnityEngine_Tilemaps_Tile__get_sprite
                                ((Unity_Collections_NativeArray_Enumerator_T__o *)unityRequest,
                                 (MethodInfo_1536BF0 *)0x0);
          if (__this_00 == (UnityEngine_Networking_DownloadHandler_o *)0x0) goto label_1823683d6;
          textOverride = UnityEngine_Networking_DownloadHandler__get_text(__this_00,(MethodInfo *)0x0);
        }
      }
      (__this->fields).Text = textOverride;
      Il2CppCodeGenWriteBarrier(&(__this->fields).Text,textOverride);
      if (errorOverride == (System_String_o *)0x0) {
        errorOverride = UnityEngine_Networking_UnityWebRequest__get_error(unityRequest,(MethodInfo *)0x0);
      }
      (__this->fields).Error = errorOverride;
      Il2CppCodeGenWriteBarrier(&(__this->fields).Error,errorOverride);
      return __this;
    }
  }
label_1823683d6:
  ThrowNullReferenceException();
}


// ApplicationManagers.Api.AottgUnityWebRequestTransport$$ConvertResult
// il2cpp: int32_t ApplicationManagers_Api_AottgUnityWebRequestTransport__ConvertResult (int32_t result, const MethodInfo* method);
// 0x1823683e0

int32_t ApplicationManagers_Api_AottgUnityWebRequestTransport__ConvertResult
                  (int32_t result,MethodInfo *method)

{
  if (result == 2) {
    return 1;
  }
  if (result != 3) {
    if (result != 4) {
      return 0;
    }
    return 3;
  }
  return 2;
}


// ApplicationManagers.Api.AottgUnityWebRequestTransport$$.ctor
// il2cpp: void ApplicationManagers_Api_AottgUnityWebRequestTransport___ctor (ApplicationManagers_Api_AottgUnityWebRequestTransport_o* __this, const MethodInfo* method);
// 0x18054c890

void
ApplicationManagers_Api_AottgUnityWebRequestTransport___ctor(ApplicationManagers_Api_AottgUnityWebRequestTransport_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


