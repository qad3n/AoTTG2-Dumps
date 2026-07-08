// Type: EZhex1991.EZSoftBone.EZSoftBoneCollider
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/EZhex1991.EZSoftBone/EZhex1991.EZSoftBone/EZSoftBoneCollider.cs
// Prior real C# source (REFERENCE, outdated): Assets/ThirdParty/EZhex1991/EZSoftBone/Runtime/EZSoftBoneCollider.cs  [prior source available (delta unverified)]
// --------------------------------

// EZhex1991.EZSoftBone.EZSoftBoneCollider$$get_referenceCollider
// il2cpp: UnityEngine_Collider_o* EZhex1991_EZSoftBone_EZSoftBoneCollider__get_referenceCollider (EZhex1991_EZSoftBone_EZSoftBoneCollider_o* __this, const MethodInfo* method);
// 0x2458580

UnityEngine_Collider_o *
EZhex1991_EZSoftBone_EZSoftBoneCollider__get_referenceCollider
          (EZhex1991_EZSoftBone_EZSoftBoneCollider_o *__this,MethodInfo *method)

{
  UnityEngine_Collider_o **ppUVar1;
  UnityEngine_Object_o *x;
  bool_conflict bVar2;
  UnityEngine_Collider_o *pUVar3;
  
  if (DAT_056fe06a == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Collider_GetComponent_Collider);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_056fe06a = '\x01';
  }
  x = (UnityEngine_Object_o *)(__this->fields).m_ReferenceCollider;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  ppUVar1 = &(__this->fields).m_ReferenceCollider;
  bVar2 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    pUVar3 = (UnityEngine_Collider_o *)
             UnityEngine_Component__GetComponent<object>
                       ((UnityEngine_Component_o *)__this,MethodInfo_Collider_GetComponent_Collider);
    (__this->fields).m_ReferenceCollider = pUVar3;
    il2cpp_runtime_glue(ppUVar1,pUVar3);
  }
  return *ppUVar1;
}


// EZhex1991.EZSoftBone.EZSoftBoneCollider$$get_margin
// il2cpp: float EZhex1991_EZSoftBone_EZSoftBoneCollider__get_margin (EZhex1991_EZSoftBone_EZSoftBoneCollider_o* __this, const MethodInfo* method);
// 0x2458610

float EZhex1991_EZSoftBone_EZSoftBoneCollider__get_margin
                (EZhex1991_EZSoftBone_EZSoftBoneCollider_o *__this,MethodInfo *method)

{
  return (__this->fields).m_Margin;
}


// EZhex1991.EZSoftBone.EZSoftBoneCollider$$set_margin
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBoneCollider__set_margin (EZhex1991_EZSoftBone_EZSoftBoneCollider_o* __this, float value, const MethodInfo* method);
// 0x2458620

void EZhex1991_EZSoftBone_EZSoftBoneCollider__set_margin
               (EZhex1991_EZSoftBone_EZSoftBoneCollider_o *__this,float value,MethodInfo *method)

{
  (__this->fields).m_Margin = value;
  return;
}


// EZhex1991.EZSoftBone.EZSoftBoneCollider$$get_insideMode
// il2cpp: bool EZhex1991_EZSoftBone_EZSoftBoneCollider__get_insideMode (EZhex1991_EZSoftBone_EZSoftBoneCollider_o* __this, const MethodInfo* method);
// 0x2458630

bool_conflict
EZhex1991_EZSoftBone_EZSoftBoneCollider__get_insideMode
          (EZhex1991_EZSoftBone_EZSoftBoneCollider_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),(char)(__this->fields).m_InsideMode);
}


// EZhex1991.EZSoftBone.EZSoftBoneCollider$$set_insideMode
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBoneCollider__set_insideMode (EZhex1991_EZSoftBone_EZSoftBoneCollider_o* __this, bool value, const MethodInfo* method);
// 0x2458640

void EZhex1991_EZSoftBone_EZSoftBoneCollider__set_insideMode
               (EZhex1991_EZSoftBone_EZSoftBoneCollider_o *__this,bool_conflict value,
               MethodInfo *method)

{
  *(char *)&(__this->fields).m_InsideMode = (char)value;
  return;
}


// EZhex1991.EZSoftBone.EZSoftBoneCollider$$Collide
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBoneCollider__Collide (EZhex1991_EZSoftBone_EZSoftBoneCollider_o* __this, UnityEngine_Vector3_o* position, float spacing, const MethodInfo* method);
// 0x2458650

/* WARNING: Type propagation algorithm not settling */

void EZhex1991_EZSoftBone_EZSoftBoneCollider__Collide
               (EZhex1991_EZSoftBone_EZSoftBoneCollider_o *__this,UnityEngine_Vector3_o *position,
               float spacing,MethodInfo *method)

{
  float fVar1;
  undefined4 uVar2;
  float fVar3;
  undefined4 uVar4;
  byte bVar5;
  char cVar6;
  int iVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  UnityEngine_MeshCollider_o *__this_00;
  bool_conflict bVar13;
  UnityEngine_Collider_o *pUVar14;
  UnityEngine_Object_o *x;
  UnityEngine_Transform_o *pUVar15;
  MethodInfo *extraout_RDX;
  MethodInfo *pMVar16;
  MethodInfo *method_00;
  UnityEngine_Component_o *__this_01;
  UnityEngine_BoxCollider_o *collider;
  UnityEngine_CapsuleCollider_o *collider_00;
  MethodInfo *in_R8;
  float fVar17;
  float extraout_XMM0_Db;
  float extraout_XMM0_Dc;
  float extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dc_01;
  undefined4 extraout_XMM0_Dc_02;
  float extraout_XMM0_Dc_03;
  float fVar18;
  undefined4 uVar19;
  undefined4 extraout_XMM0_Dc_04;
  float extraout_XMM0_Dd;
  undefined4 extraout_XMM0_Dd_00;
  undefined4 extraout_XMM0_Dd_01;
  undefined4 extraout_XMM0_Dd_02;
  float extraout_XMM0_Dd_03;
  float fVar20;
  undefined4 uVar21;
  undefined4 extraout_XMM0_Dd_04;
  undefined1 auVar22 [16];
  float fVar23;
  undefined8 uVar24;
  UnityEngine_Vector3_o UVar25;
  UnityEngine_Vector3_o position_00;
  undefined1 local_58 [8];
  float fStack_50;
  float fStack_4c;
  undefined1 local_48 [8];
  undefined8 uStack_40;
  undefined1 local_38 [8];
  undefined8 uStack_30;
  
  pMVar16 = (MethodInfo *)position;
  if (DAT_056fe06b == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BoxCollider);
    il2cpp_init_method_metadata(&TypeInfo_CapsuleCollider);
    il2cpp_init_method_metadata(&TypeInfo_Debug);
    il2cpp_init_method_metadata(&TypeInfo_MeshCollider);
    il2cpp_init_method_metadata(&TypeInfo_SphereCollider);
    il2cpp_init_method_metadata(&"Inside Mode On Mesh Collider is not supported");
    il2cpp_init_method_metadata(&"Non-Convex Mesh Collider is not supported");
    DAT_056fe06b = '\x01';
  }
  pUVar14 = EZhex1991_EZSoftBone_EZSoftBoneCollider__get_referenceCollider(__this,pMVar16);
  if (pUVar14 != (UnityEngine_Collider_o *)0x0) {
    bVar5 = (TypeInfo_SphereCollider->_2).naturalAligment;
    if ((bVar5 <= (pUVar14->klass->_2).naturalAligment) &&
       ((pUVar14->klass->_2).typeHierarchy[(ulong)bVar5 - 1] == TypeInfo_SphereCollider)) {
      pUVar14 = EZhex1991_EZSoftBone_EZSoftBoneCollider__get_referenceCollider(__this,pMVar16);
      if (pUVar14 == (UnityEngine_Collider_o *)0x0) {
        __this_01 = (UnityEngine_Component_o *)0x0;
        cVar6 = (char)(__this->fields).m_InsideMode;
        fVar23 = (__this->fields).m_Margin;
      }
      else {
        bVar5 = (TypeInfo_SphereCollider->_2).naturalAligment;
        if ((pUVar14->klass->_2).naturalAligment < bVar5) {
          __this_01 = (UnityEngine_Component_o *)0x0;
          cVar6 = (char)(__this->fields).m_InsideMode;
          fVar23 = (__this->fields).m_Margin;
        }
        else {
          __this_01 = (UnityEngine_Component_o *)0x0;
          if ((pUVar14->klass->_2).typeHierarchy[(ulong)bVar5 - 1] == TypeInfo_SphereCollider) {
            __this_01 = (UnityEngine_Component_o *)pUVar14;
          }
          cVar6 = (char)(__this->fields).m_InsideMode;
          fVar23 = (__this->fields).m_Margin;
        }
      }
      if (cVar6 != '\0') {
        if (__this_01 != (UnityEngine_Component_o *)0x0) {
          pUVar15 = UnityEngine_Component__get_transform(__this_01,(MethodInfo *)0x0);
          UVar25 = UnityEngine_SphereCollider__get_center
                             ((UnityEngine_SphereCollider_o *)__this_01,(MethodInfo *)0x0);
          if (pUVar15 != (UnityEngine_Transform_o *)0x0) {
            UVar25 = UnityEngine_Transform__TransformPoint(pUVar15,UVar25,(MethodInfo *)0x0);
            local_48._0_4_ =
                 UnityEngine_SphereCollider__get_radius
                           ((UnityEngine_SphereCollider_o *)__this_01,(MethodInfo *)0x0);
            fVar1 = (position->fields).x;
            fVar3 = (position->fields).y;
            local_38._4_4_ = fVar3;
            local_38._0_4_ = fVar1;
            uStack_30._0_4_ = 0.0;
            uStack_30._4_4_ = 0.0;
            fVar17 = (position->fields).z;
            local_48._4_4_ = extraout_XMM0_Db;
            uStack_40._0_4_ = extraout_XMM0_Dc_00;
            uStack_40._4_4_ = extraout_XMM0_Dd_00;
            if (DAT_056fde1c == '\0') {
              uStack_30 = (Il2CppMethodPointer)0x0;
              il2cpp_init_method_metadata(&TypeInfo_Math);
              DAT_056fde1c = '\x01';
              fVar1 = (float)local_38._0_4_;
              fVar3 = (float)local_38._4_4_;
            }
            local_38._0_4_ = fVar1 - UVar25.fields.x;
            local_38._4_4_ = fVar3 - UVar25.fields.y;
            fVar17 = fVar17 - UVar25.fields.z;
            uStack_30._0_4_ = (float)uStack_30 - extraout_XMM0_Dc;
            uStack_30._4_4_ = uStack_30._4_4_ - extraout_XMM0_Dd;
            fVar1 = (float)local_38._0_4_;
            fVar3 = (float)local_38._4_4_;
            if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
              il2cpp_init_class();
              fVar1 = (float)local_38._0_4_;
              fVar3 = (float)local_38._4_4_;
            }
            local_48._0_4_ = (float)local_48._0_4_ - (spacing + fVar23);
            fVar23 = fVar17 * fVar17 + fVar3 * fVar3 + fVar1 * fVar1;
            if (fVar23 < 0.0) {
              fVar3 = sqrtf(fVar23);
              fVar1 = (float)local_48._0_4_;
              if (fVar3 <= (float)local_48._0_4_) {
                return;
              }
            }
            else {
              fVar1 = (float)local_48._0_4_;
              if (SQRT(fVar23) <= (float)local_48._0_4_) {
                return;
              }
            }
            if (DAT_056fde20 == '\0') {
              il2cpp_init_method_metadata(&TypeInfo_Math);
              DAT_056fde20 = '\x01';
              iVar7 = *(int *)(TypeInfo_Math + 0xe4);
              fVar1 = (float)local_48._0_4_;
            }
            else {
              iVar7 = *(int *)(TypeInfo_Math + 0xe4);
            }
            if (iVar7 == 0) {
              il2cpp_init_class();
              fVar1 = (float)local_48._0_4_;
            }
            if (fVar23 < 0.0) {
              fVar23 = sqrtf(fVar23);
              uVar19 = extraout_XMM0_Dc_01;
              uVar21 = extraout_XMM0_Dd_01;
              fVar1 = (float)local_48._0_4_;
            }
            else {
              uVar19 = 0;
              uVar21 = 0;
              fVar23 = SQRT(fVar23);
            }
            if (fVar23 <= 1e-05) {
              if (DAT_056fdd15 == '\0') {
                il2cpp_init_method_metadata(&TypeInfo_Vector3);
                DAT_056fdd15 = '\x01';
                fVar1 = (float)local_48._0_4_;
              }
              uVar24 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
              fVar17 = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
            }
            else {
              fVar17 = fVar17 / fVar23;
              auVar8._4_4_ = fVar23;
              auVar8._0_4_ = fVar23;
              auVar8._8_4_ = uVar19;
              auVar8._12_4_ = uVar21;
              auVar22 = divps(_local_38,auVar8);
              uVar24 = auVar22._0_8_;
            }
            (position->fields).x = UVar25.fields.x + fVar1 * (float)uVar24;
            (position->fields).y = UVar25.fields.y + fVar1 * (float)((ulong)uVar24 >> 0x20);
            (position->fields).z = UVar25.fields.z + fVar17 * fVar1;
            return;
          }
        }
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      if ((__this_01 != (UnityEngine_Component_o *)0x0) &&
         (pUVar15 = UnityEngine_Component__get_transform(__this_01,(MethodInfo *)0x0),
         pUVar15 != (UnityEngine_Transform_o *)0x0)) {
        UVar25 = UnityEngine_Transform__get_lossyScale(pUVar15,(MethodInfo *)0x0);
        uStack_40._0_4_ = (float)extraout_XMM0_Dc_02;
        local_48 = (undefined1  [8])UVar25.fields._0_8_;
        uStack_40._4_4_ = extraout_XMM0_Dd_02;
        fVar17 = UnityEngine_SphereCollider__get_radius
                           ((UnityEngine_SphereCollider_o *)__this_01,(MethodInfo *)0x0);
        pUVar15 = UnityEngine_Component__get_transform(__this_01,(MethodInfo *)0x0);
        position_00 = UnityEngine_SphereCollider__get_center
                                ((UnityEngine_SphereCollider_o *)__this_01,(MethodInfo *)0x0);
        if (pUVar15 != (UnityEngine_Transform_o *)0x0) {
          fVar1 = ABS((float)local_48._4_4_);
          if (ABS((float)local_48._4_4_) <= ABS(UVar25.fields.z)) {
            fVar1 = ABS(UVar25.fields.z);
          }
          fVar3 = ABS((float)local_48._0_4_);
          if (ABS((float)local_48._0_4_) <= fVar1) {
            fVar3 = fVar1;
          }
          UVar25 = UnityEngine_Transform__TransformPoint(pUVar15,position_00,(MethodInfo *)0x0);
          uVar2 = (position->fields).x;
          uVar4 = (position->fields).y;
          fVar1 = (position->fields).z;
          uStack_30._0_4_ = extraout_XMM0_Dc_03;
          local_38 = (undefined1  [8])UVar25.fields._0_8_;
          uStack_30._4_4_ = extraout_XMM0_Dd_03;
          local_58._0_4_ = UVar25.fields.x;
          local_58._4_4_ = UVar25.fields.y;
          fVar18 = extraout_XMM0_Dc_03;
          fVar20 = extraout_XMM0_Dd_03;
          if (DAT_056fde1c == '\0') {
            local_48._0_4_ = fVar1;
            il2cpp_init_method_metadata(&TypeInfo_Math);
            DAT_056fde1c = '\x01';
            local_58._0_4_ = local_38._0_4_;
            local_58._4_4_ = local_38._4_4_;
            fVar18 = (float)uStack_30;
            fVar20 = uStack_30._4_4_;
            fVar1 = (float)local_48._0_4_;
          }
          local_58._0_4_ = (float)uVar2 - (float)local_58._0_4_;
          local_58._4_4_ = (float)uVar4 - (float)local_58._4_4_;
          fVar1 = fVar1 - UVar25.fields.z;
          local_48._0_4_ = fVar1;
          fStack_50 = 0.0 - fVar18;
          fStack_4c = 0.0 - fVar20;
          if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
            il2cpp_init_class();
            fVar1 = (float)local_48._0_4_;
          }
          fVar17 = fVar17 * fVar3 + spacing + fVar23;
          fVar23 = fVar1 * fVar1 +
                   (float)local_58._4_4_ * (float)local_58._4_4_ +
                   (float)local_58._0_4_ * (float)local_58._0_4_;
          if (fVar23 < 0.0) {
            fVar1 = sqrtf(fVar23);
          }
          else {
            fVar1 = SQRT(fVar23);
          }
          if (fVar17 <= fVar1) {
            return;
          }
          if (DAT_056fde20 == '\0') {
            il2cpp_init_method_metadata(&TypeInfo_Math);
            DAT_056fde20 = '\x01';
            iVar7 = *(int *)(TypeInfo_Math + 0xe4);
          }
          else {
            iVar7 = *(int *)(TypeInfo_Math + 0xe4);
          }
          if (iVar7 == 0) {
            il2cpp_init_class();
          }
          if (fVar23 < 0.0) {
            fVar23 = sqrtf(fVar23);
            uVar19 = extraout_XMM0_Dc_04;
            uVar21 = extraout_XMM0_Dd_04;
          }
          else {
            uVar19 = 0;
            uVar21 = 0;
            fVar23 = SQRT(fVar23);
          }
          if (fVar23 <= 1e-05) {
            if (DAT_056fdd15 == '\0') {
              il2cpp_init_method_metadata(&TypeInfo_Vector3);
              DAT_056fdd15 = '\x01';
            }
            uVar24 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
            local_48._0_4_ = *(undefined4 *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
          }
          else {
            local_48._0_4_ = (float)local_48._0_4_ / fVar23;
            auVar22._4_4_ = fVar23;
            auVar22._0_4_ = fVar23;
            auVar22._8_4_ = uVar19;
            auVar22._12_4_ = uVar21;
            auVar22 = divps(_local_58,auVar22);
            uVar24 = auVar22._0_8_;
          }
          (position->fields).x = (float)local_38._0_4_ + fVar17 * (float)uVar24;
          (position->fields).y = (float)local_38._4_4_ + fVar17 * (float)((ulong)uVar24 >> 0x20);
          (position->fields).z = UVar25.fields.z + (float)local_48._0_4_ * fVar17;
          return;
        }
      }
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
  }
  pUVar14 = EZhex1991_EZSoftBone_EZSoftBoneCollider__get_referenceCollider(__this,pMVar16);
  if (pUVar14 != (UnityEngine_Collider_o *)0x0) {
    bVar5 = (TypeInfo_CapsuleCollider->_2).naturalAligment;
    if ((bVar5 <= (pUVar14->klass->_2).naturalAligment) &&
       ((pUVar14->klass->_2).typeHierarchy[(ulong)bVar5 - 1] == TypeInfo_CapsuleCollider)) {
      pUVar14 = EZhex1991_EZSoftBone_EZSoftBoneCollider__get_referenceCollider(__this,pMVar16);
      if (pUVar14 == (UnityEngine_Collider_o *)0x0) {
        collider_00 = (UnityEngine_CapsuleCollider_o *)0x0;
        cVar6 = (char)(__this->fields).m_InsideMode;
        fVar23 = (__this->fields).m_Margin;
      }
      else {
        bVar5 = (TypeInfo_CapsuleCollider->_2).naturalAligment;
        if ((pUVar14->klass->_2).naturalAligment < bVar5) {
          collider_00 = (UnityEngine_CapsuleCollider_o *)0x0;
          cVar6 = (char)(__this->fields).m_InsideMode;
          fVar23 = (__this->fields).m_Margin;
        }
        else {
          collider_00 = (UnityEngine_CapsuleCollider_o *)0x0;
          if ((pUVar14->klass->_2).typeHierarchy[(ulong)bVar5 - 1] == TypeInfo_CapsuleCollider) {
            collider_00 = (UnityEngine_CapsuleCollider_o *)pUVar14;
          }
          cVar6 = (char)(__this->fields).m_InsideMode;
          fVar23 = (__this->fields).m_Margin;
        }
      }
      if (cVar6 != '\0') {
        uStack_30._0_4_ = 0.0;
        auVar9._8_8_ = 0;
        auVar9._0_8_ = uStack_30;
        _local_38 = auVar9 << 0x40;
        uStack_40._0_4_ = 0.0;
        auVar10._8_8_ = 0;
        auVar10._0_8_ = uStack_40;
        _local_48 = auVar10 << 0x40;
        pMVar16 = (MethodInfo *)local_38;
        EZhex1991_EZSoftBone_EZSoftBoneUtility__GetCapsuleParams
                  (collider_00,(UnityEngine_Vector3_o *)pMVar16,(UnityEngine_Vector3_o *)local_48,
                   (float *)(local_58 + 0xc),in_R8);
        EZhex1991_EZSoftBone_EZSoftBoneUtility__PointInsideCapsule
                  (position,_local_38,_local_48,0.0 - (spacing + fVar23),pMVar16);
        return;
      }
      uStack_30._0_4_ = 0.0;
      auVar11._8_8_ = 0;
      auVar11._0_8_ = uStack_30;
      _local_38 = auVar11 << 0x40;
      uStack_40._0_4_ = 0.0;
      auVar12._8_8_ = 0;
      auVar12._0_8_ = uStack_40;
      _local_48 = auVar12 << 0x40;
      pMVar16 = (MethodInfo *)local_38;
      EZhex1991_EZSoftBone_EZSoftBoneUtility__GetCapsuleParams
                (collider_00,(UnityEngine_Vector3_o *)pMVar16,(UnityEngine_Vector3_o *)local_48,
                 (float *)(local_58 + 0xc),in_R8);
      EZhex1991_EZSoftBone_EZSoftBoneUtility__PointOutsideCapsule
                (position,_local_38,_local_48,spacing + fVar23 + 0.0,pMVar16);
      return;
    }
  }
  pUVar14 = EZhex1991_EZSoftBone_EZSoftBoneCollider__get_referenceCollider(__this,pMVar16);
  if (pUVar14 != (UnityEngine_Collider_o *)0x0) {
    bVar5 = (TypeInfo_BoxCollider->_2).naturalAligment;
    if ((bVar5 <= (pUVar14->klass->_2).naturalAligment) &&
       ((pUVar14->klass->_2).typeHierarchy[(ulong)bVar5 - 1] == TypeInfo_BoxCollider)) {
      pUVar14 = EZhex1991_EZSoftBone_EZSoftBoneCollider__get_referenceCollider(__this,pMVar16);
      if (pUVar14 == (UnityEngine_Collider_o *)0x0) {
        collider = (UnityEngine_BoxCollider_o *)0x0;
        cVar6 = (char)(__this->fields).m_InsideMode;
        fVar23 = (__this->fields).m_Margin;
        pMVar16 = extraout_RDX;
      }
      else {
        bVar5 = (TypeInfo_BoxCollider->_2).naturalAligment;
        pMVar16 = (MethodInfo *)(ulong)bVar5;
        if ((pUVar14->klass->_2).naturalAligment < bVar5) {
          collider = (UnityEngine_BoxCollider_o *)0x0;
          cVar6 = (char)(__this->fields).m_InsideMode;
          fVar23 = (__this->fields).m_Margin;
        }
        else {
          collider = (UnityEngine_BoxCollider_o *)0x0;
          if ((pUVar14->klass->_2).typeHierarchy[(long)&pMVar16[-1].field_0x57] == TypeInfo_BoxCollider) {
            collider = (UnityEngine_BoxCollider_o *)pUVar14;
          }
          cVar6 = (char)(__this->fields).m_InsideMode;
          fVar23 = (__this->fields).m_Margin;
        }
      }
      if (cVar6 != '\0') {
        EZhex1991_EZSoftBone_EZSoftBoneUtility__PointInsideBox
                  (position,collider,spacing + fVar23,pMVar16);
        return;
      }
      EZhex1991_EZSoftBone_EZSoftBoneUtility__PointOutsideBox
                (position,collider,spacing + fVar23,pMVar16);
      return;
    }
  }
  pUVar14 = EZhex1991_EZSoftBone_EZSoftBoneCollider__get_referenceCollider(__this,pMVar16);
  if (pUVar14 == (UnityEngine_Collider_o *)0x0) {
    return;
  }
  bVar5 = (TypeInfo_MeshCollider->_2).naturalAligment;
  if ((pUVar14->klass->_2).naturalAligment < bVar5) {
    return;
  }
  if ((pUVar14->klass->_2).typeHierarchy[(ulong)bVar5 - 1] != TypeInfo_MeshCollider) {
    return;
  }
  pUVar14 = EZhex1991_EZSoftBone_EZSoftBoneCollider__get_referenceCollider(__this,pMVar16);
  if (pUVar14 != (UnityEngine_Collider_o *)0x0) {
    bVar5 = (TypeInfo_MeshCollider->_2).naturalAligment;
    if (bVar5 <= (pUVar14->klass->_2).naturalAligment) {
      __this_00 = (UnityEngine_MeshCollider_o *)0x0;
      if ((pUVar14->klass->_2).typeHierarchy[(ulong)bVar5 - 1] == TypeInfo_MeshCollider) {
        __this_00 = (UnityEngine_MeshCollider_o *)pUVar14;
      }
      goto joined_r0x024587f1;
    }
  }
  __this_00 = (UnityEngine_MeshCollider_o *)0x0;
joined_r0x024587f1:
  if (DAT_056fe06c == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_056fe06c = '\x01';
  }
  if (__this_00 == (UnityEngine_MeshCollider_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  x = (UnityEngine_Object_o *)UnityEngine_MeshCollider__get_sharedMesh(__this_00,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar13 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar13 != '\0') {
    pMVar16 = (MethodInfo *)0x0;
    bVar13 = UnityEngine_MeshCollider__get_convex(__this_00,(MethodInfo *)0x0);
    if ((char)bVar13 != '\0') {
      if ((char)(__this->fields).m_InsideMode == '\0') {
        pUVar14 = EZhex1991_EZSoftBone_EZSoftBoneCollider__get_referenceCollider(__this,pMVar16);
        EZhex1991_EZSoftBone_EZSoftBoneUtility__PointOutsideCollider
                  (position,pUVar14,spacing + (__this->fields).m_Margin,method_00);
        return;
      }
      if (*(int *)(TypeInfo_Debug + 0xe4) == 0) {
        il2cpp_init_class();
      }
      UnityEngine_Debug__LogError("Inside Mode On Mesh Collider is not supported",(UnityEngine_Object_o *)__this,(MethodInfo *)0x0);
      *(undefined1 *)&(__this->fields).m_InsideMode = 0;
      return;
    }
  }
  if (*(int *)(TypeInfo_Debug + 0xe4) == 0) {
    il2cpp_init_class();
  }
  UnityEngine_Debug__LogError("Non-Convex Mesh Collider is not supported",(UnityEngine_Object_o *)__this,(MethodInfo *)0x0);
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)__this,0,(MethodInfo *)0x0);
  return;
}


// EZhex1991.EZSoftBone.EZSoftBoneCollider$$CheckConvex
// il2cpp: bool EZhex1991_EZSoftBone_EZSoftBoneCollider__CheckConvex (EZhex1991_EZSoftBone_EZSoftBoneCollider_o* __this, UnityEngine_MeshCollider_o* meshCollider, const MethodInfo* method);
// 0x2459820

bool_conflict
EZhex1991_EZSoftBone_EZSoftBoneCollider__CheckConvex
          (EZhex1991_EZSoftBone_EZSoftBoneCollider_o *__this,
          UnityEngine_MeshCollider_o *meshCollider,MethodInfo *method)

{
  bool_conflict bVar1;
  UnityEngine_Object_o *x;
  
  if (DAT_056fe06c == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_056fe06c = '\x01';
  }
  if (meshCollider == (UnityEngine_MeshCollider_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  x = (UnityEngine_Object_o *)
      UnityEngine_MeshCollider__get_sharedMesh(meshCollider,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar1 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    bVar1 = UnityEngine_MeshCollider__get_convex(meshCollider,(MethodInfo *)0x0);
    return bVar1;
  }
  return 0;
}


// EZhex1991.EZSoftBone.EZSoftBoneCollider$$Reset
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBoneCollider__Reset (EZhex1991_EZSoftBone_EZSoftBoneCollider_o* __this, const MethodInfo* method);
// 0x24598a0

void EZhex1991_EZSoftBone_EZSoftBoneCollider__Reset
               (EZhex1991_EZSoftBone_EZSoftBoneCollider_o *__this,MethodInfo *method)

{
  UnityEngine_Collider_o *pUVar1;
  
  if (DAT_056fe06d == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Collider_GetComponent_Collider);
    DAT_056fe06d = '\x01';
  }
  pUVar1 = (UnityEngine_Collider_o *)
           UnityEngine_Component__GetComponent<object>
                     ((UnityEngine_Component_o *)__this,MethodInfo_Collider_GetComponent_Collider);
  (__this->fields).m_ReferenceCollider = pUVar1;
  il2cpp_runtime_glue(&(__this->fields).m_ReferenceCollider,pUVar1);
  return;
}


// EZhex1991.EZSoftBone.EZSoftBoneCollider$$.ctor
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBoneCollider___ctor (EZhex1991_EZSoftBone_EZSoftBoneCollider_o* __this, const MethodInfo* method);
// 0x24598f0

void EZhex1991_EZSoftBone_EZSoftBoneCollider___ctor
               (EZhex1991_EZSoftBone_EZSoftBoneCollider_o *__this,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_056fe06e == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_EZSoftBoneColliderBase);
    DAT_056fe06e = '\x01';
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


