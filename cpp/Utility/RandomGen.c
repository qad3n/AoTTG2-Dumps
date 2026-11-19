// Type: Utility.RandomGen
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/Utility/RandomGen.cs
// Prior real C# source (older reference): Assets/Scripts/Utility/RandomGen.cs
// --------------------------------

// Utility.RandomGen$$GetRandomBool
// il2cpp: bool Utility_RandomGen__GetRandomBool (const MethodInfo* method);
// 0x5df01f0

bool Utility_RandomGen__GetRandomBool(MethodInfo *method)

{
  float fVar1;
  
  fVar1 = UnityEngine_Random__Range(0.0,1.0,(MethodInfo *)0x0);
  return 0.5 < fVar1;
}


// Utility.RandomGen$$GetRandomSign
// il2cpp: float Utility_RandomGen__GetRandomSign (const MethodInfo* method);
// 0x5df0210

float Utility_RandomGen__GetRandomSign(MethodInfo *method)

{
  float fVar1;
  
  fVar1 = UnityEngine_Random__Range(0.0,1.0,(MethodInfo *)0x0);
  return *(float *)(&g_data_0100ad30 + (ulong)(0.5 < fVar1) * 4);
}


// Utility.RandomGen$$Roll
// il2cpp: bool Utility_RandomGen__Roll (float probability, const MethodInfo* method);
// 0x5df0240

bool Utility_RandomGen__Roll(float probability,MethodInfo *method)

{
  float fVar1;
  
  fVar1 = UnityEngine_Random__Range(0.0,1.0,(MethodInfo *)0x0);
  return fVar1 < probability;
}


// Utility.RandomGen$$GetRandomDirection
// il2cpp: UnityEngine_Vector3_o Utility_RandomGen__GetRandomDirection (bool _flat, const MethodInfo* method);
// 0x5df0270
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5df02da: cmp byte ptr [rip + 0x174e44c], 0
// asm:   0x5df02e1: movss dword ptr [rsp + 4], xmm2
// asm:   0x5df02e7: je 0x5df0391

UnityEngine_Vector3_o Utility_RandomGen__GetRandomDirection(bool _flat,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint32_t uVar3;
  undefined8 uVar4;
  UnityEngine_Vector3_StaticFields *pUVar5;
  undefined7 in_register_00000039;
  float fVar6;
  float fVar7;
  float extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  undefined4 extraout_XMM0_Db_01;
  float extraout_XMM0_Dd;
  undefined1 auVar10 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar11 [16];
  undefined4 uVar12;
  UnityEngine_Vector3_o UVar13;
  undefined1 local_30 [12];
  float fStack_24;
  float local_18;
  float fStack_14;
  float fStack_c;
  
  local_18 = UnityEngine_Random__Range(-1.0,1.0,(MethodInfo *)0x0);
  fStack_14 = extraout_XMM0_Db;
  fStack_c = extraout_XMM0_Dd;
  fVar6 = UnityEngine_Random__Range(-1.0,1.0,(MethodInfo *)0x0);
  fVar7 = UnityEngine_Random__Range(-1.0,1.0,(MethodInfo *)0x0);
  stack0xffffffffffffffd8 = ZEXT816(0);
  if ((int)CONCAT71(in_register_00000039,_flat) == 0) {
    stack0xffffffffffffffd8 = ZEXT416((uint)fVar6);
  }
  if (Il2CppMethodInitialized_0753e72d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    uVar12 = 0;
    Il2CppMethodInitialized_0753e72d = '\x01';
    local_30._0_4_ = 0.0;
    local_30._4_4_ = 0.0;
  }
  else {
    local_30._0_4_ = 0.0;
    local_30._4_4_ = 0.0;
    uVar12 = extraout_XMM0_Db_00;
  }
  if (g_data_0753e729 == '\0') {
    local_30._0_4_ = 0.0;
    local_30._4_4_ = 0.0;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
    uVar12 = 0;
    g_data_0753e729 = '\x01';
    uVar3 = (TypeInfo_System_Math->_2).cctor_finished_or_no_cctor;
  }
  else {
    local_30._0_4_ = 0.0;
    local_30._4_4_ = 0.0;
    uVar3 = (((Il2CppClass *)TypeInfo_System_Math)->_2).cctor_finished_or_no_cctor;
  }
  if (uVar3 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
    uVar12 = 0;
  }
  uVar4 = stack0xffffffffffffffd8;
  fVar6 = fVar7 * fVar7 + (float)local_30._8_4_ * (float)local_30._8_4_ + local_18 * local_18;
  if (fVar6 < 0.0) {
    fVar6 = sqrtf(fVar6);
    uVar12 = extraout_XMM0_Db_01;
    uVar4 = stack0xffffffffffffffd8;
  }
  else {
    fVar6 = SQRT(fVar6);
  }
  if (1e-05 < fVar6) {
    auVar9._4_4_ = fStack_14;
    auVar9._0_4_ = local_18;
    local_30._8_4_ = SUB84(uVar4,0);
    fStack_24 = SUB84(uVar4,4);
    auVar9._8_4_ = fStack_14;
    auVar9._12_4_ = fStack_c;
    auVar8._8_8_ = auVar9._8_8_;
    auVar8._4_4_ = local_30._8_4_;
    auVar8._0_4_ = local_18;
    auVar10._0_12_ = auVar8._0_12_;
    auVar10._12_4_ = fStack_24;
    fVar7 = fVar7 / fVar6;
    auVar11._4_4_ = fVar6;
    auVar11._0_4_ = fVar6;
    auVar11._8_4_ = uVar12;
    auVar11._12_4_ = uVar12;
    auVar11 = divps(auVar10,auVar11);
    local_30._0_4_ = auVar11._0_4_;
    local_30._4_4_ = auVar11._4_4_;
    pUVar5 = (UnityEngine_Vector3_StaticFields *)local_30;
  }
  else {
    pUVar5 = TypeInfo_UnityEngine_Vector3->static_fields;
    fVar7 = (pUVar5->zeroVector).fields.z;
  }
  uVar1 = (pUVar5->zeroVector).fields.x;
  uVar2 = (pUVar5->zeroVector).fields.y;
  UVar13.fields.y = (float)uVar2;
  UVar13.fields.x = (float)uVar1;
  UVar13.fields.z = fVar7;
  return (UnityEngine_Vector3_o)UVar13.fields;
}


// Utility.RandomGen$$ChooseRandom<object>
// il2cpp: Il2CppObject* Utility_RandomGen__ChooseRandom_object_ (System_Collections_Generic_List_T__o* items, const MethodInfo_365F3C0* method);
// 0x375f3c0

Il2CppObject *
Utility_RandomGen__ChooseRandom_object_
          (System_Collections_Generic_List_T__o *items,MethodInfo_365F3C0 *method)

{
  int32_t index;
  Il2CppObject *pIVar1;
  
  if (method->rgctx_data == (MethodInfo_365F3C0_RGCTXs *)0x0) {
    il2cpp_codegen_rgctx_method_init((MethodInfo *)method);
  }
  if (items == (System_Collections_Generic_List_T__o *)0x0) {
    ThrowNullReferenceException();
  }
  index = UnityEngine_Random__Range_690e2b0(0,(items->fields)._size,(MethodInfo *)0x0);
  pIVar1 = System_Collections_Generic_List_object___get_Item
                     ((System_Collections_Generic_List_object__o *)items,index,
                      (MethodInfo_395CF20 *)method->rgctx_data->_2_System_Collections_Generic_List_T__get_Item
                     );
  return pIVar1;
}


// Utility.RandomGen$$ChooseRandom<__Il2CppFullySharedGenericType>
// il2cpp: Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o Utility_RandomGen__ChooseRandom___Il2CppFullySharedGenericType_ (System_Collections_Generic_List_T__o* items, const MethodInfo_365F410* method);
// 0x375f410

Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o
Utility_RandomGen__ChooseRandom___Il2CppFullySharedGenericType_
          (System_Collections_Generic_List_T__o *items,MethodInfo_365F410 *method)

{
  Il2CppMethodPointer pIVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  code *pcVar4;
  long lVar5;
  int32_t maxExclusive;
  Il2CppRGCTXData *pIVar6;
  MethodInfo *in_RDX;
  void *extraout_RDX;
  void *__src;
  ulong __n;
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o UVar7;
  undefined8 uStack_50;
  int32_t *local_48;
  void *local_40;
  int32_t local_34;
  
  pIVar6 = (in_RDX->field7_0x38).rgctx_data;
  if (pIVar6 == (Il2CppRGCTXData *)0x0) {
    uStack_50 = 0x375f43b;
    il2cpp_codegen_rgctx_method_init(in_RDX);
    pIVar6 = (in_RDX->field7_0x38).rgctx_data;
  }
  __n = (ulong)((pIVar6[3].klass)->_2).stack_slot_size;
  lVar5 = -(__n + 0xf & 0xfffffffffffffff0);
  __src = (void *)((long)&local_48 + lVar5);
  if (items == (System_Collections_Generic_List_T__o *)0x0) {
    *(undefined8 *)((long)&uStack_50 + lVar5) = 0x375f4bd;
    ThrowNullReferenceException();
  }
  pIVar1 = (pIVar6[1].method)->methodPointer;
  *(undefined8 *)((long)&uStack_50 + lVar5) = 0x375f469;
  maxExclusive = (*pIVar1)();
  *(undefined8 *)((long)&uStack_50 + lVar5) = 0x375f474;
  local_34 = UnityEngine_Random__Range_690e2b0(0,maxExclusive,(MethodInfo *)0x0);
  puVar2 = *(undefined8 **)((long)(in_RDX->field7_0x38).methodMetadataHandle + 0x10);
  uVar3 = *puVar2;
  local_48 = &local_34;
  pcVar4 = (code *)puVar2[2];
  local_40 = __src;
  *(undefined8 *)((long)&uStack_50 + lVar5) = 0x375f49b;
  (*pcVar4)(uVar3,puVar2,items,&local_48,__src);
  *(undefined8 *)((long)&uStack_50 + lVar5) = 0x375f4a9;
  UVar7.klass = memcpy(method,__src,__n);
  UVar7.monitor = extraout_RDX;
  return UVar7;
}


