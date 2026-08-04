// Type: Utility.DeviceLockedEncryption
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Utility/DeviceLockedEncryption.cs
// Prior real C# source: none
// --------------------------------

// Utility.DeviceLockedEncryption$$GetDeviceSpecificKey
// il2cpp: System_Byte_array* Utility_DeviceLockedEncryption__GetDeviceSpecificKey (const MethodInfo* method);
// 0x448f2d0

System_Byte_array * Utility_DeviceLockedEncryption__GetDeviceSpecificKey(MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  System_Security_Cryptography_SHA256_c *pSVar3;
  Il2CppRuntimeInterfaceOffsetPair *pIVar4;
  System_String_o *pSVar5;
  System_Security_Cryptography_SHA256_o *__this;
  System_Text_Encoding_o *pSVar6;
  System_Byte_array *pSVar7;
  VirtualInvokeData *pVVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  undefined1 auVar12 [12];
  
  if (g_data_057ae8f6 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_DeviceLockedEncryption);
    il2cpp_runtime_helper_023445d0();
    g_data_057ae8f6 = '\x01';
  }
  pSVar5 = UnityEngine_SystemInfo__get_deviceUniqueIdentifier((MethodInfo *)0x0);
  if (*(int *)(TypeInfo_DeviceLockedEncryption + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar5 = System_String__Concat_3ae5ba0
                     (pSVar5,(System_String_o *)**(undefined8 **)(TypeInfo_DeviceLockedEncryption + 0xb8),(MethodInfo *)0x0);
  __this = System_Security_Cryptography_SHA256__Create((MethodInfo *)0x0);
  pSVar6 = System_Text_Encoding__get_UTF8((MethodInfo *)0x0);
  if (pSVar6 == (System_Text_Encoding_o *)0x0) {
    il2cpp_runtime_helper_022b2c90();
    goto label_0448f3ff;
  }
  pSVar7 = (System_Byte_array *)
           (*(pSVar6->klass->vtable)._18_GetBytes.methodPtr)
                     (pSVar6,pSVar5,(pSVar6->klass->vtable)._18_GetBytes.method);
  if (__this == (System_Security_Cryptography_SHA256_o *)0x0) goto label_0448f407;
  lVar11 = 0;
  pSVar7 = System_Security_Cryptography_HashAlgorithm__ComputeHash
                     ((System_Security_Cryptography_HashAlgorithm_o *)__this,pSVar7,(MethodInfo *)0x0);
  do {
    pSVar3 = __this->klass;
    uVar1._0_1_ = (pSVar3->_2).rank;
    uVar1._1_1_ = (pSVar3->_2).minimumAlignment;
    if ((ulong)uVar1 != 0) {
      pIVar4 = (pSVar3->_1).interfaceOffsets;
      lVar10 = 0;
      do {
        if (*(long *)((long)&pIVar4->interfaceType + lVar10) == TypeInfo_IDisposable) {
          pVVar8 = &(pSVar3->vtable)._0_Equals + *(int *)((long)&pIVar4->offset + lVar10);
          goto label_0448f3dd;
        }
        lVar10 = lVar10 + 0x10;
      } while ((ulong)uVar1 << 4 != lVar10);
    }
    pVVar8 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(__this,TypeInfo_IDisposable,0);
label_0448f3dd:
    (*pVVar8->methodPtr)(__this,pVVar8->method);
    do {
      if (lVar11 == 0) {
        return pSVar7;
      }
label_0448f3ff:
      il2cpp_runtime_helper_022fefe0();
label_0448f407:
      auVar12 = il2cpp_runtime_helper_022b2c90();
      if (auVar12._8_4_ != 1) {
        if (__this == (System_Security_Cryptography_SHA256_o *)0x0) goto label_0448f4b6;
        pSVar3 = __this->klass;
        uVar2._0_1_ = (pSVar3->_2).rank;
        uVar2._1_1_ = (pSVar3->_2).minimumAlignment;
        if ((ulong)uVar2 == 0) goto label_0448f48f;
        pIVar4 = (pSVar3->_1).interfaceOffsets;
        lVar11 = 0;
        goto label_0448f480;
      }
      plVar9 = (long *)__cxa_begin_catch();
      lVar11 = *plVar9;
      __cxa_end_catch();
      pSVar7 = (System_Byte_array *)0x0;
    } while (__this == (System_Security_Cryptography_SHA256_o *)0x0);
  } while( true );
  while (lVar11 = lVar11 + 0x10, (ulong)uVar2 << 4 != lVar11) {
label_0448f480:
    if (*(long *)((long)&pIVar4->interfaceType + lVar11) == TypeInfo_IDisposable) {
      pVVar8 = &(pSVar3->vtable)._0_Equals + *(int *)((long)&pIVar4->offset + lVar11);
      goto label_0448f4ad;
    }
  }
label_0448f48f:
  pVVar8 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(__this,TypeInfo_IDisposable,0);
label_0448f4ad:
  (*pVVar8->methodPtr)(__this,pVVar8->method);
label_0448f4b6:
  _Unwind_Resume(auVar12._0_8_);
}


// Utility.DeviceLockedEncryption$$Encrypt
// il2cpp: System_String_o* Utility_DeviceLockedEncryption__Encrypt (System_String_o* plainText, const MethodInfo* method);
// 0x448f4e0

System_String_o * Utility_DeviceLockedEncryption__Encrypt(System_String_o *plainText,MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  ushort uVar6;
  void *pvVar7;
  System_IO_MemoryStream_c *pSVar8;
  Il2CppRuntimeInterfaceOffsetPair *pIVar9;
  System_Security_Cryptography_Aes_c *pSVar10;
  System_Security_Cryptography_CryptoStream_c *pSVar11;
  System_Byte_array *pSVar12;
  System_Security_Cryptography_Aes_o *pSVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  System_Security_Cryptography_ICryptoTransform_o *transform;
  undefined8 *puVar16;
  VirtualInvokeData *pVVar17;
  long *plVar18;
  System_Security_Cryptography_Aes_c *unaff_RBP;
  MethodInfo *method_00;
  long lVar19;
  long lVar20;
  System_Security_Cryptography_CryptoStream_o *unaff_R12;
  System_IO_MemoryStream_o *unaff_R14;
  undefined1 auVar21 [12];
  undefined8 local_38;
  
  if (g_data_057ae8f7 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Aes);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Convert);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CryptoStream);
    il2cpp_runtime_helper_023445d0(&TypeInfo_DeviceLockedEncryption);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IDisposable);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MemoryStream);
    il2cpp_runtime_helper_023445d0(&TypeInfo_StreamWriter);
    g_data_057ae8f7 = '\x01';
  }
  method_00 = TypeInfo_DeviceLockedEncryption;
  if (*(int *)((long)&TypeInfo_DeviceLockedEncryption[2].parameters + 4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar12 = Utility_DeviceLockedEncryption__GetDeviceSpecificKey(method_00);
  if (*(int *)(TypeInfo_Aes + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar13 = System_Security_Cryptography_Aes__Create((MethodInfo *)0x0);
  if (pSVar13 == (System_Security_Cryptography_Aes_o *)0x0) {
    il2cpp_runtime_helper_022b2c90();
label_0448f768:
    il2cpp_runtime_helper_022b2c90();
label_0448f76d:
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    (*(pSVar13->klass->vtable)._13_set_Key.methodPtr)
              (pSVar13,pSVar12,(pSVar13->klass->vtable)._13_set_Key.method);
    (*pSVar13->klass[1]._1.byval_arg.data)(pSVar13,*(undefined8 *)&pSVar13->klass[1]._1.byval_arg.bits);
    unaff_R12 = (System_Security_Cryptography_CryptoStream_o *)
                (*(pSVar13->klass->vtable)._10_get_IV.methodPtr)
                          (pSVar13,(pSVar13->klass->vtable)._10_get_IV.method);
    uVar14 = (*(pSVar13->klass->vtable)._12_get_Key.methodPtr)
                       (pSVar13,(pSVar13->klass->vtable)._12_get_Key.method);
    uVar15 = (*(pSVar13->klass->vtable)._10_get_IV.methodPtr)
                       (pSVar13,(pSVar13->klass->vtable)._10_get_IV.method);
    unaff_RBP = pSVar13->klass;
    transform = (System_Security_Cryptography_ICryptoTransform_o *)
                (*(unaff_RBP->vtable)._23_unknown.methodPtr)
                          (pSVar13,uVar14,uVar15,(unaff_RBP->vtable)._23_unknown.method);
    unaff_R14 = (System_IO_MemoryStream_o *)il2cpp_runtime_helper_023052d0(TypeInfo_MemoryStream);
    System_IO_MemoryStream___ctor(unaff_R14,(MethodInfo *)0x0);
    if (unaff_R12 == (System_Security_Cryptography_CryptoStream_o *)0x0) goto label_0448f768;
    if (unaff_R14 == (System_IO_MemoryStream_o *)0x0) goto label_0448f76d;
    (*(unaff_R14->klass->vtable)._35_Write.methodPtr)
              (unaff_R14,unaff_R12,0,(ulong)*(uint *)&(unaff_R12->fields)._activeReadWriteTask);
    unaff_R12 = (System_Security_Cryptography_CryptoStream_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CryptoStream);
    System_Security_Cryptography_CryptoStream___ctor
              (unaff_R12,(System_IO_Stream_o *)unaff_R14,transform,1,(MethodInfo *)0x0);
    unaff_RBP = (System_Security_Cryptography_Aes_c *)il2cpp_runtime_helper_023052d0(TypeInfo_StreamWriter);
    System_IO_StreamWriter___ctor_3bf37d0
              ((System_IO_StreamWriter_o *)unaff_RBP,(System_IO_Stream_o *)unaff_R12,(MethodInfo *)0x0);
    if (unaff_RBP != (System_Security_Cryptography_Aes_c *)0x0) {
      pvVar7 = (unaff_RBP->_1).image;
      (**(code **)((long)pvVar7 + 600))(unaff_RBP,plainText,*(undefined8 *)((long)pvVar7 + 0x260));
      lVar20 = 0;
      goto label_0448f6e1;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  do {
    auVar21 = il2cpp_runtime_helper_022fefe0();
    if (auVar21._8_4_ != 1) {
      if (unaff_RBP == (System_Security_Cryptography_Aes_c *)0x0) goto label_0448f80e;
      pvVar7 = (unaff_RBP->_1).image;
      if ((ulong)*(ushort *)((long)pvVar7 + 0x12e) == 0) goto label_0448f7e7;
      lVar20 = 0;
      goto label_0448f7d8;
    }
    plVar18 = (long *)__cxa_begin_catch();
    lVar20 = *plVar18;
    __cxa_end_catch();
    if (unaff_RBP != (System_Security_Cryptography_Aes_c *)0x0) {
label_0448f6e1:
      pvVar7 = (unaff_RBP->_1).image;
      if ((ulong)*(ushort *)((long)pvVar7 + 0x12e) != 0) {
        lVar19 = 0;
        do {
          if (*(long *)(*(long *)((long)pvVar7 + 0xb0) + lVar19) == TypeInfo_IDisposable) {
            puVar16 = (undefined8 *)
                      ((long)pvVar7 +
                      (long)*(int *)(*(long *)((long)pvVar7 + 0xb0) + 8 + lVar19) * 0x10 + 0x138);
            goto label_0448f73d;
          }
          lVar19 = lVar19 + 0x10;
        } while ((ulong)*(ushort *)((long)pvVar7 + 0x12e) << 4 != lVar19);
      }
      puVar16 = (undefined8 *)il2cpp_runtime_helper_02300d20(unaff_RBP,TypeInfo_IDisposable,0);
label_0448f73d:
      (*(code *)*puVar16)(unaff_RBP,puVar16[1]);
    }
  } while (lVar20 != 0);
  lVar20 = 0;
joined_r0x0448f874:
  if (unaff_R12 != (System_Security_Cryptography_CryptoStream_o *)0x0) {
    pSVar11 = unaff_R12->klass;
    uVar1._0_1_ = (pSVar11->_2).rank;
    uVar1._1_1_ = (pSVar11->_2).minimumAlignment;
    if ((ulong)uVar1 != 0) {
      pIVar9 = (pSVar11->_1).interfaceOffsets;
      lVar19 = 0;
      do {
        if (*(long *)((long)&pIVar9->interfaceType + lVar19) == TypeInfo_IDisposable) {
          pVVar17 = &(pSVar11->vtable)._0_Equals + *(int *)((long)&pIVar9->offset + lVar19);
          goto label_0448f8cd;
        }
        lVar19 = lVar19 + 0x10;
      } while ((ulong)uVar1 << 4 != lVar19);
    }
    pVVar17 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(unaff_R12,TypeInfo_IDisposable,0);
label_0448f8cd:
    (*pVVar17->methodPtr)(unaff_R12,pVVar17->method);
  }
  if (lVar20 != 0) goto label_0448faa2;
  pSVar12 = (System_Byte_array *)(*(unaff_R14->klass->vtable)._41_ToArray.methodPtr)(unaff_R14);
  if (*(int *)(TypeInfo_Convert + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  lVar20 = 0;
  unaff_R12 = (System_Security_Cryptography_CryptoStream_o *)
              System_Convert__ToBase64String(pSVar12,(MethodInfo *)0x0);
label_0448f930:
  pSVar8 = unaff_R14->klass;
  uVar2._0_1_ = (pSVar8->_2).rank;
  uVar2._1_1_ = (pSVar8->_2).minimumAlignment;
  if ((ulong)uVar2 != 0) {
    pIVar9 = (pSVar8->_1).interfaceOffsets;
    lVar19 = 0;
    do {
      if (*(long *)((long)&pIVar9->interfaceType + lVar19) == TypeInfo_IDisposable) {
        pVVar17 = &(pSVar8->vtable)._0_Equals + *(int *)((long)&pIVar9->offset + lVar19);
        goto label_0448f98d;
      }
      lVar19 = lVar19 + 0x10;
    } while ((ulong)uVar2 << 4 != lVar19);
  }
  pVVar17 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(unaff_R14,TypeInfo_IDisposable,0);
label_0448f98d:
  (*pVVar17->methodPtr)(unaff_R14,pVVar17->method);
label_0448f996:
  if (lVar20 != 0) goto label_0448fa9a;
  lVar20 = 0;
label_0448f9a1:
  if (pSVar13 != (System_Security_Cryptography_Aes_o *)0x0) {
    pSVar10 = pSVar13->klass;
    uVar3._0_1_ = (pSVar10->_2).rank;
    uVar3._1_1_ = (pSVar10->_2).minimumAlignment;
    if ((ulong)uVar3 != 0) {
      pIVar9 = (pSVar10->_1).interfaceOffsets;
      lVar19 = 0;
      do {
        if (*(long *)((long)&pIVar9->interfaceType + lVar19) == TypeInfo_IDisposable) {
          pVVar17 = &(pSVar10->vtable)._0_Equals + *(int *)((long)&pIVar9->offset + lVar19);
          goto label_0448f9fd;
        }
        lVar19 = lVar19 + 0x10;
      } while ((ulong)uVar3 << 4 != lVar19);
    }
    pVVar17 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(pSVar13,TypeInfo_IDisposable,0);
label_0448f9fd:
    (*pVVar17->methodPtr)(pSVar13,pVVar17->method);
  }
  if (lVar20 == 0) {
    return (System_String_o *)unaff_R12;
  }
  do {
    il2cpp_runtime_helper_022fefe0(lVar20);
label_0448fa9a:
    il2cpp_runtime_helper_022fefe0(lVar20);
label_0448faa2:
    auVar21 = il2cpp_runtime_helper_022fefe0();
    if (unaff_R12 != (System_Security_Cryptography_CryptoStream_o *)0x0) {
label_0448fa28:
      pSVar11 = unaff_R12->klass;
      uVar4._0_1_ = (pSVar11->_2).rank;
      uVar4._1_1_ = (pSVar11->_2).minimumAlignment;
      if ((ulong)uVar4 != 0) {
        pIVar9 = (pSVar11->_1).interfaceOffsets;
        lVar19 = 0;
        do {
          if (*(long *)((long)&pIVar9->interfaceType + lVar19) == TypeInfo_IDisposable) {
            pVVar17 = &(pSVar11->vtable)._0_Equals + *(int *)((long)&pIVar9->offset + lVar19);
            goto label_0448fa7c;
          }
          lVar19 = lVar19 + 0x10;
        } while ((ulong)uVar4 << 4 != lVar19);
      }
      pVVar17 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(unaff_R12,TypeInfo_IDisposable,0);
label_0448fa7c:
      (*pVVar17->methodPtr)(unaff_R12,pVVar17->method);
    }
label_0448fa85:
    local_38 = auVar21._0_8_;
    if (lVar20 == 0) goto label_0448fade;
    il2cpp_runtime_helper_022fefe0(lVar20);
  } while( true );
  while (lVar20 = lVar20 + 0x10, (ulong)*(ushort *)((long)pvVar7 + 0x12e) << 4 != lVar20) {
label_0448f7d8:
    if (*(long *)(*(long *)((long)pvVar7 + 0xb0) + lVar20) == TypeInfo_IDisposable) {
      puVar16 = (undefined8 *)
                ((long)pvVar7 + (long)*(int *)(*(long *)((long)pvVar7 + 0xb0) + 8 + lVar20) * 0x10 + 0x138);
      goto label_0448f805;
    }
  }
label_0448f7e7:
  puVar16 = (undefined8 *)il2cpp_runtime_helper_02300d20(unaff_RBP,TypeInfo_IDisposable,0);
label_0448f805:
  (*(code *)*puVar16)(unaff_RBP,puVar16[1]);
label_0448f80e:
  if (auVar21._8_4_ != 1) {
    lVar20 = 0;
    if (unaff_R12 == (System_Security_Cryptography_CryptoStream_o *)0x0) goto label_0448fa85;
    goto label_0448fa28;
  }
  plVar18 = (long *)__cxa_begin_catch();
  lVar20 = *plVar18;
  __cxa_end_catch();
  goto joined_r0x0448f874;
label_0448fade:
  if (auVar21._8_4_ == 1) goto code_r0x0448fae3;
  if (unaff_R14 != (System_IO_MemoryStream_o *)0x0) {
    pSVar8 = unaff_R14->klass;
    uVar5._0_1_ = (pSVar8->_2).rank;
    uVar5._1_1_ = (pSVar8->_2).minimumAlignment;
    if ((ulong)uVar5 != 0) {
      pIVar9 = (pSVar8->_1).interfaceOffsets;
      lVar20 = 0;
      do {
        if (*(long *)((long)&pIVar9->interfaceType + lVar20) == TypeInfo_IDisposable) {
          pVVar17 = &(pSVar8->vtable)._0_Equals + *(int *)((long)&pIVar9->offset + lVar20);
          goto label_0448fb53;
        }
        lVar20 = lVar20 + 0x10;
      } while ((ulong)uVar5 << 4 != lVar20);
    }
    pVVar17 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(unaff_R14,TypeInfo_IDisposable,0);
label_0448fb53:
    (*pVVar17->methodPtr)(unaff_R14,pVVar17->method);
  }
  unaff_R12 = (System_Security_Cryptography_CryptoStream_o *)0x0;
  if (auVar21._8_4_ != 1) {
    if (pSVar13 == (System_Security_Cryptography_Aes_o *)0x0) goto label_0448fc16;
    pSVar10 = pSVar13->klass;
    uVar6._0_1_ = (pSVar10->_2).rank;
    uVar6._1_1_ = (pSVar10->_2).minimumAlignment;
    if ((ulong)uVar6 == 0) goto label_0448fbef;
    pIVar9 = (pSVar10->_1).interfaceOffsets;
    lVar20 = 0;
    goto label_0448fbe0;
  }
  plVar18 = (long *)__cxa_begin_catch();
  lVar20 = *plVar18;
  __cxa_end_catch();
  goto label_0448f9a1;
code_r0x0448fae3:
  plVar18 = (long *)__cxa_begin_catch();
  lVar20 = *plVar18;
  __cxa_end_catch();
  unaff_R12 = (System_Security_Cryptography_CryptoStream_o *)0x0;
  if (unaff_R14 != (System_IO_MemoryStream_o *)0x0) goto label_0448f930;
  goto label_0448f996;
  while (lVar20 = lVar20 + 0x10, (ulong)uVar6 << 4 != lVar20) {
label_0448fbe0:
    if (*(long *)((long)&pIVar9->interfaceType + lVar20) == TypeInfo_IDisposable) {
      pVVar17 = &(pSVar10->vtable)._0_Equals + *(int *)((long)&pIVar9->offset + lVar20);
      goto label_0448fc0d;
    }
  }
label_0448fbef:
  pVVar17 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(pSVar13,TypeInfo_IDisposable,0);
label_0448fc0d:
  (*pVVar17->methodPtr)(pSVar13,pVVar17->method);
label_0448fc16:
  _Unwind_Resume(local_38);
}


// Utility.DeviceLockedEncryption$$Decrypt
// il2cpp: System_String_o* Utility_DeviceLockedEncryption__Decrypt (System_String_o* cipherText, const MethodInfo* method);
// 0x448fc50

System_String_o * Utility_DeviceLockedEncryption__Decrypt(System_String_o *cipherText,MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  ushort uVar6;
  ushort uVar7;
  ushort uVar8;
  System_IO_StreamReader_c *pSVar9;
  Il2CppRuntimeInterfaceOffsetPair *pIVar10;
  System_Security_Cryptography_CryptoStream_c *pSVar11;
  Il2CppClass *pIVar12;
  System_Security_Cryptography_Aes_c *pSVar13;
  System_Byte_array *pSVar14;
  System_Byte_array *__this;
  System_Security_Cryptography_Aes_o *pSVar15;
  System_Array_o *destinationArray;
  undefined8 uVar16;
  undefined8 uVar17;
  System_Security_Cryptography_ICryptoTransform_o *transform;
  System_String_o *pSVar18;
  VirtualInvokeData *pVVar19;
  long *plVar20;
  undefined8 *puVar21;
  int iVar22;
  MethodInfo *method_00;
  long lVar23;
  long lVar24;
  System_IO_StreamReader_o *unaff_R12;
  System_Security_Cryptography_CryptoStream_o *unaff_R13;
  undefined1 auVar25 [12];
  
  if (g_data_057ae8f8 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Aes);
    il2cpp_runtime_helper_023445d0(&TypeInfo_byte);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Convert);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CryptoStream);
    il2cpp_runtime_helper_023445d0(&TypeInfo_DeviceLockedEncryption);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IDisposable);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MemoryStream);
    il2cpp_runtime_helper_023445d0(&TypeInfo_StreamReader);
    g_data_057ae8f8 = '\x01';
  }
  method_00 = TypeInfo_DeviceLockedEncryption;
  if (*(int *)((long)&TypeInfo_DeviceLockedEncryption[2].parameters + 4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar14 = Utility_DeviceLockedEncryption__GetDeviceSpecificKey(method_00);
  if (*(int *)(TypeInfo_Convert + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  __this = System_Convert__FromBase64String(cipherText,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_Aes + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar15 = System_Security_Cryptography_Aes__Create((MethodInfo *)0x0);
  if (pSVar15 == (System_Security_Cryptography_Aes_o *)0x0) {
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    (*(pSVar15->klass->vtable)._13_set_Key.methodPtr)
              (pSVar15,pSVar14,(pSVar15->klass->vtable)._13_set_Key.method);
    (*(pSVar15->klass->vtable)._6_get_BlockSize.methodPtr)
              (pSVar15,(pSVar15->klass->vtable)._6_get_BlockSize.method);
    unaff_R12 = (System_IO_StreamReader_o *)&TypeInfo_byte;
    destinationArray = (System_Array_o *)il2cpp_runtime_helper_022b2a40(TypeInfo_byte);
    if (destinationArray != (System_Array_o *)0x0) {
      System_Array__Copy_3cdefb0
                ((System_Array_o *)__this,0,destinationArray,0,*(int32_t *)&destinationArray[1].monitor,
                 (MethodInfo *)0x0);
      (*(pSVar15->klass->vtable)._11_set_IV.methodPtr)
                (pSVar15,destinationArray,(pSVar15->klass->vtable)._11_set_IV.method);
      if (__this != (System_Byte_array *)0x0) {
        iVar22 = (int)__this->max_length - *(int *)&destinationArray[1].monitor;
        pSVar14 = (System_Byte_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_byte,iVar22);
        System_Array__Copy_3cdefb0
                  ((System_Array_o *)__this,*(int32_t *)&destinationArray[1].monitor,(System_Array_o *)pSVar14
                   ,0,iVar22,(MethodInfo *)0x0);
        uVar16 = (*(pSVar15->klass->vtable)._12_get_Key.methodPtr)
                           (pSVar15,(pSVar15->klass->vtable)._12_get_Key.method);
        uVar17 = (*(pSVar15->klass->vtable)._10_get_IV.methodPtr)
                           (pSVar15,(pSVar15->klass->vtable)._10_get_IV.method);
        cipherText = (System_String_o *)pSVar15->klass;
        transform = (System_Security_Cryptography_ICryptoTransform_o *)
                    (*(((System_Security_Cryptography_Aes_c *)((long)cipherText + 0x2c8))->_1).image)
                              (pSVar15,uVar16,uVar17);
        __this = (System_Byte_array *)il2cpp_runtime_helper_023052d0(TypeInfo_MemoryStream);
        System_IO_MemoryStream___ctor_3beac70((System_IO_MemoryStream_o *)__this,pSVar14,(MethodInfo *)0x0);
        unaff_R13 = (System_Security_Cryptography_CryptoStream_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CryptoStream);
        System_Security_Cryptography_CryptoStream___ctor
                  (unaff_R13,(System_IO_Stream_o *)__this,transform,0,(MethodInfo *)0x0);
        unaff_R12 = (System_IO_StreamReader_o *)il2cpp_runtime_helper_023052d0(TypeInfo_StreamReader);
        System_IO_StreamReader___ctor_3bef040(unaff_R12,(System_IO_Stream_o *)unaff_R13,(MethodInfo *)0x0);
        if (unaff_R12 == (System_IO_StreamReader_o *)0x0) goto label_044900ac;
        pSVar18 = (System_String_o *)
                  (*(unaff_R12->klass->vtable)._13_ReadToEnd.methodPtr)
                            (unaff_R12,(unaff_R12->klass->vtable)._13_ReadToEnd.method);
        lVar24 = 0;
        goto label_0448febd;
      }
      goto label_04490097;
    }
  }
  il2cpp_runtime_helper_022b2c90();
label_04490097:
  il2cpp_runtime_helper_022b2c90();
label_0449009c:
  il2cpp_runtime_helper_022fefe0(cipherText);
label_044900a4:
  il2cpp_runtime_helper_022fefe0(cipherText);
label_044900ac:
  il2cpp_runtime_helper_022b2c90();
label_044900b1:
  il2cpp_runtime_helper_022fefe0(cipherText);
  do {
    auVar25 = il2cpp_runtime_helper_022fefe0();
    iVar22 = auVar25._8_4_;
    if (iVar22 != 1) {
      if (unaff_R12 == (System_IO_StreamReader_o *)0x0) goto label_04490170;
      pSVar9 = unaff_R12->klass;
      uVar5._0_1_ = (pSVar9->_2).rank;
      uVar5._1_1_ = (pSVar9->_2).minimumAlignment;
      if ((ulong)uVar5 == 0) goto label_04490149;
      pIVar10 = (pSVar9->_1).interfaceOffsets;
      lVar24 = 0;
      goto label_0449013a;
    }
    plVar20 = (long *)__cxa_begin_catch();
    lVar24 = *plVar20;
    __cxa_end_catch();
    pSVar18 = (System_String_o *)0x0;
    if (unaff_R12 != (System_IO_StreamReader_o *)0x0) {
label_0448febd:
      pSVar9 = unaff_R12->klass;
      uVar1._0_1_ = (pSVar9->_2).rank;
      uVar1._1_1_ = (pSVar9->_2).minimumAlignment;
      if ((ulong)uVar1 != 0) {
        pIVar10 = (pSVar9->_1).interfaceOffsets;
        lVar23 = 0;
        do {
          if (*(long *)((long)&pIVar10->interfaceType + lVar23) == TypeInfo_IDisposable) {
            pVVar19 = &(pSVar9->vtable)._0_Equals + *(int *)((long)&pIVar10->offset + lVar23);
            goto label_0448ff1d;
          }
          lVar23 = lVar23 + 0x10;
        } while ((ulong)uVar1 << 4 != lVar23);
      }
      pVVar19 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(unaff_R12,TypeInfo_IDisposable,0);
label_0448ff1d:
      (*pVVar19->methodPtr)(unaff_R12,pVVar19->method);
    }
  } while (lVar24 != 0);
  cipherText = (System_String_o *)0x0;
  goto label_0448ff31;
  while (lVar24 = lVar24 + 0x10, (ulong)uVar5 << 4 != lVar24) {
label_0449013a:
    if (*(long *)((long)&pIVar10->interfaceType + lVar24) == TypeInfo_IDisposable) {
      pVVar19 = &(pSVar9->vtable)._0_Equals + *(int *)((long)&pIVar10->offset + lVar24);
      goto label_04490167;
    }
  }
label_04490149:
  pVVar19 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(unaff_R12,TypeInfo_IDisposable,0);
label_04490167:
  (*pVVar19->methodPtr)(unaff_R12,pVVar19->method);
label_04490170:
  pSVar18 = (System_String_o *)0x0;
  if (iVar22 != 1) {
    if (unaff_R13 == (System_Security_Cryptography_CryptoStream_o *)0x0) goto label_04490299;
    pSVar11 = unaff_R13->klass;
    uVar6._0_1_ = (pSVar11->_2).rank;
    uVar6._1_1_ = (pSVar11->_2).minimumAlignment;
    if ((ulong)uVar6 == 0) goto label_04490272;
    pIVar10 = (pSVar11->_1).interfaceOffsets;
    lVar24 = 0;
    goto label_04490263;
  }
  puVar21 = (undefined8 *)__cxa_begin_catch();
  cipherText = (System_String_o *)*puVar21;
  __cxa_end_catch();
label_0448ff31:
  if (unaff_R13 != (System_Security_Cryptography_CryptoStream_o *)0x0) {
    pSVar11 = unaff_R13->klass;
    uVar2._0_1_ = (pSVar11->_2).rank;
    uVar2._1_1_ = (pSVar11->_2).minimumAlignment;
    if ((ulong)uVar2 != 0) {
      pIVar10 = (pSVar11->_1).interfaceOffsets;
      lVar24 = 0;
      do {
        if (*(long *)((long)&pIVar10->interfaceType + lVar24) == TypeInfo_IDisposable) {
          pVVar19 = &(pSVar11->vtable)._0_Equals + *(int *)((long)&pIVar10->offset + lVar24);
          goto label_0448ff8d;
        }
        lVar24 = lVar24 + 0x10;
      } while ((ulong)uVar2 << 4 != lVar24);
    }
    pVVar19 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(unaff_R13,TypeInfo_IDisposable,0);
label_0448ff8d:
    (*pVVar19->methodPtr)(unaff_R13,pVVar19->method);
  }
  if ((System_Security_Cryptography_Aes_c *)cipherText == (System_Security_Cryptography_Aes_c *)0x0)
  goto code_r0x0448ff9f;
  goto label_044900b1;
  while (lVar24 = lVar24 + 0x10, (ulong)uVar6 << 4 != lVar24) {
label_04490263:
    if (*(long *)((long)&pIVar10->interfaceType + lVar24) == TypeInfo_IDisposable) {
      pVVar19 = &(pSVar11->vtable)._0_Equals + *(int *)((long)&pIVar10->offset + lVar24);
      goto label_04490290;
    }
  }
label_04490272:
  pVVar19 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(unaff_R13,TypeInfo_IDisposable,0);
label_04490290:
  (*pVVar19->methodPtr)(unaff_R13,pVVar19->method);
label_04490299:
  if (iVar22 != 1) {
    if (__this == (System_Byte_array *)0x0) goto label_04490344;
    pIVar12 = (__this->obj).klass;
    uVar7._0_1_ = (pIVar12->_2).rank;
    uVar7._1_1_ = (pIVar12->_2).minimumAlignment;
    if ((ulong)uVar7 == 0) goto label_0449031d;
    pIVar10 = (pIVar12->_1).interfaceOffsets;
    lVar24 = 0;
    goto label_0449030e;
  }
  puVar21 = (undefined8 *)__cxa_begin_catch();
  cipherText = (System_String_o *)*puVar21;
  __cxa_end_catch();
label_0448ffa1:
  if (__this != (System_Byte_array *)0x0) {
    pIVar12 = (__this->obj).klass;
    uVar3._0_1_ = (pIVar12->_2).rank;
    uVar3._1_1_ = (pIVar12->_2).minimumAlignment;
    if ((ulong)uVar3 != 0) {
      pIVar10 = (pIVar12->_1).interfaceOffsets;
      lVar24 = 0;
      do {
        if (*(long *)((long)&pIVar10->interfaceType + lVar24) == TypeInfo_IDisposable) {
          pVVar19 = pIVar12->vtable + *(int *)((long)&pIVar10->offset + lVar24);
          goto label_0448fffd;
        }
        lVar24 = lVar24 + 0x10;
      } while ((ulong)uVar3 << 4 != lVar24);
    }
    pVVar19 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(__this,TypeInfo_IDisposable,0);
label_0448fffd:
    (*pVVar19->methodPtr)(__this,pVVar19->method);
  }
  if ((System_Security_Cryptography_Aes_c *)cipherText == (System_Security_Cryptography_Aes_c *)0x0)
  goto code_r0x0449000f;
  goto label_044900a4;
  while (lVar24 = lVar24 + 0x10, (ulong)uVar7 << 4 != lVar24) {
label_0449030e:
    if (*(long *)((long)&pIVar10->interfaceType + lVar24) == TypeInfo_IDisposable) {
      pVVar19 = pIVar12->vtable + *(int *)((long)&pIVar10->offset + lVar24);
      goto label_0449033b;
    }
  }
label_0449031d:
  pVVar19 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(__this,TypeInfo_IDisposable,0);
label_0449033b:
  (*pVVar19->methodPtr)(__this,pVVar19->method);
label_04490344:
  if (iVar22 != 1) {
    if (pSVar15 == (System_Security_Cryptography_Aes_o *)0x0) goto label_044903f6;
    pSVar13 = pSVar15->klass;
    uVar8._0_1_ = (pSVar13->_2).rank;
    uVar8._1_1_ = (pSVar13->_2).minimumAlignment;
    if ((ulong)uVar8 == 0) goto label_044903cf;
    pIVar10 = (pSVar13->_1).interfaceOffsets;
    lVar24 = 0;
    goto label_044903c0;
  }
  puVar21 = (undefined8 *)__cxa_begin_catch();
  cipherText = (System_String_o *)*puVar21;
  __cxa_end_catch();
label_04490011:
  if (pSVar15 != (System_Security_Cryptography_Aes_o *)0x0) {
    pSVar13 = pSVar15->klass;
    uVar4._0_1_ = (pSVar13->_2).rank;
    uVar4._1_1_ = (pSVar13->_2).minimumAlignment;
    if ((ulong)uVar4 != 0) {
      pIVar10 = (pSVar13->_1).interfaceOffsets;
      lVar24 = 0;
      do {
        if (*(long *)((long)&pIVar10->interfaceType + lVar24) == TypeInfo_IDisposable) {
          pVVar19 = &(pSVar13->vtable)._0_Equals + *(int *)((long)&pIVar10->offset + lVar24);
          goto label_0449006d;
        }
        lVar24 = lVar24 + 0x10;
      } while ((ulong)uVar4 << 4 != lVar24);
    }
    pVVar19 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(pSVar15,TypeInfo_IDisposable,0);
label_0449006d:
    (*pVVar19->methodPtr)(pSVar15,pVVar19->method);
  }
  if ((System_Security_Cryptography_Aes_c *)cipherText == (System_Security_Cryptography_Aes_c *)0x0) {
    return pSVar18;
  }
  goto label_0449009c;
code_r0x0448ff9f:
  cipherText = (System_String_o *)0x0;
  goto label_0448ffa1;
code_r0x0449000f:
  cipherText = (System_String_o *)0x0;
  goto label_04490011;
  while (lVar24 = lVar24 + 0x10, (ulong)uVar8 << 4 != lVar24) {
label_044903c0:
    if (*(long *)((long)&pIVar10->interfaceType + lVar24) == TypeInfo_IDisposable) {
      pVVar19 = &(pSVar13->vtable)._0_Equals + *(int *)((long)&pIVar10->offset + lVar24);
      goto label_044903ed;
    }
  }
label_044903cf:
  pVVar19 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(pSVar15,TypeInfo_IDisposable,0);
label_044903ed:
  (*pVVar19->methodPtr)(pSVar15,pVVar19->method);
label_044903f6:
  _Unwind_Resume(auVar25._0_8_);
}


// Utility.DeviceLockedEncryption$$.ctor
// il2cpp: void Utility_DeviceLockedEncryption___ctor (Utility_DeviceLockedEncryption_o* __this, const MethodInfo* method);
// 0x4490430

void Utility_DeviceLockedEncryption___ctor(Utility_DeviceLockedEncryption_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Utility.DeviceLockedEncryption$$.cctor
// il2cpp: void Utility_DeviceLockedEncryption___cctor (const MethodInfo* method);
// 0x4490440

void Utility_DeviceLockedEncryption___cctor(MethodInfo *method)

{
  if (g_data_057ae8f9 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_DeviceLockedEncryption);
    il2cpp_runtime_helper_023445d0(&"YourCustomSecretSaltChangeThis_123!");
    g_data_057ae8f9 = '\x01';
  }
  **(undefined8 **)(TypeInfo_DeviceLockedEncryption + 0xb8) = "YourCustomSecretSaltChangeThis_123!";
  il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_DeviceLockedEncryption + 0xb8),"YourCustomSecretSaltChangeThis_123!");
  return;
}


