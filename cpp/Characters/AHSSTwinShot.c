// Type: Characters.AHSSTwinShot
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Characters/AHSSTwinShot.cs
// Prior real C# source (older reference): Assets/Scripts/Characters/Human/Specials/AHSSTwinShotSpecial.cs
// --------------------------------

// Characters.AHSSTwinShot$$.ctor
// il2cpp: void Characters_AHSSTwinShot___ctor (Characters_AHSSTwinShot_o* __this, Characters_BaseCharacter_o* owner, const MethodInfo* method);
// 0x1821625b0

void Characters_AHSSTwinShot___ctor
               (Characters_AHSSTwinShot_o *__this,Characters_BaseCharacter_o *owner,MethodInfo *method)

{
  Characters_ExtendedUseable___ctor((Characters_SimpleUseable_o *)__this,owner,(MethodInfo *)0x0);
  (__this->fields).Cooldown = 1.0;
  return;
}


// Characters.AHSSTwinShot$$GetActiveTime
// il2cpp: float Characters_AHSSTwinShot__GetActiveTime (Characters_AHSSTwinShot_o* __this, const MethodInfo* method);
// 0x182162410

float Characters_AHSSTwinShot__GetActiveTime(Characters_AHSSTwinShot_o *__this,MethodInfo *method)

{
  SimpleJSONFixed_JSONNode_o *pSVar1;
  System_Xml_Schema_XmlSchema_o *pSVar2;
  longlong *plVar3;
  float fVar4;
  
  if (Il2CppMethodInitialized_184346cd8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_CharacterData);
    il2cpp_codegen_initialize_runtime_metadata(&"FireDelay");
    il2cpp_codegen_initialize_runtime_metadata(&"AHSS");
    Il2CppMethodInitialized_184346cd8 = '\x01';
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


// Characters.AHSSTwinShot$$CanUse
// il2cpp: bool Characters_AHSSTwinShot__CanUse (Characters_AHSSTwinShot_o* __this, const MethodInfo* method);
// 0x182161850

bool Characters_AHSSTwinShot__CanUse(Characters_AHSSTwinShot_o *__this,MethodInfo *method)

{
  byte bVar1;
  Characters_BaseCharacter_o *pCVar2;
  Photon_Pun_PhotonView_o *pPVar3;
  Photon_Pun_PhotonView_c *pPVar4;
  bool bVar5;
  
  if (Il2CppMethodInitialized_184346cd9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_AmmoWeapon);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_Human);
    Il2CppMethodInitialized_184346cd9 = '\x01';
  }
  pCVar2 = (__this->fields)._owner;
  if (pCVar2 != (Characters_BaseCharacter_o *)0x0) {
    bVar1 = (TypeInfo_Characters_Human->_2).typeHierarchyDepth;
    if (((pCVar2->klass->_2).typeHierarchyDepth < bVar1) ||
       ((pCVar2->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] != (Il2CppClass *)TypeInfo_Characters_Human))
    {
      il2cpp_codegen_raise_invalid_cast_exception(pCVar2);
    }
    pPVar3 = (*(uint64_t *)((char *)pCVar2 + 0x118));
    if (pPVar3 != (Photon_Pun_PhotonView_o *)0x0) {
      pPVar4 = pPVar3->klass;
      bVar1 = (TypeInfo_Characters_AmmoWeapon->_2).typeHierarchyDepth;
      if ((bVar1 <= (pPVar4->_2).typeHierarchyDepth) &&
         ((pPVar4->_2).typeHierarchy[(ulonglong)bVar1 - 1] == (Il2CppClass *)TypeInfo_Characters_AmmoWeapon))
      {
        bVar1 = (TypeInfo_Characters_AmmoWeapon->_2).typeHierarchyDepth;
        if (((pPVar4->_2).typeHierarchyDepth < bVar1) ||
           ((pPVar4->_2).typeHierarchy[(ulonglong)bVar1 - 1] != (Il2CppClass *)TypeInfo_Characters_AmmoWeapon)
           ) {
          il2cpp_codegen_raise_invalid_cast_exception(pPVar3);
        }
        bVar5 = Characters_BaseUseable__CanUse((Characters_BaseUseable_o *)__this,(MethodInfo *)0x0);
        if (bVar5) {
          if (1 < *(int *)&(pPVar3->fields).mixedModeIsReliable) {
            return true;
          }
          return *(int *)&(pPVar3->fields).mixedModeIsReliable == -1;
        }
      }
    }
    return false;
  }
  ThrowNullReferenceException();
}


// Characters.AHSSTwinShot$$OnUse
// il2cpp: void Characters_AHSSTwinShot__OnUse (Characters_AHSSTwinShot_o* __this, const MethodInfo* method);
// 0x1821624d0

void Characters_AHSSTwinShot__OnUse(Characters_AHSSTwinShot_o *__this,MethodInfo *method)

{
  byte bVar1;
  Characters_BaseCharacter_o *pCVar2;
  Photon_Pun_PhotonView_o *pPVar3;
  int iVar4;
  int iVar5;
  
  if (Il2CppMethodInitialized_184346cda == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_AmmoWeapon);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_Human);
    Il2CppMethodInitialized_184346cda = '\x01';
  }
  Characters_BaseUseable__OnUse((Characters_BaseUseable_o *)__this,(MethodInfo *)0x0);
  pCVar2 = (__this->fields)._owner;
  if (pCVar2 != (Characters_BaseCharacter_o *)0x0) {
    bVar1 = (TypeInfo_Characters_Human->_2).typeHierarchyDepth;
    if (((pCVar2->klass->_2).typeHierarchyDepth < bVar1) ||
       ((pCVar2->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] != (Il2CppClass *)TypeInfo_Characters_Human))
    {
      il2cpp_codegen_raise_invalid_cast_exception(pCVar2);
    }
    pPVar3 = (*(uint64_t *)((char *)pCVar2 + 0x118));
    if (pPVar3 != (Photon_Pun_PhotonView_o *)0x0) {
      bVar1 = (TypeInfo_Characters_AmmoWeapon->_2).typeHierarchyDepth;
      if ((bVar1 <= (pPVar3->klass->_2).typeHierarchyDepth) &&
         ((pPVar3->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] ==
          (Il2CppClass *)TypeInfo_Characters_AmmoWeapon)) {
        if (-1 < *(int *)&(pPVar3->fields).mixedModeIsReliable) {
          iVar4 = *(int *)&(pPVar3->fields).mixedModeIsReliable + -2;
          iVar5 = 0;
          if (-1 < iVar4) {
            iVar5 = iVar4;
          }
          *(int *)&(pPVar3->fields).mixedModeIsReliable = iVar5;
        }
        return;
      }
      il2cpp_codegen_raise_invalid_cast_exception(pPVar3);
    }
  }
  ThrowNullReferenceException();
}


// Characters.AHSSTwinShot$$Deactivate
// il2cpp: void Characters_AHSSTwinShot__Deactivate (Characters_AHSSTwinShot_o* __this, const MethodInfo* method);
// 0x182161980

void Characters_AHSSTwinShot__Deactivate(Characters_AHSSTwinShot_o *__this,MethodInfo *method)

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
  Characters_Human_c *pCVar12;
  Utility_BaseComponentCache_o *pUVar13;
  UnityEngine_Vector3_StaticFields *pUVar14;
  SimpleJSONFixed_JSONNode_o *pSVar15;
  Characters_HumanComponentCache_o *pCVar16;
  Characters_BaseHitbox_o *pCVar17;
  UnityEngine_CapsuleCollider_o *__this_01;
  UnityEngine_Rigidbody_o *__this_02;
  UI_BaseMenu_o *pUVar18;
  UI_HUDBottomHandler_o *__this_03;
  undefined8 uVar19;
  ulonglong uVar20;
  UnityEngine_Vector3_o *pUVar21;
  UnityEngine_Quaternion_o *pUVar22;
  System_String_o *pSVar23;
  System_Xml_Schema_XmlSchema_o *pSVar24;
  UnityEngine_Transform_o *pUVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  undefined8 local_d8;
  float local_d0;
  UnityEngine_Quaternion_Fields local_c8;
  UnityEngine_Quaternion_Fields local_b8;
  UnityEngine_Quaternion_Fields local_a8;
  UnityEngine_Quaternion_o local_98 [9];
  
  if (Il2CppMethodInitialized_184346cdb == '\0') {
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
    Il2CppMethodInitialized_184346cdb = '\x01';
  }
  __this_00 = (Characters_Human_o *)(__this->fields)._owner;
  local_a8.x = 0.0;
  local_a8.y = 0.0;
  local_a8.z = 0.0;
  local_a8.w = 0.0;
  if (__this_00 != (Characters_Human_o *)0x0) {
    pCVar12 = __this_00->klass;
    bVar11 = (TypeInfo_Characters_Human->_2).typeHierarchyDepth;
    if (((pCVar12->_2).typeHierarchyDepth < bVar11) ||
       ((pCVar12->_2).typeHierarchy[(ulonglong)bVar11 - 1] != (Il2CppClass *)TypeInfo_Characters_Human)) {
      il2cpp_codegen_raise_invalid_cast_exception(__this_00);
    }
    pUVar21 = (*(pCVar12->vtable)._76_GetAimPoint.methodPtr)
                        ((UnityEngine_Vector3_o *)&local_b8,__this_00,(pCVar12->vtable)._76_GetAimPoint.method
                        );
    pUVar13 = (__this_00->fields).Cache;
    if ((pUVar13 != (Utility_BaseComponentCache_o *)0x0) &&
       (pUVar25 = (pUVar13->fields).Transform, pUVar25 != (UnityEngine_Transform_o *)0x0)) {
      uVar1 = (pUVar21->fields).x;
      uVar6 = (pUVar21->fields).y;
      fVar31 = (pUVar21->fields).z;
      pUVar21 = UnityEngine_Transform__get_position
                          ((UnityEngine_Vector3_o *)&local_b8,pUVar25,(MethodInfo *)0x0);
      uVar2 = (pUVar21->fields).x;
      uVar7 = (pUVar21->fields).y;
      fVar29 = fVar31 - (pUVar21->fields).z;
      local_d8 = CONCAT44((float)uVar6 - (float)uVar7,(float)uVar1 - (float)uVar2);
      local_d0 = fVar29;
      if (Il2CppMethodInitialized_18433de5f == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
        Il2CppMethodInitialized_18433de5f = '\x01';
      }
      fVar26 = (float)il2cpp_runtime_helper_180546a40(&local_d8,0);
      if (fVar26 <= 1e-05) {
        pUVar14 = TypeInfo_UnityEngine_Vector3->static_fields;
        fVar27 = (pUVar14->zeroVector).fields.x;
        fVar32 = (pUVar14->zeroVector).fields.y;
        fVar29 = (pUVar14->zeroVector).fields.z;
      }
      else {
        fVar27 = ((float)uVar1 - (float)uVar2) / fVar26;
        fVar32 = ((float)uVar6 - (float)uVar7) / fVar26;
        fVar29 = fVar29 / fVar26;
      }
      pUVar13 = (__this_00->fields).Cache;
      if ((pUVar13 != (Utility_BaseComponentCache_o *)0x0) &&
         (pUVar25 = (pUVar13->fields).Transform, pUVar25 != (UnityEngine_Transform_o *)0x0)) {
        UnityEngine_Transform__get_forward((UnityEngine_Vector3_o *)&local_b8,pUVar25,(MethodInfo *)0x0);
        if ((__this_00->fields).Grounded == false) {
          if ((TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
          }
          pSVar23 = TypeInfo_Characters_HumanAnimations->static_fields->AHSSShootBothAir;
        }
        else {
          if ((TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
          }
          pSVar23 = TypeInfo_Characters_HumanAnimations->static_fields->AHSSShootBoth;
        }
        Characters_Human__set_State(__this_00,1,(MethodInfo *)0x0);
        (__this_00->fields).AttackAnimation = pSVar23;
        Il2CppCodeGenWriteBarrier(&(__this_00->fields).AttackAnimation,pSVar23);
        Characters_BaseCharacter__CrossFade
                  ((Characters_BaseCharacter_o *)__this_00,pSVar23,0.05,0.0,(MethodInfo *)0x0);
        local_b8.y = fVar32;
        local_b8.x = fVar27;
        local_c8.x = 0.0;
        local_c8.y = 0.0;
        local_c8.z = 0.0;
        local_b8.z = fVar29;
        if (Il2CppMethodInitialized_18433de5c == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
          Il2CppMethodInitialized_18433de5c = '\x01';
        }
        pUVar14 = TypeInfo_UnityEngine_Vector3->static_fields;
        local_c8.x = (pUVar14->upVector).fields.x;
        local_c8.y = (pUVar14->upVector).fields.y;
        local_c8.z = (pUVar14->upVector).fields.z;
        pUVar22 = UnityEngine_Quaternion__Internal_LookRotation
                            (local_98,(UnityEngine_Vector3_o *)&local_b8,(UnityEngine_Vector3_o *)&local_c8,
                             (MethodInfo *)0x0);
        local_a8.x = (pUVar22->fields).x;
        local_a8.y = (pUVar22->fields).y;
        local_a8.z = (pUVar22->fields).z;
        local_a8.w = (pUVar22->fields).w;
        pUVar21 = UnityEngine_Quaternion__Internal_ToEulerRad
                            ((UnityEngine_Vector3_o *)&local_c8,(UnityEngine_Quaternion_o *)&local_a8,
                             (MethodInfo *)0x0);
        uVar3 = (pUVar21->fields).x;
        uVar8 = (pUVar21->fields).y;
        local_b8.y = (float)uVar8 * 57.29578;
        local_b8.x = (float)uVar3 * 57.29578;
        local_b8.z = (pUVar21->fields).z * 57.29578;
        pUVar21 = UnityEngine_Quaternion__Internal_MakePositive
                            ((UnityEngine_Vector3_o *)&local_c8,(UnityEngine_Vector3_o *)&local_b8,
                             (MethodInfo *)0x0);
        local_b8._8_8_ = (ulonglong)(uint)local_b8.w << 0x20;
        fVar29 = (pUVar21->fields).y;
        (__this_00->fields).TargetAngle = fVar29;
        local_b8._0_8_ = (ulonglong)(uint)(fVar29 * 0.017453292) << 0x20;
        pUVar22 = UnityEngine_Quaternion__Internal_FromEulerRad
                            (local_98,(UnityEngine_Vector3_o *)&local_b8,(MethodInfo *)0x0);
        pUVar13 = (__this_00->fields).Cache;
        fVar29 = (pUVar22->fields).y;
        fVar26 = (pUVar22->fields).z;
        fVar27 = (pUVar22->fields).w;
        (__this_00->fields)._targetRotation.fields.x = (pUVar22->fields).x;
        (__this_00->fields)._targetRotation.fields.y = fVar29;
        (__this_00->fields)._targetRotation.fields.z = fVar26;
        (__this_00->fields)._targetRotation.fields.w = fVar27;
        if ((pUVar13 != (Utility_BaseComponentCache_o *)0x0) &&
           (pUVar25 = (pUVar13->fields).Transform, pUVar25 != (UnityEngine_Transform_o *)0x0)) {
          pUVar22 = UnityEngine_Transform__get_rotation(local_98,pUVar25,(MethodInfo *)0x0);
          local_b8.x = (__this_00->fields)._targetRotation.fields.x;
          local_b8.y = (__this_00->fields)._targetRotation.fields.y;
          local_b8.z = (__this_00->fields)._targetRotation.fields.z;
          local_b8.w = (__this_00->fields)._targetRotation.fields.w;
          local_c8.x = (pUVar22->fields).x;
          local_c8.y = (pUVar22->fields).y;
          local_c8.z = (pUVar22->fields).z;
          local_c8.w = (pUVar22->fields).w;
          fVar29 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
          pUVar22 = UnityEngine_Quaternion__Internal_Lerp
                              (local_98,(UnityEngine_Quaternion_o *)&local_c8,
                               (UnityEngine_Quaternion_o *)&local_b8,fVar29 * 30.0,(MethodInfo *)0x0);
          local_b8.x = (pUVar22->fields).x;
          local_b8.y = (pUVar22->fields).y;
          local_b8.z = (pUVar22->fields).z;
          local_b8.w = (pUVar22->fields).w;
          UnityEngine_Transform__set_rotation(pUVar25,(UnityEngine_Quaternion_o *)&local_b8,(MethodInfo *)0x0)
          ;
          pUVar13 = (__this_00->fields).Cache;
          if ((pUVar13 != (Utility_BaseComponentCache_o *)0x0) &&
             (pUVar25 = (pUVar13->fields).Transform, pUVar25 != (UnityEngine_Transform_o *)0x0)) {
            pUVar21 = UnityEngine_Transform__get_position
                                ((UnityEngine_Vector3_o *)&local_b8,pUVar25,(MethodInfo *)0x0);
            pUVar13 = (__this_00->fields).Cache;
            if ((pUVar13 != (Utility_BaseComponentCache_o *)0x0) &&
               (pUVar25 = (pUVar13->fields).Transform, pUVar25 != (UnityEngine_Transform_o *)0x0)) {
              uVar4 = (pUVar21->fields).x;
              uVar9 = (pUVar21->fields).y;
              fVar29 = (pUVar21->fields).z;
              pUVar21 = UnityEngine_Transform__get_up
                                  ((UnityEngine_Vector3_o *)&local_b8,pUVar25,(MethodInfo *)0x0);
              uVar5 = (pUVar21->fields).x;
              uVar10 = (pUVar21->fields).y;
              fVar26 = (float)uVar5 * 0.8 + (float)uVar4;
              fVar27 = (float)uVar10 * 0.8 + (float)uVar9;
              fVar29 = (pUVar21->fields).z * 0.8 + fVar29;
              fVar31 = fVar31 - fVar29;
              local_d8 = CONCAT44((float)uVar6 - fVar27,(float)uVar1 - fVar26);
              local_d0 = fVar31;
              if (Il2CppMethodInitialized_18433de5f == '\0') {
                il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
                Il2CppMethodInitialized_18433de5f = '\x01';
              }
              fVar32 = (float)il2cpp_runtime_helper_180546a40(&local_d8,0);
              if (fVar32 <= 1e-05) {
                pUVar14 = TypeInfo_UnityEngine_Vector3->static_fields;
                fVar28 = (pUVar14->zeroVector).fields.x;
                fVar30 = (pUVar14->zeroVector).fields.y;
                fVar31 = (pUVar14->zeroVector).fields.z;
              }
              else {
                fVar28 = ((float)uVar1 - fVar26) / fVar32;
                fVar30 = ((float)uVar6 - fVar27) / fVar32;
                fVar31 = fVar31 / fVar32;
              }
              if ((TypeInfo_Effects_EffectPrefabs->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Effects_EffectPrefabs);
              }
              local_b8.y = fVar30;
              local_b8.x = fVar28;
              local_b8.z = fVar31;
              pSVar23 = TypeInfo_Effects_EffectPrefabs->static_fields->GunExplode;
              local_c8.x = 0.0;
              local_c8.y = 0.0;
              local_c8._8_8_ = local_c8._8_8_ & 0xffffffff00000000;
              if (Il2CppMethodInitialized_18433de5c == '\0') {
                il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
                Il2CppMethodInitialized_18433de5c = '\x01';
              }
              pUVar14 = TypeInfo_UnityEngine_Vector3->static_fields;
              local_c8.x = (pUVar14->upVector).fields.x;
              local_c8.y = (pUVar14->upVector).fields.y;
              local_c8.z = (pUVar14->upVector).fields.z;
              pUVar22 = UnityEngine_Quaternion__Internal_LookRotation
                                  (local_98,(UnityEngine_Vector3_o *)&local_b8,
                                   (UnityEngine_Vector3_o *)&local_c8,(MethodInfo *)0x0);
              uVar19._0_4_ = (pUVar22->fields).x;
              uVar19._4_4_ = (pUVar22->fields).y;
              uVar20._0_4_ = (pUVar22->fields).z;
              uVar20._4_4_ = (pUVar22->fields).w;
              if ((TypeInfo_Effects_EffectSpawner->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Effects_EffectSpawner);
              }
              local_b8._0_8_ = CONCAT44(fVar27,fVar26);
              local_b8.z = fVar29;
              local_c8._0_8_ = uVar19;
              local_c8._8_8_ = uVar20;
              Effects_EffectSpawner__Spawn
                        (pSVar23,(UnityEngine_Vector3_o *)&local_b8,(UnityEngine_Quaternion_o *)&local_c8,2.0,
                         true,(System_Object_array *)0x0,(MethodInfo *)0x0);
              if ((TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
              }
              pSVar23 = Characters_HumanSounds__GetRandomAHSSGunShotDouble((MethodInfo *)0x0);
              Characters_BaseCharacter__PlaySound
                        ((Characters_BaseCharacter_o *)__this_00,pSVar23,(MethodInfo *)0x0);
              if ((TypeInfo_Characters_CharacterData->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_CharacterData);
              }
              pSVar15 = TypeInfo_Characters_CharacterData->static_fields->HumanWeaponInfo;
              if (pSVar15 != (SimpleJSONFixed_JSONNode_o *)0x0) {
                pSVar24 = (*(pSVar15->klass->vtable)._7_get_Item.methodPtr)
                                    (pSVar15,(MethodInfo *)"AHSS");
                pCVar16 = (__this_00->fields).HumanCache;
                if (((pCVar16 != (Characters_HumanComponentCache_o *)0x0) &&
                    (pCVar17 = (pCVar16->fields).AHSSHit, pCVar17 != (Characters_BaseHitbox_o *)0x0)) &&
                   (pSVar24 != (System_Xml_Schema_XmlSchema_o *)0x0)) {
                  __this_01 = (UnityEngine_CapsuleCollider_o *)(pCVar17->fields)._collider;
                  pSVar23 = (*(pSVar24->klass->vtable)._7_get_IdAttribute.methodPtr)
                                      (pSVar24,(MethodInfo *)"Radius");
                  if (pSVar23 != (System_String_o *)0x0) {
                    fVar32 = (float)(*(code *)((Il2CppClass *)pSVar23->klass)->vtable[37].methodPtr)
                                              (pSVar23,((Il2CppClass *)pSVar23->klass)->vtable[37].method);
                    if (__this_01 != (UnityEngine_CapsuleCollider_o *)0x0) {
                      bVar11 = (TypeInfo_UnityEngine_CapsuleCollider->_2).typeHierarchyDepth;
                      if (((__this_01->klass->_2).typeHierarchyDepth < bVar11) ||
                         ((__this_01->klass->_2).typeHierarchy[(ulonglong)bVar11 - 1] !=
                          (Il2CppClass *)TypeInfo_UnityEngine_CapsuleCollider)) {
                        il2cpp_codegen_raise_invalid_cast_exception
                                  (__this_01,TypeInfo_UnityEngine_CapsuleCollider);
                      }
                      UnityEngine_CapsuleCollider__set_radius(__this_01,fVar32 + fVar32,(MethodInfo *)0x0);
                      pCVar16 = (__this_00->fields).HumanCache;
                      if ((pCVar16 != (Characters_HumanComponentCache_o *)0x0) &&
                         (pCVar17 = (pCVar16->fields).AHSSHit, pCVar17 != (Characters_BaseHitbox_o *)0x0)) {
                        pUVar25 = UnityEngine_Component__get_transform
                                            ((UnityEngine_Component_o *)pCVar17,(MethodInfo *)0x0);
                        if (pUVar25 != (UnityEngine_Transform_o *)0x0) {
                          local_b8.y = fVar27;
                          local_b8.x = fVar26;
                          UnityEngine_Transform__set_position
                                    (pUVar25,(UnityEngine_Vector3_o *)&local_b8,(MethodInfo *)0x0);
                          pCVar16 = (__this_00->fields).HumanCache;
                          if ((pCVar16 != (Characters_HumanComponentCache_o *)0x0) &&
                             (pCVar17 = (pCVar16->fields).AHSSHit, pCVar17 != (Characters_BaseHitbox_o *)0x0))
                          {
                            pUVar25 = UnityEngine_Component__get_transform
                                                ((UnityEngine_Component_o *)pCVar17,(MethodInfo *)0x0);
                            local_b8.y = fVar30;
                            local_b8.x = fVar28;
                            local_b8.z = fVar31;
                            local_c8.x = 0.0;
                            local_c8.y = 0.0;
                            local_c8._8_8_ = local_c8._8_8_ & 0xffffffff00000000;
                            if (Il2CppMethodInitialized_18433de5c == '\0') {
                              il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
                              Il2CppMethodInitialized_18433de5c = '\x01';
                            }
                            pUVar14 = TypeInfo_UnityEngine_Vector3->static_fields;
                            local_c8.x = (pUVar14->upVector).fields.x;
                            local_c8.y = (pUVar14->upVector).fields.y;
                            local_c8.z = (pUVar14->upVector).fields.z;
                            pUVar22 = UnityEngine_Quaternion__Internal_LookRotation
                                                (local_98,(UnityEngine_Vector3_o *)&local_b8,
                                                 (UnityEngine_Vector3_o *)&local_c8,(MethodInfo *)0x0);
                            if (pUVar25 != (UnityEngine_Transform_o *)0x0) {
                              local_b8.x = (pUVar22->fields).x;
                              local_b8.y = (pUVar22->fields).y;
                              local_b8.z = (pUVar22->fields).z;
                              local_b8.w = (pUVar22->fields).w;
                              UnityEngine_Transform__set_rotation
                                        (pUVar25,(UnityEngine_Quaternion_o *)&local_b8,(MethodInfo *)0x0);
                              pCVar16 = (__this_00->fields).HumanCache;
                              if ((pCVar16 != (Characters_HumanComponentCache_o *)0x0) &&
                                 (pCVar17 = (pCVar16->fields).AHSSHit,
                                 pCVar17 != (Characters_BaseHitbox_o *)0x0)) {
                                Characters_BaseHitbox__Activate(pCVar17,0.0,0.1,(MethodInfo *)0x0);
                                pUVar13 = (__this_00->fields).Cache;
                                if (pUVar13 != (Utility_BaseComponentCache_o *)0x0) {
                                  __this_02 = (pUVar13->fields).Rigidbody;
                                  pSVar23 = (*(pSVar24->klass->vtable)._7_get_IdAttribute.methodPtr)
                                                      (pSVar24,(MethodInfo *)"KnockbackForce");
                                  if (pSVar23 != (System_String_o *)0x0) {
                                    fVar29 = (float)(*(code *)((Il2CppClass *)pSVar23->klass)->vtable[37].methodPtr)
                                                              (pSVar23,pSVar23->klass[1]._1.
                                                                       implementedInterfaces);
                                    if (__this_02 != (UnityEngine_Rigidbody_o *)0x0) {
                                      local_b8.y = -fVar30 * fVar29 + -fVar30 * fVar29;
                                      local_b8.x = -fVar28 * fVar29 + -fVar28 * fVar29;
                                      local_b8.z = -fVar31 * fVar29 + -fVar31 * fVar29;
                                      UnityEngine_Rigidbody__AddForce
                                                (__this_02,(UnityEngine_Vector3_o *)&local_b8,2,
                                                 (MethodInfo *)0x0);
                                      if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
                                        il2cpp_codegen_runtime_class_init
                                                  ((Il2CppClass *)TypeInfo_UI_UIManager);
                                      }
                                      pUVar18 = TypeInfo_UI_UIManager->static_fields->CurrentMenu;
                                      if (pUVar18 != (UI_BaseMenu_o *)0x0) {
                                        bVar11 = (TypeInfo_UI_InGameMenu->_2).typeHierarchyDepth;
                                        if (((pUVar18->klass->_2).typeHierarchyDepth < bVar11) ||
                                           ((pUVar18->klass->_2).typeHierarchy[(ulonglong)bVar11 - 1] !=
                                            (Il2CppClass *)TypeInfo_UI_InGameMenu)) {
                                          il2cpp_codegen_raise_invalid_cast_exception(pUVar18);
                                        }
                                        __this_03 = (UI_HUDBottomHandler_o *)(*(uint64_t *)((char *)pUVar18 + 0xb8));
                                        if (__this_03 != (UI_HUDBottomHandler_o *)0x0) {
                                          UI_HUDBottomHandler__ShootAHSS
                                                    (__this_03,true,true,(MethodInfo *)0x0);
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
            }
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


