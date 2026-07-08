// Type: Utility.DeviceLockedEncryption
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/Utility/DeviceLockedEncryption.cs
// Prior source: NEW in this update
// --------------------------------

// Utility.DeviceLockedEncryption$$GetDeviceSpecificKey
// il2cpp: System_Byte_array* Utility_DeviceLockedEncryption__GetDeviceSpecificKey (const MethodInfo* method);
// 0x415c2c0

/* WARNING: Removing unreachable block (ram,0x0415c3ef) */

System_Byte_array * Utility_DeviceLockedEncryption__GetDeviceSpecificKey(MethodInfo *method)

{
  ushort uVar1;
  System_Security_Cryptography_SHA256_c *pSVar2;
  Il2CppRuntimeInterfaceOffsetPair *pIVar3;
  System_String_o *pSVar4;
  System_Security_Cryptography_SHA256_o *__this;
  System_Text_Encoding_o *pSVar5;
  System_Byte_array *pSVar6;
  VirtualInvokeData *pVVar7;
  long lVar8;
  
  if (DAT_05704a30 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_DeviceLockedEncryption);
    il2cpp_init_method_metadata();
    DAT_05704a30 = '\x01';
  }
  pSVar4 = UnityEngine_SystemInfo__get_deviceUniqueIdentifier((MethodInfo *)0x0);
  if (*(int *)(TypeInfo_DeviceLockedEncryption + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar4 = System_String__Concat
                     (pSVar4,(System_String_o *)**(undefined8 **)(TypeInfo_DeviceLockedEncryption + 0xb8),
                      (MethodInfo *)0x0);
  __this = System_Security_Cryptography_SHA256__Create((MethodInfo *)0x0);
  pSVar5 = System_Text_Encoding__get_UTF8((MethodInfo *)0x0);
  if (pSVar5 == (System_Text_Encoding_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  pSVar6 = (System_Byte_array *)
           (*(pSVar5->klass->vtable)._18_GetBytes.methodPtr)
                     (pSVar5,pSVar4,(pSVar5->klass->vtable)._18_GetBytes.method);
  if (__this == (System_Security_Cryptography_SHA256_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  pSVar6 = System_Security_Cryptography_HashAlgorithm__ComputeHash
                     ((System_Security_Cryptography_HashAlgorithm_o *)__this,pSVar6,
                      (MethodInfo *)0x0);
  pSVar2 = __this->klass;
  uVar1._0_1_ = (pSVar2->_2).rank;
  uVar1._1_1_ = (pSVar2->_2).minimumAlignment;
  if ((ulong)uVar1 != 0) {
    pIVar3 = (pSVar2->_1).interfaceOffsets;
    lVar8 = 0;
    do {
      if (*(long *)((long)&pIVar3->interfaceType + lVar8) == TypeInfo_IDisposable) {
        pVVar7 = &(pSVar2->vtable)._0_Equals + *(int *)((long)&pIVar3->offset + lVar8);
        goto LAB_0415c3cd;
      }
      lVar8 = lVar8 + 0x10;
    } while ((ulong)uVar1 << 4 != lVar8);
  }
  pVVar7 = (VirtualInvokeData *)il2cpp_runtime_glue(__this,TypeInfo_IDisposable,0);
LAB_0415c3cd:
  (*pVVar7->methodPtr)(__this,pVVar7->method);
  return pSVar6;
}


// Utility.DeviceLockedEncryption$$Encrypt
// il2cpp: System_String_o* Utility_DeviceLockedEncryption__Encrypt (System_String_o* plainText, const MethodInfo* method);
// 0x415c4d0

/* WARNING: Removing unreachable block (ram,0x0415ca82) */
/* WARNING: Removing unreachable block (ram,0x0415c916) */
/* WARNING: Removing unreachable block (ram,0x0415c85f) */
/* WARNING: Removing unreachable block (ram,0x0415ca8a) */
/* WARNING: Removing unreachable block (ram,0x0415ca92) */
/* WARNING: Removing unreachable block (ram,0x0415c767) */

System_String_o *
Utility_DeviceLockedEncryption__Encrypt(System_String_o *plainText,MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  System_IO_StreamWriter_c *pSVar5;
  Il2CppRuntimeInterfaceOffsetPair *pIVar6;
  System_Security_Cryptography_CryptoStream_c *pSVar7;
  System_IO_MemoryStream_c *pSVar8;
  System_Security_Cryptography_Aes_c *pSVar9;
  System_Byte_array *pSVar10;
  System_Security_Cryptography_Aes_o *pSVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  System_Security_Cryptography_ICryptoTransform_o *transform;
  System_IO_MemoryStream_o *__this;
  System_Security_Cryptography_CryptoStream_o *__this_00;
  System_IO_StreamWriter_o *__this_01;
  VirtualInvokeData *pVVar15;
  System_String_o *pSVar16;
  MethodInfo *method_00;
  
  if (DAT_05704a31 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Aes);
    il2cpp_init_method_metadata(&TypeInfo_Convert);
    il2cpp_init_method_metadata(&TypeInfo_CryptoStream);
    il2cpp_init_method_metadata(&TypeInfo_DeviceLockedEncryption);
    il2cpp_init_method_metadata(&TypeInfo_IDisposable);
    il2cpp_init_method_metadata(&TypeInfo_MemoryStream);
    il2cpp_init_method_metadata(&TypeInfo_StreamWriter);
    DAT_05704a31 = '\x01';
  }
  method_00 = TypeInfo_DeviceLockedEncryption;
  if (*(int *)((long)&TypeInfo_DeviceLockedEncryption[2].parameters + 4) == 0) {
    il2cpp_init_class();
  }
  pSVar10 = Utility_DeviceLockedEncryption__GetDeviceSpecificKey(method_00);
  if (*(int *)(TypeInfo_Aes + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar11 = System_Security_Cryptography_Aes__Create((MethodInfo *)0x0);
  if (pSVar11 == (System_Security_Cryptography_Aes_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  (*(pSVar11->klass->vtable)._13_set_Key.methodPtr)
            (pSVar11,pSVar10,(pSVar11->klass->vtable)._13_set_Key.method);
  (*pSVar11->klass[1]._1.byval_arg.data)
            (pSVar11,*(undefined8 *)&pSVar11->klass[1]._1.byval_arg.bits);
  lVar12 = (*(pSVar11->klass->vtable)._10_get_IV.methodPtr)
                     (pSVar11,(pSVar11->klass->vtable)._10_get_IV.method);
  uVar13 = (*(pSVar11->klass->vtable)._12_get_Key.methodPtr)
                     (pSVar11,(pSVar11->klass->vtable)._12_get_Key.method);
  uVar14 = (*(pSVar11->klass->vtable)._10_get_IV.methodPtr)
                     (pSVar11,(pSVar11->klass->vtable)._10_get_IV.method);
  transform = (System_Security_Cryptography_ICryptoTransform_o *)
              (*(pSVar11->klass->vtable)._23_unknown.methodPtr)
                        (pSVar11,uVar13,uVar14,(pSVar11->klass->vtable)._23_unknown.method);
  __this = (System_IO_MemoryStream_o *)il2cpp_runtime_glue(TypeInfo_MemoryStream);
  System_IO_MemoryStream___ctor(__this,(MethodInfo *)0x0);
  if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if (__this == (System_IO_MemoryStream_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  (*(__this->klass->vtable)._35_Write.methodPtr)(__this,lVar12,0,(ulong)*(uint *)(lVar12 + 0x18));
  __this_00 = (System_Security_Cryptography_CryptoStream_o *)il2cpp_runtime_glue(TypeInfo_CryptoStream);
  System_Security_Cryptography_CryptoStream___ctor
            (__this_00,(System_IO_Stream_o *)__this,transform,1,(MethodInfo *)0x0);
  __this_01 = (System_IO_StreamWriter_o *)il2cpp_runtime_glue(TypeInfo_StreamWriter);
  System_IO_StreamWriter___ctor(__this_01,(System_IO_Stream_o *)__this_00,(MethodInfo *)0x0);
  if (__this_01 == (System_IO_StreamWriter_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  (*(__this_01->klass->vtable)._18_Write.methodPtr)
            (__this_01,plainText,(__this_01->klass->vtable)._18_Write.method);
  pSVar5 = __this_01->klass;
  uVar1._0_1_ = (pSVar5->_2).rank;
  uVar1._1_1_ = (pSVar5->_2).minimumAlignment;
  if ((ulong)uVar1 != 0) {
    pIVar6 = (pSVar5->_1).interfaceOffsets;
    lVar12 = 0;
    do {
      if (*(long *)((long)&pIVar6->interfaceType + lVar12) == TypeInfo_IDisposable) {
        pVVar15 = &(pSVar5->vtable)._0_Equals + *(int *)((long)&pIVar6->offset + lVar12);
        goto LAB_0415c72d;
      }
      lVar12 = lVar12 + 0x10;
    } while ((ulong)uVar1 << 4 != lVar12);
  }
  pVVar15 = (VirtualInvokeData *)il2cpp_runtime_glue(__this_01,TypeInfo_IDisposable,0);
LAB_0415c72d:
  (*pVVar15->methodPtr)(__this_01,pVVar15->method);
  if (__this_00 != (System_Security_Cryptography_CryptoStream_o *)0x0) {
    pSVar7 = __this_00->klass;
    uVar2._0_1_ = (pSVar7->_2).rank;
    uVar2._1_1_ = (pSVar7->_2).minimumAlignment;
    if ((ulong)uVar2 != 0) {
      pIVar6 = (pSVar7->_1).interfaceOffsets;
      lVar12 = 0;
      do {
        if (*(long *)((long)&pIVar6->interfaceType + lVar12) == TypeInfo_IDisposable) {
          pVVar15 = &(pSVar7->vtable)._0_Equals + *(int *)((long)&pIVar6->offset + lVar12);
          goto LAB_0415c8bd;
        }
        lVar12 = lVar12 + 0x10;
      } while ((ulong)uVar2 << 4 != lVar12);
    }
    pVVar15 = (VirtualInvokeData *)il2cpp_runtime_glue(__this_00,TypeInfo_IDisposable,0);
LAB_0415c8bd:
    (*pVVar15->methodPtr)(__this_00,pVVar15->method);
  }
  pSVar10 = (System_Byte_array *)(*(__this->klass->vtable)._41_ToArray.methodPtr)(__this);
  if (*(int *)(TypeInfo_Convert + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar16 = System_Convert__ToBase64String(pSVar10,(MethodInfo *)0x0);
  pSVar8 = __this->klass;
  uVar3._0_1_ = (pSVar8->_2).rank;
  uVar3._1_1_ = (pSVar8->_2).minimumAlignment;
  if ((ulong)uVar3 != 0) {
    pIVar6 = (pSVar8->_1).interfaceOffsets;
    lVar12 = 0;
    do {
      if (*(long *)((long)&pIVar6->interfaceType + lVar12) == TypeInfo_IDisposable) {
        pVVar15 = &(pSVar8->vtable)._0_Equals + *(int *)((long)&pIVar6->offset + lVar12);
        goto LAB_0415c97d;
      }
      lVar12 = lVar12 + 0x10;
    } while ((ulong)uVar3 << 4 != lVar12);
  }
  pVVar15 = (VirtualInvokeData *)il2cpp_runtime_glue(__this,TypeInfo_IDisposable,0);
LAB_0415c97d:
  (*pVVar15->methodPtr)(__this,pVVar15->method);
  if (pSVar11 != (System_Security_Cryptography_Aes_o *)0x0) {
    pSVar9 = pSVar11->klass;
    uVar4._0_1_ = (pSVar9->_2).rank;
    uVar4._1_1_ = (pSVar9->_2).minimumAlignment;
    if ((ulong)uVar4 != 0) {
      pIVar6 = (pSVar9->_1).interfaceOffsets;
      lVar12 = 0;
      do {
        if (*(long *)((long)&pIVar6->interfaceType + lVar12) == TypeInfo_IDisposable) {
          pVVar15 = &(pSVar9->vtable)._0_Equals + *(int *)((long)&pIVar6->offset + lVar12);
          goto LAB_0415c9ed;
        }
        lVar12 = lVar12 + 0x10;
      } while ((ulong)uVar4 << 4 != lVar12);
    }
    pVVar15 = (VirtualInvokeData *)il2cpp_runtime_glue(pSVar11,TypeInfo_IDisposable,0);
LAB_0415c9ed:
    (*pVVar15->methodPtr)(pSVar11,pVVar15->method);
  }
  return pSVar16;
}


// Utility.DeviceLockedEncryption$$Decrypt
// il2cpp: System_String_o* Utility_DeviceLockedEncryption__Decrypt (System_String_o* cipherText, const MethodInfo* method);
// 0x415cc40

/* WARNING: Removing unreachable block (ram,0x0415d094) */
/* WARNING: Removing unreachable block (ram,0x0415d0a1) */
/* WARNING: Removing unreachable block (ram,0x0415d08c) */
/* WARNING: Removing unreachable block (ram,0x0415d0a9) */

System_String_o *
Utility_DeviceLockedEncryption__Decrypt(System_String_o *cipherText,MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  System_IO_StreamReader_c *pSVar5;
  Il2CppRuntimeInterfaceOffsetPair *pIVar6;
  System_Security_Cryptography_CryptoStream_c *pSVar7;
  System_IO_MemoryStream_c *pSVar8;
  System_Security_Cryptography_Aes_c *pSVar9;
  System_Byte_array *pSVar10;
  System_Byte_array *sourceArray;
  System_Security_Cryptography_Aes_o *pSVar11;
  System_Array_o *destinationArray;
  undefined8 uVar12;
  undefined8 uVar13;
  System_Security_Cryptography_ICryptoTransform_o *transform;
  System_IO_MemoryStream_o *__this;
  System_Security_Cryptography_CryptoStream_o *__this_00;
  System_IO_StreamReader_o *__this_01;
  System_String_o *pSVar14;
  VirtualInvokeData *pVVar15;
  int length;
  MethodInfo *method_00;
  long lVar16;
  
  if (DAT_05704a32 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Aes);
    il2cpp_init_method_metadata(&TypeInfo_byte);
    il2cpp_init_method_metadata(&TypeInfo_Convert);
    il2cpp_init_method_metadata(&TypeInfo_CryptoStream);
    il2cpp_init_method_metadata(&TypeInfo_DeviceLockedEncryption);
    il2cpp_init_method_metadata(&TypeInfo_IDisposable);
    il2cpp_init_method_metadata(&TypeInfo_MemoryStream);
    il2cpp_init_method_metadata(&TypeInfo_StreamReader);
    DAT_05704a32 = '\x01';
  }
  method_00 = TypeInfo_DeviceLockedEncryption;
  if (*(int *)((long)&TypeInfo_DeviceLockedEncryption[2].parameters + 4) == 0) {
    il2cpp_init_class();
  }
  pSVar10 = Utility_DeviceLockedEncryption__GetDeviceSpecificKey(method_00);
  if (*(int *)(TypeInfo_Convert + 0xe4) == 0) {
    il2cpp_init_class();
  }
  sourceArray = System_Convert__FromBase64String(cipherText,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_Aes + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar11 = System_Security_Cryptography_Aes__Create((MethodInfo *)0x0);
  if (pSVar11 == (System_Security_Cryptography_Aes_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  (*(pSVar11->klass->vtable)._13_set_Key.methodPtr)
            (pSVar11,pSVar10,(pSVar11->klass->vtable)._13_set_Key.method);
  (*(pSVar11->klass->vtable)._6_get_BlockSize.methodPtr)
            (pSVar11,(pSVar11->klass->vtable)._6_get_BlockSize.method);
  destinationArray = (System_Array_o *)il2cpp_glue_02274930(TypeInfo_byte);
  if (destinationArray == (System_Array_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  System_Array__Copy((System_Array_o *)sourceArray,0,destinationArray,0,
                     *(int32_t *)&destinationArray[1].monitor,(MethodInfo *)0x0);
  (*(pSVar11->klass->vtable)._11_set_IV.methodPtr)
            (pSVar11,destinationArray,(pSVar11->klass->vtable)._11_set_IV.method);
  if (sourceArray == (System_Byte_array *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  length = (int)sourceArray->max_length - *(int *)&destinationArray[1].monitor;
  pSVar10 = (System_Byte_array *)il2cpp_glue_02274930(TypeInfo_byte,length);
  System_Array__Copy((System_Array_o *)sourceArray,*(int32_t *)&destinationArray[1].monitor,
                     (System_Array_o *)pSVar10,0,length,(MethodInfo *)0x0);
  uVar12 = (*(pSVar11->klass->vtable)._12_get_Key.methodPtr)
                     (pSVar11,(pSVar11->klass->vtable)._12_get_Key.method);
  uVar13 = (*(pSVar11->klass->vtable)._10_get_IV.methodPtr)
                     (pSVar11,(pSVar11->klass->vtable)._10_get_IV.method);
  transform = (System_Security_Cryptography_ICryptoTransform_o *)
              (*pSVar11->klass[1]._1.image)(pSVar11,uVar12,uVar13);
  __this = (System_IO_MemoryStream_o *)il2cpp_runtime_glue(TypeInfo_MemoryStream);
  System_IO_MemoryStream___ctor(__this,pSVar10,(MethodInfo *)0x0);
  __this_00 = (System_Security_Cryptography_CryptoStream_o *)il2cpp_runtime_glue(TypeInfo_CryptoStream);
  System_Security_Cryptography_CryptoStream___ctor
            (__this_00,(System_IO_Stream_o *)__this,transform,0,(MethodInfo *)0x0);
  __this_01 = (System_IO_StreamReader_o *)il2cpp_runtime_glue(TypeInfo_StreamReader);
  System_IO_StreamReader___ctor(__this_01,(System_IO_Stream_o *)__this_00,(MethodInfo *)0x0);
  if (__this_01 == (System_IO_StreamReader_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  pSVar14 = (System_String_o *)
            (*(__this_01->klass->vtable)._13_ReadToEnd.methodPtr)
                      (__this_01,(__this_01->klass->vtable)._13_ReadToEnd.method);
  pSVar5 = __this_01->klass;
  uVar1._0_1_ = (pSVar5->_2).rank;
  uVar1._1_1_ = (pSVar5->_2).minimumAlignment;
  if ((ulong)uVar1 != 0) {
    pIVar6 = (pSVar5->_1).interfaceOffsets;
    lVar16 = 0;
    do {
      if (*(long *)((long)&pIVar6->interfaceType + lVar16) == TypeInfo_IDisposable) {
        pVVar15 = &(pSVar5->vtable)._0_Equals + *(int *)((long)&pIVar6->offset + lVar16);
        goto LAB_0415cf0d;
      }
      lVar16 = lVar16 + 0x10;
    } while ((ulong)uVar1 << 4 != lVar16);
  }
  pVVar15 = (VirtualInvokeData *)il2cpp_runtime_glue(__this_01,TypeInfo_IDisposable,0);
LAB_0415cf0d:
  (*pVVar15->methodPtr)(__this_01,pVVar15->method);
  if (__this_00 != (System_Security_Cryptography_CryptoStream_o *)0x0) {
    pSVar7 = __this_00->klass;
    uVar2._0_1_ = (pSVar7->_2).rank;
    uVar2._1_1_ = (pSVar7->_2).minimumAlignment;
    if ((ulong)uVar2 != 0) {
      pIVar6 = (pSVar7->_1).interfaceOffsets;
      lVar16 = 0;
      do {
        if (*(long *)((long)&pIVar6->interfaceType + lVar16) == TypeInfo_IDisposable) {
          pVVar15 = &(pSVar7->vtable)._0_Equals + *(int *)((long)&pIVar6->offset + lVar16);
          goto LAB_0415cf7d;
        }
        lVar16 = lVar16 + 0x10;
      } while ((ulong)uVar2 << 4 != lVar16);
    }
    pVVar15 = (VirtualInvokeData *)il2cpp_runtime_glue(__this_00,TypeInfo_IDisposable,0);
LAB_0415cf7d:
    (*pVVar15->methodPtr)(__this_00,pVVar15->method);
  }
  if (__this != (System_IO_MemoryStream_o *)0x0) {
    pSVar8 = __this->klass;
    uVar3._0_1_ = (pSVar8->_2).rank;
    uVar3._1_1_ = (pSVar8->_2).minimumAlignment;
    if ((ulong)uVar3 != 0) {
      pIVar6 = (pSVar8->_1).interfaceOffsets;
      lVar16 = 0;
      do {
        if (*(long *)((long)&pIVar6->interfaceType + lVar16) == TypeInfo_IDisposable) {
          pVVar15 = &(pSVar8->vtable)._0_Equals + *(int *)((long)&pIVar6->offset + lVar16);
          goto LAB_0415cfed;
        }
        lVar16 = lVar16 + 0x10;
      } while ((ulong)uVar3 << 4 != lVar16);
    }
    pVVar15 = (VirtualInvokeData *)il2cpp_runtime_glue(__this,TypeInfo_IDisposable,0);
LAB_0415cfed:
    (*pVVar15->methodPtr)(__this,pVVar15->method);
  }
  if (pSVar11 != (System_Security_Cryptography_Aes_o *)0x0) {
    pSVar9 = pSVar11->klass;
    uVar4._0_1_ = (pSVar9->_2).rank;
    uVar4._1_1_ = (pSVar9->_2).minimumAlignment;
    if ((ulong)uVar4 != 0) {
      pIVar6 = (pSVar9->_1).interfaceOffsets;
      lVar16 = 0;
      do {
        if (*(long *)((long)&pIVar6->interfaceType + lVar16) == TypeInfo_IDisposable) {
          pVVar15 = &(pSVar9->vtable)._0_Equals + *(int *)((long)&pIVar6->offset + lVar16);
          goto LAB_0415d05d;
        }
        lVar16 = lVar16 + 0x10;
      } while ((ulong)uVar4 << 4 != lVar16);
    }
    pVVar15 = (VirtualInvokeData *)il2cpp_runtime_glue(pSVar11,TypeInfo_IDisposable,0);
LAB_0415d05d:
    (*pVVar15->methodPtr)(pSVar11,pVVar15->method);
  }
  return pSVar14;
}


// Utility.DeviceLockedEncryption$$.ctor
// il2cpp: void Utility_DeviceLockedEncryption___ctor (Utility_DeviceLockedEncryption_o* __this, const MethodInfo* method);
// 0x415d420

void Utility_DeviceLockedEncryption___ctor
               (Utility_DeviceLockedEncryption_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Utility.DeviceLockedEncryption$$.cctor
// il2cpp: void Utility_DeviceLockedEncryption___cctor (const MethodInfo* method);
// 0x415d430

void Utility_DeviceLockedEncryption___cctor(MethodInfo *method)

{
  if (DAT_05704a33 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_DeviceLockedEncryption);
    il2cpp_init_method_metadata(&"YourCustomSecretSaltChangeThis_123!");
    DAT_05704a33 = '\x01';
  }
  **(undefined8 **)(TypeInfo_DeviceLockedEncryption + 0xb8) = "YourCustomSecretSaltChangeThis_123!";
  il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_DeviceLockedEncryption + 0xb8),"YourCustomSecretSaltChangeThis_123!");
  return;
}


