// Type: EZhex1991.EZSoftBone.EZSoftBoneColliderCylinder
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/EZhex1991.EZSoftBone/EZhex1991.EZSoftBone/EZSoftBoneColliderCylinder.cs
// Prior real C# source (REFERENCE, outdated): Assets/ThirdParty/EZhex1991/EZSoftBone/Runtime/EZSoftBoneColliderCylinder.cs  [prior source available (delta unverified)]
// --------------------------------

// EZhex1991.EZSoftBone.EZSoftBoneColliderCylinder$$get_margin
// il2cpp: float EZhex1991_EZSoftBone_EZSoftBoneColliderCylinder__get_margin (EZhex1991_EZSoftBone_EZSoftBoneColliderCylinder_o* __this, const MethodInfo* method);
// 0x2459b30

float EZhex1991_EZSoftBone_EZSoftBoneColliderCylinder__get_margin
                (EZhex1991_EZSoftBone_EZSoftBoneColliderCylinder_o *__this,MethodInfo *method)

{
  return (__this->fields).m_Margin;
}


// EZhex1991.EZSoftBone.EZSoftBoneColliderCylinder$$set_margin
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBoneColliderCylinder__set_margin (EZhex1991_EZSoftBone_EZSoftBoneColliderCylinder_o* __this, float value, const MethodInfo* method);
// 0x2459b40

void EZhex1991_EZSoftBone_EZSoftBoneColliderCylinder__set_margin
               (EZhex1991_EZSoftBone_EZSoftBoneColliderCylinder_o *__this,float value,
               MethodInfo *method)

{
  (__this->fields).m_Margin = value;
  return;
}


// EZhex1991.EZSoftBone.EZSoftBoneColliderCylinder$$get_insideMode
// il2cpp: bool EZhex1991_EZSoftBone_EZSoftBoneColliderCylinder__get_insideMode (EZhex1991_EZSoftBone_EZSoftBoneColliderCylinder_o* __this, const MethodInfo* method);
// 0x2459b50

bool_conflict
EZhex1991_EZSoftBone_EZSoftBoneColliderCylinder__get_insideMode
          (EZhex1991_EZSoftBone_EZSoftBoneColliderCylinder_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),(char)(__this->fields).m_InsideMode);
}


// EZhex1991.EZSoftBone.EZSoftBoneColliderCylinder$$set_insideMode
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBoneColliderCylinder__set_insideMode (EZhex1991_EZSoftBone_EZSoftBoneColliderCylinder_o* __this, bool value, const MethodInfo* method);
// 0x2459b60

void EZhex1991_EZSoftBone_EZSoftBoneColliderCylinder__set_insideMode
               (EZhex1991_EZSoftBone_EZSoftBoneColliderCylinder_o *__this,bool_conflict value,
               MethodInfo *method)

{
  *(char *)&(__this->fields).m_InsideMode = (char)value;
  return;
}


// EZhex1991.EZSoftBone.EZSoftBoneColliderCylinder$$Collide
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBoneColliderCylinder__Collide (EZhex1991_EZSoftBone_EZSoftBoneColliderCylinder_o* __this, UnityEngine_Vector3_o* position, float spacing, const MethodInfo* method);
// 0x2459b70

void EZhex1991_EZSoftBone_EZSoftBoneColliderCylinder__Collide
               (EZhex1991_EZSoftBone_EZSoftBoneColliderCylinder_o *__this,
               UnityEngine_Vector3_o *position,float spacing,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  bool_conflict bVar15;
  UnityEngine_Transform_o *__this_00;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float extraout_XMM0_Dc;
  float extraout_XMM0_Dc_00;
  float extraout_XMM0_Dc_01;
  float extraout_XMM0_Dc_02;
  undefined4 extraout_XMM0_Dc_03;
  undefined4 extraout_XMM0_Dc_04;
  undefined4 uVar21;
  undefined4 extraout_XMM0_Dc_05;
  undefined4 extraout_XMM0_Dc_06;
  float extraout_XMM0_Dd;
  float extraout_XMM0_Dd_00;
  float extraout_XMM0_Dd_01;
  float extraout_XMM0_Dd_02;
  undefined4 extraout_XMM0_Dd_03;
  undefined4 extraout_XMM0_Dd_04;
  undefined4 uVar22;
  undefined4 extraout_XMM0_Dd_05;
  undefined4 extraout_XMM0_Dd_06;
  uint in_XMM1_Dc;
  uint in_XMM1_Dd;
  undefined1 auVar23 [16];
  undefined8 uVar24;
  undefined1 auVar25 [8];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  float fVar29;
  float fVar30;
  UnityEngine_Vector3_o UVar31;
  UnityEngine_Vector3_o UVar32;
  UnityEngine_Vector3_o UVar33;
  undefined1 auStack_78 [8];
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  undefined1 auStack_58 [8];
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_28;
  float fStack_24;
  
  bVar15 = (__this->fields).m_InsideMode;
  __this_00 = UnityEngine_Component__get_transform
                        ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  fVar16 = spacing + (__this->fields).m_Margin;
  if ((char)bVar15 == '\0') {
    if (__this_00 == (UnityEngine_Transform_o *)0x0) goto LAB_02459ced;
    UVar31 = UnityEngine_Transform__get_lossyScale(__this_00,(MethodInfo *)0x0);
    fStack_48 = ABS(UVar31.fields.x);
    in_XMM1_Dc = in_XMM1_Dc & 0x7fffffff;
    in_XMM1_Dd = in_XMM1_Dd & 0x7fffffff;
    fStack_68 = ABS(UVar31.fields.z);
    UVar32 = UnityEngine_Transform__get_position(__this_00,(MethodInfo *)0x0);
    UVar33 = UnityEngine_Transform__get_up(__this_00,(MethodInfo *)0x0);
    fVar18 = UVar33.fields.z;
    if (fStack_48 <= fStack_68) {
      fStack_48 = fStack_68;
    }
    auStack_58._0_4_ = UVar32.fields.x;
    auStack_58._4_4_ = UVar32.fields.y;
    uVar1 = (position->fields).x;
    uVar5 = (position->fields).y;
    fVar29 = (position->fields).z;
    if (DAT_056fe076 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_Mathf);
      in_XMM1_Dc = 0;
      in_XMM1_Dd = 0;
      DAT_056fe076 = '\x01';
    }
    fVar29 = fVar29 - UVar32.fields.z;
    fVar19 = UVar33.fields.x;
    fVar30 = UVar33.fields.y;
    fVar17 = fVar18 * fVar18 + fVar30 * fVar30 + fVar19 * fVar19;
    if (**(float **)(TypeInfo_Mathf + 0xb8) <= fVar17) {
      fVar20 = fVar29 * fVar18 +
               ((float)uVar5 - (float)auStack_58._4_4_) * fVar30 +
               fVar19 * ((float)uVar1 - (float)auStack_58._0_4_);
      auVar26._0_4_ = fVar20 * fVar19;
      auVar26._4_4_ = fVar20 * fVar30;
      auVar26._8_4_ = extraout_XMM0_Dc_02 * 0.0;
      auVar26._12_4_ = extraout_XMM0_Dd_02 * 0.0;
      auVar23._4_4_ = fVar17;
      auVar23._0_4_ = fVar17;
      auVar23._8_4_ = in_XMM1_Dc;
      auVar23._12_4_ = in_XMM1_Dd;
      auVar27 = divps(auVar26,auVar23);
      fVar17 = (fVar20 * fVar18) / fVar17;
    }
    else {
      if (DAT_056fdd15 == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_Vector3);
        DAT_056fdd15 = '\x01';
      }
      auVar27._8_8_ = 0;
      auVar27._0_8_ = **(ulong **)(TypeInfo_Vector3 + 0xb8);
      fVar17 = *(float *)(*(ulong **)(TypeInfo_Vector3 + 0xb8) + 1);
    }
    if (DAT_056fde1c == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_Math);
      DAT_056fde1c = '\x01';
    }
    if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
      il2cpp_init_class();
    }
    fVar19 = auVar27._0_4_;
    fVar30 = auVar27._4_4_;
    fVar18 = fVar17 * fVar17 + fVar30 * fVar30 + fVar19 * fVar19;
    if (fVar18 < 0.0) {
      fVar20 = sqrtf(fVar18);
    }
    else {
      fVar20 = SQRT(fVar18);
    }
    fVar20 = (fVar16 + ABS(UVar31.fields.y)) - fVar20;
    if (fVar20 <= 0.0) {
      return;
    }
    if (DAT_056fde1c == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_Math);
      DAT_056fde1c = '\x01';
    }
    auStack_58._0_4_ = ((float)uVar1 - (float)auStack_58._0_4_) - fVar19;
    auStack_58._4_4_ = ((float)uVar5 - (float)auStack_58._4_4_) - fVar30;
    fVar29 = fVar29 - fVar17;
    fStack_50 = (0.0 - extraout_XMM0_Dc_01) - auVar27._8_4_;
    fStack_4c = (0.0 - extraout_XMM0_Dd_01) - auVar27._12_4_;
    if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
      il2cpp_init_class();
    }
    fVar19 = fVar29 * fVar29 +
             (float)auStack_58._4_4_ * (float)auStack_58._4_4_ +
             (float)auStack_58._0_4_ * (float)auStack_58._0_4_;
    if (fVar19 < 0.0) {
      fVar30 = sqrtf(fVar19);
    }
    else {
      fVar30 = SQRT(fVar19);
    }
    fVar30 = (fStack_48 * 0.5 + fVar16) - fVar30;
    if (fVar30 <= 0.0) {
      return;
    }
    uVar2 = (position->fields).x;
    uVar6 = (position->fields).y;
    fVar16 = (position->fields).z;
    if (fVar20 <= fVar30) {
      if (DAT_056fde20 == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_Math);
        DAT_056fde20 = '\x01';
      }
      if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
        il2cpp_init_class();
      }
      uVar21 = 0;
      uVar22 = 0;
      if (fVar18 < 0.0) {
        fVar18 = sqrtf(fVar18);
        uVar21 = extraout_XMM0_Dc_04;
        uVar22 = extraout_XMM0_Dd_04;
        if (1e-05 < fVar18) goto LAB_0245bf07;
LAB_0245be57:
        if (DAT_056fdd15 == '\0') {
          il2cpp_init_method_metadata(&TypeInfo_Vector3);
          DAT_056fdd15 = '\x01';
        }
        uVar24 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
        fVar29 = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
      }
      else {
        fVar18 = SQRT(fVar18);
        if (fVar18 <= 1e-05) goto LAB_0245be57;
LAB_0245bf07:
        fVar29 = fVar17 / fVar18;
        auVar13._4_4_ = fVar18;
        auVar13._0_4_ = fVar18;
        auVar13._8_4_ = uVar21;
        auVar13._12_4_ = uVar22;
        auVar23 = divps(auVar27,auVar13);
        uVar24 = auVar23._0_8_;
      }
      fVar18 = fVar20 * (float)uVar24;
      fVar17 = fVar20 * (float)((ulong)uVar24 >> 0x20);
      fVar29 = fVar29 * fVar20;
      goto LAB_0245bf35;
    }
    if (DAT_056fde20 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_Math);
      DAT_056fde20 = '\x01';
    }
    if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
      il2cpp_init_class();
    }
    uVar21 = 0;
    uVar22 = 0;
    if (fVar19 < 0.0) {
      fVar19 = sqrtf(fVar19);
      uVar21 = extraout_XMM0_Dc_03;
      uVar22 = extraout_XMM0_Dd_03;
      if (1e-05 < fVar19) goto LAB_0245bea6;
LAB_0245bdb0:
      if (DAT_056fdd15 == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_Vector3);
        DAT_056fdd15 = '\x01';
      }
      uVar24 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
      fVar29 = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
    }
    else {
      fVar19 = SQRT(fVar19);
      if (fVar19 <= 1e-05) goto LAB_0245bdb0;
LAB_0245bea6:
      fVar29 = fVar29 / fVar19;
      auVar12._4_4_ = fVar19;
      auVar12._0_4_ = fVar19;
      auVar12._8_4_ = uVar21;
      auVar12._12_4_ = uVar22;
      auVar23 = divps(_auStack_58,auVar12);
      uVar24 = auVar23._0_8_;
    }
    fVar18 = fVar30 * (float)uVar24;
    fVar17 = fVar30 * (float)((ulong)uVar24 >> 0x20);
    fVar29 = fVar29 * fVar30;
LAB_0245bf35:
    (position->fields).x = (float)uVar2 + fVar18;
    (position->fields).y = (float)uVar6 + fVar17;
    (position->fields).z = fVar16 + fVar29;
    return;
  }
  if (__this_00 == (UnityEngine_Transform_o *)0x0) {
LAB_02459ced:
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  UVar31 = UnityEngine_Transform__get_lossyScale(__this_00,(MethodInfo *)0x0);
  fStack_48 = ABS(UVar31.fields.x);
  in_XMM1_Dc = in_XMM1_Dc & 0x7fffffff;
  in_XMM1_Dd = in_XMM1_Dd & 0x7fffffff;
  fStack_68 = ABS(UVar31.fields.z);
  UVar32 = UnityEngine_Transform__get_position(__this_00,(MethodInfo *)0x0);
  UVar33 = UnityEngine_Transform__get_up(__this_00,(MethodInfo *)0x0);
  fVar18 = UVar33.fields.z;
  if (fStack_48 <= fStack_68) {
    fStack_48 = fStack_68;
  }
  auStack_58._0_4_ = UVar32.fields.x;
  auStack_58._4_4_ = UVar32.fields.y;
  uVar3 = (position->fields).x;
  uVar7 = (position->fields).y;
  fVar29 = (position->fields).z;
  if (DAT_056fe076 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Mathf);
    in_XMM1_Dc = 0;
    in_XMM1_Dd = 0;
    DAT_056fe076 = '\x01';
  }
  auStack_78._0_4_ = (float)uVar3 - (float)auStack_58._0_4_;
  auStack_78._4_4_ = (float)uVar7 - (float)auStack_58._4_4_;
  fVar29 = fVar29 - UVar32.fields.z;
  fVar19 = UVar33.fields.x;
  fVar30 = UVar33.fields.y;
  fVar17 = fVar18 * fVar18 + fVar30 * fVar30 + fVar19 * fVar19;
  if (**(float **)(TypeInfo_Mathf + 0xb8) <= fVar17) {
    fVar20 = fVar29 * fVar18 + (float)auStack_78._4_4_ * fVar30 + fVar19 * (float)auStack_78._0_4_;
    auVar28._0_4_ = fVar20 * fVar19;
    auVar28._4_4_ = fVar20 * fVar30;
    auVar28._8_4_ = extraout_XMM0_Dc_00 * 0.0;
    auVar28._12_4_ = extraout_XMM0_Dd_00 * 0.0;
    auVar14._4_4_ = fVar17;
    auVar14._0_4_ = fVar17;
    auVar14._8_4_ = in_XMM1_Dc;
    auVar14._12_4_ = in_XMM1_Dd;
    _auStack_58 = divps(auVar28,auVar14);
    auVar25 = auStack_58;
    fVar17 = (fVar20 * fVar18) / fVar17;
  }
  else {
    if (DAT_056fdd15 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_Vector3);
      DAT_056fdd15 = '\x01';
    }
    auVar25 = (undefined1  [8])**(ulong **)(TypeInfo_Vector3 + 0xb8);
    fVar17 = *(float *)(*(ulong **)(TypeInfo_Vector3 + 0xb8) + 1);
    _fStack_50 = 0;
    auStack_58 = auVar25;
  }
  if (DAT_056fde1c == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Math);
    DAT_056fde1c = '\x01';
    auVar25 = auStack_58;
  }
  if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
    il2cpp_init_class();
    auVar25 = auStack_58;
  }
  fVar18 = (float)((ulong)auVar25 >> 0x20);
  fVar18 = fVar17 * fVar17 + fVar18 * fVar18 + SUB84(auVar25,0) * SUB84(auVar25,0);
  if (fVar18 < 0.0) {
    fVar19 = sqrtf(fVar18);
  }
  else {
    fVar19 = SQRT(fVar18);
  }
  if (DAT_056fde1c == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Math);
    DAT_056fde1c = '\x01';
  }
  auStack_78._0_4_ = (float)auStack_78._0_4_ - (float)auStack_58._0_4_;
  auStack_78._4_4_ = (float)auStack_78._4_4_ - (float)auStack_58._4_4_;
  fVar29 = fVar29 - fVar17;
  fStack_70 = (0.0 - extraout_XMM0_Dc) - fStack_50;
  fStack_6c = (0.0 - extraout_XMM0_Dd) - fStack_4c;
  if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
    il2cpp_init_class();
  }
  fVar19 = (ABS(UVar31.fields.y) - fVar16) - fVar19;
  fVar30 = fVar29 * fVar29 +
           (float)auStack_78._4_4_ * (float)auStack_78._4_4_ +
           (float)auStack_78._0_4_ * (float)auStack_78._0_4_;
  if (fVar30 < 0.0) {
    fVar20 = sqrtf(fVar30);
  }
  else {
    fVar20 = SQRT(fVar30);
  }
  fVar20 = (fStack_48 * 0.5 - fVar16) - fVar20;
  if (0.0 <= fVar19) {
    if (0.0 <= fVar20) {
      return;
    }
  }
  uVar4 = (position->fields).x;
  uVar8 = (position->fields).y;
  fVar16 = (position->fields).z;
  if (fVar19 <= fVar20) {
    if (DAT_056fde20 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_Math);
      DAT_056fde20 = '\x01';
      if (*(int *)(TypeInfo_Math + 0xe4) == 0) goto LAB_0245c41d;
LAB_0245c31b:
      if (0.0 <= fVar18) goto LAB_0245c32d;
LAB_0245c439:
      fVar18 = sqrtf(fVar18);
      uVar21 = extraout_XMM0_Dc_06;
      uVar22 = extraout_XMM0_Dd_06;
      if (1e-05 < fVar18) goto LAB_0245c450;
LAB_0245c33e:
      if (DAT_056fdd15 == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_Vector3);
        DAT_056fdd15 = '\x01';
      }
      uVar24 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
      fVar29 = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
    }
    else {
      if (*(int *)(TypeInfo_Math + 0xe4) != 0) goto LAB_0245c31b;
LAB_0245c41d:
      il2cpp_init_class();
      if (fVar18 < 0.0) goto LAB_0245c439;
LAB_0245c32d:
      uVar22 = 0;
      uVar21 = 0;
      fVar18 = SQRT(fVar18);
      if (fVar18 <= 1e-05) goto LAB_0245c33e;
LAB_0245c450:
      fVar29 = fVar17 / fVar18;
      auVar11._4_4_ = fVar18;
      auVar11._0_4_ = fVar18;
      auVar11._8_4_ = uVar21;
      auVar11._12_4_ = uVar22;
      auVar23 = divps(_auStack_58,auVar11);
      uVar24 = auVar23._0_8_;
    }
    fVar18 = fVar19 * (float)uVar24;
    fVar17 = fVar19 * (float)((ulong)uVar24 >> 0x20);
    fVar29 = fVar29 * fVar19;
    goto LAB_0245c473;
  }
  if (DAT_056fde20 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Math);
    DAT_056fde20 = '\x01';
    iVar9 = *(int *)(TypeInfo_Math + 0xe4);
  }
  else {
    iVar9 = *(int *)(TypeInfo_Math + 0xe4);
  }
  if (iVar9 == 0) {
    il2cpp_init_class();
  }
  uVar21 = 0;
  uVar22 = 0;
  if (fVar30 < 0.0) {
    fVar30 = sqrtf(fVar30);
    uVar21 = extraout_XMM0_Dc_05;
    uVar22 = extraout_XMM0_Dd_05;
    if (1e-05 < fVar30) goto LAB_0245c39b;
LAB_0245c2be:
    if (DAT_056fdd15 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_Vector3);
      DAT_056fdd15 = '\x01';
    }
    uVar24 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
    fVar29 = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
  }
  else {
    fVar30 = SQRT(fVar30);
    if (fVar30 <= 1e-05) goto LAB_0245c2be;
LAB_0245c39b:
    fVar29 = fVar29 / fVar30;
    auVar10._4_4_ = fVar30;
    auVar10._0_4_ = fVar30;
    auVar10._8_4_ = uVar21;
    auVar10._12_4_ = uVar22;
    auVar23 = divps(_auStack_78,auVar10);
    uVar24 = auVar23._0_8_;
  }
  fVar18 = fVar20 * (float)uVar24;
  fVar17 = fVar20 * (float)((ulong)uVar24 >> 0x20);
  fVar29 = fVar29 * fVar20;
LAB_0245c473:
  (position->fields).x = (float)uVar4 + fVar18;
  (position->fields).y = (float)uVar8 + fVar17;
  (position->fields).z = fVar16 + fVar29;
  return;
}


// EZhex1991.EZSoftBone.EZSoftBoneColliderCylinder$$.ctor
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBoneColliderCylinder___ctor (EZhex1991_EZSoftBone_EZSoftBoneColliderCylinder_o* __this, const MethodInfo* method);
// 0x2459e80

void EZhex1991_EZSoftBone_EZSoftBoneColliderCylinder___ctor
               (EZhex1991_EZSoftBone_EZSoftBoneColliderCylinder_o *__this,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_056fe072 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_EZSoftBoneColliderBase);
    DAT_056fe072 = '\x01';
    iVar1 = *(int *)(TypeInfo_EZSoftBoneColliderBase + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_EZSoftBoneColliderBase + 0xe4);
  }
  if (iVar1 != 0) {
    UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
    return;
  }
  il2cpp_init_class();
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


