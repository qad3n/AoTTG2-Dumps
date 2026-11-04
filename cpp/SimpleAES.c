// Type: SimpleAES
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/SimpleAES.cs
// Prior real C# source (older reference): Assets/Scripts/Utility/SimpleAES.cs
// --------------------------------

// SimpleAES$$.ctor
// il2cpp: void SimpleAES___ctor (SimpleAES_o* __this, const MethodInfo* method);
// 0x181dae880

void SimpleAES___ctor(SimpleAES_o *__this,MethodInfo *method)

{
  System_Security_Cryptography_RijndaelManaged_o *__this_00;
  System_Security_Cryptography_ICryptoTransform_o *pSVar1;
  System_Text_UTF8Encoding_o *__this_01;
  
  if (Il2CppMethodInitialized_184344900 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Security_Cryptography_RijndaelManaged);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleAES);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Text_UTF8Encoding);
    Il2CppMethodInitialized_184344900 = '\x01';
  }
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Security_Cryptography_RijndaelManaged);
  System_Security_Cryptography_RijndaelManaged___ctor(__this_00,(MethodInfo *)0x0);
  if ((TypeInfo_SimpleAES->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleAES);
  }
  if (__this_00 != (System_Security_Cryptography_RijndaelManaged_o *)0x0) {
    pSVar1 = (*(__this_00->klass->vtable)._23_CreateEncryptor.methodPtr)
                       (__this_00,TypeInfo_SimpleAES->static_fields->key,
                        TypeInfo_SimpleAES->static_fields->vector,
                        (__this_00->klass->vtable)._23_CreateEncryptor.method);
    (__this->fields).encryptor = pSVar1;
    Il2CppCodeGenWriteBarrier(&(__this->fields).encryptor,pSVar1);
    pSVar1 = (*(__this_00->klass->vtable)._25_CreateDecryptor.methodPtr)
                       (__this_00,TypeInfo_SimpleAES->static_fields->key,
                        TypeInfo_SimpleAES->static_fields->vector,
                        (__this_00->klass->vtable)._25_CreateDecryptor.method);
    (__this->fields).decryptor = pSVar1;
    Il2CppCodeGenWriteBarrier(&(__this->fields).decryptor,pSVar1);
    __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Text_UTF8Encoding);
    System_Text_UTF8Encoding___ctor(__this_01,(MethodInfo *)0x0);
    (__this->fields).encoder = __this_01;
    Il2CppCodeGenWriteBarrier(&(__this->fields).encoder,__this_01);
    return;
  }
  ThrowNullReferenceException();
}


// SimpleAES$$Decrypt
// il2cpp: System_String_o* SimpleAES__Decrypt (SimpleAES_o* __this, System_String_o* encrypted, const MethodInfo* method);
// 0x181dae4d0

System_String_o * SimpleAES__Decrypt(SimpleAES_o *__this,System_String_o *encrypted,MethodInfo *method)

{
  System_Text_UTF8Encoding_o *pSVar1;
  System_Byte_array *pSVar2;
  System_String_o *pSVar3;
  
  if (Il2CppMethodInitialized_184344901 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Convert);
    Il2CppMethodInitialized_184344901 = '\x01';
  }
  pSVar1 = (__this->fields).encoder;
  if ((TypeInfo_System_Convert->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Convert);
  }
  pSVar2 = System_Convert__FromBase64String(encrypted,(MethodInfo *)0x0);
  pSVar2 = SimpleAES__Transform(__this,pSVar2,(__this->fields).decryptor,(MethodInfo *)0x0);
  if (pSVar1 != (System_Text_UTF8Encoding_o *)0x0) {
    pSVar3 = (*(pSVar1->klass->vtable)._34_GetString.methodPtr)
                       (pSVar1,pSVar2,(pSVar1->klass->vtable)._34_GetString.method);
    return pSVar3;
  }
  ThrowNullReferenceException();
}


// SimpleAES$$Decrypt
// il2cpp: System_Byte_array* SimpleAES__Decrypt (SimpleAES_o* __this, System_Byte_array* buffer, const MethodInfo* method);
// 0x181dae570

System_Byte_array *
SimpleAES__Decrypt_1dae570(SimpleAES_o *__this,System_Byte_array *buffer,MethodInfo *method)

{
  System_Byte_array *pSVar1;
  
  pSVar1 = SimpleAES__Transform(__this,buffer,(__this->fields).decryptor,(MethodInfo *)0x0);
  return pSVar1;
}


// SimpleAES$$Encrypt
// il2cpp: System_String_o* SimpleAES__Encrypt (SimpleAES_o* __this, System_String_o* unencrypted, const MethodInfo* method);
// 0x181dae590

System_String_o * SimpleAES__Encrypt(SimpleAES_o *__this,System_String_o *unencrypted,MethodInfo *method)

{
  System_Text_UTF8Encoding_o *pSVar1;
  System_Byte_array *pSVar2;
  System_String_o *pSVar3;
  
  if (Il2CppMethodInitialized_184344902 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Convert);
    Il2CppMethodInitialized_184344902 = '\x01';
  }
  pSVar1 = (__this->fields).encoder;
  if (pSVar1 != (System_Text_UTF8Encoding_o *)0x0) {
    pSVar2 = (*(pSVar1->klass->vtable)._18_GetBytes.methodPtr)
                       (pSVar1,unencrypted,(pSVar1->klass->vtable)._18_GetBytes.method);
    pSVar2 = SimpleAES__Transform(__this,pSVar2,(__this->fields).encryptor,(MethodInfo *)0x0);
    if ((TypeInfo_System_Convert->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Convert);
    }
    pSVar3 = System_Convert__ToBase64String(pSVar2,(MethodInfo *)0x0);
    return pSVar3;
  }
  ThrowNullReferenceException();
}


// SimpleAES$$Encrypt
// il2cpp: System_Byte_array* SimpleAES__Encrypt (SimpleAES_o* __this, System_Byte_array* buffer, const MethodInfo* method);
// 0x181dae580

System_Byte_array *
SimpleAES__Encrypt_1dae580(SimpleAES_o *__this,System_Byte_array *buffer,MethodInfo *method)

{
  System_Byte_array *pSVar1;
  
  pSVar1 = SimpleAES__Transform(__this,buffer,(__this->fields).encryptor,(MethodInfo *)0x0);
  return pSVar1;
}


// SimpleAES$$Transform
// il2cpp: System_Byte_array* SimpleAES__Transform (SimpleAES_o* __this, System_Byte_array* buffer, System_Security_Cryptography_ICryptoTransform_o* transform, const MethodInfo* method);
// 0x181dae620
// eh: try 0x181dae6d5..0x181dae789 -> pad 0x183315a20 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 22 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181dae727: mov r8, qword ptr [rsp + 0x78]
// asm:   0x181dae72c: test r8, r8
// asm:   0x181dae72f: je 0x181dae73f
// asm:   0x181dae731: xor ecx, ecx
// asm:   0x181dae733: mov rdx, qword ptr [rip + 0x22eabc6]  ; TypeInfo_System_IDisposable
// asm:   0x181dae73a: call 0x180014840  ; InterfaceInvoker0_Invoke()
// asm:   0x181dae73f: mov rcx, qword ptr [rsp + 0x38]
// asm:   0x181dae744: test rcx, rcx
// asm:   0x181dae747: jne 0x181dae789
// asm:   0x181dae749: mov rdi, qword ptr [rsp + 0x80]
// asm:   0x181dae789: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183315a20: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183315a25: push rbp
// asm:   0x183315a26: sub rsp, 0x30
// asm:   0x183315a2a: mov rbp, rdx
// asm:   0x183315a2d: mov rax, qword ptr [rbp + 0x30]
// asm:   0x183315a31: mov rcx, qword ptr [rax]
// asm:   0x183315a34: mov qword ptr [rbp + 0x38], rcx
// asm:   0x183315a38: movabs rax, 0
// asm:   0x183315a42: add rsp, 0x30
// asm:   0x183315a46: pop rbp
// asm:   0x183315a47: ret 

System_Byte_array *
SimpleAES__Transform
          (SimpleAES_o *__this,System_Byte_array *buffer,
          System_Security_Cryptography_ICryptoTransform_o *transform,MethodInfo *method)

{
  System_IO_MemoryStream_o *__this_00;
  System_Security_Cryptography_CryptoStream_o *__this_01;
  System_Byte_array *pSVar1;
  
  if (Il2CppMethodInitialized_184344903 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Security_Cryptography_CryptoStream);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IDisposable);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IO_MemoryStream);
    Il2CppMethodInitialized_184344903 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_IO_MemoryStream);
  System_IO_MemoryStream___ctor(__this_00,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Security_Cryptography_CryptoStream);
  System_Security_Cryptography_CryptoStream___ctor
            (__this_01,(System_IO_Stream_o *)__this_00,transform,1,(MethodInfo *)0x0);
  if (buffer == (System_Byte_array *)0x0) {
    ThrowNullReferenceException();
  }
  if (__this_01 == (System_Security_Cryptography_CryptoStream_o *)0x0) {
    ThrowNullReferenceException();
  }
  (*(__this_01->klass->vtable)._35_Write.methodPtr)
            (__this_01,buffer,0,(int32_t)buffer->max_length,(__this_01->klass->vtable)._35_Write.method);
  if (__this_01 != (System_Security_Cryptography_CryptoStream_o *)0x0) {
    InterfaceInvoker0_Invoke(0,(Il2CppClass *)TypeInfo_System_IDisposable,(Il2CppObject *)__this_01);
  }
  if (__this_00 != (System_IO_MemoryStream_o *)0x0) {
    pSVar1 = (*(__this_00->klass->vtable)._41_ToArray.methodPtr)
                       (__this_00,(__this_00->klass->vtable)._41_ToArray.method);
    return pSVar1;
  }
  ThrowNullReferenceException();
}


// SimpleAES$$.cctor
// il2cpp: void SimpleAES___cctor (const MethodInfo* method);
// 0x181dae790

void SimpleAES___cctor(MethodInfo *method)

{
  System_Byte_array *pSVar1;
  
  if (Il2CppMethodInitialized_184344904 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_byte_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleAES);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               FieldRva_PrivateImplementationDetails_4E5ACEA714611B9D5E49BE72A6BA4F74AA6444E0AA9D11B89108FD01ED5C9D33
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               FieldRva_PrivateImplementationDetails_EC120F573152E9A5B0D14289E7AC9765CDB96735F60BE7664FE88289D77C602C
              );
    Il2CppMethodInitialized_184344904 = '\x01';
  }
  pSVar1 = (System_Byte_array *)SZArrayNew(TypeInfo_byte_array,0x20);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_1a54600
            ((System_Array_o *)pSVar1,
             FieldRva_PrivateImplementationDetails_4E5ACEA714611B9D5E49BE72A6BA4F74AA6444E0AA9D11B89108FD01ED5C9D33
             ,(MethodInfo *)0x0);
  TypeInfo_SimpleAES->static_fields->key = pSVar1;
  Il2CppCodeGenWriteBarrier(&TypeInfo_SimpleAES->static_fields->key,pSVar1);
  pSVar1 = (System_Byte_array *)SZArrayNew(TypeInfo_byte_array,0x10);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_1a54600
            ((System_Array_o *)pSVar1,
             FieldRva_PrivateImplementationDetails_EC120F573152E9A5B0D14289E7AC9765CDB96735F60BE7664FE88289D77C602C
             ,(MethodInfo *)0x0);
  TypeInfo_SimpleAES->static_fields->vector = pSVar1;
  Il2CppCodeGenWriteBarrier(&TypeInfo_SimpleAES->static_fields->vector,pSVar1);
  return;
}


