// Type: Characters.Spin2Special
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Characters/Spin2Special.cs
// Prior real C# source (older reference): Assets/Scripts/Characters/Human/Specials/Spin2Special.cs
// --------------------------------

// Characters.Spin2Special$$get_ActiveTime
// il2cpp: float Characters_Spin2Special__get_ActiveTime (Characters_Spin2Special_o* __this, const MethodInfo* method);
// 0x5c0e8a0

float Characters_Spin2Special__get_ActiveTime(Characters_Spin2Special_o *__this,MethodInfo *method)

{
  return 0.74;
}


// Characters.Spin2Special$$.ctor
// il2cpp: void Characters_Spin2Special___ctor (Characters_Spin2Special_o* __this, Characters_BaseCharacter_o* owner, const MethodInfo* method);
// 0x5c0e8b0

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
// 0x5c0e8e0

void Characters_Spin2Special__Activate(Characters_Spin2Special_o *__this,MethodInfo *method)

{
  Characters_Human_o *__this_00;
  
  if (Il2CppMethodInitialized_075476c9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanAnimations);
    Il2CppMethodInitialized_075476c9 = '\x01';
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
            (__this_00,TypeInfo_Characters_HumanAnimations->static_fields->SpecialPetra,(MethodInfo *)0x0);
  return;
}


// Characters.Spin2Special$$ActiveFixedUpdate
// il2cpp: void Characters_Spin2Special__ActiveFixedUpdate (Characters_Spin2Special_o* __this, const MethodInfo* method);
// 0x5c0e960
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5c0ebcf: test eax, eax
// asm:   0x5c0ebd3: jmp 0x5c0ec0e

void Characters_Spin2Special__ActiveFixedUpdate(Characters_Spin2Special_o *__this,MethodInfo *method)

{
  float *pfVar1;
  int32_t *piVar2;
  int iVar3;
  uint32_t uVar4;
  Characters_AnimationHandler_o *pCVar5;
  Settings_SoundSettings_o *pSVar6;
  Settings_BoolSetting_o *pSVar7;
  bool bVar8;
  System_String_o **ppSVar9;
  Characters_Human_o *pCVar10;
  float fVar11;
  
  if (Il2CppMethodInitialized_075476ca == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanAnimations);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_get_Value);
    Il2CppMethodInitialized_075476ca = '\x01';
  }
  pCVar10 = (__this->fields)._human;
  if (pCVar10 != (Characters_Human_o *)0x0) {
    if ((pCVar10->fields)._state != 9) {
      (__this->fields).IsActive = false;
    }
    pCVar5 = (pCVar10->fields).Animation;
    if ((TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
    }
    if (pCVar5 == (Characters_AnimationHandler_o *)0x0) goto label_05c0ec3d;
    bVar8 = Characters_AnimationHandler__IsPlaying
                      (pCVar5,TypeInfo_Characters_HumanAnimations->static_fields->SpecialPetra,
                       (MethodInfo *)0x0);
    if (!bVar8) {
      return;
    }
    if (Il2CppMethodInitialized_075476cb == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanAnimations);
      Il2CppMethodInitialized_075476cb = '\x01';
    }
    pCVar10 = (__this->fields)._human;
    if (pCVar10 == (Characters_Human_o *)0x0) goto label_05c0ec3d;
    pCVar5 = (pCVar10->fields).Animation;
    if ((TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
    }
    if (pCVar5 == (Characters_AnimationHandler_o *)0x0) goto label_05c0ec3d;
    fVar11 = Characters_AnimationHandler__GetNormalizedTime
                       (pCVar5,TypeInfo_Characters_HumanAnimations->static_fields->SpecialPetra,
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
      pCVar10 = (__this->fields)._human;
      if ((TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
      }
      if (pCVar10 == (Characters_Human_o *)0x0) goto label_05c0ec3d;
      Characters_BaseCharacter__PlayAnimation
                ((Characters_BaseCharacter_o *)pCVar10,
                 TypeInfo_Characters_HumanAnimations->static_fields->SpecialPetra,
                 (__this->fields).AnimationLoopStartTime,(MethodInfo *)0x0);
      pSVar6 = TypeInfo_Settings_SettingsManager->static_fields->SoundSettings;
      if ((pSVar6 == (Settings_SoundSettings_o *)0x0) ||
         (pSVar7 = (pSVar6->fields).OldBladeEffect, pSVar7 == (Settings_BoolSetting_o *)0x0))
      goto label_05c0ec3d;
      pCVar10 = (__this->fields)._human;
      uVar4 = (TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor;
      if ((pSVar7->fields)._value != false) {
        if (uVar4 == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
        }
        if (pCVar10 == (Characters_Human_o *)0x0) goto label_05c0ec3d;
        ppSVar9 = &TypeInfo_Characters_HumanSounds->static_fields->OldBladeSwing;
        goto label_05c0ec26;
      }
    }
    else {
      pCVar10 = (__this->fields)._human;
      if (pCVar10 == (Characters_Human_o *)0x0) goto label_05c0ec3d;
      Characters_Human__ActivateBlades(pCVar10,(MethodInfo *)0x0);
      pSVar6 = TypeInfo_Settings_SettingsManager->static_fields->SoundSettings;
      if ((pSVar6 == (Settings_SoundSettings_o *)0x0) ||
         (pSVar7 = (pSVar6->fields).OldBladeEffect, pSVar7 == (Settings_BoolSetting_o *)0x0))
      goto label_05c0ec3d;
      pCVar10 = (__this->fields)._human;
      uVar4 = (TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor;
      if ((pSVar7->fields)._value == false) {
        if (uVar4 == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
        }
        if (pCVar10 == (Characters_Human_o *)0x0) goto label_05c0ec3d;
        ppSVar9 = &TypeInfo_Characters_HumanSounds->static_fields->BladeSwing4;
      }
      else {
        if (uVar4 == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
        }
        if (pCVar10 == (Characters_Human_o *)0x0) goto label_05c0ec3d;
        ppSVar9 = &TypeInfo_Characters_HumanSounds->static_fields->OldBladeSwing;
      }
      Characters_BaseCharacter__PlaySound((Characters_BaseCharacter_o *)pCVar10,*ppSVar9,(MethodInfo *)0x0);
      pCVar10 = (__this->fields)._human;
      uVar4 = (TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor;
    }
    if (uVar4 == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
    }
    if (pCVar10 != (Characters_Human_o *)0x0) {
      ppSVar9 = &TypeInfo_Characters_HumanSounds->static_fields->BladeSwing3;
label_05c0ec26:
      Characters_BaseCharacter__PlaySound((Characters_BaseCharacter_o *)pCVar10,*ppSVar9,(MethodInfo *)0x0);
      piVar2 = &(__this->fields)._stage;
      *piVar2 = *piVar2 + 1;
      return;
    }
  }
label_05c0ec3d:
  ThrowNullReferenceException();
}


// Characters.Spin2Special$$GetAnimationTime
// il2cpp: float Characters_Spin2Special__GetAnimationTime (Characters_Spin2Special_o* __this, const MethodInfo* method);
// 0x5c0ec50

float Characters_Spin2Special__GetAnimationTime(Characters_Spin2Special_o *__this,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  Characters_AnimationHandler_o *__this_00;
  float fVar2;
  
  if (Il2CppMethodInitialized_075476cb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanAnimations);
    Il2CppMethodInitialized_075476cb = '\x01';
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


