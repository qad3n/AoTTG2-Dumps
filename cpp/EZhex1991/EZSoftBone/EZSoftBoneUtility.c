// Type: EZhex1991.EZSoftBone.EZSoftBoneUtility
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/EZhex1991.EZSoftBone/EZhex1991.EZSoftBone/EZSoftBoneUtility.cs
// Prior real C# source (older reference): Assets/ThirdParty/EZhex1991/EZSoftBone/Runtime/EZSoftBoneUtility.cs
// --------------------------------

// EZhex1991.EZSoftBone.EZSoftBoneUtility$$Abs
// il2cpp: UnityEngine_Vector3_o EZhex1991_EZSoftBone_EZSoftBoneUtility__Abs (UnityEngine_Vector3_o v, const MethodInfo* method);
// 0x1805854c0

UnityEngine_Vector3_o *
EZhex1991_EZSoftBone_EZSoftBoneUtility__Abs
          (UnityEngine_Vector3_o *__return_storage_ptr__,UnityEngine_Vector3_o *v,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  
  fVar1 = (v->fields).z;
  (__return_storage_ptr__->fields).x = ABS((v->fields).x);
  fVar2 = (v->fields).y;
  (__return_storage_ptr__->fields).z = ABS(fVar1);
  (__return_storage_ptr__->fields).y = ABS(fVar2);
  return __return_storage_ptr__;
}


// EZhex1991.EZSoftBone.EZSoftBoneUtility$$Max
// il2cpp: float EZhex1991_EZSoftBone_EZSoftBoneUtility__Max (UnityEngine_Vector3_o v, const MethodInfo* method);
// 0x180585cc0

float EZhex1991_EZSoftBone_EZSoftBoneUtility__Max(UnityEngine_Vector3_o *v,MethodInfo *method)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  
  fVar2 = (v->fields).y;
  pfVar1 = &(v->fields).z;
  fVar3 = (v->fields).x;
  fVar2 = (&(v->fields).y)[fVar2 < *pfVar1 || fVar2 == *pfVar1];
  if (fVar3 <= fVar2) {
    fVar3 = fVar2;
  }
  return fVar3;
}


// EZhex1991.EZSoftBone.EZSoftBoneUtility$$Contains
// il2cpp: bool EZhex1991_EZSoftBone_EZSoftBoneUtility__Contains (UnityEngine_LayerMask_o mask, int32_t layer, const MethodInfo* method);
// 0x180585500

bool EZhex1991_EZSoftBone_EZSoftBoneUtility__Contains
               (UnityEngine_LayerMask_o mask,int32_t layer,MethodInfo *method)

{
  UnityEngine_LayerMask_o UVar1;
  UnityEngine_LayerMask_o UVar2;
  
  UVar1 = UnityEngine_LayerMask__op_Implicit((int32_t)mask.fields.m_Mask,(MethodInfo *)0x0);
  UVar2 = UnityEngine_LayerMask__op_Implicit((int32_t)mask.fields.m_Mask,(MethodInfo *)0x0);
  return (UnityEngine_LayerMask_Fields)(UVar1.fields.m_Mask | 1 << (layer & 0x1fU)).m_Mask ==
         UVar2.fields.m_Mask;
}


// EZhex1991.EZSoftBone.EZSoftBoneUtility$$GetCapsuleParams
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBoneUtility__GetCapsuleParams (UnityEngine_CapsuleCollider_o* collider, UnityEngine_Vector3_o* center0, UnityEngine_Vector3_o* center1, float* radius, const MethodInfo* method);
// 0x1805859a0

void EZhex1991_EZSoftBone_EZSoftBoneUtility__GetCapsuleParams
               (UnityEngine_CapsuleCollider_o *collider,UnityEngine_Vector3_o *center0,
               UnityEngine_Vector3_o *center1,float *radius,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int32_t iVar3;
  UnityEngine_Transform_o *pUVar4;
  UnityEngine_Vector3_o *pUVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  UnityEngine_Vector3_Fields local_88;
  UnityEngine_Vector3_o local_78 [7];
  
  if (collider != (UnityEngine_CapsuleCollider_o *)0x0) {
    pUVar4 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)collider,(MethodInfo *)0x0);
    if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
      pUVar5 = UnityEngine_Transform__get_lossyScale
                         ((UnityEngine_Vector3_o *)&local_88,pUVar4,(MethodInfo *)0x0);
      fVar7 = ABS((pUVar5->fields).x);
      fVar8 = ABS((pUVar5->fields).y);
      fVar9 = ABS((pUVar5->fields).z);
      fVar6 = UnityEngine_CapsuleCollider__get_radius(collider,(MethodInfo *)0x0);
      *radius = fVar6;
      pUVar5 = UnityEngine_CapsuleCollider__get_center
                         ((UnityEngine_Vector3_o *)&local_88,collider,(MethodInfo *)0x0);
      fVar6 = (pUVar5->fields).z;
      uVar1 = (pUVar5->fields).x;
      uVar2 = (pUVar5->fields).y;
      (center1->fields).x = (float)uVar1;
      (center1->fields).y = (float)uVar2;
      (center1->fields).z = fVar6;
      (center0->fields).x = (float)uVar1;
      (center0->fields).y = (float)uVar2;
      (center0->fields).z = fVar6;
      fVar6 = UnityEngine_CapsuleCollider__get_height(collider,(MethodInfo *)0x0);
      fVar6 = fVar6 * 0.5;
      iVar3 = UnityEngine_CapsuleCollider__get_direction(collider,(MethodInfo *)0x0);
      if (iVar3 == 0) {
        if (fVar8 <= fVar9) {
          fVar8 = fVar9;
        }
        fVar9 = *radius;
        *radius = fVar8 * fVar9;
        fVar6 = fVar6 - (fVar8 * fVar9) / fVar7;
        fVar7 = 0.0;
        if (0.0 <= fVar6) {
          fVar7 = fVar6;
        }
        (center0->fields).x = (center0->fields).x - fVar7;
        (center1->fields).x = fVar7 + (center1->fields).x;
      }
      else if (iVar3 == 1) {
        if (fVar7 <= fVar9) {
          fVar7 = fVar9;
        }
        fVar9 = *radius;
        *radius = fVar7 * fVar9;
        fVar6 = fVar6 - (fVar7 * fVar9) / fVar8;
        fVar7 = 0.0;
        if (0.0 <= fVar6) {
          fVar7 = fVar6;
        }
        (center0->fields).y = (center0->fields).y - fVar7;
        (center1->fields).y = fVar7 + (center1->fields).y;
      }
      else if (iVar3 == 2) {
        if (fVar7 <= fVar8) {
          fVar7 = fVar8;
        }
        fVar8 = *radius;
        *radius = fVar7 * fVar8;
        fVar6 = fVar6 - (fVar7 * fVar8) / fVar9;
        fVar7 = 0.0;
        if (0.0 <= fVar6) {
          fVar7 = fVar6;
        }
        (center0->fields).z = (center0->fields).z - fVar7;
        (center1->fields).z = fVar7 + (center1->fields).z;
      }
      pUVar4 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)collider,(MethodInfo *)0x0);
      if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
        local_88.z = (center0->fields).z;
        local_88.x = (center0->fields).x;
        local_88.y = (center0->fields).y;
        pUVar5 = UnityEngine_Transform__TransformPoint
                           (local_78,pUVar4,(UnityEngine_Vector3_o *)&local_88,(MethodInfo *)0x0);
        fVar6 = (pUVar5->fields).z;
        fVar7 = (pUVar5->fields).y;
        (center0->fields).x = (pUVar5->fields).x;
        (center0->fields).y = fVar7;
        (center0->fields).z = fVar6;
        pUVar4 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)collider,(MethodInfo *)0x0);
        if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
          local_88.z = (center1->fields).z;
          local_88.x = (center1->fields).x;
          local_88.y = (center1->fields).y;
          pUVar5 = UnityEngine_Transform__TransformPoint
                             (local_78,pUVar4,(UnityEngine_Vector3_o *)&local_88,(MethodInfo *)0x0);
          fVar7 = (pUVar5->fields).y;
          fVar6 = (pUVar5->fields).z;
          (center1->fields).x = (pUVar5->fields).x;
          (center1->fields).y = fVar7;
          (center1->fields).z = fVar6;
          return;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// EZhex1991.EZSoftBone.EZSoftBoneUtility$$GetCylinderParams
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBoneUtility__GetCylinderParams (UnityEngine_Transform_o* transform, UnityEngine_Vector3_o* center, UnityEngine_Vector3_o* direction, float* radius, float* height, const MethodInfo* method);
// 0x180585be0

void EZhex1991_EZSoftBone_EZSoftBoneUtility__GetCylinderParams
               (UnityEngine_Transform_o *transform,UnityEngine_Vector3_o *center,
               UnityEngine_Vector3_o *direction,float *radius,float *height,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  float fVar3;
  UnityEngine_Vector3_o *pUVar4;
  float fVar5;
  float fVar6;
  UnityEngine_Vector3_o local_68 [6];
  
  if (transform != (UnityEngine_Transform_o *)0x0) {
    pUVar4 = UnityEngine_Transform__get_lossyScale(local_68,transform,(MethodInfo *)0x0);
    fVar1 = (pUVar4->fields).y;
    fVar6 = ABS((pUVar4->fields).x);
    fVar5 = ABS((pUVar4->fields).z);
    pUVar4 = UnityEngine_Transform__get_position(local_68,transform,(MethodInfo *)0x0);
    fVar2 = (pUVar4->fields).z;
    fVar3 = (pUVar4->fields).y;
    (center->fields).x = (pUVar4->fields).x;
    (center->fields).y = fVar3;
    (center->fields).z = fVar2;
    pUVar4 = UnityEngine_Transform__get_up(local_68,transform,(MethodInfo *)0x0);
    fVar3 = (pUVar4->fields).y;
    fVar2 = (pUVar4->fields).z;
    (direction->fields).x = (pUVar4->fields).x;
    (direction->fields).y = fVar3;
    (direction->fields).z = fVar2;
    if (fVar6 <= fVar5) {
      fVar6 = fVar5;
    }
    *radius = fVar6 * 0.5;
    *height = ABS(fVar1);
    return;
  }
  ThrowNullReferenceException();
}


// EZhex1991.EZSoftBone.EZSoftBoneUtility$$PointOutsideSphere
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBoneUtility__PointOutsideSphere (UnityEngine_Vector3_o* position, UnityEngine_SphereCollider_o* collider, float spacing, const MethodInfo* method);
// 0x180587aa0

void EZhex1991_EZSoftBone_EZSoftBoneUtility__PointOutsideSphere
               (UnityEngine_Vector3_o *position,UnityEngine_SphereCollider_o *collider,float spacing,
               MethodInfo *method)

{
  UnityEngine_Transform_o *pUVar1;
  UnityEngine_Vector3_o *pUVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  UnityEngine_Vector3_Fields local_78;
  UnityEngine_Vector3_o local_68 [8];
  
  if (collider != (UnityEngine_SphereCollider_o *)0x0) {
    pUVar1 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)collider,(MethodInfo *)0x0);
    if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
      pUVar2 = UnityEngine_Transform__get_lossyScale
                         ((UnityEngine_Vector3_o *)&local_78,pUVar1,(MethodInfo *)0x0);
      fVar4 = ABS((pUVar2->fields).x);
      fVar5 = ABS((pUVar2->fields).y);
      fVar6 = ABS((pUVar2->fields).z);
      fVar3 = UnityEngine_SphereCollider__get_radius(collider,(MethodInfo *)0x0);
      pUVar1 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)collider,(MethodInfo *)0x0);
      pUVar2 = UnityEngine_SphereCollider__get_center(local_68,collider,(MethodInfo *)0x0);
      if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
        local_78.z = (pUVar2->fields).z;
        local_78.x = (pUVar2->fields).x;
        local_78.y = (pUVar2->fields).y;
        pUVar2 = UnityEngine_Transform__TransformPoint
                           (local_68,pUVar1,(UnityEngine_Vector3_o *)&local_78,(MethodInfo *)0x0);
        if (fVar5 <= fVar6) {
          fVar5 = fVar6;
        }
        local_78.x = (pUVar2->fields).x;
        local_78.y = (pUVar2->fields).y;
        local_78.z = (pUVar2->fields).z;
        if (fVar4 <= fVar5) {
          fVar4 = fVar5;
        }
        EZhex1991_EZSoftBone_EZSoftBoneUtility__PointOutsideSphere_587bf0
                  (position,(UnityEngine_Vector3_o *)&local_78,fVar4 * fVar3 + spacing,(MethodInfo *)0x0);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// EZhex1991.EZSoftBone.EZSoftBoneUtility$$PointOutsideSphere
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBoneUtility__PointOutsideSphere (UnityEngine_Vector3_o* position, UnityEngine_Vector3_o spherePosition, float radius, const MethodInfo* method);
// 0x180587bf0

void EZhex1991_EZSoftBone_EZSoftBoneUtility__PointOutsideSphere_587bf0
               (UnityEngine_Vector3_o *position,UnityEngine_Vector3_o *spherePosition,float radius,
               MethodInfo *method)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  UnityEngine_Vector3_StaticFields *pUVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined8 local_58;
  float local_50;
  
  uVar2 = (spherePosition->fields).x;
  uVar4 = (spherePosition->fields).y;
  uVar3 = (position->fields).x;
  uVar5 = (position->fields).y;
  fVar9 = (position->fields).z - (spherePosition->fields).z;
  local_58 = CONCAT44((float)uVar5 - (float)uVar4,(float)uVar3 - (float)uVar2);
  local_50 = fVar9;
  fVar7 = (float)il2cpp_runtime_helper_180546a40(&local_58,0);
  if (fVar7 < radius) {
    if (Il2CppMethodInitialized_18433de5f == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
      Il2CppMethodInitialized_18433de5f = '\x01';
    }
    fVar7 = (float)il2cpp_runtime_helper_180546a40(&local_58,0);
    if (fVar7 <= 1e-05) {
      pUVar6 = TypeInfo_UnityEngine_Vector3->static_fields;
      fVar8 = (pUVar6->zeroVector).fields.x;
      fVar10 = (pUVar6->zeroVector).fields.y;
      fVar9 = (pUVar6->zeroVector).fields.z;
    }
    else {
      fVar8 = ((float)uVar3 - (float)uVar2) / fVar7;
      fVar10 = ((float)uVar5 - (float)uVar4) / fVar7;
      fVar9 = fVar9 / fVar7;
    }
    fVar7 = (spherePosition->fields).y;
    fVar1 = (spherePosition->fields).z;
    (position->fields).x = fVar8 * radius + (spherePosition->fields).x;
    (position->fields).y = fVar10 * radius + fVar7;
    (position->fields).z = fVar9 * radius + fVar1;
  }
  return;
}


// EZhex1991.EZSoftBone.EZSoftBoneUtility$$PointInsideSphere
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBoneUtility__PointInsideSphere (UnityEngine_Vector3_o* position, UnityEngine_SphereCollider_o* collider, float spacing, const MethodInfo* method);
// 0x1805869f0

void EZhex1991_EZSoftBone_EZSoftBoneUtility__PointInsideSphere
               (UnityEngine_Vector3_o *position,UnityEngine_SphereCollider_o *collider,float spacing,
               MethodInfo *method)

{
  UnityEngine_Transform_o *__this;
  UnityEngine_Vector3_o *pUVar1;
  float fVar2;
  UnityEngine_Vector3_Fields local_38;
  UnityEngine_Vector3_o local_28 [2];
  
  if (collider != (UnityEngine_SphereCollider_o *)0x0) {
    __this = UnityEngine_Component__get_transform((UnityEngine_Component_o *)collider,(MethodInfo *)0x0);
    pUVar1 = UnityEngine_SphereCollider__get_center(local_28,collider,(MethodInfo *)0x0);
    if (__this != (UnityEngine_Transform_o *)0x0) {
      local_38.z = (pUVar1->fields).z;
      local_38.x = (pUVar1->fields).x;
      local_38.y = (pUVar1->fields).y;
      pUVar1 = UnityEngine_Transform__TransformPoint
                         (local_28,__this,(UnityEngine_Vector3_o *)&local_38,(MethodInfo *)0x0);
      local_38.x = (pUVar1->fields).x;
      local_38.y = (pUVar1->fields).y;
      local_38.z = (pUVar1->fields).z;
      fVar2 = UnityEngine_SphereCollider__get_radius(collider,(MethodInfo *)0x0);
      EZhex1991_EZSoftBone_EZSoftBoneUtility__PointInsideSphere_5868d0
                (position,(UnityEngine_Vector3_o *)&local_38,fVar2 - spacing,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// EZhex1991.EZSoftBone.EZSoftBoneUtility$$PointInsideSphere
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBoneUtility__PointInsideSphere (UnityEngine_Vector3_o* position, UnityEngine_Vector3_o spherePosition, float radius, const MethodInfo* method);
// 0x1805868d0

void EZhex1991_EZSoftBone_EZSoftBoneUtility__PointInsideSphere_5868d0
               (UnityEngine_Vector3_o *position,UnityEngine_Vector3_o *spherePosition,float radius,
               MethodInfo *method)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  UnityEngine_Vector3_StaticFields *pUVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined8 local_58;
  float local_50;
  
  uVar2 = (spherePosition->fields).x;
  uVar4 = (spherePosition->fields).y;
  uVar3 = (position->fields).x;
  uVar5 = (position->fields).y;
  fVar9 = (position->fields).z - (spherePosition->fields).z;
  local_58 = CONCAT44((float)uVar5 - (float)uVar4,(float)uVar3 - (float)uVar2);
  local_50 = fVar9;
  fVar7 = (float)il2cpp_runtime_helper_180546a40(&local_58,0);
  if (radius < fVar7) {
    if (Il2CppMethodInitialized_18433de5f == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
      Il2CppMethodInitialized_18433de5f = '\x01';
    }
    fVar7 = (float)il2cpp_runtime_helper_180546a40(&local_58,0);
    if (fVar7 <= 1e-05) {
      pUVar6 = TypeInfo_UnityEngine_Vector3->static_fields;
      fVar8 = (pUVar6->zeroVector).fields.x;
      fVar10 = (pUVar6->zeroVector).fields.y;
      fVar9 = (pUVar6->zeroVector).fields.z;
    }
    else {
      fVar8 = ((float)uVar3 - (float)uVar2) / fVar7;
      fVar10 = ((float)uVar5 - (float)uVar4) / fVar7;
      fVar9 = fVar9 / fVar7;
    }
    fVar7 = (spherePosition->fields).y;
    fVar1 = (spherePosition->fields).z;
    (position->fields).x = fVar8 * radius + (spherePosition->fields).x;
    (position->fields).y = fVar10 * radius + fVar7;
    (position->fields).z = fVar9 * radius + fVar1;
  }
  return;
}


// EZhex1991.EZSoftBone.EZSoftBoneUtility$$PointOutsideCapsule
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBoneUtility__PointOutsideCapsule (UnityEngine_Vector3_o* position, UnityEngine_CapsuleCollider_o* collider, float spacing, const MethodInfo* method);
// 0x180587200

void EZhex1991_EZSoftBone_EZSoftBoneUtility__PointOutsideCapsule
               (UnityEngine_Vector3_o *position,UnityEngine_CapsuleCollider_o *collider,float spacing,
               MethodInfo *method)

{
  float local_res18 [4];
  UnityEngine_Vector3_Fields local_48;
  UnityEngine_Vector3_Fields local_38;
  UnityEngine_Vector3_Fields local_28 [2];
  
  local_38.x = 0.0;
  local_38.y = 0.0;
  local_48.x = 0.0;
  local_48.y = 0.0;
  local_38.z = 0.0;
  local_48.z = 0.0;
  local_res18[0] = 0.0;
  EZhex1991_EZSoftBone_EZSoftBoneUtility__GetCapsuleParams
            (collider,(UnityEngine_Vector3_o *)&local_38,(UnityEngine_Vector3_o *)&local_48,local_res18,
             (MethodInfo *)0x0);
  local_28[0].x = local_48.x;
  local_28[0].y = local_48.y;
  local_28[0].z = local_48.z;
  local_48.x = local_38.x;
  local_48.y = local_38.y;
  local_48.z = local_38.z;
  EZhex1991_EZSoftBone_EZSoftBoneUtility__PointOutsideCapsule_586f20
            (position,(UnityEngine_Vector3_o *)&local_48,(UnityEngine_Vector3_o *)local_28,
             local_res18[0] + spacing,(MethodInfo *)0x0);
  return;
}


// EZhex1991.EZSoftBone.EZSoftBoneUtility$$PointOutsideCapsule
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBoneUtility__PointOutsideCapsule (UnityEngine_Vector3_o* position, UnityEngine_Vector3_o center0, UnityEngine_Vector3_o center1, float radius, const MethodInfo* method);
// 0x180586f20

void EZhex1991_EZSoftBone_EZSoftBoneUtility__PointOutsideCapsule_586f20
               (UnityEngine_Vector3_o *position,UnityEngine_Vector3_o *center0,UnityEngine_Vector3_o *center1,
               float radius,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  float fVar3;
  UnityEngine_Vector3_StaticFields *pUVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  UnityEngine_Vector3_Fields local_98 [12];
  
  fVar7 = (position->fields).x - (center0->fields).x;
  fVar8 = (position->fields).y - (center0->fields).y;
  fVar9 = (position->fields).z - (center0->fields).z;
  fVar10 = (center1->fields).x - (center0->fields).x;
  fVar11 = (center1->fields).y - (center0->fields).y;
  fVar12 = (center1->fields).z - (center0->fields).z;
  fVar6 = fVar8 * fVar11 + fVar7 * fVar10 + fVar9 * fVar12;
  if (fVar6 <= 0.0) {
    local_98[0].x = (center0->fields).x;
    local_98[0].y = (center0->fields).y;
    local_98[0].z = (center0->fields).z;
  }
  else {
    if (fVar6 < fVar11 * fVar11 + fVar10 * fVar10 + fVar12 * fVar12) {
      if (Il2CppMethodInitialized_18433df4c == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Mathf);
        Il2CppMethodInitialized_18433df4c = '\x01';
      }
      fVar6 = fVar11 * fVar11 + fVar10 * fVar10 + fVar12 * fVar12;
      if (fVar6 < TypeInfo_UnityEngine_Mathf->static_fields->Epsilon) {
        if (Il2CppMethodInitialized_18433dbea == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
          Il2CppMethodInitialized_18433dbea = '\x01';
        }
        pUVar4 = TypeInfo_UnityEngine_Vector3->static_fields;
        fVar10 = (pUVar4->zeroVector).fields.x;
        fVar11 = (pUVar4->zeroVector).fields.y;
        fVar12 = (pUVar4->zeroVector).fields.z;
      }
      else {
        fVar6 = (fVar8 * fVar11 + fVar7 * fVar10 + fVar9 * fVar12) / fVar6;
        fVar10 = fVar10 * fVar6;
        fVar11 = fVar11 * fVar6;
        fVar12 = fVar12 * fVar6;
      }
      local_98[0].y = fVar8 - fVar11;
      local_98[0].x = fVar7 - fVar10;
      local_98[0].z = fVar9 - fVar12;
      fVar6 = (float)il2cpp_runtime_helper_180546a40(local_98,0);
      fVar6 = radius - fVar6;
      if (fVar6 <= 0.0) {
        return;
      }
      fVar1 = (position->fields).x;
      fVar2 = (position->fields).y;
      fVar3 = (position->fields).z;
      if (Il2CppMethodInitialized_18433de5f == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
        Il2CppMethodInitialized_18433de5f = '\x01';
      }
      fVar5 = (float)il2cpp_runtime_helper_180546a40(local_98,0);
      if (fVar5 <= 1e-05) {
        pUVar4 = TypeInfo_UnityEngine_Vector3->static_fields;
        fVar10 = (pUVar4->zeroVector).fields.x;
        fVar11 = (pUVar4->zeroVector).fields.y;
        fVar5 = (pUVar4->zeroVector).fields.z;
      }
      else {
        fVar10 = (fVar7 - fVar10) / fVar5;
        fVar11 = (fVar8 - fVar11) / fVar5;
        fVar5 = (fVar9 - fVar12) / fVar5;
      }
      (position->fields).x = fVar10 * fVar6 + fVar1;
      (position->fields).y = fVar11 * fVar6 + fVar2;
      (position->fields).z = fVar5 * fVar6 + fVar3;
      return;
    }
    local_98[0].x = (center1->fields).x;
    local_98[0].y = (center1->fields).y;
    local_98[0].z = (center1->fields).z;
  }
  EZhex1991_EZSoftBone_EZSoftBoneUtility__PointOutsideSphere_587bf0
            (position,(UnityEngine_Vector3_o *)local_98,radius,(MethodInfo *)0x0);
  return;
}


// EZhex1991.EZSoftBone.EZSoftBoneUtility$$PointInsideCapsule
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBoneUtility__PointInsideCapsule (UnityEngine_Vector3_o* position, UnityEngine_CapsuleCollider_o* collider, float spacing, const MethodInfo* method);
// 0x180586080

void EZhex1991_EZSoftBone_EZSoftBoneUtility__PointInsideCapsule
               (UnityEngine_Vector3_o *position,UnityEngine_CapsuleCollider_o *collider,float spacing,
               MethodInfo *method)

{
  float local_res18 [4];
  UnityEngine_Vector3_Fields local_48;
  UnityEngine_Vector3_Fields local_38;
  UnityEngine_Vector3_Fields local_28 [2];
  
  local_38.x = 0.0;
  local_38.y = 0.0;
  local_48.x = 0.0;
  local_48.y = 0.0;
  local_38.z = 0.0;
  local_48.z = 0.0;
  local_res18[0] = 0.0;
  EZhex1991_EZSoftBone_EZSoftBoneUtility__GetCapsuleParams
            (collider,(UnityEngine_Vector3_o *)&local_38,(UnityEngine_Vector3_o *)&local_48,local_res18,
             (MethodInfo *)0x0);
  local_28[0].x = local_48.x;
  local_28[0].y = local_48.y;
  local_28[0].z = local_48.z;
  local_48.x = local_38.x;
  local_48.y = local_38.y;
  local_48.z = local_38.z;
  EZhex1991_EZSoftBone_EZSoftBoneUtility__PointInsideCapsule_586120
            (position,(UnityEngine_Vector3_o *)&local_48,(UnityEngine_Vector3_o *)local_28,
             local_res18[0] - spacing,(MethodInfo *)0x0);
  return;
}


// EZhex1991.EZSoftBone.EZSoftBoneUtility$$PointInsideCapsule
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBoneUtility__PointInsideCapsule (UnityEngine_Vector3_o* position, UnityEngine_Vector3_o center0, UnityEngine_Vector3_o center1, float radius, const MethodInfo* method);
// 0x180586120

void EZhex1991_EZSoftBone_EZSoftBoneUtility__PointInsideCapsule_586120
               (UnityEngine_Vector3_o *position,UnityEngine_Vector3_o *center0,UnityEngine_Vector3_o *center1,
               float radius,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  float fVar3;
  UnityEngine_Vector3_StaticFields *pUVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  UnityEngine_Vector3_Fields local_98 [12];
  
  fVar7 = (position->fields).x - (center0->fields).x;
  fVar8 = (position->fields).y - (center0->fields).y;
  fVar9 = (position->fields).z - (center0->fields).z;
  fVar10 = (center1->fields).x - (center0->fields).x;
  fVar11 = (center1->fields).y - (center0->fields).y;
  fVar12 = (center1->fields).z - (center0->fields).z;
  fVar6 = fVar8 * fVar11 + fVar7 * fVar10 + fVar9 * fVar12;
  if (fVar6 <= 0.0) {
    local_98[0].x = (center0->fields).x;
    local_98[0].y = (center0->fields).y;
    local_98[0].z = (center0->fields).z;
  }
  else {
    if (fVar6 < fVar11 * fVar11 + fVar10 * fVar10 + fVar12 * fVar12) {
      if (Il2CppMethodInitialized_18433df4c == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Mathf);
        Il2CppMethodInitialized_18433df4c = '\x01';
      }
      fVar6 = fVar11 * fVar11 + fVar10 * fVar10 + fVar12 * fVar12;
      if (fVar6 < TypeInfo_UnityEngine_Mathf->static_fields->Epsilon) {
        if (Il2CppMethodInitialized_18433dbea == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
          Il2CppMethodInitialized_18433dbea = '\x01';
        }
        pUVar4 = TypeInfo_UnityEngine_Vector3->static_fields;
        fVar10 = (pUVar4->zeroVector).fields.x;
        fVar11 = (pUVar4->zeroVector).fields.y;
        fVar12 = (pUVar4->zeroVector).fields.z;
      }
      else {
        fVar6 = (fVar8 * fVar11 + fVar7 * fVar10 + fVar9 * fVar12) / fVar6;
        fVar10 = fVar10 * fVar6;
        fVar11 = fVar11 * fVar6;
        fVar12 = fVar12 * fVar6;
      }
      local_98[0].y = fVar8 - fVar11;
      local_98[0].x = fVar7 - fVar10;
      local_98[0].z = fVar9 - fVar12;
      fVar6 = (float)il2cpp_runtime_helper_180546a40(local_98,0);
      fVar6 = radius - fVar6;
      if (0.0 <= fVar6) {
        return;
      }
      fVar1 = (position->fields).x;
      fVar2 = (position->fields).y;
      fVar3 = (position->fields).z;
      if (Il2CppMethodInitialized_18433de5f == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
        Il2CppMethodInitialized_18433de5f = '\x01';
      }
      fVar5 = (float)il2cpp_runtime_helper_180546a40(local_98,0);
      if (fVar5 <= 1e-05) {
        pUVar4 = TypeInfo_UnityEngine_Vector3->static_fields;
        fVar10 = (pUVar4->zeroVector).fields.x;
        fVar11 = (pUVar4->zeroVector).fields.y;
        fVar5 = (pUVar4->zeroVector).fields.z;
      }
      else {
        fVar10 = (fVar7 - fVar10) / fVar5;
        fVar11 = (fVar8 - fVar11) / fVar5;
        fVar5 = (fVar9 - fVar12) / fVar5;
      }
      (position->fields).x = fVar10 * fVar6 + fVar1;
      (position->fields).y = fVar11 * fVar6 + fVar2;
      (position->fields).z = fVar5 * fVar6 + fVar3;
      return;
    }
    local_98[0].x = (center1->fields).x;
    local_98[0].y = (center1->fields).y;
    local_98[0].z = (center1->fields).z;
  }
  EZhex1991_EZSoftBone_EZSoftBoneUtility__PointInsideSphere_5868d0
            (position,(UnityEngine_Vector3_o *)local_98,radius,(MethodInfo *)0x0);
  return;
}


// EZhex1991.EZSoftBone.EZSoftBoneUtility$$PointOutsideCylinder
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBoneUtility__PointOutsideCylinder (UnityEngine_Vector3_o* position, UnityEngine_Transform_o* transform, float spacing, const MethodInfo* method);
// 0x180587970

void EZhex1991_EZSoftBone_EZSoftBoneUtility__PointOutsideCylinder
               (UnityEngine_Vector3_o *position,UnityEngine_Transform_o *transform,float spacing,
               MethodInfo *method)

{
  float fVar1;
  undefined8 uVar2;
  float fVar3;
  UnityEngine_Vector3_o *pUVar4;
  float fVar5;
  float fVar6;
  UnityEngine_Vector3_Fields local_78;
  UnityEngine_Vector3_Fields local_68 [8];
  
  if (transform != (UnityEngine_Transform_o *)0x0) {
    pUVar4 = UnityEngine_Transform__get_lossyScale
                       ((UnityEngine_Vector3_o *)local_68,transform,(MethodInfo *)0x0);
    fVar1 = (pUVar4->fields).y;
    fVar6 = ABS((pUVar4->fields).x);
    fVar5 = ABS((pUVar4->fields).z);
    pUVar4 = UnityEngine_Transform__get_position
                       ((UnityEngine_Vector3_o *)local_68,transform,(MethodInfo *)0x0);
    uVar2._0_4_ = (pUVar4->fields).x;
    uVar2._4_4_ = (pUVar4->fields).y;
    fVar3 = (pUVar4->fields).z;
    pUVar4 = UnityEngine_Transform__get_up((UnityEngine_Vector3_o *)local_68,transform,(MethodInfo *)0x0);
    local_78.x = (pUVar4->fields).x;
    local_78.y = (pUVar4->fields).y;
    if (fVar6 <= fVar5) {
      fVar6 = fVar5;
    }
    local_78.z = (pUVar4->fields).z;
    local_68[0]._0_8_ = uVar2;
    local_68[0].z = fVar3;
    EZhex1991_EZSoftBone_EZSoftBoneUtility__PointOutsideCylinder_5875c0
              (position,(UnityEngine_Vector3_o *)local_68,(UnityEngine_Vector3_o *)&local_78,
               fVar6 * 0.5 + spacing,ABS(fVar1) + spacing,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// EZhex1991.EZSoftBone.EZSoftBoneUtility$$PointOutsideCylinder
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBoneUtility__PointOutsideCylinder (UnityEngine_Vector3_o* position, UnityEngine_Vector3_o center, UnityEngine_Vector3_o direction, float radius, float height, const MethodInfo* method);
// 0x1805875c0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x180587923: movaps xmm15, xmmword ptr [rsp + 0x40]

void EZhex1991_EZSoftBone_EZSoftBoneUtility__PointOutsideCylinder_5875c0
               (UnityEngine_Vector3_o *position,UnityEngine_Vector3_o *center,UnityEngine_Vector3_o *direction
               ,float radius,float height,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  float fVar3;
  UnityEngine_Vector3_StaticFields *pUVar4;
  float fVar5;
  float fVar6;
  double dVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float local_c8;
  float local_c4;
  float local_c0;
  float local_b8;
  float local_b4;
  float local_b0;
  
  fVar8 = (direction->fields).x;
  fVar9 = (direction->fields).y;
  fVar10 = (direction->fields).z;
  fVar11 = (position->fields).x - (center->fields).x;
  fVar12 = (position->fields).y - (center->fields).y;
  fVar13 = (position->fields).z - (center->fields).z;
  if (Il2CppMethodInitialized_18433df4c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Mathf);
    Il2CppMethodInitialized_18433df4c = '\x01';
  }
  fVar6 = fVar9 * fVar9 + fVar8 * fVar8 + fVar10 * fVar10;
  if (fVar6 < TypeInfo_UnityEngine_Mathf->static_fields->Epsilon) {
    if (Il2CppMethodInitialized_18433dbea == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
      Il2CppMethodInitialized_18433dbea = '\x01';
    }
    pUVar4 = TypeInfo_UnityEngine_Vector3->static_fields;
    fVar8 = (pUVar4->zeroVector).fields.x;
    fVar9 = (pUVar4->zeroVector).fields.y;
    fVar10 = (pUVar4->zeroVector).fields.z;
  }
  else {
    fVar6 = (fVar12 * fVar9 + fVar11 * fVar8 + fVar13 * fVar10) / fVar6;
    fVar8 = fVar8 * fVar6;
    fVar9 = fVar9 * fVar6;
    fVar10 = fVar10 * fVar6;
  }
  local_b8 = fVar8;
  local_b4 = fVar9;
  local_b0 = fVar10;
  if (Il2CppMethodInitialized_18433de59 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
    Il2CppMethodInitialized_18433de59 = '\x01';
  }
  if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
  }
  dVar7 = (double)(fVar9 * fVar9 + fVar8 * fVar8 + fVar10 * fVar10);
  if (dVar7 < 0.0) {
    dVar7 = sqrt(dVar7);
  }
  else {
    dVar7 = SQRT(dVar7);
  }
  fVar6 = height - (float)dVar7;
  if (0.0 < fVar6) {
    fVar11 = fVar11 - fVar8;
    fVar12 = fVar12 - fVar9;
    fVar13 = fVar13 - fVar10;
    local_c8 = fVar11;
    local_c4 = fVar12;
    local_c0 = fVar13;
    fVar5 = (float)il2cpp_runtime_helper_180546a40(&local_c8,0);
    fVar5 = radius - fVar5;
    if (0.0 < fVar5) {
      fVar1 = (position->fields).z;
      fVar2 = (position->fields).x;
      fVar3 = (position->fields).y;
      if (fVar5 < fVar6) {
        if (Il2CppMethodInitialized_18433de5f == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
          Il2CppMethodInitialized_18433de5f = '\x01';
        }
        fVar8 = (float)il2cpp_runtime_helper_180546a40(&local_c8,0);
        if (fVar8 <= 1e-05) {
          pUVar4 = TypeInfo_UnityEngine_Vector3->static_fields;
          fVar11 = (pUVar4->zeroVector).fields.x;
          fVar12 = (pUVar4->zeroVector).fields.y;
          fVar13 = (pUVar4->zeroVector).fields.z;
        }
        else {
          fVar11 = fVar11 / fVar8;
          fVar12 = fVar12 / fVar8;
          fVar13 = fVar13 / fVar8;
        }
        (position->fields).x = fVar11 * fVar5 + fVar2;
        (position->fields).y = fVar12 * fVar5 + fVar3;
        (position->fields).z = fVar13 * fVar5 + fVar1;
      }
      else {
        if (Il2CppMethodInitialized_18433de5f == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
          Il2CppMethodInitialized_18433de5f = '\x01';
        }
        fVar11 = (float)il2cpp_runtime_helper_180546a40(&local_b8,0);
        if (fVar11 <= 1e-05) {
          pUVar4 = TypeInfo_UnityEngine_Vector3->static_fields;
          fVar8 = (pUVar4->zeroVector).fields.x;
          fVar9 = (pUVar4->zeroVector).fields.y;
          fVar10 = (pUVar4->zeroVector).fields.z;
        }
        else {
          fVar8 = fVar8 / fVar11;
          fVar9 = fVar9 / fVar11;
          fVar10 = fVar10 / fVar11;
        }
        (position->fields).x = fVar8 * fVar6 + fVar2;
        (position->fields).y = fVar9 * fVar6 + fVar3;
        (position->fields).z = fVar10 * fVar6 + fVar1;
      }
    }
  }
  return;
}


// EZhex1991.EZSoftBone.EZSoftBoneUtility$$PointInsideCylinder
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBoneUtility__PointInsideCylinder (UnityEngine_Vector3_o* position, UnityEngine_Transform_o* transform, float spacing, const MethodInfo* method);
// 0x1805867a0

void EZhex1991_EZSoftBone_EZSoftBoneUtility__PointInsideCylinder
               (UnityEngine_Vector3_o *position,UnityEngine_Transform_o *transform,float spacing,
               MethodInfo *method)

{
  float fVar1;
  undefined8 uVar2;
  float fVar3;
  UnityEngine_Vector3_o *pUVar4;
  float fVar5;
  float fVar6;
  UnityEngine_Vector3_Fields local_78;
  UnityEngine_Vector3_Fields local_68 [8];
  
  if (transform != (UnityEngine_Transform_o *)0x0) {
    pUVar4 = UnityEngine_Transform__get_lossyScale
                       ((UnityEngine_Vector3_o *)local_68,transform,(MethodInfo *)0x0);
    fVar1 = (pUVar4->fields).y;
    fVar6 = ABS((pUVar4->fields).x);
    fVar5 = ABS((pUVar4->fields).z);
    pUVar4 = UnityEngine_Transform__get_position
                       ((UnityEngine_Vector3_o *)local_68,transform,(MethodInfo *)0x0);
    uVar2._0_4_ = (pUVar4->fields).x;
    uVar2._4_4_ = (pUVar4->fields).y;
    fVar3 = (pUVar4->fields).z;
    pUVar4 = UnityEngine_Transform__get_up((UnityEngine_Vector3_o *)local_68,transform,(MethodInfo *)0x0);
    local_78.x = (pUVar4->fields).x;
    local_78.y = (pUVar4->fields).y;
    if (fVar6 <= fVar5) {
      fVar6 = fVar5;
    }
    local_78.z = (pUVar4->fields).z;
    local_68[0]._0_8_ = uVar2;
    local_68[0].z = fVar3;
    EZhex1991_EZSoftBone_EZSoftBoneUtility__PointInsideCylinder_586400
              (position,(UnityEngine_Vector3_o *)local_68,(UnityEngine_Vector3_o *)&local_78,
               fVar6 * 0.5 - spacing,ABS(fVar1) - spacing,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// EZhex1991.EZSoftBone.EZSoftBoneUtility$$PointInsideCylinder
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBoneUtility__PointInsideCylinder (UnityEngine_Vector3_o* position, UnityEngine_Vector3_o center, UnityEngine_Vector3_o direction, float radius, float height, const MethodInfo* method);
// 0x180586400
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18058675e: movaps xmm14, xmmword ptr [rsp + 0x50]
// asm:   0x180586764: movaps xmm15, xmmword ptr [rsp + 0x40]

void EZhex1991_EZSoftBone_EZSoftBoneUtility__PointInsideCylinder_586400
               (UnityEngine_Vector3_o *position,UnityEngine_Vector3_o *center,UnityEngine_Vector3_o *direction
               ,float radius,float height,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  float fVar3;
  UnityEngine_Vector3_StaticFields *pUVar4;
  float fVar5;
  double dVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float local_c8;
  float local_c4;
  float local_c0;
  float local_b8;
  float local_b4;
  float local_b0;
  
  fVar7 = (direction->fields).x;
  fVar8 = (direction->fields).y;
  fVar9 = (direction->fields).z;
  fVar10 = (position->fields).x - (center->fields).x;
  fVar11 = (position->fields).y - (center->fields).y;
  fVar12 = (position->fields).z - (center->fields).z;
  if (Il2CppMethodInitialized_18433df4c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Mathf);
    Il2CppMethodInitialized_18433df4c = '\x01';
  }
  fVar5 = fVar8 * fVar8 + fVar7 * fVar7 + fVar9 * fVar9;
  if (fVar5 < TypeInfo_UnityEngine_Mathf->static_fields->Epsilon) {
    if (Il2CppMethodInitialized_18433dbea == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
      Il2CppMethodInitialized_18433dbea = '\x01';
    }
    pUVar4 = TypeInfo_UnityEngine_Vector3->static_fields;
    fVar7 = (pUVar4->zeroVector).fields.x;
    fVar8 = (pUVar4->zeroVector).fields.y;
    fVar9 = (pUVar4->zeroVector).fields.z;
  }
  else {
    fVar5 = (fVar11 * fVar8 + fVar10 * fVar7 + fVar12 * fVar9) / fVar5;
    fVar7 = fVar7 * fVar5;
    fVar8 = fVar8 * fVar5;
    fVar9 = fVar9 * fVar5;
  }
  local_b8 = fVar7;
  local_b4 = fVar8;
  local_b0 = fVar9;
  if (Il2CppMethodInitialized_18433de59 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
    Il2CppMethodInitialized_18433de59 = '\x01';
  }
  if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
  }
  dVar6 = (double)(fVar8 * fVar8 + fVar7 * fVar7 + fVar9 * fVar9);
  if (dVar6 < 0.0) {
    dVar6 = sqrt(dVar6);
  }
  else {
    dVar6 = SQRT(dVar6);
  }
  fVar10 = fVar10 - fVar7;
  fVar11 = fVar11 - fVar8;
  fVar12 = fVar12 - fVar9;
  fVar13 = height - (float)dVar6;
  local_c8 = fVar10;
  local_c4 = fVar11;
  local_c0 = fVar12;
  fVar5 = (float)il2cpp_runtime_helper_180546a40(&local_c8,0);
  fVar5 = radius - fVar5;
  if ((fVar13 < 0.0) || (fVar5 < 0.0)) {
    fVar1 = (position->fields).z;
    fVar2 = (position->fields).x;
    fVar3 = (position->fields).y;
    if (fVar5 < fVar13) {
      if (Il2CppMethodInitialized_18433de5f == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
        Il2CppMethodInitialized_18433de5f = '\x01';
      }
      fVar7 = (float)il2cpp_runtime_helper_180546a40(&local_c8,0);
      if (fVar7 <= 1e-05) {
        pUVar4 = TypeInfo_UnityEngine_Vector3->static_fields;
        fVar10 = (pUVar4->zeroVector).fields.x;
        fVar11 = (pUVar4->zeroVector).fields.y;
        fVar12 = (pUVar4->zeroVector).fields.z;
      }
      else {
        fVar10 = fVar10 / fVar7;
        fVar11 = fVar11 / fVar7;
        fVar12 = fVar12 / fVar7;
      }
      (position->fields).x = fVar10 * fVar5 + fVar2;
      (position->fields).y = fVar11 * fVar5 + fVar3;
      (position->fields).z = fVar12 * fVar5 + fVar1;
    }
    else {
      if (Il2CppMethodInitialized_18433de5f == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
        Il2CppMethodInitialized_18433de5f = '\x01';
      }
      fVar10 = (float)il2cpp_runtime_helper_180546a40(&local_b8,0);
      if (fVar10 <= 1e-05) {
        pUVar4 = TypeInfo_UnityEngine_Vector3->static_fields;
        fVar7 = (pUVar4->zeroVector).fields.x;
        fVar8 = (pUVar4->zeroVector).fields.y;
        fVar9 = (pUVar4->zeroVector).fields.z;
      }
      else {
        fVar7 = fVar7 / fVar10;
        fVar8 = fVar8 / fVar10;
        fVar9 = fVar9 / fVar10;
      }
      (position->fields).x = fVar7 * fVar13 + fVar2;
      (position->fields).y = fVar8 * fVar13 + fVar3;
      (position->fields).z = fVar9 * fVar13 + fVar1;
    }
  }
  return;
}


// EZhex1991.EZSoftBone.EZSoftBoneUtility$$PointOutsideBox
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBoneUtility__PointOutsideBox (UnityEngine_Vector3_o* position, UnityEngine_BoxCollider_o* collider, float spacing, const MethodInfo* method);
// 0x180586ab0

void EZhex1991_EZSoftBone_EZSoftBoneUtility__PointOutsideBox
               (UnityEngine_Vector3_o *position,UnityEngine_BoxCollider_o *collider,float spacing,
               MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  UnityEngine_Vector3_StaticFields *pUVar3;
  UnityEngine_Transform_o *pUVar4;
  UnityEngine_Vector3_o *pUVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined8 uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  UnityEngine_Vector3_Fields local_c8;
  UnityEngine_Vector3_o local_b8 [14];
  
  if (collider == (UnityEngine_BoxCollider_o *)0x0) goto label_180586e0e;
  pUVar4 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)collider,(MethodInfo *)0x0);
  if (pUVar4 == (UnityEngine_Transform_o *)0x0) goto label_180586e0e;
  local_c8.z = (position->fields).z;
  local_c8.x = (position->fields).x;
  local_c8.y = (position->fields).y;
  pUVar5 = UnityEngine_Transform__InverseTransformPoint
                     (local_b8,pUVar4,(UnityEngine_Vector3_o *)&local_c8,(MethodInfo *)0x0);
  fVar14 = (pUVar5->fields).x;
  fVar15 = (pUVar5->fields).y;
  fVar13 = (pUVar5->fields).z;
  pUVar5 = UnityEngine_BoxCollider__get_center(local_b8,collider,(MethodInfo *)0x0);
  fVar12 = (pUVar5->fields).y;
  fVar11 = (pUVar5->fields).x;
  fVar8 = (pUVar5->fields).z;
  pUVar5 = UnityEngine_BoxCollider__get_size(local_b8,collider,(MethodInfo *)0x0);
  fVar6 = (pUVar5->fields).x;
  fVar7 = (pUVar5->fields).y;
  fVar10 = (pUVar5->fields).z;
  pUVar4 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)collider,(MethodInfo *)0x0);
  if (Il2CppMethodInitialized_18433dbeb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    Il2CppMethodInitialized_18433dbeb = '\x01';
  }
  pUVar3 = TypeInfo_UnityEngine_Vector3->static_fields;
  uVar1 = (pUVar3->oneVector).fields.x;
  uVar2 = (pUVar3->oneVector).fields.y;
  uVar9._0_4_ = (float)uVar1 * spacing;
  uVar9._4_4_ = (float)uVar2 * spacing;
  if (pUVar4 == (UnityEngine_Transform_o *)0x0) goto label_180586e0e;
  local_c8.z = spacing * (pUVar3->oneVector).fields.z;
  fVar15 = fVar15 - fVar12;
  fVar13 = fVar13 - fVar8;
  fVar14 = fVar14 - fVar11;
  local_c8._0_8_ = uVar9;
  pUVar5 = UnityEngine_Transform__InverseTransformVector
                     (local_b8,pUVar4,(UnityEngine_Vector3_o *)&local_c8,(MethodInfo *)0x0);
  fVar12 = ABS((pUVar5->fields).x) + ABS(fVar6) * 0.5;
  if (((ABS(fVar14) < fVar12) && (fVar11 = ABS((pUVar5->fields).y) + ABS(fVar7) * 0.5, ABS(fVar15) < fVar11))
     && (fVar8 = ABS((pUVar5->fields).z) + ABS(fVar10) * 0.5, ABS(fVar13) < fVar8)) {
    fVar10 = ABS(ABS(fVar14) - fVar12);
    fVar7 = ABS(ABS(fVar15) - fVar11);
    fVar6 = ABS(ABS(fVar13) - fVar8);
    if (fVar10 < fVar7) {
      if (fVar6 <= fVar10) goto label_180586ce1;
      if (fVar14 < 0.0) {
        fVar14 = -1.0;
      }
      else {
        fVar14 = 1.0;
      }
      fVar14 = fVar12 * fVar14;
    }
    else if (fVar7 < fVar6) {
      if (fVar15 < 0.0) {
        fVar15 = fVar11 * -1.0;
      }
      else {
        fVar15 = fVar11 * 1.0;
      }
    }
    else {
label_180586ce1:
      if (fVar13 < 0.0) {
        fVar13 = fVar8 * -1.0;
      }
      else {
        fVar13 = fVar8 * 1.0;
      }
    }
  }
  pUVar4 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)collider,(MethodInfo *)0x0);
  pUVar5 = UnityEngine_BoxCollider__get_center(local_b8,collider,(MethodInfo *)0x0);
  if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
    local_c8.z = fVar13 + (pUVar5->fields).z;
    local_c8.y = fVar15 + (pUVar5->fields).y;
    local_c8.x = fVar14 + (pUVar5->fields).x;
    pUVar5 = UnityEngine_Transform__TransformPoint
                       (local_b8,pUVar4,(UnityEngine_Vector3_o *)&local_c8,(MethodInfo *)0x0);
    fVar15 = (pUVar5->fields).y;
    fVar14 = (pUVar5->fields).z;
    (position->fields).x = (pUVar5->fields).x;
    (position->fields).y = fVar15;
    (position->fields).z = fVar14;
    return;
  }
label_180586e0e:
  ThrowNullReferenceException();
}


// EZhex1991.EZSoftBone.EZSoftBoneUtility$$PointOutsideBox
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBoneUtility__PointOutsideBox (UnityEngine_Vector3_o* position, UnityEngine_Vector3_o boxSize, const MethodInfo* method);
// 0x180586e20

void EZhex1991_EZSoftBone_EZSoftBoneUtility__PointOutsideBox_586e20
               (UnityEngine_Vector3_o *position,UnityEngine_Vector3_o *boxSize,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar4 = ABS((position->fields).x);
  fVar3 = ABS((position->fields).y);
  fVar2 = ABS((position->fields).z);
  if ((((boxSize->fields).x <= fVar4) || ((boxSize->fields).y <= fVar3)) ||
     (fVar1 = (boxSize->fields).z, fVar1 <= fVar2)) {
    return;
  }
  fVar4 = ABS(fVar4 - (boxSize->fields).x);
  fVar3 = ABS(fVar3 - (boxSize->fields).y);
  fVar2 = ABS(fVar2 - fVar1);
  if (fVar4 < fVar3) {
    if (fVar4 < fVar2) {
      if ((position->fields).x < 0.0) {
        (position->fields).x = (boxSize->fields).x * -1.0;
        return;
      }
      (position->fields).x = (boxSize->fields).x * 1.0;
      return;
    }
  }
  else if (fVar3 < fVar2) {
    if ((position->fields).y < 0.0) {
      (position->fields).y = (boxSize->fields).y * -1.0;
      return;
    }
    (position->fields).y = (boxSize->fields).y * 1.0;
    return;
  }
  if ((position->fields).z < 0.0) {
    (position->fields).z = (boxSize->fields).z * -1.0;
    return;
  }
  (position->fields).z = (boxSize->fields).z * 1.0;
  return;
}


// EZhex1991.EZSoftBone.EZSoftBoneUtility$$PointInsideBox
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBoneUtility__PointInsideBox (UnityEngine_Vector3_o* position, UnityEngine_BoxCollider_o* collider, float spacing, const MethodInfo* method);
// 0x180585d70
// asm: 4 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x180585f7f: movaps xmm0, xmm1
// asm:   0x180585f82: jmp 0x180585f87
// asm:   0x180585f9b: movaps xmm0, xmm1
// asm:   0x180585f9e: jmp 0x180585fa3

void EZhex1991_EZSoftBone_EZSoftBoneUtility__PointInsideBox
               (UnityEngine_Vector3_o *position,UnityEngine_BoxCollider_o *collider,float spacing,
               MethodInfo *method)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  UnityEngine_Vector3_StaticFields *pUVar4;
  UnityEngine_Transform_o *pUVar5;
  UnityEngine_Vector3_o *pUVar6;
  float fVar7;
  float fVar8;
  undefined8 uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  UnityEngine_Vector3_Fields local_c8;
  UnityEngine_Vector3_o local_b8 [14];
  
  if ((collider != (UnityEngine_BoxCollider_o *)0x0) &&
     (pUVar5 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)collider,(MethodInfo *)0x0),
     pUVar5 != (UnityEngine_Transform_o *)0x0)) {
    local_c8.z = (position->fields).z;
    local_c8.x = (position->fields).x;
    local_c8.y = (position->fields).y;
    pUVar6 = UnityEngine_Transform__InverseTransformPoint
                       (local_b8,pUVar5,(UnityEngine_Vector3_o *)&local_c8,(MethodInfo *)0x0);
    fVar12 = (pUVar6->fields).x;
    fVar11 = (pUVar6->fields).y;
    fVar10 = (pUVar6->fields).z;
    pUVar6 = UnityEngine_BoxCollider__get_center(local_b8,collider,(MethodInfo *)0x0);
    fVar8 = (pUVar6->fields).y;
    fVar13 = (pUVar6->fields).x;
    fVar14 = (pUVar6->fields).z;
    pUVar6 = UnityEngine_BoxCollider__get_size(local_b8,collider,(MethodInfo *)0x0);
    fVar15 = (pUVar6->fields).x;
    fVar7 = (pUVar6->fields).y;
    fVar1 = (pUVar6->fields).z;
    pUVar5 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)collider,(MethodInfo *)0x0);
    if (Il2CppMethodInitialized_18433dbeb == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
      Il2CppMethodInitialized_18433dbeb = '\x01';
    }
    pUVar4 = TypeInfo_UnityEngine_Vector3->static_fields;
    uVar2 = (pUVar4->oneVector).fields.x;
    uVar3 = (pUVar4->oneVector).fields.y;
    uVar9._0_4_ = (float)uVar2 * spacing;
    uVar9._4_4_ = (float)uVar3 * spacing;
    if (pUVar5 != (UnityEngine_Transform_o *)0x0) {
      local_c8.z = spacing * (pUVar4->oneVector).fields.z;
      fVar11 = fVar11 - fVar8;
      fVar10 = fVar10 - fVar14;
      fVar12 = fVar12 - fVar13;
      local_c8._0_8_ = uVar9;
      pUVar6 = UnityEngine_Transform__InverseTransformVector
                         (local_b8,pUVar5,(UnityEngine_Vector3_o *)&local_c8,(MethodInfo *)0x0);
      fVar15 = ABS(fVar15) * 0.5 - ABS((pUVar6->fields).x);
      fVar14 = ABS(fVar7) * 0.5 - ABS((pUVar6->fields).y);
      fVar8 = 1.0;
      fVar13 = ABS(fVar1) * 0.5 - ABS((pUVar6->fields).z);
      if (fVar15 < ABS(fVar12)) {
        fVar7 = fVar8;
        if (fVar12 < 0.0) {
          fVar7 = -1.0;
        }
        fVar12 = fVar15 * fVar7;
      }
      if (fVar14 < ABS(fVar11)) {
        fVar15 = fVar8;
        if (fVar11 < 0.0) {
          fVar15 = -1.0;
        }
        fVar11 = fVar14 * fVar15;
      }
      if (fVar13 < ABS(fVar10)) {
        if (fVar10 < 0.0) {
          fVar8 = -1.0;
        }
        fVar10 = fVar13 * fVar8;
      }
      pUVar5 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)collider,(MethodInfo *)0x0);
      pUVar6 = UnityEngine_BoxCollider__get_center(local_b8,collider,(MethodInfo *)0x0);
      if (pUVar5 != (UnityEngine_Transform_o *)0x0) {
        local_c8.z = fVar10 + (pUVar6->fields).z;
        local_c8.y = fVar11 + (pUVar6->fields).y;
        local_c8.x = fVar12 + (pUVar6->fields).x;
        pUVar6 = UnityEngine_Transform__TransformPoint
                           (local_b8,pUVar5,(UnityEngine_Vector3_o *)&local_c8,(MethodInfo *)0x0);
        fVar11 = (pUVar6->fields).y;
        fVar12 = (pUVar6->fields).z;
        (position->fields).x = (pUVar6->fields).x;
        (position->fields).y = fVar11;
        (position->fields).z = fVar12;
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// EZhex1991.EZSoftBone.EZSoftBoneUtility$$PointInsideBox
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBoneUtility__PointInsideBox (UnityEngine_Vector3_o* position, UnityEngine_Vector3_o boxSize, const MethodInfo* method);
// 0x180585ce0
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x180585d25: movaps xmm0, xmm1
// asm:   0x180585d45: movaps xmm0, xmm1

void EZhex1991_EZSoftBone_EZSoftBoneUtility__PointInsideBox_585ce0
               (UnityEngine_Vector3_o *position,UnityEngine_Vector3_o *boxSize,MethodInfo *method)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar2 = ABS((position->fields).x);
  fVar4 = ABS((position->fields).y);
  fVar5 = ABS((position->fields).z);
  fVar3 = -1.0;
  if ((boxSize->fields).x <= fVar2 && fVar2 != (boxSize->fields).x) {
    fVar2 = fVar3;
    if (0.0 <= (position->fields).x) {
      fVar2 = 1.0;
    }
    (position->fields).x = fVar2 * (boxSize->fields).x;
  }
  pfVar1 = &(boxSize->fields).y;
  if (*pfVar1 <= fVar4 && fVar4 != *pfVar1) {
    fVar2 = fVar3;
    if (0.0 <= (position->fields).y) {
      fVar2 = 1.0;
    }
    (position->fields).y = fVar2 * (boxSize->fields).y;
  }
  pfVar1 = &(boxSize->fields).z;
  if (*pfVar1 <= fVar5 && fVar5 != *pfVar1) {
    fVar2 = 1.0;
    if ((position->fields).z < 0.0) {
      fVar2 = fVar3;
    }
    (position->fields).z = fVar2 * (boxSize->fields).z;
  }
  return;
}


// EZhex1991.EZSoftBone.EZSoftBoneUtility$$PointOutsideCollider
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBoneUtility__PointOutsideCollider (UnityEngine_Vector3_o* position, UnityEngine_Collider_o* collider, float spacing, const MethodInfo* method);
// 0x1805872a0

void EZhex1991_EZSoftBone_EZSoftBoneUtility__PointOutsideCollider
               (UnityEngine_Vector3_o *position,UnityEngine_Collider_o *collider,float spacing,
               MethodInfo *method)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  UnityEngine_Vector3_StaticFields *pUVar7;
  UnityEngine_Vector3_o *pUVar8;
  UnityEngine_Bounds_o *pUVar9;
  UnityEngine_Vector3_Fields *pUVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  UnityEngine_Vector3_Fields local_f8;
  UnityEngine_Vector3_Fields local_e8;
  UnityEngine_Vector3_Fields local_d8;
  UnityEngine_Bounds_o local_c8 [8];
  
  if (Il2CppMethodInitialized_18433df4a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Debug);
    Il2CppMethodInitialized_18433df4a = '\x01';
  }
  if (collider != (UnityEngine_Collider_o *)0x0) {
    local_f8.x = (position->fields).x;
    local_f8.y = (position->fields).y;
    local_f8.z = (position->fields).z;
    pUVar8 = UnityEngine_Collider__ClosestPoint
                       ((UnityEngine_Vector3_o *)&local_d8,collider,(UnityEngine_Vector3_o *)&local_f8,
                        (MethodInfo *)0x0);
    uVar4._0_4_ = (pUVar8->fields).x;
    uVar4._4_4_ = (pUVar8->fields).y;
    fVar1 = (pUVar8->fields).z;
    fVar12 = (position->fields).x - (float)uVar4;
    fVar11 = (position->fields).z - fVar1;
    fVar13 = (position->fields).y - uVar4._4_4_;
    uVar2 = (position->fields).x;
    uVar5 = (position->fields).y;
    fVar14 = (position->fields).z;
    if (fVar13 * fVar13 + fVar12 * fVar12 + fVar11 * fVar11 < 9.9999994e-11) {
      pUVar9 = UnityEngine_Collider__get_bounds(local_c8,collider,(MethodInfo *)0x0);
      uVar3 = (pUVar9->fields).m_Center.fields.x;
      uVar6 = (pUVar9->fields).m_Center.fields.y;
      fVar14 = fVar14 - (pUVar9->fields).m_Center.fields.z;
      fVar11 = (float)uVar2 - (float)uVar3;
      fVar12 = (float)uVar5 - (float)uVar6;
      local_d8.y = fVar12;
      local_d8.x = fVar11;
      local_d8.z = fVar14;
      pUVar9 = UnityEngine_Collider__get_bounds(local_c8,collider,(MethodInfo *)0x0);
      local_e8.x = (pUVar9->fields).m_Center.fields.x;
      local_e8.y = (pUVar9->fields).m_Center.fields.y;
      local_e8.z = (pUVar9->fields).m_Center.fields.z;
      if ((TypeInfo_UnityEngine_Debug->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Debug);
      }
      local_c8[0].fields.m_Center.fields.x = 1.0;
      local_c8[0].fields.m_Center.fields.y = 0.0;
      local_c8[0].fields.m_Center.fields.z = 0.0;
      local_c8[0].fields.m_Extents.fields.x = 1.0;
      local_f8._0_8_ = uVar4;
      local_f8.z = fVar1;
      UnityEngine_Debug__DrawLine
                ((UnityEngine_Vector3_o *)&local_e8,(UnityEngine_Vector3_o *)&local_f8,
                 (UnityEngine_Color_o *)local_c8,(MethodInfo *)0x0);
      if (Il2CppMethodInitialized_18433de5f == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
        Il2CppMethodInitialized_18433de5f = '\x01';
      }
      pUVar10 = &local_d8;
    }
    else {
      fVar14 = fVar14 - fVar1;
      fVar11 = (float)uVar2 - (float)uVar4;
      fVar12 = (float)uVar5 - uVar4._4_4_;
      local_f8.y = fVar12;
      local_f8.x = fVar11;
      local_f8.z = fVar14;
      fVar13 = (float)il2cpp_runtime_helper_180546a40(&local_f8,0);
      if (spacing <= fVar13) {
        return;
      }
      if (Il2CppMethodInitialized_18433de5f == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
        Il2CppMethodInitialized_18433de5f = '\x01';
      }
      pUVar10 = &local_f8;
    }
    fVar13 = (float)il2cpp_runtime_helper_180546a40(pUVar10,0);
    if (fVar13 <= 1e-05) {
      pUVar7 = TypeInfo_UnityEngine_Vector3->static_fields;
      fVar11 = (pUVar7->zeroVector).fields.x;
      fVar12 = (pUVar7->zeroVector).fields.y;
      fVar14 = (pUVar7->zeroVector).fields.z;
    }
    else {
      fVar11 = fVar11 / fVar13;
      fVar12 = fVar12 / fVar13;
      fVar14 = fVar14 / fVar13;
    }
    (position->fields).x = fVar11 * spacing + (float)uVar4;
    (position->fields).y = fVar12 * spacing + uVar4._4_4_;
    (position->fields).z = fVar14 * spacing + fVar1;
    return;
  }
  ThrowNullReferenceException();
}


// EZhex1991.EZSoftBone.EZSoftBoneUtility$$DrawGizmosArrow
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBoneUtility__DrawGizmosArrow (UnityEngine_Vector3_o startPoint, UnityEngine_Vector3_o direction, float halfWidth, UnityEngine_Vector3_o normal, const MethodInfo* method);
// 0x180585540
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18058585d: nop dword ptr [rax]

void EZhex1991_EZSoftBone_EZSoftBoneUtility__DrawGizmosArrow
               (UnityEngine_Vector3_o *startPoint,UnityEngine_Vector3_o *direction,float halfWidth,
               UnityEngine_Vector3_o *normal,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar7;
  Il2CppClass *pIVar6;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  UnityEngine_Vector3_StaticFields *pUVar11;
  Il2CppObject *pIVar12;
  uint uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  UnityEngine_Vector3_Fields local_68;
  UnityEngine_Vector3_Fields local_58 [6];
  
  if (Il2CppMethodInitialized_18433df4b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3_array);
    Il2CppMethodInitialized_18433df4b = '\x01';
  }
  fVar17 = (normal->fields).x;
  fVar14 = (normal->fields).y;
  fVar19 = (normal->fields).z;
  fVar15 = (direction->fields).x;
  fVar16 = (direction->fields).y;
  fVar1 = (direction->fields).z;
  fVar18 = fVar19 * fVar16 - fVar14 * fVar1;
  fVar19 = fVar17 * fVar1 - fVar19 * fVar15;
  fVar17 = fVar14 * fVar15 - fVar17 * fVar16;
  local_68.y = fVar19;
  local_68.x = fVar18;
  local_68.z = fVar17;
  if (Il2CppMethodInitialized_18433de5f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    Il2CppMethodInitialized_18433de5f = '\x01';
  }
  fVar14 = (float)il2cpp_runtime_helper_180546a40(&local_68,0);
  if (fVar14 <= 1e-05) {
    pUVar11 = TypeInfo_UnityEngine_Vector3->static_fields;
    fVar18 = (pUVar11->zeroVector).fields.x;
    fVar19 = (pUVar11->zeroVector).fields.y;
    fVar17 = (pUVar11->zeroVector).fields.z;
  }
  else {
    fVar18 = fVar18 / fVar14;
    fVar19 = fVar19 / fVar14;
    fVar17 = fVar17 / fVar14;
  }
  pIVar12 = SZArrayNew(TypeInfo_UnityEngine_Vector3_array,8);
  if (pIVar12 != (Il2CppObject *)0x0) {
    fVar18 = fVar18 * halfWidth;
    fVar19 = fVar19 * halfWidth;
    fVar17 = fVar17 * halfWidth;
    fVar14 = (startPoint->fields).x;
    fVar15 = fVar17 * 0.5 + (startPoint->fields).z;
    if (*(int *)&pIVar12[1].monitor != 0) {
      fVar16 = (direction->fields).z;
      *(float *)((longlong)&pIVar12[2].klass + 4) = fVar19 * 0.5 + (startPoint->fields).y;
      uVar3 = (direction->fields).x;
      uVar7 = (direction->fields).y;
      *(float *)&pIVar12[2].klass = fVar18 * 0.5 + fVar14;
      *(float *)&pIVar12[2].monitor = fVar15;
      fVar15 = fVar16 * 0.5 + fVar15;
      pIVar6 = pIVar12[2].klass;
      if (1 < *(uint *)&pIVar12[1].monitor) {
        *(float *)((longlong)&pIVar12[3].klass + 4) = fVar15;
        *(ulonglong *)((longlong)&pIVar12[2].monitor + 4) =
             CONCAT44((float)uVar7 * 0.5 + (float)((ulonglong)pIVar6 >> 0x20),
                      (float)uVar3 * 0.5 + SUB84(pIVar6,0));
        if (2 < *(uint *)&pIVar12[1].monitor) {
          fVar14 = (direction->fields).z;
          uVar4 = (direction->fields).x;
          uVar8 = (direction->fields).y;
          fVar16 = (startPoint->fields).z;
          *(float *)&pIVar12[3].monitor = fVar18 * 0.5 + *(float *)((longlong)&pIVar12[2].monitor + 4);
          uVar5 = (startPoint->fields).x;
          uVar9 = (startPoint->fields).y;
          *(float *)((longlong)&pIVar12[3].monitor + 4) = fVar19 * 0.5 + *(float *)&pIVar12[3].klass;
          *(float *)&pIVar12[4].klass = fVar17 * 0.5 + fVar15;
          if (3 < *(uint *)&pIVar12[1].monitor) {
            fVar15 = (startPoint->fields).x;
            fVar1 = (direction->fields).x;
            fVar2 = (startPoint->fields).y;
            *(float *)((longlong)&pIVar12[4].monitor + 4) = fVar14 + fVar16;
            fVar14 = (direction->fields).z;
            *(ulonglong *)((longlong)&pIVar12[4].klass + 4) =
                 CONCAT44((float)uVar8 + (float)uVar9,(float)uVar4 + (float)uVar5);
            fVar15 = fVar1 * 0.5 + (fVar15 - fVar18);
            fVar16 = (direction->fields).y * 0.5 + (fVar2 - fVar19);
            fVar14 = fVar14 * 0.5 + ((startPoint->fields).z - fVar17);
            if (4 < *(uint *)&pIVar12[1].monitor) {
              *(float *)&pIVar12[5].klass = fVar15;
              *(float *)((longlong)&pIVar12[5].klass + 4) = fVar16;
              *(float *)&pIVar12[5].monitor = fVar14;
              if (5 < *(uint *)&pIVar12[1].monitor) {
                *(float *)((longlong)&pIVar12[5].monitor + 4) = fVar18 * 0.5 + fVar15;
                fVar15 = (startPoint->fields).x;
                *(float *)&pIVar12[6].klass = fVar19 * 0.5 + fVar16;
                fVar16 = (startPoint->fields).y;
                *(float *)((longlong)&pIVar12[6].klass + 4) = fVar17 * 0.5 + fVar14;
                fVar14 = (startPoint->fields).z;
                if (6 < *(uint *)&pIVar12[1].monitor) {
                  *(float *)&pIVar12[6].monitor = fVar15 - fVar18 * 0.5;
                  *(float *)((longlong)&pIVar12[6].monitor + 4) = fVar16 - fVar19 * 0.5;
                  *(float *)&pIVar12[7].klass = fVar14 - fVar17 * 0.5;
                  if ((*(int *)&pIVar12[1].monitor != 0) && (7 < *(uint *)&pIVar12[1].monitor)) {
                    uVar13 = 0;
                    uVar10 = *(undefined4 *)&pIVar12[2].monitor;
                    *(Il2CppClass **)((longlong)&pIVar12[7].klass + 4) = pIVar12[2].klass;
                    *(undefined4 *)((longlong)&pIVar12[7].monitor + 4) = uVar10;
                    while( true ) {
                      if (*(int *)&pIVar12[1].monitor + -1 <= (int)uVar13) {
                        return;
                      }
                      if ((*(uint *)&pIVar12[1].monitor <= uVar13) ||
                         (*(uint *)&pIVar12[1].monitor <= uVar13 + 1)) break;
                      local_68._0_8_ =
                           *(undefined8 *)((longlong)&pIVar12[2].monitor + (longlong)(int)uVar13 * 0xc + 4);
                      local_68.z = *(float *)((longlong)&pIVar12[3].klass + (longlong)(int)uVar13 * 0xc + 4);
                      local_58[0]._0_8_ =
                           *(undefined8 *)((longlong)&pIVar12[2].klass + (longlong)(int)uVar13 * 0xc);
                      local_58[0].z = *(float *)((longlong)&pIVar12[2].monitor + (longlong)(int)uVar13 * 0xc);
                      UnityEngine_Gizmos__DrawLine
                                ((UnityEngine_Vector3_o *)local_58,(UnityEngine_Vector3_o *)&local_68,
                                 (MethodInfo *)0x0);
                      uVar13 = uVar13 + 1;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    ThrowIndexOutOfRangeException();
  }
  ThrowNullReferenceException();
}


// EZhex1991.EZSoftBone.EZSoftBoneUtility$$DrawGizmosPolyLine
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBoneUtility__DrawGizmosPolyLine (UnityEngine_Vector3_array* vertices, const MethodInfo* method);
// 0x180585900

void EZhex1991_EZSoftBone_EZSoftBoneUtility__DrawGizmosPolyLine
               (UnityEngine_Vector3_array *vertices,MethodInfo *method)

{
  uint uVar1;
  UnityEngine_Vector3_Fields local_28;
  UnityEngine_Vector3_Fields local_18;
  
  if (vertices == (UnityEngine_Vector3_array *)0x0) {
    ThrowNullReferenceException();
  }
  uVar1 = 0;
  while( true ) {
    if ((int)vertices->max_length + -1 <= (int)uVar1) {
      return;
    }
    if (((uint)vertices->max_length <= uVar1) || ((uint)vertices->max_length <= uVar1 + 1)) break;
    local_28.x = vertices->m_Items[(longlong)(int)uVar1 + 1].fields.x;
    local_28.y = vertices->m_Items[(longlong)(int)uVar1 + 1].fields.y;
    local_28.z = vertices->m_Items[(longlong)(int)uVar1 + 1].fields.z;
    local_18.x = vertices->m_Items[(int)uVar1].fields.x;
    local_18.y = vertices->m_Items[(int)uVar1].fields.y;
    local_18.z = vertices->m_Items[(int)uVar1].fields.z;
    UnityEngine_Gizmos__DrawLine
              ((UnityEngine_Vector3_o *)&local_18,(UnityEngine_Vector3_o *)&local_28,(MethodInfo *)0x0);
    uVar1 = uVar1 + 1;
  }
  ThrowIndexOutOfRangeException();
}


