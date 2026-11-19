// Type: Characters.DownStrikeSpecial
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/Characters/DownStrikeSpecial.cs
// Prior real C# source (older reference): Assets/Scripts/Characters/Human/Specials/DownStrikeSpecial.cs
// --------------------------------

// Characters.DownStrikeSpecial$$.ctor
// il2cpp: void Characters_DownStrikeSpecial___ctor (Characters_DownStrikeSpecial_o* __this, Characters_BaseCharacter_o* owner, const MethodInfo* method);
// 0x5c0b520

void Characters_DownStrikeSpecial___ctor
               (Characters_DownStrikeSpecial_o *__this,Characters_BaseCharacter_o *owner,MethodInfo *method)

{
  Characters_BaseHoldAttackSpecial___ctor((Characters_StockSpecial_o *)__this,owner,method);
  (__this->fields).Cooldown = 5.0;
  return;
}


// Characters.DownStrikeSpecial$$Activate
// il2cpp: void Characters_DownStrikeSpecial__Activate (Characters_DownStrikeSpecial_o* __this, const MethodInfo* method);
// 0x5c0b540
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5c0b59f: jmp 0x5c0b62a

void Characters_DownStrikeSpecial__Activate(Characters_DownStrikeSpecial_o *__this,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  Characters_HookUseable_o *pCVar2;
  
  if (Il2CppMethodInitialized_075476bb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanAnimations);
    Il2CppMethodInitialized_075476bb = '\x01';
  }
  pCVar1 = (__this->fields)._human;
  if (pCVar1 != (Characters_Human_o *)0x0) {
    if ((pCVar1->fields).MountState == 0) {
      (__this->fields)._needActivate = true;
      pCVar2 = (pCVar1->fields).HookLeft;
    }
    else {
      Characters_Human__Unmount(pCVar1,false,(MethodInfo *)0x0);
      pCVar1 = (__this->fields)._human;
      (__this->fields)._needActivate = true;
      if (pCVar1 == (Characters_Human_o *)0x0) goto label_05c0b62a;
      pCVar2 = (pCVar1->fields).HookLeft;
    }
    if (pCVar2 != (Characters_HookUseable_o *)0x0) {
      Characters_HookUseable__DisableAnyHook(pCVar2,(MethodInfo *)0x0);
      pCVar1 = (__this->fields)._human;
      if ((pCVar1 != (Characters_Human_o *)0x0) &&
         (pCVar2 = (pCVar1->fields).HookRight, pCVar2 != (Characters_HookUseable_o *)0x0)) {
        Characters_HookUseable__DisableAnyHook(pCVar2,(MethodInfo *)0x0);
        pCVar1 = (__this->fields)._human;
        if (pCVar1 != (Characters_Human_o *)0x0) {
          (pCVar1->fields).CancelHookLeftKey = true;
          (pCVar1->fields).CancelHookRightKey = true;
          (pCVar1->fields).CancelHookBothKey = true;
          if ((TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
          }
          Characters_Human__StartSpecialAttack
                    (pCVar1,TypeInfo_Characters_HumanAnimations->static_fields->SpecialMikasa1,
                     (MethodInfo *)0x0);
          return;
        }
      }
    }
  }
label_05c0b62a:
  ThrowNullReferenceException();
}


// Characters.DownStrikeSpecial$$ActiveFixedUpdate
// il2cpp: void Characters_DownStrikeSpecial__ActiveFixedUpdate (Characters_DownStrikeSpecial_o* __this, const MethodInfo* method);
// 0x5c0b630

void Characters_DownStrikeSpecial__ActiveFixedUpdate
               (Characters_DownStrikeSpecial_o *__this,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  bool bVar5;
  uint32_t uVar6;
  Characters_Human_o *pCVar7;
  Utility_BaseComponentCache_o *pUVar8;
  UnityEngine_Rigidbody_o *pUVar9;
  UnityEngine_Vector3_StaticFields *pUVar10;
  Settings_SoundSettings_o *pSVar11;
  Settings_BoolSetting_o *pSVar12;
  Characters_HookUseable_o *pCVar13;
  System_String_o **ppSVar14;
  UnityEngine_Vector3_o force;
  UnityEngine_Vector3_o force_00;
  
  if (Il2CppMethodInitialized_075476bc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_get_Value);
    Il2CppMethodInitialized_075476bc = '\x01';
  }
  Characters_ExtendedUseable__ActiveFixedUpdate((Characters_ExtendedUseable_o *)__this,(MethodInfo *)0x0);
  bVar5 = (__this->fields)._needActivate;
  if (bVar5 != false) {
    pCVar7 = (__this->fields)._human;
    if ((pCVar7 == (Characters_Human_o *)0x0) ||
       (pUVar8 = (pCVar7->fields).Cache, pUVar8 == (Utility_BaseComponentCache_o *)0x0)) goto label_05c0b912;
    pUVar9 = (pUVar8->fields).Rigidbody;
    if (Il2CppMethodInitialized_0753e72c == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
      Il2CppMethodInitialized_0753e72c = '\x01';
    }
    if (pUVar9 == (UnityEngine_Rigidbody_o *)0x0) goto label_05c0b912;
    pUVar10 = TypeInfo_UnityEngine_Vector3->static_fields;
    force.fields.z = (pUVar10->upVector).fields.z * 10.0;
    uVar1 = (pUVar10->upVector).fields.x;
    uVar3 = (pUVar10->upVector).fields.y;
    force.fields.x = (float)uVar1 * 10.0;
    force.fields.y = (float)uVar3 * 10.0;
    UnityEngine_Rigidbody__AddForce(pUVar9,force,1,(MethodInfo *)0x0);
    (__this->fields)._needActivate = false;
    pCVar7 = (__this->fields)._human;
    if ((pCVar7 == (Characters_Human_o *)0x0) ||
       (pUVar8 = (pCVar7->fields).Cache, pUVar8 == (Utility_BaseComponentCache_o *)0x0)) goto label_05c0b912;
    pUVar9 = (pUVar8->fields).Rigidbody;
    if (Il2CppMethodInitialized_0753e4b6 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
      Il2CppMethodInitialized_0753e4b6 = '\x01';
    }
    if (pUVar9 == (UnityEngine_Rigidbody_o *)0x0) goto label_05c0b912;
    UnityEngine_Rigidbody__set_linearVelocity
              (pUVar9,(UnityEngine_Vector3_o)(TypeInfo_UnityEngine_Vector3->static_fields->zeroVector).fields,
               (MethodInfo *)0x0);
    pCVar7 = (__this->fields)._human;
    if (pCVar7 == (Characters_Human_o *)0x0) goto label_05c0b912;
    Characters_Human__ActivateBlades(pCVar7,(MethodInfo *)0x0);
    pSVar11 = TypeInfo_Settings_SettingsManager->static_fields->SoundSettings;
    if ((pSVar11 == (Settings_SoundSettings_o *)0x0) ||
       (pSVar12 = (pSVar11->fields).OldBladeEffect, pSVar12 == (Settings_BoolSetting_o *)0x0))
    goto label_05c0b912;
    pCVar7 = (__this->fields)._human;
    uVar6 = (TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor;
    if ((pSVar12->fields)._value == false) {
      if (uVar6 == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
      }
      if (pCVar7 == (Characters_Human_o *)0x0) goto label_05c0b912;
      ppSVar14 = &TypeInfo_Characters_HumanSounds->static_fields->BladeSwing4;
    }
    else {
      if (uVar6 == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
      }
      if (pCVar7 == (Characters_Human_o *)0x0) goto label_05c0b912;
      ppSVar14 = &TypeInfo_Characters_HumanSounds->static_fields->OldBladeSwing;
    }
    Characters_BaseCharacter__PlaySound((Characters_BaseCharacter_o *)pCVar7,*ppSVar14,(MethodInfo *)0x0);
  }
  pCVar7 = (__this->fields)._human;
  if ((pCVar7 != (Characters_Human_o *)0x0) &&
     (pUVar8 = (pCVar7->fields).Cache, pUVar8 != (Utility_BaseComponentCache_o *)0x0)) {
    pUVar9 = (pUVar8->fields).Rigidbody;
    if (Il2CppMethodInitialized_075450a5 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
      Il2CppMethodInitialized_075450a5 = '\x01';
    }
    if (pUVar9 == (UnityEngine_Rigidbody_o *)0x0) goto label_05c0b912;
    pUVar10 = TypeInfo_UnityEngine_Vector3->static_fields;
    force_00.fields.z = (pUVar10->downVector).fields.z * 3.0;
    uVar2 = (pUVar10->downVector).fields.x;
    uVar4 = (pUVar10->downVector).fields.y;
    force_00.fields.x = (float)uVar2 * 3.0;
    force_00.fields.y = (float)uVar4 * 3.0;
    UnityEngine_Rigidbody__AddForce(pUVar9,force_00,2,(MethodInfo *)0x0);
    pCVar7 = (__this->fields)._human;
    if (bVar5 == false) {
      if (pCVar7 == (Characters_Human_o *)0x0) goto label_05c0b912;
      if ((pCVar7->fields).Grounded != false) goto label_05c0b8ef;
    }
    else if (pCVar7 == (Characters_Human_o *)0x0) goto label_05c0b912;
    pCVar13 = (pCVar7->fields).HookLeft;
    if (pCVar13 != (Characters_HookUseable_o *)0x0) {
      if ((pCVar13->fields).IsActive == false) {
        pCVar13 = (pCVar7->fields).HookRight;
        if (pCVar13 == (Characters_HookUseable_o *)0x0) goto label_05c0b912;
        if (((pCVar13->fields).IsActive == false) && ((pCVar7->fields)._state != 7)) {
          return;
        }
      }
label_05c0b8ef:
      (__this->fields).IsActive = false;
      (*(__this->klass->vtable)._10_Deactivate.methodPtr)
                (__this,(__this->klass->vtable)._10_Deactivate.method);
      return;
    }
  }
label_05c0b912:
  ThrowNullReferenceException();
}


// Characters.DownStrikeSpecial$$CanUse
// il2cpp: bool Characters_DownStrikeSpecial__CanUse (Characters_DownStrikeSpecial_o* __this, const MethodInfo* method);
// 0x5c0b920

bool Characters_DownStrikeSpecial__CanUse(Characters_DownStrikeSpecial_o *__this,MethodInfo *method)

{
  Characters_Human_o *__this_00;
  bool bVar1;
  
  bVar1 = Characters_BaseUseable__CanUse((Characters_BaseUseable_o *)__this,(MethodInfo *)0x0);
  if (!bVar1) {
    return false;
  }
  __this_00 = (__this->fields)._human;
  if (__this_00 == (Characters_Human_o *)0x0) {
    ThrowNullReferenceException();
  }
  bVar1 = Characters_Human__CanBladeAttack(__this_00,(MethodInfo *)0x0);
  return bVar1;
}


