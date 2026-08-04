// Type: Characters.Spin2Special
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Characters/Spin2Special.cs
// Prior real C# source (older reference): Assets/Scripts/Characters/Human/Specials/Spin2Special.cs
// --------------------------------

// Characters.Spin2Special$$get_ActiveTime
// il2cpp: float Characters_Spin2Special__get_ActiveTime (Characters_Spin2Special_o* __this, const MethodInfo* method);
// 0x42f83a0

float Characters_Spin2Special__get_ActiveTime(Characters_Spin2Special_o *__this,MethodInfo *method)

{
  return 0.74;
}


// Characters.Spin2Special$$.ctor
// il2cpp: void Characters_Spin2Special___ctor (Characters_Spin2Special_o* __this, Characters_BaseCharacter_o* owner, const MethodInfo* method);
// 0x42e41b0

void Characters_Spin2Special___ctor
               (Characters_Spin2Special_o *__this,Characters_BaseCharacter_o *owner,MethodInfo *method)

{
  (__this->fields).AnimationLoopStartTime = 0.35;
  (__this->fields).AnimationLoopEndTime = 0.48;
  (__this->fields).Loops = 3;
  Characters_BaseAttackSpecial___ctor((Characters_BaseAttackSpecial_o *)__this,owner,method);
  (__this->fields).Cooldown = 5.0;
  return;
}


// Characters.Spin2Special$$Activate
// il2cpp: void Characters_Spin2Special__Activate (Characters_Spin2Special_o* __this, const MethodInfo* method);
// 0x42f83b0

void Characters_Spin2Special__Activate(Characters_Spin2Special_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_string__string__o **ppSVar1;
  float *pfVar2;
  undefined1 *puVar3;
  char cVar4;
  int iVar5;
  System_Collections_Generic_Dictionary_string__AnimationClip__o *pSVar6;
  bool_conflict bVar7;
  long lVar8;
  System_String_o *sound;
  Characters_Human_o *pCVar9;
  Characters_Human_o *pCVar10;
  System_Int32_array *pSVar11;
  Characters_Human_o *__this_00;
  Characters_BaseCharacter_o *pCVar12;
  float fVar13;
  
  if (g_data_057adeec == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanAnimations);
    g_data_057adeec = '\x01';
  }
  (__this->fields)._stage = 0;
  pCVar10 = (__this->fields)._human;
  pCVar9 = TypeInfo_HumanAnimations;
  if ((TypeInfo_HumanAnimations->fields)._stepPhase == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (pCVar10 != (Characters_Human_o *)0x0) {
    Characters_Human__StartSpecialAttack
              (pCVar10,*(System_String_o **)
                        &(TypeInfo_HumanAnimations->fields).MovementSync[3].fields._correctVelocity.fields,
               (MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pCVar10 = pCVar9;
  if (g_data_057adeed == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanAnimations);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSounds);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    pCVar10 = (Characters_Human_o *)&MethodInfo_Boolean_get_Value;
    il2cpp_runtime_helper_023445d0();
    g_data_057adeed = '\x01';
  }
  pSVar6 = (System_Collections_Generic_Dictionary_string__AnimationClip__o *)(pCVar9->fields).RichTextName;
  if (pSVar6 != (System_Collections_Generic_Dictionary_string__AnimationClip__o *)0x0) {
    if (*(int *)&pSVar6[4].fields._entries != 9) {
      *(undefined1 *)((long)&(pCVar9->fields).m_CancellationTokenSource + 4) = 0;
    }
    pSVar11 = pSVar6[2].fields._buckets;
    pCVar10 = TypeInfo_HumanAnimations;
    if ((TypeInfo_HumanAnimations->fields)._stepPhase == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    if (pSVar11 != (System_Int32_array *)0x0) {
      bVar7 = Characters_AnimationHandler__IsPlaying
                        ((Characters_AnimationHandler_o *)pSVar11,
                         *(System_String_o **)
                          &(TypeInfo_HumanAnimations->fields).MovementSync[3].fields._correctVelocity.fields,
                         (MethodInfo *)0x0);
      if ((char)bVar7 == '\0') {
        return;
      }
      if (g_data_057adeee == '\0') {
        pSVar11 = (System_Int32_array *)&TypeInfo_HumanAnimations;
        il2cpp_runtime_helper_023445d0();
        g_data_057adeee = '\x01';
      }
      pSVar6 = (System_Collections_Generic_Dictionary_string__AnimationClip__o *)(pCVar9->fields).RichTextName
      ;
      pCVar10 = (Characters_Human_o *)pSVar11;
      if (pSVar6 != (System_Collections_Generic_Dictionary_string__AnimationClip__o *)0x0) {
        pSVar11 = pSVar6[2].fields._buckets;
        pCVar10 = TypeInfo_HumanAnimations;
        if ((TypeInfo_HumanAnimations->fields)._stepPhase == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        if (pSVar11 != (System_Int32_array *)0x0) {
          fVar13 = Characters_AnimationHandler__GetNormalizedTime
                             ((Characters_AnimationHandler_o *)pSVar11,
                              *(System_String_o **)
                               &(TypeInfo_HumanAnimations->fields).MovementSync[3].fields._correctVelocity.fields,
                              (MethodInfo *)0x0);
          iVar5 = *(int *)&(pCVar9->fields).field_0x44;
          if ((iVar5 != 0) ||
             (ppSVar1 = (System_Collections_Generic_Dictionary_string__string__o **)
                        &(pCVar9->fields).VisibleName,
             fVar13 < *(float *)ppSVar1 || fVar13 == *(float *)ppSVar1)) {
            if ((pCVar9->fields).HasExplicitNameTag <= iVar5) {
              return;
            }
            pfVar2 = (float *)((long)&(pCVar9->fields).VisibleName + 4);
            if (fVar13 < *pfVar2 || fVar13 == *pfVar2) {
              return;
            }
            __this_00 = (Characters_Human_o *)(pCVar9->fields).RichTextName;
            pCVar10 = TypeInfo_HumanAnimations;
            if ((TypeInfo_HumanAnimations->fields)._stepPhase == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            if (__this_00 != (Characters_Human_o *)0x0) {
              Characters_BaseCharacter__PlayAnimation
                        ((Characters_BaseCharacter_o *)__this_00,
                         *(System_String_o **)
                          &(TypeInfo_HumanAnimations->fields).MovementSync[3].fields._correctVelocity.fields,
                         *(float *)&(pCVar9->fields).VisibleName,(MethodInfo *)0x0);
              lVar8 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x80);
              pCVar10 = __this_00;
              if ((lVar8 != 0) && (lVar8 = *(long *)(lVar8 + 0x88), lVar8 != 0)) {
                cVar4 = *(char *)(lVar8 + 0x11);
                pCVar12 = (Characters_BaseCharacter_o *)(pCVar9->fields).RichTextName;
                if ((TypeInfo_HumanSounds->fields)._stepPhase == 0) {
                  il2cpp_runtime_helper_02337ed0();
                }
                if (cVar4 == '\0') {
                  lVar8 = 0x58;
                }
                else {
                  lVar8 = 0x68;
                }
                pCVar10 = TypeInfo_HumanSounds;
                if (pCVar12 != (Characters_BaseCharacter_o *)0x0) {
                  sound = *(System_String_o **)((long)&((TypeInfo_HumanSounds->fields).MovementSync)->klass + lVar8);
label_042f8700:
                  Characters_BaseCharacter__PlaySound(pCVar12,sound,(MethodInfo *)0x0);
                  puVar3 = &(pCVar9->fields).field_0x44;
                  *(int *)puVar3 = *(int *)puVar3 + 1;
                  return;
                }
              }
            }
          }
          else {
            pCVar10 = (Characters_Human_o *)(pCVar9->fields).RichTextName;
            if (pCVar10 != (Characters_Human_o *)0x0) {
              Characters_Human__ActivateBlades(pCVar10,(MethodInfo *)0x0);
              lVar8 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x80);
              if ((lVar8 != 0) && (lVar8 = *(long *)(lVar8 + 0x88), lVar8 != 0)) {
                cVar4 = *(char *)(lVar8 + 0x11);
                pCVar12 = (Characters_BaseCharacter_o *)(pCVar9->fields).RichTextName;
                if ((TypeInfo_HumanSounds->fields)._stepPhase == 0) {
                  il2cpp_runtime_helper_02337ed0();
                }
                if (cVar4 == '\0') {
                  lVar8 = 0x60;
                }
                else {
                  lVar8 = 0x68;
                }
                pCVar10 = TypeInfo_HumanSounds;
                if (pCVar12 != (Characters_BaseCharacter_o *)0x0) {
                  Characters_BaseCharacter__PlaySound
                            (pCVar12,*(System_String_o **)
                                      ((long)&((TypeInfo_HumanSounds->fields).MovementSync)->klass + lVar8),
                             (MethodInfo *)0x0);
                  pCVar12 = (Characters_BaseCharacter_o *)(pCVar9->fields).RichTextName;
                  pCVar10 = TypeInfo_HumanSounds;
                  if ((TypeInfo_HumanSounds->fields)._stepPhase == 0) {
                    il2cpp_runtime_helper_02337ed0();
                  }
                  if (pCVar12 != (Characters_BaseCharacter_o *)0x0) {
                    sound = *(System_String_o **)
                             &(((TypeInfo_HumanSounds->fields).MovementSync)->fields)._correctCamera.fields.y;
                    goto label_042f8700;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057adeee == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanAnimations);
    g_data_057adeee = '\x01';
  }
  pSVar6 = (System_Collections_Generic_Dictionary_string__AnimationClip__o *)(pCVar10->fields).RichTextName;
  if (pSVar6 != (System_Collections_Generic_Dictionary_string__AnimationClip__o *)0x0) {
    pSVar11 = pSVar6[2].fields._buckets;
    if ((TypeInfo_HumanAnimations->fields)._stepPhase == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    if (pSVar11 != (System_Int32_array *)0x0) {
      Characters_AnimationHandler__GetNormalizedTime
                ((Characters_AnimationHandler_o *)pSVar11,
                 *(System_String_o **)&(TypeInfo_HumanAnimations->fields).MovementSync[3].fields._correctVelocity.fields,
                 (MethodInfo *)0x0);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  return;
}


// Characters.Spin2Special$$ActiveFixedUpdate
// il2cpp: void Characters_Spin2Special__ActiveFixedUpdate (Characters_Spin2Special_o* __this, const MethodInfo* method);
// 0x42f8430

void Characters_Spin2Special__ActiveFixedUpdate(Characters_Spin2Special_o *__this,MethodInfo *method)

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
  long lVar8;
  System_String_o *sound;
  Characters_Human_o *__this_02;
  Characters_Human_o *pCVar9;
  float fVar10;
  
  __this_02 = (Characters_Human_o *)__this;
  if (g_data_057adeed == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanAnimations);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSounds);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    __this_02 = (Characters_Human_o *)&MethodInfo_Boolean_get_Value;
    il2cpp_runtime_helper_023445d0();
    g_data_057adeed = '\x01';
  }
  pCVar9 = (__this->fields)._human;
  if (pCVar9 != (Characters_Human_o *)0x0) {
    if ((pCVar9->fields).FinishSetup != 9) {
      *(undefined1 *)&(__this->fields).IsActive = 0;
    }
    pCVar9 = *(Characters_Human_o **)&(pCVar9->fields)._cameraFPS;
    __this_02 = TypeInfo_HumanAnimations;
    if ((TypeInfo_HumanAnimations->fields)._stepPhase == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    if (pCVar9 != (Characters_Human_o *)0x0) {
      bVar7 = Characters_AnimationHandler__IsPlaying
                        ((Characters_AnimationHandler_o *)pCVar9,
                         *(System_String_o **)
                          &(TypeInfo_HumanAnimations->fields).MovementSync[3].fields._correctVelocity.fields,
                         (MethodInfo *)0x0);
      if ((char)bVar7 == '\0') {
        return;
      }
      if (g_data_057adeee == '\0') {
        pCVar9 = (Characters_Human_o *)&TypeInfo_HumanAnimations;
        il2cpp_runtime_helper_023445d0();
        g_data_057adeee = '\x01';
      }
      pCVar5 = (__this->fields)._human;
      __this_02 = pCVar9;
      if (pCVar5 != (Characters_Human_o *)0x0) {
        __this_00 = *(Characters_AnimationHandler_o **)&(pCVar5->fields)._cameraFPS;
        __this_02 = TypeInfo_HumanAnimations;
        if ((TypeInfo_HumanAnimations->fields)._stepPhase == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        if (__this_00 != (Characters_AnimationHandler_o *)0x0) {
          fVar10 = Characters_AnimationHandler__GetNormalizedTime
                             (__this_00,
                              *(System_String_o **)
                               &(TypeInfo_HumanAnimations->fields).MovementSync[3].fields._correctVelocity.fields,
                              (MethodInfo *)0x0);
          iVar4 = (__this->fields)._stage;
          if ((iVar4 != 0) ||
             (pfVar1 = &(__this->fields).AnimationLoopStartTime, fVar10 < *pfVar1 || fVar10 == *pfVar1)) {
            if ((__this->fields).Loops <= iVar4) {
              return;
            }
            pfVar1 = &(__this->fields).AnimationLoopEndTime;
            if (fVar10 < *pfVar1 || fVar10 == *pfVar1) {
              return;
            }
            pCVar9 = (__this->fields)._human;
            __this_02 = TypeInfo_HumanAnimations;
            if ((TypeInfo_HumanAnimations->fields)._stepPhase == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            if (pCVar9 != (Characters_Human_o *)0x0) {
              Characters_BaseCharacter__PlayAnimation
                        ((Characters_BaseCharacter_o *)pCVar9,
                         *(System_String_o **)
                          &(TypeInfo_HumanAnimations->fields).MovementSync[3].fields._correctVelocity.fields,
                         (__this->fields).AnimationLoopStartTime,(MethodInfo *)0x0);
              lVar8 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x80);
              __this_02 = pCVar9;
              if ((lVar8 != 0) && (lVar8 = *(long *)(lVar8 + 0x88), lVar8 != 0)) {
                cVar3 = *(char *)(lVar8 + 0x11);
                pCVar9 = (__this->fields)._human;
                if ((TypeInfo_HumanSounds->fields)._stepPhase == 0) {
                  il2cpp_runtime_helper_02337ed0();
                }
                if (cVar3 == '\0') {
                  lVar8 = 0x58;
                }
                else {
                  lVar8 = 0x68;
                }
                __this_02 = TypeInfo_HumanSounds;
                if (pCVar9 != (Characters_Human_o *)0x0) {
                  sound = *(System_String_o **)((long)&((TypeInfo_HumanSounds->fields).MovementSync)->klass + lVar8);
label_042f8700:
                  Characters_BaseCharacter__PlaySound
                            ((Characters_BaseCharacter_o *)pCVar9,sound,(MethodInfo *)0x0);
                  piVar2 = &(__this->fields)._stage;
                  *piVar2 = *piVar2 + 1;
                  return;
                }
              }
            }
          }
          else {
            __this_02 = (__this->fields)._human;
            if (__this_02 != (Characters_Human_o *)0x0) {
              Characters_Human__ActivateBlades(__this_02,(MethodInfo *)0x0);
              lVar8 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x80);
              if ((lVar8 != 0) && (lVar8 = *(long *)(lVar8 + 0x88), lVar8 != 0)) {
                cVar3 = *(char *)(lVar8 + 0x11);
                pCVar9 = (__this->fields)._human;
                if ((TypeInfo_HumanSounds->fields)._stepPhase == 0) {
                  il2cpp_runtime_helper_02337ed0();
                }
                if (cVar3 == '\0') {
                  lVar8 = 0x60;
                }
                else {
                  lVar8 = 0x68;
                }
                __this_02 = TypeInfo_HumanSounds;
                if (pCVar9 != (Characters_Human_o *)0x0) {
                  Characters_BaseCharacter__PlaySound
                            ((Characters_BaseCharacter_o *)pCVar9,
                             *(System_String_o **)
                              ((long)&((TypeInfo_HumanSounds->fields).MovementSync)->klass + lVar8),(MethodInfo *)0x0)
                  ;
                  pCVar9 = (__this->fields)._human;
                  __this_02 = TypeInfo_HumanSounds;
                  if ((TypeInfo_HumanSounds->fields)._stepPhase == 0) {
                    il2cpp_runtime_helper_02337ed0();
                  }
                  if (pCVar9 != (Characters_Human_o *)0x0) {
                    sound = *(System_String_o **)
                             &(((TypeInfo_HumanSounds->fields).MovementSync)->fields)._correctCamera.fields.y;
                    goto label_042f8700;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057adeee == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanAnimations);
    g_data_057adeee = '\x01';
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
                 *(System_String_o **)&(TypeInfo_HumanAnimations->fields).MovementSync[3].fields._correctVelocity.fields,
                 (MethodInfo *)0x0);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  return;
}


// Characters.Spin2Special$$GetAnimationTime
// il2cpp: float Characters_Spin2Special__GetAnimationTime (Characters_Spin2Special_o* __this, const MethodInfo* method);
// 0x42f8720

float Characters_Spin2Special__GetAnimationTime(Characters_Spin2Special_o *__this,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  Characters_AnimationHandler_o *__this_00;
  float fVar2;
  
  if (g_data_057adeee == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanAnimations);
    g_data_057adeee = '\x01';
  }
  pCVar1 = (__this->fields)._human;
  if (pCVar1 != (Characters_Human_o *)0x0) {
    __this_00 = *(Characters_AnimationHandler_o **)&(pCVar1->fields)._cameraFPS;
    if (*(int *)(TypeInfo_HumanAnimations + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    if (__this_00 != (Characters_AnimationHandler_o *)0x0) {
      fVar2 = Characters_AnimationHandler__GetNormalizedTime
                        (__this_00,*(System_String_o **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x210),
                         (MethodInfo *)0x0);
      return fVar2;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  return 1.0;
}


