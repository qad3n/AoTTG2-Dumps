// Type: Utility.Algorithms.LZFAlgorithm
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Utility.Algorithms/LZFAlgorithm.cs
// Prior real C# source: none
// --------------------------------

// Utility.Algorithms.LZFAlgorithm$$Compress
// il2cpp: System_Byte_array* Utility_Algorithms_LZFAlgorithm__Compress (Utility_Algorithms_LZFAlgorithm_o* __this, System_Byte_array* data, int32_t level, const MethodInfo* method);
// 0x4499630

System_Byte_array *
Utility_Algorithms_LZFAlgorithm__Compress
          (Utility_Algorithms_LZFAlgorithm_o *__this,System_Byte_array *data,int32_t level,MethodInfo *method)

{
  undefined1 *puVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  void *pvVar5;
  System_Array_c *pSVar6;
  Il2CppClass *pIVar7;
  char *pcVar8;
  undefined4 *puVar9;
  Il2CppType *pIVar10;
  int iVar11;
  System_Byte_array *pSVar13;
  int *piVar14;
  int iVar12;
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
  undefined4 in_register_00000014;
  undefined8 extraout_RDX_03;
  uint uVar22;
  ulong uVar24;
  long lVar25;
  System_Byte_array *pSVar26;
  System_Byte_array *unaff_RBP;
  uint uVar27;
  System_Byte_array *pSVar28;
  System_Byte_array *pSVar29;
  System_Byte_array *pSVar30;
  System_Byte_array *pSVar31;
  undefined8 *puVar32;
  uint uVar33;
  System_Byte_array *pSVar34;
  undefined8 *unaff_R12;
  System_Byte_array *unaff_R13;
  uint uVar35;
  System_Byte_array *unaff_R15;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
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
  System_Byte_array *apSStack_38 [2];
  System_Byte_array *pSVar23;
  System_Byte_array *pSVar36;
  
  uVar16 = CONCAT44(in_register_00000014,level);
  if (g_data_057ae943 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLZF2,data,uVar16);
    g_data_057ae943 = '\x01';
    iVar12 = *(int *)((long)((Il2CppType *)TypeInfo_CLZF2->m_Items + 0xc) + 4);
    uVar16 = extraout_RDX_03;
  }
  else {
    iVar12 = *(int *)((long)((Il2CppType *)TypeInfo_CLZF2->m_Items + 0xc) + 4);
  }
  if (iVar12 == 0) {
    auVar41 = il2cpp_runtime_helper_02337ed0();
  }
  else {
    auVar41._8_8_ = uVar16;
    auVar41._0_8_ = &TypeInfo_CLZF2;
  }
  apSStack_38[0] = auVar41._0_8_;
  pSVar29 = (System_Byte_array *)0x0;
  pSVar30 = data;
  if (g_data_057ae8d2 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_byte,0,auVar41._8_8_);
    pSVar30 = (System_Byte_array *)&TypeInfo_CLZF2;
    il2cpp_runtime_helper_023445d0();
    g_data_057ae8d2 = '\x01';
  }
  apSStack_38[0] = (System_Byte_array *)0x0;
  if (data != (System_Byte_array *)0x0) {
    iVar12 = (int)data->max_length * 2;
    auVar37 = il2cpp_runtime_helper_022b2a40(TypeInfo_byte,iVar12);
    pSVar29 = auVar37._0_8_;
    if (*(int *)((long)((Il2CppType *)TypeInfo_CLZF2->m_Items + 0xc) + 4) == 0) {
      apSStack_38[0] = pSVar29;
      il2cpp_runtime_helper_02337ed0();
      auVar37._8_8_ = extraout_RDX;
      auVar37._0_8_ = apSStack_38[0];
    }
    apSStack_38[0] = auVar37._0_8_;
    iVar11 = Utility_CLZF2__lzf_compress(data,apSStack_38,auVar37._8_8_);
    while (iVar11 == 0) {
      iVar12 = iVar12 * 2;
      auVar38 = il2cpp_runtime_helper_022b2a40(TypeInfo_byte,iVar12);
      pSVar29 = auVar38._0_8_;
      if (*(int *)((long)((Il2CppType *)TypeInfo_CLZF2->m_Items + 0xc) + 4) == 0) {
        apSStack_38[0] = pSVar29;
        il2cpp_runtime_helper_02337ed0();
        auVar38._8_8_ = extraout_RDX_00;
        auVar38._0_8_ = apSStack_38[0];
      }
      apSStack_38[0] = auVar38._0_8_;
      iVar11 = Utility_CLZF2__lzf_compress(data,apSStack_38,auVar38._8_8_);
    }
    pSVar30 = (System_Byte_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_byte);
    System_Buffer__BlockCopy((System_Array_o *)pSVar29,0,(System_Array_o *)pSVar30,0,iVar11,(MethodInfo *)0x0)
    ;
    return pSVar30;
  }
  il2cpp_runtime_helper_022b2c90();
  pSVar28 = pSVar29;
  pSStack_b0 = pSVar30;
  if (g_data_057ae8d4 == '\0') {
    pSStack_b8 = (System_Byte_array *)0x448900a;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_lzf_compress);
    pSStack_b8 = (System_Byte_array *)0x4489016;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLZF2);
    g_data_057ae8d4 = '\x01';
  }
  pSVar36 = (System_Byte_array *)0x0;
  pSVar30 = pSStack_b0;
  pSVar31 = pSStack_a0;
  if ((pSStack_b0 != (System_Byte_array *)0x0) &&
     (pvVar5 = ((Il2CppClass_1 *)&pSVar29->obj)->image, pSStack_98 = pSVar29, pvVar5 != (void *)0x0)) {
    unaff_RBP = (System_Byte_array *)pSStack_b0->max_length;
    pSVar29 = *(System_Byte_array **)((long)pvVar5 + 0x18);
    unaff_R12 = &TypeInfo_CLZF2;
    if (*(int *)((long)((Il2CppType *)TypeInfo_CLZF2->m_Items + 0xc) + 4) == 0) {
      pSStack_b8 = (System_Byte_array *)0x448905c;
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar30 = *(System_Byte_array **)(*(long *)((long)((Il2CppType *)TypeInfo_CLZF2->m_Items + 9) + 8) + 0x18);
    pSVar28 = (System_Byte_array *)0x0;
    pSStack_b8 = (System_Byte_array *)0x4489077;
    System_Array__Clear((System_Array_o *)pSVar30,0,
                        *(int32_t *)(*(long *)((long)((Il2CppType *)TypeInfo_CLZF2->m_Items + 9) + 8) + 4),
                        (MethodInfo *)0x0);
    pSVar23 = pSStack_a0;
    if ((*(int *)&pSStack_b0->max_length != 1) && (*(int *)&pSStack_b0->max_length != 0)) {
      pSStack_a8 = (System_Byte_array *)(((long)unaff_RBP << 0x20) + -0x200000000 >> 0x20);
      pSStack_80 = (System_Byte_array *)(long)(int)unaff_RBP;
      lStack_90 = (long)(int)pSVar29;
      unaff_R15 = (System_Byte_array *)0x0;
      pSVar26 = (System_Byte_array *)0x0;
      pSVar34 = pSStack_b0;
      pSVar36 = pSStack_a8;
      pSStack_a0 = (System_Byte_array *)
                   (ulong)CONCAT11(*(undefined1 *)&((Il2CppType *)pSStack_b0->m_Items)->data,
                                   *(undefined1 *)((long)&((Il2CppType *)pSStack_b0->m_Items)->data + 1));
      pSStack_70 = unaff_RBP;
label_044890db:
      pSVar29 = (System_Byte_array *)0x0;
      unaff_RBP = pSVar26;
      unaff_R13 = pSVar29;
      pSStack_88 = unaff_R15;
      if ((long)pSVar26 < (long)pSVar36) goto label_04489134;
      while( true ) {
        unaff_R12 = &TypeInfo_CLZF2;
        iVar12 = (int)pSVar29;
        unaff_R13 = pSVar29;
        if (pSStack_80 == pSVar26) break;
        iVar11 = *(int *)((long)((Il2CppType *)TypeInfo_CLZF2->m_Items + 0xc) + 4);
        unaff_RBP = pSVar26;
        pSVar30 = TypeInfo_CLZF2;
        while( true ) {
          pSVar29 = (System_Byte_array *)(ulong)(iVar12 + 1U);
          if (iVar11 == 0) {
            pSStack_b8 = (System_Byte_array *)0x4489105;
            il2cpp_runtime_helper_02337ed0();
            pSVar30 = TypeInfo_CLZF2;
            pSVar34 = pSStack_b0;
          }
          pSVar31 = pSStack_98;
          unaff_R12 = &TypeInfo_CLZF2;
          pSVar26 = (System_Byte_array *)(ulong)((int)unaff_RBP + 1);
          uVar33 = *(uint *)(*(long *)((long)((Il2CppType *)pSVar30->m_Items + 9) + 8) + 8);
          unaff_RBP = pSVar26;
          if ((long)(int)(iVar12 + 1U) == (ulong)uVar33) {
            if (*(int *)((long)((Il2CppType *)pSVar30->m_Items + 0xc) + 4) == 0) {
              pSStack_b8 = (System_Byte_array *)0x44892f3;
              il2cpp_runtime_helper_02337ed0();
              uVar33 = *(uint *)(*(long *)((long)((Il2CppType *)TypeInfo_CLZF2->m_Items + 9) + 8) + 8);
              pSVar30 = TypeInfo_CLZF2;
              pSVar34 = pSStack_b0;
            }
            if (lStack_90 <= (long)(ulong)((uint)unaff_R15 + uVar33 + 1)) {
              return (System_Byte_array *)0x0;
            }
            pSVar29 = ((Il2CppClass_1 *)&pSVar31->obj)->image;
            if (*(int *)((long)((Il2CppType *)pSVar30->m_Items + 0xc) + 4) == 0) {
              pSStack_b8 = (System_Byte_array *)0x4489328;
              il2cpp_runtime_helper_02337ed0();
              pSVar34 = pSStack_b0;
            }
            pSVar31 = pSStack_a0;
            if (pSVar29 == (System_Byte_array *)0x0) goto label_044897c7;
            pSVar23 = pSStack_a0;
            if (*(uint *)&pSVar29->max_length <= (uint)unaff_R15) goto label_044897c2;
            *(char *)((long)&((Il2CppType *)((System_Byte_array *)((ulong)unaff_R15 & 0xffffffff))->m_Items)->
                             data + (long)((Il2CppType *)pSVar29->m_Items + -2)) =
                 *(char *)(*(long *)((long)((Il2CppType *)TypeInfo_CLZF2->m_Items + 9) + 8) + 8) + -1;
            uVar33 = ~(uint)unaff_R13;
            pSVar13 = (System_Byte_array *)((ulong)unaff_R15 & 0xffffffff);
            goto label_04489370;
          }
          unaff_R13 = pSVar29;
          if ((long)pSVar36 <= (long)pSVar26) break;
label_04489134:
          unaff_R12 = &TypeInfo_CLZF2;
          uVar33 = (uint)unaff_RBP;
          uVar35 = uVar33 + 2;
          pSVar36 = (System_Byte_array *)(ulong)uVar35;
          pSVar29 = pSStack_a0;
          pSVar23 = pSStack_a0;
          if (*(uint *)&pSVar34->max_length <= uVar35) goto label_044897c2;
          puVar32 = (undefined8 *)(long)(int)uVar35;
          uVar22 = (int)pSStack_a0 << 8 |
                   (uint)*(byte *)((long)puVar32 + (long)&((Il2CppType *)pSVar34->m_Items)->data);
          pSVar23 = (System_Byte_array *)(ulong)uVar22;
          if (*(int *)((long)((Il2CppType *)TypeInfo_CLZF2->m_Items + 0xc) + 4) == 0) {
            pSStack_b8 = (System_Byte_array *)0x448916d;
            il2cpp_runtime_helper_02337ed0();
            pSVar34 = pSStack_b0;
            unaff_R12 = puVar32;
            unaff_R15 = pSStack_88;
          }
          pSVar30 = TypeInfo_CLZF2;
          piVar14 = *(int **)((long)((Il2CppType *)TypeInfo_CLZF2->m_Items + 9) + 8);
          uVar27 = uVar22 * 5 + *piVar14;
          pSVar28 = (System_Byte_array *)(ulong)uVar27;
          lVar20 = *(long *)(piVar14 + 6);
          pSVar29 = pSVar23;
          pSVar31 = pSStack_a0;
          if (lVar20 == 0) goto label_044897c7;
          pSVar28 = (System_Byte_array *)(ulong)(piVar14[1] - 1U);
          uVar22 = (uVar22 << 5 ^ uVar22) >> (0x18U - (char)uVar27 & 0x1f) & piVar14[1] - 1U;
          if (*(uint *)(lVar20 + 0x18) <= uVar22) goto label_044897c2;
          pSVar29 = *(System_Byte_array **)(lVar20 + 0x20 + (ulong)uVar22 * 8);
          *(System_Byte_array **)(lVar20 + 0x20 + (ulong)uVar22 * 8) = unaff_RBP;
          unaff_R12 = (undefined8 *)
                      ((long)&((Il2CppClass_1 *)((Il2CppType *)unaff_RBP->m_Items + -2))->image +
                      ~(ulong)pSVar29);
          iVar12 = (int)unaff_R13;
          pSStack_a0 = pSVar23;
          if ((((long)unaff_R12 < (long)(ulong)(uint)piVar14[3]) &&
              ((long)(ulong)(uVar33 + 4) < (long)pSStack_80)) && (0 < (long)pSVar29)) {
            uVar22 = *(uint *)&pSVar34->max_length;
            if ((uVar22 <= (uint)pSVar29) || (uVar22 <= uVar33)) goto label_044897c2;
            if (*(char *)((long)&((Il2CppType *)pSVar29->m_Items)->data +
                         (long)((Il2CppType *)pSVar34->m_Items + -2)) !=
                *(char *)((long)&((Il2CppType *)unaff_RBP->m_Items)->data +
                         (long)((Il2CppType *)pSVar34->m_Items + -2))) goto label_044892b0;
            puVar1 = (undefined1 *)((long)&((Il2CppClass_1 *)&pSVar29->obj)->image + 1);
            if (uVar22 <= (uint)puVar1) goto label_044897c2;
            uVar27 = uVar33 + 1;
            pSVar28 = (System_Byte_array *)(ulong)uVar27;
            if (uVar22 <= uVar27) goto label_044897c2;
            pSVar28 = (System_Byte_array *)(long)(int)uVar27;
            if (puVar1[(long)&((Il2CppType *)pSVar34->m_Items)->data] !=
                *(char *)((long)&((Il2CppType *)pSVar28->m_Items)->data +
                         (long)((Il2CppType *)pSVar34->m_Items + -2))) goto label_044892b0;
            puVar1 = (undefined1 *)((long)&((Il2CppClass_1 *)&pSVar29->obj)->image + 2);
            if ((uVar22 <= (uint)puVar1) || (uVar22 <= uVar35)) goto label_044897c2;
            if (puVar1[(long)&((Il2CppType *)pSVar34->m_Items)->data] ==
                *(char *)((long)puVar32 + (long)&((Il2CppType *)pSVar34->m_Items)->data)) {
              uVar35 = ((int)pSStack_70 - uVar33) - 2;
              if (*(int *)((long)((Il2CppType *)pSVar30->m_Items + 0xc) + 4) == 0) {
                pSStack_b8 = (System_Byte_array *)0x44893d4;
                il2cpp_runtime_helper_02337ed0();
                piVar14 = *(int **)((long)((Il2CppType *)TypeInfo_CLZF2->m_Items + 9) + 8);
                pSVar30 = TypeInfo_CLZF2;
                pSVar34 = pSStack_b0;
              }
              if (((uint)piVar14[4] < uVar35) &&
                 (uVar35 = piVar14[4], *(int *)((long)((Il2CppType *)pSVar30->m_Items + 0xc) + 4) == 0)) {
                pSStack_b8 = (System_Byte_array *)0x4489402;
                il2cpp_runtime_helper_02337ed0();
                uVar35 = *(uint *)(*(long *)((long)((Il2CppType *)TypeInfo_CLZF2->m_Items + 9) + 8) + 0x10);
                pSVar34 = pSStack_b0;
              }
              uVar19 = (ulong)unaff_R15 & 0xffffffff;
              if (lStack_90 <= (long)((long)iVar12 + uVar19 + 4)) {
                return (System_Byte_array *)0x0;
              }
              pSVar23 = (System_Byte_array *)
                        ((long)&((Il2CppType *)pSVar29->m_Items)->data +
                        (long)((Il2CppType *)pSVar34->m_Items + -4));
              uVar22 = (uint)pSVar29 + 3;
              pSVar29 = (System_Byte_array *)(ulong)uVar22;
              pSVar30 = (System_Byte_array *)&g_data_00000023;
              pSVar28 = (System_Byte_array *)0x0;
              cVar17 = ' ';
              goto label_04489450;
            }
            iVar11 = *(int *)((long)((Il2CppType *)pSVar30->m_Items + 0xc) + 4);
            pSVar36 = pSStack_a8;
          }
          else {
label_044892b0:
            iVar11 = *(int *)((long)((Il2CppType *)pSVar30->m_Items + 0xc) + 4);
            pSVar36 = pSStack_a8;
          }
        }
      }
      if (iVar12 == 0) {
        return (System_Byte_array *)((ulong)unaff_R15 & 0xffffffff);
      }
      uVar19 = (ulong)unaff_R15 & 0xffffffff;
      if (lStack_90 <= (long)((long)iVar12 + uVar19 + 1)) {
        return (System_Byte_array *)0x0;
      }
      pSVar6 = ((Il2CppClass_1 *)&pSStack_98->obj)->image;
      unaff_RBP = pSStack_98;
      pSVar31 = pSStack_a0;
      if (pSVar6 == (System_Array_c *)0x0) goto label_044897c7;
      pSVar23 = pSStack_a0;
      if ((uint)unaff_R15 < *(uint *)&(pSVar6->_1).namespaze) {
        *(char *)((long)&(pSVar6->_1).byval_arg.data + uVar19) = (char)pSVar29 + -1;
        uVar33 = -iVar12;
        lVar20 = uVar19 + 0x21;
        goto label_04489770;
      }
    }
label_044897c2:
    pSStack_a0 = pSVar23;
    pSStack_b8 = (System_Byte_array *)0x44897c7;
    il2cpp_runtime_helper_022b2ca0();
    pSVar31 = pSStack_a0;
  }
label_044897c7:
  pSStack_a0 = pSVar31;
  pSStack_b8 = (System_Byte_array *)0x44897cc;
  pSStack_e8 = (System_Byte_array *)il2cpp_runtime_helper_022b2c90();
  pSVar31 = pSVar30;
  pSStack_e0 = pSVar29;
  puStack_d8 = unaff_R12;
  pSStack_d0 = unaff_R13;
  pSStack_c8 = pSVar36;
  pSStack_c0 = unaff_R15;
  pSStack_b8 = unaff_RBP;
  if (g_data_057ae8d3 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_byte);
    pSVar31 = (System_Byte_array *)&TypeInfo_CLZF2;
    il2cpp_runtime_helper_023445d0();
    g_data_057ae8d3 = '\x01';
  }
  pSStack_e8 = (System_Byte_array *)0x0;
  if (pSVar30 != (System_Byte_array *)0x0) {
    iVar12 = (int)pSVar30->max_length * 2;
    auVar39 = il2cpp_runtime_helper_022b2a40(TypeInfo_byte,iVar12);
    pSVar29 = auVar39._0_8_;
    if (*(int *)((long)((Il2CppType *)TypeInfo_CLZF2->m_Items + 0xc) + 4) == 0) {
      pSStack_e8 = pSVar29;
      il2cpp_runtime_helper_02337ed0();
      auVar39._8_8_ = extraout_RDX_01;
      auVar39._0_8_ = pSStack_e8;
    }
    pSStack_e8 = auVar39._0_8_;
    iVar11 = Utility_CLZF2__lzf_decompress(pSVar30,&pSStack_e8,auVar39._8_8_);
    while (iVar11 == 0) {
      iVar12 = iVar12 * 2;
      auVar40 = il2cpp_runtime_helper_022b2a40(TypeInfo_byte,iVar12);
      pSVar29 = auVar40._0_8_;
      if (*(int *)((long)((Il2CppType *)TypeInfo_CLZF2->m_Items + 0xc) + 4) == 0) {
        pSStack_e8 = pSVar29;
        il2cpp_runtime_helper_02337ed0();
        auVar40._8_8_ = extraout_RDX_02;
        auVar40._0_8_ = pSStack_e8;
      }
      pSStack_e8 = auVar40._0_8_;
      iVar11 = Utility_CLZF2__lzf_decompress(pSVar30,&pSStack_e8,auVar40._8_8_);
    }
    pSVar30 = (System_Byte_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_byte);
    System_Buffer__BlockCopy((System_Array_o *)pSVar29,0,(System_Array_o *)pSVar30,0,iVar11,(MethodInfo *)0x0)
    ;
    return pSVar30;
  }
  il2cpp_runtime_helper_022b2c90();
  if ((pSVar31 != (System_Byte_array *)0x0) && (pIVar7 = (pSVar28->obj).klass, pIVar7 != (Il2CppClass *)0x0))
  {
    iVar15 = pSVar31->max_length;
    iVar12 = (int)iVar15;
    if (iVar12 != 0) {
      lVar20 = (long)*(int *)&(pIVar7->_1).namespaze;
      uVar19 = 0;
      uVar24 = 1;
      pSVar29 = (System_Byte_array *)0x0;
      do {
        bVar4 = pSVar31->m_Items[uVar19];
        uVar22 = (uint)bVar4;
        uVar35 = (uint)iVar15;
        uVar33 = (uint)uVar24;
        uVar27 = (uint)pSVar29;
        if (bVar4 < 0x20) {
          if (lVar20 < (long)(ulong)(bVar4 + uVar27 + 1)) {
            return (System_Byte_array *)0x0;
          }
          if (uVar35 <= uVar33) break;
          while( true ) {
            pIVar7 = (pSVar28->obj).klass;
            if (pIVar7 == (Il2CppClass *)0x0) goto label_04489b09;
            if ((System_Byte_array *)(ulong)*(uint *)&(pIVar7->_1).namespaze <= pSVar29) goto label_04489b04;
            pSVar29->m_Items[(long)pIVar7] = pSVar31->m_Items[uVar24];
            if (uVar22 == 0) break;
            pSVar29 = (System_Byte_array *)((long)&(pSVar29->obj).klass + 1);
            uVar24 = uVar24 + 1;
            uVar22 = uVar22 - 1;
            if ((uint)pSVar31->max_length <= (uint)uVar24) goto label_04489b04;
          }
          uVar33 = (uint)uVar24;
          iVar11 = (int)pSVar29;
        }
        else {
          uVar22 = (uint)(bVar4 >> 5);
          if (uVar22 == 7) {
            if (uVar35 <= uVar33) break;
            uVar33 = (int)uVar19 + 2;
            uVar22 = pSVar31->m_Items[uVar24] + 7;
          }
          if (uVar35 <= uVar33) break;
          if (lVar20 < (long)(ulong)(uVar27 + uVar22 + 2)) {
            return (System_Byte_array *)0x0;
          }
          uVar35 = ((~((uint)bVar4 << 8) | 0xffffe0ff) + uVar27) - (uint)pSVar31->m_Items[uVar33];
          if ((int)uVar35 < 0) {
            return (System_Byte_array *)0x0;
          }
          pIVar7 = (pSVar28->obj).klass;
          if (pIVar7 == (Il2CppClass *)0x0) goto label_04489b09;
          uVar18 = *(uint *)&(pIVar7->_1).namespaze;
          if ((uVar18 <= uVar35) || (uVar18 <= uVar27)) break;
          pSVar29->m_Items[(long)pIVar7] =
               *(uint8_t *)((long)&(pIVar7->_1).byval_arg.data + (long)(int)uVar35);
          pIVar7 = (pSVar28->obj).klass;
          if (pIVar7 == (Il2CppClass *)0x0) goto label_04489b09;
          uVar18 = *(uint *)&(pIVar7->_1).namespaze;
          if ((uVar18 <= uVar35 + 1) || (uVar18 <= uVar27 + 1)) break;
          uVar18 = uVar35 + 2;
          *(undefined1 *)((long)&(pIVar7->_1).byval_arg.data + (ulong)(uVar27 + 1)) =
               *(undefined1 *)((long)&(pIVar7->_1).byval_arg.data + (long)(int)(uVar35 + 1));
          uVar19 = (ulong)(uVar27 + 2);
          do {
            uVar24 = uVar19;
            pIVar7 = (pSVar28->obj).klass;
            if (pIVar7 == (Il2CppClass *)0x0) goto label_04489b09;
            pcVar8 = (pIVar7->_1).namespaze;
            if (((uint)pcVar8 <= uVar18) || (((ulong)pcVar8 & 0xffffffff) <= uVar24)) goto label_04489b04;
            lVar25 = (long)(int)uVar18;
            uVar18 = uVar18 + 1;
            *(undefined1 *)((long)&(pIVar7->_1).byval_arg.data + uVar24) =
                 *(undefined1 *)((long)&(pIVar7->_1).byval_arg.data + lVar25);
            uVar22 = uVar22 - 1;
            uVar19 = uVar24 + 1;
          } while (uVar22 != 0);
          iVar11 = (int)uVar24;
        }
        uVar19 = (ulong)(uVar33 + 1);
        pSVar29 = (System_Byte_array *)(ulong)(iVar11 + 1);
        if ((long)iVar12 <= (long)uVar19) {
          return pSVar29;
        }
        iVar15 = pSVar31->max_length;
        uVar24 = (ulong)(uVar33 + 2);
      } while (uVar33 + 1 < (uint)iVar15);
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
  puVar9 = *(undefined4 **)((long)((Il2CppType *)TypeInfo_CLZF2->m_Items + 9) + 8);
  *puVar9 = 0xe;
  puVar9[1] = 0x4000;
  puVar9[2] = 0x20;
  puVar9[3] = 0x2000;
  puVar9[4] = 0x108;
  uVar16 = il2cpp_runtime_helper_022b2a40(TypeInfo_long,0x4000);
  lVar20 = *(long *)((long)((Il2CppType *)TypeInfo_CLZF2->m_Items + 9) + 8);
  *(undefined8 *)(lVar20 + 0x18) = uVar16;
  pSVar29 = (System_Byte_array *)il2cpp_runtime_helper_022b4080(lVar20 + 0x18,uVar16);
  return pSVar29;
  while( true ) {
    pSVar28 = ((Il2CppClass_1 *)&pSStack_98->obj)->image;
    if (pSVar28 == (System_Byte_array *)0x0) goto label_044897c7;
    unaff_R15 = (System_Byte_array *)((long)&((Il2CppClass_1 *)&pSVar13->obj)->image + 1);
    pSVar30 = (System_Byte_array *)(ulong)*(uint *)&pSVar28->max_length;
    if (pSVar30 <= unaff_R15) goto label_044897c2;
    ((undefined1 *)((long)&((Il2CppType *)pSVar28->m_Items)->data + 1))[(long)pSVar13] =
         *(undefined1 *)((long)&((Il2CppType *)pSVar34->m_Items)->data + lVar20);
    uVar33 = uVar33 + 1;
    pSVar13 = unaff_R15;
    if (uVar33 == 0) break;
label_04489370:
    unaff_R13 = (System_Byte_array *)(ulong)uVar33;
    lVar20 = (long)&((Il2CppClass_1 *)((Il2CppType *)pSVar26->m_Items + -2))->image + (long)(int)uVar33;
    pSVar29 = pSStack_98;
    if (*(uint *)&pSVar34->max_length <= (uint)lVar20) goto label_044897c2;
  }
  unaff_R15 = (System_Byte_array *)(ulong)((int)unaff_R15 + 1);
  goto label_044890db;
  while( true ) {
    uVar27 = uVar22 + iVar11;
    pSVar28 = (System_Byte_array *)(ulong)uVar27;
    if (*(uint *)&pSVar34->max_length <= uVar27) goto label_044897c2;
    uVar27 = iVar11 + uVar33 + 3;
    pSVar28 = (System_Byte_array *)(ulong)uVar27;
    if (*(uint *)&pSVar34->max_length <= uVar27) goto label_044897c2;
    pIVar10 = (Il2CppType *)pSVar30->m_Items;
    pSVar28 = (System_Byte_array *)(ulong)(iVar11 + 1);
    pSVar30 = (System_Byte_array *)((long)&((Il2CppClass_1 *)&pSVar30->obj)->image + 1);
    pSVar34 = pSStack_b0;
    cVar17 = cVar21 + ' ';
    if (*(char *)((long)&pIVar10->data + (long)((Il2CppType *)pSVar23->m_Items + -4)) !=
        *(char *)((long)&((Il2CppType *)pSStack_b0->m_Items)->data + (long)(int)uVar27)) break;
label_04489450:
    cVar21 = cVar17;
    pSStack_a0 = pSVar28;
    iVar11 = (int)pSStack_a0;
    pSVar28 = pSStack_a0;
    pSVar36 = pSStack_a0;
    if ((undefined1 *)(ulong)uVar35 <= pSVar30[-1].m_Items + 0xffe0) break;
  }
  pSVar29 = pSStack_98;
  pSVar31 = pSVar23;
  if (iVar12 == 0) {
    pSVar6 = ((Il2CppClass_1 *)&pSStack_98->obj)->image;
  }
  else {
    pSVar6 = ((Il2CppClass_1 *)&pSStack_98->obj)->image;
    if (pSVar6 == (System_Array_c *)0x0) goto label_044897c7;
    if (*(uint *)&(pSVar6->_1).namespaze <= (uint)unaff_R15) goto label_044897c2;
    *(char *)((long)&(pSVar6->_1).byval_arg.data + uVar19) = (char)unaff_R13 + -1;
    unaff_R13 = (System_Byte_array *)(ulong)(uint)-iVar12;
    lVar20 = uVar19 + 0x21;
    do {
      lVar25 = (long)&((Il2CppClass_1 *)((Il2CppType *)unaff_RBP->m_Items + -2))->image + (long)(int)unaff_R13
      ;
      if (*(uint *)&pSVar34->max_length <= (uint)lVar25) goto label_044897c2;
      pSVar28 = ((Il2CppClass_1 *)&pSStack_98->obj)->image;
      if (pSVar28 == (System_Byte_array *)0x0) goto label_044897c7;
      pSVar30 = (System_Byte_array *)(ulong)*(uint *)&pSVar28->max_length;
      if (pSVar30 <= (System_Byte_array *)(lVar20 + -0x20)) goto label_044897c2;
      *(undefined1 *)((long)&((Il2CppClass_1 *)((Il2CppType *)pSVar28->m_Items + -2))->image + lVar20) =
           *(undefined1 *)((long)&((Il2CppType *)pSVar34->m_Items)->data + lVar25);
      lVar20 = lVar20 + 1;
      uVar35 = (int)unaff_R13 + 1;
      unaff_R13 = (System_Byte_array *)(ulong)uVar35;
    } while (uVar35 != 0);
    unaff_R15 = (System_Byte_array *)(ulong)((int)lVar20 - 0x20);
    pSVar6 = ((Il2CppClass_1 *)&pSStack_98->obj)->image;
  }
  if (pSVar6 == (System_Array_c *)0x0) goto label_044897c7;
  uVar22 = (uint)unaff_R15;
  uVar27 = uVar22 + 1;
  pSVar13 = (System_Byte_array *)(ulong)uVar27;
  pSVar28 = (System_Byte_array *)((ulong)unaff_R15 & 0xffffffff);
  uVar35 = *(uint *)&(pSVar6->_1).namespaze;
  pSVar30 = (System_Byte_array *)(ulong)uVar35;
  cVar17 = (char)((ulong)unaff_R12 >> 8);
  if (iVar11 + 1U < 7) {
    if (uVar35 <= uVar22) goto label_044897c2;
    *(char *)((long)&(pSVar6->_1).image + (long)&((Il2CppType *)pSVar28->m_Items)->data) = cVar17 + cVar21;
    pSVar6 = ((Il2CppClass_1 *)&pSStack_98->obj)->image;
  }
  else {
    if (uVar35 <= uVar22) goto label_044897c2;
    *(char *)((long)&(pSVar6->_1).image + (long)&((Il2CppType *)pSVar28->m_Items)->data) = cVar17 + -0x20;
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
  uVar22 = iVar11 + uVar33 + 1;
  unaff_R12 = (undefined8 *)(ulong)uVar22;
  uVar35 = *(uint *)&pSVar34->max_length;
  if (uVar35 <= uVar22) goto label_044897c2;
  uVar22 = iVar11 + uVar33 + 2;
  unaff_R15 = (System_Byte_array *)(ulong)uVar22;
  if (uVar35 <= uVar22) goto label_044897c2;
  uVar27 = iVar11 + uVar33 + 3;
  pSVar26 = (System_Byte_array *)(ulong)uVar27;
  pSVar36 = pSVar26;
  pSVar23 = pSStack_a0;
  if (uVar35 <= uVar27) goto label_044897c2;
  bVar4 = *(byte *)((long)unaff_R12 + (long)&((Il2CppType *)pSVar34->m_Items)->data);
  bVar2 = *(byte *)((long)&((Il2CppType *)pSVar34->m_Items)->data + (long)(int)uVar22);
  pSVar28 = (System_Byte_array *)(ulong)bVar2;
  bVar3 = *(byte *)((long)&((Il2CppType *)pSVar34->m_Items)->data + (long)(int)uVar27);
  pSVar29 = (System_Byte_array *)&TypeInfo_CLZF2;
  uVar35 = (uint)bVar3;
  if (*(int *)((long)((Il2CppType *)TypeInfo_CLZF2->m_Items + 0xc) + 4) == 0) {
    pSStack_88 = (System_Byte_array *)CONCAT44(pSStack_88._4_4_,(uint)pSVar13);
    uStack_74 = (uint)bVar3;
    uStack_78 = (uint)bVar2;
    pSStack_b8 = (System_Byte_array *)0x4489653;
    il2cpp_runtime_helper_02337ed0();
    pSVar28 = (System_Byte_array *)(ulong)uStack_78;
    pSVar13 = (System_Byte_array *)((ulong)pSStack_88 & 0xffffffff);
    pSVar34 = pSStack_b0;
    uVar35 = uStack_74;
  }
  puVar9 = *(undefined4 **)((long)((Il2CppType *)TypeInfo_CLZF2->m_Items + 9) + 8);
  lVar20 = *(long *)(puVar9 + 6);
  pSVar30 = TypeInfo_CLZF2;
  unaff_R13 = (System_Byte_array *)(ulong)bVar4;
  pSVar31 = pSStack_a0;
  if (lVar20 == 0) goto label_044897c7;
  uVar27 = ((uint)bVar4 << 8 | (uint)pSVar28) << 8 | uVar35;
  unaff_R13 = (System_Byte_array *)(ulong)uVar27;
  cVar17 = '\x18' - (char)*puVar9;
  uVar22 = puVar9[1] - 1;
  pSVar28 = (System_Byte_array *)(ulong)uVar22;
  uVar35 = (uVar27 << 5 ^ uVar27) >> (cVar17 + (char)uVar35 * -5 & 0x1fU) & uVar22;
  pSVar30 = (System_Byte_array *)(ulong)uVar35;
  pSVar23 = pSStack_a0;
  if (*(uint *)(lVar20 + 0x18) <= uVar35) goto label_044897c2;
  *(undefined8 **)(lVar20 + 0x20 + (long)(int)uVar35 * 8) = unaff_R12;
  uVar33 = (int)pSStack_a0 + uVar33 + 4;
  if (*(uint *)&pSVar34->max_length <= uVar33) goto label_044897c2;
  bVar4 = *(byte *)((long)&((Il2CppType *)pSVar34->m_Items)->data + (long)(int)uVar33);
  uVar33 = uVar27 << 8 | (uint)bVar4;
  pSVar29 = (System_Byte_array *)(ulong)uVar33;
  uVar22 = (uVar33 << 5 ^ uVar33) >> (cVar17 + bVar4 * -5 & 0x1f) & uVar22;
  pSVar30 = (System_Byte_array *)(ulong)uVar22;
  unaff_R12 = &TypeInfo_CLZF2;
  pSVar23 = pSVar29;
  if (*(uint *)(lVar20 + 0x18) <= uVar22) goto label_044897c2;
  *(System_Byte_array **)(lVar20 + 0x20 + (long)(int)uVar22 * 8) = unaff_R15;
  unaff_R15 = (System_Byte_array *)(ulong)((int)pSVar13 + 1);
  pSVar36 = pSStack_a8;
  pSStack_a0 = pSVar29;
  goto label_044890db;
label_04489770:
  unaff_R13 = (System_Byte_array *)(ulong)uVar33;
  lVar25 = (long)&((Il2CppClass_1 *)((Il2CppType *)pSStack_80->m_Items + -2))->image + (long)(int)uVar33;
  if (*(uint *)&pSVar34->max_length <= (uint)lVar25) goto label_044897c2;
  pSVar6 = ((Il2CppClass_1 *)&pSStack_98->obj)->image;
  if (pSVar6 == (System_Array_c *)0x0) goto label_044897c7;
  pSVar28 = (System_Byte_array *)(lVar20 + -0x20);
  pSVar30 = (System_Byte_array *)(ulong)*(uint *)&(pSVar6->_1).namespaze;
  if (pSVar30 <= pSVar28) goto label_044897c2;
  *(undefined1 *)((long)&(pSVar6->_1).image + lVar20) =
       *(undefined1 *)((long)&((Il2CppType *)pSVar34->m_Items)->data + lVar25);
  lVar20 = lVar20 + 1;
  uVar33 = uVar33 + 1;
  if (uVar33 == 0) {
    return (System_Byte_array *)(ulong)((int)lVar20 - 0x20);
  }
  goto label_04489770;
}


// Utility.Algorithms.LZFAlgorithm$$Decompress
// il2cpp: System_Byte_array* Utility_Algorithms_LZFAlgorithm__Decompress (Utility_Algorithms_LZFAlgorithm_o* __this, System_Byte_array* data, int32_t bufferSize, int64_t maxSize, const MethodInfo* method);
// 0x44996a0

System_Byte_array *
Utility_Algorithms_LZFAlgorithm__Decompress
          (Utility_Algorithms_LZFAlgorithm_o *__this,System_Byte_array *data,int32_t bufferSize,
          int64_t maxSize,MethodInfo *method)

{
  byte bVar1;
  long lVar2;
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
  undefined4 in_register_00000014;
  undefined8 extraout_RDX_01;
  ulong uVar13;
  long lVar14;
  long *plVar15;
  System_Byte_array *pSVar16;
  long lVar17;
  uint uVar18;
  ulong uVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  System_Byte_array *apSStack_38 [2];
  
  uVar8 = CONCAT44(in_register_00000014,bufferSize);
  if (g_data_057ae944 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLZF2,data,uVar8);
    g_data_057ae944 = '\x01';
    iVar5 = *(int *)(TypeInfo_CLZF2 + 0xe4);
    uVar8 = extraout_RDX_01;
  }
  else {
    iVar5 = *(int *)(TypeInfo_CLZF2 + 0xe4);
  }
  if (iVar5 == 0) {
    auVar22 = il2cpp_runtime_helper_02337ed0();
  }
  else {
    auVar22._8_8_ = uVar8;
    auVar22._0_8_ = &TypeInfo_CLZF2;
  }
  apSStack_38[0] = auVar22._0_8_;
  plVar15 = (long *)0x0;
  pSVar16 = data;
  if (g_data_057ae8d3 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_byte,0,auVar22._8_8_);
    pSVar16 = (System_Byte_array *)&TypeInfo_CLZF2;
    il2cpp_runtime_helper_023445d0();
    g_data_057ae8d3 = '\x01';
  }
  apSStack_38[0] = (System_Byte_array *)0x0;
  if (data != (System_Byte_array *)0x0) {
    iVar5 = (int)data->max_length * 2;
    auVar20 = il2cpp_runtime_helper_022b2a40(TypeInfo_byte,iVar5);
    pSVar16 = auVar20._0_8_;
    if (*(int *)(TypeInfo_CLZF2 + 0xe4) == 0) {
      apSStack_38[0] = pSVar16;
      il2cpp_runtime_helper_02337ed0();
      auVar20._8_8_ = extraout_RDX;
      auVar20._0_8_ = apSStack_38[0];
    }
    apSStack_38[0] = auVar20._0_8_;
    iVar4 = Utility_CLZF2__lzf_decompress(data,apSStack_38,auVar20._8_8_);
    while (iVar4 == 0) {
      iVar5 = iVar5 * 2;
      auVar21 = il2cpp_runtime_helper_022b2a40(TypeInfo_byte,iVar5);
      pSVar16 = auVar21._0_8_;
      if (*(int *)(TypeInfo_CLZF2 + 0xe4) == 0) {
        apSStack_38[0] = pSVar16;
        il2cpp_runtime_helper_02337ed0();
        auVar21._8_8_ = extraout_RDX_00;
        auVar21._0_8_ = apSStack_38[0];
      }
      apSStack_38[0] = auVar21._0_8_;
      iVar4 = Utility_CLZF2__lzf_decompress(data,apSStack_38,auVar21._8_8_);
    }
    pSVar6 = (System_Byte_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_byte);
    System_Buffer__BlockCopy((System_Array_o *)pSVar16,0,(System_Array_o *)pSVar6,0,iVar4,(MethodInfo *)0x0);
    return pSVar6;
  }
  il2cpp_runtime_helper_022b2c90();
  if ((pSVar16 != (System_Byte_array *)0x0) && (*plVar15 != 0)) {
    iVar7 = pSVar16->max_length;
    iVar5 = (int)iVar7;
    if (iVar5 != 0) {
      lVar17 = (long)*(int *)(*plVar15 + 0x18);
      uVar19 = 0;
      uVar13 = 1;
      pSVar6 = (System_Byte_array *)0x0;
      do {
        bVar1 = pSVar16->m_Items[uVar19];
        uVar9 = (uint)bVar1;
        uVar10 = (uint)iVar7;
        uVar18 = (uint)uVar13;
        uVar12 = (uint)pSVar6;
        if (bVar1 < 0x20) {
          if (lVar17 < (long)(ulong)(bVar1 + uVar12 + 1)) {
            return (System_Byte_array *)0x0;
          }
          if (uVar10 <= uVar18) break;
          while( true ) {
            lVar2 = *plVar15;
            if (lVar2 == 0) goto label_04489b09;
            if ((System_Byte_array *)(ulong)*(uint *)(lVar2 + 0x18) <= pSVar6) goto label_04489b04;
            pSVar6->m_Items[lVar2] = pSVar16->m_Items[uVar13];
            if (uVar9 == 0) break;
            pSVar6 = (System_Byte_array *)((long)&(pSVar6->obj).klass + 1);
            uVar13 = uVar13 + 1;
            uVar9 = uVar9 - 1;
            if ((uint)pSVar16->max_length <= (uint)uVar13) goto label_04489b04;
          }
          uVar18 = (uint)uVar13;
          iVar4 = (int)pSVar6;
        }
        else {
          uVar9 = (uint)(bVar1 >> 5);
          if (uVar9 == 7) {
            if (uVar10 <= uVar18) break;
            uVar18 = (int)uVar19 + 2;
            uVar9 = pSVar16->m_Items[uVar13] + 7;
          }
          if (uVar10 <= uVar18) break;
          if (lVar17 < (long)(ulong)(uVar12 + uVar9 + 2)) {
            return (System_Byte_array *)0x0;
          }
          uVar10 = ((~((uint)bVar1 << 8) | 0xffffe0ff) + uVar12) - (uint)pSVar16->m_Items[uVar18];
          if ((int)uVar10 < 0) {
            return (System_Byte_array *)0x0;
          }
          lVar2 = *plVar15;
          if (lVar2 == 0) goto label_04489b09;
          if ((*(uint *)(lVar2 + 0x18) <= uVar10) || (*(uint *)(lVar2 + 0x18) <= uVar12)) break;
          pSVar6->m_Items[lVar2] = *(uint8_t *)(lVar2 + 0x20 + (long)(int)uVar10);
          lVar2 = *plVar15;
          if (lVar2 == 0) goto label_04489b09;
          if ((*(uint *)(lVar2 + 0x18) <= uVar10 + 1) || (*(uint *)(lVar2 + 0x18) <= uVar12 + 1)) break;
          uVar11 = uVar10 + 2;
          *(undefined1 *)(lVar2 + 0x20 + (ulong)(uVar12 + 1)) =
               *(undefined1 *)(lVar2 + 0x20 + (long)(int)(uVar10 + 1));
          uVar19 = (ulong)(uVar12 + 2);
          do {
            uVar13 = uVar19;
            lVar2 = *plVar15;
            if (lVar2 == 0) goto label_04489b09;
            if (((uint)*(ulong *)(lVar2 + 0x18) <= uVar11) ||
               ((*(ulong *)(lVar2 + 0x18) & 0xffffffff) <= uVar13)) goto label_04489b04;
            lVar14 = (long)(int)uVar11;
            uVar11 = uVar11 + 1;
            *(undefined1 *)(lVar2 + 0x20 + uVar13) = *(undefined1 *)(lVar2 + 0x20 + lVar14);
            uVar9 = uVar9 - 1;
            uVar19 = uVar13 + 1;
          } while (uVar9 != 0);
          iVar4 = (int)uVar13;
        }
        uVar19 = (ulong)(uVar18 + 1);
        pSVar6 = (System_Byte_array *)(ulong)(iVar4 + 1);
        if ((long)iVar5 <= (long)uVar19) {
          return pSVar6;
        }
        iVar7 = pSVar16->max_length;
        uVar13 = (ulong)(uVar18 + 2);
      } while (uVar18 + 1 < (uint)iVar7);
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
  lVar17 = *(long *)(TypeInfo_CLZF2 + 0xb8);
  *(undefined8 *)(lVar17 + 0x18) = uVar8;
  pSVar16 = (System_Byte_array *)il2cpp_runtime_helper_022b4080(lVar17 + 0x18,uVar8);
  return pSVar16;
}


// Utility.Algorithms.LZFAlgorithm$$.ctor
// il2cpp: void Utility_Algorithms_LZFAlgorithm___ctor (Utility_Algorithms_LZFAlgorithm_o* __this, const MethodInfo* method);
// 0x4499710

void Utility_Algorithms_LZFAlgorithm___ctor(Utility_Algorithms_LZFAlgorithm_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


