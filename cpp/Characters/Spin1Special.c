// Type: Characters.Spin1Special
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/Characters/Spin1Special.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/Characters/Human/Specials/Spin1Special.cs  [CHANGED since prior version]
// --------------------------------

// Characters.Spin1Special$$get_ActiveTime
// il2cpp: float Characters_Spin1Special__get_ActiveTime (Characters_Spin1Special_o* __this, const MethodInfo* method);
// 0x3feb7a0

float Characters_Spin1Special__get_ActiveTime(Characters_Spin1Special_o *__this,MethodInfo *method)

{
  return 0.8;
}


// Characters.Spin1Special$$.ctor
// il2cpp: void Characters_Spin1Special___ctor (Characters_Spin1Special_o* __this, Characters_BaseCharacter_o* owner, const MethodInfo* method);
// 0x3fd78c0

void Characters_Spin1Special___ctor
               (Characters_Spin1Special_o *__this,Characters_BaseCharacter_o *owner,
               MethodInfo *method)

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
// 0x3feb7b0

void Characters_Spin1Special__Activate(Characters_Spin1Special_o *__this,MethodInfo *method)

{
  Characters_Human_o *__this_00;
  
  if (DAT_0570417b == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanAnimations);
    DAT_0570417b = '\x01';
  }
  (__this->fields)._stage = 0;
  __this_00 = (__this->fields)._human;
  if (*(int *)(TypeInfo_HumanAnimations + 0xe4) == 0) {
    il2cpp_init_class();
  }
  if (__this_00 != (Characters_Human_o *)0x0) {
    Characters_Human__StartSpecialAttack
              (__this_00,*(System_String_o **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x208),
               (MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.Spin1Special$$ActiveFixedUpdate
// il2cpp: void Characters_Spin1Special__ActiveFixedUpdate (Characters_Spin1Special_o* __this, const MethodInfo* method);
// 0x3feb830

void Characters_Spin1Special__ActiveFixedUpdate
               (Characters_Spin1Special_o *__this,MethodInfo *method)

{
  float *pfVar1;
  int32_t *piVar2;
  char cVar3;
  int iVar4;
  Characters_Human_o *pCVar5;
  Characters_AnimationHandler_o *pCVar6;
  bool_conflict bVar7;
  long lVar8;
  long lVar9;
  float fVar10;
  
  if (DAT_0570417c == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanAnimations);
    il2cpp_init_method_metadata(&TypeInfo_HumanSounds);
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_get_Value);
    DAT_0570417c = '\x01';
  }
  pCVar5 = (__this->fields)._human;
  if (pCVar5 == (Characters_Human_o *)0x0) goto LAB_03feba55;
  if ((pCVar5->fields).FinishSetup != 9) {
    *(undefined1 *)&(__this->fields).IsActive = 0;
  }
  pCVar6 = *(Characters_AnimationHandler_o **)&(pCVar5->fields)._cameraFPS;
  if (*(int *)(TypeInfo_HumanAnimations + 0xe4) == 0) {
    il2cpp_init_class();
  }
  if (pCVar6 == (Characters_AnimationHandler_o *)0x0) goto LAB_03feba55;
  bVar7 = Characters_AnimationHandler__IsPlaying
                    (pCVar6,*(System_String_o **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x208),
                     (MethodInfo *)0x0);
  if ((char)bVar7 == '\0') {
    return;
  }
  if (DAT_0570417d == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanAnimations);
    DAT_0570417d = '\x01';
  }
  pCVar5 = (__this->fields)._human;
  if (pCVar5 == (Characters_Human_o *)0x0) goto LAB_03feba55;
  pCVar6 = *(Characters_AnimationHandler_o **)&(pCVar5->fields)._cameraFPS;
  if (*(int *)(TypeInfo_HumanAnimations + 0xe4) == 0) {
    il2cpp_init_class();
  }
  if (pCVar6 == (Characters_AnimationHandler_o *)0x0) goto LAB_03feba55;
  fVar10 = Characters_AnimationHandler__GetNormalizedTime
                     (pCVar6,*(System_String_o **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x208),
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
    pCVar5 = (__this->fields)._human;
    if (*(int *)(TypeInfo_HumanAnimations + 0xe4) == 0) {
      il2cpp_init_class();
    }
    if (pCVar5 == (Characters_Human_o *)0x0) goto LAB_03feba55;
    Characters_BaseCharacter__PlayAnimation
              ((Characters_BaseCharacter_o *)pCVar5,
               *(System_String_o **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x208),
               (__this->fields).AnimationLoopStartTime,(MethodInfo *)0x0);
  }
  else {
    pCVar5 = (__this->fields)._human;
    if (pCVar5 == (Characters_Human_o *)0x0) goto LAB_03feba55;
    Characters_Human__ActivateBlades(pCVar5,(MethodInfo *)0x0);
  }
  lVar8 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x80);
  if ((lVar8 == 0) || (lVar8 = *(long *)(lVar8 + 0x88), lVar8 == 0)) goto LAB_03feba55;
  cVar3 = *(char *)(lVar8 + 0x11);
  pCVar5 = (__this->fields)._human;
  if (*(int *)(TypeInfo_HumanSounds + 0xe4) == 0) {
    il2cpp_init_class();
    lVar8 = *(long *)(TypeInfo_HumanSounds + 0xb8);
    if (cVar3 == '\0') goto LAB_03feba4b;
LAB_03feba0e:
    lVar9 = 0x68;
  }
  else {
    lVar8 = *(long *)(TypeInfo_HumanSounds + 0xb8);
    if (cVar3 != '\0') goto LAB_03feba0e;
LAB_03feba4b:
    lVar9 = 0x58;
  }
  if (pCVar5 != (Characters_Human_o *)0x0) {
    Characters_BaseCharacter__PlaySound
              ((Characters_BaseCharacter_o *)pCVar5,*(System_String_o **)(lVar8 + lVar9),
               (MethodInfo *)0x0);
    piVar2 = &(__this->fields)._stage;
    *piVar2 = *piVar2 + 1;
    return;
  }
LAB_03feba55:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.Spin1Special$$GetAnimationTime
// il2cpp: float Characters_Spin1Special__GetAnimationTime (Characters_Spin1Special_o* __this, const MethodInfo* method);
// 0x3feba60

float Characters_Spin1Special__GetAnimationTime
                (Characters_Spin1Special_o *__this,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  Characters_AnimationHandler_o *__this_00;
  float fVar2;
  
  if (DAT_0570417d == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanAnimations);
    DAT_0570417d = '\x01';
  }
  pCVar1 = (__this->fields)._human;
  if (pCVar1 != (Characters_Human_o *)0x0) {
    __this_00 = *(Characters_AnimationHandler_o **)&(pCVar1->fields)._cameraFPS;
    if (*(int *)(TypeInfo_HumanAnimations + 0xe4) == 0) {
      il2cpp_init_class();
    }
    if (__this_00 != (Characters_AnimationHandler_o *)0x0) {
      fVar2 = Characters_AnimationHandler__GetNormalizedTime
                        (__this_00,*(System_String_o **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x208),
                         (MethodInfo *)0x0);
      return fVar2;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


