// Type: EZhex1991.EZSoftBone.EZSoftBoneCollider
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/EZhex1991.EZSoftBone/EZhex1991.EZSoftBone/EZSoftBoneCollider.cs
// Prior real C# source (older reference): Assets/ThirdParty/EZhex1991/EZSoftBone/Runtime/EZSoftBoneCollider.cs
// --------------------------------

// EZhex1991.EZSoftBone.EZSoftBoneCollider$$get_referenceCollider
// il2cpp: UnityEngine_Collider_o* EZhex1991_EZSoftBone_EZSoftBoneCollider__get_referenceCollider (EZhex1991_EZSoftBone_EZSoftBoneCollider_o* __this, const MethodInfo* method);
// 0x2496690

UnityEngine_Collider_o *
EZhex1991_EZSoftBone_EZSoftBoneCollider__get_referenceCollider
          (EZhex1991_EZSoftBone_EZSoftBoneCollider_o *__this,MethodInfo *method)

{
  UnityEngine_Collider_o **ppUVar1;
  UnityEngine_Object_o *x;
  bool_conflict bVar2;
  UnityEngine_Collider_o *pUVar3;
  
  if (g_data_057a6925 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Collider_GetComponent_Collider);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057a6925 = '\x01';
  }
  x = (UnityEngine_Object_o *)(__this->fields).m_ReferenceCollider;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  ppUVar1 = &(__this->fields).m_ReferenceCollider;
  bVar2 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    pUVar3 = (UnityEngine_Collider_o *)
             UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)__this,MethodInfo_Collider_GetComponent_Collider);
    (__this->fields).m_ReferenceCollider = pUVar3;
    il2cpp_runtime_helper_022b4080(ppUVar1,pUVar3);
  }
  return *ppUVar1;
}


// EZhex1991.EZSoftBone.EZSoftBoneCollider$$get_margin
// il2cpp: float EZhex1991_EZSoftBone_EZSoftBoneCollider__get_margin (EZhex1991_EZSoftBone_EZSoftBoneCollider_o* __this, const MethodInfo* method);
// 0x2496720

float EZhex1991_EZSoftBone_EZSoftBoneCollider__get_margin
                (EZhex1991_EZSoftBone_EZSoftBoneCollider_o *__this,MethodInfo *method)

{
  return (__this->fields).m_Margin;
}


// EZhex1991.EZSoftBone.EZSoftBoneCollider$$set_margin
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBoneCollider__set_margin (EZhex1991_EZSoftBone_EZSoftBoneCollider_o* __this, float value, const MethodInfo* method);
// 0x2496730

void EZhex1991_EZSoftBone_EZSoftBoneCollider__set_margin
               (EZhex1991_EZSoftBone_EZSoftBoneCollider_o *__this,float value,MethodInfo *method)

{
  (__this->fields).m_Margin = value;
  return;
}


// EZhex1991.EZSoftBone.EZSoftBoneCollider$$get_insideMode
// il2cpp: bool EZhex1991_EZSoftBone_EZSoftBoneCollider__get_insideMode (EZhex1991_EZSoftBone_EZSoftBoneCollider_o* __this, const MethodInfo* method);
// 0x2496740

bool_conflict
EZhex1991_EZSoftBone_EZSoftBoneCollider__get_insideMode
          (EZhex1991_EZSoftBone_EZSoftBoneCollider_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),(char)(__this->fields).m_InsideMode);
}


// EZhex1991.EZSoftBone.EZSoftBoneCollider$$set_insideMode
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBoneCollider__set_insideMode (EZhex1991_EZSoftBone_EZSoftBoneCollider_o* __this, bool value, const MethodInfo* method);
// 0x2496750

void EZhex1991_EZSoftBone_EZSoftBoneCollider__set_insideMode
               (EZhex1991_EZSoftBone_EZSoftBoneCollider_o *__this,bool_conflict value,MethodInfo *method)

{
  *(char *)&(__this->fields).m_InsideMode = (char)value;
  return;
}


// EZhex1991.EZSoftBone.EZSoftBoneCollider$$Collide
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBoneCollider__Collide (EZhex1991_EZSoftBone_EZSoftBoneCollider_o* __this, UnityEngine_Vector3_o* position, float spacing, const MethodInfo* method);
// 0x2496760

void EZhex1991_EZSoftBone_EZSoftBoneCollider__Collide
               (EZhex1991_EZSoftBone_EZSoftBoneCollider_o *__this,UnityEngine_Vector3_o *position,
               float spacing,MethodInfo *method)

{
  void *pvVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  bool_conflict bVar13;
  UnityEngine_Collider_o *pUVar14;
  UnityEngine_Object_o *pUVar15;
  UnityEngine_Transform_o *pUVar16;
  Il2CppObject *pIVar17;
  MethodInfo *extraout_RDX;
  MethodInfo *pMVar18;
  MethodInfo *method_00;
  UnityEngine_Collider_c *unaff_RBX;
  UnityEngine_Collider_c *method_01;
  UnityEngine_BoxCollider_o *collider;
  UnityEngine_Collider_c *pUVar19;
  UnityEngine_CapsuleCollider_o *pUVar20;
  UnityEngine_MeshCollider_o *pUVar21;
  UnityEngine_Collider_c *pUVar22;
  UnityEngine_BoxCollider_o *__this_00;
  MethodInfo *in_R8;
  UnityEngine_Collider_c *unaff_R14;
  undefined8 unaff_R15;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined4 extraout_XMM0_Db;
  float fVar27;
  undefined4 extraout_XMM0_Db_00;
  float fVar28;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dc_00;
  undefined4 uVar29;
  undefined4 extraout_XMM0_Dc_01;
  undefined4 extraout_XMM0_Dc_02;
  undefined4 extraout_XMM0_Dc_03;
  float extraout_XMM0_Dc_04;
  float fVar30;
  undefined4 extraout_XMM0_Dc_05;
  float extraout_XMM0_Dc_06;
  undefined4 extraout_XMM0_Dc_07;
  undefined4 extraout_XMM0_Dc_08;
  undefined4 extraout_XMM0_Dd;
  undefined4 extraout_XMM0_Dd_00;
  undefined4 uVar31;
  undefined4 extraout_XMM0_Dd_01;
  undefined4 extraout_XMM0_Dd_02;
  undefined4 extraout_XMM0_Dd_03;
  float extraout_XMM0_Dd_04;
  float fVar32;
  undefined4 extraout_XMM0_Dd_05;
  float extraout_XMM0_Dd_06;
  undefined4 extraout_XMM0_Dd_07;
  undefined4 extraout_XMM0_Dd_08;
  undefined8 extraout_XMM1_Qa;
  undefined1 in_XMM1 [16];
  undefined8 uVar33;
  undefined8 extraout_XMM1_Qa_00;
  undefined8 extraout_XMM1_Qb;
  undefined8 extraout_XMM1_Qb_00;
  undefined1 auVar34 [16];
  float fVar35;
  undefined4 uVar36;
  float fVar37;
  float fVar38;
  undefined1 auVar40 [16];
  UnityEngine_Vector3_o UVar41;
  UnityEngine_Vector3_o UVar42;
  UnityEngine_Vector3_o UVar43;
  float fStack_88;
  float fStack_78;
  float fStack_74;
  float fStack_68;
  float fStack_64;
  float fStack_58;
  float fStack_54;
  float local_50;
  float local_4c;
  undefined1 local_48 [8];
  ulong local_40;
  undefined1 local_38 [8];
  undefined8 local_30;
  undefined8 uVar39;
  
  method_01 = (UnityEngine_Collider_c *)position;
  local_50 = spacing;
  if (g_data_057a6926 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BoxCollider);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CapsuleCollider);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Debug);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MeshCollider);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SphereCollider);
    il2cpp_runtime_helper_023445d0(&"Inside Mode On Mesh Collider is not supported");
    il2cpp_runtime_helper_023445d0(&"Non-Convex Mesh Collider is not supported");
    in_XMM1._8_8_ = extraout_XMM1_Qb;
    in_XMM1._0_8_ = extraout_XMM1_Qa;
    g_data_057a6926 = '\x01';
  }
  pUVar14 = EZhex1991_EZSoftBone_EZSoftBoneCollider__get_referenceCollider(__this,(MethodInfo *)method_01);
  if (pUVar14 == (UnityEngine_Collider_o *)0x0) {
label_02496818:
    pUVar14 = EZhex1991_EZSoftBone_EZSoftBoneCollider__get_referenceCollider(__this,(MethodInfo *)method_01);
    if (pUVar14 != (UnityEngine_Collider_o *)0x0) {
      bVar2 = (TypeInfo_CapsuleCollider->_2).naturalAligment;
      if ((bVar2 <= (pUVar14->klass->_2).naturalAligment) &&
         ((pUVar14->klass->_2).typeHierarchy[(ulong)bVar2 - 1] == TypeInfo_CapsuleCollider)) {
        pUVar14 = EZhex1991_EZSoftBone_EZSoftBoneCollider__get_referenceCollider
                            (__this,(MethodInfo *)method_01);
        if (pUVar14 == (UnityEngine_Collider_o *)0x0) {
          pUVar20 = (UnityEngine_CapsuleCollider_o *)0x0;
          cVar3 = (char)(__this->fields).m_InsideMode;
          fVar23 = (__this->fields).m_Margin;
        }
        else {
          bVar2 = (TypeInfo_CapsuleCollider->_2).naturalAligment;
          if ((pUVar14->klass->_2).naturalAligment < bVar2) {
            pUVar20 = (UnityEngine_CapsuleCollider_o *)0x0;
            cVar3 = (char)(__this->fields).m_InsideMode;
            fVar23 = (__this->fields).m_Margin;
          }
          else {
            pUVar20 = (UnityEngine_CapsuleCollider_o *)0x0;
            if ((pUVar14->klass->_2).typeHierarchy[(ulong)bVar2 - 1] == TypeInfo_CapsuleCollider) {
              pUVar20 = (UnityEngine_CapsuleCollider_o *)pUVar14;
            }
            cVar3 = (char)(__this->fields).m_InsideMode;
            fVar23 = (__this->fields).m_Margin;
          }
        }
        local_50 = local_50 + fVar23;
        if (cVar3 != '\0') {
          local_30._0_4_ = 0.0;
          auVar10._8_8_ = 0;
          auVar10._0_8_ = local_30;
          _local_38 = auVar10 << 0x40;
          local_40._0_4_ = 0.0;
          auVar11._8_8_ = 0;
          auVar11._0_8_ = local_40;
          _local_48 = auVar11 << 0x40;
          local_4c = 0.0;
          pMVar18 = (MethodInfo *)local_38;
          EZhex1991_EZSoftBone_EZSoftBoneUtility__GetCapsuleParams
                    (pUVar20,(UnityEngine_Vector3_o *)pMVar18,(UnityEngine_Vector3_o *)local_48,&local_4c,
                     in_R8);
          EZhex1991_EZSoftBone_EZSoftBoneUtility__PointInsideCapsule_2399400
                    (position,_local_38,_local_48,local_4c - local_50,pMVar18);
          return;
        }
        local_30._0_4_ = 0.0;
        auVar40._8_8_ = 0;
        auVar40._0_8_ = local_30;
        _local_38 = auVar40 << 0x40;
        local_40._0_4_ = 0.0;
        auVar12._8_8_ = 0;
        auVar12._0_8_ = local_40;
        _local_48 = auVar12 << 0x40;
        local_4c = 0.0;
        pMVar18 = (MethodInfo *)local_38;
        EZhex1991_EZSoftBone_EZSoftBoneUtility__GetCapsuleParams
                  (pUVar20,(UnityEngine_Vector3_o *)pMVar18,(UnityEngine_Vector3_o *)local_48,&local_4c,in_R8)
        ;
        EZhex1991_EZSoftBone_EZSoftBoneUtility__PointOutsideCapsule_2398c80
                  (position,_local_38,_local_48,local_50 + local_4c,pMVar18);
        return;
      }
    }
    pUVar14 = EZhex1991_EZSoftBone_EZSoftBoneCollider__get_referenceCollider(__this,(MethodInfo *)method_01);
    if (pUVar14 != (UnityEngine_Collider_o *)0x0) {
      bVar2 = (TypeInfo_BoxCollider->_2).naturalAligment;
      if ((bVar2 <= (pUVar14->klass->_2).naturalAligment) &&
         ((pUVar14->klass->_2).typeHierarchy[(ulong)bVar2 - 1] == TypeInfo_BoxCollider)) {
        pUVar14 = EZhex1991_EZSoftBone_EZSoftBoneCollider__get_referenceCollider
                            (__this,(MethodInfo *)method_01);
        if (pUVar14 == (UnityEngine_Collider_o *)0x0) {
          collider = (UnityEngine_BoxCollider_o *)0x0;
          cVar3 = (char)(__this->fields).m_InsideMode;
          fVar23 = (__this->fields).m_Margin;
          pMVar18 = extraout_RDX;
        }
        else {
          bVar2 = (TypeInfo_BoxCollider->_2).naturalAligment;
          pMVar18 = (MethodInfo *)(ulong)bVar2;
          if ((pUVar14->klass->_2).naturalAligment < bVar2) {
            collider = (UnityEngine_BoxCollider_o *)0x0;
            cVar3 = (char)(__this->fields).m_InsideMode;
            fVar23 = (__this->fields).m_Margin;
          }
          else {
            collider = (UnityEngine_BoxCollider_o *)0x0;
            if ((pUVar14->klass->_2).typeHierarchy[(long)&pMVar18[-1].field_0x57] == TypeInfo_BoxCollider) {
              collider = (UnityEngine_BoxCollider_o *)pUVar14;
            }
            cVar3 = (char)(__this->fields).m_InsideMode;
            fVar23 = (__this->fields).m_Margin;
          }
        }
        fVar23 = local_50 + fVar23;
        if (cVar3 != '\0') {
          EZhex1991_EZSoftBone_EZSoftBoneUtility__PointInsideBox(position,collider,fVar23,pMVar18);
          return;
        }
        pUVar21 = (UnityEngine_MeshCollider_o *)0x0;
        __this_00 = (UnityEngine_BoxCollider_o *)position;
        if (collider == (UnityEngine_BoxCollider_o *)0x0) goto label_0249791c;
        pUVar21 = (UnityEngine_MeshCollider_o *)0x0;
        __this_00 = collider;
        pUVar16 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)collider,(MethodInfo *)0x0);
        if (pUVar16 == (UnityEngine_Transform_o *)0x0) goto label_0249791c;
        fVar25 = 0.0;
        fVar27 = 0.0;
        fVar38 = 0.0;
        UVar41 = UnityEngine_Transform__InverseTransformPoint(pUVar16,position->fields,(MethodInfo *)0x0);
        fStack_58 = UVar41.fields.z;
        fStack_54 = fVar25;
        local_50 = fVar27;
        local_4c = fVar38;
        UVar42 = UnityEngine_BoxCollider__get_center(collider,(MethodInfo *)0x0);
        local_30._0_4_ = (float)extraout_XMM0_Dc_07;
        local_38 = (undefined1  [8])UVar42.fields._0_8_;
        local_30._4_4_ = (float)extraout_XMM0_Dd_07;
        UVar43 = UnityEngine_BoxCollider__get_size(collider,(MethodInfo *)0x0);
        local_40._0_4_ = extraout_XMM0_Dc_08;
        local_48 = (undefined1  [8])UVar43.fields._0_8_;
        local_40._4_4_ = extraout_XMM0_Dd_08;
        pUVar21 = (UnityEngine_MeshCollider_o *)0x0;
        __this_00 = collider;
        pUVar16 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)collider,(MethodInfo *)0x0);
        if (g_data_057a6932 == '\0') {
          __this_00 = (UnityEngine_BoxCollider_o *)&TypeInfo_Vector3;
          il2cpp_runtime_helper_023445d0();
          g_data_057a6932 = '\x01';
        }
        if (pUVar16 == (UnityEngine_Transform_o *)0x0) goto label_0249791c;
        fStack_68 = UVar41.fields.x;
        fStack_64 = UVar41.fields.y;
        fStack_74 = fStack_64 - (float)local_38._4_4_;
        fStack_78 = fStack_68 - (float)local_38._0_4_;
        fStack_54 = fStack_58 - UVar42.fields.z;
        local_50 = extraout_XMM0_Dc_06 - (float)local_30;
        local_4c = extraout_XMM0_Dd_06 - local_30._4_4_;
        fVar25 = ABS((float)local_48._0_4_);
        uVar33 = *(undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0xc);
        UVar41.fields.x = fVar23 * (float)uVar33;
        UVar41.fields.y = fVar23 * (float)((ulong)uVar33 >> 0x20);
        UVar41.fields.z = fVar23 * *(float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x14);
        fStack_58 = fStack_78;
        UVar41 = UnityEngine_Transform__InverseTransformVector(pUVar16,UVar41,(MethodInfo *)0x0);
        fVar23 = ABS(UVar41.fields.x) + fVar25 * 0.5;
        fStack_88 = ABS(UVar41.fields.z) + ABS(UVar43.fields.z) * 0.5;
        if ((fVar23 <= ABS(fStack_58)) || (fStack_88 <= ABS(fStack_54))) {
label_0249786d:
          fStack_88 = fStack_54;
        }
        else {
          fVar25 = ABS(UVar41.fields.y) + ABS((float)local_48._4_4_) * 0.5;
          if (fVar25 <= ABS(fStack_74)) goto label_0249786d;
          fVar37 = ABS(ABS(fStack_74) - fVar25);
          fVar27 = ABS(ABS(fStack_58) - fVar23);
          fVar38 = ABS(ABS(fStack_54) - fStack_88);
          if (fVar37 <= fVar27) {
            if (fVar38 <= fVar37) goto label_024978fc;
            fStack_88 = fStack_54;
            fStack_74 = fVar25 * *(float *)(&g_data_00d1d580 + (ulong)(0.0 <= fStack_74) * 4);
          }
          else if (fVar38 <= fVar27) {
label_024978fc:
            fStack_88 = fStack_88 * *(float *)(&g_data_00d1d580 + (ulong)(0.0 <= fStack_54) * 4);
          }
          else {
            fStack_88 = fStack_54;
            fStack_78 = fVar23 * *(float *)(&g_data_00d1d580 + (ulong)(0.0 <= fStack_58) * 4);
          }
        }
        pUVar16 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)collider,(MethodInfo *)0x0);
        pUVar21 = (UnityEngine_MeshCollider_o *)0x0;
        UVar41 = UnityEngine_BoxCollider__get_center(collider,(MethodInfo *)0x0);
        __this_00 = collider;
        if (pUVar16 != (UnityEngine_Transform_o *)0x0) {
          UVar42.fields.y = fStack_74 + UVar41.fields.y;
          UVar42.fields.x = fStack_78 + UVar41.fields.x;
          UVar42.fields.z = fStack_88 + UVar41.fields.z;
          UVar41 = UnityEngine_Transform__TransformPoint(pUVar16,UVar42,(MethodInfo *)0x0);
          (position->fields).x = (float)(int)UVar41.fields._0_8_;
          (position->fields).y = (float)(int)((ulong)UVar41.fields._0_8_ >> 0x20);
          (position->fields).z = UVar41.fields.z;
          return;
        }
label_0249791c:
        il2cpp_runtime_helper_022b2c90();
        if (g_data_057a6927 == '\0') {
          __this_00 = (UnityEngine_BoxCollider_o *)&TypeInfo_Object;
          il2cpp_runtime_helper_023445d0();
          g_data_057a6927 = '\x01';
        }
        if (pUVar21 == (UnityEngine_MeshCollider_o *)0x0) {
          il2cpp_runtime_helper_022b2c90();
          if (g_data_057a6928 == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Collider_GetComponent_Collider);
            g_data_057a6928 = '\x01';
          }
          pIVar17 = UnityEngine_Component__GetComponent_object_
                              ((UnityEngine_Component_o *)__this_00,MethodInfo_Collider_GetComponent_Collider);
          ((UnityEngine_Component_o *)(__this_00 + 1))->monitor = pIVar17;
          il2cpp_runtime_helper_022b4080(&((UnityEngine_Component_o *)(__this_00 + 1))->monitor,pIVar17);
          return;
        }
        pUVar15 = (UnityEngine_Object_o *)UnityEngine_MeshCollider__get_sharedMesh(pUVar21,(MethodInfo *)0x0);
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        bVar13 = UnityEngine_Object__op_Inequality(pUVar15,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar13 != '\0') {
          UnityEngine_MeshCollider__get_convex(pUVar21,(MethodInfo *)0x0);
          return;
        }
        return;
      }
    }
    pUVar14 = EZhex1991_EZSoftBone_EZSoftBoneCollider__get_referenceCollider(__this,(MethodInfo *)method_01);
    if (pUVar14 == (UnityEngine_Collider_o *)0x0) {
      return;
    }
    unaff_RBX = (UnityEngine_Collider_c *)&TypeInfo_MeshCollider;
    bVar2 = (TypeInfo_MeshCollider->_2).naturalAligment;
    if ((pUVar14->klass->_2).naturalAligment < bVar2) {
      return;
    }
    if ((pUVar14->klass->_2).typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_MeshCollider) {
      return;
    }
    pUVar22 = (UnityEngine_Collider_c *)__this;
    pUVar14 = EZhex1991_EZSoftBone_EZSoftBoneCollider__get_referenceCollider(__this,(MethodInfo *)method_01);
    if (pUVar14 == (UnityEngine_Collider_o *)0x0) {
label_024968f7:
      pUVar21 = (UnityEngine_MeshCollider_o *)0x0;
    }
    else {
      method_01 = pUVar14->klass;
      bVar2 = (TypeInfo_MeshCollider->_2).naturalAligment;
      if ((method_01->_2).naturalAligment < bVar2) goto label_024968f7;
      method_01 = (UnityEngine_Collider_c *)(method_01->_2).typeHierarchy;
      pUVar21 = (UnityEngine_MeshCollider_o *)0x0;
      if (*(Il2CppClass **)((long)method_01 + (ulong)bVar2 * 8 + -8) == TypeInfo_MeshCollider) {
        pUVar21 = (UnityEngine_MeshCollider_o *)pUVar14;
      }
    }
    if (g_data_057a6927 == '\0') {
      pUVar22 = (UnityEngine_Collider_c *)&TypeInfo_Object;
      il2cpp_runtime_helper_023445d0();
      g_data_057a6927 = '\x01';
    }
    if (pUVar21 != (UnityEngine_MeshCollider_o *)0x0) {
      pUVar15 = (UnityEngine_Object_o *)UnityEngine_MeshCollider__get_sharedMesh(pUVar21,(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar13 = UnityEngine_Object__op_Inequality(pUVar15,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar13 != '\0') {
        pMVar18 = (MethodInfo *)0x0;
        bVar13 = UnityEngine_MeshCollider__get_convex(pUVar21,(MethodInfo *)0x0);
        if ((char)bVar13 != '\0') {
          if ((char)(__this->fields).m_InsideMode == '\0') {
            pUVar14 = EZhex1991_EZSoftBone_EZSoftBoneCollider__get_referenceCollider(__this,pMVar18);
            EZhex1991_EZSoftBone_EZSoftBoneUtility__PointOutsideCollider
                      (position,pUVar14,local_50 + (__this->fields).m_Margin,method_00);
            return;
          }
          if (*(int *)(TypeInfo_Debug + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          UnityEngine_Debug__LogError_4db7510("Inside Mode On Mesh Collider is not supported",(UnityEngine_Object_o *)__this,(MethodInfo *)0x0);
          *(undefined1 *)&(__this->fields).m_InsideMode = 0;
          return;
        }
      }
      if (*(int *)(TypeInfo_Debug + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      UnityEngine_Debug__LogError_4db7510("Non-Convex Mesh Collider is not supported",(UnityEngine_Object_o *)__this,(MethodInfo *)0x0);
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)__this,0,(MethodInfo *)0x0);
      return;
    }
    fVar23 = (float)il2cpp_runtime_helper_022b2c90();
    unaff_R15 = 0;
    register0x00000020 = (BADSPACEBASE *)&fStack_58;
    unaff_R14 = (UnityEngine_Collider_c *)position;
  }
  else {
    bVar2 = (TypeInfo_SphereCollider->_2).naturalAligment;
    if (((pUVar14->klass->_2).naturalAligment < bVar2) ||
       ((pUVar14->klass->_2).typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_SphereCollider)) goto label_02496818;
    pUVar22 = (UnityEngine_Collider_c *)
              EZhex1991_EZSoftBone_EZSoftBoneCollider__get_referenceCollider(__this,(MethodInfo *)method_01);
    if (pUVar22 == (UnityEngine_Collider_c *)0x0) {
      method_01 = (UnityEngine_Collider_c *)0x0;
      cVar3 = (char)(__this->fields).m_InsideMode;
      fVar23 = (__this->fields).m_Margin;
    }
    else {
      pvVar1 = (pUVar22->_1).image;
      bVar2 = (TypeInfo_SphereCollider->_2).naturalAligment;
      if (*(byte *)((long)pvVar1 + 0x130) < bVar2) {
        method_01 = (UnityEngine_Collider_c *)0x0;
        cVar3 = (char)(__this->fields).m_InsideMode;
        fVar23 = (__this->fields).m_Margin;
      }
      else {
        method_01 = (UnityEngine_Collider_c *)0x0;
        if (*(Il2CppClass **)(*(long *)((long)pvVar1 + 200) + -8 + (ulong)bVar2 * 8) == TypeInfo_SphereCollider) {
          method_01 = pUVar22;
        }
        cVar3 = (char)(__this->fields).m_InsideMode;
        fVar23 = (__this->fields).m_Margin;
      }
    }
    fVar23 = local_50 + fVar23;
    pUVar22 = (UnityEngine_Collider_c *)position;
    if (cVar3 == '\0') goto EZhex1991_EZSoftBone_EZSoftBoneUtility__PointOutsideSphere;
  }
  *(undefined8 *)((long)register0x00000020 + -8) = unaff_R15;
  *(UnityEngine_Collider_c **)((long)register0x00000020 + -0x10) = unaff_R14;
  *(UnityEngine_Collider_c **)((long)register0x00000020 + -0x18) = unaff_RBX;
  *(float *)((long)register0x00000020 + -0x54) = fVar23;
  pUVar19 = method_01;
  position = (UnityEngine_Vector3_o *)pUVar22;
  if (method_01 != (UnityEngine_Collider_c *)0x0) {
    *(undefined8 *)((long)register0x00000020 + -0x60) = 0x2496d58;
    pUVar16 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)method_01,(MethodInfo *)0x0);
    pUVar19 = (UnityEngine_Collider_c *)0x0;
    *(undefined8 *)((long)register0x00000020 + -0x60) = 0x2496d65;
    position = (UnityEngine_Vector3_o *)method_01;
    UVar41 = UnityEngine_SphereCollider__get_center
                       ((UnityEngine_SphereCollider_o *)method_01,(MethodInfo *)0x0);
    unaff_R15 = 0;
    unaff_RBX = method_01;
    unaff_R14 = pUVar22;
    if (pUVar16 != (UnityEngine_Transform_o *)0x0) {
      *(undefined8 *)((long)register0x00000020 + -0x60) = 0x2496d78;
      UVar41 = UnityEngine_Transform__TransformPoint(pUVar16,UVar41,(MethodInfo *)0x0);
      auVar5._8_4_ = extraout_XMM0_Dc;
      auVar5._0_8_ = UVar41.fields._0_8_;
      auVar5._12_4_ = extraout_XMM0_Dd;
      *(undefined1 (*) [16])((long)register0x00000020 + -0x28) = auVar5;
      *(float *)((long)register0x00000020 + -0x4c) = UVar41.fields.z;
      *(undefined8 *)((long)register0x00000020 + -0x60) = 0x2496d8d;
      fVar24 = UnityEngine_SphereCollider__get_radius
                         ((UnityEngine_SphereCollider_o *)method_01,(MethodInfo *)0x0);
      pvVar1 = (pUVar22->_1).image;
      fVar25 = SUB84(pvVar1,0);
      fVar27 = (float)((ulong)pvVar1 >> 0x20);
      fVar38 = 0.0;
      fVar37 = 0.0;
      fVar23 = *(float *)&(pUVar22->_1).gc_desc;
      uVar29 = extraout_XMM0_Db;
      uVar31 = extraout_XMM0_Dc_00;
      uVar36 = extraout_XMM0_Dd_00;
      if (g_data_057a6841 == '\0') {
        *(float *)((long)register0x00000020 + -0x48) = fVar24;
        *(undefined4 *)((long)register0x00000020 + -0x44) = extraout_XMM0_Db;
        *(undefined4 *)((long)register0x00000020 + -0x40) = extraout_XMM0_Dc_00;
        *(undefined4 *)((long)register0x00000020 + -0x3c) = extraout_XMM0_Dd_00;
        *(float *)((long)register0x00000020 + -0x50) = fVar23;
        *(void **)((long)register0x00000020 + -0x38) = pvVar1;
        *(undefined8 *)((long)register0x00000020 + -0x30) = 0;
        *(undefined8 *)((long)register0x00000020 + -0x60) = 0x2496dc0;
        il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
        fVar25 = *(float *)((long)register0x00000020 + -0x38);
        fVar27 = *(float *)((long)register0x00000020 + -0x34);
        fVar38 = *(float *)((long)register0x00000020 + -0x30);
        fVar37 = *(float *)((long)register0x00000020 + -0x2c);
        fVar23 = *(float *)((long)register0x00000020 + -0x50);
        fVar24 = *(float *)((long)register0x00000020 + -0x48);
        uVar29 = *(undefined4 *)((long)register0x00000020 + -0x44);
        uVar31 = *(undefined4 *)((long)register0x00000020 + -0x40);
        uVar36 = *(undefined4 *)((long)register0x00000020 + -0x3c);
        g_data_057a6841 = '\x01';
      }
      fVar25 = fVar25 - *(float *)((long)register0x00000020 + -0x28);
      fVar27 = fVar27 - *(float *)((long)register0x00000020 + -0x24);
      fVar23 = fVar23 - *(float *)((long)register0x00000020 + -0x4c);
      iVar4 = *(int *)(TypeInfo_Math + 0xe4);
      *(float *)((long)register0x00000020 + -0x50) = fVar23;
      *(float *)((long)register0x00000020 + -0x38) = fVar25;
      *(float *)((long)register0x00000020 + -0x34) = fVar27;
      *(float *)((long)register0x00000020 + -0x30) = fVar38 - *(float *)((long)register0x00000020 + -0x20);
      *(float *)((long)register0x00000020 + -0x2c) = fVar37 - *(float *)((long)register0x00000020 + -0x1c);
      if (iVar4 == 0) {
        *(float *)((long)register0x00000020 + -0x48) = fVar24;
        *(undefined4 *)((long)register0x00000020 + -0x44) = uVar29;
        *(undefined4 *)((long)register0x00000020 + -0x40) = uVar31;
        *(undefined4 *)((long)register0x00000020 + -0x3c) = uVar36;
        *(undefined8 *)((long)register0x00000020 + -0x60) = 0x2496e0a;
        il2cpp_runtime_helper_02337ed0();
        fVar25 = *(float *)((long)register0x00000020 + -0x38);
        fVar27 = *(float *)((long)register0x00000020 + -0x34);
        fVar23 = *(float *)((long)register0x00000020 + -0x50);
        fVar24 = *(float *)((long)register0x00000020 + -0x48);
        uVar29 = *(undefined4 *)((long)register0x00000020 + -0x44);
        uVar31 = *(undefined4 *)((long)register0x00000020 + -0x40);
        uVar36 = *(undefined4 *)((long)register0x00000020 + -0x3c);
      }
      fVar24 = fVar24 - *(float *)((long)register0x00000020 + -0x54);
      fVar23 = fVar23 * fVar23 + fVar27 * fVar27 + fVar25 * fVar25;
      *(float *)((long)register0x00000020 + -0x48) = fVar24;
      *(undefined4 *)((long)register0x00000020 + -0x44) = uVar29;
      *(undefined4 *)((long)register0x00000020 + -0x40) = uVar31;
      *(undefined4 *)((long)register0x00000020 + -0x3c) = uVar36;
      if (fVar23 < 0.0) {
        *(float *)((long)register0x00000020 + -0x54) = fVar23;
        *(undefined8 *)((long)register0x00000020 + -0x60) = 0x2496e87;
        fVar25 = sqrtf(fVar23);
        fVar23 = *(float *)((long)register0x00000020 + -0x54);
        fVar24 = *(float *)((long)register0x00000020 + -0x48);
        if (fVar25 <= fVar24) {
          return;
        }
      }
      else if (SQRT(fVar23) <= fVar24) {
        return;
      }
      if (g_data_057a6845 == '\0') {
        *(float *)((long)register0x00000020 + -0x54) = fVar23;
        *(undefined8 *)((long)register0x00000020 + -0x60) = 0x2496eae;
        il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
        fVar23 = *(float *)((long)register0x00000020 + -0x54);
        fVar24 = *(float *)((long)register0x00000020 + -0x48);
        g_data_057a6845 = '\x01';
        iVar4 = *(int *)(TypeInfo_Math + 0xe4);
      }
      else {
        iVar4 = *(int *)(TypeInfo_Math + 0xe4);
      }
      if (iVar4 == 0) {
        *(float *)((long)register0x00000020 + -0x54) = fVar23;
        *(undefined8 *)((long)register0x00000020 + -0x60) = 0x2496ed7;
        il2cpp_runtime_helper_02337ed0();
        fVar23 = *(float *)((long)register0x00000020 + -0x54);
        fVar24 = *(float *)((long)register0x00000020 + -0x48);
      }
      if (fVar23 < 0.0) {
        *(undefined8 *)((long)register0x00000020 + -0x60) = 0x2496ef2;
        fVar23 = sqrtf(fVar23);
        fVar24 = *(float *)((long)register0x00000020 + -0x48);
        uVar29 = extraout_XMM0_Dc_01;
        uVar31 = extraout_XMM0_Dd_01;
      }
      else {
        uVar29 = 0;
        uVar31 = 0;
        fVar23 = SQRT(fVar23);
      }
      uVar33 = *(undefined8 *)((long)register0x00000020 + -0x28);
      fVar25 = *(float *)((long)register0x00000020 + -0x4c);
      if (fVar23 <= 1e-05) {
        if (g_data_057a65d5 == '\0') {
          *(undefined8 *)((long)register0x00000020 + -0x60) = 0x2496f38;
          il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
          fVar24 = *(float *)((long)register0x00000020 + -0x48);
          fVar25 = *(float *)((long)register0x00000020 + -0x4c);
          uVar33 = *(undefined8 *)((long)register0x00000020 + -0x28);
          g_data_057a65d5 = '\x01';
        }
        uVar39 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
        fVar27 = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
      }
      else {
        fVar27 = *(float *)((long)register0x00000020 + -0x50) / fVar23;
        auVar6._4_4_ = fVar23;
        auVar6._0_4_ = fVar23;
        auVar6._8_4_ = uVar29;
        auVar6._12_4_ = uVar31;
        auVar40 = divps(*(undefined1 (*) [16])((long)register0x00000020 + -0x38),auVar6);
        uVar39 = auVar40._0_8_;
      }
      (pUVar22->_1).image =
           (void *)CONCAT44((float)((ulong)uVar33 >> 0x20) + fVar24 * (float)((ulong)uVar39 >> 0x20),
                            (float)uVar33 + fVar24 * (float)uVar39);
      *(float *)&(pUVar22->_1).gc_desc = fVar25 + fVar27 * fVar24;
      return;
    }
  }
  method_01 = pUVar19;
  *(undefined8 *)((long)register0x00000020 + -0x60) = 0x2496f97;
  fVar23 = (float)il2cpp_runtime_helper_022b2c90();
  in_XMM1._8_8_ = extraout_XMM1_Qb_00;
  in_XMM1._0_8_ = extraout_XMM1_Qa_00;
  register0x00000020 = (BADSPACEBASE *)((long)register0x00000020 + -0x58);
EZhex1991_EZSoftBone_EZSoftBoneUtility__PointOutsideSphere:
  *(undefined8 *)((long)register0x00000020 + -8) = unaff_R15;
  *(UnityEngine_Collider_c **)((long)register0x00000020 + -0x10) = unaff_R14;
  *(UnityEngine_Collider_c **)((long)register0x00000020 + -0x18) = unaff_RBX;
  *(float *)((long)register0x00000020 + -0x70) = fVar23;
  pUVar20 = (UnityEngine_CapsuleCollider_o *)0x0;
  pUVar22 = (UnityEngine_Collider_c *)position;
  if (method_01 != (UnityEngine_Collider_c *)0x0) {
    pUVar20 = (UnityEngine_CapsuleCollider_o *)0x0;
    *(undefined8 *)((long)register0x00000020 + -0x80) = 0x2496fc8;
    pUVar22 = method_01;
    pUVar16 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)method_01,(MethodInfo *)0x0);
    unaff_RBX = method_01;
    if (pUVar16 != (UnityEngine_Transform_o *)0x0) {
      *(undefined8 *)((long)register0x00000020 + -0x80) = 0x2496fdb;
      UVar41 = UnityEngine_Transform__get_lossyScale(pUVar16,(MethodInfo *)0x0);
      auVar34._4_12_ = in_XMM1._4_12_;
      auVar34._0_4_ = UVar41.fields.z;
      auVar7._8_4_ = extraout_XMM0_Dc_02;
      auVar7._0_8_ = UVar41.fields._0_8_;
      auVar7._12_4_ = extraout_XMM0_Dd_02;
      *(undefined1 (*) [16])((long)register0x00000020 + -0x48) = auVar7;
      *(undefined1 (*) [16])((long)register0x00000020 + -0x58) = auVar34;
      *(undefined8 *)((long)register0x00000020 + -0x80) = 0x2496fef;
      fVar23 = UnityEngine_SphereCollider__get_radius
                         ((UnityEngine_SphereCollider_o *)method_01,(MethodInfo *)0x0);
      *(float *)((long)register0x00000020 + -0x68) = fVar23;
      *(undefined4 *)((long)register0x00000020 + -100) = extraout_XMM0_Db_00;
      *(undefined4 *)((long)register0x00000020 + -0x60) = extraout_XMM0_Dc_03;
      *(undefined4 *)((long)register0x00000020 + -0x5c) = extraout_XMM0_Dd_03;
      *(undefined8 *)((long)register0x00000020 + -0x80) = 0x2496ffe;
      pUVar16 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)method_01,(MethodInfo *)0x0);
      pUVar20 = (UnityEngine_CapsuleCollider_o *)0x0;
      *(undefined8 *)((long)register0x00000020 + -0x80) = 0x249700b;
      pUVar22 = method_01;
      UVar41 = UnityEngine_SphereCollider__get_center
                         ((UnityEngine_SphereCollider_o *)method_01,(MethodInfo *)0x0);
      if (pUVar16 != (UnityEngine_Transform_o *)0x0) {
        fVar23 = ABS(*(float *)((long)register0x00000020 + -0x44));
        if (fVar23 <= ABS(*(float *)((long)register0x00000020 + -0x58))) {
          fVar23 = ABS(*(float *)((long)register0x00000020 + -0x58));
        }
        fVar25 = ABS(*(float *)((long)register0x00000020 + -0x48));
        if (ABS(*(float *)((long)register0x00000020 + -0x48)) <= fVar23) {
          fVar25 = fVar23;
        }
        *(float *)((long)register0x00000020 + -0x28) = fVar25;
        *(float *)((long)register0x00000020 + -0x24) = ABS(*(float *)((long)register0x00000020 + -0x44));
        *(uint *)((long)register0x00000020 + -0x20) = *(uint *)((long)register0x00000020 + -0x40) & 0x7fffffff
        ;
        *(uint *)((long)register0x00000020 + -0x1c) = *(uint *)((long)register0x00000020 + -0x3c) & 0x7fffffff
        ;
        *(undefined8 *)((long)register0x00000020 + -0x80) = 0x249704c;
        UVar41 = UnityEngine_Transform__TransformPoint(pUVar16,UVar41,(MethodInfo *)0x0);
        fVar23 = UVar41.fields.z;
        fVar26 = UVar41.fields.x;
        fVar28 = UVar41.fields.y;
        pvVar1 = (((UnityEngine_Collider_c *)position)->_1).image;
        fVar27 = SUB84(pvVar1,0);
        fVar38 = (float)((ulong)pvVar1 >> 0x20);
        fVar37 = 0.0;
        fVar24 = 0.0;
        fVar25 = *(float *)&(((UnityEngine_Collider_c *)position)->_1).gc_desc;
        auVar8._8_4_ = extraout_XMM0_Dc_04;
        auVar8._0_8_ = UVar41.fields._0_8_;
        auVar8._12_4_ = extraout_XMM0_Dd_04;
        *(undefined1 (*) [16])((long)register0x00000020 + -0x38) = auVar8;
        *(float *)((long)register0x00000020 + -0x6c) = fVar23;
        fVar30 = extraout_XMM0_Dc_04;
        fVar32 = extraout_XMM0_Dd_04;
        if (g_data_057a6841 == '\0') {
          *(float *)((long)register0x00000020 + -0x48) = fVar25;
          *(void **)((long)register0x00000020 + -0x58) = pvVar1;
          *(undefined8 *)((long)register0x00000020 + -0x50) = 0;
          *(undefined8 *)((long)register0x00000020 + -0x80) = 0x2497082;
          il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
          fVar27 = *(float *)((long)register0x00000020 + -0x58);
          fVar38 = *(float *)((long)register0x00000020 + -0x54);
          fVar37 = *(float *)((long)register0x00000020 + -0x50);
          fVar24 = *(float *)((long)register0x00000020 + -0x4c);
          fVar25 = *(float *)((long)register0x00000020 + -0x48);
          fVar23 = *(float *)((long)register0x00000020 + -0x6c);
          fVar26 = *(float *)((long)register0x00000020 + -0x38);
          fVar28 = *(float *)((long)register0x00000020 + -0x34);
          fVar30 = *(float *)((long)register0x00000020 + -0x30);
          fVar32 = *(float *)((long)register0x00000020 + -0x2c);
          g_data_057a6841 = '\x01';
        }
        uVar29 = *(undefined4 *)((long)register0x00000020 + -100);
        uVar31 = *(undefined4 *)((long)register0x00000020 + -0x60);
        uVar36 = *(undefined4 *)((long)register0x00000020 + -0x5c);
        fVar35 = *(float *)((long)register0x00000020 + -0x68) * *(float *)((long)register0x00000020 + -0x28);
        fVar27 = fVar27 - fVar26;
        fVar38 = fVar38 - fVar28;
        fVar25 = fVar25 - fVar23;
        iVar4 = *(int *)(TypeInfo_Math + 0xe4);
        *(float *)((long)register0x00000020 + -0x48) = fVar25;
        *(float *)((long)register0x00000020 + -0x58) = fVar27;
        *(float *)((long)register0x00000020 + -0x54) = fVar38;
        *(float *)((long)register0x00000020 + -0x50) = fVar37 - fVar30;
        *(float *)((long)register0x00000020 + -0x4c) = fVar24 - fVar32;
        if (iVar4 == 0) {
          *(float *)((long)register0x00000020 + -0x68) = fVar35;
          *(undefined4 *)((long)register0x00000020 + -100) = uVar29;
          *(undefined4 *)((long)register0x00000020 + -0x60) = uVar31;
          *(undefined4 *)((long)register0x00000020 + -0x5c) = uVar36;
          *(undefined8 *)((long)register0x00000020 + -0x80) = 0x24970d9;
          il2cpp_runtime_helper_02337ed0();
          fVar27 = *(float *)((long)register0x00000020 + -0x58);
          fVar38 = *(float *)((long)register0x00000020 + -0x54);
          fVar25 = *(float *)((long)register0x00000020 + -0x48);
          fVar35 = *(float *)((long)register0x00000020 + -0x68);
          uVar29 = *(undefined4 *)((long)register0x00000020 + -100);
          uVar31 = *(undefined4 *)((long)register0x00000020 + -0x60);
          uVar36 = *(undefined4 *)((long)register0x00000020 + -0x5c);
        }
        fVar35 = fVar35 + *(float *)((long)register0x00000020 + -0x70);
        fVar23 = fVar25 * fVar25 + fVar38 * fVar38 + fVar27 * fVar27;
        *(float *)((long)register0x00000020 + -0x68) = fVar35;
        *(undefined4 *)((long)register0x00000020 + -100) = uVar29;
        *(undefined4 *)((long)register0x00000020 + -0x60) = uVar31;
        *(undefined4 *)((long)register0x00000020 + -0x5c) = uVar36;
        if (fVar23 < 0.0) {
          *(float *)((long)register0x00000020 + -0x70) = fVar23;
          *(undefined8 *)((long)register0x00000020 + -0x80) = 0x24971bf;
          fVar25 = sqrtf(fVar23);
          fVar23 = *(float *)((long)register0x00000020 + -0x70);
          fVar35 = *(float *)((long)register0x00000020 + -0x68);
          if (fVar35 <= fVar25) {
            return;
          }
        }
        else if (fVar35 <= SQRT(fVar23)) {
          return;
        }
        if (g_data_057a6845 == '\0') {
          *(float *)((long)register0x00000020 + -0x70) = fVar23;
          *(undefined8 *)((long)register0x00000020 + -0x80) = 0x24971ea;
          il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
          fVar23 = *(float *)((long)register0x00000020 + -0x70);
          fVar35 = *(float *)((long)register0x00000020 + -0x68);
          g_data_057a6845 = '\x01';
          iVar4 = *(int *)(TypeInfo_Math + 0xe4);
        }
        else {
          iVar4 = *(int *)(TypeInfo_Math + 0xe4);
        }
        if (iVar4 == 0) {
          *(float *)((long)register0x00000020 + -0x70) = fVar23;
          *(undefined8 *)((long)register0x00000020 + -0x80) = 0x2497217;
          il2cpp_runtime_helper_02337ed0();
          fVar23 = *(float *)((long)register0x00000020 + -0x70);
          fVar35 = *(float *)((long)register0x00000020 + -0x68);
        }
        if (fVar23 < 0.0) {
          *(undefined8 *)((long)register0x00000020 + -0x80) = 0x2497236;
          fVar23 = sqrtf(fVar23);
          fVar35 = *(float *)((long)register0x00000020 + -0x68);
          fVar25 = *(float *)((long)register0x00000020 + -0x48);
          auVar40 = *(undefined1 (*) [16])((long)register0x00000020 + -0x58);
          uVar29 = extraout_XMM0_Dc_05;
          uVar31 = extraout_XMM0_Dd_05;
        }
        else {
          uVar29 = 0;
          uVar31 = 0;
          fVar23 = SQRT(fVar23);
          fVar25 = *(float *)((long)register0x00000020 + -0x48);
          auVar40 = *(undefined1 (*) [16])((long)register0x00000020 + -0x58);
        }
        if (fVar23 <= 1e-05) {
          if (g_data_057a65d5 == '\0') {
            *(undefined8 *)((long)register0x00000020 + -0x80) = 0x2497186;
            il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
            fVar35 = *(float *)((long)register0x00000020 + -0x68);
            g_data_057a65d5 = '\x01';
          }
          uVar33 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
          fVar25 = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
        }
        else {
          fVar25 = fVar25 / fVar23;
          auVar9._4_4_ = fVar23;
          auVar9._0_4_ = fVar23;
          auVar9._8_4_ = uVar29;
          auVar9._12_4_ = uVar31;
          auVar40 = divps(auVar40,auVar9);
          uVar33 = auVar40._0_8_;
        }
        fVar23 = *(float *)((long)register0x00000020 + -0x6c);
        (((UnityEngine_Collider_c *)position)->_1).image =
             (void *)CONCAT44(*(float *)((long)register0x00000020 + -0x34) +
                              fVar35 * (float)((ulong)uVar33 >> 0x20),
                              *(float *)((long)register0x00000020 + -0x38) + fVar35 * (float)uVar33);
        *(float *)&(((UnityEngine_Collider_c *)position)->_1).gc_desc = fVar23 + fVar25 * fVar35;
        return;
      }
    }
  }
  *(undefined8 *)((long)register0x00000020 + -0x80) = 0x2497297;
  uVar29 = il2cpp_runtime_helper_022b2c90();
  *(UnityEngine_Collider_c **)((long)register0x00000020 + -0x80) = unaff_RBX;
  *(undefined4 *)((long)register0x00000020 + -0xa4) = uVar29;
  *(undefined4 *)((long)register0x00000020 + -0x88) = 0;
  *(undefined8 *)((long)register0x00000020 + -0x90) = 0;
  *(undefined4 *)((long)register0x00000020 + -0x98) = 0;
  *(undefined8 *)((long)register0x00000020 + -0xa0) = 0;
  *(undefined4 *)((long)register0x00000020 + -0xa8) = 0;
  pMVar18 = (MethodInfo *)((long)register0x00000020 + -0x90);
  *(undefined8 *)((long)register0x00000020 + -0xb8) = 0x24972f2;
  EZhex1991_EZSoftBone_EZSoftBoneUtility__GetCapsuleParams
            (pUVar20,(UnityEngine_Vector3_o *)pMVar18,
             (UnityEngine_Vector3_o *)((long)register0x00000020 + -0xa0),
             (float *)((long)register0x00000020 + -0xa8),in_R8);
  EZhex1991_EZSoftBone_EZSoftBoneUtility__PointInsideCapsule_2399400
            ((UnityEngine_Vector3_o *)pUVar22,
             (UnityEngine_Vector3_o)*(UnityEngine_Vector3_Fields *)((long)register0x00000020 + -0x90),
             (UnityEngine_Vector3_o)*(UnityEngine_Vector3_Fields *)((long)register0x00000020 + -0xa0),
             *(float *)((long)register0x00000020 + -0xa8) - *(float *)((long)register0x00000020 + -0xa4),
             pMVar18);
  return;
}


// EZhex1991.EZSoftBone.EZSoftBoneCollider$$CheckConvex
// il2cpp: bool EZhex1991_EZSoftBone_EZSoftBoneCollider__CheckConvex (EZhex1991_EZSoftBone_EZSoftBoneCollider_o* __this, UnityEngine_MeshCollider_o* meshCollider, const MethodInfo* method);
// 0x2497930

bool_conflict
EZhex1991_EZSoftBone_EZSoftBoneCollider__CheckConvex
          (EZhex1991_EZSoftBone_EZSoftBoneCollider_o *__this,UnityEngine_MeshCollider_o *meshCollider,
          MethodInfo *method)

{
  bool_conflict bVar1;
  UnityEngine_Object_o *x;
  UnityEngine_Collider_o *pUVar2;
  
  if (g_data_057a6927 == '\0') {
    __this = (EZhex1991_EZSoftBone_EZSoftBoneCollider_o *)&TypeInfo_Object;
    il2cpp_runtime_helper_023445d0();
    g_data_057a6927 = '\x01';
  }
  if (meshCollider == (UnityEngine_MeshCollider_o *)0x0) {
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057a6928 == '\0') {
      il2cpp_runtime_helper_023445d0(&MethodInfo_Collider_GetComponent_Collider);
      g_data_057a6928 = '\x01';
    }
    pUVar2 = (UnityEngine_Collider_o *)
             UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)__this,MethodInfo_Collider_GetComponent_Collider);
    (__this->fields).m_ReferenceCollider = pUVar2;
    bVar1 = il2cpp_runtime_helper_022b4080(&(__this->fields).m_ReferenceCollider,pUVar2);
    return bVar1;
  }
  x = (UnityEngine_Object_o *)UnityEngine_MeshCollider__get_sharedMesh(meshCollider,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
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
// 0x24979b0

void EZhex1991_EZSoftBone_EZSoftBoneCollider__Reset
               (EZhex1991_EZSoftBone_EZSoftBoneCollider_o *__this,MethodInfo *method)

{
  UnityEngine_Collider_o *pUVar1;
  
  if (g_data_057a6928 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Collider_GetComponent_Collider);
    g_data_057a6928 = '\x01';
  }
  pUVar1 = (UnityEngine_Collider_o *)
           UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)__this,MethodInfo_Collider_GetComponent_Collider);
  (__this->fields).m_ReferenceCollider = pUVar1;
  il2cpp_runtime_helper_022b4080(&(__this->fields).m_ReferenceCollider,pUVar1);
  return;
}


// EZhex1991.EZSoftBone.EZSoftBoneCollider$$.ctor
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBoneCollider___ctor (EZhex1991_EZSoftBone_EZSoftBoneCollider_o* __this, const MethodInfo* method);
// 0x2497a00

void EZhex1991_EZSoftBone_EZSoftBoneCollider___ctor
               (EZhex1991_EZSoftBone_EZSoftBoneCollider_o *__this,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057a6929 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_EZSoftBoneColliderBase);
    g_data_057a6929 = '\x01';
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


