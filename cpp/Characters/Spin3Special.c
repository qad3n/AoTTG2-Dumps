// Type: Characters.Spin3Special
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Characters/Spin3Special.cs
// Prior real C# source (older reference): Assets/Scripts/Characters/Human/Specials/Spin3Special.cs
// --------------------------------

// Characters.Spin3Special$$get_ActiveTime
// il2cpp: float Characters_Spin3Special__get_ActiveTime (Characters_Spin3Special_o* __this, const MethodInfo* method);
// 0x1820cf430

float
Characters_Spin3Special__get_ActiveTime(Characters_Spin3Special_o* __this, MethodInfo* method)

{
  return 1.0;
}


// Characters.Spin3Special$$.ctor
// il2cpp: void Characters_Spin3Special___ctor (Characters_Spin3Special_o* __this, Characters_BaseCharacter_o* owner, const MethodInfo* method);
// 0x1821773a0

void Characters_Spin3Special___ctor
               (Characters_Spin3Special_o *__this,Characters_BaseCharacter_o *owner,MethodInfo *method)

{
  (__this->fields).AnimationLoopStartTime = 0.35;
  (__this->fields).AnimationLoopEndTime = 0.5;
  (__this->fields).Loops = 3;
  (__this->fields).PullForce = 13.0;
  Characters_BaseAttackSpecial___ctor((Characters_BaseAttackSpecial_o *)__this,owner,(MethodInfo *)0x0);
  (__this->fields).Cooldown = 3.5;
  return;
}


// Characters.Spin3Special$$Activate
// il2cpp: void Characters_Spin3Special__Activate (Characters_Spin3Special_o* __this, const MethodInfo* method);
// 0x182176bb0

void Characters_Spin3Special__Activate(Characters_Spin3Special_o *__this,MethodInfo *method)

{
  float fVar1;
  Characters_Human_o *pCVar2;
  Characters_HookUseable_o *pCVar3;
  Characters_HumanStats_o *pCVar4;
  float fVar5;
  UnityEngine_Vector3_o *pUVar6;
  UnityEngine_Vector3_o local_18;
  
  pCVar2 = (__this->fields)._human;
  if (pCVar2 != (Characters_Human_o *)0x0) {
    if ((pCVar2->fields).MountState != 0) {
      Characters_Human__Unmount(pCVar2,true,(MethodInfo *)0x0);
    }
    pCVar2 = (__this->fields)._human;
    (__this->fields)._stage = 0;
    if ((pCVar2 != (Characters_Human_o *)0x0) &&
       (pCVar3 = (pCVar2->fields).HookLeft, pCVar3 != (Characters_HookUseable_o *)0x0)) {
      Characters_HookUseable__DisableAnyHook(pCVar3,(MethodInfo *)0x0);
      pCVar2 = (__this->fields)._human;
      if ((pCVar2 != (Characters_Human_o *)0x0) &&
         (pCVar3 = (pCVar2->fields).HookRight, pCVar3 != (Characters_HookUseable_o *)0x0)) {
        Characters_HookUseable__DisableAnyHook(pCVar3,(MethodInfo *)0x0);
        pCVar2 = (__this->fields)._human;
        if ((pCVar2 != (Characters_Human_o *)0x0) &&
           (pCVar4 = (pCVar2->fields).Stats, pCVar4 != (Characters_HumanStats_o *)0x0)) {
          if (0.0 < (pCVar4->fields).CurrentGas) {
            pCVar3 = (((__this->fields)._human)->fields).HookRight;
            if (pCVar3 == (Characters_HookUseable_o *)0x0) goto label_182176ca8;
            (*(pCVar3->klass->vtable)._12_SetInput.methodPtr)
                      (pCVar3,true,(pCVar3->klass->vtable)._12_SetInput.method);
          }
          pCVar2 = (__this->fields)._human;
          if (pCVar2 != (Characters_Human_o *)0x0) {
            pUVar6 = (*(pCVar2->klass->vtable)._76_GetAimPoint.methodPtr)
                               (&local_18,pCVar2,(pCVar2->klass->vtable)._76_GetAimPoint.method);
            fVar5 = (pUVar6->fields).y;
            fVar1 = (pUVar6->fields).z;
            (__this->fields)._aimPoint.fields.x = (pUVar6->fields).x;
            (__this->fields)._aimPoint.fields.y = fVar5;
            (__this->fields)._aimPoint.fields.z = fVar1;
            (__this->fields)._pulled = false;
            (__this->fields)._startSpin = false;
            return;
          }
        }
      }
    }
  }
label_182176ca8:
  ThrowNullReferenceException();
}


// Characters.Spin3Special$$ActiveFixedUpdate
// il2cpp: void Characters_Spin3Special__ActiveFixedUpdate (Characters_Spin3Special_o* __this, const MethodInfo* method);
// 0x182176cb0
// asm: 16 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1821772c1: mov rax, qword ptr [rip + 0x1f1b1e0]  ; TypeInfo_UnityEngine_Vector3
// asm:   0x1821772c8: xor r8d, r8d
// asm:   0x1821772cb: mov rcx, rdi
// asm:   0x1821772ce: mov rdx, qword ptr [rax + 0xb8]
// asm:   0x1821772d5: movsd xmm1, qword ptr [rdx + 0x18]
// asm:   0x1821772da: movss xmm0, dword ptr [rdx + 0x20]
// asm:   0x1821772df: lea rdx, [rsp + 0x20]
// asm:   0x1821772e4: mulps xmm1, xmmword ptr [rip + 0x12c8f25]
// asm:   0x1821772eb: mulss xmm0, dword ptr [rip + 0x11e19f1]
// asm:   0x1821772f3: addps xmm1, xmm6
// asm:   0x1821772f6: addss xmm0, xmm7
// asm:   0x1821772fa: movsd qword ptr [rsp + 0x20], xmm1
// asm:   0x182177300: movss dword ptr [rsp + 0x28], xmm0
// asm:   0x182177306: call 0x182fe8a10  ; UnityEngine_Rigidbody__set_linearVelocity()
// asm:   0x18217730b: mov byte ptr [rbx + 0x65], 1
// asm:   0x18217730f: jmp 0x1821771fa

void Characters_Spin3Special__ActiveFixedUpdate(Characters_Spin3Special_o *__this,MethodInfo *method)

{
  float *pfVar1;
  int32_t *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar7;
  undefined8 uVar6;
  undefined4 uVar8;
  undefined4 uVar9;
  Characters_Human_o *pCVar10;
  Characters_AnimationHandler_o *pCVar11;
  Utility_BaseComponentCache_o *pUVar12;
  UnityEngine_Rigidbody_o *pUVar13;
  Settings_SoundSettings_o *pSVar14;
  Settings_BoolSetting_o *pSVar15;
  Characters_HookUseable_o *pCVar16;
  UnityEngine_Vector3_StaticFields *pUVar17;
  bool bVar18;
  int32_t iVar19;
  UnityEngine_Transform_o *__this_00;
  UnityEngine_Vector3_o *pUVar20;
  System_String_o *sound;
  float fVar21;
  float fVar22;
  undefined8 uVar23;
  float fVar24;
  float fVar25;
  UnityEngine_Vector3_Fields local_58;
  UnityEngine_Vector3_o local_48 [5];
  
  if (Il2CppMethodInitialized_184346cfc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanAnimations);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_get_Value);
    Il2CppMethodInitialized_184346cfc = '\x01';
  }
  if ((__this->fields)._startSpin == false) {
    if (1.0 < (__this->fields)._activeTimeLeft) {
      return;
    }
    pCVar10 = (__this->fields)._human;
    if ((TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
    }
    if (pCVar10 != (Characters_Human_o *)0x0) {
      Characters_Human__StartSpecialAttack
                (pCVar10,TypeInfo_Characters_HumanAnimations->static_fields->SpecialLevi,(MethodInfo *)0x0);
      pCVar10 = (__this->fields)._human;
      if (((pCVar10 != (Characters_Human_o *)0x0) &&
          (pUVar12 = (pCVar10->fields).Cache, pUVar12 != (Utility_BaseComponentCache_o *)0x0)) &&
         (pUVar13 = (pUVar12->fields).Rigidbody, pUVar13 != (UnityEngine_Rigidbody_o *)0x0)) {
        pUVar20 = UnityEngine_Rigidbody__get_linearVelocity(local_48,pUVar13,(MethodInfo *)0x0);
        uVar4 = (pUVar20->fields).x;
        uVar8 = (pUVar20->fields).y;
        local_58.z = (pUVar20->fields).z;
        if (Il2CppMethodInitialized_18433de5c == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
          Il2CppMethodInitialized_18433de5c = '\x01';
        }
        pUVar17 = TypeInfo_UnityEngine_Vector3->static_fields;
        uVar5 = (pUVar17->upVector).fields.x;
        uVar9 = (pUVar17->upVector).fields.y;
        local_58.x = (float)uVar5 * 5.0 + (float)uVar4;
        local_58.y = (float)uVar9 * 5.0 + (float)uVar8;
        local_58.z = (pUVar17->upVector).fields.z * 5.0 + local_58.z;
        UnityEngine_Rigidbody__set_linearVelocity
                  (pUVar13,(UnityEngine_Vector3_o *)&local_58,(MethodInfo *)0x0);
        (__this->fields)._startSpin = true;
        return;
      }
    }
    goto label_182177314;
  }
  pCVar10 = (__this->fields)._human;
  if (pCVar10 == (Characters_Human_o *)0x0) goto label_182177314;
  if ((pCVar10->fields)._state != 9) {
    (__this->fields).IsActive = false;
  }
  if (pCVar10 == (Characters_Human_o *)0x0) goto label_182177314;
  pCVar11 = (pCVar10->fields).Animation;
  if ((TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
  }
  if (pCVar11 == (Characters_AnimationHandler_o *)0x0) goto label_182177314;
  bVar18 = Characters_AnimationHandler__IsPlaying
                     (pCVar11,TypeInfo_Characters_HumanAnimations->static_fields->SpecialLevi,
                      (MethodInfo *)0x0);
  if (bVar18) {
    if (Il2CppMethodInitialized_184346cfd == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanAnimations);
      Il2CppMethodInitialized_184346cfd = '\x01';
    }
    pCVar10 = (__this->fields)._human;
    if (pCVar10 == (Characters_Human_o *)0x0) goto label_182177314;
    pCVar11 = (pCVar10->fields).Animation;
    if ((TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
    }
    if (pCVar11 == (Characters_AnimationHandler_o *)0x0) goto label_182177314;
    fVar21 = Characters_AnimationHandler__GetNormalizedTime
                       (pCVar11,TypeInfo_Characters_HumanAnimations->static_fields->SpecialLevi,
                        (MethodInfo *)0x0);
    pCVar10 = (__this->fields)._human;
    if (pCVar10 == (Characters_Human_o *)0x0) goto label_182177314;
    if ((((pCVar10->fields).Grounded != false) && (0.4 < fVar21)) && (fVar21 < 0.61)) {
      pUVar12 = (pCVar10->fields).Cache;
      if (pUVar12 == (Utility_BaseComponentCache_o *)0x0) goto label_182177314;
      pUVar13 = (pUVar12->fields).Rigidbody;
      __this_00 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)pCVar10,(MethodInfo *)0x0);
      if (__this_00 == (UnityEngine_Transform_o *)0x0) goto label_182177314;
      pUVar20 = UnityEngine_Transform__get_forward(local_48,__this_00,(MethodInfo *)0x0);
      uVar3 = (pUVar20->fields).x;
      uVar7 = (pUVar20->fields).y;
      uVar23._0_4_ = (float)uVar3 * 200.0;
      uVar23._4_4_ = (float)uVar7 * 200.0;
      if (pUVar13 == (UnityEngine_Rigidbody_o *)0x0) goto label_182177314;
      local_58.z = (pUVar20->fields).z * 200.0;
      local_58._0_8_ = uVar23;
      UnityEngine_Rigidbody__AddForce_2fe6d20(pUVar13,(UnityEngine_Vector3_o *)&local_58,(MethodInfo *)0x0);
    }
    if (((__this->fields)._stage != 0) ||
       (pfVar1 = &(__this->fields).AnimationLoopStartTime, fVar21 < *pfVar1 || fVar21 == *pfVar1)) {
      if (((__this->fields)._stage < (__this->fields).Loops) &&
         (pfVar1 = &(__this->fields).AnimationLoopEndTime, *pfVar1 <= fVar21 && fVar21 != *pfVar1)) {
        pCVar10 = (__this->fields)._human;
        if ((TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
        }
        if (pCVar10 == (Characters_Human_o *)0x0) goto label_182177314;
        Characters_BaseCharacter__PlayAnimation
                  ((Characters_BaseCharacter_o *)pCVar10,
                   TypeInfo_Characters_HumanAnimations->static_fields->SpecialLevi,
                   (__this->fields).AnimationLoopStartTime,(MethodInfo *)0x0);
        goto label_182176f2a;
      }
    }
    else {
      pCVar10 = (__this->fields)._human;
      if (pCVar10 == (Characters_Human_o *)0x0) goto label_182177314;
      Characters_Human__ActivateBlades(pCVar10,(MethodInfo *)0x0);
label_182176f2a:
      pSVar14 = TypeInfo_Settings_SettingsManager->static_fields->SoundSettings;
      if ((pSVar14 == (Settings_SoundSettings_o *)0x0) ||
         (pSVar15 = (pSVar14->fields).OldBladeEffect, pSVar15 == (Settings_BoolSetting_o *)0x0))
      goto label_182177314;
      pCVar10 = (__this->fields)._human;
      if ((pSVar15->fields)._value == false) {
        if ((TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
        }
        if (pCVar10 == (Characters_Human_o *)0x0) goto label_182177314;
        sound = TypeInfo_Characters_HumanSounds->static_fields->BladeSwing3;
      }
      else {
        if ((TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
        }
        if (pCVar10 == (Characters_Human_o *)0x0) goto label_182177314;
        sound = TypeInfo_Characters_HumanSounds->static_fields->OldBladeSwing;
      }
      Characters_BaseCharacter__PlaySound((Characters_BaseCharacter_o *)pCVar10,sound,(MethodInfo *)0x0);
      piVar2 = &(__this->fields)._stage;
      *piVar2 = *piVar2 + 1;
    }
    if ((__this->fields)._stage == 3) {
      pCVar10 = (__this->fields)._human;
      if ((pCVar10 == (Characters_Human_o *)0x0) ||
         (pCVar16 = (pCVar10->fields).HookRight, pCVar16 == (Characters_HookUseable_o *)0x0))
      goto label_182177314;
      (*(pCVar16->klass->vtable)._12_SetInput.methodPtr)
                (pCVar16,false,(pCVar16->klass->vtable)._12_SetInput.method);
      pCVar10 = (__this->fields)._human;
      if ((pCVar10 == (Characters_Human_o *)0x0) ||
         (pCVar16 = (pCVar10->fields).HookLeft, pCVar16 == (Characters_HookUseable_o *)0x0))
      goto label_182177314;
      Characters_HookUseable__DisableAnyHook(pCVar16,(MethodInfo *)0x0);
      pCVar10 = (__this->fields)._human;
      if ((pCVar10 == (Characters_Human_o *)0x0) ||
         (pCVar16 = (pCVar10->fields).HookRight, pCVar16 == (Characters_HookUseable_o *)0x0))
      goto label_182177314;
      Characters_HookUseable__DisableAnyHook(pCVar16,(MethodInfo *)0x0);
      piVar2 = &(__this->fields)._stage;
      *piVar2 = *piVar2 + 1;
    }
  }
  pCVar10 = (__this->fields)._human;
  if ((pCVar10 != (Characters_Human_o *)0x0) &&
     (pCVar16 = (pCVar10->fields).HookRight, pCVar16 != (Characters_HookUseable_o *)0x0)) {
    bVar18 = Characters_HookUseable__HasHook(pCVar16,(MethodInfo *)0x0);
    if (!bVar18) {
      return;
    }
    pCVar10 = (__this->fields)._human;
    if ((pCVar10 != (Characters_Human_o *)0x0) &&
       (pCVar16 = (pCVar10->fields).HookRight, pCVar16 != (Characters_HookUseable_o *)0x0)) {
      iVar19 = Characters_HookUseable__GetHookState(pCVar16,(MethodInfo *)0x0);
      if ((iVar19 != 4) && (iVar19 != 2)) {
        return;
      }
      if ((__this->fields)._pulled != false) {
        return;
      }
      pCVar10 = (__this->fields)._human;
      (__this->fields)._pulled = true;
      if ((pCVar10 != (Characters_Human_o *)0x0) &&
         (pCVar16 = (pCVar10->fields).HookRight, pCVar16 != (Characters_HookUseable_o *)0x0)) {
        pUVar20 = Characters_HookUseable__GetHookPosition(local_48,pCVar16,(MethodInfo *)0x0);
        pCVar10 = (__this->fields)._human;
        if ((pCVar10 != (Characters_Human_o *)0x0) &&
           ((pUVar12 = (pCVar10->fields).Cache, pUVar12 != (Utility_BaseComponentCache_o *)0x0 &&
            (pUVar13 = (pUVar12->fields).Rigidbody, pUVar13 != (UnityEngine_Rigidbody_o *)0x0)))) {
          uVar6._0_4_ = (pUVar20->fields).x;
          uVar6._4_4_ = (pUVar20->fields).y;
          fVar25 = (pUVar20->fields).z;
          local_58._0_8_ = uVar6;
          pUVar20 = UnityEngine_Rigidbody__get_position(local_48,pUVar13,(MethodInfo *)0x0);
          fVar21 = (float)uVar6 - (pUVar20->fields).x;
          fVar24 = uVar6._4_4_ - (pUVar20->fields).y;
          fVar25 = fVar25 - (pUVar20->fields).z;
          local_58.y = fVar24;
          local_58.x = fVar21;
          local_58.z = fVar25;
          if (Il2CppMethodInitialized_18433de5f == '\0') {
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
            Il2CppMethodInitialized_18433de5f = '\x01';
          }
          fVar22 = (float)il2cpp_runtime_helper_180546a40(&local_58,0);
          if (fVar22 <= 1e-05) {
            pUVar17 = TypeInfo_UnityEngine_Vector3->static_fields;
            fVar21 = (pUVar17->zeroVector).fields.x;
            fVar24 = (pUVar17->zeroVector).fields.y;
            fVar25 = (pUVar17->zeroVector).fields.z;
          }
          else {
            fVar21 = fVar21 / fVar22;
            fVar24 = fVar24 / fVar22;
            fVar25 = fVar25 / fVar22;
          }
          fVar22 = (__this->fields).PullForce;
          local_58.z = fVar25 * fVar22;
          local_58.y = fVar24 * fVar22;
          local_58.x = fVar21 * fVar22;
          UnityEngine_Rigidbody__AddForce(pUVar13,(UnityEngine_Vector3_o *)&local_58,1,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
label_182177314:
  ThrowNullReferenceException();
}


// Characters.Spin3Special$$GetAnimationTime
// il2cpp: float Characters_Spin3Special__GetAnimationTime (Characters_Spin3Special_o* __this, const MethodInfo* method);
// 0x182177320

float Characters_Spin3Special__GetAnimationTime(Characters_Spin3Special_o *__this,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  Characters_AnimationHandler_o *__this_00;
  float fVar2;
  
  if (Il2CppMethodInitialized_184346cfd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanAnimations);
    Il2CppMethodInitialized_184346cfd = '\x01';
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


