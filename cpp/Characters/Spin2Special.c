// Type: Characters.Spin2Special
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/Characters/Spin2Special.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/Characters/Human/Specials/Spin2Special.cs  [CHANGED since prior version]
// --------------------------------

// Characters.Spin2Special$$get_ActiveTime
// il2cpp: float Characters_Spin2Special__get_ActiveTime (Characters_Spin2Special_o* __this, const MethodInfo* method);
// 0x3febae0

float Characters_Spin2Special__get_ActiveTime(Characters_Spin2Special_o *__this,MethodInfo *method)

{
  return 0.74;
}


// Characters.Spin2Special$$.ctor
// il2cpp: void Characters_Spin2Special___ctor (Characters_Spin2Special_o* __this, Characters_BaseCharacter_o* owner, const MethodInfo* method);
// 0x3fd78f0

void Characters_Spin2Special___ctor
               (Characters_Spin2Special_o *__this,Characters_BaseCharacter_o *owner,
               MethodInfo *method)

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
// 0x3febaf0

void Characters_Spin2Special__Activate(Characters_Spin2Special_o *__this,MethodInfo *method)

{
  Characters_Human_o *__this_00;
  
  if (DAT_0570417e == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanAnimations);
    DAT_0570417e = '\x01';
  }
  (__this->fields)._stage = 0;
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


// Characters.Spin2Special$$ActiveFixedUpdate
// il2cpp: void Characters_Spin2Special__ActiveFixedUpdate (Characters_Spin2Special_o* __this, const MethodInfo* method);
// 0x3febb70

void Characters_Spin2Special__ActiveFixedUpdate
               (Characters_Spin2Special_o *__this,MethodInfo *method)

{
  float *pfVar1;
  int32_t *piVar2;
  char cVar3;
  int iVar4;
  Characters_AnimationHandler_o *pCVar5;
  bool_conflict bVar6;
  long lVar7;
  System_String_o *sound;
  Characters_Human_o *pCVar8;
  float fVar9;
  
  if (DAT_0570417f == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanAnimations);
    il2cpp_init_method_metadata(&TypeInfo_HumanSounds);
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_get_Value);
    DAT_0570417f = '\x01';
  }
  pCVar8 = (__this->fields)._human;
  if (pCVar8 != (Characters_Human_o *)0x0) {
    if ((pCVar8->fields).FinishSetup != 9) {
      *(undefined1 *)&(__this->fields).IsActive = 0;
    }
    pCVar5 = *(Characters_AnimationHandler_o **)&(pCVar8->fields)._cameraFPS;
    if (*(int *)(TypeInfo_HumanAnimations + 0xe4) == 0) {
      il2cpp_init_class();
    }
    if (pCVar5 != (Characters_AnimationHandler_o *)0x0) {
      bVar6 = Characters_AnimationHandler__IsPlaying
                        (pCVar5,*(System_String_o **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x210),
                         (MethodInfo *)0x0);
      if ((char)bVar6 == '\0') {
        return;
      }
      if (DAT_05704180 == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_HumanAnimations);
        DAT_05704180 = '\x01';
      }
      pCVar8 = (__this->fields)._human;
      if (pCVar8 != (Characters_Human_o *)0x0) {
        pCVar5 = *(Characters_AnimationHandler_o **)&(pCVar8->fields)._cameraFPS;
        if (*(int *)(TypeInfo_HumanAnimations + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (pCVar5 != (Characters_AnimationHandler_o *)0x0) {
          fVar9 = Characters_AnimationHandler__GetNormalizedTime
                            (pCVar5,*(System_String_o **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x210),
                             (MethodInfo *)0x0);
          iVar4 = (__this->fields)._stage;
          if ((iVar4 != 0) ||
             (pfVar1 = &(__this->fields).AnimationLoopStartTime, fVar9 < *pfVar1 || fVar9 == *pfVar1
             )) {
            if ((__this->fields).Loops <= iVar4) {
              return;
            }
            pfVar1 = &(__this->fields).AnimationLoopEndTime;
            if (fVar9 < *pfVar1 || fVar9 == *pfVar1) {
              return;
            }
            pCVar8 = (__this->fields)._human;
            if (*(int *)(TypeInfo_HumanAnimations + 0xe4) == 0) {
              il2cpp_init_class();
            }
            if (pCVar8 != (Characters_Human_o *)0x0) {
              Characters_BaseCharacter__PlayAnimation
                        ((Characters_BaseCharacter_o *)pCVar8,
                         *(System_String_o **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x210),
                         (__this->fields).AnimationLoopStartTime,(MethodInfo *)0x0);
              lVar7 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x80);
              if ((lVar7 != 0) && (lVar7 = *(long *)(lVar7 + 0x88), lVar7 != 0)) {
                cVar3 = *(char *)(lVar7 + 0x11);
                pCVar8 = (__this->fields)._human;
                if (*(int *)(TypeInfo_HumanSounds + 0xe4) == 0) {
                  il2cpp_init_class();
                }
                if (cVar3 == '\0') {
                  lVar7 = 0x58;
                }
                else {
                  lVar7 = 0x68;
                }
                if (pCVar8 != (Characters_Human_o *)0x0) {
                  sound = *(System_String_o **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + lVar7);
LAB_03febe40:
                  Characters_BaseCharacter__PlaySound
                            ((Characters_BaseCharacter_o *)pCVar8,sound,(MethodInfo *)0x0);
                  piVar2 = &(__this->fields)._stage;
                  *piVar2 = *piVar2 + 1;
                  return;
                }
              }
            }
          }
          else {
            pCVar8 = (__this->fields)._human;
            if (pCVar8 != (Characters_Human_o *)0x0) {
              Characters_Human__ActivateBlades(pCVar8,(MethodInfo *)0x0);
              lVar7 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x80);
              if ((lVar7 != 0) && (lVar7 = *(long *)(lVar7 + 0x88), lVar7 != 0)) {
                cVar3 = *(char *)(lVar7 + 0x11);
                pCVar8 = (__this->fields)._human;
                if (*(int *)(TypeInfo_HumanSounds + 0xe4) == 0) {
                  il2cpp_init_class();
                }
                if (cVar3 == '\0') {
                  lVar7 = 0x60;
                }
                else {
                  lVar7 = 0x68;
                }
                if (pCVar8 != (Characters_Human_o *)0x0) {
                  Characters_BaseCharacter__PlaySound
                            ((Characters_BaseCharacter_o *)pCVar8,
                             *(System_String_o **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + lVar7),
                             (MethodInfo *)0x0);
                  pCVar8 = (__this->fields)._human;
                  if (*(int *)(TypeInfo_HumanSounds + 0xe4) == 0) {
                    il2cpp_init_class();
                  }
                  if (pCVar8 != (Characters_Human_o *)0x0) {
                    sound = *(System_String_o **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x58);
                    goto LAB_03febe40;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.Spin2Special$$GetAnimationTime
// il2cpp: float Characters_Spin2Special__GetAnimationTime (Characters_Spin2Special_o* __this, const MethodInfo* method);
// 0x3febe60

float Characters_Spin2Special__GetAnimationTime
                (Characters_Spin2Special_o *__this,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  Characters_AnimationHandler_o *__this_00;
  float fVar2;
  
  if (DAT_05704180 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanAnimations);
    DAT_05704180 = '\x01';
  }
  pCVar1 = (__this->fields)._human;
  if (pCVar1 != (Characters_Human_o *)0x0) {
    __this_00 = *(Characters_AnimationHandler_o **)&(pCVar1->fields)._cameraFPS;
    if (*(int *)(TypeInfo_HumanAnimations + 0xe4) == 0) {
      il2cpp_init_class();
    }
    if (__this_00 != (Characters_AnimationHandler_o *)0x0) {
      fVar2 = Characters_AnimationHandler__GetNormalizedTime
                        (__this_00,*(System_String_o **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x210),
                         (MethodInfo *)0x0);
      return fVar2;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


