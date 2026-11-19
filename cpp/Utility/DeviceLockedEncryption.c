// Type: Utility.DeviceLockedEncryption
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/Utility/DeviceLockedEncryption.cs
// Prior real C# source: none
// --------------------------------

// Utility.DeviceLockedEncryption$$GetDeviceSpecificKey
// il2cpp: System_Byte_array* Utility_DeviceLockedEncryption__GetDeviceSpecificKey (const MethodInfo* method);
// 0x5deb530
// eh: try 0x5deb5bf..0x5deb69a -> pad 0x5deb69e (+4 call sites) catch Il2CppExceptionWrapper, cleanup [compiler noexcept guard]
// eh: try 0x5deb6b8..0x5deb6bd -> pad 0x5deb6d0 cleanup
// eh: try 0x5deb6d3..0x5deb6dd -> pad 0x5deb6e5 catch (...) [compiler noexcept guard]
// asm: 25 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5deb688: mov rdi, r14
// asm:   0x5deb68b: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5deb69a: jmp 0x5deb6a0
// asm:   0x5deb69c: jmp 0x5deb6a0
// asm:   0x5deb69e: jmp 0x5deb6a0
// asm:   0x5deb6a0: mov rbx, rax
// asm:   0x5deb6a3: cmp edx, 1
// asm:   0x5deb6a6: jne 0x5deb6d3
// asm:   0x5deb6a8: mov rdi, rbx
// asm:   0x5deb6ab: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5deb6b0: mov r14, qword ptr [rax]
// asm:   0x5deb6b3: mov qword ptr [rsp + 0x10], r14
// asm:   0x5deb6b8: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5deb6bd: xor r15d, r15d
// asm:   0x5deb6c0: mov rbx, qword ptr [rsp + 8]
// asm:   0x5deb6c5: test rbx, rbx
// asm:   0x5deb6c8: jne 0x5deb60b
// asm:   0x5deb6ce: jmp 0x5deb676
// asm:   0x5deb6d0: mov rbx, rax
// asm:   0x5deb6d3: lea rdi, [rsp + 0x10]
// asm:   0x5deb6d8: call 0x2fdf250  ; il2cpp_runtime_helper_02fdf250()
// asm:   0x5deb6dd: mov rdi, rbx
// asm:   0x5deb6e0: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5deb6e5: mov rdi, rax
// asm:   0x5deb6e8: call 0x2ab61e0  ; __clang_call_terminate()

System_Byte_array * Utility_DeviceLockedEncryption__GetDeviceSpecificKey(MethodInfo *method)

{
  System_Security_Cryptography_SHA256_c *pSVar1;
  Il2CppRuntimeInterfaceOffsetPair *pIVar2;
  System_String_o *pSVar3;
  System_Security_Cryptography_SHA256_o *pSVar4;
  System_Text_Encoding_o *pSVar5;
  System_Byte_array *pSVar6;
  VirtualInvokeData *pVVar7;
  ulong uVar8;
  long lVar9;
  System_Security_Cryptography_SHA256_o *local_30;
  undefined8 local_28;
  System_Security_Cryptography_SHA256_o **local_20;
  
  if (Il2CppMethodInitialized_075482c3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_DeviceLockedEncryption);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IDisposable);
    Il2CppMethodInitialized_075482c3 = '\x01';
  }
  pSVar3 = UnityEngine_SystemInfo__get_deviceUniqueIdentifier((MethodInfo *)0x0);
  if ((TypeInfo_Utility_DeviceLockedEncryption->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_DeviceLockedEncryption);
  }
  pSVar3 = System_String__Concat_52f0320
                     (pSVar3,TypeInfo_Utility_DeviceLockedEncryption->static_fields->SecretSalt,
                      (MethodInfo *)0x0);
  pSVar4 = System_Security_Cryptography_SHA256__Create((MethodInfo *)0x0);
  local_28 = 0;
  local_20 = &local_30;
  local_30 = pSVar4;
  pSVar5 = System_Text_Encoding__get_UTF8((MethodInfo *)0x0);
  if (pSVar5 == (System_Text_Encoding_o *)0x0) {
    ThrowNullReferenceException();
  }
  pSVar6 = (*(pSVar5->klass->vtable)._18_GetBytes.methodPtr)
                     (pSVar5,pSVar3,(pSVar5->klass->vtable)._18_GetBytes.method);
  if (pSVar4 == (System_Security_Cryptography_SHA256_o *)0x0) {
    ThrowNullReferenceException();
  }
  pSVar6 = System_Security_Cryptography_HashAlgorithm__ComputeHash
                     ((System_Security_Cryptography_HashAlgorithm_o *)pSVar4,pSVar6,(MethodInfo *)0x0);
  pSVar4 = local_30;
  if (local_30 != (System_Security_Cryptography_SHA256_o *)0x0) {
    pSVar1 = local_30->klass;
    uVar8 = (ulong)(pSVar1->_2).interface_offsets_count;
    if (uVar8 != 0) {
      pIVar2 = (pSVar1->_1).interfaceOffsets;
      lVar9 = 0;
      do {
        if (*(System_IDisposable_c **)((long)&pIVar2->interfaceType + lVar9) == TypeInfo_System_IDisposable) {
          pVVar7 = (VirtualInvokeData *)
                   (&(pSVar1->vtable)._0_Equals + *(int *)((long)&pIVar2->offset + lVar9));
          goto label_05deb66d;
        }
        lVar9 = lVar9 + 0x10;
      } while (uVar8 * 0x10 != lVar9);
    }
    pVVar7 = GetInterfaceInvokeDataFromVTableSlowPath
                       ((Il2CppObject *)local_30,(Il2CppClass *)TypeInfo_System_IDisposable,0);
label_05deb66d:
    (*pVVar7->methodPtr)((Il2CppObject *)pSVar4,pVVar7->method);
  }
  return pSVar6;
}


// Utility.DeviceLockedEncryption$$Encrypt
// il2cpp: System_String_o* Utility_DeviceLockedEncryption__Encrypt (System_String_o* plainText, const MethodInfo* method);
// 0x5deb6f0
// eh: try 0x5deb7e5..0x5debadb -> pad 0x5debca6 (+14 call sites) catch Il2CppExceptionWrapper, cleanup [compiler noexcept guard]
// eh: try 0x5debb2f..0x5debb56 -> pad 0x5debd68 catch Il2CppExceptionWrapper, cleanup
// eh: try 0x5debbeb..0x5debc16 -> pad 0x5debca6 (+6 call sites) catch Il2CppExceptionWrapper, cleanup [compiler noexcept guard]
// eh: try 0x5debc16..0x5debc1e -> pad 0x5debd68 catch Il2CppExceptionWrapper, cleanup
// eh: try 0x5debc1e..0x5debc71 -> pad 0x5debcf2 (+3 call sites) catch Il2CppExceptionWrapper, cleanup [compiler noexcept guard]
// eh: try 0x5debc90..0x5debc9a -> pad 0x5debd60 catch (...) [compiler noexcept guard]
// eh: try 0x5debcd6..0x5debcdb -> pad 0x5debce0 catch Il2CppExceptionWrapper, cleanup [compiler noexcept guard]
// eh: try 0x5debce6..0x5debcf0 -> pad 0x5debd60 catch (...) [compiler noexcept guard]
// eh: try 0x5debd0e..0x5debd13 -> pad 0x5debd18 catch Il2CppExceptionWrapper, cleanup [compiler noexcept guard]
// eh: try 0x5debd1e..0x5debd28 -> pad 0x5debd60 catch (...) [compiler noexcept guard]
// eh: try 0x5debd41..0x5debd46 -> pad 0x5debd4b cleanup
// eh: try 0x5debd4e..0x5debd58 -> pad 0x5debd60 catch (...) [compiler noexcept guard]
// asm: 105 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5debae8: jmp 0x5debb56
// asm:   0x5debaea: xor r14d, r14d
// asm:   0x5debaed: xor r12d, r12d
// asm:   0x5debaf0: mov rbx, qword ptr [rsp + 8]
// asm:   0x5debaf5: test rbx, rbx
// asm:   0x5debaf8: je 0x5debb56
// asm:   0x5debbf0: mov rdi, r14
// asm:   0x5debbf3: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5debc16: mov rdi, r14
// asm:   0x5debc19: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5debc1e: mov rdi, r14
// asm:   0x5debc21: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5debc26: mov rdi, r14
// asm:   0x5debc29: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5debc33: jmp 0x5debcf2
// asm:   0x5debc38: jmp 0x5debcf2
// asm:   0x5debc3d: jmp 0x5debcf2
// asm:   0x5debc42: jmp 0x5debca6
// asm:   0x5debc44: jmp 0x5debca6
// asm:   0x5debc46: jmp 0x5debca6
// asm:   0x5debc48: jmp 0x5debca6
// asm:   0x5debc4a: jmp 0x5debca6
// asm:   0x5debc4c: jmp 0x5debca6
// asm:   0x5debc4e: jmp 0x5debca6
// asm:   0x5debc50: mov r15, rdx
// asm:   0x5debc53: mov r14, rax
// asm:   0x5debc56: cmp r15d, 1
// asm:   0x5debc5a: jne 0x5debc90
// asm:   0x5debc5c: mov rdi, r14
// asm:   0x5debc5f: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5debc64: mov r14, qword ptr [rax]
// asm:   0x5debc67: mov qword ptr [rsp + 0x20], r14
// asm:   0x5debc6c: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5debc71: xor r15d, r15d
// asm:   0x5debc74: mov bpl, 1
// asm:   0x5debc77: mov rbx, qword ptr [rsp + 0x10]
// asm:   0x5debc7c: test rbx, rbx
// asm:   0x5debc7f: jne 0x5deb99d
// asm:   0x5debc85: jmp 0x5deba06
// asm:   0x5debc8a: mov r15, rdx
// asm:   0x5debc8d: mov r14, rax
// asm:   0x5debc90: lea rdi, [rsp + 0x20]
// asm:   0x5debc95: call 0x2fdf2e0  ; il2cpp_runtime_helper_02fdf2e0()
// asm:   0x5debc9a: jmp 0x5debcc0
// asm:   0x5debc9c: jmp 0x5debcba
// asm:   0x5debc9e: jmp 0x5debcf2
// asm:   0x5debca0: jmp 0x5debcf2
// asm:   0x5debca2: jmp 0x5debca6
// asm:   0x5debca4: jmp 0x5debca6
// asm:   0x5debca6: mov r15, rdx
// asm:   0x5debca9: mov r14, rax
// asm:   0x5debcac: xor r12d, r12d
// asm:   0x5debcaf: cmp r15d, 1
// asm:   0x5debcb3: je 0x5debd31
// asm:   0x5debcb5: jmp 0x5debd4e
// asm:   0x5debcba: mov r15, rdx
// asm:   0x5debcbd: mov r14, rax
// asm:   0x5debcc0: cmp r15d, 1
// asm:   0x5debcc4: jne 0x5debce6
// asm:   0x5debcc6: mov rdi, r14
// asm:   0x5debcc9: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5debcce: mov r14, qword ptr [rax]
// asm:   0x5debcd1: mov qword ptr [rsp + 0x30], r14
// asm:   0x5debcd6: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5debcdb: jmp 0x5deba17
// asm:   0x5debce0: mov r15, rdx
// asm:   0x5debce3: mov r14, rax
// asm:   0x5debce6: lea rdi, [rsp + 0x30]
// asm:   0x5debceb: call 0x2fdf370  ; il2cpp_runtime_helper_02fdf370()
// asm:   0x5debcf0: jmp 0x5debcf8
// asm:   0x5debcf2: mov r15, rdx
// asm:   0x5debcf5: mov r14, rax
// asm:   0x5debcf8: cmp r15d, 1
// asm:   0x5debcfc: jne 0x5debd1e
// asm:   0x5debcfe: mov rdi, r14
// asm:   0x5debd01: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5debd06: mov r14, qword ptr [rax]
// asm:   0x5debd09: mov qword ptr [rsp + 0x40], r14
// asm:   0x5debd0e: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5debd13: jmp 0x5debaed
// asm:   0x5debd18: mov r15, rdx
// asm:   0x5debd1b: mov r14, rax
// asm:   0x5debd1e: lea rdi, [rsp + 0x40]
// asm:   0x5debd23: call 0x2fdf400  ; il2cpp_runtime_helper_02fdf400()
// asm:   0x5debd28: xor r12d, r12d
// asm:   0x5debd2b: cmp r15d, 1
// asm:   0x5debd2f: jne 0x5debd4e
// asm:   0x5debd31: mov rdi, r14
// asm:   0x5debd34: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5debd39: mov r14, qword ptr [rax]
// asm:   0x5debd3c: mov qword ptr [rsp + 0x50], r14
// asm:   0x5debd41: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5debd46: jmp 0x5debb62
// asm:   0x5debd4b: mov r14, rax
// asm:   0x5debd4e: lea rdi, [rsp + 0x50]
// asm:   0x5debd53: call 0x2fdf490  ; il2cpp_runtime_helper_02fdf490()
// asm:   0x5debd58: mov rdi, r14
// asm:   0x5debd5b: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5debd60: mov rdi, rax
// asm:   0x5debd63: call 0x2ab61e0  ; __clang_call_terminate()
// asm:   0x5debd68: mov r15, rdx
// asm:   0x5debd6b: mov r14, rax
// asm:   0x5debd6e: cmp r15d, 1
// asm:   0x5debd72: je 0x5debd31
// asm:   0x5debd74: jmp 0x5debd4e

System_String_o * Utility_DeviceLockedEncryption__Encrypt(System_String_o *plainText,MethodInfo *method)

{
  System_Security_Cryptography_Aes_c *pSVar1;
  System_IO_StreamWriter_c *pSVar2;
  Il2CppRuntimeInterfaceOffsetPair *pIVar3;
  System_Security_Cryptography_CryptoStream_c *pSVar4;
  System_IO_MemoryStream_c *pSVar5;
  System_Security_Cryptography_Aes_o *pSVar6;
  System_Byte_array *pSVar7;
  System_Byte_array *pSVar8;
  System_Byte_array *pSVar9;
  System_Security_Cryptography_ICryptoTransform_o *transform;
  System_IO_MemoryStream_o *pSVar10;
  System_Security_Cryptography_CryptoStream_o *pSVar11;
  System_IO_StreamWriter_o *pSVar12;
  VirtualInvokeData *pVVar13;
  System_String_o *pSVar14;
  ulong uVar15;
  Utility_DeviceLockedEncryption_c *method_00;
  long lVar16;
  System_Security_Cryptography_Aes_o *local_88;
  System_IO_MemoryStream_o *local_80;
  System_IO_StreamWriter_o *local_78;
  System_Security_Cryptography_CryptoStream_o *local_70;
  undefined8 local_68;
  System_IO_StreamWriter_o **local_60;
  undefined8 local_58;
  System_Security_Cryptography_CryptoStream_o **local_50;
  undefined8 local_48;
  System_IO_MemoryStream_o **local_40;
  undefined8 local_38;
  undefined1 *local_30;
  
  if (Il2CppMethodInitialized_075482c4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Security_Cryptography_Aes);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Convert);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Security_Cryptography_CryptoStream);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_DeviceLockedEncryption);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IDisposable);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IO_MemoryStream);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IO_StreamWriter);
    Il2CppMethodInitialized_075482c4 = '\x01';
  }
  local_80 = (System_IO_MemoryStream_o *)0x0;
  local_70 = (System_Security_Cryptography_CryptoStream_o *)0x0;
  local_78 = (System_IO_StreamWriter_o *)0x0;
  method_00 = TypeInfo_Utility_DeviceLockedEncryption;
  if ((TypeInfo_Utility_DeviceLockedEncryption->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_DeviceLockedEncryption);
  }
  pSVar7 = Utility_DeviceLockedEncryption__GetDeviceSpecificKey((MethodInfo *)method_00);
  if ((TypeInfo_System_Security_Cryptography_Aes->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Security_Cryptography_Aes);
  }
  local_88 = System_Security_Cryptography_Aes__Create((MethodInfo *)0x0);
  local_30 = (undefined1 *)&local_88;
  local_38 = 0;
  if (local_88 == (System_Security_Cryptography_Aes_o *)0x0) {
    ThrowNullReferenceException();
  }
  local_30 = (undefined1 *)&local_88;
  (*(local_88->klass->vtable)._13_set_Key.methodPtr)
            (local_88,pSVar7,(local_88->klass->vtable)._13_set_Key.method);
  if (local_88 == (System_Security_Cryptography_Aes_o *)0x0) {
    ThrowNullReferenceException();
  }
  (*(local_88->klass->vtable)._27_GenerateIV.methodPtr)
            (local_88,(local_88->klass->vtable)._27_GenerateIV.method);
  if (local_88 == (System_Security_Cryptography_Aes_o *)0x0) {
    ThrowNullReferenceException();
  }
  pSVar7 = (*(local_88->klass->vtable)._10_get_IV.methodPtr)
                     (local_88,(local_88->klass->vtable)._10_get_IV.method);
  pSVar6 = local_88;
  if (local_88 == (System_Security_Cryptography_Aes_o *)0x0) {
    ThrowNullReferenceException();
  }
  pSVar8 = (*(local_88->klass->vtable)._12_get_Key.methodPtr)
                     (local_88,(local_88->klass->vtable)._12_get_Key.method);
  if (local_88 == (System_Security_Cryptography_Aes_o *)0x0) {
    ThrowNullReferenceException();
  }
  pSVar9 = (*(local_88->klass->vtable)._10_get_IV.methodPtr)
                     (local_88,(local_88->klass->vtable)._10_get_IV.method);
  pSVar1 = pSVar6->klass;
  transform = (System_Security_Cryptography_ICryptoTransform_o *)
              (*(pSVar1->vtable)._23_unknown.methodPtr)
                        (pSVar6,pSVar8,pSVar9,(pSVar1->vtable)._23_unknown.method);
  pSVar10 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_IO_MemoryStream);
  System_IO_MemoryStream___ctor(pSVar10,(MethodInfo *)0x0);
  local_48 = 0;
  local_40 = &local_80;
  local_80 = pSVar10;
  if ((pSVar7 == (System_Byte_array *)0x0) || (pSVar10 == (System_IO_MemoryStream_o *)0x0)) {
    ThrowNullReferenceException();
  }
  (*(pSVar10->klass->vtable)._36_Write.methodPtr)
            (pSVar10,pSVar7,0,(int32_t)pSVar7->max_length,(pSVar10->klass->vtable)._36_Write.method);
  pSVar10 = local_80;
  pSVar11 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Security_Cryptography_CryptoStream);
  System_Security_Cryptography_CryptoStream___ctor
            (pSVar11,(System_IO_Stream_o *)pSVar10,transform,1,(MethodInfo *)0x0);
  local_58 = 0;
  local_50 = &local_70;
  local_70 = pSVar11;
  pSVar12 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_IO_StreamWriter);
  System_IO_StreamWriter___ctor_546c9f0(pSVar12,(System_IO_Stream_o *)pSVar11,(MethodInfo *)0x0);
  local_68 = 0;
  local_60 = &local_78;
  local_78 = pSVar12;
  if (pSVar12 == (System_IO_StreamWriter_o *)0x0) {
    ThrowNullReferenceException();
  }
  (*(pSVar12->klass->vtable)._18_Write.methodPtr)(pSVar12,plainText,(pSVar12->klass->vtable)._18_Write.method)
  ;
  pSVar12 = local_78;
  if (local_78 != (System_IO_StreamWriter_o *)0x0) {
    pSVar2 = local_78->klass;
    uVar15 = (ulong)(pSVar2->_2).interface_offsets_count;
    if (uVar15 != 0) {
      pIVar3 = (pSVar2->_1).interfaceOffsets;
      lVar16 = 0;
      do {
        if (*(System_IDisposable_c **)((long)&pIVar3->interfaceType + lVar16) == TypeInfo_System_IDisposable)
        {
          pVVar13 = &(pSVar2->vtable)._0_Equals + *(int *)((long)&pIVar3->offset + lVar16);
          goto label_05deb9fd;
        }
        lVar16 = lVar16 + 0x10;
      } while (uVar15 * 0x10 != lVar16);
    }
    pVVar13 = GetInterfaceInvokeDataFromVTableSlowPath
                        ((Il2CppObject *)local_78,(Il2CppClass *)TypeInfo_System_IDisposable,0);
label_05deb9fd:
    (*pVVar13->methodPtr)((Il2CppObject *)pSVar12,pVVar13->method);
  }
  pSVar11 = local_70;
  if (local_70 != (System_Security_Cryptography_CryptoStream_o *)0x0) {
    pSVar4 = local_70->klass;
    uVar15 = (ulong)(pSVar4->_2).interface_offsets_count;
    if (uVar15 != 0) {
      pIVar3 = (pSVar4->_1).interfaceOffsets;
      lVar16 = 0;
      do {
        if (*(System_IDisposable_c **)((long)&pIVar3->interfaceType + lVar16) == TypeInfo_System_IDisposable)
        {
          pVVar13 = &(pSVar4->vtable)._0_Equals + *(int *)((long)&pIVar3->offset + lVar16);
          goto label_05deba7d;
        }
        lVar16 = lVar16 + 0x10;
      } while (uVar15 * 0x10 != lVar16);
    }
    pVVar13 = GetInterfaceInvokeDataFromVTableSlowPath
                        ((Il2CppObject *)local_70,(Il2CppClass *)TypeInfo_System_IDisposable,0);
label_05deba7d:
    (*pVVar13->methodPtr)((Il2CppObject *)pSVar11,pVVar13->method);
  }
  if (local_80 == (System_IO_MemoryStream_o *)0x0) {
    ThrowNullReferenceException();
  }
  pSVar7 = (*(local_80->klass->vtable)._42_ToArray.methodPtr)
                     (local_80,(local_80->klass->vtable)._42_ToArray.method);
  if ((TypeInfo_System_Convert->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Convert);
  }
  pSVar14 = System_Convert__ToBase64String(pSVar7,(MethodInfo *)0x0);
  pSVar10 = local_80;
  if (local_80 != (System_IO_MemoryStream_o *)0x0) {
    pSVar5 = local_80->klass;
    uVar15 = (ulong)(pSVar5->_2).interface_offsets_count;
    if (uVar15 != 0) {
      pIVar3 = (pSVar5->_1).interfaceOffsets;
      lVar16 = 0;
      do {
        if (*(System_IDisposable_c **)((long)&pIVar3->interfaceType + lVar16) == TypeInfo_System_IDisposable)
        {
          pVVar13 = &(pSVar5->vtable)._0_Equals + *(int *)((long)&pIVar3->offset + lVar16);
          goto label_05debb4d;
        }
        lVar16 = lVar16 + 0x10;
      } while (uVar15 * 0x10 != lVar16);
    }
    pVVar13 = GetInterfaceInvokeDataFromVTableSlowPath
                        ((Il2CppObject *)local_80,(Il2CppClass *)TypeInfo_System_IDisposable,0);
label_05debb4d:
    (*pVVar13->methodPtr)((Il2CppObject *)pSVar10,pVVar13->method);
  }
  pSVar6 = local_88;
  if (local_88 != (System_Security_Cryptography_Aes_o *)0x0) {
    pSVar1 = local_88->klass;
    uVar15 = (ulong)(pSVar1->_2).interface_offsets_count;
    if (uVar15 != 0) {
      pIVar3 = (pSVar1->_1).interfaceOffsets;
      lVar16 = 0;
      do {
        if (*(System_IDisposable_c **)((long)&pIVar3->interfaceType + lVar16) == TypeInfo_System_IDisposable)
        {
          pVVar13 = (VirtualInvokeData *)
                    (&(pSVar1->vtable)._0_Equals + *(int *)((long)&pIVar3->offset + lVar16));
          goto label_05debbcd;
        }
        lVar16 = lVar16 + 0x10;
      } while (uVar15 * 0x10 != lVar16);
    }
    pVVar13 = GetInterfaceInvokeDataFromVTableSlowPath
                        ((Il2CppObject *)local_88,(Il2CppClass *)TypeInfo_System_IDisposable,0);
label_05debbcd:
    (*pVVar13->methodPtr)((Il2CppObject *)pSVar6,pVVar13->method);
  }
  return pSVar14;
}


// Utility.DeviceLockedEncryption$$Decrypt
// il2cpp: System_String_o* Utility_DeviceLockedEncryption__Decrypt (System_String_o* cipherText, const MethodInfo* method);
// 0x5debd80
// eh: try 0x5debea6..0x5dec2f6 -> pad 0x5dec353 (+28 call sites) catch Il2CppExceptionWrapper, cleanup
// eh: try 0x5dec312..0x5dec31c -> pad 0x5dec404 catch (...) [compiler noexcept guard]
// eh: try 0x5dec372..0x5dec377 -> pad 0x5dec37c cleanup
// eh: try 0x5dec37f..0x5dec389 -> pad 0x5dec404 catch (...) [compiler noexcept guard]
// eh: try 0x5dec3ad..0x5dec3b2 -> pad 0x5dec3b7 catch Il2CppExceptionWrapper, cleanup
// eh: try 0x5dec3bd..0x5dec3c7 -> pad 0x5dec404 catch (...) [compiler noexcept guard]
// eh: try 0x5dec3e5..0x5dec3ea -> pad 0x5dec3ef catch Il2CppExceptionWrapper, cleanup
// eh: try 0x5dec3f5..0x5dec3ff -> pad 0x5dec404 catch (...) [compiler noexcept guard]
// asm: 101 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5dec290: mov rdi, r14
// asm:   0x5dec293: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5dec2bb: mov rdi, r14
// asm:   0x5dec2be: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5dec2c3: mov rdi, r14
// asm:   0x5dec2c6: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5dec2cb: mov rdi, r14
// asm:   0x5dec2ce: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5dec2d3: jmp 0x5dec2d5
// asm:   0x5dec2d5: mov r15, rdx
// asm:   0x5dec2d8: mov r14, rax
// asm:   0x5dec2db: cmp r15d, 1
// asm:   0x5dec2df: jne 0x5dec312
// asm:   0x5dec2e1: mov rdi, r14
// asm:   0x5dec2e4: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5dec2e9: mov r14, qword ptr [rax]
// asm:   0x5dec2ec: mov qword ptr [rsp + 0x20], r14
// asm:   0x5dec2f1: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5dec2f6: xor r12d, r12d
// asm:   0x5dec2f9: mov rbx, qword ptr [rsp + 8]
// asm:   0x5dec2fe: test rbx, rbx
// asm:   0x5dec301: jne 0x5dec091
// asm:   0x5dec307: jmp 0x5dec0f6
// asm:   0x5dec30c: mov r15, rdx
// asm:   0x5dec30f: mov r14, rax
// asm:   0x5dec312: lea rdi, [rsp + 0x20]
// asm:   0x5dec317: call 0x2fdf520  ; il2cpp_runtime_helper_02fdf520()
// asm:   0x5dec31c: jmp 0x5dec33a
// asm:   0x5dec31e: jmp 0x5dec353
// asm:   0x5dec320: jmp 0x5dec353
// asm:   0x5dec322: jmp 0x5dec353
// asm:   0x5dec324: jmp 0x5dec353
// asm:   0x5dec326: jmp 0x5dec353
// asm:   0x5dec328: jmp 0x5dec353
// asm:   0x5dec32a: jmp 0x5dec353
// asm:   0x5dec32c: jmp 0x5dec353
// asm:   0x5dec32e: jmp 0x5dec353
// asm:   0x5dec330: jmp 0x5dec353
// asm:   0x5dec332: jmp 0x5dec353
// asm:   0x5dec334: mov r15, rdx
// asm:   0x5dec337: mov r14, rax
// asm:   0x5dec33a: xor r12d, r12d
// asm:   0x5dec33d: jmp 0x5dec397
// asm:   0x5dec33f: mov r15, rdx
// asm:   0x5dec342: mov r14, rax
// asm:   0x5dec345: xor r12d, r12d
// asm:   0x5dec348: jmp 0x5dec3cf
// asm:   0x5dec34d: jmp 0x5dec353
// asm:   0x5dec34f: jmp 0x5dec353
// asm:   0x5dec351: jmp 0x5dec353
// asm:   0x5dec353: mov r15, rdx
// asm:   0x5dec356: mov r14, rax
// asm:   0x5dec359: xor r12d, r12d
// asm:   0x5dec35c: cmp r15d, 1
// asm:   0x5dec360: jne 0x5dec37f
// asm:   0x5dec362: mov rdi, r14
// asm:   0x5dec365: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5dec36a: mov r14, qword ptr [rax]
// asm:   0x5dec36d: mov qword ptr [rsp + 0x50], r14
// asm:   0x5dec372: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5dec377: jmp 0x5dec202
// asm:   0x5dec37c: mov r14, rax
// asm:   0x5dec37f: lea rdi, [rsp + 0x50]
// asm:   0x5dec384: call 0x2fdf6d0  ; il2cpp_runtime_helper_02fdf6d0()
// asm:   0x5dec389: mov rdi, r14
// asm:   0x5dec38c: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5dec391: mov r15, rdx
// asm:   0x5dec394: mov r14, rax
// asm:   0x5dec397: cmp r15d, 1
// asm:   0x5dec39b: jne 0x5dec3bd
// asm:   0x5dec39d: mov rdi, r14
// asm:   0x5dec3a0: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5dec3a5: mov r14, qword ptr [rax]
// asm:   0x5dec3a8: mov qword ptr [rsp + 0x30], r14
// asm:   0x5dec3ad: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5dec3b2: jmp 0x5dec102
// asm:   0x5dec3b7: mov r15, rdx
// asm:   0x5dec3ba: mov r14, rax
// asm:   0x5dec3bd: lea rdi, [rsp + 0x30]
// asm:   0x5dec3c2: call 0x2fdf5b0  ; il2cpp_runtime_helper_02fdf5b0()
// asm:   0x5dec3c7: jmp 0x5dec3cf
// asm:   0x5dec3c9: mov r15, rdx
// asm:   0x5dec3cc: mov r14, rax
// asm:   0x5dec3cf: cmp r15d, 1
// asm:   0x5dec3d3: jne 0x5dec3f5
// asm:   0x5dec3d5: mov rdi, r14
// asm:   0x5dec3d8: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5dec3dd: mov r14, qword ptr [rax]
// asm:   0x5dec3e0: mov qword ptr [rsp + 0x40], r14
// asm:   0x5dec3e5: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5dec3ea: jmp 0x5dec182
// asm:   0x5dec3ef: mov r15, rdx
// asm:   0x5dec3f2: mov r14, rax
// asm:   0x5dec3f5: lea rdi, [rsp + 0x40]
// asm:   0x5dec3fa: call 0x2fdf640  ; il2cpp_runtime_helper_02fdf640()
// asm:   0x5dec3ff: jmp 0x5dec35c
// asm:   0x5dec404: mov rdi, rax
// asm:   0x5dec407: call 0x2ab61e0  ; __clang_call_terminate()
// asm:   0x5dec40c: mov r15, rdx
// asm:   0x5dec40f: mov r14, rax
// asm:   0x5dec412: jmp 0x5dec35c

System_String_o * Utility_DeviceLockedEncryption__Decrypt(System_String_o *cipherText,MethodInfo *method)

{
  System_Security_Cryptography_Aes_c *pSVar1;
  System_IO_StreamReader_c *pSVar2;
  Il2CppRuntimeInterfaceOffsetPair *pIVar3;
  System_Security_Cryptography_CryptoStream_c *pSVar4;
  System_IO_MemoryStream_c *pSVar5;
  System_Security_Cryptography_Aes_o *pSVar6;
  int32_t iVar7;
  System_Byte_array *pSVar8;
  System_Byte_array *pSVar9;
  System_Byte_array *buffer;
  System_Security_Cryptography_ICryptoTransform_o *transform;
  System_IO_MemoryStream_o *pSVar10;
  System_Security_Cryptography_CryptoStream_o *pSVar11;
  System_IO_StreamReader_o *pSVar12;
  System_String_o *pSVar13;
  VirtualInvokeData *pVVar14;
  ulong uVar15;
  uint32_t length;
  int iVar16;
  Utility_DeviceLockedEncryption_c *method_00;
  long lVar17;
  System_Security_Cryptography_Aes_o *local_88;
  System_IO_StreamReader_o *local_80;
  System_Security_Cryptography_CryptoStream_o *local_78;
  System_IO_MemoryStream_o *local_70;
  undefined8 local_68;
  System_IO_StreamReader_o **local_60;
  undefined8 local_58;
  System_Security_Cryptography_CryptoStream_o **local_50;
  undefined8 local_48;
  System_IO_MemoryStream_o **local_40;
  undefined8 local_38;
  undefined1 *local_30;
  
  if (Il2CppMethodInitialized_075482c5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Security_Cryptography_Aes);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_byte_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Convert);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Security_Cryptography_CryptoStream);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_DeviceLockedEncryption);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IDisposable);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IO_MemoryStream);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IO_StreamReader);
    Il2CppMethodInitialized_075482c5 = '\x01';
  }
  local_70 = (System_IO_MemoryStream_o *)0x0;
  local_78 = (System_Security_Cryptography_CryptoStream_o *)0x0;
  local_80 = (System_IO_StreamReader_o *)0x0;
  method_00 = TypeInfo_Utility_DeviceLockedEncryption;
  if ((TypeInfo_Utility_DeviceLockedEncryption->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_DeviceLockedEncryption);
  }
  pSVar8 = Utility_DeviceLockedEncryption__GetDeviceSpecificKey((MethodInfo *)method_00);
  if ((TypeInfo_System_Convert->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Convert);
  }
  pSVar9 = System_Convert__FromBase64String(cipherText,(MethodInfo *)0x0);
  if ((TypeInfo_System_Security_Cryptography_Aes->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Security_Cryptography_Aes);
  }
  local_88 = System_Security_Cryptography_Aes__Create((MethodInfo *)0x0);
  local_30 = (undefined1 *)&local_88;
  local_38 = 0;
  if (local_88 == (System_Security_Cryptography_Aes_o *)0x0) {
    ThrowNullReferenceException();
  }
  local_30 = (undefined1 *)&local_88;
  (*(local_88->klass->vtable)._13_set_Key.methodPtr)
            (local_88,pSVar8,(local_88->klass->vtable)._13_set_Key.method);
  if (local_88 == (System_Security_Cryptography_Aes_o *)0x0) {
    ThrowNullReferenceException();
  }
  iVar7 = (*(local_88->klass->vtable)._6_get_BlockSize.methodPtr)
                    (local_88,(local_88->klass->vtable)._6_get_BlockSize.method);
  iVar16 = iVar7 + 7;
  if (-1 < iVar7) {
    iVar16 = iVar7;
  }
  pSVar8 = (System_Byte_array *)SZArrayNew(TypeInfo_byte_array,iVar16 >> 3);
  if (pSVar8 == (System_Byte_array *)0x0) {
    ThrowNullReferenceException();
  }
  System_Array__Copy_54e3150
            ((System_Array_o *)pSVar9,0,(System_Array_o *)pSVar8,0,(int32_t)pSVar8->max_length,
             (MethodInfo *)0x0);
  if (local_88 == (System_Security_Cryptography_Aes_o *)0x0) {
    ThrowNullReferenceException();
  }
  (*(local_88->klass->vtable)._11_set_IV.methodPtr)
            (local_88,pSVar8,(local_88->klass->vtable)._11_set_IV.method);
  if (pSVar9 == (System_Byte_array *)0x0) {
    ThrowNullReferenceException();
  }
  length = (int)pSVar9->max_length - (int)pSVar8->max_length;
  buffer = (System_Byte_array *)SZArrayNew(TypeInfo_byte_array,length);
  System_Array__Copy_54e3150
            ((System_Array_o *)pSVar9,(int32_t)pSVar8->max_length,(System_Array_o *)buffer,0,length,
             (MethodInfo *)0x0);
  pSVar6 = local_88;
  if (local_88 == (System_Security_Cryptography_Aes_o *)0x0) {
    ThrowNullReferenceException();
  }
  pSVar8 = (*(local_88->klass->vtable)._12_get_Key.methodPtr)
                     (local_88,(local_88->klass->vtable)._12_get_Key.method);
  if (local_88 == (System_Security_Cryptography_Aes_o *)0x0) {
    ThrowNullReferenceException();
  }
  pSVar9 = (*(local_88->klass->vtable)._10_get_IV.methodPtr)
                     (local_88,(local_88->klass->vtable)._10_get_IV.method);
  pSVar1 = pSVar6->klass;
  transform = (*(pSVar1->vtable)._25_CreateDecryptor.methodPtr)
                        (pSVar6,pSVar8,pSVar9,(pSVar1->vtable)._25_CreateDecryptor.method);
  pSVar10 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_IO_MemoryStream);
  System_IO_MemoryStream___ctor_5465640(pSVar10,buffer,(MethodInfo *)0x0);
  local_48 = 0;
  local_40 = &local_70;
  local_70 = pSVar10;
  pSVar11 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Security_Cryptography_CryptoStream);
  System_Security_Cryptography_CryptoStream___ctor
            (pSVar11,(System_IO_Stream_o *)pSVar10,transform,0,(MethodInfo *)0x0);
  local_58 = 0;
  local_50 = &local_78;
  local_78 = pSVar11;
  pSVar12 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_IO_StreamReader);
  System_IO_StreamReader___ctor_5468d80(pSVar12,(System_IO_Stream_o *)pSVar11,(MethodInfo *)0x0);
  local_68 = 0;
  local_60 = &local_80;
  local_80 = pSVar12;
  if (pSVar12 == (System_IO_StreamReader_o *)0x0) {
    ThrowNullReferenceException();
  }
  pSVar13 = (*(pSVar12->klass->vtable)._13_ReadToEnd.methodPtr)
                      (pSVar12,(pSVar12->klass->vtable)._13_ReadToEnd.method);
  pSVar12 = local_80;
  if (local_80 != (System_IO_StreamReader_o *)0x0) {
    pSVar2 = local_80->klass;
    uVar15 = (ulong)(pSVar2->_2).interface_offsets_count;
    if (uVar15 != 0) {
      pIVar3 = (pSVar2->_1).interfaceOffsets;
      lVar17 = 0;
      do {
        if (*(System_IDisposable_c **)((long)&pIVar3->interfaceType + lVar17) == TypeInfo_System_IDisposable)
        {
          pVVar14 = &(pSVar2->vtable)._0_Equals + *(int *)((long)&pIVar3->offset + lVar17);
          goto label_05dec0ed;
        }
        lVar17 = lVar17 + 0x10;
      } while (uVar15 * 0x10 != lVar17);
    }
    pVVar14 = GetInterfaceInvokeDataFromVTableSlowPath
                        ((Il2CppObject *)local_80,(Il2CppClass *)TypeInfo_System_IDisposable,0);
label_05dec0ed:
    (*pVVar14->methodPtr)((Il2CppObject *)pSVar12,pVVar14->method);
  }
  pSVar11 = local_78;
  if (local_78 != (System_Security_Cryptography_CryptoStream_o *)0x0) {
    pSVar4 = local_78->klass;
    uVar15 = (ulong)(pSVar4->_2).interface_offsets_count;
    if (uVar15 != 0) {
      pIVar3 = (pSVar4->_1).interfaceOffsets;
      lVar17 = 0;
      do {
        if (*(System_IDisposable_c **)((long)&pIVar3->interfaceType + lVar17) == TypeInfo_System_IDisposable)
        {
          pVVar14 = &(pSVar4->vtable)._0_Equals + *(int *)((long)&pIVar3->offset + lVar17);
          goto label_05dec16d;
        }
        lVar17 = lVar17 + 0x10;
      } while (uVar15 * 0x10 != lVar17);
    }
    pVVar14 = GetInterfaceInvokeDataFromVTableSlowPath
                        ((Il2CppObject *)local_78,(Il2CppClass *)TypeInfo_System_IDisposable,0);
label_05dec16d:
    (*pVVar14->methodPtr)((Il2CppObject *)pSVar11,pVVar14->method);
  }
  pSVar10 = local_70;
  if (local_70 != (System_IO_MemoryStream_o *)0x0) {
    pSVar5 = local_70->klass;
    uVar15 = (ulong)(pSVar5->_2).interface_offsets_count;
    if (uVar15 != 0) {
      pIVar3 = (pSVar5->_1).interfaceOffsets;
      lVar17 = 0;
      do {
        if (*(System_IDisposable_c **)((long)&pIVar3->interfaceType + lVar17) == TypeInfo_System_IDisposable)
        {
          pVVar14 = &(pSVar5->vtable)._0_Equals + *(int *)((long)&pIVar3->offset + lVar17);
          goto label_05dec1ed;
        }
        lVar17 = lVar17 + 0x10;
      } while (uVar15 * 0x10 != lVar17);
    }
    pVVar14 = GetInterfaceInvokeDataFromVTableSlowPath
                        ((Il2CppObject *)local_70,(Il2CppClass *)TypeInfo_System_IDisposable,0);
label_05dec1ed:
    (*pVVar14->methodPtr)((Il2CppObject *)pSVar10,pVVar14->method);
  }
  pSVar6 = local_88;
  if (local_88 != (System_Security_Cryptography_Aes_o *)0x0) {
    pSVar1 = local_88->klass;
    uVar15 = (ulong)(pSVar1->_2).interface_offsets_count;
    if (uVar15 != 0) {
      pIVar3 = (pSVar1->_1).interfaceOffsets;
      lVar17 = 0;
      do {
        if (*(System_IDisposable_c **)((long)&pIVar3->interfaceType + lVar17) == TypeInfo_System_IDisposable)
        {
          pVVar14 = (VirtualInvokeData *)
                    (&(pSVar1->vtable)._0_Equals + *(int *)((long)&pIVar3->offset + lVar17));
          goto label_05dec26d;
        }
        lVar17 = lVar17 + 0x10;
      } while (uVar15 * 0x10 != lVar17);
    }
    pVVar14 = GetInterfaceInvokeDataFromVTableSlowPath
                        ((Il2CppObject *)local_88,(Il2CppClass *)TypeInfo_System_IDisposable,0);
label_05dec26d:
    (*pVVar14->methodPtr)((Il2CppObject *)pSVar6,pVVar14->method);
  }
  return pSVar13;
}


// Utility.DeviceLockedEncryption$$.ctor
// il2cpp: void Utility_DeviceLockedEncryption___ctor (Utility_DeviceLockedEncryption_o* __this, const MethodInfo* method);
// 0x5dec420

void Utility_DeviceLockedEncryption___ctor(Utility_DeviceLockedEncryption_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Utility.DeviceLockedEncryption$$.cctor
// il2cpp: void Utility_DeviceLockedEncryption___cctor (const MethodInfo* method);
// 0x5dec430

void Utility_DeviceLockedEncryption___cctor(MethodInfo *method)

{
  if (Il2CppMethodInitialized_075482c6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_DeviceLockedEncryption);
    il2cpp_codegen_initialize_runtime_metadata(&"YourCustomSecretSaltChangeThis_123!");
    Il2CppMethodInitialized_075482c6 = '\x01';
  }
  TypeInfo_Utility_DeviceLockedEncryption->static_fields->SecretSalt = "YourCustomSecretSaltChangeThis_123!";
  Il2CppCodeGenWriteBarrier(&TypeInfo_Utility_DeviceLockedEncryption->static_fields->SecretSalt);
  return;
}


