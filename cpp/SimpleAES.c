// Type: SimpleAES
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/SimpleAES.cs
// Prior real C# source (older reference): Assets/Scripts/Utility/SimpleAES.cs
// --------------------------------

// SimpleAES$$.ctor
// il2cpp: void SimpleAES___ctor (SimpleAES_o* __this, const MethodInfo* method);
// 0x5852280

void SimpleAES___ctor(SimpleAES_o *__this,MethodInfo *method)

{
  System_Security_Cryptography_RijndaelManaged_o *__this_00;
  System_Security_Cryptography_ICryptoTransform_o *pSVar1;
  System_Text_UTF8Encoding_o *__this_01;
  
  if (Il2CppMethodInitialized_07545058 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Security_Cryptography_RijndaelManaged);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleAES);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Text_UTF8Encoding);
    Il2CppMethodInitialized_07545058 = '\x01';
  }
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Security_Cryptography_RijndaelManaged);
  System_Security_Cryptography_RijndaelManaged___ctor(__this_00,(MethodInfo *)0x0);
  if ((TypeInfo_SimpleAES->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleAES);
  }
  if (__this_00 == (System_Security_Cryptography_RijndaelManaged_o *)0x0) {
    ThrowNullReferenceException();
  }
  pSVar1 = (*(__this_00->klass->vtable)._23_CreateEncryptor.methodPtr)
                     (__this_00,TypeInfo_SimpleAES->static_fields->key,
                      TypeInfo_SimpleAES->static_fields->vector,
                      (__this_00->klass->vtable)._23_CreateEncryptor.method);
  (__this->fields).encryptor = pSVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields).encryptor);
  pSVar1 = (*(__this_00->klass->vtable)._25_CreateDecryptor.methodPtr)
                     (__this_00,TypeInfo_SimpleAES->static_fields->key,
                      TypeInfo_SimpleAES->static_fields->vector,
                      (__this_00->klass->vtable)._25_CreateDecryptor.method);
  (__this->fields).decryptor = pSVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields).decryptor);
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Text_UTF8Encoding);
  System_Text_UTF8Encoding___ctor(__this_01,(MethodInfo *)0x0);
  (__this->fields).encoder = __this_01;
  Il2CppCodeGenWriteBarrier(&(__this->fields).encoder);
  return;
}


// SimpleAES$$Decrypt
// il2cpp: System_String_o* SimpleAES__Decrypt (SimpleAES_o* __this, System_String_o* encrypted, const MethodInfo* method);
// 0x58523b0

System_String_o * SimpleAES__Decrypt(SimpleAES_o *__this,System_String_o *encrypted,MethodInfo *method)

{
  System_Text_UTF8Encoding_o *pSVar1;
  System_Byte_array *pSVar2;
  System_String_o *pSVar3;
  MethodInfo *in_RCX;
  
  if (Il2CppMethodInitialized_07545059 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Convert);
    Il2CppMethodInitialized_07545059 = '\x01';
  }
  pSVar1 = (__this->fields).encoder;
  if ((TypeInfo_System_Convert->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Convert);
  }
  pSVar2 = System_Convert__FromBase64String(encrypted,(MethodInfo *)0x0);
  pSVar2 = SimpleAES__Transform((SimpleAES_o *)encrypted,pSVar2,(__this->fields).decryptor,in_RCX);
  if (pSVar1 == (System_Text_UTF8Encoding_o *)0x0) {
    ThrowNullReferenceException();
  }
  pSVar3 = (*(pSVar1->klass->vtable)._35_GetString.methodPtr)
                     (pSVar1,pSVar2,(pSVar1->klass->vtable)._35_GetString.method);
  return pSVar3;
}


// SimpleAES$$Decrypt
// il2cpp: System_Byte_array* SimpleAES__Decrypt (SimpleAES_o* __this, System_Byte_array* buffer, const MethodInfo* method);
// 0x5852440

System_Byte_array *
SimpleAES__Decrypt_5752440(SimpleAES_o *__this,System_Byte_array *buffer,MethodInfo *method)

{
  System_Byte_array *pSVar1;
  MethodInfo *in_RCX;
  
  pSVar1 = SimpleAES__Transform(__this,buffer,(__this->fields).decryptor,in_RCX);
  return pSVar1;
}


// SimpleAES$$Encrypt
// il2cpp: System_String_o* SimpleAES__Encrypt (SimpleAES_o* __this, System_String_o* unencrypted, const MethodInfo* method);
// 0x5852600

System_String_o * SimpleAES__Encrypt(SimpleAES_o *__this,System_String_o *unencrypted,MethodInfo *method)

{
  System_Byte_array *pSVar1;
  System_String_o *pSVar2;
  MethodInfo *in_RCX;
  System_Text_UTF8Encoding_o *__this_00;
  
  if (Il2CppMethodInitialized_0754505a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Convert);
    Il2CppMethodInitialized_0754505a = '\x01';
  }
  __this_00 = (__this->fields).encoder;
  if (__this_00 == (System_Text_UTF8Encoding_o *)0x0) {
    ThrowNullReferenceException();
  }
  pSVar1 = (*(__this_00->klass->vtable)._18_GetBytes.methodPtr)
                     (__this_00,unencrypted,(__this_00->klass->vtable)._18_GetBytes.method);
  pSVar1 = SimpleAES__Transform((SimpleAES_o *)__this_00,pSVar1,(__this->fields).encryptor,in_RCX);
  if ((TypeInfo_System_Convert->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Convert);
  }
  pSVar2 = System_Convert__ToBase64String(pSVar1,(MethodInfo *)0x0);
  return pSVar2;
}


// SimpleAES$$Encrypt
// il2cpp: System_Byte_array* SimpleAES__Encrypt (SimpleAES_o* __this, System_Byte_array* buffer, const MethodInfo* method);
// 0x5852680

System_Byte_array *
SimpleAES__Encrypt_5752680(SimpleAES_o *__this,System_Byte_array *buffer,MethodInfo *method)

{
  System_Byte_array *pSVar1;
  MethodInfo *in_RCX;
  
  pSVar1 = SimpleAES__Transform(__this,buffer,(__this->fields).encryptor,in_RCX);
  return pSVar1;
}


// SimpleAES$$Transform
// il2cpp: System_Byte_array* SimpleAES__Transform (SimpleAES_o* __this, System_Byte_array* buffer, System_Security_Cryptography_ICryptoTransform_o* transform, const MethodInfo* method);
// 0x5852450
// eh: try 0x5852512..0x58525bc -> pad 0x58525c1 (+1 call sites) catch Il2CppExceptionWrapper, cleanup [compiler noexcept guard]
// eh: try 0x58525d9..0x58525de -> pad 0x58525e3 cleanup
// eh: try 0x58525e6..0x58525f0 -> pad 0x58525f8 catch (...) [compiler noexcept guard]
// asm: 19 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x585254f: nop 
// asm:   0x58525af: mov rdi, r14
// asm:   0x58525b2: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x58525c1: mov rbx, rax
// asm:   0x58525c4: cmp edx, 1
// asm:   0x58525c7: jne 0x58525e6
// asm:   0x58525c9: mov rdi, rbx
// asm:   0x58525cc: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x58525d1: mov r14, qword ptr [rax]
// asm:   0x58525d4: mov qword ptr [rsp + 8], r14
// asm:   0x58525d9: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x58525de: jmp 0x5852520
// asm:   0x58525e3: mov rbx, rax
// asm:   0x58525e6: lea rdi, [rsp + 8]
// asm:   0x58525eb: call 0x2fce4e0  ; il2cpp_runtime_helper_02fce4e0()
// asm:   0x58525f0: mov rdi, rbx
// asm:   0x58525f3: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x58525f8: mov rdi, rax
// asm:   0x58525fb: call 0x2ab61e0  ; __clang_call_terminate()

System_Byte_array *
SimpleAES__Transform
          (SimpleAES_o *__this,System_Byte_array *buffer,
          System_Security_Cryptography_ICryptoTransform_o *transform,MethodInfo *method)

{
  System_Security_Cryptography_CryptoStream_c *pSVar1;
  Il2CppRuntimeInterfaceOffsetPair *pIVar2;
  System_IO_MemoryStream_o *__this_00;
  System_Security_Cryptography_CryptoStream_o *pSVar3;
  VirtualInvokeData *pVVar4;
  System_Byte_array *pSVar5;
  ulong uVar6;
  long lVar7;
  System_Security_Cryptography_CryptoStream_o *local_38;
  undefined8 local_30;
  undefined1 *local_28;
  
  if (Il2CppMethodInitialized_0754505b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Security_Cryptography_CryptoStream);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IDisposable);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IO_MemoryStream);
    Il2CppMethodInitialized_0754505b = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_IO_MemoryStream);
  System_IO_MemoryStream___ctor(__this_00,(MethodInfo *)0x0);
  pSVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Security_Cryptography_CryptoStream);
  System_Security_Cryptography_CryptoStream___ctor
            (pSVar3,(System_IO_Stream_o *)__this_00,transform,1,(MethodInfo *)0x0);
  local_28 = (undefined1 *)&local_38;
  local_30 = 0;
  local_38 = pSVar3;
  if ((buffer == (System_Byte_array *)0x0) || (pSVar3 == (System_Security_Cryptography_CryptoStream_o *)0x0))
  {
    ThrowNullReferenceException();
  }
  local_28 = (undefined1 *)&local_38;
  (*(pSVar3->klass->vtable)._36_Write.methodPtr)
            (pSVar3,buffer,0,(int32_t)buffer->max_length,(pSVar3->klass->vtable)._36_Write.method);
  pSVar3 = local_38;
  if (local_38 != (System_Security_Cryptography_CryptoStream_o *)0x0) {
    pSVar1 = local_38->klass;
    uVar6 = (ulong)(pSVar1->_2).interface_offsets_count;
    if (uVar6 != 0) {
      pIVar2 = (pSVar1->_1).interfaceOffsets;
      lVar7 = 0;
      do {
        if (*(System_IDisposable_c **)((long)&pIVar2->interfaceType + lVar7) == TypeInfo_System_IDisposable) {
          pVVar4 = &(pSVar1->vtable)._0_Equals + *(int *)((long)&pIVar2->offset + lVar7);
          goto label_0585257d;
        }
        lVar7 = lVar7 + 0x10;
      } while (uVar6 * 0x10 != lVar7);
    }
    pVVar4 = GetInterfaceInvokeDataFromVTableSlowPath
                       ((Il2CppObject *)local_38,(Il2CppClass *)TypeInfo_System_IDisposable,0);
label_0585257d:
    (*pVVar4->methodPtr)((Il2CppObject *)pSVar3,pVVar4->method);
  }
  if (__this_00 == (System_IO_MemoryStream_o *)0x0) {
    ThrowNullReferenceException();
  }
  pSVar5 = (*(__this_00->klass->vtable)._42_ToArray.methodPtr)
                     (__this_00,(__this_00->klass->vtable)._42_ToArray.method);
  return pSVar5;
}


// SimpleAES$$.cctor
// il2cpp: void SimpleAES___cctor (const MethodInfo* method);
// 0x5852690

void SimpleAES___cctor(MethodInfo *method)

{
  SimpleAES_StaticFields *pSVar1;
  System_Byte_array *pSVar2;
  
  if (Il2CppMethodInitialized_0754505c == '\0') {
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
    Il2CppMethodInitialized_0754505c = '\x01';
  }
  pSVar2 = (System_Byte_array *)SZArrayNew(TypeInfo_byte_array,0x20);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_53cbb40
            ((System_Array_o *)pSVar2,
             FieldRva_PrivateImplementationDetails_4E5ACEA714611B9D5E49BE72A6BA4F74AA6444E0AA9D11B89108FD01ED5C9D33
             ,(MethodInfo *)0x0);
  TypeInfo_SimpleAES->static_fields->key = pSVar2;
  Il2CppCodeGenWriteBarrier(&TypeInfo_SimpleAES->static_fields->key);
  pSVar2 = (System_Byte_array *)SZArrayNew(TypeInfo_byte_array,0x10);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_53cbb40
            ((System_Array_o *)pSVar2,
             FieldRva_PrivateImplementationDetails_EC120F573152E9A5B0D14289E7AC9765CDB96735F60BE7664FE88289D77C602C
             ,(MethodInfo *)0x0);
  pSVar1 = TypeInfo_SimpleAES->static_fields;
  pSVar1->vector = pSVar2;
  Il2CppCodeGenWriteBarrier(&pSVar1->vector);
  return;
}


