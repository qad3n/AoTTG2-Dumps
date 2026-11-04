// Type: Utility.CLZF2
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Utility/CLZF2.cs
// Prior real C# source (older reference): Assets/Scripts/Utility/Compression/CLZF2.cs
// --------------------------------

// Utility.CLZF2$$Compress
// il2cpp: System_Byte_array* Utility_CLZF2__Compress (System_Byte_array* inputBytes, const MethodInfo* method);
// 0x18232c600
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18232c687: nop word ptr [rax + rax]

System_Byte_array * Utility_CLZF2__Compress(System_Byte_array *inputBytes,MethodInfo *method)

{
  uint32_t length;
  uint32_t length_00;
  System_Byte_array *dst;
  System_Byte_array *local_res8;
  
  if (Il2CppMethodInitialized_184347804 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_byte_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_CLZF2);
    Il2CppMethodInitialized_184347804 = '\x01';
  }
  if (inputBytes != (System_Byte_array *)0x0) {
    length = (int)inputBytes->max_length * 2;
    local_res8 = (System_Byte_array *)SZArrayNew(TypeInfo_byte_array,length);
    if ((TypeInfo_Utility_CLZF2->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_CLZF2);
    }
    length_00 = Utility_CLZF2__lzf_compress(inputBytes,&local_res8,(MethodInfo *)0x0);
    while (length_00 == 0) {
      length = length * 2;
      local_res8 = (System_Byte_array *)SZArrayNew(TypeInfo_byte_array,length);
      if ((TypeInfo_Utility_CLZF2->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_CLZF2);
      }
      length_00 = Utility_CLZF2__lzf_compress(inputBytes,&local_res8,(MethodInfo *)0x0);
    }
    dst = (System_Byte_array *)SZArrayNew(TypeInfo_byte_array,length_00);
    System_Buffer__BlockCopy
              ((System_Array_o *)local_res8,0,(System_Array_o *)dst,0,length_00,(MethodInfo *)0x0);
    return dst;
  }
  ThrowNullReferenceException();
}


// Utility.CLZF2$$Decompress
// il2cpp: System_Byte_array* Utility_CLZF2__Decompress (System_Byte_array* inputBytes, const MethodInfo* method);
// 0x18232c720
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18232c7a7: nop word ptr [rax + rax]

System_Byte_array * Utility_CLZF2__Decompress(System_Byte_array *inputBytes,MethodInfo *method)

{
  uint32_t length;
  uint32_t length_00;
  System_Byte_array *dst;
  System_Byte_array *local_res8;
  
  if (Il2CppMethodInitialized_184347805 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_byte_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_CLZF2);
    Il2CppMethodInitialized_184347805 = '\x01';
  }
  if (inputBytes != (System_Byte_array *)0x0) {
    length = (int)inputBytes->max_length * 2;
    local_res8 = (System_Byte_array *)SZArrayNew(TypeInfo_byte_array,length);
    if ((TypeInfo_Utility_CLZF2->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_CLZF2);
    }
    length_00 = Utility_CLZF2__lzf_decompress(inputBytes,&local_res8,(MethodInfo *)0x0);
    while (length_00 == 0) {
      length = length * 2;
      local_res8 = (System_Byte_array *)SZArrayNew(TypeInfo_byte_array,length);
      if ((TypeInfo_Utility_CLZF2->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_CLZF2);
      }
      length_00 = Utility_CLZF2__lzf_decompress(inputBytes,&local_res8,(MethodInfo *)0x0);
    }
    dst = (System_Byte_array *)SZArrayNew(TypeInfo_byte_array,length_00);
    System_Buffer__BlockCopy
              ((System_Array_o *)local_res8,0,(System_Array_o *)dst,0,length_00,(MethodInfo *)0x0);
    return dst;
  }
  ThrowNullReferenceException();
}


// Utility.CLZF2$$lzf_compress
// il2cpp: int32_t Utility_CLZF2__lzf_compress (System_Byte_array* input, System_Byte_array** output, const MethodInfo* method);
// 0x18232c930
// asm: 7 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18232ca1e: mov r9, qword ptr [rip + 0x1dace9b]  ; TypeInfo_Utility_CLZF2
// asm:   0x18232ca25: nop word ptr [rax + rax]
// asm:   0x18232ca89: nop dword ptr [rax]
// asm:   0x18232ccaf: nop 
// asm:   0x18232cf63: mov r12d, dword ptr [rsp + 0x98]
// asm:   0x18232d060: xor eax, eax
// asm:   0x18232d062: jmp 0x18232cacf

int32_t Utility_CLZF2__lzf_compress(System_Byte_array *input,System_Byte_array **output,MethodInfo *method)

{
  byte bVar1;
  uint8_t uVar2;
  uint8_t uVar3;
  uint8_t uVar4;
  int iVar5;
  System_Byte_array *pSVar6;
  Utility_CLZF2_StaticFields *pUVar7;
  System_Int64_array *pSVar8;
  longlong lVar9;
  uint3 uVar10;
  char cVar11;
  uint uVar12;
  char cVar13;
  uint uVar14;
  longlong lVar15;
  ulonglong uVar16;
  uint uVar17;
  int iVar18;
  ulonglong uVar19;
  int iVar20;
  int iVar21;
  uint uVar22;
  Il2CppClass *klass;
  ulonglong uVar23;
  uint32_t uVar24;
  uint uVar25;
  
  if (Il2CppMethodInitialized_184347806 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Utility_CLZF2_lzf_compress);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_CLZF2);
    Il2CppMethodInitialized_184347806 = '\x01';
  }
  if ((input == (System_Byte_array *)0x0) || (*output == (System_Byte_array *)0x0)) {
label_18232d067:
    ThrowNullReferenceException();
  }
  iVar20 = (int)input->max_length;
  iVar5 = (int)(*output)->max_length;
  if ((TypeInfo_Utility_CLZF2->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_CLZF2);
  }
  System_Array__Clear((System_Array_o *)TypeInfo_Utility_CLZF2->static_fields->HashTable,0,
                      TypeInfo_Utility_CLZF2->static_fields->HSIZE,(MethodInfo *)0x0);
  uVar23 = 0;
  if (((int)input->max_length != 0) && (1 < (uint)input->max_length)) {
    uVar16 = 0;
    uVar17 = (uint)CONCAT11(input->m_Items[0],input->m_Items[1]);
    klass = (Il2CppClass *)TypeInfo_Utility_CLZF2;
    uVar14 = 0;
label_18232ca30:
    while( true ) {
      uVar22 = uVar14;
      uVar25 = (uint)uVar23;
      uVar12 = (uint)uVar16;
      if ((longlong)(iVar20 + -2) <= (longlong)uVar23) break;
      if ((uint)input->max_length <= uVar25 + 2) goto label_18232d06d;
      bVar1 = input->m_Items[(longlong)(int)uVar25 + 2];
      if ((klass->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init(klass);
        klass = (Il2CppClass *)TypeInfo_Utility_CLZF2;
      }
      pUVar7 = klass->static_fields;
      pSVar8 = pUVar7->HashTable;
      if (pSVar8 == (System_Int64_array *)0x0) goto label_18232d067;
      uVar17 = uVar17 << 8 | (uint)bVar1;
      uVar14 = (uVar17 << 5 ^ uVar17) >> ((bVar1 * -5 - (char)pUVar7->HLOG) + 0x18 & 0x1f) & pUVar7->HSIZE - 1
      ;
      if ((uint)pSVar8->max_length <= uVar14) goto label_18232d06d;
      lVar9 = pSVar8->m_Items[uVar14];
      pUVar7->HashTable->m_Items[uVar14] = uVar23;
      lVar15 = (uVar23 - lVar9) + -1;
      klass = (Il2CppClass *)TypeInfo_Utility_CLZF2;
      if ((((longlong)(ulonglong)TypeInfo_Utility_CLZF2->static_fields->MAX_OFF <= lVar15) ||
          ((longlong)iVar20 <= (longlong)(ulonglong)(uVar25 + 4))) || (lVar9 < 1)) goto label_18232cf6b;
      uVar14 = (uint)lVar9;
      if (((uint)input->max_length <= uVar14) || ((uint)input->max_length <= uVar25)) goto label_18232d06d;
      if (input->m_Items[lVar9] != input->m_Items[uVar23]) goto label_18232cf6b;
      if (((uint)input->max_length <= uVar14 + 1) || ((uint)input->max_length <= uVar25 + 1))
      goto label_18232d06d;
      if (input->m_Items[lVar9 + 1] != input->m_Items[(longlong)(int)uVar25 + 1]) goto label_18232cf6b;
      if (((uint)input->max_length <= uVar14 + 2) || ((uint)input->max_length <= uVar25 + 2))
      goto label_18232d06d;
      if (input->m_Items[lVar9 + 2] != input->m_Items[(longlong)(int)uVar25 + 2]) goto label_18232cf6b;
      uVar19 = 2;
      uVar24 = (iVar20 + -2) - uVar25;
      if ((TypeInfo_Utility_CLZF2->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_CLZF2);
      }
      if (TypeInfo_Utility_CLZF2->static_fields->MAX_REF < uVar24) {
        if ((TypeInfo_Utility_CLZF2->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_CLZF2);
        }
        uVar24 = TypeInfo_Utility_CLZF2->static_fields->MAX_REF;
      }
      if ((longlong)iVar5 <= (longlong)(uVar16 + 4 + (longlong)(int)uVar22)) {
        return 0;
      }
      do {
        iVar18 = (int)uVar19;
        uVar17 = iVar18 + 1;
        uVar19 = (ulonglong)uVar17;
        if (uVar24 <= uVar17) break;
        if (((uint)input->max_length <= uVar14 + uVar17) ||
           (uVar17 = iVar18 + 1 + uVar25, (uint)input->max_length <= uVar17)) goto label_18232d06d;
      } while (input->m_Items[uVar19 + lVar9] == input->m_Items[(int)uVar17]);
      if (uVar22 != 0) {
        pSVar6 = *output;
        if (pSVar6 == (System_Byte_array *)0x0) goto label_18232d067;
        if ((uint)pSVar6->max_length <= uVar12) goto label_18232d06d;
        iVar21 = -uVar22;
        pSVar6->m_Items[uVar16] = (char)uVar22 + 0xff;
        uVar19 = (ulonglong)(uVar12 + 1);
        do {
          if ((uint)input->max_length <= iVar21 + uVar25) goto label_18232d06d;
          pSVar6 = *output;
          if (pSVar6 == (System_Byte_array *)0x0) goto label_18232d067;
          if ((uint)pSVar6->max_length <= (uint)uVar19) goto label_18232d06d;
          uVar16 = (ulonglong)((uint)uVar19 + 1);
          pSVar6->m_Items[uVar19] = input->m_Items[(longlong)iVar21 + uVar23];
          iVar21 = iVar21 + 1;
          uVar22 = 0;
          uVar19 = uVar16;
        } while (iVar21 != 0);
      }
      pSVar6 = *output;
      if (pSVar6 == (System_Byte_array *)0x0) goto label_18232d067;
      uVar14 = (uint)uVar16;
      cVar13 = (char)(iVar18 - 1U);
      cVar11 = (char)((ulonglong)lVar15 >> 8);
      if (iVar18 - 1U < 7) {
        if ((uint)pSVar6->max_length <= uVar14) goto label_18232d06d;
        pSVar6->m_Items[uVar16] = cVar13 * ' ' + cVar11;
      }
      else {
        if ((uint)pSVar6->max_length <= uVar14) goto label_18232d06d;
        pSVar6->m_Items[uVar16] = cVar11 + 0xe0;
        pSVar6 = *output;
        if (pSVar6 == (System_Byte_array *)0x0) goto label_18232d067;
        uVar16 = (ulonglong)(uVar14 + 1);
        if ((uint)pSVar6->max_length <= uVar14 + 1) goto label_18232d06d;
        pSVar6->m_Items[uVar16] = cVar13 + 0xf9;
      }
      pSVar6 = *output;
      if (pSVar6 == (System_Byte_array *)0x0) goto label_18232d067;
      uVar14 = (int)uVar16 + 1;
      if ((uint)pSVar6->max_length <= uVar14) goto label_18232d06d;
      pSVar6->m_Items[uVar14] = (uint8_t)lVar15;
      uVar14 = iVar18 + -1 + uVar25;
      if ((((uint)input->max_length <= uVar14) || ((uint)input->max_length <= uVar14 + 1)) ||
         ((uint)input->max_length <= uVar14 + 2)) goto label_18232d06d;
      uVar2 = input->m_Items[(longlong)(int)uVar14 + 1];
      uVar3 = input->m_Items[(longlong)(int)uVar14 + 2];
      uVar4 = input->m_Items[uVar14];
      if ((TypeInfo_Utility_CLZF2->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_CLZF2);
      }
      pSVar8 = TypeInfo_Utility_CLZF2->static_fields->HashTable;
      if (pSVar8 == (System_Int64_array *)0x0) goto label_18232d067;
      uVar10 = CONCAT21(CONCAT11(uVar4,uVar2),uVar3);
      uVar23 = (ulonglong)
               (((uint)uVar10 << 5 ^ (uint)uVar10) >>
               ((uVar3 * -5 - (char)TypeInfo_Utility_CLZF2->static_fields->HLOG) + 0x18 & 0x1f)) &
               (longlong)(int)TypeInfo_Utility_CLZF2->static_fields->HSIZE - 1U;
      if ((uint)pSVar8->max_length <= (uint)uVar23) goto label_18232d06d;
      uVar12 = iVar18 + 2 + uVar25;
      pSVar8->m_Items[uVar23] = (ulonglong)uVar14;
      if ((uint)input->max_length <= uVar12) goto label_18232d06d;
      pSVar8 = TypeInfo_Utility_CLZF2->static_fields->HashTable;
      if (pSVar8 == (System_Int64_array *)0x0) goto label_18232d067;
      uVar17 = CONCAT31(uVar10,input->m_Items[(int)uVar12]);
      uVar23 = (longlong)
               (int)((uVar17 << 5 ^ uVar17) >>
                    ((input->m_Items[(int)uVar12] * -5 - (char)TypeInfo_Utility_CLZF2->static_fields->HLOG) +
                     0x18 & 0x1f)) & (longlong)(int)TypeInfo_Utility_CLZF2->static_fields->HSIZE - 1U;
      if ((uint)pSVar8->max_length <= (uint)uVar23) goto label_18232d06d;
      uVar16 = (ulonglong)((int)uVar16 + 2);
      pSVar8->m_Items[uVar23] = (ulonglong)(iVar18 + uVar25);
      uVar23 = (ulonglong)(uVar25 + 1 + iVar18);
      klass = (Il2CppClass *)TypeInfo_Utility_CLZF2;
      uVar14 = uVar22;
    }
    if (uVar23 != (longlong)iVar20) {
label_18232cf6b:
      uVar23 = (ulonglong)(uVar25 + 1);
      if ((klass->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init(klass);
        klass = (Il2CppClass *)TypeInfo_Utility_CLZF2;
      }
      uVar14 = uVar22 + 1;
      if ((longlong)(int)(uVar22 + 1) == (ulonglong)*(uint *)((longlong)klass->static_fields + 8)) {
        if ((klass->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init(klass);
          klass = (Il2CppClass *)TypeInfo_Utility_CLZF2;
        }
        if ((longlong)iVar5 <=
            (longlong)(ulonglong)(*(int *)((longlong)klass->static_fields + 8) + 1 + uVar12)) {
          return 0;
        }
        pSVar6 = *output;
        if ((klass->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init(klass);
          klass = (Il2CppClass *)TypeInfo_Utility_CLZF2;
        }
        if (pSVar6 == (System_Byte_array *)0x0) goto label_18232d067;
        if ((uint)pSVar6->max_length <= uVar12) goto label_18232d06d;
        pSVar6->m_Items[uVar16] = (char)klass->static_fields->MAX_LIT + 0xff;
        uVar22 = ~uVar22;
        uVar19 = (ulonglong)(uVar12 + 1);
        do {
          if ((uint)input->max_length <= uVar22 + uVar25 + 1) goto label_18232d06d;
          pSVar6 = *output;
          if (pSVar6 == (System_Byte_array *)0x0) goto label_18232d067;
          if ((uint)pSVar6->max_length <= (uint)uVar19) goto label_18232d06d;
          uVar16 = (ulonglong)((uint)uVar19 + 1);
          pSVar6->m_Items[uVar19] = input->m_Items[(longlong)(int)uVar22 + uVar23];
          uVar22 = uVar22 + 1;
          uVar19 = uVar16;
        } while (uVar22 != 0);
        klass = (Il2CppClass *)TypeInfo_Utility_CLZF2;
        uVar14 = 0;
      }
      goto label_18232ca30;
    }
    if (uVar22 == 0) goto label_18232cacd;
    if ((longlong)iVar5 <= (longlong)(uVar16 + 1 + (longlong)(int)uVar22)) {
      return 0;
    }
    pSVar6 = *output;
    if (pSVar6 == (System_Byte_array *)0x0) goto label_18232d067;
    if (uVar12 < (uint)pSVar6->max_length) {
      pSVar6->m_Items[uVar16] = (char)uVar22 + 0xff;
      iVar20 = -uVar22;
      uVar19 = (ulonglong)(uVar12 + 1);
      goto label_18232ca90;
    }
  }
label_18232d06d:
  ThrowIndexOutOfRangeException();
label_18232ca90:
  if ((uint)input->max_length <= iVar20 + uVar25) goto label_18232d06d;
  pSVar6 = *output;
  if (pSVar6 == (System_Byte_array *)0x0) goto label_18232d067;
  if ((uint)pSVar6->max_length <= (uint)uVar19) goto label_18232d06d;
  uVar16 = (ulonglong)((uint)uVar19 + 1);
  pSVar6->m_Items[uVar19] = input->m_Items[(longlong)iVar20 + uVar23];
  iVar20 = iVar20 + 1;
  uVar19 = uVar16;
  if (iVar20 == 0) {
label_18232cacd:
    return (int32_t)uVar16;
  }
  goto label_18232ca90;
}


// Utility.CLZF2$$lzf_decompress
// il2cpp: int32_t Utility_CLZF2__lzf_decompress (System_Byte_array* input, System_Byte_array** output, const MethodInfo* method);
// 0x18232d080
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18232d1ed: nop dword ptr [rax]

int32_t Utility_CLZF2__lzf_decompress(System_Byte_array *input,System_Byte_array **output,MethodInfo *method)

{
  byte bVar1;
  System_Byte_array *pSVar2;
  il2cpp_array_size_t iVar3;
  uint uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  uint uVar12;
  int iVar13;
  longlong lVar14;
  ulonglong uVar11;
  
  if ((input != (System_Byte_array *)0x0) && (*output != (System_Byte_array *)0x0)) {
    lVar14 = (longlong)(int)(*output)->max_length;
    uVar6 = 0;
    iVar3 = input->max_length;
    uVar5 = 0;
    do {
      uVar9 = (uint)uVar6;
      if ((uint)input->max_length <= uVar9) goto label_18232d24c;
      uVar10 = uVar9 + 1;
      uVar11 = (ulonglong)uVar10;
      bVar1 = input->m_Items[uVar6];
      uVar4 = (uint)uVar5;
      if (bVar1 < 0x20) {
        iVar13 = bVar1 + 1;
        uVar7 = uVar5;
        if (lVar14 < (longlong)(ulonglong)(iVar13 + uVar4)) {
          return 0;
        }
        do {
          if ((uint)input->max_length <= (uint)uVar11) goto label_18232d24c;
          pSVar2 = *output;
          if (pSVar2 == (System_Byte_array *)0x0) goto label_18232d246;
          if ((uint)pSVar2->max_length <= (uint)uVar7) goto label_18232d24c;
          uVar6 = (ulonglong)((uint)uVar11 + 1);
          uVar5 = (ulonglong)((uint)uVar7 + 1);
          pSVar2->m_Items[uVar7] = input->m_Items[uVar11];
          iVar13 = iVar13 + -1;
          uVar7 = uVar5;
          uVar11 = uVar6;
        } while (iVar13 != 0);
      }
      else {
        uVar12 = (uint)(bVar1 >> 5);
        if (uVar12 == 7) {
          if ((uint)input->max_length <= uVar10) goto label_18232d24c;
          uVar11 = (ulonglong)(uVar9 + 2);
          uVar12 = input->m_Items[uVar10] + 7;
        }
        if ((uint)input->max_length <= (uint)uVar11) {
label_18232d24c:
          ThrowIndexOutOfRangeException();
        }
        if (lVar14 < (longlong)(ulonglong)(uVar4 + 2 + uVar12)) {
          return 0;
        }
        uVar9 = (uVar4 + (bVar1 & 0x1f) * -0x100 + -1) - (uint)input->m_Items[uVar11];
        if ((int)uVar9 < 0) {
          return 0;
        }
        pSVar2 = *output;
        if (pSVar2 == (System_Byte_array *)0x0) break;
        if (((uint)pSVar2->max_length <= uVar9) || ((uint)pSVar2->max_length <= uVar4)) goto label_18232d24c;
        pSVar2->m_Items[uVar5] = pSVar2->m_Items[(int)uVar9];
        pSVar2 = *output;
        if (pSVar2 == (System_Byte_array *)0x0) break;
        if (((uint)pSVar2->max_length <= uVar9 + 1) || ((uint)pSVar2->max_length <= uVar4 + 1))
        goto label_18232d24c;
        uVar10 = uVar9 + 2;
        pSVar2->m_Items[uVar4 + 1] = pSVar2->m_Items[(longlong)(int)uVar9 + 1];
        uVar6 = (ulonglong)(uVar4 + 2);
        do {
          pSVar2 = *output;
          if (pSVar2 == (System_Byte_array *)0x0) goto label_18232d246;
          if (((uint)pSVar2->max_length <= uVar10) || ((uint)pSVar2->max_length <= (uint)uVar6))
          goto label_18232d24c;
          lVar8 = (longlong)(int)uVar10;
          uVar10 = uVar10 + 1;
          uVar5 = (ulonglong)((uint)uVar6 + 1);
          pSVar2->m_Items[uVar6] = pSVar2->m_Items[lVar8];
          uVar12 = uVar12 - 1;
          uVar6 = uVar5;
        } while (uVar12 != 0);
        uVar6 = (ulonglong)((uint)uVar11 + 1);
      }
      if ((longlong)(int)iVar3 <= (longlong)uVar6) {
        return (int32_t)uVar5;
      }
    } while( true );
  }
label_18232d246:
  ThrowNullReferenceException();
}


// Utility.CLZF2$$.cctor
// il2cpp: void Utility_CLZF2___cctor (const MethodInfo* method);
// 0x18232c840

void Utility_CLZF2___cctor(MethodInfo *method)

{
  System_Int64_array *value;
  
  if (Il2CppMethodInitialized_184347807 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_CLZF2);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_long_array);
    Il2CppMethodInitialized_184347807 = '\x01';
  }
  TypeInfo_Utility_CLZF2->static_fields->HLOG = 0xe;
  TypeInfo_Utility_CLZF2->static_fields->HSIZE = 0x4000;
  TypeInfo_Utility_CLZF2->static_fields->MAX_LIT = 0x20;
  TypeInfo_Utility_CLZF2->static_fields->MAX_OFF = 0x2000;
  TypeInfo_Utility_CLZF2->static_fields->MAX_REF = 0x108;
  value = (System_Int64_array *)SZArrayNew(TypeInfo_long_array,TypeInfo_Utility_CLZF2->static_fields->HSIZE);
  TypeInfo_Utility_CLZF2->static_fields->HashTable = value;
  Il2CppCodeGenWriteBarrier(&TypeInfo_Utility_CLZF2->static_fields->HashTable,value);
  return;
}


