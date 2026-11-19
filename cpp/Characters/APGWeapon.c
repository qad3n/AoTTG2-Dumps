// Type: Characters.APGWeapon
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/Characters/APGWeapon.cs
// Prior real C# source (older reference): Assets/Scripts/Characters/Human/Weapons/APGWeapon.cs
// --------------------------------

// Characters.APGWeapon$$.ctor
// il2cpp: void Characters_APGWeapon___ctor (Characters_APGWeapon_o* __this, Characters_BaseCharacter_o* owner, int32_t ammo, int32_t ammoPerRound, float cooldown, const MethodInfo* method);
// 0x5c10d50

void Characters_APGWeapon___ctor
               (Characters_APGWeapon_o *__this,Characters_BaseCharacter_o *owner,int32_t ammo,
               int32_t ammoPerRound,float cooldown,MethodInfo *method)

{
  int iVar1;
  
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
  return;
}


// Characters.APGWeapon$$Activate
// il2cpp: void Characters_APGWeapon__Activate (Characters_APGWeapon_o* __this, const MethodInfo* method);
// 0x5c10db0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5c1200a: mov rdi, r14

void Characters_APGWeapon__Activate(Characters_APGWeapon_o *__this,MethodInfo *method)

{
  byte bVar1;
  uint32_t uVar2;
  Characters_HookUseable_o *__this_00;
  Utility_BaseComponentCache_o *pUVar3;
  Characters_HumanComponentCache_o *pCVar4;
  Characters_BaseHitbox_o *pCVar5;
  Settings_InGameSet_o *pSVar6;
  Settings_InGameMiscSettings_o *pSVar7;
  Settings_BoolSetting_o *pSVar8;
  UnityEngine_CapsuleCollider_o *__this_01;
  UnityEngine_Rigidbody_o *__this_02;
  UnityEngine_Quaternion_StaticFields *pUVar9;
  UI_HUDBottomHandler_o *__this_03;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  bool bVar12;
  long lVar13;
  UnityEngine_Vector3_StaticFields *pUVar14;
  System_String_o *pSVar15;
  UnityEngine_Transform_o *pUVar16;
  SimpleJSONFixed_JSONNode_o *pSVar17;
  SimpleJSONFixed_JSONNode_o *pSVar18;
  System_Object_array *settings;
  Il2CppObject *pIVar19;
  Il2CppObject *pIVar20;
  Characters_Human_o *__this_04;
  UnityEngine_Vector3_StaticFields *pUVar21;
  undefined4 uVar23;
  undefined4 extraout_XMM0_Db;
  float fVar24;
  undefined4 extraout_XMM0_Db_00;
  undefined4 extraout_XMM0_Db_01;
  undefined4 extraout_XMM0_Db_02;
  undefined4 extraout_XMM0_Db_03;
  undefined8 uVar22;
  undefined1 auVar26 [16];
  undefined1 auVar29 [12];
  undefined4 extraout_XMM0_Db_04;
  float extraout_XMM0_Db_05;
  undefined4 extraout_XMM0_Dc;
  float extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dc_01;
  undefined4 extraout_XMM0_Dc_02;
  float extraout_XMM0_Dc_03;
  undefined4 extraout_XMM0_Dc_04;
  float extraout_XMM0_Dc_05;
  float extraout_XMM0_Dc_06;
  undefined4 extraout_XMM0_Dc_07;
  undefined4 extraout_XMM0_Dc_08;
  float extraout_XMM0_Dc_09;
  undefined4 extraout_XMM0_Dd;
  float extraout_XMM0_Dd_00;
  undefined4 extraout_XMM0_Dd_01;
  float extraout_XMM0_Dd_02;
  float extraout_XMM0_Dd_03;
  float fVar25;
  undefined4 extraout_XMM0_Dd_04;
  float extraout_XMM0_Dd_05;
  float extraout_XMM0_Dd_06;
  undefined4 extraout_XMM0_Dd_07;
  undefined4 extraout_XMM0_Dd_08;
  undefined4 extraout_XMM0_Dd_09;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined4 uVar30;
  float fVar31;
  undefined1 auVar32 [8];
  undefined1 auVar33 [16];
  UnityEngine_Quaternion_Fields UVar34;
  UnityEngine_Quaternion_o UVar35;
  UnityEngine_Quaternion_o rotation;
  UnityEngine_Vector3_o UVar36;
  UnityEngine_Vector3_o euler;
  UnityEngine_Vector3_o value;
  UnityEngine_Vector3_o position;
  undefined1 auStack_138 [36];
  UnityEngine_Vector3_o UStack_114;
  undefined1 auStack_108 [8];
  float fStack_100;
  float fStack_fc;
  float fStack_f8;
  float fStack_f4;
  undefined1 auStack_f0 [8];
  UnityEngine_Quaternion_o UStack_e8;
  undefined1 auStack_d8 [8];
  float fStack_d0;
  float fStack_cc;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined4 uStack_b4;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 uStack_98;
  undefined8 uStack_88;
  float fStack_80;
  float fStack_7c;
  undefined1 auStack_78 [8];
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 uStack_68;
  float fStack_60;
  float fStack_5c;
  UnityEngine_Quaternion_o UStack_58;
  undefined8 uStack_48;
  
  if (Il2CppMethodInitialized_075476d9 == '\0') {
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
    Il2CppMethodInitialized_075476d9 = '\x01';
  }
  uVar22 = CONCAT44(uStack_48._4_4_,(float)uStack_48);
  UStack_58.fields = (UnityEngine_Quaternion_Fields)ZEXT816(0);
  __this_04 = (Characters_Human_o *)(__this->fields)._owner;
  uStack_88 = CONCAT44(uStack_88._4_4_,(float)uStack_88);
  uStack_98 = CONCAT44(uStack_98._4_4_,(float)uStack_98);
  uStack_68 = CONCAT44(uStack_68._4_4_,(float)uStack_68);
  uStack_48 = CONCAT44(uStack_48._4_4_,(float)uStack_48);
  if (__this_04 == (Characters_Human_o *)0x0) goto label_05c11ff1;
  bVar1 = (TypeInfo_Characters_Human->_2).typeHierarchyDepth;
  if (((__this_04->klass->_2).typeHierarchyDepth < bVar1) ||
     ((__this_04->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != (Il2CppClass *)TypeInfo_Characters_Human))
  goto label_05c1200d;
  __this_00 = (__this_04->fields).HookLeft;
  uStack_88 = CONCAT44(uStack_88._4_4_,(float)uStack_88);
  uStack_98 = CONCAT44(uStack_98._4_4_,(float)uStack_98);
  uStack_68 = CONCAT44(uStack_68._4_4_,(float)uStack_68);
  uStack_48 = uVar22;
  if (__this_00 == (Characters_HookUseable_o *)0x0) goto label_05c11ff1;
  bVar12 = Characters_HookUseable__IsHooked(__this_00,(MethodInfo *)0x0);
  uVar2 = (TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor;
  if ((__this_04->fields).Grounded == false) {
    if (bVar12) {
      if (uVar2 == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
      }
      lVar13 = 0xf8;
    }
    else {
      if (uVar2 == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
      }
      lVar13 = 0x100;
    }
  }
  else if (bVar12) {
    if (uVar2 == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
    }
    lVar13 = 0xe0;
  }
  else {
    if (uVar2 == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
    }
    lVar13 = 0xe8;
  }
  pSVar15 = *(System_String_o **)
             ((long)&TypeInfo_Characters_HumanAnimations->static_fields->HorseMount + lVar13);
  Characters_Human__set_State(__this_04,1,(MethodInfo *)0x0);
  (__this_04->fields).AttackAnimation = pSVar15;
  Il2CppCodeGenWriteBarrier(&(__this_04->fields).AttackAnimation);
  Characters_BaseCharacter__CrossFade
            ((Characters_BaseCharacter_o *)__this_04,pSVar15,0.05,0.0,(MethodInfo *)0x0);
  UVar36 = (*(__this_04->klass->vtable)._76_GetAimPoint.methodPtr)
                     (__this_04,(__this_04->klass->vtable)._76_GetAimPoint.method);
  pUVar3 = (__this_04->fields).Cache;
  uStack_88 = CONCAT44(uStack_88._4_4_,(float)uStack_88);
  uStack_98 = CONCAT44(uStack_98._4_4_,(float)uStack_98);
  uStack_68 = CONCAT44(uStack_68._4_4_,(float)uStack_68);
  uStack_48 = CONCAT44(uStack_48._4_4_,(float)uStack_48);
  if (pUVar3 == (Utility_BaseComponentCache_o *)0x0) goto label_05c11ff1;
  fStack_100 = (float)extraout_XMM0_Dc;
  auStack_108 = (undefined1  [8])UVar36.fields._0_8_;
  fStack_fc = (float)extraout_XMM0_Dd;
  fStack_f8 = UVar36.fields.z;
  pUVar16 = (pUVar3->fields).Transform;
  uStack_88 = CONCAT44(uStack_88._4_4_,(float)uStack_88);
  uStack_98 = CONCAT44(uStack_98._4_4_,(float)uStack_98);
  uStack_68 = CONCAT44(uStack_68._4_4_,(float)uStack_68);
  uStack_48 = CONCAT44(uStack_48._4_4_,(float)uStack_48);
  if (pUVar16 == (UnityEngine_Transform_o *)0x0) goto label_05c11ff1;
  UVar36 = UnityEngine_Transform__get_position(pUVar16,(MethodInfo *)0x0);
  fVar24 = UVar36.fields.z;
  uVar22._0_4_ = UVar36.fields.x;
  uVar22._4_4_ = UVar36.fields.y;
  if (g_data_0753e72d == '\0') {
    auStack_138._32_4_ = fVar24;
    auStack_138._24_4_ = extraout_XMM0_Dc_00;
    auStack_138._16_8_ = UVar36.fields._0_8_;
    auStack_138._28_4_ = extraout_XMM0_Dd_00;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    g_data_0753e72d = '\x01';
    auStack_138._0_4_ = 0.0;
    auStack_138._4_4_ = 0.0;
    uVar22._0_4_ = (float)auStack_138._16_4_;
    uVar22._4_4_ = (float)auStack_138._20_4_;
    fVar31 = (float)auStack_138._24_4_;
    fVar25 = (float)auStack_138._28_4_;
    fVar24 = (float)auStack_138._32_4_;
  }
  else {
    auStack_138._0_4_ = 0.0;
    auStack_138._4_4_ = 0.0;
    fVar31 = extraout_XMM0_Dc_00;
    fVar25 = extraout_XMM0_Dd_00;
  }
  auStack_138._0_4_ = 0.0;
  auStack_138._4_4_ = 0.0;
  if (Il2CppMethodInitialized_0753e729 == '\0') {
    auStack_138._0_4_ = 0.0;
    auStack_138._4_4_ = 0.0;
    auStack_138._32_4_ = fVar24;
    auStack_138._20_4_ = uVar22._4_4_;
    auStack_138._16_4_ = (float)uVar22;
    auStack_138._24_4_ = fVar31;
    auStack_138._28_4_ = fVar25;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
    Il2CppMethodInitialized_0753e729 = '\x01';
    uVar22._0_4_ = (float)auStack_138._16_4_;
    uVar22._4_4_ = (float)auStack_138._20_4_;
    fVar31 = (float)auStack_138._24_4_;
    fVar25 = (float)auStack_138._28_4_;
    fVar24 = (float)auStack_138._32_4_;
  }
  pUVar14 = (UnityEngine_Vector3_StaticFields *)auStack_138;
  pUVar21 = (UnityEngine_Vector3_StaticFields *)auStack_138;
  auVar28._0_4_ = (float)auStack_108._0_4_ - (float)uVar22;
  auVar28._4_4_ = (float)auStack_108._4_4_ - uVar22._4_4_;
  auVar28._8_4_ = fStack_100 - fVar31;
  auVar28._12_4_ = fStack_fc - fVar25;
  auStack_138._8_4_ = fStack_f8 - fVar24;
  if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
    auStack_138._32_4_ = fStack_f8 - fVar24;
    auStack_138._16_16_ = auVar28;
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
    auStack_138._8_4_ = auStack_138._32_4_;
    auVar28 = (undefined1  [16])auStack_138._16_16_;
  }
  uVar23 = 0;
  uVar22._0_4_ = (float)auStack_138._8_4_ * (float)auStack_138._8_4_ +
                 auVar28._4_4_ * auVar28._4_4_ + auVar28._0_4_ * auVar28._0_4_;
  if ((float)uVar22 < 0.0) {
    auStack_138._32_4_ = auStack_138._8_4_;
    auStack_138._16_16_ = auVar28;
    uVar22._0_4_ = sqrtf((float)uVar22);
    uVar23 = extraout_XMM0_Db;
    auStack_138._8_4_ = auStack_138._32_4_;
    auVar28 = (undefined1  [16])auStack_138._16_16_;
    if ((float)uVar22 <= 1e-05) goto label_05c110e2;
label_05c1111e:
    auStack_138._8_4_ = (float)auStack_138._8_4_ / (float)uVar22;
    auVar11._4_4_ = (float)uVar22;
    auVar11._0_4_ = (float)uVar22;
    auVar11._8_4_ = uVar23;
    auVar11._12_4_ = uVar23;
    auVar28 = divps(auVar28,auVar11);
    auStack_138._0_4_ = auVar28._0_4_;
    auStack_138._4_4_ = auVar28._4_4_;
  }
  else {
    uVar22._0_4_ = SQRT((float)uVar22);
    if (1e-05 < (float)uVar22) goto label_05c1111e;
label_05c110e2:
    pUVar14 = TypeInfo_UnityEngine_Vector3->static_fields;
    auStack_138._8_4_ = (pUVar14->zeroVector).fields.z;
  }
  auStack_138._0_4_ = (pUVar14->zeroVector).fields.x;
  auStack_138._4_4_ = (pUVar14->zeroVector).fields.y;
  if (Il2CppMethodInitialized_0753e72c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    Il2CppMethodInitialized_0753e72c = '\x01';
  }
  pUVar14 = TypeInfo_UnityEngine_Vector3->static_fields;
  UStack_e8.fields.x = (pUVar14->upVector).fields.x;
  UStack_e8.fields.y = (pUVar14->upVector).fields.y;
  UStack_e8.fields.z = (pUVar14->upVector).fields.z;
  auVar28 = ZEXT416((uint)UStack_e8.fields.z);
  UStack_58 = UnityEngine_Quaternion__Internal_LookRotation
                        ((UnityEngine_Vector3_o *)auStack_138,(UnityEngine_Vector3_o *)(auStack_f0 + 8),
                         (MethodInfo *)0x0);
  auVar26._8_8_ = auVar28._8_8_;
  auVar26._0_8_ = UStack_58.fields._8_8_;
  UVar36 = UnityEngine_Quaternion__Internal_ToEulerRad(&UStack_58,(MethodInfo *)0x0);
  auVar29 = auVar26._4_12_;
  euler.fields.x = UVar36.fields.x * 57.29578;
  euler.fields.y = UVar36.fields.y * 57.29578;
  euler.fields.z = UVar36.fields.z * 57.29578;
  UVar36 = UnityEngine_Quaternion__Internal_MakePositive(euler,(MethodInfo *)0x0);
  auVar27._12_4_ = 0;
  auVar27._0_12_ = auVar29;
  auVar27 = auVar27 << 0x20;
  (__this_04->fields).TargetAngle = UVar36.fields.y;
  auStack_138._0_8_ = (ulong)(uint)(UVar36.fields.y * 0.017453292) << 0x20;
  auStack_138._8_8_ = (ulong)(uint)auStack_138._12_4_ << 0x20;
  UVar34 = (UnityEngine_Quaternion_Fields)
           UnityEngine_Quaternion__Internal_FromEulerRad
                     ((UnityEngine_Vector3_o *)auStack_138,(MethodInfo *)0x0);
  uVar22 = auVar27._8_8_;
  (__this_04->fields)._targetRotation.fields = UVar34;
  pUVar3 = (__this_04->fields).Cache;
  uStack_88 = CONCAT44(uStack_88._4_4_,(float)uStack_88);
  uStack_98 = CONCAT44(uStack_98._4_4_,(float)uStack_98);
  uStack_68 = CONCAT44(uStack_68._4_4_,(float)uStack_68);
  uStack_48 = CONCAT44(uStack_48._4_4_,(float)uStack_48);
  if (pUVar3 == (Utility_BaseComponentCache_o *)0x0) goto label_05c11ff1;
  pUVar16 = (pUVar3->fields).Transform;
  uStack_88 = CONCAT44(uStack_88._4_4_,(float)uStack_88);
  uStack_98 = CONCAT44(uStack_98._4_4_,(float)uStack_98);
  uStack_68 = CONCAT44(uStack_68._4_4_,(float)uStack_68);
  uStack_48 = CONCAT44(uStack_48._4_4_,(float)uStack_48);
  if (pUVar16 == (UnityEngine_Transform_o *)0x0) goto label_05c11ff1;
  UVar35 = UnityEngine_Transform__get_rotation(pUVar16,(MethodInfo *)0x0);
  uStack_c8 = UVar35.fields._8_8_;
  auStack_138._24_4_ = extraout_XMM0_Dc_01;
  auStack_138._16_8_ = UVar35.fields._0_8_;
  auStack_138._28_4_ = extraout_XMM0_Dd_01;
  unique0x100018ba = (__this_04->fields)._targetRotation.fields;
  uStack_c0 = uVar22;
  uVar22._0_4_ = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
  auStack_138._0_8_ = auStack_138._16_8_;
  auStack_138._8_8_ = uStack_c8;
  UStack_e8.fields.x = (float)auStack_138._32_4_;
  UStack_e8.fields.y = UStack_114.fields.x;
  UStack_e8.fields.z = UStack_114.fields.y;
  UStack_e8.fields.w = UStack_114.fields.z;
  UVar35 = UnityEngine_Quaternion__Internal_Lerp
                     ((UnityEngine_Quaternion_o *)auStack_138,(UnityEngine_Quaternion_o *)(auStack_f0 + 8),
                      (float)uVar22 * 30.0,(MethodInfo *)0x0);
  UnityEngine_Transform__set_rotation(pUVar16,UVar35,(MethodInfo *)0x0);
  pUVar3 = (__this_04->fields).Cache;
  uStack_88 = CONCAT44(uStack_88._4_4_,(float)uStack_88);
  uStack_98 = CONCAT44(uStack_98._4_4_,(float)uStack_98);
  uStack_68 = CONCAT44(uStack_68._4_4_,(float)uStack_68);
  uStack_48 = CONCAT44(uStack_48._4_4_,(float)uStack_48);
  if (pUVar3 == (Utility_BaseComponentCache_o *)0x0) goto label_05c11ff1;
  pUVar16 = (pUVar3->fields).Transform;
  uStack_88 = CONCAT44(uStack_88._4_4_,(float)uStack_88);
  uStack_98 = CONCAT44(uStack_98._4_4_,(float)uStack_98);
  uStack_68 = CONCAT44(uStack_68._4_4_,(float)uStack_68);
  uStack_48 = CONCAT44(uStack_48._4_4_,(float)uStack_48);
  if (pUVar16 == (UnityEngine_Transform_o *)0x0) goto label_05c11ff1;
  UVar36 = UnityEngine_Transform__get_position(pUVar16,(MethodInfo *)0x0);
  pUVar3 = (__this_04->fields).Cache;
  uStack_88 = CONCAT44(uStack_88._4_4_,(float)uStack_88);
  uStack_98 = CONCAT44(uStack_98._4_4_,(float)uStack_98);
  uStack_68 = CONCAT44(uStack_68._4_4_,(float)uStack_68);
  uStack_48 = CONCAT44(uStack_48._4_4_,(float)uStack_48);
  if (pUVar3 == (Utility_BaseComponentCache_o *)0x0) goto label_05c11ff1;
  auStack_138._16_4_ = UVar36.fields.z;
  UStack_114.fields.y = (float)extraout_XMM0_Dc_02;
  auStack_138._32_4_ = UVar36.fields.x;
  UStack_114.fields.x = UVar36.fields.y;
  UStack_114.fields.z = extraout_XMM0_Dd_02;
  pUVar16 = (pUVar3->fields).Transform;
  uStack_88 = CONCAT44(uStack_88._4_4_,(float)uStack_88);
  uStack_98 = CONCAT44(uStack_98._4_4_,(float)uStack_98);
  uStack_68 = CONCAT44(uStack_68._4_4_,(float)uStack_68);
  uStack_48 = CONCAT44(uStack_48._4_4_,(float)uStack_48);
  if (pUVar16 == (UnityEngine_Transform_o *)0x0) goto label_05c11ff1;
  UVar36 = UnityEngine_Transform__get_up(pUVar16,(MethodInfo *)0x0);
  uVar22._0_4_ = UVar36.fields.z * 0.8;
  uVar22._4_4_ = UVar36.fields.x * 0.8;
  fVar24 = UVar36.fields.y * 0.8;
  fVar31 = extraout_XMM0_Dc_03 * 0.0;
  fVar25 = extraout_XMM0_Dd_03 * 0.0;
  if (g_data_0753e72d == '\0') {
    uStack_c8 = CONCAT44(uStack_c8._4_4_,(float)uVar22);
    auStack_d8._4_4_ = fVar24;
    auStack_d8._0_4_ = uVar22._4_4_;
    fStack_d0 = extraout_XMM0_Dc_03 * 0.0;
    fStack_cc = extraout_XMM0_Dd_03 * 0.0;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    g_data_0753e72d = '\x01';
    uVar22._4_4_ = (float)auStack_d8._0_4_;
    fVar24 = (float)auStack_d8._4_4_;
    fVar31 = fStack_d0;
    fVar25 = fStack_cc;
    uVar22._0_4_ = (float)uStack_c8;
  }
  auStack_138._32_4_ = (float)auStack_138._32_4_ + uVar22._4_4_;
  UStack_114.fields.x = UStack_114.fields.x + fVar24;
  UStack_114.fields.y = UStack_114.fields.y + fVar31;
  UStack_114.fields.z = UStack_114.fields.z + fVar25;
  uVar22._0_4_ = (float)auStack_138._16_4_ + (float)uVar22;
  auStack_138._0_4_ = 0.0;
  auStack_138._4_4_ = 0.0;
  auStack_138._16_4_ = (float)uVar22;
  uVar22._4_4_ = (float)auStack_138._32_4_;
  fVar24 = UStack_114.fields.x;
  fVar31 = UStack_114.fields.y;
  fVar25 = UStack_114.fields.z;
  if (Il2CppMethodInitialized_0753e729 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
    Il2CppMethodInitialized_0753e729 = '\x01';
    uVar22._0_4_ = (float)auStack_138._16_4_;
    uVar22._4_4_ = (float)auStack_138._32_4_;
    fVar24 = UStack_114.fields.x;
    fVar31 = UStack_114.fields.y;
    fVar25 = UStack_114.fields.z;
  }
  auStack_108._0_4_ = (float)auStack_108._0_4_ - uVar22._4_4_;
  auStack_108._4_4_ = (float)auStack_108._4_4_ - fVar24;
  fStack_100 = fStack_100 - fVar31;
  fStack_fc = fStack_fc - fVar25;
  uVar22._4_4_ = (float)auStack_108._0_4_;
  fVar24 = (float)auStack_108._4_4_;
  fVar31 = fStack_f8 - (float)uVar22;
  if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
    fStack_f8 = fStack_f8 - (float)uVar22;
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
    uVar22._4_4_ = (float)auStack_108._0_4_;
    fVar24 = (float)auStack_108._4_4_;
    fVar31 = fStack_f8;
  }
  uVar23 = 0;
  uVar22._0_4_ = fVar31 * fVar31 + fVar24 * fVar24 + uVar22._4_4_ * uVar22._4_4_;
  if ((float)uVar22 < 0.0) {
    fStack_f8 = fVar31;
    uVar22._0_4_ = sqrtf((float)uVar22);
    uVar23 = extraout_XMM0_Db_00;
    fVar31 = fStack_f8;
    if ((float)uVar22 <= 1e-05) goto label_05c113cd;
label_05c113fa:
    fStack_f8 = fVar31 / (float)uVar22;
    auVar10._4_4_ = (float)uVar22;
    auVar10._0_4_ = (float)uVar22;
    auVar10._8_4_ = uVar23;
    auVar10._12_4_ = uVar23;
    auVar28 = divps(_auStack_108,auVar10);
    auStack_138._0_4_ = auVar28._0_4_;
    auStack_138._4_4_ = auVar28._4_4_;
  }
  else {
    uVar22._0_4_ = SQRT((float)uVar22);
    if (1e-05 < (float)uVar22) goto label_05c113fa;
label_05c113cd:
    pUVar21 = TypeInfo_UnityEngine_Vector3->static_fields;
    fStack_f8 = (pUVar21->zeroVector).fields.z;
  }
  uStack_c8._0_4_ = (pUVar21->zeroVector).fields.x;
  uStack_c8._4_4_ = (pUVar21->zeroVector).fields.y;
  uStack_c0 = 0;
  uVar22._0_4_ = fStack_f8;
  if ((TypeInfo_Effects_EffectPrefabs->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Effects_EffectPrefabs);
    uVar22._0_4_ = fStack_f8;
  }
  pSVar15 = TypeInfo_Effects_EffectPrefabs->static_fields->GunExplode;
  auStack_138._0_8_ = uStack_c8;
  auStack_138._8_4_ = (float)uVar22;
  if (Il2CppMethodInitialized_0753e72c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    Il2CppMethodInitialized_0753e72c = '\x01';
  }
  pUVar14 = TypeInfo_UnityEngine_Vector3->static_fields;
  UStack_e8.fields.x = (pUVar14->upVector).fields.x;
  UStack_e8.fields.y = (pUVar14->upVector).fields.y;
  uVar23 = 0;
  uVar30 = 0;
  UStack_e8.fields.z = (pUVar14->upVector).fields.z;
  UVar35 = UnityEngine_Quaternion__Internal_LookRotation
                     ((UnityEngine_Vector3_o *)auStack_138,(UnityEngine_Vector3_o *)(auStack_f0 + 8),
                      (MethodInfo *)0x0);
  auVar33._8_4_ = uVar23;
  auVar33._0_8_ = UVar35.fields._8_8_;
  auVar33._12_4_ = uVar30;
  uVar22._0_4_ = UVar35.fields.x;
  uVar22._4_4_ = UVar35.fields.y;
  if ((TypeInfo_Effects_EffectSpawner->_2).cctor_finished_or_no_cctor == 0) {
    fStack_100 = (float)extraout_XMM0_Dc_04;
    auStack_108 = (undefined1  [8])UVar35.fields._0_8_;
    fStack_fc = (float)extraout_XMM0_Dd_04;
    _auStack_d8 = auVar33;
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Effects_EffectSpawner);
    uVar22._0_4_ = (float)auStack_108._0_4_;
    uVar22._4_4_ = (float)auStack_108._4_4_;
    auVar33 = _auStack_d8;
  }
  UVar35.fields.y = uVar22._4_4_;
  UVar35.fields.x = (float)uVar22;
  UVar35.fields._8_8_ = auVar33._0_8_;
  UVar36.fields.z = (float)auStack_138._16_4_;
  UVar36.fields.x = (float)auStack_138._32_4_;
  UVar36.fields.y = UStack_114.fields.x;
  Effects_EffectSpawner__Spawn(pSVar15,UVar36,UVar35,0.2,true,(System_Object_array *)0x0,(MethodInfo *)0x0);
  if ((TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
  }
  pSVar15 = Characters_HumanSounds__GetRandomAPGShot((MethodInfo *)0x0);
  Characters_BaseCharacter__PlaySound((Characters_BaseCharacter_o *)__this_04,pSVar15,(MethodInfo *)0x0);
  pCVar4 = (__this_04->fields).HumanCache;
  uStack_88 = CONCAT44(uStack_88._4_4_,(float)uStack_88);
  uStack_98 = CONCAT44(uStack_98._4_4_,(float)uStack_98);
  uStack_68 = CONCAT44(uStack_68._4_4_,(float)uStack_68);
  uStack_48 = CONCAT44(uStack_48._4_4_,(float)uStack_48);
  if (pCVar4 == (Characters_HumanComponentCache_o *)0x0) {
label_05c11ff1:
    ThrowNullReferenceException();
  }
  pCVar5 = (pCVar4->fields).APGHit;
  uStack_88 = CONCAT44(uStack_88._4_4_,(float)uStack_88);
  uStack_98 = CONCAT44(uStack_98._4_4_,(float)uStack_98);
  uStack_68 = CONCAT44(uStack_68._4_4_,(float)uStack_68);
  uStack_48 = CONCAT44(uStack_48._4_4_,(float)uStack_48);
  if (pCVar5 == (Characters_BaseHitbox_o *)0x0) goto label_05c11ff1;
  pUVar16 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)pCVar5,(MethodInfo *)0x0);
  uStack_88 = CONCAT44(uStack_88._4_4_,(float)uStack_88);
  uStack_98 = CONCAT44(uStack_98._4_4_,(float)uStack_98);
  uStack_68 = CONCAT44(uStack_68._4_4_,(float)uStack_68);
  uStack_48 = CONCAT44(uStack_48._4_4_,(float)uStack_48);
  if (pUVar16 == (UnityEngine_Transform_o *)0x0) goto label_05c11ff1;
  value.fields.z = (float)auStack_138._16_4_;
  value.fields.x = (float)auStack_138._32_4_;
  value.fields.y = UStack_114.fields.x;
  UnityEngine_Transform__set_position(pUVar16,value,(MethodInfo *)0x0);
  pCVar4 = (__this_04->fields).HumanCache;
  uStack_88 = CONCAT44(uStack_88._4_4_,(float)uStack_88);
  uStack_98 = CONCAT44(uStack_98._4_4_,(float)uStack_98);
  uStack_68 = CONCAT44(uStack_68._4_4_,(float)uStack_68);
  uStack_48 = CONCAT44(uStack_48._4_4_,(float)uStack_48);
  if (pCVar4 == (Characters_HumanComponentCache_o *)0x0) goto label_05c11ff1;
  pCVar5 = (pCVar4->fields).APGHit;
  uStack_88 = CONCAT44(uStack_88._4_4_,(float)uStack_88);
  uStack_98 = CONCAT44(uStack_98._4_4_,(float)uStack_98);
  uStack_68 = CONCAT44(uStack_68._4_4_,(float)uStack_68);
  uStack_48 = CONCAT44(uStack_48._4_4_,(float)uStack_48);
  if (pCVar5 == (Characters_BaseHitbox_o *)0x0) goto label_05c11ff1;
  pUVar16 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)pCVar5,(MethodInfo *)0x0);
  auStack_138._0_8_ = uStack_c8;
  auStack_138._8_4_ = fStack_f8;
  if (Il2CppMethodInitialized_0753e72c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    Il2CppMethodInitialized_0753e72c = '\x01';
  }
  pUVar14 = TypeInfo_UnityEngine_Vector3->static_fields;
  UStack_e8.fields.x = (pUVar14->upVector).fields.x;
  UStack_e8.fields.y = (pUVar14->upVector).fields.y;
  UStack_e8.fields.z = (pUVar14->upVector).fields.z;
  UVar35 = UnityEngine_Quaternion__Internal_LookRotation
                     ((UnityEngine_Vector3_o *)auStack_138,(UnityEngine_Vector3_o *)(auStack_f0 + 8),
                      (MethodInfo *)0x0);
  uStack_88 = CONCAT44(uStack_88._4_4_,(float)uStack_88);
  uStack_98 = CONCAT44(uStack_98._4_4_,(float)uStack_98);
  uStack_68 = CONCAT44(uStack_68._4_4_,(float)uStack_68);
  uStack_48 = CONCAT44(uStack_48._4_4_,(float)uStack_48);
  if (pUVar16 == (UnityEngine_Transform_o *)0x0) goto label_05c11ff1;
  UnityEngine_Transform__set_rotation(pUVar16,UVar35,(MethodInfo *)0x0);
  if ((TypeInfo_Characters_CharacterData->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_CharacterData);
  }
  pSVar17 = TypeInfo_Characters_CharacterData->static_fields->HumanWeaponInfo;
  uStack_88 = CONCAT44(uStack_88._4_4_,(float)uStack_88);
  uStack_98 = CONCAT44(uStack_98._4_4_,(float)uStack_98);
  uStack_68 = CONCAT44(uStack_68._4_4_,(float)uStack_68);
  uStack_48 = CONCAT44(uStack_48._4_4_,(float)uStack_48);
  if (pSVar17 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_05c11ff1;
  pSVar17 = (*(pSVar17->klass->vtable)._7_get_Item.methodPtr)
                      (pSVar17,"APG",(pSVar17->klass->vtable)._7_get_Item.method);
  pSVar6 = TypeInfo_Settings_SettingsManager->static_fields->InGameCurrent;
  uStack_88 = CONCAT44(uStack_88._4_4_,(float)uStack_88);
  uStack_98 = CONCAT44(uStack_98._4_4_,(float)uStack_98);
  uStack_68 = CONCAT44(uStack_68._4_4_,(float)uStack_68);
  uStack_48 = CONCAT44(uStack_48._4_4_,(float)uStack_48);
  if (pSVar6 == (Settings_InGameSet_o *)0x0) goto label_05c11ff1;
  pSVar7 = (pSVar6->fields).Misc;
  uStack_88 = CONCAT44(uStack_88._4_4_,(float)uStack_88);
  uStack_98 = CONCAT44(uStack_98._4_4_,(float)uStack_98);
  uStack_68 = CONCAT44(uStack_68._4_4_,(float)uStack_68);
  uStack_48 = CONCAT44(uStack_48._4_4_,(float)uStack_48);
  if (pSVar7 == (Settings_InGameMiscSettings_o *)0x0) goto label_05c11ff1;
  pSVar8 = (pSVar7->fields).APGPVP;
  uStack_88 = CONCAT44(uStack_88._4_4_,(float)uStack_88);
  uStack_98 = CONCAT44(uStack_98._4_4_,(float)uStack_98);
  uStack_68 = CONCAT44(uStack_68._4_4_,(float)uStack_68);
  uStack_48 = CONCAT44(uStack_48._4_4_,(float)uStack_48);
  if (pSVar8 == (Settings_BoolSetting_o *)0x0) goto label_05c11ff1;
  if ((pSVar8->fields)._value != false) {
    if ((TypeInfo_Characters_CharacterData->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_CharacterData);
    }
    pSVar17 = TypeInfo_Characters_CharacterData->static_fields->HumanWeaponInfo;
    uStack_88 = CONCAT44(uStack_88._4_4_,(float)uStack_88);
    uStack_98 = CONCAT44(uStack_98._4_4_,(float)uStack_98);
    uStack_68 = CONCAT44(uStack_68._4_4_,(float)uStack_68);
    uStack_48 = CONCAT44(uStack_48._4_4_,(float)uStack_48);
    if (pSVar17 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_05c11ff1;
    pSVar17 = (*(pSVar17->klass->vtable)._7_get_Item.methodPtr)
                        (pSVar17,"APGPVP",(pSVar17->klass->vtable)._7_get_Item.method);
  }
  pCVar4 = (__this_04->fields).HumanCache;
  uStack_88 = CONCAT44(uStack_88._4_4_,(float)uStack_88);
  uStack_98 = CONCAT44(uStack_98._4_4_,(float)uStack_98);
  uStack_68 = CONCAT44(uStack_68._4_4_,(float)uStack_68);
  uStack_48 = CONCAT44(uStack_48._4_4_,(float)uStack_48);
  if (pCVar4 == (Characters_HumanComponentCache_o *)0x0) goto label_05c11ff1;
  pCVar5 = (pCVar4->fields).APGHit;
  uStack_88 = CONCAT44(uStack_88._4_4_,(float)uStack_88);
  uStack_98 = CONCAT44(uStack_98._4_4_,(float)uStack_98);
  uStack_68 = CONCAT44(uStack_68._4_4_,(float)uStack_68);
  uStack_48 = CONCAT44(uStack_48._4_4_,(float)uStack_48);
  if (pCVar5 == (Characters_BaseHitbox_o *)0x0) goto label_05c11ff1;
  __this_01 = (UnityEngine_CapsuleCollider_o *)(pCVar5->fields)._collider;
  if (__this_01 != (UnityEngine_CapsuleCollider_o *)0x0) {
    bVar1 = (TypeInfo_UnityEngine_CapsuleCollider->_2).typeHierarchyDepth;
    if (((__this_01->klass->_2).typeHierarchyDepth < bVar1) ||
       ((__this_01->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
        (Il2CppClass *)TypeInfo_UnityEngine_CapsuleCollider)) {
      il2cpp_codegen_raise_invalid_cast_exception(__this_01);
    }
  }
  uStack_88 = CONCAT44(uStack_88._4_4_,(float)uStack_88);
  uStack_98 = CONCAT44(uStack_98._4_4_,(float)uStack_98);
  uStack_68 = CONCAT44(uStack_68._4_4_,(float)uStack_68);
  uStack_48 = CONCAT44(uStack_48._4_4_,(float)uStack_48);
  if (pSVar17 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_05c11ff1;
  pSVar18 = (*(pSVar17->klass->vtable)._7_get_Item.methodPtr)
                      (pSVar17,"Radius",(pSVar17->klass->vtable)._7_get_Item.method);
  uStack_88 = CONCAT44(uStack_88._4_4_,(float)uStack_88);
  uStack_98 = CONCAT44(uStack_98._4_4_,(float)uStack_98);
  uStack_68 = CONCAT44(uStack_68._4_4_,(float)uStack_68);
  uStack_48 = CONCAT44(uStack_48._4_4_,(float)uStack_48);
  if (pSVar18 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_05c11ff1;
  uVar22._0_4_ = (float)(*(pSVar18->klass->vtable)._37_get_AsFloat.methodPtr)(pSVar18);
  uStack_88 = CONCAT44(uStack_88._4_4_,(float)uStack_88);
  uStack_98 = CONCAT44(uStack_98._4_4_,(float)uStack_98);
  uStack_68 = CONCAT44(uStack_68._4_4_,(float)uStack_68);
  uStack_48 = CONCAT44(uStack_48._4_4_,(float)uStack_48);
  if (__this_01 == (UnityEngine_CapsuleCollider_o *)0x0) goto label_05c11ff1;
  UnityEngine_CapsuleCollider__set_radius(__this_01,(float)uVar22,(MethodInfo *)0x0);
  pSVar18 = (*(pSVar17->klass->vtable)._7_get_Item.methodPtr)
                      (pSVar17,"Range1Multiplier",(pSVar17->klass->vtable)._7_get_Item.method);
  uStack_88 = CONCAT44(uStack_88._4_4_,(float)uStack_88);
  uStack_98 = CONCAT44(uStack_98._4_4_,(float)uStack_98);
  uStack_68 = CONCAT44(uStack_68._4_4_,(float)uStack_68);
  uStack_48 = CONCAT44(uStack_48._4_4_,(float)uStack_48);
  if (pSVar18 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_05c11ff1;
  uVar22._0_4_ = (*(pSVar18->klass->vtable)._37_get_AsFloat.methodPtr)
                           (pSVar18,(pSVar18->klass->vtable)._37_get_AsFloat.method);
  auStack_108._0_4_ = (float)uVar22;
  pSVar18 = (*(pSVar17->klass->vtable)._7_get_Item.methodPtr)
                      (pSVar17,"Range2Multiplier",(pSVar17->klass->vtable)._7_get_Item.method);
  uStack_88 = CONCAT44(uStack_88._4_4_,(float)uStack_88);
  uStack_98 = CONCAT44(uStack_98._4_4_,(float)uStack_98);
  uStack_68 = CONCAT44(uStack_68._4_4_,(float)uStack_68);
  uStack_48 = CONCAT44(uStack_48._4_4_,(float)uStack_48);
  if (pSVar18 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_05c11ff1;
  uVar22._0_4_ = (*(pSVar18->klass->vtable)._37_get_AsFloat.methodPtr)
                           (pSVar18,(pSVar18->klass->vtable)._37_get_AsFloat.method);
  auStack_d8._0_4_ = (float)uVar22;
  pSVar18 = (*(pSVar17->klass->vtable)._7_get_Item.methodPtr)
                      (pSVar17,"Range1Constant",(pSVar17->klass->vtable)._7_get_Item.method);
  uStack_88 = CONCAT44(uStack_88._4_4_,(float)uStack_88);
  uStack_98 = CONCAT44(uStack_98._4_4_,(float)uStack_98);
  uStack_68 = CONCAT44(uStack_68._4_4_,(float)uStack_68);
  uStack_48 = CONCAT44(uStack_48._4_4_,(float)uStack_48);
  if (pSVar18 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_05c11ff1;
  uVar22._0_4_ = (*(pSVar18->klass->vtable)._37_get_AsFloat.methodPtr)
                           (pSVar18,(pSVar18->klass->vtable)._37_get_AsFloat.method);
  uStack_88 = CONCAT44(extraout_XMM0_Db_01,(float)uVar22);
  fStack_80 = extraout_XMM0_Dc_05;
  fStack_7c = extraout_XMM0_Dd_05;
  pSVar18 = (*(pSVar17->klass->vtable)._7_get_Item.methodPtr)
                      (pSVar17,"Range2Constant",(pSVar17->klass->vtable)._7_get_Item.method);
  uStack_98 = CONCAT44(uStack_98._4_4_,(float)uStack_98);
  uStack_68 = CONCAT44(uStack_68._4_4_,(float)uStack_68);
  uStack_48 = CONCAT44(uStack_48._4_4_,(float)uStack_48);
  if (pSVar18 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_05c11ff1;
  uVar22._0_4_ = (*(pSVar18->klass->vtable)._37_get_AsFloat.methodPtr)
                           (pSVar18,(pSVar18->klass->vtable)._37_get_AsFloat.method);
  uStack_98 = CONCAT44(extraout_XMM0_Db_02,(float)uVar22);
  pSVar18 = (*(pSVar17->klass->vtable)._7_get_Item.methodPtr)
                      (pSVar17,"MinRange",(pSVar17->klass->vtable)._7_get_Item.method);
  uStack_68 = CONCAT44(uStack_68._4_4_,(float)uStack_68);
  uStack_48 = CONCAT44(uStack_48._4_4_,(float)uStack_48);
  if (pSVar18 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_05c11ff1;
  uVar22._0_4_ = (*(pSVar18->klass->vtable)._37_get_AsFloat.methodPtr)
                           (pSVar18,(pSVar18->klass->vtable)._37_get_AsFloat.method);
  uStack_68 = CONCAT44(extraout_XMM0_Db_03,(float)uVar22);
  fStack_60 = extraout_XMM0_Dc_06;
  fStack_5c = extraout_XMM0_Dd_06;
  pSVar18 = (*(pSVar17->klass->vtable)._7_get_Item.methodPtr)
                      (pSVar17,"MaxRange",(pSVar17->klass->vtable)._7_get_Item.method);
  uStack_48 = CONCAT44(uStack_48._4_4_,(float)uStack_48);
  if (pSVar18 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_05c11ff1;
  uVar22 = (*(pSVar18->klass->vtable)._37_get_AsFloat.methodPtr)(pSVar18);
  pUVar3 = (__this_04->fields).Cache;
  uStack_48 = CONCAT44(uStack_48._4_4_,(float)uStack_48);
  if (pUVar3 == (Utility_BaseComponentCache_o *)0x0) goto label_05c11ff1;
  __this_02 = (pUVar3->fields).Rigidbody;
  uStack_48 = uVar22;
  if (__this_02 == (UnityEngine_Rigidbody_o *)0x0) goto label_05c11ff1;
  UVar36 = UnityEngine_Rigidbody__get_linearVelocity(__this_02,(MethodInfo *)0x0);
  uVar22._0_4_ = UVar36.fields.x;
  uVar22._4_4_ = UVar36.fields.y;
  if (Il2CppMethodInitialized_0753e729 == '\0') {
    uStack_70 = extraout_XMM0_Dc_07;
    auStack_78 = (undefined1  [8])UVar36.fields._0_8_;
    uStack_6c = extraout_XMM0_Dd_07;
    fStack_a8 = UVar36.fields.z;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
    Il2CppMethodInitialized_0753e729 = '\x01';
    uVar2 = (TypeInfo_System_Math->_2).cctor_finished_or_no_cctor;
    uVar22._0_4_ = (float)auStack_78._0_4_;
    uVar22._4_4_ = (float)auStack_78._4_4_;
    uVar23 = uStack_70;
    uVar30 = uStack_6c;
    fVar31 = fStack_a8;
    fVar24 = fStack_a8;
  }
  else {
    uVar2 = (TypeInfo_System_Math->_2).cctor_finished_or_no_cctor;
    uVar23 = extraout_XMM0_Dc_07;
    uVar30 = extraout_XMM0_Dd_07;
    fVar31 = UVar36.fields.z;
    fVar24 = fStack_a8;
  }
  fStack_a8 = fVar31;
  fVar31 = fStack_a8;
  if (uVar2 == 0) {
    auStack_78._4_4_ = uVar22._4_4_;
    auStack_78._0_4_ = (float)uVar22;
    uStack_70 = uVar23;
    uStack_6c = uVar30;
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
    uVar22._0_4_ = (float)auStack_78._0_4_;
    uVar22._4_4_ = (float)auStack_78._4_4_;
    fVar31 = fStack_a8;
    fVar24 = fStack_a8;
  }
  fStack_a8 = fVar24;
  uVar22._0_4_ = fVar31 * fVar31 + uVar22._4_4_ * uVar22._4_4_ + (float)uVar22 * (float)uVar22;
  if ((float)uVar22 < 0.0) {
    fStack_a8 = sqrtf((float)uVar22);
    uStack_a4 = extraout_XMM0_Db_04;
    uStack_a0 = extraout_XMM0_Dc_08;
    uStack_9c = extraout_XMM0_Dd_08;
  }
  else {
    uStack_a4 = 0;
    uStack_a0 = 0;
    uStack_9c = 0;
    fStack_a8 = SQRT((float)uVar22);
  }
  pSVar17 = (*(pSVar17->klass->vtable)._7_get_Item.methodPtr)
                      (pSVar17,"Range2Speed",(pSVar17->klass->vtable)._7_get_Item.method);
  if (pSVar17 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_05c11ff1;
  uVar22._0_4_ = (float)(*(pSVar17->klass->vtable)._37_get_AsFloat.methodPtr)(pSVar17);
  uVar22._4_4_ = (float)(~-(uint)((float)uVar22 < fStack_a8) &
                         (uint)((float)uStack_88 + (float)auStack_108._0_4_ * fStack_a8) |
                        (uint)((float)uStack_98 + (float)auStack_d8._0_4_ * fStack_a8) &
                        -(uint)((float)uVar22 < fStack_a8));
  uVar22._0_4_ = (float)uStack_48;
  if (uVar22._4_4_ <= (float)uStack_48) {
    uVar22._0_4_ = uVar22._4_4_;
  }
  UnityEngine_CapsuleCollider__set_height
            (__this_01,
             (float)(~-(uint)((float)uStack_68 <= uVar22._4_4_) & (uint)(float)uStack_68 |
                    (uint)(float)uVar22 & -(uint)((float)uStack_68 <= uVar22._4_4_)),(MethodInfo *)0x0);
  uVar22._0_4_ = UnityEngine_CapsuleCollider__get_height(__this_01,(MethodInfo *)0x0);
  auVar29._4_8_ = 0;
  auVar29._0_4_ = (float)uVar22 * 0.5 + 0.5;
  UnityEngine_CapsuleCollider__set_center
            (__this_01,(UnityEngine_Vector3_o)(auVar29 << 0x40),(MethodInfo *)0x0);
  uVar22._0_4_ = UnityEngine_CapsuleCollider__get_height(__this_01,(MethodInfo *)0x0);
  auStack_d8._4_4_ = extraout_XMM0_Db_05;
  auStack_d8._0_4_ = (float)uVar22 * 1.2;
  fStack_d0 = extraout_XMM0_Dc_09;
  fStack_cc = (float)extraout_XMM0_Dd_09;
  uVar22._0_4_ = UnityEngine_CapsuleCollider__get_radius(__this_01,(MethodInfo *)0x0);
  auStack_108._0_4_ = (float)uVar22;
  uStack_68._0_4_ = (float)auStack_138._32_4_ + (float)auStack_138._32_4_;
  uStack_68._4_4_ = UStack_114.fields.x + UStack_114.fields.x;
  fStack_60 = UStack_114.fields.y + UStack_114.fields.y;
  fStack_5c = UStack_114.fields.z + UStack_114.fields.z;
  uStack_98._0_4_ = (float)auStack_138._16_4_ + (float)auStack_138._16_4_;
  uVar22._0_4_ = UnityEngine_CapsuleCollider__get_height(__this_01,(MethodInfo *)0x0);
  uStack_98._0_4_ = (fStack_f8 * (float)uVar22 + (float)uStack_98) * 0.5;
  uStack_88._0_4_ = (float)uVar22;
  settings = (System_Object_array *)SZArrayNew(TypeInfo_object_array,5);
  uVar22._0_4_ = (float)uStack_88 * uStack_c8._4_4_;
  uVar22._4_4_ = (float)uStack_88 * (float)uStack_c0;
  fVar24 = (float)uStack_88 * uStack_c0._4_4_;
  uStack_88._0_4_ = ((float)uStack_88 * (float)uStack_c8 + (float)uStack_68) * 0.5;
  uStack_88._4_4_ = ((float)uVar22 + uStack_68._4_4_) * 0.5;
  fStack_80 = (uVar22._4_4_ + fStack_60) * 0.0;
  fStack_7c = (fVar24 + fStack_5c) * 0.0;
  fVar24 = (float)auStack_d8._0_4_ * (float)uStack_c0;
  fVar31 = (float)auStack_d8._0_4_ * uStack_c0._4_4_;
  uVar22._4_4_ = (float)auStack_d8._0_4_ * (float)uStack_c8 * 0.5;
  auStack_d8._4_4_ = (float)auStack_d8._0_4_ * uStack_c8._4_4_ * 0.5;
  uVar22._0_4_ = fStack_f8 * (float)auStack_d8._0_4_ * 0.5;
  auStack_d8._0_4_ = uVar22._4_4_;
  fStack_d0 = fVar24 * 0.0;
  fStack_cc = fVar31 * 0.0;
  fStack_f8 = (float)uVar22;
  auStack_138._0_8_ = CONCAT44((float)auStack_d8._4_4_ + uStack_88._4_4_,uVar22._4_4_ + (float)uStack_88);
  auStack_138._8_4_ = (float)uVar22 + (float)uStack_98;
  pIVar19 = il2cpp_vm_Object_Box((Il2CppClass *)TypeInfo_UnityEngine_Vector3,auStack_138);
  uStack_88 = CONCAT44(uStack_88._4_4_,(float)uStack_88);
  uStack_98 = CONCAT44(uStack_98._4_4_,(float)uStack_98);
  uStack_68 = CONCAT44(uStack_68._4_4_,(float)uStack_68);
  if (settings == (System_Object_array *)0x0) goto label_05c11ff1;
  if (pIVar19 != (Il2CppObject *)0x0) {
    pIVar20 = il2cpp_vm_Object_IsInst(pIVar19,(((settings->obj).klass)->_1).element_class);
    if (pIVar20 == (Il2CppObject *)0x0) goto label_05c11ffb;
  }
  if ((int)settings->max_length != 0) {
    settings->m_Items[0] = pIVar19;
    Il2CppCodeGenWriteBarrier(settings->m_Items);
    UStack_e8.fields.x = (float)uStack_88 - (float)auStack_d8._0_4_;
    UStack_e8.fields.y = uStack_88._4_4_ - (float)auStack_d8._4_4_;
    UStack_e8.fields.z = (float)uStack_98 - fStack_f8;
    pIVar19 = il2cpp_vm_Object_Box((Il2CppClass *)TypeInfo_UnityEngine_Vector3,auStack_f0 + 8);
    if (pIVar19 != (Il2CppObject *)0x0) {
      pIVar20 = il2cpp_vm_Object_IsInst(pIVar19,(((settings->obj).klass)->_1).element_class);
      if (pIVar20 == (Il2CppObject *)0x0) goto label_05c11ffb;
    }
    if ((settings->max_length & 0xfffffffe) == 0) goto label_05c11ff6;
    auStack_108._0_4_ = (float)auStack_108._0_4_ * 4.0;
    settings->m_Items[1] = pIVar19;
    Il2CppCodeGenWriteBarrier(settings->m_Items + 1);
    fStack_ac = (float)auStack_108._0_4_;
    pIVar19 = il2cpp_vm_Object_Box(g_data_07556740,&fStack_ac);
    if (pIVar19 != (Il2CppObject *)0x0) {
      pIVar20 = il2cpp_vm_Object_IsInst(pIVar19,(((settings->obj).klass)->_1).element_class);
      if (pIVar20 == (Il2CppObject *)0x0) goto label_05c11ffb;
    }
    if ((uint)settings->max_length < 3) goto label_05c11ff6;
    settings->m_Items[2] = pIVar19;
    Il2CppCodeGenWriteBarrier(settings->m_Items + 2);
    fStack_b0 = (float)auStack_108._0_4_;
    pIVar19 = il2cpp_vm_Object_Box(g_data_07556740,&fStack_b0);
    if (pIVar19 != (Il2CppObject *)0x0) {
      pIVar20 = il2cpp_vm_Object_IsInst(pIVar19,(((settings->obj).klass)->_1).element_class);
      if (pIVar20 == (Il2CppObject *)0x0) goto label_05c11ffb;
    }
    if ((settings->max_length & 0xfffffffc) != 0) {
      settings->m_Items[3] = pIVar19;
      Il2CppCodeGenWriteBarrier(settings->m_Items + 3);
      uStack_b4 = 0x3e800000;
      pIVar19 = il2cpp_vm_Object_Box(g_data_07556740,&uStack_b4);
      if (pIVar19 != (Il2CppObject *)0x0) {
        pIVar20 = il2cpp_vm_Object_IsInst(pIVar19,(((settings->obj).klass)->_1).element_class);
        if (pIVar20 == (Il2CppObject *)0x0) {
label_05c11ffb:
          pIVar19 = il2cpp_codegen_get_array_type_mismatch_exception();
          il2cpp_codegen_raise_exception(pIVar19,(MethodInfo *)0x0);
        }
      }
      if (4 < (uint)settings->max_length) {
        settings->m_Items[4] = pIVar19;
        Il2CppCodeGenWriteBarrier(settings->m_Items + 4);
        if ((TypeInfo_Effects_EffectPrefabs->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Effects_EffectPrefabs);
          pSVar15 = TypeInfo_Effects_EffectPrefabs->static_fields->APGTrail;
        }
        else {
          pSVar15 = TypeInfo_Effects_EffectPrefabs->static_fields->APGTrail;
        }
        if (Il2CppMethodInitialized_0753e72b == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Quaternion);
          Il2CppMethodInitialized_0753e72b = '\x01';
        }
        pUVar9 = TypeInfo_UnityEngine_Quaternion->static_fields;
        uVar22._0_4_ = (pUVar9->identityQuaternion).fields.x;
        uVar22._4_4_ = (pUVar9->identityQuaternion).fields.y;
        auVar32._0_4_ = (pUVar9->identityQuaternion).fields.z;
        auVar32._4_4_ = (pUVar9->identityQuaternion).fields.w;
        if ((TypeInfo_Effects_EffectSpawner->_2).cctor_finished_or_no_cctor == 0) {
          auStack_f0._0_4_ = 0.0;
          auStack_f0._4_4_ = 0.0;
          _fStack_100 = 0;
          auStack_108 = auVar32;
          _fStack_f8 = uVar22;
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Effects_EffectSpawner);
          uVar22._0_4_ = fStack_f8;
          uVar22._4_4_ = fStack_f4;
          auVar32 = auStack_108;
        }
        rotation.fields.y = uVar22._4_4_;
        rotation.fields.x = (float)uVar22;
        rotation.fields.z = (float)SUB84(auVar32,0);
        rotation.fields.w = (float)(int)((ulong)auVar32 >> 0x20);
        position.fields.z = (float)auStack_138._16_4_;
        position.fields.x = (float)auStack_138._32_4_;
        position.fields.y = UStack_114.fields.x;
        Effects_EffectSpawner__Spawn(pSVar15,position,rotation,1.0,true,settings,(MethodInfo *)0x0);
        pCVar4 = (__this_04->fields).HumanCache;
        uStack_88 = CONCAT44(uStack_88._4_4_,(float)uStack_88);
        uStack_98 = CONCAT44(uStack_98._4_4_,(float)uStack_98);
        uStack_68 = CONCAT44(uStack_68._4_4_,(float)uStack_68);
        if (pCVar4 != (Characters_HumanComponentCache_o *)0x0) {
          pCVar5 = (pCVar4->fields).APGHit;
          uStack_88 = CONCAT44(uStack_88._4_4_,(float)uStack_88);
          uStack_98 = CONCAT44(uStack_98._4_4_,(float)uStack_98);
          uStack_68 = CONCAT44(uStack_68._4_4_,(float)uStack_68);
          if (pCVar5 != (Characters_BaseHitbox_o *)0x0) {
            (*(pCVar5->klass->vtable)._5_Activate.methodPtr)
                      (pCVar5,0.0,0.1,(pCVar5->klass->vtable)._5_Activate.method);
            if ((__this_04->fields).AI != false) {
              return;
            }
            if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
            }
            __this_04 = (Characters_Human_o *)TypeInfo_UI_UIManager->static_fields->CurrentMenu;
            uStack_88 = CONCAT44(uStack_88._4_4_,(float)uStack_88);
            uStack_98 = CONCAT44(uStack_98._4_4_,(float)uStack_98);
            uStack_68 = CONCAT44(uStack_68._4_4_,(float)uStack_68);
            if (__this_04 != (Characters_Human_o *)0x0) {
              bVar1 = (TypeInfo_UI_InGameMenu->_2).typeHierarchyDepth;
              uVar22 = uStack_48;
              if (((__this_04->klass->_2).typeHierarchyDepth < bVar1) ||
                 ((__this_04->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
                  (Il2CppClass *)TypeInfo_UI_InGameMenu)) {
label_05c1200d:
                uStack_48 = uVar22;
                il2cpp_codegen_raise_invalid_cast_exception(__this_04);
              }
              __this_03 = (UI_HUDBottomHandler_o *)(__this_04->fields).MovementSync;
              uStack_88 = CONCAT44(uStack_88._4_4_,(float)uStack_88);
              uStack_98 = CONCAT44(uStack_98._4_4_,(float)uStack_98);
              uStack_68 = CONCAT44(uStack_68._4_4_,(float)uStack_68);
              if (__this_03 != (UI_HUDBottomHandler_o *)0x0) {
                UI_HUDBottomHandler__ShootAPG(__this_03,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
        goto label_05c11ff1;
      }
    }
  }
label_05c11ff6:
  ThrowIndexOutOfRangeException();
}


