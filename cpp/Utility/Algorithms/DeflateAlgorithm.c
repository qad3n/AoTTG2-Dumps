// Type: Utility.Algorithms.DeflateAlgorithm
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/Utility.Algorithms/DeflateAlgorithm.cs
// Prior source: NEW in this update
// --------------------------------

// Utility.Algorithms.DeflateAlgorithm$$Compress
// il2cpp: System_Byte_array* Utility_Algorithms_DeflateAlgorithm__Compress (Utility_Algorithms_DeflateAlgorithm_o* __this, System_Byte_array* data, int32_t level, const MethodInfo* method);
// 0x417fff0

/* WARNING: Removing unreachable block (ram,0x0418026f) */
/* WARNING: Removing unreachable block (ram,0x041801b3) */
/* WARNING: Removing unreachable block (ram,0x04180216) */
/* WARNING: Removing unreachable block (ram,0x041801cb) */
/* WARNING: Removing unreachable block (ram,0x041801d8) */
/* WARNING: Removing unreachable block (ram,0x0418022f) */
/* WARNING: Removing unreachable block (ram,0x04180240) */
/* WARNING: Removing unreachable block (ram,0x04180256) */
/* WARNING: Removing unreachable block (ram,0x041801e1) */
/* WARNING: Removing unreachable block (ram,0x041801f2) */
/* WARNING: Removing unreachable block (ram,0x041801fa) */
/* WARNING: Removing unreachable block (ram,0x04180262) */

System_Byte_array *
Utility_Algorithms_DeflateAlgorithm__Compress
          (Utility_Algorithms_DeflateAlgorithm_o *__this,System_Byte_array *data,int32_t level,
          MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  System_IO_Compression_DeflateStream_c *pSVar3;
  Il2CppRuntimeInterfaceOffsetPair *pIVar4;
  System_IO_MemoryStream_c *pSVar5;
  System_IO_MemoryStream_o *__this_00;
  System_IO_Compression_DeflateStream_o *__this_01;
  VirtualInvokeData *pVVar6;
  System_Byte_array *pSVar7;
  long lVar8;
  
  if (DAT_05704b73 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_DeflateStream);
    il2cpp_init_method_metadata(&TypeInfo_IDisposable);
    il2cpp_init_method_metadata(&TypeInfo_MemoryStream);
    DAT_05704b73 = '\x01';
  }
  __this_00 = (System_IO_MemoryStream_o *)il2cpp_runtime_glue(TypeInfo_MemoryStream);
  System_IO_MemoryStream___ctor(__this_00,(MethodInfo *)0x0);
  __this_01 = (System_IO_Compression_DeflateStream_o *)il2cpp_runtime_glue(TypeInfo_DeflateStream);
  System_IO_Compression_DeflateStream___ctor
            (__this_01,(System_IO_Stream_o *)__this_00,level,1,(MethodInfo *)0x0);
  if (data == (System_Byte_array *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if (__this_01 == (System_IO_Compression_DeflateStream_o *)0x0) {
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
        goto LAB_0418010d;
      }
      lVar8 = lVar8 + 0x10;
    } while ((ulong)uVar1 << 4 != lVar8);
  }
  pVVar6 = (VirtualInvokeData *)il2cpp_runtime_glue(__this_01,TypeInfo_IDisposable,0);
LAB_0418010d:
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
        goto LAB_0418019d;
      }
      lVar8 = lVar8 + 0x10;
    } while ((ulong)uVar2 << 4 != lVar8);
  }
  pVVar6 = (VirtualInvokeData *)il2cpp_runtime_glue(__this_00,TypeInfo_IDisposable,0);
LAB_0418019d:
  (*pVVar6->methodPtr)(__this_00,pVVar6->method);
  return pSVar7;
}


// Utility.Algorithms.DeflateAlgorithm$$Decompress
// il2cpp: System_Byte_array* Utility_Algorithms_DeflateAlgorithm__Decompress (Utility_Algorithms_DeflateAlgorithm_o* __this, System_Byte_array* data, int32_t bufferSize, int64_t maxSize, const MethodInfo* method);
// 0x4180460

/* WARNING: Removing unreachable block (ram,0x04180796) */
/* WARNING: Removing unreachable block (ram,0x04180635) */
/* WARNING: Removing unreachable block (ram,0x04180665) */
/* WARNING: Removing unreachable block (ram,0x0418079e) */
/* WARNING: Removing unreachable block (ram,0x041806e8) */
/* WARNING: Removing unreachable block (ram,0x04180736) */
/* WARNING: Removing unreachable block (ram,0x04180700) */
/* WARNING: Removing unreachable block (ram,0x0418074f) */
/* WARNING: Removing unreachable block (ram,0x0418070d) */
/* WARNING: Removing unreachable block (ram,0x04180758) */
/* WARNING: Removing unreachable block (ram,0x0418071e) */
/* WARNING: Removing unreachable block (ram,0x04180769) */
/* WARNING: Removing unreachable block (ram,0x04180734) */
/* WARNING: Removing unreachable block (ram,0x04180771) */

System_Byte_array *
Utility_Algorithms_DeflateAlgorithm__Decompress
          (Utility_Algorithms_DeflateAlgorithm_o *__this,System_Byte_array *data,int32_t bufferSize,
          int64_t maxSize,MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  System_IO_Compression_DeflateStream_c *pSVar3;
  Il2CppRuntimeInterfaceOffsetPair *pIVar4;
  System_IO_MemoryStream_c *pSVar5;
  uint uVar6;
  int iVar7;
  System_IO_MemoryStream_o *__this_00;
  System_IO_MemoryStream_o *__this_01;
  System_IO_Compression_DeflateStream_o *__this_02;
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
  
  if (DAT_05704b74 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_byte);
    il2cpp_init_method_metadata(&TypeInfo_DeflateStream);
    il2cpp_init_method_metadata(&TypeInfo_IDisposable);
    il2cpp_init_method_metadata(&TypeInfo_MemoryStream);
    DAT_05704b74 = '\x01';
  }
  __this_00 = (System_IO_MemoryStream_o *)il2cpp_runtime_glue(TypeInfo_MemoryStream);
  System_IO_MemoryStream___ctor(__this_00,(MethodInfo *)0x0);
  __this_01 = (System_IO_MemoryStream_o *)il2cpp_runtime_glue(TypeInfo_MemoryStream);
  System_IO_MemoryStream___ctor(__this_01,data,(MethodInfo *)0x0);
  __this_02 = (System_IO_Compression_DeflateStream_o *)il2cpp_runtime_glue(TypeInfo_DeflateStream);
  System_IO_Compression_DeflateStream___ctor
            (__this_02,(System_IO_Stream_o *)__this_01,0,(MethodInfo *)0x0);
  uVar8 = il2cpp_glue_02274930(TypeInfo_byte,bufferSize);
  if (__this_02 == (System_IO_Compression_DeflateStream_o *)0x0) {
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
LAB_041807bf:
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
      if (maxSize < lVar12) goto LAB_041807bf;
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
        goto LAB_0418061d;
      }
      lVar12 = lVar12 + 0x10;
    } while ((ulong)uVar1 << 4 != lVar12);
  }
  pVVar9 = (VirtualInvokeData *)il2cpp_runtime_glue(__this_02,TypeInfo_IDisposable,0);
LAB_0418061d:
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
        goto LAB_041806cd;
      }
      lVar12 = lVar12 + 0x10;
    } while ((ulong)uVar2 << 4 != lVar12);
  }
  pVVar9 = (VirtualInvokeData *)il2cpp_runtime_glue(__this_00,TypeInfo_IDisposable,0);
LAB_041806cd:
  (*pVVar9->methodPtr)(__this_00,pVVar9->method);
  return pSVar10;
}


// Utility.Algorithms.DeflateAlgorithm$$.ctor
// il2cpp: void Utility_Algorithms_DeflateAlgorithm___ctor (Utility_Algorithms_DeflateAlgorithm_o* __this, const MethodInfo* method);
// 0x4180b10

void Utility_Algorithms_DeflateAlgorithm___ctor
               (Utility_Algorithms_DeflateAlgorithm_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


