// Type: Utility.Algorithms.BrotliAlgorithm
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Utility.Algorithms/BrotliAlgorithm.cs
// Prior real C# source: none
// --------------------------------

// Utility.Algorithms.BrotliAlgorithm$$Compress
// il2cpp: System_Byte_array* Utility_Algorithms_BrotliAlgorithm__Compress (Utility_Algorithms_BrotliAlgorithm_o* __this, System_Byte_array* data, int32_t level, const MethodInfo* method);
// 0x44972b0

System_Byte_array *
Utility_Algorithms_BrotliAlgorithm__Compress
          (Utility_Algorithms_BrotliAlgorithm_o *__this,System_Byte_array *data,int32_t level,
          MethodInfo *method)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  System_IO_Compression_BrotliStream_c *pSVar5;
  Il2CppRuntimeInterfaceOffsetPair *pIVar6;
  System_IO_MemoryStream_c *pSVar7;
  char cVar8;
  System_IO_MemoryStream_o *__this_00;
  System_IO_Compression_BrotliStream_o *__this_01;
  Il2CppMethodPointer *ppIVar9;
  System_Byte_array *pSVar10;
  long *plVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  int iVar14;
  long lVar15;
  long lVar16;
  undefined8 unaff_R13;
  undefined1 auVar17 [12];
  
  if (g_data_057ae93c == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BrotliStream);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IDisposable);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MemoryStream);
    g_data_057ae93c = '\x01';
  }
  __this_00 = (System_IO_MemoryStream_o *)il2cpp_runtime_helper_023052d0(TypeInfo_MemoryStream);
  System_IO_MemoryStream___ctor(__this_00,(MethodInfo *)0x0);
  __this_01 = (System_IO_Compression_BrotliStream_o *)il2cpp_runtime_helper_023052d0(TypeInfo_BrotliStream);
  System_IO_Compression_BrotliStream___ctor_4661370
            (__this_01,(System_IO_Stream_o *)__this_00,level,1,(MethodInfo *)0x0);
  if (data == (System_Byte_array *)0x0) {
    il2cpp_runtime_helper_022b2c90();
label_0449751d:
    il2cpp_runtime_helper_022b2c90();
    il2cpp_runtime_helper_022fefe0(unaff_R13);
  }
  else {
    if (__this_01 == (System_IO_Compression_BrotliStream_o *)0x0) goto label_0449751d;
    (*(__this_01->klass->vtable)._35_Write.methodPtr)
              (__this_01,data,0,(ulong)(uint)data->max_length,(__this_01->klass->vtable)._35_Write.method);
    pSVar5 = __this_01->klass;
    uVar2._0_1_ = (pSVar5->_2).rank;
    uVar2._1_1_ = (pSVar5->_2).minimumAlignment;
    if ((ulong)uVar2 != 0) {
      pIVar6 = (pSVar5->_1).interfaceOffsets;
      lVar15 = 0;
      do {
        if (*(long *)((long)&pIVar6->interfaceType + lVar15) == TypeInfo_IDisposable) {
          ppIVar9 = &(&(pSVar5->vtable)._0_Equals)[*(int *)((long)&pIVar6->offset + lVar15)].methodPtr;
          goto label_044973cd;
        }
        lVar15 = lVar15 + 0x10;
      } while ((ulong)uVar2 << 4 != lVar15);
    }
    ppIVar9 = (Il2CppMethodPointer *)il2cpp_runtime_helper_02300d20(__this_01,TypeInfo_IDisposable,0);
label_044973cd:
    (**ppIVar9)(__this_01,(MethodInfo *)ppIVar9[1]);
    if (__this_00 != (System_IO_MemoryStream_o *)0x0) {
      pSVar10 = (System_Byte_array *)
                (*(__this_00->klass->vtable)._41_ToArray.methodPtr)
                          (__this_00,(__this_00->klass->vtable)._41_ToArray.method);
      iVar14 = 3;
      lVar15 = 0;
      goto label_04497407;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  do {
    auVar17 = il2cpp_runtime_helper_022fefe0();
    if (auVar17._8_4_ != 1) {
      if (__this_00 == (System_IO_MemoryStream_o *)0x0) goto label_04497687;
      pSVar7 = __this_00->klass;
      uVar4._0_1_ = (pSVar7->_2).rank;
      uVar4._1_1_ = (pSVar7->_2).minimumAlignment;
      if ((ulong)uVar4 == 0) goto label_04497660;
      pIVar6 = (pSVar7->_1).interfaceOffsets;
      lVar15 = 0;
      goto label_04497651;
    }
    plVar11 = (long *)__cxa_begin_catch();
    lVar15 = *plVar11;
    __cxa_end_catch();
    pSVar10 = (System_Byte_array *)0x0;
    iVar14 = 0;
    if (__this_00 != (System_IO_MemoryStream_o *)0x0) {
label_04497407:
      pSVar7 = __this_00->klass;
      uVar3._0_1_ = (pSVar7->_2).rank;
      uVar3._1_1_ = (pSVar7->_2).minimumAlignment;
      if ((ulong)uVar3 != 0) {
        pIVar6 = (pSVar7->_1).interfaceOffsets;
        lVar16 = 0;
        do {
          if (*(long *)((long)&pIVar6->interfaceType + lVar16) == TypeInfo_IDisposable) {
            ppIVar9 = &(&(pSVar7->vtable)._0_Equals)[*(int *)((long)&pIVar6->offset + lVar16)].methodPtr;
            goto label_0449745d;
          }
          lVar16 = lVar16 + 0x10;
        } while ((ulong)uVar3 << 4 != lVar16);
      }
      ppIVar9 = (Il2CppMethodPointer *)il2cpp_runtime_helper_02300d20(__this_00,TypeInfo_IDisposable,0);
label_0449745d:
      (**ppIVar9)(__this_00,(MethodInfo *)ppIVar9[1]);
    }
  } while (lVar15 != 0);
  if (iVar14 != 0) {
    return pSVar10;
  }
label_04497473:
  lVar15 = il2cpp_runtime_helper_023445d0(&MethodInfo_Byte_Empty_Byte);
  if (*(long *)(lVar15 + 0x38) == 0) {
    il2cpp_runtime_helper_02300a20(lVar15);
    lVar16 = *(long *)(*(long *)(lVar15 + 0x38) + 0x10);
    bVar1 = *(byte *)(lVar16 + 0x135);
  }
  else {
    lVar16 = *(long *)(*(long *)(lVar15 + 0x38) + 0x10);
    bVar1 = *(byte *)(lVar16 + 0x135);
  }
  if ((bVar1 & 1) == 0) {
    lVar16 = il2cpp_runtime_helper_023009c0();
    iVar14 = *(int *)(lVar16 + 0xe4);
  }
  else {
    iVar14 = *(int *)(lVar16 + 0xe4);
  }
  if (iVar14 == 0) {
    il2cpp_runtime_helper_02337ed0();
    lVar15 = *(long *)(*(long *)(lVar15 + 0x38) + 0x10);
    bVar1 = *(byte *)(lVar15 + 0x135);
  }
  else {
    lVar15 = *(long *)(*(long *)(lVar15 + 0x38) + 0x10);
    bVar1 = *(byte *)(lVar15 + 0x135);
  }
  if ((bVar1 & 1) == 0) {
    lVar15 = il2cpp_runtime_helper_023009c0(lVar15);
  }
  return (System_Byte_array *)**(undefined8 **)(lVar15 + 0xb8);
  while (lVar15 = lVar15 + 0x10, (ulong)uVar4 << 4 != lVar15) {
label_04497651:
    if (*(long *)((long)&pIVar6->interfaceType + lVar15) == TypeInfo_IDisposable) {
      ppIVar9 = &(&(pSVar7->vtable)._0_Equals)[*(int *)((long)&pIVar6->offset + lVar15)].methodPtr;
      goto label_0449767e;
    }
  }
label_04497660:
  ppIVar9 = (Il2CppMethodPointer *)il2cpp_runtime_helper_02300d20(__this_00,TypeInfo_IDisposable,0);
label_0449767e:
  (**ppIVar9)(__this_00,(MethodInfo *)ppIVar9[1]);
label_04497687:
  if (auVar17._8_4_ != 1) {
    _Unwind_Resume(auVar17._0_8_);
  }
  puVar12 = (undefined8 *)__cxa_begin_catch(auVar17._0_8_);
  cVar8 = il2cpp_runtime_helper_0233e000(g_data_057b9b80,*(undefined8 *)*puVar12);
  if (cVar8 == '\0') {
    puVar13 = (undefined8 *)__cxa_allocate_exception(8);
    *puVar13 = *puVar12;
    __cxa_throw(puVar13,&PTR_PTR_05215060,0);
  }
  __cxa_end_catch();
  goto label_04497473;
}


// Utility.Algorithms.BrotliAlgorithm$$Decompress
// il2cpp: System_Byte_array* Utility_Algorithms_BrotliAlgorithm__Decompress (Utility_Algorithms_BrotliAlgorithm_o* __this, System_Byte_array* data, int32_t bufferSize, int64_t maxSize, const MethodInfo* method);
// 0x4497720

System_Byte_array *
Utility_Algorithms_BrotliAlgorithm__Decompress
          (Utility_Algorithms_BrotliAlgorithm_o *__this,System_Byte_array *data,int32_t bufferSize,
          int64_t maxSize,MethodInfo *method)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  System_IO_MemoryStream_c *pSVar6;
  System_IO_Compression_BrotliStream_c *pSVar7;
  Il2CppRuntimeInterfaceOffsetPair *pIVar8;
  char cVar9;
  uint uVar10;
  int iVar11;
  System_IO_MemoryStream_o *__this_00;
  System_IO_MemoryStream_o *__this_01;
  System_IO_Compression_BrotliStream_o *__this_02;
  undefined8 uVar12;
  System_Byte_array *pSVar13;
  long lVar14;
  Il2CppObject *arg0;
  Il2CppObject *arg1;
  System_String_o *pSVar15;
  System_IO_IOException_o *__this_03;
  undefined8 *puVar16;
  undefined8 *puVar17;
  Il2CppMethodPointer *ppIVar18;
  ulong *puVar19;
  long *plVar20;
  long lVar21;
  ulong uVar22;
  undefined1 auVar23 [12];
  int64_t iStack_40;
  long lStack_38;
  
  uVar22 = (ulong)(uint)bufferSize;
  if (g_data_057ae93d == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BrotliStream);
    il2cpp_runtime_helper_023445d0(&TypeInfo_byte);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IDisposable);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MemoryStream);
    g_data_057ae93d = '\x01';
  }
  __this_00 = (System_IO_MemoryStream_o *)il2cpp_runtime_helper_023052d0(TypeInfo_MemoryStream);
  System_IO_MemoryStream___ctor(__this_00,(MethodInfo *)0x0);
  __this_01 = (System_IO_MemoryStream_o *)il2cpp_runtime_helper_023052d0(TypeInfo_MemoryStream);
  System_IO_MemoryStream___ctor_3beac70(__this_01,data,(MethodInfo *)0x0);
  __this_02 = (System_IO_Compression_BrotliStream_o *)il2cpp_runtime_helper_023052d0(TypeInfo_BrotliStream);
  System_IO_Compression_BrotliStream___ctor(__this_02,(System_IO_Stream_o *)__this_01,0,(MethodInfo *)0x0);
  uVar12 = il2cpp_runtime_helper_022b2a40(TypeInfo_byte,uVar22);
  if (__this_02 == (System_IO_Compression_BrotliStream_o *)0x0) {
    il2cpp_runtime_helper_022b2c90();
    goto label_04497a56;
  }
  if (__this_00 == (System_IO_MemoryStream_o *)0x0) {
    iVar11 = (*(__this_02->klass->vtable)._32_Read.methodPtr)
                       (__this_02,uVar12,0,(ulong)(uint)bufferSize,(__this_02->klass->vtable)._32_Read.method)
    ;
    if (0 < iVar11) goto label_04497a6f;
  }
  else {
    lVar21 = 0;
    while (uVar10 = (*(__this_02->klass->vtable)._32_Read.methodPtr)
                              (__this_02,uVar12,0,uVar22,(__this_02->klass->vtable)._32_Read.method),
          0 < (int)uVar10) {
      lVar21 = lVar21 + (int)uVar10;
      if (maxSize < lVar21) goto label_04497a7f;
      (*(__this_00->klass->vtable)._35_Write.methodPtr)
                (__this_00,uVar12,0,(ulong)uVar10,(__this_00->klass->vtable)._35_Write.method);
    }
  }
  maxSize = 7;
  lVar21 = 0;
  do {
    pSVar7 = __this_02->klass;
    uVar2._0_1_ = (pSVar7->_2).rank;
    uVar2._1_1_ = (pSVar7->_2).minimumAlignment;
    if ((ulong)uVar2 != 0) {
      pIVar8 = (pSVar7->_1).interfaceOffsets;
      lVar14 = 0;
      do {
        if (*(long *)((long)&pIVar8->interfaceType + lVar14) == TypeInfo_IDisposable) {
          ppIVar18 = &(&(pSVar7->vtable)._0_Equals)[*(int *)((long)&pIVar8->offset + lVar14)].methodPtr;
          goto label_044978dd;
        }
        lVar14 = lVar14 + 0x10;
      } while ((ulong)uVar2 << 4 != lVar14);
    }
    ppIVar18 = (Il2CppMethodPointer *)il2cpp_runtime_helper_02300d20(__this_02,TypeInfo_IDisposable,0);
label_044978dd:
    (**ppIVar18)(__this_02,(MethodInfo *)ppIVar18[1]);
    do {
      if (lVar21 != 0) goto label_04497a5e;
      if (((int)maxSize != 7) && ((int)maxSize != 0)) {
        uVar22 = 0;
        pSVar13 = (System_Byte_array *)0x0;
        if (__this_00 == (System_IO_MemoryStream_o *)0x0) goto label_04497996;
        goto label_0449792f;
      }
      if (__this_00 != (System_IO_MemoryStream_o *)0x0) {
        pSVar13 = (System_Byte_array *)
                  (*(__this_00->klass->vtable)._41_ToArray.methodPtr)
                            (__this_00,(__this_00->klass->vtable)._41_ToArray.method);
        maxSize = 8;
        uVar22 = 0;
        goto label_0449792f;
      }
      while( true ) {
        iVar11 = il2cpp_runtime_helper_022b2c90();
label_04497a6f:
        lVar21 = (long)iVar11;
        if (maxSize < lVar21) {
label_04497a7f:
          lStack_38 = lVar21;
          arg0 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bd8,&lStack_38);
          iStack_40 = maxSize;
          arg1 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bd8,&iStack_40);
          pSVar15 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Decompressed size exceeded maximum allowed ({0} > {1})");
          pSVar15 = System_String__Format_3af78e0(pSVar15,arg0,arg1,(MethodInfo *)0x0);
          uVar12 = il2cpp_runtime_helper_023445d0(&TypeInfo_IOException);
          __this_03 = (System_IO_IOException_o *)il2cpp_runtime_helper_023052d0(uVar12);
          System_IO_IOException___ctor_3be9df0(__this_03,pSVar15,(MethodInfo *)0x0);
          uVar12 = il2cpp_runtime_helper_023445d0(&MethodInfo_Byte_Decompress);
          il2cpp_runtime_helper_022b2b10(__this_03,uVar12);
        }
        auVar23 = il2cpp_runtime_helper_022b2c90();
        iVar11 = auVar23._8_4_;
        if (iVar11 == 1) break;
        if (__this_02 != (System_IO_Compression_BrotliStream_o *)0x0) {
          pSVar7 = __this_02->klass;
          uVar5._0_1_ = (pSVar7->_2).rank;
          uVar5._1_1_ = (pSVar7->_2).minimumAlignment;
          if ((ulong)uVar5 != 0) {
            pIVar8 = (pSVar7->_1).interfaceOffsets;
            lVar21 = 0;
            do {
              if (*(long *)((long)&pIVar8->interfaceType + lVar21) == TypeInfo_IDisposable) {
                ppIVar18 = &(&(pSVar7->vtable)._0_Equals)[*(int *)((long)&pIVar8->offset + lVar21)].methodPtr;
                goto label_04497d1d;
              }
              lVar21 = lVar21 + 0x10;
            } while ((ulong)uVar5 << 4 != lVar21);
          }
          ppIVar18 = (Il2CppMethodPointer *)il2cpp_runtime_helper_02300d20(__this_02,TypeInfo_IDisposable,0);
label_04497d1d:
          (**ppIVar18)(__this_02,(MethodInfo *)ppIVar18[1]);
        }
        maxSize = 0;
        if (iVar11 != 1) {
          if (__this_00 == (System_IO_MemoryStream_o *)0x0) goto label_04497c35;
          pSVar6 = __this_00->klass;
          uVar4._0_1_ = (pSVar6->_2).rank;
          uVar4._1_1_ = (pSVar6->_2).minimumAlignment;
          if ((ulong)uVar4 == 0) goto label_04497c0c;
          pIVar8 = (pSVar6->_1).interfaceOffsets;
          lVar21 = 0;
          goto label_04497bfd;
        }
        puVar19 = (ulong *)__cxa_begin_catch();
        uVar22 = *puVar19;
        __cxa_end_catch();
        pSVar13 = (System_Byte_array *)0x0;
        if (__this_00 != (System_IO_MemoryStream_o *)0x0) {
label_0449792f:
          pSVar6 = __this_00->klass;
          uVar3._0_1_ = (pSVar6->_2).rank;
          uVar3._1_1_ = (pSVar6->_2).minimumAlignment;
          if ((ulong)uVar3 != 0) {
            pIVar8 = (pSVar6->_1).interfaceOffsets;
            lVar21 = 0;
            do {
              if (*(long *)((long)&pIVar8->interfaceType + lVar21) == TypeInfo_IDisposable) {
                ppIVar18 = &(&(pSVar6->vtable)._0_Equals)[*(int *)((long)&pIVar8->offset + lVar21)].methodPtr;
                goto label_0449798d;
              }
              lVar21 = lVar21 + 0x10;
            } while ((ulong)uVar3 << 4 != lVar21);
          }
          ppIVar18 = (Il2CppMethodPointer *)il2cpp_runtime_helper_02300d20(__this_00,TypeInfo_IDisposable,0);
label_0449798d:
          (**ppIVar18)(__this_00,(MethodInfo *)ppIVar18[1]);
        }
label_04497996:
        if (uVar22 == 0) {
          if ((int)maxSize != 0) {
            return pSVar13;
          }
          goto label_044979a8;
        }
label_04497a56:
        il2cpp_runtime_helper_022fefe0(uVar22);
label_04497a5e:
        il2cpp_runtime_helper_022fefe0();
      }
      plVar20 = (long *)__cxa_begin_catch();
      lVar21 = *plVar20;
      __cxa_end_catch();
      maxSize = 0;
    } while (__this_02 == (System_IO_Compression_BrotliStream_o *)0x0);
  } while( true );
  while (lVar21 = lVar21 + 0x10, (ulong)uVar4 << 4 != lVar21) {
label_04497bfd:
    if (*(long *)((long)&pIVar8->interfaceType + lVar21) == TypeInfo_IDisposable) {
      ppIVar18 = &(&(pSVar6->vtable)._0_Equals)[*(int *)((long)&pIVar8->offset + lVar21)].methodPtr;
      goto label_04497c2b;
    }
  }
label_04497c0c:
  ppIVar18 = (Il2CppMethodPointer *)il2cpp_runtime_helper_02300d20(__this_00,TypeInfo_IDisposable,0);
label_04497c2b:
  (**ppIVar18)(__this_00,(MethodInfo *)ppIVar18[1]);
label_04497c35:
  if (iVar11 != 1) {
    _Unwind_Resume(auVar23._0_8_);
  }
  puVar16 = (undefined8 *)__cxa_begin_catch(auVar23._0_8_);
  cVar9 = il2cpp_runtime_helper_0233e000(g_data_057b9b80,*(undefined8 *)*puVar16);
  if (cVar9 == '\0') {
    puVar17 = (undefined8 *)__cxa_allocate_exception(8);
    *puVar17 = *puVar16;
    __cxa_throw(puVar17,&PTR_PTR_05215060,0);
  }
  __cxa_end_catch();
label_044979a8:
  lVar21 = il2cpp_runtime_helper_023445d0(&MethodInfo_Byte_Empty_Byte);
  if (*(long *)(lVar21 + 0x38) == 0) {
    il2cpp_runtime_helper_02300a20(lVar21);
    lVar14 = *(long *)(*(long *)(lVar21 + 0x38) + 0x10);
    bVar1 = *(byte *)(lVar14 + 0x135);
  }
  else {
    lVar14 = *(long *)(*(long *)(lVar21 + 0x38) + 0x10);
    bVar1 = *(byte *)(lVar14 + 0x135);
  }
  if ((bVar1 & 1) == 0) {
    lVar14 = il2cpp_runtime_helper_023009c0();
    iVar11 = *(int *)(lVar14 + 0xe4);
  }
  else {
    iVar11 = *(int *)(lVar14 + 0xe4);
  }
  if (iVar11 == 0) {
    il2cpp_runtime_helper_02337ed0();
    lVar21 = *(long *)(*(long *)(lVar21 + 0x38) + 0x10);
    bVar1 = *(byte *)(lVar21 + 0x135);
  }
  else {
    lVar21 = *(long *)(*(long *)(lVar21 + 0x38) + 0x10);
    bVar1 = *(byte *)(lVar21 + 0x135);
  }
  if ((bVar1 & 1) == 0) {
    lVar21 = il2cpp_runtime_helper_023009c0(lVar21);
  }
  return (System_Byte_array *)**(undefined8 **)(lVar21 + 0xb8);
}


// Utility.Algorithms.BrotliAlgorithm$$.ctor
// il2cpp: void Utility_Algorithms_BrotliAlgorithm___ctor (Utility_Algorithms_BrotliAlgorithm_o* __this, const MethodInfo* method);
// 0x4497dd0

void Utility_Algorithms_BrotliAlgorithm___ctor
               (Utility_Algorithms_BrotliAlgorithm_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


