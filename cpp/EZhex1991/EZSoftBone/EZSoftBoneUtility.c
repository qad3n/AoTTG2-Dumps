// Type: EZhex1991.EZSoftBone.EZSoftBoneUtility
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/EZhex1991.EZSoftBone/EZhex1991.EZSoftBone/EZSoftBoneUtility.cs
// Prior real C# source (REFERENCE, outdated): Assets/ThirdParty/EZhex1991/EZSoftBone/Runtime/EZSoftBoneUtility.cs  [prior source available (delta unverified)]
// --------------------------------

// EZhex1991.EZSoftBone.EZSoftBoneUtility$$Abs
// il2cpp: UnityEngine_Vector3_o EZhex1991_EZSoftBone_EZSoftBoneUtility__Abs (UnityEngine_Vector3_o v, const MethodInfo* method);
// 0x2456300

UnityEngine_Vector3_o
EZhex1991_EZSoftBone_EZSoftBoneUtility__Abs(UnityEngine_Vector3_o v,MethodInfo *method)

{
  UnityEngine_Vector3_o UVar1;
  
  UVar1.fields._0_8_ = v.fields._0_8_ & 0x7fffffff7fffffff;
  UVar1.fields.z = ABS(v.fields.z);
  return (UnityEngine_Vector3_o)UVar1.fields;
}


// EZhex1991.EZSoftBone.EZSoftBoneUtility$$Max
// il2cpp: float EZhex1991_EZSoftBone_EZSoftBoneUtility__Max (UnityEngine_Vector3_o v, const MethodInfo* method);
// 0x2456310

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
// 0x24578f0

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
// 0x245a4d0

void EZhex1991_EZSoftBone_EZSoftBoneUtility__GetCapsuleParams
               (UnityEngine_CapsuleCollider_o *collider,UnityEngine_Vector3_o *center0,
               UnityEngine_Vector3_o *center1,float *radius,MethodInfo *method)

{
  undefined8 uVar1;
  int32_t iVar2;
  UnityEngine_Transform_o *pUVar3;
  float *pfVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  UnityEngine_Vector3_o UVar9;
  
  if (collider == (UnityEngine_CapsuleCollider_o *)0x0) goto LAB_0245a6d0;
  pUVar3 = UnityEngine_Component__get_transform
                     ((UnityEngine_Component_o *)collider,(MethodInfo *)0x0);
  if (pUVar3 == (UnityEngine_Transform_o *)0x0) goto LAB_0245a6d0;
  UVar9 = UnityEngine_Transform__get_lossyScale(pUVar3,(MethodInfo *)0x0);
  fVar5 = ABS(UVar9.fields.x);
  fVar7 = ABS(UVar9.fields.y);
  fVar8 = ABS(UVar9.fields.z);
  fVar6 = UnityEngine_CapsuleCollider__get_radius(collider,(MethodInfo *)0x0);
  *radius = fVar6;
  UVar9 = UnityEngine_CapsuleCollider__get_center(collider,(MethodInfo *)0x0);
  uVar1 = UVar9.fields._0_8_;
  (center1->fields).x = (float)(int)uVar1;
  (center1->fields).y = (float)(int)((ulong)uVar1 >> 0x20);
  (center1->fields).z = UVar9.fields.z;
  (center0->fields).x = (float)(int)uVar1;
  (center0->fields).y = (float)(int)((ulong)uVar1 >> 0x20);
  (center0->fields).z = UVar9.fields.z;
  fVar6 = UnityEngine_CapsuleCollider__get_height(collider,(MethodInfo *)0x0);
  fVar6 = fVar6 * 0.5;
  iVar2 = UnityEngine_CapsuleCollider__get_direction(collider,(MethodInfo *)0x0);
  if (iVar2 == 2) {
    pfVar4 = &(center1->fields).z;
    if (fVar5 <= fVar7) {
      fVar5 = fVar7;
    }
    fVar7 = *radius;
    *radius = fVar5 * fVar7;
    fVar6 = fVar6 - (fVar5 * fVar7) / fVar8;
    fVar7 = 0.0;
    if (0.0 <= fVar6) {
      fVar7 = fVar6;
    }
    (center0->fields).z = (center0->fields).z - fVar7;
LAB_0245a660:
    *pfVar4 = fVar7 + *pfVar4;
  }
  else {
    if (iVar2 == 1) {
      if (fVar5 <= fVar8) {
        fVar5 = fVar8;
      }
      fVar8 = *radius;
      *radius = fVar5 * fVar8;
      fVar6 = fVar6 - (fVar5 * fVar8) / fVar7;
      fVar7 = 0.0;
      if (0.0 <= fVar6) {
        fVar7 = fVar6;
      }
      (center0->fields).y = (center0->fields).y - fVar7;
      pfVar4 = &(center1->fields).y;
      goto LAB_0245a660;
    }
    if (iVar2 == 0) {
      if (fVar7 <= fVar8) {
        fVar7 = fVar8;
      }
      fVar8 = *radius;
      *radius = fVar7 * fVar8;
      fVar6 = fVar6 - (fVar7 * fVar8) / fVar5;
      fVar7 = 0.0;
      if (0.0 <= fVar6) {
        fVar7 = fVar6;
      }
      (center0->fields).x = (center0->fields).x - fVar7;
      pfVar4 = (float *)center1;
      goto LAB_0245a660;
    }
  }
  pUVar3 = UnityEngine_Component__get_transform
                     ((UnityEngine_Component_o *)collider,(MethodInfo *)0x0);
  if (pUVar3 != (UnityEngine_Transform_o *)0x0) {
    UVar9 = UnityEngine_Transform__TransformPoint(pUVar3,center0->fields,(MethodInfo *)0x0);
    (center0->fields).x = (float)(int)UVar9.fields._0_8_;
    (center0->fields).y = (float)(int)((ulong)UVar9.fields._0_8_ >> 0x20);
    (center0->fields).z = UVar9.fields.z;
    pUVar3 = UnityEngine_Component__get_transform
                       ((UnityEngine_Component_o *)collider,(MethodInfo *)0x0);
    if (pUVar3 != (UnityEngine_Transform_o *)0x0) {
      UVar9 = UnityEngine_Transform__TransformPoint(pUVar3,center1->fields,(MethodInfo *)0x0);
      (center1->fields).x = (float)(int)UVar9.fields._0_8_;
      (center1->fields).y = (float)(int)((ulong)UVar9.fields._0_8_ >> 0x20);
      (center1->fields).z = UVar9.fields.z;
      return;
    }
  }
LAB_0245a6d0:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// EZhex1991.EZSoftBone.EZSoftBoneUtility$$GetCylinderParams
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBoneUtility__GetCylinderParams (UnityEngine_Transform_o* transform, UnityEngine_Vector3_o* center, UnityEngine_Vector3_o* direction, float* radius, float* height, const MethodInfo* method);
// 0x245a6e0

void EZhex1991_EZSoftBone_EZSoftBoneUtility__GetCylinderParams
               (UnityEngine_Transform_o *transform,UnityEngine_Vector3_o *center,
               UnityEngine_Vector3_o *direction,float *radius,float *height,MethodInfo *method)

{
  float fVar1;
  UnityEngine_Vector3_o UVar2;
  UnityEngine_Vector3_o UVar3;
  
  if (transform != (UnityEngine_Transform_o *)0x0) {
    UVar2 = UnityEngine_Transform__get_lossyScale(transform,(MethodInfo *)0x0);
    UVar3 = UnityEngine_Transform__get_position(transform,(MethodInfo *)0x0);
    (center->fields).x = (float)(int)UVar3.fields._0_8_;
    (center->fields).y = (float)(int)((ulong)UVar3.fields._0_8_ >> 0x20);
    (center->fields).z = UVar3.fields.z;
    UVar3 = UnityEngine_Transform__get_up(transform,(MethodInfo *)0x0);
    (direction->fields).x = (float)(int)UVar3.fields._0_8_;
    (direction->fields).y = (float)(int)((ulong)UVar3.fields._0_8_ >> 0x20);
    (direction->fields).z = UVar3.fields.z;
    fVar1 = ABS(UVar2.fields.x);
    if (ABS(UVar2.fields.x) <= ABS(UVar2.fields.z)) {
      fVar1 = ABS(UVar2.fields.z);
    }
    *radius = fVar1 * 0.5;
    *height = ABS(UVar2.fields.y);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// EZhex1991.EZSoftBone.EZSoftBoneUtility$$PointOutsideSphere
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBoneUtility__PointOutsideSphere (UnityEngine_Vector3_o* position, UnityEngine_SphereCollider_o* collider, float spacing, const MethodInfo* method);
// 0x2458e90

/* WARNING: Type propagation algorithm not settling */

void EZhex1991_EZSoftBone_EZSoftBoneUtility__PointOutsideSphere
               (UnityEngine_Vector3_o *position,UnityEngine_SphereCollider_o *collider,float spacing
               ,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  UnityEngine_Transform_o *pUVar4;
  float fVar5;
  float fVar6;
  float extraout_XMM0_Dc;
  undefined4 uVar7;
  undefined4 extraout_XMM0_Dc_00;
  float extraout_XMM0_Dd;
  undefined4 uVar8;
  undefined4 extraout_XMM0_Dd_00;
  undefined1 auVar10 [16];
  float fVar11;
  float fVar12;
  UnityEngine_Vector3_o UVar13;
  UnityEngine_Vector3_o position_00;
  undefined1 auStack_58 [8];
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  undefined8 uVar9;
  
  if ((collider != (UnityEngine_SphereCollider_o *)0x0) &&
     (pUVar4 = UnityEngine_Component__get_transform
                         ((UnityEngine_Component_o *)collider,(MethodInfo *)0x0),
     pUVar4 != (UnityEngine_Transform_o *)0x0)) {
    UVar13 = UnityEngine_Transform__get_lossyScale(pUVar4,(MethodInfo *)0x0);
    fVar5 = UnityEngine_SphereCollider__get_radius(collider,(MethodInfo *)0x0);
    pUVar4 = UnityEngine_Component__get_transform
                       ((UnityEngine_Component_o *)collider,(MethodInfo *)0x0);
    position_00 = UnityEngine_SphereCollider__get_center(collider,(MethodInfo *)0x0);
    if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
      fStack_48 = UVar13.fields.x;
      fStack_44 = UVar13.fields.y;
      fVar12 = ABS(fStack_44);
      if (ABS(fStack_44) <= ABS(UVar13.fields.z)) {
        fVar12 = ABS(UVar13.fields.z);
      }
      fVar11 = ABS(fStack_48);
      if (ABS(fStack_48) <= fVar12) {
        fVar11 = fVar12;
      }
      UVar13 = UnityEngine_Transform__TransformPoint(pUVar4,position_00,(MethodInfo *)0x0);
      uVar1 = (position->fields).x;
      uVar2 = (position->fields).y;
      fVar12 = (position->fields).z;
      if (DAT_056fde1c == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_Math);
        DAT_056fde1c = '\x01';
      }
      auStack_58._0_4_ = (float)uVar1 - UVar13.fields.x;
      auStack_58._4_4_ = (float)uVar2 - UVar13.fields.y;
      fVar12 = fVar12 - UVar13.fields.z;
      fStack_50 = 0.0 - extraout_XMM0_Dc;
      fStack_4c = 0.0 - extraout_XMM0_Dd;
      if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
        il2cpp_init_class();
      }
      fVar11 = fVar5 * fVar11 + spacing;
      fVar5 = fVar12 * fVar12 +
              (float)auStack_58._4_4_ * (float)auStack_58._4_4_ +
              (float)auStack_58._0_4_ * (float)auStack_58._0_4_;
      if (fVar5 < 0.0) {
        fVar6 = sqrtf(fVar5);
      }
      else {
        fVar6 = SQRT(fVar5);
      }
      if (fVar11 <= fVar6) {
        return;
      }
      if (DAT_056fde20 == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_Math);
        DAT_056fde20 = '\x01';
        iVar3 = *(int *)(TypeInfo_Math + 0xe4);
      }
      else {
        iVar3 = *(int *)(TypeInfo_Math + 0xe4);
      }
      if (iVar3 == 0) {
        il2cpp_init_class();
      }
      if (fVar5 < 0.0) {
        fVar5 = sqrtf(fVar5);
        uVar7 = extraout_XMM0_Dc_00;
        uVar8 = extraout_XMM0_Dd_00;
      }
      else {
        uVar7 = 0;
        uVar8 = 0;
        fVar5 = SQRT(fVar5);
      }
      if (fVar5 <= 1e-05) {
        if (DAT_056fdd15 == '\0') {
          il2cpp_init_method_metadata(&TypeInfo_Vector3);
          DAT_056fdd15 = '\x01';
        }
        uVar9 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
        fVar12 = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
      }
      else {
        fVar12 = fVar12 / fVar5;
        auVar10._4_4_ = fVar5;
        auVar10._0_4_ = fVar5;
        auVar10._8_4_ = uVar7;
        auVar10._12_4_ = uVar8;
        auVar10 = divps(_auStack_58,auVar10);
        uVar9 = auVar10._0_8_;
      }
      (position->fields).x = UVar13.fields.x + fVar11 * (float)uVar9;
      (position->fields).y = UVar13.fields.y + fVar11 * (float)((ulong)uVar9 >> 0x20);
      (position->fields).z = UVar13.fields.z + fVar12 * fVar11;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// EZhex1991.EZSoftBone.EZSoftBoneUtility$$PointOutsideSphere
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBoneUtility__PointOutsideSphere (UnityEngine_Vector3_o* position, UnityEngine_Vector3_o spherePosition, float radius, const MethodInfo* method);
// 0x245a790

void EZhex1991_EZSoftBone_EZSoftBoneUtility__PointOutsideSphere
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
  if (DAT_056fde1c == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Math);
    DAT_056fde1c = '\x01';
  }
  auStack_48._0_4_ = (float)uVar1 - spherePosition.fields.x;
  auStack_48._4_4_ = (float)uVar2 - spherePosition.fields.y;
  fVar7 = fVar7 - spherePosition.fields.z;
  fStack_40 = 0.0 - in_XMM0_Dc;
  fStack_3c = 0.0 - in_XMM0_Dd;
  if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
    il2cpp_init_class();
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
  if (DAT_056fde20 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Math);
    DAT_056fde20 = '\x01';
    iVar3 = *(int *)(TypeInfo_Math + 0xe4);
  }
  else {
    iVar3 = *(int *)(TypeInfo_Math + 0xe4);
  }
  if (iVar3 == 0) {
    il2cpp_init_class();
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
    if (DAT_056fdd15 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_Vector3);
      DAT_056fdd15 = '\x01';
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
// 0x2458c20

/* WARNING: Type propagation algorithm not settling */

void EZhex1991_EZSoftBone_EZSoftBoneUtility__PointInsideSphere
               (UnityEngine_Vector3_o *position,UnityEngine_SphereCollider_o *collider,float spacing
               ,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 auVar4 [16];
  UnityEngine_Transform_o *__this;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float extraout_XMM0_Dc;
  undefined4 uVar9;
  undefined4 extraout_XMM0_Dc_00;
  float extraout_XMM0_Dd;
  undefined4 uVar10;
  undefined4 extraout_XMM0_Dd_00;
  float fVar11;
  float fVar12;
  undefined1 auVar14 [16];
  UnityEngine_Vector3_o UVar15;
  float fStack_28;
  float fStack_24;
  undefined8 uVar13;
  
  if (collider != (UnityEngine_SphereCollider_o *)0x0) {
    __this = UnityEngine_Component__get_transform
                       ((UnityEngine_Component_o *)collider,(MethodInfo *)0x0);
    UVar15 = UnityEngine_SphereCollider__get_center(collider,(MethodInfo *)0x0);
    if (__this != (UnityEngine_Transform_o *)0x0) {
      UVar15 = UnityEngine_Transform__TransformPoint(__this,UVar15,(MethodInfo *)0x0);
      fVar5 = UnityEngine_SphereCollider__get_radius(collider,(MethodInfo *)0x0);
      uVar1 = (position->fields).x;
      uVar2 = (position->fields).y;
      fVar11 = (position->fields).z;
      if (DAT_056fde1c == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_Math);
        DAT_056fde1c = '\x01';
      }
      fStack_28 = UVar15.fields.x;
      fStack_24 = UVar15.fields.y;
      fVar6 = (float)uVar1 - fStack_28;
      fVar8 = (float)uVar2 - fStack_24;
      fVar11 = fVar11 - UVar15.fields.z;
      if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
        il2cpp_init_class();
      }
      fVar5 = fVar5 - spacing;
      fVar12 = fVar11 * fVar11 + fVar8 * fVar8 + fVar6 * fVar6;
      if (fVar12 < 0.0) {
        fVar7 = sqrtf(fVar12);
      }
      else {
        fVar7 = SQRT(fVar12);
      }
      if (fVar7 <= fVar5) {
        return;
      }
      if (DAT_056fde20 == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_Math);
        DAT_056fde20 = '\x01';
        iVar3 = *(int *)(TypeInfo_Math + 0xe4);
      }
      else {
        iVar3 = *(int *)(TypeInfo_Math + 0xe4);
      }
      if (iVar3 == 0) {
        il2cpp_init_class();
      }
      if (fVar12 < 0.0) {
        fVar12 = sqrtf(fVar12);
        uVar9 = extraout_XMM0_Dc_00;
        uVar10 = extraout_XMM0_Dd_00;
      }
      else {
        uVar9 = 0;
        uVar10 = 0;
        fVar12 = SQRT(fVar12);
      }
      auVar14._4_4_ = fVar8;
      auVar14._0_4_ = fVar6;
      auVar14._8_4_ = 0.0 - extraout_XMM0_Dc;
      auVar14._12_4_ = 0.0 - extraout_XMM0_Dd;
      if (fVar12 <= 1e-05) {
        if (DAT_056fdd15 == '\0') {
          il2cpp_init_method_metadata(&TypeInfo_Vector3);
          DAT_056fdd15 = '\x01';
        }
        uVar13 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
        fVar11 = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
      }
      else {
        fVar11 = fVar11 / fVar12;
        auVar4._4_4_ = fVar12;
        auVar4._0_4_ = fVar12;
        auVar4._8_4_ = uVar9;
        auVar4._12_4_ = uVar10;
        auVar14 = divps(auVar14,auVar4);
        uVar13 = auVar14._0_8_;
      }
      (position->fields).x = fStack_28 + fVar5 * (float)uVar13;
      (position->fields).y = fStack_24 + fVar5 * (float)((ulong)uVar13 >> 0x20);
      (position->fields).z = UVar15.fields.z + fVar11 * fVar5;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// EZhex1991.EZSoftBone.EZSoftBoneUtility$$PointInsideSphere
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBoneUtility__PointInsideSphere (UnityEngine_Vector3_o* position, UnityEngine_Vector3_o spherePosition, float radius, const MethodInfo* method);
// 0x245a980

void EZhex1991_EZSoftBone_EZSoftBoneUtility__PointInsideSphere
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
  if (DAT_056fde1c == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Math);
    DAT_056fde1c = '\x01';
  }
  auStack_48._0_4_ = (float)uVar1 - spherePosition.fields.x;
  auStack_48._4_4_ = (float)uVar2 - spherePosition.fields.y;
  fVar7 = fVar7 - spherePosition.fields.z;
  fStack_40 = 0.0 - in_XMM0_Dc;
  fStack_3c = 0.0 - in_XMM0_Dd;
  if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
    il2cpp_init_class();
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
  if (DAT_056fde20 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Math);
    DAT_056fde20 = '\x01';
    iVar3 = *(int *)(TypeInfo_Math + 0xe4);
  }
  else {
    iVar3 = *(int *)(TypeInfo_Math + 0xe4);
  }
  if (iVar3 == 0) {
    il2cpp_init_class();
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
    if (DAT_056fdd15 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_Vector3);
      DAT_056fdd15 = '\x01';
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
// 0x2459220

void EZhex1991_EZSoftBone_EZSoftBoneUtility__PointOutsideCapsule
               (UnityEngine_Vector3_o *position,UnityEngine_CapsuleCollider_o *collider,
               float spacing,MethodInfo *method)

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
            (collider,(UnityEngine_Vector3_o *)method_00,(UnityEngine_Vector3_o *)&local_28,
             &local_30,in_R8);
  center0.fields.z = local_10;
  center0.fields.x = (float)local_18._0_4_;
  center0.fields.y = (float)local_18._4_4_;
  center1.fields.z = local_28.z;
  center1.fields.x = local_28.x;
  center1.fields.y = local_28.y;
  EZhex1991_EZSoftBone_EZSoftBoneUtility__PointOutsideCapsule
            (position,center0,center1,local_2c + local_30,method_00);
  return;
}


// EZhex1991.EZSoftBone.EZSoftBoneUtility$$PointOutsideCapsule
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBoneUtility__PointOutsideCapsule (UnityEngine_Vector3_o* position, UnityEngine_Vector3_o center0, UnityEngine_Vector3_o center1, float radius, const MethodInfo* method);
// 0x245ab70

/* WARNING: Type propagation algorithm not settling */

void EZhex1991_EZSoftBone_EZSoftBoneUtility__PointOutsideCapsule
               (UnityEngine_Vector3_o *position,UnityEngine_Vector3_o center0,
               UnityEngine_Vector3_o center1,float radius,MethodInfo *method)

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
    if (DAT_056fde1c == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_Math);
      DAT_056fde1c = '\x01';
      iVar5 = *(int *)(TypeInfo_Math + 0xe4);
    }
    else {
      iVar5 = *(int *)(TypeInfo_Math + 0xe4);
    }
    if (iVar5 == 0) {
      il2cpp_init_class();
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
    if (DAT_056fde20 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_Math);
      DAT_056fde20 = '\x01';
      iVar5 = *(int *)(TypeInfo_Math + 0xe4);
    }
    else {
      iVar5 = *(int *)(TypeInfo_Math + 0xe4);
    }
    if (iVar5 == 0) {
      il2cpp_init_class();
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
      if (DAT_056fdd15 == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_Vector3);
        DAT_056fdd15 = '\x01';
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
    if (DAT_056fde1c == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_Math);
      DAT_056fde1c = '\x01';
    }
    fVar31 = (float)uVar1 - fVar11;
    fVar27 = (float)uVar3 - fVar25;
    fVar13 = fVar13 - fVar18;
    if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
      il2cpp_init_class();
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
    if (DAT_056fde20 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_Math);
      DAT_056fde20 = '\x01';
      iVar5 = *(int *)(TypeInfo_Math + 0xe4);
    }
    else {
      iVar5 = *(int *)(TypeInfo_Math + 0xe4);
    }
    if (iVar5 == 0) {
      il2cpp_init_class();
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
      if (DAT_056fdd15 == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_Vector3);
        DAT_056fdd15 = '\x01';
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
  if (DAT_056fe076 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Mathf);
    DAT_056fe076 = '\x01';
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
    if (DAT_056fdd15 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_Vector3);
      DAT_056fdd15 = '\x01';
    }
    auVar23._8_8_ = 0;
    auVar23._0_8_ = **(ulong **)(TypeInfo_Vector3 + 0xb8);
    fVar13 = *(float *)(*(ulong **)(TypeInfo_Vector3 + 0xb8) + 1);
  }
  if (DAT_056fde1c == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Math);
    DAT_056fde1c = '\x01';
  }
  fVar29 = fVar29 - auVar23._0_4_;
  fVar30 = fVar30 - auVar23._4_4_;
  fVar31 = fVar31 - fVar13;
  if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
    il2cpp_init_class();
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
    if (DAT_056fde20 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_Math);
      DAT_056fde20 = '\x01';
    }
    if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
      il2cpp_init_class();
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
      if (DAT_056fdd15 == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_Vector3);
        DAT_056fdd15 = '\x01';
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
// 0x2459190

void EZhex1991_EZSoftBone_EZSoftBoneUtility__PointInsideCapsule
               (UnityEngine_Vector3_o *position,UnityEngine_CapsuleCollider_o *collider,
               float spacing,MethodInfo *method)

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
            (collider,(UnityEngine_Vector3_o *)method_00,(UnityEngine_Vector3_o *)&local_28,
             &local_30,in_R8);
  center0.fields.z = local_10;
  center0.fields.x = (float)local_18._0_4_;
  center0.fields.y = (float)local_18._4_4_;
  center1.fields.z = local_28.z;
  center1.fields.x = local_28.x;
  center1.fields.y = local_28.y;
  EZhex1991_EZSoftBone_EZSoftBoneUtility__PointInsideCapsule
            (position,center0,center1,local_30 - local_2c,method_00);
  return;
}


// EZhex1991.EZSoftBone.EZSoftBoneUtility$$PointInsideCapsule
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBoneUtility__PointInsideCapsule (UnityEngine_Vector3_o* position, UnityEngine_Vector3_o center0, UnityEngine_Vector3_o center1, float radius, const MethodInfo* method);
// 0x245b2f0

/* WARNING: Type propagation algorithm not settling */

void EZhex1991_EZSoftBone_EZSoftBoneUtility__PointInsideCapsule
               (UnityEngine_Vector3_o *position,UnityEngine_Vector3_o center0,
               UnityEngine_Vector3_o center1,float radius,MethodInfo *method)

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
    if (DAT_056fde1c == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_Math);
      DAT_056fde1c = '\x01';
      iVar5 = *(int *)(TypeInfo_Math + 0xe4);
    }
    else {
      iVar5 = *(int *)(TypeInfo_Math + 0xe4);
    }
    if (iVar5 == 0) {
      il2cpp_init_class();
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
    if (DAT_056fde20 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_Math);
      DAT_056fde20 = '\x01';
      iVar5 = *(int *)(TypeInfo_Math + 0xe4);
    }
    else {
      iVar5 = *(int *)(TypeInfo_Math + 0xe4);
    }
    if (iVar5 == 0) {
      il2cpp_init_class();
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
      if (DAT_056fdd15 == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_Vector3);
        DAT_056fdd15 = '\x01';
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
    if (DAT_056fde1c == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_Math);
      DAT_056fde1c = '\x01';
    }
    fVar31 = (float)uVar1 - fVar11;
    fVar27 = (float)uVar3 - fVar25;
    fVar13 = fVar13 - fVar18;
    if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
      il2cpp_init_class();
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
    if (DAT_056fde20 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_Math);
      DAT_056fde20 = '\x01';
      iVar5 = *(int *)(TypeInfo_Math + 0xe4);
    }
    else {
      iVar5 = *(int *)(TypeInfo_Math + 0xe4);
    }
    if (iVar5 == 0) {
      il2cpp_init_class();
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
      if (DAT_056fdd15 == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_Vector3);
        DAT_056fdd15 = '\x01';
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
  if (DAT_056fe076 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Mathf);
    DAT_056fe076 = '\x01';
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
    if (DAT_056fdd15 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_Vector3);
      DAT_056fdd15 = '\x01';
    }
    auVar23._8_8_ = 0;
    auVar23._0_8_ = **(ulong **)(TypeInfo_Vector3 + 0xb8);
    fVar13 = *(float *)(*(ulong **)(TypeInfo_Vector3 + 0xb8) + 1);
  }
  if (DAT_056fde1c == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Math);
    DAT_056fde1c = '\x01';
  }
  fVar29 = fVar29 - auVar23._0_4_;
  fVar30 = fVar30 - auVar23._4_4_;
  fVar31 = fVar31 - fVar13;
  if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
    il2cpp_init_class();
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
    if (DAT_056fde20 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_Math);
      DAT_056fde20 = '\x01';
    }
    if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
      il2cpp_init_class();
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
      if (DAT_056fdd15 == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_Vector3);
        DAT_056fdd15 = '\x01';
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
// 0x2459dc0

void EZhex1991_EZSoftBone_EZSoftBoneUtility__PointOutsideCylinder
               (UnityEngine_Vector3_o *position,UnityEngine_Transform_o *transform,float spacing,
               MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float extraout_XMM0_Dc;
  float extraout_XMM0_Dc_00;
  undefined4 uVar12;
  undefined4 extraout_XMM0_Dc_01;
  undefined4 extraout_XMM0_Dc_02;
  float extraout_XMM0_Dd;
  float extraout_XMM0_Dd_00;
  undefined4 uVar13;
  undefined4 extraout_XMM0_Dd_01;
  undefined4 extraout_XMM0_Dd_02;
  uint in_XMM1_Dc;
  uint in_XMM1_Dd;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  float fVar18;
  float fVar19;
  UnityEngine_Vector3_o UVar20;
  UnityEngine_Vector3_o UVar21;
  UnityEngine_Vector3_o UVar22;
  undefined1 auStack_58 [8];
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_28;
  float fStack_24;
  undefined8 uVar14;
  
  if (transform == (UnityEngine_Transform_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  UVar20 = UnityEngine_Transform__get_lossyScale(transform,(MethodInfo *)0x0);
  fStack_28 = ABS(UVar20.fields.y);
  in_XMM1_Dc = in_XMM1_Dc & 0x7fffffff;
  in_XMM1_Dd = in_XMM1_Dd & 0x7fffffff;
  auStack_58._0_4_ = ABS(UVar20.fields.z);
  UVar21 = UnityEngine_Transform__get_position(transform,(MethodInfo *)0x0);
  UVar22 = UnityEngine_Transform__get_up(transform,(MethodInfo *)0x0);
  fVar10 = UVar22.fields.z;
  fVar8 = UVar22.fields.x;
  fVar9 = UVar22.fields.y;
  fVar18 = ABS(UVar20.fields.x);
  if (ABS(UVar20.fields.x) <= (float)auStack_58._0_4_) {
    fVar18 = (float)auStack_58._0_4_;
  }
  fStack_48 = UVar21.fields.x;
  fStack_44 = UVar21.fields.y;
  uVar1 = (position->fields).x;
  uVar3 = (position->fields).y;
  fVar19 = (position->fields).z;
  if (DAT_056fe076 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Mathf);
    in_XMM1_Dc = 0;
    in_XMM1_Dd = 0;
    DAT_056fe076 = '\x01';
  }
  fVar19 = fVar19 - UVar21.fields.z;
  fVar7 = fVar10 * fVar10 + fVar9 * fVar9 + fVar8 * fVar8;
  if (**(float **)(TypeInfo_Mathf + 0xb8) <= fVar7) {
    fVar11 = fVar19 * fVar10 +
             ((float)uVar3 - fStack_44) * fVar9 + fVar8 * ((float)uVar1 - fStack_48);
    auVar15._0_4_ = fVar11 * fVar8;
    auVar15._4_4_ = fVar11 * fVar9;
    auVar15._8_4_ = extraout_XMM0_Dc_00 * 0.0;
    auVar15._12_4_ = extraout_XMM0_Dd_00 * 0.0;
    auVar17._4_4_ = fVar7;
    auVar17._0_4_ = fVar7;
    auVar17._8_4_ = in_XMM1_Dc;
    auVar17._12_4_ = in_XMM1_Dd;
    auVar16 = divps(auVar15,auVar17);
    fVar7 = (fVar11 * fVar10) / fVar7;
  }
  else {
    if (DAT_056fdd15 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_Vector3);
      DAT_056fdd15 = '\x01';
    }
    auVar16._8_8_ = 0;
    auVar16._0_8_ = **(ulong **)(TypeInfo_Vector3 + 0xb8);
    fVar7 = *(float *)(*(ulong **)(TypeInfo_Vector3 + 0xb8) + 1);
  }
  if (DAT_056fde1c == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Math);
    DAT_056fde1c = '\x01';
  }
  if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
    il2cpp_init_class();
  }
  auStack_58._0_4_ = auVar16._0_4_;
  auStack_58._4_4_ = auVar16._4_4_;
  fVar8 = fVar7 * fVar7 +
          (float)auStack_58._4_4_ * (float)auStack_58._4_4_ +
          (float)auStack_58._0_4_ * (float)auStack_58._0_4_;
  if (fVar8 < 0.0) {
    fVar9 = sqrtf(fVar8);
  }
  else {
    fVar9 = SQRT(fVar8);
  }
  fVar9 = (spacing + fStack_28) - fVar9;
  if (fVar9 <= 0.0) {
    return;
  }
  if (DAT_056fde1c == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Math);
    DAT_056fde1c = '\x01';
  }
  auStack_58._0_4_ = ((float)uVar1 - fStack_48) - (float)auStack_58._0_4_;
  auStack_58._4_4_ = ((float)uVar3 - fStack_44) - (float)auStack_58._4_4_;
  fVar19 = fVar19 - fVar7;
  fStack_50 = (0.0 - extraout_XMM0_Dc) - auVar16._8_4_;
  fStack_4c = (0.0 - extraout_XMM0_Dd) - auVar16._12_4_;
  if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
    il2cpp_init_class();
  }
  fVar10 = fVar19 * fVar19 +
           (float)auStack_58._4_4_ * (float)auStack_58._4_4_ +
           (float)auStack_58._0_4_ * (float)auStack_58._0_4_;
  if (fVar10 < 0.0) {
    fVar11 = sqrtf(fVar10);
  }
  else {
    fVar11 = SQRT(fVar10);
  }
  fVar11 = (fVar18 * 0.5 + spacing) - fVar11;
  if (fVar11 <= 0.0) {
    return;
  }
  uVar2 = (position->fields).x;
  uVar4 = (position->fields).y;
  fVar18 = (position->fields).z;
  if (fVar9 <= fVar11) {
    if (DAT_056fde20 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_Math);
      DAT_056fde20 = '\x01';
    }
    if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
      il2cpp_init_class();
    }
    uVar12 = 0;
    uVar13 = 0;
    if (fVar8 < 0.0) {
      fVar8 = sqrtf(fVar8);
      uVar12 = extraout_XMM0_Dc_02;
      uVar13 = extraout_XMM0_Dd_02;
      if (fVar8 <= 1e-05) goto LAB_0245be57;
LAB_0245bf07:
      fVar19 = fVar7 / fVar8;
      auVar6._4_4_ = fVar8;
      auVar6._0_4_ = fVar8;
      auVar6._8_4_ = uVar12;
      auVar6._12_4_ = uVar13;
      auVar17 = divps(auVar16,auVar6);
      uVar14 = auVar17._0_8_;
    }
    else {
      fVar8 = SQRT(fVar8);
      if (1e-05 < fVar8) goto LAB_0245bf07;
LAB_0245be57:
      if (DAT_056fdd15 == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_Vector3);
        DAT_056fdd15 = '\x01';
      }
      uVar14 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
      fVar19 = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
    }
    fVar8 = fVar9 * (float)uVar14;
    fVar10 = fVar9 * (float)((ulong)uVar14 >> 0x20);
    fVar19 = fVar19 * fVar9;
    goto LAB_0245bf35;
  }
  if (DAT_056fde20 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Math);
    DAT_056fde20 = '\x01';
  }
  if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
    il2cpp_init_class();
  }
  uVar12 = 0;
  uVar13 = 0;
  if (fVar10 < 0.0) {
    fVar10 = sqrtf(fVar10);
    uVar12 = extraout_XMM0_Dc_01;
    uVar13 = extraout_XMM0_Dd_01;
    if (fVar10 <= 1e-05) goto LAB_0245bdb0;
LAB_0245bea6:
    fVar19 = fVar19 / fVar10;
    auVar5._4_4_ = fVar10;
    auVar5._0_4_ = fVar10;
    auVar5._8_4_ = uVar12;
    auVar5._12_4_ = uVar13;
    auVar17 = divps(_auStack_58,auVar5);
    uVar14 = auVar17._0_8_;
  }
  else {
    fVar10 = SQRT(fVar10);
    if (1e-05 < fVar10) goto LAB_0245bea6;
LAB_0245bdb0:
    if (DAT_056fdd15 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_Vector3);
      DAT_056fdd15 = '\x01';
    }
    uVar14 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
    fVar19 = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
  }
  fVar8 = fVar11 * (float)uVar14;
  fVar10 = fVar11 * (float)((ulong)uVar14 >> 0x20);
  fVar19 = fVar19 * fVar11;
LAB_0245bf35:
  (position->fields).x = (float)uVar2 + fVar8;
  (position->fields).y = (float)uVar4 + fVar10;
  (position->fields).z = fVar18 + fVar19;
  return;
}


// EZhex1991.EZSoftBone.EZSoftBoneUtility$$PointOutsideCylinder
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBoneUtility__PointOutsideCylinder (UnityEngine_Vector3_o* position, UnityEngine_Vector3_o center, UnityEngine_Vector3_o direction, float radius, float height, const MethodInfo* method);
// 0x245ba60

void EZhex1991_EZSoftBone_EZSoftBoneUtility__PointOutsideCylinder
               (UnityEngine_Vector3_o *position,UnityEngine_Vector3_o center,
               UnityEngine_Vector3_o direction,float radius,float height,MethodInfo *method)

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
  if (DAT_056fe076 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Mathf);
    in_XMM3_Dc = 0;
    in_XMM3_Dd = 0;
    DAT_056fe076 = '\x01';
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
    if (DAT_056fdd15 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_Vector3);
      DAT_056fdd15 = '\x01';
    }
    auVar17._8_8_ = 0;
    auVar17._0_8_ = **(ulong **)(TypeInfo_Vector3 + 0xb8);
    fVar8 = *(float *)(*(ulong **)(TypeInfo_Vector3 + 0xb8) + 1);
  }
  if (DAT_056fde1c == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Math);
    DAT_056fde1c = '\x01';
  }
  if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
    il2cpp_init_class();
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
  if (DAT_056fde1c == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Math);
    DAT_056fde1c = '\x01';
  }
  auStack_58._0_4_ = (float)auStack_58._0_4_ - fVar11;
  auStack_58._4_4_ = (float)auStack_58._4_4_ - fVar12;
  fVar19 = fVar19 - fVar8;
  fStack_50 = (0.0 - in_XMM0_Dc) - auVar17._8_4_;
  fStack_4c = (0.0 - in_XMM0_Dd) - auVar17._12_4_;
  if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
    il2cpp_init_class();
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
    if (DAT_056fde20 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_Math);
      DAT_056fde20 = '\x01';
    }
    if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
      il2cpp_init_class();
    }
    uVar13 = 0;
    uVar14 = 0;
    if (fVar9 < 0.0) {
      fVar9 = sqrtf(fVar9);
      uVar13 = extraout_XMM0_Dc_00;
      uVar14 = extraout_XMM0_Dd_00;
      if (fVar9 <= 1e-05) goto LAB_0245be57;
LAB_0245bf07:
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
      if (1e-05 < fVar9) goto LAB_0245bf07;
LAB_0245be57:
      if (DAT_056fdd15 == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_Vector3);
        DAT_056fdd15 = '\x01';
      }
      uVar15 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
      fVar19 = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
    }
    fVar9 = fVar10 * (float)uVar15;
    fVar11 = fVar10 * (float)((ulong)uVar15 >> 0x20);
    fVar19 = fVar19 * fVar10;
    goto LAB_0245bf35;
  }
  if (DAT_056fde20 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Math);
    DAT_056fde20 = '\x01';
  }
  if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
    il2cpp_init_class();
  }
  uVar13 = 0;
  uVar14 = 0;
  if (fVar11 < 0.0) {
    fVar11 = sqrtf(fVar11);
    uVar13 = extraout_XMM0_Dc;
    uVar14 = extraout_XMM0_Dd;
    if (fVar11 <= 1e-05) goto LAB_0245bdb0;
LAB_0245bea6:
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
    if (1e-05 < fVar11) goto LAB_0245bea6;
LAB_0245bdb0:
    if (DAT_056fdd15 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_Vector3);
      DAT_056fdd15 = '\x01';
    }
    uVar15 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
    fVar19 = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
  }
  fVar9 = fVar12 * (float)uVar15;
  fVar11 = fVar12 * (float)((ulong)uVar15 >> 0x20);
  fVar19 = fVar19 * fVar12;
LAB_0245bf35:
  (position->fields).x = (float)uVar3 + fVar9;
  (position->fields).y = (float)uVar5 + fVar11;
  (position->fields).z = fVar1 + fVar19;
  return;
}


// EZhex1991.EZSoftBone.EZSoftBoneUtility$$PointInsideCylinder
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBoneUtility__PointInsideCylinder (UnityEngine_Vector3_o* position, UnityEngine_Transform_o* transform, float spacing, const MethodInfo* method);
// 0x2459d00

void EZhex1991_EZSoftBone_EZSoftBoneUtility__PointInsideCylinder
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
  float extraout_XMM0_Dc;
  float extraout_XMM0_Dc_00;
  undefined4 uVar12;
  undefined4 extraout_XMM0_Dc_01;
  undefined4 extraout_XMM0_Dc_02;
  float extraout_XMM0_Dd;
  float extraout_XMM0_Dd_00;
  undefined4 uVar13;
  undefined4 extraout_XMM0_Dd_01;
  undefined4 extraout_XMM0_Dd_02;
  uint in_XMM1_Dc;
  uint in_XMM1_Dd;
  undefined1 auVar14 [16];
  undefined1 auVar15 [8];
  undefined8 uVar16;
  undefined1 auVar17 [16];
  float fVar18;
  float fVar19;
  float fVar20;
  UnityEngine_Vector3_o UVar21;
  UnityEngine_Vector3_o UVar22;
  UnityEngine_Vector3_o UVar23;
  undefined1 auStack_78 [8];
  float fStack_70;
  float fStack_6c;
  undefined1 auStack_58 [8];
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_28;
  float fStack_24;
  
  if (transform == (UnityEngine_Transform_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  UVar21 = UnityEngine_Transform__get_lossyScale(transform,(MethodInfo *)0x0);
  fStack_28 = ABS(UVar21.fields.y);
  in_XMM1_Dc = in_XMM1_Dc & 0x7fffffff;
  in_XMM1_Dd = in_XMM1_Dd & 0x7fffffff;
  auStack_58._0_4_ = ABS(UVar21.fields.z);
  UVar22 = UnityEngine_Transform__get_position(transform,(MethodInfo *)0x0);
  UVar23 = UnityEngine_Transform__get_up(transform,(MethodInfo *)0x0);
  fVar9 = UVar23.fields.z;
  fVar18 = ABS(UVar21.fields.x);
  if (ABS(UVar21.fields.x) <= (float)auStack_58._0_4_) {
    fVar18 = (float)auStack_58._0_4_;
  }
  fStack_48 = UVar22.fields.x;
  fStack_44 = UVar22.fields.y;
  uVar1 = (position->fields).x;
  uVar3 = (position->fields).y;
  fVar19 = (position->fields).z;
  if (DAT_056fe076 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Mathf);
    in_XMM1_Dc = 0;
    in_XMM1_Dd = 0;
    DAT_056fe076 = '\x01';
  }
  fVar19 = fVar19 - UVar22.fields.z;
  fVar10 = UVar23.fields.x;
  fVar20 = UVar23.fields.y;
  fVar8 = fVar9 * fVar9 + fVar20 * fVar20 + fVar10 * fVar10;
  if (**(float **)(TypeInfo_Mathf + 0xb8) <= fVar8) {
    fVar11 = fVar19 * fVar9 +
             ((float)uVar3 - fStack_44) * fVar20 + fVar10 * ((float)uVar1 - fStack_48);
    auVar17._0_4_ = fVar11 * fVar10;
    auVar17._4_4_ = fVar11 * fVar20;
    auVar17._8_4_ = extraout_XMM0_Dc_00 * 0.0;
    auVar17._12_4_ = extraout_XMM0_Dd_00 * 0.0;
    auVar14._4_4_ = fVar8;
    auVar14._0_4_ = fVar8;
    auVar14._8_4_ = in_XMM1_Dc;
    auVar14._12_4_ = in_XMM1_Dd;
    _auStack_58 = divps(auVar17,auVar14);
    auVar15 = auStack_58;
    fVar8 = (fVar11 * fVar9) / fVar8;
  }
  else {
    if (DAT_056fdd15 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_Vector3);
      DAT_056fdd15 = '\x01';
    }
    auVar15 = (undefined1  [8])**(ulong **)(TypeInfo_Vector3 + 0xb8);
    fVar8 = *(float *)(*(ulong **)(TypeInfo_Vector3 + 0xb8) + 1);
    _fStack_50 = 0;
    auStack_58 = auVar15;
  }
  if (DAT_056fde1c == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Math);
    DAT_056fde1c = '\x01';
    auVar15 = auStack_58;
  }
  if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
    il2cpp_init_class();
    auVar15 = auStack_58;
  }
  fVar9 = (float)((ulong)auVar15 >> 0x20);
  fVar9 = fVar8 * fVar8 + fVar9 * fVar9 + SUB84(auVar15,0) * SUB84(auVar15,0);
  if (fVar9 < 0.0) {
    fVar10 = sqrtf(fVar9);
  }
  else {
    fVar10 = SQRT(fVar9);
  }
  if (DAT_056fde1c == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Math);
    DAT_056fde1c = '\x01';
  }
  auStack_78._0_4_ = ((float)uVar1 - fStack_48) - (float)auStack_58._0_4_;
  auStack_78._4_4_ = ((float)uVar3 - fStack_44) - (float)auStack_58._4_4_;
  fVar19 = fVar19 - fVar8;
  fStack_70 = (0.0 - extraout_XMM0_Dc) - fStack_50;
  fStack_6c = (0.0 - extraout_XMM0_Dd) - fStack_4c;
  if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
    il2cpp_init_class();
  }
  fVar10 = (fStack_28 - spacing) - fVar10;
  fVar20 = fVar19 * fVar19 +
           (float)auStack_78._4_4_ * (float)auStack_78._4_4_ +
           (float)auStack_78._0_4_ * (float)auStack_78._0_4_;
  if (fVar20 < 0.0) {
    fVar11 = sqrtf(fVar20);
  }
  else {
    fVar11 = SQRT(fVar20);
  }
  fVar11 = (fVar18 * 0.5 - spacing) - fVar11;
  if (0.0 <= fVar10) {
    if (0.0 <= fVar11) {
      return;
    }
  }
  uVar2 = (position->fields).x;
  uVar4 = (position->fields).y;
  fVar18 = (position->fields).z;
  if (fVar10 <= fVar11) {
    if (DAT_056fde20 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_Math);
      DAT_056fde20 = '\x01';
      if (*(int *)(TypeInfo_Math + 0xe4) != 0) goto LAB_0245c31b;
LAB_0245c41d:
      il2cpp_init_class();
      if (0.0 <= fVar9) goto LAB_0245c32d;
LAB_0245c439:
      fVar9 = sqrtf(fVar9);
      uVar12 = extraout_XMM0_Dc_02;
      uVar13 = extraout_XMM0_Dd_02;
      if (fVar9 <= 1e-05) goto LAB_0245c33e;
LAB_0245c450:
      fVar19 = fVar8 / fVar9;
      auVar7._4_4_ = fVar9;
      auVar7._0_4_ = fVar9;
      auVar7._8_4_ = uVar12;
      auVar7._12_4_ = uVar13;
      auVar14 = divps(_auStack_58,auVar7);
      uVar16 = auVar14._0_8_;
    }
    else {
      if (*(int *)(TypeInfo_Math + 0xe4) == 0) goto LAB_0245c41d;
LAB_0245c31b:
      if (fVar9 < 0.0) goto LAB_0245c439;
LAB_0245c32d:
      uVar13 = 0;
      uVar12 = 0;
      fVar9 = SQRT(fVar9);
      if (1e-05 < fVar9) goto LAB_0245c450;
LAB_0245c33e:
      if (DAT_056fdd15 == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_Vector3);
        DAT_056fdd15 = '\x01';
      }
      uVar16 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
      fVar19 = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
    }
    fVar9 = fVar10 * (float)uVar16;
    fVar8 = fVar10 * (float)((ulong)uVar16 >> 0x20);
    fVar19 = fVar19 * fVar10;
    goto LAB_0245c473;
  }
  if (DAT_056fde20 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Math);
    DAT_056fde20 = '\x01';
    iVar5 = *(int *)(TypeInfo_Math + 0xe4);
  }
  else {
    iVar5 = *(int *)(TypeInfo_Math + 0xe4);
  }
  if (iVar5 == 0) {
    il2cpp_init_class();
  }
  uVar12 = 0;
  uVar13 = 0;
  if (fVar20 < 0.0) {
    fVar20 = sqrtf(fVar20);
    uVar12 = extraout_XMM0_Dc_01;
    uVar13 = extraout_XMM0_Dd_01;
    if (fVar20 <= 1e-05) goto LAB_0245c2be;
LAB_0245c39b:
    fVar19 = fVar19 / fVar20;
    auVar6._4_4_ = fVar20;
    auVar6._0_4_ = fVar20;
    auVar6._8_4_ = uVar12;
    auVar6._12_4_ = uVar13;
    auVar14 = divps(_auStack_78,auVar6);
    uVar16 = auVar14._0_8_;
  }
  else {
    fVar20 = SQRT(fVar20);
    if (1e-05 < fVar20) goto LAB_0245c39b;
LAB_0245c2be:
    if (DAT_056fdd15 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_Vector3);
      DAT_056fdd15 = '\x01';
    }
    uVar16 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
    fVar19 = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
  }
  fVar9 = fVar11 * (float)uVar16;
  fVar8 = fVar11 * (float)((ulong)uVar16 >> 0x20);
  fVar19 = fVar19 * fVar11;
LAB_0245c473:
  (position->fields).x = (float)uVar2 + fVar9;
  (position->fields).y = (float)uVar4 + fVar8;
  (position->fields).z = fVar18 + fVar19;
  return;
}


// EZhex1991.EZSoftBone.EZSoftBoneUtility$$PointInsideCylinder
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBoneUtility__PointInsideCylinder (UnityEngine_Vector3_o* position, UnityEngine_Vector3_o center, UnityEngine_Vector3_o direction, float radius, float height, const MethodInfo* method);
// 0x245bf50

void EZhex1991_EZSoftBone_EZSoftBoneUtility__PointInsideCylinder
               (UnityEngine_Vector3_o *position,UnityEngine_Vector3_o center,
               UnityEngine_Vector3_o direction,float radius,float height,MethodInfo *method)

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
  if (DAT_056fe076 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Mathf);
    in_XMM3_Dc = 0;
    in_XMM3_Dd = 0;
    DAT_056fe076 = '\x01';
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
    if (DAT_056fdd15 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_Vector3);
      DAT_056fdd15 = '\x01';
    }
    auVar16 = (undefined1  [8])**(ulong **)(TypeInfo_Vector3 + 0xb8);
    fVar9 = *(float *)(*(ulong **)(TypeInfo_Vector3 + 0xb8) + 1);
    _fStack_50 = 0;
    auStack_58 = auVar16;
  }
  if (DAT_056fde1c == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Math);
    DAT_056fde1c = '\x01';
    auVar16 = auStack_58;
  }
  if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
    il2cpp_init_class();
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
  if (DAT_056fde1c == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Math);
    DAT_056fde1c = '\x01';
  }
  auStack_78._0_4_ = (float)auStack_78._0_4_ - (float)auStack_58._0_4_;
  auStack_78._4_4_ = (float)auStack_78._4_4_ - (float)auStack_58._4_4_;
  fVar19 = fVar19 - fVar9;
  fStack_70 = (0.0 - in_XMM0_Dc) - fStack_50;
  fStack_6c = (0.0 - in_XMM0_Dd) - fStack_4c;
  if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
    il2cpp_init_class();
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
    if (DAT_056fde20 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_Math);
      DAT_056fde20 = '\x01';
      if (*(int *)(TypeInfo_Math + 0xe4) != 0) goto LAB_0245c31b;
LAB_0245c41d:
      il2cpp_init_class();
      if (0.0 <= fVar10) goto LAB_0245c32d;
LAB_0245c439:
      fVar10 = sqrtf(fVar10);
      uVar13 = extraout_XMM0_Dc_00;
      uVar14 = extraout_XMM0_Dd_00;
      if (fVar10 <= 1e-05) goto LAB_0245c33e;
LAB_0245c450:
      fVar19 = fVar9 / fVar10;
      auVar8._4_4_ = fVar10;
      auVar8._0_4_ = fVar10;
      auVar8._8_4_ = uVar13;
      auVar8._12_4_ = uVar14;
      auVar15 = divps(_auStack_58,auVar8);
      uVar17 = auVar15._0_8_;
    }
    else {
      if (*(int *)(TypeInfo_Math + 0xe4) == 0) goto LAB_0245c41d;
LAB_0245c31b:
      if (fVar10 < 0.0) goto LAB_0245c439;
LAB_0245c32d:
      uVar14 = 0;
      uVar13 = 0;
      fVar10 = SQRT(fVar10);
      if (1e-05 < fVar10) goto LAB_0245c450;
LAB_0245c33e:
      if (DAT_056fdd15 == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_Vector3);
        DAT_056fdd15 = '\x01';
      }
      uVar17 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
      fVar19 = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
    }
    fVar10 = fVar11 * (float)uVar17;
    fVar9 = fVar11 * (float)((ulong)uVar17 >> 0x20);
    fVar19 = fVar19 * fVar11;
    goto LAB_0245c473;
  }
  if (DAT_056fde20 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Math);
    DAT_056fde20 = '\x01';
    iVar6 = *(int *)(TypeInfo_Math + 0xe4);
  }
  else {
    iVar6 = *(int *)(TypeInfo_Math + 0xe4);
  }
  if (iVar6 == 0) {
    il2cpp_init_class();
  }
  uVar13 = 0;
  uVar14 = 0;
  if (fVar20 < 0.0) {
    fVar20 = sqrtf(fVar20);
    uVar13 = extraout_XMM0_Dc;
    uVar14 = extraout_XMM0_Dd;
    if (fVar20 <= 1e-05) goto LAB_0245c2be;
LAB_0245c39b:
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
    if (1e-05 < fVar20) goto LAB_0245c39b;
LAB_0245c2be:
    if (DAT_056fdd15 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_Vector3);
      DAT_056fdd15 = '\x01';
    }
    uVar17 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
    fVar19 = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
  }
  fVar10 = fVar12 * (float)uVar17;
  fVar9 = fVar12 * (float)((ulong)uVar17 >> 0x20);
  fVar19 = fVar19 * fVar12;
LAB_0245c473:
  (position->fields).x = (float)uVar3 + fVar10;
  (position->fields).y = (float)uVar5 + fVar9;
  (position->fields).z = fVar1 + fVar19;
  return;
}


// EZhex1991.EZSoftBone.EZSoftBoneUtility$$PointOutsideBox
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBoneUtility__PointOutsideBox (UnityEngine_Vector3_o* position, UnityEngine_BoxCollider_o* collider, float spacing, const MethodInfo* method);
// 0x2459550

void EZhex1991_EZSoftBone_EZSoftBoneUtility__PointOutsideBox
               (UnityEngine_Vector3_o *position,UnityEngine_BoxCollider_o *collider,float spacing,
               MethodInfo *method)

{
  undefined8 uVar1;
  UnityEngine_Transform_o *pUVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  UnityEngine_Vector3_o UVar9;
  UnityEngine_Vector3_o UVar10;
  UnityEngine_Vector3_o UVar11;
  float local_88;
  float local_78;
  float fStack_74;
  float local_68;
  float fStack_64;
  float local_48;
  float fStack_44;
  float local_38;
  float fStack_34;
  
  if ((collider == (UnityEngine_BoxCollider_o *)0x0) ||
     (pUVar2 = UnityEngine_Component__get_transform
                         ((UnityEngine_Component_o *)collider,(MethodInfo *)0x0),
     pUVar2 == (UnityEngine_Transform_o *)0x0)) goto LAB_0245980c;
  UVar9 = UnityEngine_Transform__InverseTransformPoint(pUVar2,position->fields,(MethodInfo *)0x0);
  UVar10 = UnityEngine_BoxCollider__get_center(collider,(MethodInfo *)0x0);
  UVar11 = UnityEngine_BoxCollider__get_size(collider,(MethodInfo *)0x0);
  pUVar2 = UnityEngine_Component__get_transform
                     ((UnityEngine_Component_o *)collider,(MethodInfo *)0x0);
  if (DAT_056fe077 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Vector3);
    DAT_056fe077 = '\x01';
  }
  if (pUVar2 == (UnityEngine_Transform_o *)0x0) goto LAB_0245980c;
  local_68 = UVar9.fields.x;
  fStack_64 = UVar9.fields.y;
  local_38 = UVar10.fields.x;
  fStack_34 = UVar10.fields.y;
  fStack_74 = fStack_64 - fStack_34;
  local_78 = local_68 - local_38;
  local_88 = UVar9.fields.z - UVar10.fields.z;
  local_48 = UVar11.fields.x;
  uVar1 = *(undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0xc);
  UVar9.fields.x = spacing * (float)uVar1;
  UVar9.fields.y = spacing * (float)((ulong)uVar1 >> 0x20);
  UVar9.fields.z = spacing * *(float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x14);
  UVar9 = UnityEngine_Transform__InverseTransformVector(pUVar2,UVar9,(MethodInfo *)0x0);
  fVar4 = ABS(UVar9.fields.x) + ABS(local_48) * 0.5;
  fVar5 = ABS(UVar9.fields.z) + ABS(UVar11.fields.z) * 0.5;
  if ((ABS(local_78) < fVar4) && (ABS(local_88) < fVar5)) {
    fStack_44 = UVar11.fields.y;
    fVar3 = ABS(UVar9.fields.y) + ABS(fStack_44) * 0.5;
    if (ABS(fStack_74) < fVar3) {
      fVar8 = ABS(ABS(fStack_74) - fVar3);
      fVar6 = ABS(ABS(local_78) - fVar4);
      fVar7 = ABS(ABS(local_88) - fVar5);
      if (fVar8 <= fVar6) {
        if (fVar7 <= fVar8) goto LAB_024597ec;
        fStack_74 = fVar3 * *(float *)(&DAT_00cd0ef0 + (ulong)(0.0 <= fStack_74) * 4);
      }
      else if (fVar7 <= fVar6) {
LAB_024597ec:
        local_88 = fVar5 * *(float *)(&DAT_00cd0ef0 + (ulong)(0.0 <= local_88) * 4);
      }
      else {
        local_78 = fVar4 * *(float *)(&DAT_00cd0ef0 + (ulong)(0.0 <= local_78) * 4);
      }
    }
  }
  pUVar2 = UnityEngine_Component__get_transform
                     ((UnityEngine_Component_o *)collider,(MethodInfo *)0x0);
  UVar9 = UnityEngine_BoxCollider__get_center(collider,(MethodInfo *)0x0);
  if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
    UVar10.fields.y = fStack_74 + UVar9.fields.y;
    UVar10.fields.x = local_78 + UVar9.fields.x;
    UVar10.fields.z = local_88 + UVar9.fields.z;
    UVar9 = UnityEngine_Transform__TransformPoint(pUVar2,UVar10,(MethodInfo *)0x0);
    (position->fields).x = (float)(int)UVar9.fields._0_8_;
    (position->fields).y = (float)(int)((ulong)UVar9.fields._0_8_ >> 0x20);
    (position->fields).z = UVar9.fields.z;
    return;
  }
LAB_0245980c:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// EZhex1991.EZSoftBone.EZSoftBoneUtility$$PointOutsideBox
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBoneUtility__PointOutsideBox (UnityEngine_Vector3_o* position, UnityEngine_Vector3_o boxSize, const MethodInfo* method);
// 0x245c4a0

void EZhex1991_EZSoftBone_EZSoftBoneUtility__PointOutsideBox
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
          (position->fields).y =
               fVar5 * *(float *)(&DAT_00cd0ef0 + (ulong)(0.0 <= (position->fields).y) * 4);
          return;
        }
      }
      else if (fVar7 < fVar8) {
        (position->fields).x = fVar4 * *(float *)(&DAT_00cd0ef0 + (ulong)(0.0 <= (float)uVar2) * 4);
        return;
      }
      (position->fields).z = fVar6 * *(float *)(&DAT_00cd0ef0 + (ulong)(0.0 <= fVar1) * 4);
    }
  }
  return;
}


// EZhex1991.EZSoftBone.EZSoftBoneUtility$$PointInsideBox
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBoneUtility__PointInsideBox (UnityEngine_Vector3_o* position, UnityEngine_BoxCollider_o* collider, float spacing, const MethodInfo* method);
// 0x24592b0

void EZhex1991_EZSoftBone_EZSoftBoneUtility__PointInsideBox
               (UnityEngine_Vector3_o *position,UnityEngine_BoxCollider_o *collider,float spacing,
               MethodInfo *method)

{
  undefined8 uVar1;
  UnityEngine_Transform_o *pUVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  UnityEngine_Vector3_o UVar6;
  UnityEngine_Vector3_o UVar7;
  UnityEngine_Vector3_o UVar8;
  float local_88;
  float local_78;
  float fStack_74;
  float local_68;
  float fStack_64;
  float local_48;
  float fStack_44;
  
  if ((collider != (UnityEngine_BoxCollider_o *)0x0) &&
     (pUVar2 = UnityEngine_Component__get_transform
                         ((UnityEngine_Component_o *)collider,(MethodInfo *)0x0),
     pUVar2 != (UnityEngine_Transform_o *)0x0)) {
    UVar6 = UnityEngine_Transform__InverseTransformPoint(pUVar2,position->fields,(MethodInfo *)0x0);
    UVar7 = UnityEngine_BoxCollider__get_center(collider,(MethodInfo *)0x0);
    UVar8 = UnityEngine_BoxCollider__get_size(collider,(MethodInfo *)0x0);
    pUVar2 = UnityEngine_Component__get_transform
                       ((UnityEngine_Component_o *)collider,(MethodInfo *)0x0);
    if (DAT_056fe077 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_Vector3);
      DAT_056fe077 = '\x01';
    }
    if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
      local_78 = UVar6.fields.x;
      fStack_74 = UVar6.fields.y;
      local_68 = UVar7.fields.x;
      fStack_64 = UVar7.fields.y;
      local_78 = local_78 - local_68;
      fStack_74 = fStack_74 - fStack_64;
      local_48 = UVar8.fields.x;
      fStack_44 = UVar8.fields.y;
      local_88 = UVar6.fields.z - UVar7.fields.z;
      fVar3 = ABS(UVar8.fields.z) * 0.5;
      uVar1 = *(undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0xc);
      UVar6.fields.x = spacing * (float)uVar1;
      UVar6.fields.y = spacing * (float)((ulong)uVar1 >> 0x20);
      UVar6.fields.z = spacing * *(float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x14);
      UVar6 = UnityEngine_Transform__InverseTransformVector(pUVar2,UVar6,(MethodInfo *)0x0);
      fVar4 = ABS(local_48) * 0.5 - ABS(UVar6.fields.x);
      fVar5 = ABS(fStack_44) * 0.5 - ABS(UVar6.fields.y);
      if (fVar4 < ABS(local_78)) {
        local_78 = fVar4 * *(float *)(&DAT_00cd0ef0 + (ulong)(0.0 <= local_78) * 4);
      }
      if (fVar5 < ABS(fStack_74)) {
        fStack_74 = fVar5 * *(float *)(&DAT_00cd0ef0 + (ulong)(0.0 <= fStack_74) * 4);
      }
      if (fVar3 - ABS(UVar6.fields.z) < ABS(local_88)) {
        local_88 = (fVar3 - ABS(UVar6.fields.z)) *
                   *(float *)(&DAT_00cd0ef0 + (ulong)(0.0 <= local_88) * 4);
      }
      pUVar2 = UnityEngine_Component__get_transform
                         ((UnityEngine_Component_o *)collider,(MethodInfo *)0x0);
      UVar6 = UnityEngine_BoxCollider__get_center(collider,(MethodInfo *)0x0);
      if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
        UVar7.fields.y = fStack_74 + UVar6.fields.y;
        UVar7.fields.x = local_78 + UVar6.fields.x;
        UVar7.fields.z = local_88 + UVar6.fields.z;
        UVar6 = UnityEngine_Transform__TransformPoint(pUVar2,UVar7,(MethodInfo *)0x0);
        (position->fields).x = (float)(int)UVar6.fields._0_8_;
        (position->fields).y = (float)(int)((ulong)UVar6.fields._0_8_ >> 0x20);
        (position->fields).z = UVar6.fields.z;
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// EZhex1991.EZSoftBone.EZSoftBoneUtility$$PointInsideBox
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBoneUtility__PointInsideBox (UnityEngine_Vector3_o* position, UnityEngine_Vector3_o boxSize, const MethodInfo* method);
// 0x245c580

void EZhex1991_EZSoftBone_EZSoftBoneUtility__PointInsideBox
               (UnityEngine_Vector3_o *position,UnityEngine_Vector3_o boxSize,MethodInfo *method)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar2 = (position->fields).x;
  uVar3 = (position->fields).y;
  fVar1 = (position->fields).z;
  if (boxSize.fields.x < ABS((float)uVar2)) {
    (position->fields).x =
         *(float *)(&DAT_00cd0ef0 + (ulong)(0.0 <= (float)uVar2) * 4) * boxSize.fields.x;
  }
  if (boxSize.fields.y < ABS((float)uVar3)) {
    (position->fields).y =
         boxSize.fields.y * *(float *)(&DAT_00cd0ef0 + (ulong)(0.0 <= (position->fields).y) * 4);
  }
  if (boxSize.fields.z < ABS(fVar1)) {
    (position->fields).z = boxSize.fields.z * *(float *)(&DAT_00cd0ef0 + (ulong)(0.0 <= fVar1) * 4);
    return;
  }
  return;
}


// EZhex1991.EZSoftBone.EZSoftBoneUtility$$PointOutsideCollider
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBoneUtility__PointOutsideCollider (UnityEngine_Vector3_o* position, UnityEngine_Collider_o* collider, float spacing, const MethodInfo* method);
// 0x2457920

void EZhex1991_EZSoftBone_EZSoftBoneUtility__PointOutsideCollider
               (UnityEngine_Vector3_o *position,UnityEngine_Collider_o *collider,float spacing,
               MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 auVar3 [16];
  float fVar4;
  float extraout_XMM0_Dc;
  undefined4 uVar5;
  undefined4 extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dc_01;
  float extraout_XMM0_Dd;
  undefined4 uVar6;
  undefined4 extraout_XMM0_Dd_00;
  undefined4 extraout_XMM0_Dd_01;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  float fVar11;
  float fVar12;
  UnityEngine_Vector3_o UVar13;
  UnityEngine_Vector3_o end;
  UnityEngine_Color_o color;
  undefined1 local_88 [8];
  float fStack_80;
  float fStack_7c;
  float local_68;
  float fStack_64;
  UnityEngine_Bounds_o local_50;
  undefined1 local_38 [16];
  undefined1 local_28 [8];
  undefined8 uStack_20;
  float fVar7;
  undefined8 uVar8;
  
  if (DAT_056fe074 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Debug);
    DAT_056fe074 = '\x01';
  }
  if (collider == (UnityEngine_Collider_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  UVar13 = UnityEngine_Collider__ClosestPoint(collider,position->fields,(MethodInfo *)0x0);
  fVar7 = UVar13.fields.z;
  uVar1 = (position->fields).x;
  uVar2 = (position->fields).y;
  fVar4 = (position->fields).z;
  local_38._8_4_ = extraout_XMM0_Dc;
  local_38._0_8_ = UVar13.fields._0_8_;
  local_38._12_4_ = extraout_XMM0_Dd;
  local_88._0_4_ = (float)uVar1 - UVar13.fields.x;
  local_88._4_4_ = (float)uVar2 - UVar13.fields.y;
  fVar11 = fVar4 - fVar7;
  fStack_80 = 0.0 - extraout_XMM0_Dc;
  fStack_7c = 0.0 - extraout_XMM0_Dd;
  fVar12 = fVar11 * fVar11 +
           (float)local_88._4_4_ * (float)local_88._4_4_ +
           (float)local_88._0_4_ * (float)local_88._0_4_;
  if (9.9999994e-11 <= fVar12) {
    if (DAT_056fde1c == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_Math);
      DAT_056fde1c = '\x01';
      if (*(int *)(TypeInfo_Math + 0xe4) != 0) goto LAB_02457b1f;
LAB_02457be5:
      il2cpp_init_class();
      if (0.0 <= fVar12) goto LAB_02457b2b;
LAB_02457bfc:
      fVar4 = sqrtf(fVar12);
    }
    else {
      if (*(int *)(TypeInfo_Math + 0xe4) == 0) goto LAB_02457be5;
LAB_02457b1f:
      if (fVar12 < 0.0) goto LAB_02457bfc;
LAB_02457b2b:
      fVar4 = SQRT(fVar12);
    }
    if (spacing <= fVar4) {
      return;
    }
    if (DAT_056fde20 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_Math);
      DAT_056fde20 = '\x01';
      if (*(int *)(TypeInfo_Math + 0xe4) != 0) goto LAB_02457b5e;
LAB_02457c4d:
      il2cpp_init_class();
      if (0.0 <= fVar12) goto LAB_02457b6a;
LAB_02457c64:
      fVar12 = sqrtf(fVar12);
      uVar5 = extraout_XMM0_Dc_01;
      uVar6 = extraout_XMM0_Dd_01;
    }
    else {
      if (*(int *)(TypeInfo_Math + 0xe4) == 0) goto LAB_02457c4d;
LAB_02457b5e:
      if (fVar12 < 0.0) goto LAB_02457c64;
LAB_02457b6a:
      uVar5 = 0;
      uVar6 = 0;
      fVar12 = SQRT(fVar12);
    }
    if (1e-05 < fVar12) {
      fVar4 = fVar11 / fVar12;
      auVar10._4_4_ = fVar12;
      auVar10._0_4_ = fVar12;
      auVar10._8_4_ = uVar5;
      auVar10._12_4_ = uVar6;
      auVar10 = divps(_local_88,auVar10);
      uVar8 = auVar10._0_8_;
      goto LAB_02457cc3;
    }
  }
  else {
    UnityEngine_Collider__get_bounds(&local_50,collider,(MethodInfo *)0x0);
    uVar8 = local_50.fields.m_Center.fields._0_8_;
    fVar4 = fVar4 - local_50.fields.m_Center.fields.z;
    UnityEngine_Collider__get_bounds(&local_50,collider,(MethodInfo *)0x0);
    fVar12 = local_50.fields.m_Center.fields.x;
    fVar11 = local_50.fields.m_Center.fields.y;
    if (*(int *)(TypeInfo_Debug + 0xe4) == 0) {
      local_28._0_4_ = local_50.fields.m_Center.fields.x;
      local_28._4_4_ = local_50.fields.m_Center.fields.y;
      uStack_20 = 0;
      il2cpp_init_class();
      fVar12 = (float)local_28._0_4_;
      fVar11 = (float)local_28._4_4_;
    }
    auVar10 = local_38;
    UVar13.fields.y = fVar11;
    UVar13.fields.x = fVar12;
    UVar13.fields.z = local_50.fields.m_Center.fields.z;
    end.fields.z = fVar7;
    end.fields.x = (float)local_38._0_4_;
    end.fields.y = (float)local_38._4_4_;
    color.fields.b = 0.0;
    color.fields.a = 1.0;
    color.fields.r = 1.0;
    color.fields.g = 0.0;
    local_38 = auVar10;
    UnityEngine_Debug__DrawLine(UVar13,end,color,(MethodInfo *)0x0);
    if (DAT_056fde20 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_Math);
      DAT_056fde20 = '\x01';
    }
    local_68 = (float)uVar8;
    fStack_64 = SUB84(uVar8,4);
    auVar9._0_4_ = (float)uVar1 - local_68;
    auVar9._4_4_ = (float)uVar2 - fStack_64;
    auVar9._8_8_ = 0;
    if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
      il2cpp_init_class();
    }
    uVar5 = 0;
    uVar6 = 0;
    fVar12 = fVar4 * fVar4 + auVar9._4_4_ * auVar9._4_4_ + auVar9._0_4_ * auVar9._0_4_;
    if (fVar12 < 0.0) {
      fVar12 = sqrtf(fVar12);
      uVar5 = extraout_XMM0_Dc_00;
      uVar6 = extraout_XMM0_Dd_00;
    }
    else {
      fVar12 = SQRT(fVar12);
    }
    if (1e-05 < fVar12) {
      fVar4 = fVar4 / fVar12;
      auVar3._4_4_ = fVar12;
      auVar3._0_4_ = fVar12;
      auVar3._8_4_ = uVar5;
      auVar3._12_4_ = uVar6;
      auVar10 = divps(auVar9,auVar3);
      uVar8 = auVar10._0_8_;
      goto LAB_02457cc3;
    }
  }
  if (DAT_056fdd15 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Vector3);
    DAT_056fdd15 = '\x01';
  }
  uVar8 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
  fVar4 = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
LAB_02457cc3:
  (position->fields).x = (float)uVar8 * spacing + (float)local_38._0_4_;
  (position->fields).y = (float)local_38._4_4_ + (float)((ulong)uVar8 >> 0x20) * spacing;
  (position->fields).z = fVar7 + fVar4 * spacing;
  return;
}


// EZhex1991.EZSoftBone.EZSoftBoneUtility$$DrawGizmosArrow
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBoneUtility__DrawGizmosArrow (UnityEngine_Vector3_o startPoint, UnityEngine_Vector3_o direction, float halfWidth, UnityEngine_Vector3_o normal, const MethodInfo* method);
// 0x245c630

void EZhex1991_EZSoftBone_EZSoftBoneUtility__DrawGizmosArrow
               (UnityEngine_Vector3_o startPoint,UnityEngine_Vector3_o direction,float halfWidth,
               UnityEngine_Vector3_o normal,MethodInfo *method)

{
  undefined1 auVar1 [16];
  uint uVar2;
  long lVar3;
  ulong uVar4;
  float *pfVar5;
  ulong uVar6;
  float fVar7;
  float extraout_XMM0_Dc;
  float extraout_XMM0_Dd;
  float fVar8;
  float fVar9;
  float in_XMM2_Dc;
  float in_XMM2_Dd;
  float fVar10;
  float in_XMM3_Db;
  float fVar11;
  float fVar12;
  float fVar13;
  float in_XMM5_Dc;
  float in_XMM5_Dd;
  float fVar14;
  float fVar16;
  undefined1 auVar15 [16];
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  UnityEngine_Vector3_o to;
  undefined8 local_a8;
  float local_78;
  float local_38;
  float fStack_34;
  
  fVar13 = direction.fields.z;
  fVar12 = direction.fields.y;
  fVar8 = startPoint.fields.z;
  if (DAT_056fe075 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Vector3);
    DAT_056fe075 = '\x01';
  }
  local_78 = direction.fields.x;
  if (DAT_056fde20 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Math);
    DAT_056fde20 = '\x01';
  }
  auVar15._0_4_ = normal.fields.z * fVar12 - normal.fields.y * fVar13;
  auVar15._4_4_ = fVar13 * normal.fields.x - local_78 * normal.fields.z;
  auVar15._8_4_ = normal._12_4_ * in_XMM2_Dc - in_XMM5_Dc * in_XMM3_Db;
  auVar15._12_4_ = in_XMM3_Db * in_XMM2_Dd - in_XMM5_Dd * normal._12_4_;
  fVar11 = normal.fields.y * local_78 - fVar12 * normal.fields.x;
  if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
    il2cpp_init_class();
  }
  fVar7 = fVar11 * fVar11 + auVar15._4_4_ * auVar15._4_4_ + auVar15._0_4_ * auVar15._0_4_;
  if (fVar7 < 0.0) {
    fVar7 = sqrtf(fVar7);
    in_XMM5_Dc = extraout_XMM0_Dc;
    in_XMM5_Dd = extraout_XMM0_Dd;
  }
  else {
    fVar7 = SQRT(fVar7);
  }
  if (1e-05 < fVar7) {
    fVar11 = fVar11 / fVar7;
    auVar1._4_4_ = fVar7;
    auVar1._0_4_ = fVar7;
    auVar1._8_4_ = in_XMM5_Dc;
    auVar1._12_4_ = in_XMM5_Dd;
    auVar15 = divps(auVar15,auVar1);
    local_a8 = auVar15._0_8_;
  }
  else {
    if (DAT_056fdd15 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_Vector3);
      DAT_056fdd15 = '\x01';
    }
    local_a8 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
    fVar11 = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
  }
  lVar3 = il2cpp_glue_02274930(TypeInfo_Vector3,8);
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  uVar6 = *(ulong *)(lVar3 + 0x18);
  uVar2 = (uint)uVar6;
  local_38 = startPoint.fields.x;
  fStack_34 = startPoint.fields.y;
  if (uVar2 != 0) {
    fVar7 = (float)local_a8 * halfWidth * 0.5;
    fVar9 = local_a8._4_4_ * halfWidth * 0.5;
    fVar10 = fVar11 * halfWidth * 0.5;
    fVar18 = fVar7 + local_38;
    fVar19 = fVar9 + fStack_34;
    fVar20 = fVar10 + fVar8;
    *(ulong *)(lVar3 + 0x20) = CONCAT44(fVar19,fVar18);
    *(float *)(lVar3 + 0x28) = fVar20;
    if (uVar2 != 1) {
      fVar14 = local_78 * 0.5 + fVar18;
      fVar16 = fVar12 * 0.5 + fVar19;
      fVar17 = fVar13 * 0.5 + fVar20;
      *(ulong *)(lVar3 + 0x2c) = CONCAT44(fVar16,fVar14);
      *(float *)(lVar3 + 0x34) = fVar17;
      if (2 < uVar2) {
        *(ulong *)(lVar3 + 0x38) = CONCAT44(fVar16 + fVar9,fVar14 + fVar7);
        *(float *)(lVar3 + 0x40) = fVar17 + fVar10;
        if (uVar2 != 3) {
          *(ulong *)(lVar3 + 0x44) = CONCAT44(fVar12 + fStack_34,local_78 + local_38);
          *(float *)(lVar3 + 0x4c) = fVar13 + fVar8;
          if (4 < uVar2) {
            fVar14 = local_78 * 0.5 + (local_38 - (float)local_a8 * halfWidth);
            fVar12 = fVar12 * 0.5 + (fStack_34 - local_a8._4_4_ * halfWidth);
            fVar13 = fVar13 * 0.5 + (fVar8 - fVar11 * halfWidth);
            *(ulong *)(lVar3 + 0x50) = CONCAT44(fVar12,fVar14);
            *(float *)(lVar3 + 0x58) = fVar13;
            if (uVar2 != 5) {
              *(ulong *)(lVar3 + 0x5c) = CONCAT44(fVar12 + fVar9,fVar14 + fVar7);
              *(float *)(lVar3 + 100) = fVar13 + fVar10;
              if (6 < uVar2) {
                *(ulong *)(lVar3 + 0x68) = CONCAT44(fStack_34 - fVar9,local_38 - fVar7);
                *(float *)(lVar3 + 0x70) = fVar8 - fVar10;
                if (uVar2 != 7) {
                  uVar4 = uVar6 & 0xffffffff;
                  *(ulong *)(lVar3 + 0x74) = CONCAT44(fVar19,fVar18);
                  *(float *)(lVar3 + 0x7c) = fVar20;
                  if (uVar6 << 0x20 != 0x100000000 && -1 < (long)((uVar6 << 0x20) + -0x100000000)) {
                    pfVar5 = (float *)(lVar3 + 0x34);
                    uVar6 = 0;
                    do {
                      if ((uVar4 <= uVar6) || (uVar6 = uVar6 + 1, uVar4 <= uVar6))
                      goto LAB_0245c9f4;
                      to.fields.z = *pfVar5;
                      to.fields.x = pfVar5[-2];
                      to.fields.y = pfVar5[-1];
                      UnityEngine_Gizmos__DrawLine
                                ((UnityEngine_Vector3_o)*(UnityEngine_Vector3_Fields *)(pfVar5 + -5)
                                 ,to,(MethodInfo *)0x0);
                      uVar4 = (ulong)*(uint *)(lVar3 + 0x18);
                      pfVar5 = pfVar5 + 3;
                    } while ((long)uVar6 < (long)((uVar4 << 0x20) + -0x100000000) >> 0x20);
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
LAB_0245c9f4:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// EZhex1991.EZSoftBone.EZSoftBoneUtility$$DrawGizmosPolyLine
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBoneUtility__DrawGizmosPolyLine (UnityEngine_Vector3_array* vertices, const MethodInfo* method);
// 0x245ca00

void EZhex1991_EZSoftBone_EZSoftBoneUtility__DrawGizmosPolyLine
               (UnityEngine_Vector3_array *vertices,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  ulong uVar3;
  float *pfVar4;
  ulong uVar5;
  UnityEngine_Vector3_o to;
  
  if (vertices == (UnityEngine_Vector3_array *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  uVar3 = (ulong)(uint)vertices->max_length;
  if (0 < (long)((uVar3 << 0x20) + -0x100000000)) {
    pfVar4 = &vertices->m_Items[1].fields.z;
    uVar5 = 0;
    do {
      if ((uVar3 <= uVar5) || (uVar5 = uVar5 + 1, uVar3 <= uVar5)) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      uVar1 = ((UnityEngine_Vector3_Fields *)(pfVar4 + -2))->x;
      uVar2 = ((UnityEngine_Vector3_Fields *)(pfVar4 + -2))->y;
      to.fields.y = (float)uVar2;
      to.fields.x = (float)uVar1;
      to.fields.z = *pfVar4;
      UnityEngine_Gizmos__DrawLine
                ((UnityEngine_Vector3_o)*(UnityEngine_Vector3_Fields *)(pfVar4 + -5),to,
                 (MethodInfo *)0x0);
      uVar3 = (ulong)(uint)vertices->max_length;
      pfVar4 = pfVar4 + 3;
    } while ((long)uVar5 < (long)((uVar3 << 0x20) + -0x100000000) >> 0x20);
  }
  return;
}


