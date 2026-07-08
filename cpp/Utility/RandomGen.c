// Type: Utility.RandomGen
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/Utility/RandomGen.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/Utility/RandomGen.cs  [unchanged since prior version]
// --------------------------------

// Utility.RandomGen$$GetRandomBool
// il2cpp: bool Utility_RandomGen__GetRandomBool (const MethodInfo* method);
// 0x417ba40

bool_conflict Utility_RandomGen__GetRandomBool(MethodInfo *method)

{
  undefined4 extraout_EAX;
  float fVar1;
  
  fVar1 = UnityEngine_Random__Range(0.0,1.0,(MethodInfo *)0x0);
  return CONCAT31((int3)((uint)extraout_EAX >> 8),0.5 < fVar1);
}


// Utility.RandomGen$$GetRandomSign
// il2cpp: float Utility_RandomGen__GetRandomSign (const MethodInfo* method);
// 0x417ba60

float Utility_RandomGen__GetRandomSign(MethodInfo *method)

{
  float fVar1;
  
  fVar1 = UnityEngine_Random__Range(0.0,1.0,(MethodInfo *)0x0);
  return *(float *)(&DAT_00cd0e20 + (ulong)(fVar1 <= 0.5) * 4);
}


// Utility.RandomGen$$Roll
// il2cpp: bool Utility_RandomGen__Roll (float probability, const MethodInfo* method);
// 0x417ba90

bool_conflict Utility_RandomGen__Roll(float probability,MethodInfo *method)

{
  undefined4 extraout_EAX;
  float fVar1;
  
  fVar1 = UnityEngine_Random__Range(0.0,1.0,(MethodInfo *)0x0);
  return CONCAT31((int3)((uint)extraout_EAX >> 8),fVar1 < probability);
}


// Utility.RandomGen$$GetRandomDirection
// il2cpp: UnityEngine_Vector3_o Utility_RandomGen__GetRandomDirection (bool _flat, const MethodInfo* method);
// 0x417bac0

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
  if (DAT_056fde20 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Math);
    uVar7 = 0;
    uVar8 = 0;
    DAT_056fde20 = '\x01';
    iVar1 = *(int *)(TypeInfo_Math + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_Math + 0xe4);
    uVar7 = extraout_XMM0_Dc;
    uVar8 = extraout_XMM0_Dd_00;
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
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
    if (DAT_056fdd15 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_Vector3);
      DAT_056fdd15 = '\x01';
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
// il2cpp: Il2CppObject* Utility_RandomGen__ChooseRandom_object_ (System_Collections_Generic_List_T__o* items, const MethodInfo_2571A20* method);
// 0x2671a20

Il2CppObject *
Utility_RandomGen__ChooseRandom<object>
          (System_Collections_Generic_List_T__o *items,MethodInfo_2571A20 *method)

{
  int32_t index;
  Il2CppObject *pIVar1;
  
  if (method->rgctx_data == (MethodInfo_2571A20_RGCTXs *)0x0) {
    il2cpp_glue_022c2910();
  }
  if (items != (System_Collections_Generic_List_T__o *)0x0) {
    index = UnityEngine_Random__Range(0,(items->fields)._size,(MethodInfo *)0x0);
    pIVar1 = System_Collections_Generic_List<object>__get_Item
                       ((System_Collections_Generic_List_object__o *)items,index,
                        (MethodInfo_35A7000 *)
                        method->rgctx_data->_2_System_Collections_Generic_List_T__get_Item);
    return pIVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Utility.RandomGen$$ChooseRandom<__Il2CppFullySharedGenericType>
// il2cpp: Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o Utility_RandomGen__ChooseRandom___Il2CppFullySharedGenericType_ (System_Collections_Generic_List_T__o* items, const MethodInfo_2571A70* method);
// 0x2671a70

Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o
Utility_RandomGen__ChooseRandom<__Il2CppFullySharedGenericType>
          (System_Collections_Generic_List_T__o *items,MethodInfo_2571A70 *method)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  int32_t maxExclusive;
  long lVar5;
  long in_RDX;
  void *extraout_RDX;
  void *__src;
  ulong __n;
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o UVar6;
  undefined8 uStack_50;
  int32_t *piStack_48;
  void *pvStack_40;
  int32_t iStack_34;
  
  lVar5 = *(long *)(in_RDX + 0x38);
  if (lVar5 == 0) {
    uStack_50 = 0x2671a9b;
    il2cpp_glue_022c2910();
    lVar5 = *(long *)(in_RDX + 0x38);
  }
  __n = (ulong)*(uint *)(*(long *)(lVar5 + 0x18) + 0xfc);
  lVar4 = -(__n + 0xf & 0xfffffffffffffff0);
  __src = (void *)((long)&piStack_48 + lVar4);
  if (items != (System_Collections_Generic_List_T__o *)0x0) {
    pcVar1 = (code *)**(undefined8 **)(lVar5 + 8);
    *(undefined8 *)((long)&uStack_50 + lVar4) = 0x2671ac9;
    maxExclusive = (*pcVar1)();
    *(undefined8 *)((long)&uStack_50 + lVar4) = 0x2671ad4;
    iStack_34 = UnityEngine_Random__Range(0,maxExclusive,(MethodInfo *)0x0);
    puVar2 = *(undefined8 **)(*(long *)(in_RDX + 0x38) + 0x10);
    uVar3 = *puVar2;
    piStack_48 = &iStack_34;
    pcVar1 = (code *)puVar2[2];
    pvStack_40 = __src;
    *(undefined8 *)((long)&uStack_50 + lVar4) = 0x2671afb;
    (*pcVar1)(uVar3,puVar2,items,&piStack_48,__src);
    *(undefined8 *)((long)&uStack_50 + lVar4) = 0x2671b09;
    UVar6.klass = memcpy(method,__src,__n);
    UVar6.monitor = extraout_RDX;
    return UVar6;
  }
                    /* WARNING: Subroutine does not return */
  *(undefined **)((long)&uStack_50 + lVar4) = &UNK_02671b1d;
  il2cpp_raise_exception();
}


