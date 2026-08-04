// Type: Characters.Spin1Special
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Characters/Spin1Special.cs
// Prior real C# source (older reference): Assets/Scripts/Characters/Human/Specials/Spin1Special.cs
// --------------------------------

// Characters.Spin1Special$$get_ActiveTime
// il2cpp: float Characters_Spin1Special__get_ActiveTime (Characters_Spin1Special_o* __this, const MethodInfo* method);
// 0x42f8060

float Characters_Spin1Special__get_ActiveTime(Characters_Spin1Special_o *__this,MethodInfo *method)

{
  return 0.8;
}


// Characters.Spin1Special$$.ctor
// il2cpp: void Characters_Spin1Special___ctor (Characters_Spin1Special_o* __this, Characters_BaseCharacter_o* owner, const MethodInfo* method);
// 0x42e4180

void Characters_Spin1Special___ctor
               (Characters_Spin1Special_o *__this,Characters_BaseCharacter_o *owner,MethodInfo *method)

{
  (__this->fields).AnimationLoopStartTime = 0.35;
  (__this->fields).AnimationLoopEndTime = 0.5;
  (__this->fields).Loops = 3;
  Characters_BaseAttackSpecial___ctor((Characters_BaseAttackSpecial_o *)__this,owner,method);
  (__this->fields).Cooldown = 5.0;
  return;
}


// Characters.Spin1Special$$Activate
// il2cpp: void Characters_Spin1Special__Activate (Characters_Spin1Special_o* __this, const MethodInfo* method);
// 0x42f8070

void Characters_Spin1Special__Activate(Characters_Spin1Special_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_string__string__o **ppSVar1;
  float *pfVar2;
  undefined1 *puVar3;
  char cVar4;
  int iVar5;
  System_Collections_Generic_Dictionary_string__AnimationClip__o *pSVar6;
  Characters_BaseCharacter_o *__this_00;
  bool_conflict bVar7;
  Characters_BaseMovementSync_o *pCVar8;
  long lVar9;
  Characters_Human_o *pCVar10;
  Characters_Human_o *pCVar11;
  System_Int32_array *pSVar12;
  Characters_Human_o *__this_01;
  float fVar13;
  
  if (g_data_057adee9 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanAnimations);
    g_data_057adee9 = '\x01';
  }
  (__this->fields)._stage = 0;
  pCVar11 = (__this->fields)._human;
  pCVar10 = TypeInfo_HumanAnimations;
  if ((TypeInfo_HumanAnimations->fields)._stepPhase == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (pCVar11 != (Characters_Human_o *)0x0) {
    Characters_Human__StartSpecialAttack
              (pCVar11,*(System_String_o **)
                        &(TypeInfo_HumanAnimations->fields).MovementSync[3].fields._correctRotation.fields.z,
               (MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pCVar11 = pCVar10;
  if (g_data_057adeea == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanAnimations);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSounds);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    pCVar11 = (Characters_Human_o *)&MethodInfo_Boolean_get_Value;
    il2cpp_runtime_helper_023445d0();
    g_data_057adeea = '\x01';
  }
  pSVar6 = (System_Collections_Generic_Dictionary_string__AnimationClip__o *)(pCVar10->fields).RichTextName;
  if (pSVar6 == (System_Collections_Generic_Dictionary_string__AnimationClip__o *)0x0) goto label_042f8315;
  if (*(int *)&pSVar6[4].fields._entries != 9) {
    *(undefined1 *)((long)&(pCVar10->fields).m_CancellationTokenSource + 4) = 0;
  }
  pSVar12 = pSVar6[2].fields._buckets;
  pCVar11 = TypeInfo_HumanAnimations;
  if ((TypeInfo_HumanAnimations->fields)._stepPhase == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (pSVar12 == (System_Int32_array *)0x0) goto label_042f8315;
  bVar7 = Characters_AnimationHandler__IsPlaying
                    ((Characters_AnimationHandler_o *)pSVar12,
                     *(System_String_o **)
                      &(TypeInfo_HumanAnimations->fields).MovementSync[3].fields._correctRotation.fields.z,
                     (MethodInfo *)0x0);
  if ((char)bVar7 == '\0') {
    return;
  }
  if (g_data_057adeeb == '\0') {
    pSVar12 = (System_Int32_array *)&TypeInfo_HumanAnimations;
    il2cpp_runtime_helper_023445d0();
    g_data_057adeeb = '\x01';
  }
  pSVar6 = (System_Collections_Generic_Dictionary_string__AnimationClip__o *)(pCVar10->fields).RichTextName;
  pCVar11 = (Characters_Human_o *)pSVar12;
  if (pSVar6 == (System_Collections_Generic_Dictionary_string__AnimationClip__o *)0x0) goto label_042f8315;
  pSVar12 = pSVar6[2].fields._buckets;
  pCVar11 = TypeInfo_HumanAnimations;
  if ((TypeInfo_HumanAnimations->fields)._stepPhase == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (pSVar12 == (System_Int32_array *)0x0) goto label_042f8315;
  fVar13 = Characters_AnimationHandler__GetNormalizedTime
                     ((Characters_AnimationHandler_o *)pSVar12,
                      *(System_String_o **)
                       &(TypeInfo_HumanAnimations->fields).MovementSync[3].fields._correctRotation.fields.z,
                      (MethodInfo *)0x0);
  iVar5 = *(int *)&(pCVar10->fields).field_0x44;
  if ((iVar5 != 0) ||
     (ppSVar1 = (System_Collections_Generic_Dictionary_string__string__o **)&(pCVar10->fields).VisibleName,
     fVar13 < *(float *)ppSVar1 || fVar13 == *(float *)ppSVar1)) {
    if ((pCVar10->fields).HasExplicitNameTag <= iVar5) {
      return;
    }
    pfVar2 = (float *)((long)&(pCVar10->fields).VisibleName + 4);
    if (fVar13 < *pfVar2 || fVar13 == *pfVar2) {
      return;
    }
    __this_01 = (Characters_Human_o *)(pCVar10->fields).RichTextName;
    pCVar11 = TypeInfo_HumanAnimations;
    if ((TypeInfo_HumanAnimations->fields)._stepPhase == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    if (__this_01 == (Characters_Human_o *)0x0) goto label_042f8315;
    Characters_BaseCharacter__PlayAnimation
              ((Characters_BaseCharacter_o *)__this_01,
               *(System_String_o **)&(TypeInfo_HumanAnimations->fields).MovementSync[3].fields._correctRotation.fields.z,
               *(float *)&(pCVar10->fields).VisibleName,(MethodInfo *)0x0);
  }
  else {
    __this_01 = (Characters_Human_o *)(pCVar10->fields).RichTextName;
    pCVar11 = __this_01;
    if (__this_01 == (Characters_Human_o *)0x0) goto label_042f8315;
    Characters_Human__ActivateBlades(__this_01,(MethodInfo *)0x0);
  }
  lVar9 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x80);
  pCVar11 = __this_01;
  if ((lVar9 == 0) || (lVar9 = *(long *)(lVar9 + 0x88), lVar9 == 0)) goto label_042f8315;
  cVar4 = *(char *)(lVar9 + 0x11);
  __this_00 = (Characters_BaseCharacter_o *)(pCVar10->fields).RichTextName;
  if ((TypeInfo_HumanSounds->fields)._stepPhase == 0) {
    il2cpp_runtime_helper_02337ed0();
    pCVar8 = (TypeInfo_HumanSounds->fields).MovementSync;
    if (cVar4 == '\0') goto label_042f830b;
label_042f82ce:
    lVar9 = 0x68;
    pCVar11 = TypeInfo_HumanSounds;
  }
  else {
    pCVar8 = (TypeInfo_HumanSounds->fields).MovementSync;
    if (cVar4 != '\0') goto label_042f82ce;
label_042f830b:
    lVar9 = 0x58;
    pCVar11 = TypeInfo_HumanSounds;
  }
  TypeInfo_HumanSounds = pCVar11;
  if (__this_00 != (Characters_BaseCharacter_o *)0x0) {
    Characters_BaseCharacter__PlaySound
              (__this_00,*(System_String_o **)((long)&pCVar8->klass + lVar9),(MethodInfo *)0x0);
    puVar3 = &(pCVar10->fields).field_0x44;
    *(int *)puVar3 = *(int *)puVar3 + 1;
    return;
  }
label_042f8315:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057adeeb == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanAnimations);
    g_data_057adeeb = '\x01';
  }
  pSVar6 = (System_Collections_Generic_Dictionary_string__AnimationClip__o *)(pCVar11->fields).RichTextName;
  if (pSVar6 != (System_Collections_Generic_Dictionary_string__AnimationClip__o *)0x0) {
    pSVar12 = pSVar6[2].fields._buckets;
    if ((TypeInfo_HumanAnimations->fields)._stepPhase == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    if (pSVar12 != (System_Int32_array *)0x0) {
      Characters_AnimationHandler__GetNormalizedTime
                ((Characters_AnimationHandler_o *)pSVar12,
                 *(System_String_o **)&(TypeInfo_HumanAnimations->fields).MovementSync[3].fields._correctRotation.fields.z
                 ,(MethodInfo *)0x0);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  return;
}


// Characters.Spin1Special$$ActiveFixedUpdate
// il2cpp: void Characters_Spin1Special__ActiveFixedUpdate (Characters_Spin1Special_o* __this, const MethodInfo* method);
// 0x42f80f0

void Characters_Spin1Special__ActiveFixedUpdate(Characters_Spin1Special_o *__this,MethodInfo *method)

{
  float *pfVar1;
  int32_t *piVar2;
  char cVar3;
  int iVar4;
  Characters_Human_o *pCVar5;
  Characters_AnimationHandler_o *__this_00;
  System_Collections_Generic_Dictionary_string__AnimationClip__o *pSVar6;
  System_Int32_array *__this_01;
  bool_conflict bVar7;
  Characters_BaseMovementSync_o *pCVar8;
  long lVar9;
  Characters_Human_o *pCVar10;
  Characters_Human_o *pCVar11;
  float fVar12;
  
  pCVar10 = (Characters_Human_o *)__this;
  if (g_data_057adeea == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanAnimations);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSounds);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    pCVar10 = (Characters_Human_o *)&MethodInfo_Boolean_get_Value;
    il2cpp_runtime_helper_023445d0();
    g_data_057adeea = '\x01';
  }
  pCVar11 = (__this->fields)._human;
  if (pCVar11 == (Characters_Human_o *)0x0) goto label_042f8315;
  if ((pCVar11->fields).FinishSetup != 9) {
    *(undefined1 *)&(__this->fields).IsActive = 0;
  }
  pCVar11 = *(Characters_Human_o **)&(pCVar11->fields)._cameraFPS;
  pCVar10 = TypeInfo_HumanAnimations;
  if ((TypeInfo_HumanAnimations->fields)._stepPhase == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (pCVar11 == (Characters_Human_o *)0x0) goto label_042f8315;
  bVar7 = Characters_AnimationHandler__IsPlaying
                    ((Characters_AnimationHandler_o *)pCVar11,
                     *(System_String_o **)
                      &(TypeInfo_HumanAnimations->fields).MovementSync[3].fields._correctRotation.fields.z,
                     (MethodInfo *)0x0);
  if ((char)bVar7 == '\0') {
    return;
  }
  if (g_data_057adeeb == '\0') {
    pCVar11 = (Characters_Human_o *)&TypeInfo_HumanAnimations;
    il2cpp_runtime_helper_023445d0();
    g_data_057adeeb = '\x01';
  }
  pCVar5 = (__this->fields)._human;
  pCVar10 = pCVar11;
  if (pCVar5 == (Characters_Human_o *)0x0) goto label_042f8315;
  __this_00 = *(Characters_AnimationHandler_o **)&(pCVar5->fields)._cameraFPS;
  pCVar10 = TypeInfo_HumanAnimations;
  if ((TypeInfo_HumanAnimations->fields)._stepPhase == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (__this_00 == (Characters_AnimationHandler_o *)0x0) goto label_042f8315;
  fVar12 = Characters_AnimationHandler__GetNormalizedTime
                     (__this_00,
                      *(System_String_o **)
                       &(TypeInfo_HumanAnimations->fields).MovementSync[3].fields._correctRotation.fields.z,
                      (MethodInfo *)0x0);
  iVar4 = (__this->fields)._stage;
  if ((iVar4 != 0) ||
     (pfVar1 = &(__this->fields).AnimationLoopStartTime, fVar12 < *pfVar1 || fVar12 == *pfVar1)) {
    if ((__this->fields).Loops <= iVar4) {
      return;
    }
    pfVar1 = &(__this->fields).AnimationLoopEndTime;
    if (fVar12 < *pfVar1 || fVar12 == *pfVar1) {
      return;
    }
    pCVar11 = (__this->fields)._human;
    pCVar10 = TypeInfo_HumanAnimations;
    if ((TypeInfo_HumanAnimations->fields)._stepPhase == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    if (pCVar11 == (Characters_Human_o *)0x0) goto label_042f8315;
    Characters_BaseCharacter__PlayAnimation
              ((Characters_BaseCharacter_o *)pCVar11,
               *(System_String_o **)&(TypeInfo_HumanAnimations->fields).MovementSync[3].fields._correctRotation.fields.z,
               (__this->fields).AnimationLoopStartTime,(MethodInfo *)0x0);
  }
  else {
    pCVar11 = (__this->fields)._human;
    pCVar10 = pCVar11;
    if (pCVar11 == (Characters_Human_o *)0x0) goto label_042f8315;
    Characters_Human__ActivateBlades(pCVar11,(MethodInfo *)0x0);
  }
  lVar9 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x80);
  pCVar10 = pCVar11;
  if ((lVar9 == 0) || (lVar9 = *(long *)(lVar9 + 0x88), lVar9 == 0)) goto label_042f8315;
  cVar3 = *(char *)(lVar9 + 0x11);
  pCVar11 = (__this->fields)._human;
  if ((TypeInfo_HumanSounds->fields)._stepPhase == 0) {
    il2cpp_runtime_helper_02337ed0();
    pCVar8 = (TypeInfo_HumanSounds->fields).MovementSync;
    if (cVar3 == '\0') goto label_042f830b;
label_042f82ce:
    lVar9 = 0x68;
    pCVar10 = TypeInfo_HumanSounds;
  }
  else {
    pCVar8 = (TypeInfo_HumanSounds->fields).MovementSync;
    if (cVar3 != '\0') goto label_042f82ce;
label_042f830b:
    lVar9 = 0x58;
    pCVar10 = TypeInfo_HumanSounds;
  }
  TypeInfo_HumanSounds = pCVar10;
  if (pCVar11 != (Characters_Human_o *)0x0) {
    Characters_BaseCharacter__PlaySound
              ((Characters_BaseCharacter_o *)pCVar11,*(System_String_o **)((long)&pCVar8->klass + lVar9),
               (MethodInfo *)0x0);
    piVar2 = &(__this->fields)._stage;
    *piVar2 = *piVar2 + 1;
    return;
  }
label_042f8315:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057adeeb == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanAnimations);
    g_data_057adeeb = '\x01';
  }
  pSVar6 = (System_Collections_Generic_Dictionary_string__AnimationClip__o *)(pCVar10->fields).RichTextName;
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
  return;
}


// Characters.Spin1Special$$GetAnimationTime
// il2cpp: float Characters_Spin1Special__GetAnimationTime (Characters_Spin1Special_o* __this, const MethodInfo* method);
// 0x42f8320

float Characters_Spin1Special__GetAnimationTime(Characters_Spin1Special_o *__this,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  Characters_AnimationHandler_o *__this_00;
  float fVar2;
  
  if (g_data_057adeeb == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanAnimations);
    g_data_057adeeb = '\x01';
  }
  pCVar1 = (__this->fields)._human;
  if (pCVar1 != (Characters_Human_o *)0x0) {
    __this_00 = *(Characters_AnimationHandler_o **)&(pCVar1->fields)._cameraFPS;
    if (*(int *)(TypeInfo_HumanAnimations + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    if (__this_00 != (Characters_AnimationHandler_o *)0x0) {
      fVar2 = Characters_AnimationHandler__GetNormalizedTime
                        (__this_00,*(System_String_o **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x208),
                         (MethodInfo *)0x0);
      return fVar2;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  return 0.74;
}


