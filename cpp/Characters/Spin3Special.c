// Type: Characters.Spin3Special
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/Characters/Spin3Special.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/Characters/Human/Specials/Spin3Special.cs  [CHANGED since prior version]
// --------------------------------

// Characters.Spin3Special$$get_ActiveTime
// il2cpp: float Characters_Spin3Special__get_ActiveTime (Characters_Spin3Special_o* __this, const MethodInfo* method);
// 0x3febee0

float Characters_Spin3Special__get_ActiveTime(Characters_Spin3Special_o *__this,MethodInfo *method)

{
  return 1.0;
}


// Characters.Spin3Special$$.ctor
// il2cpp: void Characters_Spin3Special___ctor (Characters_Spin3Special_o* __this, Characters_BaseCharacter_o* owner, const MethodInfo* method);
// 0x3fd7920

void Characters_Spin3Special___ctor
               (Characters_Spin3Special_o *__this,Characters_BaseCharacter_o *owner,
               MethodInfo *method)

{
  (__this->fields).AnimationLoopStartTime = 0.35;
  (__this->fields).AnimationLoopEndTime = 0.5;
  (__this->fields).Loops = 3;
  (__this->fields)._startSpin = 0x41500000;
  Characters_BaseAttackSpecial___ctor((Characters_BaseAttackSpecial_o *)__this,owner,method);
  (__this->fields).Cooldown = 3.5;
  return;
}


// Characters.Spin3Special$$Activate
// il2cpp: void Characters_Spin3Special__Activate (Characters_Spin3Special_o* __this, const MethodInfo* method);
// 0x3febef0

void Characters_Spin3Special__Activate(Characters_Spin3Special_o *__this,MethodInfo *method)

{
  Characters_HumanComponentCache_o *__this_00;
  Characters_HookUseable_o *__this_01;
  Characters_Horse_o *pCVar1;
  Characters_BaseUseable_o *pCVar2;
  undefined8 uVar3;
  Characters_Human_o *pCVar4;
  float fVar5;
  
  pCVar4 = (__this->fields)._human;
  if (pCVar4 != (Characters_Human_o *)0x0) {
    if (*(int *)&(pCVar4->fields).Weapon == 0) {
      (__this->fields)._stage = 0;
      __this_00 = (pCVar4->fields).HumanCache;
    }
    else {
      Characters_Human__Unmount(pCVar4,1,(MethodInfo *)0x0);
      pCVar4 = (__this->fields)._human;
      (__this->fields)._stage = 0;
      if (pCVar4 == (Characters_Human_o *)0x0) goto LAB_03febfe6;
      __this_00 = (pCVar4->fields).HumanCache;
    }
    if (__this_00 != (Characters_HumanComponentCache_o *)0x0) {
      Characters_HookUseable__DisableAnyHook
                ((Characters_HookUseable_o *)__this_00,(MethodInfo *)0x0);
      pCVar4 = (__this->fields)._human;
      if ((pCVar4 != (Characters_Human_o *)0x0) &&
         (__this_01 = (Characters_HookUseable_o *)(pCVar4->fields).Special,
         __this_01 != (Characters_HookUseable_o *)0x0)) {
        Characters_HookUseable__DisableAnyHook(__this_01,(MethodInfo *)0x0);
        pCVar4 = (__this->fields)._human;
        if ((pCVar4 != (Characters_Human_o *)0x0) &&
           (pCVar1 = (pCVar4->fields).Horse, pCVar1 != (Characters_Horse_o *)0x0)) {
          fVar5 = 0.0;
          if ((float)(pCVar1->fields).FootstepsEnabled <= 0.0) {
LAB_03febfc5:
            uVar3 = (*(pCVar4->klass->vtable)._66_GetAimPoint.methodPtr)
                              (pCVar4,(pCVar4->klass->vtable)._66_GetAimPoint.method);
            (__this->fields)._aimPoint.fields.x = (float)(int)uVar3;
            (__this->fields)._aimPoint.fields.y = (float)(int)((ulong)uVar3 >> 0x20);
            (__this->fields)._aimPoint.fields.z = fVar5;
            *(undefined2 *)&(__this->fields)._pulled = 0;
            return;
          }
          pCVar2 = (pCVar4->fields).Special;
          if (pCVar2 != (Characters_BaseUseable_o *)0x0) {
            (*(pCVar2->klass->vtable)._12_SetInput.methodPtr)
                      (pCVar2,1,(pCVar2->klass->vtable)._12_SetInput.method);
            pCVar4 = (__this->fields)._human;
            if (pCVar4 != (Characters_Human_o *)0x0) goto LAB_03febfc5;
          }
        }
      }
    }
  }
LAB_03febfe6:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.Spin3Special$$ActiveFixedUpdate
// il2cpp: void Characters_Spin3Special__ActiveFixedUpdate (Characters_Spin3Special_o* __this, const MethodInfo* method);
// 0x3febff0

void Characters_Spin3Special__ActiveFixedUpdate
               (Characters_Spin3Special_o *__this,MethodInfo *method)

{
  float *pfVar1;
  int32_t *piVar2;
  char cVar3;
  Characters_Human_o *pCVar4;
  Characters_AnimationHandler_o *pCVar5;
  UnityEngine_Rigidbody_o *pUVar6;
  Characters_BaseUseable_o *pCVar7;
  Characters_HumanComponentCache_o *__this_00;
  Characters_HookUseable_o *pCVar8;
  undefined1 auVar9 [16];
  bool_conflict bVar10;
  int iVar11;
  int32_t iVar12;
  UnityEngine_Transform_o *__this_01;
  long lVar13;
  float fVar14;
  float fVar15;
  float extraout_XMM0_Dc;
  float extraout_XMM0_Dc_00;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Dc_01;
  float extraout_XMM0_Dd;
  float extraout_XMM0_Dd_00;
  undefined4 uVar17;
  undefined4 extraout_XMM0_Dd_01;
  undefined1 auVar19 [16];
  UnityEngine_Vector3_o UVar20;
  UnityEngine_Vector3_o force;
  UnityEngine_Vector3_o UVar21;
  float fStack_58;
  float fStack_54;
  undefined8 uVar18;
  
  if (DAT_05704181 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanAnimations);
    il2cpp_init_method_metadata(&TypeInfo_HumanSounds);
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_get_Value);
    DAT_05704181 = '\x01';
  }
  if (*(char *)((long)&(__this->fields)._pulled + 1) == '\0') {
    if (1.0 < (__this->fields)._activeTimeLeft) {
      return;
    }
    pCVar4 = (__this->fields)._human;
    if (*(int *)(TypeInfo_HumanAnimations + 0xe4) == 0) {
      il2cpp_init_class();
    }
    if (pCVar4 != (Characters_Human_o *)0x0) {
      Characters_Human__StartSpecialAttack
                (pCVar4,*(System_String_o **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x208),
                 (MethodInfo *)0x0);
      pCVar4 = (__this->fields)._human;
      if (((pCVar4 != (Characters_Human_o *)0x0) &&
          (lVar13 = *(long *)&(pCVar4->fields).Dead, lVar13 != 0)) &&
         (pUVar6 = *(UnityEngine_Rigidbody_o **)(lVar13 + 0x18),
         pUVar6 != (UnityEngine_Rigidbody_o *)0x0)) {
        UVar20 = UnityEngine_Rigidbody__get_velocity(pUVar6,(MethodInfo *)0x0);
        if (DAT_056fde1f == '\0') {
          il2cpp_init_method_metadata(&TypeInfo_Vector3);
          DAT_056fde1f = '\x01';
        }
        uVar18 = *(undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x18);
        UVar21.fields.x = UVar20.fields.x + (float)uVar18 * 5.0;
        UVar21.fields.y = UVar20.fields.y + (float)((ulong)uVar18 >> 0x20) * 5.0;
        UVar21.fields.z = UVar20.fields.z + *(float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x20) * 5.0;
        UnityEngine_Rigidbody__set_velocity(pUVar6,UVar21,(MethodInfo *)0x0);
        *(undefined1 *)((long)&(__this->fields)._pulled + 1) = 1;
        return;
      }
    }
    goto LAB_03fec62a;
  }
  pCVar4 = (__this->fields)._human;
  if (pCVar4 == (Characters_Human_o *)0x0) goto LAB_03fec62a;
  if ((pCVar4->fields).FinishSetup != 9) {
    *(undefined1 *)&(__this->fields).IsActive = 0;
  }
  pCVar5 = *(Characters_AnimationHandler_o **)&(pCVar4->fields)._cameraFPS;
  if (*(int *)(TypeInfo_HumanAnimations + 0xe4) == 0) {
    il2cpp_init_class();
  }
  if (pCVar5 == (Characters_AnimationHandler_o *)0x0) goto LAB_03fec62a;
  bVar10 = Characters_AnimationHandler__IsPlaying
                     (pCVar5,*(System_String_o **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x208),
                      (MethodInfo *)0x0);
  if ((char)bVar10 != '\0') {
    if (DAT_05704182 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_HumanAnimations);
      DAT_05704182 = '\x01';
    }
    pCVar4 = (__this->fields)._human;
    if (pCVar4 == (Characters_Human_o *)0x0) goto LAB_03fec62a;
    pCVar5 = *(Characters_AnimationHandler_o **)&(pCVar4->fields)._cameraFPS;
    if (*(int *)(TypeInfo_HumanAnimations + 0xe4) == 0) {
      il2cpp_init_class();
    }
    if (pCVar5 == (Characters_AnimationHandler_o *)0x0) goto LAB_03fec62a;
    fVar14 = Characters_AnimationHandler__GetNormalizedTime
                       (pCVar5,*(System_String_o **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x208),
                        (MethodInfo *)0x0);
    pCVar4 = (__this->fields)._human;
    if (pCVar4 == (Characters_Human_o *)0x0) goto LAB_03fec62a;
    if (((fVar14 < 0.61) && (0.4 < fVar14)) &&
       (*(char *)((long)&(pCVar4->fields).Animation + 4) != '\0')) {
      lVar13 = *(long *)&(pCVar4->fields).Dead;
      if (lVar13 == 0) goto LAB_03fec62a;
      pUVar6 = *(UnityEngine_Rigidbody_o **)(lVar13 + 0x18);
      __this_01 = UnityEngine_Component__get_transform
                            ((UnityEngine_Component_o *)pCVar4,(MethodInfo *)0x0);
      if (__this_01 == (UnityEngine_Transform_o *)0x0) goto LAB_03fec62a;
      UVar20 = UnityEngine_Transform__get_forward(__this_01,(MethodInfo *)0x0);
      if (pUVar6 == (UnityEngine_Rigidbody_o *)0x0) goto LAB_03fec62a;
      force.fields.x = UVar20.fields.x * 200.0;
      force.fields.y = UVar20.fields.y * 200.0;
      force.fields.z = UVar20.fields.z * 200.0;
      UnityEngine_Rigidbody__AddForce(pUVar6,force,(MethodInfo *)0x0);
    }
    iVar11 = (__this->fields)._stage;
    if ((iVar11 != 0) ||
       (pfVar1 = &(__this->fields).AnimationLoopStartTime, fVar14 < *pfVar1 || fVar14 == *pfVar1)) {
      if ((iVar11 < (__this->fields).Loops) &&
         (pfVar1 = &(__this->fields).AnimationLoopEndTime, *pfVar1 <= fVar14 && fVar14 != *pfVar1))
      {
        pCVar4 = (__this->fields)._human;
        if (*(int *)(TypeInfo_HumanAnimations + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (pCVar4 == (Characters_Human_o *)0x0) goto LAB_03fec62a;
        Characters_BaseCharacter__PlayAnimation
                  ((Characters_BaseCharacter_o *)pCVar4,
                   *(System_String_o **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x208),
                   (__this->fields).AnimationLoopStartTime,(MethodInfo *)0x0);
        goto LAB_03fec315;
      }
    }
    else {
      pCVar4 = (__this->fields)._human;
      if (pCVar4 == (Characters_Human_o *)0x0) goto LAB_03fec62a;
      Characters_Human__ActivateBlades(pCVar4,(MethodInfo *)0x0);
LAB_03fec315:
      lVar13 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x80);
      if ((lVar13 == 0) || (lVar13 = *(long *)(lVar13 + 0x88), lVar13 == 0)) goto LAB_03fec62a;
      cVar3 = *(char *)(lVar13 + 0x11);
      pCVar4 = (__this->fields)._human;
      if (*(int *)(TypeInfo_HumanSounds + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if (cVar3 == '\0') {
        lVar13 = 0x58;
      }
      else {
        lVar13 = 0x68;
      }
      if (pCVar4 == (Characters_Human_o *)0x0) goto LAB_03fec62a;
      Characters_BaseCharacter__PlaySound
                ((Characters_BaseCharacter_o *)pCVar4,
                 *(System_String_o **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + lVar13),(MethodInfo *)0x0);
      iVar11 = (__this->fields)._stage + 1;
      (__this->fields)._stage = iVar11;
    }
    if (iVar11 == 3) {
      pCVar4 = (__this->fields)._human;
      if ((pCVar4 == (Characters_Human_o *)0x0) ||
         (pCVar7 = (pCVar4->fields).Special, pCVar7 == (Characters_BaseUseable_o *)0x0))
      goto LAB_03fec62a;
      (*(pCVar7->klass->vtable)._12_SetInput.methodPtr)
                (pCVar7,0,(pCVar7->klass->vtable)._12_SetInput.method);
      pCVar4 = (__this->fields)._human;
      if ((pCVar4 == (Characters_Human_o *)0x0) ||
         (__this_00 = (pCVar4->fields).HumanCache,
         __this_00 == (Characters_HumanComponentCache_o *)0x0)) goto LAB_03fec62a;
      Characters_HookUseable__DisableAnyHook
                ((Characters_HookUseable_o *)__this_00,(MethodInfo *)0x0);
      pCVar4 = (__this->fields)._human;
      if ((pCVar4 == (Characters_Human_o *)0x0) ||
         (pCVar8 = (Characters_HookUseable_o *)(pCVar4->fields).Special,
         pCVar8 == (Characters_HookUseable_o *)0x0)) goto LAB_03fec62a;
      Characters_HookUseable__DisableAnyHook(pCVar8,(MethodInfo *)0x0);
      piVar2 = &(__this->fields)._stage;
      *piVar2 = *piVar2 + 1;
    }
  }
  pCVar4 = (__this->fields)._human;
  if ((pCVar4 != (Characters_Human_o *)0x0) &&
     (pCVar8 = (Characters_HookUseable_o *)(pCVar4->fields).Special,
     pCVar8 != (Characters_HookUseable_o *)0x0)) {
    bVar10 = Characters_HookUseable__HasHook(pCVar8,(MethodInfo *)0x0);
    if ((char)bVar10 == '\0') {
      return;
    }
    pCVar4 = (__this->fields)._human;
    if ((pCVar4 != (Characters_Human_o *)0x0) &&
       (pCVar8 = (Characters_HookUseable_o *)(pCVar4->fields).Special,
       pCVar8 != (Characters_HookUseable_o *)0x0)) {
      iVar12 = Characters_HookUseable__GetHookState(pCVar8,(MethodInfo *)0x0);
      if ((iVar12 != 4) && (iVar12 != 2)) {
        return;
      }
      if ((char)(__this->fields)._pulled != '\0') {
        return;
      }
      *(undefined1 *)&(__this->fields)._pulled = 1;
      pCVar4 = (__this->fields)._human;
      if ((pCVar4 != (Characters_Human_o *)0x0) &&
         (pCVar8 = (Characters_HookUseable_o *)(pCVar4->fields).Special,
         pCVar8 != (Characters_HookUseable_o *)0x0)) {
        UVar20 = Characters_HookUseable__GetHookPosition(pCVar8,(MethodInfo *)0x0);
        pCVar4 = (__this->fields)._human;
        if ((pCVar4 != (Characters_Human_o *)0x0) &&
           ((lVar13 = *(long *)&(pCVar4->fields).Dead, lVar13 != 0 &&
            (pUVar6 = *(UnityEngine_Rigidbody_o **)(lVar13 + 0x18),
            pUVar6 != (UnityEngine_Rigidbody_o *)0x0)))) {
          UVar21 = UnityEngine_Rigidbody__get_position(pUVar6,(MethodInfo *)0x0);
          if (DAT_056fde20 == '\0') {
            il2cpp_init_method_metadata(&TypeInfo_Math);
            DAT_056fde20 = '\x01';
          }
          fStack_58 = UVar20.fields.x;
          fStack_54 = UVar20.fields.y;
          auVar19._0_4_ = fStack_58 - UVar21.fields.x;
          auVar19._4_4_ = fStack_54 - UVar21.fields.y;
          auVar19._8_4_ = extraout_XMM0_Dc - extraout_XMM0_Dc_00;
          auVar19._12_4_ = extraout_XMM0_Dd - extraout_XMM0_Dd_00;
          fVar14 = UVar20.fields.z - UVar21.fields.z;
          if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
            il2cpp_init_class();
          }
          uVar16 = 0;
          uVar17 = 0;
          fVar15 = fVar14 * fVar14 + auVar19._4_4_ * auVar19._4_4_ + auVar19._0_4_ * auVar19._0_4_;
          if (fVar15 < 0.0) {
            fVar15 = sqrtf(fVar15);
            uVar16 = extraout_XMM0_Dc_01;
            uVar17 = extraout_XMM0_Dd_01;
          }
          else {
            fVar15 = SQRT(fVar15);
          }
          if (1e-05 < fVar15) {
            fVar14 = fVar14 / fVar15;
            auVar9._4_4_ = fVar15;
            auVar9._0_4_ = fVar15;
            auVar9._8_4_ = uVar16;
            auVar9._12_4_ = uVar17;
            auVar19 = divps(auVar19,auVar9);
            uVar18 = auVar19._0_8_;
          }
          else {
            if (DAT_056fdd15 == '\0') {
              il2cpp_init_method_metadata(&TypeInfo_Vector3);
              DAT_056fdd15 = '\x01';
            }
            uVar18 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
            fVar14 = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
          }
          fVar15 = (float)(__this->fields)._startSpin;
          UVar20.fields.z = fVar14 * fVar15;
          UVar20.fields.x = fVar15 * (float)uVar18;
          UVar20.fields.y = fVar15 * (float)((ulong)uVar18 >> 0x20);
          UnityEngine_Rigidbody__AddForce(pUVar6,UVar20,1,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
LAB_03fec62a:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.Spin3Special$$GetAnimationTime
// il2cpp: float Characters_Spin3Special__GetAnimationTime (Characters_Spin3Special_o* __this, const MethodInfo* method);
// 0x3fec630

float Characters_Spin3Special__GetAnimationTime
                (Characters_Spin3Special_o *__this,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  Characters_AnimationHandler_o *__this_00;
  float fVar2;
  
  if (DAT_05704182 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanAnimations);
    DAT_05704182 = '\x01';
  }
  pCVar1 = (__this->fields)._human;
  if (pCVar1 != (Characters_Human_o *)0x0) {
    __this_00 = *(Characters_AnimationHandler_o **)&(pCVar1->fields)._cameraFPS;
    if (*(int *)(TypeInfo_HumanAnimations + 0xe4) == 0) {
      il2cpp_init_class();
    }
    if (__this_00 != (Characters_AnimationHandler_o *)0x0) {
      fVar2 = Characters_AnimationHandler__GetNormalizedTime
                        (__this_00,*(System_String_o **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x208),
                         (MethodInfo *)0x0);
      return fVar2;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


