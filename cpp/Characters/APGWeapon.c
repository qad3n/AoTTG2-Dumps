// Type: Characters.APGWeapon
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Characters/APGWeapon.cs
// Prior real C# source (older reference): Assets/Scripts/Characters/Human/Weapons/APGWeapon.cs
// --------------------------------

// Characters.APGWeapon$$.ctor
// il2cpp: void Characters_APGWeapon___ctor (Characters_APGWeapon_o* __this, Characters_BaseCharacter_o* owner, int32_t ammo, int32_t ammoPerRound, float cooldown, const MethodInfo* method);
// 0x1821633e0

void
Characters_APGWeapon___ctor(Characters_APGWeapon_o* __this, Characters_BaseCharacter_o* owner, int32_t ammo, int32_t ammoPerRound, float cooldown, MethodInfo* method)

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


// Characters.APGWeapon$$Activate
// il2cpp: void Characters_APGWeapon__Activate (Characters_APGWeapon_o* __this, const MethodInfo* method);
// 0x182163450
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x182163def: mov rsi, r14
// asm:   0x182163df2: jmp 0x182163e27
// asm:   0x182164099: movaps xmm11, xmm12

void Characters_APGWeapon__Activate(Characters_APGWeapon_o *__this,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  byte bVar11;
  Characters_Human_o *__this_00;
  Characters_HookUseable_o *__this_01;
  Utility_BaseComponentCache_o *pUVar12;
  UnityEngine_Vector3_StaticFields *pUVar13;
  Characters_HumanComponentCache_o *pCVar14;
  Characters_BaseHitbox_o *pCVar15;
  SimpleJSONFixed_JSONNode_o *pSVar16;
  Settings_InGameSet_o *pSVar17;
  Settings_InGameMiscSettings_o *pSVar18;
  Settings_BoolSetting_o *pSVar19;
  UnityEngine_Collider_o *pUVar20;
  UnityEngine_Rigidbody_o *__this_02;
  UnityEngine_Quaternion_StaticFields *pUVar21;
  UI_BaseMenu_o *pUVar22;
  UI_HUDBottomHandler_o *__this_03;
  longlong lVar23;
  ulonglong uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  bool bVar27;
  UnityEngine_Vector3_o *pUVar28;
  UnityEngine_Quaternion_o *pUVar29;
  System_String_o *pSVar30;
  UnityEngine_Transform_o *pUVar31;
  System_Xml_Schema_XmlSchema_o *pSVar32;
  System_Object_array *settings;
  Il2CppObject *pIVar33;
  Il2CppObject *pIVar34;
  UnityEngine_Collider_o *__this_04;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float local_res8 [4];
  float local_res18 [2];
  undefined4 local_res20 [2];
  undefined8 local_130;
  float local_128;
  UnityEngine_Quaternion_Fields local_118;
  UnityEngine_Quaternion_Fields local_108;
  UnityEngine_Quaternion_Fields local_f8;
  UnityEngine_Quaternion_Fields local_e8;
  UnityEngine_Quaternion_Fields local_d8 [11];
  
  if (Il2CppMethodInitialized_184346d09 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_CapsuleCollider);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_CharacterData);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Effects_EffectPrefabs);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Effects_EffectSpawner);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanAnimations);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_Human);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_InGameMenu);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    il2cpp_codegen_initialize_runtime_metadata(&"Range2Speed");
    il2cpp_codegen_initialize_runtime_metadata(&"MaxRange");
    il2cpp_codegen_initialize_runtime_metadata(&"Radius");
    il2cpp_codegen_initialize_runtime_metadata(&"Range1Constant");
    il2cpp_codegen_initialize_runtime_metadata(&"MinRange");
    il2cpp_codegen_initialize_runtime_metadata(&"APG");
    il2cpp_codegen_initialize_runtime_metadata(&"Range1Multiplier");
    il2cpp_codegen_initialize_runtime_metadata(&"APGPVP");
    il2cpp_codegen_initialize_runtime_metadata(&"Range2Constant");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    il2cpp_codegen_initialize_runtime_metadata(&"Range2Multiplier");
    Il2CppMethodInitialized_184346d09 = '\x01';
  }
  __this_00 = (Characters_Human_o *)(__this->fields)._owner;
  local_f8.x = 0.0;
  local_f8.y = 0.0;
  local_f8.z = 0.0;
  local_f8.w = 0.0;
  if (__this_00 != (Characters_Human_o *)0x0) {
    bVar11 = (TypeInfo_Characters_Human->_2).typeHierarchyDepth;
    if (((__this_00->klass->_2).typeHierarchyDepth < bVar11) ||
       ((__this_00->klass->_2).typeHierarchy[(ulonglong)bVar11 - 1] !=
        (Il2CppClass *)TypeInfo_Characters_Human)) {
      il2cpp_codegen_raise_invalid_cast_exception(__this_00);
    }
    __this_01 = (__this_00->fields).HookLeft;
    if (__this_01 != (Characters_HookUseable_o *)0x0) {
      bVar27 = Characters_HookUseable__IsHooked(__this_01,(MethodInfo *)0x0);
      if ((__this_00->fields).Grounded == false) {
        if (bVar27) {
          if ((TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
          }
          pSVar30 = TypeInfo_Characters_HumanAnimations->static_fields->AHSSShootRAir;
        }
        else {
          if ((TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
          }
          pSVar30 = TypeInfo_Characters_HumanAnimations->static_fields->AHSSShootLAir;
        }
      }
      else if (bVar27) {
        if ((TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
        }
        pSVar30 = TypeInfo_Characters_HumanAnimations->static_fields->AHSSShootR;
      }
      else {
        if ((TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
        }
        pSVar30 = TypeInfo_Characters_HumanAnimations->static_fields->AHSSShootL;
      }
      Characters_Human__set_State(__this_00,1,(MethodInfo *)0x0);
      (__this_00->fields).AttackAnimation = pSVar30;
      Il2CppCodeGenWriteBarrier(&(__this_00->fields).AttackAnimation,pSVar30);
      __this_04 = (UnityEngine_Collider_o *)0x0;
      Characters_BaseCharacter__CrossFade
                ((Characters_BaseCharacter_o *)__this_00,pSVar30,0.05,0.0,(MethodInfo *)0x0);
      pUVar28 = (*(__this_00->klass->vtable)._76_GetAimPoint.methodPtr)
                          ((UnityEngine_Vector3_o *)&local_108,__this_00,
                           (__this_00->klass->vtable)._76_GetAimPoint.method);
      pUVar12 = (__this_00->fields).Cache;
      if ((pUVar12 != (Utility_BaseComponentCache_o *)0x0) &&
         (pUVar31 = (pUVar12->fields).Transform, pUVar31 != (UnityEngine_Transform_o *)0x0)) {
        uVar1 = (pUVar28->fields).x;
        uVar6 = (pUVar28->fields).y;
        fVar43 = (pUVar28->fields).z;
        pUVar28 = UnityEngine_Transform__get_position
                            ((UnityEngine_Vector3_o *)&local_108,pUVar31,(MethodInfo *)0x0);
        uVar2 = (pUVar28->fields).x;
        uVar7 = (pUVar28->fields).y;
        fVar41 = fVar43 - (pUVar28->fields).z;
        local_130 = CONCAT44((float)uVar6 - (float)uVar7,(float)uVar1 - (float)uVar2);
        local_128 = fVar41;
        if (Il2CppMethodInitialized_18433de5f == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
          Il2CppMethodInitialized_18433de5f = '\x01';
        }
        local_108.z = (float)il2cpp_runtime_helper_180546a40(&local_130,0);
        if (local_108.z <= 1e-05) {
          pUVar13 = TypeInfo_UnityEngine_Vector3->static_fields;
          fVar40 = (pUVar13->zeroVector).fields.x;
          fVar44 = (pUVar13->zeroVector).fields.y;
          local_108.z = (pUVar13->zeroVector).fields.z;
        }
        else {
          fVar40 = ((float)uVar1 - (float)uVar2) / local_108.z;
          fVar44 = ((float)uVar6 - (float)uVar7) / local_108.z;
          local_108.z = fVar41 / local_108.z;
        }
        local_108.y = fVar44;
        local_108.x = fVar40;
        local_118.x = 0.0;
        local_118.y = 0.0;
        local_118.z = 0.0;
        if (Il2CppMethodInitialized_18433de5c == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
          Il2CppMethodInitialized_18433de5c = '\x01';
        }
        pUVar13 = TypeInfo_UnityEngine_Vector3->static_fields;
        local_118.x = (pUVar13->upVector).fields.x;
        local_118.y = (pUVar13->upVector).fields.y;
        local_118.z = (pUVar13->upVector).fields.z;
        pUVar29 = UnityEngine_Quaternion__Internal_LookRotation
                            ((UnityEngine_Quaternion_o *)local_d8,(UnityEngine_Vector3_o *)&local_108,
                             (UnityEngine_Vector3_o *)&local_118,(MethodInfo *)0x0);
        local_f8.x = (pUVar29->fields).x;
        local_f8.y = (pUVar29->fields).y;
        local_f8.z = (pUVar29->fields).z;
        local_f8.w = (pUVar29->fields).w;
        pUVar28 = UnityEngine_Quaternion__Internal_ToEulerRad
                            ((UnityEngine_Vector3_o *)&local_118,(UnityEngine_Quaternion_o *)&local_f8,
                             (MethodInfo *)0x0);
        uVar3 = (pUVar28->fields).x;
        uVar8 = (pUVar28->fields).y;
        local_108.y = (float)uVar8 * 57.29578;
        local_108.x = (float)uVar3 * 57.29578;
        local_108.z = (pUVar28->fields).z * 57.29578;
        pUVar28 = UnityEngine_Quaternion__Internal_MakePositive
                            ((UnityEngine_Vector3_o *)&local_118,(UnityEngine_Vector3_o *)&local_108,
                             (MethodInfo *)0x0);
        fVar41 = (pUVar28->fields).y;
        (__this_00->fields).TargetAngle = fVar41;
        local_118._8_8_ = (ulonglong)(uint)local_118.w << 0x20;
        local_118._0_8_ = (ulonglong)(uint)(fVar41 * 0.017453292) << 0x20;
        pUVar29 = UnityEngine_Quaternion__Internal_FromEulerRad
                            ((UnityEngine_Quaternion_o *)local_d8,(UnityEngine_Vector3_o *)&local_118,
                             (MethodInfo *)0x0);
        pUVar12 = (__this_00->fields).Cache;
        fVar41 = (pUVar29->fields).y;
        fVar40 = (pUVar29->fields).z;
        fVar44 = (pUVar29->fields).w;
        (__this_00->fields)._targetRotation.fields.x = (pUVar29->fields).x;
        (__this_00->fields)._targetRotation.fields.y = fVar41;
        (__this_00->fields)._targetRotation.fields.z = fVar40;
        (__this_00->fields)._targetRotation.fields.w = fVar44;
        if ((pUVar12 != (Utility_BaseComponentCache_o *)0x0) &&
           (pUVar31 = (pUVar12->fields).Transform, pUVar31 != (UnityEngine_Transform_o *)0x0)) {
          pUVar29 = UnityEngine_Transform__get_rotation
                              ((UnityEngine_Quaternion_o *)local_d8,pUVar31,(MethodInfo *)0x0);
          local_e8.x = (__this_00->fields)._targetRotation.fields.x;
          local_e8.y = (__this_00->fields)._targetRotation.fields.y;
          local_e8.z = (__this_00->fields)._targetRotation.fields.z;
          local_e8.w = (__this_00->fields)._targetRotation.fields.w;
          local_108.x = (pUVar29->fields).x;
          local_108.y = (pUVar29->fields).y;
          local_108.z = (pUVar29->fields).z;
          local_108.w = (pUVar29->fields).w;
          fVar41 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
          pUVar29 = UnityEngine_Quaternion__Internal_Lerp
                              ((UnityEngine_Quaternion_o *)local_d8,(UnityEngine_Quaternion_o *)&local_108,
                               (UnityEngine_Quaternion_o *)&local_e8,fVar41 * 30.0,(MethodInfo *)0x0);
          local_e8.x = (pUVar29->fields).x;
          local_e8.y = (pUVar29->fields).y;
          local_e8.z = (pUVar29->fields).z;
          local_e8.w = (pUVar29->fields).w;
          UnityEngine_Transform__set_rotation(pUVar31,(UnityEngine_Quaternion_o *)&local_e8,(MethodInfo *)0x0)
          ;
          pUVar12 = (__this_00->fields).Cache;
          if ((pUVar12 != (Utility_BaseComponentCache_o *)0x0) &&
             (pUVar31 = (pUVar12->fields).Transform, pUVar31 != (UnityEngine_Transform_o *)0x0)) {
            pUVar28 = UnityEngine_Transform__get_position
                                ((UnityEngine_Vector3_o *)&local_108,pUVar31,(MethodInfo *)0x0);
            pUVar12 = (__this_00->fields).Cache;
            if ((pUVar12 != (Utility_BaseComponentCache_o *)0x0) &&
               (pUVar31 = (pUVar12->fields).Transform, pUVar31 != (UnityEngine_Transform_o *)0x0)) {
              uVar4 = (pUVar28->fields).x;
              uVar9 = (pUVar28->fields).y;
              fVar41 = (pUVar28->fields).z;
              pUVar28 = UnityEngine_Transform__get_up
                                  ((UnityEngine_Vector3_o *)&local_108,pUVar31,(MethodInfo *)0x0);
              uVar5 = (pUVar28->fields).x;
              uVar10 = (pUVar28->fields).y;
              fVar40 = (float)uVar5 * 0.8 + (float)uVar4;
              fVar44 = (float)uVar10 * 0.8 + (float)uVar9;
              fVar41 = (pUVar28->fields).z * 0.8 + fVar41;
              fVar43 = fVar43 - fVar41;
              local_e8.y = fVar44;
              local_e8.x = fVar44;
              local_e8.w = fVar44;
              local_e8.z = fVar44;
              local_130 = CONCAT44((float)uVar6 - fVar44,(float)uVar1 - fVar40);
              local_128 = fVar43;
              if (Il2CppMethodInitialized_18433de5f == '\0') {
                il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
                Il2CppMethodInitialized_18433de5f = '\x01';
              }
              fVar35 = (float)il2cpp_runtime_helper_180546a40(&local_130,0);
              if (fVar35 <= 1e-05) {
                pUVar13 = TypeInfo_UnityEngine_Vector3->static_fields;
                fVar42 = (pUVar13->zeroVector).fields.x;
                fVar45 = (pUVar13->zeroVector).fields.y;
                fVar43 = (pUVar13->zeroVector).fields.z;
              }
              else {
                fVar42 = ((float)uVar1 - fVar40) / fVar35;
                fVar45 = ((float)uVar6 - fVar44) / fVar35;
                fVar43 = fVar43 / fVar35;
              }
              if ((TypeInfo_Effects_EffectPrefabs->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Effects_EffectPrefabs);
              }
              local_108.y = fVar45;
              local_108.x = fVar42;
              local_108.z = fVar43;
              pSVar30 = TypeInfo_Effects_EffectPrefabs->static_fields->GunExplode;
              local_118.x = 0.0;
              local_118.y = 0.0;
              local_118._8_8_ = local_118._8_8_ & 0xffffffff00000000;
              if (Il2CppMethodInitialized_18433de5c == '\0') {
                il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
                Il2CppMethodInitialized_18433de5c = '\x01';
              }
              pUVar13 = TypeInfo_UnityEngine_Vector3->static_fields;
              local_118.x = (pUVar13->upVector).fields.x;
              local_118.y = (pUVar13->upVector).fields.y;
              local_118.z = (pUVar13->upVector).fields.z;
              pUVar29 = UnityEngine_Quaternion__Internal_LookRotation
                                  ((UnityEngine_Quaternion_o *)local_d8,(UnityEngine_Vector3_o *)&local_108,
                                   (UnityEngine_Vector3_o *)&local_118,(MethodInfo *)0x0);
              lVar23._0_4_ = (pUVar29->fields).x;
              lVar23._4_4_ = (pUVar29->fields).y;
              uVar24._0_4_ = (pUVar29->fields).z;
              uVar24._4_4_ = (pUVar29->fields).w;
              if ((TypeInfo_Effects_EffectSpawner->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Effects_EffectSpawner);
              }
              local_108.y = fVar44;
              local_108.x = fVar40;
              local_108.z = fVar41;
              local_118._0_8_ = lVar23;
              local_118._8_8_ = uVar24;
              Effects_EffectSpawner__Spawn
                        (pSVar30,(UnityEngine_Vector3_o *)&local_108,(UnityEngine_Quaternion_o *)&local_118,
                         0.2,true,(System_Object_array *)0x0,(MethodInfo *)0x0);
              if ((TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
              }
              pSVar30 = Characters_HumanSounds__GetRandomAPGShot((MethodInfo *)0x0);
              Characters_BaseCharacter__PlaySound
                        ((Characters_BaseCharacter_o *)__this_00,pSVar30,(MethodInfo *)0x0);
              pCVar14 = (__this_00->fields).HumanCache;
              if (((pCVar14 != (Characters_HumanComponentCache_o *)0x0) &&
                  (pCVar15 = (pCVar14->fields).APGHit, pCVar15 != (Characters_BaseHitbox_o *)0x0)) &&
                 (pUVar31 = UnityEngine_Component__get_transform
                                      ((UnityEngine_Component_o *)pCVar15,(MethodInfo *)0x0),
                 pUVar31 != (UnityEngine_Transform_o *)0x0)) {
                UnityEngine_Transform__set_position
                          (pUVar31,(UnityEngine_Vector3_o *)&local_108,(MethodInfo *)0x0);
                pCVar14 = (__this_00->fields).HumanCache;
                if ((pCVar14 != (Characters_HumanComponentCache_o *)0x0) &&
                   (pCVar15 = (pCVar14->fields).APGHit, pCVar15 != (Characters_BaseHitbox_o *)0x0)) {
                  pUVar31 = UnityEngine_Component__get_transform
                                      ((UnityEngine_Component_o *)pCVar15,(MethodInfo *)0x0);
                  local_108.y = fVar45;
                  local_108.x = fVar42;
                  local_108.z = fVar43;
                  local_118.x = 0.0;
                  local_118.y = 0.0;
                  local_118._8_8_ = local_118._8_8_ & 0xffffffff00000000;
                  if (Il2CppMethodInitialized_18433de5c == '\0') {
                    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
                    Il2CppMethodInitialized_18433de5c = '\x01';
                  }
                  pUVar13 = TypeInfo_UnityEngine_Vector3->static_fields;
                  local_118.x = (pUVar13->upVector).fields.x;
                  local_118.y = (pUVar13->upVector).fields.y;
                  local_118.z = (pUVar13->upVector).fields.z;
                  pUVar29 = UnityEngine_Quaternion__Internal_LookRotation
                                      ((UnityEngine_Quaternion_o *)local_d8,
                                       (UnityEngine_Vector3_o *)&local_108,(UnityEngine_Vector3_o *)&local_118
                                       ,(MethodInfo *)0x0);
                  if (pUVar31 != (UnityEngine_Transform_o *)0x0) {
                    local_108.x = (pUVar29->fields).x;
                    local_108.y = (pUVar29->fields).y;
                    local_108.z = (pUVar29->fields).z;
                    local_108.w = (pUVar29->fields).w;
                    UnityEngine_Transform__set_rotation
                              (pUVar31,(UnityEngine_Quaternion_o *)&local_108,(MethodInfo *)0x0);
                    if ((TypeInfo_Characters_CharacterData->_2).cctor_finished_or_no_cctor == 0) {
                      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_CharacterData);
                    }
                    pSVar16 = TypeInfo_Characters_CharacterData->static_fields->HumanWeaponInfo;
                    if (pSVar16 != (SimpleJSONFixed_JSONNode_o *)0x0) {
                      pSVar32 = (*(pSVar16->klass->vtable)._7_get_Item.methodPtr)
                                          (pSVar16,(MethodInfo *)"APG");
                      pSVar17 = TypeInfo_Settings_SettingsManager->static_fields->InGameCurrent;
                      if (((pSVar17 != (Settings_InGameSet_o *)0x0) &&
                          (pSVar18 = (pSVar17->fields).Misc, pSVar18 != (Settings_InGameMiscSettings_o *)0x0))
                         && (pSVar19 = (pSVar18->fields).APGPVP, pSVar19 != (Settings_BoolSetting_o *)0x0)) {
                        if ((pSVar19->fields)._value != false) {
                          if ((TypeInfo_Characters_CharacterData->_2).cctor_finished_or_no_cctor == 0) {
                            il2cpp_codegen_runtime_class_init
                                      ((Il2CppClass *)TypeInfo_Characters_CharacterData);
                          }
                          pSVar16 = TypeInfo_Characters_CharacterData->static_fields->HumanWeaponInfo;
                          if (pSVar16 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_18216459d;
                          pSVar32 = (*(pSVar16->klass->vtable)._7_get_Item.methodPtr)
                                              (pSVar16,(MethodInfo *)"APGPVP");
                        }
                        pCVar14 = (__this_00->fields).HumanCache;
                        if ((pCVar14 != (Characters_HumanComponentCache_o *)0x0) &&
                           (pCVar15 = (pCVar14->fields).APGHit, pCVar15 != (Characters_BaseHitbox_o *)0x0)) {
                          pUVar20 = (pCVar15->fields)._collider;
                          if (pUVar20 != (UnityEngine_Collider_o *)0x0) {
                            bVar11 = (TypeInfo_UnityEngine_CapsuleCollider->_2).typeHierarchyDepth;
                            if (((pUVar20->klass->_2).typeHierarchyDepth < bVar11) ||
                               (__this_04 = pUVar20,
                               (pUVar20->klass->_2).typeHierarchy[(ulonglong)bVar11 - 1] !=
                               (Il2CppClass *)TypeInfo_UnityEngine_CapsuleCollider)) {
                              il2cpp_codegen_raise_invalid_cast_exception(pUVar20);
                            }
                          }
                          if (((pSVar32 != (System_Xml_Schema_XmlSchema_o *)0x0) &&
                              (pSVar30 = (*(pSVar32->klass->vtable)._7_get_IdAttribute.methodPtr)
                                                   (pSVar32,(MethodInfo *)"Radius"),
                              pSVar30 != (System_String_o *)0x0)) &&
                             (fVar44 = (float)(*(code *)((Il2CppClass *)pSVar30->klass)->vtable[37].methodPtr)
                                                        (pSVar30,((Il2CppClass *)pSVar30->klass)->vtable[37].method),
                             __this_04 != (UnityEngine_Collider_o *)0x0)) {
                            UnityEngine_CapsuleCollider__set_radius
                                      ((UnityEngine_CapsuleCollider_o *)__this_04,fVar44,(MethodInfo *)0x0);
                            pSVar30 = (*(pSVar32->klass->vtable)._7_get_IdAttribute.methodPtr)
                                                (pSVar32,(MethodInfo *)"Range1Multiplier");
                            if (pSVar30 != (System_String_o *)0x0) {
                              local_res18[0] =
                                   (float)(*(code *)((Il2CppClass *)pSVar30->klass)->vtable[37].methodPtr)
                                                    (pSVar30,((Il2CppClass *)pSVar30->klass)->vtable[37].method);
                              pSVar30 = (*(pSVar32->klass->vtable)._7_get_IdAttribute.methodPtr)
                                                  (pSVar32,(MethodInfo *)"Range2Multiplier");
                              if (pSVar30 != (System_String_o *)0x0) {
                                local_res8[0] =
                                     (float)(*(code *)((Il2CppClass *)pSVar30->klass)->vtable[37].methodPtr)
                                                      (pSVar30,((Il2CppClass *)pSVar30->klass)->vtable[37].method);
                                pSVar30 = (*(pSVar32->klass->vtable)._7_get_IdAttribute.methodPtr)
                                                    (pSVar32,(MethodInfo *)"Range1Constant");
                                if (pSVar30 != (System_String_o *)0x0) {
                                  fVar44 = (float)(*(code *)((Il2CppClass *)pSVar30->klass)->vtable[37].methodPtr)
                                                            (pSVar30,pSVar30->klass[1]._1.
                                                                     implementedInterfaces);
                                  pSVar30 = (*(pSVar32->klass->vtable)._7_get_IdAttribute.methodPtr)
                                                      (pSVar32,(MethodInfo *)"Range2Constant");
                                  if (pSVar30 != (System_String_o *)0x0) {
                                    fVar35 = (float)(*(code *)((Il2CppClass *)pSVar30->klass)->vtable[37].methodPtr)
                                                              (pSVar30,pSVar30->klass[1]._1.
                                                                       implementedInterfaces);
                                    pSVar30 = (*(pSVar32->klass->vtable)._7_get_IdAttribute.methodPtr)
                                                        (pSVar32,(MethodInfo *)"MinRange");
                                    if (pSVar30 != (System_String_o *)0x0) {
                                      fVar36 = (float)(*(code *)((Il2CppClass *)pSVar30->klass)->vtable[37].methodPtr)
                                                                (pSVar30,pSVar30->klass[1]._1.
                                                                         implementedInterfaces);
                                      pSVar30 = (*(pSVar32->klass->vtable)._7_get_IdAttribute.methodPtr)
                                                          (pSVar32,(MethodInfo *)"MaxRange");
                                      if (pSVar30 != (System_String_o *)0x0) {
                                        fVar37 = (float)(*(code *)((Il2CppClass *)pSVar30->klass)->vtable[37].methodPtr)
                                                                  (pSVar30,pSVar30->klass[1]._1.
                                                                           implementedInterfaces);
                                        pUVar12 = (__this_00->fields).Cache;
                                        if ((pUVar12 != (Utility_BaseComponentCache_o *)0x0) &&
                                           (__this_02 = (pUVar12->fields).Rigidbody,
                                           __this_02 != (UnityEngine_Rigidbody_o *)0x0)) {
                                          pUVar28 = UnityEngine_Rigidbody__get_linearVelocity
                                                              ((UnityEngine_Vector3_o *)&local_108,__this_02,
                                                               (MethodInfo *)0x0);
                                          local_130._0_4_ = (pUVar28->fields).x;
                                          local_130._4_4_ = (pUVar28->fields).y;
                                          local_128 = (pUVar28->fields).z;
                                          fVar38 = (float)il2cpp_runtime_helper_180546a40(&local_130,0);
                                          pSVar30 = (*(pSVar32->klass->vtable)._7_get_IdAttribute.methodPtr)
                                                              (pSVar32,(MethodInfo *)"Range2Speed");
                                          if (pSVar30 != (System_String_o *)0x0) {
                                            fVar39 = (float)(*(code *)((Il2CppClass *)pSVar30->klass)->vtable[37].methodPtr)
                                                                      (pSVar30);
                                            if (fVar38 <= fVar39) {
                                              fVar35 = fVar38 * local_res18[0] + fVar44;
                                            }
                                            else {
                                              fVar35 = fVar38 * local_res8[0] + fVar35;
                                            }
                                            if ((fVar36 <= fVar35) && (fVar36 = fVar37, fVar35 <= fVar37)) {
                                              fVar36 = fVar35;
                                            }
                                            UnityEngine_CapsuleCollider__set_height
                                                      ((UnityEngine_CapsuleCollider_o *)__this_04,fVar36,
                                                       (MethodInfo *)0x0);
                                            local_108.x = 0.0;
                                            local_108.y = 0.0;
                                            fVar44 = UnityEngine_CapsuleCollider__get_height
                                                               ((UnityEngine_CapsuleCollider_o *)__this_04,
                                                                (MethodInfo *)0x0);
                                            local_108.z = fVar44 * 0.5 + 0.5;
                                            UnityEngine_CapsuleCollider__set_center
                                                      ((UnityEngine_CapsuleCollider_o *)__this_04,
                                                       (UnityEngine_Vector3_o *)&local_108,(MethodInfo *)0x0);
                                            fVar44 = UnityEngine_CapsuleCollider__get_height
                                                               ((UnityEngine_CapsuleCollider_o *)__this_04,
                                                                (MethodInfo *)0x0);
                                            fVar44 = fVar44 * 1.2;
                                            fVar35 = UnityEngine_CapsuleCollider__get_radius
                                                               ((UnityEngine_CapsuleCollider_o *)__this_04,
                                                                (MethodInfo *)0x0);
                                            fVar36 = UnityEngine_CapsuleCollider__get_height
                                                               ((UnityEngine_CapsuleCollider_o *)__this_04,
                                                                (MethodInfo *)0x0);
                                            fVar37 = (fVar42 * fVar36 + fVar40 + fVar40) * 0.5;
                                            fVar38 = (fVar43 * fVar36 + fVar41 + fVar41) * 0.5;
                                            fVar36 = (fVar45 * fVar36 + local_e8.x + local_e8.x) * 0.5;
                                            settings = (System_Object_array *)
                                                       SZArrayNew(TypeInfo_object_array,5);
                                            local_118.y = fVar45 * fVar44 * 0.5 + fVar36;
                                            local_118.x = fVar42 * fVar44 * 0.5 + fVar37;
                                            local_118.z = fVar43 * fVar44 * 0.5 + fVar38;
                                            pIVar33 = il2cpp_value_box((Il2CppClass *)TypeInfo_UnityEngine_Vector3,
                                                                  &local_118);
                                            if (settings == (System_Object_array *)0x0) {
label_182164602:
                                              ThrowNullReferenceException();
                                            }
                                            if ((pIVar33 != (Il2CppObject *)0x0) &&
                                               (pIVar34 = il2cpp_vm_Object_IsInst
                                                                    (pIVar33,(((settings->obj).klass)->_1).
                                                                             element_class),
                                               pIVar34 == (Il2CppObject *)0x0)) {
                                              pIVar33 = il2cpp_codegen_get_array_type_mismatch_exception();
                                              il2cpp_codegen_raise_exception(pIVar33,(MethodInfo *)0x0);
                                            }
                                            if ((int)settings->max_length != 0) {
                                              settings->m_Items[0] = pIVar33;
                                              Il2CppCodeGenWriteBarrier(settings->m_Items,pIVar33);
                                              local_128 = fVar38 - fVar43 * fVar44 * 0.5;
                                              local_130 = CONCAT44(fVar36 - fVar45 * fVar44 * 0.5,
                                                                   fVar37 - fVar42 * fVar44 * 0.5);
                                              pIVar33 = il2cpp_value_box((Il2CppClass *)
                                                                    TypeInfo_UnityEngine_Vector3,&local_130);
                                              if ((pIVar33 != (Il2CppObject *)0x0) &&
                                                 (pIVar34 = il2cpp_vm_Object_IsInst
                                                                      (pIVar33,(((settings->obj).klass)->_1).
                                                                               element_class),
                                                 pIVar34 == (Il2CppObject *)0x0)) {
                                                pIVar33 = il2cpp_codegen_get_array_type_mismatch_exception();
                                                il2cpp_codegen_raise_exception(pIVar33,(MethodInfo *)0x0);
                                              }
                                              if (1 < (uint)settings->max_length) {
                                                settings->m_Items[1] = pIVar33;
                                                Il2CppCodeGenWriteBarrier(settings->m_Items + 1,pIVar33);
                                                local_res8[0] = fVar35 * 4.0;
                                                pIVar33 = il2cpp_value_box(g_data_184354e38,local_res8);
                                                if ((pIVar33 != (Il2CppObject *)0x0) &&
                                                   (pIVar34 = il2cpp_vm_Object_IsInst
                                                                        (pIVar33,(((settings->obj).klass)->_1)
                                                                                 .element_class),
                                                   pIVar34 == (Il2CppObject *)0x0)) {
                                                  pIVar33 = il2cpp_codegen_get_array_type_mismatch_exception()
                                                  ;
                                                  il2cpp_codegen_raise_exception(pIVar33,(MethodInfo *)0x0);
                                                }
                                                if (2 < (uint)settings->max_length) {
                                                  settings->m_Items[2] = pIVar33;
                                                  Il2CppCodeGenWriteBarrier(settings->m_Items + 2,pIVar33);
                                                  local_res18[0] = fVar35 * 4.0;
                                                  pIVar33 = il2cpp_value_box(g_data_184354e38,local_res18);
                                                  if ((pIVar33 != (Il2CppObject *)0x0) &&
                                                     (pIVar34 = il2cpp_vm_Object_IsInst
                                                                          (pIVar33,(((settings->obj).klass)->
                                                                                   _1).element_class),
                                                     pIVar34 == (Il2CppObject *)0x0)) {
                                                    pIVar33 = il2cpp_codegen_get_array_type_mismatch_exception
                                                                        ();
                                                    il2cpp_codegen_raise_exception(pIVar33,(MethodInfo *)0x0);
                                                  }
                                                  if (3 < (uint)settings->max_length) {
                                                    settings->m_Items[3] = pIVar33;
                                                    Il2CppCodeGenWriteBarrier(settings->m_Items + 3,pIVar33);
                                                    local_res20[0] = 0x3e800000;
                                                    pIVar33 = il2cpp_value_box(g_data_184354e38,local_res20);
                                                    if ((pIVar33 != (Il2CppObject *)0x0) &&
                                                       (pIVar34 = il2cpp_vm_Object_IsInst
                                                                            (pIVar33,(((settings->obj).klass)
                                                                                     ->_1).element_class),
                                                       pIVar34 == (Il2CppObject *)0x0)) {
                                                      pIVar33 = 
                                                       il2cpp_codegen_get_array_type_mismatch_exception();
                                                      il2cpp_codegen_raise_exception
                                                                (pIVar33,(MethodInfo *)0x0);
                                                    }
                                                    if (4 < (uint)settings->max_length) {
                                                      settings->m_Items[4] = pIVar33;
                                                      Il2CppCodeGenWriteBarrier(settings->m_Items + 4,pIVar33)
                                                      ;
                                                      if ((TypeInfo_Effects_EffectPrefabs->_2).
                                                          cctor_finished_or_no_cctor == 0) {
                                                        il2cpp_codegen_runtime_class_init
                                                                  ((Il2CppClass *)
                                                                   TypeInfo_Effects_EffectPrefabs);
                                                      }
                                                      pSVar30 = TypeInfo_Effects_EffectPrefabs->static_fields
                                                                ->APGTrail;
                                                      if (Il2CppMethodInitialized_18433de5b == '\0') {
                                                        il2cpp_codegen_initialize_runtime_metadata
                                                                  (&TypeInfo_UnityEngine_Quaternion);
                                                        Il2CppMethodInitialized_18433de5b = '\x01';
                                                      }
                                                      pUVar21 = TypeInfo_UnityEngine_Quaternion->static_fields
                                                      ;
                                                      uVar25._0_4_ = (pUVar21->identityQuaternion).fields.x;
                                                      uVar25._4_4_ = (pUVar21->identityQuaternion).fields.y;
                                                      uVar26._0_4_ = (pUVar21->identityQuaternion).fields.z;
                                                      uVar26._4_4_ = (pUVar21->identityQuaternion).fields.w;
                                                      if ((TypeInfo_Effects_EffectSpawner->_2).
                                                          cctor_finished_or_no_cctor == 0) {
                                                        il2cpp_codegen_runtime_class_init
                                                                  ((Il2CppClass *)
                                                                   TypeInfo_Effects_EffectSpawner);
                                                      }
                                                      local_108.z = fVar41;
                                                      local_108.y = local_e8.x;
                                                      local_108.x = fVar40;
                                                      local_d8[0]._0_8_ = uVar25;
                                                      local_d8[0]._8_8_ = uVar26;
                                                      Effects_EffectSpawner__Spawn
                                                                (pSVar30,(UnityEngine_Vector3_o *)&local_108,
                                                                 (UnityEngine_Quaternion_o *)local_d8,1.0,true
                                                                 ,settings,(MethodInfo *)0x0);
                                                      pCVar14 = (__this_00->fields).HumanCache;
                                                      if ((pCVar14 != (Characters_HumanComponentCache_o *)0x0)
                                                         && (pCVar15 = (pCVar14->fields).APGHit,
                                                            pCVar15 != (Characters_BaseHitbox_o *)0x0)) {
                                                        Characters_BaseHitbox__Activate
                                                                  (pCVar15,0.0,0.1,(MethodInfo *)0x0);
                                                        if ((__this_00->fields).AI != false) {
                                                          return;
                                                        }
                                                        if ((TypeInfo_UI_UIManager->_2).
                                                            cctor_finished_or_no_cctor == 0) {
                                                          il2cpp_codegen_runtime_class_init
                                                                    ((Il2CppClass *)TypeInfo_UI_UIManager);
                                                        }
                                                        pUVar22 = TypeInfo_UI_UIManager->static_fields->
                                                                  CurrentMenu;
                                                        if (pUVar22 != (UI_BaseMenu_o *)0x0) {
                                                          bVar11 = (TypeInfo_UI_InGameMenu->_2).
                                                                   typeHierarchyDepth;
                                                          if (((pUVar22->klass->_2).typeHierarchyDepth <
                                                               bVar11) ||
                                                             ((pUVar22->klass->_2).typeHierarchy
                                                              [(ulonglong)bVar11 - 1] !=
                                                              (Il2CppClass *)TypeInfo_UI_InGameMenu)) {
                                                            il2cpp_codegen_raise_invalid_cast_exception
                                                                      (pUVar22);
                                                          }
                                                          __this_03 = (UI_HUDBottomHandler_o *)
                                                                      (*(uint64_t *)((char *)pUVar22 + 0xb8));
                                                          if (__this_03 != (UI_HUDBottomHandler_o *)0x0) {
                                                            UI_HUDBottomHandler__ShootAPG
                                                                      (__this_03,(MethodInfo *)0x0);
                                                            return;
                                                          }
                                                        }
                                                        goto label_18216459d;
                                                      }
                                                      goto label_182164602;
                                                    }
                                                  }
                                                }
                                              }
                                            }
                                            ThrowIndexOutOfRangeException();
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
              }
            }
          }
        }
      }
    }
  }
label_18216459d:
  ThrowNullReferenceException();
}


