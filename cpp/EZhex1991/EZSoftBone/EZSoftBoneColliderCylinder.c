// Type: EZhex1991.EZSoftBone.EZSoftBoneColliderCylinder
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/EZhex1991.EZSoftBone/EZhex1991.EZSoftBone/EZSoftBoneColliderCylinder.cs
// Prior real C# source (older reference): Assets/ThirdParty/EZhex1991/EZSoftBone/Runtime/EZSoftBoneColliderCylinder.cs
// --------------------------------

// EZhex1991.EZSoftBone.EZSoftBoneColliderCylinder$$get_margin
// il2cpp: float EZhex1991_EZSoftBone_EZSoftBoneColliderCylinder__get_margin (EZhex1991_EZSoftBone_EZSoftBoneColliderCylinder_o* __this, const MethodInfo* method);
// 0x2497c40

float EZhex1991_EZSoftBone_EZSoftBoneColliderCylinder__get_margin
                (EZhex1991_EZSoftBone_EZSoftBoneColliderCylinder_o *__this,MethodInfo *method)

{
  return (__this->fields).m_Margin;
}


// EZhex1991.EZSoftBone.EZSoftBoneColliderCylinder$$set_margin
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBoneColliderCylinder__set_margin (EZhex1991_EZSoftBone_EZSoftBoneColliderCylinder_o* __this, float value, const MethodInfo* method);
// 0x2497c50

void EZhex1991_EZSoftBone_EZSoftBoneColliderCylinder__set_margin
               (EZhex1991_EZSoftBone_EZSoftBoneColliderCylinder_o *__this,float value,MethodInfo *method)

{
  (__this->fields).m_Margin = value;
  return;
}


// EZhex1991.EZSoftBone.EZSoftBoneColliderCylinder$$get_insideMode
// il2cpp: bool EZhex1991_EZSoftBone_EZSoftBoneColliderCylinder__get_insideMode (EZhex1991_EZSoftBone_EZSoftBoneColliderCylinder_o* __this, const MethodInfo* method);
// 0x2497c60

bool_conflict
EZhex1991_EZSoftBone_EZSoftBoneColliderCylinder__get_insideMode
          (EZhex1991_EZSoftBone_EZSoftBoneColliderCylinder_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),(char)(__this->fields).m_InsideMode);
}


// EZhex1991.EZSoftBone.EZSoftBoneColliderCylinder$$set_insideMode
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBoneColliderCylinder__set_insideMode (EZhex1991_EZSoftBone_EZSoftBoneColliderCylinder_o* __this, bool value, const MethodInfo* method);
// 0x2497c70

void EZhex1991_EZSoftBone_EZSoftBoneColliderCylinder__set_insideMode
               (EZhex1991_EZSoftBone_EZSoftBoneColliderCylinder_o *__this,bool_conflict value,
               MethodInfo *method)

{
  *(char *)&(__this->fields).m_InsideMode = (char)value;
  return;
}


// EZhex1991.EZSoftBone.EZSoftBoneColliderCylinder$$Collide
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBoneColliderCylinder__Collide (EZhex1991_EZSoftBone_EZSoftBoneColliderCylinder_o* __this, UnityEngine_Vector3_o* position, float spacing, const MethodInfo* method);
// 0x2497c80

void EZhex1991_EZSoftBone_EZSoftBoneColliderCylinder__Collide
               (EZhex1991_EZSoftBone_EZSoftBoneColliderCylinder_o *__this,UnityEngine_Vector3_o *position,
               float spacing,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  bool_conflict bVar12;
  UnityEngine_Transform_o *__this_00;
  EZhex1991_EZSoftBone_EZSoftBoneColliderCylinder_o *unaff_RBX;
  UnityEngine_Transform_o *__this_01;
  EZhex1991_EZSoftBone_EZSoftBoneColliderCylinder_o *__this_02;
  UnityEngine_Vector3_o *unaff_R14;
  float fVar13;
  float fVar14;
  uint extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dc_01;
  uint extraout_XMM0_Dc_02;
  undefined4 extraout_XMM0_Dc_03;
  undefined4 extraout_XMM0_Dc_04;
  uint extraout_XMM0_Dc_05;
  undefined4 extraout_XMM0_Dc_06;
  undefined4 extraout_XMM0_Dc_07;
  uint extraout_XMM0_Dc_08;
  float extraout_XMM0_Dc_09;
  undefined4 extraout_XMM0_Dc_10;
  undefined4 extraout_XMM0_Dc_11;
  undefined4 extraout_XMM0_Dc_12;
  float fVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Dc_13;
  undefined4 extraout_XMM0_Dc_14;
  uint extraout_XMM0_Dd;
  undefined4 extraout_XMM0_Dd_00;
  undefined4 extraout_XMM0_Dd_01;
  uint extraout_XMM0_Dd_02;
  undefined4 extraout_XMM0_Dd_03;
  undefined4 extraout_XMM0_Dd_04;
  uint extraout_XMM0_Dd_05;
  undefined4 extraout_XMM0_Dd_06;
  undefined4 extraout_XMM0_Dd_07;
  uint extraout_XMM0_Dd_08;
  float extraout_XMM0_Dd_09;
  undefined4 extraout_XMM0_Dd_10;
  undefined4 extraout_XMM0_Dd_11;
  undefined4 extraout_XMM0_Dd_12;
  undefined4 uVar17;
  undefined4 extraout_XMM0_Dd_13;
  undefined4 extraout_XMM0_Dd_14;
  float fVar18;
  uint in_XMM1_Db;
  uint in_XMM1_Dc;
  uint in_XMM1_Dd;
  float fVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined4 uVar23;
  undefined1 auVar22 [16];
  float fVar24;
  undefined8 uVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  float fVar32;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  float fVar33;
  float fVar34;
  uint uVar35;
  uint uVar36;
  float fVar37;
  uint uVar38;
  uint uVar39;
  UnityEngine_Vector3_o UVar40;
  UnityEngine_Vector3_o UVar41;
  UnityEngine_Vector3_o UVar42;
  float fStack_128;
  float fStack_124;
  undefined1 auStack_e0 [8];
  float fStack_d8;
  float fStack_d4;
  float fStack_d0;
  uint uStack_cc;
  uint uStack_c8;
  uint uStack_c4;
  undefined1 auStack_c0 [8];
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  uint uStack_a8;
  uint uStack_a4;
  float fStack_a0;
  float fStack_9c;
  uint uStack_98;
  uint uStack_94;
  EZhex1991_EZSoftBone_EZSoftBoneColliderCylinder_o *pEStack_88;
  UnityEngine_Vector3_o *pUStack_80;
  undefined1 auStack_78 [8];
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  uint uStack_64;
  uint uStack_60;
  uint uStack_5c;
  undefined1 auStack_58 [8];
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  uint uStack_40;
  uint uStack_3c;
  float fStack_38;
  float fStack_34;
  uint uStack_30;
  uint uStack_2c;
  
  bVar12 = (__this->fields).m_InsideMode;
  __this_01 = (UnityEngine_Transform_o *)0x0;
  pUStack_80 = (UnityEngine_Vector3_o *)0x2497ca1;
  __this_02 = __this;
  fStack_70 = spacing;
  __this_00 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  fStack_70 = fStack_70 + (__this->fields).m_Margin;
  if ((char)bVar12 == '\0') {
    if (__this_00 == (UnityEngine_Transform_o *)0x0) goto label_02497dfd;
    pUStack_80 = (UnityEngine_Vector3_o *)0x2497d72;
    UVar40 = UnityEngine_Transform__get_lossyScale(__this_00,(MethodInfo *)0x0);
    fStack_34 = UVar40.fields.y;
    fStack_48 = ABS(UVar40.fields.x);
    fStack_44 = ABS(fStack_34);
    uStack_40 = extraout_XMM0_Dc_02 & 0x7fffffff;
    uStack_3c = extraout_XMM0_Dd_02 & 0x7fffffff;
    fStack_38 = ABS(fStack_34);
    fStack_34 = ABS(fStack_34);
    uStack_30 = extraout_XMM0_Dc_02 & 0x7fffffff;
    uStack_2c = extraout_XMM0_Dd_02 & 0x7fffffff;
    fStack_68 = ABS(UVar40.fields.z);
    uStack_64 = in_XMM1_Db & 0x7fffffff;
    in_XMM1_Dc = in_XMM1_Dc & 0x7fffffff;
    in_XMM1_Dd = in_XMM1_Dd & 0x7fffffff;
    pUStack_80 = (UnityEngine_Vector3_o *)0x2497da2;
    uStack_60 = in_XMM1_Dc;
    uStack_5c = in_XMM1_Dd;
    UVar40 = UnityEngine_Transform__get_position(__this_00,(MethodInfo *)0x0);
    fStack_6c = UVar40.fields.z;
    fStack_50 = (float)extraout_XMM0_Dc_03;
    auStack_58 = UVar40.fields._0_8_;
    fStack_4c = (float)extraout_XMM0_Dd_03;
    pUStack_80 = (UnityEngine_Vector3_o *)0x2497db7;
    UVar40 = UnityEngine_Transform__get_up(__this_00,(MethodInfo *)0x0);
    fVar14 = UVar40.fields.z;
    auVar22._0_8_ = UVar40.fields._0_8_;
    auVar22._8_4_ = extraout_XMM0_Dc_04;
    auVar22._12_4_ = extraout_XMM0_Dd_04;
    fVar18 = fStack_48;
    if (fStack_48 <= fStack_68) {
      fVar18 = fStack_68;
    }
    fVar34 = fVar18 * 0.5 + fStack_70;
    fVar19 = fStack_70 + fStack_38;
    __this_02 = (EZhex1991_EZSoftBone_EZSoftBoneColliderCylinder_o *)position;
    fStack_128 = (float)auStack_58._0_4_;
    fStack_124 = (float)auStack_58._4_4_;
    fVar24 = fStack_50;
    fVar32 = fStack_4c;
    fVar18 = fStack_6c;
    fVar15 = fStack_44;
    uVar35 = uStack_40;
    uVar36 = uStack_3c;
EZhex1991_EZSoftBone_EZSoftBoneUtility__PointOutsideCylinder_2399b70:
    *(UnityEngine_Vector3_o **)((long)register0x00000020 + -8) = unaff_R14;
    *(EZhex1991_EZSoftBone_EZSoftBoneColliderCylinder_o **)((long)register0x00000020 + -0x10) = unaff_RBX;
    *(undefined1 (*) [16])((long)register0x00000020 + -0x68) = ZEXT416((uint)fVar19);
    *(float *)((long)register0x00000020 + -0x48) = fVar34;
    *(float *)((long)register0x00000020 + -0x44) = fVar15;
    *(uint *)((long)register0x00000020 + -0x40) = uVar35;
    *(uint *)((long)register0x00000020 + -0x3c) = uVar36;
    uVar1 = *(float *)&__this_02->klass;
    uVar3 = *(float *)((long)&__this_02->klass + 4);
    auVar26._4_4_ = uVar3;
    auVar26._0_4_ = uVar1;
    auVar26._8_8_ = 0;
    fVar15 = *(float *)&__this_02->monitor;
    if (g_data_057a6931 == '\0') {
      *(float *)((long)register0x00000020 + -0xa0) = fVar15;
      *(undefined1 (*) [16])((long)register0x00000020 + -0x58) = auVar26;
      *(float *)((long)register0x00000020 + -0x88) = fVar14;
      *(undefined1 (*) [16])((long)register0x00000020 + -0x98) = auVar22;
      *(float *)((long)register0x00000020 + -0x9c) = fVar18;
      *(float *)((long)register0x00000020 + -0x38) = fStack_128;
      *(float *)((long)register0x00000020 + -0x34) = fStack_124;
      *(float *)((long)register0x00000020 + -0x30) = fVar24;
      *(float *)((long)register0x00000020 + -0x2c) = fVar32;
      *(undefined8 *)((long)register0x00000020 + -0xb0) = 0x2499bc9;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Mathf);
      fStack_128 = *(float *)((long)register0x00000020 + -0x38);
      fStack_124 = *(float *)((long)register0x00000020 + -0x34);
      fVar24 = *(float *)((long)register0x00000020 + -0x30);
      fVar32 = *(float *)((long)register0x00000020 + -0x2c);
      fVar18 = *(float *)((long)register0x00000020 + -0x9c);
      auVar22 = *(undefined1 (*) [16])((long)register0x00000020 + -0x98);
      fVar14 = *(float *)((long)register0x00000020 + -0x88);
      in_XMM1_Dc = 0;
      in_XMM1_Dd = 0;
      auVar26 = *(undefined1 (*) [16])((long)register0x00000020 + -0x58);
      fVar15 = *(float *)((long)register0x00000020 + -0xa0);
      g_data_057a6931 = '\x01';
    }
    fStack_128 = auVar26._0_4_ - fStack_128;
    fStack_124 = auVar26._4_4_ - fStack_124;
    fVar13 = auVar22._0_4_;
    fVar33 = auVar22._4_4_;
    fVar34 = fVar14 * fVar14 + fVar33 * fVar33 + fVar13 * fVar13;
    fVar19 = **(float **)(TypeInfo_Mathf + 0xb8);
    *(float *)((long)register0x00000020 + -0xa0) = fVar15 - fVar18;
    *(float *)((long)register0x00000020 + -0x58) = fStack_128;
    *(float *)((long)register0x00000020 + -0x54) = fStack_124;
    *(float *)((long)register0x00000020 + -0x50) = auVar26._8_4_ - fVar24;
    *(float *)((long)register0x00000020 + -0x4c) = auVar26._12_4_ - fVar32;
    if (fVar19 <= fVar34) {
      fVar18 = (fVar15 - fVar18) * fVar14 + fStack_124 * fVar33 + fVar13 * fStack_128;
      auVar27._0_4_ = fVar18 * fVar13;
      auVar27._4_4_ = fVar18 * fVar33;
      auVar27._8_4_ = auVar22._8_4_ * 0.0;
      auVar27._12_4_ = auVar22._12_4_ * 0.0;
      auVar11._4_4_ = fVar34;
      auVar11._0_4_ = fVar34;
      auVar11._8_4_ = in_XMM1_Dc;
      auVar11._12_4_ = in_XMM1_Dd;
      auVar28 = divps(auVar27,auVar11);
      fVar34 = (fVar18 * fVar14) / fVar34;
      *(undefined1 (*) [16])((long)register0x00000020 + -0x88) = ZEXT416((uint)fVar34);
      *(undefined1 (*) [16])((long)register0x00000020 + -0x98) = auVar28;
    }
    else {
      if (g_data_057a65d5 == '\0') {
        *(undefined8 *)((long)register0x00000020 + -0xb0) = 0x2499c4e;
        il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
        g_data_057a65d5 = '\x01';
      }
      auVar28._8_8_ = 0;
      auVar28._0_8_ = **(ulong **)(TypeInfo_Vector3 + 0xb8);
      fVar34 = *(float *)(*(ulong **)(TypeInfo_Vector3 + 0xb8) + 1);
      *(undefined1 (*) [16])((long)register0x00000020 + -0x88) = ZEXT416((uint)fVar34);
      *(undefined1 (*) [16])((long)register0x00000020 + -0x98) = auVar28;
    }
    if (g_data_057a6841 == '\0') {
      *(undefined8 *)((long)register0x00000020 + -0xb0) = 0x2499ce1;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
      auVar28 = *(undefined1 (*) [16])((long)register0x00000020 + -0x98);
      fVar34 = *(float *)((long)register0x00000020 + -0x88);
      g_data_057a6841 = '\x01';
    }
    if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
      *(undefined8 *)((long)register0x00000020 + -0xb0) = 0x2499d0a;
      il2cpp_runtime_helper_02337ed0();
      auVar28 = *(undefined1 (*) [16])((long)register0x00000020 + -0x98);
      fVar34 = *(float *)((long)register0x00000020 + -0x88);
    }
    fVar14 = fVar34 * fVar34 + auVar28._4_4_ * auVar28._4_4_ + auVar28._0_4_ * auVar28._0_4_;
    *(float *)((long)register0x00000020 + -0x9c) = fVar14;
    if (fVar14 < 0.0) {
      *(undefined8 *)((long)register0x00000020 + -0xb0) = 0x2499df8;
      fVar14 = sqrtf(fVar14);
      auVar28 = *(undefined1 (*) [16])((long)register0x00000020 + -0x98);
      fVar34 = *(float *)((long)register0x00000020 + -0x88);
      uVar16 = *(undefined4 *)((long)register0x00000020 + -100);
      uVar17 = *(undefined4 *)((long)register0x00000020 + -0x60);
      uVar23 = *(undefined4 *)((long)register0x00000020 + -0x5c);
      fVar14 = *(float *)((long)register0x00000020 + -0x68) - fVar14;
    }
    else {
      uVar16 = *(undefined4 *)((long)register0x00000020 + -100);
      uVar17 = *(undefined4 *)((long)register0x00000020 + -0x60);
      uVar23 = *(undefined4 *)((long)register0x00000020 + -0x5c);
      fVar14 = *(float *)((long)register0x00000020 + -0x68) - SQRT(fVar14);
    }
    if (fVar14 <= 0.0) {
      return;
    }
    *(float *)((long)register0x00000020 + -0x68) = fVar14;
    *(undefined4 *)((long)register0x00000020 + -100) = uVar16;
    *(undefined4 *)((long)register0x00000020 + -0x60) = uVar17;
    *(undefined4 *)((long)register0x00000020 + -0x5c) = uVar23;
    if (g_data_057a6841 == '\0') {
      *(undefined8 *)((long)register0x00000020 + -0xb0) = 0x2499d72;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
      auVar28 = *(undefined1 (*) [16])((long)register0x00000020 + -0x98);
      fVar34 = *(float *)((long)register0x00000020 + -0x88);
      g_data_057a6841 = '\x01';
    }
    fVar18 = *(float *)((long)register0x00000020 + -0x58) - auVar28._0_4_;
    fVar24 = *(float *)((long)register0x00000020 + -0x54) - auVar28._4_4_;
    fVar14 = *(float *)((long)register0x00000020 + -0xa0) - fVar34;
    iVar5 = *(int *)(TypeInfo_Math + 0xe4);
    *(float *)((long)register0x00000020 + -0xa0) = fVar14;
    *(float *)((long)register0x00000020 + -0x58) = fVar18;
    *(float *)((long)register0x00000020 + -0x54) = fVar24;
    *(float *)((long)register0x00000020 + -0x50) =
         *(float *)((long)register0x00000020 + -0x50) - auVar28._8_4_;
    *(float *)((long)register0x00000020 + -0x4c) =
         *(float *)((long)register0x00000020 + -0x4c) - auVar28._12_4_;
    if (iVar5 == 0) {
      *(undefined8 *)((long)register0x00000020 + -0xb0) = 0x2499db1;
      il2cpp_runtime_helper_02337ed0();
      fVar14 = *(float *)((long)register0x00000020 + -0xa0);
      auVar28 = *(undefined1 (*) [16])((long)register0x00000020 + -0x98);
      fVar34 = *(float *)((long)register0x00000020 + -0x88);
      fVar18 = *(float *)((long)register0x00000020 + -0x58);
      fVar24 = *(float *)((long)register0x00000020 + -0x54);
    }
    fVar14 = fVar14 * fVar14 + fVar24 * fVar24 + fVar18 * fVar18;
    *(float *)((long)register0x00000020 + -0x38) = fVar14;
    if (fVar14 < 0.0) {
      *(undefined8 *)((long)register0x00000020 + -0xb0) = 0x2499e21;
      fVar14 = sqrtf(fVar14);
      auVar28 = *(undefined1 (*) [16])((long)register0x00000020 + -0x98);
      fVar34 = *(float *)((long)register0x00000020 + -0x88);
    }
    else {
      fVar14 = SQRT(fVar14);
    }
    fVar18 = *(float *)((long)register0x00000020 + -0x68);
    auVar21._4_12_ = SUB1612(*(undefined1 (*) [16])((long)register0x00000020 + -0x48),4);
    auVar21._0_4_ = SUB164(*(undefined1 (*) [16])((long)register0x00000020 + -0x48),0) - fVar14;
    *(undefined1 (*) [16])((long)register0x00000020 + -0x48) = auVar21;
    if (auVar21._0_4_ <= 0.0) {
      return;
    }
    *(undefined8 *)((long)register0x00000020 + -0x28) = *(undefined8 *)&__this_02->klass;
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0;
    *(float *)((long)register0x00000020 + -0x6c) = *(float *)&__this_02->monitor;
    if (fVar18 < *(float *)((long)register0x00000020 + -0x48) ||
        fVar18 == *(float *)((long)register0x00000020 + -0x48)) {
      if (g_data_057a6845 == '\0') {
        *(undefined8 *)((long)register0x00000020 + -0xb0) = 0x2499f0b;
        il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
        auVar28 = *(undefined1 (*) [16])((long)register0x00000020 + -0x98);
        fVar34 = *(float *)((long)register0x00000020 + -0x88);
        fVar18 = *(float *)((long)register0x00000020 + -0x68);
        g_data_057a6845 = '\x01';
      }
      if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
        *(undefined8 *)((long)register0x00000020 + -0xb0) = 0x2499f32;
        il2cpp_runtime_helper_02337ed0();
        auVar28 = *(undefined1 (*) [16])((long)register0x00000020 + -0x98);
        fVar34 = *(float *)((long)register0x00000020 + -0x88);
        fVar18 = *(float *)((long)register0x00000020 + -0x68);
      }
      fVar14 = *(float *)((long)register0x00000020 + -0x9c);
      uVar16 = 0;
      uVar17 = 0;
      if (fVar14 < 0.0) {
        *(undefined8 *)((long)register0x00000020 + -0xb0) = 0x2499ffb;
        fVar14 = sqrtf(fVar14);
        auVar28 = *(undefined1 (*) [16])((long)register0x00000020 + -0x98);
        fVar34 = *(float *)((long)register0x00000020 + -0x88);
        fVar18 = *(float *)((long)register0x00000020 + -0x68);
        uVar16 = extraout_XMM0_Dc_12;
        uVar17 = extraout_XMM0_Dd_12;
        if (1e-05 < fVar14) goto label_0249a017;
label_02499f67:
        if (g_data_057a65d5 == '\0') {
          *(undefined8 *)((long)register0x00000020 + -0xb0) = 0x2499f7c;
          il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
          fVar18 = *(float *)((long)register0x00000020 + -0x68);
          g_data_057a65d5 = '\x01';
        }
        uVar25 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
        fVar34 = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
      }
      else {
        fVar14 = SQRT(fVar14);
        if (fVar14 <= 1e-05) goto label_02499f67;
label_0249a017:
        fVar34 = fVar34 / fVar14;
        auVar9._4_4_ = fVar14;
        auVar9._0_4_ = fVar14;
        auVar9._8_4_ = uVar16;
        auVar9._12_4_ = uVar17;
        auVar22 = divps(auVar28,auVar9);
        uVar25 = auVar22._0_8_;
      }
      fVar24 = *(float *)((long)register0x00000020 + -0x28) + fVar18 * (float)uVar25;
      fVar32 = *(float *)((long)register0x00000020 + -0x24) + fVar18 * (float)((ulong)uVar25 >> 0x20);
      fVar14 = *(float *)((long)register0x00000020 + -0x6c) + fVar34 * fVar18;
      goto label_0249a045;
    }
    if (g_data_057a6845 == '\0') {
      *(undefined8 *)((long)register0x00000020 + -0xb0) = 0x2499e82;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
      g_data_057a6845 = '\x01';
    }
    if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
      *(undefined8 *)((long)register0x00000020 + -0xb0) = 0x2499e9a;
      il2cpp_runtime_helper_02337ed0();
    }
    fVar14 = *(float *)((long)register0x00000020 + -0x38);
    uVar16 = 0;
    uVar17 = 0;
    if (fVar14 < 0.0) {
      *(undefined8 *)((long)register0x00000020 + -0xb0) = 0x2499fa9;
      fVar14 = sqrtf(fVar14);
      uVar16 = extraout_XMM0_Dc_11;
      uVar17 = extraout_XMM0_Dd_11;
      if (1e-05 < fVar14) goto label_02499fb6;
label_02499ec0:
      if (g_data_057a65d5 == '\0') {
        *(undefined8 *)((long)register0x00000020 + -0xb0) = 0x2499ed5;
        il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
        g_data_057a65d5 = '\x01';
      }
      uVar25 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
      fVar18 = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
    }
    else {
      fVar14 = SQRT(fVar14);
      if (fVar14 <= 1e-05) goto label_02499ec0;
label_02499fb6:
      fVar18 = *(float *)((long)register0x00000020 + -0xa0) / fVar14;
      auVar8._4_4_ = fVar14;
      auVar8._0_4_ = fVar14;
      auVar8._8_4_ = uVar16;
      auVar8._12_4_ = uVar17;
      auVar22 = divps(*(undefined1 (*) [16])((long)register0x00000020 + -0x58),auVar8);
      uVar25 = auVar22._0_8_;
    }
    fVar14 = *(float *)((long)register0x00000020 + -0x48);
    fVar24 = *(float *)((long)register0x00000020 + -0x28) + fVar14 * (float)uVar25;
    fVar32 = *(float *)((long)register0x00000020 + -0x24) + fVar14 * (float)((ulong)uVar25 >> 0x20);
    fVar14 = *(float *)((long)register0x00000020 + -0x6c) + fVar18 * fVar14;
label_0249a045:
    *(float *)&__this_02->klass = fVar24;
    *(float *)((long)&__this_02->klass + 4) = fVar32;
    *(float *)&__this_02->monitor = fVar14;
    return;
  }
  if (__this_00 == (UnityEngine_Transform_o *)0x0) {
label_02497dfd:
    pUStack_80 = (UnityEngine_Vector3_o *)0x2497e02;
    fStack_d4 = (float)il2cpp_runtime_helper_022b2c90();
    pEStack_88 = __this;
    pUStack_80 = position;
    if (__this_01 == (UnityEngine_Transform_o *)0x0) {
      fVar19 = (float)il2cpp_runtime_helper_022b2c90();
      if (__this_01 == (UnityEngine_Transform_o *)0x0) {
        il2cpp_runtime_helper_022b2c90();
        if (g_data_057a692d == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_EZSoftBoneColliderBase);
          g_data_057a692d = '\x01';
          iVar5 = *(int *)(_DAT_05578bb0 + 0xe4);
        }
        else {
          iVar5 = *(int *)(_DAT_05578bb0 + 0xe4);
        }
        if (iVar5 == 0) {
          il2cpp_runtime_helper_02337ed0();
          UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this_02,(MethodInfo *)0x0);
          return;
        }
        UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this_02,(MethodInfo *)0x0);
        return;
      }
      UVar40 = UnityEngine_Transform__get_lossyScale(__this_01,(MethodInfo *)0x0);
      in_XMM1_Dc = in_XMM1_Dc & 0x7fffffff;
      in_XMM1_Dd = in_XMM1_Dd & 0x7fffffff;
      UVar41 = UnityEngine_Transform__get_position(__this_01,(MethodInfo *)0x0);
      UVar42 = UnityEngine_Transform__get_up(__this_01,(MethodInfo *)0x0);
      fVar14 = UVar42.fields.z;
      auVar22._0_8_ = UVar42.fields._0_8_;
      auVar22._8_4_ = extraout_XMM0_Dc_10;
      auVar22._12_4_ = extraout_XMM0_Dd_10;
      fVar18 = ABS(UVar40.fields.x);
      if (ABS(UVar40.fields.x) <= ABS(UVar40.fields.z)) {
        fVar18 = ABS(UVar40.fields.z);
      }
      fVar34 = fVar18 * 0.5 + fVar19;
      fVar19 = fVar19 + ABS(UVar40.fields.y);
      fStack_128 = UVar41.fields.x;
      fStack_124 = UVar41.fields.y;
      register0x00000020 = (BADSPACEBASE *)auStack_e0;
      unaff_RBX = __this;
      unaff_R14 = position;
      fVar24 = extraout_XMM0_Dc_09;
      fVar32 = extraout_XMM0_Dd_09;
      fVar18 = UVar41.fields.z;
      fVar15 = ABS(UVar40.fields.y);
      uVar35 = extraout_XMM0_Dc_08 & 0x7fffffff;
      uVar36 = extraout_XMM0_Dd_08 & 0x7fffffff;
      goto EZhex1991_EZSoftBone_EZSoftBoneUtility__PointOutsideCylinder_2399b70;
    }
    UVar40 = UnityEngine_Transform__get_lossyScale(__this_01,(MethodInfo *)0x0);
    fStack_9c = UVar40.fields.y;
    fStack_b0 = ABS(UVar40.fields.x);
    fStack_ac = ABS(fStack_9c);
    uStack_a8 = extraout_XMM0_Dc_05 & 0x7fffffff;
    uStack_a4 = extraout_XMM0_Dd_05 & 0x7fffffff;
    fStack_a0 = ABS(fStack_9c);
    fStack_9c = ABS(fStack_9c);
    uStack_98 = extraout_XMM0_Dc_05 & 0x7fffffff;
    uStack_94 = extraout_XMM0_Dd_05 & 0x7fffffff;
    fStack_d0 = ABS(UVar40.fields.z);
    uStack_cc = in_XMM1_Db & 0x7fffffff;
    in_XMM1_Dc = in_XMM1_Dc & 0x7fffffff;
    in_XMM1_Dd = in_XMM1_Dd & 0x7fffffff;
    uStack_c8 = in_XMM1_Dc;
    uStack_c4 = in_XMM1_Dd;
    UVar40 = UnityEngine_Transform__get_position(__this_01,(MethodInfo *)0x0);
    fStack_d8 = UVar40.fields.z;
    fStack_b8 = (float)extraout_XMM0_Dc_06;
    auStack_c0 = UVar40.fields._0_8_;
    fStack_b4 = (float)extraout_XMM0_Dd_06;
    UVar40 = UnityEngine_Transform__get_up(__this_01,(MethodInfo *)0x0);
    fVar14 = UVar40.fields.z;
    auVar20._0_8_ = UVar40.fields._0_8_;
    auVar20._8_4_ = extraout_XMM0_Dc_07;
    auVar20._12_4_ = extraout_XMM0_Dd_07;
    fVar18 = fStack_b0;
    if (fStack_b0 <= fStack_d0) {
      fVar18 = fStack_d0;
    }
    fVar33 = fVar18 * 0.5 - fStack_d4;
    fVar37 = fStack_a0 - fStack_d4;
    register0x00000020 = (BADSPACEBASE *)auStack_78;
    unaff_RBX = pEStack_88;
    unaff_R14 = pUStack_80;
    fVar24 = (float)auStack_c0._0_4_;
    fVar32 = (float)auStack_c0._4_4_;
    fVar15 = fStack_b8;
    fVar19 = fStack_b4;
    fVar18 = fStack_d8;
    fVar34 = fStack_ac;
    uVar35 = uStack_a8;
    uVar36 = uStack_a4;
    fVar13 = fStack_9c;
    uVar38 = uStack_98;
    uVar39 = uStack_94;
  }
  else {
    pUStack_80 = (UnityEngine_Vector3_o *)0x2497cd1;
    UVar40 = UnityEngine_Transform__get_lossyScale(__this_00,(MethodInfo *)0x0);
    fStack_34 = UVar40.fields.y;
    fStack_48 = ABS(UVar40.fields.x);
    fStack_44 = ABS(fStack_34);
    uStack_40 = extraout_XMM0_Dc & 0x7fffffff;
    uStack_3c = extraout_XMM0_Dd & 0x7fffffff;
    fStack_38 = ABS(fStack_34);
    fStack_34 = ABS(fStack_34);
    uStack_30 = extraout_XMM0_Dc & 0x7fffffff;
    uStack_2c = extraout_XMM0_Dd & 0x7fffffff;
    fStack_68 = ABS(UVar40.fields.z);
    uStack_64 = in_XMM1_Db & 0x7fffffff;
    in_XMM1_Dc = in_XMM1_Dc & 0x7fffffff;
    in_XMM1_Dd = in_XMM1_Dd & 0x7fffffff;
    pUStack_80 = (UnityEngine_Vector3_o *)0x2497d01;
    uStack_60 = in_XMM1_Dc;
    uStack_5c = in_XMM1_Dd;
    UVar40 = UnityEngine_Transform__get_position(__this_00,(MethodInfo *)0x0);
    fStack_6c = UVar40.fields.z;
    fStack_50 = (float)extraout_XMM0_Dc_00;
    auStack_58 = UVar40.fields._0_8_;
    fStack_4c = (float)extraout_XMM0_Dd_00;
    pUStack_80 = (UnityEngine_Vector3_o *)0x2497d16;
    UVar40 = UnityEngine_Transform__get_up(__this_00,(MethodInfo *)0x0);
    fVar14 = UVar40.fields.z;
    auVar20._0_8_ = UVar40.fields._0_8_;
    auVar20._8_4_ = extraout_XMM0_Dc_01;
    auVar20._12_4_ = extraout_XMM0_Dd_01;
    fVar18 = fStack_48;
    if (fStack_48 <= fStack_68) {
      fVar18 = fStack_68;
    }
    fVar33 = fVar18 * 0.5 - fStack_70;
    fVar37 = fStack_38 - fStack_70;
    __this_02 = (EZhex1991_EZSoftBone_EZSoftBoneColliderCylinder_o *)position;
    fVar24 = (float)auStack_58._0_4_;
    fVar32 = (float)auStack_58._4_4_;
    fVar15 = fStack_50;
    fVar19 = fStack_4c;
    fVar18 = fStack_6c;
    fVar34 = fStack_44;
    uVar35 = uStack_40;
    uVar36 = uStack_3c;
    fVar13 = fStack_34;
    uVar38 = uStack_30;
    uVar39 = uStack_2c;
  }
  *(UnityEngine_Vector3_o **)((long)register0x00000020 + -8) = unaff_R14;
  *(EZhex1991_EZSoftBone_EZSoftBoneColliderCylinder_o **)((long)register0x00000020 + -0x10) = unaff_RBX;
  *(float *)((long)register0x00000020 + -0x98) = fVar37;
  *(float *)((long)register0x00000020 + -0x94) = fVar13;
  *(uint *)((long)register0x00000020 + -0x90) = uVar38;
  *(uint *)((long)register0x00000020 + -0x8c) = uVar39;
  *(float *)((long)register0x00000020 + -0x68) = fVar33;
  *(float *)((long)register0x00000020 + -100) = fVar34;
  *(uint *)((long)register0x00000020 + -0x60) = uVar35;
  *(uint *)((long)register0x00000020 + -0x5c) = uVar36;
  uVar2 = *(float *)&__this_02->klass;
  uVar4 = *(float *)((long)&__this_02->klass + 4);
  auVar29._4_4_ = uVar4;
  auVar29._0_4_ = uVar2;
  auVar29._8_8_ = 0;
  fVar34 = *(float *)&__this_02->monitor;
  if (g_data_057a6931 == '\0') {
    *(float *)((long)register0x00000020 + -0xa0) = fVar34;
    *(undefined1 (*) [16])((long)register0x00000020 + -0x78) = auVar29;
    *(float *)((long)register0x00000020 + -0x48) = fVar14;
    *(undefined1 (*) [16])((long)register0x00000020 + -0x58) = auVar20;
    *(float *)((long)register0x00000020 + -0x9c) = fVar18;
    *(float *)((long)register0x00000020 + -0x38) = fVar24;
    *(float *)((long)register0x00000020 + -0x34) = fVar32;
    *(float *)((long)register0x00000020 + -0x30) = fVar15;
    *(float *)((long)register0x00000020 + -0x2c) = fVar19;
    *(undefined8 *)((long)register0x00000020 + -0xb0) = 0x249a0b9;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Mathf);
    fVar24 = *(float *)((long)register0x00000020 + -0x38);
    fVar32 = *(float *)((long)register0x00000020 + -0x34);
    fVar15 = *(float *)((long)register0x00000020 + -0x30);
    fVar19 = *(float *)((long)register0x00000020 + -0x2c);
    fVar18 = *(float *)((long)register0x00000020 + -0x9c);
    auVar20 = *(undefined1 (*) [16])((long)register0x00000020 + -0x58);
    fVar14 = *(float *)((long)register0x00000020 + -0x48);
    in_XMM1_Dc = 0;
    in_XMM1_Dd = 0;
    auVar29 = *(undefined1 (*) [16])((long)register0x00000020 + -0x78);
    fVar34 = *(float *)((long)register0x00000020 + -0xa0);
    g_data_057a6931 = '\x01';
  }
  fVar24 = auVar29._0_4_ - fVar24;
  fVar32 = auVar29._4_4_ - fVar32;
  fVar34 = fVar34 - fVar18;
  fVar33 = auVar20._0_4_;
  fVar37 = auVar20._4_4_;
  fVar13 = fVar14 * fVar14 + fVar37 * fVar37 + fVar33 * fVar33;
  fVar18 = **(float **)(TypeInfo_Mathf + 0xb8);
  *(float *)((long)register0x00000020 + -0xa0) = fVar34;
  *(float *)((long)register0x00000020 + -0x78) = fVar24;
  *(float *)((long)register0x00000020 + -0x74) = fVar32;
  *(float *)((long)register0x00000020 + -0x70) = auVar29._8_4_ - fVar15;
  *(float *)((long)register0x00000020 + -0x6c) = auVar29._12_4_ - fVar19;
  if (fVar18 <= fVar13) {
    fVar18 = fVar34 * fVar14 + fVar32 * fVar37 + fVar33 * fVar24;
    auVar30._0_4_ = fVar18 * fVar33;
    auVar30._4_4_ = fVar18 * fVar37;
    auVar30._8_4_ = auVar20._8_4_ * 0.0;
    auVar30._12_4_ = auVar20._12_4_ * 0.0;
    auVar10._4_4_ = fVar13;
    auVar10._0_4_ = fVar13;
    auVar10._8_4_ = in_XMM1_Dc;
    auVar10._12_4_ = in_XMM1_Dd;
    auVar22 = divps(auVar30,auVar10);
    uVar25 = auVar22._0_8_;
    *(undefined1 (*) [16])((long)register0x00000020 + -0x48) = ZEXT416((uint)((fVar18 * fVar14) / fVar13));
    *(undefined1 (*) [16])((long)register0x00000020 + -0x58) = auVar22;
  }
  else {
    if (g_data_057a65d5 == '\0') {
      *(undefined8 *)((long)register0x00000020 + -0xb0) = 0x249a13e;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
      fVar34 = *(float *)((long)register0x00000020 + -0xa0);
      g_data_057a65d5 = '\x01';
    }
    uVar25 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
    *(undefined1 (*) [16])((long)register0x00000020 + -0x48) =
         ZEXT416(*(uint *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1));
    *(undefined8 *)((long)register0x00000020 + -0x58) = uVar25;
    *(undefined8 *)((long)register0x00000020 + -0x50) = 0;
  }
  if (g_data_057a6841 == '\0') {
    *(undefined8 *)((long)register0x00000020 + -0xb0) = 0x249a1da;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
    uVar25 = *(undefined8 *)((long)register0x00000020 + -0x58);
    fVar34 = *(float *)((long)register0x00000020 + -0xa0);
    g_data_057a6841 = '\x01';
  }
  if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
    *(undefined8 *)((long)register0x00000020 + -0xb0) = 0x249a204;
    il2cpp_runtime_helper_02337ed0();
    uVar25 = *(undefined8 *)((long)register0x00000020 + -0x58);
    fVar34 = *(float *)((long)register0x00000020 + -0xa0);
  }
  fVar14 = (float)((ulong)uVar25 >> 0x20);
  fVar14 = *(float *)((long)register0x00000020 + -0x48) * *(float *)((long)register0x00000020 + -0x48) +
           fVar14 * fVar14 + (float)uVar25 * (float)uVar25;
  *(float *)((long)register0x00000020 + -0x38) = fVar14;
  if (fVar14 < 0.0) {
    *(undefined8 *)((long)register0x00000020 + -0xb0) = 0x249a25e;
    fVar14 = sqrtf(fVar14);
    fVar34 = *(float *)((long)register0x00000020 + -0xa0);
    fVar19 = *(float *)((long)register0x00000020 + -0x98);
    uVar16 = *(undefined4 *)((long)register0x00000020 + -0x94);
    uVar17 = *(undefined4 *)((long)register0x00000020 + -0x90);
    uVar23 = *(undefined4 *)((long)register0x00000020 + -0x8c);
    fVar18 = *(float *)((long)register0x00000020 + -0x78);
    fVar24 = *(float *)((long)register0x00000020 + -0x74);
    fVar32 = *(float *)((long)register0x00000020 + -0x70);
    fVar15 = *(float *)((long)register0x00000020 + -0x6c);
  }
  else {
    fVar14 = SQRT(fVar14);
    fVar19 = *(float *)((long)register0x00000020 + -0x98);
    uVar16 = *(undefined4 *)((long)register0x00000020 + -0x94);
    uVar17 = *(undefined4 *)((long)register0x00000020 + -0x90);
    uVar23 = *(undefined4 *)((long)register0x00000020 + -0x8c);
    fVar18 = *(float *)((long)register0x00000020 + -0x78);
    fVar24 = *(float *)((long)register0x00000020 + -0x74);
    fVar32 = *(float *)((long)register0x00000020 + -0x70);
    fVar15 = *(float *)((long)register0x00000020 + -0x6c);
  }
  if (g_data_057a6841 == '\0') {
    *(float *)((long)register0x00000020 + -0x9c) = fVar14;
    *(undefined8 *)((long)register0x00000020 + -0xb0) = 0x249a289;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
    fVar14 = *(float *)((long)register0x00000020 + -0x9c);
    fVar18 = *(float *)((long)register0x00000020 + -0x78);
    fVar24 = *(float *)((long)register0x00000020 + -0x74);
    fVar32 = *(float *)((long)register0x00000020 + -0x70);
    fVar15 = *(float *)((long)register0x00000020 + -0x6c);
    fVar34 = *(float *)((long)register0x00000020 + -0xa0);
    fVar19 = *(float *)((long)register0x00000020 + -0x98);
    uVar16 = *(undefined4 *)((long)register0x00000020 + -0x94);
    uVar17 = *(undefined4 *)((long)register0x00000020 + -0x90);
    uVar23 = *(undefined4 *)((long)register0x00000020 + -0x8c);
    g_data_057a6841 = '\x01';
  }
  fVar18 = fVar18 - *(float *)((long)register0x00000020 + -0x58);
  fVar24 = fVar24 - *(float *)((long)register0x00000020 + -0x54);
  fVar34 = fVar34 - *(float *)((long)register0x00000020 + -0x48);
  iVar5 = *(int *)(TypeInfo_Math + 0xe4);
  *(float *)((long)register0x00000020 + -0xa0) = fVar34;
  *(float *)((long)register0x00000020 + -0x78) = fVar18;
  *(float *)((long)register0x00000020 + -0x74) = fVar24;
  *(float *)((long)register0x00000020 + -0x70) = fVar32 - *(float *)((long)register0x00000020 + -0x50);
  *(float *)((long)register0x00000020 + -0x6c) = fVar15 - *(float *)((long)register0x00000020 + -0x4c);
  if (iVar5 == 0) {
    *(float *)((long)register0x00000020 + -0x9c) = fVar14;
    *(undefined8 *)((long)register0x00000020 + -0xb0) = 0x249a2d3;
    il2cpp_runtime_helper_02337ed0();
    fVar14 = *(float *)((long)register0x00000020 + -0x9c);
    fVar18 = *(float *)((long)register0x00000020 + -0x78);
    fVar24 = *(float *)((long)register0x00000020 + -0x74);
    fVar34 = *(float *)((long)register0x00000020 + -0xa0);
    fVar19 = *(float *)((long)register0x00000020 + -0x98);
    uVar16 = *(undefined4 *)((long)register0x00000020 + -0x94);
    uVar17 = *(undefined4 *)((long)register0x00000020 + -0x90);
    uVar23 = *(undefined4 *)((long)register0x00000020 + -0x8c);
  }
  fVar19 = fVar19 - fVar14;
  fVar14 = fVar34 * fVar34 + fVar24 * fVar24 + fVar18 * fVar18;
  *(float *)((long)register0x00000020 + -0x9c) = fVar14;
  if (fVar14 < 0.0) {
    *(float *)((long)register0x00000020 + -0x98) = fVar19;
    *(undefined4 *)((long)register0x00000020 + -0x94) = uVar16;
    *(undefined4 *)((long)register0x00000020 + -0x90) = uVar17;
    *(undefined4 *)((long)register0x00000020 + -0x8c) = uVar23;
    *(undefined8 *)((long)register0x00000020 + -0xb0) = 0x249a349;
    fVar14 = sqrtf(fVar14);
    fVar19 = *(float *)((long)register0x00000020 + -0x98);
    uVar16 = *(undefined4 *)((long)register0x00000020 + -0x94);
    uVar17 = *(undefined4 *)((long)register0x00000020 + -0x90);
    uVar23 = *(undefined4 *)((long)register0x00000020 + -0x8c);
    auVar31._4_12_ = SUB1612(*(undefined1 (*) [16])((long)register0x00000020 + -0x68),4);
    auVar31._0_4_ = SUB164(*(undefined1 (*) [16])((long)register0x00000020 + -0x68),0) - fVar14;
  }
  else {
    auVar31._4_12_ = SUB1612(*(undefined1 (*) [16])((long)register0x00000020 + -0x68),4);
    auVar31._0_4_ = SUB164(*(undefined1 (*) [16])((long)register0x00000020 + -0x68),0) - SQRT(fVar14);
  }
  if (0.0 <= fVar19) {
    if (0.0 <= auVar31._0_4_) {
      return;
    }
  }
  uVar25 = *(undefined8 *)&__this_02->klass;
  *(float *)((long)register0x00000020 + -0x7c) = *(float *)&__this_02->monitor;
  *(undefined8 *)((long)register0x00000020 + -0x28) = uVar25;
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0;
  if (fVar19 <= auVar31._0_4_) {
    *(float *)((long)register0x00000020 + -0x98) = fVar19;
    *(undefined4 *)((long)register0x00000020 + -0x94) = uVar16;
    *(undefined4 *)((long)register0x00000020 + -0x90) = uVar17;
    *(undefined4 *)((long)register0x00000020 + -0x8c) = uVar23;
    if (g_data_057a6845 == '\0') {
      *(undefined8 *)((long)register0x00000020 + -0xb0) = 0x249a511;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
      fVar19 = *(float *)((long)register0x00000020 + -0x98);
      g_data_057a6845 = '\x01';
      if (*(int *)(TypeInfo_Math + 0xe4) == 0) goto label_0249a52d;
label_0249a42b:
      fVar14 = *(float *)((long)register0x00000020 + -0x38);
      if (0.0 <= fVar14) goto label_0249a43d;
label_0249a549:
      *(undefined8 *)((long)register0x00000020 + -0xb0) = 0x249a54e;
      fVar14 = sqrtf(fVar14);
      fVar19 = *(float *)((long)register0x00000020 + -0x98);
      uVar16 = extraout_XMM0_Dc_14;
      uVar17 = extraout_XMM0_Dd_14;
      if (1e-05 < fVar14) goto label_0249a560;
label_0249a44e:
      if (g_data_057a65d5 == '\0') {
        *(undefined8 *)((long)register0x00000020 + -0xb0) = 0x249a463;
        il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
        fVar19 = *(float *)((long)register0x00000020 + -0x98);
        g_data_057a65d5 = '\x01';
      }
      uVar25 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
      fVar18 = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
    }
    else {
      if (*(int *)(TypeInfo_Math + 0xe4) != 0) goto label_0249a42b;
label_0249a52d:
      *(undefined8 *)((long)register0x00000020 + -0xb0) = 0x249a532;
      il2cpp_runtime_helper_02337ed0();
      fVar19 = *(float *)((long)register0x00000020 + -0x98);
      fVar14 = *(float *)((long)register0x00000020 + -0x38);
      if (fVar14 < 0.0) goto label_0249a549;
label_0249a43d:
      uVar17 = 0;
      uVar16 = 0;
      fVar14 = SQRT(fVar14);
      if (fVar14 <= 1e-05) goto label_0249a44e;
label_0249a560:
      fVar18 = *(float *)((long)register0x00000020 + -0x48) / fVar14;
      auVar7._4_4_ = fVar14;
      auVar7._0_4_ = fVar14;
      auVar7._8_4_ = uVar16;
      auVar7._12_4_ = uVar17;
      auVar22 = divps(*(undefined1 (*) [16])((long)register0x00000020 + -0x58),auVar7);
      uVar25 = auVar22._0_8_;
    }
    fVar14 = fVar19 * (float)uVar25;
    fVar24 = fVar19 * (float)((ulong)uVar25 >> 0x20);
    fVar18 = fVar18 * fVar19;
    goto label_0249a583;
  }
  *(undefined1 (*) [16])((long)register0x00000020 + -0x68) = auVar31;
  if (g_data_057a6845 == '\0') {
    *(undefined8 *)((long)register0x00000020 + -0xb0) = 0x249a4da;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
    auVar31 = *(undefined1 (*) [16])((long)register0x00000020 + -0x68);
    g_data_057a6845 = '\x01';
    iVar5 = *(int *)(TypeInfo_Math + 0xe4);
  }
  else {
    iVar5 = *(int *)(TypeInfo_Math + 0xe4);
  }
  fVar32 = auVar31._0_4_;
  if (iVar5 == 0) {
    *(undefined8 *)((long)register0x00000020 + -0xb0) = 0x249a4fb;
    il2cpp_runtime_helper_02337ed0();
    fVar32 = SUB164(*(undefined1 (*) [16])((long)register0x00000020 + -0x68),0);
  }
  fVar14 = *(float *)((long)register0x00000020 + -0x9c);
  uVar16 = 0;
  uVar17 = 0;
  if (fVar14 < 0.0) {
    *(undefined8 *)((long)register0x00000020 + -0xb0) = 0x249a493;
    fVar14 = sqrtf(fVar14);
    fVar32 = SUB164(*(undefined1 (*) [16])((long)register0x00000020 + -0x68),0);
    fVar18 = *(float *)((long)register0x00000020 + -0xa0);
    uVar16 = extraout_XMM0_Dc_13;
    uVar17 = extraout_XMM0_Dd_13;
    if (1e-05 < fVar14) goto label_0249a4ab;
label_0249a3ce:
    if (g_data_057a65d5 == '\0') {
      *(undefined8 *)((long)register0x00000020 + -0xb0) = 0x249a3e3;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
      fVar32 = SUB164(*(undefined1 (*) [16])((long)register0x00000020 + -0x68),0);
      g_data_057a65d5 = '\x01';
    }
    uVar25 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
    fVar18 = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
  }
  else {
    fVar14 = SQRT(fVar14);
    fVar18 = *(float *)((long)register0x00000020 + -0xa0);
    if (fVar14 <= 1e-05) goto label_0249a3ce;
label_0249a4ab:
    fVar18 = fVar18 / fVar14;
    auVar6._4_4_ = fVar14;
    auVar6._0_4_ = fVar14;
    auVar6._8_4_ = uVar16;
    auVar6._12_4_ = uVar17;
    auVar22 = divps(*(undefined1 (*) [16])((long)register0x00000020 + -0x78),auVar6);
    uVar25 = auVar22._0_8_;
  }
  fVar14 = fVar32 * (float)uVar25;
  fVar24 = fVar32 * (float)((ulong)uVar25 >> 0x20);
  fVar18 = fVar18 * fVar32;
label_0249a583:
  fVar32 = *(float *)((long)register0x00000020 + -0x7c);
  fVar15 = *(float *)((long)register0x00000020 + -0x24);
  *(float *)&__this_02->klass = *(float *)((long)register0x00000020 + -0x28) + fVar14;
  *(float *)((long)&__this_02->klass + 4) = fVar15 + fVar24;
  *(float *)&__this_02->monitor = fVar32 + fVar18;
  return;
}


// EZhex1991.EZSoftBone.EZSoftBoneColliderCylinder$$.ctor
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBoneColliderCylinder___ctor (EZhex1991_EZSoftBone_EZSoftBoneColliderCylinder_o* __this, const MethodInfo* method);
// 0x2497f90

void EZhex1991_EZSoftBone_EZSoftBoneColliderCylinder___ctor
               (EZhex1991_EZSoftBone_EZSoftBoneColliderCylinder_o *__this,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057a692d == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_EZSoftBoneColliderBase);
    g_data_057a692d = '\x01';
    iVar1 = *(int *)(_DAT_05578bb0 + 0xe4);
  }
  else {
    iVar1 = *(int *)(_DAT_05578bb0 + 0xe4);
  }
  if (iVar1 != 0) {
    UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_02337ed0();
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


