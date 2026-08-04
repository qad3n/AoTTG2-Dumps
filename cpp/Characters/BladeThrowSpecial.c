// Type: Characters.BladeThrowSpecial
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Characters/BladeThrowSpecial.cs
// Prior real C# source (older reference): Assets/Scripts/Characters/Human/Specials/BladeThrowSpecial.cs
// --------------------------------

// Characters.BladeThrowSpecial$$get_ActiveTime
// il2cpp: float Characters_BladeThrowSpecial__get_ActiveTime (Characters_BladeThrowSpecial_o* __this, const MethodInfo* method);
// 0x42f2db0

float Characters_BladeThrowSpecial__get_ActiveTime(Characters_BladeThrowSpecial_o *__this,MethodInfo *method)

{
  return 0.8;
}


// Characters.BladeThrowSpecial$$.ctor
// il2cpp: void Characters_BladeThrowSpecial___ctor (Characters_BladeThrowSpecial_o* __this, Characters_BaseCharacter_o* owner, const MethodInfo* method);
// 0x42e4210

void Characters_BladeThrowSpecial___ctor
               (Characters_BladeThrowSpecial_o *__this,Characters_BaseCharacter_o *owner,MethodInfo *method)

{
  (__this->fields).Speed = 80.0;
  (__this->fields).LiveTime = 2.0;
  Characters_BaseAttackSpecial___ctor((Characters_BaseAttackSpecial_o *)__this,owner,method);
  (__this->fields).Cooldown = 1.0;
  return;
}


// Characters.BladeThrowSpecial$$Activate
// il2cpp: void Characters_BladeThrowSpecial__Activate (Characters_BladeThrowSpecial_o* __this, const MethodInfo* method);
// 0x42f2dc0

void Characters_BladeThrowSpecial__Activate(Characters_BladeThrowSpecial_o *__this,MethodInfo *method)

{
  float *pfVar1;
  UnityEngine_Quaternion_Fields *pUVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar6;
  undefined8 uVar5;
  byte bVar7;
  Characters_Human_o *pCVar8;
  long lVar9;
  UnityEngine_GameObject_o *pUVar10;
  Il2CppClass *pIVar11;
  UnityEngine_Transform_o *pUVar12;
  UnityEngine_Rigidbody_o *pUVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [12];
  UnityEngine_Vector3_Fields gravity;
  System_Object_array *pSVar17;
  Photon_Pun_PhotonView_o *pPVar18;
  Projectiles_BaseProjectile_o *name;
  MethodInfo *method_00;
  MethodInfo *method_01;
  Characters_BladeThrowSpecial_o *__this_00;
  float fVar19;
  float fVar20;
  undefined8 uVar21;
  float fVar22;
  float fVar23;
  float extraout_XMM0_Dc;
  float extraout_XMM0_Dc_00;
  undefined4 uVar24;
  undefined4 extraout_XMM0_Dc_01;
  float extraout_XMM0_Dc_02;
  float extraout_XMM0_Dc_03;
  float extraout_XMM0_Dc_04;
  undefined4 extraout_XMM0_Dc_05;
  float extraout_XMM0_Dd;
  float extraout_XMM0_Dd_00;
  undefined4 uVar25;
  undefined4 extraout_XMM0_Dd_01;
  float extraout_XMM0_Dd_02;
  float extraout_XMM0_Dd_03;
  float extraout_XMM0_Dd_04;
  undefined4 extraout_XMM0_Dd_05;
  float in_XMM1_Da;
  float fVar26;
  float fVar27;
  float fVar28;
  undefined1 in_XMM2 [16];
  float in_XMM3_Da;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  UnityEngine_Quaternion_o UVar31;
  UnityEngine_Quaternion_Fields UVar32;
  UnityEngine_Vector3_o UVar33;
  UnityEngine_Vector3_o euler;
  UnityEngine_Vector3_o target;
  UnityEngine_Vector3_o UVar34;
  UnityEngine_Vector3_o forward;
  UnityEngine_Vector3_o position;
  UnityEngine_Vector3_o velocity;
  undefined8 uStack_108;
  float fStack_e8;
  float fStack_e4;
  
  if (g_data_057aded2 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanAnimations);
    g_data_057aded2 = '\x01';
  }
  *(undefined1 *)&(__this->fields)._needActivate = 1;
  pCVar8 = (__this->fields)._human;
  __this_00 = TypeInfo_HumanAnimations;
  if (*(int *)((long)&TypeInfo_HumanAnimations[2].fields._owner + 4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (pCVar8 != (Characters_Human_o *)0x0) {
    Characters_Human__StartSpecialAttack
              (pCVar8,*(System_String_o **)((long)TypeInfo_HumanAnimations[2].monitor + 0x210),(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aded3 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BladeWeapon);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSounds);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_Value);
    g_data_057aded3 = '\x01';
  }
  pCVar8 = (__this_00->fields)._human;
  fVar26 = in_XMM1_Da;
  if (pCVar8 == (Characters_Human_o *)0x0) {
label_042f32cf:
    pSVar17 = (System_Object_array *)il2cpp_runtime_helper_022b2c90();
  }
  else {
    if ((pCVar8->fields).FinishSetup != 9) {
      *(undefined1 *)&(__this_00->fields).IsActive = 0;
    }
    if (((char)(__this_00->fields)._needActivate == '\0') ||
       (pfVar1 = &(__this_00->fields)._activeTimeLeft, 0.4 < *pfVar1 || *pfVar1 == 0.4)) {
      return;
    }
    *(undefined1 *)&(__this_00->fields)._needActivate = 0;
    lVar9 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x80);
    if ((lVar9 == 0) || (lVar9 = *(long *)(lVar9 + 0x88), lVar9 == 0)) goto label_042f32cf;
    bVar7 = *(byte *)(lVar9 + 0x11);
    if (*(int *)(TypeInfo_HumanSounds + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    method = *(MethodInfo **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x60 + (ulong)bVar7 * 8);
    Characters_BaseCharacter__PlaySound
              ((Characters_BaseCharacter_o *)pCVar8,(System_String_o *)method,(MethodInfo *)0x0);
    pCVar8 = (__this_00->fields)._human;
    fVar26 = in_XMM1_Da;
    if (((pCVar8 == (Characters_Human_o *)0x0) || (lVar9 = *(long *)&(pCVar8->fields).MountState, lVar9 == 0))
       || (pUVar10 = *(UnityEngine_GameObject_o **)(lVar9 + 0xb8), pUVar10 == (UnityEngine_GameObject_o *)0x0)
       ) goto label_042f32cf;
    method = (MethodInfo *)0x0;
    UnityEngine_GameObject__SetActive(pUVar10,0,(MethodInfo *)0x0);
    pCVar8 = (__this_00->fields)._human;
    fVar26 = in_XMM1_Da;
    if (((pCVar8 == (Characters_Human_o *)0x0) || (lVar9 = *(long *)&(pCVar8->fields).MountState, lVar9 == 0))
       || (pUVar10 = *(UnityEngine_GameObject_o **)(lVar9 + 0xc0), pUVar10 == (UnityEngine_GameObject_o *)0x0)
       ) goto label_042f32cf;
    method = (MethodInfo *)0x0;
    UnityEngine_GameObject__SetActive(pUVar10,0,(MethodInfo *)0x0);
    pCVar8 = (__this_00->fields)._human;
    fVar26 = in_XMM1_Da;
    if ((pCVar8 == (Characters_Human_o *)0x0) ||
       (pSVar17 = (pCVar8->fields).crossfadeCache, pSVar17 == (System_Object_array *)0x0)) goto label_042f32cf;
    pIVar11 = (pSVar17->obj).klass;
    bVar7 = (TypeInfo_BladeWeapon->_2).naturalAligment;
    method = (MethodInfo *)TypeInfo_BladeWeapon;
    if ((bVar7 <= (pIVar11->_2).naturalAligment) &&
       ((pIVar11->_2).typeHierarchy[(ulong)bVar7 - 1] == TypeInfo_BladeWeapon)) {
      *(undefined4 *)(pSVar17->m_Items + 4) = 0;
      method = (pCVar8->klass->vtable)._66_GetAimPoint.method;
      UVar34.fields._0_8_ = (*(pCVar8->klass->vtable)._66_GetAimPoint.methodPtr)();
      pCVar8 = (__this_00->fields)._human;
      fVar26 = in_XMM1_Da;
      if (((pCVar8 == (Characters_Human_o *)0x0) || (lVar9 = *(long *)&(pCVar8->fields).Dead, lVar9 == 0)) ||
         (pUVar12 = *(UnityEngine_Transform_o **)(lVar9 + 0x10), pUVar12 == (UnityEngine_Transform_o *)0x0))
      goto label_042f32cf;
      method = (MethodInfo *)0x0;
      UVar33 = UnityEngine_Transform__get_position(pUVar12,(MethodInfo *)0x0);
      if (g_data_057a6845 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
        g_data_057a6845 = '\x01';
      }
      auVar30._0_4_ = (float)UVar34.fields._0_8_ - UVar33.fields.x;
      auVar30._4_4_ = (float)((ulong)UVar34.fields._0_8_ >> 0x20) - UVar33.fields.y;
      auVar30._8_4_ = extraout_XMM0_Dc - extraout_XMM0_Dc_00;
      auVar30._12_4_ = extraout_XMM0_Dd - extraout_XMM0_Dd_00;
      fVar26 = in_XMM1_Da - UVar33.fields.z;
      if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      uVar24 = 0;
      uVar25 = 0;
      fVar19 = fVar26 * fVar26 + auVar30._4_4_ * auVar30._4_4_ + auVar30._0_4_ * auVar30._0_4_;
      in_XMM3_Da = 0.0;
      if (fVar19 < 0.0) {
        in_XMM3_Da = 0.0;
        fVar19 = sqrtf(fVar19);
        uVar24 = extraout_XMM0_Dc_01;
        uVar25 = extraout_XMM0_Dd_01;
        fVar20 = in_XMM3_Da;
        if (1e-05 < fVar19) goto label_042f313d;
label_042f30d6:
        in_XMM3_Da = fVar20;
        if (g_data_057a65d5 == '\0') {
          il2cpp_runtime_helper_023445d0();
          g_data_057a65d5 = '\x01';
        }
        in_XMM2._8_8_ = 0;
        in_XMM2._0_8_ = **(ulong **)(TypeInfo_Vector3 + 0xb8);
        fVar26 = *(float *)(*(ulong **)(TypeInfo_Vector3 + 0xb8) + 1);
      }
      else {
        fVar19 = SQRT(fVar19);
        fVar20 = 0.0;
        if (fVar19 <= 1e-05) goto label_042f30d6;
label_042f313d:
        fVar26 = fVar26 / fVar19;
        auVar15._4_4_ = fVar19;
        auVar15._0_4_ = fVar19;
        auVar15._8_4_ = uVar24;
        auVar15._12_4_ = uVar25;
        in_XMM2 = divps(auVar30,auVar15);
      }
      pCVar8 = (__this_00->fields)._human;
      UVar33.fields.z = fVar26;
      UVar33.fields.x = (float)(int)in_XMM2._0_8_;
      UVar33.fields.y = (float)(int)((ulong)in_XMM2._0_8_ >> 0x20);
      UVar31 = UnityEngine_Quaternion__LookRotation_4debb20(UVar33,(MethodInfo *)0x0);
      UVar33 = UnityEngine_Quaternion__Internal_ToEulerRad(UVar31,(MethodInfo *)0x0);
      euler.fields.x = UVar33.fields.x * 57.29578;
      euler.fields.y = UVar33.fields.y * 57.29578;
      euler.fields.z = UVar33.fields.z * 57.29578;
      UVar33 = UnityEngine_Quaternion__Internal_MakePositive(euler,(MethodInfo *)0x0);
      fVar26 = UVar33.fields.z;
      if (pCVar8 != (Characters_Human_o *)0x0) {
        *(float *)&(pCVar8->fields).Detection = UVar33.fields.y;
        pCVar8 = (__this_00->fields)._human;
        if (pCVar8 != (Characters_Human_o *)0x0) {
          auVar16._4_8_ = 0;
          auVar16._0_4_ = *(float *)&(pCVar8->fields).Detection * 0.017453292;
          UVar32 = (UnityEngine_Quaternion_Fields)
                   UnityEngine_Quaternion__Internal_FromEulerRad
                             ((UnityEngine_Vector3_o)(auVar16 << 0x20),(MethodInfo *)0x0);
          fVar26 = UVar32.z;
          *(UnityEngine_Quaternion_Fields *)((long)&(pCVar8->fields)._lastMountMessage + 4) = UVar32;
          pCVar8 = (__this_00->fields)._human;
          if (((pCVar8 != (Characters_Human_o *)0x0) && (lVar9 = *(long *)&(pCVar8->fields).Dead, lVar9 != 0))
             && (pUVar12 = *(UnityEngine_Transform_o **)(lVar9 + 0x10),
                pUVar12 != (UnityEngine_Transform_o *)0x0)) {
            method = (MethodInfo *)0x0;
            UVar31 = UnityEngine_Transform__get_rotation(pUVar12,(MethodInfo *)0x0);
            fVar26 = UVar31.fields.z;
            pCVar8 = (__this_00->fields)._human;
            if (pCVar8 != (Characters_Human_o *)0x0) {
              pUVar2 = (UnityEngine_Quaternion_Fields *)((long)&(pCVar8->fields)._lastMountMessage + 4);
              uVar3 = pUVar2->x;
              uVar6 = pUVar2->y;
              in_XMM2._4_4_ = uVar6;
              in_XMM2._0_4_ = uVar3;
              uVar4 = (pCVar8->fields)._grabIFrames;
              UVar32 = *pUVar2;
              fVar26 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
              in_XMM2._8_8_ = 0;
              in_XMM3_Da = (float)uVar4;
              UVar31 = UnityEngine_Quaternion__Lerp(UVar31,UVar32,fVar26 * 30.0,(MethodInfo *)0x0);
              method = (MethodInfo *)0x0;
              fVar26 = UVar31.fields.z;
              UnityEngine_Transform__set_rotation(pUVar12,UVar31,(MethodInfo *)0x0);
              pCVar8 = (__this_00->fields)._human;
              if (((pCVar8 != (Characters_Human_o *)0x0) &&
                  (lVar9 = *(long *)&(pCVar8->fields).Dead, lVar9 != 0)) &&
                 (pUVar13 = *(UnityEngine_Rigidbody_o **)(lVar9 + 0x18),
                 pUVar13 != (UnityEngine_Rigidbody_o *)0x0)) {
                UVar33 = UnityEngine_Rigidbody__get_velocity(pUVar13,(MethodInfo *)0x0);
                UVar34.fields.z = in_XMM1_Da;
                Characters_BladeThrowSpecial__SpawnBladeProjectile(__this_00,1,UVar34,UVar33,method_00);
                target.fields.z = in_XMM1_Da;
                target.fields.x = (float)(int)UVar34.fields._0_8_;
                target.fields.y = (float)(int)((ulong)UVar34.fields._0_8_ >> 0x20);
                Characters_BladeThrowSpecial__SpawnBladeProjectile(__this_00,0,target,UVar33,method_01);
                return;
              }
            }
          }
        }
      }
      goto label_042f32cf;
    }
  }
  uVar21 = il2cpp_runtime_helper_022b2fd0();
  name = (Projectiles_BaseProjectile_o *)((ulong)method & 0xffffffff);
  if (g_data_057aded4 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BladeThrowProjectile);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ProjectilePrefabs);
    il2cpp_runtime_helper_023445d0(&"");
    g_data_057aded4 = '\x01';
  }
  if (((pSVar17->m_Items[4] != (Il2CppObject *)0x0) &&
      (pIVar11 = pSVar17->m_Items[4][7].klass, pIVar11 != (Il2CppClass *)0x0)) &&
     (pUVar12 = (UnityEngine_Transform_o *)(pIVar11->_1).name, pUVar12 != (UnityEngine_Transform_o *)0x0)) {
    UVar34 = UnityEngine_Transform__get_position(pUVar12,(MethodInfo *)0x0);
    if (g_data_057a6844 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
      g_data_057a6844 = '\x01';
    }
    if (((pSVar17->m_Items[4] != (Il2CppObject *)0x0) &&
        (pIVar11 = pSVar17->m_Items[4][7].klass, pIVar11 != (Il2CppClass *)0x0)) &&
       (pUVar12 = (UnityEngine_Transform_o *)(pIVar11->_1).name, pUVar12 != (UnityEngine_Transform_o *)0x0)) {
      uVar5 = *(undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x18);
      fVar19 = UVar34.fields.x + (float)uVar5 * 2.5;
      fVar22 = UVar34.fields.y + (float)((ulong)uVar5 >> 0x20) * 2.5;
      fVar27 = UVar34.fields.z + *(float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x20) * 2.5;
      UVar34 = UnityEngine_Transform__get_right(pUVar12,(MethodInfo *)0x0);
      fVar20 = UVar34.fields.x * 0.5;
      fVar23 = UVar34.fields.y * 0.5;
      fVar28 = UVar34.fields.z * 0.5;
      if ((char)name == '\0') {
        fVar19 = fVar19 + fVar20;
        fVar22 = fVar22 + fVar23;
        fVar20 = extraout_XMM0_Dc_03 + 0.0 + extraout_XMM0_Dc_04 * 0.0;
        fVar23 = extraout_XMM0_Dd_03 + 0.0 + extraout_XMM0_Dd_04 * 0.0;
        fVar27 = fVar27 + fVar28;
      }
      else {
        fVar19 = fVar19 - fVar20;
        fVar22 = fVar22 - fVar23;
        fVar20 = (extraout_XMM0_Dc_03 + 0.0) - extraout_XMM0_Dc_04 * 0.0;
        fVar23 = (extraout_XMM0_Dd_03 + 0.0) - extraout_XMM0_Dd_04 * 0.0;
        fVar27 = fVar27 - fVar28;
      }
      if (g_data_057a6845 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
        g_data_057a6845 = '\x01';
      }
      auVar29._0_4_ = (float)uVar21 - fVar19;
      auVar29._4_4_ = (float)((ulong)uVar21 >> 0x20) - fVar22;
      auVar29._8_4_ = extraout_XMM0_Dc_02 - fVar20;
      auVar29._12_4_ = extraout_XMM0_Dd_02 - fVar23;
      fVar26 = fVar26 - fVar27;
      if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      uVar24 = 0;
      uVar25 = 0;
      fVar20 = fVar26 * fVar26 + auVar29._4_4_ * auVar29._4_4_ + auVar29._0_4_ * auVar29._0_4_;
      if (fVar20 < 0.0) {
        fVar20 = sqrtf(fVar20);
        uVar24 = extraout_XMM0_Dc_05;
        uVar25 = extraout_XMM0_Dd_05;
        if (1e-05 < fVar20) goto label_042f3544;
label_042f34ef:
        if (g_data_057a65d5 == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
          g_data_057a65d5 = '\x01';
        }
        uVar21 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
        fVar26 = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
      }
      else {
        fVar20 = SQRT(fVar20);
        if (fVar20 <= 1e-05) goto label_042f34ef;
label_042f3544:
        fVar26 = fVar26 / fVar20;
        auVar14._4_4_ = fVar20;
        auVar14._0_4_ = fVar20;
        auVar14._8_4_ = uVar24;
        auVar14._12_4_ = uVar25;
        auVar30 = divps(auVar29,auVar14);
        uVar21 = auVar30._0_8_;
      }
      fStack_e8 = in_XMM2._0_4_;
      fStack_e4 = in_XMM2._4_4_;
      fVar23 = (float)((ulong)uVar21 >> 0x20);
      fVar20 = in_XMM3_Da * fVar26 + fStack_e4 * fVar23 + fStack_e8 * (float)uVar21;
      if (fVar20 <= 0.0) {
        fVar20 = 0.0;
      }
      fVar20 = fVar20 + *(float *)((long)pSVar17->m_Items + 0x2c);
      if (*(int *)(TypeInfo_ProjectilePrefabs + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      name = *(Projectiles_BaseProjectile_o **)(*(long *)(TypeInfo_ProjectilePrefabs + 0xb8) + 0x18);
      forward.fields.z = fVar26;
      forward.fields.x = (float)(int)uVar21;
      forward.fields.y = (float)(int)((ulong)uVar21 >> 0x20);
      UVar31 = UnityEngine_Quaternion__LookRotation_4debb20(forward,(MethodInfo *)0x0);
      if (g_data_057a65d5 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
        g_data_057a65d5 = '\x01';
      }
      if ((Photon_Pun_MonoBehaviourPun_o *)pSVar17->m_Items[4] != (Photon_Pun_MonoBehaviourPun_o *)0x0) {
        gravity = **(UnityEngine_Vector3_Fields **)(TypeInfo_Vector3 + 0xb8);
        fVar28 = *(float *)(pSVar17->m_Items + 6);
        pPVar18 = Photon_Pun_MonoBehaviourPun__get_photonView
                            ((Photon_Pun_MonoBehaviourPun_o *)pSVar17->m_Items[4],(MethodInfo *)0x0);
        if (pPVar18 != (Photon_Pun_PhotonView_o *)0x0) {
          velocity.fields.x = (float)uVar21 * fVar20;
          velocity.fields.z = fVar26 * fVar20;
          position.fields.z = fVar27;
          position.fields.x = fVar19;
          position.fields.y = fVar22;
          velocity.fields.y = fVar23 * fVar20;
          name = Projectiles_ProjectileSpawner__Spawn
                           ((System_String_o *)name,position,UVar31,velocity,(UnityEngine_Vector3_o)gravity,
                            fVar28,(pPVar18->fields).viewIdField,"",(System_Object_array *)0x0,
                            (MethodInfo *)0x0);
          if (((pSVar17->m_Items[4] != (Il2CppObject *)0x0) &&
              (pIVar11 = pSVar17->m_Items[4][7].klass, pIVar11 != (Il2CppClass *)0x0)) &&
             (pUVar13 = (UnityEngine_Rigidbody_o *)(pIVar11->_1).namespaze,
             pUVar13 != (UnityEngine_Rigidbody_o *)0x0)) {
            UVar34 = UnityEngine_Rigidbody__get_velocity(pUVar13,(MethodInfo *)0x0);
            if (name != (Projectiles_BaseProjectile_o *)0x0) {
              bVar7 = (TypeInfo_BladeThrowProjectile->_2).naturalAligment;
              if ((bVar7 <= (name->klass->_2).naturalAligment) &&
                 ((name->klass->_2).typeHierarchy[(ulong)bVar7 - 1] == TypeInfo_BladeThrowProjectile)) {
                name[1].fields.m_CancellationTokenSource = UVar34.fields._0_8_;
                *(float *)&name[1].fields.pvCache = UVar34.fields.z;
                return;
              }
              goto label_042f371a;
            }
          }
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
label_042f371a:
  il2cpp_runtime_helper_022b2fd0(name);
  return;
}


// Characters.BladeThrowSpecial$$ActiveFixedUpdate
// il2cpp: void Characters_BladeThrowSpecial__ActiveFixedUpdate (Characters_BladeThrowSpecial_o* __this, const MethodInfo* method);
// 0x42f2e30

void Characters_BladeThrowSpecial__ActiveFixedUpdate
               (Characters_BladeThrowSpecial_o *__this,MethodInfo *method)

{
  float *pfVar1;
  UnityEngine_Quaternion_Fields *pUVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar6;
  undefined8 uVar5;
  byte bVar7;
  Characters_Human_o *pCVar8;
  long lVar9;
  UnityEngine_GameObject_o *pUVar10;
  Il2CppClass *pIVar11;
  UnityEngine_Transform_o *pUVar12;
  UnityEngine_Rigidbody_o *pUVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [12];
  UnityEngine_Vector3_Fields gravity;
  System_Object_array *pSVar17;
  Photon_Pun_PhotonView_o *pPVar18;
  Projectiles_BaseProjectile_o *name;
  MethodInfo *method_00;
  MethodInfo *method_01;
  float fVar19;
  float fVar20;
  undefined8 uVar21;
  float fVar22;
  float fVar23;
  float extraout_XMM0_Dc;
  float extraout_XMM0_Dc_00;
  undefined4 uVar24;
  undefined4 extraout_XMM0_Dc_01;
  float extraout_XMM0_Dc_02;
  float extraout_XMM0_Dc_03;
  float extraout_XMM0_Dc_04;
  undefined4 extraout_XMM0_Dc_05;
  float extraout_XMM0_Dd;
  float extraout_XMM0_Dd_00;
  undefined4 uVar25;
  undefined4 extraout_XMM0_Dd_01;
  float extraout_XMM0_Dd_02;
  float extraout_XMM0_Dd_03;
  float extraout_XMM0_Dd_04;
  undefined4 extraout_XMM0_Dd_05;
  float in_XMM1_Da;
  float fVar26;
  float fVar27;
  float fVar28;
  undefined1 in_XMM2 [16];
  float in_XMM3_Da;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  UnityEngine_Quaternion_o UVar31;
  UnityEngine_Quaternion_Fields UVar32;
  UnityEngine_Vector3_o UVar33;
  UnityEngine_Vector3_o euler;
  UnityEngine_Vector3_o target;
  UnityEngine_Vector3_o UVar34;
  UnityEngine_Vector3_o forward;
  UnityEngine_Vector3_o position;
  UnityEngine_Vector3_o velocity;
  undefined8 uStack_f0;
  float fStack_d0;
  float fStack_cc;
  
  if (g_data_057aded3 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BladeWeapon);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSounds);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_Value);
    g_data_057aded3 = '\x01';
  }
  pCVar8 = (__this->fields)._human;
  fVar26 = in_XMM1_Da;
  if (pCVar8 == (Characters_Human_o *)0x0) {
label_042f32cf:
    pSVar17 = (System_Object_array *)il2cpp_runtime_helper_022b2c90();
  }
  else {
    if ((pCVar8->fields).FinishSetup != 9) {
      *(undefined1 *)&(__this->fields).IsActive = 0;
    }
    if (((char)(__this->fields)._needActivate == '\0') ||
       (pfVar1 = &(__this->fields)._activeTimeLeft, 0.4 < *pfVar1 || *pfVar1 == 0.4)) {
      return;
    }
    *(undefined1 *)&(__this->fields)._needActivate = 0;
    lVar9 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x80);
    if ((lVar9 == 0) || (lVar9 = *(long *)(lVar9 + 0x88), lVar9 == 0)) goto label_042f32cf;
    bVar7 = *(byte *)(lVar9 + 0x11);
    if (*(int *)(TypeInfo_HumanSounds + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    method = *(MethodInfo **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x60 + (ulong)bVar7 * 8);
    Characters_BaseCharacter__PlaySound
              ((Characters_BaseCharacter_o *)pCVar8,(System_String_o *)method,(MethodInfo *)0x0);
    pCVar8 = (__this->fields)._human;
    fVar26 = in_XMM1_Da;
    if (((pCVar8 == (Characters_Human_o *)0x0) || (lVar9 = *(long *)&(pCVar8->fields).MountState, lVar9 == 0))
       || (pUVar10 = *(UnityEngine_GameObject_o **)(lVar9 + 0xb8), pUVar10 == (UnityEngine_GameObject_o *)0x0)
       ) goto label_042f32cf;
    method = (MethodInfo *)0x0;
    UnityEngine_GameObject__SetActive(pUVar10,0,(MethodInfo *)0x0);
    pCVar8 = (__this->fields)._human;
    fVar26 = in_XMM1_Da;
    if (((pCVar8 == (Characters_Human_o *)0x0) || (lVar9 = *(long *)&(pCVar8->fields).MountState, lVar9 == 0))
       || (pUVar10 = *(UnityEngine_GameObject_o **)(lVar9 + 0xc0), pUVar10 == (UnityEngine_GameObject_o *)0x0)
       ) goto label_042f32cf;
    method = (MethodInfo *)0x0;
    UnityEngine_GameObject__SetActive(pUVar10,0,(MethodInfo *)0x0);
    pCVar8 = (__this->fields)._human;
    fVar26 = in_XMM1_Da;
    if ((pCVar8 == (Characters_Human_o *)0x0) ||
       (pSVar17 = (pCVar8->fields).crossfadeCache, pSVar17 == (System_Object_array *)0x0)) goto label_042f32cf;
    pIVar11 = (pSVar17->obj).klass;
    bVar7 = (TypeInfo_BladeWeapon->_2).naturalAligment;
    method = (MethodInfo *)TypeInfo_BladeWeapon;
    if ((bVar7 <= (pIVar11->_2).naturalAligment) &&
       ((pIVar11->_2).typeHierarchy[(ulong)bVar7 - 1] == TypeInfo_BladeWeapon)) {
      *(undefined4 *)(pSVar17->m_Items + 4) = 0;
      method = (pCVar8->klass->vtable)._66_GetAimPoint.method;
      UVar34.fields._0_8_ = (*(pCVar8->klass->vtable)._66_GetAimPoint.methodPtr)();
      pCVar8 = (__this->fields)._human;
      fVar26 = in_XMM1_Da;
      if (((pCVar8 == (Characters_Human_o *)0x0) || (lVar9 = *(long *)&(pCVar8->fields).Dead, lVar9 == 0)) ||
         (pUVar12 = *(UnityEngine_Transform_o **)(lVar9 + 0x10), pUVar12 == (UnityEngine_Transform_o *)0x0))
      goto label_042f32cf;
      method = (MethodInfo *)0x0;
      UVar33 = UnityEngine_Transform__get_position(pUVar12,(MethodInfo *)0x0);
      if (g_data_057a6845 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
        g_data_057a6845 = '\x01';
      }
      auVar30._0_4_ = (float)UVar34.fields._0_8_ - UVar33.fields.x;
      auVar30._4_4_ = (float)((ulong)UVar34.fields._0_8_ >> 0x20) - UVar33.fields.y;
      auVar30._8_4_ = extraout_XMM0_Dc - extraout_XMM0_Dc_00;
      auVar30._12_4_ = extraout_XMM0_Dd - extraout_XMM0_Dd_00;
      fVar26 = in_XMM1_Da - UVar33.fields.z;
      if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      uVar24 = 0;
      uVar25 = 0;
      fVar19 = fVar26 * fVar26 + auVar30._4_4_ * auVar30._4_4_ + auVar30._0_4_ * auVar30._0_4_;
      in_XMM3_Da = 0.0;
      if (fVar19 < 0.0) {
        in_XMM3_Da = 0.0;
        fVar19 = sqrtf(fVar19);
        uVar24 = extraout_XMM0_Dc_01;
        uVar25 = extraout_XMM0_Dd_01;
        fVar20 = in_XMM3_Da;
        if (1e-05 < fVar19) goto label_042f313d;
label_042f30d6:
        in_XMM3_Da = fVar20;
        if (g_data_057a65d5 == '\0') {
          il2cpp_runtime_helper_023445d0();
          g_data_057a65d5 = '\x01';
        }
        in_XMM2._8_8_ = 0;
        in_XMM2._0_8_ = **(ulong **)(TypeInfo_Vector3 + 0xb8);
        fVar26 = *(float *)(*(ulong **)(TypeInfo_Vector3 + 0xb8) + 1);
      }
      else {
        fVar19 = SQRT(fVar19);
        fVar20 = 0.0;
        if (fVar19 <= 1e-05) goto label_042f30d6;
label_042f313d:
        fVar26 = fVar26 / fVar19;
        auVar15._4_4_ = fVar19;
        auVar15._0_4_ = fVar19;
        auVar15._8_4_ = uVar24;
        auVar15._12_4_ = uVar25;
        in_XMM2 = divps(auVar30,auVar15);
      }
      pCVar8 = (__this->fields)._human;
      UVar33.fields.z = fVar26;
      UVar33.fields.x = (float)(int)in_XMM2._0_8_;
      UVar33.fields.y = (float)(int)((ulong)in_XMM2._0_8_ >> 0x20);
      UVar31 = UnityEngine_Quaternion__LookRotation_4debb20(UVar33,(MethodInfo *)0x0);
      UVar33 = UnityEngine_Quaternion__Internal_ToEulerRad(UVar31,(MethodInfo *)0x0);
      euler.fields.x = UVar33.fields.x * 57.29578;
      euler.fields.y = UVar33.fields.y * 57.29578;
      euler.fields.z = UVar33.fields.z * 57.29578;
      UVar33 = UnityEngine_Quaternion__Internal_MakePositive(euler,(MethodInfo *)0x0);
      fVar26 = UVar33.fields.z;
      if (pCVar8 != (Characters_Human_o *)0x0) {
        *(float *)&(pCVar8->fields).Detection = UVar33.fields.y;
        pCVar8 = (__this->fields)._human;
        if (pCVar8 != (Characters_Human_o *)0x0) {
          auVar16._4_8_ = 0;
          auVar16._0_4_ = *(float *)&(pCVar8->fields).Detection * 0.017453292;
          UVar32 = (UnityEngine_Quaternion_Fields)
                   UnityEngine_Quaternion__Internal_FromEulerRad
                             ((UnityEngine_Vector3_o)(auVar16 << 0x20),(MethodInfo *)0x0);
          fVar26 = UVar32.z;
          *(UnityEngine_Quaternion_Fields *)((long)&(pCVar8->fields)._lastMountMessage + 4) = UVar32;
          pCVar8 = (__this->fields)._human;
          if (((pCVar8 != (Characters_Human_o *)0x0) && (lVar9 = *(long *)&(pCVar8->fields).Dead, lVar9 != 0))
             && (pUVar12 = *(UnityEngine_Transform_o **)(lVar9 + 0x10),
                pUVar12 != (UnityEngine_Transform_o *)0x0)) {
            method = (MethodInfo *)0x0;
            UVar31 = UnityEngine_Transform__get_rotation(pUVar12,(MethodInfo *)0x0);
            fVar26 = UVar31.fields.z;
            pCVar8 = (__this->fields)._human;
            if (pCVar8 != (Characters_Human_o *)0x0) {
              pUVar2 = (UnityEngine_Quaternion_Fields *)((long)&(pCVar8->fields)._lastMountMessage + 4);
              uVar3 = pUVar2->x;
              uVar6 = pUVar2->y;
              in_XMM2._4_4_ = uVar6;
              in_XMM2._0_4_ = uVar3;
              uVar4 = (pCVar8->fields)._grabIFrames;
              UVar32 = *pUVar2;
              fVar26 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
              in_XMM2._8_8_ = 0;
              in_XMM3_Da = (float)uVar4;
              UVar31 = UnityEngine_Quaternion__Lerp(UVar31,UVar32,fVar26 * 30.0,(MethodInfo *)0x0);
              method = (MethodInfo *)0x0;
              fVar26 = UVar31.fields.z;
              UnityEngine_Transform__set_rotation(pUVar12,UVar31,(MethodInfo *)0x0);
              pCVar8 = (__this->fields)._human;
              if (((pCVar8 != (Characters_Human_o *)0x0) &&
                  (lVar9 = *(long *)&(pCVar8->fields).Dead, lVar9 != 0)) &&
                 (pUVar13 = *(UnityEngine_Rigidbody_o **)(lVar9 + 0x18),
                 pUVar13 != (UnityEngine_Rigidbody_o *)0x0)) {
                UVar33 = UnityEngine_Rigidbody__get_velocity(pUVar13,(MethodInfo *)0x0);
                UVar34.fields.z = in_XMM1_Da;
                Characters_BladeThrowSpecial__SpawnBladeProjectile(__this,1,UVar34,UVar33,method_00);
                target.fields.z = in_XMM1_Da;
                target.fields.x = (float)(int)UVar34.fields._0_8_;
                target.fields.y = (float)(int)((ulong)UVar34.fields._0_8_ >> 0x20);
                Characters_BladeThrowSpecial__SpawnBladeProjectile(__this,0,target,UVar33,method_01);
                return;
              }
            }
          }
        }
      }
      goto label_042f32cf;
    }
  }
  uVar21 = il2cpp_runtime_helper_022b2fd0();
  name = (Projectiles_BaseProjectile_o *)((ulong)method & 0xffffffff);
  if (g_data_057aded4 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BladeThrowProjectile);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ProjectilePrefabs);
    il2cpp_runtime_helper_023445d0(&"");
    g_data_057aded4 = '\x01';
  }
  if (((pSVar17->m_Items[4] != (Il2CppObject *)0x0) &&
      (pIVar11 = pSVar17->m_Items[4][7].klass, pIVar11 != (Il2CppClass *)0x0)) &&
     (pUVar12 = (UnityEngine_Transform_o *)(pIVar11->_1).name, pUVar12 != (UnityEngine_Transform_o *)0x0)) {
    UVar34 = UnityEngine_Transform__get_position(pUVar12,(MethodInfo *)0x0);
    if (g_data_057a6844 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
      g_data_057a6844 = '\x01';
    }
    if (((pSVar17->m_Items[4] != (Il2CppObject *)0x0) &&
        (pIVar11 = pSVar17->m_Items[4][7].klass, pIVar11 != (Il2CppClass *)0x0)) &&
       (pUVar12 = (UnityEngine_Transform_o *)(pIVar11->_1).name, pUVar12 != (UnityEngine_Transform_o *)0x0)) {
      uVar5 = *(undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x18);
      fVar19 = UVar34.fields.x + (float)uVar5 * 2.5;
      fVar22 = UVar34.fields.y + (float)((ulong)uVar5 >> 0x20) * 2.5;
      fVar27 = UVar34.fields.z + *(float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x20) * 2.5;
      UVar34 = UnityEngine_Transform__get_right(pUVar12,(MethodInfo *)0x0);
      fVar20 = UVar34.fields.x * 0.5;
      fVar23 = UVar34.fields.y * 0.5;
      fVar28 = UVar34.fields.z * 0.5;
      if ((char)name == '\0') {
        fVar19 = fVar19 + fVar20;
        fVar22 = fVar22 + fVar23;
        fVar20 = extraout_XMM0_Dc_03 + 0.0 + extraout_XMM0_Dc_04 * 0.0;
        fVar23 = extraout_XMM0_Dd_03 + 0.0 + extraout_XMM0_Dd_04 * 0.0;
        fVar27 = fVar27 + fVar28;
      }
      else {
        fVar19 = fVar19 - fVar20;
        fVar22 = fVar22 - fVar23;
        fVar20 = (extraout_XMM0_Dc_03 + 0.0) - extraout_XMM0_Dc_04 * 0.0;
        fVar23 = (extraout_XMM0_Dd_03 + 0.0) - extraout_XMM0_Dd_04 * 0.0;
        fVar27 = fVar27 - fVar28;
      }
      if (g_data_057a6845 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
        g_data_057a6845 = '\x01';
      }
      auVar29._0_4_ = (float)uVar21 - fVar19;
      auVar29._4_4_ = (float)((ulong)uVar21 >> 0x20) - fVar22;
      auVar29._8_4_ = extraout_XMM0_Dc_02 - fVar20;
      auVar29._12_4_ = extraout_XMM0_Dd_02 - fVar23;
      fVar26 = fVar26 - fVar27;
      if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      uVar24 = 0;
      uVar25 = 0;
      fVar20 = fVar26 * fVar26 + auVar29._4_4_ * auVar29._4_4_ + auVar29._0_4_ * auVar29._0_4_;
      if (fVar20 < 0.0) {
        fVar20 = sqrtf(fVar20);
        uVar24 = extraout_XMM0_Dc_05;
        uVar25 = extraout_XMM0_Dd_05;
        if (1e-05 < fVar20) goto label_042f3544;
label_042f34ef:
        if (g_data_057a65d5 == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
          g_data_057a65d5 = '\x01';
        }
        uVar21 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
        fVar26 = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
      }
      else {
        fVar20 = SQRT(fVar20);
        if (fVar20 <= 1e-05) goto label_042f34ef;
label_042f3544:
        fVar26 = fVar26 / fVar20;
        auVar14._4_4_ = fVar20;
        auVar14._0_4_ = fVar20;
        auVar14._8_4_ = uVar24;
        auVar14._12_4_ = uVar25;
        auVar30 = divps(auVar29,auVar14);
        uVar21 = auVar30._0_8_;
      }
      fStack_d0 = in_XMM2._0_4_;
      fStack_cc = in_XMM2._4_4_;
      fVar23 = (float)((ulong)uVar21 >> 0x20);
      fVar20 = in_XMM3_Da * fVar26 + fStack_cc * fVar23 + fStack_d0 * (float)uVar21;
      if (fVar20 <= 0.0) {
        fVar20 = 0.0;
      }
      fVar20 = fVar20 + *(float *)((long)pSVar17->m_Items + 0x2c);
      if (*(int *)(TypeInfo_ProjectilePrefabs + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      name = *(Projectiles_BaseProjectile_o **)(*(long *)(TypeInfo_ProjectilePrefabs + 0xb8) + 0x18);
      forward.fields.z = fVar26;
      forward.fields.x = (float)(int)uVar21;
      forward.fields.y = (float)(int)((ulong)uVar21 >> 0x20);
      UVar31 = UnityEngine_Quaternion__LookRotation_4debb20(forward,(MethodInfo *)0x0);
      if (g_data_057a65d5 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
        g_data_057a65d5 = '\x01';
      }
      if ((Photon_Pun_MonoBehaviourPun_o *)pSVar17->m_Items[4] != (Photon_Pun_MonoBehaviourPun_o *)0x0) {
        gravity = **(UnityEngine_Vector3_Fields **)(TypeInfo_Vector3 + 0xb8);
        fVar28 = *(float *)(pSVar17->m_Items + 6);
        pPVar18 = Photon_Pun_MonoBehaviourPun__get_photonView
                            ((Photon_Pun_MonoBehaviourPun_o *)pSVar17->m_Items[4],(MethodInfo *)0x0);
        if (pPVar18 != (Photon_Pun_PhotonView_o *)0x0) {
          velocity.fields.x = (float)uVar21 * fVar20;
          velocity.fields.z = fVar26 * fVar20;
          position.fields.z = fVar27;
          position.fields.x = fVar19;
          position.fields.y = fVar22;
          velocity.fields.y = fVar23 * fVar20;
          name = Projectiles_ProjectileSpawner__Spawn
                           ((System_String_o *)name,position,UVar31,velocity,(UnityEngine_Vector3_o)gravity,
                            fVar28,(pPVar18->fields).viewIdField,"",(System_Object_array *)0x0,
                            (MethodInfo *)0x0);
          if (((pSVar17->m_Items[4] != (Il2CppObject *)0x0) &&
              (pIVar11 = pSVar17->m_Items[4][7].klass, pIVar11 != (Il2CppClass *)0x0)) &&
             (pUVar13 = (UnityEngine_Rigidbody_o *)(pIVar11->_1).namespaze,
             pUVar13 != (UnityEngine_Rigidbody_o *)0x0)) {
            UVar34 = UnityEngine_Rigidbody__get_velocity(pUVar13,(MethodInfo *)0x0);
            if (name != (Projectiles_BaseProjectile_o *)0x0) {
              bVar7 = (TypeInfo_BladeThrowProjectile->_2).naturalAligment;
              if ((bVar7 <= (name->klass->_2).naturalAligment) &&
                 ((name->klass->_2).typeHierarchy[(ulong)bVar7 - 1] == TypeInfo_BladeThrowProjectile)) {
                name[1].fields.m_CancellationTokenSource = UVar34.fields._0_8_;
                *(float *)&name[1].fields.pvCache = UVar34.fields.z;
                return;
              }
              goto label_042f371a;
            }
          }
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
label_042f371a:
  il2cpp_runtime_helper_022b2fd0(name);
  return;
}


// Characters.BladeThrowSpecial$$SpawnBladeProjectile
// il2cpp: void Characters_BladeThrowSpecial__SpawnBladeProjectile (Characters_BladeThrowSpecial_o* __this, bool left, UnityEngine_Vector3_o target, UnityEngine_Vector3_o velocity, const MethodInfo* method);
// 0x42f32e0

void Characters_BladeThrowSpecial__SpawnBladeProjectile
               (Characters_BladeThrowSpecial_o *__this,bool_conflict left,UnityEngine_Vector3_o target,
               UnityEngine_Vector3_o velocity,MethodInfo *method)

{
  float liveTime;
  byte bVar1;
  Characters_Human_o *pCVar2;
  long lVar3;
  UnityEngine_Transform_o *pUVar4;
  UnityEngine_Rigidbody_o *__this_00;
  undefined1 auVar5 [16];
  UnityEngine_Vector3_Fields gravity;
  Photon_Pun_PhotonView_o *pPVar6;
  Projectiles_BaseProjectile_o *name;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float in_XMM0_Dc;
  float extraout_XMM0_Dc;
  float extraout_XMM0_Dc_00;
  undefined4 uVar11;
  undefined4 extraout_XMM0_Dc_01;
  float in_XMM0_Dd;
  float extraout_XMM0_Dd;
  float extraout_XMM0_Dd_00;
  undefined4 uVar12;
  undefined4 extraout_XMM0_Dd_01;
  float fVar13;
  float fVar14;
  undefined1 auVar16 [16];
  UnityEngine_Quaternion_o rotation;
  UnityEngine_Vector3_o UVar17;
  UnityEngine_Vector3_o position;
  UnityEngine_Vector3_o velocity_00;
  float local_78;
  float fStack_74;
  undefined8 local_68;
  float local_48;
  float fStack_44;
  undefined8 uVar15;
  
  name = (Projectiles_BaseProjectile_o *)(ulong)(uint)left;
  if (g_data_057aded4 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BladeThrowProjectile);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ProjectilePrefabs);
    il2cpp_runtime_helper_023445d0(&"");
    g_data_057aded4 = '\x01';
  }
  pCVar2 = (__this->fields)._human;
  if (((pCVar2 != (Characters_Human_o *)0x0) && (lVar3 = *(long *)&(pCVar2->fields).Dead, lVar3 != 0)) &&
     (pUVar4 = *(UnityEngine_Transform_o **)(lVar3 + 0x10), pUVar4 != (UnityEngine_Transform_o *)0x0)) {
    UVar17 = UnityEngine_Transform__get_position(pUVar4,(MethodInfo *)0x0);
    if (g_data_057a6844 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
      g_data_057a6844 = '\x01';
    }
    pCVar2 = (__this->fields)._human;
    if (((pCVar2 != (Characters_Human_o *)0x0) && (lVar3 = *(long *)&(pCVar2->fields).Dead, lVar3 != 0)) &&
       (pUVar4 = *(UnityEngine_Transform_o **)(lVar3 + 0x10), pUVar4 != (UnityEngine_Transform_o *)0x0)) {
      uVar15 = *(undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x18);
      fVar7 = UVar17.fields.x + (float)uVar15 * 2.5;
      fVar9 = UVar17.fields.y + (float)((ulong)uVar15 >> 0x20) * 2.5;
      fVar13 = UVar17.fields.z + *(float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x20) * 2.5;
      UVar17 = UnityEngine_Transform__get_right(pUVar4,(MethodInfo *)0x0);
      fVar8 = UVar17.fields.x * 0.5;
      fVar10 = UVar17.fields.y * 0.5;
      fVar14 = UVar17.fields.z * 0.5;
      if ((char)left == '\0') {
        fVar7 = fVar7 + fVar8;
        fVar9 = fVar9 + fVar10;
        fVar8 = extraout_XMM0_Dc + 0.0 + extraout_XMM0_Dc_00 * 0.0;
        fVar10 = extraout_XMM0_Dd + 0.0 + extraout_XMM0_Dd_00 * 0.0;
        fVar13 = fVar13 + fVar14;
      }
      else {
        fVar7 = fVar7 - fVar8;
        fVar9 = fVar9 - fVar10;
        fVar8 = (extraout_XMM0_Dc + 0.0) - extraout_XMM0_Dc_00 * 0.0;
        fVar10 = (extraout_XMM0_Dd + 0.0) - extraout_XMM0_Dd_00 * 0.0;
        fVar13 = fVar13 - fVar14;
      }
      local_78 = target.fields.x;
      fStack_74 = target.fields.y;
      if (g_data_057a6845 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
        g_data_057a6845 = '\x01';
      }
      auVar16._0_4_ = local_78 - fVar7;
      auVar16._4_4_ = fStack_74 - fVar9;
      auVar16._8_4_ = in_XMM0_Dc - fVar8;
      auVar16._12_4_ = in_XMM0_Dd - fVar10;
      fVar8 = target.fields.z - fVar13;
      if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      uVar11 = 0;
      uVar12 = 0;
      fVar10 = fVar8 * fVar8 + auVar16._4_4_ * auVar16._4_4_ + auVar16._0_4_ * auVar16._0_4_;
      if (fVar10 < 0.0) {
        fVar10 = sqrtf(fVar10);
        uVar11 = extraout_XMM0_Dc_01;
        uVar12 = extraout_XMM0_Dd_01;
        if (1e-05 < fVar10) goto label_042f3544;
label_042f34ef:
        if (g_data_057a65d5 == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
          g_data_057a65d5 = '\x01';
        }
        uVar15 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
        fVar8 = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
      }
      else {
        fVar10 = SQRT(fVar10);
        if (fVar10 <= 1e-05) goto label_042f34ef;
label_042f3544:
        fVar8 = fVar8 / fVar10;
        auVar5._4_4_ = fVar10;
        auVar5._0_4_ = fVar10;
        auVar5._8_4_ = uVar11;
        auVar5._12_4_ = uVar12;
        auVar16 = divps(auVar16,auVar5);
        uVar15 = auVar16._0_8_;
      }
      local_48 = velocity.fields.x;
      fStack_44 = velocity.fields.y;
      fVar14 = (float)((ulong)uVar15 >> 0x20);
      fVar10 = velocity.fields.z * fVar8 + fStack_44 * fVar14 + local_48 * (float)uVar15;
      if (fVar10 <= 0.0) {
        fVar10 = 0.0;
      }
      fVar10 = fVar10 + (__this->fields).Speed;
      if (*(int *)(TypeInfo_ProjectilePrefabs + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      name = *(Projectiles_BaseProjectile_o **)(*(long *)(TypeInfo_ProjectilePrefabs + 0xb8) + 0x18);
      UVar17.fields.z = fVar8;
      UVar17.fields.x = (float)(int)uVar15;
      UVar17.fields.y = (float)(int)((ulong)uVar15 >> 0x20);
      rotation = UnityEngine_Quaternion__LookRotation_4debb20(UVar17,(MethodInfo *)0x0);
      if (g_data_057a65d5 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
        g_data_057a65d5 = '\x01';
      }
      pCVar2 = (__this->fields)._human;
      if (pCVar2 != (Characters_Human_o *)0x0) {
        gravity = **(UnityEngine_Vector3_Fields **)(TypeInfo_Vector3 + 0xb8);
        liveTime = (__this->fields).LiveTime;
        pPVar6 = Photon_Pun_MonoBehaviourPun__get_photonView
                           ((Photon_Pun_MonoBehaviourPun_o *)pCVar2,(MethodInfo *)0x0);
        if (pPVar6 != (Photon_Pun_PhotonView_o *)0x0) {
          velocity_00.fields.x = (float)uVar15 * fVar10;
          velocity_00.fields.z = fVar8 * fVar10;
          position.fields.z = fVar13;
          position.fields.x = fVar7;
          position.fields.y = fVar9;
          velocity_00.fields.y = fVar14 * fVar10;
          name = Projectiles_ProjectileSpawner__Spawn
                           ((System_String_o *)name,position,rotation,velocity_00,
                            (UnityEngine_Vector3_o)gravity,liveTime,(pPVar6->fields).viewIdField,"",
                            (System_Object_array *)0x0,(MethodInfo *)0x0);
          pCVar2 = (__this->fields)._human;
          if (((pCVar2 != (Characters_Human_o *)0x0) && (lVar3 = *(long *)&(pCVar2->fields).Dead, lVar3 != 0))
             && (__this_00 = *(UnityEngine_Rigidbody_o **)(lVar3 + 0x18),
                __this_00 != (UnityEngine_Rigidbody_o *)0x0)) {
            UVar17 = UnityEngine_Rigidbody__get_velocity(__this_00,(MethodInfo *)0x0);
            if (name != (Projectiles_BaseProjectile_o *)0x0) {
              bVar1 = (TypeInfo_BladeThrowProjectile->_2).naturalAligment;
              if ((bVar1 <= (name->klass->_2).naturalAligment) &&
                 ((name->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_BladeThrowProjectile)) {
                name[1].fields.m_CancellationTokenSource = UVar17.fields._0_8_;
                *(float *)&name[1].fields.pvCache = UVar17.fields.z;
                return;
              }
              goto label_042f371a;
            }
          }
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
label_042f371a:
  il2cpp_runtime_helper_022b2fd0(name);
  return;
}


