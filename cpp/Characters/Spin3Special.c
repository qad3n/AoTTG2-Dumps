// Type: Characters.Spin3Special
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Characters/Spin3Special.cs
// Prior real C# source (older reference): Assets/Scripts/Characters/Human/Specials/Spin3Special.cs
// --------------------------------

// Characters.Spin3Special$$get_ActiveTime
// il2cpp: float Characters_Spin3Special__get_ActiveTime (Characters_Spin3Special_o* __this, const MethodInfo* method);
// 0x5c0ecd0

float Characters_Spin3Special__get_ActiveTime(Characters_Spin3Special_o *__this,MethodInfo *method)

{
  return 1.0;
}


// Characters.Spin3Special$$.ctor
// il2cpp: void Characters_Spin3Special___ctor (Characters_Spin3Special_o* __this, Characters_BaseCharacter_o* owner, const MethodInfo* method);
// 0x5c0ece0

void Characters_Spin3Special___ctor
               (Characters_Spin3Special_o *__this,Characters_BaseCharacter_o *owner,MethodInfo *method)

{
  (__this->fields).AnimationLoopStartTime = 0.35;
  (__this->fields).AnimationLoopEndTime = 0.5;
  (__this->fields).Loops = 3;
  (__this->fields).PullForce = 13.0;
  Characters_BaseAttackSpecial___ctor((Characters_BaseAttackSpecial_o *)__this,owner,method);
  (__this->fields).Cooldown = 3.5;
  return;
}


// Characters.Spin3Special$$Activate
// il2cpp: void Characters_Spin3Special__Activate (Characters_Spin3Special_o* __this, const MethodInfo* method);
// 0x5c0ed10
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5c0ed56: jmp 0x5c0ee06

void Characters_Spin3Special__Activate(Characters_Spin3Special_o *__this,MethodInfo *method)

{
  Characters_HookUseable_o *pCVar1;
  Characters_HumanStats_o *pCVar2;
  UnityEngine_Vector3_o UVar5;
  Characters_Human_o *pCVar3;
  float fVar4;
  
  pCVar3 = (__this->fields)._human;
  if (pCVar3 != (Characters_Human_o *)0x0) {
    if ((pCVar3->fields).MountState == 0) {
      (__this->fields)._stage = 0;
      pCVar1 = (pCVar3->fields).HookLeft;
    }
    else {
      Characters_Human__Unmount(pCVar3,true,(MethodInfo *)0x0);
      pCVar3 = (__this->fields)._human;
      (__this->fields)._stage = 0;
      if (pCVar3 == (Characters_Human_o *)0x0) goto label_05c0ee06;
      pCVar1 = (pCVar3->fields).HookLeft;
    }
    if (pCVar1 != (Characters_HookUseable_o *)0x0) {
      Characters_HookUseable__DisableAnyHook(pCVar1,(MethodInfo *)0x0);
      pCVar3 = (__this->fields)._human;
      if ((pCVar3 != (Characters_Human_o *)0x0) &&
         (pCVar1 = (pCVar3->fields).HookRight, pCVar1 != (Characters_HookUseable_o *)0x0)) {
        Characters_HookUseable__DisableAnyHook(pCVar1,(MethodInfo *)0x0);
        pCVar3 = (__this->fields)._human;
        if ((pCVar3 != (Characters_Human_o *)0x0) &&
           (pCVar2 = (pCVar3->fields).Stats, pCVar2 != (Characters_HumanStats_o *)0x0)) {
          fVar4 = 0.0;
          if ((pCVar2->fields).CurrentGas <= 0.0) {
label_05c0ede5:
            UVar5.fields._0_8_ =
                 (*(pCVar3->klass->vtable)._76_GetAimPoint.methodPtr)
                           (pCVar3,(pCVar3->klass->vtable)._76_GetAimPoint.method);
            (__this->fields)._aimPoint.fields = UVar5.fields._0_8_;
            (__this->fields)._aimPoint.fields.z = fVar4;
            (__this->fields)._pulled = false;
            (__this->fields)._startSpin = false;
            return;
          }
          pCVar1 = (pCVar3->fields).HookRight;
          if (pCVar1 != (Characters_HookUseable_o *)0x0) {
            (*(pCVar1->klass->vtable)._12_SetInput.methodPtr)
                      (pCVar1,true,(pCVar1->klass->vtable)._12_SetInput.method);
            pCVar3 = (__this->fields)._human;
            if (pCVar3 != (Characters_Human_o *)0x0) goto label_05c0ede5;
          }
        }
      }
    }
  }
label_05c0ee06:
  ThrowNullReferenceException();
}


// Characters.Spin3Special$$ActiveFixedUpdate
// il2cpp: void Characters_Spin3Special__ActiveFixedUpdate (Characters_Spin3Special_o* __this, const MethodInfo* method);
// 0x5c0ee10

void Characters_Spin3Special__ActiveFixedUpdate(Characters_Spin3Special_o *__this,MethodInfo *method)

{
  float *pfVar1;
  int32_t *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint32_t uVar7;
  Characters_Human_o *pCVar8;
  Characters_AnimationHandler_o *pCVar9;
  Utility_BaseComponentCache_o *pUVar10;
  UnityEngine_Rigidbody_o *pUVar11;
  Settings_SoundSettings_o *pSVar12;
  Settings_BoolSetting_o *pSVar13;
  Characters_HookUseable_o *pCVar14;
  undefined1 auVar15 [16];
  bool bVar16;
  int iVar17;
  int32_t iVar18;
  UnityEngine_Transform_o *__this_00;
  System_String_o **ppSVar19;
  UnityEngine_Vector3_StaticFields *pUVar20;
  float fVar21;
  float fVar22;
  undefined4 uVar23;
  undefined4 extraout_XMM0_Db;
  float extraout_XMM0_Dc;
  float extraout_XMM0_Dc_00;
  float fVar24;
  float extraout_XMM0_Dd;
  float extraout_XMM0_Dd_00;
  float fVar25;
  undefined1 auVar26 [16];
  UnityEngine_Vector3_o UVar27;
  UnityEngine_Vector3_o force;
  UnityEngine_Vector3_o UVar28;
  float fStack_48;
  float fStack_44;
  undefined1 auStack_30 [12];
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  
  if (Il2CppMethodInitialized_075476cc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanAnimations);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_get_Value);
    Il2CppMethodInitialized_075476cc = '\x01';
  }
  if ((__this->fields)._startSpin == false) {
    if (1.0 < (__this->fields)._activeTimeLeft) {
      return;
    }
    pCVar8 = (__this->fields)._human;
    if ((TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
    }
    if (pCVar8 != (Characters_Human_o *)0x0) {
      Characters_Human__StartSpecialAttack
                (pCVar8,TypeInfo_Characters_HumanAnimations->static_fields->SpecialLevi,(MethodInfo *)0x0);
      pCVar8 = (__this->fields)._human;
      if (((pCVar8 != (Characters_Human_o *)0x0) &&
          (pUVar10 = (pCVar8->fields).Cache, pUVar10 != (Utility_BaseComponentCache_o *)0x0)) &&
         (pUVar11 = (pUVar10->fields).Rigidbody, pUVar11 != (UnityEngine_Rigidbody_o *)0x0)) {
        UVar27 = UnityEngine_Rigidbody__get_linearVelocity(pUVar11,(MethodInfo *)0x0);
        if (Il2CppMethodInitialized_0753e72c == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
          Il2CppMethodInitialized_0753e72c = '\x01';
        }
        pUVar20 = TypeInfo_UnityEngine_Vector3->static_fields;
        uVar3 = (pUVar20->upVector).fields.x;
        uVar5 = (pUVar20->upVector).fields.y;
        UVar28.fields.x = UVar27.fields.x + (float)uVar3 * 5.0;
        UVar28.fields.y = UVar27.fields.y + (float)uVar5 * 5.0;
        UVar28.fields.z = UVar27.fields.z + (pUVar20->upVector).fields.z * 5.0;
        UnityEngine_Rigidbody__set_linearVelocity(pUVar11,UVar28,(MethodInfo *)0x0);
        (__this->fields)._startSpin = true;
        return;
      }
    }
    goto label_05c0f48d;
  }
  pCVar8 = (__this->fields)._human;
  if (pCVar8 == (Characters_Human_o *)0x0) goto label_05c0f48d;
  if ((pCVar8->fields)._state != 9) {
    (__this->fields).IsActive = false;
  }
  pCVar9 = (pCVar8->fields).Animation;
  if ((TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
  }
  if (pCVar9 == (Characters_AnimationHandler_o *)0x0) goto label_05c0f48d;
  bVar16 = Characters_AnimationHandler__IsPlaying
                     (pCVar9,TypeInfo_Characters_HumanAnimations->static_fields->SpecialLevi,(MethodInfo *)0x0
                     );
  if (bVar16) {
    if (Il2CppMethodInitialized_075476cd == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanAnimations);
      Il2CppMethodInitialized_075476cd = '\x01';
    }
    pCVar8 = (__this->fields)._human;
    if (pCVar8 == (Characters_Human_o *)0x0) goto label_05c0f48d;
    pCVar9 = (pCVar8->fields).Animation;
    if ((TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
    }
    if (pCVar9 == (Characters_AnimationHandler_o *)0x0) goto label_05c0f48d;
    fVar21 = Characters_AnimationHandler__GetNormalizedTime
                       (pCVar9,TypeInfo_Characters_HumanAnimations->static_fields->SpecialLevi,
                        (MethodInfo *)0x0);
    pCVar8 = (__this->fields)._human;
    if (pCVar8 == (Characters_Human_o *)0x0) goto label_05c0f48d;
    if ((((pCVar8->fields).Grounded != false) && (0.4 < fVar21)) && (fVar21 < 0.61)) {
      pUVar10 = (pCVar8->fields).Cache;
      if (pUVar10 == (Utility_BaseComponentCache_o *)0x0) goto label_05c0f48d;
      pUVar11 = (pUVar10->fields).Rigidbody;
      __this_00 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)pCVar8,(MethodInfo *)0x0);
      if (__this_00 == (UnityEngine_Transform_o *)0x0) goto label_05c0f48d;
      UVar27 = UnityEngine_Transform__get_forward(__this_00,(MethodInfo *)0x0);
      if (pUVar11 == (UnityEngine_Rigidbody_o *)0x0) goto label_05c0f48d;
      force.fields.z = UVar27.fields.z * 200.0;
      force.fields.x = UVar27.fields.x * 200.0;
      force.fields.y = UVar27.fields.y * 200.0;
      UnityEngine_Rigidbody__AddForce_69e3850(pUVar11,force,(MethodInfo *)0x0);
    }
    iVar17 = (__this->fields)._stage;
    if ((iVar17 != 0) ||
       (pfVar1 = &(__this->fields).AnimationLoopStartTime, fVar21 < *pfVar1 || fVar21 == *pfVar1)) {
      if ((iVar17 < (__this->fields).Loops) &&
         (pfVar1 = &(__this->fields).AnimationLoopEndTime, *pfVar1 <= fVar21 && fVar21 != *pfVar1)) {
        pCVar8 = (__this->fields)._human;
        if ((TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
        }
        if (pCVar8 == (Characters_Human_o *)0x0) goto label_05c0f48d;
        Characters_BaseCharacter__PlayAnimation
                  ((Characters_BaseCharacter_o *)pCVar8,
                   TypeInfo_Characters_HumanAnimations->static_fields->SpecialLevi,
                   (__this->fields).AnimationLoopStartTime,(MethodInfo *)0x0);
        goto label_05c0f13c;
      }
    }
    else {
      pCVar8 = (__this->fields)._human;
      if (pCVar8 == (Characters_Human_o *)0x0) goto label_05c0f48d;
      Characters_Human__ActivateBlades(pCVar8,(MethodInfo *)0x0);
label_05c0f13c:
      pSVar12 = TypeInfo_Settings_SettingsManager->static_fields->SoundSettings;
      if ((pSVar12 == (Settings_SoundSettings_o *)0x0) ||
         (pSVar13 = (pSVar12->fields).OldBladeEffect, pSVar13 == (Settings_BoolSetting_o *)0x0))
      goto label_05c0f48d;
      pCVar8 = (__this->fields)._human;
      uVar7 = (TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor;
      if ((pSVar13->fields)._value == false) {
        if (uVar7 == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
        }
        if (pCVar8 == (Characters_Human_o *)0x0) goto label_05c0f48d;
        ppSVar19 = &TypeInfo_Characters_HumanSounds->static_fields->BladeSwing3;
      }
      else {
        if (uVar7 == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
        }
        if (pCVar8 == (Characters_Human_o *)0x0) goto label_05c0f48d;
        ppSVar19 = &TypeInfo_Characters_HumanSounds->static_fields->OldBladeSwing;
      }
      Characters_BaseCharacter__PlaySound((Characters_BaseCharacter_o *)pCVar8,*ppSVar19,(MethodInfo *)0x0);
      iVar17 = (__this->fields)._stage + 1;
      (__this->fields)._stage = iVar17;
    }
    if (iVar17 == 3) {
      pCVar8 = (__this->fields)._human;
      if ((pCVar8 == (Characters_Human_o *)0x0) ||
         (pCVar14 = (pCVar8->fields).HookRight, pCVar14 == (Characters_HookUseable_o *)0x0))
      goto label_05c0f48d;
      (*(pCVar14->klass->vtable)._12_SetInput.methodPtr)
                (pCVar14,false,(pCVar14->klass->vtable)._12_SetInput.method);
      pCVar8 = (__this->fields)._human;
      if ((pCVar8 == (Characters_Human_o *)0x0) ||
         (pCVar14 = (pCVar8->fields).HookLeft, pCVar14 == (Characters_HookUseable_o *)0x0)) goto label_05c0f48d;
      Characters_HookUseable__DisableAnyHook(pCVar14,(MethodInfo *)0x0);
      pCVar8 = (__this->fields)._human;
      if ((pCVar8 == (Characters_Human_o *)0x0) ||
         (pCVar14 = (pCVar8->fields).HookRight, pCVar14 == (Characters_HookUseable_o *)0x0))
      goto label_05c0f48d;
      Characters_HookUseable__DisableAnyHook(pCVar14,(MethodInfo *)0x0);
      piVar2 = &(__this->fields)._stage;
      *piVar2 = *piVar2 + 1;
    }
  }
  pCVar8 = (__this->fields)._human;
  if ((pCVar8 != (Characters_Human_o *)0x0) &&
     (pCVar14 = (pCVar8->fields).HookRight, pCVar14 != (Characters_HookUseable_o *)0x0)) {
    bVar16 = Characters_HookUseable__HasHook(pCVar14,(MethodInfo *)0x0);
    if (!bVar16) {
      return;
    }
    pCVar8 = (__this->fields)._human;
    if ((pCVar8 != (Characters_Human_o *)0x0) &&
       (pCVar14 = (pCVar8->fields).HookRight, pCVar14 != (Characters_HookUseable_o *)0x0)) {
      iVar18 = Characters_HookUseable__GetHookState(pCVar14,(MethodInfo *)0x0);
      if ((iVar18 != 4) && (iVar18 != 2)) {
        return;
      }
      if ((__this->fields)._pulled != false) {
        return;
      }
      (__this->fields)._pulled = true;
      pCVar8 = (__this->fields)._human;
      if ((pCVar8 != (Characters_Human_o *)0x0) &&
         (pCVar14 = (pCVar8->fields).HookRight, pCVar14 != (Characters_HookUseable_o *)0x0)) {
        UVar27 = Characters_HookUseable__GetHookPosition(pCVar14,(MethodInfo *)0x0);
        pCVar8 = (__this->fields)._human;
        if ((pCVar8 != (Characters_Human_o *)0x0) &&
           ((pUVar10 = (pCVar8->fields).Cache, pUVar10 != (Utility_BaseComponentCache_o *)0x0 &&
            (pUVar11 = (pUVar10->fields).Rigidbody, pUVar11 != (UnityEngine_Rigidbody_o *)0x0)))) {
          UVar28 = UnityEngine_Rigidbody__get_position(pUVar11,(MethodInfo *)0x0);
          fVar21 = UVar28.fields.x;
          fVar22 = UVar28.fields.y;
          fVar24 = extraout_XMM0_Dc_00;
          fVar25 = extraout_XMM0_Dd_00;
          if (g_data_0753e72d == '\0') {
            fStack_20 = extraout_XMM0_Dc_00;
            unique0x10000180 = UVar28.fields._0_8_;
            fStack_1c = extraout_XMM0_Dd_00;
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
            g_data_0753e72d = '\x01';
            fVar21 = (float)auStack_30._8_4_;
            fVar22 = fStack_24;
            fVar24 = fStack_20;
            fVar25 = fStack_1c;
          }
          auStack_30._0_4_ = 0.0;
          auStack_30._4_4_ = 0.0;
          if (g_data_0753e729 == '\0') {
            fStack_24 = fVar22;
            auStack_30._8_4_ = fVar21;
            fStack_20 = fVar24;
            fStack_1c = fVar25;
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
            g_data_0753e729 = '\x01';
            fVar21 = (float)auStack_30._8_4_;
            fVar22 = fStack_24;
            fVar24 = fStack_20;
            fVar25 = fStack_1c;
          }
          fStack_48 = UVar27.fields.x;
          fStack_44 = UVar27.fields.y;
          auVar26._0_4_ = fStack_48 - fVar21;
          auVar26._4_4_ = fStack_44 - fVar22;
          auVar26._8_4_ = extraout_XMM0_Dc - fVar24;
          auVar26._12_4_ = extraout_XMM0_Dd - fVar25;
          fVar21 = UVar27.fields.z - UVar28.fields.z;
          if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
          }
          uVar23 = 0;
          fVar22 = fVar21 * fVar21 + auVar26._4_4_ * auVar26._4_4_ + auVar26._0_4_ * auVar26._0_4_;
          if (fVar22 < 0.0) {
            fVar22 = sqrtf(fVar22);
            uVar23 = extraout_XMM0_Db;
          }
          else {
            fVar22 = SQRT(fVar22);
          }
          if (1e-05 < fVar22) {
            fVar21 = fVar21 / fVar22;
            auVar15._4_4_ = fVar22;
            auVar15._0_4_ = fVar22;
            auVar15._8_4_ = uVar23;
            auVar15._12_4_ = uVar23;
            auVar26 = divps(auVar26,auVar15);
            auStack_30._0_4_ = auVar26._0_4_;
            auStack_30._4_4_ = auVar26._4_4_;
            pUVar20 = (UnityEngine_Vector3_StaticFields *)auStack_30;
          }
          else {
            pUVar20 = TypeInfo_UnityEngine_Vector3->static_fields;
            fVar21 = (pUVar20->zeroVector).fields.z;
          }
          uVar4 = (pUVar20->zeroVector).fields.x;
          uVar6 = (pUVar20->zeroVector).fields.y;
          fVar22 = (__this->fields).PullForce;
          UVar27.fields.z = fVar21 * fVar22;
          UVar27.fields.x = fVar22 * (float)uVar4;
          UVar27.fields.y = fVar22 * (float)uVar6;
          UnityEngine_Rigidbody__AddForce(pUVar11,UVar27,1,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
label_05c0f48d:
  ThrowNullReferenceException();
}


// Characters.Spin3Special$$GetAnimationTime
// il2cpp: float Characters_Spin3Special__GetAnimationTime (Characters_Spin3Special_o* __this, const MethodInfo* method);
// 0x5c0f4a0

float Characters_Spin3Special__GetAnimationTime(Characters_Spin3Special_o *__this,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  Characters_AnimationHandler_o *__this_00;
  float fVar2;
  
  if (Il2CppMethodInitialized_075476cd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanAnimations);
    Il2CppMethodInitialized_075476cd = '\x01';
  }
  pCVar1 = (__this->fields)._human;
  if (pCVar1 != (Characters_Human_o *)0x0) {
    __this_00 = (pCVar1->fields).Animation;
    if ((TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
    }
    if (__this_00 != (Characters_AnimationHandler_o *)0x0) {
      fVar2 = Characters_AnimationHandler__GetNormalizedTime
                        (__this_00,TypeInfo_Characters_HumanAnimations->static_fields->SpecialLevi,
                         (MethodInfo *)0x0);
      return fVar2;
    }
  }
  ThrowNullReferenceException();
}


