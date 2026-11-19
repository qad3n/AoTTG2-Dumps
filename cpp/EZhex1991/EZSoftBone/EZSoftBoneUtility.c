// Type: EZhex1991.EZSoftBone.EZSoftBoneUtility
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/EZhex1991.EZSoftBone/EZhex1991.EZSoftBone/EZSoftBoneUtility.cs
// Prior real C# source (older reference): Assets/ThirdParty/EZhex1991/EZSoftBone/Runtime/EZSoftBoneUtility.cs
// --------------------------------

// EZhex1991.EZSoftBone.EZSoftBoneUtility$$Abs
// il2cpp: UnityEngine_Vector3_o EZhex1991_EZSoftBone_EZSoftBoneUtility__Abs (UnityEngine_Vector3_o v, const MethodInfo* method);
// 0x32a4950

UnityEngine_Vector3_o EZhex1991_EZSoftBone_EZSoftBoneUtility__Abs(UnityEngine_Vector3_o v,MethodInfo *method)

{
  UnityEngine_Vector3_o UVar1;
  
  UVar1.fields._0_8_ = v.fields._0_8_ & 0x7fffffff7fffffff;
  UVar1.fields.z = ABS(v.fields.z);
  return (UnityEngine_Vector3_o)UVar1.fields;
}


// EZhex1991.EZSoftBone.EZSoftBoneUtility$$Max
// il2cpp: float EZhex1991_EZSoftBone_EZSoftBoneUtility__Max (UnityEngine_Vector3_o v, const MethodInfo* method);
// 0x32a4960

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
// 0x32a5ee0

bool EZhex1991_EZSoftBone_EZSoftBoneUtility__Contains
               (UnityEngine_LayerMask_o mask,int32_t layer,MethodInfo *method)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = UnityEngine_LayerMask__op_Implicit(mask,(MethodInfo *)0x0);
  uVar2 = UnityEngine_LayerMask__op_Implicit(mask,(MethodInfo *)0x0);
  return (uVar1 | 1 << (layer & 0x1fU)) == uVar2;
}


// EZhex1991.EZSoftBone.EZSoftBoneUtility$$GetCapsuleParams
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBoneUtility__GetCapsuleParams (UnityEngine_CapsuleCollider_o* collider, UnityEngine_Vector3_o* center0, UnityEngine_Vector3_o* center1, float* radius, const MethodInfo* method);
// 0x32a8990

void EZhex1991_EZSoftBone_EZSoftBoneUtility__GetCapsuleParams
               (UnityEngine_CapsuleCollider_o *collider,UnityEngine_Vector3_o *center0,
               UnityEngine_Vector3_o *center1,float *radius,MethodInfo *method)

{
  int32_t iVar1;
  UnityEngine_Transform_o *pUVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  UnityEngine_Vector3_o UVar8;
  
  if (collider == (UnityEngine_CapsuleCollider_o *)0x0) goto label_032a8b90;
  pUVar2 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)collider,(MethodInfo *)0x0);
  if (pUVar2 == (UnityEngine_Transform_o *)0x0) goto label_032a8b90;
  UVar8 = UnityEngine_Transform__get_lossyScale(pUVar2,(MethodInfo *)0x0);
  fVar7 = ABS(UVar8.fields.x);
  fVar4 = ABS(UVar8.fields.y);
  fVar6 = ABS(UVar8.fields.z);
  fVar5 = UnityEngine_CapsuleCollider__get_radius(collider,(MethodInfo *)0x0);
  *radius = fVar5;
  UVar8 = UnityEngine_CapsuleCollider__get_center(collider,(MethodInfo *)0x0);
  (center1->fields).x = UVar8.fields.x;
  (center1->fields).y = UVar8.fields.y;
  (center1->fields).z = UVar8.fields.z;
  (center0->fields).x = UVar8.fields.x;
  (center0->fields).y = UVar8.fields.y;
  (center0->fields).z = UVar8.fields.z;
  fVar5 = UnityEngine_CapsuleCollider__get_height(collider,(MethodInfo *)0x0);
  fVar5 = fVar5 * 0.5;
  iVar1 = UnityEngine_CapsuleCollider__get_direction(collider,(MethodInfo *)0x0);
  if (iVar1 == 2) {
    pfVar3 = &(center1->fields).z;
    if (fVar7 <= fVar4) {
      fVar7 = fVar4;
    }
    fVar4 = *radius;
    *radius = fVar7 * fVar4;
    fVar5 = fVar5 - (fVar7 * fVar4) / fVar6;
    fVar4 = 0.0;
    if (0.0 <= fVar5) {
      fVar4 = fVar5;
    }
    (center0->fields).z = (center0->fields).z - fVar4;
label_032a8b20:
    *pfVar3 = fVar4 + *pfVar3;
  }
  else {
    if (iVar1 == 1) {
      if (fVar7 <= fVar6) {
        fVar7 = fVar6;
      }
      fVar6 = *radius;
      *radius = fVar7 * fVar6;
      fVar5 = fVar5 - (fVar7 * fVar6) / fVar4;
      fVar4 = 0.0;
      if (0.0 <= fVar5) {
        fVar4 = fVar5;
      }
      (center0->fields).y = (center0->fields).y - fVar4;
      pfVar3 = &(center1->fields).y;
      goto label_032a8b20;
    }
    if (iVar1 == 0) {
      if (fVar4 <= fVar6) {
        fVar4 = fVar6;
      }
      fVar6 = *radius;
      *radius = fVar4 * fVar6;
      fVar5 = fVar5 - (fVar4 * fVar6) / fVar7;
      fVar4 = 0.0;
      if (0.0 <= fVar5) {
        fVar4 = fVar5;
      }
      (center0->fields).x = (center0->fields).x - fVar4;
      pfVar3 = (float *)center1;
      goto label_032a8b20;
    }
  }
  pUVar2 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)collider,(MethodInfo *)0x0);
  if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
    UVar8 = UnityEngine_Transform__TransformPoint
                      (pUVar2,(UnityEngine_Vector3_o)center0->fields,(MethodInfo *)0x0);
    (center0->fields).x = UVar8.fields.x;
    (center0->fields).y = UVar8.fields.y;
    (center0->fields).z = UVar8.fields.z;
    pUVar2 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)collider,(MethodInfo *)0x0);
    if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
      UVar8 = UnityEngine_Transform__TransformPoint
                        (pUVar2,(UnityEngine_Vector3_o)center1->fields,(MethodInfo *)0x0);
      (center1->fields).x = UVar8.fields.x;
      (center1->fields).y = UVar8.fields.y;
      (center1->fields).z = UVar8.fields.z;
      return;
    }
  }
label_032a8b90:
  ThrowNullReferenceException();
}


// EZhex1991.EZSoftBone.EZSoftBoneUtility$$GetCylinderParams
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBoneUtility__GetCylinderParams (UnityEngine_Transform_o* transform, UnityEngine_Vector3_o* center, UnityEngine_Vector3_o* direction, float* radius, float* height, const MethodInfo* method);
// 0x32a8ba0

void EZhex1991_EZSoftBone_EZSoftBoneUtility__GetCylinderParams
               (UnityEngine_Transform_o *transform,UnityEngine_Vector3_o *center,
               UnityEngine_Vector3_o *direction,float *radius,float *height,MethodInfo *method)

{
  float fVar1;
  UnityEngine_Vector3_o UVar2;
  UnityEngine_Vector3_o UVar3;
  
  if (transform == (UnityEngine_Transform_o *)0x0) {
    ThrowNullReferenceException();
  }
  UVar2 = UnityEngine_Transform__get_lossyScale(transform,(MethodInfo *)0x0);
  UVar3 = UnityEngine_Transform__get_position(transform,(MethodInfo *)0x0);
  (center->fields).x = UVar3.fields.x;
  (center->fields).y = UVar3.fields.y;
  (center->fields).z = UVar3.fields.z;
  UVar3 = UnityEngine_Transform__get_up(transform,(MethodInfo *)0x0);
  (direction->fields).x = UVar3.fields.x;
  (direction->fields).y = UVar3.fields.y;
  (direction->fields).z = UVar3.fields.z;
  fVar1 = ABS(UVar2.fields.x);
  if (ABS(UVar2.fields.x) <= ABS(UVar2.fields.z)) {
    fVar1 = ABS(UVar2.fields.z);
  }
  *radius = fVar1 * 0.5;
  *height = ABS(UVar2.fields.y);
  return;
}


// EZhex1991.EZSoftBone.EZSoftBoneUtility$$PointOutsideSphere
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBoneUtility__PointOutsideSphere (UnityEngine_Vector3_o* position, UnityEngine_SphereCollider_o* collider, float spacing, const MethodInfo* method);
// 0x32a7450
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x32a75da: jmp 0x32a771c

void EZhex1991_EZSoftBone_EZSoftBoneUtility__PointOutsideSphere
               (UnityEngine_Vector3_o *position,UnityEngine_SphereCollider_o *collider,float spacing,
               MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint32_t uVar3;
  undefined1 auVar4 [16];
  UnityEngine_Transform_o *pUVar5;
  UnityEngine_Vector3_StaticFields *pUVar6;
  float fVar7;
  float fVar8;
  undefined4 uVar9;
  undefined4 extraout_XMM0_Db;
  float extraout_XMM0_Dc;
  float extraout_XMM0_Dc_00;
  float fVar10;
  float extraout_XMM0_Dd;
  float extraout_XMM0_Dd_00;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar15;
  undefined1 auVar14 [16];
  float fVar16;
  UnityEngine_Vector3_o UVar17;
  UnityEngine_Vector3_o position_00;
  float fStack_58;
  float fStack_54;
  undefined1 auStack_40 [12];
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  
  if ((collider != (UnityEngine_SphereCollider_o *)0x0) &&
     (pUVar5 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)collider,(MethodInfo *)0x0),
     pUVar5 != (UnityEngine_Transform_o *)0x0)) {
    UVar17 = UnityEngine_Transform__get_lossyScale(pUVar5,(MethodInfo *)0x0);
    fVar7 = UnityEngine_SphereCollider__get_radius(collider,(MethodInfo *)0x0);
    pUVar5 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)collider,(MethodInfo *)0x0);
    position_00 = UnityEngine_SphereCollider__get_center(collider,(MethodInfo *)0x0);
    if (pUVar5 != (UnityEngine_Transform_o *)0x0) {
      fStack_58 = UVar17.fields.x;
      fStack_54 = UVar17.fields.y;
      fStack_24 = ABS(fStack_54);
      fStack_20 = ABS(extraout_XMM0_Dc);
      fStack_1c = ABS(extraout_XMM0_Dd);
      fVar12 = ABS(fStack_54);
      if (ABS(fStack_54) <= ABS(UVar17.fields.z)) {
        fVar12 = ABS(UVar17.fields.z);
      }
      fStack_28 = ABS(fStack_58);
      if (ABS(fStack_58) <= fVar12) {
        fStack_28 = fVar12;
      }
      UVar17 = UnityEngine_Transform__TransformPoint(pUVar5,position_00,(MethodInfo *)0x0);
      fVar13 = (position->fields).x;
      fVar15 = (position->fields).y;
      fVar12 = (position->fields).z;
      fStack_30 = extraout_XMM0_Dc_00;
      unique0x100000d6 = UVar17.fields._0_8_;
      fStack_2c = extraout_XMM0_Dd_00;
      fVar16 = UVar17.fields.x;
      fVar8 = UVar17.fields.y;
      fVar10 = extraout_XMM0_Dc_00;
      fVar11 = extraout_XMM0_Dd_00;
      if (Il2CppMethodInitialized_0753e729 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
        Il2CppMethodInitialized_0753e729 = '\x01';
        fVar16 = (float)auStack_40._8_4_;
        fVar8 = fStack_34;
        fVar10 = fStack_30;
        fVar11 = fStack_2c;
      }
      fVar7 = fVar7 * fStack_28;
      fVar13 = fVar13 - fVar16;
      fVar15 = fVar15 - fVar8;
      fVar12 = fVar12 - UVar17.fields.z;
      if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
      }
      fVar7 = fVar7 + spacing;
      fVar16 = fVar12 * fVar12 + fVar15 * fVar15 + fVar13 * fVar13;
      if (fVar16 < 0.0) {
        fVar8 = sqrtf(fVar16);
      }
      else {
        fVar8 = SQRT(fVar16);
      }
      if (fVar8 < fVar7) {
        if (Il2CppMethodInitialized_0753e72d == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
          Il2CppMethodInitialized_0753e72d = '\x01';
          auStack_40._0_4_ = 0.0;
          auStack_40._4_4_ = 0.0;
        }
        else {
          auStack_40._0_4_ = 0.0;
          auStack_40._4_4_ = 0.0;
        }
        if (Il2CppMethodInitialized_0753e729 == '\0') {
          auStack_40._0_4_ = 0.0;
          auStack_40._4_4_ = 0.0;
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
          Il2CppMethodInitialized_0753e729 = '\x01';
          uVar3 = (TypeInfo_System_Math->_2).cctor_finished_or_no_cctor;
        }
        else {
          auStack_40._0_4_ = 0.0;
          auStack_40._4_4_ = 0.0;
          uVar3 = *(uint32_t *)((long)TypeInfo_System_Math + 0xe4);
        }
        if (uVar3 == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
        }
        else {
        }
        if (0.0 <= fVar16) {
          uVar9 = 0;
          fVar16 = SQRT(fVar16);
        }
        else {
          fVar16 = sqrtf(fVar16);
          uVar9 = extraout_XMM0_Db;
        }
        auVar14._4_4_ = fVar15;
        auVar14._0_4_ = fVar13;
        auVar14._8_4_ = 0.0 - fVar10;
        auVar14._12_4_ = 0.0 - fVar11;
        if (fVar16 <= 1e-05) {
          pUVar6 = TypeInfo_UnityEngine_Vector3->static_fields;
          fVar12 = (pUVar6->zeroVector).fields.z;
        }
        else {
          fVar12 = fVar12 / fVar16;
          auVar4._4_4_ = fVar16;
          auVar4._0_4_ = fVar16;
          auVar4._8_4_ = uVar9;
          auVar4._12_4_ = uVar9;
          auVar14 = divps(auVar14,auVar4);
          auStack_40._0_4_ = auVar14._0_4_;
          auStack_40._4_4_ = auVar14._4_4_;
          pUVar6 = (UnityEngine_Vector3_StaticFields *)auStack_40;
        }
        uVar1 = (pUVar6->zeroVector).fields.x;
        uVar2 = (pUVar6->zeroVector).fields.y;
        (position->fields).x = (float)auStack_40._8_4_ + fVar7 * (float)uVar1;
        (position->fields).y = fStack_34 + fVar7 * (float)uVar2;
        (position->fields).z = UVar17.fields.z + fVar12 * fVar7;
        return;
      }
      return;
    }
  }
  ThrowNullReferenceException();
}


// EZhex1991.EZSoftBone.EZSoftBoneUtility$$PointOutsideSphere
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBoneUtility__PointOutsideSphere (UnityEngine_Vector3_o* position, UnityEngine_Vector3_o spherePosition, float radius, const MethodInfo* method);
// 0x32a8c50

void EZhex1991_EZSoftBone_EZSoftBoneUtility__PointOutsideSphere_31a8c50
               (UnityEngine_Vector3_o *position,UnityEngine_Vector3_o spherePosition,float radius,
               MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint32_t uVar5;
  UnityEngine_Vector3_StaticFields *pUVar6;
  float fVar7;
  undefined4 uVar8;
  undefined4 extraout_XMM0_Db;
  float in_XMM0_Dc;
  float in_XMM0_Dd;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined1 auStack_40 [12];
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  
  fStack_28 = radius;
  uVar1 = (position->fields).x;
  uVar3 = (position->fields).y;
  fVar11 = (position->fields).z;
  fStack_30 = in_XMM0_Dc;
  unique0x1000003f = spherePosition.fields._0_8_;
  fStack_2c = in_XMM0_Dd;
  fVar13 = spherePosition.fields.x;
  fVar14 = spherePosition.fields.y;
  if (Il2CppMethodInitialized_0753e729 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
    Il2CppMethodInitialized_0753e729 = '\x01';
    fVar13 = (float)auStack_40._8_4_;
    fVar14 = fStack_34;
    in_XMM0_Dc = fStack_30;
    in_XMM0_Dd = fStack_2c;
  }
  fVar13 = (float)uVar1 - fVar13;
  fVar14 = (float)uVar3 - fVar14;
  fVar11 = fVar11 - spherePosition.fields.z;
  if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
  }
  fVar12 = fVar11 * fVar11 + fVar14 * fVar14 + fVar13 * fVar13;
  if (fVar12 < 0.0) {
    fVar7 = sqrtf(fVar12);
    if (fStack_28 <= fVar7) {
      return;
    }
  }
  else if (fStack_28 <= SQRT(fVar12)) {
    return;
  }
  if (Il2CppMethodInitialized_0753e72d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    Il2CppMethodInitialized_0753e72d = '\x01';
    auStack_40._0_4_ = 0.0;
    auStack_40._4_4_ = 0.0;
  }
  else {
    auStack_40._0_4_ = 0.0;
    auStack_40._4_4_ = 0.0;
  }
  if (Il2CppMethodInitialized_0753e729 == '\0') {
    auStack_40._0_4_ = 0.0;
    auStack_40._4_4_ = 0.0;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
    Il2CppMethodInitialized_0753e729 = '\x01';
    uVar5 = (TypeInfo_System_Math->_2).cctor_finished_or_no_cctor;
  }
  else {
    auStack_40._0_4_ = 0.0;
    auStack_40._4_4_ = 0.0;
    uVar5 = (((Il2CppClass *)TypeInfo_System_Math)->_2).cctor_finished_or_no_cctor;
  }
  if (uVar5 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
  }
  else {
  }
  if (0.0 <= fVar12) {
    uVar8 = 0;
    fVar12 = SQRT(fVar12);
  }
  else {
    fVar12 = sqrtf(fVar12);
    uVar8 = extraout_XMM0_Db;
  }
  if (1e-05 < fVar12) {
    auVar9._4_4_ = fVar14;
    auVar9._0_4_ = fVar13;
    auVar9._8_4_ = 0.0 - in_XMM0_Dc;
    auVar9._12_4_ = 0.0 - in_XMM0_Dd;
    fVar11 = fVar11 / fVar12;
    auVar10._4_4_ = fVar12;
    auVar10._0_4_ = fVar12;
    auVar10._8_4_ = uVar8;
    auVar10._12_4_ = uVar8;
    auVar10 = divps(auVar9,auVar10);
    auStack_40._0_4_ = auVar10._0_4_;
    auStack_40._4_4_ = auVar10._4_4_;
    pUVar6 = (UnityEngine_Vector3_StaticFields *)auStack_40;
  }
  else {
    pUVar6 = TypeInfo_UnityEngine_Vector3->static_fields;
    fVar11 = (pUVar6->zeroVector).fields.z;
  }
  uVar2 = (pUVar6->zeroVector).fields.x;
  uVar4 = (pUVar6->zeroVector).fields.y;
  (position->fields).x = fStack_28 * (float)uVar2 + (float)auStack_40._8_4_;
  (position->fields).y = fStack_28 * (float)uVar4 + fStack_34;
  (position->fields).z = fVar11 * fStack_28 + spherePosition.fields.z;
  return;
}


// EZhex1991.EZSoftBone.EZSoftBoneUtility$$PointInsideSphere
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBoneUtility__PointInsideSphere (UnityEngine_Vector3_o* position, UnityEngine_SphereCollider_o* collider, float spacing, const MethodInfo* method);
// 0x32a71d0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x32a72fc: jmp 0x32a743e

void EZhex1991_EZSoftBone_EZSoftBoneUtility__PointInsideSphere
               (UnityEngine_Vector3_o *position,UnityEngine_SphereCollider_o *collider,float spacing,
               MethodInfo *method)

{
  float fVar1;
  undefined4 uVar2;
  float fVar3;
  undefined4 uVar4;
  uint32_t uVar5;
  undefined1 auVar6 [16];
  UnityEngine_Transform_o *__this;
  UnityEngine_Vector3_StaticFields *pUVar7;
  float fVar8;
  undefined4 uVar9;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dd;
  float fVar10;
  undefined1 auVar11 [16];
  UnityEngine_Vector3_o UVar12;
  UnityEngine_Vector3_Fields UStack_40;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  undefined1 auStack_28 [8];
  float fStack_20;
  float fStack_1c;
  
  if (collider != (UnityEngine_SphereCollider_o *)0x0) {
    __this = UnityEngine_Component__get_transform((UnityEngine_Component_o *)collider,(MethodInfo *)0x0);
    UVar12 = UnityEngine_SphereCollider__get_center(collider,(MethodInfo *)0x0);
    if (__this != (UnityEngine_Transform_o *)0x0) {
      UVar12 = UnityEngine_Transform__TransformPoint(__this,UVar12,(MethodInfo *)0x0);
      fStack_20 = (float)extraout_XMM0_Dc;
      auStack_28 = (undefined1  [8])UVar12.fields._0_8_;
      fStack_1c = (float)extraout_XMM0_Dd;
      fVar8 = UnityEngine_SphereCollider__get_radius(collider,(MethodInfo *)0x0);
      fVar1 = (position->fields).x;
      fVar3 = (position->fields).y;
      fStack_30 = 0.0;
      fStack_2c = 0.0;
      fVar10 = (position->fields).z;
      if (Il2CppMethodInitialized_0753e729 == '\0') {
        fStack_30 = 0.0;
        fStack_2c = 0.0;
        UStack_40.z = fVar1;
        fStack_34 = fVar3;
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
        Il2CppMethodInitialized_0753e729 = '\x01';
        fVar1 = UStack_40.z;
        fVar3 = fStack_34;
      }
      fVar10 = fVar10 - UVar12.fields.z;
      UStack_40.z = fVar1 - (float)auStack_28._0_4_;
      fStack_34 = fVar3 - (float)auStack_28._4_4_;
      fStack_30 = fStack_30 - fStack_20;
      fStack_2c = fStack_2c - fStack_1c;
      if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
      }
      fVar8 = fVar8 - spacing;
      fVar1 = fVar10 * fVar10 + fStack_34 * fStack_34 + UStack_40.z * UStack_40.z;
      if (fVar1 < 0.0) {
        fVar3 = sqrtf(fVar1);
      }
      else {
        fVar3 = SQRT(fVar1);
      }
      if (fVar8 < fVar3) {
        if (Il2CppMethodInitialized_0753e72d == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
          Il2CppMethodInitialized_0753e72d = '\x01';
          UStack_40.x = 0.0;
          UStack_40.y = 0.0;
        }
        else {
          UStack_40.x = 0.0;
          UStack_40.y = 0.0;
        }
        if (Il2CppMethodInitialized_0753e729 == '\0') {
          UStack_40.x = 0.0;
          UStack_40.y = 0.0;
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
          Il2CppMethodInitialized_0753e729 = '\x01';
          uVar5 = (TypeInfo_System_Math->_2).cctor_finished_or_no_cctor;
        }
        else {
          UStack_40.x = 0.0;
          UStack_40.y = 0.0;
          uVar5 = *(uint32_t *)((long)TypeInfo_System_Math + 0xe4);
        }
        if (uVar5 == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
        }
        else {
        }
        if (0.0 <= fVar1) {
          uVar9 = 0;
          fVar1 = SQRT(fVar1);
        }
        else {
          fVar1 = sqrtf(fVar1);
          uVar9 = extraout_XMM0_Db;
        }
        if (fVar1 <= 1e-05) {
          pUVar7 = TypeInfo_UnityEngine_Vector3->static_fields;
          fVar10 = (pUVar7->zeroVector).fields.z;
        }
        else {
          fVar10 = fVar10 / fVar1;
          auVar6._4_4_ = fStack_34;
          auVar6._0_4_ = UStack_40.z;
          auVar6._8_4_ = fStack_30;
          auVar6._12_4_ = fStack_2c;
          auVar11._4_4_ = fVar1;
          auVar11._0_4_ = fVar1;
          auVar11._8_4_ = uVar9;
          auVar11._12_4_ = uVar9;
          auVar11 = divps(auVar6,auVar11);
          UStack_40.x = auVar11._0_4_;
          UStack_40.y = auVar11._4_4_;
          pUVar7 = (UnityEngine_Vector3_StaticFields *)&UStack_40;
        }
        uVar2 = (pUVar7->zeroVector).fields.x;
        uVar4 = (pUVar7->zeroVector).fields.y;
        (position->fields).x = (float)auStack_28._0_4_ + fVar8 * (float)uVar2;
        (position->fields).y = (float)auStack_28._4_4_ + fVar8 * (float)uVar4;
        (position->fields).z = UVar12.fields.z + fVar10 * fVar8;
        return;
      }
      return;
    }
  }
  ThrowNullReferenceException();
}


// EZhex1991.EZSoftBone.EZSoftBoneUtility$$PointInsideSphere
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBoneUtility__PointInsideSphere (UnityEngine_Vector3_o* position, UnityEngine_Vector3_o spherePosition, float radius, const MethodInfo* method);
// 0x32a8e90

void EZhex1991_EZSoftBone_EZSoftBoneUtility__PointInsideSphere_31a8e90
               (UnityEngine_Vector3_o *position,UnityEngine_Vector3_o spherePosition,float radius,
               MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint32_t uVar5;
  UnityEngine_Vector3_StaticFields *pUVar6;
  float fVar7;
  undefined4 uVar8;
  undefined4 extraout_XMM0_Db;
  float in_XMM0_Dc;
  float in_XMM0_Dd;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined1 auStack_40 [12];
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  
  fStack_28 = radius;
  uVar1 = (position->fields).x;
  uVar3 = (position->fields).y;
  fVar11 = (position->fields).z;
  fStack_30 = in_XMM0_Dc;
  unique0x1000003f = spherePosition.fields._0_8_;
  fStack_2c = in_XMM0_Dd;
  fVar13 = spherePosition.fields.x;
  fVar14 = spherePosition.fields.y;
  if (Il2CppMethodInitialized_0753e729 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
    Il2CppMethodInitialized_0753e729 = '\x01';
    fVar13 = (float)auStack_40._8_4_;
    fVar14 = fStack_34;
    in_XMM0_Dc = fStack_30;
    in_XMM0_Dd = fStack_2c;
  }
  fVar13 = (float)uVar1 - fVar13;
  fVar14 = (float)uVar3 - fVar14;
  fVar11 = fVar11 - spherePosition.fields.z;
  if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
  }
  fVar12 = fVar11 * fVar11 + fVar14 * fVar14 + fVar13 * fVar13;
  if (fVar12 < 0.0) {
    fVar7 = sqrtf(fVar12);
    if (fVar7 <= fStack_28) {
      return;
    }
  }
  else if (SQRT(fVar12) <= fStack_28) {
    return;
  }
  if (Il2CppMethodInitialized_0753e72d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    Il2CppMethodInitialized_0753e72d = '\x01';
    auStack_40._0_4_ = 0.0;
    auStack_40._4_4_ = 0.0;
  }
  else {
    auStack_40._0_4_ = 0.0;
    auStack_40._4_4_ = 0.0;
  }
  if (Il2CppMethodInitialized_0753e729 == '\0') {
    auStack_40._0_4_ = 0.0;
    auStack_40._4_4_ = 0.0;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
    Il2CppMethodInitialized_0753e729 = '\x01';
    uVar5 = (TypeInfo_System_Math->_2).cctor_finished_or_no_cctor;
  }
  else {
    auStack_40._0_4_ = 0.0;
    auStack_40._4_4_ = 0.0;
    uVar5 = (((Il2CppClass *)TypeInfo_System_Math)->_2).cctor_finished_or_no_cctor;
  }
  if (uVar5 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
  }
  else {
  }
  if (0.0 <= fVar12) {
    uVar8 = 0;
    fVar12 = SQRT(fVar12);
  }
  else {
    fVar12 = sqrtf(fVar12);
    uVar8 = extraout_XMM0_Db;
  }
  if (1e-05 < fVar12) {
    auVar9._4_4_ = fVar14;
    auVar9._0_4_ = fVar13;
    auVar9._8_4_ = 0.0 - in_XMM0_Dc;
    auVar9._12_4_ = 0.0 - in_XMM0_Dd;
    fVar11 = fVar11 / fVar12;
    auVar10._4_4_ = fVar12;
    auVar10._0_4_ = fVar12;
    auVar10._8_4_ = uVar8;
    auVar10._12_4_ = uVar8;
    auVar10 = divps(auVar9,auVar10);
    auStack_40._0_4_ = auVar10._0_4_;
    auStack_40._4_4_ = auVar10._4_4_;
    pUVar6 = (UnityEngine_Vector3_StaticFields *)auStack_40;
  }
  else {
    pUVar6 = TypeInfo_UnityEngine_Vector3->static_fields;
    fVar11 = (pUVar6->zeroVector).fields.z;
  }
  uVar2 = (pUVar6->zeroVector).fields.x;
  uVar4 = (pUVar6->zeroVector).fields.y;
  (position->fields).x = fStack_28 * (float)uVar2 + (float)auStack_40._8_4_;
  (position->fields).y = fStack_28 * (float)uVar4 + fStack_34;
  (position->fields).z = fVar11 * fStack_28 + spherePosition.fields.z;
  return;
}


// EZhex1991.EZSoftBone.EZSoftBoneUtility$$PointOutsideCapsule
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBoneUtility__PointOutsideCapsule (UnityEngine_Vector3_o* position, UnityEngine_CapsuleCollider_o* collider, float spacing, const MethodInfo* method);
// 0x32a77c0

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
  Il2CppMethodPointer local_18;
  float local_10;
  
  local_10 = 0.0;
  local_18 = (Il2CppMethodPointer)0x0;
  local_28.z = 0.0;
  local_28.x = 0.0;
  local_28.y = 0.0;
  local_30 = 0.0;
  method_00 = (MethodInfo *)&local_18;
  local_2c = spacing;
  EZhex1991_EZSoftBone_EZSoftBoneUtility__GetCapsuleParams
            (collider,(UnityEngine_Vector3_o *)method_00,(UnityEngine_Vector3_o *)&local_28,&local_30,in_R8);
  center0.fields.z = local_10;
  center0.fields._0_8_ = local_18;
  center1.fields.z = local_28.z;
  center1.fields.x = local_28.x;
  center1.fields.y = local_28.y;
  EZhex1991_EZSoftBone_EZSoftBoneUtility__PointOutsideCapsule_31a90c0
            (position,center0,center1,local_2c + local_30,method_00);
  return;
}


// EZhex1991.EZSoftBone.EZSoftBoneUtility$$PointOutsideCapsule
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBoneUtility__PointOutsideCapsule (UnityEngine_Vector3_o* position, UnityEngine_Vector3_o center0, UnityEngine_Vector3_o center1, float radius, const MethodInfo* method);
// 0x32a90c0
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x32a922b: jmp 0x32a9476
// asm:   0x32a9379: jmp 0x32a955e
// asm:   0x32a953b: jmp 0x32a95c8

void EZhex1991_EZSoftBone_EZSoftBoneUtility__PointOutsideCapsule_31a90c0
               (UnityEngine_Vector3_o *position,UnityEngine_Vector3_o center0,UnityEngine_Vector3_o center1,
               float radius,MethodInfo *method)

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
  undefined4 uVar11;
  undefined4 uVar12;
  uint32_t uVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  float fVar17;
  UnityEngine_Vector3_StaticFields *pUVar18;
  undefined4 uVar19;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  undefined4 extraout_XMM0_Db_01;
  float in_XMM0_Dc;
  float in_XMM0_Dd;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [4];
  float in_XMM3_Db;
  float in_XMM3_Dc;
  undefined4 in_XMM3_Dd;
  float fVar25;
  float in_XMM4_Db;
  float fVar26;
  float in_XMM4_Dc;
  float fVar27;
  float fVar28;
  float in_XMM4_Dd;
  float fVar29;
  float fVar30;
  undefined1 auVar31 [4];
  float fVar32;
  float fVar33;
  undefined1 auVar34 [4];
  float fVar35;
  float fVar36;
  float fVar37;
  UnityEngine_Vector3_Fields local_60;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  undefined1 local_48 [4];
  undefined1 auStack_44 [8];
  undefined4 uStack_3c;
  undefined1 local_38 [4];
  undefined1 auStack_34 [12];
  float local_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float local_14;
  
  auVar24 = (undefined1  [4])center1.fields.z;
  auVar22._8_8_ = center1._8_8_;
  auVar22._0_8_ = center1.fields._0_8_;
  local_60.z = center0.fields.z;
  local_28 = radius;
  fVar25 = center1.fields.x - center0.fields.x;
  fVar26 = center1.fields.y - center0.fields.y;
  fVar27 = center1.fields.z - in_XMM0_Dc;
  fVar29 = center1._12_4_ - in_XMM0_Dd;
  auVar31 = (undefined1  [4])((float)auVar24 - local_60.z);
  uVar1 = (position->fields).x;
  uVar7 = (position->fields).y;
  fVar33 = (position->fields).z;
  unique0x100000df = in_XMM0_Dc;
  _local_38 = center0.fields._0_8_;
  unique0x100000e3 = in_XMM0_Dd;
  auVar21 = _local_38;
  fVar36 = (float)uVar1 - center0.fields.x;
  fVar37 = (float)uVar7 - center0.fields.y;
  fVar35 = fVar33 - local_60.z;
  auVar34 = (undefined1  [4])((float)auVar31 * fVar35 + fVar26 * fVar37 + fVar25 * fVar36);
  if (0.0 < (float)auVar34) {
    fVar32 = (float)auVar31 * (float)auVar31 + fVar26 * fVar26 + fVar25 * fVar25;
    if (fVar32 <= (float)auVar34) {
      local_38 = auVar24;
      _local_48 = auVar22;
      local_60.z = fVar33;
      if (Il2CppMethodInitialized_0753e729 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
        Il2CppMethodInitialized_0753e729 = '\x01';
        auVar24 = local_38;
      }
      fVar25 = (float)uVar1 - local_48;
      fVar26 = (float)uVar7 - local_48._4_4_;
      fVar33 = local_48._8_4_;
      fVar35 = local_48._12_4_;
      local_60.z = local_60.z - (float)auVar24;
      if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
      }
      fVar27 = local_60.z * local_60.z + fVar26 * fVar26 + fVar25 * fVar25;
      if (fVar27 < 0.0) {
        fVar29 = sqrtf(fVar27);
        if (local_28 <= fVar29) {
          return;
        }
      }
      else if (local_28 <= SQRT(fVar27)) {
        return;
      }
      if (Il2CppMethodInitialized_0753e72d == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
        Il2CppMethodInitialized_0753e72d = '\x01';
        local_60.x = 0.0;
        local_60.y = 0.0;
        if (Il2CppMethodInitialized_0753e729 == '\0') goto label_032a97b9;
label_032a9581:
        local_60.x = 0.0;
        local_60.y = 0.0;
        if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor != 0) goto label_032a9591;
label_032a97e3:
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
        if (fVar27 < 0.0) goto label_032a97fc;
label_032a959e:
        uVar19 = 0;
        fVar27 = SQRT(fVar27);
      }
      else {
        local_60.x = 0.0;
        local_60.y = 0.0;
        if (Il2CppMethodInitialized_0753e729 != '\0') goto label_032a9581;
label_032a97b9:
        local_60.x = 0.0;
        local_60.y = 0.0;
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
        Il2CppMethodInitialized_0753e729 = '\x01';
        if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) goto label_032a97e3;
label_032a9591:
        if (0.0 <= fVar27) goto label_032a959e;
label_032a97fc:
        fVar27 = sqrtf(fVar27);
        uVar19 = extraout_XMM0_Db_01;
      }
      auVar21._4_4_ = fVar26;
      auVar21._0_4_ = fVar25;
      auVar21._8_4_ = 0.0 - fVar33;
      auVar21._12_4_ = 0.0 - fVar35;
      if (fVar27 <= 1e-05) {
        pUVar18 = TypeInfo_UnityEngine_Vector3->static_fields;
        local_60.z = (pUVar18->zeroVector).fields.z;
      }
      else {
        local_60.z = local_60.z / fVar27;
        auVar15._4_4_ = fVar27;
        auVar15._0_4_ = fVar27;
        auVar15._8_4_ = uVar19;
        auVar15._12_4_ = uVar19;
        auVar21 = divps(auVar21,auVar15);
        local_60.x = auVar21._0_4_;
        local_60.y = auVar21._4_4_;
        pUVar18 = (UnityEngine_Vector3_StaticFields *)&local_60;
      }
      uVar6 = (pUVar18->zeroVector).fields.x;
      uVar12 = (pUVar18->zeroVector).fields.y;
      fVar33 = local_28 * (float)uVar6 + (float)local_48;
      fVar25 = local_28 * (float)uVar12 + (float)auStack_44._0_4_;
      local_60.z = local_60.z * local_28 + (float)local_38;
      goto label_032a986d;
    }
    fStack_24 = in_XMM4_Db;
    fStack_20 = in_XMM4_Dc;
    fStack_1c = in_XMM4_Dd;
    if (g_data_0753e81c == '\0') {
      local_38 = auVar31;
      auStack_44._0_4_ = in_XMM3_Db;
      local_48 = auVar34;
      auStack_44._4_4_ = in_XMM3_Dc;
      uStack_3c = in_XMM3_Dd;
      local_60.z = fVar25;
      fStack_54 = fVar26;
      fStack_50 = fVar27;
      fStack_4c = fVar29;
      local_14 = fVar32;
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Mathf);
      g_data_0753e81c = '\x01';
      fVar25 = local_60.z;
      fVar26 = fStack_54;
      fVar27 = fStack_50;
      fVar29 = fStack_4c;
      auVar31 = local_38;
      fVar32 = local_14;
      auVar34 = local_48;
      auVar21 = _local_38;
    }
    _local_38 = auVar21;
    if (TypeInfo_UnityEngine_Mathf->static_fields->Epsilon <= fVar32) {
      fVar32 = (float)auVar34 / fVar32;
      auVar31 = (undefined1  [4])((float)auVar31 * fVar32);
      fVar28 = fVar25 * fVar32;
      fVar30 = fVar26 * fVar32;
      fVar17 = fVar27 * fVar32;
      fVar29 = fVar29 * fVar32;
      fVar33 = local_60.z;
      fVar25 = fStack_54;
      fVar26 = fStack_50;
      fVar27 = fStack_4c;
    }
    else {
      if (Il2CppMethodInitialized_0753e4b6 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
        Il2CppMethodInitialized_0753e4b6 = '\x01';
      }
      pUVar18 = TypeInfo_UnityEngine_Vector3->static_fields;
      uVar2 = (pUVar18->zeroVector).fields.x;
      uVar8 = (pUVar18->zeroVector).fields.y;
      auVar31 = (undefined1  [4])(pUVar18->zeroVector).fields.z;
      fVar28 = (float)uVar2;
      fVar30 = (float)uVar8;
      fVar17 = 0.0;
      fVar29 = 0.0;
      fVar33 = local_60.z;
      fVar25 = fStack_54;
      fVar26 = fStack_50;
      fVar27 = fStack_4c;
    }
    fStack_4c = fVar29;
    fStack_50 = fVar17;
    fStack_54 = fVar30;
    local_60.z = fVar28;
    fVar29 = local_60.z;
    fVar32 = fStack_54;
    fVar28 = fStack_50;
    fVar30 = fStack_4c;
    if (Il2CppMethodInitialized_0753e729 == '\0') {
      local_38 = auVar31;
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
      Il2CppMethodInitialized_0753e729 = '\x01';
      fVar29 = local_60.z;
      fVar32 = fStack_54;
      fVar28 = fStack_50;
      fVar30 = fStack_4c;
      auVar31 = local_38;
      fVar33 = local_60.z;
      fVar25 = fStack_54;
      fVar26 = fStack_50;
      fVar27 = fStack_4c;
    }
    fStack_4c = fVar27;
    fStack_50 = fVar26;
    fStack_54 = fVar25;
    local_60.z = fVar33;
    fVar36 = fVar36 - fVar29;
    fVar37 = fVar37 - fVar32;
    fVar35 = fVar35 - (float)auVar31;
    if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
    }
    fVar33 = fVar35 * fVar35 + fVar37 * fVar37 + fVar36 * fVar36;
    local_38 = (undefined1  [4])fVar33;
    if (fVar33 < 0.0) {
      fVar33 = sqrtf(fVar33);
      local_28 = local_28 - fVar33;
    }
    else {
      local_28 = local_28 - SQRT(fVar33);
    }
    if (local_28 <= 0.0) {
      return;
    }
    uVar3 = (position->fields).x;
    uVar9 = (position->fields).y;
    auStack_44._0_4_ = uVar9;
    local_48 = (undefined1  [4])uVar3;
    stack0xffffffffffffffc0 = 0;
    local_60.z = (position->fields).z;
    if (Il2CppMethodInitialized_0753e72d == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
      Il2CppMethodInitialized_0753e72d = '\x01';
      local_60.x = 0.0;
      local_60.y = 0.0;
      if (Il2CppMethodInitialized_0753e729 == '\0') goto label_032a98ac;
label_032a9607:
      local_60.x = 0.0;
      local_60.y = 0.0;
      uVar13 = (TypeInfo_System_Math->_2).cctor_finished_or_no_cctor;
    }
    else {
      local_60.x = 0.0;
      local_60.y = 0.0;
      if (Il2CppMethodInitialized_0753e729 != '\0') goto label_032a9607;
label_032a98ac:
      local_60.x = 0.0;
      local_60.y = 0.0;
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
      Il2CppMethodInitialized_0753e729 = '\x01';
      uVar13 = (TypeInfo_System_Math->_2).cctor_finished_or_no_cctor;
    }
    if (uVar13 == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
    }
    uVar19 = 0;
    if ((float)local_38 < 0.0) {
      fVar33 = sqrtf((float)local_38);
      uVar19 = extraout_XMM0_Db_00;
      if (1e-05 < fVar33) goto label_032a9750;
label_032a9647:
      pUVar18 = TypeInfo_UnityEngine_Vector3->static_fields;
      fVar35 = (pUVar18->zeroVector).fields.z;
    }
    else {
      fVar33 = SQRT((float)local_38);
      if (fVar33 <= 1e-05) goto label_032a9647;
label_032a9750:
      auVar20._4_4_ = fVar37;
      auVar20._0_4_ = fVar36;
      auVar20._8_4_ = (0.0 - in_XMM0_Dc) - fVar28;
      auVar20._12_4_ = (0.0 - in_XMM0_Dd) - fVar30;
      fVar35 = fVar35 / fVar33;
      auVar14._4_4_ = fVar33;
      auVar14._0_4_ = fVar33;
      auVar14._8_4_ = uVar19;
      auVar14._12_4_ = uVar19;
      auVar21 = divps(auVar20,auVar14);
      local_60.x = auVar21._0_4_;
      local_60.y = auVar21._4_4_;
      pUVar18 = (UnityEngine_Vector3_StaticFields *)&local_60;
    }
    uVar5 = (pUVar18->zeroVector).fields.x;
    uVar11 = (pUVar18->zeroVector).fields.y;
    local_60.z = local_60.z + fVar35 * local_28;
    fVar33 = local_28 * (float)uVar5 + (float)local_48;
    fVar25 = local_28 * (float)uVar11 + (float)auStack_44._0_4_;
    goto label_032a986d;
  }
  if (Il2CppMethodInitialized_0753e729 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
    Il2CppMethodInitialized_0753e729 = '\x01';
    uVar13 = (TypeInfo_System_Math->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar13 = (TypeInfo_System_Math->_2).cctor_finished_or_no_cctor;
  }
  if (uVar13 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
  }
  local_48 = (undefined1  [4])(fVar35 * fVar35 + fVar37 * fVar37 + fVar36 * fVar36);
  if ((float)local_48 < 0.0) {
    fVar33 = sqrtf((float)local_48);
    auVar31 = local_48;
    if (local_28 <= fVar33) {
      return;
    }
  }
  else {
    auVar31 = local_48;
    if (local_28 <= SQRT((float)local_48)) {
      return;
    }
  }
  if (Il2CppMethodInitialized_0753e72d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    Il2CppMethodInitialized_0753e72d = '\x01';
    local_60.x = 0.0;
    local_60.y = 0.0;
    auVar31 = local_48;
    if (Il2CppMethodInitialized_0753e729 == '\0') goto label_032a9691;
label_032a93bd:
    local_60.x = 0.0;
    local_60.y = 0.0;
    if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor != 0) goto label_032a93cd;
label_032a96ba:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
    auVar31 = local_48;
    if ((float)local_48 < 0.0) goto label_032a96d1;
label_032a93d9:
    uVar19 = 0;
    fVar33 = SQRT((float)auVar31);
    if (fVar33 <= 1e-05) goto label_032a93f7;
label_032a96f0:
    auVar23._4_4_ = fVar37;
    auVar23._0_4_ = fVar36;
    auVar23._8_4_ = 0.0 - in_XMM0_Dc;
    auVar23._12_4_ = 0.0 - in_XMM0_Dd;
    fVar35 = fVar35 / fVar33;
    auVar16._4_4_ = fVar33;
    auVar16._0_4_ = fVar33;
    auVar16._8_4_ = uVar19;
    auVar16._12_4_ = uVar19;
    auVar21 = divps(auVar23,auVar16);
    local_60.x = auVar21._0_4_;
    local_60.y = auVar21._4_4_;
    pUVar18 = (UnityEngine_Vector3_StaticFields *)&local_60;
  }
  else {
    local_60.x = 0.0;
    local_60.y = 0.0;
    if (Il2CppMethodInitialized_0753e729 != '\0') goto label_032a93bd;
label_032a9691:
    local_60.x = 0.0;
    local_60.y = 0.0;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
    Il2CppMethodInitialized_0753e729 = '\x01';
    auVar31 = local_48;
    if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) goto label_032a96ba;
label_032a93cd:
    if (0.0 <= (float)auVar31) goto label_032a93d9;
label_032a96d1:
    fVar33 = sqrtf((float)auVar31);
    uVar19 = extraout_XMM0_Db;
    if (1e-05 < fVar33) goto label_032a96f0;
label_032a93f7:
    pUVar18 = TypeInfo_UnityEngine_Vector3->static_fields;
    fVar35 = (pUVar18->zeroVector).fields.z;
  }
  uVar4 = (pUVar18->zeroVector).fields.x;
  uVar10 = (pUVar18->zeroVector).fields.y;
  fVar33 = local_28 * (float)uVar4 + (float)local_38;
  fVar25 = local_28 * (float)uVar10 + (float)auStack_34._0_4_;
  local_60.z = fVar35 * local_28 + local_60.z;
label_032a986d:
  (position->fields).x = fVar33;
  (position->fields).y = fVar25;
  (position->fields).z = local_60.z;
  return;
}


// EZhex1991.EZSoftBone.EZSoftBoneUtility$$PointInsideCapsule
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBoneUtility__PointInsideCapsule (UnityEngine_Vector3_o* position, UnityEngine_CapsuleCollider_o* collider, float spacing, const MethodInfo* method);
// 0x32a7730

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
  Il2CppMethodPointer local_18;
  float local_10;
  
  local_10 = 0.0;
  local_18 = (Il2CppMethodPointer)0x0;
  local_28.z = 0.0;
  local_28.x = 0.0;
  local_28.y = 0.0;
  local_30 = 0.0;
  method_00 = (MethodInfo *)&local_18;
  local_2c = spacing;
  EZhex1991_EZSoftBone_EZSoftBoneUtility__GetCapsuleParams
            (collider,(UnityEngine_Vector3_o *)method_00,(UnityEngine_Vector3_o *)&local_28,&local_30,in_R8);
  center0.fields.z = local_10;
  center0.fields._0_8_ = local_18;
  center1.fields.z = local_28.z;
  center1.fields.x = local_28.x;
  center1.fields.y = local_28.y;
  EZhex1991_EZSoftBone_EZSoftBoneUtility__PointInsideCapsule_31a98f0
            (position,center0,center1,local_30 - local_2c,method_00);
  return;
}


// EZhex1991.EZSoftBone.EZSoftBoneUtility$$PointInsideCapsule
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBoneUtility__PointInsideCapsule (UnityEngine_Vector3_o* position, UnityEngine_Vector3_o center0, UnityEngine_Vector3_o center1, float radius, const MethodInfo* method);
// 0x32a98f0
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x32a9a5b: jmp 0x32a9c9d
// asm:   0x32a9ba3: jmp 0x32a9d82
// asm:   0x32a9d62: jmp 0x32a9dec

void EZhex1991_EZSoftBone_EZSoftBoneUtility__PointInsideCapsule_31a98f0
               (UnityEngine_Vector3_o *position,UnityEngine_Vector3_o center0,UnityEngine_Vector3_o center1,
               float radius,MethodInfo *method)

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
  undefined4 uVar11;
  undefined4 uVar12;
  uint32_t uVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  float fVar17;
  UnityEngine_Vector3_StaticFields *pUVar18;
  undefined4 uVar19;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  undefined4 extraout_XMM0_Db_01;
  float in_XMM0_Dc;
  float in_XMM0_Dd;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [4];
  float in_XMM3_Db;
  float in_XMM3_Dc;
  undefined4 in_XMM3_Dd;
  float fVar25;
  float in_XMM4_Db;
  float fVar26;
  float in_XMM4_Dc;
  float fVar27;
  float fVar28;
  float in_XMM4_Dd;
  float fVar29;
  float fVar30;
  undefined1 auVar31 [4];
  float fVar32;
  float fVar33;
  undefined1 auVar34 [4];
  float fVar35;
  float fVar36;
  float fVar37;
  UnityEngine_Vector3_Fields local_60;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  undefined1 local_48 [4];
  undefined1 auStack_44 [8];
  undefined4 uStack_3c;
  undefined1 local_38 [4];
  undefined1 auStack_34 [12];
  float local_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float local_14;
  
  auVar24 = (undefined1  [4])center1.fields.z;
  auVar22._8_8_ = center1._8_8_;
  auVar22._0_8_ = center1.fields._0_8_;
  local_60.z = center0.fields.z;
  local_28 = radius;
  fVar25 = center1.fields.x - center0.fields.x;
  fVar26 = center1.fields.y - center0.fields.y;
  fVar27 = center1.fields.z - in_XMM0_Dc;
  fVar29 = center1._12_4_ - in_XMM0_Dd;
  auVar31 = (undefined1  [4])((float)auVar24 - local_60.z);
  uVar1 = (position->fields).x;
  uVar7 = (position->fields).y;
  fVar33 = (position->fields).z;
  unique0x100000df = in_XMM0_Dc;
  _local_38 = center0.fields._0_8_;
  unique0x100000e3 = in_XMM0_Dd;
  auVar21 = _local_38;
  fVar36 = (float)uVar1 - center0.fields.x;
  fVar37 = (float)uVar7 - center0.fields.y;
  fVar35 = fVar33 - local_60.z;
  auVar34 = (undefined1  [4])((float)auVar31 * fVar35 + fVar26 * fVar37 + fVar25 * fVar36);
  if (0.0 < (float)auVar34) {
    fVar32 = (float)auVar31 * (float)auVar31 + fVar26 * fVar26 + fVar25 * fVar25;
    if (fVar32 <= (float)auVar34) {
      local_38 = auVar24;
      _local_48 = auVar22;
      local_60.z = fVar33;
      if (Il2CppMethodInitialized_0753e729 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
        Il2CppMethodInitialized_0753e729 = '\x01';
        auVar24 = local_38;
      }
      fVar25 = (float)uVar1 - local_48;
      fVar26 = (float)uVar7 - local_48._4_4_;
      fVar33 = local_48._8_4_;
      fVar35 = local_48._12_4_;
      local_60.z = local_60.z - (float)auVar24;
      if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
      }
      fVar27 = local_60.z * local_60.z + fVar26 * fVar26 + fVar25 * fVar25;
      if (fVar27 < 0.0) {
        fVar29 = sqrtf(fVar27);
        if (fVar29 <= local_28) {
          return;
        }
      }
      else if (SQRT(fVar27) <= local_28) {
        return;
      }
      if (Il2CppMethodInitialized_0753e72d == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
        Il2CppMethodInitialized_0753e72d = '\x01';
        local_60.x = 0.0;
        local_60.y = 0.0;
        if (Il2CppMethodInitialized_0753e729 == '\0') goto label_032a9fdd;
label_032a9da5:
        local_60.x = 0.0;
        local_60.y = 0.0;
        if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor != 0) goto label_032a9db5;
label_032aa007:
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
        if (fVar27 < 0.0) goto label_032aa020;
label_032a9dc2:
        uVar19 = 0;
        fVar27 = SQRT(fVar27);
      }
      else {
        local_60.x = 0.0;
        local_60.y = 0.0;
        if (Il2CppMethodInitialized_0753e729 != '\0') goto label_032a9da5;
label_032a9fdd:
        local_60.x = 0.0;
        local_60.y = 0.0;
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
        Il2CppMethodInitialized_0753e729 = '\x01';
        if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) goto label_032aa007;
label_032a9db5:
        if (0.0 <= fVar27) goto label_032a9dc2;
label_032aa020:
        fVar27 = sqrtf(fVar27);
        uVar19 = extraout_XMM0_Db_01;
      }
      auVar21._4_4_ = fVar26;
      auVar21._0_4_ = fVar25;
      auVar21._8_4_ = 0.0 - fVar33;
      auVar21._12_4_ = 0.0 - fVar35;
      if (fVar27 <= 1e-05) {
        pUVar18 = TypeInfo_UnityEngine_Vector3->static_fields;
        local_60.z = (pUVar18->zeroVector).fields.z;
      }
      else {
        local_60.z = local_60.z / fVar27;
        auVar15._4_4_ = fVar27;
        auVar15._0_4_ = fVar27;
        auVar15._8_4_ = uVar19;
        auVar15._12_4_ = uVar19;
        auVar21 = divps(auVar21,auVar15);
        local_60.x = auVar21._0_4_;
        local_60.y = auVar21._4_4_;
        pUVar18 = (UnityEngine_Vector3_StaticFields *)&local_60;
      }
      uVar6 = (pUVar18->zeroVector).fields.x;
      uVar12 = (pUVar18->zeroVector).fields.y;
      fVar33 = local_28 * (float)uVar6 + (float)local_48;
      fVar25 = local_28 * (float)uVar12 + (float)auStack_44._0_4_;
      local_60.z = local_60.z * local_28 + (float)local_38;
      goto label_032aa091;
    }
    fStack_24 = in_XMM4_Db;
    fStack_20 = in_XMM4_Dc;
    fStack_1c = in_XMM4_Dd;
    if (g_data_0753e81c == '\0') {
      local_38 = auVar31;
      auStack_44._0_4_ = in_XMM3_Db;
      local_48 = auVar34;
      auStack_44._4_4_ = in_XMM3_Dc;
      uStack_3c = in_XMM3_Dd;
      local_60.z = fVar25;
      fStack_54 = fVar26;
      fStack_50 = fVar27;
      fStack_4c = fVar29;
      local_14 = fVar32;
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Mathf);
      g_data_0753e81c = '\x01';
      fVar25 = local_60.z;
      fVar26 = fStack_54;
      fVar27 = fStack_50;
      fVar29 = fStack_4c;
      auVar31 = local_38;
      fVar32 = local_14;
      auVar34 = local_48;
      auVar21 = _local_38;
    }
    _local_38 = auVar21;
    if (TypeInfo_UnityEngine_Mathf->static_fields->Epsilon <= fVar32) {
      fVar32 = (float)auVar34 / fVar32;
      auVar31 = (undefined1  [4])((float)auVar31 * fVar32);
      fVar28 = fVar25 * fVar32;
      fVar30 = fVar26 * fVar32;
      fVar17 = fVar27 * fVar32;
      fVar29 = fVar29 * fVar32;
      fVar33 = local_60.z;
      fVar25 = fStack_54;
      fVar26 = fStack_50;
      fVar27 = fStack_4c;
    }
    else {
      if (Il2CppMethodInitialized_0753e4b6 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
        Il2CppMethodInitialized_0753e4b6 = '\x01';
      }
      pUVar18 = TypeInfo_UnityEngine_Vector3->static_fields;
      uVar2 = (pUVar18->zeroVector).fields.x;
      uVar8 = (pUVar18->zeroVector).fields.y;
      auVar31 = (undefined1  [4])(pUVar18->zeroVector).fields.z;
      fVar28 = (float)uVar2;
      fVar30 = (float)uVar8;
      fVar17 = 0.0;
      fVar29 = 0.0;
      fVar33 = local_60.z;
      fVar25 = fStack_54;
      fVar26 = fStack_50;
      fVar27 = fStack_4c;
    }
    fStack_4c = fVar29;
    fStack_50 = fVar17;
    fStack_54 = fVar30;
    local_60.z = fVar28;
    fVar29 = local_60.z;
    fVar32 = fStack_54;
    fVar28 = fStack_50;
    fVar30 = fStack_4c;
    if (Il2CppMethodInitialized_0753e729 == '\0') {
      local_38 = auVar31;
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
      Il2CppMethodInitialized_0753e729 = '\x01';
      fVar29 = local_60.z;
      fVar32 = fStack_54;
      fVar28 = fStack_50;
      fVar30 = fStack_4c;
      auVar31 = local_38;
      fVar33 = local_60.z;
      fVar25 = fStack_54;
      fVar26 = fStack_50;
      fVar27 = fStack_4c;
    }
    fStack_4c = fVar27;
    fStack_50 = fVar26;
    fStack_54 = fVar25;
    local_60.z = fVar33;
    fVar36 = fVar36 - fVar29;
    fVar37 = fVar37 - fVar32;
    fVar35 = fVar35 - (float)auVar31;
    if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
    }
    fVar33 = fVar35 * fVar35 + fVar37 * fVar37 + fVar36 * fVar36;
    local_38 = (undefined1  [4])fVar33;
    if (fVar33 < 0.0) {
      fVar33 = sqrtf(fVar33);
      local_28 = local_28 - fVar33;
    }
    else {
      local_28 = local_28 - SQRT(fVar33);
    }
    if (0.0 <= local_28) {
      return;
    }
    uVar3 = (position->fields).x;
    uVar9 = (position->fields).y;
    auStack_44._0_4_ = uVar9;
    local_48 = (undefined1  [4])uVar3;
    stack0xffffffffffffffc0 = 0;
    local_60.z = (position->fields).z;
    if (Il2CppMethodInitialized_0753e72d == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
      Il2CppMethodInitialized_0753e72d = '\x01';
      local_60.x = 0.0;
      local_60.y = 0.0;
      if (Il2CppMethodInitialized_0753e729 == '\0') goto label_032aa0d0;
label_032a9e2b:
      local_60.x = 0.0;
      local_60.y = 0.0;
      uVar13 = (TypeInfo_System_Math->_2).cctor_finished_or_no_cctor;
    }
    else {
      local_60.x = 0.0;
      local_60.y = 0.0;
      if (Il2CppMethodInitialized_0753e729 != '\0') goto label_032a9e2b;
label_032aa0d0:
      local_60.x = 0.0;
      local_60.y = 0.0;
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
      Il2CppMethodInitialized_0753e729 = '\x01';
      uVar13 = (TypeInfo_System_Math->_2).cctor_finished_or_no_cctor;
    }
    if (uVar13 == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
    }
    uVar19 = 0;
    if ((float)local_38 < 0.0) {
      fVar33 = sqrtf((float)local_38);
      uVar19 = extraout_XMM0_Db_00;
      if (1e-05 < fVar33) goto label_032a9f74;
label_032a9e6b:
      pUVar18 = TypeInfo_UnityEngine_Vector3->static_fields;
      fVar35 = (pUVar18->zeroVector).fields.z;
    }
    else {
      fVar33 = SQRT((float)local_38);
      if (fVar33 <= 1e-05) goto label_032a9e6b;
label_032a9f74:
      auVar20._4_4_ = fVar37;
      auVar20._0_4_ = fVar36;
      auVar20._8_4_ = (0.0 - in_XMM0_Dc) - fVar28;
      auVar20._12_4_ = (0.0 - in_XMM0_Dd) - fVar30;
      fVar35 = fVar35 / fVar33;
      auVar14._4_4_ = fVar33;
      auVar14._0_4_ = fVar33;
      auVar14._8_4_ = uVar19;
      auVar14._12_4_ = uVar19;
      auVar21 = divps(auVar20,auVar14);
      local_60.x = auVar21._0_4_;
      local_60.y = auVar21._4_4_;
      pUVar18 = (UnityEngine_Vector3_StaticFields *)&local_60;
    }
    uVar5 = (pUVar18->zeroVector).fields.x;
    uVar11 = (pUVar18->zeroVector).fields.y;
    local_60.z = local_60.z + fVar35 * local_28;
    fVar33 = local_28 * (float)uVar5 + (float)local_48;
    fVar25 = local_28 * (float)uVar11 + (float)auStack_44._0_4_;
    goto label_032aa091;
  }
  if (Il2CppMethodInitialized_0753e729 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
    Il2CppMethodInitialized_0753e729 = '\x01';
    uVar13 = (TypeInfo_System_Math->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar13 = (TypeInfo_System_Math->_2).cctor_finished_or_no_cctor;
  }
  if (uVar13 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
  }
  local_48 = (undefined1  [4])(fVar35 * fVar35 + fVar37 * fVar37 + fVar36 * fVar36);
  if ((float)local_48 < 0.0) {
    fVar33 = sqrtf((float)local_48);
    auVar31 = local_48;
    if (fVar33 <= local_28) {
      return;
    }
  }
  else {
    auVar31 = local_48;
    if (SQRT((float)local_48) <= local_28) {
      return;
    }
  }
  if (Il2CppMethodInitialized_0753e72d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    Il2CppMethodInitialized_0753e72d = '\x01';
    local_60.x = 0.0;
    local_60.y = 0.0;
    auVar31 = local_48;
    if (Il2CppMethodInitialized_0753e729 == '\0') goto label_032a9eb5;
label_032a9be4:
    local_60.x = 0.0;
    local_60.y = 0.0;
    if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor != 0) goto label_032a9bf4;
label_032a9ede:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
    auVar31 = local_48;
    if ((float)local_48 < 0.0) goto label_032a9ef5;
label_032a9c00:
    uVar19 = 0;
    fVar33 = SQRT((float)auVar31);
    if (fVar33 <= 1e-05) goto label_032a9c1e;
label_032a9f14:
    auVar23._4_4_ = fVar37;
    auVar23._0_4_ = fVar36;
    auVar23._8_4_ = 0.0 - in_XMM0_Dc;
    auVar23._12_4_ = 0.0 - in_XMM0_Dd;
    fVar35 = fVar35 / fVar33;
    auVar16._4_4_ = fVar33;
    auVar16._0_4_ = fVar33;
    auVar16._8_4_ = uVar19;
    auVar16._12_4_ = uVar19;
    auVar21 = divps(auVar23,auVar16);
    local_60.x = auVar21._0_4_;
    local_60.y = auVar21._4_4_;
    pUVar18 = (UnityEngine_Vector3_StaticFields *)&local_60;
  }
  else {
    local_60.x = 0.0;
    local_60.y = 0.0;
    if (Il2CppMethodInitialized_0753e729 != '\0') goto label_032a9be4;
label_032a9eb5:
    local_60.x = 0.0;
    local_60.y = 0.0;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
    Il2CppMethodInitialized_0753e729 = '\x01';
    auVar31 = local_48;
    if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) goto label_032a9ede;
label_032a9bf4:
    if (0.0 <= (float)auVar31) goto label_032a9c00;
label_032a9ef5:
    fVar33 = sqrtf((float)auVar31);
    uVar19 = extraout_XMM0_Db;
    if (1e-05 < fVar33) goto label_032a9f14;
label_032a9c1e:
    pUVar18 = TypeInfo_UnityEngine_Vector3->static_fields;
    fVar35 = (pUVar18->zeroVector).fields.z;
  }
  uVar4 = (pUVar18->zeroVector).fields.x;
  uVar10 = (pUVar18->zeroVector).fields.y;
  fVar33 = local_28 * (float)uVar4 + (float)local_38;
  fVar25 = local_28 * (float)uVar10 + (float)auStack_34._0_4_;
  local_60.z = fVar35 * local_28 + local_60.z;
label_032aa091:
  (position->fields).x = fVar33;
  (position->fields).y = fVar25;
  (position->fields).z = local_60.z;
  return;
}


// EZhex1991.EZSoftBone.EZSoftBoneUtility$$PointOutsideCylinder
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBoneUtility__PointOutsideCylinder (UnityEngine_Vector3_o* position, UnityEngine_Transform_o* transform, float spacing, const MethodInfo* method);
// 0x32a82a0

void EZhex1991_EZSoftBone_EZSoftBoneUtility__PointOutsideCylinder
               (UnityEngine_Vector3_o *position,UnityEngine_Transform_o *transform,float spacing,
               MethodInfo *method)

{
  MethodInfo *method_00;
  float fVar1;
  UnityEngine_Vector3_o UVar2;
  UnityEngine_Vector3_o center;
  UnityEngine_Vector3_o direction;
  
  if (transform == (UnityEngine_Transform_o *)0x0) {
    ThrowNullReferenceException();
  }
  UVar2 = UnityEngine_Transform__get_lossyScale(transform,(MethodInfo *)0x0);
  center = UnityEngine_Transform__get_position(transform,(MethodInfo *)0x0);
  method_00 = (MethodInfo *)0x0;
  direction = UnityEngine_Transform__get_up(transform,(MethodInfo *)0x0);
  fVar1 = ABS(UVar2.fields.x);
  if (ABS(UVar2.fields.x) <= ABS(UVar2.fields.z)) {
    fVar1 = ABS(UVar2.fields.z);
  }
  EZhex1991_EZSoftBone_EZSoftBoneUtility__PointOutsideCylinder_31aa110
            (position,center,direction,fVar1 * 0.5 + spacing,ABS(UVar2.fields.y) + spacing,method_00);
  return;
}


// EZhex1991.EZSoftBone.EZSoftBoneUtility$$PointOutsideCylinder
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBoneUtility__PointOutsideCylinder (UnityEngine_Vector3_o* position, UnityEngine_Vector3_o center, UnityEngine_Vector3_o direction, float radius, float height, const MethodInfo* method);
// 0x32aa110
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x32aa228: jmp 0x32aa26b

void EZhex1991_EZSoftBone_EZSoftBoneUtility__PointOutsideCylinder_31aa110
               (UnityEngine_Vector3_o *position,UnityEngine_Vector3_o center,UnityEngine_Vector3_o direction,
               float radius,float height,MethodInfo *method)

{
  float fVar1;
  undefined4 uVar2;
  float fVar4;
  undefined4 uVar5;
  undefined8 uVar3;
  uint32_t uVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  UnityEngine_Vector3_StaticFields *pUVar9;
  float fVar10;
  float fVar11;
  undefined4 extraout_XMM0_Db;
  undefined4 uVar12;
  undefined4 extraout_XMM0_Db_00;
  float in_XMM0_Dc;
  float in_XMM0_Dd;
  undefined1 auVar13 [16];
  float in_XMM2_Dc;
  float in_XMM2_Dd;
  float fVar14;
  float fVar15;
  float in_XMM4_Db;
  float in_XMM4_Dc;
  float in_XMM4_Dd;
  float fVar16;
  float in_XMM5_Db;
  float fVar17;
  float in_XMM5_Dc;
  float in_XMM5_Dd;
  UnityEngine_Vector3_StaticFields UStack_98;
  undefined8 uStack_20;
  
  fVar1 = (position->fields).x;
  fVar4 = (position->fields).y;
  UStack_98.leftVector.fields.z = 0.0;
  UStack_98.rightVector.fields.x = 0.0;
  fVar15 = (position->fields).z;
  fVar10 = center.fields.x;
  fVar11 = center.fields.y;
  fVar14 = direction.fields.z;
  fVar16 = direction.fields.x;
  fVar17 = direction.fields.y;
  UStack_98.rightVector.fields.y = height;
  UStack_98.rightVector.fields.z = in_XMM5_Db;
  UStack_98.forwardVector.fields.x = in_XMM5_Dc;
  UStack_98.forwardVector.fields.y = in_XMM5_Dd;
  UStack_98.forwardVector.fields.z = radius;
  UStack_98.backVector.fields.x = in_XMM4_Db;
  UStack_98.backVector.fields.y = in_XMM4_Dc;
  UStack_98.backVector.fields.z = in_XMM4_Dd;
  if (g_data_0753e81c == '\0') {
    UStack_98.leftVector.fields.z = 0.0;
    UStack_98.rightVector.fields.x = 0.0;
    UStack_98.upVector.fields.z = direction.fields.z;
    UStack_98.upVector.fields.x = in_XMM2_Dc;
    UStack_98.oneVector.fields._4_8_ = direction.fields._0_8_;
    UStack_98.upVector.fields.y = in_XMM2_Dd;
    UStack_98.positiveInfinityVector.fields.z = in_XMM0_Dc;
    UStack_98.positiveInfinityVector.fields._0_8_ = center.fields._0_8_;
    UStack_98.negativeInfinityVector.fields.x = in_XMM0_Dd;
    UStack_98.leftVector.fields.x = fVar1;
    UStack_98.leftVector.fields.y = fVar4;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Mathf);
    g_data_0753e81c = '\x01';
    fVar10 = UStack_98.positiveInfinityVector.fields.x;
    fVar11 = UStack_98.positiveInfinityVector.fields.y;
    in_XMM0_Dc = UStack_98.positiveInfinityVector.fields.z;
    in_XMM0_Dd = UStack_98.negativeInfinityVector.fields.x;
    fVar1 = UStack_98.leftVector.fields.x;
    fVar4 = UStack_98.leftVector.fields.y;
    fVar14 = UStack_98.upVector.fields.z;
    fVar16 = UStack_98.oneVector.fields.y;
    fVar17 = UStack_98.oneVector.fields.z;
    in_XMM2_Dc = UStack_98.upVector.fields.x;
    in_XMM2_Dd = UStack_98.upVector.fields.y;
  }
  UStack_98.leftVector.fields.x = fVar1 - fVar10;
  UStack_98.leftVector.fields.y = fVar4 - fVar11;
  UStack_98.leftVector.fields.z = UStack_98.leftVector.fields.z - in_XMM0_Dc;
  UStack_98.rightVector.fields.x = UStack_98.rightVector.fields.x - in_XMM0_Dd;
  fVar15 = fVar15 - center.fields.z;
  fVar1 = fVar14 * fVar14 + fVar17 * fVar17 + fVar16 * fVar16;
  if (TypeInfo_UnityEngine_Mathf->static_fields->Epsilon <= fVar1) {
    fVar1 = (fVar15 * fVar14 + UStack_98.leftVector.fields.y * fVar17 + UStack_98.leftVector.fields.x * fVar16
            ) / fVar1;
    UStack_98.oneVector.fields.z = fVar1 * fVar17;
    UStack_98.oneVector.fields.y = fVar1 * fVar16;
    UStack_98.upVector.fields.x = fVar1 * in_XMM2_Dc;
    UStack_98.upVector.fields.y = fVar1 * in_XMM2_Dd;
    auVar13 = ZEXT416((uint)(fVar1 * fVar14));
    UStack_98.upVector.fields.z = (float)auVar13._0_4_;
    UStack_98.downVector.fields.x = (float)auVar13._4_4_;
    UStack_98.downVector.fields.y = (float)auVar13._8_4_;
    UStack_98.downVector.fields.z = (float)auVar13._12_4_;
  }
  else {
    if (Il2CppMethodInitialized_0753e4b6 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
      Il2CppMethodInitialized_0753e4b6 = '\x01';
    }
    pUVar9 = TypeInfo_UnityEngine_Vector3->static_fields;
    uVar2 = (pUVar9->zeroVector).fields.x;
    uVar5 = (pUVar9->zeroVector).fields.y;
    UStack_98.oneVector.fields.z = (float)uVar5;
    UStack_98.oneVector.fields.y = (float)uVar2;
    UStack_98.upVector.fields.x = 0.0;
    UStack_98.upVector.fields.y = 0.0;
    auVar13 = ZEXT416((uint)(pUVar9->zeroVector).fields.z);
    UStack_98.upVector.fields.z = (float)auVar13._0_4_;
    UStack_98.downVector.fields.x = (float)auVar13._4_4_;
    UStack_98.downVector.fields.y = (float)auVar13._8_4_;
    UStack_98.downVector.fields.z = (float)auVar13._12_4_;
  }
  if (Il2CppMethodInitialized_0753e729 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
    Il2CppMethodInitialized_0753e729 = '\x01';
  }
  if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
  }
  fVar1 = UStack_98.upVector.fields.z * UStack_98.upVector.fields.z +
          UStack_98.oneVector.fields.z * UStack_98.oneVector.fields.z +
          UStack_98.oneVector.fields.y * UStack_98.oneVector.fields.y;
  if (fVar1 < 0.0) {
    fVar4 = sqrtf(fVar1);
    UStack_98.rightVector.fields.y = UStack_98.rightVector.fields.y - fVar4;
  }
  else {
    UStack_98.rightVector.fields.y = UStack_98.rightVector.fields.y - SQRT(fVar1);
  }
  if (UStack_98.rightVector.fields.y <= 0.0) {
    return;
  }
  if (Il2CppMethodInitialized_0753e729 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
    Il2CppMethodInitialized_0753e729 = '\x01';
  }
  fVar15 = fVar15 - UStack_98.upVector.fields.z;
  UStack_98.leftVector.fields.x = UStack_98.leftVector.fields.x - UStack_98.oneVector.fields.y;
  UStack_98.leftVector.fields.y = UStack_98.leftVector.fields.y - UStack_98.oneVector.fields.z;
  UStack_98.leftVector.fields.z = UStack_98.leftVector.fields.z - UStack_98.upVector.fields.x;
  UStack_98.rightVector.fields.x = UStack_98.rightVector.fields.x - UStack_98.upVector.fields.y;
  if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
  }
  fVar4 = fVar15 * fVar15 +
          UStack_98.leftVector.fields.y * UStack_98.leftVector.fields.y +
          UStack_98.leftVector.fields.x * UStack_98.leftVector.fields.x;
  UStack_98.positiveInfinityVector.fields.x = fVar4;
  if (fVar4 < 0.0) {
    fVar4 = sqrtf(fVar4);
  }
  else {
    fVar4 = SQRT(fVar4);
  }
  UStack_98.forwardVector.fields.z = UStack_98.forwardVector.fields.z - fVar4;
  if (UStack_98.forwardVector.fields.z <= 0.0) {
    return;
  }
  UStack_98.negativeInfinityVector.fields.y = (position->fields).x;
  UStack_98.negativeInfinityVector.fields.z = (position->fields).y;
  uStack_20 = 0;
  UStack_98.oneVector.fields.x = (position->fields).z;
  if (UStack_98.rightVector.fields.y <= UStack_98.forwardVector.fields.z) {
    if (Il2CppMethodInitialized_0753e72d == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
      Il2CppMethodInitialized_0753e72d = '\x01';
      UStack_98.zeroVector.fields.x = 0.0;
      UStack_98.zeroVector.fields.y = 0.0;
      if (Il2CppMethodInitialized_0753e729 == '\0') goto label_032aa5f4;
label_032aa473:
      UStack_98.zeroVector.fields.x = 0.0;
      UStack_98.zeroVector.fields.y = 0.0;
      uVar6 = (TypeInfo_System_Math->_2).cctor_finished_or_no_cctor;
    }
    else {
      UStack_98.zeroVector.fields.x = 0.0;
      UStack_98.zeroVector.fields.y = 0.0;
      if (Il2CppMethodInitialized_0753e729 != '\0') goto label_032aa473;
label_032aa5f4:
      UStack_98.zeroVector.fields.x = 0.0;
      UStack_98.zeroVector.fields.y = 0.0;
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
      Il2CppMethodInitialized_0753e729 = '\x01';
      uVar6 = (TypeInfo_System_Math->_2).cctor_finished_or_no_cctor;
    }
    if (uVar6 == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
    }
    uVar12 = 0;
    if (fVar1 < 0.0) {
      fVar1 = sqrtf(fVar1);
      uVar12 = extraout_XMM0_Db_00;
      if (1e-05 < fVar1) goto label_032aa503;
label_032aa4a1:
      pUVar9 = TypeInfo_UnityEngine_Vector3->static_fields;
      fVar15 = (pUVar9->zeroVector).fields.z;
    }
    else {
      fVar1 = SQRT(fVar1);
      if (fVar1 <= 1e-05) goto label_032aa4a1;
label_032aa503:
      fVar15 = UStack_98.upVector.fields.z / fVar1;
      auVar13._4_4_ = fVar1;
      auVar13._0_4_ = fVar1;
      auVar13._8_4_ = uVar12;
      auVar13._12_4_ = uVar12;
      auVar13 = divps((undefined1  [16])UStack_98._16_16_,auVar13);
      UStack_98.zeroVector.fields.x = auVar13._0_4_;
      UStack_98.zeroVector.fields.y = auVar13._4_4_;
      pUVar9 = &UStack_98;
    }
    uVar3._0_4_ = (pUVar9->zeroVector).fields.x;
    uVar3._4_4_ = (pUVar9->zeroVector).fields.y;
    UStack_98.forwardVector.fields.z = UStack_98.rightVector.fields.y;
    goto label_032aa52d;
  }
  if (Il2CppMethodInitialized_0753e72d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    Il2CppMethodInitialized_0753e72d = '\x01';
    UStack_98.zeroVector.fields.x = 0.0;
    UStack_98.zeroVector.fields.y = 0.0;
    if (Il2CppMethodInitialized_0753e729 == '\0') goto label_032aa592;
label_032aa404:
    UStack_98.zeroVector.fields.x = 0.0;
    UStack_98.zeroVector.fields.y = 0.0;
    uVar6 = (TypeInfo_System_Math->_2).cctor_finished_or_no_cctor;
  }
  else {
    UStack_98.zeroVector.fields.x = 0.0;
    UStack_98.zeroVector.fields.y = 0.0;
    if (Il2CppMethodInitialized_0753e729 != '\0') goto label_032aa404;
label_032aa592:
    UStack_98.zeroVector.fields.x = 0.0;
    UStack_98.zeroVector.fields.y = 0.0;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
    Il2CppMethodInitialized_0753e729 = '\x01';
    uVar6 = (TypeInfo_System_Math->_2).cctor_finished_or_no_cctor;
  }
  if (uVar6 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
  }
  uVar12 = 0;
  if (UStack_98.positiveInfinityVector.fields.x < 0.0) {
    UStack_98.positiveInfinityVector.fields.x = sqrtf(UStack_98.positiveInfinityVector.fields.x);
    uVar12 = extraout_XMM0_Db;
    if (1e-05 < UStack_98.positiveInfinityVector.fields.x) goto label_032aa4d1;
label_032aa43a:
    pUVar9 = TypeInfo_UnityEngine_Vector3->static_fields;
    fVar15 = (pUVar9->zeroVector).fields.z;
  }
  else {
    UStack_98.positiveInfinityVector.fields.x = SQRT(UStack_98.positiveInfinityVector.fields.x);
    if (UStack_98.positiveInfinityVector.fields.x <= 1e-05) goto label_032aa43a;
label_032aa4d1:
    fVar15 = fVar15 / UStack_98.positiveInfinityVector.fields.x;
    auVar8._4_4_ = UStack_98.leftVector.fields.y;
    auVar8._0_4_ = UStack_98.leftVector.fields.x;
    auVar8._8_4_ = UStack_98.leftVector.fields.z;
    auVar8._12_4_ = UStack_98.rightVector.fields.x;
    auVar7._4_4_ = UStack_98.positiveInfinityVector.fields.x;
    auVar7._0_4_ = UStack_98.positiveInfinityVector.fields.x;
    auVar7._8_4_ = uVar12;
    auVar7._12_4_ = uVar12;
    auVar13 = divps(auVar8,auVar7);
    UStack_98.zeroVector.fields.x = auVar13._0_4_;
    UStack_98.zeroVector.fields.y = auVar13._4_4_;
    pUVar9 = &UStack_98;
  }
  uVar3._0_4_ = (pUVar9->zeroVector).fields.x;
  uVar3._4_4_ = (pUVar9->zeroVector).fields.y;
label_032aa52d:
  (position->fields).x =
       UStack_98.negativeInfinityVector.fields.y + UStack_98.forwardVector.fields.z * (float)uVar3;
  (position->fields).y =
       UStack_98.negativeInfinityVector.fields.z +
       UStack_98.forwardVector.fields.z * (float)((ulong)uVar3 >> 0x20);
  (position->fields).z = UStack_98.oneVector.fields.x + fVar15 * UStack_98.forwardVector.fields.z;
  return;
}


// EZhex1991.EZSoftBone.EZSoftBoneUtility$$PointInsideCylinder
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBoneUtility__PointInsideCylinder (UnityEngine_Vector3_o* position, UnityEngine_Transform_o* transform, float spacing, const MethodInfo* method);
// 0x32a81e0

void EZhex1991_EZSoftBone_EZSoftBoneUtility__PointInsideCylinder
               (UnityEngine_Vector3_o *position,UnityEngine_Transform_o *transform,float spacing,
               MethodInfo *method)

{
  MethodInfo *method_00;
  float fVar1;
  UnityEngine_Vector3_o UVar2;
  UnityEngine_Vector3_o center;
  UnityEngine_Vector3_o direction;
  
  if (transform == (UnityEngine_Transform_o *)0x0) {
    ThrowNullReferenceException();
  }
  UVar2 = UnityEngine_Transform__get_lossyScale(transform,(MethodInfo *)0x0);
  center = UnityEngine_Transform__get_position(transform,(MethodInfo *)0x0);
  method_00 = (MethodInfo *)0x0;
  direction = UnityEngine_Transform__get_up(transform,(MethodInfo *)0x0);
  fVar1 = ABS(UVar2.fields.x);
  if (ABS(UVar2.fields.x) <= ABS(UVar2.fields.z)) {
    fVar1 = ABS(UVar2.fields.z);
  }
  EZhex1991_EZSoftBone_EZSoftBoneUtility__PointInsideCylinder_31aa630
            (position,center,direction,fVar1 * 0.5 - spacing,ABS(UVar2.fields.y) - spacing,method_00);
  return;
}


// EZhex1991.EZSoftBone.EZSoftBoneUtility$$PointInsideCylinder
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBoneUtility__PointInsideCylinder (UnityEngine_Vector3_o* position, UnityEngine_Vector3_o center, UnityEngine_Vector3_o direction, float radius, float height, const MethodInfo* method);
// 0x32aa630
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x32aa741: jmp 0x32aa784
// asm:   0x32aa7fc: jmp 0x32aa81c
// asm:   0x32aa8cd: jmp 0x32aa8fa

void EZhex1991_EZSoftBone_EZSoftBoneUtility__PointInsideCylinder_31aa630
               (UnityEngine_Vector3_o *position,UnityEngine_Vector3_o center,UnityEngine_Vector3_o direction,
               float radius,float height,MethodInfo *method)

{
  float fVar1;
  undefined4 uVar2;
  float fVar3;
  undefined4 uVar4;
  uint32_t uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  UnityEngine_Vector3_StaticFields *pUVar8;
  float fVar9;
  float fVar10;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  undefined4 uVar11;
  float in_XMM0_Dc;
  float in_XMM0_Dd;
  undefined8 uVar12;
  undefined1 auVar13 [16];
  float fVar14;
  float fVar15;
  float in_XMM2_Dc;
  float in_XMM2_Dd;
  float fVar16;
  float fVar17;
  float in_XMM5_Db;
  float in_XMM5_Dc;
  float in_XMM5_Dd;
  UnityEngine_Vector3_StaticFields UStack_a0;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  UStack_a0.upVector.fields.x = radius;
  fVar1 = (position->fields).x;
  fVar3 = (position->fields).y;
  UStack_a0.oneVector.fields.y = 0.0;
  UStack_a0.oneVector.fields.z = 0.0;
  fVar17 = (position->fields).z;
  fVar9 = center.fields.x;
  fVar10 = center.fields.y;
  fVar14 = direction.fields.x;
  fVar15 = direction.fields.y;
  fVar16 = direction.fields.z;
  UStack_a0.backVector.fields.y = height;
  UStack_a0.backVector.fields.z = in_XMM5_Db;
  UStack_a0.positiveInfinityVector.fields.x = in_XMM5_Dc;
  UStack_a0.positiveInfinityVector.fields.y = in_XMM5_Dd;
  if (g_data_0753e81c == '\0') {
    UStack_a0.oneVector.fields.y = 0.0;
    UStack_a0.oneVector.fields.z = 0.0;
    UStack_a0.forwardVector.fields.x = direction.fields.z;
    UStack_a0.rightVector.fields.y = in_XMM2_Dc;
    UStack_a0._56_8_ = direction.fields._0_8_;
    UStack_a0.rightVector.fields.z = in_XMM2_Dd;
    UStack_a0.negativeInfinityVector.fields.y = in_XMM0_Dc;
    UStack_a0._104_8_ = center.fields._0_8_;
    UStack_a0.negativeInfinityVector.fields.z = in_XMM0_Dd;
    UStack_a0.zeroVector.fields.z = fVar1;
    UStack_a0.oneVector.fields.x = fVar3;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Mathf);
    g_data_0753e81c = '\x01';
    fVar9 = UStack_a0.positiveInfinityVector.fields.z;
    fVar10 = UStack_a0.negativeInfinityVector.fields.x;
    in_XMM0_Dc = UStack_a0.negativeInfinityVector.fields.y;
    in_XMM0_Dd = UStack_a0.negativeInfinityVector.fields.z;
    fVar14 = UStack_a0.leftVector.fields.z;
    fVar15 = UStack_a0.rightVector.fields.x;
    in_XMM2_Dc = UStack_a0.rightVector.fields.y;
    in_XMM2_Dd = UStack_a0.rightVector.fields.z;
    fVar16 = UStack_a0.forwardVector.fields.x;
    fVar1 = UStack_a0.zeroVector.fields.z;
    fVar3 = UStack_a0.oneVector.fields.x;
  }
  UStack_a0.zeroVector.fields.z = fVar1 - fVar9;
  UStack_a0.oneVector.fields.x = fVar3 - fVar10;
  UStack_a0.oneVector.fields.y = UStack_a0.oneVector.fields.y - in_XMM0_Dc;
  UStack_a0.oneVector.fields.z = UStack_a0.oneVector.fields.z - in_XMM0_Dd;
  fVar17 = fVar17 - center.fields.z;
  fVar1 = fVar16 * fVar16 + fVar15 * fVar15 + fVar14 * fVar14;
  if (TypeInfo_UnityEngine_Mathf->static_fields->Epsilon <= fVar1) {
    fVar1 = (fVar17 * fVar16 + UStack_a0.oneVector.fields.x * fVar15 + UStack_a0.zeroVector.fields.z * fVar14)
            / fVar1;
    UStack_a0.rightVector.fields.x = fVar1 * fVar15;
    UStack_a0.leftVector.fields.z = fVar1 * fVar14;
    UStack_a0.rightVector.fields.y = fVar1 * in_XMM2_Dc;
    UStack_a0.rightVector.fields.z = fVar1 * in_XMM2_Dd;
    auVar13 = ZEXT416((uint)(fVar1 * fVar16));
    UStack_a0.forwardVector.fields.x = (float)auVar13._0_4_;
    UStack_a0.forwardVector.fields.y = (float)auVar13._4_4_;
    UStack_a0.forwardVector.fields.z = (float)auVar13._8_4_;
    UStack_a0.backVector.fields.x = (float)auVar13._12_4_;
  }
  else {
    if (Il2CppMethodInitialized_0753e4b6 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
      Il2CppMethodInitialized_0753e4b6 = '\x01';
    }
    pUVar8 = TypeInfo_UnityEngine_Vector3->static_fields;
    uVar2 = (pUVar8->zeroVector).fields.x;
    uVar4 = (pUVar8->zeroVector).fields.y;
    UStack_a0.rightVector.fields.x = (float)uVar4;
    UStack_a0.leftVector.fields.z = (float)uVar2;
    UStack_a0.rightVector.fields.y = 0.0;
    UStack_a0.rightVector.fields.z = 0.0;
    auVar13 = ZEXT416((uint)(pUVar8->zeroVector).fields.z);
    UStack_a0.forwardVector.fields.x = (float)auVar13._0_4_;
    UStack_a0.forwardVector.fields.y = (float)auVar13._4_4_;
    UStack_a0.forwardVector.fields.z = (float)auVar13._8_4_;
    UStack_a0.backVector.fields.x = (float)auVar13._12_4_;
  }
  if (Il2CppMethodInitialized_0753e729 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
    Il2CppMethodInitialized_0753e729 = '\x01';
  }
  if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
  }
  fVar1 = UStack_a0.forwardVector.fields.x * UStack_a0.forwardVector.fields.x +
          UStack_a0.rightVector.fields.x * UStack_a0.rightVector.fields.x +
          UStack_a0.leftVector.fields.z * UStack_a0.leftVector.fields.z;
  UStack_a0.positiveInfinityVector.fields.z = fVar1;
  if (fVar1 < 0.0) {
    fVar1 = sqrtf(fVar1);
  }
  else {
    fVar1 = SQRT(fVar1);
  }
  if (Il2CppMethodInitialized_0753e729 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
    Il2CppMethodInitialized_0753e729 = '\x01';
  }
  fVar17 = fVar17 - UStack_a0.forwardVector.fields.x;
  UStack_a0.zeroVector.fields.z = UStack_a0.zeroVector.fields.z - UStack_a0.leftVector.fields.z;
  UStack_a0.oneVector.fields.x = UStack_a0.oneVector.fields.x - UStack_a0.rightVector.fields.x;
  UStack_a0.oneVector.fields.y = UStack_a0.oneVector.fields.y - UStack_a0.rightVector.fields.y;
  UStack_a0.oneVector.fields.z = UStack_a0.oneVector.fields.z - UStack_a0.rightVector.fields.z;
  if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
  }
  UStack_a0.backVector.fields.y = UStack_a0.backVector.fields.y - fVar1;
  fVar1 = fVar17 * fVar17 +
          UStack_a0.oneVector.fields.x * UStack_a0.oneVector.fields.x +
          UStack_a0.zeroVector.fields.z * UStack_a0.zeroVector.fields.z;
  if (fVar1 < 0.0) {
    fVar3 = sqrtf(fVar1);
    fVar3 = UStack_a0.upVector.fields.x - fVar3;
  }
  else {
    fVar3 = UStack_a0.upVector.fields.x - SQRT(fVar1);
  }
  if (0.0 <= UStack_a0.backVector.fields.y) {
    if (0.0 <= fVar3) {
      return;
    }
  }
  uStack_28._0_4_ = (position->fields).x;
  uStack_28._4_4_ = (position->fields).y;
  uStack_20 = 0;
  UStack_a0.leftVector.fields.y = (position->fields).z;
  if (UStack_a0.backVector.fields.y <= fVar3) {
    if (Il2CppMethodInitialized_0753e72d == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
      Il2CppMethodInitialized_0753e72d = '\x01';
      UStack_a0.zeroVector.fields.x = 0.0;
      UStack_a0.zeroVector.fields.y = 0.0;
      if (Il2CppMethodInitialized_0753e729 != '\0') goto label_032aa9bd;
label_032aab37:
      UStack_a0.zeroVector.fields.x = 0.0;
      UStack_a0.zeroVector.fields.y = 0.0;
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
      Il2CppMethodInitialized_0753e729 = '\x01';
      uVar5 = (TypeInfo_System_Math->_2).cctor_finished_or_no_cctor;
    }
    else {
      UStack_a0.zeroVector.fields.x = 0.0;
      UStack_a0.zeroVector.fields.y = 0.0;
      if (Il2CppMethodInitialized_0753e729 == '\0') goto label_032aab37;
label_032aa9bd:
      UStack_a0.zeroVector.fields.x = 0.0;
      UStack_a0.zeroVector.fields.y = 0.0;
      uVar5 = (TypeInfo_System_Math->_2).cctor_finished_or_no_cctor;
    }
    if (uVar5 == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
    }
    uVar11 = 0;
    if (UStack_a0.positiveInfinityVector.fields.z < 0.0) {
      UStack_a0.positiveInfinityVector.fields.z = sqrtf(UStack_a0.positiveInfinityVector.fields.z);
      uVar11 = extraout_XMM0_Db_00;
      if (UStack_a0.positiveInfinityVector.fields.z <= 1e-05) goto label_032aa9eb;
label_032aaa4c:
      fVar17 = UStack_a0.forwardVector.fields.x / UStack_a0.positiveInfinityVector.fields.z;
      auVar13._4_4_ = UStack_a0.positiveInfinityVector.fields.z;
      auVar13._0_4_ = UStack_a0.positiveInfinityVector.fields.z;
      auVar13._8_4_ = uVar11;
      auVar13._12_4_ = uVar11;
      auVar13 = divps((undefined1  [16])UStack_a0._56_16_,auVar13);
      UStack_a0.zeroVector.fields.x = auVar13._0_4_;
      UStack_a0.zeroVector.fields.y = auVar13._4_4_;
      pUVar8 = &UStack_a0;
    }
    else {
      UStack_a0.positiveInfinityVector.fields.z = SQRT(UStack_a0.positiveInfinityVector.fields.z);
      if (1e-05 < UStack_a0.positiveInfinityVector.fields.z) goto label_032aaa4c;
label_032aa9eb:
      pUVar8 = TypeInfo_UnityEngine_Vector3->static_fields;
      fVar17 = (pUVar8->zeroVector).fields.z;
    }
    uVar12._0_4_ = (pUVar8->zeroVector).fields.x;
    uVar12._4_4_ = (pUVar8->zeroVector).fields.y;
    goto label_032aaa73;
  }
  UStack_a0.upVector.fields.x = fVar3;
  if (Il2CppMethodInitialized_0753e72d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    Il2CppMethodInitialized_0753e72d = '\x01';
    if (Il2CppMethodInitialized_0753e729 != '\0') goto label_032aa945;
label_032aaad7:
    UStack_a0.zeroVector.fields.x = 0.0;
    UStack_a0.zeroVector.fields.y = 0.0;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
    Il2CppMethodInitialized_0753e729 = '\x01';
    uVar5 = (TypeInfo_System_Math->_2).cctor_finished_or_no_cctor;
  }
  else {
    if (Il2CppMethodInitialized_0753e729 == '\0') goto label_032aaad7;
label_032aa945:
    UStack_a0.zeroVector.fields.x = 0.0;
    UStack_a0.zeroVector.fields.y = 0.0;
    uVar5 = (TypeInfo_System_Math->_2).cctor_finished_or_no_cctor;
  }
  if (uVar5 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
  }
  uVar11 = 0;
  if (fVar1 < 0.0) {
    fVar1 = sqrtf(fVar1);
    uVar11 = extraout_XMM0_Db;
    UStack_a0.backVector.fields.y = UStack_a0.upVector.fields.x;
  }
  else {
    fVar1 = SQRT(fVar1);
    UStack_a0.backVector.fields.y = UStack_a0.upVector.fields.x;
  }
  if (1e-05 < fVar1) {
    fVar17 = fVar17 / fVar1;
    auVar7._4_4_ = UStack_a0.oneVector.fields.x;
    auVar7._0_4_ = UStack_a0.zeroVector.fields.z;
    auVar7._8_4_ = UStack_a0.oneVector.fields.y;
    auVar7._12_4_ = UStack_a0.oneVector.fields.z;
    auVar6._4_4_ = fVar1;
    auVar6._0_4_ = fVar1;
    auVar6._8_4_ = uVar11;
    auVar6._12_4_ = uVar11;
    auVar13 = divps(auVar7,auVar6);
    uVar12 = auVar13._0_8_;
  }
  else {
    pUVar8 = TypeInfo_UnityEngine_Vector3->static_fields;
    fVar17 = (pUVar8->zeroVector).fields.z;
    uVar12._0_4_ = (pUVar8->zeroVector).fields.x;
    uVar12._4_4_ = (pUVar8->zeroVector).fields.y;
  }
label_032aaa73:
  (position->fields).x = (float)uStack_28 + UStack_a0.backVector.fields.y * (float)uVar12;
  (position->fields).y = uStack_28._4_4_ + UStack_a0.backVector.fields.y * (float)((ulong)uVar12 >> 0x20);
  (position->fields).z = UStack_a0.leftVector.fields.y + fVar17 * UStack_a0.backVector.fields.y;
  return;
}


// EZhex1991.EZSoftBone.EZSoftBoneUtility$$PointOutsideBox
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBoneUtility__PointOutsideBox (UnityEngine_Vector3_o* position, UnityEngine_BoxCollider_o* collider, float spacing, const MethodInfo* method);
// 0x32a7ab0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x32a7c56: jmp 0x32a7c73

void EZhex1991_EZSoftBone_EZSoftBoneUtility__PointOutsideBox
               (UnityEngine_Vector3_o *position,UnityEngine_BoxCollider_o *collider,float spacing,
               MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  UnityEngine_Vector3_StaticFields *pUVar3;
  UnityEngine_Transform_o *pUVar4;
  float *pfVar5;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dc_01;
  undefined4 extraout_XMM0_Dd;
  undefined4 extraout_XMM0_Dd_00;
  undefined4 extraout_XMM0_Dd_01;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  UnityEngine_Vector3_o UVar12;
  UnityEngine_Vector3_o position_00;
  float afStack_88 [2];
  undefined8 uStack_80;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  undefined1 auStack_68 [8];
  float fStack_60;
  float fStack_5c;
  undefined1 auStack_58 [8];
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  undefined1 auStack_38 [8];
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  
  fStack_28 = spacing;
  if ((collider != (UnityEngine_BoxCollider_o *)0x0) &&
     (pUVar4 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)collider,(MethodInfo *)0x0),
     pUVar4 != (UnityEngine_Transform_o *)0x0)) {
    fVar6 = 0.0;
    fVar7 = 0.0;
    fVar8 = 0.0;
    UVar12 = UnityEngine_Transform__InverseTransformPoint
                       (pUVar4,(UnityEngine_Vector3_o)position->fields,(MethodInfo *)0x0);
    fStack_78 = UVar12.fields.z;
    fStack_50 = (float)extraout_XMM0_Dc;
    auStack_58 = (undefined1  [8])UVar12.fields._0_8_;
    fStack_4c = (float)extraout_XMM0_Dd;
    fStack_74 = fVar6;
    fStack_70 = fVar7;
    fStack_6c = fVar8;
    UVar12 = UnityEngine_BoxCollider__get_center(collider,(MethodInfo *)0x0);
    fStack_30 = (float)extraout_XMM0_Dc_00;
    auStack_38 = UVar12.fields._0_8_;
    fStack_2c = (float)extraout_XMM0_Dd_00;
    afStack_88[0] = fStack_78 - UVar12.fields.z;
    fStack_78 = afStack_88[0];
    UVar12 = UnityEngine_BoxCollider__get_size(collider,(MethodInfo *)0x0);
    fStack_48 = UVar12.fields.z;
    fStack_60 = (float)extraout_XMM0_Dc_01;
    auStack_68 = (undefined1  [8])UVar12.fields._0_8_;
    fStack_5c = (float)extraout_XMM0_Dd_01;
    auStack_58._0_4_ = (float)auStack_58._0_4_ - (float)auStack_38._0_4_;
    auStack_58._4_4_ = (float)auStack_58._4_4_ - (float)auStack_38._4_4_;
    fStack_50 = fStack_50 - fStack_30;
    fStack_4c = fStack_4c - fStack_2c;
    uStack_80 = CONCAT44(auStack_58._4_4_,auStack_58._0_4_);
    fStack_44 = fVar6;
    fStack_40 = fVar7;
    fStack_3c = fVar8;
    pUVar4 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)collider,(MethodInfo *)0x0);
    if (Il2CppMethodInitialized_0753e4b7 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
      Il2CppMethodInitialized_0753e4b7 = '\x01';
    }
    if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
      auStack_68._4_4_ = ABS((float)auStack_68._4_4_) * 0.5;
      auStack_68._0_4_ = ABS((float)auStack_68._0_4_) * 0.5;
      fStack_60 = ABS(fStack_60) * 0.0;
      fStack_5c = ABS(fStack_5c) * 0.0;
      pUVar3 = TypeInfo_UnityEngine_Vector3->static_fields;
      UVar12.fields.z = (pUVar3->oneVector).fields.z * fStack_28;
      uVar1 = (pUVar3->oneVector).fields.x;
      uVar2 = (pUVar3->oneVector).fields.y;
      UVar12.fields.x = fStack_28 * (float)uVar1;
      UVar12.fields.y = fStack_28 * (float)uVar2;
      UVar12 = UnityEngine_Transform__InverseTransformVector(pUVar4,UVar12,(MethodInfo *)0x0);
      fVar6 = ABS(UVar12.fields.x) + (float)auStack_68._0_4_;
      fVar7 = ABS(UVar12.fields.y) + (float)auStack_68._4_4_;
      if ((ABS((float)auStack_58._0_4_) < fVar6) && (ABS((float)auStack_58._4_4_) < fVar7)) {
        fVar8 = ABS(UVar12.fields.z) + ABS(fStack_48) * 0.5;
        if (ABS(fStack_78) < fVar8) {
          fVar9 = ABS(ABS((float)auStack_58._0_4_) - fVar6);
          fVar10 = ABS(ABS((float)auStack_58._4_4_) - fVar7);
          fVar11 = ABS(ABS(fStack_78) - fVar8);
          if (fVar10 <= fVar9) {
            if (fVar11 <= fVar10) {
              pfVar5 = afStack_88;
            }
            else {
              fStack_78 = (float)auStack_58._4_4_;
              fStack_74 = (float)auStack_58._4_4_;
              fStack_70 = (float)auStack_58._4_4_;
              fStack_6c = (float)auStack_58._4_4_;
              pfVar5 = (float *)((long)&uStack_80 + 4);
              fVar8 = fVar7;
            }
          }
          else {
            pfVar5 = afStack_88;
            if (fVar9 < fVar11) {
              fStack_78 = (float)auStack_58._0_4_;
              fStack_74 = (float)auStack_58._4_4_;
              fStack_70 = fStack_50;
              fStack_6c = fStack_4c;
              pfVar5 = (float *)&uStack_80;
              fVar8 = fVar6;
            }
          }
          *pfVar5 = (float)(~-(uint)(0.0 <= fStack_78) & (uint)-fVar8 |
                           (uint)fVar8 & -(uint)(0.0 <= fStack_78));
        }
      }
      pUVar4 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)collider,(MethodInfo *)0x0);
      UVar12 = UnityEngine_BoxCollider__get_center(collider,(MethodInfo *)0x0);
      if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
        position_00.fields.z = UVar12.fields.z + afStack_88[0];
        position_00.fields.x = UVar12.fields.x + (float)uStack_80;
        position_00.fields.y = UVar12.fields.y + (float)((ulong)uStack_80 >> 0x20);
        UVar12 = UnityEngine_Transform__TransformPoint(pUVar4,position_00,(MethodInfo *)0x0);
        (position->fields).x = UVar12.fields.x;
        (position->fields).y = UVar12.fields.y;
        (position->fields).z = UVar12.fields.z;
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// EZhex1991.EZSoftBone.EZSoftBoneUtility$$PointOutsideBox
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBoneUtility__PointOutsideBox (UnityEngine_Vector3_o* position, UnityEngine_Vector3_o boxSize, const MethodInfo* method);
// 0x32aab70

void EZhex1991_EZSoftBone_EZSoftBoneUtility__PointOutsideBox_31aab70
               (UnityEngine_Vector3_o *position,UnityEngine_Vector3_o boxSize,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  fVar6 = boxSize.fields.z;
  uVar1 = (position->fields).x;
  uVar2 = (position->fields).y;
  fVar4 = boxSize.fields.x;
  if ((ABS((float)uVar1) < fVar4) && (fVar5 = boxSize.fields.y, ABS((float)uVar2) < fVar5)) {
    fVar9 = (position->fields).z;
    if (ABS(fVar9) < fVar6) {
      pfVar3 = &(position->fields).z;
      fVar7 = ABS(ABS((float)uVar1) - fVar4);
      fVar8 = ABS(ABS((float)uVar2) - fVar5);
      fVar10 = ABS(ABS(fVar9) - fVar6);
      if (fVar8 <= fVar7) {
        if (fVar8 < fVar10) {
          pfVar3 = &(position->fields).y;
          fVar6 = fVar5;
          fVar9 = (float)uVar2;
        }
      }
      else {
        if (fVar7 < fVar10) {
          pfVar3 = (float *)position;
          fVar6 = fVar4;
        }
        fVar9 = (float)(~-(uint)(fVar7 < fVar10) & (uint)fVar9 | uVar1 & -(uint)(fVar7 < fVar10));
      }
      *pfVar3 = (float)(~-(uint)(0.0 <= fVar9) & (uint)-fVar6 | (uint)fVar6 & -(uint)(0.0 <= fVar9));
    }
  }
  return;
}


// EZhex1991.EZSoftBone.EZSoftBoneUtility$$PointInsideBox
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBoneUtility__PointInsideBox (UnityEngine_Vector3_o* position, UnityEngine_BoxCollider_o* collider, float spacing, const MethodInfo* method);
// 0x32a7850
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x32a79ef: movaps xmmword ptr [rsp + 0x10], xmm4

void EZhex1991_EZSoftBone_EZSoftBoneUtility__PointInsideBox
               (UnityEngine_Vector3_o *position,UnityEngine_BoxCollider_o *collider,float spacing,
               MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  UnityEngine_Vector3_StaticFields *pUVar3;
  UnityEngine_Transform_o *pUVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  UnityEngine_Vector3_o UVar8;
  UnityEngine_Vector3_o UVar9;
  UnityEngine_Vector3_o UVar10;
  UnityEngine_Vector3_o UVar11;
  UnityEngine_Vector3_o UVar12;
  UnityEngine_Vector3_Fields UVar13;
  float local_88;
  float fStack_84;
  float local_68;
  float fStack_64;
  float local_38;
  float fStack_34;
  
  if ((collider != (UnityEngine_BoxCollider_o *)0x0) &&
     (pUVar4 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)collider,(MethodInfo *)0x0),
     pUVar4 != (UnityEngine_Transform_o *)0x0)) {
    UVar8 = UnityEngine_Transform__InverseTransformPoint
                      (pUVar4,(UnityEngine_Vector3_o)position->fields,(MethodInfo *)0x0);
    UVar9 = UnityEngine_BoxCollider__get_center(collider,(MethodInfo *)0x0);
    UVar10 = UnityEngine_BoxCollider__get_size(collider,(MethodInfo *)0x0);
    pUVar4 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)collider,(MethodInfo *)0x0);
    if (Il2CppMethodInitialized_0753e4b7 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
      Il2CppMethodInitialized_0753e4b7 = '\x01';
    }
    if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
      local_68 = UVar10.fields.x;
      fStack_64 = UVar10.fields.y;
      local_88 = UVar8.fields.x;
      fStack_84 = UVar8.fields.y;
      local_38 = UVar9.fields.x;
      fStack_34 = UVar9.fields.y;
      local_88 = local_88 - local_38;
      fStack_84 = fStack_84 - fStack_34;
      pUVar3 = TypeInfo_UnityEngine_Vector3->static_fields;
      UVar11.fields.z = (pUVar3->oneVector).fields.z * spacing;
      uVar1 = (pUVar3->oneVector).fields.x;
      uVar2 = (pUVar3->oneVector).fields.y;
      UVar11.fields.x = spacing * (float)uVar1;
      UVar11.fields.y = spacing * (float)uVar2;
      UVar11 = UnityEngine_Transform__InverseTransformVector(pUVar4,UVar11,(MethodInfo *)0x0);
      fVar5 = ABS(local_68) * 0.5 - ABS(UVar11.fields.x);
      fVar6 = ABS(fStack_64) * 0.5 - ABS(UVar11.fields.y);
      if (fVar6 < ABS(fStack_84)) {
        fStack_84 = (float)(~-(uint)(0.0 <= fStack_84) & (uint)-fVar6 |
                           (uint)fVar6 & -(uint)(0.0 <= fStack_84));
      }
      pUVar4 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)collider,(MethodInfo *)0x0);
      UVar12 = UnityEngine_BoxCollider__get_center(collider,(MethodInfo *)0x0);
      if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
        fVar6 = UVar8.fields.z - UVar9.fields.z;
        fVar7 = ABS(UVar10.fields.z) * 0.5 - ABS(UVar11.fields.z);
        UVar8.fields.y = fStack_84 + UVar12.fields.y;
        UVar8.fields.x =
             (float)(~-(uint)(fVar5 < ABS(local_88)) & (uint)local_88 |
                    (~-(uint)(0.0 <= local_88) & (uint)-fVar5 | -(uint)(0.0 <= local_88) & (uint)fVar5) &
                    -(uint)(fVar5 < ABS(local_88))) + UVar12.fields.x;
        UVar8.fields.z =
             (float)(~-(uint)(fVar7 < ABS(fVar6)) & (uint)fVar6 |
                    (~-(uint)(0.0 <= fVar6) & (uint)-fVar7 | -(uint)(0.0 <= fVar6) & (uint)fVar7) &
                    -(uint)(fVar7 < ABS(fVar6))) + UVar12.fields.z;
        UVar13 = (UnityEngine_Vector3_Fields)
                 UnityEngine_Transform__TransformPoint(pUVar4,UVar8,(MethodInfo *)0x0);
        position->fields = UVar13;
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// EZhex1991.EZSoftBone.EZSoftBoneUtility$$PointInsideBox
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBoneUtility__PointInsideBox (UnityEngine_Vector3_o* position, UnityEngine_Vector3_o boxSize, const MethodInfo* method);
// 0x32aac20
// asm: 5 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x32aac4d: shufps xmm0, xmm0, 0x55
// asm:   0x32aac51: ucomiss xmm5, xmm0
// asm:   0x32aac54: ja 0x32aac87
// asm:   0x32aac56: ucomiss xmm3, xmm1
// asm:   0x32aac59: ja 0x32aacac

void EZhex1991_EZSoftBone_EZSoftBoneUtility__PointInsideBox_31aac20
               (UnityEngine_Vector3_o *position,UnityEngine_Vector3_o boxSize,MethodInfo *method)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  fVar7 = boxSize.fields.z;
  fVar5 = boxSize.fields.x;
  fVar6 = boxSize.fields.y;
  uVar2 = (position->fields).x;
  uVar3 = (position->fields).y;
  fVar1 = (position->fields).z;
  if (fVar5 < ABS((float)uVar2)) {
    (position->fields).x =
         (float)(~-(uint)(0.0 <= (float)uVar2) & (uint)-fVar5 | -(uint)(0.0 <= (float)uVar2) & (uint)fVar5);
  }
  if (fVar6 < ABS((float)uVar3)) {
    (position->fields).y =
         (float)(~-(uint)(0.0 <= (float)uVar3) & (uint)-fVar6 | (uint)fVar6 & -(uint)(0.0 <= (float)uVar3));
  }
  if (fVar7 < ABS(fVar1)) {
    uVar4 = -(uint)(0.0 <= fVar1);
    (position->fields).z = (float)(~uVar4 & (uint)-fVar7 | (uint)fVar7 & uVar4);
    return;
  }
  return;
}


// EZhex1991.EZSoftBone.EZSoftBoneUtility$$PointOutsideCollider
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBoneUtility__PointOutsideCollider (UnityEngine_Vector3_o* position, UnityEngine_Collider_o* collider, float spacing, const MethodInfo* method);
// 0x32a5f10
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x32a60e3: jmp 0x32a6262
// asm:   0x32a6133: jmp 0x32a634b

void EZhex1991_EZSoftBone_EZSoftBoneUtility__PointOutsideCollider
               (UnityEngine_Vector3_o *position,UnityEngine_Collider_o *collider,float spacing,
               MethodInfo *method)

{
  undefined4 uVar1;
  float fVar2;
  undefined4 uVar3;
  float fVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  UnityEngine_Vector3_StaticFields *pUVar7;
  float fVar8;
  undefined4 extraout_XMM0_Db;
  undefined4 uVar9;
  undefined4 extraout_XMM0_Db_00;
  float extraout_XMM0_Dc;
  float extraout_XMM0_Dd;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  UnityEngine_Vector3_o UVar12;
  UnityEngine_Vector3_o end;
  UnityEngine_Color_o color;
  UnityEngine_Bounds_o local_70;
  float local_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  undefined1 local_48 [16];
  float local_38;
  undefined1 local_28 [16];
  
  local_38 = spacing;
  if (Il2CppMethodInitialized_0753e81a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Debug);
    Il2CppMethodInitialized_0753e81a = '\x01';
  }
  if (collider == (UnityEngine_Collider_o *)0x0) {
    ThrowNullReferenceException();
  }
  UVar12 = UnityEngine_Collider__ClosestPoint
                     (collider,(UnityEngine_Vector3_o)position->fields,(MethodInfo *)0x0);
  UVar12.fields.z = UVar12.fields.z;
  uVar1 = (position->fields).x;
  uVar3 = (position->fields).y;
  fVar8 = (position->fields).z;
  local_48._8_4_ = extraout_XMM0_Dc;
  local_48._0_8_ = UVar12.fields._0_8_;
  local_48._12_4_ = extraout_XMM0_Dd;
  local_58 = (float)uVar1 - UVar12.fields.x;
  fStack_54 = (float)uVar3 - UVar12.fields.y;
  fVar4 = fVar8 - UVar12.fields.z;
  fStack_50 = 0.0 - extraout_XMM0_Dc;
  fStack_4c = 0.0 - extraout_XMM0_Dd;
  fVar2 = fVar4 * fVar4 + fStack_54 * fStack_54 + local_58 * local_58;
  if (9.9999994e-11 <= fVar2) {
    if (Il2CppMethodInitialized_0753e729 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
      Il2CppMethodInitialized_0753e729 = '\x01';
      if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) goto label_032a61e4;
label_032a6112:
      if (0.0 <= fVar2) goto label_032a611e;
label_032a61fb:
      fVar8 = sqrtf(fVar2);
      if (local_38 <= fVar8) {
        return;
      }
    }
    else {
      if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor != 0) goto label_032a6112;
label_032a61e4:
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
      if (fVar2 < 0.0) goto label_032a61fb;
label_032a611e:
      if (local_38 <= SQRT(fVar2)) {
        return;
      }
    }
    if (Il2CppMethodInitialized_0753e72d == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
      Il2CppMethodInitialized_0753e72d = '\x01';
      local_70.fields.m_Center.fields.x = 0.0;
      local_70.fields.m_Center.fields.y = 0.0;
      if (Il2CppMethodInitialized_0753e729 == '\0') goto label_032a62a8;
label_032a6232:
      local_70.fields.m_Center.fields.x = 0.0;
      local_70.fields.m_Center.fields.y = 0.0;
      if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor != 0) goto label_032a6242;
label_032a62d1:
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
      if (fVar2 < 0.0) goto label_032a62e8;
label_032a624e:
      uVar9 = 0;
      fVar2 = SQRT(fVar2);
    }
    else {
      local_70.fields.m_Center.fields.x = 0.0;
      local_70.fields.m_Center.fields.y = 0.0;
      if (Il2CppMethodInitialized_0753e729 != '\0') goto label_032a6232;
label_032a62a8:
      local_70.fields.m_Center.fields.x = 0.0;
      local_70.fields.m_Center.fields.y = 0.0;
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
      Il2CppMethodInitialized_0753e729 = '\x01';
      if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) goto label_032a62d1;
label_032a6242:
      if (0.0 <= fVar2) goto label_032a624e;
label_032a62e8:
      fVar2 = sqrtf(fVar2);
      uVar9 = extraout_XMM0_Db_00;
    }
    if (fVar2 <= 1e-05) goto label_032a6262;
    fVar8 = fVar4 / fVar2;
    auVar6._4_4_ = fStack_54;
    auVar6._0_4_ = local_58;
    auVar6._8_4_ = fStack_50;
    auVar6._12_4_ = fStack_4c;
    auVar11._4_4_ = fVar2;
    auVar11._0_4_ = fVar2;
    auVar11._8_4_ = uVar9;
    auVar11._12_4_ = uVar9;
    auVar11 = divps(auVar6,auVar11);
    local_70.fields.m_Center.fields.x = auVar11._0_4_;
    local_70.fields.m_Center.fields.y = auVar11._4_4_;
    pUVar7 = (UnityEngine_Vector3_StaticFields *)&local_70;
  }
  else {
    UnityEngine_Collider__get_bounds(&local_70,collider,(MethodInfo *)0x0);
    local_58 = local_70.fields.m_Center.fields.x;
    fStack_54 = local_70.fields.m_Center.fields.y;
    fStack_50 = 0.0;
    fStack_4c = 0.0;
    fVar8 = fVar8 - local_70.fields.m_Center.fields.z;
    UnityEngine_Collider__get_bounds(&local_70,collider,(MethodInfo *)0x0);
    fVar2 = local_70.fields.m_Center.fields.x;
    fVar4 = local_70.fields.m_Center.fields.y;
    if ((TypeInfo_UnityEngine_Debug->_2).cctor_finished_or_no_cctor == 0) {
      local_28._0_4_ = local_70.fields.m_Center.fields.x;
      local_28._4_4_ = local_70.fields.m_Center.fields.y;
      local_28._8_4_ = 0.0;
      local_28._12_4_ = 0.0;
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Debug);
      fVar2 = (float)local_28._0_4_;
      fVar4 = (float)local_28._4_4_;
    }
    UVar12.fields.y = fVar4;
    UVar12.fields.x = fVar2;
    UVar12.fields.z = local_70.fields.m_Center.fields.z;
    end.fields.z = UVar12.fields.z;
    end.fields.x = (float)local_48._0_4_;
    end.fields.y = (float)local_48._4_4_;
    color.fields.b = 0.0;
    color.fields.a = 1.0;
    color.fields.r = 1.0;
    color.fields.g = 0.0;
    UnityEngine_Debug__DrawLine(UVar12,end,color,(MethodInfo *)0x0);
    if (Il2CppMethodInitialized_0753e72d == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
      Il2CppMethodInitialized_0753e72d = '\x01';
      local_70.fields.m_Center.fields.x = 0.0;
      local_70.fields.m_Center.fields.y = 0.0;
    }
    else {
      local_70.fields.m_Center.fields.x = 0.0;
      local_70.fields.m_Center.fields.y = 0.0;
    }
    local_70.fields.m_Center.fields.x = 0.0;
    local_70.fields.m_Center.fields.y = 0.0;
    if (Il2CppMethodInitialized_0753e729 == '\0') {
      local_70.fields.m_Center.fields.x = 0.0;
      local_70.fields.m_Center.fields.y = 0.0;
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
      Il2CppMethodInitialized_0753e729 = '\x01';
    }
    auVar10._0_4_ = (float)uVar1 - local_58;
    auVar10._4_4_ = (float)uVar3 - fStack_54;
    auVar10._8_4_ = 0.0 - fStack_50;
    auVar10._12_4_ = 0.0 - fStack_4c;
    if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
    }
    uVar9 = 0;
    fVar2 = fVar8 * fVar8 + auVar10._4_4_ * auVar10._4_4_ + auVar10._0_4_ * auVar10._0_4_;
    if (fVar2 < 0.0) {
      fVar2 = sqrtf(fVar2);
      uVar9 = extraout_XMM0_Db;
    }
    else {
      fVar2 = SQRT(fVar2);
    }
    if (1e-05 < fVar2) {
      fVar8 = fVar8 / fVar2;
      auVar5._4_4_ = fVar2;
      auVar5._0_4_ = fVar2;
      auVar5._8_4_ = uVar9;
      auVar5._12_4_ = uVar9;
      auVar11 = divps(auVar10,auVar5);
      fVar2 = auVar11._0_4_;
      fVar4 = auVar11._4_4_;
      goto label_032a6320;
    }
label_032a6262:
    pUVar7 = TypeInfo_UnityEngine_Vector3->static_fields;
    fVar8 = (pUVar7->zeroVector).fields.z;
  }
  fVar2 = (pUVar7->zeroVector).fields.x;
  fVar4 = (pUVar7->zeroVector).fields.y;
label_032a6320:
  (position->fields).x = (float)local_48._0_4_ + local_38 * fVar2;
  (position->fields).y = (float)local_48._4_4_ + local_38 * fVar4;
  (position->fields).z = UVar12.fields.z + fVar8 * local_38;
  return;
}


// EZhex1991.EZSoftBone.EZSoftBoneUtility$$DrawGizmosArrow
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBoneUtility__DrawGizmosArrow (UnityEngine_Vector3_o startPoint, UnityEngine_Vector3_o direction, float halfWidth, UnityEngine_Vector3_o normal, const MethodInfo* method);
// 0x32aacd0

void EZhex1991_EZSoftBone_EZSoftBoneUtility__DrawGizmosArrow
               (UnityEngine_Vector3_o startPoint,UnityEngine_Vector3_o direction,float halfWidth,
               UnityEngine_Vector3_o normal,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  void *pvVar3;
  undefined1 auVar4 [16];
  uint uVar5;
  UnityEngine_Vector3_StaticFields *pUVar6;
  Il2CppObject *pIVar7;
  float *pfVar8;
  ulong uVar9;
  float fVar10;
  float extraout_XMM0_Db;
  undefined4 in_XMM0_Dc;
  undefined4 in_XMM0_Dd;
  float fVar11;
  float fVar12;
  float in_XMM2_Dc;
  float in_XMM2_Dd;
  float fVar13;
  float fVar14;
  float in_XMM3_Db;
  undefined1 auVar15 [16];
  float in_XMM5_Dc;
  float in_XMM5_Dd;
  float fVar16;
  float in_XMM6_Db;
  float in_XMM6_Dd;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  UnityEngine_Vector3_o to;
  float local_d8;
  float fStack_d4;
  UnityEngine_Vector3_StaticFields local_a0;
  undefined1 local_28 [16];
  
  fVar11 = startPoint.fields.z;
  local_a0.positiveInfinityVector.fields.z = halfWidth;
  local_a0.forwardVector.fields.x = direction.fields.z;
  local_28._8_4_ = in_XMM0_Dc;
  local_28._0_8_ = startPoint.fields._0_8_;
  local_28._12_4_ = in_XMM0_Dd;
  local_a0.leftVector.fields.z = direction.fields.x;
  local_a0.rightVector.fields.x = direction.fields.y;
  local_a0.rightVector.fields.y = in_XMM2_Dc;
  local_a0.rightVector.fields.z = in_XMM2_Dd;
  fVar10 = direction.fields.x;
  fVar14 = direction.fields.y;
  fVar25 = normal.fields.x;
  fVar12 = normal.fields.y;
  fVar13 = normal.fields.z;
  local_a0.positiveInfinityVector.fields.y = in_XMM6_Db;
  local_a0.forwardVector.fields.y = in_XMM3_Db;
  if (g_data_0753e81b == '\0') {
    local_a0.leftVector.fields.x = in_XMM5_Dc;
    local_a0.downVector.fields._4_8_ = normal.fields._0_8_;
    local_a0.leftVector.fields.y = in_XMM5_Dd;
    local_a0.upVector.fields.x = normal.fields.z;
    local_a0.upVector.fields.y = in_XMM6_Db;
    local_a0.downVector.fields.x = in_XMM6_Dd;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3_array);
    g_data_0753e81b = '\x01';
    fVar10 = local_a0.leftVector.fields.z;
    fVar14 = local_a0.rightVector.fields.x;
    in_XMM2_Dc = local_a0.rightVector.fields.y;
    in_XMM2_Dd = local_a0.rightVector.fields.z;
    fVar25 = local_a0.downVector.fields.y;
    fVar12 = local_a0.downVector.fields.z;
    in_XMM5_Dc = local_a0.leftVector.fields.x;
    in_XMM5_Dd = local_a0.leftVector.fields.y;
    fVar13 = local_a0.upVector.fields.x;
    local_a0.positiveInfinityVector.fields.y = local_a0.upVector.fields.y;
  }
  fVar26 = local_a0.forwardVector.fields.x;
  fVar27 = fVar25;
  fVar16 = fVar13;
  fVar19 = local_a0.forwardVector.fields.x;
  local_a0.upVector.fields.z = local_a0.positiveInfinityVector.fields.y;
  fVar22 = local_a0.forwardVector.fields.y;
  fVar17 = fVar12;
  fVar20 = fVar10;
  if (Il2CppMethodInitialized_0753e72d == '\0') {
    local_a0.downVector.fields.z = fVar12;
    local_a0.downVector.fields.y = fVar25;
    local_a0.leftVector.fields.x = in_XMM5_Dc;
    local_a0.leftVector.fields.y = in_XMM5_Dd;
    local_a0.upVector.fields.y = local_a0.forwardVector.fields.x;
    local_a0.downVector.fields.x = local_a0.forwardVector.fields.y;
    local_a0.backVector.fields.y = local_a0.forwardVector.fields.x;
    local_a0.positiveInfinityVector.fields.x = local_a0.forwardVector.fields.y;
    local_a0.zeroVector.fields.z = fVar12;
    local_a0.oneVector.fields.x = fVar10;
    local_a0.oneVector.fields.y = in_XMM5_Dc;
    local_a0.oneVector.fields.z = in_XMM5_Dd;
    local_a0.upVector.fields.x = fVar13;
    local_a0.backVector.fields.z = fVar13;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    Il2CppMethodInitialized_0753e72d = '\x01';
    fVar26 = local_a0.backVector.fields.y;
    fVar13 = local_a0.backVector.fields.z;
    local_a0.forwardVector.fields.y = local_a0.positiveInfinityVector.fields.x;
    fVar10 = local_a0.leftVector.fields.z;
    fVar27 = local_a0.downVector.fields.y;
    fVar16 = local_a0.upVector.fields.x;
    fVar19 = local_a0.upVector.fields.y;
    fVar22 = local_a0.downVector.fields.x;
    fVar17 = local_a0.zeroVector.fields.z;
    fVar20 = local_a0.oneVector.fields.x;
    in_XMM5_Dc = local_a0.oneVector.fields.y;
    in_XMM5_Dd = local_a0.oneVector.fields.z;
  }
  local_a0.zeroVector.fields.x = 0.0;
  local_a0.zeroVector.fields.y = 0.0;
  fVar18 = fVar17 * fVar26;
  fVar21 = fVar20 * fVar13;
  fVar23 = in_XMM5_Dc * local_a0.forwardVector.fields.y;
  fVar24 = in_XMM5_Dd * local_a0.positiveInfinityVector.fields.y;
  if (Il2CppMethodInitialized_0753e729 == '\0') {
    local_a0.zeroVector.fields.z = fVar17 * fVar26;
    local_a0.oneVector.fields.x = fVar20 * fVar13;
    local_a0.oneVector.fields.y = in_XMM5_Dc * local_a0.forwardVector.fields.y;
    local_a0.oneVector.fields.z = in_XMM5_Dd * local_a0.positiveInfinityVector.fields.y;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
    Il2CppMethodInitialized_0753e729 = '\x01';
    fVar18 = local_a0.zeroVector.fields.z;
    fVar21 = local_a0.oneVector.fields.x;
    fVar23 = local_a0.oneVector.fields.y;
    fVar24 = local_a0.oneVector.fields.z;
  }
  auVar15._0_4_ = fVar14 * fVar16 - fVar18;
  auVar15._4_4_ = fVar25 * fVar19 - fVar21;
  auVar15._8_4_ = in_XMM2_Dc * local_a0.upVector.fields.z - fVar23;
  auVar15._12_4_ = in_XMM2_Dd * fVar22 - fVar24;
  fVar13 = fVar12 * fVar10 - direction.fields.y * fVar27;
  if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
  }
  fVar10 = fVar13 * fVar13 + auVar15._4_4_ * auVar15._4_4_ + auVar15._0_4_ * auVar15._0_4_;
  if (fVar10 < 0.0) {
    fVar10 = sqrtf(fVar10);
    fVar12 = extraout_XMM0_Db;
  }
  else {
    fVar10 = SQRT(fVar10);
  }
  if (1e-05 < fVar10) {
    fVar13 = fVar13 / fVar10;
    auVar4._4_4_ = fVar10;
    auVar4._0_4_ = fVar10;
    auVar4._8_4_ = fVar12;
    auVar4._12_4_ = fVar12;
    auVar15 = divps(auVar15,auVar4);
    local_a0.zeroVector.fields.x = auVar15._0_4_;
    local_a0.zeroVector.fields.y = auVar15._4_4_;
    pUVar6 = &local_a0;
  }
  else {
    pUVar6 = TypeInfo_UnityEngine_Vector3->static_fields;
    fVar13 = (pUVar6->zeroVector).fields.z;
  }
  uVar1 = (pUVar6->zeroVector).fields.x;
  uVar2 = (pUVar6->zeroVector).fields.y;
  pIVar7 = SZArrayNew(TypeInfo_UnityEngine_Vector3_array,8);
  if (pIVar7 == (Il2CppObject *)0x0) {
    ThrowNullReferenceException();
  }
  pvVar3 = pIVar7[1].monitor;
  uVar5 = (uint)pvVar3;
  if (uVar5 != 0) {
    fVar12 = (float)uVar1 * local_a0.positiveInfinityVector.fields.z * 0.5;
    fVar10 = (float)uVar2 * local_a0.positiveInfinityVector.fields.z * 0.5;
    fVar14 = fVar13 * local_a0.positiveInfinityVector.fields.z * 0.5;
    fVar25 = fVar12 + (float)local_28._0_4_;
    fVar26 = fVar10 + (float)local_28._4_4_;
    fVar27 = fVar14 + fVar11;
    pIVar7[2].klass = (Il2CppClass *)CONCAT44(fVar26,fVar25);
    *(float *)&pIVar7[2].monitor = fVar27;
    if (uVar5 != 1) {
      fVar16 = local_a0.forwardVector.fields.x * 0.5 + fVar27;
      fVar19 = local_a0.leftVector.fields.z * 0.5 + fVar25;
      fVar22 = local_a0.rightVector.fields.x * 0.5 + fVar26;
      *(ulong *)((long)&pIVar7[2].monitor + 4) = CONCAT44(fVar22,fVar19);
      *(float *)((long)&pIVar7[3].klass + 4) = fVar16;
      if (2 < uVar5) {
        pIVar7[3].monitor = (void *)CONCAT44(fVar22 + fVar10,fVar19 + fVar12);
        *(float *)&pIVar7[4].klass = fVar16 + fVar14;
        if (uVar5 != 3) {
          *(ulong *)((long)&pIVar7[4].klass + 4) =
               CONCAT44(local_a0.rightVector.fields.x + (float)local_28._4_4_,
                        local_a0.leftVector.fields.z + (float)local_28._0_4_);
          *(float *)((long)&pIVar7[4].monitor + 4) = local_a0.forwardVector.fields.x + fVar11;
          if (4 < uVar5) {
            fVar19 = local_a0.forwardVector.fields.x * 0.5 +
                     (fVar11 - fVar13 * local_a0.positiveInfinityVector.fields.z);
            fVar13 = local_a0.leftVector.fields.z * 0.5 +
                     ((float)local_28._0_4_ - (float)uVar1 * local_a0.positiveInfinityVector.fields.z);
            fVar16 = local_a0.rightVector.fields.x * 0.5 +
                     ((float)local_28._4_4_ - (float)uVar2 * local_a0.positiveInfinityVector.fields.z);
            pIVar7[5].klass = (Il2CppClass *)CONCAT44(fVar16,fVar13);
            *(float *)&pIVar7[5].monitor = fVar19;
            if (uVar5 != 5) {
              *(ulong *)((long)&pIVar7[5].monitor + 4) = CONCAT44(fVar16 + fVar10,fVar13 + fVar12);
              *(float *)((long)&pIVar7[6].klass + 4) = fVar19 + fVar14;
              if (6 < uVar5) {
                pIVar7[6].monitor =
                     (void *)CONCAT44((float)local_28._4_4_ - fVar10,(float)local_28._0_4_ - fVar12);
                *(float *)&pIVar7[7].klass = fVar11 - fVar14;
                if (uVar5 != 7) {
                  *(ulong *)((long)&pIVar7[7].klass + 4) = CONCAT44(fVar26,fVar25);
                  *(float *)((long)&pIVar7[7].monitor + 4) = fVar27;
                  if (0 < (int)(uVar5 - 1)) {
                    pfVar8 = (float *)((long)&pIVar7[3].klass + 4);
                    uVar9 = 0;
                    do {
                      if ((((ulong)pvVar3 & 0xffffffff) <= uVar9) ||
                         (uVar9 = uVar9 + 1, ((ulong)pvVar3 & 0xffffffff) <= uVar9)) goto label_032ab0ea;
                      to.fields.z = *pfVar8;
                      to.fields.x = pfVar8[-2];
                      to.fields.y = pfVar8[-1];
                      UnityEngine_Gizmos__DrawLine
                                ((UnityEngine_Vector3_o)*(UnityEngine_Vector3_Fields *)(pfVar8 + -5),to,
                                 (MethodInfo *)0x0);
                      pvVar3 = pIVar7[1].monitor;
                      pfVar8 = pfVar8 + 3;
                    } while ((long)uVar9 < (long)((int)pvVar3 + -1));
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
label_032ab0ea:
  ThrowIndexOutOfRangeException();
}


// EZhex1991.EZSoftBone.EZSoftBoneUtility$$DrawGizmosPolyLine
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBoneUtility__DrawGizmosPolyLine (UnityEngine_Vector3_array* vertices, const MethodInfo* method);
// 0x32ab100

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
    ThrowNullReferenceException();
  }
  uVar3 = vertices->max_length;
  if (0 < (int)uVar3 + -1) {
    pfVar4 = &vertices->m_Items[1].fields.z;
    uVar5 = 0;
    do {
      if (((uVar3 & 0xffffffff) <= uVar5) || (uVar5 = uVar5 + 1, (uVar3 & 0xffffffff) <= uVar5)) {
        ThrowIndexOutOfRangeException();
      }
      uVar1 = ((UnityEngine_Vector3_Fields *)(pfVar4 + -2))->x;
      uVar2 = ((UnityEngine_Vector3_Fields *)(pfVar4 + -2))->y;
      to.fields.y = (float)uVar2;
      to.fields.x = (float)uVar1;
      to.fields.z = *pfVar4;
      UnityEngine_Gizmos__DrawLine
                ((UnityEngine_Vector3_o)*(UnityEngine_Vector3_Fields *)(pfVar4 + -5),to,(MethodInfo *)0x0);
      uVar3 = vertices->max_length;
      pfVar4 = pfVar4 + 3;
    } while ((long)uVar5 < (long)((int)uVar3 + -1));
  }
  return;
}


