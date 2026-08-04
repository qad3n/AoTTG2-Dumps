// Type: EZhex1991.EZSoftBone.EZSoftBoneUtility
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/EZhex1991.EZSoftBone/EZhex1991.EZSoftBone/EZSoftBoneUtility.cs
// Prior real C# source (older reference): Assets/ThirdParty/EZhex1991/EZSoftBone/Runtime/EZSoftBoneUtility.cs
// --------------------------------

// EZhex1991.EZSoftBone.EZSoftBoneUtility$$Abs
// il2cpp: UnityEngine_Vector3_o EZhex1991_EZSoftBone_EZSoftBoneUtility__Abs (UnityEngine_Vector3_o v, const MethodInfo* method);
// 0x2494410

UnityEngine_Vector3_o EZhex1991_EZSoftBone_EZSoftBoneUtility__Abs(UnityEngine_Vector3_o v,MethodInfo *method)

{
  UnityEngine_Vector3_o UVar1;
  
  UVar1.fields._0_8_ = v.fields._0_8_ & 0x7fffffff7fffffff;
  UVar1.fields.z = ABS(v.fields.z);
  return (UnityEngine_Vector3_o)UVar1.fields;
}


// EZhex1991.EZSoftBone.EZSoftBoneUtility$$Max
// il2cpp: float EZhex1991_EZSoftBone_EZSoftBoneUtility__Max (UnityEngine_Vector3_o v, const MethodInfo* method);
// 0x2494420

float EZhex1991_EZSoftBone_EZSoftBoneUtility__Max(UnityEngine_Vector3_o v,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  
  fVar2 = v.fields.y;
  if (v.fields.y <= v.fields.z) {
    fVar2 = v.fields.z;
  }
  fVar1 = v.fields.x;
  if (v.fields.x <= fVar2) {
    fVar1 = fVar2;
  }
  return fVar1;
}


// EZhex1991.EZSoftBone.EZSoftBoneUtility$$Contains
// il2cpp: bool EZhex1991_EZSoftBone_EZSoftBoneUtility__Contains (UnityEngine_LayerMask_o mask, int32_t layer, const MethodInfo* method);
// 0x2495a00

bool_conflict
EZhex1991_EZSoftBone_EZSoftBoneUtility__Contains
          (UnityEngine_LayerMask_o mask,int32_t layer,MethodInfo *method)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = UnityEngine_LayerMask__op_Implicit(mask,(MethodInfo *)0x0);
  uVar2 = UnityEngine_LayerMask__op_Implicit(mask,(MethodInfo *)0x0);
  return CONCAT31((int3)(uVar2 >> 8),(uVar1 | 1 << (layer & 0x1fU)) == uVar2);
}


// EZhex1991.EZSoftBone.EZSoftBoneUtility$$GetCapsuleParams
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBoneUtility__GetCapsuleParams (UnityEngine_CapsuleCollider_o* collider, UnityEngine_Vector3_o* center0, UnityEngine_Vector3_o* center1, float* radius, const MethodInfo* method);
// 0x24985e0

void EZhex1991_EZSoftBone_EZSoftBoneUtility__GetCapsuleParams
               (UnityEngine_CapsuleCollider_o *collider,UnityEngine_Vector3_o *center0,
               UnityEngine_Vector3_o *center1,float *radius,MethodInfo *method)

{
  UnityEngine_Transform_c *pUVar1;
  int iVar2;
  int32_t iVar3;
  UnityEngine_Transform_o *pUVar4;
  float *pfVar5;
  float *pfVar6;
  undefined8 *extraout_RDX;
  UnityEngine_Vector3_o *pUVar7;
  UnityEngine_Transform_o *__this;
  float fVar8;
  float fVar9;
  float fVar11;
  undefined8 uVar10;
  float extraout_XMM0_Dc;
  undefined4 uVar12;
  undefined4 extraout_XMM0_Dc_00;
  float extraout_XMM0_Dd;
  undefined4 uVar13;
  undefined4 extraout_XMM0_Dd_00;
  float in_XMM1_Da;
  float fVar14;
  float in_XMM2_Da;
  undefined1 auVar16 [16];
  UnityEngine_Vector3_o UVar17;
  UnityEngine_Vector3_o UVar18;
  undefined1 local_f8 [8];
  float fStack_f0;
  float fStack_ec;
  undefined8 uVar15;
  
  pfVar6 = radius;
  pUVar7 = center0;
  __this = (UnityEngine_Transform_o *)collider;
  if (collider == (UnityEngine_CapsuleCollider_o *)0x0) goto label_024987e0;
  pUVar7 = (UnityEngine_Vector3_o *)0x0;
  pUVar4 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)collider,(MethodInfo *)0x0);
  if (pUVar4 == (UnityEngine_Transform_o *)0x0) goto label_024987e0;
  UVar17 = UnityEngine_Transform__get_lossyScale(pUVar4,(MethodInfo *)0x0);
  in_XMM2_Da = NAN;
  fVar8 = ABS(UVar17.fields.x);
  fVar11 = ABS(UVar17.fields.y);
  fVar14 = ABS(UVar17.fields.z);
  fVar9 = UnityEngine_CapsuleCollider__get_radius(collider,(MethodInfo *)0x0);
  *radius = fVar9;
  UVar17 = UnityEngine_CapsuleCollider__get_center(collider,(MethodInfo *)0x0);
  in_XMM1_Da = UVar17.fields.z;
  uVar10 = UVar17.fields._0_8_;
  (center1->fields).x = (float)(int)uVar10;
  (center1->fields).y = (float)(int)((ulong)uVar10 >> 0x20);
  (center1->fields).z = in_XMM1_Da;
  (center0->fields).x = (float)(int)uVar10;
  (center0->fields).y = (float)(int)((ulong)uVar10 >> 0x20);
  (center0->fields).z = in_XMM1_Da;
  fVar9 = UnityEngine_CapsuleCollider__get_height(collider,(MethodInfo *)0x0);
  fVar9 = fVar9 * 0.5;
  iVar3 = UnityEngine_CapsuleCollider__get_direction(collider,(MethodInfo *)0x0);
  if (iVar3 == 2) {
    pfVar5 = &(center1->fields).z;
    if (fVar8 <= fVar11) {
      fVar8 = fVar11;
    }
    fVar11 = *radius;
    *radius = fVar8 * fVar11;
    in_XMM2_Da = fVar9 - (fVar8 * fVar11) / fVar14;
    fVar11 = 0.0;
    if (0.0 <= in_XMM2_Da) {
      fVar11 = in_XMM2_Da;
    }
    in_XMM1_Da = (center0->fields).z - fVar11;
    (center0->fields).z = in_XMM1_Da;
label_02498770:
    *pfVar5 = fVar11 + *pfVar5;
  }
  else {
    if (iVar3 == 1) {
      if (fVar8 <= fVar14) {
        fVar8 = fVar14;
      }
      fVar14 = *radius;
      *radius = fVar8 * fVar14;
      fVar9 = fVar9 - (fVar8 * fVar14) / fVar11;
      fVar11 = 0.0;
      if (0.0 <= fVar9) {
        fVar11 = fVar9;
      }
      in_XMM1_Da = (center0->fields).y - fVar11;
      (center0->fields).y = in_XMM1_Da;
      pfVar5 = &(center1->fields).y;
      goto label_02498770;
    }
    if (iVar3 == 0) {
      if (fVar11 <= fVar14) {
        fVar11 = fVar14;
      }
      fVar14 = *radius;
      *radius = fVar11 * fVar14;
      fVar9 = fVar9 - (fVar11 * fVar14) / fVar8;
      fVar11 = 0.0;
      if (0.0 <= fVar9) {
        fVar11 = fVar9;
      }
      in_XMM1_Da = (center0->fields).x - fVar11;
      (center0->fields).x = in_XMM1_Da;
      pfVar5 = (float *)center1;
      goto label_02498770;
    }
  }
  pUVar7 = (UnityEngine_Vector3_o *)0x0;
  __this = (UnityEngine_Transform_o *)collider;
  pUVar4 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)collider,(MethodInfo *)0x0);
  if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
    UVar17 = UnityEngine_Transform__TransformPoint(pUVar4,center0->fields,(MethodInfo *)0x0);
    in_XMM1_Da = UVar17.fields.z;
    (center0->fields).x = (float)(int)UVar17.fields._0_8_;
    (center0->fields).y = (float)(int)((ulong)UVar17.fields._0_8_ >> 0x20);
    (center0->fields).z = in_XMM1_Da;
    pUVar7 = (UnityEngine_Vector3_o *)0x0;
    pUVar4 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)collider,(MethodInfo *)0x0);
    __this = (UnityEngine_Transform_o *)collider;
    if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
      UVar17 = UnityEngine_Transform__TransformPoint(pUVar4,center1->fields,(MethodInfo *)0x0);
      (center1->fields).x = (float)(int)UVar17.fields._0_8_;
      (center1->fields).y = (float)(int)((ulong)UVar17.fields._0_8_ >> 0x20);
      (center1->fields).z = UVar17.fields.z;
      return;
    }
  }
label_024987e0:
  il2cpp_runtime_helper_022b2c90();
  if (__this != (UnityEngine_Transform_o *)0x0) {
    UVar17 = UnityEngine_Transform__get_lossyScale(__this,(MethodInfo *)0x0);
    UVar18 = UnityEngine_Transform__get_position(__this,(MethodInfo *)0x0);
    (pUVar7->fields).x = (float)(int)UVar18.fields._0_8_;
    (pUVar7->fields).y = (float)(int)((ulong)UVar18.fields._0_8_ >> 0x20);
    (pUVar7->fields).z = UVar18.fields.z;
    UVar18 = UnityEngine_Transform__get_up(__this,(MethodInfo *)0x0);
    *extraout_RDX = UVar18.fields._0_8_;
    *(float *)(extraout_RDX + 1) = UVar18.fields.z;
    fVar11 = ABS(UVar17.fields.x);
    if (ABS(UVar17.fields.x) <= ABS(UVar17.fields.z)) {
      fVar11 = ABS(UVar17.fields.z);
    }
    *pfVar6 = fVar11 * 0.5;
    *(float *)&method->methodPointer = ABS(UVar17.fields.y);
    return;
  }
  uVar10 = il2cpp_runtime_helper_022b2c90();
  fVar8 = (float)((ulong)uVar10 >> 0x20);
  pUVar1 = __this->klass;
  fVar11 = *(float *)&__this->monitor;
  if (g_data_057a6841 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
    g_data_057a6841 = '\x01';
  }
  local_f8._0_4_ = SUB84(pUVar1,0) - (float)uVar10;
  local_f8._4_4_ = (float)((ulong)pUVar1 >> 0x20) - fVar8;
  fVar11 = fVar11 - in_XMM1_Da;
  fStack_f0 = 0.0 - extraout_XMM0_Dc;
  fStack_ec = 0.0 - extraout_XMM0_Dd;
  if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  fVar9 = fVar11 * fVar11 +
          (float)local_f8._4_4_ * (float)local_f8._4_4_ + (float)local_f8._0_4_ * (float)local_f8._0_4_;
  if (fVar9 < 0.0) {
    fVar14 = sqrtf(fVar9);
  }
  else {
    fVar14 = SQRT(fVar9);
  }
  if (in_XMM2_Da <= fVar14) {
    return;
  }
  if (g_data_057a6845 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
    g_data_057a6845 = '\x01';
    iVar2 = *(int *)(TypeInfo_Math + 0xe4);
  }
  else {
    iVar2 = *(int *)(TypeInfo_Math + 0xe4);
  }
  if (iVar2 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (fVar9 < 0.0) {
    fVar9 = sqrtf(fVar9);
    uVar12 = extraout_XMM0_Dc_00;
    uVar13 = extraout_XMM0_Dd_00;
  }
  else {
    uVar12 = 0;
    uVar13 = 0;
    fVar9 = SQRT(fVar9);
  }
  if (fVar9 <= 1e-05) {
    if (g_data_057a65d5 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
      g_data_057a65d5 = '\x01';
    }
    uVar15 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
    fVar11 = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
  }
  else {
    fVar11 = fVar11 / fVar9;
    auVar16._4_4_ = fVar9;
    auVar16._0_4_ = fVar9;
    auVar16._8_4_ = uVar12;
    auVar16._12_4_ = uVar13;
    auVar16 = divps(_local_f8,auVar16);
    uVar15 = auVar16._0_8_;
  }
  __this->klass =
       (UnityEngine_Transform_c *)
       CONCAT44(in_XMM2_Da * (float)((ulong)uVar15 >> 0x20) + fVar8,in_XMM2_Da * (float)uVar15 + (float)uVar10
               );
  *(float *)&__this->monitor = fVar11 * in_XMM2_Da + in_XMM1_Da;
  return;
}


// EZhex1991.EZSoftBone.EZSoftBoneUtility$$GetCylinderParams
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBoneUtility__GetCylinderParams (UnityEngine_Transform_o* transform, UnityEngine_Vector3_o* center, UnityEngine_Vector3_o* direction, float* radius, float* height, const MethodInfo* method);
// 0x24987f0

void EZhex1991_EZSoftBone_EZSoftBoneUtility__GetCylinderParams
               (UnityEngine_Transform_o *transform,UnityEngine_Vector3_o *center,
               UnityEngine_Vector3_o *direction,float *radius,float *height,MethodInfo *method)

{
  UnityEngine_Transform_c *pUVar1;
  int iVar2;
  float fVar3;
  undefined8 uVar4;
  float extraout_XMM0_Dc;
  undefined4 uVar6;
  undefined4 extraout_XMM0_Dc_00;
  float extraout_XMM0_Dd;
  undefined4 uVar7;
  undefined4 extraout_XMM0_Dd_00;
  float in_XMM1_Da;
  float in_XMM2_Da;
  float fVar8;
  undefined1 auVar10 [16];
  float fVar11;
  UnityEngine_Vector3_o UVar12;
  UnityEngine_Vector3_o UVar13;
  undefined1 auStack_a0 [8];
  float fStack_98;
  float fStack_94;
  float fVar5;
  undefined8 uVar9;
  
  if (transform != (UnityEngine_Transform_o *)0x0) {
    UVar12 = UnityEngine_Transform__get_lossyScale(transform,(MethodInfo *)0x0);
    UVar13 = UnityEngine_Transform__get_position(transform,(MethodInfo *)0x0);
    (center->fields).x = (float)(int)UVar13.fields._0_8_;
    (center->fields).y = (float)(int)((ulong)UVar13.fields._0_8_ >> 0x20);
    (center->fields).z = UVar13.fields.z;
    UVar13 = UnityEngine_Transform__get_up(transform,(MethodInfo *)0x0);
    (direction->fields).x = (float)(int)UVar13.fields._0_8_;
    (direction->fields).y = (float)(int)((ulong)UVar13.fields._0_8_ >> 0x20);
    (direction->fields).z = UVar13.fields.z;
    fVar8 = ABS(UVar12.fields.x);
    if (ABS(UVar12.fields.x) <= ABS(UVar12.fields.z)) {
      fVar8 = ABS(UVar12.fields.z);
    }
    *radius = fVar8 * 0.5;
    *height = ABS(UVar12.fields.y);
    return;
  }
  uVar4 = il2cpp_runtime_helper_022b2c90();
  fVar5 = (float)((ulong)uVar4 >> 0x20);
  pUVar1 = transform->klass;
  fVar8 = *(float *)&transform->monitor;
  if (g_data_057a6841 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
    g_data_057a6841 = '\x01';
  }
  auStack_a0._0_4_ = SUB84(pUVar1,0) - (float)uVar4;
  auStack_a0._4_4_ = (float)((ulong)pUVar1 >> 0x20) - fVar5;
  fVar8 = fVar8 - in_XMM1_Da;
  fStack_98 = 0.0 - extraout_XMM0_Dc;
  fStack_94 = 0.0 - extraout_XMM0_Dd;
  if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  fVar11 = fVar8 * fVar8 +
           (float)auStack_a0._4_4_ * (float)auStack_a0._4_4_ +
           (float)auStack_a0._0_4_ * (float)auStack_a0._0_4_;
  if (fVar11 < 0.0) {
    fVar3 = sqrtf(fVar11);
  }
  else {
    fVar3 = SQRT(fVar11);
  }
  if (in_XMM2_Da <= fVar3) {
    return;
  }
  if (g_data_057a6845 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
    g_data_057a6845 = '\x01';
    iVar2 = *(int *)(TypeInfo_Math + 0xe4);
  }
  else {
    iVar2 = *(int *)(TypeInfo_Math + 0xe4);
  }
  if (iVar2 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (fVar11 < 0.0) {
    fVar11 = sqrtf(fVar11);
    uVar6 = extraout_XMM0_Dc_00;
    uVar7 = extraout_XMM0_Dd_00;
  }
  else {
    uVar6 = 0;
    uVar7 = 0;
    fVar11 = SQRT(fVar11);
  }
  if (fVar11 <= 1e-05) {
    if (g_data_057a65d5 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
      g_data_057a65d5 = '\x01';
    }
    uVar9 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
    fVar8 = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
  }
  else {
    fVar8 = fVar8 / fVar11;
    auVar10._4_4_ = fVar11;
    auVar10._0_4_ = fVar11;
    auVar10._8_4_ = uVar6;
    auVar10._12_4_ = uVar7;
    auVar10 = divps(_auStack_a0,auVar10);
    uVar9 = auVar10._0_8_;
  }
  transform->klass =
       (UnityEngine_Transform_c *)
       CONCAT44(in_XMM2_Da * (float)((ulong)uVar9 >> 0x20) + fVar5,in_XMM2_Da * (float)uVar9 + (float)uVar4);
  *(float *)&transform->monitor = fVar8 * in_XMM2_Da + in_XMM1_Da;
  return;
}


// EZhex1991.EZSoftBone.EZSoftBoneUtility$$PointOutsideSphere
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBoneUtility__PointOutsideSphere (UnityEngine_Vector3_o* position, UnityEngine_SphereCollider_o* collider, float spacing, const MethodInfo* method);
// 0x2496fa0

void EZhex1991_EZSoftBone_EZSoftBoneUtility__PointOutsideSphere
               (UnityEngine_Vector3_o *position,UnityEngine_SphereCollider_o *collider,float spacing,
               MethodInfo *method)

{
  float fVar1;
  float fVar2;
  int iVar3;
  UnityEngine_Vector3_o center0;
  UnityEngine_Transform_o *pUVar4;
  UnityEngine_SphereCollider_o *unaff_RBX;
  UnityEngine_CapsuleCollider_o *collider_00;
  MethodInfo *method_00;
  UnityEngine_SphereCollider_o *position_00;
  MethodInfo *in_R8;
  float fVar5;
  float fVar6;
  undefined4 extraout_XMM0_Dc;
  float extraout_XMM0_Dc_00;
  float fVar7;
  undefined4 uVar8;
  undefined4 extraout_XMM0_Dc_01;
  undefined4 extraout_XMM0_Dd;
  float extraout_XMM0_Dd_00;
  float fVar9;
  undefined4 uVar10;
  undefined4 extraout_XMM0_Dd_01;
  undefined1 in_XMM1 [16];
  undefined1 auVar12 [16];
  float fVar13;
  UnityEngine_Vector3_o UVar14;
  float fStack_a8;
  float fStack_a4;
  UnityEngine_Vector3_Fields UStack_a0;
  undefined1 auStack_90 [8];
  float fStack_88;
  UnityEngine_SphereCollider_o *pUStack_80;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  undefined1 auStack_58 [8];
  float fStack_50;
  float fStack_4c;
  undefined1 auStack_48 [8];
  uint uStack_40;
  uint uStack_3c;
  undefined1 auStack_38 [8];
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  uint uStack_20;
  uint uStack_1c;
  undefined8 uVar11;
  
  collider_00 = (UnityEngine_CapsuleCollider_o *)0x0;
  position_00 = (UnityEngine_SphereCollider_o *)position;
  fStack_70 = spacing;
  if (collider != (UnityEngine_SphereCollider_o *)0x0) {
    collider_00 = (UnityEngine_CapsuleCollider_o *)0x0;
    pUStack_80 = (UnityEngine_SphereCollider_o *)0x2496fc8;
    position_00 = collider;
    pUVar4 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)collider,(MethodInfo *)0x0);
    unaff_RBX = collider;
    if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
      pUStack_80 = (UnityEngine_SphereCollider_o *)0x2496fdb;
      UVar14 = UnityEngine_Transform__get_lossyScale(pUVar4,(MethodInfo *)0x0);
      register0x00001244 = in_XMM1._4_12_;
      auStack_58._0_4_ = UVar14.fields.z;
      uStack_40 = extraout_XMM0_Dc;
      auStack_48 = UVar14.fields._0_8_;
      uStack_3c = extraout_XMM0_Dd;
      pUStack_80 = (UnityEngine_SphereCollider_o *)0x2496fef;
      fStack_68 = UnityEngine_SphereCollider__get_radius(collider,(MethodInfo *)0x0);
      pUStack_80 = (UnityEngine_SphereCollider_o *)0x2496ffe;
      pUVar4 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)collider,(MethodInfo *)0x0);
      collider_00 = (UnityEngine_CapsuleCollider_o *)0x0;
      pUStack_80 = (UnityEngine_SphereCollider_o *)0x249700b;
      position_00 = collider;
      UVar14 = UnityEngine_SphereCollider__get_center(collider,(MethodInfo *)0x0);
      if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
        fStack_24 = ABS((float)auStack_48._4_4_);
        uStack_20 = uStack_40 & 0x7fffffff;
        uStack_1c = uStack_3c & 0x7fffffff;
        fVar13 = ABS((float)auStack_48._4_4_);
        if (ABS((float)auStack_48._4_4_) <= ABS((float)auStack_58._0_4_)) {
          fVar13 = ABS((float)auStack_58._0_4_);
        }
        fStack_28 = ABS((float)auStack_48._0_4_);
        if (ABS((float)auStack_48._0_4_) <= fVar13) {
          fStack_28 = fVar13;
        }
        pUStack_80 = (UnityEngine_SphereCollider_o *)0x249704c;
        UVar14 = UnityEngine_Transform__TransformPoint(pUVar4,UVar14,(MethodInfo *)0x0);
        fStack_6c = UVar14.fields.z;
        fVar1 = (position->fields).x;
        fVar2 = (position->fields).y;
        auStack_58._4_4_ = fVar2;
        auStack_58._0_4_ = fVar1;
        fStack_50 = 0.0;
        fStack_4c = 0.0;
        fVar13 = (position->fields).z;
        fStack_30 = extraout_XMM0_Dc_00;
        auStack_38 = (undefined1  [8])UVar14.fields._0_8_;
        fStack_2c = extraout_XMM0_Dd_00;
        fVar5 = UVar14.fields.x;
        fVar6 = UVar14.fields.y;
        fVar7 = extraout_XMM0_Dc_00;
        fVar9 = extraout_XMM0_Dd_00;
        if (g_data_057a6841 == '\0') {
          auStack_48._0_4_ = fVar13;
          _fStack_50 = 0;
          pUStack_80 = (UnityEngine_SphereCollider_o *)0x2497082;
          il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
          g_data_057a6841 = '\x01';
          fVar5 = (float)auStack_38._0_4_;
          fVar6 = (float)auStack_38._4_4_;
          fVar7 = fStack_30;
          fVar9 = fStack_2c;
          fVar13 = (float)auStack_48._0_4_;
          fVar1 = (float)auStack_58._0_4_;
          fVar2 = (float)auStack_58._4_4_;
        }
        fStack_68 = fStack_68 * fStack_28;
        auStack_48._0_4_ = fVar13 - fStack_6c;
        auStack_58._4_4_ = fVar2 - fVar6;
        auStack_58._0_4_ = fVar1 - fVar5;
        fStack_50 = fStack_50 - fVar7;
        fStack_4c = fStack_4c - fVar9;
        fVar13 = fVar13 - fStack_6c;
        fVar1 = fVar1 - fVar5;
        fVar2 = fVar2 - fVar6;
        if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
          pUStack_80 = (UnityEngine_SphereCollider_o *)0x24970d9;
          il2cpp_runtime_helper_02337ed0();
          fVar13 = (float)auStack_48._0_4_;
          fVar1 = (float)auStack_58._0_4_;
          fVar2 = (float)auStack_58._4_4_;
        }
        fStack_68 = fStack_68 + fStack_70;
        fVar13 = fVar13 * fVar13 + fVar2 * fVar2 + fVar1 * fVar1;
        if (fVar13 < 0.0) {
          pUStack_80 = (UnityEngine_SphereCollider_o *)0x24971bf;
          fStack_70 = fVar13;
          fVar1 = sqrtf(fVar13);
          fVar13 = fStack_70;
          if (fStack_68 <= fVar1) {
            return;
          }
        }
        else if (fStack_68 <= SQRT(fVar13)) {
          return;
        }
        if (g_data_057a6845 == '\0') {
          pUStack_80 = (UnityEngine_SphereCollider_o *)0x24971ea;
          fStack_70 = fVar13;
          il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
          g_data_057a6845 = '\x01';
          iVar3 = *(int *)(TypeInfo_Math + 0xe4);
          fVar13 = fStack_70;
          fVar1 = fStack_70;
        }
        else {
          iVar3 = *(int *)(TypeInfo_Math + 0xe4);
          fVar1 = fStack_70;
        }
        fStack_70 = fVar13;
        fVar13 = fStack_70;
        if (iVar3 == 0) {
          pUStack_80 = (UnityEngine_SphereCollider_o *)0x2497217;
          il2cpp_runtime_helper_02337ed0();
          fVar13 = fStack_70;
          fVar1 = fStack_70;
        }
        fStack_70 = fVar1;
        if (fVar13 < 0.0) {
          pUStack_80 = (UnityEngine_SphereCollider_o *)0x2497236;
          fVar13 = sqrtf(fVar13);
          uVar8 = extraout_XMM0_Dc_01;
          uVar10 = extraout_XMM0_Dd_01;
        }
        else {
          uVar8 = 0;
          uVar10 = 0;
          fVar13 = SQRT(fVar13);
        }
        if (1e-05 < fVar13) {
          auStack_48._0_4_ = (float)auStack_48._0_4_ / fVar13;
          auVar12._4_4_ = fVar13;
          auVar12._0_4_ = fVar13;
          auVar12._8_4_ = uVar8;
          auVar12._12_4_ = uVar10;
          auVar12 = divps(_auStack_58,auVar12);
          uVar11 = auVar12._0_8_;
        }
        else {
          if (g_data_057a65d5 == '\0') {
            pUStack_80 = (UnityEngine_SphereCollider_o *)0x2497186;
            il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
            g_data_057a65d5 = '\x01';
          }
          uVar11 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
          auStack_48._0_4_ = *(undefined4 *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
        }
        (position->fields).x = (float)auStack_38._0_4_ + fStack_68 * (float)uVar11;
        (position->fields).y = (float)auStack_38._4_4_ + fStack_68 * (float)((ulong)uVar11 >> 0x20);
        (position->fields).z = fStack_6c + (float)auStack_48._0_4_ * fStack_68;
        return;
      }
    }
  }
  pUStack_80 = (UnityEngine_SphereCollider_o *)0x2497297;
  fStack_a4 = (float)il2cpp_runtime_helper_022b2c90();
  fStack_88 = 0.0;
  auStack_90 = (undefined1  [8])0x0;
  UStack_a0.z = 0.0;
  UStack_a0.x = 0.0;
  UStack_a0.y = 0.0;
  fStack_a8 = 0.0;
  method_00 = (MethodInfo *)auStack_90;
  pUStack_80 = unaff_RBX;
  EZhex1991_EZSoftBone_EZSoftBoneUtility__GetCapsuleParams
            (collider_00,(UnityEngine_Vector3_o *)method_00,(UnityEngine_Vector3_o *)&UStack_a0,&fStack_a8,
             in_R8);
  center0.fields.z = fStack_88;
  center0.fields.x = (float)auStack_90._0_4_;
  center0.fields.y = (float)auStack_90._4_4_;
  UVar14.fields.z = UStack_a0.z;
  UVar14.fields.x = UStack_a0.x;
  UVar14.fields.y = UStack_a0.y;
  EZhex1991_EZSoftBone_EZSoftBoneUtility__PointInsideCapsule_2399400
            ((UnityEngine_Vector3_o *)position_00,center0,UVar14,fStack_a8 - fStack_a4,method_00);
  return;
}


// EZhex1991.EZSoftBone.EZSoftBoneUtility$$PointOutsideSphere
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBoneUtility__PointOutsideSphere (UnityEngine_Vector3_o* position, UnityEngine_Vector3_o spherePosition, float radius, const MethodInfo* method);
// 0x24988a0

void EZhex1991_EZSoftBone_EZSoftBoneUtility__PointOutsideSphere_23988a0
               (UnityEngine_Vector3_o *position,UnityEngine_Vector3_o spherePosition,float radius,
               MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  float fVar4;
  float in_XMM0_Dc;
  undefined4 uVar5;
  undefined4 extraout_XMM0_Dc;
  float in_XMM0_Dd;
  undefined4 uVar6;
  undefined4 extraout_XMM0_Dd;
  float fVar7;
  undefined1 auVar9 [16];
  float fVar10;
  undefined1 auStack_48 [8];
  float fStack_40;
  float fStack_3c;
  undefined8 uVar8;
  
  uVar1 = (position->fields).x;
  uVar2 = (position->fields).y;
  fVar7 = (position->fields).z;
  if (g_data_057a6841 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
    g_data_057a6841 = '\x01';
  }
  auStack_48._0_4_ = (float)uVar1 - spherePosition.fields.x;
  auStack_48._4_4_ = (float)uVar2 - spherePosition.fields.y;
  fVar7 = fVar7 - spherePosition.fields.z;
  fStack_40 = 0.0 - in_XMM0_Dc;
  fStack_3c = 0.0 - in_XMM0_Dd;
  if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  fVar10 = fVar7 * fVar7 +
           (float)auStack_48._4_4_ * (float)auStack_48._4_4_ +
           (float)auStack_48._0_4_ * (float)auStack_48._0_4_;
  if (fVar10 < 0.0) {
    fVar4 = sqrtf(fVar10);
  }
  else {
    fVar4 = SQRT(fVar10);
  }
  if (radius <= fVar4) {
    return;
  }
  if (g_data_057a6845 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
    g_data_057a6845 = '\x01';
    iVar3 = *(int *)(TypeInfo_Math + 0xe4);
  }
  else {
    iVar3 = *(int *)(TypeInfo_Math + 0xe4);
  }
  if (iVar3 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (fVar10 < 0.0) {
    fVar10 = sqrtf(fVar10);
    uVar5 = extraout_XMM0_Dc;
    uVar6 = extraout_XMM0_Dd;
  }
  else {
    uVar5 = 0;
    uVar6 = 0;
    fVar10 = SQRT(fVar10);
  }
  if (fVar10 <= 1e-05) {
    if (g_data_057a65d5 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
      g_data_057a65d5 = '\x01';
    }
    uVar8 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
    fVar7 = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
  }
  else {
    fVar7 = fVar7 / fVar10;
    auVar9._4_4_ = fVar10;
    auVar9._0_4_ = fVar10;
    auVar9._8_4_ = uVar5;
    auVar9._12_4_ = uVar6;
    auVar9 = divps(_auStack_48,auVar9);
    uVar8 = auVar9._0_8_;
  }
  (position->fields).x = radius * (float)uVar8 + spherePosition.fields.x;
  (position->fields).y = radius * (float)((ulong)uVar8 >> 0x20) + spherePosition.fields.y;
  (position->fields).z = fVar7 * radius + spherePosition.fields.z;
  return;
}


// EZhex1991.EZSoftBone.EZSoftBoneUtility$$PointInsideSphere
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBoneUtility__PointInsideSphere (UnityEngine_Vector3_o* position, UnityEngine_SphereCollider_o* collider, float spacing, const MethodInfo* method);
// 0x2496d30

void EZhex1991_EZSoftBone_EZSoftBoneUtility__PointInsideSphere
               (UnityEngine_Vector3_o *position,UnityEngine_SphereCollider_o *collider,float spacing,
               MethodInfo *method)

{
  float fVar1;
  float fVar3;
  UnityEngine_SphereCollider_c *pUVar2;
  int iVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  UnityEngine_Vector3_o center0;
  UnityEngine_Transform_o *pUVar7;
  UnityEngine_SphereCollider_o *unaff_RBX;
  UnityEngine_SphereCollider_o *__this;
  UnityEngine_CapsuleCollider_o *collider_00;
  MethodInfo *method_00;
  UnityEngine_SphereCollider_o *pUVar8;
  UnityEngine_Component_o *position_00;
  MethodInfo *in_R8;
  UnityEngine_Vector3_o *unaff_R14;
  undefined8 unaff_R15;
  undefined4 extraout_XMM0_Dc;
  undefined4 uVar9;
  undefined4 extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dc_01;
  float extraout_XMM0_Dc_02;
  float fVar10;
  undefined4 extraout_XMM0_Dc_03;
  undefined4 extraout_XMM0_Dd;
  undefined4 uVar11;
  undefined4 extraout_XMM0_Dd_00;
  undefined4 extraout_XMM0_Dd_01;
  float extraout_XMM0_Dd_02;
  float fVar12;
  undefined4 extraout_XMM0_Dd_03;
  undefined8 extraout_XMM1_Qa;
  undefined8 extraout_XMM1_Qb;
  float fVar14;
  undefined1 auVar16 [16];
  UnityEngine_Vector3_o UVar17;
  float fStack_100;
  float fStack_fc;
  UnityEngine_Vector3_Fields UStack_f8;
  undefined1 auStack_e8 [8];
  float fStack_e0;
  UnityEngine_SphereCollider_o *pUStack_d8;
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  undefined1 auStack_b0 [8];
  float fStack_a8;
  float fStack_a4;
  undefined1 auStack_a0 [8];
  uint uStack_98;
  uint uStack_94;
  undefined1 auStack_90 [8];
  float fStack_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  uint uStack_78;
  uint uStack_74;
  UnityEngine_SphereCollider_o *pUStack_70;
  UnityEngine_Vector3_o *pUStack_68;
  undefined8 uStack_60;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  undefined1 auStack_28 [8];
  float fStack_20;
  float fStack_1c;
  undefined1 auVar13 [16];
  undefined8 uVar15;
  
  __this = collider;
  pUVar8 = (UnityEngine_SphereCollider_o *)position;
  fStack_54 = spacing;
  if (collider != (UnityEngine_SphereCollider_o *)0x0) {
    uStack_60 = 0x2496d58;
    pUVar7 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)collider,(MethodInfo *)0x0);
    __this = (UnityEngine_SphereCollider_o *)0x0;
    uStack_60 = 0x2496d65;
    pUVar8 = collider;
    UVar17 = UnityEngine_SphereCollider__get_center(collider,(MethodInfo *)0x0);
    unaff_R15 = 0;
    unaff_RBX = collider;
    unaff_R14 = position;
    if (pUVar7 != (UnityEngine_Transform_o *)0x0) {
      uStack_60 = 0x2496d78;
      UVar17 = UnityEngine_Transform__TransformPoint(pUVar7,UVar17,(MethodInfo *)0x0);
      fStack_4c = UVar17.fields.z;
      fStack_20 = (float)extraout_XMM0_Dc;
      auStack_28 = (undefined1  [8])UVar17.fields._0_8_;
      fStack_1c = (float)extraout_XMM0_Dd;
      uStack_60 = 0x2496d8d;
      fStack_48 = UnityEngine_SphereCollider__get_radius(collider,(MethodInfo *)0x0);
      fVar1 = (position->fields).x;
      fVar3 = (position->fields).y;
      fStack_30 = 0.0;
      fStack_2c = 0.0;
      fStack_50 = (position->fields).z;
      if (g_data_057a6841 == '\0') {
        fStack_30 = 0.0;
        fStack_2c = 0.0;
        uStack_60 = 0x2496dc0;
        fStack_38 = fVar1;
        fStack_34 = fVar3;
        il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
        g_data_057a6841 = '\x01';
        fVar1 = fStack_38;
        fVar3 = fStack_34;
      }
      fStack_38 = fVar1 - (float)auStack_28._0_4_;
      fStack_34 = fVar3 - (float)auStack_28._4_4_;
      fStack_30 = fStack_30 - fStack_20;
      fStack_2c = fStack_2c - fStack_1c;
      fStack_50 = fStack_50 - fStack_4c;
      if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
        uStack_60 = 0x2496e0a;
        il2cpp_runtime_helper_02337ed0();
      }
      fStack_48 = fStack_48 - fStack_54;
      fVar1 = fStack_50 * fStack_50 + fStack_34 * fStack_34 + fStack_38 * fStack_38;
      if (fVar1 < 0.0) {
        uStack_60 = 0x2496e87;
        fStack_54 = fVar1;
        fVar3 = sqrtf(fVar1);
        fVar1 = fStack_54;
        if (fVar3 <= fStack_48) {
          return;
        }
      }
      else if (SQRT(fVar1) <= fStack_48) {
        return;
      }
      if (g_data_057a6845 == '\0') {
        uStack_60 = 0x2496eae;
        fStack_54 = fVar1;
        il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
        g_data_057a6845 = '\x01';
        iVar4 = *(int *)(TypeInfo_Math + 0xe4);
        fVar1 = fStack_54;
        fVar3 = fStack_54;
      }
      else {
        iVar4 = *(int *)(TypeInfo_Math + 0xe4);
        fVar3 = fStack_54;
      }
      fStack_54 = fVar1;
      fVar1 = fStack_54;
      if (iVar4 == 0) {
        uStack_60 = 0x2496ed7;
        il2cpp_runtime_helper_02337ed0();
        fVar1 = fStack_54;
        fVar3 = fStack_54;
      }
      fStack_54 = fVar3;
      if (fVar1 < 0.0) {
        uStack_60 = 0x2496ef2;
        fVar1 = sqrtf(fVar1);
        uVar9 = extraout_XMM0_Dc_00;
        uVar11 = extraout_XMM0_Dd_00;
      }
      else {
        uVar9 = 0;
        uVar11 = 0;
        fVar1 = SQRT(fVar1);
      }
      auVar16._4_4_ = fStack_34;
      auVar16._0_4_ = fStack_38;
      auVar16._8_4_ = fStack_30;
      auVar16._12_4_ = fStack_2c;
      if (fVar1 <= 1e-05) {
        if (g_data_057a65d5 == '\0') {
          uStack_60 = 0x2496f38;
          il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
          g_data_057a65d5 = '\x01';
        }
        uVar15 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
        fStack_50 = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
      }
      else {
        fStack_50 = fStack_50 / fVar1;
        auVar5._4_4_ = fVar1;
        auVar5._0_4_ = fVar1;
        auVar5._8_4_ = uVar9;
        auVar5._12_4_ = uVar11;
        auVar16 = divps(auVar16,auVar5);
        uVar15 = auVar16._0_8_;
      }
      (position->fields).x = SUB84(auStack_28,0) + fStack_48 * (float)uVar15;
      (position->fields).y = (float)((ulong)auStack_28 >> 0x20) + fStack_48 * (float)((ulong)uVar15 >> 0x20);
      (position->fields).z = fStack_4c + fStack_50 * fStack_48;
      return;
    }
  }
  uStack_60 = 0x2496f97;
  fStack_c8 = (float)il2cpp_runtime_helper_022b2c90();
  auVar13._8_8_ = extraout_XMM1_Qb;
  auVar13._0_8_ = extraout_XMM1_Qa;
  collider_00 = (UnityEngine_CapsuleCollider_o *)0x0;
  position_00 = (UnityEngine_Component_o *)pUVar8;
  pUStack_70 = unaff_RBX;
  pUStack_68 = unaff_R14;
  uStack_60 = unaff_R15;
  if (__this != (UnityEngine_SphereCollider_o *)0x0) {
    collider_00 = (UnityEngine_CapsuleCollider_o *)0x0;
    pUStack_d8 = (UnityEngine_SphereCollider_o *)0x2496fc8;
    position_00 = (UnityEngine_Component_o *)__this;
    pUVar7 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    unaff_RBX = __this;
    if (pUVar7 != (UnityEngine_Transform_o *)0x0) {
      pUStack_d8 = (UnityEngine_SphereCollider_o *)0x2496fdb;
      UVar17 = UnityEngine_Transform__get_lossyScale(pUVar7,(MethodInfo *)0x0);
      register0x00001244 = auVar13._4_12_;
      auStack_b0._0_4_ = UVar17.fields.z;
      uStack_98 = extraout_XMM0_Dc_01;
      auStack_a0 = UVar17.fields._0_8_;
      uStack_94 = extraout_XMM0_Dd_01;
      pUStack_d8 = (UnityEngine_SphereCollider_o *)0x2496fef;
      fStack_c0 = UnityEngine_SphereCollider__get_radius(__this,(MethodInfo *)0x0);
      pUStack_d8 = (UnityEngine_SphereCollider_o *)0x2496ffe;
      pUVar7 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
      collider_00 = (UnityEngine_CapsuleCollider_o *)0x0;
      pUStack_d8 = (UnityEngine_SphereCollider_o *)0x249700b;
      position_00 = (UnityEngine_Component_o *)__this;
      UVar17 = UnityEngine_SphereCollider__get_center(__this,(MethodInfo *)0x0);
      if (pUVar7 != (UnityEngine_Transform_o *)0x0) {
        fStack_7c = ABS((float)auStack_a0._4_4_);
        uStack_78 = uStack_98 & 0x7fffffff;
        uStack_74 = uStack_94 & 0x7fffffff;
        fVar1 = ABS((float)auStack_a0._4_4_);
        if (ABS((float)auStack_a0._4_4_) <= ABS((float)auStack_b0._0_4_)) {
          fVar1 = ABS((float)auStack_b0._0_4_);
        }
        fStack_80 = ABS((float)auStack_a0._0_4_);
        if (ABS((float)auStack_a0._0_4_) <= fVar1) {
          fStack_80 = fVar1;
        }
        pUStack_d8 = (UnityEngine_SphereCollider_o *)0x249704c;
        UVar17 = UnityEngine_Transform__TransformPoint(pUVar7,UVar17,(MethodInfo *)0x0);
        fStack_c4 = UVar17.fields.z;
        pUVar2 = pUVar8->klass;
        auStack_b0._0_4_ = SUB84(pUVar2,0);
        auStack_b0._4_4_ = (undefined4)((ulong)pUVar2 >> 0x20);
        fStack_a8 = 0.0;
        fStack_a4 = 0.0;
        fStack_88 = extraout_XMM0_Dc_02;
        auStack_90 = (undefined1  [8])UVar17.fields._0_8_;
        fStack_84 = extraout_XMM0_Dd_02;
        fVar1 = UVar17.fields.x;
        fVar3 = UVar17.fields.y;
        fVar10 = extraout_XMM0_Dc_02;
        fVar12 = extraout_XMM0_Dd_02;
        fVar14 = *(float *)&pUVar8->monitor;
        if (g_data_057a6841 == '\0') {
          auStack_a0._0_4_ = *(float *)&pUVar8->monitor;
          _fStack_a8 = 0;
          auStack_b0 = (undefined1  [8])pUVar2;
          pUStack_d8 = (UnityEngine_SphereCollider_o *)0x2497082;
          il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
          g_data_057a6841 = '\x01';
          fVar1 = (float)auStack_90._0_4_;
          fVar3 = (float)auStack_90._4_4_;
          fVar10 = fStack_88;
          fVar12 = fStack_84;
          fVar14 = (float)auStack_a0._0_4_;
        }
        fStack_c0 = fStack_c0 * fStack_80;
        auStack_b0._0_4_ = (float)auStack_b0._0_4_ - fVar1;
        auStack_b0._4_4_ = (float)auStack_b0._4_4_ - fVar3;
        auStack_a0._0_4_ = fVar14 - fStack_c4;
        fStack_a8 = fStack_a8 - fVar10;
        fStack_a4 = fStack_a4 - fVar12;
        fVar1 = fVar14 - fStack_c4;
        fVar3 = (float)auStack_b0._0_4_;
        fVar10 = (float)auStack_b0._4_4_;
        if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
          pUStack_d8 = (UnityEngine_SphereCollider_o *)0x24970d9;
          il2cpp_runtime_helper_02337ed0();
          fVar1 = (float)auStack_a0._0_4_;
          fVar3 = (float)auStack_b0._0_4_;
          fVar10 = (float)auStack_b0._4_4_;
        }
        fStack_c0 = fStack_c0 + fStack_c8;
        fVar1 = fVar1 * fVar1 + fVar10 * fVar10 + fVar3 * fVar3;
        if (fVar1 < 0.0) {
          pUStack_d8 = (UnityEngine_SphereCollider_o *)0x24971bf;
          fStack_c8 = fVar1;
          fVar3 = sqrtf(fVar1);
          fVar1 = fStack_c8;
          if (fStack_c0 <= fVar3) {
            return;
          }
        }
        else if (fStack_c0 <= SQRT(fVar1)) {
          return;
        }
        if (g_data_057a6845 == '\0') {
          pUStack_d8 = (UnityEngine_SphereCollider_o *)0x24971ea;
          fStack_c8 = fVar1;
          il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
          g_data_057a6845 = '\x01';
          iVar4 = *(int *)(TypeInfo_Math + 0xe4);
          fVar1 = fStack_c8;
          fVar3 = fStack_c8;
        }
        else {
          iVar4 = *(int *)(TypeInfo_Math + 0xe4);
          fVar3 = fStack_c8;
        }
        fStack_c8 = fVar1;
        fVar1 = fStack_c8;
        if (iVar4 == 0) {
          pUStack_d8 = (UnityEngine_SphereCollider_o *)0x2497217;
          il2cpp_runtime_helper_02337ed0();
          fVar1 = fStack_c8;
          fVar3 = fStack_c8;
        }
        fStack_c8 = fVar3;
        if (fVar1 < 0.0) {
          pUStack_d8 = (UnityEngine_SphereCollider_o *)0x2497236;
          fVar1 = sqrtf(fVar1);
          uVar9 = extraout_XMM0_Dc_03;
          uVar11 = extraout_XMM0_Dd_03;
        }
        else {
          uVar9 = 0;
          uVar11 = 0;
          fVar1 = SQRT(fVar1);
        }
        if (1e-05 < fVar1) {
          auStack_a0._0_4_ = (float)auStack_a0._0_4_ / fVar1;
          auVar6._4_4_ = fVar1;
          auVar6._0_4_ = fVar1;
          auVar6._8_4_ = uVar9;
          auVar6._12_4_ = uVar11;
          auVar16 = divps(_auStack_b0,auVar6);
          uVar15 = auVar16._0_8_;
        }
        else {
          if (g_data_057a65d5 == '\0') {
            pUStack_d8 = (UnityEngine_SphereCollider_o *)0x2497186;
            il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
            g_data_057a65d5 = '\x01';
          }
          uVar15 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
          auStack_a0._0_4_ = *(undefined4 *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
        }
        pUVar8->klass =
             (UnityEngine_SphereCollider_c *)
             CONCAT44((float)auStack_90._4_4_ + fStack_c0 * (float)((ulong)uVar15 >> 0x20),
                      (float)auStack_90._0_4_ + fStack_c0 * (float)uVar15);
        *(float *)&pUVar8->monitor = fStack_c4 + (float)auStack_a0._0_4_ * fStack_c0;
        return;
      }
    }
  }
  pUStack_d8 = (UnityEngine_SphereCollider_o *)0x2497297;
  fStack_fc = (float)il2cpp_runtime_helper_022b2c90();
  fStack_e0 = 0.0;
  auStack_e8 = (undefined1  [8])0x0;
  UStack_f8.z = 0.0;
  UStack_f8.x = 0.0;
  UStack_f8.y = 0.0;
  fStack_100 = 0.0;
  method_00 = (MethodInfo *)auStack_e8;
  pUStack_d8 = unaff_RBX;
  EZhex1991_EZSoftBone_EZSoftBoneUtility__GetCapsuleParams
            (collider_00,(UnityEngine_Vector3_o *)method_00,(UnityEngine_Vector3_o *)&UStack_f8,&fStack_100,
             in_R8);
  center0.fields.z = fStack_e0;
  center0.fields.x = (float)auStack_e8._0_4_;
  center0.fields.y = (float)auStack_e8._4_4_;
  UVar17.fields.z = UStack_f8.z;
  UVar17.fields.x = UStack_f8.x;
  UVar17.fields.y = UStack_f8.y;
  EZhex1991_EZSoftBone_EZSoftBoneUtility__PointInsideCapsule_2399400
            ((UnityEngine_Vector3_o *)position_00,center0,UVar17,fStack_100 - fStack_fc,method_00);
  return;
}


// EZhex1991.EZSoftBone.EZSoftBoneUtility$$PointInsideSphere
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBoneUtility__PointInsideSphere (UnityEngine_Vector3_o* position, UnityEngine_Vector3_o spherePosition, float radius, const MethodInfo* method);
// 0x2498a90

void EZhex1991_EZSoftBone_EZSoftBoneUtility__PointInsideSphere_2398a90
               (UnityEngine_Vector3_o *position,UnityEngine_Vector3_o spherePosition,float radius,
               MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  float fVar4;
  float in_XMM0_Dc;
  undefined4 uVar5;
  undefined4 extraout_XMM0_Dc;
  float in_XMM0_Dd;
  undefined4 uVar6;
  undefined4 extraout_XMM0_Dd;
  float fVar7;
  undefined1 auVar9 [16];
  float fVar10;
  undefined1 auStack_48 [8];
  float fStack_40;
  float fStack_3c;
  undefined8 uVar8;
  
  uVar1 = (position->fields).x;
  uVar2 = (position->fields).y;
  fVar7 = (position->fields).z;
  if (g_data_057a6841 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
    g_data_057a6841 = '\x01';
  }
  auStack_48._0_4_ = (float)uVar1 - spherePosition.fields.x;
  auStack_48._4_4_ = (float)uVar2 - spherePosition.fields.y;
  fVar7 = fVar7 - spherePosition.fields.z;
  fStack_40 = 0.0 - in_XMM0_Dc;
  fStack_3c = 0.0 - in_XMM0_Dd;
  if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  fVar10 = fVar7 * fVar7 +
           (float)auStack_48._4_4_ * (float)auStack_48._4_4_ +
           (float)auStack_48._0_4_ * (float)auStack_48._0_4_;
  if (fVar10 < 0.0) {
    fVar4 = sqrtf(fVar10);
  }
  else {
    fVar4 = SQRT(fVar10);
  }
  if (fVar4 <= radius) {
    return;
  }
  if (g_data_057a6845 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
    g_data_057a6845 = '\x01';
    iVar3 = *(int *)(TypeInfo_Math + 0xe4);
  }
  else {
    iVar3 = *(int *)(TypeInfo_Math + 0xe4);
  }
  if (iVar3 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (fVar10 < 0.0) {
    fVar10 = sqrtf(fVar10);
    uVar5 = extraout_XMM0_Dc;
    uVar6 = extraout_XMM0_Dd;
  }
  else {
    uVar5 = 0;
    uVar6 = 0;
    fVar10 = SQRT(fVar10);
  }
  if (fVar10 <= 1e-05) {
    if (g_data_057a65d5 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
      g_data_057a65d5 = '\x01';
    }
    uVar8 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
    fVar7 = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
  }
  else {
    fVar7 = fVar7 / fVar10;
    auVar9._4_4_ = fVar10;
    auVar9._0_4_ = fVar10;
    auVar9._8_4_ = uVar5;
    auVar9._12_4_ = uVar6;
    auVar9 = divps(_auStack_48,auVar9);
    uVar8 = auVar9._0_8_;
  }
  (position->fields).x = radius * (float)uVar8 + spherePosition.fields.x;
  (position->fields).y = radius * (float)((ulong)uVar8 >> 0x20) + spherePosition.fields.y;
  (position->fields).z = fVar7 * radius + spherePosition.fields.z;
  return;
}


// EZhex1991.EZSoftBone.EZSoftBoneUtility$$PointOutsideCapsule
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBoneUtility__PointOutsideCapsule (UnityEngine_Vector3_o* position, UnityEngine_CapsuleCollider_o* collider, float spacing, const MethodInfo* method);
// 0x2497330

void EZhex1991_EZSoftBone_EZSoftBoneUtility__PointOutsideCapsule
               (UnityEngine_Vector3_o *position,UnityEngine_CapsuleCollider_o *collider,float spacing,
               MethodInfo *method)

{
  UnityEngine_Vector3_o center1;
  UnityEngine_Vector3_o center0;
  MethodInfo *method_00;
  MethodInfo *in_R8;
  float local_30;
  float local_2c;
  UnityEngine_Vector3_Fields local_28;
  undefined1 local_18 [8];
  float local_10;
  
  local_10 = 0.0;
  local_18 = (undefined1  [8])0x0;
  local_28.z = 0.0;
  local_28.x = 0.0;
  local_28.y = 0.0;
  local_30 = 0.0;
  method_00 = (MethodInfo *)local_18;
  local_2c = spacing;
  EZhex1991_EZSoftBone_EZSoftBoneUtility__GetCapsuleParams
            (collider,(UnityEngine_Vector3_o *)method_00,(UnityEngine_Vector3_o *)&local_28,&local_30,in_R8);
  center0.fields.z = local_10;
  center0.fields.x = (float)local_18._0_4_;
  center0.fields.y = (float)local_18._4_4_;
  center1.fields.z = local_28.z;
  center1.fields.x = local_28.x;
  center1.fields.y = local_28.y;
  EZhex1991_EZSoftBone_EZSoftBoneUtility__PointOutsideCapsule_2398c80
            (position,center0,center1,local_2c + local_30,method_00);
  return;
}


// EZhex1991.EZSoftBone.EZSoftBoneUtility$$PointOutsideCapsule
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBoneUtility__PointOutsideCapsule (UnityEngine_Vector3_o* position, UnityEngine_Vector3_o center0, UnityEngine_Vector3_o center1, float radius, const MethodInfo* method);
// 0x2498c80

void EZhex1991_EZSoftBone_EZSoftBoneUtility__PointOutsideCapsule_2398c80
               (UnityEngine_Vector3_o *position,UnityEngine_Vector3_o center0,UnityEngine_Vector3_o center1,
               float radius,MethodInfo *method)

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
  float fVar11;
  float fVar12;
  float fVar13;
  float in_XMM0_Dc;
  undefined4 uVar14;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dc_01;
  float in_XMM0_Dd;
  undefined4 uVar15;
  undefined4 extraout_XMM0_Dd;
  undefined4 extraout_XMM0_Dd_00;
  undefined4 extraout_XMM0_Dd_01;
  float fVar16;
  undefined8 uVar17;
  float fVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  float fVar21;
  float fVar24;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float local_58;
  float fStack_54;
  float fVar25;
  
  fVar18 = center1.fields.z;
  fVar12 = center0.fields.z;
  fVar27 = center0.fields.x;
  fVar16 = center0.fields.y;
  fVar11 = center1.fields.x;
  fVar21 = fVar11 - fVar27;
  fVar25 = center1.fields.y;
  fVar24 = fVar25 - fVar16;
  fVar26 = fVar18 - fVar12;
  uVar1 = (position->fields).x;
  uVar3 = (position->fields).y;
  fVar13 = (position->fields).z;
  fVar29 = (float)uVar1 - fVar27;
  fVar30 = (float)uVar3 - fVar16;
  fVar31 = fVar13 - fVar12;
  fVar28 = fVar26 * fVar31 + fVar24 * fVar30 + fVar21 * fVar29;
  if (fVar28 <= 0.0) {
    if (g_data_057a6841 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
      g_data_057a6841 = '\x01';
      iVar5 = *(int *)(TypeInfo_Math + 0xe4);
    }
    else {
      iVar5 = *(int *)(TypeInfo_Math + 0xe4);
    }
    if (iVar5 == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    fVar13 = fVar31 * fVar31 + fVar30 * fVar30 + fVar29 * fVar29;
    if (fVar13 < 0.0) {
      fVar11 = sqrtf(fVar13);
    }
    else {
      fVar11 = SQRT(fVar13);
    }
    if (radius <= fVar11) {
      return;
    }
    if (g_data_057a6845 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
      g_data_057a6845 = '\x01';
      iVar5 = *(int *)(TypeInfo_Math + 0xe4);
    }
    else {
      iVar5 = *(int *)(TypeInfo_Math + 0xe4);
    }
    if (iVar5 == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    if (fVar13 < 0.0) {
      fVar13 = sqrtf(fVar13);
      uVar14 = extraout_XMM0_Dc;
      uVar15 = extraout_XMM0_Dd;
    }
    else {
      uVar14 = 0;
      uVar15 = 0;
      fVar13 = SQRT(fVar13);
    }
    auVar20._4_4_ = fVar30;
    auVar20._0_4_ = fVar29;
    auVar20._8_4_ = 0.0 - in_XMM0_Dc;
    auVar20._12_4_ = 0.0 - in_XMM0_Dd;
    if (fVar13 <= 1e-05) {
      if (g_data_057a65d5 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
        g_data_057a65d5 = '\x01';
      }
      uVar17 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
      fVar31 = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
    }
    else {
      fVar31 = fVar31 / fVar13;
      auVar8._4_4_ = fVar13;
      auVar8._0_4_ = fVar13;
      auVar8._8_4_ = uVar14;
      auVar8._12_4_ = uVar15;
      auVar20 = divps(auVar20,auVar8);
      uVar17 = auVar20._0_8_;
    }
    (position->fields).x = radius * (float)uVar17 + fVar27;
    (position->fields).y = radius * (float)((ulong)uVar17 >> 0x20) + fVar16;
    (position->fields).z = fVar31 * radius + fVar12;
    return;
  }
  fVar27 = fVar26 * fVar26 + fVar24 * fVar24 + fVar21 * fVar21;
  if (fVar27 <= fVar28) {
    if (g_data_057a6841 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
      g_data_057a6841 = '\x01';
    }
    fVar31 = (float)uVar1 - fVar11;
    fVar27 = (float)uVar3 - fVar25;
    fVar13 = fVar13 - fVar18;
    if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    fVar16 = fVar13 * fVar13 + fVar27 * fVar27 + fVar31 * fVar31;
    if (fVar16 < 0.0) {
      fVar12 = sqrtf(fVar16);
    }
    else {
      fVar12 = SQRT(fVar16);
    }
    if (radius <= fVar12) {
      return;
    }
    if (g_data_057a6845 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
      g_data_057a6845 = '\x01';
      iVar5 = *(int *)(TypeInfo_Math + 0xe4);
    }
    else {
      iVar5 = *(int *)(TypeInfo_Math + 0xe4);
    }
    if (iVar5 == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    if (fVar16 < 0.0) {
      fVar16 = sqrtf(fVar16);
      uVar14 = extraout_XMM0_Dc_01;
      uVar15 = extraout_XMM0_Dd_01;
    }
    else {
      uVar14 = 0;
      uVar15 = 0;
      fVar16 = SQRT(fVar16);
    }
    auVar10._4_4_ = fVar27;
    auVar10._0_4_ = fVar31;
    auVar10._8_4_ = 0.0 - center1.fields.z;
    auVar10._12_4_ = 0.0 - center1._12_4_;
    if (fVar16 <= 1e-05) {
      if (g_data_057a65d5 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
        g_data_057a65d5 = '\x01';
      }
      uVar17 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
      fVar13 = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
    }
    else {
      fVar13 = fVar13 / fVar16;
      auVar7._4_4_ = fVar16;
      auVar7._0_4_ = fVar16;
      auVar7._8_4_ = uVar14;
      auVar7._12_4_ = uVar15;
      auVar20 = divps(auVar10,auVar7);
      uVar17 = auVar20._0_8_;
    }
    (position->fields).x = radius * (float)uVar17 + fVar11;
    (position->fields).y = radius * (float)((ulong)uVar17 >> 0x20) + fVar25;
    (position->fields).z = fVar13 * radius + fVar18;
    return;
  }
  if (g_data_057a6931 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Mathf);
    g_data_057a6931 = '\x01';
  }
  if (**(float **)(TypeInfo_Mathf + 0xb8) <= fVar27) {
    auVar22._0_4_ = fVar21 * fVar28;
    auVar22._4_4_ = fVar24 * fVar28;
    auVar22._8_4_ = (center1.fields.z - in_XMM0_Dc) * center1._16_4_;
    auVar22._12_4_ = (center1._12_4_ - in_XMM0_Dd) * center1._20_4_;
    fVar13 = (fVar26 * fVar28) / fVar27;
    auVar9._4_4_ = fVar27;
    auVar9._0_4_ = fVar27;
    auVar9._8_4_ = center1._16_4_;
    auVar9._12_4_ = center1._20_4_;
    auVar23 = divps(auVar22,auVar9);
  }
  else {
    if (g_data_057a65d5 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
      g_data_057a65d5 = '\x01';
    }
    auVar23._8_8_ = 0;
    auVar23._0_8_ = **(ulong **)(TypeInfo_Vector3 + 0xb8);
    fVar13 = *(float *)(*(ulong **)(TypeInfo_Vector3 + 0xb8) + 1);
  }
  if (g_data_057a6841 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
    g_data_057a6841 = '\x01';
  }
  fVar29 = fVar29 - auVar23._0_4_;
  fVar30 = fVar30 - auVar23._4_4_;
  fVar31 = fVar31 - fVar13;
  if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  fVar13 = fVar31 * fVar31 + fVar30 * fVar30 + fVar29 * fVar29;
  if (fVar13 < 0.0) {
    fVar27 = sqrtf(fVar13);
  }
  else {
    fVar27 = SQRT(fVar13);
  }
  fVar27 = radius - fVar27;
  if (0.0 < fVar27) {
    uVar2 = (position->fields).x;
    uVar4 = (position->fields).y;
    fVar16 = (position->fields).z;
    if (g_data_057a6845 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
      g_data_057a6845 = '\x01';
    }
    if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    uVar14 = 0;
    uVar15 = 0;
    if (fVar13 < 0.0) {
      fVar13 = sqrtf(fVar13);
      uVar14 = extraout_XMM0_Dc_00;
      uVar15 = extraout_XMM0_Dd_00;
    }
    else {
      fVar13 = SQRT(fVar13);
    }
    if (1e-05 < fVar13) {
      auVar19._4_4_ = fVar30;
      auVar19._0_4_ = fVar29;
      auVar19._8_4_ = (0.0 - in_XMM0_Dc) - auVar23._8_4_;
      auVar19._12_4_ = (0.0 - in_XMM0_Dd) - auVar23._12_4_;
      fVar31 = fVar31 / fVar13;
      auVar6._4_4_ = fVar13;
      auVar6._0_4_ = fVar13;
      auVar6._8_4_ = uVar14;
      auVar6._12_4_ = uVar15;
      auVar20 = divps(auVar19,auVar6);
      uVar17 = auVar20._0_8_;
    }
    else {
      if (g_data_057a65d5 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
        g_data_057a65d5 = '\x01';
      }
      uVar17 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
      fVar31 = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
    }
    (position->fields).x = (float)uVar2 + fVar27 * (float)uVar17;
    (position->fields).y = (float)uVar4 + fVar27 * (float)((ulong)uVar17 >> 0x20);
    (position->fields).z = fVar16 + fVar31 * fVar27;
    return;
  }
  return;
}


// EZhex1991.EZSoftBone.EZSoftBoneUtility$$PointInsideCapsule
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBoneUtility__PointInsideCapsule (UnityEngine_Vector3_o* position, UnityEngine_CapsuleCollider_o* collider, float spacing, const MethodInfo* method);
// 0x24972a0

void EZhex1991_EZSoftBone_EZSoftBoneUtility__PointInsideCapsule
               (UnityEngine_Vector3_o *position,UnityEngine_CapsuleCollider_o *collider,float spacing,
               MethodInfo *method)

{
  UnityEngine_Vector3_o center1;
  UnityEngine_Vector3_o center0;
  MethodInfo *method_00;
  MethodInfo *in_R8;
  float local_30;
  float local_2c;
  UnityEngine_Vector3_Fields local_28;
  undefined1 local_18 [8];
  float local_10;
  
  local_10 = 0.0;
  local_18 = (undefined1  [8])0x0;
  local_28.z = 0.0;
  local_28.x = 0.0;
  local_28.y = 0.0;
  local_30 = 0.0;
  method_00 = (MethodInfo *)local_18;
  local_2c = spacing;
  EZhex1991_EZSoftBone_EZSoftBoneUtility__GetCapsuleParams
            (collider,(UnityEngine_Vector3_o *)method_00,(UnityEngine_Vector3_o *)&local_28,&local_30,in_R8);
  center0.fields.z = local_10;
  center0.fields.x = (float)local_18._0_4_;
  center0.fields.y = (float)local_18._4_4_;
  center1.fields.z = local_28.z;
  center1.fields.x = local_28.x;
  center1.fields.y = local_28.y;
  EZhex1991_EZSoftBone_EZSoftBoneUtility__PointInsideCapsule_2399400
            (position,center0,center1,local_30 - local_2c,method_00);
  return;
}


// EZhex1991.EZSoftBone.EZSoftBoneUtility$$PointInsideCapsule
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBoneUtility__PointInsideCapsule (UnityEngine_Vector3_o* position, UnityEngine_Vector3_o center0, UnityEngine_Vector3_o center1, float radius, const MethodInfo* method);
// 0x2499400

void EZhex1991_EZSoftBone_EZSoftBoneUtility__PointInsideCapsule_2399400
               (UnityEngine_Vector3_o *position,UnityEngine_Vector3_o center0,UnityEngine_Vector3_o center1,
               float radius,MethodInfo *method)

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
  float fVar11;
  float fVar12;
  float fVar13;
  float in_XMM0_Dc;
  undefined4 uVar14;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dc_01;
  float in_XMM0_Dd;
  undefined4 uVar15;
  undefined4 extraout_XMM0_Dd;
  undefined4 extraout_XMM0_Dd_00;
  undefined4 extraout_XMM0_Dd_01;
  float fVar16;
  undefined8 uVar17;
  float fVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  float fVar21;
  float fVar24;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float local_58;
  float fStack_54;
  float fVar25;
  
  fVar18 = center1.fields.z;
  fVar12 = center0.fields.z;
  fVar27 = center0.fields.x;
  fVar16 = center0.fields.y;
  fVar11 = center1.fields.x;
  fVar21 = fVar11 - fVar27;
  fVar25 = center1.fields.y;
  fVar24 = fVar25 - fVar16;
  fVar26 = fVar18 - fVar12;
  uVar1 = (position->fields).x;
  uVar3 = (position->fields).y;
  fVar13 = (position->fields).z;
  fVar29 = (float)uVar1 - fVar27;
  fVar30 = (float)uVar3 - fVar16;
  fVar31 = fVar13 - fVar12;
  fVar28 = fVar26 * fVar31 + fVar24 * fVar30 + fVar21 * fVar29;
  if (fVar28 <= 0.0) {
    if (g_data_057a6841 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
      g_data_057a6841 = '\x01';
      iVar5 = *(int *)(TypeInfo_Math + 0xe4);
    }
    else {
      iVar5 = *(int *)(TypeInfo_Math + 0xe4);
    }
    if (iVar5 == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    fVar13 = fVar31 * fVar31 + fVar30 * fVar30 + fVar29 * fVar29;
    if (fVar13 < 0.0) {
      fVar11 = sqrtf(fVar13);
    }
    else {
      fVar11 = SQRT(fVar13);
    }
    if (fVar11 <= radius) {
      return;
    }
    if (g_data_057a6845 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
      g_data_057a6845 = '\x01';
      iVar5 = *(int *)(TypeInfo_Math + 0xe4);
    }
    else {
      iVar5 = *(int *)(TypeInfo_Math + 0xe4);
    }
    if (iVar5 == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    if (fVar13 < 0.0) {
      fVar13 = sqrtf(fVar13);
      uVar14 = extraout_XMM0_Dc;
      uVar15 = extraout_XMM0_Dd;
    }
    else {
      uVar14 = 0;
      uVar15 = 0;
      fVar13 = SQRT(fVar13);
    }
    auVar20._4_4_ = fVar30;
    auVar20._0_4_ = fVar29;
    auVar20._8_4_ = 0.0 - in_XMM0_Dc;
    auVar20._12_4_ = 0.0 - in_XMM0_Dd;
    if (fVar13 <= 1e-05) {
      if (g_data_057a65d5 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
        g_data_057a65d5 = '\x01';
      }
      uVar17 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
      fVar31 = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
    }
    else {
      fVar31 = fVar31 / fVar13;
      auVar8._4_4_ = fVar13;
      auVar8._0_4_ = fVar13;
      auVar8._8_4_ = uVar14;
      auVar8._12_4_ = uVar15;
      auVar20 = divps(auVar20,auVar8);
      uVar17 = auVar20._0_8_;
    }
    (position->fields).x = radius * (float)uVar17 + fVar27;
    (position->fields).y = radius * (float)((ulong)uVar17 >> 0x20) + fVar16;
    (position->fields).z = fVar31 * radius + fVar12;
    return;
  }
  fVar27 = fVar26 * fVar26 + fVar24 * fVar24 + fVar21 * fVar21;
  if (fVar27 <= fVar28) {
    if (g_data_057a6841 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
      g_data_057a6841 = '\x01';
    }
    fVar31 = (float)uVar1 - fVar11;
    fVar27 = (float)uVar3 - fVar25;
    fVar13 = fVar13 - fVar18;
    if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    fVar16 = fVar13 * fVar13 + fVar27 * fVar27 + fVar31 * fVar31;
    if (fVar16 < 0.0) {
      fVar12 = sqrtf(fVar16);
    }
    else {
      fVar12 = SQRT(fVar16);
    }
    if (fVar12 <= radius) {
      return;
    }
    if (g_data_057a6845 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
      g_data_057a6845 = '\x01';
      iVar5 = *(int *)(TypeInfo_Math + 0xe4);
    }
    else {
      iVar5 = *(int *)(TypeInfo_Math + 0xe4);
    }
    if (iVar5 == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    if (fVar16 < 0.0) {
      fVar16 = sqrtf(fVar16);
      uVar14 = extraout_XMM0_Dc_01;
      uVar15 = extraout_XMM0_Dd_01;
    }
    else {
      uVar14 = 0;
      uVar15 = 0;
      fVar16 = SQRT(fVar16);
    }
    auVar10._4_4_ = fVar27;
    auVar10._0_4_ = fVar31;
    auVar10._8_4_ = 0.0 - center1.fields.z;
    auVar10._12_4_ = 0.0 - center1._12_4_;
    if (fVar16 <= 1e-05) {
      if (g_data_057a65d5 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
        g_data_057a65d5 = '\x01';
      }
      uVar17 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
      fVar13 = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
    }
    else {
      fVar13 = fVar13 / fVar16;
      auVar7._4_4_ = fVar16;
      auVar7._0_4_ = fVar16;
      auVar7._8_4_ = uVar14;
      auVar7._12_4_ = uVar15;
      auVar20 = divps(auVar10,auVar7);
      uVar17 = auVar20._0_8_;
    }
    (position->fields).x = radius * (float)uVar17 + fVar11;
    (position->fields).y = radius * (float)((ulong)uVar17 >> 0x20) + fVar25;
    (position->fields).z = fVar13 * radius + fVar18;
    return;
  }
  if (g_data_057a6931 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Mathf);
    g_data_057a6931 = '\x01';
  }
  if (**(float **)(TypeInfo_Mathf + 0xb8) <= fVar27) {
    auVar22._0_4_ = fVar21 * fVar28;
    auVar22._4_4_ = fVar24 * fVar28;
    auVar22._8_4_ = (center1.fields.z - in_XMM0_Dc) * center1._16_4_;
    auVar22._12_4_ = (center1._12_4_ - in_XMM0_Dd) * center1._20_4_;
    fVar13 = (fVar26 * fVar28) / fVar27;
    auVar9._4_4_ = fVar27;
    auVar9._0_4_ = fVar27;
    auVar9._8_4_ = center1._16_4_;
    auVar9._12_4_ = center1._20_4_;
    auVar23 = divps(auVar22,auVar9);
  }
  else {
    if (g_data_057a65d5 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
      g_data_057a65d5 = '\x01';
    }
    auVar23._8_8_ = 0;
    auVar23._0_8_ = **(ulong **)(TypeInfo_Vector3 + 0xb8);
    fVar13 = *(float *)(*(ulong **)(TypeInfo_Vector3 + 0xb8) + 1);
  }
  if (g_data_057a6841 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
    g_data_057a6841 = '\x01';
  }
  fVar29 = fVar29 - auVar23._0_4_;
  fVar30 = fVar30 - auVar23._4_4_;
  fVar31 = fVar31 - fVar13;
  if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  fVar13 = fVar31 * fVar31 + fVar30 * fVar30 + fVar29 * fVar29;
  if (fVar13 < 0.0) {
    fVar27 = sqrtf(fVar13);
  }
  else {
    fVar27 = SQRT(fVar13);
  }
  fVar27 = radius - fVar27;
  if (fVar27 < 0.0) {
    uVar2 = (position->fields).x;
    uVar4 = (position->fields).y;
    fVar16 = (position->fields).z;
    if (g_data_057a6845 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
      g_data_057a6845 = '\x01';
    }
    if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    uVar14 = 0;
    uVar15 = 0;
    if (fVar13 < 0.0) {
      fVar13 = sqrtf(fVar13);
      uVar14 = extraout_XMM0_Dc_00;
      uVar15 = extraout_XMM0_Dd_00;
    }
    else {
      fVar13 = SQRT(fVar13);
    }
    if (1e-05 < fVar13) {
      auVar19._4_4_ = fVar30;
      auVar19._0_4_ = fVar29;
      auVar19._8_4_ = (0.0 - in_XMM0_Dc) - auVar23._8_4_;
      auVar19._12_4_ = (0.0 - in_XMM0_Dd) - auVar23._12_4_;
      fVar31 = fVar31 / fVar13;
      auVar6._4_4_ = fVar13;
      auVar6._0_4_ = fVar13;
      auVar6._8_4_ = uVar14;
      auVar6._12_4_ = uVar15;
      auVar20 = divps(auVar19,auVar6);
      uVar17 = auVar20._0_8_;
    }
    else {
      if (g_data_057a65d5 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
        g_data_057a65d5 = '\x01';
      }
      uVar17 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
      fVar31 = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
    }
    (position->fields).x = (float)uVar2 + fVar27 * (float)uVar17;
    (position->fields).y = (float)uVar4 + fVar27 * (float)((ulong)uVar17 >> 0x20);
    (position->fields).z = fVar16 + fVar31 * fVar27;
    return;
  }
  return;
}


// EZhex1991.EZSoftBone.EZSoftBoneUtility$$PointOutsideCylinder
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBoneUtility__PointOutsideCylinder (UnityEngine_Vector3_o* position, UnityEngine_Transform_o* transform, float spacing, const MethodInfo* method);
// 0x2497ed0

void EZhex1991_EZSoftBone_EZSoftBoneUtility__PointOutsideCylinder
               (UnityEngine_Vector3_o *position,UnityEngine_Transform_o *transform,float spacing,
               MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float extraout_XMM0_Dc;
  float extraout_XMM0_Dc_00;
  undefined4 uVar13;
  undefined4 extraout_XMM0_Dc_01;
  undefined4 extraout_XMM0_Dc_02;
  float extraout_XMM0_Dd;
  float extraout_XMM0_Dd_00;
  undefined4 uVar14;
  undefined4 extraout_XMM0_Dd_01;
  undefined4 extraout_XMM0_Dd_02;
  uint in_XMM1_Dc;
  uint in_XMM1_Dd;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  float fVar19;
  float fVar20;
  UnityEngine_Vector3_o UVar21;
  UnityEngine_Vector3_o UVar22;
  UnityEngine_Vector3_o UVar23;
  undefined1 auStack_58 [8];
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_28;
  float fStack_24;
  undefined8 uVar15;
  
  if (transform == (UnityEngine_Transform_o *)0x0) {
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
      UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)position,(MethodInfo *)0x0);
      return;
    }
    UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)position,(MethodInfo *)0x0);
    return;
  }
  UVar21 = UnityEngine_Transform__get_lossyScale(transform,(MethodInfo *)0x0);
  fStack_28 = ABS(UVar21.fields.y);
  in_XMM1_Dc = in_XMM1_Dc & 0x7fffffff;
  in_XMM1_Dd = in_XMM1_Dd & 0x7fffffff;
  auStack_58._0_4_ = ABS(UVar21.fields.z);
  UVar22 = UnityEngine_Transform__get_position(transform,(MethodInfo *)0x0);
  UVar23 = UnityEngine_Transform__get_up(transform,(MethodInfo *)0x0);
  fVar11 = UVar23.fields.z;
  fVar9 = UVar23.fields.x;
  fVar10 = UVar23.fields.y;
  fVar19 = ABS(UVar21.fields.x);
  if (ABS(UVar21.fields.x) <= (float)auStack_58._0_4_) {
    fVar19 = (float)auStack_58._0_4_;
  }
  fStack_48 = UVar22.fields.x;
  fStack_44 = UVar22.fields.y;
  uVar1 = (position->fields).x;
  uVar3 = (position->fields).y;
  fVar20 = (position->fields).z;
  if (g_data_057a6931 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Mathf);
    in_XMM1_Dc = 0;
    in_XMM1_Dd = 0;
    g_data_057a6931 = '\x01';
  }
  fVar20 = fVar20 - UVar22.fields.z;
  fVar8 = fVar11 * fVar11 + fVar10 * fVar10 + fVar9 * fVar9;
  if (**(float **)(TypeInfo_Mathf + 0xb8) <= fVar8) {
    fVar12 = fVar20 * fVar11 + ((float)uVar3 - fStack_44) * fVar10 + fVar9 * ((float)uVar1 - fStack_48);
    auVar16._0_4_ = fVar12 * fVar9;
    auVar16._4_4_ = fVar12 * fVar10;
    auVar16._8_4_ = extraout_XMM0_Dc_00 * 0.0;
    auVar16._12_4_ = extraout_XMM0_Dd_00 * 0.0;
    auVar18._4_4_ = fVar8;
    auVar18._0_4_ = fVar8;
    auVar18._8_4_ = in_XMM1_Dc;
    auVar18._12_4_ = in_XMM1_Dd;
    auVar17 = divps(auVar16,auVar18);
    fVar8 = (fVar12 * fVar11) / fVar8;
  }
  else {
    if (g_data_057a65d5 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
      g_data_057a65d5 = '\x01';
    }
    auVar17._8_8_ = 0;
    auVar17._0_8_ = **(ulong **)(TypeInfo_Vector3 + 0xb8);
    fVar8 = *(float *)(*(ulong **)(TypeInfo_Vector3 + 0xb8) + 1);
  }
  if (g_data_057a6841 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
    g_data_057a6841 = '\x01';
  }
  if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  auStack_58._0_4_ = auVar17._0_4_;
  auStack_58._4_4_ = auVar17._4_4_;
  fVar9 = fVar8 * fVar8 +
          (float)auStack_58._4_4_ * (float)auStack_58._4_4_ +
          (float)auStack_58._0_4_ * (float)auStack_58._0_4_;
  if (fVar9 < 0.0) {
    fVar10 = sqrtf(fVar9);
  }
  else {
    fVar10 = SQRT(fVar9);
  }
  fVar10 = (spacing + fStack_28) - fVar10;
  if (fVar10 <= 0.0) {
    return;
  }
  if (g_data_057a6841 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
    g_data_057a6841 = '\x01';
  }
  auStack_58._0_4_ = ((float)uVar1 - fStack_48) - (float)auStack_58._0_4_;
  auStack_58._4_4_ = ((float)uVar3 - fStack_44) - (float)auStack_58._4_4_;
  fVar20 = fVar20 - fVar8;
  fStack_50 = (0.0 - extraout_XMM0_Dc) - auVar17._8_4_;
  fStack_4c = (0.0 - extraout_XMM0_Dd) - auVar17._12_4_;
  if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  fVar11 = fVar20 * fVar20 +
           (float)auStack_58._4_4_ * (float)auStack_58._4_4_ +
           (float)auStack_58._0_4_ * (float)auStack_58._0_4_;
  if (fVar11 < 0.0) {
    fVar12 = sqrtf(fVar11);
  }
  else {
    fVar12 = SQRT(fVar11);
  }
  fVar12 = (fVar19 * 0.5 + spacing) - fVar12;
  if (fVar12 <= 0.0) {
    return;
  }
  uVar2 = (position->fields).x;
  uVar4 = (position->fields).y;
  fVar19 = (position->fields).z;
  if (fVar10 <= fVar12) {
    if (g_data_057a6845 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
      g_data_057a6845 = '\x01';
    }
    if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    uVar13 = 0;
    uVar14 = 0;
    if (fVar9 < 0.0) {
      fVar9 = sqrtf(fVar9);
      uVar13 = extraout_XMM0_Dc_02;
      uVar14 = extraout_XMM0_Dd_02;
      if (1e-05 < fVar9) goto label_0249a017;
label_02499f67:
      if (g_data_057a65d5 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
        g_data_057a65d5 = '\x01';
      }
      uVar15 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
      fVar20 = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
    }
    else {
      fVar9 = SQRT(fVar9);
      if (fVar9 <= 1e-05) goto label_02499f67;
label_0249a017:
      fVar20 = fVar8 / fVar9;
      auVar7._4_4_ = fVar9;
      auVar7._0_4_ = fVar9;
      auVar7._8_4_ = uVar13;
      auVar7._12_4_ = uVar14;
      auVar18 = divps(auVar17,auVar7);
      uVar15 = auVar18._0_8_;
    }
    fVar9 = fVar10 * (float)uVar15;
    fVar11 = fVar10 * (float)((ulong)uVar15 >> 0x20);
    fVar20 = fVar20 * fVar10;
    goto label_0249a045;
  }
  if (g_data_057a6845 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
    g_data_057a6845 = '\x01';
  }
  if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  uVar13 = 0;
  uVar14 = 0;
  if (fVar11 < 0.0) {
    fVar11 = sqrtf(fVar11);
    uVar13 = extraout_XMM0_Dc_01;
    uVar14 = extraout_XMM0_Dd_01;
    if (1e-05 < fVar11) goto label_02499fb6;
label_02499ec0:
    if (g_data_057a65d5 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
      g_data_057a65d5 = '\x01';
    }
    uVar15 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
    fVar20 = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
  }
  else {
    fVar11 = SQRT(fVar11);
    if (fVar11 <= 1e-05) goto label_02499ec0;
label_02499fb6:
    fVar20 = fVar20 / fVar11;
    auVar6._4_4_ = fVar11;
    auVar6._0_4_ = fVar11;
    auVar6._8_4_ = uVar13;
    auVar6._12_4_ = uVar14;
    auVar18 = divps(_auStack_58,auVar6);
    uVar15 = auVar18._0_8_;
  }
  fVar9 = fVar12 * (float)uVar15;
  fVar11 = fVar12 * (float)((ulong)uVar15 >> 0x20);
  fVar20 = fVar20 * fVar12;
label_0249a045:
  (position->fields).x = (float)uVar2 + fVar9;
  (position->fields).y = (float)uVar4 + fVar11;
  (position->fields).z = fVar19 + fVar20;
  return;
}


// EZhex1991.EZSoftBone.EZSoftBoneUtility$$PointOutsideCylinder
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBoneUtility__PointOutsideCylinder (UnityEngine_Vector3_o* position, UnityEngine_Vector3_o center, UnityEngine_Vector3_o direction, float radius, float height, const MethodInfo* method);
// 0x2499b70

void EZhex1991_EZSoftBone_EZSoftBoneUtility__PointOutsideCylinder_2399b70
               (UnityEngine_Vector3_o *position,UnityEngine_Vector3_o center,UnityEngine_Vector3_o direction,
               float radius,float height,MethodInfo *method)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float in_XMM0_Dc;
  undefined4 uVar13;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dc_00;
  float in_XMM0_Dd;
  undefined4 uVar14;
  undefined4 extraout_XMM0_Dd;
  undefined4 extraout_XMM0_Dd_00;
  float in_XMM2_Dc;
  float in_XMM2_Dd;
  undefined4 in_XMM3_Dc;
  undefined4 in_XMM3_Dd;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  float fVar19;
  undefined1 auStack_58 [8];
  float fStack_50;
  float fStack_4c;
  float fStack_28;
  float fStack_24;
  undefined8 uVar15;
  
  fVar12 = direction.fields.z;
  fVar9 = direction.fields.x;
  fVar11 = direction.fields.y;
  uVar2 = (position->fields).x;
  uVar4 = (position->fields).y;
  fVar19 = (position->fields).z;
  if (g_data_057a6931 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Mathf);
    in_XMM3_Dc = 0;
    in_XMM3_Dd = 0;
    g_data_057a6931 = '\x01';
  }
  auStack_58._0_4_ = (float)uVar2 - center.fields.x;
  auStack_58._4_4_ = (float)uVar4 - center.fields.y;
  fVar19 = fVar19 - center.fields.z;
  fVar8 = fVar12 * fVar12 + fVar11 * fVar11 + fVar9 * fVar9;
  if (**(float **)(TypeInfo_Mathf + 0xb8) <= fVar8) {
    fVar10 = fVar19 * fVar12 + (float)auStack_58._4_4_ * fVar11 + fVar9 * (float)auStack_58._0_4_;
    auVar16._0_4_ = fVar10 * fVar9;
    auVar16._4_4_ = fVar10 * fVar11;
    auVar16._8_4_ = in_XMM2_Dc * 0.0;
    auVar16._12_4_ = in_XMM2_Dd * 0.0;
    auVar18._4_4_ = fVar8;
    auVar18._0_4_ = fVar8;
    auVar18._8_4_ = in_XMM3_Dc;
    auVar18._12_4_ = in_XMM3_Dd;
    auVar17 = divps(auVar16,auVar18);
    fVar8 = (fVar10 * fVar12) / fVar8;
  }
  else {
    if (g_data_057a65d5 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
      g_data_057a65d5 = '\x01';
    }
    auVar17._8_8_ = 0;
    auVar17._0_8_ = **(ulong **)(TypeInfo_Vector3 + 0xb8);
    fVar8 = *(float *)(*(ulong **)(TypeInfo_Vector3 + 0xb8) + 1);
  }
  if (g_data_057a6841 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
    g_data_057a6841 = '\x01';
  }
  if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  fVar11 = auVar17._0_4_;
  fVar12 = auVar17._4_4_;
  fVar9 = fVar8 * fVar8 + fVar12 * fVar12 + fVar11 * fVar11;
  if (fVar9 < 0.0) {
    fVar10 = sqrtf(fVar9);
  }
  else {
    fVar10 = SQRT(fVar9);
  }
  fVar10 = height - fVar10;
  if (fVar10 <= 0.0) {
    return;
  }
  if (g_data_057a6841 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
    g_data_057a6841 = '\x01';
  }
  auStack_58._0_4_ = (float)auStack_58._0_4_ - fVar11;
  auStack_58._4_4_ = (float)auStack_58._4_4_ - fVar12;
  fVar19 = fVar19 - fVar8;
  fStack_50 = (0.0 - in_XMM0_Dc) - auVar17._8_4_;
  fStack_4c = (0.0 - in_XMM0_Dd) - auVar17._12_4_;
  if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  fVar11 = fVar19 * fVar19 +
           (float)auStack_58._4_4_ * (float)auStack_58._4_4_ +
           (float)auStack_58._0_4_ * (float)auStack_58._0_4_;
  if (fVar11 < 0.0) {
    fVar12 = sqrtf(fVar11);
  }
  else {
    fVar12 = SQRT(fVar11);
  }
  fVar12 = radius - fVar12;
  if (fVar12 <= 0.0) {
    return;
  }
  uVar3 = (position->fields).x;
  uVar5 = (position->fields).y;
  fVar1 = (position->fields).z;
  if (fVar10 <= fVar12) {
    if (g_data_057a6845 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
      g_data_057a6845 = '\x01';
    }
    if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    uVar13 = 0;
    uVar14 = 0;
    if (fVar9 < 0.0) {
      fVar9 = sqrtf(fVar9);
      uVar13 = extraout_XMM0_Dc_00;
      uVar14 = extraout_XMM0_Dd_00;
      if (fVar9 <= 1e-05) goto label_02499f67;
label_0249a017:
      fVar19 = fVar8 / fVar9;
      auVar7._4_4_ = fVar9;
      auVar7._0_4_ = fVar9;
      auVar7._8_4_ = uVar13;
      auVar7._12_4_ = uVar14;
      auVar18 = divps(auVar17,auVar7);
      uVar15 = auVar18._0_8_;
    }
    else {
      fVar9 = SQRT(fVar9);
      if (1e-05 < fVar9) goto label_0249a017;
label_02499f67:
      if (g_data_057a65d5 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
        g_data_057a65d5 = '\x01';
      }
      uVar15 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
      fVar19 = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
    }
    fVar9 = fVar10 * (float)uVar15;
    fVar11 = fVar10 * (float)((ulong)uVar15 >> 0x20);
    fVar19 = fVar19 * fVar10;
    goto label_0249a045;
  }
  if (g_data_057a6845 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
    g_data_057a6845 = '\x01';
  }
  if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  uVar13 = 0;
  uVar14 = 0;
  if (fVar11 < 0.0) {
    fVar11 = sqrtf(fVar11);
    uVar13 = extraout_XMM0_Dc;
    uVar14 = extraout_XMM0_Dd;
    if (fVar11 <= 1e-05) goto label_02499ec0;
label_02499fb6:
    fVar19 = fVar19 / fVar11;
    auVar6._4_4_ = fVar11;
    auVar6._0_4_ = fVar11;
    auVar6._8_4_ = uVar13;
    auVar6._12_4_ = uVar14;
    auVar18 = divps(_auStack_58,auVar6);
    uVar15 = auVar18._0_8_;
  }
  else {
    fVar11 = SQRT(fVar11);
    if (1e-05 < fVar11) goto label_02499fb6;
label_02499ec0:
    if (g_data_057a65d5 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
      g_data_057a65d5 = '\x01';
    }
    uVar15 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
    fVar19 = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
  }
  fVar9 = fVar12 * (float)uVar15;
  fVar11 = fVar12 * (float)((ulong)uVar15 >> 0x20);
  fVar19 = fVar19 * fVar12;
label_0249a045:
  (position->fields).x = (float)uVar3 + fVar9;
  (position->fields).y = (float)uVar5 + fVar11;
  (position->fields).z = fVar1 + fVar19;
  return;
}


// EZhex1991.EZSoftBone.EZSoftBoneUtility$$PointInsideCylinder
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBoneUtility__PointInsideCylinder (UnityEngine_Vector3_o* position, UnityEngine_Transform_o* transform, float spacing, const MethodInfo* method);
// 0x2497e10

void EZhex1991_EZSoftBone_EZSoftBoneUtility__PointInsideCylinder
               (UnityEngine_Vector3_o *position,UnityEngine_Transform_o *transform,float spacing,
               MethodInfo *method)

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
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float extraout_XMM0_Dc;
  float extraout_XMM0_Dc_00;
  float extraout_XMM0_Dc_01;
  float extraout_XMM0_Dc_02;
  undefined4 extraout_XMM0_Dc_03;
  undefined4 extraout_XMM0_Dc_04;
  undefined4 uVar20;
  undefined4 extraout_XMM0_Dc_05;
  undefined4 extraout_XMM0_Dc_06;
  float extraout_XMM0_Dd;
  float extraout_XMM0_Dd_00;
  float extraout_XMM0_Dd_01;
  float extraout_XMM0_Dd_02;
  undefined4 extraout_XMM0_Dd_03;
  undefined4 extraout_XMM0_Dd_04;
  undefined4 uVar21;
  undefined4 extraout_XMM0_Dd_05;
  undefined4 extraout_XMM0_Dd_06;
  float fVar22;
  float fVar23;
  uint in_XMM1_Dc;
  uint in_XMM1_Dd;
  undefined1 auVar24 [16];
  undefined8 uVar25;
  undefined1 auVar26 [8];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  float fVar30;
  UnityEngine_Vector3_o UVar31;
  UnityEngine_Vector3_o UVar32;
  UnityEngine_Vector3_o UVar33;
  undefined1 auStack_c0 [8];
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  float fStack_90;
  float fStack_8c;
  undefined1 auVar34 [16];
  undefined1 auStack_58 [8];
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_28;
  float fStack_24;
  
  if (transform == (UnityEngine_Transform_o *)0x0) {
    fVar15 = (float)il2cpp_runtime_helper_022b2c90();
    if (transform == (UnityEngine_Transform_o *)0x0) {
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057a692d == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_EZSoftBoneColliderBase);
        g_data_057a692d = '\x01';
        iVar9 = *(int *)(_DAT_05578bb0 + 0xe4);
      }
      else {
        iVar9 = *(int *)(_DAT_05578bb0 + 0xe4);
      }
      if (iVar9 == 0) {
        il2cpp_runtime_helper_02337ed0();
        UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)position,(MethodInfo *)0x0);
        return;
      }
      UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)position,(MethodInfo *)0x0);
      return;
    }
    UVar31 = UnityEngine_Transform__get_lossyScale(transform,(MethodInfo *)0x0);
    fStack_90 = ABS(UVar31.fields.y);
    in_XMM1_Dc = in_XMM1_Dc & 0x7fffffff;
    in_XMM1_Dd = in_XMM1_Dd & 0x7fffffff;
    auStack_c0._0_4_ = ABS(UVar31.fields.z);
    UVar32 = UnityEngine_Transform__get_position(transform,(MethodInfo *)0x0);
    UVar33 = UnityEngine_Transform__get_up(transform,(MethodInfo *)0x0);
    fVar30 = UVar33.fields.z;
    fVar18 = ABS(UVar31.fields.x);
    if (ABS(UVar31.fields.x) <= (float)auStack_c0._0_4_) {
      fVar18 = (float)auStack_c0._0_4_;
    }
    fStack_b0 = UVar32.fields.x;
    fStack_ac = UVar32.fields.y;
    uVar1 = *(float *)&((UnityEngine_MonoBehaviour_o *)position)->klass;
    uVar5 = *(float *)((long)&((UnityEngine_MonoBehaviour_o *)position)->klass + 4);
    fVar17 = *(float *)&((UnityEngine_MonoBehaviour_o *)position)->monitor;
    if (g_data_057a6931 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Mathf);
      in_XMM1_Dc = 0;
      in_XMM1_Dd = 0;
      g_data_057a6931 = '\x01';
    }
    fVar17 = fVar17 - UVar32.fields.z;
    fVar22 = UVar33.fields.x;
    fVar23 = UVar33.fields.y;
    fVar19 = fVar30 * fVar30 + fVar23 * fVar23 + fVar22 * fVar22;
    if (**(float **)(TypeInfo_Mathf + 0xb8) <= fVar19) {
      fVar16 = fVar17 * fVar30 + ((float)uVar5 - fStack_ac) * fVar23 + fVar22 * ((float)uVar1 - fStack_b0);
      auVar27._0_4_ = fVar16 * fVar22;
      auVar27._4_4_ = fVar16 * fVar23;
      auVar27._8_4_ = extraout_XMM0_Dc_02 * 0.0;
      auVar27._12_4_ = extraout_XMM0_Dd_02 * 0.0;
      auVar24._4_4_ = fVar19;
      auVar24._0_4_ = fVar19;
      auVar24._8_4_ = in_XMM1_Dc;
      auVar24._12_4_ = in_XMM1_Dd;
      auVar28 = divps(auVar27,auVar24);
      fVar19 = (fVar16 * fVar30) / fVar19;
    }
    else {
      if (g_data_057a65d5 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
        g_data_057a65d5 = '\x01';
      }
      auVar28._8_8_ = 0;
      auVar28._0_8_ = **(ulong **)(TypeInfo_Vector3 + 0xb8);
      fVar19 = *(float *)(*(ulong **)(TypeInfo_Vector3 + 0xb8) + 1);
    }
    if (g_data_057a6841 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
      g_data_057a6841 = '\x01';
    }
    if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    auStack_c0._0_4_ = auVar28._0_4_;
    auStack_c0._4_4_ = auVar28._4_4_;
    fVar30 = fVar19 * fVar19 +
             (float)auStack_c0._4_4_ * (float)auStack_c0._4_4_ +
             (float)auStack_c0._0_4_ * (float)auStack_c0._0_4_;
    if (fVar30 < 0.0) {
      fVar22 = sqrtf(fVar30);
    }
    else {
      fVar22 = SQRT(fVar30);
    }
    fVar22 = (fVar15 + fStack_90) - fVar22;
    if (fVar22 <= 0.0) {
      return;
    }
    if (g_data_057a6841 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
      g_data_057a6841 = '\x01';
    }
    auStack_c0._0_4_ = ((float)uVar1 - fStack_b0) - (float)auStack_c0._0_4_;
    auStack_c0._4_4_ = ((float)uVar5 - fStack_ac) - (float)auStack_c0._4_4_;
    fVar17 = fVar17 - fVar19;
    fStack_b8 = (0.0 - extraout_XMM0_Dc_01) - auVar28._8_4_;
    fStack_b4 = (0.0 - extraout_XMM0_Dd_01) - auVar28._12_4_;
    if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    fVar23 = fVar17 * fVar17 +
             (float)auStack_c0._4_4_ * (float)auStack_c0._4_4_ +
             (float)auStack_c0._0_4_ * (float)auStack_c0._0_4_;
    if (fVar23 < 0.0) {
      fVar16 = sqrtf(fVar23);
    }
    else {
      fVar16 = SQRT(fVar23);
    }
    fVar16 = (fVar18 * 0.5 + fVar15) - fVar16;
    if (fVar16 <= 0.0) {
      return;
    }
    uVar2 = *(float *)&((UnityEngine_MonoBehaviour_o *)position)->klass;
    uVar6 = *(float *)((long)&((UnityEngine_MonoBehaviour_o *)position)->klass + 4);
    fVar15 = *(float *)&((UnityEngine_MonoBehaviour_o *)position)->monitor;
    if (fVar22 <= fVar16) {
      if (g_data_057a6845 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
        g_data_057a6845 = '\x01';
      }
      if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      uVar20 = 0;
      uVar21 = 0;
      if (fVar30 < 0.0) {
        fVar30 = sqrtf(fVar30);
        uVar20 = extraout_XMM0_Dc_04;
        uVar21 = extraout_XMM0_Dd_04;
        if (1e-05 < fVar30) goto label_0249a017;
label_02499f67:
        if (g_data_057a65d5 == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
          g_data_057a65d5 = '\x01';
        }
        uVar25 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
        fVar17 = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
      }
      else {
        fVar30 = SQRT(fVar30);
        if (fVar30 <= 1e-05) goto label_02499f67;
label_0249a017:
        fVar17 = fVar19 / fVar30;
        auVar13._4_4_ = fVar30;
        auVar13._0_4_ = fVar30;
        auVar13._8_4_ = uVar20;
        auVar13._12_4_ = uVar21;
        auVar24 = divps(auVar28,auVar13);
        uVar25 = auVar24._0_8_;
      }
      fVar18 = fVar22 * (float)uVar25;
      fVar30 = fVar22 * (float)((ulong)uVar25 >> 0x20);
      fVar17 = fVar17 * fVar22;
      goto label_0249a045;
    }
    if (g_data_057a6845 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
      g_data_057a6845 = '\x01';
    }
    if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    uVar20 = 0;
    uVar21 = 0;
    if (fVar23 < 0.0) {
      fVar23 = sqrtf(fVar23);
      uVar20 = extraout_XMM0_Dc_03;
      uVar21 = extraout_XMM0_Dd_03;
      if (1e-05 < fVar23) goto label_02499fb6;
label_02499ec0:
      if (g_data_057a65d5 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
        g_data_057a65d5 = '\x01';
      }
      uVar25 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
      fVar17 = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
    }
    else {
      fVar23 = SQRT(fVar23);
      if (fVar23 <= 1e-05) goto label_02499ec0;
label_02499fb6:
      fVar17 = fVar17 / fVar23;
      auVar12._4_4_ = fVar23;
      auVar12._0_4_ = fVar23;
      auVar12._8_4_ = uVar20;
      auVar12._12_4_ = uVar21;
      auVar24 = divps(_auStack_c0,auVar12);
      uVar25 = auVar24._0_8_;
    }
    fVar18 = fVar16 * (float)uVar25;
    fVar30 = fVar16 * (float)((ulong)uVar25 >> 0x20);
    fVar17 = fVar17 * fVar16;
label_0249a045:
    *(float *)&((UnityEngine_MonoBehaviour_o *)position)->klass = (float)uVar2 + fVar18;
    *(float *)((long)&((UnityEngine_MonoBehaviour_o *)position)->klass + 4) = (float)uVar6 + fVar30;
    *(float *)&((UnityEngine_MonoBehaviour_o *)position)->monitor = fVar15 + fVar17;
    return;
  }
  UVar31 = UnityEngine_Transform__get_lossyScale(transform,(MethodInfo *)0x0);
  fStack_28 = ABS(UVar31.fields.y);
  in_XMM1_Dc = in_XMM1_Dc & 0x7fffffff;
  in_XMM1_Dd = in_XMM1_Dd & 0x7fffffff;
  auStack_58._0_4_ = ABS(UVar31.fields.z);
  UVar32 = UnityEngine_Transform__get_position(transform,(MethodInfo *)0x0);
  UVar33 = UnityEngine_Transform__get_up(transform,(MethodInfo *)0x0);
  fVar18 = UVar33.fields.z;
  fVar15 = ABS(UVar31.fields.x);
  if (ABS(UVar31.fields.x) <= (float)auStack_58._0_4_) {
    fVar15 = (float)auStack_58._0_4_;
  }
  fStack_48 = UVar32.fields.x;
  fStack_44 = UVar32.fields.y;
  uVar3 = (position->fields).x;
  uVar7 = (position->fields).y;
  fVar30 = (position->fields).z;
  if (g_data_057a6931 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Mathf);
    in_XMM1_Dc = 0;
    in_XMM1_Dd = 0;
    g_data_057a6931 = '\x01';
  }
  fVar30 = fVar30 - UVar32.fields.z;
  fVar19 = UVar33.fields.x;
  fVar22 = UVar33.fields.y;
  fVar17 = fVar18 * fVar18 + fVar22 * fVar22 + fVar19 * fVar19;
  if (**(float **)(TypeInfo_Mathf + 0xb8) <= fVar17) {
    fVar23 = fVar30 * fVar18 + ((float)uVar7 - fStack_44) * fVar22 + fVar19 * ((float)uVar3 - fStack_48);
    auVar29._0_4_ = fVar23 * fVar19;
    auVar29._4_4_ = fVar23 * fVar22;
    auVar29._8_4_ = extraout_XMM0_Dc_00 * 0.0;
    auVar29._12_4_ = extraout_XMM0_Dd_00 * 0.0;
    auVar14._4_4_ = fVar17;
    auVar14._0_4_ = fVar17;
    auVar14._8_4_ = in_XMM1_Dc;
    auVar14._12_4_ = in_XMM1_Dd;
    _auStack_58 = divps(auVar29,auVar14);
    auVar26 = auStack_58;
    fVar17 = (fVar23 * fVar18) / fVar17;
  }
  else {
    if (g_data_057a65d5 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
      g_data_057a65d5 = '\x01';
    }
    auVar26 = (undefined1  [8])**(ulong **)(TypeInfo_Vector3 + 0xb8);
    fVar17 = *(float *)(*(ulong **)(TypeInfo_Vector3 + 0xb8) + 1);
    _fStack_50 = 0;
    auStack_58 = auVar26;
  }
  if (g_data_057a6841 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
    g_data_057a6841 = '\x01';
    auVar26 = auStack_58;
  }
  if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    auVar26 = auStack_58;
  }
  fVar18 = (float)((ulong)auVar26 >> 0x20);
  fVar18 = fVar17 * fVar17 + fVar18 * fVar18 + SUB84(auVar26,0) * SUB84(auVar26,0);
  if (fVar18 < 0.0) {
    fVar19 = sqrtf(fVar18);
  }
  else {
    fVar19 = SQRT(fVar18);
  }
  if (g_data_057a6841 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
    g_data_057a6841 = '\x01';
  }
  fVar22 = ((float)uVar3 - fStack_48) - (float)auStack_58._0_4_;
  fVar23 = ((float)uVar7 - fStack_44) - (float)auStack_58._4_4_;
  fVar30 = fVar30 - fVar17;
  auVar34._4_4_ = fVar23;
  auVar34._0_4_ = fVar22;
  auVar34._8_4_ = (0.0 - extraout_XMM0_Dc) - fStack_50;
  auVar34._12_4_ = (0.0 - extraout_XMM0_Dd) - fStack_4c;
  if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  fVar19 = (fStack_28 - spacing) - fVar19;
  fVar22 = fVar30 * fVar30 + fVar23 * fVar23 + fVar22 * fVar22;
  if (fVar22 < 0.0) {
    fVar23 = sqrtf(fVar22);
  }
  else {
    fVar23 = SQRT(fVar22);
  }
  fVar23 = (fVar15 * 0.5 - spacing) - fVar23;
  if (0.0 <= fVar19) {
    if (0.0 <= fVar23) {
      return;
    }
  }
  uVar4 = (position->fields).x;
  uVar8 = (position->fields).y;
  fVar15 = (position->fields).z;
  if (fVar19 <= fVar23) {
    if (g_data_057a6845 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
      g_data_057a6845 = '\x01';
      if (*(int *)(TypeInfo_Math + 0xe4) == 0) goto label_0249a52d;
label_0249a42b:
      if (0.0 <= fVar18) goto label_0249a43d;
label_0249a549:
      fVar18 = sqrtf(fVar18);
      uVar20 = extraout_XMM0_Dc_06;
      uVar21 = extraout_XMM0_Dd_06;
      if (1e-05 < fVar18) goto label_0249a560;
label_0249a44e:
      if (g_data_057a65d5 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
        g_data_057a65d5 = '\x01';
      }
      uVar25 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
      fVar30 = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
    }
    else {
      if (*(int *)(TypeInfo_Math + 0xe4) != 0) goto label_0249a42b;
label_0249a52d:
      il2cpp_runtime_helper_02337ed0();
      if (fVar18 < 0.0) goto label_0249a549;
label_0249a43d:
      uVar21 = 0;
      uVar20 = 0;
      fVar18 = SQRT(fVar18);
      if (fVar18 <= 1e-05) goto label_0249a44e;
label_0249a560:
      fVar30 = fVar17 / fVar18;
      auVar11._4_4_ = fVar18;
      auVar11._0_4_ = fVar18;
      auVar11._8_4_ = uVar20;
      auVar11._12_4_ = uVar21;
      auVar24 = divps(_auStack_58,auVar11);
      uVar25 = auVar24._0_8_;
    }
    fVar18 = fVar19 * (float)uVar25;
    fVar17 = fVar19 * (float)((ulong)uVar25 >> 0x20);
    fVar30 = fVar30 * fVar19;
    goto label_0249a583;
  }
  if (g_data_057a6845 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
    g_data_057a6845 = '\x01';
    iVar9 = *(int *)(TypeInfo_Math + 0xe4);
  }
  else {
    iVar9 = *(int *)(TypeInfo_Math + 0xe4);
  }
  if (iVar9 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  uVar20 = 0;
  uVar21 = 0;
  if (fVar22 < 0.0) {
    fVar22 = sqrtf(fVar22);
    uVar20 = extraout_XMM0_Dc_05;
    uVar21 = extraout_XMM0_Dd_05;
    if (1e-05 < fVar22) goto label_0249a4ab;
label_0249a3ce:
    if (g_data_057a65d5 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
      g_data_057a65d5 = '\x01';
    }
    uVar25 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
    fVar30 = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
  }
  else {
    fVar22 = SQRT(fVar22);
    if (fVar22 <= 1e-05) goto label_0249a3ce;
label_0249a4ab:
    fVar30 = fVar30 / fVar22;
    auVar10._4_4_ = fVar22;
    auVar10._0_4_ = fVar22;
    auVar10._8_4_ = uVar20;
    auVar10._12_4_ = uVar21;
    auVar24 = divps(auVar34,auVar10);
    uVar25 = auVar24._0_8_;
  }
  fVar18 = fVar23 * (float)uVar25;
  fVar17 = fVar23 * (float)((ulong)uVar25 >> 0x20);
  fVar30 = fVar30 * fVar23;
label_0249a583:
  (position->fields).x = (float)uVar4 + fVar18;
  (position->fields).y = (float)uVar8 + fVar17;
  (position->fields).z = fVar15 + fVar30;
  return;
}


// EZhex1991.EZSoftBone.EZSoftBoneUtility$$PointInsideCylinder
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBoneUtility__PointInsideCylinder (UnityEngine_Vector3_o* position, UnityEngine_Vector3_o center, UnityEngine_Vector3_o direction, float radius, float height, const MethodInfo* method);
// 0x249a060

void EZhex1991_EZSoftBone_EZSoftBoneUtility__PointInsideCylinder_239a060
               (UnityEngine_Vector3_o *position,UnityEngine_Vector3_o center,UnityEngine_Vector3_o direction,
               float radius,float height,MethodInfo *method)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float in_XMM0_Dc;
  undefined4 uVar13;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dc_00;
  float in_XMM0_Dd;
  undefined4 uVar14;
  undefined4 extraout_XMM0_Dd;
  undefined4 extraout_XMM0_Dd_00;
  undefined8 in_XMM2_Qb;
  undefined1 auVar15 [16];
  undefined1 auVar16 [8];
  undefined8 uVar17;
  undefined4 in_XMM3_Dc;
  undefined4 in_XMM3_Dd;
  undefined1 auVar18 [16];
  float fVar19;
  float fVar20;
  undefined1 auStack_78 [8];
  float fStack_70;
  float fStack_6c;
  undefined1 auStack_58 [8];
  float fStack_50;
  float fStack_4c;
  float fStack_28;
  float fStack_24;
  
  fVar10 = direction.fields.z;
  uVar2 = (position->fields).x;
  uVar4 = (position->fields).y;
  fVar19 = (position->fields).z;
  if (g_data_057a6931 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Mathf);
    in_XMM3_Dc = 0;
    in_XMM3_Dd = 0;
    g_data_057a6931 = '\x01';
  }
  auStack_78._0_4_ = (float)uVar2 - center.fields.x;
  auStack_78._4_4_ = (float)uVar4 - center.fields.y;
  fVar19 = fVar19 - center.fields.z;
  fVar11 = direction.fields.x;
  fVar20 = direction.fields.y;
  fVar9 = fVar10 * fVar10 + fVar20 * fVar20 + fVar11 * fVar11;
  if (**(float **)(TypeInfo_Mathf + 0xb8) <= fVar9) {
    fVar12 = fVar19 * fVar10 + (float)auStack_78._4_4_ * fVar20 + fVar11 * (float)auStack_78._0_4_;
    auVar18._0_4_ = fVar12 * fVar11;
    auVar18._4_4_ = fVar12 * fVar20;
    auVar18._8_4_ = (float)in_XMM2_Qb * 0.0;
    auVar18._12_4_ = (float)((ulong)in_XMM2_Qb >> 0x20) * 0.0;
    auVar15._4_4_ = fVar9;
    auVar15._0_4_ = fVar9;
    auVar15._8_4_ = in_XMM3_Dc;
    auVar15._12_4_ = in_XMM3_Dd;
    _auStack_58 = divps(auVar18,auVar15);
    auVar16 = auStack_58;
    fVar9 = (fVar12 * fVar10) / fVar9;
  }
  else {
    if (g_data_057a65d5 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
      g_data_057a65d5 = '\x01';
    }
    auVar16 = (undefined1  [8])**(ulong **)(TypeInfo_Vector3 + 0xb8);
    fVar9 = *(float *)(*(ulong **)(TypeInfo_Vector3 + 0xb8) + 1);
    _fStack_50 = 0;
    auStack_58 = auVar16;
  }
  if (g_data_057a6841 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
    g_data_057a6841 = '\x01';
    auVar16 = auStack_58;
  }
  if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    auVar16 = auStack_58;
  }
  fVar10 = (float)((ulong)auVar16 >> 0x20);
  fVar10 = fVar9 * fVar9 + fVar10 * fVar10 + SUB84(auVar16,0) * SUB84(auVar16,0);
  if (fVar10 < 0.0) {
    fVar11 = sqrtf(fVar10);
  }
  else {
    fVar11 = SQRT(fVar10);
  }
  if (g_data_057a6841 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
    g_data_057a6841 = '\x01';
  }
  auStack_78._0_4_ = (float)auStack_78._0_4_ - (float)auStack_58._0_4_;
  auStack_78._4_4_ = (float)auStack_78._4_4_ - (float)auStack_58._4_4_;
  fVar19 = fVar19 - fVar9;
  fStack_70 = (0.0 - in_XMM0_Dc) - fStack_50;
  fStack_6c = (0.0 - in_XMM0_Dd) - fStack_4c;
  if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  fVar11 = height - fVar11;
  fVar20 = fVar19 * fVar19 +
           (float)auStack_78._4_4_ * (float)auStack_78._4_4_ +
           (float)auStack_78._0_4_ * (float)auStack_78._0_4_;
  if (fVar20 < 0.0) {
    fVar12 = sqrtf(fVar20);
  }
  else {
    fVar12 = SQRT(fVar20);
  }
  fVar12 = radius - fVar12;
  if (0.0 <= fVar11) {
    if (0.0 <= fVar12) {
      return;
    }
  }
  uVar3 = (position->fields).x;
  uVar5 = (position->fields).y;
  fVar1 = (position->fields).z;
  if (fVar11 <= fVar12) {
    if (g_data_057a6845 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
      g_data_057a6845 = '\x01';
      if (*(int *)(TypeInfo_Math + 0xe4) != 0) goto label_0249a42b;
label_0249a52d:
      il2cpp_runtime_helper_02337ed0();
      if (0.0 <= fVar10) goto label_0249a43d;
label_0249a549:
      fVar10 = sqrtf(fVar10);
      uVar13 = extraout_XMM0_Dc_00;
      uVar14 = extraout_XMM0_Dd_00;
      if (fVar10 <= 1e-05) goto label_0249a44e;
label_0249a560:
      fVar19 = fVar9 / fVar10;
      auVar8._4_4_ = fVar10;
      auVar8._0_4_ = fVar10;
      auVar8._8_4_ = uVar13;
      auVar8._12_4_ = uVar14;
      auVar15 = divps(_auStack_58,auVar8);
      uVar17 = auVar15._0_8_;
    }
    else {
      if (*(int *)(TypeInfo_Math + 0xe4) == 0) goto label_0249a52d;
label_0249a42b:
      if (fVar10 < 0.0) goto label_0249a549;
label_0249a43d:
      uVar14 = 0;
      uVar13 = 0;
      fVar10 = SQRT(fVar10);
      if (1e-05 < fVar10) goto label_0249a560;
label_0249a44e:
      if (g_data_057a65d5 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
        g_data_057a65d5 = '\x01';
      }
      uVar17 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
      fVar19 = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
    }
    fVar10 = fVar11 * (float)uVar17;
    fVar9 = fVar11 * (float)((ulong)uVar17 >> 0x20);
    fVar19 = fVar19 * fVar11;
    goto label_0249a583;
  }
  if (g_data_057a6845 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
    g_data_057a6845 = '\x01';
    iVar6 = *(int *)(TypeInfo_Math + 0xe4);
  }
  else {
    iVar6 = *(int *)(TypeInfo_Math + 0xe4);
  }
  if (iVar6 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  uVar13 = 0;
  uVar14 = 0;
  if (fVar20 < 0.0) {
    fVar20 = sqrtf(fVar20);
    uVar13 = extraout_XMM0_Dc;
    uVar14 = extraout_XMM0_Dd;
    if (fVar20 <= 1e-05) goto label_0249a3ce;
label_0249a4ab:
    fVar19 = fVar19 / fVar20;
    auVar7._4_4_ = fVar20;
    auVar7._0_4_ = fVar20;
    auVar7._8_4_ = uVar13;
    auVar7._12_4_ = uVar14;
    auVar15 = divps(_auStack_78,auVar7);
    uVar17 = auVar15._0_8_;
  }
  else {
    fVar20 = SQRT(fVar20);
    if (1e-05 < fVar20) goto label_0249a4ab;
label_0249a3ce:
    if (g_data_057a65d5 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
      g_data_057a65d5 = '\x01';
    }
    uVar17 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
    fVar19 = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
  }
  fVar10 = fVar12 * (float)uVar17;
  fVar9 = fVar12 * (float)((ulong)uVar17 >> 0x20);
  fVar19 = fVar19 * fVar12;
label_0249a583:
  (position->fields).x = (float)uVar3 + fVar10;
  (position->fields).y = (float)uVar5 + fVar9;
  (position->fields).z = fVar1 + fVar19;
  return;
}


// EZhex1991.EZSoftBone.EZSoftBoneUtility$$PointOutsideBox
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBoneUtility__PointOutsideBox (UnityEngine_Vector3_o* position, UnityEngine_BoxCollider_o* collider, float spacing, const MethodInfo* method);
// 0x2497660

void EZhex1991_EZSoftBone_EZSoftBoneUtility__PointOutsideBox
               (UnityEngine_Vector3_o *position,UnityEngine_BoxCollider_o *collider,float spacing,
               MethodInfo *method)

{
  undefined8 uVar1;
  bool_conflict bVar2;
  UnityEngine_Transform_o *pUVar3;
  UnityEngine_Object_o *x;
  Il2CppObject *pIVar4;
  UnityEngine_MeshCollider_o *__this;
  UnityEngine_BoxCollider_o *__this_00;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  UnityEngine_Vector3_o UVar11;
  UnityEngine_Vector3_o UVar12;
  UnityEngine_Vector3_o UVar13;
  float fStack_88;
  float fStack_78;
  float fStack_74;
  float fStack_68;
  float fStack_64;
  float fStack_48;
  float fStack_44;
  float fStack_38;
  float fStack_34;
  
  __this = (UnityEngine_MeshCollider_o *)0x0;
  __this_00 = (UnityEngine_BoxCollider_o *)position;
  if (collider == (UnityEngine_BoxCollider_o *)0x0) goto label_0249791c;
  __this = (UnityEngine_MeshCollider_o *)0x0;
  __this_00 = collider;
  pUVar3 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)collider,(MethodInfo *)0x0);
  if (pUVar3 == (UnityEngine_Transform_o *)0x0) goto label_0249791c;
  UVar11 = UnityEngine_Transform__InverseTransformPoint(pUVar3,position->fields,(MethodInfo *)0x0);
  UVar12 = UnityEngine_BoxCollider__get_center(collider,(MethodInfo *)0x0);
  UVar13 = UnityEngine_BoxCollider__get_size(collider,(MethodInfo *)0x0);
  __this = (UnityEngine_MeshCollider_o *)0x0;
  __this_00 = collider;
  pUVar3 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)collider,(MethodInfo *)0x0);
  if (g_data_057a6932 == '\0') {
    __this_00 = (UnityEngine_BoxCollider_o *)&TypeInfo_Vector3;
    il2cpp_runtime_helper_023445d0();
    g_data_057a6932 = '\x01';
  }
  if (pUVar3 == (UnityEngine_Transform_o *)0x0) goto label_0249791c;
  fStack_68 = UVar11.fields.x;
  fStack_64 = UVar11.fields.y;
  fStack_38 = UVar12.fields.x;
  fStack_34 = UVar12.fields.y;
  fStack_74 = fStack_64 - fStack_34;
  fStack_78 = fStack_68 - fStack_38;
  fStack_88 = UVar11.fields.z - UVar12.fields.z;
  fStack_48 = UVar13.fields.x;
  uVar1 = *(undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0xc);
  UVar11.fields.x = spacing * (float)uVar1;
  UVar11.fields.y = spacing * (float)((ulong)uVar1 >> 0x20);
  UVar11.fields.z = spacing * *(float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x14);
  UVar11 = UnityEngine_Transform__InverseTransformVector(pUVar3,UVar11,(MethodInfo *)0x0);
  fVar6 = ABS(UVar11.fields.x) + ABS(fStack_48) * 0.5;
  fVar7 = ABS(UVar11.fields.z) + ABS(UVar13.fields.z) * 0.5;
  if ((ABS(fStack_78) < fVar6) && (ABS(fStack_88) < fVar7)) {
    fStack_44 = UVar13.fields.y;
    fVar5 = ABS(UVar11.fields.y) + ABS(fStack_44) * 0.5;
    if (ABS(fStack_74) < fVar5) {
      fVar10 = ABS(ABS(fStack_74) - fVar5);
      fVar8 = ABS(ABS(fStack_78) - fVar6);
      fVar9 = ABS(ABS(fStack_88) - fVar7);
      if (fVar10 <= fVar8) {
        if (fVar9 <= fVar10) goto label_024978fc;
        fStack_74 = fVar5 * *(float *)(&g_data_00d1d580 + (ulong)(0.0 <= fStack_74) * 4);
      }
      else if (fVar9 <= fVar8) {
label_024978fc:
        fStack_88 = fVar7 * *(float *)(&g_data_00d1d580 + (ulong)(0.0 <= fStack_88) * 4);
      }
      else {
        fStack_78 = fVar6 * *(float *)(&g_data_00d1d580 + (ulong)(0.0 <= fStack_78) * 4);
      }
    }
  }
  pUVar3 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)collider,(MethodInfo *)0x0);
  __this = (UnityEngine_MeshCollider_o *)0x0;
  UVar11 = UnityEngine_BoxCollider__get_center(collider,(MethodInfo *)0x0);
  __this_00 = collider;
  if (pUVar3 != (UnityEngine_Transform_o *)0x0) {
    UVar12.fields.y = fStack_74 + UVar11.fields.y;
    UVar12.fields.x = fStack_78 + UVar11.fields.x;
    UVar12.fields.z = fStack_88 + UVar11.fields.z;
    UVar11 = UnityEngine_Transform__TransformPoint(pUVar3,UVar12,(MethodInfo *)0x0);
    (position->fields).x = (float)(int)UVar11.fields._0_8_;
    (position->fields).y = (float)(int)((ulong)UVar11.fields._0_8_ >> 0x20);
    (position->fields).z = UVar11.fields.z;
    return;
  }
label_0249791c:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057a6927 == '\0') {
    __this_00 = (UnityEngine_BoxCollider_o *)&TypeInfo_Object;
    il2cpp_runtime_helper_023445d0();
    g_data_057a6927 = '\x01';
  }
  if (__this == (UnityEngine_MeshCollider_o *)0x0) {
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057a6928 == '\0') {
      il2cpp_runtime_helper_023445d0(&MethodInfo_Collider_GetComponent_Collider);
      g_data_057a6928 = '\x01';
    }
    pIVar4 = UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)__this_00,MethodInfo_Collider_GetComponent_Collider);
    ((UnityEngine_Component_o *)(__this_00 + 1))->monitor = pIVar4;
    il2cpp_runtime_helper_022b4080(&((UnityEngine_Component_o *)(__this_00 + 1))->monitor,pIVar4);
    return;
  }
  x = (UnityEngine_Object_o *)UnityEngine_MeshCollider__get_sharedMesh(__this,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar2 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 == '\0') {
    return;
  }
  UnityEngine_MeshCollider__get_convex(__this,(MethodInfo *)0x0);
  return;
}


// EZhex1991.EZSoftBone.EZSoftBoneUtility$$PointOutsideBox
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBoneUtility__PointOutsideBox (UnityEngine_Vector3_o* position, UnityEngine_Vector3_o boxSize, const MethodInfo* method);
// 0x249a5b0

void EZhex1991_EZSoftBone_EZSoftBoneUtility__PointOutsideBox_239a5b0
               (UnityEngine_Vector3_o *position,UnityEngine_Vector3_o boxSize,MethodInfo *method)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  fVar6 = boxSize.fields.z;
  uVar2 = (position->fields).x;
  uVar3 = (position->fields).y;
  fVar1 = (position->fields).z;
  fVar8 = ABS(fVar1);
  fVar4 = boxSize.fields.x;
  if (ABS((float)uVar2) < fVar4) {
    fVar5 = boxSize.fields.y;
    if ((ABS((float)uVar3) < fVar5) && (fVar8 < fVar6)) {
      fVar9 = ABS(ABS((float)uVar3) - fVar5);
      fVar7 = ABS(ABS((float)uVar2) - fVar4);
      fVar8 = ABS(fVar8 - fVar6);
      if (fVar9 <= fVar7) {
        if (fVar9 < fVar8) {
          (position->fields).y = fVar5 * *(float *)(&g_data_00d1d580 + (ulong)(0.0 <= (position->fields).y) * 4);
          return;
        }
      }
      else if (fVar7 < fVar8) {
        (position->fields).x = fVar4 * *(float *)(&g_data_00d1d580 + (ulong)(0.0 <= (float)uVar2) * 4);
        return;
      }
      (position->fields).z = fVar6 * *(float *)(&g_data_00d1d580 + (ulong)(0.0 <= fVar1) * 4);
    }
  }
  return;
}


// EZhex1991.EZSoftBone.EZSoftBoneUtility$$PointInsideBox
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBoneUtility__PointInsideBox (UnityEngine_Vector3_o* position, UnityEngine_BoxCollider_o* collider, float spacing, const MethodInfo* method);
// 0x24973c0

void EZhex1991_EZSoftBone_EZSoftBoneUtility__PointInsideBox
               (UnityEngine_Vector3_o *position,UnityEngine_BoxCollider_o *collider,float spacing,
               MethodInfo *method)

{
  undefined8 uVar1;
  bool_conflict bVar2;
  UnityEngine_Transform_o *pUVar3;
  UnityEngine_Object_o *x;
  Il2CppObject *pIVar4;
  UnityEngine_BoxCollider_o *__this;
  UnityEngine_MeshCollider_o *__this_00;
  UnityEngine_BoxCollider_o *pUVar5;
  UnityEngine_Component_o *__this_01;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  UnityEngine_Vector3_o UVar12;
  UnityEngine_Vector3_o UVar13;
  UnityEngine_Vector3_o UVar14;
  UnityEngine_Vector3_o vector;
  float local_110;
  float local_100;
  float fStack_fc;
  float local_f0;
  float fStack_ec;
  float local_d0;
  float fStack_cc;
  float local_c0;
  float fStack_bc;
  float local_88;
  float local_78;
  float fStack_74;
  float local_68;
  float fStack_64;
  float local_48;
  float fStack_44;
  
  __this = collider;
  pUVar5 = (UnityEngine_BoxCollider_o *)position;
  if (collider != (UnityEngine_BoxCollider_o *)0x0) {
    __this = (UnityEngine_BoxCollider_o *)0x0;
    pUVar5 = collider;
    pUVar3 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)collider,(MethodInfo *)0x0);
    if (pUVar3 != (UnityEngine_Transform_o *)0x0) {
      UVar12 = UnityEngine_Transform__InverseTransformPoint(pUVar3,position->fields,(MethodInfo *)0x0);
      UVar13 = UnityEngine_BoxCollider__get_center(collider,(MethodInfo *)0x0);
      UVar14 = UnityEngine_BoxCollider__get_size(collider,(MethodInfo *)0x0);
      __this = (UnityEngine_BoxCollider_o *)0x0;
      pUVar5 = collider;
      pUVar3 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)collider,(MethodInfo *)0x0);
      if (g_data_057a6932 == '\0') {
        pUVar5 = (UnityEngine_BoxCollider_o *)&TypeInfo_Vector3;
        il2cpp_runtime_helper_023445d0();
        g_data_057a6932 = '\x01';
      }
      if (pUVar3 != (UnityEngine_Transform_o *)0x0) {
        local_78 = UVar12.fields.x;
        fStack_74 = UVar12.fields.y;
        local_68 = UVar13.fields.x;
        fStack_64 = UVar13.fields.y;
        local_78 = local_78 - local_68;
        fStack_74 = fStack_74 - fStack_64;
        local_48 = UVar14.fields.x;
        fStack_44 = UVar14.fields.y;
        local_88 = UVar12.fields.z - UVar13.fields.z;
        fVar6 = ABS(UVar14.fields.z) * 0.5;
        uVar1 = *(undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0xc);
        UVar12.fields.x = spacing * (float)uVar1;
        UVar12.fields.y = spacing * (float)((ulong)uVar1 >> 0x20);
        UVar12.fields.z = spacing * *(float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x14);
        UVar12 = UnityEngine_Transform__InverseTransformVector(pUVar3,UVar12,(MethodInfo *)0x0);
        fVar7 = ABS(local_48) * 0.5 - ABS(UVar12.fields.x);
        fVar11 = ABS(fStack_44) * 0.5 - ABS(UVar12.fields.y);
        if (fVar7 < ABS(local_78)) {
          local_78 = fVar7 * *(float *)(&g_data_00d1d580 + (ulong)(0.0 <= local_78) * 4);
        }
        if (fVar11 < ABS(fStack_74)) {
          fStack_74 = fVar11 * *(float *)(&g_data_00d1d580 + (ulong)(0.0 <= fStack_74) * 4);
        }
        if (fVar6 - ABS(UVar12.fields.z) < ABS(local_88)) {
          local_88 = (fVar6 - ABS(UVar12.fields.z)) * *(float *)(&g_data_00d1d580 + (ulong)(0.0 <= local_88) * 4)
          ;
        }
        pUVar3 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)collider,(MethodInfo *)0x0);
        __this = (UnityEngine_BoxCollider_o *)0x0;
        UVar12 = UnityEngine_BoxCollider__get_center(collider,(MethodInfo *)0x0);
        pUVar5 = collider;
        if (pUVar3 != (UnityEngine_Transform_o *)0x0) {
          UVar13.fields.y = fStack_74 + UVar12.fields.y;
          UVar13.fields.x = local_78 + UVar12.fields.x;
          UVar13.fields.z = local_88 + UVar12.fields.z;
          UVar12 = UnityEngine_Transform__TransformPoint(pUVar3,UVar13,(MethodInfo *)0x0);
          (position->fields).x = (float)(int)UVar12.fields._0_8_;
          (position->fields).y = (float)(int)((ulong)UVar12.fields._0_8_ >> 0x20);
          (position->fields).z = UVar12.fields.z;
          return;
        }
      }
    }
  }
  fVar6 = (float)il2cpp_runtime_helper_022b2c90();
  __this_00 = (UnityEngine_MeshCollider_o *)0x0;
  __this_01 = (UnityEngine_Component_o *)pUVar5;
  if (__this == (UnityEngine_BoxCollider_o *)0x0) goto label_0249791c;
  __this_00 = (UnityEngine_MeshCollider_o *)0x0;
  __this_01 = (UnityEngine_Component_o *)__this;
  pUVar3 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (pUVar3 == (UnityEngine_Transform_o *)0x0) goto label_0249791c;
  UVar12 = UnityEngine_Transform__InverseTransformPoint
                     (pUVar3,*(UnityEngine_Vector3_Fields *)pUVar5,(MethodInfo *)0x0);
  UVar13 = UnityEngine_BoxCollider__get_center(__this,(MethodInfo *)0x0);
  UVar14 = UnityEngine_BoxCollider__get_size(__this,(MethodInfo *)0x0);
  __this_00 = (UnityEngine_MeshCollider_o *)0x0;
  __this_01 = (UnityEngine_Component_o *)__this;
  pUVar3 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (g_data_057a6932 == '\0') {
    __this_01 = (UnityEngine_Component_o *)&TypeInfo_Vector3;
    il2cpp_runtime_helper_023445d0();
    g_data_057a6932 = '\x01';
  }
  if (pUVar3 == (UnityEngine_Transform_o *)0x0) goto label_0249791c;
  local_f0 = UVar12.fields.x;
  fStack_ec = UVar12.fields.y;
  local_c0 = UVar13.fields.x;
  fStack_bc = UVar13.fields.y;
  fStack_fc = fStack_ec - fStack_bc;
  local_100 = local_f0 - local_c0;
  local_110 = UVar12.fields.z - UVar13.fields.z;
  local_d0 = UVar14.fields.x;
  uVar1 = *(undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0xc);
  vector.fields.x = fVar6 * (float)uVar1;
  vector.fields.y = fVar6 * (float)((ulong)uVar1 >> 0x20);
  vector.fields.z = fVar6 * *(float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x14);
  UVar12 = UnityEngine_Transform__InverseTransformVector(pUVar3,vector,(MethodInfo *)0x0);
  fVar6 = ABS(UVar12.fields.x) + ABS(local_d0) * 0.5;
  fVar7 = ABS(UVar12.fields.z) + ABS(UVar14.fields.z) * 0.5;
  if ((ABS(local_100) < fVar6) && (ABS(local_110) < fVar7)) {
    fStack_cc = UVar14.fields.y;
    fVar11 = ABS(UVar12.fields.y) + ABS(fStack_cc) * 0.5;
    if (ABS(fStack_fc) < fVar11) {
      fVar10 = ABS(ABS(fStack_fc) - fVar11);
      fVar8 = ABS(ABS(local_100) - fVar6);
      fVar9 = ABS(ABS(local_110) - fVar7);
      if (fVar10 <= fVar8) {
        if (fVar9 <= fVar10) goto label_024978fc;
        fStack_fc = fVar11 * *(float *)(&g_data_00d1d580 + (ulong)(0.0 <= fStack_fc) * 4);
      }
      else if (fVar9 <= fVar8) {
label_024978fc:
        local_110 = fVar7 * *(float *)(&g_data_00d1d580 + (ulong)(0.0 <= local_110) * 4);
      }
      else {
        local_100 = fVar6 * *(float *)(&g_data_00d1d580 + (ulong)(0.0 <= local_100) * 4);
      }
    }
  }
  pUVar3 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  __this_00 = (UnityEngine_MeshCollider_o *)0x0;
  UVar12 = UnityEngine_BoxCollider__get_center(__this,(MethodInfo *)0x0);
  __this_01 = (UnityEngine_Component_o *)__this;
  if (pUVar3 != (UnityEngine_Transform_o *)0x0) {
    UVar14.fields.y = fStack_fc + UVar12.fields.y;
    UVar14.fields.x = local_100 + UVar12.fields.x;
    UVar14.fields.z = local_110 + UVar12.fields.z;
    UVar12 = UnityEngine_Transform__TransformPoint(pUVar3,UVar14,(MethodInfo *)0x0);
    pUVar5->klass = UVar12.fields._0_8_;
    *(float *)&pUVar5->monitor = UVar12.fields.z;
    return;
  }
label_0249791c:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057a6927 == '\0') {
    __this_01 = (UnityEngine_Component_o *)&TypeInfo_Object;
    il2cpp_runtime_helper_023445d0();
    g_data_057a6927 = '\x01';
  }
  if (__this_00 == (UnityEngine_MeshCollider_o *)0x0) {
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057a6928 == '\0') {
      il2cpp_runtime_helper_023445d0(&MethodInfo_Collider_GetComponent_Collider);
      g_data_057a6928 = '\x01';
    }
    pIVar4 = UnityEngine_Component__GetComponent_object_(__this_01,MethodInfo_Collider_GetComponent_Collider);
    __this_01[1].monitor = pIVar4;
    il2cpp_runtime_helper_022b4080(&__this_01[1].monitor,pIVar4);
    return;
  }
  x = (UnityEngine_Object_o *)UnityEngine_MeshCollider__get_sharedMesh(__this_00,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar2 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 == '\0') {
    return;
  }
  UnityEngine_MeshCollider__get_convex(__this_00,(MethodInfo *)0x0);
  return;
}


// EZhex1991.EZSoftBone.EZSoftBoneUtility$$PointInsideBox
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBoneUtility__PointInsideBox (UnityEngine_Vector3_o* position, UnityEngine_Vector3_o boxSize, const MethodInfo* method);
// 0x249a690

void EZhex1991_EZSoftBone_EZSoftBoneUtility__PointInsideBox_239a690
               (UnityEngine_Vector3_o *position,UnityEngine_Vector3_o boxSize,MethodInfo *method)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar2 = (position->fields).x;
  uVar3 = (position->fields).y;
  fVar1 = (position->fields).z;
  if (boxSize.fields.x < ABS((float)uVar2)) {
    (position->fields).x = *(float *)(&g_data_00d1d580 + (ulong)(0.0 <= (float)uVar2) * 4) * boxSize.fields.x;
  }
  if (boxSize.fields.y < ABS((float)uVar3)) {
    (position->fields).y =
         boxSize.fields.y * *(float *)(&g_data_00d1d580 + (ulong)(0.0 <= (position->fields).y) * 4);
  }
  if (boxSize.fields.z < ABS(fVar1)) {
    (position->fields).z = boxSize.fields.z * *(float *)(&g_data_00d1d580 + (ulong)(0.0 <= fVar1) * 4);
    return;
  }
  return;
}


// EZhex1991.EZSoftBone.EZSoftBoneUtility$$PointOutsideCollider
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBoneUtility__PointOutsideCollider (UnityEngine_Vector3_o* position, UnityEngine_Collider_o* collider, float spacing, const MethodInfo* method);
// 0x2495a30

void EZhex1991_EZSoftBone_EZSoftBoneUtility__PointOutsideCollider
               (UnityEngine_Vector3_o *position,UnityEngine_Collider_o *collider,float spacing,
               MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  UnityEngine_Transform_o *__this;
  long lVar11;
  UnityEngine_Object_o *x;
  undefined1 auVar12 [16];
  bool_conflict bVar13;
  Il2CppObject *pIVar14;
  EZhex1991_EZSoftBone_EZSoftBone_Bone_o *__this_00;
  MethodInfo *in_RCX;
  int startDepth;
  int index;
  uint uVar15;
  UnityEngine_Collider_o *pUVar16;
  UnityEngine_Vector3_o *pUVar17;
  UnityEngine_Transform_o *pUVar18;
  System_Collections_Generic_List_object__o *pSVar19;
  float fVar20;
  float extraout_XMM0_Dc;
  undefined4 uVar21;
  undefined4 extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dc_01;
  float extraout_XMM0_Dd;
  undefined4 uVar22;
  undefined4 extraout_XMM0_Dd_00;
  undefined4 extraout_XMM0_Dd_01;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined8 uVar26;
  undefined1 auVar27 [16];
  UnityEngine_Quaternion_o UVar29;
  UnityEngine_Quaternion_o UVar30;
  UnityEngine_Quaternion_o UVar31;
  UnityEngine_Color_o color;
  UnityEngine_Vector3_o UVar32;
  UnityEngine_Vector3_o start;
  UnityEngine_Vector3_o UVar33;
  UnityEngine_Vector3_o vector;
  UnityEngine_Vector3_o vector_00;
  UnityEngine_Vector3_o fromDirection;
  UnityEngine_Vector3_o end;
  float fStack_130;
  float fStack_12c;
  float fStack_120;
  float fStack_11c;
  float fStack_f0;
  float fStack_ec;
  undefined1 local_88 [8];
  float fStack_80;
  float fStack_7c;
  float local_68;
  float fStack_64;
  UnityEngine_Bounds_o local_50;
  undefined1 local_38 [16];
  undefined1 local_28 [8];
  undefined8 uStack_20;
  undefined1 auVar28 [16];
  
  pUVar16 = collider;
  pUVar17 = position;
  if (g_data_057a692f == '\0') {
    pUVar17 = (UnityEngine_Vector3_o *)&TypeInfo_Debug;
    il2cpp_runtime_helper_023445d0();
    g_data_057a692f = '\x01';
  }
  uVar15 = (uint)pUVar16;
  if (collider == (UnityEngine_Collider_o *)0x0) {
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057a6922 == '\0') {
      il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
      il2cpp_runtime_helper_023445d0(&MethodInfo_EZSoftBone_Bone_get_Item);
      il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
      g_data_057a6922 = '\x01';
    }
    if (startDepth < (int)pUVar17[0xd].fields.x) {
      pSVar19 = *(System_Collections_Generic_List_object__o **)&pUVar17[8].fields.z;
      if (pSVar19 == (System_Collections_Generic_List_object__o *)0x0) goto label_0249643d;
      if ((pSVar19->fields)._size == 1) {
        pIVar14 = System_Collections_Generic_List_object___get_Item(pSVar19,0,MethodInfo_EZSoftBone_Bone_get_Item);
        pUVar18 = *(UnityEngine_Transform_o **)&pUVar17[9].fields.y;
        if (((pUVar18 == (UnityEngine_Transform_o *)0x0) ||
            (UVar29 = UnityEngine_Transform__get_rotation(pUVar18,(MethodInfo *)0x0),
            pIVar14 == (Il2CppObject *)0x0)) ||
           (__this = *(UnityEngine_Transform_o **)&pUVar17[9].fields.y,
           __this == (UnityEngine_Transform_o *)0x0)) goto label_0249643d;
        uVar2 = pUVar17[10].fields.x;
        uVar7 = pUVar17[10].fields.y;
        UVar32.fields.x = SUB84(pIVar14[7].monitor,0) - (float)uVar2;
        UVar32.fields.y = (float)((ulong)pIVar14[7].monitor >> 0x20) - (float)uVar7;
        UVar32.fields.z = *(float *)&pIVar14[8].klass - pUVar17[10].fields.z;
        UVar33.fields = *(UnityEngine_Vector3_Fields *)&pIVar14[1].monitor;
        UVar32 = UnityEngine_Transform__InverseTransformVector(__this,UVar32,(MethodInfo *)0x0);
        UVar30 = UnityEngine_Quaternion__FromToRotation(UVar33,UVar32,(MethodInfo *)0x0);
        UVar33.fields.y = UVar30.fields.z;
        UVar33.fields.z = UVar30.fields.w;
        fVar20 = UVar30.fields.x;
        UVar33.fields.x = UVar30.fields.y;
        fStack_130 = UVar29.fields.z;
        fStack_12c = UVar29.fields.w;
        fStack_120 = UVar29.fields.x;
        fStack_11c = UVar29.fields.y;
        UVar29.fields.y =
             (fStack_130 * fVar20 + fStack_11c * UVar33.fields.z + fStack_12c * UVar33.fields.x) -
             UVar33.fields.y * fStack_120;
        UVar29.fields.x =
             (fStack_11c * UVar33.fields.y + fStack_120 * UVar33.fields.z + fStack_12c * fVar20) -
             UVar33.fields.x * fStack_130;
        UVar29.fields.w =
             ((UVar33.fields.z * fStack_12c - fVar20 * fStack_120) - UVar33.fields.x * fStack_11c) -
             UVar33.fields.y * fStack_130;
        UVar29.fields.z =
             (fStack_120 * UVar33.fields.x + fStack_130 * UVar33.fields.z + fStack_12c * UVar33.fields.y) -
             fStack_11c * fVar20;
        UnityEngine_Transform__set_rotation(pUVar18,UVar29,(MethodInfo *)0x0);
        if ((char)uVar15 != '\0') {
          in_RCX = *(MethodInfo **)&pUVar17[4].fields.z;
          lVar11 = *(long *)&pUVar17[6].fields.z;
          if (in_RCX == (MethodInfo *)0x0) {
            if (lVar11 != 0) {
              pUVar18 = *(UnityEngine_Transform_o **)&pUVar17[9].fields.y;
              if (pUVar18 == (UnityEngine_Transform_o *)0x0) goto label_0249643d;
              uVar5 = pUVar17[10].fields.x;
              uVar10 = pUVar17[10].fields.y;
              UVar33.fields.x = (float)*(undefined8 *)(lVar11 + 0x78) - (float)uVar5;
              UVar33.fields.y = (float)((ulong)*(undefined8 *)(lVar11 + 0x78) >> 0x20) - (float)uVar10;
              UVar33.fields.z = *(float *)(lVar11 + 0x80) - pUVar17[10].fields.z;
              fVar20 = pUVar17[8].fields.x;
              uVar26._0_4_ = pUVar17[7].fields.y;
              uVar26._4_4_ = pUVar17[7].fields.z;
              goto label_02496261;
            }
          }
          else {
            uVar26._0_4_ = pUVar17[5].fields.y;
            uVar26._4_4_ = pUVar17[5].fields.z;
            fVar20 = pUVar17[6].fields.x;
            UVar32.fields = *(UnityEngine_Vector3_Fields *)&pUVar17[5].fields.y;
            pUVar18 = *(UnityEngine_Transform_o **)&pUVar17[9].fields.y;
            uVar3 = pUVar17[10].fields.x;
            uVar8 = pUVar17[10].fields.y;
            UVar33.fields.x = SUB84(in_RCX[1].klass,0) - (float)uVar3;
            UVar33.fields.y = (float)((ulong)in_RCX[1].klass >> 0x20) - (float)uVar8;
            UVar33.fields.z = *(float *)&in_RCX[1].return_type - pUVar17[10].fields.z;
            if (lVar11 == 0) {
              if (pUVar18 == (UnityEngine_Transform_o *)0x0) goto label_0249643d;
label_02496261:
              vector_00.fields.y = UVar33.fields.y;
              vector_00.fields.x = UVar33.fields.x;
              vector_00.fields.z = UVar33.fields.z;
              UVar33 = UnityEngine_Transform__InverseTransformVector(pUVar18,vector_00,(MethodInfo *)0x0);
              fromDirection.fields.z = fVar20;
              fromDirection.fields.x = (float)(int)uVar26;
              fromDirection.fields.y = (float)(int)((ulong)uVar26 >> 0x20);
              UVar29 = UnityEngine_Quaternion__FromToRotation(fromDirection,UVar33,(MethodInfo *)0x0);
              pUVar18 = *(UnityEngine_Transform_o **)&pUVar17[9].fields.y;
              if (pUVar18 == (UnityEngine_Transform_o *)0x0) goto label_0249643d;
              UVar30 = UnityEngine_Transform__get_rotation(pUVar18,(MethodInfo *)0x0);
              fVar23 = UVar30.fields.z;
              fVar24 = UVar30.fields.w;
              fVar20 = UVar30.fields.x;
              UVar33.fields.y = UVar30.fields.y;
              fStack_130 = UVar29.fields.z;
              fStack_12c = UVar29.fields.w;
              fStack_120 = UVar29.fields.x;
              fStack_11c = UVar29.fields.y;
              UVar33.fields.x =
                   (fStack_130 * UVar33.fields.y + fStack_12c * fVar20 + fStack_120 * fVar24) -
                   fVar23 * fStack_11c;
              UVar33.fields.z =
                   (fStack_120 * fVar23 + fStack_12c * UVar33.fields.y + fStack_11c * fVar24) -
                   fVar20 * fStack_130;
              fVar25 = (fStack_11c * fVar20 + fStack_12c * fVar23 + fStack_130 * fVar24) -
                       fStack_120 * UVar33.fields.y;
              fVar20 = ((fStack_12c * fVar24 - fVar20 * fStack_120) - fStack_11c * UVar33.fields.y) -
                       fVar23 * fStack_130;
            }
            else {
              if (pUVar18 == (UnityEngine_Transform_o *)0x0) goto label_0249643d;
              UVar33 = UnityEngine_Transform__InverseTransformVector(pUVar18,UVar33,(MethodInfo *)0x0);
              UVar29 = UnityEngine_Quaternion__FromToRotation(UVar32,UVar33,(MethodInfo *)0x0);
              lVar11 = *(long *)&pUVar17[6].fields.z;
              if ((lVar11 == 0) ||
                 (pUVar18 = *(UnityEngine_Transform_o **)&pUVar17[9].fields.y,
                 pUVar18 == (UnityEngine_Transform_o *)0x0)) goto label_0249643d;
              UVar33.fields = *(UnityEngine_Vector3_Fields *)&pUVar17[7].fields.y;
              uVar4 = pUVar17[10].fields.x;
              uVar9 = pUVar17[10].fields.y;
              vector.fields.x = (float)*(undefined8 *)(lVar11 + 0x78) - (float)uVar4;
              vector.fields.y = (float)((ulong)*(undefined8 *)(lVar11 + 0x78) >> 0x20) - (float)uVar9;
              vector.fields.z = *(float *)(lVar11 + 0x80) - pUVar17[10].fields.z;
              UVar32 = UnityEngine_Transform__InverseTransformVector(pUVar18,vector,(MethodInfo *)0x0);
              UVar30 = UnityEngine_Quaternion__FromToRotation(UVar33,UVar32,(MethodInfo *)0x0);
              pUVar18 = *(UnityEngine_Transform_o **)&pUVar17[9].fields.y;
              if (pUVar18 == (UnityEngine_Transform_o *)0x0) goto label_0249643d;
              UVar31 = UnityEngine_Transform__get_rotation(pUVar18,(MethodInfo *)0x0);
              UVar29 = UnityEngine_Quaternion__Lerp(UVar29,UVar30,0.5,(MethodInfo *)0x0);
              fVar23 = UVar29.fields.z;
              fVar24 = UVar29.fields.w;
              fVar20 = UVar29.fields.x;
              UVar33.fields.y = UVar29.fields.y;
              fStack_f0 = UVar31.fields.z;
              fStack_ec = UVar31.fields.w;
              fStack_130 = UVar31.fields.x;
              fStack_12c = UVar31.fields.y;
              UVar33.fields.x =
                   (fStack_130 * fVar24 + fStack_ec * fVar20 + fVar23 * fStack_12c) -
                   UVar33.fields.y * fStack_f0;
              UVar33.fields.z =
                   (fStack_12c * fVar24 + fStack_ec * UVar33.fields.y + fVar20 * fStack_f0) -
                   fVar23 * fStack_130;
              fVar25 = (fStack_f0 * fVar24 + fStack_ec * fVar23 + fStack_130 * UVar33.fields.y) -
                       fStack_12c * fVar20;
              fVar20 = ((fVar24 * fStack_ec - fStack_130 * fVar20) - UVar33.fields.y * fStack_12c) -
                       fStack_f0 * fVar23;
            }
            UVar30.fields.y = UVar33.fields.z;
            UVar30.fields.x = UVar33.fields.x;
            UVar30.fields.w = fVar20;
            UVar30.fields.z = fVar25;
            UnityEngine_Transform__set_rotation(pUVar18,UVar30,(MethodInfo *)0x0);
          }
        }
      }
      pUVar18 = *(UnityEngine_Transform_o **)&pUVar17[9].fields.y;
      if (pUVar18 == (UnityEngine_Transform_o *)0x0) goto label_0249643d;
      UnityEngine_Transform__set_position(pUVar18,(UnityEngine_Vector3_o)pUVar17[10].fields,(MethodInfo *)0x0)
      ;
    }
    x = *(UnityEngine_Object_o **)&pUVar17[0xb].fields.y;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar13 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar13 != '\0') {
      pUVar18 = *(UnityEngine_Transform_o **)&pUVar17[0xb].fields.y;
      if (pUVar18 == (UnityEngine_Transform_o *)0x0) goto label_0249643d;
      UVar33 = UnityEngine_Transform__InverseTransformPoint(pUVar18,pUVar17[10].fields,(MethodInfo *)0x0);
      pUVar17[0xc].fields.x = (float)(int)UVar33.fields._0_8_;
      pUVar17[0xc].fields.y = (float)(int)((ulong)UVar33.fields._0_8_ >> 0x20);
      pUVar17[0xc].fields.z = UVar33.fields.z;
    }
    pSVar19 = *(System_Collections_Generic_List_object__o **)&pUVar17[8].fields.z;
    if (pSVar19 != (System_Collections_Generic_List_object__o *)0x0) {
      index = 0;
      do {
        if ((pSVar19->fields)._size <= index) {
          return;
        }
        __this_00 = (EZhex1991_EZSoftBone_EZSoftBone_Bone_o *)
                    System_Collections_Generic_List_object___get_Item(pSVar19,index,MethodInfo_EZSoftBone_Bone_get_Item);
        if (__this_00 == (EZhex1991_EZSoftBone_EZSoftBone_Bone_o *)0x0) break;
        EZhex1991_EZSoftBone_EZSoftBone_Bone__UpdateTransform(__this_00,uVar15 & 0xff,startDepth,in_RCX);
        index = index + 1;
        pSVar19 = *(System_Collections_Generic_List_object__o **)&pUVar17[8].fields.z;
      } while (pSVar19 != (System_Collections_Generic_List_object__o *)0x0);
    }
label_0249643d:
    il2cpp_runtime_helper_022b2c90();
    return;
  }
  UVar32 = UnityEngine_Collider__ClosestPoint(collider,position->fields,(MethodInfo *)0x0);
  UVar33.fields.y = UVar32.fields.z;
  uVar1 = (position->fields).x;
  uVar6 = (position->fields).y;
  fVar20 = (position->fields).z;
  local_38._8_4_ = extraout_XMM0_Dc;
  local_38._0_8_ = UVar32.fields._0_8_;
  local_38._12_4_ = extraout_XMM0_Dd;
  local_88._0_4_ = (float)uVar1 - UVar32.fields.x;
  local_88._4_4_ = (float)uVar6 - UVar32.fields.y;
  UVar33.fields.z = fVar20 - UVar33.fields.y;
  fStack_80 = 0.0 - extraout_XMM0_Dc;
  fStack_7c = 0.0 - extraout_XMM0_Dd;
  UVar33.fields.x =
       UVar33.fields.z * UVar33.fields.z +
       (float)local_88._4_4_ * (float)local_88._4_4_ + (float)local_88._0_4_ * (float)local_88._0_4_;
  if (9.9999994e-11 <= UVar33.fields.x) {
    if (g_data_057a6841 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
      g_data_057a6841 = '\x01';
      if (*(int *)(TypeInfo_Math + 0xe4) == 0) goto label_02495cf5;
label_02495c2f:
      if (0.0 <= UVar33.fields.x) goto label_02495c3b;
label_02495d0c:
      fVar20 = sqrtf(UVar33.fields.x);
    }
    else {
      if (*(int *)(TypeInfo_Math + 0xe4) != 0) goto label_02495c2f;
label_02495cf5:
      il2cpp_runtime_helper_02337ed0();
      if (UVar33.fields.x < 0.0) goto label_02495d0c;
label_02495c3b:
      fVar20 = SQRT(UVar33.fields.x);
    }
    if (spacing <= fVar20) {
      return;
    }
    if (g_data_057a6845 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
      g_data_057a6845 = '\x01';
      if (*(int *)(TypeInfo_Math + 0xe4) == 0) goto label_02495d5d;
label_02495c6e:
      if (0.0 <= UVar33.fields.x) goto label_02495c7a;
label_02495d74:
      UVar33.fields.x = sqrtf(UVar33.fields.x);
      uVar21 = extraout_XMM0_Dc_01;
      uVar22 = extraout_XMM0_Dd_01;
    }
    else {
      if (*(int *)(TypeInfo_Math + 0xe4) != 0) goto label_02495c6e;
label_02495d5d:
      il2cpp_runtime_helper_02337ed0();
      if (UVar33.fields.x < 0.0) goto label_02495d74;
label_02495c7a:
      uVar21 = 0;
      uVar22 = 0;
      UVar33.fields.x = SQRT(UVar33.fields.x);
    }
    if (1e-05 < UVar33.fields.x) {
      fVar20 = UVar33.fields.z / UVar33.fields.x;
      auVar28._4_4_ = UVar33.fields.x;
      auVar28._0_4_ = UVar33.fields.x;
      auVar28._8_4_ = uVar21;
      auVar28._12_4_ = uVar22;
      auVar28 = divps(_local_88,auVar28);
      uVar26 = auVar28._0_8_;
      goto label_02495dd3;
    }
  }
  else {
    UnityEngine_Collider__get_bounds(&local_50,collider,(MethodInfo *)0x0);
    uVar26 = local_50.fields.m_Center.fields._0_8_;
    fVar20 = fVar20 - local_50.fields.m_Center.fields.z;
    UnityEngine_Collider__get_bounds(&local_50,collider,(MethodInfo *)0x0);
    UVar33.fields.x = local_50.fields.m_Center.fields.x;
    UVar33.fields.z = local_50.fields.m_Center.fields.y;
    if (*(int *)(TypeInfo_Debug + 0xe4) == 0) {
      local_28._0_4_ = local_50.fields.m_Center.fields.x;
      local_28._4_4_ = local_50.fields.m_Center.fields.y;
      uStack_20 = 0;
      il2cpp_runtime_helper_02337ed0();
      UVar33.fields.x = (float)local_28._0_4_;
      UVar33.fields.z = (float)local_28._4_4_;
    }
    auVar28 = local_38;
    color.fields.b = 0.0;
    color.fields.a = 1.0;
    color.fields.r = 1.0;
    color.fields.g = 0.0;
    start.fields.y = UVar33.fields.z;
    start.fields.x = UVar33.fields.x;
    start.fields.z = local_50.fields.m_Center.fields.z;
    end.fields.z = UVar33.fields.y;
    end.fields.x = (float)local_38._0_4_;
    end.fields.y = (float)local_38._4_4_;
    local_38 = auVar28;
    UnityEngine_Debug__DrawLine(start,end,color,(MethodInfo *)0x0);
    if (g_data_057a6845 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
      g_data_057a6845 = '\x01';
    }
    local_68 = (float)uVar26;
    fStack_64 = SUB84(uVar26,4);
    auVar27._0_4_ = (float)uVar1 - local_68;
    auVar27._4_4_ = (float)uVar6 - fStack_64;
    auVar27._8_8_ = 0;
    if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    uVar21 = 0;
    uVar22 = 0;
    UVar33.fields.x = fVar20 * fVar20 + auVar27._4_4_ * auVar27._4_4_ + auVar27._0_4_ * auVar27._0_4_;
    if (UVar33.fields.x < 0.0) {
      UVar33.fields.x = sqrtf(UVar33.fields.x);
      uVar21 = extraout_XMM0_Dc_00;
      uVar22 = extraout_XMM0_Dd_00;
    }
    else {
      UVar33.fields.x = SQRT(UVar33.fields.x);
    }
    if (1e-05 < UVar33.fields.x) {
      fVar20 = fVar20 / UVar33.fields.x;
      auVar12._4_4_ = UVar33.fields.x;
      auVar12._0_4_ = UVar33.fields.x;
      auVar12._8_4_ = uVar21;
      auVar12._12_4_ = uVar22;
      auVar28 = divps(auVar27,auVar12);
      uVar26 = auVar28._0_8_;
      goto label_02495dd3;
    }
  }
  if (g_data_057a65d5 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
    g_data_057a65d5 = '\x01';
  }
  uVar26 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
  fVar20 = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
label_02495dd3:
  (position->fields).x = (float)uVar26 * spacing + (float)local_38._0_4_;
  (position->fields).y = (float)local_38._4_4_ + (float)((ulong)uVar26 >> 0x20) * spacing;
  (position->fields).z = UVar33.fields.y + fVar20 * spacing;
  return;
}


// EZhex1991.EZSoftBone.EZSoftBoneUtility$$DrawGizmosArrow
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBoneUtility__DrawGizmosArrow (UnityEngine_Vector3_o startPoint, UnityEngine_Vector3_o direction, float halfWidth, UnityEngine_Vector3_o normal, const MethodInfo* method);
// 0x249a740

void EZhex1991_EZSoftBone_EZSoftBoneUtility__DrawGizmosArrow
               (UnityEngine_Vector3_o startPoint,UnityEngine_Vector3_o direction,float halfWidth,
               UnityEngine_Vector3_o normal,MethodInfo *method)

{
  code *pcVar1;
  undefined1 auVar2 [16];
  uint uVar3;
  long lVar4;
  float *pfVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  float fVar9;
  float extraout_XMM0_Dc;
  float extraout_XMM0_Dd;
  float fVar10;
  float fVar11;
  float in_XMM2_Dc;
  float in_XMM2_Dd;
  float fVar12;
  float in_XMM3_Db;
  float fVar13;
  float fVar14;
  float fVar15;
  float in_XMM5_Dc;
  float in_XMM5_Dd;
  float fVar16;
  float fVar18;
  undefined1 auVar17 [16];
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  UnityEngine_Vector3_o to;
  UnityEngine_Vector3_o to_00;
  undefined8 local_a8;
  float local_78;
  float local_38;
  float fStack_34;
  
  fVar15 = direction.fields.z;
  fVar14 = direction.fields.y;
  fVar10 = startPoint.fields.z;
  if (g_data_057a6930 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
    g_data_057a6930 = '\x01';
  }
  local_78 = direction.fields.x;
  if (g_data_057a6845 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
    g_data_057a6845 = '\x01';
  }
  auVar17._0_4_ = normal.fields.z * fVar14 - normal.fields.y * fVar15;
  auVar17._4_4_ = fVar15 * normal.fields.x - local_78 * normal.fields.z;
  auVar17._8_4_ = normal._12_4_ * in_XMM2_Dc - in_XMM5_Dc * in_XMM3_Db;
  auVar17._12_4_ = in_XMM3_Db * in_XMM2_Dd - in_XMM5_Dd * normal._12_4_;
  fVar13 = normal.fields.y * local_78 - fVar14 * normal.fields.x;
  if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  fVar9 = fVar13 * fVar13 + auVar17._4_4_ * auVar17._4_4_ + auVar17._0_4_ * auVar17._0_4_;
  if (fVar9 < 0.0) {
    fVar9 = sqrtf(fVar9);
    in_XMM5_Dc = extraout_XMM0_Dc;
    in_XMM5_Dd = extraout_XMM0_Dd;
  }
  else {
    fVar9 = SQRT(fVar9);
  }
  if (1e-05 < fVar9) {
    fVar13 = fVar13 / fVar9;
    auVar2._4_4_ = fVar9;
    auVar2._0_4_ = fVar9;
    auVar2._8_4_ = in_XMM5_Dc;
    auVar2._12_4_ = in_XMM5_Dd;
    auVar17 = divps(auVar17,auVar2);
    local_a8 = auVar17._0_8_;
  }
  else {
    if (g_data_057a65d5 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
      g_data_057a65d5 = '\x01';
    }
    local_a8 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
    fVar13 = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
  }
  lVar6 = TypeInfo_Vector3;
  lVar4 = il2cpp_runtime_helper_022b2a40(TypeInfo_Vector3,8);
  if (lVar4 != 0) {
    uVar7 = *(ulong *)(lVar4 + 0x18);
    uVar3 = (uint)uVar7;
    local_38 = startPoint.fields.x;
    fStack_34 = startPoint.fields.y;
    if (uVar3 != 0) {
      fVar9 = (float)local_a8 * halfWidth * 0.5;
      fVar11 = local_a8._4_4_ * halfWidth * 0.5;
      fVar12 = fVar13 * halfWidth * 0.5;
      fVar20 = fVar9 + local_38;
      fVar21 = fVar11 + fStack_34;
      fVar22 = fVar12 + fVar10;
      *(ulong *)(lVar4 + 0x20) = CONCAT44(fVar21,fVar20);
      *(float *)(lVar4 + 0x28) = fVar22;
      if (uVar3 != 1) {
        fVar16 = local_78 * 0.5 + fVar20;
        fVar18 = fVar14 * 0.5 + fVar21;
        fVar19 = fVar15 * 0.5 + fVar22;
        *(ulong *)(lVar4 + 0x2c) = CONCAT44(fVar18,fVar16);
        *(float *)(lVar4 + 0x34) = fVar19;
        if (2 < uVar3) {
          *(ulong *)(lVar4 + 0x38) = CONCAT44(fVar18 + fVar11,fVar16 + fVar9);
          *(float *)(lVar4 + 0x40) = fVar19 + fVar12;
          if (uVar3 != 3) {
            *(ulong *)(lVar4 + 0x44) = CONCAT44(fVar14 + fStack_34,local_78 + local_38);
            *(float *)(lVar4 + 0x4c) = fVar15 + fVar10;
            if (4 < uVar3) {
              fVar16 = local_78 * 0.5 + (local_38 - (float)local_a8 * halfWidth);
              fVar14 = fVar14 * 0.5 + (fStack_34 - local_a8._4_4_ * halfWidth);
              fVar15 = fVar15 * 0.5 + (fVar10 - fVar13 * halfWidth);
              *(ulong *)(lVar4 + 0x50) = CONCAT44(fVar14,fVar16);
              *(float *)(lVar4 + 0x58) = fVar15;
              if (uVar3 != 5) {
                *(ulong *)(lVar4 + 0x5c) = CONCAT44(fVar14 + fVar11,fVar16 + fVar9);
                *(float *)(lVar4 + 100) = fVar15 + fVar12;
                if (6 < uVar3) {
                  *(ulong *)(lVar4 + 0x68) = CONCAT44(fStack_34 - fVar11,local_38 - fVar9);
                  *(float *)(lVar4 + 0x70) = fVar10 - fVar12;
                  if (uVar3 != 7) {
                    uVar8 = uVar7 & 0xffffffff;
                    *(ulong *)(lVar4 + 0x74) = CONCAT44(fVar21,fVar20);
                    *(float *)(lVar4 + 0x7c) = fVar22;
                    if (uVar7 << 0x20 != 0x100000000 && -1 < (long)((uVar7 << 0x20) + -0x100000000)) {
                      pfVar5 = (float *)(lVar4 + 0x34);
                      uVar7 = 0;
                      do {
                        if ((uVar8 <= uVar7) || (uVar7 = uVar7 + 1, uVar8 <= uVar7)) goto label_0249ab04;
                        lVar6 = 0;
                        to.fields.z = *pfVar5;
                        to.fields.x = pfVar5[-2];
                        to.fields.y = pfVar5[-1];
                        UnityEngine_Gizmos__DrawLine
                                  ((UnityEngine_Vector3_o)*(UnityEngine_Vector3_Fields *)(pfVar5 + -5),to,
                                   (MethodInfo *)0x0);
                        uVar8 = (ulong)*(uint *)(lVar4 + 0x18);
                        pfVar5 = pfVar5 + 3;
                      } while ((long)uVar7 < (long)((uVar8 << 0x20) + -0x100000000) >> 0x20);
                    }
                    return;
                  }
                }
              }
            }
          }
        }
      }
    }
label_0249ab04:
    il2cpp_runtime_helper_022b2ca0();
  }
  il2cpp_runtime_helper_022b2c90();
  if (lVar6 == 0) {
label_0249aba6:
    il2cpp_runtime_helper_022b2c90();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  uVar7 = (ulong)*(uint *)(lVar6 + 0x18);
  if (0 < (long)((uVar7 << 0x20) + -0x100000000)) {
    pfVar5 = (float *)(lVar6 + 0x34);
    uVar8 = 0;
    do {
      if ((uVar7 <= uVar8) || (uVar8 = uVar8 + 1, uVar7 <= uVar8)) {
        il2cpp_runtime_helper_022b2ca0();
        goto label_0249aba6;
      }
      to_00.fields.z = *pfVar5;
      to_00.fields.x = pfVar5[-2];
      to_00.fields.y = pfVar5[-1];
      UnityEngine_Gizmos__DrawLine
                ((UnityEngine_Vector3_o)*(UnityEngine_Vector3_Fields *)(pfVar5 + -5),to_00,(MethodInfo *)0x0);
      uVar7 = (ulong)*(uint *)(lVar6 + 0x18);
      pfVar5 = pfVar5 + 3;
    } while ((long)uVar8 < (long)((uVar7 << 0x20) + -0x100000000) >> 0x20);
  }
  return;
}


// EZhex1991.EZSoftBone.EZSoftBoneUtility$$DrawGizmosPolyLine
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBoneUtility__DrawGizmosPolyLine (UnityEngine_Vector3_array* vertices, const MethodInfo* method);
// 0x249ab10

void EZhex1991_EZSoftBone_EZSoftBoneUtility__DrawGizmosPolyLine
               (UnityEngine_Vector3_array *vertices,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  code *pcVar3;
  ulong uVar4;
  float *pfVar5;
  ulong uVar6;
  UnityEngine_Vector3_o to;
  
  if (vertices == (UnityEngine_Vector3_array *)0x0) {
label_0249aba6:
    il2cpp_runtime_helper_022b2c90();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  uVar4 = (ulong)(uint)vertices->max_length;
  if (0 < (long)((uVar4 << 0x20) + -0x100000000)) {
    pfVar5 = &vertices->m_Items[1].fields.z;
    uVar6 = 0;
    do {
      if ((uVar4 <= uVar6) || (uVar6 = uVar6 + 1, uVar4 <= uVar6)) {
        il2cpp_runtime_helper_022b2ca0();
        goto label_0249aba6;
      }
      uVar1 = ((UnityEngine_Vector3_Fields *)(pfVar5 + -2))->x;
      uVar2 = ((UnityEngine_Vector3_Fields *)(pfVar5 + -2))->y;
      to.fields.y = (float)uVar2;
      to.fields.x = (float)uVar1;
      to.fields.z = *pfVar5;
      UnityEngine_Gizmos__DrawLine
                ((UnityEngine_Vector3_o)*(UnityEngine_Vector3_Fields *)(pfVar5 + -5),to,(MethodInfo *)0x0);
      uVar4 = (ulong)(uint)vertices->max_length;
      pfVar5 = pfVar5 + 3;
    } while ((long)uVar6 < (long)((uVar4 << 0x20) + -0x100000000) >> 0x20);
  }
  return;
}


