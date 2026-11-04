// Type: Characters.ThunderspearWeapon
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Characters/ThunderspearWeapon.cs
// Prior real C# source (older reference): Assets/Scripts/Characters/Human/Weapons/ThunderSpearWeapon.cs
// --------------------------------

// Characters.ThunderspearWeapon$$.ctor
// il2cpp: void Characters_ThunderspearWeapon___ctor (Characters_ThunderspearWeapon_o* __this, Characters_BaseCharacter_o* owner, int32_t ammo, int32_t ammoPerRound, float cooldown, float radius, float speed, float travelTime, float delay, SimpleJSONFixed_JSONNode_o* tsInfo, const MethodInfo* method);
// 0x1821792d0

void Characters_ThunderspearWeapon___ctor
               (Characters_ThunderspearWeapon_o *__this,Characters_BaseCharacter_o *owner,int32_t ammo,
               int32_t ammoPerRound,float cooldown,float radius,float speed,float travelTime,float delay,
               SimpleJSONFixed_JSONNode_o *tsInfo,MethodInfo *method)

{
  int32_t *piVar1;
  
  Characters_ExtendedUseable___ctor((Characters_SimpleUseable_o *)__this,owner,(MethodInfo *)0x0);
  (__this->fields).Cooldown = cooldown;
  (__this->fields).AmmoLeft = ammo;
  (__this->fields).MaxAmmo = ammo;
  (__this->fields).RoundLeft = ammoPerRound;
  (__this->fields).MaxRound = ammoPerRound;
  if (ammoPerRound == -1) {
    (__this->fields).RoundLeft = ammo;
    (__this->fields).AmmoLeft = 0;
  }
  else {
    piVar1 = &(__this->fields).AmmoLeft;
    *piVar1 = *piVar1 - ammoPerRound;
  }
  (__this->fields).Radius = radius;
  (__this->fields).Speed = speed;
  (__this->fields).TravelTime = travelTime;
  (__this->fields).Delay = delay;
  (__this->fields).TSInfo = tsInfo;
  Il2CppCodeGenWriteBarrier(&(__this->fields).TSInfo,tsInfo);
  return;
}


// Characters.ThunderspearWeapon$$Activate
// il2cpp: void Characters_ThunderspearWeapon__Activate (Characters_ThunderspearWeapon_o* __this, const MethodInfo* method);
// 0x182177de0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x182178943: movaps xmm10, xmm15

void Characters_ThunderspearWeapon__Activate(Characters_ThunderspearWeapon_o *__this,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined8 uVar6;
  byte bVar11;
  int32_t charViewId;
  Characters_Human_o *__this_00;
  Characters_BaseUseable_o *pCVar12;
  Characters_BaseUseable_c *pCVar13;
  Utility_BaseComponentCache_o *pUVar14;
  Characters_HumanSetup_o *pCVar15;
  UnityEngine_GameObject_o *pUVar16;
  UnityEngine_Vector3_StaticFields *pUVar17;
  Characters_Human_o *pCVar18;
  UnityEngine_Rigidbody_o *__this_01;
  Settings_InGameSet_o *pSVar19;
  Settings_InGameMiscSettings_o *pSVar20;
  Settings_BoolSetting_o *pSVar21;
  SimpleJSONFixed_JSONNode_o *pSVar22;
  Photon_Pun_PhotonView_o *pPVar23;
  Settings_AbilitySettings_o *pSVar24;
  Settings_ColorSetting_o *pSVar25;
  Utility_Color255_o *__this_02;
  UI_BaseMenu_o *pUVar26;
  UI_HUDBottomHandler_o *__this_03;
  Characters_StockSpecial_c *pCVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  bool bVar30;
  bool bVar31;
  bool bVar32;
  UnityEngine_Vector3_o *pUVar33;
  UnityEngine_Transform_o *pUVar34;
  System_String_o *pSVar35;
  UnityEngine_Quaternion_o *pUVar36;
  System_Xml_Schema_XmlSchema_o *pSVar37;
  System_Object_array *settings;
  Il2CppObject *pIVar38;
  Il2CppObject *pIVar39;
  UnityEngine_Color_o *pUVar40;
  Projectiles_ThunderspearProjectile_o *pPVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float local_res8 [2];
  float local_res18 [2];
  System_String_o *local_res20;
  UnityEngine_Vector3_Fields local_138;
  UnityEngine_Vector3_Fields local_128;
  UnityEngine_Color_Fields local_118;
  undefined1 local_108 [16];
  UnityEngine_Quaternion_Fields local_f8;
  UnityEngine_Color_Fields local_e8 [11];
  
  if (Il2CppMethodInitialized_184346d0c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Color);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanAnimations);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_Human);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_InGameMenu);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Projectiles_ProjectilePrefabs);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_StockSpecial);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Projectiles_ThunderspearProjectile);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_Color255_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"SpeedMultiplier");
    il2cpp_codegen_initialize_runtime_metadata(&"RangeMin");
    il2cpp_codegen_initialize_runtime_metadata(&"RangeMultiplier");
    il2cpp_codegen_initialize_runtime_metadata(&"RangeMax");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    il2cpp_codegen_initialize_runtime_metadata(&"Range");
    Il2CppMethodInitialized_184346d0c = '\x01';
  }
  pCVar27 = TypeInfo_Characters_StockSpecial;
  __this_00 = (Characters_Human_o *)(__this->fields)._owner;
  local_f8.x = 0.0;
  local_f8.y = 0.0;
  local_f8.z = 0.0;
  local_f8.w = 0.0;
  if (__this_00 == (Characters_Human_o *)0x0) goto label_182178e09;
  bVar11 = (TypeInfo_Characters_Human->_2).typeHierarchyDepth;
  if (((__this_00->klass->_2).typeHierarchyDepth < bVar11) ||
     ((__this_00->klass->_2).typeHierarchy[(ulonglong)bVar11 - 1] != (Il2CppClass *)TypeInfo_Characters_Human)
     ) {
    il2cpp_codegen_raise_invalid_cast_exception(__this_00);
  }
  if ((((__this_00->fields)._state == 1) || ((__this_00->fields)._state == 9)) &&
     (pCVar12 = (__this_00->fields).Special, pCVar12 != (Characters_BaseUseable_o *)0x0)) {
    pCVar13 = pCVar12->klass;
    bVar11 = (TypeInfo_Characters_StockSpecial->_2).typeHierarchyDepth;
    if ((bVar11 <= (pCVar13->_2).typeHierarchyDepth) &&
       ((pCVar13->_2).typeHierarchy[(ulonglong)bVar11 - 1] == (Il2CppClass *)TypeInfo_Characters_StockSpecial)
       ) {
      pCVar12 = (__this_00->fields).Special;
      bVar11 = (TypeInfo_Characters_StockSpecial->_2).typeHierarchyDepth;
      pCVar13 = pCVar12->klass;
      if (((pCVar13->_2).typeHierarchyDepth < bVar11) ||
         ((pCVar13->_2).typeHierarchy[(ulonglong)bVar11 - 1] !=
          (Il2CppClass *)TypeInfo_Characters_StockSpecial)) {
        il2cpp_codegen_raise_invalid_cast_exception(pCVar12,TypeInfo_Characters_StockSpecial);
      }
      (pCVar12->fields).IsActive = false;
      (*(pCVar13->vtable)._10_Deactivate.methodPtr)
                (pCVar12,(System_Type_o *)(pCVar13->vtable)._10_Deactivate.method,(MethodInfo *)pCVar27);
    }
  }
  pUVar33 = (*(__this_00->klass->vtable)._76_GetAimPoint.methodPtr)
                      ((UnityEngine_Vector3_o *)&local_118,__this_00,
                       (__this_00->klass->vtable)._76_GetAimPoint.method);
  pUVar14 = (__this_00->fields).Cache;
  if ((pUVar14 == (Utility_BaseComponentCache_o *)0x0) ||
     (pUVar34 = (pUVar14->fields).Transform, pUVar34 == (UnityEngine_Transform_o *)0x0)) goto label_182178e09;
  lVar5._0_4_ = (pUVar33->fields).x;
  lVar5._4_4_ = (pUVar33->fields).y;
  fVar50 = (pUVar33->fields).z;
  pUVar33 = UnityEngine_Transform__get_position((UnityEngine_Vector3_o *)&local_118,pUVar34,(MethodInfo *)0x0)
  ;
  uVar1 = (pUVar33->fields).x;
  uVar7 = (pUVar33->fields).y;
  fVar52 = fVar50 - (pUVar33->fields).z;
  local_138.y = (float)lVar5._4_4_ - (float)uVar7;
  local_138.x = (float)(undefined4)lVar5 - (float)uVar1;
  local_138.z = fVar52;
  if (Il2CppMethodInitialized_18433de5f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    Il2CppMethodInitialized_18433de5f = '\x01';
  }
  fVar42 = (float)il2cpp_runtime_helper_180546a40(&local_138,0);
  if (fVar42 <= 1e-05) {
    pUVar17 = TypeInfo_UnityEngine_Vector3->static_fields;
    fVar51 = (pUVar17->zeroVector).fields.x;
    fVar48 = (pUVar17->zeroVector).fields.y;
    fVar52 = (pUVar17->zeroVector).fields.z;
  }
  else {
    fVar51 = ((float)(undefined4)lVar5 - (float)uVar1) / fVar42;
    fVar48 = ((float)lVar5._4_4_ - (float)uVar7) / fVar42;
    fVar52 = fVar52 / fVar42;
  }
  pUVar14 = (__this_00->fields).Cache;
  if ((pUVar14 == (Utility_BaseComponentCache_o *)0x0) ||
     (pUVar34 = (pUVar14->fields).Transform, pUVar34 == (UnityEngine_Transform_o *)0x0)) goto label_182178e09;
  local_118.g = fVar48;
  pUVar33 = UnityEngine_Transform__get_forward((UnityEngine_Vector3_o *)&local_128,pUVar34,(MethodInfo *)0x0);
  pCVar15 = (__this_00->fields).Setup;
  if ((pCVar15 == (Characters_HumanSetup_o *)0x0) ||
     (pUVar16 = (pCVar15->fields)._part_blade_l, pUVar16 == (UnityEngine_GameObject_o *)0x0))
  goto label_182178e09;
  fVar42 = (pUVar33->fields).x;
  fVar48 = (pUVar33->fields).z;
  bVar30 = UnityEngine_GameObject__get_activeSelf(pUVar16,(MethodInfo *)0x0);
  pCVar15 = (__this_00->fields).Setup;
  if ((pCVar15 == (Characters_HumanSetup_o *)0x0) ||
     (pUVar16 = (pCVar15->fields)._part_blade_r, pUVar16 == (UnityEngine_GameObject_o *)0x0))
  goto label_182178e09;
  bVar31 = UnityEngine_GameObject__get_activeSelf(pUVar16,(MethodInfo *)0x0);
  bVar32 = Characters_ThunderspearWeapon__IsTwoShotMode(__this,(MethodInfo *)0x0);
  if (((bVar30) && ((fVar51 * fVar48 - fVar52 * fVar42 < 0.0 && ((__this_00->fields)._state != 0xd)))) ||
     (!bVar31)) {
    pCVar15 = (__this_00->fields).Setup;
    if (((pCVar15 == (Characters_HumanSetup_o *)0x0) ||
        (pUVar16 = (pCVar15->fields)._part_blade_l, pUVar16 == (UnityEngine_GameObject_o *)0x0)) ||
       (pUVar34 = UnityEngine_GameObject__get_transform(pUVar16,(MethodInfo *)0x0),
       pUVar34 == (UnityEngine_Transform_o *)0x0)) goto label_182178e09;
    pUVar33 = UnityEngine_Transform__get_position
                        ((UnityEngine_Vector3_o *)&local_128,pUVar34,(MethodInfo *)0x0);
    fVar42 = (pUVar33->fields).x;
    fVar48 = (pUVar33->fields).y;
    fVar53 = (pUVar33->fields).z;
    if ((TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
    }
    pSVar35 = Characters_HumanSounds__GetRandomTSLaunch((MethodInfo *)0x0);
    Characters_BaseCharacter__PlaySound((Characters_BaseCharacter_o *)__this_00,pSVar35,(MethodInfo *)0x0);
    Characters_Human__SetThunderspears(__this_00,false,bVar31 || !bVar32,(MethodInfo *)0x0);
    if ((__this_00->fields).Grounded == false) {
      if ((TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
      }
      pSVar35 = TypeInfo_Characters_HumanAnimations->static_fields->TSShootLAir;
    }
    else {
      if ((TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
      }
      pSVar35 = TypeInfo_Characters_HumanAnimations->static_fields->TSShootL;
    }
  }
  else {
    pCVar15 = (__this_00->fields).Setup;
    if (((pCVar15 == (Characters_HumanSetup_o *)0x0) ||
        (pUVar16 = (pCVar15->fields)._part_blade_r, pUVar16 == (UnityEngine_GameObject_o *)0x0)) ||
       (pUVar34 = UnityEngine_GameObject__get_transform(pUVar16,(MethodInfo *)0x0),
       pUVar34 == (UnityEngine_Transform_o *)0x0)) goto label_182178e09;
    pUVar33 = UnityEngine_Transform__get_position
                        ((UnityEngine_Vector3_o *)&local_128,pUVar34,(MethodInfo *)0x0);
    fVar42 = (pUVar33->fields).x;
    fVar48 = (pUVar33->fields).y;
    fVar53 = (pUVar33->fields).z;
    if ((TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
    }
    pSVar35 = Characters_HumanSounds__GetRandomTSLaunch((MethodInfo *)0x0);
    Characters_BaseCharacter__PlaySound((Characters_BaseCharacter_o *)__this_00,pSVar35,(MethodInfo *)0x0);
    Characters_Human__SetThunderspears(__this_00,bVar30 || !bVar32,false,(MethodInfo *)0x0);
    if ((__this_00->fields).Grounded == false) {
      if ((TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
      }
      pSVar35 = TypeInfo_Characters_HumanAnimations->static_fields->TSShootRAir;
    }
    else {
      if ((TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
      }
      pSVar35 = TypeInfo_Characters_HumanAnimations->static_fields->TSShootR;
    }
  }
  (__this_00->fields).AttackAnimation = pSVar35;
  local_128._0_8_ = lVar5;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).AttackAnimation,pSVar35);
  if ((__this_00->fields).Grounded != false) {
    pCVar15 = (__this_00->fields).Setup;
    if (((pCVar15 == (Characters_HumanSetup_o *)0x0) ||
        (pUVar16 = (pCVar15->fields)._part_head, pUVar16 == (UnityEngine_GameObject_o *)0x0)) ||
       (pUVar34 = UnityEngine_GameObject__get_transform(pUVar16,(MethodInfo *)0x0),
       pUVar34 == (UnityEngine_Transform_o *)0x0)) goto label_182178e09;
    pUVar33 = UnityEngine_Transform__get_position
                        ((UnityEngine_Vector3_o *)local_108,pUVar34,(MethodInfo *)0x0);
    fVar42 = (pUVar33->fields).x;
    fVar48 = (pUVar33->fields).y;
    fVar53 = (pUVar33->fields).z;
    if (Il2CppMethodInitialized_18433de5c == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
      Il2CppMethodInitialized_18433de5c = '\x01';
    }
    pUVar17 = TypeInfo_UnityEngine_Vector3->static_fields;
    fVar42 = fVar42 + (pUVar17->upVector).fields.x;
    fVar48 = fVar48 + (pUVar17->upVector).fields.y;
    fVar53 = fVar53 + (pUVar17->upVector).fields.z;
  }
  fVar49 = local_128.y - fVar48;
  fVar50 = fVar50 - fVar53;
  local_138.y = fVar49;
  local_138.x = (float)(undefined4)lVar5 - fVar42;
  local_138.z = fVar50;
  if (Il2CppMethodInitialized_18433de5f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    Il2CppMethodInitialized_18433de5f = '\x01';
  }
  fVar43 = (float)il2cpp_runtime_helper_180546a40(&local_138);
  if (fVar43 <= 1e-05) {
    pUVar17 = TypeInfo_UnityEngine_Vector3->static_fields;
    fVar47 = (pUVar17->zeroVector).fields.x;
    fVar49 = (pUVar17->zeroVector).fields.y;
    fVar50 = (pUVar17->zeroVector).fields.z;
  }
  else {
    fVar47 = ((float)(undefined4)lVar5 - fVar42) / fVar43;
    fVar49 = fVar49 / fVar43;
    fVar50 = fVar50 / fVar43;
  }
  if ((__this_00->fields).Grounded != false) {
    fVar42 = fVar42 + fVar47;
    fVar48 = fVar48 + fVar49;
    fVar53 = fVar53 + fVar50;
  }
  if ((__this_00->fields)._state != 0xb) {
    if ((__this_00->fields)._state == 1) {
      (__this_00->fields)._attackButtonRelease = true;
    }
    Characters_BaseCharacter__PlayAnimation
              ((Characters_BaseCharacter_o *)__this_00,(__this_00->fields).AttackAnimation,0.1,
               (MethodInfo *)0x0);
    Characters_Human__set_State(__this_00,1,(MethodInfo *)0x0);
    local_138.y = local_118.g;
    local_138.x = fVar51;
    local_128.x = 0.0;
    local_128.y = 0.0;
    local_128.z = 0.0;
    local_138.z = fVar52;
    if (Il2CppMethodInitialized_18433de5c == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
      Il2CppMethodInitialized_18433de5c = '\x01';
    }
    pUVar17 = TypeInfo_UnityEngine_Vector3->static_fields;
    local_128.x = (pUVar17->upVector).fields.x;
    local_128.y = (pUVar17->upVector).fields.y;
    local_128.z = (pUVar17->upVector).fields.z;
    pUVar36 = UnityEngine_Quaternion__Internal_LookRotation
                        ((UnityEngine_Quaternion_o *)local_e8,(UnityEngine_Vector3_o *)&local_138,
                         (UnityEngine_Vector3_o *)&local_128,(MethodInfo *)0x0);
    local_f8.x = (pUVar36->fields).x;
    local_f8.y = (pUVar36->fields).y;
    local_f8.z = (pUVar36->fields).z;
    local_f8.w = (pUVar36->fields).w;
    pUVar33 = UnityEngine_Quaternion__Internal_ToEulerRad
                        ((UnityEngine_Vector3_o *)local_108,(UnityEngine_Quaternion_o *)&local_f8,
                         (MethodInfo *)0x0);
    uVar2 = (pUVar33->fields).x;
    uVar8 = (pUVar33->fields).y;
    local_128.y = (float)uVar8 * 57.29578;
    local_128.x = (float)uVar2 * 57.29578;
    local_128.z = (pUVar33->fields).z * 57.29578;
    pUVar33 = UnityEngine_Quaternion__Internal_MakePositive
                        ((UnityEngine_Vector3_o *)local_108,(UnityEngine_Vector3_o *)&local_128,
                         (MethodInfo *)0x0);
    local_128.z = 0.0;
    fVar52 = (pUVar33->fields).y;
    (__this_00->fields).TargetAngle = fVar52;
    local_128._0_8_ = (ulonglong)(uint)(fVar52 * 0.017453292) << 0x20;
    pUVar36 = UnityEngine_Quaternion__Internal_FromEulerRad
                        ((UnityEngine_Quaternion_o *)local_e8,(UnityEngine_Vector3_o *)&local_128,
                         (MethodInfo *)0x0);
    fVar52 = (pUVar36->fields).y;
    fVar51 = (pUVar36->fields).z;
    fVar43 = (pUVar36->fields).w;
    (__this_00->fields)._targetRotation.fields.x = (pUVar36->fields).x;
    (__this_00->fields)._targetRotation.fields.y = fVar52;
    (__this_00->fields)._targetRotation.fields.z = fVar51;
    (__this_00->fields)._targetRotation.fields.w = fVar43;
  }
  if ((__this_00->fields).CarryState == 1) {
    pCVar18 = (__this_00->fields).Carrier;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar30 = UnityEngine_Object__op_Inequality
                       ((UnityEngine_Object_o *)pCVar18,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar30) goto label_1821786fd;
    pCVar18 = (__this_00->fields).Carrier;
    if (pCVar18 == (Characters_Human_o *)0x0) goto label_182178e09;
    uVar3 = (pCVar18->fields).CarryVelocity.fields.x;
    uVar9 = (pCVar18->fields).CarryVelocity.fields.y;
    fVar52 = (pCVar18->fields).CarryVelocity.fields.z;
  }
  else {
label_1821786fd:
    pUVar14 = (__this_00->fields).Cache;
    if ((pUVar14 == (Utility_BaseComponentCache_o *)0x0) ||
       (__this_01 = (pUVar14->fields).Rigidbody, __this_01 == (UnityEngine_Rigidbody_o *)0x0))
    goto label_182178e09;
    pUVar33 = UnityEngine_Rigidbody__get_linearVelocity
                        ((UnityEngine_Vector3_o *)local_108,__this_01,(MethodInfo *)0x0);
    uVar4 = (pUVar33->fields).x;
    uVar10 = (pUVar33->fields).y;
    fVar52 = (pUVar33->fields).z;
    uVar3 = uVar4;
    uVar9 = uVar10;
  }
  local_res20 = (System_String_o *)CONCAT44(uVar9,uVar3);
  local_128._0_8_ = CONCAT44(uVar9,uVar3);
  pSVar19 = TypeInfo_Settings_SettingsManager->static_fields->InGameCurrent;
  local_128.z = fVar52;
  if (((pSVar19 == (Settings_InGameSet_o *)0x0) ||
      (pSVar20 = (pSVar19->fields).Misc, pSVar20 == (Settings_InGameMiscSettings_o *)0x0)) ||
     (pSVar21 = (pSVar20->fields).ThunderspearPVP, pSVar21 == (Settings_BoolSetting_o *)0x0))
  goto label_182178e09;
  if ((pSVar21->fields)._value == false) {
    fVar43 = (__this->fields).Speed;
    fVar51 = (float)il2cpp_runtime_helper_180546a40(&local_128,0);
    pSVar22 = (__this->fields).TSInfo;
    if ((pSVar22 == (SimpleJSONFixed_JSONNode_o *)0x0) ||
       (pSVar37 = (*(pSVar22->klass->vtable)._7_get_Item.methodPtr)
                            (pSVar22,(MethodInfo *)"SpeedMultiplier"),
       pSVar37 == (System_Xml_Schema_XmlSchema_o *)0x0)) goto label_182178e09;
    fVar44 = (float)(*(code *)((Il2CppClass *)pSVar37->klass)->vtable[37].methodPtr)
                              (pSVar37,((Il2CppClass *)pSVar37->klass)->vtable[37].method);
    pSVar22 = (__this->fields).TSInfo;
    if ((pSVar22 == (SimpleJSONFixed_JSONNode_o *)0x0) ||
       (pSVar37 = (*(pSVar22->klass->vtable)._7_get_Item.methodPtr)
                            (pSVar22,(MethodInfo *)"Range"),
       pSVar37 == (System_Xml_Schema_XmlSchema_o *)0x0)) goto label_182178e09;
    local_res18[0] =
         (float)(*(code *)((Il2CppClass *)pSVar37->klass)->vtable[37].methodPtr)
                          (pSVar37,((Il2CppClass *)pSVar37->klass)->vtable[37].method);
    local_res8[0] = (float)il2cpp_runtime_helper_180546a40(&local_128,0);
    pSVar22 = (__this->fields).TSInfo;
    if ((pSVar22 == (SimpleJSONFixed_JSONNode_o *)0x0) ||
       (pSVar37 = (*(pSVar22->klass->vtable)._7_get_Item.methodPtr)
                            (pSVar22,(MethodInfo *)"RangeMultiplier"),
       pSVar37 == (System_Xml_Schema_XmlSchema_o *)0x0)) goto label_182178e09;
    fVar45 = (float)(*(code *)((Il2CppClass *)pSVar37->klass)->vtable[37].methodPtr)
                              (pSVar37,((Il2CppClass *)pSVar37->klass)->vtable[37].method);
    pSVar22 = (__this->fields).TSInfo;
    if ((pSVar22 == (SimpleJSONFixed_JSONNode_o *)0x0) ||
       (pSVar37 = (*(pSVar22->klass->vtable)._7_get_Item.methodPtr)
                            (pSVar22,(MethodInfo *)"RangeMin"),
       pSVar37 == (System_Xml_Schema_XmlSchema_o *)0x0)) goto label_182178e09;
    fVar46 = (float)(*(code *)((Il2CppClass *)pSVar37->klass)->vtable[37].methodPtr)
                              (pSVar37,((Il2CppClass *)pSVar37->klass)->vtable[37].method);
    pSVar22 = (__this->fields).TSInfo;
    if ((pSVar22 == (SimpleJSONFixed_JSONNode_o *)0x0) ||
       (pSVar37 = (*(pSVar22->klass->vtable)._7_get_Item.methodPtr)
                            (pSVar22,(MethodInfo *)"RangeMax"),
       pSVar37 == (System_Xml_Schema_XmlSchema_o *)0x0)) goto label_182178e09;
    fVar43 = fVar44 * fVar51 + fVar43;
    fVar44 = (float)(*(code *)((Il2CppClass *)pSVar37->klass)->vtable[37].methodPtr)
                              (pSVar37,((Il2CppClass *)pSVar37->klass)->vtable[37].method);
    fVar51 = fVar45 * local_res8[0] + local_res18[0];
    uVar3 = SUB84(local_res20,0);
    uVar9 = (undefined4)((ulonglong)local_res20 >> 0x20);
    if ((fVar51 < fVar46) || (fVar46 = fVar44, fVar44 < fVar51)) {
      fVar51 = fVar46 / fVar43;
    }
    else {
      fVar51 = fVar51 / fVar43;
    }
  }
  else {
    fVar51 = (__this->fields).TravelTime;
    fVar43 = (__this->fields).Speed;
  }
  if ((TypeInfo_Projectiles_ProjectilePrefabs->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Projectiles_ProjectilePrefabs);
  }
  local_138.y = fVar49;
  local_138.x = fVar47;
  local_res20 = TypeInfo_Projectiles_ProjectilePrefabs->static_fields->Thunderspear;
  local_128.x = 0.0;
  local_128.y = 0.0;
  local_128.z = 0.0;
  local_138.z = fVar50;
  if (Il2CppMethodInitialized_18433de5c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    Il2CppMethodInitialized_18433de5c = '\x01';
  }
  pUVar17 = TypeInfo_UnityEngine_Vector3->static_fields;
  local_128.x = (pUVar17->upVector).fields.x;
  local_128.y = (pUVar17->upVector).fields.y;
  local_128.z = (pUVar17->upVector).fields.z;
  pUVar36 = UnityEngine_Quaternion__Internal_LookRotation
                      ((UnityEngine_Quaternion_o *)local_e8,(UnityEngine_Vector3_o *)&local_138,
                       (UnityEngine_Vector3_o *)&local_128,(MethodInfo *)0x0);
  local_118.r = (pUVar36->fields).x;
  local_118.g = (pUVar36->fields).y;
  local_118.b = (pUVar36->fields).z;
  local_118.a = (pUVar36->fields).w;
  if (Il2CppMethodInitialized_18433dbea == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    Il2CppMethodInitialized_18433dbea = '\x01';
  }
  pUVar14 = (__this_00->fields).Cache;
  if ((pUVar14 != (Utility_BaseComponentCache_o *)0x0) &&
     (pPVar23 = (pUVar14->fields).PhotonView, pPVar23 != (Photon_Pun_PhotonView_o *)0x0)) {
    charViewId = (pPVar23->fields).viewIdField;
    pUVar17 = TypeInfo_UnityEngine_Vector3->static_fields;
    uVar6._0_4_ = (pUVar17->zeroVector).fields.x;
    uVar6._4_4_ = (pUVar17->zeroVector).fields.y;
    fVar44 = (pUVar17->zeroVector).fields.z;
    settings = (System_Object_array *)SZArrayNew(TypeInfo_object_array,3);
    local_res18[0] = (__this->fields).Radius;
    pIVar38 = il2cpp_value_box(g_data_184354e38,local_res18);
    if (settings != (System_Object_array *)0x0) {
      if ((pIVar38 != (Il2CppObject *)0x0) &&
         (pIVar39 = il2cpp_vm_Object_IsInst(pIVar38,(((settings->obj).klass)->_1).element_class),
         pIVar39 == (Il2CppObject *)0x0)) {
        pIVar38 = il2cpp_codegen_get_array_type_mismatch_exception();
        il2cpp_codegen_raise_exception(pIVar38,(MethodInfo *)0x0);
      }
      if ((int)settings->max_length != 0) {
        settings->m_Items[0] = pIVar38;
        Il2CppCodeGenWriteBarrier(settings->m_Items,pIVar38);
        pSVar24 = TypeInfo_Settings_SettingsManager->static_fields->AbilitySettings;
        if (((pSVar24 == (Settings_AbilitySettings_o *)0x0) ||
            (pSVar25 = (pSVar24->fields).BombColor, pSVar25 == (Settings_ColorSetting_o *)0x0)) ||
           (__this_02 = (pSVar25->fields)._value, __this_02 == (Utility_Color255_o *)0x0)) goto label_182178e69;
        pUVar40 = Utility_Color255__ToColor((UnityEngine_Color_o *)local_e8,__this_02,(MethodInfo *)0x0);
        local_108._0_4_ = (pUVar40->fields).r;
        local_108._4_4_ = (pUVar40->fields).g;
        local_108._8_4_ = (pUVar40->fields).b;
        local_108._12_4_ = (pUVar40->fields).a;
        pIVar38 = il2cpp_value_box((Il2CppClass *)TypeInfo_UnityEngine_Color,local_108);
        if ((pIVar38 != (Il2CppObject *)0x0) &&
           (pIVar39 = il2cpp_vm_Object_IsInst(pIVar38,(((settings->obj).klass)->_1).element_class),
           pIVar39 == (Il2CppObject *)0x0)) {
          pIVar38 = il2cpp_codegen_get_array_type_mismatch_exception();
          il2cpp_codegen_raise_exception(pIVar38,(MethodInfo *)0x0);
        }
        if (1 < (uint)settings->max_length) {
          settings->m_Items[1] = pIVar38;
          Il2CppCodeGenWriteBarrier(settings->m_Items + 1,pIVar38);
          local_res8[0] = (float)CONCAT31(local_res8[0]._1_3_,1);
          pIVar38 = il2cpp_value_box(g_data_184354de8,local_res8);
          if ((pIVar38 != (Il2CppObject *)0x0) &&
             (pIVar39 = il2cpp_vm_Object_IsInst(pIVar38,(((settings->obj).klass)->_1).element_class),
             pIVar39 == (Il2CppObject *)0x0)) {
            pIVar38 = il2cpp_codegen_get_array_type_mismatch_exception();
            il2cpp_codegen_raise_exception(pIVar38,(MethodInfo *)0x0);
          }
          if (2 < (uint)settings->max_length) {
            settings->m_Items[2] = pIVar38;
            Il2CppCodeGenWriteBarrier(settings->m_Items + 2,pIVar38);
            uVar28 = local_118._8_8_;
            local_128.z = fVar50 * fVar43;
            local_128.y = fVar49 * fVar43;
            local_128.x = fVar47 * fVar43;
            local_118.b = fVar53;
            uVar29 = local_118._8_8_;
            local_e8[0].r = local_118.r;
            local_e8[0].g = local_118.g;
            local_118.b = (float)uVar28;
            local_118.a = SUB84(uVar28,4);
            local_e8[0].b = local_118.b;
            local_e8[0].a = local_118.a;
            local_118.g = fVar48;
            local_118.r = fVar42;
            local_138._0_8_ = uVar6;
            local_138.z = fVar44;
            local_118._8_8_ = uVar29;
            pPVar41 = (Projectiles_ThunderspearProjectile_o *)
                      Projectiles_ProjectileSpawner__Spawn
                                (local_res20,(UnityEngine_Vector3_o *)&local_118,
                                 (UnityEngine_Quaternion_o *)local_e8,(UnityEngine_Vector3_o *)&local_128,
                                 (UnityEngine_Vector3_o *)&local_138,fVar51,charViewId,"",
                                 settings,(MethodInfo *)0x0);
            if (pPVar41 == (Projectiles_ThunderspearProjectile_o *)0x0) {
              (__this->fields).Current = (Projectiles_ThunderspearProjectile_o *)0x0;
              pPVar41 = (Projectiles_ThunderspearProjectile_o *)0x0;
            }
            else {
              bVar11 = (TypeInfo_Projectiles_ThunderspearProjectile->_2).typeHierarchyDepth;
              if (((pPVar41->klass->_2).typeHierarchyDepth < bVar11) ||
                 ((pPVar41->klass->_2).typeHierarchy[(ulonglong)bVar11 - 1] !=
                  (Il2CppClass *)TypeInfo_Projectiles_ThunderspearProjectile)) {
                il2cpp_codegen_raise_invalid_cast_exception(pPVar41);
              }
              (__this->fields).Current = pPVar41;
              bVar11 = (TypeInfo_Projectiles_ThunderspearProjectile->_2).typeHierarchyDepth;
              if (((pPVar41->klass->_2).typeHierarchyDepth < bVar11) ||
                 ((pPVar41->klass->_2).typeHierarchy[(ulonglong)bVar11 - 1] !=
                  (Il2CppClass *)TypeInfo_Projectiles_ThunderspearProjectile)) {
                il2cpp_codegen_raise_invalid_cast_exception(pPVar41);
              }
            }
            Il2CppCodeGenWriteBarrier(&(__this->fields).Current,pPVar41);
            pPVar41 = (__this->fields).Current;
            if (pPVar41 != (Projectiles_ThunderspearProjectile_o *)0x0) {
              (pPVar41->fields).InitialPlayerVelocity.fields.x = (float)uVar3;
              (pPVar41->fields).InitialPlayerVelocity.fields.y = (float)uVar9;
              (pPVar41->fields).InitialPlayerVelocity.fields.z = fVar52;
              (__this->fields)._delayTimeLeft = (__this->fields).Delay;
              if ((__this_00->fields).AI != false) {
                return;
              }
              if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
              }
              pUVar26 = TypeInfo_UI_UIManager->static_fields->CurrentMenu;
              if (pUVar26 != (UI_BaseMenu_o *)0x0) {
                bVar11 = (TypeInfo_UI_InGameMenu->_2).typeHierarchyDepth;
                if (((pUVar26->klass->_2).typeHierarchyDepth < bVar11) ||
                   ((pUVar26->klass->_2).typeHierarchy[(ulonglong)bVar11 - 1] !=
                    (Il2CppClass *)TypeInfo_UI_InGameMenu)) {
                  il2cpp_codegen_raise_invalid_cast_exception(pUVar26);
                }
                __this_03 = (UI_HUDBottomHandler_o *)(*(uint64_t *)((char *)pUVar26 + 0xb8));
                if (__this_03 != (UI_HUDBottomHandler_o *)0x0) {
                  UI_HUDBottomHandler__ShootTS(__this_03,(MethodInfo *)0x0);
                  return;
                }
              }
label_182178e09:
              ThrowNullReferenceException();
            }
            goto label_182178e69;
          }
        }
      }
      ThrowIndexOutOfRangeException();
    }
  }
label_182178e69:
  ThrowNullReferenceException();
}


// Characters.ThunderspearWeapon$$HasActiveProjectile
// il2cpp: bool Characters_ThunderspearWeapon__HasActiveProjectile (Characters_ThunderspearWeapon_o* __this, const MethodInfo* method);
// 0x182178e80

bool Characters_ThunderspearWeapon__HasActiveProjectile
               (Characters_ThunderspearWeapon_o *__this,MethodInfo *method)

{
  Projectiles_ThunderspearProjectile_o *pPVar1;
  bool bVar2;
  
  if (Il2CppMethodInitialized_184346d0d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184346d0d = '\x01';
  }
  pPVar1 = (__this->fields).Current;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pPVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar2) {
    return false;
  }
  pPVar1 = (__this->fields).Current;
  if (pPVar1 != (Projectiles_ThunderspearProjectile_o *)0x0) {
    return (pPVar1->fields).Disabled == false;
  }
  ThrowNullReferenceException();
}


// Characters.ThunderspearWeapon$$SetInput
// il2cpp: void Characters_ThunderspearWeapon__SetInput (Characters_ThunderspearWeapon_o* __this, bool key, const MethodInfo* method);
// 0x1821791e0
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1821792bc: add rsp, 0x20
// asm:   0x1821792c0: pop rbx

void Characters_ThunderspearWeapon__SetInput
               (Characters_ThunderspearWeapon_o *__this,bool key,MethodInfo *method)

{
  Projectiles_ThunderspearProjectile_o *pPVar1;
  bool bVar2;
  
  if (key) {
    if (Il2CppMethodInitialized_184346d0d == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
      Il2CppMethodInitialized_184346d0d = '\x01';
    }
    pPVar1 = (__this->fields).Current;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar2 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pPVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar2) {
      pPVar1 = (__this->fields).Current;
      if (pPVar1 == (Projectiles_ThunderspearProjectile_o *)0x0) {
label_1821792c2:
        ThrowNullReferenceException();
      }
      if (((pPVar1->fields).Disabled == false) && ((__this->fields)._delayTimeLeft <= 0.0)) {
        if (pPVar1 != (Projectiles_ThunderspearProjectile_o *)0x0) {
          Projectiles_ThunderspearProjectile__Explode(pPVar1,(MethodInfo *)0x0);
          (__this->fields).Current = (Projectiles_ThunderspearProjectile_o *)0x0;
          Il2CppCodeGenWriteBarrier(&(__this->fields).Current,(void *)0x0);
          return;
        }
        goto label_1821792c2;
      }
    }
    bVar2 = (*(__this->klass->vtable)._6_CanUse.methodPtr)(__this,(__this->klass->vtable)._6_CanUse.method);
    if (bVar2) {
      (*(__this->klass->vtable)._9_Activate.methodPtr)(__this,(__this->klass->vtable)._9_Activate.method);
      (*(__this->klass->vtable)._8_OnUse.methodPtr)(__this,(__this->klass->vtable)._8_OnUse.method);
    }
  }
  return;
}


// Characters.ThunderspearWeapon$$OnFixedUpdate
// il2cpp: void Characters_ThunderspearWeapon__OnFixedUpdate (Characters_ThunderspearWeapon_o* __this, const MethodInfo* method);
// 0x182178fd0

void Characters_ThunderspearWeapon__OnFixedUpdate(Characters_ThunderspearWeapon_o *__this,MethodInfo *method)

{
  float fVar1;
  byte bVar2;
  Characters_Human_o *__this_00;
  Characters_HumanSetup_o *pCVar3;
  UnityEngine_GameObject_o *pUVar4;
  Projectiles_ThunderspearProjectile_o *pPVar5;
  bool bVar6;
  float fVar7;
  
  if (Il2CppMethodInitialized_184346d0e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_Human);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184346d0e = '\x01';
  }
  __this_00 = (Characters_Human_o *)(__this->fields)._owner;
  if (__this_00 == (Characters_Human_o *)0x0) goto label_1821791c3;
  bVar2 = (TypeInfo_Characters_Human->_2).typeHierarchyDepth;
  if (((__this_00->klass->_2).typeHierarchyDepth < bVar2) ||
     ((__this_00->klass->_2).typeHierarchy[(ulonglong)bVar2 - 1] != (Il2CppClass *)TypeInfo_Characters_Human))
  {
    il2cpp_codegen_raise_invalid_cast_exception(__this_00);
  }
  if ((__this_00->fields).Dead != false) {
    pPVar5 = (__this->fields).Current;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar6 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pPVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar6) {
      return;
    }
    pPVar5 = (__this->fields).Current;
    if (pPVar5 != (Projectiles_ThunderspearProjectile_o *)0x0) {
      (*(pPVar5->klass->vtable)._17_DestroySelf.methodPtr)
                (pPVar5,(pPVar5->klass->vtable)._17_DestroySelf.method);
      (__this->fields).Current = (Projectiles_ThunderspearProjectile_o *)0x0;
      Il2CppCodeGenWriteBarrier(&(__this->fields).Current,(void *)0x0);
      return;
    }
    goto label_1821791c3;
  }
  bVar6 = (*(__this->klass->vtable)._6_CanUse.methodPtr)(__this,(__this->klass->vtable)._6_CanUse.method);
  if (((bVar6) && ((__this_00->fields).Sheathed == false)) && ((__this_00->fields)._state != 4)) {
    pCVar3 = (__this_00->fields).Setup;
    if ((pCVar3 == (Characters_HumanSetup_o *)0x0) ||
       (pUVar4 = (pCVar3->fields)._part_blade_l, pUVar4 == (UnityEngine_GameObject_o *)0x0))
    goto label_1821791c3;
    bVar6 = UnityEngine_GameObject__get_activeSelf(pUVar4,(MethodInfo *)0x0);
    if (bVar6) {
      pCVar3 = (__this_00->fields).Setup;
      if ((pCVar3 == (Characters_HumanSetup_o *)0x0) ||
         (pUVar4 = (pCVar3->fields)._part_blade_r, pUVar4 == (UnityEngine_GameObject_o *)0x0))
      goto label_1821791c3;
      bVar6 = UnityEngine_GameObject__get_activeSelf(pUVar4,(MethodInfo *)0x0);
      if (bVar6) goto label_1821790fc;
    }
    bVar6 = Characters_ThunderspearWeapon__IsTwoShotMode(__this,(MethodInfo *)0x0);
    if ((!bVar6) || (1 < (__this->fields).RoundLeft)) {
      Characters_Human__SetThunderspears(__this_00,true,true,(MethodInfo *)0x0);
    }
  }
label_1821790fc:
  pPVar5 = (__this->fields).Current;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar6 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pPVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar6) {
    pPVar5 = (__this->fields).Current;
    if (pPVar5 == (Projectiles_ThunderspearProjectile_o *)0x0) {
label_1821791c3:
      ThrowNullReferenceException();
    }
    if ((pPVar5->fields).Disabled == false) {
      fVar1 = (__this->fields)._delayTimeLeft;
      fVar7 = UnityEngine_Time__get_fixedDeltaTime((MethodInfo *)0x0);
      (__this->fields)._delayTimeLeft = fVar1 - fVar7;
    }
  }
  return;
}


// Characters.ThunderspearWeapon$$IsModelActive
// il2cpp: bool Characters_ThunderspearWeapon__IsModelActive (Characters_ThunderspearWeapon_o* __this, Characters_Human_o* human, bool left, const MethodInfo* method);
// 0x182178f00

bool Characters_ThunderspearWeapon__IsModelActive
               (Characters_ThunderspearWeapon_o *__this,Characters_Human_o *human,bool left,MethodInfo *method
               )

{
  Characters_HumanSetup_o *pCVar1;
  bool bVar2;
  UnityEngine_GameObject_o *__this_00;
  
  if (human != (Characters_Human_o *)0x0) {
    pCVar1 = (human->fields).Setup;
    if (left) {
      if (pCVar1 == (Characters_HumanSetup_o *)0x0) goto label_182178f3f;
      __this_00 = (pCVar1->fields)._part_blade_l;
    }
    else {
      if (pCVar1 == (Characters_HumanSetup_o *)0x0) goto label_182178f3f;
      __this_00 = (pCVar1->fields)._part_blade_r;
    }
    if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
      bVar2 = UnityEngine_GameObject__get_activeSelf(__this_00,(MethodInfo *)0x0);
      return bVar2;
    }
  }
label_182178f3f:
  ThrowNullReferenceException();
}


// Characters.ThunderspearWeapon$$IsTwoShotMode
// il2cpp: bool Characters_ThunderspearWeapon__IsTwoShotMode (Characters_ThunderspearWeapon_o* __this, const MethodInfo* method);
// 0x182178f50

bool Characters_ThunderspearWeapon__IsTwoShotMode(Characters_ThunderspearWeapon_o *__this,MethodInfo *method)

{
  Settings_InGameSet_o *pSVar1;
  Settings_InGameMiscSettings_o *pSVar2;
  Settings_BoolSetting_o *pSVar3;
  
  if (Il2CppMethodInitialized_184346d0f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_get_Value);
    Il2CppMethodInitialized_184346d0f = '\x01';
  }
  pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->InGameCurrent;
  if (((pSVar1 != (Settings_InGameSet_o *)0x0) &&
      (pSVar2 = (pSVar1->fields).Misc, pSVar2 != (Settings_InGameMiscSettings_o *)0x0)) &&
     (pSVar3 = (pSVar2->fields).ThunderspearPVP, pSVar3 != (Settings_BoolSetting_o *)0x0)) {
    if ((pSVar3->fields)._value != false) {
      return false;
    }
    return (__this->fields).MaxRound == 2;
  }
  ThrowNullReferenceException();
}


