// Type: Characters.AHSSWeapon
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Characters/AHSSWeapon.cs
// Prior real C# source (older reference): Assets/Scripts/Characters/Human/Weapons/AHSSWeapon.cs
// --------------------------------

// Characters.AHSSWeapon$$.ctor
// il2cpp: void Characters_AHSSWeapon___ctor (Characters_AHSSWeapon_o* __this, Characters_BaseCharacter_o* owner, int32_t ammo, int32_t ammoPerRound, float cooldown, const MethodInfo* method);
// 0x5c0fec0

void Characters_AHSSWeapon___ctor
               (Characters_AHSSWeapon_o *__this,Characters_BaseCharacter_o *owner,int32_t ammo,
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


// Characters.AHSSWeapon$$GetActiveTime
// il2cpp: float Characters_AHSSWeapon__GetActiveTime (Characters_AHSSWeapon_o* __this, const MethodInfo* method);
// 0x5c0ff80
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5c0ffac: jmp 0x5c1005e

float Characters_AHSSWeapon__GetActiveTime(Characters_AHSSWeapon_o *__this,MethodInfo *method)

{
  uint32_t uVar1;
  code *vtableDispatch;
  SimpleJSONFixed_JSONNode_o *pSVar2;
  long *plVar3;
  float fVar4;
  
  if (Il2CppMethodInitialized_075476d5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_CharacterData);
    il2cpp_codegen_initialize_runtime_metadata(&"FireDelay");
    il2cpp_codegen_initialize_runtime_metadata(&"AHSS");
    Il2CppMethodInitialized_075476d5 = '\x01';
    uVar1 = (TypeInfo_Characters_CharacterData->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_CharacterData->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_CharacterData);
    pSVar2 = TypeInfo_Characters_CharacterData->static_fields->HumanWeaponInfo;
  }
  else {
    pSVar2 = *(SimpleJSONFixed_JSONNode_o **)((Il2CppClass *)TypeInfo_Characters_CharacterData)->static_fields
    ;
  }
  if (((pSVar2 == (SimpleJSONFixed_JSONNode_o *)0x0) ||
      (pSVar2 = (*(pSVar2->klass->vtable)._7_get_Item.methodPtr)
                          (pSVar2,"AHSS",(pSVar2->klass->vtable)._7_get_Item.method),
      pSVar2 == (SimpleJSONFixed_JSONNode_o *)0x0)) ||
     (plVar3 = (long *)(*(pSVar2->klass->vtable)._7_get_Item.methodPtr)
                                 (pSVar2,"FireDelay",
                                  *(MethodInfo **)((long)&(pSVar2->klass->vtable)._7_get_Item + 8)),
     plVar3 == (long *)0x0)) {
    ThrowNullReferenceException();
  }
  vtableDispatch = *(code **)(*plVar3 + 0x388);
  fVar4 = (float)(*vtableDispatch)(plVar3,*(undefined8 *)(*plVar3 + 0x390),vtableDispatch);
  return fVar4;
}


// Characters.AHSSWeapon$$Activate
// il2cpp: void Characters_AHSSWeapon__Activate (Characters_AHSSWeapon_o* __this, const MethodInfo* method);
// 0x5c10070

void Characters_AHSSWeapon__Activate(Characters_AHSSWeapon_o *__this,MethodInfo *method)

{
  byte bVar1;
  Characters_BaseCharacter_o *pCVar2;
  Characters_BaseCharacter_c *pCVar3;
  UnityEngine_Vector3_o UVar4;
  float in_XMM1_Da;
  
  if (Il2CppMethodInitialized_075476d6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_Human);
    Il2CppMethodInitialized_075476d6 = '\x01';
  }
  pCVar2 = (__this->fields)._owner;
  if (pCVar2 == (Characters_BaseCharacter_o *)0x0) {
    ThrowNullReferenceException();
  }
  pCVar3 = pCVar2->klass;
  bVar1 = (TypeInfo_Characters_Human->_2).typeHierarchyDepth;
  if (((pCVar3->_2).typeHierarchyDepth < bVar1) ||
     ((pCVar3->_2).typeHierarchy[(ulong)bVar1 - 1] != (Il2CppClass *)TypeInfo_Characters_Human)) {
    il2cpp_codegen_raise_invalid_cast_exception();
  }
  UVar4.fields._0_8_ =
       (*(pCVar3->vtable)._76_GetAimPoint.methodPtr)(pCVar2,(pCVar3->vtable)._76_GetAimPoint.method);
  (__this->fields)._target.fields = UVar4.fields._0_8_;
  (__this->fields)._target.fields.z = in_XMM1_Da;
  return;
}


// Characters.AHSSWeapon$$Deactivate
// il2cpp: void Characters_AHSSWeapon__Deactivate (Characters_AHSSWeapon_o* __this, const MethodInfo* method);
// 0x5c100f0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5c10c52: mov rdi, rbx

void Characters_AHSSWeapon__Deactivate(Characters_AHSSWeapon_o *__this,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  byte bVar7;
  int iVar8;
  Characters_Human_o *__this_00;
  Utility_BaseComponentCache_o *pUVar9;
  Characters_HookUseable_o *pCVar10;
  Characters_HumanComponentCache_o *pCVar11;
  Characters_BaseHitbox_o *pCVar12;
  UnityEngine_Rigidbody_o *__this_01;
  UI_HUDBottomHandler_o *__this_02;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  bool bVar15;
  UnityEngine_Vector3_StaticFields *pUVar16;
  long lVar17;
  System_String_o *pSVar18;
  SimpleJSONFixed_JSONNode_o *pSVar19;
  SimpleJSONFixed_JSONNode_o *pSVar20;
  UnityEngine_Transform_o *pUVar21;
  UI_BaseMenu_o *__this_03;
  UnityEngine_Vector3_StaticFields *pUVar22;
  float fVar23;
  float fVar24;
  float extraout_XMM0_Db;
  float extraout_XMM0_Db_00;
  float extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dc_01;
  float extraout_XMM0_Dc_02;
  float fVar25;
  undefined4 extraout_XMM0_Dc_03;
  float extraout_XMM0_Dd;
  undefined4 extraout_XMM0_Dd_00;
  float extraout_XMM0_Dd_01;
  float extraout_XMM0_Dd_02;
  float fVar26;
  undefined4 extraout_XMM0_Dd_03;
  undefined4 uVar31;
  undefined1 auVar27 [16];
  undefined1 auVar30 [12];
  undefined1 auVar28 [16];
  undefined8 uVar32;
  undefined1 auVar29 [16];
  undefined4 uVar33;
  float fVar34;
  undefined1 auVar35 [16];
  UnityEngine_Vector3_o UVar36;
  UnityEngine_Vector3_o euler;
  UnityEngine_Vector3_o value;
  UnityEngine_Vector3_o force;
  UnityEngine_Quaternion_Fields UVar37;
  UnityEngine_Quaternion_o UVar38;
  undefined1 auStack_c8 [16];
  UnityEngine_Quaternion_Fields UStack_b8;
  undefined1 auStack_a8 [8];
  undefined1 auStack_a0 [12];
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  undefined1 auStack_88 [16];
  float fStack_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  undefined1 auStack_58 [8];
  float fStack_50;
  float fStack_4c;
  UnityEngine_Quaternion_o UStack_48;
  
  if (Il2CppMethodInitialized_075476d7 == '\0') {
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
    Il2CppMethodInitialized_075476d7 = '\x01';
  }
  UStack_48.fields = (UnityEngine_Quaternion_Fields)ZEXT816(0);
  __this_00 = (Characters_Human_o *)(__this->fields)._owner;
  if (__this_00 == (Characters_Human_o *)0x0) goto label_05c10c45;
  bVar7 = (TypeInfo_Characters_Human->_2).typeHierarchyDepth;
  if (((__this_00->klass->_2).typeHierarchyDepth < bVar7) ||
     ((__this_00->klass->_2).typeHierarchy[(ulong)bVar7 - 1] != (Il2CppClass *)TypeInfo_Characters_Human)) {
    il2cpp_codegen_raise_invalid_cast_exception(__this_00);
  }
  pUVar9 = (__this_00->fields).Cache;
  if ((pUVar9 == (Utility_BaseComponentCache_o *)0x0) ||
     (pUVar21 = (pUVar9->fields).Transform, pUVar21 == (UnityEngine_Transform_o *)0x0)) goto label_05c10c45;
  uVar1 = (__this->fields)._target.fields.x;
  uVar4 = (__this->fields)._target.fields.y;
  fStack_70 = 0.0;
  fStack_6c = 0.0;
  unique0x10000330 = ZEXT416((uint)(__this->fields)._target.fields.z);
  fStack_78 = (float)uVar1;
  fStack_74 = (float)uVar4;
  UVar36 = UnityEngine_Transform__get_position(pUVar21,(MethodInfo *)0x0);
  fVar23 = UVar36.fields.z;
  fVar24 = UVar36.fields.x;
  fVar34 = UVar36.fields.y;
  if (g_data_0753e72d == '\0') {
    auStack_a8._0_4_ = fVar23;
    UStack_b8.z = extraout_XMM0_Dc;
    UStack_b8._0_8_ = UVar36.fields._0_8_;
    UStack_b8.w = extraout_XMM0_Dd;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    g_data_0753e72d = '\x01';
    auStack_c8._0_4_ = 0.0;
    auStack_c8._4_4_ = 0.0;
    fVar24 = UStack_b8.x;
    fVar34 = UStack_b8.y;
    fVar25 = UStack_b8.z;
    fVar26 = UStack_b8.w;
    fVar23 = (float)auStack_a8._0_4_;
  }
  else {
    auStack_c8._0_4_ = 0.0;
    auStack_c8._4_4_ = 0.0;
    fVar25 = extraout_XMM0_Dc;
    fVar26 = extraout_XMM0_Dd;
  }
  auStack_c8._0_8_ = 0;
  if (Il2CppMethodInitialized_0753e729 == '\0') {
    auStack_c8._0_8_ = 0;
    auStack_a8._0_4_ = fVar23;
    UStack_b8.y = fVar34;
    UStack_b8.x = fVar24;
    UStack_b8.z = fVar25;
    UStack_b8.w = fVar26;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
    Il2CppMethodInitialized_0753e729 = '\x01';
    fVar24 = UStack_b8.x;
    fVar34 = UStack_b8.y;
    fVar25 = UStack_b8.z;
    fVar26 = UStack_b8.w;
    fVar23 = (float)auStack_a8._0_4_;
  }
  pUVar16 = (UnityEngine_Vector3_StaticFields *)auStack_c8;
  pUVar22 = (UnityEngine_Vector3_StaticFields *)auStack_c8;
  UVar37.x = fStack_78 - fVar24;
  UVar37.y = fStack_74 - fVar34;
  UVar37.z = fStack_70 - fVar25;
  UVar37.w = fStack_6c - fVar26;
  fVar24 = (float)auStack_a0._8_4_ - fVar23;
  fVar34 = fStack_94;
  if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
    auStack_a8._0_4_ = (float)auStack_a0._8_4_ - fVar23;
    UStack_b8 = UVar37;
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
    fVar34 = 0.0;
    fVar24 = (float)auStack_a8._0_4_;
    UVar37 = UStack_b8;
  }
  fVar23 = fVar24 * fVar24 + UVar37.y * UVar37.y + UVar37.x * UVar37.x;
  if (fVar23 < 0.0) {
    auStack_a8._0_4_ = fVar24;
    UStack_b8 = UVar37;
    fVar23 = sqrtf(fVar23);
    fVar34 = extraout_XMM0_Db;
    fVar24 = (float)auStack_a8._0_4_;
    UVar37 = UStack_b8;
    if (fVar23 <= 1e-05) goto label_05c102bf;
label_05c102fb:
    fVar24 = fVar24 / fVar23;
    auVar29._4_4_ = fVar23;
    auVar29._0_4_ = fVar23;
    auVar29._8_4_ = fVar34;
    auVar29._12_4_ = fVar34;
    auVar29 = divps((undefined1  [16])UVar37,auVar29);
    auStack_c8._0_8_ = auVar29._0_8_;
  }
  else {
    fVar23 = SQRT(fVar23);
    if (1e-05 < fVar23) goto label_05c102fb;
label_05c102bf:
    pUVar16 = TypeInfo_UnityEngine_Vector3->static_fields;
    fVar24 = (pUVar16->zeroVector).fields.z;
  }
  pUVar9 = (__this_00->fields).Cache;
  if (pUVar9 == (Utility_BaseComponentCache_o *)0x0) goto label_05c10c45;
  auStack_a8._0_4_ = fVar24;
  pUVar21 = (pUVar9->fields).Transform;
  if (pUVar21 == (UnityEngine_Transform_o *)0x0) goto label_05c10c45;
  uVar2 = (pUVar16->zeroVector).fields.x;
  uVar5 = (pUVar16->zeroVector).fields.y;
  UStack_b8.y = (float)uVar5;
  UStack_b8.x = (float)uVar2;
  UStack_b8.z = 0.0;
  UStack_b8.w = 0.0;
  UVar36 = UnityEngine_Transform__get_forward(pUVar21,(MethodInfo *)0x0);
  pCVar10 = (__this_00->fields).HookLeft;
  auStack_68._0_4_ = UVar36.fields.z * UStack_b8.x - UVar36.fields.x * (float)auStack_a8._0_4_;
  if ((__this_00->fields).Grounded == false) {
    if (pCVar10 == (Characters_HookUseable_o *)0x0) goto label_05c10c45;
    bVar15 = Characters_HookUseable__IsHooked(pCVar10,(MethodInfo *)0x0);
    if ((bVar15) || (0.0 <= (float)auStack_68._0_4_)) {
      pCVar10 = (__this_00->fields).HookRight;
      if (pCVar10 == (Characters_HookUseable_o *)0x0) goto label_05c10c45;
      bVar15 = Characters_HookUseable__IsHooked(pCVar10,(MethodInfo *)0x0);
      if (!bVar15) {
        if ((TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
        }
        lVar17 = 0xf8;
        goto label_05c104d5;
      }
    }
    if ((TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
    }
    lVar17 = 0x100;
  }
  else {
    if (pCVar10 == (Characters_HookUseable_o *)0x0) goto label_05c10c45;
    bVar15 = Characters_HookUseable__IsHooked(pCVar10,(MethodInfo *)0x0);
    if ((bVar15) || (0.0 <= (float)auStack_68._0_4_)) {
      pCVar10 = (__this_00->fields).HookRight;
      if (pCVar10 == (Characters_HookUseable_o *)0x0) goto label_05c10c45;
      bVar15 = Characters_HookUseable__IsHooked(pCVar10,(MethodInfo *)0x0);
      if (!bVar15) {
        if ((TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
        }
        lVar17 = 0xe0;
        goto label_05c104d5;
      }
    }
    if ((TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
    }
    lVar17 = 0xe8;
  }
label_05c104d5:
  pSVar18 = *(System_String_o **)
             ((long)&TypeInfo_Characters_HumanAnimations->static_fields->HorseMount + lVar17);
  Characters_Human__set_State(__this_00,1,(MethodInfo *)0x0);
  (__this_00->fields).AttackAnimation = pSVar18;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).AttackAnimation);
  Characters_BaseCharacter__CrossFade
            ((Characters_BaseCharacter_o *)__this_00,pSVar18,0.05,0.0,(MethodInfo *)0x0);
  auStack_c8._0_4_ = UStack_b8.x;
  auStack_c8._4_4_ = UStack_b8.y;
  auStack_c8._8_4_ = auStack_a8._0_4_;
  if (Il2CppMethodInitialized_0753e72c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    Il2CppMethodInitialized_0753e72c = '\x01';
  }
  pUVar16 = TypeInfo_UnityEngine_Vector3->static_fields;
  auStack_88._0_4_ = (pUVar16->upVector).fields.x;
  auStack_88._4_4_ = (pUVar16->upVector).fields.y;
  auStack_88._8_4_ = (pUVar16->upVector).fields.z;
  auVar29 = ZEXT416((uint)auStack_88._8_4_);
  UStack_48 = UnityEngine_Quaternion__Internal_LookRotation
                        ((UnityEngine_Vector3_o *)auStack_c8,(UnityEngine_Vector3_o *)auStack_88,
                         (MethodInfo *)0x0);
  auVar27._8_8_ = auVar29._8_8_;
  auVar27._0_8_ = UStack_48.fields._8_8_;
  UVar36 = UnityEngine_Quaternion__Internal_ToEulerRad(&UStack_48,(MethodInfo *)0x0);
  auVar30 = auVar27._4_12_;
  euler.fields.x = UVar36.fields.x * 57.29578;
  euler.fields.y = UVar36.fields.y * 57.29578;
  euler.fields.z = UVar36.fields.z * 57.29578;
  UVar36 = UnityEngine_Quaternion__Internal_MakePositive(euler,(MethodInfo *)0x0);
  auVar28._12_4_ = 0;
  auVar28._0_12_ = auVar30;
  auVar28 = auVar28 << 0x20;
  (__this_00->fields).TargetAngle = UVar36.fields.y;
  auStack_c8._0_8_ = (ulong)(uint)(UVar36.fields.y * 0.017453292) << 0x20;
  auStack_c8._8_8_ = (ulong)(uint)auStack_c8._12_4_ << 0x20;
  UVar37 = (UnityEngine_Quaternion_Fields)
           UnityEngine_Quaternion__Internal_FromEulerRad
                     ((UnityEngine_Vector3_o *)auStack_c8,(MethodInfo *)0x0);
  uVar32 = auVar28._8_8_;
  (__this_00->fields)._targetRotation.fields = UVar37;
  pUVar9 = (__this_00->fields).Cache;
  if ((pUVar9 == (Utility_BaseComponentCache_o *)0x0) ||
     (pUVar21 = (pUVar9->fields).Transform, pUVar21 == (UnityEngine_Transform_o *)0x0)) goto label_05c10c45;
  UVar38 = UnityEngine_Transform__get_rotation(pUVar21,(MethodInfo *)0x0);
  UStack_b8.z = (float)extraout_XMM0_Dc_00;
  UStack_b8._0_8_ = UVar38.fields._0_8_;
  UStack_b8.w = (float)extraout_XMM0_Dd_00;
  uStack_60 = uVar32;
  auStack_68 = (undefined1  [8])UVar38.fields._8_8_;
  _auStack_a8 = (__this_00->fields)._targetRotation.fields;
  fVar24 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
  auStack_c8._0_4_ = UStack_b8.x;
  auStack_c8._4_4_ = UStack_b8.y;
  auStack_c8._8_8_ = auStack_68;
  auStack_88._0_8_ = auStack_a8;
  auStack_88._8_8_ = auStack_a0._0_8_;
  UVar38 = UnityEngine_Quaternion__Internal_Lerp
                     ((UnityEngine_Quaternion_o *)auStack_c8,(UnityEngine_Quaternion_o *)auStack_88,
                      fVar24 * 30.0,(MethodInfo *)0x0);
  UnityEngine_Transform__set_rotation(pUVar21,UVar38,(MethodInfo *)0x0);
  pUVar9 = (__this_00->fields).Cache;
  if ((pUVar9 == (Utility_BaseComponentCache_o *)0x0) ||
     (pUVar21 = (pUVar9->fields).Transform, pUVar21 == (UnityEngine_Transform_o *)0x0)) goto label_05c10c45;
  UVar36 = UnityEngine_Transform__get_position(pUVar21,(MethodInfo *)0x0);
  pUVar9 = (__this_00->fields).Cache;
  if (pUVar9 == (Utility_BaseComponentCache_o *)0x0) goto label_05c10c45;
  UStack_b8.x = UVar36.fields.z;
  auStack_a0._0_4_ = extraout_XMM0_Dc_01;
  auStack_a8._0_4_ = UVar36.fields.x;
  auStack_a8._4_4_ = UVar36.fields.y;
  auStack_a0._4_4_ = extraout_XMM0_Dd_01;
  pUVar21 = (pUVar9->fields).Transform;
  if (pUVar21 == (UnityEngine_Transform_o *)0x0) goto label_05c10c45;
  UVar36 = UnityEngine_Transform__get_up(pUVar21,(MethodInfo *)0x0);
  fVar24 = UVar36.fields.z * 0.8;
  fVar34 = UVar36.fields.x * 0.8;
  fVar23 = UVar36.fields.y * 0.8;
  fVar25 = extraout_XMM0_Dc_02 * 0.0;
  fVar26 = extraout_XMM0_Dd_02 * 0.0;
  if (g_data_0753e72d == '\0') {
    auStack_68._0_4_ = fVar24;
    auStack_58._4_4_ = fVar23;
    auStack_58._0_4_ = fVar34;
    fStack_50 = extraout_XMM0_Dc_02 * 0.0;
    fStack_4c = extraout_XMM0_Dd_02 * 0.0;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    g_data_0753e72d = '\x01';
    fVar34 = (float)auStack_58._0_4_;
    fVar23 = (float)auStack_58._4_4_;
    fVar25 = fStack_50;
    fVar26 = fStack_4c;
    fVar24 = (float)auStack_68._0_4_;
  }
  auStack_a8._0_4_ = (float)auStack_a8._0_4_ + fVar34;
  auStack_a8._4_4_ = (float)auStack_a8._4_4_ + fVar23;
  auStack_a0._0_4_ = (float)auStack_a0._0_4_ + fVar25;
  auStack_a0._4_4_ = (float)auStack_a0._4_4_ + fVar26;
  fVar24 = UStack_b8.x + fVar24;
  auStack_c8._0_4_ = 0.0;
  auStack_c8._4_4_ = 0.0;
  UStack_b8.x = fVar24;
  fVar34 = (float)auStack_a8._0_4_;
  fVar23 = (float)auStack_a8._4_4_;
  fVar25 = (float)auStack_a0._0_4_;
  fVar26 = (float)auStack_a0._4_4_;
  if (Il2CppMethodInitialized_0753e729 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
    Il2CppMethodInitialized_0753e729 = '\x01';
    fVar34 = (float)auStack_a8._0_4_;
    fVar23 = (float)auStack_a8._4_4_;
    fVar25 = (float)auStack_a0._0_4_;
    fVar26 = (float)auStack_a0._4_4_;
    fVar24 = UStack_b8.x;
  }
  auStack_a0._8_4_ = (float)auStack_a0._8_4_ - fVar24;
  fStack_78 = fStack_78 - fVar34;
  fStack_74 = fStack_74 - fVar23;
  fStack_70 = fStack_70 - fVar25;
  fStack_6c = fStack_6c - fVar26;
  fVar24 = fStack_94;
  if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
    fVar24 = fStack_94;
  }
  fVar34 = (float)auStack_a0._8_4_ * (float)auStack_a0._8_4_ + fStack_74 * fStack_74 + fStack_78 * fStack_78;
  if (fVar34 < 0.0) {
    fStack_94 = fVar24;
    fVar34 = sqrtf(fVar34);
    fVar24 = extraout_XMM0_Db_00;
    if (fVar34 <= 1e-05) goto label_05c107ba;
label_05c107e6:
    auStack_a0._8_4_ = (float)auStack_a0._8_4_ / fVar34;
    auVar14._4_4_ = fStack_74;
    auVar14._0_4_ = fStack_78;
    auVar14._8_4_ = fStack_70;
    auVar14._12_4_ = fStack_6c;
    auVar13._4_4_ = fVar34;
    auVar13._0_4_ = fVar34;
    auVar13._8_4_ = fVar24;
    auVar13._12_4_ = fVar24;
    auVar29 = divps(auVar14,auVar13);
    auStack_c8._0_4_ = auVar29._0_4_;
    auStack_c8._4_4_ = auVar29._4_4_;
  }
  else {
    fVar34 = SQRT(fVar34);
    fStack_94 = fVar24;
    if (1e-05 < fVar34) goto label_05c107e6;
label_05c107ba:
    pUVar22 = TypeInfo_UnityEngine_Vector3->static_fields;
    auStack_a0._8_4_ = (pUVar22->zeroVector).fields.z;
    fStack_94 = 0.0;
    fStack_90 = 0.0;
    fStack_8c = 0.0;
  }
  uVar3 = (pUVar22->zeroVector).fields.x;
  uVar6 = (pUVar22->zeroVector).fields.y;
  fStack_70 = 0.0;
  fStack_6c = 0.0;
  fVar24 = (float)auStack_a0._8_4_;
  fStack_78 = (float)uVar3;
  fStack_74 = (float)uVar6;
  if ((TypeInfo_Effects_EffectPrefabs->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Effects_EffectPrefabs);
    fVar24 = (float)auStack_a0._8_4_;
  }
  pSVar18 = TypeInfo_Effects_EffectPrefabs->static_fields->GunExplode;
  auStack_c8._0_8_ = CONCAT44(fStack_74,fStack_78);
  auStack_c8._8_4_ = fVar24;
  if (Il2CppMethodInitialized_0753e72c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    Il2CppMethodInitialized_0753e72c = '\x01';
  }
  pUVar16 = TypeInfo_UnityEngine_Vector3->static_fields;
  auStack_88._0_4_ = (pUVar16->upVector).fields.x;
  auStack_88._4_4_ = (pUVar16->upVector).fields.y;
  uVar31 = 0;
  uVar33 = 0;
  auStack_88._8_4_ = (pUVar16->upVector).fields.z;
  UVar38 = UnityEngine_Quaternion__Internal_LookRotation
                     ((UnityEngine_Vector3_o *)auStack_c8,(UnityEngine_Vector3_o *)auStack_88,
                      (MethodInfo *)0x0);
  auVar35._8_4_ = uVar31;
  auVar35._0_8_ = UVar38.fields._8_8_;
  auVar35._12_4_ = uVar33;
  fVar24 = UVar38.fields.x;
  fVar34 = UVar38.fields.y;
  if ((TypeInfo_Effects_EffectSpawner->_2).cctor_finished_or_no_cctor == 0) {
    unique0x100006a4 = extraout_XMM0_Dc_03;
    auStack_68 = (undefined1  [8])UVar38.fields._0_8_;
    unique0x100006a8 = extraout_XMM0_Dd_03;
    _auStack_58 = auVar35;
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Effects_EffectSpawner);
    fVar24 = (float)auStack_68._0_4_;
    fVar34 = (float)auStack_68._4_4_;
    auVar35 = _auStack_58;
  }
  UVar36.fields.z = UStack_b8.x;
  UVar36.fields.x = (float)auStack_a8._0_4_;
  UVar36.fields.y = (float)auStack_a8._4_4_;
  UVar38.fields.y = fVar34;
  UVar38.fields.x = fVar24;
  UVar38.fields._8_8_ = auVar35._0_8_;
  Effects_EffectSpawner__Spawn(pSVar18,UVar36,UVar38,1.0,true,(System_Object_array *)0x0,(MethodInfo *)0x0);
  if ((TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
  }
  pSVar18 = Characters_HumanSounds__GetRandomAHSSGunShot((MethodInfo *)0x0);
  Characters_BaseCharacter__PlaySound((Characters_BaseCharacter_o *)__this_00,pSVar18,(MethodInfo *)0x0);
  if ((TypeInfo_Characters_CharacterData->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_CharacterData);
  }
  pSVar19 = TypeInfo_Characters_CharacterData->static_fields->HumanWeaponInfo;
  if (pSVar19 != (SimpleJSONFixed_JSONNode_o *)0x0) {
    pSVar19 = (*(pSVar19->klass->vtable)._7_get_Item.methodPtr)
                        (pSVar19,"AHSS",(pSVar19->klass->vtable)._7_get_Item.method);
    pCVar11 = (__this_00->fields).HumanCache;
    if (((pCVar11 != (Characters_HumanComponentCache_o *)0x0) &&
        (pCVar12 = (pCVar11->fields).AHSSHit, pCVar12 != (Characters_BaseHitbox_o *)0x0)) &&
       (pSVar19 != (SimpleJSONFixed_JSONNode_o *)0x0)) {
      __this_03 = (UI_BaseMenu_o *)(pCVar12->fields)._collider;
      pSVar20 = (*(pSVar19->klass->vtable)._7_get_Item.methodPtr)
                          (pSVar19,"Radius",(pSVar19->klass->vtable)._7_get_Item.method);
      if ((pSVar20 != (SimpleJSONFixed_JSONNode_o *)0x0) &&
         (fVar24 = (*(pSVar20->klass->vtable)._37_get_AsFloat.methodPtr)
                             (pSVar20,(pSVar20->klass->vtable)._37_get_AsFloat.method),
         __this_03 != (UI_BaseMenu_o *)0x0)) {
        bVar7 = (TypeInfo_UnityEngine_CapsuleCollider->_2).typeHierarchyDepth;
        if (((__this_03->klass->_2).typeHierarchyDepth < bVar7) ||
           ((__this_03->klass->_2).typeHierarchy[(ulong)bVar7 - 1] !=
            (Il2CppClass *)TypeInfo_UnityEngine_CapsuleCollider)) {
label_05c10c55:
          il2cpp_codegen_raise_invalid_cast_exception(__this_03);
        }
        UnityEngine_CapsuleCollider__set_radius
                  ((UnityEngine_CapsuleCollider_o *)__this_03,fVar24,(MethodInfo *)0x0);
        pCVar11 = (__this_00->fields).HumanCache;
        if (((pCVar11 != (Characters_HumanComponentCache_o *)0x0) &&
            (pCVar12 = (pCVar11->fields).AHSSHit, pCVar12 != (Characters_BaseHitbox_o *)0x0)) &&
           (pUVar21 = UnityEngine_Component__get_transform
                                ((UnityEngine_Component_o *)pCVar12,(MethodInfo *)0x0),
           pUVar21 != (UnityEngine_Transform_o *)0x0)) {
          value.fields.z = UStack_b8.x;
          value.fields.x = (float)auStack_a8._0_4_;
          value.fields.y = (float)auStack_a8._4_4_;
          UnityEngine_Transform__set_position(pUVar21,value,(MethodInfo *)0x0);
          pCVar11 = (__this_00->fields).HumanCache;
          if ((pCVar11 != (Characters_HumanComponentCache_o *)0x0) &&
             (pCVar12 = (pCVar11->fields).AHSSHit, pCVar12 != (Characters_BaseHitbox_o *)0x0)) {
            pUVar21 = UnityEngine_Component__get_transform
                                ((UnityEngine_Component_o *)pCVar12,(MethodInfo *)0x0);
            auStack_c8._0_8_ = CONCAT44(fStack_74,fStack_78);
            auStack_c8._8_4_ = auStack_a0._8_4_;
            if (Il2CppMethodInitialized_0753e72c == '\0') {
              il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
              Il2CppMethodInitialized_0753e72c = '\x01';
            }
            pUVar16 = TypeInfo_UnityEngine_Vector3->static_fields;
            auStack_88._0_4_ = (pUVar16->upVector).fields.x;
            auStack_88._4_4_ = (pUVar16->upVector).fields.y;
            auStack_88._8_4_ = (pUVar16->upVector).fields.z;
            UVar38 = UnityEngine_Quaternion__Internal_LookRotation
                               ((UnityEngine_Vector3_o *)auStack_c8,(UnityEngine_Vector3_o *)auStack_88,
                                (MethodInfo *)0x0);
            if (pUVar21 != (UnityEngine_Transform_o *)0x0) {
              UnityEngine_Transform__set_rotation(pUVar21,UVar38,(MethodInfo *)0x0);
              pCVar11 = (__this_00->fields).HumanCache;
              if ((pCVar11 != (Characters_HumanComponentCache_o *)0x0) &&
                 (pCVar12 = (pCVar11->fields).AHSSHit, pCVar12 != (Characters_BaseHitbox_o *)0x0)) {
                (*(pCVar12->klass->vtable)._5_Activate.methodPtr)
                          (pCVar12,0.0,0.1,(pCVar12->klass->vtable)._5_Activate.method);
                pUVar9 = (__this_00->fields).Cache;
                if (pUVar9 != (Utility_BaseComponentCache_o *)0x0) {
                  __this_01 = (pUVar9->fields).Rigidbody;
                  pSVar19 = (*(pSVar19->klass->vtable)._7_get_Item.methodPtr)
                                      (pSVar19,"KnockbackForce",
                                       (pSVar19->klass->vtable)._7_get_Item.method);
                  if ((pSVar19 != (SimpleJSONFixed_JSONNode_o *)0x0) &&
                     (fVar24 = (*(pSVar19->klass->vtable)._37_get_AsFloat.methodPtr)
                                         (pSVar19,(pSVar19->klass->vtable)._37_get_AsFloat.method),
                     __this_01 != (UnityEngine_Rigidbody_o *)0x0)) {
                    force.fields.z = -(float)auStack_a0._8_4_ * fVar24;
                    force.fields.x = fVar24 * -fStack_78;
                    force.fields.y = fVar24 * -fStack_74;
                    UnityEngine_Rigidbody__AddForce(__this_01,force,2,(MethodInfo *)0x0);
                    if ((__this_00->fields).AI != false) {
                      return;
                    }
                    if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
                      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
                    }
                    __this_03 = TypeInfo_UI_UIManager->static_fields->CurrentMenu;
                    if (__this_03 != (UI_BaseMenu_o *)0x0) {
                      bVar7 = (TypeInfo_UI_InGameMenu->_2).typeHierarchyDepth;
                      if (((__this_03->klass->_2).typeHierarchyDepth < bVar7) ||
                         ((__this_03->klass->_2).typeHierarchy[(ulong)bVar7 - 1] !=
                          (Il2CppClass *)TypeInfo_UI_InGameMenu)) goto label_05c10c55;
                      __this_02 = (UI_HUDBottomHandler_o *)(*(uint64_t *)((char *)__this_03 + 0xb8));
                      if (__this_02 != (UI_HUDBottomHandler_o *)0x0) {
                        iVar8 = (__this->fields).RoundLeft;
                        UI_HUDBottomHandler__ShootAHSS(__this_02,iVar8 == 1,iVar8 == 0,(MethodInfo *)0x0);
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
label_05c10c45:
  ThrowNullReferenceException();
}


// Characters.AHSSWeapon$$HandleUI
// il2cpp: void Characters_AHSSWeapon__HandleUI (Characters_AHSSWeapon_o* __this, const MethodInfo* method);
// 0x5c10c60
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5c10c93: jmp 0x5c10d3a

void Characters_AHSSWeapon__HandleUI(Characters_AHSSWeapon_o *__this,MethodInfo *method)

{
  byte bVar1;
  uint32_t uVar2;
  uint uVar3;
  UI_BaseMenu_o *pUVar4;
  UI_HUDBottomHandler_o *__this_00;
  
  if (Il2CppMethodInitialized_075476d8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_InGameMenu);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    Il2CppMethodInitialized_075476d8 = '\x01';
    uVar2 = (TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar2 = (TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor;
  }
  if (uVar2 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
    pUVar4 = TypeInfo_UI_UIManager->static_fields->CurrentMenu;
  }
  else {
    pUVar4 = *(UI_BaseMenu_o **)((long)((Il2CppClass *)TypeInfo_UI_UIManager)->static_fields + 0x40);
  }
  if (pUVar4 != (UI_BaseMenu_o *)0x0) {
    bVar1 = (((Il2CppClass *)TypeInfo_UI_InGameMenu)->_2).typeHierarchyDepth;
    if (((pUVar4->klass->_2).typeHierarchyDepth < bVar1) ||
       ((pUVar4->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != (Il2CppClass *)TypeInfo_UI_InGameMenu)) {
      il2cpp_codegen_raise_invalid_cast_exception();
    }
    __this_00 = (UI_HUDBottomHandler_o *)(*(uint64_t *)((char *)pUVar4 + 0xb8));
    if (__this_00 != (UI_HUDBottomHandler_o *)0x0) {
      uVar3 = (__this->fields).RoundLeft;
      UI_HUDBottomHandler__ShootAHSS(__this_00,uVar3 < 2,uVar3 == 0,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


