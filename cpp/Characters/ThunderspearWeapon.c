// Type: Characters.ThunderspearWeapon
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/Characters/ThunderspearWeapon.cs
// Prior real C# source (older reference): Assets/Scripts/Characters/Human/Weapons/ThunderSpearWeapon.cs
// --------------------------------

// Characters.ThunderspearWeapon$$.ctor
// il2cpp: void Characters_ThunderspearWeapon___ctor (Characters_ThunderspearWeapon_o* __this, Characters_BaseCharacter_o* owner, int32_t ammo, int32_t ammoPerRound, float cooldown, float radius, float speed, float travelTime, float delay, SimpleJSONFixed_JSONNode_o* tsInfo, const MethodInfo* method);
// 0x5c122e0

void Characters_ThunderspearWeapon___ctor
               (Characters_ThunderspearWeapon_o *__this,Characters_BaseCharacter_o *owner,int32_t ammo,
               int32_t ammoPerRound,float cooldown,float radius,float speed,float travelTime,float delay,
               SimpleJSONFixed_JSONNode_o *tsInfo,MethodInfo *method)

{
  int32_t iVar1;
  
  iVar1 = 0;
  Characters_ExtendedUseable___ctor((Characters_ExtendedUseable_o *)__this,owner,(MethodInfo *)0x0);
  (__this->fields).MaxAmmo = ammo;
  (__this->fields).RoundLeft = ammoPerRound;
  (__this->fields).MaxRound = ammoPerRound;
  (__this->fields).Cooldown = cooldown;
  if (ammoPerRound == -1) {
    (__this->fields).RoundLeft = ammo;
  }
  else {
    iVar1 = ammo - ammoPerRound;
  }
  (__this->fields).AmmoLeft = iVar1;
  (__this->fields).Radius = radius;
  (__this->fields).Speed = speed;
  (__this->fields).TravelTime = travelTime;
  (__this->fields).Delay = delay;
  (__this->fields).TSInfo = tsInfo;
  Il2CppCodeGenWriteBarrier(&(__this->fields).TSInfo);
  return;
}


// Characters.ThunderspearWeapon$$Activate
// il2cpp: void Characters_ThunderspearWeapon__Activate (Characters_ThunderspearWeapon_o* __this, const MethodInfo* method);
// 0x5c123a0
// asm: 5 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5c12b76: jmp 0x5c12bde
// asm:   0x5c13165: lea rbx, [r14 + 0x50]
// asm:   0x5c13169: jmp 0x5c13226
// asm:   0x5c13598: jmp 0x5c12e1d
// asm:   0x5c135af: mov rdi, r13

void Characters_ThunderspearWeapon__Activate(Characters_ThunderspearWeapon_o *__this,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar5;
  undefined4 uVar6;
  ulong uVar4;
  undefined4 uVar7;
  byte bVar8;
  char cVar9;
  uint32_t uVar10;
  int iVar11;
  int32_t charViewId;
  Characters_BaseUseable_o *pCVar12;
  Characters_BaseUseable_c *pCVar13;
  Utility_BaseComponentCache_o *pUVar14;
  Characters_HumanSetup_o *pCVar15;
  UnityEngine_GameObject_o *pUVar16;
  Settings_InGameSet_o *pSVar17;
  Settings_InGameMiscSettings_o *pSVar18;
  Settings_BoolSetting_o *pSVar19;
  Characters_Human_o *pCVar20;
  UnityEngine_Rigidbody_o *__this_00;
  Photon_Pun_PhotonView_o *pPVar21;
  Settings_AbilitySettings_o *pSVar22;
  Settings_ColorSetting_o *pSVar23;
  Utility_Color255_o *__this_01;
  UI_HUDBottomHandler_o *__this_02;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [12];
  undefined1 auVar27 [16];
  ulong uVar28;
  Projectiles_ThunderspearProjectile_c *pPVar29;
  bool bVar30;
  bool bVar31;
  Characters_Human_c *pCVar32;
  UnityEngine_Vector3_StaticFields *pUVar33;
  UnityEngine_Transform_o *pUVar34;
  System_String_o *pSVar35;
  System_Object_array *settings;
  Il2CppObject *pIVar36;
  Il2CppObject *pIVar37;
  Projectiles_ThunderspearProjectile_o *pPVar38;
  SimpleJSONFixed_JSONNode_o *pSVar39;
  Projectiles_ThunderspearProjectile_o **targetAddress;
  Characters_Human_o *__this_03;
  bool bVar40;
  undefined1 auVar41 [4];
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  undefined4 uVar42;
  float extraout_XMM0_Db_01;
  uint extraout_XMM0_Db_02;
  uint extraout_XMM0_Db_03;
  undefined4 extraout_XMM0_Dc;
  float extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dc_01;
  undefined4 extraout_XMM0_Dc_02;
  undefined4 extraout_XMM0_Dc_03;
  float extraout_XMM0_Dc_04;
  undefined4 extraout_XMM0_Dc_05;
  undefined4 extraout_XMM0_Dc_06;
  undefined4 extraout_XMM0_Dc_07;
  uint extraout_XMM0_Dc_08;
  uint extraout_XMM0_Dc_09;
  undefined4 extraout_XMM0_Dd;
  float extraout_XMM0_Dd_00;
  undefined4 extraout_XMM0_Dd_01;
  undefined4 extraout_XMM0_Dd_02;
  undefined4 extraout_XMM0_Dd_03;
  float extraout_XMM0_Dd_04;
  undefined4 extraout_XMM0_Dd_05;
  undefined4 extraout_XMM0_Dd_06;
  undefined4 extraout_XMM0_Dd_07;
  uint extraout_XMM0_Dd_08;
  uint extraout_XMM0_Dd_09;
  undefined1 auVar43 [16];
  float fVar44;
  undefined1 auVar45 [16];
  UnityEngine_Quaternion_Fields UVar46;
  UnityEngine_Quaternion_o UVar47;
  UnityEngine_Vector3_o UVar48;
  UnityEngine_Vector3_o UVar49;
  UnityEngine_Vector3_o gravity;
  UnityEngine_Vector3_o velocity;
  undefined1 uStack_129;
  undefined1 auStack_128 [4];
  undefined1 auStack_124 [8];
  float fStack_11c;
  UnityEngine_Color_o UStack_110;
  float fStack_fc;
  undefined1 auStack_f8 [4];
  undefined1 auStack_f4 [8];
  float fStack_ec;
  undefined1 auStack_e8 [16];
  undefined1 auStack_d8 [8];
  float fStack_d0;
  float fStack_cc;
  UnityEngine_Vector3_Fields UStack_c8;
  undefined1 auStack_b8 [8];
  float fStack_b0;
  float fStack_ac;
  System_String_o *pSStack_a0;
  undefined1 auStack_98 [16];
  undefined8 uStack_88;
  undefined8 uStack_80;
  float fStack_78;
  uint uStack_74;
  uint uStack_70;
  uint uStack_6c;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [16];
  UnityEngine_Quaternion_Fields UStack_48;
  
  if (Il2CppMethodInitialized_075476dc == '\0') {
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
    Il2CppMethodInitialized_075476dc = '\x01';
  }
  UStack_48 = (UnityEngine_Quaternion_Fields)ZEXT816(0);
  __this_03 = (Characters_Human_o *)(__this->fields)._owner;
  if (__this_03 == (Characters_Human_o *)0x0) goto label_05c1359d;
  pCVar32 = __this_03->klass;
  bVar8 = (TypeInfo_Characters_Human->_2).typeHierarchyDepth;
  if (((pCVar32->_2).typeHierarchyDepth < bVar8) ||
     ((pCVar32->_2).typeHierarchy[(ulong)bVar8 - 1] != (Il2CppClass *)TypeInfo_Characters_Human))
  goto label_05c135b2;
  if ((((__this_03->fields)._state | 8U) == 9) &&
     (pCVar12 = (__this_03->fields).Special, pCVar12 != (Characters_BaseUseable_o *)0x0)) {
    pCVar13 = pCVar12->klass;
    bVar8 = (TypeInfo_Characters_StockSpecial->_2).typeHierarchyDepth;
    if ((bVar8 <= (pCVar13->_2).typeHierarchyDepth) &&
       ((pCVar13->_2).typeHierarchy[(ulong)bVar8 - 1] == (Il2CppClass *)TypeInfo_Characters_StockSpecial)) {
      (pCVar12->fields).IsActive = false;
      (*(pCVar13->vtable)._10_Deactivate.methodPtr)(pCVar12,(pCVar13->vtable)._10_Deactivate.method);
      pCVar32 = __this_03->klass;
    }
  }
  UVar48 = (*(pCVar32->vtable)._76_GetAimPoint.methodPtr)(__this_03,(pCVar32->vtable)._76_GetAimPoint.method);
  pUVar14 = (__this_03->fields).Cache;
  if (pUVar14 == (Utility_BaseComponentCache_o *)0x0) goto label_05c1359d;
  fStack_d0 = (float)extraout_XMM0_Dc;
  auStack_d8 = (undefined1  [8])UVar48.fields._0_8_;
  fStack_cc = (float)extraout_XMM0_Dd;
  pUVar34 = (pUVar14->fields).Transform;
  if (pUVar34 == (UnityEngine_Transform_o *)0x0) goto label_05c1359d;
  UVar49 = UnityEngine_Transform__get_position(pUVar34,(MethodInfo *)0x0);
  UVar49.fields.z = (undefined1  [4])UVar49.fields.z;
  auVar41 = (undefined1  [4])UVar49.fields.x;
  fVar44 = UVar49.fields.y;
  if (Il2CppMethodInitialized_0753e72d == '\0') {
    auStack_128 = UVar49.fields.z;
    auStack_f4._4_4_ = extraout_XMM0_Dc_00;
    _auStack_f8 = UVar49.fields._0_8_;
    fStack_ec = extraout_XMM0_Dd_00;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    Il2CppMethodInitialized_0753e72d = '\x01';
    auVar41 = auStack_f8;
    fVar44 = (float)auStack_f4._0_4_;
    uVar4._0_4_ = (float)auStack_f4._4_4_;
    uVar4._4_4_ = fStack_ec;
    UVar49.fields.z = auStack_128;
  }
  else {
    uVar4._0_4_ = extraout_XMM0_Dc_00;
    uVar4._4_4_ = extraout_XMM0_Dd_00;
  }
  auVar43._8_8_ = 0;
  auVar43._0_8_ = UStack_110.fields._8_8_;
  UStack_110.fields = (UnityEngine_Color_Fields)(auVar43 << 0x40);
  if (Il2CppMethodInitialized_0753e729 == '\0') {
    auStack_128 = UVar49.fields.z;
    auStack_f4._0_4_ = fVar44;
    auStack_f8 = auVar41;
    auStack_f4._4_4_ = (float)uVar4;
    fStack_ec = uVar4._4_4_;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
    Il2CppMethodInitialized_0753e729 = '\x01';
    auVar41 = auStack_f8;
    fVar44 = (float)auStack_f4._0_4_;
    uVar4._0_4_ = (float)auStack_f4._4_4_;
    uVar4._4_4_ = fStack_ec;
    UVar49.fields.z = auStack_128;
  }
  auVar45._0_4_ = (float)auStack_d8._0_4_ - (float)auVar41;
  auVar45._4_4_ = (float)auStack_d8._4_4_ - fVar44;
  auVar45._8_4_ = fStack_d0 - (float)uVar4;
  auVar45._12_4_ = fStack_cc - uVar4._4_4_;
  fVar44 = UVar48.fields.z - (float)UVar49.fields.z;
  if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
    auStack_e8._0_4_ = fVar44;
    _auStack_128 = auVar45;
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
    auVar45 = _auStack_128;
    fVar44 = (float)auStack_e8._0_4_;
  }
  uVar42 = 0;
  uVar4._0_4_ = fVar44 * fVar44 + auVar45._4_4_ * auVar45._4_4_ + auVar45._0_4_ * auVar45._0_4_;
  if ((float)uVar4 < 0.0) {
    auStack_e8._0_4_ = fVar44;
    _auStack_128 = auVar45;
    uVar4._0_4_ = sqrtf((float)uVar4);
    uVar42 = extraout_XMM0_Db;
    auVar45 = _auStack_128;
    fVar44 = (float)auStack_e8._0_4_;
    if ((float)uVar4 <= 1e-05) goto label_05c12631;
label_05c1266d:
    fVar44 = fVar44 / (float)uVar4;
    auVar25._4_4_ = (float)uVar4;
    auVar25._0_4_ = (float)uVar4;
    auVar25._8_4_ = uVar42;
    auVar25._12_4_ = uVar42;
    auVar43 = divps(auVar45,auVar25);
    UStack_110.fields.r = (float)auVar43._0_4_;
    UStack_110.fields.g = (float)auVar43._4_4_;
    pUVar33 = (UnityEngine_Vector3_StaticFields *)&UStack_110;
  }
  else {
    uVar4._0_4_ = SQRT((float)uVar4);
    if (1e-05 < (float)uVar4) goto label_05c1266d;
label_05c12631:
    pUVar33 = TypeInfo_UnityEngine_Vector3->static_fields;
    fVar44 = (pUVar33->zeroVector).fields.z;
  }
  pUVar14 = (__this_03->fields).Cache;
  if (pUVar14 == (Utility_BaseComponentCache_o *)0x0) goto label_05c1359d;
  auStack_e8._0_4_ = fVar44;
  pUVar34 = (pUVar14->fields).Transform;
  if (pUVar34 == (UnityEngine_Transform_o *)0x0) goto label_05c1359d;
  uVar1 = (pUVar33->zeroVector).fields.x;
  uVar5 = (pUVar33->zeroVector).fields.y;
  auStack_b8._4_4_ = uVar5;
  auStack_b8._0_4_ = uVar1;
  _fStack_b0 = 0;
  UVar49 = UnityEngine_Transform__get_forward(pUVar34,(MethodInfo *)0x0);
  pCVar15 = (__this_03->fields).Setup;
  if (pCVar15 == (Characters_HumanSetup_o *)0x0) goto label_05c1359d;
  auStack_f4._4_4_ = extraout_XMM0_Dc_01;
  _auStack_f8 = UVar49.fields._0_8_;
  fStack_ec = (float)extraout_XMM0_Dd_01;
  auStack_128 = (undefined1  [4])UVar49.fields.z;
  pUVar16 = (pCVar15->fields)._part_blade_l;
  if (pUVar16 == (UnityEngine_GameObject_o *)0x0) goto label_05c1359d;
  bVar30 = UnityEngine_GameObject__get_activeSelf(pUVar16,(MethodInfo *)0x0);
  pCVar15 = (__this_03->fields).Setup;
  if (pCVar15 == (Characters_HumanSetup_o *)0x0) goto label_05c1359d;
  pUVar16 = (pCVar15->fields)._part_blade_r;
  if (pUVar16 == (UnityEngine_GameObject_o *)0x0) goto label_05c1359d;
  bVar31 = UnityEngine_GameObject__get_activeSelf(pUVar16,(MethodInfo *)0x0);
  if (Il2CppMethodInitialized_075476df == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_get_Value);
    Il2CppMethodInitialized_075476df = '\x01';
  }
  pSVar17 = TypeInfo_Settings_SettingsManager->static_fields->InGameCurrent;
  if (pSVar17 == (Settings_InGameSet_o *)0x0) goto label_05c1359d;
  pSVar18 = (pSVar17->fields).Misc;
  if (pSVar18 == (Settings_InGameMiscSettings_o *)0x0) goto label_05c1359d;
  pSVar19 = (pSVar18->fields).ThunderspearPVP;
  if (pSVar19 == (Settings_BoolSetting_o *)0x0) goto label_05c1359d;
  if ((pSVar19->fields)._value == false) {
    bVar40 = (__this->fields).MaxRound == 2;
  }
  else {
    bVar40 = false;
  }
  if (0.0 <= (float)auStack_128 * (float)auStack_b8._0_4_ - (float)auStack_f8 * (float)auStack_e8._0_4_ ||
      !bVar30) {
    if (bVar31) goto label_05c12843;
label_05c12910:
    pCVar15 = (__this_03->fields).Setup;
    if (((pCVar15 == (Characters_HumanSetup_o *)0x0) ||
        (pUVar16 = (pCVar15->fields)._part_blade_l, pUVar16 == (UnityEngine_GameObject_o *)0x0)) ||
       (pUVar34 = UnityEngine_GameObject__get_transform(pUVar16,(MethodInfo *)0x0),
       pUVar34 == (UnityEngine_Transform_o *)0x0)) goto label_05c1359d;
    UVar49 = UnityEngine_Transform__get_position(pUVar34,(MethodInfo *)0x0);
    auStack_124._4_4_ = extraout_XMM0_Dc_03;
    _auStack_128 = UVar49.fields._0_8_;
    fStack_11c = (float)extraout_XMM0_Dd_03;
    auStack_f8 = (undefined1  [4])UVar49.fields.z;
    if ((TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
    }
    pSVar35 = Characters_HumanSounds__GetRandomTSLaunch((MethodInfo *)0x0);
    Characters_BaseCharacter__PlaySound((Characters_BaseCharacter_o *)__this_03,pSVar35,(MethodInfo *)0x0);
    Characters_Human__SetThunderspears(__this_03,false,(bool)(bVar31 | bVar40 ^ 1U),(MethodInfo *)0x0);
    uVar10 = (TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor;
    if ((__this_03->fields).Grounded == false) {
      if (uVar10 == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
      }
      pSVar35 = TypeInfo_Characters_HumanAnimations->static_fields->TSShootLAir;
    }
    else {
      if (uVar10 == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
      }
      pSVar35 = TypeInfo_Characters_HumanAnimations->static_fields->TSShootL;
    }
  }
  else {
    if (((__this_03->fields)._state != 0xd) || (!bVar31)) goto label_05c12910;
label_05c12843:
    pCVar15 = (__this_03->fields).Setup;
    if (pCVar15 == (Characters_HumanSetup_o *)0x0) goto label_05c1359d;
    pUVar16 = (pCVar15->fields)._part_blade_r;
    if (pUVar16 == (UnityEngine_GameObject_o *)0x0) goto label_05c1359d;
    pUVar34 = UnityEngine_GameObject__get_transform(pUVar16,(MethodInfo *)0x0);
    if (pUVar34 == (UnityEngine_Transform_o *)0x0) goto label_05c1359d;
    UVar49 = UnityEngine_Transform__get_position(pUVar34,(MethodInfo *)0x0);
    auStack_124._4_4_ = extraout_XMM0_Dc_02;
    _auStack_128 = UVar49.fields._0_8_;
    fStack_11c = (float)extraout_XMM0_Dd_02;
    auStack_f8 = (undefined1  [4])UVar49.fields.z;
    if ((TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
    }
    pSVar35 = Characters_HumanSounds__GetRandomTSLaunch((MethodInfo *)0x0);
    Characters_BaseCharacter__PlaySound((Characters_BaseCharacter_o *)__this_03,pSVar35,(MethodInfo *)0x0);
    Characters_Human__SetThunderspears(__this_03,(bool)(bVar30 | bVar40 ^ 1U),false,(MethodInfo *)0x0);
    uVar10 = (TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor;
    if ((__this_03->fields).Grounded == false) {
      if (uVar10 == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
      }
      pSVar35 = TypeInfo_Characters_HumanAnimations->static_fields->TSShootRAir;
    }
    else {
      if (uVar10 == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
      }
      pSVar35 = TypeInfo_Characters_HumanAnimations->static_fields->TSShootR;
    }
  }
  (__this_03->fields).AttackAnimation = pSVar35;
  Il2CppCodeGenWriteBarrier(&(__this_03->fields).AttackAnimation);
  if ((__this_03->fields).Grounded != false) {
    pCVar15 = (__this_03->fields).Setup;
    if (pCVar15 == (Characters_HumanSetup_o *)0x0) goto label_05c1359d;
    pUVar16 = (pCVar15->fields)._part_head;
    if (pUVar16 == (UnityEngine_GameObject_o *)0x0) goto label_05c1359d;
    pUVar34 = UnityEngine_GameObject__get_transform(pUVar16,(MethodInfo *)0x0);
    if (pUVar34 == (UnityEngine_Transform_o *)0x0) goto label_05c1359d;
    UVar49 = UnityEngine_Transform__get_position(pUVar34,(MethodInfo *)0x0);
    auStack_128 = (undefined1  [4])UVar49.fields.x;
    auStack_124._0_4_ = UVar49.fields.y;
    auStack_124._4_4_ = extraout_XMM0_Dc_04;
    fStack_11c = extraout_XMM0_Dd_04;
    auVar41 = (undefined1  [4])UVar49.fields.z;
    if (Il2CppMethodInitialized_0753e72c == '\0') {
      _auStack_128 = UVar49.fields._0_8_;
      auStack_f8 = (undefined1  [4])UVar49.fields.z;
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
      Il2CppMethodInitialized_0753e72c = '\x01';
      auVar41 = auStack_f8;
    }
    pUVar33 = TypeInfo_UnityEngine_Vector3->static_fields;
    uVar2 = (pUVar33->upVector).fields.x;
    uVar6 = (pUVar33->upVector).fields.y;
    auStack_124._0_4_ = (float)auStack_124._0_4_ + (float)uVar6;
    auStack_128 = (undefined1  [4])((float)auStack_128 + (float)uVar2);
    auStack_124._4_4_ = (float)auStack_124._4_4_ + 0.0;
    fStack_11c = fStack_11c + 0.0;
    auStack_f8 = (undefined1  [4])((float)auVar41 + (pUVar33->upVector).fields.z);
  }
  if (Il2CppMethodInitialized_0753e72d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    Il2CppMethodInitialized_0753e72d = '\x01';
  }
  else {
  }
  auVar27._8_8_ = 0;
  auVar27._0_8_ = UStack_110.fields._8_8_;
  UStack_110.fields = (UnityEngine_Color_Fields)(auVar27 << 0x40);
  if (Il2CppMethodInitialized_0753e729 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
    Il2CppMethodInitialized_0753e729 = '\x01';
  }
  auStack_d8._0_4_ = (float)auStack_d8._0_4_ - (float)auStack_128;
  auStack_d8._4_4_ = (float)auStack_d8._4_4_ - (float)auStack_124._0_4_;
  fVar44 = UVar48.fields.z - (float)auStack_f8;
  fStack_d0 = fStack_d0 - (float)auStack_124._4_4_;
  fStack_cc = fStack_cc - fStack_11c;
  uVar4._0_4_ = (float)auStack_d8._0_4_;
  uVar4._4_4_ = (float)auStack_d8._4_4_;
  if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
    uVar4._0_4_ = (float)auStack_d8._0_4_;
    uVar4._4_4_ = (float)auStack_d8._4_4_;
  }
  uVar42 = 0;
  uVar4._0_4_ = fVar44 * fVar44 + uVar4._4_4_ * uVar4._4_4_ + (float)uVar4 * (float)uVar4;
  if ((float)uVar4 < 0.0) {
    uVar4._0_4_ = sqrtf((float)uVar4);
    uVar42 = extraout_XMM0_Db_00;
    if ((float)uVar4 <= 1e-05) goto label_05c12b4d;
label_05c12b92:
    fVar44 = fVar44 / (float)uVar4;
    auVar24._4_4_ = (float)uVar4;
    auVar24._0_4_ = (float)uVar4;
    auVar24._8_4_ = uVar42;
    auVar24._12_4_ = uVar42;
    auVar43 = divps(_auStack_d8,auVar24);
    UStack_110.fields.r = (float)auVar43._0_4_;
    UStack_110.fields.g = (float)auVar43._4_4_;
    uVar4._0_4_ = auVar43._0_4_;
    uVar4._4_4_ = auVar43._4_4_;
    cVar9 = (__this_03->fields).Grounded;
    uVar28 = auVar43._0_8_;
  }
  else {
    uVar4._0_4_ = SQRT((float)uVar4);
    if (1e-05 < (float)uVar4) goto label_05c12b92;
label_05c12b4d:
    pUVar33 = TypeInfo_UnityEngine_Vector3->static_fields;
    fVar44 = (pUVar33->zeroVector).fields.z;
    uVar4._0_4_ = (pUVar33->zeroVector).fields.x;
    uVar4._4_4_ = (pUVar33->zeroVector).fields.y;
    cVar9 = (__this_03->fields).Grounded;
    uVar28 = uVar4;
  }
  unique0x10002668 = 0;
  auStack_d8 = (undefined1  [8])uVar28;
  if (cVar9 != '\0') {
    auStack_124._0_4_ = (float)auStack_124._0_4_ + uVar4._4_4_;
    auStack_128 = (undefined1  [4])((float)auStack_128 + (float)uVar4);
    auStack_124._4_4_ = (float)auStack_124._4_4_ + 0.0;
    fStack_11c = fStack_11c + 0.0;
    auStack_f8 = (undefined1  [4])((float)auStack_f8 + fVar44);
  }
  iVar11 = (__this_03->fields)._state;
  if (iVar11 != 0xb) {
    if (iVar11 == 1) {
      (__this_03->fields)._attackButtonRelease = true;
    }
    Characters_BaseCharacter__PlayAnimation
              ((Characters_BaseCharacter_o *)__this_03,(__this_03->fields).AttackAnimation,0.1,
               (MethodInfo *)0x0);
    Characters_Human__set_State(__this_03,1,(MethodInfo *)0x0);
    UStack_110.fields.b = (float)auStack_e8._0_4_;
    UStack_110.fields.r = (float)auStack_b8._0_4_;
    UStack_110.fields.g = (float)auStack_b8._4_4_;
    if (Il2CppMethodInitialized_0753e72c == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
      Il2CppMethodInitialized_0753e72c = '\x01';
    }
    pUVar33 = TypeInfo_UnityEngine_Vector3->static_fields;
    UStack_c8.x = (pUVar33->upVector).fields.x;
    UStack_c8.y = (pUVar33->upVector).fields.y;
    UStack_c8.z = (pUVar33->upVector).fields.z;
    UStack_48 = (UnityEngine_Quaternion_Fields)
                UnityEngine_Quaternion__Internal_LookRotation
                          ((UnityEngine_Vector3_o *)&UStack_110,(UnityEngine_Vector3_o *)&UStack_c8,
                           (MethodInfo *)0x0);
    UVar48 = UnityEngine_Quaternion__Internal_ToEulerRad
                       ((UnityEngine_Quaternion_o *)&UStack_48,(MethodInfo *)0x0);
    UVar49.fields.x = UVar48.fields.x * 57.29578;
    UVar49.fields.y = UVar48.fields.y * 57.29578;
    UVar49.fields.z = UVar48.fields.z * 57.29578;
    UVar48 = UnityEngine_Quaternion__Internal_MakePositive(UVar49,(MethodInfo *)0x0);
    (__this_03->fields).TargetAngle = UVar48.fields.y;
    auVar26._4_8_ = 0;
    auVar26._0_4_ = UVar48.fields.y * 0.017453292;
    UStack_110.fields._0_12_ = auVar26 << 0x20;
    UVar46 = (UnityEngine_Quaternion_Fields)
             UnityEngine_Quaternion__Internal_FromEulerRad
                       ((UnityEngine_Vector3_o *)&UStack_110,(MethodInfo *)0x0);
    (__this_03->fields)._targetRotation.fields = UVar46;
  }
  if ((__this_03->fields).CarryState == 1) {
    pCVar20 = (__this_03->fields).Carrier;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar30 = UnityEngine_Object__op_Inequality
                       ((UnityEngine_Object_o *)pCVar20,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar30) goto label_05c12d77;
    pCVar20 = (__this_03->fields).Carrier;
    if (pCVar20 == (Characters_Human_o *)0x0) goto label_05c1359d;
    uVar3 = (pCVar20->fields).CarryVelocity.fields.x;
    uVar7 = (pCVar20->fields).CarryVelocity.fields.y;
    auStack_58._4_4_ = uVar7;
    auStack_58._0_4_ = uVar3;
    auStack_58._8_8_ = 0;
    fStack_fc = (pCVar20->fields).CarryVelocity.fields.z;
  }
  else {
label_05c12d77:
    pUVar14 = (__this_03->fields).Cache;
    if ((pUVar14 == (Utility_BaseComponentCache_o *)0x0) ||
       (__this_00 = (pUVar14->fields).Rigidbody, __this_00 == (UnityEngine_Rigidbody_o *)0x0))
    goto label_05c1359d;
    UVar48 = UnityEngine_Rigidbody__get_linearVelocity(__this_00,(MethodInfo *)0x0);
    fStack_fc = UVar48.fields.z;
    auStack_58._8_4_ = extraout_XMM0_Dc_05;
    auStack_58._0_8_ = UVar48.fields._0_8_;
    auStack_58._12_4_ = extraout_XMM0_Dd_05;
  }
  pSVar17 = TypeInfo_Settings_SettingsManager->static_fields->InGameCurrent;
  if (pSVar17 == (Settings_InGameSet_o *)0x0) goto label_05c1359d;
  pSVar18 = (pSVar17->fields).Misc;
  if (pSVar18 == (Settings_InGameMiscSettings_o *)0x0) goto label_05c1359d;
  pSVar19 = (pSVar18->fields).ThunderspearPVP;
  if (pSVar19 == (Settings_BoolSetting_o *)0x0) goto label_05c1359d;
  auStack_e8 = ZEXT416((uint)(__this->fields).Speed);
  if ((pSVar19->fields)._value == false) {
    if (Il2CppMethodInitialized_0753e729 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
      Il2CppMethodInitialized_0753e729 = '\x01';
      uVar10 = (TypeInfo_System_Math->_2).cctor_finished_or_no_cctor;
    }
    else {
      uVar10 = (TypeInfo_System_Math->_2).cctor_finished_or_no_cctor;
    }
    uStack_88._4_4_ = (undefined4)((ulong)uStack_88 >> 0x20);
    if (uVar10 == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
    }
    auStack_98._0_4_ =
         fStack_fc * fStack_fc +
         (float)auStack_58._4_4_ * (float)auStack_58._4_4_ + (float)auStack_58._0_4_ * (float)auStack_58._0_4_
    ;
    if ((float)auStack_98._0_4_ < 0.0) {
      uVar4._0_4_ = sqrtf((float)auStack_98._0_4_);
    }
    else {
      uVar4._0_4_ = SQRT((float)auStack_98._0_4_);
    }
    uStack_88 = CONCAT44(uStack_88._4_4_,(float)uVar4);
    pSVar39 = (__this->fields).TSInfo;
    if ((pSVar39 == (SimpleJSONFixed_JSONNode_o *)0x0) ||
       (pSVar39 = (*(pSVar39->klass->vtable)._7_get_Item.methodPtr)
                            (pSVar39,"SpeedMultiplier",(pSVar39->klass->vtable)._7_get_Item.method),
       pSVar39 == (SimpleJSONFixed_JSONNode_o *)0x0)) goto label_05c1359d;
    uVar4._0_4_ = (*(pSVar39->klass->vtable)._37_get_AsFloat.methodPtr)
                            (pSVar39,(pSVar39->klass->vtable)._37_get_AsFloat.method);
    pSStack_a0 = (System_String_o *)CONCAT44(pSStack_a0._4_4_,(float)uVar4);
    pSVar39 = (__this->fields).TSInfo;
    if ((pSVar39 == (SimpleJSONFixed_JSONNode_o *)0x0) ||
       (pSVar39 = (*(pSVar39->klass->vtable)._7_get_Item.methodPtr)
                            (pSVar39,"Range",(pSVar39->klass->vtable)._7_get_Item.method),
       pSVar39 == (SimpleJSONFixed_JSONNode_o *)0x0)) goto label_05c1359d;
    auStack_b8._0_4_ =
         (*(pSVar39->klass->vtable)._37_get_AsFloat.methodPtr)
                   (pSVar39,(pSVar39->klass->vtable)._37_get_AsFloat.method);
    auStack_b8._4_4_ = extraout_XMM0_Db_01;
    fStack_b0 = (float)extraout_XMM0_Dc_07;
    fStack_ac = (float)extraout_XMM0_Dd_07;
    if (Il2CppMethodInitialized_0753e729 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
      Il2CppMethodInitialized_0753e729 = '\x01';
      if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor != 0) goto label_05c133b4;
label_05c13417:
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
      if (0.0 <= (float)auStack_98._0_4_) goto label_05c133c5;
label_05c1342d:
      uVar4._0_4_ = sqrtf((float)auStack_98._0_4_);
    }
    else {
      if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) goto label_05c13417;
label_05c133b4:
      if ((float)auStack_98._0_4_ < 0.0) goto label_05c1342d;
label_05c133c5:
      uVar4._0_4_ = SQRT((float)auStack_98._0_4_);
    }
    auStack_98._0_4_ = (float)uVar4;
    pSVar39 = (__this->fields).TSInfo;
    if ((pSVar39 == (SimpleJSONFixed_JSONNode_o *)0x0) ||
       (pSVar39 = (*(pSVar39->klass->vtable)._7_get_Item.methodPtr)
                            (pSVar39,"RangeMultiplier",(pSVar39->klass->vtable)._7_get_Item.method),
       pSVar39 == (SimpleJSONFixed_JSONNode_o *)0x0)) goto label_05c1359d;
    uVar4._0_4_ = (*(pSVar39->klass->vtable)._37_get_AsFloat.methodPtr)
                            (pSVar39,(pSVar39->klass->vtable)._37_get_AsFloat.method);
    uStack_68 = CONCAT44(uStack_68._4_4_,(float)uVar4);
    pSVar39 = (__this->fields).TSInfo;
    if ((pSVar39 == (SimpleJSONFixed_JSONNode_o *)0x0) ||
       (pSVar39 = (*(pSVar39->klass->vtable)._7_get_Item.methodPtr)
                            (pSVar39,"RangeMin",(pSVar39->klass->vtable)._7_get_Item.method),
       pSVar39 == (SimpleJSONFixed_JSONNode_o *)0x0)) goto label_05c1359d;
    fStack_78 = (*(pSVar39->klass->vtable)._37_get_AsFloat.methodPtr)
                          (pSVar39,(pSVar39->klass->vtable)._37_get_AsFloat.method);
    pSVar39 = (__this->fields).TSInfo;
    if (pSVar39 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_05c1359d;
    uStack_74 = extraout_XMM0_Db_02;
    uStack_70 = extraout_XMM0_Dc_08;
    uStack_6c = extraout_XMM0_Dd_08;
    pSVar39 = (*(pSVar39->klass->vtable)._7_get_Item.methodPtr)
                        (pSVar39,"RangeMax",(pSVar39->klass->vtable)._7_get_Item.method);
    if (pSVar39 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_05c1359d;
    auStack_e8._0_4_ = (float)auStack_e8._0_4_ + (float)uStack_88 * pSStack_a0._0_4_;
    uVar4._0_4_ = (*(pSVar39->klass->vtable)._37_get_AsFloat.methodPtr)
                            (pSVar39,(pSVar39->klass->vtable)._37_get_AsFloat.method);
    auStack_b8._0_4_ = (float)auStack_b8._0_4_ + (float)auStack_98._0_4_ * (float)uStack_68;
    if ((float)auStack_b8._0_4_ <= (float)uVar4) {
      uVar4._0_4_ = (float)auStack_b8._0_4_;
    }
    auStack_b8._4_4_ = ~auStack_b8._4_4_ & uStack_74 | extraout_XMM0_Db_03 & auStack_b8._4_4_;
    auStack_b8._0_4_ =
         (float)(~-(uint)(fStack_78 <= (float)auStack_b8._0_4_) & (uint)fStack_78 |
                (uint)(float)uVar4 & -(uint)(fStack_78 <= (float)auStack_b8._0_4_)) / (float)auStack_e8._0_4_;
    fStack_b0 = (float)(~(uint)fStack_b0 & uStack_70 | extraout_XMM0_Dc_09 & (uint)fStack_b0);
    fStack_ac = (float)(~(uint)fStack_ac & uStack_6c | extraout_XMM0_Dd_09 & (uint)fStack_ac);
    uVar10 = (TypeInfo_Projectiles_ProjectilePrefabs->_2).cctor_finished_or_no_cctor;
  }
  else {
    _auStack_b8 = ZEXT416((uint)(__this->fields).TravelTime);
    uVar10 = (TypeInfo_Projectiles_ProjectilePrefabs->_2).cctor_finished_or_no_cctor;
  }
  if (uVar10 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Projectiles_ProjectilePrefabs);
  }
  pSVar35 = TypeInfo_Projectiles_ProjectilePrefabs->static_fields->Thunderspear;
  UStack_110.fields.b = fVar44;
  UStack_110.fields.r = (float)auStack_d8._0_4_;
  UStack_110.fields.g = (float)auStack_d8._4_4_;
  if (Il2CppMethodInitialized_0753e72c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    Il2CppMethodInitialized_0753e72c = '\x01';
  }
  pUVar33 = TypeInfo_UnityEngine_Vector3->static_fields;
  UStack_c8.x = (pUVar33->upVector).fields.x;
  UStack_c8.y = (pUVar33->upVector).fields.y;
  UStack_c8.z = (pUVar33->upVector).fields.z;
  auVar43 = ZEXT416((uint)UStack_c8.z);
  UVar47 = UnityEngine_Quaternion__Internal_LookRotation
                     ((UnityEngine_Vector3_o *)&UStack_110,(UnityEngine_Vector3_o *)&UStack_c8,
                      (MethodInfo *)0x0);
  uStack_80 = auVar43._8_8_;
  uStack_88 = UVar47.fields._8_8_;
  auStack_98._8_4_ = extraout_XMM0_Dc_06;
  auStack_98._0_8_ = UVar47.fields._0_8_;
  auStack_98._12_4_ = extraout_XMM0_Dd_06;
  if (Il2CppMethodInitialized_0753e4b6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    Il2CppMethodInitialized_0753e4b6 = '\x01';
  }
  pUVar14 = (__this_03->fields).Cache;
  if (pUVar14 != (Utility_BaseComponentCache_o *)0x0) {
    pPVar21 = (pUVar14->fields).PhotonView;
    pSStack_a0 = pSVar35;
    if (pPVar21 != (Photon_Pun_PhotonView_o *)0x0) {
      pUVar33 = TypeInfo_UnityEngine_Vector3->static_fields;
      uStack_68._0_4_ = (pUVar33->zeroVector).fields.x;
      uStack_68._4_4_ = (pUVar33->zeroVector).fields.y;
      uStack_60 = 0;
      fStack_78 = (pUVar33->zeroVector).fields.z;
      charViewId = (pPVar21->fields).viewIdField;
      settings = (System_Object_array *)SZArrayNew(TypeInfo_object_array,3);
      UStack_c8.x = (__this->fields).Radius;
      pIVar36 = il2cpp_vm_Object_Box(g_data_07556740,&UStack_c8);
      if (settings != (System_Object_array *)0x0) {
        if ((pIVar36 != (Il2CppObject *)0x0) &&
           (pIVar37 = il2cpp_vm_Object_IsInst(pIVar36,(((settings->obj).klass)->_1).element_class),
           pIVar37 == (Il2CppObject *)0x0)) goto label_05c135b7;
        if ((int)settings->max_length == 0) goto label_05c135a2;
        settings->m_Items[0] = pIVar36;
        Il2CppCodeGenWriteBarrier(settings->m_Items);
        pSVar22 = TypeInfo_Settings_SettingsManager->static_fields->AbilitySettings;
        if (((pSVar22 == (Settings_AbilitySettings_o *)0x0) ||
            (pSVar23 = (pSVar22->fields).BombColor, pSVar23 == (Settings_ColorSetting_o *)0x0)) ||
           (__this_01 = (pSVar23->fields)._value, __this_01 == (Utility_Color255_o *)0x0)) goto label_05c1359d;
        UStack_110 = Utility_Color255__ToColor(__this_01,(MethodInfo *)0x0);
        pIVar36 = il2cpp_vm_Object_Box((Il2CppClass *)TypeInfo_UnityEngine_Color,&UStack_110);
        if ((pIVar36 != (Il2CppObject *)0x0) &&
           (pIVar37 = il2cpp_vm_Object_IsInst(pIVar36,(((settings->obj).klass)->_1).element_class),
           pIVar37 == (Il2CppObject *)0x0)) {
label_05c135b7:
          pIVar36 = il2cpp_codegen_get_array_type_mismatch_exception();
          il2cpp_codegen_raise_exception(pIVar36,(MethodInfo *)0x0);
        }
        if ((settings->max_length & 0xfffffffe) == 0) {
label_05c135a2:
          ThrowIndexOutOfRangeException();
        }
        settings->m_Items[1] = pIVar36;
        Il2CppCodeGenWriteBarrier(settings->m_Items + 1);
        uStack_129 = 1;
        pIVar36 = il2cpp_vm_Object_Box(g_data_075566f0,&uStack_129);
        if ((pIVar36 != (Il2CppObject *)0x0) &&
           (pIVar37 = il2cpp_vm_Object_IsInst(pIVar36,(((settings->obj).klass)->_1).element_class),
           pIVar37 == (Il2CppObject *)0x0)) goto label_05c135b7;
        if ((uint)settings->max_length < 3) goto label_05c135a2;
        fVar44 = fVar44 * (float)auStack_e8._0_4_;
        auStack_d8._4_4_ = (float)auStack_d8._4_4_ * (float)auStack_e8._0_4_;
        auStack_d8._0_4_ = (float)auStack_d8._0_4_ * (float)auStack_e8._0_4_;
        fStack_d0 = fStack_d0 * (float)auStack_e8._0_4_;
        fStack_cc = fStack_cc * (float)auStack_e8._0_4_;
        settings->m_Items[2] = pIVar36;
        Il2CppCodeGenWriteBarrier(settings->m_Items + 2);
        UVar47.fields.z = (float)uStack_88;
        UVar47.fields.w = (float)uStack_88._4_4_;
        UVar47.fields.x = (float)auStack_98._0_4_;
        UVar47.fields.y = (float)auStack_98._4_4_;
        UVar48.fields.z = (float)auStack_f8;
        UVar48.fields.x = (float)auStack_128;
        UVar48.fields.y = (float)auStack_124._0_4_;
        gravity.fields.z = fStack_78;
        gravity.fields.x = (float)uStack_68;
        gravity.fields.y = (float)uStack_68._4_4_;
        velocity.fields.z = fVar44;
        velocity.fields.x = (float)auStack_d8._0_4_;
        velocity.fields.y = (float)auStack_d8._4_4_;
        pPVar38 = (Projectiles_ThunderspearProjectile_o *)
                  Projectiles_ProjectileSpawner__Spawn
                            (pSStack_a0,UVar48,UVar47,velocity,gravity,(float)auStack_b8._0_4_,charViewId,
                             "",settings,(MethodInfo *)0x0);
        pPVar29 = TypeInfo_Projectiles_ThunderspearProjectile;
        if (pPVar38 == (Projectiles_ThunderspearProjectile_o *)0x0) {
          (__this->fields).Current = (Projectiles_ThunderspearProjectile_o *)0x0;
        }
        else {
          bVar8 = (TypeInfo_Projectiles_ThunderspearProjectile->_2).typeHierarchyDepth;
          if (((pPVar38->klass->_2).typeHierarchyDepth < bVar8) ||
             ((pPVar38->klass->_2).typeHierarchy[(ulong)bVar8 - 1] !=
              (Il2CppClass *)TypeInfo_Projectiles_ThunderspearProjectile)) {
label_05c135a7:
            il2cpp_codegen_raise_invalid_cast_exception(pPVar38);
          }
          (__this->fields).Current = pPVar38;
          if (((pPVar38->klass->_2).typeHierarchyDepth < bVar8) ||
             ((pPVar38->klass->_2).typeHierarchy[(ulong)bVar8 - 1] != (Il2CppClass *)pPVar29))
          goto label_05c135a7;
        }
        targetAddress = &(__this->fields).Current;
        Il2CppCodeGenWriteBarrier(targetAddress);
        pPVar38 = *targetAddress;
        if (pPVar38 != (Projectiles_ThunderspearProjectile_o *)0x0) {
          (pPVar38->fields).InitialPlayerVelocity.fields.x = (float)auStack_58._0_4_;
          (pPVar38->fields).InitialPlayerVelocity.fields.y = (float)auStack_58._4_4_;
          (pPVar38->fields).InitialPlayerVelocity.fields.z = fStack_fc;
          (__this->fields)._delayTimeLeft = (__this->fields).Delay;
          if ((__this_03->fields).AI != false) {
            return;
          }
          if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
          }
          __this_03 = (Characters_Human_o *)TypeInfo_UI_UIManager->static_fields->CurrentMenu;
          if (__this_03 != (Characters_Human_o *)0x0) {
            bVar8 = (TypeInfo_UI_InGameMenu->_2).typeHierarchyDepth;
            if (((__this_03->klass->_2).typeHierarchyDepth < bVar8) ||
               ((__this_03->klass->_2).typeHierarchy[(ulong)bVar8 - 1] !=
                (Il2CppClass *)TypeInfo_UI_InGameMenu)) {
label_05c135b2:
              il2cpp_codegen_raise_invalid_cast_exception(__this_03);
            }
            __this_02 = (UI_HUDBottomHandler_o *)(__this_03->fields).MovementSync;
            if (__this_02 != (UI_HUDBottomHandler_o *)0x0) {
              UI_HUDBottomHandler__ShootTS(__this_02,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
label_05c1359d:
  ThrowNullReferenceException();
}


// Characters.ThunderspearWeapon$$HasActiveProjectile
// il2cpp: bool Characters_ThunderspearWeapon__HasActiveProjectile (Characters_ThunderspearWeapon_o* __this, const MethodInfo* method);
// 0x5c13690

bool Characters_ThunderspearWeapon__HasActiveProjectile
               (Characters_ThunderspearWeapon_o *__this,MethodInfo *method)

{
  Projectiles_ThunderspearProjectile_o *pPVar1;
  bool bVar2;
  bool bVar3;
  
  if (Il2CppMethodInitialized_075476dd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_075476dd = '\x01';
  }
  pPVar1 = (__this->fields).Current;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar3 = false;
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pPVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    pPVar1 = (__this->fields).Current;
    if (pPVar1 == (Projectiles_ThunderspearProjectile_o *)0x0) {
      ThrowNullReferenceException();
    }
    bVar3 = (pPVar1->fields).Disabled == false;
  }
  return bVar3;
}


// Characters.ThunderspearWeapon$$SetInput
// il2cpp: void Characters_ThunderspearWeapon__SetInput (Characters_ThunderspearWeapon_o* __this, bool key, const MethodInfo* method);
// 0x5c13700

void Characters_ThunderspearWeapon__SetInput
               (Characters_ThunderspearWeapon_o *__this,bool key,MethodInfo *method)

{
  Projectiles_ThunderspearProjectile_o **targetAddress;
  Projectiles_ThunderspearProjectile_o *pPVar1;
  bool bVar2;
  undefined7 in_register_00000031;
  
  if ((int)CONCAT71(in_register_00000031,key) != 0) {
    if (Il2CppMethodInitialized_075476dd == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
      Il2CppMethodInitialized_075476dd = '\x01';
    }
    pPVar1 = (__this->fields).Current;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar2 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pPVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar2) {
      targetAddress = &(__this->fields).Current;
      pPVar1 = *targetAddress;
      if (pPVar1 == (Projectiles_ThunderspearProjectile_o *)0x0) {
        ThrowNullReferenceException();
      }
      if (((pPVar1->fields).Disabled == false) && ((__this->fields)._delayTimeLeft <= 0.0)) {
        Projectiles_ThunderspearProjectile__Explode(pPVar1,(MethodInfo *)0x0);
        *targetAddress = (Projectiles_ThunderspearProjectile_o *)0x0;
        Il2CppCodeGenWriteBarrier(targetAddress);
        return;
      }
    }
    bVar2 = (*(__this->klass->vtable)._6_CanUse.methodPtr)(__this,(__this->klass->vtable)._6_CanUse.method);
    if (bVar2) {
      (*(__this->klass->vtable)._9_Activate.methodPtr)(__this,(__this->klass->vtable)._9_Activate.method);
      (*(__this->klass->vtable)._8_OnUse.methodPtr)(__this,(__this->klass->vtable)._8_OnUse.method);
      return;
    }
  }
  return;
}


// Characters.ThunderspearWeapon$$OnFixedUpdate
// il2cpp: void Characters_ThunderspearWeapon__OnFixedUpdate (Characters_ThunderspearWeapon_o* __this, const MethodInfo* method);
// 0x5c137f0

void Characters_ThunderspearWeapon__OnFixedUpdate(Characters_ThunderspearWeapon_o *__this,MethodInfo *method)

{
  float fVar1;
  byte bVar2;
  Characters_Human_o *__this_00;
  Projectiles_ThunderspearProjectile_o *pPVar3;
  Characters_HumanSetup_o *pCVar4;
  UnityEngine_GameObject_o *pUVar5;
  Settings_InGameSet_o *pSVar6;
  Settings_InGameMiscSettings_o *pSVar7;
  Settings_BoolSetting_o *pSVar8;
  bool bVar9;
  Projectiles_ThunderspearProjectile_o **targetAddress;
  float fVar10;
  
  if (Il2CppMethodInitialized_075476de == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_Human);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_075476de = '\x01';
  }
  __this_00 = (Characters_Human_o *)(__this->fields)._owner;
  if (__this_00 == (Characters_Human_o *)0x0) goto label_05c13a59;
  bVar2 = (TypeInfo_Characters_Human->_2).typeHierarchyDepth;
  if (((__this_00->klass->_2).typeHierarchyDepth < bVar2) ||
     ((__this_00->klass->_2).typeHierarchy[(ulong)bVar2 - 1] != (Il2CppClass *)TypeInfo_Characters_Human)) {
    il2cpp_codegen_raise_invalid_cast_exception(__this_00);
  }
  if ((__this_00->fields).Dead != false) {
    pPVar3 = (__this->fields).Current;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar9 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pPVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar9) {
      return;
    }
    targetAddress = &(__this->fields).Current;
    pPVar3 = *targetAddress;
    if (pPVar3 != (Projectiles_ThunderspearProjectile_o *)0x0) {
      (*(pPVar3->klass->vtable)._17_DestroySelf.methodPtr)
                (pPVar3,(pPVar3->klass->vtable)._17_DestroySelf.method);
      *targetAddress = (Projectiles_ThunderspearProjectile_o *)0x0;
      Il2CppCodeGenWriteBarrier(targetAddress);
      return;
    }
    goto label_05c13a59;
  }
  bVar9 = (*(__this->klass->vtable)._6_CanUse.methodPtr)(__this,(__this->klass->vtable)._6_CanUse.method);
  if (((bVar9) && ((__this_00->fields).Sheathed == false)) && ((__this_00->fields)._state != 4)) {
    pCVar4 = (__this_00->fields).Setup;
    if ((pCVar4 == (Characters_HumanSetup_o *)0x0) ||
       (pUVar5 = (pCVar4->fields)._part_blade_l, pUVar5 == (UnityEngine_GameObject_o *)0x0))
    goto label_05c13a59;
    bVar9 = UnityEngine_GameObject__get_activeSelf(pUVar5,(MethodInfo *)0x0);
    if (bVar9) {
      pCVar4 = (__this_00->fields).Setup;
      if ((pCVar4 == (Characters_HumanSetup_o *)0x0) ||
         (pUVar5 = (pCVar4->fields)._part_blade_r, pUVar5 == (UnityEngine_GameObject_o *)0x0))
      goto label_05c13a59;
      bVar9 = UnityEngine_GameObject__get_activeSelf(pUVar5,(MethodInfo *)0x0);
      if (bVar9) goto label_05c139e3;
    }
    if (Il2CppMethodInitialized_075476df == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
      il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_get_Value);
      Il2CppMethodInitialized_075476df = '\x01';
    }
    pSVar6 = TypeInfo_Settings_SettingsManager->static_fields->InGameCurrent;
    if (((pSVar6 == (Settings_InGameSet_o *)0x0) ||
        (pSVar7 = (pSVar6->fields).Misc, pSVar7 == (Settings_InGameMiscSettings_o *)0x0)) ||
       (pSVar8 = (pSVar7->fields).ThunderspearPVP, pSVar8 == (Settings_BoolSetting_o *)0x0))
    goto label_05c13a59;
    if ((((pSVar8->fields)._value != false) || ((__this->fields).MaxRound != 2)) ||
       (1 < (__this->fields).RoundLeft)) {
      Characters_Human__SetThunderspears(__this_00,true,true,(MethodInfo *)0x0);
    }
  }
label_05c139e3:
  pPVar3 = (__this->fields).Current;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar9 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pPVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar9) {
    pPVar3 = (__this->fields).Current;
    if (pPVar3 == (Projectiles_ThunderspearProjectile_o *)0x0) {
label_05c13a59:
      ThrowNullReferenceException();
    }
    if ((pPVar3->fields).Disabled == false) {
      fVar1 = (__this->fields)._delayTimeLeft;
      fVar10 = UnityEngine_Time__get_fixedDeltaTime((MethodInfo *)0x0);
      (__this->fields)._delayTimeLeft = fVar1 - fVar10;
      return;
    }
  }
  return;
}


// Characters.ThunderspearWeapon$$IsModelActive
// il2cpp: bool Characters_ThunderspearWeapon__IsModelActive (Characters_ThunderspearWeapon_o* __this, Characters_Human_o* human, bool left, const MethodInfo* method);
// 0x5c135d0

bool Characters_ThunderspearWeapon__IsModelActive
               (Characters_ThunderspearWeapon_o *__this,Characters_Human_o *human,bool left,MethodInfo *method
               )

{
  Characters_HumanSetup_o *pCVar1;
  bool bVar2;
  undefined3 in_register_00000011;
  UnityEngine_GameObject_o *__this_00;
  
  if (CONCAT31(in_register_00000011,left) == 0) {
    if ((human == (Characters_Human_o *)0x0) ||
       (pCVar1 = (human->fields).Setup, pCVar1 == (Characters_HumanSetup_o *)0x0)) goto label_05c13614;
    __this_00 = (pCVar1->fields)._part_blade_r;
  }
  else {
    if ((human == (Characters_Human_o *)0x0) ||
       (pCVar1 = (human->fields).Setup, pCVar1 == (Characters_HumanSetup_o *)0x0)) goto label_05c13614;
    __this_00 = (pCVar1->fields)._part_blade_l;
  }
  if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
    bVar2 = UnityEngine_GameObject__get_activeSelf(__this_00,(MethodInfo *)0x0);
    return bVar2;
  }
label_05c13614:
  ThrowNullReferenceException();
}


// Characters.ThunderspearWeapon$$IsTwoShotMode
// il2cpp: bool Characters_ThunderspearWeapon__IsTwoShotMode (Characters_ThunderspearWeapon_o* __this, const MethodInfo* method);
// 0x5c13620

bool Characters_ThunderspearWeapon__IsTwoShotMode(Characters_ThunderspearWeapon_o *__this,MethodInfo *method)

{
  Settings_InGameSet_o *pSVar1;
  Settings_InGameMiscSettings_o *pSVar2;
  Settings_BoolSetting_o *pSVar3;
  
  if (Il2CppMethodInitialized_075476df == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_get_Value);
    Il2CppMethodInitialized_075476df = '\x01';
  }
  pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->InGameCurrent;
  if (((pSVar1 == (Settings_InGameSet_o *)0x0) ||
      (pSVar2 = (pSVar1->fields).Misc, pSVar2 == (Settings_InGameMiscSettings_o *)0x0)) ||
     (pSVar3 = (pSVar2->fields).ThunderspearPVP, pSVar3 == (Settings_BoolSetting_o *)0x0)) {
    ThrowNullReferenceException();
  }
  if ((pSVar3->fields)._value == false) {
    return (__this->fields).MaxRound == 2;
  }
  return false;
}


