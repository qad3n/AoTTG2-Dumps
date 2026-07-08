// Type: Utility.CLZF2
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/Utility/CLZF2.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/Utility/Compression/CLZF2.cs  [CHANGED since prior version]
// --------------------------------

// Utility.CLZF2$$Compress
// il2cpp: System_Byte_array* Utility_CLZF2__Compress (System_Byte_array* inputBytes, const MethodInfo* method);
// 0x4158560

System_Byte_array * Utility_CLZF2__Compress(System_Byte_array *inputBytes,MethodInfo *method)

{
  int iVar1;
  int count;
  System_Byte_array *dst;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  System_Byte_array *local_38;
  System_Byte_array *src;
  
  if (DAT_05704a1b == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_byte);
    il2cpp_init_method_metadata(&TypeInfo_CLZF2);
    DAT_05704a1b = '\x01';
  }
  local_38 = (System_Byte_array *)0x0;
  if (inputBytes != (System_Byte_array *)0x0) {
    iVar1 = (int)inputBytes->max_length * 2;
    auVar2 = il2cpp_glue_02274930(TypeInfo_byte,iVar1);
    src = auVar2._0_8_;
    if (*(int *)(TypeInfo_CLZF2 + 0xe4) == 0) {
      local_38 = src;
      il2cpp_init_class();
      auVar2._8_8_ = extraout_RDX;
      auVar2._0_8_ = local_38;
    }
    local_38 = auVar2._0_8_;
    count = Utility_CLZF2__lzf_compress(inputBytes,&local_38,auVar2._8_8_);
    while (count == 0) {
      iVar1 = iVar1 * 2;
      auVar3 = il2cpp_glue_02274930(TypeInfo_byte,iVar1);
      src = auVar3._0_8_;
      if (*(int *)(TypeInfo_CLZF2 + 0xe4) == 0) {
        local_38 = src;
        il2cpp_init_class();
        auVar3._8_8_ = extraout_RDX_00;
        auVar3._0_8_ = local_38;
      }
      local_38 = auVar3._0_8_;
      count = Utility_CLZF2__lzf_compress(inputBytes,&local_38,auVar3._8_8_);
    }
    dst = (System_Byte_array *)il2cpp_glue_02274930(TypeInfo_byte);
    System_Buffer__BlockCopy
              ((System_Array_o *)src,0,(System_Array_o *)dst,0,count,(MethodInfo *)0x0);
    return dst;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Utility.CLZF2$$Decompress
// il2cpp: System_Byte_array* Utility_CLZF2__Decompress (System_Byte_array* inputBytes, const MethodInfo* method);
// 0x4158e70

System_Byte_array * Utility_CLZF2__Decompress(System_Byte_array *inputBytes,MethodInfo *method)

{
  int iVar1;
  int count;
  System_Byte_array *dst;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  System_Byte_array *pSStack_38;
  System_Byte_array *src;
  
  if (DAT_05704a1c == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_byte);
    il2cpp_init_method_metadata(&TypeInfo_CLZF2);
    DAT_05704a1c = '\x01';
  }
  pSStack_38 = (System_Byte_array *)0x0;
  if (inputBytes != (System_Byte_array *)0x0) {
    iVar1 = (int)inputBytes->max_length * 2;
    auVar2 = il2cpp_glue_02274930(TypeInfo_byte,iVar1);
    src = auVar2._0_8_;
    if (*(int *)(TypeInfo_CLZF2 + 0xe4) == 0) {
      pSStack_38 = src;
      il2cpp_init_class();
      auVar2._8_8_ = extraout_RDX;
      auVar2._0_8_ = pSStack_38;
    }
    pSStack_38 = auVar2._0_8_;
    count = Utility_CLZF2__lzf_decompress(inputBytes,&pSStack_38,auVar2._8_8_);
    while (count == 0) {
      iVar1 = iVar1 * 2;
      auVar3 = il2cpp_glue_02274930(TypeInfo_byte,iVar1);
      src = auVar3._0_8_;
      if (*(int *)(TypeInfo_CLZF2 + 0xe4) == 0) {
        pSStack_38 = src;
        il2cpp_init_class();
        auVar3._8_8_ = extraout_RDX_00;
        auVar3._0_8_ = pSStack_38;
      }
      pSStack_38 = auVar3._0_8_;
      count = Utility_CLZF2__lzf_decompress(inputBytes,&pSStack_38,auVar3._8_8_);
    }
    dst = (System_Byte_array *)il2cpp_glue_02274930(TypeInfo_byte);
    System_Buffer__BlockCopy
              ((System_Array_o *)src,0,(System_Array_o *)dst,0,count,(MethodInfo *)0x0);
    return dst;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Utility.CLZF2$$lzf_compress
// il2cpp: int32_t Utility_CLZF2__lzf_compress (System_Byte_array* input, System_Byte_array** output, const MethodInfo* method);
// 0x4158680

/* WARNING: Type propagation algorithm not settling */

int32_t Utility_CLZF2__lzf_compress
                  (System_Byte_array *input,System_Byte_array **output,MethodInfo *method)

{
  byte bVar1;
  uint8_t uVar2;
  uint8_t uVar3;
  uint8_t uVar4;
  il2cpp_array_size_t iVar5;
  il2cpp_array_size_t iVar6;
  ulong uVar7;
  System_Byte_array *pSVar8;
  char cVar9;
  uint3 uVar10;
  long lVar11;
  undefined8 uVar12;
  undefined4 uVar13;
  ulong uVar14;
  long lVar15;
  ulong uVar16;
  undefined4 *puVar17;
  uint uVar18;
  char cVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  int iVar24;
  long lVar25;
  long lVar26;
  int iVar27;
  int iVar28;
  uint uVar29;
  
  if (DAT_05704a1d == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Int32_lzf_compress);
    il2cpp_init_method_metadata(&TypeInfo_CLZF2);
    DAT_05704a1d = '\x01';
  }
  if ((input == (System_Byte_array *)0x0) || (*output == (System_Byte_array *)0x0)) {
LAB_04158e67:
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  iVar5 = input->max_length;
  iVar6 = (*output)->max_length;
  if (*(int *)(TypeInfo_CLZF2 + 0xe4) == 0) {
    il2cpp_init_class();
  }
  System_Array__Clear(*(System_Array_o **)(*(long *)(TypeInfo_CLZF2 + 0xb8) + 0x18),0,
                      *(int32_t *)(*(long *)(TypeInfo_CLZF2 + 0xb8) + 4),(MethodInfo *)0x0);
  iVar28 = (int)input->max_length;
  if ((iVar28 != 1) && (iVar28 != 0)) {
    uVar21 = (uint)CONCAT11(input->m_Items[0],input->m_Items[1]);
    iVar28 = (int)iVar5;
    uVar14 = (ulong)iVar28;
    lVar15 = (long)(int)iVar6;
    uVar16 = 0;
    uVar22 = 0;
LAB_0415877b:
    do {
      uVar18 = (uint)uVar16;
      uVar20 = 0;
      uVar23 = uVar22;
      do {
        uVar13 = uVar20;
        uVar12 = ZEXT48(uVar23);
        if ((long)uVar12 < (long)((iVar5 << 0x20) + -0x200000000) >> 0x20) {
          uVar22 = uVar23 + 2;
          if ((uint)input->max_length <= uVar22) goto LAB_04158e62;
          bVar1 = input->m_Items[(int)uVar22];
          uVar21 = uVar21 << 8 | (uint)bVar1;
          if (*(int *)(TypeInfo_CLZF2 + 0xe4) == 0) {
            il2cpp_init_class();
          }
          lVar25 = TypeInfo_CLZF2;
          puVar17 = *(undefined4 **)(TypeInfo_CLZF2 + 0xb8);
          lVar26 = *(long *)(puVar17 + 6);
          if (lVar26 == 0) goto LAB_04158e67;
          uVar20 = (uVar21 << 5 ^ uVar21) >> (0x18 - (bVar1 * '\x05' + (char)*puVar17) & 0x1f) &
                   puVar17[1] - 1;
          if (*(uint *)(lVar26 + 0x18) <= uVar20) goto LAB_04158e62;
          uVar7 = *(ulong *)(lVar26 + 0x20 + (ulong)uVar20 * 8);
          *(undefined8 *)(lVar26 + 0x20 + (ulong)uVar20 * 8) = uVar12;
          lVar26 = ~uVar7 + uVar12;
          if (((lVar26 < (long)(ulong)(uint)puVar17[3]) &&
              ((long)(ulong)(uVar23 + 4) < (long)uVar14)) && (0 < (long)uVar7)) {
            uVar20 = (uint)input->max_length;
            uVar29 = (uint)uVar7;
            if ((uVar20 <= uVar29) || (uVar20 <= uVar23)) goto LAB_04158e62;
            if (input->m_Items[uVar7] == input->m_Items[uVar12]) {
              if ((uVar20 <= uVar29 + 1) || (uVar20 <= uVar23 + 1)) goto LAB_04158e62;
              if (input->m_Items[uVar7 + 1] == input->m_Items[(int)(uVar23 + 1)]) {
                if ((uVar20 <= uVar29 + 2) || (uVar20 <= uVar22)) goto LAB_04158e62;
                if (input->m_Items[uVar7 + 2] != input->m_Items[(int)uVar22]) {
                  iVar27 = *(int *)(lVar25 + 0xe4);
                  goto joined_r0x0415893a;
                }
                uVar21 = (iVar28 - uVar23) - 2;
                if (*(int *)(lVar25 + 0xe4) == 0) {
                  il2cpp_init_class();
                  puVar17 = *(undefined4 **)(TypeInfo_CLZF2 + 0xb8);
                  lVar25 = TypeInfo_CLZF2;
                }
                if (((uint)puVar17[4] < uVar21) &&
                   (uVar21 = puVar17[4], *(int *)(lVar25 + 0xe4) == 0)) {
                  il2cpp_init_class();
                  uVar21 = *(uint *)(*(long *)(TypeInfo_CLZF2 + 0xb8) + 0x10);
                }
                if (lVar15 <= (long)((long)(int)uVar13 + uVar16 + 4)) {
                  return 0;
                }
                lVar25 = 0x23;
                iVar27 = 0;
                cVar9 = ' ';
                goto LAB_04158af0;
              }
            }
          }
          iVar27 = *(int *)(lVar25 + 0xe4);
        }
        else {
          if (uVar14 == uVar12) {
            if (uVar13 == 0) {
              return uVar18;
            }
            if (lVar15 <= (long)((long)(int)uVar13 + uVar16 + 1)) {
              return 0;
            }
            pSVar8 = *output;
            if (pSVar8 == (System_Byte_array *)0x0) goto LAB_04158e67;
            if ((uint)pSVar8->max_length <= uVar18) goto LAB_04158e62;
            pSVar8->m_Items[uVar16] = (char)uVar13 + 0xff;
            iVar28 = -uVar13;
            lVar15 = uVar16 + 0x21;
            goto LAB_04158e10;
          }
          iVar27 = *(int *)(TypeInfo_CLZF2 + 0xe4);
          lVar25 = TypeInfo_CLZF2;
        }
joined_r0x0415893a:
        if (iVar27 == 0) {
          il2cpp_init_class();
          lVar25 = TypeInfo_CLZF2;
        }
        uVar22 = uVar23 + 1;
        uVar29 = *(uint *)(*(long *)(lVar25 + 0xb8) + 8);
        uVar20 = uVar13 + 1;
        uVar23 = uVar22;
      } while ((long)(int)(uVar13 + 1) != (ulong)uVar29);
      if (*(int *)(lVar25 + 0xe4) == 0) {
        il2cpp_init_class();
        uVar29 = *(uint *)(*(long *)(TypeInfo_CLZF2 + 0xb8) + 8);
        lVar25 = TypeInfo_CLZF2;
      }
      if (lVar15 <= (long)(ulong)(uVar18 + uVar29 + 1)) {
        return 0;
      }
      pSVar8 = *output;
      if (*(int *)(lVar25 + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if (pSVar8 == (System_Byte_array *)0x0) goto LAB_04158e67;
      if ((uint)pSVar8->max_length <= uVar18) break;
      pSVar8->m_Items[uVar16] = *(char *)(*(long *)(TypeInfo_CLZF2 + 0xb8) + 8) + 0xff;
      uVar18 = ~uVar13;
      do {
        if ((uint)input->max_length <= (uint)((long)(int)uVar18 + (ulong)uVar22)) goto LAB_04158e62;
        pSVar8 = *output;
        if (pSVar8 == (System_Byte_array *)0x0) goto LAB_04158e67;
        uVar7 = uVar16 + 1;
        if ((uint)pSVar8->max_length <= uVar7) goto LAB_04158e62;
        pSVar8->m_Items[uVar16 + 1] = input->m_Items[(long)(int)uVar18 + (ulong)uVar22];
        uVar18 = uVar18 + 1;
        uVar16 = uVar7;
      } while (uVar18 != 0);
      uVar16 = (ulong)((int)uVar7 + 1);
    } while( true );
  }
LAB_04158e62:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
  while( true ) {
    uVar22 = (uint)input->max_length;
    if ((uVar22 <= uVar29 + 3 + iVar24) || (uVar20 = iVar24 + uVar23 + 3, uVar22 <= uVar20))
    goto LAB_04158e62;
    lVar11 = lVar25 + uVar7;
    lVar25 = lVar25 + 1;
    iVar27 = iVar24 + 1;
    cVar9 = cVar19 + ' ';
    if (input->m_Items[lVar11 + -0x20] != input->m_Items[(int)uVar20]) break;
LAB_04158af0:
    cVar19 = cVar9;
    iVar24 = iVar27;
    if ((ulong)uVar21 <= lVar25 - 0x20U) break;
  }
  if (uVar13 == 0) {
    pSVar8 = *output;
  }
  else {
    pSVar8 = *output;
    if (pSVar8 == (System_Byte_array *)0x0) goto LAB_04158e67;
    if ((uint)pSVar8->max_length <= uVar18) goto LAB_04158e62;
    pSVar8->m_Items[uVar16] = (char)uVar13 + 0xff;
    iVar27 = -uVar13;
    lVar25 = uVar16 + 0x21;
    do {
      if ((uint)input->max_length <= (uint)((long)iVar27 + uVar12)) goto LAB_04158e62;
      pSVar8 = *output;
      if (pSVar8 == (System_Byte_array *)0x0) goto LAB_04158e67;
      if ((ulong)(uint)pSVar8->max_length <= lVar25 - 0x20U) goto LAB_04158e62;
      pSVar8->m_Items[lVar25 + -0x20] = input->m_Items[(long)iVar27 + uVar12];
      lVar25 = lVar25 + 1;
      iVar27 = iVar27 + 1;
    } while (iVar27 != 0);
    uVar18 = (int)lVar25 - 0x20;
    pSVar8 = *output;
  }
  if (pSVar8 == (System_Byte_array *)0x0) goto LAB_04158e67;
  uVar20 = uVar18 + 1;
  uVar21 = (uint)pSVar8->max_length;
  cVar9 = (char)((ulong)lVar26 >> 8);
  if (iVar24 + 1U < 7) {
    if (uVar21 <= uVar18) goto LAB_04158e62;
    pSVar8->m_Items[uVar18] = cVar9 + cVar19;
    pSVar8 = *output;
  }
  else {
    if (uVar21 <= uVar18) goto LAB_04158e62;
    pSVar8->m_Items[uVar18] = cVar9 + 0xe0;
    pSVar8 = *output;
    if (pSVar8 == (System_Byte_array *)0x0) goto LAB_04158e67;
    if ((uint)pSVar8->max_length <= uVar20) goto LAB_04158e62;
    pSVar8->m_Items[uVar20] = (char)iVar24 + 0xfa;
    pSVar8 = *output;
    uVar20 = uVar18 + 2;
  }
  if (pSVar8 == (System_Byte_array *)0x0) goto LAB_04158e67;
  if ((uint)pSVar8->max_length <= uVar20) goto LAB_04158e62;
  pSVar8->m_Items[uVar20] = (uint8_t)lVar26;
  uVar18 = iVar24 + uVar23 + 1;
  uVar21 = (uint)input->max_length;
  if (((uVar21 <= uVar18) || (uVar29 = iVar24 + uVar23 + 2, uVar21 <= uVar29)) ||
     (uVar22 = iVar24 + uVar23 + 3, uVar21 <= uVar22)) goto LAB_04158e62;
  uVar2 = input->m_Items[uVar18];
  uVar3 = input->m_Items[(int)uVar29];
  uVar4 = input->m_Items[(int)uVar22];
  if (*(int *)(TypeInfo_CLZF2 + 0xe4) == 0) {
    il2cpp_init_class();
  }
  puVar17 = *(undefined4 **)(TypeInfo_CLZF2 + 0xb8);
  lVar26 = *(long *)(puVar17 + 6);
  if (lVar26 == 0) goto LAB_04158e67;
  uVar10 = CONCAT21(CONCAT11(uVar2,uVar3),uVar4);
  iVar27 = puVar17[1];
  cVar9 = '\x18' - (char)*puVar17;
  uVar21 = ((uint)uVar10 << 5 ^ (uint)uVar10) >> (cVar9 + uVar4 * -5 & 0x1f) & iVar27 - 1U;
  if (*(uint *)(lVar26 + 0x18) <= uVar21) goto LAB_04158e62;
  *(ulong *)(lVar26 + 0x20 + (long)(int)uVar21 * 8) = (ulong)uVar18;
  uVar18 = iVar24 + uVar23 + 4;
  if ((uint)input->max_length <= uVar18) goto LAB_04158e62;
  uVar21 = CONCAT31(uVar10,input->m_Items[(int)uVar18]);
  uVar18 = (uVar21 << 5 ^ uVar21) >> (cVar9 + input->m_Items[(int)uVar18] * -5 & 0x1f) & iVar27 - 1U
  ;
  if (*(uint *)(lVar26 + 0x18) <= uVar18) goto LAB_04158e62;
  *(ulong *)(lVar26 + 0x20 + (long)(int)uVar18 * 8) = (ulong)uVar29;
  uVar16 = (ulong)(uVar20 + 1);
  goto LAB_0415877b;
LAB_04158e10:
  if ((uint)input->max_length <= (uint)((long)iVar28 + uVar14)) goto LAB_04158e62;
  pSVar8 = *output;
  if (pSVar8 == (System_Byte_array *)0x0) goto LAB_04158e67;
  if ((ulong)(uint)pSVar8->max_length <= lVar15 - 0x20U) goto LAB_04158e62;
  pSVar8->m_Items[lVar15 + -0x20] = input->m_Items[(long)iVar28 + uVar14];
  lVar15 = lVar15 + 1;
  iVar28 = iVar28 + 1;
  if (iVar28 == 0) {
    return (int)lVar15 - 0x20;
  }
  goto LAB_04158e10;
}


// Utility.CLZF2$$lzf_decompress
// il2cpp: int32_t Utility_CLZF2__lzf_decompress (System_Byte_array* input, System_Byte_array** output, const MethodInfo* method);
// 0x4158f90

int32_t Utility_CLZF2__lzf_decompress
                  (System_Byte_array *input,System_Byte_array **output,MethodInfo *method)

{
  byte bVar1;
  System_Byte_array *pSVar2;
  int iVar3;
  il2cpp_array_size_t iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  uint uVar14;
  ulong uVar15;
  
  if ((input == (System_Byte_array *)0x0) || (*output == (System_Byte_array *)0x0)) {
LAB_041591a9:
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  iVar4 = input->max_length;
  iVar3 = (int)iVar4;
  if (iVar3 != 0) {
    lVar13 = (long)(int)(*output)->max_length;
    uVar15 = 0;
    uVar11 = 1;
    uVar10 = 0;
    do {
      bVar1 = input->m_Items[uVar15];
      uVar5 = (uint)bVar1;
      uVar6 = (uint)iVar4;
      uVar14 = (uint)uVar11;
      uVar8 = (uint)uVar10;
      if (bVar1 < 0x20) {
        if (lVar13 < (long)(ulong)(bVar1 + uVar8 + 1)) {
          return 0;
        }
        if (uVar6 <= uVar14) break;
        while( true ) {
          pSVar2 = *output;
          if (pSVar2 == (System_Byte_array *)0x0) goto LAB_041591a9;
          if ((uint)pSVar2->max_length <= uVar10) goto LAB_041591a4;
          pSVar2->m_Items[uVar10] = input->m_Items[uVar11];
          if (uVar5 == 0) break;
          uVar10 = uVar10 + 1;
          uVar11 = uVar11 + 1;
          uVar5 = uVar5 - 1;
          if ((uint)input->max_length <= (uint)uVar11) goto LAB_041591a4;
        }
        uVar14 = (uint)uVar11;
        iVar9 = (int)uVar10;
      }
      else {
        uVar5 = (uint)(bVar1 >> 5);
        if (uVar5 == 7) {
          if (uVar6 <= uVar14) break;
          uVar14 = (int)uVar15 + 2;
          uVar5 = input->m_Items[uVar11] + 7;
        }
        if (uVar6 <= uVar14) break;
        if (lVar13 < (long)(ulong)(uVar8 + uVar5 + 2)) {
          return 0;
        }
        uVar6 = ((~((uint)bVar1 << 8) | 0xffffe0ff) + uVar8) - (uint)input->m_Items[uVar14];
        if ((int)uVar6 < 0) {
          return 0;
        }
        pSVar2 = *output;
        if (pSVar2 == (System_Byte_array *)0x0) goto LAB_041591a9;
        uVar7 = (uint)pSVar2->max_length;
        if ((uVar7 <= uVar6) || (uVar7 <= uVar8)) break;
        pSVar2->m_Items[uVar10] = pSVar2->m_Items[(int)uVar6];
        pSVar2 = *output;
        if (pSVar2 == (System_Byte_array *)0x0) goto LAB_041591a9;
        uVar7 = (uint)pSVar2->max_length;
        if ((uVar7 <= uVar6 + 1) || (uVar7 <= uVar8 + 1)) break;
        uVar7 = uVar6 + 2;
        pSVar2->m_Items[uVar8 + 1] = pSVar2->m_Items[(int)(uVar6 + 1)];
        uVar15 = (ulong)(uVar8 + 2);
        do {
          uVar10 = uVar15;
          pSVar2 = *output;
          if (pSVar2 == (System_Byte_array *)0x0) goto LAB_041591a9;
          if (((uint)pSVar2->max_length <= uVar7) || ((pSVar2->max_length & 0xffffffff) <= uVar10))
          goto LAB_041591a4;
          lVar12 = (long)(int)uVar7;
          uVar7 = uVar7 + 1;
          pSVar2->m_Items[uVar10] = pSVar2->m_Items[lVar12];
          uVar5 = uVar5 - 1;
          uVar15 = uVar10 + 1;
        } while (uVar5 != 0);
        iVar9 = (int)uVar10;
      }
      uVar15 = (ulong)(uVar14 + 1);
      if ((long)iVar3 <= (long)uVar15) {
        return iVar9 + 1U;
      }
      uVar10 = (ulong)(iVar9 + 1U);
      iVar4 = input->max_length;
      uVar11 = (ulong)(uVar14 + 2);
    } while (uVar14 + 1 < (uint)iVar4);
  }
LAB_041591a4:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Utility.CLZF2$$.cctor
// il2cpp: void Utility_CLZF2___cctor (const MethodInfo* method);
// 0x41591b0

void Utility_CLZF2___cctor(MethodInfo *method)

{
  undefined4 *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  if (DAT_05704a1e == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CLZF2);
    il2cpp_init_method_metadata(&TypeInfo_long);
    DAT_05704a1e = '\x01';
  }
  puVar1 = *(undefined4 **)(TypeInfo_CLZF2 + 0xb8);
  *puVar1 = 0xe;
  puVar1[1] = 0x4000;
  puVar1[2] = 0x20;
  puVar1[3] = 0x2000;
  puVar1[4] = 0x108;
  uVar3 = il2cpp_glue_02274930(TypeInfo_long,0x4000);
  lVar2 = *(long *)(TypeInfo_CLZF2 + 0xb8);
  *(undefined8 *)(lVar2 + 0x18) = uVar3;
  il2cpp_runtime_glue(lVar2 + 0x18,uVar3);
  return;
}


