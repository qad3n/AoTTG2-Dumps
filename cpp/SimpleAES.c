// Type: SimpleAES
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/SimpleAES.cs
// Prior real C# source (older reference): Assets/Scripts/Utility/SimpleAES.cs
// --------------------------------

// SimpleAES$$.ctor
// il2cpp: void SimpleAES___ctor (SimpleAES_o* __this, const MethodInfo* method);
// 0x4068560

void SimpleAES___ctor(SimpleAES_o *__this,MethodInfo *method)

{
  long *plVar1;
  System_Security_Cryptography_RijndaelManaged_o *__this_00;
  System_Security_Cryptography_ICryptoTransform_o *pSVar2;
  System_Text_UTF8Encoding_o *__this_01;
  System_Byte_array *buffer;
  System_Byte_array *pSVar3;
  MethodInfo *in_RCX;
  SimpleAES_o *__this_02;
  long lVar4;
  
  if (g_data_057ac2cf == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_RijndaelManaged);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SimpleAES);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UTF8Encoding);
    g_data_057ac2cf = '\x01';
  }
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  __this_00 = (System_Security_Cryptography_RijndaelManaged_o *)il2cpp_runtime_helper_023052d0(TypeInfo_RijndaelManaged);
  __this_02 = (SimpleAES_o *)0x0;
  System_Security_Cryptography_RijndaelManaged___ctor(__this_00,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_SimpleAES + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (__this_00 != (System_Security_Cryptography_RijndaelManaged_o *)0x0) {
    pSVar2 = (System_Security_Cryptography_ICryptoTransform_o *)
             (*(__this_00->klass->vtable)._23_CreateEncryptor.methodPtr)
                       (__this_00,**(undefined8 **)(TypeInfo_SimpleAES + 0xb8),
                        (*(undefined8 **)(TypeInfo_SimpleAES + 0xb8))[1],
                        (__this_00->klass->vtable)._23_CreateEncryptor.method);
    (__this->fields).encryptor = pSVar2;
    il2cpp_runtime_helper_022b4080(&(__this->fields).encryptor,pSVar2);
    pSVar2 = (System_Security_Cryptography_ICryptoTransform_o *)
             (*(__this_00->klass->vtable)._25_CreateDecryptor.methodPtr)
                       (__this_00,**(undefined8 **)(TypeInfo_SimpleAES + 0xb8),
                        (*(undefined8 **)(TypeInfo_SimpleAES + 0xb8))[1],
                        (__this_00->klass->vtable)._25_CreateDecryptor.method);
    (__this->fields).decryptor = pSVar2;
    il2cpp_runtime_helper_022b4080(&__this->fields);
    __this_01 = (System_Text_UTF8Encoding_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UTF8Encoding);
    System_Text_UTF8Encoding___ctor(__this_01,(MethodInfo *)0x0);
    (__this->fields).encoder = __this_01;
    il2cpp_runtime_helper_022b4080(&(__this->fields).encoder,__this_01);
    return;
  }
  lVar4 = TypeInfo_SimpleAES;
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac2d0 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Convert);
    g_data_057ac2d0 = '\x01';
  }
  plVar1 = *(long **)(lVar4 + 0x18);
  if (*(int *)(TypeInfo_Convert + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  buffer = System_Convert__FromBase64String((System_String_o *)__this_02,(MethodInfo *)0x0);
  pSVar3 = SimpleAES__Transform
                     (__this_02,buffer,*(System_Security_Cryptography_ICryptoTransform_o **)(lVar4 + 0x10),
                      in_RCX);
  if (plVar1 != (long *)0x0) {
    lVar4 = *plVar1;
    (**(code **)(lVar4 + 0x368))(plVar1,pSVar3,*(undefined8 *)(lVar4 + 0x370),lVar4,*(code **)(lVar4 + 0x368))
    ;
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  SimpleAES__Transform(__this_02,buffer,(__this_02->fields).decryptor,in_RCX);
  return;
}


// SimpleAES$$Decrypt
// il2cpp: System_String_o* SimpleAES__Decrypt (SimpleAES_o* __this, System_String_o* encrypted, const MethodInfo* method);
// 0x4068690

System_String_o * SimpleAES__Decrypt(SimpleAES_o *__this,System_String_o *encrypted,MethodInfo *method)

{
  System_Text_UTF8Encoding_o *pSVar1;
  System_Text_UTF8Encoding_c *pSVar2;
  Il2CppMethodPointer vtableDispatch;
  System_Byte_array *pSVar3;
  System_Byte_array *pSVar4;
  System_String_o *pSVar5;
  MethodInfo *in_RCX;
  
  if (g_data_057ac2d0 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Convert);
    g_data_057ac2d0 = '\x01';
  }
  pSVar1 = (__this->fields).encoder;
  if (*(int *)(TypeInfo_Convert + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar3 = System_Convert__FromBase64String(encrypted,(MethodInfo *)0x0);
  pSVar4 = SimpleAES__Transform((SimpleAES_o *)encrypted,pSVar3,(__this->fields).decryptor,in_RCX);
  if (pSVar1 != (System_Text_UTF8Encoding_o *)0x0) {
    pSVar2 = pSVar1->klass;
    vtableDispatch = (pSVar2->vtable)._35_GetString.methodPtr;
    pSVar5 = (System_String_o *)
             (*vtableDispatch)
                       (pSVar1,pSVar4,(pSVar2->vtable)._35_GetString.method,pSVar2,vtableDispatch);
    return pSVar5;
  }
  il2cpp_runtime_helper_022b2c90();
  pSVar3 = SimpleAES__Transform
                     ((SimpleAES_o *)encrypted,pSVar3,(((SimpleAES_o *)encrypted)->fields).decryptor,in_RCX);
  return (System_String_o *)pSVar3;
}


// SimpleAES$$Decrypt
// il2cpp: System_Byte_array* SimpleAES__Decrypt (SimpleAES_o* __this, System_Byte_array* buffer, const MethodInfo* method);
// 0x4068720

System_Byte_array *
SimpleAES__Decrypt_3f68720(SimpleAES_o *__this,System_Byte_array *buffer,MethodInfo *method)

{
  System_Byte_array *pSVar1;
  MethodInfo *in_RCX;
  
  pSVar1 = SimpleAES__Transform(__this,buffer,(__this->fields).decryptor,in_RCX);
  return pSVar1;
}


// SimpleAES$$Encrypt
// il2cpp: System_String_o* SimpleAES__Encrypt (SimpleAES_o* __this, System_String_o* unencrypted, const MethodInfo* method);
// 0x4068950

System_String_o * SimpleAES__Encrypt(SimpleAES_o *__this,System_String_o *unencrypted,MethodInfo *method)

{
  System_Byte_array *pSVar1;
  System_String_o *pSVar2;
  MethodInfo *in_RCX;
  System_Text_UTF8Encoding_o *__this_00;
  
  pSVar1 = (System_Byte_array *)unencrypted;
  if (g_data_057ac2d1 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Convert);
    g_data_057ac2d1 = '\x01';
  }
  __this_00 = (__this->fields).encoder;
  if (__this_00 != (System_Text_UTF8Encoding_o *)0x0) {
    pSVar1 = (System_Byte_array *)
             (*(__this_00->klass->vtable)._18_GetBytes.methodPtr)
                       (__this_00,unencrypted,(__this_00->klass->vtable)._18_GetBytes.method);
    pSVar1 = SimpleAES__Transform((SimpleAES_o *)__this_00,pSVar1,(__this->fields).encryptor,in_RCX);
    if (*(int *)(TypeInfo_Convert + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar2 = System_Convert__ToBase64String(pSVar1,(MethodInfo *)0x0);
    return pSVar2;
  }
  il2cpp_runtime_helper_022b2c90();
  pSVar1 = SimpleAES__Transform
                     ((SimpleAES_o *)__this_00,pSVar1,
                      *(System_Security_Cryptography_ICryptoTransform_o **)
                       &(__this_00->fields).m_deserializedFromEverett,in_RCX);
  return (System_String_o *)pSVar1;
}


// SimpleAES$$Encrypt
// il2cpp: System_Byte_array* SimpleAES__Encrypt (SimpleAES_o* __this, System_Byte_array* buffer, const MethodInfo* method);
// 0x40689d0

System_Byte_array *
SimpleAES__Encrypt_3f689d0(SimpleAES_o *__this,System_Byte_array *buffer,MethodInfo *method)

{
  System_Byte_array *pSVar1;
  MethodInfo *in_RCX;
  
  pSVar1 = SimpleAES__Transform(__this,buffer,(__this->fields).encryptor,in_RCX);
  return pSVar1;
}


// SimpleAES$$Transform
// il2cpp: System_Byte_array* SimpleAES__Transform (SimpleAES_o* __this, System_Byte_array* buffer, System_Security_Cryptography_ICryptoTransform_o* transform, const MethodInfo* method);
// 0x4068730

System_Byte_array *
SimpleAES__Transform
          (SimpleAES_o *__this,System_Byte_array *buffer,
          System_Security_Cryptography_ICryptoTransform_o *transform,MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  System_Security_Cryptography_CryptoStream_c *pSVar3;
  Il2CppRuntimeInterfaceOffsetPair *pIVar4;
  Il2CppMethodPointer vtableDispatch;
  System_IO_MemoryStream_o *__this_00;
  System_Security_Cryptography_CryptoStream_o *__this_01;
  VirtualInvokeData *pVVar5;
  System_Byte_array *pSVar6;
  long *plVar7;
  undefined8 extraout_RDX;
  undefined8 uVar8;
  undefined8 extraout_RDX_00;
  long lVar9;
  long lVar10;
  undefined1 auVar11 [12];
  
  if (g_data_057ac2d2 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CryptoStream);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IDisposable);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MemoryStream);
    g_data_057ac2d2 = '\x01';
  }
  __this_00 = (System_IO_MemoryStream_o *)il2cpp_runtime_helper_023052d0(TypeInfo_MemoryStream);
  System_IO_MemoryStream___ctor(__this_00,(MethodInfo *)0x0);
  __this_01 = (System_Security_Cryptography_CryptoStream_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CryptoStream);
  System_Security_Cryptography_CryptoStream___ctor
            (__this_01,(System_IO_Stream_o *)__this_00,transform,1,(MethodInfo *)0x0);
  if (buffer == (System_Byte_array *)0x0) {
    il2cpp_runtime_helper_022b2c90();
  }
  else if (__this_01 != (System_Security_Cryptography_CryptoStream_o *)0x0) {
    lVar10 = 0;
    (*(__this_01->klass->vtable)._35_Write.methodPtr)
              (__this_01,buffer,0,(ulong)(uint)buffer->max_length,(__this_01->klass->vtable)._35_Write.method)
    ;
    goto label_040687e8;
  }
  il2cpp_runtime_helper_022b2c90();
label_04068879:
  il2cpp_runtime_helper_022fefe0();
  do {
    auVar11 = il2cpp_runtime_helper_022b2c90();
    if (auVar11._8_4_ != 1) {
      if (__this_01 == (System_Security_Cryptography_CryptoStream_o *)0x0) goto label_04068916;
      pSVar3 = __this_01->klass;
      uVar2._0_1_ = (pSVar3->_2).rank;
      uVar2._1_1_ = (pSVar3->_2).minimumAlignment;
      if ((ulong)uVar2 == 0) goto label_040688ef;
      pIVar4 = (pSVar3->_1).interfaceOffsets;
      lVar10 = 0;
      break;
    }
    plVar7 = (long *)__cxa_begin_catch();
    lVar10 = *plVar7;
    __cxa_end_catch();
    uVar8 = extraout_RDX_00;
    if (__this_01 != (System_Security_Cryptography_CryptoStream_o *)0x0) {
label_040687e8:
      pSVar3 = __this_01->klass;
      uVar1._0_1_ = (pSVar3->_2).rank;
      uVar1._1_1_ = (pSVar3->_2).minimumAlignment;
      if ((ulong)uVar1 != 0) {
        pIVar4 = (pSVar3->_1).interfaceOffsets;
        lVar9 = 0;
        do {
          if (*(long *)((long)&pIVar4->interfaceType + lVar9) == TypeInfo_IDisposable) {
            pVVar5 = &(pSVar3->vtable)._0_Equals + *(int *)((long)&pIVar4->offset + lVar9);
            goto label_0406883d;
          }
          lVar9 = lVar9 + 0x10;
        } while ((ulong)uVar1 << 4 != lVar9);
      }
      pVVar5 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(__this_01,TypeInfo_IDisposable,0);
label_0406883d:
      (*pVVar5->methodPtr)(__this_01,pVVar5->method);
      uVar8 = extraout_RDX;
    }
    if (lVar10 != 0) goto label_04068879;
    if (__this_00 != (System_IO_MemoryStream_o *)0x0) {
      vtableDispatch = (__this_00->klass->vtable)._41_ToArray.methodPtr;
      pSVar6 = (System_Byte_array *)
               (*vtableDispatch)
                         (__this_00,(__this_00->klass->vtable)._41_ToArray.method,uVar8,vtableDispatch)
      ;
      return pSVar6;
    }
  } while( true );
  while (lVar10 = lVar10 + 0x10, (ulong)uVar2 << 4 != lVar10) {
    if (*(long *)((long)&pIVar4->interfaceType + lVar10) == TypeInfo_IDisposable) {
      pVVar5 = &(pSVar3->vtable)._0_Equals + *(int *)((long)&pIVar4->offset + lVar10);
      goto label_0406890d;
    }
  }
label_040688ef:
  pVVar5 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(__this_01,TypeInfo_IDisposable,0);
label_0406890d:
  (*pVVar5->methodPtr)(__this_01,pVVar5->method);
label_04068916:
  _Unwind_Resume(auVar11._0_8_);
}


// SimpleAES$$.cctor
// il2cpp: void SimpleAES___cctor (const MethodInfo* method);
// 0x40689e0

void SimpleAES___cctor(MethodInfo *method)

{
  long lVar1;
  System_Array_o *pSVar2;
  
  if (g_data_057ac2d3 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_byte);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SimpleAES);
    il2cpp_runtime_helper_023445d0(&fld_4E5ACEA714611B9D5E49BE72A6BA4F74AA6444E0AA9D11B89108FD01);
    il2cpp_runtime_helper_023445d0(&fld_EC120F573152E9A5B0D14289E7AC9765CDB96735F60BE7664FE88289);
    g_data_057ac2d3 = '\x01';
  }
  pSVar2 = (System_Array_o *)il2cpp_runtime_helper_022b2a40(TypeInfo_byte,0x20);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_3bc4140
            (pSVar2,fld_4E5ACEA714611B9D5E49BE72A6BA4F74AA6444E0AA9D11B89108FD01,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_SimpleAES + 0xb8) = pSVar2;
  il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_SimpleAES + 0xb8),pSVar2);
  pSVar2 = (System_Array_o *)il2cpp_runtime_helper_022b2a40(TypeInfo_byte,0x10);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_3bc4140
            (pSVar2,fld_EC120F573152E9A5B0D14289E7AC9765CDB96735F60BE7664FE88289,(MethodInfo *)0x0);
  lVar1 = *(long *)(TypeInfo_SimpleAES + 0xb8);
  *(System_Array_o **)(lVar1 + 8) = pSVar2;
  il2cpp_runtime_helper_022b4080(lVar1 + 8,pSVar2);
  return;
}


