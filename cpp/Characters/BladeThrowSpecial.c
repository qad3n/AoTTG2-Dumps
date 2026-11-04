// Type: Characters.BladeThrowSpecial
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Characters/BladeThrowSpecial.cs
// Prior real C# source (older reference): Assets/Scripts/Characters/Human/Specials/BladeThrowSpecial.cs
// --------------------------------

// Characters.BladeThrowSpecial$$get_ActiveTime
// il2cpp: float Characters_BladeThrowSpecial__get_ActiveTime (Characters_BladeThrowSpecial_o* __this, const MethodInfo* method);
// 0x1821698f0

float
Characters_BladeThrowSpecial__get_ActiveTime(Characters_BladeThrowSpecial_o* __this, MethodInfo* method)

{
  return 0.8;
}


// Characters.BladeThrowSpecial$$.ctor
// il2cpp: void Characters_BladeThrowSpecial___ctor (Characters_BladeThrowSpecial_o* __this, Characters_BaseCharacter_o* owner, const MethodInfo* method);
// 0x1821698c0

void Characters_BladeThrowSpecial___ctor
               (Characters_BladeThrowSpecial_o *__this,Characters_BaseCharacter_o *owner,MethodInfo *method)

{
  (__this->fields).Speed = 80.0;
  (__this->fields).LiveTime = 2.0;
  Characters_BaseAttackSpecial___ctor((Characters_BaseAttackSpecial_o *)__this,owner,(MethodInfo *)0x0);
  (__this->fields).Cooldown = 1.0;
  return;
}


// Characters.BladeThrowSpecial$$Activate
// il2cpp: void Characters_BladeThrowSpecial__Activate (Characters_BladeThrowSpecial_o* __this, const MethodInfo* method);
// 0x182168d00

void Characters_BladeThrowSpecial__Activate(Characters_BladeThrowSpecial_o *__this,MethodInfo *method)

{
  Characters_Human_o *__this_00;
  
  if (Il2CppMethodInitialized_184346cdf == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanAnimations);
    Il2CppMethodInitialized_184346cdf = '\x01';
  }
  (__this->fields)._needActivate = true;
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


// Characters.BladeThrowSpecial$$ActiveFixedUpdate
// il2cpp: void Characters_BladeThrowSpecial__ActiveFixedUpdate (Characters_BladeThrowSpecial_o* __this, const MethodInfo* method);
// 0x182168d80

void Characters_BladeThrowSpecial__ActiveFixedUpdate
               (Characters_BladeThrowSpecial_o *__this,MethodInfo *method)

{
  float *pfVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined4 uVar5;
  undefined8 uVar4;
  byte bVar6;
  float fVar7;
  Characters_Human_o *pCVar8;
  Settings_SoundSettings_o *pSVar9;
  Settings_BoolSetting_o *pSVar10;
  Characters_HumanSetup_o *pCVar11;
  UnityEngine_GameObject_o *pUVar12;
  Characters_BaseUseable_o *pCVar13;
  Utility_BaseComponentCache_o *pUVar14;
  UnityEngine_Transform_o *pUVar15;
  UnityEngine_Vector3_StaticFields *pUVar16;
  UnityEngine_Transform_o *__this_00;
  UnityEngine_Rigidbody_o *__this_01;
  UnityEngine_Vector3_o *pUVar17;
  UnityEngine_Quaternion_o *pUVar18;
  System_String_o *sound;
  float fVar19;
  float fVar20;
  float fVar21;
  UnityEngine_Quaternion_Fields local_88;
  UnityEngine_Quaternion_Fields local_78;
  UnityEngine_Quaternion_Fields local_68;
  UnityEngine_Quaternion_o local_58 [5];
  
  if (Il2CppMethodInitialized_184346ce0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_BladeWeapon);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_get_Value);
    Il2CppMethodInitialized_184346ce0 = '\x01';
  }
  pCVar8 = (__this->fields)._human;
  local_68.x = 0.0;
  local_68.y = 0.0;
  local_68.z = 0.0;
  local_68.w = 0.0;
  if (pCVar8 != (Characters_Human_o *)0x0) {
    if ((pCVar8->fields)._state != 9) {
      (__this->fields).IsActive = false;
    }
    if (((__this->fields)._needActivate == false) ||
       (pfVar1 = &(__this->fields)._activeTimeLeft, 0.4 < *pfVar1 || *pfVar1 == 0.4)) {
      return;
    }
    (__this->fields)._needActivate = false;
    pSVar9 = TypeInfo_Settings_SettingsManager->static_fields->SoundSettings;
    if ((pSVar9 != (Settings_SoundSettings_o *)0x0) &&
       (pSVar10 = (pSVar9->fields).OldBladeEffect, pSVar10 != (Settings_BoolSetting_o *)0x0)) {
      pCVar8 = (__this->fields)._human;
      if ((pSVar10->fields)._value == false) {
        if ((TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
        }
        if (pCVar8 == (Characters_Human_o *)0x0) goto label_182169319;
        sound = TypeInfo_Characters_HumanSounds->static_fields->BladeSwing4;
      }
      else {
        if ((TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
        }
        if (pCVar8 == (Characters_Human_o *)0x0) goto label_182169319;
        sound = TypeInfo_Characters_HumanSounds->static_fields->OldBladeSwing;
      }
      Characters_BaseCharacter__PlaySound((Characters_BaseCharacter_o *)pCVar8,sound,(MethodInfo *)0x0);
      pCVar8 = (__this->fields)._human;
      if (((pCVar8 != (Characters_Human_o *)0x0) &&
          (pCVar11 = (pCVar8->fields).Setup, pCVar11 != (Characters_HumanSetup_o *)0x0)) &&
         (pUVar12 = (pCVar11->fields)._part_blade_l, pUVar12 != (UnityEngine_GameObject_o *)0x0)) {
        UnityEngine_GameObject__SetActive(pUVar12,false,(MethodInfo *)0x0);
        pCVar8 = (__this->fields)._human;
        if (((pCVar8 != (Characters_Human_o *)0x0) &&
            (pCVar11 = (pCVar8->fields).Setup, pCVar11 != (Characters_HumanSetup_o *)0x0)) &&
           (pUVar12 = (pCVar11->fields)._part_blade_r, pUVar12 != (UnityEngine_GameObject_o *)0x0)) {
          UnityEngine_GameObject__SetActive(pUVar12,false,(MethodInfo *)0x0);
          pCVar8 = (__this->fields)._human;
          if ((pCVar8 != (Characters_Human_o *)0x0) &&
             (pCVar13 = (pCVar8->fields).Weapon, pCVar13 != (Characters_BaseUseable_o *)0x0)) {
            bVar6 = (TypeInfo_Characters_BladeWeapon->_2).typeHierarchyDepth;
            if (((pCVar13->klass->_2).typeHierarchyDepth < bVar6) ||
               ((pCVar13->klass->_2).typeHierarchy[(ulonglong)bVar6 - 1] !=
                (Il2CppClass *)TypeInfo_Characters_BladeWeapon)) {
              il2cpp_codegen_raise_invalid_cast_exception(pCVar13);
            }
            *(undefined4 *)((longlong)&(*(uint64_t *)((char *)pCVar13 + 0x40)) + 4) = 0;
            pCVar8 = (__this->fields)._human;
            if (pCVar8 != (Characters_Human_o *)0x0) {
              pUVar17 = (*(pCVar8->klass->vtable)._76_GetAimPoint.methodPtr)
                                  ((UnityEngine_Vector3_o *)&local_88,pCVar8,
                                   (pCVar8->klass->vtable)._76_GetAimPoint.method);
              pCVar8 = (__this->fields)._human;
              if (((pCVar8 != (Characters_Human_o *)0x0) &&
                  (pUVar14 = (pCVar8->fields).Cache, pUVar14 != (Utility_BaseComponentCache_o *)0x0)) &&
                 (pUVar15 = (pUVar14->fields).Transform, pUVar15 != (UnityEngine_Transform_o *)0x0)) {
                fVar7 = (pUVar17->fields).z;
                uVar3._0_4_ = (pUVar17->fields).x;
                uVar3._4_4_ = (pUVar17->fields).y;
                local_78._0_8_ = uVar3;
                pUVar17 = UnityEngine_Transform__get_position
                                    ((UnityEngine_Vector3_o *)&local_78,pUVar15,(MethodInfo *)0x0);
                fVar19 = (float)uVar3 - (pUVar17->fields).x;
                fVar20 = uVar3._4_4_ - (pUVar17->fields).y;
                fVar21 = fVar7 - (pUVar17->fields).z;
                local_88.y = fVar20;
                local_88.x = fVar19;
                local_88.z = fVar21;
                if (Il2CppMethodInitialized_18433de5f == '\0') {
                  il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
                  Il2CppMethodInitialized_18433de5f = '\x01';
                }
                local_78.z = (float)il2cpp_runtime_helper_180546a40(&local_88,0);
                if (local_78.z <= 1e-05) {
                  pUVar16 = TypeInfo_UnityEngine_Vector3->static_fields;
                  fVar19 = (pUVar16->zeroVector).fields.x;
                  fVar20 = (pUVar16->zeroVector).fields.y;
                  local_78.z = (pUVar16->zeroVector).fields.z;
                }
                else {
                  fVar19 = fVar19 / local_78.z;
                  fVar20 = fVar20 / local_78.z;
                  local_78.z = fVar21 / local_78.z;
                }
                pCVar8 = (__this->fields)._human;
                local_78.y = fVar20;
                local_78.x = fVar19;
                local_88.x = 0.0;
                local_88.y = 0.0;
                local_88.z = 0.0;
                if (Il2CppMethodInitialized_18433de5c == '\0') {
                  il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
                  Il2CppMethodInitialized_18433de5c = '\x01';
                }
                pUVar16 = TypeInfo_UnityEngine_Vector3->static_fields;
                local_88.x = (pUVar16->upVector).fields.x;
                local_88.y = (pUVar16->upVector).fields.y;
                local_88.z = (pUVar16->upVector).fields.z;
                pUVar18 = UnityEngine_Quaternion__Internal_LookRotation
                                    (local_58,(UnityEngine_Vector3_o *)&local_78,
                                     (UnityEngine_Vector3_o *)&local_88,(MethodInfo *)0x0);
                local_68.x = (pUVar18->fields).x;
                local_68.y = (pUVar18->fields).y;
                local_68.z = (pUVar18->fields).z;
                local_68.w = (pUVar18->fields).w;
                pUVar17 = UnityEngine_Quaternion__Internal_ToEulerRad
                                    ((UnityEngine_Vector3_o *)&local_88,(UnityEngine_Quaternion_o *)&local_68,
                                     (MethodInfo *)0x0);
                uVar2 = (pUVar17->fields).x;
                uVar5 = (pUVar17->fields).y;
                local_78.y = (float)uVar5 * 57.29578;
                local_78.x = (float)uVar2 * 57.29578;
                local_78.z = (pUVar17->fields).z * 57.29578;
                pUVar17 = UnityEngine_Quaternion__Internal_MakePositive
                                    ((UnityEngine_Vector3_o *)&local_88,(UnityEngine_Vector3_o *)&local_78,
                                     (MethodInfo *)0x0);
                if (pCVar8 != (Characters_Human_o *)0x0) {
                  (pCVar8->fields).TargetAngle = (pUVar17->fields).y;
                  pCVar8 = (__this->fields)._human;
                  if (pCVar8 != (Characters_Human_o *)0x0) {
                    local_88._8_8_ = local_88._8_8_ & 0xffffffff00000000;
                    local_88._0_8_ = (ulonglong)(uint)((pCVar8->fields).TargetAngle * 0.017453292) << 0x20;
                    pUVar18 = UnityEngine_Quaternion__Internal_FromEulerRad
                                        (local_58,(UnityEngine_Vector3_o *)&local_88,(MethodInfo *)0x0);
                    fVar19 = (pUVar18->fields).y;
                    fVar20 = (pUVar18->fields).z;
                    fVar21 = (pUVar18->fields).w;
                    (pCVar8->fields)._targetRotation.fields.x = (pUVar18->fields).x;
                    (pCVar8->fields)._targetRotation.fields.y = fVar19;
                    (pCVar8->fields)._targetRotation.fields.z = fVar20;
                    (pCVar8->fields)._targetRotation.fields.w = fVar21;
                    pCVar8 = (__this->fields)._human;
                    if (((pCVar8 != (Characters_Human_o *)0x0) &&
                        (pUVar14 = (pCVar8->fields).Cache, pUVar14 != (Utility_BaseComponentCache_o *)0x0)) &&
                       (pUVar15 = (((((__this->fields)._human)->fields).Cache)->fields).Transform,
                       pUVar15 != (UnityEngine_Transform_o *)0x0)) {
                      __this_00 = (pUVar14->fields).Transform;
                      pUVar18 = UnityEngine_Transform__get_rotation(local_58,pUVar15,(MethodInfo *)0x0);
                      pCVar8 = (__this->fields)._human;
                      if (pCVar8 != (Characters_Human_o *)0x0) {
                        local_78.x = (pCVar8->fields)._targetRotation.fields.x;
                        local_78.y = (pCVar8->fields)._targetRotation.fields.y;
                        local_78.z = (pCVar8->fields)._targetRotation.fields.z;
                        local_78.w = (pCVar8->fields)._targetRotation.fields.w;
                        local_88.x = (pUVar18->fields).x;
                        local_88.y = (pUVar18->fields).y;
                        local_88.z = (pUVar18->fields).z;
                        local_88.w = (pUVar18->fields).w;
                        fVar19 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
                        pUVar18 = UnityEngine_Quaternion__Internal_Lerp
                                            (local_58,(UnityEngine_Quaternion_o *)&local_88,
                                             (UnityEngine_Quaternion_o *)&local_78,fVar19 * 30.0,
                                             (MethodInfo *)0x0);
                        local_78.x = (pUVar18->fields).x;
                        local_78.y = (pUVar18->fields).y;
                        local_78.z = (pUVar18->fields).z;
                        local_78.w = (pUVar18->fields).w;
                        UnityEngine_Transform__set_rotation
                                  (__this_00,(UnityEngine_Quaternion_o *)&local_78,(MethodInfo *)0x0);
                        pCVar8 = (__this->fields)._human;
                        if (((pCVar8 != (Characters_Human_o *)0x0) &&
                            (pUVar14 = (pCVar8->fields).Cache, pUVar14 != (Utility_BaseComponentCache_o *)0x0)
                            ) && (__this_01 = (pUVar14->fields).Rigidbody,
                                 __this_01 != (UnityEngine_Rigidbody_o *)0x0)) {
                          pUVar17 = UnityEngine_Rigidbody__get_linearVelocity
                                              ((UnityEngine_Vector3_o *)&local_88,__this_01,(MethodInfo *)0x0)
                          ;
                          uVar4._0_4_ = (pUVar17->fields).x;
                          uVar4._4_4_ = (pUVar17->fields).y;
                          fVar19 = (pUVar17->fields).z;
                          local_88._0_8_ = uVar3;
                          local_78._0_8_ = uVar4;
                          local_78.z = fVar19;
                          local_88.z = fVar7;
                          Characters_BladeThrowSpecial__SpawnBladeProjectile
                                    (__this,true,(UnityEngine_Vector3_o *)&local_88,
                                     (UnityEngine_Vector3_o *)&local_78,(MethodInfo *)0x0);
                          local_78.z = fVar19;
                          local_88.z = fVar7;
                          local_88._0_8_ = uVar3;
                          local_78._0_8_ = uVar4;
                          Characters_BladeThrowSpecial__SpawnBladeProjectile
                                    (__this,false,(UnityEngine_Vector3_o *)&local_88,
                                     (UnityEngine_Vector3_o *)&local_78,(MethodInfo *)0x0);
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
      }
    }
  }
label_182169319:
  ThrowNullReferenceException();
}


// Characters.BladeThrowSpecial$$SpawnBladeProjectile
// il2cpp: void Characters_BladeThrowSpecial__SpawnBladeProjectile (Characters_BladeThrowSpecial_o* __this, bool left, UnityEngine_Vector3_o target, UnityEngine_Vector3_o velocity, const MethodInfo* method);
// 0x182169330

void Characters_BladeThrowSpecial__SpawnBladeProjectile
               (Characters_BladeThrowSpecial_o *__this,bool left,UnityEngine_Vector3_o *target,
               UnityEngine_Vector3_o *velocity,MethodInfo *method)

{
  float fVar1;
  float liveTime;
  undefined8 uVar2;
  byte bVar3;
  float fVar4;
  Characters_Human_o *pCVar5;
  Utility_BaseComponentCache_o *pUVar6;
  UnityEngine_Transform_o *pUVar7;
  UnityEngine_Vector3_StaticFields *pUVar8;
  System_String_o *name;
  UnityEngine_Rigidbody_o *__this_00;
  undefined8 uVar9;
  undefined8 uVar10;
  UnityEngine_Vector3_o *pUVar11;
  UnityEngine_Quaternion_o *pUVar12;
  Photon_Pun_PhotonView_o *pPVar13;
  Projectiles_BaseProjectile_o *pPVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  UnityEngine_Vector3_Fields local_f8;
  UnityEngine_Vector3_o local_e8;
  UnityEngine_Vector3_Fields local_d8;
  UnityEngine_Quaternion_Fields local_c8 [11];
  
  if (Il2CppMethodInitialized_184346ce1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Projectiles_BladeThrowProjectile);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Projectiles_ProjectilePrefabs);
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_184346ce1 = '\x01';
  }
  pCVar5 = (__this->fields)._human;
  if (((pCVar5 != (Characters_Human_o *)0x0) &&
      (pUVar6 = (pCVar5->fields).Cache, pUVar6 != (Utility_BaseComponentCache_o *)0x0)) &&
     (pUVar7 = (pUVar6->fields).Transform, pUVar7 != (UnityEngine_Transform_o *)0x0)) {
    pUVar11 = UnityEngine_Transform__get_position((UnityEngine_Vector3_o *)&local_d8,pUVar7,(MethodInfo *)0x0)
    ;
    fVar16 = (pUVar11->fields).x;
    fVar18 = (pUVar11->fields).y;
    fVar20 = (pUVar11->fields).z;
    if (Il2CppMethodInitialized_18433de5c == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
      Il2CppMethodInitialized_18433de5c = '\x01';
    }
    pCVar5 = (__this->fields)._human;
    if (pCVar5 != (Characters_Human_o *)0x0) {
      pUVar8 = TypeInfo_UnityEngine_Vector3->static_fields;
      fVar16 = (pUVar8->upVector).fields.x * 2.5 + fVar16;
      fVar18 = (pUVar8->upVector).fields.y * 2.5 + fVar18;
      fVar20 = (pUVar8->upVector).fields.z * 2.5 + fVar20;
      pUVar6 = (pCVar5->fields).Cache;
      if (left) {
        if ((pUVar6 == (Utility_BaseComponentCache_o *)0x0) ||
           (pUVar7 = (pUVar6->fields).Transform, pUVar7 == (UnityEngine_Transform_o *)0x0))
        goto label_1821698a0;
        pUVar11 = UnityEngine_Transform__get_right
                            ((UnityEngine_Vector3_o *)&local_d8,pUVar7,(MethodInfo *)0x0);
        fVar16 = fVar16 - (pUVar11->fields).x * 0.5;
        fVar20 = fVar20 - (pUVar11->fields).z * 0.5;
        fVar18 = fVar18 - (pUVar11->fields).y * 0.5;
      }
      else {
        if ((pUVar6 == (Utility_BaseComponentCache_o *)0x0) ||
           (pUVar7 = (pUVar6->fields).Transform, pUVar7 == (UnityEngine_Transform_o *)0x0))
        goto label_1821698a0;
        pUVar11 = UnityEngine_Transform__get_right
                            ((UnityEngine_Vector3_o *)&local_d8,pUVar7,(MethodInfo *)0x0);
        fVar16 = (pUVar11->fields).x * 0.5 + fVar16;
        fVar18 = (pUVar11->fields).y * 0.5 + fVar18;
        fVar20 = (pUVar11->fields).z * 0.5 + fVar20;
      }
      fVar17 = (target->fields).x - fVar16;
      fVar19 = (target->fields).y - fVar18;
      fVar21 = (target->fields).z - fVar20;
      local_f8.y = fVar19;
      local_f8.x = fVar17;
      local_f8.z = fVar21;
      if (Il2CppMethodInitialized_18433de5f == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
        Il2CppMethodInitialized_18433de5f = '\x01';
      }
      fVar15 = (float)il2cpp_runtime_helper_180546a40(&local_f8,0);
      if (fVar15 <= 1e-05) {
        pUVar8 = TypeInfo_UnityEngine_Vector3->static_fields;
        fVar17 = (pUVar8->zeroVector).fields.x;
        fVar19 = (pUVar8->zeroVector).fields.y;
        fVar21 = (pUVar8->zeroVector).fields.z;
      }
      else {
        fVar17 = fVar17 / fVar15;
        fVar19 = fVar19 / fVar15;
        fVar21 = fVar21 / fVar15;
      }
      fVar15 = fVar19 * (velocity->fields).y + fVar17 * (velocity->fields).x + fVar21 * (velocity->fields).z;
      if (fVar15 <= 0.0) {
        fVar15 = 0.0;
      }
      fVar1 = (__this->fields).Speed;
      if ((TypeInfo_Projectiles_ProjectilePrefabs->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Projectiles_ProjectilePrefabs);
      }
      name = TypeInfo_Projectiles_ProjectilePrefabs->static_fields->BladeThrow;
      local_f8.x = 0.0;
      local_f8.y = 0.0;
      local_f8.z = 0.0;
      local_e8.fields.x = fVar17;
      local_e8.fields.y = fVar19;
      local_e8.fields.z = fVar21;
      if (Il2CppMethodInitialized_18433de5c == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
        Il2CppMethodInitialized_18433de5c = '\x01';
      }
      pUVar8 = TypeInfo_UnityEngine_Vector3->static_fields;
      local_f8.x = (pUVar8->upVector).fields.x;
      local_f8.y = (pUVar8->upVector).fields.y;
      local_f8.z = (pUVar8->upVector).fields.z;
      pUVar12 = UnityEngine_Quaternion__Internal_LookRotation
                          ((UnityEngine_Quaternion_o *)local_c8,&local_e8,(UnityEngine_Vector3_o *)&local_f8,
                           (MethodInfo *)0x0);
      uVar9._0_4_ = (pUVar12->fields).x;
      uVar9._4_4_ = (pUVar12->fields).y;
      uVar10._0_4_ = (pUVar12->fields).z;
      uVar10._4_4_ = (pUVar12->fields).w;
      if (Il2CppMethodInitialized_18433dbea == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
        Il2CppMethodInitialized_18433dbea = '\x01';
      }
      pCVar5 = (__this->fields)._human;
      if (pCVar5 != (Characters_Human_o *)0x0) {
        liveTime = (__this->fields).LiveTime;
        pUVar8 = TypeInfo_UnityEngine_Vector3->static_fields;
        uVar2._0_4_ = (pUVar8->zeroVector).fields.x;
        uVar2._4_4_ = (pUVar8->zeroVector).fields.y;
        fVar4 = (pUVar8->zeroVector).fields.z;
        pPVar13 = Photon_Pun_MonoBehaviourPun__get_photonView
                            ((Photon_Pun_MonoBehaviourPun_o *)pCVar5,(MethodInfo *)0x0);
        if (pPVar13 != (Photon_Pun_PhotonView_o *)0x0) {
          fVar15 = fVar15 + fVar1;
          local_e8.fields.x = fVar17 * fVar15;
          local_e8.fields.y = fVar19 * fVar15;
          local_e8.fields.z = fVar21 * fVar15;
          local_d8.y = fVar18;
          local_d8.x = fVar16;
          local_f8._0_8_ = uVar2;
          local_f8.z = fVar4;
          local_d8.z = fVar20;
          local_c8[0]._0_8_ = uVar9;
          local_c8[0]._8_8_ = uVar10;
          pPVar14 = Projectiles_ProjectileSpawner__Spawn
                              (name,(UnityEngine_Vector3_o *)&local_d8,(UnityEngine_Quaternion_o *)local_c8,
                               &local_e8,(UnityEngine_Vector3_o *)&local_f8,liveTime,
                               (pPVar13->fields).viewIdField,"",(System_Object_array *)0x0,
                               (MethodInfo *)0x0);
          pCVar5 = (__this->fields)._human;
          if (((pCVar5 != (Characters_Human_o *)0x0) &&
              (pUVar6 = (pCVar5->fields).Cache, pUVar6 != (Utility_BaseComponentCache_o *)0x0)) &&
             (__this_00 = (pUVar6->fields).Rigidbody, __this_00 != (UnityEngine_Rigidbody_o *)0x0)) {
            pUVar11 = UnityEngine_Rigidbody__get_linearVelocity
                                ((UnityEngine_Vector3_o *)&local_d8,__this_00,(MethodInfo *)0x0);
            if (pPVar14 != (Projectiles_BaseProjectile_o *)0x0) {
              bVar3 = (TypeInfo_Projectiles_BladeThrowProjectile->_2).typeHierarchyDepth;
              if ((bVar3 <= (pPVar14->klass->_2).typeHierarchyDepth) &&
                 ((pPVar14->klass->_2).typeHierarchy[(ulonglong)bVar3 - 1] ==
                  (Il2CppClass *)TypeInfo_Projectiles_BladeThrowProjectile)) {
                fVar16 = (pUVar11->fields).z;
                (*(uint64_t *)((char *)pPVar14 + 0xf8)) =
                     *(System_Threading_CancellationTokenSource_o **)&pUVar11->fields;
                *(float *)&(*(uint64_t *)((char *)pPVar14 + 0x100)) = fVar16;
                return;
              }
              il2cpp_codegen_raise_invalid_cast_exception(pPVar14,TypeInfo_Projectiles_BladeThrowProjectile);
            }
          }
        }
      }
    }
  }
label_1821698a0:
  ThrowNullReferenceException();
}


