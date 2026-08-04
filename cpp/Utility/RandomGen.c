// Type: Utility.RandomGen
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Utility/RandomGen.cs
// Prior real C# source (older reference): Assets/Scripts/Utility/RandomGen.cs
// --------------------------------

// Utility.RandomGen$$GetRandomBool
// il2cpp: bool Utility_RandomGen__GetRandomBool (const MethodInfo* method);
// 0x4493a20

bool_conflict Utility_RandomGen__GetRandomBool(MethodInfo *method)

{
  undefined4 extraout_EAX;
  float fVar1;
  
  fVar1 = UnityEngine_Random__Range(0.0,1.0,(MethodInfo *)0x0);
  return CONCAT31((int3)((uint)extraout_EAX >> 8),0.5 < fVar1);
}


// Utility.RandomGen$$GetRandomSign
// il2cpp: float Utility_RandomGen__GetRandomSign (const MethodInfo* method);
// 0x4493a40

float Utility_RandomGen__GetRandomSign(MethodInfo *method)

{
  float fVar1;
  
  fVar1 = UnityEngine_Random__Range(0.0,1.0,(MethodInfo *)0x0);
  return *(float *)(&g_data_00d1d4b0 + (ulong)(fVar1 <= 0.5) * 4);
}


// Utility.RandomGen$$Roll
// il2cpp: bool Utility_RandomGen__Roll (float probability, const MethodInfo* method);
// 0x4493a70

bool_conflict Utility_RandomGen__Roll(float probability,MethodInfo *method)

{
  undefined4 extraout_EAX;
  float fVar1;
  
  fVar1 = UnityEngine_Random__Range(0.0,1.0,(MethodInfo *)0x0);
  return CONCAT31((int3)((uint)extraout_EAX >> 8),fVar1 < probability);
}


// Utility.RandomGen$$GetRandomDirection
// il2cpp: UnityEngine_Vector3_o Utility_RandomGen__GetRandomDirection (bool _flat, const MethodInfo* method);
// 0x4493aa0

UnityEngine_Vector3_o Utility_RandomGen__GetRandomDirection(bool_conflict _flat,MethodInfo *method)

{
  int iVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  float fVar4;
  float fVar5;
  float fVar6;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dd;
  undefined4 extraout_XMM0_Dd_00;
  undefined4 extraout_XMM0_Dd_01;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined1 auVar10 [12];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  UnityEngine_Vector3_o UVar13;
  undefined8 local_28;
  undefined8 uVar9;
  
  fVar4 = UnityEngine_Random__Range(-1.0,1.0,(MethodInfo *)0x0);
  local_28 = CONCAT44(extraout_XMM0_Db,fVar4);
  fVar5 = UnityEngine_Random__Range(-1.0,1.0,(MethodInfo *)0x0);
  fVar6 = UnityEngine_Random__Range(-1.0,1.0,(MethodInfo *)0x0);
  auVar11._8_4_ = extraout_XMM0_Db;
  auVar11._0_8_ = local_28;
  auVar11._12_4_ = extraout_XMM0_Dd;
  auVar12._8_8_ = auVar11._8_8_;
  auVar12._4_4_ = fVar5;
  auVar12._0_4_ = fVar4;
  auVar10 = auVar12._0_12_;
  if (_flat != 0) {
    auVar10._4_4_ = 0;
    auVar10._0_4_ = fVar4;
    auVar10._8_4_ = extraout_XMM0_Db;
  }
  auVar3._12_4_ = extraout_XMM0_Db_00;
  auVar3._0_12_ = auVar10;
  if (g_data_057a6845 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
    uVar7 = 0;
    uVar8 = 0;
    g_data_057a6845 = '\x01';
    iVar1 = *(int *)(TypeInfo_Math + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_Math + 0xe4);
    uVar7 = extraout_XMM0_Dc;
    uVar8 = extraout_XMM0_Dd_00;
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
    uVar7 = 0;
    uVar8 = 0;
  }
  fVar4 = fVar6 * fVar6 + auVar10._4_4_ * auVar10._4_4_ + auVar10._0_4_ * auVar10._0_4_;
  if (fVar4 < 0.0) {
    fVar4 = sqrtf(fVar4);
    uVar7 = extraout_XMM0_Dc_00;
    uVar8 = extraout_XMM0_Dd_01;
  }
  else {
    fVar4 = SQRT(fVar4);
  }
  if (1e-05 < fVar4) {
    fVar6 = fVar6 / fVar4;
    auVar2._4_4_ = fVar4;
    auVar2._0_4_ = fVar4;
    auVar2._8_4_ = uVar7;
    auVar2._12_4_ = uVar8;
    auVar12 = divps(auVar3,auVar2);
    uVar9 = auVar12._0_8_;
  }
  else {
    if (g_data_057a65d5 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
      g_data_057a65d5 = '\x01';
    }
    uVar9 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
    fVar6 = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
  }
  UVar13.fields.z = fVar6;
  UVar13.fields.x = (float)(int)uVar9;
  UVar13.fields.y = (float)(int)((ulong)uVar9 >> 0x20);
  return (UnityEngine_Vector3_o)UVar13.fields;
}


// Utility.RandomGen$$ChooseRandom<object>
// il2cpp: Il2CppObject* Utility_RandomGen__ChooseRandom_object_ (System_Collections_Generic_List_T__o* items, const MethodInfo_25B5840* method);
// 0x26b5840

Il2CppObject *
Utility_RandomGen__ChooseRandom_object_
          (System_Collections_Generic_List_T__o *items,MethodInfo_25B5840 *method)

{
  Il2CppMethodPointer pIVar1;
  MethodInfo *pMVar2;
  InvokerMethod pIVar3;
  void *pvVar4;
  size_t __n;
  char cVar5;
  int32_t iVar6;
  int iVar7;
  Il2CppObject *pIVar8;
  MethodInfo_25B5840_RGCTXs *pMVar9;
  undefined8 *puVar10;
  long *plVar11;
  MethodInfo_25B5840 *pMVar12;
  long lVar13;
  undefined8 uVar14;
  System_ArgumentNullException_o *__this;
  System_String_o *pSVar15;
  System_ArgumentException_o *__this_00;
  System_ArgumentOutOfRangeException_o *__this_01;
  System_String_o *message;
  ulong uVar16;
  long lVar17;
  long *plVar18;
  MethodInfo_25B5840 *extraout_RDX;
  ulong extraout_RDX_00;
  ulong __n_00;
  void *pvVar19;
  MethodInfo_25B5840 *__this_02;
  MethodInfo_25B5840 *pMVar20;
  MethodInfo_25B5840 *pMVar21;
  void *pvVar22;
  long lVar23;
  long lVar24;
  undefined *puVar25;
  code *vtableDispatch;
  uint uVar26;
  ulong uVar27;
  undefined1 auVar28 [16];
  undefined8 uStack_e0;
  undefined1 auStack_d8 [8];
  ulong auStack_d0 [13];
  undefined8 uStack_68;
  int32_t *local_60;
  void *local_58;
  int32_t local_4c;
  System_Collections_Generic_List_T__o *local_48;
  
  pMVar12 = method;
  pMVar20 = (MethodInfo_25B5840 *)items;
  if (method->rgctx_data == (MethodInfo_25B5840_RGCTXs *)0x0) {
    pMVar20 = method;
    il2cpp_runtime_helper_02300a20();
  }
  if (items != (System_Collections_Generic_List_T__o *)0x0) {
    iVar6 = UnityEngine_Random__Range_4df2410(0,(items->fields)._size,(MethodInfo *)0x0);
    pIVar8 = System_Collections_Generic_List_object___get_Item
                       ((System_Collections_Generic_List_object__o *)items,iVar6,
                        (MethodInfo_362BED0 *)
                        method->rgctx_data->_2_System_Collections_Generic_List_T__get_Item);
    return pIVar8;
  }
  il2cpp_runtime_helper_022b2c90();
  pMVar9 = extraout_RDX->rgctx_data;
  __this_02 = pMVar12;
  pMVar21 = pMVar20;
  local_48 = items;
  if (pMVar9 == (MethodInfo_25B5840_RGCTXs *)0x0) {
    uStack_68 = 0x26b58bb;
    pMVar21 = extraout_RDX;
    il2cpp_runtime_helper_02300a20();
    pMVar9 = extraout_RDX->rgctx_data;
  }
  uVar27 = (ulong)(pMVar9->_3_T->_2).actualSize;
  uVar16 = uVar27 + 0xf & 0xfffffffffffffff0;
  lVar13 = -uVar16;
  pvVar22 = (void *)((long)&local_60 + lVar13);
  if (pMVar20 != (MethodInfo_25B5840 *)0x0) {
    pIVar1 = pMVar9->_1_System_Collections_Generic_List_T__get_Count->methodPointer;
    *(undefined8 *)((long)&uStack_68 + lVar13) = 0x26b58e9;
    iVar6 = (*pIVar1)();
    *(undefined8 *)((long)&uStack_68 + lVar13) = 0x26b58f4;
    local_4c = UnityEngine_Random__Range_4df2410(0,iVar6,(MethodInfo *)0x0);
    pMVar2 = extraout_RDX->rgctx_data->_2_System_Collections_Generic_List_T__get_Item;
    pIVar1 = pMVar2->methodPointer;
    local_60 = &local_4c;
    pIVar3 = pMVar2->invoker_method;
    local_58 = pvVar22;
    *(undefined8 *)((long)&uStack_68 + lVar13) = 0x26b591b;
    (*pIVar3)(pIVar1,pMVar2,pMVar20,&local_60,pvVar22);
    *(undefined8 *)((long)&uStack_68 + lVar13) = 0x26b5929;
    pIVar8 = memcpy(pMVar12,pvVar22,uVar27);
    return pIVar8;
  }
  *(undefined8 *)((long)&uStack_68 + lVar13) = 0x26b593d;
  il2cpp_runtime_helper_022b2c90();
  *(undefined1 **)((long)&uStack_68 + lVar13) = &stack0xffffffffffffffe0;
  *(ulong *)((long)auStack_d0 + lVar13 + 0x60) = uVar27;
  *(MethodInfo_25B5840 **)((long)auStack_d0 + lVar13 + 0x58) = pMVar12;
  *(MethodInfo_25B5840 **)((long)auStack_d0 + lVar13 + 0x50) = extraout_RDX;
  *(undefined8 *)((long)auStack_d0 + lVar13 + 0x48) = 0;
  *(void **)((long)auStack_d0 + lVar13 + 0x40) = pvVar22;
  uVar27 = extraout_RDX_00 & 0xffffffff;
  *(MethodInfo_25B5840 **)((long)auStack_d0 + lVar13 + 0x30) = pMVar21;
  lVar17 = *(long *)(uVar16 + 0x38);
  if (lVar17 == 0) {
    *(undefined8 *)((long)&uStack_e0 + lVar13) = 0x26b5973;
    il2cpp_runtime_helper_023445d0(&TypeInfo_ICollection);
    *(undefined8 *)((long)&uStack_e0 + lVar13) = 0x26b597f;
    il2cpp_runtime_helper_023445d0(&TypeInfo_IDisposable);
    *(undefined8 *)((long)&uStack_e0 + lVar13) = 0x26b598b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerator);
    *(undefined8 *)((long)&uStack_e0 + lVar13) = 0x26b5997;
    il2cpp_runtime_helper_023445d0(&TypeInfo_object);
    lVar17 = *(long *)(uVar16 + 0x38);
    if (lVar17 == 0) {
      *(undefined8 *)((long)&uStack_e0 + lVar13) = 0x26b59a8;
      il2cpp_runtime_helper_02300a20(uVar16);
      lVar17 = *(long *)(uVar16 + 0x38);
    }
  }
  *(ulong *)((long)auStack_d0 + lVar13 + 0x38) = uVar16;
  __n_00 = (ulong)*(uint *)(*(long *)(lVar17 + 0x40) + 0xfc);
  uVar16 = __n_00 + 0xf & 0xfffffffffffffff0;
  lVar17 = (long)(auStack_d8 + (lVar13 - uVar16)) - uVar16;
  *(long *)((long)auStack_d0 + lVar13 + 0x10) = lVar17;
  pvVar22 = (void *)(lVar17 - uVar16);
  *(void **)((long)auStack_d0 + lVar13 + 0x18) = pvVar22;
  *(ulong *)((long)auStack_d0 + lVar13 + 8) = __n_00;
  *(undefined8 *)((long)pvVar22 + -8) = 0x26b59f0;
  memset(pvVar22,0,__n_00);
  if (__this_02 == (MethodInfo_25B5840 *)0x0) goto label_026b5ea2;
  *(undefined8 *)((long)pvVar22 + -8) = 0x26b5a03;
  iVar6 = System_Array__get_Rank((System_Array_o *)__this_02,(MethodInfo *)0x0);
  plVar11 = *(long **)((long)auStack_d0 + lVar13 + 0x30);
  if (iVar6 != 1) goto label_026b5ede;
  *(undefined8 *)((long)pvVar22 + -8) = 0x26b5a1c;
  iVar6 = System_Array__GetLowerBound((System_Array_o *)__this_02,0,(MethodInfo *)0x0);
  if (iVar6 != 0) {
    *(undefined8 *)((long)pvVar22 + -8) = 0x26b5f0d;
    uVar14 = il2cpp_runtime_helper_023445d0(&TypeInfo_ArgumentException);
    *(undefined8 *)((long)pvVar22 + -8) = 0x26b5f15;
    __this_00 = (System_ArgumentException_o *)il2cpp_runtime_helper_023052d0(uVar14);
    puVar25 = &"The lower bound of target array must be zero.";
    goto label_026b6162;
  }
  *(undefined1 **)((long)auStack_d0 + lVar13 + 0x20) = auStack_d8 + (lVar13 - uVar16);
  if ((int)extraout_RDX_00 < 0) {
    *(undefined8 *)((long)pvVar22 + -8) = 0x26b5f30;
    uVar14 = il2cpp_runtime_helper_023445d0(&TypeInfo_ArgumentOutOfRangeException);
    *(undefined8 *)((long)pvVar22 + -8) = 0x26b5f38;
    __this_01 = (System_ArgumentOutOfRangeException_o *)il2cpp_runtime_helper_023052d0(uVar14);
    *(undefined8 *)((long)pvVar22 + -8) = 0x26b5f47;
    pSVar15 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"index");
    *(undefined8 *)((long)pvVar22 + -8) = 0x26b5f56;
    message = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Non-negative number required.");
    *(undefined8 *)((long)pvVar22 + -8) = 0x26b5f66;
    System_ArgumentOutOfRangeException___ctor_3c0eb50(__this_01,pSVar15,message,(MethodInfo *)0x0);
    uVar14 = *(undefined8 *)((long)auStack_d0 + lVar13 + 0x38);
    *(undefined8 *)((long)pvVar22 + -8) = 0x26b5f72;
    il2cpp_runtime_helper_022b2b10(__this_01,uVar14);
label_026b5f72:
    *(undefined8 *)((long)pvVar22 + -8) = 0x26b5f77;
    il2cpp_runtime_helper_022b2c90();
label_026b5f77:
    *(undefined8 *)((long)pvVar22 + -8) = 0x26b5f83;
    uVar14 = il2cpp_runtime_helper_023445d0(&TypeInfo_ArgumentException);
    *(undefined8 *)((long)pvVar22 + -8) = 0x26b5f8b;
    __this_00 = (System_ArgumentException_o *)il2cpp_runtime_helper_023052d0(uVar14);
    puVar25 = &"Destination array is not long enough to copy all the items in the collection. Check array index and length.";
    goto label_026b6162;
  }
  *(undefined8 *)((long)pvVar22 + -8) = 0x26b5a3b;
  iVar6 = System_Array__get_Length((System_Array_o *)__this_02,(MethodInfo *)0x0);
  if (plVar11 == (long *)0x0) goto label_026b5f72;
  lVar17 = **(long **)(*(long *)((long)auStack_d0 + lVar13 + 0x38) + 0x38);
  if ((*(byte *)(lVar17 + 0x135) & 1) == 0) {
    *(undefined8 *)((long)pvVar22 + -8) = 0x26b5a63;
    lVar17 = il2cpp_runtime_helper_023009c0();
  }
  lVar24 = *plVar11;
  if ((ulong)*(ushort *)(lVar24 + 0x12e) != 0) {
    lVar23 = 0;
    do {
      if (*(long *)(*(long *)(lVar24 + 0xb0) + lVar23) == lVar17) {
        puVar10 = (undefined8 *)
                  ((long)*(int *)(*(long *)(lVar24 + 0xb0) + 8 + lVar23) * 0x10 + lVar24 + 0x138);
        goto label_026b5ac1;
      }
      lVar23 = lVar23 + 0x10;
    } while ((ulong)*(ushort *)(lVar24 + 0x12e) << 4 != lVar23);
  }
  *(undefined8 *)((long)pvVar22 + -8) = 0x26b5aa9;
  puVar10 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar11,lVar17,0);
label_026b5ac1:
  uVar14 = puVar10[1];
  vtableDispatch = (code *)*puVar10;
  *(undefined8 *)((long)pvVar22 + -8) = 0x26b5aca;
  iVar7 = (*vtableDispatch)(plVar11,uVar14);
  if (iVar6 - (int)extraout_RDX_00 < iVar7) goto label_026b5f77;
  *(undefined8 *)((long)pvVar22 + -8) = 0x26b5ae8;
  plVar11 = (long *)il2cpp_runtime_helper_023051f0(plVar11,TypeInfo_ICollection);
  if (plVar11 != (long *)0x0) {
    lVar13 = *plVar11;
    if ((ulong)*(ushort *)(lVar13 + 0x12e) != 0) {
      lVar17 = 0;
      do {
        if (*(long *)(*(long *)(lVar13 + 0xb0) + lVar17) == TypeInfo_ICollection) {
          puVar10 = (undefined8 *)
                    (lVar13 + (long)*(int *)(*(long *)(lVar13 + 0xb0) + 8 + lVar17) * 0x10 + 0x138);
          goto label_026b5be7;
        }
        lVar17 = lVar17 + 0x10;
      } while ((ulong)*(ushort *)(lVar13 + 0x12e) << 4 != lVar17);
    }
    *(undefined8 *)((long)pvVar22 + -8) = 0x26b5b2d;
    puVar10 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar11,TypeInfo_ICollection,0);
label_026b5be7:
    vtableDispatch = (code *)*puVar10;
    uVar14 = puVar10[1];
    pMVar12 = __this_02;
label_026b5ca2:
    pIVar8 = (Il2CppObject *)
             (*vtableDispatch)
                       (plVar11,pMVar12,extraout_RDX_00 & 0xffffffff,uVar14,vtableDispatch);
    return pIVar8;
  }
  lVar17 = *(long *)(*(long *)(*(long *)((long)auStack_d0 + lVar13 + 0x38) + 0x38) + 0x10);
  if ((*(byte *)(lVar17 + 0x135) & 1) == 0) {
    *(undefined8 *)((long)pvVar22 + -8) = 0x26b5b4f;
    lVar17 = il2cpp_runtime_helper_023009c0(lVar17);
  }
  plVar11 = *(long **)((long)auStack_d0 + lVar13 + 0x30);
  *(undefined8 *)((long)pvVar22 + -8) = 0x26b5b5e;
  pMVar12 = (MethodInfo_25B5840 *)il2cpp_runtime_helper_023051f0(__this_02,lVar17);
  if (pMVar12 != (MethodInfo_25B5840 *)0x0) {
    lVar13 = **(long **)(*(long *)((long)auStack_d0 + lVar13 + 0x38) + 0x38);
    if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
      *(undefined8 *)((long)pvVar22 + -8) = 0x26b5b86;
      lVar13 = il2cpp_runtime_helper_023009c0();
    }
    lVar17 = *plVar11;
    if ((ulong)*(ushort *)(lVar17 + 0x12e) != 0) {
      lVar24 = 0;
      do {
        if (*(long *)(*(long *)(lVar17 + 0xb0) + lVar24) == lVar13) {
          puVar10 = (undefined8 *)
                    (lVar17 + (long)(*(int *)(*(long *)(lVar17 + 0xb0) + 8 + lVar24) + 5) * 0x10 + 0x138);
          goto label_026b5c95;
        }
        lVar24 = lVar24 + 0x10;
      } while ((ulong)*(ushort *)(lVar17 + 0x12e) << 4 != lVar24);
    }
    *(undefined8 *)((long)pvVar22 + -8) = 0x26b5bd0;
    puVar10 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar11,lVar13,5);
label_026b5c95:
    vtableDispatch = (code *)*puVar10;
    uVar14 = puVar10[1];
    goto label_026b5ca2;
  }
  *(undefined8 *)((long)pvVar22 + -8) = 0x26b5c0b;
  lVar17 = il2cpp_runtime_helper_023051f0(__this_02,TypeInfo_object);
  *(long *)((long)auStack_d0 + lVar13 + 0x30) = lVar17;
  if (lVar17 == 0) {
label_026b6144:
    *(undefined8 *)((long)pvVar22 + -8) = 0x26b6150;
    uVar14 = il2cpp_runtime_helper_023445d0(&TypeInfo_ArgumentException);
    *(undefined8 *)((long)pvVar22 + -8) = 0x26b6158;
    __this_00 = (System_ArgumentException_o *)il2cpp_runtime_helper_023052d0(uVar14);
    puVar25 = &"Target array type is not compatible with the type of items in the collection.";
    goto label_026b6162;
  }
  lVar17 = *(long *)(*(long *)(*(long *)((long)auStack_d0 + lVar13 + 0x38) + 0x38) + 0x20);
  if ((*(byte *)(lVar17 + 0x135) & 1) == 0) {
    *(undefined8 *)((long)pvVar22 + -8) = 0x26b5c35;
    lVar17 = il2cpp_runtime_helper_023009c0();
  }
  lVar24 = *plVar11;
  if ((ulong)*(ushort *)(lVar24 + 0x12e) != 0) {
    lVar23 = 0;
    do {
      if (*(long *)(*(long *)(lVar24 + 0xb0) + lVar23) == lVar17) {
        puVar10 = (undefined8 *)
                  ((long)*(int *)(*(long *)(lVar24 + 0xb0) + 8 + lVar23) * 0x10 + lVar24 + 0x138);
        goto label_026b5cc9;
      }
      lVar23 = lVar23 + 0x10;
    } while ((ulong)*(ushort *)(lVar24 + 0x12e) << 4 != lVar23);
  }
  *(undefined8 *)((long)pvVar22 + -8) = 0x26b5c79;
  puVar10 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar11,lVar17,0);
label_026b5cc9:
  uVar14 = puVar10[1];
  vtableDispatch = (code *)*puVar10;
  *(undefined8 *)((long)pvVar22 + -8) = 0x26b5cd2;
  plVar11 = (long *)(*vtableDispatch)(plVar11,uVar14);
  if (plVar11 != (long *)0x0) {
    *(undefined8 *)((long)auStack_d0 + lVar13 + 0x28) = 0;
    pvVar4 = *(void **)((long)auStack_d0 + lVar13 + 0x18);
    do {
      lVar17 = *plVar11;
      if ((ulong)*(ushort *)(lVar17 + 0x12e) != 0) {
        lVar24 = 0;
        do {
          if (*(long *)(*(long *)(lVar17 + 0xb0) + lVar24) == TypeInfo_IEnumerator) {
            puVar10 = (undefined8 *)
                      ((long)*(int *)(*(long *)(lVar17 + 0xb0) + 8 + lVar24) * 0x10 + lVar17 + 0x138);
            pvVar19 = *(void **)((long)auStack_d0 + lVar13 + 0x20);
            goto label_026b5d67;
          }
          lVar24 = lVar24 + 0x10;
        } while ((ulong)*(ushort *)(lVar17 + 0x12e) << 4 != lVar24);
      }
      *(undefined8 *)((long)pvVar22 + -8) = 0x26b5d39;
      puVar10 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar11,TypeInfo_IEnumerator,0);
      pvVar19 = *(void **)((long)auStack_d0 + lVar13 + 0x20);
label_026b5d67:
      uVar14 = puVar10[1];
      vtableDispatch = (code *)*puVar10;
      *(undefined8 *)((long)pvVar22 + -8) = 0x26b5d70;
      pIVar8 = (Il2CppObject *)(*vtableDispatch)(plVar11,uVar14);
      if ((char)pIVar8 == '\0') goto label_026b6016;
      lVar17 = *(long *)(*(long *)(*(long *)((long)auStack_d0 + lVar13 + 0x38) + 0x38) + 0x30);
      if ((*(byte *)(lVar17 + 0x135) & 1) == 0) {
        *(undefined8 *)((long)pvVar22 + -8) = 0x26b5d95;
        lVar17 = il2cpp_runtime_helper_023009c0();
      }
      lVar24 = *plVar11;
      if ((ulong)*(ushort *)(lVar24 + 0x12e) != 0) {
        lVar23 = 0;
        do {
          if (*(long *)(*(long *)(lVar24 + 0xb0) + lVar23) == lVar17) {
            lVar17 = (long)*(int *)(*(long *)(lVar24 + 0xb0) + 8 + lVar23) * 0x10 + lVar24 + 0x138;
            goto label_026b5df2;
          }
          lVar23 = lVar23 + 0x10;
        } while ((ulong)*(ushort *)(lVar24 + 0x12e) << 4 != lVar23);
      }
      *(undefined8 *)((long)pvVar22 + -8) = 0x26b5ddc;
      lVar17 = il2cpp_runtime_helper_02300d20(plVar11,lVar17,0);
label_026b5df2:
      *(void **)((long)auStack_d0 + lVar13) = pvVar19;
      lVar17 = *(long *)(lVar17 + 8);
      uVar14 = *(undefined8 *)(lVar17 + 8);
      vtableDispatch = *(code **)(lVar17 + 0x10);
      *(undefined8 *)((long)pvVar22 + -8) = 0x26b5e0b;
      (*vtableDispatch)(uVar14,lVar17,plVar11,(long)auStack_d0 + lVar13,pvVar19);
      __n = *(size_t *)((long)auStack_d0 + lVar13 + 8);
      *(undefined8 *)((long)pvVar22 + -8) = 0x26b5e1d;
      memcpy(pvVar4,pvVar19,__n);
      pvVar19 = *(void **)((long)auStack_d0 + lVar13 + 0x10);
      *(undefined8 *)((long)pvVar22 + -8) = 0x26b5e2f;
      memcpy(pvVar19,pvVar4,__n);
      uVar14 = *(undefined8 *)(*(long *)(*(long *)((long)auStack_d0 + lVar13 + 0x38) + 0x38) + 0x40);
      *(undefined8 *)((long)pvVar22 + -8) = 0x26b5e43;
      lVar17 = il2cpp_runtime_helper_02304f30(uVar14,pvVar19);
      plVar18 = *(long **)((long)auStack_d0 + lVar13 + 0x30);
      if (lVar17 != 0) {
        uVar14 = *(undefined8 *)(*plVar18 + 0x40);
        *(undefined8 *)((long)pvVar22 + -8) = 0x26b5e5e;
        lVar24 = il2cpp_runtime_helper_023051f0(lVar17,uVar14);
        plVar18 = *(long **)((long)auStack_d0 + lVar13 + 0x30);
        if (lVar24 == 0) goto label_026b5e93;
      }
      uVar26 = (uint)uVar27;
      if (*(uint *)(plVar18 + 3) <= uVar26) goto label_026b5e8e;
      uVar27 = (ulong)(uVar26 + 1);
      plVar18[(long)(int)uVar26 + 4] = lVar17;
      *(undefined8 *)((long)pvVar22 + -8) = 0x26b5e89;
      il2cpp_runtime_helper_022b4080(plVar18 + (long)(int)uVar26 + 4,lVar17);
    } while( true );
  }
  *(undefined8 *)((long)pvVar22 + -8) = 0x26b5f9f;
  auVar28 = il2cpp_runtime_helper_022b2c90();
  __this_00 = auVar28._8_8_;
  uVar14 = auVar28._0_8_;
  if (auVar28._8_4_ == 1) {
    *(undefined8 *)((long)pvVar22 + -8) = 0x26b600a;
    puVar10 = (undefined8 *)__cxa_begin_catch();
    *(undefined8 *)((long)auStack_d0 + lVar13 + 0x28) = *puVar10;
    *(undefined8 *)((long)pvVar22 + -8) = 0x26b6016;
    pIVar8 = (Il2CppObject *)__cxa_end_catch();
label_026b6016:
    lVar13 = *(long *)((long)auStack_d0 + lVar13 + 0x28);
    if (plVar11 != (long *)0x0) {
      lVar17 = *plVar11;
      if ((ulong)*(ushort *)(lVar17 + 0x12e) != 0) {
        lVar24 = 0;
        do {
          if (*(long *)(*(long *)(lVar17 + 0xb0) + lVar24) == TypeInfo_IDisposable) {
            puVar10 = (undefined8 *)
                      (lVar17 + (long)*(int *)(*(long *)(lVar17 + 0xb0) + 8 + lVar24) * 0x10 + 0x138);
            goto label_026b607d;
          }
          lVar24 = lVar24 + 0x10;
        } while ((ulong)*(ushort *)(lVar17 + 0x12e) << 4 != lVar24);
      }
      *(undefined8 *)((long)pvVar22 + -8) = 0x26b6069;
      puVar10 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar11,TypeInfo_IDisposable,0);
label_026b607d:
      uVar14 = puVar10[1];
      vtableDispatch = (code *)*puVar10;
      *(undefined8 *)((long)pvVar22 + -8) = 0x26b6086;
      pIVar8 = (Il2CppObject *)(*vtableDispatch)(plVar11,uVar14);
    }
    if (lVar13 == 0) {
      return pIVar8;
    }
    *(undefined8 *)((long)pvVar22 + -8) = 0x26b61b2;
    uVar14 = il2cpp_runtime_helper_022fefe0(lVar13);
    *(undefined8 *)((long)pvVar22 + -8) = 0x26b61ba;
    __cxa_end_catch();
label_026b61e7:
    *(undefined **)((long)pvVar22 + -8) = &g_data_026b61ef;
    _Unwind_Resume(uVar14);
  }
  *(undefined8 *)((long)auStack_d0 + lVar13 + 0x28) = 0;
  if (*(long *)((long)auStack_d0 + lVar13 + 0x28) == 0) {
    if (auVar28._8_4_ != 1) goto label_026b61e7;
    *(undefined8 *)((long)pvVar22 + -8) = 0x26b611e;
    __this_00 = (System_ArgumentException_o *)__cxa_begin_catch(uVar14);
    *(undefined8 *)((long)pvVar22 + -8) = 0x26b612d;
    uVar14 = il2cpp_runtime_helper_023445d0(&TypeInfo_ArrayTypeMismatchException);
    pvVar4 = (__this_00->klass->_1).image;
    *(undefined8 *)((long)pvVar22 + -8) = 0x26b613b;
    cVar5 = il2cpp_runtime_helper_0233e000(uVar14,pvVar4);
    if (cVar5 == '\0') goto label_026b6189;
    *(undefined8 *)((long)pvVar22 + -8) = 0x26b6144;
    __cxa_end_catch();
    goto label_026b6144;
  }
  goto label_026b6180;
label_026b5e8e:
  *(undefined8 *)((long)pvVar22 + -8) = 0x26b5e93;
  il2cpp_runtime_helper_022b2ca0();
label_026b5e93:
  *(undefined8 *)((long)pvVar22 + -8) = 0x26b5e98;
  uVar14 = il2cpp_runtime_helper_0231b270();
  *(undefined8 *)((long)pvVar22 + -8) = 0x26b5ea2;
  il2cpp_runtime_helper_022b2b10(uVar14,0);
label_026b5ea2:
  *(undefined8 *)((long)pvVar22 + -8) = 0x26b5eae;
  uVar14 = il2cpp_runtime_helper_023445d0(&TypeInfo_ArgumentNullException);
  *(undefined8 *)((long)pvVar22 + -8) = 0x26b5eb6;
  __this = (System_ArgumentNullException_o *)il2cpp_runtime_helper_023052d0(uVar14);
  *(undefined8 *)((long)pvVar22 + -8) = 0x26b5ec5;
  pSVar15 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"array");
  *(undefined8 *)((long)pvVar22 + -8) = 0x26b5ed2;
  System_ArgumentNullException___ctor_3c0ad60(__this,pSVar15,(MethodInfo *)0x0);
  uVar14 = *(undefined8 *)((long)auStack_d0 + lVar13 + 0x38);
  *(undefined8 *)((long)pvVar22 + -8) = 0x26b5ede;
  il2cpp_runtime_helper_022b2b10(__this,uVar14);
label_026b5ede:
  *(undefined8 *)((long)pvVar22 + -8) = 0x26b5eea;
  uVar14 = il2cpp_runtime_helper_023445d0(&TypeInfo_ArgumentException);
  *(undefined8 *)((long)pvVar22 + -8) = 0x26b5ef2;
  __this_00 = (System_ArgumentException_o *)il2cpp_runtime_helper_023052d0(uVar14);
  puVar25 = &"Only single dimensional arrays are supported for the requested action.";
label_026b6162:
  *(undefined8 *)((long)pvVar22 + -8) = 0x26b6167;
  pSVar15 = (System_String_o *)il2cpp_runtime_helper_023445d0(puVar25);
  *(undefined8 *)((long)pvVar22 + -8) = 0x26b6174;
  System_ArgumentException___ctor_3c12490(__this_00,pSVar15,(MethodInfo *)0x0);
  uVar14 = *(undefined8 *)((long)auStack_d0 + lVar13 + 0x38);
  *(undefined8 *)((long)pvVar22 + -8) = 0x26b6180;
  il2cpp_runtime_helper_022b2b10(__this_00,uVar14);
label_026b6180:
  uVar14 = *(undefined8 *)((long)auStack_d0 + lVar13 + 0x28);
  *(undefined8 *)((long)pvVar22 + -8) = 0x26b6189;
  il2cpp_runtime_helper_022fefe0(uVar14);
label_026b6189:
  *(undefined8 *)((long)pvVar22 + -8) = 0x26b6193;
  puVar10 = (undefined8 *)__cxa_allocate_exception(8);
  *puVar10 = __this_00->klass;
  *(undefined8 *)((long)pvVar22 + -8) = 0x26b61aa;
  __cxa_throw(puVar10,&PTR_PTR_05215060,0);
}


// Utility.RandomGen$$ChooseRandom<__Il2CppFullySharedGenericType>
// il2cpp: Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o Utility_RandomGen__ChooseRandom___Il2CppFullySharedGenericType_ (System_Collections_Generic_List_T__o* items, const MethodInfo_25B5890* method);
// 0x26b5890

Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o
Utility_RandomGen__ChooseRandom___Il2CppFullySharedGenericType_
          (System_Collections_Generic_List_T__o *items,MethodInfo_25B5890 *method)

{
  Il2CppArrayBounds *pIVar1;
  il2cpp_array_size_t iVar2;
  void *pvVar3;
  size_t __n;
  char cVar4;
  int32_t iVar5;
  int iVar6;
  System_Object_array *pSVar7;
  undefined8 *puVar8;
  long *plVar9;
  MethodInfo_25B5890 *pMVar10;
  long lVar11;
  undefined8 uVar12;
  System_ArgumentNullException_o *__this;
  System_String_o *pSVar13;
  System_ArgumentException_o *__this_00;
  System_ArgumentOutOfRangeException_o *__this_01;
  System_String_o *message;
  ulong uVar14;
  long lVar15;
  long *plVar16;
  System_Collections_Generic_List_T__o *in_RDX;
  void *extraout_RDX;
  ulong extraout_RDX_00;
  ulong __n_00;
  void *pvVar17;
  MethodInfo_25B5890 *__this_02;
  System_Collections_Generic_List_T__o *pSVar18;
  void *pvVar19;
  long lVar20;
  long lVar21;
  undefined *puVar22;
  code *vtableDispatch;
  uint uVar23;
  ulong uVar24;
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o UVar25;
  undefined1 auVar26 [16];
  undefined8 uStack_c8;
  undefined1 auStack_c0 [8];
  ulong auStack_b8 [13];
  undefined8 uStack_50;
  int32_t *piStack_48;
  void *pvStack_40;
  int32_t iStack_34;
  
  pSVar7 = in_RDX[1].fields._items;
  __this_02 = method;
  pSVar18 = items;
  if (pSVar7 == (System_Object_array *)0x0) {
    uStack_50 = 0x26b58bb;
    pSVar18 = in_RDX;
    il2cpp_runtime_helper_02300a20();
    pSVar7 = in_RDX[1].fields._items;
  }
  uVar24 = (ulong)*(uint *)(pSVar7->max_length + 0xfc);
  uVar14 = uVar24 + 0xf & 0xfffffffffffffff0;
  lVar11 = -uVar14;
  pvVar19 = (void *)((long)&piStack_48 + lVar11);
  if (items != (System_Collections_Generic_List_T__o *)0x0) {
    vtableDispatch = *(code **)(pSVar7->obj).monitor;
    *(undefined8 *)((long)&uStack_50 + lVar11) = 0x26b58e9;
    iVar5 = (*vtableDispatch)();
    *(undefined8 *)((long)&uStack_50 + lVar11) = 0x26b58f4;
    iStack_34 = UnityEngine_Random__Range_4df2410(0,iVar5,(MethodInfo *)0x0);
    pIVar1 = (in_RDX[1].fields._items)->bounds;
    iVar2 = pIVar1->length;
    piStack_48 = &iStack_34;
    vtableDispatch = (code *)pIVar1[1].length;
    pvStack_40 = pvVar19;
    *(undefined8 *)((long)&uStack_50 + lVar11) = 0x26b591b;
    (*vtableDispatch)(iVar2,pIVar1,items,&piStack_48,pvVar19);
    *(undefined8 *)((long)&uStack_50 + lVar11) = 0x26b5929;
    UVar25.klass = memcpy(method,pvVar19,uVar24);
    UVar25.monitor = extraout_RDX;
    return UVar25;
  }
  *(undefined8 *)((long)&uStack_50 + lVar11) = 0x26b593d;
  il2cpp_runtime_helper_022b2c90();
  *(undefined1 **)((long)&uStack_50 + lVar11) = &stack0xfffffffffffffff8;
  *(ulong *)((long)auStack_b8 + lVar11 + 0x60) = uVar24;
  *(MethodInfo_25B5890 **)((long)auStack_b8 + lVar11 + 0x58) = method;
  *(System_Collections_Generic_List_T__o **)((long)auStack_b8 + lVar11 + 0x50) = in_RDX;
  *(undefined8 *)((long)auStack_b8 + lVar11 + 0x48) = 0;
  *(void **)((long)auStack_b8 + lVar11 + 0x40) = pvVar19;
  uVar24 = extraout_RDX_00 & 0xffffffff;
  *(System_Collections_Generic_List_T__o **)((long)auStack_b8 + lVar11 + 0x30) = pSVar18;
  lVar15 = *(long *)(uVar14 + 0x38);
  if (lVar15 == 0) {
    *(undefined8 *)((long)&uStack_c8 + lVar11) = 0x26b5973;
    il2cpp_runtime_helper_023445d0(&TypeInfo_ICollection);
    *(undefined8 *)((long)&uStack_c8 + lVar11) = 0x26b597f;
    il2cpp_runtime_helper_023445d0(&TypeInfo_IDisposable);
    *(undefined8 *)((long)&uStack_c8 + lVar11) = 0x26b598b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerator);
    *(undefined8 *)((long)&uStack_c8 + lVar11) = 0x26b5997;
    il2cpp_runtime_helper_023445d0(&TypeInfo_object);
    lVar15 = *(long *)(uVar14 + 0x38);
    if (lVar15 == 0) {
      *(undefined8 *)((long)&uStack_c8 + lVar11) = 0x26b59a8;
      il2cpp_runtime_helper_02300a20(uVar14);
      lVar15 = *(long *)(uVar14 + 0x38);
    }
  }
  *(ulong *)((long)auStack_b8 + lVar11 + 0x38) = uVar14;
  __n_00 = (ulong)*(uint *)(*(long *)(lVar15 + 0x40) + 0xfc);
  uVar14 = __n_00 + 0xf & 0xfffffffffffffff0;
  lVar15 = (long)(auStack_c0 + (lVar11 - uVar14)) - uVar14;
  *(long *)((long)auStack_b8 + lVar11 + 0x10) = lVar15;
  pvVar19 = (void *)(lVar15 - uVar14);
  *(void **)((long)auStack_b8 + lVar11 + 0x18) = pvVar19;
  *(ulong *)((long)auStack_b8 + lVar11 + 8) = __n_00;
  *(undefined8 *)((long)pvVar19 + -8) = 0x26b59f0;
  memset(pvVar19,0,__n_00);
  if (__this_02 == (MethodInfo_25B5890 *)0x0) goto label_026b5ea2;
  *(undefined8 *)((long)pvVar19 + -8) = 0x26b5a03;
  iVar5 = System_Array__get_Rank((System_Array_o *)__this_02,(MethodInfo *)0x0);
  plVar9 = *(long **)((long)auStack_b8 + lVar11 + 0x30);
  if (iVar5 != 1) goto label_026b5ede;
  *(undefined8 *)((long)pvVar19 + -8) = 0x26b5a1c;
  iVar5 = System_Array__GetLowerBound((System_Array_o *)__this_02,0,(MethodInfo *)0x0);
  if (iVar5 != 0) {
    *(undefined8 *)((long)pvVar19 + -8) = 0x26b5f0d;
    uVar12 = il2cpp_runtime_helper_023445d0(&TypeInfo_ArgumentException);
    *(undefined8 *)((long)pvVar19 + -8) = 0x26b5f15;
    __this_00 = (System_ArgumentException_o *)il2cpp_runtime_helper_023052d0(uVar12);
    puVar22 = &"The lower bound of target array must be zero.";
    goto label_026b6162;
  }
  *(undefined1 **)((long)auStack_b8 + lVar11 + 0x20) = auStack_c0 + (lVar11 - uVar14);
  if ((int)extraout_RDX_00 < 0) {
    *(undefined8 *)((long)pvVar19 + -8) = 0x26b5f30;
    uVar12 = il2cpp_runtime_helper_023445d0(&TypeInfo_ArgumentOutOfRangeException);
    *(undefined8 *)((long)pvVar19 + -8) = 0x26b5f38;
    __this_01 = (System_ArgumentOutOfRangeException_o *)il2cpp_runtime_helper_023052d0(uVar12);
    *(undefined8 *)((long)pvVar19 + -8) = 0x26b5f47;
    pSVar13 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"index");
    *(undefined8 *)((long)pvVar19 + -8) = 0x26b5f56;
    message = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Non-negative number required.");
    *(undefined8 *)((long)pvVar19 + -8) = 0x26b5f66;
    System_ArgumentOutOfRangeException___ctor_3c0eb50(__this_01,pSVar13,message,(MethodInfo *)0x0);
    uVar12 = *(undefined8 *)((long)auStack_b8 + lVar11 + 0x38);
    *(undefined8 *)((long)pvVar19 + -8) = 0x26b5f72;
    il2cpp_runtime_helper_022b2b10(__this_01,uVar12);
label_026b5f72:
    *(undefined8 *)((long)pvVar19 + -8) = 0x26b5f77;
    il2cpp_runtime_helper_022b2c90();
label_026b5f77:
    *(undefined8 *)((long)pvVar19 + -8) = 0x26b5f83;
    uVar12 = il2cpp_runtime_helper_023445d0(&TypeInfo_ArgumentException);
    *(undefined8 *)((long)pvVar19 + -8) = 0x26b5f8b;
    __this_00 = (System_ArgumentException_o *)il2cpp_runtime_helper_023052d0(uVar12);
    puVar22 = &"Destination array is not long enough to copy all the items in the collection. Check array index and length.";
    goto label_026b6162;
  }
  *(undefined8 *)((long)pvVar19 + -8) = 0x26b5a3b;
  iVar5 = System_Array__get_Length((System_Array_o *)__this_02,(MethodInfo *)0x0);
  if (plVar9 == (long *)0x0) goto label_026b5f72;
  lVar15 = **(long **)(*(long *)((long)auStack_b8 + lVar11 + 0x38) + 0x38);
  if ((*(byte *)(lVar15 + 0x135) & 1) == 0) {
    *(undefined8 *)((long)pvVar19 + -8) = 0x26b5a63;
    lVar15 = il2cpp_runtime_helper_023009c0();
  }
  lVar21 = *plVar9;
  if ((ulong)*(ushort *)(lVar21 + 0x12e) != 0) {
    lVar20 = 0;
    do {
      if (*(long *)(*(long *)(lVar21 + 0xb0) + lVar20) == lVar15) {
        puVar8 = (undefined8 *)((long)*(int *)(*(long *)(lVar21 + 0xb0) + 8 + lVar20) * 0x10 + lVar21 + 0x138)
        ;
        goto label_026b5ac1;
      }
      lVar20 = lVar20 + 0x10;
    } while ((ulong)*(ushort *)(lVar21 + 0x12e) << 4 != lVar20);
  }
  *(undefined8 *)((long)pvVar19 + -8) = 0x26b5aa9;
  puVar8 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar9,lVar15,0);
label_026b5ac1:
  uVar12 = puVar8[1];
  vtableDispatch = (code *)*puVar8;
  *(undefined8 *)((long)pvVar19 + -8) = 0x26b5aca;
  iVar6 = (*vtableDispatch)(plVar9,uVar12);
  if (iVar5 - (int)extraout_RDX_00 < iVar6) goto label_026b5f77;
  *(undefined8 *)((long)pvVar19 + -8) = 0x26b5ae8;
  plVar9 = (long *)il2cpp_runtime_helper_023051f0(plVar9,TypeInfo_ICollection);
  if (plVar9 != (long *)0x0) {
    lVar11 = *plVar9;
    if ((ulong)*(ushort *)(lVar11 + 0x12e) != 0) {
      lVar15 = 0;
      do {
        if (*(long *)(*(long *)(lVar11 + 0xb0) + lVar15) == TypeInfo_ICollection) {
          puVar8 = (undefined8 *)
                   (lVar11 + (long)*(int *)(*(long *)(lVar11 + 0xb0) + 8 + lVar15) * 0x10 + 0x138);
          goto label_026b5be7;
        }
        lVar15 = lVar15 + 0x10;
      } while ((ulong)*(ushort *)(lVar11 + 0x12e) << 4 != lVar15);
    }
    *(undefined8 *)((long)pvVar19 + -8) = 0x26b5b2d;
    puVar8 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar9,TypeInfo_ICollection,0);
label_026b5be7:
    vtableDispatch = (code *)*puVar8;
    uVar12 = puVar8[1];
    pMVar10 = __this_02;
label_026b5ca2:
    UVar25 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o)
             (*vtableDispatch)
                       (plVar9,pMVar10,extraout_RDX_00 & 0xffffffff,uVar12,vtableDispatch);
    return UVar25;
  }
  lVar15 = *(long *)(*(long *)(*(long *)((long)auStack_b8 + lVar11 + 0x38) + 0x38) + 0x10);
  if ((*(byte *)(lVar15 + 0x135) & 1) == 0) {
    *(undefined8 *)((long)pvVar19 + -8) = 0x26b5b4f;
    lVar15 = il2cpp_runtime_helper_023009c0(lVar15);
  }
  plVar9 = *(long **)((long)auStack_b8 + lVar11 + 0x30);
  *(undefined8 *)((long)pvVar19 + -8) = 0x26b5b5e;
  pMVar10 = (MethodInfo_25B5890 *)il2cpp_runtime_helper_023051f0(__this_02,lVar15);
  if (pMVar10 != (MethodInfo_25B5890 *)0x0) {
    lVar11 = **(long **)(*(long *)((long)auStack_b8 + lVar11 + 0x38) + 0x38);
    if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
      *(undefined8 *)((long)pvVar19 + -8) = 0x26b5b86;
      lVar11 = il2cpp_runtime_helper_023009c0();
    }
    lVar15 = *plVar9;
    if ((ulong)*(ushort *)(lVar15 + 0x12e) != 0) {
      lVar21 = 0;
      do {
        if (*(long *)(*(long *)(lVar15 + 0xb0) + lVar21) == lVar11) {
          puVar8 = (undefined8 *)
                   (lVar15 + (long)(*(int *)(*(long *)(lVar15 + 0xb0) + 8 + lVar21) + 5) * 0x10 + 0x138);
          goto label_026b5c95;
        }
        lVar21 = lVar21 + 0x10;
      } while ((ulong)*(ushort *)(lVar15 + 0x12e) << 4 != lVar21);
    }
    *(undefined8 *)((long)pvVar19 + -8) = 0x26b5bd0;
    puVar8 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar9,lVar11,5);
label_026b5c95:
    vtableDispatch = (code *)*puVar8;
    uVar12 = puVar8[1];
    goto label_026b5ca2;
  }
  *(undefined8 *)((long)pvVar19 + -8) = 0x26b5c0b;
  lVar15 = il2cpp_runtime_helper_023051f0(__this_02,TypeInfo_object);
  *(long *)((long)auStack_b8 + lVar11 + 0x30) = lVar15;
  if (lVar15 == 0) {
label_026b6144:
    *(undefined8 *)((long)pvVar19 + -8) = 0x26b6150;
    uVar12 = il2cpp_runtime_helper_023445d0(&TypeInfo_ArgumentException);
    *(undefined8 *)((long)pvVar19 + -8) = 0x26b6158;
    __this_00 = (System_ArgumentException_o *)il2cpp_runtime_helper_023052d0(uVar12);
    puVar22 = &"Target array type is not compatible with the type of items in the collection.";
    goto label_026b6162;
  }
  lVar15 = *(long *)(*(long *)(*(long *)((long)auStack_b8 + lVar11 + 0x38) + 0x38) + 0x20);
  if ((*(byte *)(lVar15 + 0x135) & 1) == 0) {
    *(undefined8 *)((long)pvVar19 + -8) = 0x26b5c35;
    lVar15 = il2cpp_runtime_helper_023009c0();
  }
  lVar21 = *plVar9;
  if ((ulong)*(ushort *)(lVar21 + 0x12e) != 0) {
    lVar20 = 0;
    do {
      if (*(long *)(*(long *)(lVar21 + 0xb0) + lVar20) == lVar15) {
        puVar8 = (undefined8 *)((long)*(int *)(*(long *)(lVar21 + 0xb0) + 8 + lVar20) * 0x10 + lVar21 + 0x138)
        ;
        goto label_026b5cc9;
      }
      lVar20 = lVar20 + 0x10;
    } while ((ulong)*(ushort *)(lVar21 + 0x12e) << 4 != lVar20);
  }
  *(undefined8 *)((long)pvVar19 + -8) = 0x26b5c79;
  puVar8 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar9,lVar15,0);
label_026b5cc9:
  uVar12 = puVar8[1];
  vtableDispatch = (code *)*puVar8;
  *(undefined8 *)((long)pvVar19 + -8) = 0x26b5cd2;
  plVar9 = (long *)(*vtableDispatch)(plVar9,uVar12);
  if (plVar9 != (long *)0x0) {
    *(undefined8 *)((long)auStack_b8 + lVar11 + 0x28) = 0;
    pvVar3 = *(void **)((long)auStack_b8 + lVar11 + 0x18);
    do {
      lVar15 = *plVar9;
      if ((ulong)*(ushort *)(lVar15 + 0x12e) != 0) {
        lVar21 = 0;
        do {
          if (*(long *)(*(long *)(lVar15 + 0xb0) + lVar21) == TypeInfo_IEnumerator) {
            puVar8 = (undefined8 *)
                     ((long)*(int *)(*(long *)(lVar15 + 0xb0) + 8 + lVar21) * 0x10 + lVar15 + 0x138);
            pvVar17 = *(void **)((long)auStack_b8 + lVar11 + 0x20);
            goto label_026b5d67;
          }
          lVar21 = lVar21 + 0x10;
        } while ((ulong)*(ushort *)(lVar15 + 0x12e) << 4 != lVar21);
      }
      *(undefined8 *)((long)pvVar19 + -8) = 0x26b5d39;
      puVar8 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar9,TypeInfo_IEnumerator,0);
      pvVar17 = *(void **)((long)auStack_b8 + lVar11 + 0x20);
label_026b5d67:
      uVar12 = puVar8[1];
      vtableDispatch = (code *)*puVar8;
      *(undefined8 *)((long)pvVar19 + -8) = 0x26b5d70;
      UVar25 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o)(*vtableDispatch)(plVar9,uVar12)
      ;
      if ((char)UVar25.klass == '\0') goto label_026b6016;
      lVar15 = *(long *)(*(long *)(*(long *)((long)auStack_b8 + lVar11 + 0x38) + 0x38) + 0x30);
      if ((*(byte *)(lVar15 + 0x135) & 1) == 0) {
        *(undefined8 *)((long)pvVar19 + -8) = 0x26b5d95;
        lVar15 = il2cpp_runtime_helper_023009c0();
      }
      lVar21 = *plVar9;
      if ((ulong)*(ushort *)(lVar21 + 0x12e) != 0) {
        lVar20 = 0;
        do {
          if (*(long *)(*(long *)(lVar21 + 0xb0) + lVar20) == lVar15) {
            lVar15 = (long)*(int *)(*(long *)(lVar21 + 0xb0) + 8 + lVar20) * 0x10 + lVar21 + 0x138;
            goto label_026b5df2;
          }
          lVar20 = lVar20 + 0x10;
        } while ((ulong)*(ushort *)(lVar21 + 0x12e) << 4 != lVar20);
      }
      *(undefined8 *)((long)pvVar19 + -8) = 0x26b5ddc;
      lVar15 = il2cpp_runtime_helper_02300d20(plVar9,lVar15,0);
label_026b5df2:
      *(void **)((long)auStack_b8 + lVar11) = pvVar17;
      lVar15 = *(long *)(lVar15 + 8);
      uVar12 = *(undefined8 *)(lVar15 + 8);
      vtableDispatch = *(code **)(lVar15 + 0x10);
      *(undefined8 *)((long)pvVar19 + -8) = 0x26b5e0b;
      (*vtableDispatch)(uVar12,lVar15,plVar9,(long)auStack_b8 + lVar11,pvVar17);
      __n = *(size_t *)((long)auStack_b8 + lVar11 + 8);
      *(undefined8 *)((long)pvVar19 + -8) = 0x26b5e1d;
      memcpy(pvVar3,pvVar17,__n);
      pvVar17 = *(void **)((long)auStack_b8 + lVar11 + 0x10);
      *(undefined8 *)((long)pvVar19 + -8) = 0x26b5e2f;
      memcpy(pvVar17,pvVar3,__n);
      uVar12 = *(undefined8 *)(*(long *)(*(long *)((long)auStack_b8 + lVar11 + 0x38) + 0x38) + 0x40);
      *(undefined8 *)((long)pvVar19 + -8) = 0x26b5e43;
      lVar15 = il2cpp_runtime_helper_02304f30(uVar12,pvVar17);
      plVar16 = *(long **)((long)auStack_b8 + lVar11 + 0x30);
      if (lVar15 != 0) {
        uVar12 = *(undefined8 *)(*plVar16 + 0x40);
        *(undefined8 *)((long)pvVar19 + -8) = 0x26b5e5e;
        lVar21 = il2cpp_runtime_helper_023051f0(lVar15,uVar12);
        plVar16 = *(long **)((long)auStack_b8 + lVar11 + 0x30);
        if (lVar21 == 0) goto label_026b5e93;
      }
      uVar23 = (uint)uVar24;
      if (*(uint *)(plVar16 + 3) <= uVar23) goto label_026b5e8e;
      uVar24 = (ulong)(uVar23 + 1);
      plVar16[(long)(int)uVar23 + 4] = lVar15;
      *(undefined8 *)((long)pvVar19 + -8) = 0x26b5e89;
      il2cpp_runtime_helper_022b4080(plVar16 + (long)(int)uVar23 + 4,lVar15);
    } while( true );
  }
  *(undefined8 *)((long)pvVar19 + -8) = 0x26b5f9f;
  auVar26 = il2cpp_runtime_helper_022b2c90();
  __this_00 = auVar26._8_8_;
  uVar12 = auVar26._0_8_;
  if (auVar26._8_4_ == 1) {
    *(undefined8 *)((long)pvVar19 + -8) = 0x26b600a;
    puVar8 = (undefined8 *)__cxa_begin_catch();
    *(undefined8 *)((long)auStack_b8 + lVar11 + 0x28) = *puVar8;
    *(undefined8 *)((long)pvVar19 + -8) = 0x26b6016;
    UVar25 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o)__cxa_end_catch();
label_026b6016:
    lVar11 = *(long *)((long)auStack_b8 + lVar11 + 0x28);
    if (plVar9 != (long *)0x0) {
      lVar15 = *plVar9;
      if ((ulong)*(ushort *)(lVar15 + 0x12e) != 0) {
        lVar21 = 0;
        do {
          if (*(long *)(*(long *)(lVar15 + 0xb0) + lVar21) == TypeInfo_IDisposable) {
            puVar8 = (undefined8 *)
                     (lVar15 + (long)*(int *)(*(long *)(lVar15 + 0xb0) + 8 + lVar21) * 0x10 + 0x138);
            goto label_026b607d;
          }
          lVar21 = lVar21 + 0x10;
        } while ((ulong)*(ushort *)(lVar15 + 0x12e) << 4 != lVar21);
      }
      *(undefined8 *)((long)pvVar19 + -8) = 0x26b6069;
      puVar8 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar9,TypeInfo_IDisposable,0);
label_026b607d:
      uVar12 = puVar8[1];
      vtableDispatch = (code *)*puVar8;
      *(undefined8 *)((long)pvVar19 + -8) = 0x26b6086;
      UVar25 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o)(*vtableDispatch)(plVar9,uVar12)
      ;
    }
    if (lVar11 == 0) {
      return UVar25;
    }
    *(undefined8 *)((long)pvVar19 + -8) = 0x26b61b2;
    uVar12 = il2cpp_runtime_helper_022fefe0(lVar11);
    *(undefined8 *)((long)pvVar19 + -8) = 0x26b61ba;
    __cxa_end_catch();
label_026b61e7:
    *(undefined **)((long)pvVar19 + -8) = &g_data_026b61ef;
    _Unwind_Resume(uVar12);
  }
  *(undefined8 *)((long)auStack_b8 + lVar11 + 0x28) = 0;
  if (*(long *)((long)auStack_b8 + lVar11 + 0x28) == 0) {
    if (auVar26._8_4_ != 1) goto label_026b61e7;
    *(undefined8 *)((long)pvVar19 + -8) = 0x26b611e;
    __this_00 = (System_ArgumentException_o *)__cxa_begin_catch(uVar12);
    *(undefined8 *)((long)pvVar19 + -8) = 0x26b612d;
    uVar12 = il2cpp_runtime_helper_023445d0(&TypeInfo_ArrayTypeMismatchException);
    pvVar3 = (__this_00->klass->_1).image;
    *(undefined8 *)((long)pvVar19 + -8) = 0x26b613b;
    cVar4 = il2cpp_runtime_helper_0233e000(uVar12,pvVar3);
    if (cVar4 == '\0') goto label_026b6189;
    *(undefined8 *)((long)pvVar19 + -8) = 0x26b6144;
    __cxa_end_catch();
    goto label_026b6144;
  }
  goto label_026b6180;
label_026b5e8e:
  *(undefined8 *)((long)pvVar19 + -8) = 0x26b5e93;
  il2cpp_runtime_helper_022b2ca0();
label_026b5e93:
  *(undefined8 *)((long)pvVar19 + -8) = 0x26b5e98;
  uVar12 = il2cpp_runtime_helper_0231b270();
  *(undefined8 *)((long)pvVar19 + -8) = 0x26b5ea2;
  il2cpp_runtime_helper_022b2b10(uVar12,0);
label_026b5ea2:
  *(undefined8 *)((long)pvVar19 + -8) = 0x26b5eae;
  uVar12 = il2cpp_runtime_helper_023445d0(&TypeInfo_ArgumentNullException);
  *(undefined8 *)((long)pvVar19 + -8) = 0x26b5eb6;
  __this = (System_ArgumentNullException_o *)il2cpp_runtime_helper_023052d0(uVar12);
  *(undefined8 *)((long)pvVar19 + -8) = 0x26b5ec5;
  pSVar13 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"array");
  *(undefined8 *)((long)pvVar19 + -8) = 0x26b5ed2;
  System_ArgumentNullException___ctor_3c0ad60(__this,pSVar13,(MethodInfo *)0x0);
  uVar12 = *(undefined8 *)((long)auStack_b8 + lVar11 + 0x38);
  *(undefined8 *)((long)pvVar19 + -8) = 0x26b5ede;
  il2cpp_runtime_helper_022b2b10(__this,uVar12);
label_026b5ede:
  *(undefined8 *)((long)pvVar19 + -8) = 0x26b5eea;
  uVar12 = il2cpp_runtime_helper_023445d0(&TypeInfo_ArgumentException);
  *(undefined8 *)((long)pvVar19 + -8) = 0x26b5ef2;
  __this_00 = (System_ArgumentException_o *)il2cpp_runtime_helper_023052d0(uVar12);
  puVar22 = &"Only single dimensional arrays are supported for the requested action.";
label_026b6162:
  *(undefined8 *)((long)pvVar19 + -8) = 0x26b6167;
  pSVar13 = (System_String_o *)il2cpp_runtime_helper_023445d0(puVar22);
  *(undefined8 *)((long)pvVar19 + -8) = 0x26b6174;
  System_ArgumentException___ctor_3c12490(__this_00,pSVar13,(MethodInfo *)0x0);
  uVar12 = *(undefined8 *)((long)auStack_b8 + lVar11 + 0x38);
  *(undefined8 *)((long)pvVar19 + -8) = 0x26b6180;
  il2cpp_runtime_helper_022b2b10(__this_00,uVar12);
label_026b6180:
  uVar12 = *(undefined8 *)((long)auStack_b8 + lVar11 + 0x28);
  *(undefined8 *)((long)pvVar19 + -8) = 0x26b6189;
  il2cpp_runtime_helper_022fefe0(uVar12);
label_026b6189:
  *(undefined8 *)((long)pvVar19 + -8) = 0x26b6193;
  puVar8 = (undefined8 *)__cxa_allocate_exception(8);
  *puVar8 = __this_00->klass;
  *(undefined8 *)((long)pvVar19 + -8) = 0x26b61aa;
  __cxa_throw(puVar8,&PTR_PTR_05215060,0);
}


