// Type: Utility.Algorithms.CompressionAlgorithm
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Utility.Algorithms/CompressionAlgorithm.cs
// Prior real C# source: none
// --------------------------------

// Utility.Algorithms.CompressionAlgorithm$$CompressString
// il2cpp: System_Byte_array* Utility_Algorithms_CompressionAlgorithm__CompressString (Utility_Algorithms_CompressionAlgorithm_o* __this, System_String_o* str, int32_t level, const MethodInfo* method);
// 0x4497df0

System_Byte_array *
Utility_Algorithms_CompressionAlgorithm__CompressString
          (Utility_Algorithms_CompressionAlgorithm_o *__this,System_String_o *str,int32_t level,
          MethodInfo *method)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  code *UNRECOVERED_JUMPTABLE_00;
  System_Text_Encoding_c *pSVar5;
  Il2CppMethodPointer vtableDispatch;
  System_IO_Compression_DeflateStream_c *pSVar6;
  Il2CppRuntimeInterfaceOffsetPair *pIVar7;
  System_IO_MemoryStream_c *pSVar8;
  char cVar9;
  bool_conflict bVar10;
  long lVar11;
  System_Text_Encoding_o *pSVar12;
  undefined8 uVar13;
  System_Byte_array *pSVar14;
  long lVar15;
  System_IO_MemoryStream_o *__this_00;
  System_IO_Compression_DeflateStream_o *__this_01;
  Il2CppMethodPointer *ppIVar16;
  long *plVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  undefined4 extraout_EDX;
  int32_t compressionLevel;
  int iVar20;
  undefined8 in_R9;
  undefined8 unaff_R13;
  undefined1 auVar21 [12];
  
  if (g_data_057ae93e == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Byte_Empty_Byte);
    g_data_057ae93e = '\x01';
  }
  lVar15 = 0;
  bVar10 = System_String__IsNullOrEmpty(str,(MethodInfo *)0x0);
  lVar11 = MethodInfo_Byte_Empty_Byte;
  if ((char)bVar10 != '\0') {
    if (*(long *)(MethodInfo_Byte_Empty_Byte + 0x38) == 0) {
      il2cpp_runtime_helper_02300a20(MethodInfo_Byte_Empty_Byte);
      lVar15 = *(long *)(*(long *)(lVar11 + 0x38) + 0x10);
      bVar1 = *(byte *)(lVar15 + 0x135);
    }
    else {
      lVar15 = *(long *)(*(long *)(MethodInfo_Byte_Empty_Byte + 0x38) + 0x10);
      bVar1 = *(byte *)(lVar15 + 0x135);
    }
    if ((bVar1 & 1) == 0) {
      lVar15 = il2cpp_runtime_helper_023009c0();
      iVar20 = *(int *)(lVar15 + 0xe4);
    }
    else {
      iVar20 = *(int *)(lVar15 + 0xe4);
    }
    if (iVar20 == 0) {
      il2cpp_runtime_helper_02337ed0();
      lVar11 = *(long *)(*(long *)(lVar11 + 0x38) + 0x10);
      bVar1 = *(byte *)(lVar11 + 0x135);
    }
    else {
      lVar11 = *(long *)(*(long *)(lVar11 + 0x38) + 0x10);
      bVar1 = *(byte *)(lVar11 + 0x135);
    }
    if ((bVar1 & 1) == 0) {
      lVar11 = il2cpp_runtime_helper_023009c0(lVar11);
    }
    return (System_Byte_array *)**(undefined8 **)(lVar11 + 0xb8);
  }
  plVar17 = (long *)0x0;
  pSVar12 = System_Text_Encoding__get_UTF8((MethodInfo *)0x0);
  if (pSVar12 != (System_Text_Encoding_o *)0x0) {
    uVar13 = (*(pSVar12->klass->vtable)._18_GetBytes.methodPtr)
                       (pSVar12,str,(pSVar12->klass->vtable)._18_GetBytes.method);
    UNRECOVERED_JUMPTABLE_00 = __this->klass[1]._1.image;
    pSVar14 = (System_Byte_array *)
              (*UNRECOVERED_JUMPTABLE_00)
                        (__this,uVar13,level,__this->klass[1]._1.gc_desc,UNRECOVERED_JUMPTABLE_00);
    return pSVar14;
  }
  il2cpp_runtime_helper_022b2c90();
  if ((lVar15 == 0) || (*(long *)(lVar15 + 0x18) == 0)) {
    return (System_Byte_array *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  }
  pSVar12 = System_Text_Encoding__get_UTF8((MethodInfo *)0x0);
  uVar13 = (**(code **)(*plVar17 + 0x188))
                     (plVar17,lVar15,extraout_EDX,method,*(undefined8 *)(*plVar17 + 400),in_R9,__this);
  if (pSVar12 != (System_Text_Encoding_o *)0x0) {
    pSVar5 = pSVar12->klass;
    vtableDispatch = (pSVar5->vtable)._35_GetString.methodPtr;
    pSVar14 = (System_Byte_array *)
              (*vtableDispatch)
                        (pSVar12,uVar13,(pSVar5->vtable)._35_GetString.method,pSVar5,vtableDispatch);
    return pSVar14;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae93f == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_DeflateStream);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IDisposable);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MemoryStream);
    g_data_057ae93f = '\x01';
  }
  __this_00 = (System_IO_MemoryStream_o *)il2cpp_runtime_helper_023052d0(TypeInfo_MemoryStream);
  System_IO_MemoryStream___ctor(__this_00,(MethodInfo *)0x0);
  __this_01 = (System_IO_Compression_DeflateStream_o *)il2cpp_runtime_helper_023052d0(TypeInfo_DeflateStream);
  System_IO_Compression_DeflateStream___ctor_48f03d0
            (__this_01,(System_IO_Stream_o *)__this_00,compressionLevel,1,(MethodInfo *)0x0);
  if (lVar15 == 0) {
    il2cpp_runtime_helper_022b2c90();
label_0449823d:
    il2cpp_runtime_helper_022b2c90();
    il2cpp_runtime_helper_022fefe0(unaff_R13);
  }
  else {
    if (__this_01 == (System_IO_Compression_DeflateStream_o *)0x0) goto label_0449823d;
    (*(__this_01->klass->vtable)._35_Write.methodPtr)
              (__this_01,lVar15,0,(ulong)*(uint *)(lVar15 + 0x18),(__this_01->klass->vtable)._35_Write.method)
    ;
    pSVar6 = __this_01->klass;
    uVar2._0_1_ = (pSVar6->_2).rank;
    uVar2._1_1_ = (pSVar6->_2).minimumAlignment;
    if ((ulong)uVar2 != 0) {
      pIVar7 = (pSVar6->_1).interfaceOffsets;
      lVar11 = 0;
      do {
        if (*(long *)((long)&pIVar7->interfaceType + lVar11) == TypeInfo_IDisposable) {
          ppIVar16 = &(&(pSVar6->vtable)._0_Equals)[*(int *)((long)&pIVar7->offset + lVar11)].methodPtr;
          goto label_044980ed;
        }
        lVar11 = lVar11 + 0x10;
      } while ((ulong)uVar2 << 4 != lVar11);
    }
    ppIVar16 = (Il2CppMethodPointer *)il2cpp_runtime_helper_02300d20(__this_01,TypeInfo_IDisposable,0);
label_044980ed:
    (**ppIVar16)(__this_01,(MethodInfo *)ppIVar16[1]);
    if (__this_00 != (System_IO_MemoryStream_o *)0x0) {
      pSVar14 = (System_Byte_array *)
                (*(__this_00->klass->vtable)._41_ToArray.methodPtr)
                          (__this_00,(__this_00->klass->vtable)._41_ToArray.method);
      iVar20 = 3;
      lVar11 = 0;
      goto label_04498127;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  do {
    auVar21 = il2cpp_runtime_helper_022fefe0();
    if (auVar21._8_4_ != 1) {
      if (__this_00 == (System_IO_MemoryStream_o *)0x0) goto label_044983a7;
      pSVar8 = __this_00->klass;
      uVar4._0_1_ = (pSVar8->_2).rank;
      uVar4._1_1_ = (pSVar8->_2).minimumAlignment;
      if ((ulong)uVar4 == 0) goto label_04498380;
      pIVar7 = (pSVar8->_1).interfaceOffsets;
      lVar11 = 0;
      goto label_04498371;
    }
    plVar17 = (long *)__cxa_begin_catch();
    lVar11 = *plVar17;
    __cxa_end_catch();
    pSVar14 = (System_Byte_array *)0x0;
    iVar20 = 0;
    if (__this_00 != (System_IO_MemoryStream_o *)0x0) {
label_04498127:
      pSVar8 = __this_00->klass;
      uVar3._0_1_ = (pSVar8->_2).rank;
      uVar3._1_1_ = (pSVar8->_2).minimumAlignment;
      if ((ulong)uVar3 != 0) {
        pIVar7 = (pSVar8->_1).interfaceOffsets;
        lVar15 = 0;
        do {
          if (*(long *)((long)&pIVar7->interfaceType + lVar15) == TypeInfo_IDisposable) {
            ppIVar16 = &(&(pSVar8->vtable)._0_Equals)[*(int *)((long)&pIVar7->offset + lVar15)].methodPtr;
            goto label_0449817d;
          }
          lVar15 = lVar15 + 0x10;
        } while ((ulong)uVar3 << 4 != lVar15);
      }
      ppIVar16 = (Il2CppMethodPointer *)il2cpp_runtime_helper_02300d20(__this_00,TypeInfo_IDisposable,0);
label_0449817d:
      (**ppIVar16)(__this_00,(MethodInfo *)ppIVar16[1]);
    }
  } while (lVar11 != 0);
  if (iVar20 != 0) {
    return pSVar14;
  }
label_04498193:
  lVar11 = il2cpp_runtime_helper_023445d0(&MethodInfo_Byte_Empty_Byte);
  if (*(long *)(lVar11 + 0x38) == 0) {
    il2cpp_runtime_helper_02300a20(lVar11);
    lVar15 = *(long *)(*(long *)(lVar11 + 0x38) + 0x10);
    bVar1 = *(byte *)(lVar15 + 0x135);
  }
  else {
    lVar15 = *(long *)(*(long *)(lVar11 + 0x38) + 0x10);
    bVar1 = *(byte *)(lVar15 + 0x135);
  }
  if ((bVar1 & 1) == 0) {
    lVar15 = il2cpp_runtime_helper_023009c0();
    iVar20 = *(int *)(lVar15 + 0xe4);
  }
  else {
    iVar20 = *(int *)(lVar15 + 0xe4);
  }
  if (iVar20 == 0) {
    il2cpp_runtime_helper_02337ed0();
    lVar11 = *(long *)(*(long *)(lVar11 + 0x38) + 0x10);
    bVar1 = *(byte *)(lVar11 + 0x135);
  }
  else {
    lVar11 = *(long *)(*(long *)(lVar11 + 0x38) + 0x10);
    bVar1 = *(byte *)(lVar11 + 0x135);
  }
  if ((bVar1 & 1) == 0) {
    lVar11 = il2cpp_runtime_helper_023009c0(lVar11);
  }
  return (System_Byte_array *)**(undefined8 **)(lVar11 + 0xb8);
  while (lVar11 = lVar11 + 0x10, (ulong)uVar4 << 4 != lVar11) {
label_04498371:
    if (*(long *)((long)&pIVar7->interfaceType + lVar11) == TypeInfo_IDisposable) {
      ppIVar16 = &(&(pSVar8->vtable)._0_Equals)[*(int *)((long)&pIVar7->offset + lVar11)].methodPtr;
      goto label_0449839e;
    }
  }
label_04498380:
  ppIVar16 = (Il2CppMethodPointer *)il2cpp_runtime_helper_02300d20(__this_00,TypeInfo_IDisposable,0);
label_0449839e:
  (**ppIVar16)(__this_00,(MethodInfo *)ppIVar16[1]);
label_044983a7:
  if (auVar21._8_4_ != 1) {
    _Unwind_Resume(auVar21._0_8_);
  }
  puVar18 = (undefined8 *)__cxa_begin_catch(auVar21._0_8_);
  cVar9 = il2cpp_runtime_helper_0233e000(g_data_057b9b80,*(undefined8 *)*puVar18);
  if (cVar9 == '\0') {
    puVar19 = (undefined8 *)__cxa_allocate_exception(8);
    *puVar19 = *puVar18;
    __cxa_throw(puVar19,&PTR_PTR_05215060,0);
  }
  __cxa_end_catch();
  goto label_04498193;
}


// Utility.Algorithms.CompressionAlgorithm$$DecompressString
// il2cpp: System_String_o* Utility_Algorithms_CompressionAlgorithm__DecompressString (Utility_Algorithms_CompressionAlgorithm_o* __this, System_Byte_array* data, int32_t bufferSize, int64_t maxSize, const MethodInfo* method);
// 0x4497f30

System_String_o *
Utility_Algorithms_CompressionAlgorithm__DecompressString
          (Utility_Algorithms_CompressionAlgorithm_o *__this,System_Byte_array *data,int32_t bufferSize,
          int64_t maxSize,MethodInfo *method)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  System_Text_Encoding_c *pSVar5;
  Il2CppMethodPointer vtableDispatch;
  System_IO_Compression_DeflateStream_c *pSVar6;
  Il2CppRuntimeInterfaceOffsetPair *pIVar7;
  System_IO_MemoryStream_c *pSVar8;
  char cVar9;
  System_Text_Encoding_o *pSVar10;
  undefined8 uVar11;
  System_String_o *pSVar12;
  System_IO_MemoryStream_o *__this_00;
  System_IO_Compression_DeflateStream_o *__this_01;
  Il2CppMethodPointer *ppIVar13;
  long *plVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  int32_t compressionLevel;
  int iVar17;
  long lVar18;
  long lVar19;
  undefined8 unaff_R13;
  undefined1 auVar20 [12];
  
  if ((data == (System_Byte_array *)0x0) || (data->max_length == 0)) {
    return (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  }
  pSVar10 = System_Text_Encoding__get_UTF8((MethodInfo *)0x0);
  uVar11 = (*(code *)__this->klass[1]._1.name)(__this,data,bufferSize,maxSize);
  if (pSVar10 != (System_Text_Encoding_o *)0x0) {
    pSVar5 = pSVar10->klass;
    vtableDispatch = (pSVar5->vtable)._35_GetString.methodPtr;
    pSVar12 = (System_String_o *)
              (*vtableDispatch)
                        (pSVar10,uVar11,(pSVar5->vtable)._35_GetString.method,pSVar5,vtableDispatch);
    return pSVar12;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae93f == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_DeflateStream);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IDisposable);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MemoryStream);
    g_data_057ae93f = '\x01';
  }
  __this_00 = (System_IO_MemoryStream_o *)il2cpp_runtime_helper_023052d0(TypeInfo_MemoryStream);
  System_IO_MemoryStream___ctor(__this_00,(MethodInfo *)0x0);
  __this_01 = (System_IO_Compression_DeflateStream_o *)il2cpp_runtime_helper_023052d0(TypeInfo_DeflateStream);
  System_IO_Compression_DeflateStream___ctor_48f03d0
            (__this_01,(System_IO_Stream_o *)__this_00,compressionLevel,1,(MethodInfo *)0x0);
  if (data == (System_Byte_array *)0x0) {
    il2cpp_runtime_helper_022b2c90();
label_0449823d:
    il2cpp_runtime_helper_022b2c90();
    il2cpp_runtime_helper_022fefe0(unaff_R13);
  }
  else {
    if (__this_01 == (System_IO_Compression_DeflateStream_o *)0x0) goto label_0449823d;
    (*(__this_01->klass->vtable)._35_Write.methodPtr)
              (__this_01,data,0,(ulong)(uint)data->max_length,(__this_01->klass->vtable)._35_Write.method);
    pSVar6 = __this_01->klass;
    uVar2._0_1_ = (pSVar6->_2).rank;
    uVar2._1_1_ = (pSVar6->_2).minimumAlignment;
    if ((ulong)uVar2 != 0) {
      pIVar7 = (pSVar6->_1).interfaceOffsets;
      lVar18 = 0;
      do {
        if (*(long *)((long)&pIVar7->interfaceType + lVar18) == TypeInfo_IDisposable) {
          ppIVar13 = &(&(pSVar6->vtable)._0_Equals)[*(int *)((long)&pIVar7->offset + lVar18)].methodPtr;
          goto label_044980ed;
        }
        lVar18 = lVar18 + 0x10;
      } while ((ulong)uVar2 << 4 != lVar18);
    }
    ppIVar13 = (Il2CppMethodPointer *)il2cpp_runtime_helper_02300d20(__this_01,TypeInfo_IDisposable,0);
label_044980ed:
    (**ppIVar13)(__this_01,(MethodInfo *)ppIVar13[1]);
    if (__this_00 != (System_IO_MemoryStream_o *)0x0) {
      pSVar12 = (System_String_o *)
                (*(__this_00->klass->vtable)._41_ToArray.methodPtr)
                          (__this_00,(__this_00->klass->vtable)._41_ToArray.method);
      iVar17 = 3;
      lVar18 = 0;
      goto label_04498127;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  do {
    auVar20 = il2cpp_runtime_helper_022fefe0();
    if (auVar20._8_4_ != 1) {
      if (__this_00 == (System_IO_MemoryStream_o *)0x0) goto label_044983a7;
      pSVar8 = __this_00->klass;
      uVar4._0_1_ = (pSVar8->_2).rank;
      uVar4._1_1_ = (pSVar8->_2).minimumAlignment;
      if ((ulong)uVar4 == 0) goto label_04498380;
      pIVar7 = (pSVar8->_1).interfaceOffsets;
      lVar18 = 0;
      goto label_04498371;
    }
    plVar14 = (long *)__cxa_begin_catch();
    lVar18 = *plVar14;
    __cxa_end_catch();
    pSVar12 = (System_String_o *)0x0;
    iVar17 = 0;
    if (__this_00 != (System_IO_MemoryStream_o *)0x0) {
label_04498127:
      pSVar8 = __this_00->klass;
      uVar3._0_1_ = (pSVar8->_2).rank;
      uVar3._1_1_ = (pSVar8->_2).minimumAlignment;
      if ((ulong)uVar3 != 0) {
        pIVar7 = (pSVar8->_1).interfaceOffsets;
        lVar19 = 0;
        do {
          if (*(long *)((long)&pIVar7->interfaceType + lVar19) == TypeInfo_IDisposable) {
            ppIVar13 = &(&(pSVar8->vtable)._0_Equals)[*(int *)((long)&pIVar7->offset + lVar19)].methodPtr;
            goto label_0449817d;
          }
          lVar19 = lVar19 + 0x10;
        } while ((ulong)uVar3 << 4 != lVar19);
      }
      ppIVar13 = (Il2CppMethodPointer *)il2cpp_runtime_helper_02300d20(__this_00,TypeInfo_IDisposable,0);
label_0449817d:
      (**ppIVar13)(__this_00,(MethodInfo *)ppIVar13[1]);
    }
  } while (lVar18 != 0);
  if (iVar17 != 0) {
    return pSVar12;
  }
label_04498193:
  lVar18 = il2cpp_runtime_helper_023445d0(&MethodInfo_Byte_Empty_Byte);
  if (*(long *)(lVar18 + 0x38) == 0) {
    il2cpp_runtime_helper_02300a20(lVar18);
    lVar19 = *(long *)(*(long *)(lVar18 + 0x38) + 0x10);
    bVar1 = *(byte *)(lVar19 + 0x135);
  }
  else {
    lVar19 = *(long *)(*(long *)(lVar18 + 0x38) + 0x10);
    bVar1 = *(byte *)(lVar19 + 0x135);
  }
  if ((bVar1 & 1) == 0) {
    lVar19 = il2cpp_runtime_helper_023009c0();
    iVar17 = *(int *)(lVar19 + 0xe4);
  }
  else {
    iVar17 = *(int *)(lVar19 + 0xe4);
  }
  if (iVar17 == 0) {
    il2cpp_runtime_helper_02337ed0();
    lVar18 = *(long *)(*(long *)(lVar18 + 0x38) + 0x10);
    bVar1 = *(byte *)(lVar18 + 0x135);
  }
  else {
    lVar18 = *(long *)(*(long *)(lVar18 + 0x38) + 0x10);
    bVar1 = *(byte *)(lVar18 + 0x135);
  }
  if ((bVar1 & 1) == 0) {
    lVar18 = il2cpp_runtime_helper_023009c0(lVar18);
  }
  return (System_String_o *)**(undefined8 **)(lVar18 + 0xb8);
  while (lVar18 = lVar18 + 0x10, (ulong)uVar4 << 4 != lVar18) {
label_04498371:
    if (*(long *)((long)&pIVar7->interfaceType + lVar18) == TypeInfo_IDisposable) {
      ppIVar13 = &(&(pSVar8->vtable)._0_Equals)[*(int *)((long)&pIVar7->offset + lVar18)].methodPtr;
      goto label_0449839e;
    }
  }
label_04498380:
  ppIVar13 = (Il2CppMethodPointer *)il2cpp_runtime_helper_02300d20(__this_00,TypeInfo_IDisposable,0);
label_0449839e:
  (**ppIVar13)(__this_00,(MethodInfo *)ppIVar13[1]);
label_044983a7:
  if (auVar20._8_4_ != 1) {
    _Unwind_Resume(auVar20._0_8_);
  }
  puVar15 = (undefined8 *)__cxa_begin_catch(auVar20._0_8_);
  cVar9 = il2cpp_runtime_helper_0233e000(g_data_057b9b80,*(undefined8 *)*puVar15);
  if (cVar9 == '\0') {
    puVar16 = (undefined8 *)__cxa_allocate_exception(8);
    *puVar16 = *puVar15;
    __cxa_throw(puVar16,&PTR_PTR_05215060,0);
  }
  __cxa_end_catch();
  goto label_04498193;
}


// Utility.Algorithms.CompressionAlgorithm$$.ctor
// il2cpp: void Utility_Algorithms_CompressionAlgorithm___ctor (Utility_Algorithms_CompressionAlgorithm_o* __this, const MethodInfo* method);
// 0x4497de0

void Utility_Algorithms_CompressionAlgorithm___ctor
               (Utility_Algorithms_CompressionAlgorithm_o *__this,MethodInfo *method)

{
  return;
}


