// Type: Characters.EscapeSpecial
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/Characters/EscapeSpecial.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/Characters/Human/Specials/EscapeSpecial.cs  [CHANGED since prior version]
// --------------------------------

// Characters.EscapeSpecial$$get_ActiveTime
// il2cpp: float Characters_EscapeSpecial__get_ActiveTime (Characters_EscapeSpecial_o* __this, const MethodInfo* method);
// 0x3fe8dc0

float Characters_EscapeSpecial__get_ActiveTime
                (Characters_EscapeSpecial_o *__this,MethodInfo *method)

{
  return 0.64;
}


// Characters.EscapeSpecial$$.ctor
// il2cpp: void Characters_EscapeSpecial___ctor (Characters_EscapeSpecial_o* __this, Characters_BaseCharacter_o* owner, const MethodInfo* method);
// 0x3fd7800

void Characters_EscapeSpecial___ctor
               (Characters_EscapeSpecial_o *__this,Characters_BaseCharacter_o *owner,
               MethodInfo *method)

{
  Characters_RechargeableUseable___ctor
            ((Characters_RechargeableUseable_o *)__this,owner,0.0,(MethodInfo *)0x0);
  (__this->fields).MaxUses = 1;
  (__this->fields).Cooldown = 300.0;
  (__this->fields).UsesLeft = -1;
  (__this->fields).ReduceCooldownAmount = 50.0;
  Characters_BaseUseable__SetCooldownLeft
            ((Characters_BaseUseable_o *)__this,300.0,(MethodInfo *)0x0);
  return;
}


// Characters.EscapeSpecial$$CanUse
// il2cpp: bool Characters_EscapeSpecial__CanUse (Characters_EscapeSpecial_o* __this, const MethodInfo* method);
// 0x3fe8dd0

bool_conflict
Characters_EscapeSpecial__CanUse(Characters_EscapeSpecial_o *__this,MethodInfo *method)

{
  byte bVar1;
  Characters_BaseCharacter_o *pCVar2;
  System_Object_array *pSVar3;
  char cVar4;
  bool_conflict bVar5;
  uint uVar6;
  
  if (DAT_05704172 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Human);
    DAT_05704172 = '\x01';
  }
  pCVar2 = (__this->fields)._owner;
  if (pCVar2 != (Characters_BaseCharacter_o *)0x0) {
    bVar1 = (TypeInfo_Human->_2).naturalAligment;
    if (((pCVar2->klass->_2).naturalAligment < bVar1) ||
       ((pCVar2->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_Human)) {
                    /* WARNING: Subroutine does not return */
      il2cpp_unwind_resume(pCVar2);
    }
    pSVar3 = (pCVar2->fields).crossfadeCache;
    if (pSVar3 != (System_Object_array *)0x0) {
      cVar4 = (*((pSVar3->obj).klass)->vtable[7].methodPtr)();
      uVar6 = 0;
      if (cVar4 != '\0') {
        bVar5 = Characters_BaseUseable__CanUse((Characters_BaseUseable_o *)__this,(MethodInfo *)0x0)
        ;
        if ((char)bVar5 != '\0') {
          uVar6 = (uint)(pCVar2[1].fields.HasExplicitNameTag == 7);
        }
      }
      return uVar6;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.EscapeSpecial$$Activate
// il2cpp: void Characters_EscapeSpecial__Activate (Characters_EscapeSpecial_o* __this, const MethodInfo* method);
// 0x3fe8e80

void Characters_EscapeSpecial__Activate(Characters_EscapeSpecial_o *__this,MethodInfo *method)

{
  byte bVar1;
  Characters_BaseCharacter_o *__this_00;
  Il2CppClass *pIVar2;
  System_Object_array *pSVar3;
  
  if (DAT_05704173 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AHSSWeapon);
    il2cpp_init_method_metadata(&TypeInfo_APGWeapon);
    il2cpp_init_method_metadata(&TypeInfo_BladeWeapon);
    il2cpp_init_method_metadata(&TypeInfo_HumanAnimations);
    il2cpp_init_method_metadata(&TypeInfo_Human);
    il2cpp_init_method_metadata(&TypeInfo_ThunderspearWeapon);
    DAT_05704173 = '\x01';
  }
  __this_00 = (__this->fields)._owner;
  if (__this_00 == (Characters_BaseCharacter_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  bVar1 = (TypeInfo_Human->_2).naturalAligment;
  if (((__this_00->klass->_2).naturalAligment < bVar1) ||
     ((__this_00->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_Human)) {
                    /* WARNING: Subroutine does not return */
    il2cpp_unwind_resume(__this_00);
  }
  pSVar3 = (__this_00->fields).crossfadeCache;
  if (pSVar3 != (System_Object_array *)0x0) {
    pIVar2 = (pSVar3->obj).klass;
    bVar1 = (TypeInfo_BladeWeapon->_2).naturalAligment;
    if ((bVar1 <= (pIVar2->_2).naturalAligment) &&
       ((pIVar2->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_BladeWeapon)) {
      if (*(int *)(TypeInfo_HumanAnimations + 0xe4) == 0) {
        il2cpp_init_class();
      }
      Characters_BaseCharacter__CrossFade
                (__this_00,*(System_String_o **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x218),0.1,0.0,
                 (MethodInfo *)0x0);
      pSVar3 = (__this_00->fields).crossfadeCache;
      if (pSVar3 == (System_Object_array *)0x0) {
        return;
      }
    }
    pIVar2 = (pSVar3->obj).klass;
    bVar1 = (TypeInfo_AHSSWeapon->_2).naturalAligment;
    if ((bVar1 <= (pIVar2->_2).naturalAligment) &&
       ((pIVar2->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_AHSSWeapon)) {
      if (*(int *)(TypeInfo_HumanAnimations + 0xe4) == 0) {
        il2cpp_init_class();
      }
      Characters_BaseCharacter__CrossFade
                (__this_00,*(System_String_o **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0xf0),0.1,0.0,
                 (MethodInfo *)0x0);
      pSVar3 = (__this_00->fields).crossfadeCache;
      if (pSVar3 == (System_Object_array *)0x0) {
        return;
      }
    }
    pIVar2 = (pSVar3->obj).klass;
    bVar1 = (TypeInfo_ThunderspearWeapon->_2).naturalAligment;
    if ((bVar1 <= (pIVar2->_2).naturalAligment) &&
       ((pIVar2->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_ThunderspearWeapon)) {
      if (*(int *)(TypeInfo_HumanAnimations + 0xe4) == 0) {
        il2cpp_init_class();
      }
      Characters_BaseCharacter__CrossFade
                (__this_00,*(System_String_o **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x138),0.1,0.0,
                 (MethodInfo *)0x0);
      pSVar3 = (__this_00->fields).crossfadeCache;
      if (pSVar3 == (System_Object_array *)0x0) {
        return;
      }
    }
    pIVar2 = (pSVar3->obj).klass;
    bVar1 = (TypeInfo_APGWeapon->_2).naturalAligment;
    if ((bVar1 <= (pIVar2->_2).naturalAligment) &&
       ((pIVar2->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_APGWeapon)) {
      if (*(int *)(TypeInfo_HumanAnimations + 0xe4) == 0) {
        il2cpp_init_class();
      }
      Characters_BaseCharacter__CrossFade
                (__this_00,*(System_String_o **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0xf0),0.1,0.0,
                 (MethodInfo *)0x0);
      return;
    }
  }
  return;
}


// Characters.EscapeSpecial$$Deactivate
// il2cpp: void Characters_EscapeSpecial__Deactivate (Characters_EscapeSpecial_o* __this, const MethodInfo* method);
// 0x3fe9120

void Characters_EscapeSpecial__Deactivate(Characters_EscapeSpecial_o *__this,MethodInfo *method)

{
  byte bVar1;
  uint uVar2;
  Characters_Human_o *__this_00;
  System_Collections_Generic_Dictionary_Renderer__Material__o *pSVar3;
  Photon_Pun_PhotonView_o *__this_01;
  Il2CppClass *pIVar4;
  Outline_o *pOVar5;
  UnityEngine_Component_o *pUVar6;
  void *pvVar7;
  UnityEngine_Rigidbody_o *__this_02;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  Il2CppObject *pIVar13;
  bool_conflict bVar14;
  System_Object_array *pSVar15;
  Il2CppObject *pIVar16;
  long lVar17;
  UnityEngine_Transform_o *pUVar18;
  System_String_o *pSVar19;
  Il2CppObject *pIVar20;
  long *plVar21;
  MethodInfo *pMVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined8 uVar27;
  undefined4 extraout_XMM0_Db;
  float fVar28;
  float extraout_XMM0_Dc;
  float extraout_XMM0_Dc_00;
  undefined4 uVar29;
  undefined4 extraout_XMM0_Dc_01;
  float extraout_XMM0_Dc_02;
  float extraout_XMM0_Dc_03;
  undefined4 extraout_XMM0_Dc_04;
  float extraout_XMM0_Dc_05;
  float extraout_XMM0_Dc_06;
  undefined4 extraout_XMM0_Dc_07;
  float extraout_XMM0_Dc_08;
  float extraout_XMM0_Dc_09;
  float extraout_XMM0_Dc_10;
  undefined4 extraout_XMM0_Dc_11;
  undefined4 extraout_XMM0_Dc_12;
  undefined4 extraout_XMM0_Dc_13;
  undefined4 extraout_XMM0_Dc_14;
  undefined4 extraout_XMM0_Dc_15;
  float extraout_XMM0_Dc_16;
  undefined4 extraout_XMM0_Dc_17;
  undefined4 extraout_XMM0_Dc_18;
  float extraout_XMM0_Dd;
  float extraout_XMM0_Dd_00;
  undefined4 uVar30;
  undefined4 extraout_XMM0_Dd_01;
  float extraout_XMM0_Dd_02;
  float extraout_XMM0_Dd_03;
  undefined4 extraout_XMM0_Dd_04;
  float extraout_XMM0_Dd_05;
  float extraout_XMM0_Dd_06;
  undefined4 extraout_XMM0_Dd_07;
  float extraout_XMM0_Dd_08;
  float extraout_XMM0_Dd_09;
  float extraout_XMM0_Dd_10;
  undefined4 extraout_XMM0_Dd_11;
  undefined4 extraout_XMM0_Dd_12;
  undefined4 extraout_XMM0_Dd_13;
  undefined4 extraout_XMM0_Dd_14;
  undefined4 extraout_XMM0_Dd_15;
  float extraout_XMM0_Dd_16;
  undefined4 extraout_XMM0_Dd_17;
  undefined4 extraout_XMM0_Dd_18;
  float extraout_XMM1_Da;
  float extraout_XMM1_Da_00;
  float extraout_XMM1_Da_01;
  float extraout_XMM1_Da_02;
  undefined4 extraout_XMM1_Da_03;
  undefined8 extraout_XMM1_Qb;
  float fVar31;
  float fVar35;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  float fVar36;
  float fVar37;
  undefined1 auVar38 [16];
  float fVar39;
  float fVar40;
  float fVar41;
  UnityEngine_Vector3_o UVar42;
  UnityEngine_Vector3_o UVar43;
  UnityEngine_Vector3_o UVar44;
  UnityEngine_Vector3_o position;
  UnityEngine_Vector3_o forward;
  UnityEngine_Vector3_o position_00;
  UnityEngine_Vector3_o forward_00;
  UnityEngine_Vector3_o position_01;
  UnityEngine_Vector3_o value;
  UnityEngine_Quaternion_o UVar45;
  float fStack_138;
  float fStack_134;
  undefined1 auStack_118 [8];
  float fStack_110;
  float fStack_10c;
  undefined8 uStack_f8;
  float fStack_dc;
  undefined1 auStack_d8 [8];
  float fStack_d0;
  float fStack_cc;
  undefined8 uStack_c8;
  float fStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 auStack_a8 [8];
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  undefined4 uStack_90;
  float fStack_8c;
  undefined8 uStack_88;
  float fStack_80;
  undefined4 uStack_7c;
  float fStack_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined1 auStack_68 [8];
  float fStack_60;
  float fStack_5c;
  undefined1 auStack_58 [8];
  float fStack_50;
  float fStack_4c;
  undefined1 auStack_48 [24];
  
  if (DAT_05704174 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AHSSWeapon);
    il2cpp_init_method_metadata(&TypeInfo_APGWeapon);
    il2cpp_init_method_metadata(&TypeInfo_BladeWeapon);
    il2cpp_init_method_metadata(&TypeInfo_CapsuleCollider);
    il2cpp_init_method_metadata(&TypeInfo_Color);
    il2cpp_init_method_metadata(&TypeInfo_EffectPrefabs);
    il2cpp_init_method_metadata(&TypeInfo_HumanSounds);
    il2cpp_init_method_metadata(&TypeInfo_Human);
    il2cpp_init_method_metadata(&TypeInfo_object);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeInfo_ThunderspearWeapon);
    il2cpp_init_method_metadata(&TypeInfo_Vector3);
    il2cpp_init_method_metadata(&"GetHitRPC");
    il2cpp_init_method_metadata(&"");
    il2cpp_init_method_metadata(&"ForearmLHurtbox");
    il2cpp_init_method_metadata(&"ForearmRHurtbox");
    DAT_05704174 = '\x01';
  }
  __this_00 = (Characters_Human_o *)(__this->fields)._owner;
  auVar32 = _auStack_a8;
  if (__this_00 == (Characters_Human_o *)0x0) goto LAB_03feaaf4;
  bVar1 = (TypeInfo_Human->_2).naturalAligment;
  if (((__this_00->klass->_2).naturalAligment < bVar1) ||
     ((__this_00->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_Human)) {
                    /* WARNING: Subroutine does not return */
    il2cpp_unwind_resume(__this_00);
  }
  if (*(char *)&(__this_00->fields).FeedVictimName != '\0') {
    return;
  }
  pSVar3 = (__this_00->fields).FPSMaterials;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar14 = UnityEngine_Object__op_Inequality
                     ((UnityEngine_Object_o *)pSVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar14 == '\0') {
    return;
  }
  if ((__this_00->fields).FinishSetup != 7) {
    return;
  }
  pSVar3 = (__this_00->fields).FPSMaterials;
  auVar32 = _auStack_a8;
  if (pSVar3 == (System_Collections_Generic_Dictionary_Renderer__Material__o *)0x0)
  goto LAB_03feaaf4;
  if ((char)pSVar3[3].fields._freeCount == '\0') {
    plVar21 = &"ForearmRHurtbox";
    lVar17._0_4_ = pSVar3[1].fields._count;
    lVar17._4_4_ = pSVar3[1].fields._freeList;
  }
  else {
    plVar21 = &"ForearmLHurtbox";
    lVar17._0_4_ = pSVar3[1].fields._count;
    lVar17._4_4_ = pSVar3[1].fields._freeList;
  }
  if (lVar17 == 0) goto LAB_03feaaf4;
  pIVar20 = (Il2CppObject *)*plVar21;
  __this_01 = *(Photon_Pun_PhotonView_o **)(lVar17 + 0x20);
  pSVar15 = (System_Object_array *)il2cpp_glue_02274930(TypeInfo_object,5);
  lVar17 = *(long *)&(__this_00->fields).Dead;
  auVar32 = _auStack_a8;
  if ((lVar17 == 0) || (lVar17 = *(long *)(lVar17 + 0x20), lVar17 == 0)) goto LAB_03feaaf4;
  uStack_88 = CONCAT44(uStack_88._4_4_,*(undefined4 *)(lVar17 + 0x94));
  pIVar16 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,&uStack_88);
  auVar32 = _auStack_a8;
  if (pSVar15 == (System_Object_array *)0x0) goto LAB_03feaaf4;
  if ((pIVar16 != (Il2CppObject *)0x0) &&
     (lVar17 = il2cpp_runtime_glue(pIVar16,(((pSVar15->obj).klass)->_1).element_class), lVar17 == 0))
  goto LAB_03feab06;
  if ((int)pSVar15->max_length == 0) goto LAB_03feab01;
  pSVar15->m_Items[0] = pIVar16;
  il2cpp_runtime_glue(pSVar15->m_Items,pIVar16);
  if ("" == (Il2CppObject *)0x0) {
    uVar2 = (uint)pSVar15->max_length;
    pIVar16 = (Il2CppObject *)0x0;
    pIVar13 = "";
  }
  else {
    lVar17 = il2cpp_runtime_glue("",(((pSVar15->obj).klass)->_1).element_class);
    if (lVar17 == 0) goto LAB_03feab06;
    uVar2 = (uint)pSVar15->max_length;
    pIVar16 = "";
    pIVar13 = "";
  }
  "" = pIVar13;
  if (uVar2 < 2) goto LAB_03feab01;
  uStack_c8._4_4_ = (uint)((ulong)uStack_c8 >> 0x20);
  pSVar15->m_Items[1] = pIVar16;
  il2cpp_runtime_glue(pSVar15->m_Items + 1,pIVar13);
  uStack_c8 = (ulong)uStack_c8._4_4_ << 0x20;
  pIVar16 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,&uStack_c8);
  if ((pIVar16 != (Il2CppObject *)0x0) &&
     (lVar17 = il2cpp_runtime_glue(pIVar16,(((pSVar15->obj).klass)->_1).element_class), lVar17 == 0))
  goto LAB_03feab06;
  if ((uint)pSVar15->max_length < 3) goto LAB_03feab01;
  pSVar15->m_Items[2] = pIVar16;
  il2cpp_runtime_glue(pSVar15->m_Items + 2,pIVar16);
  if ("" == (Il2CppObject *)0x0) {
    uVar2 = (uint)pSVar15->max_length;
    pIVar16 = (Il2CppObject *)0x0;
    pIVar13 = "";
  }
  else {
    lVar17 = il2cpp_runtime_glue("",(((pSVar15->obj).klass)->_1).element_class);
    if (lVar17 == 0) goto LAB_03feab06;
    uVar2 = (uint)pSVar15->max_length;
    pIVar16 = "";
    pIVar13 = "";
  }
  "" = pIVar13;
  if (uVar2 < 4) goto LAB_03feab01;
  pSVar15->m_Items[3] = pIVar16;
  il2cpp_runtime_glue(pSVar15->m_Items + 3,pIVar13);
  if ((pIVar20 != (Il2CppObject *)0x0) &&
     (lVar17 = il2cpp_runtime_glue(pIVar20,(((pSVar15->obj).klass)->_1).element_class), lVar17 == 0))
  goto LAB_03feab06;
  if ((uint)pSVar15->max_length < 5) goto LAB_03feab01;
  pSVar15->m_Items[4] = pIVar20;
  il2cpp_runtime_glue(pSVar15->m_Items + 4,pIVar20);
  auVar32 = _auStack_a8;
  if (__this_01 == (Photon_Pun_PhotonView_o *)0x0) goto LAB_03feaaf4;
  Photon_Pun_PhotonView__RPC(__this_01,"GetHitRPC",0,pSVar15,(MethodInfo *)0x0);
  Characters_Human__Ungrab(__this_00,1,0,0,(MethodInfo *)0x0);
  pSVar15 = (__this_00->fields).crossfadeCache;
  if (pSVar15 != (System_Object_array *)0x0) {
    pIVar4 = (pSVar15->obj).klass;
    bVar1 = (TypeInfo_BladeWeapon->_2).naturalAligment;
    if ((bVar1 <= (pIVar4->_2).naturalAligment) &&
       ((pIVar4->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_BladeWeapon)) {
      if (*(int *)(TypeInfo_EffectPrefabs + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pOVar5 = (__this_00->fields).OutlineComponent;
      auVar32 = _auStack_a8;
      if ((pOVar5 == (Outline_o *)0x0) ||
         (pUVar6 = (UnityEngine_Component_o *)pOVar5[1].fields.outlineMaskAndFillMaterial,
         pUVar6 == (UnityEngine_Component_o *)0x0)) goto LAB_03feaaf4;
      pSVar19 = *(System_String_o **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 0x18);
      pUVar18 = UnityEngine_Component__get_transform(pUVar6,(MethodInfo *)0x0);
      auVar32 = _auStack_a8;
      if (pUVar18 == (UnityEngine_Transform_o *)0x0) goto LAB_03feaaf4;
      UVar42 = UnityEngine_Transform__get_position(pUVar18,(MethodInfo *)0x0);
      UVar45 = UnityEngine_Quaternion__Internal_FromEulerRad
                         ((UnityEngine_Vector3_o)ZEXT812(0x4096cbe4),(MethodInfo *)0x0);
      Effects_EffectSpawner__Spawn
                (pSVar19,UVar42,UVar45,1.0,1,(System_Object_array *)0x0,(MethodInfo *)0x0);
      if (*(int *)((long)&TypeInfo_HumanSounds[2].parameters + 4) == 0) {
        il2cpp_init_class();
      }
      Characters_BaseCharacter__PlaySound
                ((Characters_BaseCharacter_o *)__this_00,
                 *(System_String_o **)(TypeInfo_HumanSounds[2].virtualMethodPointer + 8),(MethodInfo *)0x0);
      Characters_Human__SpecialActionState(__this_00,0.5,(MethodInfo *)0x0);
      pSVar15 = (__this_00->fields).crossfadeCache;
    }
  }
  if (pSVar15 != (System_Object_array *)0x0) {
    pIVar4 = (pSVar15->obj).klass;
    bVar1 = (TypeInfo_AHSSWeapon->_2).naturalAligment;
    if ((bVar1 <= (pIVar4->_2).naturalAligment) &&
       ((pIVar4->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_AHSSWeapon)) {
      if (*(int *)(TypeInfo_EffectPrefabs + 0xe4) == 0) {
        il2cpp_init_class();
      }
      lVar17 = *(long *)&(__this_00->fields).Dead;
      auVar32 = _auStack_a8;
      if ((lVar17 == 0) ||
         (pUVar18 = *(UnityEngine_Transform_o **)(lVar17 + 0x10),
         pUVar18 == (UnityEngine_Transform_o *)0x0)) goto LAB_03feaaf4;
      pSVar19 = *(System_String_o **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 0x30);
      UVar42 = UnityEngine_Transform__get_position(pUVar18,(MethodInfo *)0x0);
      lVar17 = *(long *)&(__this_00->fields).Dead;
      auVar32 = _auStack_a8;
      if ((lVar17 == 0) ||
         (pUVar18 = *(UnityEngine_Transform_o **)(lVar17 + 0x10),
         pUVar18 == (UnityEngine_Transform_o *)0x0)) goto LAB_03feaaf4;
      UVar43 = UnityEngine_Transform__get_up(pUVar18,(MethodInfo *)0x0);
      uVar27 = (*(__this_00->klass->vtable)._66_GetAimPoint.methodPtr)(__this_00);
      lVar17 = *(long *)&(__this_00->fields).Dead;
      auVar32 = _auStack_a8;
      if ((lVar17 == 0) ||
         (pUVar18 = *(UnityEngine_Transform_o **)(lVar17 + 0x10),
         pUVar18 == (UnityEngine_Transform_o *)0x0)) goto LAB_03feaaf4;
      UVar44 = UnityEngine_Transform__get_position(pUVar18,(MethodInfo *)0x0);
      fVar36 = UVar44.fields.x;
      fVar23 = UVar44.fields.y;
      fVar37 = extraout_XMM0_Dc_00;
      fVar28 = extraout_XMM0_Dd_00;
      if (DAT_056fde20 == '\0') {
        fStack_d0 = extraout_XMM0_Dc_00;
        auStack_d8 = (undefined1  [8])UVar44.fields._0_8_;
        fStack_cc = extraout_XMM0_Dd_00;
        il2cpp_init_method_metadata(&TypeInfo_Math);
        DAT_056fde20 = '\x01';
        fVar36 = (float)auStack_d8._0_4_;
        fVar23 = (float)auStack_d8._4_4_;
        fVar37 = fStack_d0;
        fVar28 = fStack_cc;
      }
      auVar32._0_4_ = (float)uVar27 - fVar36;
      auVar32._4_4_ = (float)((ulong)uVar27 >> 0x20) - fVar23;
      auVar32._8_4_ = extraout_XMM0_Dc - fVar37;
      auVar32._12_4_ = extraout_XMM0_Dd - fVar28;
      fVar36 = extraout_XMM1_Da - UVar44.fields.z;
      if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
        il2cpp_init_class();
      }
      uStack_f8._0_4_ = UVar43.fields.x;
      uStack_f8._4_4_ = UVar43.fields.y;
      uVar29 = 0;
      uVar30 = 0;
      fVar23 = fVar36 * fVar36 + auVar32._4_4_ * auVar32._4_4_ + auVar32._0_4_ * auVar32._0_4_;
      if (fVar23 < 0.0) {
        fVar23 = sqrtf(fVar23);
        uVar29 = extraout_XMM0_Dc_01;
        uVar30 = extraout_XMM0_Dd_01;
      }
      else {
        fVar23 = SQRT(fVar23);
      }
      auStack_118._0_4_ = UVar42.fields.x;
      auStack_118._4_4_ = UVar42.fields.y;
      UVar42.fields.z = UVar42.fields.z + UVar43.fields.z * 0.8;
      if (fVar23 <= 1e-05) {
        if (DAT_056fdd15 == '\0') {
          il2cpp_init_method_metadata();
          DAT_056fdd15 = '\x01';
        }
        uVar27 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
        fVar36 = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
      }
      else {
        fVar36 = fVar36 / fVar23;
        auVar8._4_4_ = fVar23;
        auVar8._0_4_ = fVar23;
        auVar8._8_4_ = uVar29;
        auVar8._12_4_ = uVar30;
        auVar32 = divps(auVar32,auVar8);
        uVar27 = auVar32._0_8_;
      }
      UVar43.fields.z = fVar36;
      UVar43.fields.x = (float)(int)uVar27;
      UVar43.fields.y = (float)(int)((ulong)uVar27 >> 0x20);
      UVar45 = UnityEngine_Quaternion__LookRotation(UVar43,(MethodInfo *)0x0);
      UVar42.fields.x = (float)auStack_118._0_4_ + (float)uStack_f8 * 0.8;
      UVar42.fields.y = (float)auStack_118._4_4_ + uStack_f8._4_4_ * 0.8;
      Effects_EffectSpawner__Spawn
                (pSVar19,UVar42,UVar45,1.0,1,(System_Object_array *)0x0,(MethodInfo *)0x0);
      pOVar5 = (__this_00->fields).OutlineComponent;
      auVar32 = _auStack_a8;
      if ((pOVar5 == (Outline_o *)0x0) ||
         (pUVar6 = (UnityEngine_Component_o *)pOVar5[1].fields.outlineMaskAndFillMaterial,
         pUVar6 == (UnityEngine_Component_o *)0x0)) goto LAB_03feaaf4;
      pSVar19 = *(System_String_o **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 0x18);
      pUVar18 = UnityEngine_Component__get_transform(pUVar6,(MethodInfo *)0x0);
      auVar32 = _auStack_a8;
      if (pUVar18 == (UnityEngine_Transform_o *)0x0) goto LAB_03feaaf4;
      UVar42 = UnityEngine_Transform__get_position(pUVar18,(MethodInfo *)0x0);
      UVar45 = UnityEngine_Quaternion__Internal_FromEulerRad
                         ((UnityEngine_Vector3_o)ZEXT812(0x4096cbe4),(MethodInfo *)0x0);
      Effects_EffectSpawner__Spawn
                (pSVar19,UVar42,UVar45,1.0,1,(System_Object_array *)0x0,(MethodInfo *)0x0);
      pMVar22 = TypeInfo_HumanSounds;
      if (*(int *)((long)&TypeInfo_HumanSounds[2].parameters + 4) == 0) {
        il2cpp_init_class();
      }
      pSVar19 = Characters_HumanSounds__GetRandomAHSSGunShot(pMVar22);
      Characters_BaseCharacter__PlaySound
                ((Characters_BaseCharacter_o *)__this_00,pSVar19,(MethodInfo *)0x0);
      Characters_Human__SpecialActionState(__this_00,0.5,(MethodInfo *)0x0);
      pSVar15 = (__this_00->fields).crossfadeCache;
      if (pSVar15 == (System_Object_array *)0x0) goto LAB_03feaa7f;
    }
    pIVar4 = (pSVar15->obj).klass;
    bVar1 = (TypeInfo_ThunderspearWeapon->_2).naturalAligment;
    if ((bVar1 <= (pIVar4->_2).naturalAligment) &&
       ((pIVar4->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_ThunderspearWeapon)) {
      if (*(int *)(TypeInfo_EffectPrefabs + 0xe4) == 0) {
        il2cpp_init_class();
      }
      lVar17 = *(long *)&(__this_00->fields).Dead;
      auVar32 = _auStack_a8;
      if ((lVar17 == 0) ||
         (pUVar18 = *(UnityEngine_Transform_o **)(lVar17 + 0x10),
         pUVar18 == (UnityEngine_Transform_o *)0x0)) goto LAB_03feaaf4;
      pSVar19 = (System_String_o *)**(undefined8 **)(TypeInfo_EffectPrefabs + 0xb8);
      UVar42 = UnityEngine_Transform__get_position(pUVar18,(MethodInfo *)0x0);
      lVar17 = *(long *)&(__this_00->fields).Dead;
      auVar32 = _auStack_a8;
      if ((lVar17 == 0) ||
         (pUVar18 = *(UnityEngine_Transform_o **)(lVar17 + 0x10),
         pUVar18 == (UnityEngine_Transform_o *)0x0)) goto LAB_03feaaf4;
      UVar43 = UnityEngine_Transform__get_up(pUVar18,(MethodInfo *)0x0);
      uVar27 = (*(__this_00->klass->vtable)._66_GetAimPoint.methodPtr)(__this_00);
      lVar17 = *(long *)&(__this_00->fields).Dead;
      auVar32 = _auStack_a8;
      if ((lVar17 == 0) ||
         (pUVar18 = *(UnityEngine_Transform_o **)(lVar17 + 0x10),
         pUVar18 == (UnityEngine_Transform_o *)0x0)) goto LAB_03feaaf4;
      UVar44 = UnityEngine_Transform__get_position(pUVar18,(MethodInfo *)0x0);
      fVar36 = UVar44.fields.x;
      fVar23 = UVar44.fields.y;
      fVar37 = extraout_XMM0_Dc_03;
      fVar28 = extraout_XMM0_Dd_03;
      if (DAT_056fde20 == '\0') {
        fStack_d0 = extraout_XMM0_Dc_03;
        auStack_d8 = (undefined1  [8])UVar44.fields._0_8_;
        fStack_cc = extraout_XMM0_Dd_03;
        il2cpp_init_method_metadata(&TypeInfo_Math);
        DAT_056fde20 = '\x01';
        fVar36 = (float)auStack_d8._0_4_;
        fVar23 = (float)auStack_d8._4_4_;
        fVar37 = fStack_d0;
        fVar28 = fStack_cc;
      }
      auVar33._0_4_ = (float)uVar27 - fVar36;
      auVar33._4_4_ = (float)((ulong)uVar27 >> 0x20) - fVar23;
      auVar33._8_4_ = extraout_XMM0_Dc_02 - fVar37;
      auVar33._12_4_ = extraout_XMM0_Dd_02 - fVar28;
      fVar36 = extraout_XMM1_Da_00 - UVar44.fields.z;
      if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
        il2cpp_init_class();
      }
      uVar29 = 0;
      uVar30 = 0;
      fVar23 = fVar36 * fVar36 + auVar33._4_4_ * auVar33._4_4_ + auVar33._0_4_ * auVar33._0_4_;
      if (fVar23 < 0.0) {
        fVar23 = sqrtf(fVar23);
        uVar29 = extraout_XMM0_Dc_04;
        uVar30 = extraout_XMM0_Dd_04;
        if (fVar23 <= 1e-05) goto LAB_03fe9b69;
LAB_03fe9b5c:
        fVar36 = fVar36 / fVar23;
        auVar12._4_4_ = fVar23;
        auVar12._0_4_ = fVar23;
        auVar12._8_4_ = uVar29;
        auVar12._12_4_ = uVar30;
        auVar32 = divps(auVar33,auVar12);
        uVar27 = auVar32._0_8_;
      }
      else {
        fVar23 = SQRT(fVar23);
        if (1e-05 < fVar23) goto LAB_03fe9b5c;
LAB_03fe9b69:
        if (DAT_056fdd15 == '\0') {
          il2cpp_init_method_metadata();
          DAT_056fdd15 = '\x01';
        }
        uVar27 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
        fVar36 = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
      }
      UVar44.fields.z = fVar36;
      UVar44.fields.x = (float)(int)uVar27;
      UVar44.fields.y = (float)(int)((ulong)uVar27 >> 0x20);
      UVar45 = UnityEngine_Quaternion__LookRotation(UVar44,(MethodInfo *)0x0);
      pSVar15 = (System_Object_array *)il2cpp_glue_02274930(TypeInfo_object,3);
      uStack_88 = 0;
      fStack_80 = 0.0;
      uStack_7c = 0x3f800000;
      pIVar20 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_Color,&uStack_88);
      auVar32 = _auStack_a8;
      if (pSVar15 == (System_Object_array *)0x0) goto LAB_03feaaf4;
      if ((pIVar20 != (Il2CppObject *)0x0) &&
         (lVar17 = il2cpp_runtime_glue(pIVar20,(((pSVar15->obj).klass)->_1).element_class),
         lVar17 == 0)) goto LAB_03feab06;
      if ((int)pSVar15->max_length == 0) goto LAB_03feab01;
      pSVar15->m_Items[0] = pIVar20;
      il2cpp_runtime_glue(pSVar15->m_Items,pIVar20);
      uStack_c8 = CONCAT44(uStack_c8._4_4_,1);
      pIVar20 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,&uStack_c8);
      if ((pIVar20 != (Il2CppObject *)0x0) &&
         (lVar17 = il2cpp_runtime_glue(pIVar20,(((pSVar15->obj).klass)->_1).element_class),
         lVar17 == 0)) goto LAB_03feab06;
      if ((uint)pSVar15->max_length < 2) goto LAB_03feab01;
      pSVar15->m_Items[1] = pIVar20;
      il2cpp_runtime_glue(pSVar15->m_Items + 1,pIVar20);
      fStack_dc = (float)CONCAT31(fStack_dc._1_3_,1);
      pIVar20 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711048,&fStack_dc);
      if ((pIVar20 != (Il2CppObject *)0x0) &&
         (lVar17 = il2cpp_runtime_glue(pIVar20,(((pSVar15->obj).klass)->_1).element_class),
         lVar17 == 0)) goto LAB_03feab06;
      if ((uint)pSVar15->max_length < 3) goto LAB_03feab01;
      uStack_f8._0_4_ = UVar43.fields.x;
      uStack_f8._4_4_ = UVar43.fields.y;
      auStack_118._0_4_ = UVar42.fields.x;
      auStack_118._4_4_ = UVar42.fields.y;
      position.fields.z = UVar42.fields.z + UVar43.fields.z * 0.8;
      pSVar15->m_Items[2] = pIVar20;
      il2cpp_runtime_glue(pSVar15->m_Items + 2,pIVar20);
      position.fields.x = (float)auStack_118._0_4_ + (float)uStack_f8 * 0.8;
      position.fields.y = (float)auStack_118._4_4_ + uStack_f8._4_4_ * 0.8;
      Effects_EffectSpawner__Spawn(pSVar19,position,UVar45,4.0,1,pSVar15,(MethodInfo *)0x0);
      lVar17 = *(long *)&(__this_00->fields).Dead;
      auVar32 = _auStack_a8;
      if ((lVar17 == 0) ||
         (pUVar18 = *(UnityEngine_Transform_o **)(lVar17 + 0x10),
         pUVar18 == (UnityEngine_Transform_o *)0x0)) goto LAB_03feaaf4;
      pSVar19 = *(System_String_o **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 0x60);
      UVar42 = UnityEngine_Transform__get_position(pUVar18,(MethodInfo *)0x0);
      lVar17 = *(long *)&(__this_00->fields).Dead;
      auVar32 = _auStack_a8;
      if ((lVar17 == 0) ||
         (pUVar18 = *(UnityEngine_Transform_o **)(lVar17 + 0x10),
         pUVar18 == (UnityEngine_Transform_o *)0x0)) goto LAB_03feaaf4;
      UVar43 = UnityEngine_Transform__get_up(pUVar18,(MethodInfo *)0x0);
      uVar27 = (*(__this_00->klass->vtable)._66_GetAimPoint.methodPtr)(__this_00);
      lVar17 = *(long *)&(__this_00->fields).Dead;
      auVar32 = _auStack_a8;
      if ((lVar17 == 0) ||
         (pUVar18 = *(UnityEngine_Transform_o **)(lVar17 + 0x10),
         pUVar18 == (UnityEngine_Transform_o *)0x0)) goto LAB_03feaaf4;
      UVar44 = UnityEngine_Transform__get_position(pUVar18,(MethodInfo *)0x0);
      fVar36 = UVar44.fields.x;
      fVar23 = UVar44.fields.y;
      fVar37 = extraout_XMM0_Dc_06;
      fVar28 = extraout_XMM0_Dd_06;
      if (DAT_056fde20 == '\0') {
        fStack_d0 = extraout_XMM0_Dc_06;
        auStack_d8 = (undefined1  [8])UVar44.fields._0_8_;
        fStack_cc = extraout_XMM0_Dd_06;
        il2cpp_init_method_metadata(&TypeInfo_Math);
        DAT_056fde20 = '\x01';
        fVar36 = (float)auStack_d8._0_4_;
        fVar23 = (float)auStack_d8._4_4_;
        fVar37 = fStack_d0;
        fVar28 = fStack_cc;
      }
      auVar34._0_4_ = (float)uVar27 - fVar36;
      auVar34._4_4_ = (float)((ulong)uVar27 >> 0x20) - fVar23;
      auVar34._8_4_ = extraout_XMM0_Dc_05 - fVar37;
      auVar34._12_4_ = extraout_XMM0_Dd_05 - fVar28;
      fVar36 = extraout_XMM1_Da_01 - UVar44.fields.z;
      if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
        il2cpp_init_class();
      }
      uStack_f8._0_4_ = UVar43.fields.x;
      uStack_f8._4_4_ = UVar43.fields.y;
      uVar29 = 0;
      uVar30 = 0;
      fVar23 = fVar36 * fVar36 + auVar34._4_4_ * auVar34._4_4_ + auVar34._0_4_ * auVar34._0_4_;
      if (fVar23 < 0.0) {
        fVar23 = sqrtf(fVar23);
        uVar29 = extraout_XMM0_Dc_07;
        uVar30 = extraout_XMM0_Dd_07;
      }
      else {
        fVar23 = SQRT(fVar23);
      }
      auStack_118._0_4_ = UVar42.fields.x;
      auStack_118._4_4_ = UVar42.fields.y;
      position_00.fields.z = UVar42.fields.z + UVar43.fields.z * 0.8;
      if (fVar23 <= 1e-05) {
        if (DAT_056fdd15 == '\0') {
          il2cpp_init_method_metadata();
          DAT_056fdd15 = '\x01';
        }
        uVar27 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
        fVar36 = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
      }
      else {
        fVar36 = fVar36 / fVar23;
        auVar9._4_4_ = fVar23;
        auVar9._0_4_ = fVar23;
        auVar9._8_4_ = uVar29;
        auVar9._12_4_ = uVar30;
        auVar32 = divps(auVar34,auVar9);
        uVar27 = auVar32._0_8_;
      }
      forward.fields.z = fVar36;
      forward.fields.x = (float)(int)uVar27;
      forward.fields.y = (float)(int)((ulong)uVar27 >> 0x20);
      UVar45 = UnityEngine_Quaternion__LookRotation(forward,(MethodInfo *)0x0);
      position_00.fields.x = (float)auStack_118._0_4_ + (float)uStack_f8 * 0.8;
      position_00.fields.y = (float)auStack_118._4_4_ + uStack_f8._4_4_ * 0.8;
      Effects_EffectSpawner__Spawn
                (pSVar19,position_00,UVar45,4.0,1,(System_Object_array *)0x0,(MethodInfo *)0x0);
      pOVar5 = (__this_00->fields).OutlineComponent;
      auVar32 = _auStack_a8;
      if ((pOVar5 == (Outline_o *)0x0) ||
         (pUVar6 = (UnityEngine_Component_o *)pOVar5[1].fields.outlineMaskAndFillMaterial,
         pUVar6 == (UnityEngine_Component_o *)0x0)) goto LAB_03feaaf4;
      pSVar19 = *(System_String_o **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 0x18);
      pUVar18 = UnityEngine_Component__get_transform(pUVar6,(MethodInfo *)0x0);
      auVar32 = _auStack_a8;
      if (pUVar18 == (UnityEngine_Transform_o *)0x0) goto LAB_03feaaf4;
      UVar42 = UnityEngine_Transform__get_position(pUVar18,(MethodInfo *)0x0);
      UVar45 = UnityEngine_Quaternion__Internal_FromEulerRad
                         ((UnityEngine_Vector3_o)ZEXT812(0x4096cbe4),(MethodInfo *)0x0);
      Effects_EffectSpawner__Spawn
                (pSVar19,UVar42,UVar45,1.0,1,(System_Object_array *)0x0,(MethodInfo *)0x0);
      pMVar22 = TypeInfo_HumanSounds;
      if (*(int *)((long)&TypeInfo_HumanSounds[2].parameters + 4) == 0) {
        il2cpp_init_class();
      }
      pSVar19 = Characters_HumanSounds__GetRandomTSLaunch(pMVar22);
      Characters_BaseCharacter__PlaySound
                ((Characters_BaseCharacter_o *)__this_00,pSVar19,(MethodInfo *)0x0);
      Characters_Human__SpecialActionState(__this_00,0.5,(MethodInfo *)0x0);
      pSVar15 = (__this_00->fields).crossfadeCache;
      if (pSVar15 == (System_Object_array *)0x0) goto LAB_03feaa7f;
    }
    pIVar4 = (pSVar15->obj).klass;
    bVar1 = (TypeInfo_APGWeapon->_2).naturalAligment;
    if ((bVar1 <= (pIVar4->_2).naturalAligment) &&
       ((pIVar4->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_APGWeapon)) {
      uVar27 = (*(__this_00->klass->vtable)._66_GetAimPoint.methodPtr)(__this_00);
      auStack_118._4_4_ = (undefined4)((ulong)uVar27 >> 0x20);
      lVar17 = *(long *)&(__this_00->fields).Dead;
      auVar32 = _auStack_a8;
      if ((lVar17 == 0) ||
         (pUVar18 = *(UnityEngine_Transform_o **)(lVar17 + 0x10),
         pUVar18 == (UnityEngine_Transform_o *)0x0)) goto LAB_03feaaf4;
      UVar42 = UnityEngine_Transform__get_position(pUVar18,(MethodInfo *)0x0);
      if (DAT_056fde20 == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_Math);
        DAT_056fde20 = '\x01';
      }
      fVar37 = (float)auStack_118._4_4_ - UVar42.fields.y;
      fVar36 = extraout_XMM1_Da_02 - UVar42.fields.z;
      fVar23 = (float)uVar27 - UVar42.fields.x;
      if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
        il2cpp_init_class();
      }
      fVar36 = fVar23 * fVar23 + fVar37 * fVar37 + fVar36 * fVar36;
      if (fVar36 < 0.0) {
        fVar36 = sqrtf(fVar36);
      }
      else {
        fVar36 = SQRT(fVar36);
      }
      if ((fVar36 <= 1e-05) && (DAT_056fdd15 == '\0')) {
        il2cpp_init_method_metadata(&TypeInfo_Vector3);
        DAT_056fdd15 = '\x01';
      }
      lVar17 = *(long *)&(__this_00->fields).Dead;
      auVar32 = _auStack_a8;
      if ((lVar17 == 0) ||
         (pUVar18 = *(UnityEngine_Transform_o **)(lVar17 + 0x10),
         pUVar18 == (UnityEngine_Transform_o *)0x0)) goto LAB_03feaaf4;
      UVar42 = UnityEngine_Transform__get_position(pUVar18,(MethodInfo *)0x0);
      lVar17 = *(long *)&(__this_00->fields).Dead;
      auVar32 = _auStack_a8;
      if ((lVar17 == 0) ||
         (pUVar18 = *(UnityEngine_Transform_o **)(lVar17 + 0x10),
         pUVar18 == (UnityEngine_Transform_o *)0x0)) goto LAB_03feaaf4;
      UVar43 = UnityEngine_Transform__get_up(pUVar18,(MethodInfo *)0x0);
      fStack_138 = UVar42.fields.x;
      fStack_134 = UVar42.fields.y;
      fStack_138 = fStack_138 + UVar43.fields.x * 0.8;
      fStack_134 = fStack_134 + UVar43.fields.y * 0.8;
      fVar36 = UVar42.fields.z + UVar43.fields.z * 0.8;
      if (DAT_056fde20 == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_Math);
        DAT_056fde20 = '\x01';
      }
      auStack_118._0_4_ = (float)uVar27 - fStack_138;
      auStack_118._4_4_ = (float)auStack_118._4_4_ - fStack_134;
      fVar23 = extraout_XMM1_Da_02 - fVar36;
      fStack_110 = extraout_XMM0_Dc_08 - (extraout_XMM0_Dc_09 + extraout_XMM0_Dc_10 * 0.0);
      fStack_10c = extraout_XMM0_Dd_08 - (extraout_XMM0_Dd_09 + extraout_XMM0_Dd_10 * 0.0);
      if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
        il2cpp_init_class();
      }
      uVar29 = (undefined4)extraout_XMM1_Qb;
      uVar30 = (undefined4)((ulong)extraout_XMM1_Qb >> 0x20);
      fVar37 = fVar23 * fVar23 +
               (float)auStack_118._4_4_ * (float)auStack_118._4_4_ +
               (float)auStack_118._0_4_ * (float)auStack_118._0_4_;
      if (fVar37 < 0.0) {
        fVar37 = sqrtf(fVar37);
        uVar29 = extraout_XMM0_Dc_11;
        uVar30 = extraout_XMM0_Dd_11;
        if (fVar37 <= 1e-05) goto LAB_03fea307;
LAB_03fea2e2:
        fVar23 = fVar23 / fVar37;
        auVar11._4_4_ = fVar37;
        auVar11._0_4_ = fVar37;
        auVar11._8_4_ = uVar29;
        auVar11._12_4_ = uVar30;
        auVar32 = divps(_auStack_118,auVar11);
        fVar37 = auVar32._0_4_;
        fVar28 = auVar32._4_4_;
        fVar26 = auVar32._8_4_;
        fVar31 = auVar32._12_4_;
        pOVar5 = (__this_00->fields).OutlineComponent;
      }
      else {
        fVar37 = SQRT(fVar37);
        if (1e-05 < fVar37) goto LAB_03fea2e2;
LAB_03fea307:
        if (DAT_056fdd15 == '\0') {
          il2cpp_init_method_metadata(&TypeInfo_Vector3);
          DAT_056fdd15 = '\x01';
        }
        uVar27 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
        fVar37 = (float)uVar27;
        fVar28 = (float)((ulong)uVar27 >> 0x20);
        fVar26 = 0.0;
        fVar31 = 0.0;
        fVar23 = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
        pOVar5 = (__this_00->fields).OutlineComponent;
      }
      auVar32 = _auStack_a8;
      if (((pOVar5 == (Outline_o *)0x0) || (pOVar5[2].klass == (Outline_c *)0x0)) ||
         (pIVar4 = ((pOVar5[2].klass)->_1).declaringType, pIVar4 == (Il2CppClass *)0x0))
      goto LAB_03feaaf4;
      pvVar7 = (pIVar4->_1).image;
      if ((*(byte *)((long)pvVar7 + 0x130) < *(byte *)(TypeInfo_CapsuleCollider + 0x130)) ||
         (*(long *)(*(long *)((long)pvVar7 + 200) + -8 + (ulong)*(byte *)(TypeInfo_CapsuleCollider + 0x130) * 8)
          != TypeInfo_CapsuleCollider)) {
                    /* WARNING: Subroutine does not return */
        il2cpp_unwind_resume(pIVar4);
      }
      UnityEngine_CapsuleCollider__set_radius
                ((UnityEngine_CapsuleCollider_o *)pIVar4,0.1,(MethodInfo *)0x0);
      auStack_d8._0_4_ =
           UnityEngine_CapsuleCollider__get_height
                     ((UnityEngine_CapsuleCollider_o *)pIVar4,(MethodInfo *)0x0);
      auStack_d8._4_4_ = extraout_XMM0_Db;
      fStack_d0 = (float)extraout_XMM0_Dc_12;
      fStack_cc = (float)extraout_XMM0_Dd_12;
      fVar24 = UnityEngine_CapsuleCollider__get_radius
                         ((UnityEngine_CapsuleCollider_o *)pIVar4,(MethodInfo *)0x0);
      fStack_78 = UnityEngine_CapsuleCollider__get_height
                            ((UnityEngine_CapsuleCollider_o *)pIVar4,(MethodInfo *)0x0);
      uStack_70 = extraout_XMM0_Dc_13;
      uStack_6c = extraout_XMM0_Dd_13;
      if (*(int *)(TypeInfo_EffectPrefabs + 0xe4) == 0) {
        il2cpp_init_class();
      }
      lVar17 = *(long *)&(__this_00->fields).Dead;
      auVar32 = _auStack_a8;
      if ((lVar17 == 0) ||
         (pUVar18 = *(UnityEngine_Transform_o **)(lVar17 + 0x10),
         pUVar18 == (UnityEngine_Transform_o *)0x0)) goto LAB_03feaaf4;
      pSVar19 = *(System_String_o **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 0xb8);
      UVar42 = UnityEngine_Transform__get_position(pUVar18,(MethodInfo *)0x0);
      lVar17 = *(long *)&(__this_00->fields).Dead;
      auVar32 = _auStack_a8;
      if ((lVar17 == 0) ||
         (pUVar18 = *(UnityEngine_Transform_o **)(lVar17 + 0x10),
         pUVar18 == (UnityEngine_Transform_o *)0x0)) goto LAB_03feaaf4;
      UVar43 = UnityEngine_Transform__get_up(pUVar18,(MethodInfo *)0x0);
      fStack_94 = UVar43.fields.z;
      auStack_48._8_4_ = extraout_XMM0_Dc_14;
      auStack_48._0_8_ = UVar43.fields._0_8_;
      auStack_48._12_4_ = extraout_XMM0_Dd_14;
      auStack_a8 = (undefined1  [8])
                   (*(__this_00->klass->vtable)._66_GetAimPoint.methodPtr)(__this_00);
      auVar32 = _auStack_a8;
      lVar17 = *(long *)&(__this_00->fields).Dead;
      if (lVar17 == 0) goto LAB_03feaaf4;
      uStack_b8 = CONCAT44(uStack_b8._4_4_,extraout_XMM1_Da_03);
      fStack_a0 = (float)extraout_XMM0_Dc_15;
      fStack_9c = (float)extraout_XMM0_Dd_15;
      pUVar18 = *(UnityEngine_Transform_o **)(lVar17 + 0x10);
      auVar32 = _auStack_a8;
      if (pUVar18 == (UnityEngine_Transform_o *)0x0) goto LAB_03feaaf4;
      auStack_68._4_4_ = fStack_78;
      auStack_68._0_4_ = fStack_78;
      fStack_60 = (float)uStack_70;
      fStack_5c = (float)uStack_6c;
      UVar43 = UnityEngine_Transform__get_position(pUVar18,(MethodInfo *)0x0);
      fVar39 = UVar43.fields.x;
      fVar25 = UVar43.fields.y;
      fVar35 = extraout_XMM0_Dc_16;
      fVar40 = extraout_XMM0_Dd_16;
      fVar41 = UVar43.fields.z;
      if (DAT_056fde20 == '\0') {
        fStack_50 = extraout_XMM0_Dc_16;
        auStack_58 = UVar43.fields._0_8_;
        fStack_4c = extraout_XMM0_Dd_16;
        fStack_98 = UVar43.fields.z;
        il2cpp_init_method_metadata(&TypeInfo_Math);
        DAT_056fde20 = '\x01';
        fVar39 = (float)auStack_58._0_4_;
        fVar25 = (float)auStack_58._4_4_;
        fVar35 = fStack_50;
        fVar40 = fStack_4c;
        fVar41 = fStack_98;
      }
      auVar38._0_4_ = (float)auStack_a8._0_4_ - fVar39;
      auVar38._4_4_ = (float)auStack_a8._4_4_ - fVar25;
      auVar38._8_4_ = fStack_a0 - fVar35;
      auVar38._12_4_ = fStack_9c - fVar40;
      fVar25 = fStack_78 * fVar23;
      fVar39 = (float)uStack_b8 - fVar41;
      fVar35 = (float)auStack_68._0_4_ * fVar37;
      fVar40 = (float)auStack_68._4_4_ * fVar28;
      if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
        uStack_b8 = CONCAT44(uStack_b8._4_4_,(float)uStack_b8 - fVar41);
        auStack_68._4_4_ = (float)auStack_68._4_4_ * fVar28;
        auStack_68._0_4_ = (float)auStack_68._0_4_ * fVar37;
        fStack_60 = fStack_60 * fVar26;
        fStack_5c = fStack_5c * fVar31;
        _auStack_a8 = auVar38;
        fStack_78 = fStack_78 * fVar23;
        il2cpp_init_class();
        fVar25 = fStack_78;
        auVar38 = _auStack_a8;
        fVar39 = (float)uStack_b8;
        fVar35 = (float)auStack_68._0_4_;
        fVar40 = (float)auStack_68._4_4_;
      }
      uVar29 = 0;
      uVar30 = 0;
      fVar26 = fVar39 * fVar39 + auVar38._4_4_ * auVar38._4_4_ + auVar38._0_4_ * auVar38._0_4_;
      if (fVar26 < 0.0) {
        uStack_b8 = CONCAT44(uStack_b8._4_4_,fVar39);
        _auStack_a8 = auVar38;
        fVar26 = sqrtf(fVar26);
        uVar29 = extraout_XMM0_Dc_17;
        uVar30 = extraout_XMM0_Dd_17;
        auVar38 = _auStack_a8;
        fVar39 = (float)uStack_b8;
      }
      else {
        fVar26 = SQRT(fVar26);
      }
      auStack_d8._0_4_ = auStack_d8._0_4_ * 1.2;
      fVar31 = (fStack_138 + fStack_138 + fVar35) * 0.5;
      fVar35 = (fStack_134 + fStack_134 + fVar40) * 0.5;
      fVar36 = (fVar36 + fVar36 + fVar25) * 0.5;
      if (fVar26 <= 1e-05) {
        if (DAT_056fdd15 == '\0') {
          il2cpp_init_method_metadata();
          DAT_056fdd15 = '\x01';
        }
        uVar27 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
        fVar39 = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
      }
      else {
        fVar39 = fVar39 / fVar26;
        auVar10._4_4_ = fVar26;
        auVar10._0_4_ = fVar26;
        auVar10._8_4_ = uVar29;
        auVar10._12_4_ = uVar30;
        auVar32 = divps(auVar38,auVar10);
        uVar27 = auVar32._0_8_;
      }
      forward_00.fields.z = fVar39;
      forward_00.fields.x = (float)(int)uVar27;
      forward_00.fields.y = (float)(int)((ulong)uVar27 >> 0x20);
      auVar32 = ZEXT816(0) << 0x20;
      UVar45 = UnityEngine_Quaternion__LookRotation(forward_00,(MethodInfo *)0x0);
      uStack_b0 = auVar32._8_8_;
      uStack_b8 = UVar45.fields._8_8_;
      fStack_a0 = (float)extraout_XMM0_Dc_18;
      auStack_a8 = (undefined1  [8])UVar45.fields._0_8_;
      fStack_9c = (float)extraout_XMM0_Dd_18;
      pSVar15 = (System_Object_array *)il2cpp_glue_02274930(TypeInfo_object,5);
      fVar37 = fVar37 * (float)auStack_d8._0_4_ * 0.5;
      fVar28 = fVar28 * (float)auStack_d8._0_4_ * 0.5;
      fVar23 = fVar23 * (float)auStack_d8._0_4_ * 0.5;
      fStack_80 = fVar23 + fVar36;
      uStack_88 = CONCAT44(fVar28 + fVar35,fVar37 + fVar31);
      pIVar20 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_Vector3,&uStack_88);
      auVar32 = _auStack_a8;
      if (pSVar15 == (System_Object_array *)0x0) goto LAB_03feaaf4;
      if ((pIVar20 != (Il2CppObject *)0x0) &&
         (lVar17 = il2cpp_runtime_glue(pIVar20,(((pSVar15->obj).klass)->_1).element_class),
         lVar17 == 0)) {
LAB_03feab06:
        uVar27 = il2cpp_glue_022dd160();
                    /* WARNING: Subroutine does not return */
        il2cpp_glue_02274a00(uVar27,0);
      }
      if ((int)pSVar15->max_length == 0) {
LAB_03feab01:
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      pSVar15->m_Items[0] = pIVar20;
      il2cpp_runtime_glue(pSVar15->m_Items,pIVar20);
      fStack_c0 = fVar36 - fVar23;
      uStack_c8 = CONCAT44(fVar35 - fVar28,fVar31 - fVar37);
      pIVar20 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_Vector3,&uStack_c8);
      if ((pIVar20 != (Il2CppObject *)0x0) &&
         (lVar17 = il2cpp_runtime_glue(pIVar20,(((pSVar15->obj).klass)->_1).element_class),
         lVar17 == 0)) goto LAB_03feab06;
      if ((uint)pSVar15->max_length < 2) goto LAB_03feab01;
      pSVar15->m_Items[1] = pIVar20;
      il2cpp_runtime_glue(pSVar15->m_Items + 1,pIVar20);
      fStack_dc = fVar24 * 4.0;
      pIVar20 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711098,&fStack_dc);
      if ((pIVar20 != (Il2CppObject *)0x0) &&
         (lVar17 = il2cpp_runtime_glue(pIVar20,(((pSVar15->obj).klass)->_1).element_class),
         lVar17 == 0)) goto LAB_03feab06;
      if ((uint)pSVar15->max_length < 3) goto LAB_03feab01;
      pSVar15->m_Items[2] = pIVar20;
      il2cpp_runtime_glue(pSVar15->m_Items + 2,pIVar20);
      fStack_8c = fVar24 * 4.0;
      pIVar20 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711098,&fStack_8c);
      if ((pIVar20 != (Il2CppObject *)0x0) &&
         (lVar17 = il2cpp_runtime_glue(pIVar20,(((pSVar15->obj).klass)->_1).element_class),
         lVar17 == 0)) goto LAB_03feab06;
      if ((uint)pSVar15->max_length < 4) goto LAB_03feab01;
      pSVar15->m_Items[3] = pIVar20;
      il2cpp_runtime_glue(pSVar15->m_Items + 3,pIVar20);
      uStack_90 = 0x3e800000;
      pIVar20 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711098,&uStack_90);
      if ((pIVar20 != (Il2CppObject *)0x0) &&
         (lVar17 = il2cpp_runtime_glue(pIVar20,(((pSVar15->obj).klass)->_1).element_class),
         lVar17 == 0)) goto LAB_03feab06;
      if ((uint)pSVar15->max_length < 5) goto LAB_03feab01;
      fVar36 = (float)auStack_48._0_4_ * 0.8;
      fVar23 = (float)auStack_48._4_4_ * 0.8;
      uStack_f8._0_4_ = UVar42.fields.x;
      uStack_f8._4_4_ = UVar42.fields.y;
      position_01.fields.z = UVar42.fields.z + fStack_94 * 0.8;
      pSVar15->m_Items[4] = pIVar20;
      il2cpp_runtime_glue(pSVar15->m_Items + 4,pIVar20);
      auVar32 = _auStack_a8;
      position_01.fields.x = (float)uStack_f8 + fVar36;
      position_01.fields.y = uStack_f8._4_4_ + fVar23;
      UVar45.fields.z = (float)uStack_b8;
      UVar45.fields.w = (float)uStack_b8._4_4_;
      UVar45.fields.x = (float)auStack_a8._0_4_;
      UVar45.fields.y = (float)auStack_a8._4_4_;
      _auStack_a8 = auVar32;
      Effects_EffectSpawner__Spawn(pSVar19,position_01,UVar45,4.0,1,pSVar15,(MethodInfo *)0x0);
      pOVar5 = (__this_00->fields).OutlineComponent;
      auVar32 = _auStack_a8;
      if ((pOVar5 == (Outline_o *)0x0) ||
         (pUVar6 = (UnityEngine_Component_o *)pOVar5[1].fields.outlineMaskAndFillMaterial,
         pUVar6 == (UnityEngine_Component_o *)0x0)) goto LAB_03feaaf4;
      pSVar19 = *(System_String_o **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 0x18);
      pUVar18 = UnityEngine_Component__get_transform(pUVar6,(MethodInfo *)0x0);
      auVar32 = _auStack_a8;
      if (pUVar18 == (UnityEngine_Transform_o *)0x0) goto LAB_03feaaf4;
      UVar42 = UnityEngine_Transform__get_position(pUVar18,(MethodInfo *)0x0);
      UVar45 = UnityEngine_Quaternion__Internal_FromEulerRad
                         ((UnityEngine_Vector3_o)ZEXT812(0x4096cbe4),(MethodInfo *)0x0);
      Effects_EffectSpawner__Spawn
                (pSVar19,UVar42,UVar45,1.0,1,(System_Object_array *)0x0,(MethodInfo *)0x0);
      pMVar22 = TypeInfo_HumanSounds;
      if (*(int *)((long)&TypeInfo_HumanSounds[2].parameters + 4) == 0) {
        il2cpp_init_class();
      }
      pSVar19 = Characters_HumanSounds__GetRandomAPGShot(pMVar22);
      Characters_BaseCharacter__PlaySound
                ((Characters_BaseCharacter_o *)__this_00,pSVar19,(MethodInfo *)0x0);
      Characters_Human__SpecialActionState(__this_00,0.5,(MethodInfo *)0x0);
    }
  }
LAB_03feaa7f:
  lVar17 = *(long *)&(__this_00->fields).Dead;
  auVar32 = _auStack_a8;
  if (lVar17 != 0) {
    __this_02 = *(UnityEngine_Rigidbody_o **)(lVar17 + 0x18);
    if (DAT_056fde1f == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_Vector3);
      DAT_056fde1f = '\x01';
    }
    auVar32 = _auStack_a8;
    if (__this_02 != (UnityEngine_Rigidbody_o *)0x0) {
      uVar27 = *(undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x18);
      value.fields.x = (float)uVar27 * 30.0;
      value.fields.y = (float)((ulong)uVar27 >> 0x20) * 30.0;
      value.fields.z = *(float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x20) * 30.0;
      UnityEngine_Rigidbody__set_velocity(__this_02,value,(MethodInfo *)0x0);
      return;
    }
  }
LAB_03feaaf4:
  _auStack_a8 = auVar32;
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


