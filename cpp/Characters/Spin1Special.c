// Type: Characters.Spin1Special
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/Characters/Spin1Special.cs
// Prior real C# source (older reference): Assets/Scripts/Characters/Human/Specials/Spin1Special.cs
// --------------------------------

// Characters.Spin1Special$$get_ActiveTime
// il2cpp: float Characters_Spin1Special__get_ActiveTime (Characters_Spin1Special_o* __this, const MethodInfo* method);
// 0x5c0e530

float Characters_Spin1Special__get_ActiveTime(Characters_Spin1Special_o *__this,MethodInfo *method)

{
  return 0.8;
}


// Characters.Spin1Special$$.ctor
// il2cpp: void Characters_Spin1Special___ctor (Characters_Spin1Special_o* __this, Characters_BaseCharacter_o* owner, const MethodInfo* method);
// 0x5c0e540

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
// 0x5c0e570

void Characters_Spin1Special__Activate(Characters_Spin1Special_o *__this,MethodInfo *method)

{
  Characters_Human_o *__this_00;
  
  if (Il2CppMethodInitialized_075476c6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanAnimations);
    Il2CppMethodInitialized_075476c6 = '\x01';
  }
  (__this->fields)._stage = 0;
  __this_00 = (__this->fields)._human;
  if ((TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
  }
  if (__this_00 == (Characters_Human_o *)0x0) {
    ThrowNullReferenceException();
  }
  Characters_Human__StartSpecialAttack
            (__this_00,TypeInfo_Characters_HumanAnimations->static_fields->SpecialLevi,(MethodInfo *)0x0);
  return;
}


// Characters.Spin1Special$$ActiveFixedUpdate
// il2cpp: void Characters_Spin1Special__ActiveFixedUpdate (Characters_Spin1Special_o* __this, const MethodInfo* method);
// 0x5c0e5f0

void Characters_Spin1Special__ActiveFixedUpdate(Characters_Spin1Special_o *__this,MethodInfo *method)

{
  float *pfVar1;
  int32_t *piVar2;
  int iVar3;
  uint32_t uVar4;
  Characters_Human_o *pCVar5;
  Characters_AnimationHandler_o *pCVar6;
  Settings_SoundSettings_o *pSVar7;
  Settings_BoolSetting_o *pSVar8;
  bool bVar9;
  System_String_o **ppSVar10;
  float fVar11;
  
  if (Il2CppMethodInitialized_075476c7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanAnimations);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_get_Value);
    Il2CppMethodInitialized_075476c7 = '\x01';
  }
  pCVar5 = (__this->fields)._human;
  if (pCVar5 != (Characters_Human_o *)0x0) {
    if ((pCVar5->fields)._state != 9) {
      (__this->fields).IsActive = false;
    }
    pCVar6 = (pCVar5->fields).Animation;
    if ((TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
    }
    if (pCVar6 != (Characters_AnimationHandler_o *)0x0) {
      bVar9 = Characters_AnimationHandler__IsPlaying
                        (pCVar6,TypeInfo_Characters_HumanAnimations->static_fields->SpecialLevi,
                         (MethodInfo *)0x0);
      if (!bVar9) {
        return;
      }
      if (Il2CppMethodInitialized_075476c8 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanAnimations);
        Il2CppMethodInitialized_075476c8 = '\x01';
      }
      pCVar5 = (__this->fields)._human;
      if (pCVar5 != (Characters_Human_o *)0x0) {
        pCVar6 = (pCVar5->fields).Animation;
        if ((TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
        }
        if (pCVar6 != (Characters_AnimationHandler_o *)0x0) {
          fVar11 = Characters_AnimationHandler__GetNormalizedTime
                             (pCVar6,TypeInfo_Characters_HumanAnimations->static_fields->SpecialLevi,
                              (MethodInfo *)0x0);
          iVar3 = (__this->fields)._stage;
          if ((iVar3 != 0) ||
             (pfVar1 = &(__this->fields).AnimationLoopStartTime, fVar11 < *pfVar1 || fVar11 == *pfVar1)) {
            if ((__this->fields).Loops <= iVar3) {
              return;
            }
            pfVar1 = &(__this->fields).AnimationLoopEndTime;
            if (fVar11 < *pfVar1 || fVar11 == *pfVar1) {
              return;
            }
            pCVar5 = (__this->fields)._human;
            if ((TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
            }
            if (pCVar5 == (Characters_Human_o *)0x0) goto label_05c0e810;
            Characters_BaseCharacter__PlayAnimation
                      ((Characters_BaseCharacter_o *)pCVar5,
                       TypeInfo_Characters_HumanAnimations->static_fields->SpecialLevi,
                       (__this->fields).AnimationLoopStartTime,(MethodInfo *)0x0);
          }
          else {
            pCVar5 = (__this->fields)._human;
            if (pCVar5 == (Characters_Human_o *)0x0) goto label_05c0e810;
            Characters_Human__ActivateBlades(pCVar5,(MethodInfo *)0x0);
          }
          pSVar7 = TypeInfo_Settings_SettingsManager->static_fields->SoundSettings;
          if ((pSVar7 != (Settings_SoundSettings_o *)0x0) &&
             (pSVar8 = (pSVar7->fields).OldBladeEffect, pSVar8 != (Settings_BoolSetting_o *)0x0)) {
            pCVar5 = (__this->fields)._human;
            uVar4 = (TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor;
            if ((pSVar8->fields)._value == false) {
              if (uVar4 == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
              }
              if (pCVar5 != (Characters_Human_o *)0x0) {
                ppSVar10 = &TypeInfo_Characters_HumanSounds->static_fields->BladeSwing3;
                goto label_05c0e7f9;
              }
            }
            else {
              if (uVar4 == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
              }
              if (pCVar5 != (Characters_Human_o *)0x0) {
                ppSVar10 = &TypeInfo_Characters_HumanSounds->static_fields->OldBladeSwing;
label_05c0e7f9:
                Characters_BaseCharacter__PlaySound
                          ((Characters_BaseCharacter_o *)pCVar5,*ppSVar10,(MethodInfo *)0x0);
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
label_05c0e810:
  ThrowNullReferenceException();
}


// Characters.Spin1Special$$GetAnimationTime
// il2cpp: float Characters_Spin1Special__GetAnimationTime (Characters_Spin1Special_o* __this, const MethodInfo* method);
// 0x5c0e820

float Characters_Spin1Special__GetAnimationTime(Characters_Spin1Special_o *__this,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  Characters_AnimationHandler_o *__this_00;
  float fVar2;
  
  if (Il2CppMethodInitialized_075476c8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanAnimations);
    Il2CppMethodInitialized_075476c8 = '\x01';
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


