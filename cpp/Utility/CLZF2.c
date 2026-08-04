// Type: Utility.CLZF2
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Utility/CLZF2.cs
// Prior real C# source (older reference): Assets/Scripts/Utility/Compression/CLZF2.cs
// --------------------------------

// Utility.CLZF2$$Compress
// il2cpp: System_Byte_array* Utility_CLZF2__Compress (System_Byte_array* inputBytes, const MethodInfo* method);
// 0x4488ec0

System_Byte_array * Utility_CLZF2__Compress(System_Byte_array *inputBytes,MethodInfo *method)

{
  undefined1 *puVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  void *pvVar5;
  System_Array_c *pSVar6;
  char *pcVar7;
  undefined4 *puVar8;
  Il2CppType *pIVar9;
  int iVar10;
  int iVar11;
  System_Byte_array *pSVar12;
  System_Byte_array *pSVar13;
  int *piVar14;
  il2cpp_array_size_t iVar15;
  undefined8 uVar16;
  char cVar17;
  uint uVar18;
  ulong uVar19;
  long lVar20;
  char cVar21;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 extraout_RDX_01;
  undefined8 extraout_RDX_02;
  uint uVar22;
  ulong uVar24;
  long lVar25;
  System_Byte_array *unaff_RBP;
  System_Byte_array *pSVar26;
  uint uVar27;
  System_Byte_array *pSVar28;
  System_Byte_array *pSVar29;
  undefined8 *puVar30;
  uint uVar31;
  System_Byte_array *pSVar32;
  undefined8 *unaff_R12;
  System_Byte_array *unaff_R13;
  uint uVar33;
  System_Byte_array *unaff_R15;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  System_Byte_array *pSStack_e8;
  System_Byte_array *pSStack_e0;
  undefined8 *puStack_d8;
  System_Byte_array *pSStack_d0;
  System_Byte_array *pSStack_c8;
  System_Byte_array *pSStack_c0;
  System_Byte_array *pSStack_b8;
  System_Byte_array *pSStack_b0;
  System_Byte_array *pSStack_a8;
  System_Byte_array *pSStack_a0;
  System_Byte_array *pSStack_98;
  long lStack_90;
  System_Byte_array *pSStack_88;
  System_Byte_array *pSStack_80;
  uint uStack_78;
  uint uStack_74;
  System_Byte_array *pSStack_70;
  System_Byte_array *pSStack_38;
  System_Byte_array *pSVar23;
  System_Byte_array *pSVar34;
  
  pSVar28 = inputBytes;
  if (g_data_057ae8d2 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_byte);
    pSVar28 = (System_Byte_array *)&TypeInfo_CLZF2;
    il2cpp_runtime_helper_023445d0();
    g_data_057ae8d2 = '\x01';
  }
  pSStack_38 = (System_Byte_array *)0x0;
  if (inputBytes != (System_Byte_array *)0x0) {
    iVar11 = (int)inputBytes->max_length * 2;
    auVar35 = il2cpp_runtime_helper_022b2a40(TypeInfo_byte,iVar11);
    pSVar28 = auVar35._0_8_;
    if (*(int *)((long)((Il2CppType *)TypeInfo_CLZF2->m_Items + 0xc) + 4) == 0) {
      pSStack_38 = pSVar28;
      il2cpp_runtime_helper_02337ed0();
      auVar35._8_8_ = extraout_RDX;
      auVar35._0_8_ = pSStack_38;
    }
    pSStack_38 = auVar35._0_8_;
    iVar10 = Utility_CLZF2__lzf_compress(inputBytes,&pSStack_38,auVar35._8_8_);
    while (iVar10 == 0) {
      iVar11 = iVar11 * 2;
      auVar36 = il2cpp_runtime_helper_022b2a40(TypeInfo_byte,iVar11);
      pSVar28 = auVar36._0_8_;
      if (*(int *)((long)((Il2CppType *)TypeInfo_CLZF2->m_Items + 0xc) + 4) == 0) {
        pSStack_38 = pSVar28;
        il2cpp_runtime_helper_02337ed0();
        auVar36._8_8_ = extraout_RDX_00;
        auVar36._0_8_ = pSStack_38;
      }
      pSStack_38 = auVar36._0_8_;
      iVar10 = Utility_CLZF2__lzf_compress(inputBytes,&pSStack_38,auVar36._8_8_);
    }
    pSVar12 = (System_Byte_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_byte);
    System_Buffer__BlockCopy((System_Array_o *)pSVar28,0,(System_Array_o *)pSVar12,0,iVar10,(MethodInfo *)0x0)
    ;
    return pSVar12;
  }
  il2cpp_runtime_helper_022b2c90();
  pSVar12 = (System_Byte_array *)method;
  pSStack_b0 = pSVar28;
  if (g_data_057ae8d4 == '\0') {
    pSStack_b8 = (System_Byte_array *)0x448900a;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_lzf_compress);
    pSStack_b8 = (System_Byte_array *)0x4489016;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLZF2);
    g_data_057ae8d4 = '\x01';
  }
  pSVar34 = (System_Byte_array *)0x0;
  pSVar28 = pSStack_b0;
  pSVar29 = pSStack_a0;
  if ((pSStack_b0 != (System_Byte_array *)0x0) &&
     (pvVar5 = ((Il2CppClass_1 *)&((System_Byte_array *)method)->obj)->image,
     pSStack_98 = (System_Byte_array *)method, pvVar5 != (void *)0x0)) {
    unaff_RBP = (System_Byte_array *)pSStack_b0->max_length;
    pSVar29 = *(System_Byte_array **)((long)pvVar5 + 0x18);
    unaff_R12 = &TypeInfo_CLZF2;
    if (*(int *)((long)((Il2CppType *)TypeInfo_CLZF2->m_Items + 0xc) + 4) == 0) {
      pSStack_b8 = (System_Byte_array *)0x448905c;
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar28 = *(System_Byte_array **)(*(long *)((long)((Il2CppType *)TypeInfo_CLZF2->m_Items + 9) + 8) + 0x18);
    pSVar12 = (System_Byte_array *)0x0;
    pSStack_b8 = (System_Byte_array *)0x4489077;
    System_Array__Clear((System_Array_o *)pSVar28,0,
                        *(int32_t *)(*(long *)((long)((Il2CppType *)TypeInfo_CLZF2->m_Items + 9) + 8) + 4),
                        (MethodInfo *)0x0);
    method = (MethodInfo *)pSVar29;
    pSVar23 = pSStack_a0;
    if ((*(int *)&pSStack_b0->max_length != 1) && (*(int *)&pSStack_b0->max_length != 0)) {
      pSStack_a8 = (System_Byte_array *)(((long)unaff_RBP << 0x20) + -0x200000000 >> 0x20);
      pSStack_80 = (System_Byte_array *)(long)(int)unaff_RBP;
      lStack_90 = (long)(int)pSVar29;
      unaff_R15 = (System_Byte_array *)0x0;
      pSVar26 = (System_Byte_array *)0x0;
      pSVar32 = pSStack_b0;
      pSVar34 = pSStack_a8;
      pSStack_a0 = (System_Byte_array *)
                   (ulong)CONCAT11(*(undefined1 *)&((Il2CppType *)pSStack_b0->m_Items)->data,
                                   *(undefined1 *)((long)&((Il2CppType *)pSStack_b0->m_Items)->data + 1));
      pSStack_70 = unaff_RBP;
label_044890db:
      method = (MethodInfo *)0x0;
      unaff_RBP = pSVar26;
      unaff_R13 = (System_Byte_array *)method;
      pSStack_88 = unaff_R15;
      if ((long)pSVar26 < (long)pSVar34) goto label_04489134;
      while( true ) {
        unaff_R12 = &TypeInfo_CLZF2;
        iVar11 = (int)method;
        unaff_R13 = (System_Byte_array *)method;
        if (pSStack_80 == pSVar26) break;
        iVar10 = *(int *)((long)((Il2CppType *)TypeInfo_CLZF2->m_Items + 0xc) + 4);
        unaff_RBP = pSVar26;
        pSVar28 = TypeInfo_CLZF2;
        while( true ) {
          method = (MethodInfo *)(ulong)(iVar11 + 1U);
          if (iVar10 == 0) {
            pSStack_b8 = (System_Byte_array *)0x4489105;
            il2cpp_runtime_helper_02337ed0();
            pSVar28 = TypeInfo_CLZF2;
            pSVar32 = pSStack_b0;
          }
          pSVar29 = pSStack_98;
          unaff_R12 = &TypeInfo_CLZF2;
          pSVar26 = (System_Byte_array *)(ulong)((int)unaff_RBP + 1);
          uVar31 = *(uint *)(*(long *)((long)((Il2CppType *)pSVar28->m_Items + 9) + 8) + 8);
          unaff_RBP = pSVar26;
          if ((long)(int)(iVar11 + 1U) == (ulong)uVar31) {
            if (*(int *)((long)((Il2CppType *)pSVar28->m_Items + 0xc) + 4) == 0) {
              pSStack_b8 = (System_Byte_array *)0x44892f3;
              il2cpp_runtime_helper_02337ed0();
              uVar31 = *(uint *)(*(long *)((long)((Il2CppType *)TypeInfo_CLZF2->m_Items + 9) + 8) + 8);
              pSVar28 = TypeInfo_CLZF2;
              pSVar32 = pSStack_b0;
            }
            if (lStack_90 <= (long)(ulong)((uint)unaff_R15 + uVar31 + 1)) {
              return (System_Byte_array *)0x0;
            }
            method = ((Il2CppClass_1 *)&pSVar29->obj)->image;
            if (*(int *)((long)((Il2CppType *)pSVar28->m_Items + 0xc) + 4) == 0) {
              pSStack_b8 = (System_Byte_array *)0x4489328;
              il2cpp_runtime_helper_02337ed0();
              pSVar32 = pSStack_b0;
            }
            pSVar29 = pSStack_a0;
            if ((System_Byte_array *)method == (System_Byte_array *)0x0) goto label_044897c7;
            pSVar23 = pSStack_a0;
            if (*(uint *)&((System_Byte_array *)method)->max_length <= (uint)unaff_R15) goto label_044897c2;
            *(char *)((long)&((Il2CppType *)((System_Byte_array *)((ulong)unaff_R15 & 0xffffffff))->m_Items)->
                             data + (long)((Il2CppType *)((System_Byte_array *)method)->m_Items + -2)) =
                 *(char *)(*(long *)((long)((Il2CppType *)TypeInfo_CLZF2->m_Items + 9) + 8) + 8) + -1;
            uVar31 = ~(uint)unaff_R13;
            pSVar13 = (System_Byte_array *)((ulong)unaff_R15 & 0xffffffff);
            goto label_04489370;
          }
          unaff_R13 = (System_Byte_array *)method;
          if ((long)pSVar34 <= (long)pSVar26) break;
label_04489134:
          unaff_R12 = &TypeInfo_CLZF2;
          uVar31 = (uint)unaff_RBP;
          uVar33 = uVar31 + 2;
          pSVar34 = (System_Byte_array *)(ulong)uVar33;
          method = (MethodInfo *)pSStack_a0;
          pSVar23 = pSStack_a0;
          if (*(uint *)&pSVar32->max_length <= uVar33) goto label_044897c2;
          puVar30 = (undefined8 *)(long)(int)uVar33;
          uVar22 = (int)pSStack_a0 << 8 |
                   (uint)*(byte *)((long)puVar30 + (long)&((Il2CppType *)pSVar32->m_Items)->data);
          pSVar23 = (System_Byte_array *)(ulong)uVar22;
          if (*(int *)((long)((Il2CppType *)TypeInfo_CLZF2->m_Items + 0xc) + 4) == 0) {
            pSStack_b8 = (System_Byte_array *)0x448916d;
            il2cpp_runtime_helper_02337ed0();
            pSVar32 = pSStack_b0;
            unaff_R12 = puVar30;
            unaff_R15 = pSStack_88;
          }
          pSVar28 = TypeInfo_CLZF2;
          piVar14 = *(int **)((long)((Il2CppType *)TypeInfo_CLZF2->m_Items + 9) + 8);
          uVar27 = uVar22 * 5 + *piVar14;
          pSVar12 = (System_Byte_array *)(ulong)uVar27;
          lVar20 = *(long *)(piVar14 + 6);
          method = (MethodInfo *)pSVar23;
          pSVar29 = pSStack_a0;
          if (lVar20 == 0) goto label_044897c7;
          pSVar12 = (System_Byte_array *)(ulong)(piVar14[1] - 1U);
          uVar22 = (uVar22 << 5 ^ uVar22) >> (0x18U - (char)uVar27 & 0x1f) & piVar14[1] - 1U;
          if (*(uint *)(lVar20 + 0x18) <= uVar22) goto label_044897c2;
          method = *(MethodInfo **)(lVar20 + 0x20 + (ulong)uVar22 * 8);
          *(System_Byte_array **)(lVar20 + 0x20 + (ulong)uVar22 * 8) = unaff_RBP;
          unaff_R12 = (undefined8 *)
                      ((long)&((Il2CppClass_1 *)((Il2CppType *)unaff_RBP->m_Items + -2))->image +
                      ~(ulong)method);
          iVar11 = (int)unaff_R13;
          pSStack_a0 = pSVar23;
          if ((((long)unaff_R12 < (long)(ulong)(uint)piVar14[3]) &&
              ((long)(ulong)(uVar31 + 4) < (long)pSStack_80)) && (0 < (long)method)) {
            uVar22 = *(uint *)&pSVar32->max_length;
            if ((uVar22 <= (uint)method) || (uVar22 <= uVar31)) goto label_044897c2;
            if (*(char *)((long)&((Il2CppType *)((System_Byte_array *)method)->m_Items)->data +
                         (long)((Il2CppType *)pSVar32->m_Items + -2)) !=
                *(char *)((long)&((Il2CppType *)unaff_RBP->m_Items)->data +
                         (long)((Il2CppType *)pSVar32->m_Items + -2))) goto label_044892b0;
            puVar1 = (undefined1 *)((long)&((Il2CppClass_1 *)&((System_Byte_array *)method)->obj)->image + 1);
            if (uVar22 <= (uint)puVar1) goto label_044897c2;
            uVar27 = uVar31 + 1;
            pSVar12 = (System_Byte_array *)(ulong)uVar27;
            if (uVar22 <= uVar27) goto label_044897c2;
            pSVar12 = (System_Byte_array *)(long)(int)uVar27;
            if (puVar1[(long)&((Il2CppType *)pSVar32->m_Items)->data] !=
                *(char *)((long)&((Il2CppType *)pSVar12->m_Items)->data +
                         (long)((Il2CppType *)pSVar32->m_Items + -2))) goto label_044892b0;
            puVar1 = (undefined1 *)((long)&((Il2CppClass_1 *)&((System_Byte_array *)method)->obj)->image + 2);
            if ((uVar22 <= (uint)puVar1) || (uVar22 <= uVar33)) goto label_044897c2;
            if (puVar1[(long)&((Il2CppType *)pSVar32->m_Items)->data] ==
                *(char *)((long)puVar30 + (long)&((Il2CppType *)pSVar32->m_Items)->data)) {
              uVar33 = ((int)pSStack_70 - uVar31) - 2;
              if (*(int *)((long)((Il2CppType *)pSVar28->m_Items + 0xc) + 4) == 0) {
                pSStack_b8 = (System_Byte_array *)0x44893d4;
                il2cpp_runtime_helper_02337ed0();
                piVar14 = *(int **)((long)((Il2CppType *)TypeInfo_CLZF2->m_Items + 9) + 8);
                pSVar28 = TypeInfo_CLZF2;
                pSVar32 = pSStack_b0;
              }
              if (((uint)piVar14[4] < uVar33) &&
                 (uVar33 = piVar14[4], *(int *)((long)((Il2CppType *)pSVar28->m_Items + 0xc) + 4) == 0)) {
                pSStack_b8 = (System_Byte_array *)0x4489402;
                il2cpp_runtime_helper_02337ed0();
                uVar33 = *(uint *)(*(long *)((long)((Il2CppType *)TypeInfo_CLZF2->m_Items + 9) + 8) + 0x10);
                pSVar32 = pSStack_b0;
              }
              uVar19 = (ulong)unaff_R15 & 0xffffffff;
              if (lStack_90 <= (long)((long)iVar11 + uVar19 + 4)) {
                return (System_Byte_array *)0x0;
              }
              pSVar23 = (System_Byte_array *)
                        ((long)&((Il2CppType *)((System_Byte_array *)method)->m_Items)->data +
                        (long)((Il2CppType *)pSVar32->m_Items + -4));
              uVar22 = (uint)method + 3;
              method = (MethodInfo *)(ulong)uVar22;
              pSVar28 = (System_Byte_array *)&g_data_00000023;
              pSVar12 = (System_Byte_array *)0x0;
              cVar17 = ' ';
              goto label_04489450;
            }
            iVar10 = *(int *)((long)((Il2CppType *)pSVar28->m_Items + 0xc) + 4);
            pSVar34 = pSStack_a8;
          }
          else {
label_044892b0:
            iVar10 = *(int *)((long)((Il2CppType *)pSVar28->m_Items + 0xc) + 4);
            pSVar34 = pSStack_a8;
          }
        }
      }
      if (iVar11 == 0) {
        return (System_Byte_array *)((ulong)unaff_R15 & 0xffffffff);
      }
      uVar19 = (ulong)unaff_R15 & 0xffffffff;
      if (lStack_90 <= (long)((long)iVar11 + uVar19 + 1)) {
        return (System_Byte_array *)0x0;
      }
      pSVar6 = ((Il2CppClass_1 *)&pSStack_98->obj)->image;
      unaff_RBP = pSStack_98;
      pSVar29 = pSStack_a0;
      if (pSVar6 == (System_Array_c *)0x0) goto label_044897c7;
      pSVar23 = pSStack_a0;
      if ((uint)unaff_R15 < *(uint *)&(pSVar6->_1).namespaze) {
        *(char *)((long)&(pSVar6->_1).byval_arg.data + uVar19) = (char)method + -1;
        uVar31 = -iVar11;
        lVar20 = uVar19 + 0x21;
        goto label_04489770;
      }
    }
label_044897c2:
    pSStack_a0 = pSVar23;
    pSStack_b8 = (System_Byte_array *)0x44897c7;
    il2cpp_runtime_helper_022b2ca0();
    pSVar29 = pSStack_a0;
  }
label_044897c7:
  pSStack_a0 = pSVar29;
  pSStack_b8 = (System_Byte_array *)0x44897cc;
  pSStack_e8 = (System_Byte_array *)il2cpp_runtime_helper_022b2c90();
  pSVar29 = pSVar28;
  pSStack_e0 = (System_Byte_array *)method;
  puStack_d8 = unaff_R12;
  pSStack_d0 = unaff_R13;
  pSStack_c8 = pSVar34;
  pSStack_c0 = unaff_R15;
  pSStack_b8 = unaff_RBP;
  if (g_data_057ae8d3 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_byte);
    pSVar29 = (System_Byte_array *)&TypeInfo_CLZF2;
    il2cpp_runtime_helper_023445d0();
    g_data_057ae8d3 = '\x01';
  }
  pSStack_e8 = (System_Byte_array *)0x0;
  if (pSVar28 != (System_Byte_array *)0x0) {
    iVar11 = (int)pSVar28->max_length * 2;
    auVar37 = il2cpp_runtime_helper_022b2a40(TypeInfo_byte,iVar11);
    pSVar12 = auVar37._0_8_;
    if (*(int *)((long)((Il2CppType *)TypeInfo_CLZF2->m_Items + 0xc) + 4) == 0) {
      pSStack_e8 = pSVar12;
      il2cpp_runtime_helper_02337ed0();
      auVar37._8_8_ = extraout_RDX_01;
      auVar37._0_8_ = pSStack_e8;
    }
    pSStack_e8 = auVar37._0_8_;
    iVar10 = Utility_CLZF2__lzf_decompress(pSVar28,&pSStack_e8,auVar37._8_8_);
    while (iVar10 == 0) {
      iVar11 = iVar11 * 2;
      auVar38 = il2cpp_runtime_helper_022b2a40(TypeInfo_byte,iVar11);
      pSVar12 = auVar38._0_8_;
      if (*(int *)((long)((Il2CppType *)TypeInfo_CLZF2->m_Items + 0xc) + 4) == 0) {
        pSStack_e8 = pSVar12;
        il2cpp_runtime_helper_02337ed0();
        auVar38._8_8_ = extraout_RDX_02;
        auVar38._0_8_ = pSStack_e8;
      }
      pSStack_e8 = auVar38._0_8_;
      iVar10 = Utility_CLZF2__lzf_decompress(pSVar28,&pSStack_e8,auVar38._8_8_);
    }
    pSVar28 = (System_Byte_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_byte);
    System_Buffer__BlockCopy((System_Array_o *)pSVar12,0,(System_Array_o *)pSVar28,0,iVar10,(MethodInfo *)0x0)
    ;
    return pSVar28;
  }
  il2cpp_runtime_helper_022b2c90();
  if ((pSVar29 != (System_Byte_array *)0x0) &&
     (pSVar6 = ((Il2CppClass_1 *)&pSVar12->obj)->image, pSVar6 != (System_Array_c *)0x0)) {
    iVar15 = pSVar29->max_length;
    iVar11 = (int)iVar15;
    if (iVar11 != 0) {
      lVar20 = (long)*(int *)&(pSVar6->_1).namespaze;
      uVar19 = 0;
      uVar24 = 1;
      pSVar28 = (System_Byte_array *)0x0;
      do {
        bVar4 = pSVar29->m_Items[uVar19];
        uVar22 = (uint)bVar4;
        uVar33 = (uint)iVar15;
        uVar31 = (uint)uVar24;
        uVar27 = (uint)pSVar28;
        if (bVar4 < 0x20) {
          if (lVar20 < (long)(ulong)(bVar4 + uVar27 + 1)) {
            return (System_Byte_array *)0x0;
          }
          if (uVar33 <= uVar31) break;
          while( true ) {
            pSVar6 = ((Il2CppClass_1 *)&pSVar12->obj)->image;
            if (pSVar6 == (System_Array_c *)0x0) goto label_04489b09;
            if ((System_Byte_array *)(ulong)*(uint *)&(pSVar6->_1).namespaze <= pSVar28) goto label_04489b04;
            pSVar28->m_Items[(long)pSVar6] = pSVar29->m_Items[uVar24];
            if (uVar22 == 0) break;
            pSVar28 = (System_Byte_array *)((long)&(pSVar28->obj).klass + 1);
            uVar24 = uVar24 + 1;
            uVar22 = uVar22 - 1;
            if ((uint)pSVar29->max_length <= (uint)uVar24) goto label_04489b04;
          }
          uVar31 = (uint)uVar24;
          iVar10 = (int)pSVar28;
        }
        else {
          uVar22 = (uint)(bVar4 >> 5);
          if (uVar22 == 7) {
            if (uVar33 <= uVar31) break;
            uVar31 = (int)uVar19 + 2;
            uVar22 = pSVar29->m_Items[uVar24] + 7;
          }
          if (uVar33 <= uVar31) break;
          if (lVar20 < (long)(ulong)(uVar27 + uVar22 + 2)) {
            return (System_Byte_array *)0x0;
          }
          uVar33 = ((~((uint)bVar4 << 8) | 0xffffe0ff) + uVar27) - (uint)pSVar29->m_Items[uVar31];
          if ((int)uVar33 < 0) {
            return (System_Byte_array *)0x0;
          }
          pSVar6 = ((Il2CppClass_1 *)&pSVar12->obj)->image;
          if (pSVar6 == (System_Array_c *)0x0) goto label_04489b09;
          uVar18 = *(uint *)&(pSVar6->_1).namespaze;
          if ((uVar18 <= uVar33) || (uVar18 <= uVar27)) break;
          pSVar28->m_Items[(long)pSVar6] =
               *(uint8_t *)((long)&(pSVar6->_1).byval_arg.data + (long)(int)uVar33);
          pSVar6 = ((Il2CppClass_1 *)&pSVar12->obj)->image;
          if (pSVar6 == (System_Array_c *)0x0) goto label_04489b09;
          uVar18 = *(uint *)&(pSVar6->_1).namespaze;
          if ((uVar18 <= uVar33 + 1) || (uVar18 <= uVar27 + 1)) break;
          uVar18 = uVar33 + 2;
          *(undefined1 *)((long)&(pSVar6->_1).byval_arg.data + (ulong)(uVar27 + 1)) =
               *(undefined1 *)((long)&(pSVar6->_1).byval_arg.data + (long)(int)(uVar33 + 1));
          uVar19 = (ulong)(uVar27 + 2);
          do {
            uVar24 = uVar19;
            pSVar6 = ((Il2CppClass_1 *)&pSVar12->obj)->image;
            if (pSVar6 == (System_Array_c *)0x0) goto label_04489b09;
            pcVar7 = (pSVar6->_1).namespaze;
            if (((uint)pcVar7 <= uVar18) || (((ulong)pcVar7 & 0xffffffff) <= uVar24)) goto label_04489b04;
            lVar25 = (long)(int)uVar18;
            uVar18 = uVar18 + 1;
            *(undefined1 *)((long)&(pSVar6->_1).byval_arg.data + uVar24) =
                 *(undefined1 *)((long)&(pSVar6->_1).byval_arg.data + lVar25);
            uVar22 = uVar22 - 1;
            uVar19 = uVar24 + 1;
          } while (uVar22 != 0);
          iVar10 = (int)uVar24;
        }
        uVar19 = (ulong)(uVar31 + 1);
        pSVar28 = (System_Byte_array *)(ulong)(iVar10 + 1);
        if ((long)iVar11 <= (long)uVar19) {
          return pSVar28;
        }
        iVar15 = pSVar29->max_length;
        uVar24 = (ulong)(uVar31 + 2);
      } while (uVar31 + 1 < (uint)iVar15);
    }
label_04489b04:
    il2cpp_runtime_helper_022b2ca0();
  }
label_04489b09:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae8d5 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLZF2);
    il2cpp_runtime_helper_023445d0(&TypeInfo_long);
    g_data_057ae8d5 = '\x01';
  }
  puVar8 = *(undefined4 **)((long)((Il2CppType *)TypeInfo_CLZF2->m_Items + 9) + 8);
  *puVar8 = 0xe;
  puVar8[1] = 0x4000;
  puVar8[2] = 0x20;
  puVar8[3] = 0x2000;
  puVar8[4] = 0x108;
  uVar16 = il2cpp_runtime_helper_022b2a40(TypeInfo_long,0x4000);
  lVar20 = *(long *)((long)((Il2CppType *)TypeInfo_CLZF2->m_Items + 9) + 8);
  *(undefined8 *)(lVar20 + 0x18) = uVar16;
  pSVar28 = (System_Byte_array *)il2cpp_runtime_helper_022b4080(lVar20 + 0x18,uVar16);
  return pSVar28;
  while( true ) {
    pSVar12 = ((Il2CppClass_1 *)&pSStack_98->obj)->image;
    if (pSVar12 == (System_Byte_array *)0x0) goto label_044897c7;
    unaff_R15 = (System_Byte_array *)((long)&((Il2CppClass_1 *)&pSVar13->obj)->image + 1);
    pSVar28 = (System_Byte_array *)(ulong)*(uint *)&pSVar12->max_length;
    if (pSVar28 <= unaff_R15) goto label_044897c2;
    ((undefined1 *)((long)&((Il2CppType *)pSVar12->m_Items)->data + 1))[(long)pSVar13] =
         *(undefined1 *)((long)&((Il2CppType *)pSVar32->m_Items)->data + lVar20);
    uVar31 = uVar31 + 1;
    pSVar13 = unaff_R15;
    if (uVar31 == 0) break;
label_04489370:
    unaff_R13 = (System_Byte_array *)(ulong)uVar31;
    lVar20 = (long)&((Il2CppClass_1 *)((Il2CppType *)pSVar26->m_Items + -2))->image + (long)(int)uVar31;
    method = (MethodInfo *)pSStack_98;
    if (*(uint *)&pSVar32->max_length <= (uint)lVar20) goto label_044897c2;
  }
  unaff_R15 = (System_Byte_array *)(ulong)((int)unaff_R15 + 1);
  goto label_044890db;
  while( true ) {
    uVar27 = uVar22 + iVar10;
    pSVar12 = (System_Byte_array *)(ulong)uVar27;
    if (*(uint *)&pSVar32->max_length <= uVar27) goto label_044897c2;
    uVar27 = iVar10 + uVar31 + 3;
    pSVar12 = (System_Byte_array *)(ulong)uVar27;
    if (*(uint *)&pSVar32->max_length <= uVar27) goto label_044897c2;
    pIVar9 = (Il2CppType *)pSVar28->m_Items;
    pSVar12 = (System_Byte_array *)(ulong)(iVar10 + 1);
    pSVar28 = (System_Byte_array *)((long)&((Il2CppClass_1 *)&pSVar28->obj)->image + 1);
    pSVar32 = pSStack_b0;
    cVar17 = cVar21 + ' ';
    if (*(char *)((long)&pIVar9->data + (long)((Il2CppType *)pSVar23->m_Items + -4)) !=
        *(char *)((long)&((Il2CppType *)pSStack_b0->m_Items)->data + (long)(int)uVar27)) break;
label_04489450:
    cVar21 = cVar17;
    pSStack_a0 = pSVar12;
    iVar10 = (int)pSStack_a0;
    pSVar12 = pSStack_a0;
    pSVar34 = pSStack_a0;
    if ((undefined1 *)(ulong)uVar33 <= pSVar28[-1].m_Items + 0xffe0) break;
  }
  method = (MethodInfo *)pSStack_98;
  pSVar29 = pSVar23;
  if (iVar11 == 0) {
    pSVar6 = ((Il2CppClass_1 *)&pSStack_98->obj)->image;
  }
  else {
    pSVar6 = ((Il2CppClass_1 *)&pSStack_98->obj)->image;
    if (pSVar6 == (System_Array_c *)0x0) goto label_044897c7;
    if (*(uint *)&(pSVar6->_1).namespaze <= (uint)unaff_R15) goto label_044897c2;
    *(char *)((long)&(pSVar6->_1).byval_arg.data + uVar19) = (char)unaff_R13 + -1;
    unaff_R13 = (System_Byte_array *)(ulong)(uint)-iVar11;
    lVar20 = uVar19 + 0x21;
    do {
      lVar25 = (long)&((Il2CppClass_1 *)((Il2CppType *)unaff_RBP->m_Items + -2))->image + (long)(int)unaff_R13
      ;
      if (*(uint *)&pSVar32->max_length <= (uint)lVar25) goto label_044897c2;
      pSVar12 = ((Il2CppClass_1 *)&pSStack_98->obj)->image;
      if (pSVar12 == (System_Byte_array *)0x0) goto label_044897c7;
      pSVar28 = (System_Byte_array *)(ulong)*(uint *)&pSVar12->max_length;
      if (pSVar28 <= (System_Byte_array *)(lVar20 + -0x20)) goto label_044897c2;
      *(undefined1 *)((long)&((Il2CppClass_1 *)((Il2CppType *)pSVar12->m_Items + -2))->image + lVar20) =
           *(undefined1 *)((long)&((Il2CppType *)pSVar32->m_Items)->data + lVar25);
      lVar20 = lVar20 + 1;
      uVar33 = (int)unaff_R13 + 1;
      unaff_R13 = (System_Byte_array *)(ulong)uVar33;
    } while (uVar33 != 0);
    unaff_R15 = (System_Byte_array *)(ulong)((int)lVar20 - 0x20);
    pSVar6 = ((Il2CppClass_1 *)&pSStack_98->obj)->image;
  }
  if (pSVar6 == (System_Array_c *)0x0) goto label_044897c7;
  uVar22 = (uint)unaff_R15;
  uVar27 = uVar22 + 1;
  pSVar13 = (System_Byte_array *)(ulong)uVar27;
  pSVar12 = (System_Byte_array *)((ulong)unaff_R15 & 0xffffffff);
  uVar33 = *(uint *)&(pSVar6->_1).namespaze;
  pSVar28 = (System_Byte_array *)(ulong)uVar33;
  cVar17 = (char)((ulong)unaff_R12 >> 8);
  if (iVar10 + 1U < 7) {
    if (uVar33 <= uVar22) goto label_044897c2;
    *(char *)((long)&(pSVar6->_1).image + (long)&((Il2CppType *)pSVar12->m_Items)->data) = cVar17 + cVar21;
    pSVar6 = ((Il2CppClass_1 *)&pSStack_98->obj)->image;
  }
  else {
    if (uVar33 <= uVar22) goto label_044897c2;
    *(char *)((long)&(pSVar6->_1).image + (long)&((Il2CppType *)pSVar12->m_Items)->data) = cVar17 + -0x20;
    pSVar6 = ((Il2CppClass_1 *)&pSStack_98->obj)->image;
    if (pSVar6 == (System_Array_c *)0x0) goto label_044897c7;
    if (*(uint *)&(pSVar6->_1).namespaze <= uVar27) goto label_044897c2;
    pSVar13 = (System_Byte_array *)(ulong)(uVar22 + 2);
    *(char *)((long)&(pSVar6->_1).byval_arg.data + (ulong)uVar27) = (char)pSStack_a0 + -6;
    pSVar6 = ((Il2CppClass_1 *)&pSStack_98->obj)->image;
    unaff_R15 = pSVar13;
  }
  if (pSVar6 == (System_Array_c *)0x0) goto label_044897c7;
  if (*(uint *)&(pSVar6->_1).namespaze <= (uint)pSVar13) goto label_044897c2;
  *(char *)((long)&(pSVar6->_1).image + (long)&((Il2CppType *)pSVar13->m_Items)->data) = (char)unaff_R12;
  uVar22 = iVar10 + uVar31 + 1;
  unaff_R12 = (undefined8 *)(ulong)uVar22;
  uVar33 = *(uint *)&pSVar32->max_length;
  if (uVar33 <= uVar22) goto label_044897c2;
  uVar22 = iVar10 + uVar31 + 2;
  unaff_R15 = (System_Byte_array *)(ulong)uVar22;
  if (uVar33 <= uVar22) goto label_044897c2;
  uVar27 = iVar10 + uVar31 + 3;
  pSVar26 = (System_Byte_array *)(ulong)uVar27;
  pSVar34 = pSVar26;
  pSVar23 = pSStack_a0;
  if (uVar33 <= uVar27) goto label_044897c2;
  bVar4 = *(byte *)((long)unaff_R12 + (long)&((Il2CppType *)pSVar32->m_Items)->data);
  bVar2 = *(byte *)((long)&((Il2CppType *)pSVar32->m_Items)->data + (long)(int)uVar22);
  pSVar12 = (System_Byte_array *)(ulong)bVar2;
  bVar3 = *(byte *)((long)&((Il2CppType *)pSVar32->m_Items)->data + (long)(int)uVar27);
  method = (MethodInfo *)&TypeInfo_CLZF2;
  uVar33 = (uint)bVar3;
  if (*(int *)((long)((Il2CppType *)TypeInfo_CLZF2->m_Items + 0xc) + 4) == 0) {
    pSStack_88 = (System_Byte_array *)CONCAT44(pSStack_88._4_4_,(uint)pSVar13);
    uStack_74 = (uint)bVar3;
    uStack_78 = (uint)bVar2;
    pSStack_b8 = (System_Byte_array *)0x4489653;
    il2cpp_runtime_helper_02337ed0();
    pSVar12 = (System_Byte_array *)(ulong)uStack_78;
    pSVar13 = (System_Byte_array *)((ulong)pSStack_88 & 0xffffffff);
    pSVar32 = pSStack_b0;
    uVar33 = uStack_74;
  }
  puVar8 = *(undefined4 **)((long)((Il2CppType *)TypeInfo_CLZF2->m_Items + 9) + 8);
  lVar20 = *(long *)(puVar8 + 6);
  pSVar28 = TypeInfo_CLZF2;
  unaff_R13 = (System_Byte_array *)(ulong)bVar4;
  pSVar29 = pSStack_a0;
  if (lVar20 == 0) goto label_044897c7;
  uVar27 = ((uint)bVar4 << 8 | (uint)pSVar12) << 8 | uVar33;
  unaff_R13 = (System_Byte_array *)(ulong)uVar27;
  cVar17 = '\x18' - (char)*puVar8;
  uVar22 = puVar8[1] - 1;
  pSVar12 = (System_Byte_array *)(ulong)uVar22;
  uVar33 = (uVar27 << 5 ^ uVar27) >> (cVar17 + (char)uVar33 * -5 & 0x1fU) & uVar22;
  pSVar28 = (System_Byte_array *)(ulong)uVar33;
  pSVar23 = pSStack_a0;
  if (*(uint *)(lVar20 + 0x18) <= uVar33) goto label_044897c2;
  *(undefined8 **)(lVar20 + 0x20 + (long)(int)uVar33 * 8) = unaff_R12;
  uVar31 = (int)pSStack_a0 + uVar31 + 4;
  if (*(uint *)&pSVar32->max_length <= uVar31) goto label_044897c2;
  bVar4 = *(byte *)((long)&((Il2CppType *)pSVar32->m_Items)->data + (long)(int)uVar31);
  uVar31 = uVar27 << 8 | (uint)bVar4;
  method = (MethodInfo *)(ulong)uVar31;
  uVar22 = (uVar31 << 5 ^ uVar31) >> (cVar17 + bVar4 * -5 & 0x1f) & uVar22;
  pSVar28 = (System_Byte_array *)(ulong)uVar22;
  unaff_R12 = &TypeInfo_CLZF2;
  pSVar23 = (System_Byte_array *)method;
  if (*(uint *)(lVar20 + 0x18) <= uVar22) goto label_044897c2;
  *(System_Byte_array **)(lVar20 + 0x20 + (long)(int)uVar22 * 8) = unaff_R15;
  unaff_R15 = (System_Byte_array *)(ulong)((int)pSVar13 + 1);
  pSVar34 = pSStack_a8;
  pSStack_a0 = (System_Byte_array *)method;
  goto label_044890db;
label_04489770:
  unaff_R13 = (System_Byte_array *)(ulong)uVar31;
  lVar25 = (long)&((Il2CppClass_1 *)((Il2CppType *)pSStack_80->m_Items + -2))->image + (long)(int)uVar31;
  if (*(uint *)&pSVar32->max_length <= (uint)lVar25) goto label_044897c2;
  pSVar6 = ((Il2CppClass_1 *)&pSStack_98->obj)->image;
  if (pSVar6 == (System_Array_c *)0x0) goto label_044897c7;
  pSVar12 = (System_Byte_array *)(lVar20 + -0x20);
  pSVar28 = (System_Byte_array *)(ulong)*(uint *)&(pSVar6->_1).namespaze;
  if (pSVar28 <= pSVar12) goto label_044897c2;
  *(undefined1 *)((long)&(pSVar6->_1).image + lVar20) =
       *(undefined1 *)((long)&((Il2CppType *)pSVar32->m_Items)->data + lVar25);
  lVar20 = lVar20 + 1;
  uVar31 = uVar31 + 1;
  if (uVar31 == 0) {
    return (System_Byte_array *)(ulong)((int)lVar20 - 0x20);
  }
  goto label_04489770;
}


// Utility.CLZF2$$Decompress
// il2cpp: System_Byte_array* Utility_CLZF2__Decompress (System_Byte_array* inputBytes, const MethodInfo* method);
// 0x44897d0

System_Byte_array * Utility_CLZF2__Decompress(System_Byte_array *inputBytes,MethodInfo *method)

{
  byte bVar1;
  Il2CppMethodPointer pIVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  System_Byte_array *pSVar6;
  il2cpp_array_size_t iVar7;
  undefined8 uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  ulong uVar13;
  long lVar14;
  System_Byte_array *pSVar15;
  long lVar16;
  uint uVar17;
  ulong uVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  System_Byte_array *pSStack_38;
  
  pSVar15 = inputBytes;
  if (g_data_057ae8d3 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_byte);
    pSVar15 = (System_Byte_array *)&TypeInfo_CLZF2;
    il2cpp_runtime_helper_023445d0();
    g_data_057ae8d3 = '\x01';
  }
  pSStack_38 = (System_Byte_array *)0x0;
  if (inputBytes != (System_Byte_array *)0x0) {
    iVar5 = (int)inputBytes->max_length * 2;
    auVar19 = il2cpp_runtime_helper_022b2a40(TypeInfo_byte,iVar5);
    pSVar15 = auVar19._0_8_;
    if (*(int *)(TypeInfo_CLZF2 + 0xe4) == 0) {
      pSStack_38 = pSVar15;
      il2cpp_runtime_helper_02337ed0();
      auVar19._8_8_ = extraout_RDX;
      auVar19._0_8_ = pSStack_38;
    }
    pSStack_38 = auVar19._0_8_;
    iVar4 = Utility_CLZF2__lzf_decompress(inputBytes,&pSStack_38,auVar19._8_8_);
    while (iVar4 == 0) {
      iVar5 = iVar5 * 2;
      auVar20 = il2cpp_runtime_helper_022b2a40(TypeInfo_byte,iVar5);
      pSVar15 = auVar20._0_8_;
      if (*(int *)(TypeInfo_CLZF2 + 0xe4) == 0) {
        pSStack_38 = pSVar15;
        il2cpp_runtime_helper_02337ed0();
        auVar20._8_8_ = extraout_RDX_00;
        auVar20._0_8_ = pSStack_38;
      }
      pSStack_38 = auVar20._0_8_;
      iVar4 = Utility_CLZF2__lzf_decompress(inputBytes,&pSStack_38,auVar20._8_8_);
    }
    pSVar6 = (System_Byte_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_byte);
    System_Buffer__BlockCopy((System_Array_o *)pSVar15,0,(System_Array_o *)pSVar6,0,iVar4,(MethodInfo *)0x0);
    return pSVar6;
  }
  il2cpp_runtime_helper_022b2c90();
  if ((pSVar15 != (System_Byte_array *)0x0) && (method->methodPointer != (Il2CppMethodPointer)0x0)) {
    iVar7 = pSVar15->max_length;
    iVar5 = (int)iVar7;
    if (iVar5 != 0) {
      lVar16 = (long)*(int *)(method->methodPointer + 0x18);
      uVar18 = 0;
      uVar13 = 1;
      pSVar6 = (System_Byte_array *)0x0;
      do {
        bVar1 = pSVar15->m_Items[uVar18];
        uVar9 = (uint)bVar1;
        uVar10 = (uint)iVar7;
        uVar17 = (uint)uVar13;
        uVar12 = (uint)pSVar6;
        if (bVar1 < 0x20) {
          if (lVar16 < (long)(ulong)(bVar1 + uVar12 + 1)) {
            return (System_Byte_array *)0x0;
          }
          if (uVar10 <= uVar17) break;
          while( true ) {
            pIVar2 = method->methodPointer;
            if (pIVar2 == (Il2CppMethodPointer)0x0) goto label_04489b09;
            if ((System_Byte_array *)(ulong)*(uint *)(pIVar2 + 0x18) <= pSVar6) goto label_04489b04;
            pSVar6->m_Items[(long)pIVar2] = pSVar15->m_Items[uVar13];
            if (uVar9 == 0) break;
            pSVar6 = (System_Byte_array *)((long)&(pSVar6->obj).klass + 1);
            uVar13 = uVar13 + 1;
            uVar9 = uVar9 - 1;
            if ((uint)pSVar15->max_length <= (uint)uVar13) goto label_04489b04;
          }
          uVar17 = (uint)uVar13;
          iVar4 = (int)pSVar6;
        }
        else {
          uVar9 = (uint)(bVar1 >> 5);
          if (uVar9 == 7) {
            if (uVar10 <= uVar17) break;
            uVar17 = (int)uVar18 + 2;
            uVar9 = pSVar15->m_Items[uVar13] + 7;
          }
          if (uVar10 <= uVar17) break;
          if (lVar16 < (long)(ulong)(uVar12 + uVar9 + 2)) {
            return (System_Byte_array *)0x0;
          }
          uVar10 = ((~((uint)bVar1 << 8) | 0xffffe0ff) + uVar12) - (uint)pSVar15->m_Items[uVar17];
          if ((int)uVar10 < 0) {
            return (System_Byte_array *)0x0;
          }
          pIVar2 = method->methodPointer;
          if (pIVar2 == (Il2CppMethodPointer)0x0) goto label_04489b09;
          if ((*(uint *)(pIVar2 + 0x18) <= uVar10) || (*(uint *)(pIVar2 + 0x18) <= uVar12)) break;
          pSVar6->m_Items[(long)pIVar2] = (uint8_t)pIVar2[(long)(int)uVar10 + 0x20];
          pIVar2 = method->methodPointer;
          if (pIVar2 == (Il2CppMethodPointer)0x0) goto label_04489b09;
          if ((*(uint *)(pIVar2 + 0x18) <= uVar10 + 1) || (*(uint *)(pIVar2 + 0x18) <= uVar12 + 1)) break;
          uVar11 = uVar10 + 2;
          pIVar2[(ulong)(uVar12 + 1) + 0x20] = pIVar2[(long)(int)(uVar10 + 1) + 0x20];
          uVar18 = (ulong)(uVar12 + 2);
          do {
            uVar13 = uVar18;
            pIVar2 = method->methodPointer;
            if (pIVar2 == (Il2CppMethodPointer)0x0) goto label_04489b09;
            if (((uint)*(ulong *)(pIVar2 + 0x18) <= uVar11) ||
               ((*(ulong *)(pIVar2 + 0x18) & 0xffffffff) <= uVar13)) goto label_04489b04;
            lVar14 = (long)(int)uVar11;
            uVar11 = uVar11 + 1;
            pIVar2[uVar13 + 0x20] = pIVar2[lVar14 + 0x20];
            uVar9 = uVar9 - 1;
            uVar18 = uVar13 + 1;
          } while (uVar9 != 0);
          iVar4 = (int)uVar13;
        }
        uVar18 = (ulong)(uVar17 + 1);
        pSVar6 = (System_Byte_array *)(ulong)(iVar4 + 1);
        if ((long)iVar5 <= (long)uVar18) {
          return pSVar6;
        }
        iVar7 = pSVar15->max_length;
        uVar13 = (ulong)(uVar17 + 2);
      } while (uVar17 + 1 < (uint)iVar7);
    }
label_04489b04:
    il2cpp_runtime_helper_022b2ca0();
  }
label_04489b09:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae8d5 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLZF2);
    il2cpp_runtime_helper_023445d0(&TypeInfo_long);
    g_data_057ae8d5 = '\x01';
  }
  puVar3 = *(undefined4 **)(TypeInfo_CLZF2 + 0xb8);
  *puVar3 = 0xe;
  puVar3[1] = 0x4000;
  puVar3[2] = 0x20;
  puVar3[3] = 0x2000;
  puVar3[4] = 0x108;
  uVar8 = il2cpp_runtime_helper_022b2a40(TypeInfo_long,0x4000);
  lVar16 = *(long *)(TypeInfo_CLZF2 + 0xb8);
  *(undefined8 *)(lVar16 + 0x18) = uVar8;
  pSVar15 = (System_Byte_array *)il2cpp_runtime_helper_022b4080(lVar16 + 0x18,uVar8);
  return pSVar15;
}


// Utility.CLZF2$$lzf_compress
// il2cpp: int32_t Utility_CLZF2__lzf_compress (System_Byte_array* input, System_Byte_array** output, const MethodInfo* method);
// 0x4488fe0

int32_t Utility_CLZF2__lzf_compress(System_Byte_array *input,System_Byte_array **output,MethodInfo *method)

{
  undefined1 *puVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  System_Array_c *pSVar5;
  void *pvVar6;
  char *pcVar7;
  undefined4 *puVar8;
  Il2CppType *pIVar9;
  int iVar10;
  int iVar11;
  int32_t iVar12;
  System_Byte_array *pSVar13;
  int *piVar14;
  System_Array_o *dst;
  il2cpp_array_size_t iVar15;
  undefined8 uVar16;
  char cVar17;
  uint uVar18;
  ulong uVar19;
  long lVar20;
  char cVar21;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  ulong uVar22;
  uint uVar23;
  ulong uVar25;
  long lVar26;
  System_Byte_array *unaff_RBP;
  System_Byte_array *pSVar27;
  uint uVar28;
  System_Byte_array *pSVar29;
  System_Byte_array *input_00;
  System_Byte_array *pSVar30;
  undefined8 *puVar31;
  uint uVar32;
  System_Byte_array *pSVar33;
  undefined8 *unaff_R12;
  System_Byte_array *unaff_R13;
  uint uVar34;
  System_Byte_array *unaff_R14;
  System_Byte_array *unaff_R15;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  System_Byte_array *local_b0;
  System_Byte_array *pSStack_a8;
  undefined8 *puStack_a0;
  System_Byte_array *pSStack_98;
  System_Byte_array *pSStack_90;
  System_Byte_array *pSStack_88;
  System_Byte_array *pSStack_80;
  System_Byte_array *local_78;
  System_Byte_array *local_70;
  System_Byte_array *local_68;
  System_Byte_array *local_60;
  long local_58;
  System_Byte_array *local_50;
  System_Byte_array *local_48;
  uint local_40;
  uint local_3c;
  System_Byte_array *local_38;
  System_Byte_array *pSVar24;
  
  pSVar29 = (System_Byte_array *)output;
  local_78 = input;
  if (g_data_057ae8d4 == '\0') {
    pSStack_80 = (System_Byte_array *)0x448900a;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_lzf_compress);
    pSStack_80 = (System_Byte_array *)0x4489016;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLZF2);
    g_data_057ae8d4 = '\x01';
  }
  input_00 = local_78;
  pSVar30 = local_68;
  if ((local_78 != (System_Byte_array *)0x0) &&
     (local_60 = (System_Byte_array *)output, *output != (System_Byte_array *)0x0)) {
    unaff_RBP = (System_Byte_array *)local_78->max_length;
    pSVar30 = (System_Byte_array *)(*output)->max_length;
    unaff_R12 = &TypeInfo_CLZF2;
    if (*(int *)((long)((Il2CppType *)TypeInfo_CLZF2->m_Items + 0xc) + 4) == 0) {
      pSStack_80 = (System_Byte_array *)0x448905c;
      il2cpp_runtime_helper_02337ed0();
    }
    input_00 = *(System_Byte_array **)(*(long *)((long)((Il2CppType *)TypeInfo_CLZF2->m_Items + 9) + 8) + 0x18);
    pSVar29 = (System_Byte_array *)0x0;
    pSStack_80 = (System_Byte_array *)0x4489077;
    System_Array__Clear((System_Array_o *)input_00,0,
                        *(int32_t *)(*(long *)((long)((Il2CppType *)TypeInfo_CLZF2->m_Items + 9) + 8) + 4),
                        (MethodInfo *)0x0);
    output = (System_Byte_array **)pSVar30;
    pSVar24 = local_68;
    if ((*(int *)&local_78->max_length != 1) && (*(int *)&local_78->max_length != 0)) {
      local_70 = (System_Byte_array *)(((long)unaff_RBP << 0x20) + -0x200000000 >> 0x20);
      local_48 = (System_Byte_array *)(long)(int)unaff_RBP;
      local_58 = (long)(int)pSVar30;
      unaff_R15 = (System_Byte_array *)0x0;
      pSVar27 = (System_Byte_array *)0x0;
      pSVar33 = local_78;
      unaff_R14 = local_70;
      local_68 = (System_Byte_array *)
                 (ulong)CONCAT11(*(undefined1 *)&((Il2CppType *)local_78->m_Items)->data,
                                 *(undefined1 *)((long)&((Il2CppType *)local_78->m_Items)->data + 1));
      local_38 = unaff_RBP;
label_044890db:
      output = (System_Byte_array **)0x0;
      unaff_RBP = pSVar27;
      unaff_R13 = (System_Byte_array *)output;
      local_50 = unaff_R15;
      if ((long)pSVar27 < (long)unaff_R14) goto label_04489134;
      while( true ) {
        unaff_R12 = &TypeInfo_CLZF2;
        iVar11 = (int)output;
        unaff_R13 = (System_Byte_array *)output;
        if (local_48 == pSVar27) break;
        iVar10 = *(int *)((long)((Il2CppType *)TypeInfo_CLZF2->m_Items + 0xc) + 4);
        unaff_RBP = pSVar27;
        input_00 = TypeInfo_CLZF2;
        while( true ) {
          output = (System_Byte_array **)(ulong)(iVar11 + 1U);
          if (iVar10 == 0) {
            pSStack_80 = (System_Byte_array *)0x4489105;
            il2cpp_runtime_helper_02337ed0();
            input_00 = TypeInfo_CLZF2;
            pSVar33 = local_78;
          }
          pSVar30 = local_60;
          unaff_R12 = &TypeInfo_CLZF2;
          pSVar27 = (System_Byte_array *)(ulong)((int)unaff_RBP + 1);
          uVar32 = *(uint *)(*(long *)((long)((Il2CppType *)input_00->m_Items + 9) + 8) + 8);
          unaff_RBP = pSVar27;
          if ((long)(int)(iVar11 + 1U) == (ulong)uVar32) {
            if (*(int *)((long)((Il2CppType *)input_00->m_Items + 0xc) + 4) == 0) {
              pSStack_80 = (System_Byte_array *)0x44892f3;
              il2cpp_runtime_helper_02337ed0();
              uVar32 = *(uint *)(*(long *)((long)((Il2CppType *)TypeInfo_CLZF2->m_Items + 9) + 8) + 8);
              input_00 = TypeInfo_CLZF2;
              pSVar33 = local_78;
            }
            if (local_58 <= (long)(ulong)((uint)unaff_R15 + uVar32 + 1)) {
              return 0;
            }
            output = (System_Byte_array **)(pSVar30->obj).klass;
            if (*(int *)((long)((Il2CppType *)input_00->m_Items + 0xc) + 4) == 0) {
              pSStack_80 = (System_Byte_array *)0x4489328;
              il2cpp_runtime_helper_02337ed0();
              pSVar33 = local_78;
            }
            pSVar30 = local_68;
            if ((System_Byte_array *)output == (System_Byte_array *)0x0) goto label_044897c7;
            pSVar24 = local_68;
            if (*(uint *)&((System_Byte_array *)output)->max_length <= (uint)unaff_R15) goto label_044897c2;
            *(char *)((long)&((Il2CppType *)((System_Byte_array *)((ulong)unaff_R15 & 0xffffffff))->m_Items)->
                             data + (long)((Il2CppType *)((System_Byte_array *)output)->m_Items + -2)) =
                 *(char *)(*(long *)((long)((Il2CppType *)TypeInfo_CLZF2->m_Items + 9) + 8) + 8) + -1;
            uVar32 = ~(uint)unaff_R13;
            pSVar13 = (System_Byte_array *)((ulong)unaff_R15 & 0xffffffff);
            goto label_04489370;
          }
          unaff_R13 = (System_Byte_array *)output;
          if ((long)unaff_R14 <= (long)pSVar27) break;
label_04489134:
          unaff_R12 = &TypeInfo_CLZF2;
          uVar32 = (uint)unaff_RBP;
          uVar34 = uVar32 + 2;
          unaff_R14 = (System_Byte_array *)(ulong)uVar34;
          output = (System_Byte_array **)local_68;
          pSVar24 = local_68;
          if (*(uint *)&pSVar33->max_length <= uVar34) goto label_044897c2;
          puVar31 = (undefined8 *)(long)(int)uVar34;
          uVar23 = (int)local_68 << 8 |
                   (uint)*(byte *)((long)puVar31 + (long)&((Il2CppType *)pSVar33->m_Items)->data);
          pSVar24 = (System_Byte_array *)(ulong)uVar23;
          if (*(int *)((long)((Il2CppType *)TypeInfo_CLZF2->m_Items + 0xc) + 4) == 0) {
            pSStack_80 = (System_Byte_array *)0x448916d;
            il2cpp_runtime_helper_02337ed0();
            pSVar33 = local_78;
            unaff_R12 = puVar31;
            unaff_R15 = local_50;
          }
          input_00 = TypeInfo_CLZF2;
          piVar14 = *(int **)((long)((Il2CppType *)TypeInfo_CLZF2->m_Items + 9) + 8);
          uVar28 = uVar23 * 5 + *piVar14;
          pSVar29 = (System_Byte_array *)(ulong)uVar28;
          lVar20 = *(long *)(piVar14 + 6);
          output = (System_Byte_array **)pSVar24;
          pSVar30 = local_68;
          if (lVar20 == 0) goto label_044897c7;
          pSVar29 = (System_Byte_array *)(ulong)(piVar14[1] - 1U);
          uVar23 = (uVar23 << 5 ^ uVar23) >> (0x18U - (char)uVar28 & 0x1f) & piVar14[1] - 1U;
          if (*(uint *)(lVar20 + 0x18) <= uVar23) goto label_044897c2;
          output = *(System_Byte_array ***)(lVar20 + 0x20 + (ulong)uVar23 * 8);
          *(System_Byte_array **)(lVar20 + 0x20 + (ulong)uVar23 * 8) = unaff_RBP;
          unaff_R12 = (undefined8 *)
                      ((long)&((Il2CppClass_1 *)((Il2CppType *)unaff_RBP->m_Items + -2))->image +
                      ~(ulong)output);
          iVar11 = (int)unaff_R13;
          local_68 = pSVar24;
          if ((((long)unaff_R12 < (long)(ulong)(uint)piVar14[3]) &&
              ((long)(ulong)(uVar32 + 4) < (long)local_48)) && (0 < (long)output)) {
            uVar23 = *(uint *)&pSVar33->max_length;
            if ((uVar23 <= (uint)output) || (uVar23 <= uVar32)) goto label_044897c2;
            if (*(char *)((long)&((Il2CppType *)((System_Byte_array *)output)->m_Items)->data +
                         (long)((Il2CppType *)pSVar33->m_Items + -2)) !=
                *(char *)((long)&((Il2CppType *)unaff_RBP->m_Items)->data +
                         (long)((Il2CppType *)pSVar33->m_Items + -2))) goto label_044892b0;
            puVar1 = (undefined1 *)((long)&((Il2CppClass_1 *)&((System_Byte_array *)output)->obj)->image + 1);
            if (uVar23 <= (uint)puVar1) goto label_044897c2;
            uVar28 = uVar32 + 1;
            pSVar29 = (System_Byte_array *)(ulong)uVar28;
            if (uVar23 <= uVar28) goto label_044897c2;
            pSVar29 = (System_Byte_array *)(long)(int)uVar28;
            if (puVar1[(long)&((Il2CppType *)pSVar33->m_Items)->data] !=
                *(char *)((long)&((Il2CppType *)pSVar29->m_Items)->data +
                         (long)((Il2CppType *)pSVar33->m_Items + -2))) goto label_044892b0;
            puVar1 = (undefined1 *)((long)&((Il2CppClass_1 *)&((System_Byte_array *)output)->obj)->image + 2);
            if ((uVar23 <= (uint)puVar1) || (uVar23 <= uVar34)) goto label_044897c2;
            if (puVar1[(long)&((Il2CppType *)pSVar33->m_Items)->data] ==
                *(char *)((long)puVar31 + (long)&((Il2CppType *)pSVar33->m_Items)->data)) {
              uVar34 = ((int)local_38 - uVar32) - 2;
              if (*(int *)((long)((Il2CppType *)input_00->m_Items + 0xc) + 4) == 0) {
                pSStack_80 = (System_Byte_array *)0x44893d4;
                il2cpp_runtime_helper_02337ed0();
                piVar14 = *(int **)((long)((Il2CppType *)TypeInfo_CLZF2->m_Items + 9) + 8);
                input_00 = TypeInfo_CLZF2;
                pSVar33 = local_78;
              }
              if (((uint)piVar14[4] < uVar34) &&
                 (uVar34 = piVar14[4], *(int *)((long)((Il2CppType *)input_00->m_Items + 0xc) + 4) == 0)) {
                pSStack_80 = (System_Byte_array *)0x4489402;
                il2cpp_runtime_helper_02337ed0();
                uVar34 = *(uint *)(*(long *)((long)((Il2CppType *)TypeInfo_CLZF2->m_Items + 9) + 8) + 0x10);
                pSVar33 = local_78;
              }
              uVar19 = (ulong)unaff_R15 & 0xffffffff;
              if (local_58 <= (long)((long)iVar11 + uVar19 + 4)) {
                return 0;
              }
              pSVar24 = (System_Byte_array *)
                        ((long)&((Il2CppType *)((System_Byte_array *)output)->m_Items)->data +
                        (long)((Il2CppType *)pSVar33->m_Items + -4));
              uVar23 = (uint)output + 3;
              output = (System_Byte_array **)(ulong)uVar23;
              input_00 = (System_Byte_array *)&g_data_00000023;
              pSVar29 = (System_Byte_array *)0x0;
              cVar17 = ' ';
              goto label_04489450;
            }
            iVar10 = *(int *)((long)((Il2CppType *)input_00->m_Items + 0xc) + 4);
            unaff_R14 = local_70;
          }
          else {
label_044892b0:
            iVar10 = *(int *)((long)((Il2CppType *)input_00->m_Items + 0xc) + 4);
            unaff_R14 = local_70;
          }
        }
      }
      if (iVar11 == 0) {
        return (uint)unaff_R15;
      }
      uVar19 = (ulong)unaff_R15 & 0xffffffff;
      if (local_58 <= (long)((long)iVar11 + uVar19 + 1)) {
        return 0;
      }
      pvVar6 = ((Il2CppClass_1 *)&local_60->obj)->image;
      unaff_RBP = local_60;
      pSVar30 = local_68;
      if (pvVar6 == (void *)0x0) goto label_044897c7;
      pSVar24 = local_68;
      if ((uint)unaff_R15 < *(uint *)((long)pvVar6 + 0x18)) {
        *(char *)((long)pvVar6 + uVar19 + 0x20) = (char)output + -1;
        uVar32 = -iVar11;
        lVar20 = uVar19 + 0x21;
        goto label_04489770;
      }
    }
label_044897c2:
    local_68 = pSVar24;
    pSStack_80 = (System_Byte_array *)0x44897c7;
    il2cpp_runtime_helper_022b2ca0();
    pSVar30 = local_68;
  }
label_044897c7:
  local_68 = pSVar30;
  pSStack_80 = (System_Byte_array *)0x44897cc;
  local_b0 = (System_Byte_array *)il2cpp_runtime_helper_022b2c90();
  pSVar30 = input_00;
  pSStack_a8 = (System_Byte_array *)output;
  puStack_a0 = unaff_R12;
  pSStack_98 = unaff_R13;
  pSStack_90 = unaff_R14;
  pSStack_88 = unaff_R15;
  pSStack_80 = unaff_RBP;
  if (g_data_057ae8d3 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_byte);
    pSVar30 = (System_Byte_array *)&TypeInfo_CLZF2;
    il2cpp_runtime_helper_023445d0();
    g_data_057ae8d3 = '\x01';
  }
  local_b0 = (System_Byte_array *)0x0;
  if (input_00 != (System_Byte_array *)0x0) {
    iVar11 = (int)input_00->max_length * 2;
    auVar35 = il2cpp_runtime_helper_022b2a40(TypeInfo_byte,iVar11);
    pSVar29 = auVar35._0_8_;
    if (*(int *)((long)((Il2CppType *)TypeInfo_CLZF2->m_Items + 0xc) + 4) == 0) {
      local_b0 = pSVar29;
      il2cpp_runtime_helper_02337ed0();
      auVar35._8_8_ = extraout_RDX;
      auVar35._0_8_ = local_b0;
    }
    local_b0 = auVar35._0_8_;
    iVar10 = Utility_CLZF2__lzf_decompress(input_00,&local_b0,auVar35._8_8_);
    while (iVar10 == 0) {
      iVar11 = iVar11 * 2;
      auVar36 = il2cpp_runtime_helper_022b2a40(TypeInfo_byte,iVar11);
      pSVar29 = auVar36._0_8_;
      if (*(int *)((long)((Il2CppType *)TypeInfo_CLZF2->m_Items + 0xc) + 4) == 0) {
        local_b0 = pSVar29;
        il2cpp_runtime_helper_02337ed0();
        auVar36._8_8_ = extraout_RDX_00;
        auVar36._0_8_ = local_b0;
      }
      local_b0 = auVar36._0_8_;
      iVar10 = Utility_CLZF2__lzf_decompress(input_00,&local_b0,auVar36._8_8_);
    }
    dst = (System_Array_o *)il2cpp_runtime_helper_022b2a40(TypeInfo_byte);
    System_Buffer__BlockCopy((System_Array_o *)pSVar29,0,dst,0,iVar10,(MethodInfo *)0x0);
    return (int32_t)dst;
  }
  il2cpp_runtime_helper_022b2c90();
  if ((pSVar30 != (System_Byte_array *)0x0) &&
     (pSVar5 = ((Il2CppClass_1 *)&pSVar29->obj)->image, pSVar5 != (System_Array_c *)0x0)) {
    iVar15 = pSVar30->max_length;
    iVar11 = (int)iVar15;
    if (iVar11 != 0) {
      lVar20 = (long)*(int *)&(pSVar5->_1).namespaze;
      uVar19 = 0;
      uVar25 = 1;
      uVar22 = 0;
      do {
        bVar4 = pSVar30->m_Items[uVar19];
        uVar23 = (uint)bVar4;
        uVar34 = (uint)iVar15;
        uVar32 = (uint)uVar25;
        uVar28 = (uint)uVar22;
        if (bVar4 < 0x20) {
          if (lVar20 < (long)(ulong)(bVar4 + uVar28 + 1)) {
            return 0;
          }
          if (uVar34 <= uVar32) break;
          while( true ) {
            pSVar5 = ((Il2CppClass_1 *)&pSVar29->obj)->image;
            if (pSVar5 == (System_Array_c *)0x0) goto label_04489b09;
            if (*(uint *)&(pSVar5->_1).namespaze <= uVar22) goto label_04489b04;
            *(uint8_t *)((long)&(pSVar5->_1).byval_arg.data + uVar22) = pSVar30->m_Items[uVar25];
            if (uVar23 == 0) break;
            uVar22 = uVar22 + 1;
            uVar25 = uVar25 + 1;
            uVar23 = uVar23 - 1;
            if ((uint)pSVar30->max_length <= (uint)uVar25) goto label_04489b04;
          }
          uVar32 = (uint)uVar25;
          iVar10 = (int)uVar22;
        }
        else {
          uVar23 = (uint)(bVar4 >> 5);
          if (uVar23 == 7) {
            if (uVar34 <= uVar32) break;
            uVar32 = (int)uVar19 + 2;
            uVar23 = pSVar30->m_Items[uVar25] + 7;
          }
          if (uVar34 <= uVar32) break;
          if (lVar20 < (long)(ulong)(uVar28 + uVar23 + 2)) {
            return 0;
          }
          uVar34 = ((~((uint)bVar4 << 8) | 0xffffe0ff) + uVar28) - (uint)pSVar30->m_Items[uVar32];
          if ((int)uVar34 < 0) {
            return 0;
          }
          pSVar5 = ((Il2CppClass_1 *)&pSVar29->obj)->image;
          if (pSVar5 == (System_Array_c *)0x0) goto label_04489b09;
          uVar18 = *(uint *)&(pSVar5->_1).namespaze;
          if ((uVar18 <= uVar34) || (uVar18 <= uVar28)) break;
          *(undefined1 *)((long)&(pSVar5->_1).byval_arg.data + uVar22) =
               *(undefined1 *)((long)&(pSVar5->_1).byval_arg.data + (long)(int)uVar34);
          pSVar5 = ((Il2CppClass_1 *)&pSVar29->obj)->image;
          if (pSVar5 == (System_Array_c *)0x0) goto label_04489b09;
          uVar18 = *(uint *)&(pSVar5->_1).namespaze;
          if ((uVar18 <= uVar34 + 1) || (uVar18 <= uVar28 + 1)) break;
          uVar18 = uVar34 + 2;
          *(undefined1 *)((long)&(pSVar5->_1).byval_arg.data + (ulong)(uVar28 + 1)) =
               *(undefined1 *)((long)&(pSVar5->_1).byval_arg.data + (long)(int)(uVar34 + 1));
          uVar19 = (ulong)(uVar28 + 2);
          do {
            uVar22 = uVar19;
            pSVar5 = ((Il2CppClass_1 *)&pSVar29->obj)->image;
            if (pSVar5 == (System_Array_c *)0x0) goto label_04489b09;
            pcVar7 = (pSVar5->_1).namespaze;
            if (((uint)pcVar7 <= uVar18) || (((ulong)pcVar7 & 0xffffffff) <= uVar22)) goto label_04489b04;
            lVar26 = (long)(int)uVar18;
            uVar18 = uVar18 + 1;
            *(undefined1 *)((long)&(pSVar5->_1).byval_arg.data + uVar22) =
                 *(undefined1 *)((long)&(pSVar5->_1).byval_arg.data + lVar26);
            uVar23 = uVar23 - 1;
            uVar19 = uVar22 + 1;
          } while (uVar23 != 0);
          iVar10 = (int)uVar22;
        }
        uVar19 = (ulong)(uVar32 + 1);
        if ((long)iVar11 <= (long)uVar19) {
          return iVar10 + 1U;
        }
        uVar22 = (ulong)(iVar10 + 1U);
        iVar15 = pSVar30->max_length;
        uVar25 = (ulong)(uVar32 + 2);
      } while (uVar32 + 1 < (uint)iVar15);
    }
label_04489b04:
    il2cpp_runtime_helper_022b2ca0();
  }
label_04489b09:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae8d5 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLZF2);
    il2cpp_runtime_helper_023445d0(&TypeInfo_long);
    g_data_057ae8d5 = '\x01';
  }
  puVar8 = *(undefined4 **)((long)((Il2CppType *)TypeInfo_CLZF2->m_Items + 9) + 8);
  *puVar8 = 0xe;
  puVar8[1] = 0x4000;
  puVar8[2] = 0x20;
  puVar8[3] = 0x2000;
  puVar8[4] = 0x108;
  uVar16 = il2cpp_runtime_helper_022b2a40(TypeInfo_long,0x4000);
  lVar20 = *(long *)((long)((Il2CppType *)TypeInfo_CLZF2->m_Items + 9) + 8);
  *(undefined8 *)(lVar20 + 0x18) = uVar16;
  iVar12 = il2cpp_runtime_helper_022b4080(lVar20 + 0x18,uVar16);
  return iVar12;
  while( true ) {
    pSVar29 = ((Il2CppClass_1 *)&local_60->obj)->image;
    if (pSVar29 == (System_Byte_array *)0x0) goto label_044897c7;
    unaff_R15 = (System_Byte_array *)((long)&((Il2CppClass_1 *)&pSVar13->obj)->image + 1);
    input_00 = (System_Byte_array *)(ulong)*(uint *)&pSVar29->max_length;
    if (input_00 <= unaff_R15) goto label_044897c2;
    ((undefined1 *)((long)&((Il2CppType *)pSVar29->m_Items)->data + 1))[(long)pSVar13] =
         *(undefined1 *)((long)&((Il2CppType *)pSVar33->m_Items)->data + lVar20);
    uVar32 = uVar32 + 1;
    pSVar13 = unaff_R15;
    if (uVar32 == 0) break;
label_04489370:
    unaff_R13 = (System_Byte_array *)(ulong)uVar32;
    lVar20 = (long)&((Il2CppClass_1 *)((Il2CppType *)pSVar27->m_Items + -2))->image + (long)(int)uVar32;
    output = (System_Byte_array **)local_60;
    if (*(uint *)&pSVar33->max_length <= (uint)lVar20) goto label_044897c2;
  }
  unaff_R15 = (System_Byte_array *)(ulong)((int)unaff_R15 + 1);
  goto label_044890db;
  while( true ) {
    uVar28 = uVar23 + iVar10;
    pSVar29 = (System_Byte_array *)(ulong)uVar28;
    if (*(uint *)&pSVar33->max_length <= uVar28) goto label_044897c2;
    uVar28 = iVar10 + uVar32 + 3;
    pSVar29 = (System_Byte_array *)(ulong)uVar28;
    if (*(uint *)&pSVar33->max_length <= uVar28) goto label_044897c2;
    pIVar9 = (Il2CppType *)input_00->m_Items;
    pSVar29 = (System_Byte_array *)(ulong)(iVar10 + 1);
    input_00 = (System_Byte_array *)((long)&((Il2CppClass_1 *)&input_00->obj)->image + 1);
    pSVar33 = local_78;
    cVar17 = cVar21 + ' ';
    if (*(char *)((long)&pIVar9->data + (long)((Il2CppType *)pSVar24->m_Items + -4)) !=
        *(char *)((long)&((Il2CppType *)local_78->m_Items)->data + (long)(int)uVar28)) break;
label_04489450:
    cVar21 = cVar17;
    local_68 = pSVar29;
    iVar10 = (int)local_68;
    pSVar29 = local_68;
    unaff_R14 = local_68;
    if ((undefined1 *)(ulong)uVar34 <= input_00[-1].m_Items + 0xffe0) break;
  }
  output = (System_Byte_array **)local_60;
  pSVar30 = pSVar24;
  if (iVar11 == 0) {
    pSVar5 = ((Il2CppClass_1 *)&local_60->obj)->image;
  }
  else {
    pSVar5 = ((Il2CppClass_1 *)&local_60->obj)->image;
    if (pSVar5 == (System_Array_c *)0x0) goto label_044897c7;
    if (*(uint *)&(pSVar5->_1).namespaze <= (uint)unaff_R15) goto label_044897c2;
    *(char *)((long)&(pSVar5->_1).byval_arg.data + uVar19) = (char)unaff_R13 + -1;
    unaff_R13 = (System_Byte_array *)(ulong)(uint)-iVar11;
    lVar20 = uVar19 + 0x21;
    do {
      lVar26 = (long)&((Il2CppClass_1 *)((Il2CppType *)unaff_RBP->m_Items + -2))->image + (long)(int)unaff_R13
      ;
      if (*(uint *)&pSVar33->max_length <= (uint)lVar26) goto label_044897c2;
      pSVar29 = ((Il2CppClass_1 *)&local_60->obj)->image;
      if (pSVar29 == (System_Byte_array *)0x0) goto label_044897c7;
      input_00 = (System_Byte_array *)(ulong)*(uint *)&pSVar29->max_length;
      if (input_00 <= (System_Byte_array *)(lVar20 + -0x20)) goto label_044897c2;
      *(undefined1 *)((long)&((Il2CppClass_1 *)((Il2CppType *)pSVar29->m_Items + -2))->image + lVar20) =
           *(undefined1 *)((long)&((Il2CppType *)pSVar33->m_Items)->data + lVar26);
      lVar20 = lVar20 + 1;
      uVar34 = (int)unaff_R13 + 1;
      unaff_R13 = (System_Byte_array *)(ulong)uVar34;
    } while (uVar34 != 0);
    unaff_R15 = (System_Byte_array *)(ulong)((int)lVar20 - 0x20);
    pSVar5 = ((Il2CppClass_1 *)&local_60->obj)->image;
  }
  if (pSVar5 == (System_Array_c *)0x0) goto label_044897c7;
  uVar23 = (uint)unaff_R15;
  uVar28 = uVar23 + 1;
  pSVar13 = (System_Byte_array *)(ulong)uVar28;
  pSVar29 = (System_Byte_array *)((ulong)unaff_R15 & 0xffffffff);
  uVar34 = *(uint *)&(pSVar5->_1).namespaze;
  input_00 = (System_Byte_array *)(ulong)uVar34;
  cVar17 = (char)((ulong)unaff_R12 >> 8);
  if (iVar10 + 1U < 7) {
    if (uVar34 <= uVar23) goto label_044897c2;
    *(char *)((long)&(pSVar5->_1).image + (long)&((Il2CppType *)pSVar29->m_Items)->data) = cVar17 + cVar21;
    pSVar5 = ((Il2CppClass_1 *)&local_60->obj)->image;
  }
  else {
    if (uVar34 <= uVar23) goto label_044897c2;
    *(char *)((long)&(pSVar5->_1).image + (long)&((Il2CppType *)pSVar29->m_Items)->data) = cVar17 + -0x20;
    pSVar5 = ((Il2CppClass_1 *)&local_60->obj)->image;
    if (pSVar5 == (System_Array_c *)0x0) goto label_044897c7;
    if (*(uint *)&(pSVar5->_1).namespaze <= uVar28) goto label_044897c2;
    pSVar13 = (System_Byte_array *)(ulong)(uVar23 + 2);
    *(char *)((long)&(pSVar5->_1).byval_arg.data + (ulong)uVar28) = (char)local_68 + -6;
    pSVar5 = ((Il2CppClass_1 *)&local_60->obj)->image;
    unaff_R15 = pSVar13;
  }
  if (pSVar5 == (System_Array_c *)0x0) goto label_044897c7;
  if (*(uint *)&(pSVar5->_1).namespaze <= (uint)pSVar13) goto label_044897c2;
  *(char *)((long)&(pSVar5->_1).image + (long)&((Il2CppType *)pSVar13->m_Items)->data) = (char)unaff_R12;
  uVar23 = iVar10 + uVar32 + 1;
  unaff_R12 = (undefined8 *)(ulong)uVar23;
  uVar34 = *(uint *)&pSVar33->max_length;
  if (uVar34 <= uVar23) goto label_044897c2;
  uVar23 = iVar10 + uVar32 + 2;
  unaff_R15 = (System_Byte_array *)(ulong)uVar23;
  if (uVar34 <= uVar23) goto label_044897c2;
  uVar28 = iVar10 + uVar32 + 3;
  pSVar27 = (System_Byte_array *)(ulong)uVar28;
  unaff_R14 = pSVar27;
  pSVar24 = local_68;
  if (uVar34 <= uVar28) goto label_044897c2;
  bVar4 = *(byte *)((long)unaff_R12 + (long)&((Il2CppType *)pSVar33->m_Items)->data);
  bVar2 = *(byte *)((long)&((Il2CppType *)pSVar33->m_Items)->data + (long)(int)uVar23);
  pSVar29 = (System_Byte_array *)(ulong)bVar2;
  bVar3 = *(byte *)((long)&((Il2CppType *)pSVar33->m_Items)->data + (long)(int)uVar28);
  output = &TypeInfo_CLZF2;
  uVar34 = (uint)bVar3;
  if (*(int *)((long)((Il2CppType *)TypeInfo_CLZF2->m_Items + 0xc) + 4) == 0) {
    local_50 = (System_Byte_array *)CONCAT44(local_50._4_4_,(uint)pSVar13);
    local_3c = (uint)bVar3;
    local_40 = (uint)bVar2;
    pSStack_80 = (System_Byte_array *)0x4489653;
    il2cpp_runtime_helper_02337ed0();
    pSVar29 = (System_Byte_array *)(ulong)local_40;
    pSVar13 = (System_Byte_array *)((ulong)local_50 & 0xffffffff);
    pSVar33 = local_78;
    uVar34 = local_3c;
  }
  puVar8 = *(undefined4 **)((long)((Il2CppType *)TypeInfo_CLZF2->m_Items + 9) + 8);
  lVar20 = *(long *)(puVar8 + 6);
  input_00 = TypeInfo_CLZF2;
  unaff_R13 = (System_Byte_array *)(ulong)bVar4;
  pSVar30 = local_68;
  if (lVar20 == 0) goto label_044897c7;
  uVar28 = ((uint)bVar4 << 8 | (uint)pSVar29) << 8 | uVar34;
  unaff_R13 = (System_Byte_array *)(ulong)uVar28;
  cVar17 = '\x18' - (char)*puVar8;
  uVar23 = puVar8[1] - 1;
  pSVar29 = (System_Byte_array *)(ulong)uVar23;
  uVar34 = (uVar28 << 5 ^ uVar28) >> (cVar17 + (char)uVar34 * -5 & 0x1fU) & uVar23;
  input_00 = (System_Byte_array *)(ulong)uVar34;
  pSVar24 = local_68;
  if (*(uint *)(lVar20 + 0x18) <= uVar34) goto label_044897c2;
  *(undefined8 **)(lVar20 + 0x20 + (long)(int)uVar34 * 8) = unaff_R12;
  uVar32 = (int)local_68 + uVar32 + 4;
  if (*(uint *)&pSVar33->max_length <= uVar32) goto label_044897c2;
  bVar4 = *(byte *)((long)&((Il2CppType *)pSVar33->m_Items)->data + (long)(int)uVar32);
  uVar32 = uVar28 << 8 | (uint)bVar4;
  output = (System_Byte_array **)(ulong)uVar32;
  uVar23 = (uVar32 << 5 ^ uVar32) >> (cVar17 + bVar4 * -5 & 0x1f) & uVar23;
  input_00 = (System_Byte_array *)(ulong)uVar23;
  unaff_R12 = &TypeInfo_CLZF2;
  pSVar24 = (System_Byte_array *)output;
  if (*(uint *)(lVar20 + 0x18) <= uVar23) goto label_044897c2;
  *(System_Byte_array **)(lVar20 + 0x20 + (long)(int)uVar23 * 8) = unaff_R15;
  unaff_R15 = (System_Byte_array *)(ulong)((int)pSVar13 + 1);
  unaff_R14 = local_70;
  local_68 = (System_Byte_array *)output;
  goto label_044890db;
label_04489770:
  unaff_R13 = (System_Byte_array *)(ulong)uVar32;
  lVar26 = (long)&((Il2CppClass_1 *)((Il2CppType *)local_48->m_Items + -2))->image + (long)(int)uVar32;
  if (*(uint *)&pSVar33->max_length <= (uint)lVar26) goto label_044897c2;
  pvVar6 = ((Il2CppClass_1 *)&local_60->obj)->image;
  if (pvVar6 == (void *)0x0) goto label_044897c7;
  pSVar29 = (System_Byte_array *)(lVar20 + -0x20);
  input_00 = (System_Byte_array *)(ulong)*(uint *)((long)pvVar6 + 0x18);
  if (input_00 <= pSVar29) goto label_044897c2;
  *(undefined1 *)((long)pvVar6 + lVar20) =
       *(undefined1 *)((long)&((Il2CppType *)pSVar33->m_Items)->data + lVar26);
  lVar20 = lVar20 + 1;
  uVar32 = uVar32 + 1;
  if (uVar32 == 0) {
    return (int)lVar20 - 0x20;
  }
  goto label_04489770;
}


// Utility.CLZF2$$lzf_decompress
// il2cpp: int32_t Utility_CLZF2__lzf_decompress (System_Byte_array* input, System_Byte_array** output, const MethodInfo* method);
// 0x44898f0

int32_t Utility_CLZF2__lzf_decompress(System_Byte_array *input,System_Byte_array **output,MethodInfo *method)

{
  byte bVar1;
  System_Byte_array *pSVar2;
  undefined4 *puVar3;
  int iVar4;
  int32_t iVar5;
  il2cpp_array_size_t iVar6;
  undefined8 uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  uint uVar17;
  ulong uVar18;
  
  if ((input != (System_Byte_array *)0x0) && (*output != (System_Byte_array *)0x0)) {
    iVar6 = input->max_length;
    iVar4 = (int)iVar6;
    if (iVar4 != 0) {
      lVar16 = (long)(int)(*output)->max_length;
      uVar18 = 0;
      uVar14 = 1;
      uVar13 = 0;
      do {
        bVar1 = input->m_Items[uVar18];
        uVar8 = (uint)bVar1;
        uVar9 = (uint)iVar6;
        uVar17 = (uint)uVar14;
        uVar11 = (uint)uVar13;
        if (bVar1 < 0x20) {
          if (lVar16 < (long)(ulong)(bVar1 + uVar11 + 1)) {
            return 0;
          }
          if (uVar9 <= uVar17) break;
          while( true ) {
            pSVar2 = *output;
            if (pSVar2 == (System_Byte_array *)0x0) goto label_04489b09;
            if ((uint)pSVar2->max_length <= uVar13) goto label_04489b04;
            pSVar2->m_Items[uVar13] = input->m_Items[uVar14];
            if (uVar8 == 0) break;
            uVar13 = uVar13 + 1;
            uVar14 = uVar14 + 1;
            uVar8 = uVar8 - 1;
            if ((uint)input->max_length <= (uint)uVar14) goto label_04489b04;
          }
          uVar17 = (uint)uVar14;
          iVar12 = (int)uVar13;
        }
        else {
          uVar8 = (uint)(bVar1 >> 5);
          if (uVar8 == 7) {
            if (uVar9 <= uVar17) break;
            uVar17 = (int)uVar18 + 2;
            uVar8 = input->m_Items[uVar14] + 7;
          }
          if (uVar9 <= uVar17) break;
          if (lVar16 < (long)(ulong)(uVar11 + uVar8 + 2)) {
            return 0;
          }
          uVar9 = ((~((uint)bVar1 << 8) | 0xffffe0ff) + uVar11) - (uint)input->m_Items[uVar17];
          if ((int)uVar9 < 0) {
            return 0;
          }
          pSVar2 = *output;
          if (pSVar2 == (System_Byte_array *)0x0) goto label_04489b09;
          uVar10 = (uint)pSVar2->max_length;
          if ((uVar10 <= uVar9) || (uVar10 <= uVar11)) break;
          pSVar2->m_Items[uVar13] = pSVar2->m_Items[(int)uVar9];
          pSVar2 = *output;
          if (pSVar2 == (System_Byte_array *)0x0) goto label_04489b09;
          uVar10 = (uint)pSVar2->max_length;
          if ((uVar10 <= uVar9 + 1) || (uVar10 <= uVar11 + 1)) break;
          uVar10 = uVar9 + 2;
          pSVar2->m_Items[uVar11 + 1] = pSVar2->m_Items[(int)(uVar9 + 1)];
          uVar18 = (ulong)(uVar11 + 2);
          do {
            uVar13 = uVar18;
            pSVar2 = *output;
            if (pSVar2 == (System_Byte_array *)0x0) goto label_04489b09;
            if (((uint)pSVar2->max_length <= uVar10) || ((pSVar2->max_length & 0xffffffff) <= uVar13))
            goto label_04489b04;
            lVar15 = (long)(int)uVar10;
            uVar10 = uVar10 + 1;
            pSVar2->m_Items[uVar13] = pSVar2->m_Items[lVar15];
            uVar8 = uVar8 - 1;
            uVar18 = uVar13 + 1;
          } while (uVar8 != 0);
          iVar12 = (int)uVar13;
        }
        uVar18 = (ulong)(uVar17 + 1);
        if ((long)iVar4 <= (long)uVar18) {
          return iVar12 + 1U;
        }
        uVar13 = (ulong)(iVar12 + 1U);
        iVar6 = input->max_length;
        uVar14 = (ulong)(uVar17 + 2);
      } while (uVar17 + 1 < (uint)iVar6);
    }
label_04489b04:
    il2cpp_runtime_helper_022b2ca0();
  }
label_04489b09:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae8d5 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLZF2);
    il2cpp_runtime_helper_023445d0(&TypeInfo_long);
    g_data_057ae8d5 = '\x01';
  }
  puVar3 = *(undefined4 **)(TypeInfo_CLZF2 + 0xb8);
  *puVar3 = 0xe;
  puVar3[1] = 0x4000;
  puVar3[2] = 0x20;
  puVar3[3] = 0x2000;
  puVar3[4] = 0x108;
  uVar7 = il2cpp_runtime_helper_022b2a40(TypeInfo_long,0x4000);
  lVar16 = *(long *)(TypeInfo_CLZF2 + 0xb8);
  *(undefined8 *)(lVar16 + 0x18) = uVar7;
  iVar5 = il2cpp_runtime_helper_022b4080(lVar16 + 0x18,uVar7);
  return iVar5;
}


// Utility.CLZF2$$.cctor
// il2cpp: void Utility_CLZF2___cctor (const MethodInfo* method);
// 0x4489b10

void Utility_CLZF2___cctor(MethodInfo *method)

{
  undefined4 *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  if (g_data_057ae8d5 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLZF2);
    il2cpp_runtime_helper_023445d0(&TypeInfo_long);
    g_data_057ae8d5 = '\x01';
  }
  puVar1 = *(undefined4 **)(TypeInfo_CLZF2 + 0xb8);
  *puVar1 = 0xe;
  puVar1[1] = 0x4000;
  puVar1[2] = 0x20;
  puVar1[3] = 0x2000;
  puVar1[4] = 0x108;
  uVar3 = il2cpp_runtime_helper_022b2a40(TypeInfo_long,0x4000);
  lVar2 = *(long *)(TypeInfo_CLZF2 + 0xb8);
  *(undefined8 *)(lVar2 + 0x18) = uVar3;
  il2cpp_runtime_helper_022b4080(lVar2 + 0x18,uVar3);
  return;
}


