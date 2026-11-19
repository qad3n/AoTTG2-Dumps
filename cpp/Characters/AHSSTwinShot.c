// Type: Characters.AHSSTwinShot
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Characters/AHSSTwinShot.cs
// Prior real C# source (older reference): Assets/Scripts/Characters/Human/Specials/AHSSTwinShotSpecial.cs
// --------------------------------

// Characters.AHSSTwinShot$$.ctor
// il2cpp: void Characters_AHSSTwinShot___ctor (Characters_AHSSTwinShot_o* __this, Characters_BaseCharacter_o* owner, const MethodInfo* method);
// 0x5c07f00

void Characters_AHSSTwinShot___ctor
               (Characters_AHSSTwinShot_o *__this,Characters_BaseCharacter_o *owner,MethodInfo *method)

{
  Characters_ExtendedUseable___ctor((Characters_ExtendedUseable_o *)__this,owner,(MethodInfo *)0x0);
  (__this->fields).Cooldown = 1.0;
  return;
}


// Characters.AHSSTwinShot$$GetActiveTime
// il2cpp: float Characters_AHSSTwinShot__GetActiveTime (Characters_AHSSTwinShot_o* __this, const MethodInfo* method);
// 0x5c07f20
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5c07f4c: jmp 0x5c07ffe

float Characters_AHSSTwinShot__GetActiveTime(Characters_AHSSTwinShot_o *__this,MethodInfo *method)

{
  uint32_t uVar1;
  code *vtableDispatch;
  SimpleJSONFixed_JSONNode_o *pSVar2;
  long *plVar3;
  float fVar4;
  
  if (Il2CppMethodInitialized_075476a8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_CharacterData);
    il2cpp_codegen_initialize_runtime_metadata(&"FireDelay");
    il2cpp_codegen_initialize_runtime_metadata(&"AHSS");
    Il2CppMethodInitialized_075476a8 = '\x01';
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


// Characters.AHSSTwinShot$$CanUse
// il2cpp: bool Characters_AHSSTwinShot__CanUse (Characters_AHSSTwinShot_o* __this, const MethodInfo* method);
// 0x5c08010
// asm: 7 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5c080ca: mov eax, dword ptr [rbx + 0x48]
// asm:   0x5c080cd: cmp eax, 2
// asm:   0x5c080d0: setge cl
// asm:   0x5c080d3: cmp eax, -1
// asm:   0x5c080d6: sete r15b
// asm:   0x5c080da: or r15b, cl
// asm:   0x5c080dd: jmp 0x5c080b0

bool Characters_AHSSTwinShot__CanUse(Characters_AHSSTwinShot_o *__this,MethodInfo *method)

{
  byte bVar1;
  int iVar2;
  Characters_BaseCharacter_o *pCVar3;
  Photon_Pun_PhotonView_o *pPVar4;
  bool bVar5;
  
  if (Il2CppMethodInitialized_075476a9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_AmmoWeapon);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_Human);
    Il2CppMethodInitialized_075476a9 = '\x01';
  }
  pCVar3 = (__this->fields)._owner;
  if (pCVar3 == (Characters_BaseCharacter_o *)0x0) {
    ThrowNullReferenceException();
  }
  bVar1 = (TypeInfo_Characters_Human->_2).typeHierarchyDepth;
  if (((pCVar3->klass->_2).typeHierarchyDepth < bVar1) ||
     ((pCVar3->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != (Il2CppClass *)TypeInfo_Characters_Human)) {
    il2cpp_codegen_raise_invalid_cast_exception();
  }
  pPVar4 = (*(uint64_t *)((char *)pCVar3 + 0x120));
  if (pPVar4 != (Photon_Pun_PhotonView_o *)0x0) {
    bVar1 = (TypeInfo_Characters_AmmoWeapon->_2).typeHierarchyDepth;
    if ((bVar1 <= (pPVar4->klass->_2).typeHierarchyDepth) &&
       ((pPVar4->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == (Il2CppClass *)TypeInfo_Characters_AmmoWeapon))
    {
      bVar5 = Characters_BaseUseable__CanUse((Characters_BaseUseable_o *)__this,(MethodInfo *)0x0);
      if (bVar5) {
        iVar2 = (pPVar4->fields).Synchronization;
        return iVar2 == -1 || 1 < iVar2;
      }
      return false;
    }
  }
  return false;
}


// Characters.AHSSTwinShot$$OnUse
// il2cpp: void Characters_AHSSTwinShot__OnUse (Characters_AHSSTwinShot_o* __this, const MethodInfo* method);
// 0x5c080f0

void Characters_AHSSTwinShot__OnUse(Characters_AHSSTwinShot_o *__this,MethodInfo *method)

{
  byte bVar1;
  int iVar2;
  Characters_BaseCharacter_o *pCVar3;
  Photon_Pun_PhotonView_o *pPVar4;
  int iVar5;
  
  if (Il2CppMethodInitialized_075476aa == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_AmmoWeapon);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_Human);
    Il2CppMethodInitialized_075476aa = '\x01';
  }
  Characters_BaseUseable__OnUse((Characters_BaseUseable_o *)__this,(MethodInfo *)0x0);
  pCVar3 = (__this->fields)._owner;
  if (pCVar3 == (Characters_BaseCharacter_o *)0x0) {
label_05c081ae:
    ThrowNullReferenceException();
  }
  bVar1 = (TypeInfo_Characters_Human->_2).typeHierarchyDepth;
  if ((bVar1 <= (pCVar3->klass->_2).typeHierarchyDepth) &&
     ((pCVar3->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == (Il2CppClass *)TypeInfo_Characters_Human)) {
    pPVar4 = (*(uint64_t *)((char *)pCVar3 + 0x120));
    if (pPVar4 == (Photon_Pun_PhotonView_o *)0x0) goto label_05c081ae;
    bVar1 = (TypeInfo_Characters_AmmoWeapon->_2).typeHierarchyDepth;
    if ((bVar1 <= (pPVar4->klass->_2).typeHierarchyDepth) &&
       ((pPVar4->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == (Il2CppClass *)TypeInfo_Characters_AmmoWeapon))
    {
      iVar2 = (pPVar4->fields).Synchronization;
      if (-1 < iVar2) {
        iVar5 = 2;
        if (2 < iVar2) {
          iVar5 = iVar2;
        }
        (pPVar4->fields).Synchronization = iVar5 + -2;
      }
      return;
    }
  }
  il2cpp_codegen_raise_invalid_cast_exception();
}


// Characters.AHSSTwinShot$$Deactivate
// il2cpp: void Characters_AHSSTwinShot__Deactivate (Characters_AHSSTwinShot_o* __this, const MethodInfo* method);
// 0x5c081c0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5c08c2b: mov rdi, rbx

void Characters_AHSSTwinShot__Deactivate(Characters_AHSSTwinShot_o *__this,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  byte bVar5;
  uint32_t uVar6;
  Characters_Human_o *__this_00;
  Characters_Human_c *pCVar7;
  Utility_BaseComponentCache_o *pUVar8;
  Characters_HumanComponentCache_o *pCVar9;
  Characters_BaseHitbox_o *pCVar10;
  UnityEngine_Rigidbody_o *__this_01;
  UI_HUDBottomHandler_o *__this_02;
  undefined1 auVar11 [16];
  UnityEngine_Vector3_StaticFields *pUVar12;
  long lVar13;
  System_String_o *pSVar14;
  SimpleJSONFixed_JSONNode_o *pSVar15;
  SimpleJSONFixed_JSONNode_o *pSVar16;
  UnityEngine_Transform_o *pUVar17;
  UI_BaseMenu_o *__this_03;
  UnityEngine_Vector3_StaticFields *pUVar18;
  float fVar19;
  float fVar20;
  float extraout_XMM0_Db;
  float extraout_XMM0_Db_00;
  undefined4 extraout_XMM0_Dc;
  float extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dc_01;
  undefined4 extraout_XMM0_Dc_02;
  float extraout_XMM0_Dc_03;
  float fVar21;
  undefined4 extraout_XMM0_Dc_04;
  undefined4 extraout_XMM0_Dd;
  float extraout_XMM0_Dd_00;
  undefined4 extraout_XMM0_Dd_01;
  float extraout_XMM0_Dd_02;
  float extraout_XMM0_Dd_03;
  float fVar22;
  undefined4 extraout_XMM0_Dd_04;
  float in_XMM1_Db;
  float in_XMM1_Dc;
  undefined4 uVar27;
  float in_XMM1_Dd;
  undefined1 auVar23 [16];
  undefined1 auVar26 [12];
  undefined1 auVar24 [16];
  undefined8 uVar28;
  undefined1 auVar25 [16];
  undefined4 uVar29;
  float fVar30;
  undefined1 auVar31 [16];
  UnityEngine_Quaternion_Fields UVar32;
  UnityEngine_Quaternion_o UVar33;
  UnityEngine_Vector3_o UVar34;
  UnityEngine_Vector3_o euler;
  UnityEngine_Vector3_o value;
  UnityEngine_Vector3_o force;
  undefined1 local_b8 [16];
  UnityEngine_Quaternion_Fields local_a8;
  undefined1 local_98 [8];
  UnityEngine_Vector3_Fields UStack_90;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  undefined1 local_78 [16];
  undefined1 local_68 [8];
  float fStack_60;
  float fStack_5c;
  undefined1 local_58 [8];
  undefined8 uStack_50;
  undefined1 local_48 [8];
  float fStack_40;
  float fStack_3c;
  UnityEngine_Quaternion_o local_38;
  
  if (Il2CppMethodInitialized_075476ab == '\0') {
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
    Il2CppMethodInitialized_075476ab = '\x01';
  }
  local_38.fields = (UnityEngine_Quaternion_Fields)ZEXT816(0);
  __this_00 = (Characters_Human_o *)(__this->fields)._owner;
  if (__this_00 == (Characters_Human_o *)0x0) goto label_05c08c1e;
  pCVar7 = __this_00->klass;
  bVar5 = (TypeInfo_Characters_Human->_2).typeHierarchyDepth;
  if (((pCVar7->_2).typeHierarchyDepth < bVar5) ||
     ((pCVar7->_2).typeHierarchy[(ulong)bVar5 - 1] != (Il2CppClass *)TypeInfo_Characters_Human)) {
    il2cpp_codegen_raise_invalid_cast_exception(__this_00);
  }
  UVar34 = (*(pCVar7->vtable)._76_GetAimPoint.methodPtr)(__this_00,(pCVar7->vtable)._76_GetAimPoint.method);
  pUVar8 = (__this_00->fields).Cache;
  if (pUVar8 == (Utility_BaseComponentCache_o *)0x0) goto label_05c08c1e;
  fStack_60 = (float)extraout_XMM0_Dc;
  local_68 = (undefined1  [8])UVar34.fields._0_8_;
  fStack_5c = (float)extraout_XMM0_Dd;
  pUVar17 = (pUVar8->fields).Transform;
  UStack_90.z = UVar34.fields.z;
  fStack_84 = in_XMM1_Db;
  fStack_80 = in_XMM1_Dc;
  fStack_7c = in_XMM1_Dd;
  if (pUVar17 == (UnityEngine_Transform_o *)0x0) goto label_05c08c1e;
  UVar34 = UnityEngine_Transform__get_position(pUVar17,(MethodInfo *)0x0);
  fVar19 = UVar34.fields.z;
  fVar20 = UVar34.fields.x;
  fVar30 = UVar34.fields.y;
  if (g_data_0753e72d == '\0') {
    local_98._0_4_ = fVar19;
    local_a8.z = extraout_XMM0_Dc_00;
    local_a8._0_8_ = UVar34.fields._0_8_;
    local_a8.w = extraout_XMM0_Dd_00;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    g_data_0753e72d = '\x01';
    local_b8._0_4_ = 0.0;
    local_b8._4_4_ = 0.0;
    fVar20 = local_a8.x;
    fVar30 = local_a8.y;
    fVar21 = local_a8.z;
    fVar22 = local_a8.w;
    fVar19 = (float)local_98._0_4_;
  }
  else {
    local_b8._0_4_ = 0.0;
    local_b8._4_4_ = 0.0;
    fVar21 = extraout_XMM0_Dc_00;
    fVar22 = extraout_XMM0_Dd_00;
  }
  local_b8._0_8_ = 0;
  if (Il2CppMethodInitialized_0753e729 == '\0') {
    local_b8._0_8_ = 0;
    local_98._0_4_ = fVar19;
    local_a8.y = fVar30;
    local_a8.x = fVar20;
    local_a8.z = fVar21;
    local_a8.w = fVar22;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
    Il2CppMethodInitialized_0753e729 = '\x01';
    fVar20 = local_a8.x;
    fVar30 = local_a8.y;
    fVar21 = local_a8.z;
    fVar22 = local_a8.w;
    fVar19 = (float)local_98._0_4_;
  }
  pUVar12 = (UnityEngine_Vector3_StaticFields *)local_b8;
  pUVar18 = (UnityEngine_Vector3_StaticFields *)local_b8;
  UVar32.x = (float)local_68._0_4_ - fVar20;
  UVar32.y = (float)local_68._4_4_ - fVar30;
  UVar32.z = fStack_60 - fVar21;
  UVar32.w = fStack_5c - fVar22;
  fVar20 = UStack_90.z - fVar19;
  fVar30 = fStack_84;
  if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
    local_98._0_4_ = UStack_90.z - fVar19;
    local_a8 = UVar32;
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
    fVar30 = 0.0;
    fVar20 = (float)local_98._0_4_;
    UVar32 = local_a8;
  }
  fVar19 = fVar20 * fVar20 + UVar32.y * UVar32.y + UVar32.x * UVar32.x;
  if (fVar19 < 0.0) {
    local_98._0_4_ = fVar20;
    local_a8 = UVar32;
    fVar19 = sqrtf(fVar19);
    fVar30 = extraout_XMM0_Db;
    fVar20 = (float)local_98._0_4_;
    UVar32 = local_a8;
    if (1e-05 < fVar19) goto label_05c083ce;
label_05c08392:
    pUVar12 = TypeInfo_UnityEngine_Vector3->static_fields;
    fVar20 = (pUVar12->zeroVector).fields.z;
  }
  else {
    fVar19 = SQRT(fVar19);
    if (fVar19 <= 1e-05) goto label_05c08392;
label_05c083ce:
    fVar20 = fVar20 / fVar19;
    auVar25._4_4_ = fVar19;
    auVar25._0_4_ = fVar19;
    auVar25._8_4_ = fVar30;
    auVar25._12_4_ = fVar30;
    auVar25 = divps((undefined1  [16])UVar32,auVar25);
    local_b8._0_8_ = auVar25._0_8_;
  }
  pUVar8 = (__this_00->fields).Cache;
  if (pUVar8 == (Utility_BaseComponentCache_o *)0x0) goto label_05c08c1e;
  local_98._0_4_ = fVar20;
  pUVar17 = (pUVar8->fields).Transform;
  if (pUVar17 == (UnityEngine_Transform_o *)0x0) goto label_05c08c1e;
  uVar1 = (pUVar12->zeroVector).fields.x;
  uVar3 = (pUVar12->zeroVector).fields.y;
  local_a8.y = (float)uVar3;
  local_a8.x = (float)uVar1;
  local_a8.z = 0.0;
  local_a8.w = 0.0;
  UnityEngine_Transform__get_forward(pUVar17,(MethodInfo *)0x0);
  uVar6 = (TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor;
  if ((__this_00->fields).Grounded == false) {
    if (uVar6 == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
    }
    lVar13 = 0x108;
  }
  else {
    if (uVar6 == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
    }
    lVar13 = 0xf0;
  }
  pSVar14 = *(System_String_o **)
             ((long)&TypeInfo_Characters_HumanAnimations->static_fields->HorseMount + lVar13);
  Characters_Human__set_State(__this_00,1,(MethodInfo *)0x0);
  (__this_00->fields).AttackAnimation = pSVar14;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).AttackAnimation);
  Characters_BaseCharacter__CrossFade
            ((Characters_BaseCharacter_o *)__this_00,pSVar14,0.05,0.0,(MethodInfo *)0x0);
  local_b8._0_4_ = local_a8.x;
  local_b8._4_4_ = local_a8.y;
  local_b8._8_4_ = local_98._0_4_;
  if (Il2CppMethodInitialized_0753e72c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    Il2CppMethodInitialized_0753e72c = '\x01';
  }
  pUVar12 = TypeInfo_UnityEngine_Vector3->static_fields;
  local_78._0_4_ = (pUVar12->upVector).fields.x;
  local_78._4_4_ = (pUVar12->upVector).fields.y;
  local_78._8_4_ = (pUVar12->upVector).fields.z;
  auVar25 = ZEXT416((uint)local_78._8_4_);
  local_38 = UnityEngine_Quaternion__Internal_LookRotation
                       ((UnityEngine_Vector3_o *)local_b8,(UnityEngine_Vector3_o *)local_78,(MethodInfo *)0x0)
  ;
  auVar23._8_8_ = auVar25._8_8_;
  auVar23._0_8_ = local_38.fields._8_8_;
  UVar34 = UnityEngine_Quaternion__Internal_ToEulerRad(&local_38,(MethodInfo *)0x0);
  auVar26 = auVar23._4_12_;
  euler.fields.x = UVar34.fields.x * 57.29578;
  euler.fields.y = UVar34.fields.y * 57.29578;
  euler.fields.z = UVar34.fields.z * 57.29578;
  UVar34 = UnityEngine_Quaternion__Internal_MakePositive(euler,(MethodInfo *)0x0);
  auVar24._12_4_ = 0;
  auVar24._0_12_ = auVar26;
  auVar24 = auVar24 << 0x20;
  (__this_00->fields).TargetAngle = UVar34.fields.y;
  local_b8._0_8_ = (ulong)(uint)(UVar34.fields.y * 0.017453292) << 0x20;
  local_b8._8_8_ = (ulong)(uint)local_b8._12_4_ << 0x20;
  UVar32 = (UnityEngine_Quaternion_Fields)
           UnityEngine_Quaternion__Internal_FromEulerRad((UnityEngine_Vector3_o *)local_b8,(MethodInfo *)0x0);
  uVar28 = auVar24._8_8_;
  (__this_00->fields)._targetRotation.fields = UVar32;
  pUVar8 = (__this_00->fields).Cache;
  if ((pUVar8 == (Utility_BaseComponentCache_o *)0x0) ||
     (pUVar17 = (pUVar8->fields).Transform, pUVar17 == (UnityEngine_Transform_o *)0x0)) goto label_05c08c1e;
  UVar33 = UnityEngine_Transform__get_rotation(pUVar17,(MethodInfo *)0x0);
  local_a8.z = (float)extraout_XMM0_Dc_01;
  local_a8._0_8_ = UVar33.fields._0_8_;
  local_a8.w = (float)extraout_XMM0_Dd_01;
  uStack_50 = uVar28;
  local_58 = (undefined1  [8])UVar33.fields._8_8_;
  _local_98 = (__this_00->fields)._targetRotation.fields;
  fVar20 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
  local_b8._0_4_ = local_a8.x;
  local_b8._4_4_ = local_a8.y;
  local_b8._8_8_ = local_58;
  local_78._0_8_ = local_98;
  local_78._8_4_ = UStack_90.x;
  local_78._12_4_ = UStack_90.y;
  UVar33 = UnityEngine_Quaternion__Internal_Lerp
                     ((UnityEngine_Quaternion_o *)local_b8,(UnityEngine_Quaternion_o *)local_78,fVar20 * 30.0,
                      (MethodInfo *)0x0);
  UnityEngine_Transform__set_rotation(pUVar17,UVar33,(MethodInfo *)0x0);
  pUVar8 = (__this_00->fields).Cache;
  if ((pUVar8 == (Utility_BaseComponentCache_o *)0x0) ||
     (pUVar17 = (pUVar8->fields).Transform, pUVar17 == (UnityEngine_Transform_o *)0x0)) goto label_05c08c1e;
  UVar34 = UnityEngine_Transform__get_position(pUVar17,(MethodInfo *)0x0);
  pUVar8 = (__this_00->fields).Cache;
  if (pUVar8 == (Utility_BaseComponentCache_o *)0x0) goto label_05c08c1e;
  local_a8.x = UVar34.fields.z;
  UStack_90.x = (float)extraout_XMM0_Dc_02;
  local_98._0_4_ = UVar34.fields.x;
  local_98._4_4_ = UVar34.fields.y;
  UStack_90.y = extraout_XMM0_Dd_02;
  pUVar17 = (pUVar8->fields).Transform;
  if (pUVar17 == (UnityEngine_Transform_o *)0x0) goto label_05c08c1e;
  UVar34 = UnityEngine_Transform__get_up(pUVar17,(MethodInfo *)0x0);
  fVar20 = UVar34.fields.z * 0.8;
  fVar30 = UVar34.fields.x * 0.8;
  fVar19 = UVar34.fields.y * 0.8;
  fVar21 = extraout_XMM0_Dc_03 * 0.0;
  fVar22 = extraout_XMM0_Dd_03 * 0.0;
  if (g_data_0753e72d == '\0') {
    local_58._0_4_ = fVar20;
    local_48._4_4_ = fVar19;
    local_48._0_4_ = fVar30;
    fStack_40 = extraout_XMM0_Dc_03 * 0.0;
    fStack_3c = extraout_XMM0_Dd_03 * 0.0;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    g_data_0753e72d = '\x01';
    fVar30 = (float)local_48._0_4_;
    fVar19 = (float)local_48._4_4_;
    fVar21 = fStack_40;
    fVar22 = fStack_3c;
    fVar20 = (float)local_58._0_4_;
  }
  local_98._0_4_ = (float)local_98._0_4_ + fVar30;
  local_98._4_4_ = (float)local_98._4_4_ + fVar19;
  UStack_90.x = UStack_90.x + fVar21;
  UStack_90.y = UStack_90.y + fVar22;
  fVar20 = local_a8.x + fVar20;
  local_b8._0_4_ = 0.0;
  local_b8._4_4_ = 0.0;
  local_a8.x = fVar20;
  fVar30 = (float)local_98._0_4_;
  fVar19 = (float)local_98._4_4_;
  fVar21 = UStack_90.x;
  fVar22 = UStack_90.y;
  if (Il2CppMethodInitialized_0753e729 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
    Il2CppMethodInitialized_0753e729 = '\x01';
    fVar30 = (float)local_98._0_4_;
    fVar19 = (float)local_98._4_4_;
    fVar21 = UStack_90.x;
    fVar22 = UStack_90.y;
    fVar20 = local_a8.x;
  }
  local_68._0_4_ = (float)local_68._0_4_ - fVar30;
  local_68._4_4_ = (float)local_68._4_4_ - fVar19;
  UStack_90.z = UStack_90.z - fVar20;
  fStack_60 = fStack_60 - fVar21;
  fStack_5c = fStack_5c - fVar22;
  fVar20 = (float)local_68._0_4_;
  fVar19 = (float)local_68._4_4_;
  fVar30 = fStack_84;
  if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
    fVar20 = (float)local_68._0_4_;
    fVar19 = (float)local_68._4_4_;
    fVar30 = fStack_84;
  }
  fVar20 = UStack_90.z * UStack_90.z + fVar19 * fVar19 + fVar20 * fVar20;
  fStack_84 = fVar30;
  if (fVar20 < 0.0) {
    fVar20 = sqrtf(fVar20);
    fVar30 = extraout_XMM0_Db_00;
    if (1e-05 < fVar20) goto label_05c087cc;
label_05c087a1:
    pUVar18 = TypeInfo_UnityEngine_Vector3->static_fields;
    UStack_90.z = (pUVar18->zeroVector).fields.z;
    fStack_84 = 0.0;
    fStack_80 = 0.0;
    fStack_7c = 0.0;
  }
  else {
    fVar20 = SQRT(fVar20);
    if (fVar20 <= 1e-05) goto label_05c087a1;
label_05c087cc:
    UStack_90.z = UStack_90.z / fVar20;
    auVar11._4_4_ = fVar20;
    auVar11._0_4_ = fVar20;
    auVar11._8_4_ = fVar30;
    auVar11._12_4_ = fVar30;
    auVar25 = divps(_local_68,auVar11);
    local_b8._0_4_ = auVar25._0_4_;
    local_b8._4_4_ = auVar25._4_4_;
  }
  uVar2 = (pUVar18->zeroVector).fields.x;
  uVar4 = (pUVar18->zeroVector).fields.y;
  local_68._4_4_ = uVar4;
  local_68._0_4_ = uVar2;
  _fStack_60 = 0;
  if ((TypeInfo_Effects_EffectPrefabs->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Effects_EffectPrefabs);
  }
  pSVar14 = TypeInfo_Effects_EffectPrefabs->static_fields->GunExplode;
  local_b8._0_8_ = local_68;
  local_b8._8_4_ = UStack_90.z;
  if (Il2CppMethodInitialized_0753e72c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    Il2CppMethodInitialized_0753e72c = '\x01';
  }
  pUVar12 = TypeInfo_UnityEngine_Vector3->static_fields;
  local_78._0_4_ = (pUVar12->upVector).fields.x;
  local_78._4_4_ = (pUVar12->upVector).fields.y;
  uVar27 = 0;
  uVar29 = 0;
  local_78._8_4_ = (pUVar12->upVector).fields.z;
  UVar33 = UnityEngine_Quaternion__Internal_LookRotation
                     ((UnityEngine_Vector3_o *)local_b8,(UnityEngine_Vector3_o *)local_78,(MethodInfo *)0x0);
  auVar31._8_4_ = uVar27;
  auVar31._0_8_ = UVar33.fields._8_8_;
  auVar31._12_4_ = uVar29;
  fVar20 = UVar33.fields.x;
  fVar30 = UVar33.fields.y;
  if ((TypeInfo_Effects_EffectSpawner->_2).cctor_finished_or_no_cctor == 0) {
    unique0x1000064b = extraout_XMM0_Dc_04;
    local_58 = (undefined1  [8])UVar33.fields._0_8_;
    unique0x1000064f = extraout_XMM0_Dd_04;
    _local_48 = auVar31;
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Effects_EffectSpawner);
    fVar20 = (float)local_58._0_4_;
    fVar30 = (float)local_58._4_4_;
    auVar31 = _local_48;
  }
  UVar33.fields.y = fVar30;
  UVar33.fields.x = fVar20;
  UVar33.fields._8_8_ = auVar31._0_8_;
  UVar34.fields.z = local_a8.x;
  UVar34.fields.x = (float)local_98._0_4_;
  UVar34.fields.y = (float)local_98._4_4_;
  Effects_EffectSpawner__Spawn(pSVar14,UVar34,UVar33,2.0,true,(System_Object_array *)0x0,(MethodInfo *)0x0);
  if ((TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
  }
  pSVar14 = Characters_HumanSounds__GetRandomAHSSGunShotDouble((MethodInfo *)0x0);
  Characters_BaseCharacter__PlaySound((Characters_BaseCharacter_o *)__this_00,pSVar14,(MethodInfo *)0x0);
  if ((TypeInfo_Characters_CharacterData->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_CharacterData);
  }
  pSVar15 = TypeInfo_Characters_CharacterData->static_fields->HumanWeaponInfo;
  if (pSVar15 != (SimpleJSONFixed_JSONNode_o *)0x0) {
    pSVar15 = (*(pSVar15->klass->vtable)._7_get_Item.methodPtr)
                        (pSVar15,"AHSS",(pSVar15->klass->vtable)._7_get_Item.method);
    pCVar9 = (__this_00->fields).HumanCache;
    if (((pCVar9 != (Characters_HumanComponentCache_o *)0x0) &&
        (pCVar10 = (pCVar9->fields).AHSSHit, pCVar10 != (Characters_BaseHitbox_o *)0x0)) &&
       (pSVar15 != (SimpleJSONFixed_JSONNode_o *)0x0)) {
      __this_03 = (UI_BaseMenu_o *)(pCVar10->fields)._collider;
      pSVar16 = (*(pSVar15->klass->vtable)._7_get_Item.methodPtr)
                          (pSVar15,"Radius",(pSVar15->klass->vtable)._7_get_Item.method);
      if ((pSVar16 != (SimpleJSONFixed_JSONNode_o *)0x0) &&
         (fVar20 = (*(pSVar16->klass->vtable)._37_get_AsFloat.methodPtr)
                             (pSVar16,(pSVar16->klass->vtable)._37_get_AsFloat.method),
         __this_03 != (UI_BaseMenu_o *)0x0)) {
        bVar5 = (TypeInfo_UnityEngine_CapsuleCollider->_2).typeHierarchyDepth;
        if (((__this_03->klass->_2).typeHierarchyDepth < bVar5) ||
           ((__this_03->klass->_2).typeHierarchy[(ulong)bVar5 - 1] !=
            (Il2CppClass *)TypeInfo_UnityEngine_CapsuleCollider)) {
label_05c08c2e:
          il2cpp_codegen_raise_invalid_cast_exception(__this_03);
        }
        UnityEngine_CapsuleCollider__set_radius
                  ((UnityEngine_CapsuleCollider_o *)__this_03,fVar20 + fVar20,(MethodInfo *)0x0);
        pCVar9 = (__this_00->fields).HumanCache;
        if (((pCVar9 != (Characters_HumanComponentCache_o *)0x0) &&
            (pCVar10 = (pCVar9->fields).AHSSHit, pCVar10 != (Characters_BaseHitbox_o *)0x0)) &&
           (pUVar17 = UnityEngine_Component__get_transform
                                ((UnityEngine_Component_o *)pCVar10,(MethodInfo *)0x0),
           pUVar17 != (UnityEngine_Transform_o *)0x0)) {
          value.fields.z = local_a8.x;
          value.fields.x = (float)local_98._0_4_;
          value.fields.y = (float)local_98._4_4_;
          UnityEngine_Transform__set_position(pUVar17,value,(MethodInfo *)0x0);
          pCVar9 = (__this_00->fields).HumanCache;
          if ((pCVar9 != (Characters_HumanComponentCache_o *)0x0) &&
             (pCVar10 = (pCVar9->fields).AHSSHit, pCVar10 != (Characters_BaseHitbox_o *)0x0)) {
            pUVar17 = UnityEngine_Component__get_transform
                                ((UnityEngine_Component_o *)pCVar10,(MethodInfo *)0x0);
            local_b8._0_8_ = local_68;
            local_b8._8_4_ = UStack_90.z;
            if (Il2CppMethodInitialized_0753e72c == '\0') {
              il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
              Il2CppMethodInitialized_0753e72c = '\x01';
            }
            pUVar12 = TypeInfo_UnityEngine_Vector3->static_fields;
            local_78._0_4_ = (pUVar12->upVector).fields.x;
            local_78._4_4_ = (pUVar12->upVector).fields.y;
            local_78._8_4_ = (pUVar12->upVector).fields.z;
            UVar33 = UnityEngine_Quaternion__Internal_LookRotation
                               ((UnityEngine_Vector3_o *)local_b8,(UnityEngine_Vector3_o *)local_78,
                                (MethodInfo *)0x0);
            if (pUVar17 != (UnityEngine_Transform_o *)0x0) {
              UnityEngine_Transform__set_rotation(pUVar17,UVar33,(MethodInfo *)0x0);
              pCVar9 = (__this_00->fields).HumanCache;
              if ((pCVar9 != (Characters_HumanComponentCache_o *)0x0) &&
                 (pCVar10 = (pCVar9->fields).AHSSHit, pCVar10 != (Characters_BaseHitbox_o *)0x0)) {
                (*(pCVar10->klass->vtable)._5_Activate.methodPtr)
                          (pCVar10,0.0,0.1,(pCVar10->klass->vtable)._5_Activate.method);
                pUVar8 = (__this_00->fields).Cache;
                if (pUVar8 != (Utility_BaseComponentCache_o *)0x0) {
                  __this_01 = (pUVar8->fields).Rigidbody;
                  pSVar15 = (*(pSVar15->klass->vtable)._7_get_Item.methodPtr)
                                      (pSVar15,"KnockbackForce",
                                       (pSVar15->klass->vtable)._7_get_Item.method);
                  if ((pSVar15 != (SimpleJSONFixed_JSONNode_o *)0x0) &&
                     (fVar20 = (*(pSVar15->klass->vtable)._37_get_AsFloat.methodPtr)
                                         (pSVar15,(pSVar15->klass->vtable)._37_get_AsFloat.method),
                     __this_01 != (UnityEngine_Rigidbody_o *)0x0)) {
                    force.fields.z = -UStack_90.z * fVar20 + -UStack_90.z * fVar20;
                    force.fields.x = fVar20 * -(float)local_68._0_4_ + fVar20 * -(float)local_68._0_4_;
                    force.fields.y = fVar20 * -(float)local_68._4_4_ + fVar20 * -(float)local_68._4_4_;
                    UnityEngine_Rigidbody__AddForce(__this_01,force,2,(MethodInfo *)0x0);
                    if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
                      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
                    }
                    __this_03 = TypeInfo_UI_UIManager->static_fields->CurrentMenu;
                    if (__this_03 != (UI_BaseMenu_o *)0x0) {
                      bVar5 = (TypeInfo_UI_InGameMenu->_2).typeHierarchyDepth;
                      if (((__this_03->klass->_2).typeHierarchyDepth < bVar5) ||
                         ((__this_03->klass->_2).typeHierarchy[(ulong)bVar5 - 1] !=
                          (Il2CppClass *)TypeInfo_UI_InGameMenu)) goto label_05c08c2e;
                      __this_02 = (UI_HUDBottomHandler_o *)(*(uint64_t *)((char *)__this_03 + 0xb8));
                      if (__this_02 != (UI_HUDBottomHandler_o *)0x0) {
                        UI_HUDBottomHandler__ShootAHSS(__this_02,true,true,(MethodInfo *)0x0);
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
label_05c08c1e:
  ThrowNullReferenceException();
}


