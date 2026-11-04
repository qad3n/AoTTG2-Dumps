// Type: Characters.Spin2Special
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Characters/Spin2Special.cs
// Prior real C# source (older reference): Assets/Scripts/Characters/Human/Specials/Spin2Special.cs
// --------------------------------

// Characters.Spin2Special$$get_ActiveTime
// il2cpp: float Characters_Spin2Special__get_ActiveTime (Characters_Spin2Special_o* __this, const MethodInfo* method);
// 0x182176ba0

float Characters_Spin2Special__get_ActiveTime(Characters_Spin2Special_o *__this,MethodInfo *method)

{
  return 0.74;
}


// Characters.Spin2Special$$.ctor
// il2cpp: void Characters_Spin2Special___ctor (Characters_Spin2Special_o* __this, Characters_BaseCharacter_o* owner, const MethodInfo* method);
// 0x182176b60

void Characters_Spin2Special___ctor
               (Characters_Spin2Special_o *__this,Characters_BaseCharacter_o *owner,MethodInfo *method)

{
  (__this->fields).AnimationLoopStartTime = 0.35;
  (__this->fields).AnimationLoopEndTime = 0.48;
  (__this->fields).Loops = 3;
  Characters_BaseAttackSpecial___ctor((Characters_BaseAttackSpecial_o *)__this,owner,(MethodInfo *)0x0);
  (__this->fields).Cooldown = 5.0;
  return;
}


// Characters.Spin2Special$$Activate
// il2cpp: void Characters_Spin2Special__Activate (Characters_Spin2Special_o* __this, const MethodInfo* method);
// 0x182176710

void Characters_Spin2Special__Activate(Characters_Spin2Special_o *__this,MethodInfo *method)

{
  Characters_Human_o *__this_00;
  
  if (Il2CppMethodInitialized_184346cf9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanAnimations);
    Il2CppMethodInitialized_184346cf9 = '\x01';
  }
  (__this->fields)._stage = 0;
  __this_00 = (__this->fields)._human;
  if ((TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
  }
  if (__this_00 != (Characters_Human_o *)0x0) {
    Characters_Human__StartSpecialAttack
              (__this_00,TypeInfo_Characters_HumanAnimations->static_fields->SpecialPetra,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// Characters.Spin2Special$$ActiveFixedUpdate
// il2cpp: void Characters_Spin2Special__ActiveFixedUpdate (Characters_Spin2Special_o* __this, const MethodInfo* method);
// 0x182176790

void Characters_Spin2Special__ActiveFixedUpdate(Characters_Spin2Special_o *__this,MethodInfo *method)

{
  float *pfVar1;
  int32_t *piVar2;
  Characters_AnimationHandler_o *pCVar3;
  Settings_SoundSettings_o *pSVar4;
  Settings_BoolSetting_o *pSVar5;
  bool bVar6;
  System_String_o *pSVar7;
  Characters_Human_o *pCVar8;
  float fVar9;
  
  if (Il2CppMethodInitialized_184346cfa == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanAnimations);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_get_Value);
    Il2CppMethodInitialized_184346cfa = '\x01';
  }
  pCVar8 = (__this->fields)._human;
  if (pCVar8 != (Characters_Human_o *)0x0) {
    if ((pCVar8->fields)._state != 9) {
      (__this->fields).IsActive = false;
    }
    if (pCVar8 != (Characters_Human_o *)0x0) {
      pCVar3 = (pCVar8->fields).Animation;
      if ((TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
      }
      if (pCVar3 != (Characters_AnimationHandler_o *)0x0) {
        bVar6 = Characters_AnimationHandler__IsPlaying
                          (pCVar3,TypeInfo_Characters_HumanAnimations->static_fields->SpecialPetra,
                           (MethodInfo *)0x0);
        if (!bVar6) {
          return;
        }
        if (Il2CppMethodInitialized_184346cfb == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanAnimations);
          Il2CppMethodInitialized_184346cfb = '\x01';
        }
        pCVar8 = (__this->fields)._human;
        if (pCVar8 != (Characters_Human_o *)0x0) {
          pCVar3 = (pCVar8->fields).Animation;
          if ((TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
          }
          if (pCVar3 != (Characters_AnimationHandler_o *)0x0) {
            fVar9 = Characters_AnimationHandler__GetNormalizedTime
                              (pCVar3,TypeInfo_Characters_HumanAnimations->static_fields->SpecialPetra,
                               (MethodInfo *)0x0);
            if (((__this->fields)._stage != 0) ||
               (pfVar1 = &(__this->fields).AnimationLoopStartTime, fVar9 < *pfVar1 || fVar9 == *pfVar1)) {
              if ((__this->fields).Loops <= (__this->fields)._stage) {
                return;
              }
              pfVar1 = &(__this->fields).AnimationLoopEndTime;
              if (fVar9 < *pfVar1 || fVar9 == *pfVar1) {
                return;
              }
              pCVar8 = (__this->fields)._human;
              if ((TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
              }
              if (pCVar8 != (Characters_Human_o *)0x0) {
                Characters_BaseCharacter__PlayAnimation
                          ((Characters_BaseCharacter_o *)pCVar8,
                           TypeInfo_Characters_HumanAnimations->static_fields->SpecialPetra,
                           (__this->fields).AnimationLoopStartTime,(MethodInfo *)0x0);
                pSVar4 = TypeInfo_Settings_SettingsManager->static_fields->SoundSettings;
                if ((pSVar4 != (Settings_SoundSettings_o *)0x0) &&
                   (pSVar5 = (pSVar4->fields).OldBladeEffect, pSVar5 != (Settings_BoolSetting_o *)0x0)) {
                  pCVar8 = (__this->fields)._human;
                  if ((pSVar5->fields)._value == false) {
                    if ((TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor == 0) {
                      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
                    }
                    if (pCVar8 != (Characters_Human_o *)0x0) {
                      pSVar7 = TypeInfo_Characters_HumanSounds->static_fields->BladeSwing3;
                      goto label_1821769c8;
                    }
                  }
                  else {
                    if ((TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor == 0) {
                      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
                    }
                    if (pCVar8 != (Characters_Human_o *)0x0) {
                      pSVar7 = TypeInfo_Characters_HumanSounds->static_fields->OldBladeSwing;
                      goto label_1821769c8;
                    }
                  }
                }
              }
            }
            else {
              pCVar8 = (__this->fields)._human;
              if (pCVar8 != (Characters_Human_o *)0x0) {
                Characters_Human__ActivateBlades(pCVar8,(MethodInfo *)0x0);
                pSVar4 = TypeInfo_Settings_SettingsManager->static_fields->SoundSettings;
                if ((pSVar4 != (Settings_SoundSettings_o *)0x0) &&
                   (pSVar5 = (pSVar4->fields).OldBladeEffect, pSVar5 != (Settings_BoolSetting_o *)0x0)) {
                  pCVar8 = (__this->fields)._human;
                  if ((pSVar5->fields)._value == false) {
                    if ((TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor == 0) {
                      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
                    }
                    if (pCVar8 == (Characters_Human_o *)0x0) goto label_182176acd;
                    pSVar7 = TypeInfo_Characters_HumanSounds->static_fields->BladeSwing4;
                  }
                  else {
                    if ((TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor == 0) {
                      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
                    }
                    if (pCVar8 == (Characters_Human_o *)0x0) goto label_182176acd;
                    pSVar7 = TypeInfo_Characters_HumanSounds->static_fields->OldBladeSwing;
                  }
                  Characters_BaseCharacter__PlaySound
                            ((Characters_BaseCharacter_o *)pCVar8,pSVar7,(MethodInfo *)0x0);
                  pCVar8 = (__this->fields)._human;
                  if ((TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor == 0) {
                    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
                  }
                  if (pCVar8 != (Characters_Human_o *)0x0) {
                    pSVar7 = TypeInfo_Characters_HumanSounds->static_fields->BladeSwing3;
label_1821769c8:
                    Characters_BaseCharacter__PlaySound
                              ((Characters_BaseCharacter_o *)pCVar8,pSVar7,(MethodInfo *)0x0);
                    piVar2 = &(__this->fields)._stage;
                    *piVar2 = *piVar2 + 1;
                    return;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
label_182176acd:
  ThrowNullReferenceException();
}


// Characters.Spin2Special$$GetAnimationTime
// il2cpp: float Characters_Spin2Special__GetAnimationTime (Characters_Spin2Special_o* __this, const MethodInfo* method);
// 0x182176ae0

float Characters_Spin2Special__GetAnimationTime(Characters_Spin2Special_o *__this,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  Characters_AnimationHandler_o *__this_00;
  float fVar2;
  
  if (Il2CppMethodInitialized_184346cfb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanAnimations);
    Il2CppMethodInitialized_184346cfb = '\x01';
  }
  pCVar1 = (__this->fields)._human;
  if (pCVar1 != (Characters_Human_o *)0x0) {
    __this_00 = (pCVar1->fields).Animation;
    if ((TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
    }
    if (__this_00 != (Characters_AnimationHandler_o *)0x0) {
      fVar2 = Characters_AnimationHandler__GetNormalizedTime
                        (__this_00,TypeInfo_Characters_HumanAnimations->static_fields->SpecialPetra,
                         (MethodInfo *)0x0);
      return fVar2;
    }
  }
  ThrowNullReferenceException();
}


