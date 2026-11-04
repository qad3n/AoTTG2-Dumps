// Type: Characters.AHSSWeapon
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Characters/AHSSWeapon.cs
// Prior real C# source (older reference): Assets/Scripts/Characters/Human/Weapons/AHSSWeapon.cs
// --------------------------------

// Characters.AHSSWeapon$$.ctor
// il2cpp: void Characters_AHSSWeapon___ctor (Characters_AHSSWeapon_o* __this, Characters_BaseCharacter_o* owner, int32_t ammo, int32_t ammoPerRound, float cooldown, const MethodInfo* method);
// 0x1821633e0

void
Characters_AHSSWeapon___ctor(Characters_AHSSWeapon_o* __this, Characters_BaseCharacter_o* owner, int32_t ammo, int32_t ammoPerRound, float cooldown, MethodInfo* method)

{
  int32_t *piVar1;
  
  Characters_ExtendedUseable___ctor((Characters_SimpleUseable_o *)__this,owner,(MethodInfo *)0x0);
  (__this->fields).Cooldown = cooldown;
  (__this->fields).AmmoLeft = ammo;
  (__this->fields).MaxAmmo = ammo;
  (__this->fields).RoundLeft = round;
  (__this->fields).MaxRound = round;
  if (round != -1) {
    piVar1 = &(__this->fields).AmmoLeft;
    *piVar1 = *piVar1 - round;
    return;
  }
  (__this->fields).RoundLeft = ammo;
  (__this->fields).AmmoLeft = 0;
  return;
}


// Characters.AHSSWeapon$$GetActiveTime
// il2cpp: float Characters_AHSSWeapon__GetActiveTime (Characters_AHSSWeapon_o* __this, const MethodInfo* method);
// 0x182163250

float Characters_AHSSWeapon__GetActiveTime(Characters_AHSSWeapon_o *__this,MethodInfo *method)

{
  SimpleJSONFixed_JSONNode_o *pSVar1;
  System_Xml_Schema_XmlSchema_o *pSVar2;
  longlong *plVar3;
  float fVar4;
  
  if (Il2CppMethodInitialized_184346d05 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_CharacterData);
    il2cpp_codegen_initialize_runtime_metadata(&"FireDelay");
    il2cpp_codegen_initialize_runtime_metadata(&"AHSS");
    Il2CppMethodInitialized_184346d05 = '\x01';
  }
  if ((TypeInfo_Characters_CharacterData->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_CharacterData);
  }
  pSVar1 = TypeInfo_Characters_CharacterData->static_fields->HumanWeaponInfo;
  if (pSVar1 != (SimpleJSONFixed_JSONNode_o *)0x0) {
    pSVar2 = (*(pSVar1->klass->vtable)._7_get_Item.methodPtr)(pSVar1,(MethodInfo *)"AHSS");
    if (pSVar2 != (System_Xml_Schema_XmlSchema_o *)0x0) {
      plVar3 = (longlong *)
               (*(pSVar2->klass->vtable)._7_get_IdAttribute.methodPtr)
                         (pSVar2,(MethodInfo *)"FireDelay");
      if (plVar3 != (longlong *)0x0) {
        fVar4 = (float)(**(code **)(*plVar3 + 0x388))(plVar3,*(undefined8 *)(*plVar3 + 0x390));
        return fVar4;
      }
    }
  }
  ThrowNullReferenceException();
}


// Characters.AHSSWeapon$$Activate
// il2cpp: void Characters_AHSSWeapon__Activate (Characters_AHSSWeapon_o* __this, const MethodInfo* method);
// 0x1821625d0

void Characters_AHSSWeapon__Activate(Characters_AHSSWeapon_o *__this,MethodInfo *method)

{
  byte bVar1;
  float fVar2;
  Characters_BaseCharacter_o *pCVar3;
  Characters_BaseCharacter_c *pCVar4;
  float fVar5;
  UnityEngine_Vector3_o *pUVar6;
  UnityEngine_Vector3_o local_18;
  
  if (Il2CppMethodInitialized_184346d06 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_Human);
    Il2CppMethodInitialized_184346d06 = '\x01';
  }
  pCVar3 = (__this->fields)._owner;
  if (pCVar3 != (Characters_BaseCharacter_o *)0x0) {
    pCVar4 = pCVar3->klass;
    bVar1 = (TypeInfo_Characters_Human->_2).typeHierarchyDepth;
    if ((bVar1 <= (pCVar4->_2).typeHierarchyDepth) &&
       ((pCVar4->_2).typeHierarchy[(ulonglong)bVar1 - 1] == (Il2CppClass *)TypeInfo_Characters_Human)) {
      pUVar6 = (*(pCVar4->vtable)._76_GetAimPoint.methodPtr)
                         (&local_18,pCVar3,(pCVar4->vtable)._76_GetAimPoint.method);
      fVar5 = (pUVar6->fields).y;
      fVar2 = (pUVar6->fields).z;
      (__this->fields)._target.fields.x = (pUVar6->fields).x;
      (__this->fields)._target.fields.y = fVar5;
      (__this->fields)._target.fields.z = fVar2;
      return;
    }
    il2cpp_codegen_raise_invalid_cast_exception(pCVar3);
  }
  ThrowNullReferenceException();
}


// Characters.AHSSWeapon$$Deactivate
// il2cpp: void Characters_AHSSWeapon__Deactivate (Characters_AHSSWeapon_o* __this, const MethodInfo* method);
// 0x182162670

void Characters_AHSSWeapon__Deactivate(Characters_AHSSWeapon_o *__this,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  byte bVar10;
  Characters_Human_o *__this_00;
  Utility_BaseComponentCache_o *pUVar11;
  Characters_HookUseable_o *pCVar12;
  UnityEngine_Vector3_StaticFields *pUVar13;
  SimpleJSONFixed_JSONNode_o *pSVar14;
  Characters_HumanComponentCache_o *pCVar15;
  Characters_BaseHitbox_o *pCVar16;
  UnityEngine_CapsuleCollider_o *__this_01;
  UnityEngine_Rigidbody_o *__this_02;
  UI_BaseMenu_o *pUVar17;
  UI_HUDBottomHandler_o *__this_03;
  undefined8 uVar18;
  ulonglong uVar19;
  bool bVar20;
  UnityEngine_Vector3_o *pUVar21;
  UnityEngine_Quaternion_o *pUVar22;
  System_String_o *pSVar23;
  System_Xml_Schema_XmlSchema_o *pSVar24;
  longlong *plVar25;
  UnityEngine_Transform_o *pUVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  undefined8 local_e8;
  float local_e0;
  UnityEngine_Quaternion_Fields local_d8;
  UnityEngine_Quaternion_Fields local_c8;
  UnityEngine_Quaternion_Fields local_b8;
  UnityEngine_Quaternion_o local_a8 [10];
  
  if (Il2CppMethodInitialized_184346d07 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_CapsuleCollider);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_CharacterData);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Effects_EffectPrefabs);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Effects_EffectSpawner);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanAnimations);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_Human);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_InGameMenu);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"Radius");
    il2cpp_codegen_initialize_runtime_metadata(&"KnockbackForce");
    il2cpp_codegen_initialize_runtime_metadata(&"AHSS");
    Il2CppMethodInitialized_184346d07 = '\x01';
  }
  __this_00 = (Characters_Human_o *)(__this->fields)._owner;
  local_b8.x = 0.0;
  local_b8.y = 0.0;
  local_b8.z = 0.0;
  local_b8.w = 0.0;
  if (__this_00 == (Characters_Human_o *)0x0) goto label_18216321f;
  bVar10 = (TypeInfo_Characters_Human->_2).typeHierarchyDepth;
  if (((__this_00->klass->_2).typeHierarchyDepth < bVar10) ||
     ((__this_00->klass->_2).typeHierarchy[(ulonglong)bVar10 - 1] != (Il2CppClass *)TypeInfo_Characters_Human)
     ) {
    il2cpp_codegen_raise_invalid_cast_exception(__this_00);
  }
  pUVar11 = (__this_00->fields).Cache;
  if ((pUVar11 == (Utility_BaseComponentCache_o *)0x0) ||
     (pUVar26 = (pUVar11->fields).Transform, pUVar26 == (UnityEngine_Transform_o *)0x0)) goto label_18216321f;
  lVar5._0_4_ = (__this->fields)._target.fields.x;
  lVar5._4_4_ = (__this->fields)._target.fields.y;
  fVar31 = (__this->fields)._target.fields.z;
  pUVar21 = UnityEngine_Transform__get_position((UnityEngine_Vector3_o *)&local_c8,pUVar26,(MethodInfo *)0x0);
  uVar1 = (pUVar21->fields).x;
  uVar6 = (pUVar21->fields).y;
  fVar32 = fVar31 - (pUVar21->fields).z;
  local_e8 = CONCAT44((float)lVar5._4_4_ - (float)uVar6,(float)(undefined4)lVar5 - (float)uVar1);
  local_e0 = fVar32;
  if (Il2CppMethodInitialized_18433de5f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    Il2CppMethodInitialized_18433de5f = '\x01';
  }
  fVar27 = (float)il2cpp_runtime_helper_180546a40(&local_e8,0);
  if (fVar27 <= 1e-05) {
    pUVar13 = TypeInfo_UnityEngine_Vector3->static_fields;
    fVar29 = (pUVar13->zeroVector).fields.x;
    fVar33 = (pUVar13->zeroVector).fields.y;
    fVar32 = (pUVar13->zeroVector).fields.z;
  }
  else {
    fVar29 = ((float)(undefined4)lVar5 - (float)uVar1) / fVar27;
    fVar33 = ((float)lVar5._4_4_ - (float)uVar6) / fVar27;
    fVar32 = fVar32 / fVar27;
  }
  pUVar11 = (__this_00->fields).Cache;
  if ((pUVar11 == (Utility_BaseComponentCache_o *)0x0) ||
     (pUVar26 = (pUVar11->fields).Transform, pUVar26 == (UnityEngine_Transform_o *)0x0)) goto label_18216321f;
  pUVar21 = UnityEngine_Transform__get_forward((UnityEngine_Vector3_o *)&local_c8,pUVar26,(MethodInfo *)0x0);
  pCVar12 = (__this_00->fields).HookLeft;
  if (pCVar12 == (Characters_HookUseable_o *)0x0) goto label_18216321f;
  fVar27 = fVar29 * (pUVar21->fields).z - fVar32 * (pUVar21->fields).x;
  local_c8._0_8_ = lVar5;
  if ((__this_00->fields).Grounded == false) {
    bVar20 = Characters_HookUseable__IsHooked(pCVar12,(MethodInfo *)0x0);
    if ((bVar20) || (0.0 <= fVar27)) {
      pCVar12 = (__this_00->fields).HookRight;
      if (pCVar12 == (Characters_HookUseable_o *)0x0) goto label_18216321f;
      bVar20 = Characters_HookUseable__IsHooked(pCVar12,(MethodInfo *)0x0);
      if (!bVar20) {
        if ((TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
        }
        pSVar23 = TypeInfo_Characters_HumanAnimations->static_fields->AHSSShootRAir;
        goto label_182162a3e;
      }
    }
    local_c8._0_8_ = lVar5;
    if ((TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
    }
    pSVar23 = TypeInfo_Characters_HumanAnimations->static_fields->AHSSShootLAir;
  }
  else {
    bVar20 = Characters_HookUseable__IsHooked(pCVar12,(MethodInfo *)0x0);
    if ((bVar20) || (0.0 <= fVar27)) {
      pCVar12 = (__this_00->fields).HookRight;
      if (pCVar12 == (Characters_HookUseable_o *)0x0) goto label_18216321f;
      bVar20 = Characters_HookUseable__IsHooked(pCVar12,(MethodInfo *)0x0);
      if (!bVar20) {
        if ((TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
        }
        pSVar23 = TypeInfo_Characters_HumanAnimations->static_fields->AHSSShootR;
        goto label_182162a3e;
      }
    }
    local_c8._0_8_ = lVar5;
    if ((TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
    }
    pSVar23 = TypeInfo_Characters_HumanAnimations->static_fields->AHSSShootL;
  }
label_182162a3e:
  fVar27 = local_c8.y;
  Characters_Human__set_State(__this_00,1,(MethodInfo *)0x0);
  (__this_00->fields).AttackAnimation = pSVar23;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).AttackAnimation,pSVar23);
  Characters_BaseCharacter__CrossFade
            ((Characters_BaseCharacter_o *)__this_00,pSVar23,0.05,0.0,(MethodInfo *)0x0);
  local_c8.y = fVar33;
  local_c8.x = fVar29;
  local_d8.x = 0.0;
  local_d8.y = 0.0;
  local_d8.z = 0.0;
  local_c8.z = fVar32;
  if (Il2CppMethodInitialized_18433de5c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    Il2CppMethodInitialized_18433de5c = '\x01';
  }
  pUVar13 = TypeInfo_UnityEngine_Vector3->static_fields;
  local_d8.x = (pUVar13->upVector).fields.x;
  local_d8.y = (pUVar13->upVector).fields.y;
  local_d8.z = (pUVar13->upVector).fields.z;
  pUVar22 = UnityEngine_Quaternion__Internal_LookRotation
                      (local_a8,(UnityEngine_Vector3_o *)&local_c8,(UnityEngine_Vector3_o *)&local_d8,
                       (MethodInfo *)0x0);
  local_b8.x = (pUVar22->fields).x;
  local_b8.y = (pUVar22->fields).y;
  local_b8.z = (pUVar22->fields).z;
  local_b8.w = (pUVar22->fields).w;
  pUVar21 = UnityEngine_Quaternion__Internal_ToEulerRad
                      ((UnityEngine_Vector3_o *)&local_d8,(UnityEngine_Quaternion_o *)&local_b8,
                       (MethodInfo *)0x0);
  uVar2 = (pUVar21->fields).x;
  uVar7 = (pUVar21->fields).y;
  local_c8.y = (float)uVar7 * 57.29578;
  local_c8.x = (float)uVar2 * 57.29578;
  local_c8.z = (pUVar21->fields).z * 57.29578;
  pUVar21 = UnityEngine_Quaternion__Internal_MakePositive
                      ((UnityEngine_Vector3_o *)&local_d8,(UnityEngine_Vector3_o *)&local_c8,(MethodInfo *)0x0
                      );
  local_c8._8_8_ = (ulonglong)(uint)local_c8.w << 0x20;
  fVar32 = (pUVar21->fields).y;
  (__this_00->fields).TargetAngle = fVar32;
  local_c8._0_8_ = (ulonglong)(uint)(fVar32 * 0.017453292) << 0x20;
  pUVar22 = UnityEngine_Quaternion__Internal_FromEulerRad
                      (local_a8,(UnityEngine_Vector3_o *)&local_c8,(MethodInfo *)0x0);
  pUVar11 = (__this_00->fields).Cache;
  fVar32 = (pUVar22->fields).y;
  fVar29 = (pUVar22->fields).z;
  fVar33 = (pUVar22->fields).w;
  (__this_00->fields)._targetRotation.fields.x = (pUVar22->fields).x;
  (__this_00->fields)._targetRotation.fields.y = fVar32;
  (__this_00->fields)._targetRotation.fields.z = fVar29;
  (__this_00->fields)._targetRotation.fields.w = fVar33;
  if ((pUVar11 != (Utility_BaseComponentCache_o *)0x0) &&
     (pUVar26 = (pUVar11->fields).Transform, pUVar26 != (UnityEngine_Transform_o *)0x0)) {
    pUVar22 = UnityEngine_Transform__get_rotation(local_a8,pUVar26,(MethodInfo *)0x0);
    local_c8.x = (__this_00->fields)._targetRotation.fields.x;
    local_c8.y = (__this_00->fields)._targetRotation.fields.y;
    local_c8.z = (__this_00->fields)._targetRotation.fields.z;
    local_c8.w = (__this_00->fields)._targetRotation.fields.w;
    local_d8.x = (pUVar22->fields).x;
    local_d8.y = (pUVar22->fields).y;
    local_d8.z = (pUVar22->fields).z;
    local_d8.w = (pUVar22->fields).w;
    fVar32 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
    pUVar22 = UnityEngine_Quaternion__Internal_Lerp
                        (local_a8,(UnityEngine_Quaternion_o *)&local_d8,(UnityEngine_Quaternion_o *)&local_c8,
                         fVar32 * 30.0,(MethodInfo *)0x0);
    local_c8.x = (pUVar22->fields).x;
    local_c8.y = (pUVar22->fields).y;
    local_c8.z = (pUVar22->fields).z;
    local_c8.w = (pUVar22->fields).w;
    UnityEngine_Transform__set_rotation(pUVar26,(UnityEngine_Quaternion_o *)&local_c8,(MethodInfo *)0x0);
    pUVar11 = (__this_00->fields).Cache;
    if ((pUVar11 != (Utility_BaseComponentCache_o *)0x0) &&
       (pUVar26 = (pUVar11->fields).Transform, pUVar26 != (UnityEngine_Transform_o *)0x0)) {
      pUVar21 = UnityEngine_Transform__get_position
                          ((UnityEngine_Vector3_o *)&local_c8,pUVar26,(MethodInfo *)0x0);
      pUVar11 = (__this_00->fields).Cache;
      if ((pUVar11 != (Utility_BaseComponentCache_o *)0x0) &&
         (pUVar26 = (pUVar11->fields).Transform, pUVar26 != (UnityEngine_Transform_o *)0x0)) {
        uVar3 = (pUVar21->fields).x;
        uVar8 = (pUVar21->fields).y;
        fVar32 = (pUVar21->fields).z;
        pUVar21 = UnityEngine_Transform__get_up((UnityEngine_Vector3_o *)&local_c8,pUVar26,(MethodInfo *)0x0);
        uVar4 = (pUVar21->fields).x;
        uVar9 = (pUVar21->fields).y;
        fVar29 = (float)uVar4 * 0.8 + (float)uVar3;
        fVar33 = (float)uVar9 * 0.8 + (float)uVar8;
        fVar32 = (pUVar21->fields).z * 0.8 + fVar32;
        fVar31 = fVar31 - fVar32;
        local_e8 = CONCAT44(fVar27 - fVar33,(float)(undefined4)lVar5 - fVar29);
        local_e0 = fVar31;
        if (Il2CppMethodInitialized_18433de5f == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
          Il2CppMethodInitialized_18433de5f = '\x01';
        }
        fVar28 = (float)il2cpp_runtime_helper_180546a40(&local_e8,0);
        if (fVar28 <= 1e-05) {
          pUVar13 = TypeInfo_UnityEngine_Vector3->static_fields;
          fVar30 = (pUVar13->zeroVector).fields.x;
          fVar27 = (pUVar13->zeroVector).fields.y;
          fVar31 = (pUVar13->zeroVector).fields.z;
        }
        else {
          fVar30 = ((float)(undefined4)lVar5 - fVar29) / fVar28;
          fVar27 = (fVar27 - fVar33) / fVar28;
          fVar31 = fVar31 / fVar28;
        }
        if ((TypeInfo_Effects_EffectPrefabs->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Effects_EffectPrefabs);
        }
        local_c8.y = fVar27;
        local_c8.x = fVar30;
        local_c8.z = fVar31;
        pSVar23 = TypeInfo_Effects_EffectPrefabs->static_fields->GunExplode;
        local_d8.x = 0.0;
        local_d8.y = 0.0;
        local_d8._8_8_ = local_d8._8_8_ & 0xffffffff00000000;
        if (Il2CppMethodInitialized_18433de5c == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
          Il2CppMethodInitialized_18433de5c = '\x01';
        }
        pUVar13 = TypeInfo_UnityEngine_Vector3->static_fields;
        local_d8.x = (pUVar13->upVector).fields.x;
        local_d8.y = (pUVar13->upVector).fields.y;
        local_d8.z = (pUVar13->upVector).fields.z;
        pUVar22 = UnityEngine_Quaternion__Internal_LookRotation
                            (local_a8,(UnityEngine_Vector3_o *)&local_c8,(UnityEngine_Vector3_o *)&local_d8,
                             (MethodInfo *)0x0);
        uVar18._0_4_ = (pUVar22->fields).x;
        uVar18._4_4_ = (pUVar22->fields).y;
        uVar19._0_4_ = (pUVar22->fields).z;
        uVar19._4_4_ = (pUVar22->fields).w;
        if ((TypeInfo_Effects_EffectSpawner->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Effects_EffectSpawner);
        }
        local_c8.z = fVar32;
        local_c8._0_8_ = CONCAT44(fVar33,fVar29);
        local_d8._0_8_ = uVar18;
        local_d8._8_8_ = uVar19;
        Effects_EffectSpawner__Spawn
                  (pSVar23,(UnityEngine_Vector3_o *)&local_c8,(UnityEngine_Quaternion_o *)&local_d8,1.0,true,
                   (System_Object_array *)0x0,(MethodInfo *)0x0);
        if ((TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
        }
        pSVar23 = Characters_HumanSounds__GetRandomAHSSGunShot((MethodInfo *)0x0);
        Characters_BaseCharacter__PlaySound((Characters_BaseCharacter_o *)__this_00,pSVar23,(MethodInfo *)0x0)
        ;
        if ((TypeInfo_Characters_CharacterData->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_CharacterData);
        }
        pSVar14 = TypeInfo_Characters_CharacterData->static_fields->HumanWeaponInfo;
        if (pSVar14 != (SimpleJSONFixed_JSONNode_o *)0x0) {
          pSVar24 = (*(pSVar14->klass->vtable)._7_get_Item.methodPtr)
                              (pSVar14,(MethodInfo *)"AHSS");
          pCVar15 = (__this_00->fields).HumanCache;
          if (((pCVar15 != (Characters_HumanComponentCache_o *)0x0) &&
              (pCVar16 = (pCVar15->fields).AHSSHit, pCVar16 != (Characters_BaseHitbox_o *)0x0)) &&
             (pSVar24 != (System_Xml_Schema_XmlSchema_o *)0x0)) {
            __this_01 = (UnityEngine_CapsuleCollider_o *)(pCVar16->fields)._collider;
            plVar25 = (longlong *)
                      (*(pSVar24->klass->vtable)._7_get_IdAttribute.methodPtr)
                                (pSVar24,(MethodInfo *)"Radius");
            if ((plVar25 != (longlong *)0x0) &&
               (fVar28 = (float)(**(code **)(*plVar25 + 0x388))(plVar25,*(undefined8 *)(*plVar25 + 0x390)),
               __this_01 != (UnityEngine_CapsuleCollider_o *)0x0)) {
              bVar10 = (TypeInfo_UnityEngine_CapsuleCollider->_2).typeHierarchyDepth;
              if (((__this_01->klass->_2).typeHierarchyDepth < bVar10) ||
                 ((__this_01->klass->_2).typeHierarchy[(ulonglong)bVar10 - 1] !=
                  (Il2CppClass *)TypeInfo_UnityEngine_CapsuleCollider)) {
                il2cpp_codegen_raise_invalid_cast_exception(__this_01,TypeInfo_UnityEngine_CapsuleCollider);
              }
              UnityEngine_CapsuleCollider__set_radius(__this_01,fVar28,(MethodInfo *)0x0);
              pCVar15 = (__this_00->fields).HumanCache;
              if (((pCVar15 != (Characters_HumanComponentCache_o *)0x0) &&
                  (pCVar16 = (pCVar15->fields).AHSSHit, pCVar16 != (Characters_BaseHitbox_o *)0x0)) &&
                 (pUVar26 = UnityEngine_Component__get_transform
                                      ((UnityEngine_Component_o *)pCVar16,(MethodInfo *)0x0),
                 pUVar26 != (UnityEngine_Transform_o *)0x0)) {
                local_c8.y = fVar33;
                local_c8.x = fVar29;
                UnityEngine_Transform__set_position
                          (pUVar26,(UnityEngine_Vector3_o *)&local_c8,(MethodInfo *)0x0);
                pCVar15 = (__this_00->fields).HumanCache;
                if ((pCVar15 != (Characters_HumanComponentCache_o *)0x0) &&
                   (pCVar16 = (pCVar15->fields).AHSSHit, pCVar16 != (Characters_BaseHitbox_o *)0x0)) {
                  pUVar26 = UnityEngine_Component__get_transform
                                      ((UnityEngine_Component_o *)pCVar16,(MethodInfo *)0x0);
                  local_c8.y = fVar27;
                  local_c8.x = fVar30;
                  local_c8.z = fVar31;
                  local_d8.x = 0.0;
                  local_d8.y = 0.0;
                  local_d8._8_8_ = local_d8._8_8_ & 0xffffffff00000000;
                  if (Il2CppMethodInitialized_18433de5c == '\0') {
                    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
                    Il2CppMethodInitialized_18433de5c = '\x01';
                  }
                  pUVar13 = TypeInfo_UnityEngine_Vector3->static_fields;
                  local_d8.x = (pUVar13->upVector).fields.x;
                  local_d8.y = (pUVar13->upVector).fields.y;
                  local_d8.z = (pUVar13->upVector).fields.z;
                  pUVar22 = UnityEngine_Quaternion__Internal_LookRotation
                                      (local_a8,(UnityEngine_Vector3_o *)&local_c8,
                                       (UnityEngine_Vector3_o *)&local_d8,(MethodInfo *)0x0);
                  if (pUVar26 != (UnityEngine_Transform_o *)0x0) {
                    local_c8.x = (pUVar22->fields).x;
                    local_c8.y = (pUVar22->fields).y;
                    local_c8.z = (pUVar22->fields).z;
                    local_c8.w = (pUVar22->fields).w;
                    UnityEngine_Transform__set_rotation
                              (pUVar26,(UnityEngine_Quaternion_o *)&local_c8,(MethodInfo *)0x0);
                    pCVar15 = (__this_00->fields).HumanCache;
                    if ((pCVar15 != (Characters_HumanComponentCache_o *)0x0) &&
                       (pCVar16 = (pCVar15->fields).AHSSHit, pCVar16 != (Characters_BaseHitbox_o *)0x0)) {
                      Characters_BaseHitbox__Activate(pCVar16,0.0,0.1,(MethodInfo *)0x0);
                      pUVar11 = (__this_00->fields).Cache;
                      if (pUVar11 != (Utility_BaseComponentCache_o *)0x0) {
                        __this_02 = (pUVar11->fields).Rigidbody;
                        plVar25 = (longlong *)
                                  (*(pSVar24->klass->vtable)._7_get_IdAttribute.methodPtr)
                                            (pSVar24,(MethodInfo *)"KnockbackForce");
                        if ((plVar25 != (longlong *)0x0) &&
                           (fVar32 = (float)(**(code **)(*plVar25 + 0x388))
                                                      (plVar25,*(undefined8 *)(*plVar25 + 0x390)),
                           __this_02 != (UnityEngine_Rigidbody_o *)0x0)) {
                          local_c8.y = -fVar27 * fVar32;
                          local_c8.x = -fVar30 * fVar32;
                          local_c8.z = -fVar31 * fVar32;
                          UnityEngine_Rigidbody__AddForce
                                    (__this_02,(UnityEngine_Vector3_o *)&local_c8,2,(MethodInfo *)0x0);
                          if ((__this_00->fields).AI != false) {
                            return;
                          }
                          if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
                            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
                          }
                          pUVar17 = TypeInfo_UI_UIManager->static_fields->CurrentMenu;
                          if (pUVar17 != (UI_BaseMenu_o *)0x0) {
                            bVar10 = (TypeInfo_UI_InGameMenu->_2).typeHierarchyDepth;
                            if (((pUVar17->klass->_2).typeHierarchyDepth < bVar10) ||
                               ((pUVar17->klass->_2).typeHierarchy[(ulonglong)bVar10 - 1] !=
                                (Il2CppClass *)TypeInfo_UI_InGameMenu)) {
                              il2cpp_codegen_raise_invalid_cast_exception(pUVar17);
                            }
                            __this_03 = (UI_HUDBottomHandler_o *)(*(uint64_t *)((char *)pUVar17 + 0xb8));
                            if (__this_03 != (UI_HUDBottomHandler_o *)0x0) {
                              UI_HUDBottomHandler__ShootAHSS
                                        (__this_03,(__this->fields).RoundLeft == 1,
                                         (__this->fields).RoundLeft == 0,(MethodInfo *)0x0);
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
    }
  }
label_18216321f:
  ThrowNullReferenceException();
}


// Characters.AHSSWeapon$$HandleUI
// il2cpp: void Characters_AHSSWeapon__HandleUI (Characters_AHSSWeapon_o* __this, const MethodInfo* method);
// 0x182163310

void Characters_AHSSWeapon__HandleUI(Characters_AHSSWeapon_o *__this,MethodInfo *method)

{
  byte bVar1;
  UI_BaseMenu_o *pUVar2;
  UI_HUDBottomHandler_o *__this_00;
  bool left;
  
  if (Il2CppMethodInitialized_184346d08 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_InGameMenu);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    Il2CppMethodInitialized_184346d08 = '\x01';
  }
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  pUVar2 = TypeInfo_UI_UIManager->static_fields->CurrentMenu;
  if (pUVar2 != (UI_BaseMenu_o *)0x0) {
    bVar1 = (TypeInfo_UI_InGameMenu->_2).typeHierarchyDepth;
    if (((pUVar2->klass->_2).typeHierarchyDepth < bVar1) ||
       ((pUVar2->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] != (Il2CppClass *)TypeInfo_UI_InGameMenu)) {
      il2cpp_codegen_raise_invalid_cast_exception(pUVar2);
    }
    __this_00 = (UI_HUDBottomHandler_o *)(*(uint64_t *)((char *)pUVar2 + 0xb8));
    if ((__this->fields).RoundLeft == 1) {
      left = true;
    }
    else {
      left = (__this->fields).RoundLeft == 0;
    }
    if (__this_00 != (UI_HUDBottomHandler_o *)0x0) {
      UI_HUDBottomHandler__ShootAHSS(__this_00,left,(__this->fields).RoundLeft == 0,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


