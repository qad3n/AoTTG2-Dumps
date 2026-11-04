// Type: Utility.DeviceLockedEncryption
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Utility/DeviceLockedEncryption.cs
// Prior real C# source: none
// --------------------------------

// Utility.DeviceLockedEncryption$$GetDeviceSpecificKey
// il2cpp: System_Byte_array* Utility_DeviceLockedEncryption__GetDeviceSpecificKey (const MethodInfo* method);
// 0x1823362d0
// eh: try 0x182336374..0x182336416 -> pad 0x183315930 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 22 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1823363d5: mov r8, qword ptr [rsp + 0x58]
// asm:   0x1823363da: test r8, r8
// asm:   0x1823363dd: je 0x1823363ed
// asm:   0x1823363df: xor ecx, ecx
// asm:   0x1823363e1: mov rdx, qword ptr [rip + 0x1d62f18]  ; TypeInfo_System_IDisposable
// asm:   0x1823363e8: call 0x180014840  ; InterfaceInvoker0_Invoke()
// asm:   0x1823363ed: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x1823363f2: test rcx, rcx
// asm:   0x1823363f5: jne 0x182336416
// asm:   0x1823363f7: mov rbx, qword ptr [rsp + 0x60]
// asm:   0x182336416: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183315930: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183315935: push rbp
// asm:   0x183315936: sub rsp, 0x20
// asm:   0x18331593a: mov rbp, rdx
// asm:   0x18331593d: mov rax, qword ptr [rbp + 0x20]
// asm:   0x183315941: mov rcx, qword ptr [rax]
// asm:   0x183315944: mov qword ptr [rbp + 0x28], rcx
// asm:   0x183315948: movabs rax, 0
// asm:   0x183315952: add rsp, 0x20
// asm:   0x183315956: pop rbp
// asm:   0x183315957: ret 

System_Byte_array * Utility_DeviceLockedEncryption__GetDeviceSpecificKey(MethodInfo *method)

{
  System_String_o *pSVar1;
  System_Security_Cryptography_SHA256_o *__this;
  System_Text_Encoding_o *pSVar2;
  System_Byte_array *pSVar3;
  
  if (Il2CppMethodInitialized_184347819 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_DeviceLockedEncryption);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IDisposable);
    Il2CppMethodInitialized_184347819 = '\x01';
  }
  pSVar1 = UnityEngine_SystemInfo__get_deviceUniqueIdentifier((MethodInfo *)0x0);
  if ((TypeInfo_Utility_DeviceLockedEncryption->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_DeviceLockedEncryption);
  }
  pSVar1 = System_String__Concat_1969e50
                     (pSVar1,TypeInfo_Utility_DeviceLockedEncryption->static_fields->SecretSalt,
                      (MethodInfo *)0x0);
  __this = System_Security_Cryptography_SHA256__Create((MethodInfo *)0x0);
  pSVar2 = System_Text_Encoding__get_UTF8((MethodInfo *)0x0);
  if (pSVar2 != (System_Text_Encoding_o *)0x0) {
    pSVar3 = (*(pSVar2->klass->vtable)._18_GetBytes.methodPtr)
                       (pSVar2,pSVar1,(pSVar2->klass->vtable)._18_GetBytes.method);
    if (__this != (System_Security_Cryptography_SHA256_o *)0x0) {
      pSVar3 = System_Security_Cryptography_HashAlgorithm__ComputeHash
                         ((System_Security_Cryptography_HashAlgorithm_o *)__this,pSVar3,(MethodInfo *)0x0);
      if (__this != (System_Security_Cryptography_SHA256_o *)0x0) {
        InterfaceInvoker0_Invoke(0,(Il2CppClass *)TypeInfo_System_IDisposable,(Il2CppObject *)__this);
      }
      return pSVar3;
    }
    ThrowNullReferenceException();
  }
  ThrowNullReferenceException();
}


// Utility.DeviceLockedEncryption$$Encrypt
// il2cpp: System_String_o* Utility_DeviceLockedEncryption__Encrypt (System_String_o* plainText, const MethodInfo* method);
// 0x182335e40
// eh: try 0x182335f37..0x182336213 -> pad 0x183340580 (+8 call sites) catch Il2CppExceptionWrapper
// eh: try 0x182336213..0x18233622e -> pad 0x180014200 cleanup
// eh: try 0x18233622e..0x1823362cb -> pad 0x183340580 (+6 call sites) catch Il2CppExceptionWrapper
// asm: 88 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x182336127: nop 
// asm:   0x1823361a6: nop 
// asm:   0x1823361c7: mov r8, qword ptr [rsp + 0x30]
// asm:   0x1823361cc: test r8, r8
// asm:   0x1823361cf: je 0x1823361df
// asm:   0x1823361d1: xor ecx, ecx
// asm:   0x1823361d3: mov rdx, qword ptr [rip + 0x1d63126]  ; TypeInfo_System_IDisposable
// asm:   0x1823361da: call 0x180014840  ; InterfaceInvoker0_Invoke()
// asm:   0x1823361df: mov rcx, qword ptr [rsp + 0x48]
// asm:   0x1823361e4: test rcx, rcx
// asm:   0x1823361e7: jne 0x18233628f
// asm:   0x1823361ed: mov r8, qword ptr [rsp + 0x38]
// asm:   0x1823361f2: test r8, r8
// asm:   0x1823361f5: je 0x182336205
// asm:   0x1823361f7: xor ecx, ecx
// asm:   0x1823361f9: mov rdx, qword ptr [rip + 0x1d63100]  ; TypeInfo_System_IDisposable
// asm:   0x182336200: call 0x180014840  ; InterfaceInvoker0_Invoke()
// asm:   0x182336205: mov rcx, qword ptr [rsp + 0x58]
// asm:   0x18233620a: test rcx, rcx
// asm:   0x18233620d: jne 0x182336295
// asm:   0x182336213: jmp 0x182336140
// asm:   0x182336218: mov r8, qword ptr [rsp + 0xe8]
// asm:   0x182336220: test r8, r8
// asm:   0x182336223: je 0x182336233
// asm:   0x182336225: xor ecx, ecx
// asm:   0x182336227: mov rdx, qword ptr [rip + 0x1d630d2]  ; TypeInfo_System_IDisposable
// asm:   0x18233622e: call 0x180014840  ; InterfaceInvoker0_Invoke()
// asm:   0x182336233: mov rcx, qword ptr [rsp + 0x68]
// asm:   0x182336238: test rcx, rcx
// asm:   0x18233623b: jne 0x1823362a5
// asm:   0x18233623d: mov r8, qword ptr [rsp + 0xe0]
// asm:   0x182336245: test r8, r8
// asm:   0x182336248: je 0x182336258
// asm:   0x18233624a: xor ecx, ecx
// asm:   0x18233624c: mov rdx, qword ptr [rip + 0x1d630ad]  ; TypeInfo_System_IDisposable
// asm:   0x182336253: call 0x180014840  ; InterfaceInvoker0_Invoke()
// asm:   0x182336258: mov rcx, qword ptr [rsp + 0x78]
// asm:   0x18233625d: test rcx, rcx
// asm:   0x182336260: jne 0x1823362ab
// asm:   0x182336262: mov rbx, qword ptr [rsp + 0x40]
// asm:   0x18233628f: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x182336295: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x1823362a5: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x1823362ab: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183320100: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183320105: push rbp
// asm:   0x183320106: sub rsp, 0x30
// asm:   0x18332010a: mov rbp, rdx
// asm:   0x18332010d: mov rax, qword ptr [rbp + 0x88]
// asm:   0x183320114: mov rcx, qword ptr [rax]
// asm:   0x183320117: mov qword ptr [rbp + 0x48], rcx
// asm:   0x18332011b: movabs rax, 0
// asm:   0x183320125: add rsp, 0x30
// asm:   0x183320129: pop rbp
// asm:   0x18332012a: ret 
// asm:   0x1833335f0: mov qword ptr [rsp + 0x10], rdx
// asm:   0x1833335f5: push rbp
// asm:   0x1833335f6: sub rsp, 0x30
// asm:   0x1833335fa: mov rbp, rdx
// asm:   0x1833335fd: mov rax, qword ptr [rbp + 0x90]
// asm:   0x183333604: mov rcx, qword ptr [rax]
// asm:   0x183333607: mov qword ptr [rbp + 0x58], rcx
// asm:   0x18333360b: movabs rax, 0
// asm:   0x183333615: add rsp, 0x30
// asm:   0x183333619: pop rbp
// asm:   0x18333361a: ret 
// asm:   0x183339c10: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183339c15: push rbp
// asm:   0x183339c16: sub rsp, 0x30
// asm:   0x183339c1a: mov rbp, rdx
// asm:   0x183339c1d: mov rax, qword ptr [rbp + 0x98]
// asm:   0x183339c24: mov rcx, qword ptr [rax]
// asm:   0x183339c27: mov qword ptr [rbp + 0x68], rcx
// asm:   0x183339c2b: movabs rax, 0
// asm:   0x183339c35: add rsp, 0x30
// asm:   0x183339c39: pop rbp
// asm:   0x183339c3a: ret 
// asm:   0x183340580: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183340585: push rbp
// asm:   0x183340586: sub rsp, 0x30
// asm:   0x18334058a: mov rbp, rdx
// asm:   0x18334058d: mov rax, qword ptr [rbp + 0xa0]
// asm:   0x183340594: mov rcx, qword ptr [rax]
// asm:   0x183340597: mov qword ptr [rbp + 0x78], rcx
// asm:   0x18334059b: movabs rax, 0
// asm:   0x1833405a5: add rsp, 0x30
// asm:   0x1833405a9: pop rbp
// asm:   0x1833405aa: ret 

System_String_o * Utility_DeviceLockedEncryption__Encrypt(System_String_o *plainText,MethodInfo *method)

{
  System_Security_Cryptography_Aes_c *pSVar1;
  System_Security_Cryptography_Aes_o *pSVar2;
  System_Byte_array *pSVar3;
  System_Byte_array *pSVar4;
  System_Byte_array *pSVar5;
  System_Security_Cryptography_ICryptoTransform_o *transform;
  System_IO_MemoryStream_o *pSVar6;
  System_Security_Cryptography_CryptoStream_o *__this;
  System_IO_StreamWriter_o *__this_00;
  System_String_o *pSVar7;
  System_Security_Cryptography_Aes_o *local_res18;
  System_IO_MemoryStream_o *local_res20;
  System_IO_StreamWriter_o *local_98;
  System_Security_Cryptography_CryptoStream_o *local_90;
  System_String_o *local_88;
  undefined8 local_80;
  System_IO_StreamWriter_o **local_78;
  undefined8 local_70;
  System_Security_Cryptography_CryptoStream_o **local_68;
  undefined8 local_60;
  System_IO_MemoryStream_o **local_58;
  undefined8 local_50;
  System_Security_Cryptography_Aes_o **local_48;
  
  if (Il2CppMethodInitialized_18434781a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Security_Cryptography_Aes);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Convert);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Security_Cryptography_CryptoStream);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_DeviceLockedEncryption);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IDisposable);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IO_MemoryStream);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IO_StreamWriter);
    Il2CppMethodInitialized_18434781a = '\x01';
  }
  local_res18 = (System_Security_Cryptography_Aes_o *)0x0;
  local_res20 = (System_IO_MemoryStream_o *)0x0;
  local_90 = (System_Security_Cryptography_CryptoStream_o *)0x0;
  local_98 = (System_IO_StreamWriter_o *)0x0;
  local_88 = (System_String_o *)0x0;
  if ((TypeInfo_Utility_DeviceLockedEncryption->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_DeviceLockedEncryption);
  }
  pSVar3 = Utility_DeviceLockedEncryption__GetDeviceSpecificKey((MethodInfo *)0x0);
  if ((TypeInfo_System_Security_Cryptography_Aes->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Security_Cryptography_Aes);
  }
  local_res18 = System_Security_Cryptography_Aes__Create((MethodInfo *)0x0);
  local_50 = 0;
  local_48 = &local_res18;
  if (local_res18 == (System_Security_Cryptography_Aes_o *)0x0) {
    ThrowNullReferenceException();
  }
  (*(local_res18->klass->vtable)._13_set_Key.methodPtr)
            (local_res18,pSVar3,(local_res18->klass->vtable)._13_set_Key.method);
  if (local_res18 == (System_Security_Cryptography_Aes_o *)0x0) {
    ThrowNullReferenceException();
  }
  (*(local_res18->klass->vtable)._27_GenerateIV.methodPtr)
            (local_res18,(local_res18->klass->vtable)._27_GenerateIV.method);
  if (local_res18 == (System_Security_Cryptography_Aes_o *)0x0) {
    ThrowNullReferenceException();
  }
  pSVar3 = (*(local_res18->klass->vtable)._10_get_IV.methodPtr)
                     (local_res18,(local_res18->klass->vtable)._10_get_IV.method);
  pSVar2 = local_res18;
  if (local_res18 == (System_Security_Cryptography_Aes_o *)0x0) {
    ThrowNullReferenceException();
  }
  pSVar4 = (*(local_res18->klass->vtable)._12_get_Key.methodPtr)
                     (local_res18,(local_res18->klass->vtable)._12_get_Key.method);
  if (local_res18 == (System_Security_Cryptography_Aes_o *)0x0) {
    ThrowNullReferenceException();
  }
  pSVar5 = (*(local_res18->klass->vtable)._10_get_IV.methodPtr)
                     (local_res18,(local_res18->klass->vtable)._10_get_IV.method);
  pSVar1 = pSVar2->klass;
  transform = (System_Security_Cryptography_ICryptoTransform_o *)
              (*(pSVar1->vtable)._23_unknown.methodPtr)
                        (pSVar2,pSVar4,pSVar5,(pSVar1->vtable)._23_unknown.method);
  pSVar6 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_IO_MemoryStream);
  System_IO_MemoryStream___ctor(pSVar6,(MethodInfo *)0x0);
  local_60 = 0;
  local_58 = &local_res20;
  local_res20 = pSVar6;
  if (pSVar3 == (System_Byte_array *)0x0) {
    ThrowNullReferenceException();
  }
  if (pSVar6 != (System_IO_MemoryStream_o *)0x0) {
    (*(pSVar6->klass->vtable)._35_Write.methodPtr)
              (pSVar6,pSVar3,0,(int32_t)pSVar3->max_length,(pSVar6->klass->vtable)._35_Write.method);
    pSVar6 = local_res20;
    __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Security_Cryptography_CryptoStream);
    System_Security_Cryptography_CryptoStream___ctor
              (__this,(System_IO_Stream_o *)pSVar6,transform,1,(MethodInfo *)0x0);
    local_70 = 0;
    local_68 = &local_90;
    local_90 = __this;
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_IO_StreamWriter);
    System_IO_StreamWriter___ctor_1adfb00(__this_00,(System_IO_Stream_o *)__this,(MethodInfo *)0x0);
    local_80 = 0;
    local_78 = &local_98;
    local_98 = __this_00;
    if (__this_00 == (System_IO_StreamWriter_o *)0x0) {
      ThrowNullReferenceException();
    }
    (*(__this_00->klass->vtable)._18_Write.methodPtr)
              (__this_00,plainText,(__this_00->klass->vtable)._18_Write.method);
    if (local_98 != (System_IO_StreamWriter_o *)0x0) {
      InterfaceInvoker0_Invoke(0,(Il2CppClass *)TypeInfo_System_IDisposable,(Il2CppObject *)local_98);
    }
    if (local_90 != (System_Security_Cryptography_CryptoStream_o *)0x0) {
      InterfaceInvoker0_Invoke(0,(Il2CppClass *)TypeInfo_System_IDisposable,(Il2CppObject *)local_90);
    }
    if (local_res20 != (System_IO_MemoryStream_o *)0x0) {
      pSVar3 = (*(local_res20->klass->vtable)._41_ToArray.methodPtr)
                         (local_res20,(local_res20->klass->vtable)._41_ToArray.method);
      if ((TypeInfo_System_Convert->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Convert);
      }
      pSVar7 = System_Convert__ToBase64String(pSVar3,(MethodInfo *)0x0);
      local_88 = pSVar7;
      if (local_res20 != (System_IO_MemoryStream_o *)0x0) {
        InterfaceInvoker0_Invoke(0,(Il2CppClass *)TypeInfo_System_IDisposable,(Il2CppObject *)local_res20);
      }
      if (local_res18 != (System_Security_Cryptography_Aes_o *)0x0) {
        InterfaceInvoker0_Invoke(0,(Il2CppClass *)TypeInfo_System_IDisposable,(Il2CppObject *)local_res18);
      }
      return pSVar7;
    }
    ThrowNullReferenceException();
  }
  ThrowNullReferenceException();
}


// Utility.DeviceLockedEncryption$$Decrypt
// il2cpp: System_String_o* Utility_DeviceLockedEncryption__Decrypt (System_String_o* cipherText, const MethodInfo* method);
// 0x182335990
// eh: try 0x182335aae..0x182335e30 -> pad 0x183340550 (+14 call sites) catch Il2CppExceptionWrapper
// asm: 88 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x182335cec: nop 
// asm:   0x182335d08: nop 
// asm:   0x182335d21: nop 
// asm:   0x182335d42: mov r8, qword ptr [rsp + 0xe0]
// asm:   0x182335d4a: test r8, r8
// asm:   0x182335d4d: je 0x182335d5d
// asm:   0x182335d4f: xor ecx, ecx
// asm:   0x182335d51: mov rdx, qword ptr [rip + 0x1d635a8]  ; TypeInfo_System_IDisposable
// asm:   0x182335d58: call 0x180014840  ; InterfaceInvoker0_Invoke()
// asm:   0x182335d5d: mov rcx, qword ptr [rsp + 0x40]
// asm:   0x182335d62: test rcx, rcx
// asm:   0x182335d65: jne 0x182335df4
// asm:   0x182335d6b: mov r8, qword ptr [rsp + 0xe8]
// asm:   0x182335d73: test r8, r8
// asm:   0x182335d76: je 0x182335d86
// asm:   0x182335d78: xor ecx, ecx
// asm:   0x182335d7a: mov rdx, qword ptr [rip + 0x1d6357f]  ; TypeInfo_System_IDisposable
// asm:   0x182335d81: call 0x180014840  ; InterfaceInvoker0_Invoke()
// asm:   0x182335d86: mov rcx, qword ptr [rsp + 0x50]
// asm:   0x182335d8b: test rcx, rcx
// asm:   0x182335d8e: jne 0x182335dfa
// asm:   0x182335d90: mov r8, qword ptr [rsp + 0x30]
// asm:   0x182335d95: test r8, r8
// asm:   0x182335d98: je 0x182335da8
// asm:   0x182335d9a: xor ecx, ecx
// asm:   0x182335d9c: mov rdx, qword ptr [rip + 0x1d6355d]  ; TypeInfo_System_IDisposable
// asm:   0x182335da3: call 0x180014840  ; InterfaceInvoker0_Invoke()
// asm:   0x182335da8: mov rcx, qword ptr [rsp + 0x60]
// asm:   0x182335dad: test rcx, rcx
// asm:   0x182335db0: jne 0x182335e00
// asm:   0x182335db2: mov r8, qword ptr [rsp + 0xd0]
// asm:   0x182335dba: test r8, r8
// asm:   0x182335dbd: je 0x182335dcd
// asm:   0x182335dbf: xor ecx, ecx
// asm:   0x182335dc1: mov rdx, qword ptr [rip + 0x1d63538]  ; TypeInfo_System_IDisposable
// asm:   0x182335dc8: call 0x180014840  ; InterfaceInvoker0_Invoke()
// asm:   0x182335dcd: mov rcx, qword ptr [rsp + 0x70]
// asm:   0x182335dd2: test rcx, rcx
// asm:   0x182335dd5: jne 0x182335e06
// asm:   0x182335dd7: mov rbx, qword ptr [rsp + 0x38]
// asm:   0x182335df4: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x182335dfa: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x182335e00: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x182335e06: call 0x1804171b0  ; il2cpp_codegen_rethrow()
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
// asm:   0x183334f00: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183334f05: push rbp
// asm:   0x183334f06: sub rsp, 0x30
// asm:   0x183334f0a: mov rbp, rdx
// asm:   0x183334f0d: mov rax, qword ptr [rbp + 0x90]
// asm:   0x183334f14: mov rcx, qword ptr [rax]
// asm:   0x183334f17: mov qword ptr [rbp + 0x60], rcx
// asm:   0x183334f1b: movabs rax, 0
// asm:   0x183334f25: add rsp, 0x30
// asm:   0x183334f29: pop rbp
// asm:   0x183334f2a: ret 
// asm:   0x18333dbf0: mov qword ptr [rsp + 0x10], rdx
// asm:   0x18333dbf5: push rbp
// asm:   0x18333dbf6: sub rsp, 0x30
// asm:   0x18333dbfa: mov rbp, rdx
// asm:   0x18333dbfd: mov rax, qword ptr [rbp + 0x88]
// asm:   0x18333dc04: mov rcx, qword ptr [rax]
// asm:   0x18333dc07: mov qword ptr [rbp + 0x50], rcx
// asm:   0x18333dc0b: movabs rax, 0
// asm:   0x18333dc15: add rsp, 0x30
// asm:   0x18333dc19: pop rbp
// asm:   0x18333dc1a: ret 
// asm:   0x183340550: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183340555: push rbp
// asm:   0x183340556: sub rsp, 0x30
// asm:   0x18334055a: mov rbp, rdx
// asm:   0x18334055d: mov rax, qword ptr [rbp + 0x98]
// asm:   0x183340564: mov rcx, qword ptr [rax]
// asm:   0x183340567: mov qword ptr [rbp + 0x70], rcx
// asm:   0x18334056b: movabs rax, 0
// asm:   0x183340575: add rsp, 0x30
// asm:   0x183340579: pop rbp
// asm:   0x18334057a: ret 

System_String_o * Utility_DeviceLockedEncryption__Decrypt(System_String_o *cipherText,MethodInfo *method)

{
  System_Security_Cryptography_Aes_c *pSVar1;
  System_Security_Cryptography_Aes_o *pSVar2;
  int32_t iVar3;
  System_Byte_array *pSVar4;
  System_Byte_array *pSVar5;
  System_Byte_array *buffer;
  System_Security_Cryptography_ICryptoTransform_o *transform;
  System_IO_MemoryStream_o *__this;
  System_Security_Cryptography_CryptoStream_o *__this_00;
  System_IO_StreamReader_o *__this_01;
  System_String_o *pSVar6;
  uint32_t length;
  System_Security_Cryptography_Aes_o *local_res8 [2];
  System_IO_StreamReader_o *local_res18;
  System_Security_Cryptography_CryptoStream_o *local_res20;
  System_IO_MemoryStream_o *local_98;
  System_String_o *local_90;
  undefined8 local_88;
  System_IO_StreamReader_o **local_80;
  undefined8 local_78;
  System_Security_Cryptography_CryptoStream_o **local_70;
  undefined8 local_68;
  System_IO_MemoryStream_o **local_60;
  undefined8 local_58;
  System_Security_Cryptography_Aes_o **local_50;
  
  if (Il2CppMethodInitialized_18434781b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Security_Cryptography_Aes);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_byte_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Convert);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Security_Cryptography_CryptoStream);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_DeviceLockedEncryption);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IDisposable);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IO_MemoryStream);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IO_StreamReader);
    Il2CppMethodInitialized_18434781b = '\x01';
  }
  local_res8[0] = (System_Security_Cryptography_Aes_o *)0x0;
  local_98 = (System_IO_MemoryStream_o *)0x0;
  local_res20 = (System_Security_Cryptography_CryptoStream_o *)0x0;
  local_res18 = (System_IO_StreamReader_o *)0x0;
  local_90 = (System_String_o *)0x0;
  if ((TypeInfo_Utility_DeviceLockedEncryption->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_DeviceLockedEncryption);
  }
  pSVar4 = Utility_DeviceLockedEncryption__GetDeviceSpecificKey((MethodInfo *)0x0);
  if ((TypeInfo_System_Convert->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Convert);
  }
  pSVar5 = System_Convert__FromBase64String(cipherText,(MethodInfo *)0x0);
  if ((TypeInfo_System_Security_Cryptography_Aes->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Security_Cryptography_Aes);
  }
  local_res8[0] = System_Security_Cryptography_Aes__Create((MethodInfo *)0x0);
  local_58 = 0;
  local_50 = local_res8;
  if (local_res8[0] == (System_Security_Cryptography_Aes_o *)0x0) {
    ThrowNullReferenceException();
  }
  (*(local_res8[0]->klass->vtable)._13_set_Key.methodPtr)
            (local_res8[0],pSVar4,(local_res8[0]->klass->vtable)._13_set_Key.method);
  if (local_res8[0] == (System_Security_Cryptography_Aes_o *)0x0) {
    ThrowNullReferenceException();
  }
  iVar3 = (*(local_res8[0]->klass->vtable)._6_get_BlockSize.methodPtr)
                    (local_res8[0],(local_res8[0]->klass->vtable)._6_get_BlockSize.method);
  pSVar4 = (System_Byte_array *)SZArrayNew(TypeInfo_byte_array,(int)((iVar3 >> 0x1f & 7U) + iVar3) >> 3);
  if (pSVar4 == (System_Byte_array *)0x0) {
    ThrowNullReferenceException();
  }
  System_Array__Copy_1b3f080
            ((System_Array_o *)pSVar5,0,(System_Array_o *)pSVar4,0,(int32_t)pSVar4->max_length,
             (MethodInfo *)0x0);
  if (local_res8[0] == (System_Security_Cryptography_Aes_o *)0x0) {
    ThrowNullReferenceException();
  }
  (*(local_res8[0]->klass->vtable)._11_set_IV.methodPtr)
            (local_res8[0],pSVar4,(local_res8[0]->klass->vtable)._11_set_IV.method);
  if (pSVar5 == (System_Byte_array *)0x0) {
    ThrowNullReferenceException();
  }
  length = (int)pSVar5->max_length - (int)pSVar4->max_length;
  buffer = (System_Byte_array *)SZArrayNew(TypeInfo_byte_array,length);
  System_Array__Copy_1b3f080
            ((System_Array_o *)pSVar5,(int32_t)pSVar4->max_length,(System_Array_o *)buffer,0,length,
             (MethodInfo *)0x0);
  pSVar2 = local_res8[0];
  if (local_res8[0] == (System_Security_Cryptography_Aes_o *)0x0) {
    ThrowNullReferenceException();
  }
  pSVar4 = (*(local_res8[0]->klass->vtable)._12_get_Key.methodPtr)
                     (local_res8[0],(local_res8[0]->klass->vtable)._12_get_Key.method);
  if (local_res8[0] != (System_Security_Cryptography_Aes_o *)0x0) {
    pSVar5 = (*(local_res8[0]->klass->vtable)._10_get_IV.methodPtr)
                       (local_res8[0],(local_res8[0]->klass->vtable)._10_get_IV.method);
    pSVar1 = pSVar2->klass;
    transform = (*(pSVar1->vtable)._25_CreateDecryptor.methodPtr)
                          (pSVar2,pSVar4,pSVar5,(pSVar1->vtable)._25_CreateDecryptor.method);
    __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_IO_MemoryStream);
    System_IO_MemoryStream___ctor_1ad7fc0(__this,buffer,(MethodInfo *)0x0);
    local_68 = 0;
    local_60 = &local_98;
    local_98 = __this;
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Security_Cryptography_CryptoStream);
    System_Security_Cryptography_CryptoStream___ctor
              (__this_00,(System_IO_Stream_o *)__this,transform,0,(MethodInfo *)0x0);
    local_78 = 0;
    local_70 = &local_res20;
    local_res20 = __this_00;
    __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_IO_StreamReader);
    System_IO_StreamReader___ctor_1add360(__this_01,(System_IO_Stream_o *)__this_00,(MethodInfo *)0x0);
    local_88 = 0;
    local_80 = &local_res18;
    local_res18 = __this_01;
    if (__this_01 != (System_IO_StreamReader_o *)0x0) {
      pSVar6 = (*(__this_01->klass->vtable)._13_ReadToEnd.methodPtr)
                         (__this_01,(__this_01->klass->vtable)._13_ReadToEnd.method);
      local_90 = pSVar6;
      if (local_res18 != (System_IO_StreamReader_o *)0x0) {
        InterfaceInvoker0_Invoke(0,(Il2CppClass *)TypeInfo_System_IDisposable,(Il2CppObject *)local_res18);
      }
      if (local_res20 != (System_Security_Cryptography_CryptoStream_o *)0x0) {
        InterfaceInvoker0_Invoke(0,(Il2CppClass *)TypeInfo_System_IDisposable,(Il2CppObject *)local_res20);
      }
      if (local_98 != (System_IO_MemoryStream_o *)0x0) {
        InterfaceInvoker0_Invoke(0,(Il2CppClass *)TypeInfo_System_IDisposable,(Il2CppObject *)local_98);
      }
      if (local_res8[0] != (System_Security_Cryptography_Aes_o *)0x0) {
        InterfaceInvoker0_Invoke(0,(Il2CppClass *)TypeInfo_System_IDisposable,(Il2CppObject *)local_res8[0]);
      }
      return pSVar6;
    }
    ThrowNullReferenceException();
  }
  ThrowNullReferenceException();
}


// Utility.DeviceLockedEncryption$$.ctor
// il2cpp: void Utility_DeviceLockedEncryption___ctor (Utility_DeviceLockedEncryption_o* __this, const MethodInfo* method);
// 0x18054c890

void
Utility_DeviceLockedEncryption___ctor(Utility_DeviceLockedEncryption_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// Utility.DeviceLockedEncryption$$.cctor
// il2cpp: void Utility_DeviceLockedEncryption___cctor (const MethodInfo* method);
// 0x182336420

void Utility_DeviceLockedEncryption___cctor(MethodInfo *method)

{
  if (Il2CppMethodInitialized_18434781c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_DeviceLockedEncryption);
    il2cpp_codegen_initialize_runtime_metadata(&"YourCustomSecretSaltChangeThis_123!");
    Il2CppMethodInitialized_18434781c = '\x01';
  }
  TypeInfo_Utility_DeviceLockedEncryption->static_fields->SecretSalt = "YourCustomSecretSaltChangeThis_123!";
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_Utility_DeviceLockedEncryption->static_fields->SecretSalt,"YourCustomSecretSaltChangeThis_123!");
  return;
}


