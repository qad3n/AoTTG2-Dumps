// Type: Utility.CLZF2
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/Utility/CLZF2.cs
// Prior real C# source (older reference): Assets/Scripts/Utility/Compression/CLZF2.cs
// --------------------------------

// Utility.CLZF2$$Compress
// il2cpp: System_Byte_array* Utility_CLZF2__Compress (System_Byte_array* inputBytes, const MethodInfo* method);
// 0x5de7a80
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5de7b42: mov r12, rsp
// asm:   0x5de7b45: jmp 0x5de7b5f

System_Byte_array * Utility_CLZF2__Compress(System_Byte_array *inputBytes,MethodInfo *method)

{
  uint32_t length;
  uint32_t length_00;
  System_Byte_array *src;
  System_Byte_array *dst;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *pMVar1;
  MethodInfo *extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
  System_Byte_array *local_38;
  
  if (Il2CppMethodInitialized_075482b0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_byte_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_CLZF2);
    Il2CppMethodInitialized_075482b0 = '\x01';
  }
  if (inputBytes == (System_Byte_array *)0x0) {
    ThrowNullReferenceException();
  }
  length = (int)inputBytes->max_length * 2;
  src = (System_Byte_array *)SZArrayNew(TypeInfo_byte_array,length);
  pMVar1 = extraout_RDX;
  local_38 = src;
  if ((TypeInfo_Utility_CLZF2->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_CLZF2);
    pMVar1 = extraout_RDX_00;
  }
  length_00 = Utility_CLZF2__lzf_compress(inputBytes,&local_38,pMVar1);
  while (length_00 == 0) {
    length = length * 2;
    src = (System_Byte_array *)SZArrayNew(TypeInfo_byte_array,length);
    pMVar1 = extraout_RDX_01;
    local_38 = src;
    if ((TypeInfo_Utility_CLZF2->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_CLZF2);
      pMVar1 = extraout_RDX_02;
    }
    length_00 = Utility_CLZF2__lzf_compress(inputBytes,&local_38,pMVar1);
  }
  dst = (System_Byte_array *)SZArrayNew(TypeInfo_byte_array,length_00);
  System_Buffer__BlockCopy((System_Array_o *)src,0,(System_Array_o *)dst,0,length_00,(MethodInfo *)0x0);
  return dst;
}


// Utility.CLZF2$$Decompress
// il2cpp: System_Byte_array* Utility_CLZF2__Decompress (System_Byte_array* inputBytes, const MethodInfo* method);
// 0x5de8370
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5de8432: mov r12, rsp
// asm:   0x5de8435: jmp 0x5de844f

System_Byte_array * Utility_CLZF2__Decompress(System_Byte_array *inputBytes,MethodInfo *method)

{
  uint32_t length;
  uint32_t length_00;
  System_Byte_array *src;
  System_Byte_array *dst;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *pMVar1;
  MethodInfo *extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
  System_Byte_array *pSStack_38;
  
  if (Il2CppMethodInitialized_075482b1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_byte_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_CLZF2);
    Il2CppMethodInitialized_075482b1 = '\x01';
  }
  if (inputBytes == (System_Byte_array *)0x0) {
    ThrowNullReferenceException();
  }
  length = (int)inputBytes->max_length * 2;
  src = (System_Byte_array *)SZArrayNew(TypeInfo_byte_array,length);
  pMVar1 = extraout_RDX;
  pSStack_38 = src;
  if ((TypeInfo_Utility_CLZF2->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_CLZF2);
    pMVar1 = extraout_RDX_00;
  }
  length_00 = Utility_CLZF2__lzf_decompress(inputBytes,&pSStack_38,pMVar1);
  while (length_00 == 0) {
    length = length * 2;
    src = (System_Byte_array *)SZArrayNew(TypeInfo_byte_array,length);
    pMVar1 = extraout_RDX_01;
    pSStack_38 = src;
    if ((TypeInfo_Utility_CLZF2->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_CLZF2);
      pMVar1 = extraout_RDX_02;
    }
    length_00 = Utility_CLZF2__lzf_decompress(inputBytes,&pSStack_38,pMVar1);
  }
  dst = (System_Byte_array *)SZArrayNew(TypeInfo_byte_array,length_00);
  System_Buffer__BlockCopy((System_Array_o *)src,0,(System_Array_o *)dst,0,length_00,(MethodInfo *)0x0);
  return dst;
}


// Utility.CLZF2$$lzf_compress
// il2cpp: int32_t Utility_CLZF2__lzf_compress (System_Byte_array* input, System_Byte_array** output, const MethodInfo* method);
// 0x5de7ba0
// asm: 8 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5de7e52: jmp 0x5de7ca0
// asm:   0x5de7e80: jmp 0x5de7ca0
// asm:   0x5de8024: lea r11d, [rbx - 1]
// asm:   0x5de8028: nop dword ptr [rax + rax]
// asm:   0x5de8063: add ecx, -2
// asm:   0x5de8066: mov r11d, ecx
// asm:   0x5de8343: jmp 0x5de834a
// asm:   0x5de8345: mov rax, qword ptr [rsp + 8]

int32_t Utility_CLZF2__lzf_compress(System_Byte_array *input,System_Byte_array **output,MethodInfo *method)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  il2cpp_array_size_t iVar4;
  il2cpp_array_size_t iVar5;
  System_Int64_array *pSVar6;
  ulong uVar7;
  long lVar8;
  Utility_CLZF2_StaticFields *pUVar9;
  System_Byte_array *pSVar10;
  char cVar11;
  uint8_t uVar12;
  int iVar13;
  ulong uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  int iVar19;
  long lVar20;
  uint uVar21;
  uint32_t uVar22;
  ulong uVar23;
  ulong uVar24;
  Il2CppClass *klass;
  uint uVar25;
  uint uVar26;
  int iVar27;
  long lVar28;
  uint uVar29;
  ulong local_70;
  
  if (Il2CppMethodInitialized_075482b2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Utility_CLZF2_lzf_compress);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_CLZF2);
    Il2CppMethodInitialized_075482b2 = '\x01';
  }
  if ((input == (System_Byte_array *)0x0) || (*output == (System_Byte_array *)0x0)) {
label_05de8362:
    ThrowNullReferenceException();
  }
  iVar4 = input->max_length;
  iVar5 = (*output)->max_length;
  if ((TypeInfo_Utility_CLZF2->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_CLZF2);
  }
  System_Array__Clear((System_Array_o *)TypeInfo_Utility_CLZF2->static_fields->HashTable,0,
                      TypeInfo_Utility_CLZF2->static_fields->HSIZE,(MethodInfo *)0x0);
  iVar19 = (int)input->max_length;
  if ((iVar19 != 1) && (iVar19 != 0)) {
    uVar25 = (uint)(ushort)(*(ushort *)input->m_Items << 8 | *(ushort *)input->m_Items >> 8);
    iVar19 = (int)iVar4;
    uVar7 = (ulong)iVar19;
    lVar8 = (long)(int)iVar5;
    local_70 = 0;
    uVar24 = 0;
label_05de7c8a:
    while( true ) {
      uVar16 = 0;
      do {
        uVar17 = uVar16;
        uVar16 = (uint)uVar24;
        if ((long)uVar24 < (long)(iVar19 + -2)) {
          uVar21 = uVar16 + 2;
          if ((uint)input->max_length <= uVar21) goto label_05de835d;
          bVar1 = input->m_Items[(int)uVar21];
          uVar25 = uVar25 << 8 | (uint)bVar1;
          if ((TypeInfo_Utility_CLZF2->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_CLZF2);
          }
          klass = (Il2CppClass *)TypeInfo_Utility_CLZF2;
          pUVar9 = TypeInfo_Utility_CLZF2->static_fields;
          pSVar6 = pUVar9->HashTable;
          if (pSVar6 == (System_Int64_array *)0x0) goto label_05de8362;
          uVar15 = (uVar25 << 5 ^ uVar25) >> ((bVar1 * '\x1b' - (char)pUVar9->HLOG) + 0x18 & 0x1f) &
                   pUVar9->HSIZE - 1;
          if ((uint)pSVar6->max_length <= uVar15) goto label_05de835d;
          uVar23 = pSVar6->m_Items[uVar15];
          pSVar6->m_Items[uVar15] = uVar24;
          lVar28 = ~uVar23 + uVar24;
          if (((lVar28 < (long)(ulong)pUVar9->MAX_OFF) && ((long)(ulong)(uVar16 + 4) < (long)uVar7)) &&
             (0 < (long)uVar23)) {
            uVar15 = (uint)input->max_length;
            uVar18 = (uint)uVar23;
            if ((uVar15 <= uVar18) || (uVar15 <= uVar16)) goto label_05de835d;
            if (input->m_Items[uVar23] == input->m_Items[uVar24]) {
              if ((uVar15 <= uVar18 + 1) || (uVar29 = uVar16 + 1, uVar15 <= uVar29)) goto label_05de835d;
              if (input->m_Items[uVar23 + 1] == input->m_Items[(int)uVar29]) {
                if ((uVar15 <= uVar18 + 2) || (uVar15 <= uVar21)) goto label_05de835d;
                if (input->m_Items[uVar23 + 2] == input->m_Items[(int)uVar21]) {
                  uVar22 = (iVar19 - uVar16) - 2;
                  if ((((Utility_CLZF2_c *)klass)->_2).cctor_finished_or_no_cctor == 0) {
                    il2cpp_codegen_runtime_class_init(klass);
                    pUVar9 = TypeInfo_Utility_CLZF2->static_fields;
                    klass = (Il2CppClass *)TypeInfo_Utility_CLZF2;
                  }
                  if ((pUVar9->MAX_REF < uVar22) &&
                     (uVar22 = pUVar9->MAX_REF, (klass->_2).cctor_finished_or_no_cctor == 0)) {
                    il2cpp_codegen_runtime_class_init(klass);
                    uVar22 = TypeInfo_Utility_CLZF2->static_fields->MAX_REF;
                  }
                  if (lVar8 <= (long)((long)(int)uVar17 + local_70 + 4)) {
                    return 0;
                  }
                  uVar14 = 3;
                  if (uVar22 < 4) {
                    uVar22 = 3;
                  }
                  goto label_05de8030;
                }
              }
            }
          }
          uVar22 = (((Utility_CLZF2_c *)klass)->_2).cctor_finished_or_no_cctor;
        }
        else {
          if (uVar7 == uVar24) {
            if (uVar17 == 0) {
              return (uint)local_70;
            }
            if (lVar8 <= (long)((long)(int)uVar17 + local_70 + 1)) {
              return 0;
            }
            pSVar10 = *output;
            if (pSVar10 == (System_Byte_array *)0x0) goto label_05de8362;
            if ((uint)pSVar10->max_length <= (uint)local_70) goto label_05de835d;
            pSVar10->m_Items[local_70] = (char)uVar17 - 1;
            iVar19 = -uVar17;
            uVar24 = local_70;
            goto label_05de8310;
          }
          uVar22 = (TypeInfo_Utility_CLZF2->_2).cctor_finished_or_no_cctor;
          klass = (Il2CppClass *)TypeInfo_Utility_CLZF2;
        }
        if (uVar22 == 0) {
          il2cpp_codegen_runtime_class_init(klass);
          klass = (Il2CppClass *)TypeInfo_Utility_CLZF2;
        }
        uVar24 = (ulong)(uVar16 + 1);
        uVar21 = *(uint *)((long)klass->static_fields + 8);
        uVar16 = uVar17 + 1;
      } while ((long)(int)(uVar17 + 1) != (ulong)uVar21);
      if ((klass->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init(klass);
        uVar21 = TypeInfo_Utility_CLZF2->static_fields->MAX_LIT;
        klass = (Il2CppClass *)TypeInfo_Utility_CLZF2;
      }
      if (lVar8 <= (long)(ulong)(uVar21 + (uint)local_70 + 1)) {
        return 0;
      }
      pSVar10 = *output;
      if ((klass->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init(klass);
      }
      if (pSVar10 == (System_Byte_array *)0x0) goto label_05de8362;
      if ((uint)pSVar10->max_length <= (uint)local_70) break;
      pSVar10->m_Items[local_70] = (char)TypeInfo_Utility_CLZF2->static_fields->MAX_LIT - 1;
      uVar16 = ~uVar17;
      uVar23 = local_70;
      do {
        if ((uint)input->max_length <= (uint)((long)(int)uVar16 + uVar24)) goto label_05de835d;
        pSVar10 = *output;
        if (pSVar10 == (System_Byte_array *)0x0) goto label_05de8362;
        if ((ulong)(uint)pSVar10->max_length <= uVar23 + 1) goto label_05de835d;
        pSVar10->m_Items[uVar23 + 1] = input->m_Items[(long)(int)uVar16 + uVar24];
        uVar16 = uVar16 + 1;
        uVar23 = uVar23 + 1;
      } while (uVar16 != 0);
      local_70 = (ulong)((uint)local_70 + uVar17 + 2);
    }
  }
label_05de835d:
  ThrowIndexOutOfRangeException();
label_05de8310:
  if ((uint)input->max_length <= (uint)((long)iVar19 + uVar7)) goto label_05de835d;
  pSVar10 = *output;
  if (pSVar10 == (System_Byte_array *)0x0) goto label_05de8362;
  if ((ulong)(uint)pSVar10->max_length <= uVar24 + 1) goto label_05de835d;
  pSVar10->m_Items[uVar24 + 1] = input->m_Items[(long)iVar19 + uVar7];
  iVar19 = iVar19 + 1;
  uVar24 = uVar24 + 1;
  if (iVar19 == 0) {
    return uVar17 + (uint)local_70 + 1;
  }
  goto label_05de8310;
  while( true ) {
    lVar20 = uVar14 + uVar23;
    uVar25 = (uint)input->max_length;
    if ((uVar25 <= (uint)lVar20) || (uVar25 <= uVar21 + uVar16)) goto label_05de835d;
    uVar14 = (ulong)(uVar21 + 1);
    uVar25 = uVar21;
    if (input->m_Items[lVar20] != input->m_Items[(int)(uVar21 + uVar16)]) break;
label_05de8030:
    uVar21 = (uint)uVar14;
    uVar25 = uVar22;
    if (uVar22 == uVar21) break;
  }
  iVar27 = uVar25 - 1;
  uVar23 = local_70;
  if (uVar17 != 0) {
    pSVar10 = *output;
    if (pSVar10 == (System_Byte_array *)0x0) goto label_05de8362;
    if ((uint)pSVar10->max_length <= (uint)local_70) goto label_05de835d;
    pSVar10->m_Items[local_70] = (char)uVar17 - 1;
    iVar13 = -uVar17;
    uVar23 = (ulong)((uint)local_70 + uVar17 + 1);
    do {
      if ((uint)input->max_length <= (uint)((long)iVar13 + uVar24)) goto label_05de835d;
      pSVar10 = *output;
      if (pSVar10 == (System_Byte_array *)0x0) goto label_05de8362;
      if ((ulong)(uint)pSVar10->max_length <= local_70 + 1) goto label_05de835d;
      pSVar10->m_Items[local_70 + 1] = input->m_Items[(long)iVar13 + uVar24];
      iVar13 = iVar13 + 1;
      local_70 = local_70 + 1;
    } while (iVar13 != 0);
  }
  uVar17 = (uint)uVar23;
  uVar21 = uVar17 + 1;
  pSVar10 = *output;
  cVar11 = (char)((ulong)lVar28 >> 8);
  if (uVar25 - 2 < 7) {
    if (pSVar10 == (System_Byte_array *)0x0) goto label_05de8362;
    if ((uint)pSVar10->max_length <= uVar17) goto label_05de835d;
    uVar12 = cVar11 + (char)(uVar25 - 2) * ' ';
    uVar17 = uVar21;
  }
  else {
    if (pSVar10 == (System_Byte_array *)0x0) goto label_05de8362;
    if ((uint)pSVar10->max_length <= uVar17) goto label_05de835d;
    pSVar10->m_Items[uVar23] = cVar11 - 0x20;
    pSVar10 = *output;
    if (pSVar10 == (System_Byte_array *)0x0) goto label_05de8362;
    if ((uint)pSVar10->max_length <= uVar21) goto label_05de835d;
    uVar17 = uVar17 + 2;
    uVar12 = (char)uVar25 - 9;
    uVar23 = (ulong)uVar21;
  }
  pSVar10->m_Items[uVar23] = uVar12;
  pSVar10 = *output;
  if (pSVar10 == (System_Byte_array *)0x0) goto label_05de8362;
  if ((uint)pSVar10->max_length <= uVar17) goto label_05de835d;
  pSVar10->m_Items[uVar17] = (uint8_t)lVar28;
  uVar21 = (iVar27 + uVar29) - 2;
  uVar25 = (uint)input->max_length;
  if ((uVar25 <= uVar21) || (uVar16 = uVar16 + iVar27, uVar25 <= uVar16)) goto label_05de835d;
  uVar29 = iVar27 + uVar29;
  uVar24 = (ulong)uVar29;
  if (uVar25 <= uVar29) goto label_05de835d;
  bVar1 = input->m_Items[(int)uVar16];
  bVar2 = input->m_Items[uVar21];
  bVar3 = input->m_Items[(int)uVar29];
  if ((TypeInfo_Utility_CLZF2->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_CLZF2);
  }
  pUVar9 = TypeInfo_Utility_CLZF2->static_fields;
  pSVar6 = pUVar9->HashTable;
  if (pSVar6 == (System_Int64_array *)0x0) goto label_05de8362;
  uVar26 = (uint)bVar1 << 8 | (uint)bVar2 << 0x10 | (uint)bVar3;
  cVar11 = '\x18' - (char)pUVar9->HLOG;
  uVar18 = pUVar9->HSIZE - 1;
  uVar25 = (uVar26 << 5 ^ uVar26) >> (bVar3 * '\x1b' + cVar11 & 0x1f) & uVar18;
  uVar15 = (uint)pSVar6->max_length;
  if (uVar15 <= uVar25) goto label_05de835d;
  pSVar6->m_Items[uVar25] = (ulong)uVar21;
  if ((uint)input->max_length <= uVar29 + 1) goto label_05de835d;
  uVar25 = uVar26 << 8 | (uint)input->m_Items[(int)(uVar29 + 1)];
  uVar18 = (uVar25 << 5 ^ uVar25) >> (input->m_Items[(int)(uVar29 + 1)] * '\x1b' + cVar11 & 0x1f) & uVar18;
  if (uVar15 <= uVar18) goto label_05de835d;
  pSVar6->m_Items[(int)uVar18] = (ulong)uVar16;
  local_70 = (ulong)(uVar17 + 1);
  goto label_05de7c8a;
}


// Utility.CLZF2$$lzf_decompress
// il2cpp: int32_t Utility_CLZF2__lzf_decompress (System_Byte_array* input, System_Byte_array** output, const MethodInfo* method);
// 0x5de8490
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5de866d: jmp 0x5de84d0

int32_t Utility_CLZF2__lzf_decompress(System_Byte_array *input,System_Byte_array **output,MethodInfo *method)

{
  byte bVar1;
  System_Byte_array *pSVar2;
  il2cpp_array_size_t iVar3;
  ulong uVar4;
  uint uVar5;
  uint uVar6;
  long lVar7;
  uint uVar8;
  long lVar9;
  uint uVar10;
  uint uVar11;
  ulong uVar12;
  uint uVar13;
  
  if ((input == (System_Byte_array *)0x0) || (*output == (System_Byte_array *)0x0)) {
label_05de8688:
    ThrowNullReferenceException();
  }
  iVar3 = input->max_length;
  lVar9 = (long)(int)(*output)->max_length;
  uVar4 = 0;
  uVar12 = 0;
  do {
    uVar10 = (uint)input->max_length;
    uVar5 = (uint)uVar12;
    if (uVar10 <= uVar5) goto label_05de8683;
    uVar11 = uVar5 + 1;
    bVar1 = input->m_Items[uVar12];
    uVar13 = (uint)uVar4;
    if (bVar1 < 0x20) {
      uVar10 = bVar1 + uVar13 + 1;
      if (lVar9 < (long)(ulong)uVar10) {
        return 0;
      }
      lVar7 = 0;
      do {
        if ((uint)input->max_length <= uVar11 + (int)lVar7) goto label_05de8683;
        pSVar2 = *output;
        if (pSVar2 == (System_Byte_array *)0x0) goto label_05de8688;
        if ((uint)pSVar2->max_length <= uVar4) goto label_05de8683;
        pSVar2->m_Items[uVar4] = input->m_Items[lVar7 + uVar12 + 1];
        lVar7 = lVar7 + 1;
        uVar4 = uVar4 + 1;
      } while (bVar1 + 1 != (int)lVar7);
      uVar11 = uVar11 + (int)lVar7;
    }
    else {
      uVar8 = (uint)(bVar1 >> 5);
      if (uVar8 == 7) {
        if (uVar10 <= uVar11) goto label_05de8683;
        uVar12 = (ulong)uVar11;
        uVar11 = uVar5 + 2;
        uVar8 = input->m_Items[uVar12] + 7;
      }
      if (uVar10 <= uVar11) {
label_05de8683:
        ThrowIndexOutOfRangeException();
      }
      uVar10 = uVar13 + uVar8 + 2;
      if (lVar9 < (long)(ulong)uVar10) {
        return 0;
      }
      uVar5 = ((~(uint)bVar1 << 8 | 0xffffe0ff) + uVar13) - (uint)input->m_Items[uVar11];
      if ((int)uVar5 < 0) {
        return 0;
      }
      pSVar2 = *output;
      if (pSVar2 == (System_Byte_array *)0x0) goto label_05de8688;
      uVar6 = (uint)pSVar2->max_length;
      if ((uVar6 <= uVar5) || (uVar6 <= uVar13)) goto label_05de8683;
      pSVar2->m_Items[uVar4] = pSVar2->m_Items[uVar5];
      pSVar2 = *output;
      if (pSVar2 == (System_Byte_array *)0x0) goto label_05de8688;
      uVar6 = (uint)pSVar2->max_length;
      if ((uVar6 <= uVar5 + 1) || (uVar6 <= uVar13 + 1)) goto label_05de8683;
      uVar11 = uVar11 + 1;
      uVar6 = uVar5 + 2;
      pSVar2->m_Items[uVar13 + 1] = pSVar2->m_Items[(int)(uVar5 + 1)];
      uVar4 = (ulong)(uVar13 + 2);
      do {
        pSVar2 = *output;
        if (pSVar2 == (System_Byte_array *)0x0) goto label_05de8688;
        if (((uint)pSVar2->max_length <= uVar6) || ((pSVar2->max_length & 0xffffffff) <= uVar4))
        goto label_05de8683;
        pSVar2->m_Items[uVar4] = pSVar2->m_Items[(int)uVar6];
        uVar4 = uVar4 + 1;
        uVar6 = uVar6 + 1;
        uVar8 = uVar8 - 1;
      } while (uVar8 != 0);
    }
    uVar12 = (ulong)uVar11;
    uVar4 = (ulong)uVar10;
    if ((long)(int)iVar3 <= (long)uVar12) {
      return uVar10;
    }
  } while( true );
}


// Utility.CLZF2$$.cctor
// il2cpp: void Utility_CLZF2___cctor (const MethodInfo* method);
// 0x5de8690

void Utility_CLZF2___cctor(MethodInfo *method)

{
  Utility_CLZF2_StaticFields *pUVar1;
  System_Int64_array *pSVar2;
  
  if (Il2CppMethodInitialized_075482b3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_CLZF2);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_long_array);
    Il2CppMethodInitialized_075482b3 = '\x01';
  }
  pUVar1 = TypeInfo_Utility_CLZF2->static_fields;
  pUVar1->HLOG = 0xe;
  pUVar1->HSIZE = 0x4000;
  pUVar1->MAX_LIT = 0x20;
  pUVar1->MAX_OFF = 0x2000;
  pUVar1->MAX_REF = 0x108;
  pSVar2 = (System_Int64_array *)SZArrayNew(TypeInfo_long_array,0x4000);
  pUVar1 = TypeInfo_Utility_CLZF2->static_fields;
  pUVar1->HashTable = pSVar2;
  Il2CppCodeGenWriteBarrier(&pUVar1->HashTable);
  return;
}


