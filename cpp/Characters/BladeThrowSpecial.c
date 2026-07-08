// Type: Characters.BladeThrowSpecial
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/Characters/BladeThrowSpecial.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/Characters/Human/Specials/BladeThrowSpecial.cs  [CHANGED since prior version]
// --------------------------------

// Characters.BladeThrowSpecial$$get_ActiveTime
// il2cpp: float Characters_BladeThrowSpecial__get_ActiveTime (Characters_BladeThrowSpecial_o* __this, const MethodInfo* method);
// 0x3fe64f0

float Characters_BladeThrowSpecial__get_ActiveTime
                (Characters_BladeThrowSpecial_o *__this,MethodInfo *method)

{
  return 0.8;
}


// Characters.BladeThrowSpecial$$.ctor
// il2cpp: void Characters_BladeThrowSpecial___ctor (Characters_BladeThrowSpecial_o* __this, Characters_BaseCharacter_o* owner, const MethodInfo* method);
// 0x3fd7950

void Characters_BladeThrowSpecial___ctor
               (Characters_BladeThrowSpecial_o *__this,Characters_BaseCharacter_o *owner,
               MethodInfo *method)

{
  (__this->fields).Speed = 80.0;
  (__this->fields).LiveTime = 2.0;
  Characters_BaseAttackSpecial___ctor((Characters_BaseAttackSpecial_o *)__this,owner,method);
  (__this->fields).Cooldown = 1.0;
  return;
}


// Characters.BladeThrowSpecial$$Activate
// il2cpp: void Characters_BladeThrowSpecial__Activate (Characters_BladeThrowSpecial_o* __this, const MethodInfo* method);
// 0x3fe6500

void Characters_BladeThrowSpecial__Activate
               (Characters_BladeThrowSpecial_o *__this,MethodInfo *method)

{
  Characters_Human_o *__this_00;
  
  if (DAT_05704164 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanAnimations);
    DAT_05704164 = '\x01';
  }
  *(undefined1 *)&(__this->fields)._needActivate = 1;
  __this_00 = (__this->fields)._human;
  if (*(int *)(TypeInfo_HumanAnimations + 0xe4) == 0) {
    il2cpp_init_class();
  }
  if (__this_00 != (Characters_Human_o *)0x0) {
    Characters_Human__StartSpecialAttack
              (__this_00,*(System_String_o **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x210),
               (MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.BladeThrowSpecial$$ActiveFixedUpdate
// il2cpp: void Characters_BladeThrowSpecial__ActiveFixedUpdate (Characters_BladeThrowSpecial_o* __this, const MethodInfo* method);
// 0x3fe6570

void Characters_BladeThrowSpecial__ActiveFixedUpdate
               (Characters_BladeThrowSpecial_o *__this,MethodInfo *method)

{
  float *pfVar1;
  byte bVar2;
  Characters_Human_o *pCVar3;
  long lVar4;
  UnityEngine_GameObject_o *pUVar5;
  System_Object_array *pSVar6;
  Il2CppClass *pIVar7;
  UnityEngine_Transform_o *pUVar8;
  UnityEngine_Rigidbody_o *__this_00;
  undefined1 auVar9 [16];
  undefined1 auVar10 [12];
  MethodInfo *method_00;
  MethodInfo *method_01;
  float fVar11;
  float extraout_XMM0_Dc;
  float extraout_XMM0_Dc_00;
  undefined4 uVar12;
  undefined4 extraout_XMM0_Dc_01;
  float extraout_XMM0_Dd;
  float extraout_XMM0_Dd_00;
  undefined4 uVar13;
  undefined4 extraout_XMM0_Dd_01;
  float in_XMM1_Da;
  float fVar14;
  undefined1 auVar16 [16];
  UnityEngine_Vector3_o UVar17;
  UnityEngine_Vector3_o euler;
  UnityEngine_Vector3_o target;
  UnityEngine_Vector3_o target_00;
  UnityEngine_Quaternion_o UVar18;
  UnityEngine_Quaternion_Fields UVar19;
  undefined8 uVar15;
  
  if (DAT_05704165 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BladeWeapon);
    il2cpp_init_method_metadata(&TypeInfo_HumanSounds);
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_get_Value);
    DAT_05704165 = '\x01';
  }
  pCVar3 = (__this->fields)._human;
  if (pCVar3 == (Characters_Human_o *)0x0) goto LAB_03fe6a0f;
  if ((pCVar3->fields).FinishSetup != 9) {
    *(undefined1 *)&(__this->fields).IsActive = 0;
  }
  if (((char)(__this->fields)._needActivate == '\0') ||
     (pfVar1 = &(__this->fields)._activeTimeLeft, 0.4 < *pfVar1 || *pfVar1 == 0.4)) {
    return;
  }
  *(undefined1 *)&(__this->fields)._needActivate = 0;
  lVar4 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x80);
  if ((lVar4 == 0) || (lVar4 = *(long *)(lVar4 + 0x88), lVar4 == 0)) goto LAB_03fe6a0f;
  bVar2 = *(byte *)(lVar4 + 0x11);
  if (*(int *)(TypeInfo_HumanSounds + 0xe4) == 0) {
    il2cpp_init_class();
  }
  Characters_BaseCharacter__PlaySound
            ((Characters_BaseCharacter_o *)pCVar3,
             *(System_String_o **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x60 + (ulong)bVar2 * 8),
             (MethodInfo *)0x0);
  pCVar3 = (__this->fields)._human;
  if (((pCVar3 == (Characters_Human_o *)0x0) ||
      (lVar4 = *(long *)&(pCVar3->fields).MountState, lVar4 == 0)) ||
     (pUVar5 = *(UnityEngine_GameObject_o **)(lVar4 + 0xb8),
     pUVar5 == (UnityEngine_GameObject_o *)0x0)) goto LAB_03fe6a0f;
  UnityEngine_GameObject__SetActive(pUVar5,0,(MethodInfo *)0x0);
  pCVar3 = (__this->fields)._human;
  if (((pCVar3 == (Characters_Human_o *)0x0) ||
      (lVar4 = *(long *)&(pCVar3->fields).MountState, lVar4 == 0)) ||
     (pUVar5 = *(UnityEngine_GameObject_o **)(lVar4 + 0xc0),
     pUVar5 == (UnityEngine_GameObject_o *)0x0)) goto LAB_03fe6a0f;
  UnityEngine_GameObject__SetActive(pUVar5,0,(MethodInfo *)0x0);
  pCVar3 = (__this->fields)._human;
  if ((pCVar3 == (Characters_Human_o *)0x0) ||
     (pSVar6 = (pCVar3->fields).crossfadeCache, pSVar6 == (System_Object_array *)0x0))
  goto LAB_03fe6a0f;
  pIVar7 = (pSVar6->obj).klass;
  bVar2 = (TypeInfo_BladeWeapon->_2).naturalAligment;
  if (((pIVar7->_2).naturalAligment < bVar2) ||
     ((pIVar7->_2).typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_BladeWeapon)) {
                    /* WARNING: Subroutine does not return */
    il2cpp_unwind_resume(pSVar6);
  }
  *(undefined4 *)(pSVar6->m_Items + 4) = 0;
  target.fields._0_8_ = (*(pCVar3->klass->vtable)._66_GetAimPoint.methodPtr)();
  pCVar3 = (__this->fields)._human;
  if (((pCVar3 == (Characters_Human_o *)0x0) ||
      (lVar4 = *(long *)&(pCVar3->fields).Dead, lVar4 == 0)) ||
     (pUVar8 = *(UnityEngine_Transform_o **)(lVar4 + 0x10), pUVar8 == (UnityEngine_Transform_o *)0x0
     )) goto LAB_03fe6a0f;
  UVar17 = UnityEngine_Transform__get_position(pUVar8,(MethodInfo *)0x0);
  if (DAT_056fde20 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Math);
    DAT_056fde20 = '\x01';
  }
  auVar16._0_4_ = (float)target.fields._0_8_ - UVar17.fields.x;
  auVar16._4_4_ = (float)((ulong)target.fields._0_8_ >> 0x20) - UVar17.fields.y;
  auVar16._8_4_ = extraout_XMM0_Dc - extraout_XMM0_Dc_00;
  auVar16._12_4_ = extraout_XMM0_Dd - extraout_XMM0_Dd_00;
  fVar14 = in_XMM1_Da - UVar17.fields.z;
  if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
    il2cpp_init_class();
  }
  uVar12 = 0;
  uVar13 = 0;
  fVar11 = fVar14 * fVar14 + auVar16._4_4_ * auVar16._4_4_ + auVar16._0_4_ * auVar16._0_4_;
  if (fVar11 < 0.0) {
    fVar11 = sqrtf(fVar11);
    uVar12 = extraout_XMM0_Dc_01;
    uVar13 = extraout_XMM0_Dd_01;
    if (1e-05 < fVar11) goto LAB_03fe687d;
LAB_03fe6816:
    if (DAT_056fdd15 == '\0') {
      il2cpp_init_method_metadata();
      DAT_056fdd15 = '\x01';
    }
    uVar15 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
    fVar14 = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
  }
  else {
    fVar11 = SQRT(fVar11);
    if (fVar11 <= 1e-05) goto LAB_03fe6816;
LAB_03fe687d:
    fVar14 = fVar14 / fVar11;
    auVar9._4_4_ = fVar11;
    auVar9._0_4_ = fVar11;
    auVar9._8_4_ = uVar12;
    auVar9._12_4_ = uVar13;
    auVar16 = divps(auVar16,auVar9);
    uVar15 = auVar16._0_8_;
  }
  pCVar3 = (__this->fields)._human;
  UVar17.fields.z = fVar14;
  UVar17.fields.x = (float)(int)uVar15;
  UVar17.fields.y = (float)(int)((ulong)uVar15 >> 0x20);
  UVar18 = UnityEngine_Quaternion__LookRotation(UVar17,(MethodInfo *)0x0);
  UVar17 = UnityEngine_Quaternion__Internal_ToEulerRad(UVar18,(MethodInfo *)0x0);
  euler.fields.x = UVar17.fields.x * 57.29578;
  euler.fields.y = UVar17.fields.y * 57.29578;
  euler.fields.z = UVar17.fields.z * 57.29578;
  UVar17 = UnityEngine_Quaternion__Internal_MakePositive(euler,(MethodInfo *)0x0);
  if (pCVar3 != (Characters_Human_o *)0x0) {
    *(float *)&(pCVar3->fields).Detection = UVar17.fields.y;
    pCVar3 = (__this->fields)._human;
    if (pCVar3 != (Characters_Human_o *)0x0) {
      auVar10._4_8_ = 0;
      auVar10._0_4_ = *(float *)&(pCVar3->fields).Detection * 0.017453292;
      UVar19 = (UnityEngine_Quaternion_Fields)
               UnityEngine_Quaternion__Internal_FromEulerRad
                         ((UnityEngine_Vector3_o)(auVar10 << 0x20),(MethodInfo *)0x0);
      *(UnityEngine_Quaternion_Fields *)((long)&(pCVar3->fields)._lastMountMessage + 4) = UVar19;
      pCVar3 = (__this->fields)._human;
      if (((pCVar3 != (Characters_Human_o *)0x0) &&
          (lVar4 = *(long *)&(pCVar3->fields).Dead, lVar4 != 0)) &&
         (pUVar8 = *(UnityEngine_Transform_o **)(lVar4 + 0x10),
         pUVar8 != (UnityEngine_Transform_o *)0x0)) {
        UVar18 = UnityEngine_Transform__get_rotation(pUVar8,(MethodInfo *)0x0);
        pCVar3 = (__this->fields)._human;
        if (pCVar3 != (Characters_Human_o *)0x0) {
          UVar19 = *(UnityEngine_Quaternion_Fields *)((long)&(pCVar3->fields)._lastMountMessage + 4)
          ;
          fVar14 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
          UVar18 = UnityEngine_Quaternion__Lerp(UVar18,UVar19,fVar14 * 30.0,(MethodInfo *)0x0);
          UnityEngine_Transform__set_rotation(pUVar8,UVar18,(MethodInfo *)0x0);
          pCVar3 = (__this->fields)._human;
          if (((pCVar3 != (Characters_Human_o *)0x0) &&
              (lVar4 = *(long *)&(pCVar3->fields).Dead, lVar4 != 0)) &&
             (__this_00 = *(UnityEngine_Rigidbody_o **)(lVar4 + 0x18),
             __this_00 != (UnityEngine_Rigidbody_o *)0x0)) {
            UVar17 = UnityEngine_Rigidbody__get_velocity(__this_00,(MethodInfo *)0x0);
            target.fields.z = in_XMM1_Da;
            Characters_BladeThrowSpecial__SpawnBladeProjectile(__this,1,target,UVar17,method_00);
            target_00.fields.z = in_XMM1_Da;
            target_00.fields.x = (float)(int)target.fields._0_8_;
            target_00.fields.y = (float)(int)((ulong)target.fields._0_8_ >> 0x20);
            Characters_BladeThrowSpecial__SpawnBladeProjectile(__this,0,target_00,UVar17,method_01);
            return;
          }
        }
      }
    }
  }
LAB_03fe6a0f:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.BladeThrowSpecial$$SpawnBladeProjectile
// il2cpp: void Characters_BladeThrowSpecial__SpawnBladeProjectile (Characters_BladeThrowSpecial_o* __this, bool left, UnityEngine_Vector3_o target, UnityEngine_Vector3_o velocity, const MethodInfo* method);
// 0x3fe6a20

void Characters_BladeThrowSpecial__SpawnBladeProjectile
               (Characters_BladeThrowSpecial_o *__this,bool_conflict left,
               UnityEngine_Vector3_o target,UnityEngine_Vector3_o velocity,MethodInfo *method)

{
  float liveTime;
  byte bVar1;
  Characters_Human_o *pCVar2;
  long lVar3;
  UnityEngine_Transform_o *pUVar4;
  System_String_o *name;
  UnityEngine_Rigidbody_o *__this_00;
  undefined1 auVar5 [16];
  UnityEngine_Vector3_Fields gravity;
  Photon_Pun_PhotonView_o *pPVar6;
  Projectiles_BaseProjectile_o *pPVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float in_XMM0_Dc;
  float extraout_XMM0_Dc;
  float extraout_XMM0_Dc_00;
  undefined4 uVar12;
  undefined4 extraout_XMM0_Dc_01;
  float in_XMM0_Dd;
  float extraout_XMM0_Dd;
  float extraout_XMM0_Dd_00;
  undefined4 uVar13;
  undefined4 extraout_XMM0_Dd_01;
  float fVar14;
  float fVar15;
  undefined1 auVar17 [16];
  UnityEngine_Vector3_o UVar18;
  UnityEngine_Vector3_o position;
  UnityEngine_Quaternion_o rotation;
  UnityEngine_Vector3_o velocity_00;
  float local_78;
  float fStack_74;
  undefined8 local_68;
  float local_48;
  float fStack_44;
  undefined8 uVar16;
  
  if (DAT_05704166 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BladeThrowProjectile);
    il2cpp_init_method_metadata(&TypeInfo_ProjectilePrefabs);
    il2cpp_init_method_metadata(&"");
    DAT_05704166 = '\x01';
  }
  pCVar2 = (__this->fields)._human;
  if (((pCVar2 == (Characters_Human_o *)0x0) ||
      (lVar3 = *(long *)&(pCVar2->fields).Dead, lVar3 == 0)) ||
     (pUVar4 = *(UnityEngine_Transform_o **)(lVar3 + 0x10), pUVar4 == (UnityEngine_Transform_o *)0x0
     )) goto LAB_03fe6e55;
  UVar18 = UnityEngine_Transform__get_position(pUVar4,(MethodInfo *)0x0);
  if (DAT_056fde1f == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Vector3);
    DAT_056fde1f = '\x01';
  }
  pCVar2 = (__this->fields)._human;
  if (((pCVar2 == (Characters_Human_o *)0x0) ||
      (lVar3 = *(long *)&(pCVar2->fields).Dead, lVar3 == 0)) ||
     (pUVar4 = *(UnityEngine_Transform_o **)(lVar3 + 0x10), pUVar4 == (UnityEngine_Transform_o *)0x0
     )) goto LAB_03fe6e55;
  uVar16 = *(undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x18);
  fVar8 = UVar18.fields.x + (float)uVar16 * 2.5;
  fVar10 = UVar18.fields.y + (float)((ulong)uVar16 >> 0x20) * 2.5;
  fVar14 = UVar18.fields.z + *(float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x20) * 2.5;
  UVar18 = UnityEngine_Transform__get_right(pUVar4,(MethodInfo *)0x0);
  fVar9 = UVar18.fields.x * 0.5;
  fVar11 = UVar18.fields.y * 0.5;
  fVar15 = UVar18.fields.z * 0.5;
  if ((char)left == '\0') {
    fVar8 = fVar8 + fVar9;
    fVar10 = fVar10 + fVar11;
    fVar9 = extraout_XMM0_Dc + 0.0 + extraout_XMM0_Dc_00 * 0.0;
    fVar11 = extraout_XMM0_Dd + 0.0 + extraout_XMM0_Dd_00 * 0.0;
    fVar14 = fVar14 + fVar15;
  }
  else {
    fVar8 = fVar8 - fVar9;
    fVar10 = fVar10 - fVar11;
    fVar9 = (extraout_XMM0_Dc + 0.0) - extraout_XMM0_Dc_00 * 0.0;
    fVar11 = (extraout_XMM0_Dd + 0.0) - extraout_XMM0_Dd_00 * 0.0;
    fVar14 = fVar14 - fVar15;
  }
  local_78 = target.fields.x;
  fStack_74 = target.fields.y;
  if (DAT_056fde20 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Math);
    DAT_056fde20 = '\x01';
  }
  auVar17._0_4_ = local_78 - fVar8;
  auVar17._4_4_ = fStack_74 - fVar10;
  auVar17._8_4_ = in_XMM0_Dc - fVar9;
  auVar17._12_4_ = in_XMM0_Dd - fVar11;
  fVar9 = target.fields.z - fVar14;
  if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
    il2cpp_init_class();
  }
  uVar12 = 0;
  uVar13 = 0;
  fVar11 = fVar9 * fVar9 + auVar17._4_4_ * auVar17._4_4_ + auVar17._0_4_ * auVar17._0_4_;
  if (fVar11 < 0.0) {
    fVar11 = sqrtf(fVar11);
    uVar12 = extraout_XMM0_Dc_01;
    uVar13 = extraout_XMM0_Dd_01;
    if (1e-05 < fVar11) goto LAB_03fe6c84;
LAB_03fe6c2f:
    if (DAT_056fdd15 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_Vector3);
      DAT_056fdd15 = '\x01';
    }
    uVar16 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
    fVar9 = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
  }
  else {
    fVar11 = SQRT(fVar11);
    if (fVar11 <= 1e-05) goto LAB_03fe6c2f;
LAB_03fe6c84:
    fVar9 = fVar9 / fVar11;
    auVar5._4_4_ = fVar11;
    auVar5._0_4_ = fVar11;
    auVar5._8_4_ = uVar12;
    auVar5._12_4_ = uVar13;
    auVar17 = divps(auVar17,auVar5);
    uVar16 = auVar17._0_8_;
  }
  local_48 = velocity.fields.x;
  fStack_44 = velocity.fields.y;
  fVar15 = (float)((ulong)uVar16 >> 0x20);
  fVar11 = velocity.fields.z * fVar9 + fStack_44 * fVar15 + local_48 * (float)uVar16;
  if (fVar11 <= 0.0) {
    fVar11 = 0.0;
  }
  fVar11 = fVar11 + (__this->fields).Speed;
  if (*(int *)(TypeInfo_ProjectilePrefabs + 0xe4) == 0) {
    il2cpp_init_class();
  }
  name = *(System_String_o **)(*(long *)(TypeInfo_ProjectilePrefabs + 0xb8) + 0x18);
  UVar18.fields.z = fVar9;
  UVar18.fields.x = (float)(int)uVar16;
  UVar18.fields.y = (float)(int)((ulong)uVar16 >> 0x20);
  rotation = UnityEngine_Quaternion__LookRotation(UVar18,(MethodInfo *)0x0);
  if (DAT_056fdd15 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Vector3);
    DAT_056fdd15 = '\x01';
  }
  pCVar2 = (__this->fields)._human;
  if (pCVar2 != (Characters_Human_o *)0x0) {
    gravity = **(UnityEngine_Vector3_Fields **)(TypeInfo_Vector3 + 0xb8);
    liveTime = (__this->fields).LiveTime;
    pPVar6 = Photon_Pun_MonoBehaviourPun__get_photonView
                       ((Photon_Pun_MonoBehaviourPun_o *)pCVar2,(MethodInfo *)0x0);
    if (pPVar6 != (Photon_Pun_PhotonView_o *)0x0) {
      velocity_00.fields.x = (float)uVar16 * fVar11;
      velocity_00.fields.z = fVar9 * fVar11;
      position.fields.z = fVar14;
      position.fields.x = fVar8;
      position.fields.y = fVar10;
      velocity_00.fields.y = fVar15 * fVar11;
      pPVar7 = Projectiles_ProjectileSpawner__Spawn
                         (name,position,rotation,velocity_00,(UnityEngine_Vector3_o)gravity,liveTime
                          ,(pPVar6->fields).viewIdField,"",(System_Object_array *)0x0,
                          (MethodInfo *)0x0);
      pCVar2 = (__this->fields)._human;
      if (((pCVar2 != (Characters_Human_o *)0x0) &&
          (lVar3 = *(long *)&(pCVar2->fields).Dead, lVar3 != 0)) &&
         (__this_00 = *(UnityEngine_Rigidbody_o **)(lVar3 + 0x18),
         __this_00 != (UnityEngine_Rigidbody_o *)0x0)) {
        UVar18 = UnityEngine_Rigidbody__get_velocity(__this_00,(MethodInfo *)0x0);
        if (pPVar7 != (Projectiles_BaseProjectile_o *)0x0) {
          bVar1 = (TypeInfo_BladeThrowProjectile->_2).naturalAligment;
          if ((bVar1 <= (pPVar7->klass->_2).naturalAligment) &&
             ((pPVar7->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_BladeThrowProjectile)) {
            pPVar7[1].fields.m_CancellationTokenSource = UVar18.fields._0_8_;
            *(float *)&pPVar7[1].fields.pvCache = UVar18.fields.z;
            return;
          }
                    /* WARNING: Subroutine does not return */
          il2cpp_unwind_resume(pPVar7);
        }
      }
    }
  }
LAB_03fe6e55:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


