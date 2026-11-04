// Type: Characters.Spin1Special
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Characters/Spin1Special.cs
// Prior real C# source (older reference): Assets/Scripts/Characters/Human/Specials/Spin1Special.cs
// --------------------------------

// Characters.Spin1Special$$get_ActiveTime
// il2cpp: float Characters_Spin1Special__get_ActiveTime (Characters_Spin1Special_o* __this, const MethodInfo* method);
// 0x1821698f0

float Characters_Spin1Special__get_ActiveTime(Characters_Spin1Special_o *__this,MethodInfo *method)

{
  return 0.8;
}


// Characters.Spin1Special$$.ctor
// il2cpp: void Characters_Spin1Special___ctor (Characters_Spin1Special_o* __this, Characters_BaseCharacter_o* owner, const MethodInfo* method);
// 0x1821766d0

void Characters_Spin1Special___ctor
               (Characters_Spin1Special_o *__this,Characters_BaseCharacter_o *owner,MethodInfo *method)

{
  (__this->fields).AnimationLoopStartTime = 0.35;
  (__this->fields).AnimationLoopEndTime = 0.5;
  (__this->fields).Loops = 3;
  Characters_BaseAttackSpecial___ctor((Characters_BaseAttackSpecial_o *)__this,owner,(MethodInfo *)0x0);
  (__this->fields).Cooldown = 5.0;
  return;
}


// Characters.Spin1Special$$Activate
// il2cpp: void Characters_Spin1Special__Activate (Characters_Spin1Special_o* __this, const MethodInfo* method);
// 0x182176370

void Characters_Spin1Special__Activate(Characters_Spin1Special_o *__this,MethodInfo *method)

{
  Characters_Human_o *__this_00;
  
  if (Il2CppMethodInitialized_184346cf6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanAnimations);
    Il2CppMethodInitialized_184346cf6 = '\x01';
  }
  (__this->fields)._stage = 0;
  __this_00 = (__this->fields)._human;
  if ((TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
  }
  if (__this_00 != (Characters_Human_o *)0x0) {
    Characters_Human__StartSpecialAttack
              (__this_00,TypeInfo_Characters_HumanAnimations->static_fields->SpecialLevi,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// Characters.Spin1Special$$ActiveFixedUpdate
// il2cpp: void Characters_Spin1Special__ActiveFixedUpdate (Characters_Spin1Special_o* __this, const MethodInfo* method);
// 0x1821763f0

void Characters_Spin1Special__ActiveFixedUpdate(Characters_Spin1Special_o *__this,MethodInfo *method)

{
  float *pfVar1;
  int32_t *piVar2;
  Characters_Human_o *pCVar3;
  Characters_AnimationHandler_o *pCVar4;
  Settings_SoundSettings_o *pSVar5;
  Settings_BoolSetting_o *pSVar6;
  bool bVar7;
  System_String_o *sound;
  float fVar8;
  
  if (Il2CppMethodInitialized_184346cf7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanAnimations);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_get_Value);
    Il2CppMethodInitialized_184346cf7 = '\x01';
  }
  pCVar3 = (__this->fields)._human;
  if (pCVar3 != (Characters_Human_o *)0x0) {
    if ((pCVar3->fields)._state != 9) {
      (__this->fields).IsActive = false;
    }
    if (pCVar3 != (Characters_Human_o *)0x0) {
      pCVar4 = (pCVar3->fields).Animation;
      if ((TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
      }
      if (pCVar4 != (Characters_AnimationHandler_o *)0x0) {
        bVar7 = Characters_AnimationHandler__IsPlaying
                          (pCVar4,TypeInfo_Characters_HumanAnimations->static_fields->SpecialLevi,
                           (MethodInfo *)0x0);
        if (!bVar7) {
          return;
        }
        if (Il2CppMethodInitialized_184346cf8 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanAnimations);
          Il2CppMethodInitialized_184346cf8 = '\x01';
        }
        pCVar3 = (__this->fields)._human;
        if (pCVar3 != (Characters_Human_o *)0x0) {
          pCVar4 = (pCVar3->fields).Animation;
          if ((TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
          }
          if (pCVar4 != (Characters_AnimationHandler_o *)0x0) {
            fVar8 = Characters_AnimationHandler__GetNormalizedTime
                              (pCVar4,TypeInfo_Characters_HumanAnimations->static_fields->SpecialLevi,
                               (MethodInfo *)0x0);
            if (((__this->fields)._stage != 0) ||
               (pfVar1 = &(__this->fields).AnimationLoopStartTime, fVar8 < *pfVar1 || fVar8 == *pfVar1)) {
              if ((__this->fields).Loops <= (__this->fields)._stage) {
                return;
              }
              pfVar1 = &(__this->fields).AnimationLoopEndTime;
              if (fVar8 < *pfVar1 || fVar8 == *pfVar1) {
                return;
              }
              pCVar3 = (__this->fields)._human;
              if ((TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
              }
              if (pCVar3 == (Characters_Human_o *)0x0) goto label_18217664a;
              Characters_BaseCharacter__PlayAnimation
                        ((Characters_BaseCharacter_o *)pCVar3,
                         TypeInfo_Characters_HumanAnimations->static_fields->SpecialLevi,
                         (__this->fields).AnimationLoopStartTime,(MethodInfo *)0x0);
            }
            else {
              pCVar3 = (__this->fields)._human;
              if (pCVar3 == (Characters_Human_o *)0x0) goto label_18217664a;
              Characters_Human__ActivateBlades(pCVar3,(MethodInfo *)0x0);
            }
            pSVar5 = TypeInfo_Settings_SettingsManager->static_fields->SoundSettings;
            if ((pSVar5 != (Settings_SoundSettings_o *)0x0) &&
               (pSVar6 = (pSVar5->fields).OldBladeEffect, pSVar6 != (Settings_BoolSetting_o *)0x0)) {
              pCVar3 = (__this->fields)._human;
              if ((pSVar6->fields)._value == false) {
                if ((TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
                }
                if (pCVar3 != (Characters_Human_o *)0x0) {
                  sound = TypeInfo_Characters_HumanSounds->static_fields->BladeSwing3;
label_182176631:
                  Characters_BaseCharacter__PlaySound
                            ((Characters_BaseCharacter_o *)pCVar3,sound,(MethodInfo *)0x0);
                  piVar2 = &(__this->fields)._stage;
                  *piVar2 = *piVar2 + 1;
                  return;
                }
              }
              else {
                if ((TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
                }
                if (pCVar3 != (Characters_Human_o *)0x0) {
                  sound = TypeInfo_Characters_HumanSounds->static_fields->OldBladeSwing;
                  goto label_182176631;
                }
              }
            }
          }
        }
      }
    }
  }
label_18217664a:
  ThrowNullReferenceException();
}


// Characters.Spin1Special$$GetAnimationTime
// il2cpp: float Characters_Spin1Special__GetAnimationTime (Characters_Spin1Special_o* __this, const MethodInfo* method);
// 0x182176650

float Characters_Spin1Special__GetAnimationTime(Characters_Spin1Special_o *__this,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  Characters_AnimationHandler_o *__this_00;
  float fVar2;
  
  if (Il2CppMethodInitialized_184346cf8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanAnimations);
    Il2CppMethodInitialized_184346cf8 = '\x01';
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


