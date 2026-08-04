// Type: Characters.Spin3Special
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Characters/Spin3Special.cs
// Prior real C# source (older reference): Assets/Scripts/Characters/Human/Specials/Spin3Special.cs
// --------------------------------

// Characters.Spin3Special$$get_ActiveTime
// il2cpp: float Characters_Spin3Special__get_ActiveTime (Characters_Spin3Special_o* __this, const MethodInfo* method);
// 0x42f87a0

float Characters_Spin3Special__get_ActiveTime(Characters_Spin3Special_o *__this,MethodInfo *method)

{
  return 1.0;
}


// Characters.Spin3Special$$.ctor
// il2cpp: void Characters_Spin3Special___ctor (Characters_Spin3Special_o* __this, Characters_BaseCharacter_o* owner, const MethodInfo* method);
// 0x42e41e0

void Characters_Spin3Special___ctor
               (Characters_Spin3Special_o *__this,Characters_BaseCharacter_o *owner,MethodInfo *method)

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
// 0x42f87b0

void Characters_Spin3Special__Activate(Characters_Spin3Special_o *__this,MethodInfo *method)

{
  System_String_o **ppSVar1;
  float *pfVar2;
  undefined1 *puVar3;
  char cVar4;
  Characters_HookUseable_o *__this_00;
  Characters_Horse_o *pCVar5;
  Characters_BaseUseable_o *pCVar6;
  System_String_o *pSVar7;
  Characters_AnimationHandler_o *pCVar8;
  UnityEngine_Transform_o *pUVar9;
  void *pvVar10;
  System_String_Fields SVar11;
  UnityEngine_Rigidbody_o *pUVar12;
  code *pcVar13;
  undefined1 auVar14 [16];
  bool_conflict bVar15;
  int iVar16;
  int32_t iVar17;
  Characters_Human_o *pCVar18;
  long lVar19;
  Characters_Human_o *__this_01;
  Characters_Human_o *pCVar20;
  Characters_Human_o **__this_02;
  float fVar21;
  float fVar22;
  float extraout_XMM0_Dc;
  float extraout_XMM0_Dc_00;
  undefined4 uVar23;
  undefined4 extraout_XMM0_Dc_01;
  float extraout_XMM0_Dd;
  float extraout_XMM0_Dd_00;
  undefined4 uVar24;
  undefined4 extraout_XMM0_Dd_01;
  undefined1 auVar26 [16];
  UnityEngine_Vector3_o UVar27;
  UnityEngine_Vector3_o force;
  UnityEngine_Vector3_o UVar28;
  float local_60;
  float fStack_5c;
  undefined8 uVar25;
  
  pCVar20 = (__this->fields)._human;
  __this_01 = (Characters_Human_o *)0x0;
  if (pCVar20 != (Characters_Human_o *)0x0) {
    if (*(int *)&(pCVar20->fields).Weapon == 0) {
      (__this->fields)._stage = 0;
      __this_01 = (Characters_Human_o *)(pCVar20->fields).HumanCache;
    }
    else {
      Characters_Human__Unmount(pCVar20,1,(MethodInfo *)0x0);
      pCVar20 = (__this->fields)._human;
      (__this->fields)._stage = 0;
      __this_01 = (Characters_Human_o *)0x0;
      if (pCVar20 == (Characters_Human_o *)0x0) goto label_042f88a6;
      __this_01 = (Characters_Human_o *)(pCVar20->fields).HumanCache;
    }
    if (__this_01 != (Characters_Human_o *)0x0) {
      Characters_HookUseable__DisableAnyHook((Characters_HookUseable_o *)__this_01,(MethodInfo *)0x0);
      pCVar20 = (__this->fields)._human;
      if (pCVar20 != (Characters_Human_o *)0x0) {
        __this_00 = (Characters_HookUseable_o *)(pCVar20->fields).Special;
        __this_01 = (Characters_Human_o *)0x0;
        if (__this_00 != (Characters_HookUseable_o *)0x0) {
          Characters_HookUseable__DisableAnyHook(__this_00,(MethodInfo *)0x0);
          __this_01 = (__this->fields)._human;
          if ((__this_01 != (Characters_Human_o *)0x0) &&
             (pCVar5 = (__this_01->fields).Horse, pCVar5 != (Characters_Horse_o *)0x0)) {
            fVar21 = 0.0;
            pCVar20 = __this_01;
            if ((float)(pCVar5->fields).FootstepsEnabled <= 0.0) {
label_042f8885:
              uVar25 = (*(pCVar20->klass->vtable)._66_GetAimPoint.methodPtr)
                                 (pCVar20,(pCVar20->klass->vtable)._66_GetAimPoint.method);
              (__this->fields)._aimPoint.fields.x = (float)(int)uVar25;
              (__this->fields)._aimPoint.fields.y = (float)(int)((ulong)uVar25 >> 0x20);
              (__this->fields)._aimPoint.fields.z = fVar21;
              *(undefined2 *)&(__this->fields)._pulled = 0;
              return;
            }
            pCVar6 = (__this_01->fields).Special;
            __this_01 = (Characters_Human_o *)0x0;
            if (pCVar6 != (Characters_BaseUseable_o *)0x0) {
              (*(pCVar6->klass->vtable)._12_SetInput.methodPtr)
                        (pCVar6,1,(pCVar6->klass->vtable)._12_SetInput.method);
              pCVar20 = (__this->fields)._human;
              __this_01 = (Characters_Human_o *)0x0;
              if (pCVar20 != (Characters_Human_o *)0x0) goto label_042f8885;
            }
          }
        }
      }
    }
  }
label_042f88a6:
  il2cpp_runtime_helper_022b2c90();
  pCVar20 = __this_01;
  if (g_data_057adeef == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanAnimations);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSounds);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    pCVar20 = (Characters_Human_o *)&MethodInfo_Boolean_get_Value;
    il2cpp_runtime_helper_023445d0();
    g_data_057adeef = '\x01';
  }
  if (*(char *)((long)&(__this_01->fields).FeedKillerName + 5) == '\0') {
    if (1.0 < (__this_01->fields)._disableKinematicTimeLeft) {
      return;
    }
    pCVar18 = (Characters_Human_o *)(__this_01->fields).RichTextName;
    pCVar20 = TypeInfo_HumanAnimations;
    if ((TypeInfo_HumanAnimations->fields)._stepPhase == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    if (pCVar18 != (Characters_Human_o *)0x0) {
      Characters_Human__StartSpecialAttack
                (pCVar18,*(System_String_o **)
                          &(TypeInfo_HumanAnimations->fields).MovementSync[3].fields._correctRotation.fields.z,
                 (MethodInfo *)0x0);
      pSVar7 = (__this_01->fields).RichTextName;
      pCVar20 = pCVar18;
      if (((pSVar7 != (System_String_o *)0x0) &&
          (SVar11 = pSVar7[4].fields, SVar11 != (System_String_Fields)0x0)) &&
         (pUVar12 = *(UnityEngine_Rigidbody_o **)((long)SVar11 + 0x18),
         pUVar12 != (UnityEngine_Rigidbody_o *)0x0)) {
        UVar27 = UnityEngine_Rigidbody__get_velocity(pUVar12,(MethodInfo *)0x0);
        if (g_data_057a6844 == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
          g_data_057a6844 = '\x01';
        }
        uVar25 = *(undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x18);
        UVar28.fields.x = UVar27.fields.x + (float)uVar25 * 5.0;
        UVar28.fields.y = UVar27.fields.y + (float)((ulong)uVar25 >> 0x20) * 5.0;
        UVar28.fields.z = UVar27.fields.z + *(float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x20) * 5.0;
        UnityEngine_Rigidbody__set_velocity(pUVar12,UVar28,(MethodInfo *)0x0);
        *(undefined1 *)((long)&(__this_01->fields).FeedKillerName + 5) = 1;
        return;
      }
    }
    goto label_042f8eea;
  }
  pSVar7 = (__this_01->fields).RichTextName;
  if (pSVar7 == (System_String_o *)0x0) goto label_042f8eea;
  if (*(int *)&pSVar7[0xe].monitor != 9) {
    *(undefined1 *)((long)&(__this_01->fields).m_CancellationTokenSource + 4) = 0;
  }
  __this_02 = pSVar7[7].monitor;
  pCVar20 = TypeInfo_HumanAnimations;
  if ((TypeInfo_HumanAnimations->fields)._stepPhase == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if ((Characters_Human_o *)__this_02 == (Characters_Human_o *)0x0) goto label_042f8eea;
  bVar15 = Characters_AnimationHandler__IsPlaying
                     ((Characters_AnimationHandler_o *)__this_02,
                      *(System_String_o **)
                       &(TypeInfo_HumanAnimations->fields).MovementSync[3].fields._correctRotation.fields.z,
                      (MethodInfo *)0x0);
  if ((char)bVar15 != '\0') {
    if (g_data_057adef0 == '\0') {
      __this_02 = &TypeInfo_HumanAnimations;
      il2cpp_runtime_helper_023445d0();
      g_data_057adef0 = '\x01';
    }
    pSVar7 = (__this_01->fields).RichTextName;
    pCVar20 = (Characters_Human_o *)__this_02;
    if (pSVar7 == (System_String_o *)0x0) goto label_042f8eea;
    pCVar8 = pSVar7[7].monitor;
    pCVar20 = TypeInfo_HumanAnimations;
    if ((TypeInfo_HumanAnimations->fields)._stepPhase == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    if (pCVar8 == (Characters_AnimationHandler_o *)0x0) goto label_042f8eea;
    fVar21 = Characters_AnimationHandler__GetNormalizedTime
                       (pCVar8,*(System_String_o **)
                                &(TypeInfo_HumanAnimations->fields).MovementSync[3].fields._correctRotation.fields.z,
                        (MethodInfo *)0x0);
    pCVar20 = (Characters_Human_o *)(__this_01->fields).RichTextName;
    if (pCVar20 == (Characters_Human_o *)0x0) goto label_042f8eea;
    __this_02 = (Characters_Human_o **)pCVar20;
    if (((fVar21 < 0.61) && (0.4 < fVar21)) && (*(char *)((long)&(pCVar20->fields).Animation + 4) != '\0')) {
      pUVar9 = *(UnityEngine_Transform_o **)&(pCVar20->fields).Dead;
      if (pUVar9 == (UnityEngine_Transform_o *)0x0) goto label_042f8eea;
      __this_02 = (Characters_Human_o **)pUVar9[1].klass;
      pCVar18 = (Characters_Human_o *)
                UnityEngine_Component__get_transform((UnityEngine_Component_o *)pCVar20,(MethodInfo *)0x0);
      if (pCVar18 == (Characters_Human_o *)0x0) goto label_042f8eea;
      UVar27 = UnityEngine_Transform__get_forward((UnityEngine_Transform_o *)pCVar18,(MethodInfo *)0x0);
      pCVar20 = pCVar18;
      if ((Characters_Human_o *)__this_02 == (Characters_Human_o *)0x0) goto label_042f8eea;
      force.fields.x = UVar27.fields.x * 200.0;
      force.fields.y = UVar27.fields.y * 200.0;
      force.fields.z = UVar27.fields.z * 200.0;
      UnityEngine_Rigidbody__AddForce_4e7f8d0((UnityEngine_Rigidbody_o *)__this_02,force,(MethodInfo *)0x0);
    }
    iVar16 = *(int *)&(__this_01->fields).field_0x44;
    if ((iVar16 != 0) ||
       (ppSVar1 = &(__this_01->fields).VisibleName, fVar21 < *(float *)ppSVar1 || fVar21 == *(float *)ppSVar1)
       ) {
      if ((iVar16 < (__this_01->fields).HasExplicitNameTag) &&
         (pfVar2 = (float *)((long)&(__this_01->fields).VisibleName + 4),
         *pfVar2 <= fVar21 && fVar21 != *pfVar2)) {
        pCVar18 = (Characters_Human_o *)(__this_01->fields).RichTextName;
        pCVar20 = TypeInfo_HumanAnimations;
        if ((TypeInfo_HumanAnimations->fields)._stepPhase == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        if (pCVar18 == (Characters_Human_o *)0x0) goto label_042f8eea;
        Characters_BaseCharacter__PlayAnimation
                  ((Characters_BaseCharacter_o *)pCVar18,
                   *(System_String_o **)
                    &(TypeInfo_HumanAnimations->fields).MovementSync[3].fields._correctRotation.fields.z,
                   *(float *)&(__this_01->fields).VisibleName,(MethodInfo *)0x0);
        goto label_042f8bd5;
      }
    }
    else {
      pCVar18 = (Characters_Human_o *)(__this_01->fields).RichTextName;
      pCVar20 = pCVar18;
      if (pCVar18 == (Characters_Human_o *)0x0) goto label_042f8eea;
      Characters_Human__ActivateBlades(pCVar18,(MethodInfo *)0x0);
label_042f8bd5:
      lVar19 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x80);
      pCVar20 = pCVar18;
      if ((lVar19 == 0) || (lVar19 = *(long *)(lVar19 + 0x88), lVar19 == 0)) goto label_042f8eea;
      cVar4 = *(char *)(lVar19 + 0x11);
      __this_02 = (Characters_Human_o **)(__this_01->fields).RichTextName;
      if ((TypeInfo_HumanSounds->fields)._stepPhase == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      if (cVar4 == '\0') {
        lVar19 = 0x58;
      }
      else {
        lVar19 = 0x68;
      }
      pCVar20 = TypeInfo_HumanSounds;
      if ((Characters_Human_o *)__this_02 == (Characters_Human_o *)0x0) goto label_042f8eea;
      Characters_BaseCharacter__PlaySound
                ((Characters_BaseCharacter_o *)__this_02,
                 *(System_String_o **)((long)&((TypeInfo_HumanSounds->fields).MovementSync)->klass + lVar19),
                 (MethodInfo *)0x0);
      iVar16 = *(int *)&(__this_01->fields).field_0x44 + 1;
      *(int *)&(__this_01->fields).field_0x44 = iVar16;
    }
    if (iVar16 == 3) {
      pSVar7 = (__this_01->fields).RichTextName;
      pCVar20 = (Characters_Human_o *)__this_02;
      if ((pSVar7 == (System_String_o *)0x0) ||
         (pCVar20 = pSVar7[0xb].monitor, pCVar20 == (Characters_Human_o *)0x0)) goto label_042f8eea;
      pvVar10 = ((Il2CppClass_1 *)&pCVar20->klass)->image;
      (**(code **)((long)pvVar10 + 0x1f8))(pCVar20,0,*(undefined8 *)((long)pvVar10 + 0x200));
      pSVar7 = (__this_01->fields).RichTextName;
      if ((pSVar7 == (System_String_o *)0x0) ||
         (pCVar20 = (Characters_Human_o *)pSVar7[0xb].klass, pCVar20 == (Characters_Human_o *)0x0))
      goto label_042f8eea;
      Characters_HookUseable__DisableAnyHook((Characters_HookUseable_o *)pCVar20,(MethodInfo *)0x0);
      pSVar7 = (__this_01->fields).RichTextName;
      if ((pSVar7 == (System_String_o *)0x0) ||
         (__this_02 = pSVar7[0xb].monitor, pCVar20 = (Characters_Human_o *)__this_02,
         (Characters_Human_o *)__this_02 == (Characters_Human_o *)0x0)) goto label_042f8eea;
      Characters_HookUseable__DisableAnyHook((Characters_HookUseable_o *)__this_02,(MethodInfo *)0x0);
      puVar3 = &(__this_01->fields).field_0x44;
      *(int *)puVar3 = *(int *)puVar3 + 1;
    }
  }
  pSVar7 = (__this_01->fields).RichTextName;
  pCVar20 = (Characters_Human_o *)__this_02;
  if ((pSVar7 != (System_String_o *)0x0) &&
     (pCVar20 = pSVar7[0xb].monitor, pCVar20 != (Characters_Human_o *)0x0)) {
    bVar15 = Characters_HookUseable__HasHook((Characters_HookUseable_o *)pCVar20,(MethodInfo *)0x0);
    if ((char)bVar15 == '\0') {
      return;
    }
    pSVar7 = (__this_01->fields).RichTextName;
    if ((pSVar7 != (System_String_o *)0x0) &&
       (pCVar20 = pSVar7[0xb].monitor, pCVar20 != (Characters_Human_o *)0x0)) {
      iVar17 = Characters_HookUseable__GetHookState((Characters_HookUseable_o *)pCVar20,(MethodInfo *)0x0);
      if ((iVar17 != 4) && (iVar17 != 2)) {
        return;
      }
      if (*(char *)((long)&(__this_01->fields).FeedKillerName + 4) != '\0') {
        return;
      }
      *(undefined1 *)((long)&(__this_01->fields).FeedKillerName + 4) = 1;
      pSVar7 = (__this_01->fields).RichTextName;
      if ((pSVar7 != (System_String_o *)0x0) &&
         (pCVar20 = pSVar7[0xb].monitor, pCVar20 != (Characters_Human_o *)0x0)) {
        UVar27 = Characters_HookUseable__GetHookPosition
                           ((Characters_HookUseable_o *)pCVar20,(MethodInfo *)0x0);
        pSVar7 = (__this_01->fields).RichTextName;
        if ((pSVar7 != (System_String_o *)0x0) &&
           ((SVar11 = pSVar7[4].fields, SVar11 != (System_String_Fields)0x0 &&
            (pUVar12 = *(UnityEngine_Rigidbody_o **)((long)SVar11 + 0x18),
            pUVar12 != (UnityEngine_Rigidbody_o *)0x0)))) {
          UVar28 = UnityEngine_Rigidbody__get_position(pUVar12,(MethodInfo *)0x0);
          if (g_data_057a6845 == '\0') {
            il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
            g_data_057a6845 = '\x01';
          }
          local_60 = UVar27.fields.x;
          fStack_5c = UVar27.fields.y;
          auVar26._0_4_ = local_60 - UVar28.fields.x;
          auVar26._4_4_ = fStack_5c - UVar28.fields.y;
          auVar26._8_4_ = extraout_XMM0_Dc - extraout_XMM0_Dc_00;
          auVar26._12_4_ = extraout_XMM0_Dd - extraout_XMM0_Dd_00;
          fVar21 = UVar27.fields.z - UVar28.fields.z;
          if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          uVar23 = 0;
          uVar24 = 0;
          fVar22 = fVar21 * fVar21 + auVar26._4_4_ * auVar26._4_4_ + auVar26._0_4_ * auVar26._0_4_;
          if (fVar22 < 0.0) {
            fVar22 = sqrtf(fVar22);
            uVar23 = extraout_XMM0_Dc_01;
            uVar24 = extraout_XMM0_Dd_01;
          }
          else {
            fVar22 = SQRT(fVar22);
          }
          if (1e-05 < fVar22) {
            fVar21 = fVar21 / fVar22;
            auVar14._4_4_ = fVar22;
            auVar14._0_4_ = fVar22;
            auVar14._8_4_ = uVar23;
            auVar14._12_4_ = uVar24;
            auVar26 = divps(auVar26,auVar14);
            uVar25 = auVar26._0_8_;
          }
          else {
            if (g_data_057a65d5 == '\0') {
              il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
              g_data_057a65d5 = '\x01';
            }
            uVar25 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
            fVar21 = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
          }
          fVar22 = *(float *)&(__this_01->fields).FeedVictimName;
          UVar27.fields.z = fVar21 * fVar22;
          UVar27.fields.x = fVar22 * (float)uVar25;
          UVar27.fields.y = fVar22 * (float)((ulong)uVar25 >> 0x20);
          UnityEngine_Rigidbody__AddForce(pUVar12,UVar27,1,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
label_042f8eea:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057adef0 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanAnimations);
    g_data_057adef0 = '\x01';
  }
  pSVar7 = (pCVar20->fields).RichTextName;
  if (pSVar7 != (System_String_o *)0x0) {
    pCVar8 = pSVar7[7].monitor;
    if ((TypeInfo_HumanAnimations->fields)._stepPhase == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    if (pCVar8 != (Characters_AnimationHandler_o *)0x0) {
      Characters_AnimationHandler__GetNormalizedTime
                (pCVar8,*(System_String_o **)
                         &(TypeInfo_HumanAnimations->fields).MovementSync[3].fields._correctRotation.fields.z,
                 (MethodInfo *)0x0);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}


// Characters.Spin3Special$$ActiveFixedUpdate
// il2cpp: void Characters_Spin3Special__ActiveFixedUpdate (Characters_Spin3Special_o* __this, const MethodInfo* method);
// 0x42f88b0

void Characters_Spin3Special__ActiveFixedUpdate(Characters_Spin3Special_o *__this,MethodInfo *method)

{
  float *pfVar1;
  int32_t *piVar2;
  char cVar3;
  Characters_AnimationHandler_o *__this_00;
  Characters_Human_o *pCVar4;
  UnityEngine_Rigidbody_o *pUVar5;
  System_Collections_Generic_Dictionary_string__AnimationClip__o *pSVar6;
  System_Int32_array *__this_01;
  code *pcVar7;
  undefined1 auVar8 [16];
  bool_conflict bVar9;
  int iVar10;
  int32_t iVar11;
  Characters_Human_o *pCVar12;
  long lVar13;
  Characters_Human_o *__this_02;
  Characters_Human_o **__this_03;
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
  
  __this_02 = (Characters_Human_o *)__this;
  if (g_data_057adeef == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanAnimations);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSounds);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    __this_02 = (Characters_Human_o *)&MethodInfo_Boolean_get_Value;
    il2cpp_runtime_helper_023445d0();
    g_data_057adeef = '\x01';
  }
  if (*(char *)((long)&(__this->fields)._pulled + 1) == '\0') {
    if (1.0 < (__this->fields)._activeTimeLeft) {
      return;
    }
    pCVar12 = (__this->fields)._human;
    __this_02 = TypeInfo_HumanAnimations;
    if ((TypeInfo_HumanAnimations->fields)._stepPhase == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    if (pCVar12 != (Characters_Human_o *)0x0) {
      Characters_Human__StartSpecialAttack
                (pCVar12,*(System_String_o **)
                          &(TypeInfo_HumanAnimations->fields).MovementSync[3].fields._correctRotation.fields.z,
                 (MethodInfo *)0x0);
      pCVar4 = (__this->fields)._human;
      __this_02 = pCVar12;
      if (((pCVar4 != (Characters_Human_o *)0x0) && (lVar13 = *(long *)&(pCVar4->fields).Dead, lVar13 != 0))
         && (pUVar5 = *(UnityEngine_Rigidbody_o **)(lVar13 + 0x18), pUVar5 != (UnityEngine_Rigidbody_o *)0x0))
      {
        UVar20 = UnityEngine_Rigidbody__get_velocity(pUVar5,(MethodInfo *)0x0);
        if (g_data_057a6844 == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
          g_data_057a6844 = '\x01';
        }
        uVar18 = *(undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x18);
        UVar21.fields.x = UVar20.fields.x + (float)uVar18 * 5.0;
        UVar21.fields.y = UVar20.fields.y + (float)((ulong)uVar18 >> 0x20) * 5.0;
        UVar21.fields.z = UVar20.fields.z + *(float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x20) * 5.0;
        UnityEngine_Rigidbody__set_velocity(pUVar5,UVar21,(MethodInfo *)0x0);
        *(undefined1 *)((long)&(__this->fields)._pulled + 1) = 1;
        return;
      }
    }
    goto label_042f8eea;
  }
  pCVar12 = (__this->fields)._human;
  if (pCVar12 == (Characters_Human_o *)0x0) goto label_042f8eea;
  if ((pCVar12->fields).FinishSetup != 9) {
    *(undefined1 *)&(__this->fields).IsActive = 0;
  }
  __this_03 = *(Characters_Human_o ***)&(pCVar12->fields)._cameraFPS;
  __this_02 = TypeInfo_HumanAnimations;
  if ((TypeInfo_HumanAnimations->fields)._stepPhase == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if ((Characters_Human_o *)__this_03 == (Characters_Human_o *)0x0) goto label_042f8eea;
  bVar9 = Characters_AnimationHandler__IsPlaying
                    ((Characters_AnimationHandler_o *)__this_03,
                     *(System_String_o **)
                      &(TypeInfo_HumanAnimations->fields).MovementSync[3].fields._correctRotation.fields.z,
                     (MethodInfo *)0x0);
  if ((char)bVar9 != '\0') {
    if (g_data_057adef0 == '\0') {
      __this_03 = &TypeInfo_HumanAnimations;
      il2cpp_runtime_helper_023445d0();
      g_data_057adef0 = '\x01';
    }
    pCVar12 = (__this->fields)._human;
    __this_02 = (Characters_Human_o *)__this_03;
    if (pCVar12 == (Characters_Human_o *)0x0) goto label_042f8eea;
    __this_00 = *(Characters_AnimationHandler_o **)&(pCVar12->fields)._cameraFPS;
    __this_02 = TypeInfo_HumanAnimations;
    if ((TypeInfo_HumanAnimations->fields)._stepPhase == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    if (__this_00 == (Characters_AnimationHandler_o *)0x0) goto label_042f8eea;
    fVar14 = Characters_AnimationHandler__GetNormalizedTime
                       (__this_00,
                        *(System_String_o **)
                         &(TypeInfo_HumanAnimations->fields).MovementSync[3].fields._correctRotation.fields.z,
                        (MethodInfo *)0x0);
    __this_02 = (__this->fields)._human;
    if (__this_02 == (Characters_Human_o *)0x0) goto label_042f8eea;
    __this_03 = (Characters_Human_o **)__this_02;
    if (((fVar14 < 0.61) && (0.4 < fVar14)) && (*(char *)((long)&(__this_02->fields).Animation + 4) != '\0'))
    {
      lVar13 = *(long *)&(__this_02->fields).Dead;
      if (lVar13 == 0) goto label_042f8eea;
      __this_03 = *(Characters_Human_o ***)(lVar13 + 0x18);
      pCVar12 = (Characters_Human_o *)
                UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this_02,(MethodInfo *)0x0);
      if (pCVar12 == (Characters_Human_o *)0x0) goto label_042f8eea;
      UVar20 = UnityEngine_Transform__get_forward((UnityEngine_Transform_o *)pCVar12,(MethodInfo *)0x0);
      __this_02 = pCVar12;
      if ((Characters_Human_o *)__this_03 == (Characters_Human_o *)0x0) goto label_042f8eea;
      force.fields.x = UVar20.fields.x * 200.0;
      force.fields.y = UVar20.fields.y * 200.0;
      force.fields.z = UVar20.fields.z * 200.0;
      UnityEngine_Rigidbody__AddForce_4e7f8d0((UnityEngine_Rigidbody_o *)__this_03,force,(MethodInfo *)0x0);
    }
    iVar10 = (__this->fields)._stage;
    if ((iVar10 != 0) ||
       (pfVar1 = &(__this->fields).AnimationLoopStartTime, fVar14 < *pfVar1 || fVar14 == *pfVar1)) {
      if ((iVar10 < (__this->fields).Loops) &&
         (pfVar1 = &(__this->fields).AnimationLoopEndTime, *pfVar1 <= fVar14 && fVar14 != *pfVar1)) {
        pCVar12 = (__this->fields)._human;
        __this_02 = TypeInfo_HumanAnimations;
        if ((TypeInfo_HumanAnimations->fields)._stepPhase == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        if (pCVar12 == (Characters_Human_o *)0x0) goto label_042f8eea;
        Characters_BaseCharacter__PlayAnimation
                  ((Characters_BaseCharacter_o *)pCVar12,
                   *(System_String_o **)
                    &(TypeInfo_HumanAnimations->fields).MovementSync[3].fields._correctRotation.fields.z,
                   (__this->fields).AnimationLoopStartTime,(MethodInfo *)0x0);
        goto label_042f8bd5;
      }
    }
    else {
      pCVar12 = (__this->fields)._human;
      __this_02 = pCVar12;
      if (pCVar12 == (Characters_Human_o *)0x0) goto label_042f8eea;
      Characters_Human__ActivateBlades(pCVar12,(MethodInfo *)0x0);
label_042f8bd5:
      lVar13 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x80);
      __this_02 = pCVar12;
      if ((lVar13 == 0) || (lVar13 = *(long *)(lVar13 + 0x88), lVar13 == 0)) goto label_042f8eea;
      cVar3 = *(char *)(lVar13 + 0x11);
      __this_03 = (Characters_Human_o **)(__this->fields)._human;
      if ((TypeInfo_HumanSounds->fields)._stepPhase == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      if (cVar3 == '\0') {
        lVar13 = 0x58;
      }
      else {
        lVar13 = 0x68;
      }
      __this_02 = TypeInfo_HumanSounds;
      if ((Characters_Human_o *)__this_03 == (Characters_Human_o *)0x0) goto label_042f8eea;
      Characters_BaseCharacter__PlaySound
                ((Characters_BaseCharacter_o *)__this_03,
                 *(System_String_o **)((long)&((TypeInfo_HumanSounds->fields).MovementSync)->klass + lVar13),
                 (MethodInfo *)0x0);
      iVar10 = (__this->fields)._stage + 1;
      (__this->fields)._stage = iVar10;
    }
    if (iVar10 == 3) {
      pCVar12 = (__this->fields)._human;
      __this_02 = (Characters_Human_o *)__this_03;
      if ((pCVar12 == (Characters_Human_o *)0x0) ||
         (__this_02 = (Characters_Human_o *)(pCVar12->fields).Special, __this_02 == (Characters_Human_o *)0x0)
         ) goto label_042f8eea;
      (*(__this_02->klass->vtable)._12_unknown.methodPtr)
                (__this_02,0,(__this_02->klass->vtable)._12_unknown.method);
      pCVar12 = (__this->fields)._human;
      if ((pCVar12 == (Characters_Human_o *)0x0) ||
         (__this_02 = (Characters_Human_o *)(pCVar12->fields).HumanCache,
         __this_02 == (Characters_Human_o *)0x0)) goto label_042f8eea;
      Characters_HookUseable__DisableAnyHook((Characters_HookUseable_o *)__this_02,(MethodInfo *)0x0);
      pCVar12 = (__this->fields)._human;
      if ((pCVar12 == (Characters_Human_o *)0x0) ||
         (__this_03 = (Characters_Human_o **)(pCVar12->fields).Special,
         __this_02 = (Characters_Human_o *)__this_03,
         (Characters_Human_o *)__this_03 == (Characters_Human_o *)0x0)) goto label_042f8eea;
      Characters_HookUseable__DisableAnyHook((Characters_HookUseable_o *)__this_03,(MethodInfo *)0x0);
      piVar2 = &(__this->fields)._stage;
      *piVar2 = *piVar2 + 1;
    }
  }
  pCVar12 = (__this->fields)._human;
  __this_02 = (Characters_Human_o *)__this_03;
  if ((pCVar12 != (Characters_Human_o *)0x0) &&
     (__this_02 = (Characters_Human_o *)(pCVar12->fields).Special, __this_02 != (Characters_Human_o *)0x0)) {
    bVar9 = Characters_HookUseable__HasHook((Characters_HookUseable_o *)__this_02,(MethodInfo *)0x0);
    if ((char)bVar9 == '\0') {
      return;
    }
    pCVar12 = (__this->fields)._human;
    if ((pCVar12 != (Characters_Human_o *)0x0) &&
       (__this_02 = (Characters_Human_o *)(pCVar12->fields).Special, __this_02 != (Characters_Human_o *)0x0))
    {
      iVar11 = Characters_HookUseable__GetHookState((Characters_HookUseable_o *)__this_02,(MethodInfo *)0x0);
      if ((iVar11 != 4) && (iVar11 != 2)) {
        return;
      }
      if ((char)(__this->fields)._pulled != '\0') {
        return;
      }
      *(undefined1 *)&(__this->fields)._pulled = 1;
      pCVar12 = (__this->fields)._human;
      if ((pCVar12 != (Characters_Human_o *)0x0) &&
         (__this_02 = (Characters_Human_o *)(pCVar12->fields).Special, __this_02 != (Characters_Human_o *)0x0)
         ) {
        UVar20 = Characters_HookUseable__GetHookPosition
                           ((Characters_HookUseable_o *)__this_02,(MethodInfo *)0x0);
        pCVar12 = (__this->fields)._human;
        if ((pCVar12 != (Characters_Human_o *)0x0) &&
           ((lVar13 = *(long *)&(pCVar12->fields).Dead, lVar13 != 0 &&
            (pUVar5 = *(UnityEngine_Rigidbody_o **)(lVar13 + 0x18), pUVar5 != (UnityEngine_Rigidbody_o *)0x0))
           )) {
          UVar21 = UnityEngine_Rigidbody__get_position(pUVar5,(MethodInfo *)0x0);
          if (g_data_057a6845 == '\0') {
            il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
            g_data_057a6845 = '\x01';
          }
          fStack_58 = UVar20.fields.x;
          fStack_54 = UVar20.fields.y;
          auVar19._0_4_ = fStack_58 - UVar21.fields.x;
          auVar19._4_4_ = fStack_54 - UVar21.fields.y;
          auVar19._8_4_ = extraout_XMM0_Dc - extraout_XMM0_Dc_00;
          auVar19._12_4_ = extraout_XMM0_Dd - extraout_XMM0_Dd_00;
          fVar14 = UVar20.fields.z - UVar21.fields.z;
          if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
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
            auVar8._4_4_ = fVar15;
            auVar8._0_4_ = fVar15;
            auVar8._8_4_ = uVar16;
            auVar8._12_4_ = uVar17;
            auVar19 = divps(auVar19,auVar8);
            uVar18 = auVar19._0_8_;
          }
          else {
            if (g_data_057a65d5 == '\0') {
              il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
              g_data_057a65d5 = '\x01';
            }
            uVar18 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
            fVar14 = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
          }
          fVar15 = (float)(__this->fields)._startSpin;
          UVar20.fields.z = fVar14 * fVar15;
          UVar20.fields.x = fVar15 * (float)uVar18;
          UVar20.fields.y = fVar15 * (float)((ulong)uVar18 >> 0x20);
          UnityEngine_Rigidbody__AddForce(pUVar5,UVar20,1,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
label_042f8eea:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057adef0 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanAnimations);
    g_data_057adef0 = '\x01';
  }
  pSVar6 = (System_Collections_Generic_Dictionary_string__AnimationClip__o *)(__this_02->fields).RichTextName;
  if (pSVar6 != (System_Collections_Generic_Dictionary_string__AnimationClip__o *)0x0) {
    __this_01 = pSVar6[2].fields._buckets;
    if ((TypeInfo_HumanAnimations->fields)._stepPhase == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    if (__this_01 != (System_Int32_array *)0x0) {
      Characters_AnimationHandler__GetNormalizedTime
                ((Characters_AnimationHandler_o *)__this_01,
                 *(System_String_o **)&(TypeInfo_HumanAnimations->fields).MovementSync[3].fields._correctRotation.fields.z
                 ,(MethodInfo *)0x0);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


// Characters.Spin3Special$$GetAnimationTime
// il2cpp: float Characters_Spin3Special__GetAnimationTime (Characters_Spin3Special_o* __this, const MethodInfo* method);
// 0x42f8ef0

float Characters_Spin3Special__GetAnimationTime(Characters_Spin3Special_o *__this,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  Characters_AnimationHandler_o *__this_00;
  code *pcVar2;
  float fVar3;
  
  if (g_data_057adef0 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanAnimations);
    g_data_057adef0 = '\x01';
  }
  pCVar1 = (__this->fields)._human;
  if (pCVar1 != (Characters_Human_o *)0x0) {
    __this_00 = *(Characters_AnimationHandler_o **)&(pCVar1->fields)._cameraFPS;
    if (*(int *)(TypeInfo_HumanAnimations + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    if (__this_00 != (Characters_AnimationHandler_o *)0x0) {
      fVar3 = Characters_AnimationHandler__GetNormalizedTime
                        (__this_00,*(System_String_o **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x208),
                         (MethodInfo *)0x0);
      return fVar3;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pcVar2 = (code *)swi(3);
  fVar3 = (float)(*pcVar2)();
  return fVar3;
}


