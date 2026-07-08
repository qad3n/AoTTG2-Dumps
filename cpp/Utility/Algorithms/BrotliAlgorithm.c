// Type: Utility.Algorithms.BrotliAlgorithm
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/Utility.Algorithms/BrotliAlgorithm.cs
// Prior source: NEW in this update
// --------------------------------

// Utility.Algorithms.BrotliAlgorithm$$Compress
// il2cpp: System_Byte_array* Utility_Algorithms_BrotliAlgorithm__Compress (Utility_Algorithms_BrotliAlgorithm_o* __this, System_Byte_array* data, int32_t level, const MethodInfo* method);
// 0x417f2d0

/* WARNING: Removing unreachable block (ram,0x0417f54f) */
/* WARNING: Removing unreachable block (ram,0x0417f493) */
/* WARNING: Removing unreachable block (ram,0x0417f4f6) */
/* WARNING: Removing unreachable block (ram,0x0417f4ab) */
/* WARNING: Removing unreachable block (ram,0x0417f4b8) */
/* WARNING: Removing unreachable block (ram,0x0417f50f) */
/* WARNING: Removing unreachable block (ram,0x0417f520) */
/* WARNING: Removing unreachable block (ram,0x0417f536) */
/* WARNING: Removing unreachable block (ram,0x0417f4c1) */
/* WARNING: Removing unreachable block (ram,0x0417f4d2) */
/* WARNING: Removing unreachable block (ram,0x0417f4da) */
/* WARNING: Removing unreachable block (ram,0x0417f542) */

System_Byte_array *
Utility_Algorithms_BrotliAlgorithm__Compress
          (Utility_Algorithms_BrotliAlgorithm_o *__this,System_Byte_array *data,int32_t level,
          MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  System_IO_Compression_BrotliStream_c *pSVar3;
  Il2CppRuntimeInterfaceOffsetPair *pIVar4;
  System_IO_MemoryStream_c *pSVar5;
  System_IO_MemoryStream_o *__this_00;
  System_IO_Compression_BrotliStream_o *__this_01;
  VirtualInvokeData *pVVar6;
  System_Byte_array *pSVar7;
  long lVar8;
  
  if (DAT_05704b70 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BrotliStream);
    il2cpp_init_method_metadata(&TypeInfo_IDisposable);
    il2cpp_init_method_metadata(&TypeInfo_MemoryStream);
    DAT_05704b70 = '\x01';
  }
  __this_00 = (System_IO_MemoryStream_o *)il2cpp_runtime_glue(TypeInfo_MemoryStream);
  System_IO_MemoryStream___ctor(__this_00,(MethodInfo *)0x0);
  __this_01 = (System_IO_Compression_BrotliStream_o *)il2cpp_runtime_glue(TypeInfo_BrotliStream);
  System_IO_Compression_BrotliStream___ctor
            (__this_01,(System_IO_Stream_o *)__this_00,level,1,(MethodInfo *)0x0);
  if (data == (System_Byte_array *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if (__this_01 == (System_IO_Compression_BrotliStream_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  (*(__this_01->klass->vtable)._35_Write.methodPtr)
            (__this_01,data,0,(ulong)(uint)data->max_length,
             (__this_01->klass->vtable)._35_Write.method);
  pSVar3 = __this_01->klass;
  uVar1._0_1_ = (pSVar3->_2).rank;
  uVar1._1_1_ = (pSVar3->_2).minimumAlignment;
  if ((ulong)uVar1 != 0) {
    pIVar4 = (pSVar3->_1).interfaceOffsets;
    lVar8 = 0;
    do {
      if (*(long *)((long)&pIVar4->interfaceType + lVar8) == TypeInfo_IDisposable) {
        pVVar6 = &(pSVar3->vtable)._0_Equals + *(int *)((long)&pIVar4->offset + lVar8);
        goto LAB_0417f3ed;
      }
      lVar8 = lVar8 + 0x10;
    } while ((ulong)uVar1 << 4 != lVar8);
  }
  pVVar6 = (VirtualInvokeData *)il2cpp_runtime_glue(__this_01,TypeInfo_IDisposable,0);
LAB_0417f3ed:
  (*pVVar6->methodPtr)(__this_01,pVVar6->method);
  if (__this_00 == (System_IO_MemoryStream_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  pSVar7 = (System_Byte_array *)
           (*(__this_00->klass->vtable)._41_ToArray.methodPtr)
                     (__this_00,(__this_00->klass->vtable)._41_ToArray.method);
  pSVar5 = __this_00->klass;
  uVar2._0_1_ = (pSVar5->_2).rank;
  uVar2._1_1_ = (pSVar5->_2).minimumAlignment;
  if ((ulong)uVar2 != 0) {
    pIVar4 = (pSVar5->_1).interfaceOffsets;
    lVar8 = 0;
    do {
      if (*(long *)((long)&pIVar4->interfaceType + lVar8) == TypeInfo_IDisposable) {
        pVVar6 = &(pSVar5->vtable)._0_Equals + *(int *)((long)&pIVar4->offset + lVar8);
        goto LAB_0417f47d;
      }
      lVar8 = lVar8 + 0x10;
    } while ((ulong)uVar2 << 4 != lVar8);
  }
  pVVar6 = (VirtualInvokeData *)il2cpp_runtime_glue(__this_00,TypeInfo_IDisposable,0);
LAB_0417f47d:
  (*pVVar6->methodPtr)(__this_00,pVVar6->method);
  return pSVar7;
}


// Utility.Algorithms.BrotliAlgorithm$$Decompress
// il2cpp: System_Byte_array* Utility_Algorithms_BrotliAlgorithm__Decompress (Utility_Algorithms_BrotliAlgorithm_o* __this, System_Byte_array* data, int32_t bufferSize, int64_t maxSize, const MethodInfo* method);
// 0x417f740

/* WARNING: Removing unreachable block (ram,0x0417fa76) */
/* WARNING: Removing unreachable block (ram,0x0417f915) */
/* WARNING: Removing unreachable block (ram,0x0417f945) */
/* WARNING: Removing unreachable block (ram,0x0417fa7e) */
/* WARNING: Removing unreachable block (ram,0x0417f9c8) */
/* WARNING: Removing unreachable block (ram,0x0417fa16) */
/* WARNING: Removing unreachable block (ram,0x0417f9e0) */
/* WARNING: Removing unreachable block (ram,0x0417fa2f) */
/* WARNING: Removing unreachable block (ram,0x0417f9ed) */
/* WARNING: Removing unreachable block (ram,0x0417fa38) */
/* WARNING: Removing unreachable block (ram,0x0417f9fe) */
/* WARNING: Removing unreachable block (ram,0x0417fa49) */
/* WARNING: Removing unreachable block (ram,0x0417fa14) */
/* WARNING: Removing unreachable block (ram,0x0417fa51) */

System_Byte_array *
Utility_Algorithms_BrotliAlgorithm__Decompress
          (Utility_Algorithms_BrotliAlgorithm_o *__this,System_Byte_array *data,int32_t bufferSize,
          int64_t maxSize,MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  System_IO_Compression_BrotliStream_c *pSVar3;
  Il2CppRuntimeInterfaceOffsetPair *pIVar4;
  System_IO_MemoryStream_c *pSVar5;
  uint uVar6;
  int iVar7;
  System_IO_MemoryStream_o *__this_00;
  System_IO_MemoryStream_o *__this_01;
  System_IO_Compression_BrotliStream_o *__this_02;
  undefined8 uVar8;
  VirtualInvokeData *pVVar9;
  System_Byte_array *pSVar10;
  Il2CppObject *arg0;
  Il2CppObject *arg1;
  System_String_o *pSVar11;
  System_IO_IOException_o *__this_03;
  long lVar12;
  int64_t iStack_40;
  long lStack_38;
  
  if (DAT_05704b71 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BrotliStream);
    il2cpp_init_method_metadata(&TypeInfo_byte);
    il2cpp_init_method_metadata(&TypeInfo_IDisposable);
    il2cpp_init_method_metadata(&TypeInfo_MemoryStream);
    DAT_05704b71 = '\x01';
  }
  __this_00 = (System_IO_MemoryStream_o *)il2cpp_runtime_glue(TypeInfo_MemoryStream);
  System_IO_MemoryStream___ctor(__this_00,(MethodInfo *)0x0);
  __this_01 = (System_IO_MemoryStream_o *)il2cpp_runtime_glue(TypeInfo_MemoryStream);
  System_IO_MemoryStream___ctor(__this_01,data,(MethodInfo *)0x0);
  __this_02 = (System_IO_Compression_BrotliStream_o *)il2cpp_runtime_glue(TypeInfo_BrotliStream);
  System_IO_Compression_BrotliStream___ctor
            (__this_02,(System_IO_Stream_o *)__this_01,0,(MethodInfo *)0x0);
  uVar8 = il2cpp_glue_02274930(TypeInfo_byte,bufferSize);
  if (__this_02 == (System_IO_Compression_BrotliStream_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if (__this_00 == (System_IO_MemoryStream_o *)0x0) {
    iVar7 = (*(__this_02->klass->vtable)._32_Read.methodPtr)
                      (__this_02,uVar8,0,(ulong)(uint)bufferSize,
                       (__this_02->klass->vtable)._32_Read.method);
    if (0 < iVar7) {
      lVar12 = (long)iVar7;
      if (lVar12 <= maxSize) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
LAB_0417fa9f:
      lStack_38 = lVar12;
      arg0 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711088,&lStack_38);
      iStack_40 = maxSize;
      arg1 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711088,&iStack_40);
      pSVar11 = (System_String_o *)il2cpp_init_method_metadata(&"Decompressed size exceeded maximum allowed ({0} > {1})");
      pSVar11 = System_String__Format(pSVar11,arg0,arg1,(MethodInfo *)0x0);
      uVar8 = il2cpp_init_method_metadata(&TypeInfo_IOException);
      __this_03 = (System_IO_IOException_o *)il2cpp_runtime_glue(uVar8);
      System_IO_IOException___ctor(__this_03,pSVar11,(MethodInfo *)0x0);
      uVar8 = il2cpp_init_method_metadata(&MethodInfo_Byte___Decompress);
                    /* WARNING: Subroutine does not return */
      il2cpp_glue_02274a00(__this_03,uVar8);
    }
  }
  else {
    lVar12 = 0;
    while (uVar6 = (*(__this_02->klass->vtable)._32_Read.methodPtr)
                             (__this_02,uVar8,0,(ulong)(uint)bufferSize,
                              (__this_02->klass->vtable)._32_Read.method), 0 < (int)uVar6) {
      lVar12 = lVar12 + (int)uVar6;
      if (maxSize < lVar12) goto LAB_0417fa9f;
      (*(__this_00->klass->vtable)._35_Write.methodPtr)
                (__this_00,uVar8,0,(ulong)uVar6,(__this_00->klass->vtable)._35_Write.method);
    }
  }
  pSVar3 = __this_02->klass;
  uVar1._0_1_ = (pSVar3->_2).rank;
  uVar1._1_1_ = (pSVar3->_2).minimumAlignment;
  if ((ulong)uVar1 != 0) {
    pIVar4 = (pSVar3->_1).interfaceOffsets;
    lVar12 = 0;
    do {
      if (*(long *)((long)&pIVar4->interfaceType + lVar12) == TypeInfo_IDisposable) {
        pVVar9 = &(pSVar3->vtable)._0_Equals + *(int *)((long)&pIVar4->offset + lVar12);
        goto LAB_0417f8fd;
      }
      lVar12 = lVar12 + 0x10;
    } while ((ulong)uVar1 << 4 != lVar12);
  }
  pVVar9 = (VirtualInvokeData *)il2cpp_runtime_glue(__this_02,TypeInfo_IDisposable,0);
LAB_0417f8fd:
  (*pVVar9->methodPtr)(__this_02,pVVar9->method);
  if (__this_00 == (System_IO_MemoryStream_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  pSVar10 = (System_Byte_array *)
            (*(__this_00->klass->vtable)._41_ToArray.methodPtr)
                      (__this_00,(__this_00->klass->vtable)._41_ToArray.method);
  pSVar5 = __this_00->klass;
  uVar2._0_1_ = (pSVar5->_2).rank;
  uVar2._1_1_ = (pSVar5->_2).minimumAlignment;
  if ((ulong)uVar2 != 0) {
    pIVar4 = (pSVar5->_1).interfaceOffsets;
    lVar12 = 0;
    do {
      if (*(long *)((long)&pIVar4->interfaceType + lVar12) == TypeInfo_IDisposable) {
        pVVar9 = &(pSVar5->vtable)._0_Equals + *(int *)((long)&pIVar4->offset + lVar12);
        goto LAB_0417f9ad;
      }
      lVar12 = lVar12 + 0x10;
    } while ((ulong)uVar2 << 4 != lVar12);
  }
  pVVar9 = (VirtualInvokeData *)il2cpp_runtime_glue(__this_00,TypeInfo_IDisposable,0);
LAB_0417f9ad:
  (*pVVar9->methodPtr)(__this_00,pVVar9->method);
  return pSVar10;
}


// Utility.Algorithms.BrotliAlgorithm$$.ctor
// il2cpp: void Utility_Algorithms_BrotliAlgorithm___ctor (Utility_Algorithms_BrotliAlgorithm_o* __this, const MethodInfo* method);
// 0x417fdf0

void Utility_Algorithms_BrotliAlgorithm___ctor
               (Utility_Algorithms_BrotliAlgorithm_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


