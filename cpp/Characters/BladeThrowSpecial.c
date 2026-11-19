// Type: Characters.BladeThrowSpecial
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/Characters/BladeThrowSpecial.cs
// Prior real C# source (older reference): Assets/Scripts/Characters/Human/Specials/BladeThrowSpecial.cs
// --------------------------------

// Characters.BladeThrowSpecial$$get_ActiveTime
// il2cpp: float Characters_BladeThrowSpecial__get_ActiveTime (Characters_BladeThrowSpecial_o* __this, const MethodInfo* method);
// 0x5c09050

float Characters_BladeThrowSpecial__get_ActiveTime(Characters_BladeThrowSpecial_o *__this,MethodInfo *method)

{
  return 0.8;
}


// Characters.BladeThrowSpecial$$.ctor
// il2cpp: void Characters_BladeThrowSpecial___ctor (Characters_BladeThrowSpecial_o* __this, Characters_BaseCharacter_o* owner, const MethodInfo* method);
// 0x5c09060

void Characters_BladeThrowSpecial___ctor
               (Characters_BladeThrowSpecial_o *__this,Characters_BaseCharacter_o *owner,MethodInfo *method)

{
  (__this->fields).Speed = 80.0;
  (__this->fields).LiveTime = 2.0;
  Characters_BaseAttackSpecial___ctor((Characters_BaseAttackSpecial_o *)__this,owner,method);
  (__this->fields).Cooldown = 1.0;
  return;
}


// Characters.BladeThrowSpecial$$Activate
// il2cpp: void Characters_BladeThrowSpecial__Activate (Characters_BladeThrowSpecial_o* __this, const MethodInfo* method);
// 0x5c09080

void Characters_BladeThrowSpecial__Activate(Characters_BladeThrowSpecial_o *__this,MethodInfo *method)

{
  Characters_Human_o *__this_00;
  
  if (Il2CppMethodInitialized_075476af == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanAnimations);
    Il2CppMethodInitialized_075476af = '\x01';
  }
  (__this->fields)._needActivate = true;
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


// Characters.BladeThrowSpecial$$ActiveFixedUpdate
// il2cpp: void Characters_BladeThrowSpecial__ActiveFixedUpdate (Characters_BladeThrowSpecial_o* __this, const MethodInfo* method);
// 0x5c090f0

void Characters_BladeThrowSpecial__ActiveFixedUpdate
               (Characters_BladeThrowSpecial_o *__this,MethodInfo *method)

{
  float *pfVar1;
  byte bVar2;
  uint32_t uVar3;
  Characters_Human_o *pCVar4;
  Settings_SoundSettings_o *pSVar5;
  Settings_BoolSetting_o *pSVar6;
  Characters_HumanSetup_o *pCVar7;
  UnityEngine_GameObject_o *pUVar8;
  Characters_BaseUseable_o *pCVar9;
  Utility_BaseComponentCache_o *pUVar10;
  UnityEngine_Transform_o *pUVar11;
  UnityEngine_Rigidbody_o *__this_00;
  undefined1 auVar12 [16];
  System_String_o **ppSVar13;
  UnityEngine_Vector3_StaticFields *pUVar14;
  MethodInfo *method_00;
  MethodInfo *method_01;
  float fVar15;
  undefined4 extraout_XMM0_Db;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Dc;
  float extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dd;
  float extraout_XMM0_Dd_00;
  float fVar17;
  undefined1 auVar18 [16];
  UnityEngine_Quaternion_Fields UVar19;
  UnityEngine_Quaternion_o UVar20;
  UnityEngine_Vector3_o UVar21;
  UnityEngine_Vector3_o UVar22;
  UnityEngine_Vector3_o euler;
  UnityEngine_Vector3_o target;
  UnityEngine_Quaternion_Fields UStack_68;
  undefined1 auStack_58 [12];
  float fStack_4c;
  undefined1 auStack_48 [8];
  float fStack_40;
  float fStack_3c;
  UnityEngine_Quaternion_o UStack_38;
  UnityEngine_Quaternion_Fields UStack_28;
  
  if (Il2CppMethodInitialized_075476b0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_BladeWeapon);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_get_Value);
    Il2CppMethodInitialized_075476b0 = '\x01';
  }
  UStack_38.fields = (UnityEngine_Quaternion_Fields)ZEXT816(0);
  pCVar4 = (__this->fields)._human;
  if (pCVar4 == (Characters_Human_o *)0x0) goto label_05c0967a;
  if ((pCVar4->fields)._state != 9) {
    (__this->fields).IsActive = false;
  }
  if ((__this->fields)._needActivate == false) {
    return;
  }
  pfVar1 = &(__this->fields)._activeTimeLeft;
  if (0.4 < *pfVar1 || *pfVar1 == 0.4) {
    return;
  }
  (__this->fields)._needActivate = false;
  pSVar5 = TypeInfo_Settings_SettingsManager->static_fields->SoundSettings;
  if ((pSVar5 == (Settings_SoundSettings_o *)0x0) ||
     (pSVar6 = (pSVar5->fields).OldBladeEffect, pSVar6 == (Settings_BoolSetting_o *)0x0)) goto label_05c0967a;
  uVar3 = (TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor;
  if ((pSVar6->fields)._value == false) {
    if (uVar3 == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
    }
    ppSVar13 = &TypeInfo_Characters_HumanSounds->static_fields->BladeSwing4;
  }
  else {
    if (uVar3 == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
    }
    ppSVar13 = &TypeInfo_Characters_HumanSounds->static_fields->OldBladeSwing;
  }
  Characters_BaseCharacter__PlaySound((Characters_BaseCharacter_o *)pCVar4,*ppSVar13,(MethodInfo *)0x0);
  pCVar4 = (__this->fields)._human;
  if (((pCVar4 == (Characters_Human_o *)0x0) ||
      (pCVar7 = (pCVar4->fields).Setup, pCVar7 == (Characters_HumanSetup_o *)0x0)) ||
     (pUVar8 = (pCVar7->fields)._part_blade_l, pUVar8 == (UnityEngine_GameObject_o *)0x0)) goto label_05c0967a;
  UnityEngine_GameObject__SetActive(pUVar8,false,(MethodInfo *)0x0);
  pCVar4 = (__this->fields)._human;
  if (((pCVar4 == (Characters_Human_o *)0x0) ||
      (pCVar7 = (pCVar4->fields).Setup, pCVar7 == (Characters_HumanSetup_o *)0x0)) ||
     (pUVar8 = (pCVar7->fields)._part_blade_r, pUVar8 == (UnityEngine_GameObject_o *)0x0)) goto label_05c0967a;
  UnityEngine_GameObject__SetActive(pUVar8,false,(MethodInfo *)0x0);
  pCVar4 = (__this->fields)._human;
  if ((pCVar4 == (Characters_Human_o *)0x0) ||
     (pCVar9 = (pCVar4->fields).Weapon, pCVar9 == (Characters_BaseUseable_o *)0x0)) goto label_05c0967a;
  bVar2 = (TypeInfo_Characters_BladeWeapon->_2).typeHierarchyDepth;
  if (((pCVar9->klass->_2).typeHierarchyDepth < bVar2) ||
     ((pCVar9->klass->_2).typeHierarchy[(ulong)bVar2 - 1] != (Il2CppClass *)TypeInfo_Characters_BladeWeapon))
  {
    il2cpp_codegen_raise_invalid_cast_exception(pCVar9);
  }
  *(undefined4 *)&(*(uint64_t *)((char *)pCVar9 + 0x40)) = 0;
  UVar21 = (*(pCVar4->klass->vtable)._76_GetAimPoint.methodPtr)
                     (pCVar4,(pCVar4->klass->vtable)._76_GetAimPoint.method);
  fStack_40 = (float)extraout_XMM0_Dc;
  auStack_48 = UVar21.fields._0_8_;
  fStack_3c = (float)extraout_XMM0_Dd;
  pCVar4 = (__this->fields)._human;
  if (((pCVar4 == (Characters_Human_o *)0x0) ||
      (pUVar10 = (pCVar4->fields).Cache, pUVar10 == (Utility_BaseComponentCache_o *)0x0)) ||
     (pUVar11 = (pUVar10->fields).Transform, pUVar11 == (UnityEngine_Transform_o *)0x0)) goto label_05c0967a;
  UVar22 = UnityEngine_Transform__get_position(pUVar11,(MethodInfo *)0x0);
  if (Il2CppMethodInitialized_0753e72d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    Il2CppMethodInitialized_0753e72d = '\x01';
    UStack_68.x = 0.0;
    UStack_68.y = 0.0;
  }
  else {
    UStack_68.x = 0.0;
    UStack_68.y = 0.0;
  }
  UStack_68.x = 0.0;
  UStack_68.y = 0.0;
  if (g_data_0753e729 == '\0') {
    UStack_68.x = 0.0;
    UStack_68.y = 0.0;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
    g_data_0753e729 = '\x01';
  }
  auVar18._0_4_ = (float)auStack_48._0_4_ - UVar22.fields.x;
  auVar18._4_4_ = (float)auStack_48._4_4_ - UVar22.fields.y;
  auVar18._8_4_ = fStack_40 - extraout_XMM0_Dc_00;
  auVar18._12_4_ = fStack_3c - extraout_XMM0_Dd_00;
  fVar17 = UVar21.fields.z - UVar22.fields.z;
  if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
  }
  uVar16 = 0;
  fVar15 = fVar17 * fVar17 + auVar18._4_4_ * auVar18._4_4_ + auVar18._0_4_ * auVar18._0_4_;
  if (fVar15 < 0.0) {
    fVar15 = sqrtf(fVar15);
    uVar16 = extraout_XMM0_Db;
    if (1e-05 < fVar15) goto label_05c093e7;
label_05c093ab:
    pUVar14 = TypeInfo_UnityEngine_Vector3->static_fields;
    UStack_68.z = (pUVar14->zeroVector).fields.z;
  }
  else {
    fVar15 = SQRT(fVar15);
    if (fVar15 <= 1e-05) goto label_05c093ab;
label_05c093e7:
    UStack_68.z = fVar17 / fVar15;
    auVar12._4_4_ = fVar15;
    auVar12._0_4_ = fVar15;
    auVar12._8_4_ = uVar16;
    auVar12._12_4_ = uVar16;
    auVar18 = divps(auVar18,auVar12);
    UStack_68.x = auVar18._0_4_;
    UStack_68.y = auVar18._4_4_;
    pUVar14 = (UnityEngine_Vector3_StaticFields *)&UStack_68;
  }
  UStack_68.x = (pUVar14->zeroVector).fields.x;
  UStack_68.y = (pUVar14->zeroVector).fields.y;
  pCVar4 = (__this->fields)._human;
  if (Il2CppMethodInitialized_0753e72c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    Il2CppMethodInitialized_0753e72c = '\x01';
  }
  pUVar14 = TypeInfo_UnityEngine_Vector3->static_fields;
  auStack_58._0_4_ = (pUVar14->upVector).fields.x;
  auStack_58._4_4_ = (pUVar14->upVector).fields.y;
  auStack_58._8_4_ = (pUVar14->upVector).fields.z;
  UStack_38 = UnityEngine_Quaternion__Internal_LookRotation
                        ((UnityEngine_Vector3_o *)&UStack_68,(UnityEngine_Vector3_o *)auStack_58,
                         (MethodInfo *)0x0);
  UVar22 = UnityEngine_Quaternion__Internal_ToEulerRad(&UStack_38,(MethodInfo *)0x0);
  euler.fields.x = UVar22.fields.x * 57.29578;
  euler.fields.y = UVar22.fields.y * 57.29578;
  euler.fields.z = UVar22.fields.z * 57.29578;
  UVar22 = UnityEngine_Quaternion__Internal_MakePositive(euler,(MethodInfo *)0x0);
  if (pCVar4 != (Characters_Human_o *)0x0) {
    (pCVar4->fields).TargetAngle = UVar22.fields.y;
    pCVar4 = (__this->fields)._human;
    if (pCVar4 != (Characters_Human_o *)0x0) {
      UStack_68._0_8_ = (ulong)(uint)((pCVar4->fields).TargetAngle * 0.017453292) << 0x20;
      UStack_68.z = 0.0;
      UVar19 = (UnityEngine_Quaternion_Fields)
               UnityEngine_Quaternion__Internal_FromEulerRad
                         ((UnityEngine_Vector3_o *)&UStack_68,(MethodInfo *)0x0);
      (pCVar4->fields)._targetRotation.fields = UVar19;
      pCVar4 = (__this->fields)._human;
      if (((pCVar4 != (Characters_Human_o *)0x0) &&
          (pUVar10 = (pCVar4->fields).Cache, pUVar10 != (Utility_BaseComponentCache_o *)0x0)) &&
         (pUVar11 = (pUVar10->fields).Transform, pUVar11 != (UnityEngine_Transform_o *)0x0)) {
        UVar20 = UnityEngine_Transform__get_rotation(pUVar11,(MethodInfo *)0x0);
        pCVar4 = (__this->fields)._human;
        if (pCVar4 != (Characters_Human_o *)0x0) {
          UStack_28.x = (pCVar4->fields)._targetRotation.fields.x;
          UStack_28.y = (pCVar4->fields)._targetRotation.fields.y;
          UStack_28.z = (pCVar4->fields)._targetRotation.fields.z;
          UStack_28.w = (pCVar4->fields)._targetRotation.fields.w;
          fVar17 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
          UStack_68.z = UVar20.fields.z;
          UStack_68.w = UVar20.fields.w;
          auStack_58._0_4_ = UStack_28.x;
          auStack_58._4_4_ = UStack_28.y;
          auStack_58._8_4_ = UStack_28.z;
          fStack_4c = UStack_28.w;
          UStack_68._0_8_ = UVar20.fields._0_8_;
          UVar20 = UnityEngine_Quaternion__Internal_Lerp
                             ((UnityEngine_Quaternion_o *)&UStack_68,(UnityEngine_Quaternion_o *)auStack_58,
                              fVar17 * 30.0,(MethodInfo *)0x0);
          UnityEngine_Transform__set_rotation(pUVar11,UVar20,(MethodInfo *)0x0);
          pCVar4 = (__this->fields)._human;
          if (((pCVar4 != (Characters_Human_o *)0x0) &&
              (pUVar10 = (pCVar4->fields).Cache, pUVar10 != (Utility_BaseComponentCache_o *)0x0)) &&
             (__this_00 = (pUVar10->fields).Rigidbody, __this_00 != (UnityEngine_Rigidbody_o *)0x0)) {
            UVar22 = UnityEngine_Rigidbody__get_linearVelocity(__this_00,(MethodInfo *)0x0);
            UVar21.fields.x = (float)auStack_48._0_4_;
            UVar21.fields.y = (float)auStack_48._4_4_;
            Characters_BladeThrowSpecial__SpawnBladeProjectile(__this,true,UVar21,UVar22,method_00);
            target.fields.z = UVar21.fields.z;
            target.fields.x = (float)auStack_48._0_4_;
            target.fields.y = (float)auStack_48._4_4_;
            Characters_BladeThrowSpecial__SpawnBladeProjectile(__this,false,target,UVar22,method_01);
            return;
          }
        }
      }
    }
  }
label_05c0967a:
  ThrowNullReferenceException();
}


// Characters.BladeThrowSpecial$$SpawnBladeProjectile
// il2cpp: void Characters_BladeThrowSpecial__SpawnBladeProjectile (Characters_BladeThrowSpecial_o* __this, bool left, UnityEngine_Vector3_o target, UnityEngine_Vector3_o velocity, const MethodInfo* method);
// 0x5c09690

void Characters_BladeThrowSpecial__SpawnBladeProjectile
               (Characters_BladeThrowSpecial_o *__this,bool left,UnityEngine_Vector3_o target,
               UnityEngine_Vector3_o velocity,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar3;
  undefined8 uVar2;
  byte bVar4;
  Characters_Human_o *pCVar5;
  Utility_BaseComponentCache_o *pUVar6;
  UnityEngine_Transform_o *pUVar7;
  System_String_o *name;
  UnityEngine_Rigidbody_o *__this_00;
  undefined1 auVar8 [16];
  UnityEngine_Vector3_StaticFields *pUVar9;
  Photon_Pun_PhotonView_o *pPVar10;
  Projectiles_BaseProjectile_o *pPVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined4 uVar15;
  undefined4 extraout_XMM0_Db;
  float in_XMM0_Dc;
  float extraout_XMM0_Dc;
  float extraout_XMM0_Dc_00;
  float extraout_XMM0_Dc_01;
  undefined4 extraout_XMM0_Dc_02;
  float in_XMM0_Dd;
  float extraout_XMM0_Dd;
  float extraout_XMM0_Dd_00;
  float extraout_XMM0_Dd_01;
  float fVar16;
  undefined4 extraout_XMM0_Dd_02;
  float fVar17;
  undefined4 uVar18;
  float fVar19;
  undefined4 in_XMM2_Dc;
  undefined4 in_XMM2_Dd;
  undefined1 auVar20 [16];
  UnityEngine_Vector3_o UVar21;
  UnityEngine_Vector3_o UVar22;
  UnityEngine_Quaternion_o UVar23;
  UnityEngine_Vector3_o velocity_00;
  float local_a8;
  float fStack_a4;
  undefined8 local_98;
  UnityEngine_Vector3_Fields local_80;
  float local_70;
  float local_6c;
  float local_68;
  undefined1 local_58 [16];
  UnityEngine_Vector3_Fields local_48;
  undefined1 local_38 [16];
  undefined1 local_28 [16];
  
  local_68 = velocity.fields.z;
  local_58._8_4_ = in_XMM2_Dc;
  local_58._0_8_ = velocity.fields._0_8_;
  local_58._12_4_ = in_XMM2_Dd;
  if (Il2CppMethodInitialized_075476b1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Projectiles_BladeThrowProjectile);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Projectiles_ProjectilePrefabs);
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_075476b1 = '\x01';
  }
  pCVar5 = (__this->fields)._human;
  if (((pCVar5 == (Characters_Human_o *)0x0) ||
      (pUVar6 = (pCVar5->fields).Cache, pUVar6 == (Utility_BaseComponentCache_o *)0x0)) ||
     (pUVar7 = (pUVar6->fields).Transform, pUVar7 == (UnityEngine_Transform_o *)0x0)) goto label_05c09ba0;
  UVar21 = UnityEngine_Transform__get_position(pUVar7,(MethodInfo *)0x0);
  if (Il2CppMethodInitialized_0753e72c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    Il2CppMethodInitialized_0753e72c = '\x01';
  }
  pUVar9 = TypeInfo_UnityEngine_Vector3->static_fields;
  uVar1 = (pUVar9->upVector).fields.x;
  uVar3 = (pUVar9->upVector).fields.y;
  fVar19 = (pUVar9->upVector).fields.z;
  pCVar5 = (__this->fields)._human;
  if (left) {
    if (((pCVar5 == (Characters_Human_o *)0x0) ||
        (pUVar6 = (pCVar5->fields).Cache, pUVar6 == (Utility_BaseComponentCache_o *)0x0)) ||
       (pUVar7 = (pUVar6->fields).Transform, pUVar7 == (UnityEngine_Transform_o *)0x0)) goto label_05c09ba0;
    UVar22 = UnityEngine_Transform__get_right(pUVar7,(MethodInfo *)0x0);
    fVar17 = UVar22.fields.z * -0.5;
    fVar12 = UVar22.fields.x * -0.5;
    fVar14 = UVar22.fields.y * -0.5;
    fVar13 = extraout_XMM0_Dc_00;
    fVar16 = extraout_XMM0_Dd_00;
  }
  else {
    if (((pCVar5 == (Characters_Human_o *)0x0) ||
        (pUVar6 = (pCVar5->fields).Cache, pUVar6 == (Utility_BaseComponentCache_o *)0x0)) ||
       (pUVar7 = (pUVar6->fields).Transform, pUVar7 == (UnityEngine_Transform_o *)0x0)) goto label_05c09ba0;
    UVar22 = UnityEngine_Transform__get_right(pUVar7,(MethodInfo *)0x0);
    fVar17 = UVar22.fields.z * 0.5;
    fVar12 = UVar22.fields.x * 0.5;
    fVar14 = UVar22.fields.y * 0.5;
    fVar13 = extraout_XMM0_Dc_01;
    fVar16 = extraout_XMM0_Dd_01;
  }
  fVar12 = UVar21.fields.x + (float)uVar1 * 2.5 + fVar12;
  fVar14 = UVar21.fields.y + (float)uVar3 * 2.5 + fVar14;
  fVar17 = UVar21.fields.z + fVar19 * 2.5 + fVar17;
  local_a8 = target.fields.x;
  fStack_a4 = target.fields.y;
  if (Il2CppMethodInitialized_0753e72d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    Il2CppMethodInitialized_0753e72d = '\x01';
    local_80.x = 0.0;
    local_80.y = 0.0;
  }
  else {
    local_80.x = 0.0;
    local_80.y = 0.0;
  }
  local_80.x = 0.0;
  local_80.y = 0.0;
  if (g_data_0753e729 == '\0') {
    local_80.x = 0.0;
    local_80.y = 0.0;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
    g_data_0753e729 = '\x01';
  }
  auVar20._0_4_ = local_a8 - fVar12;
  auVar20._4_4_ = fStack_a4 - fVar14;
  auVar20._8_4_ = in_XMM0_Dc - (extraout_XMM0_Dc + 0.0 + fVar13 * 0.0);
  auVar20._12_4_ = in_XMM0_Dd - (extraout_XMM0_Dd + 0.0 + fVar16 * 0.0);
  fVar19 = target.fields.z - fVar17;
  if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
  }
  uVar15 = 0;
  fVar13 = fVar19 * fVar19 + auVar20._4_4_ * auVar20._4_4_ + auVar20._0_4_ * auVar20._0_4_;
  if (fVar13 < 0.0) {
    fVar13 = sqrtf(fVar13);
    uVar15 = extraout_XMM0_Db;
    if (fVar13 <= 1e-05) goto label_05c098c3;
label_05c098fd:
    fVar19 = fVar19 / fVar13;
    auVar8._4_4_ = fVar13;
    auVar8._0_4_ = fVar13;
    auVar8._8_4_ = uVar15;
    auVar8._12_4_ = uVar15;
    auVar20 = divps(auVar20,auVar8);
    local_80.x = auVar20._0_4_;
    local_80.y = auVar20._4_4_;
    pUVar9 = (UnityEngine_Vector3_StaticFields *)&local_80;
  }
  else {
    fVar13 = SQRT(fVar13);
    if (1e-05 < fVar13) goto label_05c098fd;
label_05c098c3:
    pUVar9 = TypeInfo_UnityEngine_Vector3->static_fields;
    fVar19 = (pUVar9->zeroVector).fields.z;
  }
  uVar2._0_4_ = (pUVar9->zeroVector).fields.x;
  uVar2._4_4_ = (pUVar9->zeroVector).fields.y;
  local_68 = local_68 * fVar19 + (float)local_58._4_4_ * uVar2._4_4_ + (float)local_58._0_4_ * (float)uVar2;
  if (local_68 <= 0.0) {
    local_68 = 0.0;
  }
  local_68 = local_68 + (__this->fields).Speed;
  if ((TypeInfo_Projectiles_ProjectilePrefabs->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Projectiles_ProjectilePrefabs);
  }
  name = TypeInfo_Projectiles_ProjectilePrefabs->static_fields->BladeThrow;
  local_80._0_8_ = uVar2;
  local_80.z = fVar19;
  if (Il2CppMethodInitialized_0753e72c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    Il2CppMethodInitialized_0753e72c = '\x01';
  }
  pUVar9 = TypeInfo_UnityEngine_Vector3->static_fields;
  local_48.x = (pUVar9->upVector).fields.x;
  local_48.y = (pUVar9->upVector).fields.y;
  local_48.z = (pUVar9->upVector).fields.z;
  uVar15 = 0;
  uVar18 = 0;
  UVar23 = UnityEngine_Quaternion__Internal_LookRotation
                     ((UnityEngine_Vector3_o *)&local_80,(UnityEngine_Vector3_o *)&local_48,(MethodInfo *)0x0)
  ;
  local_58._8_4_ = extraout_XMM0_Dc_02;
  local_58._0_8_ = UVar23.fields._0_8_;
  local_58._12_4_ = extraout_XMM0_Dd_02;
  local_28._8_4_ = uVar15;
  local_28._0_8_ = UVar23.fields._8_8_;
  local_28._12_4_ = uVar18;
  if (Il2CppMethodInitialized_0753e4b6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    Il2CppMethodInitialized_0753e4b6 = '\x01';
  }
  pCVar5 = (__this->fields)._human;
  if (pCVar5 != (Characters_Human_o *)0x0) {
    pUVar9 = TypeInfo_UnityEngine_Vector3->static_fields;
    local_38._0_4_ = (pUVar9->zeroVector).fields.x;
    local_38._4_4_ = (pUVar9->zeroVector).fields.y;
    local_38._8_4_ = 0.0;
    local_38._12_4_ = 0.0;
    local_6c = (pUVar9->zeroVector).fields.z;
    local_70 = (__this->fields).LiveTime;
    pPVar10 = Photon_Pun_MonoBehaviourPun__get_photonView
                        ((Photon_Pun_MonoBehaviourPun_o *)pCVar5,(MethodInfo *)0x0);
    if (pPVar10 != (Photon_Pun_PhotonView_o *)0x0) {
      velocity_00.fields.z = fVar19 * local_68;
      velocity_00.fields.x = (float)uVar2 * local_68;
      velocity_00.fields.y = uVar2._4_4_ * local_68;
      UVar21.fields.z = fVar17;
      UVar21.fields.x = fVar12;
      UVar21.fields.y = fVar14;
      UVar23.fields.z = (float)local_28._0_4_;
      UVar23.fields.w = (float)local_28._4_4_;
      UVar23.fields.x = (float)local_58._0_4_;
      UVar23.fields.y = (float)local_58._4_4_;
      UVar22.fields.z = local_6c;
      UVar22.fields.x = (float)local_38._0_4_;
      UVar22.fields.y = (float)local_38._4_4_;
      pPVar11 = Projectiles_ProjectileSpawner__Spawn
                          (name,UVar21,UVar23,velocity_00,UVar22,local_70,(pPVar10->fields).viewIdField,
                           "",(System_Object_array *)0x0,(MethodInfo *)0x0);
      pCVar5 = (__this->fields)._human;
      if (((pCVar5 != (Characters_Human_o *)0x0) &&
          (pUVar6 = (pCVar5->fields).Cache, pUVar6 != (Utility_BaseComponentCache_o *)0x0)) &&
         (__this_00 = (pUVar6->fields).Rigidbody, __this_00 != (UnityEngine_Rigidbody_o *)0x0)) {
        UVar21 = UnityEngine_Rigidbody__get_linearVelocity(__this_00,(MethodInfo *)0x0);
        if (pPVar11 != (Projectiles_BaseProjectile_o *)0x0) {
          bVar4 = (TypeInfo_Projectiles_BladeThrowProjectile->_2).typeHierarchyDepth;
          if (((pPVar11->klass->_2).typeHierarchyDepth < bVar4) ||
             ((pPVar11->klass->_2).typeHierarchy[(ulong)bVar4 - 1] !=
              (Il2CppClass *)TypeInfo_Projectiles_BladeThrowProjectile)) {
            il2cpp_codegen_raise_invalid_cast_exception(pPVar11);
          }
          (*(uint64_t *)((char *)pPVar11 + 0xf8)) = UVar21.fields._0_8_;
          *(float *)&(*(uint64_t *)((char *)pPVar11 + 0x100)) = UVar21.fields.z;
          return;
        }
      }
    }
  }
label_05c09ba0:
  ThrowNullReferenceException();
}


