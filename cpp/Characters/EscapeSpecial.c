// Type: Characters.EscapeSpecial
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/Characters/EscapeSpecial.cs
// Prior real C# source (older reference): Assets/Scripts/Characters/Human/Specials/EscapeSpecial.cs
// --------------------------------

// Characters.EscapeSpecial$$get_ActiveTime
// il2cpp: float Characters_EscapeSpecial__get_ActiveTime (Characters_EscapeSpecial_o* __this, const MethodInfo* method);
// 0x5c0b950

float Characters_EscapeSpecial__get_ActiveTime(Characters_EscapeSpecial_o *__this,MethodInfo *method)

{
  return 0.64;
}


// Characters.EscapeSpecial$$.ctor
// il2cpp: void Characters_EscapeSpecial___ctor (Characters_EscapeSpecial_o* __this, Characters_BaseCharacter_o* owner, const MethodInfo* method);
// 0x5c0b960

void Characters_EscapeSpecial___ctor
               (Characters_EscapeSpecial_o *__this,Characters_BaseCharacter_o *owner,MethodInfo *method)

{
  Characters_RechargeableUseable___ctor
            ((Characters_RechargeableUseable_o *)__this,owner,0.0,(MethodInfo *)0x0);
  (__this->fields).UsesLeft = -1;
  (__this->fields).MaxUses = 1;
  (__this->fields).Cooldown = 300.0;
  (__this->fields).ReduceCooldownAmount = 50.0;
  Characters_BaseUseable__SetCooldownLeft((Characters_BaseUseable_o *)__this,300.0,(MethodInfo *)0x0);
  return;
}


// Characters.EscapeSpecial$$CanUse
// il2cpp: bool Characters_EscapeSpecial__CanUse (Characters_EscapeSpecial_o* __this, const MethodInfo* method);
// 0x5c0b9a0

bool Characters_EscapeSpecial__CanUse(Characters_EscapeSpecial_o *__this,MethodInfo *method)

{
  byte bVar1;
  int iVar2;
  Characters_BaseCharacter_o *pCVar3;
  Photon_Pun_PhotonView_o *pPVar4;
  char cVar5;
  bool bVar6;
  bool bVar7;
  
  if (Il2CppMethodInitialized_075476bd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_Human);
    Il2CppMethodInitialized_075476bd = '\x01';
  }
  pCVar3 = (__this->fields)._owner;
  if (pCVar3 != (Characters_BaseCharacter_o *)0x0) {
    bVar1 = (TypeInfo_Characters_Human->_2).typeHierarchyDepth;
    if (((pCVar3->klass->_2).typeHierarchyDepth < bVar1) ||
       ((pCVar3->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != (Il2CppClass *)TypeInfo_Characters_Human)) {
      il2cpp_codegen_raise_invalid_cast_exception(pCVar3);
    }
    pPVar4 = (*(uint64_t *)((char *)pCVar3 + 0x120));
    if (pPVar4 != (Photon_Pun_PhotonView_o *)0x0) {
      cVar5 = (*((Il2CppClass *)pPVar4->klass)->vtable[7].methodPtr)();
      bVar7 = false;
      if (cVar5 != '\0') {
        bVar6 = Characters_BaseUseable__CanUse((Characters_BaseUseable_o *)__this,(MethodInfo *)0x0);
        if (bVar6) {
          iVar2._0_1_ = (*(uint8_t *)((char *)pCVar3 + 0x178));
          iVar2._1_1_ = (*(uint8_t *)((char *)pCVar3 + 0x179));
          iVar2._2_2_ = *(undefined2 *)&pCVar3[1].fields.field_0x6a;
          bVar7 = iVar2 == 7;
        }
      }
      return bVar7;
    }
  }
  ThrowNullReferenceException();
}


// Characters.EscapeSpecial$$Activate
// il2cpp: void Characters_EscapeSpecial__Activate (Characters_EscapeSpecial_o* __this, const MethodInfo* method);
// 0x5c0ba50

void Characters_EscapeSpecial__Activate(Characters_EscapeSpecial_o *__this,MethodInfo *method)

{
  byte bVar1;
  Characters_BaseCharacter_o *__this_00;
  Photon_Pun_PhotonView_o *pPVar2;
  
  if (Il2CppMethodInitialized_075476be == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_AHSSWeapon);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_APGWeapon);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_BladeWeapon);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanAnimations);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_Human);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_ThunderspearWeapon);
    Il2CppMethodInitialized_075476be = '\x01';
  }
  __this_00 = (__this->fields)._owner;
  if (__this_00 == (Characters_BaseCharacter_o *)0x0) {
    ThrowNullReferenceException();
  }
  bVar1 = (TypeInfo_Characters_Human->_2).typeHierarchyDepth;
  if (((__this_00->klass->_2).typeHierarchyDepth < bVar1) ||
     ((__this_00->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != (Il2CppClass *)TypeInfo_Characters_Human)) {
    il2cpp_codegen_raise_invalid_cast_exception(__this_00);
  }
  pPVar2 = (*(uint64_t *)((char *)__this_00 + 0x120));
  if (pPVar2 != (Photon_Pun_PhotonView_o *)0x0) {
    bVar1 = (TypeInfo_Characters_BladeWeapon->_2).typeHierarchyDepth;
    if ((bVar1 <= (pPVar2->klass->_2).typeHierarchyDepth) &&
       ((pPVar2->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == (Il2CppClass *)TypeInfo_Characters_BladeWeapon)
       ) {
      if ((TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
      }
      Characters_BaseCharacter__CrossFade
                (__this_00,TypeInfo_Characters_HumanAnimations->static_fields->SpecialJean,0.1,0.0,
                 (MethodInfo *)0x0);
      pPVar2 = (*(uint64_t *)((char *)__this_00 + 0x120));
      if (pPVar2 == (Photon_Pun_PhotonView_o *)0x0) {
        return;
      }
    }
    bVar1 = (TypeInfo_Characters_AHSSWeapon->_2).typeHierarchyDepth;
    if ((bVar1 <= (pPVar2->klass->_2).typeHierarchyDepth) &&
       ((pPVar2->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == (Il2CppClass *)TypeInfo_Characters_AHSSWeapon))
    {
      if ((TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
      }
      Characters_BaseCharacter__CrossFade
                (__this_00,TypeInfo_Characters_HumanAnimations->static_fields->AHSSShootBoth,0.1,0.0,
                 (MethodInfo *)0x0);
      pPVar2 = (*(uint64_t *)((char *)__this_00 + 0x120));
      if (pPVar2 == (Photon_Pun_PhotonView_o *)0x0) {
        return;
      }
    }
    bVar1 = (TypeInfo_Characters_ThunderspearWeapon->_2).typeHierarchyDepth;
    if ((bVar1 <= (pPVar2->klass->_2).typeHierarchyDepth) &&
       ((pPVar2->klass->_2).typeHierarchy[(ulong)bVar1 - 1] ==
        (Il2CppClass *)TypeInfo_Characters_ThunderspearWeapon)) {
      if ((TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
      }
      Characters_BaseCharacter__CrossFade
                (__this_00,TypeInfo_Characters_HumanAnimations->static_fields->TSShootLAir,0.1,0.0,
                 (MethodInfo *)0x0);
      pPVar2 = (*(uint64_t *)((char *)__this_00 + 0x120));
      if (pPVar2 == (Photon_Pun_PhotonView_o *)0x0) {
        return;
      }
    }
    bVar1 = (TypeInfo_Characters_APGWeapon->_2).typeHierarchyDepth;
    if ((bVar1 <= (pPVar2->klass->_2).typeHierarchyDepth) &&
       ((pPVar2->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == (Il2CppClass *)TypeInfo_Characters_APGWeapon))
    {
      if ((TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
      }
      Characters_BaseCharacter__CrossFade
                (__this_00,TypeInfo_Characters_HumanAnimations->static_fields->AHSSShootBoth,0.1,0.0,
                 (MethodInfo *)0x0);
      return;
    }
  }
  return;
}


// Characters.EscapeSpecial$$Deactivate
// il2cpp: void Characters_EscapeSpecial__Deactivate (Characters_EscapeSpecial_o* __this, const MethodInfo* method);
// 0x5c0bcf0

void Characters_EscapeSpecial__Deactivate(Characters_EscapeSpecial_o *__this,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  byte bVar5;
  Characters_Human_o *__this_00;
  Characters_BaseTitan_o *pCVar6;
  Characters_HumanComponentCache_o *pCVar7;
  Characters_BaseHitbox_o *pCVar8;
  Utility_BaseComponentCache_o *pUVar9;
  UnityEngine_CapsuleCollider_o *__this_01;
  UnityEngine_Rigidbody_o *__this_02;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  bool bVar15;
  System_String_o **ppSVar16;
  UnityEngine_Transform_o *pUVar17;
  System_String_o *pSVar18;
  System_Object_array *pSVar19;
  Il2CppObject *pIVar20;
  Il2CppObject *pIVar21;
  Characters_BaseUseable_o *pCVar22;
  UnityEngine_Vector3_StaticFields *pUVar23;
  float fVar24;
  float fVar25;
  undefined4 uVar26;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  undefined4 extraout_XMM0_Db_01;
  undefined4 extraout_XMM0_Db_02;
  float extraout_XMM0_Db_03;
  undefined4 extraout_XMM0_Db_04;
  float fVar27;
  undefined4 extraout_XMM0_Dc;
  float extraout_XMM0_Dc_00;
  float extraout_XMM0_Dc_01;
  undefined4 extraout_XMM0_Dc_02;
  float extraout_XMM0_Dc_03;
  float extraout_XMM0_Dc_04;
  undefined4 extraout_XMM0_Dc_05;
  float extraout_XMM0_Dc_06;
  float extraout_XMM0_Dc_07;
  float extraout_XMM0_Dc_08;
  undefined4 extraout_XMM0_Dc_09;
  float extraout_XMM0_Dc_10;
  float extraout_XMM0_Dc_11;
  float extraout_XMM0_Dc_12;
  undefined4 extraout_XMM0_Dc_13;
  undefined4 extraout_XMM0_Dc_14;
  undefined4 extraout_XMM0_Dc_15;
  float extraout_XMM0_Dc_16;
  undefined4 extraout_XMM0_Dc_17;
  undefined4 extraout_XMM0_Dd;
  float extraout_XMM0_Dd_00;
  float extraout_XMM0_Dd_01;
  undefined4 extraout_XMM0_Dd_02;
  float extraout_XMM0_Dd_03;
  float extraout_XMM0_Dd_04;
  undefined4 extraout_XMM0_Dd_05;
  float extraout_XMM0_Dd_06;
  float extraout_XMM0_Dd_07;
  float extraout_XMM0_Dd_08;
  undefined4 extraout_XMM0_Dd_09;
  float extraout_XMM0_Dd_10;
  float extraout_XMM0_Dd_11;
  undefined4 extraout_XMM0_Dd_12;
  undefined4 extraout_XMM0_Dd_13;
  undefined4 extraout_XMM0_Dd_14;
  undefined4 extraout_XMM0_Dd_15;
  float extraout_XMM0_Dd_16;
  undefined4 extraout_XMM0_Dd_17;
  undefined4 extraout_XMM1_Db;
  float fVar28;
  float fVar29;
  float fVar32;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  float fVar33;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  float fVar37;
  UnityEngine_Quaternion_o UVar38;
  UnityEngine_Vector3_o UVar39;
  UnityEngine_Vector3_o UVar40;
  UnityEngine_Vector3_o UVar41;
  UnityEngine_Vector3_o position;
  UnityEngine_Vector3_o value;
  undefined8 uStack_158;
  undefined1 auStack_148 [8];
  float fStack_140;
  float fStack_13c;
  undefined8 uStack_138;
  undefined1 auStack_128 [24];
  float fStack_110;
  undefined1 auStack_108 [16];
  undefined1 auStack_f8 [8];
  float fStack_f0;
  float fStack_ec;
  undefined1 auStack_e8 [8];
  float fStack_e0;
  float fStack_dc;
  undefined1 auStack_d8 [8];
  float fStack_d0;
  float fStack_cc;
  float fStack_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  undefined1 auStack_a8 [8];
  undefined8 uStack_a0;
  undefined1 auStack_98 [16];
  UnityEngine_Vector3_Fields UStack_80;
  float fStack_70;
  undefined4 uStack_6c;
  float fStack_68;
  undefined1 auStack_58 [8];
  float fStack_50;
  float fStack_4c;
  undefined1 auStack_48 [8];
  float fStack_40;
  float fStack_3c;
  
  if (Il2CppMethodInitialized_075476bf == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_AHSSWeapon);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_APGWeapon);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_BladeWeapon);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_CapsuleCollider);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Color);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Effects_EffectPrefabs);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Effects_EffectSpawner);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_Human);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_ThunderspearWeapon);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    il2cpp_codegen_initialize_runtime_metadata(&"");
    il2cpp_codegen_initialize_runtime_metadata(&"ForearmLHurtbox");
    il2cpp_codegen_initialize_runtime_metadata(&"ForearmRHurtbox");
    Il2CppMethodInitialized_075476bf = '\x01';
  }
  __this_00 = (Characters_Human_o *)(__this->fields)._owner;
  if (__this_00 == (Characters_Human_o *)0x0) goto label_05c0d783;
  bVar5 = (TypeInfo_Characters_Human->_2).typeHierarchyDepth;
  if (((__this_00->klass->_2).typeHierarchyDepth < bVar5) ||
     ((__this_00->klass->_2).typeHierarchy[(ulong)bVar5 - 1] != (Il2CppClass *)TypeInfo_Characters_Human)) {
    il2cpp_codegen_raise_invalid_cast_exception(__this_00);
  }
  if ((__this_00->fields).Dead != false) {
    return;
  }
  pCVar6 = (__this_00->fields).Grabber;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar15 = UnityEngine_Object__op_Inequality
                     ((UnityEngine_Object_o *)pCVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar15) {
    return;
  }
  if ((__this_00->fields)._state != 7) {
    return;
  }
  pCVar6 = (__this_00->fields).Grabber;
  if (pCVar6 == (Characters_BaseTitan_o *)0x0) goto label_05c0d783;
  if ((pCVar6->fields).HoldHumanLeft == false) {
    ppSVar16 = &"ForearmRHurtbox";
  }
  else {
    ppSVar16 = &"ForearmLHurtbox";
  }
  (*(pCVar6->klass->vtable)._95_GetHit.methodPtr)
            (pCVar6,(Characters_BaseCharacter_o *)__this_00,0,"",*ppSVar16,
             (pCVar6->klass->vtable)._95_GetHit.method);
  uVar26 = extraout_XMM1_Db;
  Characters_Human__Ungrab(__this_00,true,false,false,(MethodInfo *)0x0);
  pCVar22 = (__this_00->fields).Weapon;
  if (pCVar22 != (Characters_BaseUseable_o *)0x0) {
    bVar5 = (TypeInfo_Characters_BladeWeapon->_2).typeHierarchyDepth;
    if ((bVar5 <= (pCVar22->klass->_2).typeHierarchyDepth) &&
       ((pCVar22->klass->_2).typeHierarchy[(ulong)bVar5 - 1] == (Il2CppClass *)TypeInfo_Characters_BladeWeapon
       )) {
      if ((TypeInfo_Effects_EffectPrefabs->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Effects_EffectPrefabs);
      }
      pCVar7 = (__this_00->fields).HumanCache;
      if ((pCVar7 == (Characters_HumanComponentCache_o *)0x0) ||
         (pCVar8 = (pCVar7->fields).BladeHitLeft, pCVar8 == (Characters_BaseHitbox_o *)0x0))
      goto label_05c0d783;
      pSVar18 = TypeInfo_Effects_EffectPrefabs->static_fields->Blood1;
      pUVar17 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)pCVar8,(MethodInfo *)0x0);
      if (pUVar17 == (UnityEngine_Transform_o *)0x0) goto label_05c0d783;
      UVar39 = UnityEngine_Transform__get_position(pUVar17,(MethodInfo *)0x0);
      auStack_128._0_4_ = 4.712389;
      auStack_128._4_4_ = 0.0;
      auStack_128._8_4_ = 0.0;
      UVar38 = UnityEngine_Quaternion__Internal_FromEulerRad
                         ((UnityEngine_Vector3_o *)auStack_128,(MethodInfo *)0x0);
      if ((TypeInfo_Effects_EffectSpawner->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Effects_EffectSpawner);
      }
      uVar26 = 0;
      Effects_EffectSpawner__Spawn
                (pSVar18,UVar39,UVar38,1.0,true,(System_Object_array *)0x0,(MethodInfo *)0x0);
      if ((TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
      }
      Characters_BaseCharacter__PlaySound
                ((Characters_BaseCharacter_o *)__this_00,
                 TypeInfo_Characters_HumanSounds->static_fields->BladeHit,(MethodInfo *)0x0);
      Characters_Human__SpecialActionState(__this_00,0.5,(MethodInfo *)0x0);
      pCVar22 = (__this_00->fields).Weapon;
      if (pCVar22 == (Characters_BaseUseable_o *)0x0) goto label_05c0d704;
    }
    bVar5 = (TypeInfo_Characters_AHSSWeapon->_2).typeHierarchyDepth;
    if ((bVar5 <= (pCVar22->klass->_2).typeHierarchyDepth) &&
       ((pCVar22->klass->_2).typeHierarchy[(ulong)bVar5 - 1] == (Il2CppClass *)TypeInfo_Characters_AHSSWeapon)
       ) {
      if ((TypeInfo_Effects_EffectPrefabs->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Effects_EffectPrefabs);
      }
      pUVar9 = (__this_00->fields).Cache;
      if ((pUVar9 == (Utility_BaseComponentCache_o *)0x0) ||
         (pUVar17 = (pUVar9->fields).Transform, pUVar17 == (UnityEngine_Transform_o *)0x0)) goto label_05c0d783;
      pSVar18 = TypeInfo_Effects_EffectPrefabs->static_fields->GunExplode;
      UVar39 = UnityEngine_Transform__get_position(pUVar17,(MethodInfo *)0x0);
      pUVar9 = (__this_00->fields).Cache;
      if ((pUVar9 == (Utility_BaseComponentCache_o *)0x0) ||
         (pUVar17 = (pUVar9->fields).Transform, pUVar17 == (UnityEngine_Transform_o *)0x0)) goto label_05c0d783;
      UVar40 = UnityEngine_Transform__get_up(pUVar17,(MethodInfo *)0x0);
      fStack_f0 = (float)extraout_XMM0_Dc;
      auStack_f8 = (undefined1  [8])UVar40.fields._0_8_;
      fStack_ec = (float)extraout_XMM0_Dd;
      auStack_108._0_4_ = UVar40.fields.z;
      UVar40 = (*(__this_00->klass->vtable)._76_GetAimPoint.methodPtr)
                         (__this_00,(__this_00->klass->vtable)._76_GetAimPoint.method);
      pUVar9 = (__this_00->fields).Cache;
      if ((pUVar9 == (Utility_BaseComponentCache_o *)0x0) ||
         (pUVar17 = (pUVar9->fields).Transform, pUVar17 == (UnityEngine_Transform_o *)0x0)) goto label_05c0d783;
      UVar41 = UnityEngine_Transform__get_position(pUVar17,(MethodInfo *)0x0);
      fVar24 = UVar41.fields.x;
      fVar28 = UVar41.fields.y;
      fVar32 = extraout_XMM0_Dc_01;
      fVar29 = extraout_XMM0_Dd_01;
      fVar33 = UVar41.fields.z;
      if (g_data_0753e72d == '\0') {
        auStack_d8._0_4_ = UVar41.fields.z;
        fStack_e0 = extraout_XMM0_Dc_01;
        auStack_e8 = (undefined1  [8])UVar41.fields._0_8_;
        fStack_dc = extraout_XMM0_Dd_01;
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
        g_data_0753e72d = '\x01';
        fVar24 = (float)auStack_e8._0_4_;
        fVar28 = (float)auStack_e8._4_4_;
        fVar32 = fStack_e0;
        fVar29 = fStack_dc;
        fVar33 = (float)auStack_d8._0_4_;
      }
      auStack_128._0_4_ = 0.0;
      auStack_128._4_4_ = 0.0;
      if (Il2CppMethodInitialized_0753e729 == '\0') {
        auStack_d8._0_4_ = fVar33;
        auStack_e8._4_4_ = fVar28;
        auStack_e8._0_4_ = fVar24;
        fStack_e0 = fVar32;
        fStack_dc = fVar29;
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
        Il2CppMethodInitialized_0753e729 = '\x01';
        fVar24 = (float)auStack_e8._0_4_;
        fVar28 = (float)auStack_e8._4_4_;
        fVar32 = fStack_e0;
        fVar29 = fStack_dc;
        fVar33 = (float)auStack_d8._0_4_;
      }
      auStack_148._0_4_ = UVar40.fields.x;
      auStack_148._4_4_ = UVar40.fields.y;
      auVar34._0_4_ = (float)auStack_148._0_4_ - fVar24;
      auVar34._4_4_ = (float)auStack_148._4_4_ - fVar28;
      auVar34._8_4_ = extraout_XMM0_Dc_00 - fVar32;
      auVar34._12_4_ = extraout_XMM0_Dd_00 - fVar29;
      fVar33 = UVar40.fields.z - fVar33;
      if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
      }
      uVar26 = 0;
      fVar24 = fVar33 * fVar33 + auVar34._4_4_ * auVar34._4_4_ + auVar34._0_4_ * auVar34._0_4_;
      if (fVar24 < 0.0) {
        fVar24 = sqrtf(fVar24);
        uVar26 = extraout_XMM0_Db;
      }
      else {
        fVar24 = SQRT(fVar24);
      }
      if (fVar24 <= 1e-05) {
        pUVar23 = TypeInfo_UnityEngine_Vector3->static_fields;
        auStack_128._8_4_ = (pUVar23->zeroVector).fields.z;
      }
      else {
        auStack_128._8_4_ = fVar33 / fVar24;
        auVar10._4_4_ = fVar24;
        auVar10._0_4_ = fVar24;
        auVar10._8_4_ = uVar26;
        auVar10._12_4_ = uVar26;
        auVar34 = divps(auVar34,auVar10);
        auStack_128._0_4_ = auVar34._0_4_;
        auStack_128._4_4_ = auVar34._4_4_;
        pUVar23 = (UnityEngine_Vector3_StaticFields *)auStack_128;
      }
      auStack_128._0_4_ = (pUVar23->zeroVector).fields.x;
      auStack_128._4_4_ = (pUVar23->zeroVector).fields.y;
      fVar24 = (float)auStack_108._0_4_ * 0.8;
      fVar28 = (float)auStack_f8._0_4_ * 0.8;
      fVar32 = (float)auStack_f8._4_4_ * 0.8;
      if (Il2CppMethodInitialized_0753e72c == '\0') {
        auStack_108._0_4_ = (float)auStack_108._0_4_ * 0.8;
        auStack_f8._4_4_ = (float)auStack_f8._4_4_ * 0.8;
        auStack_f8._0_4_ = (float)auStack_f8._0_4_ * 0.8;
        fStack_f0 = fStack_f0 * 0.0;
        fStack_ec = fStack_ec * 0.0;
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
        Il2CppMethodInitialized_0753e72c = '\x01';
        fVar24 = (float)auStack_108._0_4_;
        fVar28 = (float)auStack_f8._0_4_;
        fVar32 = (float)auStack_f8._4_4_;
      }
      uStack_158._0_4_ = UVar39.fields.x;
      uStack_158._4_4_ = UVar39.fields.y;
      UVar39.fields.z = UVar39.fields.z + fVar24;
      pUVar23 = TypeInfo_UnityEngine_Vector3->static_fields;
      auStack_128._16_4_ = (pUVar23->upVector).fields.x;
      auStack_128._20_4_ = (pUVar23->upVector).fields.y;
      fStack_110 = (pUVar23->upVector).fields.z;
      UVar38 = UnityEngine_Quaternion__Internal_LookRotation
                         ((UnityEngine_Vector3_o *)auStack_128,(UnityEngine_Vector3_o *)(auStack_128 + 0x10),
                          (MethodInfo *)0x0);
      if ((TypeInfo_Effects_EffectSpawner->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Effects_EffectSpawner);
      }
      UVar39.fields.x = (float)uStack_158 + fVar28;
      UVar39.fields.y = uStack_158._4_4_ + fVar32;
      Effects_EffectSpawner__Spawn
                (pSVar18,UVar39,UVar38,1.0,true,(System_Object_array *)0x0,(MethodInfo *)0x0);
      pCVar7 = (__this_00->fields).HumanCache;
      if ((pCVar7 == (Characters_HumanComponentCache_o *)0x0) ||
         (pCVar8 = (pCVar7->fields).BladeHitLeft, pCVar8 == (Characters_BaseHitbox_o *)0x0))
      goto label_05c0d783;
      pSVar18 = TypeInfo_Effects_EffectPrefabs->static_fields->Blood1;
      pUVar17 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)pCVar8,(MethodInfo *)0x0);
      if (pUVar17 == (UnityEngine_Transform_o *)0x0) goto label_05c0d783;
      UVar39 = UnityEngine_Transform__get_position(pUVar17,(MethodInfo *)0x0);
      auStack_128._0_4_ = 4.712389;
      auStack_128._4_4_ = 0.0;
      auStack_128._8_4_ = 0.0;
      UVar38 = UnityEngine_Quaternion__Internal_FromEulerRad
                         ((UnityEngine_Vector3_o *)auStack_128,(MethodInfo *)0x0);
      uVar26 = 0;
      Effects_EffectSpawner__Spawn
                (pSVar18,UVar39,UVar38,1.0,true,(System_Object_array *)0x0,(MethodInfo *)0x0);
      if ((TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
      }
      pSVar18 = Characters_HumanSounds__GetRandomAHSSGunShot((MethodInfo *)0x0);
      Characters_BaseCharacter__PlaySound((Characters_BaseCharacter_o *)__this_00,pSVar18,(MethodInfo *)0x0);
      Characters_Human__SpecialActionState(__this_00,0.5,(MethodInfo *)0x0);
      pCVar22 = (__this_00->fields).Weapon;
      if (pCVar22 == (Characters_BaseUseable_o *)0x0) goto label_05c0d704;
    }
    bVar5 = (TypeInfo_Characters_ThunderspearWeapon->_2).typeHierarchyDepth;
    if ((bVar5 <= (pCVar22->klass->_2).typeHierarchyDepth) &&
       ((pCVar22->klass->_2).typeHierarchy[(ulong)bVar5 - 1] ==
        (Il2CppClass *)TypeInfo_Characters_ThunderspearWeapon)) {
      if ((TypeInfo_Effects_EffectPrefabs->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Effects_EffectPrefabs);
      }
      pUVar9 = (__this_00->fields).Cache;
      if ((pUVar9 == (Utility_BaseComponentCache_o *)0x0) ||
         (pUVar17 = (pUVar9->fields).Transform, pUVar17 == (UnityEngine_Transform_o *)0x0)) goto label_05c0d783;
      pSVar18 = TypeInfo_Effects_EffectPrefabs->static_fields->ThunderspearExplode;
      UVar39 = UnityEngine_Transform__get_position(pUVar17,(MethodInfo *)0x0);
      pUVar9 = (__this_00->fields).Cache;
      if ((pUVar9 == (Utility_BaseComponentCache_o *)0x0) ||
         (pUVar17 = (pUVar9->fields).Transform, pUVar17 == (UnityEngine_Transform_o *)0x0)) goto label_05c0d783;
      UVar40 = UnityEngine_Transform__get_up(pUVar17,(MethodInfo *)0x0);
      fStack_f0 = (float)extraout_XMM0_Dc_02;
      auStack_f8 = (undefined1  [8])UVar40.fields._0_8_;
      fStack_ec = (float)extraout_XMM0_Dd_02;
      auStack_108._0_4_ = UVar40.fields.z;
      UVar40 = (*(__this_00->klass->vtable)._76_GetAimPoint.methodPtr)
                         (__this_00,(__this_00->klass->vtable)._76_GetAimPoint.method);
      pUVar9 = (__this_00->fields).Cache;
      if ((pUVar9 == (Utility_BaseComponentCache_o *)0x0) ||
         (pUVar17 = (pUVar9->fields).Transform, pUVar17 == (UnityEngine_Transform_o *)0x0)) goto label_05c0d783;
      UVar41 = UnityEngine_Transform__get_position(pUVar17,(MethodInfo *)0x0);
      fVar24 = UVar41.fields.x;
      fVar28 = UVar41.fields.y;
      fVar32 = extraout_XMM0_Dc_04;
      fVar29 = extraout_XMM0_Dd_04;
      fVar33 = UVar41.fields.z;
      if (g_data_0753e72d == '\0') {
        auStack_d8._0_4_ = UVar41.fields.z;
        fStack_e0 = extraout_XMM0_Dc_04;
        auStack_e8 = (undefined1  [8])UVar41.fields._0_8_;
        fStack_dc = extraout_XMM0_Dd_04;
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
        g_data_0753e72d = '\x01';
        fVar24 = (float)auStack_e8._0_4_;
        fVar28 = (float)auStack_e8._4_4_;
        fVar32 = fStack_e0;
        fVar29 = fStack_dc;
        fVar33 = (float)auStack_d8._0_4_;
      }
      auStack_128._0_4_ = 0.0;
      auStack_128._4_4_ = 0.0;
      if (Il2CppMethodInitialized_0753e729 == '\0') {
        auStack_d8._0_4_ = fVar33;
        auStack_e8._4_4_ = fVar28;
        auStack_e8._0_4_ = fVar24;
        fStack_e0 = fVar32;
        fStack_dc = fVar29;
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
        Il2CppMethodInitialized_0753e729 = '\x01';
        fVar24 = (float)auStack_e8._0_4_;
        fVar28 = (float)auStack_e8._4_4_;
        fVar32 = fStack_e0;
        fVar29 = fStack_dc;
        fVar33 = (float)auStack_d8._0_4_;
      }
      auStack_148._0_4_ = UVar40.fields.x;
      auStack_148._4_4_ = UVar40.fields.y;
      auVar30._0_4_ = (float)auStack_148._0_4_ - fVar24;
      auVar30._4_4_ = (float)auStack_148._4_4_ - fVar28;
      auVar30._8_4_ = extraout_XMM0_Dc_03 - fVar32;
      auVar30._12_4_ = extraout_XMM0_Dd_03 - fVar29;
      fVar33 = UVar40.fields.z - fVar33;
      if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
      }
      uVar26 = 0;
      fVar24 = fVar33 * fVar33 + auVar30._4_4_ * auVar30._4_4_ + auVar30._0_4_ * auVar30._0_4_;
      if (fVar24 < 0.0) {
        fVar24 = sqrtf(fVar24);
        uVar26 = extraout_XMM0_Db_00;
      }
      else {
        fVar24 = SQRT(fVar24);
      }
      if (fVar24 <= 1e-05) {
        pUVar23 = TypeInfo_UnityEngine_Vector3->static_fields;
        auStack_128._8_4_ = (pUVar23->zeroVector).fields.z;
      }
      else {
        auStack_128._8_4_ = fVar33 / fVar24;
        auVar11._4_4_ = fVar24;
        auVar11._0_4_ = fVar24;
        auVar11._8_4_ = uVar26;
        auVar11._12_4_ = uVar26;
        auVar34 = divps(auVar30,auVar11);
        auStack_128._0_4_ = auVar34._0_4_;
        auStack_128._4_4_ = auVar34._4_4_;
        pUVar23 = (UnityEngine_Vector3_StaticFields *)auStack_128;
      }
      auStack_128._0_4_ = (pUVar23->zeroVector).fields.x;
      auStack_128._4_4_ = (pUVar23->zeroVector).fields.y;
      if (Il2CppMethodInitialized_0753e72c == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
        Il2CppMethodInitialized_0753e72c = '\x01';
      }
      pUVar23 = TypeInfo_UnityEngine_Vector3->static_fields;
      auStack_128._16_4_ = (pUVar23->upVector).fields.x;
      auStack_128._20_4_ = (pUVar23->upVector).fields.y;
      fStack_110 = (pUVar23->upVector).fields.z;
      pUVar23 = (UnityEngine_Vector3_StaticFields *)(auStack_128 + 0x10);
      UVar38 = UnityEngine_Quaternion__Internal_LookRotation
                         ((UnityEngine_Vector3_o *)auStack_128,(UnityEngine_Vector3_o *)pUVar23,
                          (MethodInfo *)0x0);
      pSVar19 = (System_Object_array *)SZArrayNew(TypeInfo_object_array,3);
      auStack_128._0_4_ = 0.0;
      auStack_128._4_4_ = 0.0;
      auStack_128._8_4_ = 0.0;
      auStack_128._12_4_ = 1.0;
      pIVar20 = il2cpp_vm_Object_Box((Il2CppClass *)TypeInfo_UnityEngine_Color,auStack_128);
      if (pSVar19 == (System_Object_array *)0x0) goto label_05c0d783;
      if ((pIVar20 != (Il2CppObject *)0x0) &&
         (pIVar21 = il2cpp_vm_Object_IsInst(pIVar20,(((pSVar19->obj).klass)->_1).element_class),
         pIVar21 == (Il2CppObject *)0x0)) goto label_05c0d78d;
      if ((int)pSVar19->max_length == 0) goto label_05c0d788;
      pSVar19->m_Items[0] = pIVar20;
      Il2CppCodeGenWriteBarrier(pSVar19->m_Items);
      fStack_bc = 1.4013e-45;
      pIVar20 = il2cpp_vm_Object_Box(g_data_07556710,&fStack_bc);
      if ((pIVar20 != (Il2CppObject *)0x0) &&
         (pIVar21 = il2cpp_vm_Object_IsInst(pIVar20,(((pSVar19->obj).klass)->_1).element_class),
         pIVar21 == (Il2CppObject *)0x0)) goto label_05c0d78d;
      if ((pSVar19->max_length & 0xfffffffe) == 0) goto label_05c0d788;
      pSVar19->m_Items[1] = pIVar20;
      Il2CppCodeGenWriteBarrier(pSVar19->m_Items + 1);
      fStack_c0 = (float)CONCAT31(fStack_c0._1_3_,1);
      pIVar20 = il2cpp_vm_Object_Box(g_data_075566f0,&fStack_c0);
      if ((pIVar20 != (Il2CppObject *)0x0) &&
         (pIVar21 = il2cpp_vm_Object_IsInst(pIVar20,(((pSVar19->obj).klass)->_1).element_class),
         pIVar21 == (Il2CppObject *)0x0)) goto label_05c0d78d;
      if ((uint)pSVar19->max_length < 3) goto label_05c0d788;
      fVar24 = (float)auStack_f8._0_4_ * 0.8;
      fVar28 = (float)auStack_f8._4_4_ * 0.8;
      uStack_138._0_4_ = UVar39.fields.x;
      uStack_138._4_4_ = UVar39.fields.y;
      UVar40.fields.z = UVar39.fields.z + (float)auStack_108._0_4_ * 0.8;
      pSVar19->m_Items[2] = pIVar20;
      Il2CppCodeGenWriteBarrier(pSVar19->m_Items + 2);
      if ((TypeInfo_Effects_EffectSpawner->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Effects_EffectSpawner);
      }
      UVar40.fields.x = (float)uStack_138 + fVar24;
      UVar40.fields.y = uStack_138._4_4_ + fVar28;
      Effects_EffectSpawner__Spawn(pSVar18,UVar40,UVar38,4.0,true,pSVar19,(MethodInfo *)0x0);
      pUVar9 = (__this_00->fields).Cache;
      if ((pUVar9 == (Utility_BaseComponentCache_o *)0x0) ||
         (pUVar17 = (pUVar9->fields).Transform, pUVar17 == (UnityEngine_Transform_o *)0x0)) goto label_05c0d783;
      pSVar18 = TypeInfo_Effects_EffectPrefabs->static_fields->Boom2;
      UVar39 = UnityEngine_Transform__get_position(pUVar17,(MethodInfo *)0x0);
      pUVar9 = (__this_00->fields).Cache;
      if ((pUVar9 == (Utility_BaseComponentCache_o *)0x0) ||
         (pUVar17 = (pUVar9->fields).Transform, pUVar17 == (UnityEngine_Transform_o *)0x0)) goto label_05c0d783;
      UVar40 = UnityEngine_Transform__get_up(pUVar17,(MethodInfo *)0x0);
      fStack_f0 = (float)extraout_XMM0_Dc_05;
      auStack_f8 = (undefined1  [8])UVar40.fields._0_8_;
      fStack_ec = (float)extraout_XMM0_Dd_05;
      auStack_108._0_4_ = UVar40.fields.z;
      UVar40 = (*(__this_00->klass->vtable)._76_GetAimPoint.methodPtr)
                         (__this_00,(__this_00->klass->vtable)._76_GetAimPoint.method);
      pUVar9 = (__this_00->fields).Cache;
      if ((pUVar9 == (Utility_BaseComponentCache_o *)0x0) ||
         (pUVar17 = (pUVar9->fields).Transform, pUVar17 == (UnityEngine_Transform_o *)0x0)) goto label_05c0d783;
      UVar41 = UnityEngine_Transform__get_position(pUVar17,(MethodInfo *)0x0);
      fVar24 = UVar41.fields.x;
      fVar28 = UVar41.fields.y;
      fVar32 = extraout_XMM0_Dc_07;
      fVar29 = extraout_XMM0_Dd_07;
      fVar33 = UVar41.fields.z;
      if (g_data_0753e72d == '\0') {
        auStack_d8._0_4_ = UVar41.fields.z;
        fStack_e0 = extraout_XMM0_Dc_07;
        auStack_e8 = (undefined1  [8])UVar41.fields._0_8_;
        fStack_dc = extraout_XMM0_Dd_07;
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
        g_data_0753e72d = '\x01';
        fVar24 = (float)auStack_e8._0_4_;
        fVar28 = (float)auStack_e8._4_4_;
        fVar32 = fStack_e0;
        fVar29 = fStack_dc;
        fVar33 = (float)auStack_d8._0_4_;
      }
      auStack_128._16_4_ = 0.0;
      auStack_128._20_4_ = 0.0;
      if (Il2CppMethodInitialized_0753e729 == '\0') {
        auStack_d8._0_4_ = fVar33;
        auStack_e8._4_4_ = fVar28;
        auStack_e8._0_4_ = fVar24;
        fStack_e0 = fVar32;
        fStack_dc = fVar29;
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
        Il2CppMethodInitialized_0753e729 = '\x01';
        fVar24 = (float)auStack_e8._0_4_;
        fVar28 = (float)auStack_e8._4_4_;
        fVar32 = fStack_e0;
        fVar29 = fStack_dc;
        fVar33 = (float)auStack_d8._0_4_;
      }
      auStack_148._0_4_ = UVar40.fields.x;
      auStack_148._4_4_ = UVar40.fields.y;
      auVar35._0_4_ = (float)auStack_148._0_4_ - fVar24;
      auVar35._4_4_ = (float)auStack_148._4_4_ - fVar28;
      auVar35._8_4_ = extraout_XMM0_Dc_06 - fVar32;
      auVar35._12_4_ = extraout_XMM0_Dd_06 - fVar29;
      fVar33 = UVar40.fields.z - fVar33;
      if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
      }
      uVar26 = 0;
      fVar24 = fVar33 * fVar33 + auVar35._4_4_ * auVar35._4_4_ + auVar35._0_4_ * auVar35._0_4_;
      if (fVar24 < 0.0) {
        fVar24 = sqrtf(fVar24);
        uVar26 = extraout_XMM0_Db_01;
      }
      else {
        fVar24 = SQRT(fVar24);
      }
      fVar28 = (float)auStack_f8._0_4_ * 0.8;
      fVar32 = (float)auStack_f8._4_4_ * 0.8;
      if (fVar24 <= 1e-05) {
        pUVar23 = TypeInfo_UnityEngine_Vector3->static_fields;
        fStack_110 = (pUVar23->zeroVector).fields.z;
      }
      else {
        fStack_110 = fVar33 / fVar24;
        auVar12._4_4_ = fVar24;
        auVar12._0_4_ = fVar24;
        auVar12._8_4_ = uVar26;
        auVar12._12_4_ = uVar26;
        auVar34 = divps(auVar35,auVar12);
        auStack_128._16_4_ = auVar34._0_4_;
        auStack_128._20_4_ = auVar34._4_4_;
      }
      uStack_138._0_4_ = UVar39.fields.x;
      uStack_138._4_4_ = UVar39.fields.y;
      UVar41.fields.z = UVar39.fields.z + (float)auStack_108._0_4_ * 0.8;
      auStack_128._16_4_ = (pUVar23->zeroVector).fields.x;
      auStack_128._20_4_ = (pUVar23->zeroVector).fields.y;
      if (Il2CppMethodInitialized_0753e72c == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
        Il2CppMethodInitialized_0753e72c = '\x01';
      }
      pUVar23 = TypeInfo_UnityEngine_Vector3->static_fields;
      UStack_80.x = (pUVar23->upVector).fields.x;
      UStack_80.y = (pUVar23->upVector).fields.y;
      UStack_80.z = (pUVar23->upVector).fields.z;
      UVar38 = UnityEngine_Quaternion__Internal_LookRotation
                         ((UnityEngine_Vector3_o *)(auStack_128 + 0x10),(UnityEngine_Vector3_o *)&UStack_80,
                          (MethodInfo *)0x0);
      UVar41.fields.x = (float)uStack_138 + fVar28;
      UVar41.fields.y = uStack_138._4_4_ + fVar32;
      Effects_EffectSpawner__Spawn
                (pSVar18,UVar41,UVar38,4.0,true,(System_Object_array *)0x0,(MethodInfo *)0x0);
      pCVar7 = (__this_00->fields).HumanCache;
      if ((pCVar7 == (Characters_HumanComponentCache_o *)0x0) ||
         (pCVar8 = (pCVar7->fields).BladeHitLeft, pCVar8 == (Characters_BaseHitbox_o *)0x0))
      goto label_05c0d783;
      pSVar18 = TypeInfo_Effects_EffectPrefabs->static_fields->Blood1;
      pUVar17 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)pCVar8,(MethodInfo *)0x0);
      if (pUVar17 == (UnityEngine_Transform_o *)0x0) goto label_05c0d783;
      UVar39 = UnityEngine_Transform__get_position(pUVar17,(MethodInfo *)0x0);
      auStack_128._16_4_ = 4.712389;
      auStack_128._20_4_ = 0.0;
      fStack_110 = 0.0;
      UVar38 = UnityEngine_Quaternion__Internal_FromEulerRad
                         ((UnityEngine_Vector3_o *)(auStack_128 + 0x10),(MethodInfo *)0x0);
      uVar26 = 0;
      Effects_EffectSpawner__Spawn
                (pSVar18,UVar39,UVar38,1.0,true,(System_Object_array *)0x0,(MethodInfo *)0x0);
      if ((TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
      }
      pSVar18 = Characters_HumanSounds__GetRandomTSLaunch((MethodInfo *)0x0);
      Characters_BaseCharacter__PlaySound((Characters_BaseCharacter_o *)__this_00,pSVar18,(MethodInfo *)0x0);
      Characters_Human__SpecialActionState(__this_00,0.5,(MethodInfo *)0x0);
      pCVar22 = (__this_00->fields).Weapon;
      if (pCVar22 == (Characters_BaseUseable_o *)0x0) goto label_05c0d704;
    }
    bVar5 = (TypeInfo_Characters_APGWeapon->_2).typeHierarchyDepth;
    if ((bVar5 <= (pCVar22->klass->_2).typeHierarchyDepth) &&
       ((pCVar22->klass->_2).typeHierarchy[(ulong)bVar5 - 1] == (Il2CppClass *)TypeInfo_Characters_APGWeapon))
    {
      UVar39 = (*(__this_00->klass->vtable)._76_GetAimPoint.methodPtr)
                         (__this_00,(__this_00->klass->vtable)._76_GetAimPoint.method);
      pUVar9 = (__this_00->fields).Cache;
      if ((pUVar9 == (Utility_BaseComponentCache_o *)0x0) ||
         (pUVar17 = (pUVar9->fields).Transform, pUVar17 == (UnityEngine_Transform_o *)0x0)) goto label_05c0d783;
      UVar40 = UnityEngine_Transform__get_position(pUVar17,(MethodInfo *)0x0);
      auVar31._0_8_ = UVar40.fields._0_8_;
      auVar31._8_4_ = extraout_XMM0_Dc_09;
      auVar31._12_4_ = extraout_XMM0_Dd_09;
      if (g_data_0753e72d == '\0') {
        auStack_108 = auVar31;
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
        g_data_0753e72d = '\x01';
        auVar31 = auStack_108;
      }
      auStack_148._0_4_ = UVar39.fields.x;
      auStack_148._4_4_ = UVar39.fields.y;
      fVar24 = auVar31._4_4_;
      if (Il2CppMethodInitialized_0753e729 == '\0') {
        auStack_108 = auVar31;
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
        Il2CppMethodInitialized_0753e729 = '\x01';
        fVar24 = (float)auStack_108._4_4_;
      }
      fVar28 = UVar39.fields.z - UVar40.fields.z;
      fVar32 = (float)auStack_148._0_4_ - auVar31._0_4_;
      if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
      }
      fVar24 = ((float)auStack_148._4_4_ - fVar24) * ((float)auStack_148._4_4_ - fVar24) + fVar32 * fVar32 +
               fVar28 * fVar28;
      if (fVar24 < 0.0) {
        sqrtf(fVar24);
      }
      pUVar9 = (__this_00->fields).Cache;
      if ((pUVar9 == (Utility_BaseComponentCache_o *)0x0) ||
         (pUVar17 = (pUVar9->fields).Transform, pUVar17 == (UnityEngine_Transform_o *)0x0)) goto label_05c0d783;
      UVar40 = UnityEngine_Transform__get_position(pUVar17,(MethodInfo *)0x0);
      pUVar9 = (__this_00->fields).Cache;
      if ((pUVar9 == (Utility_BaseComponentCache_o *)0x0) ||
         (pUVar17 = (pUVar9->fields).Transform, pUVar17 == (UnityEngine_Transform_o *)0x0)) goto label_05c0d783;
      UVar41 = UnityEngine_Transform__get_up(pUVar17,(MethodInfo *)0x0);
      fVar33 = UVar41.fields.z * 0.8;
      fVar24 = UVar41.fields.x * 0.8;
      fVar28 = UVar41.fields.y * 0.8;
      fVar32 = extraout_XMM0_Dc_11 * 0.0;
      fVar29 = extraout_XMM0_Dd_11 * 0.0;
      if (g_data_0753e72d == '\0') {
        auStack_108._0_4_ = fVar33;
        auStack_f8._4_4_ = fVar28;
        auStack_f8._0_4_ = fVar24;
        fStack_f0 = extraout_XMM0_Dc_11 * 0.0;
        fStack_ec = extraout_XMM0_Dd_11 * 0.0;
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
        g_data_0753e72d = '\x01';
        fVar24 = (float)auStack_f8._0_4_;
        fVar28 = (float)auStack_f8._4_4_;
        fVar32 = fStack_f0;
        fVar29 = fStack_ec;
        fVar33 = (float)auStack_108._0_4_;
      }
      uStack_158._0_4_ = UVar40.fields.x;
      uStack_158._4_4_ = UVar40.fields.y;
      uStack_158._0_4_ = (float)uStack_158 + fVar24;
      uStack_158._4_4_ = uStack_158._4_4_ + fVar28;
      fVar33 = UVar40.fields.z + fVar33;
      auStack_128._0_4_ = 0.0;
      auStack_128._4_4_ = 0.0;
      if (Il2CppMethodInitialized_0753e729 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
        Il2CppMethodInitialized_0753e729 = '\x01';
      }
      auStack_148._0_4_ = (float)auStack_148._0_4_ - (float)uStack_158;
      auStack_148._4_4_ = (float)auStack_148._4_4_ - uStack_158._4_4_;
      fVar24 = UVar39.fields.z - fVar33;
      fStack_140 = extraout_XMM0_Dc_08 - (extraout_XMM0_Dc_10 + fVar32);
      fStack_13c = extraout_XMM0_Dd_08 - (extraout_XMM0_Dd_10 + fVar29);
      if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
      }
      fVar28 = fVar24 * fVar24 +
               (float)auStack_148._4_4_ * (float)auStack_148._4_4_ +
               (float)auStack_148._0_4_ * (float)auStack_148._0_4_;
      if (fVar28 < 0.0) {
        fVar28 = sqrtf(fVar28);
        uVar26 = extraout_XMM0_Db_02;
      }
      else {
        fVar28 = SQRT(fVar28);
      }
      if (fVar28 <= 1e-05) {
        pUVar23 = TypeInfo_UnityEngine_Vector3->static_fields;
        fVar24 = (pUVar23->zeroVector).fields.z;
      }
      else {
        fVar24 = fVar24 / fVar28;
        auVar13._4_4_ = fVar28;
        auVar13._0_4_ = fVar28;
        auVar13._8_4_ = uVar26;
        auVar13._12_4_ = uVar26;
        auVar34 = divps(_auStack_148,auVar13);
        auStack_128._0_4_ = auVar34._0_4_;
        auStack_128._4_4_ = auVar34._4_4_;
        pUVar23 = (UnityEngine_Vector3_StaticFields *)auStack_128;
      }
      pCVar7 = (__this_00->fields).HumanCache;
      if (((pCVar7 == (Characters_HumanComponentCache_o *)0x0) ||
          (pCVar8 = (pCVar7->fields).APGHit, pCVar8 == (Characters_BaseHitbox_o *)0x0)) ||
         (__this_01 = (UnityEngine_CapsuleCollider_o *)(pCVar8->fields)._collider,
         __this_01 == (UnityEngine_CapsuleCollider_o *)0x0)) goto label_05c0d783;
      bVar5 = (TypeInfo_UnityEngine_CapsuleCollider->_2).typeHierarchyDepth;
      if (((__this_01->klass->_2).typeHierarchyDepth < bVar5) ||
         ((__this_01->klass->_2).typeHierarchy[(ulong)bVar5 - 1] !=
          (Il2CppClass *)TypeInfo_UnityEngine_CapsuleCollider)) {
        il2cpp_codegen_raise_invalid_cast_exception(__this_01);
      }
      uVar1 = (pUVar23->zeroVector).fields.x;
      uVar3 = (pUVar23->zeroVector).fields.y;
      UnityEngine_CapsuleCollider__set_radius(__this_01,0.1,(MethodInfo *)0x0);
      auStack_f8._0_4_ = UnityEngine_CapsuleCollider__get_height(__this_01,(MethodInfo *)0x0);
      auStack_f8._4_4_ = extraout_XMM0_Db_03;
      fStack_f0 = extraout_XMM0_Dc_12;
      fStack_ec = (float)extraout_XMM0_Dd_12;
      fVar28 = UnityEngine_CapsuleCollider__get_radius(__this_01,(MethodInfo *)0x0);
      auStack_108._0_4_ = fVar28;
      fStack_68 = UnityEngine_CapsuleCollider__get_height(__this_01,(MethodInfo *)0x0);
      if ((TypeInfo_Effects_EffectPrefabs->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Effects_EffectPrefabs);
      }
      pUVar9 = (__this_00->fields).Cache;
      if ((pUVar9 == (Utility_BaseComponentCache_o *)0x0) ||
         (pUVar17 = (pUVar9->fields).Transform, pUVar17 == (UnityEngine_Transform_o *)0x0)) goto label_05c0d783;
      pSVar18 = TypeInfo_Effects_EffectPrefabs->static_fields->APGTrail;
      UVar39 = UnityEngine_Transform__get_position(pUVar17,(MethodInfo *)0x0);
      pUVar9 = (__this_00->fields).Cache;
      if (pUVar9 == (Utility_BaseComponentCache_o *)0x0) goto label_05c0d783;
      auStack_e8._0_4_ = UVar39.fields.z;
      fStack_d0 = (float)extraout_XMM0_Dc_13;
      auStack_d8 = (undefined1  [8])UVar39.fields._0_8_;
      fStack_cc = (float)extraout_XMM0_Dd_13;
      pUVar17 = (pUVar9->fields).Transform;
      if (pUVar17 == (UnityEngine_Transform_o *)0x0) goto label_05c0d783;
      UVar39 = UnityEngine_Transform__get_up(pUVar17,(MethodInfo *)0x0);
      fStack_70 = UVar39.fields.z;
      fStack_40 = (float)extraout_XMM0_Dc_14;
      auStack_48 = UVar39.fields._0_8_;
      fStack_3c = (float)extraout_XMM0_Dd_14;
      UVar39 = (*(__this_00->klass->vtable)._76_GetAimPoint.methodPtr)
                         (__this_00,(__this_00->klass->vtable)._76_GetAimPoint.method);
      pUVar9 = (__this_00->fields).Cache;
      if (pUVar9 == (Utility_BaseComponentCache_o *)0x0) goto label_05c0d783;
      uStack_a0._0_4_ = (float)extraout_XMM0_Dc_15;
      auStack_a8 = (undefined1  [8])UVar39.fields._0_8_;
      uStack_a0._4_4_ = (float)extraout_XMM0_Dd_15;
      auStack_98._0_4_ = UVar39.fields.z;
      pUVar17 = (pUVar9->fields).Transform;
      if (pUVar17 == (UnityEngine_Transform_o *)0x0) goto label_05c0d783;
      UVar39 = UnityEngine_Transform__get_position(pUVar17,(MethodInfo *)0x0);
      fVar28 = UVar39.fields.x;
      fVar32 = UVar39.fields.y;
      fVar29 = extraout_XMM0_Dc_16;
      fVar27 = extraout_XMM0_Dd_16;
      fVar25 = UVar39.fields.z;
      if (g_data_0753e72d == '\0') {
        fStack_50 = extraout_XMM0_Dc_16;
        auStack_58 = (undefined1  [8])UVar39.fields._0_8_;
        fStack_4c = extraout_XMM0_Dd_16;
        fStack_b8 = UVar39.fields.z;
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
        g_data_0753e72d = '\x01';
        fVar28 = (float)auStack_58._0_4_;
        fVar32 = (float)auStack_58._4_4_;
        fVar29 = fStack_50;
        fVar27 = fStack_4c;
        fVar25 = fStack_b8;
      }
      auStack_128._0_4_ = 0.0;
      auStack_128._4_4_ = 0.0;
      if (Il2CppMethodInitialized_0753e729 == '\0') {
        auStack_58._4_4_ = fVar32;
        auStack_58._0_4_ = fVar28;
        fStack_50 = fVar29;
        fStack_4c = fVar27;
        fStack_b8 = fVar25;
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
        Il2CppMethodInitialized_0753e729 = '\x01';
        fVar28 = (float)auStack_58._0_4_;
        fVar32 = (float)auStack_58._4_4_;
        fVar29 = fStack_50;
        fVar27 = fStack_4c;
        fVar25 = fStack_b8;
      }
      auVar36._0_4_ = (float)auStack_a8._0_4_ - fVar28;
      auVar36._4_4_ = (float)auStack_a8._4_4_ - fVar32;
      auVar36._8_4_ = (float)uStack_a0 - fVar29;
      auVar36._12_4_ = uStack_a0._4_4_ - fVar27;
      fVar32 = fStack_68;
      fVar29 = fStack_68;
      fVar27 = fStack_68;
      fVar37 = fStack_68;
      fVar28 = (float)auStack_98._0_4_ - fVar25;
      if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
        auStack_98._0_4_ = (float)auStack_98._0_4_ - fVar25;
        fStack_b8 = fStack_68;
        fStack_b4 = fStack_68;
        fStack_b0 = fStack_68;
        fStack_ac = fStack_68;
        _auStack_a8 = auVar36;
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
        auVar36 = _auStack_a8;
        fVar32 = fStack_b8;
        fVar29 = fStack_b4;
        fVar27 = fStack_b0;
        fVar37 = fStack_ac;
        fVar28 = (float)auStack_98._0_4_;
      }
      uVar26 = 0;
      fVar25 = fVar28 * fVar28 + auVar36._4_4_ * auVar36._4_4_ + auVar36._0_4_ * auVar36._0_4_;
      if (fVar25 < 0.0) {
        auStack_98._0_4_ = fVar28;
        fStack_b8 = fVar32 * (float)uVar1;
        fStack_b4 = fVar29 * (float)uVar3;
        fStack_b0 = fVar27 * 0.0;
        fStack_ac = fVar37 * 0.0;
        _auStack_a8 = auVar36;
        fStack_68 = fStack_68 * fVar24;
        fVar25 = sqrtf(fVar25);
        uVar26 = extraout_XMM0_Db_04;
        fVar27 = fStack_68;
        auVar36 = _auStack_a8;
        fVar32 = fStack_b8;
        fVar29 = fStack_b4;
        fVar28 = (float)auStack_98._0_4_;
      }
      else {
        fVar25 = SQRT(fVar25);
        fVar27 = fStack_68 * fVar24;
        fVar32 = fVar32 * (float)uVar1;
        fVar29 = fVar29 * (float)uVar3;
      }
      if (fVar25 <= 1e-05) {
        pUVar23 = TypeInfo_UnityEngine_Vector3->static_fields;
        auStack_128._8_4_ = (pUVar23->zeroVector).fields.z;
      }
      else {
        auStack_128._8_4_ = fVar28 / fVar25;
        auVar14._4_4_ = fVar25;
        auVar14._0_4_ = fVar25;
        auVar14._8_4_ = uVar26;
        auVar14._12_4_ = uVar26;
        auVar34 = divps(auVar36,auVar14);
        auStack_128._0_4_ = auVar34._0_4_;
        auStack_128._4_4_ = auVar34._4_4_;
        pUVar23 = (UnityEngine_Vector3_StaticFields *)auStack_128;
      }
      auStack_f8._0_4_ = (float)auStack_f8._0_4_ * 1.2;
      fVar28 = ((float)uStack_158 + (float)uStack_158 + fVar32) * 0.5;
      fVar32 = (uStack_158._4_4_ + uStack_158._4_4_ + fVar29) * 0.5;
      fVar29 = (fVar33 + fVar33 + fVar27) * 0.5;
      auStack_128._0_4_ = (pUVar23->zeroVector).fields.x;
      auStack_128._4_4_ = (pUVar23->zeroVector).fields.y;
      if (Il2CppMethodInitialized_0753e72c == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
        Il2CppMethodInitialized_0753e72c = '\x01';
      }
      pUVar23 = TypeInfo_UnityEngine_Vector3->static_fields;
      auStack_128._16_4_ = (pUVar23->upVector).fields.x;
      auStack_128._20_4_ = (pUVar23->upVector).fields.y;
      fStack_110 = (pUVar23->upVector).fields.z;
      auVar34 = ZEXT416((uint)fStack_110);
      UVar38 = UnityEngine_Quaternion__Internal_LookRotation
                         ((UnityEngine_Vector3_o *)auStack_128,(UnityEngine_Vector3_o *)(auStack_128 + 0x10),
                          (MethodInfo *)0x0);
      auStack_98._8_4_ = extraout_XMM0_Dc_17;
      auStack_98._0_8_ = UVar38.fields._0_8_;
      auStack_98._12_4_ = extraout_XMM0_Dd_17;
      uStack_a0 = auVar34._8_8_;
      auStack_a8 = (undefined1  [8])UVar38.fields._8_8_;
      pSVar19 = (System_Object_array *)SZArrayNew(TypeInfo_object_array,5);
      fVar33 = (float)uVar1 * (float)auStack_f8._0_4_ * 0.5;
      fVar27 = (float)uVar3 * (float)auStack_f8._0_4_ * 0.5;
      fVar24 = fVar24 * (float)auStack_f8._0_4_ * 0.5;
      fStack_110 = fVar24 + fVar29;
      auStack_128._20_4_ = fVar27 + fVar32;
      auStack_128._16_4_ = fVar33 + fVar28;
      pIVar20 = il2cpp_vm_Object_Box((Il2CppClass *)TypeInfo_UnityEngine_Vector3,auStack_128 + 0x10);
      if (pSVar19 == (System_Object_array *)0x0) goto label_05c0d783;
      if ((pIVar20 != (Il2CppObject *)0x0) &&
         (pIVar21 = il2cpp_vm_Object_IsInst(pIVar20,(((pSVar19->obj).klass)->_1).element_class),
         pIVar21 == (Il2CppObject *)0x0)) {
label_05c0d78d:
        pIVar20 = il2cpp_codegen_get_array_type_mismatch_exception();
        il2cpp_codegen_raise_exception(pIVar20,(MethodInfo *)0x0);
      }
      if ((int)pSVar19->max_length == 0) {
label_05c0d788:
        ThrowIndexOutOfRangeException();
      }
      pSVar19->m_Items[0] = pIVar20;
      Il2CppCodeGenWriteBarrier(pSVar19->m_Items);
      UStack_80.z = fVar29 - fVar24;
      UStack_80.y = fVar32 - fVar27;
      UStack_80.x = fVar28 - fVar33;
      pIVar20 = il2cpp_vm_Object_Box((Il2CppClass *)TypeInfo_UnityEngine_Vector3,&UStack_80);
      if ((pIVar20 != (Il2CppObject *)0x0) &&
         (pIVar21 = il2cpp_vm_Object_IsInst(pIVar20,(((pSVar19->obj).klass)->_1).element_class),
         pIVar21 == (Il2CppObject *)0x0)) goto label_05c0d78d;
      if ((pSVar19->max_length & 0xfffffffe) == 0) goto label_05c0d788;
      auStack_108._0_4_ = (float)auStack_108._0_4_ * 4.0;
      pSVar19->m_Items[1] = pIVar20;
      Il2CppCodeGenWriteBarrier(pSVar19->m_Items + 1);
      fStack_bc = (float)auStack_108._0_4_;
      pIVar20 = il2cpp_vm_Object_Box(g_data_07556740,&fStack_bc);
      if ((pIVar20 != (Il2CppObject *)0x0) &&
         (pIVar21 = il2cpp_vm_Object_IsInst(pIVar20,(((pSVar19->obj).klass)->_1).element_class),
         pIVar21 == (Il2CppObject *)0x0)) goto label_05c0d78d;
      if ((uint)pSVar19->max_length < 3) goto label_05c0d788;
      pSVar19->m_Items[2] = pIVar20;
      Il2CppCodeGenWriteBarrier(pSVar19->m_Items + 2);
      fStack_c0 = (float)auStack_108._0_4_;
      pIVar20 = il2cpp_vm_Object_Box(g_data_07556740,&fStack_c0);
      if ((pIVar20 != (Il2CppObject *)0x0) &&
         (pIVar21 = il2cpp_vm_Object_IsInst(pIVar20,(((pSVar19->obj).klass)->_1).element_class),
         pIVar21 == (Il2CppObject *)0x0)) goto label_05c0d78d;
      if ((pSVar19->max_length & 0xfffffffc) == 0) goto label_05c0d788;
      pSVar19->m_Items[3] = pIVar20;
      Il2CppCodeGenWriteBarrier(pSVar19->m_Items + 3);
      uStack_6c = 0x3e800000;
      pIVar20 = il2cpp_vm_Object_Box(g_data_07556740,&uStack_6c);
      if ((pIVar20 != (Il2CppObject *)0x0) &&
         (pIVar21 = il2cpp_vm_Object_IsInst(pIVar20,(((pSVar19->obj).klass)->_1).element_class),
         pIVar21 == (Il2CppObject *)0x0)) goto label_05c0d78d;
      if ((uint)pSVar19->max_length < 5) goto label_05c0d788;
      auStack_d8._4_4_ = (float)auStack_d8._4_4_ + (float)auStack_48._4_4_ * 0.8;
      auStack_d8._0_4_ = (float)auStack_d8._0_4_ + (float)auStack_48._0_4_ * 0.8;
      fStack_d0 = fStack_d0 + fStack_40 * 0.0;
      fStack_cc = fStack_cc + fStack_3c * 0.0;
      auStack_e8._0_4_ = (float)auStack_e8._0_4_ + fStack_70 * 0.8;
      pSVar19->m_Items[4] = pIVar20;
      Il2CppCodeGenWriteBarrier(pSVar19->m_Items + 4);
      if ((TypeInfo_Effects_EffectSpawner->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Effects_EffectSpawner);
      }
      UVar38.fields.z = (float)auStack_a8._0_4_;
      UVar38.fields.w = (float)auStack_a8._4_4_;
      UVar38.fields.x = (float)auStack_98._0_4_;
      UVar38.fields.y = (float)auStack_98._4_4_;
      position.fields.z = (float)auStack_e8._0_4_;
      position.fields.x = (float)auStack_d8._0_4_;
      position.fields.y = (float)auStack_d8._4_4_;
      Effects_EffectSpawner__Spawn(pSVar18,position,UVar38,4.0,true,pSVar19,(MethodInfo *)0x0);
      pCVar7 = (__this_00->fields).HumanCache;
      if ((pCVar7 == (Characters_HumanComponentCache_o *)0x0) ||
         (pCVar8 = (pCVar7->fields).BladeHitLeft, pCVar8 == (Characters_BaseHitbox_o *)0x0))
      goto label_05c0d783;
      pSVar18 = TypeInfo_Effects_EffectPrefabs->static_fields->Blood1;
      pUVar17 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)pCVar8,(MethodInfo *)0x0);
      if (pUVar17 == (UnityEngine_Transform_o *)0x0) goto label_05c0d783;
      UVar39 = UnityEngine_Transform__get_position(pUVar17,(MethodInfo *)0x0);
      auStack_128._0_4_ = 4.712389;
      auStack_128._4_4_ = 0.0;
      auStack_128._8_4_ = 0.0;
      UVar38 = UnityEngine_Quaternion__Internal_FromEulerRad
                         ((UnityEngine_Vector3_o *)auStack_128,(MethodInfo *)0x0);
      Effects_EffectSpawner__Spawn
                (pSVar18,UVar39,UVar38,1.0,true,(System_Object_array *)0x0,(MethodInfo *)0x0);
      if ((TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
      }
      pSVar18 = Characters_HumanSounds__GetRandomAPGShot((MethodInfo *)0x0);
      Characters_BaseCharacter__PlaySound((Characters_BaseCharacter_o *)__this_00,pSVar18,(MethodInfo *)0x0);
      Characters_Human__SpecialActionState(__this_00,0.5,(MethodInfo *)0x0);
    }
  }
label_05c0d704:
  pUVar9 = (__this_00->fields).Cache;
  if (pUVar9 != (Utility_BaseComponentCache_o *)0x0) {
    __this_02 = (pUVar9->fields).Rigidbody;
    if (Il2CppMethodInitialized_0753e72c == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
      Il2CppMethodInitialized_0753e72c = '\x01';
    }
    if (__this_02 != (UnityEngine_Rigidbody_o *)0x0) {
      pUVar23 = TypeInfo_UnityEngine_Vector3->static_fields;
      value.fields.z = (pUVar23->upVector).fields.z * 30.0;
      uVar2 = (pUVar23->upVector).fields.x;
      uVar4 = (pUVar23->upVector).fields.y;
      value.fields.x = (float)uVar2 * 30.0;
      value.fields.y = (float)uVar4 * 30.0;
      UnityEngine_Rigidbody__set_linearVelocity(__this_02,value,(MethodInfo *)0x0);
      return;
    }
  }
label_05c0d783:
  ThrowNullReferenceException();
}


