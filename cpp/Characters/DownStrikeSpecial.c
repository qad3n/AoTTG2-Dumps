// Type: Characters.DownStrikeSpecial
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Characters/DownStrikeSpecial.cs
// Prior real C# source (older reference): Assets/Scripts/Characters/Human/Specials/DownStrikeSpecial.cs
// --------------------------------

// Characters.DownStrikeSpecial$$.ctor
// il2cpp: void Characters_DownStrikeSpecial___ctor (Characters_DownStrikeSpecial_o* __this, Characters_BaseCharacter_o* owner, const MethodInfo* method);
// 0x18216b660

void Characters_DownStrikeSpecial___ctor
               (Characters_DownStrikeSpecial_o *__this,Characters_BaseCharacter_o *owner,MethodInfo *method)

{
  Characters_BaseHoldAttackSpecial___ctor
            ((Characters_BaseHoldAttackSpecial_o *)__this,owner,(MethodInfo *)0x0);
  (__this->fields).Cooldown = 5.0;
  return;
}


// Characters.DownStrikeSpecial$$Activate
// il2cpp: void Characters_DownStrikeSpecial__Activate (Characters_DownStrikeSpecial_o* __this, const MethodInfo* method);
// 0x18216b220

void Characters_DownStrikeSpecial__Activate(Characters_DownStrikeSpecial_o *__this,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  Characters_HookUseable_o *pCVar2;
  
  if (Il2CppMethodInitialized_184346ceb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanAnimations);
    Il2CppMethodInitialized_184346ceb = '\x01';
  }
  pCVar1 = (__this->fields)._human;
  if (pCVar1 != (Characters_Human_o *)0x0) {
    if ((pCVar1->fields).MountState != 0) {
      Characters_Human__Unmount(pCVar1,false,(MethodInfo *)0x0);
    }
    pCVar1 = (__this->fields)._human;
    (__this->fields)._needActivate = true;
    if ((pCVar1 != (Characters_Human_o *)0x0) &&
       (pCVar2 = (pCVar1->fields).HookLeft, pCVar2 != (Characters_HookUseable_o *)0x0)) {
      Characters_HookUseable__DisableAnyHook(pCVar2,(MethodInfo *)0x0);
      pCVar1 = (__this->fields)._human;
      if ((pCVar1 != (Characters_Human_o *)0x0) &&
         (pCVar2 = (pCVar1->fields).HookRight, pCVar2 != (Characters_HookUseable_o *)0x0)) {
        Characters_HookUseable__DisableAnyHook(pCVar2,(MethodInfo *)0x0);
        pCVar1 = (__this->fields)._human;
        if (pCVar1 != (Characters_Human_o *)0x0) {
          (pCVar1->fields).CancelHookLeftKey = true;
          pCVar1 = (__this->fields)._human;
          if (pCVar1 != (Characters_Human_o *)0x0) {
            (pCVar1->fields).CancelHookRightKey = true;
            pCVar1 = (__this->fields)._human;
            if (pCVar1 != (Characters_Human_o *)0x0) {
              (pCVar1->fields).CancelHookBothKey = true;
              pCVar1 = (__this->fields)._human;
              if ((TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
              }
              if (pCVar1 != (Characters_Human_o *)0x0) {
                Characters_Human__StartSpecialAttack
                          (pCVar1,TypeInfo_Characters_HumanAnimations->static_fields->SpecialMikasa1,
                           (MethodInfo *)0x0);
                return;
              }
            }
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Characters.DownStrikeSpecial$$ActiveFixedUpdate
// il2cpp: void Characters_DownStrikeSpecial__ActiveFixedUpdate (Characters_DownStrikeSpecial_o* __this, const MethodInfo* method);
// 0x18216b330

void Characters_DownStrikeSpecial__ActiveFixedUpdate
               (Characters_DownStrikeSpecial_o *__this,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  bool bVar5;
  Characters_Human_o *pCVar6;
  Utility_BaseComponentCache_o *pUVar7;
  UnityEngine_Rigidbody_o *pUVar8;
  UnityEngine_Vector3_StaticFields *pUVar9;
  Settings_SoundSettings_o *pSVar10;
  Settings_BoolSetting_o *pSVar11;
  Characters_HookUseable_o *pCVar12;
  Characters_DownStrikeSpecial_c *pCVar13;
  System_String_o *sound;
  undefined8 uVar14;
  undefined8 uVar15;
  UnityEngine_Vector3_Fields local_18;
  
  if (Il2CppMethodInitialized_184346cec == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_get_Value);
    Il2CppMethodInitialized_184346cec = '\x01';
  }
  System_Configuration_ConfigurationCollectionAttribute___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  bVar5 = (__this->fields)._needActivate;
  if (bVar5 != false) {
    pCVar6 = (__this->fields)._human;
    if ((pCVar6 == (Characters_Human_o *)0x0) ||
       (pUVar7 = (pCVar6->fields).Cache, pUVar7 == (Utility_BaseComponentCache_o *)0x0)) goto label_18216b655;
    pUVar8 = (pUVar7->fields).Rigidbody;
    if (Il2CppMethodInitialized_18433de5c == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
      Il2CppMethodInitialized_18433de5c = '\x01';
    }
    pUVar9 = TypeInfo_UnityEngine_Vector3->static_fields;
    uVar1 = (pUVar9->upVector).fields.x;
    uVar3 = (pUVar9->upVector).fields.y;
    uVar14._0_4_ = (float)uVar1 * 10.0;
    uVar14._4_4_ = (float)uVar3 * 10.0;
    if (pUVar8 == (UnityEngine_Rigidbody_o *)0x0) goto label_18216b655;
    local_18.z = (pUVar9->upVector).fields.z * 10.0;
    local_18._0_8_ = uVar14;
    UnityEngine_Rigidbody__AddForce(pUVar8,(UnityEngine_Vector3_o *)&local_18,1,(MethodInfo *)0x0);
    pCVar6 = (__this->fields)._human;
    (__this->fields)._needActivate = false;
    if ((pCVar6 == (Characters_Human_o *)0x0) ||
       (pUVar7 = (pCVar6->fields).Cache, pUVar7 == (Utility_BaseComponentCache_o *)0x0)) goto label_18216b655;
    pUVar8 = (pUVar7->fields).Rigidbody;
    if (Il2CppMethodInitialized_18433dbea == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
      Il2CppMethodInitialized_18433dbea = '\x01';
    }
    if (pUVar8 == (UnityEngine_Rigidbody_o *)0x0) goto label_18216b655;
    pUVar9 = TypeInfo_UnityEngine_Vector3->static_fields;
    local_18.x = (pUVar9->zeroVector).fields.x;
    local_18.y = (pUVar9->zeroVector).fields.y;
    local_18.z = (pUVar9->zeroVector).fields.z;
    UnityEngine_Rigidbody__set_linearVelocity(pUVar8,(UnityEngine_Vector3_o *)&local_18,(MethodInfo *)0x0);
    pCVar6 = (__this->fields)._human;
    if (pCVar6 == (Characters_Human_o *)0x0) goto label_18216b655;
    Characters_Human__ActivateBlades(pCVar6,(MethodInfo *)0x0);
    pSVar10 = TypeInfo_Settings_SettingsManager->static_fields->SoundSettings;
    if ((pSVar10 == (Settings_SoundSettings_o *)0x0) ||
       (pSVar11 = (pSVar10->fields).OldBladeEffect, pSVar11 == (Settings_BoolSetting_o *)0x0))
    goto label_18216b655;
    pCVar6 = (__this->fields)._human;
    if ((pSVar11->fields)._value == false) {
      if ((TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
      }
      if (pCVar6 == (Characters_Human_o *)0x0) goto label_18216b655;
      sound = TypeInfo_Characters_HumanSounds->static_fields->BladeSwing4;
    }
    else {
      if ((TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
      }
      if (pCVar6 == (Characters_Human_o *)0x0) goto label_18216b655;
      sound = TypeInfo_Characters_HumanSounds->static_fields->OldBladeSwing;
    }
    Characters_BaseCharacter__PlaySound((Characters_BaseCharacter_o *)pCVar6,sound,(MethodInfo *)0x0);
  }
  pCVar6 = (__this->fields)._human;
  if ((pCVar6 != (Characters_Human_o *)0x0) &&
     (pUVar7 = (pCVar6->fields).Cache, pUVar7 != (Utility_BaseComponentCache_o *)0x0)) {
    pUVar8 = (pUVar7->fields).Rigidbody;
    if (Il2CppMethodInitialized_18434494b == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
      Il2CppMethodInitialized_18434494b = '\x01';
    }
    pUVar9 = TypeInfo_UnityEngine_Vector3->static_fields;
    uVar2 = (pUVar9->downVector).fields.x;
    uVar4 = (pUVar9->downVector).fields.y;
    uVar15._0_4_ = (float)uVar2 * 3.0;
    uVar15._4_4_ = (float)uVar4 * 3.0;
    if (pUVar8 == (UnityEngine_Rigidbody_o *)0x0) goto label_18216b655;
    local_18.z = (pUVar9->downVector).fields.z * 3.0;
    local_18._0_8_ = uVar15;
    UnityEngine_Rigidbody__AddForce(pUVar8,(UnityEngine_Vector3_o *)&local_18,2,(MethodInfo *)0x0);
    if (bVar5 == false) {
      pCVar6 = (__this->fields)._human;
      if (pCVar6 == (Characters_Human_o *)0x0) goto label_18216b655;
      if ((pCVar6->fields).Grounded != false) goto label_18216b62e;
    }
    pCVar6 = (__this->fields)._human;
    if ((pCVar6 != (Characters_Human_o *)0x0) &&
       (pCVar12 = (pCVar6->fields).HookLeft, pCVar12 != (Characters_HookUseable_o *)0x0)) {
      if ((pCVar12->fields).IsActive == false) {
        pCVar12 = (pCVar6->fields).HookRight;
        if (pCVar12 == (Characters_HookUseable_o *)0x0) goto label_18216b655;
        if (((pCVar12->fields).IsActive == false) && ((pCVar6->fields)._state != 7)) {
          return;
        }
      }
label_18216b62e:
      pCVar13 = __this->klass;
      (__this->fields).IsActive = false;
      (*(pCVar13->vtable)._10_Deactivate.methodPtr)(__this,(pCVar13->vtable)._10_Deactivate.method);
      return;
    }
  }
label_18216b655:
  ThrowNullReferenceException();
}


// Characters.DownStrikeSpecial$$CanUse
// il2cpp: bool Characters_DownStrikeSpecial__CanUse (Characters_DownStrikeSpecial_o* __this, const MethodInfo* method);
// 0x182166dd0

bool Characters_DownStrikeSpecial__CanUse(Characters_DownStrikeSpecial_o *__this,MethodInfo *method)

{
  Characters_Human_o *__this_00;
  bool bVar1;
  
  bVar1 = Characters_BaseUseable__CanUse((Characters_BaseUseable_o *)__this,(MethodInfo *)0x0);
  if (!bVar1) {
    return false;
  }
  __this_00 = (__this->fields)._human;
  if (__this_00 != (Characters_Human_o *)0x0) {
    bVar1 = Characters_Human__CanBladeAttack(__this_00,(MethodInfo *)0x0);
    return bVar1;
  }
  ThrowNullReferenceException();
}


