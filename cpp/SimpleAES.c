// Type: SimpleAES
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/SimpleAES.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/Utility/SimpleAES.cs  [CHANGED since prior version]
// --------------------------------

// SimpleAES$$.ctor
// il2cpp: void SimpleAES___ctor (SimpleAES_o* __this, const MethodInfo* method);
// 0x3d72c10

void SimpleAES___ctor(SimpleAES_o *__this,MethodInfo *method)

{
  System_Security_Cryptography_RijndaelManaged_o *__this_00;
  System_Security_Cryptography_ICryptoTransform_o *pSVar1;
  System_Text_UTF8Encoding_o *__this_01;
  
  if (DAT_0570261f == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_RijndaelManaged);
    il2cpp_init_method_metadata(&TypeInfo_SimpleAES);
    il2cpp_init_method_metadata(&TypeInfo_UTF8Encoding);
    DAT_0570261f = '\x01';
  }
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  __this_00 = (System_Security_Cryptography_RijndaelManaged_o *)il2cpp_runtime_glue(TypeInfo_RijndaelManaged);
  System_Security_Cryptography_RijndaelManaged___ctor(__this_00,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_SimpleAES + 0xe4) == 0) {
    il2cpp_init_class();
  }
  if (__this_00 != (System_Security_Cryptography_RijndaelManaged_o *)0x0) {
    pSVar1 = (System_Security_Cryptography_ICryptoTransform_o *)
             (*(__this_00->klass->vtable)._23_CreateEncryptor.methodPtr)
                       (__this_00,**(undefined8 **)(TypeInfo_SimpleAES + 0xb8),
                        (*(undefined8 **)(TypeInfo_SimpleAES + 0xb8))[1],
                        (__this_00->klass->vtable)._23_CreateEncryptor.method);
    (__this->fields).encryptor = pSVar1;
    il2cpp_runtime_glue(&(__this->fields).encryptor,pSVar1);
    pSVar1 = (System_Security_Cryptography_ICryptoTransform_o *)
             (*(__this_00->klass->vtable)._25_CreateDecryptor.methodPtr)
                       (__this_00,**(undefined8 **)(TypeInfo_SimpleAES + 0xb8),
                        (*(undefined8 **)(TypeInfo_SimpleAES + 0xb8))[1],
                        (__this_00->klass->vtable)._25_CreateDecryptor.method);
    (__this->fields).decryptor = pSVar1;
    il2cpp_runtime_glue(&__this->fields);
    __this_01 = (System_Text_UTF8Encoding_o *)il2cpp_runtime_glue(TypeInfo_UTF8Encoding);
    System_Text_UTF8Encoding___ctor(__this_01,(MethodInfo *)0x0);
    (__this->fields).encoder = __this_01;
    il2cpp_runtime_glue(&(__this->fields).encoder,__this_01);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// SimpleAES$$Decrypt
// il2cpp: System_String_o* SimpleAES__Decrypt (SimpleAES_o* __this, System_String_o* encrypted, const MethodInfo* method);
// 0x3d72d40

System_String_o *
SimpleAES__Decrypt(SimpleAES_o *__this,System_String_o *encrypted,MethodInfo *method)

{
  System_Text_UTF8Encoding_o *pSVar1;
  System_Text_UTF8Encoding_c *pSVar2;
  Il2CppMethodPointer vtable_dispatch;
  System_Byte_array *pSVar3;
  System_String_o *pSVar4;
  MethodInfo *in_RCX;
  
  if (DAT_05702620 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Convert);
    DAT_05702620 = '\x01';
  }
  pSVar1 = (__this->fields).encoder;
  if (*(int *)(TypeInfo_Convert + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar3 = System_Convert__FromBase64String(encrypted,(MethodInfo *)0x0);
  pSVar3 = SimpleAES__Transform((SimpleAES_o *)encrypted,pSVar3,(__this->fields).decryptor,in_RCX);
  if (pSVar1 != (System_Text_UTF8Encoding_o *)0x0) {
    pSVar2 = pSVar1->klass;
    vtable_dispatch = (pSVar2->vtable)._35_GetString.methodPtr;
    pSVar4 = (System_String_o *)
             (*vtable_dispatch)
                       (pSVar1,pSVar3,(pSVar2->vtable)._35_GetString.method,pSVar2,
                        vtable_dispatch);
    return pSVar4;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// SimpleAES$$Decrypt
// il2cpp: System_Byte_array* SimpleAES__Decrypt (SimpleAES_o* __this, System_Byte_array* buffer, const MethodInfo* method);
// 0x3d72dd0

System_Byte_array *
SimpleAES__Decrypt(SimpleAES_o *__this,System_Byte_array *buffer,MethodInfo *method)

{
  System_Byte_array *pSVar1;
  MethodInfo *in_RCX;
  
  pSVar1 = SimpleAES__Transform(__this,buffer,(__this->fields).decryptor,in_RCX);
  return pSVar1;
}


// SimpleAES$$Encrypt
// il2cpp: System_String_o* SimpleAES__Encrypt (SimpleAES_o* __this, System_String_o* unencrypted, const MethodInfo* method);
// 0x3d73000

System_String_o *
SimpleAES__Encrypt(SimpleAES_o *__this,System_String_o *unencrypted,MethodInfo *method)

{
  System_Byte_array *pSVar1;
  System_String_o *pSVar2;
  MethodInfo *in_RCX;
  System_Text_UTF8Encoding_o *__this_00;
  
  if (DAT_05702621 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Convert);
    DAT_05702621 = '\x01';
  }
  __this_00 = (__this->fields).encoder;
  if (__this_00 != (System_Text_UTF8Encoding_o *)0x0) {
    pSVar1 = (System_Byte_array *)
             (*(__this_00->klass->vtable)._18_GetBytes.methodPtr)
                       (__this_00,unencrypted,(__this_00->klass->vtable)._18_GetBytes.method);
    pSVar1 = SimpleAES__Transform((SimpleAES_o *)__this_00,pSVar1,(__this->fields).encryptor,in_RCX)
    ;
    if (*(int *)(TypeInfo_Convert + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pSVar2 = System_Convert__ToBase64String(pSVar1,(MethodInfo *)0x0);
    return pSVar2;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// SimpleAES$$Encrypt
// il2cpp: System_Byte_array* SimpleAES__Encrypt (SimpleAES_o* __this, System_Byte_array* buffer, const MethodInfo* method);
// 0x3d73080

System_Byte_array *
SimpleAES__Encrypt(SimpleAES_o *__this,System_Byte_array *buffer,MethodInfo *method)

{
  System_Byte_array *pSVar1;
  MethodInfo *in_RCX;
  
  pSVar1 = SimpleAES__Transform(__this,buffer,(__this->fields).encryptor,in_RCX);
  return pSVar1;
}


// SimpleAES$$Transform
// il2cpp: System_Byte_array* SimpleAES__Transform (SimpleAES_o* __this, System_Byte_array* buffer, System_Security_Cryptography_ICryptoTransform_o* transform, const MethodInfo* method);
// 0x3d72de0

/* WARNING: Removing unreachable block (ram,0x03d72f29) */

System_Byte_array *
SimpleAES__Transform
          (SimpleAES_o *__this,System_Byte_array *buffer,
          System_Security_Cryptography_ICryptoTransform_o *transform,MethodInfo *method)

{
  ushort uVar1;
  System_Security_Cryptography_CryptoStream_c *pSVar2;
  Il2CppRuntimeInterfaceOffsetPair *pIVar3;
  Il2CppMethodPointer vtable_dispatch;
  System_IO_MemoryStream_o *__this_00;
  System_Security_Cryptography_CryptoStream_o *__this_01;
  VirtualInvokeData *pVVar4;
  System_Byte_array *pSVar5;
  undefined8 extraout_RDX;
  long lVar6;
  
  if (DAT_05702622 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CryptoStream);
    il2cpp_init_method_metadata(&TypeInfo_IDisposable);
    il2cpp_init_method_metadata(&TypeInfo_MemoryStream);
    DAT_05702622 = '\x01';
  }
  __this_00 = (System_IO_MemoryStream_o *)il2cpp_runtime_glue(TypeInfo_MemoryStream);
  System_IO_MemoryStream___ctor(__this_00,(MethodInfo *)0x0);
  __this_01 = (System_Security_Cryptography_CryptoStream_o *)il2cpp_runtime_glue(TypeInfo_CryptoStream);
  System_Security_Cryptography_CryptoStream___ctor
            (__this_01,(System_IO_Stream_o *)__this_00,transform,1,(MethodInfo *)0x0);
  if (buffer == (System_Byte_array *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if (__this_01 == (System_Security_Cryptography_CryptoStream_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  (*(__this_01->klass->vtable)._35_Write.methodPtr)
            (__this_01,buffer,0,(ulong)(uint)buffer->max_length,
             (__this_01->klass->vtable)._35_Write.method);
  pSVar2 = __this_01->klass;
  uVar1._0_1_ = (pSVar2->_2).rank;
  uVar1._1_1_ = (pSVar2->_2).minimumAlignment;
  if ((ulong)uVar1 != 0) {
    pIVar3 = (pSVar2->_1).interfaceOffsets;
    lVar6 = 0;
    do {
      if (*(long *)((long)&pIVar3->interfaceType + lVar6) == TypeInfo_IDisposable) {
        pVVar4 = &(pSVar2->vtable)._0_Equals + *(int *)((long)&pIVar3->offset + lVar6);
        goto LAB_03d72eed;
      }
      lVar6 = lVar6 + 0x10;
    } while ((ulong)uVar1 << 4 != lVar6);
  }
  pVVar4 = (VirtualInvokeData *)il2cpp_runtime_glue(__this_01,TypeInfo_IDisposable,0);
LAB_03d72eed:
  (*pVVar4->methodPtr)(__this_01,pVVar4->method);
  if (__this_00 == (System_IO_MemoryStream_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  vtable_dispatch = (__this_00->klass->vtable)._41_ToArray.methodPtr;
  pSVar5 = (System_Byte_array *)
           (*vtable_dispatch)
                     (__this_00,(__this_00->klass->vtable)._41_ToArray.method,extraout_RDX,
                      vtable_dispatch);
  return pSVar5;
}


// SimpleAES$$.cctor
// il2cpp: void SimpleAES___cctor (const MethodInfo* method);
// 0x3d73090

void SimpleAES___cctor(MethodInfo *method)

{
  long lVar1;
  System_Array_o *pSVar2;
  
  if (DAT_05702623 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_byte);
    il2cpp_init_method_metadata(&TypeInfo_SimpleAES);
    il2cpp_init_method_metadata(&fld_4E5ACEA714611B9D5E49BE72A6BA4F74AA6444E0AA9D11B);
    il2cpp_init_method_metadata(&fld_EC120F573152E9A5B0D14289E7AC9765CDB96735F60BE766);
    DAT_05702623 = '\x01';
  }
  pSVar2 = (System_Array_o *)il2cpp_glue_02274930(TypeInfo_byte,0x20);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            (pSVar2,fld_4E5ACEA714611B9D5E49BE72A6BA4F74AA6444E0AA9D11B,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_SimpleAES + 0xb8) = pSVar2;
  il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_SimpleAES + 0xb8),pSVar2);
  pSVar2 = (System_Array_o *)il2cpp_glue_02274930(TypeInfo_byte,0x10);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            (pSVar2,fld_EC120F573152E9A5B0D14289E7AC9765CDB96735F60BE766,(MethodInfo *)0x0);
  lVar1 = *(long *)(TypeInfo_SimpleAES + 0xb8);
  *(System_Array_o **)(lVar1 + 8) = pSVar2;
  il2cpp_runtime_glue(lVar1 + 8,pSVar2);
  return;
}


